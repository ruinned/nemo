/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  StartApplicationTrusted.c
 *        Config:  SCIM_BP.dpa
 *     SW-C Type:  StartApplicationTrusted
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <StartApplicationTrusted>
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

#include "Rte_StartApplicationTrusted.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_StartApplicationTrusted.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

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
 *********************************************************************************************************************/


#define StartApplicationTrusted_START_SEC_CODE
#include "StartApplicationTrusted_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StartApplicationTrusted_OnDataRec_TrustedData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeValue> of PortPrototype <PpTrustedData>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpTrustedData_DeValue(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpTrustedDataVerification_DeValue(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint8 Rte_IrvRead_StartApplicationTrusted_OnDataRec_TrustedData_IrvValue(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_StartApplicationTrusted_OnDataRec_TrustedData_IrvValue(uint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplicationTrusted_OnDataRec_TrustedData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StartApplicationTrusted_CODE) StartApplicationTrusted_OnDataRec_TrustedData(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplicationTrusted_OnDataRec_TrustedData
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 Read_PpTrustedData_DeValue;

  uint8 StartApplicationTrusted_OnDataRec_TrustedData_IrvValue;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType StartApplicationTrusted_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplicationTrusted_FctPtr = (FncPtrType)Rte_Read_PpTrustedData_DeValue; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplicationTrusted_Rte_Read_PpTrustedData_DeValue(&Read_PpTrustedData_DeValue);
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
    FncPtrType StartApplicationTrusted_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplicationTrusted_FctPtr = (FncPtrType)Rte_Write_PpTrustedDataVerification_DeValue; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplicationTrusted_Rte_Write_PpTrustedDataVerification_DeValue(Rte_InitValue_PpTrustedDataVerification_DeValue);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  StartApplicationTrusted_OnDataRec_TrustedData_IrvValue = TSC_StartApplicationTrusted_Rte_IrvRead_StartApplicationTrusted_OnDataRec_TrustedData_IrvValue();

  TSC_StartApplicationTrusted_Rte_IrvWrite_StartApplicationTrusted_OnDataRec_TrustedData_IrvValue(0U);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StartApplicationTrusted_TriggerMemoryAccesViolation
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Write> of PortPrototype <PpTrustedDataInvalid>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpTrustedDataVerification_DeValue(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint8 Rte_IrvRead_StartApplicationTrusted_TriggerMemoryAccesViolation_IrvValue(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_StartApplicationTrusted_TriggerMemoryAccesViolation_IrvValue(uint8 data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void StartApplicationTrusted_TriggerMemoryAccesViolation(uint8 Value)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplicationTrusted_TriggerMemoryAccesViolation_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StartApplicationTrusted_CODE) StartApplicationTrusted_TriggerMemoryAccesViolation(uint8 Value) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplicationTrusted_TriggerMemoryAccesViolation
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint8 StartApplicationTrusted_TriggerMemoryAccesViolation_IrvValue;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType StartApplicationTrusted_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplicationTrusted_FctPtr = (FncPtrType)Rte_Write_PpTrustedDataVerification_DeValue; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplicationTrusted_Rte_Write_PpTrustedDataVerification_DeValue(Rte_InitValue_PpTrustedDataVerification_DeValue);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  StartApplicationTrusted_TriggerMemoryAccesViolation_IrvValue = TSC_StartApplicationTrusted_Rte_IrvRead_StartApplicationTrusted_TriggerMemoryAccesViolation_IrvValue();

  TSC_StartApplicationTrusted_Rte_IrvWrite_StartApplicationTrusted_TriggerMemoryAccesViolation_IrvValue(0U);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define StartApplicationTrusted_STOP_SEC_CODE
#include "StartApplicationTrusted_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_TestCode:
     Reason:     This justification is used within the generated test code by the Rte Analyzer.
     Risk:       No functional risk.
     Prevention: Not required.

*/
