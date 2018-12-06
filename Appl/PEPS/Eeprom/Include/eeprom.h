/******************************************************************************
 * Project      	: 	SP2 IBU
 * File Name    	: 	Eeprom.h
 * Compiler			: 	Eclipse
 * Author       	: 	MyoungKwon Choi (mk210@seoyonelec.com)
 * Created at   	: 	2017-06-23
 * Code Editor		: 	Source Insight (Recomended Font : D2Coding / Size 10)
 * Revision     	: 	Version 0.1
 * Copyright  	 	: 	Copyright Seoyon Electronics Co.Ltd. All Rights Reserved
 * Description  	: 	
 *
 ******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------------------------*/
#ifndef	__EEPROM_H__
#define	__EEPROM_H__


/*******************************************************************************
	Declare External  Function
*******************************************************************************/
extern	void Get_Diag_FixedCode(u8 data[]);	/* Diag not used */
extern	void Get_FobSerial(u8 num, u8 serial[]);	/* Not used */
extern	u8 GetRKEDisableCnt(u8 FobNo);		/* Not used */
extern	u8 GetDiag_FactoryOption(u8 data[], u8 diag_enable);
extern	void Load_Calibration(void);


/*******************************************************************************
	Declare External  Variables
*******************************************************************************/
extern u8 Option_SMK[];

/* Internal Variables */
extern u8	rub_EEPROM_OPTION[];
extern u8	rub_EEPROM_FOB[];
extern u8	rub_EEPROM_FOB_RC[];
extern u8	rub_EEPROM_LEARNT[];
extern u8	rub_EEPROM_FUNCTION[];
extern u8	rub_EEPROM_FACTORY[];
extern u8	rub_EEPROM_PARTNUM[];
extern u8	rub_EEPROM_CALIB_01[];
extern u8	rub_EEPROM_CALIB_02[];
extern u8	rub_EEPROM_CALIB_03[];
extern u8	rub_EEPROM_DTC[];
extern u8	rub_EEPROM_BCMOPTION[];
extern u8	rub_EEPROM_BCMFUNCTION[];
extern u8  	rub_EEPROM_Manufacture[];
extern u8  	rub_EEPROM_HWVERSION[];
extern u8  	rub_EEPROM_BCMCALIB[];
extern u8  	rub_EEPROM_ECUINFO[];


extern CALIB_1		Calib_b_ABSOption;
extern CALIB_1		Calib_b_ABS_AutoSelectOption;
extern CALIB_1		Calib_b_BrakeInputDelayOption;
extern CALIB_1		Calib_b_CLUUSMOption;
extern CALIB_1		Calib_b_DCTOption;
extern CALIB_1		Calib_b_DeliveryModeOption;
extern CALIB_1		Calib_b_DieselOption;
extern CALIB_1		Calib_b_DomOption;
extern CALIB_1		Calib_b_DRIVETYPE;
extern CALIB_1		Calib_b_GloveBoxTrunkLockSw;
extern CALIB_1		Calib_b_HandFreeTrunkTGWorkingOption;
extern CALIB_1		Calib_b_HEVAutoSelectOption;
extern CALIB_1		Calib_b_HEVOption;
extern CALIB_1		Calib_b_LPIOption;
extern CALIB_1		Calib_b_MTOption;
extern CALIB_1		Calib_b_NAOption;
extern CALIB_1		Calib_b_PowerTrunkTGOption;
extern CALIB_1		Calib_b_PowerTrunkTGWorkingOption;
extern CALIB_1		Calib_b_SJB_DeliveryMode;
extern CALIB_1		Calib_b_StopLampFuseCheckOption;
extern CALIB_1		Calib_b_TailgateAutoSelectOption;
extern CALIB_1		Calib_b_TailgateOption;
extern CALIB_1		Calib_b_TwicePressRKESettingOption;
extern CALIB_1		Calib_b_TwoStepsUnlockOption;
extern CALIB_1		Calib_b_WelcomeLightWorkingOption;
extern CALIB_1		Calib_b_WelcomeMirrWorkingOption;
extern CALIB_1		Calib_CountryCfg;
extern CALIB_1		Calib_GearPosition;
extern CALIB_1		Calib_SBWOption;
extern CALIB_1		Calib_RheoStatOptSet;

