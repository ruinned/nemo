/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TestLin.c
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/SCIM_BP_181115_LINErrorHandling/SCIM_BP.dpa
 *     SW-C Type:  TestLin
 *  Generated at:  Sat Nov 17 14:14:53 2018
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
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BswM_BswMRteMDG_LIN2Schedule
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BswM_BswMRteMDG_LIN3Schedule
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BswM_BswMRteMDG_LIN4Schedule
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BswM_BswMRteMDG_LIN5Schedule
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_TestLin.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 #include "Spi.h"


#define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



BswM_BswMRteMDG_LIN1Schedule TestLIN1_PresentSchedule_Table =2;   // LIN1_TABLE2
BswM_BswMRteMDG_LIN1Schedule TestLIN1_PreviousSchedule_Table =0;


BswM_BswMRteMDG_LIN2Schedule TestLIN2_PresentSchedule_Table =1;  // LIN2_TABLE0
BswM_BswMRteMDG_LIN2Schedule TestLIN2_PreviousSchedule_Table =0;


BswM_BswMRteMDG_LIN3Schedule TestLIN3_PresentSchedule_Table =2;   // LIN3_TABLE2
BswM_BswMRteMDG_LIN3Schedule TestLIN3_PreviousSchedule_Table =0;


BswM_BswMRteMDG_LIN4Schedule TestLIN4_PresentSchedule_Table =2;   // LIN4_TABLE2
BswM_BswMRteMDG_LIN4Schedule TestLIN4_PreviousSchedule_Table =0;



BswM_BswMRteMDG_LIN5Schedule TestLIN5_PresentSchedule_Table =2;   // LIN5_TABLE2
BswM_BswMRteMDG_LIN5Schedule TestLIN5_PreviousSchedule_Table =0;



uint8 TestLinStartCounter=0;


/*FSP1_L1 Start*/

struct
{
 uint8 	FSP1DiagInfoL1_Status;
 uint8 	FSP1ResponseErrorL1_Status;
 uint8 	SwitchDetectionNeeded1L1_Status;
 uint8  FSP1_L1_NodeStatus;		
}TestLin_Fsp1_L1;



FSP1DiagInfoL1 TestLin_FSP1DiagInfoL1=0;
FSP1ResponseErrorL1 TestLin_FSP1ResponseErrorL1=0;
SwitchDetectionNeeded1L1  TestLin_SwitchDetectionNeeded1L1=0;


/*FSP1_L1 End*/


/*FSP2_L1 Start*/

struct
{
 uint8 	FSP2DiagInfoL1_Status;
 uint8 	FSP2ResponseErrorL1_Status;
 uint8  FSP2SwitchStatusL1_Status;
 uint8 	SwitchDetectionNeeded2L1_Status;
 uint8  FSP2_L1_NodeStatus;		
}TestLin_Fsp2_L1;


FSP2DiagInfoL1           TestLin_FSP2DiagInfoL1=0;
FSP2ResponseErrorL1      TestLin_FSP2ResponseErrorL1=0;
FSP2SwitchStatusL1       TestLin_FSP2SwitchStatusL1=0;
SwitchDetectionNeeded2L1 TestLin_SwitchDetectionNeeded2L1=0;


/*FSP2_L1 End*/



/*ILCP1 Start*/


struct
{
 uint8 	DiagInfoILCP1_Status;
 uint8 	LIN_DoorAutoFuncBtn_stat_Status;
 uint8  LIN_IntLghtDimmingLvlDecBtn_s_Status;
 uint8 	LIN_IntLghtDimmingLvlIncBtn_s_Status;
 uint8 	LIN_IntLghtModeSelrFreeWheel_s_Status;
 uint8 	ResponseErrorILCP1_Status;
 uint8  ILCP1_NodeStatus;		
}TestLin_ILCP1;






DiagInfoILCP1                    TestLin_DiagInfoILCP1;
LIN_DoorAutoFuncBtn_stat         TestLin_LIN_DoorAutoFuncBtn_stat;
LIN_IntLghtDimmingLvlDecBtn_s    TestLin_LIN_IntLghtDimmingLvlDecBtn_s;
LIN_IntLghtDimmingLvlIncBtn_s    TestLin_LIN_IntLghtDimmingLvlIncBtn_s;
LIN_IntLghtModeSelrFreeWheel_s   TestLin_LIN_IntLghtModeSelrFreeWheel_s;
ResponseErrorILCP1               TestLin_ResponseErrorILCP1;




/*ILCP1 End*/





#if 0
 	uint8 u8_spi_des_data[16] = {0,};
	uint8 u8_spi_src_data[8] = {0,};
	uint8 u8_retTransmit = 0;
	uint8 u8_senddata = 0;
  uint8 u8_cnt = 0;
#endif


#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

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
 
TestLin_Fsp2_L1.FSP2SwitchStatusL1_Status=0;

