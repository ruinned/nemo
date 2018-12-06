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
 *            Module: CanIf
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanIf_Cfg.h
 *   Generation Time: 2018-11-22 20:39:02
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

/**********************************************************************************************************************
 * WARNING: This code has been generated with reduced-severity errors. 
 * The created output files contain errors that have been ignored. Usage of the created files can lead to unpredictable behavior of the embedded code.
 * Usage of the created files happens at own risk!
 * 
 * [Warning] J1939NM01021 - J1939 network addresses mismatch 
 * - [Reduced Severity due to User-Defined Parameter] The CanIf Tx Pdu contains a source address (value=0x0F) that is not configured for any J1939Nm node.
 * Erroneous configuration elements:
 * /ActiveEcuC/J1939Nm/J1939NmConfigSet/FMSNet_J1939_44d89c3b (DefRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmChannel)
 * /ActiveEcuC/CanIf/CanIfInitCfg/ERC1_x_EMSRetFMS_oFMSNet_d863a207_Tx[0:CanIfTxPduCanId](value=418381839) (DefRef: /MICROSAR/CanIf/CanIfInitCfg/CanIfTxPduCfg/CanIfTxPduCanId)
 * /ActiveEcuC/J1939Nm/J1939NmConfigSet/CIOM_4d5cd289[0:J1939NmNodePreferredAddress](value=49) (DefRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodePreferredAddress)
 *********************************************************************************************************************/
#if !defined(CANIF_CFG_H)
#define CANIF_CFG_H

/* PRQA S 0850 EOF */ /* MD_MSR_19.8 */
/* PRQA S 3453 EOF */ /* MD_MSR_19.7 */
/* PRQA S 0857 EOF */ /* MD_CanIf_1.1_NumberOfMacroDefinitions */
/* PRQA S 0777 EOF */ /* MD_CanIf_5.1 */

/**********************************************************************************************************************
  \file  Includes
**********************************************************************************************************************/
/** 
  \brief  Required external files.
*/
#include "Can.h"




/**********************************************************************************************************************
  \def  Version defines
**********************************************************************************************************************/

#define CANIF_CFG5_VERSION                                 0x0408U
#define CANIF_CFG5_RELEASE_VERSION                         0x00U
#define IF_ASRIFCAN_GENTOOL_CFG5_MAJOR_VERSION             0x04U
#define IF_ASRIFCAN_GENTOOL_CFG5_MINOR_VERSION             0x08U
#define IF_ASRIFCAN_GENTOOL_CFG5_PATCH_VERSION             0x00U

#define CANIF_CFG5_GENERATOR_COMPATIBILITY_VERSION         0x0212U

/**********************************************************************************************************************
  \def  Switches
**********************************************************************************************************************/

#define CANIF_MULTIPLE_TX_BASICCANS                        STD_OFF
#define CANIF_TRANSMIT_BUFFER                              STD_ON /* Signals if Tx-buffer is enabled at all in CanIf. The value is determined from parameter "CanIfPublicTxBuffering". */
#define CANIF_TRANSMIT_BUFFER_PRIO_BY_CANID                STD_ON
#define CANIF_TRANSMIT_BUFFER_FIFO                         STD_OFF
#define CANIF_BITQUEUE                                     STD_ON
#define CANIF_STATIC_FD_TXQUEUE                            STD_OFF
#define CANIF_WAKEUP_SUPPORT                               STD_OFF
#define CANIF_WAKEUP_VALIDATION                            STD_OFF
#define CANIF_WAKEUP_VALID_ALL_RX_MSGS                     STD_OFF
#define CANIF_WAKEUP_VALID_ONLY_NM_RX_MSGS                 STD_OFF
#define CANIF_DEV_ERROR_DETECT                             STD_OFF
#define CANIF_DEV_ERROR_REPORT                             STD_OFF
#define CANIF_TRANSMIT_CANCELLATION                        STD_OFF
#define CANIF_CANCEL_SUPPORT_API                           STD_ON
#define CANIF_VERSION_INFO_API                             STD_OFF
#define CANIF_DLC_CHECK                                    STD_ON
#define CANIF_SUPPORT_NMOSEK_INDICATION                    STD_OFF
#define CANIF_TRCV_HANDLING                                STD_OFF
#define CANIF_TRCV_MAPPING                                 STD_OFF
#define CANIF_PN_TRCV_HANDLING                             STD_OFF
#define CANIF_EXTENDEDID_SUPPORT                           STD_ON
#define CANIF_ONE_CONTROLLER_OPTIMIZATION                  STD_OFF
#define CANIF_SETDYNAMICTXID_API                           STD_OFF
#define CANIF_PN_WU_TX_PDU_FILTER                          STD_OFF
#define CANIF_PUBLIC_TX_CONFIRM_POLLING_SUPPORT            STD_OFF
#define CANIF_RX_INDICATION_TYPE_I_IS_USED                 STD_OFF
#define CANIF_RX_INDICATION_TYPE_IV_IS_USED                STD_OFF
#define CANIF_CHANGE_BAUDRATE_SUPPORT                      STD_OFF
#define CANIF_SET_BAUDRATE_API                             STD_OFF
#define CANIF_META_DATA_RX_SUPPORT                         STD_ON
#define CANIF_META_DATA_TX_SUPPORT                         STD_ON
#define CANIF_J1939_DYN_ADDR_SUPPORT                       CANIF_J1939_DYN_ADDR_DISABLED
#define CANIF_MULTIPLE_CANDRV_SUPPORT                      STD_OFF
#define CANIF_RX_SEARCH_CONSIDER_MSG_TYPE                  STD_OFF
#define CANIF_ECUC_SAFE_BSW_CHECKS                         STD_OFF
#define CANIF_EXTENDED_RAM_CHECK_SUPPORT                   STD_OFF
#define CANIF_DATA_CHECKSUM_RX_SUPPORT                     STD_OFF
#define CANIF_DATA_CHECKSUM_TX_SUPPORT                     STD_OFF
#define CANIF_SET_PDU_RECEPTION_MODE_SUPPORT               STD_OFF 

#define CANIF_SUPPRESS_EXTENDED_VERSION_CHECK

#ifndef CANIF_USE_DUMMY_FUNCTIONS
#define CANIF_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef CANIF_USE_DUMMY_STATEMENT
#define CANIF_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef CANIF_DUMMY_STATEMENT
#define CANIF_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CANIF_DUMMY_STATEMENT_CONST
#define CANIF_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CANIF_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define CANIF_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef CANIF_ATOMIC_VARIABLE_ACCESS
#define CANIF_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef CANIF_PROCESSOR_MPC5746C
#define CANIF_PROCESSOR_MPC5746C
#endif
#ifndef CANIF_COMP_DIAB
#define CANIF_COMP_DIAB
#endif
#ifndef CANIF_GEN_GENERATOR_MSR
#define CANIF_GEN_GENERATOR_MSR
#endif
#ifndef CANIF_CPUTYPE_BITORDER_MSB2LSB
#define CANIF_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef CANIF_CONFIGURATION_VARIANT_PRECOMPILE
#define CANIF_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef CANIF_CONFIGURATION_VARIANT_LINKTIME
#define CANIF_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef CANIF_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define CANIF_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef CANIF_CONFIGURATION_VARIANT
#define CANIF_CONFIGURATION_VARIANT CANIF_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef CANIF_POSTBUILD_VARIANT_SUPPORT
#define CANIF_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define CANIF_CPU_TYPE_SET_IN_ECUC_MODULE                  CPU_TYPE_32

/**********************************************************************************************************************
  \def  Search algorithm
**********************************************************************************************************************/
#define CANIF_SEARCH_ALGORITHM                             CANIF_LINEAR


/**********************************************************************************************************************
  \def  Configuration variant
**********************************************************************************************************************/
#define CANIF_CONFIG_VARIANT                               CANIF_CFGVAR_PRECOMPILETIME


/**********************************************************************************************************************
  Type definitions
**********************************************************************************************************************/

/**********************************************************************************************************************
  \def  Tx-buffer - queue size type
**********************************************************************************************************************/
typedef uint8 CanIf_TxBufferSizeType;


/**********************************************************************************************************************
  \file  Includes
**********************************************************************************************************************/
#include "CanIf_Types.h"

/**********************************************************************************************************************
  \def  Memory mapping keywords
**********************************************************************************************************************/
#define CANIF_XCFG                                         CANIF_CONST
#define CANIF_VAR_XCFG_NOINIT                              CANIF_VAR_NOINIT


/**********************************************************************************************************************
  \def  Invalid PDU handle
**********************************************************************************************************************/
#define CanIf_TxPduHnd_INVALID                             0xFFFFU
#define CanIf_RxPduHnd_INVALID                             0xFFFFU


/**********************************************************************************************************************
  \def  Tx-buffer - handling types
**********************************************************************************************************************/
#define CANIF_TXBUFFER_HANDLINGTYPE_PRIOBYCANID                                                             1U
#define CANIF_TXBUFFER_HANDLINGTYPE_FIFO                                                                    2U
#define CANIF_TXBUFFER_HANDLINGTYPE_NONE                                                                    3U



/**********************************************************************************************************************
  \def  CAN controller channels - symbolic handles
**********************************************************************************************************************/

#define CanIfConf_CanIfCtrlCfg_CT_Backbone1J1939_198bcf1c                                           0U
#define CanIfConf_CanIfCtrlCfg_CT_CabSubnet_d2ff0fbe                                                1U
#define CanIfConf_CanIfCtrlCfg_CT_SecuritySubnet_f5346ae6                                           2U
#define CanIfConf_CanIfCtrlCfg_CT_FMSNet_119a8706                                                   3U
#define CanIfConf_CanIfCtrlCfg_CT_Backbone2_34cfe263                                                4U








/**********************************************************************************************************************
  \def  Tx PDU handles
**********************************************************************************************************************/

#define CanIfTxPduHnd_J1939NmTxPdu_fa509995                                                         0U
#define CanIfTxPduHnd_CIOM_BB1_01P_oBackbone1J1939_55a00301_Tx                                      1U
#define CanIfTxPduHnd_FcNPdu_Backbone1J1939_dba64907                                                2U
#define CanIfTxPduHnd_AckmTxPdu_Backbone1J1939_54966c1b                                             3U
#define CanIfTxPduHnd_IntTesterTGW2FuncDiagMsg_Cab_Tp_oCabSubnet_96ec8334_Tx                        4U
#define CanIfTxPduHnd_TesterFuncDiagMsg_Cab_Tp_oCabSubnet_d293ecaa_Tx                               5U
#define CanIfTxPduHnd_DiagReqMsgIntTGW2_A2_F4_Cab_Tp_oCabSubnet_fc611706_Tx                         6U
#define CanIfTxPduHnd_DiagReqMsgIntHMIIOM_A2_F3_Cab_Tp_oCabSubnet_fcbc8d7d_Tx                       7U
#define CanIfTxPduHnd_PhysDiagReqMsg_A2_F2_Cab_Tp_oCabSubnet_6d74e481_Tx                            8U
#define CanIfTxPduHnd_DiagReqMsgIntTGW2_98_F4_Cab_Tp_oCabSubnet_2e8c3543_Tx                         9U
#define CanIfTxPduHnd_DiagReqMsgIntHMIIOM_98_F3_Cab_Tp_oCabSubnet_2daafb4e_Tx                       10U
#define CanIfTxPduHnd_PhysDiagReqMsg_98_F2_Cab_Tp_oCabSubnet_4c51814f_Tx                            11U
#define CanIfTxPduHnd_DiagReqMsgIntTGW2_53_F4_Cab_Tp_oCabSubnet_75ef26c1_Tx                         12U
#define CanIfTxPduHnd_DiagReqMsgIntHMIIOM_53_F3_Cab_Tp_oCabSubnet_e9059d48_Tx                       13U
#define CanIfTxPduHnd_PhysDiagReqMsg_53_F2_Cab_Tp_oCabSubnet_9abe6f67_Tx                            14U
#define CanIfTxPduHnd_DiagReqMsgIntTGW2_26_F4_Cab_Tp_oCabSubnet_b42402a4_Tx                         15U
#define CanIfTxPduHnd_DiagReqMsgIntHMIIOM_26_F3_Cab_Tp_oCabSubnet_2e1f9ada_Tx                       16U
#define CanIfTxPduHnd_PhysDiagReqMsg_26_F2_Cab_Tp_oCabSubnet_e2a6386f_Tx                            17U
#define CanIfTxPduHnd_AnmMsg_CIOM_CabSubnet_oCabSubnet_e295c8bd_Tx                                  18U
#define CanIfTxPduHnd_NmAsr_CIOM_Cab_oCabSubnet_153d3c7d_Tx                                         19U
#define CanIfTxPduHnd_CIOM_Cab_21P_oCabSubnet_c1ce1ce8_Tx                                           20U
#define CanIfTxPduHnd_CIOM_Cab_20S_Tp_oCabSubnet_c323df97_Tx                                        21U
#define CanIfTxPduHnd_CIOM_Cab_19P_oCabSubnet_49985ce9_Tx                                           22U
#define CanIfTxPduHnd_CIOM_Cab_18P_oCabSubnet_2e5bdde9_Tx                                           23U
#define CanIfTxPduHnd_CIOM_Cab_17P_oCabSubnet_4a9e582a_Tx                                           24U
#define CanIfTxPduHnd_CIOM_Cab_16P_oCabSubnet_2d5dd92a_Tx                                           25U
#define CanIfTxPduHnd_CIOM_Cab_34P_Tp_oCabSubnet_377e6916_Tx                                        26U
#define CanIfTxPduHnd_CIOM_Cab_30S_Tp_oCabSubnet_da4b67c4_Tx                                        27U
#define CanIfTxPduHnd_CIOM_Cab_25S_Tp_oCabSubnet_d5957759_Tx                                        28U
#define CanIfTxPduHnd_CIOM_Cab_15P_oCabSubnet_85195a2a_Tx                                           29U
#define CanIfTxPduHnd_CIOM_Cab_14P_oCabSubnet_e2dadb2a_Tx                                           30U
#define CanIfTxPduHnd_CIOM_Cab_13S_Tp_oCabSubnet_e50870d8_Tx                                        31U
#define CanIfTxPduHnd_CIOM_Cab_12P_oCabSubnet_6922db6b_Tx                                           32U
#define CanIfTxPduHnd_CIOM_Cab_11S_Tp_oCabSubnet_ec1435f4_Tx                                        33U
#define CanIfTxPduHnd_PhysDiagReqMsg_53_F1_Cab_Tp_oCabSubnet_682570ce_Tx                            34U
#define CanIfTxPduHnd_CIOM_Cab_08P_oCabSubnet_2e3c1e68_Tx                                           35U
#define CanIfTxPduHnd_CIOM_Cab_07P_oCabSubnet_4af99bab_Tx                                           36U
#define CanIfTxPduHnd_CIOM_Cab_22P_oCabSubnet_698a9fe8_Tx                                           37U
#define CanIfTxPduHnd_CIOM_Cab_31P_oCabSubnet_c1a9df69_Tx                                           38U
#define CanIfTxPduHnd_CIOM_Cab_24P_oCabSubnet_e2729fa9_Tx                                           39U
#define CanIfTxPduHnd_CIOM_Cab_10P_oCabSubnet_a6a5d96b_Tx                                           40U
#define CanIfTxPduHnd_CIOM_Cab_26P_oCabSubnet_2df59da9_Tx                                           41U
#define CanIfTxPduHnd_CIOM_Cab_23P_oCabSubnet_0e491ee8_Tx                                           42U
#define CanIfTxPduHnd_CIOM_Cab_27P_oCabSubnet_4a361ca9_Tx                                           43U
#define CanIfTxPduHnd_CIOM_Cab_09P_oCabSubnet_49ff9f68_Tx                                           44U
#define CanIfTxPduHnd_CIOM_Cab_33P_oCabSubnet_0e2edd69_Tx                                           45U
#define CanIfTxPduHnd_CIOM_Cab_29S_Tp_oCabSubnet_e3dce9b1_Tx                                        46U
#define CanIfTxPduHnd_CIOM_Cab_06P_oCabSubnet_2d3a1aab_Tx                                           47U
#define CanIfTxPduHnd_CIOM_Cab_05S_Tp_oCabSubnet_e74407ff_Tx                                        48U
#define CanIfTxPduHnd_CIOM_Cab_04S_Tp_oCabSubnet_e3ca2569_Tx                                        49U
#define CanIfTxPduHnd_CIOM_Cab_03P_oCabSubnet_0e8699ea_Tx                                           50U
#define CanIfTxPduHnd_CIOM_Cab_01P_oCabSubnet_c1019bea_Tx                                           51U
#define CanIfTxPduHnd_CIOM_Cab_32P_oCabSubnet_69ed5c69_Tx                                           52U
#define CanIfTxPduHnd_CIOM_Cab_28S_oCabSubnet_0dafccc7_Tx                                           53U
#define CanIfTxPduHnd_CCM_Cab_03P_FCM_Tp_oCabSubnet_af75b436_Tx                                     54U
#define CanIfTxPduHnd_CIOM_Cab_02P_oCabSubnet_694518ea_Tx                                           55U
#define CanIfTxPduHnd_IntTesterTGW2FuncDiagMsg_Sec_Tp_oSecuritySubnet_57d96404_Tx                   56U
#define CanIfTxPduHnd_TesterFuncDiagMsg_Sec_Tp_oSecuritySubnet_7f5a7347_Tx                          57U
#define CanIfTxPduHnd_DiagReqMsgIntTGW2_C0_F4_Sec_Tp_oSecuritySubnet_0ba24808_Tx                    58U
#define CanIfTxPduHnd_DiagReqMsgIntHMIIOM_C0_F3_Sec_Tp_oSecuritySubnet_3aaf1649_Tx                  59U
#define CanIfTxPduHnd_PhysDiagReqMsg_C0_F2_Sec_Tp_oSecuritySubnet_f27248ff_Tx                       60U
#define CanIfTxPduHnd_DiagReqMsgIntTGW2_A1_F4_Sec_Tp_oSecuritySubnet_eb89cc56_Tx                    61U
#define CanIfTxPduHnd_DiagReqMsgIntHMIIOM_A1_F3_Sec_Tp_oSecuritySubnet_a1b03b66_Tx                  62U
#define CanIfTxPduHnd_PhysDiagReqMsg_A1_F2_Sec_Tp_oSecuritySubnet_5d2e792a_Tx                       63U
#define CanIfTxPduHnd_DiagReqMsgIntTGW2_A0_F4_Sec_Tp_oSecuritySubnet_8adef0bc_Tx                    64U
#define CanIfTxPduHnd_DiagReqMsgIntHMIIOM_A0_F3_Sec_Tp_oSecuritySubnet_09265670_Tx                  65U
#define CanIfTxPduHnd_PhysDiagReqMsg_A0_F2_Sec_Tp_oSecuritySubnet_cb87d97b_Tx                       66U
#define CanIfTxPduHnd_AnmMsg_CIOM_SecuritySubnet_oSecuritySubnet_d0267e59_Tx                        67U
#define CanIfTxPduHnd_NmAsr_CIOM_Sec_oSecuritySubnet_dae88b7d_Tx                                    68U
#define CanIfTxPduHnd_CIOM_Sec_02P_oSecuritySubnet_04f0ad2a_Tx                                      69U
#define CanIfTxPduHnd_CIOM_Sec_03P_oSecuritySubnet_4d58f6b7_Tx                                      70U
#define CanIfTxPduHnd_PDM_Sec_04S_FCM_Tp_oSecuritySubnet_90a313cf_Tx                                71U
#define CanIfTxPduHnd_CIOM_Sec_05S_Tp_oSecuritySubnet_c8b553a6_Tx                                   72U
#define CanIfTxPduHnd_PDM_Sec_03S_FCM_Tp_oSecuritySubnet_2750bd9e_Tx                                73U
#define CanIfTxPduHnd_DDM_Sec_05S_FCM_Tp_oSecuritySubnet_d14dc345_Tx                                74U
#define CanIfTxPduHnd_Alarm_Sec_07S_FCM_Tp_oSecuritySubnet_94ec21d2_Tx                              75U
#define CanIfTxPduHnd_DDM_Sec_04S_FCM_Tp_oSecuritySubnet_eddd4cee_Tx                                76U
#define CanIfTxPduHnd_Alarm_Sec_06S_FCM_Tp_oSecuritySubnet_a3ee35ea_Tx                              77U
#define CanIfTxPduHnd_DDM_Sec_03S_FCM_Tp_oSecuritySubnet_5a2ee2bf_Tx                                78U
#define CanIfTxPduHnd_CIOM_Sec_12S_Tp_oSecuritySubnet_2d9a0e12_Tx                                   79U
#define CanIfTxPduHnd_CIOM_Sec_07S_Tp_oSecuritySubnet_69506b1a_Tx                                   80U
#define CanIfTxPduHnd_CIOM_Sec_11S_Tp_oSecuritySubnet_dc8daaf0_Tx                                   81U
#define CanIfTxPduHnd_CIOM_Sec_10S_Tp_oSecuritySubnet_8c7f36ae_Tx                                   82U
#define CanIfTxPduHnd_CIOM_Sec_09S_Tp_oSecuritySubnet_ba09ccac_Tx                                   83U
#define CanIfTxPduHnd_CIOM_Sec_06S_Tp_oSecuritySubnet_39a2f744_Tx                                   84U
#define CanIfTxPduHnd_Alarm_Sec_03S_FCM_Tp_oSecuritySubnet_48e47132_Tx                              85U
#define CanIfTxPduHnd_CIOM_Sec_08S_Tp_oSecuritySubnet_eafb50f2_Tx                                   86U
#define CanIfTxPduHnd_CIOM_Sec_04P_oSecuritySubnet_6a707225_Tx                                      87U
#define CanIfTxPduHnd_CIOM_Sec_01P_oSecuritySubnet_de08418d_Tx                                      88U
#define CanIfTxPduHnd_FMS_X_CIOMFMS_oFMSNet_68f86b37_Tx                                             89U
#define CanIfTxPduHnd_TPCM_Tp_oFMSNet_55e2f930_Tx                                                   90U
#define CanIfTxPduHnd_TPDT_Tp_oFMSNet_3018618a_Tx                                                   91U
#define CanIfTxPduHnd_VP236_X_CIOMFMS_oFMSNet_524bf569_Tx                                           92U
#define CanIfTxPduHnd_DD_X_CIOMFMS_oFMSNet_95f62c09_Tx                                              93U
#define CanIfTxPduHnd_AMB_X_CIOMFMS_oFMSNet_f6109b97_Tx                                             94U
#define CanIfTxPduHnd_LFE_X_CIOMFMS_oFMSNet_adac24c8_Tx                                             95U
#define CanIfTxPduHnd_CCVS_X_CIOMFMS_oFMSNet_1dbcfa70_Tx                                            96U
#define CanIfTxPduHnd_ET1_X_CIOMFMS_oFMSNet_ff39068f_Tx                                             97U
#define CanIfTxPduHnd_VW_X_CIOMFMS_oFMSNet_06d77621_Tx                                              98U
#define CanIfTxPduHnd_LFC_X_CIOMFMS_oFMSNet_16e703d3_Tx                                             99U
#define CanIfTxPduHnd_HOURS_X_CIOMFMS_oFMSNet_bfc991fc_Tx                                           100U
#define CanIfTxPduHnd_VDHR_X_CIOMFMS_oFMSNet_67a02fb8_Tx                                            101U
#define CanIfTxPduHnd_SERV_X_CIOMFMS_oFMSNet_0f3b4ff2_Tx                                            102U
#define CanIfTxPduHnd_AIR1_X_CIOMFMS_oFMSNet_9b1ec537_Tx                                            103U
#define CanIfTxPduHnd_CVW_X_CIOMFMS_oFMSNet_5e9635e8_Tx                                             104U
#define CanIfTxPduHnd_TPDirect_0FE6B_Tp_oFMSNet_5c137171_Tx                                         105U
#define CanIfTxPduHnd_AT1T1I1_X_CIOMFMS_oFMSNet_4f6adf75_Tx                                         106U
#define CanIfTxPduHnd_EEC14_X_CIOMFMS_oFMSNet_3551b912_Tx                                           107U
#define CanIfTxPduHnd_PTODE_X_CIOMFMS_oFMSNet_8abc23b8_Tx                                           108U
#define CanIfTxPduHnd_FMS1_X_CIOMFMS_oFMSNet_fb3c9fbd_Tx                                            109U
#define CanIfTxPduHnd_HRLFC_X_CIOMFMS_oFMSNet_c55a7a2b_Tx                                           110U
#define CanIfTxPduHnd_ERC1_x_RECUFMS_oFMSNet_338e7918_Tx                                            111U
#define CanIfTxPduHnd_ERC1_x_EMSRetFMS_oFMSNet_d863a207_Tx                                          112U
#define CanIfTxPduHnd_J1939NmTxPdu_2068bfea                                                         113U
#define CanIfTxPduHnd_CL_X_CIOMFMS_oFMSNet_fc518547_Tx                                              114U
#define CanIfTxPduHnd_TCO1_X_CIOMFMS_oFMSNet_567baf3d_Tx                                            115U
#define CanIfTxPduHnd_EEC1_X_CIOMFMS_oFMSNet_954d78de_Tx                                            116U
#define CanIfTxPduHnd_EEC2_X_CIOMFMS_oFMSNet_d3e60e6a_Tx                                            117U
#define CanIfTxPduHnd_AckmTxPdu_FMSNet_J1939_44d89c3b                                               118U
#define CanIfTxPduHnd_Debug28_SCIM_BB2_oBackbone2_4d931807_Tx                                       119U
#define CanIfTxPduHnd_Debug27_SCIM_BB2_oBackbone2_5499710c_Tx                                       120U
#define CanIfTxPduHnd_Debug26_SCIM_BB2_oBackbone2_3bb148d4_Tx                                       121U
#define CanIfTxPduHnd_Debug25_SCIM_BB2_oBackbone2_8ac902bc_Tx                                       122U
#define CanIfTxPduHnd_Debug24_SCIM_BB2_oBackbone2_e5e13b64_Tx                                       123U
#define CanIfTxPduHnd_Debug22_SCIM_BB2_oBackbone2_5c60a9f5_Tx                                       124U
#define CanIfTxPduHnd_Debug21_SCIM_BB2_oBackbone2_ed18e39d_Tx                                       125U
#define CanIfTxPduHnd_Debug20_SCIM_BB2_oBackbone2_8230da45_Tx                                       126U
#define CanIfTxPduHnd_Debug19_SCIM_BB2_oBackbone2_6163b0ff_Tx                                       127U
#define CanIfTxPduHnd_Debug18_SCIM_BB2_oBackbone2_0e4b8927_Tx                                       128U
#define CanIfTxPduHnd_Debug17_SCIM_BB2_oBackbone2_1741e02c_Tx                                       129U
#define CanIfTxPduHnd_Debug16_SCIM_BB2_oBackbone2_7869d9f4_Tx                                       130U
#define CanIfTxPduHnd_Debug15_SCIM_BB2_oBackbone2_c911939c_Tx                                       131U
#define CanIfTxPduHnd_Debug14_SCIM_BB2_oBackbone2_a639aa44_Tx                                       132U
#define CanIfTxPduHnd_Debug13_SCIM_BB2_oBackbone2_7090010d_Tx                                       133U
#define CanIfTxPduHnd_Debug12_SCIM_BB2_oBackbone2_1fb838d5_Tx                                       134U
#define CanIfTxPduHnd_Debug11_SCIM_BB2_oBackbone2_aec072bd_Tx                                       135U
#define CanIfTxPduHnd_Debug10_SCIM_BB2_oBackbone2_c1e84b65_Tx                                       136U
#define CanIfTxPduHnd_Debug9_SCIM_BB2_oBackbone2_cb8b9a3c_Tx                                        137U
#define CanIfTxPduHnd_Debug8_SCIM_BB2_oBackbone2_ab7cdc97_Tx                                        138U
#define CanIfTxPduHnd_Debug7_SCIM_BB2_oBackbone2_e391325d_Tx                                        139U
#define CanIfTxPduHnd_DiagUUDTRespMsg1_F2_C0_BB2_oBackbone2_603e2338_Tx                             140U
#define CanIfTxPduHnd_DiagUUDTRespMsg1_F2_A2_BB2_oBackbone2_8af81a14_Tx                             141U
#define CanIfTxPduHnd_DiagUUDTRespMsg1_F2_A1_BB2_oBackbone2_26f22879_Tx                             142U
#define CanIfTxPduHnd_DiagUUDTRespMsg1_F2_A0_BB2_oBackbone2_42f439a2_Tx                             143U
#define CanIfTxPduHnd_DiagUUDTRespMsg1_F2_98_BB2_oBackbone2_5178e6a4_Tx                             144U
#define CanIfTxPduHnd_DiagUUDTRespMsg1_F2_53_BB2_oBackbone2_a51c09cf_Tx                             145U
#define CanIfTxPduHnd_DiagUUDTRespMsg1_F2_40_BB2_oBackbone2_187336ef_Tx                             146U
#define CanIfTxPduHnd_DiagUUDTRespMsg1_F2_26_BB2_oBackbone2_fc487bda_Tx                             147U
#define CanIfTxPduHnd_DiagRespMsgIntTGW2_F4_C0_BB2_Tp_oBackbone2_f7aad0d7_Tx                        148U
#define CanIfTxPduHnd_DiagRespMsgIntTGW2_F4_A2_BB2_Tp_oBackbone2_249acffa_Tx                        149U
#define CanIfTxPduHnd_DiagRespMsgIntTGW2_F4_A1_BB2_Tp_oBackbone2_bca8fbcc_Tx                        150U
#define CanIfTxPduHnd_DiagRespMsgIntTGW2_F4_A0_BB2_Tp_oBackbone2_7d9615e1_Tx                        151U
#define CanIfTxPduHnd_DiagRespMsgIntTGW2_F4_98_BB2_Tp_oBackbone2_8516ddd7_Tx                        152U
#define CanIfTxPduHnd_DiagRespMsgIntTGW2_F4_53_BB2_Tp_oBackbone2_280e15fa_Tx                        153U
#define CanIfTxPduHnd_DiagRespMsgIntTGW2_F4_40_BB2_Tp_oBackbone2_f5224357_Tx                        154U
#define CanIfTxPduHnd_DiagRespMsgIntTGW2_F4_26_BB2_Tp_oBackbone2_5b036461_Tx                        155U
#define CanIfTxPduHnd_DiagRespMsgIntHMIIOM_F3_C0_BB2_Tp_oBackbone2_9924f26b_Tx                      156U
#define CanIfTxPduHnd_DiagRespMsgIntHMIIOM_F3_A2_BB2_Tp_oBackbone2_d6b4927e_Tx                      157U
#define CanIfTxPduHnd_DiagRespMsgIntHMIIOM_F3_A1_BB2_Tp_oBackbone2_08540fc1_Tx                      158U
#define CanIfTxPduHnd_DiagRespMsgIntHMIIOM_F3_A0_BB2_Tp_oBackbone2_f4db796b_Tx                      159U
#define CanIfTxPduHnd_DiagRespMsgIntHMIIOM_F3_98_BB2_Tp_oBackbone2_73235a33_Tx                      160U
#define CanIfTxPduHnd_DiagRespMsgIntHMIIOM_F3_53_BB2_Tp_oBackbone2_930c5799_Tx                      161U
#define CanIfTxPduHnd_DiagRespMsgIntHMIIOM_F3_40_BB2_Tp_oBackbone2_7b130fa6_Tx                      162U
#define CanIfTxPduHnd_DiagRespMsgIntHMIIOM_F3_26_BB2_Tp_oBackbone2_aba3af99_Tx                      163U
#define CanIfTxPduHnd_PhysDiagRespMsg_F2_C0_BB2_Tp_oBackbone2_ae5b54dc_Tx                           164U
#define CanIfTxPduHnd_PhysDiagRespMsg_F2_A2_BB2_Tp_oBackbone2_2addb983_Tx                           165U
#define CanIfTxPduHnd_PhysDiagRespMsg_F2_A1_BB2_Tp_oBackbone2_441131ae_Tx                           166U
#define CanIfTxPduHnd_PhysDiagRespMsg_F2_A0_BB2_Tp_oBackbone2_d77a4b8a_Tx                           167U
#define CanIfTxPduHnd_PhysDiagRespMsg_F2_98_BB2_Tp_oBackbone2_0c1730ea_Tx                           168U
#define CanIfTxPduHnd_PhysDiagRespMsg_F2_53_BB2_Tp_oBackbone2_ef1139d4_Tx                           169U
#define CanIfTxPduHnd_PhysDiagRespMsg_F2_40_BB2_Tp_oBackbone2_bd4d3e52_Tx                           170U
#define CanIfTxPduHnd_PhysDiagRespMsg_F2_26_BB2_Tp_oBackbone2_ebb70ff2_Tx                           171U
#define CanIfTxPduHnd_Debug6_SCIM_BB2_oBackbone2_836674f6_Tx                                        172U
#define CanIfTxPduHnd_Debug5_SCIM_BB2_oBackbone2_227fbf0b_Tx                                        173U
#define CanIfTxPduHnd_Debug4_SCIM_BB2_oBackbone2_4288f9a0_Tx                                        174U
#define CanIfTxPduHnd_Debug3_SCIM_BB2_oBackbone2_bb3d2eb0_Tx                                        175U
#define CanIfTxPduHnd_Debug2_SCIM_BB2_oBackbone2_dbca681b_Tx                                        176U
#define CanIfTxPduHnd_AnmMsg_CIOM_Backbone2_oBackbone2_d362d40e_Tx                                  177U
#define CanIfTxPduHnd_CIOM_BB2_28P_oBackbone2_d86d16b8_Tx                                           178U
#define CanIfTxPduHnd_PhysDiagRespMsg_F1_53_BB2_Tp_oBackbone2_be0c70d1_Tx                           179U
#define CanIfTxPduHnd_BBM_BB2_03S_CIOM_FCM_Tp_oBackbone2_29c4ac8e_Tx                                180U
#define CanIfTxPduHnd_CIOM_BB2_21S_oBackbone2_140cc697_Tx                                           181U
#define CanIfTxPduHnd_CIOM_BB2_07P_oBackbone2_bc671479_Tx                                           182U
#define CanIfTxPduHnd_CIOM_BB2_31S_oBackbone2_146b0516_Tx                                           183U
#define CanIfTxPduHnd_CIOM_BB2_20S_oBackbone2_73cf4797_Tx                                           184U
#define CanIfTxPduHnd_CIOM_BB2_26S_oBackbone2_f83747d6_Tx                                           185U
#define CanIfTxPduHnd_CIOM_BB2_13S_Tp_oBackbone2_bd99285a_Tx                                        186U
#define CanIfTxPduHnd_CIOM_BB2_12S_Tp_oBackbone2_b9170acc_Tx                                        187U
#define CanIfTxPduHnd_CIOM_BB2_11P_oBackbone2_37f8d7b9_Tx                                           188U
#define CanIfTxPduHnd_CIOM_BB2_27S_oBackbone2_9ff4c6d6_Tx                                           189U
#define CanIfTxPduHnd_CIOM_BB2_10P_oBackbone2_503b56b9_Tx                                           190U
#define CanIfTxPduHnd_CIOM_BB2_06P_oBackbone2_dba49579_Tx                                           191U
#define CanIfTxPduHnd_CIOM_BB2_25P_oBackbone2_732f917b_Tx                                           192U
#define CanIfTxPduHnd_CIOM_BB2_05P_oBackbone2_73e01679_Tx                                           193U
#define CanIfTxPduHnd_CIOM_BB2_01P_oBackbone2_379f1438_Tx                                           194U
#define CanIfTxPduHnd_CIOM_BB2_03P_oBackbone2_f8181638_Tx                                           195U
#define CanIfTxPduHnd_CIOM_BB2_02P_oBackbone2_9fdb9738_Tx                                           196U
#define CanIfTxPduHnd_CIOM_BB2_32S_Tp_oBackbone2_8bc67a6a_Tx                                        197U
#define CanIfTxPduHnd_CIOM_BB2_04P_oBackbone2_14239779_Tx                                           198U
#define CanIfTxPduHnd_CIOM_BB2_30P_oBackbone2_50f4d1bb_Tx                                           199U
#define CanIfTxPduHnd_DiagFaultStat_WRCS_BB2_oBackbone2_dad83051_Tx                                 200U
#define CanIfTxPduHnd_DiagFaultStat_SRS_BB2_oBackbone2_e1ef7eee_Tx                                  201U
#define CanIfTxPduHnd_DiagFaultStat_PDM_BB2_oBackbone2_b720c987_Tx                                  202U
#define CanIfTxPduHnd_DiagFaultStat_LECM_BB2_oBackbone2_0cb60c21_Tx                                 203U
#define CanIfTxPduHnd_DiagFaultStat_DDM_BB2_oBackbone2_c5068234_Tx                                  204U
#define CanIfTxPduHnd_DiagFaultStat_CIOM_BB2_oBackbone2_04d7302e_Tx                                 205U
#define CanIfTxPduHnd_DiagFaultStat_CCM_BB2_oBackbone2_2f6e7814_Tx                                  206U
#define CanIfTxPduHnd_DiagFaultStat_Alarm_BB2_oBackbone2_7b6d0a04_Tx                                207U
#define CanIfTxPduHnd_TECU_BB2_06S_FCM_Tp_oBackbone2_a56e8b10_Tx                                    208U
#define CanIfTxPduHnd_VMCU_BB2_57P_FCM_Tp_oBackbone2_65fb58e9_Tx                                    209U
#define CanIfTxPduHnd_HMIIOM_BB2_36S_FCM_Tp_oBackbone2_bf84bd48_Tx                                  210U
#define CanIfTxPduHnd_HMIIOM_BB2_19P_CIOM_FCM_Tp_oBackbone2_1a616940_Tx                             211U
#define CanIfTxPduHnd_VMCU_BB2_31S_FCM_Tp_oBackbone2_46c44850_Tx                                    212U
#define CanIfTxPduHnd_VMCU_BB2_32S_FCM_Tp_oBackbone2_8a7e4a00_Tx                                    213U
#define CanIfTxPduHnd_HMIIOM_BB2_20S_FCM_Tp_oBackbone2_2def59ba_Tx                                  214U
#define CanIfTxPduHnd_EMS_BB2_09S_FCM_Tp_oBackbone2_41cc37fa_Tx                                     215U
#define CanIfTxPduHnd_VMCU_BB2_34S_FCM_Tp_oBackbone2_c87b48e1_Tx                                    216U
#define CanIfTxPduHnd_EMS_BB2_11S_FCM_Tp_oBackbone2_6cd5cf95_Tx                                     217U
#define CanIfTxPduHnd_HMIIOM_BB2_35S_FCM_Tp_oBackbone2_e32a38c7_Tx                                  218U
#define CanIfTxPduHnd_TECU_BB2_05S_FCM_Tp_oBackbone2_69d48940_Tx                                    219U
#define CanIfTxPduHnd_NmAsr_CIOM_BB2_oBackbone2_9b0338b4_Tx                                         220U
#define CanIfTxPduHnd_CIOM_BB2_29P_oBackbone2_bfae97b8_Tx                                           221U


