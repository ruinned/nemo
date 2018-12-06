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
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <IoHwAb>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_IOHWAB_H
# define _RTE_IOHWAB_H

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

# include "Rte_IoHwAb_Type.h"
# include "Rte_DataHandleType.h"


# define IoHwAb_START_SEC_CODE
# include "IoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_IoHwAb_AdInterfaces_P_GetAdiPinState IoHwAb_AdInterfaces_P_GetAdiPinState
#  define RTE_RUNNABLE_IoHwAb_AdInterfaces_P_GetAdiPinStateAll IoHwAb_AdInterfaces_P_GetAdiPinStateAll
#  define RTE_RUNNABLE_IoHwAb_AdInterfaces_P_GetPullUpState IoHwAb_AdInterfaces_P_GetPullUpState
#  define RTE_RUNNABLE_IoHwAb_AdInterfaces_P_SetPullUp IoHwAb_AdInterfaces_P_SetPullUp
#  define RTE_RUNNABLE_IoHwAb_Do12VInterface_P_GetDo12VPinsState IoHwAb_Do12VInterface_P_GetDo12VPinsState
#  define RTE_RUNNABLE_IoHwAb_Do12VInterface_P_SetDcdc12VActive IoHwAb_Do12VInterface_P_SetDcdc12VActive
#  define RTE_RUNNABLE_IoHwAb_Do12VInterface_P_SetDo12VLivingActive IoHwAb_Do12VInterface_P_SetDo12VLivingActive
#  define RTE_RUNNABLE_IoHwAb_Do12VInterface_P_SetDo12VParkedActive IoHwAb_Do12VInterface_P_SetDo12VParkedActive
#  define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState
#  define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive
#  define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState
#  define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive
#  define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState
#  define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive
#  define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState
#  define RTE_RUNNABLE_IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive
#  define RTE_RUNNABLE_IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne
#  define RTE_RUNNABLE_IoHwAb_DowhsInterfaces_P_1_SetDowActive IoHwAb_DowhsInterfaces_P_1_SetDowActive
#  define RTE_RUNNABLE_IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne
#  define RTE_RUNNABLE_IoHwAb_DowhsInterfaces_P_2_SetDowActive IoHwAb_DowhsInterfaces_P_2_SetDowActive
#  define RTE_RUNNABLE_IoHwAb_DowlsInterface_P_1_GetDoPinStateOne IoHwAb_DowlsInterface_P_1_GetDoPinStateOne
#  define RTE_RUNNABLE_IoHwAb_DowlsInterface_P_1_SetDowlsActive IoHwAb_DowlsInterface_P_1_SetDowlsActive
#  define RTE_RUNNABLE_IoHwAb_DowlsInterface_P_2_GetDoPinStateOne IoHwAb_DowlsInterface_P_2_GetDoPinStateOne
#  define RTE_RUNNABLE_IoHwAb_DowlsInterface_P_2_SetDowlsActive IoHwAb_DowlsInterface_P_2_SetDowlsActive
#  define RTE_RUNNABLE_IoHwAb_DowlsInterface_P_3_GetDoPinStateOne IoHwAb_DowlsInterface_P_3_GetDoPinStateOne
#  define RTE_RUNNABLE_IoHwAb_DowlsInterface_P_3_SetDowlsActive IoHwAb_DowlsInterface_P_3_SetDowlsActive
#  define RTE_RUNNABLE_IoHwAb_LficICU_P_IcuDisableEdgeDetection IoHwAb_LficICU_P_IcuDisableEdgeDetection
#  define RTE_RUNNABLE_IoHwAb_LficICU_P_IcuDisableNotification IoHwAb_LficICU_P_IcuDisableNotification
#  define RTE_RUNNABLE_IoHwAb_LficICU_P_IcuEnableEdgeDetection IoHwAb_LficICU_P_IcuEnableEdgeDetection
#  define RTE_RUNNABLE_IoHwAb_LficICU_P_IcuEnableNotification IoHwAb_LficICU_P_IcuEnableNotification
#  define RTE_RUNNABLE_IoHwAb_LficNRESDio_P_Read IoHwAb_LficNRESDio_P_Read
#  define RTE_RUNNABLE_IoHwAb_LficNRESDio_P_Write IoHwAb_LficNRESDio_P_Write
#  define RTE_RUNNABLE_IoHwAb_REIoHwAb_10ms IoHwAb_REIoHwAb_10ms
#  define RTE_RUNNABLE_IoHwAb_RficICU_P_IcuDisableEdgeDetection IoHwAb_RficICU_P_IcuDisableEdgeDetection
#  define RTE_RUNNABLE_IoHwAb_RficICU_P_IcuDisableNotification IoHwAb_RficICU_P_IcuDisableNotification
#  define RTE_RUNNABLE_IoHwAb_RficICU_P_IcuEnableEdgeDetection IoHwAb_RficICU_P_IcuEnableEdgeDetection
#  define RTE_RUNNABLE_IoHwAb_RficICU_P_IcuEnableNotification IoHwAb_RficICU_P_IcuEnableNotification
#  define RTE_RUNNABLE_IoHwAb_RficNRESDio_P_Read IoHwAb_RficNRESDio_P_Read
#  define RTE_RUNNABLE_IoHwAb_RficNRESDio_P_Write IoHwAb_RficNRESDio_P_Write
# endif

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_AdInterfaces_P_GetAdiPinState(IOHWAB_UINT8 AdiPinRef, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) AdiPinVoltage, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) LivingPullUpVoltage); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_AdInterfaces_P_GetAdiPinStateAll(P2VAR(VGTT_ScimAdiPinsState, AUTOMATIC, RTE_IOHWAB_APPL_VAR) VoltageOnAdiPins, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) LivingPullUpVoltage); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_AdInterfaces_P_GetPullUpState(P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_Living, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_Parked, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_DAI1, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_DAI2); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_AdInterfaces_P_SetPullUp(IOHWAB_BOOL ActivateLivingPullUp, IOHWAB_BOOL ActivateParkedPullUp, IOHWAB_BOOL ActivateDAIPullUp); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_Do12VInterface_P_GetDo12VPinsState(IOHWAB_UINT8 SelectParkedOrLivingPin, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDo12VActivated, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Do12VPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DcdcRefVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_Do12VInterface_P_SetDcdc12VActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_Do12VInterface_P_SetDo12VLivingActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_Do12VInterface_P_SetDo12VParkedActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowhsInterfaces_P_1_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_UINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowhsInterfaces_P_2_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_UINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_1_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_2_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_3_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_3_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficICU_P_IcuDisableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficICU_P_IcuDisableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficICU_P_IcuEnableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficICU_P_IcuEnableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficNRESDio_P_Read(P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) ReadValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficNRESDio_P_Write(IOHWAB_UINT8 SetValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, IoHwAb_CODE) IoHwAb_REIoHwAb_10ms(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficICU_P_IcuDisableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficICU_P_IcuDisableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficICU_P_IcuEnableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficICU_P_IcuEnableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficNRESDio_P_Read(P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_VAR_NOINIT) ReadValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficNRESDio_P_Write(IOHWAB_UINT8 SetValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define IoHwAb_STOP_SEC_CODE
# include "IoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_AdiInterface_I_IoHwAbApplicationError (1U)

#  define RTE_E_Dio_I_IoHwAbApplicationError (1U)

#  define RTE_E_Do12VInterface_I_IoHwAbApplicationError (1U)

#  define RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError (1U)

#  define RTE_E_DowhsInterface_I_IoHwAbApplicationError (1U)

#  define RTE_E_DowlsInterface_I_IoHwAbApplicationError (1U)

#  define RTE_E_Icu_I_IoHwAbApplicationError (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_IOHWAB_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
