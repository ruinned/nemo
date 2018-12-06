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
 *              File: Os_Hal_Context_Lcfg.h
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

#if !defined (OS_HAL_CONTEXT_LCFG_H)                                                 /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_HAL_CONTEXT_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Hal_Context_Types.h"

/* Os kernel module dependencies */
# include "Os_Core_Cfg.h"

/* Os hal dependencies */
# include "Os_Hal_Os_Types.h"


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

# define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL dynamic hook context data: Os_CoreInitHook_OsCore0 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Os_CoreInitHook_OsCore0_Dyn;

/*! HAL dynamic hook context data: ErrorHook_OsCore0 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_ErrorHook_OsCore0_Dyn;

/*! HAL dynamic hook context data: ProtectionHook_OsCore0 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_ProtectionHook_OsCore0_Dyn;

/*! HAL dynamic ISR2 level context data: Level1 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level1_Dyn;

/*! HAL dynamic ISR2 level context data: Level2 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level2_Dyn;

/*! HAL dynamic ISR2 level context data: Level3 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level3_Dyn;

/*! HAL dynamic ISR2 level context data: Level4 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level4_Dyn;

/*! HAL dynamic ISR2 level context data: Level5 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level5_Dyn;

/*! HAL dynamic ISR2 level context data: Level6 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level6_Dyn;

/*! HAL dynamic ISR2 level context data: Level7 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level7_Dyn;

/*! HAL dynamic ISR2 level context data: Level8 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level8_Dyn;

/*! HAL dynamic ISR2 level context data: Level9 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level9_Dyn;

/*! HAL dynamic ISR2 level context data: Level10 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level10_Dyn;

/*! HAL dynamic ISR2 level context data: Level11 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level11_Dyn;

/*! HAL dynamic ISR2 level context data: Level12 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level12_Dyn;

/*! HAL dynamic ISR2 level context data: Level13 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level13_Dyn;

/*! HAL dynamic ISR2 level context data: Level14 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level14_Dyn;

/*! HAL dynamic task context data: Default_Appl_Task */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_Appl_Task_Dyn;


/*! HAL dynamic task context data: Default_BSW_Async_Task */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_BSW_Async_Task_Dyn;


/*! HAL dynamic task context data: Default_Init_Task */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_Init_Task_Dyn;


/*! HAL dynamic task context data: IdleTask_OsCore0 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_IdleTask_OsCore0_Dyn;


/*! HAL dynamic task context data: PvtTask */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_PvtTask_Dyn;


/*! HAL dynamic task context data: StartApplication_MemoryViolation_Task */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_StartApplication_MemoryViolation_Task_Dyn;


/*! HAL dynamic task context data: StartApplication_Trusted_Task */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_StartApplication_Trusted_Task_Dyn;


