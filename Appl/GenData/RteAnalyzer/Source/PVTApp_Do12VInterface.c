/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PVTApp_Do12VInterface.c
 *        Config:  SCIM_BP.dpa
 *     SW-C Type:  PVTApp_Do12VInterface
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <PVTApp_Do12VInterface>
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
 * VGTT_EcuPinVoltage_0V2
 *   
 *
 *********************************************************************************************************************/

#include "Rte_PVTApp_Do12VInterface.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_PVTApp_Do12VInterface.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void PVTApp_Do12VInterface_TestDefines(void);


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
 * Debug_PVT_SCIM_Ctrl_12VDCDC_1: Boolean
 * Debug_PVT_SCIM_Ctrl_12VLiving_1: Boolean
 * Debug_PVT_SCIM_Ctrl_12VParked_1: Boolean
 * Debug_PVT_SCIM_RD_12VDCDCVolt: Integer in interval [0...255]
 * Debug_PVT_SCIM_RD_VBAT_1: Integer in interval [0...65535]
 * IOHWAB_BOOL: Boolean
 * IOHWAB_UINT16: Integer in interval [0...65535]
 * IOHWAB_UINT8: Integer in interval [0...255]
 * VGTT_EcuPinDiagStatus: Integer in interval [0...255]
 * VGTT_EcuPinVoltage_0V2: Integer in interval [0...255]
 * boolean: Boolean (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Debug_PVT_SCIM_RD_12VDCDCFault: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Nomal (0U)
 *   Cx1_Reserved (1U)
 *   Cx2_Reserved (2U)
 *   Cx3_Reserved (3U)
 *   Cx4_Reserved (4U)
 *   Cx5_Voltage_out_of_range (5U)
 *   Cx6_Reserved (6U)
 *   Cx7_Reserved (7U)
 *   Cx8_invalid_Error_Value_ (8U)
 *
 *********************************************************************************************************************/


#define PVTApp_Do12VInterface_START_SEC_CODE
#include "PVTApp_Do12VInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_PvtDo12VInterface
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
 *   Debug_PVT_SCIM_Ctrl_12VDCDC_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_12VDCDC_Debug_PVT_SCIM_Ctrl_12VDCDC(void)
 *   Debug_PVT_SCIM_Ctrl_12VLiving_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_12VLiving_Debug_PVT_SCIM_Ctrl_12VLiving(void)
 *   Debug_PVT_SCIM_Ctrl_12VParked_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_12VParked_Debug_PVT_SCIM_Ctrl_12VParked(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault(Debug_PVT_SCIM_RD_12VDCDCFault data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt(Debug_PVT_SCIM_RD_12VDCDCVolt data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT(Debug_PVT_SCIM_RD_VBAT_1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_Do12VInterface_P_GetDo12VPinsState(IOHWAB_UINT8 SelectParkedOrLivingPin, IOHWAB_BOOL *IsDo12VActivated, VGTT_EcuPinVoltage_0V2 *Do12VPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinVoltage_0V2 *DcdcRefVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_Do12VInterface_P_SetDcdc12VActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_Do12VInterface_P_SetDo12VLivingActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_Do12VInterface_P_SetDo12VParkedActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_PvtDo12VInterface_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PVTApp_Do12VInterface_CODE) Re_PvtDo12VInterface(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_PvtDo12VInterface
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  Debug_PVT_SCIM_Ctrl_12VDCDC_1 Read_Debug_PVT_SCIM_Ctrl_12VDCDC_Debug_PVT_SCIM_Ctrl_12VDCDC;
  Debug_PVT_SCIM_Ctrl_12VLiving_1 Read_Debug_PVT_SCIM_Ctrl_12VLiving_Debug_PVT_SCIM_Ctrl_12VLiving;
  Debug_PVT_SCIM_Ctrl_12VParked_1 Read_Debug_PVT_SCIM_Ctrl_12VParked_Debug_PVT_SCIM_Ctrl_12VParked;

  IOHWAB_BOOL Call_Do12VInterface_P_GetDo12VPinsState_IsDo12VActivated = FALSE;
  VGTT_EcuPinVoltage_0V2 Call_Do12VInterface_P_GetDo12VPinsState_Do12VPinVoltage = 0U;
  IOHWAB_UINT16 Call_Do12VInterface_P_GetDo12VPinsState_BatteryVoltage = 0U;
  VGTT_EcuPinVoltage_0V2 Call_Do12VInterface_P_GetDo12VPinsState_DcdcRefVoltage = 0U;
  VGTT_EcuPinDiagStatus Call_Do12VInterface_P_GetDo12VPinsState_DiagStatus = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  Read_Debug_PVT_SCIM_Ctrl_12VDCDC_Debug_PVT_SCIM_Ctrl_12VDCDC = TSC_PVTApp_Do12VInterface_Rte_DRead_Debug_PVT_SCIM_Ctrl_12VDCDC_Debug_PVT_SCIM_Ctrl_12VDCDC();

  Read_Debug_PVT_SCIM_Ctrl_12VLiving_Debug_PVT_SCIM_Ctrl_12VLiving = TSC_PVTApp_Do12VInterface_Rte_DRead_Debug_PVT_SCIM_Ctrl_12VLiving_Debug_PVT_SCIM_Ctrl_12VLiving();

  Read_Debug_PVT_SCIM_Ctrl_12VParked_Debug_PVT_SCIM_Ctrl_12VParked = TSC_PVTApp_Do12VInterface_Rte_DRead_Debug_PVT_SCIM_Ctrl_12VParked_Debug_PVT_SCIM_Ctrl_12VParked();

  fct_status = TSC_PVTApp_Do12VInterface_Rte_Write_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault(Rte_InitValue_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Do12VInterface_Rte_Write_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt(Rte_InitValue_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Do12VInterface_Rte_Write_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT(Rte_InitValue_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Do12VInterface_Rte_Call_Do12VInterface_P_GetDo12VPinsState(0U, &Call_Do12VInterface_P_GetDo12VPinsState_IsDo12VActivated, &Call_Do12VInterface_P_GetDo12VPinsState_Do12VPinVoltage, &Call_Do12VInterface_P_GetDo12VPinsState_BatteryVoltage, &Call_Do12VInterface_P_GetDo12VPinsState_DcdcRefVoltage, &Call_Do12VInterface_P_GetDo12VPinsState_DiagStatus);
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
    case RTE_E_Do12VInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Do12VInterface_Rte_Call_Do12VInterface_P_SetDcdc12VActive(FALSE);
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
    case RTE_E_Do12VInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Do12VInterface_Rte_Call_Do12VInterface_P_SetDo12VLivingActive(FALSE);
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
    case RTE_E_Do12VInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Do12VInterface_Rte_Call_Do12VInterface_P_SetDo12VParkedActive(FALSE);
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
    case RTE_E_Do12VInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  PVTApp_Do12VInterface_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define PVTApp_Do12VInterface_STOP_SEC_CODE
#include "PVTApp_Do12VInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void PVTApp_Do12VInterface_TestDefines(void)
{
  /* Enumeration Data Types */

  Debug_PVT_SCIM_RD_12VDCDCFault Test_Debug_PVT_SCIM_RD_12VDCDCFault_V_1 = Cx0_Nomal;
  Debug_PVT_SCIM_RD_12VDCDCFault Test_Debug_PVT_SCIM_RD_12VDCDCFault_V_2 = Cx1_Reserved;
  Debug_PVT_SCIM_RD_12VDCDCFault Test_Debug_PVT_SCIM_RD_12VDCDCFault_V_3 = Cx2_Reserved;
  Debug_PVT_SCIM_RD_12VDCDCFault Test_Debug_PVT_SCIM_RD_12VDCDCFault_V_4 = Cx3_Reserved;
  Debug_PVT_SCIM_RD_12VDCDCFault Test_Debug_PVT_SCIM_RD_12VDCDCFault_V_5 = Cx4_Reserved;
  Debug_PVT_SCIM_RD_12VDCDCFault Test_Debug_PVT_SCIM_RD_12VDCDCFault_V_6 = Cx5_Voltage_out_of_range;
  Debug_PVT_SCIM_RD_12VDCDCFault Test_Debug_PVT_SCIM_RD_12VDCDCFault_V_7 = Cx6_Reserved;
  Debug_PVT_SCIM_RD_12VDCDCFault Test_Debug_PVT_SCIM_RD_12VDCDCFault_V_8 = Cx7_Reserved;
  Debug_PVT_SCIM_RD_12VDCDCFault Test_Debug_PVT_SCIM_RD_12VDCDCFault_V_9 = Cx8_invalid_Error_Value_;
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
