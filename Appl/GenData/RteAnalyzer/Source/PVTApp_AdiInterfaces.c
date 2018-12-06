/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PVTApp_AdiInterfaces.c
 *        Config:  SCIM_BP.dpa
 *     SW-C Type:  PVTApp_AdiInterfaces
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <PVTApp_AdiInterfaces>
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
 * VGTT_EcuPinVoltage_0V2
 *   
 *
 * VGTT_ScimAdiPinsState
 *   
 *
 *********************************************************************************************************************/

#include "Rte_PVTApp_AdiInterfaces.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_PVTApp_AdiInterfaces.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void PVTApp_AdiInterfaces_TestDefines(void);


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
 * Debug_PVT_SCIM_Ctrl_DaiPullUp_1: Boolean
 * Debug_PVT_SCIM_Ctrl_LivingPullUp_1: Boolean
 * Debug_PVT_SCIM_Ctrl_ParkedPullUp_1: Boolean
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
 * Debug_PVT_SCIM_RD_DAI1_1: Integer in interval [0...255]
 * Debug_PVT_SCIM_RD_DAI2_1: Integer in interval [0...255]
 * IOHWAB_BOOL: Boolean
 * IOHWAB_UINT16: Integer in interval [0...65535]
 * IOHWAB_UINT8: Integer in interval [0...255]
 * VGTT_EcuPinVoltage_0V2: Integer in interval [0...255]
 * VGTT_ScimAdiPinsState: Integer in interval [0...65535]
 * boolean: Boolean (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ABSInhibitRqstDenied: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_InactiveActive_Inactive (0U)
 *   Cx1_InactiveActive_Active (1U)
 *   Cx2_InactiveActive_Error (2U)
 *   Cx3_InactiveActive_NotAvailable (3U)
 *
 *********************************************************************************************************************/


#define PVTApp_AdiInterfaces_START_SEC_CODE
#include "PVTApp_AdiInterfaces_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_PvtAdInterfaces
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
 *   Debug_PVT_SCIM_Ctrl_DaiPullUp_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_DaiPullUp_1_Debug_PVT_SCIM_Ctrl_DaiPullUp(void)
 *   Debug_PVT_SCIM_Ctrl_LivingPullUp_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_LivingPullUp_Debug_PVT_SCIM_Ctrl_LivingPullUp(void)
 *   Debug_PVT_SCIM_Ctrl_ParkedPullUp_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_ParkedPullUp_Debug_PVT_SCIM_Ctrl_ParkedPullUp(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt(Debug_PVT_SCIM_RD_12VLivingVolt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt(Debug_PVT_SCIM_RD_12VParkedVolt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01(Debug_PVT_SCIM_RD_ADI01_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02(Debug_PVT_SCIM_RD_ADI02_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03(Debug_PVT_SCIM_RD_ADI03_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04(Debug_PVT_SCIM_RD_ADI04_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05(Debug_PVT_SCIM_RD_ADI05_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06(Debug_PVT_SCIM_RD_ADI06_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07(Debug_PVT_SCIM_RD_ADI07_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08(Debug_PVT_SCIM_RD_ADI08_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09(Debug_PVT_SCIM_RD_ADI09_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10(Debug_PVT_SCIM_RD_ADI10_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11(Debug_PVT_SCIM_RD_ADI11_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12(Debug_PVT_SCIM_RD_ADI12_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13(Debug_PVT_SCIM_RD_ADI13_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14(Debug_PVT_SCIM_RD_ADI14_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15(Debug_PVT_SCIM_RD_ADI15_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16(Debug_PVT_SCIM_RD_ADI16_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1(Debug_PVT_SCIM_RD_DAI1_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2(Debug_PVT_SCIM_RD_DAI2_1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_AdiInterfaces_P_GetAdiPinState(IOHWAB_UINT8 AdiPinRef, IOHWAB_UINT16 *AdiPinVoltage, VGTT_EcuPinVoltage_0V2 *LivingPullUpVoltage)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_AdiInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_AdiInterfaces_P_GetAdiPinStateAll(VGTT_ScimAdiPinsState *VoltageOnAdiPins, VGTT_EcuPinVoltage_0V2 *LivingPullUpVoltage)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_AdiInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_AdiInterfaces_P_GetPullUpState(VGTT_EcuPinVoltage_0V2 *PullUpVoltage_Living, VGTT_EcuPinVoltage_0V2 *PullUpVoltage_Parked, VGTT_EcuPinVoltage_0V2 *PullUpVoltage_DAI1, VGTT_EcuPinVoltage_0V2 *PullUpVoltage_DAI2)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_AdiInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_AdiInterfaces_P_SetPullUp(IOHWAB_BOOL ActivateLivingPullUp, IOHWAB_BOOL ActivateParkedPullUp, IOHWAB_BOOL ActivateDAIPullUp)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_AdiInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_PvtAdInterfaces_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PVTApp_AdiInterfaces_CODE) Re_PvtAdInterfaces(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_PvtAdInterfaces
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  Debug_PVT_SCIM_Ctrl_DaiPullUp_1 Read_Debug_PVT_SCIM_Ctrl_DaiPullUp_1_Debug_PVT_SCIM_Ctrl_DaiPullUp;
  Debug_PVT_SCIM_Ctrl_LivingPullUp_1 Read_Debug_PVT_SCIM_Ctrl_LivingPullUp_Debug_PVT_SCIM_Ctrl_LivingPullUp;
  Debug_PVT_SCIM_Ctrl_ParkedPullUp_1 Read_Debug_PVT_SCIM_Ctrl_ParkedPullUp_Debug_PVT_SCIM_Ctrl_ParkedPullUp;

  IOHWAB_UINT16 Call_AdiInterfaces_P_GetAdiPinState_AdiPinVoltage = 0U;
  VGTT_EcuPinVoltage_0V2 Call_AdiInterfaces_P_GetAdiPinState_LivingPullUpVoltage = 0U;
  VGTT_ScimAdiPinsState Call_AdiInterfaces_P_GetAdiPinStateAll_VoltageOnAdiPins = 0U;
  VGTT_EcuPinVoltage_0V2 Call_AdiInterfaces_P_GetAdiPinStateAll_LivingPullUpVoltage = 0U;
  VGTT_EcuPinVoltage_0V2 Call_AdiInterfaces_P_GetPullUpState_PullUpVoltage_Living = 0U;
  VGTT_EcuPinVoltage_0V2 Call_AdiInterfaces_P_GetPullUpState_PullUpVoltage_Parked = 0U;
  VGTT_EcuPinVoltage_0V2 Call_AdiInterfaces_P_GetPullUpState_PullUpVoltage_DAI1 = 0U;
  VGTT_EcuPinVoltage_0V2 Call_AdiInterfaces_P_GetPullUpState_PullUpVoltage_DAI2 = 0U;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  Read_Debug_PVT_SCIM_Ctrl_DaiPullUp_1_Debug_PVT_SCIM_Ctrl_DaiPullUp = TSC_PVTApp_AdiInterfaces_Rte_DRead_Debug_PVT_SCIM_Ctrl_DaiPullUp_1_Debug_PVT_SCIM_Ctrl_DaiPullUp();

  Read_Debug_PVT_SCIM_Ctrl_LivingPullUp_Debug_PVT_SCIM_Ctrl_LivingPullUp = TSC_PVTApp_AdiInterfaces_Rte_DRead_Debug_PVT_SCIM_Ctrl_LivingPullUp_Debug_PVT_SCIM_Ctrl_LivingPullUp();

  Read_Debug_PVT_SCIM_Ctrl_ParkedPullUp_Debug_PVT_SCIM_Ctrl_ParkedPullUp = TSC_PVTApp_AdiInterfaces_Rte_DRead_Debug_PVT_SCIM_Ctrl_ParkedPullUp_Debug_PVT_SCIM_Ctrl_ParkedPullUp();

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt(Rte_InitValue_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt(Rte_InitValue_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01(Rte_InitValue_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02(Rte_InitValue_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03(Rte_InitValue_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04(Rte_InitValue_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05(Rte_InitValue_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06(Rte_InitValue_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07(Rte_InitValue_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08(Rte_InitValue_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09(Rte_InitValue_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10(Rte_InitValue_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11(Rte_InitValue_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12(Rte_InitValue_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13(Rte_InitValue_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14(Rte_InitValue_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15(Rte_InitValue_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16(Rte_InitValue_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1(Rte_InitValue_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Write_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2(Rte_InitValue_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Call_AdiInterfaces_P_GetAdiPinState(0U, &Call_AdiInterfaces_P_GetAdiPinState_AdiPinVoltage, &Call_AdiInterfaces_P_GetAdiPinState_LivingPullUpVoltage);
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
    case RTE_E_AdiInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Call_AdiInterfaces_P_GetAdiPinStateAll(&Call_AdiInterfaces_P_GetAdiPinStateAll_VoltageOnAdiPins, &Call_AdiInterfaces_P_GetAdiPinStateAll_LivingPullUpVoltage);
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
    case RTE_E_AdiInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Call_AdiInterfaces_P_GetPullUpState(&Call_AdiInterfaces_P_GetPullUpState_PullUpVoltage_Living, &Call_AdiInterfaces_P_GetPullUpState_PullUpVoltage_Parked, &Call_AdiInterfaces_P_GetPullUpState_PullUpVoltage_DAI1, &Call_AdiInterfaces_P_GetPullUpState_PullUpVoltage_DAI2);
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
    case RTE_E_AdiInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_AdiInterfaces_Rte_Call_AdiInterfaces_P_SetPullUp(FALSE, FALSE, FALSE);
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
    case RTE_E_AdiInterface_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  PVTApp_AdiInterfaces_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define PVTApp_AdiInterfaces_STOP_SEC_CODE
#include "PVTApp_AdiInterfaces_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void PVTApp_AdiInterfaces_TestDefines(void)
{
  /* Enumeration Data Types */

  ABSInhibitRqstDenied Test_ABSInhibitRqstDenied_V_1 = Cx0_InactiveActive_Inactive;
  ABSInhibitRqstDenied Test_ABSInhibitRqstDenied_V_2 = Cx1_InactiveActive_Active;
  ABSInhibitRqstDenied Test_ABSInhibitRqstDenied_V_3 = Cx2_InactiveActive_Error;
  ABSInhibitRqstDenied Test_ABSInhibitRqstDenied_V_4 = Cx3_InactiveActive_NotAvailable;
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
