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
 *              File: Os_Isr_Lcfg.h
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

#if !defined (OS_ISR_LCFG_H)                                                         /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_ISR_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Isr_Types.h"

/* Os kernel module dependencies */
# include "Os_Lcfg.h"
# include "Os_Timer_Types.h"
# include "Os_XSignal_Types.h"

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

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! ISR configuration data: ADC_0_EOC */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC_0_EOC;

/*! ISR configuration data: ADC_1_EOC */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_ADC_1_EOC;

/*! ISR configuration data: CanIsr_0_BusOff */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_BusOff;

/*! ISR configuration data: CanIsr_0_MB00To03 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_MB00To03;

/*! ISR configuration data: CanIsr_0_MB04To07 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_MB04To07;

/*! ISR configuration data: CanIsr_0_MB08To11 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_MB08To11;

/*! ISR configuration data: CanIsr_0_MB12To15 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_MB12To15;

/*! ISR configuration data: CanIsr_0_MB16To31 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_MB16To31;

/*! ISR configuration data: CanIsr_0_MB32To63 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_MB32To63;

/*! ISR configuration data: CanIsr_0_MB64To95 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_0_MB64To95;

/*! ISR configuration data: CanIsr_1_BusOff */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_BusOff;

/*! ISR configuration data: CanIsr_1_MB00To03 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_MB00To03;

/*! ISR configuration data: CanIsr_1_MB04To07 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_MB04To07;

/*! ISR configuration data: CanIsr_1_MB08To11 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_MB08To11;

/*! ISR configuration data: CanIsr_1_MB12To15 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_MB12To15;

/*! ISR configuration data: CanIsr_1_MB16To31 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_MB16To31;

/*! ISR configuration data: CanIsr_1_MB32To63 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_MB32To63;

/*! ISR configuration data: CanIsr_1_MB64To95 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1_MB64To95;

/*! ISR configuration data: CanIsr_2_BusOff */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_BusOff;

/*! ISR configuration data: CanIsr_2_MB00To03 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_MB00To03;

/*! ISR configuration data: CanIsr_2_MB04To07 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_MB04To07;

/*! ISR configuration data: CanIsr_2_MB08To11 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_MB08To11;

/*! ISR configuration data: CanIsr_2_MB12To15 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_MB12To15;

/*! ISR configuration data: CanIsr_2_MB16To31 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_MB16To31;

/*! ISR configuration data: CanIsr_2_MB32To63 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_MB32To63;

/*! ISR configuration data: CanIsr_2_MB64To95 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_2_MB64To95;

/*! ISR configuration data: CanIsr_4_BusOff */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_BusOff;

/*! ISR configuration data: CanIsr_4_MB00To03 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_MB00To03;

/*! ISR configuration data: CanIsr_4_MB04To07 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_MB04To07;

/*! ISR configuration data: CanIsr_4_MB08To11 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_MB08To11;

/*! ISR configuration data: CanIsr_4_MB12To15 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_MB12To15;

/*! ISR configuration data: CanIsr_4_MB16To31 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_MB16To31;

/*! ISR configuration data: CanIsr_4_MB32To63 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_MB32To63;

/*! ISR configuration data: CanIsr_4_MB64To95 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_4_MB64To95;

/*! ISR configuration data: CanIsr_7_BusOff */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_BusOff;

/*! ISR configuration data: CanIsr_7_MB00To03 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_MB00To03;

/*! ISR configuration data: CanIsr_7_MB04To07 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_MB04To07;

/*! ISR configuration data: CanIsr_7_MB08To11 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_MB08To11;

/*! ISR configuration data: CanIsr_7_MB12To15 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_MB12To15;

/*! ISR configuration data: CanIsr_7_MB16To31 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_MB16To31;

/*! ISR configuration data: CanIsr_7_MB32To63 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_MB32To63;

/*! ISR configuration data: CanIsr_7_MB64To95 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_7_MB64To95;

/*! ISR configuration data: CounterIsr_SystemTimer */
extern CONST(Os_TimerIsrConfigType, OS_CONST) OsCfg_Isr_CounterIsr_SystemTimer;

/*! ISR configuration data: Gpt_PIT_0_TIMER_0_ISR */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Gpt_PIT_0_TIMER_0_ISR;

/*! ISR configuration data: IRQ_LFIC_WKUP_27_28 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_IRQ_LFIC_WKUP_27_28;

/*! ISR configuration data: Lin_Channel_0_ERR */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_0_ERR;

/*! ISR configuration data: Lin_Channel_0_RXI */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_0_RXI;

/*! ISR configuration data: Lin_Channel_0_TXI */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_0_TXI;

/*! ISR configuration data: Lin_Channel_10_ERR */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_10_ERR;

/*! ISR configuration data: Lin_Channel_10_RXI */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_10_RXI;

/*! ISR configuration data: Lin_Channel_10_TXI */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_10_TXI;

/*! ISR configuration data: Lin_Channel_1_ERR */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_1_ERR;

/*! ISR configuration data: Lin_Channel_1_RXI */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_1_RXI;

/*! ISR configuration data: Lin_Channel_1_TXI */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_1_TXI;

/*! ISR configuration data: Lin_Channel_6_ERR */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_6_ERR;

/*! ISR configuration data: Lin_Channel_6_RXI */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_6_RXI;

/*! ISR configuration data: Lin_Channel_6_TXI */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_6_TXI;

/*! ISR configuration data: Lin_Channel_7_ERR */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_7_ERR;

/*! ISR configuration data: Lin_Channel_7_RXI */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_7_RXI;

/*! ISR configuration data: Lin_Channel_7_TXI */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_Lin_Channel_7_TXI;

/*! ISR configuration data: PWM_HS_EMIOS0_Ch24_25 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_PWM_HS_EMIOS0_Ch24_25;

/*! ISR configuration data: PWM_LS_EMIOS1_Ch6_7 */
extern CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_PWM_LS_EMIOS1_Ch6_7;

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for category 2 ISRs. */
extern CONSTP2CONST(Os_IsrConfigType, OS_CONST, OS_CONST) OsCfg_IsrRefs[OS_ISRID_COUNT + 1];

# define OS_STOP_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_ISR_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Isr_Lcfg.h
 *********************************************************************************************************************/
