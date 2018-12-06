/*====================================================================================================
*   @file    Spi_PBcfg.c
*   @implements Spi_PBcfg.c_Artifact
*   @version 1.0.0
*
*   @brief   AUTOSAR Spi - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup [SPI_MODULE]
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.2 MCAL
*   Platform             : PA
*   Peripheral           : DSPI
*   Dependencies         : 
*
*   Autosar Version      : 4.2.2
*   Autosar Revision     : ASR_REL_4_2_REV_0002
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : MPC574XG_MCAL_1_0_0_RTM_HF10_ASR_REL_4_2_REV_0002_20180827
*
*   (c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017 NXP
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section [global]
* Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely 
* on the significance of more than 31 characters.
*
* @section Spi_PBcfg_c_REF_1
* Violates MISRA 2004 Advisory Rule 19.1,
* #include statements in a file should only be preceded by other preprocessor directives or comments.
* AUTOSAR imposes the specification of the sections in which certain parts of the driver must be placed.
*
* @section Spi_PBcfg_c_REF_2
* Violates MISRA 2004 Required Rule 19.15,
* Precautions shall be taken in order to prevent the contents of a header file being included twice.
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions. The inclusion of MemMap.h is as per Autosar requirement MEMMAP003.
*
* @section Spi_PBcfg_c_REF_3
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are 
* supported for external identifiers.
* This violation is due to the requirement that requests to have a file version check.
*
* @section Spi_PBcfg_c_REF_4
* Violates MISRA 2004 Required Rule 8.10, All declarations and definitions of objects or functions 
* at file scope shall have internal linkage unless external linkage is required.
* The respective code could not be made static because of layers architecture design of the driver.
*
* @section Spi_PBcfg_c_REF_8
* Violates MISRA 2004 Required Rule 8.8,
* An external object or function shall be declared in one and only one file.
*
*/


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Spi.h"
#include "Reg_eSys_DSPI.h"

#if (SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif /* SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */

/*==================================================================================================
*                                    SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define SPI_MODULE_ID_PBCFG_C                        83
#define SPI_VENDOR_ID_PBCFG_C                        43
#define SPI_AR_RELEASE_MAJOR_VERSION_PBCFG_C         4
#define SPI_AR_RELEASE_MINOR_VERSION_PBCFG_C         2
/*
* @violates @ref Spi_PBcfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character 
* signifiance and case sensitivity are supported for external identifiers.
*/

#define SPI_AR_RELEASE_REVISION_VERSION_PBCFG_C      2
#define SPI_SW_MAJOR_VERSION_PBCFG_C                 1
#define SPI_SW_MINOR_VERSION_PBCFG_C                 0
#define SPI_SW_PATCH_VERSION_PBCFG_C                 0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/


/* Check if current file and SPI header file are of the same vendor */
#if (SPI_VENDOR_ID_PBCFG_C != SPI_VENDOR_ID)
    #error "Spi_PBCfg.c and Spi.h have different vendor ids"
#endif
/* Check if current file and SPI header file are of the same Autosar version */
#if ((SPI_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != SPI_AR_RELEASE_MAJOR_VERSION) || \
     (SPI_AR_RELEASE_MINOR_VERSION_PBCFG_C    != SPI_AR_RELEASE_MINOR_VERSION) || \
     (SPI_AR_RELEASE_REVISION_VERSION_PBCFG_C != SPI_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Spi_PBCfg.c and Spi.h are different"
#endif
/* Check if current file and SPI header file are of the same Software version */
#if ((SPI_SW_MAJOR_VERSION_PBCFG_C != SPI_SW_MAJOR_VERSION) || \
     (SPI_SW_MINOR_VERSION_PBCFG_C != SPI_SW_MINOR_VERSION) || \
     (SPI_SW_PATCH_VERSION_PBCFG_C != SPI_SW_PATCH_VERSION))
    #error "Software Version Numbers of Spi_PBCfg.c and Spi.h are different"
#endif

