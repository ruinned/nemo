/******************************************************************************
 * Project      	: 	SP2 IBU
 * File Name    	: 	APP_EEPROM.c
 * Compiler			: 	Eclipse
 * Author       	: 	MyoungKwon Choi (mk210@seoyonelec.com)
 * Created at   	: 	2017-06-23
 * Code Editor		: 	Source Insight (Recomended Font : D2Coding / Size 10)
 * Revision     	: 	Version 0.1
 * Copyright  	 	: 	Copyright Seoyon Electronics Co.Ltd. All Rights Reserved
 * Description  	: 	
 *
 ******************************************************************************/




/*******************************************************************************
	Include Headers
*******************************************************************************/
#include "Type.h"
#include "Define.h"
#include "Timer.h"
#include "Data.h"
#include "pj_define.h"
#include "Eeprom.h"

#include "APP_EEPROM_Type.h"
#include "APP_EEPROM.h"


#include "smk_diag.h"



/*******************************************************************************
	Declare Function Prototypes 
*******************************************************************************/
void EEPROM_Control(void);
static void EEPROM_Update_Err_Check(void);
static void EEPROM_Update_Control(void);
void EEPROM_Reload_Control(void);
static void Clear_RKE_Serial_All(void);

void Clear_EepromBlock_SMKOPTION(void);
void Clear_EepromBlock_FOB(void);
void Clear_EepromBlock_FOB_RC(void);
void Clear_EepromBlock_LEARNT(void);
void Clear_EepromBlock_SMKFUNCTION(void);
void Clear_EepromBlock_CALIB_01(void);
void Clear_EepromBlock_CALIB_02(void);
void Clear_EepromBlock_CALIB_03(void);
void Clear_EepromBlock_SMKDTC(void);
void Clear_EepromBlock_SMKFACTORY(void);
void Clear_EepromBlock_PARTNUM(void);
void Clear_EepromBlock_MANUFACTURE(void);
void Clear_EepromBlock_HWVERSION(void);
void Clear_EepromBlock_BCMCALIB(void);
void Clear_EepromBlock_ECUINFO(void);
void Clear_EepromBlock_Par_PAS(void);

void Get_Diag_FixedCode(u8 data[]);	/* Diag not used */
void Get_FobSerial(u8 num, u8 serial[]);	/* Not used */
void Set_SecurityKeyNumber(const u8 skn[]);
u8 GetRKEDisableCnt(u8 FobNo);		/* Not used */
u8 GetDiag_FactoryOption(u8 data[], u8 diag_enable);

void Load_Calibration(void);

static u8 CheckCalibration(const u8 data[]);
static void DefaultCalibration_01(void);
static void DefaultCalibration_02(void);
static void DefaultCalibration_03(void);
static void Setup_Calibration_01(void);
static void Setup_Calibration_02(void);
static void Setup_Calibration_03(void);




/*******************************************************************************
	Define Constant
*******************************************************************************/


/*******************************************************************************
	Declare  Variables
*******************************************************************************/
/* INPUT OUTPUT --------------------------------------------------------------*/
tSMK_EEPROM	SMK_EEPROM_IF = {{0u,}};

/* INTERNAL ------------------------------------------------------------------*/
u8 Option_SMK[kMax_Option] = {0u,};

/* EEPROM Image */
u8	NvM_Dummy[1];
u8	rub_EEPROM_OPTION[sizeEEBlk_OPTION] 	=	{0u};
u8	rub_EEPROM_FOB[sizeEEBlk_FOB] 			= 	{0u,};
u8	rub_EEPROM_FOB_RC[sizeEEBlk_FOB_RC]		=	{0u,};
u8	rub_EEPROM_LEARNT[sizeEEBlk_LEARNT]		=	{0u,};
u8	rub_EEPROM_FUNCTION[sizeEEBlk_FUNCTION]	=	{0u,};
u8	rub_EEPROM_CALIB_01[sizeEEBlk_CALIB_01]	=	{0u,};
u8	rub_EEPROM_CALIB_02[sizeEEBlk_CALIB_02]	=	{0u,};
u8	rub_EEPROM_CALIB_03[sizeEEBlk_CALIB_03]	=	{0u,};
u8	rub_EEPROM_DTC[sizeEEBlk_DTC]			=	{0u,};
u8	rub_EEPROM_FACTORY[sizeEEBlk_FACTORY]	=	{0u,};
u8	rub_EEPROM_PARTNUM[sizeEEBlk_PARTNUM]	=	{0u,};
/* BCM EEPROM Image - Add */
u8	rub_EEPROM_BCMOPTION[sizeEEBlk_BCMOPTION]	=	{0u,};
u8	rub_EEPROM_BCMFUNCTION[sizeEEBlk_BCMFUNCTION]	=	{0u,};
u8  rub_EEPROM_Manufacture[sizeEEBlk_MANUFACTURE] = {0u, };
u8  rub_EEPROM_HWVERSION[sizeEEBlk_HWVERSION] = {0u, };
u8  rub_EEPROM_BCMCALIB[sizeEEBlk_BCMCALIB] = {0u, };
u8  rub_EEPROM_ECUINFO[sizeEEBlk_ECUINFO] = {0u, };


u8	rub_EEPROM_Par_PAS[sizeEEBlk_PAS_ALL]		=	{0u,};

u32 StoreEepromEnableFlag = 0x00000000U;
static u32	Update_eeprom_Err = 0x00000000U;
static u32	Reload_eeprom_Err = 0x00000000U;
static Std_ReturnType	EEP_reload_err = RTE_E_OK;

static	rom_tbl	u8	option_pos[][2]=
{
	{1,kBit0},
	{1,kBit1},
	{1,kBit2},
	{1,kBit3},
	{1,kBit4},
	{1,kBit5},
	{1,kBit6},
	{1,kBit7},

	{2,kBit0},
	{2,kBit1},
	{2,kBit2},
	{2,kBit3},
	{2,kBit4},
	{2,kBit5},
	{2,kBit6},
	{2,kBit7},

	{3,kBit0},
	{3,kBit1},
	{3,kBit2},
	{3,kBit3},
	{3,kBit4},
	{3,kBit5},
	{3,kBit6},
	{3,kBit7},

	{4,kBit0},
	{4,kBit1},
	{4,kBit2},
	{4,kBit3},
	{4,kBit4},
	{4,kBit5},
	{4,kBit6},
	{4,kBit7},

	{5,kBit0},
	{5,kBit1},
	{5,kBit2},
	{5,kBit3},
	{5,kBit4},
	{5,kBit5},
	{5,kBit6},
	{5,kBit7}
	
};

CALIB_1		Calib_b_ABSOption=0u;
CALIB_1		Calib_b_ABS_AutoSelectOption=0u;
CALIB_1		Calib_b_BrakeInputDelayOption=0u;
CALIB_1		Calib_b_CLUUSMOption=0u;
CALIB_1		Calib_b_DCTOption=0u;
CALIB_1		Calib_b_DeliveryModeOption=0u;
CALIB_1		Calib_b_DieselOption=0u;
CALIB_1		Calib_b_DomOption=kOn;
CALIB_1		Calib_b_DRIVETYPE=0u;
CALIB_1		Calib_b_GloveBoxTrunkLockSw=0u;
CALIB_1		Calib_b_HandFreeTrunkTGWorkingOption=0u;
CALIB_1		Calib_b_HEVAutoSelectOption=0u;
CALIB_1		Calib_b_HEVOption=0u;
CALIB_1		Calib_b_LPIOption=0u;
CALIB_1		Calib_b_MTOption=0u;
CALIB_1		Calib_b_NAOption=0u;
CALIB_1		Calib_b_PowerTrunkTGOption=0u;
CALIB_1		Calib_b_PowerTrunkTGWorkingOption=kOn;
CALIB_1		Calib_b_SJB_DeliveryMode=kOn;
CALIB_1		Calib_b_StopLampFuseCheckOption=kOn;
CALIB_1		Calib_b_TailgateAutoSelectOption=0u;
CALIB_1		Calib_b_TailgateOption=0u;
CALIB_1		Calib_b_TwicePressRKESettingOption=0u;
CALIB_1		Calib_b_TwoStepsUnlockOption=0u;
CALIB_1		Calib_b_WelcomeLightWorkingOption=0u;
CALIB_1		Calib_b_WelcomeMirrWorkingOption=0u;
CALIB_1		Calib_CountryCfg=0u;
CALIB_1		Calib_GearPosition=0u;
CALIB_1		Calib_SBWOption=0u;
CALIB_1		Calib_RheoStatOptSet=0u;

CALIB_MIN	Calib_BatterySaving=0u;
CALIB_10MS	Calib_BuzzerDelayTime=0u;
CALIB_1		Calib_ClutchSWFailClear=0u;
CALIB_SEC	Calib_ClutchSWFailureDetectionTime=0u;
CALIB_SEC	Calib_DelayBetweenIgn1OffTeleOff=0u;
CALIB_10MS	Calib_DelayBetweenIgn1OnStartOn=0u;
CALIB_SEC	Calib_Diag_AccessInputConfirmTime=0u;
CALIB_SEC	Calib_Diag_PPositionFailureConfirmTime=0u;
CALIB_SEC	Calib_Diag_VehicleSpeedFailureConfirmTime=0u;
CALIB_1		Calib_DieselMaxCrankingTemp1=0u;
CALIB_1		Calib_DieselMaxCrankingTemp2=0u;
CALIB_1		Calib_DieselMaxCrankingTemp3=0u;
CALIB_1		Calib_DieselMaxCrankingTemp4=0u;
CALIB_1		Calib_DieselMaxCrankingTempErr=0u;
CALIB_SEC	Calib_DieselMaxCrankingTime1=0u;
CALIB_SEC	Calib_DieselMaxCrankingTime2=0u;
CALIB_SEC	Calib_DieselMaxCrankingTime3=0u;
CALIB_SEC	Calib_DieselMaxCrankingTime4=0u;
CALIB_SEC	Calib_DieselMaxCrankingTimeErr=0u;
CALIB_SEC	Calib_EngineGlowLampStatusforDieselTime=0u;
CALIB_SEC	Calib_EngineGlowLampStatusforLPITime=0u;
CALIB_SEC	Calib_ESCL_PPositionFailureConfirmTime=0u;
CALIB_SEC	Calib_ESCL_VehicleSpeedFailureConfirmTime=0u;
CALIB_10MS	Calib_ESCLCommandRespTimeoutTime=0u;
CALIB_SEC	Calib_ESCLLearningNeutralizationTimeoutTime=0u;
CALIB_SEC	Calib_ESCLLockTimeoutTime=0u;
CALIB_10MS	Calib_ESCLPowerOffConfirmTime=0u;
CALIB_10MS	Calib_ESCLPowerOffSurgeCurrentTime=0u;
CALIB_10MS	Calib_ESCLStatusByPowerOnTimeoutTime=0u;
CALIB_10MS	Calib_ESCLStatusReqAfterCommandTime=0u;
CALIB_10MS	Calib_ESCLStatusRespTimeoutTime=0u;
CALIB_SEC	Calib_ESCLUnlockTimeoutTime=0u;
CALIB_SEC	Calib_EVMaxCrankingTime=0u;
CALIB_10MS	Calib_FailResClearWaitingTime=0u;
CALIB_SEC	Calib_FastRestartValidityTime=0u;
CALIB_SEC	Calib_FCEVMaxCrankingTime=0u;
CALIB_SEC	Calib_FOBAuthValidityTime=0u;
CALIB_SEC	Calib_FOBPreAuthValidityTime=0u;
CALIB_10MS	Calib_GapTimeGeneratingTime=0u;
CALIB_SEC	Calib_GapTimeGenerationWithoutWelOptionTime=0u;
CALIB_1		Calib_GasolineMaxCrankingTemp1=0u;
CALIB_1		Calib_GasolineMaxCrankingTemp2=0u;
CALIB_1		Calib_GasolineMaxCrankingTemp3=0u;
CALIB_1		Calib_GasolineMaxCrankingTemp4=0u;
CALIB_1		Calib_GasolineMaxCrankingTempErr=0u;
CALIB_SEC	Calib_GasolineMaxCrankingTime1=0u;
CALIB_SEC	Calib_GasolineMaxCrankingTime2=0u;
CALIB_SEC	Calib_GasolineMaxCrankingTime3=0u;
CALIB_SEC	Calib_GasolineMaxCrankingTime4=0u;
CALIB_SEC	Calib_GasolineMaxCrankingTimeErr=0u;
CALIB_MIN	Calib_HandFreeTrunkFobAwayMaxDurationTime=0u;
CALIB_1		Calib_HandFreeTrunkFobNotFoundCntMax=0u;
CALIB_10MS	Calib_HandFreeTrunkLFSearchingDelayTime=0u;
CALIB_HRS	Calib_HandFreeTrunkLongPeriodDurationTime=0u;
CALIB_10MS	Calib_HandFreeTrunkLongPeriodTime=0u;
CALIB_10MS	Calib_HandFreeTrunkOnceBuzzerOnTime=0u;
CALIB_HRS	Calib_HandFreeTrunkShortPeriodDurationTime=0u;
CALIB_10MS	Calib_HandFreeTrunkShortPeriodTime=0u;
CALIB_10MS	Calib_HandFreeTrunkTwiceBuzzerOffTime=0u;
CALIB_10MS	Calib_HandFreeTrunkTwiceBuzzerOnTime=0u;
CALIB_100MS	Calib_HazardOutputDurationTime=0u;
CALIB_SEC	Calib_HEVorEVMaxCrankingTime=0u;
CALIB_10MS	Calib_IdleStopActivationDelayTime=0u;
CALIB_10MS	Calib_IdleStopDeactivationDelayTime=0u;
CALIB_10MS	Calib_IGN1FallingFilteringTime=0u;
CALIB_10MS	Calib_InhibitPNSwitchStabilizationTime=0u;
CALIB_1		Calib_InteriorAntNb=0u;
CALIB_1		Calib_JapSearchingReqCounter=0u;
CALIB_1		Calib_JapSearchingValidNb=0u;
CALIB_10MS	Calib_L_ESCLUnlockStabilizationTime=0u;
CALIB_100MS	Calib_MaxEMSResponseTime=0u;
CALIB_1		Calib_MaxPossibleVehicleSpeedAcceleration=0u;
CALIB_SEC	Calib_MaxTeleCrankingTime=0u;
CALIB_SEC	Calib_MaxTeleCrankingTimeforFCEV=0u;
CALIB_MIN	Calib_MaxTeleEngineRunningTimeDiesel=0u;
CALIB_MIN	Calib_MaxTeleEngineRunningTimeGasoline=0u;
CALIB_MIN	Calib_MaxTeleEngineRunningTimeLPI=0u;
CALIB_32	Calib_MinRPMToStopStarterActivation=0u;
CALIB_1		Calib_NB_RKE=12;	/* Cllib ¡Æ¨£ CO¢¥c CE¢¯aCO. by CMK */
CALIB_10MS	Calib_NoESCLLockingStartedConfirmTime=0u;
CALIB_100MS	Calib_PostEmergencyStopIgnoreSSBTime=0u;
CALIB_100MS	Calib_PostEMSRequestTime=0u;
CALIB_10MS	Calib_PostEnableLineTime=0u;
CALIB_1		Calib_RegisteredFobNb=0u;
CALIB_100MS	Calib_ReleaseStatusToEMSTime=0u;
CALIB_10MS	Calib_RKEInterFrameTimeout=0u;
CALIB_1		Calib_RKESynchronizationCount=0u;
CALIB_32	Calib_RKENoSynchronizationCount=0u;
CALIB_32	Calib_RKEReSynchronizationCount=0u;
CALIB_1		Calib_RPMPulsesPerRotation=0u;
CALIB_MIN	Calib_RSPACrankingDurationTime=0u;
CALIB_10MS	Calib_RSPAPeriodDurationTime=0u;
CALIB_10MS	Calib_SMK_PNSwOffWarningDebouncingTime=0u;
CALIB_10MS	Calib_SMKBatteryDischargeDelayTime=0u;
CALIB_1		Calib_SSB_ConsistencyFailure_dec_step=0u;
CALIB_1		Calib_SSB_ConsistencyFailure_inc_step=0u;
CALIB_1		Calib_SSB_ConsistencyFailure_max=0u;
CALIB_1		Calib_SSB_EmergencyPressCount=0u;
CALIB_SEC	Calib_SSB_EmergencyPressCountDuration=0u;
CALIB_SEC	Calib_SSB_LimpHomeCrankingTime=0u;
CALIB_SEC	Calib_SSB_LimpHomePressConfirmedTime=0u;
CALIB_100MS	Calib_SSB_LongPressDuration=0u;
CALIB_10MS	Calib_SSB_MaxTimeDifference=0u;
CALIB_10MS	Calib_SSB_WarningDelayTime=0u;
CALIB_1		Calib_TeleCrankingVSLimit=0u;
CALIB_SEC	Calib_TeleDoorOpenMaxTime=0u;
CALIB_SEC	Calib_TPAuthValidityTime=0u;
CALIB_SEC	Calib_TPPreAuthValidityTime=0u;
CALIB_1		Calib_TrunkTailgateOpenFailNb=0u;
CALIB_SEC	Calib_TrunkTailgateOpenWaitingTime=0u;
CALIB_0_01	Calib_VehicleSpeedPulsesPerSecond=0.0f;
CALIB_0_001	Calib_VehicleSpeedPulsesPerSecond_ABS=0.0f;
CALIB_0_01	Calib_VehicleSpeedPulsesPerSecond_nonABS=0.0f;
CALIB_100MS	Calib_WaitForAuthenticationTime=0u;
CALIB_10MS	Calib_WaitingAuthResponseTime=0u;
CALIB_10MS	Calib_WaitingPedalInputTime=0u;
CALIB_SEC	Calib_WaitingRKETeleCrankingCmdTime=0u;
CALIB_SEC	Calib_WelcomeLightAuthPeriodicTime=0u;
CALIB_SEC	Calib_WelcomeLightAuthSearchingTime=0u;
CALIB_1		Calib_WelcomeLightAwayPeriodCnt=0u;
CALIB_10MS	Calib_WelcomeLightAwayPeriodTime=0u;
CALIB_MIN	Calib_WelcomeLightFobAwayMaxDurationTime=0u;
CALIB_SEC	Calib_WelcomeLightFobAwayPeriodTime=0u;
CALIB_1		Calib_WelcomeLightFobNotFoundCntMax=0u;
CALIB_10MS	Calib_WelcomeLightLFSearchingDelayTime=0u;
CALIB_HRS	Calib_WelcomeLightLongPeriodDurationTime=0u;
CALIB_10MS	Calib_WelcomeLightLongPeriodTime=0u;
CALIB_SEC	Calib_WelcomeLightOnTime=0u;
CALIB_HRS	Calib_WelcomeLightShortPeriodDurationTime=0u;
CALIB_10MS	Calib_WelcomeLightShortPeriodTime=0u;
CALIB_1		Calib_TransponderLocking=0u;
CALIB_100MS	Calib_SMK_NoFobTPStartIndicatorTime=0u;
CALIB_SEC	Calib_TeleESCLLockRequestTimeoutTime=0u;
CALIB_10MS	Calib_WAL_PeriodSearchTime=0u;
CALIB_1		Calib_WAL_NoFobFoundMaxConseCount=0u;
CALIB_MIN	Calib_WAL_AutoLockTime=0u;
CALIB_10MS	Calib_PassiveDrUnlockCmdClearTime=0u;
CALIB_10MS	Calib_PassiveDrLockCmdClearTime=0u;
CALIB_10MS	Calib_PassivePostionOutClearTime=0u;

