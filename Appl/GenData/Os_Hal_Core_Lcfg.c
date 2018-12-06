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
 *              File: Os_Hal_Core_Lcfg.c
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

#define OS_HAL_CORE_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_Core_Lcfg.h"
#include "Os_Hal_Core.h"

/* Os kernel module dependencies */

/* Os hal dependencies */
#include "Os_Hal_Context_Lcfg.h"
#include "Os_Hal_Entry_Lcfg.h"
#include "Os_Hal_Interrupt_Lcfg.h"
#include "Os_Hal_Kernel_Lcfg.h"


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

#define OS_START_SEC_CORE0_VAR_FAST_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL dynamic core to thread data: OsCore0 */
OS_LOCAL VAR(Os_Hal_Core2ThreadType, OS_VAR_NOINIT_FAST) OsCfg_Hal_Core2Thread_OsCore0_Dyn;

#define OS_STOP_SEC_CORE0_VAR_FAST_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL core initialized interrupt sources: OsCore0 */
CONSTP2CONST(Os_Hal_IntIsrConfigType, OS_CONST, OS_CONST)
  OsCfg_Hal_Core_OsCore0_InterruptSourceRefs[OS_CFG_NUM_CORE_OSCORE0_INTERRUPTSOURCEREFS + 1] =
{
  /* No core exclusive interrupt sources to be initialized by OsCore0. */
  NULL_PTR
};

/*! HAL core configuration data: OsCore0 */
CONST(Os_Hal_CoreConfigType, OS_CONST) OsCfg_Hal_Core_OsCore0 =
{
  /* .CoreIdPhysical    = */ 0,
  /* .CoreIdLogical     = */ 0,
  /* .CoreStartAddress  = */ (uint32)(&_start), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .CoreIntcCprOffset = */ OS_HAL_CORE0_INTC_CPR_OFFSET,
  /* .CoreGateLockValue = */ OS_HAL_CORE0_GATELOCK_VALUE,
  /* .CoreSpeSupported  = */ OS_HAL_CORE0_SPE_SUPPORTED
};

