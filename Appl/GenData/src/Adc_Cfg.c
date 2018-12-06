/**
*   @file    Adc_Cfg.c
*   @version 1.0.0
*
*   @brief   AUTOSAR Adc - Pre-Compile configurations for ADC driver.
*   @details Pre-Compile configuration file for ADC driver.
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
* @section Adc_Cfg_c_REF_1
* Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments before '#include'
* This is an Autosar memory management requirement.
*
* @section Adc_Cfg_c_REF_2
* Violates MISRA 2004 Required Rule 19.15, Repeated include file MemMap.h.
* This violation  is not  fixed since  the inclusion  of MemMap.h
* is as  per Autosar  requirement MEMMAP003.
*
* @section Adc_Cfg_c_REF_3
* Violates MISRA 2004 Required Rule 1.4,
* The compiler/linker shall be checked to ensure that 31 character signifiance and case
* sensitivity are supported for external identifiers.
* This violation is due to the requirement that requests to have a file version check.
*
* @section Adc_Cfg_c_REF_4
* Violates MISRA 2004 Required Rule 19.15, Repeated include file.
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions.
*
* @section Adc_Cfg_c_REF_5
* Violates MISRA 2004 Required Rule 8.10, all declarations and definitions of objects or functions
* at file scope shall have internal linkage unless external linkage is required.
* This violation is due to Autosar files and structures definitions.
*
* @section Adc_Cfg_c_REF_6
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
/**  @violates @ref Adc_Cfg_c_REF_4 Repeated include file */
#include "Adc_Reg_eSys_Adcdig.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define ADC_VENDOR_ID_CFG_C                    43
/**
* @violates @ref Adc_Cfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers
*/
#define ADC_AR_RELEASE_MAJOR_VERSION_CFG_C     4
/**
* @violates @ref Adc_Cfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers
*/
#define ADC_AR_RELEASE_MINOR_VERSION_CFG_C     2
/**
* @violates @ref Adc_Cfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers
*/
#define ADC_AR_RELEASE_REVISION_VERSION_CFG_C  2
#define ADC_SW_MAJOR_VERSION_CFG_C             1
#define ADC_SW_MINOR_VERSION_CFG_C             0
#define ADC_SW_PATCH_VERSION_CFG_C             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and ADC header file are of the same vendor */
#if (ADC_VENDOR_ID_CFG_C != ADC_VENDOR_ID)
    #error "Adc_Cfg.c and Adc.h have different vendor ids"
#endif

/* Check if source file and ADC header file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_CFG_C != ADC_AR_RELEASE_MAJOR_VERSION) || \
     (ADC_AR_RELEASE_MINOR_VERSION_CFG_C != ADC_AR_RELEASE_MINOR_VERSION) || \
     (ADC_AR_RELEASE_REVISION_VERSION_CFG_C != ADC_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Adc_Cfg.c and Adc.h are different"
#endif

/* Check if source file and ADC header file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_CFG_C != ADC_SW_MAJOR_VERSION) || \
     (ADC_SW_MINOR_VERSION_CFG_C != ADC_SW_MINOR_VERSION) || \
     (ADC_SW_PATCH_VERSION_CFG_C != ADC_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Adc_Cfg.c and Adc.h are different"
#endif

/* Check if source file and Adc_Reg_eSys_Adcdig header file are of the same vendor */
#if (ADC_VENDOR_ID_CFG_C != ADC_VENDOR_ID_REG)
    #error "Adc_Cfg.c and Adc_Reg_eSys_Adcdig.h have different vendor ids"
#endif

/* Check if source file and Adc_Reg_eSys_Adcdig header file are of the same Autosar version */
#if ((ADC_AR_RELEASE_MAJOR_VERSION_CFG_C != ADC_AR_RELEASE_MAJOR_VERSION_REG) || \
     (ADC_AR_RELEASE_MINOR_VERSION_CFG_C != ADC_AR_RELEASE_MINOR_VERSION_REG) || \
     (ADC_AR_RELEASE_REVISION_VERSION_CFG_C != ADC_AR_RELEASE_REVISION_VERSION_REG) \
    )
    #error "AutoSar Version Numbers of Adc_Cfg.c and Adc_Reg_eSys_Adcdig.h are different"
#endif

/* Check if source file and Adc_Reg_eSys_Adcdig header file are of the same Software version */
#if ((ADC_SW_MAJOR_VERSION_CFG_C != ADC_SW_MAJOR_VERSION_REG) || \
     (ADC_SW_MINOR_VERSION_CFG_C != ADC_SW_MINOR_VERSION_REG) || \
     (ADC_SW_PATCH_VERSION_CFG_C != ADC_SW_PATCH_VERSION_REG) \
    )
    #error "Software Version Numbers of Adc_Cfg.c and Adc_Reg_eSys_Adcdig.h are different"
