/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_TestLin_Type.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application types header file for SW-C <TestLin>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TESTLIN_TYPE_H
# define _RTE_TESTLIN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef LIN1_Table1
#   define LIN1_Table1 (1U)
#  endif

#  ifndef LIN1_Table2
#   define LIN1_Table2 (2U)
#  endif

#  ifndef LIN1_Table_E
#   define LIN1_Table_E (3U)
#  endif

#  ifndef LIN1_MasterReq_SlaveResp_Table1
#   define LIN1_MasterReq_SlaveResp_Table1 (4U)
#  endif

#  ifndef LIN1_MasterReq_SlaveResp_Table2
#   define LIN1_MasterReq_SlaveResp_Table2 (5U)
#  endif

#  ifndef LIN1_NULL
#   define LIN1_NULL (0U)
#  endif

#  ifndef LIN1_MasterReq_SlaveResp
#   define LIN1_MasterReq_SlaveResp (6U)
#  endif

#  ifndef LIN2_NULL
#   define LIN2_NULL (0U)
#  endif

#  ifndef LIN2_TABLE0
#   define LIN2_TABLE0 (1U)
#  endif

#  ifndef LIN2_TABLE_E
#   define LIN2_TABLE_E (2U)
#  endif

#  ifndef LIN2_MasterReq_SlaveResp_TABLE0
#   define LIN2_MasterReq_SlaveResp_TABLE0 (3U)
#  endif

#  ifndef LIN2_MasterReq_SlaveResp
#   define LIN2_MasterReq_SlaveResp (4U)
#  endif

#  ifndef LIN3_NULL
#   define LIN3_NULL (0U)
#  endif

#  ifndef LIN3_TABLE1
#   define LIN3_TABLE1 (1U)
#  endif

#  ifndef LIN3_TABLE2
#   define LIN3_TABLE2 (2U)
#  endif

#  ifndef LIN3_TABLE_E
#   define LIN3_TABLE_E (3U)
#  endif

#  ifndef LIN3_MasterReq_SlaveResp_Table1
#   define LIN3_MasterReq_SlaveResp_Table1 (4U)
#  endif

#  ifndef LIN3_MasterReq_SlaveResp_Table2
#   define LIN3_MasterReq_SlaveResp_Table2 (5U)
#  endif

#  ifndef LIN3_MasterReq_SlaveResp
#   define LIN3_MasterReq_SlaveResp (6U)
#  endif

#  ifndef LIN4_NULL
#   define LIN4_NULL (0U)
#  endif

#  ifndef LIN4_MasterReq_SlaveResp_Table1
#   define LIN4_MasterReq_SlaveResp_Table1 (4U)
#  endif

#  ifndef LIN4_TABLE1
#   define LIN4_TABLE1 (1U)
#  endif

#  ifndef LIN4_TABLE2
#   define LIN4_TABLE2 (2U)
#  endif

#  ifndef LIN4_TABLE_E
#   define LIN4_TABLE_E (3U)
#  endif

#  ifndef LIN4_MasterReq_SlaveResp_Table2
#   define LIN4_MasterReq_SlaveResp_Table2 (5U)
#  endif

#  ifndef LIN4_MasterReq_SlaveResp
#   define LIN4_MasterReq_SlaveResp (6U)
#  endif

#  ifndef LIN5_NULL
#   define LIN5_NULL (0U)
#  endif

#  ifndef LIN5_TABLE1
#   define LIN5_TABLE1 (1U)
#  endif

#  ifndef LIN5_MasterReq_SlaveResp_Table1
#   define LIN5_MasterReq_SlaveResp_Table1 (4U)
#  endif

#  ifndef LIN5_MasterReq_SlaveResp_Table2
#   define LIN5_MasterReq_SlaveResp_Table2 (5U)
#  endif

#  ifndef LIN5_MasterReq_SlaveResp
#   define LIN5_MasterReq_SlaveResp (6U)
#  endif

#  ifndef LIN5_TABLE2
#   define LIN5_TABLE2 (2U)
#  endif

#  ifndef LIN5_TABLE_E
#   define LIN5_TABLE_E (3U)
#  endif

#  ifndef Cx0_DoorLock_stat_Idle
#   define Cx0_DoorLock_stat_Idle (0U)
#  endif

#  ifndef Cx1_DoorLock_stat_BothDoorsAreUnlocked
#   define Cx1_DoorLock_stat_BothDoorsAreUnlocked (1U)
#  endif

#  ifndef Cx2_DoorLock_stat_DriverDoorIsUnlocked
#   define Cx2_DoorLock_stat_DriverDoorIsUnlocked (2U)
#  endif

#  ifndef Cx3_DoorLock_stat_PassengerDoorIsUnlocked
#   define Cx3_DoorLock_stat_PassengerDoorIsUnlocked (3U)
#  endif

#  ifndef Cx4_DoorLock_stat_BothDoorsAreLocked
#   define Cx4_DoorLock_stat_BothDoorsAreLocked (4U)
#  endif

#  ifndef CxE_DoorLock_stat_Error
#   define CxE_DoorLock_stat_Error (14U)
#  endif

#  ifndef CxF_DoorLock_stat_NotAvailable
#   define CxF_DoorLock_stat_NotAvailable (15U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx00_AlarmClkID_NotUsed
#   define Cx00_AlarmClkID_NotUsed (0U)
#  endif

#  ifndef Cx01_AlarmClkID_Alarm1
#   define Cx01_AlarmClkID_Alarm1 (1U)
#  endif

#  ifndef Cx02_AlarmClkID_Alarm2
#   define Cx02_AlarmClkID_Alarm2 (2U)
#  endif

#  ifndef Cx03_AlarmClkID_Alarm3
#   define Cx03_AlarmClkID_Alarm3 (3U)
#  endif

#  ifndef Cx04_AlarmClkID_Alarm4
#   define Cx04_AlarmClkID_Alarm4 (4U)
#  endif

#  ifndef Cx05_AlarmClkID_Alarm5
#   define Cx05_AlarmClkID_Alarm5 (5U)
#  endif

