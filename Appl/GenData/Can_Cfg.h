/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Can
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Can_Cfg.h
 *   Generation Time: 2018-11-22 20:14:46
 *           Project: CBD1800194D00 - Version 1.0
 *          Delivery: CBD1800194_D01
 *      Tool Version: DaVinci Configurator (beta) 5.17.51 SP2
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Pro and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

/* -----------------------------------------------------------------------------
    Generator Info
 ----------------------------------------------------------------------------- 
  Name:     MICROSAR Can Flexcan3 driver Generator
  Version:  3.06.00
  MSN:      Can
  Origin:   CAN
  Descrip:  MICROSAR Can driver generator
  JavaPack: com.vector.cfg.gen.DrvCan_ImxFlexcan3Asr
 ----------------------------------------------------------------------------- */

#if !defined(CAN_CFG_H)
#define CAN_CFG_H

/* CAN222, CAN389, CAN365, CAN366, CAN367 */
/* CAN022, CAN047, CAN388, CAN397, CAN390, CAN392  */

/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_MSR_5.1_779 */

/* -----------------------------------------------------------------------------
    Includes
 ----------------------------------------------------------------------------- */

#include "ComStack_Types.h"

#include "Can_GeneralTypes.h" /* CAN435 */

#if defined (CAN_LCFG_SOURCE) || defined (C_DRV_INTERNAL) /* ESCAN00070085 */
# include "Os.h"
#endif

/* -----------------------------------------------------------------------------
    General Switches for CAN module
 ----------------------------------------------------------------------------- */

#ifndef CAN_USE_DUMMY_FUNCTIONS
#define CAN_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef CAN_USE_DUMMY_STATEMENT
#define CAN_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef CAN_DUMMY_STATEMENT
#define CAN_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CAN_DUMMY_STATEMENT_CONST
#define CAN_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CAN_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define CAN_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef CAN_ATOMIC_VARIABLE_ACCESS
#define CAN_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef CAN_PROCESSOR_MPC5746C
#define CAN_PROCESSOR_MPC5746C
#endif
#ifndef CAN_COMP_DIAB
#define CAN_COMP_DIAB
#endif
#ifndef CAN_GEN_GENERATOR_MSR
#define CAN_GEN_GENERATOR_MSR
#endif
#ifndef CAN_CPUTYPE_BITORDER_MSB2LSB
#define CAN_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef CAN_CONFIGURATION_VARIANT_PRECOMPILE
#define CAN_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef CAN_CONFIGURATION_VARIANT_LINKTIME
#define CAN_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef CAN_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define CAN_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef CAN_CONFIGURATION_VARIANT
#define CAN_CONFIGURATION_VARIANT CAN_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef CAN_POSTBUILD_VARIANT_SUPPORT
#define CAN_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/* -----------------------------------------------------------------------------
    General Switches from old v_cfg.h
 ----------------------------------------------------------------------------- */
#if !defined(V_GEN_GENERATOR5)
# define V_GEN_GENERATOR5 /* need by LL */
#endif
#if !defined(V_ENABLE_CAN_ASR_ABSTRACTION)
# define V_ENABLE_CAN_ASR_ABSTRACTION /* ATK */
#endif
#define CAN_GEN_COM_STACK_LIB

#if !defined( V_OSTYPE_AUTOSAR )
# define V_OSTYPE_AUTOSAR
#endif

#if (CPU_TYPE == CPU_TYPE_32)
# if !defined( C_CPUTYPE_32BIT )
#  define C_CPUTYPE_32BIT
# endif
#endif
#if (CPU_TYPE == CPU_TYPE_16)
# if !defined( C_CPUTYPE_16BIT )
#  define C_CPUTYPE_16BIT
# endif
#endif
#if (CPU_TYPE == CPU_TYPE_8)
# if !defined( C_CPUTYPE_8BIT )
#  define C_CPUTYPE_8BIT
# endif
#endif
#if (CPU_BIT_ORDER == LSB_FIRST)
# if !defined( C_CPUTYPE_BITORDER_LSB2MSB )
#  define C_CPUTYPE_BITORDER_LSB2MSB
# endif
#endif
#if (CPU_BIT_ORDER == MSB_FIRST)
# if !defined( C_CPUTYPE_BITORDER_MSB2LSB )
#  define C_CPUTYPE_BITORDER_MSB2LSB
# endif
#endif
#if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
# if !defined( C_CPUTYPE_LITTLEENDIAN )
#  define C_CPUTYPE_LITTLEENDIAN
# endif
#endif
#if (CPU_BYTE_ORDER == HIGH_BYTE_FIRST)
# if !defined( C_CPUTYPE_BIGENDIAN )
#  define C_CPUTYPE_BIGENDIAN
# endif
#endif

#if !defined( V_DISABLE_USE_DUMMY_FUNCTIONS )
# define V_DISABLE_USE_DUMMY_FUNCTIONS
#endif
#if !defined( V_DISABLE_USE_DUMMY_STATEMENT )
# define V_DISABLE_USE_DUMMY_STATEMENT
#endif

#if !defined( V_CPU_MPC5700 )
# define V_CPU_MPC5700
#endif

#if !defined( C_PROCESSOR_MPC5746C )
# define C_PROCESSOR_MPC5746C
#endif
#if !defined( V_PROCESSOR_MPC5746C )
# define V_PROCESSOR_MPC5746C
#endif

#if !defined( C_COMP_DIABDATA_MPC5700_FLEXCAN3 )
#define C_COMP_DIABDATA_MPC5700_FLEXCAN3
#endif
#if !defined( V_COMP_DIABDATA )
# define V_COMP_DIABDATA
#endif
#if !defined( V_COMP_DIABDATA_MPC5700 )
# define V_COMP_DIABDATA_MPC5700
#endif

#if !defined( V_SUPPRESS_EXTENDED_VERSION_CHECK )
# define V_SUPPRESS_EXTENDED_VERSION_CHECK
#endif

/* -----------------------------------------------------------------------------
    Version defines
 ----------------------------------------------------------------------------- */

/* CAN024, CAN023 */
#define CAN_ASR_VERSION              0x0400U
#define CAN_GEN_BASE_CFG5_VERSION    0x0103U
#define CAN_GEN_BASESASR_VERSION     0x0407U
#define CAN_GEN_ImxFlexcan3Asr_VERSION              0x0101U
#define CAN_MICROSAR_VERSION         CAN_MSR403

/* -----------------------------------------------------------------------------
    Hardcoded defines
 ----------------------------------------------------------------------------- */

#define CAN_INSTANCE_ID           0

#if !defined(CAN_RX_BASICCAN_TYPE)
# define CAN_RX_BASICCAN_TYPE                 0U
# define CAN_RX_FULLCAN_TYPE                  1U
# define CAN_TX_BASICCAN_TYPE                 2U
# define CAN_TX_FULLCAN_TYPE                  3U
# define CAN_UNUSED_CAN_TYPE                  4U
#endif
#if !defined(CAN_TX_BASICCAN_MUX_TYPE)
# define CAN_TX_BASICCAN_MUX_TYPE             5U
#endif

#define CAN_INTERRUPT                        0U
#define CAN_POLLING                          1U

#define kCanChannelNotUsed                     CAN_NO_CANIFCHANNELID 

#define CAN_NONE                             0U
/* RAM check (also  none) */
#define CAN_NOTIFY_ISSUE                     1U
#define CAN_NOTIFY_MAILBOX                   2U
#define CAN_EXTENDED                         3U
/* Interrupt lock (also  none) */
#define CAN_DRIVER                           1U
#define CAN_APPL                             2U
#define CAN_BOTH                             3U
/* MicroSar Version */
#define CAN_MSR30                            30U
#define CAN_MSR40                            40U
#define CAN_MSR403                           403U
/* Overrun Notification (als none,appl) */
#define CAN_DET                              1U
/* CAN FD Support */
#define CAN_BRS                              1U
#define CAN_FULL                             2U
/* CAN FD Configuration */
#define CAN_FD_RXONLY                        2U /* FD Baudrate exist (RX) */
#define CAN_FD_RXTX                          1U /* FD Baudrate also used for TX */
/* Generic Confirmation */
#define CAN_API1                             1U
#define CAN_API2                             2U

#define CAN_OS_TICK2MS(tick)     OS_TICKS2MS_SystemTimer((tick))     /* PRQA S 3453 */ /* MD_Can_3453 */
#define CAN_OS_COUNTER_ID        SystemTimer

/* -----------------------------------------------------------------------------
    Defines / Switches
 ----------------------------------------------------------------------------- */

/* Version and Issue detection */
#define CAN_VERSION_INFO_API                 STD_OFF   /* CAN106_Conf */
#define CAN_DEV_ERROR_DETECT                 STD_OFF   /* CAN064_Conf */
#define CAN_DEV_ERROR_REPORT                 STD_OFF
#define CAN_PROD_ERROR_DETECT                STD_OFF
#define CAN_DEV_TIMEOUT_DETECT               STD_OFF
#define CAN_SAFE_BSW                         STD_OFF

/* Interrupt / Polling */
#define CAN_TX_PROCESSING                    CAN_INTERRUPT   /* CAN318_Conf */
#define CAN_RX_PROCESSING                    CAN_INTERRUPT   /* CAN317_Conf */
#define CAN_BUSOFF_PROCESSING                CAN_INTERRUPT   /* CAN314_Conf */
#define CAN_WAKEUP_PROCESSING                CAN_INTERRUPT   /* CAN319_Conf */
#define CAN_INDIVIDUAL_PROCESSING            STD_OFF
#define CAN_INTERRUPT_USED                   STD_ON
#define CAN_NESTED_INTERRUPTS                STD_OFF
#define C_ENABLE_OSEK_OS_INTCAT2
#define C_DISABLE_ISRVOID
#define CAN_INTLOCK                          CAN_DRIVER

/* Tx Handling */
#define CAN_MULTIPLEXED_TX_MAX               1U
#define CAN_CANCEL_SUPPORT_API               STD_ON
#define CAN_TRANSMIT_BUFFER                  STD_ON
#define CAN_MULTIPLEXED_TRANSMISSION         STD_OFF   /* CAN095_Conf */
#define CAN_HW_TRANSMIT_CANCELLATION         STD_OFF   /* CAN069_Conf */
#define CAN_IDENTICAL_ID_CANCELLATION        STD_OFF   /* CAN378_Conf */
#define CAN_MULTIPLE_BASICCAN_TX             STD_OFF

/* Rx Handling */
#define CAN_MULTIPLE_BASICCAN                STD_OFF
#define CAN_RX_QUEUE                         STD_OFF
#define CAN_OVERRUN_NOTIFICATION             CAN_NONE

/* Sleep Wakeup */
#define CAN_SLEEP_SUPPORT                    STD_OFF
#define CAN_WAKEUP_SUPPORT                   STD_OFF   /* CAN330_Conf */

/* Hardware loop check */
#define CAN_HARDWARE_CANCELLATION            STD_ON
#define CAN_TIMEOUT_DURATION                 10UL   /* CAN113_Conf */
#define CAN_LOOP_MAX                         5U

/* Appl calls */
#define CAN_EXTENDED_STATE_MACHINE           STD_OFF
#define CAN_BUSOFF_SUPPORT_API               STD_OFF
#define CAN_HW_LOOP_SUPPORT_API              STD_OFF
#define CAN_GENERIC_PRECOPY                  STD_OFF
#define CAN_GENERIC_CONFIRMATION             STD_OFF
#define CAN_GENERIC_PRETRANSMIT              STD_OFF
#define CAN_USE_OS_INTERRUPT_CONTROL         STD_OFF

/* Optimization */
#define CAN_RX_FULLCAN_OBJECTS               STD_ON
#define CAN_TX_FULLCAN_OBJECTS               STD_ON
#define CAN_RX_BASICCAN_OBJECTS              STD_ON
#define CAN_EXTENDED_ID                      STD_ON
#define CAN_MIXED_ID                         STD_ON
#define CAN_ONE_CONTROLLER_OPTIMIZATION      STD_OFF
#define CAN_DYNAMIC_FULLCAN_ID               STD_ON
#define CAN_SECURE_TEMP_BUFFER               STD_OFF
#define C_ENABLE_GEN_HW_START_STOP_IDX
#define CAN_CHANGE_BAUDRATE_API              STD_OFF   /* CAN460_Conf */

/* CAN FD */
#define CAN_SET_BAUDRATE_API                 STD_OFF   /* CAN482_Conf */
#define CAN_FD_SUPPORT                       CAN_NONE

/* Other */
#define CAN_MULTI_ECU_CONFIG                 STD_OFF
#define CAN_COMMON_CAN                       STD_OFF
#define CAN_PARTIAL_NETWORK                  STD_OFF
#define CAN_RAM_CHECK                        CAN_NONE
#define CAN_REINIT_START                     STD_OFF
#define CAN_GET_STATUS                       STD_OFF
#define CAN_RUNTIME_MEASUREMENT_SUPPORT      STD_OFF
#define CAN_PROTECTED_MODE                   STD_ON
#define CAN_MIRROR_MODE                      STD_OFF
#define CAN_SILENT_MODE                      STD_OFF
/* -----------------------------------------------------------------------------
    Channel And Maibox
 ----------------------------------------------------------------------------- */
#ifndef C_DRV_INTERNAL
# ifndef kCanNumberOfChannels
#  define kCanNumberOfChannels               5U
# endif
# ifndef kCanNumberOfHwChannels
#  define kCanNumberOfHwChannels             5U
# endif
#endif
#ifndef kCanNumberOfUsedChannels /* ATK only */
# define kCanNumberOfUsedChannels            5U
#endif

#define kCanPhysToLogChannelIndex_0 1u
#define kCanPhysToLogChannelIndex_1 3u
#define kCanPhysToLogChannelIndex_2 2u
#define kCanPhysToLogChannelIndex_4 0u
#define kCanPhysToLogChannelIndex_7 4u

#define kCanNumberOfPhysChannels             8U

/* -----------------------------------------------------------------------------
    Symbolic Name Values for Controller, HardwareObject and Baudrates
 ----------------------------------------------------------------------------- */
/* These definitions can change at Link-time and Post-build configuration time. Use them wisely. */



