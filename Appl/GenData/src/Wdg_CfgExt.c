
/**
* @file    Wdg_Cfg.c
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
* @section Wdg_Cfg_c_REF_1
*          Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements
*          and comments before '#include'. This is an Autosar requirement about
*          the memory management (Autosar requirement MEMMAP003).
*
* @section Wdg_Cfg_c_REF_2
*          Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to
*          prevent the contents of a header file being included twice. All header files are
*          protected against multiple inclusions.
*
* @section Wdg_Cfg_c_REF_3
*          Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure
*          that 31 character significance and case sensitivity are supported for external identifiers.
*          The defines are validated.
*
* @section Wdg_Cfg_c_REF_4
*          Violates MISRA 2004 Required Rule 8.10, All declarations and definitions of objects or
*          functions at file scope shall have internal linkage unless external linkage is required.
*          The functions/variables are part of external configuration
* @section [global]
*          Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely 
*          on the significance of more than 31 characters. The used compilers use more than 31 chars 
*          for identifiers.
*
*/


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/**
* @file           Wdg_Cfg.c 
*/

#include "Wdg_Channel.h"
#if (WDG_TYPE == WDG_INTERNAL_MODULE)
    #include "Reg_eSys_Swt_defines.h"
#endif


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file           Wdg_Cfg.c   
*/
#define WDG_VENDOR_ID_CFG_C                    43
/** @violates @ref Wdg_Cfg_c_REF_3 MISRA 2004 Rule 1.4, The compiler/linker shall be checked to ensure
 *  that 31 character significance and case sensitivity are supported for external identifiers. */
#define WDG_AR_RELEASE_MAJOR_VERSION_CFG_C     4
/** @violates @ref Wdg_Cfg_c_REF_3 MISRA 2004 Rule 1.4, The compiler/linker shall be checked to ensure
 *  that 31 character significance and case sensitivity are supported for external identifiers. */
#define WDG_AR_RELEASE_MINOR_VERSION_CFG_C     2
/** @violates @ref Wdg_Cfg_c_REF_3 MISRA 2004 Rule 1.4, The compiler/linker shall be checked to ensure
*  that 31 character significance and case sensitivity are supported for external identifiers. */
#define WDG_AR_RELEASE_REVISION_VERSION_CFG_C  2
#define WDG_SW_MAJOR_VERSION_CFG_C             1
#define WDG_SW_MINOR_VERSION_CFG_C             0
#define WDG_SW_PATCH_VERSION_CFG_C             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Wdg header file are of the same vendor */
#if (WDG_VENDOR_ID_CFG_C != WDG_CHANNEL_VENDOR_ID)
    #error "Wdg_Cfg.c and Wdg_Channel.h have different vendor ids"
#endif

/* Check if current file and Wdg header file are of the same Autosar version */
#if ((WDG_AR_RELEASE_MAJOR_VERSION_CFG_C    != WDG_CHANNEL_AR_RELEASE_MAJOR_VERSION) || \
     (WDG_AR_RELEASE_MINOR_VERSION_CFG_C    != WDG_CHANNEL_AR_RELEASE_MINOR_VERSION) || \
     (WDG_AR_RELEASE_REVISION_VERSION_CFG_C != WDG_CHANNEL_AR_RELEASE_REVISION_VERSION))
     #error "AutoSar Version Numbers of Wdg_Cfg.c and Wdg_Channel.h are different"
#endif
/* Check if current file and Wdg header file are of the same Software version */
#if ((WDG_SW_MAJOR_VERSION_CFG_C != WDG_CHANNEL_SW_MAJOR_VERSION) || \
     (WDG_SW_MINOR_VERSION_CFG_C != WDG_CHANNEL_SW_MINOR_VERSION) || \
     (WDG_SW_PATCH_VERSION_CFG_C != WDG_CHANNEL_SW_PATCH_VERSION))
    #error "Software Version Numbers of Wdg_Cfg.c and Wdg_Channel.h are different"
#endif

