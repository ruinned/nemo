/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PVTApp_DobhsCtrlInterface.c
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim_181121_BB2_Pvt_0_7_DetDisable_00/SCIM_BP.dpa
 *     SW-C Type:  PVTApp_DobhsCtrlInterface
 *  Generated at:  Fri Nov 23 09:22:55 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <PVTApp_DobhsCtrlInterface>
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
 * IOHWAB_BOOL
 *   boolean has the value space required to support the mathematical concept of 
 *      binary-valued logic: {true, false}.
 *
 * IOHWAB_UINT16
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * IOHWAB_UINT8
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * VGTT_EcuPinDiagStatus
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_PVTApp_DobhsCtrlInterface.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
#include "MemMap.h"
 
 
 IOHWAB_BOOL RE_DOBHSCTRL_TEST_P1_IsDoActivated; 
 IOHWAB_UINT16 RE_DOBHSCTRL_TEST_P1_DoPinVoltage;
 IOHWAB_UINT16 RE_DOBHSCTRL_TEST_P1_BatteryVoltage;
 VGTT_EcuPinDiagStatus RE_DOBHSCTRL_TEST_P1_DiagStatus;


 IOHWAB_BOOL RE_DOBHSCTRL_TEST_P2_IsDoActivated; 
 IOHWAB_UINT16 RE_DOBHSCTRL_TEST_P2_DoPinVoltage;
 IOHWAB_UINT16 RE_DOBHSCTRL_TEST_P2_BatteryVoltage;
 VGTT_EcuPinDiagStatus RE_DOBHSCTRL_TEST_P2_DiagStatus;



 IOHWAB_BOOL RE_DOBHSCTRL_TEST_P3_IsDoActivated; 
 IOHWAB_UINT16 RE_DOBHSCTRL_TEST_P3_DoPinVoltage;
 IOHWAB_UINT16 RE_DOBHSCTRL_TEST_P3_BatteryVoltage;
 VGTT_EcuPinDiagStatus RE_DOBHSCTRL_TEST_P3_DiagStatus;


 IOHWAB_BOOL RE_DOBHSCTRL_TEST_P4_IsDoActivated; 
 IOHWAB_UINT16 RE_DOBHSCTRL_TEST_P4_DoPinVoltage;
 IOHWAB_UINT16 RE_DOBHSCTRL_TEST_P4_BatteryVoltage;
 VGTT_EcuPinDiagStatus RE_DOBHSCTRL_TEST_P4_DiagStatus; 
 
 
 
