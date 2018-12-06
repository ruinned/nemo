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
 *              File: Fee_Cfg.h
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
 *  PUBLIC SECTION
 *********************************************************************************************************************/
#if !defined (FEE_CFG_H_PUBLIC)
# define FEE_CFG_H_PUBLIC

  /********************************************************************************************************************
   *  GLOBAL CONSTANT MACROS
   *******************************************************************************************************************/
  /****************************************************************************
   * VERSION IDENTIFICATION
   ***************************************************************************/
# define FEE_CFG_MAJOR_VERSION                    (8u)
# define FEE_CFG_MINOR_VERSION                    (1u)
# define FEE_CFG_PATCH_VERSION                    (1u)

  /****************************************************************************
   * API CONFIGURATION
   ***************************************************************************/
# define FEE_VERSION_INFO_API                     (STD_OFF)
# define FEE_GET_ERASE_CYCLE_API                  (STD_OFF)
# define FEE_GET_WRITE_CYCLE_API                  (STD_OFF)
# define FEE_FORCE_SECTOR_SWITCH_API              (STD_OFF)
# define FEE_FSS_CONTROL_API                   	  (STD_OFF)

# define FEE_DATA_CONVERSION_API                  (STD_OFF)

  /****************************************************************************
   * DEVELOPMENT CONFIGURATION
   ***************************************************************************/
# define FEE_DEV_ERROR_DETECT                     (STD_OFF)

# define FEE_DEBUG_REPORTING                      (STD_OFF)

  /****************************************************************************
   * GENERAL CONFIGURATION PARAMETER
   ***************************************************************************/

#define FeeConf_FeeBlockConfiguration_FeeConfigBlock (64UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemStatusDataBlock (48UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock0 (32UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemAdminDataBlock (16UL) 


#define FeePartitionConfiguration (0U) 


#define FEE_NUMBER_OF_PARTITIONS (1)

#endif /* FEE_CFG_H_PUBLIC */

/**********************************************************************************************************************
 *  END OF FILE: Fee_Cfg.h
 *********************************************************************************************************************/
 

