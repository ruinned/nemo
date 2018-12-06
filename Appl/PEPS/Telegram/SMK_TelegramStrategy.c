
#include "type.h"
#include "define.h"
#include "timer.h"
#include "data.h"
#include "pj_define.h"
//#include "eeprom.h"
#include "Dio.h"

//#include "encryption.h"
#include "SMK_Telegram_Type.h"
#include "SMK_Telegram.h"
//#include "SMK_TelegramTuning.h"
#include "AES128.h"
//#include "SMK_RFIC.h"
//#include "SMK_LFIC.h"
#include "CRC4.h"
#include "Rte_Telegram.h"


/* ANSI - C Library */
//#include	"math.h"

static void bit_add(u8 data, u8 size);
static void manchestercode_add(u8 data, u8 size);
static void LF_Pending_Control(u8 order);

static u8	FixLF_TelegramMode(void);
static void SetupLF_Data(void);


u8	Check_Passive_Encryption(const u8 enc[]);
static void LF_Failsafe_ISR_Timeout(void);
static void	Store_AuthData(void);
static u16	Read_FOB_RandomCounter(const u8 rcv_data[]);
static void Clear_RcvSearchData(void);

//static void Default_CALIB_LF_RF_Tunning(void);
//extern void SetupLF_Telegram(void);

extern u8 Calculate_LocaRSSI(u8 RcvValidFob[],u8 AntIndex);
extern u8 Calculate_AuthRSSI(u8 RcvValidFob, u8 AntIndex);


e_LF_RF_Telegram	e_LF_RF_TelegramStep = kLF_RF_Telegram_Idle;

t_LF_SearchTelegram	st_Telegram;
static	t_EncryptionManager	st_EncBlock[4];

extern const	t_LF_SearchTelegram	tbl_LF_SearchSchedule[LF_SEARCHMODE_MAX];

static const u8	tbl_DataBitAdd[] = {0x01u,0x02u,0x04u,0x08u,0x10u,0x20u,0x40u,0x80u};
static const u8	tbl_DataBitAddReverse[] = {128u,64u,32u,16u,8u,4u,2u,1u};
static const u8	tbl_ManchesterDataAdd[] = {0x1u,0x2u};
static const u8	tbl_ManchesterData1Reverse[] = {0x40u,0x20u,0x10u,0x08u,0x04u,0x02u,0x01u,0x00u};
static const u8	tbl_ManchesterData0Reverse[] = {0x80u,0x40u,0x20u,0x10u,0x08u,0x04u,0x02u,0x01u};

static	u8		Telegram_CurrentSearchOrder = 0u;
static	e_LF_SearchMode		Telegram_CurrentSearchMode = kLF_SearchMode_None;
static	u8		Counter_SearchRetry = 0u;
static	u8		b_TelegramStartStatus = 0u;	
static	u8		b_HfreeSetFobFoundResult[kMax_FOB+1u] = {0u,};	/* TwicePressRKESetting Fob Check */
static	u8		b_ValidFobFoundResult[kMax_FOB+1u] = {0u,};
static	u8		ValidAuthFobNum = Par_FobNone;
static	u8		ExpectedAuthFobNum = Par_FobNone; 
static	u8		AuthSearchTargetFobID = kSearchID_None;
static	u8		Buffer_LFTelegramData[20] = {0u,};
static	u8 		Counter_LFDataBit = 0u;
static	u8		Counter_LFDataBitRemainder = 0u;
static	u8 		Counter_LFDataByte = 0u;
static	u16		Counter_TelegramRandom = 0u;
static	u8		b_LFPeriodicSearchPending = 0u;
u8		Buffer_LFRawData[LF_DATA_BUFFER_MAX] = {0u,};
u16		Counter_LFRawDataBit = 0u;
u8				AES128_EncryptionKey[16]={0,};

// u8	b_ValidFobFoundResult[4] = {0,};
u8	b_FobFound_OK = Off;

extern void Default_CALIB_LF_RF_Tunning(void);

u16 Loca_RSSI[4][kANTENA_INDEX_MAX]={0,};	/* ���׳� �� Location Search RSSI �� */
u16 Auth_RSSI[kANTENA_INDEX_MAX][3]={0,};	/* ���׳� �� Auth Search RSSI �� */
u8 Auth_RSSIcos[kANTENA_INDEX_MAX][3]={0,};	/* ���׳� �� Auth Search RSSI cosine �� */


/* Client Server Interface */
// #define R_Get_Memorized_FOB()			Rte_Call_R_Get_Memorized_RKE_CS()


/* call after buffer all clear */
static void	bit_add(u8 data, u8 size)
{
	u8	bit_pos_src = 0u; 
	u8	bit_pos_tar = 0u;
	u8	byte_pos = 0u;

	while(size!=0u)
	{
		bit_pos_src = tbl_DataBitAdd[size-1];
		bit_pos_tar = tbl_DataBitAddReverse[Counter_LFRawDataBit&0x07];
		byte_pos = (u8)(Counter_LFRawDataBit>>3);
		
		if((data&bit_pos_src)!=0u)	{Buffer_LFRawData[byte_pos]|=bit_pos_tar;}
	
		size--;
		Counter_LFRawDataBit++;
	}	
}


/* call after buffer all clear */
static void	manchestercode_add(u8 data, u8 size)
{
	u8	manchester_pos_src = 0u; 
	u8	manchester_pos_tar = 0u;
	u8	byte_pos= 0u;

	while(size!=0u)
	{
		manchester_pos_src = tbl_DataBitAdd[size-1];

		if((data&manchester_pos_src)!=0x0u)	{manchester_pos_tar = tbl_ManchesterData1Reverse[Counter_LFRawDataBit&0x07];}
		else								{manchester_pos_tar = tbl_ManchesterData0Reverse[Counter_LFRawDataBit&0x07];}
		
		byte_pos = (u8)(Counter_LFRawDataBit>>3);
		Buffer_LFRawData[byte_pos]|=manchester_pos_tar;
		
		if(Counter_LFRawDataBit&0x0007==0x0007)
		{
			if((data&manchester_pos_src)!=0x0u)	{Buffer_LFRawData[byte_pos+1]|=0x80u;}
			else								{Buffer_LFRawData[byte_pos+1]|=0x00u;}
		}
		
		size--;
		Counter_LFRawDataBit = Counter_LFRawDataBit+2;
		
	}	
}


#define	Par_LFPeriodicSearchPendingTimeOut 	Time_ms(1000u)

static	tTIMER8 	Timer_LFPeriodicSearchPending = {Off,0};


static void	LF_Pending_Control(u8 order)
{	
	#if 0 //scim
	if(	((order == kLF_Search_Authentication) ||
		 (order == kLF_Search_Trunk_Open) ||
		 (order == kLF_Search_TailGate_Open)) &&	
		((Telegram_CurrentSearchOrder == kLF_Search_WelcomeLight) ||
		 (Telegram_CurrentSearchOrder == kLF_Search_HandsFreeAuth) ||
		 (Telegram_CurrentSearchOrder == kLF_Search_HandsFreeRegist)) 
	)
	{
		e_LF_RF_TelegramStep = kLF_RF_Telegram_Idle;
	}
	else
	if(	((order == kLF_Search_Authentication) ||
		 (order == kLF_Search_Trunk_Open) ||
		 (order == kLF_Search_TailGate_Open) ||
		 (order == kLF_Search_FL_Unlock) ||
		 (order == kLF_Search_FR_Unlock) ||
		 (order == kLF_Search_WelcomeLight) ||
		 (order == kLF_Search_WelcomeLightLong)) &&
		((Telegram_CurrentSearchOrder == kLF_Search_WelcomeLightShort) ||
		 (Telegram_CurrentSearchOrder == kLF_Search_WelcomeLightLong))
	)
	{
		SetC(b_FobSearch,FobSearch_NoFound);
		Rte_Call_R_StopLF_Periodic_Telegram_CS();	
		StartTimer(Timer_LFPeriodicSearchPending);
			
		e_LF_RF_TelegramStep = kLF_RF_Telegram_Idle;
		b_LFPeriodicSearchPending = On;
	} 
	else
	{}
	#endif //scim
}


u8 LF_confirm_wait = Off;

