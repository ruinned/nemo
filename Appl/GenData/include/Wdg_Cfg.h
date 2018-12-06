/**
*   @file     Wdg_Cfg.h
*   @implements Wdg_Cfg.h_Artifact
*   @version  1.0.0
*
*   @brief    AUTOSAR Wdg - Contains the implementation of the Watchdog API
*   @details  It contains the layer requested by autosar. The functions are independent of
*             hardware settings.
*
*   @addtogroup  Wdg  
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.2 MCAL
*   Platform             : PA
*   Peripheral           : Swt
*   Dependencies         : none
*
*   Autosar Version      : 4.2.2
*   Autosar Revision     : ASR_REL_4_2_REV_0002
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : MPC574XG_MCAL_1_0_0_RTM_ASR_REL_4_2_REV_0002_20170217
*
*   (c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017 NXP
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifndef WDG_CFG_H
#define WDG_CFG_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Wdg_Cfg_h_REF_1
*          Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to
*          prevent the contents of a header file being included twice. All header files are
*          protected against multiple inclusions.
* @section Wdg_Cfg_h_REF_2
*          Violates MISRA 2004 Required Rule 19.4, C macros shall only expand to a braced initialiser, 
*          a constant, a parenthesised expression, a type qualifier, a storage class specifier, or a
*          do-while-zero construct. 
*          This is used to abstract the export of configuration sets
* @section [global]
*          Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely 
*          on the significance of more than 31 characters. The used compilers use more than 31 chars 
*          for identifiers.
* @section Wdg_Cfg_h_REF_3
*          Violates MISRA 2004 Required Rule 8.7, Objects shall be defined at block scope if they are 
*          only accessed from within a single function.
*          These objects are used in various parts of the code
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "WdgIf_Types.h"
/** @violates @ref Wdg_Cfg_h_REF_1 MISRA 2004 Required Rule 19.15 precautions to prevent the contents
 *                of a header file being included twice */
#include "Mcal.h"

#include "Dem.h"





/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file           Wdg_Cfg.h
*/
#define WDG_VENDOR_ID_CFG                    43
#define WDG_MODULE_ID_CFG                    102
#define WDG_AR_RELEASE_MAJOR_VERSION_CFG     4
#define WDG_AR_RELEASE_MINOR_VERSION_CFG     2
#define WDG_AR_RELEASE_REVISION_VERSION_CFG  2
#define WDG_SW_MAJOR_VERSION_CFG             1
#define WDG_SW_MINOR_VERSION_CFG             0
#define WDG_SW_PATCH_VERSION_CFG             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/