/*! HAL AUTOSAR core configuration data: OsCore0 */
CONST(Os_Hal_CoreAsrConfigType, OS_CONST) OsCfg_Hal_CoreAsr_OsCore0 =
{
  /* .Exception table address = */ (Os_Hal_ExceptionTableType)&_OS_EXCVEC_CORE0_CODE_START,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Interrupt table address = */ (Os_Hal_VectorTableType)&_OS_INTVEC_CODE_START,  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .NumberOfWritableIVORs   = */ OS_HAL_CORE0_NUMBER_OF_WRITABLE_IVORS
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL core to thread configuration data. */
CONST(Os_Hal_Core2ThreadConfigType, OS_CONST) OsCfg_Hal_Core2Thread =
{
  /* .Core2Thread = */
  {
    &OsCfg_Hal_Core2Thread_OsCore0_Dyn, /* OS_CORE_ID_0 */
  }
};

/*! HAL system configuration data. */
CONST(Os_Hal_SystemConfigType, OS_CONST) OsCfg_Hal_System =
{
  /* .CoreInformation = */
  {
    &OsCfg_Hal_Core_OsCore0, /* OS_CORE_ID_0 */
    NULL_PTR, /* OS_CORE_ID_1 */
    NULL_PTR, /* OS_CORE_ID_2 */
  }
};

/*! Interrupt sources which are initialized by the hardware init core. */
CONSTP2CONST(Os_Hal_IntIsrConfigType, OS_CONST, OS_CONST)
  OsCfg_Hal_System_InterruptSourceRefs[OS_CFG_NUM_SYSTEM_INTERRUPTSOURCEREFS + 1] =
{
  &OsCfg_Hal_IntIsr_ADC_0_EOC,
  &OsCfg_Hal_IntIsr_ADC_1_EOC,
  &OsCfg_Hal_IntIsr_CanIsr_0_BusOff,
  &OsCfg_Hal_IntIsr_CanIsr_0_MB00To03,
  &OsCfg_Hal_IntIsr_CanIsr_0_MB04To07,
  &OsCfg_Hal_IntIsr_CanIsr_0_MB08To11,
  &OsCfg_Hal_IntIsr_CanIsr_0_MB12To15,
  &OsCfg_Hal_IntIsr_CanIsr_0_MB16To31,
  &OsCfg_Hal_IntIsr_CanIsr_0_MB32To63,
  &OsCfg_Hal_IntIsr_CanIsr_0_MB64To95,
  &OsCfg_Hal_IntIsr_CanIsr_1_BusOff,
  &OsCfg_Hal_IntIsr_CanIsr_1_MB00To03,
  &OsCfg_Hal_IntIsr_CanIsr_1_MB04To07,
  &OsCfg_Hal_IntIsr_CanIsr_1_MB08To11,
  &OsCfg_Hal_IntIsr_CanIsr_1_MB12To15,
  &OsCfg_Hal_IntIsr_CanIsr_1_MB16To31,
  &OsCfg_Hal_IntIsr_CanIsr_1_MB32To63,
  &OsCfg_Hal_IntIsr_CanIsr_1_MB64To95,
  &OsCfg_Hal_IntIsr_CanIsr_2_BusOff,
  &OsCfg_Hal_IntIsr_CanIsr_2_MB00To03,
  &OsCfg_Hal_IntIsr_CanIsr_2_MB04To07,
  &OsCfg_Hal_IntIsr_CanIsr_2_MB08To11,
  &OsCfg_Hal_IntIsr_CanIsr_2_MB12To15,
  &OsCfg_Hal_IntIsr_CanIsr_2_MB16To31,
  &OsCfg_Hal_IntIsr_CanIsr_2_MB32To63,
  &OsCfg_Hal_IntIsr_CanIsr_2_MB64To95,
  &OsCfg_Hal_IntIsr_CanIsr_4_BusOff,
  &OsCfg_Hal_IntIsr_CanIsr_4_MB00To03,
  &OsCfg_Hal_IntIsr_CanIsr_4_MB04To07,
  &OsCfg_Hal_IntIsr_CanIsr_4_MB08To11,
  &OsCfg_Hal_IntIsr_CanIsr_4_MB12To15,
  &OsCfg_Hal_IntIsr_CanIsr_4_MB16To31,
  &OsCfg_Hal_IntIsr_CanIsr_4_MB32To63,
  &OsCfg_Hal_IntIsr_CanIsr_4_MB64To95,
  &OsCfg_Hal_IntIsr_CanIsr_7_BusOff,
  &OsCfg_Hal_IntIsr_CanIsr_7_MB00To03,
  &OsCfg_Hal_IntIsr_CanIsr_7_MB04To07,
  &OsCfg_Hal_IntIsr_CanIsr_7_MB08To11,
  &OsCfg_Hal_IntIsr_CanIsr_7_MB12To15,
  &OsCfg_Hal_IntIsr_CanIsr_7_MB16To31,
  &OsCfg_Hal_IntIsr_CanIsr_7_MB32To63,
  &OsCfg_Hal_IntIsr_CanIsr_7_MB64To95,
  &OsCfg_Hal_IntIsr_CounterIsr_SystemTimer,
  &OsCfg_Hal_IntIsr_Gpt_PIT_0_TIMER_0_ISR,
  &OsCfg_Hal_IntIsr_IRQ_LFIC_WKUP_27_28,
  &OsCfg_Hal_IntIsr_Lin_Channel_0_ERR,
  &OsCfg_Hal_IntIsr_Lin_Channel_0_RXI,
  &OsCfg_Hal_IntIsr_Lin_Channel_0_TXI,
  &OsCfg_Hal_IntIsr_Lin_Channel_10_ERR,
  &OsCfg_Hal_IntIsr_Lin_Channel_10_RXI,
  &OsCfg_Hal_IntIsr_Lin_Channel_10_TXI,
  &OsCfg_Hal_IntIsr_Lin_Channel_1_ERR,
  &OsCfg_Hal_IntIsr_Lin_Channel_1_RXI,
  &OsCfg_Hal_IntIsr_Lin_Channel_1_TXI,
  &OsCfg_Hal_IntIsr_Lin_Channel_6_ERR,
  &OsCfg_Hal_IntIsr_Lin_Channel_6_RXI,
  &OsCfg_Hal_IntIsr_Lin_Channel_6_TXI,
  &OsCfg_Hal_IntIsr_Lin_Channel_7_ERR,
  &OsCfg_Hal_IntIsr_Lin_Channel_7_RXI,
  &OsCfg_Hal_IntIsr_Lin_Channel_7_TXI,
  &OsCfg_Hal_IntIsr_PWM_HS_EMIOS0_Ch24_25,
  &OsCfg_Hal_IntIsr_PWM_LS_EMIOS1_Ch6_7,
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
 *  END OF FILE: Os_Hal_Core_Lcfg.c
 *********************************************************************************************************************/

