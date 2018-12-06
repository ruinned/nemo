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
 *            Module: PduR
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: PduR_Cfg.h
 *   Generation Time: 2018-12-01 17:02:18
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
 * [Warning] PDUR07020 - Invalid setting of communication type. 
 * - [Reduced Severity due to User-Defined Parameter] Communication type of PduRRoutingPath /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BBM_BB2_03S_CIOM_oBackbone2_a3c4774b_Rx cannot be determined. The communication types of the PduRSrcPdu and PduRDestPdu must be unique. Routing paths between different communication types are not possible.
 * 
 * Multiple communication types found:
 * COMMUNICATION_INTERFACE, TRANSPORT_PROTOCOL
 * 
 * Parameters influencing the communication type:
 * /ActiveEcuC/Com/ComConfig/BBM_BB2_03S_CIOM_oBackbone2_d5047985_Rx[0:ComIPduType](value=NORMAL), /ActiveEcuC/CanTp/CanTpConfig/TPCH_473c6289/CanTpRxNSdu_08e2bc01[0:CanTpRxNSduRef](value=/ActiveEcuC/EcuC/EcucPduCollection/BBM_BB2_03S_CIOM_oBackbone2_a3c4774b_Rx)
 * Erroneous configuration elements:
 * /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BBM_BB2_03S_CIOM_oBackbone2_a3c4774b_Rx/BBM_BB2_03S_CIOM_oBackbone2_a3c4774b_Rx_bd0d068c_Rx[0:PduRDestPduRef](value=/ActiveEcuC/EcuC/EcucPduCollection/BBM_BB2_03S_CIOM_oBackbone2_d5047985_Rx) (DefRef: /MICROSAR/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRDestPdu/PduRDestPduRef)
 * /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BBM_BB2_03S_CIOM_oBackbone2_a3c4774b_Rx/PduRSrcPdu_bd0d068c[0:PduRSrcPduRef](value=/ActiveEcuC/EcuC/EcucPduCollection/BBM_BB2_03S_CIOM_oBackbone2_a3c4774b_Rx) (DefRef: /MICROSAR/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRSrcPdu/PduRSrcPduRef)
 * /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BBM_BB2_03S_CIOM_oBackbone2_a3c4774b_Rx[0:PduRRoutingPathCommunicationType](value=TRANSPORT_PROTOCOL) (DefRef: /MICROSAR/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRRoutingPathCommunicationType)
 * 
 * [Warning] PDUR07020 - Invalid setting of communication type. 
 * - [Reduced Severity due to User-Defined Parameter] Communication type of PduRRoutingPath /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CIOM_BB2_12S_oBackbone2_516faad3_Tx cannot be determined. The communication types of the PduRSrcPdu and PduRDestPdu must be unique. Routing paths between different communication types are not possible.
 * 
 * Multiple communication types found:
 * TRANSPORT_PROTOCOL, COMMUNICATION_INTERFACE
 * 
 * Parameters influencing the communication type:
 * /ActiveEcuC/CanTp/CanTpConfig/TPCH_e791e33f/CanTpTxNSdu[0:CanTpTxNSduRef](value=/ActiveEcuC/EcuC/EcucPduCollection/CIOM_BB2_12S_oBackbone2_fe325e86_Tx), /ActiveEcuC/Com/ComConfig/CIOM_BB2_12S_oBackbone2_516faad3_Tx[0:ComIPduType](value=NORMAL)
 * Erroneous configuration elements:
 * /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CIOM_BB2_12S_oBackbone2_516faad3_Tx/CIOM_BB2_12S_oBackbone2_fe325e86_Tx[0:PduRDestPduRef](value=/ActiveEcuC/EcuC/EcucPduCollection/CIOM_BB2_12S_oBackbone2_fe325e86_Tx) (DefRef: /MICROSAR/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRDestPdu/PduRDestPduRef)
 * /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CIOM_BB2_12S_oBackbone2_516faad3_Tx/PduRSrcPdu_973cde10[0:PduRSrcPduRef](value=/ActiveEcuC/EcuC/EcucPduCollection/CIOM_BB2_12S_oBackbone2_516faad3_Tx) (DefRef: /MICROSAR/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRSrcPdu/PduRSrcPduRef)
 * /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CIOM_BB2_12S_oBackbone2_516faad3_Tx[0:PduRRoutingPathCommunicationType](value=TRANSPORT_PROTOCOL) (DefRef: /MICROSAR/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRRoutingPathCommunicationType)
 * 
 * [Warning] PDUR07020 - Invalid setting of communication type. 
 * - [Reduced Severity due to User-Defined Parameter] Communication type of PduRRoutingPath /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CIOM_BB2_13S_oBackbone2_8cf97356_Tx cannot be determined. The communication types of the PduRSrcPdu and PduRDestPdu must be unique. Routing paths between different communication types are not possible.
 * 
 * Multiple communication types found:
 * TRANSPORT_PROTOCOL, COMMUNICATION_INTERFACE
 * 
 * Parameters influencing the communication type:
 * /ActiveEcuC/CanTp/CanTpConfig/TPCH_5193d6ce/CanTpTxNSdu_638f93bd[0:CanTpTxNSduRef](value=/ActiveEcuC/EcuC/EcucPduCollection/CIOM_BB2_13S_oBackbone2_0fe85b2c_Tx), /ActiveEcuC/Com/ComConfig/CIOM_BB2_13S_oBackbone2_8cf97356_Tx[0:ComIPduType](value=NORMAL)
 * Erroneous configuration elements:
 * /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CIOM_BB2_13S_oBackbone2_8cf97356_Tx/CIOM_BB2_13S_oBackbone2_0fe85b2c_Tx[0:PduRDestPduRef](value=/ActiveEcuC/EcuC/EcucPduCollection/CIOM_BB2_13S_oBackbone2_0fe85b2c_Tx) (DefRef: /MICROSAR/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRDestPdu/PduRDestPduRef)
 * /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CIOM_BB2_13S_oBackbone2_8cf97356_Tx/PduRSrcPdu_89789648[0:PduRSrcPduRef](value=/ActiveEcuC/EcuC/EcucPduCollection/CIOM_BB2_13S_oBackbone2_8cf97356_Tx) (DefRef: /MICROSAR/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRSrcPdu/PduRSrcPduRef)
 * /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CIOM_BB2_13S_oBackbone2_8cf97356_Tx[0:PduRRoutingPathCommunicationType](value=TRANSPORT_PROTOCOL) (DefRef: /MICROSAR/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRRoutingPathCommunicationType)
 * 
 * [Warning] PDUR07020 - Invalid setting of communication type. 
 * - [Reduced Severity due to User-Defined Parameter] The configured communication type TRANSPORT_PROTOCOL of DefinitionRef: /MICROSAR/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BBM_BB2_03S_CIOM_oBackbone2_a3c4774b_Rx does not match with the expected routing type UNDEFINED.
 * Erroneous configuration elements:
 * /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/BBM_BB2_03S_CIOM_oBackbone2_a3c4774b_Rx[0:PduRRoutingPathCommunicationType](value=TRANSPORT_PROTOCOL) (DefRef: /MICROSAR/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRRoutingPathCommunicationType)
 * 
 * [Warning] PDUR07020 - Invalid setting of communication type. 
 * - [Reduced Severity due to User-Defined Parameter] The configured communication type TRANSPORT_PROTOCOL of DefinitionRef: /MICROSAR/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CIOM_BB2_12S_oBackbone2_516faad3_Tx does not match with the expected routing type UNDEFINED.
 * Erroneous configuration elements:
 * /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CIOM_BB2_12S_oBackbone2_516faad3_Tx[0:PduRRoutingPathCommunicationType](value=TRANSPORT_PROTOCOL) (DefRef: /MICROSAR/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRRoutingPathCommunicationType)
 * 
 * [Warning] PDUR07020 - Invalid setting of communication type. 
 * - [Reduced Severity due to User-Defined Parameter] The configured communication type TRANSPORT_PROTOCOL of DefinitionRef: /MICROSAR/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CIOM_BB2_13S_oBackbone2_8cf97356_Tx does not match with the expected routing type UNDEFINED.
 * Erroneous configuration elements:
 * /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/CIOM_BB2_13S_oBackbone2_8cf97356_Tx[0:PduRRoutingPathCommunicationType](value=TRANSPORT_PROTOCOL) (DefRef: /MICROSAR/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRRoutingPathCommunicationType)
 *********************************************************************************************************************/
#if !defined (PDUR_CFG_H)
# define PDUR_CFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "PduR_Types.h"

/**********************************************************************************************************************
 * GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#ifndef PDUR_USE_DUMMY_FUNCTIONS
#define PDUR_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef PDUR_USE_DUMMY_STATEMENT
#define PDUR_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef PDUR_DUMMY_STATEMENT
#define PDUR_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef PDUR_DUMMY_STATEMENT_CONST
#define PDUR_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef PDUR_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define PDUR_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef PDUR_ATOMIC_VARIABLE_ACCESS
#define PDUR_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef PDUR_PROCESSOR_MPC5746C
#define PDUR_PROCESSOR_MPC5746C
#endif
#ifndef PDUR_COMP_DIAB
#define PDUR_COMP_DIAB
#endif
#ifndef PDUR_GEN_GENERATOR_MSR
#define PDUR_GEN_GENERATOR_MSR
#endif
#ifndef PDUR_CPUTYPE_BITORDER_MSB2LSB
#define PDUR_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_PRECOMPILE
#define PDUR_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_LINKTIME
#define PDUR_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define PDUR_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef PDUR_CONFIGURATION_VARIANT
#define PDUR_CONFIGURATION_VARIANT PDUR_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef PDUR_POSTBUILD_VARIANT_SUPPORT
#define PDUR_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif



#define PDUR_DEV_ERROR_DETECT STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRSafeBswChecks] || /ActiveEcuC/PduR/PduRGeneral[0:PduRDevErrorDetect] */
#define PDUR_DEV_ERROR_REPORT STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRDevErrorDetect] */

#define PDUR_METADATA_SUPPORT STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRMetaDataSupport] */
#define PDUR_VERSION_INFO_API STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRVersionInfoApi] */

#define PDUR_ERROR_NOTIFICATION STD_OFF

#define PDUR_MAIN_FUNCTION_TX STD_OFF
#define PDUR_MAIN_FUNCTION_RX STD_OFF

#define PduR_PBConfigIdType uint32

 
 /*  DET Error define list  */ 
#define PDUR_FCT_LINTPRXIND 0x55U 
#define PDUR_FCT_LINTPTX 0x59U 
#define PDUR_FCT_LINTPTXCFM 0x58U 
#define PDUR_FCT_LINTPSOR 0x56U 
#define PDUR_FCT_LINTPCPYRX 0x54U 
#define PDUR_FCT_LINTPCPYTX 0x57U 
#define PDUR_FCT_CANIFRXIND 0x01U 
#define PDUR_FCT_CANIFTX 0x09U 
#define PDUR_FCT_CANIFTXCFM 0x02U 
#define PDUR_FCT_COMTX 0x89U 
#define PDUR_FCT_J1939TPRXIND 0x25U 
#define PDUR_FCT_J1939TPTX 0x29U 
#define PDUR_FCT_J1939TPTXCFM 0x28U 
#define PDUR_FCT_J1939TPSOR 0x26U 
#define PDUR_FCT_J1939TPCPYRX 0x24U 
#define PDUR_FCT_J1939TPCPYTX 0x27U 
#define PDUR_FCT_LINIFRXIND 0x51U 
#define PDUR_FCT_LINIFTX 0x59U 
#define PDUR_FCT_LINIFTXCFM 0x52U 
#define PDUR_FCT_LINIFTT 0x53U 
#define PDUR_FCT_J1939RMTX 0x29U 
#define PDUR_FCT_CANTPRXIND 0x05U 
#define PDUR_FCT_CANTPTX 0x09U 
#define PDUR_FCT_CANTPTXCFM 0x08U 
#define PDUR_FCT_CANTPSOR 0x06U 
#define PDUR_FCT_CANTPCPYRX 0x04U 
#define PDUR_FCT_CANTPCPYTX 0x07U 
#define PDUR_FCT_DCMTX 0x99U 
#define PDUR_FCT_DCMCTX 0x9AU 
#define PDUR_FCT_DCMCTX 0x9AU 
#define PDUR_FCT_CDDTX 0xC9U 
 /*   PduR_LinTpTpRxIndication  PduR_LinTpTransmit  PduR_LinTpTxConfirmation  PduR_LinTpStartOfReception  PduR_LinTpCopyRxData  PduR_LinTpCopyTxData  PduR_CanIfIfRxIndication  PduR_CanIfTransmit  PduR_CanIfTxConfirmation  PduR_ComTransmit  PduR_J1939TpTpRxIndication  PduR_J1939TpTransmit  PduR_J1939TpTxConfirmation  PduR_J1939TpStartOfReception  PduR_J1939TpCopyRxData  PduR_J1939TpCopyTxData  PduR_LinIfIfRxIndication  PduR_LinIfTransmit  PduR_LinIfTxConfirmation  PduR_LinIfTriggerTransmit  PduR_J1939RmTransmit  PduR_CanTpTpRxIndication  PduR_CanTpTransmit  PduR_CanTpTxConfirmation  PduR_CanTpStartOfReception  PduR_CanTpCopyRxData  PduR_CanTpCopyTxData  PduR_DcmTransmit  PduR_DcmCancelTransmit  PduR_DcmCancelTransmit  PduR_CddTransmit  */ 



