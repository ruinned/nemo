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
 *              File: Os_Hal_MemoryProtection_Lcfg.h
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

#if !defined (OS_HAL_MEMORYPROTECTION_LCFG_H)                                        /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_HAL_MEMORYPROTECTION_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Hal_MemoryProtection_Types.h"

/* Os kernel module dependencies */

/* Os hal dependencies */


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

/* Start/end address label declarations */
extern uint8 _OS_CORE0_STACKS_START[]; /* PRQA S 3684 */ /* MD_Os_3684_LinkerSymbol */
extern uint8 _OS_GLOBALSHARED_VAR_END[]; /* PRQA S 3684 */ /* MD_Os_3684_LinkerSymbol */
extern uint8 _OS_GLOBALSHARED_VAR_START[]; /* PRQA S 3684 */ /* MD_Os_3684_LinkerSymbol */
extern uint8 _OS_OsApplication_Trusted_Core0_VAR_ALL_END[]; /* PRQA S 3684 */ /* MD_Os_3684_LinkerSymbol */
extern uint8 _OS_OsApplication_Trusted_Core0_VAR_ALL_START[]; /* PRQA S 3684 */ /* MD_Os_3684_LinkerSymbol */
extern uint8 _OS_OsApplication_Untrusted_Core0_VAR_ALL_END[]; /* PRQA S 3684 */ /* MD_Os_3684_LinkerSymbol */
extern uint8 _OS_OsApplication_Untrusted_Core0_VAR_ALL_START[]; /* PRQA S 3684 */ /* MD_Os_3684_LinkerSymbol */
extern uint8 _OS_SystemApplication_OsCore0_VAR_ALL_END[]; /* PRQA S 3684 */ /* MD_Os_3684_LinkerSymbol */
extern uint8 _OS_SystemApplication_OsCore0_VAR_ALL_START[]; /* PRQA S 3684 */ /* MD_Os_3684_LinkerSymbol */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL memory protection configuration data: OsCore0 */
extern CONST(Os_Hal_MpCoreConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore0;

/*! HAL memory protection configuration data: OsApplication_Trusted_Core0 */
extern CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsApplication_Trusted_Core0;

/*! HAL memory protection configuration data: OsApplication_Untrusted_Core0 */
extern CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsApplication_Untrusted_Core0;

/*! HAL memory protection configuration data: SystemApplication_OsCore0 */
extern CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_SystemApplication_OsCore0;

/*! HAL memory protection configuration data: ADC_0_EOC */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_ADC_0_EOC;

/*! HAL memory protection configuration data: ADC_1_EOC */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_ADC_1_EOC;

/*! HAL memory protection configuration data: CanIsr_0_BusOff */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_BusOff;

/*! HAL memory protection configuration data: CanIsr_0_MB00To03 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB00To03;

/*! HAL memory protection configuration data: CanIsr_0_MB04To07 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB04To07;

/*! HAL memory protection configuration data: CanIsr_0_MB08To11 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB08To11;

/*! HAL memory protection configuration data: CanIsr_0_MB12To15 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB12To15;

/*! HAL memory protection configuration data: CanIsr_0_MB16To31 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB16To31;

/*! HAL memory protection configuration data: CanIsr_0_MB32To63 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB32To63;

/*! HAL memory protection configuration data: CanIsr_0_MB64To95 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB64To95;

/*! HAL memory protection configuration data: CanIsr_1_BusOff */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_BusOff;

/*! HAL memory protection configuration data: CanIsr_1_MB00To03 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_MB00To03;

/*! HAL memory protection configuration data: CanIsr_1_MB04To07 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_MB04To07;

/*! HAL memory protection configuration data: CanIsr_1_MB08To11 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_MB08To11;

/*! HAL memory protection configuration data: CanIsr_1_MB12To15 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_MB12To15;

/*! HAL memory protection configuration data: CanIsr_1_MB16To31 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_MB16To31;

/*! HAL memory protection configuration data: CanIsr_1_MB32To63 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_MB32To63;

/*! HAL memory protection configuration data: CanIsr_1_MB64To95 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_MB64To95;

/*! HAL memory protection configuration data: CanIsr_2_BusOff */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_BusOff;

/*! HAL memory protection configuration data: CanIsr_2_MB00To03 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_MB00To03;

/*! HAL memory protection configuration data: CanIsr_2_MB04To07 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_MB04To07;

/*! HAL memory protection configuration data: CanIsr_2_MB08To11 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_MB08To11;

/*! HAL memory protection configuration data: CanIsr_2_MB12To15 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_MB12To15;

/*! HAL memory protection configuration data: CanIsr_2_MB16To31 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_MB16To31;

/*! HAL memory protection configuration data: CanIsr_2_MB32To63 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_MB32To63;

/*! HAL memory protection configuration data: CanIsr_2_MB64To95 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_MB64To95;

/*! HAL memory protection configuration data: CanIsr_4_BusOff */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_BusOff;

/*! HAL memory protection configuration data: CanIsr_4_MB00To03 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_MB00To03;

/*! HAL memory protection configuration data: CanIsr_4_MB04To07 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_MB04To07;

/*! HAL memory protection configuration data: CanIsr_4_MB08To11 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_MB08To11;

/*! HAL memory protection configuration data: CanIsr_4_MB12To15 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_MB12To15;

/*! HAL memory protection configuration data: CanIsr_4_MB16To31 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_MB16To31;

/*! HAL memory protection configuration data: CanIsr_4_MB32To63 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_MB32To63;

/*! HAL memory protection configuration data: CanIsr_4_MB64To95 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_MB64To95;

/*! HAL memory protection configuration data: CanIsr_7_BusOff */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_BusOff;

/*! HAL memory protection configuration data: CanIsr_7_MB00To03 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_MB00To03;

/*! HAL memory protection configuration data: CanIsr_7_MB04To07 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_MB04To07;

/*! HAL memory protection configuration data: CanIsr_7_MB08To11 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_MB08To11;

/*! HAL memory protection configuration data: CanIsr_7_MB12To15 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_MB12To15;

/*! HAL memory protection configuration data: CanIsr_7_MB16To31 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_MB16To31;

/*! HAL memory protection configuration data: CanIsr_7_MB32To63 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_MB32To63;

/*! HAL memory protection configuration data: CanIsr_7_MB64To95 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_MB64To95;

/*! HAL memory protection configuration data: CounterIsr_SystemTimer */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CounterIsr_SystemTimer;

/*! HAL memory protection configuration data: Gpt_PIT_0_TIMER_0_ISR */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Gpt_PIT_0_TIMER_0_ISR;

/*! HAL memory protection configuration data: IRQ_LFIC_WKUP_27_28 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IRQ_LFIC_WKUP_27_28;

/*! HAL memory protection configuration data: Lin_Channel_0_ERR */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_0_ERR;

/*! HAL memory protection configuration data: Lin_Channel_0_RXI */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_0_RXI;

/*! HAL memory protection configuration data: Lin_Channel_0_TXI */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_0_TXI;

/*! HAL memory protection configuration data: Lin_Channel_10_ERR */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_10_ERR;

/*! HAL memory protection configuration data: Lin_Channel_10_RXI */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_10_RXI;

/*! HAL memory protection configuration data: Lin_Channel_10_TXI */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_10_TXI;

/*! HAL memory protection configuration data: Lin_Channel_1_ERR */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_1_ERR;

/*! HAL memory protection configuration data: Lin_Channel_1_RXI */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_1_RXI;

/*! HAL memory protection configuration data: Lin_Channel_1_TXI */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_1_TXI;

/*! HAL memory protection configuration data: Lin_Channel_6_ERR */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_6_ERR;

/*! HAL memory protection configuration data: Lin_Channel_6_RXI */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_6_RXI;

/*! HAL memory protection configuration data: Lin_Channel_6_TXI */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_6_TXI;

/*! HAL memory protection configuration data: Lin_Channel_7_ERR */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_7_ERR;

/*! HAL memory protection configuration data: Lin_Channel_7_RXI */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_7_RXI;

/*! HAL memory protection configuration data: Lin_Channel_7_TXI */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_7_TXI;

/*! HAL memory protection configuration data: PWM_HS_EMIOS0_Ch24_25 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_PWM_HS_EMIOS0_Ch24_25;

/*! HAL memory protection configuration data: PWM_LS_EMIOS1_Ch6_7 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_PWM_LS_EMIOS1_Ch6_7;

/*! HAL memory protection configuration data: Default_Appl_Task */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Appl_Task;

/*! HAL memory protection configuration data: Default_BSW_Async_Task */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_BSW_Async_Task;

/*! HAL memory protection configuration data: Default_Init_Task */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Init_Task;

/*! HAL memory protection configuration data: IdleTask_OsCore0 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IdleTask_OsCore0;

/*! HAL memory protection configuration data: PvtTask */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_PvtTask;

/*! HAL memory protection configuration data: StartApplication_MemoryViolation_Task */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_StartApplication_MemoryViolation_Task;

/*! HAL memory protection configuration data: StartApplication_Trusted_Task */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_StartApplication_Trusted_Task;

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL memory protection configuration data: SystemMpu */
extern CONST(Os_Hal_MpSystemConfigType, OS_CONST) OsCfg_Hal_Mp_SystemMpu;

/*! HAL memory protection configuration data: EmptyThread */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_EmptyThread;

# define OS_STOP_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_HAL_MEMORYPROTECTION_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_MemoryProtection_Lcfg.h
 *********************************************************************************************************************/
