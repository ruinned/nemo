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
 *              File: Os_Hal_MemoryProtection_Lcfg.c
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

#define OS_HAL_MEMORYPROTECTION_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_MemoryProtection_Cfg.h"
#include "Os_Hal_MemoryProtection_Lcfg.h"
#include "Os_Hal_MemoryProtection.h"

/* Os kernel module dependencies */

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

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL memory protection configuration data: OsCore0 */



CONST(Os_Hal_MpCoreConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore0 =
{
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0UL,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ NULL_PTR
};

/*! HAL memory protection configuration data: OsApplication_Trusted_Core0 */


  OS_LOCAL CONST(Os_Hal_SMPU_MpRegionType, OS_CONST) OsCfg_Hal_Mp_OsApplication_Trusted_Core0_Regions[1] = 
  {
    {
       /* MpuBaseAddress  = */ OS_HAL_SMPU0_BASE_ADDRESS,
       /* RegionIndex     = */ 7,
       /* Word0           = */ (uint32)&_OS_OsApplication_Trusted_Core0_VAR_ALL_START,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word1           = */ (uint32)&_OS_OsApplication_Trusted_Core0_VAR_ALL_END,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word2           = */ (OS_HAL_SMPU_RGD_WORD_2_MSK | OS_HAL_SMPU_RGD_WORD_2_VALUE(0) | OS_HAL_SMPU_RGD_WORD_2_VALUE(8)),
       /* Word3           = */ (OS_HAL_SMPU_RGD_WORD_3_FMT1 | OS_HAL_SMPU_UW_MSK),
       /* Word4           = */ OS_HAL_SMPU_RGD_WORD_4_VALUE(0, 255),
       /* Word5           = */ OS_HAL_SMPU_RGD_VALID,
    },
  };

CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsApplication_Trusted_Core0 =
{
  /* .Asid                 = */ 0,  /* OsApplication_Trusted_Core0 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 1,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ OsCfg_Hal_Mp_OsApplication_Trusted_Core0_Regions
};

/*! HAL memory protection configuration data: OsApplication_Untrusted_Core0 */


  OS_LOCAL CONST(Os_Hal_SMPU_MpRegionType, OS_CONST) OsCfg_Hal_Mp_OsApplication_Untrusted_Core0_Regions[1] = 
  {
    {
       /* MpuBaseAddress  = */ OS_HAL_SMPU0_BASE_ADDRESS,
       /* RegionIndex     = */ 7,
       /* Word0           = */ (uint32)&_OS_OsApplication_Untrusted_Core0_VAR_ALL_START,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word1           = */ (uint32)&_OS_OsApplication_Untrusted_Core0_VAR_ALL_END,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word2           = */ (OS_HAL_SMPU_RGD_WORD_2_MSK | OS_HAL_SMPU_RGD_WORD_2_VALUE(0) | OS_HAL_SMPU_RGD_WORD_2_VALUE(8)),
       /* Word3           = */ (OS_HAL_SMPU_RGD_WORD_3_FMT1 | OS_HAL_SMPU_UW_MSK),
       /* Word4           = */ OS_HAL_SMPU_RGD_WORD_4_VALUE(0, 255),
       /* Word5           = */ OS_HAL_SMPU_RGD_VALID,
    },
  };

CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsApplication_Untrusted_Core0 =
{
  /* .Asid                 = */ 0,  /* OsApplication_Untrusted_Core0 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 1,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ OsCfg_Hal_Mp_OsApplication_Untrusted_Core0_Regions
};

/*! HAL memory protection configuration data: SystemApplication_OsCore0 */



CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_SystemApplication_OsCore0 =
{
  /* .Asid                 = */ 0,  /* SystemApplication_OsCore0 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: ADC_0_EOC */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_ADC_0_EOC =
{
  /* .Asid                 = */ 0,  /* ADC_0_EOC */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: ADC_1_EOC */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_ADC_1_EOC =
{
  /* .Asid                 = */ 0,  /* ADC_1_EOC */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_0_BusOff */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_BusOff =
{
  /* .Asid                 = */ 0,  /* CanIsr_0_BusOff */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_0_MB00To03 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB00To03 =
{
  /* .Asid                 = */ 0,  /* CanIsr_0_MB00To03 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_0_MB04To07 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB04To07 =
{
  /* .Asid                 = */ 0,  /* CanIsr_0_MB04To07 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_0_MB08To11 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB08To11 =
{
  /* .Asid                 = */ 0,  /* CanIsr_0_MB08To11 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_0_MB12To15 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB12To15 =
{
  /* .Asid                 = */ 0,  /* CanIsr_0_MB12To15 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_0_MB16To31 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB16To31 =
{
  /* .Asid                 = */ 0,  /* CanIsr_0_MB16To31 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_0_MB32To63 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB32To63 =
{
  /* .Asid                 = */ 0,  /* CanIsr_0_MB32To63 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_0_MB64To95 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB64To95 =
{
  /* .Asid                 = */ 0,  /* CanIsr_0_MB64To95 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_1_BusOff */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_BusOff =
{
  /* .Asid                 = */ 0,  /* CanIsr_1_BusOff */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_1_MB00To03 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_MB00To03 =
{
  /* .Asid                 = */ 0,  /* CanIsr_1_MB00To03 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_1_MB04To07 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_MB04To07 =
{
  /* .Asid                 = */ 0,  /* CanIsr_1_MB04To07 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_1_MB08To11 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_MB08To11 =
{
  /* .Asid                 = */ 0,  /* CanIsr_1_MB08To11 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_1_MB12To15 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_MB12To15 =
{
  /* .Asid                 = */ 0,  /* CanIsr_1_MB12To15 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_1_MB16To31 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_MB16To31 =
{
  /* .Asid                 = */ 0,  /* CanIsr_1_MB16To31 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_1_MB32To63 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_MB32To63 =
{
  /* .Asid                 = */ 0,  /* CanIsr_1_MB32To63 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_1_MB64To95 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1_MB64To95 =
{
  /* .Asid                 = */ 0,  /* CanIsr_1_MB64To95 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_2_BusOff */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_BusOff =
{
  /* .Asid                 = */ 0,  /* CanIsr_2_BusOff */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_2_MB00To03 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_MB00To03 =
{
  /* .Asid                 = */ 0,  /* CanIsr_2_MB00To03 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_2_MB04To07 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_MB04To07 =
{
  /* .Asid                 = */ 0,  /* CanIsr_2_MB04To07 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_2_MB08To11 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_MB08To11 =
{
  /* .Asid                 = */ 0,  /* CanIsr_2_MB08To11 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_2_MB12To15 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_MB12To15 =
{
  /* .Asid                 = */ 0,  /* CanIsr_2_MB12To15 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_2_MB16To31 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_MB16To31 =
{
  /* .Asid                 = */ 0,  /* CanIsr_2_MB16To31 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_2_MB32To63 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_MB32To63 =
{
  /* .Asid                 = */ 0,  /* CanIsr_2_MB32To63 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_2_MB64To95 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_2_MB64To95 =
{
  /* .Asid                 = */ 0,  /* CanIsr_2_MB64To95 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_4_BusOff */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_BusOff =
{
  /* .Asid                 = */ 0,  /* CanIsr_4_BusOff */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_4_MB00To03 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_MB00To03 =
{
  /* .Asid                 = */ 0,  /* CanIsr_4_MB00To03 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_4_MB04To07 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_MB04To07 =
{
  /* .Asid                 = */ 0,  /* CanIsr_4_MB04To07 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_4_MB08To11 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_MB08To11 =
{
  /* .Asid                 = */ 0,  /* CanIsr_4_MB08To11 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_4_MB12To15 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_MB12To15 =
{
  /* .Asid                 = */ 0,  /* CanIsr_4_MB12To15 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_4_MB16To31 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_MB16To31 =
{
  /* .Asid                 = */ 0,  /* CanIsr_4_MB16To31 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_4_MB32To63 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_MB32To63 =
{
  /* .Asid                 = */ 0,  /* CanIsr_4_MB32To63 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_4_MB64To95 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_4_MB64To95 =
{
  /* .Asid                 = */ 0,  /* CanIsr_4_MB64To95 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_7_BusOff */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_BusOff =
{
  /* .Asid                 = */ 0,  /* CanIsr_7_BusOff */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_7_MB00To03 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_MB00To03 =
{
  /* .Asid                 = */ 0,  /* CanIsr_7_MB00To03 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_7_MB04To07 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_MB04To07 =
{
  /* .Asid                 = */ 0,  /* CanIsr_7_MB04To07 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_7_MB08To11 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_MB08To11 =
{
  /* .Asid                 = */ 0,  /* CanIsr_7_MB08To11 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_7_MB12To15 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_MB12To15 =
{
  /* .Asid                 = */ 0,  /* CanIsr_7_MB12To15 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_7_MB16To31 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_MB16To31 =
{
  /* .Asid                 = */ 0,  /* CanIsr_7_MB16To31 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_7_MB32To63 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_MB32To63 =
{
  /* .Asid                 = */ 0,  /* CanIsr_7_MB32To63 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CanIsr_7_MB64To95 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_7_MB64To95 =
{
  /* .Asid                 = */ 0,  /* CanIsr_7_MB64To95 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: CounterIsr_SystemTimer */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CounterIsr_SystemTimer =
{
  /* .Asid                 = */ 0,  /* CounterIsr_SystemTimer */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Gpt_PIT_0_TIMER_0_ISR */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Gpt_PIT_0_TIMER_0_ISR =
{
  /* .Asid                 = */ 0,  /* Gpt_PIT_0_TIMER_0_ISR */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: IRQ_LFIC_WKUP_27_28 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IRQ_LFIC_WKUP_27_28 =
{
  /* .Asid                 = */ 0,  /* IRQ_LFIC_WKUP_27_28 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Lin_Channel_0_ERR */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_0_ERR =
{
  /* .Asid                 = */ 0,  /* Lin_Channel_0_ERR */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Lin_Channel_0_RXI */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_0_RXI =
{
  /* .Asid                 = */ 0,  /* Lin_Channel_0_RXI */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Lin_Channel_0_TXI */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_0_TXI =
{
  /* .Asid                 = */ 0,  /* Lin_Channel_0_TXI */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Lin_Channel_10_ERR */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_10_ERR =
{
  /* .Asid                 = */ 0,  /* Lin_Channel_10_ERR */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Lin_Channel_10_RXI */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_10_RXI =
{
  /* .Asid                 = */ 0,  /* Lin_Channel_10_RXI */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Lin_Channel_10_TXI */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_10_TXI =
{
  /* .Asid                 = */ 0,  /* Lin_Channel_10_TXI */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Lin_Channel_1_ERR */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_1_ERR =
{
  /* .Asid                 = */ 0,  /* Lin_Channel_1_ERR */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Lin_Channel_1_RXI */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_1_RXI =
{
  /* .Asid                 = */ 0,  /* Lin_Channel_1_RXI */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Lin_Channel_1_TXI */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_1_TXI =
{
  /* .Asid                 = */ 0,  /* Lin_Channel_1_TXI */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Lin_Channel_6_ERR */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_6_ERR =
{
  /* .Asid                 = */ 0,  /* Lin_Channel_6_ERR */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Lin_Channel_6_RXI */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_6_RXI =
{
  /* .Asid                 = */ 0,  /* Lin_Channel_6_RXI */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Lin_Channel_6_TXI */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_6_TXI =
{
  /* .Asid                 = */ 0,  /* Lin_Channel_6_TXI */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Lin_Channel_7_ERR */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_7_ERR =
{
  /* .Asid                 = */ 0,  /* Lin_Channel_7_ERR */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Lin_Channel_7_RXI */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_7_RXI =
{
  /* .Asid                 = */ 0,  /* Lin_Channel_7_RXI */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Lin_Channel_7_TXI */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Lin_Channel_7_TXI =
{
  /* .Asid                 = */ 0,  /* Lin_Channel_7_TXI */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: PWM_HS_EMIOS0_Ch24_25 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_PWM_HS_EMIOS0_Ch24_25 =
{
  /* .Asid                 = */ 0,  /* PWM_HS_EMIOS0_Ch24_25 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: PWM_LS_EMIOS1_Ch6_7 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_PWM_LS_EMIOS1_Ch6_7 =
{
  /* .Asid                 = */ 0,  /* PWM_LS_EMIOS1_Ch6_7 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Default_Appl_Task */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Appl_Task =
{
  /* .Asid                 = */ 0,  /* Default_Appl_Task */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Default_BSW_Async_Task */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_BSW_Async_Task =
{
  /* .Asid                 = */ 0,  /* Default_BSW_Async_Task */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: Default_Init_Task */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Init_Task =
{
  /* .Asid                 = */ 0,  /* Default_Init_Task */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: IdleTask_OsCore0 */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IdleTask_OsCore0 =
{
  /* .Asid                 = */ 0,  /* IdleTask_OsCore0 */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: PvtTask */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_PvtTask =
{
  /* .Asid                 = */ 0,  /* PvtTask */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: StartApplication_MemoryViolation_Task */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_StartApplication_MemoryViolation_Task =
{
  /* .Asid                 = */ 0,  /* StartApplication_MemoryViolation_Task */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

/*! HAL memory protection configuration data: StartApplication_Trusted_Task */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_StartApplication_Trusted_Task =
{
  /* .Asid                 = */ 0,  /* StartApplication_Trusted_Task */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL memory protection configuration data: SystemMpu */


  OS_LOCAL CONST(Os_Hal_SMPU_MpRegionType, OS_CONST) OsCfg_Hal_Mp_SystemMpu_Regions[7] = 
  {
    {
       /* MpuBaseAddress  = */ OS_HAL_SMPU0_BASE_ADDRESS,
       /* RegionIndex     = */ 1,
       /* Word0           = */ (uint32)&_OS_SystemApplication_OsCore0_VAR_ALL_START,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word1           = */ (uint32)&_OS_SystemApplication_OsCore0_VAR_ALL_END,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word2           = */ (OS_HAL_SMPU_RGD_WORD_2_MSK | OS_HAL_SMPU_RGD_WORD_2_VALUE(0) | OS_HAL_SMPU_RGD_WORD_2_VALUE(8)),
       /* Word3           = */ (OS_HAL_SMPU_RGD_WORD_3_FMT1 | OS_HAL_SMPU_SW_MSK),
       /* Word4           = */ OS_HAL_SMPU_RGD_WORD_4_VALUE(0, 255),
       /* Word5           = */ OS_HAL_SMPU_RGD_VALID,
    },
    {
       /* MpuBaseAddress  = */ OS_HAL_SMPU0_BASE_ADDRESS,
       /* RegionIndex     = */ 2,
       /* Word0           = */ (uint32)0x00F8C000UL,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word1           = */ (uint32)0x0157FFFFUL,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word2           = */ (OS_HAL_SMPU_RGD_WORD_2_MSK | OS_HAL_SMPU_RGD_WORD_2_VALUE(0) | OS_HAL_SMPU_RGD_WORD_2_VALUE(3) | OS_HAL_SMPU_RGD_WORD_2_VALUE(8)),
       /* Word3           = */ (OS_HAL_SMPU_RGD_WORD_3_FMT1 | OS_HAL_SMPU_SW_MSK),
       /* Word4           = */ OS_HAL_SMPU_RGD_WORD_4_VALUE(0, 255),
       /* Word5           = */ OS_HAL_SMPU_RGD_VALID,
    },
    {
       /* MpuBaseAddress  = */ OS_HAL_SMPU0_BASE_ADDRESS,
       /* RegionIndex     = */ 3,
       /* Word0           = */ (uint32)&_OS_GLOBALSHARED_VAR_START,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word1           = */ (uint32)&_OS_GLOBALSHARED_VAR_END,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word2           = */ (OS_HAL_SMPU_RGD_WORD_2_MSK | OS_HAL_SMPU_RGD_WORD_2_VALUE(0) | OS_HAL_SMPU_RGD_WORD_2_VALUE(8)),
       /* Word3           = */ (OS_HAL_SMPU_RGD_WORD_3_FMT1 | OS_HAL_SMPU_UW_MSK | OS_HAL_SMPU_SW_MSK),
       /* Word4           = */ OS_HAL_SMPU_RGD_WORD_4_VALUE(0, 255),
       /* Word5           = */ OS_HAL_SMPU_RGD_VALID,
    },
    {
       /* MpuBaseAddress  = */ OS_HAL_SMPU0_BASE_ADDRESS,
       /* RegionIndex     = */ 4,
       /* Word0           = */ (uint32)0xF0000000UL,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word1           = */ (uint32)0xFFFFFFFFUL,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word2           = */ (OS_HAL_SMPU_RGD_WORD_2_MSK | OS_HAL_SMPU_RGD_WORD_2_VALUE(0) | OS_HAL_SMPU_RGD_WORD_2_VALUE(8)),
       /* Word3           = */ (OS_HAL_SMPU_RGD_WORD_3_FMT1 | OS_HAL_SMPU_UW_MSK | OS_HAL_SMPU_SW_MSK),
       /* Word4           = */ OS_HAL_SMPU_RGD_WORD_4_VALUE(0, 255),
       /* Word5           = */ OS_HAL_SMPU_RGD_VALID,
    },
    {
       /* MpuBaseAddress  = */ OS_HAL_SMPU0_BASE_ADDRESS,
       /* RegionIndex     = */ 5,
       /* Word0           = */ (uint32)0x00000000UL,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word1           = */ (uint32)0xFFFFFFFFUL,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word2           = */ (OS_HAL_SMPU_RGD_WORD_2_MSK | OS_HAL_SMPU_RGD_WORD_2_VALUE(0) | OS_HAL_SMPU_RGD_WORD_2_VALUE(3) | OS_HAL_SMPU_RGD_WORD_2_VALUE(4) | OS_HAL_SMPU_RGD_WORD_2_VALUE(8)),
       /* Word3           = */ (OS_HAL_SMPU_RGD_WORD_3_FMT1 | OS_HAL_SMPU_URX_MSK | OS_HAL_SMPU_SRX_MSK),
       /* Word4           = */ OS_HAL_SMPU_RGD_WORD_4_VALUE(0, 255),
       /* Word5           = */ OS_HAL_SMPU_RGD_VALID,
    },
    {
       /* MpuBaseAddress  = */ OS_HAL_SMPU0_BASE_ADDRESS,
       /* RegionIndex     = */ 6,
       /* Word0           = */ (uint32)0x40000000UL,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word1           = */ (uint32)&_OS_CORE0_STACKS_START,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word2           = */ (OS_HAL_SMPU_RGD_WORD_2_MSK | OS_HAL_SMPU_RGD_WORD_2_VALUE(0) | OS_HAL_SMPU_RGD_WORD_2_VALUE(8)),
       /* Word3           = */ (OS_HAL_SMPU_RGD_WORD_3_FMT1 | OS_HAL_SMPU_SW_MSK),
       /* Word4           = */ OS_HAL_SMPU_RGD_WORD_4_VALUE(0, 255),
       /* Word5           = */ OS_HAL_SMPU_RGD_VALID,
    },
    {
       /* MpuBaseAddress  = */ OS_HAL_SMPU_STACK_UNIT_ADDRESS,
       /* RegionIndex     = */ 0,
       /* Word0           = */ (uint32)0x40000000UL,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word1           = */ (uint32)0x70000000UL,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
       /* Word2           = */ (OS_HAL_SMPU_RGD_WORD_2_MSK | OS_HAL_SMPU_RGD_WORD_2_VALUE(0)  | OS_HAL_SMPU_RGD_WORD_2_VALUE(8)),
       /* Word3           = */ (OS_HAL_SMPU_RGD_WORD_3_FMT1 | OS_HAL_SMPU_SW_MSK | OS_HAL_SMPU_SRX_MSK | OS_HAL_SMPU_UW_MSK | OS_HAL_SMPU_URX_MSK),
       /* Word4           = */ OS_HAL_SMPU_RGD_WORD_4_VALUE(0,0xFF),
       /* Word5           = */ OS_HAL_SMPU_RGD_VALID,
    },
  };

CONST(Os_Hal_MpSystemConfigType, OS_CONST) OsCfg_Hal_Mp_SystemMpu =
{
  /* .CoreMpuRegionCount   = */ 0UL,
  /* .SystemMpuRegionCount = */ 7,
  /* .CoreMpuRegions       = */ NULL_PTR,
  /* .SystemMpuRegions     = */ OsCfg_Hal_Mp_SystemMpu_Regions
};

/*! HAL memory protection configuration data: EmptyThread */



CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_EmptyThread =
{
  /* .Asid                 = */ 0,  /* EmptyThread */
  /* .CoreMpuRegionCount   = */ 0,
  /* .SystemMpuRegionCount = */ 0,
  /* .CoreMpuRegions       = */ 0,
  /* .SystemMpuRegions     = */ 0
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
 *  END OF FILE: Os_Hal_MemoryProtection_Lcfg.c
 *********************************************************************************************************************/