/* Check if current file and Reg_eSys_DSPI.h file are of the same vendor */
#if (SPI_VENDOR_ID_PBCFG_C != SPI_VENDOR_ID_REGFLEX)
    #error "Spi_PBCfg.c and Reg_eSys_DSPI.h have different vendor ids"
#endif
/* Check if current file and Reg_eSys_DSPI.h file are of the same Autosar version */
#if ((SPI_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != SPI_AR_RELEASE_MAJOR_VERSION_REGFLEX) || \
     (SPI_AR_RELEASE_MINOR_VERSION_PBCFG_C    != SPI_AR_RELEASE_MINOR_VERSION_REGFLEX) || \
     (SPI_AR_RELEASE_REVISION_VERSION_PBCFG_C != SPI_AR_RELEASE_REVISION_VERSION_REGFLEX))
    #error "AutoSar Version Numbers of Spi_PBCfg.c and Reg_eSys_DSPI.h are different"
#endif
/* Check if current file and Reg_eSys_DSPI.h file are of the same Software version */
#if ((SPI_SW_MAJOR_VERSION_PBCFG_C != SPI_SW_MAJOR_VERSION_REGFLEX) || \
     (SPI_SW_MINOR_VERSION_PBCFG_C != SPI_SW_MINOR_VERSION_REGFLEX) || \
     (SPI_SW_PATCH_VERSION_PBCFG_C != SPI_SW_PATCH_VERSION_REGFLEX))
    #error "Software Version Numbers of Spi_PBCfg.c and Reg_eSys_DSPI.h are different"
#endif
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#if (SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
/* Check if current file and Dem.h file are of the same Autosar version */
#if ((SPI_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != DEM_AR_RELEASE_MAJOR_VERSION) || \
     (SPI_AR_RELEASE_MINOR_VERSION_PBCFG_C    != DEM_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Spi_PBCfg.c and Dem.h are different"
#endif
#endif /* SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */
#endif


/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
#define SPI_START_SEC_CODE
/*
* @violates @ref Spi_PBcfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_PBcfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
 #include "Spi_MemMap.h"
 


/* Job start Notifications */

/* Job End Notifications */
/* Sequence End Notifications */


#define SPI_STOP_SEC_CODE
/*
* @violates @ref Spi_PBcfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_PBcfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
 #include "Spi_MemMap.h"
 
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#if ((SPI_DMA_USED == STD_ON) && \
    ((SPI_LEVEL_DELIVERED == LEVEL1) || (SPI_LEVEL_DELIVERED == LEVEL2)))
    /*
    * @violates @ref Spi_PBcfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character 
    * signifiance and case sensitivity are supported for external identifiers.
    */    
    #define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
#else
    #define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#endif /* ((SPI_DMA_USED == STD_ON) && ((SPI_LEVEL_DELIVERED == LEVEL1) ||
        (SPI_LEVEL_DELIVERED == LEVEL2))) */

/*
* @violates @ref Spi_PBcfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_PBcfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/

 #include "Spi_MemMap.h"
 



static VAR(Spi_BufferDescriptorType, SPI_VAR) Buffer_PBLFIC_CH;

/* Allocate Buffers for IB Channels (if any) */



static VAR(Spi_BufferDescriptorType, SPI_VAR) Buffer_PBRFIC_CH;

/* Allocate Buffers for IB Channels (if any) */



#if ((SPI_DMA_USED == STD_ON) && \
    ((SPI_LEVEL_DELIVERED == LEVEL1) || (SPI_LEVEL_DELIVERED == LEVEL2)))  
    /*
    * @violates @ref Spi_PBcfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character 
    * signifiance and case sensitivity are supported for external identifiers.
    */    
    #define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
#else
    #define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#endif /* ((SPI_DMA_USED == STD_ON) && ((SPI_LEVEL_DELIVERED == LEVEL1) ||
        (SPI_LEVEL_DELIVERED == LEVEL2))) */

