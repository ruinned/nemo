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
 *            Module: J1939Tp
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: J1939Tp_Cfg.h
 *   Generation Time: 2018-11-30 11:18:20
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


#if !(defined J1939TP_CFG_H)
# define J1939TP_CFG_H

/**********************************************************************************************************************
  MISRA JUSTIFICATION
**********************************************************************************************************************/

/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

# include "ComStack_Types.h"
# include "J1939Tp_Types.h"


/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

#ifndef J1939TP_USE_DUMMY_FUNCTIONS
#define J1939TP_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef J1939TP_USE_DUMMY_STATEMENT
#define J1939TP_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef J1939TP_DUMMY_STATEMENT
#define J1939TP_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef J1939TP_DUMMY_STATEMENT_CONST
#define J1939TP_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef J1939TP_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define J1939TP_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef J1939TP_ATOMIC_VARIABLE_ACCESS
#define J1939TP_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef J1939TP_PROCESSOR_MPC5746C
#define J1939TP_PROCESSOR_MPC5746C
#endif
#ifndef J1939TP_COMP_DIAB
#define J1939TP_COMP_DIAB
#endif
#ifndef J1939TP_GEN_GENERATOR_MSR
#define J1939TP_GEN_GENERATOR_MSR
#endif
#ifndef J1939TP_CPUTYPE_BITORDER_MSB2LSB
#define J1939TP_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef J1939TP_CONFIGURATION_VARIANT_PRECOMPILE
#define J1939TP_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef J1939TP_CONFIGURATION_VARIANT_LINKTIME
#define J1939TP_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef J1939TP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define J1939TP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef J1939TP_CONFIGURATION_VARIANT
#define J1939TP_CONFIGURATION_VARIANT J1939TP_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef J1939TP_POSTBUILD_VARIANT_SUPPORT
#define J1939TP_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define J1939TP_CFG_MAJOR_VERSION (1u)
#define J1939TP_CFG_MINOR_VERSION (4u)
#define J1939TP_CFG_PATCH_VERSION (2u)

#define J1939TP_DEV_ERROR_DETECT STD_OFF
#define J1939TP_DEV_ERROR_REPORT STD_OFF
#define J1939TP_RUNTIME_ERROR_REPORT STD_OFF
#define J1939TP_VERSION_INFO_API STD_OFF

#define J1939TP_CANCELLATION_SUPPORT STD_OFF

#define J1939TP_CANIF_DLCCHECK STD_ON

#define J1939TP_ENABLED STD_ON
#define J1939TP_TX_ENABLED STD_ON
#define J1939TP_RX_ENABLED STD_ON
#define J1939TP_DIRECT_ENABLED STD_ON
#define J1939TP_DIRECT_TX_ENABLED STD_ON
#define J1939TP_DIRECT_RX_ENABLED STD_ON
#define J1939TP_BAM_ENABLED STD_ON
#define J1939TP_BAM_TX_ENABLED STD_ON
#define J1939TP_BAM_RX_ENABLED STD_ON
#define J1939TP_CMDT_ENABLED STD_ON
#define J1939TP_CMDT_TX_ENABLED STD_ON
#define J1939TP_CMDT_RX_ENABLED STD_ON
#define J1939TP_ETP_ENABLED STD_OFF
#define J1939TP_ETP_TX_ENABLED STD_OFF
#define J1939TP_ETP_RX_ENABLED STD_OFF
#define J1939TP_FPP_ENABLED STD_OFF
#define J1939TP_FPP_TX_ENABLED STD_OFF
#define J1939TP_FPP_RX_ENABLED STD_OFF



/**
 * \defgroup J1939TpHandleIdsTxN-SDUIDs Handle IDs of handle space Tx N-SDU IDs.
 * \brief Symbolic Name Values (SNVs) for Tx N-SDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define J1939TpConf_J1939TpTxNSdu_J1939TpTxNSdu_90d241ce              0
#define J1939TpConf_J1939TpTxNSdu_J1939TpTxNSdu_d8e4c05b              1
/**\} */



/**
 * \defgroup J1939TpHandleIdsRxN-SDUIDs Handle IDs of handle space Rx N-SDU IDs.
 * \brief Symbolic Name Values (SNVs) for Rx N-SDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define J1939TpConf_J1939TpRxNSdu_J1939TpRxNSdu_dc2079cf              0
#define J1939TpConf_J1939TpRxNSdu_J1939TpRxNSdu_e1788331              1
/**\} */



/**
 * \defgroup J1939TpHandleIdsTxN-PDUIDs Handle IDs of handle space Tx N-PDU IDs.
 * \brief Symbolic Name Values (SNVs) for Tx N-PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define J1939TpConf_J1939TpTxCmNPdu_J1939TpTxCmNPdu_531b8760          0
#define J1939TpConf_J1939TpTxCmNPdu_J1939TpTxCmNPdu_fc76e444          0
#define J1939TpConf_J1939TpTxDirectNPdu_J1939TpTxDirectNPdu_d8e4c05b  3
#define J1939TpConf_J1939TpTxDtNPdu_J1939TpTxDtNPdu_531b8760          1
#define J1939TpConf_J1939TpTxDtNPdu_J1939TpTxDtNPdu_fc76e444          1
#define J1939TpConf_J1939TpTxFcNPdu_FcNPdu_Backbone1J1939_dba64907    2
/**\} */