extern CALIB_MIN	Calib_BatterySaving;
extern CALIB_10MS	Calib_BuzzerDelayTime;
extern CALIB_1		Calib_ClutchSWFailClear;
extern CALIB_SEC	Calib_ClutchSWFailureDetectionTime;
extern CALIB_SEC	Calib_DelayBetweenIgn1OffTeleOff;
extern CALIB_10MS	Calib_DelayBetweenIgn1OnStartOn;
extern CALIB_SEC	Calib_Diag_AccessInputConfirmTime;
extern CALIB_SEC	Calib_Diag_PPositionFailureConfirmTime;
extern CALIB_SEC	Calib_Diag_VehicleSpeedFailureConfirmTime;
extern CALIB_1		Calib_DieselMaxCrankingTemp1;
extern CALIB_1		Calib_DieselMaxCrankingTemp2;
extern CALIB_1		Calib_DieselMaxCrankingTemp3;
extern CALIB_1		Calib_DieselMaxCrankingTemp4;
extern CALIB_1		Calib_DieselMaxCrankingTempErr;
extern CALIB_SEC	Calib_DieselMaxCrankingTime1;
extern CALIB_SEC	Calib_DieselMaxCrankingTime2;
extern CALIB_SEC	Calib_DieselMaxCrankingTime3;
extern CALIB_SEC	Calib_DieselMaxCrankingTime4;
extern CALIB_SEC	Calib_DieselMaxCrankingTimeErr;
extern CALIB_SEC	Calib_EngineGlowLampStatusforDieselTime;
extern CALIB_SEC	Calib_EngineGlowLampStatusforLPITime;
extern CALIB_SEC	Calib_ESCL_PPositionFailureConfirmTime;
extern CALIB_SEC	Calib_ESCL_VehicleSpeedFailureConfirmTime;
extern CALIB_10MS	Calib_ESCLCommandRespTimeoutTime;
extern CALIB_SEC	Calib_ESCLLearningNeutralizationTimeoutTime;
extern CALIB_SEC	Calib_ESCLLockTimeoutTime;
extern CALIB_10MS	Calib_ESCLPowerOffConfirmTime;
extern CALIB_10MS	Calib_ESCLPowerOffSurgeCurrentTime;
extern CALIB_10MS	Calib_ESCLStatusByPowerOnTimeoutTime;
extern CALIB_10MS	Calib_ESCLStatusReqAfterCommandTime;
extern CALIB_10MS	Calib_ESCLStatusRespTimeoutTime;
extern CALIB_SEC	Calib_ESCLUnlockTimeoutTime;
extern CALIB_SEC	Calib_EVMaxCrankingTime;
extern CALIB_10MS	Calib_FailResClearWaitingTime;
extern CALIB_SEC	Calib_FastRestartValidityTime;
extern CALIB_SEC	Calib_FCEVMaxCrankingTime;
extern CALIB_SEC	Calib_FOBAuthValidityTime;
extern CALIB_SEC	Calib_FOBPreAuthValidityTime;
extern CALIB_10MS	Calib_GapTimeGeneratingTime;
extern CALIB_SEC	Calib_GapTimeGenerationWithoutWelOptionTime;
extern CALIB_1		Calib_GasolineMaxCrankingTemp1;
extern CALIB_1		Calib_GasolineMaxCrankingTemp2;
extern CALIB_1		Calib_GasolineMaxCrankingTemp3;
extern CALIB_1		Calib_GasolineMaxCrankingTemp4;
extern CALIB_1		Calib_GasolineMaxCrankingTempErr;
extern CALIB_SEC	Calib_GasolineMaxCrankingTime1;
extern CALIB_SEC	Calib_GasolineMaxCrankingTime2;
extern CALIB_SEC	Calib_GasolineMaxCrankingTime3;
extern CALIB_SEC	Calib_GasolineMaxCrankingTime4;
extern CALIB_SEC	Calib_GasolineMaxCrankingTimeErr;
extern CALIB_MIN	Calib_HandFreeTrunkFobAwayMaxDurationTime;
extern CALIB_1		Calib_HandFreeTrunkFobNotFoundCntMax;
extern CALIB_10MS	Calib_HandFreeTrunkLFSearchingDelayTime;
extern CALIB_HRS	Calib_HandFreeTrunkLongPeriodDurationTime;
extern CALIB_10MS	Calib_HandFreeTrunkLongPeriodTime;
extern CALIB_10MS	Calib_HandFreeTrunkOnceBuzzerOnTime;
extern CALIB_HRS	Calib_HandFreeTrunkShortPeriodDurationTime;
extern CALIB_10MS	Calib_HandFreeTrunkShortPeriodTime;
extern CALIB_10MS	Calib_HandFreeTrunkTwiceBuzzerOffTime;
extern CALIB_10MS	Calib_HandFreeTrunkTwiceBuzzerOnTime;
extern CALIB_100MS	Calib_HazardOutputDurationTime;
extern CALIB_SEC	Calib_HEVorEVMaxCrankingTime;
extern CALIB_10MS	Calib_IdleStopActivationDelayTime;
extern CALIB_10MS	Calib_IdleStopDeactivationDelayTime;
extern CALIB_10MS	Calib_IGN1FallingFilteringTime;
extern CALIB_10MS	Calib_InhibitPNSwitchStabilizationTime;
extern CALIB_1		Calib_InteriorAntNb;
extern CALIB_1		Calib_JapSearchingReqCounter;
extern CALIB_1		Calib_JapSearchingValidNb;
extern CALIB_10MS	Calib_L_ESCLUnlockStabilizationTime;
extern CALIB_100MS	Calib_MaxEMSResponseTime;
extern CALIB_1		Calib_MaxPossibleVehicleSpeedAcceleration;
extern CALIB_SEC	Calib_MaxTeleCrankingTime;
extern CALIB_SEC	Calib_MaxTeleCrankingTimeforFCEV;
extern CALIB_MIN	Calib_MaxTeleEngineRunningTimeDiesel;
extern CALIB_MIN	Calib_MaxTeleEngineRunningTimeGasoline;
extern CALIB_MIN	Calib_MaxTeleEngineRunningTimeLPI;
extern CALIB_32		Calib_MinRPMToStopStarterActivation;
extern CALIB_1		Calib_NB_RKE;
extern CALIB_10MS	Calib_NoESCLLockingStartedConfirmTime;
extern CALIB_100MS	Calib_PostEmergencyStopIgnoreSSBTime;
extern CALIB_100MS	Calib_PostEMSRequestTime;
extern CALIB_10MS	Calib_PostEnableLineTime;
extern CALIB_1		Calib_RegisteredFobNb;
extern CALIB_100MS	Calib_ReleaseStatusToEMSTime;
extern CALIB_10MS	Calib_RKEInterFrameTimeout;
extern CALIB_1		Calib_RKESynchronizationCount;
extern CALIB_32		Calib_RKENoSynchronizationCount;
extern CALIB_32		Calib_RKEReSynchronizationCount;
extern CALIB_1		Calib_RPMPulsesPerRotation;
extern CALIB_MIN	Calib_RSPACrankingDurationTime;
extern CALIB_10MS	Calib_RSPAPeriodDurationTime;
extern CALIB_10MS	Calib_SMK_PNSwOffWarningDebouncingTime;
extern CALIB_10MS	Calib_SMKBatteryDischargeDelayTime;
extern CALIB_1		Calib_SSB_ConsistencyFailure_dec_step;
extern CALIB_1		Calib_SSB_ConsistencyFailure_inc_step;
extern CALIB_1		Calib_SSB_ConsistencyFailure_max;
extern CALIB_1		Calib_SSB_EmergencyPressCount;
extern CALIB_SEC	Calib_SSB_EmergencyPressCountDuration;
extern CALIB_SEC	Calib_SSB_LimpHomeCrankingTime;
extern CALIB_SEC	Calib_SSB_LimpHomePressConfirmedTime;
extern CALIB_100MS	Calib_SSB_LongPressDuration;
extern CALIB_10MS	Calib_SSB_MaxTimeDifference;
extern CALIB_10MS	Calib_SSB_WarningDelayTime;
extern CALIB_1		Calib_TeleCrankingVSLimit;
extern CALIB_SEC	Calib_TeleDoorOpenMaxTime;
extern CALIB_SEC	Calib_TPAuthValidityTime;
extern CALIB_SEC	Calib_TPPreAuthValidityTime;
extern CALIB_1		Calib_TrunkTailgateOpenFailNb;
extern CALIB_SEC	Calib_TrunkTailgateOpenWaitingTime;
extern CALIB_0_01	Calib_VehicleSpeedPulsesPerSecond;
extern CALIB_0_001	Calib_VehicleSpeedPulsesPerSecond_ABS;
extern CALIB_0_01	Calib_VehicleSpeedPulsesPerSecond_nonABS;
extern CALIB_100MS	Calib_WaitForAuthenticationTime;
extern CALIB_10MS	Calib_WaitingAuthResponseTime;
extern CALIB_10MS	Calib_WaitingPedalInputTime;
extern CALIB_SEC	Calib_WaitingRKETeleCrankingCmdTime;
extern CALIB_SEC	Calib_WelcomeLightAuthPeriodicTime;
extern CALIB_SEC	Calib_WelcomeLightAuthSearchingTime;
extern CALIB_1		Calib_WelcomeLightAwayPeriodCnt;
extern CALIB_10MS	Calib_WelcomeLightAwayPeriodTime;
extern CALIB_MIN	Calib_WelcomeLightFobAwayMaxDurationTime;
extern CALIB_SEC	Calib_WelcomeLightFobAwayPeriodTime;
extern CALIB_1		Calib_WelcomeLightFobNotFoundCntMax;
extern CALIB_10MS	Calib_WelcomeLightLFSearchingDelayTime;
extern CALIB_HRS	Calib_WelcomeLightLongPeriodDurationTime;
extern CALIB_10MS	Calib_WelcomeLightLongPeriodTime;
extern CALIB_SEC	Calib_WelcomeLightOnTime;
extern CALIB_HRS	Calib_WelcomeLightShortPeriodDurationTime;
extern CALIB_10MS	Calib_WelcomeLightShortPeriodTime;
extern CALIB_1		Calib_TransponderLocking;
extern CALIB_100MS	Calib_SMK_NoFobTPStartIndicatorTime;
extern CALIB_SEC	Calib_TeleESCLLockRequestTimeoutTime;
extern CALIB_10MS	Calib_WAL_PeriodSearchTime;
extern CALIB_1		Calib_WAL_NoFobFoundMaxConseCount;
extern CALIB_MIN	Calib_WAL_AutoLockTime;
extern CALIB_10MS	Calib_PassiveDrUnlockCmdClearTime;
extern CALIB_10MS	Calib_PassiveDrLockCmdClearTime;
extern CALIB_10MS	Calib_PassivePostionOutClearTime;

extern CALIB_0_001 DEF_CALIB_VehicleSpeedPulsesPerSecond;
extern u8 DEF_CALIB_VehicleSpeedPulsesPerSecondeep;
extern CALIB_0_001 DEF_CALIB_VehicleSpeedPulsesPerSecond_ABS;
extern u8 DEF_CALIB_VehicleSpeedPulsesPerSecond_ABSeep;
extern CALIB_0_01 DEF_CALIB_VehicleSpeedPulsesPerSecond_nonABS;
extern u8 DEF_CALIB_VehicleSpeedPulsesPerSecond_nonABSeep;

/*******************************************************************************
	Define Constant
*******************************************************************************/
/* FOB register number for SMK */
#define	kMax_FOB					4u
#define	kMax_Option					6u

/* EEPROM Block Size */
#define	sizeEEBlk_OPTION			6u
#define	sizeEEBlk_FOB				26u
#define	sizeEEBlk_FOB_RC			20u
#define	sizeEEBlk_LEARNT			22u	/* add SKN 4byte */
#define	sizeEEBlk_FUNCTION			15u
#define	sizeEEBlk_CALIB_01			48u
#define	sizeEEBlk_CALIB_02			48u
#define	sizeEEBlk_CALIB_03			48u
#define	sizeEEBlk_DTC				42u
#define	sizeEEBlk_FACTORY			20u
#define	sizeEEBlk_PARTNUM			10u
#define	sizeEEBlk_BCMOPTION			15u
#define	sizeEEBlk_BCMFUNCTION		15u
#define	sizeEEBlk_MANUFACTURE		10u
#define	sizeEEBlk_HWVERSION			3u
#define	sizeEEBlk_BCMCALIB			10u
#define	sizeEEBlk_ECUINFO			10u

