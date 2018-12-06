/**
* @file    Wdg_43_Instance0_PBCfg.c
* @version 1.0.0
* @brief   AUTOSAR Wdg - contains the data exported by the watchodg module
* @details Contains the information that will be exported by the module, as requested by Autosar.
*
* @addtogroup  Wdg
* @{
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

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Wdg_43_Instance0_PBcfg_c_REF_1
*          Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to
*          prevent the contents of a header file being included twice. All header files are
*          protected against multiple inclusions.
*
* @section Wdg_43_Instance0_PBcfg_c_REF_2
*          Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure
*          that 31 character significance and case sensitivity are supported for external identifiers.
*          The defines are validated.
*
* @section Wdg_43_Instance0_PBcfg_c_REF_3
*          Violates MISRA 2004 Required Rule 8.10, All declarations and definitions of objects or
*          functions at file scope shall have internal linkage unless external linkage is required.
*          The functions/variables are part of external configuration
*
* @section Wdg_43_Instance0_PBcfg_c_REF_4
*          Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements
*          and comments before '#include'. This is an Autosar requirement about
*          the memory management (Autosar requirement MEMMAP003).
*
* @section Wdg_43_Instance0_PBcfg_c_REF_5
*          Violates MISRA 2004 Required Rule 8.8, An external object or function shall be declared in
*          one and only one file. This is an callback function from a macrofile
*
* @section [global]
*          Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely 
*          on the significance of more than 31 characters. The used compilers use more than 31 chars 
*          for identifiers.
*/


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/**
* @file           Wdg_43_Instance0_PBcfg.c
*/

#include "Wdg_Channel.h"
#if (WDG_TYPE == WDG_INTERNAL_MODULE)
    #include "Reg_eSys_Swt_defines.h"
#endif

#if (WDG_INSTANCE0 == STD_ON)

 /*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 ==================================================================================================*/
 /**
 * @file           Wdg_43_Instance0_PBcfg.c
 */
 #define WDG_VENDOR_ID_PBCFG_C                    43
 #define WDG_AR_RELEASE_MAJOR_VERSION_PBCFG_C     4
 #define WDG_AR_RELEASE_MINOR_VERSION_PBCFG_C     2
/** @violates @ref Wdg_43_Instance0_PBcfg_c_REF_2 MISRA 2004 Rule 1.4, The compiler/linker shall be checked to ensure
*  that 31 character significance and case sensitivity are supported for external identifiers. */
 #define WDG_AR_RELEASE_REVISION_VERSION_PBCFG_C  2
 #define WDG_SW_MAJOR_VERSION_PBCFG_C             1
 #define WDG_SW_MINOR_VERSION_PBCFG_C             0
 #define WDG_SW_PATCH_VERSION_PBCFG_C             0

 /*==================================================================================================
 *                                      FILE VERSION CHECKS
 ==================================================================================================*/

  /* Check if current file and Wdg header file are of the same vendor */
 #if (WDG_VENDOR_ID_PBCFG_C != WDG_CHANNEL_VENDOR_ID)
     #error "Wdg_43_Instance0_PBcfg.c and Wdg_Channel.h have different vendor ids"
 #endif

 /* Check if source file and Wdg header file are of the same Autosar version */
 #if ((WDG_AR_RELEASE_MAJOR_VERSION_PBCFG_C != WDG_CHANNEL_AR_RELEASE_MAJOR_VERSION) || \
      (WDG_AR_RELEASE_MINOR_VERSION_PBCFG_C != WDG_CHANNEL_AR_RELEASE_MINOR_VERSION) || \
      (WDG_AR_RELEASE_REVISION_VERSION_PBCFG_C != WDG_CHANNEL_AR_RELEASE_REVISION_VERSION))
     #error "AutoSar Version Numbers of Wdg_43_Instance0_PBcfg.c and Wdg_Channel.h are different"
 #endif
 /* Check if source file and Wdg header file are of the same Software version */
 #if ((WDG_SW_MAJOR_VERSION_PBCFG_C != WDG_CHANNEL_SW_MAJOR_VERSION) || \
      (WDG_SW_MINOR_VERSION_PBCFG_C != WDG_CHANNEL_SW_MINOR_VERSION) || \
      (WDG_SW_PATCH_VERSION_PBCFG_C != WDG_CHANNEL_SW_PATCH_VERSION))
     #error "Software Version Numbers of Wdg_43_Instance0_PBcfg.c and Wdg_Channel.h are different"
 #endif

 #if (WDG_TYPE == WDG_INTERNAL_MODULE)
     /* Check if source file and Reg_eSys_Swt_defines header file are of the same vendor */
     #if (WDG_VENDOR_ID_PBCFG_C != REG_ESYS_SWT_DEFINES_VENDOR_ID)
         #error "Wdg_43_Instance0_PBcfg.c and Reg_eSys_Swt_defines.h have different vendor ids"
     #endif

     /* Check if source file and Reg_eSys_Swt_defines header file are of the same Autosar version */
     #if ((WDG_AR_RELEASE_MAJOR_VERSION_PBCFG_C != REG_ESYS_SWT_DEFINES_AR_RELEASE_MAJOR_VERSION) || \
          (WDG_AR_RELEASE_MINOR_VERSION_PBCFG_C != REG_ESYS_SWT_DEFINES_AR_RELEASE_MINOR_VERSION) || \
          (WDG_AR_RELEASE_REVISION_VERSION_PBCFG_C != REG_ESYS_SWT_DEFINES_AR_RELEASE_REVISION_VERSION))
         #error "AutoSar Version Numbers of Wdg_43_Instance0_PBcfg.c and Reg_eSys_Swt_defines.h are different"
     #endif

     /* Check if source file and Reg_eSys_Swt_defines header file are of the same Software version */
     #if ((WDG_SW_MAJOR_VERSION_PBCFG_C != REG_ESYS_SWT_DEFINES_SW_MAJOR_VERSION) || \
          (WDG_SW_MINOR_VERSION_PBCFG_C != REG_ESYS_SWT_DEFINES_SW_MINOR_VERSION) || \
          (WDG_SW_PATCH_VERSION_PBCFG_C != REG_ESYS_SWT_DEFINES_SW_PATCH_VERSION))
         #error "Software Version Numbers of Wdg_43_Instance0_PBcfg.c and Reg_eSys_Swt_defines.h are different"
     #endif
 #endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                     GLOBAL FUNCTIONS