static u8 b_RSM_LIN_BUSOFF_Present = Off;
static u8 b_RSM_LIN_BUSOFF_Memory = Off;


/*******************************************************************************
	Define Macro
*******************************************************************************/





/******************************************************************************
 * Function name	:	EEPROM_Control
 * Parameter		:	void
 * Return			:	void
 * Description	:	
 ******************************************************************************/
void EEPROM_Control(void)
{
	EEPROM_Update_Err_Check();
	EEPROM_Update_Control();
}

static void EEPROM_Update_Err_Check(void)
{
	u8	dummy = kOn;

	if(Get_Update_Eeprom_Err(EEBlk_ALL)==Off)
	{
		dummy = Off;
	}	
	else if(Get_Update_Eeprom_Err(EEBlk_OPTION)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_OPTION);
		
		/* EEPROMBlock_ClearDefect(SMK_EEP_OPTION);	XENON SWP */
		Set_EepromStoreEnable(EEBlk_OPTION);
		
		#ifdef ASW_DEBUGGING
			debug_EERetryCnt.OPTION++;
		#endif
	}
	else if(Get_Update_Eeprom_Err(EEBlk_FOB)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_FOB);
		
		/* EEPROMBlock_ClearDefect(SMK_EEP_FOB);	XENON SWP */
		Set_EepromStoreEnable(EEBlk_FOB);
		
		#ifdef ASW_DEBUGGING
			debug_EERetryCnt.FOB++;
		#endif
	}
	else if(Get_Update_Eeprom_Err(EEBlk_FOB_RC)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_FOB_RC);
		
		/* EEPROMBlock_ClearDefect(SMK_EEP_FOB_RC);	XENON SWP */
		Set_EepromStoreEnable(EEBlk_FOB_RC);
		
		#ifdef ASW_DEBUGGING
			debug_EERetryCnt.FOB_RC++;
		#endif
	}
	else if(Get_Update_Eeprom_Err(EEBlk_LEARNT)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_LEARNT);
		
		/* EEPROMBlock_ClearDefect(SMK_EEP_LEARNT);	XENON SWP */
		Set_EepromStoreEnable(EEBlk_LEARNT);

		#ifdef ASW_DEBUGGING
			debug_EERetryCnt.LEARNT++;
		#endif
	}
	else if(Get_Update_Eeprom_Err(EEBlk_FUNCTION)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_FUNCTION);
		
		/* EEPROMBlock_ClearDefect(SMK_EEP_FUNCTION);	XENON SWP */
		Set_EepromStoreEnable(EEBlk_FUNCTION);
	
		#ifdef ASW_DEBUGGING
			debug_EERetryCnt.FUNCTION++;
		#endif
	}
	else if(Get_Update_Eeprom_Err(EEBlk_CALIB_01)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_CALIB_01);
		
		/* EEPROMBlock_ClearDefect(SMK_EEP_CALIB_01);	XENON SWP */
		Set_EepromStoreEnable(EEBlk_CALIB_01);

		#ifdef ASW_DEBUGGING
			debug_EERetryCnt.CALIB_01++;
		#endif
	}
	else if(Get_Update_Eeprom_Err(EEBlk_CALIB_02)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_CALIB_02);
		
		/* EEPROMBlock_ClearDefect(SMK_EEP_CALIB_02);	XENON SWP */
		Set_EepromStoreEnable(EEBlk_CALIB_02);
	
		#ifdef ASW_DEBUGGING
			debug_EERetryCnt.CALIB_02++;
		#endif
	}
	else if(Get_Update_Eeprom_Err(EEBlk_CALIB_03)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_CALIB_03);
		
		/* EEPROMBlock_ClearDefect(SMK_EEP_CALIB_03);	XENON SWP */
		Set_EepromStoreEnable(EEBlk_CALIB_03);
	
		#ifdef ASW_DEBUGGING
			debug_EERetryCnt.CALIB_03++;
		#endif
	}	
	else if(Get_Update_Eeprom_Err(EEBlk_DTC)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_DTC);
		
		/* EEPROMBlock_ClearDefect(SMK_EEP_DTC);	XENON SWP */
		Set_EepromStoreEnable(EEBlk_DTC);

		#ifdef ASW_DEBUGGING
			debug_EERetryCnt.DTC++;
		#endif
	}	
	else if(Get_Update_Eeprom_Err(EEBlk_FACTORY)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_FACTORY);
		
		/* EEPROMBlock_ClearDefect(SMK_EEP_FACTORY);	XENON SWP */
		Set_EepromStoreEnable(EEBlk_FACTORY);

		#ifdef ASW_DEBUGGING
			debug_EERetryCnt.FACTORY++;
		#endif
	}
	else if(Get_Update_Eeprom_Err(EEBlk_PARTNUM)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_PARTNUM);
		Set_EepromStoreEnable(EEBlk_PARTNUM);

		#ifdef ASW_DEBUGGING
			debug_EERetryCnt.PARTNUM++;
		#endif
	}	
	else if(Get_Update_Eeprom_Err(EEBlk_BCMOPTION)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_BCMOPTION);
		Set_EepromStoreEnable(EEBlk_BCMOPTION);
	}	
	else if(Get_Update_Eeprom_Err(EEBlk_BCMFUNCTION)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_BCMFUNCTION);
		Set_EepromStoreEnable(EEBlk_BCMFUNCTION);
	}
	else if(Get_Update_Eeprom_Err(EEBlk_MANUFACTURE)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_MANUFACTURE);
		Set_EepromStoreEnable(EEBlk_MANUFACTURE);
	}
	else if(Get_Update_Eeprom_Err(EEBlk_HWVERSION)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_HWVERSION);
		Set_EepromStoreEnable(EEBlk_HWVERSION);
	}
	else if(Get_Update_Eeprom_Err(EEBlk_BCMCALIB)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_BCMCALIB);
		Set_EepromStoreEnable(EEBlk_BCMCALIB);
	}
	else if(Get_Update_Eeprom_Err(EEBlk_ECUINFO)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_ECUINFO);
		Set_EepromStoreEnable(EEBlk_ECUINFO);
	}
	else if(Get_Update_Eeprom_Err(EEBlk_Par_PAS)!=0)
	{
		Clear_Update_Eeprom_Err(EEBlk_Par_PAS);

		Set_EepromStoreEnable(EEBlk_Par_PAS);
	}
	else
	{
		/* MISRA */
	}
}

static void EEPROM_Update_Control(void)
{
	u8	dummy = kOn;
	Std_ReturnType	NvmRetval = E_OK;
	NvM_RequestResultType	BlockStatus = NVM_REQ_OK;
	
	if(Get_EepromStoreEnable(EEBlk_ALL)==Off)
	{
		dummy = Off;
	}
	else /* EEPROM OPTION Block Update */
	if(Get_EepromStoreEnable(EEBlk_OPTION)!=0)
	{
		NvmRetval=Rte_Call_R_NvMService_OPTION_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_OPTION_WriteBlock(rub_EEPROM_OPTION);
				Clear_EepromStoreEnable(EEBlk_OPTION);
			}
		}
	}
	else /* EEPROM FOB Block Update */
	if(Get_EepromStoreEnable(EEBlk_FOB)!=0)
	{
		NvmRetval=Rte_Call_R_NvMService_FOB_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_FOB_WriteBlock(rub_EEPROM_FOB);
				Clear_EepromStoreEnable(EEBlk_FOB);
			}
		}
	}
	else /* EEPROM FOB Rolling Counter Block Update */
	if(Get_EepromStoreEnable(EEBlk_FOB_RC)!=0)
	{
		NvmRetval=Rte_Call_R_NvMService_FOB_RC_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_FOB_RC_WriteBlock(rub_EEPROM_FOB_RC);
				Clear_EepromStoreEnable(EEBlk_FOB_RC);
			}
		}
	}
	else /* EEPROM LEARNT Block Update */
	if(Get_EepromStoreEnable(EEBlk_LEARNT)!=0)
	{
		NvmRetval=Rte_Call_R_NvMService_LEARNT_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_LEARNT_WriteBlock(rub_EEPROM_LEARNT);
				Clear_EepromStoreEnable(EEBlk_LEARNT);
			}
		}
	}
	else /* EEPROM FUNCTION Block Update */
	if(Get_EepromStoreEnable(EEBlk_FUNCTION)!=0)
	{
		NvmRetval=Rte_Call_R_NvMService_FUNCTION_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_FUNCTION_WriteBlock(rub_EEPROM_FUNCTION);
				Clear_EepromStoreEnable(EEBlk_FUNCTION);
			}
		}
	}
	else /* EEPROM CALIB_01 Block Update */
	if(Get_EepromStoreEnable(EEBlk_CALIB_01)!=0)
	{
		NvmRetval=Rte_Call_R_NvMService_CALIB_01_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_CALIB_01_WriteBlock(rub_EEPROM_CALIB_01);
				Clear_EepromStoreEnable(EEBlk_CALIB_01);
			}
		}
	}
	else /* EEPROM CALIB_02 Block Update */
	if(Get_EepromStoreEnable(EEBlk_CALIB_02)!=0)
	{
		NvmRetval=Rte_Call_R_NvMService_CALIB_02_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_CALIB_02_WriteBlock(rub_EEPROM_CALIB_02);
				Clear_EepromStoreEnable(EEBlk_CALIB_02);
			}
		}
	}
	else /* EEPROM CALIB_03 Block Update */
	if(Get_EepromStoreEnable(EEBlk_CALIB_03)!=0)
	{
		NvmRetval=Rte_Call_R_NvMService_CALIB_03_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_CALIB_03_WriteBlock(rub_EEPROM_CALIB_03);
				Clear_EepromStoreEnable(EEBlk_CALIB_03);
			}
		}
	}	
	else /* EEPROM DTC Block Update */
	if(Get_EepromStoreEnable(EEBlk_DTC)!=0)
	{
		NvmRetval=Rte_Call_R_NvMService_DTC_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_DTC_WriteBlock(rub_EEPROM_DTC);
				Clear_EepromStoreEnable(EEBlk_DTC);
			}
		}
	}
	else /* EEPROM FACTORY Block Update */
	if(Get_EepromStoreEnable(EEBlk_FACTORY)!=0)
	{
		NvmRetval=Rte_Call_R_NvMService_FACTORY_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_FACTORY_WriteBlock(rub_EEPROM_FACTORY);
				Clear_EepromStoreEnable(EEBlk_FACTORY);
			}
		}
	}
	else /* EEPROM PARTNUM Block Update */
	if(Get_EepromStoreEnable(EEBlk_PARTNUM)!=0)
	{
		NvmRetval=Rte_Call_R_NvMService_PARTNUM_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_PARTNUM_WriteBlock(rub_EEPROM_PARTNUM);
				Clear_EepromStoreEnable(EEBlk_PARTNUM);
			}
		}
	}
	else /* EEPROM BCM OPTION Block Update */
	if(Get_EepromStoreEnable(EEBlk_BCMOPTION)!=0)
	{
		NvmRetval=Rte_Call_R_NvMService_BCMOPTION_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_BCMOPTION_WriteBlock(rub_EEPROM_BCMOPTION);
				Clear_EepromStoreEnable(EEBlk_BCMOPTION);
			}
		}
	}
	else /* EEPROM BCM FUNCTION Block Update */
	if(Get_EepromStoreEnable(EEBlk_BCMFUNCTION)!=0)
	{
		NvmRetval=Rte_Call_R_NvMService_BCMFUNCTION_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_BCMFUNCTION_WriteBlock(rub_EEPROM_BCMFUNCTION);
				Clear_EepromStoreEnable(EEBlk_BCMFUNCTION);
			}
		}
	}
	else /* EEPROM MANUFACTURE Block Update */
	if(Get_EepromStoreEnable(EEBlk_MANUFACTURE)!=0)
	{
		NvmRetval=Rte_Call_R_NvMService_MANUFACTURE_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_MANUFACTURE_WriteBlock(rub_EEPROM_Manufacture);
				Clear_EepromStoreEnable(EEBlk_MANUFACTURE);
			}
		}
	}
	else if(Get_EepromStoreEnable(EEBlk_HWVERSION)!=0)
	{  /* EEPROM HWVERSION Block Update */
		NvmRetval=Rte_Call_R_NvMService_HWVERSION_GetErrorStatus(&BlockStatus);
		
		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_HWVERSION_WriteBlock(rub_EEPROM_HWVERSION);
				Clear_EepromStoreEnable(EEBlk_HWVERSION);
			}
		}
	}
	else if(Get_EepromStoreEnable(EEBlk_BCMCALIB)!=0)
	{ /* EEPROM BCM CALIBRATION Block Update */
		NvmRetval=Rte_Call_R_NvMService_BCMCALIB_GetErrorStatus(&BlockStatus);
		
		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_BCMCALIB_WriteBlock(rub_EEPROM_BCMCALIB);
				Clear_EepromStoreEnable(EEBlk_BCMCALIB);
			}
		}
	}
	else if(Get_EepromStoreEnable(EEBlk_ECUINFO)!=0)
	{ /* EEPROM ECUInfo Block Update */
		NvmRetval=Rte_Call_R_NvMService_ECUINFO_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_ECUINFO_WriteBlock(rub_EEPROM_ECUINFO);
				Clear_EepromStoreEnable(EEBlk_ECUINFO);
			}
		}
	}	
	else if(Get_EepromStoreEnable(EEBlk_Par_PAS)!=0)
	{ /* EEPROM Par_PAS Block Update */
		NvmRetval=Rte_Call_R_NvMService_Par_PAS_GetErrorStatus(&BlockStatus);

		if((NvmRetval==E_OK) && (BlockStatus!=NVM_REQ_NOT_OK))
		{
			if(BlockStatus!=NVM_REQ_PENDING)
			{
				(void)Rte_Call_R_NvMService_Par_PAS_WriteBlock(rub_EEPROM_Par_PAS);
				Clear_EepromStoreEnable(EEBlk_Par_PAS);
			}
		}
	}
	else
	{
		/* MISRA */
	}

}

void EEPROM_Reload_Control(void)
{
	u8 ReturnErrorStatus;
	
	/* OPTION Block Reload */
	EEP_reload_err = Rte_Call_R_NvMService_OPTION_GetErrorStatus(&ReturnErrorStatus);
	/*check !!! return Error Status value */
	if(RELOAD_ERROR==kOn)
	{	
		Set_Reload_Eeprom_Err(EEBlk_OPTION);
	}
	#ifdef	ASW_DEBUGGING 
		debug_EEReloadErr.OPTION = (u8)(EEP_reload_err);
	#endif

	/* FOB Block Reload */
	EEP_reload_err =  Rte_Call_R_NvMService_FOB_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_FOB);
	}
	#ifdef	ASW_DEBUGGING 
		debug_EEReloadErr.FOB = (u8)(EEP_reload_err);
	#endif

	/* FOB_RC Block Reload */
	EEP_reload_err =  Rte_Call_R_NvMService_FOB_RC_GetErrorStatus(&ReturnErrorStatus);	
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_FOB_RC);
	}
	#ifdef	ASW_DEBUGGING 
		debug_EEReloadErr.FOB_RC = (u8)(EEP_reload_err);
	#endif

	/* LEARNT Block Reload */
	EEP_reload_err = Rte_Call_R_NvMService_LEARNT_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_LEARNT);		
	}
	#ifdef	ASW_DEBUGGING 
		debug_EEReloadErr.LEARNT = (u8)(EEP_reload_err);
	#endif

	/* FUNCTION Block Reload */
	EEP_reload_err = Rte_Call_R_NvMService_FUNCTION_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_FUNCTION);
	}
	#ifdef	ASW_DEBUGGING 
		debug_EEReloadErr.FUNCTION = (u8)(EEP_reload_err);
	#endif

	/* CALIB_01 Block Reload */
	EEP_reload_err = Rte_Call_R_NvMService_CALIB_01_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_CALIB_01);
	}
	#ifdef	ASW_DEBUGGING 
		debug_EEReloadErr.CALIB_01 = (u8)(EEP_reload_err);
	#endif

	/* CALIB_02 Block Reload */
	EEP_reload_err = Rte_Call_R_NvMService_CALIB_02_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_CALIB_02);
	}
	#ifdef	ASW_DEBUGGING 
		debug_EEReloadErr.CALIB_02 = (u8)(EEP_reload_err);
	#endif	

	/* CALIB_03 Block Reload */
	EEP_reload_err = Rte_Call_R_NvMService_CALIB_03_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_CALIB_03);
	}
	#ifdef	ASW_DEBUGGING 
		debug_EEReloadErr.CALIB_03 = (u8)(EEP_reload_err);
	#endif	

	/* DTC Block Reload */
	EEP_reload_err = Rte_Call_R_NvMService_DTC_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_DTC);
	}
	#ifdef	ASW_DEBUGGING 
		debug_EEReloadErr.DTC = (u8)(EEP_reload_err);
	#endif	

	/* FACTORY Block Reload */
	EEP_reload_err = Rte_Call_R_NvMService_FACTORY_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_FACTORY);
	}
	#ifdef	ASW_DEBUGGING 
		debug_EEReloadErr.FACTORY = (u8)(EEP_reload_err);
	#endif	

	/* PARTNUM Block Reload */
	EEP_reload_err = Rte_Call_R_NvMService_PARTNUM_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_PARTNUM);
	}
	#ifdef	ASW_DEBUGGING
		debug_EEReloadErr.PARTNUM = (u8)(EEP_reload_err);
	#endif

	/* BCM Option  Block Reload */
	EEP_reload_err = Rte_Call_R_NvMService_BCMOPTION_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_BCMOPTION);
	}

	/* BCM Option  Block Reload */
	EEP_reload_err = Rte_Call_R_NvMService_BCMFUNCTION_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_BCMFUNCTION);
	}		

	/* BCM Manufacture  Block Reload */
	EEP_reload_err = Rte_Call_R_NvMService_MANUFACTURE_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_MANUFACTURE);
	}	

	/* BCM HW Version  Block Reload */
	EEP_reload_err = Rte_Call_R_NvMService_HWVERSION_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_HWVERSION);
	}	

	/* BCM BCM CALIBRATION  Block Reload */
	EEP_reload_err = Rte_Call_R_NvMService_BCMCALIB_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_BCMCALIB);
	}	
	
	/* BCM ECU Info  Block Reload */
	EEP_reload_err = Rte_Call_R_NvMService_ECUINFO_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_ECUINFO);
	}		
	
	/* PAS Reload */
	EEP_reload_err = Rte_Call_R_NvMService_Par_PAS_GetErrorStatus(&ReturnErrorStatus);
	if(RELOAD_ERROR==kOn)
	{
		Set_Reload_Eeprom_Err(EEBlk_Par_PAS);
	}

	if(Get_Reload_Eeprom_Err(EEBlk_ALL)==Off)
	{
		/* eeprom_Block Reload OK */
		#ifdef	ASW_DEBUGGING 
			(debug_cnt.EepReloadOK_Cnt)++;
		#endif	
	}
	else
	{
		/* eeprom_Block Reload NG - Retry */
		if(Get_Reload_Eeprom_Err(EEBlk_OPTION)!=0)
		{
			EEP_reload_err = Rte_Call_R_NvMService_OPTION_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==Off)
			{	
				Clear_Reload_Eeprom_Err(EEBlk_OPTION);
			}
		}
		if(Get_Reload_Eeprom_Err(EEBlk_FOB)!=0)
		{		
			EEP_reload_err =  Rte_Call_R_NvMService_FOB_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==Off)
			{
				Clear_Reload_Eeprom_Err(EEBlk_FOB);
			}
		}
		if(Get_Reload_Eeprom_Err(EEBlk_FOB_RC)!=0)
		{		
			EEP_reload_err =  Rte_Call_R_NvMService_FOB_RC_GetErrorStatus(&ReturnErrorStatus);	
			if(RELOAD_ERROR==Off)
			{
				Clear_Reload_Eeprom_Err(EEBlk_FOB_RC);
			}
		}
		if(Get_Reload_Eeprom_Err(EEBlk_LEARNT)!=0)
		{		
			EEP_reload_err = Rte_Call_R_NvMService_LEARNT_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==Off)
			{
				Clear_Reload_Eeprom_Err(EEBlk_LEARNT);	
			}
		}
		if(Get_Reload_Eeprom_Err(EEBlk_FUNCTION)!=0)
		{		
			EEP_reload_err = Rte_Call_R_NvMService_FUNCTION_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==Off)
			{
				Clear_Reload_Eeprom_Err(EEBlk_FUNCTION);
			}
		}
		if(Get_Reload_Eeprom_Err(EEBlk_CALIB_01)!=0)
		{		
			EEP_reload_err = Rte_Call_R_NvMService_CALIB_01_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==Off)
			{
				Clear_Reload_Eeprom_Err(EEBlk_CALIB_01);
			}
		}
		if(Get_Reload_Eeprom_Err(EEBlk_CALIB_02)!=0)
		{		
			EEP_reload_err = Rte_Call_R_NvMService_CALIB_02_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==Off)
			{
				Clear_Reload_Eeprom_Err(EEBlk_CALIB_02);
			}
		}
		if(Get_Reload_Eeprom_Err(EEBlk_CALIB_03)!=0)
		{		
			EEP_reload_err = Rte_Call_R_NvMService_CALIB_03_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==Off)
			{
				Clear_Reload_Eeprom_Err(EEBlk_CALIB_03);
			}
		}		
		if(Get_Reload_Eeprom_Err(EEBlk_DTC)!=0)
		{		
			EEP_reload_err = Rte_Call_R_NvMService_DTC_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==Off)
			{
				Clear_Reload_Eeprom_Err(EEBlk_DTC);
			}
		}
		if(Get_Reload_Eeprom_Err(EEBlk_FACTORY)!=0)
		{		
			EEP_reload_err = Rte_Call_R_NvMService_FACTORY_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==Off)
			{
				Clear_Reload_Eeprom_Err(EEBlk_FACTORY);
			}
		}
		if(Get_Reload_Eeprom_Err(EEBlk_PARTNUM)!=0)
		{
			EEP_reload_err = Rte_Call_R_NvMService_PARTNUM_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==Off)
			{
				Clear_Reload_Eeprom_Err(EEBlk_PARTNUM);
			}
		}
		if(Get_Reload_Eeprom_Err(EEBlk_BCMOPTION)!=0)
		{
			EEP_reload_err = Rte_Call_R_NvMService_BCMOPTION_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==kOff)
			{
				Clear_Reload_Eeprom_Err(EEBlk_BCMOPTION);
			}
		}
		if(Get_Reload_Eeprom_Err(EEBlk_BCMFUNCTION)!=0)
		{
			EEP_reload_err = Rte_Call_R_NvMService_BCMFUNCTION_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==kOff)
			{
				Clear_Reload_Eeprom_Err(EEBlk_BCMFUNCTION);
			}
		}
		if(Get_Reload_Eeprom_Err(EEBlk_MANUFACTURE)!=0)
		{
			EEP_reload_err = Rte_Call_R_NvMService_MANUFACTURE_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==kOff)
			{
				Clear_Reload_Eeprom_Err(EEBlk_MANUFACTURE);
			}
		}
		if(Get_Reload_Eeprom_Err(EEBlk_HWVERSION)!=0)
		{
			EEP_reload_err = Rte_Call_R_NvMService_HWVERSION_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==kOff)
			{
				Clear_Reload_Eeprom_Err(EEBlk_HWVERSION);
			}
		}
		if(Get_Reload_Eeprom_Err(EEBlk_BCMCALIB)!=0)
		{
			EEP_reload_err = Rte_Call_R_NvMService_BCMCALIB_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==kOff)
			{
				Clear_Reload_Eeprom_Err(EEBlk_BCMCALIB);
			}
		}
		if(Get_Reload_Eeprom_Err(EEBlk_ECUINFO)!=0)
		{
			EEP_reload_err = Rte_Call_R_NvMService_ECUINFO_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==kOff)
			{
				Clear_Reload_Eeprom_Err(EEBlk_ECUINFO);
			}
		}		
		if(Get_Reload_Eeprom_Err(EEBlk_Par_PAS)!=0)
		{
			EEP_reload_err = Rte_Call_R_NvMService_Par_PAS_GetErrorStatus(&ReturnErrorStatus);
			if(RELOAD_ERROR==kOff)
			{
				Clear_Reload_Eeprom_Err(EEBlk_Par_PAS);
			}
		}
		#ifdef	ASW_DEBUGGING
			(debug_cnt.EepReloadNG_Cnt)++;
		#endif
	}

	Clear_Reload_Eeprom_Err(EEBlk_ALL);

}


