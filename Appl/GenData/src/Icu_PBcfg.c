/**
 *   @file         Icu_PBCfg.c
 *   @implements Icu_PBCfg.c_Artifact
 *   @version 1.0.0
 *
 *   @brief   AUTOSAR Icu - contains the data exported by the Icu module
 *   @details Contains the information that will be exported by the module, as requested by Autosar.
 *
 *   @addtogroup ICU_MODULE
 *   @{
 */
/*==================================================================================================
 *   Project              : AUTOSAR 4.2 MCAL
 *   Platform             : PA
 *   Peripheral           : eMIOS SIUL2 WKPU
 *   Dependencies         : none
 *
 *   Autosar Version      : 4.2.2
 *   Autosar Revision     : ASR_REL_4_2_REV_0002
 *   Autosar Conf.Variant :
 *   SW Version           : 1.0.0
 *   Build Version        : MPC574XG_MCAL_1_0_0_RTM_HF3_ASR_REL_4_2_REV_0002_20180202
 *
 *   (c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017 NXP
 *   All Rights Reserved.
 =================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/**
 *@page misra_violations MISRA-C:2004 violations
 *
 *@section Icu_PBCfg_c_1
 *          Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments
 *          before "#include". This violation  is not  fixed since  the inclusion  of MemMap.h
 *          is as  per Autosar  requirement MEMMAP003.
 *
 *@section Icu_PBCfg_c_2
 *          Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to prevent
 *          the contents of a header file being included twice
 *          This is not a violation since all header files are protected against multiple inclusions
 *
 * @section Icu_PBCfg_c_3
 *          Violates MISRA 2004 Required Rule 8.10, external ... could be made static
 *          The respective code could not be made static because of layers architecture design of
 *          the driver.
 *
 * @section Icu_PBCfg_c_4
 *          Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure 31
 *          character significance and case sensitivity are supported for external identifiers.
 *          This is not a violation since all the compilers used interpret the identifiers correctly
 *
 * @section Icu_PBCfg_c_5
 *          Violates MISRA 2004 Required Rule 8.8, An external object or function shall be
 *          declared in one and only one file.
 *
 * @section [global]
 *          Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely
 *          on the significance of more than 31 characters. The used compilers use more than 31 chars
 *          for identifiers.
 */
 /*==================================================================================================
 *                                         INCLUDE FILES
 * 1) system and project includes
 * 2) needed interfaces from external units
 * 3) internal and external interfaces from this unit
 *================================================================================================*/
#include "Icu.h"
#include "Icu_Ipw.h"

#if ((ICU_SIGNALMEASUREMENT_USES_DMA == STD_ON) || (ICU_TIMESTAMP_USES_DMA == STD_ON))
#include "CDD_Mcl.h"
#endif

/*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 *================================================================================================*/

#define ICU_VENDOR_ID_PBCFG_C                   43

#define ICU_AR_RELEASE_MAJOR_VERSION_PBCFG_C    4
#define ICU_AR_RELEASE_MINOR_VERSION_PBCFG_C    2
/*
 * @violates @ref Icu_PBCfg_c_4 Identifier clash
 */
#define ICU_AR_RELEASE_REVISION_VERSION_PBCFG_C       2

#define ICU_SW_MAJOR_VERSION_PBCFG_C            1
#define ICU_SW_MINOR_VERSION_PBCFG_C            0
#define ICU_SW_PATCH_VERSION_PBCFG_C            0

/*==================================================================================================
 *                                      FILE VERSION CHECKS
 *================================================================================================*/

/* Check Icu_PBCfg.c against Icu.h file versions */
#if (ICU_VENDOR_ID_PBCFG_C != ICU_VENDOR_ID)
    #error "Icu_PBCfg.c and Icu.h have different vendor IDs"
#endif

#if ((ICU_AR_RELEASE_MAJOR_VERSION_PBCFG_C != ICU_AR_RELEASE_MAJOR_VERSION) || \
     (ICU_AR_RELEASE_MINOR_VERSION_PBCFG_C != ICU_AR_RELEASE_MINOR_VERSION) || \
     (ICU_AR_RELEASE_REVISION_VERSION_PBCFG_C != ICU_AR_RELEASE_REVISION_VERSION))
  #error "AutoSar Version Numbers of Icu_PBCfg.c and Icu.h are different"