#  ifndef Cx06_AlarmClkID_Alarm6
#   define Cx06_AlarmClkID_Alarm6 (6U)
#  endif

#  ifndef Cx07_AlarmClkID_Alarm7
#   define Cx07_AlarmClkID_Alarm7 (7U)
#  endif

#  ifndef Cx08_AlarmClkID_Alarm8
#   define Cx08_AlarmClkID_Alarm8 (8U)
#  endif

#  ifndef Cx09_AlarmClkID_Alarm9
#   define Cx09_AlarmClkID_Alarm9 (9U)
#  endif

#  ifndef Cx0A_AlarmClkID_Alarm10
#   define Cx0A_AlarmClkID_Alarm10 (10U)
#  endif

#  ifndef Cx7E_AlarmClkID_Error
#   define Cx7E_AlarmClkID_Error (126U)
#  endif

#  ifndef Cx7F_AlarmClkID_NotAvailable
#   define Cx7F_AlarmClkID_NotAvailable (127U)
#  endif

#  ifndef Cx0_AlarmClkStat_Inactive
#   define Cx0_AlarmClkStat_Inactive (0U)
#  endif

#  ifndef Cx1_AlarmClkStat_Active
#   define Cx1_AlarmClkStat_Active (1U)
#  endif

#  ifndef Cx2_AlarmClkStat_NoUsed
#   define Cx2_AlarmClkStat_NoUsed (2U)
#  endif

#  ifndef Cx3_AlarmClkStat_Spare
#   define Cx3_AlarmClkStat_Spare (3U)
#  endif

#  ifndef Cx0_AlarmClkType_NoAudibleNotification
#   define Cx0_AlarmClkType_NoAudibleNotification (0U)
#  endif

#  ifndef Cx1_AlarmClkType_Buzzer
#   define Cx1_AlarmClkType_Buzzer (1U)
#  endif

#  ifndef Cx2_AlarmClkType_Radio
#   define Cx2_AlarmClkType_Radio (2U)
#  endif

#  ifndef Cx3_AlarmClkType_Reserved
#   define Cx3_AlarmClkType_Reserved (3U)
#  endif

#  ifndef Cx4_AlarmClkType_Reserved_01
#   define Cx4_AlarmClkType_Reserved_01 (4U)
#  endif

#  ifndef Cx5_AlarmClkType_Reserved_02
#   define Cx5_AlarmClkType_Reserved_02 (5U)
#  endif

#  ifndef Cx6_AlarmClkType_Error
#   define Cx6_AlarmClkType_Error (6U)
#  endif

#  ifndef Cx7_AlarmClkType_NotAvailable
#   define Cx7_AlarmClkType_NotAvailable (7U)
#  endif

#  ifndef Cx00_AlarmClkID_NotUsed
#   define Cx00_AlarmClkID_NotUsed (0U)
#  endif

#  ifndef Cx01_AlarmClkID_Alarm1
#   define Cx01_AlarmClkID_Alarm1 (1U)
#  endif

#  ifndef Cx02_AlarmClkID_Alarm2
#   define Cx02_AlarmClkID_Alarm2 (2U)
#  endif

#  ifndef Cx03_AlarmClkID_Alarm3
#   define Cx03_AlarmClkID_Alarm3 (3U)
#  endif

#  ifndef Cx04_AlarmClkID_Alarm4
#   define Cx04_AlarmClkID_Alarm4 (4U)
#  endif

#  ifndef Cx05_AlarmClkID_Alarm5
#   define Cx05_AlarmClkID_Alarm5 (5U)
#  endif

#  ifndef Cx06_AlarmClkID_Alarm6
#   define Cx06_AlarmClkID_Alarm6 (6U)
#  endif

#  ifndef Cx07_AlarmClkID_Alarm7
#   define Cx07_AlarmClkID_Alarm7 (7U)
#  endif

#  ifndef Cx08_AlarmClkID_Alarm8
#   define Cx08_AlarmClkID_Alarm8 (8U)
#  endif

#  ifndef Cx09_AlarmClkID_Alarm9
#   define Cx09_AlarmClkID_Alarm9 (9U)
#  endif

#  ifndef Cx0A_AlarmClkID_Alarm10
#   define Cx0A_AlarmClkID_Alarm10 (10U)
#  endif

#  ifndef Cx7E_AlarmClkID_Error
#   define Cx7E_AlarmClkID_Error (126U)
#  endif

#  ifndef Cx7F_AlarmClkID_NotAvailable
#   define Cx7F_AlarmClkID_NotAvailable (127U)
#  endif

#  ifndef Cx0_AlarmClkStat_Inactive
#   define Cx0_AlarmClkStat_Inactive (0U)
#  endif

#  ifndef Cx1_AlarmClkStat_Active
#   define Cx1_AlarmClkStat_Active (1U)
#  endif

#  ifndef Cx2_AlarmClkStat_NoUsed
#   define Cx2_AlarmClkStat_NoUsed (2U)
#  endif

#  ifndef Cx3_AlarmClkStat_Spare
#   define Cx3_AlarmClkStat_Spare (3U)
#  endif

#  ifndef Cx0_AlarmClkType_NoAudibleNotification
#   define Cx0_AlarmClkType_NoAudibleNotification (0U)
#  endif

#  ifndef Cx1_AlarmClkType_Buzzer
#   define Cx1_AlarmClkType_Buzzer (1U)
#  endif

#  ifndef Cx2_AlarmClkType_Radio
#   define Cx2_AlarmClkType_Radio (2U)
#  endif

#  ifndef Cx3_AlarmClkType_Reserved
#   define Cx3_AlarmClkType_Reserved (3U)
#  endif

#  ifndef Cx4_AlarmClkType_Reserved_01
#   define Cx4_AlarmClkType_Reserved_01 (4U)
#  endif

#  ifndef Cx5_AlarmClkType_Reserved_02
#   define Cx5_AlarmClkType_Reserved_02 (5U)
#  endif

