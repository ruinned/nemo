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
 *          File:  Rte_PVTApp_DobhsCtrlInterface.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <PVTApp_DobhsCtrlInterface>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PVTAPP_DOBHSCTRLINTERFACE_H
# define _RTE_PVTAPP_DOBHSCTRLINTERFACE_H

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

# include "Rte_PVTApp_DobhsCtrlInterface_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Debug_PVT_SCIM_Ctrl_BHS1_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_BHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_e91d1062_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_BHS2_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_BHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_b20aa177_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_BHS3_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_BHS3_oDebugCtrl1_SCIM_BB2_oBackbone2_84f83184_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_BHS4_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_BHS4_oDebugCtrl1_SCIM_BB2_oBackbone2_0425c35d_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_BHS1_1_Debug_PVT_SCIM_Ctrl_BHS1 (FALSE)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_BHS2_1_Debug_PVT_SCIM_Ctrl_BHS2 (FALSE)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_BHS3_1_Debug_PVT_SCIM_Ctrl_BHS3 (FALSE)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_BHS4_1_Debug_PVT_SCIM_Ctrl_BHS4 (FALSE)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault(Debug_PVT_SCIM_RD_BHS1_Fault_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt(Debug_PVT_SCIM_RD_BHS1_Volt_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault(Debug_PVT_SCIM_RD_BHS2_Fault_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt(Debug_PVT_SCIM_RD_BHS2_Volt_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault(Debug_PVT_SCIM_RD_BHS3_Fault_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt(Debug_PVT_SCIM_RD_BHS3_Volt_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault(Debug_PVT_SCIM_RD_BHS4_Fault_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt(Debug_PVT_SCIM_RD_BHS4_Volt_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS1_1_Debug_PVT_SCIM_Ctrl_BHS1 Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS1_1_Debug_PVT_SCIM_Ctrl_BHS1
#  define Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS1_1_Debug_PVT_SCIM_Ctrl_BHS1() (Rte_Debug_PVT_SCIM_Ctrl_BHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_e91d1062_Rx) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS2_1_Debug_PVT_SCIM_Ctrl_BHS2 Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS2_1_Debug_PVT_SCIM_Ctrl_BHS2
#  define Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS2_1_Debug_PVT_SCIM_Ctrl_BHS2() (Rte_Debug_PVT_SCIM_Ctrl_BHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_b20aa177_Rx) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS3_1_Debug_PVT_SCIM_Ctrl_BHS3 Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS3_1_Debug_PVT_SCIM_Ctrl_BHS3
#  define Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS3_1_Debug_PVT_SCIM_Ctrl_BHS3() (Rte_Debug_PVT_SCIM_Ctrl_BHS3_oDebugCtrl1_SCIM_BB2_oBackbone2_84f83184_Rx) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS4_1_Debug_PVT_SCIM_Ctrl_BHS4 Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS4_1_Debug_PVT_SCIM_Ctrl_BHS4
#  define Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS4_1_Debug_PVT_SCIM_Ctrl_BHS4() (Rte_Debug_PVT_SCIM_Ctrl_BHS4_oDebugCtrl1_SCIM_BB2_oBackbone2_0425c35d_Rx) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault
#  define Rte_Write_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt
#  define Rte_Write_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault
#  define Rte_Write_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt
#  define Rte_Write_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault
#  define Rte_Write_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt
#  define Rte_Write_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault
#  define Rte_Write_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DobhsCtrlInterface_P_1_GetDobhsPinState IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DobhsCtrlInterface_P_1_SetDobhsActive IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DobhsCtrlInterface_P_2_GetDobhsPinState IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DobhsCtrlInterface_P_2_SetDobhsActive IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DobhsCtrlInterface_P_3_GetDobhsPinState IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DobhsCtrlInterface_P_3_SetDobhsActive IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DobhsCtrlInterface_P_4_GetDobhsPinState IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DobhsCtrlInterface_P_4_SetDobhsActive IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive


# endif /* !defined(RTE_CORE) */


# define PVTApp_DobhsCtrlInterface_START_SEC_CODE
# include "PVTApp_DobhsCtrlInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Re_PvtDobhsInterface Re_PvtDobhsInterface
# endif

FUNC(void, PVTApp_DobhsCtrlInterface_CODE) Re_PvtDobhsInterface(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define PVTApp_DobhsCtrlInterface_STOP_SEC_CODE
# include "PVTApp_DobhsCtrlInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_PVTAPP_DOBHSCTRLINTERFACE_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
