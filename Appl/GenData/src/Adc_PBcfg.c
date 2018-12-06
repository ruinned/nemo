/**
*   @file    Adc_PBcfg.c
*   @version 1.0.0
*
*   @brief   AUTOSAR Adc - Post Build configuration Adc source file.
*   @details Post Build configuration file for Adc driver.
*
*   @addtogroup ADC
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.2 MCAL
*   Platform             : PA
*   Peripheral           : ADCDIG
*   Dependencies         : none
*
*   Autosar Version      : 4.2.2
*   Autosar Revision     : ASR_REL_4_2_REV_0002
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : MPC574XG_MCAL_1_0_0_RTM_HF4_ASR_REL_4_2_REV_0002_20180314
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
* @section Adc_PBcfg_c_REF_1
* Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments before '#include'
* This is an Autosar memory management requirement.
*
* @section Adc_PBcfg_c_REF_2
* Violates MISRA 2004 Required Rule 19.15, Repeated include file MemMap.h.
* This violation  is not  fixed since  the inclusion  of MemMap.h
* is as  per Autosar  requirement MEMMAP003.
*
* @section Adc_PBcfg_c_REF_3
* Violates MISRA 2004 Required Rule 1.4,
* The compiler/linker shall be checked to ensure that 31 character signifiance and case
* sensitivity are supported for external identifiers.
* This violation is due to the requirement that requests to have a file version check.
*
* @section Adc_PBcfg_c_REF_4
* Violates MISRA 2004 Required Rule 19.15, Repeated include file.
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions.
*
* @section Adc_PBcfg_c_REF_5
* Violates MISRA 2004 Required Rule 8.10, all declarations and definitions of objects or functions
* at file scope shall have internal linkage unless external linkage is required.
* This violation is due to Autosar files and structures definitions.
*
* @section Adc_PBcfg_c_REF_6
* Violates MISRA 2004 Required Rule 8.8, An external object or function shall be declared
* in one and only one file.
* These notifications are declared as external in each variant configuration file.
* 
* @section [global]
* Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely
* on the significance of more than 31 characters. All compilers used support more than 31 chars for
* identifiers.
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Adc.h"
/**  @violates @ref Adc_PBcfg_c_REF_4 Repeated include file */
#include "Adc_Reg_eSys_Adcdig.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define ADC_VENDOR_ID_PBCFG_C                    43
/**
* @violates @ref Adc_PBcfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers
*/
#define ADC_AR_RELEASE_MAJOR_VERSION_PBCFG_C     4
/**
* @violates @ref Adc_PBcfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers
*/
#define ADC_AR_RELEASE_MINOR_VERSION_PBCFG_C     2
/**
* @violates @ref Adc_PBcfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers
*/
#define ADC_AR_RELEASE_REVISION_VERSION_PBCFG_C  2
#define ADC_SW_MAJOR_VERSION_PBCFG_C             1
#define ADC_SW_MINOR_VERSION_PBCFG_C             0
#define ADC_SW_PATCH_VERSION_PBCFG_C             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and ADC header file are of the same vendor */
#if (ADC_VENDOR_ID_PBCFG_C != ADC_VENDOR_ID)
    #error "Adc_PBcfg.c and Adc.h have different vendor ids"
#endif

/* Check if source file and ADC header file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_PBCFG_C != ADC_AR_RELEASE_MAJOR_VERSION) || \
     (ADC_AR_RELEASE_MINOR_VERSION_PBCFG_C != ADC_AR_RELEASE_MINOR_VERSION) || \
     (ADC_AR_RELEASE_REVISION_VERSION_PBCFG_C != ADC_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Adc_PBcfg.c and Adc.h are different"
#endif

/* Check if source file and ADC header file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_PBCFG_C != ADC_SW_MAJOR_VERSION) || \
     (ADC_SW_MINOR_VERSION_PBCFG_C != ADC_SW_MINOR_VERSION) || \
     (ADC_SW_PATCH_VERSION_PBCFG_C != ADC_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Adc_PBcfg.c and Adc.h are different"
#endif

/* Check if source file and Adc_Reg_eSys_Adcdig header file are of the same vendor */
#if (ADC_VENDOR_ID_PBCFG_C != ADC_VENDOR_ID_REG)
    #error "Adc_PBcfg.c and Adc_Reg_eSys_Adcdig.h have different vendor ids"
