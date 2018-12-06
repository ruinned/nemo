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
 *          File:  Rte_PVTApp_DowhsDowlsInterface.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <PVTApp_DowhsDowlsInterface>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PVTAPP_DOWHSDOWLSINTERFACE_H
# define _RTE_PVTAPP_DOWHSDOWLSINTERFACE_H

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

# include "Rte_PVTApp_DowhsDowlsInterface_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Debug_PVT_SCIM_Ctrl_WHS1_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_a57cfe3c_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_WHS1_Duty_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WHS1_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_aec1e12e_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_WHS1_Freq_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WHS1_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_31c9eab2_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_WHS2_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_fe6b4f29_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_WHS2_Duty_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WHS2_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_e329e149_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_WHS2_Freq_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WHS2_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_7c21ead5_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_WLS1_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS1_oDebugCtrl2_SCIM_BB2_oBackbone2_56f82f7d_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_WLS1_Duty_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS1_Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_055e2012_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_WLS1_Freq_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS1_Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_9a562b8e_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_WLS2_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS2_oDebugCtrl2_SCIM_BB2_oBackbone2_0def9e68_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_WLS2Duty_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS2Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_1529858b_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_WLS2Freq_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS2Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_8a218e17_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_WLS3_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS3_oDebugCtrl2_SCIM_BB2_oBackbone2_3b1d0e9b_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_WLS3Duty_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS3Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_95d99294_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_SCIM_Ctrl_WLS3Freq_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS3Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_0ad19908_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WHS1_Debug_PVT_SCIM_Ctrl_WHS1 (FALSE)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WHS1_Duty_Debug_PVT_SCIM_Ctrl_WHS1_Duty (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WHS1_Freq_Debug_PVT_SCIM_Ctrl_WHS1_Freq (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WHS2_Debug_PVT_SCIM_Ctrl_WHS2 (FALSE)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WHS2_Duty_Debug_PVT_SCIM_Ctrl_WHS2_Duty (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WHS2_Freq_Debug_PVT_SCIM_Ctrl_WHS2_Freq (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS1_Debug_PVT_SCIM_Ctrl_WLS1 (FALSE)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS1_Duty_Debug_PVT_SCIM_Ctrl_WLS1_Duty (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS1_Freq_Debug_PVT_SCIM_Ctrl_WLS1_Freq (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS2_Debug_PVT_SCIM_Ctrl_WLS2 (FALSE)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS2Duty_Debug_PVT_SCIM_Ctrl_WLS2Duty (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS2Freq_Debug_PVT_SCIM_Ctrl_WLS2Freq (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS3_Debug_PVT_SCIM_Ctrl_WLS3 (FALSE)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS3Duty_Debug_PVT_SCIM_Ctrl_WLS3Duty (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS3Freq_Debug_PVT_SCIM_Ctrl_WLS3Freq (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty(Debug_PVT_SCIM_RD_WHS1_Duty_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault(Debug_PVT_SCIM_RD_WHS1_Fault_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq(Debug_PVT_SCIM_RD_WHS1_Freq_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt(Debug_PVT_SCIM_RD_WHS1_Volt_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty(Debug_PVT_SCIM_RD_WHS2_Duty_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault(Debug_PVT_SCIM_RD_WHS2_Fault_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq(Debug_PVT_SCIM_RD_WHS2_Freq_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt(Debug_PVT_SCIM_RD_WHS2_Volt_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty(Debug_PVT_SCIM_RD_WLS1_Duty_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault(Debug_PVT_SCIM_RD_WLS1_Fault_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq(Debug_PVT_SCIM_RD_WLS1_Freq_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt(Debug_PVT_SCIM_RD_WLS1_Volt_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty(Debug_PVT_SCIM_RD_WLS2_Duty_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault(Debug_PVT_SCIM_RD_WLS2_Fault_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq(Debug_PVT_SCIM_RD_WLS2_Freq_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt(Debug_PVT_SCIM_RD_WLS2_Volt_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty(Debug_PVT_SCIM_RD_WLS3_Duty_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault(Debug_PVT_SCIM_RD_WLS3_Fault_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq(Debug_PVT_SCIM_RD_WLS3_Freq_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt(Debug_PVT_SCIM_RD_WLS3_Volt_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Debug_PVT_SCIM_Ctrl_WHS1 Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS1_Debug_PVT_SCIM_Ctrl_WHS1
#  define Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS1_Debug_PVT_SCIM_Ctrl_WHS1(data) (*(data) = Rte_Debug_PVT_SCIM_Ctrl_WHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_a57cfe3c_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Duty_Debug_PVT_SCIM_Ctrl_WHS1_Duty Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS1_Duty_Debug_PVT_SCIM_Ctrl_WHS1_Duty
#  define Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS1_Duty_Debug_PVT_SCIM_Ctrl_WHS1_Duty(data) (*(data) = Rte_Debug_PVT_SCIM_Ctrl_WHS1_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_aec1e12e_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Freq_Debug_PVT_SCIM_Ctrl_WHS1_Freq Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS1_Freq_Debug_PVT_SCIM_Ctrl_WHS1_Freq
#  define Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS1_Freq_Debug_PVT_SCIM_Ctrl_WHS1_Freq(data) (*(data) = Rte_Debug_PVT_SCIM_Ctrl_WHS1_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_31c9eab2_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Debug_PVT_SCIM_Ctrl_WHS2 Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS2_Debug_PVT_SCIM_Ctrl_WHS2
#  define Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS2_Debug_PVT_SCIM_Ctrl_WHS2(data) (*(data) = Rte_Debug_PVT_SCIM_Ctrl_WHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_fe6b4f29_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Duty_Debug_PVT_SCIM_Ctrl_WHS2_Duty Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS2_Duty_Debug_PVT_SCIM_Ctrl_WHS2_Duty
#  define Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS2_Duty_Debug_PVT_SCIM_Ctrl_WHS2_Duty(data) (*(data) = Rte_Debug_PVT_SCIM_Ctrl_WHS2_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_e329e149_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Freq_Debug_PVT_SCIM_Ctrl_WHS2_Freq Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS2_Freq_Debug_PVT_SCIM_Ctrl_WHS2_Freq
#  define Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS2_Freq_Debug_PVT_SCIM_Ctrl_WHS2_Freq(data) (*(data) = Rte_Debug_PVT_SCIM_Ctrl_WHS2_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_7c21ead5_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Debug_PVT_SCIM_Ctrl_WLS1 Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS1_Debug_PVT_SCIM_Ctrl_WLS1
#  define Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS1_Debug_PVT_SCIM_Ctrl_WLS1(data) (*(data) = Rte_Debug_PVT_SCIM_Ctrl_WLS1_oDebugCtrl2_SCIM_BB2_oBackbone2_56f82f7d_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Duty_Debug_PVT_SCIM_Ctrl_WLS1_Duty Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS1_Duty_Debug_PVT_SCIM_Ctrl_WLS1_Duty
#  define Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS1_Duty_Debug_PVT_SCIM_Ctrl_WLS1_Duty(data) (*(data) = Rte_Debug_PVT_SCIM_Ctrl_WLS1_Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_055e2012_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Freq_Debug_PVT_SCIM_Ctrl_WLS1_Freq Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS1_Freq_Debug_PVT_SCIM_Ctrl_WLS1_Freq
#  define Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS1_Freq_Debug_PVT_SCIM_Ctrl_WLS1_Freq(data) (*(data) = Rte_Debug_PVT_SCIM_Ctrl_WLS1_Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_9a562b8e_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2_Debug_PVT_SCIM_Ctrl_WLS2 Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS2_Debug_PVT_SCIM_Ctrl_WLS2
#  define Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS2_Debug_PVT_SCIM_Ctrl_WLS2(data) (*(data) = Rte_Debug_PVT_SCIM_Ctrl_WLS2_oDebugCtrl2_SCIM_BB2_oBackbone2_0def9e68_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2Duty_Debug_PVT_SCIM_Ctrl_WLS2Duty Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS2Duty_Debug_PVT_SCIM_Ctrl_WLS2Duty
#  define Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS2Duty_Debug_PVT_SCIM_Ctrl_WLS2Duty(data) (*(data) = Rte_Debug_PVT_SCIM_Ctrl_WLS2Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_1529858b_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2Freq_Debug_PVT_SCIM_Ctrl_WLS2Freq Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS2Freq_Debug_PVT_SCIM_Ctrl_WLS2Freq
#  define Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS2Freq_Debug_PVT_SCIM_Ctrl_WLS2Freq(data) (*(data) = Rte_Debug_PVT_SCIM_Ctrl_WLS2Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_8a218e17_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3_Debug_PVT_SCIM_Ctrl_WLS3 Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS3_Debug_PVT_SCIM_Ctrl_WLS3
#  define Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS3_Debug_PVT_SCIM_Ctrl_WLS3(data) (*(data) = Rte_Debug_PVT_SCIM_Ctrl_WLS3_oDebugCtrl2_SCIM_BB2_oBackbone2_3b1d0e9b_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3Duty_Debug_PVT_SCIM_Ctrl_WLS3Duty Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS3Duty_Debug_PVT_SCIM_Ctrl_WLS3Duty
#  define Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS3Duty_Debug_PVT_SCIM_Ctrl_WLS3Duty(data) (*(data) = Rte_Debug_PVT_SCIM_Ctrl_WLS3Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_95d99294_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3Freq_Debug_PVT_SCIM_Ctrl_WLS3Freq Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS3Freq_Debug_PVT_SCIM_Ctrl_WLS3Freq
#  define Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS3Freq_Debug_PVT_SCIM_Ctrl_WLS3Freq(data) (*(data) = Rte_Debug_PVT_SCIM_Ctrl_WLS3Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_0ad19908_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty
#  define Rte_Write_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault
#  define Rte_Write_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq
#  define Rte_Write_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt
#  define Rte_Write_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty
#  define Rte_Write_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault
#  define Rte_Write_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq
#  define Rte_Write_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt
#  define Rte_Write_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty
#  define Rte_Write_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault
#  define Rte_Write_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq
#  define Rte_Write_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt
#  define Rte_Write_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty
#  define Rte_Write_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault
#  define Rte_Write_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq
#  define Rte_Write_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt
#  define Rte_Write_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty
#  define Rte_Write_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault
#  define Rte_Write_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq
#  define Rte_Write_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DowhsInterfaces_P_1_GetDoPinStateOne IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DowhsInterfaces_P_1_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_UINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DowhsInterfaces_P_1_SetDowActive IoHwAb_DowhsInterfaces_P_1_SetDowActive
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DowhsInterfaces_P_2_GetDoPinStateOne IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DowhsInterfaces_P_2_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_UINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DowhsInterfaces_P_2_SetDowActive IoHwAb_DowhsInterfaces_P_2_SetDowActive
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DowlsInterface_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DowlsInterface_P_1_GetDoPinStateOne IoHwAb_DowlsInterface_P_1_GetDoPinStateOne
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DowlsInterface_P_1_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DowlsInterface_P_1_SetDowlsActive IoHwAb_DowlsInterface_P_1_SetDowlsActive
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DowlsInterface_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DowlsInterface_P_2_GetDoPinStateOne IoHwAb_DowlsInterface_P_2_GetDoPinStateOne
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DowlsInterface_P_2_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DowlsInterface_P_2_SetDowlsActive IoHwAb_DowlsInterface_P_2_SetDowlsActive
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DowlsInterface_P_3_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DowlsInterface_P_3_GetDoPinStateOne IoHwAb_DowlsInterface_P_3_GetDoPinStateOne
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_DowlsInterface_P_3_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DowlsInterface_P_3_SetDowlsActive IoHwAb_DowlsInterface_P_3_SetDowlsActive


# endif /* !defined(RTE_CORE) */


# define PVTApp_DowhsDowlsInterface_START_SEC_CODE
# include "PVTApp_DowhsDowlsInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Re_PvtDowhsDowlsInterface Re_PvtDowhsDowlsInterface
# endif

FUNC(void, PVTApp_DowhsDowlsInterface_CODE) Re_PvtDowhsDowlsInterface(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define PVTApp_DowhsDowlsInterface_STOP_SEC_CODE
# include "PVTApp_DowhsDowlsInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_DowhsInterface_I_IoHwAbApplicationError (1U)

#  define RTE_E_DowlsInterface_I_IoHwAbApplicationError (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_PVTAPP_DOWHSDOWLSINTERFACE_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
