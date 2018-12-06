/*******************************************************************************
 * Project      	: 	SP2 IBU
 * File Name    	: 	data.h
 * Compiler		: 	Eclipse
 * Author       	: 	MyoungKwon Choi (mk210@seoyonelec.com)
 * Created at   	: 	2017-06-23 
 * Code Editor	: 	Source Insight (Recomended Font : D2Coding / Size 10)
 * Revision     	: 	Version 0.1
 * Copyright   	: 	(c) Copyright Seoyon Electronisc Co.Ltd. All Rights Reserved       
 * Description  	: 	This is a header file associated with constants & macro.
 *					
 *******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------------------------*/
#ifndef	__DATA_H__
#define	__DATA_H__


/*******************************************************************************
	enum type tVARs
*******************************************************************************/
/*01*/	#define	kLF_Search_None						(u8)0
/*02*/	#define	kLF_Search_FL_Unlock				(u8)1
/*03*/	#define	kLF_Search_FL_Lock					(u8)2
/*04*/	#define	kLF_Search_FL_LockWarning3			(u8)3
/*05*/	#define	kLF_Search_FL_LockWarning2			(u8)4
/*06*/	#define	kLF_Search_FL_LockWarning1			(u8)5
/*07*/	#define	kLF_Search_FR_Unlock				(u8)6
/*08*/	#define	kLF_Search_FR_Lock					(u8)7
/*09*/	#define	kLF_Search_FR_LockWarning3			(u8)8
/*10*/	#define	kLF_Search_FR_LockWarning2			(u8)9
/*11*/	#define	kLF_Search_FR_LockWarning1			(u8)10
/*12*/	#define	kLF_Search_Trunk_Open				(u8)11
/*13*/	#define	kLF_Search_TailGate_Open			(u8)12
/*14*/	#define	kLF_Search_Trunk_Warning			(u8)13
/*15*/	#define	kLF_Search_IDOUT_Warning			(u8)14
/*16*/	#define	kLF_Search_KeyOut_Warning			(u8)15
/*17*/	#define	kLF_Search_Reminder1				(u8)16
/*18*/	#define	kLF_Search_Reminder2				(u8)17
/*19*/	#define	kLF_Search_BatteryDepletion			(u8)18
/*20*/	#define	kLF_Search_Deactivation				(u8)19
/*21*/	#define	kLF_Search_Authentication			(u8)20
/*22*/	#define	kLF_Search_PreAuthentication		(u8)21
/*23*/	#define	kLF_Search_HandsFreeAuth			(u8)22
/*24*/	#define	kLF_Search_HandsFreeRegist			(u8)23
/*25*/	#define	kLF_Search_WelcomeLight				(u8)24
/*26*/	#define	kLF_Search_WelcomeLightShort		(u8)25
/*27*/	#define	kLF_Search_WelcomeLightLong			(u8)26
/*28*/	#define	kLF_Search_WelcomeHandsFree			(u8)27
/*29*/	#define	kLF_Search_Diag_Type2_Interior1		(u8)28
/*30*/	#define	kLF_Search_Diag_Type2_Interior2		(u8)29
/*31*/	#define	kLF_Search_Diag_Type2_Trunk			(u8)30
/*32*/	#define	kLF_Search_Diag_Type2_Bumper		(u8)31
/*33*/	#define	kLF_Search_Diag_Type2_LH_side		(u8)32
/*34*/	#define	kLF_Search_Diag_Type2_RH_side		(u8)33
			
/*35*/	#define	kLF_Search_Diag_Antena				(u8)34
			
/*36*/	#define	kLF_Search_Diag_Type3_Interior1		(u8)35
/*37*/	#define	kLF_Search_Diag_Type3_Interior2		(u8)36
/*38*/	#define	kLF_Search_Diag_Type3_Trunk			(u8)37
/*39*/	#define	kLF_Search_Diag_Type3_Bumper		(u8)38
/*40*/	#define	kLF_Search_Diag_Type3_LH_side		(u8)39
/*41*/	#define	kLF_Search_Diag_Type3_RH_side		(u8)40

typedef enum
{
	kLF_RF_Telegram_Idle = 0,
	kLF_RF_Telegram_ChangeMode,
	kLF_RF_Telegram_LF_start,
	kLF_RF_Telegram_LF_trs,
	kLF_RF_Telegram_Periodic_wait,
	kLF_RF_Telegram_RF_wait,
	kLF_RF_Telegram_NextCheck
} e_LF_RF_Telegram;


typedef enum
{
/*01*/	kLF_SearchMode_None = 0,
/*02*/	kLF_SearchMode_LH_side,
/*03*/	kLF_SearchMode_RH_side,
/*04*/	kLF_SearchMode_Interior,
/*05*/	kLF_SearchMode_Bumper,

/*06*/	kLF_SearchMode_LH_side_NoAuth,
/*07*/	kLF_SearchMode_RH_side_NoAuth,
/*08*/	kLF_SearchMode_Interior_NoAuth,

/*09*/	kLF_SearchMode_Welcome,
/*10*/	kLF_SearchMode_HandsFree,
/*11*/	kLF_SearchMode_WelcomeHandsFree,	/* ���� ��� */

/*12*/	kLF_SearchMode_Diag_Type2_LH_side,
/*13*/	kLF_SearchMode_Diag_Type2_RH_side,
/*14*/	kLF_SearchMode_Diag_Type2_Interior1,
/*15*/	kLF_SearchMode_Diag_Type2_Interior2,
/*16*/	kLF_SearchMode_Diag_Type2_Trunk,
/*17*/	kLF_SearchMode_Diag_Type2_Bumper,

/*18*/	kLF_SearchMode_Diag_Type3_LH_side,
/*19*/	kLF_SearchMode_Diag_Type3_RH_side,
/*20*/	kLF_SearchMode_Diag_Type3_Interior1,
/*21*/	kLF_SearchMode_Diag_Type3_Interior2,
/*22*/	kLF_SearchMode_Diag_Type3_Trunk,
/*23*/	kLF_SearchMode_Diag_Type3_Bumper,

		kLF_SearchMode_Max
} e_LF_SearchMode;


#define kANTENA_P1		0u
#define kANTENA_P3	1u
#define kINTERIOR_ANTENA2	2u
#define kANTENA_P2		3u
#define kANTENA_P4		4u
#define kBUMPER_ANTENA		5u
#define kLH_RH_SIDE_ANTENA	6u
#define kANTENA_INDEX_MAX	7u	/* SCIM 수정 */

#define	kFobPos_None		0u
#define	kFobPos_INTERIOR	1u
#define	kFobPos_LH_SIDE	2u
#define	kFobPos_RH_SIDE	3u
#define	kFobPos_BUMPER	4u
#define	kFobPos_TRUNK		5u

#define	rLH		kANTENA_P1
#define	rINT1	kANTENA_P3
#define	rINT2	kINTERIOR_ANTENA2
#define	rRH		kANTENA_P2
#define	rTRUNK	kANTENA_P4
#define	rBUM	kBUMPER_ANTENA

#define	LF_SEARCHMODE_MAX	(u8)(kLF_SearchMode_Max)* 2u
#define	LF_SEARCHMODE_TYPE	(u8)(kLF_SearchMode_Max)


typedef enum
{
	kDSTProc_Idle = 0,

	/* General Page Read */
	kDSTProc_General_Read_Page2_Downlink,
	kDSTProc_General_Read_Page2_Uplink,

	kDSTProc_General_Read_Page4_Downlink,
	kDSTProc_General_Read_Page4_Uplink,

	kDSTProc_General_Read_Page6_Downlink,	/* Not used */
	kDSTProc_General_Read_Page6_Uplink,	/* Not used */

	kDSTProc_General_Read_Page8_Downlink,
	kDSTProc_General_Read_Page8_Uplink,

	kDSTProc_General_Read_Page10_Downlink,
	kDSTProc_General_Read_Page10_Uplink,

	kDSTProc_General_Read_Page12_Downlink,
	kDSTProc_General_Read_Page12_Uplink,	

	kDSTProc_General_Read_Page14_Downlink,
	kDSTProc_General_Read_Page14_Uplink,

	/* Selected Mode */
	kDSTProc_selected_Program_Downlink,
	kDSTProc_selected_Program_Uplink,

	/* Selected Mode Program */
	kDSTProc_Selected_Program_Page4_Downlink,
	kDSTProc_Selected_Program_Page4_Uplink,
	
	kDSTProc_Selected_Program_Page6_Downlink,
	kDSTProc_Selected_Program_Page6_Uplink,

	kDSTProc_Selected_Program_Page14_Downlink,
	kDSTProc_Selected_Program_Page14_Uplink,

	/* Exit Selected Mode */
	kDSTProc_Exit_selected_Downlink,
	kDSTProc_Exit_selected_Uplink,
	
	/* Authentication */
	kDSTProc_Authenticaion_Encrypt_Key_Program_Downlink,
	kDSTProc_Authenticaion_Encrypt_Key_Program_Uplink,
	kDSTProc_Authenticaion_Encrypt_Downlink,
	kDSTProc_Authenticaion_Encrypt_Uplink	
} e_DSTProcess;


/* S_TPDemodulatorReq */
#define TPSearch_None		0u	/* 0 */
#define TPSearch_Req		1u	/* 1 */
#define TPRegist_Req		2u	/* 2 */
#define TPCurrent_Req		3u	/* 3 */
#define TPReadFob_Req		4u	/* 4 */