#endif

/* Check if source file and Adc_Reg_eSys_Adcdig header file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_PBCFG_C != ADC_AR_RELEASE_MAJOR_VERSION_REG) || \
     (ADC_AR_RELEASE_MINOR_VERSION_PBCFG_C != ADC_AR_RELEASE_MINOR_VERSION_REG) || \
     (ADC_AR_RELEASE_REVISION_VERSION_PBCFG_C != ADC_AR_RELEASE_REVISION_VERSION_REG) \
    )
    #error "AutoSar Version Numbers of Adc_PBcfg.c and Adc_Reg_eSys_Adcdig.h are different"
#endif

/* Check if source file and Adc_Reg_eSys_Adcdig header file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_PBCFG_C != ADC_SW_MAJOR_VERSION_REG) || \
     (ADC_SW_MINOR_VERSION_PBCFG_C != ADC_SW_MINOR_VERSION_REG) || \
     (ADC_SW_PATCH_VERSION_PBCFG_C != ADC_SW_PATCH_VERSION_REG) \
    )
    #error "Software Version Numbers of Adc_PBcfg.c and Adc_Reg_eSys_Adcdig.h are different"
#endif


/*==================================================================================================
                                           DEFINES AND MACROS
==================================================================================================*/

/** 
* @brief           Number of channels configured for each group.
*/

#define ADC_CFGSET_GROUP_0_CHANNELS      16
#define ADC_CFGSET_GROUP_1_CHANNELS      17
/**
* @brief          Total number of groups in Config.
*
*/
#define ADC_GROUPS           2


/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#define ADC_START_SEC_CODE
/**
 * @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include"
 * @violates @ref Adc_PBcfg_c_REF_2 Repeated include file Memmap.h
 */
#include "Adc_MemMap.h"

/**
* @brief         ADC Notification functions.
* @details       ADC Nofification functions defined inside the Plugin.
*
*/
extern void IohwAb_Adc0Group0_EndOfNotification(void);
extern void IohwAb_Adc1Group0_EndOfNotification(void);




#define ADC_STOP_SEC_CODE
/**
 * @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include"
 * @violates @ref Adc_PBcfg_c_REF_2 Repeated include file Memmap.h
 */
#include "Adc_MemMap.h"

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

