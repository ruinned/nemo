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
 *          File:  Rte_OsApplication_Trusted_Core0.c
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

#define Rte_DisableAllInterrupts(Mode) Rte_DisableAllInterrupts##Mode() /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */

#if defined(osDisableGlobalKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableAllInterruptsKM() osDisableGlobalKM()   /* MICROSAR OS */
#else
# define Rte_DisableAllInterruptsKM() DisableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osDisableGlobalUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableAllInterruptsUM() osDisableGlobalUM()   /* MICROSAR OS */
#else
# define Rte_DisableAllInterruptsUM() DisableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osDisableGlobalAM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableAllInterruptsAM() osDisableGlobalAM()   /* MICROSAR OS */
#else
# define Rte_DisableAllInterruptsAM() DisableAllInterrupts()   /* AUTOSAR OS */
#endif

#define Rte_EnableAllInterrupts(Mode) Rte_EnableAllInterrupts##Mode() /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */

#if defined(osEnableGlobalKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableAllInterruptsKM() osEnableGlobalKM()   /* MICROSAR OS */
#else
# define Rte_EnableAllInterruptsKM() EnableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableGlobalUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableAllInterruptsUM() osEnableGlobalUM()   /* MICROSAR OS */
#else
# define Rte_EnableAllInterruptsUM() EnableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableGlobalAM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableAllInterruptsAM() osEnableGlobalAM()   /* MICROSAR OS */
#else
# define Rte_EnableAllInterruptsAM() EnableAllInterrupts()   /* AUTOSAR OS */
#endif

/**********************************************************************************************************************
 * API for enable / disable interrupts up to the systemLevel
 *********************************************************************************************************************/

#define Rte_DisableOSInterrupts(Mode) Rte_DisableOSInterrupts##Mode() /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */

#if defined(osDisableLevelKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableOSInterruptsKM() osDisableLevelKM()   /* MICROSAR OS */
#else
# define Rte_DisableOSInterruptsKM() SuspendOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osDisableLevelUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableOSInterruptsUM() osDisableLevelUM()   /* MICROSAR OS */
#else
# define Rte_DisableOSInterruptsUM() SuspendOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osDisableLevelAM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableOSInterruptsAM() osDisableLevelAM()   /* MICROSAR OS */
#else
# define Rte_DisableOSInterruptsAM() SuspendOSInterrupts()   /* AUTOSAR OS */
#endif

#define Rte_EnableOSInterrupts(Mode) Rte_EnableOSInterrupts##Mode() /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */

#if defined(osEnableLevelKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableOSInterruptsKM() osEnableLevelKM()   /* MICROSAR OS */
#else
# define Rte_EnableOSInterruptsKM() ResumeOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableLevelUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableOSInterruptsUM() osEnableLevelUM()   /* MICROSAR OS */
#else
# define Rte_EnableOSInterruptsUM() ResumeOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableLevelAM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableOSInterruptsAM() osEnableLevelAM()   /* MICROSAR OS */
#else
# define Rte_EnableOSInterruptsAM() ResumeOSInterrupts()   /* AUTOSAR OS */
#endif