#  ifndef Cx6_AlarmClkType_Error
#   define Cx6_AlarmClkType_Error (6U)
#  endif

#  ifndef Cx7_AlarmClkType_NotAvailable
#   define Cx7_AlarmClkType_NotAvailable (7U)
#  endif

#  ifndef Cx0_OffOn_Off
#   define Cx0_OffOn_Off (0U)
#  endif

#  ifndef Cx1_OffOn_On
#   define Cx1_OffOn_On (1U)
#  endif

#  ifndef Cx2_OffOn_Error
#   define Cx2_OffOn_Error (2U)
#  endif

#  ifndef Cx3_OffOn_NotAvailable
#   define Cx3_OffOn_NotAvailable (3U)
#  endif

#  ifndef Cx0_BTStatus_BTOff
#   define Cx0_BTStatus_BTOff (0U)
#  endif

#  ifndef Cx1_BTStatus_BTOnAndNoDeviceConnected
#   define Cx1_BTStatus_BTOnAndNoDeviceConnected (1U)
#  endif

#  ifndef Cx2_BTStatus_BTOnAndDeviceConnected
#   define Cx2_BTStatus_BTOnAndDeviceConnected (2U)
#  endif

#  ifndef Cx3_BTStatus_NotAvailable
#   define Cx3_BTStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx00_Thumbwheel_stat_ThumbWheelPos0
#   define Cx00_Thumbwheel_stat_ThumbWheelPos0 (0U)
#  endif

#  ifndef Cx01_Thumbwheel_stat_ThumbWheelPos1
#   define Cx01_Thumbwheel_stat_ThumbWheelPos1 (1U)
#  endif

#  ifndef Cx02_Thumbwheel_stat_ThumbWheelPos2
#   define Cx02_Thumbwheel_stat_ThumbWheelPos2 (2U)
#  endif

#  ifndef Cx03_Thumbwheel_stat_ThumbWheelPos3
#   define Cx03_Thumbwheel_stat_ThumbWheelPos3 (3U)
#  endif

#  ifndef Cx04_Thumbwheel_stat_ThumbWheelPos4
#   define Cx04_Thumbwheel_stat_ThumbWheelPos4 (4U)
#  endif

#  ifndef Cx05_Thumbwheel_stat_ThumbWheelPos5
#   define Cx05_Thumbwheel_stat_ThumbWheelPos5 (5U)
#  endif

#  ifndef Cx06_Thumbwheel_stat_ThumbWheelPos6
#   define Cx06_Thumbwheel_stat_ThumbWheelPos6 (6U)
#  endif

#  ifndef Cx07_Thumbwheel_stat_ThumbWheelPos7
#   define Cx07_Thumbwheel_stat_ThumbWheelPos7 (7U)
#  endif

#  ifndef Cx08_Thumbwheel_stat_ThumbWheelPos8
#   define Cx08_Thumbwheel_stat_ThumbWheelPos8 (8U)
#  endif

#  ifndef Cx09_Thumbwheel_stat_ThumbWheelPos9
#   define Cx09_Thumbwheel_stat_ThumbWheelPos9 (9U)
#  endif

#  ifndef Cx0A_Thumbwheel_stat_ThumbWheelPos10
#   define Cx0A_Thumbwheel_stat_ThumbWheelPos10 (10U)
#  endif

#  ifndef Cx0B_Thumbwheel_stat_ThumbWheelPos11
#   define Cx0B_Thumbwheel_stat_ThumbWheelPos11 (11U)
#  endif

#  ifndef Cx0C_Thumbwheel_stat_ThumbWheelPos12
#   define Cx0C_Thumbwheel_stat_ThumbWheelPos12 (12U)
#  endif

#  ifndef Cx0D_Thumbwheel_stat_ThumbWheelPos13
#   define Cx0D_Thumbwheel_stat_ThumbWheelPos13 (13U)
#  endif

#  ifndef Cx0E_Thumbwheel_stat_ThumbWheelPos14
#   define Cx0E_Thumbwheel_stat_ThumbWheelPos14 (14U)
#  endif

#  ifndef Cx0F_Thumbwheel_stat_ThumbWheelPos15
#   define Cx0F_Thumbwheel_stat_ThumbWheelPos15 (15U)
#  endif

#  ifndef Cx10_Thumbwheel_stat_ThumbWheelPos16
#   define Cx10_Thumbwheel_stat_ThumbWheelPos16 (16U)
#  endif

#  ifndef Cx11_Thumbwheel_stat_Spare
#   define Cx11_Thumbwheel_stat_Spare (17U)
#  endif

#  ifndef Cx12_Thumbwheel_stat_Spare_01
#   define Cx12_Thumbwheel_stat_Spare_01 (18U)
#  endif

#  ifndef Cx13_Thumbwheel_stat_Spare_02
#   define Cx13_Thumbwheel_stat_Spare_02 (19U)
#  endif

#  ifndef Cx14_Thumbwheel_stat_Spare_03
#   define Cx14_Thumbwheel_stat_Spare_03 (20U)
#  endif

#  ifndef Cx15_Thumbwheel_stat_Spare_04
#   define Cx15_Thumbwheel_stat_Spare_04 (21U)
#  endif

#  ifndef Cx16_Thumbwheel_stat_Spare_05
#   define Cx16_Thumbwheel_stat_Spare_05 (22U)
#  endif

#  ifndef Cx17_Thumbwheel_stat_Spare_06
#   define Cx17_Thumbwheel_stat_Spare_06 (23U)
#  endif

#  ifndef Cx18_Thumbwheel_stat_Spare_07
#   define Cx18_Thumbwheel_stat_Spare_07 (24U)
#  endif

#  ifndef Cx19_Thumbwheel_stat_Spare_08
#   define Cx19_Thumbwheel_stat_Spare_08 (25U)
#  endif

#  ifndef Cx1A_Thumbwheel_stat_Spare_09
#   define Cx1A_Thumbwheel_stat_Spare_09 (26U)
#  endif