#define ADC_START_SEC_VAR_NO_INIT_UNSPECIFIED
/** @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include" */
/**  @violates @ref Adc_PBcfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"

/**
* @brief          Adc Result Buffer RAM initializations.
* @details        Array for all ADC group result ram buffers.
*/
static P2VAR(Adc_ValueGroupType, ADC_VAR, ADC_APPL_DATA) Adc_ResultsBufferPtr[] =
{
    NULL_PTR,
    NULL_PTR
};

  
#define ADC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/** @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include" */
/**  @violates @ref Adc_PBcfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"
  
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
/** @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include" */
/**  @violates @ref Adc_PBcfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"

/**
* @brief          Group Assignments on ADC Hardware unit 0.
*
*/
static CONST(Adc_ChannelType, ADC_CONST) Adc_Group0_Assignment_0[ADC_CFGSET_GROUP_0_CHANNELS] =
{
    0U,
    1U,
    2U,
    3U,
    4U,
    5U,
    6U,
    7U,
    8U,
    9U,
    10U,
    11U,
    12U,
    13U,
    14U,
    15U
};
/**
* @brief          Group Assignments on ADC Hardware unit 1.
*
*/
static CONST(Adc_ChannelType, ADC_CONST) Adc_Group1_Assignment_1[ADC_CFGSET_GROUP_1_CHANNELS] =
{
    0U,
    1U,
    2U,
    3U,
    4U,
    5U,
    6U,
    7U,
    8U,
    9U,
    10U,
    11U,
    12U,
    13U,
    14U,
    15U,
    16U
};

        
/**
* @brief          Definition of ADC Hw units for Configuration variant .
*/
static CONST(Adc_Adcdig_HwUnitConfigurationType, ADC_CONST) Adc_HwUnitCfg[] =
{
    /**< @brief Hardware Unit ADC0 */
    {
        /**< @brief Hardware unit id*/
        (Adc_HwUnitType)0,
        /**< @brief Main configuration for control register */
        (ADCDIG_AUTO_CLKOFF_DIS_U32 | ADCDIG_OVERWRITE_EN_U32 | ADCDIG_WRITE_RIGHT_ALIGNED_U32),
        /**< @brief Prescaler of normal mode */
        (ADCDIG_CLOCK_PRESCALER_DIV1_U32),
        /**< @brief Power down delay */
        (ADCDIG_POWERDOWN_EXIT_DELAY_VALUE_U8(15)),
        /**< @brief Mux delay value */
        (ADCDIG_MUX_DELAY_VALUE_U8((uint8)15)),
        /**< @brief VSS_HV */
        (uint8)0x0,
        /**< @brief VSS_HV */
        (uint8)0x0,
#if (ADC_EXTERNAL_CH_AVAILABLE == STD_ON)
        /**< @brief VSS_HV */
        (uint8)0x0,
#endif
        /**< @brief do not bypass the sampling phase */
        (uint8)0x0,
        (Adc_ConversionTimeType)0x8,
        (Adc_ConversionTimeType)0x8,
        (Adc_ConversionTimeType)0x8,
        (Adc_ConversionTimeType)0x8,
#if (ADC_CTR2_AVAILABLE == STD_ON)
        (Adc_ConversionTimeType)0x8,
        (Adc_ConversionTimeType)0x8,
#endif /* ADC_CTR2_AVAILABLE == STD_ON */
        /**< @brief Adc bit resolution. */
        (Adc_ResolutionType)ADC_BITS_RESOLUTION_10_U8

    },
    /**< @brief Hardware Unit ADC1 */
    {
        /**< @brief Hardware unit id*/
        (Adc_HwUnitType)1,
        /**< @brief Main configuration for control register */
        (ADCDIG_AUTO_CLKOFF_DIS_U32 | ADCDIG_OVERWRITE_EN_U32 | ADCDIG_WRITE_RIGHT_ALIGNED_U32),
        /**< @brief Prescaler of normal mode */
        (ADCDIG_CLOCK_PRESCALER_DIV1_U32),
        /**< @brief Power down delay */
        (ADCDIG_POWERDOWN_EXIT_DELAY_VALUE_U8(15)),
        /**< @brief Mux delay value */
        (ADCDIG_MUX_DELAY_VALUE_U8((uint8)15)),
        /**< @brief VSS_HV */
        (uint8)0x0,
        /**< @brief VSS_HV */
        (uint8)0x0,
#if (ADC_EXTERNAL_CH_AVAILABLE == STD_ON)
        /**< @brief VSS_HV */
        (uint8)0x0,
#endif
        /**< @brief do not bypass the sampling phase */
        (uint8)0x0,
        (Adc_ConversionTimeType)0x8,
        (Adc_ConversionTimeType)0x8,
        (Adc_ConversionTimeType)0x8,
        (Adc_ConversionTimeType)0x8,
#if (ADC_CTR2_AVAILABLE == STD_ON)
        (Adc_ConversionTimeType)0x8,
        (Adc_ConversionTimeType)0x8,
#endif /* ADC_CTR2_AVAILABLE == STD_ON */
        /**< @brief Adc bit resolution. */
        (Adc_ResolutionType)ADC_BITS_RESOLUTION_12_U8

    }
};