#define kPEPS_ANT_OPEN_CHECK 	0x01u
#define kIMMO_ANT_OPEN_CHECK 	0x02u


#define kSUB_Comm_OK		0u
#define kSUB_Comm_NG		1u
#define kSUB_Comm_Trs		2u
#define kSUB_Comm_Timeout	3u
#define kSUB_Comm_DTC_Clear	4u


#define		DiagFlasher 					0x1u
#define		DisarmFlasher 					0x2u
#define		RemoteWindowLockFlasher  		0x3u
#define		ArmFlasher 						0x4u
#define		BASnsrErrorFlasher  			0x5u
#define		BAlarmFlasher 					0x6u
#define		PanicFlasher 					0x7u
#define		RrSeatRemindFlasher 			0x8u
#define		MTSFlasher 						0x9u
#define		HazardFaultFlasher 				0xAu
#define		HazardNormalFlasher 			0xBu
#define		ESSFlasher 						0xCu
#define		TurnRightFaultFlasher 			0xDu
#define		TurnLeftFaultFlasher 			0xEu
#define		TurnLeftNormalFlasher 			0xFu
#define		TurnRightNormalFlasher 			0x10u
#define		KeyTeachingFlasher 				0x11u
#define		TGateOpenFlasher 				0x12u
#define		TrunkOpenFlasher  				0x13u
#define		TrunkCloseFlasher  				0x14u
#define		TwoTurnSetFlasher  				0x15u
#define		CrashUnlockFlasher  			0x16u
#define		RemoteWindowFlasher  			0x17u
#define		RemoteStartFlasher 	 			0x18u
#define		SMKSingleHazard  				0x19u
#define		SMKDoubleHazard  				0x1Au
#define		RrSeatRemindSnsrErrorFlasher  	0x1Bu


#define	kHorn_Nothing 				0x0u
#define	DisarmHorn  				0x1u
#define	RemoteWindowHorn  			0x2u
#define	ArmHorn  					0x3u
#define	HornAnsBack  				0x4u
#define	BASnsrErrorHorn  			0x5u
#define	BAlarmHorn  				0x6u
#define	PanicHorn 					0x7u
#define	RrSeatRemindHorn  			0x8u
#define	MTSHorn  					0x9u
#define	RrSeatRemindSnsrErrorHorn  	0xAu


/* e_FlasherHighReq */
#define	High_Off 		0x0u
#define	High_On 		0x1u
#define	High_Inactive 	0x2u

/* e_FlasherLowReq */
#define	Low_Off 		0x0u
#define	Low_On 			0x1u
#define Low_Inactive 	0x2u

/* C_BCMFobID */
#define	ID_None  	0x0u
#define	ID_1  		0x1u
#define	ID_2 		0x2u
#define	ID_3 		0x3u
#define	ID_4 		0x4u


/* C_SMKRKEPSD */
#define	SMKPSD_Off  			0u
#define	SMKPSD_LH_On  			1u
#define	SMKPSD_RH_On  			2u
#define	SMKPanicStop_PSD_LH  	3u
#define	SMKPanicStop_PSD_RH  	4u

#define	RKEPSD_Off  			0u
#define	RKEPSD_LH_On  			1u
#define	RKEPSD_RH_On  			2u
#define	RKEPanicStop_PSD_LH  	3u
#define	RKEPanicStop_PSD_RH  	4u

#define	RearWiper_Default  	0x0u
#define	RearWiper_Off  		0x1u
#define	RearWiper_On  		0x2u
#define	RearWiper_Invalid  	0x3u

#define	Light_Sw_Off  				0x0u
#define	Tail_Sw_On  				0x1u
#define	HeadLamp_Low_Sw_On  		0x2u
#define	AutoLightSw_On_Or_DRLSw_On  0x3u


#define	kLight_Off 				0x0u
#define	kLight_Tail  			0x1u
#define	kLight_HeadLow 			0x2u
#define	kLight_Auto 			0x3u
#define	kLight_GNDShort 		0x4u
#define	kLight_Invalid 			0x7u

#define	kHLight_Off 			0x0u
#define	kHLight_HeadHigh 		0x1u
#define	kHLight_Passing 		0x2u
#define	kHLight_GNDshort 		0x3u
#define	kHLight_Invalid 		0x7u

#define	kFogSW_Off 				0x0u
#define	kFogSW_FrtOn  			0x1u
#define	kFogSW_RearOn  			0x2u
#define	kFogSW_GNDShort  		0x3u
#define	kFogSW_Invalid 			0x7u

#define	Wiper_Sw_Off  			0x0u
#define	WiperInt_Or_AutoSwOn  	0x1u
#define	Wiper_Low_Sw_On 		0x2u
#define	Wiper_High_Sw_On  		0x3u

#define	kWiper_Off  		0x0u
#define	kWiper_MIST  		0x1u
#define	kWiper_Low  		0x2u
#define	kWiper_High  		0x3u
#define	kWiper_INT  		0x4u
#define	kWiper_GNDShort  	0x5u
#define	kWiper_Invalid  	0x7u

#define	RearWiper_SwOff  	0x0u
#define	RearrWiper_LowSwOn  0x1u
#define	RearWiper_HighSwOn  0x2u
#define	RearWiper_Reserved  0x3u

#define	kRWiper_Off  		0x0u
#define	kRWiper_INT  		0x1u
#define	kRWiper_High 		0x2u
#define	kRWiper_GNDShort  	0x3u
#define	kRWiper_Invalid  	0x7u


/* PAS Sound Volume Level	*/
/* C_PasSpkrLvNValueSet, C_PasSpkrLvRValue	*/
#define	SpkrLv_Default  	0x0u
#define	SpkrLv_Level1  		0x1u
#define	SpkrLv_Level2  		0x2u
#define	SpkrLv_Level3  		0x3u
#define	SpkrLv_Reserved4  	0x4u
#define	SpkrLv_Reserved5  	0x5u
#define	SpkrLv_Reserved6  	0x6u
#define	SpkrLv_Invalid  	0x7u

/* This signal is used for a request to reset the value of USM menus */
/* C_USMReset	*/
#define	USM_Default 		0x0u
#define	USM_Reset  			0x1u

/* Flag for PAS Level change Display */
/* C_PASDisplayFCTR, C_PASDisplayFLH, C_PASDisplayFRH, C_PASDisplayRCTR, C_PASDisplayRLH, C_PASDisplayRRH */
#define	PASDisplay_Off  		0x0u
#define	PASDisplay_FstWarning  	0x1u
#define	PASDisplay_SndWarning  	0x2u
#define	PASDisplay_TrdWarning  	0x3u
#define	PASDisplay_Fault  		0x4u		/* Error -> Fault	*/

/* Pas Warning Sound for AMP Speaker output */
/* C_PasSpkrFCNTAlarm, C_PasSpkrFLHAlarm, C_PasSpkrFRHAlarm, C_PasSpkrRCNTAlarm, C_PasSpkrRLHAlarm, C_PasSpkrRRHAlarm */
/* PAS_FC_Alarm_Cmd */
#define	PasSpkr_Off  			0x0u
#define	PasSpkr_FstWarning 		0x1u
#define	PasSpkr_SndWarning  	0x2u
#define	PasSpkr_TrdWarning  	0x3u
#define	PasSpkr_Fault  			0x4u			/* Add	*/

/* PASFsound  */
#define	PASFsound_Warning_Off  	0x0u
#define	PASFsound_FstWarning  	0x1u
#define	PASFsound_SndWarning  	0x2u
#define	PASFsound_TrdWarning  	0x3u

/* PAS_Diag  */
#define	PAS_Diag_Off  			0x0u
#define	PAS_Diag_FstWarning  	0x1u
#define	PAS_Diag_SndWarning  	0x2u
#define	PAS_Diag_TrdWarning  	0x3u
#define	PAS_Diag_Fault  		0x4u
#define	PAS_Diag_Bus_Off  		0x5u

/* e_PAS_DiagMSG */
#define PAS_DiagMSG_OFF  						0u
#define	PAS_DiagMSG_READ_DTC        			1u
#define	PAS_DiagMSG_SEND_DIAG_FRAME 			2u 
#define	PAS_DiagMSG_SEND_UNCONDITION_FRAME 		3u
#define	PAS_DiagMSG_EEPROM_READ 				4u
#define	PAS_DiagMSG_EEPROM_WRITE 				5u

/* Parking Assistant System Warning Buzzer Command (To CLU) */
/* C_PASRsound, CF_Gway_PASRsound, CF_Gway_PASFsound */
#define	PASsound_Off  			0x0u
#define	PASsound_FstWarning  	0x1u
#define	PASsound_SndWarning  	0x2u
#define	PASsound_TrdWarning  	0x3u

/* Parking Assistant System Fault / Start Beep (To CLU) */
/* C_PASCheckSound, CF_Gway_PASCheckSound */
#define	PASChksound_Off  		0x0u
#define	PASChksound_R_Confirm  	0x1u
#define	PASChksound_Error  		0x2u
#define	PASChksound_Reserved  	0x3u

