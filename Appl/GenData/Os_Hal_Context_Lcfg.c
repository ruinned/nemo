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
 *              File: Os_Hal_Context_Lcfg.c
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

#define OS_HAL_CONTEXT_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_Context_Lcfg.h"
#include "Os_Hal_Context.h"

/* Os kernel module dependencies */
#include "OsInt.h"
#include "Os_Core.h"
#include "Os_Hook_Lcfg.h"
#include "Os_Hook.h"
#include "Os_Ioc_Lcfg.h"
#include "Os_Isr_Lcfg.h"
#include "Os_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Task_Lcfg.h"
#include "Os_Task.h"

/* Os hal dependencies */
#include "Os_Hal_Core.h"


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

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL dynamic hook context data: Os_CoreInitHook_OsCore0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Os_CoreInitHook_OsCore0_Dyn;

/*! HAL dynamic hook context data: ErrorHook_OsCore0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_ErrorHook_OsCore0_Dyn;

/*! HAL dynamic hook context data: ProtectionHook_OsCore0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_ProtectionHook_OsCore0_Dyn;

/*! HAL dynamic ISR2 level context data: Level1 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level1_Dyn;

/*! HAL dynamic ISR2 level context data: Level2 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level2_Dyn;

/*! HAL dynamic ISR2 level context data: Level3 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level3_Dyn;

/*! HAL dynamic ISR2 level context data: Level4 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level4_Dyn;

/*! HAL dynamic ISR2 level context data: Level5 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level5_Dyn;

/*! HAL dynamic ISR2 level context data: Level6 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level6_Dyn;

/*! HAL dynamic ISR2 level context data: Level7 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level7_Dyn;

/*! HAL dynamic ISR2 level context data: Level8 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level8_Dyn;

/*! HAL dynamic ISR2 level context data: Level9 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level9_Dyn;

/*! HAL dynamic ISR2 level context data: Level10 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level10_Dyn;

/*! HAL dynamic ISR2 level context data: Level11 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level11_Dyn;

/*! HAL dynamic ISR2 level context data: Level12 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level12_Dyn;

/*! HAL dynamic ISR2 level context data: Level13 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level13_Dyn;

/*! HAL dynamic ISR2 level context data: Level14 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level14_Dyn;

/*! HAL dynamic task context data: Default_Appl_Task */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_Appl_Task_Dyn;

/*! HAL dynamic task context data: Default_BSW_Async_Task */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_BSW_Async_Task_Dyn;

/*! HAL dynamic task context data: Default_Init_Task */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_Init_Task_Dyn;

/*! HAL dynamic task context data: IdleTask_OsCore0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_IdleTask_OsCore0_Dyn;

/*! HAL dynamic task context data: PvtTask */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_PvtTask_Dyn;

/*! HAL dynamic task context data: StartApplication_MemoryViolation_Task */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_StartApplication_MemoryViolation_Task_Dyn;

/*! HAL dynamic task context data: StartApplication_Trusted_Task */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_StartApplication_Trusted_Task_Dyn;

/*! HAL exception context data: OsCore0 */
VAR(Os_ExceptionContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_ExceptionContext;

#define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL hook context configuration data: Os_CoreInitHook_OsCore0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Os_CoreInitHook_OsCore0 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Init_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Init_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_HookWrapperOs_CoreInitHook,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapHookReturn,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL hook context configuration data: ErrorHook_OsCore0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ErrorHook_OsCore0 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Error_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Error_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_HookWrapperStatusHook,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapHookReturn,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL hook context configuration data: ProtectionHook_OsCore0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ProtectionHook_OsCore0 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Protection_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Protection_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_HookWrapperProtectionHook,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)0,
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: ADC_0_EOC */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ADC_0_EOC =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_Adc_Adcdig_EndGroupConvUnit0,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: ADC_1_EOC */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ADC_1_EOC =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_Adc_Adcdig_EndGroupConvUnit1,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_0_BusOff */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_BusOff =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanBusOffIsr_0,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_0_MB00To03 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB00To03 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_0,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_0_MB04To07 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB04To07 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_0,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_0_MB08To11 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB08To11 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_0,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_0_MB12To15 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB12To15 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_0,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_0_MB16To31 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB16To31 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_0,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_0_MB32To63 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB32To63 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_0,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_0_MB64To95 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB64To95 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_0,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_1_BusOff */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_BusOff =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanBusOffIsr_1,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_1_MB00To03 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_MB00To03 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_1,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_1_MB04To07 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_MB04To07 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_1,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_1_MB08To11 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_MB08To11 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_1,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_1_MB12To15 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_MB12To15 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_1,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_1_MB16To31 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_MB16To31 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_1,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_1_MB32To63 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_MB32To63 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_1,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_1_MB64To95 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_MB64To95 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_1,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_2_BusOff */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_BusOff =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanBusOffIsr_2,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_2_MB00To03 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_MB00To03 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_2,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_2_MB04To07 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_MB04To07 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_2,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_2_MB08To11 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_MB08To11 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_2,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_2_MB12To15 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_MB12To15 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_2,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_2_MB16To31 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_MB16To31 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_2,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_2_MB32To63 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_MB32To63 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_2,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_2_MB64To95 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_MB64To95 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_2,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_4_BusOff */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_BusOff =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanBusOffIsr_4,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_4_MB00To03 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_MB00To03 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_4,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_4_MB04To07 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_MB04To07 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_4,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_4_MB08To11 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_MB08To11 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_4,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_4_MB12To15 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_MB12To15 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_4,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_4_MB16To31 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_MB16To31 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_4,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_4_MB32To63 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_MB32To63 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_4,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_4_MB64To95 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_MB64To95 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_4,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_7_BusOff */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_BusOff =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanBusOffIsr_7,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_7_MB00To03 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_MB00To03 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_7,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_7_MB04To07 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_MB04To07 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_7,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_7_MB08To11 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_MB08To11 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_7,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_7_MB12To15 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_MB12To15 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_7,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_7_MB16To31 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_MB16To31 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_7,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_7_MB32To63 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_MB32To63 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_7,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CanIsr_7_MB64To95 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_MB64To95 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_CanMailboxIsr_7,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: CounterIsr_SystemTimer */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CounterIsr_SystemTimer =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_Os_TimerHrtIsr,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Gpt_PIT_0_TIMER_0_ISR */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Gpt_PIT_0_TIMER_0_ISR =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_Gpt_PIT_0_TIMER_0_ISR,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: IRQ_LFIC_WKUP_27_28 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_IRQ_LFIC_WKUP_27_28 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_WKPU_EXT_IRQ_24_31_ISR,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Lin_Channel_0_ERR */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_0_ERR =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_LinIsr_0,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Lin_Channel_0_RXI */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_0_RXI =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_LinIsr_0,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Lin_Channel_0_TXI */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_0_TXI =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_LinIsr_0,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Lin_Channel_10_ERR */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_10_ERR =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_LinIsr_10,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Lin_Channel_10_RXI */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_10_RXI =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_LinIsr_10,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Lin_Channel_10_TXI */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_10_TXI =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_LinIsr_10,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Lin_Channel_1_ERR */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_1_ERR =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_LinIsr_1,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Lin_Channel_1_RXI */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_1_RXI =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_LinIsr_1,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Lin_Channel_1_TXI */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_1_TXI =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_LinIsr_1,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Lin_Channel_6_ERR */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_6_ERR =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_LinIsr_6,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Lin_Channel_6_RXI */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_6_RXI =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_LinIsr_6,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Lin_Channel_6_TXI */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_6_TXI =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_LinIsr_6,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Lin_Channel_7_ERR */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_7_ERR =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_LinIsr_7,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Lin_Channel_7_RXI */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_7_RXI =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_LinIsr_7,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: Lin_Channel_7_TXI */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_7_TXI =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_LinIsr_7,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: PWM_HS_EMIOS0_Ch24_25 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_PWM_HS_EMIOS0_Ch24_25 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_EMIOS_0_CH_24_CH_25_ISR,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL ISR2 context configuration data: PWM_LS_EMIOS1_Ch6_7 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_PWM_LS_EMIOS1_Ch6_7 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .Pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Isr_EMIOS_1_CH_6_CH_7_ISR,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapIsrEpilogue,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE),
  /* .InterruptLevel = */ (uint32)15
};