#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
#include "MemMap.h"

 
 
 

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
 * Debug_PVT_SCIM_Ctrl_BHS1_1: Boolean
 * Debug_PVT_SCIM_Ctrl_BHS2_1: Boolean
 * Debug_PVT_SCIM_Ctrl_BHS3_1: Boolean
 * Debug_PVT_SCIM_Ctrl_BHS4_1: Boolean
 * Debug_PVT_SCIM_RD_BHS1_Volt_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_BHS2_Volt_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_BHS3_Volt_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_BHS4_Volt_1: Integer in interval [0...65535]
 * IOHWAB_BOOL: Boolean
 * IOHWAB_UINT16: Integer in interval [0...65535]
 * IOHWAB_UINT8: Integer in interval [0...255]
 * VGTT_EcuPinDiagStatus: Integer in interval [0...255]
 * boolean: Boolean (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Debug_PVT_SCIM_RD_BHS1_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Nomal (0U)
 *   Cx1_Short_To_Ground (1U)
 *   Cx2_Short_To_Battery (2U)
 *   Cx3_Open_Circuit (3U)
 *   Cx4_Reserved (4U)
 *   Cx5_Reserved (5U)
 *   Cx6_Voltage_Too_Low (6U)
 *   Cx7_Voltage_Too_High (7U)
 *   Cx8_Invalid_Error_Value_ (8U)
 * Debug_PVT_SCIM_RD_BHS2_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Nomal (0U)
 *   Cx1_Short_To_Ground (1U)
 *   Cx2_Short_To_Battery (2U)
 *   Cx3_Open_Circuit (3U)
 *   Cx4_Reserved (4U)
 *   Cx5_Reserved (5U)
 *   Cx6_Voltage_Too_Low (6U)
 *   Cx7_Voltage_Too_High (7U)
 *   Cx8_Invalid_Error_Value_ (8U)
 * Debug_PVT_SCIM_RD_BHS3_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Nomal (0U)
 *   Cx1_Short_To_Ground (1U)
 *   Cx2_Short_To_Battery (2U)
 *   Cx3_Open_Circuit (3U)
 *   Cx4_Reserved (4U)
 *   Cx5_Reserved (5U)
 *   Cx6_Voltage_Too_Low (6U)
 *   Cx7_Voltage_Too_High (7U)
 *   Cx8_Invalid_Error_Value_ (8U)
 * Debug_PVT_SCIM_RD_BHS4_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Nomal (0U)
 *   Cx1_Short_To_Ground (1U)
 *   Cx2_Short_To_Battery (2U)
 *   Cx3_Open_Circuit (3U)
 *   Cx4_Reserved (4U)
 *   Cx5_Reserved (5U)
 *   Cx6_Voltage_Too_Low (6U)
 *   Cx7_Voltage_Too_High (7U)
 *   Cx8_Invalid_Error_Value_ (8U)
 *
 *********************************************************************************************************************/


#define PVTApp_DobhsCtrlInterface_START_SEC_CODE
#include "PVTApp_DobhsCtrlInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_PvtDobhsInterface
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
 *   Debug_PVT_SCIM_Ctrl_BHS1_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS1_1_Debug_PVT_SCIM_Ctrl_BHS1(void)
 *   Debug_PVT_SCIM_Ctrl_BHS2_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS2_1_Debug_PVT_SCIM_Ctrl_BHS2(void)
 *   Debug_PVT_SCIM_Ctrl_BHS3_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS3_1_Debug_PVT_SCIM_Ctrl_BHS3(void)
 *   Debug_PVT_SCIM_Ctrl_BHS4_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS4_1_Debug_PVT_SCIM_Ctrl_BHS4(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault(Debug_PVT_SCIM_RD_BHS1_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt(Debug_PVT_SCIM_RD_BHS1_Volt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault(Debug_PVT_SCIM_RD_BHS2_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt(Debug_PVT_SCIM_RD_BHS2_Volt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault(Debug_PVT_SCIM_RD_BHS3_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt(Debug_PVT_SCIM_RD_BHS3_Volt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault(Debug_PVT_SCIM_RD_BHS4_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt(Debug_PVT_SCIM_RD_BHS4_Volt_1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_1_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_1_SetDobhsActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_2_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_2_SetDobhsActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_3_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_3_SetDobhsActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_4_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_4_SetDobhsActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_PvtDobhsInterface_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PVTApp_DobhsCtrlInterface_CODE) Re_PvtDobhsInterface(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_PvtDobhsInterface
 *********************************************************************************************************************/


Rte_Call_DobhsCtrlInterface_P_1_SetDobhsActive((IOHWAB_BOOL) Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS1_1_Debug_PVT_SCIM_Ctrl_BHS1());
Rte_Call_DobhsCtrlInterface_P_2_SetDobhsActive((IOHWAB_BOOL) Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS2_1_Debug_PVT_SCIM_Ctrl_BHS2());
Rte_Call_DobhsCtrlInterface_P_3_SetDobhsActive((IOHWAB_BOOL) Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS3_1_Debug_PVT_SCIM_Ctrl_BHS3());
Rte_Call_DobhsCtrlInterface_P_4_SetDobhsActive((IOHWAB_BOOL) Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS4_1_Debug_PVT_SCIM_Ctrl_BHS4());


Rte_Call_DobhsCtrlInterface_P_1_GetDobhsPinState(&RE_DOBHSCTRL_TEST_P1_IsDoActivated, &RE_DOBHSCTRL_TEST_P1_DoPinVoltage, &RE_DOBHSCTRL_TEST_P1_BatteryVoltage, &RE_DOBHSCTRL_TEST_P1_DiagStatus);

Rte_Write_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault(RE_DOBHSCTRL_TEST_P1_DiagStatus);
Rte_Write_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt(RE_DOBHSCTRL_TEST_P1_DoPinVoltage);




Rte_Call_DobhsCtrlInterface_P_2_GetDobhsPinState(&RE_DOBHSCTRL_TEST_P2_IsDoActivated, &RE_DOBHSCTRL_TEST_P2_DoPinVoltage, &RE_DOBHSCTRL_TEST_P2_BatteryVoltage, &RE_DOBHSCTRL_TEST_P2_DiagStatus);

Rte_Write_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault(RE_DOBHSCTRL_TEST_P2_DiagStatus);
Rte_Write_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt(RE_DOBHSCTRL_TEST_P2_DoPinVoltage);





Rte_Call_DobhsCtrlInterface_P_3_GetDobhsPinState(&RE_DOBHSCTRL_TEST_P3_IsDoActivated, &RE_DOBHSCTRL_TEST_P3_DoPinVoltage, &RE_DOBHSCTRL_TEST_P3_BatteryVoltage, &RE_DOBHSCTRL_TEST_P3_DiagStatus);

Rte_Write_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault(RE_DOBHSCTRL_TEST_P3_DiagStatus);
Rte_Write_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt(RE_DOBHSCTRL_TEST_P3_DoPinVoltage);







Rte_Call_DobhsCtrlInterface_P_4_GetDobhsPinState(&RE_DOBHSCTRL_TEST_P4_IsDoActivated, &RE_DOBHSCTRL_TEST_P4_DoPinVoltage, &RE_DOBHSCTRL_TEST_P4_BatteryVoltage, &RE_DOBHSCTRL_TEST_P4_DiagStatus);


Rte_Write_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault(RE_DOBHSCTRL_TEST_P4_DiagStatus);
Rte_Write_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt(RE_DOBHSCTRL_TEST_P4_DoPinVoltage);



/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define PVTApp_DobhsCtrlInterface_STOP_SEC_CODE
#include "PVTApp_DobhsCtrlInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
