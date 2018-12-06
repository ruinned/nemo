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
 *          File:  Rte_IoHwAb.h
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim_181121_BB2_Pvt_0_7_DetDisable_00/SCIM_BP.dpa
 *     SW-C Type:  IoHwAb
 *  Generated at:  Fri Nov 23 09:22:46 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <IoHwAb> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_IOHWAB_H
# define _RTE_IOHWAB_H

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

# include "Rte_IoHwAb_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_IoHwAb
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_IoHwAb, RTE_CONST, RTE_CONST) Rte_Inst_IoHwAb; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_IoHwAb, TYPEDEF, RTE_CONST) Rte_Instance;


# define IoHwAb_START_SEC_CODE
# include "IoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_AdInterfaces_P_GetAdiPinState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetAdiPinState> of PortPrototype <AdInterfaces_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_AdInterfaces_P_GetAdiPinState(IOHWAB_UINT8 AdiPinRef, IOHWAB_UINT16 *AdiPinVoltage, VGTT_EcuPinVoltage_0V2 *LivingPullUpVoltage)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_AdiInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_AdInterfaces_P_GetAdiPinState IoHwAb_AdInterfaces_P_GetAdiPinState
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_AdInterfaces_P_GetAdiPinState(IOHWAB_UINT8 AdiPinRef, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) AdiPinVoltage, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) LivingPullUpVoltage); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_AdInterfaces_P_GetAdiPinStateAll
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetAdiPinStateAll> of PortPrototype <AdInterfaces_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_AdInterfaces_P_GetAdiPinStateAll(VGTT_ScimAdiPinsState *VoltageOnAdiPins, VGTT_EcuPinVoltage_0V2 *LivingPullUpVoltage)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_AdiInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_AdInterfaces_P_GetAdiPinStateAll IoHwAb_AdInterfaces_P_GetAdiPinStateAll
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_AdInterfaces_P_GetAdiPinStateAll(P2VAR(VGTT_ScimAdiPinsState, AUTOMATIC, RTE_IOHWAB_APPL_VAR) VoltageOnAdiPins, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) LivingPullUpVoltage); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_AdInterfaces_P_GetPullUpState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetPullUpState> of PortPrototype <AdInterfaces_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_AdInterfaces_P_GetPullUpState(VGTT_EcuPinVoltage_0V2 *PullUpVoltage_Living, VGTT_EcuPinVoltage_0V2 *PullUpVoltage_Parked, VGTT_EcuPinVoltage_0V2 *PullUpVoltage_DAI1, VGTT_EcuPinVoltage_0V2 *PullUpVoltage_DAI2)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_AdiInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_AdInterfaces_P_GetPullUpState IoHwAb_AdInterfaces_P_GetPullUpState
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_AdInterfaces_P_GetPullUpState(P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_Living, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_Parked, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_DAI1, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_DAI2); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_AdInterfaces_P_SetPullUp
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetPullUp> of PortPrototype <AdInterfaces_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_AdInterfaces_P_SetPullUp(IOHWAB_BOOL ActivateLivingPullUp, IOHWAB_BOOL ActivateParkedPullUp, IOHWAB_BOOL ActivateDAIPullUp)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_AdiInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_AdInterfaces_P_SetPullUp IoHwAb_AdInterfaces_P_SetPullUp
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_AdInterfaces_P_SetPullUp(IOHWAB_BOOL ActivateLivingPullUp, IOHWAB_BOOL ActivateParkedPullUp, IOHWAB_BOOL ActivateDAIPullUp); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_Do12VInterface_P_GetDo12VPinsState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDo12VPinsState> of PortPrototype <Do12VInterface_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_Do12VInterface_P_GetDo12VPinsState(IOHWAB_UINT8 SelectParkedOrLivingPin, IOHWAB_BOOL *IsDo12VActivated, VGTT_EcuPinVoltage_0V2 *Do12VPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinVoltage_0V2 *DcdcRefVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_Do12VInterface_P_GetDo12VPinsState IoHwAb_Do12VInterface_P_GetDo12VPinsState
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_Do12VInterface_P_GetDo12VPinsState(IOHWAB_UINT8 SelectParkedOrLivingPin, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDo12VActivated, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Do12VPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DcdcRefVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_Do12VInterface_P_SetDcdc12VActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDcdc12VActive> of PortPrototype <Do12VInterface_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_Do12VInterface_P_SetDcdc12VActive(IOHWAB_BOOL Activation)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_Do12VInterface_P_SetDcdc12VActive IoHwAb_Do12VInterface_P_SetDcdc12VActive
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_Do12VInterface_P_SetDcdc12VActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_Do12VInterface_P_SetDo12VLivingActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDo12VLivingActive> of PortPrototype <Do12VInterface_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_Do12VInterface_P_SetDo12VLivingActive(IOHWAB_BOOL Activation)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_Do12VInterface_P_SetDo12VLivingActive IoHwAb_Do12VInterface_P_SetDo12VLivingActive
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_Do12VInterface_P_SetDo12VLivingActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_Do12VInterface_P_SetDo12VParkedActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDo12VParkedActive> of PortPrototype <Do12VInterface_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_Do12VInterface_P_SetDo12VParkedActive(IOHWAB_BOOL Activation)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_Do12VInterface_P_SetDo12VParkedActive IoHwAb_Do12VInterface_P_SetDo12VParkedActive
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_Do12VInterface_P_SetDo12VParkedActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDobhsPinState> of PortPrototype <DobhsCtrlInterface_P_1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDobhsActive> of PortPrototype <DobhsCtrlInterface_P_1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive(IOHWAB_BOOL Activation)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDobhsPinState> of PortPrototype <DobhsCtrlInterface_P_2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDobhsActive> of PortPrototype <DobhsCtrlInterface_P_2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive(IOHWAB_BOOL Activation)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDobhsPinState> of PortPrototype <DobhsCtrlInterface_P_3>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDobhsActive> of PortPrototype <DobhsCtrlInterface_P_3>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive(IOHWAB_BOOL Activation)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDobhsPinState> of PortPrototype <DobhsCtrlInterface_P_4>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDobhsActive> of PortPrototype <DobhsCtrlInterface_P_4>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive(IOHWAB_BOOL Activation)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDoPinStateOne> of PortPrototype <DowhsInterfaces_P_1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_UINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowhsInterfaces_P_1_SetDowActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDowActive> of PortPrototype <DowhsInterfaces_P_1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowhsInterfaces_P_1_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_UINT8 DutyCycle)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DowhsInterfaces_P_1_SetDowActive IoHwAb_DowhsInterfaces_P_1_SetDowActive
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowhsInterfaces_P_1_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_UINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDoPinStateOne> of PortPrototype <DowhsInterfaces_P_2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_UINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowhsInterfaces_P_2_SetDowActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDowActive> of PortPrototype <DowhsInterfaces_P_2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowhsInterfaces_P_2_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_UINT8 DutyCycle)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DowhsInterfaces_P_2_SetDowActive IoHwAb_DowhsInterfaces_P_2_SetDowActive
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowhsInterfaces_P_2_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_UINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowlsInterface_P_1_GetDoPinStateOne
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDoPinStateOne> of PortPrototype <DowlsInterface_P_1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowlsInterface_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_UINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DowlsInterface_P_1_GetDoPinStateOne IoHwAb_DowlsInterface_P_1_GetDoPinStateOne
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowlsInterface_P_1_SetDowlsActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDowlsActive> of PortPrototype <DowlsInterface_P_1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowlsInterface_P_1_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DowlsInterface_P_1_SetDowlsActive IoHwAb_DowlsInterface_P_1_SetDowlsActive
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_1_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowlsInterface_P_2_GetDoPinStateOne
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDoPinStateOne> of PortPrototype <DowlsInterface_P_2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowlsInterface_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_UINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DowlsInterface_P_2_GetDoPinStateOne IoHwAb_DowlsInterface_P_2_GetDoPinStateOne
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowlsInterface_P_2_SetDowlsActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDowlsActive> of PortPrototype <DowlsInterface_P_2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowlsInterface_P_2_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DowlsInterface_P_2_SetDowlsActive IoHwAb_DowlsInterface_P_2_SetDowlsActive
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_2_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowlsInterface_P_3_GetDoPinStateOne
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDoPinStateOne> of PortPrototype <DowlsInterface_P_3>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowlsInterface_P_3_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_UINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DowlsInterface_P_3_GetDoPinStateOne IoHwAb_DowlsInterface_P_3_GetDoPinStateOne
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_3_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowlsInterface_P_3_SetDowlsActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDowlsActive> of PortPrototype <DowlsInterface_P_3>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowlsInterface_P_3_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_DowlsInterface_P_3_SetDowlsActive IoHwAb_DowlsInterface_P_3_SetDowlsActive
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_3_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_LficICU_P_IcuDisableEdgeDetection
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuDisableEdgeDetection> of PortPrototype <LficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_LficICU_P_IcuDisableEdgeDetection(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_LficICU_P_IcuDisableEdgeDetection IoHwAb_LficICU_P_IcuDisableEdgeDetection
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficICU_P_IcuDisableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_LficICU_P_IcuDisableNotification
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuDisableNotification> of PortPrototype <LficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_LficICU_P_IcuDisableNotification(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_LficICU_P_IcuDisableNotification IoHwAb_LficICU_P_IcuDisableNotification
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficICU_P_IcuDisableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_LficICU_P_IcuEnableEdgeDetection
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuEnableEdgeDetection> of PortPrototype <LficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_LficICU_P_IcuEnableEdgeDetection(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_LficICU_P_IcuEnableEdgeDetection IoHwAb_LficICU_P_IcuEnableEdgeDetection
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficICU_P_IcuEnableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_LficICU_P_IcuEnableNotification
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuEnableNotification> of PortPrototype <LficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_LficICU_P_IcuEnableNotification(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_LficICU_P_IcuEnableNotification IoHwAb_LficICU_P_IcuEnableNotification
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficICU_P_IcuEnableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_LficNRESDio_P_Read
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Read> of PortPrototype <LficNRESDio_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_LficNRESDio_P_Read(IOHWAB_UINT8 *ReadValue)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Dio_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_LficNRESDio_P_Read IoHwAb_LficNRESDio_P_Read
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficNRESDio_P_Read(P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) ReadValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_LficNRESDio_P_Write
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Write> of PortPrototype <LficNRESDio_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_LficNRESDio_P_Write(IOHWAB_UINT8 SetValue)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Dio_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_LficNRESDio_P_Write IoHwAb_LficNRESDio_P_Write
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficNRESDio_P_Write(IOHWAB_UINT8 SetValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_REIoHwAb_10ms
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_REIoHwAb_10ms IoHwAb_REIoHwAb_10ms
FUNC(void, IoHwAb_CODE) IoHwAb_REIoHwAb_10ms(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_RficICU_P_IcuDisableEdgeDetection
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuDisableEdgeDetection> of PortPrototype <RficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_RficICU_P_IcuDisableEdgeDetection(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_RficICU_P_IcuDisableEdgeDetection IoHwAb_RficICU_P_IcuDisableEdgeDetection
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficICU_P_IcuDisableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_RficICU_P_IcuDisableNotification
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuDisableNotification> of PortPrototype <RficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_RficICU_P_IcuDisableNotification(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_RficICU_P_IcuDisableNotification IoHwAb_RficICU_P_IcuDisableNotification
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficICU_P_IcuDisableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_RficICU_P_IcuEnableEdgeDetection
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuEnableEdgeDetection> of PortPrototype <RficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_RficICU_P_IcuEnableEdgeDetection(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_RficICU_P_IcuEnableEdgeDetection IoHwAb_RficICU_P_IcuEnableEdgeDetection
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficICU_P_IcuEnableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_RficICU_P_IcuEnableNotification
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuEnableNotification> of PortPrototype <RficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_RficICU_P_IcuEnableNotification(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_RficICU_P_IcuEnableNotification IoHwAb_RficICU_P_IcuEnableNotification
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficICU_P_IcuEnableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_RficNRESDio_P_Read
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Read> of PortPrototype <RficNRESDio_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_RficNRESDio_P_Read(IOHWAB_UINT8 *ReadValue)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Dio_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_RficNRESDio_P_Read IoHwAb_RficNRESDio_P_Read
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficNRESDio_P_Read(P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) ReadValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_RficNRESDio_P_Write
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Write> of PortPrototype <RficNRESDio_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_RficNRESDio_P_Write(IOHWAB_UINT8 SetValue)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Dio_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_IoHwAb_RficNRESDio_P_Write IoHwAb_RficNRESDio_P_Write
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficNRESDio_P_Write(IOHWAB_UINT8 SetValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define IoHwAb_STOP_SEC_CODE
# include "IoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_AdiInterface_I_IoHwAbApplicationError (1U)

# define RTE_E_Dio_I_IoHwAbApplicationError (1U)

# define RTE_E_Do12VInterface_I_IoHwAbApplicationError (1U)

# define RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError (1U)

# define RTE_E_DowhsInterface_I_IoHwAbApplicationError (1U)

# define RTE_E_DowlsInterface_I_IoHwAbApplicationError (1U)

# define RTE_E_Icu_I_IoHwAbApplicationError (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_IOHWAB_H */