void Clear_EepromBlock_SMKOPTION(void)
{
	u8 i;
	
	for(i=0; i<sizeEEBlk_OPTION; i++)
	{
		rub_EEPROM_OPTION[i]=Virgin;
	} 
	Set_EepromStoreEnable(EEBlk_OPTION);
}
void Clear_EepromBlock_FOB(void)
{
	u8 i;
	
	for(i=0; i<sizeEEBlk_FOB; i++)
	{
		rub_EEPROM_FOB[i]=Virgin;
	}
	Set_EepromStoreEnable(EEBlk_FOB);
}
void Clear_EepromBlock_FOB_RC(void)
{
	u8 i;
	
	for(i=0; i<sizeEEBlk_FOB_RC; i++)
	{
		rub_EEPROM_FOB_RC[i]=Virgin;
	} 
	Set_EepromStoreEnable(EEBlk_FOB_RC);
}
void Clear_EepromBlock_LEARNT(void)
{
	u8 i;
	
	for(i=0; i<sizeEEBlk_LEARNT; i++)
	{
		rub_EEPROM_LEARNT[i]=Virgin;
	}
	Set_EepromStoreEnable(EEBlk_LEARNT);
}
void Clear_EepromBlock_SMKFUNCTION(void)
{
	u8 i;
	
	for(i=0; i<sizeEEBlk_FUNCTION; i++)
	{
		rub_EEPROM_FUNCTION[i]=Virgin;
	}
	Set_EepromStoreEnable(EEBlk_FUNCTION);
}
void Clear_EepromBlock_CALIB_01(void)
{
	u8 i;
	
	for(i=0; i<sizeEEBlk_CALIB_01; i++)
	{
		rub_EEPROM_CALIB_01[i]=Virgin;
	}
	Set_EepromStoreEnable(EEBlk_CALIB_01);
}
void Clear_EepromBlock_CALIB_02(void)
{
	u8 i;
	
	for(i=0; i<sizeEEBlk_CALIB_02; i++)
	{
		rub_EEPROM_CALIB_02[i]=Virgin;
	}
	Set_EepromStoreEnable(EEBlk_CALIB_02);
}
void Clear_EepromBlock_CALIB_03(void)
{
	u8 i;
	
	for(i=0; i<sizeEEBlk_CALIB_03; i++)
	{
		rub_EEPROM_CALIB_03[i]=Virgin;
	}
	Set_EepromStoreEnable(EEBlk_CALIB_03);
}
void Clear_EepromBlock_SMKDTC(void)
{
	u8 i;
	
	for(i=0; i<sizeEEBlk_DTC; i++)
	{
		rub_EEPROM_DTC[i]=0;
	}
	Set_EepromStoreEnable(EEBlk_DTC);
}
void Clear_EepromBlock_SMKFACTORY(void)
{
	u8 i;
	
	for(i=0; i<sizeEEBlk_FACTORY; i++)
	{
		rub_EEPROM_FACTORY[i]=Memory_None;
	}
	Set_EepromStoreEnable(EEBlk_FACTORY);
}
void Clear_EepromBlock_PARTNUM(void)
{
	u8 i;

	for(i=0; i<sizeEEBlk_PARTNUM; i++)
	{
		rub_EEPROM_PARTNUM[i]=Memory_None;
	}
	Set_EepromStoreEnable(EEBlk_PARTNUM);
}

void Clear_EepromBlock_BCMOPTION(void)
{
	u8 i;

	for(i=0; i<sizeEEBlk_BCMOPTION; i++)
	{
		rub_EEPROM_BCMOPTION[i]=Virgin;
	}
	Set_EepromStoreEnable(EEBlk_BCMOPTION);
}

void Clear_EepromBlock_BCMFUNCTION(void)
{
	u8 i;

	for(i=0; i<sizeEEBlk_BCMFUNCTION; i++)
	{
		rub_EEPROM_BCMFUNCTION[i]=Virgin;
	}
	Set_EepromStoreEnable(EEBlk_BCMFUNCTION);
}

void Clear_EepromBlock_MANUFACTURE(void)
{
	u8 i;

	for(i=0; i<sizeEEBlk_MANUFACTURE; i++)
	{
		rub_EEPROM_Manufacture[i]=Memory_None;
	}
	Set_EepromStoreEnable(EEBlk_MANUFACTURE);
}

void Clear_EepromBlock_HWVERSION(void)
{
	u8 i;

	for(i=0; i<sizeEEBlk_HWVERSION; i++)
	{
		rub_EEPROM_HWVERSION[i]=Memory_None;
	}
	Set_EepromStoreEnable(EEBlk_HWVERSION);
}

void Clear_EepromBlock_BCMCALIB(void)
{
	u8 i;

	for(i=0; i<sizeEEBlk_BCMCALIB; i++)
	{
		rub_EEPROM_BCMCALIB[i]=Memory_None;
	}
	Set_EepromStoreEnable(EEBlk_BCMCALIB);
}

void Clear_EepromBlock_ECUINFO(void)
{
	u8 i;

	for(i=0; i<sizeEEBlk_ECUINFO; i++)
	{
		rub_EEPROM_ECUINFO[i]=Memory_None;
	}
	Set_EepromStoreEnable(EEBlk_ECUINFO);
}

void Clear_EepromBlock_Par_PAS(void)
{
	u8 i;

	for(i=0; i<sizeEEBlk_PAS_ALL; i++)
	{
		rub_EEPROM_Par_PAS[i] = Virgin;
	}
	Set_EepromStoreEnable(EEBlk_Par_PAS);
}

static void Clear_EepromBlock_Selection(u32 rcv_source)
{
	switch(rcv_source)
	{
		case	EEBlk_OPTION:
			Clear_EepromBlock_SMKOPTION();
			break;

		case	EEBlk_FOB:
			Clear_EepromBlock_FOB();
			break;

		case	EEBlk_FOB_RC:
			Clear_EepromBlock_FOB_RC();
			break;

		case	EEBlk_LEARNT:
			Clear_EepromBlock_LEARNT();
			break;

		case	EEBlk_FUNCTION:
			Clear_EepromBlock_SMKFUNCTION();
			break;

		case	EEBlk_CALIB_01:
			Clear_EepromBlock_CALIB_01();
			break;

		case	EEBlk_CALIB_02:
			Clear_EepromBlock_CALIB_02();
			break;

		case	EEBlk_CALIB_03:
			Clear_EepromBlock_CALIB_03();
			break;

		case	EEBlk_DTC:
			Clear_EepromBlock_SMKDTC();
			break;

		case	EEBlk_FACTORY:
			Clear_EepromBlock_SMKFACTORY();
			break;
	
		case	EEBlk_PARTNUM:
			Clear_EepromBlock_PARTNUM();
			break;

		case	EEBlk_BCMOPTION:
			Clear_EepromBlock_BCMOPTION();
			break;

		case	EEBlk_BCMFUNCTION:
			Clear_EepromBlock_BCMFUNCTION();
			break;
	
		case	EEBlk_MANUFACTURE:
			Clear_EepromBlock_MANUFACTURE();
			break;

		case	EEBlk_HWVERSION:
			Clear_EepromBlock_HWVERSION();
			break;		

		case	EEBlk_BCMCALIB:
			Clear_EepromBlock_BCMCALIB();
			break;

		case	EEBlk_ECUINFO:
			Clear_EepromBlock_ECUINFO();
			break;	
			
		default:
		break;
	}
}


/******************************************************************************
 * Function name	:	Check_RKE_Serial
 * Parameter		:	rcv_data = RKE receive serial
 * Return			:	counter = stored RKE counter
 *						0 = serial not match
 *						n = serial match FOB number
 * Description	:	test RKE serial match
 ******************************************************************************/
u8 Check_RKE_Serial(const u8 rcv_data[], u16 *counter)
{
	u8	i = 0;
	u8	j = eFobInfo;
	u8	k = eFob_RCInfo;
		
	for(i=0; i<kMax_FOB; i++)
	{
		if(	(Get_EepromData_FOB(j)==Learnt)||
			(Get_EepromData_FOB(j)==Deact))
		{
			if(	(Get_EepromData_FOB(j+1u)==rcv_data[4])&&
				(Get_EepromData_FOB(j+2u)==rcv_data[5])&&
				(Get_EepromData_FOB(j+3u)==rcv_data[6])&&
				(Get_EepromData_FOB(j+4u)==(rcv_data[7]&0x0f)))
			{
				*counter = (u16)Get_EepromData_FOB_RC(k) + (((u16)Get_EepromData_FOB_RC(k+1u))<<8);
				break;
			}
		}
		j += sizeEE_FOB;
		k += sizeEE_FOB_RC;
	}
	
	if(i<kMax_FOB)	{i++;}
	else			{i=0;}
	
	return	i;
}

/******************************************************************************
 * Function name	:	Check_FOB_Serial
 * Parameter		:	rcv_data = DST receive serial
 * Return			:	0 = serial not match
 *						n = serial match FOB number
 * Description	:	test DST serial match
 ******************************************************************************/
u8 Check_FOB_Serial(const u8 rcv_data[])
{
	u8	i = 0;
	u8	j = eFobInfo;
	
	for(i=0; i<kMax_FOB; i++)
	{
		if(	(Get_EepromData_FOB(j)==Learnt)||
			(Get_EepromData_FOB(j)==Deact))
		{
			if(	(Get_EepromData_FOB(j+1u)==rcv_data[0])&&
				(Get_EepromData_FOB(j+2u)==rcv_data[1])&&
				(Get_EepromData_FOB(j+3u)==rcv_data[2]))
			{
				break;
			}
		}
		j += sizeEE_FOB;
	}
	
	if(i<kMax_FOB)	{i++;}
	else			{i=0;}
	
	return	i;
}





/******************************************************************************
 * Function name	:	UpdateRkeCounter_SMK
 * Parameter		:	num = RKE number
 *						rolling = RKE counter data
 * Return			:	void
 * Description	:	update RKE counter
 ******************************************************************************/
void UpdateRkeCounter(u8 num, u16 rolling)
{
	u8	i = eFob_RCInfo;

	i += sizeEE_FOB_RC*(num-1u);
	
	Set_EepromData_FOB_RC(i,(u8)(rolling&0xff));	/* Low */
	Set_EepromData_FOB_RC(i+1u,(u8)(rolling>>8));	/* High */
}



/******************************************************************************
 * Function name	:	UpdateRkeTempCounter
 * Parameter		:	num = RKE number
 *						rolling = RKE counter data
 * Return			:	void
 * Description	:	update RKE counter temp
 ******************************************************************************/
void UpdateRkeTempCounter(u8 num, u16 rolling)
{
	u8	i = eFob_RCtempInfo;

	i += sizeEE_FOB_RC*(num-1u);
	
	Set_EepromData_FOB_RC(i,(u8)(rolling&0xff));	/* Low */
	Set_EepromData_FOB_RC(i+1u,(u8)(rolling>>8));	/* High */
}


void Get_RkeTempCounter(u8	num, u16 *return_u16)
{
	u8	i = eFob_RCtempInfo;
	u16 rolling = 0;

	i += sizeEE_FOB_RC*(num-1u);
	
	rolling = Get_EepromData_FOB_RC(i);					/* Low */
	rolling += (u16)((u16)(Get_EepromData_FOB_RC(i+1u))<<8);	/* High */

	*return_u16 = rolling;
}


/******************************************************************************
 * Function name	:	Clear_RKE_Serial_All
 * Parameter		:	void
 * Return			:	void
 * Description	:	clear RKE data all
 ******************************************************************************/
void Clear_RKE_Serial_All(void)
{
	u8	i = 0;
	
	for(i=0; i<(kMax_FOB*sizeEE_FOB); i++)
	{
		Set_EepromData_FOB(eFobInfo+i,Virgin);
	}

	for(i=0; i<(kMax_FOB*sizeEE_FOB_RC); i++)
	{
		Set_EepromData_FOB_RC(eFob_RCInfo+i,Virgin);		
	}	
		
	SetC(SMKState, Virgin);
}

/******************************************************************************
 * Function name	:	Store_RKE_Serial
 * Parameter		:	rcv_data = RKE receive serial & counter
 * Return			:	0 = fail to store
 *						n = success to store
 * Description	:	store RKE serial & counter
 ******************************************************************************/
u8 Store_RKE_Serial(const u8 skn[], const u8 rcv_data[], u8 num, u8 high, u8 low)
{
	u8	i = 0;
	u8  j = eFobInfo;
	u8  k = eFob_RCInfo;
	
	if(num==0)
	{/* 1'st RKE serial & counter store case */
		Set_SecurityKeyNumber(skn);
		Clear_RKE_Serial_All();
	}
	
	for(i=0; i<kMax_FOB; i++)
	{
		if(Get_EepromData_FOB(j)!=Learnt)
		{
			/* memory mark */
			Set_EepromData_FOB(j,Learnt);
			/* serial */
			Set_EepromData_FOB(j+1u,rcv_data[0]);
			Set_EepromData_FOB(j+2u,rcv_data[1]);
			Set_EepromData_FOB(j+3u,rcv_data[2]);
			Set_EepromData_FOB(j+4u,0);	/*rcv_data[7]&0x0f;*/
			/* disable */
			Set_EepromData_FOB(j+5u,0);								
			/* counter */
			Set_EepromData_FOB_RC(k,low);
			Set_EepromData_FOB_RC(k+1u,high);
			break;
		}

		j += sizeEE_FOB;
		k += sizeEE_FOB_RC;
	}
	
	SetC(SMKState, Learnt);
	
	if(i<kMax_FOB)	{i++;}
	else			{i=0;}
	
	return	i;
}