/**********************************************************************************************************************
  \def  Rx PDU handles (Rx indication function specific ones)
**********************************************************************************************************************/

/* These definitions can change at Link-time and Post-build configuration time. Use them wisely. */
/* Assigned to: NULL_PTR*/
/* Assigned to: CanNm_RxIndication*/
#define CanIfRxPduHnd_CIOM_c15ca2a0_Rx                                                              0U
#define CanIfRxPduHnd_CIOM_0462631a_Rx                                                              1U
#define CanIfRxPduHnd_CIOM_263e35c1_Rx                                                              2U
/* Assigned to: CanTp_RxIndication*/
#define CanIfRxPduHnd_DiagRespMsgIntTGW2_F4_A2_Cab_Tp_oCabSubnet_748ab027_Rx                        0U
#define CanIfRxPduHnd_DiagRespMsgIntTGW2_F4_98_Cab_Tp_oCabSubnet_d506a20a_Rx                        1U
#define CanIfRxPduHnd_DiagRespMsgIntTGW2_F4_53_Cab_Tp_oCabSubnet_781e6a27_Rx                        2U
#define CanIfRxPduHnd_DiagRespMsgIntTGW2_F4_26_Cab_Tp_oCabSubnet_0b131bbc_Rx                        3U
#define CanIfRxPduHnd_DiagRespMsgIntHMIIOM_F3_A2_Cab_Tp_oCabSubnet_15c35ee3_Rx                      4U
#define CanIfRxPduHnd_DiagRespMsgIntHMIIOM_F3_98_Cab_Tp_oCabSubnet_b05496ae_Rx                      5U
#define CanIfRxPduHnd_DiagRespMsgIntHMIIOM_F3_53_Cab_Tp_oCabSubnet_507b9b04_Rx                      6U
#define CanIfRxPduHnd_DiagRespMsgIntHMIIOM_F3_26_Cab_Tp_oCabSubnet_68d46304_Rx                      7U
#define CanIfRxPduHnd_PhysDiagRespMsg_F2_A2_Cab_Tp_oCabSubnet_89846943_Rx                           8U
#define CanIfRxPduHnd_PhysDiagRespMsg_F2_98_Cab_Tp_oCabSubnet_af4ee02a_Rx                           9U
#define CanIfRxPduHnd_PhysDiagRespMsg_F2_53_Cab_Tp_oCabSubnet_4c48e914_Rx                           10U
#define CanIfRxPduHnd_PhysDiagRespMsg_F2_26_Cab_Tp_oCabSubnet_48eedf32_Rx                           11U
#define CanIfRxPduHnd_CIOM_Cab_20S_FCM_Tp_oCabSubnet_88858df9_Rx                                    12U
#define CanIfRxPduHnd_CIOM_Cab_34P_FCM_Tp_oCabSubnet_d2bbef9e_Rx                                    13U
#define CanIfRxPduHnd_CIOM_Cab_30S_FCM_Tp_oCabSubnet_ae18d4ab_Rx                                    14U
#define CanIfRxPduHnd_CIOM_Cab_25S_FCM_Tp_oCabSubnet_063a8d48_Rx                                    15U
#define CanIfRxPduHnd_CIOM_Cab_13S_FCM_Tp_oCabSubnet_2f98645f_Rx                                    16U
#define CanIfRxPduHnd_CIOM_Cab_11S_FCM_Tp_oCabSubnet_a74b983f_Rx                                    17U
#define CanIfRxPduHnd_PhysDiagRespMsg_F1_53_Cab_Tp_oCabSubnet_1d55a011_Rx                           18U
#define CanIfRxPduHnd_CIOM_Cab_29S_FCM_Tp_oCabSubnet_8230888a_Rx                                    19U
#define CanIfRxPduHnd_CIOM_Cab_05P_FCM_Tp_oCabSubnet_fd75fa58_Rx                                    20U
#define CanIfRxPduHnd_CIOM_Cab_04P_FCM_Tp_oCabSubnet_b91c0468_Rx                                    21U
#define CanIfRxPduHnd_CCM_Cab_03P_Tp_oCabSubnet_bfb45635_Rx                                         22U
#define CanIfRxPduHnd_DiagRespMsgIntTGW2_F4_C0_Sec_Tp_oSecuritySubnet_7a975d32_Rx                   23U
#define CanIfRxPduHnd_DiagRespMsgIntTGW2_F4_A1_Sec_Tp_oSecuritySubnet_efa76b9d_Rx                   24U
#define CanIfRxPduHnd_DiagRespMsgIntTGW2_F4_A0_Sec_Tp_oSecuritySubnet_d9469eac_Rx                   25U
#define CanIfRxPduHnd_DiagRespMsgIntHMIIOM_F3_C0_Sec_Tp_oSecuritySubnet_77f0a36b_Rx                 26U
#define CanIfRxPduHnd_DiagRespMsgIntHMIIOM_F3_A1_Sec_Tp_oSecuritySubnet_052f8796_Rx                 27U
#define CanIfRxPduHnd_DiagRespMsgIntHMIIOM_F3_A0_Sec_Tp_oSecuritySubnet_95b29252_Rx                 28U
#define CanIfRxPduHnd_PhysDiagRespMsg_F2_C0_Sec_Tp_oSecuritySubnet_614a0693_Rx                      29U
#define CanIfRxPduHnd_PhysDiagRespMsg_F2_A1_Sec_Tp_oSecuritySubnet_d47cc691_Rx                      30U
#define CanIfRxPduHnd_PhysDiagRespMsg_F2_A0_Sec_Tp_oSecuritySubnet_207d0e64_Rx                      31U
#define CanIfRxPduHnd_PDM_Sec_04S_Tp_oSecuritySubnet_596ba3c3_Rx                                    32U
#define CanIfRxPduHnd_CIOM_Sec_05S_FCM_Tp_oSecuritySubnet_02ea2344_Rx                               33U
#define CanIfRxPduHnd_PDM_Sec_03S_Tp_oSecuritySubnet_225f8534_Rx                                    34U
#define CanIfRxPduHnd_DDM_Sec_05S_Tp_oSecuritySubnet_5a1ed97b_Rx                                    35U
#define CanIfRxPduHnd_Alarm_Sec_07S_Tp_oSecuritySubnet_bf7e0710_Rx                                  36U
#define CanIfRxPduHnd_DDM_Sec_04S_Tp_oSecuritySubnet_c3efbadc_Rx                                    37U
#define CanIfRxPduHnd_Alarm_Sec_06S_Tp_oSecuritySubnet_2b24d209_Rx                                  38U
#define CanIfRxPduHnd_DDM_Sec_03S_Tp_oSecuritySubnet_b8db9c2b_Rx                                    39U
#define CanIfRxPduHnd_CIOM_Sec_12S_FCM_Tp_oSecuritySubnet_9cba7397_Rx                               40U
#define CanIfRxPduHnd_CIOM_Sec_07S_FCM_Tp_oSecuritySubnet_5acc46b8_Rx                               41U
#define CanIfRxPduHnd_CIOM_Sec_11S_FCM_Tp_oSecuritySubnet_e88f2495_Rx                               42U
#define CanIfRxPduHnd_CIOM_Sec_10S_FCM_Tp_oSecuritySubnet_c49c166b_Rx                               43U
#define CanIfRxPduHnd_CIOM_Sec_09S_FCM_Tp_oSecuritySubnet_094e790d_Rx                               44U
#define CanIfRxPduHnd_CIOM_Sec_06S_FCM_Tp_oSecuritySubnet_76df7446_Rx                               45U
#define CanIfRxPduHnd_Alarm_Sec_03S_Tp_oSecuritySubnet_838659b7_Rx                                  46U
#define CanIfRxPduHnd_CIOM_Sec_08S_FCM_Tp_oSecuritySubnet_255d4bf3_Rx                               47U
#define CanIfRxPduHnd_IntTesterTGW2FuncDiagMsg_BB2_Tp_oBackbone2_c6fcfce9_Rx                        48U
#define CanIfRxPduHnd_TesterFuncDiagMsg_BB2_Tp_oBackbone2_6ec04186_Rx                               49U
#define CanIfRxPduHnd_DiagReqMsgIntTGW2_C0_F4_BB2_Tp_oBackbone2_92584732_Rx                         50U
#define CanIfRxPduHnd_DiagReqMsgIntHMIIOM_C0_F3_BB2_Tp_oBackbone2_2bec4c32_Rx                       51U
#define CanIfRxPduHnd_PhysDiagReqMsg_C0_F2_BB2_Tp_oBackbone2_bd293e55_Rx                            52U
#define CanIfRxPduHnd_DiagReqMsgIntTGW2_A2_F4_BB2_Tp_oBackbone2_8613fab7_Rx                         53U
#define CanIfRxPduHnd_DiagReqMsgIntHMIIOM_A2_F3_BB2_Tp_oBackbone2_e882bd41_Rx                       54U
#define CanIfRxPduHnd_PhysDiagReqMsg_A2_F2_BB2_Tp_oBackbone2_e7d85c22_Rx                            55U
#define CanIfRxPduHnd_DiagReqMsgIntTGW2_A1_F4_BB2_Tp_oBackbone2_91dc1a3b_Rx                         56U
#define CanIfRxPduHnd_DiagReqMsgIntHMIIOM_A1_F3_BB2_Tp_oBackbone2_ba062351_Rx                       57U
#define CanIfRxPduHnd_PhysDiagReqMsg_A1_F2_BB2_Tp_oBackbone2_9bf67e6d_Rx                            58U
#define CanIfRxPduHnd_DiagReqMsgIntTGW2_A0_F4_BB2_Tp_oBackbone2_9c9945bf_Rx                         59U
#define CanIfRxPduHnd_DiagReqMsgIntHMIIOM_A0_F3_BB2_Tp_oBackbone2_3d55549e_Rx                       60U
#define CanIfRxPduHnd_PhysDiagReqMsg_A0_F2_BB2_Tp_oBackbone2_b0139fa8_Rx                            61U
#define CanIfRxPduHnd_DiagReqMsgIntTGW2_98_F4_BB2_Tp_oBackbone2_54fed8f2_Rx                         62U
#define CanIfRxPduHnd_DiagReqMsgIntHMIIOM_98_F3_BB2_Tp_oBackbone2_3994cb72_Rx                       63U
#define CanIfRxPduHnd_PhysDiagReqMsg_98_F2_BB2_Tp_oBackbone2_c6fd39ec_Rx                            64U
#define CanIfRxPduHnd_DiagReqMsgIntTGW2_53_F4_BB2_Tp_oBackbone2_0f9dcb70_Rx                         65U
#define CanIfRxPduHnd_DiagReqMsgIntHMIIOM_53_F3_BB2_Tp_oBackbone2_fd3bad74_Rx                       66U
#define CanIfRxPduHnd_PhysDiagReqMsg_53_F2_BB2_Tp_oBackbone2_1012d7c4_Rx                            67U
#define CanIfRxPduHnd_DiagReqMsgIntTGW2_40_F4_BB2_Tp_oBackbone2_f28a299a_Rx                         68U
#define CanIfRxPduHnd_DiagReqMsgIntHMIIOM_40_F3_BB2_Tp_oBackbone2_a4e3bf32_Rx                       69U
#define CanIfRxPduHnd_PhysDiagReqMsg_40_F2_BB2_Tp_oBackbone2_87192655_Rx                            70U
#define CanIfRxPduHnd_DiagReqMsgIntTGW2_26_F4_BB2_Tp_oBackbone2_ce56ef15_Rx                         71U
#define CanIfRxPduHnd_DiagReqMsgIntHMIIOM_26_F3_BB2_Tp_oBackbone2_3a21aae6_Rx                       72U
#define CanIfRxPduHnd_PhysDiagReqMsg_26_F2_BB2_Tp_oBackbone2_680a80cc_Rx                            73U
#define CanIfRxPduHnd_PhysDiagReqMsg_53_F1_BB2_Tp_oBackbone2_e289c86d_Rx                            74U
#define CanIfRxPduHnd_BBM_BB2_03S_CIOM_Tp_oBackbone2_8a8d09f2_Rx                                    75U
#define CanIfRxPduHnd_CIOM_BB2_13S_FCM_Tp_oBackbone2_57d6a4a9_Rx                                    76U
#define CanIfRxPduHnd_CIOM_BB2_12S_FCM_Tp_oBackbone2_13bf5a99_Rx                                    77U
#define CanIfRxPduHnd_CIOM_BB2_32S_FCM_Tp_oBackbone2_5e85e83d_Rx                                    78U
#define CanIfRxPduHnd_TECU_BB2_06S_Tp_oBackbone2_0c47cb8e_Rx                                        79U
#define CanIfRxPduHnd_VMCU_BB2_57P_Tp_oBackbone2_925193df_Rx                                        80U
#define CanIfRxPduHnd_HMIIOM_BB2_36S_Tp_oBackbone2_95bfb681_Rx                                      81U
#define CanIfRxPduHnd_HMIIOM_BB2_19P_CIOM_Tp_oBackbone2_470ca910_Rx                                 82U
#define CanIfRxPduHnd_VMCU_BB2_31S_Tp_oBackbone2_210b49cb_Rx                                        83U
#define CanIfRxPduHnd_VMCU_BB2_32S_Tp_oBackbone2_2c992e71_Rx                                        84U
#define CanIfRxPduHnd_HMIIOM_BB2_20S_Tp_oBackbone2_ce8859ea_Rx                                      85U
#define CanIfRxPduHnd_EMS_BB2_09S_Tp_oBackbone2_ef0c9958_Rx                                         86U
#define CanIfRxPduHnd_VMCU_BB2_34S_Tp_oBackbone2_37bde105_Rx                                        87U
#define CanIfRxPduHnd_EMS_BB2_11S_Tp_oBackbone2_f0eef471_Rx                                         88U
#define CanIfRxPduHnd_HMIIOM_BB2_35S_Tp_oBackbone2_61dbf5f7_Rx                                      89U
#define CanIfRxPduHnd_TECU_BB2_05S_Tp_oBackbone2_01d5ac34_Rx                                        90U
/* Assigned to: J1939Nm_RxIndication*/
#define CanIfRxPduHnd_J1939NmRxPdu_fa509995                                                         0U
#define CanIfRxPduHnd_J1939NmRxPdu_2068bfea                                                         1U
/* Assigned to: J1939Tp_RxIndication*/
#define CanIfRxPduHnd_TPCM_Tp_oBackbone1J1939_ffabc0bc_Rx                                           0U
#define CanIfRxPduHnd_TPDT_Tp_oBackbone1J1939_7785b746_Rx                                           1U
#define CanIfRxPduHnd_TPDirect_0FE6B_Tp_oBackbone1J1939_e14130fb_Rx                                 2U
#define CanIfRxPduHnd_FcNPdu_FMSNet_J1939_5ab570f8                                                  3U
/* Assigned to: PduR_CanIfRxIndication*/
#define CanIfRxPduHnd_RqstRxPdu_Backbone1J1939_54966c1b                                             0U
#define CanIfRxPduHnd_ET1_X_EMS_oBackbone1J1939_a6b0a91f_Rx                                         1U
#define CanIfRxPduHnd_EBC5_X_EBS_oBackbone1J1939_a226f3b2_Rx                                        2U
#define CanIfRxPduHnd_VDHR_X_VMCU_oBackbone1J1939_0e2cb4b8_Rx                                       3U
#define CanIfRxPduHnd_EEC1_X_EMS_oBackbone1J1939_5b1d5ab3_Rx                                        4U
#define CanIfRxPduHnd_TD_X_HMIIOM_oBackbone1J1939_49e6bcf2_Rx                                       5U
#define CanIfRxPduHnd_HRLFC_X_EMS_oBackbone1J1939_5e7f7408_Rx                                       6U
#define CanIfRxPduHnd_CVW_X_EBS_oBackbone1J1939_2dfa9bbe_Rx                                         7U
#define CanIfRxPduHnd_EBS_BB1_05P_oBackbone1J1939_43953999_Rx                                       8U
#define CanIfRxPduHnd_VMCU_BB1_01P_oBackbone1J1939_c293b9cd_Rx                                      9U
#define CanIfRxPduHnd_EBS_BB1_01P_oBackbone1J1939_9205779e_Rx                                       10U
#define CanIfRxPduHnd_LFE_X_EMS_oBackbone1J1939_592edea5_Rx                                         11U
#define CanIfRxPduHnd_VMCU_BB1_03P_oBackbone1J1939_51c30ef7_Rx                                      12U
#define CanIfRxPduHnd_ACM_BB1_01P_oBackbone1J1939_9e50bfac_Rx                                       13U
#define CanIfRxPduHnd_TCO1_X_TACHO_oBackbone1J1939_884a7499_Rx                                      14U
#define CanIfRxPduHnd_VDC1_X_EBS_oBackbone1J1939_09820bff_Rx                                        15U
#define CanIfRxPduHnd_ERC1_X_RECU_oBackbone1J1939_3104dca7_Rx                                       16U
#define CanIfRxPduHnd_VDC2_X_EBS_oBackbone1J1939_e250e643_Rx                                        17U
#define CanIfRxPduHnd_ERC1_X_EMSRet_oBackbone1J1939_35cada34_Rx                                     18U
#define CanIfRxPduHnd_EBS_BB1_02P_oBackbone1J1939_b875028c_Rx                                       19U
#define CanIfRxPduHnd_EEC2_X_EMS_oBackbone1J1939_b0cfb70f_Rx                                        20U
#define CanIfRxPduHnd_EBC1_X_EBS_oBackbone1J1939_aabe659c_Rx                                        21U
#define CanIfRxPduHnd_AMB_X_VMCU_oBackbone1J1939_d5496e9a_Rx                                        22U
#define CanIfRxPduHnd_AIR1_X_VMCU_oBackbone1J1939_30174316_Rx                                       23U
#define CanIfRxPduHnd_FMS1_X_HMIIOM_oBackbone1J1939_f8c70f73_Rx                                     24U
#define CanIfRxPduHnd_EBC2_X_EBS_oBackbone1J1939_416c8820_Rx                                        25U
#define CanIfRxPduHnd_CCVS_X_VMCU_oBackbone1J1939_d16316a3_Rx                                       26U
#define CanIfRxPduHnd_DiagUUDTRespMsg1_F2_A2_Cab_oCabSubnet_faf51f79_Rx                             27U
#define CanIfRxPduHnd_DiagUUDTRespMsg1_F2_98_Cab_oCabSubnet_2175e3c9_Rx                             28U
#define CanIfRxPduHnd_DiagUUDTRespMsg1_F2_53_Cab_oCabSubnet_d5110ca2_Rx                             29U
#define CanIfRxPduHnd_DiagUUDTRespMsg1_F2_26_Cab_oCabSubnet_8c457eb7_Rx                             30U
#define CanIfRxPduHnd_AnmMsg_ECUspare6_CabSubnet_oCabSubnet_582cafe8_Rx                             31U
#define CanIfRxPduHnd_AnmMsg_WRCS_CabSubnet_oCabSubnet_62e3be6f_Rx                                  32U
#define CanIfRxPduHnd_AnmMsg_SRS_CabSubnet_oCabSubnet_690513e9_Rx                                   33U
#define CanIfRxPduHnd_AnmMsg_LECM1_CabSubnet_oCabSubnet_ba3b1140_Rx                                 34U
#define CanIfRxPduHnd_AnmMsg_CCM_CabSubnet_oCabSubnet_7e592096_Rx                                   35U
#define CanIfRxPduHnd_DiagFaultStat_WRCS_Cab_oCabSubnet_b86e4ab7_Rx                                 36U
#define CanIfRxPduHnd_DiagFaultStat_SRS_Cab_oCabSubnet_e5f44b73_Rx                                  37U
#define CanIfRxPduHnd_DiagFaultStat_LECM_Cab_oCabSubnet_6e0076c7_Rx                                 38U
#define CanIfRxPduHnd_DiagFaultStat_CCM_Cab_oCabSubnet_2b754d89_Rx                                  39U
#define CanIfRxPduHnd_SRS_Cab_06P_oCabSubnet_bec0c2b2_Rx                                            40U
#define CanIfRxPduHnd_SRS_Cab_05P_oCabSubnet_2fb89566_Rx                                            41U
#define CanIfRxPduHnd_LECM1_Cab_03S_oCabSubnet_e20ca5cb_Rx                                          42U
#define CanIfRxPduHnd_SRS_Cab_04P_oCabSubnet_5f6f582a_Rx                                            43U
#define CanIfRxPduHnd_SRS_Cab_03P_oCabSubnet_d6393c8f_Rx                                            44U
#define CanIfRxPduHnd_LECM1_Cab_05S_oCabSubnet_b18bf7f9_Rx                                          45U
#define CanIfRxPduHnd_WRCS_Cab_03P_oCabSubnet_37a4b7c4_Rx                                           46U
#define CanIfRxPduHnd_LECM1_Cab_04P_oCabSubnet_b355ee77_Rx                                          47U
#define CanIfRxPduHnd_LECM1_Cab_02P_oCabSubnet_e0d2bc45_Rx                                          48U
#define CanIfRxPduHnd_SRS_Cab_01P_oCabSubnet_3796a617_Rx                                            49U
#define CanIfRxPduHnd_WRCS_Cab_02P_oCabSubnet_506736c4_Rx                                           50U
#define CanIfRxPduHnd_CCM_Cab_06P_oCabSubnet_ae969834_Rx                                            51U
#define CanIfRxPduHnd_CCM_Cab_07P_oCabSubnet_de415578_Rx                                            52U
#define CanIfRxPduHnd_CCM_Cab_08P_oCabSubnet_674b573f_Rx                                            53U
#define CanIfRxPduHnd_CCM_Cab_04P_oCabSubnet_4f3902ac_Rx                                            54U
#define CanIfRxPduHnd_CCM_Cab_01P_oCabSubnet_27c0fc91_Rx                                            55U
#define CanIfRxPduHnd_WRCS_Cab_01P_oCabSubnet_f823b5c4_Rx                                           56U
#define CanIfRxPduHnd_DiagUUDTRespMsg1_F2_C0_Sec_oSecuritySubnet_d0c97a87_Rx                        57U
#define CanIfRxPduHnd_DiagUUDTRespMsg1_F2_A1_Sec_oSecuritySubnet_67c5eccf_Rx                        58U
#define CanIfRxPduHnd_DiagUUDTRespMsg1_F2_A0_Sec_oSecuritySubnet_46825d6a_Rx                        59U
#define CanIfRxPduHnd_AnmMsg_ECUspare5_SecuritySubnet_oSecuritySubnet_25af973c_Rx                   60U
#define CanIfRxPduHnd_AnmMsg_PDM_SecuritySubnet_oSecuritySubnet_d922132b_Rx                         61U
#define CanIfRxPduHnd_AnmMsg_DDM_SecuritySubnet_oSecuritySubnet_669221a0_Rx                         62U
#define CanIfRxPduHnd_AnmMsg_Alarm_SecuritySubnet_oSecuritySubnet_38c19358_Rx                       63U
#define CanIfRxPduHnd_DiagFaultStat_PDM_Sec_oSecuritySubnet_b17b40b8_Rx                             64U
#define CanIfRxPduHnd_DiagFaultStat_DDM_Sec_oSecuritySubnet_3b5b41e4_Rx                             65U
#define CanIfRxPduHnd_DiagFaultStat_Alarm_Sec_oSecuritySubnet_6cedaf7c_Rx                           66U
#define CanIfRxPduHnd_PDM_Sec_01P_oSecuritySubnet_073fa36a_Rx                                       67U
#define CanIfRxPduHnd_DDM_Sec_01P_oSecuritySubnet_09e2b30b_Rx                                       68U
#define CanIfRxPduHnd_Alarm_Sec_02P_oSecuritySubnet_a902993f_Rx                                     69U
#define CanIfRxPduHnd_RqstRxPdu_FMSNet_J1939_44d89c3b                                               70U
#define CanIfRxPduHnd_VP232_X_ERAU_oFMSNet_8c33d56b_Rx                                              71U
#define CanIfRxPduHnd_AnmMsg_ECUspare2_Backbone2_oBackbone2_181d947f_Rx                             72U
#define CanIfRxPduHnd_AnmMsg_ECUspare1_Backbone2_oBackbone2_c849277d_Rx                             73U
#define CanIfRxPduHnd_AnmMsg_VMCU_Backbone2_oBackbone2_e6fd44da_Rx                                  74U
#define CanIfRxPduHnd_AnmMsg_TECU_Backbone2_oBackbone2_9bd86e99_Rx                                  75U
#define CanIfRxPduHnd_AnmMsg_EMS_Backbone2_oBackbone2_5f08a43f_Rx                                   76U
#define CanIfRxPduHnd_AnmMsg_DACU_Backbone2_oBackbone2_fb766361_Rx                                  77U
#define CanIfRxPduHnd_AnmMsg_BBM_Backbone2_oBackbone2_604b553c_Rx                                   78U
#define CanIfRxPduHnd_AnmMsg_IC3_Backbone2_oBackbone2_cdc1c410_Rx                                   79U
#define CanIfRxPduHnd_BBM_BB2_06P_oBackbone2_89015c9b_Rx                                            80U
#define CanIfRxPduHnd_BBM_BB2_02P_oBackbone2_912f6fea_Rx                                            81U
#define CanIfRxPduHnd_BBM_BB2_01P_oBackbone2_0057383e_Rx                                            82U
#define CanIfRxPduHnd_DACU_BB2_02P_oBackbone2_0b8371c6_Rx                                           83U
#define CanIfRxPduHnd_HMIIOM_BB2_39P_oBackbone2_2c3b8f89_Rx                                         84U
#define CanIfRxPduHnd_HMIIOM_BB2_38P_oBackbone2_17230dd8_Rx                                         85U
#define CanIfRxPduHnd_EMS_BB2_08P_oBackbone2_dd5310ea_Rx                                            86U
#define CanIfRxPduHnd_EMS_BB2_06P_oBackbone2_148edfe1_Rx                                            87U
#define CanIfRxPduHnd_VMCU_BB2_93P_oBackbone2_2a533e10_Rx                                           88U
#define CanIfRxPduHnd_VMCU_BB2_92P_oBackbone2_4d90bf10_Rx                                           89U
#define CanIfRxPduHnd_VMCU_BB2_91P_oBackbone2_e5d43c10_Rx                                           90U
#define CanIfRxPduHnd_HMIIOM_BB2_22P_oBackbone2_7ef06453_Rx                                         91U
#define CanIfRxPduHnd_VMCU_BB2_109P_oBackbone2_770d627b_Rx                                          92U
#define CanIfRxPduHnd_VMCU_BB2_107P_oBackbone2_e17ef7f1_Rx                                          93U
#define CanIfRxPduHnd_VMCU_BB2_106P_oBackbone2_f9c06f06_Rx                                          94U
#define CanIfRxPduHnd_VMCU_BB2_105P_oBackbone2_d003c61f_Rx                                          95U
#define CanIfRxPduHnd_VMCU_BB2_103P_oBackbone2_8384942d_Rx                                          96U
#define CanIfRxPduHnd_VMCU_BB2_102P_oBackbone2_9b3a0cda_Rx                                          97U
#define CanIfRxPduHnd_VMCU_BB2_101P_oBackbone2_b2f9a5c3_Rx                                          98U
#define CanIfRxPduHnd_VMCU_BB2_100P_oBackbone2_aa473d34_Rx                                          99U
#define CanIfRxPduHnd_VMCU_BB2_99P_oBackbone2_6d2a3892_Rx                                           100U
#define CanIfRxPduHnd_VMCU_BB2_98P_oBackbone2_0ae9b992_Rx                                           101U
#define CanIfRxPduHnd_VMCU_BB2_96P_oBackbone2_09efbd51_Rx                                           102U
#define CanIfRxPduHnd_VMCU_BB2_95P_oBackbone2_a1ab3e51_Rx                                           103U
#define CanIfRxPduHnd_EMS_BB2_04P_oBackbone2_f5214579_Rx                                            104U
#define CanIfRxPduHnd_EMS_BB2_13P_oBackbone2_036dfbaa_Rx                                            105U
#define CanIfRxPduHnd_EMS_BB2_05P_oBackbone2_85f68835_Rx                                            106U
#define CanIfRxPduHnd_VMCU_BB2_119P_oBackbone2_54ccbb5c_Rx                                          107U
#define CanIfRxPduHnd_VMCU_BB2_58P_oBackbone2_0848ab9e_Rx                                           108U
#define CanIfRxPduHnd_VMCU_BB2_29P_oBackbone2_6ebc6019_Rx                                           109U
#define CanIfRxPduHnd_VMCU_BB2_110P_oBackbone2_8986e413_Rx                                          110U
#define CanIfRxPduHnd_VMCU_BB2_55P_oBackbone2_a30a2c5d_Rx                                           111U
#define CanIfRxPduHnd_HMIIOM_BB2_23P_oBackbone2_45e8e602_Rx                                         112U
#define CanIfRxPduHnd_VMCU_BB2_111P_oBackbone2_91387ce4_Rx                                          113U
#define CanIfRxPduHnd_VMCU_BB2_08P_oBackbone2_09b0661b_Rx                                           114U
#define CanIfRxPduHnd_VMCU_BB2_74P_oBackbone2_c4062a5f_Rx                                           115U
#define CanIfRxPduHnd_VMCU_BB2_73P_oBackbone2_283dab1e_Rx                                           116U
#define CanIfRxPduHnd_HMIIOM_BB2_09P_oBackbone2_08c205a9_Rx                                         117U
#define CanIfRxPduHnd_HMIIOM_BB2_08P_oBackbone2_33da87f8_Rx                                         118U
#define CanIfRxPduHnd_HMIIOM_BB2_34S_oBackbone2_6313bb35_Rx                                         119U
#define CanIfRxPduHnd_VMCU_BB2_07P_oBackbone2_6d75e3d8_Rx                                           120U
#define CanIfRxPduHnd_VMCU_BB2_54P_oBackbone2_c4c9ad5d_Rx                                           121U
#define CanIfRxPduHnd_HMIIOM_BB2_07P_oBackbone2_91241c86_Rx                                         122U
#define CanIfRxPduHnd_VMCU_BB2_53P_oBackbone2_28f22c1c_Rx                                           123U
#define CanIfRxPduHnd_IC3_BB2_03S_oBackbone2_a25cd1a7_Rx                                            124U
#define CanIfRxPduHnd_IC3_BB2_02P_oBackbone2_ceb05fa5_Rx                                            125U
#define CanIfRxPduHnd_HMIIOM_BB2_24P_oBackbone2_e4a369b5_Rx                                         126U
#define CanIfRxPduHnd_VMCU_BB2_80P_oBackbone2_82707e91_Rx                                           127U
#define CanIfRxPduHnd_VMCU_BB2_20P_oBackbone2_8181e59b_Rx                                           128U
#define CanIfRxPduHnd_HMIIOM_BB2_33P_oBackbone2_59bf9fe2_Rx                                         129U
#define CanIfRxPduHnd_HMIIOM_BB2_03P_oBackbone2_7d4615c2_Rx                                         130U
#define CanIfRxPduHnd_VMCU_BB2_52P_oBackbone2_4f31ad1c_Rx                                           131U
#define CanIfRxPduHnd_VMCU_BB2_51P_oBackbone2_e7752e1c_Rx                                           132U
#define CanIfRxPduHnd_VMCU_BB2_05P_oBackbone2_a2f2e1d8_Rx                                           133U
#define CanIfRxPduHnd_VMCU_BB2_04P_oBackbone2_c53160d8_Rx                                           134U
#define CanIfRxPduHnd_EMS_BB2_01P_oBackbone2_9dd8bb44_Rx                                            135U
#define CanIfRxPduHnd_VMCU_BB2_90P_oBackbone2_8217bd10_Rx                                           136U
#define CanIfRxPduHnd_VMCU_BB2_03P_oBackbone2_290ae199_Rx                                           137U
#define CanIfRxPduHnd_VMCU_BB2_89P_oBackbone2_6d4dfb13_Rx                                           138U
#define CanIfRxPduHnd_VMCU_BB2_02P_oBackbone2_4ec96099_Rx                                           139U
#define CanIfRxPduHnd_VMCU_BB2_01P_oBackbone2_e68de399_Rx                                           140U
#define CanIfRxPduHnd_TECU_BB2_01P_oBackbone2_a19b59bc_Rx                                           141U
#define CanIfRxPduHnd_IC3_BB2_01S_oBackbone2_43f34b3f_Rx                                            142U
#define CanIfRxPduHnd_HMIIOM_BB2_01P_oBackbone2_0b771160_Rx                                         143U
#define CanIfRxPduHnd_VMCU_BB2_88P_oBackbone2_0a8e7a13_Rx                                           144U
#define CanIfRxPduHnd_VMCU_BB2_87P_oBackbone2_6e4bffd0_Rx                                           145U
#define CanIfRxPduHnd_VMCU_BB2_86P_oBackbone2_09887ed0_Rx                                           146U
#define CanIfRxPduHnd_DebugCtrl9_SCIM_BB2_oBackbone2_9f4f1aa2_Rx                                    147U
#define CanIfRxPduHnd_DebugCtrl8_SCIM_BB2_oBackbone2_15b0e9be_Rx                                    148U
#define CanIfRxPduHnd_DebugCtrl7_SCIM_BB2_oBackbone2_9b74b10e_Rx                                    149U
#define CanIfRxPduHnd_DebugCtrl6_SCIM_BB2_oBackbone2_118b4212_Rx                                    150U
#define CanIfRxPduHnd_DebugCtrl5_SCIM_BB2_oBackbone2_55fa5177_Rx                                    151U
#define CanIfRxPduHnd_DebugCtrl4_SCIM_BB2_oBackbone2_df05a26b_Rx                                    152U
#define CanIfRxPduHnd_DebugCtrl3_SCIM_BB2_oBackbone2_dd1877bd_Rx                                    153U
#define CanIfRxPduHnd_DebugCtrl2_SCIM_BB2_oBackbone2_57e784a1_Rx                                    154U
#define CanIfRxPduHnd_DebugCtrl1_SCIM_BB2_oBackbone2_139697c4_Rx                                    155U