#  ifndef Cx1B_Thumbwheel_stat_Spare_10
#   define Cx1B_Thumbwheel_stat_Spare_10 (27U)
#  endif

#  ifndef Cx1C_Thumbwheel_stat_Spare_11
#   define Cx1C_Thumbwheel_stat_Spare_11 (28U)
#  endif

#  ifndef Cx1D_Thumbwheel_stat_Spare_12
#   define Cx1D_Thumbwheel_stat_Spare_12 (29U)
#  endif

#  ifndef Cx1E_Thumbwheel_stat_Error
#   define Cx1E_Thumbwheel_stat_Error (30U)
#  endif

#  ifndef Cx1F_Thumbwheel_stat_NotAvaliable
#   define Cx1F_Thumbwheel_stat_NotAvaliable (31U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_ParkHeaterTimer_cmd_NoAction
#   define Cx0_ParkHeaterTimer_cmd_NoAction (0U)
#  endif

#  ifndef Cx1_ParkHeaterTimer_cmd_TimerEnable
#   define Cx1_ParkHeaterTimer_cmd_TimerEnable (1U)
#  endif

#  ifndef Cx2_ParkHeaterTimer_cmd_TimerDisable
#   define Cx2_ParkHeaterTimer_cmd_TimerDisable (2U)
#  endif

#  ifndef Cx3_ParkHeaterTimer_cmd_Spare
#   define Cx3_ParkHeaterTimer_cmd_Spare (3U)
#  endif

#  ifndef Cx4_ParkHeaterTimer_cmd_Spare_01
#   define Cx4_ParkHeaterTimer_cmd_Spare_01 (4U)
#  endif

#  ifndef Cx5_ParkHeaterTimer_cmd_Spare_02
#   define Cx5_ParkHeaterTimer_cmd_Spare_02 (5U)
#  endif

#  ifndef Cx6_ParkHeaterTimer_cmd_Error
#   define Cx6_ParkHeaterTimer_cmd_Error (6U)
#  endif

#  ifndef Cx7_ParkHeaterTimer_cmd_NotAvailable
#   define Cx7_ParkHeaterTimer_cmd_NotAvailable (7U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_FreeWheel_Status_NoMovement
#   define Cx0_FreeWheel_Status_NoMovement (0U)
#  endif

#  ifndef Cx1_FreeWheel_Status_1StepClockwise
#   define Cx1_FreeWheel_Status_1StepClockwise (1U)
#  endif

#  ifndef Cx2_FreeWheel_Status_2StepsClockwise
#   define Cx2_FreeWheel_Status_2StepsClockwise (2U)
#  endif

#  ifndef Cx3_FreeWheel_Status_3StepsClockwise
#   define Cx3_FreeWheel_Status_3StepsClockwise (3U)
#  endif

#  ifndef Cx4_FreeWheel_Status_4StepsClockwise
#   define Cx4_FreeWheel_Status_4StepsClockwise (4U)
#  endif

#  ifndef Cx5_FreeWheel_Status_5StepsClockwise
#   define Cx5_FreeWheel_Status_5StepsClockwise (5U)
#  endif

#  ifndef Cx6_FreeWheel_Status_6StepsClockwise
#   define Cx6_FreeWheel_Status_6StepsClockwise (6U)
#  endif

#  ifndef Cx7_FreeWheel_Status_1StepCounterClockwise
#   define Cx7_FreeWheel_Status_1StepCounterClockwise (7U)
#  endif

#  ifndef Cx8_FreeWheel_Status_2StepsCounterClockwise
#   define Cx8_FreeWheel_Status_2StepsCounterClockwise (8U)
#  endif

#  ifndef Cx9_FreeWheel_Status_3StepsCounterClockwise
#   define Cx9_FreeWheel_Status_3StepsCounterClockwise (9U)
#  endif

#  ifndef CxA_FreeWheel_Status_4StepsCounterClockwise
#   define CxA_FreeWheel_Status_4StepsCounterClockwise (10U)
#  endif

#  ifndef CxB_FreeWheel_Status_5StepsCounterClockwise
#   define CxB_FreeWheel_Status_5StepsCounterClockwise (11U)
#  endif

#  ifndef CxC_FreeWheel_Status_6StepsCounterClockwise
#   define CxC_FreeWheel_Status_6StepsCounterClockwise (12U)
#  endif

#  ifndef CxD_FreeWheel_Status_Spare
#   define CxD_FreeWheel_Status_Spare (13U)
#  endif

#  ifndef CxE_FreeWheel_Status_Error
#   define CxE_FreeWheel_Status_Error (14U)
#  endif

#  ifndef CxF_FreeWheel_Status_NotAvailable
#   define CxF_FreeWheel_Status_NotAvailable (15U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_A3PosSwitchStatus_Middle
#   define Cx0_A3PosSwitchStatus_Middle (0U)
#  endif

#  ifndef Cx1_A3PosSwitchStatus_Lower
#   define Cx1_A3PosSwitchStatus_Lower (1U)
#  endif

#  ifndef Cx2_A3PosSwitchStatus_Upper
#   define Cx2_A3PosSwitchStatus_Upper (2U)
#  endif

#  ifndef Cx3_A3PosSwitchStatus_Spare
#   define Cx3_A3PosSwitchStatus_Spare (3U)
#  endif

#  ifndef Cx4_A3PosSwitchStatus_Spare_01
#   define Cx4_A3PosSwitchStatus_Spare_01 (4U)
#  endif

#  ifndef Cx5_A3PosSwitchStatus_Spare_02
#   define Cx5_A3PosSwitchStatus_Spare_02 (5U)
#  endif

#  ifndef Cx6_A3PosSwitchStatus_Error
#   define Cx6_A3PosSwitchStatus_Error (6U)
#  endif

#  ifndef Cx7_A3PosSwitchStatus_NotAvailable
#   define Cx7_A3PosSwitchStatus_NotAvailable (7U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_FreeWheel_Status_NoMovement
#   define Cx0_FreeWheel_Status_NoMovement (0U)
#  endif