void Get_Diag_FixedCode(u8 data[])
{
	u8	i = eFobInfo;
	
	if(Get_EepromData_FOB(i)!= Virgin)
	{
		data[0] = Get_EepromData_FOB(i+1u);
		data[1] = Get_EepromData_FOB(i+2u);
		data[2] = Get_EepromData_FOB(i+3u);
		data[3] = Get_EepromData_FOB(i+4u);
	}
	else
	{
		data[0] = 0;
		data[1] = 0;
		data[2] = 0;
		data[3] = 0;
	}
	
	i += sizeEE_FOB;
	if(Get_EepromData_FOB(i)!= Virgin)
	{	
		data[4] = Get_EepromData_FOB(i+1u);
		data[5] = Get_EepromData_FOB(i+2u);
		data[6] = Get_EepromData_FOB(i+3u);
		data[7] = Get_EepromData_FOB(i+4u);
	}
	else
	{
		data[4] = 0;
		data[5] = 0;
		data[6] = 0;
		data[7] = 0;
	}

	i += sizeEE_FOB;
	if(Get_EepromData_FOB(i)!= Virgin)
	{
		data[8] = Get_EepromData_FOB(i+1u);
		data[9] = Get_EepromData_FOB(i+2u);
		data[10] = Get_EepromData_FOB(i+3u);
		data[11] = Get_EepromData_FOB(i+4u);
	}
	else
	{
		data[8] = 0;
		data[9] = 0;
		data[10] = 0;
		data[11] = 0;
	}

	i += sizeEE_FOB;
	if(Get_EepromData_FOB(i)!= Virgin)
	{
		data[12] = Get_EepromData_FOB(i+1u);
		data[13] = Get_EepromData_FOB(i+2u);
		data[14] = Get_EepromData_FOB(i+3u);
		data[15] = Get_EepromData_FOB(i+4u);
	}
	else
	{
		data[12] = 0;
		data[13] = 0;
		data[14] = 0;
		data[15] = 0;
	}

}

/******************************************************************************
 * Function name	:	Get_Memorized_RKE
 * Parameter		:	void
 * Return			:	number of learnted RKE
 * Description	:	get stored RKE number
 ******************************************************************************/
 u8 Get_Memorized_RKE(void)
{
	u8	i = 0;
	u8	j = eFobInfo;
	u8	cnt = 0;

	(void)Rte_Read_R_SMKState_SR(&SMKState);
	
	if(GetX(SMKState)==Learnt)
	{
		for(i=0; i<kMax_FOB; i++)
		{
			if(Get_EepromData_FOB(j)!=Virgin)
			{
				cnt++;
			}
			j += sizeEE_FOB;
		}
	}
	
	return	cnt;
}

/******************************************************************************
 * Function name	:	Get_FOB_state
 * Parameter		:	fob = FOB mumber
 * Return			:	status (VIRGIN/NEUTRAL/LEARNT/DEACTIVATION)
 * Description	:	test FOB state
 ******************************************************************************/
u8 Get_FOB_state(u8 fob)
{
	u8	i = eFobInfo;

	i += sizeEE_FOB*(fob-1u);
	
	return	Get_EepromData_FOB(i);
}

/******************************************************************************
 * Function name	:	Set_FOB_state
 * Parameter		:	fob = FOB number
 *			 			state = VIRGIN/NEUTRAL/LEARNT/DEACTIVATION
 * Return			:	void
 * Description	:	set FOB status
 ******************************************************************************/
void Set_FOB_state(u8 fob, u8 state)
{
	u8	i = eFobInfo;

	i += sizeEE_FOB*(fob-1u);
		
	Set_EepromData_FOB(i,state);
}

u8 Get_RegisterCount(void)
{
	u8	i = eRegisterCnt;
	u8  result = 0;

	if(Get_EepromData_LEARNT(i) == Get_EepromData_LEARNT(i+1u))
	{
		result = i;
	}
	else
	if(Get_EepromData_LEARNT(i) == Get_EepromData_LEARNT(i+2u))
	{
		result = i;
	}
	else
	if(Get_EepromData_LEARNT(i+1u) == Get_EepromData_LEARNT(i+2u))
	{
		result = i+1u;
	}
	else
	{ /* Eeprom NG */
		Set_EepromData_LEARNT(i,0x55);
		Set_EepromData_LEARNT(i+1u,0x55);
		Set_EepromData_LEARNT(i+2u,0x55);
		result = i;
	}
	
	return Get_EepromData_LEARNT(result);
}

void Set_RegisterCount(void)
{
	u8 i = eRegisterCnt;

	if(Get_EepromData_LEARNT(i) != 0xff)
	{
		Set_EepromData_LEARNT(i,Get_EepromData_LEARNT(i)+1u);
	}
	else
	{
		Set_EepromData_LEARNT(i,0x00u);
	}

	Set_EepromData_LEARNT(i+1u,Get_EepromData_LEARNT(i));
	Set_EepromData_LEARNT(i+2u,Get_EepromData_LEARNT(i+1u));
}

/******************************************************************************
 * Function name	:	Get_VehicleSerial
 * Parameter		:	seral = vehicle serial
 * Return			:	void
 * Description	:	get vehicle serial number
 ******************************************************************************/
void Get_VehicleSerial(u8 serial[])
{	
	if(Get_EepromData_LEARNT(eVehicleSerialStatus)==Learnt)
	{/* stored case */
		serial[0] = Get_EepromData_LEARNT(eVehicleSerial);
		serial[1] = Get_EepromData_LEARNT(eVehicleSerial+1);
		serial[2] = Get_EepromData_LEARNT(eVehicleSerial+2);
	}
	else
	{/* virgin case */
		serial[0] = Virgin;
		serial[1] = Virgin;
		serial[2] = Virgin;
	}
}

/******************************************************************************
 * Function name	:	Set_VehicleSerial
 * Parameter		:	serial = vehicle serial number
 * Return			:	void
 * Description	:	set vehicle serial number
 ******************************************************************************/
void Set_VehicleSerial(const u8 serial[])
{	
	Set_EepromData_LEARNT(eVehicleSerialStatus,Learnt);
	Set_EepromData_LEARNT(eVehicleSerial,serial[0]);
	Set_EepromData_LEARNT(eVehicleSerial+1,serial[1]);
	Set_EepromData_LEARNT(eVehicleSerial+2,serial[2]);
}


void Get_SecurityKeyNumber(u8 skn[])
{
	if(Get_EepromData_LEARNT(eSKNStatus) == Learnt)
	{/* stored case */
		skn[0] = Get_EepromData_LEARNT(eSKN);
		skn[1] = Get_EepromData_LEARNT(eSKN+1);
		skn[2] = Get_EepromData_LEARNT(eSKN+2);
	}
	else
	{/* virgin case */
		skn[0] = Virgin;
		skn[1] = Virgin;
		skn[2] = Virgin;
	}
}


void Set_SecurityKeyNumber(const u8 skn[])
{
	Set_EepromData_LEARNT(eSKNStatus,Learnt);
	Set_EepromData_LEARNT(eSKN,skn[0]);
	Set_EepromData_LEARNT(eSKN+1,skn[1]);
	Set_EepromData_LEARNT(eSKN+2,skn[2]);
}


void Set_VehicleSerial_Neutral(void)
{	
	if(Get_EepromData_LEARNT(eVehicleSerialStatus)==Learnt)
	{
		Set_EepromData_LEARNT(eVehicleSerialStatus,Neutralized);
	}
}

/******************************************************************************
 * Function name	:	Get_VehicleNumber
 * Parameter		:	vin = VIN number
 * Return			:	void
 * Description	:	get VIN (=Vehicle Identification Number)
 ******************************************************************************/
void Get_VehicleNumber(u8 vin[])
{	
	vin[0] = Get_EepromData_LEARNT(eVINStatus);
	vin[1] = Get_EepromData_LEARNT(eVIN);
	vin[2] = Get_EepromData_LEARNT(eVIN+1);
}

/******************************************************************************
 * Function name	:	Set_VehicleNumber
 * Parameter		:	vin = VIN number
 * Return			:	void
 * Description	:	set Vehicle Identification Number
 ******************************************************************************/
void Set_VehicleNumber(const u8 pin[])
{
	Set_EepromData_LEARNT(eVINStatus,Learnt);
	Set_EepromData_LEARNT(eVIN,pin[0]);
	Set_EepromData_LEARNT(eVIN+1,pin[1]);
}

/******************************************************************************
 * Function name	:	Get_PIN
 * Parameter		:	pin = PIN number
 * Return			:	void
 * Description	:	get PIN (=Peronal Identification Number)
 ******************************************************************************/
void Get_PIN(u8 pin[])
{	
	pin[0] = Get_EepromData_LEARNT(ePINStatus);
	pin[1] = Get_EepromData_LEARNT(ePIN);
	pin[2] = Get_EepromData_LEARNT(ePIN+1);
	pin[3] = Get_EepromData_LEARNT(ePIN+2);
}

/******************************************************************************
 * Function name	:	Set_PIN
 * Parameter		:	pin = PIN number
 * Return			:	void
 * Description	:	set Persnal Identification Number
 ******************************************************************************/
void Set_PIN(const u8 pin[])
{
	Set_EepromData_LEARNT(ePINStatus,Learnt);
	Set_EepromData_LEARNT(ePIN,pin[0]);
	Set_EepromData_LEARNT(ePIN+1,pin[1]);
	Set_EepromData_LEARNT(ePIN+2,pin[2]);	
}

static u8 vin_temp[3] = {0,0,0};
static u8 pin_temp[3] = {0,0,0};

void Get_VehicleSerial_NeutralTemp(u8 vin[])
{ 
	vin[0] = vin_temp[0];
	vin[1] = vin_temp[1];
	vin[2] = vin_temp[2];
}

void Set_VehicleSerial_NeutralTemp(const u8 vin[])
{
	vin_temp[0] = Learnt;
	vin_temp[1] = vin[0];
	vin_temp[2] = vin[1];
}

void Get_ESCL_NeutralTemp(u8 vin[])
{ 
	vin[0] = pin_temp[0];
	vin[1] = pin_temp[1];
	vin[2] = pin_temp[2];
}

void Set_ESCL_NeutralTemp(const u8 vin[])
{
	pin_temp[0] = vin[0];
	pin_temp[1] = vin[1];
	pin_temp[2] = vin[2];
}

/******************************************************************************
 * Function name	:	Get_FobSerial
 * Parameter		:	num = FOB number
 *						serial = FOB serial
 * Return			:	void
 * Description	:	get FOB serial number for Access/Start
 ******************************************************************************/
void Get_FobSerial(u8 num, u8 serial[])
{
	u8 i = eFobInfo;

	i += sizeEE_FOB*num;

	if(	(Get_EepromData_FOB(i)==Learnt)||
		(Get_EepromData_FOB(i)==Deact)
	)
	{
		/* serial */
		serial[0] = Get_EepromData_FOB(i+1u);
		serial[1] = Get_EepromData_FOB(i+2u);
		serial[2] = Get_EepromData_FOB(i+3u);
		serial[3] = Get_EepromData_FOB(i+4u)&0x0f;
	}
	else
	{
		serial[0] = Virgin;
		serial[1] = Virgin;
		serial[2] = Virgin;
		serial[3] = Virgin;
	}
}

void StoreRKEDisableCnt(u8 FobNo, u8 data)
{
	u8	i = eFobInfo;

	i += sizeEE_FOB*(FobNo-1u);

	Set_EepromData_FOB(i+5u,data);
}
u8 GetRKEDisableCnt(u8 FobNo)
{
	u8	i = eFobInfo;
	u8	data = 0;
	
	i += sizeEE_FOB*(FobNo-1u);
	data = Get_EepromData_FOB(i+5u);
	
	if(data>3u)
	{
		data=0u;
	}
	else
	{
		/* MISRA */
	}
	
	return	(data);
}

/******************************************************************************
 * Function name	:	Set_FactoryOption
 * Parameter		:	data = OPTION value
 * Return			:	void
 * Description	:	set factory option
 ******************************************************************************/
void Set_FactoryOption(const u8 data[])
{
	u8	byte_pos = option_pos[data[0]-1u][0];
	u8	bit_pos = option_pos[data[0]-1u][1];

	if((data[0]==0)||(data[0]>0x28u))
	{}
	else
	{	
		Option_SMK[0] = Learnt;
		Set_EepromData_OPTION(eSMKStatus,Option_SMK[0]);
		
		if(data[1]!=0)
		{
			Option_SMK[byte_pos] |= bit_pos;
		}
		else
		{
			Option_SMK[byte_pos] &= (u8)(~bit_pos);
		}
		Set_EepromData_OPTION(eOpt+(byte_pos-1u),Option_SMK[byte_pos]);
	}
}

/******************************************************************************
 * Function name	:	GetDiag_FactoryOption
 * Parameter		:	data = OPTION value
 * Return			:	report count
 * Description	:	get factory option (DIAG support)
 ******************************************************************************/
u8 GetDiag_FactoryOption(u8 data[], u8 diag_enable)
{
	if(diag_enable == kOn)
	{
		data[0] = 0xff;
		data[1] = 0xff;
		data[2] = 0xff;
		data[3] = 0xff;
		
		data[4] = Get_EepromData_OPTION(eOpt);
		data[5] = Get_EepromData_OPTION(eOpt+1);
		data[6] = Get_EepromData_OPTION(eOpt+2);
		data[7] = Get_EepromData_OPTION(eOpt+3);

		data[8] = 0xff;
		data[9] = 0x00;
		data[10] = 0x00;
		data[11] = 0x00;

		data[12] = Get_EepromData_OPTION(eOpt+4);
		data[13] = 0x00;
		data[14] = 0x00;
		data[15] = 0x00;
	}
	else
	{
		data[0] = 0x00;
		data[1] = 0x00;
		data[2] = 0x00;
		data[3] = 0x00;

		data[4] = 0x00;
		data[5] = 0x00;
		data[6] = 0x00;
		data[7] = 0x00;

		data[8] = 0x00;
		data[9] = 0x00;
		data[10] = 0x00;
		data[11] = 0x00;

		data[12] = 0x00;
		data[13] = 0x00;
		data[14] = 0x00;
		data[15] = 0x00;		
	}
	return	18;	
}

/******************************************************************************
 * Function name	:	SetDiag_FactoryOption
 * Parameter		:	data = OPTION value
 * Return			:	void
 * Description	:	set factory option (DIAG support)
 ******************************************************************************/
u8 SetDiag_FactoryOption(const u8 data[])
{
	u8	nrc = DCM_E_POSITIVERESPONSE;
	u8	byte_pos = option_pos[data[0]-1u][0];
	u8	bit_pos = option_pos[data[0]-1u][1];
	
	if((data[0]==0)||(data[0]>0x28u))
	{
		nrc = kNrcIncorrectMessageLengthOrInvalidFormat;
	}
	else
	{
		Option_SMK[0] = Learnt;
		Set_EepromData_OPTION(eSMKStatus,Option_SMK[0]);
		
		if(data[1]!=0)
		{
			Option_SMK[byte_pos] |= bit_pos;
		}
		else
		{
			Option_SMK[byte_pos] &= (u8)(~bit_pos);
		}
		Set_EepromData_OPTION(eOpt+(byte_pos-1u),Option_SMK[byte_pos]);
	}
	
	return	nrc;
}


static	rom_tbl	u8	calib_min_01[]=
{
	1,1,1,0,0,0,0,0,1,1,	/* #01~#10 */
	1,1,1,1,1,1,1,1,1,1,	/* #11~#20 */
	1,1,1,1,1,1,1,0,0,0,	/* #21~#30 */
	0,0,1,1,1,1,1,1,1,1,	/* #31~#40 */
	1,1,1,1,1,1,1			/* #41~#47 */
};

static	rom_tbl	u8	calib_min_02[]=
{
	              1,1,1,	/* #48~#50 */
	0,0,0,2,1,1,1,1,1,1,	/* #51~#60 */
	1,1,1,1,1,1,1,0,1,1,	/* #61~#70 */
	1,0,1,1,0,1,1,			/* #71~#77 */
				  1,1,1,	/* #78~#80 */
	1,1,1,1,1,1,1,1,1,1,	/* #81~#90 */
	1,1,1,1					/* #91~#94 */
};

static	rom_tbl	u8	calib_min_03[]=
{
	        1,1,1,1,1,1,	/* #95~#100 */
	1,0,1,0,1,1,1,1,1,1,	/* #101~#110 */
	1,1,1,1,1,1,1,1,1,1,	/* #111~#120 */
	1,1,1,1,1,1,1,1,1,1,	/* #121~#130 */
	1,0,1,0,1,1,1,1,1		/* #131~#139 */
};



static	rom_tbl	u8	calib_max_01[]=
{
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,	/* #01~#10 */
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,	/* #11~#20 */
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,	/* #21~#30 */
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,	/* #31~#40 */
	0xff,0xff,0xff,0xff,0xff,0xff,0xff					/* #41~#47 */
};

static	rom_tbl	u8	calib_max_02[]=
{
	                                   0xff,0xff,0xff,	/* #48~#50 */
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,	/* #51~#60 */
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,	/* #61~#70 */
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,					/* #71~#77 */
									   0xff,0xff,0xff,  /* #78~#80 */
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,  /* #81~#90 */
    0xff,0xff,0xff,0xff									/* #91~#94 */							   
};

static	rom_tbl	u8	calib_max_03[]=
{
	                    0xff,0xff,0xff,0xff,0xff,0xff,	/* #95~#100 */
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,	/* #101~#110 */
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,  /* #111~#120 */
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,  /* #121~#130 */
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff		/* #131~#139 */
};	



void Load_Calibration(void)
{
	if(Get_EepromData_CALIB_01(eChangeCheck01)!=Learnt)
	{
		DefaultCalibration_01();
	}
	else
	{
		Setup_Calibration_01();
	}
	
	if(Get_EepromData_CALIB_02(eChangeCheck02)!=Learnt)
	{
		DefaultCalibration_02();
	}
	else
	{
		Setup_Calibration_02();
	}
	
	if(Get_EepromData_CALIB_03(eChangeCheck03)!=Learnt)
	{
		DefaultCalibration_03();
	}
	else
	{
		Setup_Calibration_03();
	}

	Calib_RPMPulsesPerRotation = Get_EepromData_CALIB_02(eRPMPulsesPerRotation);
}


u8 Store_Calibration(const u8 data[])
{
	u8	ret=DCM_E_POSITIVERESPONSE;
	u8	size_01 = eChangeCheck01;
	u8	size_02 = eChangeCheck01+eChangeCheck02;

	if(CheckCalibration(data)!=0)
	{
		ret = kNrcIncorrectMessageLengthOrInvalidFormat;
	}
	else
	{
		if(data[0]<=size_01)
		{
			Set_EepromData_CALIB_01(data[0]-1u,data[1]);
			Set_EepromData_CALIB_01(eChangeCheck01,Learnt);			

			Setup_Calibration_01();
		}
		else
		if(data[0]<=size_02)
		{
			Set_EepromData_CALIB_02((data[0]-1u)-size_01,data[1]);
			Set_EepromData_CALIB_02(eChangeCheck02,Learnt);			

			Setup_Calibration_02();
		}
		else
		{
			Set_EepromData_CALIB_03((data[0]-1u)-size_02,data[1]);
			Set_EepromData_CALIB_03(eChangeCheck03,Learnt);
			
			Setup_Calibration_03();
		}
	}
	return	ret;

}