/**
 * \defgroup CanHandleIdsactivated Handle IDs of handle space activated.
 * \brief controllers by CanControllerActivation
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define CanConf_CanController_CT_Backbone1J1939_198bcf1c              0
#define CanConf_CanController_CT_Backbone2_34cfe263                   4
#define CanConf_CanController_CT_CabSubnet_d2ff0fbe                   1
#define CanConf_CanController_CT_FMSNet_119a8706                      3
#define CanConf_CanController_CT_SecuritySubnet_f5346ae6              2
/**\} */
#define CanConf_CN_Backbone1J1939_0b1f4bae_Tx 4U
#define CanConf_CN_Backbone1J1939_6e8ec372_Rx 5U
#define CanConf_CN_Backbone2_78967e2c_Tx 129U
#define CanConf_CN_Backbone2_7b3866ec_Rx 139U
#define CanConf_CN_CabSubnet_9ea693f1_Tx 58U
#define CanConf_CN_CabSubnet_eedbadff_Rx 59U
#define CanConf_CN_FMSNet_41e51372_Rx 126U
#define CanConf_CN_FMSNet_fce1aae5_Tx 125U
#define CanConf_CN_SecuritySubnet_3840872e_Rx 94U
#define CanConf_CN_SecuritySubnet_e7a0ee54_Tx 93U
#define CanConf_CanHardwareObject_AIR1_X_CIOMFMS_oFMSNet_9b1ec537_Tx 110U
#define CanConf_CanHardwareObject_AMB_X_CIOMFMS_oFMSNet_f6109b97_Tx 119U
#define CanConf_CanHardwareObject_AT1T1I1_X_CIOMFMS_oFMSNet_4f6adf75_Tx 107U
#define CanConf_CanHardwareObject_AckmTxPdu_Backbone1J1939_54966c1b 0U
#define CanConf_CanHardwareObject_AckmTxPdu_FMSNet_J1939_44d89c3b 95U
#define CanConf_CanHardwareObject_Alarm_Sec_03S_FCM_Tp_oSecuritySubnet_48e47132_Tx 63U
#define CanConf_CanHardwareObject_Alarm_Sec_06S_FCM_Tp_oSecuritySubnet_a3ee35ea_Tx 71U
#define CanConf_CanHardwareObject_Alarm_Sec_07S_FCM_Tp_oSecuritySubnet_94ec21d2_Tx 73U
#define CanConf_CanHardwareObject_AnmMsg_CIOM_CabSubnet_oCabSubnet_e295c8bd_Tx 43U
#define CanConf_CanHardwareObject_AnmMsg_CIOM_SecuritySubnet_oSecuritySubnet_d0267e59_Tx 81U
#define CanConf_CanHardwareObject_CCM_Cab_03P_FCM_Tp_oCabSubnet_af75b436_Tx 7U
#define CanConf_CanHardwareObject_CCVS_X_CIOMFMS_oFMSNet_1dbcfa70_Tx 117U
#define CanConf_CanHardwareObject_CIOM_BB1_01P_oBackbone1J1939_55a00301_Tx 2U
#define CanConf_CanHardwareObject_CIOM_BB2_29P_oBackbone2_bfae97b8_Tx 127U
#define CanConf_CanHardwareObject_CIOM_Cab_01P_oCabSubnet_c1019bea_Tx 10U
#define CanConf_CanHardwareObject_CIOM_Cab_02P_oCabSubnet_694518ea_Tx 6U
#define CanConf_CanHardwareObject_CIOM_Cab_03P_oCabSubnet_0e8699ea_Tx 11U
#define CanConf_CanHardwareObject_CIOM_Cab_04S_Tp_oCabSubnet_e3ca2569_Tx 12U
#define CanConf_CanHardwareObject_CIOM_Cab_05S_Tp_oCabSubnet_e74407ff_Tx 13U
#define CanConf_CanHardwareObject_CIOM_Cab_06P_oCabSubnet_2d3a1aab_Tx 14U
#define CanConf_CanHardwareObject_CIOM_Cab_07P_oCabSubnet_4af99bab_Tx 25U
#define CanConf_CanHardwareObject_CIOM_Cab_08P_oCabSubnet_2e3c1e68_Tx 26U
#define CanConf_CanHardwareObject_CIOM_Cab_09P_oCabSubnet_49ff9f68_Tx 17U
#define CanConf_CanHardwareObject_CIOM_Cab_10P_oCabSubnet_a6a5d96b_Tx 21U
#define CanConf_CanHardwareObject_CIOM_Cab_11S_Tp_oCabSubnet_ec1435f4_Tx 28U
#define CanConf_CanHardwareObject_CIOM_Cab_12P_oCabSubnet_6922db6b_Tx 29U
#define CanConf_CanHardwareObject_CIOM_Cab_13S_Tp_oCabSubnet_e50870d8_Tx 30U
#define CanConf_CanHardwareObject_CIOM_Cab_14P_oCabSubnet_e2dadb2a_Tx 31U
#define CanConf_CanHardwareObject_CIOM_Cab_15P_oCabSubnet_85195a2a_Tx 32U
#define CanConf_CanHardwareObject_CIOM_Cab_16P_oCabSubnet_2d5dd92a_Tx 36U
#define CanConf_CanHardwareObject_CIOM_Cab_17P_oCabSubnet_4a9e582a_Tx 37U
#define CanConf_CanHardwareObject_CIOM_Cab_18P_oCabSubnet_2e5bdde9_Tx 38U
#define CanConf_CanHardwareObject_CIOM_Cab_19P_oCabSubnet_49985ce9_Tx 39U
#define CanConf_CanHardwareObject_CIOM_Cab_20S_Tp_oCabSubnet_c323df97_Tx 40U
#define CanConf_CanHardwareObject_CIOM_Cab_21P_oCabSubnet_c1ce1ce8_Tx 41U
#define CanConf_CanHardwareObject_CIOM_Cab_22P_oCabSubnet_698a9fe8_Tx 24U
#define CanConf_CanHardwareObject_CIOM_Cab_23P_oCabSubnet_0e491ee8_Tx 19U
#define CanConf_CanHardwareObject_CIOM_Cab_24P_oCabSubnet_e2729fa9_Tx 22U
#define CanConf_CanHardwareObject_CIOM_Cab_25S_Tp_oCabSubnet_d5957759_Tx 33U
#define CanConf_CanHardwareObject_CIOM_Cab_26P_oCabSubnet_2df59da9_Tx 20U
#define CanConf_CanHardwareObject_CIOM_Cab_27P_oCabSubnet_4a361ca9_Tx 18U
#define CanConf_CanHardwareObject_CIOM_Cab_28S_oCabSubnet_0dafccc7_Tx 8U
#define CanConf_CanHardwareObject_CIOM_Cab_29S_Tp_oCabSubnet_e3dce9b1_Tx 15U
#define CanConf_CanHardwareObject_CIOM_Cab_30S_Tp_oCabSubnet_da4b67c4_Tx 34U
#define CanConf_CanHardwareObject_CIOM_Cab_31P_oCabSubnet_c1a9df69_Tx 23U
#define CanConf_CanHardwareObject_CIOM_Cab_32P_oCabSubnet_69ed5c69_Tx 9U
#define CanConf_CanHardwareObject_CIOM_Cab_33P_oCabSubnet_0e2edd69_Tx 16U
#define CanConf_CanHardwareObject_CIOM_Cab_34P_Tp_oCabSubnet_377e6916_Tx 35U
#define CanConf_CanHardwareObject_CIOM_Sec_01P_oSecuritySubnet_de08418d_Tx 60U
#define CanConf_CanHardwareObject_CIOM_Sec_02P_oSecuritySubnet_04f0ad2a_Tx 79U
#define CanConf_CanHardwareObject_CIOM_Sec_03P_oSecuritySubnet_4d58f6b7_Tx 78U
#define CanConf_CanHardwareObject_CIOM_Sec_04P_oSecuritySubnet_6a707225_Tx 61U
#define CanConf_CanHardwareObject_CIOM_Sec_05S_Tp_oSecuritySubnet_c8b553a6_Tx 76U
#define CanConf_CanHardwareObject_CIOM_Sec_06S_Tp_oSecuritySubnet_39a2f744_Tx 64U
#define CanConf_CanHardwareObject_CIOM_Sec_07S_Tp_oSecuritySubnet_69506b1a_Tx 68U
#define CanConf_CanHardwareObject_CIOM_Sec_08S_Tp_oSecuritySubnet_eafb50f2_Tx 62U
#define CanConf_CanHardwareObject_CIOM_Sec_09S_Tp_oSecuritySubnet_ba09ccac_Tx 65U
#define CanConf_CanHardwareObject_CIOM_Sec_10S_Tp_oSecuritySubnet_8c7f36ae_Tx 66U
#define CanConf_CanHardwareObject_CIOM_Sec_11S_Tp_oSecuritySubnet_dc8daaf0_Tx 67U
#define CanConf_CanHardwareObject_CIOM_Sec_12S_Tp_oSecuritySubnet_2d9a0e12_Tx 69U
#define CanConf_CanHardwareObject_CL_X_CIOMFMS_oFMSNet_fc518547_Tx 99U
#define CanConf_CanHardwareObject_CVW_X_CIOMFMS_oFMSNet_5e9635e8_Tx 109U
#define CanConf_CanHardwareObject_DDM_Sec_03S_FCM_Tp_oSecuritySubnet_5a2ee2bf_Tx 70U
#define CanConf_CanHardwareObject_DDM_Sec_04S_FCM_Tp_oSecuritySubnet_eddd4cee_Tx 72U
#define CanConf_CanHardwareObject_DDM_Sec_05S_FCM_Tp_oSecuritySubnet_d14dc345_Tx 74U
#define CanConf_CanHardwareObject_DD_X_CIOMFMS_oFMSNet_95f62c09_Tx 120U
#define CanConf_CanHardwareObject_DebugCtrl1_SCIM_BB2_oBackbone2_139697c4_Rx 138U
#define CanConf_CanHardwareObject_DebugCtrl2_SCIM_BB2_oBackbone2_57e784a1_Rx 137U
#define CanConf_CanHardwareObject_DebugCtrl3_SCIM_BB2_oBackbone2_dd1877bd_Rx 136U
#define CanConf_CanHardwareObject_DebugCtrl4_SCIM_BB2_oBackbone2_df05a26b_Rx 135U
#define CanConf_CanHardwareObject_DebugCtrl5_SCIM_BB2_oBackbone2_55fa5177_Rx 134U
#define CanConf_CanHardwareObject_DebugCtrl6_SCIM_BB2_oBackbone2_118b4212_Rx 133U
#define CanConf_CanHardwareObject_DebugCtrl7_SCIM_BB2_oBackbone2_9b74b10e_Rx 132U
#define CanConf_CanHardwareObject_DebugCtrl8_SCIM_BB2_oBackbone2_15b0e9be_Rx 131U
#define CanConf_CanHardwareObject_DebugCtrl9_SCIM_BB2_oBackbone2_9f4f1aa2_Rx 130U
#define CanConf_CanHardwareObject_DiagReqMsgIntHMIIOM_26_F3_Cab_Tp_oCabSubnet_2e1f9ada_Tx 45U
#define CanConf_CanHardwareObject_DiagReqMsgIntHMIIOM_53_F3_Cab_Tp_oCabSubnet_e9059d48_Tx 48U
#define CanConf_CanHardwareObject_DiagReqMsgIntHMIIOM_98_F3_Cab_Tp_oCabSubnet_2daafb4e_Tx 51U
#define CanConf_CanHardwareObject_DiagReqMsgIntHMIIOM_A0_F3_Sec_Tp_oSecuritySubnet_09265670_Tx 83U
#define CanConf_CanHardwareObject_DiagReqMsgIntHMIIOM_A1_F3_Sec_Tp_oSecuritySubnet_a1b03b66_Tx 86U
#define CanConf_CanHardwareObject_DiagReqMsgIntHMIIOM_A2_F3_Cab_Tp_oCabSubnet_fcbc8d7d_Tx 54U
#define CanConf_CanHardwareObject_DiagReqMsgIntHMIIOM_C0_F3_Sec_Tp_oSecuritySubnet_3aaf1649_Tx 89U
#define CanConf_CanHardwareObject_DiagReqMsgIntTGW2_26_F4_Cab_Tp_oCabSubnet_b42402a4_Tx 46U
#define CanConf_CanHardwareObject_DiagReqMsgIntTGW2_53_F4_Cab_Tp_oCabSubnet_75ef26c1_Tx 49U
#define CanConf_CanHardwareObject_DiagReqMsgIntTGW2_98_F4_Cab_Tp_oCabSubnet_2e8c3543_Tx 52U
#define CanConf_CanHardwareObject_DiagReqMsgIntTGW2_A0_F4_Sec_Tp_oSecuritySubnet_8adef0bc_Tx 84U
#define CanConf_CanHardwareObject_DiagReqMsgIntTGW2_A1_F4_Sec_Tp_oSecuritySubnet_eb89cc56_Tx 87U
#define CanConf_CanHardwareObject_DiagReqMsgIntTGW2_A2_F4_Cab_Tp_oCabSubnet_fc611706_Tx 55U
#define CanConf_CanHardwareObject_DiagReqMsgIntTGW2_C0_F4_Sec_Tp_oSecuritySubnet_0ba24808_Tx 90U
#define CanConf_CanHardwareObject_EEC14_X_CIOMFMS_oFMSNet_3551b912_Tx 106U
#define CanConf_CanHardwareObject_EEC1_X_CIOMFMS_oFMSNet_954d78de_Tx 97U
#define CanConf_CanHardwareObject_EEC2_X_CIOMFMS_oFMSNet_d3e60e6a_Tx 96U
#define CanConf_CanHardwareObject_ERC1_x_EMSRetFMS_oFMSNet_d863a207_Tx 101U
#define CanConf_CanHardwareObject_ERC1_x_RECUFMS_oFMSNet_338e7918_Tx 102U
#define CanConf_CanHardwareObject_ET1_X_CIOMFMS_oFMSNet_ff39068f_Tx 116U
#define CanConf_CanHardwareObject_FMS1_X_CIOMFMS_oFMSNet_fb3c9fbd_Tx 104U
#define CanConf_CanHardwareObject_FMS_X_CIOMFMS_oFMSNet_68f86b37_Tx 124U
#define CanConf_CanHardwareObject_FcNPdu_Backbone1J1939_dba64907 1U
#define CanConf_CanHardwareObject_HOURS_X_CIOMFMS_oFMSNet_bfc991fc_Tx 113U
#define CanConf_CanHardwareObject_HRLFC_X_CIOMFMS_oFMSNet_c55a7a2b_Tx 103U
#define CanConf_CanHardwareObject_IntTesterTGW2FuncDiagMsg_Cab_Tp_oCabSubnet_96ec8334_Tx 57U
#define CanConf_CanHardwareObject_IntTesterTGW2FuncDiagMsg_Sec_Tp_oSecuritySubnet_57d96404_Tx 92U
#define CanConf_CanHardwareObject_J1939NmTxPdu_2068bfea 100U
#define CanConf_CanHardwareObject_J1939NmTxPdu_fa509995 3U
#define CanConf_CanHardwareObject_LFC_X_CIOMFMS_oFMSNet_16e703d3_Tx 114U
#define CanConf_CanHardwareObject_LFE_X_CIOMFMS_oFMSNet_adac24c8_Tx 118U
#define CanConf_CanHardwareObject_NmAsr_CIOM_BB2_oBackbone2_9b0338b4_Tx 128U
#define CanConf_CanHardwareObject_NmAsr_CIOM_Cab_oCabSubnet_153d3c7d_Tx 42U
#define CanConf_CanHardwareObject_NmAsr_CIOM_Sec_oSecuritySubnet_dae88b7d_Tx 80U
#define CanConf_CanHardwareObject_PDM_Sec_03S_FCM_Tp_oSecuritySubnet_2750bd9e_Tx 75U
#define CanConf_CanHardwareObject_PDM_Sec_04S_FCM_Tp_oSecuritySubnet_90a313cf_Tx 77U
#define CanConf_CanHardwareObject_PTODE_X_CIOMFMS_oFMSNet_8abc23b8_Tx 105U
#define CanConf_CanHardwareObject_PhysDiagReqMsg_26_F2_Cab_Tp_oCabSubnet_e2a6386f_Tx 44U
#define CanConf_CanHardwareObject_PhysDiagReqMsg_53_F1_Cab_Tp_oCabSubnet_682570ce_Tx 27U
#define CanConf_CanHardwareObject_PhysDiagReqMsg_53_F2_Cab_Tp_oCabSubnet_9abe6f67_Tx 47U
#define CanConf_CanHardwareObject_PhysDiagReqMsg_98_F2_Cab_Tp_oCabSubnet_4c51814f_Tx 50U
#define CanConf_CanHardwareObject_PhysDiagReqMsg_A0_F2_Sec_Tp_oSecuritySubnet_cb87d97b_Tx 82U
#define CanConf_CanHardwareObject_PhysDiagReqMsg_A1_F2_Sec_Tp_oSecuritySubnet_5d2e792a_Tx 85U
#define CanConf_CanHardwareObject_PhysDiagReqMsg_A2_F2_Cab_Tp_oCabSubnet_6d74e481_Tx 53U
#define CanConf_CanHardwareObject_PhysDiagReqMsg_C0_F2_Sec_Tp_oSecuritySubnet_f27248ff_Tx 88U
#define CanConf_CanHardwareObject_SERV_X_CIOMFMS_oFMSNet_0f3b4ff2_Tx 111U
#define CanConf_CanHardwareObject_TCO1_X_CIOMFMS_oFMSNet_567baf3d_Tx 98U
#define CanConf_CanHardwareObject_TPCM_Tp_oFMSNet_55e2f930_Tx 123U
#define CanConf_CanHardwareObject_TPDT_Tp_oFMSNet_3018618a_Tx 122U
#define CanConf_CanHardwareObject_TPDirect_0FE6B_Tp_oFMSNet_5c137171_Tx 108U
#define CanConf_CanHardwareObject_TesterFuncDiagMsg_Cab_Tp_oCabSubnet_d293ecaa_Tx 56U
#define CanConf_CanHardwareObject_TesterFuncDiagMsg_Sec_Tp_oSecuritySubnet_7f5a7347_Tx 91U
#define CanConf_CanHardwareObject_VDHR_X_CIOMFMS_oFMSNet_67a02fb8_Tx 112U
#define CanConf_CanHardwareObject_VP236_X_CIOMFMS_oFMSNet_524bf569_Tx 121U
#define CanConf_CanHardwareObject_VW_X_CIOMFMS_oFMSNet_06d77621_Tx 115U

