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
 *              File: Os_Lcfg.h
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

#if !defined (OS_LCFG_H)                                                             /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Cfg.h"
# include "Os_Types.h"
# include "Os_Types_Lcfg.h"

/* Os kernel module dependencies */

/* Os hal dependencies */
# include "Os_Hal_Lcfg.h"

/* User file includes */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_Default_Appl_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_Appl_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_APPL_TASK_CODE) Os_Task_Default_Appl_Task(void);

# define OS_STOP_SEC_Default_Appl_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Default_BSW_Async_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_BSW_Async_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_BSW_ASYNC_TASK_CODE) Os_Task_Default_BSW_Async_Task(void);

# define OS_STOP_SEC_Default_BSW_Async_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Default_Init_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_Init_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_INIT_TASK_CODE) Os_Task_Default_Init_Task(void);

# define OS_STOP_SEC_Default_Init_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_PvtTask_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  PvtTask()
 *********************************************************************************************************************/
extern FUNC(void, OS_PVTTASK_CODE) Os_Task_PvtTask(void);

# define OS_STOP_SEC_PvtTask_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_StartApplication_MemoryViolation_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  StartApplication_MemoryViolation_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_STARTAPPLICATION_MEMORYVIOLATION_TASK_CODE) Os_Task_StartApplication_MemoryViolation_Task(void);

# define OS_STOP_SEC_StartApplication_MemoryViolation_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_StartApplication_Trusted_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  StartApplication_Trusted_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_STARTAPPLICATION_TRUSTED_TASK_CODE) Os_Task_StartApplication_Trusted_Task(void);

# define OS_STOP_SEC_StartApplication_Trusted_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Adc_Adcdig_EndGroupConvUnit0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Adc_Adcdig_EndGroupConvUnit0()
 *********************************************************************************************************************/
extern FUNC(void, OS_ADC_ADCDIG_ENDGROUPCONVUNIT0_CODE) Os_Isr_Adc_Adcdig_EndGroupConvUnit0(void);

# define OS_STOP_SEC_Adc_Adcdig_EndGroupConvUnit0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Adc_Adcdig_EndGroupConvUnit1_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Adc_Adcdig_EndGroupConvUnit1()
 *********************************************************************************************************************/
extern FUNC(void, OS_ADC_ADCDIG_ENDGROUPCONVUNIT1_CODE) Os_Isr_Adc_Adcdig_EndGroupConvUnit1(void);

# define OS_STOP_SEC_Adc_Adcdig_EndGroupConvUnit1_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CanBusOffIsr_0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  CanBusOffIsr_0()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANBUSOFFISR_0_CODE) Os_Isr_CanBusOffIsr_0(void);

# define OS_STOP_SEC_CanBusOffIsr_0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CanBusOffIsr_1_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  CanBusOffIsr_1()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANBUSOFFISR_1_CODE) Os_Isr_CanBusOffIsr_1(void);

# define OS_STOP_SEC_CanBusOffIsr_1_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CanBusOffIsr_2_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  CanBusOffIsr_2()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANBUSOFFISR_2_CODE) Os_Isr_CanBusOffIsr_2(void);

# define OS_STOP_SEC_CanBusOffIsr_2_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CanBusOffIsr_4_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  CanBusOffIsr_4()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANBUSOFFISR_4_CODE) Os_Isr_CanBusOffIsr_4(void);

# define OS_STOP_SEC_CanBusOffIsr_4_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CanBusOffIsr_7_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  CanBusOffIsr_7()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANBUSOFFISR_7_CODE) Os_Isr_CanBusOffIsr_7(void);

# define OS_STOP_SEC_CanBusOffIsr_7_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CanMailboxIsr_0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  CanMailboxIsr_0()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANMAILBOXISR_0_CODE) Os_Isr_CanMailboxIsr_0(void);

# define OS_STOP_SEC_CanMailboxIsr_0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CanMailboxIsr_1_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  CanMailboxIsr_1()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANMAILBOXISR_1_CODE) Os_Isr_CanMailboxIsr_1(void);

# define OS_STOP_SEC_CanMailboxIsr_1_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CanMailboxIsr_2_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  CanMailboxIsr_2()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANMAILBOXISR_2_CODE) Os_Isr_CanMailboxIsr_2(void);

# define OS_STOP_SEC_CanMailboxIsr_2_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CanMailboxIsr_4_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  CanMailboxIsr_4()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANMAILBOXISR_4_CODE) Os_Isr_CanMailboxIsr_4(void);

# define OS_STOP_SEC_CanMailboxIsr_4_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CanMailboxIsr_7_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  CanMailboxIsr_7()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANMAILBOXISR_7_CODE) Os_Isr_CanMailboxIsr_7(void);

# define OS_STOP_SEC_CanMailboxIsr_7_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_EMIOS_0_CH_24_CH_25_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  EMIOS_0_CH_24_CH_25_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_EMIOS_0_CH_24_CH_25_ISR_CODE) Os_Isr_EMIOS_0_CH_24_CH_25_ISR(void);

# define OS_STOP_SEC_EMIOS_0_CH_24_CH_25_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_EMIOS_1_CH_6_CH_7_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  EMIOS_1_CH_6_CH_7_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_EMIOS_1_CH_6_CH_7_ISR_CODE) Os_Isr_EMIOS_1_CH_6_CH_7_ISR(void);

# define OS_STOP_SEC_EMIOS_1_CH_6_CH_7_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Gpt_PIT_0_TIMER_0_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Gpt_PIT_0_TIMER_0_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_GPT_PIT_0_TIMER_0_ISR_CODE) Os_Isr_Gpt_PIT_0_TIMER_0_ISR(void);

# define OS_STOP_SEC_Gpt_PIT_0_TIMER_0_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_LinIsr_0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  LinIsr_0()
 *********************************************************************************************************************/
extern FUNC(void, OS_LINISR_0_CODE) Os_Isr_LinIsr_0(void);

# define OS_STOP_SEC_LinIsr_0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_LinIsr_1_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  LinIsr_1()
 *********************************************************************************************************************/
extern FUNC(void, OS_LINISR_1_CODE) Os_Isr_LinIsr_1(void);

# define OS_STOP_SEC_LinIsr_1_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_LinIsr_10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  LinIsr_10()
 *********************************************************************************************************************/
extern FUNC(void, OS_LINISR_10_CODE) Os_Isr_LinIsr_10(void);

# define OS_STOP_SEC_LinIsr_10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_LinIsr_6_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  LinIsr_6()
 *********************************************************************************************************************/
extern FUNC(void, OS_LINISR_6_CODE) Os_Isr_LinIsr_6(void);

# define OS_STOP_SEC_LinIsr_6_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_LinIsr_7_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  LinIsr_7()
 *********************************************************************************************************************/
extern FUNC(void, OS_LINISR_7_CODE) Os_Isr_LinIsr_7(void);

# define OS_STOP_SEC_LinIsr_7_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_WKPU_EXT_IRQ_24_31_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  WKPU_EXT_IRQ_24_31_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_WKPU_EXT_IRQ_24_31_ISR_CODE) Os_Isr_WKPU_EXT_IRQ_24_31_ISR(void);

# define OS_STOP_SEC_WKPU_EXT_IRQ_24_31_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#endif /* OS_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Lcfg.h
 *********************************************************************************************************************/
