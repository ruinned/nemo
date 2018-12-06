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
 *            Module: J1939Nm
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: J1939Nm_PBcfg.h
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

/**********************************************************************************************************************
 * WARNING: This code has been generated with reduced-severity errors. 
 * The created output files contain errors that have been ignored. Usage of the created files can lead to unpredictable behavior of the embedded code.
 * Usage of the created files happens at own risk!
 * 
 * [Warning] J1939NM01021 - J1939 network addresses mismatch 
 * - [Reduced Severity due to User-Defined Parameter] The CanIf Tx Pdu contains a source address (value=0x0F) that is not configured for any J1939Nm node.
 * Erroneous configuration elements:
 * /ActiveEcuC/J1939Nm/J1939NmConfigSet/FMSNet_J1939_44d89c3b (DefRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmChannel)
 * /ActiveEcuC/CanIf/CanIfInitCfg/ERC1_x_EMSRetFMS_oFMSNet_d863a207_Tx[0:CanIfTxPduCanId](value=418381839) (DefRef: /MICROSAR/CanIf/CanIfInitCfg/CanIfTxPduCfg/CanIfTxPduCanId)
 * /ActiveEcuC/J1939Nm/J1939NmConfigSet/CIOM_4d5cd289[0:J1939NmNodePreferredAddress](value=49) (DefRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodePreferredAddress)
 *********************************************************************************************************************/

#if !defined (J1939NM_PBCFG_H)
# define J1939NM_PBCFG_H

/**********************************************************************************************************************
  MISRA JUSTIFICATION
**********************************************************************************************************************/

/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

# include "ComStack_Types.h"
# include "J1939Nm_Types.h"

/* include headers with symbolic name values */
#include "CanIf.h"
#include "ComM.h"
#include "J1939Rm.h"


/* include headers with callout function prototypes */
#include "Dem.h"


/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  J1939NmPBDataSwitches  J1939Nm Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define J1939NM_PBCONFIG                                              STD_OFF  /**< Deactivateable: 'J1939Nm_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define J1939NM_LTCONFIGIDXOFPBCONFIG                                 STD_OFF  /**< Deactivateable: 'J1939Nm_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define J1939NM_PCCONFIGIDXOFPBCONFIG                                 STD_OFF  /**< Deactivateable: 'J1939Nm_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPBIsReducedToDefineDefines  J1939Nm Is Reduced To Define Defines (POST_BUILD)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define J1939NM_ISDEF_LTCONFIGIDXOFPBCONFIG                           STD_OFF
#define J1939NM_ISDEF_PCCONFIGIDXOFPBCONFIG                           STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPBEqualsAlwaysToDefines  J1939Nm Equals Always To Defines (POST_BUILD)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define J1939NM_EQ2_LTCONFIGIDXOFPBCONFIG                             
#define J1939NM_EQ2_PCCONFIGIDXOFPBCONFIG                             
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
  \defgroup  J1939NmPBGetRootDataMacros  J1939Nm Get Root Data Macros (POST_BUILD)
  \brief  These are used to get data pointers of root data.
  \{
*/ 
#define J1939Nm_GetLTConfigIdxOfPBConfig()                            
#define J1939Nm_GetPCConfigIdxOfPBConfig()                            
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPBHasMacros  J1939Nm Has Macros (POST_BUILD)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define J1939Nm_HasPBConfig()                                         
#define J1939Nm_HasLTConfigIdxOfPBConfig()                            
#define J1939Nm_HasPCConfigIdxOfPBConfig()                            
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
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  J1939NmPBValueTypes  J1939Nm Value Types (POST_BUILD)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  J1939NmPBRootValueTypes  J1939Nm Root Value Types (POST_BUILD)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


#endif  /* J1939NM_PBCFG_H */

/**********************************************************************************************************************
  END OF FILE: J1939Nm_PBcfg.h
**********************************************************************************************************************/