#endif

#if ((ICU_SW_MAJOR_VERSION_PBCFG_C != ICU_SW_MAJOR_VERSION) || \
     (ICU_SW_MINOR_VERSION_PBCFG_C != ICU_SW_MINOR_VERSION) || \
     (ICU_SW_PATCH_VERSION_PBCFG_C != ICU_SW_PATCH_VERSION))
       #error "Software Version Numbers of Icu_PBCfg.c  and Icu.h are different"
#endif


/* Check Icu_PBCfg.c against Icu_Ipw.h file versions */
#if (ICU_VENDOR_ID_PBCFG_C != ICU_IPW_VENDOR_ID)
    #error "Icu_PBCfg.c and Icu_Ipw.h have different vendor IDs"
#endif

#if ((ICU_AR_RELEASE_MAJOR_VERSION_PBCFG_C != ICU_IPW_AR_RELEASE_MAJOR_VERSION) || \
     (ICU_AR_RELEASE_MINOR_VERSION_PBCFG_C != ICU_IPW_AR_RELEASE_MINOR_VERSION) || \
     (ICU_AR_RELEASE_REVISION_VERSION_PBCFG_C != ICU_IPW_AR_RELEASE_REVISION_VERSION))
  #error "AutoSar Version Numbers of Icu_PBCfg.c and Icu_Ipw.h are different"
#endif

#if ((ICU_SW_MAJOR_VERSION_PBCFG_C != ICU_IPW_SW_MAJOR_VERSION) || \
     (ICU_SW_MINOR_VERSION_PBCFG_C != ICU_IPW_SW_MINOR_VERSION) || \
     (ICU_SW_PATCH_VERSION_PBCFG_C != ICU_IPW_SW_PATCH_VERSION))
       #error "Software Version Numbers of Icu_PBCfg.c  and Icu_Ipw.h are different"
#endif

/* Check Icu_PBcfg.c against CDD_Mcl.h file versions */
#if ((ICU_SIGNALMEASUREMENT_USES_DMA == STD_ON) || (ICU_TIMESTAMP_USES_DMA == STD_ON))
    #ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
        #if ((ICU_AR_RELEASE_MAJOR_VERSION_PBCFG_C != MCL_AR_RELEASE_MAJOR_VERSION) || \
        (ICU_AR_RELEASE_MINOR_VERSION_PBCFG_C != MCL_AR_RELEASE_MINOR_VERSION) || \
        (ICU_AR_RELEASE_REVISION_VERSION_PBCFG_C != MCL_AR_RELEASE_REVISION_VERSION))
        #error "AutoSar Version Numbers of Icu_PbCfg.c and CDD_Mcl.h are different"
        #endif
    #endif
#endif

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 *================================================================================================*/


/*==================================================================================================
 *                                       LOCAL MACROS
 *================================================================================================*/


/*==================================================================================================
 *                                      LOCAL CONSTANTS
 *================================================================================================*/


/*==================================================================================================
 *                                       LOCAL VARIABLES
 *================================================================================================*/


/*==================================================================================================
 *                                       GLOBAL CONSTANTS
 *================================================================================================*/




#define ICU_START_SEC_CODE
/*
 * @violates @ref Icu_PBCfg_c_1 Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements
 *           and comments before "#include"
 * @violates @ref Icu_PBCfg_c_2 precautions to prevent the contents of a header file being included
 *           twice
 */
#include "Icu_MemMap.h"



/**
 *   @brief External Notifications for Edge Detection
 */

/**
 *  @violates @ref Icu_PBCfg_c_5 violates Misra 8.8 Maybe used in multiple configuration variants
 */
extern FUNC (void, ICU_CODE) CDD_IcuNotification_RFIC_IRQ(void);

                
/**
 *  @violates @ref Icu_PBCfg_c_5 violates Misra 8.8 Maybe used in multiple configuration variants
 */
extern FUNC (void, ICU_CODE) CDD_IcuNotification_LFIC_IRQ(void);

                

#define ICU_STOP_SEC_CODE
/*
 * @violates @ref Icu_PBCfg_c_1 Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements
 *           and comments before "#include"
 * @violates @ref Icu_PBCfg_c_2 precautions to prevent the contents of a header file being included
 *           twice
 */