/*
* @violates @ref Spi_PBcfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_PBcfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
 #include "Spi_MemMap.h"
 
#define SPI_START_SEC_VAR_INIT_UNSPECIFIED
/*
* @violates @ref Spi_PBcfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_PBcfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
 #include "Spi_MemMap.h"
 


/*  Buffers Descriptors for IB Channels (if any) */




#define SPI_STOP_SEC_VAR_INIT_UNSPECIFIED
/*
* @violates @ref Spi_PBcfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_PBcfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
 #include "Spi_MemMap.h"
 /*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref Spi_PBcfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_PBcfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
 #include "Spi_MemMap.h"
 



/* SpiChannelConfig_PB0 Channel Configuration of Spi*/
static CONST(Spi_ChannelConfigType, SPI_CONST) SpiChannelConfig_PB0[2] =
{
    {
        /* LFIC_CH*/
        EB,
        (Spi_DataBufferType)0U,
        100U,
        &Buffer_PBLFIC_CH,
        &Spi_aSpiChannelState[0],
       STD_OFF
    },

    {
        /* RFIC_CH*/
        EB,
        (Spi_DataBufferType)0U,
        100U,
        &Buffer_PBRFIC_CH,
        &Spi_aSpiChannelState[1],
       STD_OFF
    }


};



/* Channel to Job Assignment */

static CONST(Spi_ChannelType, SPI_CONST) LFIC_JOB_DATA_ChannelAssignment_PB[1] = {SpiConf_SpiChannel_LFIC_CH};
static CONST(Spi_ChannelType, SPI_CONST) RFIC_JOB_DATA_ChannelAssignment_PB[1] = {SpiConf_SpiChannel_RFIC_CH};



/* SpiJobConfig_PB0 Job Configuration of Spi*/
static CONST(Spi_JobConfigType, SPI_CONST) SpiJobConfig_PB0[2] =
{
    {


        /* LFIC_JOB_DATA */
        (Spi_ChannelType)1u,
        &LFIC_JOB_DATA_ChannelAssignment_PB, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        &Spi_aSpiJobState[0], /* JobState instance */
        CSIB0, /* HWUnit index */
        DSPI_1_OFFSET, /* DSPI device HW unit offset */
        /* External Device Settings */
        
                SPI_LFIC, /* External Device */
        {
                                                                
        
            (uint32)(DSPI_CTAR_CPOL_LOW_U32 | /* Clock Polarity (Idle State) */
                            DSPI_CTAR_CPHA_TRAILING_U32 | /* Clock Phase */
            DSPI_CTAR_PCSCLK_5_U32 | DSPI_CTAR_SCSCLK_8_U32 | /* TimeCs2Clk: Should=1000ns, Is=1000, Error=0.0% */
            DSPI_CTAR_PASC_5_U32 | DSPI_CTAR_SASC_8_U32 | /* TimeClk2Cs: Should=1000ns, Is=1000, Error=0.0% */
            DSPI_CTAR_PDT_1_U32 | DSPI_CTAR_SDT_256_U32 | /* TimeCs2Cs: Should=6400ns, Is=6400, Error=0.0% */
            DSPI_CTAR_PBR_5_U32 | DSPI_CTAR_SBR_4_U32 | DSPI_CTAR_DBR_0_U32), /* Baudrate: Should=2000000.0, Is=2000000, Error=0.0% */

                (uint32)(DSPI_CMD_PCS0_U32 | /* Chip Select Pin Via Peripheral Engine*/     
                    DSPI_CMD_CONTINOUS_TRUE_U32),/* Continuous chip select */
        
                    (uint32)0u  /* Chip select polarity */

                }
        
    },

    {


        /* RFIC_JOB_DATA */
        (Spi_ChannelType)1u,
        &RFIC_JOB_DATA_ChannelAssignment_PB, /* List of Channels */
        NULL_PTR, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        &Spi_aSpiJobState[1], /* JobState instance */
        CSIB1, /* HWUnit index */
        SPI_2_OFFSET, /* DSPI device HW unit offset */
        /* External Device Settings */
        
                SPI_RFIC, /* External Device */
        {
                                                                
        
            (uint32)(DSPI_CTAR_CPOL_LOW_U32 | /* Clock Polarity (Idle State) */
                            DSPI_CTAR_CPHA_TRAILING_U32 | /* Clock Phase */
            DSPI_CTAR_PCSCLK_7_U32 | DSPI_CTAR_SCSCLK_512_U32 | /* TimeCs2Clk: Should=45000ns, Is=44800, Error=-0.44% */
            DSPI_CTAR_PASC_5_U32 | DSPI_CTAR_SASC_512_U32 | /* TimeClk2Cs: Should=35000ns, Is=32000, Error=-8.57% */
            DSPI_CTAR_PDT_3_U32 | DSPI_CTAR_SDT_512_U32 | /* TimeCs2Cs: Should=20000ns, Is=19200, Error=-4.0% */
            DSPI_CTAR_PBR_5_U32 | DSPI_CTAR_SBR_32_U32 | DSPI_CTAR_DBR_0_U32), /* Baudrate: Should=500000.0, Is=500000, Error=0.0% */

                (uint32)(DSPI_CMD_PCS0_U32 | /* Chip Select Pin Via Peripheral Engine*/     
                    DSPI_CMD_CONTINOUS_TRUE_U32),/* Continuous chip select */
        
                    (uint32)0u  /* Chip select polarity */

                }
        
    }


};



