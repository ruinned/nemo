/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Os
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Isr_Lcfg.c
 *   Generation Time: 2018-11-24 18:55:54
 *           Project: CBD1800194D00 - Version 1.0
 *          Delivery: CBD1800194_D01
 *      Tool Version: DaVinci Configurator (beta) 5.17.51 SP2
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Pro and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

/* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_ISR_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Isr_Lcfg.h"
#include "Os_Isr.h"

/* Os kernel module dependencies */
#include "Os_AccessCheck_Lcfg.h"
#include "Os_Application_Lcfg.h"
#include "Os_Common.h"
#include "Os_Core_Lcfg.h"
#include "Os_Counter_Lcfg.h"
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Thread.h"
#include "Os_Timer.h"
#include "Os_TimingProtection_Lcfg.h"
#include "Os_Trace_Lcfg.h"
#include "Os_XSignal_Lcfg.h"
#include "Os_XSignal.h"

/* Os hal dependencies */
#include "Os_Hal_Context_Lcfg.h"
#include "Os_Hal_Interrupt_Lcfg.h"


/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Dynamic ISR data: ADC_0_EOC */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_ADC_0_EOC_Dyn;

/*! Dynamic ISR data: ADC_1_EOC */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_ADC_1_EOC_Dyn;

/*! Dynamic ISR data: CanIsr_0_BusOff */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_0_BusOff_Dyn;

/*! Dynamic ISR data: CanIsr_0_MB00To03 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_0_MB00To03_Dyn;

/*! Dynamic ISR data: CanIsr_0_MB04To07 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_0_MB04To07_Dyn;

/*! Dynamic ISR data: CanIsr_0_MB08To11 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_0_MB08To11_Dyn;

/*! Dynamic ISR data: CanIsr_0_MB12To15 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_0_MB12To15_Dyn;

/*! Dynamic ISR data: CanIsr_0_MB16To31 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_0_MB16To31_Dyn;

/*! Dynamic ISR data: CanIsr_0_MB32To63 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_0_MB32To63_Dyn;

/*! Dynamic ISR data: CanIsr_0_MB64To95 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_0_MB64To95_Dyn;

/*! Dynamic ISR data: CanIsr_1_BusOff */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_1_BusOff_Dyn;

/*! Dynamic ISR data: CanIsr_1_MB00To03 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_1_MB00To03_Dyn;

/*! Dynamic ISR data: CanIsr_1_MB04To07 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_1_MB04To07_Dyn;

/*! Dynamic ISR data: CanIsr_1_MB08To11 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_1_MB08To11_Dyn;

/*! Dynamic ISR data: CanIsr_1_MB12To15 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_1_MB12To15_Dyn;

/*! Dynamic ISR data: CanIsr_1_MB16To31 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_1_MB16To31_Dyn;

/*! Dynamic ISR data: CanIsr_1_MB32To63 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_1_MB32To63_Dyn;

/*! Dynamic ISR data: CanIsr_1_MB64To95 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_1_MB64To95_Dyn;

/*! Dynamic ISR data: CanIsr_2_BusOff */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_2_BusOff_Dyn;

/*! Dynamic ISR data: CanIsr_2_MB00To03 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_2_MB00To03_Dyn;

/*! Dynamic ISR data: CanIsr_2_MB04To07 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_2_MB04To07_Dyn;

/*! Dynamic ISR data: CanIsr_2_MB08To11 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_2_MB08To11_Dyn;

/*! Dynamic ISR data: CanIsr_2_MB12To15 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_2_MB12To15_Dyn;

/*! Dynamic ISR data: CanIsr_2_MB16To31 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_2_MB16To31_Dyn;

/*! Dynamic ISR data: CanIsr_2_MB32To63 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_2_MB32To63_Dyn;

/*! Dynamic ISR data: CanIsr_2_MB64To95 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_2_MB64To95_Dyn;

/*! Dynamic ISR data: CanIsr_4_BusOff */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_4_BusOff_Dyn;

