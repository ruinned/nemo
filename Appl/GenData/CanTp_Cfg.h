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
 *            Module: CanTp
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanTp_Cfg.h
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

#if !defined(CANTP_CFG_H)
#define CANTP_CFG_H

/* -----------------------------------------------------------------------------
    &&&~ Include files
 ----------------------------------------------------------------------------- */

#include "ComStack_Types.h"

/* Definition of feature switches in the library delivered */
#ifndef CANTP_USE_DUMMY_FUNCTIONS
#define CANTP_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef CANTP_USE_DUMMY_STATEMENT
#define CANTP_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef CANTP_DUMMY_STATEMENT
#define CANTP_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CANTP_DUMMY_STATEMENT_CONST
#define CANTP_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CANTP_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define CANTP_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef CANTP_ATOMIC_VARIABLE_ACCESS
#define CANTP_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef CANTP_PROCESSOR_MPC5746C
#define CANTP_PROCESSOR_MPC5746C
#endif
#ifndef CANTP_COMP_DIAB
#define CANTP_COMP_DIAB
#endif
#ifndef CANTP_GEN_GENERATOR_MSR
#define CANTP_GEN_GENERATOR_MSR
#endif
#ifndef CANTP_CPUTYPE_BITORDER_MSB2LSB
#define CANTP_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef CANTP_CONFIGURATION_VARIANT_PRECOMPILE
#define CANTP_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef CANTP_CONFIGURATION_VARIANT_LINKTIME
#define CANTP_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef CANTP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define CANTP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef CANTP_CONFIGURATION_VARIANT
#define CANTP_CONFIGURATION_VARIANT CANTP_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef CANTP_POSTBUILD_VARIANT_SUPPORT
#define CANTP_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
 /*  Version information  */ 
#define CANTP_CFG_GEN_MAJOR_VERSION                                            4U 
#define CANTP_CFG_GEN_MINOR_VERSION                                            2U 
#define CANTP_CFG_GEN_PATCH_VERSION                                            2U 

 /*  Global defines  */ 
#define CANTP_VERSION_INFO_API                                                 STD_OFF 
#define CANTP_DEV_ERROR_DETECT                                                 STD_OFF 
#define CANTP_DEV_ERROR_REPORT                                                 STD_OFF 
#define CANTP_TC                                                               STD_ON 
#define CANTP_RC                                                               STD_OFF 
#define CANTP_INVALID_HDL                                                      ((PduIdType) 65535U) 
#define CANTP_TASK_CYCLE                                                       5U 

 /*  Global constant defines  */ 
#define CANTP_MAX_FRAME_LENGTH                                                 8 
#define CANTP_MAX_PAYLOAD_LENGTH                                               7 
#define CANTP_NUM_RX_CHANNELS                                                  CanTp_GetSizeOfRxState() 
#define CANTP_NUM_RX_SDUS                                                      71 
#define CANTP_NUM_TX_CHANNELS                                                  CanTp_GetSizeOfTxState() 
#define CANTP_NUM_TX_SDUS                                                      71 
#define CANTP_SIZEOF_PDULENGTHTYPE                                             2 

 /*  Communication Type  */ 
#define CANTP_MODE_FULL_DUPLEX                                                 1 
#define CANTP_MODE_HALF_DUPLEX                                                 0 
#define CANTP_TATYPE_FUNCTIONAL                                                1 
#define CANTP_TATYPE_PHYSICAL                                                  0 

 /*  CanTp Adress Format  */ 
#define CANTP_ADDRESS_FORMAT_EXTENDED                                          1 
#define CANTP_ADDRESS_FORMAT_MIXED11                                           2 
#define CANTP_ADDRESS_FORMAT_STANDARD                                          0 

 /*  Can Type  */ 
#define CANTP_CANTYPE_CAN20                                                    0 
#define CANTP_CANTYPE_CANFD                                                    1 

 /*  Vector-CanTp extended capabilities  */ 
#define CANTP_GENERATOR_COMPATIBILITY_VERSION                                  0x0004E4FCUL                                                   /* Extended error detection capabilities */ 
#define CANTP_CAN20_PADDING_ACTIVE                                             STD_ON 
#define CANTP_HAVE_PADDING_BYTE                                                STD_OFF 
#define CANTP_PADDING_PATTERN                                                  0xCCU                                                          /* Padding byte to be used for the Tx side if CANTP_HAVE_PADDING_BYTE is ON */ 
#define CANTP_DYN_CHANNEL_ASSIGNMENT                                           STD_OFF 
#define CANTP_STANDARD_ADDRESSING                                              STD_ON 
#define CANTP_EXTENDED_ADDRESSING                                              STD_ON 
#define CANTP_MIXED11_ADDRESSING                                               STD_ON 
#define CANTP_SINGLE_RX_BUFFER_OPTIMIZED                                       STD_OFF 
#define CANTP_RXTX_MAINFUNCTION_API                                            STD_OFF 
#define CANTP_CONSTANT_BS                                                      STD_ON 
#define CANTP_REJECT_FC_WITH_RES_STMIN                                         STD_OFF 
#define CANTP_USE_ONLY_FIRST_FC                                                STD_OFF 
#define CANTP_ENABLE_CHANGE_PARAM                                              STD_OFF 
#define CANTP_ENABLE_READ_PARAM                                                STD_OFF 
#define CANTP_ONLY_NOTIFY_INFORMED_APPL                                        STD_ON 
#define CANTP_TRANSMIT_QUEUE                                                   STD_OFF 
#define CANTP_SUPPORT_LONG_FF                                                  STD_OFF 
#define CANTP_PDUR_API_AR_VERSION                                              0x412 
#define CANTP_SYNC_TRANSMIT                                                    STD_ON 
#define CANTP_SUPPORT_CANFD                                                    STD_OFF 
#define CANTP_STMIN_BY_APPL                                                    STD_OFF 
#define CANTP_DCM_REQUEST_DETECT                                               STD_OFF 
#define CanTp_ApplStartSeparationTime                                           /*  mapping of user defined function to internal name  */  


/* PRQA L:MACROS_3453 */



/* -----------------------------------------------------------------------------
    &&&~ Pre-Compile optimized configuration
 ----------------------------------------------------------------------------- */
 




/* -----------------------------------------------------------------------------
    &&&~ Rx Sdu Handle IDs
----------------------------------------------------------------------------- */
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_0b4e5ed3 0U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_0bfbcf81 1U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_0c44e225 2U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_1a4aae9e 3U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_1c70aeed 4U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_2ed2671b 5U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_3cc05d5a 6U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_6a041a59 7U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_6b50c215 8U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_6c38d736 9U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_6e537029 10U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_6eda9336 11U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_6f288d0c 12U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_9bc05ec2 13U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_9fd60b61 14U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_05d82786 15U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_08e2bc01 16U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_11b4d294 17U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_14edf183 18U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_30eb7850 19U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_33cb3e9e 20U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_39f210d3 21U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_40c57205 22U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_53d85cb5 23U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_66ceed3b 24U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_68a1d221 25U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_90b4ee1f 26U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_97d435bf 27U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_135f1a6f 28U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_155b67c1 29U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_160b460d 30U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_163b0bdd 31U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_602b7b73 32U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_835e9534 33U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_871bc7b1 34U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_917ba177 35U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_948ebe8b 36U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_2541fba3 37U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_2626eddc 38U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_7107e017 39U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_8729f19d 40U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_598434b3 41U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_2609472a 42U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_8388957a 43U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_9872323c 44U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_33326932 45U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_93056798 46U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_a23f8213 47U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_a9722d89 48U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_add9d1da 49U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_b7bc20cf 50U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_b397195b 51U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_ba7ca71e 52U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_bf49619c 53U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_c1f2403e 54U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_c5d4f814 55U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_c9b42c98 56U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_c66f942c 57U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_c046cd74 58U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_d7af4a84 59U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_d61db36a 60U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_d70f6cb5 61U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_de4f6c03 62U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_e0b16505 63U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_e1638777 64U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_f0daeab1 65U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_f5b24442 66U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_f5e91b1b 67U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_f932f12a 68U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_fe9c6258 69U 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_ff43a8b1 70U 

 
/* -----------------------------------------------------------------------------
    &&&~ Tx Sdu Handle IDs
----------------------------------------------------------------------------- */
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu          0U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_0b4e5ed3 1U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_0b28b3c4 2U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_0f9a4f9c 3U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_1a4aae9e 4U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_1c70aeed 5U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_2b6a0a70 6U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_2c8e4400 7U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_2c8eef3f 8U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_2ed2671b 9U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_4c161f1d 10U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_6a041a59 11U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_6b50c215 12U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_6e537029 13U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_6eda9336 14U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_6f288d0c 15U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_9bc05ec2 16U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_9fd60b61 17U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_9fe90810 18U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_05a0c60a 19U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_05d82786 20U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_11b4d294 21U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_30eb7850 22U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_33cb3e9e 23U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_39c7c1db 24U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_39f210d3 25U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_40c57205 26U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_66ceed3b 27U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_68a1d221 28U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_85a43433 29U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_90b4ee1f 30U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_97d435bf 31U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_638f93bd 32U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_072ad05f 33U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_155b67c1 34U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_160b460d 35U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_163b0bdd 36U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_338fdf39 37U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_421e4ec4 38U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_602b7b73 39U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_917ba177 40U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_2541fba3 41U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_8729f19d 42U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_67565e28 43U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_81649aaa 44U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_2609472a 45U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_8388957a 46U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_40316546 47U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_93056798 48U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_a23f8213 49U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_ac62b136 50U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_b77300d6 51U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_b397195b 52U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_ba7ca71e 53U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_bf49619c 54U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_c1f2403e 55U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_c66f942c 56U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_c046cd74 57U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_cd0025ca 58U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_cfd2742b 59U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_d7af4a84 60U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_d61db36a 61U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_d70f6cb5 62U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_de4f6c03 63U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_e1638777 64U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_f0daeab1 65U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_f3c4bb5a 66U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_f5b24442 67U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_f5e91b1b 68U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_f8c8b245 69U 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_ff43a8b1 70U 