u8 Read_Calibration(u8 data[], u8 diag_enable)
{
	u8	i = 0;
	u8 	databyte = 0;
	u8	size_01 = eChangeCheck01; 
	u8	size_02 = eChangeCheck01+eChangeCheck02;
	u8	size_all = eChangeCheck01+eChangeCheck02+eChangeCheck03;
		
	for(i=0,databyte=0; i<size_all; i++)
	{
		if( (i == 0) ||		/* PID Hex Value insert */
			(i == 31) ||	/* PID Hex Value insert */
			(i == 62) ||	/* PID Hex Value insert */
			(i == 93) ||	/* PID Hex Value insert */
			(i == 124)		/* PID Hex Value insert */
		)
		{
			if(diag_enable == kOn)
			{
				data[databyte] = 0xff;
				databyte++;
				data[databyte] = 0xff;
				databyte++;
				data[databyte] = 0xff;
				databyte++;
				data[databyte] = 0xff;
				databyte++;
			}
			else
			{	/* A/S Not support */
				data[databyte] = 0x00;
				databyte++;
				data[databyte] = 0x00;
				databyte++;
				data[databyte] = 0x00;
				databyte++;
				data[databyte] = 0x00;
				databyte++;
			}
		}
		else
		{
			/* MISRA */
		}
		
		if(diag_enable == kOn)
		{
			if(i<size_01)
			{
				data[databyte] = Get_EepromData_CALIB_01(i);
			}
			else
			if(i<size_02)
			{
				data[databyte] = Get_EepromData_CALIB_02(i-size_01);
			}
			else
			{
				data[databyte] = Get_EepromData_CALIB_03(i-size_02);
			}
			databyte++;
		}
		else
		{	/* A/S Not support */
			data[databyte] = 0x00;	
			databyte++;
		}
	}

	return	databyte;
}


void Diag_EEPROM_Initialize(void)
{
	Clear_EepromBlock_SMKOPTION();
	Clear_EepromBlock_FOB();
	Clear_EepromBlock_FOB_RC();
	Clear_EepromBlock_LEARNT();
	Clear_EepromBlock_SMKFUNCTION();
	Clear_EepromBlock_CALIB_01();
	Clear_EepromBlock_CALIB_02();
	Clear_EepromBlock_CALIB_03();
	Clear_EepromBlock_SMKDTC();
	Clear_EepromBlock_SMKFACTORY();
	Clear_EepromBlock_PARTNUM();
	Clear_EepromBlock_BCMOPTION();
	Clear_EepromBlock_BCMFUNCTION();
	Clear_EepromBlock_MANUFACTURE();
	Clear_EepromBlock_HWVERSION();
	Clear_EepromBlock_BCMCALIB();
	Clear_EepromBlock_ECUINFO();
}

static	u8 CheckCalibration(const u8 data[])
{
	u8	fail = 0;
	u8	size_01 = eChangeCheck01;
	u8	size_02 = eChangeCheck01+eChangeCheck02;
	u8	size_all = eChangeCheck01+eChangeCheck02+eChangeCheck03;
		
	
	if((data[0]==0)||(data[0]>size_all))
	{
		fail = 1;
	}
	else		
	if(data[0]<=size_01)
	{
		if(	(data[1]<calib_min_01[data[0]-1u]) ||
			(data[1]>calib_max_01[data[0]-1u])
		)
		{
			fail = 1;
		}
	}
	else
	if(data[0]<=size_02)
	{
		if(	(data[1]<calib_min_02[(data[0]-1u)-size_01]) ||
			(data[1]>calib_max_02[(data[0]-1u)-size_01])
		)
		{
			fail = 1;
		}
	}
	else
	if(data[0]<=size_all)
	{
		if(	(data[1]<calib_min_03[(data[0]-1u)-size_02]) ||
			(data[1]>calib_max_03[(data[0]-1u)-size_02])
		)
		{
			fail = 1;
		}
	}
	else
	{
		/* MISRA */
	}
	
	return	fail;
}



static void DefaultCalibration_01(void)
{
	Calib_BatterySaving = Time_min(60L);
	Set_EepromData_CALIB_01(eBatterySaving,60);
	
	Calib_DelayBetweenIgn1OnStartOn = Time_ms(100u);
	Set_EepromData_CALIB_01(eDelayBetweenIgn1OnStartOn,10);
	
	Calib_Diag_VehicleSpeedFailureConfirmTime = Time_sec(7u);
	Set_EepromData_CALIB_01(eDiag_VehicleSpeedFailureConfirmTime,7);
	
	Calib_DieselMaxCrankingTemp1 = 0x2C;
	Set_EepromData_CALIB_01(eDieselMaxCrankingTemp1,0x2C);
	
	Calib_DieselMaxCrankingTemp2 = 0x3F;
	Set_EepromData_CALIB_01(eDieselMaxCrankingTemp2,0x3F);
	
	Calib_DieselMaxCrankingTemp3 = 0x75;
	Set_EepromData_CALIB_01(eDieselMaxCrankingTemp3,0x75);
	
	Calib_DieselMaxCrankingTemp4 = 0xFE;
	Set_EepromData_CALIB_01(eDieselMaxCrankingTemp4,0xFE);
	
	Calib_DieselMaxCrankingTempErr = 0xFF;
	Set_EepromData_CALIB_01(eDieselMaxCrankingTempErr,0xFF);
	
	Calib_DieselMaxCrankingTime1 = Time_sec(25u);
	Set_EepromData_CALIB_01(eDieselMaxCrankingTime1,25);
	
	Calib_DieselMaxCrankingTime2 = Time_sec(20u);
	Set_EepromData_CALIB_01(eDieselMaxCrankingTime2,20);
	
	Calib_DieselMaxCrankingTime3 = Time_sec(15u);
	Set_EepromData_CALIB_01(eDieselMaxCrankingTime3,15);
	
	Calib_DieselMaxCrankingTime4 = Time_sec(10u);
	Set_EepromData_CALIB_01(eDieselMaxCrankingTime4,10);
	
	Calib_DieselMaxCrankingTimeErr = Time_sec(25u);
	Set_EepromData_CALIB_01(eDieselMaxCrankingTimeErr,25);
	
	Calib_EngineGlowLampStatusforLPITime = Time_sec(7u);
	Set_EepromData_CALIB_01(eEngineGlowLampStatusforLPITime,7);
	
	Calib_ESCL_VehicleSpeedFailureConfirmTime = Time_sec(7u);
	Set_EepromData_CALIB_01(eESCL_VehicleSpeedFailureConfirmTime,7);
	
	Calib_ESCLCommandRespTimeoutTime = Time_ms(200u);
	Set_EepromData_CALIB_01(eESCLCommandRespTimeoutTime,20);
	
	Calib_ESCLLearningNeutralizationTimeoutTime = Time_sec(50u);
	Set_EepromData_CALIB_01(eESCLLearningNeutralizationTimeoutTime,50);
	
	Calib_ESCLLockTimeoutTime = Time_sec(5u);
	Set_EepromData_CALIB_01(eESCLLockTimeoutTime,5);
	
	Calib_ESCLPowerOffConfirmTime = Time_ms(50u);
	Set_EepromData_CALIB_01(eESCLPowerOffConfirmTime,5);
	
	Calib_ESCLPowerOffSurgeCurrentTime = Time_ms(60u);
	Set_EepromData_CALIB_01(eESCLPowerOffSurgeCurrentTime,6);
	
	Calib_ESCLStatusByPowerOnTimeoutTime = Time_ms(200u);
	Set_EepromData_CALIB_01(eESCLStatusByPowerOnTimeoutTime,20);
	
	Calib_ESCLStatusReqAfterCommandTime = Time_ms(30u);
	Set_EepromData_CALIB_01(eESCLStatusReqAfterCommandTime,3);
	
	Calib_ESCLStatusRespTimeoutTime = Time_ms(70u);
	Set_EepromData_CALIB_01(eESCLStatusRespTimeoutTime,7);
	
	Calib_ESCLUnlockTimeoutTime = Time_sec(3u);
	Set_EepromData_CALIB_01(eESCLUnlockTimeoutTime,3);
	
	Calib_FastRestartValidityTime = Time_sec(30u);
	Set_EepromData_CALIB_01(eFastRestartValidityTime,30);
	
	Calib_FOBAuthValidityTime = Time_sec(30u);
	Set_EepromData_CALIB_01(eFOBAuthValidityTime,30);
	
	Calib_FOBPreAuthValidityTime = Time_sec(30u);
	Set_EepromData_CALIB_01(eFOBPreAuthValidityTime,30);
	
	Calib_GasolineMaxCrankingTemp1 = 0x2C;
	Set_EepromData_CALIB_01(eGasolineMaxCrankingTemp1,0x2C);
	
	Calib_GasolineMaxCrankingTemp2 = 0x3F;
	Set_EepromData_CALIB_01(eGasolineMaxCrankingTemp2,0x3F);
	
	Calib_GasolineMaxCrankingTemp3 = 0x75;
	Set_EepromData_CALIB_01(eGasolineMaxCrankingTemp3,0x75);
	
	Calib_GasolineMaxCrankingTemp4 = 0xFE;
	Set_EepromData_CALIB_01(eGasolineMaxCrankingTemp4,0xFE);
	
	Calib_GasolineMaxCrankingTempErr = 0xFF;
	Set_EepromData_CALIB_01(eGasolineMaxCrankingTempErr,0xFF);
	
	Calib_GasolineMaxCrankingTime1 = Time_sec(25u);
	Set_EepromData_CALIB_01(eGasolineMaxCrankingTime1,25);
	
	Calib_GasolineMaxCrankingTime2 = Time_sec(20u);
	Set_EepromData_CALIB_01(eGasolineMaxCrankingTime2,20);
	
	Calib_GasolineMaxCrankingTime3 = Time_sec(15u);
	Set_EepromData_CALIB_01(eGasolineMaxCrankingTime3,15);
	
	Calib_GasolineMaxCrankingTime4 = Time_sec(10u);
	Set_EepromData_CALIB_01(eGasolineMaxCrankingTime4,10);
	
	Calib_GasolineMaxCrankingTimeErr = Time_sec(15u);
	Set_EepromData_CALIB_01(eGasolineMaxCrankingTimeErr,15);
	
	Calib_IGN1FallingFilteringTime = Time_ms(180u);
	Set_EepromData_CALIB_01(eIGN1FallingFilteringTime,18);
	
	Calib_InhibitPNSwitchStabilizationTime = Time_ms(80u);
	Set_EepromData_CALIB_01(eInhibitPNSwitchStabilizationTime,8);
	
	Calib_L_ESCLUnlockStabilizationTime = Time_ms(100u);
	Set_EepromData_CALIB_01(eL_ESCLUnlockStabilizationTime,10);

	Calib_MaxPossibleVehicleSpeedAcceleration = 20;
	Set_EepromData_CALIB_01(eMaxPossibleVehicleSpeedAcceleration,20);

	Calib_MinRPMToStopStarterActivation = 512;
	Set_EepromData_CALIB_01(eMinRPMToStopStarterActivation,16);

	Calib_NoESCLLockingStartedConfirmTime = Time_ms(100u);
	Set_EepromData_CALIB_01(eNoESCLLockingStartedConfirmTime,10);

	Calib_PostEmergencyStopIgnoreSSBTime = (CALIB_100MS)(Time_ms(1000u));
	Set_EepromData_CALIB_01(ePostEmergencyStopIgnoreSSBTime,10);

	Calib_PostEnableLineTime = Time_ms(30u);
	Set_EepromData_CALIB_01(ePostEnableLineTime,3);

	Calib_ReleaseStatusToEMSTime = (CALIB_100MS)(Time_ms(2000u));
	Set_EepromData_CALIB_01(eReleaseStatusToEMSTime,20);

	Calib_RKEInterFrameTimeout = Time_ms(150u);
	Set_EepromData_CALIB_01(eRKEInterFrameTimeout,15);
}

static void DefaultCalibration_02(void)
{	
	Calib_RPMPulsesPerRotation = 3;
	Set_EepromData_CALIB_02(eRPMPulsesPerRotation,3);
	
	Calib_SMK_PNSwOffWarningDebouncingTime = Time_ms(400u);
	Set_EepromData_CALIB_02(eSMK_PNSwOffWarningDebouncingTime,40);
	
	Calib_SMKBatteryDischargeDelayTime = Time_ms(500u);
	Set_EepromData_CALIB_02(eSMKBatteryDischargeDelayTime,50);
	
	Calib_SSB_ConsistencyFailure_dec_step = 8;
	Set_EepromData_CALIB_02(eSSB_ConsistencyFailure_dec_step,8);
	
	Calib_SSB_ConsistencyFailure_inc_step = 16;
	Set_EepromData_CALIB_02(eSSB_ConsistencyFailure_inc_step,16);
	
	Calib_SSB_ConsistencyFailure_max = 16;
	Set_EepromData_CALIB_02(eSSB_ConsistencyFailure_max,16);
	
	Calib_SSB_EmergencyPressCount = 3;
	Set_EepromData_CALIB_02(eSSB_EmergencyPressCount,3);
	
	Calib_SSB_EmergencyPressCountDuration = Time_sec(3u);
	Set_EepromData_CALIB_02(eSSB_EmergencyPressCountDuration,3);
	
	Calib_SSB_MaxTimeDifference = Time_ms(500u);
	Set_EepromData_CALIB_02(eSSB_MaxTimeDifference,50);
	
	Calib_SSB_LimpHomeCrankingTime = Time_sec(10u);
	Set_EepromData_CALIB_02(eSSB_LimpHomeCrankingTime,10);
	
	Calib_SSB_LimpHomePressConfirmedTime = Time_sec(10u);
	Set_EepromData_CALIB_02(eSSB_LimpHomePressConfirmedTime,10);
	
	Calib_SSB_LongPressDuration = (CALIB_100MS)(Time_ms(2000u));
	Set_EepromData_CALIB_02(eSSB_LongPressDuration,20);
	
	Calib_TPAuthValidityTime = Time_sec(30u);
	Set_EepromData_CALIB_02(eTPAuthValidityTime,30);
	
	Calib_TPPreAuthValidityTime = Time_sec(30u);
	Set_EepromData_CALIB_02(eTPPreAuthValidityTime,30);
	
	Calib_VehicleSpeedPulsesPerSecond_ABS = DEF_CALIB_VehicleSpeedPulsesPerSecond_ABS;
	Set_EepromData_CALIB_02(eVehicleSpeedPulsesPerSecond_ABS,DEF_CALIB_VehicleSpeedPulsesPerSecond_ABSeep);
		
	Calib_WaitForAuthenticationTime = (CALIB_100MS)(Time_ms(2000u));
	Set_EepromData_CALIB_02(eWaitForAuthenticationTime,20);
	
	Calib_WelcomeLightAuthPeriodicTime = Time_sec(3u);
	Set_EepromData_CALIB_02(eWelcomeLightAuthPeriodicTime,3);
	
	Calib_WelcomeLightFobAwayMaxDurationTime = Time_min(10L);
	Set_EepromData_CALIB_02(eWelcomeLightFobAwayMaxDurationTime,10);

	Calib_WelcomeLightFobAwayPeriodTime = Time_sec(3u);
	Set_EepromData_CALIB_02(eWelcomeLightFobAwayPeriodTime,3);

	Calib_WelcomeLightAwayPeriodTime = Time_ms(480u);
	Set_EepromData_CALIB_02(eWelcomeLightFobAwayPeriodTime,48);
	
	Calib_WelcomeLightFobNotFoundCntMax = 3;
	Set_EepromData_CALIB_02(eWelcomeLightFobNotFoundCntMax,3);
	
	Calib_WelcomeLightLongPeriodDurationTime = DEF_CALIB_WelcomeLightLongPeriodDurationTime;
	Set_EepromData_CALIB_02(eWelcomeLightLongPeriodDurationTime_1,DEF_CALIB_WelcomeLightLongPeriodDurationTime1);
	Set_EepromData_CALIB_02(eWelcomeLightLongPeriodDurationTime_2,DEF_CALIB_WelcomeLightLongPeriodDurationTime2);
	
	Calib_WelcomeLightLongPeriodTime = Time_ms(480u);
	Set_EepromData_CALIB_02(eWelcomeLightLongPeriodTime,48);
	
	Calib_WelcomeLightOnTime = Time_sec(15u);
	Set_EepromData_CALIB_02(eWelcomeLightOnTime,15);
	
	Calib_WelcomeLightShortPeriodDurationTime = DEF_CALIB_WelcomeLightShortPeriodDurationTime;
	Set_EepromData_CALIB_02(eWelcomeLightShortPeriodDurationTime_1,DEF_CALIB_WelcomeLightShortPeriodDurationTime1);
	Set_EepromData_CALIB_02(eWelcomeLightShortPeriodDurationTime_2,DEF_CALIB_WelcomeLightShortPeriodDurationTime2);
	
	Calib_WelcomeLightShortPeriodTime = Time_ms(480u);
	Set_EepromData_CALIB_02(eWelcomeLightShortPeriodTime,48);
	
	Calib_TransponderLocking = 30;
	Set_EepromData_CALIB_02(eTransponderLocking,30);
	
	Calib_PostEMSRequestTime = (CALIB_100MS)(Time_ms(2000u));
	Set_EepromData_CALIB_02(ePostEMSRequestTime,20);
	
	Calib_SMK_NoFobTPStartIndicatorTime = (CALIB_100MS)(Time_ms(1000));
	Set_EepromData_CALIB_02(eSMK_NoFobTPStartIndicatorTime,10);
	
	Calib_SSB_WarningDelayTime = Time_ms(50u);
	Set_EepromData_CALIB_02(eSSB_WarningDelayTime,5);

	Calib_MaxEMSResponseTime = (CALIB_100MS)(Time_ms(1400u));
	Set_EepromData_CALIB_02(eMaxEMSResponseTime,14);

	Calib_EngineGlowLampStatusforDieselTime = Time_sec(20u);
	Set_EepromData_CALIB_02(eEngineGlowLampStatusforDieselTime,20);

	Calib_TeleCrankingVSLimit = 5;
	Set_EepromData_CALIB_02(eTeleCrankingVSLimit,5);

	Calib_MaxTeleEngineRunningTimeGasoline = Time_min(10L);
	Set_EepromData_CALIB_02(eMaxTeleEngineRunningTimeGasoline,10);

	Calib_MaxTeleEngineRunningTimeDiesel = Time_min(10L);
	Set_EepromData_CALIB_02(eMaxTeleEngineRunningTimeDiesel,10);

	Calib_MaxTeleEngineRunningTimeLPI = Time_min(10L);
	Set_EepromData_CALIB_02(eMaxTeleEngineRunningTimeLPI,10);

	Calib_FailResClearWaitingTime = Time_ms(150u);
	Set_EepromData_CALIB_02(eFailResClearWaitingTime,15);

	Calib_WaitingAuthResponseTime = Time_ms(500u);
	Set_EepromData_CALIB_02(eWaitingAuthResponseTime,50);	

	Calib_MaxTeleCrankingTime = Time_sec(10u);
	Set_EepromData_CALIB_02(eMaxTeleCrankingTime,10);
	
	Calib_TeleDoorOpenMaxTime = Time_sec(30u);
	Set_EepromData_CALIB_02(eTeleDoorOpenMaxTime,30);

	Calib_DelayBetweenIgn1OffTeleOff = Time_sec(2u);
	Set_EepromData_CALIB_02(eDelayBetweenIgn1OffTeleOff,2);

	Calib_WaitingPedalInputTime = Time_ms(500u);
	Set_EepromData_CALIB_02(eWaitingPedalInputTime,50);	

	Calib_HandFreeTrunkOnceBuzzerOnTime = Time_ms(300u);
	Set_EepromData_CALIB_02(eHandFreeTrunkOnceBuzzerOnTime,30);
	
	Calib_HandFreeTrunkTwiceBuzzerOnTime = Time_ms(500u);
	Set_EepromData_CALIB_02(eHandFreeTrunkTwiceBuzzerOnTime,50);

	Calib_HandFreeTrunkTwiceBuzzerOffTime = Time_ms(500u);
	Set_EepromData_CALIB_02(eHandFreeTrunkTwiceBuzzerOffTime,50);

	Calib_BuzzerDelayTime = Time_ms(100u);
	Set_EepromData_CALIB_02(eBuzzerDelayTime,10);	
}


