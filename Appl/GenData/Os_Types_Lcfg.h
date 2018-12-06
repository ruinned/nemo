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
 *              File: Os_Types_Lcfg.h
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

#if !defined (OS_TYPES_LCFG_H)                                                       /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_TYPES_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */

/* Os kernel module dependencies */

/* Os hal dependencies */

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
/*! OS-Application identifier. */
#define OsApplication_Trusted_Core0 OsApplication_Trusted_Core0
#define OsApplication_Untrusted_Core0 OsApplication_Untrusted_Core0
#define SystemApplication_OsCore0 SystemApplication_OsCore0

/*! Trusted function identifier. */

/*! Non-Trusted function identifier. */

/*! Fast Trusted function identifier. */

/*! Task identifier. */
#define Default_Appl_Task Default_Appl_Task
#define Default_BSW_Async_Task Default_BSW_Async_Task
#define Default_Init_Task Default_Init_Task
#define IdleTask_OsCore0 IdleTask_OsCore0
#define PvtTask PvtTask
#define StartApplication_MemoryViolation_Task StartApplication_MemoryViolation_Task
#define StartApplication_Trusted_Task StartApplication_Trusted_Task

/*! Category 2 ISR identifier. */
#define ADC_0_EOC ADC_0_EOC
#define ADC_1_EOC ADC_1_EOC
#define CanIsr_0_BusOff CanIsr_0_BusOff
#define CanIsr_0_MB00To03 CanIsr_0_MB00To03
#define CanIsr_0_MB04To07 CanIsr_0_MB04To07
#define CanIsr_0_MB08To11 CanIsr_0_MB08To11
#define CanIsr_0_MB12To15 CanIsr_0_MB12To15
#define CanIsr_0_MB16To31 CanIsr_0_MB16To31
#define CanIsr_0_MB32To63 CanIsr_0_MB32To63
#define CanIsr_0_MB64To95 CanIsr_0_MB64To95
#define CanIsr_1_BusOff CanIsr_1_BusOff
#define CanIsr_1_MB00To03 CanIsr_1_MB00To03
#define CanIsr_1_MB04To07 CanIsr_1_MB04To07
#define CanIsr_1_MB08To11 CanIsr_1_MB08To11
#define CanIsr_1_MB12To15 CanIsr_1_MB12To15
#define CanIsr_1_MB16To31 CanIsr_1_MB16To31
#define CanIsr_1_MB32To63 CanIsr_1_MB32To63
#define CanIsr_1_MB64To95 CanIsr_1_MB64To95
#define CanIsr_2_BusOff CanIsr_2_BusOff
#define CanIsr_2_MB00To03 CanIsr_2_MB00To03
#define CanIsr_2_MB04To07 CanIsr_2_MB04To07
#define CanIsr_2_MB08To11 CanIsr_2_MB08To11
#define CanIsr_2_MB12To15 CanIsr_2_MB12To15
#define CanIsr_2_MB16To31 CanIsr_2_MB16To31
#define CanIsr_2_MB32To63 CanIsr_2_MB32To63
#define CanIsr_2_MB64To95 CanIsr_2_MB64To95
#define CanIsr_4_BusOff CanIsr_4_BusOff
#define CanIsr_4_MB00To03 CanIsr_4_MB00To03
#define CanIsr_4_MB04To07 CanIsr_4_MB04To07
#define CanIsr_4_MB08To11 CanIsr_4_MB08To11
#define CanIsr_4_MB12To15 CanIsr_4_MB12To15
#define CanIsr_4_MB16To31 CanIsr_4_MB16To31
#define CanIsr_4_MB32To63 CanIsr_4_MB32To63
#define CanIsr_4_MB64To95 CanIsr_4_MB64To95
#define CanIsr_7_BusOff CanIsr_7_BusOff
#define CanIsr_7_MB00To03 CanIsr_7_MB00To03
#define CanIsr_7_MB04To07 CanIsr_7_MB04To07
#define CanIsr_7_MB08To11 CanIsr_7_MB08To11
#define CanIsr_7_MB12To15 CanIsr_7_MB12To15
#define CanIsr_7_MB16To31 CanIsr_7_MB16To31
#define CanIsr_7_MB32To63 CanIsr_7_MB32To63
#define CanIsr_7_MB64To95 CanIsr_7_MB64To95
#define CounterIsr_SystemTimer CounterIsr_SystemTimer
#define Gpt_PIT_0_TIMER_0_ISR Gpt_PIT_0_TIMER_0_ISR
#define IRQ_LFIC_WKUP_27_28 IRQ_LFIC_WKUP_27_28
#define Lin_Channel_0_ERR Lin_Channel_0_ERR
#define Lin_Channel_0_RXI Lin_Channel_0_RXI
#define Lin_Channel_0_TXI Lin_Channel_0_TXI
#define Lin_Channel_10_ERR Lin_Channel_10_ERR
#define Lin_Channel_10_RXI Lin_Channel_10_RXI
#define Lin_Channel_10_TXI Lin_Channel_10_TXI
#define Lin_Channel_1_ERR Lin_Channel_1_ERR
#define Lin_Channel_1_RXI Lin_Channel_1_RXI
#define Lin_Channel_1_TXI Lin_Channel_1_TXI
#define Lin_Channel_6_ERR Lin_Channel_6_ERR
#define Lin_Channel_6_RXI Lin_Channel_6_RXI
#define Lin_Channel_6_TXI Lin_Channel_6_TXI
#define Lin_Channel_7_ERR Lin_Channel_7_ERR
#define Lin_Channel_7_RXI Lin_Channel_7_RXI
#define Lin_Channel_7_TXI Lin_Channel_7_TXI
#define PWM_HS_EMIOS0_Ch24_25 PWM_HS_EMIOS0_Ch24_25
#define PWM_LS_EMIOS1_Ch6_7 PWM_LS_EMIOS1_Ch6_7