/* PAS/RPAS Option Information */
/* CF_Gway_PASOption */
#define	PASOption_Default  		0x0u			/* Non -> Default	*/
/* #define	PASOption_RPAS  		0x1u */
/* #define	PASOption_PAS  		0x2u */
/* #define	PASOption_reserved  	0x3u */     /* (C_PASOption) */

/* PAS System Display On Command (To CLU) */
/* CF_Gway_PASSystemOn */
#define	PASSystem_OFF  			0x0u
#define	PASSystem_ON  			0x1u
#define	PASSystem_reserved2  	0x2u
#define	PASSystem_reserved3  	0x3u

/* Sensor Data	*/
/* FCLSnsrData, FCRSnsrData, FLSnsrData, FRSnsrData */
/* RCLSnsrData, RCRSnsrData, RLSnsrData, RRSnsrData */
/* FCSnsrStatus, FLSnsrStatus, FRSnsrStatus, FrontSnsrFaultStatus */
/* RCSnsrStatus, RLSnsrStatus, RRSnsrStatus, RearSnsrFaultStatus */
#define	Sensor_OFF  			0x0u
#define	Sensor_FstWarning  		0x1u
#define	Sensor_SndWarning 		0x2u
#define	Sensor_TrdWarning 		0x3u
#define	Sensor_Fault 			0x4u

/* FCSnsrStatus, FLSnsrStatus, FRSnsrStatus, FrontSnsrFaultStatus */
/* RCSnsrStatus, RLSnsrStatus, RRSnsrStatus, RearSnsrFaultStatus */
#define	SnsrSts_OFF 			0x0u
#define	SnsrSts_FstWarning 		0x1u
#define	SnsrSts_SndWarning 		0x2u
#define	SnsrSts_TrdWarning 		0x3u
#define	SnsrSts_Fault 			0x4u
#define	SnsrSts_Normal 			0x5u

/* b_VoltageRecoveryFlag	*/

#define	VolFlag_Clear 			0u
#define	VolFlag_Set				1u

#define FL_SENSOR				0u
#define FCL_SENSOR				1u
#define FCR_SENSOR				2u
#define FR_SENSOR				3u
#define RL_SENSOR				4u
#define RCL_SENSOR				5u
#define RCR_SENSOR				6u
#define RR_SENSOR				7u

enum e_FDList
{
	kO_SSB_Illumi_Power=0,
	kO_SSB_Illumi_GND_PWM,
	kO_SSB_LED_Amber,
	kO_SSB_LED_Blue,
	kO_SSB_LED_White,
	kO_ESCL_Enable,
	kO_ESCL_BAT_Rly,
	kO_ESCL_GND_Rly,
	kO_IGN1_Rly,
	kO_IGN2_Rly,
	kO_ACC_Rly,
	kO_STARTER_Rly,
	kO_ExternalBuzzer_PWM,
	kC_KeyOUTLamp,
	kMaxFDList
};


enum e_BCMForceIOList
{
	SecurityLED_OUT = 0,
	RPASBuzzer_OUT,
	RPASSWIND_OUT,
	PASSWIND_OUT,
	WiperLowRLY_OUT,
	WiperHighRLY_OUT,
	RearWiperRLY_OUT,
	AutoLightPWR_OUT,
	KeyInterLockSol_OUT,
	ATMSol_OUT,
	ASTSBIND_OUT,
	RRSBRLeftIND_OUT,
	RRSBRCTRIND_OUT,
	RRSBRRightIND_OUT,
	BCMIntBuzz_OUT,
	KeyHoleIll_OUT,
	StartInhRLY_OUT,
	MirrorFold_OUT,
	MirrorUnfold_OUT,
	HeatedWasherNozzle_OUT,
	EMSEcuWakeUp_OUT,
	MaxBCMForceIO
};

typedef struct
{
	u32 OutTimer;
	u8 Status;
	u8 Index;
	u8 OutID;
} Diag_IOCBI;

/*******************************************************************************
	Define DST Process Step 
*******************************************************************************/
#define kDST_General_Read_Page2				0x01
#define kDST_General_Read_Page4				0x02
#define kDST_General_Read_Page6				0x03
#define kDST_General_Read_Page8				0x0B
#define kDST_General_Read_Page10				0x0C
#define kDST_General_Read_Page12				0x0D
#define kDST_General_Read_Page14				0x10
#define kDST_General_Program_Page2			0x04
#define kDST_Selected_Program				0x0E
#define kDST_Selected_Program_Page4			0x05
#define kDST_Selected_Program_Page6			0x06
#define kDST_Selected_Program_Page14			0x11
#define kDST_Exit_Program					0x0F
#define kDST_AES_Encryption_Read			0x07
#define kDST_AES_Encryption_Program			0x08
#define kDST_AES_Encryption_Page_Lock		0x09
#define kDST_Page6_Lock						0x0A

/* Teaching Sensor FaultCnt	*/

#define	SnsrFault_Clear				0u
#define	SnsrFault_Set				1u

#define	kPAS_Initflg				0u
#define	kPAS_INITIAL_Operate		1u
#define	kPAS_INITIAL_Done			2u

#define	TempSection_INIT			0u
#define	TempSection_1				1u
#define	TempSection_2				2u
#define	TempSection_3				3u
#define	TempSection_4				4u


#define ID_MASTER_COMMAND									0x08u
#define ID_TEACH											0x3Cu
#define ID_RL_Snsr_STATUS									0x00u
#define ID_RCL_Snsr_STATUS									0x01u
#define ID_RCR_Snsr_STATUS									0x02u
#define ID_RR_Snsr_STATUS									0x03u
#define ID_FL_Snsr_STATUS									0x04u
#define ID_FCL_Snsr_STATUS									0x05u
#define ID_FCR_Snsr_STATUS									0x06u
#define ID_FR_Snsr_STATUS									0x07u
#define ID_Requst_None										0xffu
#define ID_DIAG_Rcv											0x3Du

#define	Pas_LinSch_NULL								0u
#define	Pas_LinSch_Snsr_8_RINGTIME					1u
#define	Pas_LinSch_Snsr_4_RINGTIME					2u
#define	Pas_LinSch_Snsr_3_RINGTIME					3u
#define	Pas_LinSch_Snsr_2_RINGTIME					4u
#define	Pas_LinSch_Snsr_8_Teaching_SESSION			5u
#define	Pas_LinSch_Snsr_4_3_Teaching_SESSION		6u
#define	Pas_LinSch_Snsr_2_Teaching_SESSION			7u
#define	Pas_LinSch_Snsr_8_CRC_CHECK					8u
#define	Pas_LinSch_Snsr_4_CRC_CHECK					9u
#define	Pas_LinSch_Snsr_3_CRC_CHECK					10u
#define	Pas_LinSch_Snsr_2_CRC_CHECK					11u
#define	Pas_LinSch_Snsr_8_INITIAL					12u
#define	Pas_LinSch_Snsr_4_INITIAL					13u
#define	Pas_LinSch_Snsr_3_INITIAL					14u
#define	Pas_LinSch_Snsr_2_INITIAL					15u
#define	Pas_LinSch_Snsr_8_TEMP_COMPENSATE			16u
#define	Pas_LinSch_Snsr_4_3_TEMP_COMPENSATE			17u
#define	Pas_LinSch_Snsr_2_TEMP_COMPENSATE			18u
#define	Pas_LinSch_FR_4_NORMAL						19u
#define	Pas_LinSch_FR_2_RR_4_NORMAL					20u
#define	Pas_LinSch_RR_4_NORMAL						21u
#define	Pas_LinSch_RR_3_NORMAL						22u
#define	Pas_LinSch_RR_2_NORMAL						23u
#define	Pas_LinSch_ALL_SENSOR_RESET					24u
#define	Pas_LinSch_PAS_PASS_THROUGH_DIAG			25u
#define	Pas_LinSch_PAS_PASS_THROUGH_MASTER_CMD		26u
#define	Pas_LinSch_PAS_PASS_RL_SENSOR				27u
#define	Pas_LinSch_PAS_PASS_RCL_SENSOR				28u
#define	Pas_LinSch_PAS_PASS_RCR_SENSOR				29u
#define	Pas_LinSch_PAS_PASS_RR_SENSOR				30u
#define	Pas_LinSch_PAS_PASS_FL_SENSOR				31u
#define	Pas_LinSch_PAS_PASS_FCL_SENSOR				32u
#define	Pas_LinSch_PAS_PASS_FCR_SENSOR				33u
#define	Pas_LinSch_PAS_PASS_FR_SENSOR				34u


#define	kPAS_ALL  		40u

#define	kPasNone  		0x0u
#define	kPasPending 	0x1u
#define	kPasPositive 	0x2u
#define	kCancle			0x3u

#define	Option_PasDisable  							0x0u
#define	Option_PAS8_Enable 							0x1u
#define	Option_RPAS4_Enable 						0x2u
#define	Option_RPAS3_Enable 						0x3u
#define	Option_RPAS2_Enable 						0x4u

#define	PAS_NO_COM									(0u)
#define	PAS_FULL_COM								(2u)

#define	Pas_Off										(0u)
#define	Pas_On										(1u)
#define	Pas_Operating								(2u)
#define PASDiagSensorResponseMaxLength      		(9u)

/* CF_Clu_VehicleSpeed, 0~254: Speed / 255: Error 	*/
#define	VehicleSpeed_Error				255U

