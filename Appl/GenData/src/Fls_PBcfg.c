/**
*   @file    Fls_PBcfg.c
*   @implements Fls_PBcfg.c_Artifact
*   @version 1.0.0
*
*   @brief   AUTOSAR Fls - AUTOSAR Module Flash Driver.
*   @details Definitions of all post-build configuration structures.
*
*   @addtogroup FLS
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.2 MCAL
*   Platform             : PA
*   Peripheral           : IPV_FLASHV2
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
* @section fls_pbcfg_c_REF_1
* Violates MISRA 2004 Advisory Rule 19.1, Only preprocessor statements and comments before 
* '#include'
* Because of Autosar requirement MEMMAP003 of memory mapping.
* 
* @section fls_pbcfg_c_REF_2
* Violates MISRA 2004 Required Rule 11.1, Conversions involing function pointers must be to/from integral types.
* This violation is due to FLS213.
* 
* @section fls_pbcfg_c_REF_3
* Violates MISRA 2004 Advisory Rule 11.4, Cast from pointer to pointer.
* This violation is due to FLS213.
* 
* @section fls_pbcfg_c_REF_4
* Violates MISRA 2004 Required Rule 8.8, Object/function previously declared.
* The rule 8.8 requires that 'An external object or function shall be declared in one and only one file'.
* This requirement is fulfilled since the function is declared as external in and only in one configuration 
* C file (Fls_Cfg.c or Fls_PBcfg.c). There is no need to put the declaration into Fls_Cfg.h and made it 
* accessible for all modules which includes Fls.h/Fls_Cfg.h.
* 
* @section fls_pbcfg_c_REF_5
* Violates MISRA 2004 Required Rule 8.10, Could be made static.  
* Making FlsConfigSet_0 static would make it unaccessible to the application.
*
* @section fls_pbcfg_c_REF_6
* Violates MISRA 2004 Required Rule 20.2, Re-use of C90 identifier pattern.
* This is just a matter of a symbol specified in the configuration.
* 
* @section fls_pbcfg_c_REF_7
* Violates MISRA 2004 Required Rule 8.8,
* An external object or function shall be declared in one and only one file.
* Possible MISRA error if the same callback function or variable name is used in multiple configuration variants. 
* Callback function/variable name is set by the driver user so this cannot be fixed by updating the driver code.*
*
* @section fls_pbcfg_c_REF_8
* Violates MISRA 2004 Advisory Rule 11.3, A cast should not be performed between a pointer type and
* an integral type.
* This violation is due to FLS213.
* 
* @section [global]
* Violates MISRA 2004 Required Rule 5.1,
* Identifiers (internal and external) shall not rely on the significance of more than 31 characters. 
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure that
* 31 character significance and case sensitivity are supported for external identifiers
* This violation is due to the requirement that requests to have a file version check.
*
* @section [global]
* Violates MISRA 2004 Required Rule 19.15, Repeated include files, Precautions shall be taken in
* order to prevent the contents of a header file being included twice This is not a violation since
* all header files are protected against multiple inclusions
*  
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Fls.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLS_VENDOR_ID_CFG_C                      43
#define FLS_AR_RELEASE_MAJOR_VERSION_CFG_C       4
#define FLS_AR_RELEASE_MINOR_VERSION_CFG_C       2
#define FLS_AR_RELEASE_REVISION_VERSION_CFG_C    2
#define FLS_SW_MAJOR_VERSION_CFG_C               1
#define FLS_SW_MINOR_VERSION_CFG_C               0
#define FLS_SW_PATCH_VERSION_CFG_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Fls header file are of the same vendor */
#if (FLS_VENDOR_ID_CFG_C != FLS_VENDOR_ID)
    #error "Fls_PBcfg.c and Fls.h have different vendor ids"