#define	sizeEEBlk_PAS_1				(50u)
#define	sizeEEBlk_PAS_2				(50u)
#define	sizeEEBlk_PAS_3				(50u)
#define	sizeEEBlk_PAS_4				(50u)
#define	sizeEEBlk_PAS_5				(40u)
#define	sizeEEBlk_PAS_ALL			(240u)
#define	sizeEEBlk_PAS_Data			(240u)

/* EEPROM Data Size */
#define	sizeEE_FOB					6u
#define	sizeEE_FOB_RC				2u

/* EEPROM Block define */
#define	EEBlk_OPTION			0x00000001U
#define	EEBlk_FOB				0x00000002U
#define	EEBlk_FOB_RC			0x00000004U
#define	EEBlk_LEARNT			0x00000008U
#define	EEBlk_FUNCTION			0x00000010U
#define	EEBlk_CALIB_01			0x00000020U
#define	EEBlk_CALIB_02			0x00000040U
#define	EEBlk_CALIB_03			0x00000080U
#define	EEBlk_DTC				0x00000100U
#define	EEBlk_FACTORY			0x00000200U
#define	EEBlk_PARTNUM			0x00000400U
#define	EEBlk_BCMOPTION			0x00000800U
#define	EEBlk_BCMFUNCTION		0x00001000U
#define EEBlk_MANUFACTURE		0x00002000U 
#define EEBlk_HWVERSION			0x00004000U
#define EEBlk_BCMCALIB			0x00008000U
#define EEBlk_ECUINFO			0x00010000U
#define	EEBlk_Par_PAS			0x00020000U
#define	EEBlk_NONE				0x00000000U
#define	EEBlk_ALL				0x0003FFFFU
#define	EEBlk_INIT_OK			0x0003FFFFU

/*******************************************************************************
	enum type variables
*******************************************************************************/
enum OPTION_OffsetList
{
/*00*/		eSMKStatus = 0,	
/*01~03*/	eOpt			
};

enum FOB_OffsetList
{
/*Fob#1 : 00~05*/
/*Fob#2 : 06~11*/
/*Fob#3 : 12~17*/
/*Fob#4 : 18~23*/

/*00~23*/	eFobInfo = 0	
};

enum FOB_RC_OffsetList
{
/*Fob#1 : 00~01*/
/*Fob#2 : 02~03*/
/*Fob#3 : 04~05*/
/*Fob#4 : 06~07*/
/*Fob#1_temp : 08~09*/
/*Fob#2_temp : 10~11*/
/*Fob#3_temp : 12~13*/
/*Fob#4_temp : 14~15*/

/*00~07*/	eFob_RCInfo = 0,
/*08~15*/	eFob_RCtempInfo = 8
};

enum LEARNT_OffsetList
{
/*00*/		eVehicleSerialStatus = 0,
/*01~03*/	eVehicleSerial = 1,
/*04*/		eVINStatus = 4,	
/*05~07*/	eVIN = 5,
/*08*/		ePINStatus = 8,
/*09~11*/	ePIN = 9,
/*12~14*/	eRegisterCnt = 12,
/*15*/ 		eRejectLearntMode = 15,
/*16*/ 		eRejectLearntCnt = 16,
/*17*/		eSKNStatus = 17,	/* Security Key Number */
/*18~20*/		eSKN = 18
};

enum FUNCTION_OffsetList
{
/*00*/		eHWErrCnt = 0,
/*01*/		eABSStatus,
/*02*/		eRheoStatOpSet,
/*03*/		eSBWOption,
/*04*/		eTerminalStep,
/*05*/		eSMKState,
/*06*/		eAuthSMK,
/*07*/		eAuthTP,
/*08*/		eAuthFast,
/*09*/		eUSMOpt,
/*10*/		eCountryCfg,
/*11*/		eCalib_GearPosition,
/*12*/		eDelivery,
/*13*/		eSJBDelivery
};

enum CALIB_01_OffsetList
{
/*00*/		eBatterySaving = 0,
/*01*/		eDelayBetweenIgn1OnStartOn,
/*02*/		eDiag_VehicleSpeedFailureConfirmTime,
/*03*/		eDieselMaxCrankingTemp1,
/*04*/		eDieselMaxCrankingTemp2,
/*05*/		eDieselMaxCrankingTemp3,
/*06*/		eDieselMaxCrankingTemp4,
/*07*/		eDieselMaxCrankingTempErr,
/*08*/		eDieselMaxCrankingTime1,
/*09*/		eDieselMaxCrankingTime2,
/*10*/		eDieselMaxCrankingTime3,
/*11*/		eDieselMaxCrankingTime4,
/*12*/		eDieselMaxCrankingTimeErr,
/*13*/		eEngineGlowLampStatusforLPITime,
/*14*/		eESCL_VehicleSpeedFailureConfirmTime,
/*15*/		eESCLCommandRespTimeoutTime,
/*16*/		eESCLLearningNeutralizationTimeoutTime,
/*17*/		eESCLLockTimeoutTime,
/*18*/		eESCLPowerOffConfirmTime,
/*19*/		eESCLPowerOffSurgeCurrentTime,
/*20*/		eESCLStatusByPowerOnTimeoutTime,
/*21*/		eESCLStatusReqAfterCommandTime,
/*22*/		eESCLStatusRespTimeoutTime,
/*23*/		eESCLUnlockTimeoutTime,
/*24*/		eFastRestartValidityTime,
/*25*/		eFOBAuthValidityTime,
/*26*/		eFOBPreAuthValidityTime,
/*27*/		eGasolineMaxCrankingTemp1,
/*28*/		eGasolineMaxCrankingTemp2,
/*29*/		eGasolineMaxCrankingTemp3,
/*30*/		eGasolineMaxCrankingTemp4,
/*31*/		eGasolineMaxCrankingTempErr,
/*32*/		eGasolineMaxCrankingTime1,
/*33*/		eGasolineMaxCrankingTime2,
/*34*/		eGasolineMaxCrankingTime3,
/*35*/		eGasolineMaxCrankingTime4,
/*36*/		eGasolineMaxCrankingTimeErr,
/*37*/		eIGN1FallingFilteringTime,
/*38*/		eInhibitPNSwitchStabilizationTime,
/*39*/		eL_ESCLUnlockStabilizationTime,
/*40*/		eMaxPossibleVehicleSpeedAcceleration,
/*41*/		eMinRPMToStopStarterActivation,
/*42*/		eNoESCLLockingStartedConfirmTime,
/*43*/		ePostEmergencyStopIgnoreSSBTime,
/*44*/		ePostEnableLineTime,
/*45*/		eReleaseStatusToEMSTime,
/*46*/		eRKEInterFrameTimeout,
/*47*/		eChangeCheck01

/* 1. Calib값 위치 이동 및 추가 시  calib_min_01, calib_max_01 데이터 반드시 수정할 것 */
/* 2. eChangeCheck01은 항상 CALIB_01_OffsetList 마지막에 위치할 것 */
};


