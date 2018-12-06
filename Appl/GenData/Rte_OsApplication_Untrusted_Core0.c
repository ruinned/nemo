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
 *          File:  Rte_OsApplication_Untrusted_Core0.c
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  RTE implementation file
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0781, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_Rte_0781, MD_MSR_1.1_857 */

#define RTE_CORE
#include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_1.1_828, MD_Rte_Os */
#include "Rte_Type.h"
#include "Rte_Main.h"

#include "Rte_BswM.h"
#include "Rte_CDD_LFIC.h"
#include "Rte_CDD_RFIC.h"
#include "Rte_ComM.h"
#include "Rte_Dcm.h"
#include "Rte_DemMaster_OsApplication_Untrusted_Core0.h"
#include "Rte_DemSatellite_OsApplication_Untrusted_Core0.h"
#include "Rte_Det.h"
#include "Rte_EcuM.h"
#include "Rte_IoHwAb.h"
#include "Rte_Issm.h"
#include "Rte_J1939Rm.h"
#include "Rte_NvM.h"
#include "Rte_Os_OsCore0_swc.h"
#include "Rte_PVTApp_AdiInterfaces.h"
#include "Rte_PVTApp_Do12VInterface.h"
#include "Rte_PVTApp_DobhsCtrlInterface.h"
#include "Rte_PVTApp_DowhsDowlsInterface.h"
#include "Rte_StartApplication.h"
#include "Rte_StartApplicationMemoryAccessState.h"
#include "Rte_StartApplicationTrusted.h"
#include "Rte_TP.h"
#include "Rte_Telegram.h"
#include "Rte_TestLin.h"
#include "Rte_vDem42.h"
#include "SchM_Adc.h"
#include "SchM_BswM.h"
#include "SchM_Can.h"
#include "SchM_CanIf.h"
#include "SchM_CanNm.h"
#include "SchM_CanSM.h"
#include "SchM_CanTp.h"
#include "SchM_Com.h"
#include "SchM_ComM.h"
#include "SchM_Dcm.h"
#include "SchM_Dem.h"
#include "SchM_Det.h"
#include "SchM_Dio.h"
#include "SchM_EcuM.h"
#include "SchM_Fee.h"
#include "SchM_Fls.h"
#include "SchM_Gpt.h"
#include "SchM_Icu.h"
#include "SchM_IoHwAb.h"
#include "SchM_Issm.h"
#include "SchM_J1939Nm.h"
#include "SchM_J1939Rm.h"
#include "SchM_J1939Tp.h"
#include "SchM_Lin.h"
#include "SchM_LinIf.h"
#include "SchM_LinSM.h"
#include "SchM_LinTp.h"
#include "SchM_Mcl.h"
#include "SchM_Mcu.h"
#include "SchM_Nm.h"
#include "SchM_NvM.h"
#include "SchM_PduR.h"
#include "SchM_Port.h"
#include "SchM_Pwm.h"
#include "SchM_Spi.h"
#include "SchM_Wdg.h"

#include "Rte_Hook.h"

#include "Com.h"
#if defined(IL_ASRCOM_VERSION)
# define RTE_USE_COM_TXSIGNAL_RDACCESS
#endif

#include "Rte_Cbk.h"

/* AUTOSAR 3.x compatibility */
#if !defined (RTE_LOCAL)
# define RTE_LOCAL static
#endif


/**********************************************************************************************************************
 * API for enable / disable interrupts global
 *********************************************************************************************************************/

#if defined(osDisableGlobalUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableAllInterrupts() osDisableGlobalUM()   /* MICROSAR OS */
#else
# define Rte_DisableAllInterrupts() DisableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableGlobalUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableAllInterrupts() osEnableGlobalUM()   /* MICROSAR OS */
#else
# define Rte_EnableAllInterrupts() EnableAllInterrupts()   /* AUTOSAR OS */
#endif

/**********************************************************************************************************************
 * API for enable / disable interrupts up to the systemLevel
 *********************************************************************************************************************/

#if defined(osDisableLevelUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableOSInterrupts() osDisableLevelUM()   /* MICROSAR OS */
#else
# define Rte_DisableOSInterrupts() SuspendOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableLevelUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableOSInterrupts() osEnableLevelUM()   /* MICROSAR OS */
#else
# define Rte_EnableOSInterrupts() ResumeOSInterrupts()   /* AUTOSAR OS */
#endif


