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
 *              File: Os_Stack_Lcfg.c
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

#define OS_STACK_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Stack_Cfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Stack.h"

/* Os kernel module dependencies */

/* Os hal dependencies */


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

#define OS_START_SEC_STACK_DEFAULT_APPL_TASK_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Task stack: Default_Appl_Task */
/* User: [Default_Appl_Task] */
OS_STACK_DECLARE(OsCfg_Stack_Default_Appl_Task_Dyn, OS_CFG_SIZE_DEFAULT_APPL_TASK_STACK);

#define OS_STOP_SEC_STACK_DEFAULT_APPL_TASK_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Task stack: Default_BSW_Async_Task */
/* User: [Default_BSW_Async_Task] */
OS_STACK_DECLARE(OsCfg_Stack_Default_BSW_Async_Task_Dyn, OS_CFG_SIZE_DEFAULT_BSW_ASYNC_TASK_STACK);

#define OS_STOP_SEC_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_ERROR_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Core error stack: OsCore0_Error */
/* User: [ErrorHook_OsCore0, OsCore0] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Error_Dyn, OS_CFG_SIZE_OSCORE0_ERROR_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_ERROR_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_INIT_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Core init stack: OsCore0_Init */
/* User: [OsCore0, Os_CoreInitHook_OsCore0] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Init_Dyn, OS_CFG_SIZE_OSCORE0_INIT_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_INIT_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* ISR core global stack: OsCore0_Isr_Core */
/* User: [CanIsr_4_MB12To15, CanIsr_1_MB32To63, CanIsr_1_MB12To15, CanIsr_0_MB04To07, ADC_0_EOC, CanIsr_0_MB08To11, CanIsr_2_MB00To03, ADC_1_EOC, CanIsr_0_MB64To95, CanIsr_2_MB16To31, Lin_Channel_7_ERR, Lin_Channel_7_TXI, CanIsr_2_MB08To11, Lin_Channel_7_RXI, CanIsr_4_MB04To07, CanIsr_2_MB12To15, IRQ_LFIC_WKUP_27_28, CanIsr_0_MB32To63, CanIsr_0_BusOff, CanIsr_7_MB00To03, CanIsr_2_BusOff, CanIsr_7_MB16To31, Lin_Channel_6_RXI, CanIsr_4_BusOff, CanIsr_4_MB32To63, CanIsr_1_MB16To31, Lin_Channel_6_ERR, Lin_Channel_6_TXI, CanIsr_7_MB08To11, CanIsr_4_MB64To95, CanIsr_7_MB12To15, CanIsr_1_MB00To03, CanIsr_0_MB00To03, CanIsr_1_MB08To11, CanIsr_7_BusOff, CanIsr_4_MB08To11, CanIsr_2_MB64To95, Gpt_PIT_0_TIMER_0_ISR, Lin_Channel_1_ERR, Lin_Channel_1_TXI, Lin_Channel_10_ERR, Lin_Channel_10_TXI, Lin_Channel_1_RXI, Lin_Channel_10_RXI, CanIsr_0_MB12To15, CounterIsr_SystemTimer, CanIsr_2_MB04To07, Lin_Channel_0_RXI, Lin_Channel_0_ERR, Lin_Channel_0_TXI, CanIsr_0_MB16To31, CanIsr_7_MB04To07, CanIsr_7_MB32To63, CanIsr_1_BusOff, CanIsr_4_MB00To03, PWM_LS_EMIOS1_Ch6_7, CanIsr_1_MB64To95, CanIsr_2_MB32To63, CanIsr_7_MB64To95, CanIsr_1_MB04To07, PWM_HS_EMIOS0_Ch24_25, CanIsr_4_MB16To31] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Isr_Core_Dyn, OS_CFG_SIZE_OSCORE0_ISR_CORE_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_KERNEL_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Core kernel stack: OsCore0_Kernel */
/* User: [OsCore0] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Kernel_Dyn, OS_CFG_SIZE_OSCORE0_KERNEL_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_KERNEL_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_PROTECTION_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Core protection stack: OsCore0_Protection */
/* User: [OsCore0, ProtectionHook_OsCore0] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Protection_Dyn, OS_CFG_SIZE_OSCORE0_PROTECTION_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_PROTECTION_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_TASK_PRIO0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore0_Task_Prio0 */
/* User: [Default_Init_Task] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Task_Prio0_Dyn, OS_CFG_SIZE_OSCORE0_TASK_PRIO0_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_TASK_PRIO6_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore0_Task_Prio6 */
/* User: [IdleTask_OsCore0] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Task_Prio6_Dyn, OS_CFG_SIZE_OSCORE0_TASK_PRIO6_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO6_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_PVTTASK_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Task stack: PvtTask */
/* User: [PvtTask] */
OS_STACK_DECLARE(OsCfg_Stack_PvtTask_Dyn, OS_CFG_SIZE_PVTTASK_STACK);