/* -----------------------------------------------------------------------------
    &&&~ Rx Pdu IDs
 ----------------------------------------------------------------------------- */
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_fe03b9c5 0U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_dcf96d37     0U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_5a3697c2 1U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_78cc4330     1U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_1a82dd1c 2U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_387809ee     2U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_447498b9 3U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_668e4c4b     3U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_9ca2e2b2 4U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_be583640     4U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_273cbbfc 5U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_05c66f0e     5U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_c2095832 6U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_e0f38cc0     6U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_a580481e 7U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_877a9cec     7U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_ebe1bf0d 8U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c91b6bff     8U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_13a9a87f 9U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_31537c8d     9U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_93a7a9d5 10U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_b15d7d27     10U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_9a1c2f8f 11U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_b8e6fb7d     11U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_36b7149a 12U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_144dc068     12U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_b8cb86dc 13U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_9a31522e     13U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_5615c3d1 14U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_74ef1723     14U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_7e30e495 15U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_5cca3067     15U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_05536183 16U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_27a9b571     16U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_561bc244 17U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_74e116b6     17U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_b93ef70d 18U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_9bc423ff     18U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_46dc57a6 19U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_64268354     19U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_5e62d968 20U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_7c980d9a     20U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_c00998cc 21U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_e2f34c3e     21U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_b1472493 22U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_93bdf061     22U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_52d3aa3f 23U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_70297ecd     23U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_e26c1fa4 24U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c096cb56     24U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_47310e07 25U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_65cbdaf5     25U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_20d338ab 26U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_0229ec59     26U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_0a210417 27U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_28dbd0e5     27U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_b73de2d0 28U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_95c73622     28U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_5c415aeb 29U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_7ebb8e19     29U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_f7837c7d 30U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_d579a88f     30U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_65491b5b 31U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_47b3cfa9     31U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_0a7bda08 32U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_28810efa     32U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_e5f0678e 33U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c70ab37c     33U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_2e22b0e3 34U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_0cd86411     34U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_6e9d45e7 35U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_4c679115     35U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_ae8fba73 36U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_8c756e81     36U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_3dcbb367 37U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_1f316795     37U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_7cc5ba27 38U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_5e3f6ed5     38U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_679e1c35 39U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_4564c8c7     39U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_e51b1aae 40U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c7e1ce5c     40U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_14ebb75e 41U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_361163ac     41U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_79805470 42U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_5b7a8082     42U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_e015a674 43U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c2ef7286     43U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_14ea7b0b 44U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_3610aff9     44U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_caf0e2e7 45U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_e80a3615     45U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_a2acba40 46U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_80566eb2     46U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_0630f603     47U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_fc653524     48U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_f5215d2b     49U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu              50U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_2b3a4000     51U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu          52U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_001      53U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_71dc397e 54U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_89f8ff59 55U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_8b06b311 56U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_1b772fca 57U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_4322dc05 58U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_51ea11e5 59U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_9a489703 60U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_4ce4798a 61U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_2679860a 62U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_d3983306 63U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_cc0bb21d 64U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_7d9d2994 65U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_ae8e313f 66U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_1bcf3d59 67U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_16d15085 68U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_6def313d 69U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_adf550fb 70U 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_426219dc 71U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_9778b9b1     72U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c0beb877     73U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_51e36fbf     74U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_715a9875     75U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_25603869     76U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_6c59aa4f     77U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_57a7378c     78U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_71cb145a     79U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_d377e3b9     80U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_07a55d85     81U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_421ce650     82U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_ddd13b60     83U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_b76b68d2     84U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_349983d6     85U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_21f32ee4     86U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_19b1d643     87U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_5a70888a     88U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_7f7d9999     89U 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_28a0dc1f     90U 