#define CanConf_ControllerBaudrateConfig_CT_Backbone1J1939_198bcf1c_CanControllerBaudrateConfig 0u
#define CanConf_ControllerBaudrateConfig_CT_CabSubnet_d2ff0fbe_CanControllerBaudrateConfig 0u
#define CanConf_ControllerBaudrateConfig_CT_SecuritySubnet_f5346ae6_CanControllerBaudrateConfig 0u
#define CanConf_ControllerBaudrateConfig_CT_FMSNet_119a8706_CanControllerBaudrateConfig 0u
#define CanConf_ControllerBaudrateConfig_CT_Backbone2_34cfe263_CanControllerBaudrateConfig 0u



/* -----------------------------------------------------------------------------
    Types
 ----------------------------------------------------------------------------- */
/* HW specific BEGIN */
/* Hw specific defines */
#define C_DISABLE_TASD
#define C_DISABLE_GLITCH_FILTER
#define C_DISABLE_FLEXCAN_STOP_MODE
#define C_DISABLE_FLEXCAN_PARITY_CHECK_AVAILABLE
#define C_ENABLE_MB32TO63
#define C_ENABLE_MB64TO95
#define C_DISABLE_MB96TO127
#define C_DISABLE_ASYM_MAILBOXES

#if !defined( C_ENABLE_EXTENDED_BITTIMING ) && !defined( C_DISABLE_EXTENDED_BITTIMING )
# define C_ENABLE_EXTENDED_BITTIMING
#endif

#define C_DISABLE_WORKAROUND_ERR005829

#define C_DISABLE_ISO_CANFD

typedef struct tCanLLCanIntOldTag
{
  uint32 flags1;
  uint32 flags2;
  uint32 flags3;
  uint32 canctrl1;
  uint16 canmcr;
} tCanLLCanIntOld;

typedef struct tCanRxMsgBufferTag
{
  uint16 control;
  uint16 timestamp;
  uint32 msgID;
  uint32 data[2];
} tCanRxMsgBuffer;
 
/* HW specific END */ 

typedef VAR(uint16, TYPEDEF) CanChannelHandle;

#if defined (CAN_LCFG_SOURCE) || defined (C_DRV_INTERNAL)
typedef TickType Can_ExternalTickType;
#else
typedef uint32 Can_ExternalTickType;
#endif

typedef VAR(Can_ExternalTickType, TYPEDEF) Can_LoopTimeout_dim_type[CAN_LOOP_MAX+1];         /* (ASR3: without +1) PRQA S 0850 */ /* MD_MSR_19.8 */






/* -----------------------------------------------------------------------------
    CONST Declarations
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    VAR Declarations
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    Hw specific
 ----------------------------------------------------------------------------- */
/* HW specific BEGIN */

/* HW specific END */


/**********************************************************************************************************************
  ComStackLib
**********************************************************************************************************************/
/* Can_GlobalConfig: CAN354_Conf */
/* Can_ConfigType: CAN413 */

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanPCDataSwitches  Can Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CAN_ACTIVESENDOBJECT                                          STD_ON
#define CAN_PDUOFACTIVESENDOBJECT                                     STD_ON
#define CAN_STATEOFACTIVESENDOBJECT                                   STD_ON
#define CAN_BASEDLL_GENERATORVERSION                                  STD_ON
#define CAN_CANIFCHANNELID                                            STD_ON
#define CAN_CONTROLLERCONFIG                                          STD_ON
#define CAN_BASEADDRESSOFCONTROLLERCONFIG                             STD_ON
#define CAN_CANCONTROLLERDEFAULTBAUDRATEIDXOFCONTROLLERCONFIG         STD_OFF  /**< Deactivateable: 'Can_ControllerConfig.CanControllerDefaultBaudrateIdx' Reason: '/ActiveEcuC/Can/CanGeneral[0:CanSetBaudrateApi] is configured to 'false'' */
#define CAN_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG            STD_ON
#define CAN_INTERRUPTMASK1OFCONTROLLERCONFIG                          STD_ON
#define CAN_INTERRUPTMASK2OFCONTROLLERCONFIG                          STD_ON
#define CAN_INTERRUPTMASK3OFCONTROLLERCONFIG                          STD_ON
#define CAN_MAILBOXRXBASICENDIDXOFCONTROLLERCONFIG                    STD_ON
#define CAN_MAILBOXRXBASICLENGTHOFCONTROLLERCONFIG                    STD_ON
#define CAN_MAILBOXRXBASICSTARTIDXOFCONTROLLERCONFIG                  STD_ON
#define CAN_MAILBOXRXBASICUSEDOFCONTROLLERCONFIG                      STD_ON
#define CAN_MAILBOXRXFULLENDIDXOFCONTROLLERCONFIG                     STD_ON
#define CAN_MAILBOXRXFULLLENGTHOFCONTROLLERCONFIG                     STD_ON
#define CAN_MAILBOXRXFULLSTARTIDXOFCONTROLLERCONFIG                   STD_ON
#define CAN_MAILBOXRXFULLUSEDOFCONTROLLERCONFIG                       STD_ON
#define CAN_MAILBOXTXBASICENDIDXOFCONTROLLERCONFIG                    STD_ON
#define CAN_MAILBOXTXBASICLENGTHOFCONTROLLERCONFIG                    STD_ON
#define CAN_MAILBOXTXBASICSTARTIDXOFCONTROLLERCONFIG                  STD_ON
#define CAN_MAILBOXTXBASICUSEDOFCONTROLLERCONFIG                      STD_ON
#define CAN_MAILBOXTXFULLENDIDXOFCONTROLLERCONFIG                     STD_ON
#define CAN_MAILBOXTXFULLLENGTHOFCONTROLLERCONFIG                     STD_ON
#define CAN_MAILBOXTXFULLSTARTIDXOFCONTROLLERCONFIG                   STD_ON
#define CAN_MAILBOXTXFULLUSEDOFCONTROLLERCONFIG                       STD_ON
#define CAN_MAILBOXUNUSEDENDIDXOFCONTROLLERCONFIG                     STD_ON
#define CAN_MAILBOXUNUSEDLENGTHOFCONTROLLERCONFIG                     STD_ON
#define CAN_MAILBOXUNUSEDSTARTIDXOFCONTROLLERCONFIG                   STD_ON
#define CAN_MAILBOXUNUSEDUSEDOFCONTROLLERCONFIG                       STD_ON
#define CAN_NUMBEROFFILTERSOFCONTROLLERCONFIG                         STD_ON
#define CAN_NUMBEROFFULLCONFIGURABLEFILTERSOFCONTROLLERCONFIG         STD_ON
#define CAN_NUMBEROFMAXMAILBOXESOFCONTROLLERCONFIG                    STD_ON
#define CAN_PROTECTEDAREAIDOFCONTROLLERCONFIG                         STD_ON
#define CAN_RFFNOFCONTROLLERCONFIG                                    STD_ON
#define CAN_RXBASICHWSTARTOFCONTROLLERCONFIG                          STD_ON
#define CAN_RXBASICHWSTOPOFCONTROLLERCONFIG                           STD_ON
#define CAN_RXFULLHWSTARTOFCONTROLLERCONFIG                           STD_ON
#define CAN_RXFULLHWSTOPOFCONTROLLERCONFIG                            STD_ON
#define CAN_TXBASICHWSTARTOFCONTROLLERCONFIG                          STD_ON
#define CAN_TXBASICHWSTOPOFCONTROLLERCONFIG                           STD_ON
#define CAN_TXFULLHWSTARTOFCONTROLLERCONFIG                           STD_ON
#define CAN_TXFULLHWSTOPOFCONTROLLERCONFIG                            STD_ON
#define CAN_UNUSEDHWSTARTOFCONTROLLERCONFIG                           STD_ON
#define CAN_UNUSEDHWSTOPOFCONTROLLERCONFIG                            STD_ON
#define CAN_CONTROLLERDATA                                            STD_ON
#define CAN_BUSOFFCOUNTEROFCONTROLLERDATA                             STD_ON
#define CAN_CANINTERRUPTCOUNTEROFCONTROLLERDATA                       STD_ON
#define CAN_CANINTERRUPTOLDSTATUSOFCONTROLLERDATA                     STD_ON
#define CAN_ISBUSOFFOFCONTROLLERDATA                                  STD_ON
#define CAN_ISHARDWARECANCELEDOFCONTROLLERDATA                        STD_ON
#define CAN_LASTINITOBJECTOFCONTROLLERDATA                            STD_ON
#define CAN_LOGSTATUSOFCONTROLLERDATA                                 STD_ON
#define CAN_LOOPTIMEOUTOFCONTROLLERDATA                               STD_ON
#define CAN_RXMSGBUFFEROFCONTROLLERDATA                               STD_ON
#define CAN_STARTMODEREQUESTEDOFCONTROLLERDATA                        STD_ON
#define CAN_STATUSREQOFCONTROLLERDATA                                 STD_ON
#define CAN_FINALMAGICNUMBER                                          STD_OFF  /**< Deactivateable: 'Can_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_INITBASICCAN                                              STD_ON
#define CAN_INITCODEOFINITBASICCAN                                    STD_ON
#define CAN_INITMASKOFINITBASICCAN                                    STD_ON
#define CAN_INITBASICCANINDEX                                         STD_ON
#define CAN_INITDATAHASHCODE                                          STD_OFF  /**< Deactivateable: 'Can_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_INITOBJECT                                                STD_ON
#define CAN_CBTOFINITOBJECT                                           STD_ON
#define CAN_CONTROL1OFINITOBJECT                                      STD_ON
#define CAN_INITOBJECTBAUDRATE                                        STD_ON
#define CAN_INITOBJECTSTARTINDEX                                      STD_ON
#define CAN_MAILBOX                                                   STD_ON
#define CAN_CONTROLLERCONFIGIDXOFMAILBOX                              STD_ON
#define CAN_DLC_FIFOOFMAILBOX                                         STD_ON
#define CAN_HWHANDLEOFMAILBOX                                         STD_ON
#define CAN_IDVALUEOFMAILBOX                                          STD_ON
#define CAN_MAILBOXTYPEOFMAILBOX                                      STD_ON
#define CAN_MAXDATALENOFMAILBOX                                       STD_ON
#define CAN_PLATFORMDLL_GENERATORVERSION                              STD_ON
#define CAN_SIZEOFACTIVESENDOBJECT                                    STD_ON
#define CAN_SIZEOFCANIFCHANNELID                                      STD_ON
#define CAN_SIZEOFCONTROLLERCONFIG                                    STD_ON
#define CAN_SIZEOFCONTROLLERDATA                                      STD_ON
#define CAN_SIZEOFINITBASICCAN                                        STD_ON
#define CAN_SIZEOFINITBASICCANINDEX                                   STD_ON
#define CAN_SIZEOFINITOBJECT                                          STD_ON
#define CAN_SIZEOFINITOBJECTBAUDRATE                                  STD_ON
#define CAN_SIZEOFINITOBJECTSTARTINDEX                                STD_ON
#define CAN_SIZEOFMAILBOX                                             STD_ON
#define CAN_SIZEOFTXOFFSETHWTOLOG                                     STD_ON
#define CAN_TXOFFSETHWTOLOG                                           STD_ON
#define CAN_PCCONFIG                                                  STD_ON
#define CAN_ACTIVESENDOBJECTOFPCCONFIG                                STD_ON
#define CAN_BASEDLL_GENERATORVERSIONOFPCCONFIG                        STD_ON
#define CAN_CANIFCHANNELIDOFPCCONFIG                                  STD_ON
#define CAN_CONTROLLERCONFIGOFPCCONFIG                                STD_ON
#define CAN_CONTROLLERDATAOFPCCONFIG                                  STD_ON
#define CAN_FINALMAGICNUMBEROFPCCONFIG                                STD_OFF  /**< Deactivateable: 'Can_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_INITBASICCANINDEXOFPCCONFIG                               STD_ON
#define CAN_INITBASICCANOFPCCONFIG                                    STD_ON
#define CAN_INITDATAHASHCODEOFPCCONFIG                                STD_OFF  /**< Deactivateable: 'Can_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_INITOBJECTBAUDRATEOFPCCONFIG                              STD_ON
#define CAN_INITOBJECTOFPCCONFIG                                      STD_ON
#define CAN_INITOBJECTSTARTINDEXOFPCCONFIG                            STD_ON
#define CAN_MAILBOXOFPCCONFIG                                         STD_ON
#define CAN_PLATFORMDLL_GENERATORVERSIONOFPCCONFIG                    STD_ON
#define CAN_SIZEOFACTIVESENDOBJECTOFPCCONFIG                          STD_ON
#define CAN_SIZEOFCANIFCHANNELIDOFPCCONFIG                            STD_ON
#define CAN_SIZEOFCONTROLLERCONFIGOFPCCONFIG                          STD_ON
#define CAN_SIZEOFCONTROLLERDATAOFPCCONFIG                            STD_ON
#define CAN_SIZEOFINITBASICCANINDEXOFPCCONFIG                         STD_ON
#define CAN_SIZEOFINITBASICCANOFPCCONFIG                              STD_ON
#define CAN_SIZEOFINITOBJECTBAUDRATEOFPCCONFIG                        STD_ON
#define CAN_SIZEOFINITOBJECTOFPCCONFIG                                STD_ON
#define CAN_SIZEOFINITOBJECTSTARTINDEXOFPCCONFIG                      STD_ON
#define CAN_SIZEOFMAILBOXOFPCCONFIG                                   STD_ON
#define CAN_SIZEOFTXOFFSETHWTOLOGOFPCCONFIG                           STD_ON
#define CAN_TXOFFSETHWTOLOGOFPCCONFIG                                 STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanPCMinNumericValueDefines  Can Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define CAN_MIN_PDUOFACTIVESENDOBJECT                                 0U
#define CAN_MIN_STATEOFACTIVESENDOBJECT                               0U
#define CAN_MIN_BUSOFFCOUNTEROFCONTROLLERDATA                         0U
#define CAN_MIN_CANINTERRUPTCOUNTEROFCONTROLLERDATA                   0U
#define CAN_MIN_LASTINITOBJECTOFCONTROLLERDATA                        0U
#define CAN_MIN_LOGSTATUSOFCONTROLLERDATA                             0U
#define CAN_MIN_STATUSREQOFCONTROLLERDATA                             0U
/** 
  \}
*/ 

