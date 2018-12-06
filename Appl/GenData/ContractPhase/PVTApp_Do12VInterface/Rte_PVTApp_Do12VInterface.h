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
 *          File:  Rte_PVTApp_Do12VInterface.h
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim_181121_BB2_Pvt_0_7_DetDisable_00/SCIM_BP.dpa
 *     SW-C Type:  PVTApp_Do12VInterface
 *  Generated at:  Fri Nov 23 09:22:52 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <PVTApp_Do12VInterface> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PVTAPP_DO12VINTERFACE_H
# define _RTE_PVTAPP_DO12VINTERFACE_H

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

# include "Rte_PVTApp_Do12VInterface_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_PVTApp_Do12VInterface
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_PVTApp_Do12VInterface, RTE_CONST, RTE_CONST) Rte_Inst_PVTApp_Do12VInterface; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_PVTApp_Do12VInterface, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_12VDCDC_Debug_PVT_SCIM_Ctrl_12VDCDC (FALSE)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_12VLiving_Debug_PVT_SCIM_Ctrl_12VLiving (FALSE)
# define Rte_InitValue_Debug_PVT_SCIM_Ctrl_12VParked_Debug_PVT_SCIM_Ctrl_12VParked (FALSE)
# define Rte_InitValue_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt (0U)
# define Rte_InitValue_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Debug_PVT_SCIM_Ctrl_12VDCDC_1, RTE_CODE) Rte_DRead_PVTApp_Do12VInterface_Debug_PVT_SCIM_Ctrl_12VDCDC_Debug_PVT_SCIM_Ctrl_12VDCDC(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Debug_PVT_SCIM_Ctrl_12VLiving_1, RTE_CODE) Rte_DRead_PVTApp_Do12VInterface_Debug_PVT_SCIM_Ctrl_12VLiving_Debug_PVT_SCIM_Ctrl_12VLiving(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Debug_PVT_SCIM_Ctrl_12VParked_1, RTE_CODE) Rte_DRead_PVTApp_Do12VInterface_Debug_PVT_SCIM_Ctrl_12VParked_Debug_PVT_SCIM_Ctrl_12VParked(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault(Debug_PVT_SCIM_RD_12VDCDCFault data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt(Debug_PVT_SCIM_RD_12VDCDCVolt data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT(Debug_PVT_SCIM_RD_VBAT_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_Do12VInterface_Do12VInterface_P_GetDo12VPinsState(IOHWAB_UINT8 SelectParkedOrLivingPin, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_PVTAPP_DO12VINTERFACE_APPL_VAR) IsDo12VActivated, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_PVTAPP_DO12VINTERFACE_APPL_VAR) Do12VPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_PVTAPP_DO12VINTERFACE_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_PVTAPP_DO12VINTERFACE_APPL_VAR) DcdcRefVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_PVTAPP_DO12VINTERFACE_APPL_VAR) DiagStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_Do12VInterface_Do12VInterface_P_SetDcdc12VActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_Do12VInterface_Do12VInterface_P_SetDo12VLivingActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PVTApp_Do12VInterface_Do12VInterface_P_SetDo12VParkedActive(IOHWAB_BOOL Activation); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_DRead_Debug_PVT_SCIM_Ctrl_12VDCDC_Debug_PVT_SCIM_Ctrl_12VDCDC Rte_DRead_PVTApp_Do12VInterface_Debug_PVT_SCIM_Ctrl_12VDCDC_Debug_PVT_SCIM_Ctrl_12VDCDC
# define Rte_DRead_Debug_PVT_SCIM_Ctrl_12VLiving_Debug_PVT_SCIM_Ctrl_12VLiving Rte_DRead_PVTApp_Do12VInterface_Debug_PVT_SCIM_Ctrl_12VLiving_Debug_PVT_SCIM_Ctrl_12VLiving
# define Rte_DRead_Debug_PVT_SCIM_Ctrl_12VParked_Debug_PVT_SCIM_Ctrl_12VParked Rte_DRead_PVTApp_Do12VInterface_Debug_PVT_SCIM_Ctrl_12VParked_Debug_PVT_SCIM_Ctrl_12VParked


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault Rte_Write_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault
# define Rte_Write_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt Rte_Write_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt
# define Rte_Write_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT Rte_Write_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_Do12VInterface_P_GetDo12VPinsState Rte_Call_PVTApp_Do12VInterface_Do12VInterface_P_GetDo12VPinsState
# define Rte_Call_Do12VInterface_P_SetDcdc12VActive Rte_Call_PVTApp_Do12VInterface_Do12VInterface_P_SetDcdc12VActive
# define Rte_Call_Do12VInterface_P_SetDo12VLivingActive Rte_Call_PVTApp_Do12VInterface_Do12VInterface_P_SetDo12VLivingActive
# define Rte_Call_Do12VInterface_P_SetDo12VParkedActive Rte_Call_PVTApp_Do12VInterface_Do12VInterface_P_SetDo12VParkedActive




# define PVTApp_Do12VInterface_START_SEC_CODE
# include "PVTApp_Do12VInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_PvtDo12VInterface
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
 *   Debug_PVT_SCIM_Ctrl_12VDCDC_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_12VDCDC_Debug_PVT_SCIM_Ctrl_12VDCDC(void)
 *   Debug_PVT_SCIM_Ctrl_12VLiving_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_12VLiving_Debug_PVT_SCIM_Ctrl_12VLiving(void)
 *   Debug_PVT_SCIM_Ctrl_12VParked_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_12VParked_Debug_PVT_SCIM_Ctrl_12VParked(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault(Debug_PVT_SCIM_RD_12VDCDCFault data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt(Debug_PVT_SCIM_RD_12VDCDCVolt data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT(Debug_PVT_SCIM_RD_VBAT_1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_Do12VInterface_P_GetDo12VPinsState(IOHWAB_UINT8 SelectParkedOrLivingPin, IOHWAB_BOOL *IsDo12VActivated, VGTT_EcuPinVoltage_0V2 *Do12VPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinVoltage_0V2 *DcdcRefVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_Do12VInterface_P_SetDcdc12VActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_Do12VInterface_P_SetDo12VLivingActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_Do12VInterface_P_SetDo12VParkedActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Re_PvtDo12VInterface Re_PvtDo12VInterface
FUNC(void, PVTApp_Do12VInterface_CODE) Re_PvtDo12VInterface(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define PVTApp_Do12VInterface_STOP_SEC_CODE
# include "PVTApp_Do12VInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_Do12VInterface_I_IoHwAbApplicationError (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_PVTAPP_DO12VINTERFACE_H */