void StartLF_Telegram(u8 order)
{	
	//LF_Pending_Control(order);  
	
	if(e_LF_RF_TelegramStep==kLF_RF_Telegram_Idle)
	{
		Telegram_CurrentSearchOrder = order;

		switch(Telegram_CurrentSearchOrder)
		{
		case	kLF_Search_FL_Unlock:
		case	kLF_Search_FL_Lock:
			Telegram_CurrentSearchMode = kLF_SearchMode_LH_side;
			break;

		case	kLF_Search_FL_LockWarning2:
		case	kLF_Search_FL_LockWarning1:
			Telegram_CurrentSearchMode = kLF_SearchMode_LH_side_NoAuth;
			break;			

		case	kLF_Search_FR_Unlock:
		case	kLF_Search_FR_Lock:
			Telegram_CurrentSearchMode = kLF_SearchMode_RH_side;
			break; 
		
		case	kLF_Search_FR_LockWarning2:
		case	kLF_Search_FR_LockWarning1:
			Telegram_CurrentSearchMode = kLF_SearchMode_RH_side_NoAuth;
			break;

		case	kLF_Search_IDOUT_Warning:
		case	kLF_Search_KeyOut_Warning:
		case	kLF_Search_Reminder1:
		case	kLF_Search_Reminder2:			
		case	kLF_Search_Authentication:
		case	kLF_Search_PreAuthentication:	
			Telegram_CurrentSearchMode = kLF_SearchMode_Interior;
			break;
			
		case	kLF_Search_FL_LockWarning3:
		case	kLF_Search_FR_LockWarning3:
		case	kLF_Search_BatteryDepletion:
		case	kLF_Search_Deactivation:
			Telegram_CurrentSearchMode = kLF_SearchMode_Interior_NoAuth;
			break;
	
		case	kLF_Search_Trunk_Open:
		case	kLF_Search_TailGate_Open:
		case	kLF_Search_Trunk_Warning:
		case	kLF_Search_HandsFreeAuth:
			Telegram_CurrentSearchMode = kLF_SearchMode_Bumper;
			break;
			
		case	kLF_Search_WelcomeLight:
		case	kLF_Search_WelcomeLightShort:
		case	kLF_Search_WelcomeLightLong:			
			Telegram_CurrentSearchMode = kLF_SearchMode_Welcome;
			break;

		case	kLF_Search_HandsFreeRegist:	
			Telegram_CurrentSearchMode = kLF_SearchMode_HandsFree;
			break;

		case	kLF_Search_WelcomeHandsFree:	// ���� ���
			Telegram_CurrentSearchMode = kLF_SearchMode_WelcomeHandsFree;
			break;

		case	kLF_Search_Diag_Type2_Interior1:
			Telegram_CurrentSearchMode = kLF_SearchMode_Diag_Type2_Interior1;
			break;

		case	kLF_Search_Diag_Type2_Interior2:
			Telegram_CurrentSearchMode = kLF_SearchMode_Diag_Type2_Interior2;
			break;

		case	kLF_Search_Diag_Type2_Trunk:
			Telegram_CurrentSearchMode = kLF_SearchMode_Diag_Type2_Trunk;
			break;

		case	kLF_Search_Diag_Type2_Bumper:
			Telegram_CurrentSearchMode = kLF_SearchMode_Diag_Type2_Bumper;
			break;

		case	kLF_Search_Diag_Type2_LH_side:
			Telegram_CurrentSearchMode = kLF_SearchMode_Diag_Type2_LH_side;
			break;

		case	kLF_Search_Diag_Type2_RH_side:
			Telegram_CurrentSearchMode = kLF_SearchMode_Diag_Type2_RH_side;
			break;

		case	kLF_Search_Diag_Type3_Interior1:
			Telegram_CurrentSearchMode = kLF_SearchMode_Diag_Type3_Interior1;
			break;

		case	kLF_Search_Diag_Type3_Interior2:
			Telegram_CurrentSearchMode = kLF_SearchMode_Diag_Type3_Interior2;
			break;

		case	kLF_Search_Diag_Type3_Trunk:
			Telegram_CurrentSearchMode = kLF_SearchMode_Diag_Type3_Trunk;
			break;

		case	kLF_Search_Diag_Type3_Bumper:
			Telegram_CurrentSearchMode = kLF_SearchMode_Diag_Type3_Bumper;
			break;

		case	kLF_Search_Diag_Type3_LH_side:
			Telegram_CurrentSearchMode = kLF_SearchMode_Diag_Type3_LH_side;
			break;

		case	kLF_Search_Diag_Type3_RH_side:
			Telegram_CurrentSearchMode = kLF_SearchMode_Diag_Type3_RH_side;
			break;

		default: 
			Telegram_CurrentSearchMode = kLF_SearchMode_None;			
			break;
		}

		Telegram_CurrentSearchMode = Telegram_CurrentSearchMode * 2;


		#if 0
		if(BAT_stab_finish_flg == On) 
		{/* ���͸� ����ȭ�� �Ϸ�� ������ ��� ���� ���μ��� ó�� ��� */
			b_TelegramStartStatus = On;
		}
		else
		if(BAT_stab_finish_flg == Off)
		{/* ���͸� ����ȭ �̿Ϸ� �ÿ��� pending ó���Ͽ� ���͸� ����ȭ �Ϸ� �� ���� �ǵ��� ó�� */
			SetC(b_FobSearch,FobSearch_Progress);
			LF_confirm_wait = On;
			R_LowPower_Prevent(SMK_OUTPUT_LP_FLAG);
		}
		else
		{}
		#else
		b_TelegramStartStatus = On;
		#endif

		/* clear RF data buffer */
		Clear_RcvSearchData();
	}
}


void PassiveEncryptionManager(void)
{
#if 0
	u8	func_i = 0u;
	u8	j = 0u;
	
	for(func_i=0u; func_i<4u; func_i++)
	{
		if(st_EncBlock[func_i].encryption_mode<1u)
		{
			break;
		}
	}
	if(func_i<4)
	{
		if(st_EncBlock[func_i].encryption_mode==0u)
		{
			j = ((u8)(func_i-(u8)(Counter_TelegramRandom&3)))&3;
			st_EncBlock[func_i].random_counter = Counter_TelegramRandom+(u16)j;
			R_Get_SecurityKeyNumber(st_EncBlock[func_i].vehicle_encryption);
			st_EncBlock[func_i].vehicle_encryption[3] = (u8)(st_EncBlock[func_i].random_counter&0xff);
			st_EncBlock[func_i].vehicle_encryption[4] = (u8)(st_EncBlock[func_i].random_counter>>8);
			EncryptionPassiveTrs(&st_EncBlock[func_i].vehicle_encryption[1]);
			st_EncBlock[func_i].encryption_mode++;
		}
	}
#endif
}

void Generate_Telegram_EncryptionKey(u8 data[])
{
	data[0] = (u8)'S';	/* Seo */
	data[1] = (u8)'Y';	/* Yon */	
	data[2] = (u8)'E';	/* Electronics */
	data[3] = (u8)'-';	/* - */
	data[4] = (u8)'E';	/* Electronics */
	data[5] = (u8)'D';	/* Design */
	data[6] = (u8)'3';	/* 3 team */
	data[7] = (u8)'A';
	data[8] = (u8)'B';
	data[9] = (u8)'C';
	data[10] = (u8)'D';
	data[11] = (u8)'E';
	data[12] = (u8)'F';
	#if 1
	data[13] = (u8)'G';
	data[14] = (u8)'H';
	data[15] = (u8)'I';
	#else
	data[13] = (u8)(Get_EepromData_LEARNT(eSKN)^0x65);
	data[14] = (u8)(Get_EepromData_LEARNT(eSKN+1)^0x43);
	data[15] = (u8)(Get_EepromData_LEARNT(eSKN+2)^0x21);
	#endif
}


void Reset_Encryption_Manager(void)
{
	u8	func_i = 0u;

	for(func_i=0; func_i<4; func_i++)
	{
		st_EncBlock[func_i].encryption_mode = 0;
	}
}

static u8 IsActiveEncryption(void);
static u8 IsActiveEncryption(void)
{
	u8	func_i = 0u;
	
	func_i = (u8)((st_EncBlock[Counter_TelegramRandom&3].encryption_mode<1) ? 0 : 1);
	
	return	func_i;
}