/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Debug_PVT_SCIM_Ctrl_DaiPullUp_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_DAIPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_2731869d_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_LivingPullUp_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_LivingPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_666b21d3_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_ParkedPullUp_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_ParkedPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_bf982706_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_12VDCDC_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_12VDCDC_oDebugCtrl1_SCIM_BB2_oBackbone2_052e0dec_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_12VLiving_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_12VLiving_oDebugCtrl1_SCIM_BB2_oBackbone2_1cf3479b_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_12VParked_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_12VParked_oDebugCtrl1_SCIM_BB2_oBackbone2_2cd9a2ad_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_BHS1_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_BHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_e91d1062_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_BHS2_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_BHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_b20aa177_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_BHS3_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_BHS3_oDebugCtrl1_SCIM_BB2_oBackbone2_84f83184_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_BHS4_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_BHS4_oDebugCtrl1_SCIM_BB2_oBackbone2_0425c35d_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_WHS1_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_a57cfe3c_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_WHS1_Duty_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WHS1_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_aec1e12e_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_WHS1_Freq_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WHS1_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_31c9eab2_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_WHS2_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_fe6b4f29_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_WHS2_Duty_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WHS2_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_e329e149_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_WHS2_Freq_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WHS2_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_7c21ead5_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_WLS1_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS1_oDebugCtrl2_SCIM_BB2_oBackbone2_56f82f7d_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_WLS1_Duty_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS1_Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_055e2012_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_WLS1_Freq_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS1_Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_9a562b8e_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_WLS2_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS2_oDebugCtrl2_SCIM_BB2_oBackbone2_0def9e68_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_WLS2Duty_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS2Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_1529858b_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_WLS2Freq_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS2Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_8a218e17_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_WLS3_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS3_oDebugCtrl2_SCIM_BB2_oBackbone2_3b1d0e9b_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_WLS3Duty_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS3Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_95d99294_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_Ctrl_WLS3Freq_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_Ctrl_WLS3Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_0ad19908_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_StartApplication_PpTrustedData_DeValue = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_AntP1_X_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntP1_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_fb66dba7_Rx = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_AntP1_Y_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntP1_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_76ee2645_Rx = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_AntPi_X_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntPi_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_108c5adc_Rx = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_AntPi_Y_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntPi_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_9d04a73e_Rx = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_Logic_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_Logic_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f1a79db4_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_Ant_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_Ant_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f212143a_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_GainP1_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP1_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_7b701f8e_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_GainP2_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP2_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_36981fe9_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_GainP3_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP3_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_bb10e20b_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_GainP4_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP4_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_ad481f27_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_VDSI_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_VDSI_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_e74c4cec_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DiagInfoCCFW, RTE_VAR_INIT) Rte_DiagInfoCCFW_oCCFWtoCIOM_L4_oLIN03_69083ad8_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DiagInfoDLFW, RTE_VAR_INIT) Rte_DiagInfoDLFW_oDLFWtoCIOM_L4_oLIN03_f14b1ebc_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DiagInfoELCP1, RTE_VAR_INIT) Rte_DiagInfoELCP1_oELCP1toCIOM_L4_oLIN03_e88000c8_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DiagInfoELCP2, RTE_VAR_INIT) Rte_DiagInfoELCP2_oELCP2toCIOM_L4_oLIN03_e304f264_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DiagInfoILCP1, RTE_VAR_INIT) Rte_DiagInfoILCP1_oILCP1toCIOM_L1_oLIN00_051a4e47_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DiagInfoILCP2, RTE_VAR_INIT) Rte_DiagInfoILCP2_oILCP2toCIOM_L4_oLIN03_df77e335_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DiagInfoLECM2, RTE_VAR_INIT) Rte_DiagInfoLECM2_oLECM2toCIOM_FR1_L1_oLIN00_427132ed_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DiagInfoLECMBasic, RTE_VAR_INIT) Rte_DiagInfoLECMBasic_oLECMBasic2CIOM_L1_oLIN00_209584a0_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DiagInfoRCECS, RTE_VAR_INIT) Rte_DiagInfoRCECS_oRCECStoCIOM_L5_oLIN04_46e60a03_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DiagInfoTCP, RTE_VAR_INIT) Rte_DiagInfoTCP_oTCPtoMaster_oLIN02_23eac2a6_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1DiagInfoL1, RTE_VAR_INIT) Rte_FSP1DiagInfoL1_oFSP1_Frame_L1_oLIN00_f04712d6_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1DiagInfoL2, RTE_VAR_INIT) Rte_FSP1DiagInfoL2_oFSP1_Frame_L2_oLIN01_7f2a1c9e_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1DiagInfoL3, RTE_VAR_INIT) Rte_FSP1DiagInfoL3_oFSP1_Frame_L3_oLIN02_b1faa76e_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1DiagInfoL4, RTE_VAR_INIT) Rte_FSP1DiagInfoL4_oFSP1_Frame_L4_oLIN03_ba81064f_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1DiagInfoL5, RTE_VAR_INIT) Rte_FSP1DiagInfoL5_oFSP1_Frame_L5_oLIN04_733c79a6_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1ResponseErrorL1, RTE_VAR_INIT) Rte_FSP1ResponseErrorL1_oFSP1_Frame_L1_oLIN00_b9e1fc6c_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1ResponseErrorL2, RTE_VAR_INIT) Rte_FSP1ResponseErrorL2_oFSP1_Frame_L2_oLIN01_368cf224_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1ResponseErrorL3, RTE_VAR_INIT) Rte_FSP1ResponseErrorL3_oFSP1_Frame_L3_oLIN02_f85c49d4_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1ResponseErrorL4, RTE_VAR_INIT) Rte_FSP1ResponseErrorL4_oFSP1_Frame_L4_oLIN03_f327e8f5_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1ResponseErrorL5, RTE_VAR_INIT) Rte_FSP1ResponseErrorL5_oFSP1_Frame_L5_oLIN04_3a9a971c_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1SwitchStatusL2, RTE_VAR_INIT) Rte_FSP1SwitchStatusL2_oFSP1_Frame_L2_oLIN01_68e68ffa_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1SwitchStatusL3, RTE_VAR_INIT) Rte_FSP1SwitchStatusL3_oFSP1_Frame_L3_oLIN02_a636340a_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1SwitchStatusL4, RTE_VAR_INIT) Rte_FSP1SwitchStatusL4_oFSP1_Frame_L4_oLIN03_ad4d952b_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1SwitchStatusL5, RTE_VAR_INIT) Rte_FSP1SwitchStatusL5_oFSP1_Frame_L5_oLIN04_64f0eac2_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP2DiagInfoL1, RTE_VAR_INIT) Rte_FSP2DiagInfoL1_oFSP2_Frame_L1_oLIN00_f8caf847_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP2DiagInfoL2, RTE_VAR_INIT) Rte_FSP2DiagInfoL2_oFSP2_Frame_L2_oLIN01_77a7f60f_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP2DiagInfoL3, RTE_VAR_INIT) Rte_FSP2DiagInfoL3_oFSP2_Frame_L3_oLIN02_b9774dff_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP2ResponseErrorL1, RTE_VAR_INIT) Rte_FSP2ResponseErrorL1_oFSP2_Frame_L1_oLIN00_a793a78f_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP2ResponseErrorL2, RTE_VAR_INIT) Rte_FSP2ResponseErrorL2_oFSP2_Frame_L2_oLIN01_28fea9c7_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP2ResponseErrorL3, RTE_VAR_INIT) Rte_FSP2ResponseErrorL3_oFSP2_Frame_L3_oLIN02_e62e1237_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP2SwitchStatusL2, RTE_VAR_INIT) Rte_FSP2SwitchStatusL2_oFSP2_Frame_L2_oLIN01_611deb1e_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP2SwitchStatusL3, RTE_VAR_INIT) Rte_FSP2SwitchStatusL3_oFSP2_Frame_L3_oLIN02_afcd50ee_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP3DiagInfoL2, RTE_VAR_INIT) Rte_FSP3DiagInfoL2_oFSP3_Frame_L2_oLIN01_c6f3adbf_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP3ResponseErrorL2, RTE_VAR_INIT) Rte_FSP3ResponseErrorL2_oFSP3_Frame_L2_oLIN01_22d09f66_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP3SwitchStatusL2, RTE_VAR_INIT) Rte_FSP3SwitchStatusL2_oFSP3_Frame_L2_oLIN01_664b3742_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP4DiagInfoL2, RTE_VAR_INIT) Rte_FSP4DiagInfoL2_oFSP4_Frame_L2_oLIN01_66bc232d_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP4ResponseErrorL2, RTE_VAR_INIT) Rte_FSP4ResponseErrorL2_oFSP4_Frame_L2_oLIN01_141a1e01_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP4SwitchStatusL2, RTE_VAR_INIT) Rte_FSP4SwitchStatusL2_oFSP4_Frame_L2_oLIN01_72eb22d6_Rx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_AdjustButtonStatus, RTE_VAR_INIT) Rte_LIN_AdjustButtonStatus_oRCECStoCIOM_L5_oLIN04_52fa0034_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_AlmClkSetCurAlm_rqst_sg, RTE_VAR_INIT) Rte_SG_LIN_AlmClkSetCurAlm_rqst_sg_oLECM2toCIOM_FR1_L1_oLIN00_05d68799_Rx = {
  63U, 7U, 127U, 31U, 0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BackButtonStatus, RTE_VAR_INIT) Rte_LIN_BackButtonStatus_oRCECStoCIOM_L5_oLIN04_91249976_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BackLightDimming_Status, RTE_VAR_INIT) Rte_LIN_BackLightDimming_Status_oELCP1toCIOM_L4_oLIN03_ff25f41e_Rx = 31U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BlackPanelMode_ButtonStat, RTE_VAR_INIT) Rte_LIN_BlackPanelMode_ButtonStat_oELCP1toCIOM_L4_oLIN03_dece2221_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkBAudioOnOff_ButtonStat, RTE_VAR_INIT) Rte_LIN_BunkBAudioOnOff_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_a735a09a_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkBIntLightActvnBtn_stat, RTE_VAR_INIT) Rte_LIN_BunkBIntLightActvnBtn_stat_oLECMBasic2CIOM_L1_oLIN00_5d53684c_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkBParkHeater_ButtonStat, RTE_VAR_INIT) Rte_LIN_BunkBParkHeater_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_0c567d49_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkBTempDec_ButtonStat, RTE_VAR_INIT) Rte_LIN_BunkBTempDec_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_bad7c8e9_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkBTempInc_ButtonStat, RTE_VAR_INIT) Rte_LIN_BunkBTempInc_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_7521d3fe_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkBVolumeDown_ButtonStat, RTE_VAR_INIT) Rte_LIN_BunkBVolumeDown_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_c7ff11cb_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkBVolumeUp_ButtonStat, RTE_VAR_INIT) Rte_LIN_BunkBVolumeUp_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_4fd90c4b_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2AudioOnOff_ButtonSta, RTE_VAR_INIT) Rte_LIN_BunkH2AudioOnOff_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_8085e670_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2Fade_ButtonStatus, RTE_VAR_INIT) Rte_LIN_BunkH2Fade_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_64ae31ec_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2IntLightActvnBtn_sta, RTE_VAR_INIT) Rte_LIN_BunkH2IntLightActvnBtn_sta_oLECM2toCIOM_FR1_L1_oLIN00_7ae32ea6_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2IntLightDecBtn_stat, RTE_VAR_INIT) Rte_LIN_BunkH2IntLightDecBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_445fc32a_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2IntLightIncBtn_stat, RTE_VAR_INIT) Rte_LIN_BunkH2IntLightIncBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_a3c1ab0b_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2LockButtonStatus, RTE_VAR_INIT) Rte_LIN_BunkH2LockButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_d71d2857_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2OnOFF_ButtonStatus, RTE_VAR_INIT) Rte_LIN_BunkH2OnOFF_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_6a259b90_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2PHTi_rqs_sg, RTE_VAR_INIT) Rte_SG_LIN_BunkH2PHTi_rqs_sg_oLECM2toCIOM_FR3_L1_oLIN00_0bf5fe80_Rx = {
  255U, 7U, 255U, 255U, 255U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2ParkHeater_ButtonSta, RTE_VAR_INIT) Rte_LIN_BunkH2ParkHeater_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_2be63ba3_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2Phone_ButtonStatus, RTE_VAR_INIT) Rte_LIN_BunkH2Phone_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_99e0fe87_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2PowerWinCloseDSBtn_s, RTE_VAR_INIT) Rte_LIN_BunkH2PowerWinCloseDSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_9fa2715d_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2PowerWinClosePSBtn_s, RTE_VAR_INIT) Rte_LIN_BunkH2PowerWinClosePSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_281d2c26_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2PowerWinOpenDSBtn_st, RTE_VAR_INIT) Rte_LIN_BunkH2PowerWinOpenDSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_0df6d397_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2PowerWinOpenPSBtn_st, RTE_VAR_INIT) Rte_LIN_BunkH2PowerWinOpenPSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_ca96c47e_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2RoofhatchCloseBtn_St, RTE_VAR_INIT) Rte_LIN_BunkH2RoofhatchCloseBtn_St_oLECM2toCIOM_FR1_L1_oLIN00_c184d263_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2RoofhatchOpenBtn_Sta, RTE_VAR_INIT) Rte_LIN_BunkH2RoofhatchOpenBtn_Sta_oLECM2toCIOM_FR1_L1_oLIN00_dd2458bc_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2TempDec_ButtonStatus, RTE_VAR_INIT) Rte_LIN_BunkH2TempDec_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_857664ae_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2TempInc_ButtonStatus, RTE_VAR_INIT) Rte_LIN_BunkH2TempInc_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_61f74d27_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2VolumeDown_ButtonSta, RTE_VAR_INIT) Rte_LIN_BunkH2VolumeDown_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_e04f5721_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BunkH2VolumeUp_ButtonStatu, RTE_VAR_INIT) Rte_LIN_BunkH2VolumeUp_ButtonStatu_oLECM2toCIOM_FR1_L1_oLIN00_92cefa8d_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_DRL_ButtonStatus, RTE_VAR_INIT) Rte_LIN_DRL_ButtonStatus_oELCP2toCIOM_L4_oLIN03_e8cb5735_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_DifflockDeactivationBtn_st, RTE_VAR_INIT) Rte_LIN_DifflockDeactivationBtn_st_oDLFWtoCIOM_L4_oLIN03_7700113d_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_DifflockMode_Wheelstatus, RTE_VAR_INIT) Rte_LIN_DifflockMode_Wheelstatus_oDLFWtoCIOM_L4_oLIN03_80a746c7_Rx = 15U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_DoorAutoFuncBtn_stat, RTE_VAR_INIT) Rte_LIN_DoorAutoFuncBtn_stat_oILCP1toCIOM_L1_oLIN00_0dc2e67f_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_EscButtonMuddySiteStatus, RTE_VAR_INIT) Rte_LIN_EscButtonMuddySiteStatus_oDLFWtoCIOM_L4_oLIN03_ac37f393_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_FCWPushButton, RTE_VAR_INIT) Rte_LIN_FCWPushButton_oCCFWtoCIOM_L4_oLIN03_242f5462_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_FogLightFront_ButtonStat_1, RTE_VAR_INIT) Rte_LIN_FogLightFront_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_e1a5bfc2_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_FogLightFront_ButtonStat_2, RTE_VAR_INIT) Rte_LIN_FogLightFront_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_ea214d6e_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_FogLightRear_ButtonStat_1, RTE_VAR_INIT) Rte_LIN_FogLightRear_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_14baadea_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_FogLightRear_ButtonStat_2, RTE_VAR_INIT) Rte_LIN_FogLightRear_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_1f3e5f46_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_HeadLampUpDown_SwitchStatu, RTE_VAR_INIT) Rte_LIN_HeadLampUpDown_SwitchStatu_oELCP2toCIOM_L4_oLIN03_ea48cea1_Rx = 7U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_IntLghtCenterBtnFreeWhl_s, RTE_VAR_INIT) Rte_LIN_IntLghtCenterBtnFreeWhl_s_oILCP2toCIOM_L4_oLIN03_27a7dc09_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_IntLghtDimmingLvlDecBtn_s, RTE_VAR_INIT) Rte_LIN_IntLghtDimmingLvlDecBtn_s_oILCP1toCIOM_L1_oLIN00_0a50c243_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_IntLghtDimmingLvlFreeWhl_s, RTE_VAR_INIT) Rte_LIN_IntLghtDimmingLvlFreeWhl_s_oILCP2toCIOM_L4_oLIN03_9d9afdd7_Rx = 15U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_IntLghtDimmingLvlIncBtn_s, RTE_VAR_INIT) Rte_LIN_IntLghtDimmingLvlIncBtn_s_oILCP1toCIOM_L1_oLIN00_34c0f447_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_IntLghtMaxModeBtnPnl2_s, RTE_VAR_INIT) Rte_LIN_IntLghtMaxModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_eeb895fc_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_IntLghtModeSelrFreeWheel_s, RTE_VAR_INIT) Rte_LIN_IntLghtModeSelrFreeWheel_s_oILCP1toCIOM_L1_oLIN00_98c2e509_Rx = 15U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_IntLghtNightModeBt2_s, RTE_VAR_INIT) Rte_LIN_IntLghtNightModeBt2_s_oILCP2toCIOM_L4_oLIN03_c1a85f21_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_IntLghtRestModeBtnPnl2_s, RTE_VAR_INIT) Rte_LIN_IntLghtRestModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_46e1f77a_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_LKSPushButton, RTE_VAR_INIT) Rte_LIN_LKSPushButton_oCCFWtoCIOM_L4_oLIN03_8e8e108b_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_LevelingThumbwheel_stat, RTE_VAR_INIT) Rte_LIN_LevelingThumbwheel_stat_oELCP1toCIOM_L4_oLIN03_cb03d712_Rx = 31U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_LightMode_Status_1, RTE_VAR_INIT) Rte_LIN_LightMode_Status_1_oELCP1toCIOM_L4_oLIN03_c62c6da2_Rx = 15U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_LightMode_Status_2, RTE_VAR_INIT) Rte_LIN_LightMode_Status_2_oELCP2toCIOM_L4_oLIN03_cda89f0e_Rx = 15U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_MemButtonStatus, RTE_VAR_INIT) Rte_LIN_MemButtonStatus_oRCECStoCIOM_L5_oLIN04_0975e3a6_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_Offroad_ButtonStatus, RTE_VAR_INIT) Rte_LIN_Offroad_ButtonStatus_oDLFWtoCIOM_L4_oLIN03_2199360f_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_RearWorkProjector_BtnStat, RTE_VAR_INIT) Rte_LIN_RearWorkProjector_BtnStat_oELCP2toCIOM_L4_oLIN03_bb9bb1f8_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_SelectButtonStatus, RTE_VAR_INIT) Rte_LIN_SelectButtonStatus_oRCECStoCIOM_L5_oLIN04_07d81d0f_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_SpeedControlModeButtonStat, RTE_VAR_INIT) Rte_LIN_SpeedControlModeButtonStat_oCCFWtoCIOM_L4_oLIN03_0f6013d7_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_SpeedControlModeWheelStat, RTE_VAR_INIT) Rte_LIN_SpeedControlModeWheelStat_oCCFWtoCIOM_L4_oLIN03_cc9e59ce_Rx = 15U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_StopButtonStatus, RTE_VAR_INIT) Rte_LIN_StopButtonStatus_oRCECStoCIOM_L5_oLIN04_c8659d40_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_TCP_ABS_ButtonStatus, RTE_VAR_INIT) Rte_LIN_TCP_ABS_ButtonStatus_oTCPtoMaster_oLIN02_7968eb64_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_TCP_ATC_ButtonStatus, RTE_VAR_INIT) Rte_LIN_TCP_ATC_ButtonStatus_oTCPtoMaster_oLIN02_dff3ccff_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_TCP_ESC_ButtonStatus, RTE_VAR_INIT) Rte_LIN_TCP_ESC_ButtonStatus_oTCPtoMaster_oLIN02_e4eaf9d3_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_TCP_KnobPostionStatus, RTE_VAR_INIT) Rte_LIN_TCP_KnobPostionStatus_oTCPtoMaster_oLIN02_d1058f2b_Rx = 7U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_TCP_TCS_ButtonStatus, RTE_VAR_INIT) Rte_LIN_TCP_TCS_ButtonStatus_oTCPtoMaster_oLIN02_fa9712f2_Rx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_WRDownButtonStatus, RTE_VAR_INIT) Rte_LIN_WRDownButtonStatus_oRCECStoCIOM_L5_oLIN04_48a8dab2_Rx = 7U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_WRUpButtonStatus, RTE_VAR_INIT) Rte_LIN_WRUpButtonStatus_oRCECStoCIOM_L5_oLIN04_a2873536_Rx = 7U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ResponseErrorCCFW, RTE_VAR_INIT) Rte_ResponseErrorCCFW_oCCFWtoCIOM_L4_oLIN03_38ff59f8_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ResponseErrorDLFW, RTE_VAR_INIT) Rte_ResponseErrorDLFW_oDLFWtoCIOM_L4_oLIN03_a0bc7d9c_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ResponseErrorELCP1, RTE_VAR_INIT) Rte_ResponseErrorELCP1_oELCP1toCIOM_L4_oLIN03_a9bf457f_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ResponseErrorELCP2, RTE_VAR_INIT) Rte_ResponseErrorELCP2_oELCP2toCIOM_L4_oLIN03_a23bb7d3_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ResponseErrorILCP1, RTE_VAR_INIT) Rte_ResponseErrorILCP1_oILCP1toCIOM_L1_oLIN00_44250bf0_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ResponseErrorILCP2, RTE_VAR_INIT) Rte_ResponseErrorILCP2_oILCP2toCIOM_L4_oLIN03_9e48a682_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ResponseErrorLECM2, RTE_VAR_INIT) Rte_ResponseErrorLECM2_oLECM2toCIOM_FR1_L1_oLIN00_ed8050df_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ResponseErrorLECMBasic, RTE_VAR_INIT) Rte_ResponseErrorLECMBasic_oLECMBasic2CIOM_L1_oLIN00_9a0b7e5e_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ResponseErrorRCECS, RTE_VAR_INIT) Rte_ResponseErrorRCECS_oRCECStoCIOM_L5_oLIN04_07d94fb4_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ResponseErrorTCP, RTE_VAR_INIT) Rte_ResponseErrorTCP_oTCPtoMaster_oLIN02_2075be52_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionNeeded1L1, RTE_VAR_INIT) Rte_SwitchDetectionNeeded1L1_oFSP1_Frame_L1_oLIN00_099b825d_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionNeeded1L2, RTE_VAR_INIT) Rte_SwitchDetectionNeeded1L2_oFSP1_Frame_L2_oLIN01_86f68c15_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionNeeded1L3, RTE_VAR_INIT) Rte_SwitchDetectionNeeded1L3_oFSP1_Frame_L3_oLIN02_482637e5_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionNeeded1L4, RTE_VAR_INIT) Rte_SwitchDetectionNeeded1L4_oFSP1_Frame_L4_oLIN03_435d96c4_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionNeeded1L5, RTE_VAR_INIT) Rte_SwitchDetectionNeeded1L5_oFSP1_Frame_L5_oLIN04_8ae0e92d_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionNeeded2L1, RTE_VAR_INIT) Rte_SwitchDetectionNeeded2L1_oFSP2_Frame_L1_oLIN00_6fec6f8a_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionNeeded2L2, RTE_VAR_INIT) Rte_SwitchDetectionNeeded2L2_oFSP2_Frame_L2_oLIN01_e08161c2_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionNeeded2L3, RTE_VAR_INIT) Rte_SwitchDetectionNeeded2L3_oFSP2_Frame_L3_oLIN02_2e51da32_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionNeeded3L2, RTE_VAR_INIT) Rte_SwitchDetectionNeeded3L2_oFSP3_Frame_L2_oLIN01_c2ac3a8f_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionNeeded4L2, RTE_VAR_INIT) Rte_SwitchDetectionNeeded4L2_oFSP4_Frame_L2_oLIN01_2c6eba6c_Rx = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionResp1L1, RTE_VAR_INIT) Rte_SwitchDetectionResp1L1_oFSP1_SwitchDetResp_L1_oLIN00_e8a163d5_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionResp1L2, RTE_VAR_INIT) Rte_SwitchDetectionResp1L2_oFSP1_SwitchDetResp_L2_oLIN01_02016dd3_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionResp1L3, RTE_VAR_INIT) Rte_SwitchDetectionResp1L3_oFSP1_SwitchDetResp_L3_oLIN02_5945d426_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionResp1L4, RTE_VAR_INIT) Rte_SwitchDetectionResp1L4_oFSP1_SwitchDetResp_L4_oLIN03_0c30779e_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionResp1L5, RTE_VAR_INIT) Rte_SwitchDetectionResp1L5_oFSP1_SwitchDetResp_L5_oLIN04_50190a72_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionResp2L1, RTE_VAR_INIT) Rte_SwitchDetectionResp2L1_oFSP2_SwitchDetResp_L1_oLIN00_865b6493_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionResp2L2, RTE_VAR_INIT) Rte_SwitchDetectionResp2L2_oFSP2_SwitchDetResp_L2_oLIN01_6cfb6a95_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionResp2L3, RTE_VAR_INIT) Rte_SwitchDetectionResp2L3_oFSP2_SwitchDetResp_L3_oLIN02_37bfd360_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionResp3L2, RTE_VAR_INIT) Rte_SwitchDetectionResp3L2_oFSP3_SwitchDetResp_L2_oLIN01_ff826a68_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SwitchDetectionResp4L2, RTE_VAR_INIT) Rte_SwitchDetectionResp4L2_oFSP4_SwitchDetResp_L2_oLIN01_b10f6419_Rx = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Per-Instance Memory
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint32, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ActiveComMUsers; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplication_COM_RxSigValue0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplication_COM_TxSigValue1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(EnumActiveComponentType, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplication_ActiveComponent; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplication_COM_RxSigValue1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplication_COM_TxSigValue0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplication_DIAG_LastRxData; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ActiveChannelHasFullComRequest; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ActiveComMChannel; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(EnumNM_ApplStateType, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ApplState; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_BusSleepModeTimer; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplication_TxCtrlSigValue; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplication_TxDataSigValue; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplication_Uptime; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP) Rte_StartApplicationMemoryAccessState_PimMemoryAccessState; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_DEFAULT_RTE_OsApplication_Untrusted_Core0_PIM_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * TxUpdate Flags for each external Tx Signal over Rte_ComSendSignalProxy without IOCs
 *********************************************************************************************************************/
#define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_OsApplication_Untrusted_Core0_TxUpdateFlagsType, RTE_VAR_ZERO_INIT) Rte_OsApplication_Untrusted_Core0_TxUpdateFlags = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
}; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define Rte_OsApplication_Untrusted_Core0_TxUpdateFlagsInit() (Rte_MemClr(&Rte_OsApplication_Untrusted_Core0_TxUpdateFlags, sizeof(Rte_OsApplication_Untrusted_Core0_TxUpdateFlagsType)))