/*******************************************************************************
	Define tVARs
*******************************************************************************/
/* BCM */

#define	Option_Enable	0x01u
#define	Option_Disable	0x00u
#define Option_Invalid	0x02u


/* RainSensor Type */
#define	HELLA		0x00U
#define TRW			0x01U
#define NotSnsr		0x02U


#define	type1 	0x01U
#define	type2 	0x02U
#define	type3	0x03U
#define	type4	0x04U	
#define	type5	0x05U
#define	type6	0x06U
#define	type7	0x07U
#define	type8	0x08U
#define	type9	0x09U


#define kUnbelt	0x00u
#define	kBelt	0x01u

/* Body Type */
#define	Type_4DR	0u
#define	Type_5DR	1u
#define	Type_2DR	2u


/* Wiper Parking State */
#define 	Not_Parking		(0U)
#define		Parking			(1U)


/*m_DoorAssembled Invalid */
#define	kDoorAssem_Invalid 			0x3U


/* GearPState */
#define GearPState_OFF   	0x0u
#define GearPState_ON    	0x1u
#define GearPState_None		0x2u

/* Tailgate Open Diag Set Control  */
#define	Normal_Mode		(0U)
#define	Inhibit_Mode	(1U)


/* LIN Input_SignalErr */
#define	Allright			(u8)0x00U
#define	Defective			(u8)0x01U
#define SignalErrReserved	(u8)0x02U
#define SignalErrInvalid	(u8)0x03U


/* LIN Input_DetachentErr */
#define	NoError						(u8)0x00U
#define	Error_Active				(u8)0x01U
#define	DetachentErrReserved		(u8)0x02U
#define	DetachmentErrorInvalid 		(u8)0x03U


/* LIN Input_RainSnsrInput */
#define	b_Off			(u8)0x00
#define b_Low			(u8)0x01
#define b_High			(u8)0x0E
#define b_RainInvalid	(u8)0x0F


/* HeadlampLowReq */
#define	ReqOff		(u8)0x00
#define	ReqLow		(u8)0x01
#define	ReqPassing	(u8)0x02
#define	ReqHigh		(u8)0x03


/* b_BulbTypeOpt */
#define	Bulb4	(u8)0x01
#define	Bulb2	(u8)0x02	


/* Escort Value */
#define	Default_Value	(u8)0x00
#define Escort_Off		(u8)0x01
#define Escort_On		(u8)0x02
#define Escort_Invalid	(u8)0x03


/* HeadHighHBACmd */
#define	HBA_SYS_OFF		(u8)0x00
#define	HBA_READY		(u8)0x01
#define	HBA_Normal_OFF	(u8)0x02
#define	HBA_Normal_ON	(u8)0x03


/* HeadHighADBCmd */
#define ADB_SYS_OFF		(u8)0x00
#define ADB_READY		(u8)0x01
#define ADB_Normal_OFF	(u8)0x02
#define ADB_Normal_ON	(u8)0x03


/* SBR_RL_Classification */
#define	IGN1Confirm_OFF		0x00u
#define	IND_Off_Belt		0x01u
#define	IND_Off_Unbelt		0x02u
#define	IND_On_6sec			0x03u
#define	IND_PATTERN_35sec	0x04u
#define	Warning_On			0x05u

/* OSFoldingUnfoldingCmd */


/* S_TPDemodulatorResp */
#define TPSearchProgress	0u	/* 0 */
#define NoTPfound			1u	/* 1 */
#define VirginTPfound		2u	/* 2 */
#define InvalidTPfound		3u	/* 3 */
#define ValidTPfound		4u	/* 4 */
#define ReadTPfound			5u	/* 5 */
#define ReadNoTPfound		6u	/* 6 */


/* S_SMKToEMS */
/* NoAnswer */			/* 0 */
#define PositiveAnswer	1u	/* 1 */
#define NegativeAnswer	2u	/* 2 */
#define Searching		3u	/* 3 */


/* S_EMSToSMK */
/* NoRequest */					/* 0 */
#define AuthenticationRequest	1u	/* 1 */


/* ESCL Status */
#define EsclComm_NoRequest						0x00u
#define	EsclComm_StatusRequest					0x31u
#define	EsclComm_StatusResponse					0xB1u
#define	EsclComm_UnlockRequest					0x11u
#define	EsclComm_UnlockResponse					0x91u
#define	EsclComm_VirginUnlockRequest			0x15u
#define	EsclComm_VirginUnlockResponse			0x95u
#define	EsclComm_LockRequest					0x23u
#define	EsclComm_LockResponse					0xA3u
#define	EsclComm_WriteISKCommandToESCL			0x19u
#define	EsclComm_WriteISKResponse				0x99u
#define	EsclComm_ReadDataBlockRequest			0x41u
#define	EsclComm_ReadDataBlockResponse			0xC1u
#define	EsclComm_NeutralizationRequest			0x4Au
#define	EsclComm_NeutralizationResponse			0xCAu
#define	EsclComm_VirginUnlockRequest_ISK_Clr	0x17u
#define	EsclComm_VirginRequest_Diag				0x77u
#define	EsclComm_VirginResponse_Diag			0xF7u


/* S_ESCLCommResp */
/* NoAnswer */					/* 0x0 */
#define	StatusResponse				0x1u
#define	UnlockResponse				0x2u
#define	VirginUnlockResponse		0x3u
#define	LockResponse				0x4u
#define	WriteISKResponse			0x5u
#define	ReadDataBlockResponse		0x6u
#define	NeutralizationResponse		0x7u
#define VirginResponse				0x8u

/* FobID */
#define Par_FobNone	0u	/* 0 */
#define Par_Fob1	1u	/* 1 */
#define Par_Fob2	2u	/* 2 */
#define Par_Fob3	3u	/* 3 */
#define Par_Fob4	4u	/* 4 */


/* Fobsearch */
#define FobSearch_Progress	0u	/* 0 */
#define FobSearch_LF_Sent	1u	/* 1 */
#define FobSearch_Found		2u	/* 2 */
#define FobSearch_NoFound	3u	/* 3 */


/* LFSentBuffer */
#define LFSent_None		0u	/* 0 */
#define WelcomeLight	1u	/* 1 */
#define HandFreeTrunk	2u	/* 2 */


/* m_ABSStatus */
#define NonABS	0u	/* 0 */
#define ABS		1u	/* 1 */


/* RKECMD */
#define RKE_None					0x0u	/* 0x0 */
#define RKE_Lock					0x1u	/* 0x1 */
#define RKE_Unlock					0x2u	/* 0x2 */
#define RKE_Trunk					0x3u	/* 0x3 */
#define RKE_Panic					0x4u	/* 0x4 */
#define RKE_PanicStop				0x5u	/* 0x5 */
#define RKE_TwoStepUnlock			0x6u	/* 0x6 */
#define RKE_TeleCrankingStop		0x7u	/* 0x7 */
#define RKE_TeleCrankingStart		0x8u	/* 0x8 */
#define RSPAForward					0x9u	/* 0x9 */
#define RSPABackward				0xAu	/* 0xA */
#define RSPAPause					0xBu	/* 0xB */
#define WdwDown						0x10u	/* Remote Window Open */
#define WdwUp						0x20u	/* Remote Window Close */
#define WdwStop						0x30u	/* Remote Window Stop */

#define RKE_PanicStopPSDLH			0x80u	/* �ӽ� */
#define RKE_PanicStopPSDRH			0x81u	/* �ӽ� */

/* Redefine */
#define RKE_Tailgate				RKE_Trunk
#define RKE_PanicStop1				RKE_PanicStop
#define RKE_PanicStop2				RKE_PanicStop
#define TeleCrankingStop			RKE_TeleCrankingStop
#define TeleCrankingStart			RKE_TeleCrankingStart
#define RKE_LockUnlock				RKE_TwoStepUnlock
#define RSPAFowardControl			RSPAForward
#define RSPABackwardControl			RSPABackward
#define RSPAPauseControl			RSPAPause
#define	SMKRKE_None					RKE_None
#define SMKRKE_Lock					RKE_Lock
#define SMKRKE_Unlock				RKE_Unlock
#define	SMKRKE_Trunk				RKE_Trunk
#define	SMKRKE_Panic				RKE_Panic
#define	SMKRKE_PanicStop			RKE_PanicStop
#define	SMKRKE_TwoTurnSetFlasher	RKE_TwoStepUnlock
/* Redefine */


/* RSPACranking */
/* Stub signal CF_Gway_RSPA_CrankingReq
�ӽ� ���� ��, Ȯ�� �� �����ʿ� by CMK */
/* None */					/* 0 */
#define RSPACranking	1u	/* 1 */


/* SMK_SideCMD */
/* Nothing */			/* 0 */
#define Par_AST		1u	/* 1 */
#define Par_TAIL	2u	/* 2 */


/* SMKState */
#define	Memory_None		(u8)'0'
#define	Virgin			0xffu
#define	Learnt			0x55u
#define	Neutralized		0xAAu
#define	Deact			0x5Au


/* TeleCrankingCommand */
#define Tele_Cmd_Default	0u	/* 0 */
#define Tele_Cmd_Cranking	1u	/* 1 */
#define Tele_Cmd_Stop		2u	/* 2 */
#define Tele_Cmd_ErrorValue	3u	/* 3 */
	

