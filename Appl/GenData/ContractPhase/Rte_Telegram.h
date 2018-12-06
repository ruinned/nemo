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
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim/SCIM_BP.dpa
 *     SW-C Type:  Telegram
 *  Generated at:  Sat Dec  1 17:13:17 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <Telegram> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TELEGRAM_H
# define _RTE_TELEGRAM_H

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

# include "Rte_Telegram_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_Telegram
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_Telegram, RTE_CONST, RTE_CONST) Rte_Inst_Telegram; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_Telegram, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat (0)
# define Rte_InitValue_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl (0U)
# define Rte_InitValue_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl (0U)
# define Rte_InitValue_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat (0U)
# define Rte_InitValue_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl (0U)
# define Rte_InitValue_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat (0U)
# define Rte_InitValue_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl (0U)
# define Rte_InitValue_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat (0U)
# define Rte_InitValue_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl (0U)
# define Rte_InitValue_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat (0U)
# define Rte_InitValue_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat (0U)
# define Rte_InitValue_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI (0U)
# define Rte_InitValue_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI (0U)
# define Rte_InitValue_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI (0U)
# define Rte_InitValue_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI (0U)
# define Rte_InitValue_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl (0U)
# define Rte_InitValue_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat (0U)
# define Rte_InitValue_RficSysModeConfirm_P_SR_RficSysModeConfirm (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Telegram_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl(P2VAR(Debug_PVT_PEPS_Ant_Ctrl, AUTOMATIC, RTE_TELEGRAM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Telegram_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl(P2VAR(Debug_PVT_PEPS_GainP1_Ctrl, AUTOMATIC, RTE_TELEGRAM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Telegram_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl(P2VAR(Debug_PVT_PEPS_GainP2_Ctrl, AUTOMATIC, RTE_TELEGRAM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Telegram_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl(P2VAR(Debug_PVT_PEPS_GainP3_Ctrl, AUTOMATIC, RTE_TELEGRAM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Telegram_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl(P2VAR(Debug_PVT_PEPS_GainP4_Ctrl, AUTOMATIC, RTE_TELEGRAM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Telegram_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl(P2VAR(Debug_PVT_PEPS_VDSI_Ctrl, AUTOMATIC, RTE_TELEGRAM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Telegram_RficSysModeConfirm_P_SR_RficSysModeConfirm(P2VAR(uint8, AUTOMATIC, RTE_TELEGRAM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
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
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Telegram_LfICInit_P_CS(uint8 Gain_vehicleOption); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Telegram_LficNRESDio_R_Write(IOHWAB_UINT8 SetValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Telegram_RficInit_P_CS(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Telegram_SearchSysMode_P_CS(uint8 RFIC_SystemMode, uint8 RFIC_ReqCmd); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Telegram_SetupLfTelegram_P_CS(uint8 b_AntenaIndex, uint8 b_SearchPattern, uint16 Counter_LFRawDataBit, P2CONST(uint8, AUTOMATIC, RTE_TELEGRAM_APPL_DATA) Buffer_LFRawData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Telegram_SetupLfTelegram_P_CS(uint8 b_AntenaIndex, uint8 b_SearchPattern, uint16 Counter_LFRawDataBit, P2CONST(ArrayByteSize32, AUTOMATIC, RTE_TELEGRAM_APPL_DATA) Buffer_LFRawData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Telegram_StopLfPeriodicTelegram_P_CS(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Telegram_TimeoutTxTelegram_P_CS(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Telegram_rficIRQActiveCheck_P_CS(uint8 kb_TerminalControlState); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Telegram_rficIRQPendingCheck_P_CS(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl Rte_Read_Telegram_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl
# define Rte_Read_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl Rte_Read_Telegram_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl
# define Rte_Read_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl Rte_Read_Telegram_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl
# define Rte_Read_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl Rte_Read_Telegram_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl
# define Rte_Read_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl Rte_Read_Telegram_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl
# define Rte_Read_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl Rte_Read_Telegram_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl
# define Rte_Read_RficSysModeConfirm_P_SR_RficSysModeConfirm Rte_Read_Telegram_RficSysModeConfirm_P_SR_RficSysModeConfirm


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat Rte_Write_Telegram_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat
# define Rte_Write_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat Rte_Write_Telegram_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat
# define Rte_Write_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat Rte_Write_Telegram_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat
# define Rte_Write_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat Rte_Write_Telegram_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat
# define Rte_Write_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat Rte_Write_Telegram_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat
# define Rte_Write_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat Rte_Write_Telegram_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat
# define Rte_Write_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI Rte_Write_Telegram_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI
# define Rte_Write_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI Rte_Write_Telegram_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI
# define Rte_Write_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI Rte_Write_Telegram_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI
# define Rte_Write_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI Rte_Write_Telegram_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI
# define Rte_Write_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat Rte_Write_Telegram_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_LfICInit_P_CS Rte_Call_Telegram_LfICInit_P_CS
# define Rte_Call_LficNRESDio_R_Write Rte_Call_Telegram_LficNRESDio_R_Write
# define Rte_Call_RficInit_P_CS Rte_Call_Telegram_RficInit_P_CS
# define Rte_Call_SearchSysMode_P_CS Rte_Call_Telegram_SearchSysMode_P_CS
# define Rte_Call_SetupLfTelegram_P_CS Rte_Call_Telegram_SetupLfTelegram_P_CS
# define Rte_Call_StopLfPeriodicTelegram_P_CS Rte_Call_Telegram_StopLfPeriodicTelegram_P_CS
# define Rte_Call_TimeoutTxTelegram_P_CS Rte_Call_Telegram_TimeoutTxTelegram_P_CS
# define Rte_Call_rficIRQActiveCheck_P_CS Rte_Call_Telegram_rficIRQActiveCheck_P_CS
# define Rte_Call_rficIRQPendingCheck_P_CS Rte_Call_Telegram_rficIRQPendingCheck_P_CS




# define Telegram_START_SEC_CODE
# include "Telegram_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_Clear_HighFixCheckTimer
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <ClearHighFixCheckTimer_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_Clear_HighFixCheckTimer(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RE_Clear_HighFixCheckTimer RE_Clear_HighFixCheckTimer
FUNC(void, Telegram_CODE) RE_Clear_HighFixCheckTimer(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_SMK_Telegram
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
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl(Debug_PVT_PEPS_Ant_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl(Debug_PVT_PEPS_GainP1_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl(Debug_PVT_PEPS_GainP2_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl(Debug_PVT_PEPS_GainP3_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl(Debug_PVT_PEPS_GainP4_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl(Debug_PVT_PEPS_VDSI_Ctrl *data)
 *   Std_ReturnType Rte_Read_RficSysModeConfirm_P_SR_RficSysModeConfirm(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat(Debug_PVT_PEPS_AntCtrl_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat(Debug_PVT_PEPS_GainP1_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat(Debug_PVT_PEPS_GainP2_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat(Debug_PVT_PEPS_GainP3_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat(Debug_PVT_PEPS_GainP4_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat(Debug_PVT_PEPS_Logic_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI(Debug_PVT_PEPS_P1_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI(Debug_PVT_PEPS_P2_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI(Debug_PVT_PEPS_P3_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI(Debug_PVT_PEPS_P4_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat(Debug_PVT_PEPS_VDSI_stat data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_LfICInit_P_CS(uint8 Gain_vehicleOption)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_LficNRESDio_R_Write(IOHWAB_UINT8 SetValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Dio_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_RficInit_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SearchSysMode_P_CS(uint8 RFIC_SystemMode, uint8 RFIC_ReqCmd)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetupLfTelegram_P_CS(uint8 b_AntenaIndex, uint8 b_SearchPattern, uint16 Counter_LFRawDataBit, const uint8 *Buffer_LFRawData)
 *     Argument Buffer_LFRawData: uint8* is of type ArrayByteSize32
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_StopLfPeriodicTelegram_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_TimeoutTxTelegram_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_rficIRQActiveCheck_P_CS(uint8 kb_TerminalControlState)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_rficIRQPendingCheck_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RE_SMK_Telegram RE_SMK_Telegram
FUNC(void, Telegram_CODE) RE_SMK_Telegram(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_Set_ValidFobFoundResult
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <SetValidFobFoundResult_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_Set_ValidFobFoundResult(uint8 fob_num)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RE_Set_ValidFobFoundResult RE_Set_ValidFobFoundResult
FUNC(void, Telegram_CODE) RE_Set_ValidFobFoundResult(uint8 fob_num); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define Telegram_STOP_SEC_CODE
# include "Telegram_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_Dio_I_IoHwAbApplicationError (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_TELEGRAM_H */