/**
 * \defgroup PduRHandleIdsIfRxDest Handle IDs of handle space IfRxDest.
 * \brief Communication interface Rx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_ACM_BB1_01P_oBackbone1J1939_b0278a49_Rx_bb6c3932_Rx 0
#define PduRConf_PduRDestPdu_AIR1_X_VMCU_oBackbone1J1939_276eaeb8_Rx_66b8580e_Rx 1
#define PduRConf_PduRDestPdu_AMB_X_VMCU_oBackbone1J1939_52549913_Rx_00ee91b2_Rx 2
#define PduRConf_PduRDestPdu_Alarm_Sec_02P_oSecuritySubnet_0cca1998_Rx_58f52ce6_Rx 3
#define PduRConf_PduRDestPdu_AnmMsg_Alarm_SecuritySubnet_oSecuritySubnet_9d33373d_Rx_59c455d2_Rx 4
#define PduRConf_PduRDestPdu_AnmMsg_BBM_Backbone2_oBackbone2_03be1070_Rx_dafcbadc_Rx 5
#define PduRConf_PduRDestPdu_AnmMsg_CCM_CabSubnet_oCabSubnet_2f78a729_Rx_824648ca_Rx 6
#define PduRConf_PduRDestPdu_AnmMsg_DACU_Backbone2_oBackbone2_dbe92592_Rx_4a41b928_Rx 7
#define PduRConf_PduRDestPdu_AnmMsg_DDM_SecuritySubnet_oSecuritySubnet_c6114aa9_Rx_bd5e212b_Rx 8
#define PduRConf_PduRDestPdu_AnmMsg_ECUspare1_Backbone2_oBackbone2_00fe11e7_Rx_06ff8b63_Rx 9
#define PduRConf_PduRDestPdu_AnmMsg_ECUspare2_Backbone2_oBackbone2_e3b7a645_Rx_52e2e014_Rx 10
#define PduRConf_PduRDestPdu_AnmMsg_ECUspare5_SecuritySubnet_oSecuritySubnet_40a00d45_Rx_42489524_Rx 11
#define PduRConf_PduRDestPdu_AnmMsg_ECUspare6_CabSubnet_oCabSubnet_3fe72d0f_Rx_6c24f169_Rx 12
#define PduRConf_PduRDestPdu_AnmMsg_EMS_Backbone2_oBackbone2_bf0abd7e_Rx_90682d55_Rx 13
#define PduRConf_PduRDestPdu_AnmMsg_IC3_Backbone2_oBackbone2_51836988_Rx_7995df46_Rx 14
#define PduRConf_PduRDestPdu_AnmMsg_LECM1_CabSubnet_oCabSubnet_aef1a94e_Rx_93860a26_Rx 15
#define PduRConf_PduRDestPdu_AnmMsg_PDM_SecuritySubnet_oSecuritySubnet_412a9e12_Rx_c2f29ed3_Rx 16
#define PduRConf_PduRDestPdu_AnmMsg_SRS_CabSubnet_oCabSubnet_5d05fd8e_Rx_b4c75839_Rx 17
#define PduRConf_PduRDestPdu_AnmMsg_TECU_Backbone2_oBackbone2_d3c774dc_Rx_0a3da473_Rx 18
#define PduRConf_PduRDestPdu_AnmMsg_VMCU_Backbone2_oBackbone2_d29bb903_Rx_7e99d331_Rx 19
#define PduRConf_PduRDestPdu_AnmMsg_WRCS_CabSubnet_oCabSubnet_dea22ca5_Rx_f9521ac4_Rx 20
#define PduRConf_PduRDestPdu_BBM_BB2_01P_oBackbone2_679bb0c1_Rx_4aacb8db_Rx 21
#define PduRConf_PduRDestPdu_BBM_BB2_02P_oBackbone2_ae84b87e_Rx_72b80dcb_Rx 22
#define PduRConf_PduRDestPdu_BBM_BB2_06P_oBackbone2_df0ea254_Rx_a833036d_Rx 23
#define PduRConf_PduRDestPdu_CCFWtoCIOM_L4_oLIN03_65063ac5_Rx_c27f66fb_Rx 24
#define PduRConf_PduRDestPdu_CCM_Cab_01P_oCabSubnet_d6dd7ea3_Rx_191cbf98_Rx 25
#define PduRConf_PduRDestPdu_CCM_Cab_04P_oCabSubnet_568d6123_Rx_24a721a5_Rx 26
#define PduRConf_PduRDestPdu_CCM_Cab_06P_oCabSubnet_6e486c36_Rx_d0453951_Rx 27
#define PduRConf_PduRDestPdu_CCM_Cab_07P_oCabSubnet_9f92699c_Rx_76f8d1a5_Rx 28
#define PduRConf_PduRDestPdu_CCM_Cab_08P_oCabSubnet_c4134f5d_Rx_f641b15a_Rx 29
#define PduRConf_PduRDestPdu_CCVS_X_VMCU_oBackbone1J1939_dd344e88_Rx_2b017bd1_Rx 30
#define PduRConf_PduRDestPdu_CVW_X_EBS_oBackbone1J1939_7745bc8f_Rx_41192726_Rx 31
#define PduRConf_PduRDestPdu_DACU_BB2_02P_oBackbone2_a741c3bf_Rx_da0bb296_Rx 32
#define PduRConf_PduRDestPdu_DDM_Sec_01P_oSecuritySubnet_d2cc7529_Rx_68f2dfe0_Rx 33
#define PduRConf_PduRDestPdu_DLFWtoCIOM_L4_oLIN03_66a36f0d_Rx_a0a38a40_Rx 34
#define PduRConf_PduRDestPdu_DebugCtrl1_SCIM_BB2_oBackbone2_c4c282ac_Rx_9698b879_Rx 35
#define PduRConf_PduRDestPdu_DebugCtrl2_SCIM_BB2_oBackbone2_ee7e3224_Rx_28df1206_Rx 36
#define PduRConf_PduRDestPdu_DebugCtrl3_SCIM_BB2_oBackbone2_413aa063_Rx_5f913e39_Rx 37
#define PduRConf_PduRDestPdu_DebugCtrl4_SCIM_BB2_oBackbone2_bb075334_Rx_b399288b_Rx 38
#define PduRConf_PduRDestPdu_DebugCtrl5_SCIM_BB2_oBackbone2_1443c173_Rx_6c01495b_Rx 39
#define PduRConf_PduRDestPdu_DebugCtrl6_SCIM_BB2_oBackbone2_3eff71fb_Rx_d9967bb3_Rx 40
#define PduRConf_PduRDestPdu_DebugCtrl7_SCIM_BB2_oBackbone2_91bbe3bc_Rx_d02c5230_Rx 41
#define PduRConf_PduRDestPdu_DebugCtrl8_SCIM_BB2_oBackbone2_11f59114_Rx_040ccb6e_Rx 42
#define PduRConf_PduRDestPdu_DebugCtrl9_SCIM_BB2_oBackbone2_beb10353_Rx_0afce3dd_Rx 43
#define PduRConf_PduRDestPdu_DiagFaultStat_Alarm_Sec_oSecuritySubnet_c6873827_Rx_0a2f5e94_Rx 44
#define PduRConf_PduRDestPdu_DiagFaultStat_CCM_Cab_oCabSubnet_1ee92cda_Rx_b10ab994_Rx 45
#define PduRConf_PduRDestPdu_DiagFaultStat_DDM_Sec_oSecuritySubnet_279347f5_Rx_b27c64ee_Rx 46
#define PduRConf_PduRDestPdu_DiagFaultStat_LECM_Cab_oCabSubnet_3cdbae0b_Rx_375b9c49_Rx 47
#define PduRConf_PduRDestPdu_DiagFaultStat_PDM_Sec_oSecuritySubnet_7823c535_Rx_2c5c2c9c_Rx 48
#define PduRConf_PduRDestPdu_DiagFaultStat_SRS_Cab_oCabSubnet_418c5993_Rx_7803fcd2_Rx 49
#define PduRConf_PduRDestPdu_DiagFaultStat_WRCS_Cab_oCabSubnet_6c860dc8_Rx_ca104489_Rx 50
#define PduRConf_PduRDestPdu_EBC1_X_EBS_oBackbone1J1939_0f6d94fb_Rx_04f9144d_Rx 51
#define PduRConf_PduRDestPdu_EBC2_X_EBS_oBackbone1J1939_b4e68954_Rx_c5f96cc3_Rx 52
#define PduRConf_PduRDestPdu_EBC5_X_EBS_oBackbone1J1939_71f8bf2e_Rx_be9b2da1_Rx 53
#define PduRConf_PduRDestPdu_EBS_BB1_01P_oBackbone1J1939_06650efd_Rx_3c266640_Rx 54
#define PduRConf_PduRDestPdu_EBS_BB1_02P_oBackbone1J1939_3e5e858e_Rx_df13874e_Rx 55
#define PduRConf_PduRDestPdu_EBS_BB1_05P_oBackbone1J1939_ef101786_Rx_50cf6a28_Rx 56
#define PduRConf_PduRDestPdu_EEC1_X_EMS_oBackbone1J1939_cdd2f3bf_Rx_25a1aa73_Rx 57
#define PduRConf_PduRDestPdu_EEC2_X_EMS_oBackbone1J1939_7659ee10_Rx_995d31c8_Rx 58
#define PduRConf_PduRDestPdu_ELCP1toCIOM_L4_oLIN03_be1ef9f9_Rx_b63a736f_Rx 59
#define PduRConf_PduRDestPdu_ELCP2toCIOM_L4_oLIN03_7701f146_Rx_97ced8ff_Rx 60
#define PduRConf_PduRDestPdu_EMS_BB2_01P_oBackbone2_440afce7_Rx_ab107697_Rx 61
#define PduRConf_PduRDestPdu_EMS_BB2_04P_oBackbone2_c45ae367_Rx_ace186fb_Rx 62
#define PduRConf_PduRDestPdu_EMS_BB2_05P_oBackbone2_3580e6cd_Rx_8f53c5a4_Rx 63
#define PduRConf_PduRDestPdu_EMS_BB2_06P_oBackbone2_fc9fee72_Rx_2a8059b0_Rx 64
#define PduRConf_PduRDestPdu_EMS_BB2_08P_oBackbone2_56c4cd19_Rx_d383fbe5_Rx 65
#define PduRConf_PduRDestPdu_EMS_BB2_13P_oBackbone2_4a3d6101_Rx_4530d6dc_Rx 66
#define PduRConf_PduRDestPdu_ERC1_X_EMSRet_oBackbone1J1939_63f95975_Rx_42e414fe_Rx 67
#define PduRConf_PduRDestPdu_ERC1_X_RECU_oBackbone1J1939_d09c878a_Rx_740336e5_Rx 68
#define PduRConf_PduRDestPdu_ET1_X_EMS_oBackbone1J1939_2b7be601_Rx_89ee5878_Rx 69
#define PduRConf_PduRDestPdu_FMS1_X_HMIIOM_oBackbone1J1939_496422f1_Rx_5c4fad53_Rx 70
#define PduRConf_PduRDestPdu_FSP1_Frame_L1_oLIN00_7041c142_Rx_e89970ce_Rx 71
#define PduRConf_PduRDestPdu_FSP1_Frame_L2_oLIN01_dfcb5978_Rx_8621b565_Rx 72
#define PduRConf_PduRDestPdu_FSP1_Frame_L3_oLIN02_f47956e4_Rx_65a06375_Rx 73
#define PduRConf_PduRDestPdu_FSP1_Frame_L4_oLIN03_5baf6f4d_Rx_7272736c_Rx 74
#define PduRConf_PduRDestPdu_FSP1_Frame_L5_oLIN04_a341e84f_Rx_1d41a162_Rx 75
#define PduRConf_PduRDestPdu_FSP1_SwitchDetResp_L1_oLIN00_a6b440c8_Rx_7615762b_Rx 76
#define PduRConf_PduRDestPdu_FSP1_SwitchDetResp_L2_oLIN01_093ed8f2_Rx_d86f19ae_Rx 77
#define PduRConf_PduRDestPdu_FSP1_SwitchDetResp_L3_oLIN02_228cd76e_Rx_7bebd14f_Rx 78
#define PduRConf_PduRDestPdu_FSP1_SwitchDetResp_L4_oLIN03_8d5aeec7_Rx_d430c522_Rx 79
#define PduRConf_PduRDestPdu_FSP1_SwitchDetResp_L5_oLIN04_75b469c5_Rx_c187c3bc_Rx 80
#define PduRConf_PduRDestPdu_FSP2_Frame_L1_oLIN00_b95ec9fd_Rx_3e9ce6c9_Rx 81
#define PduRConf_PduRDestPdu_FSP2_Frame_L2_oLIN01_16d451c7_Rx_1d5f459f_Rx 82
#define PduRConf_PduRDestPdu_FSP2_Frame_L3_oLIN02_3d665e5b_Rx_e2611c34_Rx 83
#define PduRConf_PduRDestPdu_FSP2_SwitchDetResp_L1_oLIN00_8c08f040_Rx_807c58f3_Rx 84
#define PduRConf_PduRDestPdu_FSP2_SwitchDetResp_L2_oLIN01_2382687a_Rx_7877d56d_Rx 85
#define PduRConf_PduRDestPdu_FSP2_SwitchDetResp_L3_oLIN02_083067e6_Rx_25794016_Rx 86
#define PduRConf_PduRDestPdu_FSP3_Frame_L2_oLIN01_e70e546d_Rx_9649cb45_Rx 87
#define PduRConf_PduRDestPdu_FSP3_SwitchDetResp_L2_oLIN01_8cc6fa3d_Rx_1d7b2b95_Rx 88
#define PduRConf_PduRDestPdu_FSP4_Frame_L2_oLIN01_5f9b46f8_Rx_be569886_Rx 89
#define PduRConf_PduRDestPdu_FSP4_SwitchDetResp_L2_oLIN01_76fb096a_Rx_21916aa6_Rx 90
#define PduRConf_PduRDestPdu_HMIIOM_BB2_01P_oBackbone2_0a8179ad_Rx_fd64c8e1_Rx 91
#define PduRConf_PduRDestPdu_HMIIOM_BB2_03P_oBackbone2_324474b8_Rx_72f29192_Rx 92
#define PduRConf_PduRDestPdu_HMIIOM_BB2_07P_oBackbone2_43ce6e92_Rx_81d2b46b_Rx 93
#define PduRConf_PduRDestPdu_HMIIOM_BB2_08P_oBackbone2_184f4853_Rx_284127f9_Rx 94
#define PduRConf_PduRDestPdu_HMIIOM_BB2_09P_oBackbone2_e9954df9_Rx_ebcbfcee_Rx 95
#define PduRConf_PduRDestPdu_HMIIOM_BB2_22P_oBackbone2_ae7b50f4_Rx_a0b53fe4_Rx 96
#define PduRConf_PduRDestPdu_HMIIOM_BB2_23P_oBackbone2_5fa1555e_Rx_a0403af9_Rx 97
#define PduRConf_PduRDestPdu_HMIIOM_BB2_24P_oBackbone2_e73447cb_Rx_950739fa_Rx 98
#define PduRConf_PduRDestPdu_HMIIOM_BB2_33P_oBackbone2_6953c5ad_Rx_ce11e24e_Rx 99
#define PduRConf_PduRDestPdu_HMIIOM_BB2_34S_oBackbone2_c2eeee4b_Rx_f28ba4c2_Rx 100
#define PduRConf_PduRDestPdu_HMIIOM_BB2_38P_oBackbone2_4358f946_Rx_71de9aba_Rx 101
#define PduRConf_PduRDestPdu_HMIIOM_BB2_39P_oBackbone2_b282fcec_Rx_9fa6bf08_Rx 102
#define PduRConf_PduRDestPdu_HRLFC_X_EMS_oBackbone1J1939_04c7cc2f_Rx_1a2533ca_Rx 103
#define PduRConf_PduRDestPdu_IC3_BB2_01S_oBackbone2_ea5b1505_Rx_4f3328b4_Rx 104
#define PduRConf_PduRDestPdu_IC3_BB2_02P_oBackbone2_306c24c9_Rx_deeb321e_Rx 105
#define PduRConf_PduRDestPdu_IC3_BB2_03S_oBackbone2_d29e1810_Rx_1629dc33_Rx 106
#define PduRConf_PduRDestPdu_ILCP1toCIOM_L1_oLIN00_dd00be4f_Rx_c4212af7_Rx 107
#define PduRConf_PduRDestPdu_ILCP2toCIOM_L4_oLIN03_3ff118ff_Rx_8f05a91a_Rx 108
#define PduRConf_PduRDestPdu_LECM1_Cab_02P_oCabSubnet_7b05953d_Rx_bc4ff018_Rx 109
#define PduRConf_PduRDestPdu_LECM1_Cab_03S_oCabSubnet_99f7a9e4_Rx_0a93f264_Rx 110
#define PduRConf_PduRDestPdu_LECM1_Cab_04P_oCabSubnet_324a8202_Rx_406dd4e6_Rx 111
#define PduRConf_PduRDestPdu_LECM1_Cab_05S_oCabSubnet_d0b8bedb_Rx_3319cd54_Rx 112
#define PduRConf_PduRDestPdu_LECM2toCIOM_FR1_L1_oLIN00_5adbc53c_Rx_8cd02125_Rx 113
#define PduRConf_PduRDestPdu_LECM2toCIOM_FR2_L1_oLIN00_a88c28c4_Rx_786aa0cd_Rx 114
#define PduRConf_PduRDestPdu_LECM2toCIOM_FR3_L1_oLIN00_4f918e53_Rx_73b12bc9_Rx 115
#define PduRConf_PduRDestPdu_LECMBasic2CIOM_L1_oLIN00_efdd1437_Rx_7332fc25_Rx 116
#define PduRConf_PduRDestPdu_LFE_X_EMS_oBackbone1J1939_8a36c848_Rx_2d2f558b_Rx 117
#define PduRConf_PduRDestPdu_PDM_Sec_01P_oSecuritySubnet_5921b61c_Rx_9d822126_Rx 118
#define PduRConf_PduRDestPdu_PduRDestPdu_1                            120
#define PduRConf_PduRDestPdu_PduRDestPdu_3                            121
#define PduRConf_PduRDestPdu_RCECStoCIOM_L5_oLIN04_1ccecc00_Rx_5d6ab1b6_Rx 119
#define PduRConf_PduRDestPdu_SRS_Cab_01P_oCabSubnet_81a51028_Rx_b0d30411_Rx 122
#define PduRConf_PduRDestPdu_SRS_Cab_03P_oCabSubnet_b9601d3d_Rx_dc041688_Rx 123
#define PduRConf_PduRDestPdu_SRS_Cab_04P_oCabSubnet_01f50fa8_Rx_3354072d_Rx 124
#define PduRConf_PduRDestPdu_SRS_Cab_05P_oCabSubnet_f02f0a02_Rx_6aca3982_Rx 125
#define PduRConf_PduRDestPdu_SRS_Cab_06P_oCabSubnet_393002bd_Rx_08468df3_Rx 126
#define PduRConf_PduRDestPdu_TCO1_X_TACHO_oBackbone1J1939_3f1c366d_Rx_2b492f9e_Rx 127
#define PduRConf_PduRDestPdu_TCPtoMaster_oLIN02_30042c71_Rx_93b09a1a_Rx 128
#define PduRConf_PduRDestPdu_TD_X_HMIIOM_oBackbone1J1939_5060289e_Rx_69dcd8e6_Rx 129
#define PduRConf_PduRDestPdu_TECU_BB2_01P_oBackbone2_6bd4ec68_Rx_8f00e2b8_Rx 130
#define PduRConf_PduRDestPdu_VDC1_X_EBS_oBackbone1J1939_e351e41c_Rx_ec0493f7_Rx 131
#define PduRConf_PduRDestPdu_VDC2_X_EBS_oBackbone1J1939_58daf9b3_Rx_ee4e9e34_Rx 132
#define PduRConf_PduRDestPdu_VDHR_X_VMCU_oBackbone1J1939_27498c2c_Rx_44121a6e_Rx 133
#define PduRConf_PduRDestPdu_VMCU_BB1_01P_oBackbone1J1939_73c9d3c7_Rx_dae9aba0_Rx 134
#define PduRConf_PduRDestPdu_VMCU_BB1_03P_oBackbone1J1939_eacbdc5a_Rx_62ecd252_Rx 135
#define PduRConf_PduRDestPdu_VMCU_BB2_01P_oBackbone2_dfae7ff9_Rx_aa24f793_Rx 136
#define PduRConf_PduRDestPdu_VMCU_BB2_02P_oBackbone2_16b17746_Rx_1ab720b8_Rx 137
#define PduRConf_PduRDestPdu_VMCU_BB2_03P_oBackbone2_e76b72ec_Rx_c5e31929_Rx 138
#define PduRConf_PduRDestPdu_VMCU_BB2_04P_oBackbone2_5ffe6079_Rx_5090446e_Rx 139
#define PduRConf_PduRDestPdu_VMCU_BB2_05P_oBackbone2_ae2465d3_Rx_20bae62b_Rx 140
#define PduRConf_PduRDestPdu_VMCU_BB2_07P_oBackbone2_96e168c6_Rx_4731dc7b_Rx 141
#define PduRConf_PduRDestPdu_VMCU_BB2_08P_oBackbone2_cd604e07_Rx_e56fc5e2_Rx 142
#define PduRConf_PduRDestPdu_VMCU_BB2_20P_oBackbone2_43915bb5_Rx_96d8e8cf_Rx 143
#define PduRConf_PduRDestPdu_VMCU_BB2_29P_oBackbone2_515f6a4b_Rx_35018803_Rx 144
#define PduRConf_PduRDestPdu_VMCU_BB2_51P_oBackbone2_3296acc6_Rx_14bfec1c_Rx 145
#define PduRConf_PduRDestPdu_VMCU_BB2_52P_oBackbone2_fb89a479_Rx_db8fea9c_Rx 146
#define PduRConf_PduRDestPdu_VMCU_BB2_53P_oBackbone2_0a53a1d3_Rx_2574e9a5_Rx 147
#define PduRConf_PduRDestPdu_VMCU_BB2_54P_oBackbone2_b2c6b346_Rx_a390fe54_Rx 148
#define PduRConf_PduRDestPdu_VMCU_BB2_55P_oBackbone2_431cb6ec_Rx_91dd0e09_Rx 149
#define PduRConf_PduRDestPdu_VMCU_BB2_58P_oBackbone2_20589d38_Rx_7e092eee_Rx 150
#define PduRConf_PduRDestPdu_VMCU_BB2_73P_oBackbone2_67b68035_Rx_e01b8f9b_Rx 151
#define PduRConf_PduRDestPdu_VMCU_BB2_74P_oBackbone2_df2392a0_Rx_fc4f7394_Rx 152
#define PduRConf_PduRDestPdu_VMCU_BB2_80P_oBackbone2_4291fb8a_Rx_1d885997_Rx 153
#define PduRConf_PduRDestPdu_VMCU_BB2_86P_oBackbone2_0bdeecb5_Rx_e1971d41_Rx 154
#define PduRConf_PduRDestPdu_VMCU_BB2_87P_oBackbone2_fa04e91f_Rx_820cfccf_Rx 155
#define PduRConf_PduRDestPdu_VMCU_BB2_88P_oBackbone2_a185cfde_Rx_fb44c2d0_Rx 156
#define PduRConf_PduRDestPdu_VMCU_BB2_89P_oBackbone2_505fca74_Rx_428b6950_Rx 157
#define PduRConf_PduRDestPdu_VMCU_BB2_90P_oBackbone2_74636b79_Rx_5cc978c1_Rx 158
#define PduRConf_PduRDestPdu_VMCU_BB2_91P_oBackbone2_85b96ed3_Rx_360d1e42_Rx 159
#define PduRConf_PduRDestPdu_VMCU_BB2_92P_oBackbone2_4ca6666c_Rx_5e990be0_Rx 160
#define PduRConf_PduRDestPdu_VMCU_BB2_93P_oBackbone2_bd7c63c6_Rx_c9a67c36_Rx 161
#define PduRConf_PduRDestPdu_VMCU_BB2_95P_oBackbone2_f43374f9_Rx_888be3ba_Rx 162
#define PduRConf_PduRDestPdu_VMCU_BB2_96P_oBackbone2_3d2c7c46_Rx_44fdf1f0_Rx 163
#define PduRConf_PduRDestPdu_VMCU_BB2_98P_oBackbone2_97775f2d_Rx_014c614e_Rx 164
#define PduRConf_PduRDestPdu_VMCU_BB2_99P_oBackbone2_66ad5a87_Rx_8c112a34_Rx 165
#define PduRConf_PduRDestPdu_VMCU_BB2_100P_oBackbone2_9f8a2897_Rx_47fe19fd_Rx 166
#define PduRConf_PduRDestPdu_VMCU_BB2_101P_oBackbone2_6e502d3d_Rx_1a3da258_Rx 167
#define PduRConf_PduRDestPdu_VMCU_BB2_102P_oBackbone2_a74f2582_Rx_19e2dee6_Rx 168
#define PduRConf_PduRDestPdu_VMCU_BB2_103P_oBackbone2_56952028_Rx_c4eaf174_Rx 169
#define PduRConf_PduRDestPdu_VMCU_BB2_105P_oBackbone2_1fda3717_Rx_503c628f_Rx 170
#define PduRConf_PduRDestPdu_VMCU_BB2_106P_oBackbone2_d6c53fa8_Rx_c783b7c8_Rx 171
#define PduRConf_PduRDestPdu_VMCU_BB2_107P_oBackbone2_271f3a02_Rx_ed07f0ed_Rx 172
#define PduRConf_PduRDestPdu_VMCU_BB2_109P_oBackbone2_8d441969_Rx_68cc32d5_Rx 173
#define PduRConf_PduRDestPdu_VMCU_BB2_110P_oBackbone2_a978b864_Rx_0c61a87a_Rx 174
#define PduRConf_PduRDestPdu_VMCU_BB2_111P_oBackbone2_58a2bdce_Rx_e6c93928_Rx 175
#define PduRConf_PduRDestPdu_VMCU_BB2_119P_oBackbone2_bbb6899a_Rx_42c2ab6b_Rx 176
#define PduRConf_PduRDestPdu_VP232_X_ERAU_oFMSNet_67abd5b0_Rx_c6e87d5c_Rx 177
#define PduRConf_PduRDestPdu_WRCS_Cab_01P_oCabSubnet_76b95594_Rx_098a7866_Rx 178
#define PduRConf_PduRDestPdu_WRCS_Cab_02P_oCabSubnet_bfa65d2b_Rx_3253ad4f_Rx 179
#define PduRConf_PduRDestPdu_WRCS_Cab_03P_oCabSubnet_4e7c5881_Rx_182e241a_Rx 180
/**\} */