==================================================================================================*/
#define WDG_START_SEC_CODE
 /**
 * @brief Include Memory mapping specification
 * @violates @ref Wdg_43_Instance0_PBcfg_c_REF_1 MISRA 2004 Required Rule 19.15, precautions to prevent the contents
 *                of a header file being included twice
 * @violates @ref Wdg_43_Instance0_PBcfg_c_REF_4 MISRA 2004 Required Rule 19.1, only preprocessor statements
 *                and comments before '#include'
 */
#include "Wdg_MemMap.h"

/**
 * @brief Callback function from plugin.m
 * @violates @ref Wdg_43_Instance0_PBcfg_c_REF_5 MISRA 2004 Required Rule 8.8, An external object or function shall be declared in
 * one and only one file. This is an callback function from a macrofile
 */



#define WDG_STOP_SEC_CODE
 /**
 * @brief Include Memory mapping specification
 * @violates @ref Wdg_43_Instance0_PBcfg_c_REF_1 MISRA 2004 Required Rule 19.15, precautions to prevent the contents
 *                of a header file being included twice
 * @violates @ref Wdg_43_Instance0_PBcfg_c_REF_4 MISRA 2004 Required Rule 19.1, only preprocessor statements
 *                and comments before '#include'
 */
#include "Wdg_MemMap.h"
/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/
#define WDG_START_SEC_CONFIG_DATA_UNSPECIFIED
 /**
 * @brief Include Memory mapping specification
 * @violates @ref Wdg_43_Instance0_PBcfg_c_REF_1 MISRA 2004 Required Rule 19.15, precautions to prevent the contents
 *                of a header file being included twice
 * @violates @ref Wdg_43_Instance0_PBcfg_c_REF_4 MISRA 2004 Required Rule 19.1, only preprocessor statements
 *                and comments before '#include'
 */
#include "Wdg_MemMap.h"




/** 
 * @violates @ref Wdg_43_Instance0_PBcfg_c_REF_3  MISRA 2004 Required Rule 8.10, All declarations and definitions of objects or
 * functions at file scope shall have internal linkage unless external linkage is required.
 */
CONST(Wdg_Swt_ConfigType, WDG_CONST) Wdg_Swt_OffModeSettings_0=
{
        (uint32)(SWT_MAP_ENABLE_8BITS_U32 | SWT_WDG_DISABLED_U32 | SWT_WDG_SOFT_LOCK_U32),
        (uint32)0x00000100, /*Timeout config*/
        (uint32)0x00000000,  /* Window config */
        (uint32)0x00000000, /* Initial key value*/
        (uint32)128       /* Internal clock frequency*/
};



 /** @violates @ref Wdg_43_Instance0_PBcfg_c_REF_3  MISRA 2004 Required Rule 8.10, All declarations and definitions of objects or
  *   functions at file scope shall have internal linkage unless external linkage is required. 
  */