/**
* @brief          Definition of channels on ADC Hardware unit for configuration variant .
* @details        Array of conversion command messages
*/
static CONST(Adc_Adcdig_ChannelConfigurationType, ADC_CONST) Adc_ChannelsCfg_0[] =
{
    /**< @brief Hardware Unit ADC0  --  AN_3 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(3)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000008U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC0  --  AN_4 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(4)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000010U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC0  --  AN_7 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(7)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000080U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC0  --  AN_8 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(8)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000100U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC0  --  AN_11 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(11)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000800U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC0  --  AN_12 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(12)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00001000U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC0  --  AN_32 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(32)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)1,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000001U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC0  --  AN_33 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(33)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)1,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000002U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC0  --  AN_34 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(34)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)1,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000004U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC0  --  AN_35 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(35)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)1,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000008U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC0  --  AN_38 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(38)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)1,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000040U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC0  --  AN_39 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(39)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)1,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000080U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC0  --  AN_43 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(43)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)1,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000800U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC0  --  AN_50 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(50)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)1,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00040000U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC0  --  AN_64 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(64)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)2,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000001U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC0  --  AN_72 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(72)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)2,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000100U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    }
};
/**
* @brief          Definition of channels on ADC Hardware unit for configuration variant .
* @details        Array of conversion command messages
*/
static CONST(Adc_Adcdig_ChannelConfigurationType, ADC_CONST) Adc_ChannelsCfg_1[] =
{
    /**< @brief Hardware Unit ADC1  --  AN_2 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(2)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000004U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_3 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(3)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000008U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_4 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(4)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000010U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_5 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(5)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000020U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_7 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(7)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000080U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_8 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(8)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000100U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_9 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(9)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000200U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_10 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(10)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000400U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_11 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(11)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000800U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_14 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(14)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)0,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00004000U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_42 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(42)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)1,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000400U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_43 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(43)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)1,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000800U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_44 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(44)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)1,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00001000U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_64 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(64)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)2,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000001U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_72 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(72)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)2,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00000100U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_80 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(80)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)2,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x00010000U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    },
    /**< @brief Hardware Unit ADC1  --  AN_88 */
    {

        /**< @brief Adc physical channel */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(88)),
#ifdef ADC_WDG_SUPPORTED
        /**< @brief Threshold register configured */
        ADC_UNUSED_THRESHOLD_U8,
        /**< @brief No WDOG notification */
        NULL_PTR,
        /**< @brief Channel descriptions for the WDG interrupts */
        (uint8)2,
        /**< @brief Channel descriptions Mask for the WDG interrupts */
        (uint32)0x01000000U,
#endif /* ADC_WDG_SUPPORTED */
        /**< @brief presampling disabled */
        (uint8)0x0
    }
};