/**********************************************************************************************************************
 * Defines for Rte_ComSendSignalProxy
 *********************************************************************************************************************/
#define RTE_COM_SENDSIGNALPROXY_NOCHANGE       (0U)
#define RTE_COM_SENDSIGNALPROXY_SEND           (1U)
#define RTE_COM_SENDSIGNALPROXY_INVALIDATE     (2U)



/**********************************************************************************************************************
 * Timeout Flags for each external Rx Signals with aliveTimeout != 0
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_OsApplication_Untrusted_Core0_RxTimeoutFlagsType, RTE_VAR_ZERO_INIT) Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
}; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define Rte_OsApplication_Untrusted_Core0_RxTimeoutFlagsInit() (Rte_MemClr(&Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags, sizeof(Rte_OsApplication_Untrusted_Core0_RxTimeoutFlagsType)))


/**********************************************************************************************************************
 * Buffer for inter-runnable variables
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(DtMemoryProtectionDataElementType, RTE_VAR_INIT) Rte_Irv_StartApplication_IrvMemoryProtectionData = {
  0U, FALSE
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_Irv_StartApplication_IrvOccuranceCounterDid = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Internal C/S connections
 *********************************************************************************************************************/
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_Backbone1J1939_2a22de3d_RequestComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_Backbone2_3f947ba3_GetCurrentComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_Backbone2_3f947ba3_RequestComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_CabSubnet_aa77b0b0_RequestComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_FMSNet_05490e3d_GetCurrentComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_FMSNet_05490e3d_RequestComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN00_ace1a6ba_GetCurrentComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN00_ace1a6ba_RequestComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN01_4323cd84_GetCurrentComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN01_4323cd84_RequestComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN02_a8147687_GetCurrentComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN02_a8147687_RequestComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN03_47d61db9_GetCurrentComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN03_47d61db9_RequestComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN04_a50a06c0_GetCurrentComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN04_a50a06c0_RequestComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_UR_CN_SecuritySubnet_7cec9a61_RequestComMode 0U
#define Rte_CS_ClientConfigIndex_StartApplication_PpDemOpCycle_DemOperationCycle_0_SetOperationCycleState 0U
#define Rte_CS_ClientConfigIndex_StartApplication_EcuM_ShutdownTarget_SelectShutdownTarget 0U
#define Rte_CS_ClientConfigIndex_CDD_RFIC_RficNRESDio_R_Read 0U