/*! Alarm identifier. */
#define Alarm_StartApplication_MemoryViolation_Task Alarm_StartApplication_MemoryViolation_Task
#define Alarm_StartApplication_Trusted_Task Alarm_StartApplication_Trusted_Task
#define Rte_Al_TE2_Default_BSW_Async_Task_0_100ms Rte_Al_TE2_Default_BSW_Async_Task_0_100ms
#define Rte_Al_TE2_Default_BSW_Async_Task_0_10ms Rte_Al_TE2_Default_BSW_Async_Task_0_10ms
#define Rte_Al_TE2_Default_BSW_Async_Task_0_20ms Rte_Al_TE2_Default_BSW_Async_Task_0_20ms
#define Rte_Al_TE2_Default_BSW_Async_Task_0_5ms Rte_Al_TE2_Default_BSW_Async_Task_0_5ms
#define Rte_Al_TE_PvtTask_0_10ms Rte_Al_TE_PvtTask_0_10ms
#define Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms
#define Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms
#define Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms
#define Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms
#define Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms
#define Rte_Al_TE_StartApplication_Trusted_Task_0_10ms Rte_Al_TE_StartApplication_Trusted_Task_0_10ms
#define Rte_Al_TE_TP_RE_SMK_TP Rte_Al_TE_TP_RE_SMK_TP

/*! Counter identifier. */
#define SystemTimer SystemTimer

/*! ScheduleTable identifier. */

/*! Resource identifier. */
#define OsResource OsResource

/*! Spinlock identifier. */

/*! Peripheral identifier. */
#define ADC_PROTECTED_AREA_ADC0 ADC_PROTECTED_AREA_ADC0
#define ADC_PROTECTED_AREA_ADC1 ADC_PROTECTED_AREA_ADC1
#define CAN_PROTECTED_AREA_CH0 CAN_PROTECTED_AREA_CH0
#define CAN_PROTECTED_AREA_CH1 CAN_PROTECTED_AREA_CH1
#define CAN_PROTECTED_AREA_CH2 CAN_PROTECTED_AREA_CH2
#define CAN_PROTECTED_AREA_CH3 CAN_PROTECTED_AREA_CH3
#define CAN_PROTECTED_AREA_CH4 CAN_PROTECTED_AREA_CH4
#define CAN_PROTECTED_AREA_CH7 CAN_PROTECTED_AREA_CH7
#define Dio Dio