/* -----------------------------------------------------------------------------
    &&&~ TxConfirmation Pdu IDs
 ----------------------------------------------------------------------------- */
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_27a9b571 0U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_05536183     0U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_74e116b6 1U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_561bc244     1U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_9bc423ff 2U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_b93ef70d     2U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_64268354 3U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_46dc57a6     3U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_7c980d9a 4U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_5e62d968     4U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_e2f34c3e 5U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_c00998cc     5U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_93bdf061 6U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_b1472493     6U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_70297ecd 7U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_52d3aa3f     7U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_c096cb56 8U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_e26c1fa4     8U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_65cbdaf5 9U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_47310e07     9U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_0229ec59 10U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_20d338ab     10U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_28dbd0e5 11U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_0a210417     11U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_95c73622 12U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_b73de2d0     12U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_7ebb8e19 13U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_5c415aeb     13U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_dcf96d37 14U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_fe03b9c5     14U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_78cc4330 15U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_5a3697c2     15U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_387809ee 16U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_1a82dd1c     16U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_668e4c4b 17U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_447498b9     17U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_be583640 18U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_9ca2e2b2     18U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_05c66f0e 19U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_273cbbfc     19U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_e0f38cc0 20U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_c2095832     20U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_877a9cec 21U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_a580481e     21U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_c91b6bff 22U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_ebe1bf0d     22U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_31537c8d 23U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_13a9a87f     23U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_b15d7d27 24U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_93a7a9d5     24U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_b8e6fb7d 25U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_9a1c2f8f     25U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_144dc068 26U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_36b7149a     26U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_9a31522e 27U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_b8cb86dc     27U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_74ef1723 28U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_5615c3d1     28U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_5cca3067 29U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_7e30e495     29U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_c7e1ce5c 30U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_e51b1aae     30U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_4564c8c7 31U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_679e1c35     31U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_361163ac 32U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_14ebb75e     32U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_5b7a8082 33U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_79805470     33U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_c2ef7286 34U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_e015a674     34U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_3610aff9 35U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_14ea7b0b     35U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_e80a3615 36U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_caf0e2e7     36U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_80566eb2 37U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_a2acba40     37U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_28810efa 38U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_0a7bda08     38U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_d579a88f 39U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_f7837c7d     39U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_47b3cfa9 40U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_65491b5b     40U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_c70ab37c 41U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_e5f0678e     41U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_0cd86411 42U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_2e22b0e3     42U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_4c679115 43U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_6e9d45e7     43U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_8c756e81 44U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_ae8fba73     44U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_1f316795 45U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_3dcbb367     45U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_5e3f6ed5 46U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_7cc5ba27     46U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_0630f603 47U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_fc653524 48U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_f5215d2b 49U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu          50U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_2b3a4000 51U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu              52U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_001          53U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_71dc397e     54U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_89f8ff59     55U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_8b06b311     56U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_1b772fca     57U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_4322dc05     58U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_51ea11e5     59U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_9a489703     60U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_4ce4798a     61U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_2679860a     62U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_d3983306     63U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_cc0bb21d     64U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_7d9d2994     65U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_ae8e313f     66U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_1bcf3d59     67U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_16d15085     68U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_6def313d     69U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_adf550fb     70U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_426219dc     71U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_9778b9b1 72U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_c0beb877 73U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_51e36fbf 74U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_715a9875 75U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_25603869 76U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_6c59aa4f 77U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_57a7378c 78U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_71cb145a 79U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_d377e3b9 80U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_f3f911f3     81U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_2e007fb2     82U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_421ce650 83U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_ddd13b60 84U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_b76b68d2 85U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_349983d6 86U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_9516a986     87U 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_0fcb0b72     88U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_19b1d643 89U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_5a70888a 90U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_7f7d9999 91U 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_28a0dc1f 92U 




 /**********************************************************************************************************************
 * MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanTpPCDataSwitches  CanTp Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANTP_CALCBS                                                  STD_ON
#define CANTP_COMPATIBILITYVERSION                                    STD_ON
#define CANTP_DYNFCPARAMETERS                                         STD_OFF  /**< Deactivateable: 'CanTp_DynFCParameters' Reason: 'Change Paramter Api is disabled' */
#define CANTP_FINALMAGICNUMBER                                        STD_OFF  /**< Deactivateable: 'CanTp_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CANTP_INITDATAHASHCODE                                        STD_OFF  /**< Deactivateable: 'CanTp_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CANTP_RXCHANNELMAP                                            STD_OFF  /**< Deactivateable: 'CanTp_RxChannelMap' Reason: 'Dynamic Channel Assignment is disabled' */
#define CANTP_RXPDUMAP                                                STD_ON
#define CANTP_ADDRESSINGFORMATOFRXPDUMAP                              STD_ON
#define CANTP_RXSDUCFGINDENDIDXOFRXPDUMAP                             STD_ON
#define CANTP_RXSDUCFGINDSTARTIDXOFRXPDUMAP                           STD_ON
#define CANTP_RXSDUCFGINDUSEDOFRXPDUMAP                               STD_ON
#define CANTP_TXSDUCFGINDENDIDXOFRXPDUMAP                             STD_ON
#define CANTP_TXSDUCFGINDSTARTIDXOFRXPDUMAP                           STD_ON
#define CANTP_TXSDUCFGINDUSEDOFRXPDUMAP                               STD_ON
#define CANTP_RXSDUCFG                                                STD_ON
#define CANTP_BLOCKSIZEOFRXSDUCFG                                     STD_ON
#define CANTP_CANIFTXFCPDUIDOFRXSDUCFG                                STD_ON
#define CANTP_CANTYPEOFRXSDUCFG                                       STD_ON
#define CANTP_CHANNELMODEOFRXSDUCFG                                   STD_ON
#define CANTP_NAROFRXSDUCFG                                           STD_ON
#define CANTP_NBROFRXSDUCFG                                           STD_ON
#define CANTP_NCROFRXSDUCFG                                           STD_ON
#define CANTP_PDURRXSDUIDOFRXSDUCFG                                   STD_ON
#define CANTP_RXADDRESSOFRXSDUCFG                                     STD_ON
#define CANTP_RXADDRESSINGFORMATOFRXSDUCFG                            STD_ON
#define CANTP_RXMAXPAYLOADLENGTHOFRXSDUCFG                            STD_ON
#define CANTP_RXPADDINGACTIVATIONOFRXSDUCFG                           STD_ON
#define CANTP_RXPDUIDOFRXSDUCFG                                       STD_ON
#define CANTP_RXTATYPEOFRXSDUCFG                                      STD_ON
#define CANTP_RXWFTMAXOFRXSDUCFG                                      STD_ON
#define CANTP_STMINOFRXSDUCFG                                         STD_ON
#define CANTP_TXFCADDRESSOFRXSDUCFG                                   STD_ON
#define CANTP_TXFCPDUCONFIRMATIONPDUIDOFRXSDUCFG                      STD_ON
#define CANTP_TXSDUCFGIDXOFRXSDUCFG                                   STD_ON
#define CANTP_TXSDUCFGUSEDOFRXSDUCFG                                  STD_ON
#define CANTP_RXSDUCFGIND                                             STD_ON
#define CANTP_RXSDUSNV2HDL                                            STD_ON
#define CANTP_RXSDUCFGIDXOFRXSDUSNV2HDL                               STD_ON
#define CANTP_RXSDUCFGUSEDOFRXSDUSNV2HDL                              STD_ON
#define CANTP_RXSTATE                                                 STD_ON
#define CANTP_SIZEOFCALCBS                                            STD_ON
#define CANTP_SIZEOFRXPDUMAP                                          STD_ON
#define CANTP_SIZEOFRXSDUCFG                                          STD_ON
#define CANTP_SIZEOFRXSDUCFGIND                                       STD_ON
#define CANTP_SIZEOFRXSDUSNV2HDL                                      STD_ON
#define CANTP_SIZEOFRXSTATE                                           STD_ON
#define CANTP_SIZEOFTXSDUCFG                                          STD_ON
#define CANTP_SIZEOFTXSDUCFGIND                                       STD_ON
#define CANTP_SIZEOFTXSDUSNV2HDL                                      STD_ON
#define CANTP_SIZEOFTXSEMAPHORES                                      STD_ON
#define CANTP_SIZEOFTXSTATE                                           STD_ON
#define CANTP_TXCHANNELMAP                                            STD_OFF  /**< Deactivateable: 'CanTp_TxChannelMap' Reason: 'Dynamic Channel Assignment is disabled' */
#define CANTP_TXQUEUE                                                 STD_OFF  /**< Deactivateable: 'CanTp_TxQueue' Reason: 'Transmit Queue is disabled' */
#define CANTP_TXSDUCFG                                                STD_ON
#define CANTP_CANIFTXPDUIDOFTXSDUCFG                                  STD_ON
#define CANTP_CANTYPEOFTXSDUCFG                                       STD_ON
#define CANTP_CHANNELMODEOFTXSDUCFG                                   STD_ON
#define CANTP_NASOFTXSDUCFG                                           STD_ON
#define CANTP_NBSOFTXSDUCFG                                           STD_ON
#define CANTP_NCSOFTXSDUCFG                                           STD_ON
#define CANTP_PDURTXSDUIDOFTXSDUCFG                                   STD_ON
#define CANTP_RXFCADDRESSOFTXSDUCFG                                   STD_ON
#define CANTP_RXFCPDUIDOFTXSDUCFG                                     STD_ON
#define CANTP_RXSDUCFGIDXOFTXSDUCFG                                   STD_ON
#define CANTP_RXSDUCFGUSEDOFTXSDUCFG                                  STD_ON
#define CANTP_TRANSMITCANCELLATIONOFTXSDUCFG                          STD_ON
#define CANTP_TXADDRESSOFTXSDUCFG                                     STD_ON
#define CANTP_TXADDRESSINGFORMATOFTXSDUCFG                            STD_ON
#define CANTP_TXMAXPAYLOADLENGTHOFTXSDUCFG                            STD_ON
#define CANTP_TXPADDINGACTIVATIONOFTXSDUCFG                           STD_ON
#define CANTP_TXPDUCONFIRMATIONPDUIDOFTXSDUCFG                        STD_ON
#define CANTP_TXTATYPEOFTXSDUCFG                                      STD_ON
#define CANTP_TXSDUCFGIND                                             STD_ON
#define CANTP_TXSDUSNV2HDL                                            STD_ON
#define CANTP_TXSDUCFGIDXOFTXSDUSNV2HDL                               STD_ON
#define CANTP_TXSDUCFGUSEDOFTXSDUSNV2HDL                              STD_ON
#define CANTP_TXSEMAPHORES                                            STD_ON
#define CANTP_TXSTATE                                                 STD_ON
#define CANTP_PCCONFIG                                                STD_ON
#define CANTP_CALCBSOFPCCONFIG                                        STD_ON
#define CANTP_COMPATIBILITYVERSIONOFPCCONFIG                          STD_ON
#define CANTP_FINALMAGICNUMBEROFPCCONFIG                              STD_OFF  /**< Deactivateable: 'CanTp_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CANTP_INITDATAHASHCODEOFPCCONFIG                              STD_OFF  /**< Deactivateable: 'CanTp_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CANTP_RXPDUMAPOFPCCONFIG                                      STD_ON
#define CANTP_RXSDUCFGINDOFPCCONFIG                                   STD_ON
#define CANTP_RXSDUCFGOFPCCONFIG                                      STD_ON
#define CANTP_RXSDUSNV2HDLOFPCCONFIG                                  STD_ON
#define CANTP_RXSTATEOFPCCONFIG                                       STD_ON
#define CANTP_SIZEOFCALCBSOFPCCONFIG                                  STD_ON
#define CANTP_SIZEOFRXPDUMAPOFPCCONFIG                                STD_ON
#define CANTP_SIZEOFRXSDUCFGINDOFPCCONFIG                             STD_ON
#define CANTP_SIZEOFRXSDUCFGOFPCCONFIG                                STD_ON
#define CANTP_SIZEOFRXSDUSNV2HDLOFPCCONFIG                            STD_ON
#define CANTP_SIZEOFRXSTATEOFPCCONFIG                                 STD_ON
#define CANTP_SIZEOFTXSDUCFGINDOFPCCONFIG                             STD_ON
#define CANTP_SIZEOFTXSDUCFGOFPCCONFIG                                STD_ON
#define CANTP_SIZEOFTXSDUSNV2HDLOFPCCONFIG                            STD_ON
#define CANTP_SIZEOFTXSEMAPHORESOFPCCONFIG                            STD_ON
#define CANTP_SIZEOFTXSTATEOFPCCONFIG                                 STD_ON
#define CANTP_TXSDUCFGINDOFPCCONFIG                                   STD_ON
#define CANTP_TXSDUCFGOFPCCONFIG                                      STD_ON
#define CANTP_TXSDUSNV2HDLOFPCCONFIG                                  STD_ON
#define CANTP_TXSEMAPHORESOFPCCONFIG                                  STD_ON
#define CANTP_TXSTATEOFPCCONFIG                                       STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCMinNumericValueDefines  CanTp Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define CANTP_MIN_CALCBS                                              0U
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCMaxNumericValueDefines  CanTp Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define CANTP_MAX_CALCBS                                              255U
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCNoReferenceDefines  CanTp No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP                          255U
#define CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP                        255U
#define CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP                          255U
#define CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP                        255U
#define CANTP_NO_TXSDUCFGIDXOFRXSDUCFG                                255U
#define CANTP_NO_RXSDUCFGIND                                          255U
#define CANTP_NO_RXSDUCFGIDXOFRXSDUSNV2HDL                            255U
#define CANTP_NO_RXSDUCFGIDXOFTXSDUCFG                                255U
#define CANTP_NO_TXSDUCFGIND                                          255U
#define CANTP_NO_TXSDUCFGIDXOFTXSDUSNV2HDL                            255U
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCEnumExistsDefines  CanTp Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define CANTP_EXISTS_NORMAL_ADDRESSING_ADDRESSINGFORMATOFRXPDUMAP     STD_ON
#define CANTP_EXISTS_EXTENDED_ADDRESSING_ADDRESSINGFORMATOFRXPDUMAP   STD_OFF
#define CANTP_EXISTS_MIXED11_ADDRESSING_ADDRESSINGFORMATOFRXPDUMAP    STD_OFF
#define CANTP_EXISTS_CAN20_CANTYPEOFRXSDUCFG                          STD_ON
#define CANTP_EXISTS_CANFD_CANTYPEOFRXSDUCFG                          STD_OFF
#define CANTP_EXISTS_HALF_DUPLEX_CHANNELMODEOFRXSDUCFG                STD_OFF
#define CANTP_EXISTS_FULL_DUPLEX_CHANNELMODEOFRXSDUCFG                STD_ON
#define CANTP_EXISTS_NORMAL_ADDRESSING_RXADDRESSINGFORMATOFRXSDUCFG   STD_ON
#define CANTP_EXISTS_EXTENDED_ADDRESSING_RXADDRESSINGFORMATOFRXSDUCFG STD_OFF
#define CANTP_EXISTS_MIXED11_ADDRESSING_RXADDRESSINGFORMATOFRXSDUCFG  STD_OFF
#define CANTP_EXISTS_PHYSICAL_RXTATYPEOFRXSDUCFG                      STD_ON
#define CANTP_EXISTS_FUNCTIONAL_RXTATYPEOFRXSDUCFG                    STD_ON
#define CANTP_EXISTS_CANFD_PHYSICAL_RXTATYPEOFRXSDUCFG                STD_ON
#define CANTP_EXISTS_CANFD_FUNCTIONAL_RXTATYPEOFRXSDUCFG              STD_ON
#define CANTP_EXISTS_CAN20_CANTYPEOFTXSDUCFG                          STD_ON
#define CANTP_EXISTS_CANFD_CANTYPEOFTXSDUCFG                          STD_OFF
#define CANTP_EXISTS_HALF_DUPLEX_CHANNELMODEOFTXSDUCFG                STD_OFF
#define CANTP_EXISTS_FULL_DUPLEX_CHANNELMODEOFTXSDUCFG                STD_ON
#define CANTP_EXISTS_NORMAL_ADDRESSING_TXADDRESSINGFORMATOFTXSDUCFG   STD_ON
#define CANTP_EXISTS_EXTENDED_ADDRESSING_TXADDRESSINGFORMATOFTXSDUCFG STD_OFF
#define CANTP_EXISTS_MIXED11_ADDRESSING_TXADDRESSINGFORMATOFTXSDUCFG  STD_OFF
#define CANTP_EXISTS_PHYSICAL_TXTATYPEOFTXSDUCFG                      STD_ON
#define CANTP_EXISTS_FUNCTIONAL_TXTATYPEOFTXSDUCFG                    STD_ON
#define CANTP_EXISTS_CANFD_PHYSICAL_TXTATYPEOFTXSDUCFG                STD_ON
#define CANTP_EXISTS_CANFD_FUNCTIONAL_TXTATYPEOFTXSDUCFG              STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCEnumDefines  CanTp Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define CANTP_NORMAL_ADDRESSING_ADDRESSINGFORMATOFRXPDUMAP            0x00U
#define CANTP_CAN20_CANTYPEOFRXSDUCFG                                 0x00U
#define CANTP_FULL_DUPLEX_CHANNELMODEOFRXSDUCFG                       0x01U
#define CANTP_NORMAL_ADDRESSING_RXADDRESSINGFORMATOFRXSDUCFG          0x00U
#define CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG                             0x00U
#define CANTP_FUNCTIONAL_RXTATYPEOFRXSDUCFG                           0x01U
#define CANTP_CANFD_PHYSICAL_RXTATYPEOFRXSDUCFG                       0x00U
#define CANTP_CANFD_FUNCTIONAL_RXTATYPEOFRXSDUCFG                     0x01U
#define CANTP_CAN20_CANTYPEOFTXSDUCFG                                 0x00U
#define CANTP_FULL_DUPLEX_CHANNELMODEOFTXSDUCFG                       0x01U
#define CANTP_NORMAL_ADDRESSING_TXADDRESSINGFORMATOFTXSDUCFG          0x00U
#define CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG                             0x00U
#define CANTP_FUNCTIONAL_TXTATYPEOFTXSDUCFG                           0x01U
#define CANTP_CANFD_PHYSICAL_TXTATYPEOFTXSDUCFG                       0x00U
#define CANTP_CANFD_FUNCTIONAL_TXTATYPEOFTXSDUCFG                     0x01U
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCIsReducedToDefineDefines  CanTp Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define CANTP_ISDEF_ADDRESSINGFORMATOFRXPDUMAP                        STD_ON
#define CANTP_ISDEF_RXSDUCFGINDENDIDXOFRXPDUMAP                       STD_OFF
#define CANTP_ISDEF_RXSDUCFGINDSTARTIDXOFRXPDUMAP                     STD_OFF
#define CANTP_ISDEF_RXSDUCFGINDUSEDOFRXPDUMAP                         STD_OFF
#define CANTP_ISDEF_TXSDUCFGINDENDIDXOFRXPDUMAP                       STD_OFF
#define CANTP_ISDEF_TXSDUCFGINDSTARTIDXOFRXPDUMAP                     STD_OFF
#define CANTP_ISDEF_TXSDUCFGINDUSEDOFRXPDUMAP                         STD_OFF
#define CANTP_ISDEF_BLOCKSIZEOFRXSDUCFG                               STD_OFF
#define CANTP_ISDEF_CANIFTXFCPDUIDOFRXSDUCFG                          STD_OFF
#define CANTP_ISDEF_CANTYPEOFRXSDUCFG                                 STD_ON
#define CANTP_ISDEF_CHANNELMODEOFRXSDUCFG                             STD_ON
#define CANTP_ISDEF_NAROFRXSDUCFG                                     STD_OFF
#define CANTP_ISDEF_NBROFRXSDUCFG                                     STD_ON
#define CANTP_ISDEF_NCROFRXSDUCFG                                     STD_OFF
#define CANTP_ISDEF_PDURRXSDUIDOFRXSDUCFG                             STD_OFF
#define CANTP_ISDEF_RXADDRESSOFRXSDUCFG                               STD_ON
#define CANTP_ISDEF_RXADDRESSINGFORMATOFRXSDUCFG                      STD_ON
#define CANTP_ISDEF_RXMAXPAYLOADLENGTHOFRXSDUCFG                      STD_ON
#define CANTP_ISDEF_RXPADDINGACTIVATIONOFRXSDUCFG                     STD_ON
#define CANTP_ISDEF_RXPDUIDOFRXSDUCFG                                 STD_OFF
#define CANTP_ISDEF_RXTATYPEOFRXSDUCFG                                STD_OFF
#define CANTP_ISDEF_RXWFTMAXOFRXSDUCFG                                STD_ON
#define CANTP_ISDEF_STMINOFRXSDUCFG                                   STD_OFF
#define CANTP_ISDEF_TXFCADDRESSOFRXSDUCFG                             STD_ON
#define CANTP_ISDEF_TXFCPDUCONFIRMATIONPDUIDOFRXSDUCFG                STD_OFF
#define CANTP_ISDEF_TXSDUCFGIDXOFRXSDUCFG                             STD_OFF
#define CANTP_ISDEF_TXSDUCFGUSEDOFRXSDUCFG                            STD_OFF
#define CANTP_ISDEF_RXSDUCFGIND                                       STD_OFF
#define CANTP_ISDEF_RXSDUCFGIDXOFRXSDUSNV2HDL                         STD_OFF
#define CANTP_ISDEF_RXSDUCFGUSEDOFRXSDUSNV2HDL                        STD_ON
#define CANTP_ISDEF_CANIFTXPDUIDOFTXSDUCFG                            STD_OFF
#define CANTP_ISDEF_CANTYPEOFTXSDUCFG                                 STD_ON
#define CANTP_ISDEF_CHANNELMODEOFTXSDUCFG                             STD_ON
#define CANTP_ISDEF_NASOFTXSDUCFG                                     STD_ON
#define CANTP_ISDEF_NBSOFTXSDUCFG                                     STD_OFF
#define CANTP_ISDEF_NCSOFTXSDUCFG                                     STD_ON
#define CANTP_ISDEF_PDURTXSDUIDOFTXSDUCFG                             STD_OFF
#define CANTP_ISDEF_RXFCADDRESSOFTXSDUCFG                             STD_ON
#define CANTP_ISDEF_RXFCPDUIDOFTXSDUCFG                               STD_OFF
#define CANTP_ISDEF_RXSDUCFGIDXOFTXSDUCFG                             STD_OFF
#define CANTP_ISDEF_RXSDUCFGUSEDOFTXSDUCFG                            STD_OFF
#define CANTP_ISDEF_TRANSMITCANCELLATIONOFTXSDUCFG                    STD_ON
#define CANTP_ISDEF_TXADDRESSOFTXSDUCFG                               STD_ON
#define CANTP_ISDEF_TXADDRESSINGFORMATOFTXSDUCFG                      STD_ON
#define CANTP_ISDEF_TXMAXPAYLOADLENGTHOFTXSDUCFG                      STD_ON
#define CANTP_ISDEF_TXPADDINGACTIVATIONOFTXSDUCFG                     STD_ON
#define CANTP_ISDEF_TXPDUCONFIRMATIONPDUIDOFTXSDUCFG                  STD_OFF
#define CANTP_ISDEF_TXTATYPEOFTXSDUCFG                                STD_OFF
#define CANTP_ISDEF_TXSDUCFGIND                                       STD_OFF
#define CANTP_ISDEF_TXSDUCFGIDXOFTXSDUSNV2HDL                         STD_OFF
#define CANTP_ISDEF_TXSDUCFGUSEDOFTXSDUSNV2HDL                        STD_ON
#define CANTP_ISDEF_CALCBSOFPCCONFIG                                  STD_ON
#define CANTP_ISDEF_RXPDUMAPOFPCCONFIG                                STD_ON
#define CANTP_ISDEF_RXSDUCFGINDOFPCCONFIG                             STD_ON
#define CANTP_ISDEF_RXSDUCFGOFPCCONFIG                                STD_ON
#define CANTP_ISDEF_RXSDUSNV2HDLOFPCCONFIG                            STD_ON
#define CANTP_ISDEF_RXSTATEOFPCCONFIG                                 STD_ON
#define CANTP_ISDEF_TXSDUCFGINDOFPCCONFIG                             STD_ON
#define CANTP_ISDEF_TXSDUCFGOFPCCONFIG                                STD_ON
#define CANTP_ISDEF_TXSDUSNV2HDLOFPCCONFIG                            STD_ON
#define CANTP_ISDEF_TXSEMAPHORESOFPCCONFIG                            STD_ON
#define CANTP_ISDEF_TXSTATEOFPCCONFIG                                 STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCEqualsAlwaysToDefines  CanTp Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define CANTP_EQ2_ADDRESSINGFORMATOFRXPDUMAP                          CANTP_NORMAL_ADDRESSING_ADDRESSINGFORMATOFRXPDUMAP
#define CANTP_EQ2_RXSDUCFGINDENDIDXOFRXPDUMAP                         
#define CANTP_EQ2_RXSDUCFGINDSTARTIDXOFRXPDUMAP                       
#define CANTP_EQ2_RXSDUCFGINDUSEDOFRXPDUMAP                           
#define CANTP_EQ2_TXSDUCFGINDENDIDXOFRXPDUMAP                         
#define CANTP_EQ2_TXSDUCFGINDSTARTIDXOFRXPDUMAP                       
#define CANTP_EQ2_TXSDUCFGINDUSEDOFRXPDUMAP                           
#define CANTP_EQ2_BLOCKSIZEOFRXSDUCFG                                 
#define CANTP_EQ2_CANIFTXFCPDUIDOFRXSDUCFG                            
#define CANTP_EQ2_CANTYPEOFRXSDUCFG                                   CANTP_CAN20_CANTYPEOFRXSDUCFG
#define CANTP_EQ2_CHANNELMODEOFRXSDUCFG                               CANTP_FULL_DUPLEX_CHANNELMODEOFRXSDUCFG
#define CANTP_EQ2_NAROFRXSDUCFG                                       
#define CANTP_EQ2_NBROFRXSDUCFG                                       21U
#define CANTP_EQ2_NCROFRXSDUCFG                                       
#define CANTP_EQ2_PDURRXSDUIDOFRXSDUCFG                               
#define CANTP_EQ2_RXADDRESSOFRXSDUCFG                                 255U
#define CANTP_EQ2_RXADDRESSINGFORMATOFRXSDUCFG                        CANTP_NORMAL_ADDRESSING_RXADDRESSINGFORMATOFRXSDUCFG
#define CANTP_EQ2_RXMAXPAYLOADLENGTHOFRXSDUCFG                        7U
#define CANTP_EQ2_RXPADDINGACTIVATIONOFRXSDUCFG                       STD_ON
#define CANTP_EQ2_RXPDUIDOFRXSDUCFG                                   
#define CANTP_EQ2_RXTATYPEOFRXSDUCFG                                  
#define CANTP_EQ2_RXWFTMAXOFRXSDUCFG                                  15U
#define CANTP_EQ2_STMINOFRXSDUCFG                                     
#define CANTP_EQ2_TXFCADDRESSOFRXSDUCFG                               255U
#define CANTP_EQ2_TXFCPDUCONFIRMATIONPDUIDOFRXSDUCFG                  
#define CANTP_EQ2_TXSDUCFGIDXOFRXSDUCFG                               
#define CANTP_EQ2_TXSDUCFGUSEDOFRXSDUCFG                              
#define CANTP_EQ2_RXSDUCFGIND                                         
#define CANTP_EQ2_RXSDUCFGIDXOFRXSDUSNV2HDL                           
#define CANTP_EQ2_RXSDUCFGUSEDOFRXSDUSNV2HDL                          TRUE
#define CANTP_EQ2_CANIFTXPDUIDOFTXSDUCFG                              
#define CANTP_EQ2_CANTYPEOFTXSDUCFG                                   CANTP_CAN20_CANTYPEOFTXSDUCFG
#define CANTP_EQ2_CHANNELMODEOFTXSDUCFG                               CANTP_FULL_DUPLEX_CHANNELMODEOFTXSDUCFG
#define CANTP_EQ2_NASOFTXSDUCFG                                       21U
#define CANTP_EQ2_NBSOFTXSDUCFG                                       
#define CANTP_EQ2_NCSOFTXSDUCFG                                       41U
#define CANTP_EQ2_PDURTXSDUIDOFTXSDUCFG                               
#define CANTP_EQ2_RXFCADDRESSOFTXSDUCFG                               255U
#define CANTP_EQ2_RXFCPDUIDOFTXSDUCFG                                 
#define CANTP_EQ2_RXSDUCFGIDXOFTXSDUCFG                               
#define CANTP_EQ2_RXSDUCFGUSEDOFTXSDUCFG                              
#define CANTP_EQ2_TRANSMITCANCELLATIONOFTXSDUCFG                      STD_OFF
#define CANTP_EQ2_TXADDRESSOFTXSDUCFG                                 255U
#define CANTP_EQ2_TXADDRESSINGFORMATOFTXSDUCFG                        CANTP_NORMAL_ADDRESSING_TXADDRESSINGFORMATOFTXSDUCFG
#define CANTP_EQ2_TXMAXPAYLOADLENGTHOFTXSDUCFG                        7U
#define CANTP_EQ2_TXPADDINGACTIVATIONOFTXSDUCFG                       STD_ON
#define CANTP_EQ2_TXPDUCONFIRMATIONPDUIDOFTXSDUCFG                    
#define CANTP_EQ2_TXTATYPEOFTXSDUCFG                                  
#define CANTP_EQ2_TXSDUCFGIND                                         
#define CANTP_EQ2_TXSDUCFGIDXOFTXSDUSNV2HDL                           
#define CANTP_EQ2_TXSDUCFGUSEDOFTXSDUSNV2HDL                          TRUE
#define CANTP_EQ2_CALCBSOFPCCONFIG                                    CanTp_CalcBS
#define CANTP_EQ2_RXPDUMAPOFPCCONFIG                                  CanTp_RxPduMap
#define CANTP_EQ2_RXSDUCFGINDOFPCCONFIG                               CanTp_RxSduCfgInd
#define CANTP_EQ2_RXSDUCFGOFPCCONFIG                                  CanTp_RxSduCfg
#define CANTP_EQ2_RXSDUSNV2HDLOFPCCONFIG                              CanTp_RxSduSnv2Hdl
#define CANTP_EQ2_RXSTATEOFPCCONFIG                                   CanTp_RxState
#define CANTP_EQ2_TXSDUCFGINDOFPCCONFIG                               CanTp_TxSduCfgInd
#define CANTP_EQ2_TXSDUCFGOFPCCONFIG                                  CanTp_TxSduCfg
#define CANTP_EQ2_TXSDUSNV2HDLOFPCCONFIG                              CanTp_TxSduSnv2Hdl
#define CANTP_EQ2_TXSEMAPHORESOFPCCONFIG                              CanTp_TxSemaphores
#define CANTP_EQ2_TXSTATEOFPCCONFIG                                   CanTp_TxState
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCSymbolicInitializationPointers  CanTp Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define CanTp_Config_Ptr                                              NULL_PTR  /**< symbolic identifier which shall be used to initialize 'CanTp' */
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCInitializationSymbols  CanTp Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define CanTp_Config                                                  NULL_PTR  /**< symbolic identifier which could be used to initialize 'CanTp */
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCGeneral  CanTp General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define CANTP_CHECK_INIT_POINTER                                      STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define CANTP_FINAL_MAGIC_NUMBER                                      0x231EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of CanTp */
#define CANTP_INDIVIDUAL_POSTBUILD                                    STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'CanTp' is not configured to be postbuild capable. */
#define CANTP_INIT_DATA                                               CANTP_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define CANTP_INIT_DATA_HASH_CODE                                     -2116084265L  /**< the precompile constant to validate the initialization structure at initialization time of CanTp with a hashcode. The seed value is '0x231EU' */
#define CANTP_USE_ECUM_BSW_ERROR_HOOK                                 STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define CANTP_USE_INIT_POINTER                                        STD_OFF  /**< STD_ON if the init pointer CanTp shall be used. */
/** 
  \}
*/ 


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
  \defgroup  CanTpPCGetConstantDuplicatedRootDataMacros  CanTp Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define CanTp_GetCalcBSOfPCConfig()                                   CanTp_CalcBS  /**< the pointer to CanTp_CalcBS */