#  ifndef Cx1_FreeWheel_Status_1StepClockwise
#   define Cx1_FreeWheel_Status_1StepClockwise (1U)
#  endif

#  ifndef Cx2_FreeWheel_Status_2StepsClockwise
#   define Cx2_FreeWheel_Status_2StepsClockwise (2U)
#  endif

#  ifndef Cx3_FreeWheel_Status_3StepsClockwise
#   define Cx3_FreeWheel_Status_3StepsClockwise (3U)
#  endif

#  ifndef Cx4_FreeWheel_Status_4StepsClockwise
#   define Cx4_FreeWheel_Status_4StepsClockwise (4U)
#  endif

#  ifndef Cx5_FreeWheel_Status_5StepsClockwise
#   define Cx5_FreeWheel_Status_5StepsClockwise (5U)
#  endif

#  ifndef Cx6_FreeWheel_Status_6StepsClockwise
#   define Cx6_FreeWheel_Status_6StepsClockwise (6U)
#  endif

#  ifndef Cx7_FreeWheel_Status_1StepCounterClockwise
#   define Cx7_FreeWheel_Status_1StepCounterClockwise (7U)
#  endif

#  ifndef Cx8_FreeWheel_Status_2StepsCounterClockwise
#   define Cx8_FreeWheel_Status_2StepsCounterClockwise (8U)
#  endif

#  ifndef Cx9_FreeWheel_Status_3StepsCounterClockwise
#   define Cx9_FreeWheel_Status_3StepsCounterClockwise (9U)
#  endif

#  ifndef CxA_FreeWheel_Status_4StepsCounterClockwise
#   define CxA_FreeWheel_Status_4StepsCounterClockwise (10U)
#  endif

#  ifndef CxB_FreeWheel_Status_5StepsCounterClockwise
#   define CxB_FreeWheel_Status_5StepsCounterClockwise (11U)
#  endif

#  ifndef CxC_FreeWheel_Status_6StepsCounterClockwise
#   define CxC_FreeWheel_Status_6StepsCounterClockwise (12U)
#  endif

#  ifndef CxD_FreeWheel_Status_Spare
#   define CxD_FreeWheel_Status_Spare (13U)
#  endif

#  ifndef CxE_FreeWheel_Status_Error
#   define CxE_FreeWheel_Status_Error (14U)
#  endif

#  ifndef CxF_FreeWheel_Status_NotAvailable
#   define CxF_FreeWheel_Status_NotAvailable (15U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_IL_Mode_OFF
#   define Cx0_IL_Mode_OFF (0U)
#  endif

#  ifndef Cx1_IL_Mode_NightDriving
#   define Cx1_IL_Mode_NightDriving (1U)
#  endif

#  ifndef Cx2_IL_Mode_Resting
#   define Cx2_IL_Mode_Resting (2U)
#  endif

#  ifndef Cx3_IL_Mode_Max
#   define Cx3_IL_Mode_Max (3U)
#  endif

#  ifndef Cx4_IL_Mode_spare_1
#   define Cx4_IL_Mode_spare_1 (4U)
#  endif

#  ifndef Cx5_IL_Mode_spare_2
#   define Cx5_IL_Mode_spare_2 (5U)
#  endif

#  ifndef Cx6_IL_Mode_ErrorIndicator
#   define Cx6_IL_Mode_ErrorIndicator (6U)
#  endif

#  ifndef Cx7_IL_Mode_NotAvailable
#   define Cx7_IL_Mode_NotAvailable (7U)
#  endif

#  ifndef Cx0_FreeWheel_Status_NoMovement
#   define Cx0_FreeWheel_Status_NoMovement (0U)
#  endif

#  ifndef Cx1_FreeWheel_Status_1StepClockwise
#   define Cx1_FreeWheel_Status_1StepClockwise (1U)
#  endif

#  ifndef Cx2_FreeWheel_Status_2StepsClockwise
#   define Cx2_FreeWheel_Status_2StepsClockwise (2U)
#  endif

#  ifndef Cx3_FreeWheel_Status_3StepsClockwise
#   define Cx3_FreeWheel_Status_3StepsClockwise (3U)
#  endif

#  ifndef Cx4_FreeWheel_Status_4StepsClockwise
#   define Cx4_FreeWheel_Status_4StepsClockwise (4U)
#  endif

#  ifndef Cx5_FreeWheel_Status_5StepsClockwise
#   define Cx5_FreeWheel_Status_5StepsClockwise (5U)
#  endif

#  ifndef Cx6_FreeWheel_Status_6StepsClockwise
#   define Cx6_FreeWheel_Status_6StepsClockwise (6U)
#  endif

#  ifndef Cx7_FreeWheel_Status_1StepCounterClockwise
#   define Cx7_FreeWheel_Status_1StepCounterClockwise (7U)
#  endif

#  ifndef Cx8_FreeWheel_Status_2StepsCounterClockwise
#   define Cx8_FreeWheel_Status_2StepsCounterClockwise (8U)
#  endif

#  ifndef Cx9_FreeWheel_Status_3StepsCounterClockwise
#   define Cx9_FreeWheel_Status_3StepsCounterClockwise (9U)
#  endif

#  ifndef CxA_FreeWheel_Status_4StepsCounterClockwise
#   define CxA_FreeWheel_Status_4StepsCounterClockwise (10U)
#  endif

#  ifndef CxB_FreeWheel_Status_5StepsCounterClockwise
#   define CxB_FreeWheel_Status_5StepsCounterClockwise (11U)
#  endif

#  ifndef CxC_FreeWheel_Status_6StepsCounterClockwise
#   define CxC_FreeWheel_Status_6StepsCounterClockwise (12U)
#  endif

#  ifndef CxD_FreeWheel_Status_Spare
#   define CxD_FreeWheel_Status_Spare (13U)
#  endif

#  ifndef CxE_FreeWheel_Status_Error
#   define CxE_FreeWheel_Status_Error (14U)
#  endif