/*! Trace thread identifier (Tasks and ISRs inclusive system objects). */
#define Os_TraceId_Default_Appl_Task Os_TraceId_Default_Appl_Task
#define Os_TraceId_Default_BSW_Async_Task Os_TraceId_Default_BSW_Async_Task
#define Os_TraceId_Default_Init_Task Os_TraceId_Default_Init_Task
#define Os_TraceId_IdleTask_OsCore0 Os_TraceId_IdleTask_OsCore0
#define Os_TraceId_PvtTask Os_TraceId_PvtTask
#define Os_TraceId_StartApplication_MemoryViolation_Task Os_TraceId_StartApplication_MemoryViolation_Task
#define Os_TraceId_StartApplication_Trusted_Task Os_TraceId_StartApplication_Trusted_Task
#define Os_TraceId_ADC_0_EOC Os_TraceId_ADC_0_EOC
#define Os_TraceId_ADC_1_EOC Os_TraceId_ADC_1_EOC
#define Os_TraceId_CanIsr_0_BusOff Os_TraceId_CanIsr_0_BusOff
#define Os_TraceId_CanIsr_0_MB00To03 Os_TraceId_CanIsr_0_MB00To03
#define Os_TraceId_CanIsr_0_MB04To07 Os_TraceId_CanIsr_0_MB04To07
#define Os_TraceId_CanIsr_0_MB08To11 Os_TraceId_CanIsr_0_MB08To11
#define Os_TraceId_CanIsr_0_MB12To15 Os_TraceId_CanIsr_0_MB12To15
#define Os_TraceId_CanIsr_0_MB16To31 Os_TraceId_CanIsr_0_MB16To31
#define Os_TraceId_CanIsr_0_MB32To63 Os_TraceId_CanIsr_0_MB32To63
#define Os_TraceId_CanIsr_0_MB64To95 Os_TraceId_CanIsr_0_MB64To95
#define Os_TraceId_CanIsr_1_BusOff Os_TraceId_CanIsr_1_BusOff
#define Os_TraceId_CanIsr_1_MB00To03 Os_TraceId_CanIsr_1_MB00To03
#define Os_TraceId_CanIsr_1_MB04To07 Os_TraceId_CanIsr_1_MB04To07
#define Os_TraceId_CanIsr_1_MB08To11 Os_TraceId_CanIsr_1_MB08To11
#define Os_TraceId_CanIsr_1_MB12To15 Os_TraceId_CanIsr_1_MB12To15
#define Os_TraceId_CanIsr_1_MB16To31 Os_TraceId_CanIsr_1_MB16To31
#define Os_TraceId_CanIsr_1_MB32To63 Os_TraceId_CanIsr_1_MB32To63
#define Os_TraceId_CanIsr_1_MB64To95 Os_TraceId_CanIsr_1_MB64To95
#define Os_TraceId_CanIsr_2_BusOff Os_TraceId_CanIsr_2_BusOff
#define Os_TraceId_CanIsr_2_MB00To03 Os_TraceId_CanIsr_2_MB00To03
#define Os_TraceId_CanIsr_2_MB04To07 Os_TraceId_CanIsr_2_MB04To07
#define Os_TraceId_CanIsr_2_MB08To11 Os_TraceId_CanIsr_2_MB08To11
#define Os_TraceId_CanIsr_2_MB12To15 Os_TraceId_CanIsr_2_MB12To15
#define Os_TraceId_CanIsr_2_MB16To31 Os_TraceId_CanIsr_2_MB16To31
#define Os_TraceId_CanIsr_2_MB32To63 Os_TraceId_CanIsr_2_MB32To63
#define Os_TraceId_CanIsr_2_MB64To95 Os_TraceId_CanIsr_2_MB64To95
#define Os_TraceId_CanIsr_4_BusOff Os_TraceId_CanIsr_4_BusOff
#define Os_TraceId_CanIsr_4_MB00To03 Os_TraceId_CanIsr_4_MB00To03
#define Os_TraceId_CanIsr_4_MB04To07 Os_TraceId_CanIsr_4_MB04To07
#define Os_TraceId_CanIsr_4_MB08To11 Os_TraceId_CanIsr_4_MB08To11
#define Os_TraceId_CanIsr_4_MB12To15 Os_TraceId_CanIsr_4_MB12To15
#define Os_TraceId_CanIsr_4_MB16To31 Os_TraceId_CanIsr_4_MB16To31
#define Os_TraceId_CanIsr_4_MB32To63 Os_TraceId_CanIsr_4_MB32To63
#define Os_TraceId_CanIsr_4_MB64To95 Os_TraceId_CanIsr_4_MB64To95
#define Os_TraceId_CanIsr_7_BusOff Os_TraceId_CanIsr_7_BusOff
#define Os_TraceId_CanIsr_7_MB00To03 Os_TraceId_CanIsr_7_MB00To03
#define Os_TraceId_CanIsr_7_MB04To07 Os_TraceId_CanIsr_7_MB04To07
#define Os_TraceId_CanIsr_7_MB08To11 Os_TraceId_CanIsr_7_MB08To11
#define Os_TraceId_CanIsr_7_MB12To15 Os_TraceId_CanIsr_7_MB12To15
#define Os_TraceId_CanIsr_7_MB16To31 Os_TraceId_CanIsr_7_MB16To31
#define Os_TraceId_CanIsr_7_MB32To63 Os_TraceId_CanIsr_7_MB32To63
#define Os_TraceId_CanIsr_7_MB64To95 Os_TraceId_CanIsr_7_MB64To95
#define Os_TraceId_CounterIsr_SystemTimer Os_TraceId_CounterIsr_SystemTimer
#define Os_TraceId_Gpt_PIT_0_TIMER_0_ISR Os_TraceId_Gpt_PIT_0_TIMER_0_ISR
#define Os_TraceId_IRQ_LFIC_WKUP_27_28 Os_TraceId_IRQ_LFIC_WKUP_27_28
#define Os_TraceId_Lin_Channel_0_ERR Os_TraceId_Lin_Channel_0_ERR
#define Os_TraceId_Lin_Channel_0_RXI Os_TraceId_Lin_Channel_0_RXI
#define Os_TraceId_Lin_Channel_0_TXI Os_TraceId_Lin_Channel_0_TXI
#define Os_TraceId_Lin_Channel_10_ERR Os_TraceId_Lin_Channel_10_ERR
#define Os_TraceId_Lin_Channel_10_RXI Os_TraceId_Lin_Channel_10_RXI
#define Os_TraceId_Lin_Channel_10_TXI Os_TraceId_Lin_Channel_10_TXI
#define Os_TraceId_Lin_Channel_1_ERR Os_TraceId_Lin_Channel_1_ERR
#define Os_TraceId_Lin_Channel_1_RXI Os_TraceId_Lin_Channel_1_RXI
#define Os_TraceId_Lin_Channel_1_TXI Os_TraceId_Lin_Channel_1_TXI
#define Os_TraceId_Lin_Channel_6_ERR Os_TraceId_Lin_Channel_6_ERR
#define Os_TraceId_Lin_Channel_6_RXI Os_TraceId_Lin_Channel_6_RXI
#define Os_TraceId_Lin_Channel_6_TXI Os_TraceId_Lin_Channel_6_TXI
#define Os_TraceId_Lin_Channel_7_ERR Os_TraceId_Lin_Channel_7_ERR
#define Os_TraceId_Lin_Channel_7_RXI Os_TraceId_Lin_Channel_7_RXI
#define Os_TraceId_Lin_Channel_7_TXI Os_TraceId_Lin_Channel_7_TXI
#define Os_TraceId_PWM_HS_EMIOS0_Ch24_25 Os_TraceId_PWM_HS_EMIOS0_Ch24_25
#define Os_TraceId_PWM_LS_EMIOS1_Ch6_7 Os_TraceId_PWM_LS_EMIOS1_Ch6_7