/**
* @brief          Definition of all ADC groups for configuration varaint .
*/
static CONST(Adc_GroupConfigurationType, ADC_CONST) Adc_GroupsCfg[] =
{
    /**< @brief Group0 -- Hardware Unit ADC0 */
    {
        /**< @brief Hardware unit configured */
        (Adc_HwUnitType)0,
        /**< @brief Access mode */
        ADC_ACCESS_MODE_SINGLE,
        /**< @brief Conversion mode */
        ADC_CONV_MODE_ONESHOT,
        /**< @brief Conversion type */
        ADC_CONV_TYPE_NORMAL,
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
        /**< @brief Priority configured */
        ADC_GROUP_PRIORITY(0U),
#endif /* ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE */
        /**< @brief Replacement mode */
        ADC_GROUP_REPL_ABORT_RESTART,
        /**< @brief Trigger source configured */
        ADC_TRIGG_SRC_SW,
#if (STD_ON==ADC_HW_TRIGGER_API)
#if (STD_ON == ADC_MULTIPLE_HARDWARE_TRIGGERS)
        /**< @brief This a Regular Group */
        (Adc_MhtGroupType)ADC_REGULAR_GROUP_TYPE,
#endif /* (STD_ON == ADC_MULTIPLE_HARDWARE_TRIGGERS) */
        /**< @brief Hardware trigger signal */
        ADC_HW_TRIG_BOTH_EDGES,
        /**< @brief Hardware resource for the group*/
        0U,
#endif /* (STD_ON==ADC_HW_TRIGGER_API) */
#if (STD_ON==ADC_GRP_NOTIF_CAPABILITY)
        /**< @brief Notification function */
        &IohwAb_Adc0Group0_EndOfNotification,
#endif /* (STD_ON==ADC_GRP_NOTIF_CAPABILITY) */
#if (ADC_ENABLE_INITIAL_NOTIFICATION == STD_ON)
        /**< @brief Extra notification function */

        NULL_PTR,
#endif /*(ADC_ENABLE_INITIAL_NOTIFICATION == STD_ON)*/
        /**< @brief Precision configured channels */
        (uint32)0x1998U,
#if (ADC_EXTENDED_CH_AVAILABLE == STD_ON)
        /**< @brief Extended configured channels */
        (uint32)0x408cfU,
#endif
#if (ADC_EXTERNAL_CH_AVAILABLE == STD_ON)
        /**< @brief External configured channels */
        (uint32)0x101U,
#endif
        /**< @brief Presampling for Precision channels */
        (uint32)0x0U,
#if (ADC_EXTENDED_CH_AVAILABLE == STD_ON)
        /**< @brief Presampling for Extended channels */
        (uint32)0x0U,
#endif
#if (ADC_EXTERNAL_CH_AVAILABLE == STD_ON)
        /**< @brief Presampling for External channels */
        (uint32)0x0U,
#endif
        /**< @brief Wer0 for precision channels */
        (uint32)0x0U,
#if (ADC_EXTENDED_CH_AVAILABLE == STD_ON)
        /**< @brief Wer1 for extended(medi.accuracy channels) */
        (uint32)0x0U,
#endif
#if (ADC_EXTERNAL_CH_AVAILABLE == STD_ON)
        /**< @brief Wer2 for external channels */
        (uint32)0x0U,
#endif
        /**< @brief ADC Group Result Buffers RAM array */
        Adc_ResultsBufferPtr,
        /**< @brief Group Streaming Buffer Mode */
        ADC_STREAM_BUFFER_LINEAR,
#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
        /**< @brief Index of the group with AdcEnableChDisableChGroup enabled */
        (Adc_GroupType)ADC_ENABLE_CH_DISABLE_CH_INVALID_GROUP_INDEX,
#endif /* (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) */
        /**< @brief Number of streaming samples */
        (Adc_StreamNumSampleType)ADC_STREAMING_NUM_SAMPLES(1),
        /**< @brief Channels assigned to the group*/
        Adc_Group0_Assignment_0,
        /**< @brief Number of channels in the group*/
        (Adc_ChannelIndexType)ADC_CFGSET_GROUP_0_CHANNELS,   
        (Adc_ConversionTimeType)(ADCDIG_INPSAMP_VALUE_U32(8)),
        (Adc_ConversionTimeType)(ADCDIG_INPSAMP_VALUE_U32(8)),
        (Adc_ConversionTimeType)(ADCDIG_INPSAMP_VALUE_U32(8)),
        /**< @brief Last Channel configured */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(72)),
        /**< @brief First Channel Configured */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(3)),
        /**< @brief Enables or Disables the ADC and DMA interrupts */
        (uint8)STD_OFF
#if (STD_ON == ADC_ENABLE_DOUBLE_BUFFERING)
        ,
        /**< @brief Enables or Disables the ADC double buffering feature */
        (boolean)STD_OFF
