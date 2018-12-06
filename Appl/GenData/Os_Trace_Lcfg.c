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
 *              File: Os_Trace_Lcfg.c
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

#define OS_TRACE_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Trace_Lcfg.h"
#include "Os_Trace.h"

/* Os kernel module dependencies */
#include "Os_Common_Types.h"

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

#define OS_START_SEC_PUBLIC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Dynamic trace data: OsCore0 */
VAR(Os_TraceCoreType, OS_VAR_NOINIT) OsCfg_Trace_OsCore0_Dyn;

/*! Dynamic trace data: Default_Appl_Task */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Default_Appl_Task_Dyn;

/*! Dynamic trace data: Default_BSW_Async_Task */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Default_BSW_Async_Task_Dyn;

/*! Dynamic trace data: Default_Init_Task */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Default_Init_Task_Dyn;

/*! Dynamic trace data: IdleTask_OsCore0 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_IdleTask_OsCore0_Dyn;

/*! Dynamic trace data: PvtTask */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_PvtTask_Dyn;

/*! Dynamic trace data: StartApplication_MemoryViolation_Task */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_StartApplication_MemoryViolation_Task_Dyn;

/*! Dynamic trace data: StartApplication_Trusted_Task */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_StartApplication_Trusted_Task_Dyn;

/*! Dynamic trace data: ADC_0_EOC */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_ADC_0_EOC_Dyn;

/*! Dynamic trace data: ADC_1_EOC */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_ADC_1_EOC_Dyn;

/*! Dynamic trace data: CanIsr_0_BusOff */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_0_BusOff_Dyn;

/*! Dynamic trace data: CanIsr_0_MB00To03 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_0_MB00To03_Dyn;

/*! Dynamic trace data: CanIsr_0_MB04To07 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_0_MB04To07_Dyn;

/*! Dynamic trace data: CanIsr_0_MB08To11 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_0_MB08To11_Dyn;

/*! Dynamic trace data: CanIsr_0_MB12To15 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_0_MB12To15_Dyn;

/*! Dynamic trace data: CanIsr_0_MB16To31 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_0_MB16To31_Dyn;

/*! Dynamic trace data: CanIsr_0_MB32To63 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_0_MB32To63_Dyn;

/*! Dynamic trace data: CanIsr_0_MB64To95 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_0_MB64To95_Dyn;

/*! Dynamic trace data: CanIsr_1_BusOff */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_1_BusOff_Dyn;

/*! Dynamic trace data: CanIsr_1_MB00To03 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_1_MB00To03_Dyn;

/*! Dynamic trace data: CanIsr_1_MB04To07 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_1_MB04To07_Dyn;

/*! Dynamic trace data: CanIsr_1_MB08To11 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_1_MB08To11_Dyn;

/*! Dynamic trace data: CanIsr_1_MB12To15 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_1_MB12To15_Dyn;

/*! Dynamic trace data: CanIsr_1_MB16To31 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_1_MB16To31_Dyn;

/*! Dynamic trace data: CanIsr_1_MB32To63 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_1_MB32To63_Dyn;

/*! Dynamic trace data: CanIsr_1_MB64To95 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_1_MB64To95_Dyn;

/*! Dynamic trace data: CanIsr_2_BusOff */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_2_BusOff_Dyn;

/*! Dynamic trace data: CanIsr_2_MB00To03 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_2_MB00To03_Dyn;

/*! Dynamic trace data: CanIsr_2_MB04To07 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_2_MB04To07_Dyn;

/*! Dynamic trace data: CanIsr_2_MB08To11 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_2_MB08To11_Dyn;

/*! Dynamic trace data: CanIsr_2_MB12To15 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_2_MB12To15_Dyn;

/*! Dynamic trace data: CanIsr_2_MB16To31 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_2_MB16To31_Dyn;

/*! Dynamic trace data: CanIsr_2_MB32To63 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_2_MB32To63_Dyn;

/*! Dynamic trace data: CanIsr_2_MB64To95 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_2_MB64To95_Dyn;

/*! Dynamic trace data: CanIsr_4_BusOff */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_4_BusOff_Dyn;