#endif
/* Check if current file and Fls header file are of the same Autosar version */
#if ((FLS_AR_RELEASE_MAJOR_VERSION_CFG_C    != FLS_AR_RELEASE_MAJOR_VERSION) || \
     (FLS_AR_RELEASE_MINOR_VERSION_CFG_C    != FLS_AR_RELEASE_MINOR_VERSION) || \
     (FLS_AR_RELEASE_REVISION_VERSION_CFG_C != FLS_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Fls_PBcfg.c and Fls.h are different"
#endif
/* Check if current file and Fls header file are of the same Software version */
#if ((FLS_SW_MAJOR_VERSION_CFG_C != FLS_SW_MAJOR_VERSION) || \
     (FLS_SW_MINOR_VERSION_CFG_C != FLS_SW_MINOR_VERSION) || \
     (FLS_SW_PATCH_VERSION_CFG_C != FLS_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Fls_PBcfg.c and Fls.h are different"
#endif


/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
    

#define FLS_START_SEC_CODE
/* 
* @violates @ref fls_pbcfg_c_REF_1 Only preprocessor statements
* and comments before '#include'
*/
#include "Fls_MemMap.h"


/* Declaration of Fls notification function (Fee_JobEndNotification())*/
/*
* @violates @ref fls_pbcfg_c_REF_7 An external object or function shall be declared in one and only one file.
*/
extern FUNC( void, FLS_CODE ) Fee_JobEndNotification( void );


/* Declaration of Fls notification function (Fee_JobErrorNotification())*/
/*
* @violates @ref fls_pbcfg_c_REF_7 An external object or function shall be declared in one and only one file.
*/
extern FUNC( void, FLS_CODE ) Fee_JobErrorNotification( void );

#define FLS_STOP_SEC_CODE
/* 
* @violates @ref fls_pbcfg_c_REF_1 Only preprocessor statements
* and comments before '#include'
*/
#include "Fls_MemMap.h"
#define FLS_START_SEC_CODE_AC
/* 
* @violates @ref fls_pbcfg_c_REF_1 Only preprocessor statements
* and comments before '#include'
*/
#include "Fls_MemMap.h"

#ifdef _LINARO_C_MPC574XG_ 
#if (FLS_HW_OPERATION_ABORT_SUPPORTED == STD_ON)
#if (FLS_TIMEOUT_HANDLING == STD_ON)
/* @violates @ref fls_pbcfg_c_REF_4 Object/function previously declared */
extern void Fls_Flash_AccessCode( CONST(uint32, AUTOMATIC) u32RegBaseAddr, P2FUNC(void, FLS_CODE, CallBack)( void ), P2VAR(uint32, AUTOMATIC, FLS_CODE) pTimerCounterAC, P2VAR(uint32, AUTOMATIC, FLS_CODE) pTimerCounterAbort ) __attribute__ ((section (".acfls_code_rom")));
#else
/* @violates @ref fls_pbcfg_c_REF_4 Object/function previously declared */
extern void Fls_Flash_AccessCode( CONST(uint32, AUTOMATIC) u32RegBaseAddr, P2FUNC(void, FLS_CODE, CallBack)( void ) ) __attribute__ ((section (".acfls_code_rom")));
#endif /* FLS_TIMEOUT_HANDLING == STD_ON */
#else   /* FLS_HW_OPERATION_ABORT_SUPPORTED == STD_OFF */
#if (FLS_TIMEOUT_HANDLING == STD_ON)
/* @violates @ref fls_pbcfg_c_REF_4 Object/function previously declared */
extern void Fls_Flash_AccessCode( CONST(uint32, AUTOMATIC) u32RegBaseAddr, P2FUNC(void, FLS_CODE, CallBack)( void ), P2VAR(uint32, AUTOMATIC, FLS_CODE) pTimerCounterAC ) __attribute__ ((section (".acfls_code_rom")));
#else
/* @violates @ref fls_pbcfg_c_REF_4 Object/function previously declared */
extern void Fls_Flash_AccessCode( CONST(uint32, AUTOMATIC) u32RegBaseAddr, P2FUNC(void, FLS_CODE, CallBack)( void ) ) __attribute__ ((section (".acfls_code_rom")));
#endif /* FLS_TIMEOUT_HANDLING == STD_ON */
#endif  /* FLS_HW_OPERATION_ABORT_SUPPORTED == STD_ON */
#else
#if (FLS_HW_OPERATION_ABORT_SUPPORTED == STD_ON)
#if (FLS_TIMEOUT_HANDLING == STD_ON)
/* @violates @ref fls_pbcfg_c_REF_4 Object/function previously declared */
extern void Fls_Flash_AccessCode(CONST(uint32, AUTOMATIC) u32RegBaseAddr, P2FUNC(void, FLS_CODE, CallBack)( void ), P2VAR(uint32, AUTOMATIC, FLS_CODE) pTimerCounterAC, P2VAR(uint32, AUTOMATIC, FLS_CODE) pTimerCounterAbort );
#else
/* @violates @ref fls_pbcfg_c_REF_4 Object/function previously declared */
extern void Fls_Flash_AccessCode( CONST(uint32, AUTOMATIC) u32RegBaseAddr, P2FUNC(void, FLS_CODE, CallBack)( void ) );
#endif /* FLS_TIMEOUT_HANDLING == STD_ON */
#else   /* FLS_HW_OPERATION_ABORT_SUPPORTED == STD_OFF */
#if (FLS_TIMEOUT_HANDLING == STD_ON)
/* @violates @ref fls_pbcfg_c_REF_4 Object/function previously declared */
extern void Fls_Flash_AccessCode(CONST(uint32, AUTOMATIC) u32RegBaseAddr, P2FUNC(void, FLS_CODE, CallBack)( void ), P2VAR(uint32, AUTOMATIC, FLS_CODE) pTimerCounterAC );
#else
/* @violates @ref fls_pbcfg_c_REF_4 Object/function previously declared */
extern void Fls_Flash_AccessCode( CONST(uint32, AUTOMATIC) u32RegBaseAddr, P2FUNC(void, FLS_CODE, CallBack)( void ) );
#endif /* FLS_TIMEOUT_HANDLING == STD_ON */
#endif  /* FLS_HW_OPERATION_ABORT_SUPPORTED == STD_ON */
#endif /* #ifdef _LINARO_C_MPC574XG_ */

#define FLS_STOP_SEC_CODE_AC
/* 
* @violates @ref fls_pbcfg_c_REF_1 Only preprocessor statements
* and comments before '#include'
*/
#include "Fls_MemMap.h"

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/


                                        
                        



#define FLS_START_SEC_CONFIG_DATA_8
/* 
* @violates @ref fls_pbcfg_c_REF_1 Only preprocessor statements
* and comments before '#include'
*/
#include "Fls_MemMap.h"
/* aFlsSectorFlags[] (FlsConfigSet) */
static CONST(uint8, FLS_CONST) FlsConfigSet_aFlsSectorFlags[2] =
{
    0U, /* (FlsSector_000) */
    0U /* (FlsSector_001) */
};
/* aFlsSectorUnlock[] (FlsConfigSet) */
static CONST(uint8, FLS_CONST) FlsConfigSet_aFlsSectorUnlock[2] =
{
    1U, /* (FlsSector_000) */
    1U /* (FlsSector_001) */
};
#define FLS_STOP_SEC_CONFIG_DATA_8
/* 
* @violates @ref fls_pbcfg_c_REF_1 Only preprocessor statements
* and comments before '#include'
*/
#include "Fls_MemMap.h"

#define FLS_START_SEC_CONFIG_DATA_UNSPECIFIED
/* 
* @violates @ref fls_pbcfg_c_REF_1 Only preprocessor statements
* and comments before '#include'
*/
#include "Fls_MemMap.h"
/* aFlsSectorEndAddr[] (FlsConfigSet) */
static CONST(Fls_AddressType, FLS_CONST) FlsConfigSet_aFlsSectorEndAddr[2] =
{
    16383U, /* FlsSectorEndAddr (FlsSector_000)*/
    32767U /* FlsSectorEndAddr (FlsSector_001)*/
};
/* aFlsProgrammingSize[] (FlsConfigSet) */
static CONST(Fls_LengthType, FLS_CONST) FlsConfigSet_aFlsProgSize[2] =
{
    (Fls_LengthType)FLS_WRITE_DOUBLE_WORD, /* FlsProgrammingSize (FlsSector_000) */
    (Fls_LengthType)FLS_WRITE_DOUBLE_WORD /* FlsProgrammingSize (FlsSector_001) */
};
/* aFlsPhysicalSector[] (FlsConfigSet) */
static CONST(Fls_Flash_PhysicalSectorType, FLS_CONST) FlsConfigSet_aFlsPhysicalSector[2] =
{
    FLS_DATA_ARRAY_0_PART_4_HSM00, /* FlsPhysicalSector (FlsSector_000) */
    FLS_DATA_ARRAY_0_PART_5_HSM01 /* FlsPhysicalSector (FlsSector_001) */
};
/**
* @brief        Structure used to set function pointers notification, working mode
*/
/* Fls module initialization data (FlsConfigSet)*/
/* @violates @ref fls_pbcfg_c_REF_5 Could be made static */

CONST(Fls_ConfigType, FLS_CONST) FlsConfigSet =
{
    /* @violates @ref fls_pbcfg_c_REF_2 Conversions involing function pointers must be to/from integral types */
    /* @violates @ref fls_pbcfg_c_REF_3 Cast from pointer to pointer */
    /* @violates @ref fls_pbcfg_c_REF_8 A cast should not be performed between a pointer type and an integral type.*/
    (Fls_Flash_AcErasePtrType)&Fls_Flash_AccessCode, /* FlsAcErase */
    /* @violates @ref fls_pbcfg_c_REF_2 Conversions involing function pointers must be to/from integral types */
    /* @violates @ref fls_pbcfg_c_REF_3 Cast from pointer to pointer */
    /* @violates @ref fls_pbcfg_c_REF_8 A cast should not be performed between a pointer type and an integral type.*/
    (Fls_Flash_AcWritePtrType)&Fls_Flash_AccessCode, /* FlsAcWrite */
    NULL_PTR, /* FlsACCallback */  
    &Fee_JobEndNotification, /* FlsJobEndNotification */
    &Fee_JobErrorNotification, /* FlsJobErrorNotification */  
    NULL_PTR, /* FlsStartFlashAccessNotif */
    NULL_PTR, /* FlsFinishedFlashAccessNotif */
    MEMIF_MODE_SLOW, /* FlsDefaultMode */
    1048576U, /* FlsMaxReadFastMode */
    1024U, /* FlsMaxReadNormalMode */
    256U, /* FlsMaxWriteFastMode */
    8U, /* FlsMaxWriteNormalMode */
    2U, /* FlsSectorCount */
    &FlsConfigSet_aFlsSectorEndAddr, /* aFlsSectorEndAddr[]  */
    &FlsConfigSet_aFlsPhysicalSector, /* aFlsPhysicalSector[] */
    &FlsConfigSet_aFlsSectorFlags, /* aFlsSectorFlags[] */
    &FlsConfigSet_aFlsProgSize, /* aFlsProgSize[] */
    &FlsConfigSet_aFlsSectorUnlock, /* aFlsSectorUnlock[] */
            20590U /* configCrc */
};
#define FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* 
* @violates @ref fls_pbcfg_c_REF_1 Only preprocessor statements
* and comments before '#include'
*/
#include "Fls_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @}*/
