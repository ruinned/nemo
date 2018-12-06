/*******************************************************************************
 * Project      	: 	SP2 IBU
 * File Name    	: 	pj_define.h
 * Compiler		: 	Eclipse
 * Author       	: 	MyoungKwon Choi (mk210@seoyonelec.com)
 * Created at   	: 	2017-06-15 
 * Code Editor	: 	Source Insight (Recomended Font : D2Coding / Size 10)
 * Revision     	: 	Version 0.1
 * Copyright   	: 	(c) Copyright Seoyon Electronisc Co.Ltd. All Rights Reserved       
 * Description  	: 	This is a header file associated with constants & macro.
 *					
 *******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------------------------*/
#ifndef	__PJ_DEFINE_H__
#define	__PJ_DEFINE_H__


void Option_Default(void);
u8 Get_PartNumber(u8 cmd);
void Configuration_Option(void);
u8 DST_Partnumber_Check(const u8 DST_PartNum[],u8 PNCondition);
void Default_SMK_Version(void);

/*******************************************************************************
	Define Constants
*******************************************************************************/
#if 0
#define NonCountryOption			/* C_CountryCfg Signal이 미할당된 차종일 경우 Setting (YC:CHINA) */
									/* C_CountryCfg Siganl이 할당된 차종이지만 해당되는 CANsignal이 없을 경우 kb_CountryFix를 On으로 설정 */

#define ABS_AutoSelectOption		/* ABS 유무 자동 설정 기능 사용 여부 */
									/* ABS 장착 유무가 Standard인 경우에는 해당 기능 사용 할 필요 없음. */
									/* ABS, NonABS 차량이 모두 해당 될 경우 사용 */

#define KEYOUTIND_HW_OUTPUT			/* KeyOutIND H/W Wire Control. (Only JA SMK) */
#endif

#if 0
#define LF_TUNING_TEST
#define ASW_DEBUGGING
#endif

#if 1
#define ACCESS_TOGGLE_BUTTON
#else
#define ACCESS_REAR_TOGGLE_BUTTON
#define ACCESS_CAPACITIVE_SENSOR
#endif

#define IGN_OFF_SHUTDOWN_OPTION			/* IGN1,2 OFF Rly Option */
#define IMMOLAMP_BLINKINGDIRECT_OPTION	/* kb_ImmoLampBlinkingDirectControlOption */
#define LOW_BAT_HW_OPTION				/* FOB Low battery Option  set */
#define KEYOUTIND_OPTION				/* Keyout IND Option set */
#define Option_DIAG_IF_CAN

#define PROJECT_NAME_HIGH 'S'
#define PROJECT_NAME_MID 'P'
#define PROJECT_NAME_LOW '2'


#define IBU_SP2_LF_SET_MODE

#define FOB_RSSI_CHECK_ENABLE

/* 2018.01.29 */
/* SELECT_DRV_ANT		: A0-P & A0-N */
/* SELECT_AST_ANT		: A2-P & A2-N */			
/* SELECT_INT1_ANT		: A3-P & A3-N */
/* SELECT_INT2_ANT		: A1-P & A1-N */
/* SELECT_TRUNK_ANT	: A3-P & A0-N */
/* SELECT_BUMPER_ANT	: A0-P & A3-N */
/* SELECT_HATSHELF_ANT	: A2-P & A1-N */
/* SE:ECT_Reserved_ANT	: A1-P & A2-N */

#if defined (IBU_SP2_LF_SET_MODE)
	#define SELECT_DRV_ANT		
	#define SELECT_INT1_ANT		
	#define SELECT_AST_ANT		
	#define SELECT_TRUNK_ANT

	#define LFTuning_RSSI1	rLH
	#define LFTuning_RSSI2	rINT1
	#define LFTuning_RSSI3	rRH
	#define LFTuning_RSSI4	rTRUNK
	
#elif defined (IBU_SU2_LF_SET_MODE) 
	#define SELECT_DRV_ANT		
	#define SELECT_INT1_ANT		
	#define SELECT_TRUNK_ANT	
	#define SELECT_BUMPER_ANT /* LF RSSI는 출력하나, RSSI 판단 로직에서는 실제 미활용 */

	#define LFTuning_RSSI1	rLH
	#define LFTuning_RSSI2	rINT1
	#define LFTuning_RSSI3	rTRUNK
	#define LFTuning_RSSI4	rBUM
