/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Telegram.c
 *        Config:  SCIM_BP.dpa
 *     SW-C Type:  Telegram
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <Telegram>
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
 * IOHWAB_UINT8
 *   
 *
 *
 * Component Types:
 * ================
 * Telegram
 *   
 *
 *
 * Runnable Entities:
 * ==================
 * RE_Clear_HighFixCheckTimer
 *   
 *
 * RE_Set_ValidFobFoundResult
 *   
 *
 *********************************************************************************************************************/

#include "Rte_Telegram.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_Telegram.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void Telegram_TestDefines(void);


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
 * Debug_PVT_PEPS_GainP1_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP1_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP2_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP2_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP3_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP3_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP4_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP4_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_Logic_stat: Integer in interval [0...7]
 * Debug_PVT_PEPS_P1_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_P2_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_P3_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_P4_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_VDSI_Ctrl: Integer in interval [0...1023]
 * Debug_PVT_PEPS_VDSI_stat: Integer in interval [0...1023]
 * IOHWAB_UINT8: Integer in interval [0...255]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Debug_PVT_PEPS_AntCtrl_stat: Enumeration of integer in interval [-4...3] with enumerators
 *   Cx4_PEPS_AntCtrl_P3_Antenna (-4)
 *   Cx5_PEPS_AntCtrl_P4_Antenna (-3)
 *   Cx0_PEPS_AntCtrl_None (0)
 *   Cx1_PEPS_AntCtrl_Pi_Antenna (1)
 *   Cx2_PEPS_AntCtrl_P1_Antenna (2)
 *   Cx3_PEPS_AntCtrl_P2_Antenna (3)
 * Debug_PVT_PEPS_Ant_Ctrl: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_None (0U)
 *   Cx1_Pi_Antenna (1U)
 *   Cx2_P1_Antenna (2U)
 *   Cx3_P2_Antenna (3U)
 *   Cx4_P3_Antenna (4U)
 *   Cx5_P4_Antenna (5U)
 *
 * Array Types:
 * ============
 * ArrayByteSize32: Array with 32 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define Telegram_START_SEC_CODE