/*
description	: encryption compare
input		: passive response data
output		: 0 = compare result fail
			  n = correct compared FOB number
*/
u8 Check_Passive_Encryption(const u8 enc[])
{
	#if 0 //scim
	u8	i = 0;
	u8	j = eFobInfo;
	
	for(i=0; i<kMax_FOB; i++)
	{
		if(	(Get_EepromData_FOB(j)==Learnt)||
			((Get_EepromData_FOB(j)==Deact)&&
			(Telegram_CurrentSearchOrder==kLF_Search_Trunk_Warning)))
		{
			if(	(Get_EepromData_FOB(j+1u)==enc[0])&&
				(Get_EepromData_FOB(j+2u)==enc[1])&&
				(Get_EepromData_FOB(j+3u)==enc[2]))
			{
				break;
			}
		}
		j += sizeEE_FOB;
	}
	
	if(i<kMax_FOB)	{i++;}
	else			{i=0;}
	
	return	i;
	#endif  //scim
}






static u8 FixLF_TelegramMode(void)
{

	u8 rtn = 0u;

	st_Telegram = tbl_LF_SearchSchedule[Telegram_CurrentSearchMode];
	
	if(st_Telegram.SearchPattern == kSEARCH_LOCATION)			{rtn = kRFIC_SysMode_RcvRF_Loca;}
	else if(st_Telegram.SearchPattern == kSEARCH_AUTHENTICATION)	{rtn = kRFIC_SysMode_RcvRF_Auth;}
	else if(st_Telegram.SearchPattern == kSEARCH_WELCOME)		{rtn = kRFIC_SysMode_RcvRF_WlHn;}
	else if(st_Telegram.SearchPattern == kSEARCH_HANDSFREE)		{rtn = kRFIC_SysMode_RcvRF_WlHn;}
	else if(st_Telegram.SearchPattern == kSEARCH_FACTORY)		{rtn = kRFIC_SysMode_RcvRF_Loca;}
	else 														{rtn = kRFIC_SysMode_Idle;}

	return rtn;
}


static void SetupLF_Data(void)
{	
	u8	func_i = 0u;
	u8	func_j = 0u;
	u8	rf_crc_4bit = 0u;

	Counter_SearchRetry = 0u;

	if( (st_Telegram.SearchPattern==kSEARCH_LOCATION) ||
		(st_Telegram.SearchPattern==kSEARCH_WELCOME) ||
		(st_Telegram.SearchPattern==kSEARCH_HANDSFREE)
	)
	{/* non-encryption */

		Buffer_LFTelegramData[0]=0x12;	/* Get SKN 24bit */
		Buffer_LFTelegramData[1]=0x34;	/* Get SKN 24bit */
		Buffer_LFTelegramData[2]=0x56;	/* Get SKN 24bit */
		Counter_LFDataBit = 24;

		Buffer_LFTelegramData[3] = st_Telegram.SearchPattern; /* Command 4bit */
		Counter_LFDataBit += 4;
	}
	else 
	if(st_Telegram.SearchPattern==kSEARCH_AUTHENTICATION)
	{/* non-encryption */
	
		Buffer_LFTelegramData[0]=0x12;	/* Get SKN 24bit */
		Buffer_LFTelegramData[1]=0x34;	/* Get SKN 24bit */
		Buffer_LFTelegramData[2]=0x56;	/* Get SKN 24bit */

		Counter_LFDataBit = 24;

	#if 1
		Buffer_LFTelegramData[3] = st_Telegram.SearchPattern; /* Command 4bit */
		Buffer_LFTelegramData[4] = 0x01; /* Target Fob ID 4bit */
		Buffer_LFTelegramData[5] = 0xAA; /* random high 8bit */
		Buffer_LFTelegramData[6] = 0xBB; /* random low 8bit */
		Buffer_LFTelegramData[7] = 0x34;		/* SKN Middle 8bit */
		Buffer_LFTelegramData[8] = 0x56;		/* SKN Low 8bit */
		Counter_LFDataBit += 40;
	#else
		/* non-encryption data : 1byte(4bit + 4bit) */
		Buffer_LFTelegramData[3] = st_Telegram.SearchPattern; /* Command 4bit */
		Buffer_LFTelegramData[4] = AuthSearchTargetFobID; /* Target Fob ID 4bit */
			
		/* encryption data : 4byte */
		func_j = (u8)(Counter_TelegramRandom&3);
		for(func_i=1; func_i<5; func_i++)
		{
			Buffer_LFTelegramData[func_i+4] = st_EncBlock[func_j].vehicle_encryption[func_i]; /* random 16bit + SKN 16bit(middle+low) */	
		}
		Counter_LFDataBit += 40;	/* 5byte */
	#endif

	}
	else 
	if(st_Telegram.SearchPattern==kSEARCH_FACTORY)
	{/* non-encryption */
		Buffer_LFTelegramData[0] = 0xAAu;
		Buffer_LFTelegramData[1] = 0x55u;
		Buffer_LFTelegramData[2] = 0xAAu;
		Counter_LFDataBit = 24;

		Buffer_LFTelegramData[3] = st_Telegram.SearchPattern; /* Command 4bit */
		Counter_LFDataBit += 4;
	}
	else
	{
		Counter_LFDataBit = 0;
	}

	/* configure buffer Clear */
	Counter_LFRawDataBit = 0;
	for(func_i=0; func_i<LF_DATA_BUFFER_MAX; func_i++)
	{
		Buffer_LFRawData[func_i]=0;
	}
	
/* ====================================================================================================== */
/* Header(Preburst + Sync + SKN) /Encoding: Manchester */

	/* PreBurst(Preamble) */
	/* 4.096ms = 16bit * 0.256ms */
	bit_add(0xAA,8); // 4 	10 10 10 10
	bit_add(0xAA,8); // 8 	10 10 10 10
	bit_add(0xAA,8); // 12 	10 10 10 10
	bit_add(0xAA,8); // 16	10 10 10 10
	
	/* Sync(0x96D) */
	/* 1.536ms = 6bit * 0.256ms */
	bit_add(0x09,4); // 10 01
	bit_add(0x6D,8); // 01 10 11 01

	/* SKN */
	/* 6.144ms = 24bit * 0.256ms */ 
	manchestercode_add(Buffer_LFTelegramData[0],8);
	manchestercode_add(Buffer_LFTelegramData[1],8);
	manchestercode_add(Buffer_LFTelegramData[2],8);
	
/* ====================================================================================================== */
/* Payload /Encoding: Manchester */

	/* Location Search / Welcome Search / Handsfree Search */
	/* 1.024ms = 4bit * 0.256ms */
	if( (st_Telegram.SearchPattern==kSEARCH_LOCATION) ||
		(st_Telegram.SearchPattern==kSEARCH_WELCOME) ||
		(st_Telegram.SearchPattern==kSEARCH_HANDSFREE) ||
		(st_Telegram.SearchPattern==kSEARCH_FACTORY)
	)
	{
		/* Location Search dummy add */
		manchestercode_add(0xFF,8); /* dummy 8bit */
	
		manchestercode_add(Buffer_LFTelegramData[3],4);	/* Command 4bit */
	}
	
	/* Authentication Search */
	else
	if(st_Telegram.SearchPattern==kSEARCH_AUTHENTICATION) 
	{
		
		/* Authentication Search dummy add */
		manchestercode_add(0xFF,8); /* dummy 8bit. �̹ݿ��Ͽ��� ��ɿ� ���� ������, Location Search�� �����ϰ� �ݿ� �� */
		
		manchestercode_add(Buffer_LFTelegramData[3],4);	/* Command 4bit */
		manchestercode_add(Buffer_LFTelegramData[4],4);	/* Fob ID 4bit */

		/* encryption data 32bit - random 16bit + SKN 16bit(middle+low) */	
		manchestercode_add(Buffer_LFTelegramData[5],8);	
		manchestercode_add(Buffer_LFTelegramData[6],8);	
		manchestercode_add(Buffer_LFTelegramData[7],8);	
		manchestercode_add(Buffer_LFTelegramData[8],8);	
	}
	else
	{}

/* ====================================================================================================== */
/* CRC(4bit) /Encoding: Manchester */	

	Counter_LFDataByte = (u8)((Counter_LFDataBit>>3)&0xff);	
	Counter_LFDataBitRemainder = Counter_LFDataBit%8;

	/* 1.024ms = 4bit * 0.256ms */
	rf_crc_4bit = check_crc4(Buffer_LFTelegramData,Counter_LFDataByte,Counter_LFDataBitRemainder);
	manchestercode_add(rf_crc_4bit,4);	
	
/* ====================================================================================================== */	
/* STOP(4Symbol - 0000) / Encoding: NRZ */

	/* STOP bit (Max 4 symbol ~ Min 3 Symbol) NRZ */
	/* 0.512ms = 2bit * 0.256ms */
	bit_add(0x00,4);	/* stopbit : 0000 */  

}



									
static void LF_Failsafe_ISR_Timeout(void)
{
	/* ���� ���� �ʿ� */
}