#define OS_STOP_SEC_STACK_PVTTASK_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_STARTAPPLICATION_MEMORYVIOLATION_TASK_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Task stack: StartApplication_MemoryViolation_Task */
/* User: [StartApplication_MemoryViolation_Task] */
OS_STACK_DECLARE(OsCfg_Stack_StartApplication_MemoryViolation_Task_Dyn, OS_CFG_SIZE_STARTAPPLICATION_MEMORYVIOLATION_TASK_STACK);

#define OS_STOP_SEC_STACK_STARTAPPLICATION_MEMORYVIOLATION_TASK_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_STARTAPPLICATION_TRUSTED_TASK_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Task stack: StartApplication_Trusted_Task */
/* User: [StartApplication_Trusted_Task] */
OS_STACK_DECLARE(OsCfg_Stack_StartApplication_Trusted_Task_Dyn, OS_CFG_SIZE_STARTAPPLICATION_TRUSTED_TASK_STACK);

#define OS_STOP_SEC_STACK_STARTAPPLICATION_TRUSTED_TASK_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Stack configuration data: Default_Appl_Task */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_Default_Appl_Task =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_Default_Appl_Task_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Default_Appl_Task_Dyn)
};

/*! Stack configuration data: Default_BSW_Async_Task */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_Default_BSW_Async_Task =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_Default_BSW_Async_Task_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Default_BSW_Async_Task_Dyn)
};

/*! Stack configuration data: OsCore0_Error */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Error =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Error_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Error_Dyn)
};

/*! Stack configuration data: OsCore0_Init */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Init =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Init_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Init_Dyn)
};

/*! Stack configuration data: OsCore0_Isr_Core */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Isr_Core =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn)
};

/*! Stack configuration data: OsCore0_Kernel */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Kernel =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Kernel_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Kernel_Dyn)
};

/*! Stack configuration data: OsCore0_Protection */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Protection =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Protection_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Protection_Dyn)
};

/*! Stack configuration data: OsCore0_Task_Prio0 */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Task_Prio0 =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Task_Prio0_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Task_Prio0_Dyn)
};

/*! Stack configuration data: OsCore0_Task_Prio6 */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Task_Prio6 =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Task_Prio6_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Task_Prio6_Dyn)
};

/*! Stack configuration data: PvtTask */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_PvtTask =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_PvtTask_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_PvtTask_Dyn)
};

/*! Stack configuration data: StartApplication_MemoryViolation_Task */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_StartApplication_MemoryViolation_Task =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_StartApplication_MemoryViolation_Task_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_StartApplication_MemoryViolation_Task_Dyn)
};

/*! Stack configuration data: StartApplication_Trusted_Task */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_StartApplication_Trusted_Task =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_StartApplication_Trusted_Task_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_StartApplication_Trusted_Task_Dyn)
};


#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
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
 *  END OF FILE: Os_Stack_Lcfg.c
 *********************************************************************************************************************/