/** 
  \defgroup  CanPCMaxNumericValueDefines  Can Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define CAN_MAX_PDUOFACTIVESENDOBJECT                                 65535U
#define CAN_MAX_STATEOFACTIVESENDOBJECT                               255U
#define CAN_MAX_BUSOFFCOUNTEROFCONTROLLERDATA                         255U
#define CAN_MAX_CANINTERRUPTCOUNTEROFCONTROLLERDATA                   255U
#define CAN_MAX_LASTINITOBJECTOFCONTROLLERDATA                        255U
#define CAN_MAX_LOGSTATUSOFCONTROLLERDATA                             255U
#define CAN_MAX_STATUSREQOFCONTROLLERDATA                             255U
/** 
  \}
*/ 

/** 
  \defgroup  CanPCNoReferenceDefines  Can No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define CAN_NO_CANIFCHANNELID                                         65535U
#define CAN_NO_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG         65535U
#define CAN_NO_MAILBOXRXBASICENDIDXOFCONTROLLERCONFIG                 65535U
#define CAN_NO_MAILBOXRXBASICSTARTIDXOFCONTROLLERCONFIG               65535U
#define CAN_NO_MAILBOXRXFULLENDIDXOFCONTROLLERCONFIG                  65535U
#define CAN_NO_MAILBOXRXFULLSTARTIDXOFCONTROLLERCONFIG                65535U
#define CAN_NO_MAILBOXTXBASICENDIDXOFCONTROLLERCONFIG                 65535U
#define CAN_NO_MAILBOXTXBASICSTARTIDXOFCONTROLLERCONFIG               65535U
#define CAN_NO_MAILBOXTXFULLENDIDXOFCONTROLLERCONFIG                  65535U
#define CAN_NO_MAILBOXTXFULLSTARTIDXOFCONTROLLERCONFIG                65535U
#define CAN_NO_MAILBOXUNUSEDENDIDXOFCONTROLLERCONFIG                  65535U
#define CAN_NO_MAILBOXUNUSEDSTARTIDXOFCONTROLLERCONFIG                65535U
#define CAN_NO_RXBASICHWSTARTOFCONTROLLERCONFIG                       255U
#define CAN_NO_RXBASICHWSTOPOFCONTROLLERCONFIG                        255U
#define CAN_NO_RXFULLHWSTARTOFCONTROLLERCONFIG                        255U
#define CAN_NO_RXFULLHWSTOPOFCONTROLLERCONFIG                         255U
#define CAN_NO_TXBASICHWSTARTOFCONTROLLERCONFIG                       255U
#define CAN_NO_TXBASICHWSTOPOFCONTROLLERCONFIG                        255U
#define CAN_NO_TXFULLHWSTARTOFCONTROLLERCONFIG                        255U
#define CAN_NO_TXFULLHWSTOPOFCONTROLLERCONFIG                         255U
#define CAN_NO_UNUSEDHWSTARTOFCONTROLLERCONFIG                        255U
#define CAN_NO_UNUSEDHWSTOPOFCONTROLLERCONFIG                         255U
#define CAN_NO_TXOFFSETHWTOLOG                                        32767
/** 
  \}
*/ 

/** 
  \defgroup  CanPCEnumExistsDefines  Can Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define CAN_EXISTS_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX              STD_ON
#define CAN_EXISTS_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX               STD_ON
#define CAN_EXISTS_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX              STD_ON
#define CAN_EXISTS_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX               STD_ON
#define CAN_EXISTS_UNUSED_CAN_TYPE_MAILBOXTYPEOFMAILBOX               STD_ON
#define CAN_EXISTS_TX_BASICCAN_MUX_TYPE_MAILBOXTYPEOFMAILBOX          STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  CanPCEnumDefines  Can Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX                     0x00U
#define CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX                      0x01U
#define CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX                     0x02U
#define CAN_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX                      0x03U
#define CAN_UNUSED_CAN_TYPE_MAILBOXTYPEOFMAILBOX                      0x04U
/** 
  \}
*/ 

/** 
  \defgroup  CanPCIsReducedToDefineDefines  Can Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define CAN_ISDEF_CANIFCHANNELID                                      STD_OFF
#define CAN_ISDEF_BASEADDRESSOFCONTROLLERCONFIG                       STD_OFF
#define CAN_ISDEF_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG      STD_OFF
#define CAN_ISDEF_INTERRUPTMASK1OFCONTROLLERCONFIG                    STD_OFF
#define CAN_ISDEF_INTERRUPTMASK2OFCONTROLLERCONFIG                    STD_OFF
#define CAN_ISDEF_INTERRUPTMASK3OFCONTROLLERCONFIG                    STD_OFF
#define CAN_ISDEF_MAILBOXRXBASICENDIDXOFCONTROLLERCONFIG              STD_OFF
#define CAN_ISDEF_MAILBOXRXBASICLENGTHOFCONTROLLERCONFIG              STD_OFF
#define CAN_ISDEF_MAILBOXRXBASICSTARTIDXOFCONTROLLERCONFIG            STD_OFF
#define CAN_ISDEF_MAILBOXRXBASICUSEDOFCONTROLLERCONFIG                STD_OFF
#define CAN_ISDEF_MAILBOXRXFULLENDIDXOFCONTROLLERCONFIG               STD_OFF
#define CAN_ISDEF_MAILBOXRXFULLLENGTHOFCONTROLLERCONFIG               STD_OFF
#define CAN_ISDEF_MAILBOXRXFULLSTARTIDXOFCONTROLLERCONFIG             STD_OFF
#define CAN_ISDEF_MAILBOXRXFULLUSEDOFCONTROLLERCONFIG                 STD_OFF
#define CAN_ISDEF_MAILBOXTXBASICENDIDXOFCONTROLLERCONFIG              STD_OFF
#define CAN_ISDEF_MAILBOXTXBASICLENGTHOFCONTROLLERCONFIG              STD_OFF
#define CAN_ISDEF_MAILBOXTXBASICSTARTIDXOFCONTROLLERCONFIG            STD_OFF
#define CAN_ISDEF_MAILBOXTXBASICUSEDOFCONTROLLERCONFIG                STD_OFF
#define CAN_ISDEF_MAILBOXTXFULLENDIDXOFCONTROLLERCONFIG               STD_OFF
#define CAN_ISDEF_MAILBOXTXFULLLENGTHOFCONTROLLERCONFIG               STD_OFF
#define CAN_ISDEF_MAILBOXTXFULLSTARTIDXOFCONTROLLERCONFIG             STD_OFF
#define CAN_ISDEF_MAILBOXTXFULLUSEDOFCONTROLLERCONFIG                 STD_OFF
#define CAN_ISDEF_MAILBOXUNUSEDENDIDXOFCONTROLLERCONFIG               STD_OFF
#define CAN_ISDEF_MAILBOXUNUSEDLENGTHOFCONTROLLERCONFIG               STD_OFF
#define CAN_ISDEF_MAILBOXUNUSEDSTARTIDXOFCONTROLLERCONFIG             STD_OFF
#define CAN_ISDEF_MAILBOXUNUSEDUSEDOFCONTROLLERCONFIG                 STD_OFF
#define CAN_ISDEF_NUMBEROFFILTERSOFCONTROLLERCONFIG                   STD_OFF
#define CAN_ISDEF_NUMBEROFFULLCONFIGURABLEFILTERSOFCONTROLLERCONFIG   STD_OFF
#define CAN_ISDEF_NUMBEROFMAXMAILBOXESOFCONTROLLERCONFIG              STD_OFF
#define CAN_ISDEF_PROTECTEDAREAIDOFCONTROLLERCONFIG                   STD_OFF
#define CAN_ISDEF_RFFNOFCONTROLLERCONFIG                              STD_OFF
#define CAN_ISDEF_RXBASICHWSTARTOFCONTROLLERCONFIG                    STD_OFF
#define CAN_ISDEF_RXBASICHWSTOPOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_RXFULLHWSTARTOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_RXFULLHWSTOPOFCONTROLLERCONFIG                      STD_OFF
#define CAN_ISDEF_TXBASICHWSTARTOFCONTROLLERCONFIG                    STD_OFF
#define CAN_ISDEF_TXBASICHWSTOPOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_TXFULLHWSTARTOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_TXFULLHWSTOPOFCONTROLLERCONFIG                      STD_OFF
#define CAN_ISDEF_UNUSEDHWSTARTOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_UNUSEDHWSTOPOFCONTROLLERCONFIG                      STD_OFF
#define CAN_ISDEF_INITCODEOFINITBASICCAN                              STD_OFF
#define CAN_ISDEF_INITMASKOFINITBASICCAN                              STD_OFF
#define CAN_ISDEF_INITBASICCANINDEX                                   STD_OFF
#define CAN_ISDEF_CBTOFINITOBJECT                                     STD_OFF
#define CAN_ISDEF_CONTROL1OFINITOBJECT                                STD_OFF
#define CAN_ISDEF_INITOBJECTBAUDRATE                                  STD_OFF
#define CAN_ISDEF_INITOBJECTSTARTINDEX                                STD_OFF
#define CAN_ISDEF_CONTROLLERCONFIGIDXOFMAILBOX                        STD_OFF
#define CAN_ISDEF_DLC_FIFOOFMAILBOX                                   STD_OFF
#define CAN_ISDEF_HWHANDLEOFMAILBOX                                   STD_OFF
#define CAN_ISDEF_IDVALUEOFMAILBOX                                    STD_OFF
#define CAN_ISDEF_MAILBOXTYPEOFMAILBOX                                STD_OFF
#define CAN_ISDEF_MAXDATALENOFMAILBOX                                 STD_OFF
#define CAN_ISDEF_TXOFFSETHWTOLOG                                     STD_OFF
#define CAN_ISDEF_ACTIVESENDOBJECTOFPCCONFIG                          STD_ON
#define CAN_ISDEF_CANIFCHANNELIDOFPCCONFIG                            STD_ON
#define CAN_ISDEF_CONTROLLERCONFIGOFPCCONFIG                          STD_ON
#define CAN_ISDEF_CONTROLLERDATAOFPCCONFIG                            STD_ON
#define CAN_ISDEF_INITBASICCANINDEXOFPCCONFIG                         STD_ON
#define CAN_ISDEF_INITBASICCANOFPCCONFIG                              STD_ON
#define CAN_ISDEF_INITOBJECTBAUDRATEOFPCCONFIG                        STD_ON
#define CAN_ISDEF_INITOBJECTOFPCCONFIG                                STD_ON
#define CAN_ISDEF_INITOBJECTSTARTINDEXOFPCCONFIG                      STD_ON
#define CAN_ISDEF_MAILBOXOFPCCONFIG                                   STD_ON
#define CAN_ISDEF_TXOFFSETHWTOLOGOFPCCONFIG                           STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanPCEqualsAlwaysToDefines  Can Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define CAN_EQ2_CANIFCHANNELID                                        
#define CAN_EQ2_BASEADDRESSOFCONTROLLERCONFIG                         
#define CAN_EQ2_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG        
#define CAN_EQ2_INTERRUPTMASK1OFCONTROLLERCONFIG                      
#define CAN_EQ2_INTERRUPTMASK2OFCONTROLLERCONFIG                      
#define CAN_EQ2_INTERRUPTMASK3OFCONTROLLERCONFIG                      
#define CAN_EQ2_MAILBOXRXBASICENDIDXOFCONTROLLERCONFIG                
#define CAN_EQ2_MAILBOXRXBASICLENGTHOFCONTROLLERCONFIG                
#define CAN_EQ2_MAILBOXRXBASICSTARTIDXOFCONTROLLERCONFIG              
#define CAN_EQ2_MAILBOXRXBASICUSEDOFCONTROLLERCONFIG                  
#define CAN_EQ2_MAILBOXRXFULLENDIDXOFCONTROLLERCONFIG                 
#define CAN_EQ2_MAILBOXRXFULLLENGTHOFCONTROLLERCONFIG                 
#define CAN_EQ2_MAILBOXRXFULLSTARTIDXOFCONTROLLERCONFIG               
#define CAN_EQ2_MAILBOXRXFULLUSEDOFCONTROLLERCONFIG                   
#define CAN_EQ2_MAILBOXTXBASICENDIDXOFCONTROLLERCONFIG                
#define CAN_EQ2_MAILBOXTXBASICLENGTHOFCONTROLLERCONFIG                
#define CAN_EQ2_MAILBOXTXBASICSTARTIDXOFCONTROLLERCONFIG              
#define CAN_EQ2_MAILBOXTXBASICUSEDOFCONTROLLERCONFIG                  
#define CAN_EQ2_MAILBOXTXFULLENDIDXOFCONTROLLERCONFIG                 
#define CAN_EQ2_MAILBOXTXFULLLENGTHOFCONTROLLERCONFIG                 
#define CAN_EQ2_MAILBOXTXFULLSTARTIDXOFCONTROLLERCONFIG               
#define CAN_EQ2_MAILBOXTXFULLUSEDOFCONTROLLERCONFIG                   
#define CAN_EQ2_MAILBOXUNUSEDENDIDXOFCONTROLLERCONFIG                 
#define CAN_EQ2_MAILBOXUNUSEDLENGTHOFCONTROLLERCONFIG                 
#define CAN_EQ2_MAILBOXUNUSEDSTARTIDXOFCONTROLLERCONFIG               
#define CAN_EQ2_MAILBOXUNUSEDUSEDOFCONTROLLERCONFIG                   
#define CAN_EQ2_NUMBEROFFILTERSOFCONTROLLERCONFIG                     
#define CAN_EQ2_NUMBEROFFULLCONFIGURABLEFILTERSOFCONTROLLERCONFIG     
#define CAN_EQ2_NUMBEROFMAXMAILBOXESOFCONTROLLERCONFIG                
#define CAN_EQ2_PROTECTEDAREAIDOFCONTROLLERCONFIG                     
#define CAN_EQ2_RFFNOFCONTROLLERCONFIG                                
#define CAN_EQ2_RXBASICHWSTARTOFCONTROLLERCONFIG                      
#define CAN_EQ2_RXBASICHWSTOPOFCONTROLLERCONFIG                       
#define CAN_EQ2_RXFULLHWSTARTOFCONTROLLERCONFIG                       
#define CAN_EQ2_RXFULLHWSTOPOFCONTROLLERCONFIG                        
#define CAN_EQ2_TXBASICHWSTARTOFCONTROLLERCONFIG                      
#define CAN_EQ2_TXBASICHWSTOPOFCONTROLLERCONFIG                       
#define CAN_EQ2_TXFULLHWSTARTOFCONTROLLERCONFIG                       
#define CAN_EQ2_TXFULLHWSTOPOFCONTROLLERCONFIG                        
#define CAN_EQ2_UNUSEDHWSTARTOFCONTROLLERCONFIG                       
#define CAN_EQ2_UNUSEDHWSTOPOFCONTROLLERCONFIG                        
#define CAN_EQ2_INITCODEOFINITBASICCAN                                
#define CAN_EQ2_INITMASKOFINITBASICCAN                                
#define CAN_EQ2_INITBASICCANINDEX                                     
#define CAN_EQ2_CBTOFINITOBJECT                                       
#define CAN_EQ2_CONTROL1OFINITOBJECT                                  
#define CAN_EQ2_INITOBJECTBAUDRATE                                    
#define CAN_EQ2_INITOBJECTSTARTINDEX                                  
#define CAN_EQ2_CONTROLLERCONFIGIDXOFMAILBOX                          
#define CAN_EQ2_DLC_FIFOOFMAILBOX                                     
#define CAN_EQ2_HWHANDLEOFMAILBOX                                     
#define CAN_EQ2_IDVALUEOFMAILBOX                                      
#define CAN_EQ2_MAILBOXTYPEOFMAILBOX                                  
#define CAN_EQ2_MAXDATALENOFMAILBOX                                   
#define CAN_EQ2_TXOFFSETHWTOLOG                                       
#define CAN_EQ2_ACTIVESENDOBJECTOFPCCONFIG                            Can_ActiveSendObject
#define CAN_EQ2_CANIFCHANNELIDOFPCCONFIG                              Can_CanIfChannelId
#define CAN_EQ2_CONTROLLERCONFIGOFPCCONFIG                            Can_ControllerConfig
#define CAN_EQ2_CONTROLLERDATAOFPCCONFIG                              Can_ControllerData
#define CAN_EQ2_INITBASICCANINDEXOFPCCONFIG                           Can_InitBasicCanIndex
#define CAN_EQ2_INITBASICCANOFPCCONFIG                                Can_InitBasicCan
#define CAN_EQ2_INITOBJECTBAUDRATEOFPCCONFIG                          Can_InitObjectBaudrate
#define CAN_EQ2_INITOBJECTOFPCCONFIG                                  Can_InitObject
#define CAN_EQ2_INITOBJECTSTARTINDEXOFPCCONFIG                        Can_InitObjectStartIndex
#define CAN_EQ2_MAILBOXOFPCCONFIG                                     Can_Mailbox
#define CAN_EQ2_TXOFFSETHWTOLOGOFPCCONFIG                             Can_TxOffsetHwToLog
/** 
  \}
*/ 