#else


#endif


/* CALIBRATION VALUE */
#define DEF_CALIB_HandFreeTrunkShortPeriodDurationTime	Time_hour(69)
#define DEF_CALIB_HandFreeTrunkShortPeriodDurationTime1	4140/256
#define DEF_CALIB_HandFreeTrunkShortPeriodDurationTime2	4140%256
#define DEF_CALIB_HandFreeTrunkLongPeriodDurationTime	Time_hour(92)
#define DEF_CALIB_HandFreeTrunkLongPeriodDurationTime1	5520/256
#define DEF_CALIB_HandFreeTrunkLongPeriodDurationTime2	5520%256

#define DEF_CALIB_WelcomeLightShortPeriodDurationTime	Time_hour(92)
#define DEF_CALIB_WelcomeLightShortPeriodDurationTime1	5520/256
#define DEF_CALIB_WelcomeLightShortPeriodDurationTime2	5520%256
#define DEF_CALIB_WelcomeLightLongPeriodDurationTime	Time_hour(230)
#define DEF_CALIB_WelcomeLightLongPeriodDurationTime1	13800/256
#define DEF_CALIB_WelcomeLightLongPeriodDurationTime2	13800%256

#define DEF_CALIB_RKEReSynchronizationCount				512
#define DEF_CALIB_RKEReSynchronizationCount1			512/256
#define DEF_CALIB_RKEReSynchronizationCount2			512%256

#define DEF_CALIB_RKENoSynchronizationCount				4095
#define DEF_CALIB_RKENoSynchronizationCount1			4095/256
#define DEF_CALIB_RKENoSynchronizationCount2			4095%256


#if 0
/* Tailgate Access RSSI 제한 값 */
/* #define Par_TailgateAccess_RSSIcutValue		9000	*/
extern u8 Par_TailgateAccess_xyzMaxCutValue;	/* 각 차종에 따라 상이할 수 있음 */
#define	Par_TrunkAccess_xyzMaxCutValue Par_TailgateAccess_xyzMaxCutValue
#endif



/*******************************************************************************
	Define Macro
*******************************************************************************/



/*******************************************************************************
	Declare External  Variables
*******************************************************************************/
extern tVAR b_3rdFobOption;
extern tVAR b_ABS4WAvgSpeedOption;
extern tVAR b_AutoEnterARM_PwrTrunkTGOption;
extern tVAR b_BattSaveOption;
extern tVAR b_CANBrakeSignalOption;
extern tVAR b_C_CANUseOption;
extern tVAR b_DeactivationOption;
extern tVAR b_ESCLOption;
extern tVAR b_EVOption;
extern tVAR b_ExternalBuzzerOption;
extern tVAR b_FCEVOption;
extern tVAR b_FobBatteryDischargeDirectControlOption;
extern tVAR b_GearInputByCANOption;
extern tVAR b_GloveBoxTrunkLockSWOption;
extern tVAR b_HandFreeTrunkTGOption;
extern tVAR b_ImmoLampBlinkingDirectControlOption;
extern tVAR b_K_lineOption;
extern tVAR b_KeyOutLampBlinkingDirectControlOption;
extern tVAR b_MirrSeesawSWOption;
extern tVAR b_OFFIllumOption;
extern tVAR b_OSMirrFoldOption;
extern tVAR b_PpositionPWMOption;
extern tVAR b_PuddleOption;
/* extern tVAR b_PuddlePocketOption; */
extern tVAR b_RearDoorButtonOption;
extern tVAR b_RemoteWindowOption;
extern tVAR b_RetractableSwOption;
extern tVAR b_RSPAOption;
extern tVAR b_SMKRKETeleCrankingOption;
extern tVAR b_TailgateLockUnlockOption;
extern tVAR b_TeleCrankingIBOXOption;
extern tVAR b_TeleCrankingOption;
extern tVAR b_ToggleButtonOption;
extern tVAR b_TrunkReopeningOption;
extern tVAR b_TwoStepsByRKEOption;
extern tVAR b_WelcomeLightAuthenticationOption;
extern tVAR b_WelcomeLightOption;
extern tVAR b_WelLightMirrUSMIntegrationSettingOption;
/* extern tVAR WelcomeSysTitleOption; */
extern tVAR b_ASTAntRemoveOption;
extern tVAR b_ASTBtnRemoveOption;
extern tVAR b_SBWCheck;

