/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PVTApp_DowhsDowlsInterface.c
 *        Config:  SCIM_BP.dpa
 *     SW-C Type:  PVTApp_DowhsDowlsInterface
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
 * IOHWAB_BOOL
 *   
 *
 * IOHWAB_SINT8
 *   
 *
 * IOHWAB_UINT16
 *   
 *
 * IOHWAB_UINT8
 *   
 *
 * VGTT_EcuPinDiagStatus
 *   
 *
 *********************************************************************************************************************/

#include "Rte_PVTApp_DowhsDowlsInterface.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_PVTApp_DowhsDowlsInterface.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void PVTApp_DowhsDowlsInterface_TestDefines(void);


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

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  Debug_PVT_SCIM_Ctrl_WHS1_1 Read_Debug_PVT_SCIM_Ctrl_WHS1_Debug_PVT_SCIM_Ctrl_WHS1;
  Debug_PVT_SCIM_Ctrl_WHS1_Duty_1 Read_Debug_PVT_SCIM_Ctrl_WHS1_Duty_Debug_PVT_SCIM_Ctrl_WHS1_Duty;
  Debug_PVT_SCIM_Ctrl_WHS1_Freq_1 Read_Debug_PVT_SCIM_Ctrl_WHS1_Freq_Debug_PVT_SCIM_Ctrl_WHS1_Freq;
  Debug_PVT_SCIM_Ctrl_WHS2_1 Read_Debug_PVT_SCIM_Ctrl_WHS2_Debug_PVT_SCIM_Ctrl_WHS2;
  Debug_PVT_SCIM_Ctrl_WHS2_Duty_1 Read_Debug_PVT_SCIM_Ctrl_WHS2_Duty_Debug_PVT_SCIM_Ctrl_WHS2_Duty;
  Debug_PVT_SCIM_Ctrl_WHS2_Freq_1 Read_Debug_PVT_SCIM_Ctrl_WHS2_Freq_Debug_PVT_SCIM_Ctrl_WHS2_Freq;
  Debug_PVT_SCIM_Ctrl_WLS1_1 Read_Debug_PVT_SCIM_Ctrl_WLS1_Debug_PVT_SCIM_Ctrl_WLS1;
  Debug_PVT_SCIM_Ctrl_WLS1_Duty_1 Read_Debug_PVT_SCIM_Ctrl_WLS1_Duty_Debug_PVT_SCIM_Ctrl_WLS1_Duty;
  Debug_PVT_SCIM_Ctrl_WLS1_Freq_1 Read_Debug_PVT_SCIM_Ctrl_WLS1_Freq_Debug_PVT_SCIM_Ctrl_WLS1_Freq;
  Debug_PVT_SCIM_Ctrl_WLS2_1 Read_Debug_PVT_SCIM_Ctrl_WLS2_Debug_PVT_SCIM_Ctrl_WLS2;
  Debug_PVT_SCIM_Ctrl_WLS2Duty_1 Read_Debug_PVT_SCIM_Ctrl_WLS2Duty_Debug_PVT_SCIM_Ctrl_WLS2Duty;
  Debug_PVT_SCIM_Ctrl_WLS2Freq_1 Read_Debug_PVT_SCIM_Ctrl_WLS2Freq_Debug_PVT_SCIM_Ctrl_WLS2Freq;
  Debug_PVT_SCIM_Ctrl_WLS3_1 Read_Debug_PVT_SCIM_Ctrl_WLS3_Debug_PVT_SCIM_Ctrl_WLS3;
  Debug_PVT_SCIM_Ctrl_WLS3Duty_1 Read_Debug_PVT_SCIM_Ctrl_WLS3Duty_Debug_PVT_SCIM_Ctrl_WLS3Duty;
  Debug_PVT_SCIM_Ctrl_WLS3Freq_1 Read_Debug_PVT_SCIM_Ctrl_WLS3Freq_Debug_PVT_SCIM_Ctrl_WLS3Freq;

  IOHWAB_BOOL Call_DowhsInterfaces_P_1_GetDoPinStateOne_IsDoActivated = FALSE;
  IOHWAB_UINT16 Call_DowhsInterfaces_P_1_GetDoPinStateOne_DoPinVoltage = 0U;
  IOHWAB_UINT16 Call_DowhsInterfaces_P_1_GetDoPinStateOne_BatteryVoltage = 0U;
  IOHWAB_UINT8 Call_DowhsInterfaces_P_1_GetDoPinStateOne_DutyCycle = 0U;
  IOHWAB_UINT16 Call_DowhsInterfaces_P_1_GetDoPinStateOne_Period = 0U;
  VGTT_EcuPinDiagStatus Call_DowhsInterfaces_P_1_GetDoPinStateOne_DiagStatus = 0U;
  IOHWAB_BOOL Call_DowhsInterfaces_P_2_GetDoPinStateOne_IsDoActivated = FALSE;
  IOHWAB_UINT16 Call_DowhsInterfaces_P_2_GetDoPinStateOne_DoPinVoltage = 0U;
  IOHWAB_UINT16 Call_DowhsInterfaces_P_2_GetDoPinStateOne_BatteryVoltage = 0U;
  IOHWAB_UINT8 Call_DowhsInterfaces_P_2_GetDoPinStateOne_DutyCycle = 0U;
  IOHWAB_UINT16 Call_DowhsInterfaces_P_2_GetDoPinStateOne_Period = 0U;
  VGTT_EcuPinDiagStatus Call_DowhsInterfaces_P_2_GetDoPinStateOne_DiagStatus = 0U;
  IOHWAB_BOOL Call_DowlsInterface_P_1_GetDoPinStateOne_IsDoActivated = FALSE;
  IOHWAB_UINT16 Call_DowlsInterface_P_1_GetDoPinStateOne_DoPinVoltage = 0U;
  IOHWAB_UINT16 Call_DowlsInterface_P_1_GetDoPinStateOne_BatteryVoltage = 0U;
  IOHWAB_UINT8 Call_DowlsInterface_P_1_GetDoPinStateOne_DutyCycle = 0U;
  IOHWAB_UINT16 Call_DowlsInterface_P_1_GetDoPinStateOne_Period = 0U;
  VGTT_EcuPinDiagStatus Call_DowlsInterface_P_1_GetDoPinStateOne_DiagStatus = 0U;
  IOHWAB_BOOL Call_DowlsInterface_P_2_GetDoPinStateOne_IsDoActivated = FALSE;
  IOHWAB_UINT16 Call_DowlsInterface_P_2_GetDoPinStateOne_DoPinVoltage = 0U;
  IOHWAB_UINT16 Call_DowlsInterface_P_2_GetDoPinStateOne_BatteryVoltage = 0U;
  IOHWAB_UINT8 Call_DowlsInterface_P_2_GetDoPinStateOne_DutyCycle = 0U;
  IOHWAB_UINT16 Call_DowlsInterface_P_2_GetDoPinStateOne_Period = 0U;
  VGTT_EcuPinDiagStatus Call_DowlsInterface_P_2_GetDoPinStateOne_DiagStatus = 0U;
  IOHWAB_BOOL Call_DowlsInterface_P_3_GetDoPinStateOne_IsDoActivated = FALSE;
  IOHWAB_UINT16 Call_DowlsInterface_P_3_GetDoPinStateOne_DoPinVoltage = 0U;
  IOHWAB_UINT16 Call_DowlsInterface_P_3_GetDoPinStateOne_BatteryVoltage = 0U;
  IOHWAB_UINT8 Call_DowlsInterface_P_3_GetDoPinStateOne_DutyCycle = 0U;
  IOHWAB_UINT16 Call_DowlsInterface_P_3_GetDoPinStateOne_Period = 0U;
  VGTT_EcuPinDiagStatus Call_DowlsInterface_P_3_GetDoPinStateOne_DiagStatus = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Debug_PVT_SCIM_Ctrl_WHS1(&Read_Debug_PVT_SCIM_Ctrl_WHS1_Debug_PVT_SCIM_Ctrl_WHS1);
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

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Duty_Debug_PVT_SCIM_Ctrl_WHS1_Duty(&Read_Debug_PVT_SCIM_Ctrl_WHS1_Duty_Debug_PVT_SCIM_Ctrl_WHS1_Duty);
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

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Freq_Debug_PVT_SCIM_Ctrl_WHS1_Freq(&Read_Debug_PVT_SCIM_Ctrl_WHS1_Freq_Debug_PVT_SCIM_Ctrl_WHS1_Freq);
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

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Debug_PVT_SCIM_Ctrl_WHS2(&Read_Debug_PVT_SCIM_Ctrl_WHS2_Debug_PVT_SCIM_Ctrl_WHS2);
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

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Duty_Debug_PVT_SCIM_Ctrl_WHS2_Duty(&Read_Debug_PVT_SCIM_Ctrl_WHS2_Duty_Debug_PVT_SCIM_Ctrl_WHS2_Duty);
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

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Freq_Debug_PVT_SCIM_Ctrl_WHS2_Freq(&Read_Debug_PVT_SCIM_Ctrl_WHS2_Freq_Debug_PVT_SCIM_Ctrl_WHS2_Freq);
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

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Debug_PVT_SCIM_Ctrl_WLS1(&Read_Debug_PVT_SCIM_Ctrl_WLS1_Debug_PVT_SCIM_Ctrl_WLS1);
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

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Duty_Debug_PVT_SCIM_Ctrl_WLS1_Duty(&Read_Debug_PVT_SCIM_Ctrl_WLS1_Duty_Debug_PVT_SCIM_Ctrl_WLS1_Duty);
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

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Freq_Debug_PVT_SCIM_Ctrl_WLS1_Freq(&Read_Debug_PVT_SCIM_Ctrl_WLS1_Freq_Debug_PVT_SCIM_Ctrl_WLS1_Freq);
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

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2_Debug_PVT_SCIM_Ctrl_WLS2(&Read_Debug_PVT_SCIM_Ctrl_WLS2_Debug_PVT_SCIM_Ctrl_WLS2);
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

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2Duty_Debug_PVT_SCIM_Ctrl_WLS2Duty(&Read_Debug_PVT_SCIM_Ctrl_WLS2Duty_Debug_PVT_SCIM_Ctrl_WLS2Duty);
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

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2Freq_Debug_PVT_SCIM_Ctrl_WLS2Freq(&Read_Debug_PVT_SCIM_Ctrl_WLS2Freq_Debug_PVT_SCIM_Ctrl_WLS2Freq);
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

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3_Debug_PVT_SCIM_Ctrl_WLS3(&Read_Debug_PVT_SCIM_Ctrl_WLS3_Debug_PVT_SCIM_Ctrl_WLS3);
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

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3Duty_Debug_PVT_SCIM_Ctrl_WLS3Duty(&Read_Debug_PVT_SCIM_Ctrl_WLS3Duty_Debug_PVT_SCIM_Ctrl_WLS3Duty);
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

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3Freq_Debug_PVT_SCIM_Ctrl_WLS3Freq(&Read_Debug_PVT_SCIM_Ctrl_WLS3Freq_Debug_PVT_SCIM_Ctrl_WLS3Freq);
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

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty(Rte_InitValue_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault(Rte_InitValue_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq(Rte_InitValue_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt(Rte_InitValue_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty(Rte_InitValue_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault(Rte_InitValue_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq(Rte_InitValue_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt(Rte_InitValue_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty(Rte_InitValue_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault(Rte_InitValue_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq(Rte_InitValue_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt(Rte_InitValue_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty(Rte_InitValue_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault(Rte_InitValue_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq(Rte_InitValue_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt(Rte_InitValue_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty(Rte_InitValue_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault(Rte_InitValue_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq(Rte_InitValue_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Write_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt(Rte_InitValue_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Call_DowhsInterfaces_P_1_GetDoPinStateOne(0U, &Call_DowhsInterfaces_P_1_GetDoPinStateOne_IsDoActivated, &Call_DowhsInterfaces_P_1_GetDoPinStateOne_DoPinVoltage, &Call_DowhsInterfaces_P_1_GetDoPinStateOne_BatteryVoltage, &Call_DowhsInterfaces_P_1_GetDoPinStateOne_DutyCycle, &Call_DowhsInterfaces_P_1_GetDoPinStateOne_Period, &Call_DowhsInterfaces_P_1_GetDoPinStateOne_DiagStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_DowhsInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Call_DowhsInterfaces_P_1_SetDowActive(0U, 0U, 0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_DowhsInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Call_DowhsInterfaces_P_2_GetDoPinStateOne(0U, &Call_DowhsInterfaces_P_2_GetDoPinStateOne_IsDoActivated, &Call_DowhsInterfaces_P_2_GetDoPinStateOne_DoPinVoltage, &Call_DowhsInterfaces_P_2_GetDoPinStateOne_BatteryVoltage, &Call_DowhsInterfaces_P_2_GetDoPinStateOne_DutyCycle, &Call_DowhsInterfaces_P_2_GetDoPinStateOne_Period, &Call_DowhsInterfaces_P_2_GetDoPinStateOne_DiagStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_DowhsInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Call_DowhsInterfaces_P_2_SetDowActive(0U, 0U, 0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_DowhsInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Call_DowlsInterface_P_1_GetDoPinStateOne(0U, &Call_DowlsInterface_P_1_GetDoPinStateOne_IsDoActivated, &Call_DowlsInterface_P_1_GetDoPinStateOne_DoPinVoltage, &Call_DowlsInterface_P_1_GetDoPinStateOne_BatteryVoltage, &Call_DowlsInterface_P_1_GetDoPinStateOne_DutyCycle, &Call_DowlsInterface_P_1_GetDoPinStateOne_Period, &Call_DowlsInterface_P_1_GetDoPinStateOne_DiagStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_DowlsInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Call_DowlsInterface_P_1_SetDowlsActive(0U, 0U, 0);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_DowlsInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Call_DowlsInterface_P_2_GetDoPinStateOne(0U, &Call_DowlsInterface_P_2_GetDoPinStateOne_IsDoActivated, &Call_DowlsInterface_P_2_GetDoPinStateOne_DoPinVoltage, &Call_DowlsInterface_P_2_GetDoPinStateOne_BatteryVoltage, &Call_DowlsInterface_P_2_GetDoPinStateOne_DutyCycle, &Call_DowlsInterface_P_2_GetDoPinStateOne_Period, &Call_DowlsInterface_P_2_GetDoPinStateOne_DiagStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_DowlsInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Call_DowlsInterface_P_2_SetDowlsActive(0U, 0U, 0);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_DowlsInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Call_DowlsInterface_P_3_GetDoPinStateOne(0U, &Call_DowlsInterface_P_3_GetDoPinStateOne_IsDoActivated, &Call_DowlsInterface_P_3_GetDoPinStateOne_DoPinVoltage, &Call_DowlsInterface_P_3_GetDoPinStateOne_BatteryVoltage, &Call_DowlsInterface_P_3_GetDoPinStateOne_DutyCycle, &Call_DowlsInterface_P_3_GetDoPinStateOne_Period, &Call_DowlsInterface_P_3_GetDoPinStateOne_DiagStatus);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_DowlsInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DowhsDowlsInterface_Rte_Call_DowlsInterface_P_3_SetDowlsActive(0U, 0U, 0);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_DowlsInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  PVTApp_DowhsDowlsInterface_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define PVTApp_DowhsDowlsInterface_STOP_SEC_CODE
#include "PVTApp_DowhsDowlsInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void PVTApp_DowhsDowlsInterface_TestDefines(void)
{
  /* Enumeration Data Types */

  Debug_PVT_SCIM_RD_WHS1_Fault_1 Test_Debug_PVT_SCIM_RD_WHS1_Fault_1_V_1 = Cx0_Nomal;
  Debug_PVT_SCIM_RD_WHS1_Fault_1 Test_Debug_PVT_SCIM_RD_WHS1_Fault_1_V_2 = Cx1_Short_To_Ground;
  Debug_PVT_SCIM_RD_WHS1_Fault_1 Test_Debug_PVT_SCIM_RD_WHS1_Fault_1_V_3 = Cx2_Short_To_Battery;
  Debug_PVT_SCIM_RD_WHS1_Fault_1 Test_Debug_PVT_SCIM_RD_WHS1_Fault_1_V_4 = Cx3_Open_Circuit;
  Debug_PVT_SCIM_RD_WHS1_Fault_1 Test_Debug_PVT_SCIM_RD_WHS1_Fault_1_V_5 = Cx4_Reserved;
  Debug_PVT_SCIM_RD_WHS1_Fault_1 Test_Debug_PVT_SCIM_RD_WHS1_Fault_1_V_6 = Cx5_Reserved;
  Debug_PVT_SCIM_RD_WHS1_Fault_1 Test_Debug_PVT_SCIM_RD_WHS1_Fault_1_V_7 = Cx6_Voltage_Too_Low;
  Debug_PVT_SCIM_RD_WHS1_Fault_1 Test_Debug_PVT_SCIM_RD_WHS1_Fault_1_V_8 = Cx7_Voltage_Too_High;
  Debug_PVT_SCIM_RD_WHS1_Fault_1 Test_Debug_PVT_SCIM_RD_WHS1_Fault_1_V_9 = Cx8_Invalid_Error_Value_;

  Debug_PVT_SCIM_RD_WHS2_Fault_1 Test_Debug_PVT_SCIM_RD_WHS2_Fault_1_V_1 = Cx0_Nomal;
  Debug_PVT_SCIM_RD_WHS2_Fault_1 Test_Debug_PVT_SCIM_RD_WHS2_Fault_1_V_2 = Cx1_Short_To_Ground;
  Debug_PVT_SCIM_RD_WHS2_Fault_1 Test_Debug_PVT_SCIM_RD_WHS2_Fault_1_V_3 = Cx2_Short_To_Battery;
  Debug_PVT_SCIM_RD_WHS2_Fault_1 Test_Debug_PVT_SCIM_RD_WHS2_Fault_1_V_4 = Cx3_Open_Circuit;
  Debug_PVT_SCIM_RD_WHS2_Fault_1 Test_Debug_PVT_SCIM_RD_WHS2_Fault_1_V_5 = Cx4_Reserved;
  Debug_PVT_SCIM_RD_WHS2_Fault_1 Test_Debug_PVT_SCIM_RD_WHS2_Fault_1_V_6 = Cx5_Reserved;
  Debug_PVT_SCIM_RD_WHS2_Fault_1 Test_Debug_PVT_SCIM_RD_WHS2_Fault_1_V_7 = Cx6_Voltage_Too_Low;
  Debug_PVT_SCIM_RD_WHS2_Fault_1 Test_Debug_PVT_SCIM_RD_WHS2_Fault_1_V_8 = Cx7_Voltage_Too_High;
  Debug_PVT_SCIM_RD_WHS2_Fault_1 Test_Debug_PVT_SCIM_RD_WHS2_Fault_1_V_9 = Cx8_Invalid_Error_Value_;

  Debug_PVT_SCIM_RD_WLS1_Fault_1 Test_Debug_PVT_SCIM_RD_WLS1_Fault_1_V_1 = Cx0_Nomal;
  Debug_PVT_SCIM_RD_WLS1_Fault_1 Test_Debug_PVT_SCIM_RD_WLS1_Fault_1_V_2 = Cx1_Short_To_Ground;
  Debug_PVT_SCIM_RD_WLS1_Fault_1 Test_Debug_PVT_SCIM_RD_WLS1_Fault_1_V_3 = Cx2_Short_To_Battery;
  Debug_PVT_SCIM_RD_WLS1_Fault_1 Test_Debug_PVT_SCIM_RD_WLS1_Fault_1_V_4 = Cx3_Open_Circuit;
  Debug_PVT_SCIM_RD_WLS1_Fault_1 Test_Debug_PVT_SCIM_RD_WLS1_Fault_1_V_5 = Cx4_Reserved;
  Debug_PVT_SCIM_RD_WLS1_Fault_1 Test_Debug_PVT_SCIM_RD_WLS1_Fault_1_V_6 = Cx5_Reserved;
  Debug_PVT_SCIM_RD_WLS1_Fault_1 Test_Debug_PVT_SCIM_RD_WLS1_Fault_1_V_7 = Cx6_Voltage_Too_Low;
  Debug_PVT_SCIM_RD_WLS1_Fault_1 Test_Debug_PVT_SCIM_RD_WLS1_Fault_1_V_8 = Cx7_Voltage_Too_High;
  Debug_PVT_SCIM_RD_WLS1_Fault_1 Test_Debug_PVT_SCIM_RD_WLS1_Fault_1_V_9 = Cx8_Invalid_Error_Value_;

  Debug_PVT_SCIM_RD_WLS2_Fault_1 Test_Debug_PVT_SCIM_RD_WLS2_Fault_1_V_1 = Cx0_Nomal;
  Debug_PVT_SCIM_RD_WLS2_Fault_1 Test_Debug_PVT_SCIM_RD_WLS2_Fault_1_V_2 = Cx1_Short_To_Ground;
  Debug_PVT_SCIM_RD_WLS2_Fault_1 Test_Debug_PVT_SCIM_RD_WLS2_Fault_1_V_3 = Cx2_Short_To_Battery;
  Debug_PVT_SCIM_RD_WLS2_Fault_1 Test_Debug_PVT_SCIM_RD_WLS2_Fault_1_V_4 = Cx3_Open_Circuit;
  Debug_PVT_SCIM_RD_WLS2_Fault_1 Test_Debug_PVT_SCIM_RD_WLS2_Fault_1_V_5 = Cx4_Reserved;
  Debug_PVT_SCIM_RD_WLS2_Fault_1 Test_Debug_PVT_SCIM_RD_WLS2_Fault_1_V_6 = Cx5_Reserved;
  Debug_PVT_SCIM_RD_WLS2_Fault_1 Test_Debug_PVT_SCIM_RD_WLS2_Fault_1_V_7 = Cx6_Voltage_Too_Low;
  Debug_PVT_SCIM_RD_WLS2_Fault_1 Test_Debug_PVT_SCIM_RD_WLS2_Fault_1_V_8 = Cx7_Voltage_Too_High;
  Debug_PVT_SCIM_RD_WLS2_Fault_1 Test_Debug_PVT_SCIM_RD_WLS2_Fault_1_V_9 = Cx8_Invalid_Error_Value_;

  Debug_PVT_SCIM_RD_WLS3_Fault_1 Test_Debug_PVT_SCIM_RD_WLS3_Fault_1_V_1 = Cx0_Nomal;
  Debug_PVT_SCIM_RD_WLS3_Fault_1 Test_Debug_PVT_SCIM_RD_WLS3_Fault_1_V_2 = Cx1_Short_To_Ground;
  Debug_PVT_SCIM_RD_WLS3_Fault_1 Test_Debug_PVT_SCIM_RD_WLS3_Fault_1_V_3 = Cx2_Short_To_Battery;
  Debug_PVT_SCIM_RD_WLS3_Fault_1 Test_Debug_PVT_SCIM_RD_WLS3_Fault_1_V_4 = Cx3_Open_Circuit;
  Debug_PVT_SCIM_RD_WLS3_Fault_1 Test_Debug_PVT_SCIM_RD_WLS3_Fault_1_V_5 = Cx4_Reserved;
  Debug_PVT_SCIM_RD_WLS3_Fault_1 Test_Debug_PVT_SCIM_RD_WLS3_Fault_1_V_6 = Cx5_Reserved;
  Debug_PVT_SCIM_RD_WLS3_Fault_1 Test_Debug_PVT_SCIM_RD_WLS3_Fault_1_V_7 = Cx6_Voltage_Too_Low;
  Debug_PVT_SCIM_RD_WLS3_Fault_1 Test_Debug_PVT_SCIM_RD_WLS3_Fault_1_V_8 = Cx7_Voltage_Too_High;
  Debug_PVT_SCIM_RD_WLS3_Fault_1 Test_Debug_PVT_SCIM_RD_WLS3_Fault_1_V_9 = Cx8_Invalid_Error_Value_;
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