/**
 * \defgroup J1939TpHandleIdsRxN-PDUIDs Handle IDs of handle space Rx N-PDU IDs.
 * \brief Symbolic Name Values (SNVs) for Rx N-PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define J1939TpConf_J1939TpRxCmNPdu_J1939TpRxCmNPdu_6eff89d5          1
#define J1939TpConf_J1939TpRxDirectNPdu_J1939TpRxDirectNPdu_dc2079cf  3
#define J1939TpConf_J1939TpRxDtNPdu_J1939TpRxDtNPdu_6eff89d5          2
#define J1939TpConf_J1939TpRxFcNPdu_FcNPdu_FMSNet_J1939_5ab570f8      0
#define J1939TpConf_J1939TpRxFcNPdu_FcNPdu_FMSNet_J1939_70bdad51      0
/**\} */

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  J1939TpPCDataSwitches  J1939Tp Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define J1939TP_FINALMAGICNUMBER                                      STD_OFF  /**< Deactivateable: 'J1939Tp_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define J1939TP_FPPRXSDUSEQUENCECOUNTER                               STD_OFF  /**< Deactivateable: 'J1939Tp_FppRxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_FPPTXSDUSEQUENCECOUNTER                               STD_OFF  /**< Deactivateable: 'J1939Tp_FppTxSduSequenceCounter' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939TP_INITDATAHASHCODE                                      STD_OFF  /**< Deactivateable: 'J1939Tp_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define J1939TP_MAINPERIOD                                            STD_ON
#define J1939TP_RXCHANNEL                                             STD_ON
#define J1939TP_COMMCHANNELOFRXCHANNEL                                STD_ON
#define J1939TP_RXCANCELLATIONSUPPORTOFRXCHANNEL                      STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxCancellationSupport' Reason: 'the value of J1939Tp_RxCancellationSupportOfRxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939TP_RXCHANNELRXNSDURXNSDUTABLEINDENDIDXOFRXCHANNEL        STD_ON
#define J1939TP_RXCHANNELRXNSDURXNSDUTABLEINDSTARTIDXOFRXCHANNEL      STD_ON
#define J1939TP_RXCHANNELRXNSDURXNSDUTABLEINDUSEDOFRXCHANNEL          STD_ON
#define J1939TP_RXDAOFRXCHANNEL                                       STD_ON
#define J1939TP_RXDYNAMICBLOCKCALCULATIONOFRXCHANNEL                  STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxDynamicBlockCalculation' Reason: 'the value of J1939Tp_RxDynamicBlockCalculationOfRxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939TP_RXDYNAMICBUFFERRATIOOFRXCHANNEL                       STD_ON
#define J1939TP_RXISOBUSCHANNELOFRXCHANNEL                            STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxIsobusChannel' Reason: 'the value of J1939Tp_RxIsobusChannelOfRxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939TP_RXPACKETSPERBLOCKOFRXCHANNEL                          STD_ON
#define J1939TP_RXPROTOCOLTYPEOFRXCHANNEL                             STD_ON
#define J1939TP_RXRETRYSUPPORTOFRXCHANNEL                             STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.RxRetrySupport' Reason: 'the value of J1939Tp_RxRetrySupportOfRxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939TP_RXSAOFRXCHANNEL                                       STD_ON
#define J1939TP_TXPDURXETPFCNPDUIDXOFRXCHANNEL                        STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.TxPduRxEtpFcNPduIdx' Reason: 'the optional indirection is deactivated because TxPduRxEtpFcNPduUsedOfRxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_TXPDURXETPFCNPDUUSEDOFRXCHANNEL                       STD_OFF  /**< Deactivateable: 'J1939Tp_RxChannel.TxPduRxEtpFcNPduUsed' Reason: 'the optional indirection is deactivated because TxPduRxEtpFcNPduUsedOfRxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_TXPDURXFCNPDUIDXOFRXCHANNEL                           STD_ON
#define J1939TP_TXPDURXFCNPDUUSEDOFRXCHANNEL                          STD_ON
#define J1939TP_RXCHANNELRXNSDU                                       STD_ON
#define J1939TP_RXSDURXNSDUIDXOFRXCHANNELRXNSDU                       STD_ON
#define J1939TP_RXCHANNELRXNSDURXNSDUTABLEIND                         STD_ON
#define J1939TP_RXPDU                                                 STD_ON
#define J1939TP_INVALIDHNDOFRXPDU                                     STD_OFF  /**< Deactivateable: 'J1939Tp_RxPdu.InvalidHnd' Reason: 'the value of J1939Tp_InvalidHndOfRxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939TP_ONISOBUSOFRXPDU                                       STD_OFF  /**< Deactivateable: 'J1939Tp_RxPdu.OnIsobus' Reason: 'the value of J1939Tp_OnIsobusOfRxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939TP_PDUFORMATOFRXPDU                                      STD_ON
#define J1939TP_PDUTYPEOFRXPDU                                        STD_ON
#define J1939TP_RXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFRXPDU          STD_ON
#define J1939TP_RXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFRXPDU        STD_ON
#define J1939TP_RXPDURXCHANNELRXCHANNELTABLEINDUSEDOFRXPDU            STD_ON
#define J1939TP_RXPDURXSDURXSDUTABLEINDENDIDXOFRXPDU                  STD_ON
#define J1939TP_RXPDURXSDURXSDUTABLEINDSTARTIDXOFRXPDU                STD_ON
#define J1939TP_RXPDURXSDURXSDUTABLEINDUSEDOFRXPDU                    STD_ON
#define J1939TP_RXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFRXPDU          STD_ON
#define J1939TP_RXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFRXPDU        STD_ON
#define J1939TP_RXPDUTXCHANNELTXCHANNELTABLEINDUSEDOFRXPDU            STD_ON
#define J1939TP_RXPDURXCHANNEL                                        STD_ON
#define J1939TP_RXCHANNELRXCHANNELIDXOFRXPDURXCHANNEL                 STD_ON
#define J1939TP_RXPDURXCHANNELRXCHANNELTABLEIND                       STD_ON
#define J1939TP_RXPDURXSDU                                            STD_ON
#define J1939TP_RXSDURXSDUIDXOFRXPDURXSDU                             STD_ON
#define J1939TP_RXPDURXSDURXSDUTABLEIND                               STD_ON
#define J1939TP_RXPDUTXCHANNEL                                        STD_ON
#define J1939TP_TXCHANNELTXCHANNELIDXOFRXPDUTXCHANNEL                 STD_ON
#define J1939TP_RXPDUTXCHANNELTXCHANNELTABLEIND                       STD_ON
#define J1939TP_RXSDU                                                 STD_ON
#define J1939TP_FPPRXSDUSEQUENCECOUNTERIDXOFRXSDU                     STD_OFF  /**< Deactivateable: 'J1939Tp_RxSdu.FppRxSduSequenceCounterIdx' Reason: 'the optional indirection is deactivated because FppRxSduSequenceCounterUsedOfRxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_FPPRXSDUSEQUENCECOUNTERUSEDOFRXSDU                    STD_OFF  /**< Deactivateable: 'J1939Tp_RxSdu.FppRxSduSequenceCounterUsed' Reason: 'the optional indirection is deactivated because FppRxSduSequenceCounterUsedOfRxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_INVALIDHNDOFRXSDU                                     STD_OFF  /**< Deactivateable: 'J1939Tp_RxSdu.InvalidHnd' Reason: 'the value of J1939Tp_InvalidHndOfRxSdu is always 'false' due to this, the array is deactivated.' */
#define J1939TP_ISVARIABLEOFRXSDU                                     STD_ON
#define J1939TP_METADATALENGTHOFRXSDU                                 STD_ON
#define J1939TP_PGNOFRXSDU                                            STD_ON
#define J1939TP_PDULENGTHOFRXSDU                                      STD_ON
#define J1939TP_RXCHANNELCHANNELIDXOFRXSDU                            STD_ON
#define J1939TP_RXCHANNELCHANNELUSEDOFRXSDU                           STD_ON
#define J1939TP_RXSDUSTATEIDXOFRXSDU                                  STD_ON
#define J1939TP_SDUIDOFRXSDU                                          STD_ON
#define J1939TP_RXSDUSTATE                                            STD_ON
#define J1939TP_SIZEOFRXCHANNEL                                       STD_ON
#define J1939TP_SIZEOFRXCHANNELRXNSDU                                 STD_ON
#define J1939TP_SIZEOFRXCHANNELRXNSDURXNSDUTABLEIND                   STD_ON
#define J1939TP_SIZEOFRXPDU                                           STD_ON
#define J1939TP_SIZEOFRXPDURXCHANNEL                                  STD_ON
#define J1939TP_SIZEOFRXPDURXCHANNELRXCHANNELTABLEIND                 STD_ON
#define J1939TP_SIZEOFRXPDURXSDU                                      STD_ON
#define J1939TP_SIZEOFRXPDURXSDURXSDUTABLEIND                         STD_ON
#define J1939TP_SIZEOFRXPDUTXCHANNEL                                  STD_ON
#define J1939TP_SIZEOFRXPDUTXCHANNELTXCHANNELTABLEIND                 STD_ON
#define J1939TP_SIZEOFRXSDU                                           STD_ON
#define J1939TP_SIZEOFRXSDUSTATE                                      STD_ON
#define J1939TP_SIZEOFTXCHANNEL                                       STD_ON
#define J1939TP_SIZEOFTXCHANNELTXNSDU                                 STD_ON
#define J1939TP_SIZEOFTXCHANNELTXNSDUTXNSDUTABLEIND                   STD_ON
#define J1939TP_SIZEOFTXPDU                                           STD_ON
#define J1939TP_SIZEOFTXPDURXCHANNEL                                  STD_ON
#define J1939TP_SIZEOFTXPDURXCHANNELRXCHANNELTABLEIND                 STD_ON
#define J1939TP_SIZEOFTXPDUSTATE                                      STD_ON
#define J1939TP_SIZEOFTXPDUTXCHANNEL                                  STD_ON
#define J1939TP_SIZEOFTXPDUTXCHANNELTXCHANNELTABLEIND                 STD_ON
#define J1939TP_SIZEOFTXSDU                                           STD_ON
#define J1939TP_SIZEOFTXSDUSTATE                                      STD_ON
#define J1939TP_TIME_BAM                                              STD_ON
#define J1939TP_TIME_FP                                               STD_ON
#define J1939TP_TIME_T1                                               STD_ON
#define J1939TP_TIME_T2                                               STD_ON
#define J1939TP_TIME_T3                                               STD_ON
#define J1939TP_TIME_T4                                               STD_ON
#define J1939TP_TIME_TH                                               STD_ON
#define J1939TP_TIME_TR                                               STD_ON
#define J1939TP_TXCHANNEL                                             STD_ON
#define J1939TP_COMMCHANNELOFTXCHANNEL                                STD_ON
#define J1939TP_TXCANCELLATIONSUPPORTOFTXCHANNEL                      STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxCancellationSupport' Reason: 'the value of J1939Tp_TxCancellationSupportOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939TP_TXCHANNELTXNSDUTXNSDUTABLEINDENDIDXOFTXCHANNEL        STD_ON
#define J1939TP_TXCHANNELTXNSDUTXNSDUTABLEINDSTARTIDXOFTXCHANNEL      STD_ON
#define J1939TP_TXCHANNELTXNSDUTXNSDUTABLEINDUSEDOFTXCHANNEL          STD_ON
#define J1939TP_TXDAOFTXCHANNEL                                       STD_ON
#define J1939TP_TXDYNAMICBLOCKCALCULATIONOFTXCHANNEL                  STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxDynamicBlockCalculation' Reason: 'the value of J1939Tp_TxDynamicBlockCalculationOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939TP_TXISOBUSCHANNELOFTXCHANNEL                            STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxIsobusChannel' Reason: 'the value of J1939Tp_TxIsobusChannelOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939TP_TXMAXPACKETSPERBLOCKOFTXCHANNEL                       STD_ON
#define J1939TP_TXPDUTXCMNPDUIDXOFTXCHANNEL                           STD_ON
#define J1939TP_TXPDUTXCMNPDUUSEDOFTXCHANNEL                          STD_ON
#define J1939TP_TXPDUTXDTNPDUIDXOFTXCHANNEL                           STD_ON
#define J1939TP_TXPDUTXDTNPDUUSEDOFTXCHANNEL                          STD_ON
#define J1939TP_TXPDUTXETPCMNPDUIDXOFTXCHANNEL                        STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpCmNPduIdx' Reason: 'the optional indirection is deactivated because TxPduTxEtpCmNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_TXPDUTXETPCMNPDUUSEDOFTXCHANNEL                       STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpCmNPduUsed' Reason: 'the optional indirection is deactivated because TxPduTxEtpCmNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_TXPDUTXETPDTNPDUIDXOFTXCHANNEL                        STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpDtNPduIdx' Reason: 'the optional indirection is deactivated because TxPduTxEtpDtNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_TXPDUTXETPDTNPDUUSEDOFTXCHANNEL                       STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxPduTxEtpDtNPduUsed' Reason: 'the optional indirection is deactivated because TxPduTxEtpDtNPduUsedOfTxChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_TXPROTOCOLTYPEOFTXCHANNEL                             STD_ON
#define J1939TP_TXRETRYSUPPORTOFTXCHANNEL                             STD_OFF  /**< Deactivateable: 'J1939Tp_TxChannel.TxRetrySupport' Reason: 'the value of J1939Tp_TxRetrySupportOfTxChannel is always 'false' due to this, the array is deactivated.' */
#define J1939TP_TXSAOFTXCHANNEL                                       STD_ON
#define J1939TP_TXCHANNELTXNSDU                                       STD_ON
#define J1939TP_TXSDUTXNSDUIDXOFTXCHANNELTXNSDU                       STD_ON
#define J1939TP_TXCHANNELTXNSDUTXNSDUTABLEIND                         STD_ON
#define J1939TP_TXCONFTIMEOUT                                         STD_ON
#define J1939TP_TXPDU                                                 STD_ON
#define J1939TP_INVALIDHNDOFTXPDU                                     STD_OFF  /**< Deactivateable: 'J1939Tp_TxPdu.InvalidHnd' Reason: 'the value of J1939Tp_InvalidHndOfTxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939TP_ONISOBUSOFTXPDU                                       STD_OFF  /**< Deactivateable: 'J1939Tp_TxPdu.OnIsobus' Reason: 'the value of J1939Tp_OnIsobusOfTxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939TP_PDUIDOFTXPDU                                          STD_ON
#define J1939TP_PDUTYPEOFTXPDU                                        STD_ON
#define J1939TP_TXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFTXPDU          STD_ON
#define J1939TP_TXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFTXPDU        STD_ON
#define J1939TP_TXPDURXCHANNELRXCHANNELTABLEINDUSEDOFTXPDU            STD_ON
#define J1939TP_TXPDUSTATEIDXOFTXPDU                                  STD_ON
#define J1939TP_TXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFTXPDU          STD_ON
#define J1939TP_TXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFTXPDU        STD_ON
#define J1939TP_TXPDUTXCHANNELTXCHANNELTABLEINDUSEDOFTXPDU            STD_ON
#define J1939TP_TXPDURXCHANNEL                                        STD_ON
#define J1939TP_RXCHANNELRXCHANNELIDXOFTXPDURXCHANNEL                 STD_ON
#define J1939TP_TXPDURXCHANNELRXCHANNELTABLEIND                       STD_ON
#define J1939TP_TXPDUSTATE                                            STD_ON
#define J1939TP_TXPDUTXCHANNEL                                        STD_ON
#define J1939TP_TXCHANNELTXCHANNELIDXOFTXPDUTXCHANNEL                 STD_ON
#define J1939TP_TXPDUTXCHANNELTXCHANNELTABLEIND                       STD_ON
#define J1939TP_TXSDU                                                 STD_ON
#define J1939TP_FPPTXSDUSEQUENCECOUNTERIDXOFTXSDU                     STD_OFF  /**< Deactivateable: 'J1939Tp_TxSdu.FppTxSduSequenceCounterIdx' Reason: 'the optional indirection is deactivated because FppTxSduSequenceCounterUsedOfTxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_FPPTXSDUSEQUENCECOUNTERUSEDOFTXSDU                    STD_OFF  /**< Deactivateable: 'J1939Tp_TxSdu.FppTxSduSequenceCounterUsed' Reason: 'the optional indirection is deactivated because FppTxSduSequenceCounterUsedOfTxSdu is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939TP_INVALIDHNDOFTXSDU                                     STD_OFF  /**< Deactivateable: 'J1939Tp_TxSdu.InvalidHnd' Reason: 'the value of J1939Tp_InvalidHndOfTxSdu is always 'false' due to this, the array is deactivated.' */
#define J1939TP_ISVARIABLEOFTXSDU                                     STD_ON
#define J1939TP_METADATALENGTHOFTXSDU                                 STD_ON
#define J1939TP_PGNOFTXSDU                                            STD_ON
#define J1939TP_PDUFORMATOFTXSDU                                      STD_ON
#define J1939TP_PDULENGTHOFTXSDU                                      STD_ON
#define J1939TP_SDUIDOFTXSDU                                          STD_ON
#define J1939TP_TXCHANNELCHANNELIDXOFTXSDU                            STD_ON
#define J1939TP_TXCHANNELCHANNELUSEDOFTXSDU                           STD_ON
#define J1939TP_TXPDUDIRECTNPDUIDXOFTXSDU                             STD_ON
#define J1939TP_TXPDUDIRECTNPDUUSEDOFTXSDU                            STD_ON
#define J1939TP_TXSDUSTATEIDXOFTXSDU                                  STD_ON
#define J1939TP_TXSDUSTATE                                            STD_ON
#define J1939TP_PCCONFIG                                              STD_ON
#define J1939TP_FINALMAGICNUMBEROFPCCONFIG                            STD_OFF  /**< Deactivateable: 'J1939Tp_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define J1939TP_INITDATAHASHCODEOFPCCONFIG                            STD_OFF  /**< Deactivateable: 'J1939Tp_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define J1939TP_MAINPERIODOFPCCONFIG                                  STD_ON
#define J1939TP_RXCHANNELOFPCCONFIG                                   STD_ON
#define J1939TP_RXCHANNELRXNSDUOFPCCONFIG                             STD_ON
#define J1939TP_RXCHANNELRXNSDURXNSDUTABLEINDOFPCCONFIG               STD_ON
#define J1939TP_RXPDUOFPCCONFIG                                       STD_ON
#define J1939TP_RXPDURXCHANNELOFPCCONFIG                              STD_ON
#define J1939TP_RXPDURXCHANNELRXCHANNELTABLEINDOFPCCONFIG             STD_ON
#define J1939TP_RXPDURXSDUOFPCCONFIG                                  STD_ON
#define J1939TP_RXPDURXSDURXSDUTABLEINDOFPCCONFIG                     STD_ON
#define J1939TP_RXPDUTXCHANNELOFPCCONFIG                              STD_ON
#define J1939TP_RXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG             STD_ON
#define J1939TP_RXSDUOFPCCONFIG                                       STD_ON
#define J1939TP_RXSDUSTATEOFPCCONFIG                                  STD_ON
#define J1939TP_SIZEOFRXCHANNELOFPCCONFIG                             STD_ON
#define J1939TP_SIZEOFRXCHANNELRXNSDUOFPCCONFIG                       STD_ON
#define J1939TP_SIZEOFRXCHANNELRXNSDURXNSDUTABLEINDOFPCCONFIG         STD_ON
#define J1939TP_SIZEOFRXPDUOFPCCONFIG                                 STD_ON
#define J1939TP_SIZEOFRXPDURXCHANNELOFPCCONFIG                        STD_ON
#define J1939TP_SIZEOFRXPDURXCHANNELRXCHANNELTABLEINDOFPCCONFIG       STD_ON
#define J1939TP_SIZEOFRXPDURXSDUOFPCCONFIG                            STD_ON
#define J1939TP_SIZEOFRXPDURXSDURXSDUTABLEINDOFPCCONFIG               STD_ON
#define J1939TP_SIZEOFRXPDUTXCHANNELOFPCCONFIG                        STD_ON
#define J1939TP_SIZEOFRXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG       STD_ON
#define J1939TP_SIZEOFRXSDUOFPCCONFIG                                 STD_ON
#define J1939TP_SIZEOFRXSDUSTATEOFPCCONFIG                            STD_ON
#define J1939TP_SIZEOFTXCHANNELOFPCCONFIG                             STD_ON
#define J1939TP_SIZEOFTXCHANNELTXNSDUOFPCCONFIG                       STD_ON
#define J1939TP_SIZEOFTXCHANNELTXNSDUTXNSDUTABLEINDOFPCCONFIG         STD_ON
#define J1939TP_SIZEOFTXPDUOFPCCONFIG                                 STD_ON
#define J1939TP_SIZEOFTXPDURXCHANNELOFPCCONFIG                        STD_ON
#define J1939TP_SIZEOFTXPDURXCHANNELRXCHANNELTABLEINDOFPCCONFIG       STD_ON
#define J1939TP_SIZEOFTXPDUSTATEOFPCCONFIG                            STD_ON
#define J1939TP_SIZEOFTXPDUTXCHANNELOFPCCONFIG                        STD_ON
#define J1939TP_SIZEOFTXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG       STD_ON
#define J1939TP_SIZEOFTXSDUOFPCCONFIG                                 STD_ON
#define J1939TP_SIZEOFTXSDUSTATEOFPCCONFIG                            STD_ON
#define J1939TP_TIME_BAMOFPCCONFIG                                    STD_ON
#define J1939TP_TIME_FPOFPCCONFIG                                     STD_ON
#define J1939TP_TIME_T1OFPCCONFIG                                     STD_ON
#define J1939TP_TIME_T2OFPCCONFIG                                     STD_ON
#define J1939TP_TIME_T3OFPCCONFIG                                     STD_ON
#define J1939TP_TIME_T4OFPCCONFIG                                     STD_ON
#define J1939TP_TIME_THOFPCCONFIG                                     STD_ON
#define J1939TP_TIME_TROFPCCONFIG                                     STD_ON
#define J1939TP_TXCHANNELOFPCCONFIG                                   STD_ON
#define J1939TP_TXCHANNELTXNSDUOFPCCONFIG                             STD_ON
#define J1939TP_TXCHANNELTXNSDUTXNSDUTABLEINDOFPCCONFIG               STD_ON
#define J1939TP_TXCONFTIMEOUTOFPCCONFIG                               STD_ON
#define J1939TP_TXPDUOFPCCONFIG                                       STD_ON
#define J1939TP_TXPDURXCHANNELOFPCCONFIG                              STD_ON
#define J1939TP_TXPDURXCHANNELRXCHANNELTABLEINDOFPCCONFIG             STD_ON
#define J1939TP_TXPDUSTATEOFPCCONFIG                                  STD_ON
#define J1939TP_TXPDUTXCHANNELOFPCCONFIG                              STD_ON
#define J1939TP_TXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG             STD_ON
#define J1939TP_TXSDUOFPCCONFIG                                       STD_ON
#define J1939TP_TXSDUSTATEOFPCCONFIG                                  STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCMinNumericValueDefines  J1939Tp Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define J1939TP_MIN_FPPRXSDUSEQUENCECOUNTER                           0U
#define J1939TP_MIN_FPPTXSDUSEQUENCECOUNTER                           0U
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCMaxNumericValueDefines  J1939Tp Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define J1939TP_MAX_FPPRXSDUSEQUENCECOUNTER                           255U
#define J1939TP_MAX_FPPTXSDUSEQUENCECOUNTER                           255U
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCNoReferenceDefines  J1939Tp No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define J1939TP_NO_RXCHANNELRXNSDURXNSDUTABLEINDENDIDXOFRXCHANNEL     255U
#define J1939TP_NO_RXCHANNELRXNSDURXNSDUTABLEINDSTARTIDXOFRXCHANNEL   255U
#define J1939TP_NO_TXPDURXETPFCNPDUIDXOFRXCHANNEL                     65535U
#define J1939TP_NO_TXPDURXFCNPDUIDXOFRXCHANNEL                        255U
#define J1939TP_NO_RXCHANNELRXNSDURXNSDUTABLEIND                      255U
#define J1939TP_NO_RXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFRXPDU       255U
#define J1939TP_NO_RXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFRXPDU     255U
#define J1939TP_NO_RXPDURXSDURXSDUTABLEINDENDIDXOFRXPDU               255U
#define J1939TP_NO_RXPDURXSDURXSDUTABLEINDSTARTIDXOFRXPDU             255U
#define J1939TP_NO_RXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFRXPDU       255U
#define J1939TP_NO_RXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFRXPDU     255U
#define J1939TP_NO_RXPDURXCHANNELRXCHANNELTABLEIND                    255U
#define J1939TP_NO_RXPDURXSDURXSDUTABLEIND                            255U
#define J1939TP_NO_RXPDUTXCHANNELTXCHANNELTABLEIND                    255U
#define J1939TP_NO_FPPRXSDUSEQUENCECOUNTERIDXOFRXSDU                  65535U
#define J1939TP_NO_RXCHANNELCHANNELIDXOFRXSDU                         255U
#define J1939TP_NO_SDUIDOFRXSDU                                       255U
#define J1939TP_NO_TXCHANNELTXNSDUTXNSDUTABLEINDENDIDXOFTXCHANNEL     255U
#define J1939TP_NO_TXCHANNELTXNSDUTXNSDUTABLEINDSTARTIDXOFTXCHANNEL   255U
#define J1939TP_NO_TXPDUTXCMNPDUIDXOFTXCHANNEL                        255U
#define J1939TP_NO_TXPDUTXDTNPDUIDXOFTXCHANNEL                        255U
#define J1939TP_NO_TXPDUTXETPCMNPDUIDXOFTXCHANNEL                     65535U
#define J1939TP_NO_TXPDUTXETPDTNPDUIDXOFTXCHANNEL                     65535U
#define J1939TP_NO_TXCHANNELTXNSDUTXNSDUTABLEIND                      255U
#define J1939TP_NO_PDUIDOFTXPDU                                       255U
#define J1939TP_NO_TXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFTXPDU       255U
#define J1939TP_NO_TXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFTXPDU     255U
#define J1939TP_NO_TXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFTXPDU       255U
#define J1939TP_NO_TXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFTXPDU     255U
#define J1939TP_NO_TXPDURXCHANNELRXCHANNELTABLEIND                    255U
#define J1939TP_NO_TXPDUTXCHANNELTXCHANNELTABLEIND                    255U
#define J1939TP_NO_FPPTXSDUSEQUENCECOUNTERIDXOFTXSDU                  65535U
#define J1939TP_NO_SDUIDOFTXSDU                                       255U
#define J1939TP_NO_TXCHANNELCHANNELIDXOFTXSDU                         255U
#define J1939TP_NO_TXPDUDIRECTNPDUIDXOFTXSDU                          255U
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCEnumExistsDefines  J1939Tp Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define J1939TP_EXISTS_PROTOCOL_UNUSED_RXPROTOCOLTYPEOFRXCHANNEL      STD_ON
#define J1939TP_EXISTS_PROTOCOL_BAM_RXPROTOCOLTYPEOFRXCHANNEL         STD_OFF
#define J1939TP_EXISTS_PROTOCOL_CMDT_RXPROTOCOLTYPEOFRXCHANNEL        STD_OFF
#define J1939TP_EXISTS_PROTOCOL_ETP_RXPROTOCOLTYPEOFRXCHANNEL         STD_OFF
#define J1939TP_EXISTS_PROTOCOL_FPP_RXPROTOCOLTYPEOFRXCHANNEL         STD_OFF
#define J1939TP_EXISTS_UNDEFINED_PDUFORMATOFRXPDU                     STD_OFF
#define J1939TP_EXISTS_PDU1_PDUFORMATOFRXPDU                          STD_ON
#define J1939TP_EXISTS_PDU2_PDUFORMATOFRXPDU                          STD_ON
#define J1939TP_EXISTS_UNUSED_PDUTYPEOFRXPDU                          STD_OFF
#define J1939TP_EXISTS_DIRECT_PDUTYPEOFRXPDU                          STD_ON
#define J1939TP_EXISTS_TPCM_PDUTYPEOFRXPDU                            STD_ON
#define J1939TP_EXISTS_TPDT_PDUTYPEOFRXPDU                            STD_ON
#define J1939TP_EXISTS_ETPCM_PDUTYPEOFRXPDU                           STD_OFF
#define J1939TP_EXISTS_ETPDT_PDUTYPEOFRXPDU                           STD_OFF
#define J1939TP_EXISTS_FPP_PDUTYPEOFRXPDU                             STD_OFF
#define J1939TP_EXISTS_PROTOCOL_UNUSED_TXPROTOCOLTYPEOFTXCHANNEL      STD_ON
#define J1939TP_EXISTS_PROTOCOL_BAM_TXPROTOCOLTYPEOFTXCHANNEL         STD_OFF
#define J1939TP_EXISTS_PROTOCOL_CMDT_TXPROTOCOLTYPEOFTXCHANNEL        STD_OFF
#define J1939TP_EXISTS_PROTOCOL_ETP_TXPROTOCOLTYPEOFTXCHANNEL         STD_OFF
#define J1939TP_EXISTS_PROTOCOL_FPP_TXPROTOCOLTYPEOFTXCHANNEL         STD_OFF
#define J1939TP_EXISTS_UNUSED_PDUTYPEOFTXPDU                          STD_OFF
#define J1939TP_EXISTS_DIRECT_PDUTYPEOFTXPDU                          STD_ON
#define J1939TP_EXISTS_TPCM_PDUTYPEOFTXPDU                            STD_ON
#define J1939TP_EXISTS_TPDT_PDUTYPEOFTXPDU                            STD_ON
#define J1939TP_EXISTS_ETPCM_PDUTYPEOFTXPDU                           STD_OFF
#define J1939TP_EXISTS_ETPDT_PDUTYPEOFTXPDU                           STD_OFF
#define J1939TP_EXISTS_FPP_PDUTYPEOFTXPDU                             STD_OFF
#define J1939TP_EXISTS_UNDEFINED_PDUFORMATOFTXSDU                     STD_OFF
#define J1939TP_EXISTS_PDU1_PDUFORMATOFTXSDU                          STD_OFF
#define J1939TP_EXISTS_PDU2_PDUFORMATOFTXSDU                          STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCEnumDefines  J1939Tp Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define J1939TP_PROTOCOL_UNUSED_RXPROTOCOLTYPEOFRXCHANNEL             0x00U
#define J1939TP_PROTOCOL_BAM_RXPROTOCOLTYPEOFRXCHANNEL                0x01U
#define J1939TP_PROTOCOL_CMDT_RXPROTOCOLTYPEOFRXCHANNEL               0x02U
#define J1939TP_PROTOCOL_ETP_RXPROTOCOLTYPEOFRXCHANNEL                0x03U
#define J1939TP_PROTOCOL_FPP_RXPROTOCOLTYPEOFRXCHANNEL                0x04U
#define J1939TP_UNDEFINED_PDUFORMATOFRXPDU                            0x00U
#define J1939TP_PDU1_PDUFORMATOFRXPDU                                 0x01U
#define J1939TP_PDU2_PDUFORMATOFRXPDU                                 0x02U
#define J1939TP_UNUSED_PDUTYPEOFRXPDU                                 0x00U
#define J1939TP_DIRECT_PDUTYPEOFRXPDU                                 0x01U
#define J1939TP_TPCM_PDUTYPEOFRXPDU                                   0x02U
#define J1939TP_TPDT_PDUTYPEOFRXPDU                                   0x03U
#define J1939TP_ETPCM_PDUTYPEOFRXPDU                                  0x04U
#define J1939TP_ETPDT_PDUTYPEOFRXPDU                                  0x05U
#define J1939TP_FPP_PDUTYPEOFRXPDU                                    0x06U
#define J1939TP_PROTOCOL_UNUSED_TXPROTOCOLTYPEOFTXCHANNEL             0x00U
#define J1939TP_PROTOCOL_BAM_TXPROTOCOLTYPEOFTXCHANNEL                0x01U
#define J1939TP_PROTOCOL_CMDT_TXPROTOCOLTYPEOFTXCHANNEL               0x02U
#define J1939TP_PROTOCOL_ETP_TXPROTOCOLTYPEOFTXCHANNEL                0x03U
#define J1939TP_PROTOCOL_FPP_TXPROTOCOLTYPEOFTXCHANNEL                0x04U
#define J1939TP_UNUSED_PDUTYPEOFTXPDU                                 0x00U
#define J1939TP_DIRECT_PDUTYPEOFTXPDU                                 0x01U
#define J1939TP_TPCM_PDUTYPEOFTXPDU                                   0x02U
#define J1939TP_TPDT_PDUTYPEOFTXPDU                                   0x03U
#define J1939TP_ETPCM_PDUTYPEOFTXPDU                                  0x04U
#define J1939TP_ETPDT_PDUTYPEOFTXPDU                                  0x05U
#define J1939TP_FPP_PDUTYPEOFTXPDU                                    0x06U
#define J1939TP_UNDEFINED_PDUFORMATOFTXSDU                            0x00U
#define J1939TP_PDU1_PDUFORMATOFTXSDU                                 0x01U
#define J1939TP_PDU2_PDUFORMATOFTXSDU                                 0x02U
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCIsReducedToDefineDefines  J1939Tp Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define J1939TP_ISDEF_COMMCHANNELOFRXCHANNEL                          STD_OFF
#define J1939TP_ISDEF_RXCANCELLATIONSUPPORTOFRXCHANNEL                STD_OFF
#define J1939TP_ISDEF_RXCHANNELRXNSDURXNSDUTABLEINDENDIDXOFRXCHANNEL  STD_OFF
#define J1939TP_ISDEF_RXCHANNELRXNSDURXNSDUTABLEINDSTARTIDXOFRXCHANNEL STD_OFF
#define J1939TP_ISDEF_RXCHANNELRXNSDURXNSDUTABLEINDUSEDOFRXCHANNEL    STD_OFF
#define J1939TP_ISDEF_RXDAOFRXCHANNEL                                 STD_OFF
#define J1939TP_ISDEF_RXDYNAMICBLOCKCALCULATIONOFRXCHANNEL            STD_OFF
#define J1939TP_ISDEF_RXDYNAMICBUFFERRATIOOFRXCHANNEL                 STD_OFF
#define J1939TP_ISDEF_RXISOBUSCHANNELOFRXCHANNEL                      STD_OFF
#define J1939TP_ISDEF_RXPACKETSPERBLOCKOFRXCHANNEL                    STD_OFF
#define J1939TP_ISDEF_RXPROTOCOLTYPEOFRXCHANNEL                       STD_OFF
#define J1939TP_ISDEF_RXRETRYSUPPORTOFRXCHANNEL                       STD_OFF
#define J1939TP_ISDEF_RXSAOFRXCHANNEL                                 STD_OFF
#define J1939TP_ISDEF_TXPDURXETPFCNPDUIDXOFRXCHANNEL                  STD_OFF
#define J1939TP_ISDEF_TXPDURXETPFCNPDUUSEDOFRXCHANNEL                 STD_OFF
#define J1939TP_ISDEF_TXPDURXFCNPDUIDXOFRXCHANNEL                     STD_OFF
#define J1939TP_ISDEF_TXPDURXFCNPDUUSEDOFRXCHANNEL                    STD_OFF
#define J1939TP_ISDEF_RXSDURXNSDUIDXOFRXCHANNELRXNSDU                 STD_OFF
#define J1939TP_ISDEF_RXCHANNELRXNSDURXNSDUTABLEIND                   STD_OFF
#define J1939TP_ISDEF_INVALIDHNDOFRXPDU                               STD_OFF
#define J1939TP_ISDEF_ONISOBUSOFRXPDU                                 STD_OFF
#define J1939TP_ISDEF_PDUFORMATOFRXPDU                                STD_OFF
#define J1939TP_ISDEF_PDUTYPEOFRXPDU                                  STD_OFF
#define J1939TP_ISDEF_RXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFRXPDU    STD_OFF
#define J1939TP_ISDEF_RXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFRXPDU  STD_OFF
#define J1939TP_ISDEF_RXPDURXCHANNELRXCHANNELTABLEINDUSEDOFRXPDU      STD_OFF
#define J1939TP_ISDEF_RXPDURXSDURXSDUTABLEINDENDIDXOFRXPDU            STD_OFF
#define J1939TP_ISDEF_RXPDURXSDURXSDUTABLEINDSTARTIDXOFRXPDU          STD_OFF
#define J1939TP_ISDEF_RXPDURXSDURXSDUTABLEINDUSEDOFRXPDU              STD_OFF
#define J1939TP_ISDEF_RXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFRXPDU    STD_OFF
#define J1939TP_ISDEF_RXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFRXPDU  STD_OFF
#define J1939TP_ISDEF_RXPDUTXCHANNELTXCHANNELTABLEINDUSEDOFRXPDU      STD_OFF
#define J1939TP_ISDEF_RXCHANNELRXCHANNELIDXOFRXPDURXCHANNEL           STD_OFF
#define J1939TP_ISDEF_RXPDURXCHANNELRXCHANNELTABLEIND                 STD_OFF
#define J1939TP_ISDEF_RXSDURXSDUIDXOFRXPDURXSDU                       STD_OFF
#define J1939TP_ISDEF_RXPDURXSDURXSDUTABLEIND                         STD_OFF
#define J1939TP_ISDEF_TXCHANNELTXCHANNELIDXOFRXPDUTXCHANNEL           STD_OFF
#define J1939TP_ISDEF_RXPDUTXCHANNELTXCHANNELTABLEIND                 STD_OFF
#define J1939TP_ISDEF_FPPRXSDUSEQUENCECOUNTERIDXOFRXSDU               STD_OFF
#define J1939TP_ISDEF_FPPRXSDUSEQUENCECOUNTERUSEDOFRXSDU              STD_OFF
#define J1939TP_ISDEF_INVALIDHNDOFRXSDU                               STD_OFF
#define J1939TP_ISDEF_ISVARIABLEOFRXSDU                               STD_OFF
#define J1939TP_ISDEF_METADATALENGTHOFRXSDU                           STD_OFF
#define J1939TP_ISDEF_PGNOFRXSDU                                      STD_OFF
#define J1939TP_ISDEF_PDULENGTHOFRXSDU                                STD_OFF
#define J1939TP_ISDEF_RXCHANNELCHANNELIDXOFRXSDU                      STD_OFF
#define J1939TP_ISDEF_RXCHANNELCHANNELUSEDOFRXSDU                     STD_OFF
#define J1939TP_ISDEF_RXSDUSTATEIDXOFRXSDU                            STD_OFF
#define J1939TP_ISDEF_SDUIDOFRXSDU                                    STD_OFF
#define J1939TP_ISDEF_COMMCHANNELOFTXCHANNEL                          STD_OFF
#define J1939TP_ISDEF_TXCANCELLATIONSUPPORTOFTXCHANNEL                STD_OFF
#define J1939TP_ISDEF_TXCHANNELTXNSDUTXNSDUTABLEINDENDIDXOFTXCHANNEL  STD_OFF
#define J1939TP_ISDEF_TXCHANNELTXNSDUTXNSDUTABLEINDSTARTIDXOFTXCHANNEL STD_OFF
#define J1939TP_ISDEF_TXCHANNELTXNSDUTXNSDUTABLEINDUSEDOFTXCHANNEL    STD_OFF
#define J1939TP_ISDEF_TXDAOFTXCHANNEL                                 STD_OFF
#define J1939TP_ISDEF_TXDYNAMICBLOCKCALCULATIONOFTXCHANNEL            STD_OFF
#define J1939TP_ISDEF_TXISOBUSCHANNELOFTXCHANNEL                      STD_OFF
#define J1939TP_ISDEF_TXMAXPACKETSPERBLOCKOFTXCHANNEL                 STD_OFF
#define J1939TP_ISDEF_TXPDUTXCMNPDUIDXOFTXCHANNEL                     STD_OFF
#define J1939TP_ISDEF_TXPDUTXCMNPDUUSEDOFTXCHANNEL                    STD_OFF
#define J1939TP_ISDEF_TXPDUTXDTNPDUIDXOFTXCHANNEL                     STD_OFF
#define J1939TP_ISDEF_TXPDUTXDTNPDUUSEDOFTXCHANNEL                    STD_OFF
#define J1939TP_ISDEF_TXPDUTXETPCMNPDUIDXOFTXCHANNEL                  STD_OFF
#define J1939TP_ISDEF_TXPDUTXETPCMNPDUUSEDOFTXCHANNEL                 STD_OFF
#define J1939TP_ISDEF_TXPDUTXETPDTNPDUIDXOFTXCHANNEL                  STD_OFF
#define J1939TP_ISDEF_TXPDUTXETPDTNPDUUSEDOFTXCHANNEL                 STD_OFF
#define J1939TP_ISDEF_TXPROTOCOLTYPEOFTXCHANNEL                       STD_OFF
#define J1939TP_ISDEF_TXRETRYSUPPORTOFTXCHANNEL                       STD_OFF
#define J1939TP_ISDEF_TXSAOFTXCHANNEL                                 STD_OFF
#define J1939TP_ISDEF_TXSDUTXNSDUIDXOFTXCHANNELTXNSDU                 STD_OFF
#define J1939TP_ISDEF_TXCHANNELTXNSDUTXNSDUTABLEIND                   STD_OFF
#define J1939TP_ISDEF_INVALIDHNDOFTXPDU                               STD_OFF
#define J1939TP_ISDEF_ONISOBUSOFTXPDU                                 STD_OFF
#define J1939TP_ISDEF_PDUIDOFTXPDU                                    STD_OFF
#define J1939TP_ISDEF_PDUTYPEOFTXPDU                                  STD_OFF
#define J1939TP_ISDEF_TXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFTXPDU    STD_OFF
#define J1939TP_ISDEF_TXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFTXPDU  STD_OFF
#define J1939TP_ISDEF_TXPDURXCHANNELRXCHANNELTABLEINDUSEDOFTXPDU      STD_OFF
#define J1939TP_ISDEF_TXPDUSTATEIDXOFTXPDU                            STD_OFF
#define J1939TP_ISDEF_TXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFTXPDU    STD_OFF
#define J1939TP_ISDEF_TXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFTXPDU  STD_OFF
#define J1939TP_ISDEF_TXPDUTXCHANNELTXCHANNELTABLEINDUSEDOFTXPDU      STD_OFF
#define J1939TP_ISDEF_RXCHANNELRXCHANNELIDXOFTXPDURXCHANNEL           STD_OFF
#define J1939TP_ISDEF_TXPDURXCHANNELRXCHANNELTABLEIND                 STD_OFF
#define J1939TP_ISDEF_TXCHANNELTXCHANNELIDXOFTXPDUTXCHANNEL           STD_OFF
#define J1939TP_ISDEF_TXPDUTXCHANNELTXCHANNELTABLEIND                 STD_OFF
#define J1939TP_ISDEF_FPPTXSDUSEQUENCECOUNTERIDXOFTXSDU               STD_OFF
#define J1939TP_ISDEF_FPPTXSDUSEQUENCECOUNTERUSEDOFTXSDU              STD_OFF
#define J1939TP_ISDEF_INVALIDHNDOFTXSDU                               STD_OFF
#define J1939TP_ISDEF_ISVARIABLEOFTXSDU                               STD_OFF
#define J1939TP_ISDEF_METADATALENGTHOFTXSDU                           STD_OFF
#define J1939TP_ISDEF_PGNOFTXSDU                                      STD_OFF
#define J1939TP_ISDEF_PDUFORMATOFTXSDU                                STD_OFF
#define J1939TP_ISDEF_PDULENGTHOFTXSDU                                STD_OFF
#define J1939TP_ISDEF_SDUIDOFTXSDU                                    STD_OFF
#define J1939TP_ISDEF_TXCHANNELCHANNELIDXOFTXSDU                      STD_OFF
#define J1939TP_ISDEF_TXCHANNELCHANNELUSEDOFTXSDU                     STD_OFF
#define J1939TP_ISDEF_TXPDUDIRECTNPDUIDXOFTXSDU                       STD_OFF
#define J1939TP_ISDEF_TXPDUDIRECTNPDUUSEDOFTXSDU                      STD_OFF
#define J1939TP_ISDEF_TXSDUSTATEIDXOFTXSDU                            STD_OFF
#define J1939TP_ISDEF_FINALMAGICNUMBEROFPCCONFIG                      STD_OFF
#define J1939TP_ISDEF_INITDATAHASHCODEOFPCCONFIG                      STD_OFF
#define J1939TP_ISDEF_RXCHANNELOFPCCONFIG                             STD_ON
#define J1939TP_ISDEF_RXCHANNELRXNSDUOFPCCONFIG                       STD_ON
#define J1939TP_ISDEF_RXCHANNELRXNSDURXNSDUTABLEINDOFPCCONFIG         STD_ON
#define J1939TP_ISDEF_RXPDUOFPCCONFIG                                 STD_ON
#define J1939TP_ISDEF_RXPDURXCHANNELOFPCCONFIG                        STD_ON
#define J1939TP_ISDEF_RXPDURXCHANNELRXCHANNELTABLEINDOFPCCONFIG       STD_ON
#define J1939TP_ISDEF_RXPDURXSDUOFPCCONFIG                            STD_ON
#define J1939TP_ISDEF_RXPDURXSDURXSDUTABLEINDOFPCCONFIG               STD_ON
#define J1939TP_ISDEF_RXPDUTXCHANNELOFPCCONFIG                        STD_ON
#define J1939TP_ISDEF_RXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG       STD_ON
#define J1939TP_ISDEF_RXSDUOFPCCONFIG                                 STD_ON
#define J1939TP_ISDEF_RXSDUSTATEOFPCCONFIG                            STD_ON
#define J1939TP_ISDEF_TXCHANNELOFPCCONFIG                             STD_ON
#define J1939TP_ISDEF_TXCHANNELTXNSDUOFPCCONFIG                       STD_ON
#define J1939TP_ISDEF_TXCHANNELTXNSDUTXNSDUTABLEINDOFPCCONFIG         STD_ON
#define J1939TP_ISDEF_TXPDUOFPCCONFIG                                 STD_ON
#define J1939TP_ISDEF_TXPDURXCHANNELOFPCCONFIG                        STD_ON
#define J1939TP_ISDEF_TXPDURXCHANNELRXCHANNELTABLEINDOFPCCONFIG       STD_ON
#define J1939TP_ISDEF_TXPDUSTATEOFPCCONFIG                            STD_ON
#define J1939TP_ISDEF_TXPDUTXCHANNELOFPCCONFIG                        STD_ON
#define J1939TP_ISDEF_TXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG       STD_ON
#define J1939TP_ISDEF_TXSDUOFPCCONFIG                                 STD_ON
#define J1939TP_ISDEF_TXSDUSTATEOFPCCONFIG                            STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCEqualsAlwaysToDefines  J1939Tp Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define J1939TP_EQ2_COMMCHANNELOFRXCHANNEL                            
#define J1939TP_EQ2_RXCANCELLATIONSUPPORTOFRXCHANNEL                  
#define J1939TP_EQ2_RXCHANNELRXNSDURXNSDUTABLEINDENDIDXOFRXCHANNEL    
#define J1939TP_EQ2_RXCHANNELRXNSDURXNSDUTABLEINDSTARTIDXOFRXCHANNEL  
#define J1939TP_EQ2_RXCHANNELRXNSDURXNSDUTABLEINDUSEDOFRXCHANNEL      
#define J1939TP_EQ2_RXDAOFRXCHANNEL                                   
#define J1939TP_EQ2_RXDYNAMICBLOCKCALCULATIONOFRXCHANNEL              
#define J1939TP_EQ2_RXDYNAMICBUFFERRATIOOFRXCHANNEL                   
#define J1939TP_EQ2_RXISOBUSCHANNELOFRXCHANNEL                        
#define J1939TP_EQ2_RXPACKETSPERBLOCKOFRXCHANNEL                      
#define J1939TP_EQ2_RXPROTOCOLTYPEOFRXCHANNEL                         
#define J1939TP_EQ2_RXRETRYSUPPORTOFRXCHANNEL                         
#define J1939TP_EQ2_RXSAOFRXCHANNEL                                   
#define J1939TP_EQ2_TXPDURXETPFCNPDUIDXOFRXCHANNEL                    
#define J1939TP_EQ2_TXPDURXETPFCNPDUUSEDOFRXCHANNEL                   
#define J1939TP_EQ2_TXPDURXFCNPDUIDXOFRXCHANNEL                       
#define J1939TP_EQ2_TXPDURXFCNPDUUSEDOFRXCHANNEL                      
#define J1939TP_EQ2_RXSDURXNSDUIDXOFRXCHANNELRXNSDU                   
#define J1939TP_EQ2_RXCHANNELRXNSDURXNSDUTABLEIND                     
#define J1939TP_EQ2_INVALIDHNDOFRXPDU                                 
#define J1939TP_EQ2_ONISOBUSOFRXPDU                                   
#define J1939TP_EQ2_PDUFORMATOFRXPDU                                  
#define J1939TP_EQ2_PDUTYPEOFRXPDU                                    
#define J1939TP_EQ2_RXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFRXPDU      
#define J1939TP_EQ2_RXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFRXPDU    
#define J1939TP_EQ2_RXPDURXCHANNELRXCHANNELTABLEINDUSEDOFRXPDU        
#define J1939TP_EQ2_RXPDURXSDURXSDUTABLEINDENDIDXOFRXPDU              
#define J1939TP_EQ2_RXPDURXSDURXSDUTABLEINDSTARTIDXOFRXPDU            
#define J1939TP_EQ2_RXPDURXSDURXSDUTABLEINDUSEDOFRXPDU                
#define J1939TP_EQ2_RXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFRXPDU      
#define J1939TP_EQ2_RXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFRXPDU    
#define J1939TP_EQ2_RXPDUTXCHANNELTXCHANNELTABLEINDUSEDOFRXPDU        
#define J1939TP_EQ2_RXCHANNELRXCHANNELIDXOFRXPDURXCHANNEL             
#define J1939TP_EQ2_RXPDURXCHANNELRXCHANNELTABLEIND                   
#define J1939TP_EQ2_RXSDURXSDUIDXOFRXPDURXSDU                         
#define J1939TP_EQ2_RXPDURXSDURXSDUTABLEIND                           
#define J1939TP_EQ2_TXCHANNELTXCHANNELIDXOFRXPDUTXCHANNEL             
#define J1939TP_EQ2_RXPDUTXCHANNELTXCHANNELTABLEIND                   
#define J1939TP_EQ2_FPPRXSDUSEQUENCECOUNTERIDXOFRXSDU                 
#define J1939TP_EQ2_FPPRXSDUSEQUENCECOUNTERUSEDOFRXSDU                
#define J1939TP_EQ2_INVALIDHNDOFRXSDU                                 
#define J1939TP_EQ2_ISVARIABLEOFRXSDU                                 
#define J1939TP_EQ2_METADATALENGTHOFRXSDU                             
#define J1939TP_EQ2_PGNOFRXSDU                                        
#define J1939TP_EQ2_PDULENGTHOFRXSDU                                  
#define J1939TP_EQ2_RXCHANNELCHANNELIDXOFRXSDU                        
#define J1939TP_EQ2_RXCHANNELCHANNELUSEDOFRXSDU                       
#define J1939TP_EQ2_RXSDUSTATEIDXOFRXSDU                              
#define J1939TP_EQ2_SDUIDOFRXSDU                                      
#define J1939TP_EQ2_COMMCHANNELOFTXCHANNEL                            
#define J1939TP_EQ2_TXCANCELLATIONSUPPORTOFTXCHANNEL                  
#define J1939TP_EQ2_TXCHANNELTXNSDUTXNSDUTABLEINDENDIDXOFTXCHANNEL    
#define J1939TP_EQ2_TXCHANNELTXNSDUTXNSDUTABLEINDSTARTIDXOFTXCHANNEL  
#define J1939TP_EQ2_TXCHANNELTXNSDUTXNSDUTABLEINDUSEDOFTXCHANNEL      
#define J1939TP_EQ2_TXDAOFTXCHANNEL                                   
#define J1939TP_EQ2_TXDYNAMICBLOCKCALCULATIONOFTXCHANNEL              
#define J1939TP_EQ2_TXISOBUSCHANNELOFTXCHANNEL                        
#define J1939TP_EQ2_TXMAXPACKETSPERBLOCKOFTXCHANNEL                   
#define J1939TP_EQ2_TXPDUTXCMNPDUIDXOFTXCHANNEL                       
#define J1939TP_EQ2_TXPDUTXCMNPDUUSEDOFTXCHANNEL                      
#define J1939TP_EQ2_TXPDUTXDTNPDUIDXOFTXCHANNEL                       
#define J1939TP_EQ2_TXPDUTXDTNPDUUSEDOFTXCHANNEL                      
#define J1939TP_EQ2_TXPDUTXETPCMNPDUIDXOFTXCHANNEL                    
#define J1939TP_EQ2_TXPDUTXETPCMNPDUUSEDOFTXCHANNEL                   
#define J1939TP_EQ2_TXPDUTXETPDTNPDUIDXOFTXCHANNEL                    
#define J1939TP_EQ2_TXPDUTXETPDTNPDUUSEDOFTXCHANNEL                   
#define J1939TP_EQ2_TXPROTOCOLTYPEOFTXCHANNEL                         
#define J1939TP_EQ2_TXRETRYSUPPORTOFTXCHANNEL                         
#define J1939TP_EQ2_TXSAOFTXCHANNEL                                   
#define J1939TP_EQ2_TXSDUTXNSDUIDXOFTXCHANNELTXNSDU                   
#define J1939TP_EQ2_TXCHANNELTXNSDUTXNSDUTABLEIND                     
#define J1939TP_EQ2_INVALIDHNDOFTXPDU                                 
#define J1939TP_EQ2_ONISOBUSOFTXPDU                                   
#define J1939TP_EQ2_PDUIDOFTXPDU                                      
#define J1939TP_EQ2_PDUTYPEOFTXPDU                                    
#define J1939TP_EQ2_TXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFTXPDU      
#define J1939TP_EQ2_TXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFTXPDU    
#define J1939TP_EQ2_TXPDURXCHANNELRXCHANNELTABLEINDUSEDOFTXPDU        
#define J1939TP_EQ2_TXPDUSTATEIDXOFTXPDU                              
#define J1939TP_EQ2_TXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFTXPDU      
#define J1939TP_EQ2_TXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFTXPDU    
#define J1939TP_EQ2_TXPDUTXCHANNELTXCHANNELTABLEINDUSEDOFTXPDU        
#define J1939TP_EQ2_RXCHANNELRXCHANNELIDXOFTXPDURXCHANNEL             
#define J1939TP_EQ2_TXPDURXCHANNELRXCHANNELTABLEIND                   
#define J1939TP_EQ2_TXCHANNELTXCHANNELIDXOFTXPDUTXCHANNEL             
#define J1939TP_EQ2_TXPDUTXCHANNELTXCHANNELTABLEIND                   
#define J1939TP_EQ2_FPPTXSDUSEQUENCECOUNTERIDXOFTXSDU                 
#define J1939TP_EQ2_FPPTXSDUSEQUENCECOUNTERUSEDOFTXSDU                
#define J1939TP_EQ2_INVALIDHNDOFTXSDU                                 
#define J1939TP_EQ2_ISVARIABLEOFTXSDU                                 
#define J1939TP_EQ2_METADATALENGTHOFTXSDU                             
#define J1939TP_EQ2_PGNOFTXSDU                                        
#define J1939TP_EQ2_PDUFORMATOFTXSDU                                  
#define J1939TP_EQ2_PDULENGTHOFTXSDU                                  
#define J1939TP_EQ2_SDUIDOFTXSDU                                      
#define J1939TP_EQ2_TXCHANNELCHANNELIDXOFTXSDU                        
#define J1939TP_EQ2_TXCHANNELCHANNELUSEDOFTXSDU                       
#define J1939TP_EQ2_TXPDUDIRECTNPDUIDXOFTXSDU                         
#define J1939TP_EQ2_TXPDUDIRECTNPDUUSEDOFTXSDU                        
#define J1939TP_EQ2_TXSDUSTATEIDXOFTXSDU                              
#define J1939TP_EQ2_FINALMAGICNUMBEROFPCCONFIG                        
#define J1939TP_EQ2_INITDATAHASHCODEOFPCCONFIG                        
#define J1939TP_EQ2_RXCHANNELOFPCCONFIG                               J1939Tp_RxChannel
#define J1939TP_EQ2_RXCHANNELRXNSDUOFPCCONFIG                         J1939Tp_RxChannelRxNSdu
#define J1939TP_EQ2_RXCHANNELRXNSDURXNSDUTABLEINDOFPCCONFIG           J1939Tp_RxChannelRxNSduRxNSduTableInd
#define J1939TP_EQ2_RXPDUOFPCCONFIG                                   J1939Tp_RxPdu
#define J1939TP_EQ2_RXPDURXCHANNELOFPCCONFIG                          J1939Tp_RxPduRxChannel
#define J1939TP_EQ2_RXPDURXCHANNELRXCHANNELTABLEINDOFPCCONFIG         J1939Tp_RxPduRxChannelRxChannelTableInd
#define J1939TP_EQ2_RXPDURXSDUOFPCCONFIG                              J1939Tp_RxPduRxSdu
#define J1939TP_EQ2_RXPDURXSDURXSDUTABLEINDOFPCCONFIG                 J1939Tp_RxPduRxSduRxSduTableInd
#define J1939TP_EQ2_RXPDUTXCHANNELOFPCCONFIG                          J1939Tp_RxPduTxChannel
#define J1939TP_EQ2_RXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG         J1939Tp_RxPduTxChannelTxChannelTableInd
#define J1939TP_EQ2_RXSDUOFPCCONFIG                                   J1939Tp_RxSdu
#define J1939TP_EQ2_RXSDUSTATEOFPCCONFIG                              J1939Tp_RxSduState.raw
#define J1939TP_EQ2_TXCHANNELOFPCCONFIG                               J1939Tp_TxChannel
#define J1939TP_EQ2_TXCHANNELTXNSDUOFPCCONFIG                         J1939Tp_TxChannelTxNSdu
#define J1939TP_EQ2_TXCHANNELTXNSDUTXNSDUTABLEINDOFPCCONFIG           J1939Tp_TxChannelTxNSduTxNSduTableInd
#define J1939TP_EQ2_TXPDUOFPCCONFIG                                   J1939Tp_TxPdu
#define J1939TP_EQ2_TXPDURXCHANNELOFPCCONFIG                          J1939Tp_TxPduRxChannel
#define J1939TP_EQ2_TXPDURXCHANNELRXCHANNELTABLEINDOFPCCONFIG         J1939Tp_TxPduRxChannelRxChannelTableInd
#define J1939TP_EQ2_TXPDUSTATEOFPCCONFIG                              J1939Tp_TxPduState.raw
#define J1939TP_EQ2_TXPDUTXCHANNELOFPCCONFIG                          J1939Tp_TxPduTxChannel
#define J1939TP_EQ2_TXPDUTXCHANNELTXCHANNELTABLEINDOFPCCONFIG         J1939Tp_TxPduTxChannelTxChannelTableInd
#define J1939TP_EQ2_TXSDUOFPCCONFIG                                   J1939Tp_TxSdu
#define J1939TP_EQ2_TXSDUSTATEOFPCCONFIG                              J1939Tp_TxSduState.raw
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCSymbolicInitializationPointers  J1939Tp Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define J1939Tp_Config_Ptr                                            NULL_PTR  /**< symbolic identifier which shall be used to initialize 'J1939Tp' */
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCInitializationSymbols  J1939Tp Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define J1939Tp_Config                                                NULL_PTR  /**< symbolic identifier which could be used to initialize 'J1939Tp */
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCGeneral  J1939Tp General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define J1939TP_CHECK_INIT_POINTER                                    STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define J1939TP_FINAL_MAGIC_NUMBER                                    0x251EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of J1939Tp */
#define J1939TP_INDIVIDUAL_POSTBUILD                                  STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'J1939Tp' is not configured to be postbuild capable. */
#define J1939TP_INIT_DATA                                             J1939TP_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define J1939TP_INIT_DATA_HASH_CODE                                   -1485689736L  /**< the precompile constant to validate the initialization structure at initialization time of J1939Tp with a hashcode. The seed value is '0x251EU' */
#define J1939TP_USE_ECUM_BSW_ERROR_HOOK                               STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define J1939TP_USE_INIT_POINTER                                      STD_OFF  /**< STD_ON if the init pointer J1939Tp shall be used. */
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
  \defgroup  J1939TpPCGetRootDataMacros  J1939Tp Get Root Data Macros (PRE_COMPILE)
  \brief  These are used to get data pointers of root data.
  \{
*/ 
#define J1939Tp_GetFinalMagicNumberOfPCConfig()                       
#define J1939Tp_GetInitDataHashCodeOfPCConfig()                       
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCGetConstantDuplicatedRootDataMacros  J1939Tp Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define J1939Tp_GetMainPeriodOfPCConfig()                             10U
#define J1939Tp_GetRxChannelOfPCConfig()                              J1939Tp_RxChannel  /**< the pointer to J1939Tp_RxChannel */
#define J1939Tp_GetRxChannelRxNSduOfPCConfig()                        J1939Tp_RxChannelRxNSdu  /**< the pointer to J1939Tp_RxChannelRxNSdu */
#define J1939Tp_GetRxChannelRxNSduRxNSduTableIndOfPCConfig()          J1939Tp_RxChannelRxNSduRxNSduTableInd  /**< the pointer to J1939Tp_RxChannelRxNSduRxNSduTableInd */
#define J1939Tp_GetRxPduOfPCConfig()                                  J1939Tp_RxPdu  /**< the pointer to J1939Tp_RxPdu */
#define J1939Tp_GetRxPduRxChannelOfPCConfig()                         J1939Tp_RxPduRxChannel  /**< the pointer to J1939Tp_RxPduRxChannel */
#define J1939Tp_GetRxPduRxChannelRxChannelTableIndOfPCConfig()        J1939Tp_RxPduRxChannelRxChannelTableInd  /**< the pointer to J1939Tp_RxPduRxChannelRxChannelTableInd */
#define J1939Tp_GetRxPduRxSduOfPCConfig()                             J1939Tp_RxPduRxSdu  /**< the pointer to J1939Tp_RxPduRxSdu */
#define J1939Tp_GetRxPduRxSduRxSduTableIndOfPCConfig()                J1939Tp_RxPduRxSduRxSduTableInd  /**< the pointer to J1939Tp_RxPduRxSduRxSduTableInd */
#define J1939Tp_GetRxPduTxChannelOfPCConfig()                         J1939Tp_RxPduTxChannel  /**< the pointer to J1939Tp_RxPduTxChannel */
#define J1939Tp_GetRxPduTxChannelTxChannelTableIndOfPCConfig()        J1939Tp_RxPduTxChannelTxChannelTableInd  /**< the pointer to J1939Tp_RxPduTxChannelTxChannelTableInd */
#define J1939Tp_GetRxSduOfPCConfig()                                  J1939Tp_RxSdu  /**< the pointer to J1939Tp_RxSdu */
#define J1939Tp_GetRxSduStateOfPCConfig()                             J1939Tp_RxSduState.raw  /**< the pointer to J1939Tp_RxSduState */
#define J1939Tp_GetSizeOfRxChannelOfPCConfig()                        1U  /**< the number of accomplishable value elements in J1939Tp_RxChannel */
#define J1939Tp_GetSizeOfRxChannelRxNSduOfPCConfig()                  2U  /**< the number of accomplishable value elements in J1939Tp_RxChannelRxNSdu */
#define J1939Tp_GetSizeOfRxChannelRxNSduRxNSduTableIndOfPCConfig()    2U  /**< the number of accomplishable value elements in J1939Tp_RxChannelRxNSduRxNSduTableInd */
#define J1939Tp_GetSizeOfRxPduOfPCConfig()                            4U  /**< the number of accomplishable value elements in J1939Tp_RxPdu */
#define J1939Tp_GetSizeOfRxPduRxChannelOfPCConfig()                   3U  /**< the number of accomplishable value elements in J1939Tp_RxPduRxChannel */
#define J1939Tp_GetSizeOfRxPduRxChannelRxChannelTableIndOfPCConfig()  3U  /**< the number of accomplishable value elements in J1939Tp_RxPduRxChannelRxChannelTableInd */
#define J1939Tp_GetSizeOfRxPduRxSduOfPCConfig()                       1U  /**< the number of accomplishable value elements in J1939Tp_RxPduRxSdu */
#define J1939Tp_GetSizeOfRxPduRxSduRxSduTableIndOfPCConfig()          1U  /**< the number of accomplishable value elements in J1939Tp_RxPduRxSduRxSduTableInd */
#define J1939Tp_GetSizeOfRxPduTxChannelOfPCConfig()                   2U  /**< the number of accomplishable value elements in J1939Tp_RxPduTxChannel */
#define J1939Tp_GetSizeOfRxPduTxChannelTxChannelTableIndOfPCConfig()  2U  /**< the number of accomplishable value elements in J1939Tp_RxPduTxChannelTxChannelTableInd */
#define J1939Tp_GetSizeOfRxSduOfPCConfig()                            2U  /**< the number of accomplishable value elements in J1939Tp_RxSdu */
#define J1939Tp_GetSizeOfRxSduStateOfPCConfig()                       2U  /**< the number of accomplishable value elements in J1939Tp_RxSduState */
#define J1939Tp_GetSizeOfTxChannelOfPCConfig()                        2U  /**< the number of accomplishable value elements in J1939Tp_TxChannel */
#define J1939Tp_GetSizeOfTxChannelTxNSduOfPCConfig()                  2U  /**< the number of accomplishable value elements in J1939Tp_TxChannelTxNSdu */
#define J1939Tp_GetSizeOfTxChannelTxNSduTxNSduTableIndOfPCConfig()    2U  /**< the number of accomplishable value elements in J1939Tp_TxChannelTxNSduTxNSduTableInd */
#define J1939Tp_GetSizeOfTxPduOfPCConfig()                            4U  /**< the number of accomplishable value elements in J1939Tp_TxPdu */
#define J1939Tp_GetSizeOfTxPduRxChannelOfPCConfig()                   1U  /**< the number of accomplishable value elements in J1939Tp_TxPduRxChannel */
#define J1939Tp_GetSizeOfTxPduRxChannelRxChannelTableIndOfPCConfig()  1U  /**< the number of accomplishable value elements in J1939Tp_TxPduRxChannelRxChannelTableInd */
#define J1939Tp_GetSizeOfTxPduStateOfPCConfig()                       4U  /**< the number of accomplishable value elements in J1939Tp_TxPduState */
#define J1939Tp_GetSizeOfTxPduTxChannelOfPCConfig()                   5U  /**< the number of accomplishable value elements in J1939Tp_TxPduTxChannel */
#define J1939Tp_GetSizeOfTxPduTxChannelTxChannelTableIndOfPCConfig()  5U  /**< the number of accomplishable value elements in J1939Tp_TxPduTxChannelTxChannelTableInd */
#define J1939Tp_GetSizeOfTxSduOfPCConfig()                            2U  /**< the number of accomplishable value elements in J1939Tp_TxSdu */
#define J1939Tp_GetSizeOfTxSduStateOfPCConfig()                       2U  /**< the number of accomplishable value elements in J1939Tp_TxSduState */
#define J1939Tp_GetTime_BamOfPCConfig()                               5U
#define J1939Tp_GetTime_FpOfPCConfig()                                10U
#define J1939Tp_GetTime_T1OfPCConfig()                                75U
#define J1939Tp_GetTime_T2OfPCConfig()                                125U
#define J1939Tp_GetTime_T3OfPCConfig()                                125U
#define J1939Tp_GetTime_T4OfPCConfig()                                105U
#define J1939Tp_GetTime_ThOfPCConfig()                                50U
#define J1939Tp_GetTime_TrOfPCConfig()                                20U
#define J1939Tp_GetTxChannelOfPCConfig()                              J1939Tp_TxChannel  /**< the pointer to J1939Tp_TxChannel */
#define J1939Tp_GetTxChannelTxNSduOfPCConfig()                        J1939Tp_TxChannelTxNSdu  /**< the pointer to J1939Tp_TxChannelTxNSdu */
#define J1939Tp_GetTxChannelTxNSduTxNSduTableIndOfPCConfig()          J1939Tp_TxChannelTxNSduTxNSduTableInd  /**< the pointer to J1939Tp_TxChannelTxNSduTxNSduTableInd */
#define J1939Tp_GetTxConfTimeoutOfPCConfig()                          150U
#define J1939Tp_GetTxPduOfPCConfig()                                  J1939Tp_TxPdu  /**< the pointer to J1939Tp_TxPdu */
#define J1939Tp_GetTxPduRxChannelOfPCConfig()                         J1939Tp_TxPduRxChannel  /**< the pointer to J1939Tp_TxPduRxChannel */
#define J1939Tp_GetTxPduRxChannelRxChannelTableIndOfPCConfig()        J1939Tp_TxPduRxChannelRxChannelTableInd  /**< the pointer to J1939Tp_TxPduRxChannelRxChannelTableInd */
#define J1939Tp_GetTxPduStateOfPCConfig()                             J1939Tp_TxPduState.raw  /**< the pointer to J1939Tp_TxPduState */
#define J1939Tp_GetTxPduTxChannelOfPCConfig()                         J1939Tp_TxPduTxChannel  /**< the pointer to J1939Tp_TxPduTxChannel */
#define J1939Tp_GetTxPduTxChannelTxChannelTableIndOfPCConfig()        J1939Tp_TxPduTxChannelTxChannelTableInd  /**< the pointer to J1939Tp_TxPduTxChannelTxChannelTableInd */
#define J1939Tp_GetTxSduOfPCConfig()                                  J1939Tp_TxSdu  /**< the pointer to J1939Tp_TxSdu */
#define J1939Tp_GetTxSduStateOfPCConfig()                             J1939Tp_TxSduState.raw  /**< the pointer to J1939Tp_TxSduState */
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCGetDataMacros  J1939Tp Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define J1939Tp_GetFppRxSduSequenceCounter(Index)                     
#define J1939Tp_GetFppTxSduSequenceCounter(Index)                     
#define J1939Tp_GetComMChannelOfRxChannel(Index)                      (J1939Tp_GetRxChannelOfPCConfig()[(Index)].ComMChannelOfRxChannel)
#define J1939Tp_IsRxCancellationSupportOfRxChannel(Index)             
#define J1939Tp_GetRxChannelRxNSduRxNSduTableIndEndIdxOfRxChannel(Index) (J1939Tp_GetRxChannelOfPCConfig()[(Index)].RxChannelRxNSduRxNSduTableIndEndIdxOfRxChannel)
#define J1939Tp_GetRxChannelRxNSduRxNSduTableIndStartIdxOfRxChannel(Index) (J1939Tp_GetRxChannelOfPCConfig()[(Index)].RxChannelRxNSduRxNSduTableIndStartIdxOfRxChannel)
#define J1939Tp_GetRxDaOfRxChannel(Index)                             (J1939Tp_GetRxChannelOfPCConfig()[(Index)].RxDaOfRxChannel)
#define J1939Tp_IsRxDynamicBlockCalculationOfRxChannel(Index)         
#define J1939Tp_GetRxDynamicBufferRatioOfRxChannel(Index)             (J1939Tp_GetRxChannelOfPCConfig()[(Index)].RxDynamicBufferRatioOfRxChannel)
#define J1939Tp_IsRxIsobusChannelOfRxChannel(Index)                   
#define J1939Tp_GetRxPacketsPerBlockOfRxChannel(Index)                (J1939Tp_GetRxChannelOfPCConfig()[(Index)].RxPacketsPerBlockOfRxChannel)
#define J1939Tp_GetRxProtocolTypeOfRxChannel(Index)                   (J1939Tp_GetRxChannelOfPCConfig()[(Index)].RxProtocolTypeOfRxChannel)
#define J1939Tp_IsRxRetrySupportOfRxChannel(Index)                    
#define J1939Tp_GetRxSaOfRxChannel(Index)                             (J1939Tp_GetRxChannelOfPCConfig()[(Index)].RxSaOfRxChannel)
#define J1939Tp_GetTxPduRxEtpFcNPduIdxOfRxChannel(Index)              
#define J1939Tp_IsTxPduRxEtpFcNPduUsedOfRxChannel(Index)              
#define J1939Tp_GetTxPduRxFcNPduIdxOfRxChannel(Index)                 (J1939Tp_GetRxChannelOfPCConfig()[(Index)].TxPduRxFcNPduIdxOfRxChannel)
#define J1939Tp_GetRxSduRxNSduIdxOfRxChannelRxNSdu(Index)             (J1939Tp_GetRxChannelRxNSduOfPCConfig()[(Index)].RxSduRxNSduIdxOfRxChannelRxNSdu)
#define J1939Tp_GetRxChannelRxNSduRxNSduTableInd(Index)               (J1939Tp_GetRxChannelRxNSduRxNSduTableIndOfPCConfig()[(Index)])
#define J1939Tp_IsInvalidHndOfRxPdu(Index)                            
#define J1939Tp_IsOnIsobusOfRxPdu(Index)                              
#define J1939Tp_GetPduFormatOfRxPdu(Index)                            (J1939Tp_GetRxPduOfPCConfig()[(Index)].PduFormatOfRxPdu)
#define J1939Tp_GetPduTypeOfRxPdu(Index)                              (J1939Tp_GetRxPduOfPCConfig()[(Index)].PduTypeOfRxPdu)
#define J1939Tp_GetRxPduRxChannelRxChannelTableIndEndIdxOfRxPdu(Index) (J1939Tp_GetRxPduOfPCConfig()[(Index)].RxPduRxChannelRxChannelTableIndEndIdxOfRxPdu)
#define J1939Tp_GetRxPduRxChannelRxChannelTableIndStartIdxOfRxPdu(Index) (J1939Tp_GetRxPduOfPCConfig()[(Index)].RxPduRxChannelRxChannelTableIndStartIdxOfRxPdu)
#define J1939Tp_GetRxPduRxSduRxSduTableIndEndIdxOfRxPdu(Index)        (J1939Tp_GetRxPduOfPCConfig()[(Index)].RxPduRxSduRxSduTableIndEndIdxOfRxPdu)
#define J1939Tp_GetRxPduRxSduRxSduTableIndStartIdxOfRxPdu(Index)      (J1939Tp_GetRxPduOfPCConfig()[(Index)].RxPduRxSduRxSduTableIndStartIdxOfRxPdu)
#define J1939Tp_GetRxPduTxChannelTxChannelTableIndEndIdxOfRxPdu(Index) (J1939Tp_GetRxPduOfPCConfig()[(Index)].RxPduTxChannelTxChannelTableIndEndIdxOfRxPdu)
#define J1939Tp_GetRxPduTxChannelTxChannelTableIndStartIdxOfRxPdu(Index) (J1939Tp_GetRxPduOfPCConfig()[(Index)].RxPduTxChannelTxChannelTableIndStartIdxOfRxPdu)
#define J1939Tp_GetRxChannelRxChannelIdxOfRxPduRxChannel(Index)       (J1939Tp_GetRxPduRxChannelOfPCConfig()[(Index)].RxChannelRxChannelIdxOfRxPduRxChannel)
#define J1939Tp_GetRxPduRxChannelRxChannelTableInd(Index)             (J1939Tp_GetRxPduRxChannelRxChannelTableIndOfPCConfig()[(Index)])
#define J1939Tp_GetRxSduRxSduIdxOfRxPduRxSdu(Index)                   (J1939Tp_GetRxPduRxSduOfPCConfig()[(Index)].RxSduRxSduIdxOfRxPduRxSdu)
#define J1939Tp_GetRxPduRxSduRxSduTableInd(Index)                     (J1939Tp_GetRxPduRxSduRxSduTableIndOfPCConfig()[(Index)])
#define J1939Tp_GetTxChannelTxChannelIdxOfRxPduTxChannel(Index)       (J1939Tp_GetRxPduTxChannelOfPCConfig()[(Index)].TxChannelTxChannelIdxOfRxPduTxChannel)
#define J1939Tp_GetRxPduTxChannelTxChannelTableInd(Index)             (J1939Tp_GetRxPduTxChannelTxChannelTableIndOfPCConfig()[(Index)])
#define J1939Tp_GetFppRxSduSequenceCounterIdxOfRxSdu(Index)           
#define J1939Tp_IsFppRxSduSequenceCounterUsedOfRxSdu(Index)           
#define J1939Tp_IsInvalidHndOfRxSdu(Index)                            
#define J1939Tp_IsIsVariableOfRxSdu(Index)                            ((J1939Tp_GetRxSduOfPCConfig()[(Index)].IsVariableOfRxSdu) != FALSE)
#define J1939Tp_GetMetaDataLengthOfRxSdu(Index)                       (J1939Tp_GetRxSduOfPCConfig()[(Index)].MetaDataLengthOfRxSdu)
#define J1939Tp_GetPGNOfRxSdu(Index)                                  (J1939Tp_GetRxSduOfPCConfig()[(Index)].PGNOfRxSdu)
#define J1939Tp_GetPduLengthOfRxSdu(Index)                            (J1939Tp_GetRxSduOfPCConfig()[(Index)].PduLengthOfRxSdu)
#define J1939Tp_GetRxChannelChannelIdxOfRxSdu(Index)                  (J1939Tp_GetRxSduOfPCConfig()[(Index)].RxChannelChannelIdxOfRxSdu)
#define J1939Tp_GetRxSduStateIdxOfRxSdu(Index)                        (J1939Tp_GetRxSduOfPCConfig()[(Index)].RxSduStateIdxOfRxSdu)
#define J1939Tp_GetSduIdOfRxSdu(Index)                                (J1939Tp_GetRxSduOfPCConfig()[(Index)].SduIdOfRxSdu)
#define J1939Tp_GetRxSduState(Index)                                  (J1939Tp_GetRxSduStateOfPCConfig()[(Index)])
#define J1939Tp_GetComMChannelOfTxChannel(Index)                      (J1939Tp_GetTxChannelOfPCConfig()[(Index)].ComMChannelOfTxChannel)
#define J1939Tp_IsTxCancellationSupportOfTxChannel(Index)             
#define J1939Tp_GetTxChannelTxNSduTxNSduTableIndEndIdxOfTxChannel(Index) (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxChannelTxNSduTxNSduTableIndEndIdxOfTxChannel)
#define J1939Tp_GetTxChannelTxNSduTxNSduTableIndStartIdxOfTxChannel(Index) (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxChannelTxNSduTxNSduTableIndStartIdxOfTxChannel)
#define J1939Tp_GetTxDaOfTxChannel(Index)                             (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxDaOfTxChannel)
#define J1939Tp_IsTxDynamicBlockCalculationOfTxChannel(Index)         
#define J1939Tp_IsTxIsobusChannelOfTxChannel(Index)                   
#define J1939Tp_GetTxMaxPacketsPerBlockOfTxChannel(Index)             (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxMaxPacketsPerBlockOfTxChannel)
#define J1939Tp_GetTxPduTxCmNPduIdxOfTxChannel(Index)                 (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxPduTxCmNPduIdxOfTxChannel)
#define J1939Tp_GetTxPduTxDtNPduIdxOfTxChannel(Index)                 (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxPduTxDtNPduIdxOfTxChannel)
#define J1939Tp_GetTxPduTxEtpCmNPduIdxOfTxChannel(Index)              
#define J1939Tp_IsTxPduTxEtpCmNPduUsedOfTxChannel(Index)              
#define J1939Tp_GetTxPduTxEtpDtNPduIdxOfTxChannel(Index)              
#define J1939Tp_IsTxPduTxEtpDtNPduUsedOfTxChannel(Index)              
#define J1939Tp_GetTxProtocolTypeOfTxChannel(Index)                   (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxProtocolTypeOfTxChannel)
#define J1939Tp_IsTxRetrySupportOfTxChannel(Index)                    
#define J1939Tp_GetTxSaOfTxChannel(Index)                             (J1939Tp_GetTxChannelOfPCConfig()[(Index)].TxSaOfTxChannel)
#define J1939Tp_GetTxSduTxNSduIdxOfTxChannelTxNSdu(Index)             (J1939Tp_GetTxChannelTxNSduOfPCConfig()[(Index)].TxSduTxNSduIdxOfTxChannelTxNSdu)
#define J1939Tp_GetTxChannelTxNSduTxNSduTableInd(Index)               (J1939Tp_GetTxChannelTxNSduTxNSduTableIndOfPCConfig()[(Index)])
#define J1939Tp_IsInvalidHndOfTxPdu(Index)                            
#define J1939Tp_IsOnIsobusOfTxPdu(Index)                              
#define J1939Tp_GetPduIdOfTxPdu(Index)                                (J1939Tp_GetTxPduOfPCConfig()[(Index)].PduIdOfTxPdu)
#define J1939Tp_GetPduTypeOfTxPdu(Index)                              (J1939Tp_GetTxPduOfPCConfig()[(Index)].PduTypeOfTxPdu)
#define J1939Tp_GetTxPduRxChannelRxChannelTableIndEndIdxOfTxPdu(Index) (J1939Tp_GetTxPduOfPCConfig()[(Index)].TxPduRxChannelRxChannelTableIndEndIdxOfTxPdu)
#define J1939Tp_GetTxPduRxChannelRxChannelTableIndStartIdxOfTxPdu(Index) (J1939Tp_GetTxPduOfPCConfig()[(Index)].TxPduRxChannelRxChannelTableIndStartIdxOfTxPdu)
#define J1939Tp_GetTxPduStateIdxOfTxPdu(Index)                        (J1939Tp_GetTxPduOfPCConfig()[(Index)].TxPduStateIdxOfTxPdu)
#define J1939Tp_GetTxPduTxChannelTxChannelTableIndEndIdxOfTxPdu(Index) (J1939Tp_GetTxPduOfPCConfig()[(Index)].TxPduTxChannelTxChannelTableIndEndIdxOfTxPdu)
#define J1939Tp_GetTxPduTxChannelTxChannelTableIndStartIdxOfTxPdu(Index) (J1939Tp_GetTxPduOfPCConfig()[(Index)].TxPduTxChannelTxChannelTableIndStartIdxOfTxPdu)
#define J1939Tp_GetRxChannelRxChannelIdxOfTxPduRxChannel(Index)       (J1939Tp_GetTxPduRxChannelOfPCConfig()[(Index)].RxChannelRxChannelIdxOfTxPduRxChannel)
#define J1939Tp_GetTxPduRxChannelRxChannelTableInd(Index)             (J1939Tp_GetTxPduRxChannelRxChannelTableIndOfPCConfig()[(Index)])
#define J1939Tp_GetTxPduState(Index)                                  (J1939Tp_GetTxPduStateOfPCConfig()[(Index)])
#define J1939Tp_GetTxChannelTxChannelIdxOfTxPduTxChannel(Index)       (J1939Tp_GetTxPduTxChannelOfPCConfig()[(Index)].TxChannelTxChannelIdxOfTxPduTxChannel)
#define J1939Tp_GetTxPduTxChannelTxChannelTableInd(Index)             (J1939Tp_GetTxPduTxChannelTxChannelTableIndOfPCConfig()[(Index)])
#define J1939Tp_GetFppTxSduSequenceCounterIdxOfTxSdu(Index)           
#define J1939Tp_IsFppTxSduSequenceCounterUsedOfTxSdu(Index)           
#define J1939Tp_IsInvalidHndOfTxSdu(Index)                            
#define J1939Tp_IsIsVariableOfTxSdu(Index)                            ((J1939Tp_GetTxSduOfPCConfig()[(Index)].IsVariableOfTxSdu) != FALSE)
#define J1939Tp_GetMetaDataLengthOfTxSdu(Index)                       (J1939Tp_GetTxSduOfPCConfig()[(Index)].MetaDataLengthOfTxSdu)
#define J1939Tp_GetPGNOfTxSdu(Index)                                  (J1939Tp_GetTxSduOfPCConfig()[(Index)].PGNOfTxSdu)
#define J1939Tp_GetPduFormatOfTxSdu(Index)                            (J1939Tp_GetTxSduOfPCConfig()[(Index)].PduFormatOfTxSdu)
#define J1939Tp_GetPduLengthOfTxSdu(Index)                            (J1939Tp_GetTxSduOfPCConfig()[(Index)].PduLengthOfTxSdu)
#define J1939Tp_GetSduIdOfTxSdu(Index)                                (J1939Tp_GetTxSduOfPCConfig()[(Index)].SduIdOfTxSdu)
#define J1939Tp_GetTxChannelChannelIdxOfTxSdu(Index)                  (J1939Tp_GetTxSduOfPCConfig()[(Index)].TxChannelChannelIdxOfTxSdu)
#define J1939Tp_GetTxPduDirectNPduIdxOfTxSdu(Index)                   (J1939Tp_GetTxSduOfPCConfig()[(Index)].TxPduDirectNPduIdxOfTxSdu)
#define J1939Tp_GetTxSduStateIdxOfTxSdu(Index)                        (J1939Tp_GetTxSduOfPCConfig()[(Index)].TxSduStateIdxOfTxSdu)
#define J1939Tp_GetTxSduState(Index)                                  (J1939Tp_GetTxSduStateOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCGetDeduplicatedDataMacros  J1939Tp Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define J1939Tp_GetFinalMagicNumber()                                 
#define J1939Tp_GetInitDataHashCode()                                 
#define J1939Tp_GetMainPeriod()                                       J1939Tp_GetMainPeriodOfPCConfig()
#define J1939Tp_IsRxChannelRxNSduRxNSduTableIndUsedOfRxChannel(Index) (((boolean)(J1939Tp_GetRxChannelRxNSduRxNSduTableIndStartIdxOfRxChannel(Index) != J1939TP_NO_RXCHANNELRXNSDURXNSDUTABLEINDSTARTIDXOFRXCHANNEL)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Tp_RxChannelRxNSduRxNSduTableInd */
#define J1939Tp_IsTxPduRxFcNPduUsedOfRxChannel(Index)                 (((boolean)(J1939Tp_GetTxPduRxFcNPduIdxOfRxChannel(Index) != J1939TP_NO_TXPDURXFCNPDUIDXOFRXCHANNEL)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Tp_TxPdu */
#define J1939Tp_IsRxPduRxChannelRxChannelTableIndUsedOfRxPdu(Index)   (((boolean)(J1939Tp_GetRxPduRxChannelRxChannelTableIndStartIdxOfRxPdu(Index) != J1939TP_NO_RXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFRXPDU)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Tp_RxPduRxChannelRxChannelTableInd */
#define J1939Tp_IsRxPduRxSduRxSduTableIndUsedOfRxPdu(Index)           (((boolean)(J1939Tp_GetRxPduRxSduRxSduTableIndStartIdxOfRxPdu(Index) != J1939TP_NO_RXPDURXSDURXSDUTABLEINDSTARTIDXOFRXPDU)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Tp_RxPduRxSduRxSduTableInd */
#define J1939Tp_IsRxPduTxChannelTxChannelTableIndUsedOfRxPdu(Index)   (((boolean)(J1939Tp_GetRxPduTxChannelTxChannelTableIndStartIdxOfRxPdu(Index) != J1939TP_NO_RXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFRXPDU)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Tp_RxPduTxChannelTxChannelTableInd */
#define J1939Tp_IsRxChannelChannelUsedOfRxSdu(Index)                  (((boolean)(J1939Tp_GetRxChannelChannelIdxOfRxSdu(Index) != J1939TP_NO_RXCHANNELCHANNELIDXOFRXSDU)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Tp_RxChannel */
#define J1939Tp_GetSizeOfRxChannel()                                  J1939Tp_GetSizeOfRxChannelOfPCConfig()
#define J1939Tp_GetSizeOfRxChannelRxNSdu()                            J1939Tp_GetSizeOfRxChannelRxNSduOfPCConfig()
#define J1939Tp_GetSizeOfRxChannelRxNSduRxNSduTableInd()              J1939Tp_GetSizeOfRxChannelRxNSduRxNSduTableIndOfPCConfig()
#define J1939Tp_GetSizeOfRxPdu()                                      J1939Tp_GetSizeOfRxPduOfPCConfig()
#define J1939Tp_GetSizeOfRxPduRxChannel()                             J1939Tp_GetSizeOfRxPduRxChannelOfPCConfig()
#define J1939Tp_GetSizeOfRxPduRxChannelRxChannelTableInd()            J1939Tp_GetSizeOfRxPduRxChannelRxChannelTableIndOfPCConfig()
#define J1939Tp_GetSizeOfRxPduRxSdu()                                 J1939Tp_GetSizeOfRxPduRxSduOfPCConfig()
#define J1939Tp_GetSizeOfRxPduRxSduRxSduTableInd()                    J1939Tp_GetSizeOfRxPduRxSduRxSduTableIndOfPCConfig()
#define J1939Tp_GetSizeOfRxPduTxChannel()                             J1939Tp_GetSizeOfRxPduTxChannelOfPCConfig()
#define J1939Tp_GetSizeOfRxPduTxChannelTxChannelTableInd()            J1939Tp_GetSizeOfRxPduTxChannelTxChannelTableIndOfPCConfig()
#define J1939Tp_GetSizeOfRxSdu()                                      J1939Tp_GetSizeOfRxSduOfPCConfig()
#define J1939Tp_GetSizeOfRxSduState()                                 J1939Tp_GetSizeOfRxSduStateOfPCConfig()
#define J1939Tp_GetSizeOfTxChannel()                                  J1939Tp_GetSizeOfTxChannelOfPCConfig()
#define J1939Tp_GetSizeOfTxChannelTxNSdu()                            J1939Tp_GetSizeOfTxChannelTxNSduOfPCConfig()
#define J1939Tp_GetSizeOfTxChannelTxNSduTxNSduTableInd()              J1939Tp_GetSizeOfTxChannelTxNSduTxNSduTableIndOfPCConfig()
#define J1939Tp_GetSizeOfTxPdu()                                      J1939Tp_GetSizeOfTxPduOfPCConfig()
#define J1939Tp_GetSizeOfTxPduRxChannel()                             J1939Tp_GetSizeOfTxPduRxChannelOfPCConfig()
#define J1939Tp_GetSizeOfTxPduRxChannelRxChannelTableInd()            J1939Tp_GetSizeOfTxPduRxChannelRxChannelTableIndOfPCConfig()
#define J1939Tp_GetSizeOfTxPduState()                                 J1939Tp_GetSizeOfTxPduStateOfPCConfig()
#define J1939Tp_GetSizeOfTxPduTxChannel()                             J1939Tp_GetSizeOfTxPduTxChannelOfPCConfig()
#define J1939Tp_GetSizeOfTxPduTxChannelTxChannelTableInd()            J1939Tp_GetSizeOfTxPduTxChannelTxChannelTableIndOfPCConfig()
#define J1939Tp_GetSizeOfTxSdu()                                      J1939Tp_GetSizeOfTxSduOfPCConfig()
#define J1939Tp_GetSizeOfTxSduState()                                 J1939Tp_GetSizeOfTxSduStateOfPCConfig()
#define J1939Tp_GetTime_Bam()                                         J1939Tp_GetTime_BamOfPCConfig()
#define J1939Tp_GetTime_Fp()                                          J1939Tp_GetTime_FpOfPCConfig()
#define J1939Tp_GetTime_T1()                                          J1939Tp_GetTime_T1OfPCConfig()
#define J1939Tp_GetTime_T2()                                          J1939Tp_GetTime_T2OfPCConfig()
#define J1939Tp_GetTime_T3()                                          J1939Tp_GetTime_T3OfPCConfig()
#define J1939Tp_GetTime_T4()                                          J1939Tp_GetTime_T4OfPCConfig()
#define J1939Tp_GetTime_Th()                                          J1939Tp_GetTime_ThOfPCConfig()
#define J1939Tp_GetTime_Tr()                                          J1939Tp_GetTime_TrOfPCConfig()
#define J1939Tp_IsTxChannelTxNSduTxNSduTableIndUsedOfTxChannel(Index) (((boolean)(J1939Tp_GetTxChannelTxNSduTxNSduTableIndStartIdxOfTxChannel(Index) != J1939TP_NO_TXCHANNELTXNSDUTXNSDUTABLEINDSTARTIDXOFTXCHANNEL)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Tp_TxChannelTxNSduTxNSduTableInd */
#define J1939Tp_IsTxPduTxCmNPduUsedOfTxChannel(Index)                 (((boolean)(J1939Tp_GetTxPduTxCmNPduIdxOfTxChannel(Index) != J1939TP_NO_TXPDUTXCMNPDUIDXOFTXCHANNEL)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Tp_TxPdu */
#define J1939Tp_IsTxPduTxDtNPduUsedOfTxChannel(Index)                 (((boolean)(J1939Tp_GetTxPduTxDtNPduIdxOfTxChannel(Index) != J1939TP_NO_TXPDUTXDTNPDUIDXOFTXCHANNEL)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Tp_TxPdu */
#define J1939Tp_GetTxConfTimeout()                                    J1939Tp_GetTxConfTimeoutOfPCConfig()
#define J1939Tp_IsTxPduRxChannelRxChannelTableIndUsedOfTxPdu(Index)   (((boolean)(J1939Tp_GetTxPduRxChannelRxChannelTableIndStartIdxOfTxPdu(Index) != J1939TP_NO_TXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFTXPDU)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Tp_TxPduRxChannelRxChannelTableInd */
#define J1939Tp_IsTxPduTxChannelTxChannelTableIndUsedOfTxPdu(Index)   (((boolean)(J1939Tp_GetTxPduTxChannelTxChannelTableIndStartIdxOfTxPdu(Index) != J1939TP_NO_TXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFTXPDU)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Tp_TxPduTxChannelTxChannelTableInd */
#define J1939Tp_IsTxChannelChannelUsedOfTxSdu(Index)                  (((boolean)(J1939Tp_GetTxChannelChannelIdxOfTxSdu(Index) != J1939TP_NO_TXCHANNELCHANNELIDXOFTXSDU)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Tp_TxChannel */
#define J1939Tp_IsTxPduDirectNPduUsedOfTxSdu(Index)                   (((boolean)(J1939Tp_GetTxPduDirectNPduIdxOfTxSdu(Index) != J1939TP_NO_TXPDUDIRECTNPDUIDXOFTXSDU)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Tp_TxPdu */
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCSetDataMacros  J1939Tp Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define J1939Tp_SetFppRxSduSequenceCounter(Index, Value)              
#define J1939Tp_SetFppTxSduSequenceCounter(Index, Value)              
#define J1939Tp_SetRxSduState(Index, Value)                           J1939Tp_GetRxSduStateOfPCConfig()[(Index)] = (Value)
#define J1939Tp_SetTxPduState(Index, Value)                           J1939Tp_GetTxPduStateOfPCConfig()[(Index)] = (Value)
#define J1939Tp_SetTxSduState(Index, Value)                           J1939Tp_GetTxSduStateOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCHasMacros  J1939Tp Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define J1939Tp_HasFinalMagicNumber()                                 
#define J1939Tp_HasFppRxSduSequenceCounter()                          
#define J1939Tp_HasFppTxSduSequenceCounter()                          
#define J1939Tp_HasInitDataHashCode()                                 
#define J1939Tp_HasMainPeriod()                                       (TRUE != FALSE)
#define J1939Tp_HasRxChannel()                                        (TRUE != FALSE)
#define J1939Tp_HasComMChannelOfRxChannel()                           (TRUE != FALSE)
#define J1939Tp_HasRxCancellationSupportOfRxChannel()                 
#define J1939Tp_HasRxChannelRxNSduRxNSduTableIndEndIdxOfRxChannel()   (TRUE != FALSE)
#define J1939Tp_HasRxChannelRxNSduRxNSduTableIndStartIdxOfRxChannel() (TRUE != FALSE)
#define J1939Tp_HasRxChannelRxNSduRxNSduTableIndUsedOfRxChannel()     (TRUE != FALSE)
#define J1939Tp_HasRxDaOfRxChannel()                                  (TRUE != FALSE)
#define J1939Tp_HasRxDynamicBlockCalculationOfRxChannel()             
#define J1939Tp_HasRxDynamicBufferRatioOfRxChannel()                  (TRUE != FALSE)
#define J1939Tp_HasRxIsobusChannelOfRxChannel()                       
#define J1939Tp_HasRxPacketsPerBlockOfRxChannel()                     (TRUE != FALSE)
#define J1939Tp_HasRxProtocolTypeOfRxChannel()                        (TRUE != FALSE)
#define J1939Tp_HasRxRetrySupportOfRxChannel()                        
#define J1939Tp_HasRxSaOfRxChannel()                                  (TRUE != FALSE)
#define J1939Tp_HasTxPduRxEtpFcNPduIdxOfRxChannel()                   
#define J1939Tp_HasTxPduRxEtpFcNPduUsedOfRxChannel()                  
#define J1939Tp_HasTxPduRxFcNPduIdxOfRxChannel()                      (TRUE != FALSE)
#define J1939Tp_HasTxPduRxFcNPduUsedOfRxChannel()                     (TRUE != FALSE)
#define J1939Tp_HasRxChannelRxNSdu()                                  (TRUE != FALSE)
#define J1939Tp_HasRxSduRxNSduIdxOfRxChannelRxNSdu()                  (TRUE != FALSE)
#define J1939Tp_HasRxChannelRxNSduRxNSduTableInd()                    (TRUE != FALSE)
#define J1939Tp_HasRxPdu()                                            (TRUE != FALSE)
#define J1939Tp_HasInvalidHndOfRxPdu()                                
#define J1939Tp_HasOnIsobusOfRxPdu()                                  
#define J1939Tp_HasPduFormatOfRxPdu()                                 (TRUE != FALSE)
#define J1939Tp_HasPduTypeOfRxPdu()                                   (TRUE != FALSE)
#define J1939Tp_HasRxPduRxChannelRxChannelTableIndEndIdxOfRxPdu()     (TRUE != FALSE)
#define J1939Tp_HasRxPduRxChannelRxChannelTableIndStartIdxOfRxPdu()   (TRUE != FALSE)
#define J1939Tp_HasRxPduRxChannelRxChannelTableIndUsedOfRxPdu()       (TRUE != FALSE)
#define J1939Tp_HasRxPduRxSduRxSduTableIndEndIdxOfRxPdu()             (TRUE != FALSE)
#define J1939Tp_HasRxPduRxSduRxSduTableIndStartIdxOfRxPdu()           (TRUE != FALSE)
#define J1939Tp_HasRxPduRxSduRxSduTableIndUsedOfRxPdu()               (TRUE != FALSE)
#define J1939Tp_HasRxPduTxChannelTxChannelTableIndEndIdxOfRxPdu()     (TRUE != FALSE)
#define J1939Tp_HasRxPduTxChannelTxChannelTableIndStartIdxOfRxPdu()   (TRUE != FALSE)
#define J1939Tp_HasRxPduTxChannelTxChannelTableIndUsedOfRxPdu()       (TRUE != FALSE)
#define J1939Tp_HasRxPduRxChannel()                                   (TRUE != FALSE)
#define J1939Tp_HasRxChannelRxChannelIdxOfRxPduRxChannel()            (TRUE != FALSE)
#define J1939Tp_HasRxPduRxChannelRxChannelTableInd()                  (TRUE != FALSE)
#define J1939Tp_HasRxPduRxSdu()                                       (TRUE != FALSE)
#define J1939Tp_HasRxSduRxSduIdxOfRxPduRxSdu()                        (TRUE != FALSE)
#define J1939Tp_HasRxPduRxSduRxSduTableInd()                          (TRUE != FALSE)
#define J1939Tp_HasRxPduTxChannel()                                   (TRUE != FALSE)
#define J1939Tp_HasTxChannelTxChannelIdxOfRxPduTxChannel()            (TRUE != FALSE)
#define J1939Tp_HasRxPduTxChannelTxChannelTableInd()                  (TRUE != FALSE)
#define J1939Tp_HasRxSdu()                                            (TRUE != FALSE)
#define J1939Tp_HasFppRxSduSequenceCounterIdxOfRxSdu()                
#define J1939Tp_HasFppRxSduSequenceCounterUsedOfRxSdu()               
#define J1939Tp_HasInvalidHndOfRxSdu()                                
#define J1939Tp_HasIsVariableOfRxSdu()                                (TRUE != FALSE)
#define J1939Tp_HasMetaDataLengthOfRxSdu()                            (TRUE != FALSE)
#define J1939Tp_HasPGNOfRxSdu()                                       (TRUE != FALSE)
#define J1939Tp_HasPduLengthOfRxSdu()                                 (TRUE != FALSE)
#define J1939Tp_HasRxChannelChannelIdxOfRxSdu()                       (TRUE != FALSE)
#define J1939Tp_HasRxChannelChannelUsedOfRxSdu()                      (TRUE != FALSE)
#define J1939Tp_HasRxSduStateIdxOfRxSdu()                             (TRUE != FALSE)
#define J1939Tp_HasSduIdOfRxSdu()                                     (TRUE != FALSE)
#define J1939Tp_HasRxSduState()                                       (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxChannel()                                  (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxChannelRxNSdu()                            (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxChannelRxNSduRxNSduTableInd()              (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPdu()                                      (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduRxChannel()                             (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduRxChannelRxChannelTableInd()            (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduRxSdu()                                 (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduRxSduRxSduTableInd()                    (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduTxChannel()                             (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduTxChannelTxChannelTableInd()            (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxSdu()                                      (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxSduState()                                 (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxChannel()                                  (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxChannelTxNSdu()                            (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxChannelTxNSduTxNSduTableInd()              (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPdu()                                      (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduRxChannel()                             (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduRxChannelRxChannelTableInd()            (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduState()                                 (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduTxChannel()                             (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduTxChannelTxChannelTableInd()            (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxSdu()                                      (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxSduState()                                 (TRUE != FALSE)
#define J1939Tp_HasTime_Bam()                                         (TRUE != FALSE)
#define J1939Tp_HasTime_Fp()                                          (TRUE != FALSE)
#define J1939Tp_HasTime_T1()                                          (TRUE != FALSE)
#define J1939Tp_HasTime_T2()                                          (TRUE != FALSE)
#define J1939Tp_HasTime_T3()                                          (TRUE != FALSE)
#define J1939Tp_HasTime_T4()                                          (TRUE != FALSE)
#define J1939Tp_HasTime_Th()                                          (TRUE != FALSE)
#define J1939Tp_HasTime_Tr()                                          (TRUE != FALSE)
#define J1939Tp_HasTxChannel()                                        (TRUE != FALSE)
#define J1939Tp_HasComMChannelOfTxChannel()                           (TRUE != FALSE)
#define J1939Tp_HasTxCancellationSupportOfTxChannel()                 
#define J1939Tp_HasTxChannelTxNSduTxNSduTableIndEndIdxOfTxChannel()   (TRUE != FALSE)
#define J1939Tp_HasTxChannelTxNSduTxNSduTableIndStartIdxOfTxChannel() (TRUE != FALSE)
#define J1939Tp_HasTxChannelTxNSduTxNSduTableIndUsedOfTxChannel()     (TRUE != FALSE)
#define J1939Tp_HasTxDaOfTxChannel()                                  (TRUE != FALSE)
#define J1939Tp_HasTxDynamicBlockCalculationOfTxChannel()             
#define J1939Tp_HasTxIsobusChannelOfTxChannel()                       
#define J1939Tp_HasTxMaxPacketsPerBlockOfTxChannel()                  (TRUE != FALSE)
#define J1939Tp_HasTxPduTxCmNPduIdxOfTxChannel()                      (TRUE != FALSE)
#define J1939Tp_HasTxPduTxCmNPduUsedOfTxChannel()                     (TRUE != FALSE)
#define J1939Tp_HasTxPduTxDtNPduIdxOfTxChannel()                      (TRUE != FALSE)
#define J1939Tp_HasTxPduTxDtNPduUsedOfTxChannel()                     (TRUE != FALSE)
#define J1939Tp_HasTxPduTxEtpCmNPduIdxOfTxChannel()                   
#define J1939Tp_HasTxPduTxEtpCmNPduUsedOfTxChannel()                  
#define J1939Tp_HasTxPduTxEtpDtNPduIdxOfTxChannel()                   
#define J1939Tp_HasTxPduTxEtpDtNPduUsedOfTxChannel()                  
#define J1939Tp_HasTxProtocolTypeOfTxChannel()                        (TRUE != FALSE)
#define J1939Tp_HasTxRetrySupportOfTxChannel()                        
#define J1939Tp_HasTxSaOfTxChannel()                                  (TRUE != FALSE)
#define J1939Tp_HasTxChannelTxNSdu()                                  (TRUE != FALSE)
#define J1939Tp_HasTxSduTxNSduIdxOfTxChannelTxNSdu()                  (TRUE != FALSE)
#define J1939Tp_HasTxChannelTxNSduTxNSduTableInd()                    (TRUE != FALSE)
#define J1939Tp_HasTxConfTimeout()                                    (TRUE != FALSE)
#define J1939Tp_HasTxPdu()                                            (TRUE != FALSE)
#define J1939Tp_HasInvalidHndOfTxPdu()                                
#define J1939Tp_HasOnIsobusOfTxPdu()                                  
#define J1939Tp_HasPduIdOfTxPdu()                                     (TRUE != FALSE)
#define J1939Tp_HasPduTypeOfTxPdu()                                   (TRUE != FALSE)
#define J1939Tp_HasTxPduRxChannelRxChannelTableIndEndIdxOfTxPdu()     (TRUE != FALSE)
#define J1939Tp_HasTxPduRxChannelRxChannelTableIndStartIdxOfTxPdu()   (TRUE != FALSE)
#define J1939Tp_HasTxPduRxChannelRxChannelTableIndUsedOfTxPdu()       (TRUE != FALSE)
#define J1939Tp_HasTxPduStateIdxOfTxPdu()                             (TRUE != FALSE)
#define J1939Tp_HasTxPduTxChannelTxChannelTableIndEndIdxOfTxPdu()     (TRUE != FALSE)
#define J1939Tp_HasTxPduTxChannelTxChannelTableIndStartIdxOfTxPdu()   (TRUE != FALSE)
#define J1939Tp_HasTxPduTxChannelTxChannelTableIndUsedOfTxPdu()       (TRUE != FALSE)
#define J1939Tp_HasTxPduRxChannel()                                   (TRUE != FALSE)
#define J1939Tp_HasRxChannelRxChannelIdxOfTxPduRxChannel()            (TRUE != FALSE)
#define J1939Tp_HasTxPduRxChannelRxChannelTableInd()                  (TRUE != FALSE)
#define J1939Tp_HasTxPduState()                                       (TRUE != FALSE)
#define J1939Tp_HasTxPduTxChannel()                                   (TRUE != FALSE)
#define J1939Tp_HasTxChannelTxChannelIdxOfTxPduTxChannel()            (TRUE != FALSE)
#define J1939Tp_HasTxPduTxChannelTxChannelTableInd()                  (TRUE != FALSE)
#define J1939Tp_HasTxSdu()                                            (TRUE != FALSE)
#define J1939Tp_HasFppTxSduSequenceCounterIdxOfTxSdu()                
#define J1939Tp_HasFppTxSduSequenceCounterUsedOfTxSdu()               
#define J1939Tp_HasInvalidHndOfTxSdu()                                
#define J1939Tp_HasIsVariableOfTxSdu()                                (TRUE != FALSE)
#define J1939Tp_HasMetaDataLengthOfTxSdu()                            (TRUE != FALSE)
#define J1939Tp_HasPGNOfTxSdu()                                       (TRUE != FALSE)
#define J1939Tp_HasPduFormatOfTxSdu()                                 (TRUE != FALSE)
#define J1939Tp_HasPduLengthOfTxSdu()                                 (TRUE != FALSE)
#define J1939Tp_HasSduIdOfTxSdu()                                     (TRUE != FALSE)
#define J1939Tp_HasTxChannelChannelIdxOfTxSdu()                       (TRUE != FALSE)
#define J1939Tp_HasTxChannelChannelUsedOfTxSdu()                      (TRUE != FALSE)
#define J1939Tp_HasTxPduDirectNPduIdxOfTxSdu()                        (TRUE != FALSE)
#define J1939Tp_HasTxPduDirectNPduUsedOfTxSdu()                       (TRUE != FALSE)
#define J1939Tp_HasTxSduStateIdxOfTxSdu()                             (TRUE != FALSE)
#define J1939Tp_HasTxSduState()                                       (TRUE != FALSE)
#define J1939Tp_HasPCConfig()                                         (TRUE != FALSE)
#define J1939Tp_HasFinalMagicNumberOfPCConfig()                       
#define J1939Tp_HasInitDataHashCodeOfPCConfig()                       
#define J1939Tp_HasMainPeriodOfPCConfig()                             (TRUE != FALSE)
#define J1939Tp_HasRxChannelOfPCConfig()                              (TRUE != FALSE)
#define J1939Tp_HasRxChannelRxNSduOfPCConfig()                        (TRUE != FALSE)
#define J1939Tp_HasRxChannelRxNSduRxNSduTableIndOfPCConfig()          (TRUE != FALSE)
#define J1939Tp_HasRxPduOfPCConfig()                                  (TRUE != FALSE)
#define J1939Tp_HasRxPduRxChannelOfPCConfig()                         (TRUE != FALSE)
#define J1939Tp_HasRxPduRxChannelRxChannelTableIndOfPCConfig()        (TRUE != FALSE)
#define J1939Tp_HasRxPduRxSduOfPCConfig()                             (TRUE != FALSE)
#define J1939Tp_HasRxPduRxSduRxSduTableIndOfPCConfig()                (TRUE != FALSE)
#define J1939Tp_HasRxPduTxChannelOfPCConfig()                         (TRUE != FALSE)
#define J1939Tp_HasRxPduTxChannelTxChannelTableIndOfPCConfig()        (TRUE != FALSE)
#define J1939Tp_HasRxSduOfPCConfig()                                  (TRUE != FALSE)
#define J1939Tp_HasRxSduStateOfPCConfig()                             (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxChannelOfPCConfig()                        (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxChannelRxNSduOfPCConfig()                  (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxChannelRxNSduRxNSduTableIndOfPCConfig()    (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduOfPCConfig()                            (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduRxChannelOfPCConfig()                   (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduRxChannelRxChannelTableIndOfPCConfig()  (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduRxSduOfPCConfig()                       (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduRxSduRxSduTableIndOfPCConfig()          (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduTxChannelOfPCConfig()                   (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxPduTxChannelTxChannelTableIndOfPCConfig()  (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxSduOfPCConfig()                            (TRUE != FALSE)
#define J1939Tp_HasSizeOfRxSduStateOfPCConfig()                       (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxChannelOfPCConfig()                        (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxChannelTxNSduOfPCConfig()                  (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxChannelTxNSduTxNSduTableIndOfPCConfig()    (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduOfPCConfig()                            (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduRxChannelOfPCConfig()                   (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduRxChannelRxChannelTableIndOfPCConfig()  (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduStateOfPCConfig()                       (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduTxChannelOfPCConfig()                   (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxPduTxChannelTxChannelTableIndOfPCConfig()  (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxSduOfPCConfig()                            (TRUE != FALSE)
#define J1939Tp_HasSizeOfTxSduStateOfPCConfig()                       (TRUE != FALSE)
#define J1939Tp_HasTime_BamOfPCConfig()                               (TRUE != FALSE)
#define J1939Tp_HasTime_FpOfPCConfig()                                (TRUE != FALSE)
#define J1939Tp_HasTime_T1OfPCConfig()                                (TRUE != FALSE)
#define J1939Tp_HasTime_T2OfPCConfig()                                (TRUE != FALSE)
#define J1939Tp_HasTime_T3OfPCConfig()                                (TRUE != FALSE)
#define J1939Tp_HasTime_T4OfPCConfig()                                (TRUE != FALSE)
#define J1939Tp_HasTime_ThOfPCConfig()                                (TRUE != FALSE)
#define J1939Tp_HasTime_TrOfPCConfig()                                (TRUE != FALSE)
#define J1939Tp_HasTxChannelOfPCConfig()                              (TRUE != FALSE)
#define J1939Tp_HasTxChannelTxNSduOfPCConfig()                        (TRUE != FALSE)
#define J1939Tp_HasTxChannelTxNSduTxNSduTableIndOfPCConfig()          (TRUE != FALSE)
#define J1939Tp_HasTxConfTimeoutOfPCConfig()                          (TRUE != FALSE)
#define J1939Tp_HasTxPduOfPCConfig()                                  (TRUE != FALSE)
#define J1939Tp_HasTxPduRxChannelOfPCConfig()                         (TRUE != FALSE)
#define J1939Tp_HasTxPduRxChannelRxChannelTableIndOfPCConfig()        (TRUE != FALSE)
#define J1939Tp_HasTxPduStateOfPCConfig()                             (TRUE != FALSE)
#define J1939Tp_HasTxPduTxChannelOfPCConfig()                         (TRUE != FALSE)
#define J1939Tp_HasTxPduTxChannelTxChannelTableIndOfPCConfig()        (TRUE != FALSE)
#define J1939Tp_HasTxSduOfPCConfig()                                  (TRUE != FALSE)
#define J1939Tp_HasTxSduStateOfPCConfig()                             (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCIncrementDataMacros  J1939Tp Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define J1939Tp_IncFppRxSduSequenceCounter(Index)                     
#define J1939Tp_IncFppTxSduSequenceCounter(Index)                     
#define J1939Tp_IncRxSduState(Index)                                  J1939Tp_GetRxSduState(Index)++
#define J1939Tp_IncTxPduState(Index)                                  J1939Tp_GetTxPduState(Index)++
#define J1939Tp_IncTxSduState(Index)                                  J1939Tp_GetTxSduState(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCDecrementDataMacros  J1939Tp Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define J1939Tp_DecFppRxSduSequenceCounter(Index)                     
#define J1939Tp_DecFppTxSduSequenceCounter(Index)                     
#define J1939Tp_DecRxSduState(Index)                                  J1939Tp_GetRxSduState(Index)--
#define J1939Tp_DecTxPduState(Index)                                  J1939Tp_GetTxPduState(Index)--
#define J1939Tp_DecTxSduState(Index)                                  J1939Tp_GetTxSduState(Index)--
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
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  J1939TpPCIterableTypes  J1939Tp Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate J1939Tp_RxChannel */
typedef uint8_least J1939Tp_RxChannelIterType;

/**   \brief  type used to iterate J1939Tp_RxChannelRxNSdu */
typedef uint8_least J1939Tp_RxChannelRxNSduIterType;

/**   \brief  type used to iterate J1939Tp_RxChannelRxNSduRxNSduTableInd */
typedef uint8_least J1939Tp_RxChannelRxNSduRxNSduTableIndIterType;

/**   \brief  type used to iterate J1939Tp_RxPdu */
typedef uint8_least J1939Tp_RxPduIterType;

/**   \brief  type used to iterate J1939Tp_RxPduRxChannel */
typedef uint8_least J1939Tp_RxPduRxChannelIterType;

/**   \brief  type used to iterate J1939Tp_RxPduRxChannelRxChannelTableInd */
typedef uint8_least J1939Tp_RxPduRxChannelRxChannelTableIndIterType;

/**   \brief  type used to iterate J1939Tp_RxPduRxSdu */
typedef uint8_least J1939Tp_RxPduRxSduIterType;

/**   \brief  type used to iterate J1939Tp_RxPduRxSduRxSduTableInd */
typedef uint8_least J1939Tp_RxPduRxSduRxSduTableIndIterType;

/**   \brief  type used to iterate J1939Tp_RxPduTxChannel */
typedef uint8_least J1939Tp_RxPduTxChannelIterType;

/**   \brief  type used to iterate J1939Tp_RxPduTxChannelTxChannelTableInd */
typedef uint8_least J1939Tp_RxPduTxChannelTxChannelTableIndIterType;

/**   \brief  type used to iterate J1939Tp_RxSdu */
typedef uint8_least J1939Tp_RxSduIterType;

/**   \brief  type used to iterate J1939Tp_RxSduState */
typedef uint8_least J1939Tp_RxSduStateIterType;

/**   \brief  type used to iterate J1939Tp_TxChannel */
typedef uint8_least J1939Tp_TxChannelIterType;

/**   \brief  type used to iterate J1939Tp_TxChannelTxNSdu */
typedef uint8_least J1939Tp_TxChannelTxNSduIterType;

/**   \brief  type used to iterate J1939Tp_TxChannelTxNSduTxNSduTableInd */
typedef uint8_least J1939Tp_TxChannelTxNSduTxNSduTableIndIterType;

/**   \brief  type used to iterate J1939Tp_TxPdu */
typedef uint8_least J1939Tp_TxPduIterType;

/**   \brief  type used to iterate J1939Tp_TxPduRxChannel */
typedef uint8_least J1939Tp_TxPduRxChannelIterType;

/**   \brief  type used to iterate J1939Tp_TxPduRxChannelRxChannelTableInd */
typedef uint8_least J1939Tp_TxPduRxChannelRxChannelTableIndIterType;

/**   \brief  type used to iterate J1939Tp_TxPduState */
typedef uint8_least J1939Tp_TxPduStateIterType;

/**   \brief  type used to iterate J1939Tp_TxPduTxChannel */
typedef uint8_least J1939Tp_TxPduTxChannelIterType;

/**   \brief  type used to iterate J1939Tp_TxPduTxChannelTxChannelTableInd */
typedef uint8_least J1939Tp_TxPduTxChannelTxChannelTableIndIterType;

/**   \brief  type used to iterate J1939Tp_TxSdu */
typedef uint8_least J1939Tp_TxSduIterType;

/**   \brief  type used to iterate J1939Tp_TxSduState */
typedef uint8_least J1939Tp_TxSduStateIterType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCValueTypes  J1939Tp Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for J1939Tp_MainPeriod */
typedef uint8 J1939Tp_MainPeriodType;

/**   \brief  value based type definition for J1939Tp_ComMChannelOfRxChannel */
typedef NetworkHandleType J1939Tp_ComMChannelOfRxChannelType;

/**   \brief  value based type definition for J1939Tp_RxChannelRxNSduRxNSduTableIndEndIdxOfRxChannel */
typedef uint8 J1939Tp_RxChannelRxNSduRxNSduTableIndEndIdxOfRxChannelType;

/**   \brief  value based type definition for J1939Tp_RxChannelRxNSduRxNSduTableIndStartIdxOfRxChannel */
typedef uint8 J1939Tp_RxChannelRxNSduRxNSduTableIndStartIdxOfRxChannelType;

/**   \brief  value based type definition for J1939Tp_RxChannelRxNSduRxNSduTableIndUsedOfRxChannel */
typedef boolean J1939Tp_RxChannelRxNSduRxNSduTableIndUsedOfRxChannelType;

/**   \brief  value based type definition for J1939Tp_RxDaOfRxChannel */
typedef uint8 J1939Tp_RxDaOfRxChannelType;

/**   \brief  value based type definition for J1939Tp_RxDynamicBufferRatioOfRxChannel */
typedef uint8 J1939Tp_RxDynamicBufferRatioOfRxChannelType;

/**   \brief  value based type definition for J1939Tp_RxPacketsPerBlockOfRxChannel */
typedef uint8 J1939Tp_RxPacketsPerBlockOfRxChannelType;

/**   \brief  value based type definition for J1939Tp_RxProtocolTypeOfRxChannel */
typedef uint8 J1939Tp_RxProtocolTypeOfRxChannelType;

/**   \brief  value based type definition for J1939Tp_RxSaOfRxChannel */
typedef uint8 J1939Tp_RxSaOfRxChannelType;

/**   \brief  value based type definition for J1939Tp_TxPduRxFcNPduIdxOfRxChannel */
typedef uint8 J1939Tp_TxPduRxFcNPduIdxOfRxChannelType;

/**   \brief  value based type definition for J1939Tp_TxPduRxFcNPduUsedOfRxChannel */
typedef boolean J1939Tp_TxPduRxFcNPduUsedOfRxChannelType;

/**   \brief  value based type definition for J1939Tp_RxSduRxNSduIdxOfRxChannelRxNSdu */
typedef uint8 J1939Tp_RxSduRxNSduIdxOfRxChannelRxNSduType;

/**   \brief  value based type definition for J1939Tp_RxChannelRxNSduRxNSduTableInd */
typedef uint8 J1939Tp_RxChannelRxNSduRxNSduTableIndType;

/**   \brief  value based type definition for J1939Tp_PduFormatOfRxPdu */
typedef uint8 J1939Tp_PduFormatOfRxPduType;

/**   \brief  value based type definition for J1939Tp_PduTypeOfRxPdu */
typedef uint8 J1939Tp_PduTypeOfRxPduType;

/**   \brief  value based type definition for J1939Tp_RxPduRxChannelRxChannelTableIndEndIdxOfRxPdu */
typedef uint8 J1939Tp_RxPduRxChannelRxChannelTableIndEndIdxOfRxPduType;

/**   \brief  value based type definition for J1939Tp_RxPduRxChannelRxChannelTableIndStartIdxOfRxPdu */
typedef uint8 J1939Tp_RxPduRxChannelRxChannelTableIndStartIdxOfRxPduType;

/**   \brief  value based type definition for J1939Tp_RxPduRxChannelRxChannelTableIndUsedOfRxPdu */
typedef boolean J1939Tp_RxPduRxChannelRxChannelTableIndUsedOfRxPduType;

/**   \brief  value based type definition for J1939Tp_RxPduRxSduRxSduTableIndEndIdxOfRxPdu */
typedef uint8 J1939Tp_RxPduRxSduRxSduTableIndEndIdxOfRxPduType;

/**   \brief  value based type definition for J1939Tp_RxPduRxSduRxSduTableIndStartIdxOfRxPdu */
typedef uint8 J1939Tp_RxPduRxSduRxSduTableIndStartIdxOfRxPduType;

/**   \brief  value based type definition for J1939Tp_RxPduRxSduRxSduTableIndUsedOfRxPdu */
typedef boolean J1939Tp_RxPduRxSduRxSduTableIndUsedOfRxPduType;

/**   \brief  value based type definition for J1939Tp_RxPduTxChannelTxChannelTableIndEndIdxOfRxPdu */
typedef uint8 J1939Tp_RxPduTxChannelTxChannelTableIndEndIdxOfRxPduType;

/**   \brief  value based type definition for J1939Tp_RxPduTxChannelTxChannelTableIndStartIdxOfRxPdu */
typedef uint8 J1939Tp_RxPduTxChannelTxChannelTableIndStartIdxOfRxPduType;

/**   \brief  value based type definition for J1939Tp_RxPduTxChannelTxChannelTableIndUsedOfRxPdu */
typedef boolean J1939Tp_RxPduTxChannelTxChannelTableIndUsedOfRxPduType;

/**   \brief  value based type definition for J1939Tp_RxChannelRxChannelIdxOfRxPduRxChannel */
typedef uint8 J1939Tp_RxChannelRxChannelIdxOfRxPduRxChannelType;

/**   \brief  value based type definition for J1939Tp_RxPduRxChannelRxChannelTableInd */
typedef uint8 J1939Tp_RxPduRxChannelRxChannelTableIndType;

/**   \brief  value based type definition for J1939Tp_RxSduRxSduIdxOfRxPduRxSdu */
typedef uint8 J1939Tp_RxSduRxSduIdxOfRxPduRxSduType;

/**   \brief  value based type definition for J1939Tp_RxPduRxSduRxSduTableInd */
typedef uint8 J1939Tp_RxPduRxSduRxSduTableIndType;

/**   \brief  value based type definition for J1939Tp_TxChannelTxChannelIdxOfRxPduTxChannel */
typedef uint8 J1939Tp_TxChannelTxChannelIdxOfRxPduTxChannelType;

/**   \brief  value based type definition for J1939Tp_RxPduTxChannelTxChannelTableInd */
typedef uint8 J1939Tp_RxPduTxChannelTxChannelTableIndType;

/**   \brief  value based type definition for J1939Tp_IsVariableOfRxSdu */
typedef boolean J1939Tp_IsVariableOfRxSduType;

/**   \brief  value based type definition for J1939Tp_MetaDataLengthOfRxSdu */
typedef uint8 J1939Tp_MetaDataLengthOfRxSduType;

/**   \brief  value based type definition for J1939Tp_PGNOfRxSdu */
typedef uint16 J1939Tp_PGNOfRxSduType;

/**   \brief  value based type definition for J1939Tp_PduLengthOfRxSdu */
typedef uint8 J1939Tp_PduLengthOfRxSduType;

/**   \brief  value based type definition for J1939Tp_RxChannelChannelIdxOfRxSdu */
typedef uint8 J1939Tp_RxChannelChannelIdxOfRxSduType;

/**   \brief  value based type definition for J1939Tp_RxChannelChannelUsedOfRxSdu */
typedef boolean J1939Tp_RxChannelChannelUsedOfRxSduType;

/**   \brief  value based type definition for J1939Tp_RxSduStateIdxOfRxSdu */
typedef uint8 J1939Tp_RxSduStateIdxOfRxSduType;

/**   \brief  value based type definition for J1939Tp_SduIdOfRxSdu */
typedef uint8 J1939Tp_SduIdOfRxSduType;

/**   \brief  value based type definition for J1939Tp_SizeOfRxChannel */
typedef uint8 J1939Tp_SizeOfRxChannelType;

/**   \brief  value based type definition for J1939Tp_SizeOfRxChannelRxNSdu */
typedef uint8 J1939Tp_SizeOfRxChannelRxNSduType;

/**   \brief  value based type definition for J1939Tp_SizeOfRxChannelRxNSduRxNSduTableInd */
typedef uint8 J1939Tp_SizeOfRxChannelRxNSduRxNSduTableIndType;

/**   \brief  value based type definition for J1939Tp_SizeOfRxPdu */
typedef uint8 J1939Tp_SizeOfRxPduType;

/**   \brief  value based type definition for J1939Tp_SizeOfRxPduRxChannel */
typedef uint8 J1939Tp_SizeOfRxPduRxChannelType;

/**   \brief  value based type definition for J1939Tp_SizeOfRxPduRxChannelRxChannelTableInd */
typedef uint8 J1939Tp_SizeOfRxPduRxChannelRxChannelTableIndType;

/**   \brief  value based type definition for J1939Tp_SizeOfRxPduRxSdu */
typedef uint8 J1939Tp_SizeOfRxPduRxSduType;

/**   \brief  value based type definition for J1939Tp_SizeOfRxPduRxSduRxSduTableInd */
typedef uint8 J1939Tp_SizeOfRxPduRxSduRxSduTableIndType;

/**   \brief  value based type definition for J1939Tp_SizeOfRxPduTxChannel */
typedef uint8 J1939Tp_SizeOfRxPduTxChannelType;

/**   \brief  value based type definition for J1939Tp_SizeOfRxPduTxChannelTxChannelTableInd */
typedef uint8 J1939Tp_SizeOfRxPduTxChannelTxChannelTableIndType;

/**   \brief  value based type definition for J1939Tp_SizeOfRxSdu */
typedef uint8 J1939Tp_SizeOfRxSduType;

/**   \brief  value based type definition for J1939Tp_SizeOfRxSduState */
typedef uint8 J1939Tp_SizeOfRxSduStateType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxChannel */
typedef uint8 J1939Tp_SizeOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxChannelTxNSdu */
typedef uint8 J1939Tp_SizeOfTxChannelTxNSduType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxChannelTxNSduTxNSduTableInd */
typedef uint8 J1939Tp_SizeOfTxChannelTxNSduTxNSduTableIndType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxPdu */
typedef uint8 J1939Tp_SizeOfTxPduType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxPduRxChannel */
typedef uint8 J1939Tp_SizeOfTxPduRxChannelType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxPduRxChannelRxChannelTableInd */
typedef uint8 J1939Tp_SizeOfTxPduRxChannelRxChannelTableIndType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxPduState */
typedef uint8 J1939Tp_SizeOfTxPduStateType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxPduTxChannel */
typedef uint8 J1939Tp_SizeOfTxPduTxChannelType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxPduTxChannelTxChannelTableInd */
typedef uint8 J1939Tp_SizeOfTxPduTxChannelTxChannelTableIndType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxSdu */
typedef uint8 J1939Tp_SizeOfTxSduType;

/**   \brief  value based type definition for J1939Tp_SizeOfTxSduState */
typedef uint8 J1939Tp_SizeOfTxSduStateType;

/**   \brief  value based type definition for J1939Tp_Time_Bam */
typedef uint8 J1939Tp_Time_BamType;

/**   \brief  value based type definition for J1939Tp_Time_Fp */
typedef uint8 J1939Tp_Time_FpType;

/**   \brief  value based type definition for J1939Tp_Time_T1 */
typedef uint8 J1939Tp_Time_T1Type;

/**   \brief  value based type definition for J1939Tp_Time_T2 */
typedef uint8 J1939Tp_Time_T2Type;

/**   \brief  value based type definition for J1939Tp_Time_T3 */
typedef uint8 J1939Tp_Time_T3Type;

/**   \brief  value based type definition for J1939Tp_Time_T4 */
typedef uint8 J1939Tp_Time_T4Type;

/**   \brief  value based type definition for J1939Tp_Time_Th */
typedef uint8 J1939Tp_Time_ThType;

/**   \brief  value based type definition for J1939Tp_Time_Tr */
typedef uint8 J1939Tp_Time_TrType;

/**   \brief  value based type definition for J1939Tp_ComMChannelOfTxChannel */
typedef NetworkHandleType J1939Tp_ComMChannelOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxChannelTxNSduTxNSduTableIndEndIdxOfTxChannel */
typedef uint8 J1939Tp_TxChannelTxNSduTxNSduTableIndEndIdxOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxChannelTxNSduTxNSduTableIndStartIdxOfTxChannel */
typedef uint8 J1939Tp_TxChannelTxNSduTxNSduTableIndStartIdxOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxChannelTxNSduTxNSduTableIndUsedOfTxChannel */
typedef boolean J1939Tp_TxChannelTxNSduTxNSduTableIndUsedOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxDaOfTxChannel */
typedef uint8 J1939Tp_TxDaOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxMaxPacketsPerBlockOfTxChannel */
typedef uint8 J1939Tp_TxMaxPacketsPerBlockOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxPduTxCmNPduIdxOfTxChannel */
typedef uint8 J1939Tp_TxPduTxCmNPduIdxOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxPduTxCmNPduUsedOfTxChannel */
typedef boolean J1939Tp_TxPduTxCmNPduUsedOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxPduTxDtNPduIdxOfTxChannel */
typedef uint8 J1939Tp_TxPduTxDtNPduIdxOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxPduTxDtNPduUsedOfTxChannel */
typedef boolean J1939Tp_TxPduTxDtNPduUsedOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxProtocolTypeOfTxChannel */
typedef uint8 J1939Tp_TxProtocolTypeOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxSaOfTxChannel */
typedef uint8 J1939Tp_TxSaOfTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxSduTxNSduIdxOfTxChannelTxNSdu */
typedef uint8 J1939Tp_TxSduTxNSduIdxOfTxChannelTxNSduType;

/**   \brief  value based type definition for J1939Tp_TxChannelTxNSduTxNSduTableInd */
typedef uint8 J1939Tp_TxChannelTxNSduTxNSduTableIndType;

/**   \brief  value based type definition for J1939Tp_TxConfTimeout */
typedef uint8 J1939Tp_TxConfTimeoutType;

/**   \brief  value based type definition for J1939Tp_PduIdOfTxPdu */
typedef uint8 J1939Tp_PduIdOfTxPduType;

/**   \brief  value based type definition for J1939Tp_PduTypeOfTxPdu */
typedef uint8 J1939Tp_PduTypeOfTxPduType;

/**   \brief  value based type definition for J1939Tp_TxPduRxChannelRxChannelTableIndEndIdxOfTxPdu */
typedef uint8 J1939Tp_TxPduRxChannelRxChannelTableIndEndIdxOfTxPduType;

/**   \brief  value based type definition for J1939Tp_TxPduRxChannelRxChannelTableIndStartIdxOfTxPdu */
typedef uint8 J1939Tp_TxPduRxChannelRxChannelTableIndStartIdxOfTxPduType;

/**   \brief  value based type definition for J1939Tp_TxPduRxChannelRxChannelTableIndUsedOfTxPdu */
typedef boolean J1939Tp_TxPduRxChannelRxChannelTableIndUsedOfTxPduType;

/**   \brief  value based type definition for J1939Tp_TxPduStateIdxOfTxPdu */
typedef uint8 J1939Tp_TxPduStateIdxOfTxPduType;

/**   \brief  value based type definition for J1939Tp_TxPduTxChannelTxChannelTableIndEndIdxOfTxPdu */
typedef uint8 J1939Tp_TxPduTxChannelTxChannelTableIndEndIdxOfTxPduType;

/**   \brief  value based type definition for J1939Tp_TxPduTxChannelTxChannelTableIndStartIdxOfTxPdu */
typedef uint8 J1939Tp_TxPduTxChannelTxChannelTableIndStartIdxOfTxPduType;

/**   \brief  value based type definition for J1939Tp_TxPduTxChannelTxChannelTableIndUsedOfTxPdu */
typedef boolean J1939Tp_TxPduTxChannelTxChannelTableIndUsedOfTxPduType;

/**   \brief  value based type definition for J1939Tp_RxChannelRxChannelIdxOfTxPduRxChannel */
typedef uint8 J1939Tp_RxChannelRxChannelIdxOfTxPduRxChannelType;

/**   \brief  value based type definition for J1939Tp_TxPduRxChannelRxChannelTableInd */
typedef uint8 J1939Tp_TxPduRxChannelRxChannelTableIndType;

/**   \brief  value based type definition for J1939Tp_TxChannelTxChannelIdxOfTxPduTxChannel */
typedef uint8 J1939Tp_TxChannelTxChannelIdxOfTxPduTxChannelType;

/**   \brief  value based type definition for J1939Tp_TxPduTxChannelTxChannelTableInd */
typedef uint8 J1939Tp_TxPduTxChannelTxChannelTableIndType;

/**   \brief  value based type definition for J1939Tp_IsVariableOfTxSdu */
typedef boolean J1939Tp_IsVariableOfTxSduType;

/**   \brief  value based type definition for J1939Tp_MetaDataLengthOfTxSdu */
typedef uint8 J1939Tp_MetaDataLengthOfTxSduType;

/**   \brief  value based type definition for J1939Tp_PGNOfTxSdu */
typedef uint16 J1939Tp_PGNOfTxSduType;

/**   \brief  value based type definition for J1939Tp_PduFormatOfTxSdu */
typedef uint8 J1939Tp_PduFormatOfTxSduType;

/**   \brief  value based type definition for J1939Tp_PduLengthOfTxSdu */
typedef uint8 J1939Tp_PduLengthOfTxSduType;

/**   \brief  value based type definition for J1939Tp_SduIdOfTxSdu */
typedef uint8 J1939Tp_SduIdOfTxSduType;

/**   \brief  value based type definition for J1939Tp_TxChannelChannelIdxOfTxSdu */
typedef uint8 J1939Tp_TxChannelChannelIdxOfTxSduType;

/**   \brief  value based type definition for J1939Tp_TxChannelChannelUsedOfTxSdu */
typedef boolean J1939Tp_TxChannelChannelUsedOfTxSduType;

/**   \brief  value based type definition for J1939Tp_TxPduDirectNPduIdxOfTxSdu */
typedef uint8 J1939Tp_TxPduDirectNPduIdxOfTxSduType;

/**   \brief  value based type definition for J1939Tp_TxPduDirectNPduUsedOfTxSdu */
typedef boolean J1939Tp_TxPduDirectNPduUsedOfTxSduType;

/**   \brief  value based type definition for J1939Tp_TxSduStateIdxOfTxSdu */
typedef uint8 J1939Tp_TxSduStateIdxOfTxSduType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  J1939TpPCStructTypes  J1939Tp Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in J1939Tp_RxChannel */
typedef struct sJ1939Tp_RxChannelType
{
  J1939Tp_ComMChannelOfRxChannelType ComMChannelOfRxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpRxChannel/J1939TpRxChannelComMNetworkHandleRef */
  J1939Tp_RxChannelRxNSduRxNSduTableIndEndIdxOfRxChannelType RxChannelRxNSduRxNSduTableIndEndIdxOfRxChannel;  /**< the end index of the 0:n relation pointing to J1939Tp_RxChannelRxNSduRxNSduTableInd */
  J1939Tp_RxChannelRxNSduRxNSduTableIndStartIdxOfRxChannelType RxChannelRxNSduRxNSduTableIndStartIdxOfRxChannel;  /**< the start index of the 0:n relation pointing to J1939Tp_RxChannelRxNSduRxNSduTableInd */
  J1939Tp_RxDaOfRxChannelType RxDaOfRxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpRxChannel/J1939TpRxDa */
  J1939Tp_RxDynamicBufferRatioOfRxChannelType RxDynamicBufferRatioOfRxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpRxChannel/J1939TpRxDynamicBufferRatio */
  J1939Tp_RxPacketsPerBlockOfRxChannelType RxPacketsPerBlockOfRxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpRxChannel/J1939TpRxPacketsPerBlock */
  J1939Tp_RxProtocolTypeOfRxChannelType RxProtocolTypeOfRxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpRxChannel/J1939TpRxProtocolType */
  J1939Tp_RxSaOfRxChannelType RxSaOfRxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpRxChannel/J1939TpRxSa */
  J1939Tp_TxPduRxFcNPduIdxOfRxChannelType TxPduRxFcNPduIdxOfRxChannel;  /**< the index of the 0:1 relation pointing to J1939Tp_TxPdu */
} J1939Tp_RxChannelType;

/**   \brief  type used in J1939Tp_RxChannelRxNSdu */
typedef struct sJ1939Tp_RxChannelRxNSduType
{
  J1939Tp_RxSduRxNSduIdxOfRxChannelRxNSduType RxSduRxNSduIdxOfRxChannelRxNSdu;  /**< the index of the 1:1 relation pointing to J1939Tp_RxSdu */
} J1939Tp_RxChannelRxNSduType;

/**   \brief  type used in J1939Tp_RxPdu */
typedef struct sJ1939Tp_RxPduType
{
  J1939Tp_PduFormatOfRxPduType PduFormatOfRxPdu;  /**< PDU format */
  J1939Tp_PduTypeOfRxPduType PduTypeOfRxPdu;  /**< PDU Type */
  J1939Tp_RxPduRxChannelRxChannelTableIndEndIdxOfRxPduType RxPduRxChannelRxChannelTableIndEndIdxOfRxPdu;  /**< the end index of the 0:n relation pointing to J1939Tp_RxPduRxChannelRxChannelTableInd */
  J1939Tp_RxPduRxChannelRxChannelTableIndStartIdxOfRxPduType RxPduRxChannelRxChannelTableIndStartIdxOfRxPdu;  /**< the start index of the 0:n relation pointing to J1939Tp_RxPduRxChannelRxChannelTableInd */
  J1939Tp_RxPduRxSduRxSduTableIndEndIdxOfRxPduType RxPduRxSduRxSduTableIndEndIdxOfRxPdu;  /**< the end index of the 0:n relation pointing to J1939Tp_RxPduRxSduRxSduTableInd */
  J1939Tp_RxPduRxSduRxSduTableIndStartIdxOfRxPduType RxPduRxSduRxSduTableIndStartIdxOfRxPdu;  /**< the start index of the 0:n relation pointing to J1939Tp_RxPduRxSduRxSduTableInd */
  J1939Tp_RxPduTxChannelTxChannelTableIndEndIdxOfRxPduType RxPduTxChannelTxChannelTableIndEndIdxOfRxPdu;  /**< the end index of the 0:n relation pointing to J1939Tp_RxPduTxChannelTxChannelTableInd */
  J1939Tp_RxPduTxChannelTxChannelTableIndStartIdxOfRxPduType RxPduTxChannelTxChannelTableIndStartIdxOfRxPdu;  /**< the start index of the 0:n relation pointing to J1939Tp_RxPduTxChannelTxChannelTableInd */
} J1939Tp_RxPduType;

/**   \brief  type used in J1939Tp_RxPduRxChannel */
typedef struct sJ1939Tp_RxPduRxChannelType
{
  J1939Tp_RxChannelRxChannelIdxOfRxPduRxChannelType RxChannelRxChannelIdxOfRxPduRxChannel;  /**< the index of the 1:1 relation pointing to J1939Tp_RxChannel */
} J1939Tp_RxPduRxChannelType;

/**   \brief  type used in J1939Tp_RxPduRxSdu */
typedef struct sJ1939Tp_RxPduRxSduType
{
  J1939Tp_RxSduRxSduIdxOfRxPduRxSduType RxSduRxSduIdxOfRxPduRxSdu;  /**< the index of the 1:1 relation pointing to J1939Tp_RxSdu */
} J1939Tp_RxPduRxSduType;

/**   \brief  type used in J1939Tp_RxPduTxChannel */
typedef struct sJ1939Tp_RxPduTxChannelType
{
  J1939Tp_TxChannelTxChannelIdxOfRxPduTxChannelType TxChannelTxChannelIdxOfRxPduTxChannel;  /**< the index of the 1:1 relation pointing to J1939Tp_TxChannel */
} J1939Tp_RxPduTxChannelType;

/**   \brief  type used in J1939Tp_RxSdu */
typedef struct sJ1939Tp_RxSduType
{
  J1939Tp_PGNOfRxSduType PGNOfRxSdu;  /**< PGN */
  J1939Tp_IsVariableOfRxSduType IsVariableOfRxSdu;  /**< Variable Length */
  J1939Tp_MetaDataLengthOfRxSduType MetaDataLengthOfRxSdu;  /**< MetaData Length */
  J1939Tp_PduLengthOfRxSduType PduLengthOfRxSdu;  /**< PDU Length */
  J1939Tp_RxChannelChannelIdxOfRxSduType RxChannelChannelIdxOfRxSdu;  /**< the index of the 0:1 relation pointing to J1939Tp_RxChannel */
  J1939Tp_RxSduStateIdxOfRxSduType RxSduStateIdxOfRxSdu;  /**< the index of the 1:1 relation pointing to J1939Tp_RxSduState */
  J1939Tp_SduIdOfRxSduType SduIdOfRxSdu;  /**< SDU ID */
} J1939Tp_RxSduType;

/**   \brief  type used in J1939Tp_TxChannel */
typedef struct sJ1939Tp_TxChannelType
{
  J1939Tp_ComMChannelOfTxChannelType ComMChannelOfTxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxChannelComMNetworkHandleRef */
  J1939Tp_TxChannelTxNSduTxNSduTableIndEndIdxOfTxChannelType TxChannelTxNSduTxNSduTableIndEndIdxOfTxChannel;  /**< the end index of the 0:n relation pointing to J1939Tp_TxChannelTxNSduTxNSduTableInd */
  J1939Tp_TxChannelTxNSduTxNSduTableIndStartIdxOfTxChannelType TxChannelTxNSduTxNSduTableIndStartIdxOfTxChannel;  /**< the start index of the 0:n relation pointing to J1939Tp_TxChannelTxNSduTxNSduTableInd */
  J1939Tp_TxDaOfTxChannelType TxDaOfTxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxDa */
  J1939Tp_TxMaxPacketsPerBlockOfTxChannelType TxMaxPacketsPerBlockOfTxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxMaxPacketsPerBlock */
  J1939Tp_TxPduTxCmNPduIdxOfTxChannelType TxPduTxCmNPduIdxOfTxChannel;  /**< the index of the 0:1 relation pointing to J1939Tp_TxPdu */
  J1939Tp_TxPduTxDtNPduIdxOfTxChannelType TxPduTxDtNPduIdxOfTxChannel;  /**< the index of the 0:1 relation pointing to J1939Tp_TxPdu */
  J1939Tp_TxProtocolTypeOfTxChannelType TxProtocolTypeOfTxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxProtocolType */
  J1939Tp_TxSaOfTxChannelType TxSaOfTxChannel;  /**< DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxSa */
} J1939Tp_TxChannelType;

/**   \brief  type used in J1939Tp_TxChannelTxNSdu */
typedef struct sJ1939Tp_TxChannelTxNSduType
{
  J1939Tp_TxSduTxNSduIdxOfTxChannelTxNSduType TxSduTxNSduIdxOfTxChannelTxNSdu;  /**< the index of the 1:1 relation pointing to J1939Tp_TxSdu */
} J1939Tp_TxChannelTxNSduType;

/**   \brief  type used in J1939Tp_TxPdu */
typedef struct sJ1939Tp_TxPduType
{
  J1939Tp_PduIdOfTxPduType PduIdOfTxPdu;  /**< PDU ID */
  J1939Tp_PduTypeOfTxPduType PduTypeOfTxPdu;  /**< PDU Type */
  J1939Tp_TxPduRxChannelRxChannelTableIndEndIdxOfTxPduType TxPduRxChannelRxChannelTableIndEndIdxOfTxPdu;  /**< the end index of the 0:n relation pointing to J1939Tp_TxPduRxChannelRxChannelTableInd */
  J1939Tp_TxPduRxChannelRxChannelTableIndStartIdxOfTxPduType TxPduRxChannelRxChannelTableIndStartIdxOfTxPdu;  /**< the start index of the 0:n relation pointing to J1939Tp_TxPduRxChannelRxChannelTableInd */
  J1939Tp_TxPduStateIdxOfTxPduType TxPduStateIdxOfTxPdu;  /**< the index of the 1:1 relation pointing to J1939Tp_TxPduState */
  J1939Tp_TxPduTxChannelTxChannelTableIndEndIdxOfTxPduType TxPduTxChannelTxChannelTableIndEndIdxOfTxPdu;  /**< the end index of the 0:n relation pointing to J1939Tp_TxPduTxChannelTxChannelTableInd */
  J1939Tp_TxPduTxChannelTxChannelTableIndStartIdxOfTxPduType TxPduTxChannelTxChannelTableIndStartIdxOfTxPdu;  /**< the start index of the 0:n relation pointing to J1939Tp_TxPduTxChannelTxChannelTableInd */
} J1939Tp_TxPduType;

/**   \brief  type used in J1939Tp_TxPduRxChannel */
typedef struct sJ1939Tp_TxPduRxChannelType
{
  J1939Tp_RxChannelRxChannelIdxOfTxPduRxChannelType RxChannelRxChannelIdxOfTxPduRxChannel;  /**< the index of the 1:1 relation pointing to J1939Tp_RxChannel */
} J1939Tp_TxPduRxChannelType;

/**   \brief  type used in J1939Tp_TxPduTxChannel */
typedef struct sJ1939Tp_TxPduTxChannelType
{
  J1939Tp_TxChannelTxChannelIdxOfTxPduTxChannelType TxChannelTxChannelIdxOfTxPduTxChannel;  /**< the index of the 1:1 relation pointing to J1939Tp_TxChannel */
} J1939Tp_TxPduTxChannelType;

/**   \brief  type used in J1939Tp_TxSdu */
typedef struct sJ1939Tp_TxSduType
{
  J1939Tp_PGNOfTxSduType PGNOfTxSdu;  /**< PGN */
  J1939Tp_IsVariableOfTxSduType IsVariableOfTxSdu;  /**< Variable Length */
  J1939Tp_MetaDataLengthOfTxSduType MetaDataLengthOfTxSdu;  /**< MetaData Length */
  J1939Tp_PduFormatOfTxSduType PduFormatOfTxSdu;  /**< PDU format */
  J1939Tp_PduLengthOfTxSduType PduLengthOfTxSdu;  /**< PDU Length */
  J1939Tp_SduIdOfTxSduType SduIdOfTxSdu;  /**< SDU ID */
  J1939Tp_TxChannelChannelIdxOfTxSduType TxChannelChannelIdxOfTxSdu;  /**< the index of the 0:1 relation pointing to J1939Tp_TxChannel */
  J1939Tp_TxPduDirectNPduIdxOfTxSduType TxPduDirectNPduIdxOfTxSdu;  /**< the index of the 0:1 relation pointing to J1939Tp_TxPdu */
  J1939Tp_TxSduStateIdxOfTxSduType TxSduStateIdxOfTxSdu;  /**< the index of the 1:1 relation pointing to J1939Tp_TxSduState */
} J1939Tp_TxSduType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCSymbolicStructTypes  J1939Tp Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to J1939Tp_RxSduState */
typedef struct J1939Tp_RxSduStateStructSTag
{
  J1939Tp_RxNSduStateType DI_X_TACHO_oBackbone1J1939_6121ec8b_Rx[1];
  J1939Tp_RxNSduStateType PropTCO2_X_TACHO_oBackbone1J1939_4169b979_Rx[1];
} J1939Tp_RxSduStateStructSType;

/**   \brief  type to be used as symbolic data element access to J1939Tp_TxPduState */
typedef struct J1939Tp_TxPduStateStructSTag
{
  J1939Tp_TxNPduStateType TPCM_Tp_oFMSNet_527e1bbd_Tx[1];
  J1939Tp_TxNPduStateType TPDT_Tp_oFMSNet_b75dd625_Tx[1];
  J1939Tp_TxNPduStateType FcNPdu_Backbone1J1939_dba64907_Tx[1];
  J1939Tp_TxNPduStateType TPDirect_0FE6B_Tp_oFMSNet_0aa5f2bd_Tx[1];
} J1939Tp_TxPduStateStructSType;

/**   \brief  type to be used as symbolic data element access to J1939Tp_TxSduState */
typedef struct J1939Tp_TxSduStateStructSTag
{
  J1939Tp_TxNSduStateType VI_X_CIOMFMS_oFMSNet_55f8530d_Tx[1];
  J1939Tp_TxNSduStateType DI_X_CIOMFMS_oFMSNet_45299e3a_Tx[1];
} J1939Tp_TxSduStateStructSType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCUnionIndexAndSymbolTypes  J1939Tp Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access J1939Tp_RxSduState in an index and symbol based style. */
typedef union J1939Tp_RxSduStateUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  J1939Tp_RxNSduStateType raw[2];
  J1939Tp_RxSduStateStructSType str;
} J1939Tp_RxSduStateUType;