enum CALIB_02_OffsetList
{
/*00*/		eRPMPulsesPerRotation = 0,
/*01*/		eSMK_PNSwOffWarningDebouncingTime,
/*02*/		eSMKBatteryDischargeDelayTime,
/*03*/		eSSB_ConsistencyFailure_dec_step,
/*04*/		eSSB_ConsistencyFailure_inc_step,
/*05*/		eSSB_ConsistencyFailure_max,
/*06*/		eSSB_EmergencyPressCount,
/*07*/		eSSB_EmergencyPressCountDuration,
/*08*/		eSSB_MaxTimeDifference,
/*09*/		eSSB_LimpHomeCrankingTime,
/*10*/		eSSB_LimpHomePressConfirmedTime,
/*11*/		eSSB_LongPressDuration,
/*12*/		eTPAuthValidityTime,
/*13*/		eTPPreAuthValidityTime,
/*14*/		eVehicleSpeedPulsesPerSecond_ABS,
/*15*/		eWaitForAuthenticationTime,
/*16*/		eWelcomeLightAuthPeriodicTime,
/*17*/		eWelcomeLightFobAwayMaxDurationTime,
/*18*/		eWelcomeLightFobAwayPeriodTime,
/*19*/		eWelcomeLightFobNotFoundCntMax,
/*20*/		eWelcomeLightLongPeriodDurationTime_1,
/*21*/		eWelcomeLightLongPeriodDurationTime_2,
/*22*/		eWelcomeLightLongPeriodTime,
/*23*/		eWelcomeLightOnTime,
/*24*/		eWelcomeLightShortPeriodDurationTime_1,
/*25*/		eWelcomeLightShortPeriodDurationTime_2,
/*26*/		eWelcomeLightShortPeriodTime,
/*27*/		eTransponderLocking,
/*28*/		ePostEMSRequestTime,
/*29*/		eSMK_NoFobTPStartIndicatorTime,
/*30*/		eSSB_WarningDelayTime,
/*31*/		eMaxEMSResponseTime,
/*32*/		eEngineGlowLampStatusforDieselTime,
/*33*/		eTeleCrankingVSLimit,
/*34*/		eMaxTeleEngineRunningTimeGasoline,
/*35*/		eMaxTeleEngineRunningTimeDiesel,
/*36*/		eMaxTeleEngineRunningTimeLPI,
/*37*/		eFailResClearWaitingTime,
/*38*/		eWaitingAuthResponseTime,
/*39*/		eMaxTeleCrankingTime,
/*40*/		eTeleDoorOpenMaxTime,
/*41*/		eDelayBetweenIgn1OffTeleOff,
/*42*/		eWaitingPedalInputTime,
/*43*/		eHandFreeTrunkOnceBuzzerOnTime,
/*44*/		eHandFreeTrunkTwiceBuzzerOnTime,
/*45*/		eHandFreeTrunkTwiceBuzzerOffTime,
/*46*/		eBuzzerDelayTime,
/*47*/		eChangeCheck02

/* 1. Calib값 위치 이동 및 추가 시  calib_min_02, calib_max_02 데이터 반드시 수정할 것 */
/* 2. eChangeCheck02은 항상 CALIB_02_OffsetList 마지막에 위치할 것 */
};

enum CALIB_03_OffsetList
{
/*00*/		eRKESynchronizationCount = 0,
/*01*/		eWelcomeLightLFSearchingDelayTime,
/*02*/		eWelcomeLightAuthSearchingTime,
/*03*/		eHandFreeTrunkFobNotFoundCntMax,
/*04*/		eHandFreeTrunkShortPeriodTime,
/*05*/		eHandFreeTrunkLongPeriodTime,
/*06*/		eGapTimeGeneratingTime,
/*07*/		eHandFreeTrunkShortPeriodDurationTime_1,
/*08*/		eHandFreeTrunkShortPeriodDurationTime_2,
/*09*/		eHandFreeTrunkLongPeriodDurationTime_1,
/*10*/		eHandFreeTrunkLongPeriodDurationTime_2,
/*11*/		eHandFreeTrunkLFSearchingDelayTime,
/*12*/		eTrunkTailgateOpenWaitingTime,
/*13*/		eJapSearchingReqCounter,
/*14*/		eJapSearchingValidNb,
/*15*/		eHandFreeTrunkFobAwayMaxDurationTime,
/*16*/		eGapTimeGenerationWithoutWelOptionTime,
/*17*/		eTrunkTailgateOpenFailNb,
/*18*/		eDiag_PPositionFailureConfirmTime,
/*19*/		eESCL_PPositionFailureConfirmTime,
/*20*/		eDiag_AccessInputConfirmTime,
/*21*/		eVehicleSpeedPulsesPerSecond,
/*22*/		eVehicleSpeedPulsesPerSecond_nonABS,
/*23*/		eIdleStopActivationDelayTime,
/*24*/		eIdleStopDeactivationDelayTime,
/*25*/		eClutchSWFailureDetectionTime,
/*26*/		eClutchSWFailClear,
/*27*/		eHazardOutputDurationTime,
/*28*/		eMaxTeleCrankingTimeforFCEV,
/*29*/		eRSPACrankingDurationTime,
/*30*/		eTeleESCLLockRequestTimeoutTime,
/*31*/		eWAL_PeriodSearchTime,
/*32*/		eWAL_NoFobFoundMaxConseCount,
/*33*/		eWAL_AutoLockTime,
/*34*/		ePassiveDrUnlockCmdClearTime,
/*35*/		ePassiveDrLockCmdClearTime,
/*36*/		ePassivePostionOutClearTime,
/*37*/		eRKEReSynchronizationCount_1,
/*38*/		eRKEReSynchronizationCount_2,
/*39*/		eRKENoSynchronizationCount_1,
/*40*/		eRKENoSynchronizationCount_2,
/*41*/		eWaitingRKETeleCrankingCmdTime,
/*42*/		eEVMaxCrankingTime,
/*43*/		eWelcomeLightAwayPeriodCnt,
/*44*/		eFCEVMaxCrankingTime,
/*45*/		eChangeCheck03

/* 1. Calib값 위치 이동 및 추가 시  calib_min_03, calib_max_03 데이터 반드시 수정할 것 */
/* 2. eChangeCheck03은 항상 CALIB_03_OffsetList 마지막에 위치할 것 */
};


enum DTC_OffsetList
{
/*00*/		ePPositionFailureMemorized = 0,
/*01*/		eVehicleSpeedFailureMemorized,
/*02*/		eDRVToggleButtonFailure,
/*03*/		eASTToggleButtonFailure,
/*04*/		eTrunkLidSWFailure,
/*05*/		eTailgateButtonFailure,
/*06*/		eESCL_GND_SCBFailure,
/*07*/		eESCL_GND_SCGFailure,
/*08*/		eESCL_BAT_SCBFailure,
/*09*/		eESCL_BAT_SCGFailure,
/*10*/		eACC_RLY_SCBFailure,
/*11*/		eACC_RLY_OLFailure,
/*12*/		eACC_PWR_SCBFailure,
/*13*/		eACC_PWR_SCGFailure,
/*14*/		eIGN1_RLY_SCBFailure,
/*15*/		eIGN1_PWR_SCBFailure,
/*16*/		eIGN1_PWR_SCGFailure,
/*17*/		eIGN1_RLY_OLFailure,
/*18*/		eIGN2_RLY_SCBFailure,
/*19*/		eIGN2_PWR_SCBFailure,
/*20*/		eIGN2_PWR_SCGFailure,
/*21*/		eIGN2_RLY_OLFailure,
/*22*/		eSTARTER_PWR_SCBFailure,
/*23*/		eSTARTER_PWR_SCGFailure,
/*24*/		eSTARTER_PNSW_SCBFailure,
/*25*/		eBusOff_BCAN,
/*26*/		eBusOff_CCAN,
/*27*/		eBCanFailure,
/*28*/		eEMSCommFailure,
/*29*/		eEMSCommTimeout,
/*30*/		eImmoTxFailure,
/*31*/		eSUBCommFailure,
/*32*/		eSUBCommTimeout,
/*33*/		ePPositionFailurePresent,
/*34*/		eVehicleSpeedFailurePresent,
/*35 - BCM */		eRSMLinErrorDTC,
/*40~41*/	eDTCClearCheck = 40
};
/* ACCESS_CAPACITIVE_SENSOR */
#define eDRVLockButtonFailure	eDRVToggleButtonFailure		/* Redefine */
#define eASTLockButtonFailure	eASTToggleButtonFailure		/* Redefine */

enum FACTORY_OffsetList
{
/*00*/ 		eManufacturingStatus = 0,
/*01~04*/ 	eManufacturingDate,
/*05*/		eECUSerialNumberStatus = 5,
/*06~13*/	eECUSerialNumber,
/*14*/		eSystemHWVersionStatus = 14,
/*15~18*/	eSystemHWVersion,
};

enum PARTNUM_OffsetList
{
/*00*/ 		ePartNumberStatus = 0,
/*05~09*/ 	ePartNumber = 5
};

enum UserOPTION_OffsetList
{
/*00*/		eOpt_Escort = 0,
/*01*/		eOpt_HornAnswer,
/*02*/		eOpt_TwoTurn,
/*03*/		eOpt_MECH,
/*04*/		eOpt_WiperAutoLight,
/*05*/		eOpt_HBA,
/*06*/		eOpt_RearWiper,
/*07*/		eOpt_SmartWel,
/*08*/		eOpt_DrWelOut,
/*09*/		eOpt_OSMirrFold,
/*10*/		kMax_BCMOption
};