/*! Dynamic trace data: CanIsr_4_MB00To03 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_4_MB00To03_Dyn;

/*! Dynamic trace data: CanIsr_4_MB04To07 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_4_MB04To07_Dyn;

/*! Dynamic trace data: CanIsr_4_MB08To11 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_4_MB08To11_Dyn;

/*! Dynamic trace data: CanIsr_4_MB12To15 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_4_MB12To15_Dyn;

/*! Dynamic trace data: CanIsr_4_MB16To31 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_4_MB16To31_Dyn;

/*! Dynamic trace data: CanIsr_4_MB32To63 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_4_MB32To63_Dyn;

/*! Dynamic trace data: CanIsr_4_MB64To95 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_4_MB64To95_Dyn;

/*! Dynamic trace data: CanIsr_7_BusOff */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_7_BusOff_Dyn;

/*! Dynamic trace data: CanIsr_7_MB00To03 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_7_MB00To03_Dyn;

/*! Dynamic trace data: CanIsr_7_MB04To07 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_7_MB04To07_Dyn;

/*! Dynamic trace data: CanIsr_7_MB08To11 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_7_MB08To11_Dyn;

/*! Dynamic trace data: CanIsr_7_MB12To15 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_7_MB12To15_Dyn;

/*! Dynamic trace data: CanIsr_7_MB16To31 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_7_MB16To31_Dyn;

/*! Dynamic trace data: CanIsr_7_MB32To63 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_7_MB32To63_Dyn;

/*! Dynamic trace data: CanIsr_7_MB64To95 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_7_MB64To95_Dyn;

/*! Dynamic trace data: CounterIsr_SystemTimer */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CounterIsr_SystemTimer_Dyn;

/*! Dynamic trace data: Gpt_PIT_0_TIMER_0_ISR */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Gpt_PIT_0_TIMER_0_ISR_Dyn;

/*! Dynamic trace data: IRQ_LFIC_WKUP_27_28 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_IRQ_LFIC_WKUP_27_28_Dyn;

/*! Dynamic trace data: Lin_Channel_0_ERR */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Lin_Channel_0_ERR_Dyn;

/*! Dynamic trace data: Lin_Channel_0_RXI */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Lin_Channel_0_RXI_Dyn;

/*! Dynamic trace data: Lin_Channel_0_TXI */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Lin_Channel_0_TXI_Dyn;

/*! Dynamic trace data: Lin_Channel_10_ERR */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Lin_Channel_10_ERR_Dyn;

/*! Dynamic trace data: Lin_Channel_10_RXI */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Lin_Channel_10_RXI_Dyn;

/*! Dynamic trace data: Lin_Channel_10_TXI */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Lin_Channel_10_TXI_Dyn;

/*! Dynamic trace data: Lin_Channel_1_ERR */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Lin_Channel_1_ERR_Dyn;

/*! Dynamic trace data: Lin_Channel_1_RXI */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Lin_Channel_1_RXI_Dyn;

/*! Dynamic trace data: Lin_Channel_1_TXI */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Lin_Channel_1_TXI_Dyn;

/*! Dynamic trace data: Lin_Channel_6_ERR */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Lin_Channel_6_ERR_Dyn;

/*! Dynamic trace data: Lin_Channel_6_RXI */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Lin_Channel_6_RXI_Dyn;

/*! Dynamic trace data: Lin_Channel_6_TXI */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Lin_Channel_6_TXI_Dyn;

/*! Dynamic trace data: Lin_Channel_7_ERR */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Lin_Channel_7_ERR_Dyn;

/*! Dynamic trace data: Lin_Channel_7_RXI */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Lin_Channel_7_RXI_Dyn;

/*! Dynamic trace data: Lin_Channel_7_TXI */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Lin_Channel_7_TXI_Dyn;

