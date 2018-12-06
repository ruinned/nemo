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
 *          File:  Rte_BswM.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <BswM>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BSWM_H
# define _RTE_BSWM_H

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

# include "Rte_BswM_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_Request_ESH_PostRunRequest_0_requestedMode (0U)
#  define Rte_InitValue_Request_ESH_PostRunRequest_1_requestedMode (0U)
#  define Rte_InitValue_Request_ESH_RunRequest_0_requestedMode (0U)
#  define Rte_InitValue_Request_ESH_RunRequest_1_requestedMode (0U)
#  define Rte_InitValue_Request_LIN1_ScheduleTableRequestMode_requestedMode (0U)
#  define Rte_InitValue_Request_LIN2_ScheduleTableRequestMode_requestedMode (0U)
#  define Rte_InitValue_Request_LIN3_ScheduleTableRequestMode_requestedMode (0U)
#  define Rte_InitValue_Request_LIN4_ScheduleTableRequestMode_requestedMode (0U)
#  define Rte_InitValue_Request_LIN5_ScheduleTableRequestMode_requestedMode (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_LIN1_ScheduleTableRequestMode_requestedMode(P2VAR(BswM_BswMRteMDG_LIN1Schedule, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_LIN2_ScheduleTableRequestMode_requestedMode(P2VAR(BswM_BswMRteMDG_LIN2Schedule, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_LIN3_ScheduleTableRequestMode_requestedMode(P2VAR(BswM_BswMRteMDG_LIN3Schedule, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_LIN4_ScheduleTableRequestMode_requestedMode(P2VAR(BswM_BswMRteMDG_LIN4Schedule, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_LIN5_ScheduleTableRequestMode_requestedMode(P2VAR(BswM_BswMRteMDG_LIN5Schedule, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(BswM_ESH_Mode, RTE_CODE) Rte_Mode_BswM_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(BswM_ESH_Mode nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_Request_ESH_PostRunRequest_0_requestedMode Rte_Read_BswM_Request_ESH_PostRunRequest_0_requestedMode
#  define Rte_Read_Request_ESH_PostRunRequest_1_requestedMode Rte_Read_BswM_Request_ESH_PostRunRequest_1_requestedMode
#  define Rte_Read_Request_ESH_RunRequest_0_requestedMode Rte_Read_BswM_Request_ESH_RunRequest_0_requestedMode
#  define Rte_Read_Request_ESH_RunRequest_1_requestedMode Rte_Read_BswM_Request_ESH_RunRequest_1_requestedMode
#  define Rte_Read_Request_LIN1_ScheduleTableRequestMode_requestedMode Rte_Read_BswM_Request_LIN1_ScheduleTableRequestMode_requestedMode
#  define Rte_Read_Request_LIN2_ScheduleTableRequestMode_requestedMode Rte_Read_BswM_Request_LIN2_ScheduleTableRequestMode_requestedMode
#  define Rte_Read_Request_LIN3_ScheduleTableRequestMode_requestedMode Rte_Read_BswM_Request_LIN3_ScheduleTableRequestMode_requestedMode
#  define Rte_Read_Request_LIN4_ScheduleTableRequestMode_requestedMode Rte_Read_BswM_Request_LIN4_ScheduleTableRequestMode_requestedMode
#  define Rte_Read_Request_LIN5_ScheduleTableRequestMode_requestedMode Rte_Read_BswM_Request_LIN5_ScheduleTableRequestMode_requestedMode


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode Rte_Mode_BswM_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode Rte_Switch_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode


# endif /* !defined(RTE_CORE) */


# define BswM_START_SEC_CODE
# include "BswM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_BswM_MainFunction BswM_MainFunction
#  define RTE_RUNNABLE_BswM_Read_LIN1_ScheduleTableRequestMode BswM_Read_LIN1_ScheduleTableRequestMode
#  define RTE_RUNNABLE_BswM_Read_LIN2_ScheduleTableRequestMode BswM_Read_LIN2_ScheduleTableRequestMode
#  define RTE_RUNNABLE_BswM_Read_LIN3_ScheduleTableRequestMode BswM_Read_LIN3_ScheduleTableRequestMode
#  define RTE_RUNNABLE_BswM_Read_LIN4_ScheduleTableRequestMode BswM_Read_LIN4_ScheduleTableRequestMode
#  define RTE_RUNNABLE_BswM_Read_LIN5_ScheduleTableRequestMode BswM_Read_LIN5_ScheduleTableRequestMode
# endif

FUNC(void, BswM_CODE) BswM_MainFunction(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, BswM_CODE) BswM_Read_LIN1_ScheduleTableRequestMode(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, BswM_CODE) BswM_Read_LIN2_ScheduleTableRequestMode(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, BswM_CODE) BswM_Read_LIN3_ScheduleTableRequestMode(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, BswM_CODE) BswM_Read_LIN4_ScheduleTableRequestMode(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, BswM_CODE) BswM_Read_LIN5_ScheduleTableRequestMode(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define BswM_STOP_SEC_CODE
# include "BswM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BSWM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
