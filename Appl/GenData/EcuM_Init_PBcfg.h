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
 *            Module: EcuM
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: EcuM_Init_PBcfg.h
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

#if !defined (ECUM_INIT_PBCFG_H)
# define ECUM_INIT_PBCFG_H

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_GlobalConfigDefines>             DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  
/* If ECUM_USE_GENERATED_GLOBAL_CONFIG is STD_ON, the generated EcuM_GlobalConfigRoot will be used. 
 * Turn to STD_OFF if custom implementation shall be used. Therefore use the corresponding user blocks */
 
#define ECUM_USE_GENERATED_GLOBAL_CONFIG      STD_ON

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_Init_Includes>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Mcu.h" 
#include "Port.h" 
#include "Icu.h" 
#include "EcuM.h" 
#include "Dem.h" 
#include "Adc.h" 
#include "Fls.h" 
#include "Gpt.h" 
#include "CDD_Mcl.h" 
#include "Pwm.h" 


#include "EcuM_Init_Cfg.h"

/**********************************************************************************************************************
 *  CONFIG DEFINES
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/* In the following is the generated EcuM_GlobalConfigType. It contains supported BSW modules which
 * have configuration variant post-build-loadable. 
 */

#if (ECUM_USE_GENERATED_GLOBAL_CONFIG == STD_ON)

typedef struct
{
  CONSTP2CONST(Mcu_ConfigType, TYPEDEF, MCU_APPL_CONST) CfgPtr_Mcu_Init;
  CONSTP2CONST(Port_ConfigType, TYPEDEF, PORT_APPL_CONST) CfgPtr_Port_Init;
  CONSTP2CONST(Icu_ConfigType, TYPEDEF, ICU_APPL_CONST) CfgPtr_Icu_Init;
  CONSTP2CONST(EcuM_PbConfigType, TYPEDEF, ECUM_INIT_DATA) CfgPtr_EcuM_Init;
  CONSTP2CONST(Dem_ConfigType, TYPEDEF, DEM_INIT_DATA) CfgPtr_Dem_PreInit;
  CONSTP2CONST(Adc_ConfigType, TYPEDEF, ADC_APPL_CONST) CfgPtr_Adc_Init;
  CONSTP2CONST(Fls_ConfigType, TYPEDEF, FLS_APPL_CONST) CfgPtr_Fls_Init;
  CONSTP2CONST(Gpt_ConfigType, TYPEDEF, GPT_APPL_CONST) CfgPtr_Gpt_Init;
  CONSTP2CONST(Mcl_ConfigType, TYPEDEF, MCL_APPL_CONST) CfgPtr_Mcl_Init;
  CONSTP2CONST(Pwm_ConfigType, TYPEDEF, PWM_APPL_CONST) CfgPtr_Pwm_Init;
  CONSTP2CONST(Dem_ConfigType, TYPEDEF, DEM_INIT_DATA) CfgPtr_Dem_Init;
} EcuM_GlobalPBConfigType;

typedef EcuM_GlobalPBConfigType EcuM_GlobalConfigType;

typedef P2CONST(EcuM_GlobalConfigType, AUTOMATIC, ECUM_CONST) EcuM_GlobalConfigRefType;

typedef struct
{
  EcuM_GlobalConfigType GlobalConfiguration;
} EcuM_GlobalConfigRootType;

#endif


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK EcuM_GlobalConfigType>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/* In this section a custom EcuM_GlobalConfigType can be defined. Use generated EcuM_GlobalConfigType as template.
 *
 * Caution: EcuM must be always in variant post-build if one of the BSW module is in variant post-build.
 *          Do not change the name of the member EcuM. If the BswM is in variant post-build 
 *          it is also not allowed to change the name of the struct member. This two modules 
 *          are accessed during initialization via this names.
 */



/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/* Global variable to access the global postbuild data, do not remove and do not change the name */
#define ECUM_START_SEC_PBCFG_GLOBALROOT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 

extern CONST(EcuM_GlobalConfigRootType, ECUM_PBCFG) EcuM_GlobalConfigRoot; 

#define ECUM_STOP_SEC_PBCFG_GLOBALROOT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */ 



#define ECUM_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Global pointer to access the global postbuild data, do not remove and do not change the name */
extern P2CONST(EcuM_GlobalConfigType, ECUM_VAR_NOINIT, ECUM_PBCFG) EcuM_GlobalPBConfig_Ptr;

#define ECUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#if 0
#endif




#endif
/**********************************************************************************************************************
 *  END OF FILE: ECUM_INIT_PBCFG.H
 *********************************************************************************************************************/