/**********************************************************************************************************************
  \def  AUTOSAR Tx PDU handles
**********************************************************************************************************************/

#define CanIfConf_CanIfTxPduCfg_J1939NmTxPdu_fa509995                                               0U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB1_01P_oBackbone1J1939_55a00301_Tx                            1U
#define CanIfConf_CanIfTxPduCfg_FcNPdu_Backbone1J1939_dba64907                                      2U
#define CanIfConf_CanIfTxPduCfg_AckmTxPdu_Backbone1J1939_54966c1b                                   3U
#define CanIfConf_CanIfTxPduCfg_IntTesterTGW2FuncDiagMsg_Cab_Tp_oCabSubnet_96ec8334_Tx              4U
#define CanIfConf_CanIfTxPduCfg_TesterFuncDiagMsg_Cab_Tp_oCabSubnet_d293ecaa_Tx                     5U
#define CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_A2_F4_Cab_Tp_oCabSubnet_fc611706_Tx               6U
#define CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_A2_F3_Cab_Tp_oCabSubnet_fcbc8d7d_Tx             7U
#define CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_A2_F2_Cab_Tp_oCabSubnet_6d74e481_Tx                  8U
#define CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_98_F4_Cab_Tp_oCabSubnet_2e8c3543_Tx               9U
#define CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_98_F3_Cab_Tp_oCabSubnet_2daafb4e_Tx             10U
#define CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_98_F2_Cab_Tp_oCabSubnet_4c51814f_Tx                  11U
#define CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_53_F4_Cab_Tp_oCabSubnet_75ef26c1_Tx               12U
#define CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_53_F3_Cab_Tp_oCabSubnet_e9059d48_Tx             13U
#define CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_53_F2_Cab_Tp_oCabSubnet_9abe6f67_Tx                  14U
#define CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_26_F4_Cab_Tp_oCabSubnet_b42402a4_Tx               15U
#define CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_26_F3_Cab_Tp_oCabSubnet_2e1f9ada_Tx             16U
#define CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_26_F2_Cab_Tp_oCabSubnet_e2a6386f_Tx                  17U
#define CanIfConf_CanIfTxPduCfg_AnmMsg_CIOM_CabSubnet_oCabSubnet_e295c8bd_Tx                        18U
#define CanIfConf_CanIfTxPduCfg_NmAsr_CIOM_Cab_oCabSubnet_153d3c7d_Tx                               19U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_21P_oCabSubnet_c1ce1ce8_Tx                                 20U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_20S_Tp_oCabSubnet_c323df97_Tx                              21U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_19P_oCabSubnet_49985ce9_Tx                                 22U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_18P_oCabSubnet_2e5bdde9_Tx                                 23U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_17P_oCabSubnet_4a9e582a_Tx                                 24U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_16P_oCabSubnet_2d5dd92a_Tx                                 25U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_34P_Tp_oCabSubnet_377e6916_Tx                              26U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_30S_Tp_oCabSubnet_da4b67c4_Tx                              27U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_25S_Tp_oCabSubnet_d5957759_Tx                              28U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_15P_oCabSubnet_85195a2a_Tx                                 29U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_14P_oCabSubnet_e2dadb2a_Tx                                 30U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_13S_Tp_oCabSubnet_e50870d8_Tx                              31U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_12P_oCabSubnet_6922db6b_Tx                                 32U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_11S_Tp_oCabSubnet_ec1435f4_Tx                              33U
#define CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_53_F1_Cab_Tp_oCabSubnet_682570ce_Tx                  34U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_08P_oCabSubnet_2e3c1e68_Tx                                 35U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_07P_oCabSubnet_4af99bab_Tx                                 36U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_22P_oCabSubnet_698a9fe8_Tx                                 37U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_31P_oCabSubnet_c1a9df69_Tx                                 38U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_24P_oCabSubnet_e2729fa9_Tx                                 39U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_10P_oCabSubnet_a6a5d96b_Tx                                 40U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_26P_oCabSubnet_2df59da9_Tx                                 41U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_23P_oCabSubnet_0e491ee8_Tx                                 42U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_27P_oCabSubnet_4a361ca9_Tx                                 43U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_09P_oCabSubnet_49ff9f68_Tx                                 44U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_33P_oCabSubnet_0e2edd69_Tx                                 45U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_29S_Tp_oCabSubnet_e3dce9b1_Tx                              46U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_06P_oCabSubnet_2d3a1aab_Tx                                 47U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_05S_Tp_oCabSubnet_e74407ff_Tx                              48U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_04S_Tp_oCabSubnet_e3ca2569_Tx                              49U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_03P_oCabSubnet_0e8699ea_Tx                                 50U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_01P_oCabSubnet_c1019bea_Tx                                 51U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_32P_oCabSubnet_69ed5c69_Tx                                 52U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_28S_oCabSubnet_0dafccc7_Tx                                 53U
#define CanIfConf_CanIfTxPduCfg_CCM_Cab_03P_FCM_Tp_oCabSubnet_af75b436_Tx                           54U
#define CanIfConf_CanIfTxPduCfg_CIOM_Cab_02P_oCabSubnet_694518ea_Tx                                 55U
#define CanIfConf_CanIfTxPduCfg_IntTesterTGW2FuncDiagMsg_Sec_Tp_oSecuritySubnet_57d96404_Tx         56U
#define CanIfConf_CanIfTxPduCfg_TesterFuncDiagMsg_Sec_Tp_oSecuritySubnet_7f5a7347_Tx                57U
#define CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_C0_F4_Sec_Tp_oSecuritySubnet_0ba24808_Tx          58U
#define CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_C0_F3_Sec_Tp_oSecuritySubnet_3aaf1649_Tx        59U
#define CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_C0_F2_Sec_Tp_oSecuritySubnet_f27248ff_Tx             60U
#define CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_A1_F4_Sec_Tp_oSecuritySubnet_eb89cc56_Tx          61U
#define CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_A1_F3_Sec_Tp_oSecuritySubnet_a1b03b66_Tx        62U
#define CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_A1_F2_Sec_Tp_oSecuritySubnet_5d2e792a_Tx             63U
#define CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_A0_F4_Sec_Tp_oSecuritySubnet_8adef0bc_Tx          64U
#define CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_A0_F3_Sec_Tp_oSecuritySubnet_09265670_Tx        65U
#define CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_A0_F2_Sec_Tp_oSecuritySubnet_cb87d97b_Tx             66U
#define CanIfConf_CanIfTxPduCfg_AnmMsg_CIOM_SecuritySubnet_oSecuritySubnet_d0267e59_Tx              67U
#define CanIfConf_CanIfTxPduCfg_NmAsr_CIOM_Sec_oSecuritySubnet_dae88b7d_Tx                          68U
#define CanIfConf_CanIfTxPduCfg_CIOM_Sec_02P_oSecuritySubnet_04f0ad2a_Tx                            69U
#define CanIfConf_CanIfTxPduCfg_CIOM_Sec_03P_oSecuritySubnet_4d58f6b7_Tx                            70U
#define CanIfConf_CanIfTxPduCfg_PDM_Sec_04S_FCM_Tp_oSecuritySubnet_90a313cf_Tx                      71U
#define CanIfConf_CanIfTxPduCfg_CIOM_Sec_05S_Tp_oSecuritySubnet_c8b553a6_Tx                         72U
#define CanIfConf_CanIfTxPduCfg_PDM_Sec_03S_FCM_Tp_oSecuritySubnet_2750bd9e_Tx                      73U
#define CanIfConf_CanIfTxPduCfg_DDM_Sec_05S_FCM_Tp_oSecuritySubnet_d14dc345_Tx                      74U
#define CanIfConf_CanIfTxPduCfg_Alarm_Sec_07S_FCM_Tp_oSecuritySubnet_94ec21d2_Tx                    75U
#define CanIfConf_CanIfTxPduCfg_DDM_Sec_04S_FCM_Tp_oSecuritySubnet_eddd4cee_Tx                      76U
#define CanIfConf_CanIfTxPduCfg_Alarm_Sec_06S_FCM_Tp_oSecuritySubnet_a3ee35ea_Tx                    77U
#define CanIfConf_CanIfTxPduCfg_DDM_Sec_03S_FCM_Tp_oSecuritySubnet_5a2ee2bf_Tx                      78U
#define CanIfConf_CanIfTxPduCfg_CIOM_Sec_12S_Tp_oSecuritySubnet_2d9a0e12_Tx                         79U
#define CanIfConf_CanIfTxPduCfg_CIOM_Sec_07S_Tp_oSecuritySubnet_69506b1a_Tx                         80U
#define CanIfConf_CanIfTxPduCfg_CIOM_Sec_11S_Tp_oSecuritySubnet_dc8daaf0_Tx                         81U
#define CanIfConf_CanIfTxPduCfg_CIOM_Sec_10S_Tp_oSecuritySubnet_8c7f36ae_Tx                         82U
#define CanIfConf_CanIfTxPduCfg_CIOM_Sec_09S_Tp_oSecuritySubnet_ba09ccac_Tx                         83U
#define CanIfConf_CanIfTxPduCfg_CIOM_Sec_06S_Tp_oSecuritySubnet_39a2f744_Tx                         84U
#define CanIfConf_CanIfTxPduCfg_Alarm_Sec_03S_FCM_Tp_oSecuritySubnet_48e47132_Tx                    85U
#define CanIfConf_CanIfTxPduCfg_CIOM_Sec_08S_Tp_oSecuritySubnet_eafb50f2_Tx                         86U
#define CanIfConf_CanIfTxPduCfg_CIOM_Sec_04P_oSecuritySubnet_6a707225_Tx                            87U
#define CanIfConf_CanIfTxPduCfg_CIOM_Sec_01P_oSecuritySubnet_de08418d_Tx                            88U
#define CanIfConf_CanIfTxPduCfg_FMS_X_CIOMFMS_oFMSNet_68f86b37_Tx                                   89U
#define CanIfConf_CanIfTxPduCfg_TPCM_Tp_oFMSNet_55e2f930_Tx                                         90U
#define CanIfConf_CanIfTxPduCfg_TPDT_Tp_oFMSNet_3018618a_Tx                                         91U
#define CanIfConf_CanIfTxPduCfg_VP236_X_CIOMFMS_oFMSNet_524bf569_Tx                                 92U
#define CanIfConf_CanIfTxPduCfg_DD_X_CIOMFMS_oFMSNet_95f62c09_Tx                                    93U
#define CanIfConf_CanIfTxPduCfg_AMB_X_CIOMFMS_oFMSNet_f6109b97_Tx                                   94U
#define CanIfConf_CanIfTxPduCfg_LFE_X_CIOMFMS_oFMSNet_adac24c8_Tx                                   95U
#define CanIfConf_CanIfTxPduCfg_CCVS_X_CIOMFMS_oFMSNet_1dbcfa70_Tx                                  96U
#define CanIfConf_CanIfTxPduCfg_ET1_X_CIOMFMS_oFMSNet_ff39068f_Tx                                   97U
#define CanIfConf_CanIfTxPduCfg_VW_X_CIOMFMS_oFMSNet_06d77621_Tx                                    98U
#define CanIfConf_CanIfTxPduCfg_LFC_X_CIOMFMS_oFMSNet_16e703d3_Tx                                   99U
#define CanIfConf_CanIfTxPduCfg_HOURS_X_CIOMFMS_oFMSNet_bfc991fc_Tx                                 100U
#define CanIfConf_CanIfTxPduCfg_VDHR_X_CIOMFMS_oFMSNet_67a02fb8_Tx                                  101U
#define CanIfConf_CanIfTxPduCfg_SERV_X_CIOMFMS_oFMSNet_0f3b4ff2_Tx                                  102U
#define CanIfConf_CanIfTxPduCfg_AIR1_X_CIOMFMS_oFMSNet_9b1ec537_Tx                                  103U
#define CanIfConf_CanIfTxPduCfg_CVW_X_CIOMFMS_oFMSNet_5e9635e8_Tx                                   104U
#define CanIfConf_CanIfTxPduCfg_TPDirect_0FE6B_Tp_oFMSNet_5c137171_Tx                               105U
#define CanIfConf_CanIfTxPduCfg_AT1T1I1_X_CIOMFMS_oFMSNet_4f6adf75_Tx                               106U
#define CanIfConf_CanIfTxPduCfg_EEC14_X_CIOMFMS_oFMSNet_3551b912_Tx                                 107U
#define CanIfConf_CanIfTxPduCfg_PTODE_X_CIOMFMS_oFMSNet_8abc23b8_Tx                                 108U
#define CanIfConf_CanIfTxPduCfg_FMS1_X_CIOMFMS_oFMSNet_fb3c9fbd_Tx                                  109U
#define CanIfConf_CanIfTxPduCfg_HRLFC_X_CIOMFMS_oFMSNet_c55a7a2b_Tx                                 110U
#define CanIfConf_CanIfTxPduCfg_ERC1_x_RECUFMS_oFMSNet_338e7918_Tx                                  111U
#define CanIfConf_CanIfTxPduCfg_ERC1_x_EMSRetFMS_oFMSNet_d863a207_Tx                                112U
#define CanIfConf_CanIfTxPduCfg_J1939NmTxPdu_2068bfea                                               113U
#define CanIfConf_CanIfTxPduCfg_CL_X_CIOMFMS_oFMSNet_fc518547_Tx                                    114U
#define CanIfConf_CanIfTxPduCfg_TCO1_X_CIOMFMS_oFMSNet_567baf3d_Tx                                  115U
#define CanIfConf_CanIfTxPduCfg_EEC1_X_CIOMFMS_oFMSNet_954d78de_Tx                                  116U
#define CanIfConf_CanIfTxPduCfg_EEC2_X_CIOMFMS_oFMSNet_d3e60e6a_Tx                                  117U
#define CanIfConf_CanIfTxPduCfg_AckmTxPdu_FMSNet_J1939_44d89c3b                                     118U
#define CanIfConf_CanIfTxPduCfg_Debug28_SCIM_BB2_oBackbone2_4d931807_Tx                             119U
#define CanIfConf_CanIfTxPduCfg_Debug27_SCIM_BB2_oBackbone2_5499710c_Tx                             120U
#define CanIfConf_CanIfTxPduCfg_Debug26_SCIM_BB2_oBackbone2_3bb148d4_Tx                             121U
#define CanIfConf_CanIfTxPduCfg_Debug25_SCIM_BB2_oBackbone2_8ac902bc_Tx                             122U
#define CanIfConf_CanIfTxPduCfg_Debug24_SCIM_BB2_oBackbone2_e5e13b64_Tx                             123U
#define CanIfConf_CanIfTxPduCfg_Debug22_SCIM_BB2_oBackbone2_5c60a9f5_Tx                             124U
#define CanIfConf_CanIfTxPduCfg_Debug21_SCIM_BB2_oBackbone2_ed18e39d_Tx                             125U
#define CanIfConf_CanIfTxPduCfg_Debug20_SCIM_BB2_oBackbone2_8230da45_Tx                             126U
#define CanIfConf_CanIfTxPduCfg_Debug19_SCIM_BB2_oBackbone2_6163b0ff_Tx                             127U
#define CanIfConf_CanIfTxPduCfg_Debug18_SCIM_BB2_oBackbone2_0e4b8927_Tx                             128U
#define CanIfConf_CanIfTxPduCfg_Debug17_SCIM_BB2_oBackbone2_1741e02c_Tx                             129U
#define CanIfConf_CanIfTxPduCfg_Debug16_SCIM_BB2_oBackbone2_7869d9f4_Tx                             130U
#define CanIfConf_CanIfTxPduCfg_Debug15_SCIM_BB2_oBackbone2_c911939c_Tx                             131U
#define CanIfConf_CanIfTxPduCfg_Debug14_SCIM_BB2_oBackbone2_a639aa44_Tx                             132U
#define CanIfConf_CanIfTxPduCfg_Debug13_SCIM_BB2_oBackbone2_7090010d_Tx                             133U
#define CanIfConf_CanIfTxPduCfg_Debug12_SCIM_BB2_oBackbone2_1fb838d5_Tx                             134U
#define CanIfConf_CanIfTxPduCfg_Debug11_SCIM_BB2_oBackbone2_aec072bd_Tx                             135U
#define CanIfConf_CanIfTxPduCfg_Debug10_SCIM_BB2_oBackbone2_c1e84b65_Tx                             136U
#define CanIfConf_CanIfTxPduCfg_Debug9_SCIM_BB2_oBackbone2_cb8b9a3c_Tx                              137U
#define CanIfConf_CanIfTxPduCfg_Debug8_SCIM_BB2_oBackbone2_ab7cdc97_Tx                              138U
#define CanIfConf_CanIfTxPduCfg_Debug7_SCIM_BB2_oBackbone2_e391325d_Tx                              139U
#define CanIfConf_CanIfTxPduCfg_DiagUUDTRespMsg1_F2_C0_BB2_oBackbone2_603e2338_Tx                   140U
#define CanIfConf_CanIfTxPduCfg_DiagUUDTRespMsg1_F2_A2_BB2_oBackbone2_8af81a14_Tx                   141U
#define CanIfConf_CanIfTxPduCfg_DiagUUDTRespMsg1_F2_A1_BB2_oBackbone2_26f22879_Tx                   142U
#define CanIfConf_CanIfTxPduCfg_DiagUUDTRespMsg1_F2_A0_BB2_oBackbone2_42f439a2_Tx                   143U
#define CanIfConf_CanIfTxPduCfg_DiagUUDTRespMsg1_F2_98_BB2_oBackbone2_5178e6a4_Tx                   144U
#define CanIfConf_CanIfTxPduCfg_DiagUUDTRespMsg1_F2_53_BB2_oBackbone2_a51c09cf_Tx                   145U
#define CanIfConf_CanIfTxPduCfg_DiagUUDTRespMsg1_F2_40_BB2_oBackbone2_187336ef_Tx                   146U
#define CanIfConf_CanIfTxPduCfg_DiagUUDTRespMsg1_F2_26_BB2_oBackbone2_fc487bda_Tx                   147U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_C0_BB2_Tp_oBackbone2_f7aad0d7_Tx              148U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_A2_BB2_Tp_oBackbone2_249acffa_Tx              149U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_A1_BB2_Tp_oBackbone2_bca8fbcc_Tx              150U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_A0_BB2_Tp_oBackbone2_7d9615e1_Tx              151U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_98_BB2_Tp_oBackbone2_8516ddd7_Tx              152U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_53_BB2_Tp_oBackbone2_280e15fa_Tx              153U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_40_BB2_Tp_oBackbone2_f5224357_Tx              154U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_26_BB2_Tp_oBackbone2_5b036461_Tx              155U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_C0_BB2_Tp_oBackbone2_9924f26b_Tx            156U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_A2_BB2_Tp_oBackbone2_d6b4927e_Tx            157U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_A1_BB2_Tp_oBackbone2_08540fc1_Tx            158U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_A0_BB2_Tp_oBackbone2_f4db796b_Tx            159U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_98_BB2_Tp_oBackbone2_73235a33_Tx            160U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_53_BB2_Tp_oBackbone2_930c5799_Tx            161U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_40_BB2_Tp_oBackbone2_7b130fa6_Tx            162U
#define CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_26_BB2_Tp_oBackbone2_aba3af99_Tx            163U
#define CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_C0_BB2_Tp_oBackbone2_ae5b54dc_Tx                 164U
#define CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_A2_BB2_Tp_oBackbone2_2addb983_Tx                 165U
#define CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_A1_BB2_Tp_oBackbone2_441131ae_Tx                 166U
#define CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_A0_BB2_Tp_oBackbone2_d77a4b8a_Tx                 167U
#define CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_98_BB2_Tp_oBackbone2_0c1730ea_Tx                 168U
#define CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_53_BB2_Tp_oBackbone2_ef1139d4_Tx                 169U
#define CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_40_BB2_Tp_oBackbone2_bd4d3e52_Tx                 170U
#define CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_26_BB2_Tp_oBackbone2_ebb70ff2_Tx                 171U
#define CanIfConf_CanIfTxPduCfg_Debug6_SCIM_BB2_oBackbone2_836674f6_Tx                              172U
#define CanIfConf_CanIfTxPduCfg_Debug5_SCIM_BB2_oBackbone2_227fbf0b_Tx                              173U
#define CanIfConf_CanIfTxPduCfg_Debug4_SCIM_BB2_oBackbone2_4288f9a0_Tx                              174U
#define CanIfConf_CanIfTxPduCfg_Debug3_SCIM_BB2_oBackbone2_bb3d2eb0_Tx                              175U
#define CanIfConf_CanIfTxPduCfg_Debug2_SCIM_BB2_oBackbone2_dbca681b_Tx                              176U
#define CanIfConf_CanIfTxPduCfg_AnmMsg_CIOM_Backbone2_oBackbone2_d362d40e_Tx                        177U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_28P_oBackbone2_d86d16b8_Tx                                 178U
#define CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F1_53_BB2_Tp_oBackbone2_be0c70d1_Tx                 179U
#define CanIfConf_CanIfTxPduCfg_BBM_BB2_03S_CIOM_FCM_Tp_oBackbone2_29c4ac8e_Tx                      180U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_21S_oBackbone2_140cc697_Tx                                 181U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_07P_oBackbone2_bc671479_Tx                                 182U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_31S_oBackbone2_146b0516_Tx                                 183U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_20S_oBackbone2_73cf4797_Tx                                 184U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_26S_oBackbone2_f83747d6_Tx                                 185U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_13S_Tp_oBackbone2_bd99285a_Tx                              186U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_12S_Tp_oBackbone2_b9170acc_Tx                              187U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_11P_oBackbone2_37f8d7b9_Tx                                 188U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_27S_oBackbone2_9ff4c6d6_Tx                                 189U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_10P_oBackbone2_503b56b9_Tx                                 190U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_06P_oBackbone2_dba49579_Tx                                 191U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_25P_oBackbone2_732f917b_Tx                                 192U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_05P_oBackbone2_73e01679_Tx                                 193U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_01P_oBackbone2_379f1438_Tx                                 194U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_03P_oBackbone2_f8181638_Tx                                 195U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_02P_oBackbone2_9fdb9738_Tx                                 196U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_32S_Tp_oBackbone2_8bc67a6a_Tx                              197U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_04P_oBackbone2_14239779_Tx                                 198U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_30P_oBackbone2_50f4d1bb_Tx                                 199U
#define CanIfConf_CanIfTxPduCfg_DiagFaultStat_WRCS_BB2_oBackbone2_dad83051_Tx                       200U
#define CanIfConf_CanIfTxPduCfg_DiagFaultStat_SRS_BB2_oBackbone2_e1ef7eee_Tx                        201U
#define CanIfConf_CanIfTxPduCfg_DiagFaultStat_PDM_BB2_oBackbone2_b720c987_Tx                        202U
#define CanIfConf_CanIfTxPduCfg_DiagFaultStat_LECM_BB2_oBackbone2_0cb60c21_Tx                       203U
#define CanIfConf_CanIfTxPduCfg_DiagFaultStat_DDM_BB2_oBackbone2_c5068234_Tx                        204U
#define CanIfConf_CanIfTxPduCfg_DiagFaultStat_CIOM_BB2_oBackbone2_04d7302e_Tx                       205U
#define CanIfConf_CanIfTxPduCfg_DiagFaultStat_CCM_BB2_oBackbone2_2f6e7814_Tx                        206U
#define CanIfConf_CanIfTxPduCfg_DiagFaultStat_Alarm_BB2_oBackbone2_7b6d0a04_Tx                      207U
#define CanIfConf_CanIfTxPduCfg_TECU_BB2_06S_FCM_Tp_oBackbone2_a56e8b10_Tx                          208U
#define CanIfConf_CanIfTxPduCfg_VMCU_BB2_57P_FCM_Tp_oBackbone2_65fb58e9_Tx                          209U
#define CanIfConf_CanIfTxPduCfg_HMIIOM_BB2_36S_FCM_Tp_oBackbone2_bf84bd48_Tx                        210U
#define CanIfConf_CanIfTxPduCfg_HMIIOM_BB2_19P_CIOM_FCM_Tp_oBackbone2_1a616940_Tx                   211U
#define CanIfConf_CanIfTxPduCfg_VMCU_BB2_31S_FCM_Tp_oBackbone2_46c44850_Tx                          212U
#define CanIfConf_CanIfTxPduCfg_VMCU_BB2_32S_FCM_Tp_oBackbone2_8a7e4a00_Tx                          213U
#define CanIfConf_CanIfTxPduCfg_HMIIOM_BB2_20S_FCM_Tp_oBackbone2_2def59ba_Tx                        214U
#define CanIfConf_CanIfTxPduCfg_EMS_BB2_09S_FCM_Tp_oBackbone2_41cc37fa_Tx                           215U
#define CanIfConf_CanIfTxPduCfg_VMCU_BB2_34S_FCM_Tp_oBackbone2_c87b48e1_Tx                          216U
#define CanIfConf_CanIfTxPduCfg_EMS_BB2_11S_FCM_Tp_oBackbone2_6cd5cf95_Tx                           217U
#define CanIfConf_CanIfTxPduCfg_HMIIOM_BB2_35S_FCM_Tp_oBackbone2_e32a38c7_Tx                        218U
#define CanIfConf_CanIfTxPduCfg_TECU_BB2_05S_FCM_Tp_oBackbone2_69d48940_Tx                          219U
#define CanIfConf_CanIfTxPduCfg_NmAsr_CIOM_BB2_oBackbone2_9b0338b4_Tx                               220U
#define CanIfConf_CanIfTxPduCfg_CIOM_BB2_29P_oBackbone2_bfae97b8_Tx                                 221U