static	u8	T_RF_Wait_time = Par_RFWaitFOB4;

void Select_RF_WaitTime(void)
{
#if 0//scim 
	static	u8 max_fob_old = 0;
	u8	max_fob = 0;

	max_fob = R_Get_Memorized_FOB();

	if(max_fob_old!=max_fob)
	{
		if(	(max_fob==1u) ||
			(max_fob==2u)
		)
		{
			T_RF_Wait_time = Par_RFWaitFOB2;
		}
		else
		if(max_fob==3u)
		{
			T_RF_Wait_time = Par_RFWaitFOB3;
		}
		else
		if(max_fob==4u)
		{
			T_RF_Wait_time = Par_RFWaitFOB4;
		}
		else
		{
			T_RF_Wait_time = Par_RFWaitFOB4;
		}
		max_fob_old = max_fob;
	}
#endif
}



typedef enum
{
	kRfic_NoHigh = 0,
	kRfic_IRQ_High
} e_rfic_IRQHighCheck;

#define	Par_rficIRQHighTimeout	Time_ms(20u)		/* IRQ port High ���� �� ���� �ð� : �� 500us */

static	tTIMER8 	Timer_rficIRQHighTimeout = {Off,0};

void rfic_IRQ_HighFixCheck(void)
{
#if 0 
	static	e_rfic_IRQHighCheck 	e_rfic_IRQHighCheckStep;
	
	IoHwAb_LevelType b_IRQ_ReadData;

	Rte_Call_R_DigDir_RFIC_IRQ_ReadDirect(&b_IRQ_ReadData);

	UpTimer8(Timer_rficIRQHighTimeout);

	if (GetX(b_SMKSleepMode) == kOn)
	{/* LP TASK 20ms Periodic */
		UpTimer8(Timer_rficIRQHighTimeout);
	}

	switch(e_rfic_IRQHighCheckStep)
	{
	case	kRfic_NoHigh:
		if(	(e_LF_RF_TelegramStep == kLF_RF_Telegram_Idle) &&
			(b_IRQ_ReadData == On)
		)
		{
			StartTimer(Timer_rficIRQHighTimeout);
			e_rfic_IRQHighCheckStep = kRfic_IRQ_High;
		}		
		break;

	case	kRfic_IRQ_High:
		if( (e_LF_RF_TelegramStep != kLF_RF_Telegram_Idle) ||
			(b_IRQ_ReadData == Off)
		)
		{
			CancelTimer(Timer_rficIRQHighTimeout);
			e_rfic_IRQHighCheckStep = kRfic_NoHigh;
		}
		else
		if(Timer_rficIRQHighTimeout.time >= Par_rficIRQHighTimeout)
		{
			CancelTimer(Timer_rficIRQHighTimeout);

			if(GetX(TerminalControlState) == TCS_OFF)
			{
				Rte_Call_R_SearchSysMode_CS(kRFIC_SysMode_RcvRKE,rf_SpiReq0x04_GetEventBytes);		
			}
			else
			if( (GetX(TerminalControlState) == TCS_IGN) ||
				(GetX(A_IGN1_IN_SMK) == On)
			)
			{
				Rte_Call_R_SearchSysMode_CS(kRFIC_SysMode_RcvTPMS,rf_SpiReq0x04_GetEventBytes); 		
			}
			else
			{
				Rte_Call_R_SearchSysMode_CS(kRFIC_SysMode_Idle,rf_SpiReq0x04_GetEventBytes);
			}

			e_rfic_IRQHighCheckStep = kRfic_NoHigh;			
		}
		else
		{}
		break;

	default:
		break;
		
	}
#endif
}


void rfic_SysModeChange(void)
{
	u8	rfic_SysModeConfirmValue = 0;

	// (void)Rte_Read_R_rfic_SysModeConfirm_SR(&rfic_SysModeConfirmValue);

		
	/* OFF Change */
	if(	(IsChgEvt(TerminalControlState,TCS_OFF)) &&
		(e_LF_RF_TelegramStep == kLF_RF_Telegram_Idle)
	)
	{
		#if 0
		if(rfic_SysModeConfirmValue == kRFIC_SysMode_Idle)
		{
			Rte_Call_R_SearchSysMode_CS(kRFIC_SysMode_RcvRKE,rf_SpiReq0x0D_SetSystemMode);
		}
		else
		if(rfic_SysModeConfirmValue == kRFIC_SysMode_RcvRKE)
		{
			/* skip */
		}
		else
		{
			Rte_Call_R_SearchSysMode_CS(kRFIC_SysMode_RcvRKE,rf_SpiReqModeChgIdleAndOther);		
		}
		#else
			Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_RcvRKE,rf_SpiReqModeChgIdleAndOther);
		#endif
	}
	/* ACC Change */	
	else
	if(	(IsChgEvt(TerminalControlState,TCS_ACC)) &&
		(e_LF_RF_TelegramStep == kLF_RF_Telegram_Idle)
	)
	{
		#if 0
		if(rfic_SysModeConfirmValue == kRFIC_SysMode_Idle)
		{
			/* skip */
		}
		else
		{
			Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_Idle,rf_SpiReq0x0D_SetSystemMode); 	
		}
		#else
			Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_Idle,rf_SpiReq0x0D_SetSystemMode);
		#endif
	}
	/* IGN Change */	
	else
	if(	((IsChgEvt(TerminalControlState,TCS_IGN)) || ((GetX(TerminalControlState)!=TCS_OFF) && (IsOnEvt(A_IGN1_IN_SMK)))) &&
		(e_LF_RF_TelegramStep == kLF_RF_Telegram_Idle)
	)
	{
		#if 0
		if(rfic_SysModeConfirmValue == kRFIC_SysMode_Idle)
		{
			Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_RcvTPMS,rf_SpiReq0x0D_SetSystemMode);
		}
		else
		if(rfic_SysModeConfirmValue == kRFIC_SysMode_RcvTPMS)
		{
			/* skip */
		}
		else
		{
			Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_RcvTPMS,rf_SpiReqModeChgIdleAndOther);		
		}
		#else
			Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_RcvTPMS,rf_SpiReqModeChgIdleAndOther);
		#endif
	}
	/* IGN1 OFF Change */	
	else
	if(	(IsOffEvt(A_IGN1_IN_SMK)) &&
		(e_LF_RF_TelegramStep == kLF_RF_Telegram_Idle)
	)
	{
		if(GetX(TerminalControlState)==TCS_ACC)
		{
			Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_Idle,rf_SpiReqModeChgIdleAndOther);	
		}
		else
		if(GetX(TerminalControlState)==TCS_OFF)
		{
			Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_RcvRKE,rf_SpiReqModeChgIdleAndOther);	
		}
		else
		{
			Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_Idle,rf_SpiReqModeChgIdleAndOther);
		}
	}
	else
	if(	(GetX(TerminalControlState)==TCS_OFF) &&
		(GetX(A_IGN1_IN_SMK) == Off) &&
		(e_LF_RF_TelegramStep == kLF_RF_Telegram_Idle) &&
		(rfic_SysModeConfirmValue != kRFIC_SysMode_RcvRKE)
	)	
	{
		Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_RcvRKE,rf_SpiReqModeChgIdleAndOther);		
	}
	else
	{}

}



void Select_SearchSysMode(void)
{
	if(GetX(TerminalControlState) == TCS_OFF)
	{
		Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_RcvRKE,rf_SpiReq0x0D_SetSystemMode); 		
	}
	else
	if( (GetX(TerminalControlState) == TCS_IGN) ||
		(GetX(A_IGN1_IN_SMK) == On)
	)
	{
		Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_RcvTPMS,rf_SpiReq0x0D_SetSystemMode); 		
	}
	else
	{
		Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_Idle,rf_SpiReq0x0D_SetSystemMode);
	}
}



static u8 Counter_HWCriticalErr = 0u;

#if 0
static	u8	lficSTR;
	static	u8	lficPPFAULT1;
	static	u8	lficPPFAULT2;
	static	u8	lficPPFAULT3;

#define	FaultPEPS			0x40
	#define	PPFAULT1_OLDE	0x20

