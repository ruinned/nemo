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
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim_181121_BB2_Pvt_0_7_DetDisable_00/SCIM_BP.dpa
 *     SW-C Type:  PVTApp_DobhsCtrlInterface
 *  Generated at:  Fri Nov 23 09:22:55 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <PVTApp_DobhsCtrlInterface> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PVTAPP_DOBHSCTRLINTERFACE_H
# define _RTE_PVTAPP_DOBHSCTRLINTERFACE_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_PVTApp_DobhsCtrlInterface_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_PVTApp_DobhsCtrlInterface
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_PVTApp_DobhsCtrlInterface, RTE_CONST, RTE_CONST) Rte_Inst_PVTApp_DobhsCtrlInterface; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_PVTApp_DobhsCtrlInterface, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_BHS1_1_Debug_PVT_SCIM_Ctrl_BHS1 (FALSE)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_BHS2_1_Debug_PVT_SCIM_Ctrl_BHS2 (FALSE)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_BHS3_1_Debug_PVT_SCIM_Ctrl_BHS3 (FALSE)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_BHS4_1_Debug_PVT_SCIM_Ctrl_BHS4 (FALSE)
# define Rte_InitValue_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Debug_PVT_SCIM_Ctrl_BHS1_1, RTE_CODE) Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS1_1_Debug_PVT_SCIM_Ctrl_BHS1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Debug_PVT_SCIM_Ctrl_BHS2_1, RTE_CODE) Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS2_1_Debug_PVT_SCIM_Ctrl_BHS2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Debug_PVT_SCIM_Ctrl_BHS3_1, RTE_CODE) Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS3_1_Debug_PVT_SCIM_Ctrl_BHS3(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Debug_PVT_SCIM_Ctrl_BHS4_1, RTE_CODE) Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS4_1_Debug_PVT_SCIM_Ctrl_BHS4(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault(Debug_PVT_SCIM_RD_BHS1_Fault_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt(Debug_PVT_SCIM_RD_BHS1_Volt_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault(Debug_PVT_SCIM_RD_BHS2_Fault_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt(Debug_PVT_SCIM_RD_BHS2_Volt_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault(Debug_PVT_SCIM_RD_BHS3_Fault_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt(Debug_PVT_SCIM_RD_BHS3_Volt_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault(Debug_PVT_SCIM_RD_BHS4_Fault_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt(Debug_PVT_SCIM_RD_BHS4_Volt_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_1_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_1_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_2_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_2_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_3_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_3_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_4_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_PVTAPP_DOBHSCTRLINTERFACE_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_4_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS1_1_Debug_PVT_SCIM_Ctrl_BHS1 Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS1_1_Debug_PVT_SCIM_Ctrl_BHS1
# define Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS2_1_Debug_PVT_SCIM_Ctrl_BHS2 Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS2_1_Debug_PVT_SCIM_Ctrl_BHS2
# define Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS3_1_Debug_PVT_SCIM_Ctrl_BHS3 Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS3_1_Debug_PVT_SCIM_Ctrl_BHS3
# define Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS4_1_Debug_PVT_SCIM_Ctrl_BHS4 Rte_DRead_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_Ctrl_BHS4_1_Debug_PVT_SCIM_Ctrl_BHS4


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault
# define Rte_Write_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt
# define Rte_Write_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault
# define Rte_Write_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt
# define Rte_Write_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault
# define Rte_Write_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt
# define Rte_Write_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault
# define Rte_Write_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_DobhsCtrlInterface_P_1_GetDobhsPinState Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_1_GetDobhsPinState
# define Rte_Call_DobhsCtrlInterface_P_1_SetDobhsActive Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_1_SetDobhsActive
# define Rte_Call_DobhsCtrlInterface_P_2_GetDobhsPinState Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_2_GetDobhsPinState
# define Rte_Call_DobhsCtrlInterface_P_2_SetDobhsActive Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_2_SetDobhsActive
# define Rte_Call_DobhsCtrlInterface_P_3_GetDobhsPinState Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_3_GetDobhsPinState
# define Rte_Call_DobhsCtrlInterface_P_3_SetDobhsActive Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_3_SetDobhsActive
# define Rte_Call_DobhsCtrlInterface_P_4_GetDobhsPinState Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_4_GetDobhsPinState
# define Rte_Call_DobhsCtrlInterface_P_4_SetDobhsActive Rte_Call_PVTApp_DobhsCtrlInterface_DobhsCtrlInterface_P_4_SetDobhsActive




# define PVTApp_DobhsCtrlInterface_START_SEC_CODE
# include "PVTApp_DobhsCtrlInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_PvtDobhsInterface
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
 *   Debug_PVT_SCIM_Ctrl_BHS1_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS1_1_Debug_PVT_SCIM_Ctrl_BHS1(void)
 *   Debug_PVT_SCIM_Ctrl_BHS2_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS2_1_Debug_PVT_SCIM_Ctrl_BHS2(void)
 *   Debug_PVT_SCIM_Ctrl_BHS3_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS3_1_Debug_PVT_SCIM_Ctrl_BHS3(void)
 *   Debug_PVT_SCIM_Ctrl_BHS4_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS4_1_Debug_PVT_SCIM_Ctrl_BHS4(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault(Debug_PVT_SCIM_RD_BHS1_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt(Debug_PVT_SCIM_RD_BHS1_Volt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault(Debug_PVT_SCIM_RD_BHS2_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt(Debug_PVT_SCIM_RD_BHS2_Volt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault(Debug_PVT_SCIM_RD_BHS3_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt(Debug_PVT_SCIM_RD_BHS3_Volt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault(Debug_PVT_SCIM_RD_BHS4_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt(Debug_PVT_SCIM_RD_BHS4_Volt_1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_1_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_1_SetDobhsActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_2_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_2_SetDobhsActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_3_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_3_SetDobhsActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_4_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DobhsCtrlInterface_P_4_SetDobhsActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Re_PvtDobhsInterface Re_PvtDobhsInterface
FUNC(void, PVTApp_DobhsCtrlInterface_CODE) Re_PvtDobhsInterface(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define PVTApp_DobhsCtrlInterface_STOP_SEC_CODE
# include "PVTApp_DobhsCtrlInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_PVTAPP_DOBHSCTRLINTERFACE_H */
