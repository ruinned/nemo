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
 *              File: Os_MemoryProtection_Lcfg.c
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

#define OS_MEMORYROTECTION_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_MemoryProtection.h"

/* Os kernel module dependencies */

/* Os hal dependencies */
#include "Os_Hal_MemoryProtection_Lcfg.h"


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

/*! Memory protection configuration data: OsCore0 */
CONST(Os_MpCoreConfigType, OS_CONST) OsCfg_Mp_OsCore0 =
{
  /* .HwConfig = */ &OsCfg_Hal_Mp_OsCore0
};

/*! Memory protection configuration data: OsApplication_Trusted_Core0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication_Trusted_Core0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Trusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: OsApplication_Untrusted_Core0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication_Untrusted_Core0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: SystemApplication_OsCore0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_SystemApplication_OsCore0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: ADC_0_EOC */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_ADC_0_EOC =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Trusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_ADC_0_EOC
};

/*! Memory protection configuration data: ADC_1_EOC */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_ADC_1_EOC =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Trusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_ADC_1_EOC
};

/*! Memory protection configuration data: CanIsr_0_BusOff */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_0_BusOff =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_0_BusOff
};

/*! Memory protection configuration data: CanIsr_0_MB00To03 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_0_MB00To03 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_0_MB00To03
};

/*! Memory protection configuration data: CanIsr_0_MB04To07 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_0_MB04To07 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_0_MB04To07
};

/*! Memory protection configuration data: CanIsr_0_MB08To11 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_0_MB08To11 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_0_MB08To11
};

/*! Memory protection configuration data: CanIsr_0_MB12To15 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_0_MB12To15 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_0_MB12To15
};

/*! Memory protection configuration data: CanIsr_0_MB16To31 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_0_MB16To31 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_0_MB16To31
};

/*! Memory protection configuration data: CanIsr_0_MB32To63 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_0_MB32To63 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_0_MB32To63
};

/*! Memory protection configuration data: CanIsr_0_MB64To95 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_0_MB64To95 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_0_MB64To95
};

/*! Memory protection configuration data: CanIsr_1_BusOff */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_1_BusOff =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_1_BusOff
};

/*! Memory protection configuration data: CanIsr_1_MB00To03 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_1_MB00To03 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_1_MB00To03
};

/*! Memory protection configuration data: CanIsr_1_MB04To07 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_1_MB04To07 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_1_MB04To07
};

/*! Memory protection configuration data: CanIsr_1_MB08To11 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_1_MB08To11 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_1_MB08To11
};

/*! Memory protection configuration data: CanIsr_1_MB12To15 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_1_MB12To15 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_1_MB12To15
};

/*! Memory protection configuration data: CanIsr_1_MB16To31 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_1_MB16To31 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_1_MB16To31
};

/*! Memory protection configuration data: CanIsr_1_MB32To63 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_1_MB32To63 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_1_MB32To63
};

/*! Memory protection configuration data: CanIsr_1_MB64To95 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_1_MB64To95 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_1_MB64To95
};

/*! Memory protection configuration data: CanIsr_2_BusOff */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_2_BusOff =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_2_BusOff
};

/*! Memory protection configuration data: CanIsr_2_MB00To03 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_2_MB00To03 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_2_MB00To03
};

/*! Memory protection configuration data: CanIsr_2_MB04To07 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_2_MB04To07 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_2_MB04To07
};

/*! Memory protection configuration data: CanIsr_2_MB08To11 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_2_MB08To11 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_2_MB08To11
};

/*! Memory protection configuration data: CanIsr_2_MB12To15 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_2_MB12To15 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_2_MB12To15
};

/*! Memory protection configuration data: CanIsr_2_MB16To31 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_2_MB16To31 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_2_MB16To31
};

/*! Memory protection configuration data: CanIsr_2_MB32To63 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_2_MB32To63 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_2_MB32To63
};

/*! Memory protection configuration data: CanIsr_2_MB64To95 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_2_MB64To95 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_2_MB64To95
};

/*! Memory protection configuration data: CanIsr_4_BusOff */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_4_BusOff =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_4_BusOff
};

/*! Memory protection configuration data: CanIsr_4_MB00To03 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_4_MB00To03 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_4_MB00To03
};

/*! Memory protection configuration data: CanIsr_4_MB04To07 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_4_MB04To07 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_4_MB04To07
};

/*! Memory protection configuration data: CanIsr_4_MB08To11 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_4_MB08To11 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_4_MB08To11
};

/*! Memory protection configuration data: CanIsr_4_MB12To15 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_4_MB12To15 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_4_MB12To15
};

/*! Memory protection configuration data: CanIsr_4_MB16To31 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_4_MB16To31 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_4_MB16To31
};

/*! Memory protection configuration data: CanIsr_4_MB32To63 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_4_MB32To63 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_4_MB32To63
};

/*! Memory protection configuration data: CanIsr_4_MB64To95 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_4_MB64To95 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_4_MB64To95
};

/*! Memory protection configuration data: CanIsr_7_BusOff */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_7_BusOff =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_7_BusOff
};

