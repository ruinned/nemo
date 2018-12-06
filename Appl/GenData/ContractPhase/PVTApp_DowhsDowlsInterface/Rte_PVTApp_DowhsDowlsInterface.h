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
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim_181121_BB2_Pvt_0_7_DetDisable_00/SCIM_BP.dpa
 *     SW-C Type:  PVTApp_DowhsDowlsInterface
 *  Generated at:  Fri Nov 23 09:22:57 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <PVTApp_DowhsDowlsInterface> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PVTAPP_DOWHSDOWLSINTERFACE_H
# define _RTE_PVTAPP_DOWHSDOWLSINTERFACE_H

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

# include "Rte_PVTApp_DowhsDowlsInterface_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_PVTApp_DowhsDowlsInterface
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_PVTApp_DowhsDowlsInterface, RTE_CONST, RTE_CONST) Rte_Inst_PVTApp_DowhsDowlsInterface; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_PVTApp_DowhsDowlsInterface, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WHS1_Debug_PVT_SCIM_Ctrl_WHS1 (FALSE)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WHS1_Duty_Debug_PVT_SCIM_Ctrl_WHS1_Duty (0U)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WHS1_Freq_Debug_PVT_SCIM_Ctrl_WHS1_Freq (0U)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WHS2_Debug_PVT_SCIM_Ctrl_WHS2 (FALSE)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WHS2_Duty_Debug_PVT_SCIM_Ctrl_WHS2_Duty (0U)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WHS2_Freq_Debug_PVT_SCIM_Ctrl_WHS2_Freq (0U)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS1_Debug_PVT_SCIM_Ctrl_WLS1 (FALSE)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS1_Duty_Debug_PVT_SCIM_Ctrl_WLS1_Duty (0U)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS1_Freq_Debug_PVT_SCIM_Ctrl_WLS1_Freq (0U)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS2_Debug_PVT_SCIM_Ctrl_WLS2 (FALSE)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS2Duty_Debug_PVT_SCIM_Ctrl_WLS2Duty (0U)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS2Freq_Debug_PVT_SCIM_Ctrl_WLS2Freq (0U)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS3_Debug_PVT_SCIM_Ctrl_WLS3 (FALSE)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS3Duty_Debug_PVT_SCIM_Ctrl_WLS3Duty (0U)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_WLS3Freq_Debug_PVT_SCIM_Ctrl_WLS3Freq (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS1_Debug_PVT_SCIM_Ctrl_WHS1(P2VAR(Debug_PVT_SCIM_Ctrl_WHS1_1, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS1_Duty_Debug_PVT_SCIM_Ctrl_WHS1_Duty(P2VAR(Debug_PVT_SCIM_Ctrl_WHS1_Duty_1, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS1_Freq_Debug_PVT_SCIM_Ctrl_WHS1_Freq(P2VAR(Debug_PVT_SCIM_Ctrl_WHS1_Freq_1, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS2_Debug_PVT_SCIM_Ctrl_WHS2(P2VAR(Debug_PVT_SCIM_Ctrl_WHS2_1, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS2_Duty_Debug_PVT_SCIM_Ctrl_WHS2_Duty(P2VAR(Debug_PVT_SCIM_Ctrl_WHS2_Duty_1, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS2_Freq_Debug_PVT_SCIM_Ctrl_WHS2_Freq(P2VAR(Debug_PVT_SCIM_Ctrl_WHS2_Freq_1, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS1_Debug_PVT_SCIM_Ctrl_WLS1(P2VAR(Debug_PVT_SCIM_Ctrl_WLS1_1, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS1_Duty_Debug_PVT_SCIM_Ctrl_WLS1_Duty(P2VAR(Debug_PVT_SCIM_Ctrl_WLS1_Duty_1, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS1_Freq_Debug_PVT_SCIM_Ctrl_WLS1_Freq(P2VAR(Debug_PVT_SCIM_Ctrl_WLS1_Freq_1, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS2_Debug_PVT_SCIM_Ctrl_WLS2(P2VAR(Debug_PVT_SCIM_Ctrl_WLS2_1, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS2Duty_Debug_PVT_SCIM_Ctrl_WLS2Duty(P2VAR(Debug_PVT_SCIM_Ctrl_WLS2Duty_1, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS2Freq_Debug_PVT_SCIM_Ctrl_WLS2Freq(P2VAR(Debug_PVT_SCIM_Ctrl_WLS2Freq_1, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS3_Debug_PVT_SCIM_Ctrl_WLS3(P2VAR(Debug_PVT_SCIM_Ctrl_WLS3_1, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS3Duty_Debug_PVT_SCIM_Ctrl_WLS3Duty(P2VAR(Debug_PVT_SCIM_Ctrl_WLS3Duty_1, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS3Freq_Debug_PVT_SCIM_Ctrl_WLS3Freq(P2VAR(Debug_PVT_SCIM_Ctrl_WLS3Freq_1, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
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
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DowhsDowlsInterface_DowhsInterfaces_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DowhsDowlsInterface_DowhsInterfaces_P_1_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_UINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DowhsDowlsInterface_DowhsInterfaces_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DowhsDowlsInterface_DowhsInterfaces_P_2_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_UINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DowhsDowlsInterface_DowlsInterface_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DowhsDowlsInterface_DowlsInterface_P_1_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DowhsDowlsInterface_DowlsInterface_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DowhsDowlsInterface_DowlsInterface_P_2_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DowhsDowlsInterface_DowlsInterface_P_3_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_PVTAPP_DOWHSDOWLSINTERFACE_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_DowhsDowlsInterface_DowlsInterface_P_3_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Debug_PVT_SCIM_Ctrl_WHS1 Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS1_Debug_PVT_SCIM_Ctrl_WHS1
# define Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Duty_Debug_PVT_SCIM_Ctrl_WHS1_Duty Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS1_Duty_Debug_PVT_SCIM_Ctrl_WHS1_Duty
# define Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Freq_Debug_PVT_SCIM_Ctrl_WHS1_Freq Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS1_Freq_Debug_PVT_SCIM_Ctrl_WHS1_Freq
# define Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Debug_PVT_SCIM_Ctrl_WHS2 Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS2_Debug_PVT_SCIM_Ctrl_WHS2
# define Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Duty_Debug_PVT_SCIM_Ctrl_WHS2_Duty Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS2_Duty_Debug_PVT_SCIM_Ctrl_WHS2_Duty
# define Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Freq_Debug_PVT_SCIM_Ctrl_WHS2_Freq Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WHS2_Freq_Debug_PVT_SCIM_Ctrl_WHS2_Freq
# define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Debug_PVT_SCIM_Ctrl_WLS1 Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS1_Debug_PVT_SCIM_Ctrl_WLS1
# define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Duty_Debug_PVT_SCIM_Ctrl_WLS1_Duty Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS1_Duty_Debug_PVT_SCIM_Ctrl_WLS1_Duty
# define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Freq_Debug_PVT_SCIM_Ctrl_WLS1_Freq Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS1_Freq_Debug_PVT_SCIM_Ctrl_WLS1_Freq
# define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2_Debug_PVT_SCIM_Ctrl_WLS2 Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS2_Debug_PVT_SCIM_Ctrl_WLS2
# define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2Duty_Debug_PVT_SCIM_Ctrl_WLS2Duty Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS2Duty_Debug_PVT_SCIM_Ctrl_WLS2Duty
# define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2Freq_Debug_PVT_SCIM_Ctrl_WLS2Freq Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS2Freq_Debug_PVT_SCIM_Ctrl_WLS2Freq
# define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3_Debug_PVT_SCIM_Ctrl_WLS3 Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS3_Debug_PVT_SCIM_Ctrl_WLS3
# define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3Duty_Debug_PVT_SCIM_Ctrl_WLS3Duty Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS3Duty_Debug_PVT_SCIM_Ctrl_WLS3Duty
# define Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3Freq_Debug_PVT_SCIM_Ctrl_WLS3Freq Rte_Read_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_Ctrl_WLS3Freq_Debug_PVT_SCIM_Ctrl_WLS3Freq


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty
# define Rte_Write_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault
# define Rte_Write_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq
# define Rte_Write_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt
# define Rte_Write_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty
# define Rte_Write_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault
# define Rte_Write_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq
# define Rte_Write_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt
# define Rte_Write_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty
# define Rte_Write_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault
# define Rte_Write_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq
# define Rte_Write_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt
# define Rte_Write_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty
# define Rte_Write_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault
# define Rte_Write_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq
# define Rte_Write_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt
# define Rte_Write_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty
# define Rte_Write_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault
# define Rte_Write_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq
# define Rte_Write_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_DowhsInterfaces_P_1_GetDoPinStateOne Rte_Call_PVTApp_DowhsDowlsInterface_DowhsInterfaces_P_1_GetDoPinStateOne
# define Rte_Call_DowhsInterfaces_P_1_SetDowActive Rte_Call_PVTApp_DowhsDowlsInterface_DowhsInterfaces_P_1_SetDowActive
# define Rte_Call_DowhsInterfaces_P_2_GetDoPinStateOne Rte_Call_PVTApp_DowhsDowlsInterface_DowhsInterfaces_P_2_GetDoPinStateOne
# define Rte_Call_DowhsInterfaces_P_2_SetDowActive Rte_Call_PVTApp_DowhsDowlsInterface_DowhsInterfaces_P_2_SetDowActive
# define Rte_Call_DowlsInterface_P_1_GetDoPinStateOne Rte_Call_PVTApp_DowhsDowlsInterface_DowlsInterface_P_1_GetDoPinStateOne
# define Rte_Call_DowlsInterface_P_1_SetDowlsActive Rte_Call_PVTApp_DowhsDowlsInterface_DowlsInterface_P_1_SetDowlsActive
# define Rte_Call_DowlsInterface_P_2_GetDoPinStateOne Rte_Call_PVTApp_DowhsDowlsInterface_DowlsInterface_P_2_GetDoPinStateOne
# define Rte_Call_DowlsInterface_P_2_SetDowlsActive Rte_Call_PVTApp_DowhsDowlsInterface_DowlsInterface_P_2_SetDowlsActive
# define Rte_Call_DowlsInterface_P_3_GetDoPinStateOne Rte_Call_PVTApp_DowhsDowlsInterface_DowlsInterface_P_3_GetDoPinStateOne
# define Rte_Call_DowlsInterface_P_3_SetDowlsActive Rte_Call_PVTApp_DowhsDowlsInterface_DowlsInterface_P_3_SetDowlsActive




# define PVTApp_DowhsDowlsInterface_START_SEC_CODE
# include "PVTApp_DowhsDowlsInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_PvtDowhsDowlsInterface
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
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Debug_PVT_SCIM_Ctrl_WHS1(Debug_PVT_SCIM_Ctrl_WHS1_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Duty_Debug_PVT_SCIM_Ctrl_WHS1_Duty(Debug_PVT_SCIM_Ctrl_WHS1_Duty_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WHS1_Freq_Debug_PVT_SCIM_Ctrl_WHS1_Freq(Debug_PVT_SCIM_Ctrl_WHS1_Freq_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Debug_PVT_SCIM_Ctrl_WHS2(Debug_PVT_SCIM_Ctrl_WHS2_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Duty_Debug_PVT_SCIM_Ctrl_WHS2_Duty(Debug_PVT_SCIM_Ctrl_WHS2_Duty_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WHS2_Freq_Debug_PVT_SCIM_Ctrl_WHS2_Freq(Debug_PVT_SCIM_Ctrl_WHS2_Freq_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Debug_PVT_SCIM_Ctrl_WLS1(Debug_PVT_SCIM_Ctrl_WLS1_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Duty_Debug_PVT_SCIM_Ctrl_WLS1_Duty(Debug_PVT_SCIM_Ctrl_WLS1_Duty_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS1_Freq_Debug_PVT_SCIM_Ctrl_WLS1_Freq(Debug_PVT_SCIM_Ctrl_WLS1_Freq_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2_Debug_PVT_SCIM_Ctrl_WLS2(Debug_PVT_SCIM_Ctrl_WLS2_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2Duty_Debug_PVT_SCIM_Ctrl_WLS2Duty(Debug_PVT_SCIM_Ctrl_WLS2Duty_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS2Freq_Debug_PVT_SCIM_Ctrl_WLS2Freq(Debug_PVT_SCIM_Ctrl_WLS2Freq_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3_Debug_PVT_SCIM_Ctrl_WLS3(Debug_PVT_SCIM_Ctrl_WLS3_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3Duty_Debug_PVT_SCIM_Ctrl_WLS3Duty(Debug_PVT_SCIM_Ctrl_WLS3Duty_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_SCIM_Ctrl_WLS3Freq_Debug_PVT_SCIM_Ctrl_WLS3Freq(Debug_PVT_SCIM_Ctrl_WLS3Freq_1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty(Debug_PVT_SCIM_RD_WHS1_Duty_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault(Debug_PVT_SCIM_RD_WHS1_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq(Debug_PVT_SCIM_RD_WHS1_Freq_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt(Debug_PVT_SCIM_RD_WHS1_Volt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty(Debug_PVT_SCIM_RD_WHS2_Duty_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault(Debug_PVT_SCIM_RD_WHS2_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq(Debug_PVT_SCIM_RD_WHS2_Freq_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt(Debug_PVT_SCIM_RD_WHS2_Volt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty(Debug_PVT_SCIM_RD_WLS1_Duty_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault(Debug_PVT_SCIM_RD_WLS1_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq(Debug_PVT_SCIM_RD_WLS1_Freq_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt(Debug_PVT_SCIM_RD_WLS1_Volt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty(Debug_PVT_SCIM_RD_WLS2_Duty_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault(Debug_PVT_SCIM_RD_WLS2_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq(Debug_PVT_SCIM_RD_WLS2_Freq_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt(Debug_PVT_SCIM_RD_WLS2_Volt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty(Debug_PVT_SCIM_RD_WLS3_Duty_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault(Debug_PVT_SCIM_RD_WLS3_Fault_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq(Debug_PVT_SCIM_RD_WLS3_Freq_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt(Debug_PVT_SCIM_RD_WLS3_Volt_1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DowhsInterfaces_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_UINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowhsInterfaces_P_1_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_UINT8 DutyCycle)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowhsInterfaces_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_UINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowhsInterfaces_P_2_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_UINT8 DutyCycle)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowlsInterface_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_UINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowlsInterface_P_1_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowlsInterface_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_UINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowlsInterface_P_2_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowlsInterface_P_3_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_UINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_DowlsInterface_P_3_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Re_PvtDowhsDowlsInterface Re_PvtDowhsDowlsInterface
FUNC(void, PVTApp_DowhsDowlsInterface_CODE) Re_PvtDowhsDowlsInterface(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define PVTApp_DowhsDowlsInterface_STOP_SEC_CODE
# include "PVTApp_DowhsDowlsInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_DowhsInterface_I_IoHwAbApplicationError (1U)

# define RTE_E_DowlsInterface_I_IoHwAbApplicationError (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_PVTAPP_DOWHSDOWLSINTERFACE_H */