/*! HAL task context configuration data: Default_Appl_Task */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_Appl_Task =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_Default_Appl_Task_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Default_Appl_Task_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Task_Default_Appl_Task,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapTaskMissingTerminateTask,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)0
};

/*! HAL task context configuration data: Default_BSW_Async_Task */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_BSW_Async_Task =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_Default_BSW_Async_Task_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Default_BSW_Async_Task_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Task_Default_BSW_Async_Task,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapTaskMissingTerminateTask,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)0
};

/*! HAL task context configuration data: Default_Init_Task */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_Init_Task =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Task_Prio0_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Task_Prio0_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Task_Default_Init_Task,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapTaskMissingTerminateTask,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)0
};

/*! HAL task context configuration data: IdleTask_OsCore0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_IdleTask_OsCore0 =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Task_Prio6_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Task_Prio6_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Task_Os_IdleTask,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapTaskMissingTerminateTask,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE),
  /* .InterruptLevel = */ (uint32)0
};

/*! HAL task context configuration data: PvtTask */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_PvtTask =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_PvtTask_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_PvtTask_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Task_PvtTask,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapTaskMissingTerminateTask,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE),
  /* .InterruptLevel = */ (uint32)0
};

/*! HAL task context configuration data: StartApplication_MemoryViolation_Task */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_StartApplication_MemoryViolation_Task =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_StartApplication_MemoryViolation_Task_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_StartApplication_MemoryViolation_Task_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Task_StartApplication_MemoryViolation_Task,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapTaskMissingTerminateTask,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE | OS_HAL_CORE_MSR_MASK_PR),
  /* .InterruptLevel = */ (uint32)0
};

/*! HAL task context configuration data: StartApplication_Trusted_Task */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_StartApplication_Trusted_Task =
{
  {
    /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_StartApplication_Trusted_Task_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_StartApplication_Trusted_Task_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
  },
  /* .pid            = */ (uint32)0,
  /* .Entry          = */ (uint32)&Os_Task_StartApplication_Trusted_Task,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress  = */ (uint32)&Os_TrapTaskMissingTerminateTask,  /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .MachineStatus  = */ (uint32)(OS_HAL_CORE_MSR_MASK_SPE | OS_HAL_CORE_MSR_MASK_ME | OS_HAL_CORE_MSR_MASK_EE),
  /* .InterruptLevel = */ (uint32)0
};

/*! HAL kernel stack configuration data: OsCore0_Kernel */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_OsCore0_Kernel =
{
  /* .StackRegionStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Kernel_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackRegionEnd   = */ (uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Kernel_Dyn) + 1)  /* PRQA S 0306, 0489 */ /* MD_Os_Hal_0306, MD_Os_Hal_0489_GenData */
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for HAL exception context. */
CONSTP2VAR(Os_ExceptionContextType, AUTOMATIC, OS_CONST)
  OsCfg_Hal_Context_ExceptionContextRef[OS_CFG_COREPHYSICALID_COUNT + 1] =
{
  &OsCfg_Hal_Context_OsCore0_ExceptionContext,
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
 *  END OF FILE: Os_Hal_Context_Lcfg.c
 *********************************************************************************************************************/