/*! Memory protection configuration data: CanIsr_7_MB00To03 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_7_MB00To03 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_7_MB00To03
};

/*! Memory protection configuration data: CanIsr_7_MB04To07 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_7_MB04To07 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_7_MB04To07
};

/*! Memory protection configuration data: CanIsr_7_MB08To11 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_7_MB08To11 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_7_MB08To11
};

/*! Memory protection configuration data: CanIsr_7_MB12To15 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_7_MB12To15 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_7_MB12To15
};

/*! Memory protection configuration data: CanIsr_7_MB16To31 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_7_MB16To31 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_7_MB16To31
};

/*! Memory protection configuration data: CanIsr_7_MB32To63 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_7_MB32To63 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_7_MB32To63
};

/*! Memory protection configuration data: CanIsr_7_MB64To95 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_7_MB64To95 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_7_MB64To95
};

/*! Memory protection configuration data: CounterIsr_SystemTimer */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CounterIsr_SystemTimer =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CounterIsr_SystemTimer
};

/*! Memory protection configuration data: Gpt_PIT_0_TIMER_0_ISR */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Gpt_PIT_0_TIMER_0_ISR =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Trusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Gpt_PIT_0_TIMER_0_ISR
};

/*! Memory protection configuration data: IRQ_LFIC_WKUP_27_28 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_IRQ_LFIC_WKUP_27_28 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Trusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_IRQ_LFIC_WKUP_27_28
};

/*! Memory protection configuration data: Lin_Channel_0_ERR */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Lin_Channel_0_ERR =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Lin_Channel_0_ERR
};

/*! Memory protection configuration data: Lin_Channel_0_RXI */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Lin_Channel_0_RXI =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Lin_Channel_0_RXI
};

/*! Memory protection configuration data: Lin_Channel_0_TXI */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Lin_Channel_0_TXI =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Lin_Channel_0_TXI
};

/*! Memory protection configuration data: Lin_Channel_10_ERR */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Lin_Channel_10_ERR =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Lin_Channel_10_ERR
};

/*! Memory protection configuration data: Lin_Channel_10_RXI */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Lin_Channel_10_RXI =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Lin_Channel_10_RXI
};

/*! Memory protection configuration data: Lin_Channel_10_TXI */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Lin_Channel_10_TXI =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Lin_Channel_10_TXI
};

/*! Memory protection configuration data: Lin_Channel_1_ERR */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Lin_Channel_1_ERR =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Lin_Channel_1_ERR
};

/*! Memory protection configuration data: Lin_Channel_1_RXI */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Lin_Channel_1_RXI =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Lin_Channel_1_RXI
};

/*! Memory protection configuration data: Lin_Channel_1_TXI */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Lin_Channel_1_TXI =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Lin_Channel_1_TXI
};

/*! Memory protection configuration data: Lin_Channel_6_ERR */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Lin_Channel_6_ERR =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Lin_Channel_6_ERR
};

/*! Memory protection configuration data: Lin_Channel_6_RXI */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Lin_Channel_6_RXI =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Lin_Channel_6_RXI
};

/*! Memory protection configuration data: Lin_Channel_6_TXI */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Lin_Channel_6_TXI =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Lin_Channel_6_TXI
};

/*! Memory protection configuration data: Lin_Channel_7_ERR */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Lin_Channel_7_ERR =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Lin_Channel_7_ERR
};

/*! Memory protection configuration data: Lin_Channel_7_RXI */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Lin_Channel_7_RXI =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Lin_Channel_7_RXI
};

/*! Memory protection configuration data: Lin_Channel_7_TXI */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Lin_Channel_7_TXI =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Lin_Channel_7_TXI
};

/*! Memory protection configuration data: PWM_HS_EMIOS0_Ch24_25 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_PWM_HS_EMIOS0_Ch24_25 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Trusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_PWM_HS_EMIOS0_Ch24_25
};

/*! Memory protection configuration data: PWM_LS_EMIOS1_Ch6_7 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_PWM_LS_EMIOS1_Ch6_7 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Trusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_PWM_LS_EMIOS1_Ch6_7
};

/*! Memory protection configuration data: Default_Appl_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Appl_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_Appl_Task
};

/*! Memory protection configuration data: Default_BSW_Async_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_BSW_Async_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_BSW_Async_Task
};

/*! Memory protection configuration data: Default_Init_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Init_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_Init_Task
};

/*! Memory protection configuration data: IdleTask_OsCore0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_IdleTask_OsCore0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_IdleTask_OsCore0
};

/*! Memory protection configuration data: PvtTask */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_PvtTask =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Trusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_PvtTask
};

/*! Memory protection configuration data: StartApplication_MemoryViolation_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_StartApplication_MemoryViolation_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Untrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_StartApplication_MemoryViolation_Task
};

/*! Memory protection configuration data: StartApplication_Trusted_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_StartApplication_Trusted_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Trusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_StartApplication_Trusted_Task
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Memory protection configuration data: SystemMpu */
CONST(Os_MpSystemConfigType, OS_CONST) OsCfg_Mp_SystemMpu =
{
  /* .HwConfig = */ &OsCfg_Hal_Mp_SystemMpu
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
 *  END OF FILE: Os_MemoryProtection_Lcfg.c
 *********************************************************************************************************************/
