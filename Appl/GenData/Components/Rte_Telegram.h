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
 *          File:  Rte_Telegram.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <Telegram>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TELEGRAM_H
# define _RTE_TELEGRAM_H

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

# include "Rte_Telegram_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Debug_PVT_PEPS_Ant_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_Ant_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f212143a_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_GainP1_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP1_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_7b701f8e_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_GainP2_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP2_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_36981fe9_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_GainP3_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP3_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_bb10e20b_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_GainP4_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP4_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_ad481f27_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_VDSI_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_VDSI_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_e74c4cec_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

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

#  define Rte_InitValue_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat (0)
#  define Rte_InitValue_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat (0U)
#  define Rte_InitValue_RficSysModeConfirm_P_SR_RficSysModeConfirm (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat(Debug_PVT_PEPS_AntCtrl_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat(Debug_PVT_PEPS_GainP1_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat(Debug_PVT_PEPS_GainP2_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat(Debug_PVT_PEPS_GainP3_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat(Debug_PVT_PEPS_GainP4_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat(Debug_PVT_PEPS_Logic_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI(Debug_PVT_PEPS_P1_MaxRSSI data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI(Debug_PVT_PEPS_P2_MaxRSSI data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI(Debug_PVT_PEPS_P3_MaxRSSI data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI(Debug_PVT_PEPS_P4_MaxRSSI data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat(Debug_PVT_PEPS_VDSI_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl Rte_Read_Telegram_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl
#  define Rte_Read_Telegram_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_Ant_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f212143a_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl Rte_Read_Telegram_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl
#  define Rte_Read_Telegram_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_GainP1_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_7b701f8e_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl Rte_Read_Telegram_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl
#  define Rte_Read_Telegram_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_GainP2_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_36981fe9_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl Rte_Read_Telegram_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl
#  define Rte_Read_Telegram_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_GainP3_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_bb10e20b_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl Rte_Read_Telegram_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl
#  define Rte_Read_Telegram_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_GainP4_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_ad481f27_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl Rte_Read_Telegram_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl
#  define Rte_Read_Telegram_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_VDSI_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_e74c4cec_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RficSysModeConfirm_P_SR_RficSysModeConfirm Rte_Read_Telegram_RficSysModeConfirm_P_SR_RficSysModeConfirm
#  define Rte_Read_Telegram_RficSysModeConfirm_P_SR_RficSysModeConfirm(data) (*(data) = Rte_CDD_RFIC_RficSysModeConfirm_P_SR_RficSysModeConfirm, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat Rte_Write_Telegram_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat
#  define Rte_Write_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat Rte_Write_Telegram_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat
#  define Rte_Write_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat Rte_Write_Telegram_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat
#  define Rte_Write_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat Rte_Write_Telegram_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat
#  define Rte_Write_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat Rte_Write_Telegram_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat
#  define Rte_Write_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat Rte_Write_Telegram_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat
#  define Rte_Write_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI Rte_Write_Telegram_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI
#  define Rte_Write_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI Rte_Write_Telegram_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI
#  define Rte_Write_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI Rte_Write_Telegram_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI
#  define Rte_Write_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI Rte_Write_Telegram_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI
#  define Rte_Write_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat Rte_Write_Telegram_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_LFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_LFIC_APPL_CODE) RE_LFIC_Init(uint8 Gain_vehicleOption); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_LFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_LfICInit_P_CS(arg1) (RE_LFIC_Init(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_LficNRESDio_P_Write(IOHWAB_UINT8 SetValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_LficNRESDio_R_Write IoHwAb_LficNRESDio_P_Write
#  define RTE_START_SEC_CDD_RFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_RFIC_APPL_CODE) RE_rfic_init(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_RFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RficInit_P_CS() (RE_rfic_init(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_RFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_RFIC_APPL_CODE) RE_SearchSysmode(uint8 RFIC_SystemMode, uint8 RFIC_ReqCmd); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_RFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SearchSysMode_P_CS(arg1, arg2) (RE_SearchSysmode(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_LFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_CDD_LFIC_APPL_CODE) RE_SetupLF_Telegram(uint8 b_AntenaIndex, uint8 b_SearchPattern, uint16 Counter_LFRawDataBit, P2CONST(uint8, AUTOMATIC, RTE_CDD_LFIC_APPL_DATA) Buffer_LFRawData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_CDD_LFIC_APPL_CODE) RE_SetupLF_Telegram(uint8 b_AntenaIndex, uint8 b_SearchPattern, uint16 Counter_LFRawDataBit, P2CONST(ArrayByteSize32, AUTOMATIC, RTE_CDD_LFIC_APPL_DATA) Buffer_LFRawData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_CDD_LFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetupLfTelegram_P_CS(arg1, arg2, arg3, arg4) (RE_SetupLF_Telegram(arg1, arg2, arg3, arg4), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_StopLfPeriodicTelegram_P_CS() (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_LFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_LFIC_APPL_CODE) RE_Timeout_Tx_Telegram(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_LFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_TimeoutTxTelegram_P_CS() (RE_Timeout_Tx_Telegram(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_RFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_RFIC_APPL_CODE) RE_rfic_IRQ_ActiveCheck(uint8 kb_TerminalControlState); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_RFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_rficIRQActiveCheck_P_CS(arg1) (RE_rfic_IRQ_ActiveCheck(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_RFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_RFIC_APPL_CODE) RE_rfic_IRQ_PendingCheck(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_RFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_rficIRQPendingCheck_P_CS() (RE_rfic_IRQ_PendingCheck(), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define Telegram_START_SEC_CODE
# include "Telegram_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_RE_Clear_HighFixCheckTimer RE_Clear_HighFixCheckTimer
#  define RTE_RUNNABLE_RE_SMK_Telegram RE_SMK_Telegram
#  define RTE_RUNNABLE_RE_Set_ValidFobFoundResult RE_Set_ValidFobFoundResult
# endif

FUNC(void, Telegram_CODE) RE_Clear_HighFixCheckTimer(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, Telegram_CODE) RE_SMK_Telegram(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, Telegram_CODE) RE_Set_ValidFobFoundResult(uint8 fob_num); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define Telegram_STOP_SEC_CODE
# include "Telegram_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_Dio_I_IoHwAbApplicationError (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_TELEGRAM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
