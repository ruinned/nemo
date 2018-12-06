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
 *            Module: J1939Tp
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: J1939Tp_PBcfg.h
 *   Generation Time: 2018-11-22 03:14:19
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


#if !defined (J1939TP_PBCFG_H)
# define J1939TP_PBCFG_H

/**********************************************************************************************************************
  MISRA JUSTIFICATION
**********************************************************************************************************************/

/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

# include "J1939Tp_Cfg.h"
# include "J1939Tp_Types.h"

# include "ComStack_Types.h"


/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  J1939TpPBDataSwitches  J1939Tp Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define J1939TP_PBCONFIG                                              STD_OFF  /**< Deactivateable: 'J1939Tp_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define J1939TP_LTCONFIGIDXOFPBCONFIG                                 STD_OFF  /**< Deactivateable: 'J1939Tp_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define J1939TP_PCCONFIGIDXOFPBCONFIG                                 STD_OFF  /**< Deactivateable: 'J1939Tp_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPBIsReducedToDefineDefines  J1939Tp Is Reduced To Define Defines (POST_BUILD)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define J1939TP_ISDEF_LTCONFIGIDXOFPBCONFIG                           STD_OFF
#define J1939TP_ISDEF_PCCONFIGIDXOFPBCONFIG                           STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPBEqualsAlwaysToDefines  J1939Tp Equals Always To Defines (POST_BUILD)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define J1939TP_EQ2_LTCONFIGIDXOFPBCONFIG                             
#define J1939TP_EQ2_PCCONFIGIDXOFPBCONFIG                             
/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  J1939TpPBGetRootDataMacros  J1939Tp Get Root Data Macros (POST_BUILD)
  \brief  These are used to get data pointers of root data.
  \{
*/ 
#define J1939Tp_GetLTConfigIdxOfPBConfig()                            
#define J1939Tp_GetPCConfigIdxOfPBConfig()                            
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPBHasMacros  J1939Tp Has Macros (POST_BUILD)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define J1939Tp_HasPBConfig()                                         
#define J1939Tp_HasLTConfigIdxOfPBConfig()                            
#define J1939Tp_HasPCConfigIdxOfPBConfig()                            
/** 
  \}
*/ 

  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


#endif  /* J1939TP_PBCFG_H */

/**********************************************************************************************************************
  END OF FILE: J1939Tp_PBcfg.h
**********************************************************************************************************************/

