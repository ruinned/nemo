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
 *            Module: Fee
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Fee_PrivateCfg.h
 *   Generation Time: 2018-11-22 20:14:47
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


/**********************************************************************************************************************
 *  PRIVATE SECTION
 *********************************************************************************************************************/
#if (!defined FEE_PRIVATE_CFG_H)
# define FEE_PRIVATE_CFG_H

  /****************************************************************************
   * VERSION IDENTIFICATION
   ***************************************************************************/
# define FEE_PRIVATE_CFG_MAJOR_VERSION                                (8u)
# define FEE_PRIVATE_CFG_MINOR_VERSION                                (1u)
# define FEE_PRIVATE_CFG_PATCH_VERSION                                (0u)

#ifndef FEE_USE_DUMMY_FUNCTIONS
#define FEE_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef FEE_USE_DUMMY_STATEMENT
#define FEE_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef FEE_DUMMY_STATEMENT
#define FEE_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef FEE_DUMMY_STATEMENT_CONST
#define FEE_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef FEE_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define FEE_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef FEE_ATOMIC_VARIABLE_ACCESS
#define FEE_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef FEE_PROCESSOR_MPC5746C
#define FEE_PROCESSOR_MPC5746C
#endif
#ifndef FEE_COMP_DIAB
#define FEE_COMP_DIAB
#endif
#ifndef FEE_GEN_GENERATOR_MSR
#define FEE_GEN_GENERATOR_MSR
#endif
#ifndef FEE_CPUTYPE_BITORDER_MSB2LSB
#define FEE_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef FEE_CONFIGURATION_VARIANT_PRECOMPILE
#define FEE_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef FEE_CONFIGURATION_VARIANT_LINKTIME
#define FEE_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef FEE_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define FEE_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef FEE_CONFIGURATION_VARIANT
#define FEE_CONFIGURATION_VARIANT FEE_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef FEE_POSTBUILD_VARIANT_SUPPORT
#define FEE_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


  /****************************************************************************
   * Data consistency 
   ***************************************************************************/
#include "SchM_Fee.h"

#define Fee_GlobalSuspend() SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_0() 
#define Fee_GlobalRestore() SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_0() 


  /****************************************************************************
   * Configurations for Development mode
   ***************************************************************************/

/* No Development Error Reporting => no DET include */

/* PRQA S 3453 1 *//* MD_MSR_19.7 */
#define Fee_Errorhook(funcId, errId) 


  /*******************************************************************************************************************
   *  GLOBAL CONSTANT MACROS
   ******************************************************************************************************************/
   
# define FEE_INTERNAL_BUFFER_SIZE                        			  (64U)
   
  /****************************************************************************
   * LOWER LAYER CONFIGURATION PARAMETERS
   ***************************************************************************/
# define FEE_POLLING_MODE                              (STD_OFF)

# define Fee_FlsRead                                          Fls_Read
# define Fee_FlsWrite                                         Fls_Write
# define Fee_FlsErase                                         Fls_Erase
# define Fee_FlsCompare                                       Fls_Compare
# define Fee_FlsCancel                                        Fls_Cancel
# define Fee_FlsGetStatus                                     Fls_GetStatus
# define Fee_FlsGetJobResult                                  Fls_GetJobResult


  /****************************************************************************
   * UPPER LAYER CONFIGURATION PARAMETERS
   ***************************************************************************/
# define FEE_NVM_POLLING_MODE                          (STD_ON)

# if (STD_OFF == FEE_NVM_POLLING_MODE)
#  define Fee_NvMJobEndNotification()         			NvM_JobEndNotification()
#  define Fee_NvMJobErrorNotification()     			NvM_JobErrorNotification()
# endif

  /****************************************************************************
   * Error Callback Notification
   ***************************************************************************/
# define FEE_USE_APPL_ERROR_CALLBACK            		(STD_OFF)

# if (STD_ON == FEE_USE_APPL_ERROR_CALLBACK)
#  include "ApplMain.h"
# endif

  /********************************************************************************************************************
   *  INCLUDES
   *******************************************************************************************************************/


#include "Fls.h" 


# if (STD_OFF == FEE_NVM_POLLING_MODE)

# endif

#endif /* (!defined FEE_PRIVATE_CFG_H) */

/**********************************************************************************************************************
 *  END OF FILE: Fee_PrivateCfg.h
 *********************************************************************************************************************/
 
