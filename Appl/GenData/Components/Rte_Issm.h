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
 *          File:  Rte_Issm.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <Issm>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ISSM_H
# define _RTE_ISSM_H

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

# include "Rte_Issm_Type.h"
# include "Rte_DataHandleType.h"


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Issm_Issm_IssStateChange_Issm_IssActivation(Issm_IssHandleType issID); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Issm_Issm_IssStateChange_Issm_IssDeactivation(Issm_IssHandleType issID); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define Rte_Call_Issm_IssStateChange_Issm_IssActivation Rte_Call_Issm_Issm_IssStateChange_Issm_IssActivation
#  define Rte_Call_Issm_IssStateChange_Issm_IssDeactivation Rte_Call_Issm_Issm_IssStateChange_Issm_IssDeactivation


# endif /* !defined(RTE_CORE) */


# define Issm_START_SEC_CODE
# include "Issm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ActivateIss Issm_ActivateIss
#  define RTE_RUNNABLE_DeactivateIss Issm_DeactivateIss
#  define RTE_RUNNABLE_GetAllActiveIss Issm_GetAllActiveIss
#  define RTE_RUNNABLE_GetAllActiveUsers Issm_GetAllActiveUsers
#  define RTE_RUNNABLE_GetIssState Issm_GetIssState
#  define RTE_RUNNABLE_Issm_MainFunction Issm_MainFunction
# endif

FUNC(Std_ReturnType, Issm_CODE) Issm_ActivateIss(Issm_UserHandleType parg0); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, Issm_CODE) Issm_DeactivateIss(Issm_UserHandleType parg0); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, Issm_CODE) Issm_GetAllActiveIss(P2VAR(uint32, AUTOMATIC, RTE_ISSM_APPL_VAR) activeIssField); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Issm_CODE) Issm_GetAllActiveUsers(P2VAR(uint32, AUTOMATIC, RTE_ISSM_APPL_VAR) activeUsersField); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, Issm_CODE) Issm_GetAllActiveUsers(P2VAR(Issm_ActiveUserArrayType, AUTOMATIC, RTE_ISSM_APPL_VAR) activeUsersField); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, Issm_CODE) Issm_GetIssState(Issm_UserHandleType parg0, P2VAR(Issm_IssStateType, AUTOMATIC, RTE_ISSM_APPL_VAR) issState); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(void, Issm_CODE) Issm_MainFunction(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define Issm_STOP_SEC_CODE
# include "Issm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_Issm_GetAllActiveIss_E_NOT_OK (1U)

#  define RTE_E_Issm_GetAllActiveUsers_E_NOT_OK (1U)

#  define RTE_E_Issm_IssRequest_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_ISSM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1330:  MISRA rule: 16.4
     Reason:     The RTE Generator uses default names for parameter identifiers of port defined arguments of service modules.
                 Therefore the parameter identifiers in the function declaration differs from those of the implementation of the BSW module.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