/** 
  \defgroup  CanPCSymbolicInitializationPointers  Can Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define Can_Config_Ptr                                                NULL_PTR  /**< symbolic identifier which shall be used to initialize 'Can' */
/** 
  \}
*/ 

/** 
  \defgroup  CanPCInitializationSymbols  Can Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define Can_Config                                                    NULL_PTR  /**< symbolic identifier which could be used to initialize 'Can */
/** 
  \}
*/ 

/** 
  \defgroup  CanPCGeneral  Can General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define CAN_CHECK_INIT_POINTER                                        STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define CAN_FINAL_MAGIC_NUMBER                                        0x501EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of Can */
#define CAN_INDIVIDUAL_POSTBUILD                                      STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'Can' is not configured to be postbuild capable. */
#define CAN_INIT_DATA                                                 CAN_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define CAN_INIT_DATA_HASH_CODE                                       -1002145066L  /**< the precompile constant to validate the initialization structure at initialization time of Can with a hashcode. The seed value is '0x501EU' */
#define CAN_USE_ECUM_BSW_ERROR_HOOK                                   STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define CAN_USE_INIT_POINTER                                          STD_OFF  /**< STD_ON if the init pointer Can shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanLTDataSwitches  Can Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CAN_LTCONFIG                                                  STD_OFF  /**< Deactivateable: 'Can_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanPBDataSwitches  Can Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CAN_PBCONFIG                                                  STD_OFF  /**< Deactivateable: 'Can_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CAN_LTCONFIGIDXOFPBCONFIG                                     STD_OFF  /**< Deactivateable: 'Can_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CAN_PCCONFIGIDXOFPBCONFIG                                     STD_OFF  /**< Deactivateable: 'Can_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanPCGetConstantDuplicatedRootDataMacros  Can Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define Can_GetActiveSendObjectOfPCConfig()                           Can_ActiveSendObject  /**< the pointer to Can_ActiveSendObject */
#define Can_GetBaseDll_GeneratorVersionOfPCConfig()                   0x0103U
#define Can_GetCanIfChannelIdOfPCConfig()                             Can_CanIfChannelId  /**< the pointer to Can_CanIfChannelId */
#define Can_GetControllerConfigOfPCConfig()                           Can_ControllerConfig  /**< the pointer to Can_ControllerConfig */
#define Can_GetControllerDataOfPCConfig()                             Can_ControllerData  /**< the pointer to Can_ControllerData */
#define Can_GetInitBasicCanIndexOfPCConfig()                          Can_InitBasicCanIndex  /**< the pointer to Can_InitBasicCanIndex */
#define Can_GetInitBasicCanOfPCConfig()                               Can_InitBasicCan  /**< the pointer to Can_InitBasicCan */
#define Can_GetInitObjectBaudrateOfPCConfig()                         Can_InitObjectBaudrate  /**< the pointer to Can_InitObjectBaudrate */
#define Can_GetInitObjectOfPCConfig()                                 Can_InitObject  /**< the pointer to Can_InitObject */
#define Can_GetInitObjectStartIndexOfPCConfig()                       Can_InitObjectStartIndex  /**< the pointer to Can_InitObjectStartIndex */
#define Can_GetMailboxOfPCConfig()                                    Can_Mailbox  /**< the pointer to Can_Mailbox */
#define Can_GetPlatformDll_GeneratorVersionOfPCConfig()               0x0101U
#define Can_GetSizeOfActiveSendObjectOfPCConfig()                     127U  /**< the number of accomplishable value elements in Can_ActiveSendObject */
#define Can_GetSizeOfCanIfChannelIdOfPCConfig()                       5U  /**< the number of accomplishable value elements in Can_CanIfChannelId */
#define Can_GetSizeOfControllerConfigOfPCConfig()                     5U  /**< the number of accomplishable value elements in Can_ControllerConfig */
#define Can_GetSizeOfInitBasicCanIndexOfPCConfig()                    5U  /**< the number of accomplishable value elements in Can_InitBasicCanIndex */
#define Can_GetSizeOfInitBasicCanOfPCConfig()                         40U  /**< the number of accomplishable value elements in Can_InitBasicCan */
#define Can_GetSizeOfInitObjectBaudrateOfPCConfig()                   5U  /**< the number of accomplishable value elements in Can_InitObjectBaudrate */
#define Can_GetSizeOfInitObjectOfPCConfig()                           5U  /**< the number of accomplishable value elements in Can_InitObject */
#define Can_GetSizeOfInitObjectStartIndexOfPCConfig()                 6U  /**< the number of accomplishable value elements in Can_InitObjectStartIndex */
#define Can_GetSizeOfMailboxOfPCConfig()                              145U  /**< the number of accomplishable value elements in Can_Mailbox */
#define Can_GetSizeOfTxOffsetHwToLogOfPCConfig()                      5U  /**< the number of accomplishable value elements in Can_TxOffsetHwToLog */
#define Can_GetTxOffsetHwToLogOfPCConfig()                            Can_TxOffsetHwToLog  /**< the pointer to Can_TxOffsetHwToLog */
/** 
  \}
*/ 

/** 
  \defgroup  CanPCGetDuplicatedRootDataMacros  Can Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define Can_GetSizeOfControllerDataOfPCConfig()                       Can_GetSizeOfControllerConfigOfPCConfig()  /**< the number of accomplishable value elements in Can_ControllerData */
/** 
  \}
*/ 