#  ifndef CxF_FreeWheel_Status_NotAvailable
#   define CxF_FreeWheel_Status_NotAvailable (15U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx00_Thumbwheel_stat_ThumbWheelPos0
#   define Cx00_Thumbwheel_stat_ThumbWheelPos0 (0U)
#  endif

#  ifndef Cx01_Thumbwheel_stat_ThumbWheelPos1
#   define Cx01_Thumbwheel_stat_ThumbWheelPos1 (1U)
#  endif

#  ifndef Cx02_Thumbwheel_stat_ThumbWheelPos2
#   define Cx02_Thumbwheel_stat_ThumbWheelPos2 (2U)
#  endif

#  ifndef Cx03_Thumbwheel_stat_ThumbWheelPos3
#   define Cx03_Thumbwheel_stat_ThumbWheelPos3 (3U)
#  endif

#  ifndef Cx04_Thumbwheel_stat_ThumbWheelPos4
#   define Cx04_Thumbwheel_stat_ThumbWheelPos4 (4U)
#  endif

#  ifndef Cx05_Thumbwheel_stat_ThumbWheelPos5
#   define Cx05_Thumbwheel_stat_ThumbWheelPos5 (5U)
#  endif

#  ifndef Cx06_Thumbwheel_stat_ThumbWheelPos6
#   define Cx06_Thumbwheel_stat_ThumbWheelPos6 (6U)
#  endif

#  ifndef Cx07_Thumbwheel_stat_ThumbWheelPos7
#   define Cx07_Thumbwheel_stat_ThumbWheelPos7 (7U)
#  endif

#  ifndef Cx08_Thumbwheel_stat_ThumbWheelPos8
#   define Cx08_Thumbwheel_stat_ThumbWheelPos8 (8U)
#  endif

#  ifndef Cx09_Thumbwheel_stat_ThumbWheelPos9
#   define Cx09_Thumbwheel_stat_ThumbWheelPos9 (9U)
#  endif

#  ifndef Cx0A_Thumbwheel_stat_ThumbWheelPos10
#   define Cx0A_Thumbwheel_stat_ThumbWheelPos10 (10U)
#  endif

#  ifndef Cx0B_Thumbwheel_stat_ThumbWheelPos11
#   define Cx0B_Thumbwheel_stat_ThumbWheelPos11 (11U)
#  endif

#  ifndef Cx0C_Thumbwheel_stat_ThumbWheelPos12
#   define Cx0C_Thumbwheel_stat_ThumbWheelPos12 (12U)
#  endif

#  ifndef Cx0D_Thumbwheel_stat_ThumbWheelPos13
#   define Cx0D_Thumbwheel_stat_ThumbWheelPos13 (13U)
#  endif

#  ifndef Cx0E_Thumbwheel_stat_ThumbWheelPos14
#   define Cx0E_Thumbwheel_stat_ThumbWheelPos14 (14U)
#  endif

#  ifndef Cx0F_Thumbwheel_stat_ThumbWheelPos15
#   define Cx0F_Thumbwheel_stat_ThumbWheelPos15 (15U)
#  endif

#  ifndef Cx10_Thumbwheel_stat_ThumbWheelPos16
#   define Cx10_Thumbwheel_stat_ThumbWheelPos16 (16U)
#  endif

#  ifndef Cx11_Thumbwheel_stat_Spare
#   define Cx11_Thumbwheel_stat_Spare (17U)
#  endif

#  ifndef Cx12_Thumbwheel_stat_Spare_01
#   define Cx12_Thumbwheel_stat_Spare_01 (18U)
#  endif

#  ifndef Cx13_Thumbwheel_stat_Spare_02
#   define Cx13_Thumbwheel_stat_Spare_02 (19U)
#  endif

#  ifndef Cx14_Thumbwheel_stat_Spare_03
#   define Cx14_Thumbwheel_stat_Spare_03 (20U)
#  endif

#  ifndef Cx15_Thumbwheel_stat_Spare_04
#   define Cx15_Thumbwheel_stat_Spare_04 (21U)
#  endif

#  ifndef Cx16_Thumbwheel_stat_Spare_05
#   define Cx16_Thumbwheel_stat_Spare_05 (22U)
#  endif

#  ifndef Cx17_Thumbwheel_stat_Spare_06
#   define Cx17_Thumbwheel_stat_Spare_06 (23U)
#  endif

#  ifndef Cx18_Thumbwheel_stat_Spare_07
#   define Cx18_Thumbwheel_stat_Spare_07 (24U)
#  endif

#  ifndef Cx19_Thumbwheel_stat_Spare_08
#   define Cx19_Thumbwheel_stat_Spare_08 (25U)
#  endif

#  ifndef Cx1A_Thumbwheel_stat_Spare_09
#   define Cx1A_Thumbwheel_stat_Spare_09 (26U)
#  endif

#  ifndef Cx1B_Thumbwheel_stat_Spare_10
#   define Cx1B_Thumbwheel_stat_Spare_10 (27U)
#  endif

#  ifndef Cx1C_Thumbwheel_stat_Spare_11
#   define Cx1C_Thumbwheel_stat_Spare_11 (28U)
#  endif

#  ifndef Cx1D_Thumbwheel_stat_Spare_12
#   define Cx1D_Thumbwheel_stat_Spare_12 (29U)
#  endif

#  ifndef Cx1E_Thumbwheel_stat_Error
#   define Cx1E_Thumbwheel_stat_Error (30U)
#  endif

#  ifndef Cx1F_Thumbwheel_stat_NotAvaliable
#   define Cx1F_Thumbwheel_stat_NotAvaliable (31U)
#  endif

#  ifndef Cx0_FreeWheel_Status_NoMovement
#   define Cx0_FreeWheel_Status_NoMovement (0U)
#  endif

#  ifndef Cx1_FreeWheel_Status_1StepClockwise
#   define Cx1_FreeWheel_Status_1StepClockwise (1U)
#  endif

#  ifndef Cx2_FreeWheel_Status_2StepsClockwise
#   define Cx2_FreeWheel_Status_2StepsClockwise (2U)
#  endif