enum FUNCTION_offsetList
{
/*00*/		eFunc_BurglarAlarm = 0,
/*01*/		eFunc_TailAutoCut,
/*02*/		eFunc_RemoteStart,
/*03*/		eFunc_TCU,
/*04*/		eFunc_DoorAssembled,
/*05*/		eFunc_AutoLightExistConfirm,
/*06*/		eFunc_CluUSMApplied,
/*07*/		eFunc_RainSnsrOption,
/*08*/		kMax_BCMFuncOption
};


/*******************************************************************************
	Define Macro
*******************************************************************************/
/* Eeprom Err */
#define Set_Update_Eeprom_Err(x)		(Update_eeprom_Err |= (x))
#define Get_Update_Eeprom_Err(x)		(Update_eeprom_Err&(x))
#define Clear_Update_Eeprom_Err(x)		(Update_eeprom_Err = Update_eeprom_Err&(EEBlk_ALL^(x)))

/* Eeprom Reload Err */
#define Set_Reload_Eeprom_Err(x)		(Reload_eeprom_Err |= (x))
#define	Get_Reload_Eeprom_Err(x)		(Reload_eeprom_Err&(x))
#define	Clear_Reload_Eeprom_Err(x)		(Reload_eeprom_Err = Reload_eeprom_Err&(EEBlk_ALL^(x)))
#define	RELOAD_ERROR					((EEP_reload_err==NVM_REQ_OK)?0:1)

/* Set Eeprom */
extern u32	StoreEepromEnableFlag;
#define	Set_EepromStoreEnable(x)		(StoreEepromEnableFlag |= (x))	
#define	Get_EepromStoreEnable(x)		(StoreEepromEnableFlag&(x))			
#define	Clear_EepromStoreEnable(x)		(StoreEepromEnableFlag = StoreEepromEnableFlag&(EEBlk_ALL^(x)))

#define	Set_EepromData_OPTION(x, y)		{rub_EEPROM_OPTION[x] = y;		Set_EepromStoreEnable(EEBlk_OPTION);}
#define	Set_EepromData_FOB(x, y)		{rub_EEPROM_FOB[x] = y;			Set_EepromStoreEnable(EEBlk_FOB);}
#define	Set_EepromData_FOB_RC(x, y)		{rub_EEPROM_FOB_RC[x] = y;		Set_EepromStoreEnable(EEBlk_FOB_RC);}
#define	Set_EepromData_LEARNT(x, y)		{rub_EEPROM_LEARNT[x] = y;		Set_EepromStoreEnable(EEBlk_LEARNT);}
#define	Set_EepromData_FUNCTION(x, y)	{rub_EEPROM_FUNCTION[x] = y;	Set_EepromStoreEnable(EEBlk_FUNCTION);}
#define	Set_EepromData_CALIB_01(x, y)	{rub_EEPROM_CALIB_01[x] = y;	Set_EepromStoreEnable(EEBlk_CALIB_01);}
#define	Set_EepromData_CALIB_02(x, y)	{rub_EEPROM_CALIB_02[x] = y;	Set_EepromStoreEnable(EEBlk_CALIB_02);}
#define	Set_EepromData_CALIB_03(x, y)	{rub_EEPROM_CALIB_03[x] = y;	Set_EepromStoreEnable(EEBlk_CALIB_03);}
#define	Set_EepromData_DTC(x, y)		{rub_EEPROM_DTC[x] = y;			Set_EepromStoreEnable(EEBlk_DTC);}
#define	Set_EepromData_FACTORY(x, y)	{rub_EEPROM_FACTORY[x] = y;		Set_EepromStoreEnable(EEBlk_FACTORY);}
/*#define	Set_EepromData_PARTNUM(x, y)	{rub_EEPROM_PARTNUM[x] = y;		Set_EepromStoreEnable(EEBlk_PARTNUM);} */

/* Get Eeprom */
#define	Get_EepromData_OPTION(x)		rub_EEPROM_OPTION[x]
#define	Get_EepromData_FOB(x)			rub_EEPROM_FOB[x]
#define	Get_EepromData_FOB_RC(x)		rub_EEPROM_FOB_RC[x]
#define	Get_EepromData_LEARNT(x)		rub_EEPROM_LEARNT[x]
#define	Get_EepromData_FUNCTION(x)		rub_EEPROM_FUNCTION[x]
#define	Get_EepromData_CALIB_01(x)		rub_EEPROM_CALIB_01[x]
#define	Get_EepromData_CALIB_02(x)		rub_EEPROM_CALIB_02[x]
#define	Get_EepromData_CALIB_03(x)		rub_EEPROM_CALIB_03[x]
#define Get_EepromData_DTC(x)			rub_EEPROM_DTC[x]
#define	Get_EepromData_FACTORY(x)		rub_EEPROM_FACTORY[x]
/* #define	Get_EepromData_PARTNUM(x)		rub_EEPROM_PARTNUM[x] */



extern	u8							Option_SMK[kMax_Option];

/*[1]*/
#define	Option_BattSave				((u8)(((Option_SMK[1]&kBit0)!=0)?1:0)) 
#define	Option_Deactivation			((u8)(((Option_SMK[1]&kBit1)!=0)?1:0)) 
#define	Option_Diesel_Memo			((u8)(((Option_SMK[1]&kBit2)!=0)?1:0))
#define	Option_Domestic_Memo		((u8)(((Option_SMK[1]&kBit3)!=0)?1:0)) 
#define	Option_ESCL_Memo			((u8)(((Option_SMK[1]&kBit4)!=0)?1:0)) 
#define	Option_MT_Memo				((u8)(((Option_SMK[1]&kBit5)!=0)?1:0)) 
#define	Option_NA_Memo				((u8)(((Option_SMK[1]&kBit6)!=0)?1:0))
#define	Option_ReadyToStartIllum	((u8)(((Option_SMK[1]&kBit7)!=0)?1:0))	/* 미사용 검토필요 by CMK */

/*[2]*/
#define	Option_TailGate				((u8)(((Option_SMK[2]&kBit0)!=0)?1:0)) 
#define	Option_ABS					((u8)(((Option_SMK[2]&kBit1)!=0)?1:0)) 
#define	Option_ToggleButton			((u8)(((Option_SMK[2]&kBit2)!=0)?1:0)) 
#define	Option_TrunkReopening		((u8)(((Option_SMK[2]&kBit3)!=0)?1:0))
#define	Option_TrunkWarning			((u8)(((Option_SMK[2]&kBit4)!=0)?1:0)) 
#define	Option_TwoStepsUnlock_Memo	((u8)(((Option_SMK[2]&kBit5)!=0)?1:0))
#define	Option_TwoStepsByRKE		((u8)(((Option_SMK[2]&kBit6)!=0)?1:0)) 
#define	Option_Handle_RHD			((u8)(((Option_SMK[2]&kBit7)!=0)?1:0))

/*[3]*/
#define	Option_Telecranking			((u8)(((Option_SMK[3]&kBit0)!=0)?1:0))
#define	Option_WelcomeLight_Memo	((u8)(((Option_SMK[3]&kBit1)!=0)?1:0))
#define	Option_LPIEngine			((u8)(((Option_SMK[3]&kBit2)!=0)?1:0))
#define	Option_HandsFree_Memo		((u8)(((Option_SMK[3]&kBit3)!=0)?1:0))
/*									((u8)(((Option_SMK[3]&kBit4)!=0)?1:0)) */ /* Not Used */
#define	Option_OFFIllum				((u8)(((Option_SMK[3]&kBit5)!=0)?1:0))
/* 									((u8)(((Option_SMK[3]&kBit6)!=0)?1:0)) */ /* Not Used */
#define	Option_ATTCKBraket			((u8)(((Option_SMK[3]&kBit7)!=0)?1:0))

/*[4]*/
#define	Option_DCT_Memo				((u8)(((Option_SMK[4]&kBit0)!=0)?1:0))
#define	Option_BrakeInputDelay		((u8)(((Option_SMK[4]&kBit1)!=0)?1:0))
#define	Option_WelcomelightWorking	((u8)(((Option_SMK[4]&kBit2)!=0)?1:0))
#define	Option_WelcomeMirrWorking	((u8)(((Option_SMK[4]&kBit3)!=0)?1:0))
#define	Option_HandsFreeWorking		((u8)(((Option_SMK[4]&kBit4)!=0)?1:0))
#define	Option_TwoStep_CANStandard	((u8)(((Option_SMK[4]&kBit5)!=0)?1:0)) /* C_TwoTrunUnlockOpt CAN 수신 차종 일 경우 On, 미수신 차종일 경우 Off */
#define	Option_PowerTrunkTG			((u8)(((Option_SMK[4]&kBit6)!=0)?1:0))
#define	Option_PowerTrunkTGWorking	((u8)(((Option_SMK[4]&kBit7)!=0)?1:0))