static void DefaultCalibration_03(void)
{
	Calib_RKESynchronizationCount = 255;
	Set_EepromData_CALIB_03(eRKESynchronizationCount,255);
	
	Calib_WelcomeLightLFSearchingDelayTime = Time_ms(50u);
	Set_EepromData_CALIB_03(eWelcomeLightLFSearchingDelayTime,5);	
	
	Calib_WelcomeLightAuthSearchingTime = Time_sec(30u);
	Set_EepromData_CALIB_03(eWelcomeLightAuthSearchingTime,30);	

	Calib_HandFreeTrunkFobNotFoundCntMax = 18;
	Set_EepromData_CALIB_03(eHandFreeTrunkFobNotFoundCntMax,18);

	Calib_HandFreeTrunkShortPeriodTime = Time_ms(480u);
	Set_EepromData_CALIB_03(eHandFreeTrunkShortPeriodTime,48);
	
	Calib_HandFreeTrunkLongPeriodTime = Time_ms(480u);
	Set_EepromData_CALIB_03(eHandFreeTrunkLongPeriodTime,48);

	Calib_GapTimeGeneratingTime = Time_ms(240u);
	Set_EepromData_CALIB_03(eGapTimeGeneratingTime,24);

	Calib_HandFreeTrunkShortPeriodDurationTime = DEF_CALIB_HandFreeTrunkShortPeriodDurationTime;
	Set_EepromData_CALIB_03(eHandFreeTrunkShortPeriodDurationTime_1,DEF_CALIB_HandFreeTrunkShortPeriodDurationTime1);
	Set_EepromData_CALIB_03(eHandFreeTrunkShortPeriodDurationTime_2,DEF_CALIB_HandFreeTrunkShortPeriodDurationTime2);
	
	Calib_HandFreeTrunkLongPeriodDurationTime = DEF_CALIB_HandFreeTrunkLongPeriodDurationTime;
	Set_EepromData_CALIB_03(eHandFreeTrunkLongPeriodDurationTime_1,DEF_CALIB_HandFreeTrunkLongPeriodDurationTime1);
	Set_EepromData_CALIB_03(eHandFreeTrunkLongPeriodDurationTime_2,DEF_CALIB_HandFreeTrunkLongPeriodDurationTime2);	

	Calib_HandFreeTrunkLFSearchingDelayTime = Time_ms(50u);
	Set_EepromData_CALIB_03(eHandFreeTrunkLFSearchingDelayTime,5);
	
	Calib_TrunkTailgateOpenWaitingTime = Time_sec(3u);
	Set_EepromData_CALIB_03(eTrunkTailgateOpenWaitingTime,3);

	Calib_JapSearchingReqCounter = 5;
	Set_EepromData_CALIB_03(eJapSearchingReqCounter,5);

	Calib_JapSearchingValidNb = 3;
	Set_EepromData_CALIB_03(eJapSearchingValidNb,3);

	Calib_HandFreeTrunkFobAwayMaxDurationTime = Time_min(10L);
	Set_EepromData_CALIB_03(eHandFreeTrunkFobAwayMaxDurationTime,10);
	
	Calib_GapTimeGenerationWithoutWelOptionTime = Time_sec(9u);
	Set_EepromData_CALIB_03(eGapTimeGenerationWithoutWelOptionTime,9);
	
	Calib_TrunkTailgateOpenFailNb = 2;
	Set_EepromData_CALIB_03(eTrunkTailgateOpenFailNb,2);

	Calib_Diag_PPositionFailureConfirmTime = Time_sec(10u);
	Set_EepromData_CALIB_03(eDiag_PPositionFailureConfirmTime,10);

	Calib_ESCL_PPositionFailureConfirmTime = Time_sec(10u);
	Set_EepromData_CALIB_03(eESCL_PPositionFailureConfirmTime,10);

	Calib_Diag_AccessInputConfirmTime = Time_sec(60u);
	Set_EepromData_CALIB_03(eDiag_AccessInputConfirmTime,60);

	Calib_VehicleSpeedPulsesPerSecond = DEF_CALIB_VehicleSpeedPulsesPerSecond;
	Set_EepromData_CALIB_03(eVehicleSpeedPulsesPerSecond,DEF_CALIB_VehicleSpeedPulsesPerSecondeep);	
	
	Calib_VehicleSpeedPulsesPerSecond_nonABS = DEF_CALIB_VehicleSpeedPulsesPerSecond_nonABS;
	Set_EepromData_CALIB_03(eVehicleSpeedPulsesPerSecond_nonABS,DEF_CALIB_VehicleSpeedPulsesPerSecond_nonABSeep);
			
	Calib_IdleStopActivationDelayTime = Time_ms(200u);
	Set_EepromData_CALIB_03(eIdleStopActivationDelayTime,20);

	Calib_IdleStopDeactivationDelayTime = Time_ms(700u);
	Set_EepromData_CALIB_03(eIdleStopDeactivationDelayTime,70);

	Calib_ClutchSWFailureDetectionTime = Time_sec(10u);
	Set_EepromData_CALIB_03(eClutchSWFailureDetectionTime,10);
	
	Calib_ClutchSWFailClear = 100;
	Set_EepromData_CALIB_03(eClutchSWFailClear,100);

	Calib_HazardOutputDurationTime = (CALIB_100MS)(Time_ms(1500u));
	Set_EepromData_CALIB_03(eHazardOutputDurationTime,15);

	Calib_MaxTeleCrankingTimeforFCEV = Time_sec(60u);
	Set_EepromData_CALIB_03(eMaxTeleCrankingTimeforFCEV,60);
	
	Calib_RSPACrankingDurationTime = Time_min(4L);
	Set_EepromData_CALIB_03(eRSPACrankingDurationTime,4);
	
	Calib_TeleESCLLockRequestTimeoutTime = Time_sec(6u);
	Set_EepromData_CALIB_03(eTeleESCLLockRequestTimeoutTime,6);
	
	Calib_WAL_PeriodSearchTime = Time_ms(480u);
	Set_EepromData_CALIB_03(eWAL_PeriodSearchTime,48);
	
	Calib_WAL_NoFobFoundMaxConseCount = 2u;
	Set_EepromData_CALIB_03(eWAL_NoFobFoundMaxConseCount,2);
	
	Calib_WAL_AutoLockTime = Time_min(3L);
	Set_EepromData_CALIB_03(eWAL_AutoLockTime,3);
	
	Calib_PassiveDrUnlockCmdClearTime = Time_ms(150u);
	Set_EepromData_CALIB_03(ePassiveDrUnlockCmdClearTime,15);
	
	Calib_PassiveDrLockCmdClearTime = Time_ms(150u);
	Set_EepromData_CALIB_03(ePassiveDrLockCmdClearTime,15);
	
	Calib_PassivePostionOutClearTime = Time_ms(150u);
	Set_EepromData_CALIB_03(ePassivePostionOutClearTime,15);

	Calib_RKEReSynchronizationCount = DEF_CALIB_RKEReSynchronizationCount;
	Set_EepromData_CALIB_03(eRKEReSynchronizationCount_1,DEF_CALIB_RKEReSynchronizationCount1);
	Set_EepromData_CALIB_03(eRKEReSynchronizationCount_2,DEF_CALIB_RKEReSynchronizationCount2);

	Calib_RKENoSynchronizationCount = DEF_CALIB_RKENoSynchronizationCount;
	Set_EepromData_CALIB_03(eRKENoSynchronizationCount_1,DEF_CALIB_RKENoSynchronizationCount1);
	Set_EepromData_CALIB_03(eRKENoSynchronizationCount_2,DEF_CALIB_RKENoSynchronizationCount2);

	Calib_WaitingRKETeleCrankingCmdTime = Time_sec(6u);
	Set_EepromData_CALIB_03(eWaitingRKETeleCrankingCmdTime,6);
	
	Calib_EVMaxCrankingTime = Time_sec(3u);
	Set_EepromData_CALIB_03(eEVMaxCrankingTime,3);
	
	Calib_WelcomeLightAwayPeriodCnt = 6;
	Set_EepromData_CALIB_03(eWelcomeLightAwayPeriodCnt,6);
	
	Calib_FCEVMaxCrankingTime = Time_sec(25u);
	Set_EepromData_CALIB_03(eFCEVMaxCrankingTime,25);

}


static void Setup_Calibration_01(void)
{
/*Diag Hex*/

/*01h*/	Calib_BatterySaving = Calib_min(Get_EepromData_CALIB_01(eBatterySaving));
/*02h*/	Calib_DelayBetweenIgn1OnStartOn = Calib_10ms(Get_EepromData_CALIB_01(eDelayBetweenIgn1OnStartOn));

/*03h*/	Calib_Diag_VehicleSpeedFailureConfirmTime = Calib_sec(Get_EepromData_CALIB_01(eDiag_VehicleSpeedFailureConfirmTime));
/*04h*/	Calib_DieselMaxCrankingTemp1 = Calib_1(Get_EepromData_CALIB_01(eDieselMaxCrankingTemp1));
/*05h*/	Calib_DieselMaxCrankingTemp2 = Calib_1(Get_EepromData_CALIB_01(eDieselMaxCrankingTemp2));
/*06h*/	Calib_DieselMaxCrankingTemp3 = Calib_1(Get_EepromData_CALIB_01(eDieselMaxCrankingTemp3));
/*07h*/	Calib_DieselMaxCrankingTemp4 = Calib_1(Get_EepromData_CALIB_01(eDieselMaxCrankingTemp4));
/*08h*/	Calib_DieselMaxCrankingTempErr = Calib_1(Get_EepromData_CALIB_01(eDieselMaxCrankingTempErr));
/*09h*/	Calib_DieselMaxCrankingTime1 = Calib_sec(Get_EepromData_CALIB_01(eDieselMaxCrankingTime1));
/*0Ah*/	Calib_DieselMaxCrankingTime2 = Calib_sec(Get_EepromData_CALIB_01(eDieselMaxCrankingTime2));
/*0Bh*/	Calib_DieselMaxCrankingTime3 = Calib_sec(Get_EepromData_CALIB_01(eDieselMaxCrankingTime3));
/*0Ch*/	Calib_DieselMaxCrankingTime4 = Calib_sec(Get_EepromData_CALIB_01(eDieselMaxCrankingTime4));
/*0Dh*/	Calib_DieselMaxCrankingTimeErr = Calib_sec(Get_EepromData_CALIB_01(eDieselMaxCrankingTimeErr));

/*0Eh*/	Calib_EngineGlowLampStatusforLPITime = Calib_sec(Get_EepromData_CALIB_01(eEngineGlowLampStatusforLPITime));
/*0Fh*/	Calib_ESCL_VehicleSpeedFailureConfirmTime = Calib_sec(Get_EepromData_CALIB_01(eESCL_VehicleSpeedFailureConfirmTime));
/*10h*/	Calib_ESCLCommandRespTimeoutTime = Calib_10ms(Get_EepromData_CALIB_01(eESCLCommandRespTimeoutTime));
/*11h*/	Calib_ESCLLearningNeutralizationTimeoutTime = Calib_sec(Get_EepromData_CALIB_01(eESCLLearningNeutralizationTimeoutTime));
/*12h*/	Calib_ESCLLockTimeoutTime = Calib_sec(Get_EepromData_CALIB_01(eESCLLockTimeoutTime));
/*13h*/	Calib_ESCLPowerOffConfirmTime = Calib_10ms(Get_EepromData_CALIB_01(eESCLPowerOffConfirmTime));
/*14h*/	Calib_ESCLPowerOffSurgeCurrentTime = Calib_10ms(Get_EepromData_CALIB_01(eESCLPowerOffSurgeCurrentTime));
/*15h*/	Calib_ESCLStatusByPowerOnTimeoutTime = Calib_10ms(Get_EepromData_CALIB_01(eESCLStatusByPowerOnTimeoutTime));
/*16h*/	Calib_ESCLStatusReqAfterCommandTime = Calib_10ms(Get_EepromData_CALIB_01(eESCLStatusReqAfterCommandTime));
/*17h*/	Calib_ESCLStatusRespTimeoutTime = Calib_10ms(Get_EepromData_CALIB_01(eESCLStatusRespTimeoutTime));
/*18h*/	Calib_ESCLUnlockTimeoutTime = Calib_sec(Get_EepromData_CALIB_01(eESCLUnlockTimeoutTime));

/*19h*/	Calib_FastRestartValidityTime = Calib_sec(Get_EepromData_CALIB_01(eFastRestartValidityTime));
/*1Ah*/	Calib_FOBAuthValidityTime = Calib_sec(Get_EepromData_CALIB_01(eFOBAuthValidityTime));
/*1Bh*/	Calib_FOBPreAuthValidityTime = Calib_sec(Get_EepromData_CALIB_01(eFOBPreAuthValidityTime));

/*1Ch*/	Calib_GasolineMaxCrankingTemp1 = Calib_1(Get_EepromData_CALIB_01(eGasolineMaxCrankingTemp1));
/*1Dh*/	Calib_GasolineMaxCrankingTemp2 = Calib_1(Get_EepromData_CALIB_01(eGasolineMaxCrankingTemp2));
/*1Eh*/	Calib_GasolineMaxCrankingTemp3 = Calib_1(Get_EepromData_CALIB_01(eGasolineMaxCrankingTemp3));
/*1Fh*/	Calib_GasolineMaxCrankingTemp4 = Calib_1(Get_EepromData_CALIB_01(eGasolineMaxCrankingTemp4));
/*20h*/	Calib_GasolineMaxCrankingTempErr = Calib_1(Get_EepromData_CALIB_01(eGasolineMaxCrankingTempErr));
/*21h*/	Calib_GasolineMaxCrankingTime1 = Calib_sec(Get_EepromData_CALIB_01(eGasolineMaxCrankingTime1));
/*22h*/	Calib_GasolineMaxCrankingTime2 = Calib_sec(Get_EepromData_CALIB_01(eGasolineMaxCrankingTime2));
/*23h*/	Calib_GasolineMaxCrankingTime3 = Calib_sec(Get_EepromData_CALIB_01(eGasolineMaxCrankingTime3));
/*24h*/	Calib_GasolineMaxCrankingTime4 = Calib_sec(Get_EepromData_CALIB_01(eGasolineMaxCrankingTime4));
/*25h*/	Calib_GasolineMaxCrankingTimeErr = Calib_sec(Get_EepromData_CALIB_01(eGasolineMaxCrankingTimeErr));

/*26h*/	Calib_IGN1FallingFilteringTime = Calib_10ms(Get_EepromData_CALIB_01(eIGN1FallingFilteringTime));
/*27h*/	Calib_InhibitPNSwitchStabilizationTime = Calib_10ms(Get_EepromData_CALIB_01(eInhibitPNSwitchStabilizationTime));
/*28h*/	Calib_L_ESCLUnlockStabilizationTime = Calib_10ms(Get_EepromData_CALIB_01(eL_ESCLUnlockStabilizationTime));
/*29h*/	Calib_MaxPossibleVehicleSpeedAcceleration = Calib_1(Get_EepromData_CALIB_01(eMaxPossibleVehicleSpeedAcceleration));
/*2Ah*/	Calib_MinRPMToStopStarterActivation = Calib_32(Get_EepromData_CALIB_01(eMinRPMToStopStarterActivation));
/*2Bh*/	Calib_NoESCLLockingStartedConfirmTime = Calib_10ms(Get_EepromData_CALIB_01(eNoESCLLockingStartedConfirmTime));
/*2Ch*/	Calib_PostEmergencyStopIgnoreSSBTime = Calib_100ms(Get_EepromData_CALIB_01(ePostEmergencyStopIgnoreSSBTime));
/*2Dh*/	Calib_PostEnableLineTime = Calib_10ms(Get_EepromData_CALIB_01(ePostEnableLineTime));
/*2Eh*/	Calib_ReleaseStatusToEMSTime = Calib_100ms(Get_EepromData_CALIB_01(eReleaseStatusToEMSTime));
/*2Fh*/	Calib_RKEInterFrameTimeout = Calib_10ms(Get_EepromData_CALIB_01(eRKEInterFrameTimeout));

}

