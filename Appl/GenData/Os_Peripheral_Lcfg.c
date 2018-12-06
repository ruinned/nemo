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
 *              File: Os_Peripheral_Lcfg.c
 *   Generation Time: 2018-11-22 03:14:20
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

#define OS_PERIPHERAL_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Peripheral_Lcfg.h"
#include "Os_Peripheral.h"

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

#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Peripheral configuration data: ADC_PROTECTED_AREA_ADC0 */
OS_LOCAL CONST(Os_PeripheralConfigType, OS_CONST) OsCfg_Peripheral_ADC_PROTECTED_AREA_ADC0 =
{
  /* .AddressStart          = */ (Os_AddressOfConstType) 0xFFE00000UL,  /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */
  /* .AddressEnd            = */ (Os_AddressOfConstType) 0xFFE03FFFUL,    /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */ 
  /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(OsApplication_Untrusted_Core0))
};

/*! Peripheral configuration data: ADC_PROTECTED_AREA_ADC1 */
OS_LOCAL CONST(Os_PeripheralConfigType, OS_CONST) OsCfg_Peripheral_ADC_PROTECTED_AREA_ADC1 =
{
  /* .AddressStart          = */ (Os_AddressOfConstType) 0xFBE00000UL,  /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */
  /* .AddressEnd            = */ (Os_AddressOfConstType) 0xFBE03FFFUL,    /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */ 
  /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(OsApplication_Untrusted_Core0))
};

/*! Peripheral configuration data: CAN_PROTECTED_AREA_CH0 */
OS_LOCAL CONST(Os_PeripheralConfigType, OS_CONST) OsCfg_Peripheral_CAN_PROTECTED_AREA_CH0 =
{
  /* .AddressStart          = */ (Os_AddressOfConstType) 0xFFEC0000UL,  /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */
  /* .AddressEnd            = */ (Os_AddressOfConstType) 0xFFECFFFFUL,    /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */ 
  /* .AccessingApplications = */ OS_APPID2MASK(OsApplication_Untrusted_Core0)
};

/*! Peripheral configuration data: CAN_PROTECTED_AREA_CH1 */
OS_LOCAL CONST(Os_PeripheralConfigType, OS_CONST) OsCfg_Peripheral_CAN_PROTECTED_AREA_CH1 =
{
  /* .AddressStart          = */ (Os_AddressOfConstType) 0xFBEC0000UL,  /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */
  /* .AddressEnd            = */ (Os_AddressOfConstType) 0xFBEC3FFFUL,    /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */ 
  /* .AccessingApplications = */ OS_APPID2MASK(OsApplication_Untrusted_Core0)
};

/*! Peripheral configuration data: CAN_PROTECTED_AREA_CH2 */
OS_LOCAL CONST(Os_PeripheralConfigType, OS_CONST) OsCfg_Peripheral_CAN_PROTECTED_AREA_CH2 =
{
  /* .AddressStart          = */ (Os_AddressOfConstType) 0xFFEC4000UL,  /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */
  /* .AddressEnd            = */ (Os_AddressOfConstType) 0xFFEC7FFFUL,    /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */ 
  /* .AccessingApplications = */ OS_APPID2MASK(OsApplication_Untrusted_Core0)
};

/*! Peripheral configuration data: CAN_PROTECTED_AREA_CH3 */
OS_LOCAL CONST(Os_PeripheralConfigType, OS_CONST) OsCfg_Peripheral_CAN_PROTECTED_AREA_CH3 =
{
  /* .AddressStart          = */ (Os_AddressOfConstType) 0xFBEC4000UL,  /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */
  /* .AddressEnd            = */ (Os_AddressOfConstType) 0xFBEC7FFFUL,    /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */ 
  /* .AccessingApplications = */ OS_APPID2MASK(OsApplication_Untrusted_Core0)
};

/*! Peripheral configuration data: CAN_PROTECTED_AREA_CH4 */
OS_LOCAL CONST(Os_PeripheralConfigType, OS_CONST) OsCfg_Peripheral_CAN_PROTECTED_AREA_CH4 =
{
  /* .AddressStart          = */ (Os_AddressOfConstType) 0xFFEC8000UL,  /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */
  /* .AddressEnd            = */ (Os_AddressOfConstType) 0xFFECBFFFUL,    /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */ 
  /* .AccessingApplications = */ OS_APPID2MASK(OsApplication_Untrusted_Core0)
};

/*! Peripheral configuration data: CAN_PROTECTED_AREA_CH7 */
OS_LOCAL CONST(Os_PeripheralConfigType, OS_CONST) OsCfg_Peripheral_CAN_PROTECTED_AREA_CH7 =
{
  /* .AddressStart          = */ (Os_AddressOfConstType) 0xFBEC0000UL,  /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */
  /* .AddressEnd            = */ (Os_AddressOfConstType) 0xFBECFFFFUL,    /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */ 
  /* .AccessingApplications = */ OS_APPID2MASK(OsApplication_Untrusted_Core0)
};

/*! Peripheral configuration data: Dio */
OS_LOCAL CONST(Os_PeripheralConfigType, OS_CONST) OsCfg_Peripheral_Dio =
{
  /* .AddressStart          = */ (Os_AddressOfConstType) 0xFFFC0000UL,  /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */
  /* .AddressEnd            = */ (Os_AddressOfConstType) 0xFFFC2000UL,    /* PRQA S 0306 */ /* MD_Os_0306_PeripheralConfigType */ 
  /* .AccessingApplications = */ OS_APPID2MASK(OsApplication_Untrusted_Core0)
};

/*! Object reference table for peripherals. */
CONSTP2CONST(Os_PeripheralConfigType, OS_CONST, OS_CONST) OsCfg_PeripheralRefs[OS_PERIPHERALID_COUNT + 1] =
{
  &OsCfg_Peripheral_ADC_PROTECTED_AREA_ADC0,
  &OsCfg_Peripheral_ADC_PROTECTED_AREA_ADC1,
  &OsCfg_Peripheral_CAN_PROTECTED_AREA_CH0,
  &OsCfg_Peripheral_CAN_PROTECTED_AREA_CH1,
  &OsCfg_Peripheral_CAN_PROTECTED_AREA_CH2,
  &OsCfg_Peripheral_CAN_PROTECTED_AREA_CH3,
  &OsCfg_Peripheral_CAN_PROTECTED_AREA_CH4,
  &OsCfg_Peripheral_CAN_PROTECTED_AREA_CH7,
  &OsCfg_Peripheral_Dio,
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
 *  END OF FILE: Os_Peripheral_Lcfg.c
 *********************************************************************************************************************/