#endif /* (STD_ON == ADC_ENABLE_DOUBLE_BUFFERING) */
    },
    /**< @brief Group1 -- Hardware Unit ADC1 */
    {
        /**< @brief Hardware unit configured */
        (Adc_HwUnitType)1,
        /**< @brief Access mode */
        ADC_ACCESS_MODE_SINGLE,
        /**< @brief Conversion mode */
        ADC_CONV_MODE_ONESHOT,
        /**< @brief Conversion type */
        ADC_CONV_TYPE_NORMAL,
#if (ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE)
        /**< @brief Priority configured */
        ADC_GROUP_PRIORITY(0U),
#endif /* ADC_PRIORITY_IMPLEMENTATION != ADC_PRIORITY_NONE */
        /**< @brief Replacement mode */
        ADC_GROUP_REPL_ABORT_RESTART,
        /**< @brief Trigger source configured */
        ADC_TRIGG_SRC_SW,
#if (STD_ON==ADC_HW_TRIGGER_API)
#if (STD_ON == ADC_MULTIPLE_HARDWARE_TRIGGERS)
        /**< @brief This a Regular Group */
        (Adc_MhtGroupType)ADC_REGULAR_GROUP_TYPE,
#endif /* (STD_ON == ADC_MULTIPLE_HARDWARE_TRIGGERS) */
        /**< @brief Hardware trigger signal */
        ADC_HW_TRIG_BOTH_EDGES,
        /**< @brief Hardware resource for the group*/
        0U,
#endif /* (STD_ON==ADC_HW_TRIGGER_API) */
#if (STD_ON==ADC_GRP_NOTIF_CAPABILITY)
        /**< @brief Notification function */
        &IohwAb_Adc1Group0_EndOfNotification,
#endif /* (STD_ON==ADC_GRP_NOTIF_CAPABILITY) */
#if (ADC_ENABLE_INITIAL_NOTIFICATION == STD_ON)
        /**< @brief Extra notification function */

        NULL_PTR,
#endif /*(ADC_ENABLE_INITIAL_NOTIFICATION == STD_ON)*/
        /**< @brief Precision configured channels */
        (uint32)0x4fbcU,
#if (ADC_EXTENDED_CH_AVAILABLE == STD_ON)
        /**< @brief Extended configured channels */
        (uint32)0x1c00U,
#endif
#if (ADC_EXTERNAL_CH_AVAILABLE == STD_ON)
        /**< @brief External configured channels */
        (uint32)0x1010101U,
#endif
        /**< @brief Presampling for Precision channels */
        (uint32)0x0U,
#if (ADC_EXTENDED_CH_AVAILABLE == STD_ON)
        /**< @brief Presampling for Extended channels */
        (uint32)0x0U,
#endif
#if (ADC_EXTERNAL_CH_AVAILABLE == STD_ON)
        /**< @brief Presampling for External channels */
        (uint32)0x0U,
#endif
        /**< @brief Wer0 for precision channels */
        (uint32)0x0U,
#if (ADC_EXTENDED_CH_AVAILABLE == STD_ON)
        /**< @brief Wer1 for extended(medi.accuracy channels) */
        (uint32)0x0U,
#endif
#if (ADC_EXTERNAL_CH_AVAILABLE == STD_ON)
        /**< @brief Wer2 for external channels */
        (uint32)0x0U,
#endif
        /**< @brief ADC Group Result Buffers RAM array */
        Adc_ResultsBufferPtr,
        /**< @brief Group Streaming Buffer Mode */
        ADC_STREAM_BUFFER_LINEAR,
#if (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON)
        /**< @brief Index of the group with AdcEnableChDisableChGroup enabled */
        (Adc_GroupType)ADC_ENABLE_CH_DISABLE_CH_INVALID_GROUP_INDEX,
#endif /* (ADC_ENABLE_CH_DISABLE_CH_NONAUTO_API == STD_ON) */
        /**< @brief Number of streaming samples */
        (Adc_StreamNumSampleType)ADC_STREAMING_NUM_SAMPLES(1),
        /**< @brief Channels assigned to the group*/
        Adc_Group1_Assignment_1,
        /**< @brief Number of channels in the group*/
        (Adc_ChannelIndexType)ADC_CFGSET_GROUP_1_CHANNELS,   
        (Adc_ConversionTimeType)(ADCDIG_INPSAMP_VALUE_U32(8)),
        (Adc_ConversionTimeType)(ADCDIG_INPSAMP_VALUE_U32(8)),
        (Adc_ConversionTimeType)(ADCDIG_INPSAMP_VALUE_U32(8)),
        /**< @brief Last Channel configured */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(88)),
        /**< @brief First Channel Configured */
        (Adc_ChannelType)(ADC_ID_CHANNEL_U8(2)),
        /**< @brief Enables or Disables the ADC and DMA interrupts */
        (uint8)STD_OFF