#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) Rte_MemClr(P2VAR(void, AUTOMATIC, RTE_VAR_NOINIT) ptr, uint32_least num); /* PRQA S 0850, 3447, 3408 */ /* MD_MSR_19.8, MD_Rte_3447, MD_Rte_3408 */
FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 0850, 1505, 3447, 3408 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3447, MD_Rte_3408 */
FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 0850, 1505, 3447, 3408 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3447, MD_Rte_3408 */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Data structures for mode management
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(BswM_ESH_Mode, RTE_VAR_INIT) Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_BswM_ESH_Mode_STARTUP; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Timer handling
 *********************************************************************************************************************/

#if defined OS_US2TICKS_SystemTimer
# define RTE_USEC_SystemTimer OS_US2TICKS_SystemTimer
#else
# define RTE_USEC_SystemTimer(val) ((TickType)RTE_CONST_USEC_SystemTimer_##val) /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */
#endif

#if defined OS_MS2TICKS_SystemTimer
# define RTE_MSEC_SystemTimer OS_MS2TICKS_SystemTimer
#else
# define RTE_MSEC_SystemTimer(val) ((TickType)RTE_CONST_MSEC_SystemTimer_##val) /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */
#endif

#if defined OS_SEC2TICKS_SystemTimer
# define RTE_SEC_SystemTimer OS_SEC2TICKS_SystemTimer
#else
# define RTE_SEC_SystemTimer(val)  ((TickType)RTE_CONST_SEC_SystemTimer_##val) /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */
#endif

#define RTE_CONST_MSEC_SystemTimer_0 (0UL)
#define RTE_CONST_MSEC_SystemTimer_1 (80000UL)
#define RTE_CONST_MSEC_SystemTimer_10 (800000UL)
#define RTE_CONST_MSEC_SystemTimer_100 (8000000UL)
#define RTE_CONST_MSEC_SystemTimer_20 (1600000UL)
#define RTE_CONST_MSEC_SystemTimer_250 (20000000UL)
#define RTE_CONST_MSEC_SystemTimer_5 (400000UL)

#define RTE_CONST_SEC_SystemTimer_0 (0UL)
#define RTE_CONST_SEC_SystemTimer_1 (80000000UL)


/**********************************************************************************************************************
 * Internal definitions
 *********************************************************************************************************************/

#define RTE_TASK_TIMEOUT_EVENT_MASK   ((EventMaskType)0x01)
#define RTE_TASK_WAITPOINT_EVENT_MASK ((EventMaskType)0x02)

/**********************************************************************************************************************
 * RTE life cycle API
 *********************************************************************************************************************/

#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