#  ifndef Cx3_FreeWheel_Status_3StepsClockwise
#   define Cx3_FreeWheel_Status_3StepsClockwise (3U)
#  endif

#  ifndef Cx4_FreeWheel_Status_4StepsClockwise
#   define Cx4_FreeWheel_Status_4StepsClockwise (4U)
#  endif

#  ifndef Cx5_FreeWheel_Status_5StepsClockwise
#   define Cx5_FreeWheel_Status_5StepsClockwise (5U)
#  endif

#  ifndef Cx6_FreeWheel_Status_6StepsClockwise
#   define Cx6_FreeWheel_Status_6StepsClockwise (6U)
#  endif

#  ifndef Cx7_FreeWheel_Status_1StepCounterClockwise
#   define Cx7_FreeWheel_Status_1StepCounterClockwise (7U)
#  endif

#  ifndef Cx8_FreeWheel_Status_2StepsCounterClockwise
#   define Cx8_FreeWheel_Status_2StepsCounterClockwise (8U)
#  endif

#  ifndef Cx9_FreeWheel_Status_3StepsCounterClockwise
#   define Cx9_FreeWheel_Status_3StepsCounterClockwise (9U)
#  endif

#  ifndef CxA_FreeWheel_Status_4StepsCounterClockwise
#   define CxA_FreeWheel_Status_4StepsCounterClockwise (10U)
#  endif

#  ifndef CxB_FreeWheel_Status_5StepsCounterClockwise
#   define CxB_FreeWheel_Status_5StepsCounterClockwise (11U)
#  endif

#  ifndef CxC_FreeWheel_Status_6StepsCounterClockwise
#   define CxC_FreeWheel_Status_6StepsCounterClockwise (12U)
#  endif

#  ifndef CxD_FreeWheel_Status_Spare
#   define CxD_FreeWheel_Status_Spare (13U)
#  endif

#  ifndef CxE_FreeWheel_Status_Error
#   define CxE_FreeWheel_Status_Error (14U)
#  endif

#  ifndef CxF_FreeWheel_Status_NotAvailable
#   define CxF_FreeWheel_Status_NotAvailable (15U)
#  endif

#  ifndef Cx0_FreeWheel_Status_NoMovement
#   define Cx0_FreeWheel_Status_NoMovement (0U)
#  endif

#  ifndef Cx1_FreeWheel_Status_1StepClockwise
#   define Cx1_FreeWheel_Status_1StepClockwise (1U)
#  endif

#  ifndef Cx2_FreeWheel_Status_2StepsClockwise
#   define Cx2_FreeWheel_Status_2StepsClockwise (2U)
#  endif

#  ifndef Cx3_FreeWheel_Status_3StepsClockwise
#   define Cx3_FreeWheel_Status_3StepsClockwise (3U)
#  endif

#  ifndef Cx4_FreeWheel_Status_4StepsClockwise
#   define Cx4_FreeWheel_Status_4StepsClockwise (4U)
#  endif

#  ifndef Cx5_FreeWheel_Status_5StepsClockwise
#   define Cx5_FreeWheel_Status_5StepsClockwise (5U)
#  endif

#  ifndef Cx6_FreeWheel_Status_6StepsClockwise
#   define Cx6_FreeWheel_Status_6StepsClockwise (6U)
#  endif

#  ifndef Cx7_FreeWheel_Status_1StepCounterClockwise
#   define Cx7_FreeWheel_Status_1StepCounterClockwise (7U)
#  endif

#  ifndef Cx8_FreeWheel_Status_2StepsCounterClockwise
#   define Cx8_FreeWheel_Status_2StepsCounterClockwise (8U)
#  endif

#  ifndef Cx9_FreeWheel_Status_3StepsCounterClockwise
#   define Cx9_FreeWheel_Status_3StepsCounterClockwise (9U)
#  endif

#  ifndef CxA_FreeWheel_Status_4StepsCounterClockwise
#   define CxA_FreeWheel_Status_4StepsCounterClockwise (10U)
#  endif

#  ifndef CxB_FreeWheel_Status_5StepsCounterClockwise
#   define CxB_FreeWheel_Status_5StepsCounterClockwise (11U)
#  endif

#  ifndef CxC_FreeWheel_Status_6StepsCounterClockwise
#   define CxC_FreeWheel_Status_6StepsCounterClockwise (12U)
#  endif

#  ifndef CxD_FreeWheel_Status_Spare
#   define CxD_FreeWheel_Status_Spare (13U)
#  endif

#  ifndef CxE_FreeWheel_Status_Error
#   define CxE_FreeWheel_Status_Error (14U)
#  endif

#  ifndef CxF_FreeWheel_Status_NotAvailable
#   define CxF_FreeWheel_Status_NotAvailable (15U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_FreeWheel_Status_NoMovement
#   define Cx0_FreeWheel_Status_NoMovement (0U)
#  endif

#  ifndef Cx1_FreeWheel_Status_1StepClockwise
#   define Cx1_FreeWheel_Status_1StepClockwise (1U)
#  endif

#  ifndef Cx2_FreeWheel_Status_2StepsClockwise
#   define Cx2_FreeWheel_Status_2StepsClockwise (2U)
#  endif

#  ifndef Cx3_FreeWheel_Status_3StepsClockwise
#   define Cx3_FreeWheel_Status_3StepsClockwise (3U)
#  endif

#  ifndef Cx4_FreeWheel_Status_4StepsClockwise
#   define Cx4_FreeWheel_Status_4StepsClockwise (4U)
#  endif

#  ifndef Cx5_FreeWheel_Status_5StepsClockwise
#   define Cx5_FreeWheel_Status_5StepsClockwise (5U)
#  endif

#  ifndef Cx6_FreeWheel_Status_6StepsClockwise
#   define Cx6_FreeWheel_Status_6StepsClockwise (6U)
#  endif

#  ifndef Cx7_FreeWheel_Status_1StepCounterClockwise
#   define Cx7_FreeWheel_Status_1StepCounterClockwise (7U)
#  endif