#if (STD_ON == ADC_ENABLE_DOUBLE_BUFFERING)
        ,
        /**< @brief Enables or Disables the ADC double buffering feature */
        (boolean)STD_OFF
#endif /* (STD_ON == ADC_ENABLE_DOUBLE_BUFFERING) */
    }
};





#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/** @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include" */
/**  @violates @ref Adc_PBcfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"

#define ADC_START_SEC_VAR_INIT_UNSPECIFIED
/** @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include" */
/**  @violates @ref Adc_PBcfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"

/**
* @brief          Definition of channels's pointer structure  Configuration.
*
*/
static P2CONST(Adc_Adcdig_ChannelConfigurationType, ADC_VAR, ADC_APPL_CONST) Adc_ChannelsCfg[] =
{
    Adc_ChannelsCfg_0,
    Adc_ChannelsCfg_1
};

  
#define ADC_STOP_SEC_VAR_INIT_UNSPECIFIED
/** @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include" */
/**  @violates @ref Adc_PBcfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
/** @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include" */
/**  @violates @ref Adc_PBcfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"

/**
* @brief          ADC driver Configuration structure .
*/
/** @violates @ref Adc_PBcfg_c_REF_5 MISRA-C:2004 Rule 8.10: External linkage.*/
CONST(Adc_ConfigType, ADC_CONST) AdcConfigSet =
{
    /**< @brief pointer to Hw unit configurations */
    Adc_HwUnitCfg,
    /**< @brief pointer to group configurations */
    Adc_GroupsCfg,
    /**< @brief pointer to channel configurations */
    Adc_ChannelsCfg,
    /**< @brief total number of groups */
    (Adc_GroupType)ADC_GROUPS,
    /**< @brief Miscellaneous configuration parameters. - Adc_Adcdig_MultiConfigType */
    {
        {
            ADC_INTERRUPT,
            ADC_INTERRUPT

        },
        /**< @brief number of the maximum hardware units in the current configuration */
        2U,
        {
            /**< @brief number of groups of the hw unit 0 */
            (Adc_GroupType)1U,
            /**< @brief number of groups of the hw unit 1 */
            (Adc_GroupType)1U
        },
        {
            /**< @brief number of channels of the ADC Hardware unit 0 */
            (Adc_ChannelType)16U,
            /**< @brief number of channels of the ADC Hardware unit 1 */
            (Adc_ChannelType)17U
        },
        {
            /** The DMA channel number for ADC 0 */
            (uint8)255U,
            /** The DMA channel number for ADC 1 */
            (uint8)255U
        },
        {
            /**< @brief ADC_UNIT_0 - ON/OFF */
            (uint8)STD_ON,
            /**< @brief ADC_UNIT_1 - ON/OFF */
            (uint8)STD_ON
        },
        {
            /**< @brief number of MHT groups of the ADC Hardware unit 0 */
            (uint8)0U,
            /**< @brief number of MHT groups of the ADC Hardware unit 1 */
            (uint8)0U

        },
        {
            0U,
            1U
        }
    }
};


#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/** @violates @ref Adc_PBcfg_c_REF_1 only preprocessor statements and comments before "#include" */
/**  @violates @ref Adc_PBcfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

