/**
*   @file    Dio_Cfg.h
*   @implements Dio_Cfg.h_Artifact
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Dio configuration header.
*   @details This file is the Autosar DIO driver configuration header. This
*            file is automatically generated, do not modify manually.
*
*   @addtogroup DIO_CFG
*   @{
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

#ifndef DIO_CFG_H
#define DIO_CFG_H

#ifdef __cplusplus
extern "C" {
#endif
/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Dio_Cfg_H_REF_1
*          Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure
*          that 31 character significance and case sensitivity are supported for external identifiers. 
*          The used compilers/linkers allow more than 31 characters significance for external identifiers. 
* 
* @section Dio_Cfg_H_REF_2
*          Violates MISRA 2004 Required Rule 19.15, Repeated include file, 
*          Precautions shall be taken in order to prevent the contents of a header file 
*          being included twice. This violation is not fixed since the inclusion of MemMap.h is as per 
*          Autosar requirement MEMMAP003.
*
* @section Dio_Cfg_H_REF_3
*          Violates MISRA 2004 Required Rule 8.7, Objects shall be defined at block scope 
*          if they are only accessed from within a single function. 
*          These objects are used in various parts of the code.
*
* @section [global]
*          Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not
*          rely on the significance of more than 31 characters. The used compilers use more than
*          31 chars for identifiers.
**/


/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/

#include "Dio_EnvCfg.h"


/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/

#define DIO_VENDOR_ID_CFG                   43
#define DIO_AR_RELEASE_MAJOR_VERSION_CFG    4
#define DIO_AR_RELEASE_MINOR_VERSION_CFG    2
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define DIO_AR_RELEASE_REVISION_VERSION_CFG 2
#define DIO_SW_MAJOR_VERSION_CFG            1
#define DIO_SW_MINOR_VERSION_CFG            0
#define DIO_SW_PATCH_VERSION_CFG            0

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/

/* Dio_EnvCfg.h version check start */
#if ((DIO_AR_RELEASE_MAJOR_VERSION_CFG != DIO_ENVCFG_AR_RELEASE_MAJOR_VERSION) ||   \
     (DIO_AR_RELEASE_MINOR_VERSION_CFG != DIO_ENVCFG_AR_RELEASE_MINOR_VERSION) ||   \
     (DIO_AR_RELEASE_REVISION_VERSION_CFG != DIO_ENVCFG_AR_RELEASE_REVISION_VERSION)\
    )
    #error "AUTOSAR Version Numbers of Dio_Cfg.h and Dio_EnvCfg.h are different"
#endif