/* Job to Sequence Assignment */
static CONST(Spi_JobType, SPI_CONST) LFIC_SEQ_DATA_JobAssignment_PB[1] = {SpiConf_SpiJob_LFIC_JOB_DATA};
static CONST(Spi_JobType, SPI_CONST) RFIC_SEQ_DATA_JobAssignment_PB[1] = {SpiConf_SpiJob_RFIC_JOB_DATA};



/* SpiSequenceConfig_PB0 Sequence Configuration of Spi*/
static CONST(Spi_SequenceConfigType, SPI_CONST) SpiSequenceConfig_PB0[2] =
{
    {  /* LFIC_SEQ_DATA */

        (Spi_JobType)1u,
        &LFIC_SEQ_DATA_JobAssignment_PB, /* List of Jobs */
        NULL_PTR, /* End Notification */
                (uint8)FALSE /* Interruptible */
    },

    {  /* RFIC_SEQ_DATA */

        (Spi_JobType)1u,
        &RFIC_SEQ_DATA_JobAssignment_PB, /* List of Jobs */
        NULL_PTR, /* End Notification */
                (uint8)FALSE /* Interruptible */
    }


};



/* DspiChannelAttributesConfig_PB0 Channel Attribute Configuration of Spi*/
static CONST(Spi_Ipw_ChannelAttributesConfigType, SPI_CONST) DspiChannelAttributesConfig_PB0[2] =
{
    {(uint32)(DSPI_CMD_MSB_U32 | DSPI_CMD_WIDTH_8_U32),SPI_DATA_WIDTH_8},
    {(uint32)(DSPI_CMD_MSB_U32 | DSPI_CMD_WIDTH_8_U32),SPI_DATA_WIDTH_8}

};