/**********************************************************************************************************************
  \def  AUTOSAR Rx PDU handles
**********************************************************************************************************************/

#define CanIfConf_CanIfRxPduCfg_TPCM_Tp_oBackbone1J1939_ffabc0bc_Rx                                 0U
#define CanIfConf_CanIfRxPduCfg_TPDT_Tp_oBackbone1J1939_7785b746_Rx                                 1U
#define CanIfConf_CanIfRxPduCfg_RqstRxPdu_Backbone1J1939_54966c1b                                   2U
#define CanIfConf_CanIfRxPduCfg_TPDirect_0FE6B_Tp_oBackbone1J1939_e14130fb_Rx                       3U
#define CanIfConf_CanIfRxPduCfg_J1939NmRxPdu_fa509995                                               4U
#define CanIfConf_CanIfRxPduCfg_ET1_X_EMS_oBackbone1J1939_a6b0a91f_Rx                               5U
#define CanIfConf_CanIfRxPduCfg_EBC5_X_EBS_oBackbone1J1939_a226f3b2_Rx                              6U
#define CanIfConf_CanIfRxPduCfg_VDHR_X_VMCU_oBackbone1J1939_0e2cb4b8_Rx                             7U
#define CanIfConf_CanIfRxPduCfg_EEC1_X_EMS_oBackbone1J1939_5b1d5ab3_Rx                              8U
#define CanIfConf_CanIfRxPduCfg_TD_X_HMIIOM_oBackbone1J1939_49e6bcf2_Rx                             9U
#define CanIfConf_CanIfRxPduCfg_HRLFC_X_EMS_oBackbone1J1939_5e7f7408_Rx                             10U
#define CanIfConf_CanIfRxPduCfg_CVW_X_EBS_oBackbone1J1939_2dfa9bbe_Rx                               11U
#define CanIfConf_CanIfRxPduCfg_EBS_BB1_05P_oBackbone1J1939_43953999_Rx                             12U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB1_01P_oBackbone1J1939_c293b9cd_Rx                            13U
#define CanIfConf_CanIfRxPduCfg_EBS_BB1_01P_oBackbone1J1939_9205779e_Rx                             14U
#define CanIfConf_CanIfRxPduCfg_LFE_X_EMS_oBackbone1J1939_592edea5_Rx                               15U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB1_03P_oBackbone1J1939_51c30ef7_Rx                            16U
#define CanIfConf_CanIfRxPduCfg_ACM_BB1_01P_oBackbone1J1939_9e50bfac_Rx                             17U
#define CanIfConf_CanIfRxPduCfg_TCO1_X_TACHO_oBackbone1J1939_884a7499_Rx                            18U
#define CanIfConf_CanIfRxPduCfg_VDC1_X_EBS_oBackbone1J1939_09820bff_Rx                              19U
#define CanIfConf_CanIfRxPduCfg_ERC1_X_RECU_oBackbone1J1939_3104dca7_Rx                             20U
#define CanIfConf_CanIfRxPduCfg_VDC2_X_EBS_oBackbone1J1939_e250e643_Rx                              21U
#define CanIfConf_CanIfRxPduCfg_ERC1_X_EMSRet_oBackbone1J1939_35cada34_Rx                           22U
#define CanIfConf_CanIfRxPduCfg_EBS_BB1_02P_oBackbone1J1939_b875028c_Rx                             23U
#define CanIfConf_CanIfRxPduCfg_EEC2_X_EMS_oBackbone1J1939_b0cfb70f_Rx                              24U
#define CanIfConf_CanIfRxPduCfg_EBC1_X_EBS_oBackbone1J1939_aabe659c_Rx                              25U
#define CanIfConf_CanIfRxPduCfg_AMB_X_VMCU_oBackbone1J1939_d5496e9a_Rx                              26U
#define CanIfConf_CanIfRxPduCfg_AIR1_X_VMCU_oBackbone1J1939_30174316_Rx                             27U
#define CanIfConf_CanIfRxPduCfg_FMS1_X_HMIIOM_oBackbone1J1939_f8c70f73_Rx                           28U
#define CanIfConf_CanIfRxPduCfg_EBC2_X_EBS_oBackbone1J1939_416c8820_Rx                              29U
#define CanIfConf_CanIfRxPduCfg_CCVS_X_VMCU_oBackbone1J1939_d16316a3_Rx                             30U
#define CanIfConf_CanIfRxPduCfg_CIOM_c15ca2a0_Rx                                                    31U
#define CanIfConf_CanIfRxPduCfg_DiagUUDTRespMsg1_F2_A2_Cab_oCabSubnet_faf51f79_Rx                   32U
#define CanIfConf_CanIfRxPduCfg_DiagUUDTRespMsg1_F2_98_Cab_oCabSubnet_2175e3c9_Rx                   33U
#define CanIfConf_CanIfRxPduCfg_DiagUUDTRespMsg1_F2_53_Cab_oCabSubnet_d5110ca2_Rx                   34U
#define CanIfConf_CanIfRxPduCfg_DiagUUDTRespMsg1_F2_26_Cab_oCabSubnet_8c457eb7_Rx                   35U
#define CanIfConf_CanIfRxPduCfg_DiagRespMsgIntTGW2_F4_A2_Cab_Tp_oCabSubnet_748ab027_Rx              36U
#define CanIfConf_CanIfRxPduCfg_DiagRespMsgIntTGW2_F4_98_Cab_Tp_oCabSubnet_d506a20a_Rx              37U
#define CanIfConf_CanIfRxPduCfg_DiagRespMsgIntTGW2_F4_53_Cab_Tp_oCabSubnet_781e6a27_Rx              38U
#define CanIfConf_CanIfRxPduCfg_DiagRespMsgIntTGW2_F4_26_Cab_Tp_oCabSubnet_0b131bbc_Rx              39U
#define CanIfConf_CanIfRxPduCfg_DiagRespMsgIntHMIIOM_F3_A2_Cab_Tp_oCabSubnet_15c35ee3_Rx            40U
#define CanIfConf_CanIfRxPduCfg_DiagRespMsgIntHMIIOM_F3_98_Cab_Tp_oCabSubnet_b05496ae_Rx            41U
#define CanIfConf_CanIfRxPduCfg_DiagRespMsgIntHMIIOM_F3_53_Cab_Tp_oCabSubnet_507b9b04_Rx            42U
#define CanIfConf_CanIfRxPduCfg_DiagRespMsgIntHMIIOM_F3_26_Cab_Tp_oCabSubnet_68d46304_Rx            43U
#define CanIfConf_CanIfRxPduCfg_PhysDiagRespMsg_F2_A2_Cab_Tp_oCabSubnet_89846943_Rx                 44U
#define CanIfConf_CanIfRxPduCfg_PhysDiagRespMsg_F2_98_Cab_Tp_oCabSubnet_af4ee02a_Rx                 45U
#define CanIfConf_CanIfRxPduCfg_PhysDiagRespMsg_F2_53_Cab_Tp_oCabSubnet_4c48e914_Rx                 46U
#define CanIfConf_CanIfRxPduCfg_PhysDiagRespMsg_F2_26_Cab_Tp_oCabSubnet_48eedf32_Rx                 47U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_ECUspare6_CabSubnet_oCabSubnet_582cafe8_Rx                   48U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_WRCS_CabSubnet_oCabSubnet_62e3be6f_Rx                        49U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_SRS_CabSubnet_oCabSubnet_690513e9_Rx                         50U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_LECM1_CabSubnet_oCabSubnet_ba3b1140_Rx                       51U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_CCM_CabSubnet_oCabSubnet_7e592096_Rx                         52U
#define CanIfConf_CanIfRxPduCfg_DiagFaultStat_WRCS_Cab_oCabSubnet_b86e4ab7_Rx                       53U
#define CanIfConf_CanIfRxPduCfg_DiagFaultStat_SRS_Cab_oCabSubnet_e5f44b73_Rx                        54U
#define CanIfConf_CanIfRxPduCfg_DiagFaultStat_LECM_Cab_oCabSubnet_6e0076c7_Rx                       55U
#define CanIfConf_CanIfRxPduCfg_DiagFaultStat_CCM_Cab_oCabSubnet_2b754d89_Rx                        56U
#define CanIfConf_CanIfRxPduCfg_CIOM_Cab_20S_FCM_Tp_oCabSubnet_88858df9_Rx                          57U
#define CanIfConf_CanIfRxPduCfg_SRS_Cab_06P_oCabSubnet_bec0c2b2_Rx                                  58U
#define CanIfConf_CanIfRxPduCfg_SRS_Cab_05P_oCabSubnet_2fb89566_Rx                                  59U
#define CanIfConf_CanIfRxPduCfg_CIOM_Cab_34P_FCM_Tp_oCabSubnet_d2bbef9e_Rx                          60U
#define CanIfConf_CanIfRxPduCfg_CIOM_Cab_30S_FCM_Tp_oCabSubnet_ae18d4ab_Rx                          61U
#define CanIfConf_CanIfRxPduCfg_CIOM_Cab_25S_FCM_Tp_oCabSubnet_063a8d48_Rx                          62U
#define CanIfConf_CanIfRxPduCfg_LECM1_Cab_03S_oCabSubnet_e20ca5cb_Rx                                63U
#define CanIfConf_CanIfRxPduCfg_CIOM_Cab_13S_FCM_Tp_oCabSubnet_2f98645f_Rx                          64U
#define CanIfConf_CanIfRxPduCfg_CIOM_Cab_11S_FCM_Tp_oCabSubnet_a74b983f_Rx                          65U
#define CanIfConf_CanIfRxPduCfg_PhysDiagRespMsg_F1_53_Cab_Tp_oCabSubnet_1d55a011_Rx                 66U
#define CanIfConf_CanIfRxPduCfg_SRS_Cab_04P_oCabSubnet_5f6f582a_Rx                                  67U
#define CanIfConf_CanIfRxPduCfg_SRS_Cab_03P_oCabSubnet_d6393c8f_Rx                                  68U
#define CanIfConf_CanIfRxPduCfg_LECM1_Cab_05S_oCabSubnet_b18bf7f9_Rx                                69U
#define CanIfConf_CanIfRxPduCfg_WRCS_Cab_03P_oCabSubnet_37a4b7c4_Rx                                 70U
#define CanIfConf_CanIfRxPduCfg_LECM1_Cab_04P_oCabSubnet_b355ee77_Rx                                71U
#define CanIfConf_CanIfRxPduCfg_LECM1_Cab_02P_oCabSubnet_e0d2bc45_Rx                                72U
#define CanIfConf_CanIfRxPduCfg_SRS_Cab_01P_oCabSubnet_3796a617_Rx                                  73U
#define CanIfConf_CanIfRxPduCfg_CIOM_Cab_29S_FCM_Tp_oCabSubnet_8230888a_Rx                          74U
#define CanIfConf_CanIfRxPduCfg_WRCS_Cab_02P_oCabSubnet_506736c4_Rx                                 75U
#define CanIfConf_CanIfRxPduCfg_CIOM_Cab_05P_FCM_Tp_oCabSubnet_fd75fa58_Rx                          76U
#define CanIfConf_CanIfRxPduCfg_CIOM_Cab_04P_FCM_Tp_oCabSubnet_b91c0468_Rx                          77U
#define CanIfConf_CanIfRxPduCfg_CCM_Cab_06P_oCabSubnet_ae969834_Rx                                  78U
#define CanIfConf_CanIfRxPduCfg_CCM_Cab_07P_oCabSubnet_de415578_Rx                                  79U
#define CanIfConf_CanIfRxPduCfg_CCM_Cab_08P_oCabSubnet_674b573f_Rx                                  80U
#define CanIfConf_CanIfRxPduCfg_CCM_Cab_04P_oCabSubnet_4f3902ac_Rx                                  81U
#define CanIfConf_CanIfRxPduCfg_CCM_Cab_01P_oCabSubnet_27c0fc91_Rx                                  82U
#define CanIfConf_CanIfRxPduCfg_CCM_Cab_03P_Tp_oCabSubnet_bfb45635_Rx                               83U
#define CanIfConf_CanIfRxPduCfg_WRCS_Cab_01P_oCabSubnet_f823b5c4_Rx                                 84U
#define CanIfConf_CanIfRxPduCfg_CIOM_0462631a_Rx                                                    85U
#define CanIfConf_CanIfRxPduCfg_DiagUUDTRespMsg1_F2_C0_Sec_oSecuritySubnet_d0c97a87_Rx              86U
#define CanIfConf_CanIfRxPduCfg_DiagUUDTRespMsg1_F2_A1_Sec_oSecuritySubnet_67c5eccf_Rx              87U
#define CanIfConf_CanIfRxPduCfg_DiagUUDTRespMsg1_F2_A0_Sec_oSecuritySubnet_46825d6a_Rx              88U
#define CanIfConf_CanIfRxPduCfg_DiagRespMsgIntTGW2_F4_C0_Sec_Tp_oSecuritySubnet_7a975d32_Rx         89U
#define CanIfConf_CanIfRxPduCfg_DiagRespMsgIntTGW2_F4_A1_Sec_Tp_oSecuritySubnet_efa76b9d_Rx         90U
#define CanIfConf_CanIfRxPduCfg_DiagRespMsgIntTGW2_F4_A0_Sec_Tp_oSecuritySubnet_d9469eac_Rx         91U
#define CanIfConf_CanIfRxPduCfg_DiagRespMsgIntHMIIOM_F3_C0_Sec_Tp_oSecuritySubnet_77f0a36b_Rx       92U
#define CanIfConf_CanIfRxPduCfg_DiagRespMsgIntHMIIOM_F3_A1_Sec_Tp_oSecuritySubnet_052f8796_Rx       93U
#define CanIfConf_CanIfRxPduCfg_DiagRespMsgIntHMIIOM_F3_A0_Sec_Tp_oSecuritySubnet_95b29252_Rx       94U
#define CanIfConf_CanIfRxPduCfg_PhysDiagRespMsg_F2_C0_Sec_Tp_oSecuritySubnet_614a0693_Rx            95U
#define CanIfConf_CanIfRxPduCfg_PhysDiagRespMsg_F2_A1_Sec_Tp_oSecuritySubnet_d47cc691_Rx            96U
#define CanIfConf_CanIfRxPduCfg_PhysDiagRespMsg_F2_A0_Sec_Tp_oSecuritySubnet_207d0e64_Rx            97U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_ECUspare5_SecuritySubnet_oSecuritySubnet_25af973c_Rx         98U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_PDM_SecuritySubnet_oSecuritySubnet_d922132b_Rx               99U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_DDM_SecuritySubnet_oSecuritySubnet_669221a0_Rx               100U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_Alarm_SecuritySubnet_oSecuritySubnet_38c19358_Rx             101U
#define CanIfConf_CanIfRxPduCfg_DiagFaultStat_PDM_Sec_oSecuritySubnet_b17b40b8_Rx                   102U
#define CanIfConf_CanIfRxPduCfg_DiagFaultStat_DDM_Sec_oSecuritySubnet_3b5b41e4_Rx                   103U
#define CanIfConf_CanIfRxPduCfg_DiagFaultStat_Alarm_Sec_oSecuritySubnet_6cedaf7c_Rx                 104U
#define CanIfConf_CanIfRxPduCfg_PDM_Sec_04S_Tp_oSecuritySubnet_596ba3c3_Rx                          105U
#define CanIfConf_CanIfRxPduCfg_CIOM_Sec_05S_FCM_Tp_oSecuritySubnet_02ea2344_Rx                     106U
#define CanIfConf_CanIfRxPduCfg_PDM_Sec_03S_Tp_oSecuritySubnet_225f8534_Rx                          107U
#define CanIfConf_CanIfRxPduCfg_DDM_Sec_05S_Tp_oSecuritySubnet_5a1ed97b_Rx                          108U
#define CanIfConf_CanIfRxPduCfg_Alarm_Sec_07S_Tp_oSecuritySubnet_bf7e0710_Rx                        109U
#define CanIfConf_CanIfRxPduCfg_DDM_Sec_04S_Tp_oSecuritySubnet_c3efbadc_Rx                          110U
#define CanIfConf_CanIfRxPduCfg_Alarm_Sec_06S_Tp_oSecuritySubnet_2b24d209_Rx                        111U
#define CanIfConf_CanIfRxPduCfg_DDM_Sec_03S_Tp_oSecuritySubnet_b8db9c2b_Rx                          112U
#define CanIfConf_CanIfRxPduCfg_CIOM_Sec_12S_FCM_Tp_oSecuritySubnet_9cba7397_Rx                     113U
#define CanIfConf_CanIfRxPduCfg_CIOM_Sec_07S_FCM_Tp_oSecuritySubnet_5acc46b8_Rx                     114U
#define CanIfConf_CanIfRxPduCfg_CIOM_Sec_11S_FCM_Tp_oSecuritySubnet_e88f2495_Rx                     115U
#define CanIfConf_CanIfRxPduCfg_CIOM_Sec_10S_FCM_Tp_oSecuritySubnet_c49c166b_Rx                     116U
#define CanIfConf_CanIfRxPduCfg_CIOM_Sec_09S_FCM_Tp_oSecuritySubnet_094e790d_Rx                     117U
#define CanIfConf_CanIfRxPduCfg_CIOM_Sec_06S_FCM_Tp_oSecuritySubnet_76df7446_Rx                     118U
#define CanIfConf_CanIfRxPduCfg_Alarm_Sec_03S_Tp_oSecuritySubnet_838659b7_Rx                        119U
#define CanIfConf_CanIfRxPduCfg_CIOM_Sec_08S_FCM_Tp_oSecuritySubnet_255d4bf3_Rx                     120U
#define CanIfConf_CanIfRxPduCfg_PDM_Sec_01P_oSecuritySubnet_073fa36a_Rx                             121U
#define CanIfConf_CanIfRxPduCfg_DDM_Sec_01P_oSecuritySubnet_09e2b30b_Rx                             122U
#define CanIfConf_CanIfRxPduCfg_Alarm_Sec_02P_oSecuritySubnet_a902993f_Rx                           123U
#define CanIfConf_CanIfRxPduCfg_FcNPdu_FMSNet_J1939_5ab570f8                                        124U
#define CanIfConf_CanIfRxPduCfg_RqstRxPdu_FMSNet_J1939_44d89c3b                                     125U
#define CanIfConf_CanIfRxPduCfg_J1939NmRxPdu_2068bfea                                               126U
#define CanIfConf_CanIfRxPduCfg_VP232_X_ERAU_oFMSNet_8c33d56b_Rx                                    127U
#define CanIfConf_CanIfRxPduCfg_CIOM_263e35c1_Rx                                                    128U
#define CanIfConf_CanIfRxPduCfg_IntTesterTGW2FuncDiagMsg_BB2_Tp_oBackbone2_c6fcfce9_Rx              129U
#define CanIfConf_CanIfRxPduCfg_TesterFuncDiagMsg_BB2_Tp_oBackbone2_6ec04186_Rx                     130U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntTGW2_C0_F4_BB2_Tp_oBackbone2_92584732_Rx               131U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntHMIIOM_C0_F3_BB2_Tp_oBackbone2_2bec4c32_Rx             132U
#define CanIfConf_CanIfRxPduCfg_PhysDiagReqMsg_C0_F2_BB2_Tp_oBackbone2_bd293e55_Rx                  133U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntTGW2_A2_F4_BB2_Tp_oBackbone2_8613fab7_Rx               134U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntHMIIOM_A2_F3_BB2_Tp_oBackbone2_e882bd41_Rx             135U
#define CanIfConf_CanIfRxPduCfg_PhysDiagReqMsg_A2_F2_BB2_Tp_oBackbone2_e7d85c22_Rx                  136U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntTGW2_A1_F4_BB2_Tp_oBackbone2_91dc1a3b_Rx               137U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntHMIIOM_A1_F3_BB2_Tp_oBackbone2_ba062351_Rx             138U
#define CanIfConf_CanIfRxPduCfg_PhysDiagReqMsg_A1_F2_BB2_Tp_oBackbone2_9bf67e6d_Rx                  139U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntTGW2_A0_F4_BB2_Tp_oBackbone2_9c9945bf_Rx               140U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntHMIIOM_A0_F3_BB2_Tp_oBackbone2_3d55549e_Rx             141U
#define CanIfConf_CanIfRxPduCfg_PhysDiagReqMsg_A0_F2_BB2_Tp_oBackbone2_b0139fa8_Rx                  142U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntTGW2_98_F4_BB2_Tp_oBackbone2_54fed8f2_Rx               143U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntHMIIOM_98_F3_BB2_Tp_oBackbone2_3994cb72_Rx             144U
#define CanIfConf_CanIfRxPduCfg_PhysDiagReqMsg_98_F2_BB2_Tp_oBackbone2_c6fd39ec_Rx                  145U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntTGW2_53_F4_BB2_Tp_oBackbone2_0f9dcb70_Rx               146U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntHMIIOM_53_F3_BB2_Tp_oBackbone2_fd3bad74_Rx             147U
#define CanIfConf_CanIfRxPduCfg_PhysDiagReqMsg_53_F2_BB2_Tp_oBackbone2_1012d7c4_Rx                  148U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntTGW2_40_F4_BB2_Tp_oBackbone2_f28a299a_Rx               149U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntHMIIOM_40_F3_BB2_Tp_oBackbone2_a4e3bf32_Rx             150U
#define CanIfConf_CanIfRxPduCfg_PhysDiagReqMsg_40_F2_BB2_Tp_oBackbone2_87192655_Rx                  151U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntTGW2_26_F4_BB2_Tp_oBackbone2_ce56ef15_Rx               152U
#define CanIfConf_CanIfRxPduCfg_DiagReqMsgIntHMIIOM_26_F3_BB2_Tp_oBackbone2_3a21aae6_Rx             153U
#define CanIfConf_CanIfRxPduCfg_PhysDiagReqMsg_26_F2_BB2_Tp_oBackbone2_680a80cc_Rx                  154U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_ECUspare2_Backbone2_oBackbone2_181d947f_Rx                   155U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_ECUspare1_Backbone2_oBackbone2_c849277d_Rx                   156U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_VMCU_Backbone2_oBackbone2_e6fd44da_Rx                        157U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_TECU_Backbone2_oBackbone2_9bd86e99_Rx                        158U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_EMS_Backbone2_oBackbone2_5f08a43f_Rx                         159U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_DACU_Backbone2_oBackbone2_fb766361_Rx                        160U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_BBM_Backbone2_oBackbone2_604b553c_Rx                         161U
#define CanIfConf_CanIfRxPduCfg_AnmMsg_IC3_Backbone2_oBackbone2_cdc1c410_Rx                         162U
#define CanIfConf_CanIfRxPduCfg_PhysDiagReqMsg_53_F1_BB2_Tp_oBackbone2_e289c86d_Rx                  163U
#define CanIfConf_CanIfRxPduCfg_BBM_BB2_03S_CIOM_Tp_oBackbone2_8a8d09f2_Rx                          164U
#define CanIfConf_CanIfRxPduCfg_CIOM_BB2_13S_FCM_Tp_oBackbone2_57d6a4a9_Rx                          165U
#define CanIfConf_CanIfRxPduCfg_CIOM_BB2_12S_FCM_Tp_oBackbone2_13bf5a99_Rx                          166U
#define CanIfConf_CanIfRxPduCfg_BBM_BB2_06P_oBackbone2_89015c9b_Rx                                  167U
#define CanIfConf_CanIfRxPduCfg_BBM_BB2_02P_oBackbone2_912f6fea_Rx                                  168U
#define CanIfConf_CanIfRxPduCfg_BBM_BB2_01P_oBackbone2_0057383e_Rx                                  169U
#define CanIfConf_CanIfRxPduCfg_DACU_BB2_02P_oBackbone2_0b8371c6_Rx                                 170U
#define CanIfConf_CanIfRxPduCfg_CIOM_BB2_32S_FCM_Tp_oBackbone2_5e85e83d_Rx                          171U
#define CanIfConf_CanIfRxPduCfg_TECU_BB2_06S_Tp_oBackbone2_0c47cb8e_Rx                              172U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_39P_oBackbone2_2c3b8f89_Rx                               173U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_38P_oBackbone2_17230dd8_Rx                               174U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_57P_Tp_oBackbone2_925193df_Rx                              175U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_36S_Tp_oBackbone2_95bfb681_Rx                            176U
#define CanIfConf_CanIfRxPduCfg_EMS_BB2_08P_oBackbone2_dd5310ea_Rx                                  177U
#define CanIfConf_CanIfRxPduCfg_EMS_BB2_06P_oBackbone2_148edfe1_Rx                                  178U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_19P_CIOM_Tp_oBackbone2_470ca910_Rx                       179U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_93P_oBackbone2_2a533e10_Rx                                 180U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_92P_oBackbone2_4d90bf10_Rx                                 181U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_91P_oBackbone2_e5d43c10_Rx                                 182U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_31S_Tp_oBackbone2_210b49cb_Rx                              183U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_32S_Tp_oBackbone2_2c992e71_Rx                              184U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_20S_Tp_oBackbone2_ce8859ea_Rx                            185U
#define CanIfConf_CanIfRxPduCfg_EMS_BB2_09S_Tp_oBackbone2_ef0c9958_Rx                               186U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_22P_oBackbone2_7ef06453_Rx                               187U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_109P_oBackbone2_770d627b_Rx                                188U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_107P_oBackbone2_e17ef7f1_Rx                                189U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_106P_oBackbone2_f9c06f06_Rx                                190U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_105P_oBackbone2_d003c61f_Rx                                191U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_103P_oBackbone2_8384942d_Rx                                192U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_102P_oBackbone2_9b3a0cda_Rx                                193U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_101P_oBackbone2_b2f9a5c3_Rx                                194U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_100P_oBackbone2_aa473d34_Rx                                195U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_99P_oBackbone2_6d2a3892_Rx                                 196U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_98P_oBackbone2_0ae9b992_Rx                                 197U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_96P_oBackbone2_09efbd51_Rx                                 198U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_95P_oBackbone2_a1ab3e51_Rx                                 199U
#define CanIfConf_CanIfRxPduCfg_EMS_BB2_04P_oBackbone2_f5214579_Rx                                  200U
#define CanIfConf_CanIfRxPduCfg_EMS_BB2_13P_oBackbone2_036dfbaa_Rx                                  201U
#define CanIfConf_CanIfRxPduCfg_EMS_BB2_05P_oBackbone2_85f68835_Rx                                  202U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_119P_oBackbone2_54ccbb5c_Rx                                203U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_58P_oBackbone2_0848ab9e_Rx                                 204U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_29P_oBackbone2_6ebc6019_Rx                                 205U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_110P_oBackbone2_8986e413_Rx                                206U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_55P_oBackbone2_a30a2c5d_Rx                                 207U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_23P_oBackbone2_45e8e602_Rx                               208U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_111P_oBackbone2_91387ce4_Rx                                209U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_08P_oBackbone2_09b0661b_Rx                                 210U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_74P_oBackbone2_c4062a5f_Rx                                 211U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_73P_oBackbone2_283dab1e_Rx                                 212U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_09P_oBackbone2_08c205a9_Rx                               213U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_34S_Tp_oBackbone2_37bde105_Rx                              214U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_08P_oBackbone2_33da87f8_Rx                               215U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_34S_oBackbone2_6313bb35_Rx                               216U
#define CanIfConf_CanIfRxPduCfg_EMS_BB2_11S_Tp_oBackbone2_f0eef471_Rx                               217U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_35S_Tp_oBackbone2_61dbf5f7_Rx                            218U
#define CanIfConf_CanIfRxPduCfg_TECU_BB2_05S_Tp_oBackbone2_01d5ac34_Rx                              219U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_07P_oBackbone2_6d75e3d8_Rx                                 220U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_54P_oBackbone2_c4c9ad5d_Rx                                 221U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_07P_oBackbone2_91241c86_Rx                               222U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_53P_oBackbone2_28f22c1c_Rx                                 223U
#define CanIfConf_CanIfRxPduCfg_IC3_BB2_03S_oBackbone2_a25cd1a7_Rx                                  224U
#define CanIfConf_CanIfRxPduCfg_IC3_BB2_02P_oBackbone2_ceb05fa5_Rx                                  225U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_24P_oBackbone2_e4a369b5_Rx                               226U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_80P_oBackbone2_82707e91_Rx                                 227U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_20P_oBackbone2_8181e59b_Rx                                 228U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_33P_oBackbone2_59bf9fe2_Rx                               229U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_03P_oBackbone2_7d4615c2_Rx                               230U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_52P_oBackbone2_4f31ad1c_Rx                                 231U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_51P_oBackbone2_e7752e1c_Rx                                 232U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_05P_oBackbone2_a2f2e1d8_Rx                                 233U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_04P_oBackbone2_c53160d8_Rx                                 234U
#define CanIfConf_CanIfRxPduCfg_EMS_BB2_01P_oBackbone2_9dd8bb44_Rx                                  235U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_90P_oBackbone2_8217bd10_Rx                                 236U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_03P_oBackbone2_290ae199_Rx                                 237U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_89P_oBackbone2_6d4dfb13_Rx                                 238U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_02P_oBackbone2_4ec96099_Rx                                 239U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_01P_oBackbone2_e68de399_Rx                                 240U
#define CanIfConf_CanIfRxPduCfg_TECU_BB2_01P_oBackbone2_a19b59bc_Rx                                 241U
#define CanIfConf_CanIfRxPduCfg_IC3_BB2_01S_oBackbone2_43f34b3f_Rx                                  242U
#define CanIfConf_CanIfRxPduCfg_HMIIOM_BB2_01P_oBackbone2_0b771160_Rx                               243U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_88P_oBackbone2_0a8e7a13_Rx                                 244U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_87P_oBackbone2_6e4bffd0_Rx                                 245U
#define CanIfConf_CanIfRxPduCfg_VMCU_BB2_86P_oBackbone2_09887ed0_Rx                                 246U
#define CanIfConf_CanIfRxPduCfg_DebugCtrl9_SCIM_BB2_oBackbone2_9f4f1aa2_Rx                          247U
#define CanIfConf_CanIfRxPduCfg_DebugCtrl8_SCIM_BB2_oBackbone2_15b0e9be_Rx                          248U
#define CanIfConf_CanIfRxPduCfg_DebugCtrl7_SCIM_BB2_oBackbone2_9b74b10e_Rx                          249U
#define CanIfConf_CanIfRxPduCfg_DebugCtrl6_SCIM_BB2_oBackbone2_118b4212_Rx                          250U
#define CanIfConf_CanIfRxPduCfg_DebugCtrl5_SCIM_BB2_oBackbone2_55fa5177_Rx                          251U
#define CanIfConf_CanIfRxPduCfg_DebugCtrl4_SCIM_BB2_oBackbone2_df05a26b_Rx                          252U
#define CanIfConf_CanIfRxPduCfg_DebugCtrl3_SCIM_BB2_oBackbone2_dd1877bd_Rx                          253U
#define CanIfConf_CanIfRxPduCfg_DebugCtrl2_SCIM_BB2_oBackbone2_57e784a1_Rx                          254U
#define CanIfConf_CanIfRxPduCfg_DebugCtrl1_SCIM_BB2_oBackbone2_139697c4_Rx                          255U