/*[5]*/
#define	Option_TwicePressRKESetting	((u8)(((Option_SMK[5]&kBit0)!=0)?1:0))
#define	Option_HEV_Memo				((u8)(((Option_SMK[5]&kBit1)!=0)?1:0))
#define	Option_EV_Memo				((u8)(((Option_SMK[5]&kBit2)!=0)?1:0))
#define	Option_RKETeleCranking		((u8)(((Option_SMK[5]&kBit3)!=0)?1:0))
#define	Option_RemoteWindow			((u8)(((Option_SMK[5]&kBit4)!=0)?1:0))
#define	Option_ASTAntRemove			((u8)(((Option_SMK[5]&kBit5)!=0)?1:0))	/* AST Door 안테나 미실장 차종일 경우 On (ex. HCI 일부 차종) */
#define	Option_ASTBtnRemove			((u8)(((Option_SMK[5]&kBit6)!=0)?1:0))	/* AST Door Toggle Button 미실장 차종일 경우 On (ex. HCI 일부 차종, YC) */



#define	Option_Diesel_Num					3u	/*0x03*/
#define	Option_Domestic_Num					4u	/*0x04*/
#define	Option_ESCL_Num						5u	/*0x05*/
#define	Option_MT_Num						6u	/*0x06*/
#define	Option_NA_Num						7u	/*0x07*/
#define	Option_TailGate_Num					9u	/*0x09*/
#define	Option_ABS_Num						10u	/*0x0A*/
#define	Option_TrunkReopening_Num			12u	/*0x0C*/
#define	Option_2Step_Num					14u	/*0x0E*/
#define Option_DRIVETYPE_Num				16u	/*0x10*/
#define	Option_WelcomeLight_Num				18u	/*0x12*/
#define	Option_LPIEngine_Num				19u	/*0x13*/
#define	Option_HandsFree_Num				20u	/*0x14*/

#define	Option_DCT_Num						25u	/*0x19*/
#define	Option_BrakeInputDelay_Num			26u	/*0x1A*/
#define	Option_WelcomelightWorking_Num		27u	/*0x1B*/
#define	Option_WelcomeMirrWorking_Num		28u	/*0x1C*/
#define	Option_HandsFreeTGWorking_Num		29u	/*0x1D*/
#define	Option_PowerTrunkTG_Num				31u	/*0x1F*/
#define	Option_PowerTrunkTGWorking_Num		32u	/*0x20*/
#define	Option_TwicePressRKESetting_Num		33u	/*0x21*/
#define	Option_HEV_Num						34u	/*0x22*/
#define	Option_EV_Num						35u	/*0x23*/
#define	Option_RKETeleCranking_Num			36u	/*0x24*/
#define	Option_RemoteWindow_Num				37u	/*0x25*/
#define	Option_ASTAntRemove_Num				38u	/*0x26*/
#define	Option_ASTBtnRemove_Num				39u	/*0x27*/


/* 파트넘버에 따른 옵션 셋팅 매크로 */
#define Set_CountryCfg(CountryName)		Set_EepromData_FUNCTION(eCountryCfg,CountryName)

/*[1]*/
#define Option_BattSave_ON				Option_SMK[1]=(u8)(Option_SMK[1]|(kBit0))
#define Option_BattSave_OFF				Option_SMK[1]=(u8)(Option_SMK[1]&(~(kBit0)))
#define Option_Deactivation_ON			Option_SMK[1]=(u8)(Option_SMK[1]|(kBit1))
#define Option_Deactivation_OFF			Option_SMK[1]=(u8)(Option_SMK[1]&(~(kBit1)))
#define Option_Diesel_ON				Option_SMK[1]=(u8)(Option_SMK[1]|(kBit2))
#define Option_Diesel_OFF				Option_SMK[1]=(u8)(Option_SMK[1]&(~(kBit2)))
#define Option_Domestic_ON				Option_SMK[1]=(u8)(Option_SMK[1]|(kBit3))
#define Option_Domestic_OFF				Option_SMK[1]=(u8)(Option_SMK[1]&(~(kBit3)))
#define Option_ESCL_ON					Option_SMK[1]=(u8)(Option_SMK[1]|(kBit4))
#define Option_ESCL_OFF					Option_SMK[1]=(u8)(Option_SMK[1]&(~(kBit4)))
#define Option_MT_ON					Option_SMK[1]=(u8)(Option_SMK[1]|(kBit5))
#define Option_MT_OFF					Option_SMK[1]=(u8)(Option_SMK[1]&(~(kBit5)))
#define Option_NA_ON					Option_SMK[1]=(u8)(Option_SMK[1]|(kBit6))
#define Option_NA_OFF					Option_SMK[1]=(u8)(Option_SMK[1]&(~(kBit6)))
#define Option_ReadyToStartIllum_ON		Option_SMK[1]=(u8)(Option_SMK[1]|(kBit7))
#define Option_ReadyToStartIllum_OFF	Option_SMK[1]=(u8)(Option_SMK[1]&(~(kBit7)))

/*[2]*/
#define Option_Tailgate_ON				Option_SMK[2]=(u8)(Option_SMK[2]|(kBit0))
#define Option_Tailgate_OFF				Option_SMK[2]=(u8)(Option_SMK[2]&(~(kBit0)))
#define Option_ABS_ON					Option_SMK[2]=(u8)(Option_SMK[2]|(kBit1))
#define Option_ABS_OFF					Option_SMK[2]=(u8)(Option_SMK[2]&(~(kBit1)))
#define Option_ToggleButton_ON			Option_SMK[2]=(u8)(Option_SMK[2]|(kBit2))
#define Option_ToggleButton_OFF			Option_SMK[2]=(u8)(Option_SMK[2]&(~(kBit2)))
#define Option_TrunkReopening_ON		Option_SMK[2]=(u8)(Option_SMK[2]|(kBit3))
#define Option_TrunkReopening_OFF		Option_SMK[2]=(u8)(Option_SMK[2]&(~(kBit3)))
#define Option_TrunkWarning_ON			Option_SMK[2]=(u8)(Option_SMK[2]|(kBit4))
#define Option_TrunkWarning_OFF			Option_SMK[2]=(u8)(Option_SMK[2]&(~(kBit4)))
#define Option_TwoStepsUnlock_ON		Option_SMK[2]=(u8)(Option_SMK[2]|(kBit5))
#define Option_TwoStepsUnlock_OFF		Option_SMK[2]=(u8)(Option_SMK[2]&(~(kBit5)))
#define Option_TwoStepsByRKE_ON			Option_SMK[2]=(u8)(Option_SMK[2]|(kBit6))
#define Option_TwoStepsByRKE_OFF		Option_SMK[2]=(u8)(Option_SMK[2]&(~(kBit6)))
#define Option_Handle_RHD_ON			Option_SMK[2]=(u8)(Option_SMK[2]|(kBit7))
#define Option_Handle_RHD_OFF			Option_SMK[2]=(u8)(Option_SMK[2]&(~(kBit7)))

/*[3]*/
#define Option_Telecranking_ON			Option_SMK[3]=(u8)(Option_SMK[3]|(kBit0))
#define Option_Telecranking_OFF			Option_SMK[3]=(u8)(Option_SMK[3]&(~(kBit0)))
#define Option_WelcomeLight_ON			Option_SMK[3]=(u8)(Option_SMK[3]|(kBit1))
#define Option_WelcomeLight_OFF			Option_SMK[3]=(u8)(Option_SMK[3]&(~(kBit1)))
#define Option_LPIEngine_ON				Option_SMK[3]=(u8)(Option_SMK[3]|(kBit2))
#define Option_LPIEngine_OFF			Option_SMK[3]=(u8)(Option_SMK[3]&(~(kBit2)))
#define Option_HandsFree_ON				Option_SMK[3]=(u8)(Option_SMK[3]|(kBit3))
#define Option_HandsFree_OFF			Option_SMK[3]=(u8)(Option_SMK[3]&(~(kBit3)))
/*										Option_SMK[3]=(u8)(Option_SMK[3]|(kBit4))			*/	/* Not Used */
/*										Option_SMK[3]=(u8)(Option_SMK[3]&(~(kBit4)))		*/	/* Not Used */
#define Option_OFFIllum_ON				Option_SMK[3]=(u8)(Option_SMK[3]|(kBit5))
#define Option_OFFIllum_OFF				Option_SMK[3]=(u8)(Option_SMK[3]&(~(kBit5)))
/* 		 								Option_SMK[3]=(u8)(Option_SMK[3]|(kBit6))			*/	/* Not Used */
/* 										Option_SMK[3]=(u8)(Option_SMK[3]&(~(kBit6)))		*/	/* Not Used */
#define Option_ATTCKBraket_ON			Option_SMK[3]=(u8)(Option_SMK[3]|(kBit7))
#define Option_ATTCKBraket_OFF			Option_SMK[3]=(u8)(Option_SMK[3]&(~(kBit7)))