/* Check if source file and WdgIf_Types header file are of the same Autosar version */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if (( WDG_AR_RELEASE_MAJOR_VERSION_CFG != WDGIF_TYPES_AR_RELEASE_MAJOR_VERSION) || \
         ( WDG_AR_RELEASE_MINOR_VERSION_CFG != WDGIF_TYPES_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Wdg_Cfg.h and WdgIf_Types.h are different"
    #endif
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
     /* Check if source file and Dem header file are of the same Autosar version */
     #if (( WDG_AR_RELEASE_MAJOR_VERSION_CFG != DEM_AR_RELEASE_MAJOR_VERSION) || \
          ( WDG_AR_RELEASE_MINOR_VERSION_CFG != DEM_AR_RELEASE_MINOR_VERSION))
         #error "AutoSar Version Numbers of Wdg_Channel.c and Dem.h are different"
     #endif
 #endif

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/
#define WDG_START_SEC_CONST_UNSPECIFIED
/**
* @brief Include Memory mapping specification
* @violates @ref Wdg_Cfg_h_REF_1 MISRA 2004 Required Rule 19.15 precautions to prevent the contents
*                of a header file being included twice*/
#include "Wdg_MemMap.h"
 /**
 * @brief Dem error codes
 */
/*@violates @ref Wdg_Cfg_h_REF_3 MISRA Rule 8.7 Objects shall be defined at block scope if they are only accessed from within a single function */
extern CONST(Mcal_DemErrorType, WDG_CONST)Wdg_E_Disable_Rejected;
/*@violates @ref Wdg_Cfg_h_REF_3 MISRA Rule 8.7 Objects shall be defined at block scope if they are only accessed from within a single function */
extern CONST(Mcal_DemErrorType, WDG_CONST)Wdg_E_Mode_Failed;
/*@violates @ref Wdg_Cfg_h_REF_3 MISRA Rule 8.7 Objects shall be defined at block scope if they are only accessed from within a single function */
extern CONST(Mcal_DemErrorType, WDG_CONST)Wdg_E_Corrupt_Config;
/*@violates @ref Wdg_Cfg_h_REF_3 MISRA Rule 8.7 Objects shall be defined at block scope if they are only accessed from within a single function */
extern CONST(Mcal_DemErrorType, WDG_CONST)Wdg_E_Invalid_Call;
/*@violates @ref Wdg_Cfg_h_REF_3 MISRA Rule 8.7 Objects shall be defined at block scope if they are only accessed from within a single function */
extern CONST(Mcal_DemErrorType, WDG_CONST)Wdg_E_Forbidden_Invocation;
/*@violates @ref Wdg_Cfg_h_REF_3 MISRA Rule 8.7 Objects shall be defined at block scope if they are only accessed from within a single function */
extern CONST(Mcal_DemErrorType, WDG_CONST)WDG_E_Unlocked;
/*@violates @ref Wdg_Cfg_h_REF_3 MISRA Rule 8.7 Objects shall be defined at block scope if they are only accessed from within a single function */
extern CONST(Mcal_DemErrorType, WDG_CONST)Wdg_E_Invalid_Parameter;
#define WDG_STOP_SEC_CONST_UNSPECIFIED
/**
* @brief Include Memory mapping specification
* @violates @ref Wdg_Cfg_h_REF_1 MISRA 2004 Required Rule 19.15 precautions to prevent the contents
*                of a header file being included twice
*/
#include "Wdg_MemMap.h"
 /**
 * @brief Dem error codes
 */

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/















/**
  * @brief  This constant specifies if the instance of the WDG is selected or not
  */
#define WDG_INSTANCE0 (STD_ON)




/**
  * @brief  This constant specifies if the instance of the WDG is selected or not
  */
#define WDG_INSTANCE1 (STD_OFF)




/**
  * @brief  This constant specifies if the instance of the WDG is selected or not
  */
#define WDG_INSTANCE2 (STD_OFF)



/**
* @brief  This constant specifies what value of the CR's master access protection will be used
*/
#define SWT_MAP_ENABLE_BITS      (SWT_MAP_ENABLE_8BITS_U32)

/**
* @brief  This define indicate that the watchdog is internal
*/
#define WDG_INTERNAL_MODULE         (0U)

/**
* @brief  This define indicate that the watchdog is external connected on SPI
*/
#define WDG_EXTERNAL_MODULE_SPI     (1U)

/**
* @brief  This define indicate that the watchdog is external connected on DIO
*/
#define WDG_EXTERNAL_MODULE_DIO     (2U)

 /**
 * @brief  This define indicate the number of HW IPs available on the Platform
 */
#define WDG_NO_OF_INSTANCES            (3U)
/**
* @brief  This variable will indicate which type of driver is in use
*/
#define WDG_TYPE (          WDG_INTERNAL_MODULE)


/**
* @brief  Compile switch to enable/disable development error detection for this module
*/
#define WDG_DEV_ERROR_DETECT   (STD_OFF)


/** 
* @brief  Switch to globaly enable/disable the production error reporting.
*/
#define WDG_DISABLE_DEM_REPORT_ERROR_STATUS           (STD_OFF)

/**
* @brief  Compile switch to allow/forbid disabling the watchdog driver during runtime
*/
#define WDG_DISABLE_ALLOWED    (STD_OFF)

/**
* @brief  Compile switch to enable/disable the version information
*/
#define WDG_VERSION_INFO_API   (STD_ON)

/**
* @brief  This variable will indicate the index of instance 0
*/
#define WdgConf_WdgGeneral_WdgIndex_U8 ((uint8)0)

/**
* @brief  This variable will indicate the index of instance 1
*/
#define WdgConf_WdgGeneral_WdgIndex1_U8 ((uint8)1)

/**
* @brief  This variable will indicate the index of instance 2
*/
#define WdgConf_WdgGeneral_WdgIndex2_U8 ((uint8)3)

/**
* @brief  This variable will indicate the Wdg Initial Timeout parameter in miliseconds
*/
#define WDG_INITIAL_TIMEOUT_U16 ((uint16)0)

/**
* @brief  This variable will indicate the Wdg Max Timeout parameter in miliseconds
*/
#define WDG_MAX_TIMEOUT_U16     ((uint16)0)

/**
* @brief  This macro indicate Wdg Max Timeout to fix compiler warning comparision always true
*/
#define WDG_MAX_TIMEOUT_VALUE (0U)
/**
* @brief  This macro will indicate max value of 16bits integer type
*/
#define WDG_MAX_VALUE_TYPE16      (65535U)




/**
* @brief  This variable will indicate if the ISR0 is used
*/
#define  WDG_ISR0_USED







/** 
* @brief  This variable will indicate RAM/ROM execution
*/
#define WDG_ROM


 
/**
* @brief Defines the use of Pre compile (PC) support
*/
              


#define WDG_PRECOMPILE_SUPPORT  (STD_ON)



 
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                   FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif /* WDG_CFG_H */
/** @} */