FUNC(void, RTE_CODE) Rte_InitMemory_OsApplication_Untrusted_Core0(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  /* reset Rx Timeout Flags */
  Rte_OsApplication_Untrusted_Core0_RxTimeoutFlagsInit();

  /* reset Tx Update Flags */
  Rte_OsApplication_Untrusted_Core0_TxUpdateFlagsInit();

  /* set default values for internal data */
  Rte_StartApplication_PpTrustedData_DeValue = 0U;
  Rte_Debug_PVT_SCIM_Ctrl_DAIPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_2731869d_Rx = FALSE;
  Rte_Debug_PVT_SCIM_Ctrl_LivingPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_666b21d3_Rx = FALSE;
  Rte_Debug_PVT_SCIM_Ctrl_ParkedPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_bf982706_Rx = FALSE;
  Rte_Debug_PVT_SCIM_Ctrl_12VDCDC_oDebugCtrl1_SCIM_BB2_oBackbone2_052e0dec_Rx = FALSE;
  Rte_Debug_PVT_SCIM_Ctrl_12VLiving_oDebugCtrl1_SCIM_BB2_oBackbone2_1cf3479b_Rx = FALSE;
  Rte_Debug_PVT_SCIM_Ctrl_12VParked_oDebugCtrl1_SCIM_BB2_oBackbone2_2cd9a2ad_Rx = FALSE;
  Rte_Debug_PVT_SCIM_Ctrl_BHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_e91d1062_Rx = FALSE;
  Rte_Debug_PVT_SCIM_Ctrl_BHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_b20aa177_Rx = FALSE;
  Rte_Debug_PVT_SCIM_Ctrl_BHS3_oDebugCtrl1_SCIM_BB2_oBackbone2_84f83184_Rx = FALSE;
  Rte_Debug_PVT_SCIM_Ctrl_BHS4_oDebugCtrl1_SCIM_BB2_oBackbone2_0425c35d_Rx = FALSE;
  Rte_Debug_PVT_SCIM_Ctrl_WHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_a57cfe3c_Rx = FALSE;
  Rte_Debug_PVT_SCIM_Ctrl_WHS1_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_aec1e12e_Rx = 0U;
  Rte_Debug_PVT_SCIM_Ctrl_WHS1_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_31c9eab2_Rx = 0U;
  Rte_Debug_PVT_SCIM_Ctrl_WHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_fe6b4f29_Rx = FALSE;
  Rte_Debug_PVT_SCIM_Ctrl_WHS2_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_e329e149_Rx = 0U;
  Rte_Debug_PVT_SCIM_Ctrl_WHS2_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_7c21ead5_Rx = 0U;
  Rte_Debug_PVT_SCIM_Ctrl_WLS1_oDebugCtrl2_SCIM_BB2_oBackbone2_56f82f7d_Rx = FALSE;
  Rte_Debug_PVT_SCIM_Ctrl_WLS1_Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_055e2012_Rx = 0U;
  Rte_Debug_PVT_SCIM_Ctrl_WLS1_Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_9a562b8e_Rx = 0U;
  Rte_Debug_PVT_SCIM_Ctrl_WLS2_oDebugCtrl2_SCIM_BB2_oBackbone2_0def9e68_Rx = FALSE;
  Rte_Debug_PVT_SCIM_Ctrl_WLS2Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_1529858b_Rx = 0U;
  Rte_Debug_PVT_SCIM_Ctrl_WLS2Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_8a218e17_Rx = 0U;
  Rte_Debug_PVT_SCIM_Ctrl_WLS3_oDebugCtrl2_SCIM_BB2_oBackbone2_3b1d0e9b_Rx = FALSE;
  Rte_Debug_PVT_SCIM_Ctrl_WLS3Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_95d99294_Rx = 0U;
  Rte_Debug_PVT_SCIM_Ctrl_WLS3Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_0ad19908_Rx = 0U;
  Rte_Debug_PVT_PEPS_AntP1_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_fb66dba7_Rx = 0;
  Rte_Debug_PVT_PEPS_AntP1_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_76ee2645_Rx = 0;
  Rte_Debug_PVT_PEPS_AntPi_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_108c5adc_Rx = 0;
  Rte_Debug_PVT_PEPS_AntPi_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_9d04a73e_Rx = 0;
  Rte_Debug_PVT_PEPS_Logic_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f1a79db4_Rx = 0U;
  Rte_Debug_PVT_PEPS_Ant_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f212143a_Rx = 0U;
  Rte_Debug_PVT_PEPS_GainP1_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_7b701f8e_Rx = 0U;
  Rte_Debug_PVT_PEPS_GainP2_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_36981fe9_Rx = 0U;
  Rte_Debug_PVT_PEPS_GainP3_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_bb10e20b_Rx = 0U;
  Rte_Debug_PVT_PEPS_GainP4_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_ad481f27_Rx = 0U;
  Rte_Debug_PVT_PEPS_VDSI_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_e74c4cec_Rx = 0U;
  Rte_DiagInfoCCFW_oCCFWtoCIOM_L4_oLIN03_69083ad8_Rx = 0U;
  Rte_DiagInfoDLFW_oDLFWtoCIOM_L4_oLIN03_f14b1ebc_Rx = 0U;
  Rte_DiagInfoELCP1_oELCP1toCIOM_L4_oLIN03_e88000c8_Rx = 0U;
  Rte_DiagInfoELCP2_oELCP2toCIOM_L4_oLIN03_e304f264_Rx = 0U;
  Rte_DiagInfoILCP1_oILCP1toCIOM_L1_oLIN00_051a4e47_Rx = 0U;
  Rte_DiagInfoILCP2_oILCP2toCIOM_L4_oLIN03_df77e335_Rx = 0U;
  Rte_DiagInfoLECM2_oLECM2toCIOM_FR1_L1_oLIN00_427132ed_Rx = 0U;
  Rte_DiagInfoLECMBasic_oLECMBasic2CIOM_L1_oLIN00_209584a0_Rx = 0U;
  Rte_DiagInfoRCECS_oRCECStoCIOM_L5_oLIN04_46e60a03_Rx = 0U;
  Rte_DiagInfoTCP_oTCPtoMaster_oLIN02_23eac2a6_Rx = 0U;
  Rte_FSP1DiagInfoL1_oFSP1_Frame_L1_oLIN00_f04712d6_Rx = 0U;
  Rte_FSP1DiagInfoL2_oFSP1_Frame_L2_oLIN01_7f2a1c9e_Rx = 0U;
  Rte_FSP1DiagInfoL3_oFSP1_Frame_L3_oLIN02_b1faa76e_Rx = 0U;
  Rte_FSP1DiagInfoL4_oFSP1_Frame_L4_oLIN03_ba81064f_Rx = 0U;
  Rte_FSP1DiagInfoL5_oFSP1_Frame_L5_oLIN04_733c79a6_Rx = 0U;
  Rte_FSP1ResponseErrorL1_oFSP1_Frame_L1_oLIN00_b9e1fc6c_Rx = FALSE;
  Rte_FSP1ResponseErrorL2_oFSP1_Frame_L2_oLIN01_368cf224_Rx = FALSE;
  Rte_FSP1ResponseErrorL3_oFSP1_Frame_L3_oLIN02_f85c49d4_Rx = FALSE;
  Rte_FSP1ResponseErrorL4_oFSP1_Frame_L4_oLIN03_f327e8f5_Rx = FALSE;
  Rte_FSP1ResponseErrorL5_oFSP1_Frame_L5_oLIN04_3a9a971c_Rx = FALSE;
  Rte_FSP1SwitchStatusL2_oFSP1_Frame_L2_oLIN01_68e68ffa_Rx = 0U;
  Rte_FSP1SwitchStatusL3_oFSP1_Frame_L3_oLIN02_a636340a_Rx = 0U;
  Rte_FSP1SwitchStatusL4_oFSP1_Frame_L4_oLIN03_ad4d952b_Rx = 0U;
  Rte_FSP1SwitchStatusL5_oFSP1_Frame_L5_oLIN04_64f0eac2_Rx = 0U;
  Rte_FSP2DiagInfoL1_oFSP2_Frame_L1_oLIN00_f8caf847_Rx = 0U;
  Rte_FSP2DiagInfoL2_oFSP2_Frame_L2_oLIN01_77a7f60f_Rx = 0U;
  Rte_FSP2DiagInfoL3_oFSP2_Frame_L3_oLIN02_b9774dff_Rx = 0U;
  Rte_FSP2ResponseErrorL1_oFSP2_Frame_L1_oLIN00_a793a78f_Rx = FALSE;
  Rte_FSP2ResponseErrorL2_oFSP2_Frame_L2_oLIN01_28fea9c7_Rx = FALSE;
  Rte_FSP2ResponseErrorL3_oFSP2_Frame_L3_oLIN02_e62e1237_Rx = FALSE;
  Rte_FSP2SwitchStatusL2_oFSP2_Frame_L2_oLIN01_611deb1e_Rx = 0U;
  Rte_FSP2SwitchStatusL3_oFSP2_Frame_L3_oLIN02_afcd50ee_Rx = 0U;
  Rte_FSP3DiagInfoL2_oFSP3_Frame_L2_oLIN01_c6f3adbf_Rx = 0U;
  Rte_FSP3ResponseErrorL2_oFSP3_Frame_L2_oLIN01_22d09f66_Rx = FALSE;
  Rte_FSP3SwitchStatusL2_oFSP3_Frame_L2_oLIN01_664b3742_Rx = 0U;
  Rte_FSP4DiagInfoL2_oFSP4_Frame_L2_oLIN01_66bc232d_Rx = 0U;
  Rte_FSP4ResponseErrorL2_oFSP4_Frame_L2_oLIN01_141a1e01_Rx = FALSE;
  Rte_FSP4SwitchStatusL2_oFSP4_Frame_L2_oLIN01_72eb22d6_Rx = 0U;
  Rte_LIN_AdjustButtonStatus_oRCECStoCIOM_L5_oLIN04_52fa0034_Rx = 3U;
  Rte_SG_LIN_AlmClkSetCurAlm_rqst_sg_oLECM2toCIOM_FR1_L1_oLIN00_05d68799_Rx = Rte_C_LIN_AlmClkSetCurAlm_rqst_sg_0;
  Rte_LIN_BackButtonStatus_oRCECStoCIOM_L5_oLIN04_91249976_Rx = 3U;
  Rte_LIN_BackLightDimming_Status_oELCP1toCIOM_L4_oLIN03_ff25f41e_Rx = 31U;
  Rte_LIN_BlackPanelMode_ButtonStat_oELCP1toCIOM_L4_oLIN03_dece2221_Rx = 3U;
  Rte_LIN_BunkBAudioOnOff_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_a735a09a_Rx = 3U;
  Rte_LIN_BunkBIntLightActvnBtn_stat_oLECMBasic2CIOM_L1_oLIN00_5d53684c_Rx = 3U;
  Rte_LIN_BunkBParkHeater_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_0c567d49_Rx = 3U;
  Rte_LIN_BunkBTempDec_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_bad7c8e9_Rx = 3U;
  Rte_LIN_BunkBTempInc_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_7521d3fe_Rx = 3U;
  Rte_LIN_BunkBVolumeDown_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_c7ff11cb_Rx = 3U;
  Rte_LIN_BunkBVolumeUp_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_4fd90c4b_Rx = 3U;
  Rte_LIN_BunkH2AudioOnOff_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_8085e670_Rx = 3U;
  Rte_LIN_BunkH2Fade_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_64ae31ec_Rx = 3U;
  Rte_LIN_BunkH2IntLightActvnBtn_sta_oLECM2toCIOM_FR1_L1_oLIN00_7ae32ea6_Rx = 3U;
  Rte_LIN_BunkH2IntLightDecBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_445fc32a_Rx = 3U;
  Rte_LIN_BunkH2IntLightIncBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_a3c1ab0b_Rx = 3U;
  Rte_LIN_BunkH2LockButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_d71d2857_Rx = 3U;
  Rte_LIN_BunkH2OnOFF_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_6a259b90_Rx = 3U;
  Rte_SG_LIN_BunkH2PHTi_rqs_sg_oLECM2toCIOM_FR3_L1_oLIN00_0bf5fe80_Rx = Rte_C_LIN_BunkH2PHTi_rqs_sg_0;
  Rte_LIN_BunkH2ParkHeater_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_2be63ba3_Rx = 3U;
  Rte_LIN_BunkH2Phone_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_99e0fe87_Rx = 3U;
  Rte_LIN_BunkH2PowerWinCloseDSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_9fa2715d_Rx = 3U;
  Rte_LIN_BunkH2PowerWinClosePSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_281d2c26_Rx = 3U;
  Rte_LIN_BunkH2PowerWinOpenDSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_0df6d397_Rx = 3U;
  Rte_LIN_BunkH2PowerWinOpenPSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_ca96c47e_Rx = 3U;
  Rte_LIN_BunkH2RoofhatchCloseBtn_St_oLECM2toCIOM_FR1_L1_oLIN00_c184d263_Rx = 3U;
  Rte_LIN_BunkH2RoofhatchOpenBtn_Sta_oLECM2toCIOM_FR1_L1_oLIN00_dd2458bc_Rx = 3U;
  Rte_LIN_BunkH2TempDec_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_857664ae_Rx = 3U;
  Rte_LIN_BunkH2TempInc_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_61f74d27_Rx = 3U;
  Rte_LIN_BunkH2VolumeDown_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_e04f5721_Rx = 3U;
  Rte_LIN_BunkH2VolumeUp_ButtonStatu_oLECM2toCIOM_FR1_L1_oLIN00_92cefa8d_Rx = 3U;
  Rte_LIN_DRL_ButtonStatus_oELCP2toCIOM_L4_oLIN03_e8cb5735_Rx = 3U;
  Rte_LIN_DifflockDeactivationBtn_st_oDLFWtoCIOM_L4_oLIN03_7700113d_Rx = 3U;
  Rte_LIN_DifflockMode_Wheelstatus_oDLFWtoCIOM_L4_oLIN03_80a746c7_Rx = 15U;
  Rte_LIN_DoorAutoFuncBtn_stat_oILCP1toCIOM_L1_oLIN00_0dc2e67f_Rx = 3U;
  Rte_LIN_EscButtonMuddySiteStatus_oDLFWtoCIOM_L4_oLIN03_ac37f393_Rx = 3U;
  Rte_LIN_FCWPushButton_oCCFWtoCIOM_L4_oLIN03_242f5462_Rx = 3U;
  Rte_LIN_FogLightFront_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_e1a5bfc2_Rx = 3U;
  Rte_LIN_FogLightFront_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_ea214d6e_Rx = 3U;
  Rte_LIN_FogLightRear_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_14baadea_Rx = 3U;
  Rte_LIN_FogLightRear_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_1f3e5f46_Rx = 3U;
  Rte_LIN_HeadLampUpDown_SwitchStatu_oELCP2toCIOM_L4_oLIN03_ea48cea1_Rx = 7U;
  Rte_LIN_IntLghtCenterBtnFreeWhl_s_oILCP2toCIOM_L4_oLIN03_27a7dc09_Rx = 3U;
  Rte_LIN_IntLghtDimmingLvlDecBtn_s_oILCP1toCIOM_L1_oLIN00_0a50c243_Rx = 3U;
  Rte_LIN_IntLghtDimmingLvlFreeWhl_s_oILCP2toCIOM_L4_oLIN03_9d9afdd7_Rx = 15U;
  Rte_LIN_IntLghtDimmingLvlIncBtn_s_oILCP1toCIOM_L1_oLIN00_34c0f447_Rx = 3U;
  Rte_LIN_IntLghtMaxModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_eeb895fc_Rx = 3U;
  Rte_LIN_IntLghtModeSelrFreeWheel_s_oILCP1toCIOM_L1_oLIN00_98c2e509_Rx = 15U;
  Rte_LIN_IntLghtNightModeBt2_s_oILCP2toCIOM_L4_oLIN03_c1a85f21_Rx = 3U;
  Rte_LIN_IntLghtRestModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_46e1f77a_Rx = 3U;
  Rte_LIN_LKSPushButton_oCCFWtoCIOM_L4_oLIN03_8e8e108b_Rx = 3U;
  Rte_LIN_LevelingThumbwheel_stat_oELCP1toCIOM_L4_oLIN03_cb03d712_Rx = 31U;
  Rte_LIN_LightMode_Status_1_oELCP1toCIOM_L4_oLIN03_c62c6da2_Rx = 15U;
  Rte_LIN_LightMode_Status_2_oELCP2toCIOM_L4_oLIN03_cda89f0e_Rx = 15U;
  Rte_LIN_MemButtonStatus_oRCECStoCIOM_L5_oLIN04_0975e3a6_Rx = 3U;
  Rte_LIN_Offroad_ButtonStatus_oDLFWtoCIOM_L4_oLIN03_2199360f_Rx = 3U;
  Rte_LIN_RearWorkProjector_BtnStat_oELCP2toCIOM_L4_oLIN03_bb9bb1f8_Rx = 3U;
  Rte_LIN_SelectButtonStatus_oRCECStoCIOM_L5_oLIN04_07d81d0f_Rx = 3U;
  Rte_LIN_SpeedControlModeButtonStat_oCCFWtoCIOM_L4_oLIN03_0f6013d7_Rx = 3U;
  Rte_LIN_SpeedControlModeWheelStat_oCCFWtoCIOM_L4_oLIN03_cc9e59ce_Rx = 15U;
  Rte_LIN_StopButtonStatus_oRCECStoCIOM_L5_oLIN04_c8659d40_Rx = 3U;
  Rte_LIN_TCP_ABS_ButtonStatus_oTCPtoMaster_oLIN02_7968eb64_Rx = 3U;
  Rte_LIN_TCP_ATC_ButtonStatus_oTCPtoMaster_oLIN02_dff3ccff_Rx = 3U;
  Rte_LIN_TCP_ESC_ButtonStatus_oTCPtoMaster_oLIN02_e4eaf9d3_Rx = 3U;
  Rte_LIN_TCP_KnobPostionStatus_oTCPtoMaster_oLIN02_d1058f2b_Rx = 7U;
  Rte_LIN_TCP_TCS_ButtonStatus_oTCPtoMaster_oLIN02_fa9712f2_Rx = 3U;
  Rte_LIN_WRDownButtonStatus_oRCECStoCIOM_L5_oLIN04_48a8dab2_Rx = 7U;
  Rte_LIN_WRUpButtonStatus_oRCECStoCIOM_L5_oLIN04_a2873536_Rx = 7U;
  Rte_ResponseErrorCCFW_oCCFWtoCIOM_L4_oLIN03_38ff59f8_Rx = FALSE;
  Rte_ResponseErrorDLFW_oDLFWtoCIOM_L4_oLIN03_a0bc7d9c_Rx = FALSE;
  Rte_ResponseErrorELCP1_oELCP1toCIOM_L4_oLIN03_a9bf457f_Rx = FALSE;
  Rte_ResponseErrorELCP2_oELCP2toCIOM_L4_oLIN03_a23bb7d3_Rx = FALSE;
  Rte_ResponseErrorILCP1_oILCP1toCIOM_L1_oLIN00_44250bf0_Rx = FALSE;
  Rte_ResponseErrorILCP2_oILCP2toCIOM_L4_oLIN03_9e48a682_Rx = FALSE;
  Rte_ResponseErrorLECM2_oLECM2toCIOM_FR1_L1_oLIN00_ed8050df_Rx = FALSE;
  Rte_ResponseErrorLECMBasic_oLECMBasic2CIOM_L1_oLIN00_9a0b7e5e_Rx = FALSE;
  Rte_ResponseErrorRCECS_oRCECStoCIOM_L5_oLIN04_07d94fb4_Rx = FALSE;
  Rte_ResponseErrorTCP_oTCPtoMaster_oLIN02_2075be52_Rx = FALSE;
  Rte_SwitchDetectionNeeded1L1_oFSP1_Frame_L1_oLIN00_099b825d_Rx = FALSE;
  Rte_SwitchDetectionNeeded1L2_oFSP1_Frame_L2_oLIN01_86f68c15_Rx = FALSE;
  Rte_SwitchDetectionNeeded1L3_oFSP1_Frame_L3_oLIN02_482637e5_Rx = FALSE;
  Rte_SwitchDetectionNeeded1L4_oFSP1_Frame_L4_oLIN03_435d96c4_Rx = FALSE;
  Rte_SwitchDetectionNeeded1L5_oFSP1_Frame_L5_oLIN04_8ae0e92d_Rx = FALSE;
  Rte_SwitchDetectionNeeded2L1_oFSP2_Frame_L1_oLIN00_6fec6f8a_Rx = FALSE;
  Rte_SwitchDetectionNeeded2L2_oFSP2_Frame_L2_oLIN01_e08161c2_Rx = FALSE;
  Rte_SwitchDetectionNeeded2L3_oFSP2_Frame_L3_oLIN02_2e51da32_Rx = FALSE;
  Rte_SwitchDetectionNeeded3L2_oFSP3_Frame_L2_oLIN01_c2ac3a8f_Rx = FALSE;
  Rte_SwitchDetectionNeeded4L2_oFSP4_Frame_L2_oLIN01_2c6eba6c_Rx = FALSE;
  Rte_MemCpy(Rte_SwitchDetectionResp1L1_oFSP1_SwitchDetResp_L1_oLIN00_e8a163d5_Rx, Rte_C_SwitchDetectionResp1L1_0, sizeof(SwitchDetectionResp1L1));
  Rte_MemCpy(Rte_SwitchDetectionResp1L2_oFSP1_SwitchDetResp_L2_oLIN01_02016dd3_Rx, Rte_C_SwitchDetectionResp1L2_0, sizeof(SwitchDetectionResp1L2));
  Rte_MemCpy(Rte_SwitchDetectionResp1L3_oFSP1_SwitchDetResp_L3_oLIN02_5945d426_Rx, Rte_C_SwitchDetectionResp1L3_0, sizeof(SwitchDetectionResp1L3));
  Rte_MemCpy(Rte_SwitchDetectionResp1L4_oFSP1_SwitchDetResp_L4_oLIN03_0c30779e_Rx, Rte_C_SwitchDetectionResp1L4_0, sizeof(SwitchDetectionResp1L4));
  Rte_MemCpy(Rte_SwitchDetectionResp1L5_oFSP1_SwitchDetResp_L5_oLIN04_50190a72_Rx, Rte_C_SwitchDetectionResp1L5_0, sizeof(SwitchDetectionResp1L5));
  Rte_MemCpy(Rte_SwitchDetectionResp2L1_oFSP2_SwitchDetResp_L1_oLIN00_865b6493_Rx, Rte_C_SwitchDetectionResp2L1_0, sizeof(SwitchDetectionResp2L1));
  Rte_MemCpy(Rte_SwitchDetectionResp2L2_oFSP2_SwitchDetResp_L2_oLIN01_6cfb6a95_Rx, Rte_C_SwitchDetectionResp2L2_0, sizeof(SwitchDetectionResp2L2));
  Rte_MemCpy(Rte_SwitchDetectionResp2L3_oFSP2_SwitchDetResp_L3_oLIN02_37bfd360_Rx, Rte_C_SwitchDetectionResp2L3_0, sizeof(SwitchDetectionResp2L3));
  Rte_MemCpy(Rte_SwitchDetectionResp3L2_oFSP3_SwitchDetResp_L2_oLIN01_ff826a68_Rx, Rte_C_SwitchDetectionResp3L2_0, sizeof(SwitchDetectionResp3L2));
  Rte_MemCpy(Rte_SwitchDetectionResp4L2_oFSP4_SwitchDetResp_L2_oLIN01_b10f6419_Rx, Rte_C_SwitchDetectionResp4L2_0, sizeof(SwitchDetectionResp4L2));

  /* initialize inter-runnable variables */
  Rte_Irv_StartApplication_IrvMemoryProtectionData = Rte_C_DtMemoryProtectionDataElementType_0;
  Rte_Irv_StartApplication_IrvOccuranceCounterDid = 0U;

  /* mode management initialization part 1 */

  Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_BswM_ESH_Mode_STARTUP;

}