/*! Trace spinlock identifier (All spinlocks inclusive system objects). */

/*! Barrier identifiers. */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/*! OS-Application identifier. */
typedef enum
{
  OsApplication_Trusted_Core0 = 0, /* 0x00000001 */
  OsApplication_Untrusted_Core0 = 1, /* 0x00000002 */
  SystemApplication_OsCore0 = 2, /* 0x00000004 */
  OS_APPID_COUNT = 3,
  INVALID_OSAPPLICATION = OS_APPID_COUNT
} ApplicationType;

/*! Trusted function identifier. */
typedef enum
{
  OS_TRUSTEDFUNCTIONID_COUNT = 0
} TrustedFunctionIndexType;

/*! Non-Trusted function identifier. */
typedef enum
{
  OS_NONTRUSTEDFUNCTIONID_COUNT = 0
} Os_NonTrustedFunctionIndexType;

/*! Fast Trusted function identifier. */
typedef enum
{
  OS_FASTTRUSTEDFUNCTIONID_COUNT = 0
} Os_FastTrustedFunctionIndexType;

/*! Task identifier. */
typedef enum
{
  Default_Appl_Task = 0,
  Default_BSW_Async_Task = 1,
  Default_Init_Task = 2,
  IdleTask_OsCore0 = 3,
  PvtTask = 4,
  StartApplication_MemoryViolation_Task = 5,
  StartApplication_Trusted_Task = 6,
  OS_TASKID_COUNT = 7,
  INVALID_TASK = OS_TASKID_COUNT
} TaskType;

