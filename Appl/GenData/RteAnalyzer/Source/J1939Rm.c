/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  J1939Rm.c
 *        Config:  SCIM_BP.dpa
 *     SW-C Type:  J1939Rm
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <J1939Rm>
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
 * J1939Rm_AckCode
 *   
 *
 * J1939Rm_ExtIdInfoType
 *   
 *
 * J1939Rm_ExtIdType
 *   
 *
 *********************************************************************************************************************/

#include "Rte_J1939Rm.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_J1939Rm.h"
#include "SchM_J1939Rm.h"
#include "TSC_SchM_J1939Rm.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void J1939Rm_TestDefines(void);


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
 * J1939Rm_AckCode: Enumeration of integer in interval [0...3] with enumerators
 *   J1939RM_ACK_POSITIVE (0U)
 *   J1939RM_ACK_NEGATIVE (1U)
 *   J1939RM_ACK_ACCESS_DENIED (2U)
 *   J1939RM_ACK_CANNOT_RESPOND (3U)
 * J1939Rm_ExtIdType: Enumeration of integer in interval [0...4] with enumerators
 *   J1939RM_EXTID_NONE (0U)
 *   J1939RM_EXTID_ONE (1U)
 *   J1939RM_EXTID_TWO (2U)
 *   J1939RM_EXTID_THREE (3U)
 *   J1939RM_EXTID_GF (4U)
 *
 * Record Types:
 * =============
 * J1939Rm_ExtIdInfoType: Record with elements
 *   ExtIdType of type J1939Rm_ExtIdType
 *   ExtId1 of type uint8
 *   ExtId2 of type uint8
 *   ExtId3 of type uint8
 *
 *********************************************************************************************************************/


#define J1939Rm_START_SEC_CODE
#include "J1939Rm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: J1939Rm_MainFunction
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: J1939Rm_MainFunction_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, J1939Rm_CODE) J1939Rm_MainFunction(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: J1939Rm_MainFunction
 *********************************************************************************************************************/

  TSC_J1939Rm_SchM_Enter_J1939Rm_J1939RM_EXCLUSIVE_AREA_ACKQUEUELOCK();
  TSC_J1939Rm_SchM_Exit_J1939Rm_J1939RM_EXCLUSIVE_AREA_ACKQUEUELOCK();
  TSC_J1939Rm_SchM_Enter_J1939Rm_J1939RM_EXCLUSIVE_AREA_REQ2QUEUELOCK();
  TSC_J1939Rm_SchM_Exit_J1939Rm_J1939RM_EXCLUSIVE_AREA_REQ2QUEUELOCK();
  TSC_J1939Rm_SchM_Enter_J1939Rm_J1939RM_EXCLUSIVE_AREA_REQQUEUELOCK();
  TSC_J1939Rm_SchM_Exit_J1939Rm_J1939RM_EXCLUSIVE_AREA_REQQUEUELOCK();
  TSC_J1939Rm_SchM_Enter_J1939Rm_J1939RM_EXCLUSIVE_AREA_TXPDULOCK();
  TSC_J1939Rm_SchM_Exit_J1939Rm_J1939RM_EXCLUSIVE_AREA_TXPDULOCK();

  J1939Rm_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define J1939Rm_STOP_SEC_CODE
#include "J1939Rm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void J1939Rm_TestDefines(void)
{
  /* Enumeration Data Types */

  J1939Rm_AckCode Test_J1939Rm_AckCode_V_1 = J1939RM_ACK_POSITIVE;
  J1939Rm_AckCode Test_J1939Rm_AckCode_V_2 = J1939RM_ACK_NEGATIVE;
  J1939Rm_AckCode Test_J1939Rm_AckCode_V_3 = J1939RM_ACK_ACCESS_DENIED;
  J1939Rm_AckCode Test_J1939Rm_AckCode_V_4 = J1939RM_ACK_CANNOT_RESPOND;

  J1939Rm_ExtIdType Test_J1939Rm_ExtIdType_V_1 = J1939RM_EXTID_NONE;
  J1939Rm_ExtIdType Test_J1939Rm_ExtIdType_V_2 = J1939RM_EXTID_ONE;
  J1939Rm_ExtIdType Test_J1939Rm_ExtIdType_V_3 = J1939RM_EXTID_TWO;
  J1939Rm_ExtIdType Test_J1939Rm_ExtIdType_V_4 = J1939RM_EXTID_THREE;
  J1939Rm_ExtIdType Test_J1939Rm_ExtIdType_V_5 = J1939RM_EXTID_GF;
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
