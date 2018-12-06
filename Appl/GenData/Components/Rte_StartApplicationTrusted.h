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
 *          File:  Rte_StartApplicationTrusted.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <StartApplicationTrusted>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_STARTAPPLICATIONTRUSTED_H
# define _RTE_STARTAPPLICATIONTRUSTED_H

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

# include "Rte_StartApplicationTrusted_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_PpTrustedData_DeValue (0U)
#  define Rte_InitValue_PpTrustedDataVerification_DeValue (0U)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_Irv_StartApplicationTrusted_IrvValue; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StartApplicationTrusted_PpTrustedData_DeValue(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATIONTRUSTED_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StartApplicationTrusted_PpTrustedDataVerification_DeValue(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_PpTrustedData_DeValue Rte_Read_StartApplicationTrusted_PpTrustedData_DeValue


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_PpTrustedDataVerification_DeValue Rte_Write_StartApplicationTrusted_PpTrustedDataVerification_DeValue


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_StartApplicationTrusted_OnDataRec_TrustedData_IrvValue() \
  Rte_Irv_StartApplicationTrusted_IrvValue
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_StartApplicationTrusted_OnDataRec_TrustedData_IrvValue(data) \
  (Rte_Irv_StartApplicationTrusted_IrvValue = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_StartApplicationTrusted_TriggerMemoryAccesViolation_IrvValue() \
  Rte_Irv_StartApplicationTrusted_IrvValue
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_StartApplicationTrusted_TriggerMemoryAccesViolation_IrvValue(data) \
  (Rte_Irv_StartApplicationTrusted_IrvValue = (data))
/* PRQA L:L1 */


# endif /* !defined(RTE_CORE) */


# define StartApplicationTrusted_START_SEC_CODE
# include "StartApplicationTrusted_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_StartApplicationTrusted_OnDataRec_TrustedData StartApplicationTrusted_OnDataRec_TrustedData
#  define RTE_RUNNABLE_StartApplicationTrusted_TriggerMemoryAccesViolation StartApplicationTrusted_TriggerMemoryAccesViolation
# endif

FUNC(void, StartApplicationTrusted_CODE) StartApplicationTrusted_OnDataRec_TrustedData(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, StartApplicationTrusted_CODE) StartApplicationTrusted_TriggerMemoryAccesViolation(uint8 Value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define StartApplicationTrusted_STOP_SEC_CODE
# include "StartApplicationTrusted_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_STARTAPPLICATIONTRUSTED_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