/**
 * \defgroup PduRHandleIdsIfRxSrc Handle IDs of handle space IfRxSrc.
 * \brief Communication interface Rx source PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0a2f5e94                       51
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0a3da473                       18
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0a93f264                       117
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0afce3dd                       50
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0c61a87a                       181
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1                              126
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1a3da258                       174
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1a2533ca                       110
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1ab720b8                       144
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1d5f459f                       89
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1d7b2b95                       95
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1d41a162                       82
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1d885997                       160
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1dcb13ac                       33
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2a8059b0                       71
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2b017bd1                       30
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2b492f9e                       134
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2c5c2c9c                       55
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2d2f558b                       124
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3                              127
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3c266640                       61
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3e9ce6c9                       88
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4a41b928                       7
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4aacb8db                       21
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4f3328b4                       111
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5c4fad53                       77
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5cc978c1                       165
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5d6ab1b6                       128
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5dd96628                       31
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5e990be0                       167
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5f913e39                       44
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6aca3982                       132
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6c24f169                       12
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6c01495b                       46
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7bebd14f                       85
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7df464da                       32
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7e99d331                       19
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7e092eee                       157
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8a94d610                       35
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8c112a34                       172
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8cd02125                       120
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8f00e2b8                       137
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8f05a91a                       115
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8f53c5a4                       70
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9d822126                       125
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9fa6bf08                       109
#define PduRConf_PduRSrcPdu_PduRSrcPdu_00ee91b2                       2
#define PduRConf_PduRSrcPdu_PduRSrcPdu_04f9144d                       58
#define PduRConf_PduRSrcPdu_PduRSrcPdu_06ff8b63                       9
#define PduRConf_PduRSrcPdu_PduRSrcPdu_14bfec1c                       152
#define PduRConf_PduRSrcPdu_PduRSrcPdu_19e2dee6                       175
#define PduRConf_PduRSrcPdu_PduRSrcPdu_20bae62b                       147
#define PduRConf_PduRSrcPdu_PduRSrcPdu_24a721a5                       26
#define PduRConf_PduRSrcPdu_PduRSrcPdu_25a1aa73                       64
#define PduRConf_PduRSrcPdu_PduRSrcPdu_28df1206                       43
#define PduRConf_PduRSrcPdu_PduRSrcPdu_42c2ab6b                       183
#define PduRConf_PduRSrcPdu_PduRSrcPdu_42e414fe                       74
#define PduRConf_PduRSrcPdu_PduRSrcPdu_44fdf1f0                       170
#define PduRConf_PduRSrcPdu_PduRSrcPdu_47fe19fd                       173
#define PduRConf_PduRSrcPdu_PduRSrcPdu_50cf6a28                       63
#define PduRConf_PduRSrcPdu_PduRSrcPdu_52e2e014                       10
#define PduRConf_PduRSrcPdu_PduRSrcPdu_58f52ce6                       3
#define PduRConf_PduRSrcPdu_PduRSrcPdu_59c455d2                       4
#define PduRConf_PduRSrcPdu_PduRSrcPdu_62ecd252                       142
#define PduRConf_PduRSrcPdu_PduRSrcPdu_65a06375                       80
#define PduRConf_PduRSrcPdu_PduRSrcPdu_66b8580e                       1
#define PduRConf_PduRSrcPdu_PduRSrcPdu_68cc32d5                       180
#define PduRConf_PduRSrcPdu_PduRSrcPdu_68f2dfe0                       40
#define PduRConf_PduRSrcPdu_PduRSrcPdu_69dcd8e6                       136
#define PduRConf_PduRSrcPdu_PduRSrcPdu_71de9aba                       108
#define PduRConf_PduRSrcPdu_PduRSrcPdu_72b80dcb                       22
#define PduRConf_PduRSrcPdu_PduRSrcPdu_72f29192                       99
#define PduRConf_PduRSrcPdu_PduRSrcPdu_73b12bc9                       122
#define PduRConf_PduRSrcPdu_PduRSrcPdu_76f8d1a5                       28
#define PduRConf_PduRSrcPdu_PduRSrcPdu_81d2b46b                       100
#define PduRConf_PduRSrcPdu_PduRSrcPdu_89ee5878                       76
#define PduRConf_PduRSrcPdu_PduRSrcPdu_91dd0e09                       156
#define PduRConf_PduRSrcPdu_PduRSrcPdu_93b09a1a                       135
#define PduRConf_PduRSrcPdu_PduRSrcPdu_96d8e8cf                       150
#define PduRConf_PduRSrcPdu_PduRSrcPdu_97ced8ff                       67
#define PduRConf_PduRSrcPdu_PduRSrcPdu_014c614e                       171
#define PduRConf_PduRSrcPdu_PduRSrcPdu_040ccb6e                       49
#define PduRConf_PduRSrcPdu_PduRSrcPdu_098a7866                       185
#define PduRConf_PduRSrcPdu_PduRSrcPdu_182e241a                       187
#define PduRConf_PduRSrcPdu_PduRSrcPdu_191cbf98                       25
#define PduRConf_PduRSrcPdu_PduRSrcPdu_360d1e42                       166
#define PduRConf_PduRSrcPdu_PduRSrcPdu_375b9c49                       54
#define PduRConf_PduRSrcPdu_PduRSrcPdu_406dd4e6                       118
#define PduRConf_PduRSrcPdu_PduRSrcPdu_428b6950                       164
#define PduRConf_PduRSrcPdu_PduRSrcPdu_503c628f                       177
#define PduRConf_PduRSrcPdu_PduRSrcPdu_786aa0cd                       121
#define PduRConf_PduRSrcPdu_PduRSrcPdu_807c58f3                       91
#define PduRConf_PduRSrcPdu_PduRSrcPdu_820cfccf                       162
#define PduRConf_PduRSrcPdu_PduRSrcPdu_888be3ba                       169
#define PduRConf_PduRSrcPdu_PduRSrcPdu_896e3989                       36
#define PduRConf_PduRSrcPdu_PduRSrcPdu_995d31c8                       65
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1629dc33                       113
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2574e9a5                       154
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3253ad4f                       186
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3319cd54                       119
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4530d6dc                       73
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4731dc7b                       148
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7332fc25                       123
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7803fcd2                       56
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7877d56d                       92
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7995df46                       14
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8621b565                       79
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9649cb45                       94
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9698b879                       42
#define PduRConf_PduRSrcPdu_PduRSrcPdu_08468df3                       133
#define PduRConf_PduRSrcPdu_PduRSrcPdu_21916aa6                       97
#define PduRConf_PduRSrcPdu_PduRSrcPdu_44121a6e                       140
#define PduRConf_PduRSrcPdu_PduRSrcPdu_90682d55                       13
#define PduRConf_PduRSrcPdu_PduRSrcPdu_93860a26                       15
#define PduRConf_PduRSrcPdu_PduRSrcPdu_284127f9                       101
#define PduRConf_PduRSrcPdu_PduRSrcPdu_740336e5                       75
#define PduRConf_PduRSrcPdu_PduRSrcPdu_824648ca                       6
#define PduRConf_PduRSrcPdu_PduRSrcPdu_950739fa                       105
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3354072d                       131
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5090446e                       146
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7272736c                       81
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7615762b                       83
#define PduRConf_PduRSrcPdu_PduRSrcPdu_25794016                       93
#define PduRConf_PduRSrcPdu_PduRSrcPdu_35018803                       151
#define PduRConf_PduRSrcPdu_PduRSrcPdu_41192726                       38
#define PduRConf_PduRSrcPdu_PduRSrcPdu_42489524                       11
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a0a38a40                       41
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a0b53fe4                       103
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a390fe54                       155
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a0403af9                       104
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a833036d                       23
#define PduRConf_PduRSrcPdu_PduRSrcPdu_aa24f793                       143
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ab107697                       68
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ace186fb                       69
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b0d30411                       129
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b4c75839                       17
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b10ab994                       52
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b27c64ee                       53
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b63a736f                       66
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b399288b                       45
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bb6c3932                       0
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bc4ff018                       116
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bd5e212b                       8
#define PduRConf_PduRSrcPdu_PduRSrcPdu_be9b2da1                       60
#define PduRConf_PduRSrcPdu_PduRSrcPdu_be569886                       96
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c2f29ed3                       16
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c4eaf174                       176
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c5e31929                       145
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c5f96cc3                       59
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c6e87d5c                       184
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c9a67c36                       168
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c27f66fb                       24
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c187c3bc                       87
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c783b7c8                       178
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c4212af7                       114
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ca104489                       57
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ce11e24e                       106
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ce15f821                       34
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d02c5230                       48
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d17a9913                       37
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d86f19ae                       84
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d383fbe5                       72
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d430c522                       86
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d9967bb3                       47
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d0453951                       27
#define PduRConf_PduRSrcPdu_PduRSrcPdu_da0bb296                       39
#define PduRConf_PduRSrcPdu_PduRSrcPdu_dae9aba0                       141
#define PduRConf_PduRSrcPdu_PduRSrcPdu_dafcbadc                       5
#define PduRConf_PduRSrcPdu_PduRSrcPdu_db8fea9c                       153
#define PduRConf_PduRSrcPdu_PduRSrcPdu_dc041688                       130
#define PduRConf_PduRSrcPdu_PduRSrcPdu_deeb321e                       112
#define PduRConf_PduRSrcPdu_PduRSrcPdu_df13874e                       62
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e6c93928                       182
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e01b8f9b                       158
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e56fc5e2                       149
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e1971d41                       161
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e2611c34                       90
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e89970ce                       78
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ebcbfcee                       102
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ec0493f7                       138
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ed07f0ed                       179
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ee4e9e34                       139
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f28ba4c2                       107
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f641b15a                       29
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f9521ac4                       20
#define PduRConf_PduRSrcPdu_PduRSrcPdu_fb44c2d0                       163
#define PduRConf_PduRSrcPdu_PduRSrcPdu_fc4f7394                       159
#define PduRConf_PduRSrcPdu_PduRSrcPdu_fd64c8e1                       98
/**\} */