#  ifndef Cx8_FreeWheel_Status_2StepsCounterClockwise
#   define Cx8_FreeWheel_Status_2StepsCounterClockwise (8U)
#  endif

#  ifndef Cx9_FreeWheel_Status_3StepsCounterClockwise
#   define Cx9_FreeWheel_Status_3StepsCounterClockwise (9U)
#  endif

#  ifndef CxA_FreeWheel_Status_4StepsCounterClockwise
#   define CxA_FreeWheel_Status_4StepsCounterClockwise (10U)
#  endif

#  ifndef CxB_FreeWheel_Status_5StepsCounterClockwise
#   define CxB_FreeWheel_Status_5StepsCounterClockwise (11U)
#  endif

#  ifndef CxC_FreeWheel_Status_6StepsCounterClockwise
#   define CxC_FreeWheel_Status_6StepsCounterClockwise (12U)
#  endif

#  ifndef CxD_FreeWheel_Status_Spare
#   define CxD_FreeWheel_Status_Spare (13U)
#  endif

#  ifndef CxE_FreeWheel_Status_Error
#   define CxE_FreeWheel_Status_Error (14U)
#  endif

#  ifndef CxF_FreeWheel_Status_NotAvailable
#   define CxF_FreeWheel_Status_NotAvailable (15U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_TCPKnobPostionStatus_Pos0
#   define Cx0_TCPKnobPostionStatus_Pos0 (0U)
#  endif

#  ifndef Cx1_TCPKnobPostionStatus_Pos1
#   define Cx1_TCPKnobPostionStatus_Pos1 (1U)
#  endif

#  ifndef Cx2_TCPKnobPostionStatus_Pos2
#   define Cx2_TCPKnobPostionStatus_Pos2 (2U)
#  endif

#  ifndef Cx3_TCPKnobPostionStatus_Pos3
#   define Cx3_TCPKnobPostionStatus_Pos3 (3U)
#  endif

#  ifndef Cx4_TCPKnobPostionStatus_Pos4
#   define Cx4_TCPKnobPostionStatus_Pos4 (4U)
#  endif

#  ifndef Cx5_TCPKnobPostionStatus_Spare1
#   define Cx5_TCPKnobPostionStatus_Spare1 (5U)
#  endif

#  ifndef Cx6_TCPKnobPostionStatus_Error
#   define Cx6_TCPKnobPostionStatus_Error (6U)
#  endif

#  ifndef Cx7_TCPKnobPostionStatus_NotAvailable
#   define Cx7_TCPKnobPostionStatus_NotAvailable (7U)
#  endif

#  ifndef Cx0_PushButtonStatus_Neutral
#   define Cx0_PushButtonStatus_Neutral (0U)
#  endif

#  ifndef Cx1_PushButtonStatus_Pushed
#   define Cx1_PushButtonStatus_Pushed (1U)
#  endif

#  ifndef Cx2_PushButtonStatus_Error
#   define Cx2_PushButtonStatus_Error (2U)
#  endif

#  ifndef Cx3_PushButtonStatus_NotAvailable
#   define Cx3_PushButtonStatus_NotAvailable (3U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

#  ifndef Cx0_EvalButtonRequest_Neutral
#   define Cx0_EvalButtonRequest_Neutral (0U)
#  endif

#  ifndef Cx1_EvalButtonRequest_EvaluatingPush
#   define Cx1_EvalButtonRequest_EvaluatingPush (1U)
#  endif

#  ifndef Cx2_EvalButtonRequest_ContinuouslyPushed
#   define Cx2_EvalButtonRequest_ContinuouslyPushed (2U)
#  endif

#  ifndef Cx3_EvalButtonRequest_ShortPush
#   define Cx3_EvalButtonRequest_ShortPush (3U)
#  endif

#  ifndef Cx4_EvalButtonRequest_Spare1
#   define Cx4_EvalButtonRequest_Spare1 (4U)
#  endif

#  ifndef Cx5_EvalButtonRequest_Spare2
#   define Cx5_EvalButtonRequest_Spare2 (5U)
#  endif

#  ifndef Cx6_EvalButtonRequest_Error
#   define Cx6_EvalButtonRequest_Error (6U)
#  endif

#  ifndef Cx7_EvalButtonRequest_NotAvailable
#   define Cx7_EvalButtonRequest_NotAvailable (7U)
#  endif

#  ifndef Cx0_EvalButtonRequest_Neutral
#   define Cx0_EvalButtonRequest_Neutral (0U)
#  endif

#  ifndef Cx1_EvalButtonRequest_EvaluatingPush
#   define Cx1_EvalButtonRequest_EvaluatingPush (1U)
#  endif

#  ifndef Cx2_EvalButtonRequest_ContinuouslyPushed
#   define Cx2_EvalButtonRequest_ContinuouslyPushed (2U)
#  endif

#  ifndef Cx3_EvalButtonRequest_ShortPush
#   define Cx3_EvalButtonRequest_ShortPush (3U)
#  endif

#  ifndef Cx4_EvalButtonRequest_Spare1
#   define Cx4_EvalButtonRequest_Spare1 (4U)
#  endif

#  ifndef Cx5_EvalButtonRequest_Spare2
#   define Cx5_EvalButtonRequest_Spare2 (5U)
#  endif

#  ifndef Cx6_EvalButtonRequest_Error
#   define Cx6_EvalButtonRequest_Error (6U)
#  endif

#  ifndef Cx7_EvalButtonRequest_NotAvailable
#   define Cx7_EvalButtonRequest_NotAvailable (7U)
#  endif

#  ifndef Cx0_DeviceIndication_Off
#   define Cx0_DeviceIndication_Off (0U)
#  endif

#  ifndef Cx1_DeviceIndication_On
#   define Cx1_DeviceIndication_On (1U)
#  endif

#  ifndef Cx2_DeviceIndication_Blink
#   define Cx2_DeviceIndication_Blink (2U)
#  endif

#  ifndef Cx3_DeviceIndication_SpareValue
#   define Cx3_DeviceIndication_SpareValue (3U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_TESTLIN_TYPE_H */
