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
 *          File:  Rte_CDD_RFIC.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <CDD_RFIC>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_RFIC_H
# define _RTE_CDD_RFIC_H

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

# include "Rte_CDD_RFIC_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_RFIC_RficSysModeConfirm_P_SR_RficSysModeConfirm; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RficSysModeConfirm_P_SR_RficSysModeConfirm (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_RFIC_RficNRESDio_R_Read(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Result_CDD_RFIC_RficNRESDio_R_Read(P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_CDD_RFIC_APPL_VAR) ReadValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RficSysModeConfirm_P_SR_RficSysModeConfirm Rte_Write_CDD_RFIC_RficSysModeConfirm_P_SR_RficSysModeConfirm
#  define Rte_Write_CDD_RFIC_RficSysModeConfirm_P_SR_RficSysModeConfirm(data) (Rte_CDD_RFIC_RficSysModeConfirm_P_SR_RficSysModeConfirm = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> for asynchronous C/S communication
 *********************************************************************************************************************/
#  define Rte_Call_RficNRESDio_R_Read Rte_Call_CDD_RFIC_RficNRESDio_R_Read


/**********************************************************************************************************************
 * Rte_Result_<p>_<o> (asynchronous C/S result)
 *********************************************************************************************************************/
#  define Rte_Result_RficNRESDio_R_Read Rte_Result_CDD_RFIC_RficNRESDio_R_Read


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_TELEGRAM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_TELEGRAM_APPL_CODE) RE_Clear_HighFixCheckTimer(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_TELEGRAM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CleaHighFixCheckTimer_P_CS() (RE_Clear_HighFixCheckTimer(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_RficICU_P_IcuDisableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RficICU_R_IcuDisableEdgeDetection IoHwAb_RficICU_P_IcuDisableEdgeDetection
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_RficICU_P_IcuDisableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RficICU_R_IcuDisableNotification IoHwAb_RficICU_P_IcuDisableNotification
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_RficICU_P_IcuEnableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RficICU_R_IcuEnableEdgeDetection IoHwAb_RficICU_P_IcuEnableEdgeDetection
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_RficICU_P_IcuEnableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RficICU_R_IcuEnableNotification IoHwAb_RficICU_P_IcuEnableNotification
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_RficNRESDio_P_Write(IOHWAB_UINT8 SetValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RficNRESDio_R_Write IoHwAb_RficNRESDio_P_Write
#  define RTE_START_SEC_TELEGRAM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_TELEGRAM_APPL_CODE) RE_Set_ValidFobFoundResult(uint8 fob_num); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_TELEGRAM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetValidFobFoundResult_P_CS(arg1) (RE_Set_ValidFobFoundResult(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_RFIC_START_SEC_CODE
# include "CDD_RFIC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_RE_RFIC_Control_ISR RE_RFIC_Control_ISR
#  define RTE_RUNNABLE_RE_RFIC_WakeUp RE_RFIC_WakeUp
#  define RTE_RUNNABLE_RE_SearchSysmode RE_SearchSysmode
#  define RTE_RUNNABLE_RE_rfic_IRQ_ActiveCheck RE_rfic_IRQ_ActiveCheck
#  define RTE_RUNNABLE_RE_rfic_IRQ_PendingCheck RE_rfic_IRQ_PendingCheck
#  define RTE_RUNNABLE_RE_rfic_init RE_rfic_init
# endif

FUNC(void, CDD_RFIC_CODE) RE_RFIC_Control_ISR(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_RFIC_CODE) RE_RFIC_WakeUp(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_RFIC_CODE) RE_SearchSysmode(uint8 RFIC_SystemMode, uint8 RFIC_ReqCmd); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_RFIC_CODE) RE_rfic_IRQ_ActiveCheck(uint8 kb_TerminalControlState); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_RFIC_CODE) RE_rfic_IRQ_PendingCheck(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_RFIC_CODE) RE_rfic_init(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_RFIC_STOP_SEC_CODE
# include "CDD_RFIC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_Dio_I_IoHwAbApplicationError (1U)

#  define RTE_E_Icu_I_IoHwAbApplicationError (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_RFIC_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
