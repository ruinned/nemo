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
 *              File: Os_Hal_Cfg.h
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

#if !defined (OS_HAL_CFG_H)                                                          /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_HAL_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! HAL configuration major version identification. */
# define OS_CFG_HAL_MAJOR_VERSION                (2U)

/*! HAL configuration minor version identification. */
# define OS_CFG_HAL_MINOR_VERSION                (15U)

/* ISR core and level definitions */
# define OS_ISR_ADC_0_EOC_CORE      (0)
# define OS_ISR_ADC_0_EOC_LEVEL     (2)
# define OS_ISR_ADC_1_EOC_CORE      (0)
# define OS_ISR_ADC_1_EOC_LEVEL     (9)
# define OS_ISR_CANISR_0_BUSOFF_CORE      (0)
# define OS_ISR_CANISR_0_BUSOFF_LEVEL     (7)
# define OS_ISR_CANISR_0_MB00TO03_CORE      (0)
# define OS_ISR_CANISR_0_MB00TO03_LEVEL     (7)
# define OS_ISR_CANISR_0_MB04TO07_CORE      (0)
# define OS_ISR_CANISR_0_MB04TO07_LEVEL     (7)
# define OS_ISR_CANISR_0_MB08TO11_CORE      (0)
# define OS_ISR_CANISR_0_MB08TO11_LEVEL     (7)
# define OS_ISR_CANISR_0_MB12TO15_CORE      (0)
# define OS_ISR_CANISR_0_MB12TO15_LEVEL     (7)
# define OS_ISR_CANISR_0_MB16TO31_CORE      (0)
# define OS_ISR_CANISR_0_MB16TO31_LEVEL     (7)
# define OS_ISR_CANISR_0_MB32TO63_CORE      (0)
# define OS_ISR_CANISR_0_MB32TO63_LEVEL     (7)
# define OS_ISR_CANISR_0_MB64TO95_CORE      (0)
# define OS_ISR_CANISR_0_MB64TO95_LEVEL     (7)
# define OS_ISR_CANISR_1_BUSOFF_CORE      (0)
# define OS_ISR_CANISR_1_BUSOFF_LEVEL     (3)
# define OS_ISR_CANISR_1_MB00TO03_CORE      (0)
# define OS_ISR_CANISR_1_MB00TO03_LEVEL     (3)
# define OS_ISR_CANISR_1_MB04TO07_CORE      (0)
# define OS_ISR_CANISR_1_MB04TO07_LEVEL     (3)
# define OS_ISR_CANISR_1_MB08TO11_CORE      (0)
# define OS_ISR_CANISR_1_MB08TO11_LEVEL     (3)
# define OS_ISR_CANISR_1_MB12TO15_CORE      (0)
# define OS_ISR_CANISR_1_MB12TO15_LEVEL     (3)
# define OS_ISR_CANISR_1_MB16TO31_CORE      (0)
# define OS_ISR_CANISR_1_MB16TO31_LEVEL     (3)
# define OS_ISR_CANISR_1_MB32TO63_CORE      (0)
# define OS_ISR_CANISR_1_MB32TO63_LEVEL     (3)
# define OS_ISR_CANISR_1_MB64TO95_CORE      (0)
# define OS_ISR_CANISR_1_MB64TO95_LEVEL     (3)
# define OS_ISR_CANISR_2_BUSOFF_CORE      (0)
# define OS_ISR_CANISR_2_BUSOFF_LEVEL     (8)
# define OS_ISR_CANISR_2_MB00TO03_CORE      (0)
# define OS_ISR_CANISR_2_MB00TO03_LEVEL     (8)
# define OS_ISR_CANISR_2_MB04TO07_CORE      (0)
# define OS_ISR_CANISR_2_MB04TO07_LEVEL     (8)
# define OS_ISR_CANISR_2_MB08TO11_CORE      (0)
# define OS_ISR_CANISR_2_MB08TO11_LEVEL     (8)
# define OS_ISR_CANISR_2_MB12TO15_CORE      (0)
# define OS_ISR_CANISR_2_MB12TO15_LEVEL     (8)
# define OS_ISR_CANISR_2_MB16TO31_CORE      (0)
# define OS_ISR_CANISR_2_MB16TO31_LEVEL     (8)
# define OS_ISR_CANISR_2_MB32TO63_CORE      (0)
# define OS_ISR_CANISR_2_MB32TO63_LEVEL     (8)
# define OS_ISR_CANISR_2_MB64TO95_CORE      (0)
# define OS_ISR_CANISR_2_MB64TO95_LEVEL     (8)
# define OS_ISR_CANISR_4_BUSOFF_CORE      (0)
# define OS_ISR_CANISR_4_BUSOFF_LEVEL     (4)
# define OS_ISR_CANISR_4_MB00TO03_CORE      (0)
# define OS_ISR_CANISR_4_MB00TO03_LEVEL     (4)
# define OS_ISR_CANISR_4_MB04TO07_CORE      (0)
# define OS_ISR_CANISR_4_MB04TO07_LEVEL     (4)
# define OS_ISR_CANISR_4_MB08TO11_CORE      (0)
# define OS_ISR_CANISR_4_MB08TO11_LEVEL     (4)
# define OS_ISR_CANISR_4_MB12TO15_CORE      (0)
# define OS_ISR_CANISR_4_MB12TO15_LEVEL     (4)
# define OS_ISR_CANISR_4_MB16TO31_CORE      (0)
# define OS_ISR_CANISR_4_MB16TO31_LEVEL     (4)
# define OS_ISR_CANISR_4_MB32TO63_CORE      (0)
# define OS_ISR_CANISR_4_MB32TO63_LEVEL     (4)
# define OS_ISR_CANISR_4_MB64TO95_CORE      (0)
# define OS_ISR_CANISR_4_MB64TO95_LEVEL     (4)
# define OS_ISR_CANISR_7_BUSOFF_CORE      (0)
# define OS_ISR_CANISR_7_BUSOFF_LEVEL     (5)
# define OS_ISR_CANISR_7_MB00TO03_CORE      (0)
# define OS_ISR_CANISR_7_MB00TO03_LEVEL     (5)
# define OS_ISR_CANISR_7_MB04TO07_CORE      (0)
# define OS_ISR_CANISR_7_MB04TO07_LEVEL     (5)
# define OS_ISR_CANISR_7_MB08TO11_CORE      (0)
# define OS_ISR_CANISR_7_MB08TO11_LEVEL     (5)
# define OS_ISR_CANISR_7_MB12TO15_CORE      (0)
# define OS_ISR_CANISR_7_MB12TO15_LEVEL     (5)
# define OS_ISR_CANISR_7_MB16TO31_CORE      (0)
# define OS_ISR_CANISR_7_MB16TO31_LEVEL     (5)
# define OS_ISR_CANISR_7_MB32TO63_CORE      (0)
# define OS_ISR_CANISR_7_MB32TO63_LEVEL     (5)
# define OS_ISR_CANISR_7_MB64TO95_CORE      (0)
# define OS_ISR_CANISR_7_MB64TO95_LEVEL     (5)
# define OS_ISR_COUNTERISR_SYSTEMTIMER_CORE      (0)
# define OS_ISR_COUNTERISR_SYSTEMTIMER_LEVEL     (15)
# define OS_ISR_GPT_PIT_0_TIMER_0_ISR_CORE      (0)
# define OS_ISR_GPT_PIT_0_TIMER_0_ISR_LEVEL     (1)
# define OS_ISR_IRQ_LFIC_WKUP_27_28_CORE      (0)
# define OS_ISR_IRQ_LFIC_WKUP_27_28_LEVEL     (1)
# define OS_ISR_LIN_CHANNEL_0_ERR_CORE      (0)
# define OS_ISR_LIN_CHANNEL_0_ERR_LEVEL     (6)
# define OS_ISR_LIN_CHANNEL_0_RXI_CORE      (0)
# define OS_ISR_LIN_CHANNEL_0_RXI_LEVEL     (6)
# define OS_ISR_LIN_CHANNEL_0_TXI_CORE      (0)
# define OS_ISR_LIN_CHANNEL_0_TXI_LEVEL     (6)
# define OS_ISR_LIN_CHANNEL_10_ERR_CORE      (0)
# define OS_ISR_LIN_CHANNEL_10_ERR_LEVEL     (14)
# define OS_ISR_LIN_CHANNEL_10_RXI_CORE      (0)
# define OS_ISR_LIN_CHANNEL_10_RXI_LEVEL     (14)
# define OS_ISR_LIN_CHANNEL_10_TXI_CORE      (0)
# define OS_ISR_LIN_CHANNEL_10_TXI_LEVEL     (14)
# define OS_ISR_LIN_CHANNEL_1_ERR_CORE      (0)
# define OS_ISR_LIN_CHANNEL_1_ERR_LEVEL     (13)
# define OS_ISR_LIN_CHANNEL_1_RXI_CORE      (0)
# define OS_ISR_LIN_CHANNEL_1_RXI_LEVEL     (13)
# define OS_ISR_LIN_CHANNEL_1_TXI_CORE      (0)
# define OS_ISR_LIN_CHANNEL_1_TXI_LEVEL     (13)
# define OS_ISR_LIN_CHANNEL_6_ERR_CORE      (0)
# define OS_ISR_LIN_CHANNEL_6_ERR_LEVEL     (9)
# define OS_ISR_LIN_CHANNEL_6_RXI_CORE      (0)
# define OS_ISR_LIN_CHANNEL_6_RXI_LEVEL     (9)
# define OS_ISR_LIN_CHANNEL_6_TXI_CORE      (0)
# define OS_ISR_LIN_CHANNEL_6_TXI_LEVEL     (9)
# define OS_ISR_LIN_CHANNEL_7_ERR_CORE      (0)
# define OS_ISR_LIN_CHANNEL_7_ERR_LEVEL     (12)
# define OS_ISR_LIN_CHANNEL_7_RXI_CORE      (0)
# define OS_ISR_LIN_CHANNEL_7_RXI_LEVEL     (12)
# define OS_ISR_LIN_CHANNEL_7_TXI_CORE      (0)
# define OS_ISR_LIN_CHANNEL_7_TXI_LEVEL     (12)
# define OS_ISR_PWM_HS_EMIOS0_CH24_25_CORE      (0)
# define OS_ISR_PWM_HS_EMIOS0_CH24_25_LEVEL     (0)
# define OS_ISR_PWM_LS_EMIOS1_CH6_7_CORE      (0)
# define OS_ISR_PWM_LS_EMIOS1_CH6_7_LEVEL     (0)