#include "Icu_MemMap.h"

 #define ICU_START_SEC_CONFIG_DATA_UNSPECIFIED
/*
 * @violates @ref Icu_PBCfg_c_1 Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements
 *           and comments before "#include"
 * @violates @ref Icu_PBCfg_c_2 precautions to prevent the contents of a header file being included
 *           twice
 */
#include "Icu_MemMap.h"



/*
 *  @brief    PB Default Configuration
 *  @violates @ref Icu_PBCfg_c_3 violates Misra 8.10 external ... could be made static
 */
 CONST(Icu_ChannelConfigType, ICU_CONST) Icu_InitChannel_PB[3]=
 {
         /* IcuChannel_0 */
        {
            ((Icu_ParamType)((Icu_ParamType)ICU_RISING_EDGE << ICU_EDGE_PARAM_SHIFT)),
            (Icu_MeasurementModeType)ICU_MODE_EDGE_COUNTER,
            (Icu_MeasurementSubModeType)ICU_RISING_EDGE,
            NULL_PTR,
#if ((ICU_SIGNALMEASUREMENT_USES_DMA == STD_ON) || (ICU_TIMESTAMP_USES_DMA == STD_ON))
(Mcl_ChannelType)            NoMclDmaChannel,
#endif
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON)
            NULL_PTR,
#endif  /* ICU_OVERFLOW_NOTIFICATION_API */
#if (ICU_REPORT_WAKEUP_SOURCE == STD_ON)
            (Icu_WakeupValueType)0U

#endif /* (ICU_REPORT_WAKEUP_SOURCE == STD_ON) */
        },
        /* IcuChannel_LFIC_IRQ */
        {
            ((Icu_ParamType)((Icu_ParamType)ICU_RISING_EDGE << ICU_EDGE_PARAM_SHIFT)),
            (Icu_MeasurementModeType)ICU_MODE_SIGNAL_EDGE_DETECT,
            (Icu_MeasurementSubModeType)0U,
            &CDD_IcuNotification_LFIC_IRQ,
#if ((ICU_SIGNALMEASUREMENT_USES_DMA == STD_ON) || (ICU_TIMESTAMP_USES_DMA == STD_ON))
(Mcl_ChannelType)            NoMclDmaChannel,
#endif
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON)
            NULL_PTR,
#endif  /* ICU_OVERFLOW_NOTIFICATION_API */
#if (ICU_REPORT_WAKEUP_SOURCE == STD_ON)
            (Icu_WakeupValueType)0U

#endif /* (ICU_REPORT_WAKEUP_SOURCE == STD_ON) */
        },
        /* IcuChannel_RFIC_IRQ */
        {
            ((Icu_ParamType)((Icu_ParamType)ICU_RISING_EDGE << ICU_EDGE_PARAM_SHIFT)),
            (Icu_MeasurementModeType)ICU_MODE_SIGNAL_EDGE_DETECT,
            (Icu_MeasurementSubModeType)0U,
            &CDD_IcuNotification_RFIC_IRQ,
#if ((ICU_SIGNALMEASUREMENT_USES_DMA == STD_ON) || (ICU_TIMESTAMP_USES_DMA == STD_ON))
(Mcl_ChannelType)            NoMclDmaChannel,
#endif
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON)
            NULL_PTR,
#endif  /* ICU_OVERFLOW_NOTIFICATION_API */
#if (ICU_REPORT_WAKEUP_SOURCE == STD_ON)
            (Icu_WakeupValueType)0U

#endif /* (ICU_REPORT_WAKEUP_SOURCE == STD_ON) */
        }

 };







/*
 *  @brief    PB Default EMIOS Configuration
 *  @violates @ref Icu_PBCfg_c_3 violates Misra 8.10 external ... could be made static
 *  @violates @ref Icu_PBCfg_c_4 violates Misra 1.4 Identifier clash
 */
 CONST(Icu_eMios_ChannelConfigType, ICU_CONST) Icu_eMios_ChannelConfig_PB[1] =
 {
    
    /** @brief IcuChannel_0 */
    {
        /** @brief eMios HW Module and Channel used by the Icu channel */
        ICU_EMIOS_0_CH_0,
        /** @brief eMios channel configuration parameters */
        ((Icu_eMios_ControlType)((Icu_eMios_ControlType)EMIOS_PRESCALER_DIVIDE_1 << ICU_EMIOS_PRESCALER_PARAM_SHIFT)
         | (Icu_eMios_ControlType)((Icu_eMios_ControlType)EMIOS_DIGITAL_FILTER_BYPASSED << ICU_EMIOS_DIG_FILTER_PARAM_SHIFT)
         | (Icu_eMios_ControlType)((Icu_eMios_ControlType)EMIOS_BUS_INTERNAL_COUNTER << ICU_EMIOS_BUS_SELECT_PARAM_SHIFT)),
        (uint8)ICU_RISING_EDGE,
        (boolean)FALSE
    }

 };
