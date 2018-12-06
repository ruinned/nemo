/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  BswM.c
 *        Config:  SCIM_BP.dpa
 *     SW-C Type:  BswM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <BswM>
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
 * BswM_BswMRteMDG_LIN1Schedule
 *   
 *
 * BswM_BswMRteMDG_LIN2Schedule
 *   
 *
 * BswM_BswMRteMDG_LIN3Schedule
 *   
 *
 * BswM_BswMRteMDG_LIN4Schedule
 *   
 *
 * BswM_BswMRteMDG_LIN5Schedule
 *   
 *
 * BswM_ESH_Mode
 *   
 *
 * BswM_ESH_RunRequest
 *   
 *
 *********************************************************************************************************************/

#include "Rte_BswM.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_BswM.h"
#include "SchM_BswM.h"
#include "TSC_SchM_BswM.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void BswM_TestDefines(void);

typedef P2FUNC(Std_ReturnType, RTE_CODE, FncPtrType)(void); /* PRQA S 3448 */ /* MD_Rte_TestCode */


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
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
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
 * BswM_ESH_Mode: Enumeration of integer in interval [0...255] with enumerators
 *   STARTUP (0U)
 *   RUN (1U)
 *   POSTRUN (2U)
 *   WAKEUP (3U)
 *   SHUTDOWN (4U)
 * BswM_ESH_RunRequest: Enumeration of integer in interval [0...255] with enumerators
 *   RELEASED (0U)
 *   REQUESTED (1U)
 *
 *********************************************************************************************************************/


