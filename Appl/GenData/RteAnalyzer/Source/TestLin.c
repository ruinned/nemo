/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TestLin.c
 *        Config:  SCIM_BP.dpa
 *     SW-C Type:  TestLin
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <TestLin>
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

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * BswM_BswMRteMDG_LIN1Schedule
 *   
 *
 * BswM_BswMRteMDG_LIN2Schedule
 *   
 *
 * BswM_BswMRteMDG_LIN3Schedule
 *   
 *
 * BswM_BswMRteMDG_LIN4Schedule
 *   
 *
 * BswM_BswMRteMDG_LIN5Schedule
 *   
 *
 *********************************************************************************************************************/

#include "Rte_TestLin.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_TestLin.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void TestLin_TestDefines(void);


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
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ABS_Indication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * ATC_Indication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * BswM_BswMRteMDG_LIN1Schedule: Enumeration of integer in interval [0...255] with enumerators
 *   LIN1_Table1 (1U)
 *   LIN1_Table2 (2U)
 *   LIN1_Table_E (3U)
 *   LIN1_MasterReq_SlaveResp_Table1 (4U)
 *   LIN1_MasterReq_SlaveResp_Table2 (5U)
 *   LIN1_NULL (0U)
 *   LIN1_MasterReq_SlaveResp (6U)
 * BswM_BswMRteMDG_LIN2Schedule: Enumeration of integer in interval [0...255] with enumerators
 *   LIN2_NULL (0U)
 *   LIN2_TABLE0 (1U)
 *   LIN2_TABLE_E (2U)
 *   LIN2_MasterReq_SlaveResp_TABLE0 (3U)
 *   LIN2_MasterReq_SlaveResp (4U)
 * BswM_BswMRteMDG_LIN3Schedule: Enumeration of integer in interval [0...255] with enumerators
 *   LIN3_NULL (0U)
 *   LIN3_TABLE1 (1U)
 *   LIN3_TABLE2 (2U)
 *   LIN3_TABLE_E (3U)
 *   LIN3_MasterReq_SlaveResp_Table1 (4U)
 *   LIN3_MasterReq_SlaveResp_Table2 (5U)
 *   LIN3_MasterReq_SlaveResp (6U)
 * BswM_BswMRteMDG_LIN4Schedule: Enumeration of integer in interval [0...255] with enumerators
 *   LIN4_NULL (0U)
 *   LIN4_MasterReq_SlaveResp_Table1 (4U)
 *   LIN4_TABLE1 (1U)
 *   LIN4_TABLE2 (2U)
 *   LIN4_TABLE_E (3U)
 *   LIN4_MasterReq_SlaveResp_Table2 (5U)
 *   LIN4_MasterReq_SlaveResp (6U)
 * BswM_BswMRteMDG_LIN5Schedule: Enumeration of integer in interval [0...255] with enumerators
 *   LIN5_NULL (0U)
 *   LIN5_TABLE1 (1U)
 *   LIN5_MasterReq_SlaveResp_Table1 (4U)
 *   LIN5_MasterReq_SlaveResp_Table2 (5U)
 *   LIN5_MasterReq_SlaveResp (6U)
 *   LIN5_TABLE2 (2U)
 *   LIN5_TABLE_E (3U)
 * DoorLock_stat: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_DoorLock_stat_Idle (0U)
 *   Cx1_DoorLock_stat_BothDoorsAreUnlocked (1U)
 *   Cx2_DoorLock_stat_DriverDoorIsUnlocked (2U)
 *   Cx3_DoorLock_stat_PassengerDoorIsUnlocked (3U)
 *   Cx4_DoorLock_stat_BothDoorsAreLocked (4U)
 *   CxE_DoorLock_stat_Error (14U)
 *   CxF_DoorLock_stat_NotAvailable (15U)
 * ESC_Indication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_ACCOrCCIndication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_ASLIndication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_AdjustButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_Adjust_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_AlmClkCurAlarm_stat_ID: Enumeration of integer in interval [0...255] with enumerators
 *   Cx00_AlarmClkID_NotUsed (0U)
 *   Cx01_AlarmClkID_Alarm1 (1U)
 *   Cx02_AlarmClkID_Alarm2 (2U)
 *   Cx03_AlarmClkID_Alarm3 (3U)
 *   Cx04_AlarmClkID_Alarm4 (4U)
 *   Cx05_AlarmClkID_Alarm5 (5U)
 *   Cx06_AlarmClkID_Alarm6 (6U)
 *   Cx07_AlarmClkID_Alarm7 (7U)
 *   Cx08_AlarmClkID_Alarm8 (8U)
 *   Cx09_AlarmClkID_Alarm9 (9U)
 *   Cx0A_AlarmClkID_Alarm10 (10U)
 *   Cx7E_AlarmClkID_Error (126U)
 *   Cx7F_AlarmClkID_NotAvailable (127U)
 * LIN_AlmClkCurAlarm_stat_Stat: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_AlarmClkStat_Inactive (0U)
 *   Cx1_AlarmClkStat_Active (1U)
 *   Cx2_AlarmClkStat_NoUsed (2U)
 *   Cx3_AlarmClkStat_Spare (3U)
 * LIN_AlmClkCurAlarm_stat_Type: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_AlarmClkType_NoAudibleNotification (0U)
 *   Cx1_AlarmClkType_Buzzer (1U)
 *   Cx2_AlarmClkType_Radio (2U)
 *   Cx3_AlarmClkType_Reserved (3U)
 *   Cx4_AlarmClkType_Reserved_01 (4U)
 *   Cx5_AlarmClkType_Reserved_02 (5U)
 *   Cx6_AlarmClkType_Error (6U)
 *   Cx7_AlarmClkType_NotAvailable (7U)
 * LIN_AlmClkSetCurAlm_rqst_ID: Enumeration of integer in interval [0...255] with enumerators
 *   Cx00_AlarmClkID_NotUsed (0U)
 *   Cx01_AlarmClkID_Alarm1 (1U)
 *   Cx02_AlarmClkID_Alarm2 (2U)
 *   Cx03_AlarmClkID_Alarm3 (3U)
 *   Cx04_AlarmClkID_Alarm4 (4U)
 *   Cx05_AlarmClkID_Alarm5 (5U)
 *   Cx06_AlarmClkID_Alarm6 (6U)
 *   Cx07_AlarmClkID_Alarm7 (7U)
 *   Cx08_AlarmClkID_Alarm8 (8U)
 *   Cx09_AlarmClkID_Alarm9 (9U)
 *   Cx0A_AlarmClkID_Alarm10 (10U)
 *   Cx7E_AlarmClkID_Error (126U)
 *   Cx7F_AlarmClkID_NotAvailable (127U)
 * LIN_AlmClkSetCurAlm_rqst_Stat: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_AlarmClkStat_Inactive (0U)
 *   Cx1_AlarmClkStat_Active (1U)
 *   Cx2_AlarmClkStat_NoUsed (2U)
 *   Cx3_AlarmClkStat_Spare (3U)
 * LIN_AlmClkSetCurAlm_rqst_Type: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_AlarmClkType_NoAudibleNotification (0U)
 *   Cx1_AlarmClkType_Buzzer (1U)
 *   Cx2_AlarmClkType_Radio (2U)
 *   Cx3_AlarmClkType_Reserved (3U)
 *   Cx4_AlarmClkType_Reserved_01 (4U)
 *   Cx5_AlarmClkType_Reserved_02 (5U)
 *   Cx6_AlarmClkType_Error (6U)
 *   Cx7_AlarmClkType_NotAvailable (7U)
 * LIN_AudioSystemStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_OffOn_Off (0U)
 *   Cx1_OffOn_On (1U)
 *   Cx2_OffOn_Error (2U)
 *   Cx3_OffOn_NotAvailable (3U)
 * LIN_BTStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_BTStatus_BTOff (0U)
 *   Cx1_BTStatus_BTOnAndNoDeviceConnected (1U)
 *   Cx2_BTStatus_BTOnAndDeviceConnected (2U)
 *   Cx3_BTStatus_NotAvailable (3U)
 * LIN_BackButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BackLightDimming_Status: Enumeration of integer in interval [0...31] with enumerators
 *   Cx00_Thumbwheel_stat_ThumbWheelPos0 (0U)
 *   Cx01_Thumbwheel_stat_ThumbWheelPos1 (1U)
 *   Cx02_Thumbwheel_stat_ThumbWheelPos2 (2U)
 *   Cx03_Thumbwheel_stat_ThumbWheelPos3 (3U)
 *   Cx04_Thumbwheel_stat_ThumbWheelPos4 (4U)
 *   Cx05_Thumbwheel_stat_ThumbWheelPos5 (5U)
 *   Cx06_Thumbwheel_stat_ThumbWheelPos6 (6U)
 *   Cx07_Thumbwheel_stat_ThumbWheelPos7 (7U)
 *   Cx08_Thumbwheel_stat_ThumbWheelPos8 (8U)
 *   Cx09_Thumbwheel_stat_ThumbWheelPos9 (9U)
 *   Cx0A_Thumbwheel_stat_ThumbWheelPos10 (10U)
 *   Cx0B_Thumbwheel_stat_ThumbWheelPos11 (11U)
 *   Cx0C_Thumbwheel_stat_ThumbWheelPos12 (12U)
 *   Cx0D_Thumbwheel_stat_ThumbWheelPos13 (13U)
 *   Cx0E_Thumbwheel_stat_ThumbWheelPos14 (14U)
 *   Cx0F_Thumbwheel_stat_ThumbWheelPos15 (15U)
 *   Cx10_Thumbwheel_stat_ThumbWheelPos16 (16U)
 *   Cx11_Thumbwheel_stat_Spare (17U)
 *   Cx12_Thumbwheel_stat_Spare_01 (18U)
 *   Cx13_Thumbwheel_stat_Spare_02 (19U)
 *   Cx14_Thumbwheel_stat_Spare_03 (20U)
 *   Cx15_Thumbwheel_stat_Spare_04 (21U)
 *   Cx16_Thumbwheel_stat_Spare_05 (22U)
 *   Cx17_Thumbwheel_stat_Spare_06 (23U)
 *   Cx18_Thumbwheel_stat_Spare_07 (24U)
 *   Cx19_Thumbwheel_stat_Spare_08 (25U)
 *   Cx1A_Thumbwheel_stat_Spare_09 (26U)
 *   Cx1B_Thumbwheel_stat_Spare_10 (27U)
 *   Cx1C_Thumbwheel_stat_Spare_11 (28U)
 *   Cx1D_Thumbwheel_stat_Spare_12 (29U)
 *   Cx1E_Thumbwheel_stat_Error (30U)
 *   Cx1F_Thumbwheel_stat_NotAvaliable (31U)
 * LIN_BlackPanelMode_ButtonStat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkBAudioOnOff_ButtonStat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkBIntLightActvnBtn_stat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkBParkHeater_ButtonStat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkBTempDec_ButtonStat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkBTempInc_ButtonStat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkBVolumeDown_ButtonStat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkBVolumeUp_ButtonStat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2AudioOnOff_ButtonSta: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2Fade_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2IntLightActvnBtn_sta: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2IntLightDecBtn_stat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2IntLightIncBtn_stat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2LockButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2OnOFF_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2PHTi_rqs_Timer_cmd: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_ParkHeaterTimer_cmd_NoAction (0U)
 *   Cx1_ParkHeaterTimer_cmd_TimerEnable (1U)
 *   Cx2_ParkHeaterTimer_cmd_TimerDisable (2U)
 *   Cx3_ParkHeaterTimer_cmd_Spare (3U)
 *   Cx4_ParkHeaterTimer_cmd_Spare_01 (4U)
 *   Cx5_ParkHeaterTimer_cmd_Spare_02 (5U)
 *   Cx6_ParkHeaterTimer_cmd_Error (6U)
 *   Cx7_ParkHeaterTimer_cmd_NotAvailable (7U)
 * LIN_BunkH2ParkHeater_ButtonSta: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2Phone_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2PowerWinCloseDSBtn_s: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2PowerWinClosePSBtn_s: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2PowerWinOpenDSBtn_st: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2PowerWinOpenPSBtn_st: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2RoofhatchCloseBtn_St: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2RoofhatchOpenBtn_Sta: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2TempDec_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2TempInc_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2VolumeDown_ButtonSta: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_BunkH2VolumeUp_ButtonStatu: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_DRL_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_DaytimeRunningLight_Indica: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_DifflockDeactivationBtn_st: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_DifflockMode_Wheelstatus: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_FreeWheel_Status_NoMovement (0U)
 *   Cx1_FreeWheel_Status_1StepClockwise (1U)
 *   Cx2_FreeWheel_Status_2StepsClockwise (2U)
 *   Cx3_FreeWheel_Status_3StepsClockwise (3U)
 *   Cx4_FreeWheel_Status_4StepsClockwise (4U)
 *   Cx5_FreeWheel_Status_5StepsClockwise (5U)
 *   Cx6_FreeWheel_Status_6StepsClockwise (6U)
 *   Cx7_FreeWheel_Status_1StepCounterClockwise (7U)
 *   Cx8_FreeWheel_Status_2StepsCounterClockwise (8U)
 *   Cx9_FreeWheel_Status_3StepsCounterClockwise (9U)
 *   CxA_FreeWheel_Status_4StepsCounterClockwise (10U)
 *   CxB_FreeWheel_Status_5StepsCounterClockwise (11U)
 *   CxC_FreeWheel_Status_6StepsCounterClockwise (12U)
 *   CxD_FreeWheel_Status_Spare (13U)
 *   CxE_FreeWheel_Status_Error (14U)
 *   CxF_FreeWheel_Status_NotAvailable (15U)
 * LIN_DifflockOnOff_Indication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_DoorAutoFuncBtn_stat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_DoorAutoFuncInd_cmd: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_Down_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_DrivingLightPlus_Indicatio: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_DrivingLight_Indication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_EscButtonMuddySiteDeviceIn: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_EscButtonMuddySiteStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_FCWPushButton: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_FCW_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_FogLightFront_ButtonStat_1: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_FogLightFront_ButtonStat_2: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_FogLightRear_ButtonStat_1: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_FogLightRear_ButtonStat_2: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_FrontFog_Indication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_HeadLampUpDown_SwitchStatu: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_A3PosSwitchStatus_Middle (0U)
 *   Cx1_A3PosSwitchStatus_Lower (1U)
 *   Cx2_A3PosSwitchStatus_Upper (2U)
 *   Cx3_A3PosSwitchStatus_Spare (3U)
 *   Cx4_A3PosSwitchStatus_Spare_01 (4U)
 *   Cx5_A3PosSwitchStatus_Spare_02 (5U)
 *   Cx6_A3PosSwitchStatus_Error (6U)
 *   Cx7_A3PosSwitchStatus_NotAvailable (7U)
 * LIN_IntLghtCenterBtnFreeWhl_s: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_IntLghtDimmingLvlDecBtn_s: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_IntLghtDimmingLvlFreeWhl_s: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_FreeWheel_Status_NoMovement (0U)
 *   Cx1_FreeWheel_Status_1StepClockwise (1U)
 *   Cx2_FreeWheel_Status_2StepsClockwise (2U)
 *   Cx3_FreeWheel_Status_3StepsClockwise (3U)
 *   Cx4_FreeWheel_Status_4StepsClockwise (4U)
 *   Cx5_FreeWheel_Status_5StepsClockwise (5U)
 *   Cx6_FreeWheel_Status_6StepsClockwise (6U)
 *   Cx7_FreeWheel_Status_1StepCounterClockwise (7U)
 *   Cx8_FreeWheel_Status_2StepsCounterClockwise (8U)
 *   Cx9_FreeWheel_Status_3StepsCounterClockwise (9U)
 *   CxA_FreeWheel_Status_4StepsCounterClockwise (10U)
 *   CxB_FreeWheel_Status_5StepsCounterClockwise (11U)
 *   CxC_FreeWheel_Status_6StepsCounterClockwise (12U)
 *   CxD_FreeWheel_Status_Spare (13U)
 *   CxE_FreeWheel_Status_Error (14U)
 *   CxF_FreeWheel_Status_NotAvailable (15U)
 * LIN_IntLghtDimmingLvlIncBtn_s: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_IntLghtMaxModeBtnPnl2_s: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_IntLghtModeInd_cmd_IL_Mode: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_IL_Mode_OFF (0U)
 *   Cx1_IL_Mode_NightDriving (1U)
 *   Cx2_IL_Mode_Resting (2U)
 *   Cx3_IL_Mode_Max (3U)
 *   Cx4_IL_Mode_spare_1 (4U)
 *   Cx5_IL_Mode_spare_2 (5U)
 *   Cx6_IL_Mode_ErrorIndicator (6U)
 *   Cx7_IL_Mode_NotAvailable (7U)
 * LIN_IntLghtModeSelrFreeWheel_s: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_FreeWheel_Status_NoMovement (0U)
 *   Cx1_FreeWheel_Status_1StepClockwise (1U)
 *   Cx2_FreeWheel_Status_2StepsClockwise (2U)
 *   Cx3_FreeWheel_Status_3StepsClockwise (3U)
 *   Cx4_FreeWheel_Status_4StepsClockwise (4U)
 *   Cx5_FreeWheel_Status_5StepsClockwise (5U)
 *   Cx6_FreeWheel_Status_6StepsClockwise (6U)
 *   Cx7_FreeWheel_Status_1StepCounterClockwise (7U)
 *   Cx8_FreeWheel_Status_2StepsCounterClockwise (8U)
 *   Cx9_FreeWheel_Status_3StepsCounterClockwise (9U)
 *   CxA_FreeWheel_Status_4StepsCounterClockwise (10U)
 *   CxB_FreeWheel_Status_5StepsCounterClockwise (11U)
 *   CxC_FreeWheel_Status_6StepsCounterClockwise (12U)
 *   CxD_FreeWheel_Status_Spare (13U)
 *   CxE_FreeWheel_Status_Error (14U)
 *   CxF_FreeWheel_Status_NotAvailable (15U)
 * LIN_IntLghtNightModeBt2_s: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_IntLghtOffModeInd_cmd: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_IntLghtRestModeBtnPnl2_s: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_IntLightMaxModeInd_cmd: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_IntLightNightModeInd_cmd: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_IntLightRestingModeInd_cmd: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_LKSPushButton: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_LKS_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_LevelingThumbwheel_stat: Enumeration of integer in interval [0...31] with enumerators
 *   Cx00_Thumbwheel_stat_ThumbWheelPos0 (0U)
 *   Cx01_Thumbwheel_stat_ThumbWheelPos1 (1U)
 *   Cx02_Thumbwheel_stat_ThumbWheelPos2 (2U)
 *   Cx03_Thumbwheel_stat_ThumbWheelPos3 (3U)
 *   Cx04_Thumbwheel_stat_ThumbWheelPos4 (4U)
 *   Cx05_Thumbwheel_stat_ThumbWheelPos5 (5U)
 *   Cx06_Thumbwheel_stat_ThumbWheelPos6 (6U)
 *   Cx07_Thumbwheel_stat_ThumbWheelPos7 (7U)
 *   Cx08_Thumbwheel_stat_ThumbWheelPos8 (8U)
 *   Cx09_Thumbwheel_stat_ThumbWheelPos9 (9U)
 *   Cx0A_Thumbwheel_stat_ThumbWheelPos10 (10U)
 *   Cx0B_Thumbwheel_stat_ThumbWheelPos11 (11U)
 *   Cx0C_Thumbwheel_stat_ThumbWheelPos12 (12U)
 *   Cx0D_Thumbwheel_stat_ThumbWheelPos13 (13U)
 *   Cx0E_Thumbwheel_stat_ThumbWheelPos14 (14U)
 *   Cx0F_Thumbwheel_stat_ThumbWheelPos15 (15U)
 *   Cx10_Thumbwheel_stat_ThumbWheelPos16 (16U)
 *   Cx11_Thumbwheel_stat_Spare (17U)
 *   Cx12_Thumbwheel_stat_Spare_01 (18U)
 *   Cx13_Thumbwheel_stat_Spare_02 (19U)
 *   Cx14_Thumbwheel_stat_Spare_03 (20U)
 *   Cx15_Thumbwheel_stat_Spare_04 (21U)
 *   Cx16_Thumbwheel_stat_Spare_05 (22U)
 *   Cx17_Thumbwheel_stat_Spare_06 (23U)
 *   Cx18_Thumbwheel_stat_Spare_07 (24U)
 *   Cx19_Thumbwheel_stat_Spare_08 (25U)
 *   Cx1A_Thumbwheel_stat_Spare_09 (26U)
 *   Cx1B_Thumbwheel_stat_Spare_10 (27U)
 *   Cx1C_Thumbwheel_stat_Spare_11 (28U)
 *   Cx1D_Thumbwheel_stat_Spare_12 (29U)
 *   Cx1E_Thumbwheel_stat_Error (30U)
 *   Cx1F_Thumbwheel_stat_NotAvaliable (31U)
 * LIN_LightMode_Status_1: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_FreeWheel_Status_NoMovement (0U)
 *   Cx1_FreeWheel_Status_1StepClockwise (1U)
 *   Cx2_FreeWheel_Status_2StepsClockwise (2U)
 *   Cx3_FreeWheel_Status_3StepsClockwise (3U)
 *   Cx4_FreeWheel_Status_4StepsClockwise (4U)
 *   Cx5_FreeWheel_Status_5StepsClockwise (5U)
 *   Cx6_FreeWheel_Status_6StepsClockwise (6U)
 *   Cx7_FreeWheel_Status_1StepCounterClockwise (7U)
 *   Cx8_FreeWheel_Status_2StepsCounterClockwise (8U)
 *   Cx9_FreeWheel_Status_3StepsCounterClockwise (9U)
 *   CxA_FreeWheel_Status_4StepsCounterClockwise (10U)
 *   CxB_FreeWheel_Status_5StepsCounterClockwise (11U)
 *   CxC_FreeWheel_Status_6StepsCounterClockwise (12U)
 *   CxD_FreeWheel_Status_Spare (13U)
 *   CxE_FreeWheel_Status_Error (14U)
 *   CxF_FreeWheel_Status_NotAvailable (15U)
 * LIN_LightMode_Status_2: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_FreeWheel_Status_NoMovement (0U)
 *   Cx1_FreeWheel_Status_1StepClockwise (1U)
 *   Cx2_FreeWheel_Status_2StepsClockwise (2U)
 *   Cx3_FreeWheel_Status_3StepsClockwise (3U)
 *   Cx4_FreeWheel_Status_4StepsClockwise (4U)
 *   Cx5_FreeWheel_Status_5StepsClockwise (5U)
 *   Cx6_FreeWheel_Status_6StepsClockwise (6U)
 *   Cx7_FreeWheel_Status_1StepCounterClockwise (7U)
 *   Cx8_FreeWheel_Status_2StepsCounterClockwise (8U)
 *   Cx9_FreeWheel_Status_3StepsCounterClockwise (9U)
 *   CxA_FreeWheel_Status_4StepsCounterClockwise (10U)
 *   CxB_FreeWheel_Status_5StepsCounterClockwise (11U)
 *   CxC_FreeWheel_Status_6StepsCounterClockwise (12U)
 *   CxD_FreeWheel_Status_Spare (13U)
 *   CxE_FreeWheel_Status_Error (14U)
 *   CxF_FreeWheel_Status_NotAvailable (15U)
 * LIN_M1_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_M2_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_M3_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_MemButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_Offroad_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_Offroad_Indication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_ParkingLight_Indication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_PhoneButtonIndication_cmd: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_RearFog_Indication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_RearWorkProjector_BtnStat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_RearWorkProjector_Indicati: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_SelectButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_SpeedControlModeButtonStat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_SpeedControlModeWheelStat: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_FreeWheel_Status_NoMovement (0U)
 *   Cx1_FreeWheel_Status_1StepClockwise (1U)
 *   Cx2_FreeWheel_Status_2StepsClockwise (2U)
 *   Cx3_FreeWheel_Status_3StepsClockwise (3U)
 *   Cx4_FreeWheel_Status_4StepsClockwise (4U)
 *   Cx5_FreeWheel_Status_5StepsClockwise (5U)
 *   Cx6_FreeWheel_Status_6StepsClockwise (6U)
 *   Cx7_FreeWheel_Status_1StepCounterClockwise (7U)
 *   Cx8_FreeWheel_Status_2StepsCounterClockwise (8U)
 *   Cx9_FreeWheel_Status_3StepsCounterClockwise (9U)
 *   CxA_FreeWheel_Status_4StepsCounterClockwise (10U)
 *   CxB_FreeWheel_Status_5StepsCounterClockwise (11U)
 *   CxC_FreeWheel_Status_6StepsCounterClockwise (12U)
 *   CxD_FreeWheel_Status_Spare (13U)
 *   CxE_FreeWheel_Status_Error (14U)
 *   CxF_FreeWheel_Status_NotAvailable (15U)
 * LIN_StopButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_TCP_ABS_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_TCP_ATC_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_TCP_ESC_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_TCP_KnobPostionStatus: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_TCPKnobPostionStatus_Pos0 (0U)
 *   Cx1_TCPKnobPostionStatus_Pos1 (1U)
 *   Cx2_TCPKnobPostionStatus_Pos2 (2U)
 *   Cx3_TCPKnobPostionStatus_Pos3 (3U)
 *   Cx4_TCPKnobPostionStatus_Pos4 (4U)
 *   Cx5_TCPKnobPostionStatus_Spare1 (5U)
 *   Cx6_TCPKnobPostionStatus_Error (6U)
 *   Cx7_TCPKnobPostionStatus_NotAvailable (7U)
 * LIN_TCP_TCS_ButtonStatus: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PushButtonStatus_Neutral (0U)
 *   Cx1_PushButtonStatus_Pushed (1U)
 *   Cx2_PushButtonStatus_Error (2U)
 *   Cx3_PushButtonStatus_NotAvailable (3U)
 * LIN_Up_DeviceIndication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 * LIN_WRDownButtonStatus: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_EvalButtonRequest_Neutral (0U)
 *   Cx1_EvalButtonRequest_EvaluatingPush (1U)
 *   Cx2_EvalButtonRequest_ContinuouslyPushed (2U)
 *   Cx3_EvalButtonRequest_ShortPush (3U)
 *   Cx4_EvalButtonRequest_Spare1 (4U)
 *   Cx5_EvalButtonRequest_Spare2 (5U)
 *   Cx6_EvalButtonRequest_Error (6U)
 *   Cx7_EvalButtonRequest_NotAvailable (7U)
 * LIN_WRUpButtonStatus: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_EvalButtonRequest_Neutral (0U)
 *   Cx1_EvalButtonRequest_EvaluatingPush (1U)
 *   Cx2_EvalButtonRequest_ContinuouslyPushed (2U)
 *   Cx3_EvalButtonRequest_ShortPush (3U)
 *   Cx4_EvalButtonRequest_Spare1 (4U)
 *   Cx5_EvalButtonRequest_Spare2 (5U)
 *   Cx6_EvalButtonRequest_Error (6U)
 *   Cx7_EvalButtonRequest_NotAvailable (7U)
 * TCS_Indication: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_DeviceIndication_Off (0U)
 *   Cx1_DeviceIndication_On (1U)
 *   Cx2_DeviceIndication_Blink (2U)
 *   Cx3_DeviceIndication_SpareValue (3U)
 *
 * Array Types:
 * ============
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
 *
 * Record Types:
 * =============
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
 *********************************************************************************************************************/