/* DspiDeviceAttributesConfig_PB0 Device Attribute Configuration of Spi*/
static CONST(Spi_Ipw_DeviceAttributesConfigType, SPI_CONST) DspiDeviceAttributesConfig_PB0[2] =
{
    {  /* LFIC */
                                                                        
        
            (uint32)(DSPI_CTAR_CPOL_LOW_U32 | /* Clock Polarity (Idle State) */
                            DSPI_CTAR_CPHA_TRAILING_U32 | /* Clock Phase */
            DSPI_CTAR_PCSCLK_5_U32 | DSPI_CTAR_SCSCLK_8_U32 | /* TimeCs2Clk: Should=1000ns, Is=1000, Error=0.0% */
            DSPI_CTAR_PASC_5_U32 | DSPI_CTAR_SASC_8_U32 | /* TimeClk2Cs: Should=1000ns, Is=1000, Error=0.0% */
            DSPI_CTAR_PDT_1_U32 | DSPI_CTAR_SDT_256_U32 | /* TimeCs2Cs: Should=6400ns, Is=6400, Error=0.0% */
            DSPI_CTAR_PBR_5_U32 | DSPI_CTAR_SBR_4_U32 | DSPI_CTAR_DBR_0_U32), /* Baudrate: Should=2000000.0, Is=2000000, Error=0.0% */

                (uint32)(DSPI_CMD_PCS0_U32 | /* Chip Select Pin Via Peripheral Engine*/     
                    DSPI_CMD_CONTINOUS_TRUE_U32),/* Continuous chip select */
        
                    (uint32)0u  /* Chip select polarity */


    },
    {  /* RFIC */
                                                                        
        
            (uint32)(DSPI_CTAR_CPOL_LOW_U32 | /* Clock Polarity (Idle State) */
                            DSPI_CTAR_CPHA_TRAILING_U32 | /* Clock Phase */
            DSPI_CTAR_PCSCLK_7_U32 | DSPI_CTAR_SCSCLK_512_U32 | /* TimeCs2Clk: Should=45000ns, Is=44800, Error=-0.44% */
            DSPI_CTAR_PASC_5_U32 | DSPI_CTAR_SASC_512_U32 | /* TimeClk2Cs: Should=35000ns, Is=32000, Error=-8.57% */
            DSPI_CTAR_PDT_3_U32 | DSPI_CTAR_SDT_512_U32 | /* TimeCs2Cs: Should=20000ns, Is=19200, Error=-4.0% */
            DSPI_CTAR_PBR_5_U32 | DSPI_CTAR_SBR_32_U32 | DSPI_CTAR_DBR_0_U32), /* Baudrate: Should=500000.0, Is=500000, Error=0.0% */

                (uint32)(DSPI_CMD_PCS0_U32 | /* Chip Select Pin Via Peripheral Engine*/     
                    DSPI_CMD_CONTINOUS_TRUE_U32),/* Continuous chip select */
        
                    (uint32)0u  /* Chip select polarity */


    }
};



/* SpiAttributesConfig_PB0 Attribute Configuration of MODULE-CONFIGURATION */
static CONST(Spi_AttributesConfigType, SPI_CONST) SpiAttributesConfig_PB0 = {
    &DspiChannelAttributesConfig_PB0,
    &DspiDeviceAttributesConfig_PB0
};



/* Array of DSPI Unit configurations */
static CONST(Spi_HWUnitConfigType, SPI_CONST) HWUnitConfig_PB[SPI_MAX_HWUNIT] =
{

    { DSPI_1_OFFSET, (uint8)6u, (uint8)SPI_MASTER , SPI_PHYUNIT_SYNC_U32 },

    { SPI_2_OFFSET, (uint8)6u, (uint8)SPI_MASTER , SPI_PHYUNIT_SYNC_U32 }
};




/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/


    
/*
* @violates @ref Spi_PBcfg_c_REF_4 All declarations and definitions of objects or functions 
* at file scope shall have internal linkage unless external linkage is required.
*/
/* MODULE-CONFIGURATION Configuration */
CONST(Spi_ConfigType, SPI_CONST) Spi_PBCfgVariantPredefined =
{
    2u,
    1u,
    1u,
    1u,
    &SpiChannelConfig_PB0,
    &SpiJobConfig_PB0,
    &SpiSequenceConfig_PB0,
    &SpiAttributesConfig_PB0,
    &HWUnitConfig_PB
    /**
    * @brief   DEM error parameters
    */
#if (SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    ,{ (uint32)STD_ON, (uint32)DemConf_DemEventParameter_AutoCreatedDemEvent_SPI_E_HARDWARE_ERROR} /* SPI_E_HARDWARE_ERROR parameters*/ 


#endif /* SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */  
};


#define SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref Spi_PBcfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_PBcfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
 #include "Spi_MemMap.h"
 
#ifdef __cplusplus
}
#endif

/** @} */