#define BswM_START_SEC_CODE
#include "BswM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: BswM_MainFunction
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
 *   Std_ReturnType Rte_Read_Request_ESH_PostRunRequest_0_requestedMode(BswM_ESH_RunRequest *data)
 *   Std_ReturnType Rte_Read_Request_ESH_PostRunRequest_1_requestedMode(BswM_ESH_RunRequest *data)
 *   Std_ReturnType Rte_Read_Request_ESH_RunRequest_0_requestedMode(BswM_ESH_RunRequest *data)
 *   Std_ReturnType Rte_Read_Request_ESH_RunRequest_1_requestedMode(BswM_ESH_RunRequest *data)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(BswM_ESH_Mode mode)
 *   Modes of Rte_ModeType_ESH_Mode:
 *   - RTE_MODE_ESH_Mode_POSTRUN
 *   - RTE_MODE_ESH_Mode_RUN
 *   - RTE_MODE_ESH_Mode_SHUTDOWN
 *   - RTE_MODE_ESH_Mode_STARTUP
 *   - RTE_MODE_ESH_Mode_WAKEUP
 *   - RTE_TRANSITION_ESH_Mode
 *   BswM_ESH_Mode Rte_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode(void)
 *   Modes of Rte_ModeType_ESH_Mode:
 *   - RTE_MODE_ESH_Mode_POSTRUN
 *   - RTE_MODE_ESH_Mode_RUN
 *   - RTE_MODE_ESH_Mode_SHUTDOWN
 *   - RTE_MODE_ESH_Mode_STARTUP
 *   - RTE_MODE_ESH_Mode_WAKEUP
 *   - RTE_TRANSITION_ESH_Mode
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_MainFunction_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BswM_CODE) BswM_MainFunction(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_MainFunction
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  BswM_ESH_RunRequest Read_Request_ESH_PostRunRequest_0_requestedMode;
  BswM_ESH_RunRequest Read_Request_ESH_PostRunRequest_1_requestedMode;
  BswM_ESH_RunRequest Read_Request_ESH_RunRequest_0_requestedMode;
  BswM_ESH_RunRequest Read_Request_ESH_RunRequest_1_requestedMode;

  Rte_ModeType_ESH_Mode Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Read_Request_ESH_PostRunRequest_0_requestedMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Read_Request_ESH_PostRunRequest_0_requestedMode(&Read_Request_ESH_PostRunRequest_0_requestedMode);
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

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Read_Request_ESH_PostRunRequest_1_requestedMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Read_Request_ESH_PostRunRequest_1_requestedMode(&Read_Request_ESH_PostRunRequest_1_requestedMode);
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

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Read_Request_ESH_RunRequest_0_requestedMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Read_Request_ESH_RunRequest_0_requestedMode(&Read_Request_ESH_RunRequest_0_requestedMode);
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

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Read_Request_ESH_RunRequest_1_requestedMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Read_Request_ESH_RunRequest_1_requestedMode(&Read_Request_ESH_RunRequest_1_requestedMode);
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

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Switch_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Switch_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(RTE_MODE_ESH_Mode_STARTUP);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_LIMIT:
      fct_error = 1;
      break;
  }

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode = TSC_BswM_Rte_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode();

  TSC_BswM_SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0();
  TSC_BswM_SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0();

  BswM_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: BswM_Read_LIN1_ScheduleTableRequestMode
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <requestedMode> of PortPrototype <Request_LIN1_ScheduleTableRequestMode>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Request_LIN1_ScheduleTableRequestMode_requestedMode(BswM_BswMRteMDG_LIN1Schedule *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_Read_LIN1_ScheduleTableRequestMode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BswM_CODE) BswM_Read_LIN1_ScheduleTableRequestMode(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_Read_LIN1_ScheduleTableRequestMode
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  BswM_BswMRteMDG_LIN1Schedule Read_Request_LIN1_ScheduleTableRequestMode_requestedMode;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Read_Request_LIN1_ScheduleTableRequestMode_requestedMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Read_Request_LIN1_ScheduleTableRequestMode_requestedMode(&Read_Request_LIN1_ScheduleTableRequestMode_requestedMode);
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


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: BswM_Read_LIN2_ScheduleTableRequestMode
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <requestedMode> of PortPrototype <Request_LIN2_ScheduleTableRequestMode>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Request_LIN2_ScheduleTableRequestMode_requestedMode(BswM_BswMRteMDG_LIN2Schedule *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_Read_LIN2_ScheduleTableRequestMode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BswM_CODE) BswM_Read_LIN2_ScheduleTableRequestMode(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_Read_LIN2_ScheduleTableRequestMode
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  BswM_BswMRteMDG_LIN2Schedule Read_Request_LIN2_ScheduleTableRequestMode_requestedMode;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Read_Request_LIN2_ScheduleTableRequestMode_requestedMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Read_Request_LIN2_ScheduleTableRequestMode_requestedMode(&Read_Request_LIN2_ScheduleTableRequestMode_requestedMode);
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


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: BswM_Read_LIN3_ScheduleTableRequestMode
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <requestedMode> of PortPrototype <Request_LIN3_ScheduleTableRequestMode>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Request_LIN3_ScheduleTableRequestMode_requestedMode(BswM_BswMRteMDG_LIN3Schedule *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_Read_LIN3_ScheduleTableRequestMode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BswM_CODE) BswM_Read_LIN3_ScheduleTableRequestMode(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_Read_LIN3_ScheduleTableRequestMode
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  BswM_BswMRteMDG_LIN3Schedule Read_Request_LIN3_ScheduleTableRequestMode_requestedMode;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Read_Request_LIN3_ScheduleTableRequestMode_requestedMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Read_Request_LIN3_ScheduleTableRequestMode_requestedMode(&Read_Request_LIN3_ScheduleTableRequestMode_requestedMode);
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


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: BswM_Read_LIN4_ScheduleTableRequestMode
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <requestedMode> of PortPrototype <Request_LIN4_ScheduleTableRequestMode>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Request_LIN4_ScheduleTableRequestMode_requestedMode(BswM_BswMRteMDG_LIN4Schedule *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_Read_LIN4_ScheduleTableRequestMode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BswM_CODE) BswM_Read_LIN4_ScheduleTableRequestMode(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_Read_LIN4_ScheduleTableRequestMode
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  BswM_BswMRteMDG_LIN4Schedule Read_Request_LIN4_ScheduleTableRequestMode_requestedMode;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Read_Request_LIN4_ScheduleTableRequestMode_requestedMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Read_Request_LIN4_ScheduleTableRequestMode_requestedMode(&Read_Request_LIN4_ScheduleTableRequestMode_requestedMode);
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


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: BswM_Read_LIN5_ScheduleTableRequestMode
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <requestedMode> of PortPrototype <Request_LIN5_ScheduleTableRequestMode>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Request_LIN5_ScheduleTableRequestMode_requestedMode(BswM_BswMRteMDG_LIN5Schedule *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_Read_LIN5_ScheduleTableRequestMode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BswM_CODE) BswM_Read_LIN5_ScheduleTableRequestMode(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: BswM_Read_LIN5_ScheduleTableRequestMode
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  BswM_BswMRteMDG_LIN5Schedule Read_Request_LIN5_ScheduleTableRequestMode_requestedMode;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType BswM_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    BswM_FctPtr = (FncPtrType)Rte_Read_Request_LIN5_ScheduleTableRequestMode_requestedMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_BswM_Rte_Read_Request_LIN5_ScheduleTableRequestMode_requestedMode(&Read_Request_LIN5_ScheduleTableRequestMode_requestedMode);
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


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define BswM_STOP_SEC_CODE
#include "BswM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void BswM_TestDefines(void)
{
  /* Enumeration Data Types */

  BswM_BswMRteMDG_LIN1Schedule Test_BswM_BswMRteMDG_LIN1Schedule_V_1 = LIN1_Table1;
  BswM_BswMRteMDG_LIN1Schedule Test_BswM_BswMRteMDG_LIN1Schedule_V_2 = LIN1_Table2;
  BswM_BswMRteMDG_LIN1Schedule Test_BswM_BswMRteMDG_LIN1Schedule_V_3 = LIN1_Table_E;
  BswM_BswMRteMDG_LIN1Schedule Test_BswM_BswMRteMDG_LIN1Schedule_V_4 = LIN1_MasterReq_SlaveResp_Table1;
  BswM_BswMRteMDG_LIN1Schedule Test_BswM_BswMRteMDG_LIN1Schedule_V_5 = LIN1_MasterReq_SlaveResp_Table2;
  BswM_BswMRteMDG_LIN1Schedule Test_BswM_BswMRteMDG_LIN1Schedule_V_6 = LIN1_NULL;
  BswM_BswMRteMDG_LIN1Schedule Test_BswM_BswMRteMDG_LIN1Schedule_V_7 = LIN1_MasterReq_SlaveResp;

  BswM_BswMRteMDG_LIN2Schedule Test_BswM_BswMRteMDG_LIN2Schedule_V_1 = LIN2_NULL;
  BswM_BswMRteMDG_LIN2Schedule Test_BswM_BswMRteMDG_LIN2Schedule_V_2 = LIN2_TABLE0;
  BswM_BswMRteMDG_LIN2Schedule Test_BswM_BswMRteMDG_LIN2Schedule_V_3 = LIN2_TABLE_E;
  BswM_BswMRteMDG_LIN2Schedule Test_BswM_BswMRteMDG_LIN2Schedule_V_4 = LIN2_MasterReq_SlaveResp_TABLE0;
  BswM_BswMRteMDG_LIN2Schedule Test_BswM_BswMRteMDG_LIN2Schedule_V_5 = LIN2_MasterReq_SlaveResp;

  BswM_BswMRteMDG_LIN3Schedule Test_BswM_BswMRteMDG_LIN3Schedule_V_1 = LIN3_NULL;
  BswM_BswMRteMDG_LIN3Schedule Test_BswM_BswMRteMDG_LIN3Schedule_V_2 = LIN3_TABLE1;
  BswM_BswMRteMDG_LIN3Schedule Test_BswM_BswMRteMDG_LIN3Schedule_V_3 = LIN3_TABLE2;
  BswM_BswMRteMDG_LIN3Schedule Test_BswM_BswMRteMDG_LIN3Schedule_V_4 = LIN3_TABLE_E;
  BswM_BswMRteMDG_LIN3Schedule Test_BswM_BswMRteMDG_LIN3Schedule_V_5 = LIN3_MasterReq_SlaveResp_Table1;
  BswM_BswMRteMDG_LIN3Schedule Test_BswM_BswMRteMDG_LIN3Schedule_V_6 = LIN3_MasterReq_SlaveResp_Table2;
  BswM_BswMRteMDG_LIN3Schedule Test_BswM_BswMRteMDG_LIN3Schedule_V_7 = LIN3_MasterReq_SlaveResp;

  BswM_BswMRteMDG_LIN4Schedule Test_BswM_BswMRteMDG_LIN4Schedule_V_1 = LIN4_NULL;
  BswM_BswMRteMDG_LIN4Schedule Test_BswM_BswMRteMDG_LIN4Schedule_V_2 = LIN4_MasterReq_SlaveResp_Table1;
  BswM_BswMRteMDG_LIN4Schedule Test_BswM_BswMRteMDG_LIN4Schedule_V_3 = LIN4_TABLE1;
  BswM_BswMRteMDG_LIN4Schedule Test_BswM_BswMRteMDG_LIN4Schedule_V_4 = LIN4_TABLE2;
  BswM_BswMRteMDG_LIN4Schedule Test_BswM_BswMRteMDG_LIN4Schedule_V_5 = LIN4_TABLE_E;
  BswM_BswMRteMDG_LIN4Schedule Test_BswM_BswMRteMDG_LIN4Schedule_V_6 = LIN4_MasterReq_SlaveResp_Table2;
  BswM_BswMRteMDG_LIN4Schedule Test_BswM_BswMRteMDG_LIN4Schedule_V_7 = LIN4_MasterReq_SlaveResp;

  BswM_BswMRteMDG_LIN5Schedule Test_BswM_BswMRteMDG_LIN5Schedule_V_1 = LIN5_NULL;
  BswM_BswMRteMDG_LIN5Schedule Test_BswM_BswMRteMDG_LIN5Schedule_V_2 = LIN5_TABLE1;
  BswM_BswMRteMDG_LIN5Schedule Test_BswM_BswMRteMDG_LIN5Schedule_V_3 = LIN5_MasterReq_SlaveResp_Table1;
  BswM_BswMRteMDG_LIN5Schedule Test_BswM_BswMRteMDG_LIN5Schedule_V_4 = LIN5_MasterReq_SlaveResp_Table2;
  BswM_BswMRteMDG_LIN5Schedule Test_BswM_BswMRteMDG_LIN5Schedule_V_5 = LIN5_MasterReq_SlaveResp;
  BswM_BswMRteMDG_LIN5Schedule Test_BswM_BswMRteMDG_LIN5Schedule_V_6 = LIN5_TABLE2;
  BswM_BswMRteMDG_LIN5Schedule Test_BswM_BswMRteMDG_LIN5Schedule_V_7 = LIN5_TABLE_E;

  BswM_ESH_Mode Test_BswM_ESH_Mode_V_1 = STARTUP;
  BswM_ESH_Mode Test_BswM_ESH_Mode_V_2 = RUN;
  BswM_ESH_Mode Test_BswM_ESH_Mode_V_3 = POSTRUN;
  BswM_ESH_Mode Test_BswM_ESH_Mode_V_4 = WAKEUP;
  BswM_ESH_Mode Test_BswM_ESH_Mode_V_5 = SHUTDOWN;

  BswM_ESH_RunRequest Test_BswM_ESH_RunRequest_V_1 = RELEASED;
  BswM_ESH_RunRequest Test_BswM_ESH_RunRequest_V_2 = REQUESTED;

  /* Modes */

  BswM_BswMRteMDG_LIN1Schedule Test_BswMRteMDG_LIN1Schedule_MV_1 = RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_MasterReq_SlaveResp;
  BswM_BswMRteMDG_LIN1Schedule Test_BswMRteMDG_LIN1Schedule_MV_2 = RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_MasterReq_SlaveResp_Table1;
  BswM_BswMRteMDG_LIN1Schedule Test_BswMRteMDG_LIN1Schedule_MV_3 = RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_MasterReq_SlaveResp_Table2;
  BswM_BswMRteMDG_LIN1Schedule Test_BswMRteMDG_LIN1Schedule_MV_4 = RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_NULL;
  BswM_BswMRteMDG_LIN1Schedule Test_BswMRteMDG_LIN1Schedule_MV_5 = RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_Table1;
  BswM_BswMRteMDG_LIN1Schedule Test_BswMRteMDG_LIN1Schedule_MV_6 = RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_Table2;
  BswM_BswMRteMDG_LIN1Schedule Test_BswMRteMDG_LIN1Schedule_MV_7 = RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_Table_E;
  BswM_BswMRteMDG_LIN1Schedule Test_BswMRteMDG_LIN1Schedule_TV = RTE_TRANSITION_BswMRteMDG_LIN1Schedule;

  BswM_BswMRteMDG_LIN2Schedule Test_BswMRteMDG_LIN2Schedule_MV_1 = RTE_MODE_BswMRteMDG_LIN2Schedule_LIN2_MasterReq_SlaveResp;
  BswM_BswMRteMDG_LIN2Schedule Test_BswMRteMDG_LIN2Schedule_MV_2 = RTE_MODE_BswMRteMDG_LIN2Schedule_LIN2_MasterReq_SlaveResp_TABLE0;
  BswM_BswMRteMDG_LIN2Schedule Test_BswMRteMDG_LIN2Schedule_MV_3 = RTE_MODE_BswMRteMDG_LIN2Schedule_LIN2_NULL;
  BswM_BswMRteMDG_LIN2Schedule Test_BswMRteMDG_LIN2Schedule_MV_4 = RTE_MODE_BswMRteMDG_LIN2Schedule_LIN2_TABLE0;
  BswM_BswMRteMDG_LIN2Schedule Test_BswMRteMDG_LIN2Schedule_MV_5 = RTE_MODE_BswMRteMDG_LIN2Schedule_LIN2_TABLE_E;
  BswM_BswMRteMDG_LIN2Schedule Test_BswMRteMDG_LIN2Schedule_TV = RTE_TRANSITION_BswMRteMDG_LIN2Schedule;

  BswM_BswMRteMDG_LIN3Schedule Test_BswMRteMDG_LIN3Schedule_MV_1 = RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_MasterReq_SlaveResp;
  BswM_BswMRteMDG_LIN3Schedule Test_BswMRteMDG_LIN3Schedule_MV_2 = RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_MasterReq_SlaveResp_Table1;
  BswM_BswMRteMDG_LIN3Schedule Test_BswMRteMDG_LIN3Schedule_MV_3 = RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_MasterReq_SlaveResp_Table2;
  BswM_BswMRteMDG_LIN3Schedule Test_BswMRteMDG_LIN3Schedule_MV_4 = RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_NULL;
  BswM_BswMRteMDG_LIN3Schedule Test_BswMRteMDG_LIN3Schedule_MV_5 = RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_TABLE1;
  BswM_BswMRteMDG_LIN3Schedule Test_BswMRteMDG_LIN3Schedule_MV_6 = RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_TABLE2;
  BswM_BswMRteMDG_LIN3Schedule Test_BswMRteMDG_LIN3Schedule_MV_7 = RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_TABLE_E;
  BswM_BswMRteMDG_LIN3Schedule Test_BswMRteMDG_LIN3Schedule_TV = RTE_TRANSITION_BswMRteMDG_LIN3Schedule;

  BswM_BswMRteMDG_LIN4Schedule Test_BswMRteMDG_LIN4Schedule_MV_1 = RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_MasterReq_SlaveResp;
  BswM_BswMRteMDG_LIN4Schedule Test_BswMRteMDG_LIN4Schedule_MV_2 = RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_MasterReq_SlaveResp_Table1;
  BswM_BswMRteMDG_LIN4Schedule Test_BswMRteMDG_LIN4Schedule_MV_3 = RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_MasterReq_SlaveResp_Table2;
  BswM_BswMRteMDG_LIN4Schedule Test_BswMRteMDG_LIN4Schedule_MV_4 = RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_NULL;
  BswM_BswMRteMDG_LIN4Schedule Test_BswMRteMDG_LIN4Schedule_MV_5 = RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_TABLE1;
  BswM_BswMRteMDG_LIN4Schedule Test_BswMRteMDG_LIN4Schedule_MV_6 = RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_TABLE2;
  BswM_BswMRteMDG_LIN4Schedule Test_BswMRteMDG_LIN4Schedule_MV_7 = RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_TABLE_E;
  BswM_BswMRteMDG_LIN4Schedule Test_BswMRteMDG_LIN4Schedule_TV = RTE_TRANSITION_BswMRteMDG_LIN4Schedule;

  BswM_BswMRteMDG_LIN5Schedule Test_BswMRteMDG_LIN5Schedule_MV_1 = RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_MasterReq_SlaveResp;
  BswM_BswMRteMDG_LIN5Schedule Test_BswMRteMDG_LIN5Schedule_MV_2 = RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_MasterReq_SlaveResp_Table1;
  BswM_BswMRteMDG_LIN5Schedule Test_BswMRteMDG_LIN5Schedule_MV_3 = RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_MasterReq_SlaveResp_Table2;
  BswM_BswMRteMDG_LIN5Schedule Test_BswMRteMDG_LIN5Schedule_MV_4 = RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_NULL;
  BswM_BswMRteMDG_LIN5Schedule Test_BswMRteMDG_LIN5Schedule_MV_5 = RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_TABLE1;
  BswM_BswMRteMDG_LIN5Schedule Test_BswMRteMDG_LIN5Schedule_MV_6 = RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_TABLE2;
  BswM_BswMRteMDG_LIN5Schedule Test_BswMRteMDG_LIN5Schedule_MV_7 = RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_TABLE_E;
  BswM_BswMRteMDG_LIN5Schedule Test_BswMRteMDG_LIN5Schedule_TV = RTE_TRANSITION_BswMRteMDG_LIN5Schedule;

  BswM_ESH_Mode Test_ESH_Mode_MV_1 = RTE_MODE_ESH_Mode_POSTRUN;
  BswM_ESH_Mode Test_ESH_Mode_MV_2 = RTE_MODE_ESH_Mode_RUN;
  BswM_ESH_Mode Test_ESH_Mode_MV_3 = RTE_MODE_ESH_Mode_SHUTDOWN;
  BswM_ESH_Mode Test_ESH_Mode_MV_4 = RTE_MODE_ESH_Mode_STARTUP;
  BswM_ESH_Mode Test_ESH_Mode_MV_5 = RTE_MODE_ESH_Mode_WAKEUP;
  BswM_ESH_Mode Test_ESH_Mode_TV = RTE_TRANSITION_ESH_Mode;

  BswM_ESH_RunRequest Test_ESH_RunRequest_MV_1 = RTE_MODE_ESH_RunRequest_RELEASED;
  BswM_ESH_RunRequest Test_ESH_RunRequest_MV_2 = RTE_MODE_ESH_RunRequest_REQUESTED;
  BswM_ESH_RunRequest Test_ESH_RunRequest_TV = RTE_TRANSITION_ESH_RunRequest;
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
