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
 *          File:  Rte.c
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
 * Rte Init State Variable
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_ZERO_INIT_8BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

volatile VAR(uint8, RTE_VAR_ZERO_INIT) Rte_InitState = RTE_STATE_UNINIT; /* PRQA S 0850, 3408 */ /* MD_MSR_19.8, MD_Rte_3408 */

#define RTE_STOP_SEC_VAR_ZERO_INIT_8BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Constants
 *********************************************************************************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(ArrayByteSize16, RTE_CONST) Rte_C_ArrayByteSize16_0 = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(ArrayByteSize3, RTE_CONST) Rte_C_ArrayByteSize3_0 = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(ArrayByteSize8, RTE_CONST) Rte_C_ArrayByteSize8_0 = {
  0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(SwitchDetectionResp1L1, RTE_CONST) Rte_C_SwitchDetectionResp1L1_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(SwitchDetectionResp1L2, RTE_CONST) Rte_C_SwitchDetectionResp1L2_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(SwitchDetectionResp1L3, RTE_CONST) Rte_C_SwitchDetectionResp1L3_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(SwitchDetectionResp1L4, RTE_CONST) Rte_C_SwitchDetectionResp1L4_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(SwitchDetectionResp1L5, RTE_CONST) Rte_C_SwitchDetectionResp1L5_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(SwitchDetectionResp2L1, RTE_CONST) Rte_C_SwitchDetectionResp2L1_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(SwitchDetectionResp2L2, RTE_CONST) Rte_C_SwitchDetectionResp2L2_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(SwitchDetectionResp2L3, RTE_CONST) Rte_C_SwitchDetectionResp2L3_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(SwitchDetectionResp3L2, RTE_CONST) Rte_C_SwitchDetectionResp3L2_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(SwitchDetectionResp4L2, RTE_CONST) Rte_C_SwitchDetectionResp4L2_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(DtMemoryProtectionDataElementType, RTE_CONST) Rte_C_DtMemoryProtectionDataElementType_0 = {
  0U, FALSE
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(LIN_AlmClkCurAlarm_stat_sg, RTE_CONST) Rte_C_LIN_AlmClkCurAlarm_stat_sg_0 = {
  0U, 31U, 7U, 63U, 127U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(LIN_AlmClkSetCurAlm_rqst_sg, RTE_CONST) Rte_C_LIN_AlmClkSetCurAlm_rqst_sg_0 = {
  63U, 7U, 127U, 31U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(LIN_BunkH2PHTi_rqs_sg, RTE_CONST) Rte_C_LIN_BunkH2PHTi_rqs_sg_0 = {
  255U, 7U, 255U, 255U, 255U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(LIN_IntLghtModeInd_cmd_sg, RTE_CONST) Rte_C_LIN_IntLghtModeInd_cmd_sg_0 = {
  FALSE, 7U
};
/* PRQA L:L1 */
/* PRQA S 0850, 0759 L1 */ /* MD_MSR_19.8, MD_MSR_18.4 */
CONST(tVAR, RTE_CONST) Rte_C_tVAR_0 = {
  0U
};
/* PRQA L:L1 */

#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
 * Defines for Rte_ComSendSignalProxy
 *********************************************************************************************************************/
#define RTE_COM_SENDSIGNALPROXY_NOCHANGE       (0U)
#define RTE_COM_SENDSIGNALPROXY_SEND           (1U)
#define RTE_COM_SENDSIGNALPROXY_INVALIDATE     (2U)



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

/* Queue definitions for internal C/S connections */
#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone1J1939_2a22de3d_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_Backbone2_3f947ba3_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_Backbone2_3f947ba3_GetCurrentComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_Backbone2_3f947ba3_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone2_3f947ba3_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_Backbone2_3f947ba3_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone2_3f947ba3_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone2_3f947ba3_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_CabSubnet_aa77b0b0_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_FMSNet_05490e3d_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_FMSNet_05490e3d_GetCurrentComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_FMSNet_05490e3d_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_FMSNet_05490e3d_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_FMSNet_05490e3d_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_FMSNet_05490e3d_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_FMSNet_05490e3d_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_FMSNet_05490e3d_RequestComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_FMSNet_05490e3d_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_FMSNet_05490e3d_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_FMSNet_05490e3d_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_FMSNet_05490e3d_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_LIN00_ace1a6ba_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_LIN00_ace1a6ba_GetCurrentComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_LIN00_ace1a6ba_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN00_ace1a6ba_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN00_ace1a6ba_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_LIN00_ace1a6ba_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_LIN00_ace1a6ba_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_LIN01_4323cd84_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_LIN01_4323cd84_GetCurrentComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_LIN01_4323cd84_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN01_4323cd84_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN01_4323cd84_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_LIN01_4323cd84_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_LIN01_4323cd84_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_LIN01_4323cd84_RequestComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_LIN01_4323cd84_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN01_4323cd84_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN01_4323cd84_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_LIN01_4323cd84_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_LIN02_a8147687_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_LIN02_a8147687_GetCurrentComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_LIN02_a8147687_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN02_a8147687_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN02_a8147687_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_LIN02_a8147687_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_LIN02_a8147687_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_LIN02_a8147687_RequestComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_LIN02_a8147687_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN02_a8147687_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN02_a8147687_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_LIN02_a8147687_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_LIN03_47d61db9_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_LIN03_47d61db9_GetCurrentComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_LIN03_47d61db9_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN03_47d61db9_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN03_47d61db9_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_LIN03_47d61db9_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_LIN03_47d61db9_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_LIN03_47d61db9_RequestComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_LIN03_47d61db9_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN03_47d61db9_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN03_47d61db9_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_LIN03_47d61db9_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_LIN04_a50a06c0_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_LIN04_a50a06c0_GetCurrentComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_LIN04_a50a06c0_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN04_a50a06c0_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN04_a50a06c0_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_LIN04_a50a06c0_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_LIN04_a50a06c0_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_LIN04_a50a06c0_RequestComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_LIN04_a50a06c0_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN04_a50a06c0_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_LIN04_a50a06c0_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_LIN04_a50a06c0_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueue_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_UR_CN_SecuritySubnet_7cec9a61_RequestComMode; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState, RTE_VAR_NOINIT) Rte_CS_ServerQueue_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_PpDemOpCycle_DemOperationCycle_0_SetOperationCycleState; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ServerQueueType_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget, RTE_VAR_NOINIT) Rte_CS_ServerQueue_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget; /* PRQA S 0850, 1504, 3229 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
VAR(Rte_CS_ServerQueueInfoType_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget, RTE_VAR_NOINIT) Rte_CS_ServerQueueInfo_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */
VAR(Rte_CS_ClientQueueType_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget, RTE_VAR_NOINIT) Rte_CS_ClientQueue_StartApplication_EcuM_ShutdownTarget_SelectShutdownTarget; /* PRQA S 0850, 1504 */ /* MD_MSR_19.8, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ClientQueueType_IOHWAB_RficNRESDio_P_Read, RTE_VAR_ZERO_INIT) Rte_CS_ClientQueue_CDD_RFIC_RficNRESDio_R_Read = {
  0
};

#define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_CS_ClientQueue2Type_IOHWAB_RficNRESDio_P_Read, RTE_VAR_ZERO_INIT) Rte_CS_ClientQueue2_CDD_RFIC_RficNRESDio_R_Read = {
  0
};

#define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone1J1939_2a22de3d_RequestComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_Backbone2_3f947ba3_GetCurrentComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_Backbone2_3f947ba3_GetCurrentComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone2_3f947ba3_GetCurrentComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone2_3f947ba3_RequestComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_CabSubnet_aa77b0b0_RequestComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_FMSNet_05490e3d_GetCurrentComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_FMSNet_05490e3d_GetCurrentComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_FMSNet_05490e3d_GetCurrentComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_FMSNet_05490e3d_RequestComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_FMSNet_05490e3d_RequestComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_FMSNet_05490e3d_RequestComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_LIN00_ace1a6ba_GetCurrentComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_LIN00_ace1a6ba_GetCurrentComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_LIN00_ace1a6ba_GetCurrentComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_LIN00_ace1a6ba_RequestComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_LIN01_4323cd84_GetCurrentComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_LIN01_4323cd84_GetCurrentComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_LIN01_4323cd84_GetCurrentComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_LIN01_4323cd84_RequestComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_LIN01_4323cd84_RequestComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_LIN01_4323cd84_RequestComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_LIN02_a8147687_GetCurrentComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_LIN02_a8147687_GetCurrentComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_LIN02_a8147687_GetCurrentComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_LIN02_a8147687_RequestComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_LIN02_a8147687_RequestComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_LIN02_a8147687_RequestComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_LIN03_47d61db9_GetCurrentComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_LIN03_47d61db9_GetCurrentComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_LIN03_47d61db9_GetCurrentComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_LIN03_47d61db9_RequestComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_LIN03_47d61db9_RequestComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_LIN03_47d61db9_RequestComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_LIN04_a50a06c0_GetCurrentComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_LIN04_a50a06c0_GetCurrentComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_LIN04_a50a06c0_GetCurrentComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_LIN04_a50a06c0_RequestComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_LIN04_a50a06c0_RequestComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_LIN04_a50a06c0_RequestComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode
  }
};

CONST(Rte_CS_ClientConfigType_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode, RTE_CONST) Rte_CS_ClientConfig_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_UR_CN_SecuritySubnet_7cec9a61_RequestComMode
  }
};

CONST(Rte_CS_ClientConfigType_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState, RTE_CONST) Rte_CS_ClientConfig_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_PpDemOpCycle_DemOperationCycle_0_SetOperationCycleState
  }
};

CONST(Rte_CS_ClientConfigType_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget, RTE_CONST) Rte_CS_ClientConfig_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_StartApplication_EcuM_ShutdownTarget_SelectShutdownTarget
  }
};

CONST(Rte_CS_ClientConfigType_IOHWAB_RficNRESDio_P_Read, RTE_CONST) Rte_CS_ClientConfig_IOHWAB_RficNRESDio_P_Read[1] = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  {
    &Rte_CS_ClientQueue_CDD_RFIC_RficNRESDio_R_Read,
    &Rte_CS_ClientQueue2_CDD_RFIC_RficNRESDio_R_Read
  }
};

#define RTE_STOP_SEC_CONST_UNSPECIFIED
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

FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num) /* PRQA S 3408, 1505 */ /* MD_Rte_3408, MD_MSR_8.10 */
{
  P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) src = source;
  P2VAR(uint8, AUTOMATIC, RTE_APPL_VAR) dst = destination;
  uint32_least i;
  for (i = 0; i < num; i++)
  {
    dst[i] = src[i];
  }
}

#define RTE_MEMCPY32ALIGN (sizeof(uint32) - 1)

FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num)
{
  P2CONST(uint32, AUTOMATIC, RTE_APPL_DATA) asrc = source;
  P2VAR(uint32, AUTOMATIC, RTE_APPL_VAR) adst = destination;
  P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) src = source;
  P2VAR(uint8, AUTOMATIC, RTE_APPL_VAR) dst = destination;
  uint32_least i = 0;

  if (num >= 16)
  {
    if (((((uint32)src) & RTE_MEMCPY32ALIGN) == 0) && ((((uint32)dst) & RTE_MEMCPY32ALIGN) == 0)) /* PRQA S 0306 */ /* MD_Rte_0306 */
    {
      uint32_least asize = num / sizeof(uint32);
      uint32_least rem = num & RTE_MEMCPY32ALIGN;
      for (i = 0; i < (asize - 3); i += 4)
      {
        adst[i] = asrc[i];
        adst[i+1] = asrc[i+1];
        adst[i+2] = asrc[i+2];
        adst[i+3] = asrc[i+3];
      }

      while (i < asize)
      {
        adst[i] = asrc[i];
        ++i;
      }
      i = num - rem;
    }
    else
    {
      for (i = 0; (i + 15) < num; i += 16)
      {
        dst[i] = src[i];
        dst[i+1] = src[i+1];
        dst[i+2] = src[i+2];
        dst[i+3] = src[i+3];
        dst[i+4] = src[i+4];
        dst[i+5] = src[i+5];
        dst[i+6] = src[i+6];
        dst[i+7] = src[i+7];
        dst[i+8] = src[i+8];
        dst[i+9] = src[i+9];
        dst[i+10] = src[i+10];
        dst[i+11] = src[i+11];
        dst[i+12] = src[i+12];
        dst[i+13] = src[i+13];
        dst[i+14] = src[i+14];
        dst[i+15] = src[i+15];
      }
    }

  }
  while (i < num)
  {
    dst[i] = src[i];
    ++i;
  }
}

FUNC(void, RTE_CODE) Rte_MemClr(P2VAR(void, AUTOMATIC, RTE_VAR_NOINIT) ptr, uint32_least num)
{
  P2VAR(uint8, AUTOMATIC, RTE_VAR_NOINIT) dst = ptr;
  uint32_least i;
  for (i = 0; i < num; i++)
  {
    dst[i] = 0;
  }
}

FUNC(void, RTE_CODE) SchM_Init(void)
{
  /* activate the tasks */
  (void)ActivateTask(Default_BSW_Async_Task); /* PRQA S 3417 */ /* MD_Rte_Os */

  /* activate the alarms used for TimingEvents */
  (void)SetRelAlarm(Rte_Al_TE2_Default_BSW_Async_Task_0_100ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(100)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE2_Default_BSW_Async_Task_0_10ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(10)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE2_Default_BSW_Async_Task_0_20ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(20)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE2_Default_BSW_Async_Task_0_5ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(5)); /* PRQA S 3417 */ /* MD_Rte_Os */

  Rte_InitState = RTE_STATE_SCHM_INIT;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Start(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  /* C/S queue initialization */
  Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone1J1939_2a22de3d_RequestComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone1J1939_2a22de3d_RequestComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone2_3f947ba3_GetCurrentComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone2_3f947ba3_GetCurrentComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_Backbone2_3f947ba3_RequestComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_Backbone2_3f947ba3_RequestComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_CabSubnet_aa77b0b0_RequestComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_CabSubnet_aa77b0b0_RequestComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_FMSNet_05490e3d_GetCurrentComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_FMSNet_05490e3d_GetCurrentComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_FMSNet_05490e3d_RequestComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_FMSNet_05490e3d_RequestComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN00_ace1a6ba_GetCurrentComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN00_ace1a6ba_GetCurrentComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN00_ace1a6ba_RequestComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN00_ace1a6ba_RequestComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN01_4323cd84_GetCurrentComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN01_4323cd84_GetCurrentComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN01_4323cd84_RequestComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN01_4323cd84_RequestComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN02_a8147687_GetCurrentComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN02_a8147687_GetCurrentComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN02_a8147687_RequestComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN02_a8147687_RequestComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN03_47d61db9_GetCurrentComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN03_47d61db9_GetCurrentComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN03_47d61db9_RequestComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN03_47d61db9_RequestComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN04_a50a06c0_GetCurrentComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN04_a50a06c0_GetCurrentComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_LIN04_a50a06c0_RequestComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_LIN04_a50a06c0_RequestComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_ComM_UR_CN_SecuritySubnet_7cec9a61_RequestComMode.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_UR_CN_SecuritySubnet_7cec9a61_RequestComMode.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_DemMaster_OsApplication_Untrusted_Core0_OpCycle_DemOperationCycle_0_SetOperationCycleState.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_PpDemOpCycle_DemOperationCycle_0_SetOperationCycleState.Rte_CallCompleted = TRUE;
  Rte_CS_ServerQueueInfo_EcuM_EcuM_ShutdownTarget_SelectShutdownTarget.Rte_Active = 0;
  Rte_CS_ClientQueue_StartApplication_EcuM_ShutdownTarget_SelectShutdownTarget.Rte_CallCompleted = TRUE;

  /* activate the tasks */
  (void)ActivateTask(Default_Appl_Task); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)ActivateTask(PvtTask); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)ActivateTask(StartApplication_MemoryViolation_Task); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)ActivateTask(StartApplication_Trusted_Task); /* PRQA S 3417 */ /* MD_Rte_Os */

  /* activate the alarms used for TimingEvents */
  (void)SetRelAlarm(Rte_Al_TE_PvtTask_0_10ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(10)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_TP_RE_SMK_TP, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(20)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_StartApplication_Trusted_Task_0_10ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(10)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(10)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms, RTE_SEC_SystemTimer(0) + (TickType)1, RTE_SEC_SystemTimer(1)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(10)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(1)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms, RTE_MSEC_SystemTimer(0) + (TickType)1, RTE_MSEC_SystemTimer(250)); /* PRQA S 3417 */ /* MD_Rte_Os */

  Rte_InitState = RTE_STATE_INIT;

  return RTE_E_OK;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Stop(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  /* deactivate alarms */
  (void)CancelAlarm(Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_PvtTask_0_10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_TP_RE_SMK_TP); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_StartApplication_Trusted_Task_0_10ms); /* PRQA S 3417 */ /* MD_Rte_Os */

  Rte_InitState = RTE_STATE_SCHM_INIT;

  return RTE_E_OK;
}