extern	tTIMER16	Timer_TwoStepsUnlock;					/* Two steps unlock timer, when not elapsed a toggle button pressing shall be interpreted as a all doors unlock request */
extern	tTIMER8		Timer_TrunkOpeningOutputClearWaiting;	/* Clearing Waiting Time of Trunk Opening Output */
extern	tTIMER32	Timer_RejectNeutralizationAndLearning;	/* Time during which the Learning or Neutralization is rejected (1 hour) */
extern	tTIMER8		tmr_CANeventSigOutWait;


/*******************************************************************************
	Define Parameter                                                            
*******************************************************************************/
/************ External Buzzer & SMK Warnings Manager ***********/
#define	Par_IDOut				1u
#define	Par_DoorLock1			2u
#define	Par_DoorLock2			3u
#define	Par_DoorLock3			4u
#define	Par_KeyReminder2		5u
#define	Par_TrunkWarn			6u
#define	Par_ARMBuzzer			7u
#define	Par_DISARMBuzzer		8u
#define	Par_HandFreeTrunk		9u
#define	Par_HandFreeTrunk2		10u
/***************************************************************/
/* Inputs Processing & SMK Warnings Manager & Errors Detection */
#define	Par_ErrorValue			255u
/******** CF_Clu_VehicleSpeed, 0~254: Speed / 255: Error *******/
#define	VehicleSpeed_Error		255U
/***************************************************************/
/******** Toggle Button Access & Hands Free Trunk Access *******/
#define	Par_TrunkOpeningOutputClearWaitingTime		Time_ms(150u)
#define TrunkOpeningOutputClearWaitingTime 			Par_TrunkOpeningOutputClearWaitingTime	/* Redefine */


#if defined(QAC_Report)
/* QAC Rule 12.4 (3415) : Right hand operand of '&&' or '||'is an expression with possible side effects. */
/* 아래 내용을 활성화 하게 되면 QAC 검증 중 상기 Rule 문제에 대하여 Clear 됨.*/
#pragma PRQA_NO_SIDE_EFFECTS	Rte_Call_SWC_RKE_R_Diag_ForceDrive_Output_CS
#pragma PRQA_NO_SIDE_EFFECTS	Rte_Call_SWC_Inputs_Processing_R_Get_DST_RunningStep_CS
#pragma PRQA_NO_SIDE_EFFECTS	Rte_Call_SWC_Diagnostic_R_Get_DST_RunningStep_CS
#pragma PRQA_NO_SIDE_EFFECTS	Battery_isThresholdOver
#pragma PRQA_NO_SIDE_EFFECTS	Rte_Call_SWC_RKE_R_Diag_ForceDrive_ESCL_status_CS
#pragma PRQA_NO_SIDE_EFFECTS	IsActiveEncryption
#pragma PRQA_NO_SIDE_EFFECTS	Rte_Call_SWC_SMK_Warnings_Manager_R_Get_No_ID_Search_CS
#pragma PRQA_NO_SIDE_EFFECTS	Rte_Call_SWC_SMK_Warnings_Manager_R_Get_All_IDs_Search_CS
#pragma PRQA_NO_SIDE_EFFECTS	Rte_Call_SWC_SMK_Warnings_Manager_R_Get_Deactivation_ID_CS
#pragma PRQA_NO_SIDE_EFFECTS	Rte_Call_SWC_SMK_Warnings_Manager_R_Get_Silent_IDs_CS
#pragma PRQA_NO_SIDE_EFFECTS	Is_ForcedDrivingOutput
#pragma PRQA_NO_SIDE_EFFECTS	pIn_RFIC_IRQ_readDirect
#pragma PRQA_NO_SIDE_EFFECTS	Rte_Call_SWC_Input_R_Diag_ForceDrive_Antena_status_CS
#pragma PRQA_NO_SIDE_EFFECTS	Rte_Call_SWC_Input_R_Diag_ForceDrive_ESCL_status_CS
#pragma PRQA_NO_SIDE_EFFECTS	Rte_Call_SWC_Input_R_Diag_ForceDrive_Output_CS
#pragma PRQA_NO_SIDE_EFFECTS	Rte_Call_SWC_Output_R_Get_DiagDTC_SUBCommError_CS
#endif
#endif	/* __PJ_DEFINE_H__ */