if(TestLinStartCounter > 6)
{
   if(TestLIN1_PresentSchedule_Table!=TestLIN1_PreviousSchedule_Table)
  {	  
   Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN1Schedule_BswM_MDGP_BswMRteMDG_LIN1Schedule_requestedMode(TestLIN1_PresentSchedule_Table); 
  
   TestLIN1_PreviousSchedule_Table = TestLIN1_PresentSchedule_Table;
  }
  

  
    if(TestLIN2_PresentSchedule_Table!=TestLIN2_PreviousSchedule_Table)
  {	  
   Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN2Schedule_BswM_MDGP_BswMRteMDG_LIN2Schedule_requestedMode(TestLIN2_PresentSchedule_Table); 
  
   TestLIN2_PreviousSchedule_Table = TestLIN2_PresentSchedule_Table;
  }

 
  if(TestLIN3_PresentSchedule_Table!=TestLIN3_PreviousSchedule_Table)
  {	  
   Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN3Schedule_BswM_MDGP_BswMRteMDG_LIN3Schedule_requestedMode(TestLIN3_PresentSchedule_Table); 
  
   TestLIN3_PreviousSchedule_Table = TestLIN3_PresentSchedule_Table;
  }
  if(TestLIN4_PresentSchedule_Table!=TestLIN4_PreviousSchedule_Table)
  {	  
   Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN4Schedule_BswM_MDGP_BswMRteMDG_LIN4Schedule_requestedMode(TestLIN4_PresentSchedule_Table); 
  
   TestLIN4_PreviousSchedule_Table = TestLIN4_PresentSchedule_Table;
  }
   
   
  if(TestLIN5_PresentSchedule_Table!=TestLIN5_PreviousSchedule_Table)
  {	  
   Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN5Schedule_BswM_MDGP_BswMRteMDG_LIN5Schedule_requestedMode(TestLIN5_PresentSchedule_Table); 
  
   TestLIN5_PreviousSchedule_Table = TestLIN5_PresentSchedule_Table;
  }    



 }