#if (WDG_TYPE == WDG_INTERNAL_MODULE)
    /* Check if current file and Reg_eSys_Swt header file are of the same vendor */
    #if (WDG_VENDOR_ID_CFG_C != REG_ESYS_SWT_DEFINES_VENDOR_ID)
        #error "Wdg_Cfg.c and Reg_eSys_Swt_defines.h have different vendor ids"
    #endif
    
    /* Check if current file and Reg_eSys_Swt header file are of the same Autosar version */
    #if ((WDG_AR_RELEASE_MAJOR_VERSION_CFG_C != REG_ESYS_SWT_DEFINES_AR_RELEASE_MAJOR_VERSION) || \
         (WDG_AR_RELEASE_MINOR_VERSION_CFG_C != REG_ESYS_SWT_DEFINES_AR_RELEASE_MINOR_VERSION) || \
         (WDG_AR_RELEASE_REVISION_VERSION_CFG_C != REG_ESYS_SWT_DEFINES_AR_RELEASE_REVISION_VERSION))
        #error "AutoSar Version Numbers of Wdg_Cfg.c and Reg_eSys_Swt_defines.h are different"
    #endif
    
    /* Check if current file and Reg_eSys_Swt header file are of the same Software version */
    #if ((WDG_SW_MAJOR_VERSION_CFG_C != REG_ESYS_SWT_DEFINES_SW_MAJOR_VERSION) || \
         (WDG_SW_MINOR_VERSION_CFG_C != REG_ESYS_SWT_DEFINES_SW_MINOR_VERSION) || \
         (WDG_SW_PATCH_VERSION_CFG_C != REG_ESYS_SWT_DEFINES_SW_PATCH_VERSION))
        #error "Software Version Numbers of Wdg_Cfg.c and Reg_eSys_Swt_defines.h are different"
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
*                                       GLOBAL CONSTANTS
==================================================================================================*/
#define WDG_START_SEC_CONST_8
/**
* @brief Include Memory mapping specification
* @violates @ref Wdg_Cfg_c_REF_1 MISRA 2004 Advisory Rule 19.1 , only preprocessor statements
*                and comments before '#include'
* @violates @ref Wdg_Cfg_c_REF_2 MISRA 2004 Required Rule 19.15 precautions to prevent the contents
*                of a header file being included twice
*/
#include "Wdg_MemMap.h"

/** @violates @ref Wdg_Cfg_c_REF_4 MISRA 2004 Required Rule 8.10 External Linkage */
CONST(uint8, WDG_CONST) Wdg_au8Index[WDG_NO_OF_INSTANCES] = 
{
    WdgConf_WdgGeneral_WdgIndex_U8,
    WdgConf_WdgGeneral_WdgIndex1_U8,
    WdgConf_WdgGeneral_WdgIndex2_U8
};

#define WDG_STOP_SEC_CONST_8
/**
* @brief Include Memory mapping specification
* @violates @ref Wdg_Cfg_c_REF_1 MISRA 2004 Advisory Rule 19.1 , only preprocessor statements
*                and comments before '#include'
* @violates @ref Wdg_Cfg_c_REF_2 MISRA 2004 Required Rule 19.15 precautions to prevent the contents
*                of a header file being included twice
*/
#include "Wdg_MemMap.h"

#define WDG_START_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @brief Include Memory mapping specification
* @violates @ref Wdg_Cfg_c_REF_1 MISRA 2004 Advisory Rule 19.1 , only preprocessor statements
*                and comments before '#include'
* @brief Include Memory mapping specification
* @violates @ref Wdg_Cfg_c_REF_2 MISRA 2004 Required Rule 19.15 precautions to prevent the contents
*                of a header file being included twice
*/
#include "Wdg_MemMap.h"




extern CONST(Wdg_ConfigType, WDG_CONST) WdgSettingsConfig_0;


CONSTP2CONST(Wdg_ConfigType, WDG_VAR, WDG_APPL_CONST) Wdg_apPBCfgVariantPredefined[WDG_NO_OF_INSTANCES]={


&WdgSettingsConfig_0,
NULL_PTR,
NULL_PTR
};



 #define WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @brief Include Memory mapping specification