/** 
  \defgroup  CanPCGetDataMacros  Can Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define Can_GetPduOfActiveSendObject(Index)                           (Can_GetActiveSendObjectOfPCConfig()[(Index)].PduOfActiveSendObject)
#define Can_GetStateOfActiveSendObject(Index)                         (Can_GetActiveSendObjectOfPCConfig()[(Index)].StateOfActiveSendObject)
#define Can_GetCanIfChannelId(Index)                                  (Can_GetCanIfChannelIdOfPCConfig()[(Index)])
#define Can_GetBaseAddressOfControllerConfig(Index)                   (Can_GetControllerConfigOfPCConfig()[(Index)].BaseAddressOfControllerConfig)
#define Can_GetCanControllerDefaultBaudrateOfControllerConfig(Index)  (Can_GetControllerConfigOfPCConfig()[(Index)].CanControllerDefaultBaudrateOfControllerConfig)
#define Can_GetInterruptMask1OfControllerConfig(Index)                (Can_GetControllerConfigOfPCConfig()[(Index)].InterruptMask1OfControllerConfig)
#define Can_GetInterruptMask2OfControllerConfig(Index)                (Can_GetControllerConfigOfPCConfig()[(Index)].InterruptMask2OfControllerConfig)
#define Can_GetInterruptMask3OfControllerConfig(Index)                (Can_GetControllerConfigOfPCConfig()[(Index)].InterruptMask3OfControllerConfig)
#define Can_GetMailboxRxBasicEndIdxOfControllerConfig(Index)          (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxRxBasicEndIdxOfControllerConfig)
#define Can_GetMailboxRxBasicLengthOfControllerConfig(Index)          (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxRxBasicLengthOfControllerConfig)
#define Can_GetMailboxRxBasicStartIdxOfControllerConfig(Index)        (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxRxBasicStartIdxOfControllerConfig)
#define Can_GetMailboxRxFullEndIdxOfControllerConfig(Index)           (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxRxFullEndIdxOfControllerConfig)
#define Can_GetMailboxRxFullLengthOfControllerConfig(Index)           (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxRxFullLengthOfControllerConfig)
#define Can_GetMailboxRxFullStartIdxOfControllerConfig(Index)         (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxRxFullStartIdxOfControllerConfig)
#define Can_GetMailboxTxBasicEndIdxOfControllerConfig(Index)          (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxTxBasicEndIdxOfControllerConfig)
#define Can_GetMailboxTxBasicLengthOfControllerConfig(Index)          (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxTxBasicLengthOfControllerConfig)
#define Can_GetMailboxTxBasicStartIdxOfControllerConfig(Index)        (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxTxBasicStartIdxOfControllerConfig)
#define Can_GetMailboxTxFullEndIdxOfControllerConfig(Index)           (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxTxFullEndIdxOfControllerConfig)
#define Can_GetMailboxTxFullLengthOfControllerConfig(Index)           (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxTxFullLengthOfControllerConfig)
#define Can_GetMailboxTxFullStartIdxOfControllerConfig(Index)         (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxTxFullStartIdxOfControllerConfig)
#define Can_GetMailboxUnusedEndIdxOfControllerConfig(Index)           (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxUnusedEndIdxOfControllerConfig)
#define Can_GetMailboxUnusedLengthOfControllerConfig(Index)           (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxUnusedLengthOfControllerConfig)
#define Can_GetMailboxUnusedStartIdxOfControllerConfig(Index)         (Can_GetControllerConfigOfPCConfig()[(Index)].MailboxUnusedStartIdxOfControllerConfig)
#define Can_GetNumberOfFiltersOfControllerConfig(Index)               (Can_GetControllerConfigOfPCConfig()[(Index)].NumberOfFiltersOfControllerConfig)
#define Can_GetNumberOfFullConfigurableFiltersOfControllerConfig(Index) (Can_GetControllerConfigOfPCConfig()[(Index)].NumberOfFullConfigurableFiltersOfControllerConfig)
#define Can_GetNumberOfMaxMailboxesOfControllerConfig(Index)          (Can_GetControllerConfigOfPCConfig()[(Index)].NumberOfMaxMailboxesOfControllerConfig)
#define Can_GetProtectedAreaIdOfControllerConfig(Index)               (Can_GetControllerConfigOfPCConfig()[(Index)].ProtectedAreaIdOfControllerConfig)
#define Can_GetRFFNOfControllerConfig(Index)                          (Can_GetControllerConfigOfPCConfig()[(Index)].RFFNOfControllerConfig)
#define Can_GetRxBasicHwStartOfControllerConfig(Index)                (Can_GetControllerConfigOfPCConfig()[(Index)].RxBasicHwStartOfControllerConfig)
#define Can_GetRxBasicHwStopOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].RxBasicHwStopOfControllerConfig)
#define Can_GetRxFullHwStartOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].RxFullHwStartOfControllerConfig)
#define Can_GetRxFullHwStopOfControllerConfig(Index)                  (Can_GetControllerConfigOfPCConfig()[(Index)].RxFullHwStopOfControllerConfig)
#define Can_GetTxBasicHwStartOfControllerConfig(Index)                (Can_GetControllerConfigOfPCConfig()[(Index)].TxBasicHwStartOfControllerConfig)
#define Can_GetTxBasicHwStopOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].TxBasicHwStopOfControllerConfig)
#define Can_GetTxFullHwStartOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].TxFullHwStartOfControllerConfig)
#define Can_GetTxFullHwStopOfControllerConfig(Index)                  (Can_GetControllerConfigOfPCConfig()[(Index)].TxFullHwStopOfControllerConfig)
#define Can_GetUnusedHwStartOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].UnusedHwStartOfControllerConfig)
#define Can_GetUnusedHwStopOfControllerConfig(Index)                  (Can_GetControllerConfigOfPCConfig()[(Index)].UnusedHwStopOfControllerConfig)
#define Can_GetBusOffCounterOfControllerData(Index)                   (Can_GetControllerDataOfPCConfig()[(Index)].BusOffCounterOfControllerData)
#define Can_GetCanInterruptCounterOfControllerData(Index)             (Can_GetControllerDataOfPCConfig()[(Index)].CanInterruptCounterOfControllerData)
#define Can_GetCanInterruptOldStatusOfControllerData(Index)           (Can_GetControllerDataOfPCConfig()[(Index)].CanInterruptOldStatusOfControllerData)
#define Can_IsIsBusOffOfControllerData(Index)                         ((Can_GetControllerDataOfPCConfig()[(Index)].IsBusOffOfControllerData) != FALSE)
#define Can_IsIsHardwareCanceledOfControllerData(Index)               ((Can_GetControllerDataOfPCConfig()[(Index)].IsHardwareCanceledOfControllerData) != FALSE)
#define Can_GetLastInitObjectOfControllerData(Index)                  (Can_GetControllerDataOfPCConfig()[(Index)].LastInitObjectOfControllerData)
#define Can_GetLogStatusOfControllerData(Index)                       (Can_GetControllerDataOfPCConfig()[(Index)].LogStatusOfControllerData)
#define Can_GetLoopTimeoutOfControllerData(Index)                     (Can_GetControllerDataOfPCConfig()[(Index)].LoopTimeoutOfControllerData)
#define Can_GetRxMsgBufferOfControllerData(Index)                     (Can_GetControllerDataOfPCConfig()[(Index)].RxMsgBufferOfControllerData)
#define Can_IsStartModeRequestedOfControllerData(Index)               ((Can_GetControllerDataOfPCConfig()[(Index)].StartModeRequestedOfControllerData) != FALSE)
#define Can_GetStatusReqOfControllerData(Index)                       (Can_GetControllerDataOfPCConfig()[(Index)].StatusReqOfControllerData)
#define Can_GetInitCodeOfInitBasicCan(Index)                          (Can_GetInitBasicCanOfPCConfig()[(Index)].InitCodeOfInitBasicCan)
#define Can_GetInitMaskOfInitBasicCan(Index)                          (Can_GetInitBasicCanOfPCConfig()[(Index)].InitMaskOfInitBasicCan)
#define Can_GetInitBasicCanIndex(Index)                               (Can_GetInitBasicCanIndexOfPCConfig()[(Index)])
#define Can_GetCBTOfInitObject(Index)                                 (Can_GetInitObjectOfPCConfig()[(Index)].CBTOfInitObject)
#define Can_GetControl1OfInitObject(Index)                            (Can_GetInitObjectOfPCConfig()[(Index)].Control1OfInitObject)
#define Can_GetInitObjectBaudrate(Index)                              (Can_GetInitObjectBaudrateOfPCConfig()[(Index)])
#define Can_GetInitObjectStartIndex(Index)                            (Can_GetInitObjectStartIndexOfPCConfig()[(Index)])
#define Can_GetControllerConfigIdxOfMailbox(Index)                    (Can_GetMailboxOfPCConfig()[(Index)].ControllerConfigIdxOfMailbox)
#define Can_GetDLC_FIFOOfMailbox(Index)                               (Can_GetMailboxOfPCConfig()[(Index)].DLC_FIFOOfMailbox)
#define Can_GetHwHandleOfMailbox(Index)                               (Can_GetMailboxOfPCConfig()[(Index)].HwHandleOfMailbox)
#define Can_GetIDValueOfMailbox(Index)                                (Can_GetMailboxOfPCConfig()[(Index)].IDValueOfMailbox)
#define Can_GetMailboxTypeOfMailbox(Index)                            (Can_GetMailboxOfPCConfig()[(Index)].MailboxTypeOfMailbox)
#define Can_GetMaxDataLenOfMailbox(Index)                             (Can_GetMailboxOfPCConfig()[(Index)].MaxDataLenOfMailbox)
#define Can_GetTxOffsetHwToLog(Index)                                 (Can_GetTxOffsetHwToLogOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  CanPCGetDeduplicatedDataMacros  Can Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define Can_GetBaseDll_GeneratorVersion()                             Can_GetBaseDll_GeneratorVersionOfPCConfig()
#define Can_IsMailboxRxBasicUsedOfControllerConfig(Index)             (((boolean)(Can_GetMailboxRxBasicLengthOfControllerConfig(Index) != 0)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Can_Mailbox */
#define Can_IsMailboxRxFullUsedOfControllerConfig(Index)              (((boolean)(Can_GetMailboxRxFullLengthOfControllerConfig(Index) != 0)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Can_Mailbox */
#define Can_IsMailboxTxBasicUsedOfControllerConfig(Index)             (((boolean)(Can_GetMailboxTxBasicLengthOfControllerConfig(Index) != 0)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Can_Mailbox */
#define Can_IsMailboxTxFullUsedOfControllerConfig(Index)              (((boolean)(Can_GetMailboxTxFullLengthOfControllerConfig(Index) != 0)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Can_Mailbox */
#define Can_IsMailboxUnusedUsedOfControllerConfig(Index)              (((boolean)(Can_GetMailboxUnusedLengthOfControllerConfig(Index) != 0)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Can_Mailbox */
#define Can_GetPlatformDll_GeneratorVersion()                         Can_GetPlatformDll_GeneratorVersionOfPCConfig()
#define Can_GetSizeOfActiveSendObject()                               Can_GetSizeOfActiveSendObjectOfPCConfig()
#define Can_GetSizeOfCanIfChannelId()                                 Can_GetSizeOfCanIfChannelIdOfPCConfig()
#define Can_GetSizeOfControllerConfig()                               Can_GetSizeOfControllerConfigOfPCConfig()
#define Can_GetSizeOfControllerData()                                 Can_GetSizeOfControllerDataOfPCConfig()
#define Can_GetSizeOfInitBasicCan()                                   Can_GetSizeOfInitBasicCanOfPCConfig()
#define Can_GetSizeOfInitBasicCanIndex()                              Can_GetSizeOfInitBasicCanIndexOfPCConfig()
#define Can_GetSizeOfInitObject()                                     Can_GetSizeOfInitObjectOfPCConfig()
#define Can_GetSizeOfInitObjectBaudrate()                             Can_GetSizeOfInitObjectBaudrateOfPCConfig()
#define Can_GetSizeOfInitObjectStartIndex()                           Can_GetSizeOfInitObjectStartIndexOfPCConfig()
#define Can_GetSizeOfMailbox()                                        Can_GetSizeOfMailboxOfPCConfig()
#define Can_GetSizeOfTxOffsetHwToLog()                                Can_GetSizeOfTxOffsetHwToLogOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  CanPCSetDataMacros  Can Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define Can_SetPduOfActiveSendObject(Index, Value)                    Can_GetActiveSendObjectOfPCConfig()[(Index)].PduOfActiveSendObject = (Value)
#define Can_SetStateOfActiveSendObject(Index, Value)                  Can_GetActiveSendObjectOfPCConfig()[(Index)].StateOfActiveSendObject = (Value)
#define Can_SetBusOffCounterOfControllerData(Index, Value)            Can_GetControllerDataOfPCConfig()[(Index)].BusOffCounterOfControllerData = (Value)
#define Can_SetCanInterruptCounterOfControllerData(Index, Value)      Can_GetControllerDataOfPCConfig()[(Index)].CanInterruptCounterOfControllerData = (Value)
#define Can_SetCanInterruptOldStatusOfControllerData(Index, Value)    Can_GetControllerDataOfPCConfig()[(Index)].CanInterruptOldStatusOfControllerData = (Value)
#define Can_SetIsBusOffOfControllerData(Index, Value)                 Can_GetControllerDataOfPCConfig()[(Index)].IsBusOffOfControllerData = (Value)
#define Can_SetIsHardwareCanceledOfControllerData(Index, Value)       Can_GetControllerDataOfPCConfig()[(Index)].IsHardwareCanceledOfControllerData = (Value)
#define Can_SetLastInitObjectOfControllerData(Index, Value)           Can_GetControllerDataOfPCConfig()[(Index)].LastInitObjectOfControllerData = (Value)
#define Can_SetLogStatusOfControllerData(Index, Value)                Can_GetControllerDataOfPCConfig()[(Index)].LogStatusOfControllerData = (Value)
#define Can_SetLoopTimeoutOfControllerData(Index, Value)              Can_GetControllerDataOfPCConfig()[(Index)].LoopTimeoutOfControllerData = (Value)
#define Can_SetRxMsgBufferOfControllerData(Index, Value)              Can_GetControllerDataOfPCConfig()[(Index)].RxMsgBufferOfControllerData = (Value)
#define Can_SetStartModeRequestedOfControllerData(Index, Value)       Can_GetControllerDataOfPCConfig()[(Index)].StartModeRequestedOfControllerData = (Value)
#define Can_SetStatusReqOfControllerData(Index, Value)                Can_GetControllerDataOfPCConfig()[(Index)].StatusReqOfControllerData = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  CanPCHasMacros  Can Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Can_HasActiveSendObject()                                     (TRUE != FALSE)
#define Can_HasPduOfActiveSendObject()                                (TRUE != FALSE)
#define Can_HasStateOfActiveSendObject()                              (TRUE != FALSE)
#define Can_HasBaseDll_GeneratorVersion()                             (TRUE != FALSE)
#define Can_HasCanIfChannelId()                                       (TRUE != FALSE)
#define Can_HasControllerConfig()                                     (TRUE != FALSE)
#define Can_HasBaseAddressOfControllerConfig()                        (TRUE != FALSE)
#define Can_HasCanControllerDefaultBaudrateOfControllerConfig()       (TRUE != FALSE)
#define Can_HasInterruptMask1OfControllerConfig()                     (TRUE != FALSE)
#define Can_HasInterruptMask2OfControllerConfig()                     (TRUE != FALSE)
#define Can_HasInterruptMask3OfControllerConfig()                     (TRUE != FALSE)
#define Can_HasMailboxRxBasicEndIdxOfControllerConfig()               (TRUE != FALSE)
#define Can_HasMailboxRxBasicLengthOfControllerConfig()               (TRUE != FALSE)
#define Can_HasMailboxRxBasicStartIdxOfControllerConfig()             (TRUE != FALSE)
#define Can_HasMailboxRxBasicUsedOfControllerConfig()                 (TRUE != FALSE)
#define Can_HasMailboxRxFullEndIdxOfControllerConfig()                (TRUE != FALSE)
#define Can_HasMailboxRxFullLengthOfControllerConfig()                (TRUE != FALSE)
#define Can_HasMailboxRxFullStartIdxOfControllerConfig()              (TRUE != FALSE)
#define Can_HasMailboxRxFullUsedOfControllerConfig()                  (TRUE != FALSE)
#define Can_HasMailboxTxBasicEndIdxOfControllerConfig()               (TRUE != FALSE)
#define Can_HasMailboxTxBasicLengthOfControllerConfig()               (TRUE != FALSE)
#define Can_HasMailboxTxBasicStartIdxOfControllerConfig()             (TRUE != FALSE)
#define Can_HasMailboxTxBasicUsedOfControllerConfig()                 (TRUE != FALSE)
#define Can_HasMailboxTxFullEndIdxOfControllerConfig()                (TRUE != FALSE)
#define Can_HasMailboxTxFullLengthOfControllerConfig()                (TRUE != FALSE)
#define Can_HasMailboxTxFullStartIdxOfControllerConfig()              (TRUE != FALSE)
#define Can_HasMailboxTxFullUsedOfControllerConfig()                  (TRUE != FALSE)
#define Can_HasMailboxUnusedEndIdxOfControllerConfig()                (TRUE != FALSE)
#define Can_HasMailboxUnusedLengthOfControllerConfig()                (TRUE != FALSE)
#define Can_HasMailboxUnusedStartIdxOfControllerConfig()              (TRUE != FALSE)
#define Can_HasMailboxUnusedUsedOfControllerConfig()                  (TRUE != FALSE)
#define Can_HasNumberOfFiltersOfControllerConfig()                    (TRUE != FALSE)
#define Can_HasNumberOfFullConfigurableFiltersOfControllerConfig()    (TRUE != FALSE)
#define Can_HasNumberOfMaxMailboxesOfControllerConfig()               (TRUE != FALSE)
#define Can_HasProtectedAreaIdOfControllerConfig()                    (TRUE != FALSE)
#define Can_HasRFFNOfControllerConfig()                               (TRUE != FALSE)
#define Can_HasRxBasicHwStartOfControllerConfig()                     (TRUE != FALSE)
#define Can_HasRxBasicHwStopOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasRxFullHwStartOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasRxFullHwStopOfControllerConfig()                       (TRUE != FALSE)
#define Can_HasTxBasicHwStartOfControllerConfig()                     (TRUE != FALSE)
#define Can_HasTxBasicHwStopOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasTxFullHwStartOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasTxFullHwStopOfControllerConfig()                       (TRUE != FALSE)
#define Can_HasUnusedHwStartOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasUnusedHwStopOfControllerConfig()                       (TRUE != FALSE)
#define Can_HasControllerData()                                       (TRUE != FALSE)
#define Can_HasBusOffCounterOfControllerData()                        (TRUE != FALSE)
#define Can_HasCanInterruptCounterOfControllerData()                  (TRUE != FALSE)
#define Can_HasCanInterruptOldStatusOfControllerData()                (TRUE != FALSE)
#define Can_HasIsBusOffOfControllerData()                             (TRUE != FALSE)
#define Can_HasIsHardwareCanceledOfControllerData()                   (TRUE != FALSE)
#define Can_HasLastInitObjectOfControllerData()                       (TRUE != FALSE)
#define Can_HasLogStatusOfControllerData()                            (TRUE != FALSE)
#define Can_HasLoopTimeoutOfControllerData()                          (TRUE != FALSE)
#define Can_HasRxMsgBufferOfControllerData()                          (TRUE != FALSE)
#define Can_HasStartModeRequestedOfControllerData()                   (TRUE != FALSE)
#define Can_HasStatusReqOfControllerData()                            (TRUE != FALSE)
#define Can_HasInitBasicCan()                                         (TRUE != FALSE)
#define Can_HasInitCodeOfInitBasicCan()                               (TRUE != FALSE)
#define Can_HasInitMaskOfInitBasicCan()                               (TRUE != FALSE)
#define Can_HasInitBasicCanIndex()                                    (TRUE != FALSE)
#define Can_HasInitObject()                                           (TRUE != FALSE)
#define Can_HasCBTOfInitObject()                                      (TRUE != FALSE)
#define Can_HasControl1OfInitObject()                                 (TRUE != FALSE)
#define Can_HasInitObjectBaudrate()                                   (TRUE != FALSE)
#define Can_HasInitObjectStartIndex()                                 (TRUE != FALSE)
#define Can_HasMailbox()                                              (TRUE != FALSE)
#define Can_HasControllerConfigIdxOfMailbox()                         (TRUE != FALSE)
#define Can_HasDLC_FIFOOfMailbox()                                    (TRUE != FALSE)
#define Can_HasHwHandleOfMailbox()                                    (TRUE != FALSE)
#define Can_HasIDValueOfMailbox()                                     (TRUE != FALSE)
#define Can_HasMailboxTypeOfMailbox()                                 (TRUE != FALSE)
#define Can_HasMaxDataLenOfMailbox()                                  (TRUE != FALSE)
#define Can_HasPlatformDll_GeneratorVersion()                         (TRUE != FALSE)
#define Can_HasSizeOfActiveSendObject()                               (TRUE != FALSE)
#define Can_HasSizeOfCanIfChannelId()                                 (TRUE != FALSE)
#define Can_HasSizeOfControllerConfig()                               (TRUE != FALSE)
#define Can_HasSizeOfControllerData()                                 (TRUE != FALSE)
#define Can_HasSizeOfInitBasicCan()                                   (TRUE != FALSE)
#define Can_HasSizeOfInitBasicCanIndex()                              (TRUE != FALSE)
#define Can_HasSizeOfInitObject()                                     (TRUE != FALSE)
#define Can_HasSizeOfInitObjectBaudrate()                             (TRUE != FALSE)
#define Can_HasSizeOfInitObjectStartIndex()                           (TRUE != FALSE)
#define Can_HasSizeOfMailbox()                                        (TRUE != FALSE)
#define Can_HasSizeOfTxOffsetHwToLog()                                (TRUE != FALSE)
#define Can_HasTxOffsetHwToLog()                                      (TRUE != FALSE)
#define Can_HasPCConfig()                                             (TRUE != FALSE)
#define Can_HasActiveSendObjectOfPCConfig()                           (TRUE != FALSE)
#define Can_HasBaseDll_GeneratorVersionOfPCConfig()                   (TRUE != FALSE)
#define Can_HasCanIfChannelIdOfPCConfig()                             (TRUE != FALSE)
#define Can_HasControllerConfigOfPCConfig()                           (TRUE != FALSE)
#define Can_HasControllerDataOfPCConfig()                             (TRUE != FALSE)
#define Can_HasInitBasicCanIndexOfPCConfig()                          (TRUE != FALSE)
#define Can_HasInitBasicCanOfPCConfig()                               (TRUE != FALSE)
#define Can_HasInitObjectBaudrateOfPCConfig()                         (TRUE != FALSE)
#define Can_HasInitObjectOfPCConfig()                                 (TRUE != FALSE)
#define Can_HasInitObjectStartIndexOfPCConfig()                       (TRUE != FALSE)
#define Can_HasMailboxOfPCConfig()                                    (TRUE != FALSE)
#define Can_HasPlatformDll_GeneratorVersionOfPCConfig()               (TRUE != FALSE)
#define Can_HasSizeOfActiveSendObjectOfPCConfig()                     (TRUE != FALSE)
#define Can_HasSizeOfCanIfChannelIdOfPCConfig()                       (TRUE != FALSE)
#define Can_HasSizeOfControllerConfigOfPCConfig()                     (TRUE != FALSE)
#define Can_HasSizeOfControllerDataOfPCConfig()                       (TRUE != FALSE)
#define Can_HasSizeOfInitBasicCanIndexOfPCConfig()                    (TRUE != FALSE)
#define Can_HasSizeOfInitBasicCanOfPCConfig()                         (TRUE != FALSE)
#define Can_HasSizeOfInitObjectBaudrateOfPCConfig()                   (TRUE != FALSE)
#define Can_HasSizeOfInitObjectOfPCConfig()                           (TRUE != FALSE)
#define Can_HasSizeOfInitObjectStartIndexOfPCConfig()                 (TRUE != FALSE)
#define Can_HasSizeOfMailboxOfPCConfig()                              (TRUE != FALSE)
#define Can_HasSizeOfTxOffsetHwToLogOfPCConfig()                      (TRUE != FALSE)
#define Can_HasTxOffsetHwToLogOfPCConfig()                            (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  CanPCIncrementDataMacros  Can Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define Can_IncPduOfActiveSendObject(Index)                           Can_GetPduOfActiveSendObject(Index)++
#define Can_IncStateOfActiveSendObject(Index)                         Can_GetStateOfActiveSendObject(Index)++
#define Can_IncBusOffCounterOfControllerData(Index)                   Can_GetBusOffCounterOfControllerData(Index)++
#define Can_IncCanInterruptCounterOfControllerData(Index)             Can_GetCanInterruptCounterOfControllerData(Index)++
#define Can_IncCanInterruptOldStatusOfControllerData(Index)           Can_GetCanInterruptOldStatusOfControllerData(Index)++
#define Can_IncLastInitObjectOfControllerData(Index)                  Can_GetLastInitObjectOfControllerData(Index)++
#define Can_IncLogStatusOfControllerData(Index)                       Can_GetLogStatusOfControllerData(Index)++
#define Can_IncLoopTimeoutOfControllerData(Index)                     Can_GetLoopTimeoutOfControllerData(Index)++
#define Can_IncRxMsgBufferOfControllerData(Index)                     Can_GetRxMsgBufferOfControllerData(Index)++
#define Can_IncStatusReqOfControllerData(Index)                       Can_GetStatusReqOfControllerData(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  CanPCDecrementDataMacros  Can Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define Can_DecPduOfActiveSendObject(Index)                           Can_GetPduOfActiveSendObject(Index)--
#define Can_DecStateOfActiveSendObject(Index)                         Can_GetStateOfActiveSendObject(Index)--
#define Can_DecBusOffCounterOfControllerData(Index)                   Can_GetBusOffCounterOfControllerData(Index)--
#define Can_DecCanInterruptCounterOfControllerData(Index)             Can_GetCanInterruptCounterOfControllerData(Index)--
#define Can_DecCanInterruptOldStatusOfControllerData(Index)           Can_GetCanInterruptOldStatusOfControllerData(Index)--
#define Can_DecLastInitObjectOfControllerData(Index)                  Can_GetLastInitObjectOfControllerData(Index)--
#define Can_DecLogStatusOfControllerData(Index)                       Can_GetLogStatusOfControllerData(Index)--
#define Can_DecLoopTimeoutOfControllerData(Index)                     Can_GetLoopTimeoutOfControllerData(Index)--
#define Can_DecRxMsgBufferOfControllerData(Index)                     Can_GetRxMsgBufferOfControllerData(Index)--
#define Can_DecStatusReqOfControllerData(Index)                       Can_GetStatusReqOfControllerData(Index)--
/** 
  \}
*/ 

  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/