static void Setup_Calibration_02(void)
{
/*30h*/	Calib_RPMPulsesPerRotation = Calib_1(Get_EepromData_CALIB_02(eRPMPulsesPerRotation));
/*31h*/	Calib_SMK_PNSwOffWarningDebouncingTime = Calib_10ms(Get_EepromData_CALIB_02(eSMK_PNSwOffWarningDebouncingTime));
/*32h*/	Calib_SMKBatteryDischargeDelayTime = Calib_10ms(Get_EepromData_CALIB_02(eSMKBatteryDischargeDelayTime));
/*33h*/	Calib_SSB_ConsistencyFailure_dec_step = Calib_1(Get_EepromData_CALIB_02(eSSB_ConsistencyFailure_dec_step));
/*34h*/	Calib_SSB_ConsistencyFailure_inc_step = Calib_1(Get_EepromData_CALIB_02(eSSB_ConsistencyFailure_inc_step));
/*35h*/	Calib_SSB_ConsistencyFailure_max = Calib_1(Get_EepromData_CALIB_02(eSSB_ConsistencyFailure_max));
/*36h*/	Calib_SSB_EmergencyPressCount = Calib_1(Get_EepromData_CALIB_02(eSSB_EmergencyPressCount));
/*37h*/	Calib_SSB_EmergencyPressCountDuration = Calib_sec(Get_EepromData_CALIB_02(eSSB_EmergencyPressCountDuration));
/*38h*/	Calib_SSB_MaxTimeDifference = Calib_10ms(Get_EepromData_CALIB_02(eSSB_MaxTimeDifference));
/*39h*/	Calib_SSB_LimpHomeCrankingTime = Calib_sec(Get_EepromData_CALIB_02(eSSB_LimpHomeCrankingTime));
/*3Ah*/	Calib_SSB_LimpHomePressConfirmedTime = Calib_sec(Get_EepromData_CALIB_02(eSSB_LimpHomePressConfirmedTime));
/*3Bh*/	Calib_SSB_LongPressDuration = Calib_100ms(Get_EepromData_CALIB_02(eSSB_LongPressDuration));
/*3Ch*/	Calib_TPAuthValidityTime = Calib_sec(Get_EepromData_CALIB_02(eTPAuthValidityTime));
/*3Dh*/	Calib_TPPreAuthValidityTime = Calib_sec(Get_EepromData_CALIB_02(eTPPreAuthValidityTime));
/*3Eh*/	Calib_VehicleSpeedPulsesPerSecond_ABS = (CALIB_0_001)(Calib_0_001(Get_EepromData_CALIB_02(eVehicleSpeedPulsesPerSecond_ABS)));
/*3Fh*/	Calib_WaitForAuthenticationTime = Calib_100ms(Get_EepromData_CALIB_02(eWaitForAuthenticationTime));
/*40h*/	Calib_WelcomeLightAuthPeriodicTime = Calib_sec(Get_EepromData_CALIB_02(eWelcomeLightAuthPeriodicTime));
/*41h*/	Calib_WelcomeLightFobAwayMaxDurationTime = Calib_min(Get_EepromData_CALIB_02(eWelcomeLightFobAwayMaxDurationTime));
/*42h*/	Calib_WelcomeLightFobAwayPeriodTime = Calib_sec(Get_EepromData_CALIB_02(eWelcomeLightFobAwayPeriodTime));
/*42h*/	Calib_WelcomeLightAwayPeriodTime = Calib_10ms(Get_EepromData_CALIB_02(eWelcomeLightFobAwayPeriodTime));
/*43h*/	Calib_WelcomeLightFobNotFoundCntMax = Calib_1(Get_EepromData_CALIB_02(eWelcomeLightFobNotFoundCntMax));
/*44h*/	Calib_WelcomeLightLongPeriodDurationTime = Calib_hrs(((u16)Get_EepromData_CALIB_02(eWelcomeLightLongPeriodDurationTime_1)<<8)|((u16)Get_EepromData_CALIB_02(eWelcomeLightLongPeriodDurationTime_2)));
/*46h*/	Calib_WelcomeLightLongPeriodTime = Calib_10ms(Get_EepromData_CALIB_02(eWelcomeLightLongPeriodTime));
/*47h*/	Calib_WelcomeLightOnTime = Calib_sec(Get_EepromData_CALIB_02(eWelcomeLightOnTime));
/*48h*/	Calib_WelcomeLightShortPeriodDurationTime = Calib_hrs(((u16)Get_EepromData_CALIB_02(eWelcomeLightShortPeriodDurationTime_1)<<8)|((u16)Get_EepromData_CALIB_02(eWelcomeLightShortPeriodDurationTime_2)));
/*4Ah*/	Calib_WelcomeLightShortPeriodTime = Calib_10ms(Get_EepromData_CALIB_02(eWelcomeLightShortPeriodTime));
/*4Bh*/	Calib_TransponderLocking = Calib_1(Get_EepromData_CALIB_02(eTransponderLocking));
/*4Ch*/	Calib_PostEMSRequestTime = Calib_100ms(Get_EepromData_CALIB_02(ePostEMSRequestTime));
/*4Dh*/	Calib_SMK_NoFobTPStartIndicatorTime = Calib_100ms(Get_EepromData_CALIB_02(eSMK_NoFobTPStartIndicatorTime));

/*4Eh*/	Calib_SSB_WarningDelayTime = Calib_10ms(Get_EepromData_CALIB_02(eSSB_WarningDelayTime));
/*4Fh*/	Calib_MaxEMSResponseTime = Calib_100ms(Get_EepromData_CALIB_02(eMaxEMSResponseTime));
/*50h*/	Calib_EngineGlowLampStatusforDieselTime = Calib_sec(Get_EepromData_CALIB_02(eEngineGlowLampStatusforDieselTime));
/*51h*/	Calib_TeleCrankingVSLimit = Calib_1(Get_EepromData_CALIB_02(eTeleCrankingVSLimit));
/*52h*/	Calib_MaxTeleEngineRunningTimeGasoline = Calib_min(Get_EepromData_CALIB_02(eMaxTeleEngineRunningTimeGasoline));
/*53h*/	Calib_MaxTeleEngineRunningTimeDiesel = Calib_min(Get_EepromData_CALIB_02(eMaxTeleEngineRunningTimeDiesel));
/*54h*/	Calib_MaxTeleEngineRunningTimeLPI = Calib_min(Get_EepromData_CALIB_02(eMaxTeleEngineRunningTimeLPI));
/*55h*/	Calib_FailResClearWaitingTime = Calib_10ms(Get_EepromData_CALIB_02(eFailResClearWaitingTime));
/*56h*/	Calib_WaitingAuthResponseTime = Calib_10ms(Get_EepromData_CALIB_02(eWaitingAuthResponseTime));
/*57h*/	Calib_MaxTeleCrankingTime = Calib_sec(Get_EepromData_CALIB_02(eMaxTeleCrankingTime));
/*58h*/	Calib_TeleDoorOpenMaxTime = Calib_sec(Get_EepromData_CALIB_02(eTeleDoorOpenMaxTime));
/*59h*/	Calib_DelayBetweenIgn1OffTeleOff = Calib_sec(Get_EepromData_CALIB_02(eDelayBetweenIgn1OffTeleOff));
/*5Ah*/	Calib_WaitingPedalInputTime = Calib_10ms(Get_EepromData_CALIB_02(eWaitingPedalInputTime));
/*5Bh*/	Calib_HandFreeTrunkOnceBuzzerOnTime = Calib_10ms(Get_EepromData_CALIB_02(eHandFreeTrunkOnceBuzzerOnTime));
/*5Ch*/	Calib_HandFreeTrunkTwiceBuzzerOnTime = Calib_10ms(Get_EepromData_CALIB_02(eHandFreeTrunkTwiceBuzzerOnTime));
/*5Dh*/	Calib_HandFreeTrunkTwiceBuzzerOffTime = Calib_10ms(Get_EepromData_CALIB_02(eHandFreeTrunkTwiceBuzzerOffTime));
/*5Eh*/	Calib_BuzzerDelayTime = Calib_10ms(Get_EepromData_CALIB_02(eBuzzerDelayTime));
}

static void Setup_Calibration_03(void)
{
/*5Fh*/	Calib_RKESynchronizationCount = Calib_1(Get_EepromData_CALIB_03(eRKESynchronizationCount));
/*60h*/	Calib_WelcomeLightLFSearchingDelayTime = Calib_10ms(Get_EepromData_CALIB_03(eWelcomeLightLFSearchingDelayTime));
/*61h*/	Calib_WelcomeLightAuthSearchingTime = Calib_sec(Get_EepromData_CALIB_03(eWelcomeLightAuthSearchingTime));
/*62h*/	Calib_HandFreeTrunkFobNotFoundCntMax = Calib_1(Get_EepromData_CALIB_03(eHandFreeTrunkFobNotFoundCntMax));
/*63h*/	Calib_HandFreeTrunkShortPeriodTime = Calib_10ms(Get_EepromData_CALIB_03(eHandFreeTrunkShortPeriodTime));
/*64h*/	Calib_HandFreeTrunkLongPeriodTime = Calib_10ms(Get_EepromData_CALIB_03(eHandFreeTrunkLongPeriodTime));
/*65h*/	Calib_GapTimeGeneratingTime = Calib_10ms(Get_EepromData_CALIB_03(eGapTimeGeneratingTime));
/*66h*/	Calib_HandFreeTrunkShortPeriodDurationTime = Calib_hrs(((u16)Get_EepromData_CALIB_03(eHandFreeTrunkShortPeriodDurationTime_1)<<8)|((u16)Get_EepromData_CALIB_03(eHandFreeTrunkShortPeriodDurationTime_2)));
/*68h*/	Calib_HandFreeTrunkLongPeriodDurationTime  = Calib_hrs(((u16)Get_EepromData_CALIB_03(eHandFreeTrunkLongPeriodDurationTime_1)<<8)|((u16)Get_EepromData_CALIB_03(eHandFreeTrunkLongPeriodDurationTime_2)));
/*6Ah*/	Calib_HandFreeTrunkLFSearchingDelayTime = Calib_10ms(Get_EepromData_CALIB_03(eHandFreeTrunkLFSearchingDelayTime));
/*6Bh*/	Calib_TrunkTailgateOpenWaitingTime = Calib_sec(Get_EepromData_CALIB_03(eTrunkTailgateOpenWaitingTime));
/*6Ch*/	Calib_JapSearchingReqCounter = Calib_1(Get_EepromData_CALIB_03(eJapSearchingReqCounter));
/*6Dh*/	Calib_JapSearchingValidNb = Calib_1(Get_EepromData_CALIB_03(eJapSearchingValidNb));
/*6Eh*/	Calib_HandFreeTrunkFobAwayMaxDurationTime = Calib_min(Get_EepromData_CALIB_03(eHandFreeTrunkFobAwayMaxDurationTime));
/*6Fh*/	Calib_GapTimeGenerationWithoutWelOptionTime = Calib_sec(Get_EepromData_CALIB_03(eGapTimeGenerationWithoutWelOptionTime));
/*70h*/	Calib_TrunkTailgateOpenFailNb = Calib_1(Get_EepromData_CALIB_03(eTrunkTailgateOpenFailNb));
/*71h*/	Calib_Diag_PPositionFailureConfirmTime = Calib_sec(Get_EepromData_CALIB_03(eDiag_PPositionFailureConfirmTime));
/*72h*/	Calib_ESCL_PPositionFailureConfirmTime = Calib_sec(Get_EepromData_CALIB_03(eESCL_PPositionFailureConfirmTime));
/*73h*/	Calib_Diag_AccessInputConfirmTime = Calib_sec(Get_EepromData_CALIB_03(eDiag_AccessInputConfirmTime));
/*74h*/	Calib_VehicleSpeedPulsesPerSecond = (CALIB_0_001)(Calib_0_001(Get_EepromData_CALIB_03(eVehicleSpeedPulsesPerSecond)));
/*75h*/	Calib_VehicleSpeedPulsesPerSecond_nonABS = (CALIB_0_01)(Calib_0_01(Get_EepromData_CALIB_03(eVehicleSpeedPulsesPerSecond_nonABS)));
/*76h*/	Calib_IdleStopActivationDelayTime = Calib_10ms(Get_EepromData_CALIB_03(eIdleStopActivationDelayTime));
/*77h*/	Calib_IdleStopDeactivationDelayTime = Calib_10ms(Get_EepromData_CALIB_03(eIdleStopDeactivationDelayTime));
/*78h*/	Calib_ClutchSWFailureDetectionTime = Calib_sec(Get_EepromData_CALIB_03(eClutchSWFailureDetectionTime));
/*79h*/	Calib_ClutchSWFailClear = Calib_1(Get_EepromData_CALIB_03(eClutchSWFailClear));
/*7Ah*/ 	Calib_HazardOutputDurationTime = Calib_100ms(Get_EepromData_CALIB_03(eHazardOutputDurationTime));
/*7Bh*/	Calib_MaxTeleCrankingTimeforFCEV = Calib_sec(Get_EepromData_CALIB_03(eMaxTeleCrankingTimeforFCEV));
/*7Ch*/	Calib_RSPACrankingDurationTime = Calib_min(Get_EepromData_CALIB_03(eRSPACrankingDurationTime));
/*7Dh*/	Calib_TeleESCLLockRequestTimeoutTime = Calib_sec(Get_EepromData_CALIB_03(eTeleESCLLockRequestTimeoutTime));
/*7Eh*/	Calib_WAL_PeriodSearchTime = Calib_10ms(Get_EepromData_CALIB_03(eWAL_PeriodSearchTime));
/*7Fh*/	Calib_WAL_NoFobFoundMaxConseCount = Calib_1(Get_EepromData_CALIB_03(eWAL_NoFobFoundMaxConseCount));
/*80h*/	Calib_WAL_AutoLockTime = Calib_min(Get_EepromData_CALIB_03(eWAL_AutoLockTime));
/*81h*/	Calib_PassiveDrUnlockCmdClearTime = Calib_10ms(Get_EepromData_CALIB_03(ePassiveDrUnlockCmdClearTime));
/*82h*/	Calib_PassiveDrLockCmdClearTime = Calib_10ms(Get_EepromData_CALIB_03(ePassiveDrLockCmdClearTime));
/*83h*/	Calib_PassivePostionOutClearTime = Calib_10ms(Get_EepromData_CALIB_03(ePassivePostionOutClearTime));
/*84h*/	Calib_RKEReSynchronizationCount = Calib_32(((u16)Get_EepromData_CALIB_03(eRKEReSynchronizationCount_1)<<8)|((u16)Get_EepromData_CALIB_03(eRKEReSynchronizationCount_2)));
/*66h*/	Calib_RKENoSynchronizationCount = Calib_32(((u16)Get_EepromData_CALIB_03(eRKENoSynchronizationCount_1)<<8)|((u16)Get_EepromData_CALIB_03(eRKENoSynchronizationCount_2)));
/*88h*/	Calib_WaitingRKETeleCrankingCmdTime = Calib_sec(Get_EepromData_CALIB_03(eWaitingRKETeleCrankingCmdTime));
/*89h*/	Calib_EVMaxCrankingTime = Calib_sec(Get_EepromData_CALIB_03(eEVMaxCrankingTime));
/*8Ah*/	Calib_WelcomeLightAwayPeriodCnt = Calib_1(Get_EepromData_CALIB_03(eWelcomeLightAwayPeriodCnt));
/*8Bh*/	Calib_FCEVMaxCrankingTime = Calib_sec(Get_EepromData_CALIB_03(eFCEVMaxCrankingTime));

}



FUNC(void, SWC_NvM_CODE) Set_DTC_RSM_LIN_BusFault_Present(u8 value)
{
	b_RSM_LIN_BUSOFF_Present = value;

}

FUNC(void, SWC_NvM_CODE) Get_DTC_RSM_LIN_BusFault_Present(u8 *out_value)
{
	*out_value =  b_RSM_LIN_BUSOFF_Present;
}

FUNC(void, SWC_NvM_CODE) Set_DTC_RSM_LIN_BusFault_Memorize(u8 value)
{
	b_RSM_LIN_BUSOFF_Memory= value;

}

FUNC(void, SWC_NvM_CODE) Get_DTC_RSM_LIN_BusFault_Memorize(u8 *out_value)
{
	*out_value =  b_RSM_LIN_BUSOFF_Memory;
}


FUNC(void, SWC_NvM_CODE) Get_EepromData_BCMOPTION(u8 in_value, tVAR *out_value)
{
	(*out_value).new_input = rub_EEPROM_BCMOPTION[in_value];
}

FUNC(void, SWC_NvM_CODE) Set_EepromData_BCMOPTION(u8 index, u8 in_value)
{
	rub_EEPROM_BCMOPTION[index] = in_value;		
	Set_EepromStoreEnable(EEBlk_BCMOPTION);
}

FUNC(void, SWC_NvM_CODE) Get_EepromData_BCMFUNCTION(u8 in_value, tVAR *out_value)
{
	(*out_value).new_input = rub_EEPROM_BCMFUNCTION[in_value];
}


FUNC(void, SWC_NvM_CODE) Set_EepromData_BCMFUNCTION(u8 index, u8 in_value)
{
	rub_EEPROM_BCMFUNCTION[index] = in_value;
	Set_EepromStoreEnable(EEBlk_BCMFUNCTION);
}

FUNC(void, SWC_NvM_CODE) Get_EepromData_PARTNUM(u8 in_value, tVAR *out_value)
{
	(*out_value).new_input = rub_EEPROM_PARTNUM[in_value];
}


FUNC(void, SWC_NvM_CODE) Set_EepromData_PARTNUM(u8 index, u8 in_value)
{
	rub_EEPROM_PARTNUM[index] = in_value;
	Set_EepromStoreEnable(EEBlk_PARTNUM);
}


FUNC(void, SWC_NvM_CODE) Get_EepromData_Calibration(u8 in_value, u8 *out_value)
{
	*out_value = rub_EEPROM_BCMCALIB[in_value];
}

FUNC(void, SWC_NvM_CODE) Set_EepromData_Calibration(u8 index, u8 in_value)
{
	rub_EEPROM_BCMCALIB[index] = in_value;		
	Set_EepromStoreEnable(EEBlk_BCMCALIB);
}



FUNC(void, SWC_NvM_CODE) Get_EepromData_Par_PAS(uint8 index, uint8 dest[])
{
    u8 i = 0;

    if(index == kPAS_ALL)
    {
		for(i=0; i<sizeEEBlk_PAS_ALL; i++)		{	dest[i] = rub_EEPROM_Par_PAS[i]; }
    }
    else
    {
		for(i=0; i< 6u; i++)					{	dest[index + i] = rub_EEPROM_Par_PAS[index + i];	}
    }
}

FUNC(void, SWC_NvM_CODE) Set_EepromData_Par_PAS(uint8 index, const uint8 src[])
{
	u8 i = 0;

    if(index == kPAS_ALL)
    {
		for(i=0; i<sizeEEBlk_PAS_ALL; i++)		{	rub_EEPROM_Par_PAS[i] = src[i]; }
    }
    else
    {
		for(i=0; i<6u; i++)						{	rub_EEPROM_Par_PAS[index + i] = src[index + i]; }
    }

	Set_EepromStoreEnable(EEBlk_Par_PAS);
}