#endif

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/
#define ADC_START_SEC_CONST_UNSPECIFIED
/** @violates @ref Adc_Cfg_c_REF_1 only preprocessor statements and comments before "#include" */
/** @violates @ref Adc_Cfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"


/**
* @brief          ADC Registers available for each unit .
*/
/** @violates @ref Adc_Cfg_c_REF_5 MISRA-C:2004 Rule 8.10: External linkage.*/
CONST(Adc_Adcdig_RegisterAvailabilityType, ADC_CONST) Adc_RegistersAvailable =
{
    /**< @brief ADC Registers available for each Unit. - Adc_Adcdig_RegisterAvailabilityType */
    {
        {
            /**< @brief ADC_CEOCFR0 available on unit ADC0 */
            (uint8)STD_ON, 
            /**< @brief ADC_CEOCFR1 available on unit ADC0 */
            (uint8)STD_ON, 
            /**< @brief ADC_CEOCFR2 available on unit ADC0 */
            (uint8)STD_ON
        }, 
        {
            /**< @brief ADC_CEOCFR0 available on unit ADC1 */
            (uint8)STD_ON, 
            /**< @brief ADC_CEOCFR1 available on unit ADC1 */
            (uint8)STD_ON, 
            /**< @brief ADC_CEOCFR2 available on unit ADC1 */
            (uint8)STD_ON
        }
    },
    {
        {
            /**< @brief ADC_DMAR0 available on unit ADC0 */
            (uint8)STD_ON, 
            /**< @brief ADC_DMAR1 available on unit ADC0 */
            (uint8)STD_ON, 
            /**< @brief ADC_DMAR2 available on unit ADC0 */
            (uint8)STD_ON
        }, 
        {
            /**< @brief ADC_DMAR0 available on unit ADC1 */
            (uint8)STD_ON, 
            /**< @brief ADC_DMAR1 available on unit ADC1 */
            (uint8)STD_ON, 
            /**< @brief ADC_DMAR2 available on unit ADC1 */
            (uint8)STD_ON
        }
    },
    {
        {
            /**< @brief ADC_PSR0 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_PSR1 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_PSR2 available on unit ADC0 */ 
            (uint8)STD_ON
        }, 
        {
            /**< @brief ADC_PSR0 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_PSR1 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_PSR2 available on unit ADC1 */ 
            (uint8)STD_ON
        }
    },
    {
        {
            /**< @brief ADC_CTR0 available on unit ADC0 */  
            (uint8)STD_ON, 
            /**< @brief ADC_CTR1 available on unit ADC0 */  
            (uint8)STD_ON, 
            /**< @brief ADC_CTR2 available on unit ADC0 */  
            (uint8)STD_ON
        }, 
        {
            /**< @brief ADC_CTR0 available on unit ADC1 */  
            (uint8)STD_ON, 
            /**< @brief ADC_CTR1 available on unit ADC1 */  
            (uint8)STD_ON, 
            /**< @brief ADC_CTR2 available on unit ADC1 */  
            (uint8)STD_ON
        }
    },
    {
        {
            /**< @brief ADC_NCMR0 available on unit ADC0 */  
            (uint8)STD_ON, 
            /**< @brief ADC_NCMR1 available on unit ADC0 */  
            (uint8)STD_ON, 
            /**< @brief ADC_NCMR2 available on unit ADC0 */  
            (uint8)STD_ON
        }, 
        {
            /**< @brief ADC_NCMR0 available on unit ADC1 */  
            (uint8)STD_ON, 
            /**< @brief ADC_NCMR1 available on unit ADC1 */  
            (uint8)STD_ON, 
            /**< @brief ADC_NCMR2 available on unit ADC1 */  
            (uint8)STD_ON
        }
    },
    {
        {
            /**< @brief ADC_JCMR0 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_JCMR1 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_JCMR2 available on unit ADC0 */ 
            (uint8)STD_ON
        }, 
        {
            /**< @brief ADC_JCMR0 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_JCMR1 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_JCMR2 available on unit ADC1 */ 
            (uint8)STD_ON
        }
    },
    {
            /**< @brief DSDR register available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief DSDR register available on unit ADC1 */ 
            (uint8)STD_ON
    },
    {
        {
            /**< @brief ADC_CWSEL0 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL1 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL2 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL3 available on unit ADC0 */ 
            (uint8)STD_OFF, 
            /**< @brief ADC_CWSEL4 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL5 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL6 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL7 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL8 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL9 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL10 available on unit ADC0 */ 
            (uint8)STD_ON
        }, 
        {
            /**< @brief ADC_CWSEL0 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL1 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL2 available on unit ADC1 */ 
            (uint8)STD_OFF, 
            /**< @brief ADC_CWSEL3 available on unit ADC1 */ 
            (uint8)STD_OFF, 
            /**< @brief ADC_CWSEL4 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL5 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL6 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL7 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL8 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL9 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWSEL10 available on unit ADC1 */ 
            (uint8)STD_ON
        }
    },
    {
        {
            /**< @brief ADC_CWENR0 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWENR1 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWENR2 available on unit ADC0 */ 
            (uint8)STD_ON
        }, 
        {
            /**< @brief ADC_CWENR0 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWENR1 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_CWENR2 available on unit ADC1 */ 
            (uint8)STD_ON
        }
    },
    {
        {
            /**< @brief ADC_AWORR0 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_AWORR1 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_AWORR2 available on unit ADC0 */ 
            (uint8)STD_ON
        }, 
        {
            /**< @brief ADC_AWORR0 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_AWORR1 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_AWORR2 available on unit ADC1 */ 
            (uint8)STD_ON
        }
    },
    {
        {
            /**< @brief ADC_THRHLR0 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_THRHLR1 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_THRHLR2 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_THRHLR3 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_THRHLR4 available on unit ADC0 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_THRHLR5 available on unit ADC0 */ 
            (uint8)STD_ON
        }, 
        {
            /**< @brief ADC_THRHLR0 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_THRHLR1 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_THRHLR2 available on unit ADC1 */ 
            (uint8)STD_ON, 
            /**< @brief ADC_THRHLR3 available on unit ADC1 */ 
            (uint8)STD_OFF, 
            /**< @brief ADC_THRHLR4 available on unit ADC1 */ 
            (uint8)STD_OFF, 
            /**< @brief ADC_THRHLR5 available on unit ADC1 */ 
            (uint8)STD_OFF
        }
    }
};