/**********************************************************************************************************************
  \def  Tx buffer type
**********************************************************************************************************************/

#define CanIfTxBufferType                    BIT_QUEUE

/**********************************************************************************************************************
  \def  For ASR4.0.3/ASR4.2.2 compatibility - indirection macros
**********************************************************************************************************************/
#define  CanIf_RxIndication(Hrh, CanId, CanDlc, CanSduPtr) CanIf_RxIndicationAsr403((Hrh), (CanId), (CanDlc), (CanSduPtr))








/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#define CANIF_CFG_MAXRXDLC_PLUS_MAXMETADATA     12U



/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPCDataSwitches  CanIf Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANIF_BUSOFFNOTIFICATIONFCTPTR                                STD_ON
#define CANIF_CANCHANNELIDUPTOLOWMAP                                  STD_OFF  /**< Deactivateable: 'CanIf_CanChannelIdUpToLowMap' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANDRVFCTTBLIDXOFCANCHANNELIDUPTOLOWMAP                 STD_OFF  /**< Deactivateable: 'CanIf_CanChannelIdUpToLowMap.CanDrvFctTblIdx' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANDRVFCTTBLUSEDOFCANCHANNELIDUPTOLOWMAP                STD_OFF  /**< Deactivateable: 'CanIf_CanChannelIdUpToLowMap.CanDrvFctTblUsed' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CHANNELINDEXOFCANCHANNELIDUPTOLOWMAP                    STD_OFF  /**< Deactivateable: 'CanIf_CanChannelIdUpToLowMap.ChannelIndex' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANDRVFCTTBL                                            STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANCELTXFCTOFCANDRVFCTTBL                               STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.CancelTxFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CHANGEBAUDRATEFCTOFCANDRVFCTTBL                         STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.ChangeBaudrateFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CHECKBAUDRATEFCTOFCANDRVFCTTBL                          STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.CheckBaudrateFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CHECKWAKEUPFCTOFCANDRVFCTTBL                            STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.CheckWakeupFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_RAMCHECKENABLECONTROLLERFCTOFCANDRVFCTTBL               STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.RamCheckEnableControllerFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_RAMCHECKENABLEMAILBOXFCTOFCANDRVFCTTBL                  STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.RamCheckEnableMailboxFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_RAMCHECKEXECUTEFCTOFCANDRVFCTTBL                        STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.RamCheckExecuteFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_SETBAUDRATEFCTOFCANDRVFCTTBL                            STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.SetBaudrateFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_SETCONTROLLERMODEFCTOFCANDRVFCTTBL                      STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.SetControllerModeFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_WRITEFCTOFCANDRVFCTTBL                                  STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTbl.WriteFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANIFCTRLID2MAPPEDTXBUFFERSCONFIG                       STD_ON
#define CANIF_INVALIDHNDOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG           STD_OFF  /**< Deactivateable: 'CanIf_CanIfCtrlId2MappedTxBuffersConfig.InvalidHnd' Reason: 'the value of CanIf_InvalidHndOfCanIfCtrlId2MappedTxBuffersConfig is always 'false' due to this, the array is deactivated.' */
#define CANIF_MAPPEDTXBUFFERSCONFIGENDIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG STD_ON
#define CANIF_MAPPEDTXBUFFERSCONFIGSTARTIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG STD_ON
#define CANIF_CANTRCVFCTTBL                                           STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CHECKWAKEFLAGFCTOFCANTRCVFCTTBL                         STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.CheckWakeFlagFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CHECKWAKEUPFCTOFCANTRCVFCTTBL                           STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.CheckWakeupFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CLEARTRCVWUFFLAGFCTOFCANTRCVFCTTBL                      STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.ClearTrcvWufFlagFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_GETBUSWUREASONFCTOFCANTRCVFCTTBL                        STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.GetBusWuReasonFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_GETOPMODEFCTOFCANTRCVFCTTBL                             STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.GetOpModeFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_SETOPMODEFCTOFCANTRCVFCTTBL                             STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.SetOpModeFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_SETWAKEUPMODEFCTOFCANTRCVFCTTBL                         STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTbl.SetWakeupModeFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CTRLCONFIG                                              STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_FEATUREPNWUTXPDUFILTERENABLEDOFCTRLCONFIG               STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig.FeaturePnWuTxPduFilterEnabled' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_J1939DYNADDROFFSETOFCTRLCONFIG                          STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig.J1939DynAddrOffset' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_J1939DYNADDRSUPPORTOFCTRLCONFIG                         STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig.J1939DynAddrSupport' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_RXDHRANDOMNUMBER1OFCTRLCONFIG                           STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig.RxDHRandomNumber1' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_RXDHRANDOMNUMBER2OFCTRLCONFIG                           STD_OFF  /**< Deactivateable: 'CanIf_CtrlConfig.RxDHRandomNumber2' Reason: 'Table: CanIf_CtrlConfig[] is not required.' */
#define CANIF_CTRLMODEINDICATIONFCTPTR                                STD_ON
#define CANIF_CTRLSTATES                                              STD_ON
#define CANIF_CTRLMODEOFCTRLSTATES                                    STD_ON
#define CANIF_PDUMODEOFCTRLSTATES                                     STD_ON
#define CANIF_FINALMAGICNUMBER                                        STD_OFF  /**< Deactivateable: 'CanIf_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_GENERATORCOMPATIBILITYVERSION                           STD_ON
#define CANIF_GENERATORVERSION                                        STD_ON
#define CANIF_HXHOFFSET                                               STD_OFF  /**< Deactivateable: 'CanIf_HxhOffset' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_INITDATAHASHCODE                                        STD_OFF  /**< Deactivateable: 'CanIf_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_MAILBOXCONFIG                                           STD_ON
#define CANIF_CTRLSTATESIDXOFMAILBOXCONFIG                            STD_ON
#define CANIF_MAILBOXTYPEOFMAILBOXCONFIG                              STD_ON
#define CANIF_PDUIDFIRSTOFMAILBOXCONFIG                               STD_ON
#define CANIF_PDUIDLASTOFMAILBOXCONFIG                                STD_ON
#define CANIF_TXBUFFERCFGIDXOFMAILBOXCONFIG                           STD_ON
#define CANIF_TXBUFFERCFGUSEDOFMAILBOXCONFIG                          STD_ON
#define CANIF_TXBUFFERHANDLINGTYPEOFMAILBOXCONFIG                     STD_ON
#define CANIF_MAPPEDTXBUFFERSCONFIG                                   STD_ON
#define CANIF_MAILBOXCONFIGIDXOFMAPPEDTXBUFFERSCONFIG                 STD_ON
#define CANIF_PDURXMODE                                               STD_OFF  /**< Deactivateable: 'CanIf_PduRxMode' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define CANIF_RXDHADJUST                                              STD_OFF  /**< Deactivateable: 'CanIf_RxDHAdjust' Reason: 'Search algorithm "double hash" is deactivated.' */
#define CANIF_RXINDICATIONFCTLIST                                     STD_ON
#define CANIF_RXINDICATIONFCTOFRXINDICATIONFCTLIST                    STD_ON
#define CANIF_RXINDICATIONLAYOUTOFRXINDICATIONFCTLIST                 STD_ON
#define CANIF_RXPDUCONFIG                                             STD_ON
#define CANIF_CANIFRXPDUIDOFRXPDUCONFIG                               STD_OFF  /**< Deactivateable: 'CanIf_RxPduConfig.CanIfRxPduId' Reason: '"CanIfDataChecksumRxSupport" is deactivated.' */
#define CANIF_DLCOFRXPDUCONFIG                                        STD_ON
#define CANIF_ISDATACHECKSUMRXPDUOFRXPDUCONFIG                        STD_OFF  /**< Deactivateable: 'CanIf_RxPduConfig.IsDataChecksumRxPdu' Reason: '"CanIfDataChecksumRxSupport" is deactivated.' */
#define CANIF_MSGTYPEOFRXPDUCONFIG                                    STD_OFF  /**< Deactivateable: 'CanIf_RxPduConfig.MsgType' Reason: '"CanIfRxSearchConsiderMsgType" is deactivated.' */
#define CANIF_RXINDICATIONFCTLISTIDXOFRXPDUCONFIG                     STD_ON
#define CANIF_RXMETADATALENGTHOFRXPDUCONFIG                           STD_ON
#define CANIF_RXPDUCANIDOFRXPDUCONFIG                                 STD_ON
#define CANIF_RXPDUMASKOFRXPDUCONFIG                                  STD_ON
#define CANIF_UPPERPDUIDOFRXPDUCONFIG                                 STD_ON
#define CANIF_SIZEOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG                 STD_ON
#define CANIF_SIZEOFCTRLSTATES                                        STD_ON
#define CANIF_SIZEOFMAILBOXCONFIG                                     STD_ON
#define CANIF_SIZEOFMAPPEDTXBUFFERSCONFIG                             STD_ON
#define CANIF_SIZEOFRXINDICATIONFCTLIST                               STD_ON
#define CANIF_SIZEOFRXPDUCONFIG                                       STD_ON
#define CANIF_SIZEOFTXBUFFERPRIOBYCANIDBASE                           STD_ON
#define CANIF_SIZEOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG                 STD_ON
#define CANIF_SIZEOFTXCONFIRMATIONFCTLIST                             STD_ON
#define CANIF_SIZEOFTXPDUCONFIG                                       STD_ON
#define CANIF_SIZEOFTXPDUQUEUEINDEX                                   STD_ON
#define CANIF_SIZEOFTXQUEUE                                           STD_ON
#define CANIF_SIZEOFTXQUEUEFLAGS                                      STD_ON
#define CANIF_TRANSCEIVERUPTOLOWMAP                                   STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToLowMap' Reason: 'Transceiver handling and transceiver mapping are deactivated and one controller optimization is activated.' */
#define CANIF_CANTRCVFCTTBLIDXOFTRANSCEIVERUPTOLOWMAP                 STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToLowMap.CanTrcvFctTblIdx' Reason: 'Transceiver handling and transceiver mapping are deactivated and one controller optimization is activated.' */
#define CANIF_CHANNELINDEXOFTRANSCEIVERUPTOLOWMAP                     STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToLowMap.ChannelIndex' Reason: 'Transceiver handling and transceiver mapping are deactivated and one controller optimization is activated.' */
#define CANIF_TRANSCEIVERUPTOUPPERMAP                                 STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToUpperMap' Reason: 'Transceiver handling and transceiver mapping are deactivated and one controller optimization is activated.' */
#define CANIF_TRCVTOCTRLMAP                                           STD_OFF  /**< Deactivateable: 'CanIf_TrcvToCtrlMap' Reason: 'Transceiver handling is deactivated.' */
#define CANIF_TXBUFFERFIFOCONFIG                                      STD_OFF  /**< Deactivateable: 'CanIf_TxBufferFifoConfig' Reason: 'Tx-buffer FIFO support is deactivated.' */
#define CANIF_SIZEOFONEPAYLOADELOFTXBUFFERFIFOCONFIG                  STD_OFF  /**< Deactivateable: 'CanIf_TxBufferFifoConfig.SizeOfOnePayloadEl' Reason: 'Tx-buffer FIFO support is deactivated.' */
#define CANIF_TXBUFFERPRIOBYCANIDBASE                                 STD_ON
#define CANIF_TXBUFFERPRIOBYCANIDBITQUEUECONFIG                       STD_ON
#define CANIF_BITPOS2TXPDUIDOFFSETOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG STD_ON
#define CANIF_TXBUFFERPRIOBYCANIDBASEIDXOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG STD_ON
#define CANIF_TXQUEUEFLAGSENDIDXOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG   STD_ON
#define CANIF_TXQUEUEFLAGSSTARTIDXOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG STD_ON
#define CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUECONFIG                      STD_OFF  /**< Deactivateable: 'CanIf_TxBufferPrioByCanIdByteQueueConfig' Reason: 'Tx-buffer PRIO_BY_CANID support as BYTE_QUEUE is deactivated.' */
#define CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUS                STD_OFF  /**< Deactivateable: 'CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus' Reason: 'Tx-buffer PRIO_BY_CANID support as BYTE_QUEUE is deactivated.' */
#define CANIF_TXCONFIRMATIONFCTLIST                                   STD_ON
#define CANIF_TXPDUCONFIG                                             STD_ON
#define CANIF_CANIDOFTXPDUCONFIG                                      STD_ON
#define CANIF_CANIDTXMASKOFTXPDUCONFIG                                STD_ON
#define CANIF_CTRLSTATESIDXOFTXPDUCONFIG                              STD_ON
#define CANIF_DLCOFTXPDUCONFIG                                        STD_ON
#define CANIF_ISDATACHECKSUMTXPDUOFTXPDUCONFIG                        STD_OFF  /**< Deactivateable: 'CanIf_TxPduConfig.IsDataChecksumTxPdu' Reason: '"CanIfDataChecksumTxSupport" is deactivated.' */
#define CANIF_MAILBOXCONFIGIDXOFTXPDUCONFIG                           STD_ON
#define CANIF_TXCONFIRMATIONFCTLISTIDXOFTXPDUCONFIG                   STD_ON
#define CANIF_TXMETADATALENGTHOFTXPDUCONFIG                           STD_ON
#define CANIF_UPPERLAYERTXPDUIDOFTXPDUCONFIG                          STD_ON
#define CANIF_TXPDUQUEUEINDEX                                         STD_ON
#define CANIF_TXQUEUEIDXOFTXPDUQUEUEINDEX                             STD_ON
#define CANIF_TXQUEUEUSEDOFTXPDUQUEUEINDEX                            STD_ON
#define CANIF_TXPDUSTATIC2DYNAMICINDIRECTION                          STD_OFF  /**< Deactivateable: 'CanIf_TxPduStatic2DynamicIndirection' Reason: 'Dynamic Tx-CanId support is deactivated.' */
#define CANIF_TXQUEUE                                                 STD_ON
#define CANIF_TXQUEUEFLAGS                                            STD_ON
#define CANIF_TXQUEUEINDEX2DATASTARTSTOP                              STD_OFF  /**< Deactivateable: 'CanIf_TxQueueIndex2DataStartStop' Reason: 'Static FD Tx-buffer is deactivated.' */
#define CANIF_ULRXPDUID2INTERNALRXPDUID                               STD_OFF  /**< Deactivateable: 'CanIf_UlRxPduId2InternalRxPduId' Reason: 'Configuration variant is Pre-compile and the feature to be able to set the reception mode of a Rx-PDU at runtime is disabled!' */
#define CANIF_RXPDUCONFIGIDXOFULRXPDUID2INTERNALRXPDUID               STD_OFF  /**< Deactivateable: 'CanIf_UlRxPduId2InternalRxPduId.RxPduConfigIdx' Reason: 'Configuration variant is Pre-compile and the feature to be able to set the reception mode of a Rx-PDU at runtime is disabled!' */
#define CANIF_RXPDUCONFIGUSEDOFULRXPDUID2INTERNALRXPDUID              STD_OFF  /**< Deactivateable: 'CanIf_UlRxPduId2InternalRxPduId.RxPduConfigUsed' Reason: 'Configuration variant is Pre-compile and the feature to be able to set the reception mode of a Rx-PDU at runtime is disabled!' */
#define CANIF_ULTXPDUID2INTERNALTXPDUID                               STD_OFF  /**< Deactivateable: 'CanIf_UlTxPduId2InternalTxPduId' Reason: 'Configuration variant is Pre-compile!' */
#define CANIF_WAKEUPCONFIG                                            STD_OFF  /**< Deactivateable: 'CanIf_WakeUpConfig' Reason: 'Wake-up support is deactivated.' */
#define CANIF_CONTROLLEROFWAKEUPCONFIG                                STD_OFF  /**< Deactivateable: 'CanIf_WakeUpConfig.Controller' Reason: 'Wake-up support is deactivated.' */
#define CANIF_WAKEUPSOURCEOFWAKEUPCONFIG                              STD_OFF  /**< Deactivateable: 'CanIf_WakeUpConfig.WakeUpSource' Reason: 'Wake-up support is deactivated.' */
#define CANIF_WAKEUPTARGETADDRESSOFWAKEUPCONFIG                       STD_OFF  /**< Deactivateable: 'CanIf_WakeUpConfig.WakeUpTargetAddress' Reason: 'Wake-up support is deactivated.' */
#define CANIF_WAKEUPTARGETMODULEOFWAKEUPCONFIG                        STD_OFF  /**< Deactivateable: 'CanIf_WakeUpConfig.WakeUpTargetModule' Reason: 'Wake-up support is deactivated.' */
#define CANIF_PCCONFIG                                                STD_ON
#define CANIF_BUSOFFNOTIFICATIONFCTPTROFPCCONFIG                      STD_ON
#define CANIF_CANIFCTRLID2MAPPEDTXBUFFERSCONFIGOFPCCONFIG             STD_ON
#define CANIF_CTRLMODEINDICATIONFCTPTROFPCCONFIG                      STD_ON
#define CANIF_CTRLSTATESOFPCCONFIG                                    STD_ON
#define CANIF_FINALMAGICNUMBEROFPCCONFIG                              STD_OFF  /**< Deactivateable: 'CanIf_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_GENERATORCOMPATIBILITYVERSIONOFPCCONFIG                 STD_ON
#define CANIF_GENERATORVERSIONOFPCCONFIG                              STD_ON
#define CANIF_INITDATAHASHCODEOFPCCONFIG                              STD_OFF  /**< Deactivateable: 'CanIf_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_MAILBOXCONFIGOFPCCONFIG                                 STD_ON
#define CANIF_MAPPEDTXBUFFERSCONFIGOFPCCONFIG                         STD_ON
#define CANIF_RXINDICATIONFCTLISTOFPCCONFIG                           STD_ON
#define CANIF_RXPDUCONFIGOFPCCONFIG                                   STD_ON
#define CANIF_SIZEOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIGOFPCCONFIG       STD_ON
#define CANIF_SIZEOFCTRLSTATESOFPCCONFIG                              STD_ON
#define CANIF_SIZEOFMAILBOXCONFIGOFPCCONFIG                           STD_ON
#define CANIF_SIZEOFMAPPEDTXBUFFERSCONFIGOFPCCONFIG                   STD_ON
#define CANIF_SIZEOFRXINDICATIONFCTLISTOFPCCONFIG                     STD_ON
#define CANIF_SIZEOFRXPDUCONFIGOFPCCONFIG                             STD_ON
#define CANIF_SIZEOFTXBUFFERPRIOBYCANIDBASEOFPCCONFIG                 STD_ON
#define CANIF_SIZEOFTXBUFFERPRIOBYCANIDBITQUEUECONFIGOFPCCONFIG       STD_ON
#define CANIF_SIZEOFTXCONFIRMATIONFCTLISTOFPCCONFIG                   STD_ON
#define CANIF_SIZEOFTXPDUCONFIGOFPCCONFIG                             STD_ON
#define CANIF_SIZEOFTXPDUQUEUEINDEXOFPCCONFIG                         STD_ON
#define CANIF_SIZEOFTXQUEUEFLAGSOFPCCONFIG                            STD_ON
#define CANIF_SIZEOFTXQUEUEOFPCCONFIG                                 STD_ON
#define CANIF_TXBUFFERPRIOBYCANIDBASEOFPCCONFIG                       STD_ON
#define CANIF_TXBUFFERPRIOBYCANIDBITQUEUECONFIGOFPCCONFIG             STD_ON
#define CANIF_TXCONFIRMATIONFCTLISTOFPCCONFIG                         STD_ON
#define CANIF_TXPDUCONFIGOFPCCONFIG                                   STD_ON
#define CANIF_TXPDUQUEUEINDEXOFPCCONFIG                               STD_ON
#define CANIF_TXQUEUEFLAGSOFPCCONFIG                                  STD_ON
#define CANIF_TXQUEUEOFPCCONFIG                                       STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCNoReferenceDefines  CanIf No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG                        255U
#define CANIF_NO_TXQUEUEIDXOFTXPDUQUEUEINDEX                          255U
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCIsReducedToDefineDefines  CanIf Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define CANIF_ISDEF_MAPPEDTXBUFFERSCONFIGENDIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG STD_OFF
#define CANIF_ISDEF_MAPPEDTXBUFFERSCONFIGSTARTIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG STD_OFF
#define CANIF_ISDEF_CTRLSTATESIDXOFMAILBOXCONFIG                      STD_OFF
#define CANIF_ISDEF_MAILBOXTYPEOFMAILBOXCONFIG                        STD_OFF
#define CANIF_ISDEF_PDUIDFIRSTOFMAILBOXCONFIG                         STD_OFF
#define CANIF_ISDEF_PDUIDLASTOFMAILBOXCONFIG                          STD_OFF
#define CANIF_ISDEF_TXBUFFERCFGIDXOFMAILBOXCONFIG                     STD_OFF
#define CANIF_ISDEF_TXBUFFERCFGUSEDOFMAILBOXCONFIG                    STD_OFF
#define CANIF_ISDEF_TXBUFFERHANDLINGTYPEOFMAILBOXCONFIG               STD_OFF
#define CANIF_ISDEF_MAILBOXCONFIGIDXOFMAPPEDTXBUFFERSCONFIG           STD_OFF
#define CANIF_ISDEF_RXINDICATIONFCTOFRXINDICATIONFCTLIST              STD_OFF
#define CANIF_ISDEF_RXINDICATIONLAYOUTOFRXINDICATIONFCTLIST           STD_OFF
#define CANIF_ISDEF_DLCOFRXPDUCONFIG                                  STD_OFF
#define CANIF_ISDEF_RXINDICATIONFCTLISTIDXOFRXPDUCONFIG               STD_OFF
#define CANIF_ISDEF_RXMETADATALENGTHOFRXPDUCONFIG                     STD_OFF
#define CANIF_ISDEF_RXPDUCANIDOFRXPDUCONFIG                           STD_OFF
#define CANIF_ISDEF_RXPDUMASKOFRXPDUCONFIG                            STD_OFF
#define CANIF_ISDEF_UPPERPDUIDOFRXPDUCONFIG                           STD_OFF
#define CANIF_ISDEF_BITPOS2TXPDUIDOFFSETOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG STD_OFF
#define CANIF_ISDEF_TXBUFFERPRIOBYCANIDBASEIDXOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG STD_OFF
#define CANIF_ISDEF_TXQUEUEFLAGSENDIDXOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG STD_OFF
#define CANIF_ISDEF_TXQUEUEFLAGSSTARTIDXOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG STD_OFF
#define CANIF_ISDEF_TXCONFIRMATIONFCTLIST                             STD_OFF
#define CANIF_ISDEF_CANIDOFTXPDUCONFIG                                STD_OFF
#define CANIF_ISDEF_CANIDTXMASKOFTXPDUCONFIG                          STD_OFF
#define CANIF_ISDEF_CTRLSTATESIDXOFTXPDUCONFIG                        STD_OFF
#define CANIF_ISDEF_DLCOFTXPDUCONFIG                                  STD_OFF
#define CANIF_ISDEF_MAILBOXCONFIGIDXOFTXPDUCONFIG                     STD_OFF
#define CANIF_ISDEF_TXCONFIRMATIONFCTLISTIDXOFTXPDUCONFIG             STD_OFF
#define CANIF_ISDEF_TXMETADATALENGTHOFTXPDUCONFIG                     STD_OFF
#define CANIF_ISDEF_UPPERLAYERTXPDUIDOFTXPDUCONFIG                    STD_OFF
#define CANIF_ISDEF_TXQUEUEIDXOFTXPDUQUEUEINDEX                       STD_OFF
#define CANIF_ISDEF_TXQUEUEUSEDOFTXPDUQUEUEINDEX                      STD_OFF
#define CANIF_ISDEF_BUSOFFNOTIFICATIONFCTPTROFPCCONFIG                STD_ON
#define CANIF_ISDEF_CANIFCTRLID2MAPPEDTXBUFFERSCONFIGOFPCCONFIG       STD_ON
#define CANIF_ISDEF_CTRLMODEINDICATIONFCTPTROFPCCONFIG                STD_ON
#define CANIF_ISDEF_CTRLSTATESOFPCCONFIG                              STD_ON
#define CANIF_ISDEF_MAILBOXCONFIGOFPCCONFIG                           STD_ON
#define CANIF_ISDEF_MAPPEDTXBUFFERSCONFIGOFPCCONFIG                   STD_ON
#define CANIF_ISDEF_RXINDICATIONFCTLISTOFPCCONFIG                     STD_ON
#define CANIF_ISDEF_RXPDUCONFIGOFPCCONFIG                             STD_ON
#define CANIF_ISDEF_TXBUFFERPRIOBYCANIDBASEOFPCCONFIG                 STD_ON
#define CANIF_ISDEF_TXBUFFERPRIOBYCANIDBITQUEUECONFIGOFPCCONFIG       STD_ON
#define CANIF_ISDEF_TXCONFIRMATIONFCTLISTOFPCCONFIG                   STD_ON
#define CANIF_ISDEF_TXPDUCONFIGOFPCCONFIG                             STD_ON
#define CANIF_ISDEF_TXPDUQUEUEINDEXOFPCCONFIG                         STD_ON
#define CANIF_ISDEF_TXQUEUEFLAGSOFPCCONFIG                            STD_ON
#define CANIF_ISDEF_TXQUEUEOFPCCONFIG                                 STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCEqualsAlwaysToDefines  CanIf Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define CANIF_EQ2_MAPPEDTXBUFFERSCONFIGENDIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG 
#define CANIF_EQ2_MAPPEDTXBUFFERSCONFIGSTARTIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG 
#define CANIF_EQ2_CTRLSTATESIDXOFMAILBOXCONFIG                        
#define CANIF_EQ2_MAILBOXTYPEOFMAILBOXCONFIG                          
#define CANIF_EQ2_PDUIDFIRSTOFMAILBOXCONFIG                           
#define CANIF_EQ2_PDUIDLASTOFMAILBOXCONFIG                            
#define CANIF_EQ2_TXBUFFERCFGIDXOFMAILBOXCONFIG                       
#define CANIF_EQ2_TXBUFFERCFGUSEDOFMAILBOXCONFIG                      
#define CANIF_EQ2_TXBUFFERHANDLINGTYPEOFMAILBOXCONFIG                 
#define CANIF_EQ2_MAILBOXCONFIGIDXOFMAPPEDTXBUFFERSCONFIG             
#define CANIF_EQ2_RXINDICATIONFCTOFRXINDICATIONFCTLIST                
#define CANIF_EQ2_RXINDICATIONLAYOUTOFRXINDICATIONFCTLIST             
#define CANIF_EQ2_DLCOFRXPDUCONFIG                                    
#define CANIF_EQ2_RXINDICATIONFCTLISTIDXOFRXPDUCONFIG                 
#define CANIF_EQ2_RXMETADATALENGTHOFRXPDUCONFIG                       
#define CANIF_EQ2_RXPDUCANIDOFRXPDUCONFIG                             
#define CANIF_EQ2_RXPDUMASKOFRXPDUCONFIG                              
#define CANIF_EQ2_UPPERPDUIDOFRXPDUCONFIG                             
#define CANIF_EQ2_BITPOS2TXPDUIDOFFSETOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG 
#define CANIF_EQ2_TXBUFFERPRIOBYCANIDBASEIDXOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG 
#define CANIF_EQ2_TXQUEUEFLAGSENDIDXOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG 
#define CANIF_EQ2_TXQUEUEFLAGSSTARTIDXOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG 
#define CANIF_EQ2_TXCONFIRMATIONFCTLIST                               
#define CANIF_EQ2_CANIDOFTXPDUCONFIG                                  
#define CANIF_EQ2_CANIDTXMASKOFTXPDUCONFIG                            
#define CANIF_EQ2_CTRLSTATESIDXOFTXPDUCONFIG                          
#define CANIF_EQ2_DLCOFTXPDUCONFIG                                    
#define CANIF_EQ2_MAILBOXCONFIGIDXOFTXPDUCONFIG                       
#define CANIF_EQ2_TXCONFIRMATIONFCTLISTIDXOFTXPDUCONFIG               
#define CANIF_EQ2_TXMETADATALENGTHOFTXPDUCONFIG                       
#define CANIF_EQ2_UPPERLAYERTXPDUIDOFTXPDUCONFIG                      
#define CANIF_EQ2_TXQUEUEIDXOFTXPDUQUEUEINDEX                         
#define CANIF_EQ2_TXQUEUEUSEDOFTXPDUQUEUEINDEX                        
#define CANIF_EQ2_BUSOFFNOTIFICATIONFCTPTROFPCCONFIG                  CanIf_BusOffNotificationFctPtr
#define CANIF_EQ2_CANIFCTRLID2MAPPEDTXBUFFERSCONFIGOFPCCONFIG         CanIf_CanIfCtrlId2MappedTxBuffersConfig
#define CANIF_EQ2_CTRLMODEINDICATIONFCTPTROFPCCONFIG                  CanIf_CtrlModeIndicationFctPtr
#define CANIF_EQ2_CTRLSTATESOFPCCONFIG                                CanIf_CtrlStates.raw
#define CANIF_EQ2_MAILBOXCONFIGOFPCCONFIG                             CanIf_MailBoxConfig
#define CANIF_EQ2_MAPPEDTXBUFFERSCONFIGOFPCCONFIG                     CanIf_MappedTxBuffersConfig
#define CANIF_EQ2_RXINDICATIONFCTLISTOFPCCONFIG                       CanIf_RxIndicationFctList
#define CANIF_EQ2_RXPDUCONFIGOFPCCONFIG                               CanIf_RxPduConfig
#define CANIF_EQ2_TXBUFFERPRIOBYCANIDBASEOFPCCONFIG                   CanIf_TxBufferPrioByCanIdBase.raw
#define CANIF_EQ2_TXBUFFERPRIOBYCANIDBITQUEUECONFIGOFPCCONFIG         CanIf_TxBufferPrioByCanIdBitQueueConfig
#define CANIF_EQ2_TXCONFIRMATIONFCTLISTOFPCCONFIG                     CanIf_TxConfirmationFctList
#define CANIF_EQ2_TXPDUCONFIGOFPCCONFIG                               CanIf_TxPduConfig
#define CANIF_EQ2_TXPDUQUEUEINDEXOFPCCONFIG                           CanIf_TxPduQueueIndex
#define CANIF_EQ2_TXQUEUEFLAGSOFPCCONFIG                              CanIf_TxQueueFlags.raw
#define CANIF_EQ2_TXQUEUEOFPCCONFIG                                   CanIf_TxQueue.raw
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCSymbolicInitializationPointers  CanIf Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define CanIf_Config_Ptr                                              NULL_PTR  /**< symbolic identifier which shall be used to initialize 'CanIf' */
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCInitializationSymbols  CanIf Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define CanIf_Config                                                  NULL_PTR  /**< symbolic identifier which could be used to initialize 'CanIf */
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCGeneral  CanIf General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define CANIF_CHECK_INIT_POINTER                                      STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define CANIF_FINAL_MAGIC_NUMBER                                      0x3C1EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of CanIf */
#define CANIF_INDIVIDUAL_POSTBUILD                                    STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'CanIf' is not configured to be postbuild capable. */
#define CANIF_INIT_DATA                                               CANIF_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define CANIF_INIT_DATA_HASH_CODE                                     1701623963L  /**< the precompile constant to validate the initialization structure at initialization time of CanIf with a hashcode. The seed value is '0x3C1EU' */
#define CANIF_USE_ECUM_BSW_ERROR_HOOK                                 STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define CANIF_USE_INIT_POINTER                                        STD_OFF  /**< STD_ON if the init pointer CanIf shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanIfLTDataSwitches  CanIf Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANIF_LTCONFIG                                                STD_OFF  /**< Deactivateable: 'CanIf_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPBDataSwitches  CanIf Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANIF_PBCONFIG                                                STD_OFF  /**< Deactivateable: 'CanIf_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANIF_LTCONFIGIDXOFPBCONFIG                                   STD_OFF  /**< Deactivateable: 'CanIf_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANIF_PCCONFIGIDXOFPBCONFIG                                   STD_OFF  /**< Deactivateable: 'CanIf_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
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
  \defgroup  CanIfPCGetConstantDuplicatedRootDataMacros  CanIf Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define CanIf_GetBusOffNotificationFctPtrOfPCConfig()                 CanIf_BusOffNotificationFctPtr  /**< the pointer to CanIf_BusOffNotificationFctPtr */
