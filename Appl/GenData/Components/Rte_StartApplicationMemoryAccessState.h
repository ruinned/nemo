/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_StartApplicationMemoryAccessState.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <StartApplicationMemoryAccessState>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_STARTAPPLICATIONMEMORYACCESSSTATE_H
# define _RTE_STARTAPPLICATIONMEMORYACCESSSTATE_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_StartApplicationMemoryAccessState_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplicationMemoryAccessState_PimMemoryAccessState; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PimMemoryAccessState() \
  (&Rte_StartApplicationMemoryAccessState_PimMemoryAccessState) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define StartApplicationMemoryAccessState_START_SEC_CODE
# include "StartApplicationMemoryAccessState_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_StartApplicationMemoryAccessState_GetState StartApplicationMemoryAccessState_GetState
#  define RTE_RUNNABLE_StartApplicationMemoryAccessState_Init StartApplicationMemoryAccessState_Init
#  define RTE_RUNNABLE_StartApplicationMemoryAccessState_Reset StartApplicationMemoryAccessState_Reset
# endif

FUNC(void, StartApplicationMemoryAccessState_CODE) StartApplicationMemoryAccessState_GetState(P2VAR(boolean, AUTOMATIC, RTE_STARTAPPLICATIONMEMORYACCESSSTATE_APPL_VAR) State); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, StartApplicationMemoryAccessState_CODE) StartApplicationMemoryAccessState_Init(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, StartApplicationMemoryAccessState_CODE) StartApplicationMemoryAccessState_Reset(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define StartApplicationMemoryAccessState_STOP_SEC_CODE
# include "StartApplicationMemoryAccessState_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_STARTAPPLICATIONMEMORYACCESSSTATE_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