/*! Category 2 ISR identifier. */
typedef enum
{
  ADC_0_EOC = 0,
  ADC_1_EOC = 1,
  CanIsr_0_BusOff = 2,
  CanIsr_0_MB00To03 = 3,
  CanIsr_0_MB04To07 = 4,
  CanIsr_0_MB08To11 = 5,
  CanIsr_0_MB12To15 = 6,
  CanIsr_0_MB16To31 = 7,
  CanIsr_0_MB32To63 = 8,
  CanIsr_0_MB64To95 = 9,
  CanIsr_1_BusOff = 10,
  CanIsr_1_MB00To03 = 11,
  CanIsr_1_MB04To07 = 12,
  CanIsr_1_MB08To11 = 13,
  CanIsr_1_MB12To15 = 14,
  CanIsr_1_MB16To31 = 15,
  CanIsr_1_MB32To63 = 16,
  CanIsr_1_MB64To95 = 17,
  CanIsr_2_BusOff = 18,
  CanIsr_2_MB00To03 = 19,
  CanIsr_2_MB04To07 = 20,
  CanIsr_2_MB08To11 = 21,
  CanIsr_2_MB12To15 = 22,
  CanIsr_2_MB16To31 = 23,
  CanIsr_2_MB32To63 = 24,
  CanIsr_2_MB64To95 = 25,
  CanIsr_4_BusOff = 26,
  CanIsr_4_MB00To03 = 27,
  CanIsr_4_MB04To07 = 28,
  CanIsr_4_MB08To11 = 29,
  CanIsr_4_MB12To15 = 30,
  CanIsr_4_MB16To31 = 31,
  CanIsr_4_MB32To63 = 32,
  CanIsr_4_MB64To95 = 33,
  CanIsr_7_BusOff = 34,
  CanIsr_7_MB00To03 = 35,
  CanIsr_7_MB04To07 = 36,
  CanIsr_7_MB08To11 = 37,
  CanIsr_7_MB12To15 = 38,
  CanIsr_7_MB16To31 = 39,
  CanIsr_7_MB32To63 = 40,
  CanIsr_7_MB64To95 = 41,
  CounterIsr_SystemTimer = 42,
  Gpt_PIT_0_TIMER_0_ISR = 43,
  IRQ_LFIC_WKUP_27_28 = 44,
  Lin_Channel_0_ERR = 45,
  Lin_Channel_0_RXI = 46,
  Lin_Channel_0_TXI = 47,
  Lin_Channel_10_ERR = 48,
  Lin_Channel_10_RXI = 49,
  Lin_Channel_10_TXI = 50,
  Lin_Channel_1_ERR = 51,
  Lin_Channel_1_RXI = 52,
  Lin_Channel_1_TXI = 53,
  Lin_Channel_6_ERR = 54,
  Lin_Channel_6_RXI = 55,
  Lin_Channel_6_TXI = 56,
  Lin_Channel_7_ERR = 57,
  Lin_Channel_7_RXI = 58,
  Lin_Channel_7_TXI = 59,
  PWM_HS_EMIOS0_Ch24_25 = 60,
  PWM_LS_EMIOS1_Ch6_7 = 61,
  OS_ISRID_COUNT = 62,
  INVALID_ISR = OS_ISRID_COUNT
} ISRType;

