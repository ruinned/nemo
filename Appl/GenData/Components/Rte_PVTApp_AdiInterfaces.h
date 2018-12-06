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
 *          File:  Rte_PVTApp_AdiInterfaces.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <PVTApp_AdiInterfaces>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PVTAPP_ADIINTERFACES_H
# define _RTE_PVTAPP_ADIINTERFACES_H

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

# include "Rte_PVTApp_AdiInterfaces_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Debug_PVT_SCIM_Ctrl_DaiPullUp_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_DAIPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_2731869d_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_LivingPullUp_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_LivingPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_666b21d3_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_ParkedPullUp_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_ParkedPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_bf982706_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ABSInhibitRqstDenied_ABSInhibitRqstDenied (3U)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_DaiPullUp_1_Debug_PVT_SCIM_Ctrl_DaiPullUp (FALSE)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_LivingPullUp_Debug_PVT_SCIM_Ctrl_LivingPullUp (FALSE)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_ParkedPullUp_Debug_PVT_SCIM_Ctrl_ParkedPullUp (FALSE)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1 (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2 (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt(Debug_PVT_SCIM_RD_12VLivingVolt_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt(Debug_PVT_SCIM_RD_12VParkedVolt_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01(Debug_PVT_SCIM_RD_ADI01_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02(Debug_PVT_SCIM_RD_ADI02_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03(Debug_PVT_SCIM_RD_ADI03_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04(Debug_PVT_SCIM_RD_ADI04_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05(Debug_PVT_SCIM_RD_ADI05_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06(Debug_PVT_SCIM_RD_ADI06_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07(Debug_PVT_SCIM_RD_ADI07_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08(Debug_PVT_SCIM_RD_ADI08_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09(Debug_PVT_SCIM_RD_ADI09_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10(Debug_PVT_SCIM_RD_ADI10_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11(Debug_PVT_SCIM_RD_ADI11_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12(Debug_PVT_SCIM_RD_ADI12_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13(Debug_PVT_SCIM_RD_ADI13_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14(Debug_PVT_SCIM_RD_ADI14_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15(Debug_PVT_SCIM_RD_ADI15_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16(Debug_PVT_SCIM_RD_ADI16_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1(Debug_PVT_SCIM_RD_DAI1_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2(Debug_PVT_SCIM_RD_DAI2_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_DRead_Debug_PVT_SCIM_Ctrl_DaiPullUp_1_Debug_PVT_SCIM_Ctrl_DaiPullUp Rte_DRead_PVTApp_AdiInterfaces_Debug_PVT_SCIM_Ctrl_DaiPullUp_1_Debug_PVT_SCIM_Ctrl_DaiPullUp
#  define Rte_DRead_PVTApp_AdiInterfaces_Debug_PVT_SCIM_Ctrl_DaiPullUp_1_Debug_PVT_SCIM_Ctrl_DaiPullUp() (Rte_Debug_PVT_SCIM_Ctrl_DAIPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_2731869d_Rx) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_DRead_Debug_PVT_SCIM_Ctrl_LivingPullUp_Debug_PVT_SCIM_Ctrl_LivingPullUp Rte_DRead_PVTApp_AdiInterfaces_Debug_PVT_SCIM_Ctrl_LivingPullUp_Debug_PVT_SCIM_Ctrl_LivingPullUp
#  define Rte_DRead_PVTApp_AdiInterfaces_Debug_PVT_SCIM_Ctrl_LivingPullUp_Debug_PVT_SCIM_Ctrl_LivingPullUp() (Rte_Debug_PVT_SCIM_Ctrl_LivingPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_666b21d3_Rx) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_DRead_Debug_PVT_SCIM_Ctrl_ParkedPullUp_Debug_PVT_SCIM_Ctrl_ParkedPullUp Rte_DRead_PVTApp_AdiInterfaces_Debug_PVT_SCIM_Ctrl_ParkedPullUp_Debug_PVT_SCIM_Ctrl_ParkedPullUp
#  define Rte_DRead_PVTApp_AdiInterfaces_Debug_PVT_SCIM_Ctrl_ParkedPullUp_Debug_PVT_SCIM_Ctrl_ParkedPullUp() (Rte_Debug_PVT_SCIM_Ctrl_ParkedPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_bf982706_Rx) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt
#  define Rte_Write_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15
#  define Rte_Write_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16
#  define Rte_Write_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1
#  define Rte_Write_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2 Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_AdInterfaces_P_GetAdiPinState(IOHWAB_UINT8 AdiPinRef, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) AdiPinVoltage, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) LivingPullUpVoltage); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_AdiInterfaces_P_GetAdiPinState IoHwAb_AdInterfaces_P_GetAdiPinState
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_AdInterfaces_P_GetAdiPinStateAll(P2VAR(VGTT_ScimAdiPinsState, AUTOMATIC, RTE_IOHWAB_APPL_VAR) VoltageOnAdiPins, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) LivingPullUpVoltage); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_AdiInterfaces_P_GetAdiPinStateAll IoHwAb_AdInterfaces_P_GetAdiPinStateAll
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_AdInterfaces_P_GetPullUpState(P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_Living, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_Parked, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_DAI1, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_DAI2); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_AdiInterfaces_P_GetPullUpState IoHwAb_AdInterfaces_P_GetPullUpState
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_AdInterfaces_P_SetPullUp(IOHWAB_BOOL ActivateLivingPullUp, IOHWAB_BOOL ActivateParkedPullUp, IOHWAB_BOOL ActivateDAIPullUp); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_AdiInterfaces_P_SetPullUp IoHwAb_AdInterfaces_P_SetPullUp


# endif /* !defined(RTE_CORE) */


# define PVTApp_AdiInterfaces_START_SEC_CODE
# include "PVTApp_AdiInterfaces_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Re_PvtAdInterfaces Re_PvtAdInterfaces
# endif

FUNC(void, PVTApp_AdiInterfaces_CODE) Re_PvtAdInterfaces(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define PVTApp_AdiInterfaces_STOP_SEC_CODE
# include "PVTApp_AdiInterfaces_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_AdiInterface_I_IoHwAbApplicationError (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_PVTAPP_ADIINTERFACES_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
