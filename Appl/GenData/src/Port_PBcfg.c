/**
* @file    Port_PBcfg.c
* @implements Port_PBcfg.c_Artifact
*
* @version 1.0.0
* @brief   AUTOSAR Port - PORT driver configuration.
* @details This file contains the PORT driver postbuild configuration.
*
* @addtogroup  Port
* @{
*/
/*=================================================================================================
*   Project              : AUTOSAR 4.2 MCAL
*   Platform             : PA
*   Peripheral           : SIUL2
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
=================================================================================================*/
/*=================================================================================================
=================================================================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section PORT_PBCFG_REF_1
* Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments before #include'. 
* Port_MemMap.h.h is included after each section define in order to set the current memory section as defined by AUTOSAR.
*
* @section PORT_PBCFG_REF_2
* Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to prevent the
* contents of a header being included twice.
* This violation is not fixed since the inclusion of Port_MemMap.h.h is as per Autosar requirement MEMMAP003.
*
* @section PORT_PBCFG_REF_3
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure that 31
* character significance and case sensitivity are supported for external identifiers. 
* The used compilers/linkers allow more than 31 characters significance for external identifiers.
*
* @section PORT_PBCFG_REF_4
* Violates MISRA 2004 Required Rule 8.10, All declarations and definitions of objects or 
* functions at file scope shall have internal linkage unless external linkage is required. 
* This warning appears when defining functions or objects that will be used by the upper layers.
*
* @section [global]
* Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely 
* on the significance of more than 31 characters. The used compilers use more than 31 chars for
* identifiers.
*/

/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/

#include "Port.h"


/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/
/**
* @brief Parameters that shall be published within the Port driver header file and also in the
*        module's description file
* @details The integration of incompatible files shall be avoided.
*
*/
#define PORT_VENDOR_ID_PBCFG_C                       43
/*
* @violates @ref PORT_PBCFG_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define PORT_AR_RELEASE_MAJOR_VERSION_PBCFG_C        4
/*
* @violates @ref PORT_PBCFG_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define PORT_AR_RELEASE_MINOR_VERSION_PBCFG_C        2

/** @violates @ref PORT_PBCFG_REF_3 MISRA 2004 Rule 1.4, The compiler/linker shall be checked to
*   ensure that 31 character significance and case sensitivity are supported for external
*   identifiers.
*/
#define PORT_AR_RELEASE_REVISION_VERSION_PBCFG_C     2
#define PORT_SW_MAJOR_VERSION_PBCFG_C                1
#define PORT_SW_MINOR_VERSION_PBCFG_C                0
#define PORT_SW_PATCH_VERSION_PBCFG_C                0

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/

/* Check if Port_PBcfg.c and Port.h are of the same vendor */
#if (PORT_VENDOR_ID_PBCFG_C != PORT_VENDOR_ID)
    #error "Port_PBcfg.c and Port.h have different vendor ids"