/**   \brief  type to access J1939Tp_TxPduState in an index and symbol based style. */
typedef union J1939Tp_TxPduStateUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  J1939Tp_TxNPduStateType raw[4];
  J1939Tp_TxPduStateStructSType str;
} J1939Tp_TxPduStateUType;

/**   \brief  type to access J1939Tp_TxSduState in an index and symbol based style. */
typedef union J1939Tp_TxSduStateUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  J1939Tp_TxNSduStateType raw[2];
  J1939Tp_TxSduStateStructSType str;
} J1939Tp_TxSduStateUType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCRootPointerTypes  J1939Tp Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point to arrays.
  \{
*/ 
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPCRootValueTypes  J1939Tp Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in J1939Tp_PCConfig */
typedef struct sJ1939Tp_PCConfigType
{
  uint8 J1939Tp_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} J1939Tp_PCConfigType;

typedef J1939Tp_PCConfigType J1939Tp_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  J1939TpPBValueTypes  J1939Tp Value Types (POST_BUILD)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  J1939TpPBRootValueTypes  J1939Tp Root Value Types (POST_BUILD)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  J1939Tp_RxChannel
**********************************************************************************************************************/
/** 
  \var    J1939Tp_RxChannel
  \brief  DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpRxChannel
  \details
  Element                                  Description
  ComMChannel                              DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpRxChannel/J1939TpRxChannelComMNetworkHandleRef
  RxChannelRxNSduRxNSduTableIndEndIdx      the end index of the 0:n relation pointing to J1939Tp_RxChannelRxNSduRxNSduTableInd
  RxChannelRxNSduRxNSduTableIndStartIdx    the start index of the 0:n relation pointing to J1939Tp_RxChannelRxNSduRxNSduTableInd
  RxDa                                     DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpRxChannel/J1939TpRxDa
  RxDynamicBufferRatio                     DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpRxChannel/J1939TpRxDynamicBufferRatio
  RxPacketsPerBlock                        DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpRxChannel/J1939TpRxPacketsPerBlock
  RxProtocolType                           DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpRxChannel/J1939TpRxProtocolType
  RxSa                                     DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpRxChannel/J1939TpRxSa
  TxPduRxFcNPduIdx                         the index of the 0:1 relation pointing to J1939Tp_TxPdu
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_RxChannelType, J1939TP_CONST) J1939Tp_RxChannel[1];
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_RxChannelRxNSdu
**********************************************************************************************************************/
/** 
  \var    J1939Tp_RxChannelRxNSdu
  \details
  Element           Description
  RxSduRxNSduIdx    the index of the 1:1 relation pointing to J1939Tp_RxSdu
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_RxChannelRxNSduType, J1939TP_CONST) J1939Tp_RxChannelRxNSdu[2];
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_RxChannelRxNSduRxNSduTableInd
**********************************************************************************************************************/
/** 
  \var    J1939Tp_RxChannelRxNSduRxNSduTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Tp_RxChannelRxNSdu
*/ 
#define J1939TP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_RxChannelRxNSduRxNSduTableIndType, J1939TP_CONST) J1939Tp_RxChannelRxNSduRxNSduTableInd[2];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define J1939TP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_RxPdu
**********************************************************************************************************************/
/** 
  \var    J1939Tp_RxPdu
  \brief  List of received PDUs
  \details
  Element                                    Description
  PduFormat                                  PDU format
  PduType                                    PDU Type
  RxPduRxChannelRxChannelTableIndEndIdx      the end index of the 0:n relation pointing to J1939Tp_RxPduRxChannelRxChannelTableInd
  RxPduRxChannelRxChannelTableIndStartIdx    the start index of the 0:n relation pointing to J1939Tp_RxPduRxChannelRxChannelTableInd
  RxPduRxSduRxSduTableIndEndIdx              the end index of the 0:n relation pointing to J1939Tp_RxPduRxSduRxSduTableInd
  RxPduRxSduRxSduTableIndStartIdx            the start index of the 0:n relation pointing to J1939Tp_RxPduRxSduRxSduTableInd
  RxPduTxChannelTxChannelTableIndEndIdx      the end index of the 0:n relation pointing to J1939Tp_RxPduTxChannelTxChannelTableInd
  RxPduTxChannelTxChannelTableIndStartIdx    the start index of the 0:n relation pointing to J1939Tp_RxPduTxChannelTxChannelTableInd
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_RxPduType, J1939TP_CONST) J1939Tp_RxPdu[4];
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_RxPduRxChannel
**********************************************************************************************************************/
/** 
  \var    J1939Tp_RxPduRxChannel
  \details
  Element                  Description
  RxChannelRxChannelIdx    the index of the 1:1 relation pointing to J1939Tp_RxChannel
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_RxPduRxChannelType, J1939TP_CONST) J1939Tp_RxPduRxChannel[3];
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_RxPduRxChannelRxChannelTableInd
**********************************************************************************************************************/
/** 
  \var    J1939Tp_RxPduRxChannelRxChannelTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Tp_RxPduRxChannel
*/ 
#define J1939TP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_RxPduRxChannelRxChannelTableIndType, J1939TP_CONST) J1939Tp_RxPduRxChannelRxChannelTableInd[3];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define J1939TP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_RxPduRxSdu
**********************************************************************************************************************/
/** 
  \var    J1939Tp_RxPduRxSdu
  \details
  Element          Description
  RxSduRxSduIdx    the index of the 1:1 relation pointing to J1939Tp_RxSdu
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_RxPduRxSduType, J1939TP_CONST) J1939Tp_RxPduRxSdu[1];
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_RxPduRxSduRxSduTableInd
**********************************************************************************************************************/
/** 
  \var    J1939Tp_RxPduRxSduRxSduTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Tp_RxPduRxSdu
*/ 
#define J1939TP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_RxPduRxSduRxSduTableIndType, J1939TP_CONST) J1939Tp_RxPduRxSduRxSduTableInd[1];
#define J1939TP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_RxPduTxChannel
**********************************************************************************************************************/
/** 
  \var    J1939Tp_RxPduTxChannel
  \details
  Element                  Description
  TxChannelTxChannelIdx    the index of the 1:1 relation pointing to J1939Tp_TxChannel
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_RxPduTxChannelType, J1939TP_CONST) J1939Tp_RxPduTxChannel[2];
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_RxPduTxChannelTxChannelTableInd
**********************************************************************************************************************/
/** 
  \var    J1939Tp_RxPduTxChannelTxChannelTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Tp_RxPduTxChannel
*/ 
#define J1939TP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_RxPduTxChannelTxChannelTableIndType, J1939TP_CONST) J1939Tp_RxPduTxChannelTxChannelTableInd[2];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define J1939TP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_RxSdu
**********************************************************************************************************************/
/** 
  \var    J1939Tp_RxSdu
  \brief  List of received SDUs
  \details
  Element                Description
  PGN                    PGN
  IsVariable             Variable Length
  MetaDataLength         MetaData Length
  PduLength              PDU Length
  RxChannelChannelIdx    the index of the 0:1 relation pointing to J1939Tp_RxChannel
  RxSduStateIdx          the index of the 1:1 relation pointing to J1939Tp_RxSduState
  SduId                  SDU ID
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_RxSduType, J1939TP_CONST) J1939Tp_RxSdu[2];
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxChannel
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxChannel
  \brief  DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel
  \details
  Element                                  Description
  ComMChannel                              DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxChannelComMNetworkHandleRef
  TxChannelTxNSduTxNSduTableIndEndIdx      the end index of the 0:n relation pointing to J1939Tp_TxChannelTxNSduTxNSduTableInd
  TxChannelTxNSduTxNSduTableIndStartIdx    the start index of the 0:n relation pointing to J1939Tp_TxChannelTxNSduTxNSduTableInd
  TxDa                                     DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxDa
  TxMaxPacketsPerBlock                     DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxMaxPacketsPerBlock
  TxPduTxCmNPduIdx                         the index of the 0:1 relation pointing to J1939Tp_TxPdu
  TxPduTxDtNPduIdx                         the index of the 0:1 relation pointing to J1939Tp_TxPdu
  TxProtocolType                           DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxProtocolType
  TxSa                                     DefinitionRef: /MICROSAR/J1939Tp/J1939TpConfiguration/J1939TpTxChannel/J1939TpTxSa
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_TxChannelType, J1939TP_CONST) J1939Tp_TxChannel[2];
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxChannelTxNSdu
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxChannelTxNSdu
  \details
  Element           Description
  TxSduTxNSduIdx    the index of the 1:1 relation pointing to J1939Tp_TxSdu
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_TxChannelTxNSduType, J1939TP_CONST) J1939Tp_TxChannelTxNSdu[2];
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxChannelTxNSduTxNSduTableInd
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxChannelTxNSduTxNSduTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Tp_TxChannelTxNSdu
*/ 
#define J1939TP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_TxChannelTxNSduTxNSduTableIndType, J1939TP_CONST) J1939Tp_TxChannelTxNSduTxNSduTableInd[2];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define J1939TP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxPdu
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxPdu
  \brief  List of transmitted PDUs
  \details
  Element                                    Description
  PduId                                      PDU ID
  PduType                                    PDU Type
  TxPduRxChannelRxChannelTableIndEndIdx      the end index of the 0:n relation pointing to J1939Tp_TxPduRxChannelRxChannelTableInd
  TxPduRxChannelRxChannelTableIndStartIdx    the start index of the 0:n relation pointing to J1939Tp_TxPduRxChannelRxChannelTableInd
  TxPduStateIdx                              the index of the 1:1 relation pointing to J1939Tp_TxPduState
  TxPduTxChannelTxChannelTableIndEndIdx      the end index of the 0:n relation pointing to J1939Tp_TxPduTxChannelTxChannelTableInd
  TxPduTxChannelTxChannelTableIndStartIdx    the start index of the 0:n relation pointing to J1939Tp_TxPduTxChannelTxChannelTableInd
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_TxPduType, J1939TP_CONST) J1939Tp_TxPdu[4];
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxPduRxChannel
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxPduRxChannel
  \details
  Element                  Description
  RxChannelRxChannelIdx    the index of the 1:1 relation pointing to J1939Tp_RxChannel
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_TxPduRxChannelType, J1939TP_CONST) J1939Tp_TxPduRxChannel[1];
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxPduRxChannelRxChannelTableInd
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxPduRxChannelRxChannelTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Tp_TxPduRxChannel
*/ 
#define J1939TP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_TxPduRxChannelRxChannelTableIndType, J1939TP_CONST) J1939Tp_TxPduRxChannelRxChannelTableInd[1];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define J1939TP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxPduTxChannel
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxPduTxChannel
  \details
  Element                  Description
  TxChannelTxChannelIdx    the index of the 1:1 relation pointing to J1939Tp_TxChannel
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_TxPduTxChannelType, J1939TP_CONST) J1939Tp_TxPduTxChannel[5];
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxPduTxChannelTxChannelTableInd
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxPduTxChannelTxChannelTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Tp_TxPduTxChannel
*/ 
#define J1939TP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_TxPduTxChannelTxChannelTableIndType, J1939TP_CONST) J1939Tp_TxPduTxChannelTxChannelTableInd[5];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define J1939TP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxSdu
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxSdu
  \brief  List of transmitted SDUs
  \details
  Element                Description
  PGN                    PGN
  IsVariable             Variable Length
  MetaDataLength         MetaData Length
  PduFormat              PDU format
  PduLength              PDU Length
  SduId                  SDU ID
  TxChannelChannelIdx    the index of the 0:1 relation pointing to J1939Tp_TxChannel
  TxPduDirectNPduIdx     the index of the 0:1 relation pointing to J1939Tp_TxPdu
  TxSduStateIdx          the index of the 1:1 relation pointing to J1939Tp_TxSduState
*/ 
#define J1939TP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Tp_TxSduType, J1939TP_CONST) J1939Tp_TxSdu[2];
#define J1939TP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_RxSduState
**********************************************************************************************************************/
/** 
  \var    J1939Tp_RxSduState
  \brief  State of J1939Tp Rx SDU
*/ 
#define J1939TP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(J1939Tp_RxSduStateUType, J1939TP_VAR_NOINIT) J1939Tp_RxSduState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define J1939TP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxPduState
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxPduState
  \brief  State of J1939Tp Tx PDU
*/ 
#define J1939TP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(J1939Tp_TxPduStateUType, J1939TP_VAR_NOINIT) J1939Tp_TxPduState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define J1939TP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Tp_TxSduState
**********************************************************************************************************************/
/** 
  \var    J1939Tp_TxSduState
  \brief  State of J1939Tp Tx SDU
*/ 
#define J1939TP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(J1939Tp_TxSduStateUType, J1939TP_VAR_NOINIT) J1939Tp_TxSduState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define J1939TP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


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


/* User Config File Start */

/* User Config File End */


#endif  /* J1939TP_CFG_H */

/**********************************************************************************************************************
  END OF FILE: J1939Tp_Cfg.h
**********************************************************************************************************************/

