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
 *              File: Os_Hal_Interrupt_Lcfg.c
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

#define OS_HAL_INTERRUPT_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_Interrupt_Lcfg.h"
#include "Os_Hal_Interrupt.h"

/* Os kernel module dependencies */

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

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL ISR configuration data: ADC_0_EOC */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ADC_0_EOC =
{
  /* .Source         = */ 548,
  /* .Level          = */ OS_ISR_ADC_0_EOC_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: ADC_1_EOC */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_ADC_1_EOC =
{
  /* .Source         = */ 554,
  /* .Level          = */ OS_ISR_ADC_1_EOC_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_0_BusOff */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_0_BusOff =
{
  /* .Source         = */ 567,
  /* .Level          = */ OS_ISR_CANISR_0_BUSOFF_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_0_MB00To03 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_0_MB00To03 =
{
  /* .Source         = */ 568,
  /* .Level          = */ OS_ISR_CANISR_0_MB00TO03_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_0_MB04To07 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_0_MB04To07 =
{
  /* .Source         = */ 569,
  /* .Level          = */ OS_ISR_CANISR_0_MB04TO07_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_0_MB08To11 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_0_MB08To11 =
{
  /* .Source         = */ 570,
  /* .Level          = */ OS_ISR_CANISR_0_MB08TO11_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_0_MB12To15 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_0_MB12To15 =
{
  /* .Source         = */ 571,
  /* .Level          = */ OS_ISR_CANISR_0_MB12TO15_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_0_MB16To31 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_0_MB16To31 =
{
  /* .Source         = */ 572,
  /* .Level          = */ OS_ISR_CANISR_0_MB16TO31_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_0_MB32To63 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_0_MB32To63 =
{
  /* .Source         = */ 573,
  /* .Level          = */ OS_ISR_CANISR_0_MB32TO63_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_0_MB64To95 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_0_MB64To95 =
{
  /* .Source         = */ 574,
  /* .Level          = */ OS_ISR_CANISR_0_MB64TO95_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_1_BusOff */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_1_BusOff =
{
  /* .Source         = */ 579,
  /* .Level          = */ OS_ISR_CANISR_1_BUSOFF_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_1_MB00To03 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_1_MB00To03 =
{
  /* .Source         = */ 580,
  /* .Level          = */ OS_ISR_CANISR_1_MB00TO03_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_1_MB04To07 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_1_MB04To07 =
{
  /* .Source         = */ 581,
  /* .Level          = */ OS_ISR_CANISR_1_MB04TO07_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_1_MB08To11 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_1_MB08To11 =
{
  /* .Source         = */ 582,
  /* .Level          = */ OS_ISR_CANISR_1_MB08TO11_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_1_MB12To15 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_1_MB12To15 =
{
  /* .Source         = */ 583,
  /* .Level          = */ OS_ISR_CANISR_1_MB12TO15_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_1_MB16To31 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_1_MB16To31 =
{
  /* .Source         = */ 584,
  /* .Level          = */ OS_ISR_CANISR_1_MB16TO31_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_1_MB32To63 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_1_MB32To63 =
{
  /* .Source         = */ 585,
  /* .Level          = */ OS_ISR_CANISR_1_MB32TO63_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_1_MB64To95 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_1_MB64To95 =
{
  /* .Source         = */ 586,
  /* .Level          = */ OS_ISR_CANISR_1_MB64TO95_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_2_BusOff */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_2_BusOff =
{
  /* .Source         = */ 591,
  /* .Level          = */ OS_ISR_CANISR_2_BUSOFF_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_2_MB00To03 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_2_MB00To03 =
{
  /* .Source         = */ 592,
  /* .Level          = */ OS_ISR_CANISR_2_MB00TO03_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_2_MB04To07 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_2_MB04To07 =
{
  /* .Source         = */ 593,
  /* .Level          = */ OS_ISR_CANISR_2_MB04TO07_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_2_MB08To11 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_2_MB08To11 =
{
  /* .Source         = */ 594,
  /* .Level          = */ OS_ISR_CANISR_2_MB08TO11_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_2_MB12To15 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_2_MB12To15 =
{
  /* .Source         = */ 595,
  /* .Level          = */ OS_ISR_CANISR_2_MB12TO15_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_2_MB16To31 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_2_MB16To31 =
{
  /* .Source         = */ 596,
  /* .Level          = */ OS_ISR_CANISR_2_MB16TO31_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_2_MB32To63 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_2_MB32To63 =
{
  /* .Source         = */ 597,
  /* .Level          = */ OS_ISR_CANISR_2_MB32TO63_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_2_MB64To95 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_2_MB64To95 =
{
  /* .Source         = */ 598,
  /* .Level          = */ OS_ISR_CANISR_2_MB64TO95_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_4_BusOff */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_4_BusOff =
{
  /* .Source         = */ 615,
  /* .Level          = */ OS_ISR_CANISR_4_BUSOFF_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_4_MB00To03 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_4_MB00To03 =
{
  /* .Source         = */ 616,
  /* .Level          = */ OS_ISR_CANISR_4_MB00TO03_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_4_MB04To07 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_4_MB04To07 =
{
  /* .Source         = */ 617,
  /* .Level          = */ OS_ISR_CANISR_4_MB04TO07_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_4_MB08To11 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_4_MB08To11 =
{
  /* .Source         = */ 618,
  /* .Level          = */ OS_ISR_CANISR_4_MB08TO11_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_4_MB12To15 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_4_MB12To15 =
{
  /* .Source         = */ 619,
  /* .Level          = */ OS_ISR_CANISR_4_MB12TO15_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_4_MB16To31 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_4_MB16To31 =
{
  /* .Source         = */ 620,
  /* .Level          = */ OS_ISR_CANISR_4_MB16TO31_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_4_MB32To63 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_4_MB32To63 =
{
  /* .Source         = */ 621,
  /* .Level          = */ OS_ISR_CANISR_4_MB32TO63_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_4_MB64To95 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_4_MB64To95 =
{
  /* .Source         = */ 622,
  /* .Level          = */ OS_ISR_CANISR_4_MB64TO95_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_7_BusOff */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_7_BusOff =
{
  /* .Source         = */ 651,
  /* .Level          = */ OS_ISR_CANISR_7_BUSOFF_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_7_MB00To03 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_7_MB00To03 =
{
  /* .Source         = */ 652,
  /* .Level          = */ OS_ISR_CANISR_7_MB00TO03_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_7_MB04To07 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_7_MB04To07 =
{
  /* .Source         = */ 653,
  /* .Level          = */ OS_ISR_CANISR_7_MB04TO07_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_7_MB08To11 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_7_MB08To11 =
{
  /* .Source         = */ 654,
  /* .Level          = */ OS_ISR_CANISR_7_MB08TO11_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_7_MB12To15 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_7_MB12To15 =
{
  /* .Source         = */ 655,
  /* .Level          = */ OS_ISR_CANISR_7_MB12TO15_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_7_MB16To31 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_7_MB16To31 =
{
  /* .Source         = */ 656,
  /* .Level          = */ OS_ISR_CANISR_7_MB16TO31_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_7_MB32To63 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_7_MB32To63 =
{
  /* .Source         = */ 657,
  /* .Level          = */ OS_ISR_CANISR_7_MB32TO63_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CanIsr_7_MB64To95 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_7_MB64To95 =
{
  /* .Source         = */ 658,
  /* .Level          = */ OS_ISR_CANISR_7_MB64TO95_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: CounterIsr_SystemTimer */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CounterIsr_SystemTimer =
{
  /* .Source         = */ 37,
  /* .Level          = */ OS_ISR_COUNTERISR_SYSTEMTIMER_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Gpt_PIT_0_TIMER_0_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Gpt_PIT_0_TIMER_0_ISR =
{
  /* .Source         = */ 226,
  /* .Level          = */ OS_ISR_GPT_PIT_0_TIMER_0_ISR_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: IRQ_LFIC_WKUP_27_28 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_IRQ_LFIC_WKUP_27_28 =
{
  /* .Source         = */ 671,
  /* .Level          = */ OS_ISR_IRQ_LFIC_WKUP_27_28_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Lin_Channel_0_ERR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Lin_Channel_0_ERR =
{
  /* .Source         = */ 378,
  /* .Level          = */ OS_ISR_LIN_CHANNEL_0_ERR_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Lin_Channel_0_RXI */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Lin_Channel_0_RXI =
{
  /* .Source         = */ 376,
  /* .Level          = */ OS_ISR_LIN_CHANNEL_0_RXI_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Lin_Channel_0_TXI */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Lin_Channel_0_TXI =
{
  /* .Source         = */ 377,
  /* .Level          = */ OS_ISR_LIN_CHANNEL_0_TXI_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Lin_Channel_10_ERR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Lin_Channel_10_ERR =
{
  /* .Source         = */ 408,
  /* .Level          = */ OS_ISR_LIN_CHANNEL_10_ERR_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Lin_Channel_10_RXI */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Lin_Channel_10_RXI =
{
  /* .Source         = */ 406,
  /* .Level          = */ OS_ISR_LIN_CHANNEL_10_RXI_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Lin_Channel_10_TXI */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Lin_Channel_10_TXI =
{
  /* .Source         = */ 407,
  /* .Level          = */ OS_ISR_LIN_CHANNEL_10_TXI_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Lin_Channel_1_ERR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Lin_Channel_1_ERR =
{
  /* .Source         = */ 381,
  /* .Level          = */ OS_ISR_LIN_CHANNEL_1_ERR_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Lin_Channel_1_RXI */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Lin_Channel_1_RXI =
{
  /* .Source         = */ 379,
  /* .Level          = */ OS_ISR_LIN_CHANNEL_1_RXI_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Lin_Channel_1_TXI */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Lin_Channel_1_TXI =
{
  /* .Source         = */ 380,
  /* .Level          = */ OS_ISR_LIN_CHANNEL_1_TXI_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Lin_Channel_6_ERR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Lin_Channel_6_ERR =
{
  /* .Source         = */ 396,
  /* .Level          = */ OS_ISR_LIN_CHANNEL_6_ERR_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Lin_Channel_6_RXI */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Lin_Channel_6_RXI =
{
  /* .Source         = */ 394,
  /* .Level          = */ OS_ISR_LIN_CHANNEL_6_RXI_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Lin_Channel_6_TXI */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Lin_Channel_6_TXI =
{
  /* .Source         = */ 395,
  /* .Level          = */ OS_ISR_LIN_CHANNEL_6_TXI_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Lin_Channel_7_ERR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Lin_Channel_7_ERR =
{
  /* .Source         = */ 399,
  /* .Level          = */ OS_ISR_LIN_CHANNEL_7_ERR_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Lin_Channel_7_RXI */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Lin_Channel_7_RXI =
{
  /* .Source         = */ 397,
  /* .Level          = */ OS_ISR_LIN_CHANNEL_7_RXI_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: Lin_Channel_7_TXI */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_Lin_Channel_7_TXI =
{
  /* .Source         = */ 398,
  /* .Level          = */ OS_ISR_LIN_CHANNEL_7_TXI_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: PWM_HS_EMIOS0_Ch24_25 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_PWM_HS_EMIOS0_Ch24_25 =
{
  /* .Source         = */ 718,
  /* .Level          = */ OS_ISR_PWM_HS_EMIOS0_CH24_25_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
};

/*! HAL ISR configuration data: PWM_LS_EMIOS1_Ch6_7 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_PWM_LS_EMIOS1_Ch6_7 =
{
  /* .Source         = */ 725,
  /* .Level          = */ OS_ISR_PWM_LS_EMIOS1_CH6_7_LEVEL,
  /* .CoreAssignment = */ OS_HAL_INTC_ISR_2_CORE(0)
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
 *  END OF FILE: Os_Hal_Interrupt_Lcfg.c
 *********************************************************************************************************************/