/**
 * \defgroup PduRHandleIdsIfTpTxSrc Handle IDs of handle space IfTpTxSrc.
 * \brief Communication interface and transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu                                173
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0a421c29                       26
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0af615bd                       50
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0b03aa0d                       129
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0bb1cb67                       16
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0c1b703d                       42
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0f0671d5                       24
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1afac4d5                       74
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1c80e599                       73
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1f9a8949                       80
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2                              174
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2a7710f3                       110
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2b407fd5                       72
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2bd9ef52                       158
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2bda7b06                       134
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2c4f8116                       41
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2ce36745                       91
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2e7a3026                       139
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2f32e214                       62
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3b966455                       84
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3cfadc61                       98
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3d78f7a3                       68
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3e38f0d7                       114
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3ec0669e                       125
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3f422fc3                       130
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3fb3dd7e                       88
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4a8c70b8                       78
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4e85369a                       153
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5aa77b20                       95
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5bb7f426                       7
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5ca24c3c                       101
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5fe91aff                       86
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6a8e199b                       71
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6bd99b39                       57
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6ca67470                       64
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6d3fc1f8                       154
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7a80252e                       20
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7ce1187f                       111
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7f47f3d8                       119
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8ca60034                       100
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8fec9c64                       162
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9d0a2dde                       34
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9de0f43a                       89
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9f126e32                       43
#define PduRConf_PduRSrcPdu_PduRSrcPdu_01acc4de                       141
#define PduRConf_PduRSrcPdu_PduRSrcPdu_04f9241b                       65
#define PduRConf_PduRSrcPdu_PduRSrcPdu_05d2c983                       38
#define PduRConf_PduRSrcPdu_PduRSrcPdu_06f4c24e                       58
#define PduRConf_PduRSrcPdu_PduRSrcPdu_07bbf63b                       14
#define PduRConf_PduRSrcPdu_PduRSrcPdu_09be0918                       175
#define PduRConf_PduRSrcPdu_PduRSrcPdu_12ac6f81                       15
#define PduRConf_PduRSrcPdu_PduRSrcPdu_13dbaa10                       117
#define PduRConf_PduRSrcPdu_PduRSrcPdu_14f3876f                       127
#define PduRConf_PduRSrcPdu_PduRSrcPdu_16fa9ce7                       104
#define PduRConf_PduRSrcPdu_PduRSrcPdu_18bb5a35                       179
#define PduRConf_PduRSrcPdu_PduRSrcPdu_18f55cec                       11
#define PduRConf_PduRSrcPdu_PduRSrcPdu_23a300e9                       51
#define PduRConf_PduRSrcPdu_PduRSrcPdu_25b1c7e0                       92
#define PduRConf_PduRSrcPdu_PduRSrcPdu_25d1c4f5                       87
#define PduRConf_PduRSrcPdu_PduRSrcPdu_29cdd88d                       61
#define PduRConf_PduRSrcPdu_PduRSrcPdu_34c2207b                       109
#define PduRConf_PduRSrcPdu_PduRSrcPdu_42d23fef                       27
#define PduRConf_PduRSrcPdu_PduRSrcPdu_44e5925a                       28
#define PduRConf_PduRSrcPdu_PduRSrcPdu_47b56dbe                       163
#define PduRConf_PduRSrcPdu_PduRSrcPdu_52be8b22                       10
#define PduRConf_PduRSrcPdu_PduRSrcPdu_59fd94e4                       128
#define PduRConf_PduRSrcPdu_PduRSrcPdu_72be8d01                       96
#define PduRConf_PduRSrcPdu_PduRSrcPdu_96efa9e2                       124
#define PduRConf_PduRSrcPdu_PduRSrcPdu_017c679d                       75
#define PduRConf_PduRSrcPdu_PduRSrcPdu_061b4d4d                       136
#define PduRConf_PduRSrcPdu_PduRSrcPdu_100ee8e0                       60
#define PduRConf_PduRSrcPdu_PduRSrcPdu_146f13b5                       4
#define PduRConf_PduRSrcPdu_PduRSrcPdu_253fe2a1                       116
#define PduRConf_PduRSrcPdu_PduRSrcPdu_289e8325                       2
#define PduRConf_PduRSrcPdu_PduRSrcPdu_298e7c8d                       112
#define PduRConf_PduRSrcPdu_PduRSrcPdu_415f4d5f                       147
#define PduRConf_PduRSrcPdu_PduRSrcPdu_509ea690                       169
#define PduRConf_PduRSrcPdu_PduRSrcPdu_589f7780                       180
#define PduRConf_PduRSrcPdu_PduRSrcPdu_787b56aa                       66
#define PduRConf_PduRSrcPdu_PduRSrcPdu_811e958b                       160
#define PduRConf_PduRSrcPdu_PduRSrcPdu_918dff20                       67
#define PduRConf_PduRSrcPdu_PduRSrcPdu_927d3065                       166
#define PduRConf_PduRSrcPdu_PduRSrcPdu_942ead34                       0
#define PduRConf_PduRSrcPdu_PduRSrcPdu_946b283b                       123
#define PduRConf_PduRSrcPdu_PduRSrcPdu_973cde10                       22
#define PduRConf_PduRSrcPdu_PduRSrcPdu_991b9435                       155
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0460a299                       181
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0709a8dd                       115
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1345fc62                       29
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2428ced7                       146
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3835a861                       8
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3944ee2e                       106
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4205e179                       19
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4290d944                       149
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5840d625                       31
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8888e39c                       133
#define PduRConf_PduRSrcPdu_PduRSrcPdu_03636d0a                       172
#define PduRConf_PduRSrcPdu_PduRSrcPdu_27718bf6                       113
#define PduRConf_PduRSrcPdu_PduRSrcPdu_42404c3c                       144
#define PduRConf_PduRSrcPdu_PduRSrcPdu_58768f62                       18
#define PduRConf_PduRSrcPdu_PduRSrcPdu_60849a09                       12
#define PduRConf_PduRSrcPdu_PduRSrcPdu_77877d8c                       121
#define PduRConf_PduRSrcPdu_PduRSrcPdu_78074b0a                       21
#define PduRConf_PduRSrcPdu_PduRSrcPdu_80304e06                       49
#define PduRConf_PduRSrcPdu_PduRSrcPdu_80862b22                       35
#define PduRConf_PduRSrcPdu_PduRSrcPdu_86064c1e                       9
#define PduRConf_PduRSrcPdu_PduRSrcPdu_044119da                       120
#define PduRConf_PduRSrcPdu_PduRSrcPdu_118133ce                       177
#define PduRConf_PduRSrcPdu_PduRSrcPdu_292228a9                       152
#define PduRConf_PduRSrcPdu_PduRSrcPdu_324776e1                       13
#define PduRConf_PduRSrcPdu_PduRSrcPdu_692170b2                       83
#define PduRConf_PduRSrcPdu_PduRSrcPdu_973737d6                       30
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5304476e                       108
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5862727a                       165
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8829348e                       17
#define PduRConf_PduRSrcPdu_PduRSrcPdu_09743343                       94
#define PduRConf_PduRSrcPdu_PduRSrcPdu_83858552                       105
#define PduRConf_PduRSrcPdu_PduRSrcPdu_89789648                       23
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a2b3fcad                       156
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a3a2462e                       178
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a3b679cc                       151
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a3dfff04                       161
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a9b97fd8                       135
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a03b4124                       48
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a28cb0c8                       47
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a24245d0                       164
#define PduRConf_PduRSrcPdu_PduRSrcPdu_aa6f2d0d                       25
#define PduRConf_PduRSrcPdu_PduRSrcPdu_abb677a0                       55
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ac0cad50                       93
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ad4a6c2f                       1
#define PduRConf_PduRSrcPdu_PduRSrcPdu_aedbbc7e                       132
#define PduRConf_PduRSrcPdu_PduRSrcPdu_af613944                       103
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b2e0da7e                       97
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b3a74504                       99
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b5ff5295                       3
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b58a23ae                       142
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b359c6a9                       69
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b7330ab5                       32
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ba427217                       6
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bc8ff73d                       170
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bc75d45f                       37
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bcbb5e6c                       52
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bcf724a3                       90
#define PduRConf_PduRSrcPdu_PduRSrcPdu_be3fbdb6                       143
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bfa5c35c                       53
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c1ab151b                       126
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c2aa600c                       70
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c8bc4c29                       145
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c21cbda2                       171
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c731ca07                       140
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c0583aba                       79
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ca0ceb23                       59
#define PduRConf_PduRSrcPdu_PduRSrcPdu_cad5212d                       81
#define PduRConf_PduRSrcPdu_PduRSrcPdu_cb9cbc04                       131
#define PduRConf_PduRSrcPdu_PduRSrcPdu_cd66d79f                       36
#define PduRConf_PduRSrcPdu_PduRSrcPdu_cdef0f36                       40
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ce8b3ea0                       46
#define PduRConf_PduRSrcPdu_PduRSrcPdu_cff258d1                       82
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d25a31a4                       150
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d71ba6b1                       63
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d6070b6b                       148
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d8682d70                       5
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d58909f4                       168
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d5491018                       137
#define PduRConf_PduRSrcPdu_PduRSrcPdu_dbfd746c                       76
#define PduRConf_PduRSrcPdu_PduRSrcPdu_dde2c294                       56
#define PduRConf_PduRSrcPdu_PduRSrcPdu_df90de79                       77
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e1be2636                       118
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e38dbced                       167
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e612e27f                       54
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e908cc2f                       176
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e918ef53                       122
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e64023a1                       102
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e97535e6                       138
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ea683547                       107
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f1d29dcd                       45
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f40bc261                       85
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f008f462                       159
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f0799c66                       39
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f4695c57                       44
#define PduRConf_PduRSrcPdu_PduRSrcPdu_fcfec5f9                       33
#define PduRConf_PduRSrcPdu_PduRSrcPdu_fd379ced                       157
/**\} */