/* TerminalsManagerState */
#define TMS_OFF								0u	/* 0 */
#define TMS_OFF_TO_START					1u	/* 1 */
#define TMS_WAIT_ESCL_UNLOCK_ACC			2u	/* 2 */
#define TMS_ACC								3u	/* 3 */
#define TMS_ACC_SEARCH						4u	/* 4 */
#define TMS_ACC_TO_START					5u	/* 5 */
#define TMS_IGN								6u	/* 6 */
#define TMS_IGN_SEARCH						7u	/* 7 */
#define TMS_WAIT_ESCL_UNLOCK_OFF_TO_START	8u	/* 8 */
#define TMS_WAIT_ESCL_UNLOCK_START			9u	/* 9 */
#define TMS_WAIT_IGN1_ACC					10u	/* 10 */
#define TMS_WAIT_IGN1_ACC_SEARCH			11u	/* 11 */
#define TMS_WAIT_IGN1_ACC_TO_START			12u	/* 12 */
#define TMS_WAIT_IGN1_UNLOCK_OFF_TO_START	13u	/* 13 */
#define TMS_WAIT_IGN1_UNLOCK_START			14u	/* 14 */
#define TMS_START							15u	/* 15 */
#define TMS_ENGINE_RUNNING					16u	/* 16 */
#define TMS_IGN_TO_START					17u	/* 17 */


/* TerminalControlState */
#define TCS_OFF		0u	/* 0 */
#define TCS_ACC		1u	/* 1 */
#define TCS_IGN		2u	/* 2 */
#define TCS_START	3u	/* 3 */


/* WelcomeLightAuthenticationSide */
/* Nothing */		/* 0 */
#define LEFT	1u	/* 1 */
#define RIGHT	2u	/* 2 */


/* m_TransmissionSetState */
#define MT	0x0u
#define AT	0x1u	


/* PASSIVE part */
#define	kComm_SMK_Mode_Req				0x20
#define	kComm_SRX_Mode_Res				0xA0

/* Fail-Safe part */
#define	kComm_SMK_Manager_Req			0x30
#define	kComm_SUB_Manager_Res			0xB0

/* Display part */
#define	kComm_SMK_VehicleStatus_Req		0x51
#define	kComm_TRX_VehicleStatus_Res		0xD1

/* Power Manager part */
#define	kComm_SMK_Sleep_Req				0x60
#define	kComm_SUB_Sleep_Res				0xE0
#define	kComm_SMK_Wakeup_Req			0x61
#define	kComm_SUB_Wakeup_Res			0xE1

/* AutoLight */
#define AutoLight_Ready			2u

/* HBA Option */
#define IFS			1u
#define HBA			2u


#define	 WarningOff		0U
#define	 BuzzerHold		1U
#define	 Warning1st		2U
#define	 Warning2nd		3U
#define	 Warning3rd		4U
#define	 PreWarning		5U

/* C_SeatBeltWngBuz */
#define  SB_WarningOff		0U
#define  SB_BuzzerHold		1U
#define  SB_BuzzerOn		2U
#define  SB_Reserved		3U

/*******************************************************************************
	CAN TX Define tVARs
*******************************************************************************/
/* C_DedicatedDRLOnLR */
#define LHOffRHOff		(u8)0x00
#define LHOnRHOn		(u8)0x01
#define LHOnRHOff		(u8)0x02
#define LHOffRHOn		(u8)0x03


/* C_IGNSw  */
#define	KeyOff				0U
#define KeyIn				1U
#define ACC					2U
#define IGN					3U
#define ST					4U


/* C_AstSeatBeltIND */
#define	IND_OFF			0x00U
#define	IND_Blinking	0x01U
#define	IND_On			0x02U


/* C_BCMDiagState */
#define	Stop_Diag		0U
#define	Start_Diag		1U


/* C_BCMWarning */
#define	Warning_Off				0U
#define	PoweroffRequestWarning	1U
#define	ShiftPrequestWarning	2U
#define	Warning_Reserved		3U


/* C_HAnBRValue */
#define	HAnBR_Default			0U
#define	HAnBR_Off				1U
#define	HAnBR_On				2U
#define	HAnBR_Invalid			3U


/* C_LightSwState */
#define	LightSwOff				0U
#define	TailSwOn				1U
#define	HeadLampLowSwOn			2U
#define AutoLightSwOn			3U


/* C_PASCheckSound */
#define	Sound_Off				0U
#define	R_Confirm				1U
#define	Sound_Error				2U
#define	Sound_Reserved			3U


/* C_PASDisplayFCTR */
#define	PasDisplay_Off			0U
#define	PasDisplay_1stwarning	1U
#define	PasDisplay_2stwarning	2U
#define	PasDisplay_3stwarning	3U
#define	PasDisplay_Error		4U


/* C_PASOption */
#define	PASOption_Off			0U
#define PASOption_RPAS			1U
#define	PASOption_PAS			2U
#define	PASOption_reserved		3U

/* C_PASRsound */
#define	PASRsound_Off			0U
#define PASRsound_1stWarning	1U
#define PASRsound_2stWarning	2U
#define PASRsound_3stWarning	3U


/* C_PasSpkrFCNTAlarm */
#define	PasAlarm_Off			0U
#define	PasAlarm_1stwarning		1U
#define	PasAlarm_2stwarning		2U
#define	PasAlarm_3stwarning		3U


/* C_PasSpkrLvRValue */
#define	PasPpkrLv_Default		0U
#define	PasPpkrLv_Level1		1U
#define	PasPpkrLv_Level2		2U
#define	PasPpkrLv_Level3		3U
#define	PasPpkrLv_Invalid		7U


/* C_RainSnsState */
#define	RainSns_Off				0U
#define	RainSns_RainDetected	1U
#define	RainSns_Low				2U
#define	RainSns_High			3U
#define	RainSns_Fault1			4U
#define	RainSns_Fault2			5U
#define	RainSns_Fault3			6U
#define	RainSns_Reserved		7U


/* C_RrWiperSwState */
#define	RearWiperSwOff			0U
#define RearWiperLowSwOn		1U
#define RearWiperHightSwOn		2U
#define	RearWiperReserved		3U


/* Smart Welcome Default Option */
#define	SmartWelcome_Default			(u8)0
#define	SmartWelcome_Off				(u8)1			
#define	SmartWelcome_On					(u8)2
#define	SmartWelcome_Invalid_Off		(u8)3
#define	SmartWelcome_Invalid_On			(u8)4

/* C_SmartWelcomeRValueSet */
#define	SmartWelcomeR_Default	0U
#define SmartWelcomeR_Off		1U
#define	SmartWelcomeR_On		2U
#define	SmartWelcomeR_Invalid	3U

/* C_SmartWelcomeNValueSet */
#define	SmartWelcomeN_Default	0U
#define SmartWelcomeN_Off		1U
#define	SmartWelcomeN_On		2U
#define	SmartWelcomeN_Invalid	3U


/* C_WelcomeSysTitleOption */
#define	SysTitle_Default		0U
#define	Welcome_Mirror_Light	1U
#define	Welcome_Mirror			2U
#define	Welcome_Light			3U


/* C_WiperIntT */
#define	STEP1					0U
#define	STEP2					1U
#define	STEP3					2U
#define	STEP4					3U
#define	STEP5					4U
#define INT_GNDShort			5U
#define INT_BatShort			6U
#define INT_Invalid				7U


/* LIN Sensitivity TRW */
#define HighSens				0x05u
#define MidHighSens				0x04u
#define MidSens					0x03u
#define MidLowSens				0x02u
#define LowSens					0x01u


/* C_WiperSwState */
#define	WiperSwOff				0U
#define	WiperIntorAutoSwOn		1U
#define	WiperLowSwOn			2U
#define	WiperHightSwOn			3U


/* C_WngBuz */
#define	WngBuzOff				0U
#define	SeatBeltWarning			1U
#define	KeyOperatedWarning		2U 
#define	ParkingBrakeWarning		3U
#define	SunRoofOpenWarning		4U
#define	KeyLearningSound		5U
#define	ICEWarning				6U
#define	RearFogWarning			7Y


/* C_UnlockWelcomeRValue */
#define	UnlockWelcome_Default	0U
#define	UnlockWelcome_Off		1U
#define	UnlockWelcome_On		2U
#define	UnlockWelcome_Invalid	3U


/* C_UnlockWelcomeNValueSet */
#define	UnlockWelcomeN_Default		0U
#define	UnlockWelcomeN_Off			1U
#define	UnlockWelcomeN_On			2U
#define	UnlockWelcomeN_Invalid		3U


/* Output_ChirpSound  */
#define	ChirpSound_None				0U
#define ChirpSound_Lock				1U
#define	ChirpSound_Unlock			2U


/* Stub_Wcs_ClassStat */
#define	Emptyorsmall_occupantwithCRS	0x01U
#define	Occupied_with_large_occupant	0x02U
#define	Indeterminate					0x04U


/* AST_SeatedBelted_State */
#define	BeforeDecision	0x00U
#define	UnseatBelt		0x01U
#define	UnseatUnbelt	0x02U
#define	SeatUnbelt		0x03U
#define	SeatBelt		0x04U
#define	BeltedStateNone	0x05U


