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
 *              File: Os_Hal_Entry_Lcfg.c
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

#define OS_HAL_ENTRY_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_Entry_Cfg.h"
#include "Os_Hal_Entry_Lcfg.h"
#include "Os_Hal_Entry.h"

/* Os kernel module dependencies */
#include "Os_Isr_Lcfg.h"
#include "Os.h"

/* Os hal dependencies */
#include "Os_Hal_Cfg.h"
#include "Os_Hal_Core_Lcfg.h"
#include "Os_Hal_Interrupt_Cfg.h"
#include "Os_Hal_Trap.h"


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

/**********************************************************************************************************************
 *  EXCEPTION VECTOR TABLE CORE 0
 *********************************************************************************************************************/

#define OS_START_SEC_EXCVEC_CORE0_CODE
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

OS_HAL_CODE_SECTION(OS_EXCVEC_CORE0_CODE)
Os_Hal_Asm("   .globl OS_EXCVEC_CORE0_CODE");  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_Asm("OS_EXCVEC_CORE0_CODE:");  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_CoreException(Os_Hal_Exception_Unhandled_0)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_CoreException(Os_Hal_Exception_MachineCheck_MCSRR)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_CoreException(Os_Hal_Exception_Data)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_CoreException(Os_Hal_Exception_Instruction)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_CoreException(Os_Hal_Exception_ExternalInterrupt)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_CoreException(Os_Hal_Exception_Unhandled_5)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_CoreException(Os_Hal_Exception_Program)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_CoreException(Os_Hal_Exception_Unhandled_7)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_CoreException(Os_Hal_Exception_Trap)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_CoreException(Os_Hal_Exception_Unhandled_9)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_CoreException(Os_Hal_Exception_Unhandled_10)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_CoreException(Os_Hal_Exception_Unhandled_11)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

#define OS_STOP_SEC_EXCVEC_CORE0_CODE
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */




/**********************************************************************************************************************
 *  INTERRUPT VECTOR TABLE CORE 0
 *********************************************************************************************************************/

#define OS_START_SEC_INTVEC_CODE
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

OS_HAL_CODE_SECTION(OS_INTVEC_CODE)
Os_Hal_Asm("   .globl OS_INTVEC_CODE");  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_Asm("OS_INTVEC_CODE:");  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt37)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt226)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt376)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt377)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt378)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt379)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt380)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt381)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt394)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt395)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt396)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt397)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt398)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt399)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt406)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt407)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt408)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt548)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt554)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt567)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt568)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt569)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt570)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt571)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt572)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt573)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt574)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt579)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt580)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt581)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt582)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt583)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt584)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt585)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt586)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt591)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt592)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt593)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt594)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt595)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt596)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt597)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt598)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt615)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt616)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt617)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt618)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt619)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt620)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt621)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt622)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt651)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt652)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt653)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt654)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt655)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt656)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt657)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt658)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt671)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt718)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Isr_Core0_Interrupt725)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ExternalInterrupt(Os_Irq_Unhandled)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

#define OS_STOP_SEC_INTVEC_CODE
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define OS_START_SEC_CODE
#include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt618, OsCfg_Isr_CanIsr_4_MB08To11)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt619, OsCfg_Isr_CanIsr_4_MB12To15)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt616, OsCfg_Isr_CanIsr_4_MB00To03)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt617, OsCfg_Isr_CanIsr_4_MB04To07)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt658, OsCfg_Isr_CanIsr_7_MB64To95)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt615, OsCfg_Isr_CanIsr_4_BusOff)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt579, OsCfg_Isr_CanIsr_1_BusOff)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt656, OsCfg_Isr_CanIsr_7_MB16To31)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt657, OsCfg_Isr_CanIsr_7_MB32To63)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt379, OsCfg_Isr_Lin_Channel_1_RXI)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt654, OsCfg_Isr_CanIsr_7_MB08To11)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt655, OsCfg_Isr_CanIsr_7_MB12To15)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt377, OsCfg_Isr_Lin_Channel_0_TXI)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt652, OsCfg_Isr_CanIsr_7_MB00To03)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt378, OsCfg_Isr_Lin_Channel_0_ERR)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt653, OsCfg_Isr_CanIsr_7_MB04To07)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt573, OsCfg_Isr_CanIsr_0_MB32To63)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt376, OsCfg_Isr_Lin_Channel_0_RXI)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt574, OsCfg_Isr_CanIsr_0_MB64To95)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt651, OsCfg_Isr_CanIsr_7_BusOff)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt571, OsCfg_Isr_CanIsr_0_MB12To15)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt572, OsCfg_Isr_CanIsr_0_MB16To31)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt570, OsCfg_Isr_CanIsr_0_MB08To11)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt37, OsCfg_Isr_CounterIsr_SystemTimer)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt407, OsCfg_Isr_Lin_Channel_10_TXI)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt408, OsCfg_Isr_Lin_Channel_10_ERR)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt406, OsCfg_Isr_Lin_Channel_10_RXI)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt725, OsCfg_Isr_PWM_LS_EMIOS1_Ch6_7)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt568, OsCfg_Isr_CanIsr_0_MB00To03)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt569, OsCfg_Isr_CanIsr_0_MB04To07)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt567, OsCfg_Isr_CanIsr_0_BusOff)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt718, OsCfg_Isr_PWM_HS_EMIOS0_Ch24_25)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt399, OsCfg_Isr_Lin_Channel_7_ERR)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt597, OsCfg_Isr_CanIsr_2_MB32To63)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt554, OsCfg_Isr_ADC_1_EOC)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt598, OsCfg_Isr_CanIsr_2_MB64To95)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt397, OsCfg_Isr_Lin_Channel_7_RXI)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt595, OsCfg_Isr_CanIsr_2_MB12To15)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt398, OsCfg_Isr_Lin_Channel_7_TXI)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt596, OsCfg_Isr_CanIsr_2_MB16To31)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt395, OsCfg_Isr_Lin_Channel_6_TXI)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt593, OsCfg_Isr_CanIsr_2_MB04To07)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt396, OsCfg_Isr_Lin_Channel_6_ERR)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt594, OsCfg_Isr_CanIsr_2_MB08To11)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt671, OsCfg_Isr_IRQ_LFIC_WKUP_27_28)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt591, OsCfg_Isr_CanIsr_2_BusOff)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt394, OsCfg_Isr_Lin_Channel_6_RXI)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt592, OsCfg_Isr_CanIsr_2_MB00To03)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt548, OsCfg_Isr_ADC_0_EOC)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt621, OsCfg_Isr_CanIsr_4_MB32To63)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt226, OsCfg_Isr_Gpt_PIT_0_TIMER_0_ISR)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt622, OsCfg_Isr_CanIsr_4_MB64To95)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt586, OsCfg_Isr_CanIsr_1_MB64To95)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt620, OsCfg_Isr_CanIsr_4_MB16To31)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt584, OsCfg_Isr_CanIsr_1_MB16To31)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt585, OsCfg_Isr_CanIsr_1_MB32To63)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt582, OsCfg_Isr_CanIsr_1_MB08To11)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt583, OsCfg_Isr_CanIsr_1_MB12To15)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt580, OsCfg_Isr_CanIsr_1_MB00To03)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt581, OsCfg_Isr_CanIsr_1_MB04To07)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt380, OsCfg_Isr_Lin_Channel_1_TXI)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Isr_Cat2Entry(Os_Isr_Core0_Interrupt381, OsCfg_Isr_Lin_Channel_1_ERR)  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

#define OS_STOP_SEC_CODE
#include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Entry_Lcfg.c
 *********************************************************************************************************************/