/**********************************************************************************************************************
 * Internal/External Tx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StartApplication_PpDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx_DeDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx(uint32 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_DynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StartApplication_PpFSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx_DeFSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx(uint16 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_FSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StartApplication_PpPinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx_DePinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx(uint8 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_PinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StartApplication_PpTrustedData_DeValue(uint8 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_StartApplication_PpTrustedData_DeValue = *(&data);
  /* scheduled trigger for runnables: StartApplicationTrusted_OnDataRec_TrustedData */
  (void)SetEvent(StartApplication_Trusted_Task, Rte_Ev_Run_StartApplicationTrusted_StartApplicationTrusted_OnDataRec_TrustedData); /* PRQA S 3417 */ /* MD_Rte_Os */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */


/**********************************************************************************************************************
 * Internal/External Rx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505, 3206 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505, 3206 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505, 3206 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505, 3206 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_LIN1_ScheduleTableRequestMode_requestedMode(P2VAR(BswM_BswMRteMDG_LIN1Schedule, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN1Schedule_BswM_MDGP_BswMRteMDG_LIN1Schedule_requestedMode;

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_LIN2_ScheduleTableRequestMode_requestedMode(P2VAR(BswM_BswMRteMDG_LIN2Schedule, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN2Schedule_BswM_MDGP_BswMRteMDG_LIN2Schedule_requestedMode;

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_LIN3_ScheduleTableRequestMode_requestedMode(P2VAR(BswM_BswMRteMDG_LIN3Schedule, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN3Schedule_BswM_MDGP_BswMRteMDG_LIN3Schedule_requestedMode;

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_LIN4_ScheduleTableRequestMode_requestedMode(P2VAR(BswM_BswMRteMDG_LIN4Schedule, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN4Schedule_BswM_MDGP_BswMRteMDG_LIN4Schedule_requestedMode;

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_LIN5_ScheduleTableRequestMode_requestedMode(P2VAR(BswM_BswMRteMDG_LIN5Schedule, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN5Schedule_BswM_MDGP_BswMRteMDG_LIN5Schedule_requestedMode;

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StartApplication_PpEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx_DeEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx(P2VAR(uint16, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  (void)Com_ReceiveSignal(ComConf_ComSignal_EngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx, (data)); /* PRQA S 3453 */ /* MD_MSR_19.7 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StartApplication_PpFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx_DeFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  (void)Com_ReceiveSignal(ComConf_ComSignal_FSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx, (data)); /* PRQA S 3453 */ /* MD_MSR_19.7 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StartApplication_PpTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx_DeTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx(P2VAR(uint16, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) data) /* PRQA S 0850, 3673, 1505, 3206 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10, MD_Rte_3206 */
{
  *data = 65535U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StartApplication_PpTrustedDataVerification_DeValue(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_StartApplicationTrusted_PpTrustedDataVerification_DeValue;

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Internal C/S connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_OsApplication_Untrusted_Core0_CBReadData_DemDataElementClass_StartApplication_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) Data) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  StartApplication_DIAG_DcmReadData(Data);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_OsApplication_Untrusted_Core0_CBReadData_DemDataElementClass_StartApplication_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMSATELLITE_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) Data) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  StartApplication_DIAG_DemReadData(Data);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Issm_Issm_IssStateChange_Issm_IssActivation(Issm_IssHandleType issID) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Issm_Issm_IssStateChange_Issm_IssDeactivation(Issm_IssHandleType issID) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpDiagnosticMonitor_DEM_EVENT_StartApplication_SetEventStatus(Dem_EventStatusType EventStatus) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret;

  ret = Dem_SetEventStatus((Dem_EventIdType)211, EventStatus);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpJ1939Rm_SendRequest_J1939RmUser_StartApplication_SendRequest(NetworkHandleType channel, uint32 requestedPgn, P2CONST(J1939Rm_ExtIdInfoType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_DATA) extIdInfo, uint8 destAddress, uint8 priority, boolean checkTimeout) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
} /* PRQA S 6060 */ /* MD_MSR_STPAR */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpMemoryAccessViolationState_GetState(P2VAR(boolean, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) State) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  StartApplicationMemoryAccessState_GetState(State);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpMemoryAccessViolationState_Reset(void) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  StartApplicationMemoryAccessState_Reset();

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpTrustedDataInvalid_Write(uint8 Value) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  StartApplicationTrusted_TriggerMemoryAccesViolation(Value);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_EcuM_ShutdownTarget_SelectShutdownTarget(EcuM_StateType targetState, EcuM_SleepModeType resetSleepMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_EcuM_ShutdownTarget_SelectShutdownTarget.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget.Rte_Active = 1;
  Rte_CS_ServerQueue_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_EcuM_ShutdownTarget_SelectShutdownTarget;

  Rte_CS_ServerQueue_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget.targetState = targetState;
  Rte_CS_ServerQueue_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget.resetSleepMode = resetSleepMode;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: EcuM_SelectShutdownTarget */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_EcuM_SelectShutdownTarget); /* PRQA S 3417 */ /* MD_Rte_Os */

    {

      ret = Rte_CS_ClientQueue_StartApplication_EcuM_ShutdownTarget_SelectShutdownTarget.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpDemOpCycle_DemOperationCycle_0_SetOperationCycleState(Dem_OperationCycleStateType CycleState) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_PpDemOpCycle_DemOperationCycle_0_SetOperationCycleState.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState.Rte_Active = 1;
  Rte_CS_ServerQueue_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_PpDemOpCycle_DemOperationCycle_0_SetOperationCycleState;

  Rte_CS_ServerQueue_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState.CycleState = CycleState;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: Dem_SetOperationCycleState */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_DemMaster_OsApplication_Untrusted_Core0_SetOperationCycleState); /* PRQA S 3417 */ /* MD_Rte_Os */

    {

      ret = Rte_CS_ClientQueue_StartApplication_PpDemOpCycle_DemOperationCycle_0_SetOperationCycleState.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode(P2VAR(ComM_ModeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode;

  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_GetCurrentComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_GetCurrentComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {
      *ComMode = Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode.ComMode;

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_Backbone1J1939_2a22de3d_RequestComMode(ComM_ModeType ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone1J1939_2a22de3d_RequestComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_Backbone1J1939_2a22de3d_RequestComMode;

  Rte_CS_ServerQueue_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode.ComMode = ComMode;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_RequestComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_RequestComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone1J1939_2a22de3d_RequestComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_Backbone2_3f947ba3_GetCurrentComMode(P2VAR(ComM_ModeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone2_3f947ba3_GetCurrentComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone2_3f947ba3_GetCurrentComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_Backbone2_3f947ba3_GetCurrentComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_Backbone2_3f947ba3_GetCurrentComMode;

  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_GetCurrentComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_GetCurrentComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {
      *ComMode = Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone2_3f947ba3_GetCurrentComMode.ComMode;

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone2_3f947ba3_GetCurrentComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_Backbone2_3f947ba3_RequestComMode(ComM_ModeType ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone2_3f947ba3_RequestComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_Backbone2_3f947ba3_RequestComMode;

  Rte_CS_ServerQueue_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode.ComMode = ComMode;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_RequestComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_RequestComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone2_3f947ba3_RequestComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode(P2VAR(ComM_ModeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode;

  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_GetCurrentComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_GetCurrentComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {
      *ComMode = Rte_CS_ClientQueue_StartApplication_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode.ComMode;

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_CabSubnet_aa77b0b0_RequestComMode(ComM_ModeType ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_CabSubnet_aa77b0b0_RequestComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_CabSubnet_aa77b0b0_RequestComMode;

  Rte_CS_ServerQueue_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode.ComMode = ComMode;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_RequestComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_RequestComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_CabSubnet_aa77b0b0_RequestComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_FMSNet_05490e3d_GetCurrentComMode(P2VAR(ComM_ModeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_FMSNet_05490e3d_GetCurrentComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_FMSNet_05490e3d_GetCurrentComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_FMSNet_05490e3d_GetCurrentComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_FMSNet_05490e3d_GetCurrentComMode;

  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_GetCurrentComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_GetCurrentComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {
      *ComMode = Rte_CS_ClientQueue_StartApplication_UR_CN_FMSNet_05490e3d_GetCurrentComMode.ComMode;

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_FMSNet_05490e3d_GetCurrentComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_FMSNet_05490e3d_RequestComMode(ComM_ModeType ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_FMSNet_05490e3d_RequestComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_FMSNet_05490e3d_RequestComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_FMSNet_05490e3d_RequestComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_FMSNet_05490e3d_RequestComMode;

  Rte_CS_ServerQueue_ComM_UR_CN_FMSNet_05490e3d_RequestComMode.ComMode = ComMode;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_RequestComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_RequestComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_FMSNet_05490e3d_RequestComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_LIN00_ace1a6ba_GetCurrentComMode(P2VAR(ComM_ModeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN00_ace1a6ba_GetCurrentComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN00_ace1a6ba_GetCurrentComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_LIN00_ace1a6ba_GetCurrentComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN00_ace1a6ba_GetCurrentComMode;

  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_GetCurrentComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_GetCurrentComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {
      *ComMode = Rte_CS_ClientQueue_StartApplication_UR_CN_LIN00_ace1a6ba_GetCurrentComMode.ComMode;

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_LIN00_ace1a6ba_GetCurrentComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_LIN00_ace1a6ba_RequestComMode(ComM_ModeType ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN00_ace1a6ba_RequestComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN00_ace1a6ba_RequestComMode;

  Rte_CS_ServerQueue_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode.ComMode = ComMode;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_RequestComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_RequestComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_LIN00_ace1a6ba_RequestComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_LIN01_4323cd84_GetCurrentComMode(P2VAR(ComM_ModeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN01_4323cd84_GetCurrentComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN01_4323cd84_GetCurrentComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_LIN01_4323cd84_GetCurrentComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN01_4323cd84_GetCurrentComMode;

  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_GetCurrentComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_GetCurrentComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {
      *ComMode = Rte_CS_ClientQueue_StartApplication_UR_CN_LIN01_4323cd84_GetCurrentComMode.ComMode;

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_LIN01_4323cd84_GetCurrentComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_LIN01_4323cd84_RequestComMode(ComM_ModeType ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN01_4323cd84_RequestComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN01_4323cd84_RequestComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_LIN01_4323cd84_RequestComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN01_4323cd84_RequestComMode;

  Rte_CS_ServerQueue_ComM_UR_CN_LIN01_4323cd84_RequestComMode.ComMode = ComMode;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_RequestComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_RequestComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_LIN01_4323cd84_RequestComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_LIN02_a8147687_GetCurrentComMode(P2VAR(ComM_ModeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN02_a8147687_GetCurrentComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN02_a8147687_GetCurrentComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_LIN02_a8147687_GetCurrentComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN02_a8147687_GetCurrentComMode;

  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_GetCurrentComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_GetCurrentComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {
      *ComMode = Rte_CS_ClientQueue_StartApplication_UR_CN_LIN02_a8147687_GetCurrentComMode.ComMode;

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_LIN02_a8147687_GetCurrentComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_LIN02_a8147687_RequestComMode(ComM_ModeType ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN02_a8147687_RequestComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN02_a8147687_RequestComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_LIN02_a8147687_RequestComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN02_a8147687_RequestComMode;

  Rte_CS_ServerQueue_ComM_UR_CN_LIN02_a8147687_RequestComMode.ComMode = ComMode;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_RequestComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_RequestComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_LIN02_a8147687_RequestComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_LIN03_47d61db9_GetCurrentComMode(P2VAR(ComM_ModeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN03_47d61db9_GetCurrentComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN03_47d61db9_GetCurrentComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_LIN03_47d61db9_GetCurrentComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN03_47d61db9_GetCurrentComMode;

  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_GetCurrentComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_GetCurrentComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {
      *ComMode = Rte_CS_ClientQueue_StartApplication_UR_CN_LIN03_47d61db9_GetCurrentComMode.ComMode;

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_LIN03_47d61db9_GetCurrentComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_LIN03_47d61db9_RequestComMode(ComM_ModeType ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN03_47d61db9_RequestComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN03_47d61db9_RequestComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_LIN03_47d61db9_RequestComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN03_47d61db9_RequestComMode;

  Rte_CS_ServerQueue_ComM_UR_CN_LIN03_47d61db9_RequestComMode.ComMode = ComMode;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_RequestComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_RequestComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_LIN03_47d61db9_RequestComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_LIN04_a50a06c0_GetCurrentComMode(P2VAR(ComM_ModeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN04_a50a06c0_GetCurrentComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN04_a50a06c0_GetCurrentComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_LIN04_a50a06c0_GetCurrentComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN04_a50a06c0_GetCurrentComMode;

  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_GetCurrentComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_GetCurrentComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {
      *ComMode = Rte_CS_ClientQueue_StartApplication_UR_CN_LIN04_a50a06c0_GetCurrentComMode.ComMode;

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_LIN04_a50a06c0_GetCurrentComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_LIN04_a50a06c0_RequestComMode(ComM_ModeType ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN04_a50a06c0_RequestComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN04_a50a06c0_RequestComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_LIN04_a50a06c0_RequestComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_LIN04_a50a06c0_RequestComMode;

  Rte_CS_ServerQueue_ComM_UR_CN_LIN04_a50a06c0_RequestComMode.ComMode = ComMode;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_RequestComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_RequestComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_LIN04_a50a06c0_RequestComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode(P2VAR(ComM_ModeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode;

  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_GetCurrentComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_GetCurrentComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {
      *ComMode = Rte_CS_ClientQueue_StartApplication_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode.ComMode;

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_SecuritySubnet_7cec9a61_RequestComMode(ComM_ModeType ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_CS_ClientQueue_StartApplication_UR_CN_SecuritySubnet_7cec9a61_RequestComMode.Rte_CallCompleted = FALSE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode.Rte_Active = 1;
  Rte_CS_ServerQueue_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode.Rte_ClientId = Rte_CS_ClientConfigIndex_StartApplication_UR_CN_SecuritySubnet_7cec9a61_RequestComMode;

  Rte_CS_ServerQueue_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode.ComMode = ComMode;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  {

    /* scheduled trigger for runnables: ComM_RequestComMode */
    (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_ComM_RequestComMode); /* PRQA S 3417 */ /* MD_Rte_Os */

    {

      ret = Rte_CS_ClientQueue_StartApplication_UR_CN_SecuritySubnet_7cec9a61_RequestComMode.Rte_Result;
    }

  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_ClearDTC_vDem42_ClearDTC(void) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_ClearDTC_vDem42_SelectDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_ControlDTCSuppression43_vDem42_GetDTCSuppression(P2VAR(boolean, AUTOMATIC, RTE_VDEM42_APPL_VAR) SuppressionStatus) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_ControlDTCSuppression43_vDem42_SetDTCSuppression(boolean SuppressionStatus) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_VDEM42_APPL_VAR) DTCOfEvent) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetDebouncingOfEvent(Dem_EventIdType EventId, P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_VDEM42_APPL_VAR) DebouncingState) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetEventExtendedDataRecordEx(Dem_EventIdType EventId, uint8 RecordNumber, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_VDEM42_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_VDEM42_APPL_VAR) BufSize) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetEventFailed(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_VDEM42_APPL_VAR) EventFailed) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_VDEM42_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_VDEM42_APPL_VAR) BufSize) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetEventTested(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_VDEM42_APPL_VAR) EventTested) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetEventUdsStatus(Dem_EventIdType EventId, P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_VDEM42_APPL_VAR) UDSStatusByte) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetFaultDetectionCounter(Dem_EventIdType EventId, P2VAR(sint8, AUTOMATIC, RTE_VDEM42_APPL_VAR) FaultDetectionCounter) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}


/**********************************************************************************************************************
 * Inter-runnable variable access
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_IrvWrite_StartApplication_StartApplication_OnDataRec_RxData_IrvMemoryProtectionData(P2CONST(DtMemoryProtectionDataElementType, AUTOMATIC, RTE_APPL_DATA) data)
{

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Irv_StartApplication_IrvMemoryProtectionData = *data;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

}


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(BswM_ESH_Mode nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  BswM_ESH_Mode currentMode;
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;
  if (nextMode >= 5U)
  {
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (currentMode >= 5U)
  {
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = nextMode;
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */


/**********************************************************************************************************************
 * Mode reading API (Rte_Mode)
 *********************************************************************************************************************/

FUNC(BswM_ESH_Mode, RTE_CODE) Rte_Mode_BswM_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode(void) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  return Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;
}


/**********************************************************************************************************************
 * Transmission/Mode Switch Acknowledgement handling (Rte_Feedback/Rte_SwitchAck)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType nextMode) /* PRQA S 0850, 1505, 3206 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK;


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset(Dcm_EcuResetType nextMode) /* PRQA S 0850, 1505, 3206 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK;


  return ret;
}


/**********************************************************************************************************************
 * Task bodies for RTE controlled tasks
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Task:     Default_Appl_Task
 * Priority: 5
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Default_Appl_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{
  EventMaskType ev;


  /* call runnable */
  StartApplication_Init();

  /* call runnable */
  StartApplicationMemoryAccessState_Init();

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Run_StartApplication_StartApplication_Cyclic1000ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic10ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic1ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic250ms | Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxCtrl | Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxData); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(Default_Appl_Task, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Run_StartApplication_StartApplication_Cyclic1000ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic10ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic1ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic250ms | Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxCtrl | Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxData)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_Cyclic1000ms) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_Cyclic1000ms();
    }

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_Cyclic10ms) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_Cyclic10ms();
    }

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_Cyclic1ms) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_Cyclic1ms();
    }

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_Cyclic250ms) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_Cyclic250ms();
    }

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxCtrl) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_OnDataRec_RxCtrl();
    }

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxData) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_OnDataRec_RxData();
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Default_BSW_Async_Task
 * Priority: 30
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Default_BSW_Async_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{
  EventMaskType ev;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_100ms | Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms | Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_20ms | Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms | Rte_Ev_Run_BswM_BswM_Read_LIN1_ScheduleTableRequestMode | Rte_Ev_Run_BswM_BswM_Read_LIN2_ScheduleTableRequestMode | Rte_Ev_Run_BswM_BswM_Read_LIN3_ScheduleTableRequestMode | Rte_Ev_Run_BswM_BswM_Read_LIN4_ScheduleTableRequestMode | Rte_Ev_Run_BswM_BswM_Read_LIN5_ScheduleTableRequestMode | Rte_Ev_Run_ComM_GetCurrentComMode | Rte_Ev_Run_ComM_RequestComMode | Rte_Ev_Run_DemMaster_OsApplication_Untrusted_Core0_SetOperationCycleState | Rte_Ev_Run_EcuM_SelectShutdownTarget); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(Default_BSW_Async_Task, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_100ms | Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms | Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_20ms | Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms | Rte_Ev_Run_BswM_BswM_Read_LIN1_ScheduleTableRequestMode | Rte_Ev_Run_BswM_BswM_Read_LIN2_ScheduleTableRequestMode | Rte_Ev_Run_BswM_BswM_Read_LIN3_ScheduleTableRequestMode | Rte_Ev_Run_BswM_BswM_Read_LIN4_ScheduleTableRequestMode | Rte_Ev_Run_BswM_BswM_Read_LIN5_ScheduleTableRequestMode | Rte_Ev_Run_ComM_GetCurrentComMode | Rte_Ev_Run_ComM_RequestComMode | Rte_Ev_Run_DemMaster_OsApplication_Untrusted_Core0_SetOperationCycleState | Rte_Ev_Run_EcuM_SelectShutdownTarget)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_100ms) != (EventMaskType)0)
    {
      /* call runnable */
      EcuM_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      BswM_MainFunction();

      /* call schedulable entity */
      Com_MainFunctionRx();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Com_MainFunctionTx();

      /* call schedulable entity */
      LinIf_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      LinSM_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      CanNm_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      CanSM_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      CanTp_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Can_MainFunction_BusOff();

      /* call schedulable entity */
      Can_MainFunction_Mode();

      /* call schedulable entity */
      Can_MainFunction_Wakeup();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      ComM_MainFunction_0();

      /* call runnable */
      ComM_MainFunction_1();

      /* call runnable */
      ComM_MainFunction_2();

      /* call runnable */
      ComM_MainFunction_3();

      /* call runnable */
      ComM_MainFunction_4();

      /* call runnable */
      ComM_MainFunction_5();

      /* call runnable */
      ComM_MainFunction_6();

      /* call runnable */
      ComM_MainFunction_7();

      /* call runnable */
      ComM_MainFunction_8();

      /* call runnable */
      ComM_MainFunction_9();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Com_MainFunctionRouteSignals();

      /* call runnable */
      Dcm_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_100ms) != (EventMaskType)0)
    {
      /* call runnable */
      Dem_MasterMainFunction();

      /* call runnable */
      Dem_SatelliteMainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Fee_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Fls_MainFunction();

      /* call runnable */
      Issm_MainFunction();

      /* call schedulable entity */
      J1939Nm_MainFunction();

      /* call runnable */
      J1939Rm_MainFunction();

      /* call schedulable entity */
      J1939Tp_MainFunction();

      /* call runnable */
      NvM_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Rte_ComSendSignalProxyPeriodic();
    }

    if ((ev & Rte_Ev_Run_ComM_GetCurrentComMode) != (EventMaskType)0)
    {
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_GetCurrentComMode((ComM_UserHandleType)3, &ClientQueue->ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone2_3f947ba3_GetCurrentComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_Backbone2_3f947ba3_GetCurrentComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone2_3f947ba3_GetCurrentComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_Backbone2_3f947ba3_GetCurrentComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_Backbone2_3f947ba3_GetCurrentComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_GetCurrentComMode((ComM_UserHandleType)0, &ClientQueue->ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_GetCurrentComMode((ComM_UserHandleType)1, &ClientQueue->ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_FMSNet_05490e3d_GetCurrentComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_FMSNet_05490e3d_GetCurrentComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_FMSNet_05490e3d_GetCurrentComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_FMSNet_05490e3d_GetCurrentComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_FMSNet_05490e3d_GetCurrentComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_GetCurrentComMode((ComM_UserHandleType)4, &ClientQueue->ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN00_ace1a6ba_GetCurrentComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN00_ace1a6ba_GetCurrentComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN00_ace1a6ba_GetCurrentComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_LIN00_ace1a6ba_GetCurrentComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_LIN00_ace1a6ba_GetCurrentComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_GetCurrentComMode((ComM_UserHandleType)5, &ClientQueue->ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN01_4323cd84_GetCurrentComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN01_4323cd84_GetCurrentComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN01_4323cd84_GetCurrentComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_LIN01_4323cd84_GetCurrentComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_LIN01_4323cd84_GetCurrentComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_GetCurrentComMode((ComM_UserHandleType)6, &ClientQueue->ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN02_a8147687_GetCurrentComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN02_a8147687_GetCurrentComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN02_a8147687_GetCurrentComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_LIN02_a8147687_GetCurrentComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_LIN02_a8147687_GetCurrentComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_GetCurrentComMode((ComM_UserHandleType)7, &ClientQueue->ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN03_47d61db9_GetCurrentComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN03_47d61db9_GetCurrentComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN03_47d61db9_GetCurrentComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_LIN03_47d61db9_GetCurrentComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_LIN03_47d61db9_GetCurrentComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_GetCurrentComMode((ComM_UserHandleType)8, &ClientQueue->ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN04_a50a06c0_GetCurrentComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN04_a50a06c0_GetCurrentComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN04_a50a06c0_GetCurrentComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_LIN04_a50a06c0_GetCurrentComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_LIN04_a50a06c0_GetCurrentComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_GetCurrentComMode((ComM_UserHandleType)9, &ClientQueue->ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_GetCurrentComMode((ComM_UserHandleType)2, &ClientQueue->ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
    }

    if ((ev & Rte_Ev_Run_ComM_RequestComMode) != (EventMaskType)0)
    {
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_RequestComMode((ComM_UserHandleType)3, Rte_CS_ServerQueue_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode.ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_RequestComMode((ComM_UserHandleType)0, Rte_CS_ServerQueue_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode.ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_RequestComMode((ComM_UserHandleType)1, Rte_CS_ServerQueue_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode.ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_FMSNet_05490e3d_RequestComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_FMSNet_05490e3d_RequestComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_FMSNet_05490e3d_RequestComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_FMSNet_05490e3d_RequestComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_FMSNet_05490e3d_RequestComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_RequestComMode((ComM_UserHandleType)4, Rte_CS_ServerQueue_ComM_UR_CN_FMSNet_05490e3d_RequestComMode.ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_RequestComMode((ComM_UserHandleType)5, Rte_CS_ServerQueue_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode.ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN01_4323cd84_RequestComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN01_4323cd84_RequestComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN01_4323cd84_RequestComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_LIN01_4323cd84_RequestComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_LIN01_4323cd84_RequestComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_RequestComMode((ComM_UserHandleType)6, Rte_CS_ServerQueue_ComM_UR_CN_LIN01_4323cd84_RequestComMode.ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN02_a8147687_RequestComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN02_a8147687_RequestComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN02_a8147687_RequestComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_LIN02_a8147687_RequestComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_LIN02_a8147687_RequestComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_RequestComMode((ComM_UserHandleType)7, Rte_CS_ServerQueue_ComM_UR_CN_LIN02_a8147687_RequestComMode.ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN03_47d61db9_RequestComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN03_47d61db9_RequestComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN03_47d61db9_RequestComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_LIN03_47d61db9_RequestComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_LIN03_47d61db9_RequestComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_RequestComMode((ComM_UserHandleType)8, Rte_CS_ServerQueue_ComM_UR_CN_LIN03_47d61db9_RequestComMode.ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN04_a50a06c0_RequestComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN04_a50a06c0_RequestComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN04_a50a06c0_RequestComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_LIN04_a50a06c0_RequestComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_LIN04_a50a06c0_RequestComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_RequestComMode((ComM_UserHandleType)9, Rte_CS_ServerQueue_ComM_UR_CN_LIN04_a50a06c0_RequestComMode.ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
      while (Rte_CS_ServerQueueInfo_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = ComM_RequestComMode((ComM_UserHandleType)2, Rte_CS_ServerQueue_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode.ComMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
    }

    if ((ev & Rte_Ev_Run_EcuM_SelectShutdownTarget) != (EventMaskType)0)
    {
      while (Rte_CS_ServerQueueInfo_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = EcuM_SelectShutdownTarget(Rte_CS_ServerQueue_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget.targetState, Rte_CS_ServerQueue_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget.resetSleepMode);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
    }

    if ((ev & Rte_Ev_Run_DemMaster_OsApplication_Untrusted_Core0_SetOperationCycleState) != (EventMaskType)0)
    {
      while (Rte_CS_ServerQueueInfo_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState.Rte_Active > 0)
      {
        P2VAR(Rte_CS_ClientQueueType_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
        uint8 clientId;
        Rte_CS_ServerQueueInfo_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState.Rte_Active = 0;
        clientId = Rte_CS_ServerQueue_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState.Rte_ClientId;
        if (clientId >= 1U)
        {
          continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
        }
        ClientQueue = Rte_CS_ClientConfig_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState[clientId].Rte_ClientQueue;

        /* call runnable */
        ClientQueue->Rte_Result = Dem_SetOperationCycleState((Dem_OperationCycleIdType)0, Rte_CS_ServerQueue_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState.CycleState);

        ClientQueue->Rte_CallCompleted = TRUE;
      }
    }

    if ((ev & Rte_Ev_Run_BswM_BswM_Read_LIN3_ScheduleTableRequestMode) != (EventMaskType)0)
    {
      /* call runnable */
      BswM_Read_LIN3_ScheduleTableRequestMode();
    }

    if ((ev & Rte_Ev_Run_BswM_BswM_Read_LIN1_ScheduleTableRequestMode) != (EventMaskType)0)
    {
      /* call runnable */
      BswM_Read_LIN1_ScheduleTableRequestMode();
    }

    if ((ev & Rte_Ev_Run_BswM_BswM_Read_LIN2_ScheduleTableRequestMode) != (EventMaskType)0)
    {
      /* call runnable */
      BswM_Read_LIN2_ScheduleTableRequestMode();
    }

    if ((ev & Rte_Ev_Run_BswM_BswM_Read_LIN4_ScheduleTableRequestMode) != (EventMaskType)0)
    {
      /* call runnable */
      BswM_Read_LIN4_ScheduleTableRequestMode();
    }

    if ((ev & Rte_Ev_Run_BswM_BswM_Read_LIN5_ScheduleTableRequestMode) != (EventMaskType)0)
    {
      /* call runnable */
      BswM_Read_LIN5_ScheduleTableRequestMode();
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     StartApplication_MemoryViolation_Task
 * Priority: 40
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(StartApplication_MemoryViolation_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{
  EventMaskType ev;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Run_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(StartApplication_MemoryViolation_Task, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Run_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_MEMORYPROTECTION_Cyclic10ms();
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0770:  MISRA rule: 14.5
     Reason:     The continue prevents that the RTE accesses data structures with an invalid index in the rest of the loop.
                 In this special case, the usage of continue provides better readability compared to another nested if.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_0781:  MISRA rule: 5.6
     Reason:     The name is being used as a structure/union member as well as being a label, tag or ordinary identifier.
                 The compliance to this rule is under user's control.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects leading to the violation.

   MD_Rte_3197:  MISRA rule: -
     Reason:     The variable is not written by the code in all possible code variants. Due to this, the variable is initialized.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: -
     Reason:     The parameter's are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3408:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3447:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Qac:
     Reason:     This justification is used as summary justification for all deviations caused by wrong analysis tool results.
                 The used analysis tool QAC 7.0 sometimes creates wrong messages. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