#define	GetLFICregi_STR(x)	(u8)(lficSTR&(x))
#define GetLFICregi_PPFAULT1(x)	(u8)(lficPPFAULT1&(x))
#define GetLFICregi_PPFAULT2(x)	(u8)(lficPPFAULT2&(x))
#define GetLFICregi_PPFAULT3(x)	(u8)(lficPPFAULT3&(x))
#endif

extern u8 b_DiagRFDataRcvEvtFlg;


extern tTIMER32	Timer_WelcomeLightShortPeriodDuration;
extern tTIMER32	Timer_WelcomeLightLongPeriodDuration;


void LF_RF_Telegram_Process(void)
{
	static	tTIMER8		Timer_LFTransTimeout = {Off,0};
	static	tTIMER8		Timer_RFReceiveWait = {Off,0};
	static	tTIMER8		Timer_LFTransWait = {Off,0};
	static	tTIMER8		Timer_spidelay = {Off,0};

	static 	u8 			Par_RFWaitTime = 0u;	
	static u16			RFICSearchPeriodicTime = 0u;
	static u8			isInit = 0;

	static StepCnt=0;

	u8	func_i = 0u;
	u8	RFIC_SystemMode = 0u;
	u8	Counter_ValidFobFound = 0u;
	u8	max_fob = 0u;
	u16	Counter_FobTelegramRandom = 0u;
	u8	FobNumber = 0u;
	u8	ValidAuthFob = 0u;

	//IoHwAb_LevelType b_IRQ_ReadData;
	
	UpTimer8(Timer_RFReceiveWait);
	UpTimer8(Timer_LFTransTimeout);
	UpTimer8(Timer_LFTransWait);
	UpTimer8(Timer_spidelay);
	UpTimer8(Timer_LFPeriodicSearchPending);

	#if 0 // for SCIM
	if (GetX(b_SMKSleepMode) == kOn)
	{/* LP TASK 20ms Periodic */
		UpTimer8(Timer_RFReceiveWait);
		UpTimer8(Timer_LFTransTimeout);
		UpTimer8(Timer_LFTransWait);
		UpTimer8(Timer_spidelay);
		UpTimer8(Timer_LFPeriodicSearchPending);
	}	
	#endif

	#if 0 // for SCIM
	if(R_IsReset()!=Off)
	{	
		Rte_Call_RficInit_P_CS();
		Rte_Call_LfICInit_P_CS(GetX(b_TailgateOption)); 
	}
	#endif
	if( isInit == 0 )
	{
	    isInit = 1;
     	Rte_Call_RficInit_P_CS();
		Rte_Call_LfICInit_P_CS(GetX(b_TailgateOption)); 
	}
	// Rte_Call_LficNRESDio_R_Write(1);

	// Default_CALIB_LF_RF_Tunning();

	switch(e_LF_RF_TelegramStep)
	{
	case	kLF_RF_Telegram_Idle:

		#if 0
		if(	(LF_confirm_wait == On) &&
			(BAT_stab_finish_flg == On)
		)
		{/* pending �� LF ó���� ������ ���, ���͸� ����ȭ �Ϸ� �� ���� �ǵ��� ó�� */
			if(GetX(u1g_LF_Telegram_Output_OK)==On)
			{
				b_TelegramStartStatus = On;
				LF_confirm_wait = Off;				
			}
			else
			{
				b_TelegramStartStatus = Off;
				LF_confirm_wait = Off; 				
				SetC(b_FobSearch,FobSearch_Progress);
				SetC(b_FobSearch,FobSearch_NoFound);
			}
		}
		#endif

		#if 0
		if( (b_TelegramStartStatus==On) &&
			(IsActiveEncryption()!=Off)
		)
		#else
		if(b_TelegramStartStatus==On) 		
		#endif
		{
			b_TelegramStartStatus = Off;
			SetC(b_FobSearch,FobSearch_Progress);

			Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_Idle,rf_SpiReq0x0D_SetSystemMode); 				
#if 0
				if(b_RFIC_ExtIRQ_Activeflag == Off)
				{
					ExtINT_RFIC_IRQ_Start();
				}
#else
			Rte_Call_rficIRQActiveCheck_P_CS(GetX(TerminalControlState));
#endif
			
			e_LF_RF_TelegramStep = kLF_RF_Telegram_ChangeMode;
		}
		#if 0
		else
		if(b_TelegramStartStatus==On)
		{
			R_LowPower_Prevent(SMK_LF_LP_FLAG);
		}
		#endif
		else
		{}
		break;

	case	kLF_RF_Telegram_ChangeMode:
		RFIC_SystemMode = FixLF_TelegramMode();
		
		Rte_Call_SearchSysMode_P_CS(RFIC_SystemMode,rf_SpiReq0x0D_SetSystemMode);

		#if 0
		Rte_Call_R_DigDir_RFIC_IRQ_ReadDirect(&b_IRQ_ReadData);

		if(b_IRQ_ReadData == Off)
		{
			Rte_Call_SearchSysMode_P_CS(RFIC_SystemMode,rf_SpiReq0x0D_SetSystemMode);
		}
		else
		{
			Rte_Call_SearchSysMode_P_CS(RFIC_SystemMode,rf_SpiReq0x04_GetEventBytes);
		}
		#endif
		
		SetupLF_Data();

		#if 0
		if ((Telegram_CurrentSearchOrder == kLF_Search_WelcomeLightShort) ||
			(Telegram_CurrentSearchOrder == kLF_Search_WelcomeLightLong))
		{
			if (Telegram_CurrentSearchOrder == kLF_Search_WelcomeLightShort)
			{
				RFICSearchPeriodicTime = Par_240ms; 		
			}
			else if(Telegram_CurrentSearchOrder == kLF_Search_WelcomeLightLong)
			{
				RFICSearchPeriodicTime = Par_720ms; 
			}
			else
			{
				RFICSearchPeriodicTime = Par_240ms;
			}

			StartTimer(Timer_spidelay);		
			SetC(b_FobSearch,FobSearch_LF_Sent);
			
			e_LF_RF_TelegramStep = kLF_RF_Telegram_Periodic_wait;
		}
		else
		{
			StartTimer(Timer_spidelay);
			e_LF_RF_TelegramStep = kLF_RF_Telegram_LF_trs;
		}	
		#endif
		StartTimer(Timer_spidelay);
		e_LF_RF_TelegramStep = kLF_RF_Telegram_LF_trs;
		break;
		
	case	kLF_RF_Telegram_LF_start:
		#if 0
		if(IsActiveEncryption()!=Off)
		{
			SetupLF_Data();
			Rte_Call_SetupLfTelegram_P_CS(st_Telegram.AntenaIndex, st_Telegram.SearchPattern, Counter_LFRawDataBit, Buffer_LFRawData);
				
			StartTimer(Timer_LFTransTimeout);
			e_LF_RF_TelegramStep = kLF_RF_Telegram_LF_trs;
		}
		else
		{
			R_LowPower_Prevent(SMK_LF_LP_FLAG);
		}
		#else
		// SetupLF_Data();
		
		Rte_Call_SetupLfTelegram_P_CS(st_Telegram.AntenaIndex, st_Telegram.SearchPattern, Counter_LFRawDataBit, Buffer_LFRawData);
			
		StartTimer(Timer_LFTransTimeout);
		e_LF_RF_TelegramStep = kLF_RF_Telegram_LF_trs;
		
		StepCnt=1;	// timer
		#endif
		break;

	case	kLF_RF_Telegram_LF_trs:
#if 1		// timer
		if(StepCnt==1)
		{
			StepCnt++;

			Rte_Call_SetupLfTelegram_P_CS(st_Telegram.AntenaIndex, st_Telegram.SearchPattern, Counter_LFRawDataBit, Buffer_LFRawData);
		}
		else if(StepCnt>=20)	//else if (LFSearchCompleteFlag_test == On)
		{
			StepCnt = 0;	// timer

			LFSearchCompleteFlag_test = Off;		// SetC(LFSearchCompleteFlag, Off);
			
			CancelTimer(Timer_LFTransTimeout);
			SetC(b_FobSearch,FobSearch_LF_Sent);
			//R_LowPower_Allow(SMK_LF_LP_FLAG);
			
			Counter_HWCriticalErr = 0;

			for(func_i=0u; func_i<(kMax_FOB+1u); func_i++)	{b_HfreeSetFobFoundResult[func_i] = 0;}
			

			if( (st_Telegram.SearchPattern==kSEARCH_LOCATION) ||
				(st_Telegram.SearchPattern==kSEARCH_WELCOME) ||
				(st_Telegram.SearchPattern==kSEARCH_HANDSFREE) ||
				(st_Telegram.SearchPattern==kSEARCH_FACTORY)
			)
			{
				Par_RFWaitTime = T_RF_Wait_time;
			}				
			else 
			if(st_Telegram.SearchPattern==kSEARCH_AUTHENTICATION)
			{
				Par_RFWaitTime = Par_RFWaitAuth;
			}
			else
			{
				Par_RFWaitTime = Par_RFWaitFOB4;
			}

			StartTimer(Timer_RFReceiveWait);
			e_LF_RF_TelegramStep = kLF_RF_Telegram_RF_wait;

			RE_Timeout_Tx_Telegram();
		}
		else
		{
			StepCnt++;	
		}
#else
		if(Timer_spidelay.time == Time_ms(10u))
		{
			CancelTimer(Timer_spidelay);		
			Rte_Call_SetupLfTelegram_P_CS(st_Telegram.AntenaIndex, st_Telegram.SearchPattern, Counter_LFRawDataBit, Buffer_LFRawData);
			StartTimer(Timer_LFTransTimeout);
		}
		else
		if(GetX(LFSearchCompleteFlag)==On)
		{
			SetC(LFSearchCompleteFlag, Off);
			
			CancelTimer(Timer_LFTransTimeout);
			SetC(b_FobSearch,FobSearch_LF_Sent);
			//R_LowPower_Allow(SMK_LF_LP_FLAG);
			
			Counter_HWCriticalErr = 0;

			for(func_i=0u; func_i<(kMax_FOB+1u); func_i++)	{b_HfreeSetFobFoundResult[func_i] = 0;}
			

			if( (st_Telegram.SearchPattern==kSEARCH_LOCATION) ||
				(st_Telegram.SearchPattern==kSEARCH_WELCOME) ||
				(st_Telegram.SearchPattern==kSEARCH_HANDSFREE) ||
				(st_Telegram.SearchPattern==kSEARCH_FACTORY)
			)
			{
				Par_RFWaitTime = T_RF_Wait_time;
			}				
			else 
			if(st_Telegram.SearchPattern==kSEARCH_AUTHENTICATION)
			{
				Par_RFWaitTime = Par_RFWaitAuth;
			}
			else
			{
				Par_RFWaitTime = Par_RFWaitFOB4;
			}

			StartTimer(Timer_RFReceiveWait);
			e_LF_RF_TelegramStep = kLF_RF_Telegram_RF_wait;
		}
		else
		if(Timer_LFTransTimeout.time >= Time_ms(100u))
		{
			//Rte_Call_R_Timeout_Tx_Telegram_CS();
			Rte_Call_TimeoutTxTelegram_P_CS();
			
			CancelTimer(Timer_LFTransTimeout);
			b_TelegramStartStatus = Off;
			SetC(b_FobSearch,FobSearch_NoFound);
			LF_Failsafe_ISR_Timeout();
			e_LF_RF_TelegramStep = kLF_RF_Telegram_Idle;
			Counter_HWCriticalErr++;
			// Set_EepromData_FUNCTION(eHWErrCnt,Counter_HWCriticalErr);
		}
		else
		{}
#endif

#if 0
    case	kLF_RF_Telegram_Periodic_wait:
		if (Timer_spidelay.time == Time_ms(10u))
		{
			CancelTimer(Timer_spidelay);
			Rte_Call_R_SetupLF_Periodic_Telegram_CS(st_Telegram.AntenaIndex, st_Telegram.SearchPattern, Counter_LFRawDataBit, Buffer_LFRawData, RFICSearchPeriodicTime);
			StartTimer(Timer_LFTransWait);
		}
		else
		if (Timer_LFTransWait.time >= Time_ms(50u))			
		{
			CancelTimer(Timer_LFTransWait);		
			//R_LowPower_Allow(SMK_LF_LP_FLAG);
		}
		else
		{}

		if ((Telegram_CurrentSearchOrder == kLF_Search_WelcomeLight) ||
			(Telegram_CurrentSearchOrder == kLF_Search_WelcomeLightLong) ||
			(Telegram_CurrentSearchOrder == kLF_Search_WelcomeLightShort))
		{
			if(b_ValidFobFoundResult[0] == On)
			{/* Fob search OK */
				Select_SearchSysMode();
				CancelTimer(Timer_LFTransWait);
				SetC(b_FobSearch,FobSearch_Found);
				Rte_Call_R_StopLF_Periodic_Telegram_CS();
				e_LF_RF_TelegramStep = kLF_RF_Telegram_Idle;				
			}
			else
			if(	(Timer_WelcomeLightShortPeriodDuration.run != running) &&
				(Timer_WelcomeLightLongPeriodDuration.run != running))
			{/* Welcome Light Finish */
				Select_SearchSysMode();
				CancelTimer(Timer_LFTransWait);
				SetC(b_FobSearch,FobSearch_NoFound);
				Rte_Call_R_StopLF_Periodic_Telegram_CS();
				e_LF_RF_TelegramStep = kLF_RF_Telegram_Idle;
			}
			else
			{}
		}
		else			
		{
		}
#endif
		break;

	case	kLF_RF_Telegram_RF_wait:
#if 1

		if(StepCnt>=10)
		{
			StepCnt = 0;
			if((st_Telegram.SearchPattern==kSEARCH_LOCATION) || (st_Telegram.SearchPattern==kSEARCH_FACTORY))
			{	


				lRSSI(0,lf_antenna_RSSIOutputOrder[0]) = Get_LocaRSSI(0,tRSSI1);	/* Fob���� ������ 1st LF RSSI�� ���� Max �ప Load */
				lRSSI(0,lf_antenna_RSSIOutputOrder[1]) = Get_LocaRSSI(0,tRSSI2); /* Fob���� ������ 2nd LF RSSI�� ���� Max �ప Load */	
				lRSSI(0,lf_antenna_RSSIOutputOrder[2]) = Get_LocaRSSI(0,tRSSI3); /* Fob���� ������ 3rd LF RSSI�� ���� Max �ప Load */
				lRSSI(0,lf_antenna_RSSIOutputOrder[3]) = Get_LocaRSSI(0,tRSSI4); /* Fob���� ������ 4th LF RSSI�� ���� Max �ప Load */

				// b_ValidFobFoundResult[0] = 1;
				b_FobFound_OK = On;

			}
			else
			if(st_Telegram.SearchPattern==kSEARCH_AUTHENTICATION)
			{

			}
			else
			{}

			Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_Idle,rf_SpiReq0x0D_SetSystemMode);

			e_LF_RF_TelegramStep = kLF_RF_Telegram_NextCheck;
		}
		else
		{
			StepCnt++;
		}
		
#else
		if(Timer_RFReceiveWait.time > Par_RFWaitTime)
		{/* RF Wait time-over */
#if 0
			/* --------------------------------------------------------------- */
			lf_set_spi();
			lficSTR = (u8)lf_ata5291_gsi();
			if(GetLFICregi_STR(FaultPEPS) == FaultPEPS)
			{
				lficPPFAULT1 = lf_ata5291_rreg(PPFAULT1);
				lficPPFAULT2 = lf_ata5291_rreg(PPFAULT2);
				lficPPFAULT3 = lf_ata5291_rreg(PPFAULT3);

				if(GetLFICregi_PPFAULT1(PPFAULT1_OLDE)==PPFAULT1_OLDE)
				{/* OLDE - Open Load Detected with External Current Measurement */
					lf_ata5291_halt();
					lf_ata5291_gid();
					lf_ata5291_rfs();
				}
			}
			lf_reset_spi();
			/* --------------------------------------------------------------- */
#endif

			CancelTimer(Timer_RFReceiveWait);
			if((st_Telegram.SearchPattern==kSEARCH_LOCATION) || (st_Telegram.SearchPattern==kSEARCH_FACTORY))
			{	
				#if 0
				/* RSSI check algorithm */					
				ExpectedAuthFobNum = Calculate_LocaRSSI(b_ValidFobFoundResult,st_Telegram.AntenaIndex);
				
				if(ExpectedAuthFobNum == Par_Fob1) 		{AuthSearchTargetFobID = kSearchID_Fob1;}
				else if(ExpectedAuthFobNum == Par_Fob2)	{AuthSearchTargetFobID = kSearchID_Fob2;}
				else if(ExpectedAuthFobNum == Par_Fob3)	{AuthSearchTargetFobID = kSearchID_Fob3;}
				else if(ExpectedAuthFobNum == Par_Fob4)	{AuthSearchTargetFobID = kSearchID_Fob4;}
				else									{AuthSearchTargetFobID = kSearchID_None;}
				
				#else

				lRSSI(0,lf_antenna_RSSIOutputOrder[0]) = Get_LocaRSSI(0,tRSSI1);	/* Fob���� ������ 1st LF RSSI�� ���� Max �ప Load */
				lRSSI(0,lf_antenna_RSSIOutputOrder[1]) = Get_LocaRSSI(0,tRSSI2); /* Fob���� ������ 2nd LF RSSI�� ���� Max �ప Load */	
				lRSSI(0,lf_antenna_RSSIOutputOrder[2]) = Get_LocaRSSI(0,tRSSI3); /* Fob���� ������ 3rd LF RSSI�� ���� Max �ప Load */
				lRSSI(0,lf_antenna_RSSIOutputOrder[3]) = Get_LocaRSSI(0,tRSSI4); /* Fob���� ������ 4th LF RSSI�� ���� Max �ప Load */

				// b_ValidFobFoundResult[0] = 1;
				b_FobFound_OK = On;
				
				/***********************************************
								P1 = lRSSI(0,rLH);
								P2 = lRSSI(0,rRH);
								P3 = lRSSI(0,rINT1);
								P4 = lRSSI(0,rTRUNK);
				**********************************************/
				#endif
			}
			else
			if(st_Telegram.SearchPattern==kSEARCH_AUTHENTICATION)
			{
				#if 0
				/* Decryption */
				Generate_Telegram_EncryptionKey(AES128_EncryptionKey);
				aes_enc_dec(RcvRFdataAuth.authdata,AES128_EncryptionKey,kAES_DEC);
				
				ValidAuthFobNum = R_Check_FOB_Serial(RcvRFdataAuth.authdata);				
				Counter_FobTelegramRandom = Read_FOB_RandomCounter(&RcvRFdataAuth.authdata[4]);

				/* Vaile fob check */
				if(	(ValidAuthFobNum == ExpectedAuthFobNum) &&
					(Counter_FobTelegramRandom == Counter_TelegramRandom)
				)
				{
					/* Auth fob data setting */
					Store_AuthData();

					/* RSSI check algorithm */
					ValidAuthFobNum = Calculate_AuthRSSI(ValidAuthFobNum,st_Telegram.AntenaIndex);
				}
				else
				{
					ValidAuthFobNum = Par_FobNone;	
				}
				#endif
			}
			else
			{}

			Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_Idle,rf_SpiReq0x0D_SetSystemMode);

			e_LF_RF_TelegramStep = kLF_RF_Telegram_NextCheck;
		}
#endif
		break;

	case	kLF_RF_Telegram_NextCheck:
		if(st_Telegram.StopCondition==kSTOP_SEARCH_ONE)
		{/* Location search�� �ش�Ǵ� Stop ���� �� */
			if(b_ValidFobFoundResult[0] == Off)
			{
				Counter_SearchRetry++;
				if(Counter_SearchRetry==st_Telegram.Retry)
				{
					Select_SearchSysMode();					
					SetC(b_FobSearch,FobSearch_NoFound);
					e_LF_RF_TelegramStep = kLF_RF_Telegram_Idle;						
				}
				else
				{
					Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_RcvRF_Loca,rf_SpiReq0x0D_SetSystemMode);					
					// SetupLF_Telegram();
					Rte_Call_SetupLfTelegram_P_CS(st_Telegram.AntenaIndex, st_Telegram.SearchPattern, Counter_LFRawDataBit, Buffer_LFRawData);
						
					StartTimer(Timer_LFTransTimeout);
					e_LF_RF_TelegramStep = kLF_RF_Telegram_LF_trs;				
				}
			}
			else
			{				
				/* Fob search OK */
				Telegram_CurrentSearchMode++;
				RFIC_SystemMode = FixLF_TelegramMode();
				Rte_Call_SearchSysMode_P_CS(RFIC_SystemMode,rf_SpiReq0x0D_SetSystemMode);

#if 0
				if(b_RFIC_ExtIRQ_Activeflag == Off)
				{
					ExtINT_RFIC_IRQ_Start();
				}
#else
				Rte_Call_rficIRQActiveCheck_P_CS(GetX(TerminalControlState) );
#endif
		
				e_LF_RF_TelegramStep = kLF_RF_Telegram_LF_start;
			}
		}
	#if 0
		else
		if(stTelegram.StopCondition==kSTOP_SEARCH_ALL)
		{
			/* �̻�� StopCondition */
		}
	#endif
		else
		if(st_Telegram.StopCondition==kSTOP_ALWAYS_ONE)
		{/* Location search, Auth search�� �ش�Ǵ� Stop ���� �� */
			if(	(((st_Telegram.SearchPattern==kSEARCH_LOCATION) || (st_Telegram.SearchPattern==kSEARCH_FACTORY)) &&
				 (b_ValidFobFoundResult[0] == Off)) ||
				((st_Telegram.SearchPattern==kSEARCH_AUTHENTICATION) &&
				 (ValidAuthFobNum == Par_FobNone))
			)
			{
				Counter_SearchRetry++;
				if(Counter_SearchRetry==st_Telegram.Retry)
				{
					Select_SearchSysMode();	
					SetC(b_FobSearch,FobSearch_NoFound);
					e_LF_RF_TelegramStep = kLF_RF_Telegram_Idle;						
				}
				else
				{
					if((st_Telegram.SearchPattern==kSEARCH_LOCATION) || (st_Telegram.SearchPattern==kSEARCH_FACTORY))
					{
						Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_RcvRF_Loca,rf_SpiReq0x0D_SetSystemMode);
					}
					else
					if(st_Telegram.SearchPattern==kSEARCH_AUTHENTICATION)
					{
						Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_RcvRF_Auth,rf_SpiReq0x0D_SetSystemMode);
					}
					else
					{}
					//SetupLF_Telegram();
					Rte_Call_SetupLfTelegram_P_CS(st_Telegram.AntenaIndex, st_Telegram.SearchPattern, Counter_LFRawDataBit, Buffer_LFRawData);
						
					StartTimer(Timer_LFTransTimeout);
					e_LF_RF_TelegramStep = kLF_RF_Telegram_LF_trs;				
				}
			}
			else
			{
				/* Fob search OK */
				Select_SearchSysMode(); 
				SetC(b_FobSearch,FobSearch_Found);
				e_LF_RF_TelegramStep = kLF_RF_Telegram_Idle;
			}
		}
		else
		if(st_Telegram.StopCondition==kSTOP_ALWAYS_ALL)
		{/* Location search�� �ش� �Ǵ� Stop ���� �� */

			Counter_ValidFobFound = 0u;
			max_fob = 1;
			
			for(func_i=1;func_i<=max_fob;func_i++)
			{
				if(b_ValidFobFoundResult[func_i] == On)
				{
					Counter_ValidFobFound++;
				}
			}
			
			if(Counter_ValidFobFound>=max_fob)
			{
				/* All fob search OK */
				Select_SearchSysMode(); 
				SetC(b_FobSearch,FobSearch_Found);
				e_LF_RF_TelegramStep = kLF_RF_Telegram_Idle;
			}
			else
			{
				Counter_SearchRetry++;
				if(Counter_SearchRetry==st_Telegram.Retry)
				{
					if(b_ValidFobFoundResult[0] == Off)
					{
						SetC(b_FobSearch,FobSearch_NoFound);
					}
					else
					{/* Fob search OK */
						SetC(b_FobSearch,FobSearch_Found);
					}
					Select_SearchSysMode();	
					e_LF_RF_TelegramStep = kLF_RF_Telegram_Idle;						
				}
				else
				{
					Rte_Call_SearchSysMode_P_CS(kRFIC_SysMode_RcvRF_Loca,rf_SpiReq0x0D_SetSystemMode);					
					//SetupLF_Telegram();
					Rte_Call_SetupLfTelegram_P_CS(st_Telegram.AntenaIndex, st_Telegram.SearchPattern, Counter_LFRawDataBit, Buffer_LFRawData);
						
					StartTimer(Timer_LFTransTimeout);
					e_LF_RF_TelegramStep = kLF_RF_Telegram_LF_trs;				
				}
			}		

		}
		else
		if(st_Telegram.StopCondition==kSTOP_OK)
		{/* Welcome search, Handsfree search�� �ش� �Ǵ� Stop ���� �� */
			if(b_ValidFobFoundResult[0] == Off)
			{
				SetC(b_FobSearch,FobSearch_NoFound);
			}
			else
			{
				SetC(b_FobSearch,FobSearch_Found);
			}
			Select_SearchSysMode(); 
			e_LF_RF_TelegramStep = kLF_RF_Telegram_Idle;
		}
		else
		{
			Select_SearchSysMode(); 
			SetC(b_FobSearch,FobSearch_NoFound);
			e_LF_RF_TelegramStep = kLF_RF_Telegram_Idle;
		}
		

		if(e_LF_RF_TelegramStep == kLF_RF_Telegram_Idle)
		{
			if(	(st_Telegram.SearchPattern==kSEARCH_LOCATION) ||
				(st_Telegram.SearchPattern==kSEARCH_WELCOME) ||
				(st_Telegram.SearchPattern==kSEARCH_HANDSFREE) ||
				(st_Telegram.SearchPattern==kSEARCH_FACTORY)
			)
			{
			}
			else
			{
				// st_EncBlock[Counter_TelegramRandom&3].encryption_mode = 0;
				Counter_TelegramRandom++;
			}
		
			b_TelegramStartStatus = Off;
		}
		break;	
	
	default:
		break;
	}

	if( IsChgEvt(b_FobSearch,FobSearch_NoFound) ||
		IsChgEvt(b_FobSearch,FobSearch_Found) 
	)
	{
		SetX(LFRF_SearchFinishedJob,Telegram_CurrentSearchOrder);
		SetX(b_LFRF_SearchFinished,On);
		//b_DiagRFDataRcvEvtFlg = On;	/* debugging CAN signal output ack */

	}
	else
	{
		ClrEvt(LFRF_SearchFinishedJob);
		SetX(b_LFRF_SearchFinished,Off);
	}

	SetC(b_FobSearch,GetX(b_FobSearch));
	SetX(FoundFobNb, ValidAuthFobNum);

	if(Counter_HWCriticalErr >= 0xFFu)
	{
		Counter_HWCriticalErr = 0u;
	}
}