#if ((DIO_SW_MAJOR_VERSION_CFG != DIO_ENVCFG_SW_MAJOR_VERSION) || \
     (DIO_SW_MINOR_VERSION_CFG != DIO_ENVCFG_SW_MINOR_VERSION) || \
     (DIO_SW_PATCH_VERSION_CFG != DIO_ENVCFG_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of Dio_Cfg.h and Dio_EnvCfg.h are different"
#endif

#if ((DIO_VENDOR_ID_CFG != DIO_ENVCFG_VENDOR_ID))
    #error "VENDOR ID for Dio_Cfg.h and Dio_EnvCfg.h is different"
#endif
/* Dio_EnvCfg.h version check end */
/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/

/**
* @brief          Enable or Disable Development Error Detection.
*
* @implements     DIO_DEV_ERROR_DETECT_define
* @api
*/
#define DIO_DEV_ERROR_DETECT    (STD_ON)

/**
* @brief          Function @p Dio_GetVersionInfo() enable switch.
*
* @implements DIO_VERSION_INFO_API_define
* @api
*/
#define DIO_VERSION_INFO_API    (STD_ON)

/**
* @brief          Function @p Dio_FlipChannel() enable switch.
*
* @api
*/
#define DIO_FLIP_CHANNEL_API    (STD_ON)

/**
* @brief          Function @p Dio_MaskedWritePort() enable switch.
*
* @api
*/
#define DIO_MASKEDWRITEPORT_API (STD_OFF)

/**
* @brief          Reversed port functionality enable switch.
*
* @implements DIO_REVERSEPORTBITS_define
* @api
*/
#define DIO_REVERSEPORTBITS     (STD_OFF)

/**
* @brief          Undefined pins masking enable switch.
*
* @api
*/
#define DIO_READZERO_UNDEFINEDPORTS (STD_ON)


/**
* @brief          Number of implemented ports.
*
* @note           Used for channel, port and channel group validation.
*
* @api
*/
#define DIO_NUM_PORTS_U16               ((uint16)0xa)

/**
* @brief          Number of channels in a port.
*
* @note           Used for channel, port and channel group validation.
*
* @api
*/
#define DIO_NUM_CHANNELS_PER_PORT_U16   ((uint16)(sizeof(Dio_PortLevelType) * 0x8U))

/**
* @brief          Number of channels available on the implemented ports.
*
* @note           Used for channel validation.
*
* @api
*/
#define DIO_NUM_CHANNELS_U16            ((uint16)(DIO_NUM_PORTS_U16 * DIO_NUM_CHANNELS_PER_PORT_U16))

/**
* @brief          Mask representing no available channels on a port.
*
* @note           Used for channel validation.
*
* @api
*/
#define DIO_NO_AVAILABLE_CHANNELS_U16   ((Dio_PortLevelType)0x0U)

/**
* @brief          Mask representing the maximum valid offset for a channel group.
*
* @note           Used for channel group validation.
*
* @api
*/
#define DIO_MAX_VALID_OFFSET_U8 ((uint8)0xFU)

/**
*   @brief   Enables or disables the access to a hardware register from user mode
*            USER_MODE_SOFT_LOCKING:        All reads to hw registers will be done via REG_PROT, user mode access
*            SUPERVISOR_MODE_SOFT_LOCKING:  Locks the access to the registers only for supervisor mode
*
*   @note    Currently, no register protection mechanism is used for Dio driver.
*/
#define DIO_USER_MODE_SOFT_LOCKING      (STD_OFF)

/**
* @brief          Dio driver Pre-Compile configuration switch.
*
* @api
*/
#define DIO_PRECOMPILE_SUPPORT


/**
* @brief Support for User mode.
*        If this parameter has been configured to 'STD_ON', the Dio driver code can be executed from both supervisor and user mode.
*
*/
#define DIO_ENABLE_USER_MODE_SUPPORT   (STD_OFF)


/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

/**
* @brief          Symbolic name for the configuration Dio_ConfigPC.
*
*/
#define Dio_ConfigPC    (DioConfig)

/* ========== DioConfig ========== */

/* ---------- DioPort_A ---------- */

/**
* @brief          Symbolic name for the port DioPort_A.
*
*/
#define DioConf_DioPort_DioPort_A  ((uint8)0x00U)

/**
* @brief          Symbolic name for the channel LIN6EN.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_LIN6EN ((uint16)0x000eU)

/**
* @brief          Symbolic name for the channel LIN5EN.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_LIN5EN ((uint16)0x000fU)

/**
* @brief          Symbolic name for the channel CAN2STB.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_CAN2STB ((uint16)0x0002U)

/**
* @brief          Symbolic name for the channel Parked_Ctrl.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_Parked_Ctrl ((uint16)0x0005U)

/**
* @brief          Symbolic name for the channel Living_Ctrl.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_Living_Ctrl ((uint16)0x0006U)

/**
* @brief          Symbolic name for the channel V12DCDC_EN.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_V12DCDC_EN ((uint16)0x000cU)

/* ---------- DioPort_B ---------- */

/**
* @brief          Symbolic name for the port DioPort_B.
*
*/
#define DioConf_DioPort_DioPort_B  ((uint8)0x01U)

/* ---------- DioPort_C ---------- */

/**
* @brief          Symbolic name for the port DioPort_C.
*
*/
#define DioConf_DioPort_DioPort_C  ((uint8)0x02U)

/**
* @brief          Symbolic name for the channel LIN_SECURITY_EN.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_LIN_SECURITY_EN ((uint16)0x002cU)

/**
* @brief          Symbolic name for the channel LIN_PWR_FAULTRST.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_LIN_PWR_FAULTRST ((uint16)0x0022U)

/**
* @brief          Symbolic name for the channel LIN_IPS_PWR_SEN.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_LIN_IPS_PWR_SEN ((uint16)0x0023U)

/**
* @brief          Symbolic name for the channel CAN1STB.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_CAN1STB ((uint16)0x0029U)

/* ---------- DioPort_D ---------- */

/**
* @brief          Symbolic name for the port DioPort_D.
*
*/
#define DioConf_DioPort_DioPort_D  ((uint8)0x03U)

/**
* @brief          Symbolic name for the channel LFIC_IRQ.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_LFIC_IRQ ((uint16)0x0031U)

/**
* @brief          Symbolic name for the channel RF_IRQ.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_RF_IRQ ((uint16)0x0030U)

/* ---------- DioPort_E ---------- */

/**
* @brief          Symbolic name for the port DioPort_E.
*
*/
#define DioConf_DioPort_DioPort_E  ((uint8)0x04U)

/**
* @brief          Symbolic name for the channel LIN3_EN.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_LIN3_EN ((uint16)0x004aU)

/**
* @brief          Symbolic name for the channel CAPA_SNSR_OUTPUT_1_2.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_CAPA_SNSR_OUTPUT_1_2 ((uint16)0x0046U)

/**
* @brief          Symbolic name for the channel CAN5STB.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_CAN5STB ((uint16)0x0041U)

/**
* @brief          Symbolic name for the channel CAN6STB.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_CAN6STB ((uint16)0x0042U)

/**
* @brief          Symbolic name for the channel DOOR_ACC_INTERF_1.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_DOOR_ACC_INTERF_1 ((uint16)0x0043U)

/**
* @brief          Symbolic name for the channel DOOR_ACC_INTERF_2.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_DOOR_ACC_INTERF_2 ((uint16)0x0045U)

/**
* @brief          Symbolic name for the channel LF_IC_PWR_SHUTDOWN.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_LF_IC_PWR_SHUTDOWN ((uint16)0x004cU)

/* ---------- DioPort_F ---------- */

/**
* @brief          Symbolic name for the port DioPort_F.
*
*/
#define DioConf_DioPort_DioPort_F  ((uint8)0x05U)

/**
* @brief          Symbolic name for the channel LIN4_EN.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_LIN4_EN ((uint16)0x0058U)

/**
* @brief          Symbolic name for the channel CAN3_STB.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_CAN3_STB ((uint16)0x0059U)

/* ---------- DioPort_G ---------- */

/**
* @brief          Symbolic name for the port DioPort_G.
*
*/
#define DioConf_DioPort_DioPort_G  ((uint8)0x06U)

/**
* @brief          Symbolic name for the channel RFIC_NRES.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_RFIC_NRES ((uint16)0x006aU)

/**
* @brief          Symbolic name for the channel LFIC_NRES.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_LFIC_NRES ((uint16)0x006cU)

/* ---------- DioPort_H ---------- */

/**
* @brief          Symbolic name for the port DioPort_H.
*
*/
#define DioConf_DioPort_DioPort_H  ((uint8)0x07U)

/**
* @brief          Symbolic name for the channel DOWHS_DIAG_EN.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_DOWHS_DIAG_EN ((uint16)0x007bU)

/**
* @brief          Symbolic name for the channel DOWHS_SEL.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_DOWHS_SEL ((uint16)0x007cU)

/**
* @brief          Symbolic name for the channel Parked_PullUPCtrl.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_Parked_PullUPCtrl ((uint16)0x007dU)

/**
* @brief          Symbolic name for the channel LIN1_EN.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_LIN1_EN ((uint16)0x007eU)

/**
* @brief          Symbolic name for the channel Living_PullUPCtrl.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_Living_PullUPCtrl ((uint16)0x007fU)

/* ---------- DioPort_I ---------- */

/**
* @brief          Symbolic name for the port DioPort_I.
*
*/
#define DioConf_DioPort_DioPort_I  ((uint8)0x08U)

/**
* @brief          Symbolic name for the channel DOBHS2_Ctrl.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_DOBHS2_Ctrl ((uint16)0x008bU)

/**
* @brief          Symbolic name for the channel DOBHS3_Ctrl.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_DOBHS3_Ctrl ((uint16)0x008cU)

/**
* @brief          Symbolic name for the channel DOBHS4_Ctrl.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_DOBHS4_Ctrl ((uint16)0x008dU)

/**
* @brief          Symbolic name for the channel IPS_PWR_SEL1.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_IPS_PWR_SEL1 ((uint16)0x0084U)

/**
* @brief          Symbolic name for the channel IPS_PWR_SEL0.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_IPS_PWR_SEL0 ((uint16)0x0085U)

/**
* @brief          Symbolic name for the channel CAN4_STB.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_CAN4_STB ((uint16)0x0087U)

/**
* @brief          Symbolic name for the channel DOBHS1_Ctrl.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_DOBHS1_Ctrl ((uint16)0x0088U)

/**
* @brief          Symbolic name for the channel DOBHS_IPS2_FAULT.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_DOBHS_IPS2_FAULT ((uint16)0x008fU)

/* ---------- DioPort_J ---------- */

/**
* @brief          Symbolic name for the port DioPort_J.
*
*/
#define DioConf_DioPort_DioPort_J  ((uint8)0x09U)

/**
* @brief          Symbolic name for the channel LIN2_EN.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_LIN2_EN ((uint16)0x0094U)

/**
* @brief          Symbolic name for the channel DOBHS_IPS1_FAULT.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_DOBHS_IPS1_FAULT ((uint16)0x0090U)

/**
* @brief          Symbolic name for the channel DOWHS_IPS_FAULT.
*
*/
/** @violates @ref Dio_Cfg_H_REF_1 The compiler/linker shall be checked to ensure that 31
    character significance and case sensitivity are supported for external identifiers. */
#define  DioConf_DioChannel_DOWHS_IPS_FAULT ((uint16)0x0092U)

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/

/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/

/**
* @brief          Type of a DIO port representation.
*
* @implements     Dio_PortType_typedef
*
* @api
*/
typedef uint8 Dio_PortType;

/**
* @brief          Type of a DIO channel representation.
*
* @implements     Dio_ChannelType_typedef
*
* @api
*/
typedef uint16 Dio_ChannelType;

/**
* @brief          Type of a DIO port levels representation.
*
* @implements     Dio_PortLevelType_typedef
*
* @api
*/
typedef uint16 Dio_PortLevelType;

/**
* @brief          Type of a DIO channel levels representation.
*
* @implements     Dio_LevelType_typedef
*
* @api
*/
typedef uint8 Dio_LevelType;

/**
* @brief          Type of a DIO channel group representation.
*
* @implements     Dio_ChannelGroupType_struct
*
* @api
*/
typedef struct
{
    VAR(Dio_PortType, AUTOMATIC)      port;      /**< @brief Port identifier.  */
    VAR(uint8, AUTOMATIC)             offset;    /**< @brief Bit offset within the port. */
    VAR(Dio_PortLevelType, AUTOMATIC) mask;      /**< @brief Group mask. */
} Dio_ChannelGroupType;

/**
* @brief          Type of a DIO configuration structure.
*
* @note           In this implementation there is no need for a configuration
*                 structure there is only a dummy field, it is recommended
*                 to initialize this field to zero.
*
* @implements     Dio_ConfigType_struct
*
* @api
*/
typedef struct
{                                                                       
    VAR(uint8, AUTOMATIC) u8NumChannelGroups; /**< @brief Number of channel groups in configuration */
    P2CONST(Dio_ChannelGroupType, AUTOMATIC, DIO_APPL_CONST) pChannelGroupList;  /**< @brief 
                                               Pointer to list of channel groups in configuration */
} Dio_ConfigType;

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

#define DIO_START_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @violates @ref Dio_Cfg_H_REF_2 Precautions shall be taken in order to prevent
* the contents of a header file being included twice
*/
#include "Dio_MemMap.h"

/**
* @brief Array of bitmaps of output pins available per port
*/
/** @violates @ref Dio_Cfg_H_REF_3 Objects shall be defined at block scope if they are only accessed
    from within a single function. */
extern CONST(Dio_PortLevelType, DIO_CONST) Dio_aAvailablePinsForWrite[DIO_NUM_PORTS_U16];

/**
* @brief Array of bitmaps of input pins available per port
*/
/** @violates @ref Dio_Cfg_H_REF_3 Objects shall be defined at block scope if they are only accessed
    from within a single function. */
extern CONST(Dio_PortLevelType, DIO_CONST) Dio_aAvailablePinsForRead[DIO_NUM_PORTS_U16];

/**
* @brief          List of channel groups in configuration DioConfig.
*/


#define DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @violates @ref Dio_Cfg_H_REF_2 Precautions shall be taken in order to prevent
* the contents of a header file being included twice
*/
#include "Dio_MemMap.h"

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif  /* DIO_CFG_H */

/** @} */