#define CanTp_GetCompatibilityVersionOfPCConfig()                     320764UL
#define CanTp_GetRxPduMapOfPCConfig()                                 CanTp_RxPduMap  /**< the pointer to CanTp_RxPduMap */
#define CanTp_GetRxSduCfgIndOfPCConfig()                              CanTp_RxSduCfgInd  /**< the pointer to CanTp_RxSduCfgInd */
#define CanTp_GetRxSduCfgOfPCConfig()                                 CanTp_RxSduCfg  /**< the pointer to CanTp_RxSduCfg */
#define CanTp_GetRxSduSnv2HdlOfPCConfig()                             CanTp_RxSduSnv2Hdl  /**< the pointer to CanTp_RxSduSnv2Hdl */
#define CanTp_GetRxStateOfPCConfig()                                  CanTp_RxState  /**< the pointer to CanTp_RxState */
#define CanTp_GetSizeOfCalcBSOfPCConfig()                             71U  /**< the number of accomplishable value elements in CanTp_CalcBS */
#define CanTp_GetSizeOfRxPduMapOfPCConfig()                           91U  /**< the number of accomplishable value elements in CanTp_RxPduMap */
#define CanTp_GetSizeOfRxSduCfgIndOfPCConfig()                        71U  /**< the number of accomplishable value elements in CanTp_RxSduCfgInd */
#define CanTp_GetSizeOfRxSduCfgOfPCConfig()                           71U  /**< the number of accomplishable value elements in CanTp_RxSduCfg */
#define CanTp_GetSizeOfRxSduSnv2HdlOfPCConfig()                       71U  /**< the number of accomplishable value elements in CanTp_RxSduSnv2Hdl */
#define CanTp_GetSizeOfRxStateOfPCConfig()                            71U  /**< the number of accomplishable value elements in CanTp_RxState */
#define CanTp_GetSizeOfTxSduCfgIndOfPCConfig()                        67U  /**< the number of accomplishable value elements in CanTp_TxSduCfgInd */
#define CanTp_GetSizeOfTxSduCfgOfPCConfig()                           71U  /**< the number of accomplishable value elements in CanTp_TxSduCfg */
#define CanTp_GetSizeOfTxSduSnv2HdlOfPCConfig()                       71U  /**< the number of accomplishable value elements in CanTp_TxSduSnv2Hdl */
#define CanTp_GetSizeOfTxSemaphoresOfPCConfig()                       93U  /**< the number of accomplishable value elements in CanTp_TxSemaphores */
#define CanTp_GetSizeOfTxStateOfPCConfig()                            71U  /**< the number of accomplishable value elements in CanTp_TxState */
#define CanTp_GetTxSduCfgIndOfPCConfig()                              CanTp_TxSduCfgInd  /**< the pointer to CanTp_TxSduCfgInd */
#define CanTp_GetTxSduCfgOfPCConfig()                                 CanTp_TxSduCfg  /**< the pointer to CanTp_TxSduCfg */
#define CanTp_GetTxSduSnv2HdlOfPCConfig()                             CanTp_TxSduSnv2Hdl  /**< the pointer to CanTp_TxSduSnv2Hdl */
#define CanTp_GetTxSemaphoresOfPCConfig()                             CanTp_TxSemaphores  /**< the pointer to CanTp_TxSemaphores */
#define CanTp_GetTxStateOfPCConfig()                                  CanTp_TxState  /**< the pointer to CanTp_TxState */
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCGetDataMacros  CanTp Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define CanTp_GetCalcBS(Index)                                        (CanTp_GetCalcBSOfPCConfig()[(Index)])
#define CanTp_GetRxSduCfgIndEndIdxOfRxPduMap(Index)                   (CanTp_GetRxPduMapOfPCConfig()[(Index)].RxSduCfgIndEndIdxOfRxPduMap)
#define CanTp_GetRxSduCfgIndStartIdxOfRxPduMap(Index)                 (CanTp_GetRxPduMapOfPCConfig()[(Index)].RxSduCfgIndStartIdxOfRxPduMap)
#define CanTp_GetTxSduCfgIndEndIdxOfRxPduMap(Index)                   (CanTp_GetRxPduMapOfPCConfig()[(Index)].TxSduCfgIndEndIdxOfRxPduMap)
#define CanTp_GetTxSduCfgIndStartIdxOfRxPduMap(Index)                 (CanTp_GetRxPduMapOfPCConfig()[(Index)].TxSduCfgIndStartIdxOfRxPduMap)
#define CanTp_GetBlockSizeOfRxSduCfg(Index)                           (CanTp_GetRxSduCfgOfPCConfig()[(Index)].BlockSizeOfRxSduCfg)
#define CanTp_GetCanIfTxFcPduIdOfRxSduCfg(Index)                      (CanTp_GetRxSduCfgOfPCConfig()[(Index)].CanIfTxFcPduIdOfRxSduCfg)
#define CanTp_GetNArOfRxSduCfg(Index)                                 (CanTp_GetRxSduCfgOfPCConfig()[(Index)].NArOfRxSduCfg)
#define CanTp_GetNCrOfRxSduCfg(Index)                                 (CanTp_GetRxSduCfgOfPCConfig()[(Index)].NCrOfRxSduCfg)
#define CanTp_GetPduRRxSduIdOfRxSduCfg(Index)                         (CanTp_GetRxSduCfgOfPCConfig()[(Index)].PduRRxSduIdOfRxSduCfg)
#define CanTp_GetRxPduIdOfRxSduCfg(Index)                             (CanTp_GetRxSduCfgOfPCConfig()[(Index)].RxPduIdOfRxSduCfg)
#define CanTp_GetRxTaTypeOfRxSduCfg(Index)                            (CanTp_GetRxSduCfgOfPCConfig()[(Index)].RxTaTypeOfRxSduCfg)
#define CanTp_GetSTminOfRxSduCfg(Index)                               (CanTp_GetRxSduCfgOfPCConfig()[(Index)].STminOfRxSduCfg)
#define CanTp_GetTxFcPduConfirmationPduIdOfRxSduCfg(Index)            (CanTp_GetRxSduCfgOfPCConfig()[(Index)].TxFcPduConfirmationPduIdOfRxSduCfg)
#define CanTp_GetTxSduCfgIdxOfRxSduCfg(Index)                         (CanTp_GetRxSduCfgOfPCConfig()[(Index)].TxSduCfgIdxOfRxSduCfg)
#define CanTp_GetRxSduCfgInd(Index)                                   (CanTp_GetRxSduCfgIndOfPCConfig()[(Index)])
#define CanTp_GetRxSduCfgIdxOfRxSduSnv2Hdl(Index)                     (CanTp_GetRxSduSnv2HdlOfPCConfig()[(Index)].RxSduCfgIdxOfRxSduSnv2Hdl)
#define CanTp_GetRxState(Index)                                       (CanTp_GetRxStateOfPCConfig()[(Index)])
#define CanTp_GetCanIfTxPduIdOfTxSduCfg(Index)                        (CanTp_GetTxSduCfgOfPCConfig()[(Index)].CanIfTxPduIdOfTxSduCfg)
#define CanTp_GetNBsOfTxSduCfg(Index)                                 (CanTp_GetTxSduCfgOfPCConfig()[(Index)].NBsOfTxSduCfg)
#define CanTp_GetPduRTxSduIdOfTxSduCfg(Index)                         (CanTp_GetTxSduCfgOfPCConfig()[(Index)].PduRTxSduIdOfTxSduCfg)
#define CanTp_GetRxFcPduIdOfTxSduCfg(Index)                           (CanTp_GetTxSduCfgOfPCConfig()[(Index)].RxFcPduIdOfTxSduCfg)
#define CanTp_GetRxSduCfgIdxOfTxSduCfg(Index)                         (CanTp_GetTxSduCfgOfPCConfig()[(Index)].RxSduCfgIdxOfTxSduCfg)
#define CanTp_GetTxPduConfirmationPduIdOfTxSduCfg(Index)              (CanTp_GetTxSduCfgOfPCConfig()[(Index)].TxPduConfirmationPduIdOfTxSduCfg)
#define CanTp_GetTxTaTypeOfTxSduCfg(Index)                            (CanTp_GetTxSduCfgOfPCConfig()[(Index)].TxTaTypeOfTxSduCfg)
#define CanTp_GetTxSduCfgInd(Index)                                   (CanTp_GetTxSduCfgIndOfPCConfig()[(Index)])
#define CanTp_GetTxSduCfgIdxOfTxSduSnv2Hdl(Index)                     (CanTp_GetTxSduSnv2HdlOfPCConfig()[(Index)].TxSduCfgIdxOfTxSduSnv2Hdl)
#define CanTp_GetTxSemaphores(Index)                                  (CanTp_GetTxSemaphoresOfPCConfig()[(Index)])
#define CanTp_GetTxState(Index)                                       (CanTp_GetTxStateOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCGetDeduplicatedDataMacros  CanTp Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define CanTp_GetCompatibilityVersion()                               CanTp_GetCompatibilityVersionOfPCConfig()
#define CanTp_GetAddressingFormatOfRxPduMap(Index)                    CANTP_NORMAL_ADDRESSING_ADDRESSINGFORMATOFRXPDUMAP
#define CanTp_IsRxSduCfgIndUsedOfRxPduMap(Index)                      (((boolean)(CanTp_GetRxSduCfgIndStartIdxOfRxPduMap(Index) != CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to CanTp_RxSduCfgInd */
#define CanTp_IsTxSduCfgIndUsedOfRxPduMap(Index)                      (((boolean)(CanTp_GetTxSduCfgIndStartIdxOfRxPduMap(Index) != CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to CanTp_TxSduCfgInd */
#define CanTp_GetCanTypeOfRxSduCfg(Index)                             CANTP_CAN20_CANTYPEOFRXSDUCFG
#define CanTp_GetChannelModeOfRxSduCfg(Index)                         CANTP_FULL_DUPLEX_CHANNELMODEOFRXSDUCFG
#define CanTp_GetNBrOfRxSduCfg(Index)                                 21U
#define CanTp_GetRxAddressOfRxSduCfg(Index)                           255U
#define CanTp_GetRxAddressingFormatOfRxSduCfg(Index)                  CANTP_NORMAL_ADDRESSING_RXADDRESSINGFORMATOFRXSDUCFG
#define CanTp_GetRxMaxPayloadLengthOfRxSduCfg(Index)                  7U
#define CanTp_IsRxPaddingActivationOfRxSduCfg(Index)                  STD_ON
#define CanTp_GetRxWftMaxOfRxSduCfg(Index)                            15U
#define CanTp_GetTxFcAddressOfRxSduCfg(Index)                         255U
#define CanTp_IsTxSduCfgUsedOfRxSduCfg(Index)                         (((boolean)(CanTp_GetTxSduCfgIdxOfRxSduCfg(Index) != CANTP_NO_TXSDUCFGIDXOFRXSDUCFG)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanTp_TxSduCfg */
#define CanTp_IsRxSduCfgUsedOfRxSduSnv2Hdl(Index)                     (((TRUE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanTp_RxSduCfg */
#define CanTp_GetSizeOfCalcBS()                                       CanTp_GetSizeOfCalcBSOfPCConfig()
#define CanTp_GetSizeOfRxPduMap()                                     CanTp_GetSizeOfRxPduMapOfPCConfig()
#define CanTp_GetSizeOfRxSduCfg()                                     CanTp_GetSizeOfRxSduCfgOfPCConfig()
#define CanTp_GetSizeOfRxSduCfgInd()                                  CanTp_GetSizeOfRxSduCfgIndOfPCConfig()
#define CanTp_GetSizeOfRxSduSnv2Hdl()                                 CanTp_GetSizeOfRxSduSnv2HdlOfPCConfig()
#define CanTp_GetSizeOfRxState()                                      CanTp_GetSizeOfRxStateOfPCConfig()
#define CanTp_GetSizeOfTxSduCfg()                                     CanTp_GetSizeOfTxSduCfgOfPCConfig()
#define CanTp_GetSizeOfTxSduCfgInd()                                  CanTp_GetSizeOfTxSduCfgIndOfPCConfig()
#define CanTp_GetSizeOfTxSduSnv2Hdl()                                 CanTp_GetSizeOfTxSduSnv2HdlOfPCConfig()
#define CanTp_GetSizeOfTxSemaphores()                                 CanTp_GetSizeOfTxSemaphoresOfPCConfig()
#define CanTp_GetSizeOfTxState()                                      CanTp_GetSizeOfTxStateOfPCConfig()
#define CanTp_GetCanTypeOfTxSduCfg(Index)                             CANTP_CAN20_CANTYPEOFTXSDUCFG
#define CanTp_GetChannelModeOfTxSduCfg(Index)                         CANTP_FULL_DUPLEX_CHANNELMODEOFTXSDUCFG
#define CanTp_GetNAsOfTxSduCfg(Index)                                 21U
#define CanTp_GetNCsOfTxSduCfg(Index)                                 41U
#define CanTp_GetRxFcAddressOfTxSduCfg(Index)                         255U
#define CanTp_IsRxSduCfgUsedOfTxSduCfg(Index)                         (((boolean)(CanTp_GetRxSduCfgIdxOfTxSduCfg(Index) != CANTP_NO_RXSDUCFGIDXOFTXSDUCFG)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanTp_RxSduCfg */
#define CanTp_IsTransmitCancellationOfTxSduCfg(Index)                 STD_OFF
#define CanTp_GetTxAddressOfTxSduCfg(Index)                           255U
#define CanTp_GetTxAddressingFormatOfTxSduCfg(Index)                  CANTP_NORMAL_ADDRESSING_TXADDRESSINGFORMATOFTXSDUCFG
#define CanTp_GetTxMaxPayloadLengthOfTxSduCfg(Index)                  7U
#define CanTp_IsTxPaddingActivationOfTxSduCfg(Index)                  STD_ON
#define CanTp_IsTxSduCfgUsedOfTxSduSnv2Hdl(Index)                     (((TRUE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanTp_TxSduCfg */
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCSetDataMacros  CanTp Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define CanTp_SetCalcBS(Index, Value)                                 CanTp_GetCalcBSOfPCConfig()[(Index)] = (Value)
#define CanTp_SetRxState(Index, Value)                                CanTp_GetRxStateOfPCConfig()[(Index)] = (Value)
#define CanTp_SetTxSemaphores(Index, Value)                           CanTp_GetTxSemaphoresOfPCConfig()[(Index)] = (Value)
#define CanTp_SetTxState(Index, Value)                                CanTp_GetTxStateOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCHasMacros  CanTp Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define CanTp_HasCalcBS()                                             (TRUE != FALSE)
#define CanTp_HasCompatibilityVersion()                               (TRUE != FALSE)
#define CanTp_HasRxPduMap()                                           (TRUE != FALSE)
#define CanTp_HasAddressingFormatOfRxPduMap()                         (TRUE != FALSE)
#define CanTp_HasRxSduCfgIndEndIdxOfRxPduMap()                        (TRUE != FALSE)
#define CanTp_HasRxSduCfgIndStartIdxOfRxPduMap()                      (TRUE != FALSE)
#define CanTp_HasRxSduCfgIndUsedOfRxPduMap()                          (TRUE != FALSE)
#define CanTp_HasTxSduCfgIndEndIdxOfRxPduMap()                        (TRUE != FALSE)
#define CanTp_HasTxSduCfgIndStartIdxOfRxPduMap()                      (TRUE != FALSE)
#define CanTp_HasTxSduCfgIndUsedOfRxPduMap()                          (TRUE != FALSE)
#define CanTp_HasRxSduCfg()                                           (TRUE != FALSE)
#define CanTp_HasBlockSizeOfRxSduCfg()                                (TRUE != FALSE)
#define CanTp_HasCanIfTxFcPduIdOfRxSduCfg()                           (TRUE != FALSE)
#define CanTp_HasCanTypeOfRxSduCfg()                                  (TRUE != FALSE)
#define CanTp_HasChannelModeOfRxSduCfg()                              (TRUE != FALSE)
#define CanTp_HasNArOfRxSduCfg()                                      (TRUE != FALSE)
#define CanTp_HasNBrOfRxSduCfg()                                      (TRUE != FALSE)
#define CanTp_HasNCrOfRxSduCfg()                                      (TRUE != FALSE)
#define CanTp_HasPduRRxSduIdOfRxSduCfg()                              (TRUE != FALSE)
#define CanTp_HasRxAddressOfRxSduCfg()                                (TRUE != FALSE)
#define CanTp_HasRxAddressingFormatOfRxSduCfg()                       (TRUE != FALSE)
#define CanTp_HasRxMaxPayloadLengthOfRxSduCfg()                       (TRUE != FALSE)
#define CanTp_HasRxPaddingActivationOfRxSduCfg()                      (TRUE != FALSE)
#define CanTp_HasRxPduIdOfRxSduCfg()                                  (TRUE != FALSE)
#define CanTp_HasRxTaTypeOfRxSduCfg()                                 (TRUE != FALSE)
#define CanTp_HasRxWftMaxOfRxSduCfg()                                 (TRUE != FALSE)
#define CanTp_HasSTminOfRxSduCfg()                                    (TRUE != FALSE)
#define CanTp_HasTxFcAddressOfRxSduCfg()                              (TRUE != FALSE)
#define CanTp_HasTxFcPduConfirmationPduIdOfRxSduCfg()                 (TRUE != FALSE)
#define CanTp_HasTxSduCfgIdxOfRxSduCfg()                              (TRUE != FALSE)
#define CanTp_HasTxSduCfgUsedOfRxSduCfg()                             (TRUE != FALSE)
#define CanTp_HasRxSduCfgInd()                                        (TRUE != FALSE)
#define CanTp_HasRxSduSnv2Hdl()                                       (TRUE != FALSE)
#define CanTp_HasRxSduCfgIdxOfRxSduSnv2Hdl()                          (TRUE != FALSE)
#define CanTp_HasRxSduCfgUsedOfRxSduSnv2Hdl()                         (TRUE != FALSE)
#define CanTp_HasRxState()                                            (TRUE != FALSE)
#define CanTp_HasSizeOfCalcBS()                                       (TRUE != FALSE)
#define CanTp_HasSizeOfRxPduMap()                                     (TRUE != FALSE)
#define CanTp_HasSizeOfRxSduCfg()                                     (TRUE != FALSE)
#define CanTp_HasSizeOfRxSduCfgInd()                                  (TRUE != FALSE)
#define CanTp_HasSizeOfRxSduSnv2Hdl()                                 (TRUE != FALSE)
#define CanTp_HasSizeOfRxState()                                      (TRUE != FALSE)
#define CanTp_HasSizeOfTxSduCfg()                                     (TRUE != FALSE)
#define CanTp_HasSizeOfTxSduCfgInd()                                  (TRUE != FALSE)
#define CanTp_HasSizeOfTxSduSnv2Hdl()                                 (TRUE != FALSE)
#define CanTp_HasSizeOfTxSemaphores()                                 (TRUE != FALSE)
#define CanTp_HasSizeOfTxState()                                      (TRUE != FALSE)
#define CanTp_HasTxSduCfg()                                           (TRUE != FALSE)
#define CanTp_HasCanIfTxPduIdOfTxSduCfg()                             (TRUE != FALSE)
#define CanTp_HasCanTypeOfTxSduCfg()                                  (TRUE != FALSE)
#define CanTp_HasChannelModeOfTxSduCfg()                              (TRUE != FALSE)
#define CanTp_HasNAsOfTxSduCfg()                                      (TRUE != FALSE)
#define CanTp_HasNBsOfTxSduCfg()                                      (TRUE != FALSE)
#define CanTp_HasNCsOfTxSduCfg()                                      (TRUE != FALSE)
#define CanTp_HasPduRTxSduIdOfTxSduCfg()                              (TRUE != FALSE)
#define CanTp_HasRxFcAddressOfTxSduCfg()                              (TRUE != FALSE)
#define CanTp_HasRxFcPduIdOfTxSduCfg()                                (TRUE != FALSE)
#define CanTp_HasRxSduCfgIdxOfTxSduCfg()                              (TRUE != FALSE)
#define CanTp_HasRxSduCfgUsedOfTxSduCfg()                             (TRUE != FALSE)
#define CanTp_HasTransmitCancellationOfTxSduCfg()                     (TRUE != FALSE)
#define CanTp_HasTxAddressOfTxSduCfg()                                (TRUE != FALSE)
#define CanTp_HasTxAddressingFormatOfTxSduCfg()                       (TRUE != FALSE)
#define CanTp_HasTxMaxPayloadLengthOfTxSduCfg()                       (TRUE != FALSE)
#define CanTp_HasTxPaddingActivationOfTxSduCfg()                      (TRUE != FALSE)
#define CanTp_HasTxPduConfirmationPduIdOfTxSduCfg()                   (TRUE != FALSE)
#define CanTp_HasTxTaTypeOfTxSduCfg()                                 (TRUE != FALSE)
#define CanTp_HasTxSduCfgInd()                                        (TRUE != FALSE)
#define CanTp_HasTxSduSnv2Hdl()                                       (TRUE != FALSE)
#define CanTp_HasTxSduCfgIdxOfTxSduSnv2Hdl()                          (TRUE != FALSE)
#define CanTp_HasTxSduCfgUsedOfTxSduSnv2Hdl()                         (TRUE != FALSE)
#define CanTp_HasTxSemaphores()                                       (TRUE != FALSE)
#define CanTp_HasTxState()                                            (TRUE != FALSE)
#define CanTp_HasPCConfig()                                           (TRUE != FALSE)
#define CanTp_HasCalcBSOfPCConfig()                                   (TRUE != FALSE)
#define CanTp_HasCompatibilityVersionOfPCConfig()                     (TRUE != FALSE)
#define CanTp_HasRxPduMapOfPCConfig()                                 (TRUE != FALSE)
#define CanTp_HasRxSduCfgIndOfPCConfig()                              (TRUE != FALSE)
#define CanTp_HasRxSduCfgOfPCConfig()                                 (TRUE != FALSE)
#define CanTp_HasRxSduSnv2HdlOfPCConfig()                             (TRUE != FALSE)
#define CanTp_HasRxStateOfPCConfig()                                  (TRUE != FALSE)
#define CanTp_HasSizeOfCalcBSOfPCConfig()                             (TRUE != FALSE)
#define CanTp_HasSizeOfRxPduMapOfPCConfig()                           (TRUE != FALSE)
#define CanTp_HasSizeOfRxSduCfgIndOfPCConfig()                        (TRUE != FALSE)
#define CanTp_HasSizeOfRxSduCfgOfPCConfig()                           (TRUE != FALSE)
#define CanTp_HasSizeOfRxSduSnv2HdlOfPCConfig()                       (TRUE != FALSE)
#define CanTp_HasSizeOfRxStateOfPCConfig()                            (TRUE != FALSE)
#define CanTp_HasSizeOfTxSduCfgIndOfPCConfig()                        (TRUE != FALSE)
#define CanTp_HasSizeOfTxSduCfgOfPCConfig()                           (TRUE != FALSE)
#define CanTp_HasSizeOfTxSduSnv2HdlOfPCConfig()                       (TRUE != FALSE)
#define CanTp_HasSizeOfTxSemaphoresOfPCConfig()                       (TRUE != FALSE)
#define CanTp_HasSizeOfTxStateOfPCConfig()                            (TRUE != FALSE)
#define CanTp_HasTxSduCfgIndOfPCConfig()                              (TRUE != FALSE)
#define CanTp_HasTxSduCfgOfPCConfig()                                 (TRUE != FALSE)
#define CanTp_HasTxSduSnv2HdlOfPCConfig()                             (TRUE != FALSE)
#define CanTp_HasTxSemaphoresOfPCConfig()                             (TRUE != FALSE)
#define CanTp_HasTxStateOfPCConfig()                                  (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCIncrementDataMacros  CanTp Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define CanTp_IncCalcBS(Index)                                        CanTp_GetCalcBS(Index)++
#define CanTp_IncRxState(Index)                                       CanTp_GetRxState(Index)++
#define CanTp_IncTxSemaphores(Index)                                  CanTp_GetTxSemaphores(Index)++
#define CanTp_IncTxState(Index)                                       CanTp_GetTxState(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCDecrementDataMacros  CanTp Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define CanTp_DecCalcBS(Index)                                        CanTp_GetCalcBS(Index)--
#define CanTp_DecRxState(Index)                                       CanTp_GetRxState(Index)--
#define CanTp_DecTxSemaphores(Index)                                  CanTp_GetTxSemaphores(Index)--
#define CanTp_DecTxState(Index)                                       CanTp_GetTxState(Index)--
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

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanTpLTDataSwitches  CanTp Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANTP_LTCONFIG                                                STD_OFF  /**< Deactivateable: 'CanTp_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
/** 
  \}
*/ 


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

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanTpPBDataSwitches  CanTp Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANTP_PBCONFIG                                                STD_OFF  /**< Deactivateable: 'CanTp_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANTP_LTCONFIGIDXOFPBCONFIG                                   STD_OFF  /**< Deactivateable: 'CanTp_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANTP_PCCONFIGIDXOFPBCONFIG                                   STD_OFF  /**< Deactivateable: 'CanTp_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 


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


#endif /* CANTP_CFG_H */