/*
 *  @violates @ref Icu_PBCfg_c_3 violates Misra 8.10 external ... could be made static
 */
 CONST(Icu_eMios_IpConfigType, ICU_CONST) Icu_eMiosIcu_IpConfig_PB =
 {
    /** @brief Number of eMios channels in the Icu configuration */
    (uint8)1,
    /** @brief Pointer to the array of eMios enabled Icu channel configurations */
    &Icu_eMios_ChannelConfig_PB
 };




    /** @brief No Siul2 channels configured */



/*
 *  @brief    PB Default WKPU Configuration
 *  @violates @ref Icu_PBCfg_c_3 violates Misra 8.10 external ... could be made static
 */
 CONST(Icu_Wkpu_ChannelConfigType, ICU_CONST) Icu_Wkpu_ChannelConfig_PB[2] =
 {
        /** @brief IcuChannel_LFIC_IRQ */
    {
        /** @brief Wkpu HW Module and Channel used by the Icu channel */
        ICU_WKPU_CH_28,
        /** @brief Wkpu Default Start Edge */
        (uint8)ICU_RISING_EDGE,
        /** @brief Siul2 channel configuration parameters */
        (Icu_Wkpu_ControlType)0U
    },
    /** @brief IcuChannel_RFIC_IRQ */
    {
        /** @brief Wkpu HW Module and Channel used by the Icu channel */
        ICU_WKPU_CH_27,
        /** @brief Wkpu Default Start Edge */
        (uint8)ICU_RISING_EDGE,
        /** @brief Siul2 channel configuration parameters */
        (Icu_Wkpu_ControlType)0U
    }

 };
/*
 *  @violates @ref Icu_PBCfg_c_3 violates Misra 8.10 external ... could be made static
 */
 CONST(Icu_Wkpu_IpConfigType, ICU_CONST) Icu_WkpuIcu_IpConfig_PB =
 {
    /** @brief Number of Wkpu channels in the Icu configuration */
    (uint8)2,
    /** @brief Pointer to the array of Wkpu enabled Icu channel configurations */
    &Icu_Wkpu_ChannelConfig_PB
 };


/*
 * @brief   Icu channels IP related configuration array
 * @violates @ref Icu_PBCfg_c_3 violates Misra 8.10 external ... could be made static
 */
 CONST(Icu_IpChannelConfigType, ICU_CONST) Icu_IpChannelConfig_PB[3] =
 {
    
    /** @brief IcuChannel_0 */
    {
        /** @brief IP type of this channel */
        ICU_EMIOS_CHANNEL,
        /** @brief Index in the configuration table of the eMios channels */
        (uint8)0,
    },

    /** @brief IcuChannel_LFIC_IRQ */
    {
        /** @brief IP type of this channel */
        ICU_WKPU_CHANNEL,
        /** @brief Index in the configuration table of the Ukpu channels */
        (uint8)0,
    },

    /** @brief IcuChannel_RFIC_IRQ */
    {
        /** @brief IP type of this channel */
        ICU_WKPU_CHANNEL,
        /** @brief Index in the configuration table of the Ukpu channels */
        (uint8)1,
    }

 };

/*
 *   @brief This index relates the Hardware channels with the respective ICU channel.
 *   When an normal interrupt is asserted this index is used to locate the corresponding ICU channel
 *
 *  @violates @ref Icu_PBCfg_c_3 external ... could be made static
 */


/*
 * @violates @ref Icu_PBCfg_c_3 violates Misra 8.10 external ... could be made static
 */