/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint8, RTE_VAR_INIT) Rte_CDD_LFIC_b_DST_ResponseNG_P_SR = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_LFIC_b_DST_RxCompleteFlag_P_SR = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_RFIC_RficSysModeConfirm_P_SR_RficSysModeConfirm = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ABSInhibitRqstDenied, RTE_VAR_INIT) Rte_ABSInhibitRqstDenied_oCIOM_BB2_25P_oBackbone2_b939a8e2_Tx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_12VLivingVolt_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_12VLivingVolt_oDebug2_SCIM_BB2_oBackbone2_74d816f4_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_12VParkedVolt_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_12VParkedVolt_oDebug2_SCIM_BB2_oBackbone2_44f2f3c2_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI01_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI01_oDebug7_SCIM_BB2_oBackbone2_d2059597_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI02_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI02_oDebug7_SCIM_BB2_oBackbone2_770dfefb_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI03_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI03_oDebug7_SCIM_BB2_oBackbone2_140a27df_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI04_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI04_oDebug7_SCIM_BB2_oBackbone2_e66c2e62_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI05_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI05_oDebug7_SCIM_BB2_oBackbone2_856bf746_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI06_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI06_oDebug7_SCIM_BB2_oBackbone2_20639c2a_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI07_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI07_oDebug8_SCIM_BB2_oBackbone2_0f71ca20_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI08_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI08_oDebug8_SCIM_BB2_oBackbone2_53cb063f_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI09_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI09_oDebug8_SCIM_BB2_oBackbone2_30ccdf1b_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI10_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI10_oDebug8_SCIM_BB2_oBackbone2_c1772095_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI11_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI11_oDebug8_SCIM_BB2_oBackbone2_a270f9b1_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI12_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI12_oDebug8_SCIM_BB2_oBackbone2_077892dd_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI13_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI13_oDebug28_SCIM_BB2_oBackbone2_f1e56b1c_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI14_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI14_oDebug28_SCIM_BB2_oBackbone2_44c7c224_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI15_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI15_oDebug28_SCIM_BB2_oBackbone2_78a7212c_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_ADI16_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_ADI16_oDebug28_SCIM_BB2_oBackbone2_3c060434_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_DAI1_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_DAI1_oDebug9_SCIM_BB2_oBackbone2_179e2272_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_DAI2_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_DAI2_oDebug9_SCIM_BB2_oBackbone2_b296491e_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_12VDCDCFault, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_12VDCDCFault_oDebug2_SCIM_BB2_oBackbone2_a76feb3e_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_12VDCDCVolt, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_12VDCDCVolt_oDebug2_SCIM_BB2_oBackbone2_cecf5c09_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_VBAT_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_VBAT_oDebug2_SCIM_BB2_oBackbone2_d3887400_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_BHS1_Fault_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_BHS1_Fault_oDebug3_SCIM_BB2_oBackbone2_66b07d64_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_BHS1_Volt_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_BHS1_Volt_oDebug3_SCIM_BB2_oBackbone2_8af915ef_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_BHS2_Fault_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_BHS2_Fault_oDebug3_SCIM_BB2_oBackbone2_ed63437d_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_BHS2_Volt_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_BHS2_Volt_oDebug3_SCIM_BB2_oBackbone2_e77fe6b5_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_BHS3_Fault_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_BHS3_Fault_oDebug3_SCIM_BB2_oBackbone2_22fd54b5_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_BHS3_Volt_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_BHS3_Volt_oDebug3_SCIM_BB2_oBackbone2_c3fdb783_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_BHS4_Fault_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_BHS4_Fault_oDebug3_SCIM_BB2_oBackbone2_21b4390e_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_BHS4_Volt_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_BHS4_Volt_oDebug3_SCIM_BB2_oBackbone2_3c720001_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WHS1_Duty_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WHS1_Duty_oDebug10_SCIM_BB2_oBackbone2_e4964bec_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WHS1_Fault_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WHS1_Fault_oDebug10_SCIM_BB2_oBackbone2_7f82e8ff_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WHS1_Freq_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WHS1_Freq_oDebug10_SCIM_BB2_oBackbone2_e909035f_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WHS1_Volt_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WHS1_Volt_oDebug10_SCIM_BB2_oBackbone2_fae484a1_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WHS2_Duty_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WHS2_Duty_oDebug10_SCIM_BB2_oBackbone2_6f4575f5_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WHS2_Fault_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WHS2_Fault_oDebug10_SCIM_BB2_oBackbone2_1b629301_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WHS2_Freq_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WHS2_Freq_oDebug10_SCIM_BB2_oBackbone2_62da3d46_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WHS2_Volt_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WHS2_Volt_oDebug10_SCIM_BB2_oBackbone2_7137bab8_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WLS1_Duty_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WLS1_Duty_oDebug11_SCIM_BB2_oBackbone2_151f9ecd_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WLS1_Fault_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WLS1_Fault_oDebug11_SCIM_BB2_oBackbone2_bbe8962a_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WLS1_Freq_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WLS1_Freq_oDebug11_SCIM_BB2_oBackbone2_1880d67e_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WLS1_Volt_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WLS1_Volt_oDebug11_SCIM_BB2_oBackbone2_0b6d5180_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WLS2_Duty_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WLS2_Duty_oDebug11_SCIM_BB2_oBackbone2_9ecca0d4_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WLS2_Fault_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WLS2_Fault_oDebug11_SCIM_BB2_oBackbone2_df08edd4_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WLS2_Freq_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WLS2_Freq_oDebug11_SCIM_BB2_oBackbone2_9353e867_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WLS2_Volt_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WLS2_Volt_oDebug11_SCIM_BB2_oBackbone2_80be6f99_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WLS3_Duty_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WLS3_Duty_oDebug9_SCIM_BB2_oBackbone2_c539df90_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WLS3_Fault_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WLS3_Fault_oDebug9_SCIM_BB2_oBackbone2_ee12f9c5_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WLS3_Freq_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WLS3_Freq_oDebug9_SCIM_BB2_oBackbone2_371b521a_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_SCIM_RD_WLS3_Volt_1, RTE_VAR_INIT) Rte_Debug_PVT_SCIM_RD_WLS3_Volt_oDebug9_SCIM_BB2_oBackbone2_b604fa02_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_StartApplicationTrusted_PpTrustedDataVerification_DeValue = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_AntP1_X, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntP1_X_oDebug22_SCIM_BB2_oBackbone2_3e4f02fb_Tx = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_AntP1_Y, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntP1_Y_oDebug22_SCIM_BB2_oBackbone2_022fe1f3_Tx = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_AntPi_X, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntPi_X_oDebug22_SCIM_BB2_oBackbone2_b567e3e2_Tx = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_AntPi_Y, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntPi_Y_oDebug22_SCIM_BB2_oBackbone2_890700ea_Tx = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ArrayByteSize8, RTE_VAR_INIT) Rte_TP_st_DstBlock_P_challenge = {
  0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ArrayByteSize16, RTE_VAR_INIT) Rte_TP_st_DstBlock_P_encryption = {
  0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ArrayByteSize3, RTE_VAR_INIT) Rte_TP_st_DstBlock_P_security_key_number = {
  0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ArrayByteSize3, RTE_VAR_INIT) Rte_TP_st_DstBlock_P_vehicle_serial = {
  0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_TP_st_DstBlock_P_write_fob_number = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_AntCtrl_stat, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntCtrl_stat_oDebug15_SCIM_BB2_oBackbone2_2877d1d6_Tx = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_GainP1_stat, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP1_stat_oDebug15_SCIM_BB2_oBackbone2_7d778ea0_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_GainP2_stat, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP2_stat_oDebug15_SCIM_BB2_oBackbone2_f6a4b0b9_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_GainP3_stat, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP3_stat_oDebug15_SCIM_BB2_oBackbone2_393aa771_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_GainP4_stat, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP4_stat_oDebug15_SCIM_BB2_oBackbone2_3a73caca_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_Logic_stat, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_Logic_stat_oDebug15_SCIM_BB2_oBackbone2_19626c75_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_P1_MaxRSSI, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_P1_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_6c5ea403_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_P2_MaxRSSI, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_P2_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_21b6a464_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_P3_MaxRSSI, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_P3_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_ac3e5986_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_P4_MaxRSSI, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_P4_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_ba66a4aa_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Debug_PVT_PEPS_VDSI_stat, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_VDSI_stat_oDebug15_SCIM_BB2_oBackbone2_cba0b8aa_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ABS_Indication, RTE_VAR_INIT) Rte_ABS_Indication_oMastertoTCP_oLIN02_826b948e_Tx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ATC_Indication, RTE_VAR_INIT) Rte_ATC_Indication_oMastertoTCP_oLIN02_f0d69bff_Tx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(BswM_BswMRteMDG_LIN1Schedule, RTE_VAR_INIT) Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN1Schedule_BswM_MDGP_BswMRteMDG_LIN1Schedule_requestedMode = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(BswM_BswMRteMDG_LIN2Schedule, RTE_VAR_INIT) Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN2Schedule_BswM_MDGP_BswMRteMDG_LIN2Schedule_requestedMode = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(BswM_BswMRteMDG_LIN3Schedule, RTE_VAR_INIT) Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN3Schedule_BswM_MDGP_BswMRteMDG_LIN3Schedule_requestedMode = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(BswM_BswMRteMDG_LIN4Schedule, RTE_VAR_INIT) Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN4Schedule_BswM_MDGP_BswMRteMDG_LIN4Schedule_requestedMode = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(BswM_BswMRteMDG_LIN5Schedule, RTE_VAR_INIT) Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN5Schedule_BswM_MDGP_BswMRteMDG_LIN5Schedule_requestedMode = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DoorLock_stat, RTE_VAR_INIT) Rte_DoorLock_stat_ISig_13_oCIOMtoSlaves2_FR1_L1_oLIN00_66228e20_Tx = 15U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ESC_Indication, RTE_VAR_INIT) Rte_ESC_Indication_oMastertoTCP_oLIN02_e2022dfe_Tx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1IndicationCmdL2, RTE_VAR_INIT) Rte_FSP1IndicationCmdL2_oFSP_1_2_Req_L2_oLIN01_635660cd_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1IndicationCmdL3, RTE_VAR_INIT) Rte_FSP1IndicationCmdL3_oFSP_1_2_Req_L3_oLIN02_b7d054ce_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1IndicationCmdL4, RTE_VAR_INIT) Rte_FSP1IndicationCmdL4_oFSP_1_2_Req_L4_oLIN03_fb0a5a36_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP1IndicationCmdL5, RTE_VAR_INIT) Rte_FSP1IndicationCmdL5_oFSP_1_2_Req_L5_oLIN04_28e1aa2c_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP2IndicationCmdL1, RTE_VAR_INIT) Rte_FSP2IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_115be26b_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP2IndicationCmdL2, RTE_VAR_INIT) Rte_FSP2IndicationCmdL2_oFSP_1_2_Req_L2_oLIN01_b0cd7c36_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP2IndicationCmdL3, RTE_VAR_INIT) Rte_FSP2IndicationCmdL3_oFSP_1_2_Req_L3_oLIN02_644b4835_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP3IndicationCmdL2, RTE_VAR_INIT) Rte_FSP3IndicationCmdL2_oFSP_3_4_Req_L2_oLIN01_088233aa_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FSP4IndicationCmdL2, RTE_VAR_INIT) Rte_FSP4IndicationCmdL2_oFSP_3_4_Req_L2_oLIN01_3a4c07b4_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_ACCOrCCIndication, RTE_VAR_INIT) Rte_LIN_ACCOrCCIndication_oCIOMtoSlaves2_L4_oLIN03_9dcb84e7_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_ASLIndication, RTE_VAR_INIT) Rte_LIN_ASLIndication_oCIOMtoSlaves2_L4_oLIN03_70f56c35_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_Adjust_DeviceIndication, RTE_VAR_INIT) Rte_LIN_Adjust_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_2e36f0fb_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_AlmClkCurAlarm_stat_sg, RTE_VAR_INIT) Rte_SG_LIN_AlmClkCurAlarm_stat_sg_oCIOMtoSlaves2_FR2_L1_oLIN00_ff5b96ab_Tx = {
  0U, 31U, 7U, 63U, 127U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_AudioSystemStatus, RTE_VAR_INIT) Rte_LIN_AudioSystemStatus_oCIOMtoSlaves2_FR1_L1_oLIN00_13393810_Tx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_AudioVolumeIndicationCmd, RTE_VAR_INIT) Rte_LIN_AudioVolumeIndicationCmd_oCIOMtoSlaves2_FR1_L1_oLIN00_e9108a0f_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_BTStatus, RTE_VAR_INIT) Rte_LIN_BTStatus_oCIOMtoSlaves2_FR2_L1_oLIN00_71f34a0b_Tx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_DaytimeRunningLight_Indica, RTE_VAR_INIT) Rte_LIN_DaytimeRunningLight_Indica_oCIOMtoSlaves1_L4_oLIN03_f7c9701b_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_DifflockOnOff_Indication, RTE_VAR_INIT) Rte_LIN_DifflockOnOff_Indication_oCIOMtoSlaves2_L4_oLIN03_eaa1e19e_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_DoorAutoFuncInd_cmd, RTE_VAR_INIT) Rte_LIN_DoorAutoFuncInd_cmd_oCIOMtoSlaves1_L1_oLIN00_52fafc3c_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_Down_DeviceIndication, RTE_VAR_INIT) Rte_LIN_Down_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_c9ef6b77_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_DrivingLightPlus_Indicatio, RTE_VAR_INIT) Rte_LIN_DrivingLightPlus_Indicatio_oCIOMtoSlaves1_L4_oLIN03_e75acc52_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_DrivingLight_Indication, RTE_VAR_INIT) Rte_LIN_DrivingLight_Indication_oCIOMtoSlaves1_L4_oLIN03_e3d131c9_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_EscButtonMuddySiteDeviceIn, RTE_VAR_INIT) Rte_LIN_EscButtonMuddySiteDeviceIn_oCIOMtoSlaves2_L4_oLIN03_b87af696_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_FCW_DeviceIndication, RTE_VAR_INIT) Rte_LIN_FCW_DeviceIndication_oCIOMtoSlaves2_L4_oLIN03_246586c3_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_FrontFog_Indication, RTE_VAR_INIT) Rte_LIN_FrontFog_Indication_oCIOMtoSlaves1_L4_oLIN03_890ecb12_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_IntLghtLvlIndScaled_cmd, RTE_VAR_INIT) Rte_LIN_IntLghtLvlIndScaled_cmd_oCIOMtoSlaves2_FR1_L1_oLIN00_9d28ed83_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_IntLghtModeInd_cmd_sg, RTE_VAR_INIT) Rte_SG_LIN_IntLghtModeInd_cmd_sg_oCIOMtoSlaves2_FR1_L1_oLIN00_daaab64c_Tx = {
  FALSE, 7U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_IntLghtOffModeInd_cmd, RTE_VAR_INIT) Rte_LIN_IntLghtOffModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_00d309d6_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_IntLightMaxModeInd_cmd, RTE_VAR_INIT) Rte_LIN_IntLightMaxModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_523a53e3_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_IntLightNightModeInd_cmd, RTE_VAR_INIT) Rte_LIN_IntLightNightModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_8c1fb2a2_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_IntLightRestingModeInd_cmd, RTE_VAR_INIT) Rte_LIN_IntLightRestingModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_df4802bd_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_LKS_DeviceIndication, RTE_VAR_INIT) Rte_LIN_LKS_DeviceIndication_oCIOMtoSlaves2_L4_oLIN03_e9d09941_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_M1_DeviceIndication, RTE_VAR_INIT) Rte_LIN_M1_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_d4ecc99f_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_M2_DeviceIndication, RTE_VAR_INIT) Rte_LIN_M2_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_ecd742ec_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_M3_DeviceIndication, RTE_VAR_INIT) Rte_LIN_M3_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_4deec602_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_Offroad_Indication, RTE_VAR_INIT) Rte_LIN_Offroad_Indication_oCIOMtoSlaves2_L4_oLIN03_f70e4ef2_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_ParkingLight_Indication, RTE_VAR_INIT) Rte_LIN_ParkingLight_Indication_oCIOMtoSlaves1_L4_oLIN03_de9a5a8c_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_PhoneButtonIndication_cmd, RTE_VAR_INIT) Rte_LIN_PhoneButtonIndication_cmd_oCIOMtoSlaves2_FR1_L1_oLIN00_a04041c2_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_RearFog_Indication, RTE_VAR_INIT) Rte_LIN_RearFog_Indication_oCIOMtoSlaves1_L4_oLIN03_9af57169_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_RearWorkProjector_Indicati, RTE_VAR_INIT) Rte_LIN_RearWorkProjector_Indicati_oCIOMtoSlaves2_L4_oLIN03_d4496a61_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_ShortPulseMaxLength, RTE_VAR_INIT) Rte_LIN_ShortPulseMaxLength_oCIOMtoSlaves_L5_oLIN04_83fa06d3_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LIN_Up_DeviceIndication, RTE_VAR_INIT) Rte_LIN_Up_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_c6192fe4_Tx = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(TCS_Indication, RTE_VAR_INIT) Rte_TCS_Indication_oMastertoTCP_oLIN02_27a40830_Tx = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * TxUpdate Flags for each external Tx Signal over Rte_ComSendSignalProxy without IOCs
 *********************************************************************************************************************/
#define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_OsApplication_Trusted_Core0_TxUpdateFlagsType, RTE_VAR_ZERO_INIT) Rte_OsApplication_Trusted_Core0_TxUpdateFlags = {
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
  0,
  0
}; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define Rte_OsApplication_Trusted_Core0_TxUpdateFlagsInit() (Rte_MemClr(&Rte_OsApplication_Trusted_Core0_TxUpdateFlags, sizeof(Rte_OsApplication_Trusted_Core0_TxUpdateFlagsType)))