/*[4]*/
#define Option_DCT_ON					Option_SMK[4]=(u8)(Option_SMK[4]|(kBit0))
#define Option_DCT_OFF					Option_SMK[4]=(u8)(Option_SMK[4]&(~(kBit0)))
#define Option_BrakeInputDelay_ON		Option_SMK[4]=(u8)(Option_SMK[4]|(kBit1))
#define Option_BrakeInputDelay_OFF		Option_SMK[4]=(u8)(Option_SMK[4]&(~(kBit1)))
#define Option_WelcomelightWorking_ON	Option_SMK[4]=(u8)(Option_SMK[4]|(kBit2))
#define Option_WelcomelightWorking_OFF	Option_SMK[4]=(u8)(Option_SMK[4]&(~(kBit2)))
#define Option_WelcomeMirrWorking_ON	Option_SMK[4]=(u8)(Option_SMK[4]|(kBit3))
#define Option_WelcomeMirrWorking_OFF	Option_SMK[4]=(u8)(Option_SMK[4]&(~(kBit3)))
#define Option_HandsFreeWorking_ON		Option_SMK[4]=(u8)(Option_SMK[4]|(kBit4))
#define Option_HandsFreeWorking_OFF		Option_SMK[4]=(u8)(Option_SMK[4]&(~(kBit4)))
#define Option_TwoStep_CANStandard_ON	Option_SMK[4]=(u8)(Option_SMK[4]|(kBit5))
#define Option_TwoStep_CANStandard_OFF	Option_SMK[4]=(u8)(Option_SMK[4]&(~(kBit5)))
#define Option_PowerTrunkTG_ON			Option_SMK[4]=(u8)(Option_SMK[4]|(kBit6))
#define Option_PowerTrunkTG_OFF			Option_SMK[4]=(u8)(Option_SMK[4]&(~(kBit6)))
#define Option_PowerTrunkTGWorking_ON	Option_SMK[4]=(u8)(Option_SMK[4]|(kBit7))
#define Option_PowerTrunkTGWorking_OFF	Option_SMK[4]=(u8)(Option_SMK[4]&(~(kBit7)))

/*[5]*/
#define Option_TwicePressRKESetting_ON	Option_SMK[5]=(u8)(Option_SMK[5]|(kBit0))
#define Option_TwicePressRKESetting_OFF	Option_SMK[5]=(u8)(Option_SMK[5]&(~(kBit0)))
#define Option_HEV_ON					Option_SMK[5]=(u8)(Option_SMK[5]|(kBit1))
#define Option_HEV_OFF					Option_SMK[5]=(u8)(Option_SMK[5]&(~(kBit1)))
#define Option_EV_ON					Option_SMK[5]=(u8)(Option_SMK[5]|(kBit2))
#define Option_EV_OFF					Option_SMK[5]=(u8)(Option_SMK[5]&(~(kBit2)))
#define Option_RKETeleCranking_ON		Option_SMK[5]=(u8)(Option_SMK[5]|(kBit3))
#define Option_RKETeleCranking_OFF		Option_SMK[5]=(u8)(Option_SMK[5]&(~(kBit3)))
#define Option_RemoteWndow_ON			Option_SMK[5]=(u8)(Option_SMK[5]|(kBit4))
#define Option_RemoteWndow_OFF			Option_SMK[5]=(u8)(Option_SMK[5]&(~(kBit4)))
#define Option_AST_SIDE_ANT_Remove_ON	Option_SMK[5]=(u8)(Option_SMK[5]|(kBit5))
#define Option_AST_SIDE_ANT_Remove_OFF	Option_SMK[5]=(u8)(Option_SMK[5]&(~(kBit5)))
#define Option_AST_SIDE_BTN_Remove_ON	Option_SMK[5]=(u8)(Option_SMK[5]|(kBit6))
#define Option_AST_SIDE_BTN_Remove_OFF	Option_SMK[5]=(u8)(Option_SMK[5]&(~(kBit6)))


/* BCM OPTION */