#define CanIf_GetCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()        CanIf_CanIfCtrlId2MappedTxBuffersConfig  /**< the pointer to CanIf_CanIfCtrlId2MappedTxBuffersConfig */
#define CanIf_GetCtrlModeIndicationFctPtrOfPCConfig()                 CanIf_CtrlModeIndicationFctPtr  /**< the pointer to CanIf_CtrlModeIndicationFctPtr */
#define CanIf_GetCtrlStatesOfPCConfig()                               CanIf_CtrlStates.raw  /**< the pointer to CanIf_CtrlStates */
#define CanIf_GetGeneratorCompatibilityVersionOfPCConfig()            0x0212U
#define CanIf_GetGeneratorVersionOfPCConfig()                         0x00040800UL
#define CanIf_GetMailBoxConfigOfPCConfig()                            CanIf_MailBoxConfig  /**< the pointer to CanIf_MailBoxConfig */
#define CanIf_GetMappedTxBuffersConfigOfPCConfig()                    CanIf_MappedTxBuffersConfig  /**< the pointer to CanIf_MappedTxBuffersConfig */
#define CanIf_GetRxIndicationFctListOfPCConfig()                      CanIf_RxIndicationFctList  /**< the pointer to CanIf_RxIndicationFctList */
#define CanIf_GetRxPduConfigOfPCConfig()                              CanIf_RxPduConfig  /**< the pointer to CanIf_RxPduConfig */
#define CanIf_GetSizeOfCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()  5UL  /**< the number of accomplishable value elements in CanIf_CanIfCtrlId2MappedTxBuffersConfig */
#define CanIf_GetSizeOfCtrlStatesOfPCConfig()                         5UL  /**< the number of accomplishable value elements in CanIf_CtrlStates */
#define CanIf_GetSizeOfMailBoxConfigOfPCConfig()                      140UL  /**< the number of accomplishable value elements in CanIf_MailBoxConfig */
#define CanIf_GetSizeOfMappedTxBuffersConfigOfPCConfig()              1UL  /**< the number of accomplishable value elements in CanIf_MappedTxBuffersConfig */
#define CanIf_GetSizeOfRxIndicationFctListOfPCConfig()                6UL  /**< the number of accomplishable value elements in CanIf_RxIndicationFctList */
#define CanIf_GetSizeOfRxPduConfigOfPCConfig()                        256UL  /**< the number of accomplishable value elements in CanIf_RxPduConfig */
#define CanIf_GetSizeOfTxBufferPrioByCanIdBaseOfPCConfig()            1UL  /**< the number of accomplishable value elements in CanIf_TxBufferPrioByCanIdBase */
#define CanIf_GetSizeOfTxBufferPrioByCanIdBitQueueConfigOfPCConfig()  1UL  /**< the number of accomplishable value elements in CanIf_TxBufferPrioByCanIdBitQueueConfig */
#define CanIf_GetSizeOfTxConfirmationFctListOfPCConfig()              6UL  /**< the number of accomplishable value elements in CanIf_TxConfirmationFctList */
#define CanIf_GetSizeOfTxPduConfigOfPCConfig()                        222UL  /**< the number of accomplishable value elements in CanIf_TxPduConfig */
#define CanIf_GetSizeOfTxPduQueueIndexOfPCConfig()                    222UL  /**< the number of accomplishable value elements in CanIf_TxPduQueueIndex */
#define CanIf_GetSizeOfTxQueueFlagsOfPCConfig()                       4UL  /**< the number of accomplishable value elements in CanIf_TxQueueFlags */
#define CanIf_GetSizeOfTxQueueOfPCConfig()                            101UL  /**< the number of accomplishable value elements in CanIf_TxQueue */
#define CanIf_GetTxBufferPrioByCanIdBaseOfPCConfig()                  CanIf_TxBufferPrioByCanIdBase.raw  /**< the pointer to CanIf_TxBufferPrioByCanIdBase */
#define CanIf_GetTxBufferPrioByCanIdBitQueueConfigOfPCConfig()        CanIf_TxBufferPrioByCanIdBitQueueConfig  /**< the pointer to CanIf_TxBufferPrioByCanIdBitQueueConfig */
#define CanIf_GetTxConfirmationFctListOfPCConfig()                    CanIf_TxConfirmationFctList  /**< the pointer to CanIf_TxConfirmationFctList */
#define CanIf_GetTxPduConfigOfPCConfig()                              CanIf_TxPduConfig  /**< the pointer to CanIf_TxPduConfig */
#define CanIf_GetTxPduQueueIndexOfPCConfig()                          CanIf_TxPduQueueIndex  /**< the pointer to CanIf_TxPduQueueIndex */
#define CanIf_GetTxQueueFlagsOfPCConfig()                             CanIf_TxQueueFlags.raw  /**< the pointer to CanIf_TxQueueFlags */
#define CanIf_GetTxQueueOfPCConfig()                                  CanIf_TxQueue.raw  /**< the pointer to CanIf_TxQueue */
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCGetDataMacros  CanIf Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define CanIf_GetBusOffNotificationFctPtr()                           (CanIf_GetBusOffNotificationFctPtrOfPCConfig())
#define CanIf_GetMappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig(Index) (CanIf_GetCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()[(Index)].MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig)
#define CanIf_GetMappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig(Index) (CanIf_GetCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()[(Index)].MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig)
#define CanIf_GetCtrlModeIndicationFctPtr()                           (CanIf_GetCtrlModeIndicationFctPtrOfPCConfig())
#define CanIf_GetCtrlModeOfCtrlStates(Index)                          (CanIf_GetCtrlStatesOfPCConfig()[(Index)].CtrlModeOfCtrlStates)
#define CanIf_GetPduModeOfCtrlStates(Index)                           (CanIf_GetCtrlStatesOfPCConfig()[(Index)].PduModeOfCtrlStates)
#define CanIf_GetCtrlStatesIdxOfMailBoxConfig(Index)                  (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].CtrlStatesIdxOfMailBoxConfig)
#define CanIf_GetMailBoxTypeOfMailBoxConfig(Index)                    (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].MailBoxTypeOfMailBoxConfig)
#define CanIf_GetPduIdFirstOfMailBoxConfig(Index)                     (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].PduIdFirstOfMailBoxConfig)
#define CanIf_GetPduIdLastOfMailBoxConfig(Index)                      (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].PduIdLastOfMailBoxConfig)
#define CanIf_GetTxBufferCfgIdxOfMailBoxConfig(Index)                 (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].TxBufferCfgIdxOfMailBoxConfig)
#define CanIf_GetTxBufferHandlingTypeOfMailBoxConfig(Index)           (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].TxBufferHandlingTypeOfMailBoxConfig)
#define CanIf_GetMailBoxConfigIdxOfMappedTxBuffersConfig(Index)       (CanIf_GetMappedTxBuffersConfigOfPCConfig()[(Index)].MailBoxConfigIdxOfMappedTxBuffersConfig)
#define CanIf_GetRxIndicationFctOfRxIndicationFctList(Index)          (CanIf_GetRxIndicationFctListOfPCConfig()[(Index)].RxIndicationFctOfRxIndicationFctList)
#define CanIf_GetRxIndicationLayoutOfRxIndicationFctList(Index)       (CanIf_GetRxIndicationFctListOfPCConfig()[(Index)].RxIndicationLayoutOfRxIndicationFctList)
#define CanIf_GetDlcOfRxPduConfig(Index)                              (CanIf_GetRxPduConfigOfPCConfig()[(Index)].DlcOfRxPduConfig)
#define CanIf_GetRxIndicationFctListIdxOfRxPduConfig(Index)           (CanIf_GetRxPduConfigOfPCConfig()[(Index)].RxIndicationFctListIdxOfRxPduConfig)
#define CanIf_GetRxMetaDataLengthOfRxPduConfig(Index)                 (CanIf_GetRxPduConfigOfPCConfig()[(Index)].RxMetaDataLengthOfRxPduConfig)
#define CanIf_GetRxPduCanIdOfRxPduConfig(Index)                       (CanIf_GetRxPduConfigOfPCConfig()[(Index)].RxPduCanIdOfRxPduConfig)
#define CanIf_GetRxPduMaskOfRxPduConfig(Index)                        (CanIf_GetRxPduConfigOfPCConfig()[(Index)].RxPduMaskOfRxPduConfig)
#define CanIf_GetUpperPduIdOfRxPduConfig(Index)                       (CanIf_GetRxPduConfigOfPCConfig()[(Index)].UpperPduIdOfRxPduConfig)
#define CanIf_GetTxBufferPrioByCanIdBase(Index)                       (CanIf_GetTxBufferPrioByCanIdBaseOfPCConfig()[(Index)])
#define CanIf_GetBitPos2TxPduIdOffsetOfTxBufferPrioByCanIdBitQueueConfig(Index) (CanIf_GetTxBufferPrioByCanIdBitQueueConfigOfPCConfig()[(Index)].BitPos2TxPduIdOffsetOfTxBufferPrioByCanIdBitQueueConfig)
#define CanIf_GetTxBufferPrioByCanIdBaseIdxOfTxBufferPrioByCanIdBitQueueConfig(Index) (CanIf_GetTxBufferPrioByCanIdBitQueueConfigOfPCConfig()[(Index)].TxBufferPrioByCanIdBaseIdxOfTxBufferPrioByCanIdBitQueueConfig)
#define CanIf_GetTxQueueFlagsEndIdxOfTxBufferPrioByCanIdBitQueueConfig(Index) (CanIf_GetTxBufferPrioByCanIdBitQueueConfigOfPCConfig()[(Index)].TxQueueFlagsEndIdxOfTxBufferPrioByCanIdBitQueueConfig)
#define CanIf_GetTxQueueFlagsStartIdxOfTxBufferPrioByCanIdBitQueueConfig(Index) (CanIf_GetTxBufferPrioByCanIdBitQueueConfigOfPCConfig()[(Index)].TxQueueFlagsStartIdxOfTxBufferPrioByCanIdBitQueueConfig)
#define CanIf_GetTxConfirmationFctList(Index)                         (CanIf_GetTxConfirmationFctListOfPCConfig()[(Index)])
#define CanIf_GetCanIdOfTxPduConfig(Index)                            (CanIf_GetTxPduConfigOfPCConfig()[(Index)].CanIdOfTxPduConfig)
#define CanIf_GetCanIdTxMaskOfTxPduConfig(Index)                      (CanIf_GetTxPduConfigOfPCConfig()[(Index)].CanIdTxMaskOfTxPduConfig)
#define CanIf_GetCtrlStatesIdxOfTxPduConfig(Index)                    (CanIf_GetTxPduConfigOfPCConfig()[(Index)].CtrlStatesIdxOfTxPduConfig)
#define CanIf_GetDlcOfTxPduConfig(Index)                              (CanIf_GetTxPduConfigOfPCConfig()[(Index)].DlcOfTxPduConfig)
#define CanIf_GetMailBoxConfigIdxOfTxPduConfig(Index)                 (CanIf_GetTxPduConfigOfPCConfig()[(Index)].MailBoxConfigIdxOfTxPduConfig)
#define CanIf_GetTxConfirmationFctListIdxOfTxPduConfig(Index)         (CanIf_GetTxPduConfigOfPCConfig()[(Index)].TxConfirmationFctListIdxOfTxPduConfig)
#define CanIf_GetTxMetaDataLengthOfTxPduConfig(Index)                 (CanIf_GetTxPduConfigOfPCConfig()[(Index)].TxMetaDataLengthOfTxPduConfig)
#define CanIf_GetUpperLayerTxPduIdOfTxPduConfig(Index)                (CanIf_GetTxPduConfigOfPCConfig()[(Index)].UpperLayerTxPduIdOfTxPduConfig)
#define CanIf_GetTxQueueIdxOfTxPduQueueIndex(Index)                   (CanIf_GetTxPduQueueIndexOfPCConfig()[(Index)].TxQueueIdxOfTxPduQueueIndex)
#define CanIf_GetTxQueue(Index)                                       (CanIf_GetTxQueueOfPCConfig()[(Index)])
#define CanIf_GetTxQueueFlags(Index)                                  (CanIf_GetTxQueueFlagsOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCGetDeduplicatedDataMacros  CanIf Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define CanIf_GetGeneratorCompatibilityVersion()                      CanIf_GetGeneratorCompatibilityVersionOfPCConfig()
#define CanIf_GetGeneratorVersion()                                   CanIf_GetGeneratorVersionOfPCConfig()
#define CanIf_IsTxBufferCfgUsedOfMailBoxConfig(Index)                 (((boolean)(CanIf_GetTxBufferCfgIdxOfMailBoxConfig(Index) != CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanIf_TxBufferPrioByCanIdBitQueueConfig */
#define CanIf_GetSizeOfCanIfCtrlId2MappedTxBuffersConfig()            CanIf_GetSizeOfCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()
#define CanIf_GetSizeOfCtrlStates()                                   CanIf_GetSizeOfCtrlStatesOfPCConfig()
#define CanIf_GetSizeOfMailBoxConfig()                                CanIf_GetSizeOfMailBoxConfigOfPCConfig()
#define CanIf_GetSizeOfMappedTxBuffersConfig()                        CanIf_GetSizeOfMappedTxBuffersConfigOfPCConfig()
#define CanIf_GetSizeOfRxIndicationFctList()                          CanIf_GetSizeOfRxIndicationFctListOfPCConfig()
#define CanIf_GetSizeOfRxPduConfig()                                  CanIf_GetSizeOfRxPduConfigOfPCConfig()
#define CanIf_GetSizeOfTxBufferPrioByCanIdBase()                      CanIf_GetSizeOfTxBufferPrioByCanIdBaseOfPCConfig()
#define CanIf_GetSizeOfTxBufferPrioByCanIdBitQueueConfig()            CanIf_GetSizeOfTxBufferPrioByCanIdBitQueueConfigOfPCConfig()
#define CanIf_GetSizeOfTxConfirmationFctList()                        CanIf_GetSizeOfTxConfirmationFctListOfPCConfig()
#define CanIf_GetSizeOfTxPduConfig()                                  CanIf_GetSizeOfTxPduConfigOfPCConfig()
#define CanIf_GetSizeOfTxPduQueueIndex()                              CanIf_GetSizeOfTxPduQueueIndexOfPCConfig()
#define CanIf_GetSizeOfTxQueue()                                      CanIf_GetSizeOfTxQueueOfPCConfig()
#define CanIf_GetSizeOfTxQueueFlags()                                 CanIf_GetSizeOfTxQueueFlagsOfPCConfig()
#define CanIf_IsTxQueueUsedOfTxPduQueueIndex(Index)                   (((boolean)(CanIf_GetTxQueueIdxOfTxPduQueueIndex(Index) != CANIF_NO_TXQUEUEIDXOFTXPDUQUEUEINDEX)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanIf_TxQueue */
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCSetDataMacros  CanIf Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define CanIf_SetCtrlModeOfCtrlStates(Index, Value)                   CanIf_GetCtrlStatesOfPCConfig()[(Index)].CtrlModeOfCtrlStates = (Value)
#define CanIf_SetPduModeOfCtrlStates(Index, Value)                    CanIf_GetCtrlStatesOfPCConfig()[(Index)].PduModeOfCtrlStates = (Value)
#define CanIf_SetTxBufferPrioByCanIdBase(Index, Value)                CanIf_GetTxBufferPrioByCanIdBaseOfPCConfig()[(Index)] = (Value)
#define CanIf_SetTxQueue(Index, Value)                                CanIf_GetTxQueueOfPCConfig()[(Index)] = (Value)
#define CanIf_SetTxQueueFlags(Index, Value)                           CanIf_GetTxQueueFlagsOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCHasMacros  CanIf Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define CanIf_HasBusOffNotificationFctPtr()                           (TRUE != FALSE)
#define CanIf_HasCanIfCtrlId2MappedTxBuffersConfig()                  (TRUE != FALSE)
#define CanIf_HasMappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig() (TRUE != FALSE)
#define CanIf_HasMappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig() (TRUE != FALSE)
#define CanIf_HasCtrlModeIndicationFctPtr()                           (TRUE != FALSE)
#define CanIf_HasCtrlStates()                                         (TRUE != FALSE)
#define CanIf_HasCtrlModeOfCtrlStates()                               (TRUE != FALSE)
#define CanIf_HasPduModeOfCtrlStates()                                (TRUE != FALSE)
#define CanIf_HasGeneratorCompatibilityVersion()                      (TRUE != FALSE)
#define CanIf_HasGeneratorVersion()                                   (TRUE != FALSE)
#define CanIf_HasMailBoxConfig()                                      (TRUE != FALSE)
#define CanIf_HasCtrlStatesIdxOfMailBoxConfig()                       (TRUE != FALSE)
#define CanIf_HasMailBoxTypeOfMailBoxConfig()                         (TRUE != FALSE)
#define CanIf_HasPduIdFirstOfMailBoxConfig()                          (TRUE != FALSE)
#define CanIf_HasPduIdLastOfMailBoxConfig()                           (TRUE != FALSE)
#define CanIf_HasTxBufferCfgIdxOfMailBoxConfig()                      (TRUE != FALSE)
#define CanIf_HasTxBufferCfgUsedOfMailBoxConfig()                     (TRUE != FALSE)
#define CanIf_HasTxBufferHandlingTypeOfMailBoxConfig()                (TRUE != FALSE)
#define CanIf_HasMappedTxBuffersConfig()                              (TRUE != FALSE)
#define CanIf_HasMailBoxConfigIdxOfMappedTxBuffersConfig()            (TRUE != FALSE)
#define CanIf_HasRxIndicationFctList()                                (TRUE != FALSE)
#define CanIf_HasRxIndicationFctOfRxIndicationFctList()               (TRUE != FALSE)
#define CanIf_HasRxIndicationLayoutOfRxIndicationFctList()            (TRUE != FALSE)
#define CanIf_HasRxPduConfig()                                        (TRUE != FALSE)
#define CanIf_HasDlcOfRxPduConfig()                                   (TRUE != FALSE)
#define CanIf_HasRxIndicationFctListIdxOfRxPduConfig()                (TRUE != FALSE)
#define CanIf_HasRxMetaDataLengthOfRxPduConfig()                      (TRUE != FALSE)
#define CanIf_HasRxPduCanIdOfRxPduConfig()                            (TRUE != FALSE)
#define CanIf_HasRxPduMaskOfRxPduConfig()                             (TRUE != FALSE)
#define CanIf_HasUpperPduIdOfRxPduConfig()                            (TRUE != FALSE)
#define CanIf_HasSizeOfCanIfCtrlId2MappedTxBuffersConfig()            (TRUE != FALSE)
#define CanIf_HasSizeOfCtrlStates()                                   (TRUE != FALSE)
#define CanIf_HasSizeOfMailBoxConfig()                                (TRUE != FALSE)
#define CanIf_HasSizeOfMappedTxBuffersConfig()                        (TRUE != FALSE)
#define CanIf_HasSizeOfRxIndicationFctList()                          (TRUE != FALSE)
#define CanIf_HasSizeOfRxPduConfig()                                  (TRUE != FALSE)
#define CanIf_HasSizeOfTxBufferPrioByCanIdBase()                      (TRUE != FALSE)
#define CanIf_HasSizeOfTxBufferPrioByCanIdBitQueueConfig()            (TRUE != FALSE)
#define CanIf_HasSizeOfTxConfirmationFctList()                        (TRUE != FALSE)
#define CanIf_HasSizeOfTxPduConfig()                                  (TRUE != FALSE)
#define CanIf_HasSizeOfTxPduQueueIndex()                              (TRUE != FALSE)
#define CanIf_HasSizeOfTxQueue()                                      (TRUE != FALSE)
#define CanIf_HasSizeOfTxQueueFlags()                                 (TRUE != FALSE)
#define CanIf_HasTxBufferPrioByCanIdBase()                            (TRUE != FALSE)
#define CanIf_HasTxBufferPrioByCanIdBitQueueConfig()                  (TRUE != FALSE)
#define CanIf_HasBitPos2TxPduIdOffsetOfTxBufferPrioByCanIdBitQueueConfig() (TRUE != FALSE)
#define CanIf_HasTxBufferPrioByCanIdBaseIdxOfTxBufferPrioByCanIdBitQueueConfig() (TRUE != FALSE)
#define CanIf_HasTxQueueFlagsEndIdxOfTxBufferPrioByCanIdBitQueueConfig() (TRUE != FALSE)
#define CanIf_HasTxQueueFlagsStartIdxOfTxBufferPrioByCanIdBitQueueConfig() (TRUE != FALSE)
#define CanIf_HasTxConfirmationFctList()                              (TRUE != FALSE)
#define CanIf_HasTxPduConfig()                                        (TRUE != FALSE)
#define CanIf_HasCanIdOfTxPduConfig()                                 (TRUE != FALSE)
#define CanIf_HasCanIdTxMaskOfTxPduConfig()                           (TRUE != FALSE)
#define CanIf_HasCtrlStatesIdxOfTxPduConfig()                         (TRUE != FALSE)
#define CanIf_HasDlcOfTxPduConfig()                                   (TRUE != FALSE)
#define CanIf_HasMailBoxConfigIdxOfTxPduConfig()                      (TRUE != FALSE)
#define CanIf_HasTxConfirmationFctListIdxOfTxPduConfig()              (TRUE != FALSE)
#define CanIf_HasTxMetaDataLengthOfTxPduConfig()                      (TRUE != FALSE)
#define CanIf_HasUpperLayerTxPduIdOfTxPduConfig()                     (TRUE != FALSE)
#define CanIf_HasTxPduQueueIndex()                                    (TRUE != FALSE)
#define CanIf_HasTxQueueIdxOfTxPduQueueIndex()                        (TRUE != FALSE)
#define CanIf_HasTxQueueUsedOfTxPduQueueIndex()                       (TRUE != FALSE)
#define CanIf_HasTxQueue()                                            (TRUE != FALSE)
#define CanIf_HasTxQueueFlags()                                       (TRUE != FALSE)
#define CanIf_HasPCConfig()                                           (TRUE != FALSE)
#define CanIf_HasBusOffNotificationFctPtrOfPCConfig()                 (TRUE != FALSE)
#define CanIf_HasCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()        (TRUE != FALSE)
#define CanIf_HasCtrlModeIndicationFctPtrOfPCConfig()                 (TRUE != FALSE)
#define CanIf_HasCtrlStatesOfPCConfig()                               (TRUE != FALSE)
#define CanIf_HasGeneratorCompatibilityVersionOfPCConfig()            (TRUE != FALSE)
#define CanIf_HasGeneratorVersionOfPCConfig()                         (TRUE != FALSE)
#define CanIf_HasMailBoxConfigOfPCConfig()                            (TRUE != FALSE)
#define CanIf_HasMappedTxBuffersConfigOfPCConfig()                    (TRUE != FALSE)
#define CanIf_HasRxIndicationFctListOfPCConfig()                      (TRUE != FALSE)
#define CanIf_HasRxPduConfigOfPCConfig()                              (TRUE != FALSE)
#define CanIf_HasSizeOfCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()  (TRUE != FALSE)
#define CanIf_HasSizeOfCtrlStatesOfPCConfig()                         (TRUE != FALSE)
#define CanIf_HasSizeOfMailBoxConfigOfPCConfig()                      (TRUE != FALSE)
#define CanIf_HasSizeOfMappedTxBuffersConfigOfPCConfig()              (TRUE != FALSE)
#define CanIf_HasSizeOfRxIndicationFctListOfPCConfig()                (TRUE != FALSE)
#define CanIf_HasSizeOfRxPduConfigOfPCConfig()                        (TRUE != FALSE)
#define CanIf_HasSizeOfTxBufferPrioByCanIdBaseOfPCConfig()            (TRUE != FALSE)
#define CanIf_HasSizeOfTxBufferPrioByCanIdBitQueueConfigOfPCConfig()  (TRUE != FALSE)
#define CanIf_HasSizeOfTxConfirmationFctListOfPCConfig()              (TRUE != FALSE)
#define CanIf_HasSizeOfTxPduConfigOfPCConfig()                        (TRUE != FALSE)
#define CanIf_HasSizeOfTxPduQueueIndexOfPCConfig()                    (TRUE != FALSE)
#define CanIf_HasSizeOfTxQueueFlagsOfPCConfig()                       (TRUE != FALSE)
#define CanIf_HasSizeOfTxQueueOfPCConfig()                            (TRUE != FALSE)
#define CanIf_HasTxBufferPrioByCanIdBaseOfPCConfig()                  (TRUE != FALSE)
#define CanIf_HasTxBufferPrioByCanIdBitQueueConfigOfPCConfig()        (TRUE != FALSE)
#define CanIf_HasTxConfirmationFctListOfPCConfig()                    (TRUE != FALSE)
#define CanIf_HasTxPduConfigOfPCConfig()                              (TRUE != FALSE)
#define CanIf_HasTxPduQueueIndexOfPCConfig()                          (TRUE != FALSE)
#define CanIf_HasTxQueueFlagsOfPCConfig()                             (TRUE != FALSE)
#define CanIf_HasTxQueueOfPCConfig()                                  (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCIncrementDataMacros  CanIf Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define CanIf_IncCtrlModeOfCtrlStates(Index)                          CanIf_GetCtrlModeOfCtrlStates(Index)++
#define CanIf_IncPduModeOfCtrlStates(Index)                           CanIf_GetPduModeOfCtrlStates(Index)++
#define CanIf_IncTxBufferPrioByCanIdBase(Index)                       CanIf_GetTxBufferPrioByCanIdBase(Index)++
#define CanIf_IncTxQueue(Index)                                       CanIf_GetTxQueue(Index)++
#define CanIf_IncTxQueueFlags(Index)                                  CanIf_GetTxQueueFlags(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCDecrementDataMacros  CanIf Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define CanIf_DecCtrlModeOfCtrlStates(Index)                          CanIf_GetCtrlModeOfCtrlStates(Index)--
#define CanIf_DecPduModeOfCtrlStates(Index)                           CanIf_GetPduModeOfCtrlStates(Index)--
#define CanIf_DecTxBufferPrioByCanIdBase(Index)                       CanIf_GetTxBufferPrioByCanIdBase(Index)--
#define CanIf_DecTxQueue(Index)                                       CanIf_GetTxQueue(Index)--
#define CanIf_DecTxQueueFlags(Index)                                  CanIf_GetTxQueueFlags(Index)--
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
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPCIterableTypes  CanIf Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate CanIf_CanIfCtrlId2MappedTxBuffersConfig */
typedef uint8_least CanIf_CanIfCtrlId2MappedTxBuffersConfigIterType;