CONST(Wdg_Swt_ConfigType, WDG_CONST) Wdg_Swt_SlowModeSettings_0=
{
    
(uint32)(SWT_ALL_MAP_DISABLE_U32 | SWT_MAP0_ENABLE_U32 | SWT_MAP1_ENABLE_U32 | SWT_MAP2_ENABLE_U32 | SWT_MAP3_ENABLE_U32 | SWT_MAP4_ENABLE_U32 | SWT_MAP5_ENABLE_U32 | SWT_MAP6_ENABLE_U32 | SWT_MAP7_ENABLE_U32 | SWT_WDG_ENABLED_U32 | SWT_TRIGGER_MODE_REGULAR_U32 | SWT_FIXED_SERVICE_U32 | SWT_WDG_RUN_IN_HALT_U32 | SWT_WDG_STOP_IN_DEBUG_U32 | SWT_RESET_ON_TIMEOUT_U32 | SWT_INVALID_ACCESS_GEN_SYSTEM_RESET_U32  ), /* WDG Control and configuration */
        (uint32)0x02625a00,  /* Time-out config */
        (uint32)0x00f42400,  /* Window config */
        (uint32)0x00000000,  /*Initial service key value*/
        (uint32)40000 /*Wdg Internal clock value*/    

};


/** @violates @ref Wdg_43_Instance0_PBcfg_c_REF_3  MISRA 2004 Required Rule 8.10, All declarations and definitions of objects or
 *   functions at file scope shall have internal linkage unless external linkage is required. 
 */
CONST(Wdg_Swt_ConfigType, WDG_CONST) Wdg_Swt_FastModeSettings_0=
{
    
(uint32)(SWT_ALL_MAP_DISABLE_U32 | SWT_MAP0_ENABLE_U32 | SWT_MAP1_ENABLE_U32 | SWT_MAP2_ENABLE_U32 | SWT_MAP3_ENABLE_U32 | SWT_MAP4_ENABLE_U32 | SWT_MAP5_ENABLE_U32 | SWT_MAP6_ENABLE_U32 | SWT_MAP7_ENABLE_U32 | SWT_WDG_ENABLED_U32 | SWT_TRIGGER_MODE_REGULAR_U32 | SWT_FIXED_SERVICE_U32 | SWT_WDG_RUN_IN_HALT_U32 | SWT_WDG_STOP_IN_DEBUG_U32 | SWT_RESET_ON_TIMEOUT_U32 | SWT_INVALID_ACCESS_GEN_SYSTEM_RESET_U32  ), /* WDG Control and configuration */
        (uint32)0xee6b2800,  /* Time-out config */
        (uint32)0x5f5e1000,  /* Window config */
        (uint32)0x00000000,  /*Initial service key value*/
        (uint32)40000 /*Wdg Internal clock value*/    

};


/**
* @brief  This constant contains the configuration set for the postbuild time
*/
/** @violates @ref Wdg_43_Instance0_PBcfg_c_REF_3  MISRA 2004 Required Rule 8.10, All declarations and definitions of objects or
 *   functions at file scope shall have internal linkage unless external linkage is required. */

CONST(Wdg_ConfigType, WDG_CONST)WdgSettingsConfig_0 =
{
        WDGIF_SLOW_MODE,
        WDG_IPW_INSTANCE0,
        (Gpt_ChannelType)GptConf_GptChannelConfiguration_GptChannelConfiguration_Wdg,
        (uint32)40000,
        { &Wdg_Swt_OffModeSettings_0, &Wdg_Swt_SlowModeSettings_0, &Wdg_Swt_FastModeSettings_0},
        NULL_PTR /* WdgCallbackNotification */
};




#define WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED
 /**
 * @brief Include Memory mapping specification
 * @violates @ref Wdg_43_Instance0_PBcfg_c_REF_1 MISRA 2004 Required Rule 19.15, precautions to prevent the contents
 *                of a header file being included twice
 * @violates @ref Wdg_43_Instance0_PBcfg_c_REF_4 MISRA 2004 Required Rule 19.1, only preprocessor statements
 *                and comments before '#include'
 */
#include "Wdg_MemMap.h"
/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
    *                                      LOCAL FUNCTIONS
==================================================================================================*/


#endif /* #if WDG_INSTANCE0 == STD_ON*/
#ifdef __cplusplus
}
#endif

/** @} */
