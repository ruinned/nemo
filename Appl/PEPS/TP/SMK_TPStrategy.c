
#include "type.h"
#include "define.h"
#include "timer.h"
#include "data.h"
#include "pj_define.h"
// #include "eeprom.h"			// TP Rev.1

#include "encryption.h"
#include "AES128.h"
#include "crc8.h"

// #include "SMK_LFIC.h"		// TP Rev.1
#include "SMK_TP_Type.h"
#include "SMK_TP.h"

#include "Rte_TP.h"

// #include "smk_diag.h"		// TP Rev.1


/* static function proto type */
static void Get_Random8_Challenge(u8 data[]);
static void AES_Encryption(const u8 *data);
static void Generate_TP_EncryptionKey(u8 data[]);
static	void Func_IMMO_Setup_TEST(void);

typedef struct
{
	u8	number;
	u8	write_fob_number;
	u8	retry;
	u8	AntenaDiag;
	u8	Fob_Serial[3];
	u8	vehicle_serial[3];
	u8	SecurityKeyNumber[3];
	u8	challenge[8];
	u8	signature[8];
	u8	encryption_key[16];
	u8	Configure[2];
} tDstBlock;

#define	kDST_Retry				3u
#define kDST_Process_Retry		2u
#define DST_TRANS_TIMEOUT 		300u	// 300ms �ð� �����ְ� ����. ���� ���� 

static	tDstBlock	st_DstBlock;
static	e_DSTProcess	e_DSTProcessStep;

static	tTIMER8		Timer_DSTTransTimeout = {Off,0};

static	u8	DST_SerialPreBackup[4]={0,0,0,0};
static	u8 	DST_RxErrorStatus = 0u;
static 	u8	Counter_DST_ProcessRetry = 0u;
static	u8	b_FOBLearningStatus = 0u;
static	u8	b_FOBReadingStatus = 0u;
static	u8 	b_FOBCurrentStatus = 0u;
static	u8	RKERollingCnt_High = 0u;
static	u8	RKERollingCnt_Low = 0u;


/*
 ** Get_Random8_Challenge
 *
 *  FILENAME: D:\Hum\Software\ASIC_SMK\Application\m_Library_Code\SMK_DST.c
 *
 *  PARAMETERS: Challenge Data(8Byte)
 *
 *  DESCRIPTION: Create 8Byte Random Number 
 *
 *  RETURNS: No Return / INTERNAL : Challenge Data(8Byte) 
 *
 */

static void Get_Random8_Challenge(u8 data[])
{
	u8	Random_Array_High[5]={0,0,0,0,0};	/* Temporary data */
	u8	Random_Array_Low[5]={0,0,0,0,0};

	Random5(Random_Array_High);	/* Library Function Received from PLATO. */
	Random5(Random_Array_Low);

	/* Set up Challenge Data */
	data[0] = Random_Array_High[0];
	data[1] = Random_Array_High[1];
	data[2] = Random_Array_High[2];
	data[3] = Random_Array_High[3];

	data[4] = Random_Array_Low[4];
	data[5] = Random_Array_Low[3];
	data[6] = Random_Array_Low[2];
	data[7] = Random_Array_Low[1];
}

/*
 ** AES_Encryption
 *
 *  FILENAME: D:\Hum\Software\ASIC_SMK\Application\m_Library_Code\SMK_DST.c
 *
 *  PARAMETERS: Challenge Data(8Byte)
 *
 *  DESCRIPTION: Encryption Used to AES Algorithm 
 *
 *  RETURNS: None / Internal : Signature Data
 *
 */