/**   \brief  type used to iterate CanIf_CtrlStates */
typedef uint8_least CanIf_CtrlStatesIterType;

/**   \brief  type used to iterate CanIf_MailBoxConfig */
typedef uint8_least CanIf_MailBoxConfigIterType;

/**   \brief  type used to iterate CanIf_MappedTxBuffersConfig */
typedef uint8_least CanIf_MappedTxBuffersConfigIterType;

/**   \brief  type used to iterate CanIf_RxIndicationFctList */
typedef uint8_least CanIf_RxIndicationFctListIterType;

/**   \brief  type used to iterate CanIf_RxPduConfig */
typedef uint16_least CanIf_RxPduConfigIterType;

/**   \brief  type used to iterate CanIf_TxBufferPrioByCanIdBase */
typedef uint8_least CanIf_TxBufferPrioByCanIdBaseIterType;

/**   \brief  type used to iterate CanIf_TxBufferPrioByCanIdBitQueueConfig */
typedef uint8_least CanIf_TxBufferPrioByCanIdBitQueueConfigIterType;

/**   \brief  type used to iterate CanIf_TxConfirmationFctList */
typedef uint8_least CanIf_TxConfirmationFctListIterType;

/**   \brief  type used to iterate CanIf_TxPduConfig */
typedef uint8_least CanIf_TxPduConfigIterType;

/**   \brief  type used to iterate CanIf_TxPduQueueIndex */
typedef uint8_least CanIf_TxPduQueueIndexIterType;

/**   \brief  type used to iterate CanIf_TxQueue */
typedef uint8_least CanIf_TxQueueIterType;

/**   \brief  type used to iterate CanIf_TxQueueFlags */
typedef uint8_least CanIf_TxQueueFlagsIterType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCValueTypes  CanIf Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for CanIf_MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig */
typedef uint8 CanIf_MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfigType;

/**   \brief  value based type definition for CanIf_MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig */
typedef uint8 CanIf_MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfigType;

/**   \brief  value based type definition for CanIf_GeneratorCompatibilityVersion */
typedef uint16 CanIf_GeneratorCompatibilityVersionType;

/**   \brief  value based type definition for CanIf_GeneratorVersion */
typedef uint32 CanIf_GeneratorVersionType;

/**   \brief  value based type definition for CanIf_CtrlStatesIdxOfMailBoxConfig */
typedef uint8 CanIf_CtrlStatesIdxOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_PduIdFirstOfMailBoxConfig */
typedef uint8 CanIf_PduIdFirstOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_PduIdLastOfMailBoxConfig */
typedef uint8 CanIf_PduIdLastOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_TxBufferCfgIdxOfMailBoxConfig */
typedef uint8 CanIf_TxBufferCfgIdxOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_TxBufferCfgUsedOfMailBoxConfig */
typedef boolean CanIf_TxBufferCfgUsedOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_TxBufferHandlingTypeOfMailBoxConfig */
typedef uint8 CanIf_TxBufferHandlingTypeOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_MailBoxConfigIdxOfMappedTxBuffersConfig */
typedef uint8 CanIf_MailBoxConfigIdxOfMappedTxBuffersConfigType;