#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
/**
* @brief          Definition of channels limit checking on ADC logical unit 0.
*/
static CONST(Adc_Adcdig_ChannelLimitCheckingType, ADC_CONST) Adc_ChannelsLimitCheckingCfg_0[] =
{
    /**< @brief ADC logical Id 0  --  Channel logical Id 0 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 0  --  Channel logical Id 1 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 0  --  Channel logical Id 2 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 0  --  Channel logical Id 3 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 0  --  Channel logical Id 4 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 0  --  Channel logical Id 5 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 0  --  Channel logical Id 6 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 0  --  Channel logical Id 7 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 0  --  Channel logical Id 8 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 0  --  Channel logical Id 9 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 0  --  Channel logical Id 10 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 0  --  Channel logical Id 11 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 0  --  Channel logical Id 12 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 0  --  Channel logical Id 13 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 0  --  Channel logical Id 14 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 0  --  Channel logical Id 15 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    }
};
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */
#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
/**
* @brief          Definition of channels limit checking on ADC logical unit 1.
*/
static CONST(Adc_Adcdig_ChannelLimitCheckingType, ADC_CONST) Adc_ChannelsLimitCheckingCfg_1[] =
{
    /**< @brief ADC logical Id 1  --  Channel logical Id 0 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 1 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 2 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 3 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 4 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 5 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 6 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 7 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 8 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 9 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 10 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 11 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 12 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 13 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 14 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 15 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    },
    /**< @brief ADC logical Id 1  --  Channel logical Id 16 */
    {
        /**< @brief limit check disabled */
        (boolean)FALSE,
        /**< @brief range for limit check */
        (Adc_ChannelRangeSelectType)ADC_RANGE_ALWAYS,
        /**< @brief high limit value */
        (Adc_ValueGroupType)0,
        /**< @brief low limit value */
        (Adc_ValueGroupType)0
    }
};
#endif /* (ADC_ENABLE_LIMIT_CHECK == STD_ON) */



#define ADC_STOP_SEC_CONST_UNSPECIFIED
/** @violates @ref Adc_Cfg_c_REF_1 only preprocessor statements and comments before "#include" */
/** @violates @ref Adc_Cfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/
#define ADC_START_SEC_VAR_INIT_UNSPECIFIED
/** @violates @ref Adc_Cfg_c_REF_1 only preprocessor statements and comments before "#include" */
/**  @violates @ref Adc_Cfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"

#if (ADC_ENABLE_LIMIT_CHECK == STD_ON)
/**
* @brief          Definition of channels' limit checking pointer structure.
*
*/
P2CONST(Adc_Adcdig_ChannelLimitCheckingType, ADC_VAR, ADC_APPL_CONST) Adc_ChannelsLimitCheckingCfg[]=
{
    Adc_ChannelsLimitCheckingCfg_0,
    Adc_ChannelsLimitCheckingCfg_1
};
#endif


#define ADC_STOP_SEC_VAR_INIT_UNSPECIFIED
/** @violates @ref Adc_Cfg_c_REF_1 only preprocessor statements and comments before "#include" */
/** @violates @ref Adc_Cfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif
/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

#define ADC_START_SEC_VAR_NO_INIT_UNSPECIFIED
/** @violates @ref Adc_Cfg_c_REF_1 only preprocessor statements and comments before "#include" */
/**  @violates @ref Adc_Cfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"



  
#define ADC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/** @violates @ref Adc_Cfg_c_REF_1 only preprocessor statements and comments before "#include" */
/**  @violates @ref Adc_Cfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"

/**
* @violates @ref Adc_Cfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers
*/
#define ADC_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
/** @violates @ref Adc_Cfg_c_REF_1 only preprocessor statements and comments before "#include" */
/**  @violates @ref Adc_Cfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"




/**
* @violates @ref Adc_Cfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers
*/
#define ADC_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
/** @violates @ref Adc_Cfg_c_REF_1 only preprocessor statements and comments before "#include" */
/**  @violates @ref Adc_Cfg_c_REF_2 Repeated include file Memmap.h*/
#include "Adc_MemMap.h"


/** @} */