/*! Alarm identifier. */
typedef enum
{
  Alarm_StartApplication_MemoryViolation_Task = 0,
  Alarm_StartApplication_Trusted_Task = 1,
  Rte_Al_TE2_Default_BSW_Async_Task_0_100ms = 2,
  Rte_Al_TE2_Default_BSW_Async_Task_0_10ms = 3,
  Rte_Al_TE2_Default_BSW_Async_Task_0_20ms = 4,
  Rte_Al_TE2_Default_BSW_Async_Task_0_5ms = 5,
  Rte_Al_TE_PvtTask_0_10ms = 6,
  Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms = 7,
  Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms = 8,
  Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms = 9,
  Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms = 10,
  Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms = 11,
  Rte_Al_TE_StartApplication_Trusted_Task_0_10ms = 12,
  Rte_Al_TE_TP_RE_SMK_TP = 13,
  OS_ALARMID_COUNT = 14
} AlarmType;

/*! Counter identifier. */
typedef enum
{
  SystemTimer = 0,
  OS_COUNTERID_COUNT = 1
} CounterType;

/*! ScheduleTable identifier. */
typedef enum
{
  OS_SCHTID_COUNT = 0
} ScheduleTableType;

/*! Resource identifier. */
typedef enum
{
  OsResource = 0,
  OS_RESOURCEID_COUNT = 1
} ResourceType;

/*! Spinlock identifier. */
typedef enum
{
  OS_SPINLOCKID_COUNT = 0,
  INVALID_SPINLOCK = OS_SPINLOCKID_COUNT
} SpinlockIdType;

/*! Peripheral identifier. */
typedef enum
{
  ADC_PROTECTED_AREA_ADC0 = 0,
  ADC_PROTECTED_AREA_ADC1 = 1,
  CAN_PROTECTED_AREA_CH0 = 2,
  CAN_PROTECTED_AREA_CH1 = 3,
  CAN_PROTECTED_AREA_CH2 = 4,
  CAN_PROTECTED_AREA_CH3 = 5,
  CAN_PROTECTED_AREA_CH4 = 6,
  CAN_PROTECTED_AREA_CH7 = 7,
  Dio = 8,
  OS_PERIPHERALID_COUNT = 9
} Os_PeripheralIdType;