/**   \brief  value based type definition for CanIf_DlcOfRxPduConfig */
typedef uint8 CanIf_DlcOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_RxIndicationFctListIdxOfRxPduConfig */
typedef uint8 CanIf_RxIndicationFctListIdxOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_RxMetaDataLengthOfRxPduConfig */
typedef uint8 CanIf_RxMetaDataLengthOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_RxPduCanIdOfRxPduConfig */
typedef uint32 CanIf_RxPduCanIdOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_RxPduMaskOfRxPduConfig */
typedef uint32 CanIf_RxPduMaskOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_UpperPduIdOfRxPduConfig */
typedef PduIdType CanIf_UpperPduIdOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_SizeOfCanIfCtrlId2MappedTxBuffersConfig */
typedef uint8 CanIf_SizeOfCanIfCtrlId2MappedTxBuffersConfigType;

/**   \brief  value based type definition for CanIf_SizeOfCtrlStates */
typedef uint8 CanIf_SizeOfCtrlStatesType;

/**   \brief  value based type definition for CanIf_SizeOfMailBoxConfig */
typedef uint8 CanIf_SizeOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_SizeOfMappedTxBuffersConfig */
typedef uint8 CanIf_SizeOfMappedTxBuffersConfigType;

/**   \brief  value based type definition for CanIf_SizeOfRxIndicationFctList */
typedef uint8 CanIf_SizeOfRxIndicationFctListType;

/**   \brief  value based type definition for CanIf_SizeOfRxPduConfig */
typedef uint16 CanIf_SizeOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_SizeOfTxBufferPrioByCanIdBase */
typedef uint8 CanIf_SizeOfTxBufferPrioByCanIdBaseType;

/**   \brief  value based type definition for CanIf_SizeOfTxBufferPrioByCanIdBitQueueConfig */
typedef uint8 CanIf_SizeOfTxBufferPrioByCanIdBitQueueConfigType;

/**   \brief  value based type definition for CanIf_SizeOfTxConfirmationFctList */
typedef uint8 CanIf_SizeOfTxConfirmationFctListType;

/**   \brief  value based type definition for CanIf_SizeOfTxPduConfig */
typedef uint8 CanIf_SizeOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_SizeOfTxPduQueueIndex */
typedef uint8 CanIf_SizeOfTxPduQueueIndexType;

/**   \brief  value based type definition for CanIf_SizeOfTxQueue */
typedef uint8 CanIf_SizeOfTxQueueType;

/**   \brief  value based type definition for CanIf_SizeOfTxQueueFlags */
typedef uint8 CanIf_SizeOfTxQueueFlagsType;

/**   \brief  value based type definition for CanIf_BitPos2TxPduIdOffsetOfTxBufferPrioByCanIdBitQueueConfig */
typedef uint8 CanIf_BitPos2TxPduIdOffsetOfTxBufferPrioByCanIdBitQueueConfigType;

/**   \brief  value based type definition for CanIf_TxBufferPrioByCanIdBaseIdxOfTxBufferPrioByCanIdBitQueueConfig */
typedef uint8 CanIf_TxBufferPrioByCanIdBaseIdxOfTxBufferPrioByCanIdBitQueueConfigType;

/**   \brief  value based type definition for CanIf_TxQueueFlagsEndIdxOfTxBufferPrioByCanIdBitQueueConfig */
typedef uint8 CanIf_TxQueueFlagsEndIdxOfTxBufferPrioByCanIdBitQueueConfigType;

/**   \brief  value based type definition for CanIf_TxQueueFlagsStartIdxOfTxBufferPrioByCanIdBitQueueConfig */
typedef uint8 CanIf_TxQueueFlagsStartIdxOfTxBufferPrioByCanIdBitQueueConfigType;

/**   \brief  value based type definition for CanIf_CanIdOfTxPduConfig */
typedef uint32 CanIf_CanIdOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_CanIdTxMaskOfTxPduConfig */
typedef uint32 CanIf_CanIdTxMaskOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_CtrlStatesIdxOfTxPduConfig */
typedef uint8 CanIf_CtrlStatesIdxOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_DlcOfTxPduConfig */
typedef uint8 CanIf_DlcOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_MailBoxConfigIdxOfTxPduConfig */
typedef uint8 CanIf_MailBoxConfigIdxOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_TxConfirmationFctListIdxOfTxPduConfig */
typedef uint8 CanIf_TxConfirmationFctListIdxOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_TxMetaDataLengthOfTxPduConfig */
typedef uint8 CanIf_TxMetaDataLengthOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_UpperLayerTxPduIdOfTxPduConfig */
typedef PduIdType CanIf_UpperLayerTxPduIdOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_TxQueueIdxOfTxPduQueueIndex */
typedef uint8 CanIf_TxQueueIdxOfTxPduQueueIndexType;

/**   \brief  value based type definition for CanIf_TxQueueUsedOfTxPduQueueIndex */
typedef boolean CanIf_TxQueueUsedOfTxPduQueueIndexType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPCStructTypes  CanIf Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in CanIf_CanIfCtrlId2MappedTxBuffersConfig */
typedef struct sCanIf_CanIfCtrlId2MappedTxBuffersConfigType
{
  CanIf_MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfigType MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig;  /**< the end index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig */
  CanIf_MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfigType MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig;  /**< the start index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig */
} CanIf_CanIfCtrlId2MappedTxBuffersConfigType;

/**   \brief  type used in CanIf_CtrlStates */
typedef struct sCanIf_CtrlStatesType
{
  CanIf_ControllerModeType CtrlModeOfCtrlStates;  /**< Controller mode. */
  CanIf_PduGetModeType PduModeOfCtrlStates;  /**< PDU mode state. */
} CanIf_CtrlStatesType;

/**   \brief  type used in CanIf_MailBoxConfig */
typedef struct sCanIf_MailBoxConfigType
{
  CanIf_CtrlStatesIdxOfMailBoxConfigType CtrlStatesIdxOfMailBoxConfig;  /**< the index of the 1:1 relation pointing to CanIf_CtrlStates */
  CanIf_PduIdFirstOfMailBoxConfigType PduIdFirstOfMailBoxConfig;  /**< "First" PDU mapped to mailbox. */
  CanIf_PduIdLastOfMailBoxConfigType PduIdLastOfMailBoxConfig;  /**< "Last" PDU mapped to mailbox. */
  CanIf_TxBufferCfgIdxOfMailBoxConfigType TxBufferCfgIdxOfMailBoxConfig;  /**< the index of the 0:1 relation pointing to CanIf_TxBufferPrioByCanIdBitQueueConfig */
  CanIf_TxBufferHandlingTypeOfMailBoxConfigType TxBufferHandlingTypeOfMailBoxConfig;
  CanIf_MailBoxTypeType MailBoxTypeOfMailBoxConfig;  /**< Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused. */
} CanIf_MailBoxConfigType;

/**   \brief  type used in CanIf_MappedTxBuffersConfig */
typedef struct sCanIf_MappedTxBuffersConfigType
{
  CanIf_MailBoxConfigIdxOfMappedTxBuffersConfigType MailBoxConfigIdxOfMappedTxBuffersConfig;  /**< the index of the 1:1 relation pointing to CanIf_MailBoxConfig */
} CanIf_MappedTxBuffersConfigType;

/**   \brief  type used in CanIf_RxIndicationFctList */
typedef struct sCanIf_RxIndicationFctListType
{
  CanIf_RxIndicationFctType RxIndicationFctOfRxIndicationFctList;  /**< Rx indication function. */
  CanIf_RxIndicationLayoutType RxIndicationLayoutOfRxIndicationFctList;  /**< Layout of Rx indication function. */
} CanIf_RxIndicationFctListType;

/**   \brief  type used in CanIf_RxPduConfig */
typedef struct sCanIf_RxPduConfigType
{
  CanIf_RxPduCanIdOfRxPduConfigType RxPduCanIdOfRxPduConfig;  /**< Rx-PDU: CAN identifier. */
  CanIf_RxPduMaskOfRxPduConfigType RxPduMaskOfRxPduConfig;  /**< Rx-PDU: CAN identifier mask. */
  CanIf_UpperPduIdOfRxPduConfigType UpperPduIdOfRxPduConfig;  /**< PDU ID defined by upper layer. */
  CanIf_DlcOfRxPduConfigType DlcOfRxPduConfig;  /**< Data length code. */
  CanIf_RxIndicationFctListIdxOfRxPduConfigType RxIndicationFctListIdxOfRxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_RxIndicationFctList */
  CanIf_RxMetaDataLengthOfRxPduConfigType RxMetaDataLengthOfRxPduConfig;  /**< Meta data length. */
} CanIf_RxPduConfigType;

/**   \brief  type used in CanIf_TxBufferPrioByCanIdBitQueueConfig */
typedef struct sCanIf_TxBufferPrioByCanIdBitQueueConfigType
{
  CanIf_BitPos2TxPduIdOffsetOfTxBufferPrioByCanIdBitQueueConfigType BitPos2TxPduIdOffsetOfTxBufferPrioByCanIdBitQueueConfig;
  CanIf_TxBufferPrioByCanIdBaseIdxOfTxBufferPrioByCanIdBitQueueConfigType TxBufferPrioByCanIdBaseIdxOfTxBufferPrioByCanIdBitQueueConfig;  /**< the index of the 1:1 relation pointing to CanIf_TxBufferPrioByCanIdBase */
  CanIf_TxQueueFlagsEndIdxOfTxBufferPrioByCanIdBitQueueConfigType TxQueueFlagsEndIdxOfTxBufferPrioByCanIdBitQueueConfig;  /**< the end index of the 1:n relation pointing to CanIf_TxQueueFlags */
  CanIf_TxQueueFlagsStartIdxOfTxBufferPrioByCanIdBitQueueConfigType TxQueueFlagsStartIdxOfTxBufferPrioByCanIdBitQueueConfig;  /**< the start index of the 1:n relation pointing to CanIf_TxQueueFlags */
} CanIf_TxBufferPrioByCanIdBitQueueConfigType;

/**   \brief  type used in CanIf_TxPduConfig */
typedef struct sCanIf_TxPduConfigType
{
  CanIf_CanIdOfTxPduConfigType CanIdOfTxPduConfig;  /**< CAN identifier (16bit / 32bit). */
  CanIf_CanIdTxMaskOfTxPduConfigType CanIdTxMaskOfTxPduConfig;  /**< CAN identifier mask (16bit / 32bit). */
  CanIf_UpperLayerTxPduIdOfTxPduConfigType UpperLayerTxPduIdOfTxPduConfig;  /**< Upper layer handle ID (8bit / 16bit). */
  CanIf_CtrlStatesIdxOfTxPduConfigType CtrlStatesIdxOfTxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_CtrlStates */
  CanIf_DlcOfTxPduConfigType DlcOfTxPduConfig;  /**< Data length code. */
  CanIf_MailBoxConfigIdxOfTxPduConfigType MailBoxConfigIdxOfTxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_MailBoxConfig */
  CanIf_TxConfirmationFctListIdxOfTxPduConfigType TxConfirmationFctListIdxOfTxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_TxConfirmationFctList */
  CanIf_TxMetaDataLengthOfTxPduConfigType TxMetaDataLengthOfTxPduConfig;  /**< Meta data length. */
} CanIf_TxPduConfigType;

/**   \brief  type used in CanIf_TxPduQueueIndex */
typedef struct sCanIf_TxPduQueueIndexType
{
  CanIf_TxQueueIdxOfTxPduQueueIndexType TxQueueIdxOfTxPduQueueIndex;  /**< the index of the 0:1 relation pointing to CanIf_TxQueue */
} CanIf_TxPduQueueIndexType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCSymbolicStructTypes  CanIf Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to CanIf_CtrlStates */
typedef struct CanIf_CtrlStatesStructSTag
{
  CanIf_CtrlStatesType CT_Backbone1J1939_198bcf1c[1];
  CanIf_CtrlStatesType CT_CabSubnet_d2ff0fbe[1];
  CanIf_CtrlStatesType CT_SecuritySubnet_f5346ae6[1];
  CanIf_CtrlStatesType CT_FMSNet_119a8706[1];
  CanIf_CtrlStatesType CT_Backbone2_34cfe263[1];
} CanIf_CtrlStatesStructSType;

/**   \brief  type to be used as symbolic data element access to CanIf_TxBufferPrioByCanIdBase */
typedef struct CanIf_TxBufferPrioByCanIdBaseStructSTag
{
  CanIf_TxBufferPrioByCanIdBaseType CHNL_a6b6a922[1];
} CanIf_TxBufferPrioByCanIdBaseStructSType;

/**   \brief  type to be used as symbolic data element access to CanIf_TxQueue */
typedef struct CanIf_TxQueueStructSTag
{
  CanIf_TxPrioByCanIdBitQueueType Debug28_SCIM_BB2_oBackbone2_4d931807_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug27_SCIM_BB2_oBackbone2_5499710c_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug26_SCIM_BB2_oBackbone2_3bb148d4_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug25_SCIM_BB2_oBackbone2_8ac902bc_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug24_SCIM_BB2_oBackbone2_e5e13b64_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug22_SCIM_BB2_oBackbone2_5c60a9f5_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug21_SCIM_BB2_oBackbone2_ed18e39d_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug20_SCIM_BB2_oBackbone2_8230da45_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug19_SCIM_BB2_oBackbone2_6163b0ff_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug18_SCIM_BB2_oBackbone2_0e4b8927_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug17_SCIM_BB2_oBackbone2_1741e02c_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug16_SCIM_BB2_oBackbone2_7869d9f4_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug15_SCIM_BB2_oBackbone2_c911939c_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug14_SCIM_BB2_oBackbone2_a639aa44_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug13_SCIM_BB2_oBackbone2_7090010d_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug12_SCIM_BB2_oBackbone2_1fb838d5_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug11_SCIM_BB2_oBackbone2_aec072bd_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug10_SCIM_BB2_oBackbone2_c1e84b65_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug9_SCIM_BB2_oBackbone2_cb8b9a3c_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug8_SCIM_BB2_oBackbone2_ab7cdc97_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug7_SCIM_BB2_oBackbone2_e391325d_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagUUDTRespMsg1_F2_C0_BB2_oBackbone2_603e2338_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagUUDTRespMsg1_F2_A2_BB2_oBackbone2_8af81a14_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagUUDTRespMsg1_F2_A1_BB2_oBackbone2_26f22879_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagUUDTRespMsg1_F2_A0_BB2_oBackbone2_42f439a2_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagUUDTRespMsg1_F2_98_BB2_oBackbone2_5178e6a4_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagUUDTRespMsg1_F2_53_BB2_oBackbone2_a51c09cf_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagUUDTRespMsg1_F2_40_BB2_oBackbone2_187336ef_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagUUDTRespMsg1_F2_26_BB2_oBackbone2_fc487bda_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntTGW2_F4_C0_BB2_Tp_oBackbone2_f7aad0d7_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntTGW2_F4_A2_BB2_Tp_oBackbone2_249acffa_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntTGW2_F4_A1_BB2_Tp_oBackbone2_bca8fbcc_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntTGW2_F4_A0_BB2_Tp_oBackbone2_7d9615e1_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntTGW2_F4_98_BB2_Tp_oBackbone2_8516ddd7_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntTGW2_F4_53_BB2_Tp_oBackbone2_280e15fa_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntTGW2_F4_40_BB2_Tp_oBackbone2_f5224357_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntTGW2_F4_26_BB2_Tp_oBackbone2_5b036461_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntHMIIOM_F3_C0_BB2_Tp_oBackbone2_9924f26b_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntHMIIOM_F3_A2_BB2_Tp_oBackbone2_d6b4927e_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntHMIIOM_F3_A1_BB2_Tp_oBackbone2_08540fc1_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntHMIIOM_F3_A0_BB2_Tp_oBackbone2_f4db796b_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntHMIIOM_F3_98_BB2_Tp_oBackbone2_73235a33_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntHMIIOM_F3_53_BB2_Tp_oBackbone2_930c5799_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntHMIIOM_F3_40_BB2_Tp_oBackbone2_7b130fa6_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagRespMsgIntHMIIOM_F3_26_BB2_Tp_oBackbone2_aba3af99_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType PhysDiagRespMsg_F2_C0_BB2_Tp_oBackbone2_ae5b54dc_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType PhysDiagRespMsg_F2_A2_BB2_Tp_oBackbone2_2addb983_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType PhysDiagRespMsg_F2_A1_BB2_Tp_oBackbone2_441131ae_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType PhysDiagRespMsg_F2_A0_BB2_Tp_oBackbone2_d77a4b8a_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType PhysDiagRespMsg_F2_98_BB2_Tp_oBackbone2_0c1730ea_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType PhysDiagRespMsg_F2_53_BB2_Tp_oBackbone2_ef1139d4_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType PhysDiagRespMsg_F2_40_BB2_Tp_oBackbone2_bd4d3e52_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType PhysDiagRespMsg_F2_26_BB2_Tp_oBackbone2_ebb70ff2_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug6_SCIM_BB2_oBackbone2_836674f6_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug5_SCIM_BB2_oBackbone2_227fbf0b_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug4_SCIM_BB2_oBackbone2_4288f9a0_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug3_SCIM_BB2_oBackbone2_bb3d2eb0_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType Debug2_SCIM_BB2_oBackbone2_dbca681b_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType AnmMsg_CIOM_Backbone2_oBackbone2_d362d40e_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_28P_oBackbone2_d86d16b8_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType PhysDiagRespMsg_F1_53_BB2_Tp_oBackbone2_be0c70d1_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType BBM_BB2_03S_CIOM_FCM_Tp_oBackbone2_29c4ac8e_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_21S_oBackbone2_140cc697_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_07P_oBackbone2_bc671479_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_31S_oBackbone2_146b0516_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_20S_oBackbone2_73cf4797_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_26S_oBackbone2_f83747d6_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_13S_Tp_oBackbone2_bd99285a_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_12S_Tp_oBackbone2_b9170acc_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_11P_oBackbone2_37f8d7b9_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_27S_oBackbone2_9ff4c6d6_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_10P_oBackbone2_503b56b9_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_06P_oBackbone2_dba49579_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_25P_oBackbone2_732f917b_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_05P_oBackbone2_73e01679_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_01P_oBackbone2_379f1438_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_03P_oBackbone2_f8181638_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_02P_oBackbone2_9fdb9738_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_32S_Tp_oBackbone2_8bc67a6a_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_04P_oBackbone2_14239779_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType CIOM_BB2_30P_oBackbone2_50f4d1bb_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagFaultStat_WRCS_BB2_oBackbone2_dad83051_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagFaultStat_SRS_BB2_oBackbone2_e1ef7eee_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagFaultStat_PDM_BB2_oBackbone2_b720c987_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagFaultStat_LECM_BB2_oBackbone2_0cb60c21_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagFaultStat_DDM_BB2_oBackbone2_c5068234_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagFaultStat_CIOM_BB2_oBackbone2_04d7302e_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagFaultStat_CCM_BB2_oBackbone2_2f6e7814_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType DiagFaultStat_Alarm_BB2_oBackbone2_7b6d0a04_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType TECU_BB2_06S_FCM_Tp_oBackbone2_a56e8b10_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType VMCU_BB2_57P_FCM_Tp_oBackbone2_65fb58e9_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType HMIIOM_BB2_36S_FCM_Tp_oBackbone2_bf84bd48_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType HMIIOM_BB2_19P_CIOM_FCM_Tp_oBackbone2_1a616940_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType VMCU_BB2_31S_FCM_Tp_oBackbone2_46c44850_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType VMCU_BB2_32S_FCM_Tp_oBackbone2_8a7e4a00_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType HMIIOM_BB2_20S_FCM_Tp_oBackbone2_2def59ba_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType EMS_BB2_09S_FCM_Tp_oBackbone2_41cc37fa_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType VMCU_BB2_34S_FCM_Tp_oBackbone2_c87b48e1_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType EMS_BB2_11S_FCM_Tp_oBackbone2_6cd5cf95_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType HMIIOM_BB2_35S_FCM_Tp_oBackbone2_e32a38c7_Tx[1];
  CanIf_TxPrioByCanIdBitQueueType TECU_BB2_05S_FCM_Tp_oBackbone2_69d48940_Tx[1];
} CanIf_TxQueueStructSType;

/**   \brief  type to be used as symbolic data element access to CanIf_TxQueueFlags */
typedef struct CanIf_TxQueueFlagsStructSTag
{
  CanIf_TxQueueFlagType CHNL_a6b6a922[4];
} CanIf_TxQueueFlagsStructSType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCUnionIndexAndSymbolTypes  CanIf Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access CanIf_CtrlStates in an index and symbol based style. */
typedef union CanIf_CtrlStatesUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanIf_CtrlStatesType raw[5];
  CanIf_CtrlStatesStructSType str;
} CanIf_CtrlStatesUType;

/**   \brief  type to access CanIf_TxBufferPrioByCanIdBase in an index and symbol based style. */
typedef union CanIf_TxBufferPrioByCanIdBaseUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanIf_TxBufferPrioByCanIdBaseType raw[1];
  CanIf_TxBufferPrioByCanIdBaseStructSType str;
} CanIf_TxBufferPrioByCanIdBaseUType;

/**   \brief  type to access CanIf_TxQueue in an index and symbol based style. */
typedef union CanIf_TxQueueUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanIf_TxPrioByCanIdBitQueueType raw[101];
  CanIf_TxQueueStructSType str;
} CanIf_TxQueueUType;

/**   \brief  type to access CanIf_TxQueueFlags in an index and symbol based style. */
typedef union CanIf_TxQueueFlagsUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanIf_TxQueueFlagType raw[4];
  CanIf_TxQueueFlagsStructSType str;
} CanIf_TxQueueFlagsUType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCRootValueTypes  CanIf Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in CanIf_PCConfig */
typedef struct sCanIf_PCConfigType
{
  uint8 CanIf_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} CanIf_PCConfigType;

typedef CanIf_PCConfigType CanIf_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanIf_BusOffNotificationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_BusOffNotificationFctType, CANIF_CONST) CanIf_BusOffNotificationFctPtr;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CanIfCtrlId2MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_CanIfCtrlId2MappedTxBuffersConfig
  \brief  CAN controller configuration - mapped Tx-buffer(s).
  \details
  Element                          Description
  MappedTxBuffersConfigEndIdx      the end index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
  MappedTxBuffersConfigStartIdx    the start index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_CanIfCtrlId2MappedTxBuffersConfigType, CANIF_CONST) CanIf_CanIfCtrlId2MappedTxBuffersConfig[5];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlModeIndicationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_CtrlModeIndicationFctType, CANIF_CONST) CanIf_CtrlModeIndicationFctPtr;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MailBoxConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MailBoxConfig
  \brief  Mailbox table.
  \details
  Element                 Description
  CtrlStatesIdx           the index of the 1:1 relation pointing to CanIf_CtrlStates
  PduIdFirst              "First" PDU mapped to mailbox.
  PduIdLast               "Last" PDU mapped to mailbox.
  TxBufferCfgIdx          the index of the 0:1 relation pointing to CanIf_TxBufferPrioByCanIdBitQueueConfig
  TxBufferHandlingType
  MailBoxType             Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_MailBoxConfigType, CANIF_CONST) CanIf_MailBoxConfig[140];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MappedTxBuffersConfig
  \brief  Mapped Tx-buffer(s)
  \details
  Element             Description
  MailBoxConfigIdx    the index of the 1:1 relation pointing to CanIf_MailBoxConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_MappedTxBuffersConfigType, CANIF_CONST) CanIf_MappedTxBuffersConfig[1];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxIndicationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_RxIndicationFctList
  \brief  Rx indication functions table.
  \details
  Element               Description
  RxIndicationFct       Rx indication function.
  RxIndicationLayout    Layout of Rx indication function.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_RxIndicationFctListType, CANIF_CONST) CanIf_RxIndicationFctList[6];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduConfig
  \brief  Rx-PDU configuration table.
  \details
  Element                   Description
  RxPduCanId                Rx-PDU: CAN identifier.
  RxPduMask                 Rx-PDU: CAN identifier mask.
  UpperPduId                PDU ID defined by upper layer.
  Dlc                       Data length code.
  RxIndicationFctListIdx    the index of the 1:1 relation pointing to CanIf_RxIndicationFctList
  RxMetaDataLength          Meta data length.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_RxPduConfigType, CANIF_CONST) CanIf_RxPduConfig[256];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdBitQueueConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdBitQueueConfig
  \brief  Tx-buffer: PRIO_BY_CANID as BIT_QUEUE
  \details
  Element                       Description
  BitPos2TxPduIdOffset      
  TxBufferPrioByCanIdBaseIdx    the index of the 1:1 relation pointing to CanIf_TxBufferPrioByCanIdBase
  TxQueueFlagsEndIdx            the end index of the 1:n relation pointing to CanIf_TxQueueFlags
  TxQueueFlagsStartIdx          the start index of the 1:n relation pointing to CanIf_TxQueueFlags
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_TxBufferPrioByCanIdBitQueueConfigType, CANIF_CONST) CanIf_TxBufferPrioByCanIdBitQueueConfig[1];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxConfirmationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_TxConfirmationFctList
  \brief  Tx confirmation functions table.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_TxConfirmationFctType, CANIF_CONST) CanIf_TxConfirmationFctList[6];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduConfig
  \brief  Tx-PDUs - configuration.
  \details
  Element                     Description
  CanId                       CAN identifier (16bit / 32bit).
  CanIdTxMask                 CAN identifier mask (16bit / 32bit).
  UpperLayerTxPduId           Upper layer handle ID (8bit / 16bit).
  CtrlStatesIdx               the index of the 1:1 relation pointing to CanIf_CtrlStates
  Dlc                         Data length code.
  MailBoxConfigIdx            the index of the 1:1 relation pointing to CanIf_MailBoxConfig
  TxConfirmationFctListIdx    the index of the 1:1 relation pointing to CanIf_TxConfirmationFctList
  TxMetaDataLength            Meta data length.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_TxPduConfigType, CANIF_CONST) CanIf_TxPduConfig[222];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduQueueIndex
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduQueueIndex
  \brief  Indirection table: Tx-PDU handle ID to corresponding Tx buffer handle ID. NOTE: Only BasicCAN Tx-PDUs have a valid indirection into the Tx buffer.
  \details
  Element       Description
  TxQueueIdx    the index of the 0:1 relation pointing to CanIf_TxQueue
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_TxPduQueueIndexType, CANIF_CONST) CanIf_TxPduQueueIndex[222];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlStates
**********************************************************************************************************************/
/** 
  \var    CanIf_CtrlStates
  \details
  Element     Description
  CtrlMode    Controller mode.
  PduMode     PDU mode state.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(CanIf_CtrlStatesUType, CANIF_VAR_NOINIT) CanIf_CtrlStates;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdBase
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdBase
  \brief  Variable declaration - Tx-buffer: PRIO_BY_CANID as byte/bit-queue. Stores at least the QueueCounter.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(CanIf_TxBufferPrioByCanIdBaseUType, CANIF_VAR_NOINIT) CanIf_TxBufferPrioByCanIdBase;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueue
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueue
  \brief  Variable declaration - Tx bit queue.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(CanIf_TxQueueUType, CANIF_VAR_NOINIT) CanIf_TxQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueueFlags
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueueFlags
  \brief  Variable declaration - Tx bit queue flags.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(CanIf_TxQueueFlagsUType, CANIF_VAR_NOINIT) CanIf_TxQueueFlags;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
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




#endif  /* CANIF_CFG_H */
/**********************************************************************************************************************
  END OF FILE: CanIf_Cfg.h
**********************************************************************************************************************/


