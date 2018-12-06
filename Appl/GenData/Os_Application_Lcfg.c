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
 *              File: Os_Application_Lcfg.c
 *   Generation Time: 2018-12-01 17:02:20
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

#define OS_APPLICATION_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Application_Cfg.h"
#include "Os_Application_Lcfg.h"
#include "Os_Application.h"

/* Os kernel module dependencies */
#include "Os_Alarm_Lcfg.h"
#include "Os_Alarm.h"
#include "Os_Common.h"
#include "Os_Core_Lcfg.h"
#include "Os_Counter_Lcfg.h"
#include "Os_Counter.h"
#include "Os_Hook_Lcfg.h"
#include "Os_Isr_Lcfg.h"
#include "Os_ScheduleTable_Lcfg.h"
#include "Os_ScheduleTable.h"
#include "Os_ServiceFunction_Lcfg.h"
#include "Os_Task_Lcfg.h"
#include "Os_Timer.h"

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

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Dynamic application data: OsApplication_Trusted_Core0 */
OS_LOCAL VAR(Os_AppType, OS_VAR_NOINIT) OsCfg_App_OsApplication_Trusted_Core0_Dyn;

/*! Dynamic application data: OsApplication_Untrusted_Core0 */
OS_LOCAL VAR(Os_AppType, OS_VAR_NOINIT) OsCfg_App_OsApplication_Untrusted_Core0_Dyn;

/*! Dynamic application data: SystemApplication_OsCore0 */
OS_LOCAL VAR(Os_AppType, OS_VAR_NOINIT) OsCfg_App_SystemApplication_OsCore0_Dyn;

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

/*! Object reference table for application alarms: OsApplication_Trusted_Core0 */
OS_LOCAL CONST(Os_AlarmConfigRefType, OS_CONST) OsCfg_App_OsApplication_Trusted_Core0_AlarmRefs[OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_ALARMS + 1] =
{
  OS_ALARM_CASTCONFIG_ALARMACTIVATETASK_2_ALARM(OsCfg_Alarm_Alarm_StartApplication_Trusted_Task),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_PvtTask_0_10ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_StartApplication_Trusted_Task_0_10ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_TP_RE_SMK_TP),
  NULL_PTR
};

/*! Object reference table for application counters: OsApplication_Trusted_Core0 */
OS_LOCAL CONST(Os_CounterConfigRefType, OS_CONST) OsCfg_App_OsApplication_Trusted_Core0_CounterRefs[OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_COUNTERS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application hooks: OsApplication_Trusted_Core0 */
OS_LOCAL CONST(Os_HookConfigRefType, OS_CONST) OsCfg_App_OsApplication_Trusted_Core0_HookRefs[OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_HOOKS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application ISRs: OsApplication_Trusted_Core0 */
OS_LOCAL CONST(Os_IsrConfigRefType, OS_CONST) OsCfg_App_OsApplication_Trusted_Core0_IsrRefs[OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_ISRS + 1] =
{
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ADC_0_EOC),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_ADC_1_EOC),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_Gpt_PIT_0_TIMER_0_ISR),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_IRQ_LFIC_WKUP_27_28),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_PWM_HS_EMIOS0_Ch24_25),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_PWM_LS_EMIOS1_Ch6_7),
  NULL_PTR
};

/*! Object reference table for application category 1 (EXTERNAL) ISRs: OsApplication_Trusted_Core0 */
OS_LOCAL CONST(Os_IsrCat1ConfigRefType, OS_CONST) OsCfg_App_OsApplication_Trusted_Core0_Cat1IsrRefs[OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_CAT1ISRS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application schedule tables: OsApplication_Trusted_Core0 */
OS_LOCAL CONST(Os_SchTConfigRefType, OS_CONST) OsCfg_App_OsApplication_Trusted_Core0_SchTRefs[OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_SCHTS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application tasks: OsApplication_Trusted_Core0 */
OS_LOCAL CONST(Os_TaskConfigRefType, OS_CONST) OsCfg_App_OsApplication_Trusted_Core0_TaskRefs[OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_TASKS + 1] =
{
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_PvtTask),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_StartApplication_Trusted_Task),
  NULL_PTR
};