/* BAlarmState */
#define BALarm_Off		0x0u	/* 0x0 */
#define DISARM			0x1u	/* 0x1 */
#define ARM				0x2u	/* 0x2 */
#define PREARM			0x3u	/* 0x3 */
#define ARMWAIT			0x4u	/* 0x4 */
#define ARMHOLD			0x5u	/* 0x5 */
#define REARM			0x6u	/* 0x6 */
#define AUTOLOCKTIMER1	0x7u	/* 0x7 */
#define AUTOLOCKTIMER2	0x8u	/* 0x8 */
#define ALARM			0x9u	/* 0x9 */
#define DEFAULT			0xAu	/* 0xA */
#define AUTOLOCKTIMER3	0xBu	/* 0xB */


/* CountryCfg */
#define DOM		0x0u	/* 0x0 */
#define NA		0x1u	/* 0x1 */
#define EU		0x2u	/* 0x2 */
#define AUS		0x3u	/* 0x3 */
#define CHINA	0x4u	/* 0x4 */
#define GEN_MES	0x5u	/* 0x5 */
#define INDIA	0x6u	/* 0x6 */


/* C_AuthState(AuthState_IBU) */
#define NoAuth				0x0u	/* 0x0 */
#define Preauthentication	0x1u	/* 0x1 */
#define Authentication		0x2u	/* 0x2 */
#define FastRestart			0x3u	/* 0x3 */


/* C_EsclBoltStatus(BoltStatus) */
#define Bolt_Intermediate	0x0u	/* 0x0 */
#define Bolt_Lock			0x1u	/* 0x1 */
#define Bolt_Unlock			0x2u	/* 0x2 */
#define Bolt_Failure		0x3u	/* 0x3 */
#define Unknown				0x4u	/* 0x4 */


/* C_EsclUnitStatus(UnitStatus) */
#define Unit_Retry			0x0u	/* 0x0 */
#define Unit_InProgress		0x1u	/* 0x1 */
#define Unit_Reserved		0x2u	/* 0x2 */
#define Unit_OK				0x3u	/* 0x3 */
/* Unknown */						/* 0x4 */


/* C_EsclManagerState */
#define NOT_POWER_SUPPLIED					0x0u	/* 0x0 */
#define POWER_SUPPLIED_FOR_UNLOCK			0x1u	/* 0x1 */
#define POWER_SUPPLIED_FOR_LOCK				0x2u	/* 0x2 */
#define POWER_SUPPLIED_FOR_LEARNING_NEUTRAL	0x3u	/* 0x3 */
#define UNLOCK_IN_PROGRESS					0x4u	/* 0x4 */
#define LOCK_IN_PROGRESS					0x5u	/* 0x5 */
#define POWER_OFF_CONFIRMATION				0x6u	/* 0x6 */
#define ANTI_SCANNING						0x7u	/* 0x7 */


/* C_HfreeTrunkTgRValue(C_HfreeTrunkTgNValueSet) */
#define HandsFree_Default	0x00u
#define HandsFree_Off		0x01u
#define HandsFree_On		0x02u
#define HandsFree_Reserve	0x03u
#define HandsFree_Invalid	0x04u


/* C_HazardFromSMK(HazardFromSMK_IBU) */
/* Off */						/* 0x0 */
#define SingleBlinking	0x1u	/* 0x1 */
#define DoubleBlinking	0x2u	/* 0x2 */
/* Redefine */
#define Single			SingleBlinking
#define Double			DoubleBlinking
/* Redefine */


/* OSMirrCmdSMK(OSMirrCmdSMK_IBU) */
#define OSMirr_Default	0u	/* 0 */
#define OSMirr_Fold		1u	/* 1 */
#define OSMirr_Unfold	2u	/* 2 */


/* C_PassiveAccessLock(PassiveAccessLock_IBU) */
#define PassiveLockNone		0x0u	/* 0 */
#define PassiveLock			0x1u	/* 1 */
#define PassiveTrunkLock	0x2u	/* 2 */
	

/* C_PassiveAccessUnlock(PassiveAccessUnlock_IBU) */
#define PassiveUnlockNone	0x0u	/* 0 */
#define PassiveUnlock		0x1u	/* 1 */
#define PUnlock_UnlockDRVDR	0x2u	/* 2 */
#define PIC_Key_Reminder	0x3u	/* 3 */


/* C_SMKDispWarn(CorrespondingWarningValue) */
/* Off */							/* 0 */
#define Par_ShiftP			0x1u	/* 0x1 */
#define Par_FobBatt			0x2u	/* 0x2 */
#define Par_NotUnlock		0x3u	/* 0x3 */
#define Par_NotLock			0x4u	/* 0x4 */
#define Par_ESCLFail		0x5u	/* 0x5 */
#define Par_EngineOp		0x6u	/* 0x6 */
#define Par_AuthFail		0x7u	/* 0x7 */
#define Par_Reserved		0x8u	/* 0x8 */
#define Par_KeyOut			0x9u	/* 0x9 */
#define Par_SSBWarn			0xAu	/* 0xA */
#define Par_AuthFail2		0xBu	/* 0xB */
#define Par_VehicleNotP		0xCu	/* 0xC */
#define Par_StopLamp		0xDu	/* 0xD */
#define Par_PNSW			0xEu	/* 0xE */
#define Par_ACPlugConnected	0xFu	/* 0xF */


/* C_SMKExtBuzWarn */
/* Off */						/* 0 */
#define ExtBuz_DoorLock1	1u	/* 1 */
#define ExtBuz_DoorLock2	2u	/* 2 */
#define ExtBuz_IDOut		3u	/* 3 */
#define ExtBuz_TrunkWarn	4u	/* 4 */
#define ExtBuz_KeyReminder2	5u	/* 5 */
#define ExtBuz_DoorLock3	6u	/* 6 */
#define ExtBuz_Default		7u	/* 7 */
	

/* C_SMKRKECmd -> RKECMD */


/* C_WdwComfortCMDSMK(WdwComfortCMDSMK_IBU) */
/* None */							/* 0x0 */
#define RemoteWindowOpen	0x1u	/* 0x1 */
#define RemoteWindowClose	0x2u	/* 0x2 */
#define RemoteWindowStop	0x3u	/* 0x3 */


/* C_WlightRValue */
/* Deault */						/* 0x0 */
#define WelcomeLight_Off	0x1u	/* 0x1 */
#define WelcomeLight_On		0x2u	/* 0x2 */
#define Invalid				0x3u	/* 0x3 */

/* C_FoldunfoldSetSound */
#define No_Sound			0x0u
#define AUTOFOLDOFF			0x1u
#define AUTOFOLDON			0x2u
#define Sound_Invalid		0x3u	


/*******************************************************************************
	CAN RX Define tVARs
*******************************************************************************/
/* C_LkasHbaSysStat */
#define None_HBA				(u8)0x00
#define	HBA_Low_Beam			(u8)0x01
#define HBA_High_Beam			(u8)0x02
#define HBA_SYS_Fail			(u8)0x07


/* Stub_ADB_SysState */
#define None_IFS				(u8)0x00
#define	IFS_On_HighBeam_Off		(u8)0x01
#define IFS_On_HighBeam_On		(u8)0x02
#define IFS_SYS_Fail			(u8)0x07

/* C_HBAOptionInfo */
#define	HBA_Off		0U
#define	HBA_On		1U


/* C_EmsISGStat */
#define ISGisnotOperating			0U
#define Idle_Stop					1U
#define AutoStartengineforSafety	2U
#define ISGdisablebyswitch			3U
#define ISGFault					4U
#define ISGdisablebylowbattery		5U
#define AutostartdisablebySW		6U
#define AutoStartdisablebygear		7U

/* C_HcuHevRdy */
#define	HEVnotREADY					(u8)0x00
#define	HEVDrivable					(u8)0x01


/* C_VcuEvRdy */
#define	EVnotReady					(u8)0x00
#define EVDrivable					(u8)0x01


/* C_EpbState */
#define	Release_State				0U
#define Apply_State					1U
#define	DynamicBrake_DRVActREQ		2U


/* C_PDStatOBC */
#define	ACChargingPlugOFF			(u8)0x00
#define	ACChargingPlugSwitchS3Open	(u8)0x01
#define	PDNormalStatus				(u8)0x02
#define	PDCircuitFaultStatus		(u8)0x03


/* C_FstChaBMS */
#define	CharginNone					(u8)0x00
#define	FastCharging				(u8)0x01


/* C_TeleCrankingCmdIBOX */
#define	TeleCranking_Default		0U
#define	TeleCranking_Cranking		1U
#define	TeleCranking_Stop			2U
#define	TeleCranking_Invalid		3U


/* C_SJBDeliveryMode */
#define	Before_Delivery			0x00U
#define	After_Delivery			0x01U


/* C_DriveTypeOption(b_DRIVETYPE) */
#define Par_LHD		0u	/* 0 */
#define Par_RHD		1u	/* 1 */