/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/

/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  CanPCIterableTypes  Can Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Can_ActiveSendObject */
typedef uint8_least Can_ActiveSendObjectIterType;

/**   \brief  type used to iterate Can_CanIfChannelId */
typedef uint8_least Can_CanIfChannelIdIterType;

/**   \brief  type used to iterate Can_ControllerConfig */
typedef uint8_least Can_ControllerConfigIterType;

/**   \brief  type used to iterate Can_InitBasicCan */
typedef uint8_least Can_InitBasicCanIterType;

/**   \brief  type used to iterate Can_InitBasicCanIndex */
typedef uint8_least Can_InitBasicCanIndexIterType;

/**   \brief  type used to iterate Can_InitObject */
typedef uint8_least Can_InitObjectIterType;

/**   \brief  type used to iterate Can_InitObjectBaudrate */
typedef uint8_least Can_InitObjectBaudrateIterType;

/**   \brief  type used to iterate Can_InitObjectStartIndex */
typedef uint8_least Can_InitObjectStartIndexIterType;

/**   \brief  type used to iterate Can_Mailbox */
typedef uint8_least Can_MailboxIterType;

/**   \brief  type used to iterate Can_TxOffsetHwToLog */
typedef uint8_least Can_TxOffsetHwToLogIterType;

/** 
  \}
*/ 

/** 
  \defgroup  CanPCIterableTypesWithSizeRelations  Can Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate Can_ControllerData */
typedef Can_ControllerConfigIterType Can_ControllerDataIterType;

/** 
  \}
*/ 

/** 
  \defgroup  CanPCValueTypes  Can Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for Can_PduOfActiveSendObject */
typedef PduIdType Can_PduOfActiveSendObjectType;

/**   \brief  value based type definition for Can_StateOfActiveSendObject */
typedef uint8 Can_StateOfActiveSendObjectType;

/**   \brief  value based type definition for Can_BaseDll_GeneratorVersion */
typedef uint16 Can_BaseDll_GeneratorVersionType;

/**   \brief  value based type definition for Can_CanIfChannelId */
typedef uint16 Can_CanIfChannelIdType;

/**   \brief  value based type definition for Can_BaseAddressOfControllerConfig */
typedef uint32 Can_BaseAddressOfControllerConfigType;

/**   \brief  value based type definition for Can_CanControllerDefaultBaudrateOfControllerConfig */
typedef uint16 Can_CanControllerDefaultBaudrateOfControllerConfigType;

/**   \brief  value based type definition for Can_InterruptMask1OfControllerConfig */
typedef uint32 Can_InterruptMask1OfControllerConfigType;

/**   \brief  value based type definition for Can_InterruptMask2OfControllerConfig */
typedef uint32 Can_InterruptMask2OfControllerConfigType;

/**   \brief  value based type definition for Can_InterruptMask3OfControllerConfig */
typedef uint32 Can_InterruptMask3OfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxRxBasicEndIdxOfControllerConfig */
typedef uint16 Can_MailboxRxBasicEndIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxRxBasicLengthOfControllerConfig */
typedef uint16 Can_MailboxRxBasicLengthOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxRxBasicStartIdxOfControllerConfig */
typedef uint16 Can_MailboxRxBasicStartIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxRxBasicUsedOfControllerConfig */
typedef boolean Can_MailboxRxBasicUsedOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxRxFullEndIdxOfControllerConfig */
typedef uint16 Can_MailboxRxFullEndIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxRxFullLengthOfControllerConfig */
typedef uint16 Can_MailboxRxFullLengthOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxRxFullStartIdxOfControllerConfig */
typedef uint16 Can_MailboxRxFullStartIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxRxFullUsedOfControllerConfig */
typedef boolean Can_MailboxRxFullUsedOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxTxBasicEndIdxOfControllerConfig */
typedef uint16 Can_MailboxTxBasicEndIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxTxBasicLengthOfControllerConfig */
typedef uint16 Can_MailboxTxBasicLengthOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxTxBasicStartIdxOfControllerConfig */
typedef uint16 Can_MailboxTxBasicStartIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxTxBasicUsedOfControllerConfig */
typedef boolean Can_MailboxTxBasicUsedOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxTxFullEndIdxOfControllerConfig */
typedef uint16 Can_MailboxTxFullEndIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxTxFullLengthOfControllerConfig */
typedef uint16 Can_MailboxTxFullLengthOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxTxFullStartIdxOfControllerConfig */
typedef uint16 Can_MailboxTxFullStartIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxTxFullUsedOfControllerConfig */
typedef boolean Can_MailboxTxFullUsedOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxUnusedEndIdxOfControllerConfig */
typedef uint16 Can_MailboxUnusedEndIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxUnusedLengthOfControllerConfig */
typedef uint16 Can_MailboxUnusedLengthOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxUnusedStartIdxOfControllerConfig */
typedef uint16 Can_MailboxUnusedStartIdxOfControllerConfigType;

/**   \brief  value based type definition for Can_MailboxUnusedUsedOfControllerConfig */
typedef boolean Can_MailboxUnusedUsedOfControllerConfigType;

/**   \brief  value based type definition for Can_NumberOfFiltersOfControllerConfig */
typedef uint8 Can_NumberOfFiltersOfControllerConfigType;

/**   \brief  value based type definition for Can_NumberOfFullConfigurableFiltersOfControllerConfig */
typedef uint8 Can_NumberOfFullConfigurableFiltersOfControllerConfigType;

/**   \brief  value based type definition for Can_NumberOfMaxMailboxesOfControllerConfig */
typedef uint8 Can_NumberOfMaxMailboxesOfControllerConfigType;

/**   \brief  value based type definition for Can_ProtectedAreaIdOfControllerConfig */
typedef uint16 Can_ProtectedAreaIdOfControllerConfigType;

/**   \brief  value based type definition for Can_RFFNOfControllerConfig */
typedef uint32 Can_RFFNOfControllerConfigType;

/**   \brief  value based type definition for Can_RxBasicHwStartOfControllerConfig */
typedef uint8 Can_RxBasicHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_RxBasicHwStopOfControllerConfig */
typedef uint8 Can_RxBasicHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_RxFullHwStartOfControllerConfig */
typedef uint8 Can_RxFullHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_RxFullHwStopOfControllerConfig */
typedef uint8 Can_RxFullHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_TxBasicHwStartOfControllerConfig */
typedef uint8 Can_TxBasicHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_TxBasicHwStopOfControllerConfig */
typedef uint8 Can_TxBasicHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_TxFullHwStartOfControllerConfig */
typedef uint8 Can_TxFullHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_TxFullHwStopOfControllerConfig */
typedef uint8 Can_TxFullHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_UnusedHwStartOfControllerConfig */
typedef uint8 Can_UnusedHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_UnusedHwStopOfControllerConfig */
typedef uint8 Can_UnusedHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_BusOffCounterOfControllerData */
typedef uint8 Can_BusOffCounterOfControllerDataType;

/**   \brief  value based type definition for Can_CanInterruptCounterOfControllerData */
typedef uint8 Can_CanInterruptCounterOfControllerDataType;

/**   \brief  value based type definition for Can_IsBusOffOfControllerData */
typedef boolean Can_IsBusOffOfControllerDataType;

/**   \brief  value based type definition for Can_IsHardwareCanceledOfControllerData */
typedef boolean Can_IsHardwareCanceledOfControllerDataType;

/**   \brief  value based type definition for Can_LastInitObjectOfControllerData */
typedef uint8 Can_LastInitObjectOfControllerDataType;

/**   \brief  value based type definition for Can_LogStatusOfControllerData */
typedef uint8 Can_LogStatusOfControllerDataType;

/**   \brief  value based type definition for Can_StartModeRequestedOfControllerData */
typedef boolean Can_StartModeRequestedOfControllerDataType;

/**   \brief  value based type definition for Can_StatusReqOfControllerData */
typedef uint8 Can_StatusReqOfControllerDataType;

/**   \brief  value based type definition for Can_InitCodeOfInitBasicCan */
typedef uint32 Can_InitCodeOfInitBasicCanType;

/**   \brief  value based type definition for Can_InitMaskOfInitBasicCan */
typedef uint32 Can_InitMaskOfInitBasicCanType;

/**   \brief  value based type definition for Can_InitBasicCanIndex */
typedef uint16 Can_InitBasicCanIndexType;

/**   \brief  value based type definition for Can_CBTOfInitObject */
typedef uint32 Can_CBTOfInitObjectType;

/**   \brief  value based type definition for Can_Control1OfInitObject */
typedef uint32 Can_Control1OfInitObjectType;

/**   \brief  value based type definition for Can_InitObjectBaudrate */
typedef uint16 Can_InitObjectBaudrateType;

/**   \brief  value based type definition for Can_InitObjectStartIndex */
typedef uint8 Can_InitObjectStartIndexType;

/**   \brief  value based type definition for Can_ControllerConfigIdxOfMailbox */
typedef uint16 Can_ControllerConfigIdxOfMailboxType;

/**   \brief  value based type definition for Can_DLC_FIFOOfMailbox */
typedef uint8 Can_DLC_FIFOOfMailboxType;

/**   \brief  value based type definition for Can_HwHandleOfMailbox */
typedef uint8 Can_HwHandleOfMailboxType;

/**   \brief  value based type definition for Can_IDValueOfMailbox */
typedef uint32 Can_IDValueOfMailboxType;

/**   \brief  value based type definition for Can_MailboxTypeOfMailbox */
typedef uint8 Can_MailboxTypeOfMailboxType;

/**   \brief  value based type definition for Can_MaxDataLenOfMailbox */
typedef uint8 Can_MaxDataLenOfMailboxType;

/**   \brief  value based type definition for Can_PlatformDll_GeneratorVersion */
typedef uint16 Can_PlatformDll_GeneratorVersionType;

/**   \brief  value based type definition for Can_SizeOfActiveSendObject */
typedef uint16 Can_SizeOfActiveSendObjectType;

/**   \brief  value based type definition for Can_SizeOfCanIfChannelId */
typedef uint16 Can_SizeOfCanIfChannelIdType;

/**   \brief  value based type definition for Can_SizeOfControllerConfig */
typedef uint16 Can_SizeOfControllerConfigType;

/**   \brief  value based type definition for Can_SizeOfControllerData */
typedef uint16 Can_SizeOfControllerDataType;

/**   \brief  value based type definition for Can_SizeOfInitBasicCan */
typedef uint16 Can_SizeOfInitBasicCanType;

/**   \brief  value based type definition for Can_SizeOfInitBasicCanIndex */
typedef uint16 Can_SizeOfInitBasicCanIndexType;

/**   \brief  value based type definition for Can_SizeOfInitObject */
typedef uint16 Can_SizeOfInitObjectType;

/**   \brief  value based type definition for Can_SizeOfInitObjectBaudrate */
typedef uint16 Can_SizeOfInitObjectBaudrateType;

/**   \brief  value based type definition for Can_SizeOfInitObjectStartIndex */
typedef uint16 Can_SizeOfInitObjectStartIndexType;

/**   \brief  value based type definition for Can_SizeOfMailbox */
typedef uint16 Can_SizeOfMailboxType;

/**   \brief  value based type definition for Can_SizeOfTxOffsetHwToLog */
typedef uint16 Can_SizeOfTxOffsetHwToLogType;

