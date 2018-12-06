/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Adc.c
 *        Config:  SCIM_BP.dpa
 *    BSW Module:  Adc
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for BSW Module <Adc>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */ /* MD_Rte_TestCode */

/* PRQA S 3109 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3112 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3197 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3198 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3199 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3201 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3203 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3205 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3206 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3218 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3229 EOF */ /* MD_Rte_TestCode */
/* PRQA S 2002 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3334 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3417 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3426 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3453 EOF */ /* MD_Rte_TestCode */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "SchM_Adc.h"
#include "TSC_SchM_Adc.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * ComM_InhibitionStatusType: Integer in interval [0...255]
 * ComM_UserHandleType: Integer in interval [0...255]
 * CounterType: Integer in interval [0...255]
 * Debug_PVT_PEPS_AntP1_X: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntP1_X_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntP1_Y: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntP1_Y_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_X: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_X_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_Y: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_Y_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_GainP1_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP1_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP2_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP2_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP3_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP3_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP4_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP4_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_Logic_stat: Integer in interval [0...7]
 * Debug_PVT_PEPS_P1_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_P2_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_P3_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_P4_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_VDSI_Ctrl: Integer in interval [0...1023]
 * Debug_PVT_PEPS_VDSI_stat: Integer in interval [0...1023]
 * Debug_PVT_SCIM_Ctrl_12VDCDC_1: Boolean
 * Debug_PVT_SCIM_Ctrl_12VLiving_1: Boolean
 * Debug_PVT_SCIM_Ctrl_12VParked_1: Boolean
 * Debug_PVT_SCIM_Ctrl_BHS1_1: Boolean
 * Debug_PVT_SCIM_Ctrl_BHS2_1: Boolean
 * Debug_PVT_SCIM_Ctrl_BHS3_1: Boolean
 * Debug_PVT_SCIM_Ctrl_BHS4_1: Boolean
 * Debug_PVT_SCIM_Ctrl_DaiPullUp_1: Boolean
 * Debug_PVT_SCIM_Ctrl_LivingPullUp_1: Boolean
 * Debug_PVT_SCIM_Ctrl_ParkedPullUp_1: Boolean
 * Debug_PVT_SCIM_Ctrl_WHS1_1: Boolean
 * Debug_PVT_SCIM_Ctrl_WHS1_Duty_1: Integer in interval [0...127]
 * Debug_PVT_SCIM_Ctrl_WHS1_Freq_1: Integer in interval [0...2047]
 * Debug_PVT_SCIM_Ctrl_WHS2_1: Boolean
 * Debug_PVT_SCIM_Ctrl_WHS2_Duty_1: Integer in interval [0...127]
 * Debug_PVT_SCIM_Ctrl_WHS2_Freq_1: Integer in interval [0...2047]
 * Debug_PVT_SCIM_Ctrl_WLS1_1: Boolean
 * Debug_PVT_SCIM_Ctrl_WLS1_Duty_1: Integer in interval [0...127]
 * Debug_PVT_SCIM_Ctrl_WLS1_Freq_1: Integer in interval [0...2047]
 * Debug_PVT_SCIM_Ctrl_WLS2Duty_1: Integer in interval [0...127]
 * Debug_PVT_SCIM_Ctrl_WLS2Freq_1: Integer in interval [0...2047]
 * Debug_PVT_SCIM_Ctrl_WLS2_1: Boolean
 * Debug_PVT_SCIM_Ctrl_WLS3Duty_1: Integer in interval [0...127]
 * Debug_PVT_SCIM_Ctrl_WLS3Freq_1: Integer in interval [0...2047]
 * Debug_PVT_SCIM_Ctrl_WLS3_1: Boolean
 * Debug_PVT_SCIM_RD_12VDCDCVolt: Integer in interval [0...255]
 * Debug_PVT_SCIM_RD_12VLivingVolt_1: Integer in interval [0...255]
 * Debug_PVT_SCIM_RD_12VParkedVolt_1: Integer in interval [0...255]
 * Debug_PVT_SCIM_RD_ADI01_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI02_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI03_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI04_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI05_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI06_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI07_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI08_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI09_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI10_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI11_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI12_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI13_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI14_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI15_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI16_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_BHS1_Volt_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_BHS2_Volt_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_BHS3_Volt_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_BHS4_Volt_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_DAI1_1: Integer in interval [0...255]
 * Debug_PVT_SCIM_RD_DAI2_1: Integer in interval [0...255]
 * Debug_PVT_SCIM_RD_VBAT_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_WHS1_Duty_1: Integer in interval [0...127]
 * Debug_PVT_SCIM_RD_WHS1_Freq_1: Integer in interval [0...2047]
 * Debug_PVT_SCIM_RD_WHS1_Volt_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_WHS2_Duty_1: Integer in interval [0...127]
 * Debug_PVT_SCIM_RD_WHS2_Freq_1: Integer in interval [0...2047]
 * Debug_PVT_SCIM_RD_WHS2_Volt_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_WLS1_Duty_1: Integer in interval [0...127]
 * Debug_PVT_SCIM_RD_WLS1_Freq_1: Integer in interval [0...2047]
 * Debug_PVT_SCIM_RD_WLS1_Volt_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_WLS2_Duty_1: Integer in interval [0...127]
 * Debug_PVT_SCIM_RD_WLS2_Freq_1: Integer in interval [0...2047]
 * Debug_PVT_SCIM_RD_WLS2_Volt_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_WLS3_Duty_1: Integer in interval [0...127]
 * Debug_PVT_SCIM_RD_WLS3_Freq_1: Integer in interval [0...2047]
 * Debug_PVT_SCIM_RD_WLS3_Volt_1: Integer in interval [0...65535]
 * Dem_DTCGroupType: Integer in interval [0...16777215]
 * Dem_DTCStatusMaskType: Integer in interval [0...255]
 * Dem_EventIdType: Integer in interval [1...65535]
 * Dem_EventIdType: Integer in interval [1...65535]
 * Dem_OperationCycleIdType: Integer in interval [0...255]
 * Dem_RatioIdType: Integer in interval [1...65535]
 * DiagInfoCCFW: Integer in interval [0...127]
 * DiagInfoDLFW: Integer in interval [0...127]
 * DiagInfoELCP1: Integer in interval [0...127]
 * DiagInfoELCP2: Integer in interval [0...127]
 * DiagInfoILCP1: Integer in interval [0...127]
 * DiagInfoILCP2: Integer in interval [0...127]
 * DiagInfoLECM2: Integer in interval [0...127]
 * DiagInfoLECMBasic: Integer in interval [0...127]
 * DiagInfoRCECS: Integer in interval [0...127]
 * DiagInfoTCP: Integer in interval [0...127]
 * EcuM_SleepModeType: Integer in interval [0...255]
 * EcuM_TimeType: Integer in interval [0...4294967295]
 * EcuM_UserType: Integer in interval [0...255]
 * FSP1DiagInfoL1: Integer in interval [0...63]
 * FSP1DiagInfoL2: Integer in interval [0...63]
 * FSP1DiagInfoL3: Integer in interval [0...63]
 * FSP1DiagInfoL4: Integer in interval [0...63]
 * FSP1DiagInfoL5: Integer in interval [0...63]
 * FSP1IndicationCmdL2: Integer in interval [0...65535]
 * FSP1IndicationCmdL3: Integer in interval [0...65535]
 * FSP1IndicationCmdL4: Integer in interval [0...65535]
 * FSP1IndicationCmdL5: Integer in interval [0...65535]
 * FSP1ResponseErrorL1: Boolean
 * FSP1ResponseErrorL2: Boolean
 * FSP1ResponseErrorL3: Boolean
 * FSP1ResponseErrorL4: Boolean
 * FSP1ResponseErrorL5: Boolean
 * FSP1SwitchStatusL2: Integer in interval [0...255]
 * FSP1SwitchStatusL3: Integer in interval [0...255]
 * FSP1SwitchStatusL4: Integer in interval [0...255]
 * FSP1SwitchStatusL5: Integer in interval [0...255]
 * FSP2DiagInfoL1: Integer in interval [0...63]
 * FSP2DiagInfoL2: Integer in interval [0...63]
 * FSP2DiagInfoL3: Integer in interval [0...63]
 * FSP2IndicationCmdL1: Integer in interval [0...65535]
 * FSP2IndicationCmdL2: Integer in interval [0...65535]
 * FSP2IndicationCmdL3: Integer in interval [0...65535]
 * FSP2ResponseErrorL1: Boolean
 * FSP2ResponseErrorL2: Boolean
 * FSP2ResponseErrorL3: Boolean
 * FSP2SwitchStatusL1: Integer in interval [0...255]
 * FSP2SwitchStatusL2: Integer in interval [0...255]
 * FSP2SwitchStatusL3: Integer in interval [0...255]
 * FSP3DiagInfoL2: Integer in interval [0...63]
 * FSP3IndicationCmdL2: Integer in interval [0...65535]
 * FSP3ResponseErrorL2: Boolean
 * FSP3SwitchStatusL2: Integer in interval [0...255]
 * FSP4DiagInfoL2: Integer in interval [0...63]
 * FSP4IndicationCmdL2: Integer in interval [0...65535]
 * FSP4ResponseErrorL2: Boolean
 * FSP4SwitchStatusL2: Integer in interval [0...255]
 * IOHWAB_BOOL: Boolean
 * IOHWAB_SINT8: Integer in interval [-128...127]
 * IOHWAB_UINT16: Integer in interval [0...65535]
 * IOHWAB_UINT8: Integer in interval [0...255]
 * Issm_IssHandleType: Integer in interval [0...255]
 * Issm_UserHandleType: Integer in interval [0...255]
 * LIN_AlmClkCurAlarm_stat_SetHr: Integer in interval [0...255]
 * LIN_AlmClkCurAlarm_stat_SetMin: Integer in interval [0...255]
 * LIN_AlmClkSetCurAlm_rqst_SetHr: Integer in interval [0...255]
 * LIN_AlmClkSetCurAlm_rqst_SetMin: Integer in interval [0...255]
 * LIN_AudioVolumeIndicationCmd: Integer in interval [0...63]
 * LIN_BunkH2PHTi_rqs_DurnTimeHr: Integer in interval [0...255]
 * LIN_BunkH2PHTi_rqs_DurnTimeMin: Integer in interval [0...255]
 * LIN_BunkH2PHTi_rqs_StartTimeHr: Integer in interval [0...255]
 * LIN_BunkH2PHTi_rqs_StartTimeMin: Integer in interval [0...255]
 * LIN_IntLghtLvlIndScaled_cmd: Integer in interval [0...15]
 * LIN_IntLghtModeInd_cmd_EventFlag: Boolean
 * LIN_ShortPulseMaxLength: Integer in interval [0...15]
 * NetworkHandleType: Integer in interval [0...255]
 * NetworkHandleType: Integer in interval [0...255]
 * ResponseErrorCCFW: Boolean
 * ResponseErrorDLFW: Boolean
 * ResponseErrorELCP1: Boolean
 * ResponseErrorELCP2: Boolean
 * ResponseErrorILCP1: Boolean
 * ResponseErrorILCP2: Boolean
 * ResponseErrorLECM2: Boolean
 * ResponseErrorLECMBasic: Boolean
 * ResponseErrorRCECS: Boolean
 * ResponseErrorTCP: Boolean
 * SwitchDetectionNeeded1L1: Boolean
 * SwitchDetectionNeeded1L2: Boolean
 * SwitchDetectionNeeded1L3: Boolean
 * SwitchDetectionNeeded1L4: Boolean
 * SwitchDetectionNeeded1L5: Boolean
 * SwitchDetectionNeeded2L1: Boolean
 * SwitchDetectionNeeded2L2: Boolean
 * SwitchDetectionNeeded2L3: Boolean
 * SwitchDetectionNeeded3L2: Boolean
 * SwitchDetectionNeeded4L2: Boolean
 * TimeInMicrosecondsType: Integer in interval [0...4294967295]
 * VDem42_EventIdType: Integer in interval [1...65535]
 * VGTT_EcuPinDiagStatus: Integer in interval [0...255]
 * VGTT_EcuPinVoltage_0V2: Integer in interval [0...255]
 * VGTT_ScimAdiPinsState: Integer in interval [0...65535]
 * boolean: Boolean (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ABSInhibitRqstDenied: Enumeration of integer in interval [0...3] with enumerators
 * ABS_Indication: Enumeration of integer in interval [0...3] with enumerators
 * ATC_Indication: Enumeration of integer in interval [0...3] with enumerators
 * BswM_BswMRteMDG_LIN1Schedule: Enumeration of integer in interval [0...255] with enumerators
 * BswM_BswMRteMDG_LIN2Schedule: Enumeration of integer in interval [0...255] with enumerators
 * BswM_BswMRteMDG_LIN3Schedule: Enumeration of integer in interval [0...255] with enumerators
 * BswM_BswMRteMDG_LIN4Schedule: Enumeration of integer in interval [0...255] with enumerators
 * BswM_BswMRteMDG_LIN5Schedule: Enumeration of integer in interval [0...255] with enumerators
 * BswM_ESH_Mode: Enumeration of integer in interval [0...255] with enumerators
 * BswM_ESH_RunRequest: Enumeration of integer in interval [0...255] with enumerators
 * ComM_ModeType: Enumeration of integer in interval [0...3] with enumerators
 * ComM_ModeType: Enumeration of integer in interval [0...2] with enumerators
 * Dcm_CommunicationModeType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_ConfirmationStatusType: Enumeration of integer in interval [0...3] with enumerators
 * Dcm_DiagnosticSessionControlType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_EcuResetType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...254] with enumerators
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...147] with enumerators
 * Dcm_OpStatusType: Enumeration of integer in interval [0...64] with enumerators
 * Dcm_ProtocolType: Enumeration of integer in interval [0...254] with enumerators
 * Dcm_RequestKindType: Enumeration of integer in interval [0...2] with enumerators
 * Dcm_SesCtrlType: Enumeration of integer in interval [0...1] with enumerators
 * Debug_PVT_PEPS_AntCtrl_stat: Enumeration of integer in interval [-4...3] with enumerators
 * Debug_PVT_PEPS_Ant_Ctrl: Enumeration of integer in interval [0...7] with enumerators
 * Debug_PVT_PEPS_Logic_Ctrl: Enumeration of integer in interval [0...7] with enumerators
 * Debug_PVT_SCIM_RD_12VDCDCFault: Enumeration of integer in interval [0...15] with enumerators
 * Debug_PVT_SCIM_RD_BHS1_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 * Debug_PVT_SCIM_RD_BHS2_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 * Debug_PVT_SCIM_RD_BHS3_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 * Debug_PVT_SCIM_RD_BHS4_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 * Debug_PVT_SCIM_RD_WHS1_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 * Debug_PVT_SCIM_RD_WHS2_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 * Debug_PVT_SCIM_RD_WLS1_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 * Debug_PVT_SCIM_RD_WLS2_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 * Debug_PVT_SCIM_RD_WLS3_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 * Dem_DTCFormatType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DTCFormatType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DTCKindType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DTCOriginType: Enumeration of integer in interval [0...65535] with enumerators
 * Dem_DTCOriginType: Enumeration of integer in interval [0...65535] with enumerators
 * Dem_DTCSeverityType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DTRControlType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DebounceResetStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DebouncingStateType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DebouncingStateType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_EventStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_EventStatusType: Enumeration of integer in interval [0...4] with enumerators
 * Dem_IndicatorStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_InitMonitorReasonType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_IumprDenomCondIdType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_IumprDenomCondStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_IumprReadinessGroupType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_MonitorStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_OperationCycleStateType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_OperationCycleStateType: Enumeration of integer in interval [0...1] with enumerators
 * Dem_UdsStatusByteType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_UdsStatusByteType: Enumeration of integer in interval [0...255] with enumerators
 * DoorLock_stat: Enumeration of integer in interval [0...15] with enumerators
 * ESC_Indication: Enumeration of integer in interval [0...3] with enumerators
 * EcuM_BootTargetType: Enumeration of integer in interval [0...2] with enumerators
 * EcuM_ModeType: Enumeration of integer in interval [0...3] with enumerators
 * EcuM_ShutdownCauseType: Enumeration of integer in interval [0...3] with enumerators
 * EcuM_StateType: Enumeration of integer in interval [0...144] with enumerators
 * EcuM_StateType: Enumeration of integer in interval [0...144] with enumerators
 * EnumActiveComponentType: Enumeration of integer in interval [0...255] with enumerators
 * EnumNM_ApplStateType: Enumeration of integer in interval [0...2] with enumerators
 * Issm_IssStateType: Enumeration of integer in interval [0...2] with enumerators
 * J1939Rm_AckCode: Enumeration of integer in interval [0...3] with enumerators
 * J1939Rm_ExtIdType: Enumeration of integer in interval [0...4] with enumerators
 * J1939Rm_ExtIdType: Enumeration of integer in interval [0...4] with enumerators
 * LIN_ACCOrCCIndication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_ASLIndication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_AdjustButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_Adjust_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_AlmClkCurAlarm_stat_ID: Enumeration of integer in interval [0...255] with enumerators
 * LIN_AlmClkCurAlarm_stat_Stat: Enumeration of integer in interval [0...255] with enumerators
 * LIN_AlmClkCurAlarm_stat_Type: Enumeration of integer in interval [0...255] with enumerators
 * LIN_AlmClkSetCurAlm_rqst_ID: Enumeration of integer in interval [0...255] with enumerators
 * LIN_AlmClkSetCurAlm_rqst_Stat: Enumeration of integer in interval [0...255] with enumerators
 * LIN_AlmClkSetCurAlm_rqst_Type: Enumeration of integer in interval [0...255] with enumerators
 * LIN_AudioSystemStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BTStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BackButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BackLightDimming_Status: Enumeration of integer in interval [0...31] with enumerators
 * LIN_BlackPanelMode_ButtonStat: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkBAudioOnOff_ButtonStat: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkBIntLightActvnBtn_stat: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkBParkHeater_ButtonStat: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkBTempDec_ButtonStat: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkBTempInc_ButtonStat: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkBVolumeDown_ButtonStat: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkBVolumeUp_ButtonStat: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2AudioOnOff_ButtonSta: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2Fade_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2IntLightActvnBtn_sta: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2IntLightDecBtn_stat: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2IntLightIncBtn_stat: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2LockButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2OnOFF_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2PHTi_rqs_Timer_cmd: Enumeration of integer in interval [0...255] with enumerators
 * LIN_BunkH2ParkHeater_ButtonSta: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2Phone_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2PowerWinCloseDSBtn_s: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2PowerWinClosePSBtn_s: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2PowerWinOpenDSBtn_st: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2PowerWinOpenPSBtn_st: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2RoofhatchCloseBtn_St: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2RoofhatchOpenBtn_Sta: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2TempDec_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2TempInc_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2VolumeDown_ButtonSta: Enumeration of integer in interval [0...3] with enumerators
 * LIN_BunkH2VolumeUp_ButtonStatu: Enumeration of integer in interval [0...3] with enumerators
 * LIN_DRL_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_DaytimeRunningLight_Indica: Enumeration of integer in interval [0...3] with enumerators
 * LIN_DifflockDeactivationBtn_st: Enumeration of integer in interval [0...3] with enumerators
 * LIN_DifflockMode_Wheelstatus: Enumeration of integer in interval [0...15] with enumerators
 * LIN_DifflockOnOff_Indication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_DoorAutoFuncBtn_stat: Enumeration of integer in interval [0...3] with enumerators
 * LIN_DoorAutoFuncInd_cmd: Enumeration of integer in interval [0...3] with enumerators
 * LIN_Down_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_DrivingLightPlus_Indicatio: Enumeration of integer in interval [0...3] with enumerators
 * LIN_DrivingLight_Indication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_EscButtonMuddySiteDeviceIn: Enumeration of integer in interval [0...3] with enumerators
 * LIN_EscButtonMuddySiteStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_FCWPushButton: Enumeration of integer in interval [0...3] with enumerators
 * LIN_FCW_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_FogLightFront_ButtonStat_1: Enumeration of integer in interval [0...3] with enumerators
 * LIN_FogLightFront_ButtonStat_2: Enumeration of integer in interval [0...3] with enumerators
 * LIN_FogLightRear_ButtonStat_1: Enumeration of integer in interval [0...3] with enumerators
 * LIN_FogLightRear_ButtonStat_2: Enumeration of integer in interval [0...3] with enumerators
 * LIN_FrontFog_Indication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_HeadLampUpDown_SwitchStatu: Enumeration of integer in interval [0...7] with enumerators
 * LIN_IntLghtCenterBtnFreeWhl_s: Enumeration of integer in interval [0...3] with enumerators
 * LIN_IntLghtDimmingLvlDecBtn_s: Enumeration of integer in interval [0...3] with enumerators
 * LIN_IntLghtDimmingLvlFreeWhl_s: Enumeration of integer in interval [0...15] with enumerators
 * LIN_IntLghtDimmingLvlIncBtn_s: Enumeration of integer in interval [0...3] with enumerators
 * LIN_IntLghtMaxModeBtnPnl2_s: Enumeration of integer in interval [0...3] with enumerators
 * LIN_IntLghtModeInd_cmd_IL_Mode: Enumeration of integer in interval [0...255] with enumerators
 * LIN_IntLghtModeSelrFreeWheel_s: Enumeration of integer in interval [0...15] with enumerators
 * LIN_IntLghtNightModeBt2_s: Enumeration of integer in interval [0...3] with enumerators
 * LIN_IntLghtOffModeInd_cmd: Enumeration of integer in interval [0...3] with enumerators
 * LIN_IntLghtRestModeBtnPnl2_s: Enumeration of integer in interval [0...3] with enumerators
 * LIN_IntLightMaxModeInd_cmd: Enumeration of integer in interval [0...3] with enumerators
 * LIN_IntLightNightModeInd_cmd: Enumeration of integer in interval [0...3] with enumerators
 * LIN_IntLightRestingModeInd_cmd: Enumeration of integer in interval [0...3] with enumerators
 * LIN_LKSPushButton: Enumeration of integer in interval [0...3] with enumerators
 * LIN_LKS_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_LevelingThumbwheel_stat: Enumeration of integer in interval [0...31] with enumerators
 * LIN_LightMode_Status_1: Enumeration of integer in interval [0...15] with enumerators
 * LIN_LightMode_Status_2: Enumeration of integer in interval [0...15] with enumerators
 * LIN_M1_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_M2_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_M3_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_MemButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_Offroad_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_Offroad_Indication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_ParkingLight_Indication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_PhoneButtonIndication_cmd: Enumeration of integer in interval [0...3] with enumerators
 * LIN_RearFog_Indication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_RearWorkProjector_BtnStat: Enumeration of integer in interval [0...3] with enumerators
 * LIN_RearWorkProjector_Indicati: Enumeration of integer in interval [0...3] with enumerators
 * LIN_SelectButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_SpeedControlModeButtonStat: Enumeration of integer in interval [0...3] with enumerators
 * LIN_SpeedControlModeWheelStat: Enumeration of integer in interval [0...15] with enumerators
 * LIN_StopButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_TCP_ABS_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_TCP_ATC_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_TCP_ESC_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_TCP_KnobPostionStatus: Enumeration of integer in interval [0...7] with enumerators
 * LIN_TCP_TCS_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 * LIN_Up_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 * LIN_WRDownButtonStatus: Enumeration of integer in interval [0...7] with enumerators
 * LIN_WRUpButtonStatus: Enumeration of integer in interval [0...7] with enumerators
 * TCS_Indication: Enumeration of integer in interval [0...3] with enumerators
 * VDem42_DTCFormatType: Enumeration of integer in interval [0...255] with enumerators
 * VDem42_DTCOriginType: Enumeration of integer in interval [0...255] with enumerators
 * VDem42_DebouncingStateType: Enumeration of integer in interval [0...255] with enumerators
 * VDem42_UdsStatusByteType: Enumeration of integer in interval [0...255] with enumerators
 *
 * Array Types:
 * ============
 * ArrayByteSize16: Array with 16 element(s) of type uint8
 * ArrayByteSize3: Array with 3 element(s) of type uint8
 * ArrayByteSize32: Array with 32 element(s) of type uint8
 * ArrayByteSize8: Array with 8 element(s) of type uint8
 * DataArrayType_uint8_2: Array with 2 element(s) of type uint8
 * DataArray_Type_2: Array with 2 element(s) of type uint8
 * Dcm_Data2ByteType: Array with 2 element(s) of type uint8
 * Dem_MaxDataValueType: Array with 2 element(s) of type uint8
 * Dem_MaxDataValueType: Array with 2 element(s) of type uint8
 * Issm_ActiveUserArrayType: Array with 1 element(s) of type uint32
 * SwitchDetectionResp1L1: Array with 8 element(s) of type uint8
 * SwitchDetectionResp1L2: Array with 8 element(s) of type uint8
 * SwitchDetectionResp1L3: Array with 8 element(s) of type uint8
 * SwitchDetectionResp1L4: Array with 8 element(s) of type uint8
 * SwitchDetectionResp1L5: Array with 8 element(s) of type uint8
 * SwitchDetectionResp2L1: Array with 8 element(s) of type uint8
 * SwitchDetectionResp2L2: Array with 8 element(s) of type uint8
 * SwitchDetectionResp2L3: Array with 8 element(s) of type uint8
 * SwitchDetectionResp3L2: Array with 8 element(s) of type uint8
 * SwitchDetectionResp4L2: Array with 8 element(s) of type uint8
 * VDem42_MaxDataValueType: Array with 2 element(s) of type uint8
 *
 * Record Types:
 * =============
 * DtMemoryProtectionDataElementType: Record with elements
 *   Value of type uint8
 *   InvalidAccess of type boolean
 * J1939Rm_ExtIdInfoType: Record with elements
 *   ExtIdType of type J1939Rm_ExtIdType
 *   ExtId1 of type uint8
 *   ExtId2 of type uint8
 *   ExtId3 of type uint8
 * J1939Rm_ExtIdInfoType: Record with elements
 *   ExtIdType of type J1939Rm_ExtIdType
 *   ExtId1 of type uint8
 *   ExtId2 of type uint8
 *   ExtId3 of type uint8
 * LIN_AlmClkCurAlarm_stat_sg: Record with elements
 *   LIN_AlmClkCurAlarm_stat_Stat of type LIN_AlmClkCurAlarm_stat_Stat
 *   LIN_AlmClkCurAlarm_stat_SetHr of type LIN_AlmClkCurAlarm_stat_SetHr
 *   LIN_AlmClkCurAlarm_stat_Type of type LIN_AlmClkCurAlarm_stat_Type
 *   LIN_AlmClkCurAlarm_stat_SetMin of type LIN_AlmClkCurAlarm_stat_SetMin
 *   LIN_AlmClkCurAlarm_stat_ID of type LIN_AlmClkCurAlarm_stat_ID
 * LIN_AlmClkSetCurAlm_rqst_sg: Record with elements
 *   LIN_AlmClkSetCurAlm_rqst_SetMin of type LIN_AlmClkSetCurAlm_rqst_SetMin
 *   LIN_AlmClkSetCurAlm_rqst_Type of type LIN_AlmClkSetCurAlm_rqst_Type
 *   LIN_AlmClkSetCurAlm_rqst_ID of type LIN_AlmClkSetCurAlm_rqst_ID
 *   LIN_AlmClkSetCurAlm_rqst_SetHr of type LIN_AlmClkSetCurAlm_rqst_SetHr
 *   LIN_AlmClkSetCurAlm_rqst_Stat of type LIN_AlmClkSetCurAlm_rqst_Stat
 * LIN_BunkH2PHTi_rqs_sg: Record with elements
 *   LIN_BunkH2PHTi_rqs_StartTimeHr of type LIN_BunkH2PHTi_rqs_StartTimeHr
 *   LIN_BunkH2PHTi_rqs_Timer_cmd of type LIN_BunkH2PHTi_rqs_Timer_cmd
 *   LIN_BunkH2PHTi_rqs_DurnTimeHr of type LIN_BunkH2PHTi_rqs_DurnTimeHr
 *   LIN_BunkH2PHTi_rqs_StartTimeMin of type LIN_BunkH2PHTi_rqs_StartTimeMin
 *   LIN_BunkH2PHTi_rqs_DurnTimeMin of type LIN_BunkH2PHTi_rqs_DurnTimeMin
 * LIN_IntLghtModeInd_cmd_sg: Record with elements
 *   LIN_IntLghtModeInd_cmd_EventFlag of type LIN_IntLghtModeInd_cmd_EventFlag
 *   LIN_IntLghtModeInd_cmd_IL_Mode of type LIN_IntLghtModeInd_cmd_IL_Mode
 *
 * Union Types:
 * =============
 * tVAR: Union with elements
 *   new_input of type uint8
 *   old_input of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_TestCode:
     Reason:     This justification is used within the generated test code by the Rte Analyzer.
     Risk:       No functional risk.
     Prevention: Not required.

*/