FUNC(void, SWC_NvM_CODE) Set_Eeprom_PAS_DefaultData(void)
{
	rub_EEPROM_Par_PAS[0] = INDEX0_CMD0;
	rub_EEPROM_Par_PAS[1] = INDEX0_CMD1;
	rub_EEPROM_Par_PAS[2] = INDEX0_CMD2;
	rub_EEPROM_Par_PAS[3] = INDEX0_CMD3;
	rub_EEPROM_Par_PAS[4] = INDEX0_CMD4;
	rub_EEPROM_Par_PAS[5] = INDEX0_CMD5;
	rub_EEPROM_Par_PAS[6] = INDEX1_CMD0;
	rub_EEPROM_Par_PAS[7] = INDEX1_CMD1;
	rub_EEPROM_Par_PAS[8] = INDEX1_CMD2;
	rub_EEPROM_Par_PAS[9] = INDEX1_CMD3;
	rub_EEPROM_Par_PAS[10] = INDEX1_CMD4;
	rub_EEPROM_Par_PAS[11] = INDEX1_CMD5;
	rub_EEPROM_Par_PAS[12] = INDEX2_CMD0;
	rub_EEPROM_Par_PAS[13] = INDEX2_CMD1;
	rub_EEPROM_Par_PAS[14] = INDEX2_CMD2;
	rub_EEPROM_Par_PAS[15] = INDEX2_CMD3;
	rub_EEPROM_Par_PAS[16] = INDEX2_CMD4;
	rub_EEPROM_Par_PAS[17] = INDEX2_CMD5;
	rub_EEPROM_Par_PAS[18] = INDEX3_CMD0;
	rub_EEPROM_Par_PAS[19] = INDEX3_CMD1;
	rub_EEPROM_Par_PAS[20] = INDEX3_CMD2;
	rub_EEPROM_Par_PAS[21] = INDEX3_CMD3;
	rub_EEPROM_Par_PAS[22] = INDEX3_CMD4;
	rub_EEPROM_Par_PAS[23] = INDEX3_CMD5;
	rub_EEPROM_Par_PAS[24] = INDEX4_CMD0;
	rub_EEPROM_Par_PAS[25] = INDEX4_CMD1;
	rub_EEPROM_Par_PAS[26] = INDEX4_CMD2;
	rub_EEPROM_Par_PAS[27] = INDEX4_CMD3;
	rub_EEPROM_Par_PAS[28] = INDEX4_CMD4;
	rub_EEPROM_Par_PAS[29] = INDEX4_CMD5;
	rub_EEPROM_Par_PAS[30] = INDEX5_CMD0;
	rub_EEPROM_Par_PAS[31] = INDEX5_CMD1;
	rub_EEPROM_Par_PAS[32] = INDEX5_CMD2;
	rub_EEPROM_Par_PAS[33] = INDEX5_CMD3;
	rub_EEPROM_Par_PAS[34] = INDEX5_CMD4;
	rub_EEPROM_Par_PAS[35] = INDEX5_CMD5;
	rub_EEPROM_Par_PAS[36] = INDEX6_CMD0;
	rub_EEPROM_Par_PAS[37] = INDEX6_CMD1;
	rub_EEPROM_Par_PAS[38] = INDEX6_CMD2;
	rub_EEPROM_Par_PAS[39] = INDEX6_CMD3;
	rub_EEPROM_Par_PAS[40] = INDEX6_CMD4;
	rub_EEPROM_Par_PAS[41] = INDEX6_CMD5;
	rub_EEPROM_Par_PAS[42] = INDEX7_CMD0;
	rub_EEPROM_Par_PAS[43] = INDEX7_CMD1;
	rub_EEPROM_Par_PAS[44] = INDEX7_CMD2;
	rub_EEPROM_Par_PAS[45] = INDEX7_CMD3;
	rub_EEPROM_Par_PAS[46] = INDEX7_CMD4;
	rub_EEPROM_Par_PAS[47] = INDEX7_CMD5;
	rub_EEPROM_Par_PAS[48] = INDEX8_CMD0;
	rub_EEPROM_Par_PAS[49] = INDEX8_CMD1;

	rub_EEPROM_Par_PAS[50] = INDEX8_CMD2;
	rub_EEPROM_Par_PAS[51] = INDEX8_CMD3;
	rub_EEPROM_Par_PAS[52] = INDEX8_CMD4;
	rub_EEPROM_Par_PAS[53] = INDEX8_CMD5;
	rub_EEPROM_Par_PAS[54] = INDEX9_CMD0;
	rub_EEPROM_Par_PAS[55] = INDEX9_CMD1;
	rub_EEPROM_Par_PAS[56] = INDEX9_CMD2;
	rub_EEPROM_Par_PAS[57] = INDEX9_CMD3;
	rub_EEPROM_Par_PAS[58] = INDEX9_CMD4;
	rub_EEPROM_Par_PAS[59] = INDEX9_CMD5;
	rub_EEPROM_Par_PAS[60] = INDEX10_CMD0;
	rub_EEPROM_Par_PAS[61] = INDEX10_CMD1;
	rub_EEPROM_Par_PAS[62] = INDEX10_CMD2;
	rub_EEPROM_Par_PAS[63] = INDEX10_CMD3;
	rub_EEPROM_Par_PAS[64] = INDEX10_CMD4;
	rub_EEPROM_Par_PAS[65] = INDEX10_CMD5;
	rub_EEPROM_Par_PAS[66] = INDEX11_CMD0;
	rub_EEPROM_Par_PAS[67] = INDEX11_CMD1;
	rub_EEPROM_Par_PAS[68] = INDEX11_CMD2;
	rub_EEPROM_Par_PAS[69] = INDEX11_CMD3;
	rub_EEPROM_Par_PAS[70] = INDEX11_CMD4;
	rub_EEPROM_Par_PAS[71] = INDEX11_CMD5;
	rub_EEPROM_Par_PAS[72] = INDEX12_CMD0;
	rub_EEPROM_Par_PAS[73] = INDEX12_CMD1;
	rub_EEPROM_Par_PAS[74] = INDEX12_CMD2;
	rub_EEPROM_Par_PAS[75] = INDEX12_CMD3;
	rub_EEPROM_Par_PAS[76] = INDEX12_CMD4;
	rub_EEPROM_Par_PAS[77] = INDEX12_CMD5;
	rub_EEPROM_Par_PAS[78] = INDEX13_CMD0;
	rub_EEPROM_Par_PAS[79] = INDEX13_CMD1;
	rub_EEPROM_Par_PAS[80] = INDEX13_CMD2;
	rub_EEPROM_Par_PAS[81] = INDEX13_CMD3;
	rub_EEPROM_Par_PAS[82] = INDEX13_CMD4;
	rub_EEPROM_Par_PAS[83] = INDEX13_CMD5;
	rub_EEPROM_Par_PAS[84] = INDEX14_CMD0;
	rub_EEPROM_Par_PAS[85] = INDEX14_CMD1;
	rub_EEPROM_Par_PAS[86] = INDEX14_CMD2;
	rub_EEPROM_Par_PAS[87] = INDEX14_CMD3;
	rub_EEPROM_Par_PAS[88] = INDEX14_CMD4;
	rub_EEPROM_Par_PAS[89] = INDEX14_CMD5;
	rub_EEPROM_Par_PAS[90] = INDEX15_CMD0;
	rub_EEPROM_Par_PAS[91] = INDEX15_CMD1;
	rub_EEPROM_Par_PAS[92] = INDEX15_CMD2;
	rub_EEPROM_Par_PAS[93] = INDEX15_CMD3;
	rub_EEPROM_Par_PAS[94] = INDEX15_CMD4;
	rub_EEPROM_Par_PAS[95] = INDEX15_CMD5;
	rub_EEPROM_Par_PAS[96] = INDEX16_CMD0;
	rub_EEPROM_Par_PAS[97] = INDEX16_CMD1;
	rub_EEPROM_Par_PAS[98] = INDEX16_CMD2;
	rub_EEPROM_Par_PAS[99] = INDEX16_CMD3;

	rub_EEPROM_Par_PAS[100] = INDEX16_CMD4;
	rub_EEPROM_Par_PAS[101] = INDEX16_CMD5;
	rub_EEPROM_Par_PAS[102] = INDEX17_CMD0;
	rub_EEPROM_Par_PAS[103] = INDEX17_CMD1;
	rub_EEPROM_Par_PAS[104] = INDEX17_CMD2;
	rub_EEPROM_Par_PAS[105] = INDEX17_CMD3;
	rub_EEPROM_Par_PAS[106] = INDEX17_CMD4;
	rub_EEPROM_Par_PAS[107] = INDEX17_CMD5;
	rub_EEPROM_Par_PAS[108] = INDEX18_CMD0;
	rub_EEPROM_Par_PAS[109] = INDEX18_CMD1;
	rub_EEPROM_Par_PAS[110] = INDEX18_CMD2;
	rub_EEPROM_Par_PAS[111] = INDEX18_CMD3;
	rub_EEPROM_Par_PAS[112] = INDEX18_CMD4;
	rub_EEPROM_Par_PAS[113] = INDEX18_CMD5;
	rub_EEPROM_Par_PAS[114] = INDEX19_CMD0;
	rub_EEPROM_Par_PAS[115] = INDEX19_CMD1;
	rub_EEPROM_Par_PAS[116] = INDEX19_CMD2;
	rub_EEPROM_Par_PAS[117] = INDEX19_CMD3;
	rub_EEPROM_Par_PAS[118] = INDEX19_CMD4;
	rub_EEPROM_Par_PAS[119] = INDEX19_CMD5;
	rub_EEPROM_Par_PAS[120] = INDEX20_CMD0;
	rub_EEPROM_Par_PAS[121] = INDEX20_CMD1;
	rub_EEPROM_Par_PAS[122] = INDEX20_CMD2;
	rub_EEPROM_Par_PAS[123] = INDEX20_CMD3;
	rub_EEPROM_Par_PAS[124] = INDEX20_CMD4;
	rub_EEPROM_Par_PAS[125] = INDEX20_CMD5;
	rub_EEPROM_Par_PAS[126] = INDEX21_CMD0;
	rub_EEPROM_Par_PAS[127] = INDEX21_CMD1;
	rub_EEPROM_Par_PAS[128] = INDEX21_CMD2;
	rub_EEPROM_Par_PAS[129] = INDEX21_CMD3;
	rub_EEPROM_Par_PAS[130] = INDEX21_CMD4;
	rub_EEPROM_Par_PAS[131] = INDEX21_CMD5;
	rub_EEPROM_Par_PAS[132] = INDEX22_CMD0;
	rub_EEPROM_Par_PAS[133] = INDEX22_CMD1;
	rub_EEPROM_Par_PAS[134] = INDEX22_CMD2;
	rub_EEPROM_Par_PAS[135] = INDEX22_CMD3;
	rub_EEPROM_Par_PAS[136] = INDEX22_CMD4;
	rub_EEPROM_Par_PAS[137] = INDEX22_CMD5;
	rub_EEPROM_Par_PAS[138] = INDEX23_CMD0;
	rub_EEPROM_Par_PAS[139] = INDEX23_CMD1;
	rub_EEPROM_Par_PAS[140] = INDEX23_CMD2;
	rub_EEPROM_Par_PAS[141] = INDEX23_CMD3;
	rub_EEPROM_Par_PAS[142] = INDEX23_CMD4;
	rub_EEPROM_Par_PAS[143] = INDEX23_CMD5;
	rub_EEPROM_Par_PAS[144] = INDEX24_CMD0;
	rub_EEPROM_Par_PAS[145] = INDEX24_CMD1;
	rub_EEPROM_Par_PAS[146] = INDEX24_CMD2;
	rub_EEPROM_Par_PAS[147] = INDEX24_CMD3;
	rub_EEPROM_Par_PAS[148] = INDEX24_CMD4;
	rub_EEPROM_Par_PAS[149] = INDEX24_CMD5;

	rub_EEPROM_Par_PAS[150] = INDEX25_CMD0;
	rub_EEPROM_Par_PAS[151] = INDEX25_CMD1;
	rub_EEPROM_Par_PAS[152] = INDEX25_CMD2;
	rub_EEPROM_Par_PAS[153] = INDEX25_CMD3;
	rub_EEPROM_Par_PAS[154] = INDEX25_CMD4;
	rub_EEPROM_Par_PAS[155] = INDEX25_CMD5;
	rub_EEPROM_Par_PAS[156] = INDEX26_CMD0;
	rub_EEPROM_Par_PAS[157] = INDEX26_CMD1;
	rub_EEPROM_Par_PAS[158] = INDEX26_CMD2;
	rub_EEPROM_Par_PAS[159] = INDEX26_CMD3;
	rub_EEPROM_Par_PAS[160] = INDEX26_CMD4;
	rub_EEPROM_Par_PAS[161] = INDEX26_CMD5;
	rub_EEPROM_Par_PAS[162] = INDEX27_CMD0;
	rub_EEPROM_Par_PAS[163] = INDEX27_CMD1;
	rub_EEPROM_Par_PAS[164] = INDEX27_CMD2;
	rub_EEPROM_Par_PAS[165] = INDEX27_CMD3;
	rub_EEPROM_Par_PAS[166] = INDEX27_CMD4;
	rub_EEPROM_Par_PAS[167] = INDEX27_CMD5;
	rub_EEPROM_Par_PAS[168] = INDEX28_CMD0;
	rub_EEPROM_Par_PAS[169] = INDEX28_CMD1;
	rub_EEPROM_Par_PAS[170] = INDEX28_CMD2;
	rub_EEPROM_Par_PAS[171] = INDEX28_CMD3;
	rub_EEPROM_Par_PAS[172] = INDEX28_CMD4;
	rub_EEPROM_Par_PAS[173] = INDEX28_CMD5;
	rub_EEPROM_Par_PAS[174] = INDEX29_CMD0;
	rub_EEPROM_Par_PAS[175] = INDEX29_CMD1;
	rub_EEPROM_Par_PAS[176] = INDEX29_CMD2;
	rub_EEPROM_Par_PAS[177] = INDEX29_CMD3;
	rub_EEPROM_Par_PAS[178] = INDEX29_CMD4;
	rub_EEPROM_Par_PAS[179] = INDEX29_CMD5;
	rub_EEPROM_Par_PAS[180] = INDEX30_CMD0;
	rub_EEPROM_Par_PAS[181] = INDEX30_CMD1;
	rub_EEPROM_Par_PAS[182] = INDEX30_CMD2;
	rub_EEPROM_Par_PAS[183] = INDEX30_CMD3;
	rub_EEPROM_Par_PAS[184] = INDEX30_CMD4;
	rub_EEPROM_Par_PAS[185] = INDEX30_CMD5;
	rub_EEPROM_Par_PAS[186] = INDEX31_CMD0;
	rub_EEPROM_Par_PAS[187] = INDEX31_CMD1;
	rub_EEPROM_Par_PAS[188] = INDEX31_CMD2;
	rub_EEPROM_Par_PAS[189] = INDEX31_CMD3;
	rub_EEPROM_Par_PAS[190] = INDEX31_CMD4;
	rub_EEPROM_Par_PAS[191] = INDEX31_CMD5;
	rub_EEPROM_Par_PAS[192] = INDEX32_CMD0;
	rub_EEPROM_Par_PAS[193] = INDEX32_CMD1;
	rub_EEPROM_Par_PAS[194] = INDEX32_CMD2;
	rub_EEPROM_Par_PAS[195] = INDEX32_CMD3;
	rub_EEPROM_Par_PAS[196] = INDEX32_CMD4;
	rub_EEPROM_Par_PAS[197] = INDEX32_CMD5;
	rub_EEPROM_Par_PAS[198] = INDEX33_CMD0;
	rub_EEPROM_Par_PAS[199] = INDEX33_CMD1;

	rub_EEPROM_Par_PAS[200] = INDEX33_CMD2;
	rub_EEPROM_Par_PAS[201] = INDEX33_CMD3;
	rub_EEPROM_Par_PAS[202] = INDEX33_CMD4;
	rub_EEPROM_Par_PAS[203] = INDEX33_CMD5;
	rub_EEPROM_Par_PAS[204] = INDEX34_CMD0;
	rub_EEPROM_Par_PAS[205] = INDEX34_CMD1;
	rub_EEPROM_Par_PAS[206] = INDEX34_CMD2;
	rub_EEPROM_Par_PAS[207] = INDEX34_CMD3;
	rub_EEPROM_Par_PAS[208] = INDEX34_CMD4;
	rub_EEPROM_Par_PAS[209] = INDEX34_CMD5;
	rub_EEPROM_Par_PAS[210] = INDEX35_CMD0;
	rub_EEPROM_Par_PAS[211] = INDEX35_CMD1;
	rub_EEPROM_Par_PAS[212] = INDEX35_CMD2;
	rub_EEPROM_Par_PAS[213] = INDEX35_CMD3;
	rub_EEPROM_Par_PAS[214] = INDEX35_CMD4;
	rub_EEPROM_Par_PAS[215] = INDEX35_CMD5;
	rub_EEPROM_Par_PAS[216] = INDEX36_CMD0;
	rub_EEPROM_Par_PAS[217] = INDEX36_CMD1;
	rub_EEPROM_Par_PAS[218] = INDEX36_CMD2;
	rub_EEPROM_Par_PAS[219] = INDEX36_CMD3;
	rub_EEPROM_Par_PAS[220] = INDEX36_CMD4;
	rub_EEPROM_Par_PAS[221] = INDEX36_CMD5;
	rub_EEPROM_Par_PAS[222] = INDEX37_CMD0;
	rub_EEPROM_Par_PAS[223] = INDEX37_CMD1;
	rub_EEPROM_Par_PAS[224] = INDEX37_CMD2;
	rub_EEPROM_Par_PAS[225] = INDEX37_CMD3;
	rub_EEPROM_Par_PAS[226] = INDEX37_CMD4;
	rub_EEPROM_Par_PAS[227] = INDEX37_CMD5;
	rub_EEPROM_Par_PAS[228] = INDEX38_CMD0;
	rub_EEPROM_Par_PAS[229] = INDEX38_CMD1;
	rub_EEPROM_Par_PAS[230] = INDEX38_CMD2;
	rub_EEPROM_Par_PAS[231] = INDEX38_CMD3;
	rub_EEPROM_Par_PAS[232] = INDEX38_CMD4;
	rub_EEPROM_Par_PAS[233] = INDEX38_CMD5;
	rub_EEPROM_Par_PAS[234] = INDEX39_CMD0;
	rub_EEPROM_Par_PAS[235] = INDEX39_CMD1;
	rub_EEPROM_Par_PAS[236] = INDEX39_CMD2;
	rub_EEPROM_Par_PAS[237] = INDEX39_CMD3;
	rub_EEPROM_Par_PAS[238] = INDEX39_CMD4;
	rub_EEPROM_Par_PAS[239] = INDEX39_CMD5;

	Set_EepromStoreEnable(EEBlk_Par_PAS);
}

static void Read_NVM_JobResult(u32 rcv_source, u8 rcv_jobResult)
{
	if(rcv_jobResult == NVM_REQ_OK)
	{
		Init_Eeprom_OK(rcv_source);
	}

	else if((rcv_jobResult == NVM_REQ_NOT_OK) ||
			(rcv_jobResult == NVM_REQ_REDUNDANCY_FAILED) ||
			(rcv_jobResult == NVM_REQ_NV_INVALIDATED))
	{
		Clear_EepromBlock_Selection(rcv_source);
		Init_Eeprom_OK(rcv_source);
	}

	else if(rcv_jobResult == NVM_REQ_PENDING)
	{
	}

	else if(rcv_jobResult == NVM_REQ_INTEGRITY_FAILED)
	{
	}

	else if(rcv_jobResult == NVM_REQ_BLOCK_SKIPPED)
	{
	}

	else if(rcv_jobResult == NVM_REQ_CANCELED)
	{
	}

	else if(rcv_jobResult == NVM_REQ_RESTORED_FROM_ROM)
	{
	}

	else
	{
		/* MISRA */
	}

}

static void Write_NVM_JobResult(u32 rcv_source, u8 rcv_jobResult)
{
	if(rcv_jobResult == NVM_REQ_OK)
	{
		Clear_Update_Eeprom_Err(rcv_source);
		if(rcv_source == EEBlk_LEARNT)
		{
			SetX(b_EEPROM_EncryptedCodeWritingFailure, NVM_REQ_OK);
		}
	}

	else if((rcv_jobResult == NVM_REQ_NOT_OK) ||
			(rcv_jobResult == NVM_REQ_REDUNDANCY_FAILED))
	{
		Set_Update_Eeprom_Err(rcv_source);
		if(rcv_source == EEBlk_LEARNT)
		{
			SetX(b_EEPROM_EncryptedCodeWritingFailure, NVM_REQ_NOT_OK);
		}
	}

	else if(rcv_jobResult == NVM_REQ_PENDING)
	{
	}

	else if(rcv_jobResult == NVM_REQ_INTEGRITY_FAILED)
	{
	}

	else if(rcv_jobResult == NVM_REQ_BLOCK_SKIPPED)
	{
	}

	else if(rcv_jobResult == NVM_REQ_NV_INVALIDATED)
	{

	}

	else if(rcv_jobResult == NVM_REQ_CANCELED)
	{
	}

	else if(rcv_jobResult == NVM_REQ_RESTORED_FROM_ROM)
	{
	}

	else
	{
		/* MISRA */
	}
}


void Callback_NVM_DATA(u32 rcv_source, u8 rcv_serviceId, u8 rcv_jobResult)
{
	switch(rcv_serviceId)
	{
		
		case NVM_SETDATAINDEX_SID:
			/* user code*/
		break;

		case NVM_GETDATAINDEX_SID:
			/* user code*/
		break;

		case NVM_SETBLOCKPROTECTION_SID:
			/* user code*/
		break;

		case NVM_GETERRORSTATUS_SID:
			/* user code*/
		break;

		case NVM_SETRAMBLOCKSTATUS_SID:
			/* user code*/
		break;

		case NVM_READALL_SID:
			Read_NVM_JobResult(rcv_source, rcv_jobResult);
		break;
		
		case NVM_READBLOCK_SID:
			/* user code*/
		break;

		case NVM_WRITEBLOCK_SID:
			Write_NVM_JobResult(rcv_source, rcv_jobResult);
		break;

		case NVM_RESTOREBLOCKDEFAULTS_SID:
			/* user code*/
		break;

		case NVM_ERASENVBLOCK_SID:	
			/* user code*/
		break;

		case NVM_CANCELWRITEALL_SID:
			/* user code*/
		break;

		case NVM_INVALIDATENVBLOCK_SID:
			/* user code*/
		break;

		case NVM_WRITEALL_SID:
			/* user code*/
		break;

		case NVM_GETVERSIONINFO_SID: 
			/* user code*/
		break;

		case NVM_CANCELJOBS_SID:
			/* user code*/
		break;

		case NVM_SETBLOCKLOCKSTATUS_SID:	
			/* user code*/
		break;

		default:
		break;
	  }
}