else
{
 TestLinStartCounter++;

}
  
  
 /* ILCP1 Start*/ 
  
 if((TestLin_ILCP1.DiagInfoILCP1_Status==1)&&(TestLin_ILCP1.LIN_DoorAutoFuncBtn_stat_Status==1)&&(TestLin_ILCP1.LIN_IntLghtDimmingLvlDecBtn_s_Status==1)&&(TestLin_ILCP1.LIN_IntLghtDimmingLvlIncBtn_s_Status==1)&&(TestLin_ILCP1.LIN_IntLghtModeSelrFreeWheel_s_Status==1)&&(TestLin_ILCP1.ResponseErrorILCP1_Status==1))
 {
	 
	 TestLin_ILCP1.ILCP1_NodeStatus =1; // Node Error
	 
 }
 else if((TestLin_ILCP1.DiagInfoILCP1_Status==1)||(TestLin_ILCP1.LIN_DoorAutoFuncBtn_stat_Status==1)||(TestLin_ILCP1.LIN_IntLghtDimmingLvlDecBtn_s_Status==1)||(TestLin_ILCP1.LIN_IntLghtDimmingLvlIncBtn_s_Status==1)||(TestLin_ILCP1.LIN_IntLghtModeSelrFreeWheel_s_Status==1)||(TestLin_ILCP1.ResponseErrorILCP1_Status==1))
 {
	  TestLin_ILCP1.ILCP1_NodeStatus =2; // Frame Error	 	 
 } 
 else
 {
	  TestLin_ILCP1.ILCP1_NodeStatus =0; // No Error	 
 } 
 
 /* ILCP1 End*/
  
  
 /* FSP2_L1 Start*/ 
  
 if((TestLin_Fsp2_L1.FSP2DiagInfoL1_Status==1)&&(TestLin_Fsp2_L1.FSP2ResponseErrorL1_Status==1)&&(TestLin_Fsp2_L1.SwitchDetectionNeeded2L1_Status==1))
 {
	 
	 TestLin_Fsp2_L1.FSP2_L1_NodeStatus =1; // Node Error
	 
 }
 else if((TestLin_Fsp2_L1.FSP2DiagInfoL1_Status==1)||(TestLin_Fsp2_L1.FSP2ResponseErrorL1_Status==1)||(TestLin_Fsp2_L1.SwitchDetectionNeeded2L1_Status==1))
 {
	  TestLin_Fsp2_L1.FSP2_L1_NodeStatus =2; // Frame Error	 
 }
 else
 {
	  TestLin_Fsp2_L1.FSP2_L1_NodeStatus =0; // No Error	 
 }
 
 /* FSP2_L1 End*/  
  
  
  
  
 /* FSP1_L1 Start*/ 
  
 if(( TestLin_Fsp1_L1.FSP1DiagInfoL1_Status==1)&&( TestLin_Fsp1_L1.FSP1ResponseErrorL1_Status==1)&&( TestLin_Fsp1_L1.SwitchDetectionNeeded1L1_Status==1))
 {
	 
	  TestLin_Fsp1_L1.FSP1_L1_NodeStatus =1; // Node Error
	 
 }
 else if(( TestLin_Fsp1_L1.FSP1DiagInfoL1_Status==1)||( TestLin_Fsp1_L1.FSP1ResponseErrorL1_Status==1)||( TestLin_Fsp1_L1.SwitchDetectionNeeded1L1_Status==1))
 {
	   TestLin_Fsp1_L1.FSP1_L1_NodeStatus =2; // Frame Error	 
 }
 else
 {
	  TestLin_Fsp1_L1.FSP1_L1_NodeStatus =0; // No Error	 
 }
  
  /* FSP1_L1 End*/ 
  
  
  

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
TestLin_Fsp1_L1.FSP1DiagInfoL1_Status=0; 

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
  TestLin_Fsp1_L1.FSP1DiagInfoL1_Status=1; // Error

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
 TestLin_Fsp1_L1.FSP1ResponseErrorL1_Status=0; 

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
TestLin_Fsp1_L1.FSP1ResponseErrorL1_Status=1; // Error

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
TestLin_Fsp1_L1.SwitchDetectionNeeded1L1_Status=0;

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
TestLin_Fsp1_L1.SwitchDetectionNeeded1L1_Status=1;

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
TestLin_Fsp2_L1.FSP2DiagInfoL1_Status=0;

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
TestLin_Fsp2_L1.FSP2DiagInfoL1_Status=1;

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
TestLin_Fsp2_L1.FSP2ResponseErrorL1_Status=0;

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
TestLin_Fsp2_L1.FSP2ResponseErrorL1_Status=1;

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
TestLin_Fsp2_L1.FSP2SwitchStatusL1_Status=0;

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
TestLin_Fsp2_L1.FSP2SwitchStatusL1_Status=1;

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
TestLin_Fsp2_L1.SwitchDetectionNeeded2L1_Status=0;

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
TestLin_Fsp2_L1.SwitchDetectionNeeded2L1_Status=1;

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
TestLin_ILCP1.DiagInfoILCP1_Status=0;

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
TestLin_ILCP1.DiagInfoILCP1_Status=1;

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
TestLin_ILCP1.LIN_DoorAutoFuncBtn_stat_Status=0;

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
TestLin_ILCP1.LIN_DoorAutoFuncBtn_stat_Status=1;

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
TestLin_ILCP1.LIN_IntLghtDimmingLvlDecBtn_s_Status=0;

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
TestLin_ILCP1.LIN_IntLghtDimmingLvlDecBtn_s_Status=1;

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
TestLin_ILCP1.LIN_IntLghtDimmingLvlIncBtn_s_Status=0;

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
 TestLin_ILCP1.LIN_IntLghtDimmingLvlIncBtn_s_Status=1;

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
TestLin_ILCP1.LIN_IntLghtModeSelrFreeWheel_s_Status=0;

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
TestLin_ILCP1.LIN_IntLghtModeSelrFreeWheel_s_Status=1;

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
TestLin_ILCP1.ResponseErrorILCP1_Status=0;

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
 TestLin_ILCP1.ResponseErrorILCP1_Status=1;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define TestLin_STOP_SEC_CODE
#include "TestLin_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



#if 0
/***  Start of saved code (symbol: documentation area:Re_LIN0_FSP1_L1_RxTimeout_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, COM_APPL_CODE) ComTimeoutNotification_BacklightCmd_ISig_13_oBacklight_FuncInd_L1_oLIN00_e8d0b8c1_Tx(void)
{
}

FUNC(void, COM_APPL_CODE) ComTimeoutNotification_FSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx(void)
{
}


FUNC(void, COM_APPL_CODE) ComTimeoutNotification_FSP2IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_115be26b_Tx(void)
{
}


FUNC(void, COM_APPL_CODE) ComTimeoutNotification_FuncIndIlluminationLevel_ISig_13_oBacklight_FuncInd_L1_oLIN00_dc8bb8a1_Tx(void)
{
}

FUNC(void, COM_APPL_CODE) ComTimeoutNotification_LIN_DoorAutoFuncInd_cmd_oCIOMtoSlaves1_L1_oLIN00_52fafc3c_Tx(void)
{
}


FUNC(void, COM_APPL_CODE) ComTimeoutNotification_LIN_IntLghtOffModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_00d309d6_Tx(void)
{
}

FUNC(void, COM_APPL_CODE) ComTimeoutNotification_LIN_IntLightMaxModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_523a53e3_Tx(void)
{
}

FUNC(void, COM_APPL_CODE) ComTimeoutNotification_LIN_IntLightNightModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_8c1fb2a2_Tx(void)
{
}

FUNC(void, COM_APPL_CODE) ComTimeoutNotification_LIN_IntLightRestingModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_df4802bd_Tx(void)
{
}