CONST(Icu_ChannelType,ICU_CONST) Icu_InitHWMap_PB[ICU_MAX_HW_CHANNELS] = {
  IcuChannel_0, /* maps to EMIOS_0_CH_0 */
  NoIcuChannel, /* maps to EMIOS_0_CH_1 */
  NoIcuChannel, /* maps to EMIOS_0_CH_2 */
  NoIcuChannel, /* maps to EMIOS_0_CH_3 */
  NoIcuChannel, /* maps to EMIOS_0_CH_4 */
  NoIcuChannel, /* maps to EMIOS_0_CH_5 */
  NoIcuChannel, /* maps to EMIOS_0_CH_6 */
  NoIcuChannel, /* maps to EMIOS_0_CH_7 */
  NoIcuChannel, /* maps to EMIOS_0_CH_8 */
  NoIcuChannel, /* maps to EMIOS_0_CH_9 */
  NoIcuChannel, /* maps to EMIOS_0_CH_10 */
  NoIcuChannel, /* maps to EMIOS_0_CH_11 */
  NoIcuChannel, /* maps to EMIOS_0_CH_12 */
  NoIcuChannel, /* maps to EMIOS_0_CH_13 */
  NoIcuChannel, /* maps to EMIOS_0_CH_14 */
  NoIcuChannel, /* maps to EMIOS_0_CH_15 */
  NoIcuChannel, /* maps to EMIOS_0_CH_16 */
  NoIcuChannel, /* maps to EMIOS_0_CH_17 */
  NoIcuChannel, /* maps to EMIOS_0_CH_18 */
  NoIcuChannel, /* maps to EMIOS_0_CH_19 */
  NoIcuChannel, /* maps to EMIOS_0_CH_20 */
  NoIcuChannel, /* maps to EMIOS_0_CH_21 */
  NoIcuChannel, /* maps to EMIOS_0_CH_22 */
  NoIcuChannel, /* maps to EMIOS_0_CH_23 */
  NoIcuChannel, /* maps to EMIOS_0_CH_24 */
  NoIcuChannel, /* maps to EMIOS_0_CH_25 */
  NoIcuChannel, /* maps to EMIOS_0_CH_26 */
  NoIcuChannel, /* maps to EMIOS_0_CH_27 */
  NoIcuChannel, /* maps to EMIOS_0_CH_28 */
  NoIcuChannel, /* maps to EMIOS_0_CH_29 */
  NoIcuChannel, /* maps to EMIOS_0_CH_30 */
  NoIcuChannel, /* maps to EMIOS_0_CH_31 */
  NoIcuChannel, /* maps to EMIOS_1_CH_0 */
  NoIcuChannel, /* maps to EMIOS_1_CH_1 */
  NoIcuChannel, /* maps to EMIOS_1_CH_2 */
  NoIcuChannel, /* maps to EMIOS_1_CH_3 */
  NoIcuChannel, /* maps to EMIOS_1_CH_4 */
  NoIcuChannel, /* maps to EMIOS_1_CH_5 */
  NoIcuChannel, /* maps to EMIOS_1_CH_6 */
  NoIcuChannel, /* maps to EMIOS_1_CH_7 */
  NoIcuChannel, /* maps to EMIOS_1_CH_8 */
  NoIcuChannel, /* maps to EMIOS_1_CH_9 */
  NoIcuChannel, /* maps to EMIOS_1_CH_10 */
  NoIcuChannel, /* maps to EMIOS_1_CH_11 */
  NoIcuChannel, /* maps to EMIOS_1_CH_12 */
  NoIcuChannel, /* maps to EMIOS_1_CH_13 */
  NoIcuChannel, /* maps to EMIOS_1_CH_14 */
  NoIcuChannel, /* maps to EMIOS_1_CH_15 */
  NoIcuChannel, /* maps to EMIOS_1_CH_16 */
  NoIcuChannel, /* maps to EMIOS_1_CH_17 */
  NoIcuChannel, /* maps to EMIOS_1_CH_18 */
  NoIcuChannel, /* maps to EMIOS_1_CH_19 */
  NoIcuChannel, /* maps to EMIOS_1_CH_20 */
  NoIcuChannel, /* maps to EMIOS_1_CH_21 */
  NoIcuChannel, /* maps to EMIOS_1_CH_22 */
  NoIcuChannel, /* maps to EMIOS_1_CH_23 */
  NoIcuChannel, /* maps to EMIOS_1_CH_24 */
  NoIcuChannel, /* maps to EMIOS_1_CH_25 */
  NoIcuChannel, /* maps to EMIOS_1_CH_26 */
  NoIcuChannel, /* maps to EMIOS_1_CH_27 */
  NoIcuChannel, /* maps to EMIOS_1_CH_28 */
  NoIcuChannel, /* maps to EMIOS_1_CH_29 */
  NoIcuChannel, /* maps to EMIOS_1_CH_30 */
  NoIcuChannel, /* maps to EMIOS_1_CH_31 */
  NoIcuChannel, /* maps to EMIOS_2_CH_0 */
  NoIcuChannel, /* maps to EMIOS_2_CH_1 */
  NoIcuChannel, /* maps to EMIOS_2_CH_2 */
  NoIcuChannel, /* maps to EMIOS_2_CH_3 */
  NoIcuChannel, /* maps to EMIOS_2_CH_4 */
  NoIcuChannel, /* maps to EMIOS_2_CH_5 */
  NoIcuChannel, /* maps to EMIOS_2_CH_6 */
  NoIcuChannel, /* maps to EMIOS_2_CH_7 */
  NoIcuChannel, /* maps to EMIOS_2_CH_8 */
  NoIcuChannel, /* maps to EMIOS_2_CH_9 */
  NoIcuChannel, /* maps to EMIOS_2_CH_10 */
  NoIcuChannel, /* maps to EMIOS_2_CH_11 */
  NoIcuChannel, /* maps to EMIOS_2_CH_12 */
  NoIcuChannel, /* maps to EMIOS_2_CH_13 */
  NoIcuChannel, /* maps to EMIOS_2_CH_14 */
  NoIcuChannel, /* maps to EMIOS_2_CH_15 */
  NoIcuChannel, /* maps to EMIOS_2_CH_16 */
  NoIcuChannel, /* maps to EMIOS_2_CH_17 */
  NoIcuChannel, /* maps to EMIOS_2_CH_18 */
  NoIcuChannel, /* maps to EMIOS_2_CH_19 */
  NoIcuChannel, /* maps to EMIOS_2_CH_20 */
  NoIcuChannel, /* maps to EMIOS_2_CH_21 */
  NoIcuChannel, /* maps to EMIOS_2_CH_22 */
  NoIcuChannel, /* maps to EMIOS_2_CH_23 */
  NoIcuChannel, /* maps to EMIOS_2_CH_24 */
  NoIcuChannel, /* maps to EMIOS_2_CH_25 */
  NoIcuChannel, /* maps to EMIOS_2_CH_26 */
  NoIcuChannel, /* maps to EMIOS_2_CH_27 */
  NoIcuChannel, /* maps to EMIOS_2_CH_28 */
  NoIcuChannel, /* maps to EMIOS_2_CH_29 */
  NoIcuChannel, /* maps to EMIOS_2_CH_30 */
  NoIcuChannel, /* maps to EMIOS_2_CH_31 */
  NoIcuChannel, /* maps to IRQ_CH_0 */
  NoIcuChannel, /* maps to IRQ_CH_1 */
  NoIcuChannel, /* maps to IRQ_CH_2 */
  NoIcuChannel, /* maps to IRQ_CH_3 */
  NoIcuChannel, /* maps to IRQ_CH_4 */
  NoIcuChannel, /* maps to IRQ_CH_5 */
  NoIcuChannel, /* maps to IRQ_CH_6 */
  NoIcuChannel, /* maps to IRQ_CH_7 */
  NoIcuChannel, /* maps to IRQ_CH_8 */
  NoIcuChannel, /* maps to IRQ_CH_9 */
  NoIcuChannel, /* maps to IRQ_CH_10 */
  NoIcuChannel, /* maps to IRQ_CH_11 */
  NoIcuChannel, /* maps to IRQ_CH_12 */
  NoIcuChannel, /* maps to IRQ_CH_13 */
  NoIcuChannel, /* maps to IRQ_CH_14 */
  NoIcuChannel, /* maps to IRQ_CH_15 */
  NoIcuChannel, /* maps to IRQ_CH_16 */
  NoIcuChannel, /* maps to IRQ_CH_17 */
  NoIcuChannel, /* maps to IRQ_CH_18 */
  NoIcuChannel, /* maps to IRQ_CH_19 */
  NoIcuChannel, /* maps to IRQ_CH_20 */
  NoIcuChannel, /* maps to IRQ_CH_21 */
  NoIcuChannel, /* maps to IRQ_CH_22 */
  NoIcuChannel, /* maps to IRQ_CH_23 */
  NoIcuChannel, /* maps to IRQ_CH_24 */
  NoIcuChannel, /* maps to IRQ_CH_25 */
  NoIcuChannel, /* maps to IRQ_CH_26 */
  NoIcuChannel, /* maps to IRQ_CH_27 */
  NoIcuChannel, /* maps to IRQ_CH_28 */
  NoIcuChannel, /* maps to IRQ_CH_29 */
  NoIcuChannel, /* maps to IRQ_CH_30 */
  NoIcuChannel, /* maps to IRQ_CH_31 */
  NoIcuChannel, /* maps to WKPU_CH_0 */
  NoIcuChannel, /* maps to WKPU_CH_1 */
  NoIcuChannel, /* maps to WKPU_CH_2 */
  NoIcuChannel, /* maps to WKPU_CH_3 */
  NoIcuChannel, /* maps to WKPU_CH_4 */
  NoIcuChannel, /* maps to WKPU_CH_5 */
  NoIcuChannel, /* maps to WKPU_CH_6 */
  NoIcuChannel, /* maps to WKPU_CH_7 */
  NoIcuChannel, /* maps to WKPU_CH_8 */
  NoIcuChannel, /* maps to WKPU_CH_9 */
  NoIcuChannel, /* maps to WKPU_CH_10 */
  NoIcuChannel, /* maps to WKPU_CH_11 */
  NoIcuChannel, /* maps to WKPU_CH_12 */
  NoIcuChannel, /* maps to WKPU_CH_13 */
  NoIcuChannel, /* maps to WKPU_CH_14 */
  NoIcuChannel, /* maps to WKPU_CH_15 */
  NoIcuChannel, /* maps to WKPU_CH_16 */
  NoIcuChannel, /* maps to WKPU_CH_17 */
  NoIcuChannel, /* maps to WKPU_CH_18 */
  NoIcuChannel, /* maps to WKPU_CH_19 */
  NoIcuChannel, /* maps to WKPU_CH_20 */
  NoIcuChannel, /* maps to WKPU_CH_21 */
  NoIcuChannel, /* maps to WKPU_CH_22 */
  NoIcuChannel, /* maps to WKPU_CH_23 */
  NoIcuChannel, /* maps to WKPU_CH_24 */
  NoIcuChannel, /* maps to WKPU_CH_25 */
  NoIcuChannel, /* maps to WKPU_CH_26 */
  IcuChannel_RFIC_IRQ, /* maps to WKPU_CH_27 */
  IcuChannel_LFIC_IRQ, /* maps to WKPU_CH_28 */
  NoIcuChannel, /* maps to WKPU_CH_29 */
  NoIcuChannel, /* maps to WKPU_CH_30 */
  NoIcuChannel  /* maps to WKPU_CH_31 */
};