static void	Store_AuthData(void)
{
	RcvRFdataAuth.fob_serial[0] = RcvRFdataAuth.authdata[0];
	RcvRFdataAuth.fob_serial[1] = RcvRFdataAuth.authdata[1];
	RcvRFdataAuth.fob_serial[2] = RcvRFdataAuth.authdata[2];
	RcvRFdataAuth.fob_serial[3] = RcvRFdataAuth.authdata[3];					
	RcvRFdataAuth.rssi_ant[0][0] = (((u16)(RcvRFdataAuth.authdata[6])<<2)|((u16)(RcvRFdataAuth.authdata[7])>>6));			/* ANT1 - X RSSI */
	RcvRFdataAuth.rssi_ant[0][1] = (((u16)(RcvRFdataAuth.authdata[7]&0x3f)<<4)|((u16)(RcvRFdataAuth.authdata[8])>>4));		/* ANT1 - Y RSSI */
	RcvRFdataAuth.rssi_ant[0][2] = (((u16)(RcvRFdataAuth.authdata[8]&0x0f)<<6)|((u16)(RcvRFdataAuth.authdata[9])>>2));		/* ANT1 - Z RSSI */
	RcvRFdataAuth.rssi_ant[1][0] = (((u16)(RcvRFdataAuth.authdata[9]&0x03)<<8)|((u16)(RcvRFdataAuth.authdata[10])));		/* ANT2 - X RSSI */
	RcvRFdataAuth.rssi_ant[1][1] = (((u16)(RcvRFdataAuth.authdata[11])<<2)|((u16)(RcvRFdataAuth.authdata[12])>>6));			/* ANT2 - Y RSSI */
	RcvRFdataAuth.rssi_ant[1][2] = (((u16)(RcvRFdataAuth.authdata[12]&0x3f)<<4)|((u16)(RcvRFdataAuth.authdata[13])>>4));	/* ANT2 - Z RSSI */
	RcvRFdataAuth.rssi_ant[2][0] = (((u16)(RcvRFdataAuth.authdata[13]&0x0f)<<6)|((u16)(RcvRFdataAuth.authdata[14])>>2));	/* ANT3 - X RSSI */
	RcvRFdataAuth.rssi_ant[2][1] = (((u16)(RcvRFdataAuth.authdata[14]&0x03)<<8)|((u16)(RcvRFdataAuth.authdata[15])));		/* ANT3 - Y RSSI */
	RcvRFdataAuth.rssi_ant[2][2] = (((u16)(RcvRFdataAuth.authdata[16])<<2)|((u16)(RcvRFdataAuth.authdata[17])>>6));			/* ANT3 - Z RSSI */
	RcvRFdataAuth.rssi_ant[3][0] = (((u16)(RcvRFdataAuth.authdata[17]&0x3f)<<4)|((u16)(RcvRFdataAuth.authdata[18])>>4));	/* ANT4 - X RSSI */
	RcvRFdataAuth.rssi_ant[3][1] = (((u16)(RcvRFdataAuth.authdata[18]&0x0f)<<6)|((u16)(RcvRFdataAuth.authdata[19])>>2));	/* ANT4 - Y RSSI */
	RcvRFdataAuth.rssi_ant[3][2] = (((u16)(RcvRFdataAuth.authdata[19]&0x03)<<8)|((u16)(RcvRFdataAuth.authdata[20])));		/* ANT4 - Z RSSI */
	RcvRFdataAuth.v_low = ((u8)(RcvRFdataAuth.authdata[21])>>7);
}

static u16	Read_FOB_RandomCounter(const u8 rcv_data[])
{
	return (((u16)(rcv_data[0]) << 8)|(u16)(rcv_data[1]));
}


static void Clear_RcvSearchData(void)
{
	u8 func_i=0u;

	/* Clear location/welcome/handsFree search result */
	for(func_i=0u; func_i<(kMax_FOB+1u); func_i++)		
	{
		b_ValidFobFoundResult[func_i] = Off;
	}
	AuthSearchTargetFobID = kSearchID_None;
	ExpectedAuthFobNum = Par_FobNone;
	
	/* Clear authentication search result */
	ValidAuthFobNum = Par_FobNone;

	/* Clear RF received data buffer - Auth data */ 	
	for(func_i=0u; func_i<AUTH_RAWDATA_LEN; func_i++)
	{
		RcvRFdataAuth.authdata[func_i] = 0;
	}
	for(func_i=0u; func_i<4u; func_i++)
	{
		RcvRFdataAuth.fob_serial[func_i] = 0;
	}
	RcvRFdataAuth.random = 0;
	for(func_i=0u; func_i<3u; func_i++)
	{
		RcvRFdataAuth.rssi_ant[0][func_i] = 0;
		RcvRFdataAuth.rssi_ant[1][func_i] = 0;
		RcvRFdataAuth.rssi_ant[2][func_i] = 0;
		RcvRFdataAuth.rssi_ant[3][func_i] = 0;		
	}
	RcvRFdataAuth.v_low = Off;

	/* Clear RF received data buffer */ 		
	for(func_i=0u; func_i<kMax_FOB; func_i++)
	{
		RcvRFdata[func_i].fob_serial[0] = 0;
		RcvRFdata[func_i].fob_serial[1] = 0;
		RcvRFdata[func_i].fob_serial[2] = 0;
		RcvRFdata[func_i].fob_serial[3] = 0;
		RcvRFdata[func_i].rssi_ant[0] = 0;
		RcvRFdata[func_i].rssi_ant[1] = 0;
		RcvRFdata[func_i].rssi_ant[2] = 0;
		RcvRFdata[func_i].rssi_ant[3] = 0;
		RcvRFdata[func_i].v_low = Off;
	}
}


void Set_ValidFobFoundResult(u8 fob_num)
{
	b_ValidFobFoundResult[0] = On;
	b_ValidFobFoundResult[fob_num] = On;
}

u8 Get_LF_RF_TelegramStep(void)
{
	return (u8)e_LF_RF_TelegramStep;
}

FUNC(void, CDD_RFIC_CODE) Clear_HighFixCheckTimer(void)
{	
	CancelTimer(Timer_rficIRQHighTimeout);
	StartTimer(Timer_rficIRQHighTimeout);
}