/*! Object reference table for application trusted functions: OsApplication_Trusted_Core0 */
OS_LOCAL CONST(Os_ServiceConfigRefType, OS_CONST) OsCfg_App_OsApplication_Trusted_Core0_ServiceRefs[OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_SERVICES + 1] =
{
  NULL_PTR
};

/*! Application configuration data: OsApplication_Trusted_Core0 */
CONST(Os_AppConfigType, OS_CONST) OsCfg_App_OsApplication_Trusted_Core0 =
{
  /* .Dyn                  = */ &OsCfg_App_OsApplication_Trusted_Core0_Dyn,
  /* .Core                 = */ &OsCfg_Core_OsCore0,
  /* .AccessRightId        = */ OS_APPID2MASK(OsApplication_Trusted_Core0),
  /* .TaskRefs             = */ OsCfg_App_OsApplication_Trusted_Core0_TaskRefs,
  /* .TaskCount            = */ OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_TASKS,
  /* .IsrCat2Refs          = */ OsCfg_App_OsApplication_Trusted_Core0_IsrRefs,
  /* .IsrCat2Count         = */ OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_ISRS,
  /* .IsrCat1Refs          = */ OsCfg_App_OsApplication_Trusted_Core0_Cat1IsrRefs,
  /* .IsrCat1Count         = */ OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_CAT1ISRS,
  /* .CounterRefs          = */ OsCfg_App_OsApplication_Trusted_Core0_CounterRefs,
  /* .CounterCount         = */ OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_COUNTERS,
  /* .AlarmRefs            = */ OsCfg_App_OsApplication_Trusted_Core0_AlarmRefs,
  /* .AlarmCount           = */ OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_ALARMS,
  /* .SchTRefs             = */ OsCfg_App_OsApplication_Trusted_Core0_SchTRefs,
  /* .SchTCount            = */ OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_SCHTS,
  /* .ServiceFunctions     = */ OsCfg_App_OsApplication_Trusted_Core0_ServiceRefs,
  /* .ServiceFunctionCount = */ OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_SERVICES,
  /* .StartupHookRef       = */ NULL_PTR,
  /* .ShutdownHookRef      = */ NULL_PTR,
  /* .ErrorHookRef         = */ NULL_PTR,
  /* .HookRefs             = */ OsCfg_App_OsApplication_Trusted_Core0_HookRefs,
  /* .HookCount            = */ OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_HOOKS,
  /* .RestartTask          = */ NULL_PTR,
  /* .IsTrusted            = */ TRUE,
  /* .IsPriveleged         = */ TRUE,
  /* .HasTimingProtectionDelay = */ FALSE,
  /* .Id                   = */ OsApplication_Trusted_Core0
};

/*! Object reference table for application alarms: OsApplication_Untrusted_Core0 */
OS_LOCAL CONST(Os_AlarmConfigRefType, OS_CONST) OsCfg_App_OsApplication_Untrusted_Core0_AlarmRefs[OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_ALARMS + 1] =
{
  OS_ALARM_CASTCONFIG_ALARMACTIVATETASK_2_ALARM(OsCfg_Alarm_Alarm_StartApplication_MemoryViolation_Task),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_100ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_10ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_20ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_5ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms),
  NULL_PTR
};

