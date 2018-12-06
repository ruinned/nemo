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
 *            Module: vDem42
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: vDem42_Cfg.h
 *   Generation Time: 2018-11-22 03:14:17
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


#if !defined (VDEM42_CFG_H)
# define VDEM42_CFG_H

/**********************************************************************************************************************
* INCLUDES
*********************************************************************************************************************/
#include "vDem42_Types.h"
/**********************************************************************************************************************
*  GLOBAL CONSTANT MACROS
*********************************************************************************************************************/ 
/* --- Component Version Information ------------------------------------------------------------------------------- */
/* AUTOSAR Version (from xsi:schemaLocation) */
#define VDEM42_CFG_AR_RELEASE_MAJOR_VERSION                              4U
#define VDEM42_CFG_AR_RELEASE_MINOR_VERSION                              0U
#define VDEM42_CFG_AR_RELEASE_REVISION_VERSION                           3U

/* AUTOSAR Software Specification Version Information of BSW-IMPLEMENTATION */
#define VDEM42_CFG_AR_MAJOR_VERSION                                      4U
#define VDEM42_CFG_AR_MINOR_VERSION                                      2U
#define VDEM42_CFG_AR_PATCH_VERSION                                      2U

/* SW version number of BSW-IMPLEMENTATION */
#define VDEM42_CFG_SW_MAJOR_VERSION                                      1U
#define VDEM42_CFG_SW_MINOR_VERSION                                      2U
#define VDEM42_CFG_SW_PATCH_VERSION                                      0U

/* Generator Version Information */
#define VDEM42_CFG_GEN_MAJOR_VERSION                                     1
#define VDEM42_CFG_GEN_MINOR_VERSION                                     2
#define VDEM42_CFG_GEN_PATCH_VERSION                                     0
 
 /* --- Global Configuration Values --------------------------------------------------------------------------------- */
#ifndef VDEM42_USE_DUMMY_FUNCTIONS
#define VDEM42_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef VDEM42_USE_DUMMY_STATEMENT
#define VDEM42_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef VDEM42_DUMMY_STATEMENT
#define VDEM42_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef VDEM42_DUMMY_STATEMENT_CONST
#define VDEM42_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef VDEM42_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define VDEM42_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef VDEM42_ATOMIC_VARIABLE_ACCESS
#define VDEM42_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef VDEM42_PROCESSOR_MPC5746C
#define VDEM42_PROCESSOR_MPC5746C
#endif
#ifndef VDEM42_COMP_DIAB
#define VDEM42_COMP_DIAB
#endif
#ifndef VDEM42_GEN_GENERATOR_MSR
#define VDEM42_GEN_GENERATOR_MSR
#endif
#ifndef VDEM42_CPUTYPE_BITORDER_MSB2LSB
#define VDEM42_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef VDEM42_CONFIGURATION_VARIANT_PRECOMPILE
#define VDEM42_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef VDEM42_CONFIGURATION_VARIANT_LINKTIME
#define VDEM42_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef VDEM42_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define VDEM42_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef VDEM42_CONFIGURATION_VARIANT
#define VDEM42_CONFIGURATION_VARIANT VDEM42_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef VDEM42_POSTBUILD_VARIANT_SUPPORT
#define VDEM42_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif

#ifndef VDEM42_DEV_ERROR_DETECT
#define VDEM42_DEV_ERROR_DETECT STD_OFF
#endif
#ifndef VDEM42_DEV_ERROR_REPORT
#define VDEM42_DEV_ERROR_REPORT STD_OFF
#endif

#define VDEM42_GLOBAL_EVENT_ENABLED       STD_OFF 
#define VDEM42_CFG_SUPPORT_DTCSUPPRESSION STD_OFF 


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
*  GLOBAL FUNCTION PROTOTYPES
*********************************************************************************************************************/


 #endif  /* VDEM42_CFG_H */
/**********************************************************************************************************************
  END OF FILE: vDem42_Cfg.h
**********************************************************************************************************************/