/* G_SEL_DISP(GearPosition) */
#define Gear_P				0x0u	/* 0x0 */
#define Gear_L				0x1u	/* 0x1 */
#define Gear_2				0x2u	/* 0x2 */
#define Gear_3				0x3u	/* 0x3 */
#define Gear_DSmode			0x4u	/* 0x4 */
#define Gear_D				0x5u	/* 0x5 */
#define Gear_N				0x6u	/* 0x6 */
#define Gear_R				0x7u	/* 0x7 */
#define Gear_SportsMode		0x8u	/* 0x8 */
#define Gear_NotDisplay		0x9u	/* 0x9 */
#define Gear_SubRomComm		0xAu	/* 0xA */
#define Gear_SubRomCommErr	0xBu	/* 0xB */
#define Gear_PaddleShift	0xCu	/* 0xC */
#define Gear_Reserved		0xDu	/* 0xD */
#define Gear_Intermediate	0xEu	/* 0xE */
#define Gear_Fault			0xFu	/* 0xF */
/* Redefine */
#define GearP						Gear_P
#define GearL						Gear_L
#define Gear2						Gear_2
#define Gear3						Gear_3
#define DS_Mode						Gear_DSmode
#define GearD						Gear_D
#define GearN						Gear_N
#define GearR						Gear_R
#define sports_mode_or_manual_shift	Gear_SportsMode
#define NotDisplayatCluster			Gear_NotDisplay
#define SubRomCommunication			Gear_SubRomComm
#define SubRomCommunicationError	Gear_SubRomCommErr
#define Paddle_shift_D_position		Gear_PaddleShift
#define Reserved					Gear_Reserved
#define Intermediate_position		Gear_Intermediate
#define fault						Gear_Fault
/* Redefine */


/* ENG_STAT(EngineStatus) */
#define Par_EngineStop		0x0u	/* 0x0 */
#define Par_Cranking		0x1u	/* 0x1 */
#define Par_Stalled			0x2u	/* 0x2 */
#define Par_EngineRunning	0x3u	/* 0x3 */
#define Par_Fault			0x7u	/* 0x7 */

#define EngineRunning Par_EngineRunning	/* Redefine */


/* LV_FUEL_TYPE_ECU */
#define Gasoline	0x0u	/* 0x0 */
#define Gas			0x1u	/* 0x1 */


/* C_ConfTCU */
#define StepShiftVehicle	0x00u
#define CVTVehicle			0x0Au
#define DCTVehicle			0x0Bu
#define MTVehicle			0x0Fu
/* Redefine */
#define AT_vehicle			StepShiftVehicle
#define CVT_vehicle			CVTVehicle
#define DCT_vehicle			DCTVehicle
#define MT_vehicle			MTVehicle
/* Redefine */


/* MUL_CODE */
#define Par_CAN_VERS	0u	/* 0 */
#define Par_CONF_TCU	1u	/* 1 */
#define Par_OBD_FRF_ACK	2u	/* 2 */
#define Par_TQ_STND		3u	/* 3 */


/* CF_PHEV_ShutOff */
#define notRequest	0x0u	/* 0x0 */
#define Request		0x1u	/* 0x1 */


/* CF_Tcu_Typ */
#define HEVDCT	0x0u	/* 0x0 */
#define Step_AT	0x1u	/* 0x1 */
#define CVT		0x2u	/* 0x2 */
#define HEV_AT	0x3u	/* 0x3 */


/* C_BrakeCylPresStat */
#define PRES_STAT_Normal	0x0u


/* Head Lamp Low */
#define	Par_Voltage_AutoLevel			255
#define	Par_Voltage_TailLevel			159
#define	Par_Voltage_HeadLowLevel		216
#define	Par_Voltage_HeadLampOff			103	


/* HeadLampHighControl */
#define	Par_Voltage_PassingLevel		121 	/* 2.38V */
#define	Par_Voltage_HeadHighLevel		189 	/* 3.72V */
#define	Par_Voltage_HighOffLevel		255		/* 5V */
	
/* FrontFogLamp */
#define	Par_Voltage_FrontFogLevel		121 	/* 2.38V */
#define	Par_Voltage_RearFogLevel		189	 	/* 3.72V */
#define	Par_Voltage_FogOFF				255 	/*	5V */ 


/* Wiper SW */
#define	Par_Voltage_WiperOFF			255		/* 5V */ 
#define	Par_Voltage_MISTLevel			63		/* 1.24V */ 
#define	Par_Voltage_LOWLevel			163		/* 3.21V */  
#define	Par_Voltage_HIGHLevel			216 	/* 4.25V */  
#define	Par_Voltage_INT 				113 	/* 2.22V */ 

/* Wiper Int Volume */
#define	Par_INTStep_STEP1				224		/* 4.40V */ 
#define	Par_INTStep_STEP2				184		/* 3.61V */ 
#define	Par_INTStep_STEP3				144		/* 2.84V */
#define	Par_INTStep_STEP4				104		/* 2.04V */  
#define	Par_INTStep_STEP5				63		/* 1.24V */ 

/* Rear Wiper */
#define Par_RearWiperINT_StepLevel		121		/* 2.38V */
#define Par_RearWiper_StepLevel			189 	/* 3.72V */
#define Par_RearWiper_OffLevel			255 	/* 5V */ 

/* Battery Value */
#define BATT_6dt8V						85u
#define BATT_7V							87u
#define BATT_18V						227u
#define BATT_18dt2V						229u
#define BATT_9V							113u
#define BATT_16V						202u


#define kACC_ON_Voltage					(98u)	/* 7.8V */
#define kACC_OFF_Voltage				(89u)	/* 7.1V */	
#define	kIGN1_ON_Voltage				(89u) 	/* 7V */
#define	kIGN1_OFF_Voltage				(51u) 	/* 4 */
#define	kIGN2_ON_Voltage				(89u) 	/* 7V */
#define	kIGN2_OFF_Voltage				(51u) 	/* 4V */

/* Relay Feedback Voltage 1digit = 0.07872V, (100k, 33k) */
#define kVoltage_3V						(38u)	/* Port Input : 0.744V */
#define	kVoltage_4V						(51u)	/* Port Input : 0.992V */
#define	kVoltage_5V						(64u)	/* Port Input : 1.241V */
#define	kVoltage_7V						(89u)	/* Port Input : 1.737V */

/* DRL Option */
#define	Option_DRLOff   				0u
#define	Option_NADRL					1u
#define	Option_USADedicatedDRL			2u
#define	Option_USADedicatedDRL_IPS		3u
#define	Option_NADedicatedDRL			4u
#define	Option_NADedicatedDRL_IPS		5u
#define	Option_DedicatedDRL				6u
#define	Option_DedicatedDRL_IPS			7u
#define	Option_USADRL					8u


/* Lamp Option  */ 
#define	Lamp_2_D						0u
#define Lamp_B_D						1u
#define Lamp_B_D_S						2u

/* PAS Option */
#define	PASOpt_None						0u
#define	PASOpt_PAS						1u
#define	PASOpt_RPAS						2u

#define	PAS_Opt_Snsr8					0u
#define	PAS_Opt_Snsr4					1u
#define	PAS_Opt_Snsr3					2u

/*******************************************************************************
	Stub CAN TX Define tVARs
*******************************************************************************/
/* C_ExtFobPos, C_IntFobPos */
/* Default */						/* 0x0 */
#define can_not_recognize	0x1u	/* 0x1 */
#define Fob_recognized		0x2u	/* 0x2 */
#define Search_in_progress	0x3u	/* 0x3 */

/* C_FobBATState */
/* Normal */				/* 0x0 */
#define Low_battery	0x1u	/* 0x1 */
	

/* C_ToggleBUttonStuck */
/* Normal */				/* 0x0 */
#define ToggleStuck	0x1u	/* 0x1 */


/* C_LFANTState */
#define ANT_Normal	0x0u	/* 0x0 */
#define ANT_Fault	0x1u	/* 0x1 */


/* C_OSMirrModeDDM */
#define AutoModeOff	0x0u	/* 0x0 */
#define AutoModeOn	0x1u	/* 0x1 */

#define USMReserved		0x0u
#define NotApplied		0x1u
#define Applied			0x2u
#define USMInvalid		0x3u

/* RainSnsr Decision */
#define RainSns_Invalid 0x2u

#define	PowerAutoOffSet	(u8)0x01

#define	Night	1U


/*******************************************************************************
	Stub CAN RX Define tVARs
*******************************************************************************/
#define EVready		0x1u	/* 0x1 */
#define HEVready	0x1u	/* 0x1 */

/*******************************************************************************
	Diag Define tVARs
*******************************************************************************/
/* S_DIAGReq */
/* None */									/* 0u */
#define StartSMKTeaching					1u
#define EnterPINCode						2u
#define StartSMKComponentLearning			3u
#define Learning1stFOB						4u
#define Learning2ndFOB						5u
#define Learning3rdFOB						6u
#define Learning4thFOB						7u
#define Start_SMK_Neutralization_PINCode	8u
#define Start_ESCL_Neutralization_PINCode	9u
#define ClearDTC							10u
#define ReadFOBPartNumber					11u

#define Diagnosticsessioninprogress

/* S_TeachingMode */
#define AfterMarketMode	0x0u	/* 0x00 */
#define FactoryMode		0x1u	/* 0x01 */