/**
 * \defgroup PduRHandleIdsIfTxDest Handle IDs of handle space IfTxDest.
 * \brief Communication interface Tx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_AIR1_X_CIOMFMS_oFMSNet_94b967fe_Tx       0
#define PduRConf_PduRDestPdu_AMB_X_CIOMFMS_oFMSNet_7d255a73_Tx        1
#define PduRConf_PduRDestPdu_AT1T1I1_X_CIOMFMS_oFMSNet_a4250889_Tx    2
#define PduRConf_PduRDestPdu_AnmMsg_CIOM_Backbone2_oBackbone2_cf5ab87f_Tx 5
#define PduRConf_PduRDestPdu_AnmMsg_CIOM_CabSubnet_oCabSubnet_05b67d33_Tx 6
#define PduRConf_PduRDestPdu_AnmMsg_CIOM_SecuritySubnet_oSecuritySubnet_e244ca05_Tx 7
#define PduRConf_PduRDestPdu_Backlight_FuncInd_L1_oLIN00_841aab0e_Tx  8
#define PduRConf_PduRDestPdu_Backlight_FuncInd_L2_oLIN01_2b903334_Tx  9
#define PduRConf_PduRDestPdu_Backlight_FuncInd_L3_oLIN02_00223ca8_Tx  10
#define PduRConf_PduRDestPdu_Backlight_FuncInd_L4_oLIN03_aff40501_Tx  11
#define PduRConf_PduRDestPdu_Backlight_FuncInd_L5_oLIN04_571a8203_Tx  12
#define PduRConf_PduRDestPdu_CCVS_X_CIOMFMS_oFMSNet_559ff1c7_Tx       13
#define PduRConf_PduRDestPdu_CIOM_3da9a113_Tx                         111
#define PduRConf_PduRDestPdu_CIOM_8ae1f502_Tx                         108
#define PduRConf_PduRDestPdu_CIOM_03a719b0_Tx                         113
#define PduRConf_PduRDestPdu_CIOM_838783a7_Tx                         109
#define PduRConf_PduRDestPdu_CIOM_91559201_Tx                         106
#define PduRConf_PduRDestPdu_CIOM_BB1_01P_oBackbone1J1939_6c85c28e_Tx 14
#define PduRConf_PduRDestPdu_CIOM_BB2_01P_oBackbone2_12f7ffb9_Tx      15
#define PduRConf_PduRDestPdu_CIOM_BB2_02P_oBackbone2_dbe8f706_Tx      16
#define PduRConf_PduRDestPdu_CIOM_BB2_03P_oBackbone2_2a32f2ac_Tx      17
#define PduRConf_PduRDestPdu_CIOM_BB2_04P_oBackbone2_92a7e039_Tx      18
#define PduRConf_PduRDestPdu_CIOM_BB2_05P_oBackbone2_637de593_Tx      19
#define PduRConf_PduRDestPdu_CIOM_BB2_06P_oBackbone2_aa62ed2c_Tx      20
#define PduRConf_PduRDestPdu_CIOM_BB2_07P_oBackbone2_5bb8e886_Tx      21
#define PduRConf_PduRDestPdu_CIOM_BB2_10P_oBackbone2_d5df6ae0_Tx      22
#define PduRConf_PduRDestPdu_CIOM_BB2_11P_oBackbone2_24056f4a_Tx      23
#define PduRConf_PduRDestPdu_CIOM_BB2_20S_oBackbone2_9de0e286_Tx      24
#define PduRConf_PduRDestPdu_CIOM_BB2_21S_oBackbone2_6c3ae72c_Tx      25
#define PduRConf_PduRDestPdu_CIOM_BB2_25P_oBackbone2_0e98c475_Tx      26
#define PduRConf_PduRDestPdu_CIOM_BB2_26S_oBackbone2_d4aff5b9_Tx      27
#define PduRConf_PduRDestPdu_CIOM_BB2_27S_oBackbone2_2575f013_Tx      28
#define PduRConf_PduRDestPdu_CIOM_BB2_28P_oBackbone2_6ddcefa1_Tx      29
#define PduRConf_PduRDestPdu_CIOM_BB2_29P_oBackbone2_9c06ea0b_Tx      30
#define PduRConf_PduRDestPdu_CIOM_BB2_30P_oBackbone2_b83a4b06_Tx      31
#define PduRConf_PduRDestPdu_CIOM_BB2_31S_oBackbone2_5ac877df_Tx      32
#define PduRConf_PduRDestPdu_CIOM_Cab_01P_oCabSubnet_e4e2333d_Tx      33
#define PduRConf_PduRDestPdu_CIOM_Cab_02P_oCabSubnet_2dfd3b82_Tx      34
#define PduRConf_PduRDestPdu_CIOM_Cab_03P_oCabSubnet_dc273e28_Tx      35
#define PduRConf_PduRDestPdu_CIOM_Cab_06P_oCabSubnet_5c7721a8_Tx      36
#define PduRConf_PduRDestPdu_CIOM_Cab_07P_oCabSubnet_adad2402_Tx      37
#define PduRConf_PduRDestPdu_CIOM_Cab_08P_oCabSubnet_f62c02c3_Tx      38
#define PduRConf_PduRDestPdu_CIOM_Cab_09P_oCabSubnet_07f60769_Tx      39
#define PduRConf_PduRDestPdu_CIOM_Cab_10P_oCabSubnet_23caa664_Tx      40
#define PduRConf_PduRDestPdu_CIOM_Cab_12P_oCabSubnet_1b0fab71_Tx      41
#define PduRConf_PduRDestPdu_CIOM_Cab_14P_oCabSubnet_5240bc4e_Tx      42
#define PduRConf_PduRDestPdu_CIOM_Cab_15P_oCabSubnet_a39ab9e4_Tx      43
#define PduRConf_PduRDestPdu_CIOM_Cab_16P_oCabSubnet_6a85b15b_Tx      44
#define PduRConf_PduRDestPdu_CIOM_Cab_17P_oCabSubnet_9b5fb4f1_Tx      45
#define PduRConf_PduRDestPdu_CIOM_Cab_18P_oCabSubnet_c0de9230_Tx      46
#define PduRConf_PduRDestPdu_CIOM_Cab_19P_oCabSubnet_3104979a_Tx      47
#define PduRConf_PduRDestPdu_CIOM_Cab_21P_oCabSubnet_890712db_Tx      48
#define PduRConf_PduRDestPdu_CIOM_Cab_22P_oCabSubnet_40181a64_Tx      49
#define PduRConf_PduRDestPdu_CIOM_Cab_23P_oCabSubnet_b1c21fce_Tx      50
#define PduRConf_PduRDestPdu_CIOM_Cab_24P_oCabSubnet_09570d5b_Tx      51
#define PduRConf_PduRDestPdu_CIOM_Cab_26P_oCabSubnet_3192004e_Tx      52
#define PduRConf_PduRDestPdu_CIOM_Cab_27P_oCabSubnet_c04805e4_Tx      53
#define PduRConf_PduRDestPdu_CIOM_Cab_28S_oCabSubnet_88e11a56_Tx      54
#define PduRConf_PduRDestPdu_CIOM_Cab_31P_oCabSubnet_bff58228_Tx      55
#define PduRConf_PduRDestPdu_CIOM_Cab_32P_oCabSubnet_76ea8a97_Tx      56
#define PduRConf_PduRDestPdu_CIOM_Cab_33P_oCabSubnet_87308f3d_Tx      57
#define PduRConf_PduRDestPdu_CIOM_Sec_01P_oSecuritySubnet_703c4de6_Tx 58
#define PduRConf_PduRDestPdu_CIOM_Sec_02P_oSecuritySubnet_4807c695_Tx 59
#define PduRConf_PduRDestPdu_CIOM_Sec_03P_oSecuritySubnet_e93e427b_Tx 60
#define PduRConf_PduRDestPdu_CIOM_Sec_04P_oSecuritySubnet_3870d073_Tx 61
#define PduRConf_PduRDestPdu_CIOM_b67a9f0a_Tx                         112
#define PduRConf_PduRDestPdu_CIOM_f237b6db_Tx                         110
#define PduRConf_PduRDestPdu_CIOMtoSlaves1_L1_oLIN00_09e24f2a_Tx      62
#define PduRConf_PduRDestPdu_CIOMtoSlaves1_L4_oLIN03_220ce125_Tx      63
#define PduRConf_PduRDestPdu_CIOMtoSlaves2_FR1_L1_oLIN00_573c3f76_Tx  64
#define PduRConf_PduRDestPdu_CIOMtoSlaves2_FR2_L1_oLIN00_a56bd28e_Tx  65
#define PduRConf_PduRDestPdu_CIOMtoSlaves2_FR3_L1_oLIN00_42767419_Tx  66
#define PduRConf_PduRDestPdu_CIOMtoSlaves2_L4_oLIN03_d05b0cdd_Tx      67
#define PduRConf_PduRDestPdu_CIOMtoSlaves_L5_oLIN04_251caba0_Tx       68
#define PduRConf_PduRDestPdu_CL_X_CIOMFMS_oFMSNet_5e9df939_Tx         69
#define PduRConf_PduRDestPdu_CVW_X_CIOMFMS_oFMSNet_5a4bdaa1_Tx        70
#define PduRConf_PduRDestPdu_DD_X_CIOMFMS_oFMSNet_c8687b55_Tx         71
#define PduRConf_PduRDestPdu_Debug2_SCIM_BB2_oBackbone2_598c99a4_Tx   72
#define PduRConf_PduRDestPdu_Debug3_SCIM_BB2_oBackbone2_f6c80be3_Tx   73
#define PduRConf_PduRDestPdu_Debug4_SCIM_BB2_oBackbone2_0cf5f8b4_Tx   74
#define PduRConf_PduRDestPdu_Debug5_SCIM_BB2_oBackbone2_a3b16af3_Tx   75
#define PduRConf_PduRDestPdu_Debug6_SCIM_BB2_oBackbone2_890dda7b_Tx   76
#define PduRConf_PduRDestPdu_Debug7_SCIM_BB2_oBackbone2_2649483c_Tx   77
#define PduRConf_PduRDestPdu_Debug8_SCIM_BB2_oBackbone2_a6073a94_Tx   78
#define PduRConf_PduRDestPdu_Debug9_SCIM_BB2_oBackbone2_0943a8d3_Tx   79
#define PduRConf_PduRDestPdu_Debug10_SCIM_BB2_oBackbone2_b0d0056b_Tx  80
#define PduRConf_PduRDestPdu_Debug11_SCIM_BB2_oBackbone2_1f94972c_Tx  81
#define PduRConf_PduRDestPdu_Debug12_SCIM_BB2_oBackbone2_352827a4_Tx  82
#define PduRConf_PduRDestPdu_Debug13_SCIM_BB2_oBackbone2_9a6cb5e3_Tx  83
#define PduRConf_PduRDestPdu_Debug14_SCIM_BB2_oBackbone2_605146b4_Tx  84
#define PduRConf_PduRDestPdu_Debug15_SCIM_BB2_oBackbone2_cf15d4f3_Tx  85
#define PduRConf_PduRDestPdu_Debug16_SCIM_BB2_oBackbone2_e5a9647b_Tx  86
#define PduRConf_PduRDestPdu_Debug17_SCIM_BB2_oBackbone2_4aedf63c_Tx  87
#define PduRConf_PduRDestPdu_Debug18_SCIM_BB2_oBackbone2_caa38494_Tx  88
#define PduRConf_PduRDestPdu_Debug19_SCIM_BB2_oBackbone2_65e716d3_Tx  89
#define PduRConf_PduRDestPdu_Debug20_SCIM_BB2_oBackbone2_5399b2c9_Tx  90
#define PduRConf_PduRDestPdu_Debug21_SCIM_BB2_oBackbone2_fcdd208e_Tx  91
#define PduRConf_PduRDestPdu_Debug22_SCIM_BB2_oBackbone2_d6619006_Tx  92
#define PduRConf_PduRDestPdu_Debug24_SCIM_BB2_oBackbone2_8318f116_Tx  93
#define PduRConf_PduRDestPdu_Debug25_SCIM_BB2_oBackbone2_2c5c6351_Tx  94
#define PduRConf_PduRDestPdu_Debug26_SCIM_BB2_oBackbone2_06e0d3d9_Tx  95
#define PduRConf_PduRDestPdu_Debug27_SCIM_BB2_oBackbone2_a9a4419e_Tx  96
#define PduRConf_PduRDestPdu_Debug28_SCIM_BB2_oBackbone2_29ea3336_Tx  97
#define PduRConf_PduRDestPdu_DiagFaultStat_Alarm_BB2_oBackbone2_8c5e38cc_Tx 98
#define PduRConf_PduRDestPdu_DiagFaultStat_CCM_BB2_oBackbone2_9a44ed2c_Tx 99
#define PduRConf_PduRDestPdu_DiagFaultStat_CIOM_BB2_oBackbone2_e34a7a3f_Tx 100
#define PduRConf_PduRDestPdu_DiagFaultStat_DDM_BB2_oBackbone2_f2c6a79a_Tx 101
#define PduRConf_PduRDestPdu_DiagFaultStat_LECM_BB2_oBackbone2_b8766ffd_Tx 102
#define PduRConf_PduRDestPdu_DiagFaultStat_PDM_BB2_oBackbone2_fea9ad98_Tx 103
#define PduRConf_PduRDestPdu_DiagFaultStat_SRS_BB2_oBackbone2_c5219865_Tx 104
#define PduRConf_PduRDestPdu_DiagFaultStat_WRCS_BB2_oBackbone2_e82bcc3e_Tx 105
#define PduRConf_PduRDestPdu_DiagUUDTRespMsg1_F2_40_BB2_oBackbone2_e836b7de_Tx 107
#define PduRConf_PduRDestPdu_EEC1_X_CIOMFMS_oFMSNet_09cdd7bd_Tx       114
#define PduRConf_PduRDestPdu_EEC2_X_CIOMFMS_oFMSNet_821ee9a4_Tx       115
#define PduRConf_PduRDestPdu_EEC14_X_CIOMFMS_oFMSNet_2007104d_Tx      116
#define PduRConf_PduRDestPdu_ERC1_x_EMSRetFMS_oFMSNet_04fe6f08_Tx     117
#define PduRConf_PduRDestPdu_ERC1_x_RECUFMS_oFMSNet_f10a8a51_Tx       118
#define PduRConf_PduRDestPdu_ET1_X_CIOMFMS_oFMSNet_a8a2ee82_Tx        119
#define PduRConf_PduRDestPdu_FMS1_X_CIOMFMS_oFMSNet_79c218f8_Tx       120
#define PduRConf_PduRDestPdu_FMS_X_CIOMFMS_oFMSNet_c973602f_Tx        121
#define PduRConf_PduRDestPdu_FSP_1_2_Req_L1_oLIN00_bfd0179c_Tx        122
#define PduRConf_PduRDestPdu_FSP_1_2_Req_L2_oLIN01_105a8fa6_Tx        123
#define PduRConf_PduRDestPdu_FSP_1_2_Req_L3_oLIN02_3be8803a_Tx        124
#define PduRConf_PduRDestPdu_FSP_1_2_Req_L4_oLIN03_943eb993_Tx        125
#define PduRConf_PduRDestPdu_FSP_1_2_Req_L5_oLIN04_6cd03e91_Tx        126
#define PduRConf_PduRDestPdu_FSP_3_4_Req_L2_oLIN01_a1ddc883_Tx        127
#define PduRConf_PduRDestPdu_HOURS_X_CIOMFMS_oFMSNet_012e8f51_Tx      128
#define PduRConf_PduRDestPdu_HRLFC_X_CIOMFMS_oFMSNet_7d441e5f_Tx      129
#define PduRConf_PduRDestPdu_LFC_X_CIOMFMS_oFMSNet_94fe6bb5_Tx        130
#define PduRConf_PduRDestPdu_LFE_X_CIOMFMS_oFMSNet_582911c6_Tx        131
#define PduRConf_PduRDestPdu_MastertoTCP_oLIN02_7c7ed3d1_Tx           132
#define PduRConf_PduRDestPdu_PTODE_X_CIOMFMS_oFMSNet_abdf0c74_Tx      133
#define PduRConf_PduRDestPdu_PduRDestPdu                              3
#define PduRConf_PduRDestPdu_PduRDestPdu_2                            4
#define PduRConf_PduRDestPdu_SERV_X_CIOMFMS_oFMSNet_2bbb6097_Tx       134
#define PduRConf_PduRDestPdu_TCO1_X_CIOMFMS_oFMSNet_cdc54e4b_Tx       135
#define PduRConf_PduRDestPdu_VDHR_X_CIOMFMS_oFMSNet_9598589a_Tx       136
#define PduRConf_PduRDestPdu_VP236_X_CIOMFMS_oFMSNet_634950b3_Tx      137
#define PduRConf_PduRDestPdu_VW_X_CIOMFMS_oFMSNet_1c90cc30_Tx         138
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxDest Handle IDs of handle space TpRxDest.
 * \brief Transport protocol Rx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_Alarm_Sec_03S_oSecuritySubnet_4eba2ad4_Rx_304197c1_Rx 0
#define PduRConf_PduRDestPdu_Alarm_Sec_06S_oSecuritySubnet_06f6b741_Rx_eb982057_Rx 1
#define PduRConf_PduRDestPdu_Alarm_Sec_07S_oSecuritySubnet_a7cf33af_Rx_26a1cbb9_Rx 2
#define PduRConf_PduRDestPdu_BBM_BB2_03S_CIOM_oBackbone2_a3c4774b_Rx_bd0d068c_Rx 3
#define PduRConf_PduRDestPdu_CCM_Cab_03P_oCabSubnet_ee1873b6_Rx_8a32f8f6_Rx 4
#define PduRConf_PduRDestPdu_CIOM_85d628ec_Rx_f1553bf5_Rx             44
#define PduRConf_PduRDestPdu_CIOM_d63e5ea1_Rx_446f53c1_Rx             17
#define PduRConf_PduRDestPdu_DDM_Sec_03S_oSecuritySubnet_a887cd16_Rx_fdae10f0_Rx 5
#define PduRConf_PduRDestPdu_DDM_Sec_04S_oSecuritySubnet_79c95f1e_Rx_06bdd5c2_Rx 6
#define PduRConf_PduRDestPdu_DDM_Sec_05S_oSecuritySubnet_d8f0dbf0_Rx_0948f4eb_Rx 7
#define PduRConf_PduRDestPdu_DI_X_TACHO_oBackbone1J1939_6121ec8b_Rx_408ae78e_Rx 8
#define PduRConf_PduRDestPdu_DiagReqMsgIntHMIIOM_40_F3_BB2_oBackbone2_ce0d5f06_Rx_8771577a_Rx 9
#define PduRConf_PduRDestPdu_DiagReqMsgIntTGW2_40_F4_BB2_oBackbone2_0048db9b_Rx_59f7faf1_Rx 10
#define PduRConf_PduRDestPdu_EMS_BB2_09S_oBackbone2_b436f1c0_Rx_7ab1f990_Rx 11
#define PduRConf_PduRDestPdu_EMS_BB2_11S_oBackbone2_61d05567_Rx_ab3d4554_Rx 12
#define PduRConf_PduRDestPdu_HMIIOM_BB2_19P_CIOM_oBackbone2_dafe7cda_Rx_75cfe088_Rx 13
#define PduRConf_PduRDestPdu_HMIIOM_BB2_20S_oBackbone2_85966492_Rx_fed5ac9b_Rx 14
#define PduRConf_PduRDestPdu_HMIIOM_BB2_35S_oBackbone2_3334ebe1_Rx_99763ffd_Rx 15
#define PduRConf_PduRDestPdu_HMIIOM_BB2_36S_oBackbone2_fa2be35e_Rx_270fccd3_Rx 16
#define PduRConf_PduRDestPdu_PDM_Sec_03S_oSecuritySubnet_236a0e23_Rx_c4655c6f_Rx 18
#define PduRConf_PduRDestPdu_PDM_Sec_04S_oSecuritySubnet_f2249c2b_Rx_26b85268_Rx 19
#define PduRConf_PduRDestPdu_PhysDiagReqMsg_40_F2_BB2_oBackbone2_01e49dc9_Rx_d62010ae_Rx 20
#define PduRConf_PduRDestPdu_PropTCO2_X_TACHO_oBackbone1J1939_4169b979_Rx_9d957b7c_Rx 21
#define PduRConf_PduRDestPdu_SlaveResp_CCFW_oLIN03_1d1ae08e_Rx_5b587d0d_Rx 22
#define PduRConf_PduRDestPdu_SlaveResp_DLFW_oLIN03_2782f4b7_Rx_f46eac1f_Rx 23
#define PduRConf_PduRDestPdu_SlaveResp_ELCP1_oLIN03_ecc8397c_Rx_903f7ca8_Rx 24
#define PduRConf_PduRDestPdu_SlaveResp_ELCP2_oLIN03_9a2d0041_Rx_1e24ebac_Rx 25
#define PduRConf_PduRDestPdu_SlaveResp_FSP1_L1_oLIN00_b9fef1a8_Rx_99747a0b_Rx 26
#define PduRConf_PduRDestPdu_SlaveResp_FSP1_L2_oLIN01_16746992_Rx_afe1a735_Rx 27
#define PduRConf_PduRDestPdu_SlaveResp_FSP1_L3_oLIN02_3dc6660e_Rx_55c6efb1_Rx 28
#define PduRConf_PduRDestPdu_SlaveResp_FSP1_L4_oLIN03_92105fa7_Rx_fc6b6d63_Rx 29
#define PduRConf_PduRDestPdu_SlaveResp_FSP1_L5_oLIN04_6afed8a5_Rx_377e0be2_Rx 30
#define PduRConf_PduRDestPdu_SlaveResp_FSP2_L1_oLIN00_4ba91c50_Rx_f7959d8f_Rx 31
#define PduRConf_PduRDestPdu_SlaveResp_FSP2_L2_oLIN01_e423846a_Rx_e28df3db_Rx 32
#define PduRConf_PduRDestPdu_SlaveResp_FSP2_L3_oLIN02_cf918bf6_Rx_1b1ab2ff_Rx 33
#define PduRConf_PduRDestPdu_SlaveResp_FSP3_L2_oLIN01_033e22fd_Rx_6b1d1eb8_Rx 34
#define PduRConf_PduRDestPdu_SlaveResp_FSP4_L2_oLIN01_dbfd59db_Rx_87b10390_Rx 35
#define PduRConf_PduRDestPdu_SlaveResp_ILCP1_oLIN00_ffca61fb_Rx_a0f8dbfb_Rx 36
#define PduRConf_PduRDestPdu_SlaveResp_ILCP2_oLIN03_39eebd8e_Rx_95103cdf_Rx 37
#define PduRConf_PduRDestPdu_SlaveResp_LECM2_oLIN00_71931b12_Rx_8389a02c_Rx 38
#define PduRConf_PduRDestPdu_SlaveResp_LECMBasic_oLIN00_30a28bed_Rx_3b8e8c69_Rx 39
#define PduRConf_PduRDestPdu_SlaveResp_RCECS_oLIN04_28099311_Rx_0e5523b8_Rx 40
#define PduRConf_PduRDestPdu_SlaveResp_TCP_oLIN02_cb8ee454_Rx_68bca152_Rx 41
#define PduRConf_PduRDestPdu_TECU_BB2_05S_oBackbone2_0976cf31_Rx_0aeda82a_Rx 42
#define PduRConf_PduRDestPdu_TECU_BB2_06S_oBackbone2_c069c78e_Rx_187ffacf_Rx 43
#define PduRConf_PduRDestPdu_VMCU_BB2_31S_oBackbone2_9791f79f_Rx_962aaefb_Rx 45
#define PduRConf_PduRDestPdu_VMCU_BB2_32S_oBackbone2_5e8eff20_Rx_8c4f8f58_Rx 46
#define PduRConf_PduRDestPdu_VMCU_BB2_34S_oBackbone2_17c1e81f_Rx_656dbd2a_Rx 47
#define PduRConf_PduRDestPdu_VMCU_BB2_57P_oBackbone2_7bd9bbf9_Rx_46a397e3_Rx 48
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxSrc Handle IDs of handle space TpRxSrc.
 * \brief Transport protocol Rx source PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0aeda82a                       87
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0e5523b8                       85
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1ac6f203                       20
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1b1ab2ff                       78
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1b947dce                       36
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1e24ebac                       70
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2e6f76ae                       33
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3b8e8c69                       84
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3c553d77                       49
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5b587d0d                       67
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5cfa406e                       29
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6b1d1eb8                       79
#define PduRConf_PduRSrcPdu_PduRSrcPdu_6ea67099                       24
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7ab1f990                       57
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8a32f8f6                       4
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8c4f8f58                       90
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8c488735                       44
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9d957b7c                       66
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9e5d6760                       50
#define PduRConf_PduRSrcPdu_PduRSrcPdu_06bdd5c2                       52
#define PduRConf_PduRSrcPdu_PduRSrcPdu_25a59123                       48
#define PduRConf_PduRSrcPdu_PduRSrcPdu_26a1cbb9                       2
#define PduRConf_PduRSrcPdu_PduRSrcPdu_26b85268                       64
#define PduRConf_PduRSrcPdu_PduRSrcPdu_30b4cd32                       35
#define PduRConf_PduRSrcPdu_PduRSrcPdu_39fe25b5                       46
#define PduRConf_PduRSrcPdu_PduRSrcPdu_46a397e3                       92
#define PduRConf_PduRSrcPdu_PduRSrcPdu_55c6efb1                       73
#define PduRConf_PduRSrcPdu_PduRSrcPdu_59f7faf1                       56
#define PduRConf_PduRSrcPdu_PduRSrcPdu_62ae1653                       37
#define PduRConf_PduRSrcPdu_PduRSrcPdu_68bca152                       86
#define PduRConf_PduRSrcPdu_PduRSrcPdu_71b786d1                       38
#define PduRConf_PduRSrcPdu_PduRSrcPdu_75cfe088                       59
#define PduRConf_PduRSrcPdu_PduRSrcPdu_86e04d33                       5
#define PduRConf_PduRSrcPdu_PduRSrcPdu_87b10390                       80
#define PduRConf_PduRSrcPdu_PduRSrcPdu_99e30330                       40
#define PduRConf_PduRSrcPdu_PduRSrcPdu_064dc9ab                       28
#define PduRConf_PduRSrcPdu_PduRSrcPdu_187ffacf                       88
#define PduRConf_PduRSrcPdu_PduRSrcPdu_246f1e3b                       16
#define PduRConf_PduRSrcPdu_PduRSrcPdu_270fccd3                       62
#define PduRConf_PduRSrcPdu_PduRSrcPdu_304f257a                       30
#define PduRConf_PduRSrcPdu_PduRSrcPdu_377e0be2                       75
#define PduRConf_PduRSrcPdu_PduRSrcPdu_408ae78e                       54
#define PduRConf_PduRSrcPdu_PduRSrcPdu_446f53c1                       47
#define PduRConf_PduRSrcPdu_PduRSrcPdu_656dbd2a                       91
#define PduRConf_PduRSrcPdu_PduRSrcPdu_903f7ca8                       69
#define PduRConf_PduRSrcPdu_PduRSrcPdu_962aaefb                       89
#define PduRConf_PduRSrcPdu_PduRSrcPdu_0948f4eb                       53
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8259d96a                       45
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8389a02c                       83
#define PduRConf_PduRSrcPdu_PduRSrcPdu_89263a8e                       27
#define PduRConf_PduRSrcPdu_PduRSrcPdu_95103cdf                       82
#define PduRConf_PduRSrcPdu_PduRSrcPdu_99747a0b                       71
#define PduRConf_PduRSrcPdu_PduRSrcPdu_99763ffd                       61
#define PduRConf_PduRSrcPdu_PduRSrcPdu_266542d7                       17
#define PduRConf_PduRSrcPdu_PduRSrcPdu_304197c1                       0
#define PduRConf_PduRSrcPdu_PduRSrcPdu_8771577a                       55
#define PduRConf_PduRSrcPdu_PduRSrcPdu_01528206                       13
#define PduRConf_PduRSrcPdu_PduRSrcPdu_63947842                       10
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a0f8dbfb                       81
#define PduRConf_PduRSrcPdu_PduRSrcPdu_a40032de                       25
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ab3d4554                       58
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ac4babc0                       21
#define PduRConf_PduRSrcPdu_PduRSrcPdu_afe1a735                       72
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b4b812c0                       42
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b9d033d4                       26
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b18fc6c3                       23
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bbc023c9                       9
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bd0d068c                       3
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bd1ce89a                       43
#define PduRConf_PduRSrcPdu_PduRSrcPdu_bfda77cf                       34
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c6acd63d                       11
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c28e0d5d                       14
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c050dec8                       7
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c0680d6c                       31
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c4655c6f                       63
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ccea7767                       6
#define PduRConf_PduRSrcPdu_PduRSrcPdu_cd1487f2                       18
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d9d30309                       32
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d91d7573                       8
#define PduRConf_PduRSrcPdu_PduRSrcPdu_d62010ae                       65
#define PduRConf_PduRSrcPdu_PduRSrcPdu_da0a8dca                       39
#define PduRConf_PduRSrcPdu_PduRSrcPdu_df9a30f3                       12
#define PduRConf_PduRSrcPdu_PduRSrcPdu_dfacef7f                       41
#define PduRConf_PduRSrcPdu_PduRSrcPdu_e28df3db                       77
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ea4e2140                       15
#define PduRConf_PduRSrcPdu_PduRSrcPdu_eb982057                       1
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f46eac1f                       68
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f1553bf5                       22
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f7959d8f                       76
#define PduRConf_PduRSrcPdu_PduRSrcPdu_fc6b6d63                       74
#define PduRConf_PduRSrcPdu_PduRSrcPdu_fdae10f0                       51
#define PduRConf_PduRSrcPdu_PduRSrcPdu_fed5ac9b                       60
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ff6a6468                       19
/**\} */