/*! HAL exception context data: OsCore0 */
extern VAR(Os_ExceptionContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_ExceptionContext;

# define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL hook context configuration data: Os_CoreInitHook_OsCore0 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Os_CoreInitHook_OsCore0;

/*! HAL hook context configuration data: ErrorHook_OsCore0 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ErrorHook_OsCore0;

/*! HAL hook context configuration data: ProtectionHook_OsCore0 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ProtectionHook_OsCore0;

/*! HAL ISR2 context configuration data: ADC_0_EOC */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ADC_0_EOC;

/*! HAL ISR2 context configuration data: ADC_1_EOC */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ADC_1_EOC;

/*! HAL ISR2 context configuration data: CanIsr_0_BusOff */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_BusOff;

/*! HAL ISR2 context configuration data: CanIsr_0_MB00To03 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB00To03;

/*! HAL ISR2 context configuration data: CanIsr_0_MB04To07 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB04To07;

/*! HAL ISR2 context configuration data: CanIsr_0_MB08To11 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB08To11;

/*! HAL ISR2 context configuration data: CanIsr_0_MB12To15 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB12To15;

/*! HAL ISR2 context configuration data: CanIsr_0_MB16To31 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB16To31;

/*! HAL ISR2 context configuration data: CanIsr_0_MB32To63 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB32To63;

/*! HAL ISR2 context configuration data: CanIsr_0_MB64To95 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB64To95;

/*! HAL ISR2 context configuration data: CanIsr_1_BusOff */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_BusOff;

/*! HAL ISR2 context configuration data: CanIsr_1_MB00To03 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_MB00To03;

/*! HAL ISR2 context configuration data: CanIsr_1_MB04To07 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_MB04To07;

/*! HAL ISR2 context configuration data: CanIsr_1_MB08To11 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_MB08To11;

/*! HAL ISR2 context configuration data: CanIsr_1_MB12To15 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_MB12To15;

/*! HAL ISR2 context configuration data: CanIsr_1_MB16To31 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_MB16To31;

/*! HAL ISR2 context configuration data: CanIsr_1_MB32To63 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_MB32To63;

/*! HAL ISR2 context configuration data: CanIsr_1_MB64To95 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1_MB64To95;

/*! HAL ISR2 context configuration data: CanIsr_2_BusOff */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_BusOff;

/*! HAL ISR2 context configuration data: CanIsr_2_MB00To03 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_MB00To03;

/*! HAL ISR2 context configuration data: CanIsr_2_MB04To07 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_MB04To07;

/*! HAL ISR2 context configuration data: CanIsr_2_MB08To11 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_MB08To11;

/*! HAL ISR2 context configuration data: CanIsr_2_MB12To15 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_MB12To15;

/*! HAL ISR2 context configuration data: CanIsr_2_MB16To31 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_MB16To31;

/*! HAL ISR2 context configuration data: CanIsr_2_MB32To63 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_MB32To63;

/*! HAL ISR2 context configuration data: CanIsr_2_MB64To95 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_2_MB64To95;

/*! HAL ISR2 context configuration data: CanIsr_4_BusOff */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_BusOff;

/*! HAL ISR2 context configuration data: CanIsr_4_MB00To03 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_MB00To03;

/*! HAL ISR2 context configuration data: CanIsr_4_MB04To07 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_MB04To07;

/*! HAL ISR2 context configuration data: CanIsr_4_MB08To11 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_MB08To11;

/*! HAL ISR2 context configuration data: CanIsr_4_MB12To15 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_MB12To15;

/*! HAL ISR2 context configuration data: CanIsr_4_MB16To31 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_MB16To31;

/*! HAL ISR2 context configuration data: CanIsr_4_MB32To63 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_MB32To63;

/*! HAL ISR2 context configuration data: CanIsr_4_MB64To95 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_4_MB64To95;

/*! HAL ISR2 context configuration data: CanIsr_7_BusOff */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_BusOff;

/*! HAL ISR2 context configuration data: CanIsr_7_MB00To03 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_MB00To03;

/*! HAL ISR2 context configuration data: CanIsr_7_MB04To07 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_MB04To07;

/*! HAL ISR2 context configuration data: CanIsr_7_MB08To11 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_MB08To11;

/*! HAL ISR2 context configuration data: CanIsr_7_MB12To15 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_MB12To15;

/*! HAL ISR2 context configuration data: CanIsr_7_MB16To31 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_MB16To31;

/*! HAL ISR2 context configuration data: CanIsr_7_MB32To63 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_MB32To63;

/*! HAL ISR2 context configuration data: CanIsr_7_MB64To95 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_7_MB64To95;

/*! HAL ISR2 context configuration data: CounterIsr_SystemTimer */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CounterIsr_SystemTimer;

/*! HAL ISR2 context configuration data: Gpt_PIT_0_TIMER_0_ISR */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Gpt_PIT_0_TIMER_0_ISR;

/*! HAL ISR2 context configuration data: IRQ_LFIC_WKUP_27_28 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_IRQ_LFIC_WKUP_27_28;

/*! HAL ISR2 context configuration data: Lin_Channel_0_ERR */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_0_ERR;

/*! HAL ISR2 context configuration data: Lin_Channel_0_RXI */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_0_RXI;

/*! HAL ISR2 context configuration data: Lin_Channel_0_TXI */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_0_TXI;

/*! HAL ISR2 context configuration data: Lin_Channel_10_ERR */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_10_ERR;

/*! HAL ISR2 context configuration data: Lin_Channel_10_RXI */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_10_RXI;

/*! HAL ISR2 context configuration data: Lin_Channel_10_TXI */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_10_TXI;

/*! HAL ISR2 context configuration data: Lin_Channel_1_ERR */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_1_ERR;

/*! HAL ISR2 context configuration data: Lin_Channel_1_RXI */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_1_RXI;

/*! HAL ISR2 context configuration data: Lin_Channel_1_TXI */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_1_TXI;

/*! HAL ISR2 context configuration data: Lin_Channel_6_ERR */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_6_ERR;

/*! HAL ISR2 context configuration data: Lin_Channel_6_RXI */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_6_RXI;

/*! HAL ISR2 context configuration data: Lin_Channel_6_TXI */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_6_TXI;

/*! HAL ISR2 context configuration data: Lin_Channel_7_ERR */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_7_ERR;

/*! HAL ISR2 context configuration data: Lin_Channel_7_RXI */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_7_RXI;

/*! HAL ISR2 context configuration data: Lin_Channel_7_TXI */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Lin_Channel_7_TXI;

/*! HAL ISR2 context configuration data: PWM_HS_EMIOS0_Ch24_25 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_PWM_HS_EMIOS0_Ch24_25;

/*! HAL ISR2 context configuration data: PWM_LS_EMIOS1_Ch6_7 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_PWM_LS_EMIOS1_Ch6_7;

/*! HAL task context configuration data: Default_Appl_Task */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_Appl_Task;

/*! HAL task context configuration data: Default_BSW_Async_Task */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_BSW_Async_Task;

/*! HAL task context configuration data: Default_Init_Task */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_Init_Task;

/*! HAL task context configuration data: IdleTask_OsCore0 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_IdleTask_OsCore0;

/*! HAL task context configuration data: PvtTask */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_PvtTask;

/*! HAL task context configuration data: StartApplication_MemoryViolation_Task */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_StartApplication_MemoryViolation_Task;

/*! HAL task context configuration data: StartApplication_Trusted_Task */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_StartApplication_Trusted_Task;

/*! HAL kernel stack configuration data: OsCore0_Kernel */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_OsCore0_Kernel;

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



# define OS_START_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for HAL exception context. */
extern CONSTP2VAR(Os_ExceptionContextType, AUTOMATIC, OS_CONST)
  OsCfg_Hal_Context_ExceptionContextRef[OS_CFG_COREPHYSICALID_COUNT + 1];

# define OS_STOP_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_HAL_CONTEXT_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Context_Lcfg.h
 *********************************************************************************************************************/
