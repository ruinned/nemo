/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PVTApp_DobhsCtrlInterface.c
 *        Config:  SCIM_BP.dpa
 *     SW-C Type:  PVTApp_DobhsCtrlInterface
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

#include "Rte_PVTApp_DobhsCtrlInterface.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_PVTApp_DobhsCtrlInterface.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void PVTApp_DobhsCtrlInterface_TestDefines(void);


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

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  Debug_PVT_SCIM_Ctrl_BHS1_1 Read_Debug_PVT_SCIM_Ctrl_BHS1_1_Debug_PVT_SCIM_Ctrl_BHS1;
  Debug_PVT_SCIM_Ctrl_BHS2_1 Read_Debug_PVT_SCIM_Ctrl_BHS2_1_Debug_PVT_SCIM_Ctrl_BHS2;
  Debug_PVT_SCIM_Ctrl_BHS3_1 Read_Debug_PVT_SCIM_Ctrl_BHS3_1_Debug_PVT_SCIM_Ctrl_BHS3;
  Debug_PVT_SCIM_Ctrl_BHS4_1 Read_Debug_PVT_SCIM_Ctrl_BHS4_1_Debug_PVT_SCIM_Ctrl_BHS4;

  IOHWAB_BOOL Call_DobhsCtrlInterface_P_1_GetDobhsPinState_IsDoActivated = FALSE;
  IOHWAB_UINT16 Call_DobhsCtrlInterface_P_1_GetDobhsPinState_DoPinVoltage = 0U;
  IOHWAB_UINT16 Call_DobhsCtrlInterface_P_1_GetDobhsPinState_BatteryVoltage = 0U;
  VGTT_EcuPinDiagStatus Call_DobhsCtrlInterface_P_1_GetDobhsPinState_DiagStatus = 0U;
  IOHWAB_BOOL Call_DobhsCtrlInterface_P_2_GetDobhsPinState_IsDoActivated = FALSE;
  IOHWAB_UINT16 Call_DobhsCtrlInterface_P_2_GetDobhsPinState_DoPinVoltage = 0U;
  IOHWAB_UINT16 Call_DobhsCtrlInterface_P_2_GetDobhsPinState_BatteryVoltage = 0U;
  VGTT_EcuPinDiagStatus Call_DobhsCtrlInterface_P_2_GetDobhsPinState_DiagStatus = 0U;
  IOHWAB_BOOL Call_DobhsCtrlInterface_P_3_GetDobhsPinState_IsDoActivated = FALSE;
  IOHWAB_UINT16 Call_DobhsCtrlInterface_P_3_GetDobhsPinState_DoPinVoltage = 0U;
  IOHWAB_UINT16 Call_DobhsCtrlInterface_P_3_GetDobhsPinState_BatteryVoltage = 0U;
  VGTT_EcuPinDiagStatus Call_DobhsCtrlInterface_P_3_GetDobhsPinState_DiagStatus = 0U;
  IOHWAB_BOOL Call_DobhsCtrlInterface_P_4_GetDobhsPinState_IsDoActivated = FALSE;
  IOHWAB_UINT16 Call_DobhsCtrlInterface_P_4_GetDobhsPinState_DoPinVoltage = 0U;
  IOHWAB_UINT16 Call_DobhsCtrlInterface_P_4_GetDobhsPinState_BatteryVoltage = 0U;
  VGTT_EcuPinDiagStatus Call_DobhsCtrlInterface_P_4_GetDobhsPinState_DiagStatus = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  Read_Debug_PVT_SCIM_Ctrl_BHS1_1_Debug_PVT_SCIM_Ctrl_BHS1 = TSC_PVTApp_DobhsCtrlInterface_Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS1_1_Debug_PVT_SCIM_Ctrl_BHS1();

  Read_Debug_PVT_SCIM_Ctrl_BHS2_1_Debug_PVT_SCIM_Ctrl_BHS2 = TSC_PVTApp_DobhsCtrlInterface_Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS2_1_Debug_PVT_SCIM_Ctrl_BHS2();

  Read_Debug_PVT_SCIM_Ctrl_BHS3_1_Debug_PVT_SCIM_Ctrl_BHS3 = TSC_PVTApp_DobhsCtrlInterface_Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS3_1_Debug_PVT_SCIM_Ctrl_BHS3();

  Read_Debug_PVT_SCIM_Ctrl_BHS4_1_Debug_PVT_SCIM_Ctrl_BHS4 = TSC_PVTApp_DobhsCtrlInterface_Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS4_1_Debug_PVT_SCIM_Ctrl_BHS4();

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault(Rte_InitValue_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt(Rte_InitValue_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault(Rte_InitValue_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt(Rte_InitValue_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault(Rte_InitValue_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt(Rte_InitValue_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault(Rte_InitValue_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt(Rte_InitValue_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_1_GetDobhsPinState(&Call_DobhsCtrlInterface_P_1_GetDobhsPinState_IsDoActivated, &Call_DobhsCtrlInterface_P_1_GetDobhsPinState_DoPinVoltage, &Call_DobhsCtrlInterface_P_1_GetDobhsPinState_BatteryVoltage, &Call_DobhsCtrlInterface_P_1_GetDobhsPinState_DiagStatus);
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
    case RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_1_SetDobhsActive(FALSE);
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
    case RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_2_GetDobhsPinState(&Call_DobhsCtrlInterface_P_2_GetDobhsPinState_IsDoActivated, &Call_DobhsCtrlInterface_P_2_GetDobhsPinState_DoPinVoltage, &Call_DobhsCtrlInterface_P_2_GetDobhsPinState_BatteryVoltage, &Call_DobhsCtrlInterface_P_2_GetDobhsPinState_DiagStatus);
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
    case RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_2_SetDobhsActive(FALSE);
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
    case RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_3_GetDobhsPinState(&Call_DobhsCtrlInterface_P_3_GetDobhsPinState_IsDoActivated, &Call_DobhsCtrlInterface_P_3_GetDobhsPinState_DoPinVoltage, &Call_DobhsCtrlInterface_P_3_GetDobhsPinState_BatteryVoltage, &Call_DobhsCtrlInterface_P_3_GetDobhsPinState_DiagStatus);
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
    case RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_3_SetDobhsActive(FALSE);
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
    case RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_4_GetDobhsPinState(&Call_DobhsCtrlInterface_P_4_GetDobhsPinState_IsDoActivated, &Call_DobhsCtrlInterface_P_4_GetDobhsPinState_DoPinVoltage, &Call_DobhsCtrlInterface_P_4_GetDobhsPinState_BatteryVoltage, &Call_DobhsCtrlInterface_P_4_GetDobhsPinState_DiagStatus);
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
    case RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_4_SetDobhsActive(FALSE);
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
    case RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  PVTApp_DobhsCtrlInterface_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define PVTApp_DobhsCtrlInterface_STOP_SEC_CODE
#include "PVTApp_DobhsCtrlInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void PVTApp_DobhsCtrlInterface_TestDefines(void)
{
  /* Enumeration Data Types */

  Debug_PVT_SCIM_RD_BHS1_Fault_1 Test_Debug_PVT_SCIM_RD_BHS1_Fault_1_V_1 = Cx0_Nomal;
  Debug_PVT_SCIM_RD_BHS1_Fault_1 Test_Debug_PVT_SCIM_RD_BHS1_Fault_1_V_2 = Cx1_Short_To_Ground;
  Debug_PVT_SCIM_RD_BHS1_Fault_1 Test_Debug_PVT_SCIM_RD_BHS1_Fault_1_V_3 = Cx2_Short_To_Battery;
  Debug_PVT_SCIM_RD_BHS1_Fault_1 Test_Debug_PVT_SCIM_RD_BHS1_Fault_1_V_4 = Cx3_Open_Circuit;
  Debug_PVT_SCIM_RD_BHS1_Fault_1 Test_Debug_PVT_SCIM_RD_BHS1_Fault_1_V_5 = Cx4_Reserved;
  Debug_PVT_SCIM_RD_BHS1_Fault_1 Test_Debug_PVT_SCIM_RD_BHS1_Fault_1_V_6 = Cx5_Reserved;
  Debug_PVT_SCIM_RD_BHS1_Fault_1 Test_Debug_PVT_SCIM_RD_BHS1_Fault_1_V_7 = Cx6_Voltage_Too_Low;
  Debug_PVT_SCIM_RD_BHS1_Fault_1 Test_Debug_PVT_SCIM_RD_BHS1_Fault_1_V_8 = Cx7_Voltage_Too_High;
  Debug_PVT_SCIM_RD_BHS1_Fault_1 Test_Debug_PVT_SCIM_RD_BHS1_Fault_1_V_9 = Cx8_Invalid_Error_Value_;

  Debug_PVT_SCIM_RD_BHS2_Fault_1 Test_Debug_PVT_SCIM_RD_BHS2_Fault_1_V_1 = Cx0_Nomal;
  Debug_PVT_SCIM_RD_BHS2_Fault_1 Test_Debug_PVT_SCIM_RD_BHS2_Fault_1_V_2 = Cx1_Short_To_Ground;
  Debug_PVT_SCIM_RD_BHS2_Fault_1 Test_Debug_PVT_SCIM_RD_BHS2_Fault_1_V_3 = Cx2_Short_To_Battery;
  Debug_PVT_SCIM_RD_BHS2_Fault_1 Test_Debug_PVT_SCIM_RD_BHS2_Fault_1_V_4 = Cx3_Open_Circuit;
  Debug_PVT_SCIM_RD_BHS2_Fault_1 Test_Debug_PVT_SCIM_RD_BHS2_Fault_1_V_5 = Cx4_Reserved;
  Debug_PVT_SCIM_RD_BHS2_Fault_1 Test_Debug_PVT_SCIM_RD_BHS2_Fault_1_V_6 = Cx5_Reserved;
  Debug_PVT_SCIM_RD_BHS2_Fault_1 Test_Debug_PVT_SCIM_RD_BHS2_Fault_1_V_7 = Cx6_Voltage_Too_Low;
  Debug_PVT_SCIM_RD_BHS2_Fault_1 Test_Debug_PVT_SCIM_RD_BHS2_Fault_1_V_8 = Cx7_Voltage_Too_High;
  Debug_PVT_SCIM_RD_BHS2_Fault_1 Test_Debug_PVT_SCIM_RD_BHS2_Fault_1_V_9 = Cx8_Invalid_Error_Value_;

  Debug_PVT_SCIM_RD_BHS3_Fault_1 Test_Debug_PVT_SCIM_RD_BHS3_Fault_1_V_1 = Cx0_Nomal;
  Debug_PVT_SCIM_RD_BHS3_Fault_1 Test_Debug_PVT_SCIM_RD_BHS3_Fault_1_V_2 = Cx1_Short_To_Ground;
  Debug_PVT_SCIM_RD_BHS3_Fault_1 Test_Debug_PVT_SCIM_RD_BHS3_Fault_1_V_3 = Cx2_Short_To_Battery;
  Debug_PVT_SCIM_RD_BHS3_Fault_1 Test_Debug_PVT_SCIM_RD_BHS3_Fault_1_V_4 = Cx3_Open_Circuit;
  Debug_PVT_SCIM_RD_BHS3_Fault_1 Test_Debug_PVT_SCIM_RD_BHS3_Fault_1_V_5 = Cx4_Reserved;
  Debug_PVT_SCIM_RD_BHS3_Fault_1 Test_Debug_PVT_SCIM_RD_BHS3_Fault_1_V_6 = Cx5_Reserved;
  Debug_PVT_SCIM_RD_BHS3_Fault_1 Test_Debug_PVT_SCIM_RD_BHS3_Fault_1_V_7 = Cx6_Voltage_Too_Low;
  Debug_PVT_SCIM_RD_BHS3_Fault_1 Test_Debug_PVT_SCIM_RD_BHS3_Fault_1_V_8 = Cx7_Voltage_Too_High;
  Debug_PVT_SCIM_RD_BHS3_Fault_1 Test_Debug_PVT_SCIM_RD_BHS3_Fault_1_V_9 = Cx8_Invalid_Error_Value_;

  Debug_PVT_SCIM_RD_BHS4_Fault_1 Test_Debug_PVT_SCIM_RD_BHS4_Fault_1_V_1 = Cx0_Nomal;
  Debug_PVT_SCIM_RD_BHS4_Fault_1 Test_Debug_PVT_SCIM_RD_BHS4_Fault_1_V_2 = Cx1_Short_To_Ground;
  Debug_PVT_SCIM_RD_BHS4_Fault_1 Test_Debug_PVT_SCIM_RD_BHS4_Fault_1_V_3 = Cx2_Short_To_Battery;
  Debug_PVT_SCIM_RD_BHS4_Fault_1 Test_Debug_PVT_SCIM_RD_BHS4_Fault_1_V_4 = Cx3_Open_Circuit;
  Debug_PVT_SCIM_RD_BHS4_Fault_1 Test_Debug_PVT_SCIM_RD_BHS4_Fault_1_V_5 = Cx4_Reserved;
  Debug_PVT_SCIM_RD_BHS4_Fault_1 Test_Debug_PVT_SCIM_RD_BHS4_Fault_1_V_6 = Cx5_Reserved;
  Debug_PVT_SCIM_RD_BHS4_Fault_1 Test_Debug_PVT_SCIM_RD_BHS4_Fault_1_V_7 = Cx6_Voltage_Too_Low;
  Debug_PVT_SCIM_RD_BHS4_Fault_1 Test_Debug_PVT_SCIM_RD_BHS4_Fault_1_V_8 = Cx7_Voltage_Too_High;
  Debug_PVT_SCIM_RD_BHS4_Fault_1 Test_Debug_PVT_SCIM_RD_BHS4_Fault_1_V_9 = Cx8_Invalid_Error_Value_;
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
