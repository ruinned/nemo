/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TP.c
 *        Config:  SCIM_BP.dpa
 *     SW-C Type:  TP
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <TP>
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

#include "Rte_TP.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_TP.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void TP_TestDefines(void);


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
 * Debug_PVT_PEPS_AntP1_X: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntP1_X_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntP1_Y: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntP1_Y_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_X: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_X_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_Y: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_Y_Ctrl: Integer in interval [-8192...8191]
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Debug_PVT_PEPS_Logic_Ctrl: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_None (0U)
 *   Cx1_For_PS_only_Pi (1U)
 *   Cx2_For_PS_only_Pi_P1 (2U)
 *   Cx3_For_PS_PE_Pi_P1_P2_P3 (3U)
 *
 * Array Types:
 * ============
 * ArrayByteSize16: Array with 16 element(s) of type uint8
 * ArrayByteSize3: Array with 3 element(s) of type uint8
 * ArrayByteSize8: Array with 8 element(s) of type uint8
 *
 * Union Types:
 * =============
 * tVAR: Union with elements
 *   new_input of type uint8
 *   old_input of type uint8
 *
 *********************************************************************************************************************/


#define TP_START_SEC_CODE
#include "TP_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_SMK_TP
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 20ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl(Debug_PVT_PEPS_AntP1_X_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl(Debug_PVT_PEPS_AntP1_Y_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl(Debug_PVT_PEPS_AntPi_X_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl(Debug_PVT_PEPS_AntPi_Y_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl(Debug_PVT_PEPS_Logic_Ctrl *data)
 *   Std_ReturnType Rte_Read_b_DST_ResponseNG_R_SR(uint8 *data)
 *   Std_ReturnType Rte_Read_b_DST_RxCompleteFlag_R_SR(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X(Debug_PVT_PEPS_AntP1_X data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y(Debug_PVT_PEPS_AntP1_Y data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X(Debug_PVT_PEPS_AntPi_X data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y(Debug_PVT_PEPS_AntPi_Y data)
 *   Std_ReturnType Rte_Write_b_DST_ResponseNG_P_SR(uint8 data)
 *   Std_ReturnType Rte_Write_b_DST_RxCompleteFlag_P_SR(uint8 data)
 *   Std_ReturnType Rte_Write_st_DstBlock_P_challenge(const uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize8
 *   Std_ReturnType Rte_Write_st_DstBlock_P_encryption(const uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize16
 *   Std_ReturnType Rte_Write_st_DstBlock_P_security_key_number(const uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize3
 *   Std_ReturnType Rte_Write_st_DstBlock_P_vehicle_serial(const uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize3
 *   Std_ReturnType Rte_Write_st_DstBlock_P_write_fob_number(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetupDST_Telegram_P_CS(uint8 dst_order)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_TimeoutTxTelegram_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_SMK_TP_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TP_CODE) RE_SMK_TP(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_SMK_TP
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  Debug_PVT_PEPS_AntP1_X_Ctrl Read_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl;
  Debug_PVT_PEPS_AntP1_Y_Ctrl Read_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl;
  Debug_PVT_PEPS_AntPi_X_Ctrl Read_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl;
  Debug_PVT_PEPS_AntPi_Y_Ctrl Read_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl;
  Debug_PVT_PEPS_Logic_Ctrl Read_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl;
  uint8 Read_b_DST_ResponseNG_R_SR;
  uint8 Read_b_DST_RxCompleteFlag_R_SR;

  ArrayByteSize8 Write_st_DstBlock_P_challenge;
  ArrayByteSize16 Write_st_DstBlock_P_encryption;
  ArrayByteSize3 Write_st_DstBlock_P_security_key_number;
  ArrayByteSize3 Write_st_DstBlock_P_vehicle_serial;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_TP_Rte_Read_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl(&Read_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl);
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

  fct_status = TSC_TP_Rte_Read_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl(&Read_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl);
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

  fct_status = TSC_TP_Rte_Read_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl(&Read_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl);
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

  fct_status = TSC_TP_Rte_Read_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl(&Read_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl);
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

  fct_status = TSC_TP_Rte_Read_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl(&Read_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl);
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

  fct_status = TSC_TP_Rte_Read_b_DST_ResponseNG_R_SR(&Read_b_DST_ResponseNG_R_SR);
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

  fct_status = TSC_TP_Rte_Read_b_DST_RxCompleteFlag_R_SR(&Read_b_DST_RxCompleteFlag_R_SR);
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

  fct_status = TSC_TP_Rte_Write_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X(Rte_InitValue_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TP_Rte_Write_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y(Rte_InitValue_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TP_Rte_Write_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X(Rte_InitValue_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TP_Rte_Write_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y(Rte_InitValue_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TP_Rte_Write_b_DST_ResponseNG_P_SR(Rte_InitValue_b_DST_ResponseNG_P_SR);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TP_Rte_Write_b_DST_RxCompleteFlag_P_SR(Rte_InitValue_b_DST_RxCompleteFlag_P_SR);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  (void)memset(&Write_st_DstBlock_P_challenge, 0, sizeof(Write_st_DstBlock_P_challenge));
  fct_status = TSC_TP_Rte_Write_st_DstBlock_P_challenge(Write_st_DstBlock_P_challenge);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  (void)memset(&Write_st_DstBlock_P_encryption, 0, sizeof(Write_st_DstBlock_P_encryption));
  fct_status = TSC_TP_Rte_Write_st_DstBlock_P_encryption(Write_st_DstBlock_P_encryption);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  (void)memset(&Write_st_DstBlock_P_security_key_number, 0, sizeof(Write_st_DstBlock_P_security_key_number));
  fct_status = TSC_TP_Rte_Write_st_DstBlock_P_security_key_number(Write_st_DstBlock_P_security_key_number);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  (void)memset(&Write_st_DstBlock_P_vehicle_serial, 0, sizeof(Write_st_DstBlock_P_vehicle_serial));
  fct_status = TSC_TP_Rte_Write_st_DstBlock_P_vehicle_serial(Write_st_DstBlock_P_vehicle_serial);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TP_Rte_Write_st_DstBlock_P_write_fob_number(Rte_InitValue_st_DstBlock_P_write_fob_number);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_TP_Rte_Call_SetupDST_Telegram_P_CS(0U);
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
  }

  fct_status = TSC_TP_Rte_Call_TimeoutTxTelegram_P_CS();
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
  }

  TP_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define TP_STOP_SEC_CODE
#include "TP_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void TP_TestDefines(void)
{
  /* Enumeration Data Types */

  Debug_PVT_PEPS_Logic_Ctrl Test_Debug_PVT_PEPS_Logic_Ctrl_V_1 = Cx0_None;
  Debug_PVT_PEPS_Logic_Ctrl Test_Debug_PVT_PEPS_Logic_Ctrl_V_2 = Cx1_For_PS_only_Pi;
  Debug_PVT_PEPS_Logic_Ctrl Test_Debug_PVT_PEPS_Logic_Ctrl_V_3 = Cx2_For_PS_only_Pi_P1;
  Debug_PVT_PEPS_Logic_Ctrl Test_Debug_PVT_PEPS_Logic_Ctrl_V_4 = Cx3_For_PS_PE_Pi_P1_P2_P3;
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