/*! Dynamic trace data: PWM_HS_EMIOS0_Ch24_25 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_PWM_HS_EMIOS0_Ch24_25_Dyn;

/*! Dynamic trace data: PWM_LS_EMIOS1_Ch6_7 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_PWM_LS_EMIOS1_Ch6_7_Dyn;

#define OS_STOP_SEC_PUBLIC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Trace configuration data: Default_Appl_Task */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Default_Appl_Task =
{
  /* .Dyn  = */ &OsCfg_Trace_Default_Appl_Task_Dyn,
  /* .Id   = */ Os_TraceId_Default_Appl_Task,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: Default_BSW_Async_Task */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Default_BSW_Async_Task =
{
  /* .Dyn  = */ &OsCfg_Trace_Default_BSW_Async_Task_Dyn,
  /* .Id   = */ Os_TraceId_Default_BSW_Async_Task,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: Default_Init_Task */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Default_Init_Task =
{
  /* .Dyn  = */ &OsCfg_Trace_Default_Init_Task_Dyn,
  /* .Id   = */ Os_TraceId_Default_Init_Task,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: IdleTask_OsCore0 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_IdleTask_OsCore0 =
{
  /* .Dyn  = */ &OsCfg_Trace_IdleTask_OsCore0_Dyn,
  /* .Id   = */ Os_TraceId_IdleTask_OsCore0,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: PvtTask */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_PvtTask =
{
  /* .Dyn  = */ &OsCfg_Trace_PvtTask_Dyn,
  /* .Id   = */ Os_TraceId_PvtTask,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: StartApplication_MemoryViolation_Task */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_StartApplication_MemoryViolation_Task =
{
  /* .Dyn  = */ &OsCfg_Trace_StartApplication_MemoryViolation_Task_Dyn,
  /* .Id   = */ Os_TraceId_StartApplication_MemoryViolation_Task,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: StartApplication_Trusted_Task */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_StartApplication_Trusted_Task =
{
  /* .Dyn  = */ &OsCfg_Trace_StartApplication_Trusted_Task_Dyn,
  /* .Id   = */ Os_TraceId_StartApplication_Trusted_Task,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: ADC_0_EOC */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_ADC_0_EOC =
{
  /* .Dyn  = */ &OsCfg_Trace_ADC_0_EOC_Dyn,
  /* .Id   = */ Os_TraceId_ADC_0_EOC,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: ADC_1_EOC */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_ADC_1_EOC =
{
  /* .Dyn  = */ &OsCfg_Trace_ADC_1_EOC_Dyn,
  /* .Id   = */ Os_TraceId_ADC_1_EOC,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_0_BusOff */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_0_BusOff =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_0_BusOff_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_0_BusOff,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_0_MB00To03 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_0_MB00To03 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_0_MB00To03_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_0_MB00To03,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_0_MB04To07 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_0_MB04To07 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_0_MB04To07_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_0_MB04To07,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_0_MB08To11 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_0_MB08To11 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_0_MB08To11_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_0_MB08To11,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_0_MB12To15 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_0_MB12To15 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_0_MB12To15_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_0_MB12To15,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_0_MB16To31 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_0_MB16To31 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_0_MB16To31_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_0_MB16To31,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_0_MB32To63 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_0_MB32To63 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_0_MB32To63_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_0_MB32To63,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_0_MB64To95 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_0_MB64To95 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_0_MB64To95_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_0_MB64To95,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_1_BusOff */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_1_BusOff =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_1_BusOff_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_1_BusOff,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_1_MB00To03 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_1_MB00To03 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_1_MB00To03_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_1_MB00To03,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_1_MB04To07 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_1_MB04To07 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_1_MB04To07_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_1_MB04To07,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_1_MB08To11 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_1_MB08To11 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_1_MB08To11_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_1_MB08To11,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_1_MB12To15 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_1_MB12To15 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_1_MB12To15_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_1_MB12To15,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_1_MB16To31 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_1_MB16To31 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_1_MB16To31_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_1_MB16To31,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_1_MB32To63 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_1_MB32To63 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_1_MB32To63_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_1_MB32To63,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_1_MB64To95 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_1_MB64To95 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_1_MB64To95_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_1_MB64To95,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_2_BusOff */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_2_BusOff =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_2_BusOff_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_2_BusOff,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_2_MB00To03 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_2_MB00To03 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_2_MB00To03_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_2_MB00To03,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_2_MB04To07 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_2_MB04To07 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_2_MB04To07_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_2_MB04To07,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_2_MB08To11 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_2_MB08To11 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_2_MB08To11_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_2_MB08To11,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_2_MB12To15 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_2_MB12To15 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_2_MB12To15_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_2_MB12To15,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_2_MB16To31 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_2_MB16To31 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_2_MB16To31_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_2_MB16To31,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_2_MB32To63 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_2_MB32To63 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_2_MB32To63_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_2_MB32To63,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_2_MB64To95 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_2_MB64To95 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_2_MB64To95_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_2_MB64To95,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_4_BusOff */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_4_BusOff =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_4_BusOff_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_4_BusOff,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_4_MB00To03 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_4_MB00To03 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_4_MB00To03_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_4_MB00To03,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_4_MB04To07 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_4_MB04To07 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_4_MB04To07_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_4_MB04To07,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_4_MB08To11 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_4_MB08To11 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_4_MB08To11_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_4_MB08To11,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_4_MB12To15 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_4_MB12To15 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_4_MB12To15_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_4_MB12To15,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_4_MB16To31 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_4_MB16To31 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_4_MB16To31_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_4_MB16To31,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_4_MB32To63 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_4_MB32To63 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_4_MB32To63_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_4_MB32To63,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_4_MB64To95 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_4_MB64To95 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_4_MB64To95_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_4_MB64To95,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_7_BusOff */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_7_BusOff =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_7_BusOff_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_7_BusOff,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_7_MB00To03 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_7_MB00To03 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_7_MB00To03_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_7_MB00To03,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_7_MB04To07 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_7_MB04To07 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_7_MB04To07_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_7_MB04To07,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_7_MB08To11 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_7_MB08To11 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_7_MB08To11_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_7_MB08To11,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_7_MB12To15 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_7_MB12To15 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_7_MB12To15_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_7_MB12To15,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_7_MB16To31 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_7_MB16To31 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_7_MB16To31_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_7_MB16To31,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_7_MB32To63 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_7_MB32To63 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_7_MB32To63_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_7_MB32To63,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_7_MB64To95 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_7_MB64To95 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_7_MB64To95_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_7_MB64To95,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CounterIsr_SystemTimer */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CounterIsr_SystemTimer =
{
  /* .Dyn  = */ &OsCfg_Trace_CounterIsr_SystemTimer_Dyn,
  /* .Id   = */ Os_TraceId_CounterIsr_SystemTimer,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Gpt_PIT_0_TIMER_0_ISR */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Gpt_PIT_0_TIMER_0_ISR =
{
  /* .Dyn  = */ &OsCfg_Trace_Gpt_PIT_0_TIMER_0_ISR_Dyn,
  /* .Id   = */ Os_TraceId_Gpt_PIT_0_TIMER_0_ISR,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: IRQ_LFIC_WKUP_27_28 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_IRQ_LFIC_WKUP_27_28 =
{
  /* .Dyn  = */ &OsCfg_Trace_IRQ_LFIC_WKUP_27_28_Dyn,
  /* .Id   = */ Os_TraceId_IRQ_LFIC_WKUP_27_28,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Lin_Channel_0_ERR */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Lin_Channel_0_ERR =
{
  /* .Dyn  = */ &OsCfg_Trace_Lin_Channel_0_ERR_Dyn,
  /* .Id   = */ Os_TraceId_Lin_Channel_0_ERR,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Lin_Channel_0_RXI */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Lin_Channel_0_RXI =
{
  /* .Dyn  = */ &OsCfg_Trace_Lin_Channel_0_RXI_Dyn,
  /* .Id   = */ Os_TraceId_Lin_Channel_0_RXI,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Lin_Channel_0_TXI */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Lin_Channel_0_TXI =
{
  /* .Dyn  = */ &OsCfg_Trace_Lin_Channel_0_TXI_Dyn,
  /* .Id   = */ Os_TraceId_Lin_Channel_0_TXI,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Lin_Channel_10_ERR */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Lin_Channel_10_ERR =
{
  /* .Dyn  = */ &OsCfg_Trace_Lin_Channel_10_ERR_Dyn,
  /* .Id   = */ Os_TraceId_Lin_Channel_10_ERR,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Lin_Channel_10_RXI */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Lin_Channel_10_RXI =
{
  /* .Dyn  = */ &OsCfg_Trace_Lin_Channel_10_RXI_Dyn,
  /* .Id   = */ Os_TraceId_Lin_Channel_10_RXI,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Lin_Channel_10_TXI */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Lin_Channel_10_TXI =
{
  /* .Dyn  = */ &OsCfg_Trace_Lin_Channel_10_TXI_Dyn,
  /* .Id   = */ Os_TraceId_Lin_Channel_10_TXI,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Lin_Channel_1_ERR */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Lin_Channel_1_ERR =
{
  /* .Dyn  = */ &OsCfg_Trace_Lin_Channel_1_ERR_Dyn,
  /* .Id   = */ Os_TraceId_Lin_Channel_1_ERR,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Lin_Channel_1_RXI */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Lin_Channel_1_RXI =
{
  /* .Dyn  = */ &OsCfg_Trace_Lin_Channel_1_RXI_Dyn,
  /* .Id   = */ Os_TraceId_Lin_Channel_1_RXI,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Lin_Channel_1_TXI */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Lin_Channel_1_TXI =
{
  /* .Dyn  = */ &OsCfg_Trace_Lin_Channel_1_TXI_Dyn,
  /* .Id   = */ Os_TraceId_Lin_Channel_1_TXI,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Lin_Channel_6_ERR */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Lin_Channel_6_ERR =
{
  /* .Dyn  = */ &OsCfg_Trace_Lin_Channel_6_ERR_Dyn,
  /* .Id   = */ Os_TraceId_Lin_Channel_6_ERR,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Lin_Channel_6_RXI */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Lin_Channel_6_RXI =
{
  /* .Dyn  = */ &OsCfg_Trace_Lin_Channel_6_RXI_Dyn,
  /* .Id   = */ Os_TraceId_Lin_Channel_6_RXI,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Lin_Channel_6_TXI */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Lin_Channel_6_TXI =
{
  /* .Dyn  = */ &OsCfg_Trace_Lin_Channel_6_TXI_Dyn,
  /* .Id   = */ Os_TraceId_Lin_Channel_6_TXI,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Lin_Channel_7_ERR */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Lin_Channel_7_ERR =
{
  /* .Dyn  = */ &OsCfg_Trace_Lin_Channel_7_ERR_Dyn,
  /* .Id   = */ Os_TraceId_Lin_Channel_7_ERR,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Lin_Channel_7_RXI */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Lin_Channel_7_RXI =
{
  /* .Dyn  = */ &OsCfg_Trace_Lin_Channel_7_RXI_Dyn,
  /* .Id   = */ Os_TraceId_Lin_Channel_7_RXI,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: Lin_Channel_7_TXI */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Lin_Channel_7_TXI =
{
  /* .Dyn  = */ &OsCfg_Trace_Lin_Channel_7_TXI_Dyn,
  /* .Id   = */ Os_TraceId_Lin_Channel_7_TXI,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: PWM_HS_EMIOS0_Ch24_25 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_PWM_HS_EMIOS0_Ch24_25 =
{
  /* .Dyn  = */ &OsCfg_Trace_PWM_HS_EMIOS0_Ch24_25_Dyn,
  /* .Id   = */ Os_TraceId_PWM_HS_EMIOS0_Ch24_25,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: PWM_LS_EMIOS1_Ch6_7 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_PWM_LS_EMIOS1_Ch6_7 =
{
  /* .Dyn  = */ &OsCfg_Trace_PWM_LS_EMIOS1_Ch6_7_Dyn,
  /* .Id   = */ Os_TraceId_PWM_LS_EMIOS1_Ch6_7,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
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
 *  END OF FILE: Os_Trace_Lcfg.c
 *********************************************************************************************************************/