static void AES_Encryption(const u8 *data)
{
	u8 Temp_Challenge[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	/* challenge 8byte */
	Temp_Challenge[0] = data[0]; //st_DstBlock.challenge[0];
	Temp_Challenge[1] = data[1]; //st_DstBlock.challenge[1];
	Temp_Challenge[2] = data[2]; //st_DstBlock.challenge[2];
	Temp_Challenge[3] = data[3]; //st_DstBlock.challenge[3];
	Temp_Challenge[4] = data[4]; //st_DstBlock.challenge[4];
	Temp_Challenge[5] = data[5]; //st_DstBlock.challenge[5];
	Temp_Challenge[6] = data[6]; //st_DstBlock.challenge[6];
	Temp_Challenge[7] = data[7]; //st_DstBlock.challenge[7];

	/* UID 8byte */ 
	Temp_Challenge[8] = DST_SerialPreBackup[0];
	Temp_Challenge[9] = DST_SerialPreBackup[1];
	Temp_Challenge[10] = DST_SerialPreBackup[2];
	Temp_Challenge[11] = DST_SerialPreBackup[3];

	/* Dummy 4byte */	
	Temp_Challenge[12] = 0x00;
	Temp_Challenge[13] = 0x00;
	Temp_Challenge[14] = 0x00;
	Temp_Challenge[15] = 0x00;

	/* Encrypt result is Temp_Challenge */
	aes_enc_dec(Temp_Challenge,st_DstBlock.encryption_key,kAES_ENC); /* Encrypt result is Temp_Challenge */

	/* Encryption Result */
	st_DstBlock.signature[0] = Temp_Challenge[0];
	st_DstBlock.signature[1] = Temp_Challenge[1];
	st_DstBlock.signature[2] = Temp_Challenge[2];
	st_DstBlock.signature[3] = Temp_Challenge[3];
	st_DstBlock.signature[4] = Temp_Challenge[4];
	st_DstBlock.signature[5] = Temp_Challenge[5];
	st_DstBlock.signature[6] = Temp_Challenge[6];
	st_DstBlock.signature[7] = Temp_Challenge[7];
}


static void Generate_TP_EncryptionKey(u8 data[])
{
	data[0] = (u8)'S';
	data[1] = (u8)'E';
	data[2] = (u8)'O';
	data[3] = (u8)'Y';
	data[4] = (u8)'O';
	data[5] = (u8)'N';
	data[6] = (u8)'E';
	data[7] = (u8)'L';
	data[8] = (u8)'E';
	data[9] = (u8)'C';
	data[10] = (u8)PROJECT_NAME_HIGH;
	data[11] = (u8)PROJECT_NAME_MID;
	data[12] = (u8)PROJECT_NAME_LOW;
	data[13] = st_DstBlock.SecurityKeyNumber[0]^0x12u;
	data[14] = st_DstBlock.SecurityKeyNumber[1]^0x34u;
	data[15] = st_DstBlock.SecurityKeyNumber[2]^0x56u;
}

u8 FobPartNumber[10] = {0,0,0,0,0,0,0,0,0,0};

#if 1		// TP Rev.1
// FUNC(void, SWC_SMK_TP_CODE) StartDST_Telegram(IN VAR(uint8, AUTOMATIC) order)
FUNC(void, SWC_TP_CODE) StartDST_Telegram(uint8 order)
{
	u8 i;

#if 0		// TP Rev.1
	// (void)Rte_Read_R_SMKState_SR(&SMKState);
#else
	SetC(SMKState, Learnt);		// 일단 Learnt...
#endif
	
	switch(order)
	{
	case	TPSearch_Req:
		st_DstBlock.retry = 0;
		SetC(S_TPDemodulatorResp,TPSearchProgress);
		if(GetX(SMKState) == Learnt)
		{
#if 1		// TP Rev.1
			// R_Get_VehicleSerial(st_DstBlock.vehicle_serial);
			// R_Get_SecurityKeyNumber(st_DstBlock.SecurityKeyNumber);		/* SMK�� Neutral �̹Ƿ� Encryption Key ���� SecurityKeyNumber�� ���� ���� ��. */
#else
			Get_VehicleSerial(st_DstBlock.vehicle_serial);
			Get_SecurityKeyNumber(st_DstBlock.SecurityKeyNumber);
#endif
			Generate_TP_EncryptionKey(st_DstBlock.encryption_key);
			e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;
		}
		else if(GetX(SMKState) == Virgin)
		{
			e_DSTProcessStep = kDSTProc_General_Read_Page14_Downlink;
		}
		else
		{/* Neutral */
#if 1		// TP Rev.1
			// R_Get_VehicleSerial(st_DstBlock.vehicle_serial);
			// R_Get_SecurityKeyNumber(st_DstBlock.SecurityKeyNumber);		/* SMK�� Neutral �̹Ƿ� Encryption Key ���� SecurityKeyNumber�� ���� ���� ��. */
#else
			Get_VehicleSerial(st_DstBlock.vehicle_serial);
			Get_SecurityKeyNumber(st_DstBlock.SecurityKeyNumber);
#endif
			Generate_TP_EncryptionKey(st_DstBlock.encryption_key);
			e_DSTProcessStep = kDSTProc_General_Read_Page14_Downlink;
		}
		
		break;

	case	TPRegist_Req:
		b_FOBLearningStatus = On;
		b_FOBReadingStatus = Off;
		Counter_DST_ProcessRetry = 0;
		st_DstBlock.retry = 0;
#if 1		// TP Rev.1
		// R_Get_VehicleSerial(st_DstBlock.vehicle_serial);
		// R_Get_SecurityKeyNumber(st_DstBlock.SecurityKeyNumber);	/* SMK�� Virgin�� �� �����Ƿ� SecurityKeyNumber ���� ���� �� ���� ó�� ����. */
#else
			Get_VehicleSerial(st_DstBlock.vehicle_serial);
			Get_SecurityKeyNumber(st_DstBlock.SecurityKeyNumber);
#endif
		
		Generate_TP_EncryptionKey(st_DstBlock.encryption_key);	/* SMK�� Virgin�� �� �����Ƿ� Encryption Key ���� SeuritykeyNumber�� ���� �� �� ����. */
														/* Fob Serial Read ���� Encryption Key �� ���� ó�� ���� */
		SetC(S_TPDemodulatorResp,TPSearchProgress);
		e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;

		break;

	case	TPCurrent_Req:
		b_FOBCurrentStatus = On;
		st_DstBlock.retry = 0;
#if 1		// TP Rev.1
		// R_Get_VehicleSerial(st_DstBlock.vehicle_serial);
		// R_Get_SecurityKeyNumber(st_DstBlock.SecurityKeyNumber);		/* Fob�� Vehicle Serial�� SMK�� Vehicle Serial�� ���� �� ��쿡�� �ش� SecurityKeyNumber�� ����ϹǷ� ��� ����. */
#else
			Get_VehicleSerial(st_DstBlock.vehicle_serial);
			Get_SecurityKeyNumber(st_DstBlock.SecurityKeyNumber);
#endif
		
		Generate_TP_EncryptionKey(st_DstBlock.encryption_key);		/* Fob�� Vehicle Serial�� SMK�� Vehicle Serial�� ���� �� ��쿡�� �ش� Key�� ����ϹǷ� ��� ����. */
		
		SetC(S_TPDemodulatorResp,TPSearchProgress);
		e_DSTProcessStep = kDSTProc_General_Read_Page14_Downlink;
	
		break;

	case	TPReadFob_Req:
		b_FOBLearningStatus = Off;
		b_FOBReadingStatus = On;
		for(i=0;i<10u;i++)
		{
			FobPartNumber[i] = 0x00u;
		}
		st_DstBlock.retry = 0u;
		SetC(S_TPDemodulatorResp,TPSearchProgress);
		e_DSTProcessStep = kDSTProc_General_Read_Page8_Downlink;
	
		break;

	default:
		/* MISRA */
		break;
	}

}
#endif

void DST_Telegram_Process(void)
{
	/***********************************************************************************/
	/* LF IC Error Check Logic */	
	UpTimer8(Timer_DSTTransTimeout);

	if( (Timer_DSTTransTimeout.run == ON) &&
		(Timer_DSTTransTimeout.time > Time20msTASK_ms(DST_TRANS_TIMEOUT)) 
	)
	{
#if 0		// TP Rev.1 - Developer
		// Rte_Call_R_Timeout_Tx_Telegram_CS();
#else
		RE_Timeout_Tx_Telegram();
#endif
	
		CancelTimer(Timer_DSTTransTimeout);		

		b_DST_RxCompleteFlag = OFF;
		b_DST_ResponseNG = OFF;
		
		Counter_DST_ProcessRetry = 0;
		SetC(S_TPDemodulatorResp,NoTPfound);
		e_DSTProcessStep = kDSTProc_Idle;
	}
	/***********************************************************************************/
	
	switch(e_DSTProcessStep)
	{
	case	kDSTProc_Idle:
		break;
	case	kDSTProc_General_Read_Page2_Downlink:
		DST_SerialPreBackup[0] = 0;
		DST_SerialPreBackup[1] = 0;
		DST_SerialPreBackup[2] = 0;
		DST_SerialPreBackup[3] = 0;		

#if 0		// TP Rev.1 - Developer
		Rte_Call_R_SetupDST_Telegram_CS(kDST_General_Read_Page2);
#else
		RE_SetupDST_Telegram(kDST_General_Read_Page2);
#endif
		StartTimer(Timer_DSTTransTimeout);		
		
		e_DSTProcessStep = kDSTProc_General_Read_Page2_Uplink;
		break;
	case	kDSTProc_General_Read_Page2_Uplink:			
		if(b_DST_RxCompleteFlag==On)
		{
			CancelTimer(Timer_DSTTransTimeout);

			/* DST Rx Data CRC Check */
			// if( check_crc8(Buffer_DST_RxData, DST_RxDataCRC8ChkLength) == 0u)		// TP Rev.1
			if(1)
			{	
				/* Status Error Check */
				if((Buffer_DST_RxData[0]&0x0Fu)==0u)
				{/* Request Executed OK */
					if(b_FOBLearningStatus==Off)
					{
#if 0		// TP Rev.1 - Developer
						// st_DstBlock.number = R_Check_FOB_Serial(&Buffer_DST_RxData[1]);
#else
						// st_DstBlock.number = Check_FOB_Serial(&Buffer_DST_RxData[1]);
#endif
						if(st_DstBlock.number != 0u)				
						{/* Valid TP Serial & Key Number */
							st_DstBlock.retry = 0u;
							DST_SerialPreBackup[0] = Buffer_DST_RxData[1];
							DST_SerialPreBackup[1] = Buffer_DST_RxData[2];
							DST_SerialPreBackup[2] = Buffer_DST_RxData[3];
							DST_SerialPreBackup[3] = Buffer_DST_RxData[4];									
							e_DSTProcessStep = kDSTProc_Authenticaion_Encrypt_Downlink;
						}
						else
						{/* InValid TP Serial & Key Number */
							b_DST_ResponseNG = On;
						}
					}
					else
					{
						if(st_DstBlock.write_fob_number > 0u)
						{
#if 0		// TP Rev.1 - Developer
							// st_DstBlock.number = R_Check_FOB_Serial(&Buffer_DST_RxData[1]);
#else
							// st_DstBlock.number = Check_FOB_Serial(&Buffer_DST_RxData[1]);
#endif
							if(st_DstBlock.number == 0u)
							{
								st_DstBlock.retry = 0u;
								DST_SerialPreBackup[0] = Buffer_DST_RxData[1];
								DST_SerialPreBackup[1] = Buffer_DST_RxData[2];
								DST_SerialPreBackup[2] = Buffer_DST_RxData[3];
								DST_SerialPreBackup[3] = Buffer_DST_RxData[4];								
								e_DSTProcessStep = kDSTProc_General_Read_Page14_Downlink;
							}
							else
							{
								SetC(S_TPDemodulatorResp,InvalidTPfound);
								SetC(b_TP_Already_Learnt,On);
								e_DSTProcessStep = kDSTProc_Idle;
							}
						}
						else
						{
							/* SecurityKeyNumber, Encryption Key �� ���� */
							st_DstBlock.SecurityKeyNumber[0] = Buffer_DST_RxData[1]^st_DstBlock.vehicle_serial[0];
							st_DstBlock.SecurityKeyNumber[1] = Buffer_DST_RxData[2]^st_DstBlock.vehicle_serial[1];
							st_DstBlock.SecurityKeyNumber[2] = Buffer_DST_RxData[3]^st_DstBlock.vehicle_serial[2];
							Generate_TP_EncryptionKey(st_DstBlock.encryption_key);

						
							st_DstBlock.retry = 0u;
							DST_SerialPreBackup[0] = Buffer_DST_RxData[1];
							DST_SerialPreBackup[1] = Buffer_DST_RxData[2];
							DST_SerialPreBackup[2] = Buffer_DST_RxData[3];
							DST_SerialPreBackup[3] = Buffer_DST_RxData[4];							
							e_DSTProcessStep = kDSTProc_General_Read_Page14_Downlink;
						}
					}
				}
				else /* Request Executed NG */
				{
					/*	ERROR STATUS List(low 4bit)
					*	0 = SUCCESS
					*	1 = Address Location Locked
					*	2 = Address out of range
					* 	4 = CRC incorrect
					*	5 = Request frame error
					*	6 = Bilateral authentication failed
					*	7 = AES block error
					*  	8 = Generic error
					*	9 = Uncorrectable EEPROM error
					*  	A = Power supply too low
					*	C = Bit error
					*/
					DST_RxErrorStatus = (Buffer_DST_RxData[0]&0x0Fu);
					b_DST_ResponseNG = On;
				}
			}
			else
			{
				b_DST_ResponseNG = On;
			}		
		}
		if(b_DST_ResponseNG==On)
		{
			CancelTimer(Timer_DSTTransTimeout);		
			st_DstBlock.retry++;
			if(st_DstBlock.retry==kDST_Retry)
			{
				/* TP Search Fail result */
				if(b_FOBLearningStatus!=Off)
				{
					if(Counter_DST_ProcessRetry < kDST_Process_Retry)
					{
						Counter_DST_ProcessRetry++;
						st_DstBlock.retry = 0u;
						e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;
					}
					else
					{
						Counter_DST_ProcessRetry = 0u;
						SetC(S_TPDemodulatorResp,NoTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
				}
				else
				{
					SetC(S_TPDemodulatorResp,NoTPfound);
					e_DSTProcessStep = kDSTProc_Idle;
				}
			}
			else
			{
				e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;
			}
		}
		break;
	case	kDSTProc_General_Read_Page4_Downlink:

#if 0		// TP Rev.1 - Developer
		// Rte_Call_R_SetupDST_Telegram_CS(kDST_General_Read_Page4);		// TP Rev.1
#else
		RE_SetupDST_Telegram(kDST_General_Read_Page4);
#endif

		StartTimer(Timer_DSTTransTimeout);
		
		e_DSTProcessStep = kDSTProc_General_Read_Page4_Uplink;
		break;
	case	kDSTProc_General_Read_Page4_Uplink:
		if(b_DST_RxCompleteFlag==On)
		{
			CancelTimer(Timer_DSTTransTimeout);		

			/* DST Rx Data CRC Check */
			if( check_crc8(Buffer_DST_RxData, DST_RxDataCRC8ChkLength) == 0u)		
			{
				/* Status Error Check */			
				if((Buffer_DST_RxData[0]&0x0Fu)==0u)
				{/* Response Data OK */
					
					if(Buffer_DST_RxData[5] == GetX(b_Learning_RegistCnt))
					{ /* Register Count Matching */
					}
					else
					{ /* Register Count Not Matching */
					}
					e_DSTProcessStep = kDSTProc_Idle;
				}
				else /* Request Executed NG */
				{
					/*	ERROR STATUS List(low 4bit)
					*	0 = SUCCESS
					*	1 = Address Location Locked
					*	2 = Address out of range
					* 	4 = CRC incorrect
					*	5 = Request frame error
					*	6 = Bilateral authentication failed
					*	7 = AES block error
					*  	8 = Generic error
					*	9 = Uncorrectable EEPROM error
					*  	A = Power supply too low
					*	C = Bit error
					*/
					DST_RxErrorStatus = (Buffer_DST_RxData[0]&0x0Fu);
					b_DST_ResponseNG = On;
				}	
			}
			else
			{
				b_DST_ResponseNG = On;
			}
		}
		if(b_DST_ResponseNG==On)
		{
			CancelTimer(Timer_DSTTransTimeout);		
			st_DstBlock.retry++;
			if(st_DstBlock.retry==kDST_Retry)
			{
				/* TP Search Fail result */
				e_DSTProcessStep = kDSTProc_Idle;
			}
			else
			{
				e_DSTProcessStep = kDSTProc_General_Read_Page4_Downlink;
			}
		}
		break;
	case	kDSTProc_General_Read_Page14_Downlink:
		
#if 0		// TP Rev.1 - Developer
		// Rte_Call_R_SetupDST_Telegram_CS(kDST_General_Read_Page14);		// TP Rev.1
#else
		RE_SetupDST_Telegram(kDST_General_Read_Page14);
#endif
		
		StartTimer(Timer_DSTTransTimeout);
		
		e_DSTProcessStep = kDSTProc_General_Read_Page14_Uplink;
		break;
	case	kDSTProc_General_Read_Page14_Uplink:
		if(b_DST_RxCompleteFlag==On)
		{
			CancelTimer(Timer_DSTTransTimeout);

			/* DST Rx Data CRC Check */
			// if( check_crc8(Buffer_DST_RxData, DST_RxDataCRC8ChkLength) == 0u)		// TP Rev.1
			if(1)
			{
		
				/* Status Error Check*/
				if((Buffer_DST_RxData[0]&0x0Fu)==0u)
				{/* Response Data OK */
					if( (Buffer_DST_RxData[1] == Learnt) &&
						(Buffer_DST_RxData[2] == 0xAAu) &&
						(Buffer_DST_RxData[3] == 0xAAu) &&
						(Buffer_DST_RxData[4] == 0xAAu)
					)
					{/* Virgin FOB = 55AAAAAA */
						if(b_FOBLearningStatus!=Off)
						{
							st_DstBlock.retry = 0u;
							e_DSTProcessStep = kDSTProc_General_Read_Page8_Downlink;
						}
						else if( (b_FOBCurrentStatus!=Off) || (GetX(SMKState) == Virgin) )
						{
							b_FOBCurrentStatus = Off;
							SetC(S_TPDemodulatorResp,VirginTPfound);
							e_DSTProcessStep = kDSTProc_Idle;	
						}
						else
						{
							SetC(S_TPDemodulatorResp,InvalidTPfound);
							e_DSTProcessStep = kDSTProc_Idle;
						}
					}
					else if(Buffer_DST_RxData[1] == Learnt)
					{/* Learnt FOB */
						if( (st_DstBlock.vehicle_serial[0] == Buffer_DST_RxData[2]) &&
							(st_DstBlock.vehicle_serial[1] == Buffer_DST_RxData[3]) &&
							(st_DstBlock.vehicle_serial[2] == Buffer_DST_RxData[4])
						)
						{
							st_DstBlock.retry = 0u;
							if(b_FOBCurrentStatus!=Off)
							{
								e_DSTProcessStep = kDSTProc_Authenticaion_Encrypt_Downlink;
							}
							else
							{
								e_DSTProcessStep = kDSTProc_General_Read_Page8_Downlink;
							}
						}
						else
						{
							SetC(S_TPDemodulatorResp,InvalidTPfound);
							e_DSTProcessStep = kDSTProc_Idle;
						}	
					}
					else
					{
						SetC(S_TPDemodulatorResp,InvalidTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
				}
				else /* Request Executed NG */
				{
					/*	ERROR STATUS List(low 4bit)
					*	0 = SUCCESS
					*	1 = Address Location Locked
					*	2 = Address out of range
					* 	4 = CRC incorrect
					*	5 = Request frame error
					*	6 = Bilateral authentication failed
					*	7 = AES block error
					*  	8 = Generic error
					*	9 = Uncorrectable EEPROM error
					*  	A = Power supply too low
					*	C = Bit error
					*/
					DST_RxErrorStatus = (Buffer_DST_RxData[0]&0x0Fu);
					b_DST_ResponseNG = On;
				}			
			}
			else
			{
				b_DST_ResponseNG = On;
			}
		}
		if(b_DST_ResponseNG==On)
		{
			CancelTimer(Timer_DSTTransTimeout);
			st_DstBlock.retry++;
			if(st_DstBlock.retry==kDST_Retry)
			{
				if(b_FOBLearningStatus!=Off)
				{
					if(Counter_DST_ProcessRetry < kDST_Process_Retry)
					{
						Counter_DST_ProcessRetry++;
						st_DstBlock.retry = 0u;
						e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;
					}
					else
					{
						Counter_DST_ProcessRetry = 0u;
						SetC(S_TPDemodulatorResp,NoTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
				}
				else
				{
					if(b_FOBCurrentStatus!=Off)
					{
						b_FOBCurrentStatus = Off;
					}
					SetC(S_TPDemodulatorResp,NoTPfound);
					e_DSTProcessStep = kDSTProc_Idle;
				}
			}
			else
			{
				e_DSTProcessStep = kDSTProc_General_Read_Page14_Downlink;
			}
		}
		break;

	case	kDSTProc_General_Read_Page8_Downlink:

#if 0		// TP Rev.1 - Developer
		// Rte_Call_R_SetupDST_Telegram_CS(kDST_General_Read_Page8);
#else
		RE_SetupDST_Telegram(kDST_General_Read_Page8);
#endif		
		StartTimer(Timer_DSTTransTimeout);
		e_DSTProcessStep = kDSTProc_General_Read_Page8_Uplink;
		break;
	case	kDSTProc_General_Read_Page8_Uplink:
		if(b_DST_RxCompleteFlag==On)
		{
			CancelTimer(Timer_DSTTransTimeout);

			/* DST Rx Data CRC Check */
			// if( check_crc8(Buffer_DST_RxData, DST_RxDataCRC8ChkLength) == 0u)		// TP Rev.1
			if(1)
			{		
				/* Status Error Check */
				if((Buffer_DST_RxData[0]&0x0Fu)==0u)
				{/* Response Data OK*/
				 	if(b_FOBReadingStatus == Off)
					{
					 	/* Fob ǰ�� ���� Ȯ�� */
						if(DST_Partnumber_Check(Buffer_DST_RxData,kPN_Model)==On)
						{
							if(b_FOBLearningStatus!=Off)
							{
								st_DstBlock.retry = 0u;
								e_DSTProcessStep = kDSTProc_General_Read_Page10_Downlink;
							}
							else
							{
								SetC(S_TPDemodulatorResp,InvalidTPfound);
								e_DSTProcessStep = kDSTProc_Idle;
							}
						}
						else
						{
							SetC(S_TPDemodulatorResp,InvalidTPfound);
							e_DSTProcessStep = kDSTProc_Idle;
						}
				 	}
					else
					if(b_FOBReadingStatus == On)
					{
						
						FobPartNumber[0] = 0x39u;	/*9 fix*/
						FobPartNumber[1] = 0x35u;	/*5 fix*/
						FobPartNumber[2] = 0x34u;	/*4 fix*/
						FobPartNumber[3] = 0x34u;	/*4 fix*/
						FobPartNumber[4] = 0x30u;	/*0 fix*/

						FobPartNumber[5] = Buffer_DST_RxData[1];		
						FobPartNumber[6] = Buffer_DST_RxData[2];	
							
						e_DSTProcessStep = kDSTProc_General_Read_Page10_Downlink;
					}
					else
					{
						/*	ERROR STATUS List(low 4bit)
						*	0 = SUCCESS
						*	1 = Address Location Locked
						*	2 = Address out of range
						* 	4 = CRC incorrect
						*	5 = Request frame error
						*	6 = Bilateral authentication failed
						*	7 = AES block error
						*  	8 = Generic error
						*	9 = Uncorrectable EEPROM error
						*  	A = Power supply too low
						*	C = Bit error
						*/
						DST_RxErrorStatus = (Buffer_DST_RxData[0]&0x0Fu);						
						b_DST_ResponseNG = On;
					}		
				}
				else /* Request Executed NG */
				{
					b_DST_ResponseNG = On;
				}
			}
			else
			{
				b_DST_ResponseNG = On;				
			}
		}
		if(b_DST_ResponseNG==On)
		{
			CancelTimer(Timer_DSTTransTimeout);
			
			st_DstBlock.retry++;
			if(st_DstBlock.retry==kDST_Retry)
			{
				if(b_FOBLearningStatus!=Off)
				{
					if(Counter_DST_ProcessRetry < kDST_Process_Retry)
					{
						Counter_DST_ProcessRetry++;
						st_DstBlock.retry = 0u;
						e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;
					}
					else
					{
						Counter_DST_ProcessRetry = 0u;
						SetC(S_TPDemodulatorResp,NoTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
				}
				else
				if(b_FOBReadingStatus == On)
				{
					SetC(S_TPDemodulatorResp,ReadNoTPfound);
					e_DSTProcessStep = kDSTProc_Idle;
				}
				else
				{
					if(b_FOBCurrentStatus!=Off)
					{
						b_FOBCurrentStatus = Off;
					}
					SetC(S_TPDemodulatorResp,NoTPfound);
					e_DSTProcessStep = kDSTProc_Idle;
				}
			}
			else
			{
				e_DSTProcessStep = kDSTProc_General_Read_Page8_Downlink;
			}
		}
		break;
	case	kDSTProc_General_Read_Page10_Downlink:
		
#if 0		// TP Rev.1 - Developer
		// Rte_Call_R_SetupDST_Telegram_CS(kDST_General_Read_Page10);		// TP Rev.1
#else
		RE_SetupDST_Telegram(kDST_General_Read_Page10);
#endif		
		StartTimer(Timer_DSTTransTimeout);
		e_DSTProcessStep = kDSTProc_General_Read_Page10_Uplink;
		break;
	case	kDSTProc_General_Read_Page10_Uplink:
		if(b_DST_RxCompleteFlag==On)
		{
			CancelTimer(Timer_DSTTransTimeout);
			
			/* DST Rx Data CRC Check */
			// if( check_crc8(Buffer_DST_RxData, DST_RxDataCRC8ChkLength) == 0u)		// TP Rev.1
			if(1)
			{		
				
				if((Buffer_DST_RxData[0]&0x0Fu)==0u)
				{	/* Response Data OK */
					if(b_FOBReadingStatus == Off)
					{
						/* Fob ǰ�� �ɼ� Ȯ�� */
						if(DST_Partnumber_Check(Buffer_DST_RxData,kPN_Option)==On)
						{
							if(b_FOBLearningStatus!=Off)
							{
								st_DstBlock.retry = 0u;
								RKERollingCnt_High 	= 0u;
								RKERollingCnt_Low	= 0u;
								e_DSTProcessStep = kDSTProc_General_Read_Page12_Downlink;
							}
							else
							{
								SetC(S_TPDemodulatorResp,InvalidTPfound);
								e_DSTProcessStep = kDSTProc_Idle;
							}
						}
						else
						{
							SetC(S_TPDemodulatorResp,InvalidTPfound);
							e_DSTProcessStep = kDSTProc_Idle;						
						}
					}
					else
					if(b_FOBReadingStatus == On)
					{
						FobPartNumber[7] = Buffer_DST_RxData[1];
						FobPartNumber[8] = Buffer_DST_RxData[2];
						FobPartNumber[9] = Buffer_DST_RxData[3];

						SetC(S_TPDemodulatorResp,ReadTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
					else
					{
						b_DST_ResponseNG = On;
					}
				}
				else /* Request Executed NG */
				{
					/*	ERROR STATUS List(low 4bit)
					*	0 = SUCCESS
					*	1 = Address Location Locked
					*	2 = Address out of range
					* 	4 = CRC incorrect
					*	5 = Request frame error
					*	6 = Bilateral authentication failed
					*	7 = AES block error
					*  	8 = Generic error
					*	9 = Uncorrectable EEPROM error
					*  	A = Power supply too low
					*	C = Bit error
					*/
					DST_RxErrorStatus = (Buffer_DST_RxData[0]&0x0Fu);					
					b_DST_ResponseNG = On;
				}
			}
			else
			{
				b_DST_ResponseNG = On;
			}			
		}
		if(b_DST_ResponseNG==On)
		{
			CancelTimer(Timer_DSTTransTimeout);		
			st_DstBlock.retry++;
			if(st_DstBlock.retry==kDST_Retry)
			{
				if(b_FOBLearningStatus!=Off)
				{
					if(Counter_DST_ProcessRetry < kDST_Process_Retry)
					{
						Counter_DST_ProcessRetry++;
						st_DstBlock.retry = 0u;
						e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;
					}
					else
					{
						Counter_DST_ProcessRetry = 0u;
						SetC(S_TPDemodulatorResp,NoTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
				}
				else
				if(b_FOBReadingStatus == On)
				{
					SetC(S_TPDemodulatorResp,ReadNoTPfound);
					e_DSTProcessStep = kDSTProc_Idle;
				}
				else
				{
					if(b_FOBCurrentStatus!=Off)
					{
						b_FOBCurrentStatus = Off;
					}
					SetC(S_TPDemodulatorResp,NoTPfound);
					e_DSTProcessStep = kDSTProc_Idle;
				}
			}
			else
			{
				e_DSTProcessStep = kDSTProc_General_Read_Page10_Downlink;
			}
		}
		break;
	case	kDSTProc_General_Read_Page12_Downlink:
		
#if 0		// TP Rev.1 - Developer
		// Rte_Call_R_SetupDST_Telegram_CS(kDST_General_Read_Page12);		// TP Rev.1
#else
		RE_SetupDST_Telegram(kDST_General_Read_Page12);
#endif	
		StartTimer(Timer_DSTTransTimeout);
		e_DSTProcessStep = kDSTProc_General_Read_Page12_Uplink;
		break;
		
	case	kDSTProc_General_Read_Page12_Uplink:
		if(b_DST_RxCompleteFlag==On)
		{
			CancelTimer(Timer_DSTTransTimeout);
			
			/* DST Rx Data CRC Check */
			// if( check_crc8(Buffer_DST_RxData, DST_RxDataCRC8ChkLength) == 0u)		// TP Rev.1
			if(1)
			{		
				/* Status Error Check */
				if((Buffer_DST_RxData[0]&0x0Fu)==0u)
				{
					if(b_FOBLearningStatus!=Off)
					{
						/* Request Executed OK */ 
						RKERollingCnt_High	= Buffer_DST_RxData[2];
						RKERollingCnt_Low	= Buffer_DST_RxData[1];
						
						st_DstBlock.retry = 0u;
						//e_DSTProcessStep = kDSTProc_selected_Program_Downlink;	
						e_DSTProcessStep = kDSTProc_Selected_Program_Page4_Downlink; /* ATMEL DRV TEST Code */
					}
					else
					{
						SetC(S_TPDemodulatorResp,InvalidTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
				}
				else /* Request Executed NG */
				{
					/*	ERROR STATUS List(low 4bit)
					*	0 = SUCCESS
					*	1 = Address Location Locked
					*	2 = Address out of range
					* 	4 = CRC incorrect
					*	5 = Request frame error
					*	6 = Bilateral authentication failed
					*	7 = AES block error
					*  	8 = Generic error
					*	9 = Uncorrectable EEPROM error
					*  	A = Power supply too low
					*	C = Bit error
					*/
					DST_RxErrorStatus = (Buffer_DST_RxData[0]&0x0Fu);					
					b_DST_ResponseNG = On;
				}
			}
			else
			{
				b_DST_ResponseNG = On;
			}	
		}
		if(b_DST_ResponseNG==On)
		{
			CancelTimer(Timer_DSTTransTimeout);
			st_DstBlock.retry++;
			if(st_DstBlock.retry==kDST_Retry)
			{
				if(b_FOBLearningStatus!=Off)
				{
					if(Counter_DST_ProcessRetry < kDST_Process_Retry)
					{
						Counter_DST_ProcessRetry++;
						st_DstBlock.retry = 0u;
						e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;
					}
					else
					{
						Counter_DST_ProcessRetry = 0u;
						SetC(S_TPDemodulatorResp,NoTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
				}
				else
				{
					if(b_FOBCurrentStatus!=Off)
					{
						b_FOBCurrentStatus = Off;
					}
					SetC(S_TPDemodulatorResp,NoTPfound);
					e_DSTProcessStep = kDSTProc_Idle;
				}				
			}
			else
			{
				e_DSTProcessStep = kDSTProc_General_Read_Page12_Downlink;
			}
		}
		break;
	case	kDSTProc_selected_Program_Downlink:
		
#if 0		// TP Rev.1 - Developer
		// Rte_Call_R_SetupDST_Telegram_CS(kDST_Selected_Program);		// TP Rev.1
#else
		RE_SetupDST_Telegram(kDST_Selected_Program);
#endif
		StartTimer(Timer_DSTTransTimeout);
		e_DSTProcessStep = kDSTProc_selected_Program_Uplink;
		break;
		
	case	kDSTProc_selected_Program_Uplink:
		if(b_DST_RxCompleteFlag==On)
		{
			CancelTimer(Timer_DSTTransTimeout);

			/* DST Rx Data CRC Check */
			if( check_crc8(Buffer_DST_RxData, DST_RxDataCRC8ChkLength) == 0u)
			{		
			
				if((Buffer_DST_RxData[0]&0x0Fu)==0u)
				{
					if( (DST_SerialPreBackup[0] == Buffer_DST_RxData[3]) &&
						(DST_SerialPreBackup[1] == Buffer_DST_RxData[4]) &&
						(DST_SerialPreBackup[2] == Buffer_DST_RxData[5]) &&
						(DST_SerialPreBackup[3] == Buffer_DST_RxData[6])
					)	
					{						
						st_DstBlock.retry = 0u;
						e_DSTProcessStep = kDSTProc_Selected_Program_Page4_Downlink;
					}
					else
					{
						b_DST_ResponseNG = On;
					}
				}
				else /* Request Executed NG */
				{
					/*	ERROR STATUS List(low 4bit)
					*	0 = SUCCESS
					*	1 = Address Location Locked
					*	2 = Address out of range
					* 	4 = CRC incorrect
					*	5 = Request frame error
					*	6 = Bilateral authentication failed
					*	7 = AES block error
					*  	8 = Generic error
					*	9 = Uncorrectable EEPROM error
					*  	A = Power supply too low
					*	C = Bit error
					*/
					DST_RxErrorStatus = (Buffer_DST_RxData[0]&0x0Fu);					
					b_DST_ResponseNG = On;
				}		
			}
			else
			{
				b_DST_ResponseNG = On;
			}
		}
		if(b_DST_ResponseNG==On)
		{
			CancelTimer(Timer_DSTTransTimeout);		
			st_DstBlock.retry++;
			if(st_DstBlock.retry==kDST_Retry)
			{
				/* TP Search Fail result */
				if(b_FOBLearningStatus!=Off)
				{
					if(Counter_DST_ProcessRetry < kDST_Process_Retry)
					{
						Counter_DST_ProcessRetry++;
						st_DstBlock.retry = 0u;
						e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;
					}
					else
					{
						Counter_DST_ProcessRetry = 0u;
						SetC(S_TPDemodulatorResp,NoTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
				}
				else
				{
					SetC(S_TPDemodulatorResp,NoTPfound);
					e_DSTProcessStep = kDSTProc_Idle;
				}
			}
			else
			{
				e_DSTProcessStep = kDSTProc_selected_Program_Downlink;
			}
		}
		break;
		
	case	kDSTProc_Selected_Program_Page4_Downlink:
		
		Rte_Write_st_DstBlock_P_write_fob_number(st_DstBlock.write_fob_number);
		
#if 0		// TP Rev.1 - Developer
		// Rte_Call_R_SetupDST_Telegram_CS(kDST_Selected_Program_Page4);		// TP Rev.1
#else
		RE_SetupDST_Telegram(kDST_Selected_Program_Page4);
#endif	
			
		StartTimer(Timer_DSTTransTimeout);
		e_DSTProcessStep = kDSTProc_Selected_Program_Page4_Uplink;
		break;
		
	case	kDSTProc_Selected_Program_Page4_Uplink:
		if(b_DST_RxCompleteFlag==On)
		{
			CancelTimer(Timer_DSTTransTimeout);

			/* DST Rx Data CRC Check */
			// if( check_crc8(Buffer_DST_RxData, DST_RxDataCRC8ChkLength) == 0u)		// TP Rev.1
			if(1)
			{		
				/* Status Error Check */
				if((Buffer_DST_RxData[0]&0x0Fu)==0u)
				{/* Response Data OK */
					st_DstBlock.retry = 0;
					e_DSTProcessStep = kDSTProc_Selected_Program_Page6_Downlink;
				}
				else /* Request Executed NG */
				{
					/*	ERROR STATUS List(low 4bit)
					*	0 = SUCCESS
					*	1 = Address Location Locked
					*	2 = Address out of range
					* 	4 = CRC incorrect
					*	5 = Request frame error
					*	6 = Bilateral authentication failed
					*	7 = AES block error
					*  	8 = Generic error
					*	9 = Uncorrectable EEPROM error
					*  	A = Power supply too low
					*	C = Bit error
					*/
					DST_RxErrorStatus = (Buffer_DST_RxData[0]&0x0Fu);					
					b_DST_ResponseNG = On;
				}
			}
			else
			{
				b_DST_ResponseNG = On;
			}
		}
		if(b_DST_ResponseNG==On)
		{
			CancelTimer(Timer_DSTTransTimeout);
			st_DstBlock.retry++;
			if(st_DstBlock.retry==kDST_Retry)
			{
				/* TP Search Fail result */
				if(b_FOBLearningStatus!=Off)
				{
					if(Counter_DST_ProcessRetry < kDST_Process_Retry)
					{
						Counter_DST_ProcessRetry++;
						st_DstBlock.retry = 0u;
						e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;
					}
					else
					{
						Counter_DST_ProcessRetry = 0u;
						SetC(S_TPDemodulatorResp,NoTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
				}
				else
				{
					SetC(S_TPDemodulatorResp,NoTPfound);
					e_DSTProcessStep = kDSTProc_Idle;
				}
			}
			else
			{
				e_DSTProcessStep = kDSTProc_Selected_Program_Page4_Downlink;
			}
		}
		break;
		
	case	kDSTProc_Selected_Program_Page6_Downlink:
		
		Rte_Write_st_DstBlock_P_security_key_number(st_DstBlock.SecurityKeyNumber);

#if 0		// TP Rev.1 - Developer
		// Rte_Call_R_SetupDST_Telegram_CS(kDST_Selected_Program_Page6);		// TP Rev.1
#else
		RE_SetupDST_Telegram(kDST_Selected_Program_Page6);
#endif

		StartTimer(Timer_DSTTransTimeout);
		e_DSTProcessStep = kDSTProc_Selected_Program_Page6_Uplink;
		break;

	case	kDSTProc_Selected_Program_Page6_Uplink:
		if(b_DST_RxCompleteFlag==On)
		{
			CancelTimer(Timer_DSTTransTimeout);

			/* DST Rx Data CRC Check */
			// if( check_crc8(Buffer_DST_RxData, DST_RxDataCRC8ChkLength) == 0u)		// TP Rev.1
			if(1)
			{	
				/* Status Error Check */
				if((Buffer_DST_RxData[0]&0x0Fu)==0u)
				{/* Response Data OK */
					st_DstBlock.retry = 0u;
					//e_DSTProcessStep = kDSTProc_Exit_selected_Downlink;
					e_DSTProcessStep = kDSTProc_Selected_Program_Page14_Downlink;
				}
				else /* Request Executed NG */
				{
					/*	ERROR STATUS List(low 4bit)
					*	0 = SUCCESS
					*	1 = Address Location Locked
					*	2 = Address out of range
					* 	4 = CRC incorrect
					*	5 = Request frame error
					*	6 = Bilateral authentication failed
					*	7 = AES block error
					*  	8 = Generic error
					*	9 = Uncorrectable EEPROM error
					*  	A = Power supply too low
					*	C = Bit error
					*/
					DST_RxErrorStatus = (Buffer_DST_RxData[0]&0x0Fu);					
					b_DST_ResponseNG = On;
				}
			}
			else
			{
				b_DST_ResponseNG = On;
			}
		}
		if(b_DST_ResponseNG==On)
		{
			CancelTimer(Timer_DSTTransTimeout);
			st_DstBlock.retry++;
			if(st_DstBlock.retry==kDST_Retry)
			{
				/* TP Search Fail result */
				if(b_FOBLearningStatus!=Off)
				{
					if(Counter_DST_ProcessRetry < kDST_Process_Retry)
					{
						Counter_DST_ProcessRetry++;
						st_DstBlock.retry = 0u;
						e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;
					}
					else
					{
						Counter_DST_ProcessRetry = 0u;
						SetC(S_TPDemodulatorResp,NoTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
				}
				else
				{
					SetC(S_TPDemodulatorResp,NoTPfound);
					e_DSTProcessStep = kDSTProc_Idle;
				}
			}
			else
			{
				e_DSTProcessStep = kDSTProc_Selected_Program_Page6_Downlink;
			}
		}
		break;

	case	kDSTProc_Selected_Program_Page14_Downlink:
		
		Rte_Write_st_DstBlock_P_vehicle_serial(st_DstBlock.vehicle_serial);

#if 0		// TP Rev.1 - Developer
		// Rte_Call_R_SetupDST_Telegram_CS(kDST_Selected_Program_Page14);		// TP Rev.1
#else
		RE_SetupDST_Telegram(kDST_Selected_Program_Page14);
#endif

		StartTimer(Timer_DSTTransTimeout);
		e_DSTProcessStep = kDSTProc_Selected_Program_Page14_Uplink;
		break;
		
	case	kDSTProc_Selected_Program_Page14_Uplink:
		if(b_DST_RxCompleteFlag==On)
		{
			CancelTimer(Timer_DSTTransTimeout);

			/* DST Rx Data CRC Check */
			// if( check_crc8(Buffer_DST_RxData, DST_RxDataCRC8ChkLength) == 0u)		// TP Rev.1
			if(1)
			{	
				/* Status Error Check */
				if((Buffer_DST_RxData[0]&0x0Fu)==0u)
				{/* Response Data OK */
					st_DstBlock.retry = 0;
					//e_DSTProcessStep = kDSTProc_Exit_selected_Downlink;
					e_DSTProcessStep = kDSTProc_Authenticaion_Encrypt_Key_Program_Downlink; //���� ���� ����. 
				}
				else /* Request Executed NG */
				{
					/*	ERROR STATUS List(low 4bit)
					*	0 = SUCCESS
					*	1 = Address Location Locked
					*	2 = Address out of range
					* 	4 = CRC incorrect
					*	5 = Request frame error
					*	6 = Bilateral authentication failed
					*	7 = AES block error
					*  	8 = Generic error
					*	9 = Uncorrectable EEPROM error
					*  	A = Power supply too low
					*	C = Bit error
					*/
					DST_RxErrorStatus = (Buffer_DST_RxData[0]&0x0Fu);					
					b_DST_ResponseNG = On;
				}
			}
			else
			{
				b_DST_ResponseNG = On;
			}
		}
		if(b_DST_ResponseNG==On)
		{
			CancelTimer(Timer_DSTTransTimeout);
			st_DstBlock.retry++;
			if(st_DstBlock.retry==kDST_Retry)
			{
				/* TP Search Fail result */
				if(b_FOBLearningStatus!=Off)
				{
					if(Counter_DST_ProcessRetry < kDST_Process_Retry)
					{
						Counter_DST_ProcessRetry++;
						st_DstBlock.retry = 0u;
						e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;
					}
					else
					{
						Counter_DST_ProcessRetry = 0u;
						SetC(S_TPDemodulatorResp,NoTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
				}
				else
				{
					SetC(S_TPDemodulatorResp,NoTPfound);
					e_DSTProcessStep = kDSTProc_Idle;
				}
			}
			else
			{
				e_DSTProcessStep = kDSTProc_Selected_Program_Page14_Downlink;
			}
		}
		break;

	case	kDSTProc_Exit_selected_Downlink:
		
#if 0		// TP Rev.1 - Developer
		// Rte_Call_R_SetupDST_Telegram_CS(kDST_Exit_Program);		// TP Rev.1
#else
		RE_SetupDST_Telegram(kDST_Exit_Program);
#endif
		StartTimer(Timer_DSTTransTimeout);
		e_DSTProcessStep = kDSTProc_Exit_selected_Uplink;
		break;
	case	kDSTProc_Exit_selected_Uplink:
		if(b_DST_RxCompleteFlag==On)
		{
			CancelTimer(Timer_DSTTransTimeout);
			
			/* DST Rx Data CRC Check */
			if( check_crc8(Buffer_DST_RxData, DST_RxDataCRC8ChkLength) == 0u)
			{					
				/* Status Error Check */
				if((Buffer_DST_RxData[0]&0x0Fu)==0u)
				{/* Response Data OK */
					st_DstBlock.retry = 0u;
					e_DSTProcessStep = kDSTProc_Authenticaion_Encrypt_Key_Program_Downlink;
				}
				else /* Request Executed NG */
				{
					/*	ERROR STATUS List(low 4bit)
					*	0 = SUCCESS
					*	1 = Address Location Locked
					*	2 = Address out of range
					* 	4 = CRC incorrect
					*	5 = Request frame error
					*	6 = Bilateral authentication failed
					*	7 = AES block error
					*  	8 = Generic error
					*	9 = Uncorrectable EEPROM error
					*  	A = Power supply too low
					*	C = Bit error
					*/
					DST_RxErrorStatus = (Buffer_DST_RxData[0]&0x0Fu);							
					b_DST_ResponseNG = On;
				}
			}
			else
			{
				b_DST_ResponseNG = On;
			}
		}

		if(b_DST_ResponseNG==On)
		{
 			CancelTimer(Timer_DSTTransTimeout);
			st_DstBlock.retry++;
			if(st_DstBlock.retry==kDST_Retry)
			{
				/* TP Search Fail result */
				if(b_FOBLearningStatus!=Off)
				{
					if(Counter_DST_ProcessRetry < kDST_Process_Retry)
					{
						Counter_DST_ProcessRetry++;
						st_DstBlock.retry = 0u;
						e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;
					}
					else
					{
						Counter_DST_ProcessRetry = 0u;
						SetC(S_TPDemodulatorResp,NoTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
				}
				else
				{
					SetC(S_TPDemodulatorResp,NoTPfound);
					e_DSTProcessStep = kDSTProc_Idle;
				}
			}
			else
			{
				e_DSTProcessStep = kDSTProc_Exit_selected_Downlink;
			}
		}
		break;		

	case	kDSTProc_Authenticaion_Encrypt_Key_Program_Downlink:
		
		Rte_Write_st_DstBlock_P_encryption(st_DstBlock.encryption_key);

#if 0		// TP Rev.1 - Developer
		// Rte_Call_R_SetupDST_Telegram_CS(kDST_AES_Encryption_Program);		// TP Rev.1
#else
		RE_SetupDST_Telegram(kDST_AES_Encryption_Program);
#endif
		
		StartTimer(Timer_DSTTransTimeout);
		e_DSTProcessStep = kDSTProc_Authenticaion_Encrypt_Key_Program_Uplink;
		break;
	case	kDSTProc_Authenticaion_Encrypt_Key_Program_Uplink:
		if(b_DST_RxCompleteFlag==On)
		{
			CancelTimer(Timer_DSTTransTimeout);

			/* DST Rx Data CRC Check */
			// if( check_crc8(Buffer_DST_RxData, DST_RxDataCRC8ChkLength) == 0u)		// TP Rev.1
			if(1)
			{	

				/* Status Error Check */					
				if((Buffer_DST_RxData[0]&0x0Fu)==0u)
				{/* Response Data OK */
					st_DstBlock.retry = 0u;
					e_DSTProcessStep = kDSTProc_Authenticaion_Encrypt_Downlink;
				}
				else /* Request Executed NG */
				{
					/*	ERROR STATUS List(low 4bit)
					*	0 = SUCCESS
					*	1 = Address Location Locked
					*	2 = Address out of range
					* 	4 = CRC incorrect
					*	5 = Request frame error
					*	6 = Bilateral authentication failed
					*	7 = AES block error
					*  	8 = Generic error
					*	9 = Uncorrectable EEPROM error
					*  	A = Power supply too low
					*	C = Bit error
					*/
					DST_RxErrorStatus = (Buffer_DST_RxData[0]&0x0Fu);			
					b_DST_ResponseNG = On;
				}
			}
			else
			{
				b_DST_ResponseNG = On;
			}
		}
		if(b_DST_ResponseNG==On)
		{
			CancelTimer(Timer_DSTTransTimeout);
			
 			st_DstBlock.retry++;
			if(st_DstBlock.retry==kDST_Retry)
			{
				/* TP Search Fail result */
				if(b_FOBLearningStatus!=Off)
				{
					if(Counter_DST_ProcessRetry < kDST_Process_Retry)
					{
						Counter_DST_ProcessRetry++;
						st_DstBlock.retry = 0u;
						e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;
					}
					else
					{
						Counter_DST_ProcessRetry = 0u;
						SetC(S_TPDemodulatorResp,NoTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
				}
				else
				{
					SetC(S_TPDemodulatorResp,NoTPfound);
					e_DSTProcessStep = kDSTProc_Idle;
				}
			}
			else
			{
				e_DSTProcessStep = kDSTProc_Authenticaion_Encrypt_Key_Program_Downlink;
			}
		}
		break;
	case	kDSTProc_Authenticaion_Encrypt_Downlink:
	
		Get_Random8_Challenge(st_DstBlock.challenge);			// make challenge numbuer(random number)
		AES_Encryption(st_DstBlock.challenge);					// make aes_encryption
		
		Rte_Write_st_DstBlock_P_challenge(st_DstBlock.challenge);
		
#if 0		// TP Rev.1 - Developer
		// Rte_Call_R_SetupDST_Telegram_CS(kDST_AES_Encryption_Read);		// TP Rev.1
#else
		RE_SetupDST_Telegram(kDST_AES_Encryption_Read);
#endif

		StartTimer(Timer_DSTTransTimeout);
		e_DSTProcessStep = kDSTProc_Authenticaion_Encrypt_Uplink;
		break;
	case	kDSTProc_Authenticaion_Encrypt_Uplink:
		if(b_DST_RxCompleteFlag==On)
		{
			CancelTimer(Timer_DSTTransTimeout);
			
 			if(b_FOBLearningStatus!=Off)
			{
				/* None BCC */
				/* Check Serial Number & Signature */
#if 0			/* ATA LF DRV "Auth command" response(TP -> SMK) signature without FOB serial */	
				if( (DST_SerialPreBackup[0] == Buffer_DST_RxData[2]) &&
					(DST_SerialPreBackup[1] == Buffer_DST_RxData[3]) &&
					(DST_SerialPreBackup[2] == Buffer_DST_RxData[4]) &&
					(st_DstBlock.signature[0] == Buffer_DST_RxData[5]) &&
					(st_DstBlock.signature[1] == Buffer_DST_RxData[6]) &&
					(st_DstBlock.signature[2] == Buffer_DST_RxData[7]) &&
					(st_DstBlock.signature[3] == Buffer_DST_RxData[8]) &&
					(st_DstBlock.signature[4] == Buffer_DST_RxData[9]) &&
					(st_DstBlock.signature[5] == Buffer_DST_RxData[10]) &&
					(st_DstBlock.signature[6] == Buffer_DST_RxData[11]) &&
					(st_DstBlock.signature[7] == Buffer_DST_RxData[12])
				)
#endif				
				if( (st_DstBlock.signature[0] == Buffer_DST_RxData[0]) &&
					(st_DstBlock.signature[1] == Buffer_DST_RxData[1]) &&
					(st_DstBlock.signature[2] == Buffer_DST_RxData[2]) &&
					(st_DstBlock.signature[3] == Buffer_DST_RxData[3]) &&
					(st_DstBlock.signature[4] == Buffer_DST_RxData[4]) &&
					(st_DstBlock.signature[5] == Buffer_DST_RxData[5]) &&
					(st_DstBlock.signature[6] == Buffer_DST_RxData[6]) &&
					(st_DstBlock.signature[7] == Buffer_DST_RxData[7])
				)
				{
					/* (void)R_Store_RKE_Serial(&Buffer_DST_RxData[2],st_DstBlock.write_fob_number,RKERollingCnt_High,RKERollingCnt_Low); */
#if 0		// TP Rev.1 - Developer
					// (void)R_Store_RKE_Serial(st_DstBlock.SecurityKeyNumber,DST_SerialPreBackup,st_DstBlock.write_fob_number,RKERollingCnt_High,RKERollingCnt_Low);		// TP Rev.1
#else
					// Store_RKE_Serial(st_DstBlock.SecurityKeyNumber,DST_SerialPreBackup,st_DstBlock.write_fob_number,RKERollingCnt_High,RKERollingCnt_Low);
#endif
					SetC(S_TPDemodulatorResp,ValidTPfound);
#if 0		// TP Rev.1 - Developer
					// R_Reset_Encryption_Manager();		// TP Rev.1
#else
					Reset_Encryption_Manager();
#endif
					e_DSTProcessStep = kDSTProc_Idle;
				}
				else
				{
					st_DstBlock.retry++;
					if(st_DstBlock.retry==kDST_Retry)
					{
						/* TP Search Fail result */
						if(Counter_DST_ProcessRetry < kDST_Process_Retry)
						{
							Counter_DST_ProcessRetry++;
							st_DstBlock.retry = 0u;
							e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;
						}
						else
						{
							Counter_DST_ProcessRetry = 0u;
							SetC(S_TPDemodulatorResp,InvalidTPfound);
							e_DSTProcessStep = kDSTProc_Idle;
						}
					}
					else
					{
						e_DSTProcessStep = kDSTProc_Authenticaion_Encrypt_Downlink;
					}
				}
			}
			else
			{
				/* None BCC */
				/* Check Serial Number & Signature */

				/*st_DstBlock.number = R_Check_FOB_Serial(&Buffer_DST_RxData[1]); */	/* ���� X ���� ���� �ʿ� */
				
				if( ((st_DstBlock.signature[0] == Buffer_DST_RxData[0]) &&
					 (st_DstBlock.signature[1] == Buffer_DST_RxData[1]) &&
					 (st_DstBlock.signature[2] == Buffer_DST_RxData[2]) &&
					 (st_DstBlock.signature[3] == Buffer_DST_RxData[3]) &&
					 (st_DstBlock.signature[4] == Buffer_DST_RxData[4]) &&
					 (st_DstBlock.signature[5] == Buffer_DST_RxData[5]) &&
					 (st_DstBlock.signature[6] == Buffer_DST_RxData[6]) &&
					 (st_DstBlock.signature[7] == Buffer_DST_RxData[7])) &&
					(st_DstBlock.number > 0u)
				) 
				{
					if(b_FOBCurrentStatus!=Off)
					{
						b_FOBCurrentStatus = Off;
					}
					SetC(S_TPDemodulatorResp,ValidTPfound);
#if 0		// TP Rev.1 - Developer
					// R_StoreRKEDisableCnt(st_DstBlock.number,0u);		// TP Rev.1
#else
					// StoreRKEDisableCnt(st_DstBlock.number,0u);
#endif
					e_DSTProcessStep = kDSTProc_Idle;
				}
				else
				{
					st_DstBlock.retry++;
					if(st_DstBlock.retry==kDST_Retry)
					{
						/* TP Search Fail result */
						if(b_FOBCurrentStatus!=Off)
						{
							b_FOBCurrentStatus = Off;
						}
						SetC(S_TPDemodulatorResp,InvalidTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
					else
					{
						e_DSTProcessStep = kDSTProc_Authenticaion_Encrypt_Downlink;
					}
				}
			}
		}
		if(b_DST_ResponseNG==On)
		{
			CancelTimer(Timer_DSTTransTimeout);

 			st_DstBlock.retry++;
			if(st_DstBlock.retry==kDST_Retry)
			{
				/* TP Search Fail result */
				if(b_FOBLearningStatus!=Off)
				{
					if(Counter_DST_ProcessRetry < kDST_Process_Retry)
					{
						Counter_DST_ProcessRetry++;
						st_DstBlock.retry = 0u;
						e_DSTProcessStep = kDSTProc_General_Read_Page2_Downlink;
					}
					else
					{
						Counter_DST_ProcessRetry = 0u;
						SetC(S_TPDemodulatorResp,NoTPfound);
						e_DSTProcessStep = kDSTProc_Idle;
					}
				}
				else
				{
					if(b_FOBCurrentStatus!=Off)
					{
						b_FOBCurrentStatus = Off;
					}
					SetC(S_TPDemodulatorResp,NoTPfound);
					e_DSTProcessStep = kDSTProc_Idle;
				}
			}
			else
			{
				e_DSTProcessStep = kDSTProc_Authenticaion_Encrypt_Downlink;
			}
		}
		break;
		
	default:
		/* MISRA */
		break;
	}
}

// FUNC(void, SWC_SMK_TP_CODE) Setup_DST_ProgramData(IN VAR(uint8, AUTOMATIC) number)
FUNC(void, SWC_TP_CODE) Setup_DST_ProgramData(uint8 number)
{ /* FOB ��� �ÿ��� ����ϴ� Data Setting */
	st_DstBlock.write_fob_number = number;
}

FUNC(Std_ReturnType, SWC_SMK_TP_CODE) Get_DST_RunningStep(void)
{
	return (u8)e_DSTProcessStep;
}

#if 0		// TP Rev.1
FUNC(Std_ReturnType, SWC_SMK_TP_CODE) Report_DST_RegistResult(void)
{
	u8	result;

	// (void)Rte_Read_R_S_TPDemodulatorResp_SR(&S_TPDemodulatorResp);		// TP Rev.1
	
	if( (b_FOBLearningStatus==Off) &&
		(b_FOBReadingStatus==Off)
	)
	{
		result = 0x00;
	}
	else
	{
		switch(GetX(S_TPDemodulatorResp))
		{
		/*case	kTPSearchProgress:	result = 2;	break;*/
		case	NoTPfound:
			b_FOBLearningStatus = Off;
			result = 0x98;
			break;
		case	VirginTPfound:
		case	InvalidTPfound:
			b_FOBLearningStatus = Off;	
			result = 0xF0;	
			break;
		case	ValidTPfound:		
			b_FOBLearningStatus = Off;
			result = 0x01;
			break;
		case	ReadTPfound:
			b_FOBReadingStatus = Off;
			result = 0x01;		/* Fob Partnumber Read success */	
			break;
		case	ReadNoTPfound:
			b_FOBReadingStatus = Off;
			result = 0x0A;		/* Fob Partnumber Read Fail */
			break;
		case	TPSearchProgress:
		default:	
			result = 0x00;
			break;
		}
	}
	return	result;
}
#endif

void Set_DSTProcessStep_Idle(void)
{
	e_DSTProcessStep = kDSTProc_Idle;
}


typedef enum
{
	kNoAction=0,
	kAction
	
} e_Fob_Partnumber_Read_Control;


void Fob_Partnumber_Read_Control(void)
{
	static	e_Fob_Partnumber_Read_Control e_Fob_Partnumber_Read_Control_Step;
	
	switch(e_Fob_Partnumber_Read_Control_Step)
	{

	case kNoAction:
		if(GetX(S_DiagReq) == ReadFOBPartNumber)
		{
			e_Fob_Partnumber_Read_Control_Step = kAction;
		}
		break;

	case kAction:
		if(GetX(S_DiagSession) == kOff)
		{
			if(GetX(b_SMKLearningInProgress) == kOff)
			{
				SetC(b_SSBPressEnabled, kOn);
			}
			e_Fob_Partnumber_Read_Control_Step = kNoAction;
		}
		break;

	default:
		/* MISRA */
		break;
	}
}


/* TP Test code */
typedef enum
{
	kIMMO_INIT = 0,
	kIMMO_TURN_ON,	
	kIMMO_POWER_DEALY,
	kIMMO_TX_DATA,
	kIMMO_RX_DEALY,
	kIMMO_RX_DATA,
	kIMMO_TUNR_OFF
} e_STEP_BASESTATION;

static	u8 m_immoTxData[24]= {0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u,0x00u};
static	u8 m_aesKey[16] = {0x53, 0x48, 0x49, 0x4E, 0x43, 0x48, 0x41, 0x4E, 0x47, 0x2D, 0x48, 0x43, 0x20, 0x00, 0x00, 0x00};	/* asc SHINCHANG-HC 0x12 0x34 0x56 */

/* test value */
static	u8 debug_oneshot = OFF;
static	u8 immoAttenLvl_copy = 1;
static	u8 immoGainLvl_copy = 2;
static	u8 read_time = 0;