/**********************************************************************************************************************
 * Defines for Rte_ComSendSignalProxy
 *********************************************************************************************************************/
#define RTE_COM_SENDSIGNALPROXY_NOCHANGE       (0U)
#define RTE_COM_SENDSIGNALPROXY_SEND           (1U)
#define RTE_COM_SENDSIGNALPROXY_INVALIDATE     (2U)



/**********************************************************************************************************************
 * Buffer for inter-runnable variables
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint8, RTE_VAR_INIT) Rte_Irv_StartApplicationTrusted_IrvValue = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * RTE internal IOC replacements
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint8, RTE_VAR_NOINIT) Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_Queue[1U];

#define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint8, RTE_VAR_ZERO_INIT) Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_tail = 0;

#define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint8, RTE_VAR_ZERO_INIT) Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_head = 0;

#define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_OsApplication_Trusted_Core0_IocOverflowFlagsType, RTE_VAR_ZERO_INIT) Rte_OsApplication_Trusted_Core0_IocOverflowFlags = {
  0,
  0,
};

#define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_ZERO_INIT_UNSPECIFIED
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

#define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_OsApplication_Trusted_Core0_ClientIdleFlagsType, RTE_VAR_INIT) Rte_OsApplication_Trusted_Core0_ClientIdleFlags = {
   1
};

#define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) Rte_MemClr(P2VAR(void, AUTOMATIC, RTE_VAR_NOINIT) ptr, uint32_least num); /* PRQA S 0850, 3447, 3408 */ /* MD_MSR_19.8, MD_Rte_3447, MD_Rte_3408 */
FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 0850, 1505, 3447, 3408 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3447, MD_Rte_3408 */
FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 0850, 1505, 3447, 3408 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3447, MD_Rte_3408 */

#define RTE_STOP_SEC_CODE
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


FUNC(void, RTE_CODE) Rte_InitMemory_OsApplication_Trusted_Core0(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  /* reset Tx Update Flags */
  Rte_OsApplication_Trusted_Core0_TxUpdateFlagsInit();

  /* set default values for internal data */
  Rte_CDD_LFIC_b_DST_ResponseNG_P_SR = 0U;
  Rte_CDD_LFIC_b_DST_RxCompleteFlag_P_SR = 0U;
  Rte_CDD_RFIC_RficSysModeConfirm_P_SR_RficSysModeConfirm = 0U;
  Rte_StartApplicationTrusted_PpTrustedDataVerification_DeValue = 0U;
  Rte_MemCpy(Rte_TP_st_DstBlock_P_challenge, Rte_C_ArrayByteSize8_0, sizeof(ArrayByteSize8));
  Rte_MemCpy32(Rte_TP_st_DstBlock_P_encryption, Rte_C_ArrayByteSize16_0, sizeof(ArrayByteSize16));
  Rte_MemCpy(Rte_TP_st_DstBlock_P_security_key_number, Rte_C_ArrayByteSize3_0, sizeof(ArrayByteSize3));
  Rte_MemCpy(Rte_TP_st_DstBlock_P_vehicle_serial, Rte_C_ArrayByteSize3_0, sizeof(ArrayByteSize3));
  Rte_TP_st_DstBlock_P_write_fob_number = 0U;
  Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN1Schedule_BswM_MDGP_BswMRteMDG_LIN1Schedule_requestedMode = 0U;
  Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN2Schedule_BswM_MDGP_BswMRteMDG_LIN2Schedule_requestedMode = 0U;
  Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN3Schedule_BswM_MDGP_BswMRteMDG_LIN3Schedule_requestedMode = 0U;
  Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN4Schedule_BswM_MDGP_BswMRteMDG_LIN4Schedule_requestedMode = 0U;
  Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN5Schedule_BswM_MDGP_BswMRteMDG_LIN5Schedule_requestedMode = 0U;
  Rte_ABSInhibitRqstDenied_oCIOM_BB2_25P_oBackbone2_b939a8e2_Tx = 3U;
  Rte_Debug_PVT_SCIM_RD_12VLivingVolt_oDebug2_SCIM_BB2_oBackbone2_74d816f4_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_12VParkedVolt_oDebug2_SCIM_BB2_oBackbone2_44f2f3c2_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI01_oDebug7_SCIM_BB2_oBackbone2_d2059597_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI02_oDebug7_SCIM_BB2_oBackbone2_770dfefb_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI03_oDebug7_SCIM_BB2_oBackbone2_140a27df_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI04_oDebug7_SCIM_BB2_oBackbone2_e66c2e62_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI05_oDebug7_SCIM_BB2_oBackbone2_856bf746_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI06_oDebug7_SCIM_BB2_oBackbone2_20639c2a_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI07_oDebug8_SCIM_BB2_oBackbone2_0f71ca20_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI08_oDebug8_SCIM_BB2_oBackbone2_53cb063f_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI09_oDebug8_SCIM_BB2_oBackbone2_30ccdf1b_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI10_oDebug8_SCIM_BB2_oBackbone2_c1772095_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI11_oDebug8_SCIM_BB2_oBackbone2_a270f9b1_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI12_oDebug8_SCIM_BB2_oBackbone2_077892dd_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI13_oDebug28_SCIM_BB2_oBackbone2_f1e56b1c_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI14_oDebug28_SCIM_BB2_oBackbone2_44c7c224_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI15_oDebug28_SCIM_BB2_oBackbone2_78a7212c_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_ADI16_oDebug28_SCIM_BB2_oBackbone2_3c060434_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_DAI1_oDebug9_SCIM_BB2_oBackbone2_179e2272_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_DAI2_oDebug9_SCIM_BB2_oBackbone2_b296491e_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_12VDCDCFault_oDebug2_SCIM_BB2_oBackbone2_a76feb3e_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_12VDCDCVolt_oDebug2_SCIM_BB2_oBackbone2_cecf5c09_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_VBAT_oDebug2_SCIM_BB2_oBackbone2_d3887400_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_BHS1_Fault_oDebug3_SCIM_BB2_oBackbone2_66b07d64_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_BHS1_Volt_oDebug3_SCIM_BB2_oBackbone2_8af915ef_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_BHS2_Fault_oDebug3_SCIM_BB2_oBackbone2_ed63437d_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_BHS2_Volt_oDebug3_SCIM_BB2_oBackbone2_e77fe6b5_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_BHS3_Fault_oDebug3_SCIM_BB2_oBackbone2_22fd54b5_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_BHS3_Volt_oDebug3_SCIM_BB2_oBackbone2_c3fdb783_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_BHS4_Fault_oDebug3_SCIM_BB2_oBackbone2_21b4390e_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_BHS4_Volt_oDebug3_SCIM_BB2_oBackbone2_3c720001_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WHS1_Duty_oDebug10_SCIM_BB2_oBackbone2_e4964bec_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WHS1_Fault_oDebug10_SCIM_BB2_oBackbone2_7f82e8ff_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WHS1_Freq_oDebug10_SCIM_BB2_oBackbone2_e909035f_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WHS1_Volt_oDebug10_SCIM_BB2_oBackbone2_fae484a1_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WHS2_Duty_oDebug10_SCIM_BB2_oBackbone2_6f4575f5_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WHS2_Fault_oDebug10_SCIM_BB2_oBackbone2_1b629301_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WHS2_Freq_oDebug10_SCIM_BB2_oBackbone2_62da3d46_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WHS2_Volt_oDebug10_SCIM_BB2_oBackbone2_7137bab8_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WLS1_Duty_oDebug11_SCIM_BB2_oBackbone2_151f9ecd_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WLS1_Fault_oDebug11_SCIM_BB2_oBackbone2_bbe8962a_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WLS1_Freq_oDebug11_SCIM_BB2_oBackbone2_1880d67e_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WLS1_Volt_oDebug11_SCIM_BB2_oBackbone2_0b6d5180_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WLS2_Duty_oDebug11_SCIM_BB2_oBackbone2_9ecca0d4_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WLS2_Fault_oDebug11_SCIM_BB2_oBackbone2_df08edd4_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WLS2_Freq_oDebug11_SCIM_BB2_oBackbone2_9353e867_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WLS2_Volt_oDebug11_SCIM_BB2_oBackbone2_80be6f99_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WLS3_Duty_oDebug9_SCIM_BB2_oBackbone2_c539df90_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WLS3_Fault_oDebug9_SCIM_BB2_oBackbone2_ee12f9c5_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WLS3_Freq_oDebug9_SCIM_BB2_oBackbone2_371b521a_Tx = 0U;
  Rte_Debug_PVT_SCIM_RD_WLS3_Volt_oDebug9_SCIM_BB2_oBackbone2_b604fa02_Tx = 0U;
  Rte_Debug_PVT_PEPS_AntP1_X_oDebug22_SCIM_BB2_oBackbone2_3e4f02fb_Tx = 0;
  Rte_Debug_PVT_PEPS_AntP1_Y_oDebug22_SCIM_BB2_oBackbone2_022fe1f3_Tx = 0;
  Rte_Debug_PVT_PEPS_AntPi_X_oDebug22_SCIM_BB2_oBackbone2_b567e3e2_Tx = 0;
  Rte_Debug_PVT_PEPS_AntPi_Y_oDebug22_SCIM_BB2_oBackbone2_890700ea_Tx = 0;
  Rte_Debug_PVT_PEPS_AntCtrl_stat_oDebug15_SCIM_BB2_oBackbone2_2877d1d6_Tx = 0;
  Rte_Debug_PVT_PEPS_GainP1_stat_oDebug15_SCIM_BB2_oBackbone2_7d778ea0_Tx = 0U;
  Rte_Debug_PVT_PEPS_GainP2_stat_oDebug15_SCIM_BB2_oBackbone2_f6a4b0b9_Tx = 0U;
  Rte_Debug_PVT_PEPS_GainP3_stat_oDebug15_SCIM_BB2_oBackbone2_393aa771_Tx = 0U;
  Rte_Debug_PVT_PEPS_GainP4_stat_oDebug15_SCIM_BB2_oBackbone2_3a73caca_Tx = 0U;
  Rte_Debug_PVT_PEPS_Logic_stat_oDebug15_SCIM_BB2_oBackbone2_19626c75_Tx = 0U;
  Rte_Debug_PVT_PEPS_P1_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_6c5ea403_Tx = 0U;
  Rte_Debug_PVT_PEPS_P2_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_21b6a464_Tx = 0U;
  Rte_Debug_PVT_PEPS_P3_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_ac3e5986_Tx = 0U;
  Rte_Debug_PVT_PEPS_P4_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_ba66a4aa_Tx = 0U;
  Rte_Debug_PVT_PEPS_VDSI_stat_oDebug15_SCIM_BB2_oBackbone2_cba0b8aa_Tx = 0U;
  Rte_ABS_Indication_oMastertoTCP_oLIN02_826b948e_Tx = 3U;
  Rte_ATC_Indication_oMastertoTCP_oLIN02_f0d69bff_Tx = 3U;
  Rte_DoorLock_stat_ISig_13_oCIOMtoSlaves2_FR1_L1_oLIN00_66228e20_Tx = 15U;
  Rte_ESC_Indication_oMastertoTCP_oLIN02_e2022dfe_Tx = 3U;
  Rte_FSP1IndicationCmdL2_oFSP_1_2_Req_L2_oLIN01_635660cd_Tx = 0U;
  Rte_FSP1IndicationCmdL3_oFSP_1_2_Req_L3_oLIN02_b7d054ce_Tx = 0U;
  Rte_FSP1IndicationCmdL4_oFSP_1_2_Req_L4_oLIN03_fb0a5a36_Tx = 0U;
  Rte_FSP1IndicationCmdL5_oFSP_1_2_Req_L5_oLIN04_28e1aa2c_Tx = 0U;
  Rte_FSP2IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_115be26b_Tx = 0U;
  Rte_FSP2IndicationCmdL2_oFSP_1_2_Req_L2_oLIN01_b0cd7c36_Tx = 0U;
  Rte_FSP2IndicationCmdL3_oFSP_1_2_Req_L3_oLIN02_644b4835_Tx = 0U;
  Rte_FSP3IndicationCmdL2_oFSP_3_4_Req_L2_oLIN01_088233aa_Tx = 0U;
  Rte_FSP4IndicationCmdL2_oFSP_3_4_Req_L2_oLIN01_3a4c07b4_Tx = 0U;
  Rte_LIN_ACCOrCCIndication_oCIOMtoSlaves2_L4_oLIN03_9dcb84e7_Tx = 0U;
  Rte_LIN_ASLIndication_oCIOMtoSlaves2_L4_oLIN03_70f56c35_Tx = 0U;
  Rte_LIN_Adjust_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_2e36f0fb_Tx = 0U;
  Rte_SG_LIN_AlmClkCurAlarm_stat_sg_oCIOMtoSlaves2_FR2_L1_oLIN00_ff5b96ab_Tx = Rte_C_LIN_AlmClkCurAlarm_stat_sg_0;
  Rte_LIN_AudioSystemStatus_oCIOMtoSlaves2_FR1_L1_oLIN00_13393810_Tx = 3U;
  Rte_LIN_AudioVolumeIndicationCmd_oCIOMtoSlaves2_FR1_L1_oLIN00_e9108a0f_Tx = 0U;
  Rte_LIN_BTStatus_oCIOMtoSlaves2_FR2_L1_oLIN00_71f34a0b_Tx = 3U;
  Rte_LIN_DaytimeRunningLight_Indica_oCIOMtoSlaves1_L4_oLIN03_f7c9701b_Tx = 0U;
  Rte_LIN_DifflockOnOff_Indication_oCIOMtoSlaves2_L4_oLIN03_eaa1e19e_Tx = 0U;
  Rte_LIN_DoorAutoFuncInd_cmd_oCIOMtoSlaves1_L1_oLIN00_52fafc3c_Tx = 0U;
  Rte_LIN_Down_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_c9ef6b77_Tx = 0U;
  Rte_LIN_DrivingLightPlus_Indicatio_oCIOMtoSlaves1_L4_oLIN03_e75acc52_Tx = 0U;
  Rte_LIN_DrivingLight_Indication_oCIOMtoSlaves1_L4_oLIN03_e3d131c9_Tx = 0U;
  Rte_LIN_EscButtonMuddySiteDeviceIn_oCIOMtoSlaves2_L4_oLIN03_b87af696_Tx = 0U;
  Rte_LIN_FCW_DeviceIndication_oCIOMtoSlaves2_L4_oLIN03_246586c3_Tx = 0U;
  Rte_LIN_FrontFog_Indication_oCIOMtoSlaves1_L4_oLIN03_890ecb12_Tx = 0U;
  Rte_LIN_IntLghtLvlIndScaled_cmd_oCIOMtoSlaves2_FR1_L1_oLIN00_9d28ed83_Tx = 0U;
  Rte_SG_LIN_IntLghtModeInd_cmd_sg_oCIOMtoSlaves2_FR1_L1_oLIN00_daaab64c_Tx = Rte_C_LIN_IntLghtModeInd_cmd_sg_0;
  Rte_LIN_IntLghtOffModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_00d309d6_Tx = 0U;
  Rte_LIN_IntLightMaxModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_523a53e3_Tx = 0U;
  Rte_LIN_IntLightNightModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_8c1fb2a2_Tx = 0U;
  Rte_LIN_IntLightRestingModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_df4802bd_Tx = 0U;
  Rte_LIN_LKS_DeviceIndication_oCIOMtoSlaves2_L4_oLIN03_e9d09941_Tx = 0U;
  Rte_LIN_M1_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_d4ecc99f_Tx = 0U;
  Rte_LIN_M2_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_ecd742ec_Tx = 0U;
  Rte_LIN_M3_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_4deec602_Tx = 0U;
  Rte_LIN_Offroad_Indication_oCIOMtoSlaves2_L4_oLIN03_f70e4ef2_Tx = 0U;
  Rte_LIN_ParkingLight_Indication_oCIOMtoSlaves1_L4_oLIN03_de9a5a8c_Tx = 0U;
  Rte_LIN_PhoneButtonIndication_cmd_oCIOMtoSlaves2_FR1_L1_oLIN00_a04041c2_Tx = 0U;
  Rte_LIN_RearFog_Indication_oCIOMtoSlaves1_L4_oLIN03_9af57169_Tx = 0U;
  Rte_LIN_RearWorkProjector_Indicati_oCIOMtoSlaves2_L4_oLIN03_d4496a61_Tx = 0U;
  Rte_LIN_ShortPulseMaxLength_oCIOMtoSlaves_L5_oLIN04_83fa06d3_Tx = 0U;
  Rte_LIN_Up_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_c6192fe4_Tx = 0U;
  Rte_TCS_Indication_oMastertoTCP_oLIN02_27a40830_Tx = 3U;

  /* initialize inter-runnable variables */
  Rte_Irv_StartApplicationTrusted_IrvValue = 0U;

  Rte_OsApplication_Trusted_Core0_ClientIdleFlags.Rte_Idle_CDD_RFIC_RficNRESDio_R_Read = 1;

  Rte_MemClr(&Rte_CS_ClientQueue_CDD_RFIC_RficNRESDio_R_Read, sizeof(Rte_CS_ClientQueue_CDD_RFIC_RficNRESDio_R_Read));
  Rte_MemClr(&Rte_CS_ClientQueue2_CDD_RFIC_RficNRESDio_R_Read, sizeof(Rte_CS_ClientQueue2_CDD_RFIC_RficNRESDio_R_Read));

  Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_tail = 0;
  Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_head = 0;
  Rte_MemClr(&Rte_OsApplication_Trusted_Core0_IocOverflowFlags, sizeof(Rte_OsApplication_Trusted_Core0_IocOverflowFlags));
}


