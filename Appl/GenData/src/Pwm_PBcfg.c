/**
*   @file       Pwm_PBcfg.c
*   @implements Pwm_PBcfg.c_Artifact
*   @version    1.0.0
*
*   @brief      AUTOSAR Pwm - Pwm post-build configuration file.
*   @details    Post-build configuration structure instances.
*
*   @addtogroup PWM_MODULE
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.2 MCAL
*   Platform             : PA
*   Peripheral           : eMios
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
extern "C" {
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Pwm_PBcfg_C_REF_1
* Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to
* prevent the contents of a header file being included twice. All header files are
* protected against multiple inclusions.
*
* @section Pwm_PBcfg_C_REF_2
* Violates MISRA 2004 Required Rule 8.10, external ... could be made static
* The respective code could not be made static because of layers architecture design of the driver.
* 
* @section Pwm_PBcfg_C_REF_3
* Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments
* before "#include". This violation  is not  fixed since  the inclusion  of Pwm_Memmap.h
* is as  per Autosar  requirement Pwm_Memmap003.
* 
* @section Pwm_PBcfg_C_REF_4
* Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not 
* rely on the significance of more than 31 characters.
* This is not a violation since all the compilers used interpret the identifiers correctly.*
*
* @section Pwm_PBcfg_C_REF_5
* Violates MISRA 2004 Required Rule 16.9, A function identifier shall only be used with either 
* preceing &, or with a paranhesised parameter list which may be empty.
*
* @section Pwm_PBcfg_C_REF_6
* Violates MISRA 2004 Required Rule 12.8, The right-hand operand of a shift operator shall lie 
* between zero and one less than the width in bits of the underlying type of the left-hand operand.
*
* @section Pwm_PBcfg_C_REF_7
* Violates MISRA 2004 Required Rule 8.8, An external object or function shall be declared in one and only one file 
* This is not a violation since this extern object is used one time.
*
*/

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Pwm.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @{
* @file           Pwm_PBcfg.c
*/

#define PWM_PB_CFG_VENDOR_ID_C                      43
#define PWM_PB_CFG_MODULE_ID_C                      121
/* @violates @ref Pwm_PBcfg_C_REF_4 Identifier exceeds 31 chars. */
#define PWM_PB_CFG_AR_RELEASE_MAJOR_VERSION_C       4
/* @violates @ref Pwm_PBcfg_C_REF_4 Identifier exceeds 31 chars. */
#define PWM_PB_CFG_AR_RELEASE_MINOR_VERSION_C       2
/* @violates @ref Pwm_PBcfg_C_REF_4 Identifier exceeds 31 chars. */
#define PWM_PB_CFG_AR_RELEASE_REVISION_VERSION_C    2

#define PWM_PB_CFG_SW_MAJOR_VERSION_C               1
#define PWM_PB_CFG_SW_MINOR_VERSION_C               0
#define PWM_PB_CFG_SW_PATCH_VERSION_C               0
/**@}*/

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#if (PWM_PB_CFG_VENDOR_ID_C != PWM_VENDOR_ID)
    #error "Pwm_PBcfg.c and Pwm.h have different vendor ids"
#endif

#if ((PWM_PB_CFG_AR_RELEASE_MAJOR_VERSION_C != PWM_AR_RELEASE_MAJOR_VERSION) || \
        (PWM_PB_CFG_AR_RELEASE_MINOR_VERSION_C != PWM_AR_RELEASE_MINOR_VERSION) || \
        (PWM_PB_CFG_AR_RELEASE_REVISION_VERSION_C != PWM_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Pwm_PBcfg.c and Pwm.h are different"
#endif

#if ((PWM_PB_CFG_SW_MAJOR_VERSION_C != PWM_SW_MAJOR_VERSION) || \
        (PWM_PB_CFG_SW_MINOR_VERSION_C != PWM_SW_MINOR_VERSION)  || \
        (PWM_PB_CFG_SW_PATCH_VERSION_C != PWM_SW_PATCH_VERSION))
    #error "Software Version Numbers of Pwm_PBcfg.c and Pwm.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/
/*==================================================================================================
*                                      FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
/** @violates @ref Pwm_PBcfg_C_REF_1 MISRA 2004 Required Rule 19.15, precautions to prevent the 
*   contents of a header file being included twice.*/
/*
* @violates @ref Pwm_PBcfg_C_REF_3 #include statements in a file should
* only be preceded by other preprocessor directives or comments.
*/
#include "Pwm_MemMap.h"


/** @brief Prototypes of Pwm channels User Notifications */  
  
#define PWM_STOP_SEC_CODE
/** @violates @ref Pwm_PBcfg_C_REF_1 MISRA 2004 Required Rule 19.15, precautions to prevent the 
*   contents of a header file being included twice.*/
/*
* @violates @ref Pwm_PBcfg_C_REF_3 #include statements in a file should
* only be preceded by other preprocessor directives or comments.
*/
#include "Pwm_MemMap.h"
/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/* @violates @ref Pwm_PBcfg_C_REF_4 Identifier exceeds 31 chars. */
#define PWM_START_SEC_CONFIG_DATA_UNSPECIFIED
/** @violates @ref Pwm_PBcfg_C_REF_1 MISRA 2004 Required Rule 19.15, precautions to prevent the 
*   contents of a header file being included twice.*/
/*
* @violates @ref Pwm_PBcfg_C_REF_3 #include statements in a file should
* only be preceded by other preprocessor directives or comments.
*/
#include "Pwm_Memmap.h"



/** 
* @brief Number of configured Pwm channels 
*/
#define PWM_CONF_CHANNELS_PB            6

/** 
* @brief Number of configured EMIOS channels
*/
#define PWM_EMIOS_CONF_CHANNELS_PB     6


/* @brief Configurations for Pwm channels using EMIOS */
static CONST(Pwm_eMios_ChannelConfigType, PWM_CONST) Pwm_eMios_ChannelConfig_PB[PWM_EMIOS_CONF_CHANNELS_PB] =
{
    /* @brief PwmChannel_LS_GATE1 */
    {
        /** @brief Pwm channel polarity */
        PWM_HIGH,
        /** @brief Pwm channel idle state */
        PWM_LOW,
        /** @brief Default duty cycle value */
        (uint16)0x4000U,
        /** @brief Default period value */
        (Pwm_PeriodType)40000U,
        /** @brief EMIOS HW Module and Channel used by the Pwm channel */
        PWM_EMIOS_M1_C6,
        /* @brief EMIOS channel configuration parameters */
        /* @violates @ref Pwm_PBcfg_C_REF_6 The right-hand operand of a shift operator shall. */
        (Pwm_eMios_ControlType)(PWM_BUS_A_U32 | PWM_MODE_OPWMB_U32   | (PWM_PRES_1_U32)),
        (Pwm_PeriodType)0,/* leading edge of the PWM output pulse in OPWMB, OPWMT modes */
        (uint8)MASTER_MODE_UP_BUFFERED_COUNTER_U32,
        #if (PWM_FEATURE_DAOC == STD_ON)
        (Pwm_PeriodType)0,/* only use for DAOC mode */
        #endif
        #if (PWM_FEATURE_OPWMT == STD_ON)
        (Pwm_PeriodType)0,/* delay for generating the trigger event in OPWMT mode */
        #endif
        #if (PWM_FEATURE_OPWMCB == STD_ON)
        (uint16)0,/*deadtime parameter */
        #endif
        (boolean)FALSE/* Pwm_Offset and Pwm_TriggerDelay adjusted during runtime */
    },
    /* @brief PwmChannel_LS_GATE2 */
    {
        /** @brief Pwm channel polarity */
        PWM_HIGH,
        /** @brief Pwm channel idle state */
        PWM_LOW,
        /** @brief Default duty cycle value */
        (uint16)0x4000U,
        /** @brief Default period value */
        (Pwm_PeriodType)40000U,
        /** @brief EMIOS HW Module and Channel used by the Pwm channel */
        PWM_EMIOS_M1_C7,
        /* @brief EMIOS channel configuration parameters */
        /* @violates @ref Pwm_PBcfg_C_REF_6 The right-hand operand of a shift operator shall. */
        (Pwm_eMios_ControlType)(PWM_BUS_F_U32 | PWM_MODE_OPWMB_U32   | (PWM_PRES_1_U32)),
        (Pwm_PeriodType)0,/* leading edge of the PWM output pulse in OPWMB, OPWMT modes */
        (uint8)MASTER_MODE_UP_BUFFERED_COUNTER_U32,
        #if (PWM_FEATURE_DAOC == STD_ON)
        (Pwm_PeriodType)0,/* only use for DAOC mode */
        #endif
        #if (PWM_FEATURE_OPWMT == STD_ON)
        (Pwm_PeriodType)0,/* delay for generating the trigger event in OPWMT mode */
        #endif
        #if (PWM_FEATURE_OPWMCB == STD_ON)
        (uint16)0,/*deadtime parameter */
        #endif
        (boolean)FALSE/* Pwm_Offset and Pwm_TriggerDelay adjusted during runtime */
    },
    /* @brief PwmChannel_LS_GATE3 */
    {
        /** @brief Pwm channel polarity */
        PWM_HIGH,
        /** @brief Pwm channel idle state */
        PWM_LOW,
        /** @brief Default duty cycle value */
        (uint16)0x4000U,
        /** @brief Default period value */
        (Pwm_PeriodType)40000U,
        /** @brief EMIOS HW Module and Channel used by the Pwm channel */
        PWM_EMIOS_M1_C8,
        /* @brief EMIOS channel configuration parameters */
        /* @violates @ref Pwm_PBcfg_C_REF_6 The right-hand operand of a shift operator shall. */
        (Pwm_eMios_ControlType)(PWM_BUS_INTERNAL_COUNTER_U32 | PWM_MODE_OPWFMB_U32   | (PWM_PRES_1_U32)),
        (Pwm_PeriodType)0,/* leading edge of the PWM output pulse in OPWMB, OPWMT modes */
        (uint8)0,
        #if (PWM_FEATURE_DAOC == STD_ON)
        (Pwm_PeriodType)0,/* only use for DAOC mode */
        #endif
        #if (PWM_FEATURE_OPWMT == STD_ON)
        (Pwm_PeriodType)0,/* delay for generating the trigger event in OPWMT mode */
        #endif
        #if (PWM_FEATURE_OPWMCB == STD_ON)
        (uint16)0,/*deadtime parameter */
        #endif
        (boolean)FALSE/* Pwm_Offset and Pwm_TriggerDelay adjusted during runtime */
    },
    /* @brief PwmChannel_HS_PWM_IN1 */
    {
        /** @brief Pwm channel polarity */
        PWM_HIGH,
        /** @brief Pwm channel idle state */
        PWM_LOW,
        /** @brief Default duty cycle value */
        (uint16)0x4000U,
        /** @brief Default period value */
        (Pwm_PeriodType)40000U,
        /** @brief EMIOS HW Module and Channel used by the Pwm channel */
        PWM_EMIOS_M0_C24,
        /* @brief EMIOS channel configuration parameters */
        /* @violates @ref Pwm_PBcfg_C_REF_6 The right-hand operand of a shift operator shall. */
        (Pwm_eMios_ControlType)(PWM_BUS_INTERNAL_COUNTER_U32 | PWM_MODE_OPWFMB_U32   | (PWM_PRES_1_U32)),
        (Pwm_PeriodType)0,/* leading edge of the PWM output pulse in OPWMB, OPWMT modes */
        (uint8)0,
        #if (PWM_FEATURE_DAOC == STD_ON)
        (Pwm_PeriodType)0,/* only use for DAOC mode */
        #endif
        #if (PWM_FEATURE_OPWMT == STD_ON)
        (Pwm_PeriodType)0,/* delay for generating the trigger event in OPWMT mode */
        #endif
        #if (PWM_FEATURE_OPWMCB == STD_ON)
        (uint16)0,/*deadtime parameter */
        #endif
        (boolean)FALSE/* Pwm_Offset and Pwm_TriggerDelay adjusted during runtime */
    },
    /* @brief PwmChannel_REG_WDT_OUT */
    {
        /** @brief Pwm channel polarity */
        PWM_HIGH,
        /** @brief Pwm channel idle state */
        PWM_LOW,
        /** @brief Default duty cycle value */
        (uint16)0x4000U,
        /** @brief Default period value */
        (Pwm_PeriodType)40000U,
        /** @brief EMIOS HW Module and Channel used by the Pwm channel */
        PWM_EMIOS_M0_C29,
        /* @brief EMIOS channel configuration parameters */
        /* @violates @ref Pwm_PBcfg_C_REF_6 The right-hand operand of a shift operator shall. */
        (Pwm_eMios_ControlType)(PWM_BUS_F_U32 | PWM_MODE_OPWMB_U32   | (PWM_PRES_1_U32)),
        (Pwm_PeriodType)0,/* leading edge of the PWM output pulse in OPWMB, OPWMT modes */
        (uint8)MASTER_MODE_UP_BUFFERED_COUNTER_U32,
        #if (PWM_FEATURE_DAOC == STD_ON)
        (Pwm_PeriodType)0,/* only use for DAOC mode */
        #endif
        #if (PWM_FEATURE_OPWMT == STD_ON)
        (Pwm_PeriodType)0,/* delay for generating the trigger event in OPWMT mode */
        #endif
        #if (PWM_FEATURE_OPWMCB == STD_ON)
        (uint16)0,/*deadtime parameter */
        #endif
        (boolean)FALSE/* Pwm_Offset and Pwm_TriggerDelay adjusted during runtime */
    },
    /* @brief PwmChannel_HS_PWM_IN2 */
    {
        /** @brief Pwm channel polarity */
        PWM_HIGH,
        /** @brief Pwm channel idle state */
        PWM_LOW,
        /** @brief Default duty cycle value */
        (uint16)0x4000U,
        /** @brief Default period value */
        (Pwm_PeriodType)40000U,
        /** @brief EMIOS HW Module and Channel used by the Pwm channel */
        PWM_EMIOS_M0_C25,
        /* @brief EMIOS channel configuration parameters */
        /* @violates @ref Pwm_PBcfg_C_REF_6 The right-hand operand of a shift operator shall. */
        (Pwm_eMios_ControlType)(PWM_BUS_A_U32 | PWM_MODE_OPWMB_U32   | (PWM_PRES_1_U32)),
        (Pwm_PeriodType)0,/* leading edge of the PWM output pulse in OPWMB, OPWMT modes */
        (uint8)MASTER_MODE_UP_BUFFERED_COUNTER_U32,
        #if (PWM_FEATURE_DAOC == STD_ON)
        (Pwm_PeriodType)0,/* only use for DAOC mode */
        #endif
        #if (PWM_FEATURE_OPWMT == STD_ON)
        (Pwm_PeriodType)0,/* delay for generating the trigger event in OPWMT mode */
        #endif
        #if (PWM_FEATURE_OPWMCB == STD_ON)
        (uint16)0,/*deadtime parameter */
        #endif
        (boolean)FALSE/* Pwm_Offset and Pwm_TriggerDelay adjusted during runtime */
    }
};

/**
@brief EMIOS IP configuration
*/
/* @violates @ref Pwm_PBcfg_C_REF_2 external ... could be made static */
static CONST(Pwm_eMios_IpConfigType, PWM_CONST) Pwm_eMios_IpConfig_PB=
{
    /** @brief Number of EMIOS channels in the Pwm configuration */
    (uint8)6,
    /** @brief Pointer to the array of EMIOS enabled Pwm channel configurations */
    &Pwm_eMios_ChannelConfig_PB};


/* @brief Array of configured Pwm channels */
static CONST(Pwm_ChannelConfigType, PWM_CONST) Pwm_Channels_PB[PWM_EMIOS_CONF_CHANNELS_PB] =
{
    /* @brief PwmChannel_LS_GATE1 */
    {
        /* @brief Channel class: Variable/Fixed/Fixed_Shifted period */
        PWM_FIXED_PERIOD,
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
        /** @brief Pwm notification function */
        NULL_PTR,
#endif
    },
    /* @brief PwmChannel_LS_GATE2 */
    {
        /* @brief Channel class: Variable/Fixed/Fixed_Shifted period */
        PWM_FIXED_PERIOD,
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
        /** @brief Pwm notification function */
        NULL_PTR,
#endif
    },
    /* @brief PwmChannel_LS_GATE3 */
    {
        /* @brief Channel class: Variable/Fixed/Fixed_Shifted period */
        PWM_VARIABLE_PERIOD,
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
        /** @brief Pwm notification function */
        NULL_PTR,
#endif
    },
    /* @brief PwmChannel_HS_PWM_IN1 */
    {
        /* @brief Channel class: Variable/Fixed/Fixed_Shifted period */
        PWM_VARIABLE_PERIOD,
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
        /** @brief Pwm notification function */
        NULL_PTR,
#endif
    },
    /* @brief PwmChannel_REG_WDT_OUT */
    {
        /* @brief Channel class: Variable/Fixed/Fixed_Shifted period */
        PWM_FIXED_PERIOD,
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
        /** @brief Pwm notification function */
        NULL_PTR,
#endif
    },
    /* @brief PwmChannel_HS_PWM_IN2 */
    {
        /* @brief Channel class: Variable/Fixed/Fixed_Shifted period */
        PWM_FIXED_PERIOD_SHIFTED,
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
        /** @brief Pwm notification function */
        NULL_PTR,
#endif
    }
};

/**
@brief   Pwm channels IP related configuration array
*/
static CONST(Pwm_IpChannelConfigType, PWM_CONST) Pwm_IpChannelConfig_PB[PWM_EMIOS_CONF_CHANNELS_PB] = 
{
    /** @brief PwmChannel_LS_GATE1 */
    {
        /* @brief Index in the configuration table of the EMIOS channels */
        (uint8)0,
    },
    /** @brief PwmChannel_LS_GATE2 */
    {
        /* @brief Index in the configuration table of the EMIOS channels */
        (uint8)1,
    },
    /** @brief PwmChannel_LS_GATE3 */
    {
        /* @brief Index in the configuration table of the EMIOS channels */
        (uint8)2,
    },
    /** @brief PwmChannel_HS_PWM_IN1 */
    {
        /* @brief Index in the configuration table of the EMIOS channels */
        (uint8)3,
    },
    /** @brief PwmChannel_REG_WDT_OUT */
    {
        /* @brief Index in the configuration table of the EMIOS channels */
        (uint8)4,
    },
    /** @brief PwmChannel_HS_PWM_IN2 */
    {
        /* @brief Index in the configuration table of the EMIOS channels */
        (uint8)5,
    }
};
/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/
/**
@brief   Pwm high level configuration structure
*/
/*
* @violates @ref Pwm_PBcfg_C_REF_2 external ... could be made static
*/
CONST(Pwm_ConfigType, Pwm_CONST) PwmChannelConfigSet=
{
    /** @brief Number of configured Pwm channels */
    (Pwm_ChannelType)PWM_CONF_CHANNELS_PB,
    /** @brief Pointer to array of Pwm channels */
    &Pwm_Channels_PB,
    /** @brief IP specific configuration */
    {
        /* @brief Pointer to the structure containing EMIOS configuration */
        &Pwm_eMios_IpConfig_PB,
        /* @brief Pointer to Array containing channe IP related information */
        &Pwm_IpChannelConfig_PB 
    }
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    ,
    /** @brief Hw to logic channel map. Array containing a number of elements
    equal to total number of available channels on EMIOS IPV */
    {
      /*---------------------EMIOS_0---------------------------*/
        (Pwm_ChannelType)255,        /* EMIOS_0_0 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_1 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_2 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_3 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_4 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_5 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_6 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_7 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_8 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_9 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_10 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_11 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_12 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_13 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_14 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_15 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_16 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_17 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_18 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_19 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_20 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_21 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_22 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_23 UnUsed */
        (Pwm_ChannelType)3,        /* EMIOS_0_24 */
        (Pwm_ChannelType)5,        /* EMIOS_0_25 */
        (Pwm_ChannelType)255,        /* EMIOS_0_26 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_27 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_28 UnUsed */
        (Pwm_ChannelType)4,        /* EMIOS_0_29 */
        (Pwm_ChannelType)255,        /* EMIOS_0_30 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_0_31 UnUsed */
      /*---------------------EMIOS_1---------------------------*/
        (Pwm_ChannelType)255,        /* EMIOS_1_0 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_1 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_2 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_3 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_4 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_5 UnUsed */
        (Pwm_ChannelType)0,        /* EMIOS_1_6 */
        (Pwm_ChannelType)1,        /* EMIOS_1_7 */
        (Pwm_ChannelType)2,        /* EMIOS_1_8 */
        (Pwm_ChannelType)255,        /* EMIOS_1_9 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_10 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_11 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_12 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_13 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_14 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_15 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_16 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_17 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_18 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_19 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_20 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_21 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_22 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_23 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_24 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_25 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_26 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_27 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_28 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_29 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_30 UnUsed */
        (Pwm_ChannelType)255,        /* EMIOS_1_31 UnUsed */
    }
#endif /* (PWM_NOTIFICATION_SUPPORTED == STD_ON) */  
};

/* @violates @ref Pwm_PBcfg_C_REF_4 Identifier exceeds 31 chars. */
#define PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/** @violates @ref Pwm_PBcfg_C_REF_1 MISRA 2004 Required Rule 19.15, precautions to prevent the 
*   contents of a header file being included twice.*/
/*
* @violates @ref Pwm_PBcfg_C_REF_3 #include statements in a file should
* only be preceded by other preprocessor directives or comments.
*/
#include "Pwm_Memmap.h"


/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                        LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