#include "Telegram_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_Clear_HighFixCheckTimer
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <ClearHighFixCheckTimer_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_Clear_HighFixCheckTimer(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_Clear_HighFixCheckTimer_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Telegram_CODE) RE_Clear_HighFixCheckTimer(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_Clear_HighFixCheckTimer
 *********************************************************************************************************************/

  Telegram_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_SMK_Telegram
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
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl(Debug_PVT_PEPS_Ant_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl(Debug_PVT_PEPS_GainP1_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl(Debug_PVT_PEPS_GainP2_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl(Debug_PVT_PEPS_GainP3_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl(Debug_PVT_PEPS_GainP4_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl(Debug_PVT_PEPS_VDSI_Ctrl *data)
 *   Std_ReturnType Rte_Read_RficSysModeConfirm_P_SR_RficSysModeConfirm(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat(Debug_PVT_PEPS_AntCtrl_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat(Debug_PVT_PEPS_GainP1_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat(Debug_PVT_PEPS_GainP2_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat(Debug_PVT_PEPS_GainP3_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat(Debug_PVT_PEPS_GainP4_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat(Debug_PVT_PEPS_Logic_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI(Debug_PVT_PEPS_P1_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI(Debug_PVT_PEPS_P2_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI(Debug_PVT_PEPS_P3_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI(Debug_PVT_PEPS_P4_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat(Debug_PVT_PEPS_VDSI_stat data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_LfICInit_P_CS(uint8 Gain_vehicleOption)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_LficNRESDio_R_Write(IOHWAB_UINT8 SetValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Dio_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_RficInit_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SearchSysMode_P_CS(uint8 RFIC_SystemMode, uint8 RFIC_ReqCmd)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetupLfTelegram_P_CS(uint8 b_AntenaIndex, uint8 b_SearchPattern, uint16 Counter_LFRawDataBit, const uint8 *Buffer_LFRawData)
 *     Argument Buffer_LFRawData: uint8* is of type ArrayByteSize32
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_StopLfPeriodicTelegram_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_TimeoutTxTelegram_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_rficIRQActiveCheck_P_CS(uint8 kb_TerminalControlState)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_rficIRQPendingCheck_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_SMK_Telegram_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Telegram_CODE) RE_SMK_Telegram(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_SMK_Telegram
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  Debug_PVT_PEPS_Ant_Ctrl Read_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl;
  Debug_PVT_PEPS_GainP1_Ctrl Read_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl;
  Debug_PVT_PEPS_GainP2_Ctrl Read_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl;
  Debug_PVT_PEPS_GainP3_Ctrl Read_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl;
  Debug_PVT_PEPS_GainP4_Ctrl Read_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl;
  Debug_PVT_PEPS_VDSI_Ctrl Read_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl;
  uint8 Read_RficSysModeConfirm_P_SR_RficSysModeConfirm;

  ArrayByteSize32 Call_SetupLfTelegram_P_CS_Buffer_LFRawData = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U
};

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_Telegram_Rte_Read_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl(&Read_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl);
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

  fct_status = TSC_Telegram_Rte_Read_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl(&Read_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl);
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

  fct_status = TSC_Telegram_Rte_Read_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl(&Read_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl);
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

  fct_status = TSC_Telegram_Rte_Read_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl(&Read_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl);
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

  fct_status = TSC_Telegram_Rte_Read_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl(&Read_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl);
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

  fct_status = TSC_Telegram_Rte_Read_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl(&Read_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl);
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

  fct_status = TSC_Telegram_Rte_Read_RficSysModeConfirm_P_SR_RficSysModeConfirm(&Read_RficSysModeConfirm_P_SR_RficSysModeConfirm);
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

  fct_status = TSC_Telegram_Rte_Write_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat(Rte_InitValue_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_Telegram_Rte_Write_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat(Rte_InitValue_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_Telegram_Rte_Write_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat(Rte_InitValue_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_Telegram_Rte_Write_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat(Rte_InitValue_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_Telegram_Rte_Write_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat(Rte_InitValue_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_Telegram_Rte_Write_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat(Rte_InitValue_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_Telegram_Rte_Write_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI(Rte_InitValue_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_Telegram_Rte_Write_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI(Rte_InitValue_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_Telegram_Rte_Write_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI(Rte_InitValue_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_Telegram_Rte_Write_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI(Rte_InitValue_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_Telegram_Rte_Write_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat(Rte_InitValue_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_Telegram_Rte_Call_LfICInit_P_CS(0U);
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

  fct_status = TSC_Telegram_Rte_Call_LficNRESDio_R_Write(0U);
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
    case RTE_E_Dio_I_IoHwAbApplicationError:
      fct_error = 1;
      break;
  }

  fct_status = TSC_Telegram_Rte_Call_RficInit_P_CS();
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

  fct_status = TSC_Telegram_Rte_Call_SearchSysMode_P_CS(0U, 0U);
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

  fct_status = TSC_Telegram_Rte_Call_SetupLfTelegram_P_CS(0U, 0U, 0U, Call_SetupLfTelegram_P_CS_Buffer_LFRawData);
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

  fct_status = TSC_Telegram_Rte_Call_StopLfPeriodicTelegram_P_CS();
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

  fct_status = TSC_Telegram_Rte_Call_TimeoutTxTelegram_P_CS();
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

  fct_status = TSC_Telegram_Rte_Call_rficIRQActiveCheck_P_CS(0U);
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

  fct_status = TSC_Telegram_Rte_Call_rficIRQPendingCheck_P_CS();
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


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_Set_ValidFobFoundResult
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <SetValidFobFoundResult_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_Set_ValidFobFoundResult(uint8 fob_num)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_Set_ValidFobFoundResult_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Telegram_CODE) RE_Set_ValidFobFoundResult(uint8 fob_num) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_Set_ValidFobFoundResult
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Telegram_STOP_SEC_CODE
#include "Telegram_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void Telegram_TestDefines(void)
{
  /* Enumeration Data Types */

  Debug_PVT_PEPS_AntCtrl_stat Test_Debug_PVT_PEPS_AntCtrl_stat_V_1 = Cx4_PEPS_AntCtrl_P3_Antenna;
  Debug_PVT_PEPS_AntCtrl_stat Test_Debug_PVT_PEPS_AntCtrl_stat_V_2 = Cx5_PEPS_AntCtrl_P4_Antenna;
  Debug_PVT_PEPS_AntCtrl_stat Test_Debug_PVT_PEPS_AntCtrl_stat_V_3 = Cx0_PEPS_AntCtrl_None;
  Debug_PVT_PEPS_AntCtrl_stat Test_Debug_PVT_PEPS_AntCtrl_stat_V_4 = Cx1_PEPS_AntCtrl_Pi_Antenna;
  Debug_PVT_PEPS_AntCtrl_stat Test_Debug_PVT_PEPS_AntCtrl_stat_V_5 = Cx2_PEPS_AntCtrl_P1_Antenna;
  Debug_PVT_PEPS_AntCtrl_stat Test_Debug_PVT_PEPS_AntCtrl_stat_V_6 = Cx3_PEPS_AntCtrl_P2_Antenna;

  Debug_PVT_PEPS_Ant_Ctrl Test_Debug_PVT_PEPS_Ant_Ctrl_V_1 = Cx0_None;
  Debug_PVT_PEPS_Ant_Ctrl Test_Debug_PVT_PEPS_Ant_Ctrl_V_2 = Cx1_Pi_Antenna;
  Debug_PVT_PEPS_Ant_Ctrl Test_Debug_PVT_PEPS_Ant_Ctrl_V_3 = Cx2_P1_Antenna;
  Debug_PVT_PEPS_Ant_Ctrl Test_Debug_PVT_PEPS_Ant_Ctrl_V_4 = Cx3_P2_Antenna;
  Debug_PVT_PEPS_Ant_Ctrl Test_Debug_PVT_PEPS_Ant_Ctrl_V_5 = Cx4_P3_Antenna;
  Debug_PVT_PEPS_Ant_Ctrl Test_Debug_PVT_PEPS_Ant_Ctrl_V_6 = Cx5_P4_Antenna;
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