/*
 *   @brief Pre-Compile Default Configuration
 *   @violates @ref Icu_PBCfg_c_3 external ... could be made static
 */

 CONST(Icu_ConfigType, ICU_CONST) IcuConfigSet=
 {
    (Icu_ChannelType)3, /* The number of channels configured*/

    &Icu_InitChannel_PB,
    {
    /** @brief Pointer to the structure containing eMios configuration */
        &Icu_eMiosIcu_IpConfig_PB,
    /** @brief Pointer to the structure containing Siul2 configuration */
        NULL_PTR,
    /** @brief Pointer to the structure containing Wkpu configuration */
        &Icu_WkpuIcu_IpConfig_PB,
        /** @brief Pointer to Array containing channel IP related information */
        &Icu_IpChannelConfig_PB
    },
    &Icu_InitHWMap_PB
 };
#define ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*
 * @violates @ref Icu_PBCfg_c_1 Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements
 *           and comments before "#include"
 * @violates @ref Icu_PBCfg_c_2 precautions to prevent the contents of a header file being included
 *           twice
 */
#include "Icu_MemMap.h"
/*==================================================================================================
 *                                       GLOBAL VARIABLES
 *================================================================================================*/



/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 *================================================================================================*/


/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 *================================================================================================*/

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 *================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */
