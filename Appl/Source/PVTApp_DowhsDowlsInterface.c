/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PVTApp_DowhsDowlsInterface.c
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim_181121_BB2_Pvt_0_7_DetDisable_00/SCIM_BP.dpa
 *     SW-C Type:  PVTApp_DowhsDowlsInterface
 *  Generated at:  Fri Nov 23 09:22:58 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <PVTApp_DowhsDowlsInterface>
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
 * IOHWAB_SINT8
 *   sint8 represents integers with a minimum value of -128 and a maximum value of 127.
 *      The order-relation on sint8 is: x < y if y - x is positive.
 *      sint8 has a lexical representation consisting of an optional sign followed 
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is 
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, 12678, +10000.
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

#include "Rte_PVTApp_DowhsDowlsInterface.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


 Debug_PVT_SCIM_Ctrl_WHS1_1      RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS1_1;    
 Debug_PVT_SCIM_Ctrl_WHS1_Duty_1 RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS1_Duty_1;
 Debug_PVT_SCIM_Ctrl_WHS1_Freq_1 RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS1_Freq_1;
 
 Debug_PVT_SCIM_Ctrl_WHS2_1      RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS2_1;
 Debug_PVT_SCIM_Ctrl_WHS2_Duty_1 RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS2_Duty_1;
 Debug_PVT_SCIM_Ctrl_WHS2_Freq_1 RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS2_Freq_1;


 Debug_PVT_SCIM_Ctrl_WLS1_1      RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS1_1;
 Debug_PVT_SCIM_Ctrl_WLS1_Duty_1 RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS1_Duty_1;
 Debug_PVT_SCIM_Ctrl_WLS1_Freq_1 RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS1_Freq_1;
 
 Debug_PVT_SCIM_Ctrl_WLS2_1     RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS2_1;
 Debug_PVT_SCIM_Ctrl_WLS2Duty_1 RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS2_Duty_1;
 Debug_PVT_SCIM_Ctrl_WLS2Freq_1 RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS2_Freq_1;
 
 Debug_PVT_SCIM_Ctrl_WLS3_1     RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS3_1;
 Debug_PVT_SCIM_Ctrl_WLS3Duty_1 RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS3_Duty_1;
 Debug_PVT_SCIM_Ctrl_WLS3Freq_1 RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS3_Freq_1;
 

 IOHWAB_BOOL RE_TEST_DOWHS_IsDoActivated_1;
 IOHWAB_UINT16 RE_TEST_DOWHS_DoPinVoltage_1;
 IOHWAB_UINT16 RE_TEST_DOWHS_BatteryVoltage_1;
 IOHWAB_UINT8 RE_TEST_DOWHS_DutyCycle_1;
 IOHWAB_UINT16 RE_TEST_DOWHS_Period_1;
 VGTT_EcuPinDiagStatus RE_TEST_DOWHS_DiagStatus_1;
 
 IOHWAB_BOOL RE_TEST_DOWHS_IsDoActivated_2;
 IOHWAB_UINT16 RE_TEST_DOWHS_DoPinVoltage_2;
 IOHWAB_UINT16 RE_TEST_DOWHS_BatteryVoltage_2;
 IOHWAB_UINT8 RE_TEST_DOWHS_DutyCycle_2; 
 IOHWAB_UINT16 RE_TEST_DOWHS_Period_2;
 VGTT_EcuPinDiagStatus RE_TEST_DOWHS_DiagStatus_2;

 IOHWAB_BOOL RE_TEST_DOWLS_IsDoActivated_1;
 IOHWAB_UINT16 RE_TEST_DOWLS_DoPinVoltage_1;
 IOHWAB_UINT16 RE_TEST_DOWLS_BatteryVoltage_1;
 IOHWAB_UINT8 RE_TEST_DOWLS_DutyCycle_1;
 IOHWAB_UINT16 RE_TEST_DOWLS_Period_1;
 VGTT_EcuPinDiagStatus RE_TEST_DOWLS_DiagStatus_1;

 IOHWAB_BOOL RE_TEST_DOWLS_IsDoActivated_2;
 IOHWAB_UINT16 RE_TEST_DOWLS_DoPinVoltage_2;
 IOHWAB_UINT16 RE_TEST_DOWLS_BatteryVoltage_2;
 IOHWAB_UINT8 RE_TEST_DOWLS_DutyCycle_2;
 IOHWAB_UINT16 RE_TEST_DOWLS_Period_2;
 VGTT_EcuPinDiagStatus RE_TEST_DOWLS_DiagStatus_2;

 IOHWAB_BOOL RE_TEST_DOWLS_IsDoActivated_3;
 IOHWAB_UINT16 RE_TEST_DOWLS_DoPinVoltage_3;
 IOHWAB_UINT16 RE_TEST_DOWLS_BatteryVoltage_3;
 IOHWAB_UINT8 RE_TEST_DOWLS_DutyCycle_3;
 IOHWAB_UINT16 RE_TEST_DOWLS_Period_3;
 VGTT_EcuPinDiagStatus RE_TEST_DOWLS_DiagStatus_3;
 
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
 * IOHWAB_BOOL: Boolean
 * IOHWAB_SINT8: Integer in interval [-128...127]
 * IOHWAB_UINT16: Integer in interval [0...65535]
 * IOHWAB_UINT8: Integer in interval [0...255]
 * VGTT_EcuPinDiagStatus: Integer in interval [0...255]
 * boolean: Boolean (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Debug_PVT_SCIM_RD_WHS1_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Nomal (0U)
 *   Cx1_Short_To_Ground (1U)
 *   Cx2_Short_To_Battery (2U)
 *   Cx3_Open_Circuit (3U)
 *   Cx4_Reserved (4U)
 *   Cx5_Reserved (5U)
 *   Cx6_Voltage_Too_Low (6U)
 *   Cx7_Voltage_Too_High (7U)
 *   Cx8_Invalid_Error_Value_ (8U)
 * Debug_PVT_SCIM_RD_WHS2_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Nomal (0U)
 *   Cx1_Short_To_Ground (1U)
 *   Cx2_Short_To_Battery (2U)
 *   Cx3_Open_Circuit (3U)
 *   Cx4_Reserved (4U)
 *   Cx5_Reserved (5U)
 *   Cx6_Voltage_Too_Low (6U)
 *   Cx7_Voltage_Too_High (7U)
 *   Cx8_Invalid_Error_Value_ (8U)
 * Debug_PVT_SCIM_RD_WLS1_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Nomal (0U)
 *   Cx1_Short_To_Ground (1U)
 *   Cx2_Short_To_Battery (2U)
 *   Cx3_Open_Circuit (3U)
 *   Cx4_Reserved (4U)
 *   Cx5_Reserved (5U)
 *   Cx6_Voltage_Too_Low (6U)
 *   Cx7_Voltage_Too_High (7U)
 *   Cx8_Invalid_Error_Value_ (8U)
 * Debug_PVT_SCIM_RD_WLS2_Fault_1: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Nomal (0U)
 *   Cx1_Short_To_Ground (1U)
 *   Cx2_Short_To_Battery (2U)
 *   Cx3_Open_Circuit (3U)
 *   Cx4_Reserved (4U)
 *   Cx5_Reserved (5U)
 *   Cx6_Voltage_Too_Low (6U)
 *   Cx7_Voltage_Too_High (7U)
 *   Cx8_Invalid_Error_Value_ (8U)
 * Debug_PVT_SCIM_RD_WLS3_Fault_1: Enumeration of integer in interval [0...15] with enumerators
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


#define PVTApp_DowhsDowlsInterface_START_SEC_CODE
#include "PVTApp_DowhsDowlsInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_PvtDowhsDowlsInterface
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
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Debug_PVT_SCIM_Ctrl_WHS1(Debug_PVT_SCIM_Ctrl_WHS1_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Duty_Debug_PVT_SCIM_Ctrl_WHS1_Duty(Debug_PVT_SCIM_Ctrl_WHS1_Duty_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Freq_Debug_PVT_SCIM_Ctrl_WHS1_Freq(Debug_PVT_SCIM_Ctrl_WHS1_Freq_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Debug_PVT_SCIM_Ctrl_WHS2(Debug_PVT_SCIM_Ctrl_WHS2_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Duty_Debug_PVT_SCIM_Ctrl_WHS2_Duty(Debug_PVT_SCIM_Ctrl_WHS2_Duty_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Freq_Debug_PVT_SCIM_Ctrl_WHS2_Freq(Debug_PVT_SCIM_Ctrl_WHS2_Freq_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Debug_PVT_SCIM_Ctrl_WLS1(Debug_PVT_SCIM_Ctrl_WLS1_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Duty_Debug_PVT_SCIM_Ctrl_WLS1_Duty(Debug_PVT_SCIM_Ctrl_WLS1_Duty_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Freq_Debug_PVT_SCIM_Ctrl_WLS1_Freq(Debug_PVT_SCIM_Ctrl_WLS1_Freq_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2_Debug_PVT_SCIM_Ctrl_WLS2(Debug_PVT_SCIM_Ctrl_WLS2_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2Duty_Debug_PVT_SCIM_Ctrl_WLS2Duty(Debug_PVT_SCIM_Ctrl_WLS2Duty_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2Freq_Debug_PVT_SCIM_Ctrl_WLS2Freq(Debug_PVT_SCIM_Ctrl_WLS2Freq_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3_Debug_PVT_SCIM_Ctrl_WLS3(Debug_PVT_SCIM_Ctrl_WLS3_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3Duty_Debug_PVT_SCIM_Ctrl_WLS3Duty(Debug_PVT_SCIM_Ctrl_WLS3Duty_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3Freq_Debug_PVT_SCIM_Ctrl_WLS3Freq(Debug_PVT_SCIM_Ctrl_WLS3Freq_1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty(Debug_PVT_SCIM_RD_WHS1_Duty_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault(Debug_PVT_SCIM_RD_WHS1_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq(Debug_PVT_SCIM_RD_WHS1_Freq_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt(Debug_PVT_SCIM_RD_WHS1_Volt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty(Debug_PVT_SCIM_RD_WHS2_Duty_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault(Debug_PVT_SCIM_RD_WHS2_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq(Debug_PVT_SCIM_RD_WHS2_Freq_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt(Debug_PVT_SCIM_RD_WHS2_Volt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty(Debug_PVT_SCIM_RD_WLS1_Duty_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault(Debug_PVT_SCIM_RD_WLS1_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq(Debug_PVT_SCIM_RD_WLS1_Freq_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt(Debug_PVT_SCIM_RD_WLS1_Volt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty(Debug_PVT_SCIM_RD_WLS2_Duty_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault(Debug_PVT_SCIM_RD_WLS2_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq(Debug_PVT_SCIM_RD_WLS2_Freq_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt(Debug_PVT_SCIM_RD_WLS2_Volt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty(Debug_PVT_SCIM_RD_WLS3_Duty_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault(Debug_PVT_SCIM_RD_WLS3_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq(Debug_PVT_SCIM_RD_WLS3_Freq_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt(Debug_PVT_SCIM_RD_WLS3_Volt_1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DowhsInterfaces_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_UINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowhsInterfaces_P_1_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_UINT8 DutyCycle)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowhsInterfaces_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_UINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowhsInterfaces_P_2_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_UINT8 DutyCycle)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowlsInterface_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_UINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowlsInterface_P_1_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowlsInterface_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_UINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowlsInterface_P_2_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowlsInterface_P_3_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_UINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowlsInterface_P_3_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_PvtDowhsDowlsInterface_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PVTApp_DowhsDowlsInterface_CODE) Re_PvtDowhsDowlsInterface(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_PvtDowhsDowlsInterface
 *********************************************************************************************************************/

Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Debug_PVT_SCIM_Ctrl_WHS1(&RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS1_1);
Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Duty_Debug_PVT_SCIM_Ctrl_WHS1_Duty(&RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS1_Duty_1); 
Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Freq_Debug_PVT_SCIM_Ctrl_WHS1_Freq(&RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS1_Freq_1); 

Rte_Call_DowhsInterfaces_P_1_SetDowActive(RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS1_1, RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS1_Freq_1, RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS1_Duty_1); 

Rte_Call_DowhsInterfaces_P_1_GetDoPinStateOne(/*(RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS1_1*/1, &RE_TEST_DOWHS_IsDoActivated_1,&RE_TEST_DOWHS_DoPinVoltage_1, &RE_TEST_DOWHS_BatteryVoltage_1, &RE_TEST_DOWHS_DutyCycle_1, &RE_TEST_DOWHS_Period_1, &RE_TEST_DOWHS_DiagStatus_1);
 
Rte_Write_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty(RE_TEST_DOWHS_DutyCycle_1); 
Rte_Write_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault(RE_TEST_DOWHS_DiagStatus_1); 
Rte_Write_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq(RE_TEST_DOWHS_Period_1); 
Rte_Write_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt(RE_TEST_DOWHS_BatteryVoltage_1);


Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Debug_PVT_SCIM_Ctrl_WHS2(&RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS2_1); 
Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Duty_Debug_PVT_SCIM_Ctrl_WHS2_Duty(&RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS2_Duty_1); 
Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Freq_Debug_PVT_SCIM_Ctrl_WHS2_Freq(&RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS2_Freq_1);

Rte_Call_DowhsInterfaces_P_2_SetDowActive(RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS2_1, RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS2_Freq_1, RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS2_Duty_1); 

Rte_Call_DowhsInterfaces_P_2_GetDoPinStateOne(/*RE_TEST_DOWHS_Debug_PVT_SCIM_Ctrl_WHS2_1*/1, &RE_TEST_DOWHS_IsDoActivated_2,&RE_TEST_DOWHS_DoPinVoltage_2, &RE_TEST_DOWHS_BatteryVoltage_2, &RE_TEST_DOWHS_DutyCycle_2, &RE_TEST_DOWHS_Period_2, &RE_TEST_DOWHS_DiagStatus_2);

Rte_Write_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty(RE_TEST_DOWHS_DutyCycle_2); 
Rte_Write_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault(RE_TEST_DOWHS_DiagStatus_2); 
Rte_Write_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq(RE_TEST_DOWHS_Period_2); 
Rte_Write_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt(RE_TEST_DOWHS_BatteryVoltage_2);


Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Debug_PVT_SCIM_Ctrl_WLS1(&RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS1_1); 
Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Duty_Debug_PVT_SCIM_Ctrl_WLS1_Duty(&RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS1_Duty_1); 
Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Freq_Debug_PVT_SCIM_Ctrl_WLS1_Freq(&RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS1_Freq_1); 

Rte_Call_DowlsInterface_P_1_SetDowlsActive(RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS1_1, RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS1_Freq_1, RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS1_Duty_1);

Rte_Call_DowlsInterface_P_1_GetDoPinStateOne(/*RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS1_1*/1, &RE_TEST_DOWLS_IsDoActivated_1, &RE_TEST_DOWLS_DoPinVoltage_1, &RE_TEST_DOWLS_BatteryVoltage_1, &RE_TEST_DOWLS_DutyCycle_1, &RE_TEST_DOWLS_Period_1, &RE_TEST_DOWLS_DiagStatus_1);

Rte_Write_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty(RE_TEST_DOWLS_DutyCycle_1);
Rte_Write_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault(RE_TEST_DOWLS_DiagStatus_1);
Rte_Write_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq(RE_TEST_DOWLS_Period_1);
Rte_Write_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt(RE_TEST_DOWLS_BatteryVoltage_1);


Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2_Debug_PVT_SCIM_Ctrl_WLS2(&RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS2_1); 
Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2Duty_Debug_PVT_SCIM_Ctrl_WLS2Duty(&RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS2_Duty_1);
Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2Freq_Debug_PVT_SCIM_Ctrl_WLS2Freq(&RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS2_Freq_1);

Rte_Call_DowlsInterface_P_2_SetDowlsActive(RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS2_1, RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS2_Freq_1, RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS2_Duty_1);

Rte_Call_DowlsInterface_P_2_GetDoPinStateOne(/*RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS2_1*/1, &RE_TEST_DOWLS_IsDoActivated_2, &RE_TEST_DOWLS_DoPinVoltage_2, &RE_TEST_DOWLS_BatteryVoltage_2, &RE_TEST_DOWLS_DutyCycle_2, &RE_TEST_DOWLS_Period_2, &RE_TEST_DOWLS_DiagStatus_2);

Rte_Write_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty(RE_TEST_DOWLS_DutyCycle_2);
Rte_Write_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault(RE_TEST_DOWLS_DiagStatus_2);
Rte_Write_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq(RE_TEST_DOWLS_Period_2);
Rte_Write_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt(RE_TEST_DOWLS_BatteryVoltage_2);


Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3_Debug_PVT_SCIM_Ctrl_WLS3(&RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS3_1); 
Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3Duty_Debug_PVT_SCIM_Ctrl_WLS3Duty(&RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS3_Duty_1); 
Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3Freq_Debug_PVT_SCIM_Ctrl_WLS3Freq(&RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS3_Freq_1); 

Rte_Call_DowlsInterface_P_3_SetDowlsActive(RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS3_1, RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS3_Freq_1, RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS3_Duty_1);

Rte_Call_DowlsInterface_P_3_GetDoPinStateOne(/*RE_TEST_DOWLS_Debug_PVT_SCIM_Ctrl_WLS3_1*/1, &RE_TEST_DOWLS_IsDoActivated_3, &RE_TEST_DOWLS_DoPinVoltage_3, &RE_TEST_DOWLS_BatteryVoltage_3, &RE_TEST_DOWLS_DutyCycle_3, &RE_TEST_DOWLS_Period_3, &RE_TEST_DOWLS_DiagStatus_3);

Rte_Write_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty(RE_TEST_DOWLS_DutyCycle_3);
Rte_Write_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault(RE_TEST_DOWLS_DiagStatus_3);
Rte_Write_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq(RE_TEST_DOWLS_Period_3);
Rte_Write_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt(RE_TEST_DOWLS_BatteryVoltage_3);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define PVTApp_DowhsDowlsInterface_STOP_SEC_CODE
#include "PVTApp_DowhsDowlsInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