FUNC(void, RTE_CODE) SchM_Deinit(void)
{
  /* deactivate alarms */
  (void)CancelAlarm(Rte_Al_TE2_Default_BSW_Async_Task_0_100ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE2_Default_BSW_Async_Task_0_10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE2_Default_BSW_Async_Task_0_20ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE2_Default_BSW_Async_Task_0_5ms); /* PRQA S 3417 */ /* MD_Rte_Os */

  Rte_InitState = RTE_STATE_UNINIT;
}

FUNC(void, RTE_CODE) Rte_InitMemory(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  Rte_InitState = RTE_STATE_UNINIT;

  Rte_InitMemory_OsApplication_Trusted_Core0();
  Rte_InitMemory_OsApplication_Untrusted_Core0();
}


/**********************************************************************************************************************
 * Exclusive area access
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_00(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_00(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_01(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_01(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_02(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_02(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_03(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_03(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_04(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_04(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_05(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_05(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_06(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_06(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_07(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_07(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_08(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_08(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_09(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_09(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_10(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_10(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_11(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_11(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_12(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_12(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_13(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_13(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_14(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_14(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_15(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_15(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_16(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_16(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_17(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_17(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_18(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_18(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_19(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_19(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_20(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_20(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_21(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_21(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_22(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_22(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_23(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_23(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_24(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_24(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_25(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_25(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_26(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_26(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_27(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_27(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_28(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_28(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_29(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_29(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_30(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_30(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_31(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_31(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_32(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_32(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_33(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_33(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_34(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_34(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_35(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_35(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_36(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_36(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_37(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_37(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_38(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_38(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_39(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_39(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_40(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_40(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_41(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_41(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_42(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_42(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_43(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_43(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_44(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_44(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_45(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_45(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_46(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_46(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_47(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_47(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_48(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_48(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_49(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_49(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_50(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_50(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_51(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_51(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_52(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_52(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_53(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_53(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_54(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_54(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_55(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_55(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_56(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_56(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_57(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_57(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_58(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_58(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_59(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_59(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_60(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_60(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_61(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_61(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_62(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_62(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_63(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_63(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Adc_ADC_EXCLUSIVE_AREA_64(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Adc_ADC_EXCLUSIVE_AREA_64(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_0(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_0(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_1(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_1(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_2(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_2(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_3(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_3(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_4(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_4(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_00(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_00(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_01(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_01(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_02(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_02(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_03(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_03(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_04(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_04(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_05(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_05(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_06(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_06(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_07(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_07(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_08(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_08(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_09(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_09(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_10(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_10(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_11(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_11(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_12(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_12(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_13(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_13(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_14(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_14(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_15(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_15(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_16(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_16(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_17(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_17(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_18(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_18(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_19(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_19(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_20(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_20(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_21(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_21(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_22(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_22(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_23(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_23(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_24(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_24(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_25(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_25(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_26(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_26(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_27(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_27(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_28(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_28(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_29(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_29(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_30(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_30(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_00(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_00(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_01(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_01(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_02(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_02(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_03(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_03(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_04(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_04(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_05(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_05(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_06(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_06(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_07(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_07(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_08(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_08(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_09(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_09(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_10(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_10(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_11(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_11(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_12(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_12(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_13(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_13(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_14(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_14(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_15(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_15(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_16(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_16(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_17(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_17(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_18(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_18(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_19(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_19(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_20(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_20(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_21(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_21(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_22(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_22(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_23(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_23(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_24(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_24(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_25(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_25(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_26(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_26(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_27(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_27(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_28(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_28(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_29(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_29(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_30(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_30(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_31(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_31(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_32(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_32(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_33(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_33(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_34(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_34(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_35(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_35(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_36(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_36(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_37(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_37(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_38(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_38(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_39(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_39(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_40(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_40(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_41(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_41(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_42(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_42(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_43(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_43(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_44(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_44(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_45(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_45(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_46(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_46(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_47(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_47(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_48(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_48(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_49(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_49(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_50(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_50(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_51(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_51(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_52(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_52(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_53(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_53(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_54(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_54(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_55(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_55(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_56(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_56(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_57(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_57(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_58(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_58(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_59(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_59(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_60(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_60(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_61(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_61(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_62(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_62(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_63(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_63(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_64(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_64(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_00(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_00(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_01(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_01(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_02(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_02(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_03(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_03(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_04(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_04(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_05(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_05(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_06(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_06(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_07(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_07(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_08(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_08(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_09(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_09(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_10(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_10(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_11(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_11(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_12(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_12(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_13(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_13(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_14(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_14(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_15(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_15(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_16(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_16(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_17(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_17(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_18(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_18(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_19(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_19(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_20(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_20(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_21(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_21(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_22(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_22(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_23(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_23(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_24(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_24(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_25(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_25(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_26(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_26(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_27(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_27(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_28(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_28(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_29(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_29(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_30(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_30(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_00(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_00(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_01(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_01(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_02(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_02(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_03(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_03(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_04(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_04(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_05(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_05(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_06(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_06(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_07(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_07(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_08(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_08(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_09(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_09(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_10(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_10(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_11(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_11(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_12(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_12(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_13(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_13(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_14(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_14(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_15(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_15(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_16(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_16(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_17(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_17(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_18(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_18(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_19(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_19(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_20(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_20(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_21(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_21(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_22(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_22(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_23(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_23(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_24(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_24(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_25(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_25(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_26(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_26(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_27(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_27(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_28(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_28(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_29(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_29(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_30(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_30(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcl_MCL_EXCLUSIVE_AREA_31(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcl_MCL_EXCLUSIVE_AREA_31(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_01(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_01(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_02(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_02(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_03(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_03(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_04(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_04(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_08(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_08(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_09(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_09(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_10(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_10(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_11(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_11(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_12(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_12(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_13(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_13(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_14(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_14(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_15(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_15(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_16(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_16(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_17(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_17(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_18(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_18(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_19(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_19(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_20(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_20(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_21(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_21(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_22(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_22(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_23(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_23(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_24(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_24(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_25(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_25(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_26(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_26(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_27(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_27(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_28(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_28(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_29(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_29(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_30(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_EXCLUSIVE_AREA_30(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_00(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_00(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_01(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_01(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_02(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_02(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_03(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_03(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_04(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_04(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_05(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_05(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_06(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_06(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_07(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_07(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_08(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_08(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_09(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_09(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_10(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_10(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_11(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_11(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_12(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_12(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_13(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_13(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_14(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_14(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_15(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_15(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_16(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_16(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_17(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_17(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_18(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_18(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_19(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_19(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_20(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_20(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_21(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_21(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_22(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_22(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_23(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_23(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_24(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_24(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_25(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_25(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_26(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_26(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_27(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_27(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_28(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_28(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_29(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_29(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_30(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_30(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_31(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_31(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_32(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_32(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_33(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_33(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_34(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_34(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_35(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_35(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_36(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_36(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_37(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_37(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_38(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_38(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_39(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_39(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_40(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_40(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_41(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_41(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_42(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_42(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_43(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_43(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_44(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_44(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_45(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_45(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_46(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_46(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_47(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_47(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_48(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_48(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_49(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_49(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_50(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_50(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_51(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_51(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_52(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_52(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_53(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_53(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_54(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_54(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_55(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_55(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_56(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_56(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_57(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_57(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_58(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_58(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_59(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_59(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_60(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_60(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_61(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_61(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_62(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_62(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_63(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_63(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Pwm_PWM_EXCLUSIVE_AREA_64(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Pwm_PWM_EXCLUSIVE_AREA_64(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}



/**********************************************************************************************************************
 * COM-Callbacks for DataReceivedEvent triggered runnables, inter-ECU client/server communication, for queued com. and for Rx timeout / Rx inv. flag (reset)
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_AntP1_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_fb66dba7_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_PEPS_AntP1_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_fb66dba7_Rx, (&Rte_Debug_PVT_PEPS_AntP1_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_fb66dba7_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_AntP1_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_76ee2645_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_PEPS_AntP1_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_76ee2645_Rx, (&Rte_Debug_PVT_PEPS_AntP1_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_76ee2645_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_AntPi_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_108c5adc_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_PEPS_AntPi_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_108c5adc_Rx, (&Rte_Debug_PVT_PEPS_AntPi_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_108c5adc_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_AntPi_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_9d04a73e_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_PEPS_AntPi_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_9d04a73e_Rx, (&Rte_Debug_PVT_PEPS_AntPi_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_9d04a73e_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_Ant_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f212143a_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_PEPS_Ant_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f212143a_Rx, (&Rte_Debug_PVT_PEPS_Ant_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f212143a_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_GainP1_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_7b701f8e_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_PEPS_GainP1_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_7b701f8e_Rx, (&Rte_Debug_PVT_PEPS_GainP1_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_7b701f8e_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_GainP2_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_36981fe9_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_PEPS_GainP2_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_36981fe9_Rx, (&Rte_Debug_PVT_PEPS_GainP2_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_36981fe9_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_GainP3_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_bb10e20b_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_PEPS_GainP3_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_bb10e20b_Rx, (&Rte_Debug_PVT_PEPS_GainP3_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_bb10e20b_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_GainP4_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_ad481f27_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_PEPS_GainP4_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_ad481f27_Rx, (&Rte_Debug_PVT_PEPS_GainP4_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_ad481f27_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_Logic_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f1a79db4_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_PEPS_Logic_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f1a79db4_Rx, (&Rte_Debug_PVT_PEPS_Logic_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f1a79db4_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_VDSI_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_e74c4cec_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_PEPS_VDSI_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_e74c4cec_Rx, (&Rte_Debug_PVT_PEPS_VDSI_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_e74c4cec_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_12VDCDC_oDebugCtrl1_SCIM_BB2_oBackbone2_052e0dec_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_12VDCDC_oDebugCtrl1_SCIM_BB2_oBackbone2_052e0dec_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_12VDCDC_oDebugCtrl1_SCIM_BB2_oBackbone2_052e0dec_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_12VLiving_oDebugCtrl1_SCIM_BB2_oBackbone2_1cf3479b_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_12VLiving_oDebugCtrl1_SCIM_BB2_oBackbone2_1cf3479b_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_12VLiving_oDebugCtrl1_SCIM_BB2_oBackbone2_1cf3479b_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_12VParked_oDebugCtrl1_SCIM_BB2_oBackbone2_2cd9a2ad_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_12VParked_oDebugCtrl1_SCIM_BB2_oBackbone2_2cd9a2ad_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_12VParked_oDebugCtrl1_SCIM_BB2_oBackbone2_2cd9a2ad_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_BHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_e91d1062_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_BHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_e91d1062_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_BHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_e91d1062_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_BHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_b20aa177_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_BHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_b20aa177_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_BHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_b20aa177_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_BHS3_oDebugCtrl1_SCIM_BB2_oBackbone2_84f83184_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_BHS3_oDebugCtrl1_SCIM_BB2_oBackbone2_84f83184_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_BHS3_oDebugCtrl1_SCIM_BB2_oBackbone2_84f83184_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_BHS4_oDebugCtrl1_SCIM_BB2_oBackbone2_0425c35d_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_BHS4_oDebugCtrl1_SCIM_BB2_oBackbone2_0425c35d_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_BHS4_oDebugCtrl1_SCIM_BB2_oBackbone2_0425c35d_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_DAIPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_2731869d_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_DAIPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_2731869d_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_DAIPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_2731869d_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_LivingPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_666b21d3_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_LivingPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_666b21d3_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_LivingPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_666b21d3_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_ParkedPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_bf982706_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_ParkedPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_bf982706_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_ParkedPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_bf982706_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WHS1_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_aec1e12e_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WHS1_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_aec1e12e_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_WHS1_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_aec1e12e_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WHS1_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_31c9eab2_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WHS1_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_31c9eab2_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_WHS1_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_31c9eab2_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_a57cfe3c_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_a57cfe3c_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_WHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_a57cfe3c_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WHS2_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_e329e149_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WHS2_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_e329e149_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_WHS2_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_e329e149_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WHS2_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_7c21ead5_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WHS2_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_7c21ead5_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_WHS2_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_7c21ead5_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_fe6b4f29_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_fe6b4f29_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_WHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_fe6b4f29_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS1_Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_055e2012_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS1_Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_055e2012_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_WLS1_Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_055e2012_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS1_Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_9a562b8e_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS1_Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_9a562b8e_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_WLS1_Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_9a562b8e_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS1_oDebugCtrl2_SCIM_BB2_oBackbone2_56f82f7d_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS1_oDebugCtrl2_SCIM_BB2_oBackbone2_56f82f7d_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_WLS1_oDebugCtrl2_SCIM_BB2_oBackbone2_56f82f7d_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS2Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_1529858b_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS2Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_1529858b_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_WLS2Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_1529858b_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS2Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_8a218e17_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS2Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_8a218e17_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_WLS2Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_8a218e17_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS2_oDebugCtrl2_SCIM_BB2_oBackbone2_0def9e68_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS2_oDebugCtrl2_SCIM_BB2_oBackbone2_0def9e68_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_WLS2_oDebugCtrl2_SCIM_BB2_oBackbone2_0def9e68_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS3Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_95d99294_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS3Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_95d99294_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_WLS3Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_95d99294_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS3Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_0ad19908_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS3Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_0ad19908_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_WLS3Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_0ad19908_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS3_oDebugCtrl2_SCIM_BB2_oBackbone2_3b1d0e9b_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS3_oDebugCtrl2_SCIM_BB2_oBackbone2_3b1d0e9b_Rx, (&Rte_Debug_PVT_SCIM_Ctrl_WLS3_oDebugCtrl2_SCIM_BB2_oBackbone2_3b1d0e9b_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoCCFW_oCCFWtoCIOM_L4_oLIN03_69083ad8_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_DiagInfoCCFW_oCCFWtoCIOM_L4_oLIN03_69083ad8_Rx, (&Rte_DiagInfoCCFW_oCCFWtoCIOM_L4_oLIN03_69083ad8_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoDLFW_oDLFWtoCIOM_L4_oLIN03_f14b1ebc_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_DiagInfoDLFW_oDLFWtoCIOM_L4_oLIN03_f14b1ebc_Rx, (&Rte_DiagInfoDLFW_oDLFWtoCIOM_L4_oLIN03_f14b1ebc_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoELCP1_oELCP1toCIOM_L4_oLIN03_e88000c8_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_DiagInfoELCP1_oELCP1toCIOM_L4_oLIN03_e88000c8_Rx, (&Rte_DiagInfoELCP1_oELCP1toCIOM_L4_oLIN03_e88000c8_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoELCP2_oELCP2toCIOM_L4_oLIN03_e304f264_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_DiagInfoELCP2_oELCP2toCIOM_L4_oLIN03_e304f264_Rx, (&Rte_DiagInfoELCP2_oELCP2toCIOM_L4_oLIN03_e304f264_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoILCP1_oILCP1toCIOM_L1_oLIN00_051a4e47_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_DiagInfoILCP1_oILCP1toCIOM_L1_oLIN00_051a4e47_Rx, (&Rte_DiagInfoILCP1_oILCP1toCIOM_L1_oLIN00_051a4e47_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_DiagInfoILCP1_oILCP1toCIOM_L1_oLIN00_051a4e47_Rx = 0;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    /* scheduled trigger for runnables: Re_LIN0_ILCP1_DiagInfoILCP1_RXCbk */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_DiagInfoILCP1_RXCbk); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoILCP2_oILCP2toCIOM_L4_oLIN03_df77e335_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_DiagInfoILCP2_oILCP2toCIOM_L4_oLIN03_df77e335_Rx, (&Rte_DiagInfoILCP2_oILCP2toCIOM_L4_oLIN03_df77e335_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoLECM2_oLECM2toCIOM_FR1_L1_oLIN00_427132ed_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_DiagInfoLECM2_oLECM2toCIOM_FR1_L1_oLIN00_427132ed_Rx, (&Rte_DiagInfoLECM2_oLECM2toCIOM_FR1_L1_oLIN00_427132ed_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoLECMBasic_oLECMBasic2CIOM_L1_oLIN00_209584a0_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_DiagInfoLECMBasic_oLECMBasic2CIOM_L1_oLIN00_209584a0_Rx, (&Rte_DiagInfoLECMBasic_oLECMBasic2CIOM_L1_oLIN00_209584a0_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoRCECS_oRCECStoCIOM_L5_oLIN04_46e60a03_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_DiagInfoRCECS_oRCECStoCIOM_L5_oLIN04_46e60a03_Rx, (&Rte_DiagInfoRCECS_oRCECStoCIOM_L5_oLIN04_46e60a03_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoTCP_oTCPtoMaster_oLIN02_23eac2a6_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_DiagInfoTCP_oTCPtoMaster_oLIN02_23eac2a6_Rx, (&Rte_DiagInfoTCP_oTCPtoMaster_oLIN02_23eac2a6_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_EngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: StartApplication_OnDataRec_RxData */
    (void)SetEvent(Default_Appl_Task, Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxData); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP1DiagInfoL1_oFSP1_Frame_L1_oLIN00_f04712d6_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP1DiagInfoL1_oFSP1_Frame_L1_oLIN00_f04712d6_Rx, (&Rte_FSP1DiagInfoL1_oFSP1_Frame_L1_oLIN00_f04712d6_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_FSP1DiagInfoL1_oFSP1_Frame_L1_oLIN00_f04712d6_Rx = 0;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    /* scheduled trigger for runnables: Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RXCbk */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RXCbk); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP1DiagInfoL2_oFSP1_Frame_L2_oLIN01_7f2a1c9e_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP1DiagInfoL2_oFSP1_Frame_L2_oLIN01_7f2a1c9e_Rx, (&Rte_FSP1DiagInfoL2_oFSP1_Frame_L2_oLIN01_7f2a1c9e_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP1DiagInfoL3_oFSP1_Frame_L3_oLIN02_b1faa76e_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP1DiagInfoL3_oFSP1_Frame_L3_oLIN02_b1faa76e_Rx, (&Rte_FSP1DiagInfoL3_oFSP1_Frame_L3_oLIN02_b1faa76e_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP1DiagInfoL4_oFSP1_Frame_L4_oLIN03_ba81064f_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP1DiagInfoL4_oFSP1_Frame_L4_oLIN03_ba81064f_Rx, (&Rte_FSP1DiagInfoL4_oFSP1_Frame_L4_oLIN03_ba81064f_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP1DiagInfoL5_oFSP1_Frame_L5_oLIN04_733c79a6_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP1DiagInfoL5_oFSP1_Frame_L5_oLIN04_733c79a6_Rx, (&Rte_FSP1DiagInfoL5_oFSP1_Frame_L5_oLIN04_733c79a6_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP1ResponseErrorL1_oFSP1_Frame_L1_oLIN00_b9e1fc6c_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP1ResponseErrorL1_oFSP1_Frame_L1_oLIN00_b9e1fc6c_Rx, (&Rte_FSP1ResponseErrorL1_oFSP1_Frame_L1_oLIN00_b9e1fc6c_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_FSP1ResponseErrorL1_oFSP1_Frame_L1_oLIN00_b9e1fc6c_Rx = 0;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    /* scheduled trigger for runnables: Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RXCbk */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RXCbk); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP1ResponseErrorL2_oFSP1_Frame_L2_oLIN01_368cf224_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP1ResponseErrorL2_oFSP1_Frame_L2_oLIN01_368cf224_Rx, (&Rte_FSP1ResponseErrorL2_oFSP1_Frame_L2_oLIN01_368cf224_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP1ResponseErrorL3_oFSP1_Frame_L3_oLIN02_f85c49d4_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP1ResponseErrorL3_oFSP1_Frame_L3_oLIN02_f85c49d4_Rx, (&Rte_FSP1ResponseErrorL3_oFSP1_Frame_L3_oLIN02_f85c49d4_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP1ResponseErrorL4_oFSP1_Frame_L4_oLIN03_f327e8f5_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP1ResponseErrorL4_oFSP1_Frame_L4_oLIN03_f327e8f5_Rx, (&Rte_FSP1ResponseErrorL4_oFSP1_Frame_L4_oLIN03_f327e8f5_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP1ResponseErrorL5_oFSP1_Frame_L5_oLIN04_3a9a971c_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP1ResponseErrorL5_oFSP1_Frame_L5_oLIN04_3a9a971c_Rx, (&Rte_FSP1ResponseErrorL5_oFSP1_Frame_L5_oLIN04_3a9a971c_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP1SwitchStatusL2_oFSP1_Frame_L2_oLIN01_68e68ffa_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP1SwitchStatusL2_oFSP1_Frame_L2_oLIN01_68e68ffa_Rx, (&Rte_FSP1SwitchStatusL2_oFSP1_Frame_L2_oLIN01_68e68ffa_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP1SwitchStatusL3_oFSP1_Frame_L3_oLIN02_a636340a_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP1SwitchStatusL3_oFSP1_Frame_L3_oLIN02_a636340a_Rx, (&Rte_FSP1SwitchStatusL3_oFSP1_Frame_L3_oLIN02_a636340a_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP1SwitchStatusL4_oFSP1_Frame_L4_oLIN03_ad4d952b_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP1SwitchStatusL4_oFSP1_Frame_L4_oLIN03_ad4d952b_Rx, (&Rte_FSP1SwitchStatusL4_oFSP1_Frame_L4_oLIN03_ad4d952b_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP1SwitchStatusL5_oFSP1_Frame_L5_oLIN04_64f0eac2_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP1SwitchStatusL5_oFSP1_Frame_L5_oLIN04_64f0eac2_Rx, (&Rte_FSP1SwitchStatusL5_oFSP1_Frame_L5_oLIN04_64f0eac2_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP2DiagInfoL1_oFSP2_Frame_L1_oLIN00_f8caf847_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP2DiagInfoL1_oFSP2_Frame_L1_oLIN00_f8caf847_Rx, (&Rte_FSP2DiagInfoL1_oFSP2_Frame_L1_oLIN00_f8caf847_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_FSP2DiagInfoL1_oFSP2_Frame_L1_oLIN00_f8caf847_Rx = 0;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    /* scheduled trigger for runnables: Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RXCbk */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RXCbk); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP2DiagInfoL2_oFSP2_Frame_L2_oLIN01_77a7f60f_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP2DiagInfoL2_oFSP2_Frame_L2_oLIN01_77a7f60f_Rx, (&Rte_FSP2DiagInfoL2_oFSP2_Frame_L2_oLIN01_77a7f60f_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP2DiagInfoL3_oFSP2_Frame_L3_oLIN02_b9774dff_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP2DiagInfoL3_oFSP2_Frame_L3_oLIN02_b9774dff_Rx, (&Rte_FSP2DiagInfoL3_oFSP2_Frame_L3_oLIN02_b9774dff_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP2ResponseErrorL1_oFSP2_Frame_L1_oLIN00_a793a78f_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP2ResponseErrorL1_oFSP2_Frame_L1_oLIN00_a793a78f_Rx, (&Rte_FSP2ResponseErrorL1_oFSP2_Frame_L1_oLIN00_a793a78f_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_FSP2ResponseErrorL1_oFSP2_Frame_L1_oLIN00_a793a78f_Rx = 0;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    /* scheduled trigger for runnables: Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RXCbk */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RXCbk); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP2ResponseErrorL2_oFSP2_Frame_L2_oLIN01_28fea9c7_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP2ResponseErrorL2_oFSP2_Frame_L2_oLIN01_28fea9c7_Rx, (&Rte_FSP2ResponseErrorL2_oFSP2_Frame_L2_oLIN01_28fea9c7_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP2ResponseErrorL3_oFSP2_Frame_L3_oLIN02_e62e1237_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP2ResponseErrorL3_oFSP2_Frame_L3_oLIN02_e62e1237_Rx, (&Rte_FSP2ResponseErrorL3_oFSP2_Frame_L3_oLIN02_e62e1237_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP2SwitchStatusL2_oFSP2_Frame_L2_oLIN01_611deb1e_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP2SwitchStatusL2_oFSP2_Frame_L2_oLIN01_611deb1e_Rx, (&Rte_FSP2SwitchStatusL2_oFSP2_Frame_L2_oLIN01_611deb1e_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP2SwitchStatusL3_oFSP2_Frame_L3_oLIN02_afcd50ee_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP2SwitchStatusL3_oFSP2_Frame_L3_oLIN02_afcd50ee_Rx, (&Rte_FSP2SwitchStatusL3_oFSP2_Frame_L3_oLIN02_afcd50ee_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP3DiagInfoL2_oFSP3_Frame_L2_oLIN01_c6f3adbf_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP3DiagInfoL2_oFSP3_Frame_L2_oLIN01_c6f3adbf_Rx, (&Rte_FSP3DiagInfoL2_oFSP3_Frame_L2_oLIN01_c6f3adbf_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP3ResponseErrorL2_oFSP3_Frame_L2_oLIN01_22d09f66_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP3ResponseErrorL2_oFSP3_Frame_L2_oLIN01_22d09f66_Rx, (&Rte_FSP3ResponseErrorL2_oFSP3_Frame_L2_oLIN01_22d09f66_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP3SwitchStatusL2_oFSP3_Frame_L2_oLIN01_664b3742_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP3SwitchStatusL2_oFSP3_Frame_L2_oLIN01_664b3742_Rx, (&Rte_FSP3SwitchStatusL2_oFSP3_Frame_L2_oLIN01_664b3742_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP4DiagInfoL2_oFSP4_Frame_L2_oLIN01_66bc232d_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP4DiagInfoL2_oFSP4_Frame_L2_oLIN01_66bc232d_Rx, (&Rte_FSP4DiagInfoL2_oFSP4_Frame_L2_oLIN01_66bc232d_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP4ResponseErrorL2_oFSP4_Frame_L2_oLIN01_141a1e01_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP4ResponseErrorL2_oFSP4_Frame_L2_oLIN01_141a1e01_Rx, (&Rte_FSP4ResponseErrorL2_oFSP4_Frame_L2_oLIN01_141a1e01_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_FSP4SwitchStatusL2_oFSP4_Frame_L2_oLIN01_72eb22d6_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_FSP4SwitchStatusL2_oFSP4_Frame_L2_oLIN01_72eb22d6_Rx, (&Rte_FSP4SwitchStatusL2_oFSP4_Frame_L2_oLIN01_72eb22d6_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_AdjustButtonStatus_oRCECStoCIOM_L5_oLIN04_52fa0034_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_AdjustButtonStatus_oRCECStoCIOM_L5_oLIN04_52fa0034_Rx, (&Rte_LIN_AdjustButtonStatus_oRCECStoCIOM_L5_oLIN04_52fa0034_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BackButtonStatus_oRCECStoCIOM_L5_oLIN04_91249976_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BackButtonStatus_oRCECStoCIOM_L5_oLIN04_91249976_Rx, (&Rte_LIN_BackButtonStatus_oRCECStoCIOM_L5_oLIN04_91249976_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BackLightDimming_Status_oELCP1toCIOM_L4_oLIN03_ff25f41e_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BackLightDimming_Status_oELCP1toCIOM_L4_oLIN03_ff25f41e_Rx, (&Rte_LIN_BackLightDimming_Status_oELCP1toCIOM_L4_oLIN03_ff25f41e_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BlackPanelMode_ButtonStat_oELCP1toCIOM_L4_oLIN03_dece2221_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BlackPanelMode_ButtonStat_oELCP1toCIOM_L4_oLIN03_dece2221_Rx, (&Rte_LIN_BlackPanelMode_ButtonStat_oELCP1toCIOM_L4_oLIN03_dece2221_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkBAudioOnOff_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_a735a09a_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkBAudioOnOff_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_a735a09a_Rx, (&Rte_LIN_BunkBAudioOnOff_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_a735a09a_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkBIntLightActvnBtn_stat_oLECMBasic2CIOM_L1_oLIN00_5d53684c_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkBIntLightActvnBtn_stat_oLECMBasic2CIOM_L1_oLIN00_5d53684c_Rx, (&Rte_LIN_BunkBIntLightActvnBtn_stat_oLECMBasic2CIOM_L1_oLIN00_5d53684c_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkBParkHeater_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_0c567d49_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkBParkHeater_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_0c567d49_Rx, (&Rte_LIN_BunkBParkHeater_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_0c567d49_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkBTempDec_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_bad7c8e9_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkBTempDec_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_bad7c8e9_Rx, (&Rte_LIN_BunkBTempDec_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_bad7c8e9_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkBTempInc_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_7521d3fe_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkBTempInc_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_7521d3fe_Rx, (&Rte_LIN_BunkBTempInc_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_7521d3fe_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkBVolumeDown_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_c7ff11cb_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkBVolumeDown_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_c7ff11cb_Rx, (&Rte_LIN_BunkBVolumeDown_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_c7ff11cb_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkBVolumeUp_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_4fd90c4b_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkBVolumeUp_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_4fd90c4b_Rx, (&Rte_LIN_BunkBVolumeUp_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_4fd90c4b_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2AudioOnOff_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_8085e670_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2AudioOnOff_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_8085e670_Rx, (&Rte_LIN_BunkH2AudioOnOff_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_8085e670_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2Fade_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_64ae31ec_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2Fade_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_64ae31ec_Rx, (&Rte_LIN_BunkH2Fade_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_64ae31ec_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2IntLightActvnBtn_sta_oLECM2toCIOM_FR1_L1_oLIN00_7ae32ea6_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2IntLightActvnBtn_sta_oLECM2toCIOM_FR1_L1_oLIN00_7ae32ea6_Rx, (&Rte_LIN_BunkH2IntLightActvnBtn_sta_oLECM2toCIOM_FR1_L1_oLIN00_7ae32ea6_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2IntLightDecBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_445fc32a_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2IntLightDecBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_445fc32a_Rx, (&Rte_LIN_BunkH2IntLightDecBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_445fc32a_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2IntLightIncBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_a3c1ab0b_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2IntLightIncBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_a3c1ab0b_Rx, (&Rte_LIN_BunkH2IntLightIncBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_a3c1ab0b_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2LockButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_d71d2857_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2LockButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_d71d2857_Rx, (&Rte_LIN_BunkH2LockButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_d71d2857_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2OnOFF_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_6a259b90_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2OnOFF_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_6a259b90_Rx, (&Rte_LIN_BunkH2OnOFF_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_6a259b90_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2ParkHeater_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_2be63ba3_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2ParkHeater_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_2be63ba3_Rx, (&Rte_LIN_BunkH2ParkHeater_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_2be63ba3_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2Phone_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_99e0fe87_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2Phone_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_99e0fe87_Rx, (&Rte_LIN_BunkH2Phone_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_99e0fe87_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2PowerWinCloseDSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_9fa2715d_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2PowerWinCloseDSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_9fa2715d_Rx, (&Rte_LIN_BunkH2PowerWinCloseDSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_9fa2715d_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2PowerWinClosePSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_281d2c26_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2PowerWinClosePSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_281d2c26_Rx, (&Rte_LIN_BunkH2PowerWinClosePSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_281d2c26_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2PowerWinOpenDSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_0df6d397_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2PowerWinOpenDSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_0df6d397_Rx, (&Rte_LIN_BunkH2PowerWinOpenDSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_0df6d397_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2PowerWinOpenPSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_ca96c47e_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2PowerWinOpenPSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_ca96c47e_Rx, (&Rte_LIN_BunkH2PowerWinOpenPSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_ca96c47e_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2RoofhatchCloseBtn_St_oLECM2toCIOM_FR1_L1_oLIN00_c184d263_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2RoofhatchCloseBtn_St_oLECM2toCIOM_FR1_L1_oLIN00_c184d263_Rx, (&Rte_LIN_BunkH2RoofhatchCloseBtn_St_oLECM2toCIOM_FR1_L1_oLIN00_c184d263_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2RoofhatchOpenBtn_Sta_oLECM2toCIOM_FR1_L1_oLIN00_dd2458bc_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2RoofhatchOpenBtn_Sta_oLECM2toCIOM_FR1_L1_oLIN00_dd2458bc_Rx, (&Rte_LIN_BunkH2RoofhatchOpenBtn_Sta_oLECM2toCIOM_FR1_L1_oLIN00_dd2458bc_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2TempDec_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_857664ae_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2TempDec_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_857664ae_Rx, (&Rte_LIN_BunkH2TempDec_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_857664ae_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2TempInc_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_61f74d27_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2TempInc_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_61f74d27_Rx, (&Rte_LIN_BunkH2TempInc_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_61f74d27_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2VolumeDown_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_e04f5721_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2VolumeDown_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_e04f5721_Rx, (&Rte_LIN_BunkH2VolumeDown_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_e04f5721_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2VolumeUp_ButtonStatu_oLECM2toCIOM_FR1_L1_oLIN00_92cefa8d_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_BunkH2VolumeUp_ButtonStatu_oLECM2toCIOM_FR1_L1_oLIN00_92cefa8d_Rx, (&Rte_LIN_BunkH2VolumeUp_ButtonStatu_oLECM2toCIOM_FR1_L1_oLIN00_92cefa8d_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_DRL_ButtonStatus_oELCP2toCIOM_L4_oLIN03_e8cb5735_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_DRL_ButtonStatus_oELCP2toCIOM_L4_oLIN03_e8cb5735_Rx, (&Rte_LIN_DRL_ButtonStatus_oELCP2toCIOM_L4_oLIN03_e8cb5735_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_DifflockDeactivationBtn_st_oDLFWtoCIOM_L4_oLIN03_7700113d_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_DifflockDeactivationBtn_st_oDLFWtoCIOM_L4_oLIN03_7700113d_Rx, (&Rte_LIN_DifflockDeactivationBtn_st_oDLFWtoCIOM_L4_oLIN03_7700113d_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_DifflockMode_Wheelstatus_oDLFWtoCIOM_L4_oLIN03_80a746c7_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_DifflockMode_Wheelstatus_oDLFWtoCIOM_L4_oLIN03_80a746c7_Rx, (&Rte_LIN_DifflockMode_Wheelstatus_oDLFWtoCIOM_L4_oLIN03_80a746c7_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_DoorAutoFuncBtn_stat_oILCP1toCIOM_L1_oLIN00_0dc2e67f_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_DoorAutoFuncBtn_stat_oILCP1toCIOM_L1_oLIN00_0dc2e67f_Rx, (&Rte_LIN_DoorAutoFuncBtn_stat_oILCP1toCIOM_L1_oLIN00_0dc2e67f_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_LIN_DoorAutoFuncBtn_stat_oILCP1toCIOM_L1_oLIN00_0dc2e67f_Rx = 0;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    /* scheduled trigger for runnables: Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RXCbk */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RXCbk); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_EscButtonMuddySiteStatus_oDLFWtoCIOM_L4_oLIN03_ac37f393_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_EscButtonMuddySiteStatus_oDLFWtoCIOM_L4_oLIN03_ac37f393_Rx, (&Rte_LIN_EscButtonMuddySiteStatus_oDLFWtoCIOM_L4_oLIN03_ac37f393_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_FCWPushButton_oCCFWtoCIOM_L4_oLIN03_242f5462_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_FCWPushButton_oCCFWtoCIOM_L4_oLIN03_242f5462_Rx, (&Rte_LIN_FCWPushButton_oCCFWtoCIOM_L4_oLIN03_242f5462_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_FogLightFront_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_e1a5bfc2_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_FogLightFront_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_e1a5bfc2_Rx, (&Rte_LIN_FogLightFront_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_e1a5bfc2_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_FogLightFront_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_ea214d6e_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_FogLightFront_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_ea214d6e_Rx, (&Rte_LIN_FogLightFront_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_ea214d6e_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_FogLightRear_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_14baadea_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_FogLightRear_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_14baadea_Rx, (&Rte_LIN_FogLightRear_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_14baadea_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_FogLightRear_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_1f3e5f46_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_FogLightRear_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_1f3e5f46_Rx, (&Rte_LIN_FogLightRear_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_1f3e5f46_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_HeadLampUpDown_SwitchStatu_oELCP2toCIOM_L4_oLIN03_ea48cea1_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_HeadLampUpDown_SwitchStatu_oELCP2toCIOM_L4_oLIN03_ea48cea1_Rx, (&Rte_LIN_HeadLampUpDown_SwitchStatu_oELCP2toCIOM_L4_oLIN03_ea48cea1_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtCenterBtnFreeWhl_s_oILCP2toCIOM_L4_oLIN03_27a7dc09_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_IntLghtCenterBtnFreeWhl_s_oILCP2toCIOM_L4_oLIN03_27a7dc09_Rx, (&Rte_LIN_IntLghtCenterBtnFreeWhl_s_oILCP2toCIOM_L4_oLIN03_27a7dc09_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtDimmingLvlDecBtn_s_oILCP1toCIOM_L1_oLIN00_0a50c243_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_IntLghtDimmingLvlDecBtn_s_oILCP1toCIOM_L1_oLIN00_0a50c243_Rx, (&Rte_LIN_IntLghtDimmingLvlDecBtn_s_oILCP1toCIOM_L1_oLIN00_0a50c243_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_LIN_IntLghtDimmingLvlDecBtn_s_oILCP1toCIOM_L1_oLIN00_0a50c243_Rx = 0;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    /* scheduled trigger for runnables: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RXCbk */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RXCbk); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtDimmingLvlFreeWhl_s_oILCP2toCIOM_L4_oLIN03_9d9afdd7_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_IntLghtDimmingLvlFreeWhl_s_oILCP2toCIOM_L4_oLIN03_9d9afdd7_Rx, (&Rte_LIN_IntLghtDimmingLvlFreeWhl_s_oILCP2toCIOM_L4_oLIN03_9d9afdd7_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtDimmingLvlIncBtn_s_oILCP1toCIOM_L1_oLIN00_34c0f447_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_IntLghtDimmingLvlIncBtn_s_oILCP1toCIOM_L1_oLIN00_34c0f447_Rx, (&Rte_LIN_IntLghtDimmingLvlIncBtn_s_oILCP1toCIOM_L1_oLIN00_34c0f447_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_LIN_IntLghtDimmingLvlIncBtn_s_oILCP1toCIOM_L1_oLIN00_34c0f447_Rx = 0;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    /* scheduled trigger for runnables: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RXCbk */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RXCbk); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtMaxModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_eeb895fc_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_IntLghtMaxModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_eeb895fc_Rx, (&Rte_LIN_IntLghtMaxModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_eeb895fc_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtModeSelrFreeWheel_s_oILCP1toCIOM_L1_oLIN00_98c2e509_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_IntLghtModeSelrFreeWheel_s_oILCP1toCIOM_L1_oLIN00_98c2e509_Rx, (&Rte_LIN_IntLghtModeSelrFreeWheel_s_oILCP1toCIOM_L1_oLIN00_98c2e509_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_LIN_IntLghtModeSelrFreeWheel_s_oILCP1toCIOM_L1_oLIN00_98c2e509_Rx = 0;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    /* scheduled trigger for runnables: Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RXCbk */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RXCbk); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtNightModeBt2_s_oILCP2toCIOM_L4_oLIN03_c1a85f21_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_IntLghtNightModeBt2_s_oILCP2toCIOM_L4_oLIN03_c1a85f21_Rx, (&Rte_LIN_IntLghtNightModeBt2_s_oILCP2toCIOM_L4_oLIN03_c1a85f21_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtRestModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_46e1f77a_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_IntLghtRestModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_46e1f77a_Rx, (&Rte_LIN_IntLghtRestModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_46e1f77a_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_LKSPushButton_oCCFWtoCIOM_L4_oLIN03_8e8e108b_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_LKSPushButton_oCCFWtoCIOM_L4_oLIN03_8e8e108b_Rx, (&Rte_LIN_LKSPushButton_oCCFWtoCIOM_L4_oLIN03_8e8e108b_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_LevelingThumbwheel_stat_oELCP1toCIOM_L4_oLIN03_cb03d712_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_LevelingThumbwheel_stat_oELCP1toCIOM_L4_oLIN03_cb03d712_Rx, (&Rte_LIN_LevelingThumbwheel_stat_oELCP1toCIOM_L4_oLIN03_cb03d712_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_LightMode_Status_1_oELCP1toCIOM_L4_oLIN03_c62c6da2_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_LightMode_Status_1_oELCP1toCIOM_L4_oLIN03_c62c6da2_Rx, (&Rte_LIN_LightMode_Status_1_oELCP1toCIOM_L4_oLIN03_c62c6da2_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_LightMode_Status_2_oELCP2toCIOM_L4_oLIN03_cda89f0e_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_LightMode_Status_2_oELCP2toCIOM_L4_oLIN03_cda89f0e_Rx, (&Rte_LIN_LightMode_Status_2_oELCP2toCIOM_L4_oLIN03_cda89f0e_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_MemButtonStatus_oRCECStoCIOM_L5_oLIN04_0975e3a6_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_MemButtonStatus_oRCECStoCIOM_L5_oLIN04_0975e3a6_Rx, (&Rte_LIN_MemButtonStatus_oRCECStoCIOM_L5_oLIN04_0975e3a6_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_Offroad_ButtonStatus_oDLFWtoCIOM_L4_oLIN03_2199360f_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_Offroad_ButtonStatus_oDLFWtoCIOM_L4_oLIN03_2199360f_Rx, (&Rte_LIN_Offroad_ButtonStatus_oDLFWtoCIOM_L4_oLIN03_2199360f_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_RearWorkProjector_BtnStat_oELCP2toCIOM_L4_oLIN03_bb9bb1f8_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_RearWorkProjector_BtnStat_oELCP2toCIOM_L4_oLIN03_bb9bb1f8_Rx, (&Rte_LIN_RearWorkProjector_BtnStat_oELCP2toCIOM_L4_oLIN03_bb9bb1f8_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_SelectButtonStatus_oRCECStoCIOM_L5_oLIN04_07d81d0f_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_SelectButtonStatus_oRCECStoCIOM_L5_oLIN04_07d81d0f_Rx, (&Rte_LIN_SelectButtonStatus_oRCECStoCIOM_L5_oLIN04_07d81d0f_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_SpeedControlModeButtonStat_oCCFWtoCIOM_L4_oLIN03_0f6013d7_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_SpeedControlModeButtonStat_oCCFWtoCIOM_L4_oLIN03_0f6013d7_Rx, (&Rte_LIN_SpeedControlModeButtonStat_oCCFWtoCIOM_L4_oLIN03_0f6013d7_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_SpeedControlModeWheelStat_oCCFWtoCIOM_L4_oLIN03_cc9e59ce_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_SpeedControlModeWheelStat_oCCFWtoCIOM_L4_oLIN03_cc9e59ce_Rx, (&Rte_LIN_SpeedControlModeWheelStat_oCCFWtoCIOM_L4_oLIN03_cc9e59ce_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_StopButtonStatus_oRCECStoCIOM_L5_oLIN04_c8659d40_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_StopButtonStatus_oRCECStoCIOM_L5_oLIN04_c8659d40_Rx, (&Rte_LIN_StopButtonStatus_oRCECStoCIOM_L5_oLIN04_c8659d40_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_TCP_ABS_ButtonStatus_oTCPtoMaster_oLIN02_7968eb64_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_TCP_ABS_ButtonStatus_oTCPtoMaster_oLIN02_7968eb64_Rx, (&Rte_LIN_TCP_ABS_ButtonStatus_oTCPtoMaster_oLIN02_7968eb64_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_TCP_ATC_ButtonStatus_oTCPtoMaster_oLIN02_dff3ccff_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_TCP_ATC_ButtonStatus_oTCPtoMaster_oLIN02_dff3ccff_Rx, (&Rte_LIN_TCP_ATC_ButtonStatus_oTCPtoMaster_oLIN02_dff3ccff_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_TCP_ESC_ButtonStatus_oTCPtoMaster_oLIN02_e4eaf9d3_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_TCP_ESC_ButtonStatus_oTCPtoMaster_oLIN02_e4eaf9d3_Rx, (&Rte_LIN_TCP_ESC_ButtonStatus_oTCPtoMaster_oLIN02_e4eaf9d3_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_TCP_KnobPostionStatus_oTCPtoMaster_oLIN02_d1058f2b_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_TCP_KnobPostionStatus_oTCPtoMaster_oLIN02_d1058f2b_Rx, (&Rte_LIN_TCP_KnobPostionStatus_oTCPtoMaster_oLIN02_d1058f2b_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_TCP_TCS_ButtonStatus_oTCPtoMaster_oLIN02_fa9712f2_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_TCP_TCS_ButtonStatus_oTCPtoMaster_oLIN02_fa9712f2_Rx, (&Rte_LIN_TCP_TCS_ButtonStatus_oTCPtoMaster_oLIN02_fa9712f2_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_WRDownButtonStatus_oRCECStoCIOM_L5_oLIN04_48a8dab2_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_WRDownButtonStatus_oRCECStoCIOM_L5_oLIN04_48a8dab2_Rx, (&Rte_LIN_WRDownButtonStatus_oRCECStoCIOM_L5_oLIN04_48a8dab2_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_LIN_WRUpButtonStatus_oRCECStoCIOM_L5_oLIN04_a2873536_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_LIN_WRUpButtonStatus_oRCECStoCIOM_L5_oLIN04_a2873536_Rx, (&Rte_LIN_WRUpButtonStatus_oRCECStoCIOM_L5_oLIN04_a2873536_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorCCFW_oCCFWtoCIOM_L4_oLIN03_38ff59f8_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_ResponseErrorCCFW_oCCFWtoCIOM_L4_oLIN03_38ff59f8_Rx, (&Rte_ResponseErrorCCFW_oCCFWtoCIOM_L4_oLIN03_38ff59f8_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorDLFW_oDLFWtoCIOM_L4_oLIN03_a0bc7d9c_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_ResponseErrorDLFW_oDLFWtoCIOM_L4_oLIN03_a0bc7d9c_Rx, (&Rte_ResponseErrorDLFW_oDLFWtoCIOM_L4_oLIN03_a0bc7d9c_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorELCP1_oELCP1toCIOM_L4_oLIN03_a9bf457f_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_ResponseErrorELCP1_oELCP1toCIOM_L4_oLIN03_a9bf457f_Rx, (&Rte_ResponseErrorELCP1_oELCP1toCIOM_L4_oLIN03_a9bf457f_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorELCP2_oELCP2toCIOM_L4_oLIN03_a23bb7d3_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_ResponseErrorELCP2_oELCP2toCIOM_L4_oLIN03_a23bb7d3_Rx, (&Rte_ResponseErrorELCP2_oELCP2toCIOM_L4_oLIN03_a23bb7d3_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorILCP1_oILCP1toCIOM_L1_oLIN00_44250bf0_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_ResponseErrorILCP1_oILCP1toCIOM_L1_oLIN00_44250bf0_Rx, (&Rte_ResponseErrorILCP1_oILCP1toCIOM_L1_oLIN00_44250bf0_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_ResponseErrorILCP1_oILCP1toCIOM_L1_oLIN00_44250bf0_Rx = 0;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    /* scheduled trigger for runnables: Re_LIN0_ILCP1_ResponseErrorILCP1_RXCbk */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_ResponseErrorILCP1_RXCbk); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorILCP2_oILCP2toCIOM_L4_oLIN03_9e48a682_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_ResponseErrorILCP2_oILCP2toCIOM_L4_oLIN03_9e48a682_Rx, (&Rte_ResponseErrorILCP2_oILCP2toCIOM_L4_oLIN03_9e48a682_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorLECM2_oLECM2toCIOM_FR1_L1_oLIN00_ed8050df_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_ResponseErrorLECM2_oLECM2toCIOM_FR1_L1_oLIN00_ed8050df_Rx, (&Rte_ResponseErrorLECM2_oLECM2toCIOM_FR1_L1_oLIN00_ed8050df_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorLECMBasic_oLECMBasic2CIOM_L1_oLIN00_9a0b7e5e_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_ResponseErrorLECMBasic_oLECMBasic2CIOM_L1_oLIN00_9a0b7e5e_Rx, (&Rte_ResponseErrorLECMBasic_oLECMBasic2CIOM_L1_oLIN00_9a0b7e5e_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorRCECS_oRCECStoCIOM_L5_oLIN04_07d94fb4_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_ResponseErrorRCECS_oRCECStoCIOM_L5_oLIN04_07d94fb4_Rx, (&Rte_ResponseErrorRCECS_oRCECStoCIOM_L5_oLIN04_07d94fb4_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorTCP_oTCPtoMaster_oLIN02_2075be52_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_ResponseErrorTCP_oTCPtoMaster_oLIN02_2075be52_Rx, (&Rte_ResponseErrorTCP_oTCPtoMaster_oLIN02_2075be52_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_LIN_AlmClkSetCurAlm_rqst_sg_oLECM2toCIOM_FR1_L1_oLIN00_05d68799_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_LIN_AlmClkSetCurAlm_rqst_sg_oLECM2toCIOM_FR1_L1_oLIN00_05d68799_Rx); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_LIN_AlmClkSetCurAlm_rqst_ID_oLECM2toCIOM_FR1_L1_oLIN00_6f7167c5_Rx, &(*(&Rte_SG_LIN_AlmClkSetCurAlm_rqst_sg_oLECM2toCIOM_FR1_L1_oLIN00_05d68799_Rx)).LIN_AlmClkSetCurAlm_rqst_ID); /* PRQA S 3453, 3321 */ /* MD_MSR_19.7, MD_Rte_Qac */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_LIN_AlmClkSetCurAlm_rqst_SetHr_oLECM2toCIOM_FR1_L1_oLIN00_a212d04d_Rx, &(*(&Rte_SG_LIN_AlmClkSetCurAlm_rqst_sg_oLECM2toCIOM_FR1_L1_oLIN00_05d68799_Rx)).LIN_AlmClkSetCurAlm_rqst_SetHr); /* PRQA S 3453, 3321 */ /* MD_MSR_19.7, MD_Rte_Qac */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_LIN_AlmClkSetCurAlm_rqst_SetMin_oLECM2toCIOM_FR1_L1_oLIN00_ef20f768_Rx, &(*(&Rte_SG_LIN_AlmClkSetCurAlm_rqst_sg_oLECM2toCIOM_FR1_L1_oLIN00_05d68799_Rx)).LIN_AlmClkSetCurAlm_rqst_SetMin); /* PRQA S 3453, 3321 */ /* MD_MSR_19.7, MD_Rte_Qac */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_LIN_AlmClkSetCurAlm_rqst_Stat_oLECM2toCIOM_FR1_L1_oLIN00_2711b94b_Rx, &(*(&Rte_SG_LIN_AlmClkSetCurAlm_rqst_sg_oLECM2toCIOM_FR1_L1_oLIN00_05d68799_Rx)).LIN_AlmClkSetCurAlm_rqst_Stat); /* PRQA S 3453, 3321 */ /* MD_MSR_19.7, MD_Rte_Qac */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_LIN_AlmClkSetCurAlm_rqst_Type_oLECM2toCIOM_FR1_L1_oLIN00_05162ab9_Rx, &(*(&Rte_SG_LIN_AlmClkSetCurAlm_rqst_sg_oLECM2toCIOM_FR1_L1_oLIN00_05d68799_Rx)).LIN_AlmClkSetCurAlm_rqst_Type); /* PRQA S 3453, 3321 */ /* MD_MSR_19.7, MD_Rte_Qac */
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SG_LIN_BunkH2PHTi_rqs_sg_oLECM2toCIOM_FR3_L1_oLIN00_0bf5fe80_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_LIN_BunkH2PHTi_rqs_sg_oLECM2toCIOM_FR3_L1_oLIN00_0bf5fe80_Rx); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_LIN_BunkH2PHTi_rqs_DurnTimeHr_oLECM2toCIOM_FR3_L1_oLIN00_5d2e274e_Rx, &(*(&Rte_SG_LIN_BunkH2PHTi_rqs_sg_oLECM2toCIOM_FR3_L1_oLIN00_0bf5fe80_Rx)).LIN_BunkH2PHTi_rqs_DurnTimeHr); /* PRQA S 3453, 3321 */ /* MD_MSR_19.7, MD_Rte_Qac */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_LIN_BunkH2PHTi_rqs_DurnTimeMin_oLECM2toCIOM_FR3_L1_oLIN00_c281bd7b_Rx, &(*(&Rte_SG_LIN_BunkH2PHTi_rqs_sg_oLECM2toCIOM_FR3_L1_oLIN00_0bf5fe80_Rx)).LIN_BunkH2PHTi_rqs_DurnTimeMin); /* PRQA S 3453, 3321 */ /* MD_MSR_19.7, MD_Rte_Qac */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_LIN_BunkH2PHTi_rqs_StartTimeHr_oLECM2toCIOM_FR3_L1_oLIN00_68595ad8_Rx, &(*(&Rte_SG_LIN_BunkH2PHTi_rqs_sg_oLECM2toCIOM_FR3_L1_oLIN00_0bf5fe80_Rx)).LIN_BunkH2PHTi_rqs_StartTimeHr); /* PRQA S 3453, 3321 */ /* MD_MSR_19.7, MD_Rte_Qac */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_LIN_BunkH2PHTi_rqs_StartTimeMin_oLECM2toCIOM_FR3_L1_oLIN00_dbd8fc77_Rx, &(*(&Rte_SG_LIN_BunkH2PHTi_rqs_sg_oLECM2toCIOM_FR3_L1_oLIN00_0bf5fe80_Rx)).LIN_BunkH2PHTi_rqs_StartTimeMin); /* PRQA S 3453, 3321 */ /* MD_MSR_19.7, MD_Rte_Qac */
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_LIN_BunkH2PHTi_rqs_Timer_cmd_oLECM2toCIOM_FR3_L1_oLIN00_f01ce601_Rx, &(*(&Rte_SG_LIN_BunkH2PHTi_rqs_sg_oLECM2toCIOM_FR3_L1_oLIN00_0bf5fe80_Rx)).LIN_BunkH2PHTi_rqs_Timer_cmd); /* PRQA S 3453, 3321 */ /* MD_MSR_19.7, MD_Rte_Qac */
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded1L1_oFSP1_Frame_L1_oLIN00_099b825d_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionNeeded1L1_oFSP1_Frame_L1_oLIN00_099b825d_Rx, (&Rte_SwitchDetectionNeeded1L1_oFSP1_Frame_L1_oLIN00_099b825d_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_SwitchDetectionNeeded1L1_oFSP1_Frame_L1_oLIN00_099b825d_Rx = 0;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    /* scheduled trigger for runnables: Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RXCbk */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RXCbk); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded1L2_oFSP1_Frame_L2_oLIN01_86f68c15_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionNeeded1L2_oFSP1_Frame_L2_oLIN01_86f68c15_Rx, (&Rte_SwitchDetectionNeeded1L2_oFSP1_Frame_L2_oLIN01_86f68c15_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded1L3_oFSP1_Frame_L3_oLIN02_482637e5_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionNeeded1L3_oFSP1_Frame_L3_oLIN02_482637e5_Rx, (&Rte_SwitchDetectionNeeded1L3_oFSP1_Frame_L3_oLIN02_482637e5_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded1L4_oFSP1_Frame_L4_oLIN03_435d96c4_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionNeeded1L4_oFSP1_Frame_L4_oLIN03_435d96c4_Rx, (&Rte_SwitchDetectionNeeded1L4_oFSP1_Frame_L4_oLIN03_435d96c4_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded1L5_oFSP1_Frame_L5_oLIN04_8ae0e92d_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionNeeded1L5_oFSP1_Frame_L5_oLIN04_8ae0e92d_Rx, (&Rte_SwitchDetectionNeeded1L5_oFSP1_Frame_L5_oLIN04_8ae0e92d_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded2L1_oFSP2_Frame_L1_oLIN00_6fec6f8a_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionNeeded2L1_oFSP2_Frame_L1_oLIN00_6fec6f8a_Rx, (&Rte_SwitchDetectionNeeded2L1_oFSP2_Frame_L1_oLIN00_6fec6f8a_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_SwitchDetectionNeeded2L1_oFSP2_Frame_L1_oLIN00_6fec6f8a_Rx = 0;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    /* scheduled trigger for runnables: Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RXCbk */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RXCbk); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded2L2_oFSP2_Frame_L2_oLIN01_e08161c2_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionNeeded2L2_oFSP2_Frame_L2_oLIN01_e08161c2_Rx, (&Rte_SwitchDetectionNeeded2L2_oFSP2_Frame_L2_oLIN01_e08161c2_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded2L3_oFSP2_Frame_L3_oLIN02_2e51da32_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionNeeded2L3_oFSP2_Frame_L3_oLIN02_2e51da32_Rx, (&Rte_SwitchDetectionNeeded2L3_oFSP2_Frame_L3_oLIN02_2e51da32_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded3L2_oFSP3_Frame_L2_oLIN01_c2ac3a8f_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionNeeded3L2_oFSP3_Frame_L2_oLIN01_c2ac3a8f_Rx, (&Rte_SwitchDetectionNeeded3L2_oFSP3_Frame_L2_oLIN01_c2ac3a8f_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded4L2_oFSP4_Frame_L2_oLIN01_2c6eba6c_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionNeeded4L2_oFSP4_Frame_L2_oLIN01_2c6eba6c_Rx, (&Rte_SwitchDetectionNeeded4L2_oFSP4_Frame_L2_oLIN01_2c6eba6c_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp1L1_oFSP1_SwitchDetResp_L1_oLIN00_e8a163d5_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionResp1L1_oFSP1_SwitchDetResp_L1_oLIN00_e8a163d5_Rx, *(&Rte_SwitchDetectionResp1L1_oFSP1_SwitchDetResp_L1_oLIN00_e8a163d5_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp1L2_oFSP1_SwitchDetResp_L2_oLIN01_02016dd3_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionResp1L2_oFSP1_SwitchDetResp_L2_oLIN01_02016dd3_Rx, *(&Rte_SwitchDetectionResp1L2_oFSP1_SwitchDetResp_L2_oLIN01_02016dd3_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp1L3_oFSP1_SwitchDetResp_L3_oLIN02_5945d426_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionResp1L3_oFSP1_SwitchDetResp_L3_oLIN02_5945d426_Rx, *(&Rte_SwitchDetectionResp1L3_oFSP1_SwitchDetResp_L3_oLIN02_5945d426_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp1L4_oFSP1_SwitchDetResp_L4_oLIN03_0c30779e_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionResp1L4_oFSP1_SwitchDetResp_L4_oLIN03_0c30779e_Rx, *(&Rte_SwitchDetectionResp1L4_oFSP1_SwitchDetResp_L4_oLIN03_0c30779e_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp1L5_oFSP1_SwitchDetResp_L5_oLIN04_50190a72_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionResp1L5_oFSP1_SwitchDetResp_L5_oLIN04_50190a72_Rx, *(&Rte_SwitchDetectionResp1L5_oFSP1_SwitchDetResp_L5_oLIN04_50190a72_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp2L1_oFSP2_SwitchDetResp_L1_oLIN00_865b6493_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionResp2L1_oFSP2_SwitchDetResp_L1_oLIN00_865b6493_Rx, *(&Rte_SwitchDetectionResp2L1_oFSP2_SwitchDetResp_L1_oLIN00_865b6493_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp2L2_oFSP2_SwitchDetResp_L2_oLIN01_6cfb6a95_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionResp2L2_oFSP2_SwitchDetResp_L2_oLIN01_6cfb6a95_Rx, *(&Rte_SwitchDetectionResp2L2_oFSP2_SwitchDetResp_L2_oLIN01_6cfb6a95_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp2L3_oFSP2_SwitchDetResp_L3_oLIN02_37bfd360_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionResp2L3_oFSP2_SwitchDetResp_L3_oLIN02_37bfd360_Rx, *(&Rte_SwitchDetectionResp2L3_oFSP2_SwitchDetResp_L3_oLIN02_37bfd360_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp3L2_oFSP3_SwitchDetResp_L2_oLIN01_ff826a68_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionResp3L2_oFSP3_SwitchDetResp_L2_oLIN01_ff826a68_Rx, *(&Rte_SwitchDetectionResp3L2_oFSP3_SwitchDetResp_L2_oLIN01_ff826a68_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */

FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp4L2_oFSP4_SwitchDetResp_L2_oLIN01_b10f6419_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  if (Rte_InitState == RTE_STATE_INIT)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_ReceiveSignal(ComConf_ComSignal_SwitchDetectionResp4L2_oFSP4_SwitchDetResp_L2_oLIN01_b10f6419_Rx, *(&Rte_SwitchDetectionResp4L2_oFSP4_SwitchDetResp_L2_oLIN01_b10f6419_Rx)); /* PRQA S 3453 */ /* MD_MSR_19.7 */
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
} /* PRQA S 6010, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCAL */


/**********************************************************************************************************************
 * COM Callbacks for Rx Timeout Notification
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_DiagInfoILCP1_oILCP1toCIOM_L1_oLIN00_051a4e47_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_DiagInfoILCP1_oILCP1toCIOM_L1_oLIN00_051a4e47_Rx = 1;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: Re_LIN0_ILCP1_DiagInfoILCP1_RxTimeout */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_DiagInfoILCP1_RxTimeout); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_FSP1DiagInfoL1_oFSP1_Frame_L1_oLIN00_f04712d6_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_FSP1DiagInfoL1_oFSP1_Frame_L1_oLIN00_f04712d6_Rx = 1;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RxTimeout */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RxTimeout); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_FSP1ResponseErrorL1_oFSP1_Frame_L1_oLIN00_b9e1fc6c_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_FSP1ResponseErrorL1_oFSP1_Frame_L1_oLIN00_b9e1fc6c_Rx = 1;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RxTimeout */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RxTimeout); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_FSP2DiagInfoL1_oFSP2_Frame_L1_oLIN00_f8caf847_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_FSP2DiagInfoL1_oFSP2_Frame_L1_oLIN00_f8caf847_Rx = 1;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RxTimeout */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RxTimeout); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_FSP2ResponseErrorL1_oFSP2_Frame_L1_oLIN00_a793a78f_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_FSP2ResponseErrorL1_oFSP2_Frame_L1_oLIN00_a793a78f_Rx = 1;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RxTimeout */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RxTimeout); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_LIN_DoorAutoFuncBtn_stat_oILCP1toCIOM_L1_oLIN00_0dc2e67f_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_LIN_DoorAutoFuncBtn_stat_oILCP1toCIOM_L1_oLIN00_0dc2e67f_Rx = 1;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RxTimeout */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RxTimeout); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_LIN_IntLghtDimmingLvlDecBtn_s_oILCP1toCIOM_L1_oLIN00_0a50c243_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_LIN_IntLghtDimmingLvlDecBtn_s_oILCP1toCIOM_L1_oLIN00_0a50c243_Rx = 1;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RxTimeout */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RxTimeout); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_LIN_IntLghtDimmingLvlIncBtn_s_oILCP1toCIOM_L1_oLIN00_34c0f447_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_LIN_IntLghtDimmingLvlIncBtn_s_oILCP1toCIOM_L1_oLIN00_34c0f447_Rx = 1;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RxTimeout */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RxTimeout); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_LIN_IntLghtModeSelrFreeWheel_s_oILCP1toCIOM_L1_oLIN00_98c2e509_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_LIN_IntLghtModeSelrFreeWheel_s_oILCP1toCIOM_L1_oLIN00_98c2e509_Rx = 1;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RxTimeout */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RxTimeout); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_ResponseErrorILCP1_oILCP1toCIOM_L1_oLIN00_44250bf0_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_ResponseErrorILCP1_oILCP1toCIOM_L1_oLIN00_44250bf0_Rx = 1;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: Re_LIN0_ILCP1_ResponseErrorILCP1_RxTimeout */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_ResponseErrorILCP1_RxTimeout); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_SwitchDetectionNeeded1L1_oFSP1_Frame_L1_oLIN00_099b825d_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_SwitchDetectionNeeded1L1_oFSP1_Frame_L1_oLIN00_099b825d_Rx = 1;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RxTimeout */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RxTimeout); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
}

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_SwitchDetectionNeeded2L1_oFSP2_Frame_L1_oLIN00_6fec6f8a_Rx(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_OsApplication_Untrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_SwitchDetectionNeeded2L1_oFSP2_Frame_L1_oLIN00_6fec6f8a_Rx = 1;
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if (Rte_InitState == RTE_STATE_INIT)
  {
    /* scheduled trigger for runnables: Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RxTimeout */
    (void)SetEvent(PvtTask, Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RxTimeout); /* PRQA S 3417 */ /* MD_Rte_Os */
  }
}


/**********************************************************************************************************************
 * RTE Schedulable entity for COM-Access from different partitions
 *********************************************************************************************************************/
FUNC(void, RTE_CODE) Rte_ComSendSignalProxyPeriodic(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  uint8 updateAction;
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_ABSInhibitRqstDenied_ABSInhibitRqstDenied != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_ABSInhibitRqstDenied_ABSInhibitRqstDenied)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_ABSInhibitRqstDenied_ABSInhibitRqstDenied;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_ABSInhibitRqstDenied_oCIOM_BB2_25P_oBackbone2_b939a8e2_Tx, (&Rte_ABSInhibitRqstDenied_oCIOM_BB2_25P_oBackbone2_b939a8e2_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_ABSInhibitRqstDenied_ABSInhibitRqstDenied = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_ABSInhibitRqstDenied_ABSInhibitRqstDenied;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_12VLivingVolt_oDebug2_SCIM_BB2_oBackbone2_74d816f4_Tx, (&Rte_Debug_PVT_SCIM_RD_12VLivingVolt_oDebug2_SCIM_BB2_oBackbone2_74d816f4_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_12VParkedVolt_oDebug2_SCIM_BB2_oBackbone2_44f2f3c2_Tx, (&Rte_Debug_PVT_SCIM_RD_12VParkedVolt_oDebug2_SCIM_BB2_oBackbone2_44f2f3c2_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI01_oDebug7_SCIM_BB2_oBackbone2_d2059597_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI01_oDebug7_SCIM_BB2_oBackbone2_d2059597_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI02_oDebug7_SCIM_BB2_oBackbone2_770dfefb_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI02_oDebug7_SCIM_BB2_oBackbone2_770dfefb_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI03_oDebug7_SCIM_BB2_oBackbone2_140a27df_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI03_oDebug7_SCIM_BB2_oBackbone2_140a27df_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI04_oDebug7_SCIM_BB2_oBackbone2_e66c2e62_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI04_oDebug7_SCIM_BB2_oBackbone2_e66c2e62_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI05_oDebug7_SCIM_BB2_oBackbone2_856bf746_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI05_oDebug7_SCIM_BB2_oBackbone2_856bf746_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI06_oDebug7_SCIM_BB2_oBackbone2_20639c2a_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI06_oDebug7_SCIM_BB2_oBackbone2_20639c2a_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI07_oDebug8_SCIM_BB2_oBackbone2_0f71ca20_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI07_oDebug8_SCIM_BB2_oBackbone2_0f71ca20_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI08_oDebug8_SCIM_BB2_oBackbone2_53cb063f_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI08_oDebug8_SCIM_BB2_oBackbone2_53cb063f_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI09_oDebug8_SCIM_BB2_oBackbone2_30ccdf1b_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI09_oDebug8_SCIM_BB2_oBackbone2_30ccdf1b_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI10_oDebug8_SCIM_BB2_oBackbone2_c1772095_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI10_oDebug8_SCIM_BB2_oBackbone2_c1772095_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI11_oDebug8_SCIM_BB2_oBackbone2_a270f9b1_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI11_oDebug8_SCIM_BB2_oBackbone2_a270f9b1_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI12_oDebug8_SCIM_BB2_oBackbone2_077892dd_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI12_oDebug8_SCIM_BB2_oBackbone2_077892dd_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI13_oDebug28_SCIM_BB2_oBackbone2_f1e56b1c_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI13_oDebug28_SCIM_BB2_oBackbone2_f1e56b1c_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI14_oDebug28_SCIM_BB2_oBackbone2_44c7c224_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI14_oDebug28_SCIM_BB2_oBackbone2_44c7c224_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI15_oDebug28_SCIM_BB2_oBackbone2_78a7212c_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI15_oDebug28_SCIM_BB2_oBackbone2_78a7212c_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI16_oDebug28_SCIM_BB2_oBackbone2_3c060434_Tx, (&Rte_Debug_PVT_SCIM_RD_ADI16_oDebug28_SCIM_BB2_oBackbone2_3c060434_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_DAI1_oDebug9_SCIM_BB2_oBackbone2_179e2272_Tx, (&Rte_Debug_PVT_SCIM_RD_DAI1_oDebug9_SCIM_BB2_oBackbone2_179e2272_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_DAI2_oDebug9_SCIM_BB2_oBackbone2_b296491e_Tx, (&Rte_Debug_PVT_SCIM_RD_DAI2_oDebug9_SCIM_BB2_oBackbone2_b296491e_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_AdiInterfaces_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_12VDCDCFault_oDebug2_SCIM_BB2_oBackbone2_a76feb3e_Tx, (&Rte_Debug_PVT_SCIM_RD_12VDCDCFault_oDebug2_SCIM_BB2_oBackbone2_a76feb3e_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_12VDCDCVolt_oDebug2_SCIM_BB2_oBackbone2_cecf5c09_Tx, (&Rte_Debug_PVT_SCIM_RD_12VDCDCVolt_oDebug2_SCIM_BB2_oBackbone2_cecf5c09_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_VBAT_oDebug2_SCIM_BB2_oBackbone2_d3887400_Tx, (&Rte_Debug_PVT_SCIM_RD_VBAT_oDebug2_SCIM_BB2_oBackbone2_d3887400_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_Do12VInterface_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS1_Fault_oDebug3_SCIM_BB2_oBackbone2_66b07d64_Tx, (&Rte_Debug_PVT_SCIM_RD_BHS1_Fault_oDebug3_SCIM_BB2_oBackbone2_66b07d64_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS1_Volt_oDebug3_SCIM_BB2_oBackbone2_8af915ef_Tx, (&Rte_Debug_PVT_SCIM_RD_BHS1_Volt_oDebug3_SCIM_BB2_oBackbone2_8af915ef_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS2_Fault_oDebug3_SCIM_BB2_oBackbone2_ed63437d_Tx, (&Rte_Debug_PVT_SCIM_RD_BHS2_Fault_oDebug3_SCIM_BB2_oBackbone2_ed63437d_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS2_Volt_oDebug3_SCIM_BB2_oBackbone2_e77fe6b5_Tx, (&Rte_Debug_PVT_SCIM_RD_BHS2_Volt_oDebug3_SCIM_BB2_oBackbone2_e77fe6b5_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS3_Fault_oDebug3_SCIM_BB2_oBackbone2_22fd54b5_Tx, (&Rte_Debug_PVT_SCIM_RD_BHS3_Fault_oDebug3_SCIM_BB2_oBackbone2_22fd54b5_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS3_Volt_oDebug3_SCIM_BB2_oBackbone2_c3fdb783_Tx, (&Rte_Debug_PVT_SCIM_RD_BHS3_Volt_oDebug3_SCIM_BB2_oBackbone2_c3fdb783_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS4_Fault_oDebug3_SCIM_BB2_oBackbone2_21b4390e_Tx, (&Rte_Debug_PVT_SCIM_RD_BHS4_Fault_oDebug3_SCIM_BB2_oBackbone2_21b4390e_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS4_Volt_oDebug3_SCIM_BB2_oBackbone2_3c720001_Tx, (&Rte_Debug_PVT_SCIM_RD_BHS4_Volt_oDebug3_SCIM_BB2_oBackbone2_3c720001_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DobhsCtrlInterface_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS1_Duty_oDebug10_SCIM_BB2_oBackbone2_e4964bec_Tx, (&Rte_Debug_PVT_SCIM_RD_WHS1_Duty_oDebug10_SCIM_BB2_oBackbone2_e4964bec_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Duty_Debug_PVT_SCIM_RD_WHS1_Duty;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS1_Fault_oDebug10_SCIM_BB2_oBackbone2_7f82e8ff_Tx, (&Rte_Debug_PVT_SCIM_RD_WHS1_Fault_oDebug10_SCIM_BB2_oBackbone2_7f82e8ff_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Fault_Debug_PVT_SCIM_RD_WHS1_Fault;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS1_Freq_oDebug10_SCIM_BB2_oBackbone2_e909035f_Tx, (&Rte_Debug_PVT_SCIM_RD_WHS1_Freq_oDebug10_SCIM_BB2_oBackbone2_e909035f_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Freq_Debug_PVT_SCIM_RD_WHS1_Freq;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS1_Volt_oDebug10_SCIM_BB2_oBackbone2_fae484a1_Tx, (&Rte_Debug_PVT_SCIM_RD_WHS1_Volt_oDebug10_SCIM_BB2_oBackbone2_fae484a1_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS1_Volt_Debug_PVT_SCIM_RD_WHS1_Volt;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS2_Duty_oDebug10_SCIM_BB2_oBackbone2_6f4575f5_Tx, (&Rte_Debug_PVT_SCIM_RD_WHS2_Duty_oDebug10_SCIM_BB2_oBackbone2_6f4575f5_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Duty_Debug_PVT_SCIM_RD_WHS2_Duty;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS2_Fault_oDebug10_SCIM_BB2_oBackbone2_1b629301_Tx, (&Rte_Debug_PVT_SCIM_RD_WHS2_Fault_oDebug10_SCIM_BB2_oBackbone2_1b629301_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Fault_Debug_PVT_SCIM_RD_WHS2_Fault;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS2_Freq_oDebug10_SCIM_BB2_oBackbone2_62da3d46_Tx, (&Rte_Debug_PVT_SCIM_RD_WHS2_Freq_oDebug10_SCIM_BB2_oBackbone2_62da3d46_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Freq_Debug_PVT_SCIM_RD_WHS2_Freq;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS2_Volt_oDebug10_SCIM_BB2_oBackbone2_7137bab8_Tx, (&Rte_Debug_PVT_SCIM_RD_WHS2_Volt_oDebug10_SCIM_BB2_oBackbone2_7137bab8_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WHS2_Volt_Debug_PVT_SCIM_RD_WHS2_Volt;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS1_Duty_oDebug11_SCIM_BB2_oBackbone2_151f9ecd_Tx, (&Rte_Debug_PVT_SCIM_RD_WLS1_Duty_oDebug11_SCIM_BB2_oBackbone2_151f9ecd_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Duty_Debug_PVT_SCIM_RD_WLS1_Duty;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS1_Fault_oDebug11_SCIM_BB2_oBackbone2_bbe8962a_Tx, (&Rte_Debug_PVT_SCIM_RD_WLS1_Fault_oDebug11_SCIM_BB2_oBackbone2_bbe8962a_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Fault_Debug_PVT_SCIM_RD_WLS1_Fault;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS1_Freq_oDebug11_SCIM_BB2_oBackbone2_1880d67e_Tx, (&Rte_Debug_PVT_SCIM_RD_WLS1_Freq_oDebug11_SCIM_BB2_oBackbone2_1880d67e_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Freq_Debug_PVT_SCIM_RD_WLS1_Freq;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS1_Volt_oDebug11_SCIM_BB2_oBackbone2_0b6d5180_Tx, (&Rte_Debug_PVT_SCIM_RD_WLS1_Volt_oDebug11_SCIM_BB2_oBackbone2_0b6d5180_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS1_Volt_Debug_PVT_SCIM_RD_WLS1_Volt;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS2_Duty_oDebug11_SCIM_BB2_oBackbone2_9ecca0d4_Tx, (&Rte_Debug_PVT_SCIM_RD_WLS2_Duty_oDebug11_SCIM_BB2_oBackbone2_9ecca0d4_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Duty_Debug_PVT_SCIM_RD_WLS2_Duty;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS2_Fault_oDebug11_SCIM_BB2_oBackbone2_df08edd4_Tx, (&Rte_Debug_PVT_SCIM_RD_WLS2_Fault_oDebug11_SCIM_BB2_oBackbone2_df08edd4_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Fault_Debug_PVT_SCIM_RD_WLS2_Fault;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS2_Freq_oDebug11_SCIM_BB2_oBackbone2_9353e867_Tx, (&Rte_Debug_PVT_SCIM_RD_WLS2_Freq_oDebug11_SCIM_BB2_oBackbone2_9353e867_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Freq_Debug_PVT_SCIM_RD_WLS2_Freq;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS2_Volt_oDebug11_SCIM_BB2_oBackbone2_80be6f99_Tx, (&Rte_Debug_PVT_SCIM_RD_WLS2_Volt_oDebug11_SCIM_BB2_oBackbone2_80be6f99_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS2_Volt_Debug_PVT_SCIM_RD_WLS2_Volt;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS3_Duty_oDebug9_SCIM_BB2_oBackbone2_c539df90_Tx, (&Rte_Debug_PVT_SCIM_RD_WLS3_Duty_oDebug9_SCIM_BB2_oBackbone2_c539df90_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Duty_Debug_PVT_SCIM_RD_WLS3_Duty;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS3_Fault_oDebug9_SCIM_BB2_oBackbone2_ee12f9c5_Tx, (&Rte_Debug_PVT_SCIM_RD_WLS3_Fault_oDebug9_SCIM_BB2_oBackbone2_ee12f9c5_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Fault_Debug_PVT_SCIM_RD_WLS3_Fault;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS3_Freq_oDebug9_SCIM_BB2_oBackbone2_371b521a_Tx, (&Rte_Debug_PVT_SCIM_RD_WLS3_Freq_oDebug9_SCIM_BB2_oBackbone2_371b521a_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Freq_Debug_PVT_SCIM_RD_WLS3_Freq;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS3_Volt_oDebug9_SCIM_BB2_oBackbone2_b604fa02_Tx, (&Rte_Debug_PVT_SCIM_RD_WLS3_Volt_oDebug9_SCIM_BB2_oBackbone2_b604fa02_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_PVTApp_DowhsDowlsInterface_Debug_PVT_SCIM_RD_WLS3_Volt_Debug_PVT_SCIM_RD_WLS3_Volt;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TP_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_PEPS_AntP1_X_oDebug22_SCIM_BB2_oBackbone2_3e4f02fb_Tx, (&Rte_Debug_PVT_PEPS_AntP1_X_oDebug22_SCIM_BB2_oBackbone2_3e4f02fb_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TP_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_PEPS_AntP1_Y_oDebug22_SCIM_BB2_oBackbone2_022fe1f3_Tx, (&Rte_Debug_PVT_PEPS_AntP1_Y_oDebug22_SCIM_BB2_oBackbone2_022fe1f3_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TP_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_PEPS_AntPi_X_oDebug22_SCIM_BB2_oBackbone2_b567e3e2_Tx, (&Rte_Debug_PVT_PEPS_AntPi_X_oDebug22_SCIM_BB2_oBackbone2_b567e3e2_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TP_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_PEPS_AntPi_Y_oDebug22_SCIM_BB2_oBackbone2_890700ea_Tx, (&Rte_Debug_PVT_PEPS_AntPi_Y_oDebug22_SCIM_BB2_oBackbone2_890700ea_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TP_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_PEPS_AntCtrl_stat_oDebug15_SCIM_BB2_oBackbone2_2877d1d6_Tx, (&Rte_Debug_PVT_PEPS_AntCtrl_stat_oDebug15_SCIM_BB2_oBackbone2_2877d1d6_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_PEPS_GainP1_stat_oDebug15_SCIM_BB2_oBackbone2_7d778ea0_Tx, (&Rte_Debug_PVT_PEPS_GainP1_stat_oDebug15_SCIM_BB2_oBackbone2_7d778ea0_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_PEPS_GainP2_stat_oDebug15_SCIM_BB2_oBackbone2_f6a4b0b9_Tx, (&Rte_Debug_PVT_PEPS_GainP2_stat_oDebug15_SCIM_BB2_oBackbone2_f6a4b0b9_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_PEPS_GainP3_stat_oDebug15_SCIM_BB2_oBackbone2_393aa771_Tx, (&Rte_Debug_PVT_PEPS_GainP3_stat_oDebug15_SCIM_BB2_oBackbone2_393aa771_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_PEPS_GainP4_stat_oDebug15_SCIM_BB2_oBackbone2_3a73caca_Tx, (&Rte_Debug_PVT_PEPS_GainP4_stat_oDebug15_SCIM_BB2_oBackbone2_3a73caca_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_PEPS_Logic_stat_oDebug15_SCIM_BB2_oBackbone2_19626c75_Tx, (&Rte_Debug_PVT_PEPS_Logic_stat_oDebug15_SCIM_BB2_oBackbone2_19626c75_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_PEPS_P1_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_6c5ea403_Tx, (&Rte_Debug_PVT_PEPS_P1_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_6c5ea403_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_PEPS_P2_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_21b6a464_Tx, (&Rte_Debug_PVT_PEPS_P2_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_21b6a464_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_PEPS_P3_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_ac3e5986_Tx, (&Rte_Debug_PVT_PEPS_P3_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_ac3e5986_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_PEPS_P4_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_ba66a4aa_Tx, (&Rte_Debug_PVT_PEPS_P4_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_ba66a4aa_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_Telegram_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_Debug_PVT_PEPS_VDSI_stat_oDebug15_SCIM_BB2_oBackbone2_cba0b8aa_Tx, (&Rte_Debug_PVT_PEPS_VDSI_stat_oDebug15_SCIM_BB2_oBackbone2_cba0b8aa_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_Telegram_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ABS_Indication_ABS_Indication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ABS_Indication_ABS_Indication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_ABS_Indication_ABS_Indication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_ABS_Indication_oMastertoTCP_oLIN02_826b948e_Tx, (&Rte_ABS_Indication_oMastertoTCP_oLIN02_826b948e_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ABS_Indication_ABS_Indication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ABS_Indication_ABS_Indication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ATC_Indication_ATC_Indication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ATC_Indication_ATC_Indication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_ATC_Indication_ATC_Indication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_ATC_Indication_oMastertoTCP_oLIN02_f0d69bff_Tx, (&Rte_ATC_Indication_oMastertoTCP_oLIN02_f0d69bff_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ATC_Indication_ATC_Indication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ATC_Indication_ATC_Indication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_DoorLock_stat_DoorLock_stat != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_DoorLock_stat_DoorLock_stat)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_DoorLock_stat_DoorLock_stat;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_DoorLock_stat_ISig_13_oCIOMtoSlaves2_FR1_L1_oLIN00_66228e20_Tx, (&Rte_DoorLock_stat_ISig_13_oCIOMtoSlaves2_FR1_L1_oLIN00_66228e20_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    (void)Com_SendSignal(ComConf_ComSignal_DoorLock_stat_ISig_4_oCIOM_BB2_06P_oBackbone2_3a170244_Tx, (&Rte_DoorLock_stat_ISig_13_oCIOMtoSlaves2_FR1_L1_oLIN00_66228e20_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    (void)Com_SendSignal(ComConf_ComSignal_DoorLock_stat_ISig_5_oCIOM_Cab_06P_oCabSubnet_61085ef5_Tx, (&Rte_DoorLock_stat_ISig_13_oCIOMtoSlaves2_FR1_L1_oLIN00_66228e20_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_DoorLock_stat_DoorLock_stat = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_DoorLock_stat_DoorLock_stat;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ESC_Indication_ESC_Indication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ESC_Indication_ESC_Indication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_ESC_Indication_ESC_Indication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_ESC_Indication_oMastertoTCP_oLIN02_e2022dfe_Tx, (&Rte_ESC_Indication_oMastertoTCP_oLIN02_e2022dfe_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ESC_Indication_ESC_Indication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_ESC_Indication_ESC_Indication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL2_FSP1IndicationCmdL2 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL2_FSP1IndicationCmdL2)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP1IndicationCmdL2_FSP1IndicationCmdL2;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_FSP1IndicationCmdL2_oFSP_1_2_Req_L2_oLIN01_635660cd_Tx, (&Rte_FSP1IndicationCmdL2_oFSP_1_2_Req_L2_oLIN01_635660cd_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL2_FSP1IndicationCmdL2 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL2_FSP1IndicationCmdL2;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL3_FSP1IndicationCmdL3 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL3_FSP1IndicationCmdL3)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP1IndicationCmdL3_FSP1IndicationCmdL3;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_FSP1IndicationCmdL3_oFSP_1_2_Req_L3_oLIN02_b7d054ce_Tx, (&Rte_FSP1IndicationCmdL3_oFSP_1_2_Req_L3_oLIN02_b7d054ce_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL3_FSP1IndicationCmdL3 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL3_FSP1IndicationCmdL3;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL4_FSP1IndicationCmdL4 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL4_FSP1IndicationCmdL4)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP1IndicationCmdL4_FSP1IndicationCmdL4;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_FSP1IndicationCmdL4_oFSP_1_2_Req_L4_oLIN03_fb0a5a36_Tx, (&Rte_FSP1IndicationCmdL4_oFSP_1_2_Req_L4_oLIN03_fb0a5a36_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL4_FSP1IndicationCmdL4 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL4_FSP1IndicationCmdL4;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL5_FSP1IndicationCmdL5 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL5_FSP1IndicationCmdL5)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP1IndicationCmdL5_FSP1IndicationCmdL5;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_FSP1IndicationCmdL5_oFSP_1_2_Req_L5_oLIN04_28e1aa2c_Tx, (&Rte_FSP1IndicationCmdL5_oFSP_1_2_Req_L5_oLIN04_28e1aa2c_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL5_FSP1IndicationCmdL5 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP1IndicationCmdL5_FSP1IndicationCmdL5;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL1_FSP2IndicationCmdL1 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL1_FSP2IndicationCmdL1)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP2IndicationCmdL1_FSP2IndicationCmdL1;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_FSP2IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_115be26b_Tx, (&Rte_FSP2IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_115be26b_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL1_FSP2IndicationCmdL1 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL1_FSP2IndicationCmdL1;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL2_FSP2IndicationCmdL2 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL2_FSP2IndicationCmdL2)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP2IndicationCmdL2_FSP2IndicationCmdL2;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_FSP2IndicationCmdL2_oFSP_1_2_Req_L2_oLIN01_b0cd7c36_Tx, (&Rte_FSP2IndicationCmdL2_oFSP_1_2_Req_L2_oLIN01_b0cd7c36_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL2_FSP2IndicationCmdL2 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL2_FSP2IndicationCmdL2;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL3_FSP2IndicationCmdL3 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL3_FSP2IndicationCmdL3)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP2IndicationCmdL3_FSP2IndicationCmdL3;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_FSP2IndicationCmdL3_oFSP_1_2_Req_L3_oLIN02_644b4835_Tx, (&Rte_FSP2IndicationCmdL3_oFSP_1_2_Req_L3_oLIN02_644b4835_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL3_FSP2IndicationCmdL3 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP2IndicationCmdL3_FSP2IndicationCmdL3;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP3IndicationCmdL2_FSP3IndicationCmdL2 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP3IndicationCmdL2_FSP3IndicationCmdL2)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP3IndicationCmdL2_FSP3IndicationCmdL2;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_FSP3IndicationCmdL2_oFSP_3_4_Req_L2_oLIN01_088233aa_Tx, (&Rte_FSP3IndicationCmdL2_oFSP_3_4_Req_L2_oLIN01_088233aa_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP3IndicationCmdL2_FSP3IndicationCmdL2 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP3IndicationCmdL2_FSP3IndicationCmdL2;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP4IndicationCmdL2_FSP4IndicationCmdL2 != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP4IndicationCmdL2_FSP4IndicationCmdL2)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_FSP4IndicationCmdL2_FSP4IndicationCmdL2;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_FSP4IndicationCmdL2_oFSP_3_4_Req_L2_oLIN01_3a4c07b4_Tx, (&Rte_FSP4IndicationCmdL2_oFSP_3_4_Req_L2_oLIN01_3a4c07b4_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP4IndicationCmdL2_FSP4IndicationCmdL2 = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_FSP4IndicationCmdL2_FSP4IndicationCmdL2;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_ACCOrCCIndication_oCIOMtoSlaves2_L4_oLIN03_9dcb84e7_Tx, (&Rte_LIN_ACCOrCCIndication_oCIOMtoSlaves2_L4_oLIN03_9dcb84e7_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ASLIndication_LIN_ASLIndication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ASLIndication_LIN_ASLIndication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_ASLIndication_LIN_ASLIndication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_ASLIndication_oCIOMtoSlaves2_L4_oLIN03_70f56c35_Tx, (&Rte_LIN_ASLIndication_oCIOMtoSlaves2_L4_oLIN03_70f56c35_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ASLIndication_LIN_ASLIndication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ASLIndication_LIN_ASLIndication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_Adjust_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_2e36f0fb_Tx, (&Rte_LIN_Adjust_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_2e36f0fb_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_LIN_AlmClkCurAlarm_stat_ID_oCIOMtoSlaves2_FR2_L1_oLIN00_19fc9ce3_Tx, &(*(&Rte_SG_LIN_AlmClkCurAlarm_stat_sg_oCIOMtoSlaves2_FR2_L1_oLIN00_ff5b96ab_Tx)).LIN_AlmClkCurAlarm_stat_ID); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_LIN_AlmClkCurAlarm_stat_SetHr_oCIOMtoSlaves2_FR2_L1_oLIN00_88ecba00_Tx, &(*(&Rte_SG_LIN_AlmClkCurAlarm_stat_sg_oCIOMtoSlaves2_FR2_L1_oLIN00_ff5b96ab_Tx)).LIN_AlmClkCurAlarm_stat_SetHr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_LIN_AlmClkCurAlarm_stat_SetMin_oCIOMtoSlaves2_FR2_L1_oLIN00_ffefc0f0_Tx, &(*(&Rte_SG_LIN_AlmClkCurAlarm_stat_sg_oCIOMtoSlaves2_FR2_L1_oLIN00_ff5b96ab_Tx)).LIN_AlmClkCurAlarm_stat_SetMin); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_LIN_AlmClkCurAlarm_stat_Stat_oCIOMtoSlaves2_FR2_L1_oLIN00_a5dbc118_Tx, &(*(&Rte_SG_LIN_AlmClkCurAlarm_stat_sg_oCIOMtoSlaves2_FR2_L1_oLIN00_ff5b96ab_Tx)).LIN_AlmClkCurAlarm_stat_Stat); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_LIN_AlmClkCurAlarm_stat_Type_oCIOMtoSlaves2_FR2_L1_oLIN00_ea57a2de_Tx, &(*(&Rte_SG_LIN_AlmClkCurAlarm_stat_sg_oCIOMtoSlaves2_FR2_L1_oLIN00_ff5b96ab_Tx)).LIN_AlmClkCurAlarm_stat_Type); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_LIN_AlmClkCurAlarm_stat_sg_oCIOMtoSlaves2_FR2_L1_oLIN00_ff5b96ab_Tx);
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AudioSystemStatus_LIN_AudioSystemStatus != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AudioSystemStatus_LIN_AudioSystemStatus)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_AudioSystemStatus_LIN_AudioSystemStatus;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_AudioSystemStatus_oCIOMtoSlaves2_FR1_L1_oLIN00_13393810_Tx, (&Rte_LIN_AudioSystemStatus_oCIOMtoSlaves2_FR1_L1_oLIN00_13393810_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AudioSystemStatus_LIN_AudioSystemStatus = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AudioSystemStatus_LIN_AudioSystemStatus;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_AudioVolumeIndicationCmd_oCIOMtoSlaves2_FR1_L1_oLIN00_e9108a0f_Tx, (&Rte_LIN_AudioVolumeIndicationCmd_oCIOMtoSlaves2_FR1_L1_oLIN00_e9108a0f_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_BTStatus_LIN_BTStatus != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_BTStatus_LIN_BTStatus)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_BTStatus_LIN_BTStatus;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_BTStatus_oCIOMtoSlaves2_FR2_L1_oLIN00_71f34a0b_Tx, (&Rte_LIN_BTStatus_oCIOMtoSlaves2_FR2_L1_oLIN00_71f34a0b_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_BTStatus_LIN_BTStatus = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_BTStatus_LIN_BTStatus;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_DaytimeRunningLight_Indica_oCIOMtoSlaves1_L4_oLIN03_f7c9701b_Tx, (&Rte_LIN_DaytimeRunningLight_Indica_oCIOMtoSlaves1_L4_oLIN03_f7c9701b_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_DifflockOnOff_Indication_oCIOMtoSlaves2_L4_oLIN03_eaa1e19e_Tx, (&Rte_LIN_DifflockOnOff_Indication_oCIOMtoSlaves2_L4_oLIN03_eaa1e19e_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_DoorAutoFuncInd_cmd_oCIOMtoSlaves1_L1_oLIN00_52fafc3c_Tx, (&Rte_LIN_DoorAutoFuncInd_cmd_oCIOMtoSlaves1_L1_oLIN00_52fafc3c_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_Down_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_c9ef6b77_Tx, (&Rte_LIN_Down_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_c9ef6b77_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_DrivingLightPlus_Indicatio_oCIOMtoSlaves1_L4_oLIN03_e75acc52_Tx, (&Rte_LIN_DrivingLightPlus_Indicatio_oCIOMtoSlaves1_L4_oLIN03_e75acc52_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_DrivingLight_Indication_oCIOMtoSlaves1_L4_oLIN03_e3d131c9_Tx, (&Rte_LIN_DrivingLight_Indication_oCIOMtoSlaves1_L4_oLIN03_e3d131c9_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_EscButtonMuddySiteDeviceIn_oCIOMtoSlaves2_L4_oLIN03_b87af696_Tx, (&Rte_LIN_EscButtonMuddySiteDeviceIn_oCIOMtoSlaves2_L4_oLIN03_b87af696_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_FCW_DeviceIndication_oCIOMtoSlaves2_L4_oLIN03_246586c3_Tx, (&Rte_LIN_FCW_DeviceIndication_oCIOMtoSlaves2_L4_oLIN03_246586c3_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_FrontFog_Indication_LIN_FrontFog_Indication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_FrontFog_Indication_LIN_FrontFog_Indication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_FrontFog_Indication_LIN_FrontFog_Indication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_FrontFog_Indication_oCIOMtoSlaves1_L4_oLIN03_890ecb12_Tx, (&Rte_LIN_FrontFog_Indication_oCIOMtoSlaves1_L4_oLIN03_890ecb12_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_FrontFog_Indication_LIN_FrontFog_Indication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_FrontFog_Indication_LIN_FrontFog_Indication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_IntLghtLvlIndScaled_cmd_oCIOMtoSlaves2_FR1_L1_oLIN00_9d28ed83_Tx, (&Rte_LIN_IntLghtLvlIndScaled_cmd_oCIOMtoSlaves2_FR1_L1_oLIN00_9d28ed83_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_LIN_IntLghtModeInd_cmd_EventFlag_oCIOMtoSlaves2_FR1_L1_oLIN00_b8366a71_Tx, &(*(&Rte_SG_LIN_IntLghtModeInd_cmd_sg_oCIOMtoSlaves2_FR1_L1_oLIN00_daaab64c_Tx)).LIN_IntLghtModeInd_cmd_EventFlag); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    (void)Com_SendSignal(ComConf_ComGroupSignal_LIN_IntLghtModeInd_cmd_IL_Mode_oCIOMtoSlaves2_FR1_L1_oLIN00_dfc63d22_Tx, &(*(&Rte_SG_LIN_IntLghtModeInd_cmd_sg_oCIOMtoSlaves2_FR1_L1_oLIN00_daaab64c_Tx)).LIN_IntLghtModeInd_cmd_IL_Mode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    (void)Com_SendSignalGroup(ComConf_ComSignalGroup_SG_LIN_IntLghtModeInd_cmd_sg_oCIOMtoSlaves2_FR1_L1_oLIN00_daaab64c_Tx);
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_IntLghtOffModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_00d309d6_Tx, (&Rte_LIN_IntLghtOffModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_00d309d6_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_IntLightMaxModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_523a53e3_Tx, (&Rte_LIN_IntLightMaxModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_523a53e3_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_IntLightNightModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_8c1fb2a2_Tx, (&Rte_LIN_IntLightNightModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_8c1fb2a2_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_IntLightRestingModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_df4802bd_Tx, (&Rte_LIN_IntLightRestingModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_df4802bd_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_LKS_DeviceIndication_oCIOMtoSlaves2_L4_oLIN03_e9d09941_Tx, (&Rte_LIN_LKS_DeviceIndication_oCIOMtoSlaves2_L4_oLIN03_e9d09941_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_M1_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_d4ecc99f_Tx, (&Rte_LIN_M1_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_d4ecc99f_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_M2_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_ecd742ec_Tx, (&Rte_LIN_M2_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_ecd742ec_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_M3_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_4deec602_Tx, (&Rte_LIN_M3_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_4deec602_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Offroad_Indication_LIN_Offroad_Indication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Offroad_Indication_LIN_Offroad_Indication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_Offroad_Indication_LIN_Offroad_Indication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_Offroad_Indication_oCIOMtoSlaves2_L4_oLIN03_f70e4ef2_Tx, (&Rte_LIN_Offroad_Indication_oCIOMtoSlaves2_L4_oLIN03_f70e4ef2_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Offroad_Indication_LIN_Offroad_Indication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Offroad_Indication_LIN_Offroad_Indication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_ParkingLight_Indication_oCIOMtoSlaves1_L4_oLIN03_de9a5a8c_Tx, (&Rte_LIN_ParkingLight_Indication_oCIOMtoSlaves1_L4_oLIN03_de9a5a8c_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_PhoneButtonIndication_cmd_oCIOMtoSlaves2_FR1_L1_oLIN00_a04041c2_Tx, (&Rte_LIN_PhoneButtonIndication_cmd_oCIOMtoSlaves2_FR1_L1_oLIN00_a04041c2_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_RearFog_Indication_LIN_RearFog_Indication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_RearFog_Indication_LIN_RearFog_Indication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_RearFog_Indication_LIN_RearFog_Indication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_RearFog_Indication_oCIOMtoSlaves1_L4_oLIN03_9af57169_Tx, (&Rte_LIN_RearFog_Indication_oCIOMtoSlaves1_L4_oLIN03_9af57169_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_RearFog_Indication_LIN_RearFog_Indication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_RearFog_Indication_LIN_RearFog_Indication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_RearWorkProjector_Indicati_oCIOMtoSlaves2_L4_oLIN03_d4496a61_Tx, (&Rte_LIN_RearWorkProjector_Indicati_oCIOMtoSlaves2_L4_oLIN03_d4496a61_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_ShortPulseMaxLength_oCIOMtoSlaves_L5_oLIN04_83fa06d3_Tx, (&Rte_LIN_ShortPulseMaxLength_oCIOMtoSlaves_L5_oLIN04_83fa06d3_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_LIN_Up_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_c6192fe4_Tx, (&Rte_LIN_Up_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_c6192fe4_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  updateAction = RTE_COM_SENDSIGNALPROXY_NOCHANGE;
  if (Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_TCS_Indication_TCS_Indication != Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_TCS_Indication_TCS_Indication)
  {
    updateAction = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdate_TestLin_TCS_Indication_TCS_Indication;
  }
  if (updateAction == RTE_COM_SENDSIGNALPROXY_SEND)
  {
    Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    (void)Com_SendSignal(ComConf_ComSignal_TCS_Indication_oMastertoTCP_oLIN02_27a40830_Tx, (&Rte_TCS_Indication_oMastertoTCP_oLIN02_27a40830_Tx)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
    Rte_OsApplication_Untrusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_TCS_Indication_TCS_Indication = Rte_OsApplication_Trusted_Core0_TxUpdateFlags.Rte_TxUpdateProxy_TestLin_TCS_Indication_TCS_Indication;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0306:  MISRA rule: 11.3
     Reason:     An optimized copy algorithm can be used for aligned data. To check if pointers are aligned, pointers need to be casted to an integer type.
     Risk:       No functional risk. Only the lower 8 bits of the address are checked, therefore all integer types are sufficient.
     Prevention: Not required.

   MD_Rte_0781:  MISRA rule: 5.6
     Reason:     The name is being used as a structure/union member as well as being a label, tag or ordinary identifier.
                 The compliance to this rule is under user's control.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects leading to the violation.

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