/* Hardware counter timing macros */

/* Counter timing macros and constants: SystemTimer */
# define OSMAXALLOWEDVALUE_SystemTimer     (1073741823UL) /* 0x3FFFFFFFUL */
# define OSMINCYCLE_SystemTimer            (1UL)
# define OSTICKSPERBASE_SystemTimer        (1UL)
# define OSTICKDURATION_SystemTimer        (12UL)

/* OSEK compatibility for the system timer. */
# define OSMAXALLOWEDVALUE     (OSMAXALLOWEDVALUE_SystemTimer)
# define OSMINCYCLE            (OSMINCYCLE_SystemTimer)
# define OSTICKSPERBASE        (OSTICKSPERBASE_SystemTimer)
# define OSTICKDURATION        (OSTICKDURATION_SystemTimer)

/*! Macro OS_NS2TICKS_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_NS2TICKS_SystemTimer(x)     ( (TickType) (((((uint32)(x)) * 2) + 12) / 25) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2NS_SystemTimer was approximated with a deviation of 2.220446049250313E-10ppm. */
# define OS_TICKS2NS_SystemTimer(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 25) + 1) / 2) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Macro OS_US2TICKS_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_US2TICKS_SystemTimer(x)     ( (TickType) (((((uint32)(x)) * 80) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2US_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2US_SystemTimer(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 40) / 80) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Macro OS_MS2TICKS_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_MS2TICKS_SystemTimer(x)     ( (TickType) (((((uint32)(x)) * 80000) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2MS_SystemTimer was approximated with a deviation of 2.220446049250313E-10ppm. */
# define OS_TICKS2MS_SystemTimer(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 40000) / 80000) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Macro OS_SEC2TICKS_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_SEC2TICKS_SystemTimer(x)     ( (TickType) (((((uint32)(x)) * 80000000) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2SEC_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2SEC_SystemTimer(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 40000000) / 80000000) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */







/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_HAL_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Cfg.h
 *********************************************************************************************************************/