#define TestLin_START_SEC_CODE
#include "TestLin_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReTestLin
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DiagInfoCCFW_DiagInfoCCFW(DiagInfoCCFW *data)
 *   Std_ReturnType Rte_Read_DiagInfoDLFW_DiagInfoDLFW(DiagInfoDLFW *data)
 *   Std_ReturnType Rte_Read_DiagInfoELCP1_DiagInfoELCP1(DiagInfoELCP1 *data)
 *   Std_ReturnType Rte_Read_DiagInfoELCP2_DiagInfoELCP2(DiagInfoELCP2 *data)
 *   Std_ReturnType Rte_Read_DiagInfoILCP1_DiagInfoILCP1(DiagInfoILCP1 *data)
 *   Std_ReturnType Rte_Read_DiagInfoILCP2_DiagInfoILCP2(DiagInfoILCP2 *data)
 *   Std_ReturnType Rte_Read_DiagInfoLECM2_DiagInfoLECM2(DiagInfoLECM2 *data)
 *   Std_ReturnType Rte_Read_DiagInfoLECMBasic_DiagInfoLECMBasic(DiagInfoLECMBasic *data)
 *   Std_ReturnType Rte_Read_DiagInfoRCECS_DiagInfoRCECS(DiagInfoRCECS *data)
 *   Std_ReturnType Rte_Read_DiagInfoTCP_DiagInfoTCP(DiagInfoTCP *data)
 *   Std_ReturnType Rte_Read_FSP1DiagInfoL1_FSP1DiagInfoL1(FSP1DiagInfoL1 *data)
 *   Std_ReturnType Rte_Read_FSP1DiagInfoL2_FSP1DiagInfoL2(FSP1DiagInfoL2 *data)
 *   Std_ReturnType Rte_Read_FSP1DiagInfoL3_FSP1DiagInfoL3(FSP1DiagInfoL3 *data)
 *   Std_ReturnType Rte_Read_FSP1DiagInfoL4_FSP1DiagInfoL4(FSP1DiagInfoL4 *data)
 *   Std_ReturnType Rte_Read_FSP1DiagInfoL5_FSP1DiagInfoL5(FSP1DiagInfoL5 *data)
 *   Std_ReturnType Rte_Read_FSP1ResponseErrorL1_FSP1ResponseErrorL1(FSP1ResponseErrorL1 *data)
 *   Std_ReturnType Rte_Read_FSP1ResponseErrorL2_FSP1ResponseErrorL2(FSP1ResponseErrorL2 *data)
 *   Std_ReturnType Rte_Read_FSP1ResponseErrorL3_FSP1ResponseErrorL3(FSP1ResponseErrorL3 *data)
 *   Std_ReturnType Rte_Read_FSP1ResponseErrorL4_FSP1ResponseErrorL4(FSP1ResponseErrorL4 *data)
 *   Std_ReturnType Rte_Read_FSP1ResponseErrorL5_FSP1ResponseErrorL5(FSP1ResponseErrorL5 *data)
 *   Std_ReturnType Rte_Read_FSP1SwitchStatusL2_FSP1SwitchStatusL2(FSP1SwitchStatusL2 *data)
 *   Std_ReturnType Rte_Read_FSP1SwitchStatusL3_FSP1SwitchStatusL3(FSP1SwitchStatusL3 *data)
 *   Std_ReturnType Rte_Read_FSP1SwitchStatusL4_FSP1SwitchStatusL4(FSP1SwitchStatusL4 *data)
 *   Std_ReturnType Rte_Read_FSP1SwitchStatusL5_FSP1SwitchStatusL5(FSP1SwitchStatusL5 *data)
 *   Std_ReturnType Rte_Read_FSP2DiagInfoL1_FSP2DiagInfoL1(FSP2DiagInfoL1 *data)
 *   Std_ReturnType Rte_Read_FSP2DiagInfoL2_FSP2DiagInfoL2(FSP2DiagInfoL2 *data)
 *   Std_ReturnType Rte_Read_FSP2DiagInfoL3_FSP2DiagInfoL3(FSP2DiagInfoL3 *data)
 *   Std_ReturnType Rte_Read_FSP2ResponseErrorL1_FSP2ResponseErrorL1(FSP2ResponseErrorL1 *data)
 *   Std_ReturnType Rte_Read_FSP2ResponseErrorL2_FSP2ResponseErrorL2(FSP2ResponseErrorL2 *data)
 *   Std_ReturnType Rte_Read_FSP2ResponseErrorL3_FSP2ResponseErrorL3(FSP2ResponseErrorL3 *data)
 *   Std_ReturnType Rte_Read_FSP2SwitchStatusL1_FSP2SwitchStatusL1(FSP2SwitchStatusL1 *data)
 *   Std_ReturnType Rte_Read_FSP2SwitchStatusL2_FSP2SwitchStatusL2(FSP2SwitchStatusL2 *data)
 *   Std_ReturnType Rte_Read_FSP2SwitchStatusL3_FSP2SwitchStatusL3(FSP2SwitchStatusL3 *data)
 *   Std_ReturnType Rte_Read_FSP3DiagInfoL2_FSP3DiagInfoL2(FSP3DiagInfoL2 *data)
 *   Std_ReturnType Rte_Read_FSP3ResponseErrorL2_FSP3ResponseErrorL2(FSP3ResponseErrorL2 *data)
 *   Std_ReturnType Rte_Read_FSP3SwitchStatusL2_FSP3SwitchStatusL2(FSP3SwitchStatusL2 *data)
 *   Std_ReturnType Rte_Read_FSP4DiagInfoL2_FSP4DiagInfoL2(FSP4DiagInfoL2 *data)
 *   Std_ReturnType Rte_Read_FSP4ResponseErrorL2_FSP4ResponseErrorL2(FSP4ResponseErrorL2 *data)
 *   Std_ReturnType Rte_Read_FSP4SwitchStatusL2_FSP4SwitchStatusL2(FSP4SwitchStatusL2 *data)
 *   Std_ReturnType Rte_Read_LIN_AdjustButtonStatus_LIN_AdjustButtonStatus(LIN_AdjustButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_AlmClkSetCurAlm_rqst_sg_LIN_AlmClkSetCurAlm_rqst_sg(LIN_AlmClkSetCurAlm_rqst_sg *data)
 *   Std_ReturnType Rte_Read_LIN_BackButtonStatus_LIN_BackButtonStatus(LIN_BackButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_BackLightDimming_Status_LIN_BackLightDimming_Status(LIN_BackLightDimming_Status *data)
 *   Std_ReturnType Rte_Read_LIN_BlackPanelMode_ButtonStat_LIN_BlackPanelMode_ButtonStat(LIN_BlackPanelMode_ButtonStat *data)
 *   Std_ReturnType Rte_Read_LIN_BunkBAudioOnOff_ButtonStat_LIN_BunkBAudioOnOff_ButtonStat(LIN_BunkBAudioOnOff_ButtonStat *data)
 *   Std_ReturnType Rte_Read_LIN_BunkBIntLightActvnBtn_stat_LIN_BunkBIntLightActvnBtn_stat(LIN_BunkBIntLightActvnBtn_stat *data)
 *   Std_ReturnType Rte_Read_LIN_BunkBParkHeater_ButtonStat_LIN_BunkBParkHeater_ButtonStat(LIN_BunkBParkHeater_ButtonStat *data)
 *   Std_ReturnType Rte_Read_LIN_BunkBTempDec_ButtonStat_LIN_BunkBTempDec_ButtonStat(LIN_BunkBTempDec_ButtonStat *data)
 *   Std_ReturnType Rte_Read_LIN_BunkBTempInc_ButtonStat_LIN_BunkBTempInc_ButtonStat(LIN_BunkBTempInc_ButtonStat *data)
 *   Std_ReturnType Rte_Read_LIN_BunkBVolumeDown_ButtonStat_LIN_BunkBVolumeDown_ButtonStat(LIN_BunkBVolumeDown_ButtonStat *data)
 *   Std_ReturnType Rte_Read_LIN_BunkBVolumeUp_ButtonStat_LIN_BunkBVolumeUp_ButtonStat(LIN_BunkBVolumeUp_ButtonStat *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2AudioOnOff_ButtonSta_LIN_BunkH2AudioOnOff_ButtonSta(LIN_BunkH2AudioOnOff_ButtonSta *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2Fade_ButtonStatus_LIN_BunkH2Fade_ButtonStatus(LIN_BunkH2Fade_ButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2IntLightActvnBtn_sta_LIN_BunkH2IntLightActvnBtn_sta(LIN_BunkH2IntLightActvnBtn_sta *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2IntLightDecBtn_stat_LIN_BunkH2IntLightDecBtn_stat(LIN_BunkH2IntLightDecBtn_stat *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2IntLightIncBtn_stat_LIN_BunkH2IntLightIncBtn_stat(LIN_BunkH2IntLightIncBtn_stat *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2LockButtonStatus_LIN_BunkH2LockButtonStatus(LIN_BunkH2LockButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2OnOFF_ButtonStatus_LIN_BunkH2OnOFF_ButtonStatus(LIN_BunkH2OnOFF_ButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2PHTi_rqs_sg_LIN_BunkH2PHTi_rqs_sg(LIN_BunkH2PHTi_rqs_sg *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2ParkHeater_ButtonSta_LIN_BunkH2ParkHeater_ButtonSta(LIN_BunkH2ParkHeater_ButtonSta *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2Phone_ButtonStatus_LIN_BunkH2Phone_ButtonStatus(LIN_BunkH2Phone_ButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2PowerWinCloseDSBtn_s_LIN_BunkH2PowerWinCloseDSBtn_s(LIN_BunkH2PowerWinCloseDSBtn_s *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2PowerWinClosePSBtn_s_LIN_BunkH2PowerWinClosePSBtn_s(LIN_BunkH2PowerWinClosePSBtn_s *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2PowerWinOpenDSBtn_st_LIN_BunkH2PowerWinOpenDSBtn_st(LIN_BunkH2PowerWinOpenDSBtn_st *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2PowerWinOpenPSBtn_st_LIN_BunkH2PowerWinOpenPSBtn_st(LIN_BunkH2PowerWinOpenPSBtn_st *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2RoofhatchCloseBtn_St_LIN_BunkH2RoofhatchCloseBtn_St(LIN_BunkH2RoofhatchCloseBtn_St *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2RoofhatchOpenBtn_Sta_LIN_BunkH2RoofhatchOpenBtn_Sta(LIN_BunkH2RoofhatchOpenBtn_Sta *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2TempDec_ButtonStatus_LIN_BunkH2TempDec_ButtonStatus(LIN_BunkH2TempDec_ButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2TempInc_ButtonStatus_LIN_BunkH2TempInc_ButtonStatus(LIN_BunkH2TempInc_ButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2VolumeDown_ButtonSta_LIN_BunkH2VolumeDown_ButtonSta(LIN_BunkH2VolumeDown_ButtonSta *data)
 *   Std_ReturnType Rte_Read_LIN_BunkH2VolumeUp_ButtonStatu_LIN_BunkH2VolumeUp_ButtonStatu(LIN_BunkH2VolumeUp_ButtonStatu *data)
 *   Std_ReturnType Rte_Read_LIN_DRL_ButtonStatus_LIN_DRL_ButtonStatus(LIN_DRL_ButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_DifflockDeactivationBtn_st_LIN_DifflockDeactivationBtn_st(LIN_DifflockDeactivationBtn_st *data)
 *   Std_ReturnType Rte_Read_LIN_DifflockMode_Wheelstatus_LIN_DifflockMode_Wheelstatus(LIN_DifflockMode_Wheelstatus *data)
 *   Std_ReturnType Rte_Read_LIN_DoorAutoFuncBtn_stat_LIN_DoorAutoFuncBtn_stat(LIN_DoorAutoFuncBtn_stat *data)
 *   Std_ReturnType Rte_Read_LIN_EscButtonMuddySiteStatus_LIN_EscButtonMuddySiteStatus(LIN_EscButtonMuddySiteStatus *data)
 *   Std_ReturnType Rte_Read_LIN_FCWPushButton_LIN_FCWPushButton(LIN_FCWPushButton *data)
 *   Std_ReturnType Rte_Read_LIN_FogLightFront_ButtonStat_1_LIN_FogLightFront_ButtonStat_1(LIN_FogLightFront_ButtonStat_1 *data)
 *   Std_ReturnType Rte_Read_LIN_FogLightFront_ButtonStat_2_LIN_FogLightFront_ButtonStat_2(LIN_FogLightFront_ButtonStat_2 *data)
 *   Std_ReturnType Rte_Read_LIN_FogLightRear_ButtonStat_1_LIN_FogLightRear_ButtonStat_1(LIN_FogLightRear_ButtonStat_1 *data)
 *   Std_ReturnType Rte_Read_LIN_FogLightRear_ButtonStat_2_LIN_FogLightRear_ButtonStat_2(LIN_FogLightRear_ButtonStat_2 *data)
 *   Std_ReturnType Rte_Read_LIN_HeadLampUpDown_SwitchStatu_LIN_HeadLampUpDown_SwitchStatu(LIN_HeadLampUpDown_SwitchStatu *data)
 *   Std_ReturnType Rte_Read_LIN_IntLghtCenterBtnFreeWhl_s_LIN_IntLghtCenterBtnFreeWhl_s(LIN_IntLghtCenterBtnFreeWhl_s *data)
 *   Std_ReturnType Rte_Read_LIN_IntLghtDimmingLvlDecBtn_s_LIN_IntLghtDimmingLvlDecBtn_s(LIN_IntLghtDimmingLvlDecBtn_s *data)
 *   Std_ReturnType Rte_Read_LIN_IntLghtDimmingLvlFreeWhl_s_LIN_IntLghtDimmingLvlFreeWhl_s(LIN_IntLghtDimmingLvlFreeWhl_s *data)
 *   Std_ReturnType Rte_Read_LIN_IntLghtDimmingLvlIncBtn_s_LIN_IntLghtDimmingLvlIncBtn_s(LIN_IntLghtDimmingLvlIncBtn_s *data)
 *   Std_ReturnType Rte_Read_LIN_IntLghtMaxModeBtnPnl2_s_LIN_IntLghtMaxModeBtnPnl2_s(LIN_IntLghtMaxModeBtnPnl2_s *data)
 *   Std_ReturnType Rte_Read_LIN_IntLghtModeSelrFreeWheel_s_LIN_IntLghtModeSelrFreeWheel_s(LIN_IntLghtModeSelrFreeWheel_s *data)
 *   Std_ReturnType Rte_Read_LIN_IntLghtNightModeBt2_s_LIN_IntLghtNightModeBt2_s(LIN_IntLghtNightModeBt2_s *data)
 *   Std_ReturnType Rte_Read_LIN_IntLghtRestModeBtnPnl2_s_LIN_IntLghtRestModeBtnPnl2_s(LIN_IntLghtRestModeBtnPnl2_s *data)
 *   Std_ReturnType Rte_Read_LIN_LKSPushButton_LIN_LKSPushButton(LIN_LKSPushButton *data)
 *   Std_ReturnType Rte_Read_LIN_LevelingThumbwheel_stat_LIN_LevelingThumbwheel_stat(LIN_LevelingThumbwheel_stat *data)
 *   Std_ReturnType Rte_Read_LIN_LightMode_Status_1_LIN_LightMode_Status_1(LIN_LightMode_Status_1 *data)
 *   Std_ReturnType Rte_Read_LIN_LightMode_Status_2_LIN_LightMode_Status_2(LIN_LightMode_Status_2 *data)
 *   Std_ReturnType Rte_Read_LIN_MemButtonStatus_LIN_MemButtonStatus(LIN_MemButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_Offroad_ButtonStatus_LIN_Offroad_ButtonStatus(LIN_Offroad_ButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_RearWorkProjector_BtnStat_LIN_RearWorkProjector_BtnStat(LIN_RearWorkProjector_BtnStat *data)
 *   Std_ReturnType Rte_Read_LIN_SelectButtonStatus_LIN_SelectButtonStatus(LIN_SelectButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_SpeedControlModeButtonStat_LIN_SpeedControlModeButtonStat(LIN_SpeedControlModeButtonStat *data)
 *   Std_ReturnType Rte_Read_LIN_SpeedControlModeWheelStat_LIN_SpeedControlModeWheelStat(LIN_SpeedControlModeWheelStat *data)
 *   Std_ReturnType Rte_Read_LIN_StopButtonStatus_LIN_StopButtonStatus(LIN_StopButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_TCP_ABS_ButtonStatus_LIN_TCP_ABS_ButtonStatus(LIN_TCP_ABS_ButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_TCP_ATC_ButtonStatus_LIN_TCP_ATC_ButtonStatus(LIN_TCP_ATC_ButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_TCP_ESC_ButtonStatus_LIN_TCP_ESC_ButtonStatus(LIN_TCP_ESC_ButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_TCP_KnobPostionStatus_LIN_TCP_KnobPostionStatus(LIN_TCP_KnobPostionStatus *data)
 *   Std_ReturnType Rte_Read_LIN_TCP_TCS_ButtonStatus_LIN_TCP_TCS_ButtonStatus(LIN_TCP_TCS_ButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_WRDownButtonStatus_LIN_WRDownButtonStatus(LIN_WRDownButtonStatus *data)
 *   Std_ReturnType Rte_Read_LIN_WRUpButtonStatus_LIN_WRUpButtonStatus(LIN_WRUpButtonStatus *data)
 *   Std_ReturnType Rte_Read_ResponseErrorCCFW_ResponseErrorCCFW(ResponseErrorCCFW *data)
 *   Std_ReturnType Rte_Read_ResponseErrorDLFW_ResponseErrorDLFW(ResponseErrorDLFW *data)
 *   Std_ReturnType Rte_Read_ResponseErrorELCP1_ResponseErrorELCP1(ResponseErrorELCP1 *data)
 *   Std_ReturnType Rte_Read_ResponseErrorELCP2_ResponseErrorELCP2(ResponseErrorELCP2 *data)
 *   Std_ReturnType Rte_Read_ResponseErrorILCP1_ResponseErrorILCP1(ResponseErrorILCP1 *data)
 *   Std_ReturnType Rte_Read_ResponseErrorILCP2_ResponseErrorILCP2(ResponseErrorILCP2 *data)
 *   Std_ReturnType Rte_Read_ResponseErrorLECM2_ResponseErrorLECM2(ResponseErrorLECM2 *data)
 *   Std_ReturnType Rte_Read_ResponseErrorLECMBasic_ResponseErrorLECMBasic(ResponseErrorLECMBasic *data)
 *   Std_ReturnType Rte_Read_ResponseErrorRCECS_ResponseErrorRCECS(ResponseErrorRCECS *data)
 *   Std_ReturnType Rte_Read_ResponseErrorTCP_ResponseErrorTCP(ResponseErrorTCP *data)
 *   Std_ReturnType Rte_Read_SwitchDetectionNeeded1L1_SwitchDetectionNeeded1L1(SwitchDetectionNeeded1L1 *data)
 *   Std_ReturnType Rte_Read_SwitchDetectionNeeded1L2_SwitchDetectionNeeded1L2(SwitchDetectionNeeded1L2 *data)
 *   Std_ReturnType Rte_Read_SwitchDetectionNeeded1L3_SwitchDetectionNeeded1L3(SwitchDetectionNeeded1L3 *data)
 *   Std_ReturnType Rte_Read_SwitchDetectionNeeded1L4_SwitchDetectionNeeded1L4(SwitchDetectionNeeded1L4 *data)
 *   Std_ReturnType Rte_Read_SwitchDetectionNeeded1L5_SwitchDetectionNeeded1L5(SwitchDetectionNeeded1L5 *data)
 *   Std_ReturnType Rte_Read_SwitchDetectionNeeded2L1_SwitchDetectionNeeded2L1(SwitchDetectionNeeded2L1 *data)
 *   Std_ReturnType Rte_Read_SwitchDetectionNeeded2L2_SwitchDetectionNeeded2L2(SwitchDetectionNeeded2L2 *data)
 *   Std_ReturnType Rte_Read_SwitchDetectionNeeded2L3_SwitchDetectionNeeded2L3(SwitchDetectionNeeded2L3 *data)
 *   Std_ReturnType Rte_Read_SwitchDetectionNeeded3L2_SwitchDetectionNeeded3L2(SwitchDetectionNeeded3L2 *data)
 *   Std_ReturnType Rte_Read_SwitchDetectionNeeded4L2_SwitchDetectionNeeded4L2(SwitchDetectionNeeded4L2 *data)
 *   Std_ReturnType Rte_Read_SwitchDetectionResp1L1_SwitchDetectionResp1L1(uint8 *data)
 *     Argument data: uint8* is of type SwitchDetectionResp1L1
 *   Std_ReturnType Rte_Read_SwitchDetectionResp1L2_SwitchDetectionResp1L2(uint8 *data)
 *     Argument data: uint8* is of type SwitchDetectionResp1L2
 *   Std_ReturnType Rte_Read_SwitchDetectionResp1L3_SwitchDetectionResp1L3(uint8 *data)
 *     Argument data: uint8* is of type SwitchDetectionResp1L3
 *   Std_ReturnType Rte_Read_SwitchDetectionResp1L4_SwitchDetectionResp1L4(uint8 *data)
 *     Argument data: uint8* is of type SwitchDetectionResp1L4
 *   Std_ReturnType Rte_Read_SwitchDetectionResp1L5_SwitchDetectionResp1L5(uint8 *data)
 *     Argument data: uint8* is of type SwitchDetectionResp1L5
 *   Std_ReturnType Rte_Read_SwitchDetectionResp2L1_SwitchDetectionResp2L1(uint8 *data)
 *     Argument data: uint8* is of type SwitchDetectionResp2L1
 *   Std_ReturnType Rte_Read_SwitchDetectionResp2L2_SwitchDetectionResp2L2(uint8 *data)
 *     Argument data: uint8* is of type SwitchDetectionResp2L2
 *   Std_ReturnType Rte_Read_SwitchDetectionResp2L3_SwitchDetectionResp2L3(uint8 *data)
 *     Argument data: uint8* is of type SwitchDetectionResp2L3
 *   Std_ReturnType Rte_Read_SwitchDetectionResp3L2_SwitchDetectionResp3L2(uint8 *data)
 *     Argument data: uint8* is of type SwitchDetectionResp3L2
 *   Std_ReturnType Rte_Read_SwitchDetectionResp4L2_SwitchDetectionResp4L2(uint8 *data)
 *     Argument data: uint8* is of type SwitchDetectionResp4L2
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ABS_Indication_ABS_Indication(ABS_Indication data)
 *   Std_ReturnType Rte_Write_ATC_Indication_ATC_Indication(ATC_Indication data)
 *   Std_ReturnType Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN1Schedule_BswM_MDGP_BswMRteMDG_LIN1Schedule_requestedMode(BswM_BswMRteMDG_LIN1Schedule data)
 *   Std_ReturnType Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN2Schedule_BswM_MDGP_BswMRteMDG_LIN2Schedule_requestedMode(BswM_BswMRteMDG_LIN2Schedule data)
 *   Std_ReturnType Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN3Schedule_BswM_MDGP_BswMRteMDG_LIN3Schedule_requestedMode(BswM_BswMRteMDG_LIN3Schedule data)
 *   Std_ReturnType Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN4Schedule_BswM_MDGP_BswMRteMDG_LIN4Schedule_requestedMode(BswM_BswMRteMDG_LIN4Schedule data)
 *   Std_ReturnType Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN5Schedule_BswM_MDGP_BswMRteMDG_LIN5Schedule_requestedMode(BswM_BswMRteMDG_LIN5Schedule data)
 *   Std_ReturnType Rte_Write_DoorLock_stat_DoorLock_stat(DoorLock_stat data)
 *   Std_ReturnType Rte_Write_ESC_Indication_ESC_Indication(ESC_Indication data)
 *   Std_ReturnType Rte_Write_FSP1IndicationCmdL2_FSP1IndicationCmdL2(FSP1IndicationCmdL2 data)
 *   Std_ReturnType Rte_Write_FSP1IndicationCmdL3_FSP1IndicationCmdL3(FSP1IndicationCmdL3 data)
 *   Std_ReturnType Rte_Write_FSP1IndicationCmdL4_FSP1IndicationCmdL4(FSP1IndicationCmdL4 data)
 *   Std_ReturnType Rte_Write_FSP1IndicationCmdL5_FSP1IndicationCmdL5(FSP1IndicationCmdL5 data)
 *   Std_ReturnType Rte_Write_FSP2IndicationCmdL1_FSP2IndicationCmdL1(FSP2IndicationCmdL1 data)
 *   Std_ReturnType Rte_Write_FSP2IndicationCmdL2_FSP2IndicationCmdL2(FSP2IndicationCmdL2 data)
 *   Std_ReturnType Rte_Write_FSP2IndicationCmdL3_FSP2IndicationCmdL3(FSP2IndicationCmdL3 data)
 *   Std_ReturnType Rte_Write_FSP3IndicationCmdL2_FSP3IndicationCmdL2(FSP3IndicationCmdL2 data)
 *   Std_ReturnType Rte_Write_FSP4IndicationCmdL2_FSP4IndicationCmdL2(FSP4IndicationCmdL2 data)
 *   Std_ReturnType Rte_Write_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication(LIN_ACCOrCCIndication data)
 *   Std_ReturnType Rte_Write_LIN_ASLIndication_LIN_ASLIndication(LIN_ASLIndication data)
 *   Std_ReturnType Rte_Write_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication(LIN_Adjust_DeviceIndication data)
 *   Std_ReturnType Rte_Write_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg(const LIN_AlmClkCurAlarm_stat_sg *data)
 *   Std_ReturnType Rte_Write_LIN_AudioSystemStatus_LIN_AudioSystemStatus(LIN_AudioSystemStatus data)
 *   Std_ReturnType Rte_Write_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd(LIN_AudioVolumeIndicationCmd data)
 *   Std_ReturnType Rte_Write_LIN_BTStatus_LIN_BTStatus(LIN_BTStatus data)
 *   Std_ReturnType Rte_Write_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica(LIN_DaytimeRunningLight_Indica data)
 *   Std_ReturnType Rte_Write_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication(LIN_DifflockOnOff_Indication data)
 *   Std_ReturnType Rte_Write_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd(LIN_DoorAutoFuncInd_cmd data)
 *   Std_ReturnType Rte_Write_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication(LIN_Down_DeviceIndication data)
 *   Std_ReturnType Rte_Write_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio(LIN_DrivingLightPlus_Indicatio data)
 *   Std_ReturnType Rte_Write_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication(LIN_DrivingLight_Indication data)
 *   Std_ReturnType Rte_Write_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn(LIN_EscButtonMuddySiteDeviceIn data)
 *   Std_ReturnType Rte_Write_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication(LIN_FCW_DeviceIndication data)
 *   Std_ReturnType Rte_Write_LIN_FrontFog_Indication_LIN_FrontFog_Indication(LIN_FrontFog_Indication data)
 *   Std_ReturnType Rte_Write_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd(LIN_IntLghtLvlIndScaled_cmd data)
 *   Std_ReturnType Rte_Write_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg(const LIN_IntLghtModeInd_cmd_sg *data)
 *   Std_ReturnType Rte_Write_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd(LIN_IntLghtOffModeInd_cmd data)
 *   Std_ReturnType Rte_Write_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd(LIN_IntLightMaxModeInd_cmd data)
 *   Std_ReturnType Rte_Write_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd(LIN_IntLightNightModeInd_cmd data)
 *   Std_ReturnType Rte_Write_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd(LIN_IntLightRestingModeInd_cmd data)
 *   Std_ReturnType Rte_Write_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication(LIN_LKS_DeviceIndication data)
 *   Std_ReturnType Rte_Write_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication(LIN_M1_DeviceIndication data)
 *   Std_ReturnType Rte_Write_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication(LIN_M2_DeviceIndication data)
 *   Std_ReturnType Rte_Write_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication(LIN_M3_DeviceIndication data)
 *   Std_ReturnType Rte_Write_LIN_Offroad_Indication_LIN_Offroad_Indication(LIN_Offroad_Indication data)
 *   Std_ReturnType Rte_Write_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication(LIN_ParkingLight_Indication data)
 *   Std_ReturnType Rte_Write_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd(LIN_PhoneButtonIndication_cmd data)
 *   Std_ReturnType Rte_Write_LIN_RearFog_Indication_LIN_RearFog_Indication(LIN_RearFog_Indication data)
 *   Std_ReturnType Rte_Write_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati(LIN_RearWorkProjector_Indicati data)
 *   Std_ReturnType Rte_Write_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength(LIN_ShortPulseMaxLength data)
 *   Std_ReturnType Rte_Write_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication(LIN_Up_DeviceIndication data)
 *   Std_ReturnType Rte_Write_TCS_Indication_TCS_Indication(TCS_Indication data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReTestLin_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) ReTestLin(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ReTestLin
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  DiagInfoCCFW Read_DiagInfoCCFW_DiagInfoCCFW;
  DiagInfoDLFW Read_DiagInfoDLFW_DiagInfoDLFW;
  DiagInfoELCP1 Read_DiagInfoELCP1_DiagInfoELCP1;
  DiagInfoELCP2 Read_DiagInfoELCP2_DiagInfoELCP2;
  DiagInfoILCP1 Read_DiagInfoILCP1_DiagInfoILCP1;
  DiagInfoILCP2 Read_DiagInfoILCP2_DiagInfoILCP2;
  DiagInfoLECM2 Read_DiagInfoLECM2_DiagInfoLECM2;
  DiagInfoLECMBasic Read_DiagInfoLECMBasic_DiagInfoLECMBasic;
  DiagInfoRCECS Read_DiagInfoRCECS_DiagInfoRCECS;
  DiagInfoTCP Read_DiagInfoTCP_DiagInfoTCP;
  FSP1DiagInfoL1 Read_FSP1DiagInfoL1_FSP1DiagInfoL1;
  FSP1DiagInfoL2 Read_FSP1DiagInfoL2_FSP1DiagInfoL2;
  FSP1DiagInfoL3 Read_FSP1DiagInfoL3_FSP1DiagInfoL3;
  FSP1DiagInfoL4 Read_FSP1DiagInfoL4_FSP1DiagInfoL4;
  FSP1DiagInfoL5 Read_FSP1DiagInfoL5_FSP1DiagInfoL5;
  FSP1ResponseErrorL1 Read_FSP1ResponseErrorL1_FSP1ResponseErrorL1;
  FSP1ResponseErrorL2 Read_FSP1ResponseErrorL2_FSP1ResponseErrorL2;
  FSP1ResponseErrorL3 Read_FSP1ResponseErrorL3_FSP1ResponseErrorL3;
  FSP1ResponseErrorL4 Read_FSP1ResponseErrorL4_FSP1ResponseErrorL4;
  FSP1ResponseErrorL5 Read_FSP1ResponseErrorL5_FSP1ResponseErrorL5;
  FSP1SwitchStatusL2 Read_FSP1SwitchStatusL2_FSP1SwitchStatusL2;
  FSP1SwitchStatusL3 Read_FSP1SwitchStatusL3_FSP1SwitchStatusL3;
  FSP1SwitchStatusL4 Read_FSP1SwitchStatusL4_FSP1SwitchStatusL4;
  FSP1SwitchStatusL5 Read_FSP1SwitchStatusL5_FSP1SwitchStatusL5;
  FSP2DiagInfoL1 Read_FSP2DiagInfoL1_FSP2DiagInfoL1;
  FSP2DiagInfoL2 Read_FSP2DiagInfoL2_FSP2DiagInfoL2;
  FSP2DiagInfoL3 Read_FSP2DiagInfoL3_FSP2DiagInfoL3;
  FSP2ResponseErrorL1 Read_FSP2ResponseErrorL1_FSP2ResponseErrorL1;
  FSP2ResponseErrorL2 Read_FSP2ResponseErrorL2_FSP2ResponseErrorL2;
  FSP2ResponseErrorL3 Read_FSP2ResponseErrorL3_FSP2ResponseErrorL3;
  FSP2SwitchStatusL1 Read_FSP2SwitchStatusL1_FSP2SwitchStatusL1;
  FSP2SwitchStatusL2 Read_FSP2SwitchStatusL2_FSP2SwitchStatusL2;
  FSP2SwitchStatusL3 Read_FSP2SwitchStatusL3_FSP2SwitchStatusL3;
  FSP3DiagInfoL2 Read_FSP3DiagInfoL2_FSP3DiagInfoL2;
  FSP3ResponseErrorL2 Read_FSP3ResponseErrorL2_FSP3ResponseErrorL2;
  FSP3SwitchStatusL2 Read_FSP3SwitchStatusL2_FSP3SwitchStatusL2;
  FSP4DiagInfoL2 Read_FSP4DiagInfoL2_FSP4DiagInfoL2;
  FSP4ResponseErrorL2 Read_FSP4ResponseErrorL2_FSP4ResponseErrorL2;
  FSP4SwitchStatusL2 Read_FSP4SwitchStatusL2_FSP4SwitchStatusL2;
  LIN_AdjustButtonStatus Read_LIN_AdjustButtonStatus_LIN_AdjustButtonStatus;
  LIN_AlmClkSetCurAlm_rqst_sg Read_LIN_AlmClkSetCurAlm_rqst_sg_LIN_AlmClkSetCurAlm_rqst_sg;
  LIN_BackButtonStatus Read_LIN_BackButtonStatus_LIN_BackButtonStatus;
  LIN_BackLightDimming_Status Read_LIN_BackLightDimming_Status_LIN_BackLightDimming_Status;
  LIN_BlackPanelMode_ButtonStat Read_LIN_BlackPanelMode_ButtonStat_LIN_BlackPanelMode_ButtonStat;
  LIN_BunkBAudioOnOff_ButtonStat Read_LIN_BunkBAudioOnOff_ButtonStat_LIN_BunkBAudioOnOff_ButtonStat;
  LIN_BunkBIntLightActvnBtn_stat Read_LIN_BunkBIntLightActvnBtn_stat_LIN_BunkBIntLightActvnBtn_stat;
  LIN_BunkBParkHeater_ButtonStat Read_LIN_BunkBParkHeater_ButtonStat_LIN_BunkBParkHeater_ButtonStat;
  LIN_BunkBTempDec_ButtonStat Read_LIN_BunkBTempDec_ButtonStat_LIN_BunkBTempDec_ButtonStat;
  LIN_BunkBTempInc_ButtonStat Read_LIN_BunkBTempInc_ButtonStat_LIN_BunkBTempInc_ButtonStat;
  LIN_BunkBVolumeDown_ButtonStat Read_LIN_BunkBVolumeDown_ButtonStat_LIN_BunkBVolumeDown_ButtonStat;
  LIN_BunkBVolumeUp_ButtonStat Read_LIN_BunkBVolumeUp_ButtonStat_LIN_BunkBVolumeUp_ButtonStat;
  LIN_BunkH2AudioOnOff_ButtonSta Read_LIN_BunkH2AudioOnOff_ButtonSta_LIN_BunkH2AudioOnOff_ButtonSta;
  LIN_BunkH2Fade_ButtonStatus Read_LIN_BunkH2Fade_ButtonStatus_LIN_BunkH2Fade_ButtonStatus;
  LIN_BunkH2IntLightActvnBtn_sta Read_LIN_BunkH2IntLightActvnBtn_sta_LIN_BunkH2IntLightActvnBtn_sta;
  LIN_BunkH2IntLightDecBtn_stat Read_LIN_BunkH2IntLightDecBtn_stat_LIN_BunkH2IntLightDecBtn_stat;
  LIN_BunkH2IntLightIncBtn_stat Read_LIN_BunkH2IntLightIncBtn_stat_LIN_BunkH2IntLightIncBtn_stat;
  LIN_BunkH2LockButtonStatus Read_LIN_BunkH2LockButtonStatus_LIN_BunkH2LockButtonStatus;
  LIN_BunkH2OnOFF_ButtonStatus Read_LIN_BunkH2OnOFF_ButtonStatus_LIN_BunkH2OnOFF_ButtonStatus;
  LIN_BunkH2PHTi_rqs_sg Read_LIN_BunkH2PHTi_rqs_sg_LIN_BunkH2PHTi_rqs_sg;
  LIN_BunkH2ParkHeater_ButtonSta Read_LIN_BunkH2ParkHeater_ButtonSta_LIN_BunkH2ParkHeater_ButtonSta;
  LIN_BunkH2Phone_ButtonStatus Read_LIN_BunkH2Phone_ButtonStatus_LIN_BunkH2Phone_ButtonStatus;
  LIN_BunkH2PowerWinCloseDSBtn_s Read_LIN_BunkH2PowerWinCloseDSBtn_s_LIN_BunkH2PowerWinCloseDSBtn_s;
  LIN_BunkH2PowerWinClosePSBtn_s Read_LIN_BunkH2PowerWinClosePSBtn_s_LIN_BunkH2PowerWinClosePSBtn_s;
  LIN_BunkH2PowerWinOpenDSBtn_st Read_LIN_BunkH2PowerWinOpenDSBtn_st_LIN_BunkH2PowerWinOpenDSBtn_st;
  LIN_BunkH2PowerWinOpenPSBtn_st Read_LIN_BunkH2PowerWinOpenPSBtn_st_LIN_BunkH2PowerWinOpenPSBtn_st;
  LIN_BunkH2RoofhatchCloseBtn_St Read_LIN_BunkH2RoofhatchCloseBtn_St_LIN_BunkH2RoofhatchCloseBtn_St;
  LIN_BunkH2RoofhatchOpenBtn_Sta Read_LIN_BunkH2RoofhatchOpenBtn_Sta_LIN_BunkH2RoofhatchOpenBtn_Sta;
  LIN_BunkH2TempDec_ButtonStatus Read_LIN_BunkH2TempDec_ButtonStatus_LIN_BunkH2TempDec_ButtonStatus;
  LIN_BunkH2TempInc_ButtonStatus Read_LIN_BunkH2TempInc_ButtonStatus_LIN_BunkH2TempInc_ButtonStatus;
  LIN_BunkH2VolumeDown_ButtonSta Read_LIN_BunkH2VolumeDown_ButtonSta_LIN_BunkH2VolumeDown_ButtonSta;
  LIN_BunkH2VolumeUp_ButtonStatu Read_LIN_BunkH2VolumeUp_ButtonStatu_LIN_BunkH2VolumeUp_ButtonStatu;
  LIN_DRL_ButtonStatus Read_LIN_DRL_ButtonStatus_LIN_DRL_ButtonStatus;
  LIN_DifflockDeactivationBtn_st Read_LIN_DifflockDeactivationBtn_st_LIN_DifflockDeactivationBtn_st;
  LIN_DifflockMode_Wheelstatus Read_LIN_DifflockMode_Wheelstatus_LIN_DifflockMode_Wheelstatus;
  LIN_DoorAutoFuncBtn_stat Read_LIN_DoorAutoFuncBtn_stat_LIN_DoorAutoFuncBtn_stat;
  LIN_EscButtonMuddySiteStatus Read_LIN_EscButtonMuddySiteStatus_LIN_EscButtonMuddySiteStatus;
  LIN_FCWPushButton Read_LIN_FCWPushButton_LIN_FCWPushButton;
  LIN_FogLightFront_ButtonStat_1 Read_LIN_FogLightFront_ButtonStat_1_LIN_FogLightFront_ButtonStat_1;
  LIN_FogLightFront_ButtonStat_2 Read_LIN_FogLightFront_ButtonStat_2_LIN_FogLightFront_ButtonStat_2;
  LIN_FogLightRear_ButtonStat_1 Read_LIN_FogLightRear_ButtonStat_1_LIN_FogLightRear_ButtonStat_1;
  LIN_FogLightRear_ButtonStat_2 Read_LIN_FogLightRear_ButtonStat_2_LIN_FogLightRear_ButtonStat_2;
  LIN_HeadLampUpDown_SwitchStatu Read_LIN_HeadLampUpDown_SwitchStatu_LIN_HeadLampUpDown_SwitchStatu;
  LIN_IntLghtCenterBtnFreeWhl_s Read_LIN_IntLghtCenterBtnFreeWhl_s_LIN_IntLghtCenterBtnFreeWhl_s;
  LIN_IntLghtDimmingLvlDecBtn_s Read_LIN_IntLghtDimmingLvlDecBtn_s_LIN_IntLghtDimmingLvlDecBtn_s;
  LIN_IntLghtDimmingLvlFreeWhl_s Read_LIN_IntLghtDimmingLvlFreeWhl_s_LIN_IntLghtDimmingLvlFreeWhl_s;
  LIN_IntLghtDimmingLvlIncBtn_s Read_LIN_IntLghtDimmingLvlIncBtn_s_LIN_IntLghtDimmingLvlIncBtn_s;
  LIN_IntLghtMaxModeBtnPnl2_s Read_LIN_IntLghtMaxModeBtnPnl2_s_LIN_IntLghtMaxModeBtnPnl2_s;
  LIN_IntLghtModeSelrFreeWheel_s Read_LIN_IntLghtModeSelrFreeWheel_s_LIN_IntLghtModeSelrFreeWheel_s;
  LIN_IntLghtNightModeBt2_s Read_LIN_IntLghtNightModeBt2_s_LIN_IntLghtNightModeBt2_s;
  LIN_IntLghtRestModeBtnPnl2_s Read_LIN_IntLghtRestModeBtnPnl2_s_LIN_IntLghtRestModeBtnPnl2_s;
  LIN_LKSPushButton Read_LIN_LKSPushButton_LIN_LKSPushButton;
  LIN_LevelingThumbwheel_stat Read_LIN_LevelingThumbwheel_stat_LIN_LevelingThumbwheel_stat;
  LIN_LightMode_Status_1 Read_LIN_LightMode_Status_1_LIN_LightMode_Status_1;
  LIN_LightMode_Status_2 Read_LIN_LightMode_Status_2_LIN_LightMode_Status_2;
  LIN_MemButtonStatus Read_LIN_MemButtonStatus_LIN_MemButtonStatus;
  LIN_Offroad_ButtonStatus Read_LIN_Offroad_ButtonStatus_LIN_Offroad_ButtonStatus;
  LIN_RearWorkProjector_BtnStat Read_LIN_RearWorkProjector_BtnStat_LIN_RearWorkProjector_BtnStat;
  LIN_SelectButtonStatus Read_LIN_SelectButtonStatus_LIN_SelectButtonStatus;
  LIN_SpeedControlModeButtonStat Read_LIN_SpeedControlModeButtonStat_LIN_SpeedControlModeButtonStat;
  LIN_SpeedControlModeWheelStat Read_LIN_SpeedControlModeWheelStat_LIN_SpeedControlModeWheelStat;
  LIN_StopButtonStatus Read_LIN_StopButtonStatus_LIN_StopButtonStatus;
  LIN_TCP_ABS_ButtonStatus Read_LIN_TCP_ABS_ButtonStatus_LIN_TCP_ABS_ButtonStatus;
  LIN_TCP_ATC_ButtonStatus Read_LIN_TCP_ATC_ButtonStatus_LIN_TCP_ATC_ButtonStatus;
  LIN_TCP_ESC_ButtonStatus Read_LIN_TCP_ESC_ButtonStatus_LIN_TCP_ESC_ButtonStatus;
  LIN_TCP_KnobPostionStatus Read_LIN_TCP_KnobPostionStatus_LIN_TCP_KnobPostionStatus;
  LIN_TCP_TCS_ButtonStatus Read_LIN_TCP_TCS_ButtonStatus_LIN_TCP_TCS_ButtonStatus;
  LIN_WRDownButtonStatus Read_LIN_WRDownButtonStatus_LIN_WRDownButtonStatus;
  LIN_WRUpButtonStatus Read_LIN_WRUpButtonStatus_LIN_WRUpButtonStatus;
  ResponseErrorCCFW Read_ResponseErrorCCFW_ResponseErrorCCFW;
  ResponseErrorDLFW Read_ResponseErrorDLFW_ResponseErrorDLFW;
  ResponseErrorELCP1 Read_ResponseErrorELCP1_ResponseErrorELCP1;
  ResponseErrorELCP2 Read_ResponseErrorELCP2_ResponseErrorELCP2;
  ResponseErrorILCP1 Read_ResponseErrorILCP1_ResponseErrorILCP1;
  ResponseErrorILCP2 Read_ResponseErrorILCP2_ResponseErrorILCP2;
  ResponseErrorLECM2 Read_ResponseErrorLECM2_ResponseErrorLECM2;
  ResponseErrorLECMBasic Read_ResponseErrorLECMBasic_ResponseErrorLECMBasic;
  ResponseErrorRCECS Read_ResponseErrorRCECS_ResponseErrorRCECS;
  ResponseErrorTCP Read_ResponseErrorTCP_ResponseErrorTCP;
  SwitchDetectionNeeded1L1 Read_SwitchDetectionNeeded1L1_SwitchDetectionNeeded1L1;
  SwitchDetectionNeeded1L2 Read_SwitchDetectionNeeded1L2_SwitchDetectionNeeded1L2;
  SwitchDetectionNeeded1L3 Read_SwitchDetectionNeeded1L3_SwitchDetectionNeeded1L3;
  SwitchDetectionNeeded1L4 Read_SwitchDetectionNeeded1L4_SwitchDetectionNeeded1L4;
  SwitchDetectionNeeded1L5 Read_SwitchDetectionNeeded1L5_SwitchDetectionNeeded1L5;
  SwitchDetectionNeeded2L1 Read_SwitchDetectionNeeded2L1_SwitchDetectionNeeded2L1;
  SwitchDetectionNeeded2L2 Read_SwitchDetectionNeeded2L2_SwitchDetectionNeeded2L2;
  SwitchDetectionNeeded2L3 Read_SwitchDetectionNeeded2L3_SwitchDetectionNeeded2L3;
  SwitchDetectionNeeded3L2 Read_SwitchDetectionNeeded3L2_SwitchDetectionNeeded3L2;
  SwitchDetectionNeeded4L2 Read_SwitchDetectionNeeded4L2_SwitchDetectionNeeded4L2;
  SwitchDetectionResp1L1 Read_SwitchDetectionResp1L1_SwitchDetectionResp1L1;
  SwitchDetectionResp1L2 Read_SwitchDetectionResp1L2_SwitchDetectionResp1L2;
  SwitchDetectionResp1L3 Read_SwitchDetectionResp1L3_SwitchDetectionResp1L3;
  SwitchDetectionResp1L4 Read_SwitchDetectionResp1L4_SwitchDetectionResp1L4;
  SwitchDetectionResp1L5 Read_SwitchDetectionResp1L5_SwitchDetectionResp1L5;
  SwitchDetectionResp2L1 Read_SwitchDetectionResp2L1_SwitchDetectionResp2L1;
  SwitchDetectionResp2L2 Read_SwitchDetectionResp2L2_SwitchDetectionResp2L2;
  SwitchDetectionResp2L3 Read_SwitchDetectionResp2L3_SwitchDetectionResp2L3;
  SwitchDetectionResp3L2 Read_SwitchDetectionResp3L2_SwitchDetectionResp3L2;
  SwitchDetectionResp4L2 Read_SwitchDetectionResp4L2_SwitchDetectionResp4L2;

  BswM_BswMRteMDG_LIN1Schedule Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN1Schedule_BswM_MDGP_BswMRteMDG_LIN1Schedule_requestedMode;
  BswM_BswMRteMDG_LIN2Schedule Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN2Schedule_BswM_MDGP_BswMRteMDG_LIN2Schedule_requestedMode;
  BswM_BswMRteMDG_LIN3Schedule Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN3Schedule_BswM_MDGP_BswMRteMDG_LIN3Schedule_requestedMode;
  BswM_BswMRteMDG_LIN4Schedule Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN4Schedule_BswM_MDGP_BswMRteMDG_LIN4Schedule_requestedMode;
  BswM_BswMRteMDG_LIN5Schedule Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN5Schedule_BswM_MDGP_BswMRteMDG_LIN5Schedule_requestedMode;
  LIN_AlmClkCurAlarm_stat_sg Write_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg;
  LIN_IntLghtModeInd_cmd_sg Write_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_TestLin_Rte_Read_DiagInfoCCFW_DiagInfoCCFW(&Read_DiagInfoCCFW_DiagInfoCCFW);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_DiagInfoDLFW_DiagInfoDLFW(&Read_DiagInfoDLFW_DiagInfoDLFW);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_DiagInfoELCP1_DiagInfoELCP1(&Read_DiagInfoELCP1_DiagInfoELCP1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_DiagInfoELCP2_DiagInfoELCP2(&Read_DiagInfoELCP2_DiagInfoELCP2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_DiagInfoILCP1_DiagInfoILCP1(&Read_DiagInfoILCP1_DiagInfoILCP1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_DiagInfoILCP2_DiagInfoILCP2(&Read_DiagInfoILCP2_DiagInfoILCP2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_DiagInfoLECM2_DiagInfoLECM2(&Read_DiagInfoLECM2_DiagInfoLECM2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_DiagInfoLECMBasic_DiagInfoLECMBasic(&Read_DiagInfoLECMBasic_DiagInfoLECMBasic);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_DiagInfoRCECS_DiagInfoRCECS(&Read_DiagInfoRCECS_DiagInfoRCECS);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_DiagInfoTCP_DiagInfoTCP(&Read_DiagInfoTCP_DiagInfoTCP);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP1DiagInfoL1_FSP1DiagInfoL1(&Read_FSP1DiagInfoL1_FSP1DiagInfoL1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP1DiagInfoL2_FSP1DiagInfoL2(&Read_FSP1DiagInfoL2_FSP1DiagInfoL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP1DiagInfoL3_FSP1DiagInfoL3(&Read_FSP1DiagInfoL3_FSP1DiagInfoL3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP1DiagInfoL4_FSP1DiagInfoL4(&Read_FSP1DiagInfoL4_FSP1DiagInfoL4);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP1DiagInfoL5_FSP1DiagInfoL5(&Read_FSP1DiagInfoL5_FSP1DiagInfoL5);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP1ResponseErrorL1_FSP1ResponseErrorL1(&Read_FSP1ResponseErrorL1_FSP1ResponseErrorL1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP1ResponseErrorL2_FSP1ResponseErrorL2(&Read_FSP1ResponseErrorL2_FSP1ResponseErrorL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP1ResponseErrorL3_FSP1ResponseErrorL3(&Read_FSP1ResponseErrorL3_FSP1ResponseErrorL3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP1ResponseErrorL4_FSP1ResponseErrorL4(&Read_FSP1ResponseErrorL4_FSP1ResponseErrorL4);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP1ResponseErrorL5_FSP1ResponseErrorL5(&Read_FSP1ResponseErrorL5_FSP1ResponseErrorL5);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP1SwitchStatusL2_FSP1SwitchStatusL2(&Read_FSP1SwitchStatusL2_FSP1SwitchStatusL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP1SwitchStatusL3_FSP1SwitchStatusL3(&Read_FSP1SwitchStatusL3_FSP1SwitchStatusL3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP1SwitchStatusL4_FSP1SwitchStatusL4(&Read_FSP1SwitchStatusL4_FSP1SwitchStatusL4);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP1SwitchStatusL5_FSP1SwitchStatusL5(&Read_FSP1SwitchStatusL5_FSP1SwitchStatusL5);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP2DiagInfoL1_FSP2DiagInfoL1(&Read_FSP2DiagInfoL1_FSP2DiagInfoL1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP2DiagInfoL2_FSP2DiagInfoL2(&Read_FSP2DiagInfoL2_FSP2DiagInfoL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP2DiagInfoL3_FSP2DiagInfoL3(&Read_FSP2DiagInfoL3_FSP2DiagInfoL3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP2ResponseErrorL1_FSP2ResponseErrorL1(&Read_FSP2ResponseErrorL1_FSP2ResponseErrorL1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP2ResponseErrorL2_FSP2ResponseErrorL2(&Read_FSP2ResponseErrorL2_FSP2ResponseErrorL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP2ResponseErrorL3_FSP2ResponseErrorL3(&Read_FSP2ResponseErrorL3_FSP2ResponseErrorL3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP2SwitchStatusL1_FSP2SwitchStatusL1(&Read_FSP2SwitchStatusL1_FSP2SwitchStatusL1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP2SwitchStatusL2_FSP2SwitchStatusL2(&Read_FSP2SwitchStatusL2_FSP2SwitchStatusL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP2SwitchStatusL3_FSP2SwitchStatusL3(&Read_FSP2SwitchStatusL3_FSP2SwitchStatusL3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP3DiagInfoL2_FSP3DiagInfoL2(&Read_FSP3DiagInfoL2_FSP3DiagInfoL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP3ResponseErrorL2_FSP3ResponseErrorL2(&Read_FSP3ResponseErrorL2_FSP3ResponseErrorL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP3SwitchStatusL2_FSP3SwitchStatusL2(&Read_FSP3SwitchStatusL2_FSP3SwitchStatusL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP4DiagInfoL2_FSP4DiagInfoL2(&Read_FSP4DiagInfoL2_FSP4DiagInfoL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP4ResponseErrorL2_FSP4ResponseErrorL2(&Read_FSP4ResponseErrorL2_FSP4ResponseErrorL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_FSP4SwitchStatusL2_FSP4SwitchStatusL2(&Read_FSP4SwitchStatusL2_FSP4SwitchStatusL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_AdjustButtonStatus_LIN_AdjustButtonStatus(&Read_LIN_AdjustButtonStatus_LIN_AdjustButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_AlmClkSetCurAlm_rqst_sg_LIN_AlmClkSetCurAlm_rqst_sg(&Read_LIN_AlmClkSetCurAlm_rqst_sg_LIN_AlmClkSetCurAlm_rqst_sg);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BackButtonStatus_LIN_BackButtonStatus(&Read_LIN_BackButtonStatus_LIN_BackButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BackLightDimming_Status_LIN_BackLightDimming_Status(&Read_LIN_BackLightDimming_Status_LIN_BackLightDimming_Status);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BlackPanelMode_ButtonStat_LIN_BlackPanelMode_ButtonStat(&Read_LIN_BlackPanelMode_ButtonStat_LIN_BlackPanelMode_ButtonStat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkBAudioOnOff_ButtonStat_LIN_BunkBAudioOnOff_ButtonStat(&Read_LIN_BunkBAudioOnOff_ButtonStat_LIN_BunkBAudioOnOff_ButtonStat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkBIntLightActvnBtn_stat_LIN_BunkBIntLightActvnBtn_stat(&Read_LIN_BunkBIntLightActvnBtn_stat_LIN_BunkBIntLightActvnBtn_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkBParkHeater_ButtonStat_LIN_BunkBParkHeater_ButtonStat(&Read_LIN_BunkBParkHeater_ButtonStat_LIN_BunkBParkHeater_ButtonStat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkBTempDec_ButtonStat_LIN_BunkBTempDec_ButtonStat(&Read_LIN_BunkBTempDec_ButtonStat_LIN_BunkBTempDec_ButtonStat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkBTempInc_ButtonStat_LIN_BunkBTempInc_ButtonStat(&Read_LIN_BunkBTempInc_ButtonStat_LIN_BunkBTempInc_ButtonStat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkBVolumeDown_ButtonStat_LIN_BunkBVolumeDown_ButtonStat(&Read_LIN_BunkBVolumeDown_ButtonStat_LIN_BunkBVolumeDown_ButtonStat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkBVolumeUp_ButtonStat_LIN_BunkBVolumeUp_ButtonStat(&Read_LIN_BunkBVolumeUp_ButtonStat_LIN_BunkBVolumeUp_ButtonStat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2AudioOnOff_ButtonSta_LIN_BunkH2AudioOnOff_ButtonSta(&Read_LIN_BunkH2AudioOnOff_ButtonSta_LIN_BunkH2AudioOnOff_ButtonSta);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2Fade_ButtonStatus_LIN_BunkH2Fade_ButtonStatus(&Read_LIN_BunkH2Fade_ButtonStatus_LIN_BunkH2Fade_ButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2IntLightActvnBtn_sta_LIN_BunkH2IntLightActvnBtn_sta(&Read_LIN_BunkH2IntLightActvnBtn_sta_LIN_BunkH2IntLightActvnBtn_sta);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2IntLightDecBtn_stat_LIN_BunkH2IntLightDecBtn_stat(&Read_LIN_BunkH2IntLightDecBtn_stat_LIN_BunkH2IntLightDecBtn_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2IntLightIncBtn_stat_LIN_BunkH2IntLightIncBtn_stat(&Read_LIN_BunkH2IntLightIncBtn_stat_LIN_BunkH2IntLightIncBtn_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2LockButtonStatus_LIN_BunkH2LockButtonStatus(&Read_LIN_BunkH2LockButtonStatus_LIN_BunkH2LockButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2OnOFF_ButtonStatus_LIN_BunkH2OnOFF_ButtonStatus(&Read_LIN_BunkH2OnOFF_ButtonStatus_LIN_BunkH2OnOFF_ButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2PHTi_rqs_sg_LIN_BunkH2PHTi_rqs_sg(&Read_LIN_BunkH2PHTi_rqs_sg_LIN_BunkH2PHTi_rqs_sg);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2ParkHeater_ButtonSta_LIN_BunkH2ParkHeater_ButtonSta(&Read_LIN_BunkH2ParkHeater_ButtonSta_LIN_BunkH2ParkHeater_ButtonSta);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2Phone_ButtonStatus_LIN_BunkH2Phone_ButtonStatus(&Read_LIN_BunkH2Phone_ButtonStatus_LIN_BunkH2Phone_ButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2PowerWinCloseDSBtn_s_LIN_BunkH2PowerWinCloseDSBtn_s(&Read_LIN_BunkH2PowerWinCloseDSBtn_s_LIN_BunkH2PowerWinCloseDSBtn_s);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2PowerWinClosePSBtn_s_LIN_BunkH2PowerWinClosePSBtn_s(&Read_LIN_BunkH2PowerWinClosePSBtn_s_LIN_BunkH2PowerWinClosePSBtn_s);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2PowerWinOpenDSBtn_st_LIN_BunkH2PowerWinOpenDSBtn_st(&Read_LIN_BunkH2PowerWinOpenDSBtn_st_LIN_BunkH2PowerWinOpenDSBtn_st);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2PowerWinOpenPSBtn_st_LIN_BunkH2PowerWinOpenPSBtn_st(&Read_LIN_BunkH2PowerWinOpenPSBtn_st_LIN_BunkH2PowerWinOpenPSBtn_st);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2RoofhatchCloseBtn_St_LIN_BunkH2RoofhatchCloseBtn_St(&Read_LIN_BunkH2RoofhatchCloseBtn_St_LIN_BunkH2RoofhatchCloseBtn_St);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2RoofhatchOpenBtn_Sta_LIN_BunkH2RoofhatchOpenBtn_Sta(&Read_LIN_BunkH2RoofhatchOpenBtn_Sta_LIN_BunkH2RoofhatchOpenBtn_Sta);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2TempDec_ButtonStatus_LIN_BunkH2TempDec_ButtonStatus(&Read_LIN_BunkH2TempDec_ButtonStatus_LIN_BunkH2TempDec_ButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2TempInc_ButtonStatus_LIN_BunkH2TempInc_ButtonStatus(&Read_LIN_BunkH2TempInc_ButtonStatus_LIN_BunkH2TempInc_ButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2VolumeDown_ButtonSta_LIN_BunkH2VolumeDown_ButtonSta(&Read_LIN_BunkH2VolumeDown_ButtonSta_LIN_BunkH2VolumeDown_ButtonSta);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_BunkH2VolumeUp_ButtonStatu_LIN_BunkH2VolumeUp_ButtonStatu(&Read_LIN_BunkH2VolumeUp_ButtonStatu_LIN_BunkH2VolumeUp_ButtonStatu);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_DRL_ButtonStatus_LIN_DRL_ButtonStatus(&Read_LIN_DRL_ButtonStatus_LIN_DRL_ButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_DifflockDeactivationBtn_st_LIN_DifflockDeactivationBtn_st(&Read_LIN_DifflockDeactivationBtn_st_LIN_DifflockDeactivationBtn_st);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_DifflockMode_Wheelstatus_LIN_DifflockMode_Wheelstatus(&Read_LIN_DifflockMode_Wheelstatus_LIN_DifflockMode_Wheelstatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_DoorAutoFuncBtn_stat_LIN_DoorAutoFuncBtn_stat(&Read_LIN_DoorAutoFuncBtn_stat_LIN_DoorAutoFuncBtn_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_EscButtonMuddySiteStatus_LIN_EscButtonMuddySiteStatus(&Read_LIN_EscButtonMuddySiteStatus_LIN_EscButtonMuddySiteStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_FCWPushButton_LIN_FCWPushButton(&Read_LIN_FCWPushButton_LIN_FCWPushButton);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_FogLightFront_ButtonStat_1_LIN_FogLightFront_ButtonStat_1(&Read_LIN_FogLightFront_ButtonStat_1_LIN_FogLightFront_ButtonStat_1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_FogLightFront_ButtonStat_2_LIN_FogLightFront_ButtonStat_2(&Read_LIN_FogLightFront_ButtonStat_2_LIN_FogLightFront_ButtonStat_2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_FogLightRear_ButtonStat_1_LIN_FogLightRear_ButtonStat_1(&Read_LIN_FogLightRear_ButtonStat_1_LIN_FogLightRear_ButtonStat_1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_FogLightRear_ButtonStat_2_LIN_FogLightRear_ButtonStat_2(&Read_LIN_FogLightRear_ButtonStat_2_LIN_FogLightRear_ButtonStat_2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_HeadLampUpDown_SwitchStatu_LIN_HeadLampUpDown_SwitchStatu(&Read_LIN_HeadLampUpDown_SwitchStatu_LIN_HeadLampUpDown_SwitchStatu);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_IntLghtCenterBtnFreeWhl_s_LIN_IntLghtCenterBtnFreeWhl_s(&Read_LIN_IntLghtCenterBtnFreeWhl_s_LIN_IntLghtCenterBtnFreeWhl_s);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_IntLghtDimmingLvlDecBtn_s_LIN_IntLghtDimmingLvlDecBtn_s(&Read_LIN_IntLghtDimmingLvlDecBtn_s_LIN_IntLghtDimmingLvlDecBtn_s);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_IntLghtDimmingLvlFreeWhl_s_LIN_IntLghtDimmingLvlFreeWhl_s(&Read_LIN_IntLghtDimmingLvlFreeWhl_s_LIN_IntLghtDimmingLvlFreeWhl_s);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_IntLghtDimmingLvlIncBtn_s_LIN_IntLghtDimmingLvlIncBtn_s(&Read_LIN_IntLghtDimmingLvlIncBtn_s_LIN_IntLghtDimmingLvlIncBtn_s);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_IntLghtMaxModeBtnPnl2_s_LIN_IntLghtMaxModeBtnPnl2_s(&Read_LIN_IntLghtMaxModeBtnPnl2_s_LIN_IntLghtMaxModeBtnPnl2_s);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_IntLghtModeSelrFreeWheel_s_LIN_IntLghtModeSelrFreeWheel_s(&Read_LIN_IntLghtModeSelrFreeWheel_s_LIN_IntLghtModeSelrFreeWheel_s);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_IntLghtNightModeBt2_s_LIN_IntLghtNightModeBt2_s(&Read_LIN_IntLghtNightModeBt2_s_LIN_IntLghtNightModeBt2_s);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_IntLghtRestModeBtnPnl2_s_LIN_IntLghtRestModeBtnPnl2_s(&Read_LIN_IntLghtRestModeBtnPnl2_s_LIN_IntLghtRestModeBtnPnl2_s);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_LKSPushButton_LIN_LKSPushButton(&Read_LIN_LKSPushButton_LIN_LKSPushButton);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_LevelingThumbwheel_stat_LIN_LevelingThumbwheel_stat(&Read_LIN_LevelingThumbwheel_stat_LIN_LevelingThumbwheel_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_LightMode_Status_1_LIN_LightMode_Status_1(&Read_LIN_LightMode_Status_1_LIN_LightMode_Status_1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_LightMode_Status_2_LIN_LightMode_Status_2(&Read_LIN_LightMode_Status_2_LIN_LightMode_Status_2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_MemButtonStatus_LIN_MemButtonStatus(&Read_LIN_MemButtonStatus_LIN_MemButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_Offroad_ButtonStatus_LIN_Offroad_ButtonStatus(&Read_LIN_Offroad_ButtonStatus_LIN_Offroad_ButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_RearWorkProjector_BtnStat_LIN_RearWorkProjector_BtnStat(&Read_LIN_RearWorkProjector_BtnStat_LIN_RearWorkProjector_BtnStat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_SelectButtonStatus_LIN_SelectButtonStatus(&Read_LIN_SelectButtonStatus_LIN_SelectButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_SpeedControlModeButtonStat_LIN_SpeedControlModeButtonStat(&Read_LIN_SpeedControlModeButtonStat_LIN_SpeedControlModeButtonStat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_SpeedControlModeWheelStat_LIN_SpeedControlModeWheelStat(&Read_LIN_SpeedControlModeWheelStat_LIN_SpeedControlModeWheelStat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_StopButtonStatus_LIN_StopButtonStatus(&Read_LIN_StopButtonStatus_LIN_StopButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_TCP_ABS_ButtonStatus_LIN_TCP_ABS_ButtonStatus(&Read_LIN_TCP_ABS_ButtonStatus_LIN_TCP_ABS_ButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_TCP_ATC_ButtonStatus_LIN_TCP_ATC_ButtonStatus(&Read_LIN_TCP_ATC_ButtonStatus_LIN_TCP_ATC_ButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_TCP_ESC_ButtonStatus_LIN_TCP_ESC_ButtonStatus(&Read_LIN_TCP_ESC_ButtonStatus_LIN_TCP_ESC_ButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_TCP_KnobPostionStatus_LIN_TCP_KnobPostionStatus(&Read_LIN_TCP_KnobPostionStatus_LIN_TCP_KnobPostionStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_TCP_TCS_ButtonStatus_LIN_TCP_TCS_ButtonStatus(&Read_LIN_TCP_TCS_ButtonStatus_LIN_TCP_TCS_ButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_WRDownButtonStatus_LIN_WRDownButtonStatus(&Read_LIN_WRDownButtonStatus_LIN_WRDownButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_LIN_WRUpButtonStatus_LIN_WRUpButtonStatus(&Read_LIN_WRUpButtonStatus_LIN_WRUpButtonStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_ResponseErrorCCFW_ResponseErrorCCFW(&Read_ResponseErrorCCFW_ResponseErrorCCFW);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_ResponseErrorDLFW_ResponseErrorDLFW(&Read_ResponseErrorDLFW_ResponseErrorDLFW);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_ResponseErrorELCP1_ResponseErrorELCP1(&Read_ResponseErrorELCP1_ResponseErrorELCP1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_ResponseErrorELCP2_ResponseErrorELCP2(&Read_ResponseErrorELCP2_ResponseErrorELCP2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_ResponseErrorILCP1_ResponseErrorILCP1(&Read_ResponseErrorILCP1_ResponseErrorILCP1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_ResponseErrorILCP2_ResponseErrorILCP2(&Read_ResponseErrorILCP2_ResponseErrorILCP2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_ResponseErrorLECM2_ResponseErrorLECM2(&Read_ResponseErrorLECM2_ResponseErrorLECM2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_ResponseErrorLECMBasic_ResponseErrorLECMBasic(&Read_ResponseErrorLECMBasic_ResponseErrorLECMBasic);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_ResponseErrorRCECS_ResponseErrorRCECS(&Read_ResponseErrorRCECS_ResponseErrorRCECS);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_ResponseErrorTCP_ResponseErrorTCP(&Read_ResponseErrorTCP_ResponseErrorTCP);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionNeeded1L1_SwitchDetectionNeeded1L1(&Read_SwitchDetectionNeeded1L1_SwitchDetectionNeeded1L1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionNeeded1L2_SwitchDetectionNeeded1L2(&Read_SwitchDetectionNeeded1L2_SwitchDetectionNeeded1L2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionNeeded1L3_SwitchDetectionNeeded1L3(&Read_SwitchDetectionNeeded1L3_SwitchDetectionNeeded1L3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionNeeded1L4_SwitchDetectionNeeded1L4(&Read_SwitchDetectionNeeded1L4_SwitchDetectionNeeded1L4);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionNeeded1L5_SwitchDetectionNeeded1L5(&Read_SwitchDetectionNeeded1L5_SwitchDetectionNeeded1L5);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionNeeded2L1_SwitchDetectionNeeded2L1(&Read_SwitchDetectionNeeded2L1_SwitchDetectionNeeded2L1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionNeeded2L2_SwitchDetectionNeeded2L2(&Read_SwitchDetectionNeeded2L2_SwitchDetectionNeeded2L2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionNeeded2L3_SwitchDetectionNeeded2L3(&Read_SwitchDetectionNeeded2L3_SwitchDetectionNeeded2L3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionNeeded3L2_SwitchDetectionNeeded3L2(&Read_SwitchDetectionNeeded3L2_SwitchDetectionNeeded3L2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionNeeded4L2_SwitchDetectionNeeded4L2(&Read_SwitchDetectionNeeded4L2_SwitchDetectionNeeded4L2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionResp1L1_SwitchDetectionResp1L1(Read_SwitchDetectionResp1L1_SwitchDetectionResp1L1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionResp1L2_SwitchDetectionResp1L2(Read_SwitchDetectionResp1L2_SwitchDetectionResp1L2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionResp1L3_SwitchDetectionResp1L3(Read_SwitchDetectionResp1L3_SwitchDetectionResp1L3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionResp1L4_SwitchDetectionResp1L4(Read_SwitchDetectionResp1L4_SwitchDetectionResp1L4);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionResp1L5_SwitchDetectionResp1L5(Read_SwitchDetectionResp1L5_SwitchDetectionResp1L5);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionResp2L1_SwitchDetectionResp2L1(Read_SwitchDetectionResp2L1_SwitchDetectionResp2L1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionResp2L2_SwitchDetectionResp2L2(Read_SwitchDetectionResp2L2_SwitchDetectionResp2L2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionResp2L3_SwitchDetectionResp2L3(Read_SwitchDetectionResp2L3_SwitchDetectionResp2L3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionResp3L2_SwitchDetectionResp3L2(Read_SwitchDetectionResp3L2_SwitchDetectionResp3L2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Read_SwitchDetectionResp4L2_SwitchDetectionResp4L2(Read_SwitchDetectionResp4L2_SwitchDetectionResp4L2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_ABS_Indication_ABS_Indication(Rte_InitValue_ABS_Indication_ABS_Indication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_ATC_Indication_ATC_Indication(Rte_InitValue_ATC_Indication_ATC_Indication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  (void)memset(&Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN1Schedule_BswM_MDGP_BswMRteMDG_LIN1Schedule_requestedMode, 0, sizeof(Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN1Schedule_BswM_MDGP_BswMRteMDG_LIN1Schedule_requestedMode));
  fct_status = TSC_TestLin_Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN1Schedule_BswM_MDGP_BswMRteMDG_LIN1Schedule_requestedMode(Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN1Schedule_BswM_MDGP_BswMRteMDG_LIN1Schedule_requestedMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  (void)memset(&Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN2Schedule_BswM_MDGP_BswMRteMDG_LIN2Schedule_requestedMode, 0, sizeof(Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN2Schedule_BswM_MDGP_BswMRteMDG_LIN2Schedule_requestedMode));
  fct_status = TSC_TestLin_Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN2Schedule_BswM_MDGP_BswMRteMDG_LIN2Schedule_requestedMode(Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN2Schedule_BswM_MDGP_BswMRteMDG_LIN2Schedule_requestedMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  (void)memset(&Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN3Schedule_BswM_MDGP_BswMRteMDG_LIN3Schedule_requestedMode, 0, sizeof(Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN3Schedule_BswM_MDGP_BswMRteMDG_LIN3Schedule_requestedMode));
  fct_status = TSC_TestLin_Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN3Schedule_BswM_MDGP_BswMRteMDG_LIN3Schedule_requestedMode(Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN3Schedule_BswM_MDGP_BswMRteMDG_LIN3Schedule_requestedMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  (void)memset(&Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN4Schedule_BswM_MDGP_BswMRteMDG_LIN4Schedule_requestedMode, 0, sizeof(Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN4Schedule_BswM_MDGP_BswMRteMDG_LIN4Schedule_requestedMode));
  fct_status = TSC_TestLin_Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN4Schedule_BswM_MDGP_BswMRteMDG_LIN4Schedule_requestedMode(Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN4Schedule_BswM_MDGP_BswMRteMDG_LIN4Schedule_requestedMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  (void)memset(&Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN5Schedule_BswM_MDGP_BswMRteMDG_LIN5Schedule_requestedMode, 0, sizeof(Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN5Schedule_BswM_MDGP_BswMRteMDG_LIN5Schedule_requestedMode));
  fct_status = TSC_TestLin_Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN5Schedule_BswM_MDGP_BswMRteMDG_LIN5Schedule_requestedMode(Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN5Schedule_BswM_MDGP_BswMRteMDG_LIN5Schedule_requestedMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_DoorLock_stat_DoorLock_stat(Rte_InitValue_DoorLock_stat_DoorLock_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_ESC_Indication_ESC_Indication(Rte_InitValue_ESC_Indication_ESC_Indication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_FSP1IndicationCmdL2_FSP1IndicationCmdL2(Rte_InitValue_FSP1IndicationCmdL2_FSP1IndicationCmdL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_FSP1IndicationCmdL3_FSP1IndicationCmdL3(Rte_InitValue_FSP1IndicationCmdL3_FSP1IndicationCmdL3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_FSP1IndicationCmdL4_FSP1IndicationCmdL4(Rte_InitValue_FSP1IndicationCmdL4_FSP1IndicationCmdL4);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_FSP1IndicationCmdL5_FSP1IndicationCmdL5(Rte_InitValue_FSP1IndicationCmdL5_FSP1IndicationCmdL5);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_FSP2IndicationCmdL1_FSP2IndicationCmdL1(Rte_InitValue_FSP2IndicationCmdL1_FSP2IndicationCmdL1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_FSP2IndicationCmdL2_FSP2IndicationCmdL2(Rte_InitValue_FSP2IndicationCmdL2_FSP2IndicationCmdL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_FSP2IndicationCmdL3_FSP2IndicationCmdL3(Rte_InitValue_FSP2IndicationCmdL3_FSP2IndicationCmdL3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_FSP3IndicationCmdL2_FSP3IndicationCmdL2(Rte_InitValue_FSP3IndicationCmdL2_FSP3IndicationCmdL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_FSP4IndicationCmdL2_FSP4IndicationCmdL2(Rte_InitValue_FSP4IndicationCmdL2_FSP4IndicationCmdL2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication(Rte_InitValue_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_ASLIndication_LIN_ASLIndication(Rte_InitValue_LIN_ASLIndication_LIN_ASLIndication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication(Rte_InitValue_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  (void)memset(&Write_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg, 0, sizeof(Write_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg));
  fct_status = TSC_TestLin_Rte_Write_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg(&Write_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_AudioSystemStatus_LIN_AudioSystemStatus(Rte_InitValue_LIN_AudioSystemStatus_LIN_AudioSystemStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd(Rte_InitValue_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_BTStatus_LIN_BTStatus(Rte_InitValue_LIN_BTStatus_LIN_BTStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica(Rte_InitValue_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication(Rte_InitValue_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd(Rte_InitValue_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication(Rte_InitValue_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio(Rte_InitValue_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication(Rte_InitValue_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn(Rte_InitValue_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication(Rte_InitValue_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_FrontFog_Indication_LIN_FrontFog_Indication(Rte_InitValue_LIN_FrontFog_Indication_LIN_FrontFog_Indication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd(Rte_InitValue_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  (void)memset(&Write_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg, 0, sizeof(Write_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg));
  fct_status = TSC_TestLin_Rte_Write_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg(&Write_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd(Rte_InitValue_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd(Rte_InitValue_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd(Rte_InitValue_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd(Rte_InitValue_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication(Rte_InitValue_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication(Rte_InitValue_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication(Rte_InitValue_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication(Rte_InitValue_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_Offroad_Indication_LIN_Offroad_Indication(Rte_InitValue_LIN_Offroad_Indication_LIN_Offroad_Indication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication(Rte_InitValue_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd(Rte_InitValue_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_RearFog_Indication_LIN_RearFog_Indication(Rte_InitValue_LIN_RearFog_Indication_LIN_RearFog_Indication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati(Rte_InitValue_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength(Rte_InitValue_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication(Rte_InitValue_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TestLin_Rte_Write_TCS_Indication_TCS_Indication(Rte_InitValue_TCS_Indication_TCS_Indication);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  TestLin_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RXCbk
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <FSP1DiagInfoL1> of PortPrototype <FSP1DiagInfoL1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RXCbk_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RXCbk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RXCbk
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RxTimeout
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <FSP1DiagInfoL1> of PortPrototype <FSP1DiagInfoL1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RxTimeout_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RxTimeout(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RxTimeout
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RXCbk
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <FSP1ResponseErrorL1> of PortPrototype <FSP1ResponseErrorL1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RXCbk_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RXCbk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RXCbk
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RxTimeout
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <FSP1ResponseErrorL1> of PortPrototype <FSP1ResponseErrorL1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RxTimeout_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RxTimeout(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RxTimeout
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RXCbk
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <SwitchDetectionNeeded1L1> of PortPrototype <SwitchDetectionNeeded1L1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RXCbk_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RXCbk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RXCbk
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RxTimeout
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <SwitchDetectionNeeded1L1> of PortPrototype <SwitchDetectionNeeded1L1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RxTimeout_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RxTimeout(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RxTimeout
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RXCbk
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <FSP2DiagInfoL1> of PortPrototype <FSP2DiagInfoL1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RXCbk_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RXCbk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RXCbk
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RxTimeout
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <FSP2DiagInfoL1> of PortPrototype <FSP2DiagInfoL1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RxTimeout_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RxTimeout(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RxTimeout
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RXCbk
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <FSP2ResponseErrorL1> of PortPrototype <FSP2ResponseErrorL1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RXCbk_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RXCbk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RXCbk
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RxTimeout
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <FSP2ResponseErrorL1> of PortPrototype <FSP2ResponseErrorL1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RxTimeout_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RxTimeout(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RxTimeout
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RXCbk
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <FSP2SwitchStatusL1> of PortPrototype <FSP2SwitchStatusL1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RXCbk_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RXCbk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RXCbk
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RxTimeout
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <FSP2SwitchStatusL1> of PortPrototype <FSP2SwitchStatusL1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RxTimeout_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RxTimeout(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RxTimeout
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RXCbk
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <SwitchDetectionNeeded2L1> of PortPrototype <SwitchDetectionNeeded2L1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RXCbk_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RXCbk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RXCbk
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RxTimeout
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <SwitchDetectionNeeded2L1> of PortPrototype <SwitchDetectionNeeded2L1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RxTimeout_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RxTimeout(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RxTimeout
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_ILCP1_DiagInfoILCP1_RXCbk
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <DiagInfoILCP1> of PortPrototype <DiagInfoILCP1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_DiagInfoILCP1_RXCbk_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_DiagInfoILCP1_RXCbk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_DiagInfoILCP1_RXCbk
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_ILCP1_DiagInfoILCP1_RxTimeout
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <DiagInfoILCP1> of PortPrototype <DiagInfoILCP1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_DiagInfoILCP1_RxTimeout_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_DiagInfoILCP1_RxTimeout(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_DiagInfoILCP1_RxTimeout
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RXCbk
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <LIN_DoorAutoFuncBtn_stat> of PortPrototype <LIN_DoorAutoFuncBtn_stat>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RXCbk_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RXCbk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RXCbk
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RxTimeout
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <LIN_DoorAutoFuncBtn_stat> of PortPrototype <LIN_DoorAutoFuncBtn_stat>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RxTimeout_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RxTimeout(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RxTimeout
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RXCbk
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <LIN_IntLghtDimmingLvlDecBtn_s> of PortPrototype <LIN_IntLghtDimmingLvlDecBtn_s>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RXCbk_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RXCbk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RXCbk
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RxTimeout
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <LIN_IntLghtDimmingLvlDecBtn_s> of PortPrototype <LIN_IntLghtDimmingLvlDecBtn_s>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RxTimeout_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RxTimeout(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RxTimeout
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RXCbk
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <LIN_IntLghtDimmingLvlIncBtn_s> of PortPrototype <LIN_IntLghtDimmingLvlIncBtn_s>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RXCbk_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RXCbk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RXCbk
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RxTimeout
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <LIN_IntLghtDimmingLvlIncBtn_s> of PortPrototype <LIN_IntLghtDimmingLvlIncBtn_s>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RxTimeout_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RxTimeout(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RxTimeout
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RXCbk
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <LIN_IntLghtModeSelrFreeWheel_s> of PortPrototype <LIN_IntLghtModeSelrFreeWheel_s>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RXCbk_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RXCbk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RXCbk
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RxTimeout
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <LIN_IntLghtModeSelrFreeWheel_s> of PortPrototype <LIN_IntLghtModeSelrFreeWheel_s>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RxTimeout_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RxTimeout(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RxTimeout
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_ILCP1_ResponseErrorILCP1_RXCbk
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <ResponseErrorILCP1> of PortPrototype <ResponseErrorILCP1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_ResponseErrorILCP1_RXCbk_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_ResponseErrorILCP1_RXCbk(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_ResponseErrorILCP1_RXCbk
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_LIN0_ILCP1_ResponseErrorILCP1_RxTimeout
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <ResponseErrorILCP1> of PortPrototype <ResponseErrorILCP1>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_ResponseErrorILCP1_RxTimeout_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_ResponseErrorILCP1_RxTimeout(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_LIN0_ILCP1_ResponseErrorILCP1_RxTimeout
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define TestLin_STOP_SEC_CODE
#include "TestLin_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void TestLin_TestDefines(void)
{
  /* Enumeration Data Types */

  ABS_Indication Test_ABS_Indication_V_1 = Cx0_DeviceIndication_Off;
  ABS_Indication Test_ABS_Indication_V_2 = Cx1_DeviceIndication_On;
  ABS_Indication Test_ABS_Indication_V_3 = Cx2_DeviceIndication_Blink;
  ABS_Indication Test_ABS_Indication_V_4 = Cx3_DeviceIndication_SpareValue;

  ATC_Indication Test_ATC_Indication_V_1 = Cx0_DeviceIndication_Off;
  ATC_Indication Test_ATC_Indication_V_2 = Cx1_DeviceIndication_On;
  ATC_Indication Test_ATC_Indication_V_3 = Cx2_DeviceIndication_Blink;
  ATC_Indication Test_ATC_Indication_V_4 = Cx3_DeviceIndication_SpareValue;

  BswM_BswMRteMDG_LIN1Schedule Test_BswM_BswMRteMDG_LIN1Schedule_V_1 = LIN1_Table1;
  BswM_BswMRteMDG_LIN1Schedule Test_BswM_BswMRteMDG_LIN1Schedule_V_2 = LIN1_Table2;
  BswM_BswMRteMDG_LIN1Schedule Test_BswM_BswMRteMDG_LIN1Schedule_V_3 = LIN1_Table_E;
  BswM_BswMRteMDG_LIN1Schedule Test_BswM_BswMRteMDG_LIN1Schedule_V_4 = LIN1_MasterReq_SlaveResp_Table1;
  BswM_BswMRteMDG_LIN1Schedule Test_BswM_BswMRteMDG_LIN1Schedule_V_5 = LIN1_MasterReq_SlaveResp_Table2;
  BswM_BswMRteMDG_LIN1Schedule Test_BswM_BswMRteMDG_LIN1Schedule_V_6 = LIN1_NULL;
  BswM_BswMRteMDG_LIN1Schedule Test_BswM_BswMRteMDG_LIN1Schedule_V_7 = LIN1_MasterReq_SlaveResp;

  BswM_BswMRteMDG_LIN2Schedule Test_BswM_BswMRteMDG_LIN2Schedule_V_1 = LIN2_NULL;
  BswM_BswMRteMDG_LIN2Schedule Test_BswM_BswMRteMDG_LIN2Schedule_V_2 = LIN2_TABLE0;
  BswM_BswMRteMDG_LIN2Schedule Test_BswM_BswMRteMDG_LIN2Schedule_V_3 = LIN2_TABLE_E;
  BswM_BswMRteMDG_LIN2Schedule Test_BswM_BswMRteMDG_LIN2Schedule_V_4 = LIN2_MasterReq_SlaveResp_TABLE0;
  BswM_BswMRteMDG_LIN2Schedule Test_BswM_BswMRteMDG_LIN2Schedule_V_5 = LIN2_MasterReq_SlaveResp;

  BswM_BswMRteMDG_LIN3Schedule Test_BswM_BswMRteMDG_LIN3Schedule_V_1 = LIN3_NULL;
  BswM_BswMRteMDG_LIN3Schedule Test_BswM_BswMRteMDG_LIN3Schedule_V_2 = LIN3_TABLE1;
  BswM_BswMRteMDG_LIN3Schedule Test_BswM_BswMRteMDG_LIN3Schedule_V_3 = LIN3_TABLE2;
  BswM_BswMRteMDG_LIN3Schedule Test_BswM_BswMRteMDG_LIN3Schedule_V_4 = LIN3_TABLE_E;
  BswM_BswMRteMDG_LIN3Schedule Test_BswM_BswMRteMDG_LIN3Schedule_V_5 = LIN3_MasterReq_SlaveResp_Table1;
  BswM_BswMRteMDG_LIN3Schedule Test_BswM_BswMRteMDG_LIN3Schedule_V_6 = LIN3_MasterReq_SlaveResp_Table2;
  BswM_BswMRteMDG_LIN3Schedule Test_BswM_BswMRteMDG_LIN3Schedule_V_7 = LIN3_MasterReq_SlaveResp;

  BswM_BswMRteMDG_LIN4Schedule Test_BswM_BswMRteMDG_LIN4Schedule_V_1 = LIN4_NULL;
  BswM_BswMRteMDG_LIN4Schedule Test_BswM_BswMRteMDG_LIN4Schedule_V_2 = LIN4_MasterReq_SlaveResp_Table1;
  BswM_BswMRteMDG_LIN4Schedule Test_BswM_BswMRteMDG_LIN4Schedule_V_3 = LIN4_TABLE1;
  BswM_BswMRteMDG_LIN4Schedule Test_BswM_BswMRteMDG_LIN4Schedule_V_4 = LIN4_TABLE2;
  BswM_BswMRteMDG_LIN4Schedule Test_BswM_BswMRteMDG_LIN4Schedule_V_5 = LIN4_TABLE_E;
  BswM_BswMRteMDG_LIN4Schedule Test_BswM_BswMRteMDG_LIN4Schedule_V_6 = LIN4_MasterReq_SlaveResp_Table2;
  BswM_BswMRteMDG_LIN4Schedule Test_BswM_BswMRteMDG_LIN4Schedule_V_7 = LIN4_MasterReq_SlaveResp;

  BswM_BswMRteMDG_LIN5Schedule Test_BswM_BswMRteMDG_LIN5Schedule_V_1 = LIN5_NULL;
  BswM_BswMRteMDG_LIN5Schedule Test_BswM_BswMRteMDG_LIN5Schedule_V_2 = LIN5_TABLE1;
  BswM_BswMRteMDG_LIN5Schedule Test_BswM_BswMRteMDG_LIN5Schedule_V_3 = LIN5_MasterReq_SlaveResp_Table1;
  BswM_BswMRteMDG_LIN5Schedule Test_BswM_BswMRteMDG_LIN5Schedule_V_4 = LIN5_MasterReq_SlaveResp_Table2;
  BswM_BswMRteMDG_LIN5Schedule Test_BswM_BswMRteMDG_LIN5Schedule_V_5 = LIN5_MasterReq_SlaveResp;
  BswM_BswMRteMDG_LIN5Schedule Test_BswM_BswMRteMDG_LIN5Schedule_V_6 = LIN5_TABLE2;
  BswM_BswMRteMDG_LIN5Schedule Test_BswM_BswMRteMDG_LIN5Schedule_V_7 = LIN5_TABLE_E;

  DoorLock_stat Test_DoorLock_stat_V_1 = Cx0_DoorLock_stat_Idle;
  DoorLock_stat Test_DoorLock_stat_V_2 = Cx1_DoorLock_stat_BothDoorsAreUnlocked;
  DoorLock_stat Test_DoorLock_stat_V_3 = Cx2_DoorLock_stat_DriverDoorIsUnlocked;
  DoorLock_stat Test_DoorLock_stat_V_4 = Cx3_DoorLock_stat_PassengerDoorIsUnlocked;
  DoorLock_stat Test_DoorLock_stat_V_5 = Cx4_DoorLock_stat_BothDoorsAreLocked;
  DoorLock_stat Test_DoorLock_stat_V_6 = CxE_DoorLock_stat_Error;
  DoorLock_stat Test_DoorLock_stat_V_7 = CxF_DoorLock_stat_NotAvailable;

  ESC_Indication Test_ESC_Indication_V_1 = Cx0_DeviceIndication_Off;
  ESC_Indication Test_ESC_Indication_V_2 = Cx1_DeviceIndication_On;
  ESC_Indication Test_ESC_Indication_V_3 = Cx2_DeviceIndication_Blink;
  ESC_Indication Test_ESC_Indication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_ACCOrCCIndication Test_LIN_ACCOrCCIndication_V_1 = Cx0_DeviceIndication_Off;
  LIN_ACCOrCCIndication Test_LIN_ACCOrCCIndication_V_2 = Cx1_DeviceIndication_On;
  LIN_ACCOrCCIndication Test_LIN_ACCOrCCIndication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_ACCOrCCIndication Test_LIN_ACCOrCCIndication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_ASLIndication Test_LIN_ASLIndication_V_1 = Cx0_DeviceIndication_Off;
  LIN_ASLIndication Test_LIN_ASLIndication_V_2 = Cx1_DeviceIndication_On;
  LIN_ASLIndication Test_LIN_ASLIndication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_ASLIndication Test_LIN_ASLIndication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_AdjustButtonStatus Test_LIN_AdjustButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_AdjustButtonStatus Test_LIN_AdjustButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_AdjustButtonStatus Test_LIN_AdjustButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_AdjustButtonStatus Test_LIN_AdjustButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_Adjust_DeviceIndication Test_LIN_Adjust_DeviceIndication_V_1 = Cx0_DeviceIndication_Off;
  LIN_Adjust_DeviceIndication Test_LIN_Adjust_DeviceIndication_V_2 = Cx1_DeviceIndication_On;
  LIN_Adjust_DeviceIndication Test_LIN_Adjust_DeviceIndication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_Adjust_DeviceIndication Test_LIN_Adjust_DeviceIndication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_AlmClkCurAlarm_stat_ID Test_LIN_AlmClkCurAlarm_stat_ID_V_1 = Cx00_AlarmClkID_NotUsed;
  LIN_AlmClkCurAlarm_stat_ID Test_LIN_AlmClkCurAlarm_stat_ID_V_2 = Cx01_AlarmClkID_Alarm1;
  LIN_AlmClkCurAlarm_stat_ID Test_LIN_AlmClkCurAlarm_stat_ID_V_3 = Cx02_AlarmClkID_Alarm2;
  LIN_AlmClkCurAlarm_stat_ID Test_LIN_AlmClkCurAlarm_stat_ID_V_4 = Cx03_AlarmClkID_Alarm3;
  LIN_AlmClkCurAlarm_stat_ID Test_LIN_AlmClkCurAlarm_stat_ID_V_5 = Cx04_AlarmClkID_Alarm4;
  LIN_AlmClkCurAlarm_stat_ID Test_LIN_AlmClkCurAlarm_stat_ID_V_6 = Cx05_AlarmClkID_Alarm5;
  LIN_AlmClkCurAlarm_stat_ID Test_LIN_AlmClkCurAlarm_stat_ID_V_7 = Cx06_AlarmClkID_Alarm6;
  LIN_AlmClkCurAlarm_stat_ID Test_LIN_AlmClkCurAlarm_stat_ID_V_8 = Cx07_AlarmClkID_Alarm7;
  LIN_AlmClkCurAlarm_stat_ID Test_LIN_AlmClkCurAlarm_stat_ID_V_9 = Cx08_AlarmClkID_Alarm8;
  LIN_AlmClkCurAlarm_stat_ID Test_LIN_AlmClkCurAlarm_stat_ID_V_10 = Cx09_AlarmClkID_Alarm9;
  LIN_AlmClkCurAlarm_stat_ID Test_LIN_AlmClkCurAlarm_stat_ID_V_11 = Cx0A_AlarmClkID_Alarm10;
  LIN_AlmClkCurAlarm_stat_ID Test_LIN_AlmClkCurAlarm_stat_ID_V_12 = Cx7E_AlarmClkID_Error;
  LIN_AlmClkCurAlarm_stat_ID Test_LIN_AlmClkCurAlarm_stat_ID_V_13 = Cx7F_AlarmClkID_NotAvailable;

  LIN_AlmClkCurAlarm_stat_Stat Test_LIN_AlmClkCurAlarm_stat_Stat_V_1 = Cx0_AlarmClkStat_Inactive;
  LIN_AlmClkCurAlarm_stat_Stat Test_LIN_AlmClkCurAlarm_stat_Stat_V_2 = Cx1_AlarmClkStat_Active;
  LIN_AlmClkCurAlarm_stat_Stat Test_LIN_AlmClkCurAlarm_stat_Stat_V_3 = Cx2_AlarmClkStat_NoUsed;
  LIN_AlmClkCurAlarm_stat_Stat Test_LIN_AlmClkCurAlarm_stat_Stat_V_4 = Cx3_AlarmClkStat_Spare;

  LIN_AlmClkCurAlarm_stat_Type Test_LIN_AlmClkCurAlarm_stat_Type_V_1 = Cx0_AlarmClkType_NoAudibleNotification;
  LIN_AlmClkCurAlarm_stat_Type Test_LIN_AlmClkCurAlarm_stat_Type_V_2 = Cx1_AlarmClkType_Buzzer;
  LIN_AlmClkCurAlarm_stat_Type Test_LIN_AlmClkCurAlarm_stat_Type_V_3 = Cx2_AlarmClkType_Radio;
  LIN_AlmClkCurAlarm_stat_Type Test_LIN_AlmClkCurAlarm_stat_Type_V_4 = Cx3_AlarmClkType_Reserved;
  LIN_AlmClkCurAlarm_stat_Type Test_LIN_AlmClkCurAlarm_stat_Type_V_5 = Cx4_AlarmClkType_Reserved_01;
  LIN_AlmClkCurAlarm_stat_Type Test_LIN_AlmClkCurAlarm_stat_Type_V_6 = Cx5_AlarmClkType_Reserved_02;
  LIN_AlmClkCurAlarm_stat_Type Test_LIN_AlmClkCurAlarm_stat_Type_V_7 = Cx6_AlarmClkType_Error;
  LIN_AlmClkCurAlarm_stat_Type Test_LIN_AlmClkCurAlarm_stat_Type_V_8 = Cx7_AlarmClkType_NotAvailable;

  LIN_AlmClkSetCurAlm_rqst_ID Test_LIN_AlmClkSetCurAlm_rqst_ID_V_1 = Cx00_AlarmClkID_NotUsed;
  LIN_AlmClkSetCurAlm_rqst_ID Test_LIN_AlmClkSetCurAlm_rqst_ID_V_2 = Cx01_AlarmClkID_Alarm1;
  LIN_AlmClkSetCurAlm_rqst_ID Test_LIN_AlmClkSetCurAlm_rqst_ID_V_3 = Cx02_AlarmClkID_Alarm2;
  LIN_AlmClkSetCurAlm_rqst_ID Test_LIN_AlmClkSetCurAlm_rqst_ID_V_4 = Cx03_AlarmClkID_Alarm3;
  LIN_AlmClkSetCurAlm_rqst_ID Test_LIN_AlmClkSetCurAlm_rqst_ID_V_5 = Cx04_AlarmClkID_Alarm4;
  LIN_AlmClkSetCurAlm_rqst_ID Test_LIN_AlmClkSetCurAlm_rqst_ID_V_6 = Cx05_AlarmClkID_Alarm5;
  LIN_AlmClkSetCurAlm_rqst_ID Test_LIN_AlmClkSetCurAlm_rqst_ID_V_7 = Cx06_AlarmClkID_Alarm6;
  LIN_AlmClkSetCurAlm_rqst_ID Test_LIN_AlmClkSetCurAlm_rqst_ID_V_8 = Cx07_AlarmClkID_Alarm7;
  LIN_AlmClkSetCurAlm_rqst_ID Test_LIN_AlmClkSetCurAlm_rqst_ID_V_9 = Cx08_AlarmClkID_Alarm8;
  LIN_AlmClkSetCurAlm_rqst_ID Test_LIN_AlmClkSetCurAlm_rqst_ID_V_10 = Cx09_AlarmClkID_Alarm9;
  LIN_AlmClkSetCurAlm_rqst_ID Test_LIN_AlmClkSetCurAlm_rqst_ID_V_11 = Cx0A_AlarmClkID_Alarm10;
  LIN_AlmClkSetCurAlm_rqst_ID Test_LIN_AlmClkSetCurAlm_rqst_ID_V_12 = Cx7E_AlarmClkID_Error;
  LIN_AlmClkSetCurAlm_rqst_ID Test_LIN_AlmClkSetCurAlm_rqst_ID_V_13 = Cx7F_AlarmClkID_NotAvailable;

  LIN_AlmClkSetCurAlm_rqst_Stat Test_LIN_AlmClkSetCurAlm_rqst_Stat_V_1 = Cx0_AlarmClkStat_Inactive;
  LIN_AlmClkSetCurAlm_rqst_Stat Test_LIN_AlmClkSetCurAlm_rqst_Stat_V_2 = Cx1_AlarmClkStat_Active;
  LIN_AlmClkSetCurAlm_rqst_Stat Test_LIN_AlmClkSetCurAlm_rqst_Stat_V_3 = Cx2_AlarmClkStat_NoUsed;
  LIN_AlmClkSetCurAlm_rqst_Stat Test_LIN_AlmClkSetCurAlm_rqst_Stat_V_4 = Cx3_AlarmClkStat_Spare;

  LIN_AlmClkSetCurAlm_rqst_Type Test_LIN_AlmClkSetCurAlm_rqst_Type_V_1 = Cx0_AlarmClkType_NoAudibleNotification;
  LIN_AlmClkSetCurAlm_rqst_Type Test_LIN_AlmClkSetCurAlm_rqst_Type_V_2 = Cx1_AlarmClkType_Buzzer;
  LIN_AlmClkSetCurAlm_rqst_Type Test_LIN_AlmClkSetCurAlm_rqst_Type_V_3 = Cx2_AlarmClkType_Radio;
  LIN_AlmClkSetCurAlm_rqst_Type Test_LIN_AlmClkSetCurAlm_rqst_Type_V_4 = Cx3_AlarmClkType_Reserved;
  LIN_AlmClkSetCurAlm_rqst_Type Test_LIN_AlmClkSetCurAlm_rqst_Type_V_5 = Cx4_AlarmClkType_Reserved_01;
  LIN_AlmClkSetCurAlm_rqst_Type Test_LIN_AlmClkSetCurAlm_rqst_Type_V_6 = Cx5_AlarmClkType_Reserved_02;
  LIN_AlmClkSetCurAlm_rqst_Type Test_LIN_AlmClkSetCurAlm_rqst_Type_V_7 = Cx6_AlarmClkType_Error;
  LIN_AlmClkSetCurAlm_rqst_Type Test_LIN_AlmClkSetCurAlm_rqst_Type_V_8 = Cx7_AlarmClkType_NotAvailable;

  LIN_AudioSystemStatus Test_LIN_AudioSystemStatus_V_1 = Cx0_OffOn_Off;
  LIN_AudioSystemStatus Test_LIN_AudioSystemStatus_V_2 = Cx1_OffOn_On;
  LIN_AudioSystemStatus Test_LIN_AudioSystemStatus_V_3 = Cx2_OffOn_Error;
  LIN_AudioSystemStatus Test_LIN_AudioSystemStatus_V_4 = Cx3_OffOn_NotAvailable;

  LIN_BTStatus Test_LIN_BTStatus_V_1 = Cx0_BTStatus_BTOff;
  LIN_BTStatus Test_LIN_BTStatus_V_2 = Cx1_BTStatus_BTOnAndNoDeviceConnected;
  LIN_BTStatus Test_LIN_BTStatus_V_3 = Cx2_BTStatus_BTOnAndDeviceConnected;
  LIN_BTStatus Test_LIN_BTStatus_V_4 = Cx3_BTStatus_NotAvailable;

  LIN_BackButtonStatus Test_LIN_BackButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BackButtonStatus Test_LIN_BackButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BackButtonStatus Test_LIN_BackButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BackButtonStatus Test_LIN_BackButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_1 = Cx00_Thumbwheel_stat_ThumbWheelPos0;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_2 = Cx01_Thumbwheel_stat_ThumbWheelPos1;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_3 = Cx02_Thumbwheel_stat_ThumbWheelPos2;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_4 = Cx03_Thumbwheel_stat_ThumbWheelPos3;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_5 = Cx04_Thumbwheel_stat_ThumbWheelPos4;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_6 = Cx05_Thumbwheel_stat_ThumbWheelPos5;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_7 = Cx06_Thumbwheel_stat_ThumbWheelPos6;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_8 = Cx07_Thumbwheel_stat_ThumbWheelPos7;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_9 = Cx08_Thumbwheel_stat_ThumbWheelPos8;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_10 = Cx09_Thumbwheel_stat_ThumbWheelPos9;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_11 = Cx0A_Thumbwheel_stat_ThumbWheelPos10;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_12 = Cx0B_Thumbwheel_stat_ThumbWheelPos11;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_13 = Cx0C_Thumbwheel_stat_ThumbWheelPos12;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_14 = Cx0D_Thumbwheel_stat_ThumbWheelPos13;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_15 = Cx0E_Thumbwheel_stat_ThumbWheelPos14;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_16 = Cx0F_Thumbwheel_stat_ThumbWheelPos15;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_17 = Cx10_Thumbwheel_stat_ThumbWheelPos16;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_18 = Cx11_Thumbwheel_stat_Spare;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_19 = Cx12_Thumbwheel_stat_Spare_01;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_20 = Cx13_Thumbwheel_stat_Spare_02;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_21 = Cx14_Thumbwheel_stat_Spare_03;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_22 = Cx15_Thumbwheel_stat_Spare_04;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_23 = Cx16_Thumbwheel_stat_Spare_05;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_24 = Cx17_Thumbwheel_stat_Spare_06;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_25 = Cx18_Thumbwheel_stat_Spare_07;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_26 = Cx19_Thumbwheel_stat_Spare_08;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_27 = Cx1A_Thumbwheel_stat_Spare_09;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_28 = Cx1B_Thumbwheel_stat_Spare_10;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_29 = Cx1C_Thumbwheel_stat_Spare_11;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_30 = Cx1D_Thumbwheel_stat_Spare_12;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_31 = Cx1E_Thumbwheel_stat_Error;
  LIN_BackLightDimming_Status Test_LIN_BackLightDimming_Status_V_32 = Cx1F_Thumbwheel_stat_NotAvaliable;

  LIN_BlackPanelMode_ButtonStat Test_LIN_BlackPanelMode_ButtonStat_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BlackPanelMode_ButtonStat Test_LIN_BlackPanelMode_ButtonStat_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BlackPanelMode_ButtonStat Test_LIN_BlackPanelMode_ButtonStat_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BlackPanelMode_ButtonStat Test_LIN_BlackPanelMode_ButtonStat_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkBAudioOnOff_ButtonStat Test_LIN_BunkBAudioOnOff_ButtonStat_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkBAudioOnOff_ButtonStat Test_LIN_BunkBAudioOnOff_ButtonStat_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkBAudioOnOff_ButtonStat Test_LIN_BunkBAudioOnOff_ButtonStat_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkBAudioOnOff_ButtonStat Test_LIN_BunkBAudioOnOff_ButtonStat_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkBIntLightActvnBtn_stat Test_LIN_BunkBIntLightActvnBtn_stat_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkBIntLightActvnBtn_stat Test_LIN_BunkBIntLightActvnBtn_stat_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkBIntLightActvnBtn_stat Test_LIN_BunkBIntLightActvnBtn_stat_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkBIntLightActvnBtn_stat Test_LIN_BunkBIntLightActvnBtn_stat_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkBParkHeater_ButtonStat Test_LIN_BunkBParkHeater_ButtonStat_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkBParkHeater_ButtonStat Test_LIN_BunkBParkHeater_ButtonStat_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkBParkHeater_ButtonStat Test_LIN_BunkBParkHeater_ButtonStat_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkBParkHeater_ButtonStat Test_LIN_BunkBParkHeater_ButtonStat_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkBTempDec_ButtonStat Test_LIN_BunkBTempDec_ButtonStat_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkBTempDec_ButtonStat Test_LIN_BunkBTempDec_ButtonStat_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkBTempDec_ButtonStat Test_LIN_BunkBTempDec_ButtonStat_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkBTempDec_ButtonStat Test_LIN_BunkBTempDec_ButtonStat_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkBTempInc_ButtonStat Test_LIN_BunkBTempInc_ButtonStat_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkBTempInc_ButtonStat Test_LIN_BunkBTempInc_ButtonStat_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkBTempInc_ButtonStat Test_LIN_BunkBTempInc_ButtonStat_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkBTempInc_ButtonStat Test_LIN_BunkBTempInc_ButtonStat_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkBVolumeDown_ButtonStat Test_LIN_BunkBVolumeDown_ButtonStat_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkBVolumeDown_ButtonStat Test_LIN_BunkBVolumeDown_ButtonStat_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkBVolumeDown_ButtonStat Test_LIN_BunkBVolumeDown_ButtonStat_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkBVolumeDown_ButtonStat Test_LIN_BunkBVolumeDown_ButtonStat_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkBVolumeUp_ButtonStat Test_LIN_BunkBVolumeUp_ButtonStat_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkBVolumeUp_ButtonStat Test_LIN_BunkBVolumeUp_ButtonStat_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkBVolumeUp_ButtonStat Test_LIN_BunkBVolumeUp_ButtonStat_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkBVolumeUp_ButtonStat Test_LIN_BunkBVolumeUp_ButtonStat_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2AudioOnOff_ButtonSta Test_LIN_BunkH2AudioOnOff_ButtonSta_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2AudioOnOff_ButtonSta Test_LIN_BunkH2AudioOnOff_ButtonSta_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2AudioOnOff_ButtonSta Test_LIN_BunkH2AudioOnOff_ButtonSta_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2AudioOnOff_ButtonSta Test_LIN_BunkH2AudioOnOff_ButtonSta_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2Fade_ButtonStatus Test_LIN_BunkH2Fade_ButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2Fade_ButtonStatus Test_LIN_BunkH2Fade_ButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2Fade_ButtonStatus Test_LIN_BunkH2Fade_ButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2Fade_ButtonStatus Test_LIN_BunkH2Fade_ButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2IntLightActvnBtn_sta Test_LIN_BunkH2IntLightActvnBtn_sta_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2IntLightActvnBtn_sta Test_LIN_BunkH2IntLightActvnBtn_sta_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2IntLightActvnBtn_sta Test_LIN_BunkH2IntLightActvnBtn_sta_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2IntLightActvnBtn_sta Test_LIN_BunkH2IntLightActvnBtn_sta_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2IntLightDecBtn_stat Test_LIN_BunkH2IntLightDecBtn_stat_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2IntLightDecBtn_stat Test_LIN_BunkH2IntLightDecBtn_stat_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2IntLightDecBtn_stat Test_LIN_BunkH2IntLightDecBtn_stat_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2IntLightDecBtn_stat Test_LIN_BunkH2IntLightDecBtn_stat_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2IntLightIncBtn_stat Test_LIN_BunkH2IntLightIncBtn_stat_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2IntLightIncBtn_stat Test_LIN_BunkH2IntLightIncBtn_stat_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2IntLightIncBtn_stat Test_LIN_BunkH2IntLightIncBtn_stat_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2IntLightIncBtn_stat Test_LIN_BunkH2IntLightIncBtn_stat_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2LockButtonStatus Test_LIN_BunkH2LockButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2LockButtonStatus Test_LIN_BunkH2LockButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2LockButtonStatus Test_LIN_BunkH2LockButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2LockButtonStatus Test_LIN_BunkH2LockButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2OnOFF_ButtonStatus Test_LIN_BunkH2OnOFF_ButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2OnOFF_ButtonStatus Test_LIN_BunkH2OnOFF_ButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2OnOFF_ButtonStatus Test_LIN_BunkH2OnOFF_ButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2OnOFF_ButtonStatus Test_LIN_BunkH2OnOFF_ButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2PHTi_rqs_Timer_cmd Test_LIN_BunkH2PHTi_rqs_Timer_cmd_V_1 = Cx0_ParkHeaterTimer_cmd_NoAction;
  LIN_BunkH2PHTi_rqs_Timer_cmd Test_LIN_BunkH2PHTi_rqs_Timer_cmd_V_2 = Cx1_ParkHeaterTimer_cmd_TimerEnable;
  LIN_BunkH2PHTi_rqs_Timer_cmd Test_LIN_BunkH2PHTi_rqs_Timer_cmd_V_3 = Cx2_ParkHeaterTimer_cmd_TimerDisable;
  LIN_BunkH2PHTi_rqs_Timer_cmd Test_LIN_BunkH2PHTi_rqs_Timer_cmd_V_4 = Cx3_ParkHeaterTimer_cmd_Spare;
  LIN_BunkH2PHTi_rqs_Timer_cmd Test_LIN_BunkH2PHTi_rqs_Timer_cmd_V_5 = Cx4_ParkHeaterTimer_cmd_Spare_01;
  LIN_BunkH2PHTi_rqs_Timer_cmd Test_LIN_BunkH2PHTi_rqs_Timer_cmd_V_6 = Cx5_ParkHeaterTimer_cmd_Spare_02;
  LIN_BunkH2PHTi_rqs_Timer_cmd Test_LIN_BunkH2PHTi_rqs_Timer_cmd_V_7 = Cx6_ParkHeaterTimer_cmd_Error;
  LIN_BunkH2PHTi_rqs_Timer_cmd Test_LIN_BunkH2PHTi_rqs_Timer_cmd_V_8 = Cx7_ParkHeaterTimer_cmd_NotAvailable;

  LIN_BunkH2ParkHeater_ButtonSta Test_LIN_BunkH2ParkHeater_ButtonSta_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2ParkHeater_ButtonSta Test_LIN_BunkH2ParkHeater_ButtonSta_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2ParkHeater_ButtonSta Test_LIN_BunkH2ParkHeater_ButtonSta_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2ParkHeater_ButtonSta Test_LIN_BunkH2ParkHeater_ButtonSta_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2Phone_ButtonStatus Test_LIN_BunkH2Phone_ButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2Phone_ButtonStatus Test_LIN_BunkH2Phone_ButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2Phone_ButtonStatus Test_LIN_BunkH2Phone_ButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2Phone_ButtonStatus Test_LIN_BunkH2Phone_ButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2PowerWinCloseDSBtn_s Test_LIN_BunkH2PowerWinCloseDSBtn_s_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2PowerWinCloseDSBtn_s Test_LIN_BunkH2PowerWinCloseDSBtn_s_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2PowerWinCloseDSBtn_s Test_LIN_BunkH2PowerWinCloseDSBtn_s_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2PowerWinCloseDSBtn_s Test_LIN_BunkH2PowerWinCloseDSBtn_s_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2PowerWinClosePSBtn_s Test_LIN_BunkH2PowerWinClosePSBtn_s_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2PowerWinClosePSBtn_s Test_LIN_BunkH2PowerWinClosePSBtn_s_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2PowerWinClosePSBtn_s Test_LIN_BunkH2PowerWinClosePSBtn_s_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2PowerWinClosePSBtn_s Test_LIN_BunkH2PowerWinClosePSBtn_s_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2PowerWinOpenDSBtn_st Test_LIN_BunkH2PowerWinOpenDSBtn_st_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2PowerWinOpenDSBtn_st Test_LIN_BunkH2PowerWinOpenDSBtn_st_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2PowerWinOpenDSBtn_st Test_LIN_BunkH2PowerWinOpenDSBtn_st_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2PowerWinOpenDSBtn_st Test_LIN_BunkH2PowerWinOpenDSBtn_st_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2PowerWinOpenPSBtn_st Test_LIN_BunkH2PowerWinOpenPSBtn_st_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2PowerWinOpenPSBtn_st Test_LIN_BunkH2PowerWinOpenPSBtn_st_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2PowerWinOpenPSBtn_st Test_LIN_BunkH2PowerWinOpenPSBtn_st_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2PowerWinOpenPSBtn_st Test_LIN_BunkH2PowerWinOpenPSBtn_st_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2RoofhatchCloseBtn_St Test_LIN_BunkH2RoofhatchCloseBtn_St_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2RoofhatchCloseBtn_St Test_LIN_BunkH2RoofhatchCloseBtn_St_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2RoofhatchCloseBtn_St Test_LIN_BunkH2RoofhatchCloseBtn_St_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2RoofhatchCloseBtn_St Test_LIN_BunkH2RoofhatchCloseBtn_St_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2RoofhatchOpenBtn_Sta Test_LIN_BunkH2RoofhatchOpenBtn_Sta_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2RoofhatchOpenBtn_Sta Test_LIN_BunkH2RoofhatchOpenBtn_Sta_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2RoofhatchOpenBtn_Sta Test_LIN_BunkH2RoofhatchOpenBtn_Sta_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2RoofhatchOpenBtn_Sta Test_LIN_BunkH2RoofhatchOpenBtn_Sta_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2TempDec_ButtonStatus Test_LIN_BunkH2TempDec_ButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2TempDec_ButtonStatus Test_LIN_BunkH2TempDec_ButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2TempDec_ButtonStatus Test_LIN_BunkH2TempDec_ButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2TempDec_ButtonStatus Test_LIN_BunkH2TempDec_ButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2TempInc_ButtonStatus Test_LIN_BunkH2TempInc_ButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2TempInc_ButtonStatus Test_LIN_BunkH2TempInc_ButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2TempInc_ButtonStatus Test_LIN_BunkH2TempInc_ButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2TempInc_ButtonStatus Test_LIN_BunkH2TempInc_ButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2VolumeDown_ButtonSta Test_LIN_BunkH2VolumeDown_ButtonSta_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2VolumeDown_ButtonSta Test_LIN_BunkH2VolumeDown_ButtonSta_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2VolumeDown_ButtonSta Test_LIN_BunkH2VolumeDown_ButtonSta_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2VolumeDown_ButtonSta Test_LIN_BunkH2VolumeDown_ButtonSta_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_BunkH2VolumeUp_ButtonStatu Test_LIN_BunkH2VolumeUp_ButtonStatu_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_BunkH2VolumeUp_ButtonStatu Test_LIN_BunkH2VolumeUp_ButtonStatu_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_BunkH2VolumeUp_ButtonStatu Test_LIN_BunkH2VolumeUp_ButtonStatu_V_3 = Cx2_PushButtonStatus_Error;
  LIN_BunkH2VolumeUp_ButtonStatu Test_LIN_BunkH2VolumeUp_ButtonStatu_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_DRL_ButtonStatus Test_LIN_DRL_ButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_DRL_ButtonStatus Test_LIN_DRL_ButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_DRL_ButtonStatus Test_LIN_DRL_ButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_DRL_ButtonStatus Test_LIN_DRL_ButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_DaytimeRunningLight_Indica Test_LIN_DaytimeRunningLight_Indica_V_1 = Cx0_DeviceIndication_Off;
  LIN_DaytimeRunningLight_Indica Test_LIN_DaytimeRunningLight_Indica_V_2 = Cx1_DeviceIndication_On;
  LIN_DaytimeRunningLight_Indica Test_LIN_DaytimeRunningLight_Indica_V_3 = Cx2_DeviceIndication_Blink;
  LIN_DaytimeRunningLight_Indica Test_LIN_DaytimeRunningLight_Indica_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_DifflockDeactivationBtn_st Test_LIN_DifflockDeactivationBtn_st_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_DifflockDeactivationBtn_st Test_LIN_DifflockDeactivationBtn_st_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_DifflockDeactivationBtn_st Test_LIN_DifflockDeactivationBtn_st_V_3 = Cx2_PushButtonStatus_Error;
  LIN_DifflockDeactivationBtn_st Test_LIN_DifflockDeactivationBtn_st_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_1 = Cx0_FreeWheel_Status_NoMovement;
  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_2 = Cx1_FreeWheel_Status_1StepClockwise;
  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_3 = Cx2_FreeWheel_Status_2StepsClockwise;
  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_4 = Cx3_FreeWheel_Status_3StepsClockwise;
  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_5 = Cx4_FreeWheel_Status_4StepsClockwise;
  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_6 = Cx5_FreeWheel_Status_5StepsClockwise;
  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_7 = Cx6_FreeWheel_Status_6StepsClockwise;
  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_8 = Cx7_FreeWheel_Status_1StepCounterClockwise;
  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_9 = Cx8_FreeWheel_Status_2StepsCounterClockwise;
  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_10 = Cx9_FreeWheel_Status_3StepsCounterClockwise;
  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_11 = CxA_FreeWheel_Status_4StepsCounterClockwise;
  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_12 = CxB_FreeWheel_Status_5StepsCounterClockwise;
  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_13 = CxC_FreeWheel_Status_6StepsCounterClockwise;
  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_14 = CxD_FreeWheel_Status_Spare;
  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_15 = CxE_FreeWheel_Status_Error;
  LIN_DifflockMode_Wheelstatus Test_LIN_DifflockMode_Wheelstatus_V_16 = CxF_FreeWheel_Status_NotAvailable;

  LIN_DifflockOnOff_Indication Test_LIN_DifflockOnOff_Indication_V_1 = Cx0_DeviceIndication_Off;
  LIN_DifflockOnOff_Indication Test_LIN_DifflockOnOff_Indication_V_2 = Cx1_DeviceIndication_On;
  LIN_DifflockOnOff_Indication Test_LIN_DifflockOnOff_Indication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_DifflockOnOff_Indication Test_LIN_DifflockOnOff_Indication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_DoorAutoFuncBtn_stat Test_LIN_DoorAutoFuncBtn_stat_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_DoorAutoFuncBtn_stat Test_LIN_DoorAutoFuncBtn_stat_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_DoorAutoFuncBtn_stat Test_LIN_DoorAutoFuncBtn_stat_V_3 = Cx2_PushButtonStatus_Error;
  LIN_DoorAutoFuncBtn_stat Test_LIN_DoorAutoFuncBtn_stat_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_DoorAutoFuncInd_cmd Test_LIN_DoorAutoFuncInd_cmd_V_1 = Cx0_DeviceIndication_Off;
  LIN_DoorAutoFuncInd_cmd Test_LIN_DoorAutoFuncInd_cmd_V_2 = Cx1_DeviceIndication_On;
  LIN_DoorAutoFuncInd_cmd Test_LIN_DoorAutoFuncInd_cmd_V_3 = Cx2_DeviceIndication_Blink;
  LIN_DoorAutoFuncInd_cmd Test_LIN_DoorAutoFuncInd_cmd_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_Down_DeviceIndication Test_LIN_Down_DeviceIndication_V_1 = Cx0_DeviceIndication_Off;
  LIN_Down_DeviceIndication Test_LIN_Down_DeviceIndication_V_2 = Cx1_DeviceIndication_On;
  LIN_Down_DeviceIndication Test_LIN_Down_DeviceIndication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_Down_DeviceIndication Test_LIN_Down_DeviceIndication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_DrivingLightPlus_Indicatio Test_LIN_DrivingLightPlus_Indicatio_V_1 = Cx0_DeviceIndication_Off;
  LIN_DrivingLightPlus_Indicatio Test_LIN_DrivingLightPlus_Indicatio_V_2 = Cx1_DeviceIndication_On;
  LIN_DrivingLightPlus_Indicatio Test_LIN_DrivingLightPlus_Indicatio_V_3 = Cx2_DeviceIndication_Blink;
  LIN_DrivingLightPlus_Indicatio Test_LIN_DrivingLightPlus_Indicatio_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_DrivingLight_Indication Test_LIN_DrivingLight_Indication_V_1 = Cx0_DeviceIndication_Off;
  LIN_DrivingLight_Indication Test_LIN_DrivingLight_Indication_V_2 = Cx1_DeviceIndication_On;
  LIN_DrivingLight_Indication Test_LIN_DrivingLight_Indication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_DrivingLight_Indication Test_LIN_DrivingLight_Indication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_EscButtonMuddySiteDeviceIn Test_LIN_EscButtonMuddySiteDeviceIn_V_1 = Cx0_DeviceIndication_Off;
  LIN_EscButtonMuddySiteDeviceIn Test_LIN_EscButtonMuddySiteDeviceIn_V_2 = Cx1_DeviceIndication_On;
  LIN_EscButtonMuddySiteDeviceIn Test_LIN_EscButtonMuddySiteDeviceIn_V_3 = Cx2_DeviceIndication_Blink;
  LIN_EscButtonMuddySiteDeviceIn Test_LIN_EscButtonMuddySiteDeviceIn_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_EscButtonMuddySiteStatus Test_LIN_EscButtonMuddySiteStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_EscButtonMuddySiteStatus Test_LIN_EscButtonMuddySiteStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_EscButtonMuddySiteStatus Test_LIN_EscButtonMuddySiteStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_EscButtonMuddySiteStatus Test_LIN_EscButtonMuddySiteStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_FCWPushButton Test_LIN_FCWPushButton_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_FCWPushButton Test_LIN_FCWPushButton_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_FCWPushButton Test_LIN_FCWPushButton_V_3 = Cx2_PushButtonStatus_Error;
  LIN_FCWPushButton Test_LIN_FCWPushButton_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_FCW_DeviceIndication Test_LIN_FCW_DeviceIndication_V_1 = Cx0_DeviceIndication_Off;
  LIN_FCW_DeviceIndication Test_LIN_FCW_DeviceIndication_V_2 = Cx1_DeviceIndication_On;
  LIN_FCW_DeviceIndication Test_LIN_FCW_DeviceIndication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_FCW_DeviceIndication Test_LIN_FCW_DeviceIndication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_FogLightFront_ButtonStat_1 Test_LIN_FogLightFront_ButtonStat_1_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_FogLightFront_ButtonStat_1 Test_LIN_FogLightFront_ButtonStat_1_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_FogLightFront_ButtonStat_1 Test_LIN_FogLightFront_ButtonStat_1_V_3 = Cx2_PushButtonStatus_Error;
  LIN_FogLightFront_ButtonStat_1 Test_LIN_FogLightFront_ButtonStat_1_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_FogLightFront_ButtonStat_2 Test_LIN_FogLightFront_ButtonStat_2_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_FogLightFront_ButtonStat_2 Test_LIN_FogLightFront_ButtonStat_2_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_FogLightFront_ButtonStat_2 Test_LIN_FogLightFront_ButtonStat_2_V_3 = Cx2_PushButtonStatus_Error;
  LIN_FogLightFront_ButtonStat_2 Test_LIN_FogLightFront_ButtonStat_2_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_FogLightRear_ButtonStat_1 Test_LIN_FogLightRear_ButtonStat_1_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_FogLightRear_ButtonStat_1 Test_LIN_FogLightRear_ButtonStat_1_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_FogLightRear_ButtonStat_1 Test_LIN_FogLightRear_ButtonStat_1_V_3 = Cx2_PushButtonStatus_Error;
  LIN_FogLightRear_ButtonStat_1 Test_LIN_FogLightRear_ButtonStat_1_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_FogLightRear_ButtonStat_2 Test_LIN_FogLightRear_ButtonStat_2_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_FogLightRear_ButtonStat_2 Test_LIN_FogLightRear_ButtonStat_2_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_FogLightRear_ButtonStat_2 Test_LIN_FogLightRear_ButtonStat_2_V_3 = Cx2_PushButtonStatus_Error;
  LIN_FogLightRear_ButtonStat_2 Test_LIN_FogLightRear_ButtonStat_2_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_FrontFog_Indication Test_LIN_FrontFog_Indication_V_1 = Cx0_DeviceIndication_Off;
  LIN_FrontFog_Indication Test_LIN_FrontFog_Indication_V_2 = Cx1_DeviceIndication_On;
  LIN_FrontFog_Indication Test_LIN_FrontFog_Indication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_FrontFog_Indication Test_LIN_FrontFog_Indication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_HeadLampUpDown_SwitchStatu Test_LIN_HeadLampUpDown_SwitchStatu_V_1 = Cx0_A3PosSwitchStatus_Middle;
  LIN_HeadLampUpDown_SwitchStatu Test_LIN_HeadLampUpDown_SwitchStatu_V_2 = Cx1_A3PosSwitchStatus_Lower;
  LIN_HeadLampUpDown_SwitchStatu Test_LIN_HeadLampUpDown_SwitchStatu_V_3 = Cx2_A3PosSwitchStatus_Upper;
  LIN_HeadLampUpDown_SwitchStatu Test_LIN_HeadLampUpDown_SwitchStatu_V_4 = Cx3_A3PosSwitchStatus_Spare;
  LIN_HeadLampUpDown_SwitchStatu Test_LIN_HeadLampUpDown_SwitchStatu_V_5 = Cx4_A3PosSwitchStatus_Spare_01;
  LIN_HeadLampUpDown_SwitchStatu Test_LIN_HeadLampUpDown_SwitchStatu_V_6 = Cx5_A3PosSwitchStatus_Spare_02;
  LIN_HeadLampUpDown_SwitchStatu Test_LIN_HeadLampUpDown_SwitchStatu_V_7 = Cx6_A3PosSwitchStatus_Error;
  LIN_HeadLampUpDown_SwitchStatu Test_LIN_HeadLampUpDown_SwitchStatu_V_8 = Cx7_A3PosSwitchStatus_NotAvailable;

  LIN_IntLghtCenterBtnFreeWhl_s Test_LIN_IntLghtCenterBtnFreeWhl_s_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_IntLghtCenterBtnFreeWhl_s Test_LIN_IntLghtCenterBtnFreeWhl_s_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_IntLghtCenterBtnFreeWhl_s Test_LIN_IntLghtCenterBtnFreeWhl_s_V_3 = Cx2_PushButtonStatus_Error;
  LIN_IntLghtCenterBtnFreeWhl_s Test_LIN_IntLghtCenterBtnFreeWhl_s_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_IntLghtDimmingLvlDecBtn_s Test_LIN_IntLghtDimmingLvlDecBtn_s_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_IntLghtDimmingLvlDecBtn_s Test_LIN_IntLghtDimmingLvlDecBtn_s_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_IntLghtDimmingLvlDecBtn_s Test_LIN_IntLghtDimmingLvlDecBtn_s_V_3 = Cx2_PushButtonStatus_Error;
  LIN_IntLghtDimmingLvlDecBtn_s Test_LIN_IntLghtDimmingLvlDecBtn_s_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_1 = Cx0_FreeWheel_Status_NoMovement;
  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_2 = Cx1_FreeWheel_Status_1StepClockwise;
  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_3 = Cx2_FreeWheel_Status_2StepsClockwise;
  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_4 = Cx3_FreeWheel_Status_3StepsClockwise;
  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_5 = Cx4_FreeWheel_Status_4StepsClockwise;
  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_6 = Cx5_FreeWheel_Status_5StepsClockwise;
  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_7 = Cx6_FreeWheel_Status_6StepsClockwise;
  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_8 = Cx7_FreeWheel_Status_1StepCounterClockwise;
  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_9 = Cx8_FreeWheel_Status_2StepsCounterClockwise;
  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_10 = Cx9_FreeWheel_Status_3StepsCounterClockwise;
  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_11 = CxA_FreeWheel_Status_4StepsCounterClockwise;
  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_12 = CxB_FreeWheel_Status_5StepsCounterClockwise;
  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_13 = CxC_FreeWheel_Status_6StepsCounterClockwise;
  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_14 = CxD_FreeWheel_Status_Spare;
  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_15 = CxE_FreeWheel_Status_Error;
  LIN_IntLghtDimmingLvlFreeWhl_s Test_LIN_IntLghtDimmingLvlFreeWhl_s_V_16 = CxF_FreeWheel_Status_NotAvailable;

  LIN_IntLghtDimmingLvlIncBtn_s Test_LIN_IntLghtDimmingLvlIncBtn_s_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_IntLghtDimmingLvlIncBtn_s Test_LIN_IntLghtDimmingLvlIncBtn_s_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_IntLghtDimmingLvlIncBtn_s Test_LIN_IntLghtDimmingLvlIncBtn_s_V_3 = Cx2_PushButtonStatus_Error;
  LIN_IntLghtDimmingLvlIncBtn_s Test_LIN_IntLghtDimmingLvlIncBtn_s_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_IntLghtMaxModeBtnPnl2_s Test_LIN_IntLghtMaxModeBtnPnl2_s_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_IntLghtMaxModeBtnPnl2_s Test_LIN_IntLghtMaxModeBtnPnl2_s_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_IntLghtMaxModeBtnPnl2_s Test_LIN_IntLghtMaxModeBtnPnl2_s_V_3 = Cx2_PushButtonStatus_Error;
  LIN_IntLghtMaxModeBtnPnl2_s Test_LIN_IntLghtMaxModeBtnPnl2_s_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_IntLghtModeInd_cmd_IL_Mode Test_LIN_IntLghtModeInd_cmd_IL_Mode_V_1 = Cx0_IL_Mode_OFF;
  LIN_IntLghtModeInd_cmd_IL_Mode Test_LIN_IntLghtModeInd_cmd_IL_Mode_V_2 = Cx1_IL_Mode_NightDriving;
  LIN_IntLghtModeInd_cmd_IL_Mode Test_LIN_IntLghtModeInd_cmd_IL_Mode_V_3 = Cx2_IL_Mode_Resting;
  LIN_IntLghtModeInd_cmd_IL_Mode Test_LIN_IntLghtModeInd_cmd_IL_Mode_V_4 = Cx3_IL_Mode_Max;
  LIN_IntLghtModeInd_cmd_IL_Mode Test_LIN_IntLghtModeInd_cmd_IL_Mode_V_5 = Cx4_IL_Mode_spare_1;
  LIN_IntLghtModeInd_cmd_IL_Mode Test_LIN_IntLghtModeInd_cmd_IL_Mode_V_6 = Cx5_IL_Mode_spare_2;
  LIN_IntLghtModeInd_cmd_IL_Mode Test_LIN_IntLghtModeInd_cmd_IL_Mode_V_7 = Cx6_IL_Mode_ErrorIndicator;
  LIN_IntLghtModeInd_cmd_IL_Mode Test_LIN_IntLghtModeInd_cmd_IL_Mode_V_8 = Cx7_IL_Mode_NotAvailable;

  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_1 = Cx0_FreeWheel_Status_NoMovement;
  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_2 = Cx1_FreeWheel_Status_1StepClockwise;
  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_3 = Cx2_FreeWheel_Status_2StepsClockwise;
  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_4 = Cx3_FreeWheel_Status_3StepsClockwise;
  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_5 = Cx4_FreeWheel_Status_4StepsClockwise;
  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_6 = Cx5_FreeWheel_Status_5StepsClockwise;
  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_7 = Cx6_FreeWheel_Status_6StepsClockwise;
  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_8 = Cx7_FreeWheel_Status_1StepCounterClockwise;
  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_9 = Cx8_FreeWheel_Status_2StepsCounterClockwise;
  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_10 = Cx9_FreeWheel_Status_3StepsCounterClockwise;
  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_11 = CxA_FreeWheel_Status_4StepsCounterClockwise;
  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_12 = CxB_FreeWheel_Status_5StepsCounterClockwise;
  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_13 = CxC_FreeWheel_Status_6StepsCounterClockwise;
  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_14 = CxD_FreeWheel_Status_Spare;
  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_15 = CxE_FreeWheel_Status_Error;
  LIN_IntLghtModeSelrFreeWheel_s Test_LIN_IntLghtModeSelrFreeWheel_s_V_16 = CxF_FreeWheel_Status_NotAvailable;

  LIN_IntLghtNightModeBt2_s Test_LIN_IntLghtNightModeBt2_s_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_IntLghtNightModeBt2_s Test_LIN_IntLghtNightModeBt2_s_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_IntLghtNightModeBt2_s Test_LIN_IntLghtNightModeBt2_s_V_3 = Cx2_PushButtonStatus_Error;
  LIN_IntLghtNightModeBt2_s Test_LIN_IntLghtNightModeBt2_s_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_IntLghtOffModeInd_cmd Test_LIN_IntLghtOffModeInd_cmd_V_1 = Cx0_DeviceIndication_Off;
  LIN_IntLghtOffModeInd_cmd Test_LIN_IntLghtOffModeInd_cmd_V_2 = Cx1_DeviceIndication_On;
  LIN_IntLghtOffModeInd_cmd Test_LIN_IntLghtOffModeInd_cmd_V_3 = Cx2_DeviceIndication_Blink;
  LIN_IntLghtOffModeInd_cmd Test_LIN_IntLghtOffModeInd_cmd_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_IntLghtRestModeBtnPnl2_s Test_LIN_IntLghtRestModeBtnPnl2_s_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_IntLghtRestModeBtnPnl2_s Test_LIN_IntLghtRestModeBtnPnl2_s_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_IntLghtRestModeBtnPnl2_s Test_LIN_IntLghtRestModeBtnPnl2_s_V_3 = Cx2_PushButtonStatus_Error;
  LIN_IntLghtRestModeBtnPnl2_s Test_LIN_IntLghtRestModeBtnPnl2_s_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_IntLightMaxModeInd_cmd Test_LIN_IntLightMaxModeInd_cmd_V_1 = Cx0_DeviceIndication_Off;
  LIN_IntLightMaxModeInd_cmd Test_LIN_IntLightMaxModeInd_cmd_V_2 = Cx1_DeviceIndication_On;
  LIN_IntLightMaxModeInd_cmd Test_LIN_IntLightMaxModeInd_cmd_V_3 = Cx2_DeviceIndication_Blink;
  LIN_IntLightMaxModeInd_cmd Test_LIN_IntLightMaxModeInd_cmd_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_IntLightNightModeInd_cmd Test_LIN_IntLightNightModeInd_cmd_V_1 = Cx0_DeviceIndication_Off;
  LIN_IntLightNightModeInd_cmd Test_LIN_IntLightNightModeInd_cmd_V_2 = Cx1_DeviceIndication_On;
  LIN_IntLightNightModeInd_cmd Test_LIN_IntLightNightModeInd_cmd_V_3 = Cx2_DeviceIndication_Blink;
  LIN_IntLightNightModeInd_cmd Test_LIN_IntLightNightModeInd_cmd_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_IntLightRestingModeInd_cmd Test_LIN_IntLightRestingModeInd_cmd_V_1 = Cx0_DeviceIndication_Off;
  LIN_IntLightRestingModeInd_cmd Test_LIN_IntLightRestingModeInd_cmd_V_2 = Cx1_DeviceIndication_On;
  LIN_IntLightRestingModeInd_cmd Test_LIN_IntLightRestingModeInd_cmd_V_3 = Cx2_DeviceIndication_Blink;
  LIN_IntLightRestingModeInd_cmd Test_LIN_IntLightRestingModeInd_cmd_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_LKSPushButton Test_LIN_LKSPushButton_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_LKSPushButton Test_LIN_LKSPushButton_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_LKSPushButton Test_LIN_LKSPushButton_V_3 = Cx2_PushButtonStatus_Error;
  LIN_LKSPushButton Test_LIN_LKSPushButton_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_LKS_DeviceIndication Test_LIN_LKS_DeviceIndication_V_1 = Cx0_DeviceIndication_Off;
  LIN_LKS_DeviceIndication Test_LIN_LKS_DeviceIndication_V_2 = Cx1_DeviceIndication_On;
  LIN_LKS_DeviceIndication Test_LIN_LKS_DeviceIndication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_LKS_DeviceIndication Test_LIN_LKS_DeviceIndication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_1 = Cx00_Thumbwheel_stat_ThumbWheelPos0;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_2 = Cx01_Thumbwheel_stat_ThumbWheelPos1;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_3 = Cx02_Thumbwheel_stat_ThumbWheelPos2;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_4 = Cx03_Thumbwheel_stat_ThumbWheelPos3;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_5 = Cx04_Thumbwheel_stat_ThumbWheelPos4;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_6 = Cx05_Thumbwheel_stat_ThumbWheelPos5;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_7 = Cx06_Thumbwheel_stat_ThumbWheelPos6;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_8 = Cx07_Thumbwheel_stat_ThumbWheelPos7;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_9 = Cx08_Thumbwheel_stat_ThumbWheelPos8;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_10 = Cx09_Thumbwheel_stat_ThumbWheelPos9;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_11 = Cx0A_Thumbwheel_stat_ThumbWheelPos10;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_12 = Cx0B_Thumbwheel_stat_ThumbWheelPos11;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_13 = Cx0C_Thumbwheel_stat_ThumbWheelPos12;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_14 = Cx0D_Thumbwheel_stat_ThumbWheelPos13;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_15 = Cx0E_Thumbwheel_stat_ThumbWheelPos14;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_16 = Cx0F_Thumbwheel_stat_ThumbWheelPos15;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_17 = Cx10_Thumbwheel_stat_ThumbWheelPos16;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_18 = Cx11_Thumbwheel_stat_Spare;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_19 = Cx12_Thumbwheel_stat_Spare_01;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_20 = Cx13_Thumbwheel_stat_Spare_02;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_21 = Cx14_Thumbwheel_stat_Spare_03;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_22 = Cx15_Thumbwheel_stat_Spare_04;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_23 = Cx16_Thumbwheel_stat_Spare_05;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_24 = Cx17_Thumbwheel_stat_Spare_06;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_25 = Cx18_Thumbwheel_stat_Spare_07;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_26 = Cx19_Thumbwheel_stat_Spare_08;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_27 = Cx1A_Thumbwheel_stat_Spare_09;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_28 = Cx1B_Thumbwheel_stat_Spare_10;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_29 = Cx1C_Thumbwheel_stat_Spare_11;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_30 = Cx1D_Thumbwheel_stat_Spare_12;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_31 = Cx1E_Thumbwheel_stat_Error;
  LIN_LevelingThumbwheel_stat Test_LIN_LevelingThumbwheel_stat_V_32 = Cx1F_Thumbwheel_stat_NotAvaliable;

  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_1 = Cx0_FreeWheel_Status_NoMovement;
  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_2 = Cx1_FreeWheel_Status_1StepClockwise;
  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_3 = Cx2_FreeWheel_Status_2StepsClockwise;
  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_4 = Cx3_FreeWheel_Status_3StepsClockwise;
  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_5 = Cx4_FreeWheel_Status_4StepsClockwise;
  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_6 = Cx5_FreeWheel_Status_5StepsClockwise;
  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_7 = Cx6_FreeWheel_Status_6StepsClockwise;
  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_8 = Cx7_FreeWheel_Status_1StepCounterClockwise;
  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_9 = Cx8_FreeWheel_Status_2StepsCounterClockwise;
  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_10 = Cx9_FreeWheel_Status_3StepsCounterClockwise;
  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_11 = CxA_FreeWheel_Status_4StepsCounterClockwise;
  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_12 = CxB_FreeWheel_Status_5StepsCounterClockwise;
  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_13 = CxC_FreeWheel_Status_6StepsCounterClockwise;
  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_14 = CxD_FreeWheel_Status_Spare;
  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_15 = CxE_FreeWheel_Status_Error;
  LIN_LightMode_Status_1 Test_LIN_LightMode_Status_1_V_16 = CxF_FreeWheel_Status_NotAvailable;

  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_1 = Cx0_FreeWheel_Status_NoMovement;
  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_2 = Cx1_FreeWheel_Status_1StepClockwise;
  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_3 = Cx2_FreeWheel_Status_2StepsClockwise;
  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_4 = Cx3_FreeWheel_Status_3StepsClockwise;
  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_5 = Cx4_FreeWheel_Status_4StepsClockwise;
  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_6 = Cx5_FreeWheel_Status_5StepsClockwise;
  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_7 = Cx6_FreeWheel_Status_6StepsClockwise;
  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_8 = Cx7_FreeWheel_Status_1StepCounterClockwise;
  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_9 = Cx8_FreeWheel_Status_2StepsCounterClockwise;
  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_10 = Cx9_FreeWheel_Status_3StepsCounterClockwise;
  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_11 = CxA_FreeWheel_Status_4StepsCounterClockwise;
  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_12 = CxB_FreeWheel_Status_5StepsCounterClockwise;
  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_13 = CxC_FreeWheel_Status_6StepsCounterClockwise;
  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_14 = CxD_FreeWheel_Status_Spare;
  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_15 = CxE_FreeWheel_Status_Error;
  LIN_LightMode_Status_2 Test_LIN_LightMode_Status_2_V_16 = CxF_FreeWheel_Status_NotAvailable;

  LIN_M1_DeviceIndication Test_LIN_M1_DeviceIndication_V_1 = Cx0_DeviceIndication_Off;
  LIN_M1_DeviceIndication Test_LIN_M1_DeviceIndication_V_2 = Cx1_DeviceIndication_On;
  LIN_M1_DeviceIndication Test_LIN_M1_DeviceIndication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_M1_DeviceIndication Test_LIN_M1_DeviceIndication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_M2_DeviceIndication Test_LIN_M2_DeviceIndication_V_1 = Cx0_DeviceIndication_Off;
  LIN_M2_DeviceIndication Test_LIN_M2_DeviceIndication_V_2 = Cx1_DeviceIndication_On;
  LIN_M2_DeviceIndication Test_LIN_M2_DeviceIndication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_M2_DeviceIndication Test_LIN_M2_DeviceIndication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_M3_DeviceIndication Test_LIN_M3_DeviceIndication_V_1 = Cx0_DeviceIndication_Off;
  LIN_M3_DeviceIndication Test_LIN_M3_DeviceIndication_V_2 = Cx1_DeviceIndication_On;
  LIN_M3_DeviceIndication Test_LIN_M3_DeviceIndication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_M3_DeviceIndication Test_LIN_M3_DeviceIndication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_MemButtonStatus Test_LIN_MemButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_MemButtonStatus Test_LIN_MemButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_MemButtonStatus Test_LIN_MemButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_MemButtonStatus Test_LIN_MemButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_Offroad_ButtonStatus Test_LIN_Offroad_ButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_Offroad_ButtonStatus Test_LIN_Offroad_ButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_Offroad_ButtonStatus Test_LIN_Offroad_ButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_Offroad_ButtonStatus Test_LIN_Offroad_ButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_Offroad_Indication Test_LIN_Offroad_Indication_V_1 = Cx0_DeviceIndication_Off;
  LIN_Offroad_Indication Test_LIN_Offroad_Indication_V_2 = Cx1_DeviceIndication_On;
  LIN_Offroad_Indication Test_LIN_Offroad_Indication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_Offroad_Indication Test_LIN_Offroad_Indication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_ParkingLight_Indication Test_LIN_ParkingLight_Indication_V_1 = Cx0_DeviceIndication_Off;
  LIN_ParkingLight_Indication Test_LIN_ParkingLight_Indication_V_2 = Cx1_DeviceIndication_On;
  LIN_ParkingLight_Indication Test_LIN_ParkingLight_Indication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_ParkingLight_Indication Test_LIN_ParkingLight_Indication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_PhoneButtonIndication_cmd Test_LIN_PhoneButtonIndication_cmd_V_1 = Cx0_DeviceIndication_Off;
  LIN_PhoneButtonIndication_cmd Test_LIN_PhoneButtonIndication_cmd_V_2 = Cx1_DeviceIndication_On;
  LIN_PhoneButtonIndication_cmd Test_LIN_PhoneButtonIndication_cmd_V_3 = Cx2_DeviceIndication_Blink;
  LIN_PhoneButtonIndication_cmd Test_LIN_PhoneButtonIndication_cmd_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_RearFog_Indication Test_LIN_RearFog_Indication_V_1 = Cx0_DeviceIndication_Off;
  LIN_RearFog_Indication Test_LIN_RearFog_Indication_V_2 = Cx1_DeviceIndication_On;
  LIN_RearFog_Indication Test_LIN_RearFog_Indication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_RearFog_Indication Test_LIN_RearFog_Indication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_RearWorkProjector_BtnStat Test_LIN_RearWorkProjector_BtnStat_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_RearWorkProjector_BtnStat Test_LIN_RearWorkProjector_BtnStat_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_RearWorkProjector_BtnStat Test_LIN_RearWorkProjector_BtnStat_V_3 = Cx2_PushButtonStatus_Error;
  LIN_RearWorkProjector_BtnStat Test_LIN_RearWorkProjector_BtnStat_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_RearWorkProjector_Indicati Test_LIN_RearWorkProjector_Indicati_V_1 = Cx0_DeviceIndication_Off;
  LIN_RearWorkProjector_Indicati Test_LIN_RearWorkProjector_Indicati_V_2 = Cx1_DeviceIndication_On;
  LIN_RearWorkProjector_Indicati Test_LIN_RearWorkProjector_Indicati_V_3 = Cx2_DeviceIndication_Blink;
  LIN_RearWorkProjector_Indicati Test_LIN_RearWorkProjector_Indicati_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_SelectButtonStatus Test_LIN_SelectButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_SelectButtonStatus Test_LIN_SelectButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_SelectButtonStatus Test_LIN_SelectButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_SelectButtonStatus Test_LIN_SelectButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_SpeedControlModeButtonStat Test_LIN_SpeedControlModeButtonStat_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_SpeedControlModeButtonStat Test_LIN_SpeedControlModeButtonStat_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_SpeedControlModeButtonStat Test_LIN_SpeedControlModeButtonStat_V_3 = Cx2_PushButtonStatus_Error;
  LIN_SpeedControlModeButtonStat Test_LIN_SpeedControlModeButtonStat_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_1 = Cx0_FreeWheel_Status_NoMovement;
  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_2 = Cx1_FreeWheel_Status_1StepClockwise;
  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_3 = Cx2_FreeWheel_Status_2StepsClockwise;
  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_4 = Cx3_FreeWheel_Status_3StepsClockwise;
  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_5 = Cx4_FreeWheel_Status_4StepsClockwise;
  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_6 = Cx5_FreeWheel_Status_5StepsClockwise;
  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_7 = Cx6_FreeWheel_Status_6StepsClockwise;
  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_8 = Cx7_FreeWheel_Status_1StepCounterClockwise;
  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_9 = Cx8_FreeWheel_Status_2StepsCounterClockwise;
  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_10 = Cx9_FreeWheel_Status_3StepsCounterClockwise;
  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_11 = CxA_FreeWheel_Status_4StepsCounterClockwise;
  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_12 = CxB_FreeWheel_Status_5StepsCounterClockwise;
  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_13 = CxC_FreeWheel_Status_6StepsCounterClockwise;
  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_14 = CxD_FreeWheel_Status_Spare;
  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_15 = CxE_FreeWheel_Status_Error;
  LIN_SpeedControlModeWheelStat Test_LIN_SpeedControlModeWheelStat_V_16 = CxF_FreeWheel_Status_NotAvailable;

  LIN_StopButtonStatus Test_LIN_StopButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_StopButtonStatus Test_LIN_StopButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_StopButtonStatus Test_LIN_StopButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_StopButtonStatus Test_LIN_StopButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_TCP_ABS_ButtonStatus Test_LIN_TCP_ABS_ButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_TCP_ABS_ButtonStatus Test_LIN_TCP_ABS_ButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_TCP_ABS_ButtonStatus Test_LIN_TCP_ABS_ButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_TCP_ABS_ButtonStatus Test_LIN_TCP_ABS_ButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_TCP_ATC_ButtonStatus Test_LIN_TCP_ATC_ButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_TCP_ATC_ButtonStatus Test_LIN_TCP_ATC_ButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_TCP_ATC_ButtonStatus Test_LIN_TCP_ATC_ButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_TCP_ATC_ButtonStatus Test_LIN_TCP_ATC_ButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_TCP_ESC_ButtonStatus Test_LIN_TCP_ESC_ButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_TCP_ESC_ButtonStatus Test_LIN_TCP_ESC_ButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_TCP_ESC_ButtonStatus Test_LIN_TCP_ESC_ButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_TCP_ESC_ButtonStatus Test_LIN_TCP_ESC_ButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_TCP_KnobPostionStatus Test_LIN_TCP_KnobPostionStatus_V_1 = Cx0_TCPKnobPostionStatus_Pos0;
  LIN_TCP_KnobPostionStatus Test_LIN_TCP_KnobPostionStatus_V_2 = Cx1_TCPKnobPostionStatus_Pos1;
  LIN_TCP_KnobPostionStatus Test_LIN_TCP_KnobPostionStatus_V_3 = Cx2_TCPKnobPostionStatus_Pos2;
  LIN_TCP_KnobPostionStatus Test_LIN_TCP_KnobPostionStatus_V_4 = Cx3_TCPKnobPostionStatus_Pos3;
  LIN_TCP_KnobPostionStatus Test_LIN_TCP_KnobPostionStatus_V_5 = Cx4_TCPKnobPostionStatus_Pos4;
  LIN_TCP_KnobPostionStatus Test_LIN_TCP_KnobPostionStatus_V_6 = Cx5_TCPKnobPostionStatus_Spare1;
  LIN_TCP_KnobPostionStatus Test_LIN_TCP_KnobPostionStatus_V_7 = Cx6_TCPKnobPostionStatus_Error;
  LIN_TCP_KnobPostionStatus Test_LIN_TCP_KnobPostionStatus_V_8 = Cx7_TCPKnobPostionStatus_NotAvailable;

  LIN_TCP_TCS_ButtonStatus Test_LIN_TCP_TCS_ButtonStatus_V_1 = Cx0_PushButtonStatus_Neutral;
  LIN_TCP_TCS_ButtonStatus Test_LIN_TCP_TCS_ButtonStatus_V_2 = Cx1_PushButtonStatus_Pushed;
  LIN_TCP_TCS_ButtonStatus Test_LIN_TCP_TCS_ButtonStatus_V_3 = Cx2_PushButtonStatus_Error;
  LIN_TCP_TCS_ButtonStatus Test_LIN_TCP_TCS_ButtonStatus_V_4 = Cx3_PushButtonStatus_NotAvailable;

  LIN_Up_DeviceIndication Test_LIN_Up_DeviceIndication_V_1 = Cx0_DeviceIndication_Off;
  LIN_Up_DeviceIndication Test_LIN_Up_DeviceIndication_V_2 = Cx1_DeviceIndication_On;
  LIN_Up_DeviceIndication Test_LIN_Up_DeviceIndication_V_3 = Cx2_DeviceIndication_Blink;
  LIN_Up_DeviceIndication Test_LIN_Up_DeviceIndication_V_4 = Cx3_DeviceIndication_SpareValue;

  LIN_WRDownButtonStatus Test_LIN_WRDownButtonStatus_V_1 = Cx0_EvalButtonRequest_Neutral;
  LIN_WRDownButtonStatus Test_LIN_WRDownButtonStatus_V_2 = Cx1_EvalButtonRequest_EvaluatingPush;
  LIN_WRDownButtonStatus Test_LIN_WRDownButtonStatus_V_3 = Cx2_EvalButtonRequest_ContinuouslyPushed;
  LIN_WRDownButtonStatus Test_LIN_WRDownButtonStatus_V_4 = Cx3_EvalButtonRequest_ShortPush;
  LIN_WRDownButtonStatus Test_LIN_WRDownButtonStatus_V_5 = Cx4_EvalButtonRequest_Spare1;
  LIN_WRDownButtonStatus Test_LIN_WRDownButtonStatus_V_6 = Cx5_EvalButtonRequest_Spare2;
  LIN_WRDownButtonStatus Test_LIN_WRDownButtonStatus_V_7 = Cx6_EvalButtonRequest_Error;
  LIN_WRDownButtonStatus Test_LIN_WRDownButtonStatus_V_8 = Cx7_EvalButtonRequest_NotAvailable;

  LIN_WRUpButtonStatus Test_LIN_WRUpButtonStatus_V_1 = Cx0_EvalButtonRequest_Neutral;
  LIN_WRUpButtonStatus Test_LIN_WRUpButtonStatus_V_2 = Cx1_EvalButtonRequest_EvaluatingPush;
  LIN_WRUpButtonStatus Test_LIN_WRUpButtonStatus_V_3 = Cx2_EvalButtonRequest_ContinuouslyPushed;
  LIN_WRUpButtonStatus Test_LIN_WRUpButtonStatus_V_4 = Cx3_EvalButtonRequest_ShortPush;
  LIN_WRUpButtonStatus Test_LIN_WRUpButtonStatus_V_5 = Cx4_EvalButtonRequest_Spare1;
  LIN_WRUpButtonStatus Test_LIN_WRUpButtonStatus_V_6 = Cx5_EvalButtonRequest_Spare2;
  LIN_WRUpButtonStatus Test_LIN_WRUpButtonStatus_V_7 = Cx6_EvalButtonRequest_Error;
  LIN_WRUpButtonStatus Test_LIN_WRUpButtonStatus_V_8 = Cx7_EvalButtonRequest_NotAvailable;

  TCS_Indication Test_TCS_Indication_V_1 = Cx0_DeviceIndication_Off;
  TCS_Indication Test_TCS_Indication_V_2 = Cx1_DeviceIndication_On;
  TCS_Indication Test_TCS_Indication_V_3 = Cx2_DeviceIndication_Blink;
  TCS_Indication Test_TCS_Indication_V_4 = Cx3_DeviceIndication_SpareValue;
}

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