/*! Dynamic ISR data: CanIsr_4_MB00To03 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_4_MB00To03_Dyn;

/*! Dynamic ISR data: CanIsr_4_MB04To07 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_4_MB04To07_Dyn;

/*! Dynamic ISR data: CanIsr_4_MB08To11 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_4_MB08To11_Dyn;

/*! Dynamic ISR data: CanIsr_4_MB12To15 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_4_MB12To15_Dyn;

/*! Dynamic ISR data: CanIsr_4_MB16To31 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_4_MB16To31_Dyn;

/*! Dynamic ISR data: CanIsr_4_MB32To63 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_4_MB32To63_Dyn;

/*! Dynamic ISR data: CanIsr_4_MB64To95 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_4_MB64To95_Dyn;

/*! Dynamic ISR data: CanIsr_7_BusOff */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_7_BusOff_Dyn;

/*! Dynamic ISR data: CanIsr_7_MB00To03 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_7_MB00To03_Dyn;

/*! Dynamic ISR data: CanIsr_7_MB04To07 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_7_MB04To07_Dyn;

/*! Dynamic ISR data: CanIsr_7_MB08To11 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_7_MB08To11_Dyn;

/*! Dynamic ISR data: CanIsr_7_MB12To15 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_7_MB12To15_Dyn;

/*! Dynamic ISR data: CanIsr_7_MB16To31 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_7_MB16To31_Dyn;

/*! Dynamic ISR data: CanIsr_7_MB32To63 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_7_MB32To63_Dyn;

/*! Dynamic ISR data: CanIsr_7_MB64To95 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_7_MB64To95_Dyn;

/*! Dynamic ISR data: CounterIsr_SystemTimer */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CounterIsr_SystemTimer_Dyn;

/*! Dynamic ISR data: Gpt_PIT_0_TIMER_0_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Gpt_PIT_0_TIMER_0_ISR_Dyn;

/*! Dynamic ISR data: IRQ_LFIC_WKUP_27_28 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_IRQ_LFIC_WKUP_27_28_Dyn;

/*! Dynamic ISR data: Lin_Channel_0_ERR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Lin_Channel_0_ERR_Dyn;

/*! Dynamic ISR data: Lin_Channel_0_RXI */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Lin_Channel_0_RXI_Dyn;

/*! Dynamic ISR data: Lin_Channel_0_TXI */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Lin_Channel_0_TXI_Dyn;

/*! Dynamic ISR data: Lin_Channel_10_ERR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Lin_Channel_10_ERR_Dyn;

/*! Dynamic ISR data: Lin_Channel_10_RXI */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Lin_Channel_10_RXI_Dyn;

/*! Dynamic ISR data: Lin_Channel_10_TXI */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Lin_Channel_10_TXI_Dyn;

/*! Dynamic ISR data: Lin_Channel_1_ERR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Lin_Channel_1_ERR_Dyn;

/*! Dynamic ISR data: Lin_Channel_1_RXI */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Lin_Channel_1_RXI_Dyn;

/*! Dynamic ISR data: Lin_Channel_1_TXI */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Lin_Channel_1_TXI_Dyn;

/*! Dynamic ISR data: Lin_Channel_6_ERR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Lin_Channel_6_ERR_Dyn;

/*! Dynamic ISR data: Lin_Channel_6_RXI */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Lin_Channel_6_RXI_Dyn;

/*! Dynamic ISR data: Lin_Channel_6_TXI */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Lin_Channel_6_TXI_Dyn;

/*! Dynamic ISR data: Lin_Channel_7_ERR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Lin_Channel_7_ERR_Dyn;

/*! Dynamic ISR data: Lin_Channel_7_RXI */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Lin_Channel_7_RXI_Dyn;

/*! Dynamic ISR data: Lin_Channel_7_TXI */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_Lin_Channel_7_TXI_Dyn;