/*! Trace thread identifier (Tasks and ISRs inclusive system objects). */
typedef enum
{
  Os_TraceId_Default_Appl_Task = 0,
  Os_TraceId_Default_BSW_Async_Task = 1,
  Os_TraceId_Default_Init_Task = 2,
  Os_TraceId_IdleTask_OsCore0 = 3,
  Os_TraceId_PvtTask = 4,
  Os_TraceId_StartApplication_MemoryViolation_Task = 5,
  Os_TraceId_StartApplication_Trusted_Task = 6,
  Os_TraceId_ADC_0_EOC = 7,
  Os_TraceId_ADC_1_EOC = 8,
  Os_TraceId_CanIsr_0_BusOff = 9,
  Os_TraceId_CanIsr_0_MB00To03 = 10,
  Os_TraceId_CanIsr_0_MB04To07 = 11,
  Os_TraceId_CanIsr_0_MB08To11 = 12,
  Os_TraceId_CanIsr_0_MB12To15 = 13,
  Os_TraceId_CanIsr_0_MB16To31 = 14,
  Os_TraceId_CanIsr_0_MB32To63 = 15,
  Os_TraceId_CanIsr_0_MB64To95 = 16,
  Os_TraceId_CanIsr_1_BusOff = 17,
  Os_TraceId_CanIsr_1_MB00To03 = 18,
  Os_TraceId_CanIsr_1_MB04To07 = 19,
  Os_TraceId_CanIsr_1_MB08To11 = 20,
  Os_TraceId_CanIsr_1_MB12To15 = 21,
  Os_TraceId_CanIsr_1_MB16To31 = 22,
  Os_TraceId_CanIsr_1_MB32To63 = 23,
  Os_TraceId_CanIsr_1_MB64To95 = 24,
  Os_TraceId_CanIsr_2_BusOff = 25,
  Os_TraceId_CanIsr_2_MB00To03 = 26,
  Os_TraceId_CanIsr_2_MB04To07 = 27,
  Os_TraceId_CanIsr_2_MB08To11 = 28,
  Os_TraceId_CanIsr_2_MB12To15 = 29,
  Os_TraceId_CanIsr_2_MB16To31 = 30,
  Os_TraceId_CanIsr_2_MB32To63 = 31,
  Os_TraceId_CanIsr_2_MB64To95 = 32,
  Os_TraceId_CanIsr_4_BusOff = 33,
  Os_TraceId_CanIsr_4_MB00To03 = 34,
  Os_TraceId_CanIsr_4_MB04To07 = 35,
  Os_TraceId_CanIsr_4_MB08To11 = 36,
  Os_TraceId_CanIsr_4_MB12To15 = 37,
  Os_TraceId_CanIsr_4_MB16To31 = 38,
  Os_TraceId_CanIsr_4_MB32To63 = 39,
  Os_TraceId_CanIsr_4_MB64To95 = 40,
  Os_TraceId_CanIsr_7_BusOff = 41,
  Os_TraceId_CanIsr_7_MB00To03 = 42,
  Os_TraceId_CanIsr_7_MB04To07 = 43,
  Os_TraceId_CanIsr_7_MB08To11 = 44,
  Os_TraceId_CanIsr_7_MB12To15 = 45,
  Os_TraceId_CanIsr_7_MB16To31 = 46,
  Os_TraceId_CanIsr_7_MB32To63 = 47,
  Os_TraceId_CanIsr_7_MB64To95 = 48,
  Os_TraceId_CounterIsr_SystemTimer = 49,
  Os_TraceId_Gpt_PIT_0_TIMER_0_ISR = 50,
  Os_TraceId_IRQ_LFIC_WKUP_27_28 = 51,
  Os_TraceId_Lin_Channel_0_ERR = 52,
  Os_TraceId_Lin_Channel_0_RXI = 53,
  Os_TraceId_Lin_Channel_0_TXI = 54,
  Os_TraceId_Lin_Channel_10_ERR = 55,
  Os_TraceId_Lin_Channel_10_RXI = 56,
  Os_TraceId_Lin_Channel_10_TXI = 57,
  Os_TraceId_Lin_Channel_1_ERR = 58,
  Os_TraceId_Lin_Channel_1_RXI = 59,
  Os_TraceId_Lin_Channel_1_TXI = 60,
  Os_TraceId_Lin_Channel_6_ERR = 61,
  Os_TraceId_Lin_Channel_6_RXI = 62,
  Os_TraceId_Lin_Channel_6_TXI = 63,
  Os_TraceId_Lin_Channel_7_ERR = 64,
  Os_TraceId_Lin_Channel_7_RXI = 65,
  Os_TraceId_Lin_Channel_7_TXI = 66,
  Os_TraceId_PWM_HS_EMIOS0_Ch24_25 = 67,
  Os_TraceId_PWM_LS_EMIOS1_Ch6_7 = 68,
  OS_TRACE_THREADID_COUNT = 69,
  OS_TRACE_INVALID_THREAD = OS_TRACE_THREADID_COUNT + 1
} Os_TraceThreadIdType;

/*! Trace spinlock identifier (All spinlocks inclusive system objects). */
typedef enum
{
  OS_TRACE_NUMBER_OF_CONFIGURED_SPINLOCKS = OS_SPINLOCKID_COUNT,
  OS_TRACE_NUMBER_OF_ALL_SPINLOCKS = OS_SPINLOCKID_COUNT + 0,
  OS_TRACE_INVALID_SPINLOCK = OS_TRACE_NUMBER_OF_ALL_SPINLOCKS + 1
} Os_TraceSpinlockIdType;

/*! Barrier identifiers. */
typedef enum
{
  OS_BARRIERID_COUNT = 0
} Os_BarrierIdType;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_TYPES_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Types_Lcfg.h
 *********************************************************************************************************************/