/**   \brief  value based type definition for Can_TxOffsetHwToLog */
typedef sint16 Can_TxOffsetHwToLogType;

/** 
  \}
*/ 

/** 
  \defgroup  CanPCStructTypes  Can Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in Can_ActiveSendObject */
typedef struct sCan_ActiveSendObjectType
{
  Can_PduOfActiveSendObjectType PduOfActiveSendObject;  /**< buffered PduId for confirmation or cancellation */
  Can_StateOfActiveSendObjectType StateOfActiveSendObject;  /**< send state like cancelled or send activ */
} Can_ActiveSendObjectType;

/**   \brief  type used in Can_ControllerConfig */
typedef struct sCan_ControllerConfigType
{
  Can_BaseAddressOfControllerConfigType BaseAddressOfControllerConfig;
  Can_InterruptMask1OfControllerConfigType InterruptMask1OfControllerConfig;
  Can_InterruptMask2OfControllerConfigType InterruptMask2OfControllerConfig;
  Can_InterruptMask3OfControllerConfigType InterruptMask3OfControllerConfig;
  Can_RFFNOfControllerConfigType RFFNOfControllerConfig;
  Can_CanControllerDefaultBaudrateOfControllerConfigType CanControllerDefaultBaudrateOfControllerConfig;
  Can_MailboxRxBasicEndIdxOfControllerConfigType MailboxRxBasicEndIdxOfControllerConfig;  /**< the end index of the 0:n relation pointing to Can_Mailbox */
  Can_MailboxRxBasicLengthOfControllerConfigType MailboxRxBasicLengthOfControllerConfig;  /**< the number of relations pointing to Can_Mailbox */
  Can_MailboxRxBasicStartIdxOfControllerConfigType MailboxRxBasicStartIdxOfControllerConfig;  /**< the start index of the 0:n relation pointing to Can_Mailbox */
  Can_MailboxRxFullEndIdxOfControllerConfigType MailboxRxFullEndIdxOfControllerConfig;  /**< the end index of the 0:n relation pointing to Can_Mailbox */
  Can_MailboxRxFullLengthOfControllerConfigType MailboxRxFullLengthOfControllerConfig;  /**< the number of relations pointing to Can_Mailbox */
  Can_MailboxRxFullStartIdxOfControllerConfigType MailboxRxFullStartIdxOfControllerConfig;  /**< the start index of the 0:n relation pointing to Can_Mailbox */
  Can_MailboxTxBasicEndIdxOfControllerConfigType MailboxTxBasicEndIdxOfControllerConfig;  /**< the end index of the 0:n relation pointing to Can_Mailbox */
  Can_MailboxTxBasicLengthOfControllerConfigType MailboxTxBasicLengthOfControllerConfig;  /**< the number of relations pointing to Can_Mailbox */
  Can_MailboxTxBasicStartIdxOfControllerConfigType MailboxTxBasicStartIdxOfControllerConfig;  /**< the start index of the 0:n relation pointing to Can_Mailbox */
  Can_MailboxTxFullEndIdxOfControllerConfigType MailboxTxFullEndIdxOfControllerConfig;  /**< the end index of the 0:n relation pointing to Can_Mailbox */
  Can_MailboxTxFullLengthOfControllerConfigType MailboxTxFullLengthOfControllerConfig;  /**< the number of relations pointing to Can_Mailbox */
  Can_MailboxTxFullStartIdxOfControllerConfigType MailboxTxFullStartIdxOfControllerConfig;  /**< the start index of the 0:n relation pointing to Can_Mailbox */
  Can_MailboxUnusedEndIdxOfControllerConfigType MailboxUnusedEndIdxOfControllerConfig;  /**< the end index of the 0:n relation pointing to Can_Mailbox */
  Can_MailboxUnusedLengthOfControllerConfigType MailboxUnusedLengthOfControllerConfig;  /**< the number of relations pointing to Can_Mailbox */
  Can_MailboxUnusedStartIdxOfControllerConfigType MailboxUnusedStartIdxOfControllerConfig;  /**< the start index of the 0:n relation pointing to Can_Mailbox */
  Can_ProtectedAreaIdOfControllerConfigType ProtectedAreaIdOfControllerConfig;  /**< This table contains the protected areas defines that must be configured in the OS module. */
  Can_NumberOfFiltersOfControllerConfigType NumberOfFiltersOfControllerConfig;
  Can_NumberOfFullConfigurableFiltersOfControllerConfigType NumberOfFullConfigurableFiltersOfControllerConfig;
  Can_NumberOfMaxMailboxesOfControllerConfigType NumberOfMaxMailboxesOfControllerConfig;
  Can_RxBasicHwStartOfControllerConfigType RxBasicHwStartOfControllerConfig;
  Can_RxBasicHwStopOfControllerConfigType RxBasicHwStopOfControllerConfig;
  Can_RxFullHwStartOfControllerConfigType RxFullHwStartOfControllerConfig;
  Can_RxFullHwStopOfControllerConfigType RxFullHwStopOfControllerConfig;
  Can_TxBasicHwStartOfControllerConfigType TxBasicHwStartOfControllerConfig;
  Can_TxBasicHwStopOfControllerConfigType TxBasicHwStopOfControllerConfig;
  Can_TxFullHwStartOfControllerConfigType TxFullHwStartOfControllerConfig;
  Can_TxFullHwStopOfControllerConfigType TxFullHwStopOfControllerConfig;
  Can_UnusedHwStartOfControllerConfigType UnusedHwStartOfControllerConfig;
  Can_UnusedHwStopOfControllerConfigType UnusedHwStopOfControllerConfig;
} Can_ControllerConfigType;

/**   \brief  type used in Can_ControllerData */
typedef struct sCan_ControllerDataType
{
  Can_BusOffCounterOfControllerDataType BusOffCounterOfControllerData;  /**< This variable stores the busoff recovery timeout counter. */
  Can_CanInterruptCounterOfControllerDataType CanInterruptCounterOfControllerData;  /**< CAN interrupt disable counter for each controller */
  Can_IsBusOffOfControllerDataType IsBusOffOfControllerData;  /**< CAN state for each controller: busoff occur */
  Can_IsHardwareCanceledOfControllerDataType IsHardwareCanceledOfControllerData;  /**< hw loop timeout occur for controller */
  Can_LastInitObjectOfControllerDataType LastInitObjectOfControllerData;  /**< last set baudrate for reinit */
  Can_LogStatusOfControllerDataType LogStatusOfControllerData;  /**< CAN state for each controller: UNINIT=0x00, START=0x01, STOP=0x02, INIT=0x04, INCONSISTENT=0x08, WARNING =0x10, PASSIVE=0x20, BUSOFF=0x40, SLEEP=0x80 */
  Can_StartModeRequestedOfControllerDataType StartModeRequestedOfControllerData;  /**< This variable stores if the start mode is of a special CAN Controller is already requested in the busoff recovery process. */
  Can_StatusReqOfControllerDataType StatusReqOfControllerData;  /**< CAN state request for each controller: START=0x01, STOP=0x02, WAKEUP=0x08, SLEEP=0x80 */
  tCanLLCanIntOld CanInterruptOldStatusOfControllerData;  /**< last CAN interrupt status for restore interrupt for each controller */
  Can_LoopTimeout_dim_type LoopTimeoutOfControllerData;  /**< hw loop timeout for each controller */
  tCanRxMsgBuffer RxMsgBufferOfControllerData;  /**< This variable stores received values (ID, DLC, DATA) in the reception process. */
} Can_ControllerDataType;

/**   \brief  type used in Can_InitBasicCan */
typedef struct sCan_InitBasicCanType
{
  Can_InitCodeOfInitBasicCanType InitCodeOfInitBasicCan;
  Can_InitMaskOfInitBasicCanType InitMaskOfInitBasicCan;
} Can_InitBasicCanType;

/**   \brief  type used in Can_InitObject */
typedef struct sCan_InitObjectType
{
  Can_CBTOfInitObjectType CBTOfInitObject;
  Can_Control1OfInitObjectType Control1OfInitObject;
} Can_InitObjectType;

/**   \brief  type used in Can_Mailbox */
typedef struct sCan_MailboxType
{
  Can_IDValueOfMailboxType IDValueOfMailbox;
  Can_ControllerConfigIdxOfMailboxType ControllerConfigIdxOfMailbox;  /**< the index of the 1:1 relation pointing to Can_ControllerConfig */
  Can_DLC_FIFOOfMailboxType DLC_FIFOOfMailbox;
  Can_HwHandleOfMailboxType HwHandleOfMailbox;
  Can_MailboxTypeOfMailboxType MailboxTypeOfMailbox;
  Can_MaxDataLenOfMailboxType MaxDataLenOfMailbox;
} Can_MailboxType;

/** 
  \}
*/ 

/** 
  \defgroup  CanPCRootValueTypes  Can Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in Can_PCConfig */
typedef struct sCan_PCConfigType
{
  uint8 Can_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Can_PCConfigType;

typedef Can_PCConfigType Can_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  Can_CanIfChannelId
**********************************************************************************************************************/
/** 
  \var    Can_CanIfChannelId
  \brief  indirection table Can to CanIf controller ID
*/ 
#define CAN_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_CanIfChannelIdType, CAN_CONST) Can_CanIfChannelId[5];
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ControllerConfig
**********************************************************************************************************************/
/** 
  \var    Can_ControllerConfig
  \brief  Global configuration for all controllers
  \details
  Element                            Description
  BaseAddress                    
  InterruptMask1                 
  InterruptMask2                 
  InterruptMask3                 
  RFFN                           
  CanControllerDefaultBaudrate   
  MailboxRxBasicEndIdx               the end index of the 0:n relation pointing to Can_Mailbox
  MailboxRxBasicLength               the number of relations pointing to Can_Mailbox
  MailboxRxBasicStartIdx             the start index of the 0:n relation pointing to Can_Mailbox
  MailboxRxFullEndIdx                the end index of the 0:n relation pointing to Can_Mailbox
  MailboxRxFullLength                the number of relations pointing to Can_Mailbox
  MailboxRxFullStartIdx              the start index of the 0:n relation pointing to Can_Mailbox
  MailboxTxBasicEndIdx               the end index of the 0:n relation pointing to Can_Mailbox
  MailboxTxBasicLength               the number of relations pointing to Can_Mailbox
  MailboxTxBasicStartIdx             the start index of the 0:n relation pointing to Can_Mailbox
  MailboxTxFullEndIdx                the end index of the 0:n relation pointing to Can_Mailbox
  MailboxTxFullLength                the number of relations pointing to Can_Mailbox
  MailboxTxFullStartIdx              the start index of the 0:n relation pointing to Can_Mailbox
  MailboxUnusedEndIdx                the end index of the 0:n relation pointing to Can_Mailbox
  MailboxUnusedLength                the number of relations pointing to Can_Mailbox
  MailboxUnusedStartIdx              the start index of the 0:n relation pointing to Can_Mailbox
  ProtectedAreaId                    This table contains the protected areas defines that must be configured in the OS module.
  NumberOfFilters                
  NumberOfFullConfigurableFilters
  NumberOfMaxMailboxes           
  RxBasicHwStart                 
  RxBasicHwStop                  
  RxFullHwStart                  
  RxFullHwStop                   
  TxBasicHwStart                 
  TxBasicHwStop                  
  TxFullHwStart                  
  TxFullHwStop                   
  UnusedHwStart                  
  UnusedHwStop                   
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_ControllerConfigType, CAN_CONST) Can_ControllerConfig[5];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitBasicCan
**********************************************************************************************************************/
/** 
  \var    Can_InitBasicCan
  \brief  This table contains acceptance filter configuration values.
  \details
  Element     Description
  InitCode
  InitMask
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_InitBasicCanType, CAN_CONST) Can_InitBasicCan[40];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitBasicCanIndex
**********************************************************************************************************************/
/** 
  \var    Can_InitBasicCanIndex
  \brief  This table contains start/stop indices for the Can_InitBasicCan table.
*/ 
#define CAN_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_InitBasicCanIndexType, CAN_CONST) Can_InitBasicCanIndex[5];
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObject
**********************************************************************************************************************/
/** 
  \var    Can_InitObject
  \brief  This table contains information about the init object: e.g. bustiming register contents.
  \details
  Element     Description
  CBT     
  Control1
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_InitObjectType, CAN_CONST) Can_InitObject[5];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectBaudrate
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectBaudrate
  \brief  baudrates ('InitStruct' as index)
*/ 
#define CAN_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_InitObjectBaudrateType, CAN_CONST) Can_InitObjectBaudrate[5];
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectStartIndex
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectStartIndex
  \brief  Start index of 'InitStruct' / baudratesets (controllers as index)
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_InitObjectStartIndexType, CAN_CONST) Can_InitObjectStartIndex[6];
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_Mailbox
**********************************************************************************************************************/
/** 
  \var    Can_Mailbox
  \brief  mailbox configuration (over all controllers)
  \details
  Element                Description
  IDValue            
  ControllerConfigIdx    the index of the 1:1 relation pointing to Can_ControllerConfig
  DLC_FIFO           
  HwHandle           
  MailboxType        
  MaxDataLen         
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_MailboxType, CAN_CONST) Can_Mailbox[145];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_TxOffsetHwToLog
**********************************************************************************************************************/
/** 
  \var    Can_TxOffsetHwToLog
  \brief  tx hardware to logical handle indirection table
*/ 
#define CAN_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_TxOffsetHwToLogType, CAN_CONST) Can_TxOffsetHwToLog[5];
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ActiveSendObject
**********************************************************************************************************************/
/** 
  \var    Can_ActiveSendObject
  \brief  temporary data for TX object
  \details
  Element    Description
  Pdu        buffered PduId for confirmation or cancellation
  State      send state like cancelled or send activ
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Can_ActiveSendObjectType, CAN_VAR_NOINIT) Can_ActiveSendObject[127];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ControllerData
**********************************************************************************************************************/
/** 
  \var    Can_ControllerData
  \brief  struct for all controller related variable data
  \details
  Element                  Description
  BusOffCounter            This variable stores the busoff recovery timeout counter.
  CanInterruptCounter      CAN interrupt disable counter for each controller
  IsBusOff                 CAN state for each controller: busoff occur
  IsHardwareCanceled       hw loop timeout occur for controller
  LastInitObject           last set baudrate for reinit
  LogStatus                CAN state for each controller: UNINIT=0x00, START=0x01, STOP=0x02, INIT=0x04, INCONSISTENT=0x08, WARNING =0x10, PASSIVE=0x20, BUSOFF=0x40, SLEEP=0x80
  StartModeRequested       This variable stores if the start mode is of a special CAN Controller is already requested in the busoff recovery process.
  StatusReq                CAN state request for each controller: START=0x01, STOP=0x02, WAKEUP=0x08, SLEEP=0x80
  CanInterruptOldStatus    last CAN interrupt status for restore interrupt for each controller
  LoopTimeout              hw loop timeout for each controller
  RxMsgBuffer              This variable stores received values (ID, DLC, DATA) in the reception process.
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Can_ControllerDataType, CAN_VAR_NOINIT) Can_ControllerData[5];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/* -----------------------------------------------------------------------------
    UserConfigFile
 ----------------------------------------------------------------------------- */
/* User Config File Start */

/* User Config File End */



#endif  /* CAN_CFG_H */
/**********************************************************************************************************************
  END OF FILE: Can_Cfg.h
**********************************************************************************************************************/
 