/*! Dynamic ISR data: PWM_HS_EMIOS0_Ch24_25 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_PWM_HS_EMIOS0_Ch24_25_Dyn;

/*! Dynamic ISR data: PWM_LS_EMIOS1_Ch6_7 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_PWM_LS_EMIOS1_Ch6_7_Dyn;

#define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! ISR configuration data: ADC_0_EOC */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC_0_EOC =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_ADC_0_EOC,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level3_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_ADC_0_EOC_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Trusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_ADC_0_EOC,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_ADC_0_EOC,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_ADC_0_EOC,
  /* .IsrId    = */ ADC_0_EOC
};
/*! ISR configuration data: ADC_1_EOC */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC_1_EOC =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_ADC_1_EOC,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level10_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_ADC_1_EOC_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Trusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_ADC_1_EOC,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_ADC_1_EOC,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_ADC_1_EOC,
  /* .IsrId    = */ ADC_1_EOC
};
/*! ISR configuration data: CanIsr_0_BusOff */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_BusOff =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_0_BusOff,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level8_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_0_BusOff_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_0_BusOff,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_0_BusOff,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_0_BusOff,
  /* .IsrId    = */ CanIsr_0_BusOff
};
/*! ISR configuration data: CanIsr_0_MB00To03 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_MB00To03 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_0_MB00To03,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level8_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_0_MB00To03_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_0_MB00To03,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_0_MB00To03,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_0_MB00To03,
  /* .IsrId    = */ CanIsr_0_MB00To03
};
/*! ISR configuration data: CanIsr_0_MB04To07 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_MB04To07 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_0_MB04To07,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level8_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_0_MB04To07_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_0_MB04To07,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_0_MB04To07,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_0_MB04To07,
  /* .IsrId    = */ CanIsr_0_MB04To07
};
/*! ISR configuration data: CanIsr_0_MB08To11 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_MB08To11 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_0_MB08To11,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level8_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_0_MB08To11_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_0_MB08To11,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_0_MB08To11,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_0_MB08To11,
  /* .IsrId    = */ CanIsr_0_MB08To11
};
/*! ISR configuration data: CanIsr_0_MB12To15 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_MB12To15 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_0_MB12To15,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level8_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_0_MB12To15_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_0_MB12To15,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_0_MB12To15,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_0_MB12To15,
  /* .IsrId    = */ CanIsr_0_MB12To15
};
/*! ISR configuration data: CanIsr_0_MB16To31 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_MB16To31 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_0_MB16To31,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level8_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_0_MB16To31_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_0_MB16To31,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_0_MB16To31,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_0_MB16To31,
  /* .IsrId    = */ CanIsr_0_MB16To31
};
/*! ISR configuration data: CanIsr_0_MB32To63 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_MB32To63 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_0_MB32To63,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level8_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_0_MB32To63_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_0_MB32To63,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_0_MB32To63,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_0_MB32To63,
  /* .IsrId    = */ CanIsr_0_MB32To63
};
/*! ISR configuration data: CanIsr_0_MB64To95 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_MB64To95 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_0_MB64To95,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level8_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_0_MB64To95_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_0_MB64To95,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_0_MB64To95,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_0_MB64To95,
  /* .IsrId    = */ CanIsr_0_MB64To95
};
/*! ISR configuration data: CanIsr_1_BusOff */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_BusOff =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_1_BusOff,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level4_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_1_BusOff_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_1_BusOff,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_1_BusOff,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_1_BusOff,
  /* .IsrId    = */ CanIsr_1_BusOff
};
/*! ISR configuration data: CanIsr_1_MB00To03 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_MB00To03 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_1_MB00To03,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level4_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_1_MB00To03_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_1_MB00To03,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_1_MB00To03,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_1_MB00To03,
  /* .IsrId    = */ CanIsr_1_MB00To03
};
/*! ISR configuration data: CanIsr_1_MB04To07 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_MB04To07 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_1_MB04To07,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level4_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_1_MB04To07_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_1_MB04To07,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_1_MB04To07,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_1_MB04To07,
  /* .IsrId    = */ CanIsr_1_MB04To07
};
/*! ISR configuration data: CanIsr_1_MB08To11 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_MB08To11 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_1_MB08To11,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level4_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_1_MB08To11_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_1_MB08To11,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_1_MB08To11,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_1_MB08To11,
  /* .IsrId    = */ CanIsr_1_MB08To11
};
/*! ISR configuration data: CanIsr_1_MB12To15 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_MB12To15 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_1_MB12To15,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level4_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_1_MB12To15_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_1_MB12To15,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_1_MB12To15,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_1_MB12To15,
  /* .IsrId    = */ CanIsr_1_MB12To15
};
/*! ISR configuration data: CanIsr_1_MB16To31 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_MB16To31 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_1_MB16To31,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level4_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_1_MB16To31_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_1_MB16To31,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_1_MB16To31,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_1_MB16To31,
  /* .IsrId    = */ CanIsr_1_MB16To31
};
/*! ISR configuration data: CanIsr_1_MB32To63 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_MB32To63 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_1_MB32To63,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level4_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_1_MB32To63_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_1_MB32To63,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_1_MB32To63,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_1_MB32To63,
  /* .IsrId    = */ CanIsr_1_MB32To63
};
/*! ISR configuration data: CanIsr_1_MB64To95 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_MB64To95 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_1_MB64To95,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level4_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_1_MB64To95_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_1_MB64To95,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_1_MB64To95,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_1_MB64To95,
  /* .IsrId    = */ CanIsr_1_MB64To95
};
/*! ISR configuration data: CanIsr_2_BusOff */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_BusOff =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_2_BusOff,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level9_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_2_BusOff_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_2_BusOff,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_2_BusOff,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_2_BusOff,
  /* .IsrId    = */ CanIsr_2_BusOff
};
/*! ISR configuration data: CanIsr_2_MB00To03 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_MB00To03 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_2_MB00To03,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level9_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_2_MB00To03_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_2_MB00To03,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_2_MB00To03,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_2_MB00To03,
  /* .IsrId    = */ CanIsr_2_MB00To03
};
/*! ISR configuration data: CanIsr_2_MB04To07 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_MB04To07 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_2_MB04To07,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level9_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_2_MB04To07_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_2_MB04To07,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_2_MB04To07,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_2_MB04To07,
  /* .IsrId    = */ CanIsr_2_MB04To07
};
/*! ISR configuration data: CanIsr_2_MB08To11 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_MB08To11 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_2_MB08To11,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level9_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_2_MB08To11_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_2_MB08To11,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_2_MB08To11,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_2_MB08To11,
  /* .IsrId    = */ CanIsr_2_MB08To11
};
/*! ISR configuration data: CanIsr_2_MB12To15 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_MB12To15 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_2_MB12To15,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level9_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_2_MB12To15_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_2_MB12To15,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_2_MB12To15,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_2_MB12To15,
  /* .IsrId    = */ CanIsr_2_MB12To15
};
/*! ISR configuration data: CanIsr_2_MB16To31 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_MB16To31 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_2_MB16To31,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level9_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_2_MB16To31_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_2_MB16To31,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_2_MB16To31,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_2_MB16To31,
  /* .IsrId    = */ CanIsr_2_MB16To31
};
/*! ISR configuration data: CanIsr_2_MB32To63 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_MB32To63 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_2_MB32To63,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level9_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_2_MB32To63_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_2_MB32To63,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_2_MB32To63,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_2_MB32To63,
  /* .IsrId    = */ CanIsr_2_MB32To63
};
/*! ISR configuration data: CanIsr_2_MB64To95 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_MB64To95 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_2_MB64To95,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level9_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_2_MB64To95_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_2_MB64To95,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_2_MB64To95,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_2_MB64To95,
  /* .IsrId    = */ CanIsr_2_MB64To95
};
/*! ISR configuration data: CanIsr_4_BusOff */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_BusOff =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_4_BusOff,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level5_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_4_BusOff_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_4_BusOff,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_4_BusOff,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_4_BusOff,
  /* .IsrId    = */ CanIsr_4_BusOff
};
/*! ISR configuration data: CanIsr_4_MB00To03 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_MB00To03 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_4_MB00To03,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level5_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_4_MB00To03_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_4_MB00To03,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_4_MB00To03,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_4_MB00To03,
  /* .IsrId    = */ CanIsr_4_MB00To03
};
/*! ISR configuration data: CanIsr_4_MB04To07 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_MB04To07 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_4_MB04To07,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level5_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_4_MB04To07_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_4_MB04To07,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_4_MB04To07,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_4_MB04To07,
  /* .IsrId    = */ CanIsr_4_MB04To07
};
/*! ISR configuration data: CanIsr_4_MB08To11 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_MB08To11 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_4_MB08To11,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level5_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_4_MB08To11_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_4_MB08To11,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_4_MB08To11,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_4_MB08To11,
  /* .IsrId    = */ CanIsr_4_MB08To11
};
/*! ISR configuration data: CanIsr_4_MB12To15 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_MB12To15 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_4_MB12To15,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level5_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_4_MB12To15_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_4_MB12To15,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_4_MB12To15,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_4_MB12To15,
  /* .IsrId    = */ CanIsr_4_MB12To15
};
/*! ISR configuration data: CanIsr_4_MB16To31 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_MB16To31 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_4_MB16To31,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level5_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_4_MB16To31_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_4_MB16To31,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_4_MB16To31,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_4_MB16To31,
  /* .IsrId    = */ CanIsr_4_MB16To31
};
/*! ISR configuration data: CanIsr_4_MB32To63 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_MB32To63 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_4_MB32To63,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level5_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_4_MB32To63_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_4_MB32To63,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_4_MB32To63,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_4_MB32To63,
  /* .IsrId    = */ CanIsr_4_MB32To63
};
/*! ISR configuration data: CanIsr_4_MB64To95 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_MB64To95 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_4_MB64To95,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level5_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_4_MB64To95_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_4_MB64To95,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_4_MB64To95,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_4_MB64To95,
  /* .IsrId    = */ CanIsr_4_MB64To95
};
/*! ISR configuration data: CanIsr_7_BusOff */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_BusOff =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_7_BusOff,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level6_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_7_BusOff_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_7_BusOff,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_7_BusOff,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_7_BusOff,
  /* .IsrId    = */ CanIsr_7_BusOff
};
/*! ISR configuration data: CanIsr_7_MB00To03 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_MB00To03 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_7_MB00To03,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level6_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_7_MB00To03_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_7_MB00To03,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_7_MB00To03,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_7_MB00To03,
  /* .IsrId    = */ CanIsr_7_MB00To03
};
/*! ISR configuration data: CanIsr_7_MB04To07 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_MB04To07 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_7_MB04To07,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level6_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_7_MB04To07_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_7_MB04To07,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_7_MB04To07,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_7_MB04To07,
  /* .IsrId    = */ CanIsr_7_MB04To07
};
/*! ISR configuration data: CanIsr_7_MB08To11 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_MB08To11 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_7_MB08To11,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level6_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_7_MB08To11_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_7_MB08To11,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_7_MB08To11,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_7_MB08To11,
  /* .IsrId    = */ CanIsr_7_MB08To11
};
/*! ISR configuration data: CanIsr_7_MB12To15 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_MB12To15 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_7_MB12To15,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level6_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_7_MB12To15_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_7_MB12To15,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_7_MB12To15,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_7_MB12To15,
  /* .IsrId    = */ CanIsr_7_MB12To15
};
/*! ISR configuration data: CanIsr_7_MB16To31 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_MB16To31 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_7_MB16To31,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level6_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_7_MB16To31_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_7_MB16To31,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_7_MB16To31,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_7_MB16To31,
  /* .IsrId    = */ CanIsr_7_MB16To31
};
/*! ISR configuration data: CanIsr_7_MB32To63 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_MB32To63 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_7_MB32To63,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level6_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_7_MB32To63_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_7_MB32To63,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_7_MB32To63,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_7_MB32To63,
  /* .IsrId    = */ CanIsr_7_MB32To63
};
/*! ISR configuration data: CanIsr_7_MB64To95 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_MB64To95 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_7_MB64To95,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level6_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_7_MB64To95_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_7_MB64To95,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CanIsr_7_MB64To95,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_7_MB64To95,
  /* .IsrId    = */ CanIsr_7_MB64To95
};
/*! ISR configuration data: CounterIsr_SystemTimer */
CONST(Os_TimerIsrConfigType, OS_CONST) OsCfg_Isr_CounterIsr_SystemTimer =
{
  /* .Isr     = */
  {
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CounterIsr_SystemTimer,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level14_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CounterIsr_SystemTimer_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_SystemApplication_OsCore0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CounterIsr_SystemTimer,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_CounterIsr_SystemTimer,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CounterIsr_SystemTimer,
  /* .IsrId    = */ CounterIsr_SystemTimer
},
  /* .Counter = */ OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer)
};
/*! ISR configuration data: Gpt_PIT_0_TIMER_0_ISR */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Gpt_PIT_0_TIMER_0_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Gpt_PIT_0_TIMER_0_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level2_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Gpt_PIT_0_TIMER_0_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Trusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Gpt_PIT_0_TIMER_0_ISR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Gpt_PIT_0_TIMER_0_ISR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Gpt_PIT_0_TIMER_0_ISR,
  /* .IsrId    = */ Gpt_PIT_0_TIMER_0_ISR
};
/*! ISR configuration data: IRQ_LFIC_WKUP_27_28 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_IRQ_LFIC_WKUP_27_28 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_IRQ_LFIC_WKUP_27_28,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level2_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_IRQ_LFIC_WKUP_27_28_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Trusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_IRQ_LFIC_WKUP_27_28,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_IRQ_LFIC_WKUP_27_28,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_IRQ_LFIC_WKUP_27_28,
  /* .IsrId    = */ IRQ_LFIC_WKUP_27_28
};
/*! ISR configuration data: Lin_Channel_0_ERR */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_0_ERR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Lin_Channel_0_ERR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level7_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Lin_Channel_0_ERR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Lin_Channel_0_ERR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Lin_Channel_0_ERR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Lin_Channel_0_ERR,
  /* .IsrId    = */ Lin_Channel_0_ERR
};
/*! ISR configuration data: Lin_Channel_0_RXI */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_0_RXI =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Lin_Channel_0_RXI,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level7_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Lin_Channel_0_RXI_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Lin_Channel_0_RXI,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Lin_Channel_0_RXI,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Lin_Channel_0_RXI,
  /* .IsrId    = */ Lin_Channel_0_RXI
};
/*! ISR configuration data: Lin_Channel_0_TXI */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_0_TXI =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Lin_Channel_0_TXI,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level7_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Lin_Channel_0_TXI_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Lin_Channel_0_TXI,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Lin_Channel_0_TXI,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Lin_Channel_0_TXI,
  /* .IsrId    = */ Lin_Channel_0_TXI
};
/*! ISR configuration data: Lin_Channel_10_ERR */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_10_ERR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Lin_Channel_10_ERR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level13_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Lin_Channel_10_ERR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Lin_Channel_10_ERR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Lin_Channel_10_ERR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Lin_Channel_10_ERR,
  /* .IsrId    = */ Lin_Channel_10_ERR
};
/*! ISR configuration data: Lin_Channel_10_RXI */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_10_RXI =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Lin_Channel_10_RXI,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level13_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Lin_Channel_10_RXI_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Lin_Channel_10_RXI,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Lin_Channel_10_RXI,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Lin_Channel_10_RXI,
  /* .IsrId    = */ Lin_Channel_10_RXI
};
/*! ISR configuration data: Lin_Channel_10_TXI */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_10_TXI =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Lin_Channel_10_TXI,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level13_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Lin_Channel_10_TXI_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Lin_Channel_10_TXI,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Lin_Channel_10_TXI,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Lin_Channel_10_TXI,
  /* .IsrId    = */ Lin_Channel_10_TXI
};
/*! ISR configuration data: Lin_Channel_1_ERR */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_1_ERR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Lin_Channel_1_ERR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level12_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Lin_Channel_1_ERR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Lin_Channel_1_ERR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Lin_Channel_1_ERR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Lin_Channel_1_ERR,
  /* .IsrId    = */ Lin_Channel_1_ERR
};
/*! ISR configuration data: Lin_Channel_1_RXI */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_1_RXI =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Lin_Channel_1_RXI,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level12_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Lin_Channel_1_RXI_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Lin_Channel_1_RXI,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Lin_Channel_1_RXI,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Lin_Channel_1_RXI,
  /* .IsrId    = */ Lin_Channel_1_RXI
};
/*! ISR configuration data: Lin_Channel_1_TXI */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_1_TXI =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Lin_Channel_1_TXI,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level12_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Lin_Channel_1_TXI_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Lin_Channel_1_TXI,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Lin_Channel_1_TXI,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Lin_Channel_1_TXI,
  /* .IsrId    = */ Lin_Channel_1_TXI
};
/*! ISR configuration data: Lin_Channel_6_ERR */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_6_ERR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Lin_Channel_6_ERR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level10_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Lin_Channel_6_ERR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Lin_Channel_6_ERR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Lin_Channel_6_ERR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Lin_Channel_6_ERR,
  /* .IsrId    = */ Lin_Channel_6_ERR
};
/*! ISR configuration data: Lin_Channel_6_RXI */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_6_RXI =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Lin_Channel_6_RXI,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level10_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Lin_Channel_6_RXI_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Lin_Channel_6_RXI,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Lin_Channel_6_RXI,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Lin_Channel_6_RXI,
  /* .IsrId    = */ Lin_Channel_6_RXI
};
/*! ISR configuration data: Lin_Channel_6_TXI */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_6_TXI =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Lin_Channel_6_TXI,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level10_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Lin_Channel_6_TXI_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Lin_Channel_6_TXI,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Lin_Channel_6_TXI,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Lin_Channel_6_TXI,
  /* .IsrId    = */ Lin_Channel_6_TXI
};
/*! ISR configuration data: Lin_Channel_7_ERR */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_7_ERR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Lin_Channel_7_ERR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level11_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Lin_Channel_7_ERR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Lin_Channel_7_ERR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Lin_Channel_7_ERR,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Lin_Channel_7_ERR,
  /* .IsrId    = */ Lin_Channel_7_ERR
};
/*! ISR configuration data: Lin_Channel_7_RXI */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_7_RXI =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Lin_Channel_7_RXI,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level11_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Lin_Channel_7_RXI_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Lin_Channel_7_RXI,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Lin_Channel_7_RXI,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Lin_Channel_7_RXI,
  /* .IsrId    = */ Lin_Channel_7_RXI
};
/*! ISR configuration data: Lin_Channel_7_TXI */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_7_TXI =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Lin_Channel_7_TXI,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level11_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_Lin_Channel_7_TXI_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Untrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Lin_Channel_7_TXI,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Lin_Channel_7_TXI,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_Lin_Channel_7_TXI,
  /* .IsrId    = */ Lin_Channel_7_TXI
};
/*! ISR configuration data: PWM_HS_EMIOS0_Ch24_25 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_PWM_HS_EMIOS0_Ch24_25 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_PWM_HS_EMIOS0_Ch24_25,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level1_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_PWM_HS_EMIOS0_Ch24_25_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Trusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_PWM_HS_EMIOS0_Ch24_25,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_PWM_HS_EMIOS0_Ch24_25,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_PWM_HS_EMIOS0_Ch24_25,
  /* .IsrId    = */ PWM_HS_EMIOS0_Ch24_25
};
/*! ISR configuration data: PWM_LS_EMIOS1_Ch6_7 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_PWM_LS_EMIOS1_Ch6_7 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_PWM_LS_EMIOS1_Ch6_7,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore0_Isr_Level1_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Isr_Core,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_PWM_LS_EMIOS1_Ch6_7_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Trusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_PWM_LS_EMIOS1_Ch6_7,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_PWM_LS_EMIOS1_Ch6_7,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .PreThreadHook         = */ NULL_PTR,
    /* .InitDuringStartUp     = */ FALSE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_PWM_LS_EMIOS1_Ch6_7,
  /* .IsrId    = */ PWM_LS_EMIOS1_Ch6_7
};
#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for category 2 ISRs. */
CONSTP2CONST(Os_IsrConfigType, OS_CONST, OS_CONST) OsCfg_IsrRefs[OS_ISRID_COUNT + 1] =
{
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ADC_0_EOC),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ADC_1_EOC),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_0_BusOff),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_0_MB00To03),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_0_MB04To07),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_0_MB08To11),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_0_MB12To15),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_0_MB16To31),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_0_MB32To63),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_0_MB64To95),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_1_BusOff),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_1_MB00To03),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_1_MB04To07),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_1_MB08To11),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_1_MB12To15),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_1_MB16To31),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_1_MB32To63),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_1_MB64To95),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_2_BusOff),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_2_MB00To03),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_2_MB04To07),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_2_MB08To11),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_2_MB12To15),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_2_MB16To31),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_2_MB32To63),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_2_MB64To95),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_4_BusOff),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_4_MB00To03),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_4_MB04To07),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_4_MB08To11),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_4_MB12To15),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_4_MB16To31),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_4_MB32To63),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_4_MB64To95),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_7_BusOff),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_7_MB00To03),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_7_MB04To07),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_7_MB08To11),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_7_MB12To15),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_7_MB16To31),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_7_MB32To63),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_7_MB64To95),
  OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_CounterIsr_SystemTimer),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Gpt_PIT_0_TIMER_0_ISR),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_IRQ_LFIC_WKUP_27_28),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Lin_Channel_0_ERR),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Lin_Channel_0_RXI),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Lin_Channel_0_TXI),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Lin_Channel_10_ERR),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Lin_Channel_10_RXI),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Lin_Channel_10_TXI),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Lin_Channel_1_ERR),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Lin_Channel_1_RXI),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Lin_Channel_1_TXI),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Lin_Channel_6_ERR),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Lin_Channel_6_RXI),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Lin_Channel_6_TXI),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Lin_Channel_7_ERR),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Lin_Channel_7_RXI),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Lin_Channel_7_TXI),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_PWM_HS_EMIOS0_Ch24_25),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_PWM_LS_EMIOS1_Ch6_7),
  NULL_PTR
};

#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: Os_Isr_Lcfg.c
 *********************************************************************************************************************/