enum e_ChatteringInput
{
	eA_ACC_IN_BCM=0,				/* 0 */
	eA_FogSW_IN,					/* 1 */
	eA_FRWiperSW_IN,				/* 2 */
	eA_FRWiperVolumeSW_IN,			/* 3 */	
	eA_HeadlampHighSW_IN,			/* 4 */	
	eA_IGN1_IN_BCM,					/* 5 */
	eA_IGN2_IN_BCM,					/* 6 */
	eA_LightSW_IN,					/* 7 */
	eA_RRWiperSW_IN,				/* 8 */
	eL_StopLampFuse,				/* 9 */
	eL_WiperParkingSW_IN,			/* 10 */
	eL_WiperLowBackUpSWFR_IN,		/* 11 */
	eL_RRWasherSW_IN,				/* 12 */
	eL_FRWasherSW_IN,				/* 13 */
	eL_BrakeSW_IN,					/* 14 */
	eL_SSBSW1_IN,					/* 15 */
	eL_SSBSW2_IN,					/* 16 */
	eL_Pposition_IN,				/* 17 */
	eA_StartFeedback_IN,			/* 18 */
	eL_BrakeSW_IN_BCM,				/* 19 */
	kMaxChatteringInput
};


enum e_ChatteringMuxInput
{
	eL_CapaSensorUnlockDRV_IN = 0,		/* 0 */
	eL_CapaSensorUnlockAST_IN,			/* 1 */
	eL_OutsideHandleSWRearDRV_IN,		/* 2 */
	eL_OutsideHandleSWRearAST_IN,		/* 3 */
	eL_RRCurtainSW_IN,					/* 4 */
	eL_Reserved2_IN,					/* 5 */
	eL_DedicatedDRLOPT_IN,					/* 6 */
	eL_Reserved4_IN,					/* 7 */
	eL_FuelDoorOpenSW_IN,				/* 8 */
	eL_FuelDoorReleaseSW_IN,			/* 9 */
	eL_ChargeDoorSWFR_IN,				/* 10 */
	eL_ChargeDoorSWRR_IN,				/* 11 */
	eL_CapaSensorUnlockRRDRV_IN,		/* 12 */
	eL_CapaSensorUnlockRRAST_IN,		/* 13 */
	eL_OutsideHandleSWAST_IN,			/* 14 */
	eL_OutsideHandleSWDRV_IN,			/* 15 */
	eL_SunroofStatus_IN,				/* 16 */
	eL_ClutchIgnLockSW_IN,				/* 17 */
	eL_ESCLUnlockSW_IN,					/* 18 */
	eL_RRViewSW_IN,						/* 19 */
	eL_PAS_RPASSW_IN,					/* 20 */
	eL_Reserved1_IN,					/* 21 */
	kMaxChatteringMuxInput
};
extern sw_muxinput	sw_muxarray[kMaxChatteringMuxInput];


typedef enum
{
	kAck_None=0,
	kAck_RcvRF,
	kAck_RcvRKE,
	kAck_RcvDummy1,	/* enum no.3 Don't delete */
	kAck_RcvDummy2,	/* enum no.4 Don't delete */
	kAck_RcvTPMS
} e_DiagMsgOutputAck;




/*******************************************************************************
	Sleep Define tVARs
*******************************************************************************/
#define SMK_INPUT_LP_FLAG	0x0001u
#define SMK_OUTPUT_LP_FLAG	0x0002u
#define SMK_SUB_RX_LP_FLAG	0x0004u
#define SMK_SUB_TX_LP_FLAG	0x0008u
#define SMK_ESCL_LP_FLAG	0x0010u
#define SMK_LF_LP_FLAG		0x0020u
#define SMK_WAKE_LP_FLAG	0x0040u
#define SMK_CAN_LP_FLAG		0x0080u
#define BCM_INPUT_LP_FLAG	0x0100u
#define BCM_OUTPUT_LP_FLAG	0x0200u
#define BCM_LIN29_LP_FLAG	0x0400u

#define MAX_LP_FLAG			0x07FFu


/*******************************************************************************
	Declare External  Variables
*******************************************************************************/
#define LP_FLAG_CHECK		0x03FFu


/*******************************************************************************
	Define Parameter                                                            
*******************************************************************************/

/* Switch Voltage Value */
#define Voltage_5V						255
#define	Voltage_220mV					11
#define Voltage_0mV						0

#define kNO_COMM						0u
#define kSILENT_COMM					1u
#define kFULL_COMM						2u

#define	Par_CANeventSigOutWaitWakeup	Time_ms(20u)
#define	Par_CANeventSigOutWaitECUAct	Time_ms(110u)
#define	Par_zeroTime					0u


/*******************************************************************************
	Define Macro
*******************************************************************************/

#define	SleepMode				(u8)0x01
#define	NormalMode				(u8)0x00

#define LowActive_On			(u8)0x00u
#define PASSnsrchannelId		(u8)0x02u
#define RainSnsrchannelId		(u8)0x04u

#define IBU_MSG					32				
#define ECW_MSG 				3
#define RS_STD_MSG				33
#define RS_OPT_MSG				5

#define Fault_3s				258

#define ReStartTime				2 /* 5ms * 2 = 10ms */
#define ReSleepTime				2 /* 5ms * 2 = 10ms */

#define CoSvAbCLK				10/8

#define SWToggle_default		(u8)0x02u

/*******************************************************************************
	Declare External  Function
*******************************************************************************/
/* Function call Interface */
extern void Initial_MuxInput(void);
extern u8 Is_ForcedDrivingOutput(void);



/*******************************************************************************
	Function Stub Define
*******************************************************************************/
#define stub_C_ExtFobPos
#define stub_C_FobBATState
#define stub_C_HfreeTrunkTg2RValue
#define stub_C_IntFobPos
#define stub_C_LFANTState
#define stub_C_PowerAutoOff
#define stub_C_RSPATimeoutFlag
#define stub_C_SMKRSPAMode
#define stub_C_ToggleButtonStuck
#define stub_C_TwoStepUnlockOption
#define stub_C_VehicleStrFailRes
#define stub_CF_Gway_SMK_CrankingStat
#define stub_CF_Smk_PassLk
#define stub_CF_Smk_PassUk
#define stub_CF_Smk_StrRlyStat

#define stub_CF_Fcu_EvRdy
#define stub_CF_Fcu_GarSelDisp
#define stub_CF_Gway_RSPA_CrankingReq
#define stub_CF_Gway_RSPA_IDOutWarnReq
#define stub_CF_Hcu_HevRdy
#define stub_CF_OBC_AC_CONNECT_FLAG
#define stub_CF_PHEV_ShutOff
#define stub_CF_Tcu_Typ
#define stub_CF_Vcu_EvRdy
#define stub_CF_Vcu_GarSelDisp
#define stub_C_FLDoorHandleButton
#define stub_C_FRDoorHandleButton
#define stub_C_FobIndReqRSPA
#define stub_C_GloveBoxTrunkLockSw
#define stub_C_HfreeTrunkTg2NValueSet
#define stub_C_OSMirrMode
#define stub_C_OSMirrModeDDM
#define stub_C_PTGMOpt
#define stub_C_PTGMTrunkLockSw
#define stub_C_PTGMode
#define stub_C_PauseStatRSPA
#define stub_C_PreCrankReq
#define stub_C_RLDoorHandleButton
#define stub_C_RRDoorHandleButton
#define stub_C_RheoStatOpt
#define stub_C_SmartWelcomeRValue
#define stub_C_TailLampActivity
#define stub_C_WlightNValueSet
#define stub_LV_FUEL_TYPE_ECU
#define stub_S_TailgateUnlockSW

/*******************************************************************************
	Stub signal Define
*******************************************************************************/
#define Stub_Diag
#define stub_RSPA
#define stub_EEPROM
#define stub_RTEMapping
#define stub_NC
#define stub_SUB
#define stub_common
#define	stub_PasSound
#define stub_ESCL
//#define stub_ONeventsignal


/* EEPROM Calibration Number */
#define VirginStatus_0				0x00u
#define CalibrationValue_0			0x01u
#define VirginStatus_1				0x02u
#define CalibrationValue_1			0x03u


#define Calib_Learnt				0x55u
#define ChangeSecond				0x64u


/********************************************************************************
	Vehicle Type
********************************************************************************/
#define Vehicle_SP2


#define SP2		0U
#define SU2		1U
#define SP2i	2U
#define SP2c	3U


/********************************************************************************
	Part Number Option Define
*********************************************************************************/


/********************************************************************************
	Version Define
*********************************************************************************/
/* Seoyon Internal SW Version */
extern u8 SW_Version[5];
extern u8 HW_Version[4];

#define SP2_SW_Version_0	'A'
#define SP2_SW_Version_1	'0'
#define SP2_SW_Version_2	'1'
#define SP2_SW_Version_3	'0'
#define SP2_SW_Version_4	'7'

#define SP2i_SW_Version_0	'A'
#define SP2i_SW_Version_1	'0'
#define SP2i_SW_Version_2	'0'
#define SP2i_SW_Version_3	'0'
#define SP2i_SW_Version_4	'4'

/* System Name */
#define SYSTEM_NAME_HIGH	'I'
#define SYSTEM_NAME_MID		'B'
#define SYSTEM_NAME_LOW		'U'

/* BCAN Version */
#define BCAN_DB_VER_HIGH	'0'
#define BCAN_DB_VER_MID		'2'
#define BCAN_DB_VER_LOW		'0'

/* PCAN Version */
#define PCAN_DB_VER_HIGH	'0'
#define PCAN_DB_VER_MID		'1'
#define PCAN_DB_VER_LOW		'0'



// SCIM
extern e_LF_RF_Telegram	e_LF_RF_TelegramStep;

#endif	/* __DATA_H__ */