#endif
/* Check if Port_PBcfg.c and Port.h are of the same Autosar version */
#if ((PORT_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != PORT_AR_RELEASE_MAJOR_VERSION) || \
     (PORT_AR_RELEASE_MINOR_VERSION_PBCFG_C    != PORT_AR_RELEASE_MINOR_VERSION) || \
     (PORT_AR_RELEASE_REVISION_VERSION_PBCFG_C != PORT_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Port_PBcfg.c and Port.h are different"
#endif

/* Check if Port_PBcfg.c and Port.h are of the same software version */
#if ((PORT_SW_MAJOR_VERSION_PBCFG_C != PORT_SW_MAJOR_VERSION) || \
     (PORT_SW_MINOR_VERSION_PBCFG_C != PORT_SW_MINOR_VERSION) || \
     (PORT_SW_PATCH_VERSION_PBCFG_C != PORT_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of Port_PBcfg.c and Port.h are different"
#endif

/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/
#if (PORT_MAX_UNUSED_PADS_U16 != 0U)

#define PORT_START_SEC_CONFIG_DATA_16

/* @violates @ref PORT_PBCFG_REF_1 only preprocessor statements and comments before '#include' */
/* @violates @ref PORT_PBCFG_REF_2 Repeated include file MemMap.h */
#include "Port_MemMap.h"

/**
* @brief NoDefaultPadsArray is an array containing Unimplemented pads and User pads
* @violates @ref PORT_PBCFG_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
static CONST(uint16, PORT_CONST) Port_au16NoUnUsedPadsArrayDefault[PORT_MAX_UNUSED_PADS_U16]=
{
    (uint16)0,
    (uint16)1,
    (uint16)3,
    (uint16)4,
    (uint16)10,
    (uint16)11,
    (uint16)23,
    (uint16)27,
    (uint16)30,
    (uint16)31,
    (uint16)40,
    (uint16)45,
    (uint16)54,
    (uint16)57,
    (uint16)59,
    (uint16)62,
    (uint16)63,
    (uint16)64,
    (uint16)68,
    (uint16)71,
    (uint16)75,
    (uint16)78,
    (uint16)92,
    (uint16)93,
    (uint16)97,
    (uint16)109,
    (uint16)119,
    (uint16)120,
    (uint16)121,
    (uint16)122,
    (uint16)134,
    (uint16)137,
    (uint16)138
};

#define PORT_STOP_SEC_CONFIG_DATA_16

/* @violates @ref PORT_PBCFG_REF_1 only preprocessor statements and comments before '#include' */
/* @violates @ref PORT_PBCFG_REF_2 Repeated include file MemMap.h */
#include "Port_MemMap.h"

#endif /* (PORT_MAX_UNUSED_PADS_U16 != 0) */


#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED

/* @violates @ref PORT_PBCFG_REF_1 only preprocessor statements and comments before '#include' */
/* @violates @ref PORT_PBCFG_REF_2 Repeated include file MemMap.h */
#include "Port_MemMap.h"

/**
 * @brief Default Configuration for Pins not initialized
 */
static CONST(Port_Siul2_UnUsedPinConfigType, PORT_CONST) Port_UnUsedPin =
{
    /**
    * @note: Configuration of Default pin
    */
    (uint32)0x00080000, (uint8)0
    
};

/**
* @brief Pin default configuration data for configPB
*/
static CONST(Port_Siul2_PinConfigType, PORT_CONST) Port_aPinConfigDefault[PORT_MAX_CONFIGURED_PADS_U16]=
{
    {(Port_InternalPinIdType)2, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)100, (uint32)0x00000003, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)5, (uint32)0x02000000, (uint8)1, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)6, (uint32)0x02000000, (uint8)1, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)7, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)8, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)9, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)102, (uint32)0x00000002, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)49, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)12, (uint32)0x02000000, (uint8)1, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)13, (uint32)0x00000002, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)14, (uint32)0x02000000, (uint8)1, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)15, (uint32)0x02000000, (uint8)1, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)16, (uint32)0x00000001, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)17, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)128, (uint32)0x00000002, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)19, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)20, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)21, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)22, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)18, (uint32)0x00000001, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)24, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)25, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)26, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)28, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)29, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)107, (uint32)0x00000003, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)103, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)32, (uint32)0x00080001, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)33, (uint32)0x00000001, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)34, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)35, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)36, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)37, (uint32)0x00000002, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)38, (uint32)0x00000001, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)39, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)41, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)42, (uint32)0x00000001, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)43, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)44, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)46, (uint32)0x00000005, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)47, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)48, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)148, (uint32)0x02000000, (uint8)1, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)50, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)51, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)52, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)53, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)55, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)56, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)58, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)60, (uint32)0x00000002, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)61, (uint32)0x00000002, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)146, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)110, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)65, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)66, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)67, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)145, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)69, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)70, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)72, (uint32)0x00000001, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)73, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)74, (uint32)0x02000000, (uint8)1, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)76, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)77, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)90, (uint32)0x00000002, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)79, (uint32)0x00000003, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)80, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)81, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)82, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)83, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)84, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)85, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)86, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)87, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)88, (uint32)0x02000000, (uint8)1, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)89, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)125, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)91, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)143, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)142, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)94, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)95, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)96, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)144, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)98, (uint32)0x00000003, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)104, (uint32)0x00000002, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)105, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)106, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)108, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)147, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)141, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)111, (uint32)0x00000002, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)112, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)113, (uint32)0x00000002, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)114, (uint32)0x00000002, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)115, (uint32)0x00000002, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)116, (uint32)0x00000001, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)117, (uint32)0x00000001, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)118, (uint32)0x00000001, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)123, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)124, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)101, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)126, (uint32)0x02000000, (uint8)1, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)127, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)129, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)131, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)130, (uint32)0x00000002, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    {(Port_InternalPinIdType)132, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)133, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)135, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)136, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)139, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)140, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    {(Port_InternalPinIdType)99, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE}
};

/**
* @brief Pad selection default configuration for configPB
* @violates @ref PORT_PBCFG_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
static CONST(Port_Siul2_PadSelConfigType, PORT_CONST) Port_aPadSelConfigDefault[PORT_NMBR_INMUX_REGS_U16]=
{
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000002,
    (uint32)0x00000003,
    (uint32)0x00000001,
    (uint32)0x00000002,
    (uint32)0x00000007,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000001,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000002,
    (uint32)0x00000001,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000002,
    (uint32)0x00000000,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000002,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000004,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000001,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000
    ,(uint32)0x00000000
};

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @violates @ref PORT_PBCFG_REF_1 only preprocessor statements and comments before '#include'
* @violates @ref PORT_PBCFG_REF_2 Repeated include file MemMap.h
*/
#include "Port_MemMap.h"

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/
#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @violates @ref PORT_PBCFG_REF_1 only preprocessor statements and comments before '#include'
* @violates @ref PORT_PBCFG_REF_2 Repeated include file MemMap.h
*/
#include "Port_MemMap.h"

/**
* @brief This table contains all the Configured Port Pin parameters and the
*        number of Port Pins configured by the tool for the post-build mode
* @violates @ref PORT_PBCFG_REF_4 Violates MISRA 2004 Required Rule 8.10
*/

CONST(Port_ConfigType, PORT_CONST) PortConfigSet =

{
    PORT_MAX_CONFIGURED_PADS_U16,
    PORT_MAX_UNUSED_PADS_U16,
#if (PORT_MAX_UNUSED_PADS_U16 != 0U)
    Port_au16NoUnUsedPadsArrayDefault,
#else
    NULL_PTR,
#endif
    &Port_UnUsedPin,
    Port_aPinConfigDefault,
    Port_aPadSelConfigDefault
};

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @violates @ref PORT_PBCFG_REF_1 only preprocessor statements and comments before '#include'
* @violates @ref PORT_PBCFG_REF_2 Repeated include file MemMap.h
*/
#include "Port_MemMap.h"

/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/


/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/

#ifdef __cplusplus
}
#endif
/** @} */

/* End of File */