* @violates @ref Wdg_Cfg_c_REF_1 MISRA 2004 Required Rule 19.1 , only preprocessor statements
*                and comments before '#include'
* @violates @ref Wdg_Cfg_c_REF_2 MISRA 2004 Required Rule 19.15 precautions to prevent the contents
*                of a header file being included twice
*/
#include "Wdg_MemMap.h"

#define WDG_START_SEC_CONST_UNSPECIFIED
/**
* @brief Include Memory mapping specification
* @violates @ref Wdg_Cfg_c_REF_1 MISRA 2004 Required Rule 19.1 , only preprocessor statements
*                and comments before '#include'
* @violates @ref Wdg_Cfg_c_REF_2 MISRA 2004 Required Rule 19.15 precautions to prevent the contents
*                of a header file being included twice
*/
#include "Wdg_MemMap.h"

/** @violates @ref Wdg_Cfg_c_REF_4 MISRA 2004 Required Rule 8.10 External Linkage */
CONST(Mcal_DemErrorType, WDG_CONST) Wdg_E_Disable_Rejected = 
{
    (uint32)STD_ON,
    (uint16)DemConf_DemEventParameter_AutoCreatedDemEvent_WDG_E_DISABLE_REJECTED
};

/** @violates @ref Wdg_Cfg_c_REF_4 MISRA 2004 Required Rule 8.10 External Linkage */
CONST(Mcal_DemErrorType, WDG_CONST) Wdg_E_Mode_Failed = 
{
    (uint32)STD_ON,
    (uint16)DemConf_DemEventParameter_AutoCreatedDemEvent_WDG_E_MODE_FAILED
};

/** @violates @ref Wdg_Cfg_c_REF_4 MISRA 2004 Required Rule 8.10 External Linkage */
CONST(Mcal_DemErrorType, WDG_CONST) Wdg_E_Corrupt_Config = 
{
    (uint32)STD_ON,
    (uint16)DemConf_DemEventParameter_AutoCreatedDemEvent_WDG_E_CORRUPT_CONFIG
};

/** @violates @ref Wdg_Cfg_c_REF_4 MISRA 2004 Required Rule 8.10 External Linkage */
CONST(Mcal_DemErrorType, WDG_CONST) Wdg_E_Forbidden_Invocation = 
{
    (uint32)STD_ON,
    (uint16)DemConf_DemEventParameter_AutoCreatedDemEvent_WDG_E_FORBIDDEN_INVOCATION
};

/** @violates @ref Wdg_Cfg_c_REF_4 MISRA 2004 Required Rule 8.10 External Linkage */
CONST(Mcal_DemErrorType, WDG_CONST) Wdg_E_Invalid_Call = 
{
    (uint32)STD_ON,
    (uint16)DemConf_DemEventParameter_AutoCreatedDemEvent_WDG_E_INVALID_CALL
};

/** @violates @ref Wdg_Cfg_c_REF_4 MISRA 2004 Required Rule 8.10 External Linkage */
CONST(Mcal_DemErrorType, WDG_CONST) WDG_E_Unlocked = 
{
    (uint32)STD_ON,
    (uint16)DemConf_DemEventParameter_AutoCreatedDemEvent_WDG_E_UNLOCKED
};

/** @violates @ref Wdg_Cfg_c_REF_4 MISRA 2004 Required Rule 8.10 External Linkage */
CONST(Mcal_DemErrorType, WDG_CONST) Wdg_E_Invalid_Parameter = 
{
    (uint32)STD_ON,
    (uint16)DemConf_DemEventParameter_AutoCreatedDemEvent_WDG_E_INVALID_PARAMETER
};

#define WDG_STOP_SEC_CONST_UNSPECIFIED
/**
* @brief Include Memory mapping specification
* @violates @ref Wdg_Cfg_c_REF_1 MISRA 2004 Required Rule 19.1 , only preprocessor statements
*                and comments before '#include'
* @violates @ref Wdg_Cfg_c_REF_2 MISRA 2004 Required Rule 19.15 precautions to prevent the contents
*                of a header file being included twice
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

/*==================================================================================================
*                                     GLOBAL FUNCTIONS
==================================================================================================*/
#ifdef __cplusplus
}
#endif

/** @} */