/*! Object reference table for application counters: OsApplication_Untrusted_Core0 */
OS_LOCAL CONST(Os_CounterConfigRefType, OS_CONST) OsCfg_App_OsApplication_Untrusted_Core0_CounterRefs[OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_COUNTERS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application hooks: OsApplication_Untrusted_Core0 */
OS_LOCAL CONST(Os_HookConfigRefType, OS_CONST) OsCfg_App_OsApplication_Untrusted_Core0_HookRefs[OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_HOOKS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application ISRs: OsApplication_Untrusted_Core0 */
OS_LOCAL CONST(Os_IsrConfigRefType, OS_CONST) OsCfg_App_OsApplication_Untrusted_Core0_IsrRefs[OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_ISRS + 1] =
{
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
  NULL_PTR
};

/*! Object reference table for application category 1 (EXTERNAL) ISRs: OsApplication_Untrusted_Core0 */
OS_LOCAL CONST(Os_IsrCat1ConfigRefType, OS_CONST) OsCfg_App_OsApplication_Untrusted_Core0_Cat1IsrRefs[OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_CAT1ISRS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application schedule tables: OsApplication_Untrusted_Core0 */
OS_LOCAL CONST(Os_SchTConfigRefType, OS_CONST) OsCfg_App_OsApplication_Untrusted_Core0_SchTRefs[OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_SCHTS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application tasks: OsApplication_Untrusted_Core0 */
OS_LOCAL CONST(Os_TaskConfigRefType, OS_CONST) OsCfg_App_OsApplication_Untrusted_Core0_TaskRefs[OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_TASKS + 1] =
{
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Appl_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_BSW_Async_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Init_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_StartApplication_MemoryViolation_Task),
  NULL_PTR
};

/*! Object reference table for application trusted functions: OsApplication_Untrusted_Core0 */
OS_LOCAL CONST(Os_ServiceConfigRefType, OS_CONST) OsCfg_App_OsApplication_Untrusted_Core0_ServiceRefs[OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_SERVICES + 1] =
{
  NULL_PTR
};

/*! Application configuration data: OsApplication_Untrusted_Core0 */
CONST(Os_AppConfigType, OS_CONST) OsCfg_App_OsApplication_Untrusted_Core0 =
{
  /* .Dyn                  = */ &OsCfg_App_OsApplication_Untrusted_Core0_Dyn,
  /* .Core                 = */ &OsCfg_Core_OsCore0,
  /* .AccessRightId        = */ OS_APPID2MASK(OsApplication_Untrusted_Core0),
  /* .TaskRefs             = */ OsCfg_App_OsApplication_Untrusted_Core0_TaskRefs,
  /* .TaskCount            = */ OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_TASKS,
  /* .IsrCat2Refs          = */ OsCfg_App_OsApplication_Untrusted_Core0_IsrRefs,
  /* .IsrCat2Count         = */ OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_ISRS,
  /* .IsrCat1Refs          = */ OsCfg_App_OsApplication_Untrusted_Core0_Cat1IsrRefs,
  /* .IsrCat1Count         = */ OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_CAT1ISRS,
  /* .CounterRefs          = */ OsCfg_App_OsApplication_Untrusted_Core0_CounterRefs,
  /* .CounterCount         = */ OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_COUNTERS,
  /* .AlarmRefs            = */ OsCfg_App_OsApplication_Untrusted_Core0_AlarmRefs,
  /* .AlarmCount           = */ OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_ALARMS,
  /* .SchTRefs             = */ OsCfg_App_OsApplication_Untrusted_Core0_SchTRefs,
  /* .SchTCount            = */ OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_SCHTS,
  /* .ServiceFunctions     = */ OsCfg_App_OsApplication_Untrusted_Core0_ServiceRefs,
  /* .ServiceFunctionCount = */ OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_SERVICES,
  /* .StartupHookRef       = */ NULL_PTR,
  /* .ShutdownHookRef      = */ NULL_PTR,
  /* .ErrorHookRef         = */ NULL_PTR,
  /* .HookRefs             = */ OsCfg_App_OsApplication_Untrusted_Core0_HookRefs,
  /* .HookCount            = */ OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_HOOKS,
  /* .RestartTask          = */ NULL_PTR,
  /* .IsTrusted            = */ FALSE,
  /* .IsPriveleged         = */ FALSE,
  /* .HasTimingProtectionDelay = */ FALSE,
  /* .Id                   = */ OsApplication_Untrusted_Core0
};

/*! Object reference table for application alarms: SystemApplication_OsCore0 */
OS_LOCAL CONST(Os_AlarmConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore0_AlarmRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_ALARMS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application counters: SystemApplication_OsCore0 */
OS_LOCAL CONST(Os_CounterConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore0_CounterRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_COUNTERS + 1] =
{
  OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer),
  NULL_PTR
};

/*! Object reference table for application hooks: SystemApplication_OsCore0 */
OS_LOCAL CONST(Os_HookConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore0_HookRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_HOOKS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application ISRs: SystemApplication_OsCore0 */
OS_LOCAL CONST(Os_IsrConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore0_IsrRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_ISRS + 1] =
{
  OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_CounterIsr_SystemTimer),
  NULL_PTR
};

/*! Object reference table for application category 1 (EXTERNAL) ISRs: SystemApplication_OsCore0 */
OS_LOCAL CONST(Os_IsrCat1ConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore0_Cat1IsrRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_CAT1ISRS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application schedule tables: SystemApplication_OsCore0 */
OS_LOCAL CONST(Os_SchTConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore0_SchTRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_SCHTS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application tasks: SystemApplication_OsCore0 */
OS_LOCAL CONST(Os_TaskConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore0_TaskRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_TASKS + 1] =
{
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_IdleTask_OsCore0),
  NULL_PTR
};

/*! Object reference table for application trusted functions: SystemApplication_OsCore0 */
OS_LOCAL CONST(Os_ServiceConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore0_ServiceRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_SERVICES + 1] =
{
  NULL_PTR
};

/*! Application configuration data: SystemApplication_OsCore0 */
CONST(Os_AppConfigType, OS_CONST) OsCfg_App_SystemApplication_OsCore0 =
{
  /* .Dyn                  = */ &OsCfg_App_SystemApplication_OsCore0_Dyn,
  /* .Core                 = */ &OsCfg_Core_OsCore0,
  /* .AccessRightId        = */ OS_APPID2MASK(SystemApplication_OsCore0),
  /* .TaskRefs             = */ OsCfg_App_SystemApplication_OsCore0_TaskRefs,
  /* .TaskCount            = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_TASKS,
  /* .IsrCat2Refs          = */ OsCfg_App_SystemApplication_OsCore0_IsrRefs,
  /* .IsrCat2Count         = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_ISRS,
  /* .IsrCat1Refs          = */ OsCfg_App_SystemApplication_OsCore0_Cat1IsrRefs,
  /* .IsrCat1Count         = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_CAT1ISRS,
  /* .CounterRefs          = */ OsCfg_App_SystemApplication_OsCore0_CounterRefs,
  /* .CounterCount         = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_COUNTERS,
  /* .AlarmRefs            = */ OsCfg_App_SystemApplication_OsCore0_AlarmRefs,
  /* .AlarmCount           = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_ALARMS,
  /* .SchTRefs             = */ OsCfg_App_SystemApplication_OsCore0_SchTRefs,
  /* .SchTCount            = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_SCHTS,
  /* .ServiceFunctions     = */ OsCfg_App_SystemApplication_OsCore0_ServiceRefs,
  /* .ServiceFunctionCount = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_SERVICES,
  /* .StartupHookRef       = */ NULL_PTR,
  /* .ShutdownHookRef      = */ NULL_PTR,
  /* .ErrorHookRef         = */ NULL_PTR,
  /* .HookRefs             = */ OsCfg_App_SystemApplication_OsCore0_HookRefs,
  /* .HookCount            = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_HOOKS,
  /* .RestartTask          = */ NULL_PTR,
  /* .IsTrusted            = */ TRUE,
  /* .IsPriveleged         = */ TRUE,
  /* .HasTimingProtectionDelay = */ FALSE,
  /* .Id                   = */ SystemApplication_OsCore0
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for applications. */
CONSTP2CONST(Os_AppConfigType, OS_CONST, OS_CONST) OsCfg_AppRefs[OS_APPID_COUNT + 1] =
{
  &OsCfg_App_OsApplication_Trusted_Core0,
  &OsCfg_App_OsApplication_Untrusted_Core0,
  &OsCfg_App_SystemApplication_OsCore0,
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
 *  END OF FILE: Os_Application_Lcfg.c
 *********************************************************************************************************************/