/**********************************************************************************************************************
 * Internal/External Tx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt(Debug_PVT_SCIM_RD_12VLivingVolt_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_12VLivingVolt_oDebug2_SCIM_BB2_oBackbone2_74d816f4_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt(Debug_PVT_SCIM_RD_12VParkedVolt_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_12VParkedVolt_oDebug2_SCIM_BB2_oBackbone2_44f2f3c2_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01(Debug_PVT_SCIM_RD_ADI01_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI01_oDebug7_SCIM_BB2_oBackbone2_d2059597_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02(Debug_PVT_SCIM_RD_ADI02_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI02_oDebug7_SCIM_BB2_oBackbone2_770dfefb_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03(Debug_PVT_SCIM_RD_ADI03_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI03_oDebug7_SCIM_BB2_oBackbone2_140a27df_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04(Debug_PVT_SCIM_RD_ADI04_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI04_oDebug7_SCIM_BB2_oBackbone2_e66c2e62_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05(Debug_PVT_SCIM_RD_ADI05_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI05_oDebug7_SCIM_BB2_oBackbone2_856bf746_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06(Debug_PVT_SCIM_RD_ADI06_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI06_oDebug7_SCIM_BB2_oBackbone2_20639c2a_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07(Debug_PVT_SCIM_RD_ADI07_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI07_oDebug8_SCIM_BB2_oBackbone2_0f71ca20_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08(Debug_PVT_SCIM_RD_ADI08_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI08_oDebug8_SCIM_BB2_oBackbone2_53cb063f_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09(Debug_PVT_SCIM_RD_ADI09_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI09_oDebug8_SCIM_BB2_oBackbone2_30ccdf1b_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10(Debug_PVT_SCIM_RD_ADI10_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI10_oDebug8_SCIM_BB2_oBackbone2_c1772095_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11(Debug_PVT_SCIM_RD_ADI11_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI11_oDebug8_SCIM_BB2_oBackbone2_a270f9b1_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12(Debug_PVT_SCIM_RD_ADI12_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI12_oDebug8_SCIM_BB2_oBackbone2_077892dd_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13(Debug_PVT_SCIM_RD_ADI13_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI13_oDebug28_SCIM_BB2_oBackbone2_f1e56b1c_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14(Debug_PVT_SCIM_RD_ADI14_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI14_oDebug28_SCIM_BB2_oBackbone2_44c7c224_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15(Debug_PVT_SCIM_RD_ADI15_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI15_oDebug28_SCIM_BB2_oBackbone2_78a7212c_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16(Debug_PVT_SCIM_RD_ADI16_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_ADI16_oDebug28_SCIM_BB2_oBackbone2_3c060434_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1(Debug_PVT_SCIM_RD_DAI1_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_DAI1_oDebug9_SCIM_BB2_oBackbone2_179e2272_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2(Debug_PVT_SCIM_RD_DAI2_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_DAI2_oDebug9_SCIM_BB2_oBackbone2_b296491e_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault(Debug_PVT_SCIM_RD_12VDCDCFault data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_12VDCDCFault_oDebug2_SCIM_BB2_oBackbone2_a76feb3e_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt(Debug_PVT_SCIM_RD_12VDCDCVolt data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_12VDCDCVolt_oDebug2_SCIM_BB2_oBackbone2_cecf5c09_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT(Debug_PVT_SCIM_RD_VBAT_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_VBAT_oDebug2_SCIM_BB2_oBackbone2_d3887400_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault(Debug_PVT_SCIM_RD_BHS1_Fault_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_BHS1_Fault_oDebug3_SCIM_BB2_oBackbone2_66b07d64_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt(Debug_PVT_SCIM_RD_BHS1_Volt_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_BHS1_Volt_oDebug3_SCIM_BB2_oBackbone2_8af915ef_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault(Debug_PVT_SCIM_RD_BHS2_Fault_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_BHS2_Fault_oDebug3_SCIM_BB2_oBackbone2_ed63437d_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt(Debug_PVT_SCIM_RD_BHS2_Volt_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_BHS2_Volt_oDebug3_SCIM_BB2_oBackbone2_e77fe6b5_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault(Debug_PVT_SCIM_RD_BHS3_Fault_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_BHS3_Fault_oDebug3_SCIM_BB2_oBackbone2_22fd54b5_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt(Debug_PVT_SCIM_RD_BHS3_Volt_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_BHS3_Volt_oDebug3_SCIM_BB2_oBackbone2_c3fdb783_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault(Debug_PVT_SCIM_RD_BHS4_Fault_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_BHS4_Fault_oDebug3_SCIM_BB2_oBackbone2_21b4390e_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt(Debug_PVT_SCIM_RD_BHS4_Volt_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_BHS4_Volt_oDebug3_SCIM_BB2_oBackbone2_3c720001_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty(Debug_PVT_SCIM_RD_WHS1_Duty_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WHS1_Duty_oDebug10_SCIM_BB2_oBackbone2_e4964bec_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault(Debug_PVT_SCIM_RD_WHS1_Fault_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WHS1_Fault_oDebug10_SCIM_BB2_oBackbone2_7f82e8ff_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq(Debug_PVT_SCIM_RD_WHS1_Freq_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WHS1_Freq_oDebug10_SCIM_BB2_oBackbone2_e909035f_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt(Debug_PVT_SCIM_RD_WHS1_Volt_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WHS1_Volt_oDebug10_SCIM_BB2_oBackbone2_fae484a1_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty(Debug_PVT_SCIM_RD_WHS2_Duty_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WHS2_Duty_oDebug10_SCIM_BB2_oBackbone2_6f4575f5_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault(Debug_PVT_SCIM_RD_WHS2_Fault_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WHS2_Fault_oDebug10_SCIM_BB2_oBackbone2_1b629301_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq(Debug_PVT_SCIM_RD_WHS2_Freq_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WHS2_Freq_oDebug10_SCIM_BB2_oBackbone2_62da3d46_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt(Debug_PVT_SCIM_RD_WHS2_Volt_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WHS2_Volt_oDebug10_SCIM_BB2_oBackbone2_7137bab8_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty(Debug_PVT_SCIM_RD_WLS1_Duty_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WLS1_Duty_oDebug11_SCIM_BB2_oBackbone2_151f9ecd_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault(Debug_PVT_SCIM_RD_WLS1_Fault_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WLS1_Fault_oDebug11_SCIM_BB2_oBackbone2_bbe8962a_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq(Debug_PVT_SCIM_RD_WLS1_Freq_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WLS1_Freq_oDebug11_SCIM_BB2_oBackbone2_1880d67e_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt(Debug_PVT_SCIM_RD_WLS1_Volt_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WLS1_Volt_oDebug11_SCIM_BB2_oBackbone2_0b6d5180_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty(Debug_PVT_SCIM_RD_WLS2_Duty_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WLS2_Duty_oDebug11_SCIM_BB2_oBackbone2_9ecca0d4_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault(Debug_PVT_SCIM_RD_WLS2_Fault_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WLS2_Fault_oDebug11_SCIM_BB2_oBackbone2_df08edd4_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq(Debug_PVT_SCIM_RD_WLS2_Freq_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WLS2_Freq_oDebug11_SCIM_BB2_oBackbone2_9353e867_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt(Debug_PVT_SCIM_RD_WLS2_Volt_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WLS2_Volt_oDebug11_SCIM_BB2_oBackbone2_80be6f99_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty(Debug_PVT_SCIM_RD_WLS3_Duty_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WLS3_Duty_oDebug9_SCIM_BB2_oBackbone2_c539df90_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault(Debug_PVT_SCIM_RD_WLS3_Fault_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WLS3_Fault_oDebug9_SCIM_BB2_oBackbone2_ee12f9c5_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq(Debug_PVT_SCIM_RD_WLS3_Freq_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WLS3_Freq_oDebug9_SCIM_BB2_oBackbone2_371b521a_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt(Debug_PVT_SCIM_RD_WLS3_Volt_1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_SCIM_RD_WLS3_Volt_oDebug9_SCIM_BB2_oBackbone2_b604fa02_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StartApplicationTrusted_PpTrustedDataVerification_DeValue(uint8 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_StartApplicationTrusted_PpTrustedDataVerification_DeValue = *(&data);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X(Debug_PVT_PEPS_AntP1_X data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_PEPS_AntP1_X_oDebug22_SCIM_BB2_oBackbone2_3e4f02fb_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TP_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y(Debug_PVT_PEPS_AntP1_Y data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_PEPS_AntP1_Y_oDebug22_SCIM_BB2_oBackbone2_022fe1f3_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TP_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X(Debug_PVT_PEPS_AntPi_X data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_PEPS_AntPi_X_oDebug22_SCIM_BB2_oBackbone2_b567e3e2_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TP_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y(Debug_PVT_PEPS_AntPi_Y data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_PEPS_AntPi_Y_oDebug22_SCIM_BB2_oBackbone2_890700ea_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TP_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_st_DstBlock_P_challenge(P2CONST(ArrayByteSize8, AUTOMATIC, RTE_TP_APPL_DATA) data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_MemCpy(Rte_TP_st_DstBlock_P_challenge, *(data), sizeof(ArrayByteSize8));

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_st_DstBlock_P_encryption(P2CONST(ArrayByteSize16, AUTOMATIC, RTE_TP_APPL_DATA) data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_MemCpy32(Rte_TP_st_DstBlock_P_encryption, *(data), sizeof(ArrayByteSize16));

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_st_DstBlock_P_security_key_number(P2CONST(ArrayByteSize3, AUTOMATIC, RTE_TP_APPL_DATA) data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_MemCpy(Rte_TP_st_DstBlock_P_security_key_number, *(data), sizeof(ArrayByteSize3));

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_st_DstBlock_P_vehicle_serial(P2CONST(ArrayByteSize3, AUTOMATIC, RTE_TP_APPL_DATA) data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_MemCpy(Rte_TP_st_DstBlock_P_vehicle_serial, *(data), sizeof(ArrayByteSize3));

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat(Debug_PVT_PEPS_AntCtrl_stat data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_PEPS_AntCtrl_stat_oDebug15_SCIM_BB2_oBackbone2_2877d1d6_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat(Debug_PVT_PEPS_GainP1_stat data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_PEPS_GainP1_stat_oDebug15_SCIM_BB2_oBackbone2_7d778ea0_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat(Debug_PVT_PEPS_GainP2_stat data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_PEPS_GainP2_stat_oDebug15_SCIM_BB2_oBackbone2_f6a4b0b9_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat(Debug_PVT_PEPS_GainP3_stat data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_PEPS_GainP3_stat_oDebug15_SCIM_BB2_oBackbone2_393aa771_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat(Debug_PVT_PEPS_GainP4_stat data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_PEPS_GainP4_stat_oDebug15_SCIM_BB2_oBackbone2_3a73caca_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat(Debug_PVT_PEPS_Logic_stat data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_PEPS_Logic_stat_oDebug15_SCIM_BB2_oBackbone2_19626c75_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI(Debug_PVT_PEPS_P1_MaxRSSI data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_PEPS_P1_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_6c5ea403_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI(Debug_PVT_PEPS_P2_MaxRSSI data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_PEPS_P2_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_21b6a464_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI(Debug_PVT_PEPS_P3_MaxRSSI data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_PEPS_P3_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_ac3e5986_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI(Debug_PVT_PEPS_P4_MaxRSSI data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_PEPS_P4_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_ba66a4aa_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Telegram_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat(Debug_PVT_PEPS_VDSI_stat data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Debug_PVT_PEPS_VDSI_stat_oDebug15_SCIM_BB2_oBackbone2_cba0b8aa_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_ABS_Indication_ABS_Indication(ABS_Indication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_ABS_Indication_oMastertoTCP_oLIN02_826b948e_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_ABS_Indication_ABS_Indication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ABS_Indication_ABS_Indication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ABS_Indication_ABS_Indication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_ATC_Indication_ATC_Indication(ATC_Indication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_ATC_Indication_oMastertoTCP_oLIN02_f0d69bff_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_ATC_Indication_ATC_Indication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ATC_Indication_ATC_Indication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ATC_Indication_ATC_Indication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN1Schedule_BswM_MDGP_BswMRteMDG_LIN1Schedule_requestedMode(BswM_BswMRteMDG_LIN1Schedule data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN1Schedule_BswM_MDGP_BswMRteMDG_LIN1Schedule_requestedMode = *(&data);
  /* scheduled trigger for runnables: BswM_Read_LIN1_ScheduleTableRequestMode */
  (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_BswM_BswM_Read_LIN1_ScheduleTableRequestMode); /* PRQA S 3417 */ /* MD_Rte_Os */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN2Schedule_BswM_MDGP_BswMRteMDG_LIN2Schedule_requestedMode(BswM_BswMRteMDG_LIN2Schedule data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN2Schedule_BswM_MDGP_BswMRteMDG_LIN2Schedule_requestedMode = *(&data);
  /* scheduled trigger for runnables: BswM_Read_LIN2_ScheduleTableRequestMode */
  (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_BswM_BswM_Read_LIN2_ScheduleTableRequestMode); /* PRQA S 3417 */ /* MD_Rte_Os */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN3Schedule_BswM_MDGP_BswMRteMDG_LIN3Schedule_requestedMode(BswM_BswMRteMDG_LIN3Schedule data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN3Schedule_BswM_MDGP_BswMRteMDG_LIN3Schedule_requestedMode = *(&data);
  /* scheduled trigger for runnables: BswM_Read_LIN3_ScheduleTableRequestMode */
  (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_BswM_BswM_Read_LIN3_ScheduleTableRequestMode); /* PRQA S 3417 */ /* MD_Rte_Os */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN4Schedule_BswM_MDGP_BswMRteMDG_LIN4Schedule_requestedMode(BswM_BswMRteMDG_LIN4Schedule data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN4Schedule_BswM_MDGP_BswMRteMDG_LIN4Schedule_requestedMode = *(&data);
  /* scheduled trigger for runnables: BswM_Read_LIN4_ScheduleTableRequestMode */
  (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_BswM_BswM_Read_LIN4_ScheduleTableRequestMode); /* PRQA S 3417 */ /* MD_Rte_Os */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN5Schedule_BswM_MDGP_BswMRteMDG_LIN5Schedule_requestedMode(BswM_BswMRteMDG_LIN5Schedule data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN5Schedule_BswM_MDGP_BswMRteMDG_LIN5Schedule_requestedMode = *(&data);
  /* scheduled trigger for runnables: BswM_Read_LIN5_ScheduleTableRequestMode */
  (void)SetEvent(Default_BSW_Async_Task, Rte_Ev_Run_BswM_BswM_Read_LIN5_ScheduleTableRequestMode); /* PRQA S 3417 */ /* MD_Rte_Os */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_DoorLock_stat_DoorLock_stat(DoorLock_stat data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_DoorLock_stat_ISig_13_oCIOMtoSlaves2_FR1_L1_oLIN00_66228e20_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_DoorLock_stat_DoorLock_stat = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_DoorLock_stat_DoorLock_stat = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_DoorLock_stat_DoorLock_stat;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_ESC_Indication_ESC_Indication(ESC_Indication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_ESC_Indication_oMastertoTCP_oLIN02_e2022dfe_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_ESC_Indication_ESC_Indication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ESC_Indication_ESC_Indication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ESC_Indication_ESC_Indication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP1IndicationCmdL2_FSP1IndicationCmdL2(FSP1IndicationCmdL2 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_FSP1IndicationCmdL2_oFSP_1_2_Req_L2_oLIN01_635660cd_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP1IndicationCmdL2_FSP1IndicationCmdL2 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL2_FSP1IndicationCmdL2 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL2_FSP1IndicationCmdL2;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP1IndicationCmdL3_FSP1IndicationCmdL3(FSP1IndicationCmdL3 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_FSP1IndicationCmdL3_oFSP_1_2_Req_L3_oLIN02_b7d054ce_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP1IndicationCmdL3_FSP1IndicationCmdL3 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL3_FSP1IndicationCmdL3 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL3_FSP1IndicationCmdL3;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP1IndicationCmdL4_FSP1IndicationCmdL4(FSP1IndicationCmdL4 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_FSP1IndicationCmdL4_oFSP_1_2_Req_L4_oLIN03_fb0a5a36_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP1IndicationCmdL4_FSP1IndicationCmdL4 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL4_FSP1IndicationCmdL4 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL4_FSP1IndicationCmdL4;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP1IndicationCmdL5_FSP1IndicationCmdL5(FSP1IndicationCmdL5 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_FSP1IndicationCmdL5_oFSP_1_2_Req_L5_oLIN04_28e1aa2c_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP1IndicationCmdL5_FSP1IndicationCmdL5 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL5_FSP1IndicationCmdL5 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL5_FSP1IndicationCmdL5;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP2IndicationCmdL1_FSP2IndicationCmdL1(FSP2IndicationCmdL1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_FSP2IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_115be26b_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP2IndicationCmdL1_FSP2IndicationCmdL1 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL1_FSP2IndicationCmdL1 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL1_FSP2IndicationCmdL1;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP2IndicationCmdL2_FSP2IndicationCmdL2(FSP2IndicationCmdL2 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_FSP2IndicationCmdL2_oFSP_1_2_Req_L2_oLIN01_b0cd7c36_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP2IndicationCmdL2_FSP2IndicationCmdL2 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL2_FSP2IndicationCmdL2 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL2_FSP2IndicationCmdL2;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP2IndicationCmdL3_FSP2IndicationCmdL3(FSP2IndicationCmdL3 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_FSP2IndicationCmdL3_oFSP_1_2_Req_L3_oLIN02_644b4835_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP2IndicationCmdL3_FSP2IndicationCmdL3 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL3_FSP2IndicationCmdL3 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL3_FSP2IndicationCmdL3;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP3IndicationCmdL2_FSP3IndicationCmdL2(FSP3IndicationCmdL2 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_FSP3IndicationCmdL2_oFSP_3_4_Req_L2_oLIN01_088233aa_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP3IndicationCmdL2_FSP3IndicationCmdL2 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP3IndicationCmdL2_FSP3IndicationCmdL2 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP3IndicationCmdL2_FSP3IndicationCmdL2;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP4IndicationCmdL2_FSP4IndicationCmdL2(FSP4IndicationCmdL2 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_FSP4IndicationCmdL2_oFSP_3_4_Req_L2_oLIN01_3a4c07b4_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP4IndicationCmdL2_FSP4IndicationCmdL2 = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP4IndicationCmdL2_FSP4IndicationCmdL2 = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP4IndicationCmdL2_FSP4IndicationCmdL2;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication(LIN_ACCOrCCIndication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_ACCOrCCIndication_oCIOMtoSlaves2_L4_oLIN03_9dcb84e7_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_ASLIndication_LIN_ASLIndication(LIN_ASLIndication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_ASLIndication_oCIOMtoSlaves2_L4_oLIN03_70f56c35_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_ASLIndication_LIN_ASLIndication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ASLIndication_LIN_ASLIndication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ASLIndication_LIN_ASLIndication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication(LIN_Adjust_DeviceIndication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_Adjust_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_2e36f0fb_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg(P2CONST(LIN_AlmClkCurAlarm_stat_sg, AUTOMATIC, RTE_TESTLIN_APPL_DATA) data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_SG_LIN_AlmClkCurAlarm_stat_sg_oCIOMtoSlaves2_FR2_L1_oLIN00_ff5b96ab_Tx = *(data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_AudioSystemStatus_LIN_AudioSystemStatus(LIN_AudioSystemStatus data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_AudioSystemStatus_oCIOMtoSlaves2_FR1_L1_oLIN00_13393810_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_AudioSystemStatus_LIN_AudioSystemStatus = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AudioSystemStatus_LIN_AudioSystemStatus = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AudioSystemStatus_LIN_AudioSystemStatus;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd(LIN_AudioVolumeIndicationCmd data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_AudioVolumeIndicationCmd_oCIOMtoSlaves2_FR1_L1_oLIN00_e9108a0f_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_BTStatus_LIN_BTStatus(LIN_BTStatus data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_BTStatus_oCIOMtoSlaves2_FR2_L1_oLIN00_71f34a0b_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_BTStatus_LIN_BTStatus = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_BTStatus_LIN_BTStatus = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_BTStatus_LIN_BTStatus;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica(LIN_DaytimeRunningLight_Indica data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_DaytimeRunningLight_Indica_oCIOMtoSlaves1_L4_oLIN03_f7c9701b_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication(LIN_DifflockOnOff_Indication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_DifflockOnOff_Indication_oCIOMtoSlaves2_L4_oLIN03_eaa1e19e_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd(LIN_DoorAutoFuncInd_cmd data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_DoorAutoFuncInd_cmd_oCIOMtoSlaves1_L1_oLIN00_52fafc3c_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication(LIN_Down_DeviceIndication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_Down_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_c9ef6b77_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio(LIN_DrivingLightPlus_Indicatio data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_DrivingLightPlus_Indicatio_oCIOMtoSlaves1_L4_oLIN03_e75acc52_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication(LIN_DrivingLight_Indication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_DrivingLight_Indication_oCIOMtoSlaves1_L4_oLIN03_e3d131c9_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn(LIN_EscButtonMuddySiteDeviceIn data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_EscButtonMuddySiteDeviceIn_oCIOMtoSlaves2_L4_oLIN03_b87af696_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication(LIN_FCW_DeviceIndication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_FCW_DeviceIndication_oCIOMtoSlaves2_L4_oLIN03_246586c3_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_FrontFog_Indication_LIN_FrontFog_Indication(LIN_FrontFog_Indication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_FrontFog_Indication_oCIOMtoSlaves1_L4_oLIN03_890ecb12_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_FrontFog_Indication_LIN_FrontFog_Indication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_FrontFog_Indication_LIN_FrontFog_Indication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_FrontFog_Indication_LIN_FrontFog_Indication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd(LIN_IntLghtLvlIndScaled_cmd data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_IntLghtLvlIndScaled_cmd_oCIOMtoSlaves2_FR1_L1_oLIN00_9d28ed83_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg(P2CONST(LIN_IntLghtModeInd_cmd_sg, AUTOMATIC, RTE_TESTLIN_APPL_DATA) data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_SG_LIN_IntLghtModeInd_cmd_sg_oCIOMtoSlaves2_FR1_L1_oLIN00_daaab64c_Tx = *(data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd(LIN_IntLghtOffModeInd_cmd data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_IntLghtOffModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_00d309d6_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd(LIN_IntLightMaxModeInd_cmd data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_IntLightMaxModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_523a53e3_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd(LIN_IntLightNightModeInd_cmd data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_IntLightNightModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_8c1fb2a2_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd(LIN_IntLightRestingModeInd_cmd data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_IntLightRestingModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_df4802bd_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication(LIN_LKS_DeviceIndication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_LKS_DeviceIndication_oCIOMtoSlaves2_L4_oLIN03_e9d09941_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication(LIN_M1_DeviceIndication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_M1_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_d4ecc99f_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication(LIN_M2_DeviceIndication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_M2_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_ecd742ec_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication(LIN_M3_DeviceIndication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_M3_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_4deec602_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_Offroad_Indication_LIN_Offroad_Indication(LIN_Offroad_Indication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_Offroad_Indication_oCIOMtoSlaves2_L4_oLIN03_f70e4ef2_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_Offroad_Indication_LIN_Offroad_Indication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Offroad_Indication_LIN_Offroad_Indication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Offroad_Indication_LIN_Offroad_Indication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication(LIN_ParkingLight_Indication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_ParkingLight_Indication_oCIOMtoSlaves1_L4_oLIN03_de9a5a8c_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd(LIN_PhoneButtonIndication_cmd data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_PhoneButtonIndication_cmd_oCIOMtoSlaves2_FR1_L1_oLIN00_a04041c2_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_RearFog_Indication_LIN_RearFog_Indication(LIN_RearFog_Indication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_RearFog_Indication_oCIOMtoSlaves1_L4_oLIN03_9af57169_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_RearFog_Indication_LIN_RearFog_Indication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_RearFog_Indication_LIN_RearFog_Indication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_RearFog_Indication_LIN_RearFog_Indication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati(LIN_RearWorkProjector_Indicati data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_RearWorkProjector_Indicati_oCIOMtoSlaves2_L4_oLIN03_d4496a61_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength(LIN_ShortPulseMaxLength data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_ShortPulseMaxLength_oCIOMtoSlaves_L5_oLIN04_83fa06d3_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication(LIN_Up_DeviceIndication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_LIN_Up_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_c6192fe4_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_TCS_Indication_TCS_Indication(TCS_Indication data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_TCS_Indication_oMastertoTCP_oLIN02_27a40830_Tx = *(&data);
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_TCS_Indication_TCS_Indication = RTE_COM_SENDSIGNALPROXY_SEND;
  Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_TCS_Indication_TCS_Indication = !Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_TCS_Indication_TCS_Indication;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */


/**********************************************************************************************************************
 * Internal/External Rx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_LFIC_st_DstBlock_P_challenge(P2VAR(ArrayByteSize8, AUTOMATIC, RTE_CDD_LFIC_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_MemCpy(*(data), Rte_TP_st_DstBlock_P_challenge, sizeof(ArrayByteSize8));

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_LFIC_st_DstBlock_P_encryption(P2VAR(ArrayByteSize16, AUTOMATIC, RTE_CDD_LFIC_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_MemCpy32(*(data), Rte_TP_st_DstBlock_P_encryption, sizeof(ArrayByteSize16));

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_LFIC_st_DstBlock_P_security_key_number(P2VAR(ArrayByteSize3, AUTOMATIC, RTE_CDD_LFIC_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_MemCpy(*(data), Rte_TP_st_DstBlock_P_security_key_number, sizeof(ArrayByteSize3));

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_LFIC_st_DstBlock_P_vehicle_serial(P2VAR(ArrayByteSize3, AUTOMATIC, RTE_CDD_LFIC_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_MemCpy(*(data), Rte_TP_st_DstBlock_P_vehicle_serial, sizeof(ArrayByteSize3));

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StartApplicationTrusted_PpTrustedData_DeValue(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATIONTRUSTED_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_StartApplication_PpTrustedData_DeValue;

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_DiagInfoILCP1_DiagInfoILCP1(P2VAR(DiagInfoILCP1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_DiagInfoILCP1_oILCP1toCIOM_L1_oLIN00_051a4e47_Rx;
  if (Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_DiagInfoILCP1_oILCP1toCIOM_L1_oLIN00_051a4e47_Rx != 0)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_FSP1DiagInfoL1_FSP1DiagInfoL1(P2VAR(FSP1DiagInfoL1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_FSP1DiagInfoL1_oFSP1_Frame_L1_oLIN00_f04712d6_Rx;
  if (Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_FSP1DiagInfoL1_oFSP1_Frame_L1_oLIN00_f04712d6_Rx != 0)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_FSP1ResponseErrorL1_FSP1ResponseErrorL1(P2VAR(FSP1ResponseErrorL1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_FSP1ResponseErrorL1_oFSP1_Frame_L1_oLIN00_b9e1fc6c_Rx;
  if (Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_FSP1ResponseErrorL1_oFSP1_Frame_L1_oLIN00_b9e1fc6c_Rx != 0)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_FSP2DiagInfoL1_FSP2DiagInfoL1(P2VAR(FSP2DiagInfoL1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_FSP2DiagInfoL1_oFSP2_Frame_L1_oLIN00_f8caf847_Rx;
  if (Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_FSP2DiagInfoL1_oFSP2_Frame_L1_oLIN00_f8caf847_Rx != 0)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_FSP2ResponseErrorL1_FSP2ResponseErrorL1(P2VAR(FSP2ResponseErrorL1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_FSP2ResponseErrorL1_oFSP2_Frame_L1_oLIN00_a793a78f_Rx;
  if (Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_FSP2ResponseErrorL1_oFSP2_Frame_L1_oLIN00_a793a78f_Rx != 0)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_LIN_AlmClkSetCurAlm_rqst_sg_LIN_AlmClkSetCurAlm_rqst_sg(P2VAR(LIN_AlmClkSetCurAlm_rqst_sg, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  *(data) = Rte_SG_LIN_AlmClkSetCurAlm_rqst_sg_oLECM2toCIOM_FR1_L1_oLIN00_05d68799_Rx;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_LIN_BunkH2PHTi_rqs_sg_LIN_BunkH2PHTi_rqs_sg(P2VAR(LIN_BunkH2PHTi_rqs_sg, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  *(data) = Rte_SG_LIN_BunkH2PHTi_rqs_sg_oLECM2toCIOM_FR3_L1_oLIN00_0bf5fe80_Rx;
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_LIN_DoorAutoFuncBtn_stat_LIN_DoorAutoFuncBtn_stat(P2VAR(LIN_DoorAutoFuncBtn_stat, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_LIN_DoorAutoFuncBtn_stat_oILCP1toCIOM_L1_oLIN00_0dc2e67f_Rx;
  if (Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_LIN_DoorAutoFuncBtn_stat_oILCP1toCIOM_L1_oLIN00_0dc2e67f_Rx != 0)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_LIN_IntLghtDimmingLvlDecBtn_s_LIN_IntLghtDimmingLvlDecBtn_s(P2VAR(LIN_IntLghtDimmingLvlDecBtn_s, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_LIN_IntLghtDimmingLvlDecBtn_s_oILCP1toCIOM_L1_oLIN00_0a50c243_Rx;
  if (Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_LIN_IntLghtDimmingLvlDecBtn_s_oILCP1toCIOM_L1_oLIN00_0a50c243_Rx != 0)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_LIN_IntLghtDimmingLvlIncBtn_s_LIN_IntLghtDimmingLvlIncBtn_s(P2VAR(LIN_IntLghtDimmingLvlIncBtn_s, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_LIN_IntLghtDimmingLvlIncBtn_s_oILCP1toCIOM_L1_oLIN00_34c0f447_Rx;
  if (Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_LIN_IntLghtDimmingLvlIncBtn_s_oILCP1toCIOM_L1_oLIN00_34c0f447_Rx != 0)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_LIN_IntLghtModeSelrFreeWheel_s_LIN_IntLghtModeSelrFreeWheel_s(P2VAR(LIN_IntLghtModeSelrFreeWheel_s, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_LIN_IntLghtModeSelrFreeWheel_s_oILCP1toCIOM_L1_oLIN00_98c2e509_Rx;
  if (Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_LIN_IntLghtModeSelrFreeWheel_s_oILCP1toCIOM_L1_oLIN00_98c2e509_Rx != 0)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_ResponseErrorILCP1_ResponseErrorILCP1(P2VAR(ResponseErrorILCP1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_ResponseErrorILCP1_oILCP1toCIOM_L1_oLIN00_44250bf0_Rx;
  if (Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_ResponseErrorILCP1_oILCP1toCIOM_L1_oLIN00_44250bf0_Rx != 0)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionNeeded1L1_SwitchDetectionNeeded1L1(P2VAR(SwitchDetectionNeeded1L1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_SwitchDetectionNeeded1L1_oFSP1_Frame_L1_oLIN00_099b825d_Rx;
  if (Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_SwitchDetectionNeeded1L1_oFSP1_Frame_L1_oLIN00_099b825d_Rx != 0)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionNeeded2L1_SwitchDetectionNeeded2L1(P2VAR(SwitchDetectionNeeded2L1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_SwitchDetectionNeeded2L1_oFSP2_Frame_L1_oLIN00_6fec6f8a_Rx;
  if (Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_SwitchDetectionNeeded2L1_oFSP2_Frame_L1_oLIN00_6fec6f8a_Rx != 0)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp1L1_SwitchDetectionResp1L1(P2VAR(SwitchDetectionResp1L1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_MemCpy(*(data), Rte_SwitchDetectionResp1L1_oFSP1_SwitchDetResp_L1_oLIN00_e8a163d5_Rx, sizeof(SwitchDetectionResp1L1));
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp1L2_SwitchDetectionResp1L2(P2VAR(SwitchDetectionResp1L2, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_MemCpy(*(data), Rte_SwitchDetectionResp1L2_oFSP1_SwitchDetResp_L2_oLIN01_02016dd3_Rx, sizeof(SwitchDetectionResp1L2));
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp1L3_SwitchDetectionResp1L3(P2VAR(SwitchDetectionResp1L3, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_MemCpy(*(data), Rte_SwitchDetectionResp1L3_oFSP1_SwitchDetResp_L3_oLIN02_5945d426_Rx, sizeof(SwitchDetectionResp1L3));
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp1L4_SwitchDetectionResp1L4(P2VAR(SwitchDetectionResp1L4, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_MemCpy(*(data), Rte_SwitchDetectionResp1L4_oFSP1_SwitchDetResp_L4_oLIN03_0c30779e_Rx, sizeof(SwitchDetectionResp1L4));
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp1L5_SwitchDetectionResp1L5(P2VAR(SwitchDetectionResp1L5, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_MemCpy(*(data), Rte_SwitchDetectionResp1L5_oFSP1_SwitchDetResp_L5_oLIN04_50190a72_Rx, sizeof(SwitchDetectionResp1L5));
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp2L1_SwitchDetectionResp2L1(P2VAR(SwitchDetectionResp2L1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_MemCpy(*(data), Rte_SwitchDetectionResp2L1_oFSP2_SwitchDetResp_L1_oLIN00_865b6493_Rx, sizeof(SwitchDetectionResp2L1));
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp2L2_SwitchDetectionResp2L2(P2VAR(SwitchDetectionResp2L2, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_MemCpy(*(data), Rte_SwitchDetectionResp2L2_oFSP2_SwitchDetResp_L2_oLIN01_6cfb6a95_Rx, sizeof(SwitchDetectionResp2L2));
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp2L3_SwitchDetectionResp2L3(P2VAR(SwitchDetectionResp2L3, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_MemCpy(*(data), Rte_SwitchDetectionResp2L3_oFSP2_SwitchDetResp_L3_oLIN02_37bfd360_Rx, sizeof(SwitchDetectionResp2L3));
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp3L2_SwitchDetectionResp3L2(P2VAR(SwitchDetectionResp3L2, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_MemCpy(*(data), Rte_SwitchDetectionResp3L2_oFSP3_SwitchDetResp_L2_oLIN01_ff826a68_Rx, sizeof(SwitchDetectionResp3L2));
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp4L2_SwitchDetectionResp4L2(P2VAR(SwitchDetectionResp4L2, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_MemCpy(*(data), Rte_SwitchDetectionResp4L2_oFSP4_SwitchDetResp_L2_oLIN01_b10f6419_Rx, sizeof(SwitchDetectionResp4L2));
  Rte_EnableOSInterrupts(KM); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Internal C/S connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_RFIC_RficNRESDio_R_Read(void) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  if (Rte_OsApplication_Trusted_Core0_ClientIdleFlags.Rte_Idle_CDD_RFIC_RficNRESDio_R_Read == 1)
  {
    Rte_OsApplication_Trusted_Core0_ClientIdleFlags.Rte_Idle_CDD_RFIC_RficNRESDio_R_Read = 0;
    Rte_CS_ClientQueue2_CDD_RFIC_RficNRESDio_R_Read.Rte_CallCompleted = !Rte_CS_ClientQueue_CDD_RFIC_RficNRESDio_R_Read.Rte_CallCompleted;
    ret = Rte_IocSend_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read(Rte_CS_ClientConfigIndex_CDD_RFIC_RficNRESDio_R_Read);
    if (Rte_IsInfrastructureError(ret))
    {
      Rte_CS_ClientQueue2_CDD_RFIC_RficNRESDio_R_Read.Rte_CallCompleted = Rte_CS_ClientQueue_CDD_RFIC_RficNRESDio_R_Read.Rte_CallCompleted;
      Rte_OsApplication_Trusted_Core0_ClientIdleFlags.Rte_Idle_CDD_RFIC_RficNRESDio_R_Read = 1;
      ret = RTE_E_TIMEOUT;
    }
    else
    {
      ret = RTE_E_OK;
    }
  }
  else
  {
    ret = RTE_E_LIMIT;
  }
  ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if (ret == RTE_E_OK)
  {

    /* scheduled trigger for runnables: IoHwAb_RficNRESDio_P_Read */
    (void)SetEvent(StartApplication_Trusted_Task, Rte_Ev_Run_IOHWAB_IoHwAb_RficNRESDio_P_Read); /* PRQA S 3417 */ /* MD_Rte_Os */
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Result_CDD_RFIC_RficNRESDio_R_Read(P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_CDD_RFIC_APPL_VAR) ReadValue) /* PRQA S 0850, 3408, 3673 */ /* MD_MSR_19.8, MD_Rte_3408, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */


  {
    boolean callCompleted;
    SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    callCompleted = (Rte_CS_ClientQueue_CDD_RFIC_RficNRESDio_R_Read.Rte_CallCompleted == Rte_CS_ClientQueue2_CDD_RFIC_RficNRESDio_R_Read.Rte_CallCompleted) ? TRUE : FALSE;
    if ((Rte_OsApplication_Trusted_Core0_ClientIdleFlags.Rte_Idle_CDD_RFIC_RficNRESDio_R_Read == 0) && (callCompleted == TRUE))
    {
      Rte_OsApplication_Trusted_Core0_ClientIdleFlags.Rte_Idle_CDD_RFIC_RficNRESDio_R_Read = 1;

      *ReadValue = Rte_CS_ClientQueue_CDD_RFIC_RficNRESDio_R_Read.ReadValue;

      ret = Rte_CS_ClientQueue_CDD_RFIC_RficNRESDio_R_Read.Rte_Result;
    }
    else
    {
      ret = RTE_E_NO_DATA;
    }
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }


  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */


/**********************************************************************************************************************
 * RTE internal IOC replacements
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_IocSend_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read(CONST(uint8, RTE_CONST) data0)
{
  Std_ReturnType result = RTE_E_OK;
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if (((Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_head - Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_tail) == 1U)
      || ((Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_tail - Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_head) == 1U))
  {
    Rte_OsApplication_Trusted_Core0_IocOverflowFlags.Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_overflow0 = !Rte_OsApplication_Trusted_Core0_IocOverflowFlags.Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_overflow1;
    result = RTE_E_LIMIT;
  }
  else
  {
    uint8_least tail = Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_tail;
    if (tail < ((2 * 1U) - 1U))
    {
      ++tail;
    }
    else
    {
      tail = 0U;
    }
    Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_tail = (uint8)tail;
    if (tail >= 1U)
    {
      tail -= 1U;
    }

    Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_Queue[tail] = data0;
  }

  ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return result;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_IocReceive_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read(P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) data0)
{
  Std_ReturnType result;
  boolean overflowDetected = FALSE;
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if (Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_tail == Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_head)
  {
    result = RTE_E_NO_DATA;
  }
  else
  {
    uint8_least head = Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_head;
    if (head < ((2 * 1U) - 1U))
    {
       ++head;
    }
    else
    {
       head = 0U;
    }
    Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_head = (uint8)head;
    if (head >= 1U)
    {
       head -= 1U;
    }

    *data0 = Rte_ioc_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_Queue[head];

    if (Rte_OsApplication_Trusted_Core0_IocOverflowFlags.Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_overflow0 != Rte_OsApplication_Trusted_Core0_IocOverflowFlags.Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_overflow1)
    {
      overflowDetected = TRUE;
      Rte_OsApplication_Trusted_Core0_IocOverflowFlags.Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_overflow1 = Rte_OsApplication_Trusted_Core0_IocOverflowFlags.Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read_overflow0;
    }

    if (overflowDetected == TRUE)
    {
      result = RTE_E_LOST_DATA;
    }
    else
    {
      result = RTE_E_OK;
    }
  }
  ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return result;
}



/**********************************************************************************************************************
 * Task bodies for RTE controlled tasks
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Task:     PvtTask
 * Priority: 42
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(PvtTask) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{
  EventMaskType ev;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Cyclic_PvtTask_0_10ms | Rte_Ev_Run_CDD_RFIC_RE_rfic_init | Rte_Ev_Run_TP_RE_SMK_TP | Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_DiagInfoILCP1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_DiagInfoILCP1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_ResponseErrorILCP1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_ResponseErrorILCP1_RxTimeout); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(PvtTask, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Cyclic_PvtTask_0_10ms | Rte_Ev_Run_CDD_RFIC_RE_rfic_init | Rte_Ev_Run_TP_RE_SMK_TP | Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_DiagInfoILCP1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_DiagInfoILCP1_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RxTimeout | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_ResponseErrorILCP1_RXCbk | Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_ResponseErrorILCP1_RxTimeout)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Cyclic_PvtTask_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      Re_PvtDo12VInterface();

      /* call runnable */
      RE_SMK_Telegram();
    }

    if ((ev & Rte_Ev_Run_CDD_RFIC_RE_rfic_init) != (EventMaskType)0)
    {
    }

    if ((ev & Rte_Ev_Run_TP_RE_SMK_TP) != (EventMaskType)0)
    {
      /* call runnable */
      RE_SMK_TP();
    }

    if ((ev & Rte_Ev_Cyclic_PvtTask_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      ReTestLin();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RxTimeout) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RxTimeout();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RxTimeout) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RxTimeout();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RxTimeout) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RxTimeout();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_DiagInfoILCP1_RxTimeout) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_ILCP1_DiagInfoILCP1_RxTimeout();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RxTimeout) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RxTimeout();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RxTimeout) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RxTimeout();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RxTimeout) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RxTimeout();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RxTimeout) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RxTimeout();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RxTimeout) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RxTimeout();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RxTimeout) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RxTimeout();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RxTimeout) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RxTimeout();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RxTimeout) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RxTimeout();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_ResponseErrorILCP1_RxTimeout) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_ILCP1_ResponseErrorILCP1_RxTimeout();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RXCbk) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RXCbk();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RXCbk) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RXCbk();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RXCbk) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RXCbk();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RXCbk) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RXCbk();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RXCbk) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RXCbk();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RXCbk) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RXCbk();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RXCbk) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RXCbk();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_DiagInfoILCP1_RXCbk) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_ILCP1_DiagInfoILCP1_RXCbk();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RXCbk) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RXCbk();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RXCbk) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RXCbk();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RXCbk) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RXCbk();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RXCbk) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RXCbk();
    }

    if ((ev & Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_ResponseErrorILCP1_RXCbk) != (EventMaskType)0)
    {
      /* call runnable */
      Re_LIN0_ILCP1_ResponseErrorILCP1_RXCbk();
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     StartApplication_Trusted_Task
 * Priority: 41
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(StartApplication_Trusted_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{
  EventMaskType ev;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Cyclic_StartApplication_Trusted_Task_0_10ms | Rte_Ev_Run_IOHWAB_IoHwAb_RficNRESDio_P_Read | Rte_Ev_Run_StartApplicationTrusted_StartApplicationTrusted_OnDataRec_TrustedData); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(StartApplication_Trusted_Task, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Cyclic_StartApplication_Trusted_Task_0_10ms | Rte_Ev_Run_IOHWAB_IoHwAb_RficNRESDio_P_Read | Rte_Ev_Run_StartApplicationTrusted_StartApplicationTrusted_OnDataRec_TrustedData)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Cyclic_StartApplication_Trusted_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      Re_PvtDowhsDowlsInterface();
    }

    if ((ev & Rte_Ev_Run_StartApplicationTrusted_StartApplicationTrusted_OnDataRec_TrustedData) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplicationTrusted_OnDataRec_TrustedData();
    }

    if ((ev & Rte_Ev_Cyclic_StartApplication_Trusted_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      IoHwAb_REIoHwAb_10ms();

      /* call runnable */
      Re_PvtAdInterfaces();

      /* call runnable */
      Re_PvtDobhsInterface();
    }

    if ((ev & Rte_Ev_Run_IOHWAB_IoHwAb_RficNRESDio_P_Read) != (EventMaskType)0)
    {
      {
        uint8 clientIdtmp;
        while ((!Rte_IsInfrastructureError(Rte_IocReceive_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read(&clientIdtmp))))
        {
          uint8 clientId = clientIdtmp;
          P2VAR(Rte_CS_ClientQueueType_IOHWAB_RficNRESDio_P_Read, TYPEDEF, RTE_VAR_NOINIT) ClientQueue;
          P2VAR(Rte_CS_ClientQueue2Type_IOHWAB_RficNRESDio_P_Read, TYPEDEF, RTE_VAR_NOINIT) ClientQueue2;
          if (clientId >= 1U)
          {
            continue; /* PRQA S 0770 */ /* MD_Rte_0770 */
          }
          ClientQueue = Rte_CS_ClientConfig_IOHWAB_RficNRESDio_P_Read[clientId].Rte_ClientQueue;
          ClientQueue2 = Rte_CS_ClientConfig_IOHWAB_RficNRESDio_P_Read[clientId].Rte_ClientQueue2;

          /* call runnable */
          ClientQueue->Rte_Result = IoHwAb_RficNRESDio_P_Read(&ClientQueue->ReadValue);

          ClientQueue->Rte_CallCompleted = ClientQueue2->Rte_CallCompleted;
        }
      }
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