/* PAS Tuning Value	*/
/* 2018.04.04 승인도 값 반영 */
#define INDEX0_CMD0 			(0x01)
#define INDEX0_CMD1 			(0xC4)
#define INDEX0_CMD2 			(0x40)
#define INDEX0_CMD3 			(0x75)
#define INDEX0_CMD4 			(0xC3)
#define INDEX0_CMD5 			(0x89)
#define INDEX1_CMD0 			(0x88)
#define INDEX1_CMD1 			(0x88)
#define INDEX1_CMD2 			(0x88)
#define INDEX1_CMD3 			(0x55)
#define INDEX1_CMD4 			(0xF3)
#define INDEX1_CMD5 			(0x48)
#define INDEX2_CMD0 			(0xFF)
#define INDEX2_CMD1 			(0x3F)
#define INDEX2_CMD2 			(0x3F)
#define INDEX2_CMD3 			(0x3F)
#define INDEX2_CMD4 			(0xFF)
#define INDEX2_CMD5 			(0xC4)
#define INDEX3_CMD0 			(0x0F)
#define INDEX3_CMD1 			(0x8D)
#define INDEX3_CMD2 			(0xFF)
#define INDEX3_CMD3 			(0xFF)
#define INDEX3_CMD4 			(0x60)
#define INDEX3_CMD5 			(0x4A)
#define INDEX4_CMD0 			(0xBF)
#define INDEX4_CMD1 			(0x7F)
#define INDEX4_CMD2 			(0x3F)
#define INDEX4_CMD3 			(0x7F)
#define INDEX4_CMD4 			(0xFF)
#define INDEX4_CMD5 			(0xC6)
#define INDEX5_CMD0 			(0x3F)
#define INDEX5_CMD1 			(0xFF)
#define INDEX5_CMD2 			(0x7F)
#define INDEX5_CMD3 			(0xBF)
#define INDEX5_CMD4 			(0x66)
#define INDEX5_CMD5 			(0x61)
#define INDEX6_CMD0				(0x95)
#define INDEX6_CMD1 			(0x8D)
#define INDEX6_CMD2 			(0x8D)
#define INDEX6_CMD3 			(0xFF)
#define INDEX6_CMD4 			(0x56)
#define INDEX6_CMD5 			(0x09)
#define INDEX7_CMD0 			(0x01)
#define INDEX7_CMD1				(0xC4)
#define INDEX7_CMD2				(0x40)
#define INDEX7_CMD3 			(0x75)
#define INDEX7_CMD4 			(0xC3)
#define INDEX7_CMD5 			(0x89)
#define INDEX8_CMD0 			(0x88)
#define INDEX8_CMD1 			(0x88)
#define INDEX8_CMD2 			(0x88)
#define INDEX8_CMD3 			(0x55)
#define INDEX8_CMD4 			(0xF3)
#define INDEX8_CMD5 			(0x48)
#define INDEX9_CMD0 			(0xD6)
#define INDEX9_CMD1 			(0x16)
#define INDEX9_CMD2 			(0x15)
#define INDEX9_CMD3 			(0x0F)
#define INDEX9_CMD4 			(0xF9)
#define INDEX9_CMD5 			(0x85)
#define INDEX10_CMD0            (0x0D)
#define INDEX10_CMD1            (0x8D)
#define INDEX10_CMD2            (0xFF)
#define INDEX10_CMD3            (0xFF)
#define INDEX10_CMD4            (0x40)
#define INDEX10_CMD5            (0x4A)
#define INDEX11_CMD0            (0xBF)
#define INDEX11_CMD1            (0x7F)
#define INDEX11_CMD2            (0x3F)
#define INDEX11_CMD3            (0x7F)
#define INDEX11_CMD4            (0xFF)
#define INDEX11_CMD5            (0xC6)
#define INDEX12_CMD0            (0x3F)
#define INDEX12_CMD1            (0xDE)
#define INDEX12_CMD2            (0x62)
#define INDEX12_CMD3            (0x99)
#define INDEX12_CMD4            (0x27)
#define INDEX12_CMD5            (0x66)
#define INDEX13_CMD0            (0x8D)
#define INDEX13_CMD1            (0x8D)
#define INDEX13_CMD2            (0x8D)
#define INDEX13_CMD3            (0xFF)
#define INDEX13_CMD4            (0x66)
#define INDEX13_CMD5            (0x09)
#define INDEX14_CMD0            (0x01)
#define INDEX14_CMD1            (0xC4)
#define INDEX14_CMD2            (0x40)
#define INDEX14_CMD3            (0x9C)
#define INDEX14_CMD4            (0xC3)
#define INDEX14_CMD5            (0x89)
#define INDEX15_CMD0            (0x88)
#define INDEX15_CMD1            (0x88)
#define INDEX15_CMD2            (0x88)
#define INDEX15_CMD3            (0x55)
#define INDEX15_CMD4            (0xF3)
#define INDEX15_CMD5            (0x48)
#define INDEX16_CMD0            (0xFF)
#define INDEX16_CMD1            (0x3F)
#define INDEX16_CMD2            (0x3F)
#define INDEX16_CMD3            (0x3F)
#define INDEX16_CMD4            (0xFF)
#define INDEX16_CMD5            (0xC6)
#define INDEX17_CMD0            (0x13)
#define INDEX17_CMD1            (0x8D)
#define INDEX17_CMD2            (0xFF)
#define INDEX17_CMD3            (0xFF)
#define INDEX17_CMD4            (0x60)
#define INDEX17_CMD5            (0x4A)
#define INDEX18_CMD0            (0xBF)
#define INDEX18_CMD1            (0x7F)
#define INDEX18_CMD2            (0x3F)
#define INDEX18_CMD3            (0x7F)
#define INDEX18_CMD4            (0xFF)
#define INDEX18_CMD5            (0xC6)
#define INDEX19_CMD0            (0xFF)
#define INDEX19_CMD1            (0x3F)
#define INDEX19_CMD2            (0x3F)
#define INDEX19_CMD3            (0xEA)
#define INDEX19_CMD4            (0x66)
#define INDEX19_CMD5            (0x65)
#define INDEX20_CMD0            (0x8D)
#define INDEX20_CMD1            (0x8D)
#define INDEX20_CMD2            (0xFF)
#define INDEX20_CMD3            (0xFF)
#define INDEX20_CMD4            (0x30)
#define INDEX20_CMD5            (0x0A)
#define INDEX21_CMD0            (0x01)
#define INDEX21_CMD1            (0xC4)
#define INDEX21_CMD2            (0x40)
#define INDEX21_CMD3            (0x9C)
#define INDEX21_CMD4            (0xD3)
#define INDEX21_CMD5            (0x89)
#define INDEX22_CMD0            (0x88)
#define INDEX22_CMD1            (0x88)
#define INDEX22_CMD2            (0x88)
#define INDEX22_CMD3            (0x55)
#define INDEX22_CMD4            (0xF3)
#define INDEX22_CMD5            (0x48)
#define INDEX23_CMD0            (0xDC)
#define INDEX23_CMD1            (0x1C)
#define INDEX23_CMD2            (0x1C)
#define INDEX23_CMD3            (0x19)
#define INDEX23_CMD4            (0xFF)
#define INDEX23_CMD5            (0x66)
#define INDEX24_CMD0            (0x0D)
#define INDEX24_CMD1            (0x8D)
#define INDEX24_CMD2            (0xFF)
#define INDEX24_CMD3            (0xFF)
#define INDEX24_CMD4            (0x60)
#define INDEX24_CMD5            (0x5A)
#define INDEX25_CMD0            (0xBF)
#define INDEX25_CMD1            (0x7F)
#define INDEX25_CMD2            (0x3F)
#define INDEX25_CMD3            (0x7F)
#define INDEX25_CMD4            (0xFF)
#define INDEX25_CMD5            (0xC6)
#define INDEX26_CMD0            (0xFF)
#define INDEX26_CMD1            (0x28)
#define INDEX26_CMD2            (0x2A)
#define INDEX26_CMD3            (0xE6)
#define INDEX26_CMD4            (0x14)
#define INDEX26_CMD5            (0x66)
#define INDEX27_CMD0            (0x8D)
#define INDEX27_CMD1            (0x8D)
#define INDEX27_CMD2            (0xFF)
#define INDEX27_CMD3            (0xFF)
#define INDEX27_CMD4            (0x60)
#define INDEX27_CMD5            (0x0A)
#define INDEX28_CMD0            (0x35)
#define INDEX28_CMD1            (0x00)
#define INDEX28_CMD2            (0x46)
#define INDEX28_CMD3            (0x54)
#define INDEX28_CMD4            (0x33)
#define INDEX28_CMD5            (0x3F)
#define INDEX29_CMD0            (0x21)
#define INDEX29_CMD1            (0x03)
#define INDEX29_CMD2            (0x01)
#define INDEX29_CMD3            (0x00)
#define INDEX29_CMD4            (0x00)
#define INDEX29_CMD5            (0x0F)
#define INDEX30_CMD0            (0x88)
#define INDEX30_CMD1            (0x88)
#define INDEX30_CMD2            (0x88)
#define INDEX30_CMD3            (0x88)
#define INDEX30_CMD4            (0x88)
#define INDEX30_CMD5            (0x88)
#define INDEX31_CMD0            (0x88)
#define INDEX31_CMD1            (0x88)
#define INDEX31_CMD2            (0x88)
#define INDEX31_CMD3            (0x88)
#define INDEX31_CMD4            (0x88)
#define INDEX31_CMD5            (0x88)
#define INDEX32_CMD0            (0x88)
#define INDEX32_CMD1            (0x88)
#define INDEX32_CMD2            (0x88)
#define INDEX32_CMD3            (0x88)
#define INDEX32_CMD4            (0x88)
#define INDEX32_CMD5            (0x88)
#define INDEX33_CMD0            (0x88)
#define INDEX33_CMD1            (0x88)
#define INDEX33_CMD2            (0x88)
#define INDEX33_CMD3            (0x88)
#define INDEX33_CMD4            (0x88)
#define INDEX33_CMD5            (0x88)
#define INDEX34_CMD0            (0x0)
#define INDEX34_CMD1            (0x0)
#define INDEX34_CMD2            (0x0)
#define INDEX34_CMD3            (0x0)
#define INDEX34_CMD4            (0x0)
#define INDEX34_CMD5            (0x0)
#define INDEX35_CMD0            (0x02)
#define INDEX35_CMD1            (0x0)
#define INDEX35_CMD2            (0x0)
#define INDEX35_CMD3            (0x0)
#define INDEX35_CMD4            (0x0)
#define INDEX35_CMD5            (0x0)
#define INDEX36_CMD0            (0x7D)
#define INDEX36_CMD1            (0x46)
#define INDEX36_CMD2            (0x28)
#define INDEX36_CMD3            (0xFA)
#define INDEX36_CMD4            (0x88)
#define INDEX36_CMD5            (0x42)
#define INDEX37_CMD0            (0x69)
#define INDEX37_CMD1            (0x46)
#define INDEX37_CMD2            (0x2B)
#define INDEX37_CMD3            (0x00)
#define INDEX37_CMD4            (0x88)
#define INDEX37_CMD5            (0x3A)
#define INDEX38_CMD0            (0x3C)
#define INDEX38_CMD1            (0x18)
#define INDEX38_CMD2            (0x40)
#define INDEX38_CMD3            (0x1E)
#define INDEX38_CMD4            (0x0)
#define INDEX38_CMD5            (0x0)
#define INDEX39_CMD0            (0x46)
#define INDEX39_CMD1            (0x00)
#define INDEX39_CMD2            (0x01)
#define INDEX39_CMD3            (0x0F)
#define INDEX39_CMD4            (0x58)
#define INDEX39_CMD5            (0x41)
/* PAS Tuning Value	*/

#endif	/* __EEPROM_H__ */