/**
 * \defgroup PduRHandleIdsTpTxDest Handle IDs of handle space TpTxDest.
 * \brief Transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_CIOM_0fefd926_Tx                         82
#define PduRConf_PduRDestPdu_CIOM_1a4fac9a_Tx                         33
#define PduRConf_PduRDestPdu_CIOM_1f5874a4_Tx                         92
#define PduRConf_PduRDestPdu_CIOM_2b6cb3ad_Tx                         27
#define PduRConf_PduRDestPdu_CIOM_2dc3f245_Tx                         79
#define PduRConf_PduRDestPdu_CIOM_3fb186a1_Tx                         47
#define PduRConf_PduRDestPdu_CIOM_4e01b3dd_Tx                         46
#define PduRConf_PduRDestPdu_CIOM_5cd3a27b_Tx                         43
#define PduRConf_PduRDestPdu_CIOM_5d61a178_Tx                         31
#define PduRConf_PduRDestPdu_CIOM_6e041ac5_Tx                         42
#define PduRConf_PduRDestPdu_CIOM_7bfcaf70_Tx                         49
#define PduRConf_PduRDestPdu_CIOM_9aa9598b_Tx                         52
#define PduRConf_PduRDestPdu_CIOM_9f94b5ae_Tx                         39
#define PduRConf_PduRDestPdu_CIOM_14cb3836_Tx                         22
#define PduRConf_PduRDestPdu_CIOM_16ccbda9_Tx                         23
#define PduRConf_PduRDestPdu_CIOM_42e6f8eb_Tx                         78
#define PduRConf_PduRDestPdu_CIOM_50cc5439_Tx                         84
#define PduRConf_PduRDestPdu_CIOM_60d04da4_Tx                         32
#define PduRConf_PduRDestPdu_CIOM_98a0f91f_Tx                         34
#define PduRConf_PduRDestPdu_CIOM_017be91a_Tx                         95
#define PduRConf_PduRDestPdu_CIOM_305ca23a_Tx                         96
#define PduRConf_PduRDestPdu_CIOM_325e35fa_Tx                         83
#define PduRConf_PduRDestPdu_CIOM_500aa266_Tx                         40
#define PduRConf_PduRDestPdu_CIOM_948b4abd_Tx                         93
#define PduRConf_PduRDestPdu_CIOM_2156cc07_Tx                         94
#define PduRConf_PduRDestPdu_CIOM_4767c578_Tx                         45
#define PduRConf_PduRDestPdu_CIOM_52939f57_Tx                         51
#define PduRConf_PduRDestPdu_CIOM_08650048_Tx                         28
#define PduRConf_PduRDestPdu_CIOM_BB2_12S_oBackbone2_fe325e86_Tx      0
#define PduRConf_PduRDestPdu_CIOM_BB2_13S_oBackbone2_0fe85b2c_Tx      1
#define PduRConf_PduRDestPdu_CIOM_BB2_32S_oBackbone2_93d77f60_Tx      2
#define PduRConf_PduRDestPdu_CIOM_Cab_04S_oCabSubnet_779a15ce_Tx      3
#define PduRConf_PduRDestPdu_CIOM_Cab_05S_oCabSubnet_86401064_Tx      4
#define PduRConf_PduRDestPdu_CIOM_Cab_11S_oCabSubnet_c1389abd_Tx      5
#define PduRConf_PduRDestPdu_CIOM_Cab_13S_oCabSubnet_f9fd97a8_Tx      6
#define PduRConf_PduRDestPdu_CIOM_Cab_20S_oCabSubnet_6bf52e02_Tx      7
#define PduRConf_PduRDestPdu_CIOM_Cab_25S_oCabSubnet_eba53182_Tx      8
#define PduRConf_PduRDestPdu_CIOM_Cab_29S_oCabSubnet_793b1ffc_Tx      9
#define PduRConf_PduRDestPdu_CIOM_Cab_30S_oCabSubnet_5d07bef1_Tx      10
#define PduRConf_PduRDestPdu_CIOM_Cab_34P_oCabSubnet_3fa59da8_Tx      11
#define PduRConf_PduRDestPdu_CIOM_Sec_05S_oSecuritySubnet_7a00e33f_Tx 12
#define PduRConf_PduRDestPdu_CIOM_Sec_06S_oSecuritySubnet_423b684c_Tx 13
#define PduRConf_PduRDestPdu_CIOM_Sec_07S_oSecuritySubnet_e302eca2_Tx 14
#define PduRConf_PduRDestPdu_CIOM_Sec_08S_oSecuritySubnet_3bd74a1d_Tx 15
#define PduRConf_PduRDestPdu_CIOM_Sec_09S_oSecuritySubnet_9aeecef3_Tx 16
#define PduRConf_PduRDestPdu_CIOM_Sec_10S_oSecuritySubnet_755f8851_Tx 17
#define PduRConf_PduRDestPdu_CIOM_Sec_11S_oSecuritySubnet_d4660cbf_Tx 18
#define PduRConf_PduRDestPdu_CIOM_Sec_12S_oSecuritySubnet_ec5d87cc_Tx 19
#define PduRConf_PduRDestPdu_CIOM_a610cc5c_Tx                         80
#define PduRConf_PduRDestPdu_CIOM_a41749c3_Tx                         81
#define PduRConf_PduRDestPdu_CIOM_a81020b5_Tx                         89
#define PduRConf_PduRDestPdu_CIOM_a1765610_Tx                         90
#define PduRConf_PduRDestPdu_CIOM_b3a447b6_Tx                         87
#define PduRConf_PduRDestPdu_CIOM_ca2e8141_Tx                         85
#define PduRConf_PduRDestPdu_CIOM_ce2129ca_Tx                         50
#define PduRConf_PduRDestPdu_CIOM_d0c6636c_Tx                         91
#define PduRConf_PduRDestPdu_CIOM_d31c0716_Tx                         25
#define PduRConf_PduRDestPdu_CIOM_dbd99c7f_Tx                         41
#define PduRConf_PduRDestPdu_CIOM_e5f820d2_Tx                         86
#define PduRConf_PduRDestPdu_CIOM_e217a053_Tx                         26
#define PduRConf_PduRDestPdu_CIOM_e742f677_Tx                         37
#define PduRConf_PduRDestPdu_CIOM_ec9334ff_Tx                         29
#define PduRConf_PduRDestPdu_CIOM_ee94b160_Tx                         30
#define PduRConf_PduRDestPdu_CIOM_ee2480d2_Tx                         38
#define PduRConf_PduRDestPdu_CIOM_eeadebca_Tx                         24
#define PduRConf_PduRDestPdu_CIOM_f02f9169_Tx                         48
#define PduRConf_PduRDestPdu_CIOM_f03d0c81_Tx                         21
#define PduRConf_PduRDestPdu_CIOM_fcf69174_Tx                         35
#define PduRConf_PduRDestPdu_DI_X_CIOMFMS_oFMSNet_45299e3a_Tx         20
#define PduRConf_PduRDestPdu_DiagRespMsgIntHMIIOM_F3_40_BB2_oBackbone2_f7679e64_Tx 36
#define PduRConf_PduRDestPdu_DiagRespMsgIntTGW2_F4_40_BB2_oBackbone2_3b72250e_Tx 44
#define PduRConf_PduRDestPdu_MasterReq_CCFW_oLIN03_fcabea98_Tx        53
#define PduRConf_PduRDestPdu_MasterReq_DLFW_oLIN03_c633fea1_Tx        54
#define PduRConf_PduRDestPdu_MasterReq_ELCP1_oLIN03_18fd3d27_Tx       55
#define PduRConf_PduRDestPdu_MasterReq_ELCP2_oLIN03_6e18041a_Tx       56
#define PduRConf_PduRDestPdu_MasterReq_FSP1_L1_oLIN00_e7dc451b_Tx     57
#define PduRConf_PduRDestPdu_MasterReq_FSP1_L2_oLIN01_4856dd21_Tx     58
#define PduRConf_PduRDestPdu_MasterReq_FSP1_L3_oLIN02_63e4d2bd_Tx     59
#define PduRConf_PduRDestPdu_MasterReq_FSP1_L4_oLIN03_cc32eb14_Tx     60
#define PduRConf_PduRDestPdu_MasterReq_FSP1_L5_oLIN04_34dc6c16_Tx     61
#define PduRConf_PduRDestPdu_MasterReq_FSP2_L1_oLIN00_158ba8e3_Tx     62
#define PduRConf_PduRDestPdu_MasterReq_FSP2_L2_oLIN01_ba0130d9_Tx     63
#define PduRConf_PduRDestPdu_MasterReq_FSP2_L3_oLIN02_91b33f45_Tx     64
#define PduRConf_PduRDestPdu_MasterReq_FSP3_L2_oLIN01_5d1c964e_Tx     65
#define PduRConf_PduRDestPdu_MasterReq_FSP4_L2_oLIN01_85dfed68_Tx     66
#define PduRConf_PduRDestPdu_MasterReq_ILCP1_oLIN00_0bff65a0_Tx       67
#define PduRConf_PduRDestPdu_MasterReq_ILCP2_oLIN03_cddbb9d5_Tx       68
#define PduRConf_PduRDestPdu_MasterReq_LECM2_oLIN00_85a61f49_Tx       69
#define PduRConf_PduRDestPdu_MasterReq_LECMBasic_oLIN00_33465f21_Tx   70
#define PduRConf_PduRDestPdu_MasterReq_RCECS_oLIN04_dc3c974a_Tx       71
#define PduRConf_PduRDestPdu_MasterReq_TCP_oLIN02_741cea1f_Tx         72
#define PduRConf_PduRDestPdu_MasterReq_oLIN00_3234fe1b_Tx             73
#define PduRConf_PduRDestPdu_MasterReq_oLIN01_eb5b5f1c_Tx             74
#define PduRConf_PduRDestPdu_MasterReq_oLIN02_5b9aba54_Tx             75
#define PduRConf_PduRDestPdu_MasterReq_oLIN03_82f51b53_Tx             76
#define PduRConf_PduRDestPdu_MasterReq_oLIN04_e1687685_Tx             77
#define PduRConf_PduRDestPdu_PhysDiagRespMsg_F2_40_BB2_oBackbone2_1ef42df7_Tx 88
#define PduRConf_PduRDestPdu_VI_X_CIOMFMS_oFMSNet_55f8530d_Tx         97
/**\} */


/* User Config File Start */

/* User Config File End */


/**********************************************************************************************************************
 * GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#endif  /* PDUR_CFG_H */
/**********************************************************************************************************************
 * END OF FILE: PduR_Cfg.h
 *********************************************************************************************************************/

