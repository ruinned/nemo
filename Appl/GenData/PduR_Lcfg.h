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
 *              File: PduR_Lcfg.h
 *   Generation Time: 2018-12-01 17:02:19
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

#if !defined (PDUR_LCFG_H)
# define PDUR_LCFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
# include "PduR_Types.h"
# include "PduR_PBcfg.h"


/* include headers with symbolic name values */
/* \trace SPEC-2020167 */

#include "LinIf.h"
#include "CanIf.h"
#include "Com_Cbk.h"
#include "J1939Tp.h"
#include "J1939Rm_Cbk.h"
#include "CanTp.h"
#include "Dcm_Cbk.h"
#include "Cdd_Cbk.h"




/**********************************************************************************************************************
 * GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  PduRPCDataSwitches  PduR Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define PDUR_BMTXBUFFERARRAYRAM                                       STD_ON
#define PDUR_BMTXBUFFERINDROM                                         STD_ON
#define PDUR_BMTXBUFFERROMIDXOFBMTXBUFFERINDROM                       STD_ON
#define PDUR_BMTXBUFFERINSTANCERAM                                    STD_ON
#define PDUR_BMTXBUFFERARRAYRAMREADIDXOFBMTXBUFFERINSTANCERAM         STD_ON
#define PDUR_BMTXBUFFERARRAYRAMWRITEIDXOFBMTXBUFFERINSTANCERAM        STD_ON
#define PDUR_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM                   STD_ON
#define PDUR_TXBUFFERUSEDOFBMTXBUFFERINSTANCERAM                      STD_ON
#define PDUR_BMTXBUFFERINSTANCEROM                                    STD_ON
#define PDUR_BMTXBUFFERROMIDXOFBMTXBUFFERINSTANCEROM                  STD_ON
#define PDUR_BMTXBUFFERRAM                                            STD_ON
#define PDUR_BMTXBUFFERARRAYRAMINSTANCESTOPIDXOFBMTXBUFFERRAM         STD_ON
#define PDUR_BMTXBUFFERARRAYRAMREADIDXOFBMTXBUFFERRAM                 STD_ON
#define PDUR_BMTXBUFFERARRAYRAMWRITEIDXOFBMTXBUFFERRAM                STD_ON
#define PDUR_PDURBUFFERSTATEOFBMTXBUFFERRAM                           STD_ON
#define PDUR_RXLENGTHOFBMTXBUFFERRAM                                  STD_ON
#define PDUR_TPBUFMGRSTATEOFBMTXBUFFERRAM                             STD_ON
#define PDUR_BMTXBUFFERROM                                            STD_ON
#define PDUR_BMTXBUFFERARRAYRAMENDIDXOFBMTXBUFFERROM                  STD_ON
#define PDUR_BMTXBUFFERARRAYRAMLENGTHOFBMTXBUFFERROM                  STD_ON
#define PDUR_BMTXBUFFERARRAYRAMSTARTIDXOFBMTXBUFFERROM                STD_ON
#define PDUR_BMTXBUFFERINSTANCEROMENDIDXOFBMTXBUFFERROM               STD_ON
#define PDUR_BMTXBUFFERINSTANCEROMSTARTIDXOFBMTXBUFFERROM             STD_ON
#define PDUR_CONFIGID                                                 STD_ON
#define PDUR_COPYRXDATARXSMTRANSITION                                 STD_ON
#define PDUR_FCTPTROFCOPYRXDATARXSMTRANSITION                         STD_ON
#define PDUR_COPYTXDATATXINSTSMTRANSITION                             STD_ON
#define PDUR_FCTPTROFCOPYTXDATATXINSTSMTRANSITION                     STD_ON
#define PDUR_FIFOINITVALUES                                           STD_OFF  /**< Deactivateable: 'PduR_FiFoInitValues' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_FINALMAGICNUMBER                                         STD_OFF  /**< Deactivateable: 'PduR_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define PDUR_FINISHREADFMSMTRANSITION                                 STD_ON
#define PDUR_FCTPTROFFINISHREADFMSMTRANSITION                         STD_ON
#define PDUR_FINISHRECEPTIONRMSMTRANSITION                            STD_ON
#define PDUR_FCTPTROFFINISHRECEPTIONRMSMTRANSITION                    STD_ON
#define PDUR_FINISHTRANSMISSIONRMSMTRANSITION                         STD_ON
#define PDUR_FCTPTROFFINISHTRANSMISSIONRMSMTRANSITION                 STD_ON
#define PDUR_FINISHWRITEFMSMTRANSITION                                STD_ON
#define PDUR_FCTPTROFFINISHWRITEFMSMTRANSITION                        STD_ON
#define PDUR_FMFIFOELEMENTRAM                                         STD_ON
#define PDUR_BMTXBUFFERROMIDXOFFMFIFOELEMENTRAM                       STD_ON
#define PDUR_DEDICATEDTXBUFFEROFFMFIFOELEMENTRAM                      STD_ON
#define PDUR_RMDESTROMIDXOFFMFIFOELEMENTRAM                           STD_ON
#define PDUR_STATEOFFMFIFOELEMENTRAM                                  STD_ON
#define PDUR_FMFIFOINSTANCERAM                                        STD_ON
#define PDUR_BMTXBUFFERINSTANCEROMIDXOFFMFIFOINSTANCERAM              STD_ON
#define PDUR_FMFIFOINSTANCEROM                                        STD_ON
#define PDUR_FMFIFOROMIDXOFFMFIFOINSTANCEROM                          STD_ON
#define PDUR_FMFIFORAM                                                STD_ON
#define PDUR_FILLLEVELOFFMFIFORAM                                     STD_ON
#define PDUR_FMFIFOELEMENTRAMREADIDXOFFMFIFORAM                       STD_ON
#define PDUR_FMFIFOELEMENTRAMWRITEIDXOFFMFIFORAM                      STD_ON
#define PDUR_PENDINGCONFIRMATIONSOFFMFIFORAM                          STD_ON
#define PDUR_TPTXSMSTATEOFFMFIFORAM                                   STD_ON
#define PDUR_FMFIFOROM                                                STD_ON
#define PDUR_FMFIFOELEMENTRAMENDIDXOFFMFIFOROM                        STD_ON
#define PDUR_FMFIFOELEMENTRAMLENGTHOFFMFIFOROM                        STD_ON
#define PDUR_FMFIFOELEMENTRAMSTARTIDXOFFMFIFOROM                      STD_ON
#define PDUR_FMFLUSHFIFOELEMENT                                       STD_OFF  /**< Deactivateable: 'PduR_FmFlushFifoElement' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FCTPTROFFMFLUSHFIFOELEMENT                               STD_OFF  /**< Deactivateable: 'PduR_FmFlushFifoElement.FctPtr' Reason: 'No queued IF Gateway Routing Paths available' */
#define PDUR_IFROUTINGSTATETABLE                                      STD_ON
#define PDUR_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE STD_ON
#define PDUR_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE STD_ON
#define PDUR_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE STD_ON
#define PDUR_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE STD_ON
#define PDUR_INITDATAHASHCODE                                         STD_OFF  /**< Deactivateable: 'PduR_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define PDUR_INITIALIZED                                              STD_ON
#define PDUR_MMROM                                                    STD_ON
#define PDUR_CANCELRECEIVESUPPORTEDOFMMROM                            STD_OFF  /**< Deactivateable: 'PduR_MmRom.CancelReceiveSupported' Reason: 'the value of PduR_CancelReceiveSupportedOfMmRom is always 'false' due to this, the array is deactivated.' */
#define PDUR_CHANGEPARAMETERSUPPORTEDOFMMROM                          STD_OFF  /**< Deactivateable: 'PduR_MmRom.ChangeParameterSupported' Reason: 'the value of PduR_ChangeParameterSupportedOfMmRom is always 'false' due to this, the array is deactivated.' */
#define PDUR_IFCANCELTRANSMITSUPPORTEDOFMMROM                         STD_ON
#define PDUR_LOIFCANCELTRANSMITFCTPTROFMMROM                          STD_ON
#define PDUR_LOIFOFMMROM                                              STD_ON
#define PDUR_LOIFTRANSMITFCTPTROFMMROM                                STD_ON
#define PDUR_LOTPCANCELRECEIVEFCTPTROFMMROM                           STD_OFF  /**< Deactivateable: 'PduR_MmRom.LoTpCancelReceiveFctPtr' Reason: 'the value of PduR_LoTpCancelReceiveFctPtrOfMmRom is always 'NULL_PTR' due to this, the array is deactivated.' */
#define PDUR_LOTPCANCELTRANSMITFCTPTROFMMROM                          STD_ON
#define PDUR_LOTPCHANGEPARAMETERFCTPTROFMMROM                         STD_OFF  /**< Deactivateable: 'PduR_MmRom.LoTpChangeParameterFctPtr' Reason: 'the value of PduR_LoTpChangeParameterFctPtrOfMmRom is always 'NULL_PTR' due to this, the array is deactivated.' */
#define PDUR_LOTPOFMMROM                                              STD_ON
#define PDUR_LOTPTRANSMITFCTPTROFMMROM                                STD_ON
#define PDUR_MASKEDBITSOFMMROM                                        STD_ON
#define PDUR_TPCANCELTRANSMITSUPPORTEDOFMMROM                         STD_ON
#define PDUR_UPIFOFMMROM                                              STD_ON
#define PDUR_UPIFRXINDICATIONFCTPTROFMMROM                            STD_ON
#define PDUR_UPIFTRIGGERTRANSMITFCTPTROFMMROM                         STD_ON
#define PDUR_UPIFTXCONFIRMATIONFCTPTROFMMROM                          STD_ON
#define PDUR_UPTPCOPYRXDATAFCTPTROFMMROM                              STD_ON
#define PDUR_UPTPCOPYTXDATAFCTPTROFMMROM                              STD_ON
#define PDUR_UPTPOFMMROM                                              STD_ON
#define PDUR_UPTPSTARTOFRECEPTIONFCTPTROFMMROM                        STD_ON
#define PDUR_UPTPTPRXINDICATIONFCTPTROFMMROM                          STD_ON
#define PDUR_UPTPTPTXCONFIRMATIONFCTPTROFMMROM                        STD_ON
#define PDUR_RECEPTIONINDICATIONQUEUE                                 STD_OFF  /**< Deactivateable: 'PduR_ReceptionIndicationQueue' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduREnableDeferredReception] is configured to 'false'' */
#define PDUR_RMGDESTROMIDXOFRECEPTIONINDICATIONQUEUE                  STD_OFF  /**< Deactivateable: 'PduR_ReceptionIndicationQueue.RmGDestRomIdx' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduREnableDeferredReception] is configured to 'false'' */
#define PDUR_RECEPTIONINDICATIONQUEUEREADIDX                          STD_OFF  /**< Deactivateable: 'PduR_ReceptionIndicationQueueReadIdx' Reason: 'All indirection targets are deactivated in all variants.' */
#define PDUR_RECEPTIONINDICATIONQUEUEWRITEIDX                         STD_OFF  /**< Deactivateable: 'PduR_ReceptionIndicationQueueWriteIdx' Reason: 'All indirection targets are deactivated in all variants.' */
#define PDUR_RMBUFFEREDIFPROPERTIESRAM                                STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRam' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
#define PDUR_IFSMSTATEOFRMBUFFEREDIFPROPERTIESRAM                     STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRam.IfSmState' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
#define PDUR_RMBUFFEREDIFPROPERTIESROM                                STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRom' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_BMTXBUFFERINDROMENDIDXOFRMBUFFEREDIFPROPERTIESROM        STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRom.BmTxBufferIndRomEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_BMTXBUFFERINDROMLENGTHOFRMBUFFEREDIFPROPERTIESROM        STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRom.BmTxBufferIndRomLength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_BMTXBUFFERINDROMSTARTIDXOFRMBUFFEREDIFPROPERTIESROM      STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRom.BmTxBufferIndRomStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_DEDICATEDTXBUFFEROFRMBUFFEREDIFPROPERTIESROM             STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRom.DedicatedTxBuffer' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_FIFOINITVALUESENDIDXOFRMBUFFEREDIFPROPERTIESROM          STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRom.FiFoInitValuesEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_FIFOINITVALUESLENGTHOFRMBUFFEREDIFPROPERTIESROM          STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRom.FiFoInitValuesLength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_FIFOINITVALUESSTARTIDXOFRMBUFFEREDIFPROPERTIESROM        STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRom.FiFoInitValuesStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_FIFOINITVALUESUSEDOFRMBUFFEREDIFPROPERTIESROM            STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRom.FiFoInitValuesUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_FIFOTYPEOFRMBUFFEREDIFPROPERTIESROM                      STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRom.FifoType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_MAXPDULENGTHOFRMBUFFEREDIFPROPERTIESROM                  STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRom.MaxPduLength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_RMBUFFEREDTPPROPERTIESRAM                                STD_ON
#define PDUR_FMFIFOELEMENTRAMIDXOFRMBUFFEREDTPPROPERTIESRAM           STD_ON
#define PDUR_TPRXSMSTATEOFRMBUFFEREDTPPROPERTIESRAM                   STD_ON
#define PDUR_RMBUFFEREDTPPROPERTIESROM                                STD_ON
#define PDUR_BMTXBUFFERINDROMENDIDXOFRMBUFFEREDTPPROPERTIESROM        STD_ON
#define PDUR_BMTXBUFFERINDROMLENGTHOFRMBUFFEREDTPPROPERTIESROM        STD_ON
#define PDUR_BMTXBUFFERINDROMSTARTIDXOFRMBUFFEREDTPPROPERTIESROM      STD_ON
#define PDUR_DEDICATEDTXBUFFEROFRMBUFFEREDTPPROPERTIESROM             STD_OFF  /**< Deactivateable: 'PduR_RmBufferedTpPropertiesRom.DedicatedTxBuffer' Reason: 'the value of PduR_DedicatedTxBufferOfRmBufferedTpPropertiesRom is always 'false' due to this, the array is deactivated.' */
#define PDUR_FMFIFOROMIDXOFRMBUFFEREDTPPROPERTIESROM                  STD_ON
#define PDUR_METADATALENGTHOFRMBUFFEREDTPPROPERTIESROM                STD_OFF  /**< Deactivateable: 'PduR_RmBufferedTpPropertiesRom.MetaDataLength' Reason: 'Meta Data Support is not active' */
#define PDUR_METADATALENGTHUSEDOFRMBUFFEREDTPPROPERTIESROM            STD_OFF  /**< Deactivateable: 'PduR_RmBufferedTpPropertiesRom.MetaDataLengthUsed' Reason: 'the value of PduR_MetaDataLengthUsedOfRmBufferedTpPropertiesRom is always 'false' due to this, the array is deactivated.' */
#define PDUR_TPTHRESHOLDOFRMBUFFEREDTPPROPERTIESROM                   STD_ON
#define PDUR_RMDESTROM                                                STD_ON
#define PDUR_DIRECTIONOFRMDESTROM                                     STD_ON
#define PDUR_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM                     STD_OFF  /**< Deactivateable: 'PduR_RmDestRom.PduLengthHandlingStrategy' Reason: 'the value of PduR_PduLengthHandlingStrategyOfRmDestRom is always '0' due to this, the array is deactivated.' */
#define PDUR_RMDESTRPGROMIDXOFRMDESTROM                               STD_OFF  /**< Deactivateable: 'PduR_RmDestRom.RmDestRpgRomIdx' Reason: 'the optional indirection is deactivated because RmDestRpgRomUsedOfRmDestRom is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_RMDESTRPGROMUSEDOFRMDESTROM                              STD_OFF  /**< Deactivateable: 'PduR_RmDestRom.RmDestRpgRomUsed' Reason: 'the optional indirection is deactivated because RmDestRpgRomUsedOfRmDestRom is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_RMGDESTROMIDXOFRMDESTROM                                 STD_ON
#define PDUR_RMSRCROMIDXOFRMDESTROM                                   STD_ON
#define PDUR_ROUTINGTYPEOFRMDESTROM                                   STD_ON
#define PDUR_RMDESTRPGRAM                                             STD_OFF  /**< Deactivateable: 'PduR_RmDestRpgRam' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
#define PDUR_ENABLEDCNTOFRMDESTRPGRAM                                 STD_OFF  /**< Deactivateable: 'PduR_RmDestRpgRam.EnabledCnt' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
#define PDUR_RMDESTRPGROM                                             STD_OFF  /**< Deactivateable: 'PduR_RmDestRpgRom' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_INITIALENABLEDCNTOFRMDESTRPGROM                          STD_OFF  /**< Deactivateable: 'PduR_RmDestRpgRom.InitialEnabledCnt' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_RMDESTROMIDXOFRMDESTRPGROM                               STD_OFF  /**< Deactivateable: 'PduR_RmDestRpgRom.RmDestRomIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_RMDESTROMIFIDXOFRMDESTRPGROM                             STD_OFF  /**< Deactivateable: 'PduR_RmDestRpgRom.RmDestRomIfIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_RMDESTROMIFUSEDOFRMDESTRPGROM                            STD_OFF  /**< Deactivateable: 'PduR_RmDestRpgRom.RmDestRomIfUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_RMDESTROMUSEDOFRMDESTRPGROM                              STD_OFF  /**< Deactivateable: 'PduR_RmDestRpgRom.RmDestRomUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_RMDESTRPGROMIND                                          STD_OFF  /**< Deactivateable: 'PduR_RmDestRpgRomInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_RMGDESTNTO1INFORAM                                       STD_OFF  /**< Deactivateable: 'PduR_RmGDestNto1InfoRam' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
#define PDUR_RMDESTROMIDXOFRMGDESTNTO1INFORAM                         STD_OFF  /**< Deactivateable: 'PduR_RmGDestNto1InfoRam.RmDestRomIdx' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
#define PDUR_TRANSMISSIONACTIVEOFRMGDESTNTO1INFORAM                   STD_OFF  /**< Deactivateable: 'PduR_RmGDestNto1InfoRam.TransmissionActive' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
#define PDUR_RMGDESTROM                                               STD_ON
#define PDUR_DESTHNDOFRMGDESTROM                                      STD_ON
#define PDUR_FMFIFOINSTANCEROMIDXOFRMGDESTROM                         STD_ON
#define PDUR_FMFIFOINSTANCEROMUSEDOFRMGDESTROM                        STD_ON
#define PDUR_MASKEDBITSOFRMGDESTROM                                   STD_ON
#define PDUR_MMROMIDXOFRMGDESTROM                                     STD_ON
#define PDUR_PDURDESTPDUPROCESSINGOFRMGDESTROM                        STD_ON
#define PDUR_RMBUFFEREDIFPROPERTIESROMIDXOFRMGDESTROM                 STD_OFF  /**< Deactivateable: 'PduR_RmGDestRom.RmBufferedIfPropertiesRomIdx' Reason: 'the optional indirection is deactivated because RmBufferedIfPropertiesRomUsedOfRmGDestRom is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_RMBUFFEREDIFPROPERTIESROMUSEDOFRMGDESTROM                STD_OFF  /**< Deactivateable: 'PduR_RmGDestRom.RmBufferedIfPropertiesRomUsed' Reason: 'the optional indirection is deactivated because RmBufferedIfPropertiesRomUsedOfRmGDestRom is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_RMDESTROMIDXOFRMGDESTROM                                 STD_ON
#define PDUR_RMDESTROMUSEDOFRMGDESTROM                                STD_ON
#define PDUR_RMGDESTNTO1INFORAMIDXOFRMGDESTROM                        STD_OFF  /**< Deactivateable: 'PduR_RmGDestRom.RmGDestNto1InfoRamIdx' Reason: 'the optional indirection is deactivated because RmGDestNto1InfoRamUsedOfRmGDestRom is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_RMGDESTNTO1INFORAMUSEDOFRMGDESTROM                       STD_OFF  /**< Deactivateable: 'PduR_RmGDestRom.RmGDestNto1InfoRamUsed' Reason: 'the optional indirection is deactivated because RmGDestNto1InfoRamUsedOfRmGDestRom is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_RMGDESTTPTXSTATERAMIDXOFRMGDESTROM                       STD_ON
#define PDUR_RMGDESTTPTXSTATERAMUSEDOFRMGDESTROM                      STD_ON
#define PDUR_SMGDESTROMIDXOFRMGDESTROM                                STD_OFF  /**< Deactivateable: 'PduR_RmGDestRom.SmGDestRomIdx' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMGDESTROMUSEDOFRMGDESTROM                               STD_OFF  /**< Deactivateable: 'PduR_RmGDestRom.SmGDestRomUsed' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_RMGDESTTPTXSTATERAM                                      STD_ON
#define PDUR_TPTXINSTSMSTATEOFRMGDESTTPTXSTATERAM                     STD_ON
#define PDUR_RMSRCROM                                                 STD_ON
#define PDUR_MASKEDBITSOFRMSRCROM                                     STD_ON
#define PDUR_MMROMIDXOFRMSRCROM                                       STD_ON
#define PDUR_RMBUFFEREDTPPROPERTIESROMIDXOFRMSRCROM                   STD_ON
#define PDUR_RMBUFFEREDTPPROPERTIESROMUSEDOFRMSRCROM                  STD_ON
#define PDUR_RMDESTROMENDIDXOFRMSRCROM                                STD_ON
#define PDUR_RMDESTROMLENGTHOFRMSRCROM                                STD_ON
#define PDUR_RMDESTROMSTARTIDXOFRMSRCROM                              STD_ON
#define PDUR_SMSRCROMIDXOFRMSRCROM                                    STD_OFF  /**< Deactivateable: 'PduR_RmSrcRom.SmSrcRomIdx' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMSRCROMUSEDOFRMSRCROM                                   STD_OFF  /**< Deactivateable: 'PduR_RmSrcRom.SmSrcRomUsed' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SRCHNDOFRMSRCROM                                         STD_ON
#define PDUR_TRIGGERTRANSMITSUPPORTEDOFRMSRCROM                       STD_ON
#define PDUR_TXCONFIRMATIONSUPPORTEDOFRMSRCROM                        STD_ON
#define PDUR_RMTRANSMITFCTPTR                                         STD_ON
#define PDUR_RPGRAM                                                   STD_OFF  /**< Deactivateable: 'PduR_RpgRam' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
#define PDUR_ENABLEDOFRPGRAM                                          STD_OFF  /**< Deactivateable: 'PduR_RpgRam.Enabled' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
#define PDUR_RPGROM                                                   STD_OFF  /**< Deactivateable: 'PduR_RpgRom' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_ENABLEDATINITOFRPGROM                                    STD_OFF  /**< Deactivateable: 'PduR_RpgRom.EnabledAtInit' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_INVALIDHNDOFRPGROM                                       STD_OFF  /**< Deactivateable: 'PduR_RpgRom.InvalidHnd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_RMDESTRPGROMINDENDIDXOFRPGROM                            STD_OFF  /**< Deactivateable: 'PduR_RpgRom.RmDestRpgRomIndEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_RMDESTRPGROMINDSTARTIDXOFRPGROM                          STD_OFF  /**< Deactivateable: 'PduR_RpgRom.RmDestRpgRomIndStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_RMDESTRPGROMINDUSEDOFRPGROM                              STD_OFF  /**< Deactivateable: 'PduR_RpgRom.RmDestRpgRomIndUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_RXIF2DEST                                                STD_ON
#define PDUR_BSWMPDURRXINDICATIONCALLBACKOFRXIF2DEST                  STD_OFF  /**< Deactivateable: 'PduR_RxIf2Dest.BswMPduRRxIndicationCallback' Reason: 'Callback Support is not active' */
#define PDUR_INVALIDHNDOFRXIF2DEST                                    STD_OFF  /**< Deactivateable: 'PduR_RxIf2Dest.InvalidHnd' Reason: 'the value of PduR_InvalidHndOfRxIf2Dest is always 'false' due to this, the array is deactivated.' */
#define PDUR_RMSRCROMIDXOFRXIF2DEST                                   STD_ON
#define PDUR_RXTP2DEST                                                STD_ON
#define PDUR_BSWMPDURTPRXINDICATIONCALLBACKOFRXTP2DEST                STD_OFF  /**< Deactivateable: 'PduR_RxTp2Dest.BswMPduRTpRxIndicationCallback' Reason: 'Callback Support is not active' */
#define PDUR_BSWMPDURTPSTARTOFRECEPTIONCALLBACKOFRXTP2DEST            STD_OFF  /**< Deactivateable: 'PduR_RxTp2Dest.BswMPduRTpStartOfReceptionCallback' Reason: 'Callback Support is not active' */
#define PDUR_INVALIDHNDOFRXTP2DEST                                    STD_OFF  /**< Deactivateable: 'PduR_RxTp2Dest.InvalidHnd' Reason: 'the value of PduR_InvalidHndOfRxTp2Dest is always 'false' due to this, the array is deactivated.' */
#define PDUR_RMSRCROMIDXOFRXTP2DEST                                   STD_ON
#define PDUR_RMSRCROMUSEDOFRXTP2DEST                                  STD_ON
#define PDUR_RXTP2SRC                                                 STD_OFF  /**< Deactivateable: 'PduR_RxTp2Src' Reason: '(No PduRBswModule configured which uses the CancelReceive API.. Evaluated DefinitionRef: /MICROSAR/PduR/PduRBswModules/PduRCancelReceive) && (No PduRBswModule configured which uses the ChangeParameter API.. Evaluated DefinitionRef: /MICROSAR/PduR/PduRBswModules/PduRChangeParameterRequestApi)' */
#define PDUR_INVALIDHNDOFRXTP2SRC                                     STD_OFF  /**< Deactivateable: 'PduR_RxTp2Src.InvalidHnd' Reason: '(No PduRBswModule configured which uses the CancelReceive API.. Evaluated DefinitionRef: /MICROSAR/PduR/PduRBswModules/PduRCancelReceive) && (No PduRBswModule configured which uses the ChangeParameter API.. Evaluated DefinitionRef: /MICROSAR/PduR/PduRBswModules/PduRChangeParameterRequestApi)' */
#define PDUR_RMDESTROMIDXOFRXTP2SRC                                   STD_OFF  /**< Deactivateable: 'PduR_RxTp2Src.RmDestRomIdx' Reason: '(No PduRBswModule configured which uses the CancelReceive API.. Evaluated DefinitionRef: /MICROSAR/PduR/PduRBswModules/PduRCancelReceive) && (No PduRBswModule configured which uses the ChangeParameter API.. Evaluated DefinitionRef: /MICROSAR/PduR/PduRBswModules/PduRChangeParameterRequestApi)' */
#define PDUR_SIZEOFBMTXBUFFERARRAYRAM                                 STD_ON
#define PDUR_SIZEOFBMTXBUFFERINDROM                                   STD_ON
#define PDUR_SIZEOFBMTXBUFFERINSTANCERAM                              STD_ON
#define PDUR_SIZEOFBMTXBUFFERINSTANCEROM                              STD_ON
#define PDUR_SIZEOFBMTXBUFFERRAM                                      STD_ON
#define PDUR_SIZEOFBMTXBUFFERROM                                      STD_ON
#define PDUR_SIZEOFCOPYRXDATARXSMTRANSITION                           STD_ON
#define PDUR_SIZEOFCOPYTXDATATXINSTSMTRANSITION                       STD_ON
#define PDUR_SIZEOFFINISHREADFMSMTRANSITION                           STD_ON
#define PDUR_SIZEOFFINISHRECEPTIONRMSMTRANSITION                      STD_ON
#define PDUR_SIZEOFFINISHTRANSMISSIONRMSMTRANSITION                   STD_ON
#define PDUR_SIZEOFFINISHWRITEFMSMTRANSITION                          STD_ON
#define PDUR_SIZEOFFMFIFOELEMENTRAM                                   STD_ON
#define PDUR_SIZEOFFMFIFOINSTANCERAM                                  STD_ON
#define PDUR_SIZEOFFMFIFOINSTANCEROM                                  STD_ON
#define PDUR_SIZEOFFMFIFORAM                                          STD_ON
#define PDUR_SIZEOFFMFIFOROM                                          STD_ON
#define PDUR_SIZEOFIFROUTINGSTATETABLE                                STD_ON
#define PDUR_SIZEOFMMROM                                              STD_ON
#define PDUR_SIZEOFRMBUFFEREDTPPROPERTIESRAM                          STD_ON
#define PDUR_SIZEOFRMBUFFEREDTPPROPERTIESROM                          STD_ON
#define PDUR_SIZEOFRMDESTROM                                          STD_ON
#define PDUR_SIZEOFRMGDESTROM                                         STD_ON
#define PDUR_SIZEOFRMGDESTTPTXSTATERAM                                STD_ON
#define PDUR_SIZEOFRMSRCROM                                           STD_ON
#define PDUR_SIZEOFRMTRANSMITFCTPTR                                   STD_ON
#define PDUR_SIZEOFRXIF2DEST                                          STD_ON
#define PDUR_SIZEOFRXTP2DEST                                          STD_ON
#define PDUR_SIZEOFSTARTOFRECEPTIONRXSMTRANSITION                     STD_ON
#define PDUR_SIZEOFTPACTIVATENEXTFIFOSMTRANSITION                     STD_ON
#define PDUR_SIZEOFTPACTIVATEREADFIFOSMTRANSITION                     STD_ON
#define PDUR_SIZEOFTPACTIVATEWRITEFIFOSMTRANSITION                    STD_ON
#define PDUR_SIZEOFTPCANCELRECEIVEFIFOSMTRANSITION                    STD_ON
#define PDUR_SIZEOFTPCANCELTRANSMITTXINSTSMTRANSITION                 STD_ON
#define PDUR_SIZEOFTPCHECKREADY2TRANSMITRMSMTRANSITION                STD_ON
#define PDUR_SIZEOFTPRXINDICATIONRXSMTRANSITION                       STD_ON
#define PDUR_SIZEOFTPTRIGGERTRANSMITTXINSTSMTRANSITION                STD_ON
#define PDUR_SIZEOFTPTXCONFIRMATIONTXSMTRANSITION                     STD_ON
#define PDUR_SIZEOFTX2LO                                              STD_ON
#define PDUR_SIZEOFTXIF2UP                                            STD_ON
#define PDUR_SIZEOFTXTP2SRC                                           STD_ON
#define PDUR_SMDATAPLANEROM                                           STD_OFF  /**< Deactivateable: 'PduR_SmDataPlaneRom' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMFIBRAMENDIDXOFSMDATAPLANEROM                           STD_OFF  /**< Deactivateable: 'PduR_SmDataPlaneRom.SmFibRamEndIdx' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMFIBRAMSTARTIDXOFSMDATAPLANEROM                         STD_OFF  /**< Deactivateable: 'PduR_SmDataPlaneRom.SmFibRamStartIdx' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMFIBRAMUSEDOFSMDATAPLANEROM                             STD_OFF  /**< Deactivateable: 'PduR_SmDataPlaneRom.SmFibRamUsed' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMLINEARTATOSACALCULATIONSTRATEGYROMIDXOFSMDATAPLANEROM  STD_OFF  /**< Deactivateable: 'PduR_SmDataPlaneRom.SmLinearTaToSaCalculationStrategyRomIdx' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMLINEARTATOSACALCULATIONSTRATEGYROMUSEDOFSMDATAPLANEROM STD_OFF  /**< Deactivateable: 'PduR_SmDataPlaneRom.SmLinearTaToSaCalculationStrategyRomUsed' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMSATAFROMMETADATACALCULATIONSTRATEGYROMIDXOFSMDATAPLANEROM STD_OFF  /**< Deactivateable: 'PduR_SmDataPlaneRom.SmSaTaFromMetaDataCalculationStrategyRomIdx' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMSATAFROMMETADATACALCULATIONSTRATEGYROMUSEDOFSMDATAPLANEROM STD_OFF  /**< Deactivateable: 'PduR_SmDataPlaneRom.SmSaTaFromMetaDataCalculationStrategyRomUsed' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMFIBRAM                                                 STD_OFF  /**< Deactivateable: 'PduR_SmFibRam' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_LEARNEDCONNECTIONIDOFSMFIBRAM                            STD_OFF  /**< Deactivateable: 'PduR_SmFibRam.LearnedConnectionId' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMGDESTFILTERFCTPTR                                      STD_OFF  /**< Deactivateable: 'PduR_SmGDestFilterFctPtr' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMGDESTROM                                               STD_OFF  /**< Deactivateable: 'PduR_SmGDestRom' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_CONNECTIONIDOFSMGDESTROM                                 STD_OFF  /**< Deactivateable: 'PduR_SmGDestRom.ConnectionId' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_METADATALENGTHOFSMGDESTROM                               STD_OFF  /**< Deactivateable: 'PduR_SmGDestRom.MetaDataLength' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMDATAPLANEROMIDXOFSMGDESTROM                            STD_OFF  /**< Deactivateable: 'PduR_SmGDestRom.SmDataPlaneRomIdx' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMGDESTFILTERFCTPTRIDXOFSMGDESTROM                       STD_OFF  /**< Deactivateable: 'PduR_SmGDestRom.SmGDestFilterFctPtrIdx' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMLINEARTATOSACALCULATIONSTRATEGYGETSAFCTPTR             STD_OFF  /**< Deactivateable: 'PduR_SmLinearTaToSaCalculationStrategyGetSaFctPtr' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMLINEARTATOSACALCULATIONSTRATEGYROM                     STD_OFF  /**< Deactivateable: 'PduR_SmLinearTaToSaCalculationStrategyRom' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_MASKOFSMLINEARTATOSACALCULATIONSTRATEGYROM               STD_OFF  /**< Deactivateable: 'PduR_SmLinearTaToSaCalculationStrategyRom.Mask' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_OFFSETOFSMLINEARTATOSACALCULATIONSTRATEGYROM             STD_OFF  /**< Deactivateable: 'PduR_SmLinearTaToSaCalculationStrategyRom.Offset' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMSATAFROMMETADATACALCULATIONSTRATEGYROM                 STD_OFF  /**< Deactivateable: 'PduR_SmSaTaFromMetaDataCalculationStrategyRom' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SAMASKOFSMSATAFROMMETADATACALCULATIONSTRATEGYROM         STD_OFF  /**< Deactivateable: 'PduR_SmSaTaFromMetaDataCalculationStrategyRom.SaMask' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SASTARTBITOFSMSATAFROMMETADATACALCULATIONSTRATEGYROM     STD_OFF  /**< Deactivateable: 'PduR_SmSaTaFromMetaDataCalculationStrategyRom.SaStartBit' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_TAMASKOFSMSATAFROMMETADATACALCULATIONSTRATEGYROM         STD_OFF  /**< Deactivateable: 'PduR_SmSaTaFromMetaDataCalculationStrategyRom.TaMask' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_TASTARTBITOFSMSATAFROMMETADATACALCULATIONSTRATEGYROM     STD_OFF  /**< Deactivateable: 'PduR_SmSaTaFromMetaDataCalculationStrategyRom.TaStartBit' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMSRCFILTERFCTPTR                                        STD_OFF  /**< Deactivateable: 'PduR_SmSrcFilterFctPtr' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMSRCROM                                                 STD_OFF  /**< Deactivateable: 'PduR_SmSrcRom' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_CONNECTIONIDOFSMSRCROM                                   STD_OFF  /**< Deactivateable: 'PduR_SmSrcRom.ConnectionId' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_METADATALENGTHOFSMSRCROM                                 STD_OFF  /**< Deactivateable: 'PduR_SmSrcRom.MetaDataLength' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMDATAPLANEROMIDXOFSMSRCROM                              STD_OFF  /**< Deactivateable: 'PduR_SmSrcRom.SmDataPlaneRomIdx' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMLINEARTATOSACALCULATIONSTRATEGYGETSAFCTPTRIDXOFSMSRCROM STD_OFF  /**< Deactivateable: 'PduR_SmSrcRom.SmLinearTaToSaCalculationStrategyGetSaFctPtrIdx' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMLINEARTATOSACALCULATIONSTRATEGYGETSAFCTPTRUSEDOFSMSRCROM STD_OFF  /**< Deactivateable: 'PduR_SmSrcRom.SmLinearTaToSaCalculationStrategyGetSaFctPtrUsed' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_SMSRCFILTERFCTPTRIDXOFSMSRCROM                           STD_OFF  /**< Deactivateable: 'PduR_SmSrcRom.SmSrcFilterFctPtrIdx' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRSwitching] is configured to 'false'' */
#define PDUR_STARTOFRECEPTIONRXSMTRANSITION                           STD_ON
#define PDUR_FCTPTROFSTARTOFRECEPTIONRXSMTRANSITION                   STD_ON
#define PDUR_TPACTIVATENEXTFIFOSMTRANSITION                           STD_ON
#define PDUR_FCTPTROFTPACTIVATENEXTFIFOSMTRANSITION                   STD_ON
#define PDUR_TPACTIVATEREADFIFOSMTRANSITION                           STD_ON
#define PDUR_FCTPTROFTPACTIVATEREADFIFOSMTRANSITION                   STD_ON
#define PDUR_TPACTIVATEWRITEFIFOSMTRANSITION                          STD_ON
#define PDUR_FCTPTROFTPACTIVATEWRITEFIFOSMTRANSITION                  STD_ON
#define PDUR_TPCANCELRECEIVEFIFOSMTRANSITION                          STD_ON
#define PDUR_FCTPTROFTPCANCELRECEIVEFIFOSMTRANSITION                  STD_ON
#define PDUR_TPCANCELTRANSMITTXINSTSMTRANSITION                       STD_ON
#define PDUR_FCTPTROFTPCANCELTRANSMITTXINSTSMTRANSITION               STD_ON
#define PDUR_TPCHECKREADY2TRANSMITRMSMTRANSITION                      STD_ON
#define PDUR_FCTPTROFTPCHECKREADY2TRANSMITRMSMTRANSITION              STD_ON
#define PDUR_TPDISABLEROUTINGTXSMTRANSITION                           STD_OFF  /**< Deactivateable: 'PduR_TpDisableRoutingTxSmTransition' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FCTPTROFTPDISABLEROUTINGTXSMTRANSITION                   STD_OFF  /**< Deactivateable: 'PduR_TpDisableRoutingTxSmTransition.FctPtr' Reason: 'No Gw Tp RoutingPaths which is part of a RPG' */
#define PDUR_TPRXINDICATIONRXSMTRANSITION                             STD_ON
#define PDUR_FCTPTROFTPRXINDICATIONRXSMTRANSITION                     STD_ON
#define PDUR_TPTRIGGERTRANSMITTXINSTSMTRANSITION                      STD_ON
#define PDUR_FCTPTROFTPTRIGGERTRANSMITTXINSTSMTRANSITION              STD_ON
#define PDUR_TPTXCONFIRMATIONTXSMTRANSITION                           STD_ON
#define PDUR_FCTPTROFTPTXCONFIRMATIONTXSMTRANSITION                   STD_ON
#define PDUR_TRANSMITREQUESTQUEUE                                     STD_OFF  /**< Deactivateable: 'PduR_TransmitRequestQueue' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduREnableDeferredTransmission] is configured to 'false'' */
#define PDUR_RMGDESTROMIDXOFTRANSMITREQUESTQUEUE                      STD_OFF  /**< Deactivateable: 'PduR_TransmitRequestQueue.RmGDestRomIdx' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduREnableDeferredTransmission] is configured to 'false'' */
#define PDUR_TRANSMITREQUESTQUEUEREADIDX                              STD_OFF  /**< Deactivateable: 'PduR_TransmitRequestQueueReadIdx' Reason: 'All indirection targets are deactivated in all variants.' */
#define PDUR_TRANSMITREQUESTQUEUEWRITEIDX                             STD_OFF  /**< Deactivateable: 'PduR_TransmitRequestQueueWriteIdx' Reason: 'All indirection targets are deactivated in all variants.' */
#define PDUR_TX2LO                                                    STD_ON
#define PDUR_BSWMPDURTRANSMITCALLBACKOFTX2LO                          STD_OFF  /**< Deactivateable: 'PduR_Tx2Lo.BswMPduRTransmitCallback' Reason: 'Callback Support is not active' */
#define PDUR_CANCELTRANSMITUSEDOFTX2LO                                STD_ON
#define PDUR_INVALIDHNDOFTX2LO                                        STD_OFF  /**< Deactivateable: 'PduR_Tx2Lo.InvalidHnd' Reason: 'the value of PduR_InvalidHndOfTx2Lo is always 'false' due to this, the array is deactivated.' */
#define PDUR_MASKEDBITSOFTX2LO                                        STD_ON
#define PDUR_RMSRCROMIDXOFTX2LO                                       STD_ON
#define PDUR_RMSRCROMUSEDOFTX2LO                                      STD_ON
#define PDUR_RMTRANSMITFCTPTRIDXOFTX2LO                               STD_ON
#define PDUR_TXIF2UP                                                  STD_ON
#define PDUR_BSWMPDURTXCONFIRMATIONCALLBACKOFTXIF2UP                  STD_OFF  /**< Deactivateable: 'PduR_TxIf2Up.BswMPduRTxConfirmationCallback' Reason: 'Callback Support is not active' */
#define PDUR_INVALIDHNDOFTXIF2UP                                      STD_OFF  /**< Deactivateable: 'PduR_TxIf2Up.InvalidHnd' Reason: 'the value of PduR_InvalidHndOfTxIf2Up is always 'false' due to this, the array is deactivated.' */
#define PDUR_RMGDESTROMIDXOFTXIF2UP                                   STD_ON
#define PDUR_TXCONFIRMATIONUSEDOFTXIF2UP                              STD_ON
#define PDUR_TXTP2SRC                                                 STD_ON
#define PDUR_BSWMPDURTPTXCONFIRMATIONCALLBACKOFTXTP2SRC               STD_OFF  /**< Deactivateable: 'PduR_TxTp2Src.BswMPduRTpTxConfirmationCallback' Reason: 'Callback Support is not active' */
#define PDUR_INVALIDHNDOFTXTP2SRC                                     STD_OFF  /**< Deactivateable: 'PduR_TxTp2Src.InvalidHnd' Reason: 'the value of PduR_InvalidHndOfTxTp2Src is always 'false' due to this, the array is deactivated.' */
#define PDUR_RMGDESTROMIDXOFTXTP2SRC                                  STD_ON
#define PDUR_PCCONFIG                                                 STD_ON
#define PDUR_BMTXBUFFERARRAYRAMOFPCCONFIG                             STD_ON
#define PDUR_BMTXBUFFERINDROMOFPCCONFIG                               STD_ON
#define PDUR_BMTXBUFFERINSTANCERAMOFPCCONFIG                          STD_ON
#define PDUR_BMTXBUFFERINSTANCEROMOFPCCONFIG                          STD_ON
#define PDUR_BMTXBUFFERRAMOFPCCONFIG                                  STD_ON
#define PDUR_BMTXBUFFERROMOFPCCONFIG                                  STD_ON
#define PDUR_CONFIGIDOFPCCONFIG                                       STD_ON
#define PDUR_COPYRXDATARXSMTRANSITIONOFPCCONFIG                       STD_ON
#define PDUR_COPYTXDATATXINSTSMTRANSITIONOFPCCONFIG                   STD_ON
#define PDUR_FINALMAGICNUMBEROFPCCONFIG                               STD_OFF  /**< Deactivateable: 'PduR_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define PDUR_FINISHREADFMSMTRANSITIONOFPCCONFIG                       STD_ON
#define PDUR_FINISHRECEPTIONRMSMTRANSITIONOFPCCONFIG                  STD_ON
#define PDUR_FINISHTRANSMISSIONRMSMTRANSITIONOFPCCONFIG               STD_ON
#define PDUR_FINISHWRITEFMSMTRANSITIONOFPCCONFIG                      STD_ON
#define PDUR_FMFIFOELEMENTRAMOFPCCONFIG                               STD_ON
#define PDUR_FMFIFOINSTANCERAMOFPCCONFIG                              STD_ON
#define PDUR_FMFIFOINSTANCEROMOFPCCONFIG                              STD_ON
#define PDUR_FMFIFORAMOFPCCONFIG                                      STD_ON
#define PDUR_FMFIFOROMOFPCCONFIG                                      STD_ON
#define PDUR_IFROUTINGSTATETABLEOFPCCONFIG                            STD_ON
#define PDUR_INITDATAHASHCODEOFPCCONFIG                               STD_OFF  /**< Deactivateable: 'PduR_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define PDUR_INITIALIZEDOFPCCONFIG                                    STD_ON
#define PDUR_MMROMOFPCCONFIG                                          STD_ON
#define PDUR_RMBUFFEREDTPPROPERTIESRAMOFPCCONFIG                      STD_ON
#define PDUR_RMBUFFEREDTPPROPERTIESROMOFPCCONFIG                      STD_ON
#define PDUR_RMDESTROMOFPCCONFIG                                      STD_ON
#define PDUR_RMGDESTROMOFPCCONFIG                                     STD_ON
#define PDUR_RMGDESTTPTXSTATERAMOFPCCONFIG                            STD_ON
#define PDUR_RMSRCROMOFPCCONFIG                                       STD_ON
#define PDUR_RMTRANSMITFCTPTROFPCCONFIG                               STD_ON
#define PDUR_RXIF2DESTOFPCCONFIG                                      STD_ON
#define PDUR_RXTP2DESTOFPCCONFIG                                      STD_ON
#define PDUR_SIZEOFBMTXBUFFERARRAYRAMOFPCCONFIG                       STD_ON
#define PDUR_SIZEOFBMTXBUFFERINDROMOFPCCONFIG                         STD_ON
#define PDUR_SIZEOFBMTXBUFFERINSTANCERAMOFPCCONFIG                    STD_ON
#define PDUR_SIZEOFBMTXBUFFERINSTANCEROMOFPCCONFIG                    STD_ON
#define PDUR_SIZEOFBMTXBUFFERRAMOFPCCONFIG                            STD_ON
#define PDUR_SIZEOFBMTXBUFFERROMOFPCCONFIG                            STD_ON
#define PDUR_SIZEOFCOPYRXDATARXSMTRANSITIONOFPCCONFIG                 STD_ON
#define PDUR_SIZEOFCOPYTXDATATXINSTSMTRANSITIONOFPCCONFIG             STD_ON
#define PDUR_SIZEOFFINISHREADFMSMTRANSITIONOFPCCONFIG                 STD_ON
#define PDUR_SIZEOFFINISHRECEPTIONRMSMTRANSITIONOFPCCONFIG            STD_ON
#define PDUR_SIZEOFFINISHTRANSMISSIONRMSMTRANSITIONOFPCCONFIG         STD_ON
#define PDUR_SIZEOFFINISHWRITEFMSMTRANSITIONOFPCCONFIG                STD_ON
#define PDUR_SIZEOFFMFIFOELEMENTRAMOFPCCONFIG                         STD_ON
#define PDUR_SIZEOFFMFIFOINSTANCERAMOFPCCONFIG                        STD_ON
#define PDUR_SIZEOFFMFIFOINSTANCEROMOFPCCONFIG                        STD_ON
#define PDUR_SIZEOFFMFIFORAMOFPCCONFIG                                STD_ON
#define PDUR_SIZEOFFMFIFOROMOFPCCONFIG                                STD_ON
#define PDUR_SIZEOFIFROUTINGSTATETABLEOFPCCONFIG                      STD_ON
#define PDUR_SIZEOFMMROMOFPCCONFIG                                    STD_ON
#define PDUR_SIZEOFRMBUFFEREDTPPROPERTIESRAMOFPCCONFIG                STD_ON
#define PDUR_SIZEOFRMBUFFEREDTPPROPERTIESROMOFPCCONFIG                STD_ON
#define PDUR_SIZEOFRMDESTROMOFPCCONFIG                                STD_ON
#define PDUR_SIZEOFRMGDESTROMOFPCCONFIG                               STD_ON
#define PDUR_SIZEOFRMGDESTTPTXSTATERAMOFPCCONFIG                      STD_ON
#define PDUR_SIZEOFRMSRCROMOFPCCONFIG                                 STD_ON
#define PDUR_SIZEOFRMTRANSMITFCTPTROFPCCONFIG                         STD_ON
#define PDUR_SIZEOFRXIF2DESTOFPCCONFIG                                STD_ON
#define PDUR_SIZEOFRXTP2DESTOFPCCONFIG                                STD_ON
#define PDUR_SIZEOFSTARTOFRECEPTIONRXSMTRANSITIONOFPCCONFIG           STD_ON
#define PDUR_SIZEOFTPACTIVATENEXTFIFOSMTRANSITIONOFPCCONFIG           STD_ON
#define PDUR_SIZEOFTPACTIVATEREADFIFOSMTRANSITIONOFPCCONFIG           STD_ON
#define PDUR_SIZEOFTPACTIVATEWRITEFIFOSMTRANSITIONOFPCCONFIG          STD_ON
#define PDUR_SIZEOFTPCANCELRECEIVEFIFOSMTRANSITIONOFPCCONFIG          STD_ON
#define PDUR_SIZEOFTPCANCELTRANSMITTXINSTSMTRANSITIONOFPCCONFIG       STD_ON
#define PDUR_SIZEOFTPCHECKREADY2TRANSMITRMSMTRANSITIONOFPCCONFIG      STD_ON
#define PDUR_SIZEOFTPRXINDICATIONRXSMTRANSITIONOFPCCONFIG             STD_ON
#define PDUR_SIZEOFTPTRIGGERTRANSMITTXINSTSMTRANSITIONOFPCCONFIG      STD_ON
#define PDUR_SIZEOFTPTXCONFIRMATIONTXSMTRANSITIONOFPCCONFIG           STD_ON
#define PDUR_SIZEOFTX2LOOFPCCONFIG                                    STD_ON
#define PDUR_SIZEOFTXIF2UPOFPCCONFIG                                  STD_ON
#define PDUR_SIZEOFTXTP2SRCOFPCCONFIG                                 STD_ON
#define PDUR_STARTOFRECEPTIONRXSMTRANSITIONOFPCCONFIG                 STD_ON
#define PDUR_TPACTIVATENEXTFIFOSMTRANSITIONOFPCCONFIG                 STD_ON
#define PDUR_TPACTIVATEREADFIFOSMTRANSITIONOFPCCONFIG                 STD_ON
#define PDUR_TPACTIVATEWRITEFIFOSMTRANSITIONOFPCCONFIG                STD_ON
#define PDUR_TPCANCELRECEIVEFIFOSMTRANSITIONOFPCCONFIG                STD_ON
#define PDUR_TPCANCELTRANSMITTXINSTSMTRANSITIONOFPCCONFIG             STD_ON
#define PDUR_TPCHECKREADY2TRANSMITRMSMTRANSITIONOFPCCONFIG            STD_ON
#define PDUR_TPRXINDICATIONRXSMTRANSITIONOFPCCONFIG                   STD_ON
#define PDUR_TPTRIGGERTRANSMITTXINSTSMTRANSITIONOFPCCONFIG            STD_ON
#define PDUR_TPTXCONFIRMATIONTXSMTRANSITIONOFPCCONFIG                 STD_ON
#define PDUR_TX2LOOFPCCONFIG                                          STD_ON
#define PDUR_TXIF2UPOFPCCONFIG                                        STD_ON
#define PDUR_TXTP2SRCOFPCCONFIG                                       STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCMinNumericValueDefines  PduR Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define PDUR_MIN_BMTXBUFFERARRAYRAM                                   0U
#define PDUR_MIN_FILLLEVELOFFMFIFORAM                                 0U
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCMaxNumericValueDefines  PduR Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define PDUR_MAX_BMTXBUFFERARRAYRAM                                   255U
#define PDUR_MAX_FILLLEVELOFFMFIFORAM                                 65535U
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCNoReferenceDefines  PduR No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define PDUR_NO_BMTXBUFFERROMIDXOFFMFIFOELEMENTRAM                    255U
#define PDUR_NO_RMDESTROMIDXOFFMFIFOELEMENTRAM                        65535U
#define PDUR_NO_BMTXBUFFERINSTANCEROMIDXOFFMFIFOINSTANCERAM           255U
#define PDUR_NO_FMFIFOELEMENTRAMREADIDXOFFMFIFORAM                    255U
#define PDUR_NO_FMFIFOELEMENTRAMWRITEIDXOFFMFIFORAM                   255U
#define PDUR_NO_FMFIFOELEMENTRAMIDXOFRMBUFFEREDTPPROPERTIESRAM        255U
#define PDUR_NO_DESTHNDOFRMGDESTROM                                   255U
#define PDUR_NO_FMFIFOINSTANCEROMIDXOFRMGDESTROM                      255U
#define PDUR_NO_RMDESTROMIDXOFRMGDESTROM                              65535U
#define PDUR_NO_RMGDESTTPTXSTATERAMIDXOFRMGDESTROM                    255U
#define PDUR_NO_RMBUFFEREDTPPROPERTIESROMIDXOFRMSRCROM                255U
#define PDUR_NO_SRCHNDOFRMSRCROM                                      255U
#define PDUR_NO_RMSRCROMIDXOFRXTP2DEST                                65535U
#define PDUR_NO_RMSRCROMIDXOFTX2LO                                    65535U
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCEnumExistsDefines  PduR Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define PDUR_EXISTS_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE STD_OFF
#define PDUR_EXISTS_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE STD_OFF
#define PDUR_EXISTS_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE STD_OFF
#define PDUR_EXISTS_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_NO_BUFFER_FIFOTYPEOFRMBUFFEREDIFPROPERTIESROM     STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRom.FifoType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMBUFFEREDIFPROPERTIESROM STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRom.FifoType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMBUFFEREDIFPROPERTIESROM STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRom.FifoType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMBUFFEREDIFPROPERTIESROM STD_OFF  /**< Deactivateable: 'PduR_RmBufferedIfPropertiesRom.FifoType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_EXISTS_RX_DIRECTIONOFRMDESTROM                           STD_ON
#define PDUR_EXISTS_TX_DIRECTIONOFRMDESTROM                           STD_ON
#define PDUR_EXISTS_SHORTEN_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM      STD_OFF  /**< Deactivateable: 'PduR_RmDestRom.PduLengthHandlingStrategy' Reason: 'the value of PduR_PduLengthHandlingStrategyOfRmDestRom is always '0' due to this, the array is deactivated.' */
#define PDUR_EXISTS_DISCARD_PDULENGTHHANDLINGSTRATEGYOFRMDESTROM      STD_OFF  /**< Deactivateable: 'PduR_RmDestRom.PduLengthHandlingStrategy' Reason: 'the value of PduR_PduLengthHandlingStrategyOfRmDestRom is always '0' due to this, the array is deactivated.' */
#define PDUR_EXISTS_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM   STD_ON
#define PDUR_EXISTS_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM   STD_ON
#define PDUR_EXISTS_IF_NOBUFFER_GATEWAY_ROUTINGTYPEOFRMDESTROM        STD_ON
#define PDUR_EXISTS_IF_BUFFERED_ROUTINGTYPEOFRMDESTROM                STD_OFF
#define PDUR_EXISTS_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM   STD_ON
#define PDUR_EXISTS_TP_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM   STD_ON
#define PDUR_EXISTS_TP_BUFFERED_ROUTINGTYPEOFRMDESTROM                STD_ON
#define PDUR_EXISTS_DEFERRED_PDURDESTPDUPROCESSINGOFRMGDESTROM        STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduREnableDeferredReception] and /ActiveEcuC/PduR/PduRGeneral[0:PduREnableDeferredTransmission] are both disabled. */
#define PDUR_EXISTS_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM       STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCEnumDefines  PduR Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define PDUR_BUFFER_EMPTY_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM      0x00U
#define PDUR_BUFFER_WRITE4READ_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM 0x01U
#define PDUR_BUFFER_READ4WRITE_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM 0x02U
#define PDUR_BUFFER_FULL_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM       0x03U
#define PDUR_BUFFER_EMPTY_PDURBUFFERSTATEOFBMTXBUFFERRAM              0x00U
#define PDUR_BUFFER_WRITE4READ_PDURBUFFERSTATEOFBMTXBUFFERRAM         0x01U
#define PDUR_BUFFER_READ4WRITE_PDURBUFFERSTATEOFBMTXBUFFERRAM         0x02U
#define PDUR_BUFFER_FULL_PDURBUFFERSTATEOFBMTXBUFFERRAM               0x03U
#define PDUR_BUFFER_IDLE_TPBUFMGRSTATEOFBMTXBUFFERRAM                 0x00U
#define PDUR_BUFFER_RX_ACTIVE_TPBUFMGRSTATEOFBMTXBUFFERRAM            0x01U
#define PDUR_BUFFER_RX_TX_ACTIVE_TPBUFMGRSTATEOFBMTXBUFFERRAM         0x02U
#define PDUR_BUFFER_TX_ACTIVE_TPBUFMGRSTATEOFBMTXBUFFERRAM            0x03U
#define PDUR_FM_IDLE_STATEOFFMFIFOELEMENTRAM                          0x00U
#define PDUR_FM_ALLOCATED_STATEOFFMFIFOELEMENTRAM                     0x01U
#define PDUR_FM_ALLOCATED_WITH_BUFFER_STATEOFFMFIFOELEMENTRAM         0x02U
#define PDUR_FM_WRITE_ACTIVE_STATEOFFMFIFOELEMENTRAM                  0x03U
#define PDUR_FM_WRITE_FINISHED_READ_PENDING_STATEOFFMFIFOELEMENTRAM   0x04U
#define PDUR_FM_WRITE_READ_ACTIVE_STATEOFFMFIFOELEMENTRAM             0x05U
#define PDUR_FM_WRITE_FINISHED_READ_ACTIVE_STATEOFFMFIFOELEMENTRAM    0x06U
#define PDUR_FM_READ_FINISHED_STATEOFFMFIFOELEMENTRAM                 0x07U
#define PDUR_RM_TX_IDLE_TPTXSMSTATEOFFMFIFORAM                        0x00U
#define PDUR_RM_TX_RECEPTION_ACTIVE_TPTXSMSTATEOFFMFIFORAM            0x01U
#define PDUR_RM_TX_TRANSMISSION_FINISHED_TPTXSMSTATEOFFMFIFORAM       0x02U
#define PDUR_RM_TX_RECEPTION_TRANSMISSION_ACTIVE_TPTXSMSTATEOFFMFIFORAM 0x03U
#define PDUR_RM_TX_RECEPTION_FINISHED_TRANSMISSION_ACTIVE_TPTXSMSTATEOFFMFIFORAM 0x04U
#define PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE 0x00U
#define PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE 0x01U
#define PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE 0x00U
#define PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE 0x01U
#define PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE 0x02U
#define PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE 0x01U
#define PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE 0x02U
#define PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE 0x01U
#define PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE 0x02U
#define PDUR_RM_RX_IDLE_TPRXSMSTATEOFRMBUFFEREDTPPROPERTIESRAM        0x00U
#define PDUR_RM_RX_ACTIVE_TPRXSMSTATEOFRMBUFFEREDTPPROPERTIESRAM      0x01U
#define PDUR_RM_RX_ABORTED_TPRXSMSTATEOFRMBUFFEREDTPPROPERTIESRAM     0x02U
#define PDUR_RX_DIRECTIONOFRMDESTROM                                  0x00U
#define PDUR_TX_DIRECTIONOFRMDESTROM                                  0x01U
#define PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM          0x00U
#define PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM          0x01U
#define PDUR_IF_NOBUFFER_GATEWAY_ROUTINGTYPEOFRMDESTROM               0x02U
#define PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM          0x04U
#define PDUR_TP_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM          0x05U
#define PDUR_TP_BUFFERED_ROUTINGTYPEOFRMDESTROM                       0x06U
#define PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM              0x01U
#define PDUR_RM_TXINST_IDLE_TPTXINSTSMSTATEOFRMGDESTTPTXSTATERAM      0x00U
#define PDUR_RM_TXINST_ACTIVE_TPTXINSTSMSTATEOFRMGDESTTPTXSTATERAM    0x01U
#define PDUR_RM_TXINST_ABORTED_TPTXINSTSMSTATEOFRMGDESTTPTXSTATERAM   0x02U
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCMaskedBitDefines  PduR Masked Bit Defines (PRE_COMPILE)
  \brief  These defines are masks to extract packed boolean data.
  \{
*/ 
#define PDUR_IFCANCELTRANSMITSUPPORTEDOFMMROM_MASK                    0x20U
#define PDUR_LOIFOFMMROM_MASK                                         0x10U
#define PDUR_LOTPOFMMROM_MASK                                         0x08U
#define PDUR_TPCANCELTRANSMITSUPPORTEDOFMMROM_MASK                    0x04U
#define PDUR_UPIFOFMMROM_MASK                                         0x02U
#define PDUR_UPTPOFMMROM_MASK                                         0x01U
#define PDUR_FMFIFOINSTANCEROMUSEDOFRMGDESTROM_MASK                   0x04U
#define PDUR_RMDESTROMUSEDOFRMGDESTROM_MASK                           0x02U
#define PDUR_RMGDESTTPTXSTATERAMUSEDOFRMGDESTROM_MASK                 0x01U
#define PDUR_RMBUFFEREDTPPROPERTIESROMUSEDOFRMSRCROM_MASK             0x04U
#define PDUR_TRIGGERTRANSMITSUPPORTEDOFRMSRCROM_MASK                  0x02U
#define PDUR_TXCONFIRMATIONSUPPORTEDOFRMSRCROM_MASK                   0x01U
#define PDUR_CANCELTRANSMITUSEDOFTX2LO_MASK                           0x02U
#define PDUR_RMSRCROMUSEDOFTX2LO_MASK                                 0x01U
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCIsReducedToDefineDefines  PduR Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define PDUR_ISDEF_BMTXBUFFERROMIDXOFBMTXBUFFERINDROM                 STD_OFF
#define PDUR_ISDEF_BMTXBUFFERROMIDXOFBMTXBUFFERINSTANCEROM            STD_OFF
#define PDUR_ISDEF_BMTXBUFFERARRAYRAMENDIDXOFBMTXBUFFERROM            STD_OFF
#define PDUR_ISDEF_BMTXBUFFERARRAYRAMLENGTHOFBMTXBUFFERROM            STD_OFF
#define PDUR_ISDEF_BMTXBUFFERARRAYRAMSTARTIDXOFBMTXBUFFERROM          STD_OFF
#define PDUR_ISDEF_BMTXBUFFERINSTANCEROMENDIDXOFBMTXBUFFERROM         STD_OFF
#define PDUR_ISDEF_BMTXBUFFERINSTANCEROMSTARTIDXOFBMTXBUFFERROM       STD_OFF
#define PDUR_ISDEF_FCTPTROFCOPYRXDATARXSMTRANSITION                   STD_OFF
#define PDUR_ISDEF_FCTPTROFCOPYTXDATATXINSTSMTRANSITION               STD_OFF
#define PDUR_ISDEF_FCTPTROFFINISHREADFMSMTRANSITION                   STD_OFF
#define PDUR_ISDEF_FCTPTROFFINISHRECEPTIONRMSMTRANSITION              STD_OFF
#define PDUR_ISDEF_FCTPTROFFINISHTRANSMISSIONRMSMTRANSITION           STD_OFF
#define PDUR_ISDEF_FCTPTROFFINISHWRITEFMSMTRANSITION                  STD_OFF
#define PDUR_ISDEF_FMFIFOROMIDXOFFMFIFOINSTANCEROM                    STD_OFF
#define PDUR_ISDEF_FMFIFOELEMENTRAMENDIDXOFFMFIFOROM                  STD_OFF
#define PDUR_ISDEF_FMFIFOELEMENTRAMLENGTHOFFMFIFOROM                  STD_OFF
#define PDUR_ISDEF_FMFIFOELEMENTRAMSTARTIDXOFFMFIFOROM                STD_OFF
#define PDUR_ISDEF_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE STD_OFF
#define PDUR_ISDEF_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE STD_OFF
#define PDUR_ISDEF_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE STD_OFF
#define PDUR_ISDEF_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE STD_OFF
#define PDUR_ISDEF_IFCANCELTRANSMITSUPPORTEDOFMMROM                   STD_OFF
#define PDUR_ISDEF_LOIFCANCELTRANSMITFCTPTROFMMROM                    STD_OFF
#define PDUR_ISDEF_LOIFOFMMROM                                        STD_OFF
#define PDUR_ISDEF_LOIFTRANSMITFCTPTROFMMROM                          STD_OFF
#define PDUR_ISDEF_LOTPCANCELTRANSMITFCTPTROFMMROM                    STD_OFF
#define PDUR_ISDEF_LOTPOFMMROM                                        STD_OFF
#define PDUR_ISDEF_LOTPTRANSMITFCTPTROFMMROM                          STD_OFF
#define PDUR_ISDEF_MASKEDBITSOFMMROM                                  STD_OFF
#define PDUR_ISDEF_TPCANCELTRANSMITSUPPORTEDOFMMROM                   STD_OFF
#define PDUR_ISDEF_UPIFOFMMROM                                        STD_OFF
#define PDUR_ISDEF_UPIFRXINDICATIONFCTPTROFMMROM                      STD_OFF
#define PDUR_ISDEF_UPIFTRIGGERTRANSMITFCTPTROFMMROM                   STD_OFF
#define PDUR_ISDEF_UPIFTXCONFIRMATIONFCTPTROFMMROM                    STD_OFF
#define PDUR_ISDEF_UPTPCOPYRXDATAFCTPTROFMMROM                        STD_OFF
#define PDUR_ISDEF_UPTPCOPYTXDATAFCTPTROFMMROM                        STD_OFF
#define PDUR_ISDEF_UPTPOFMMROM                                        STD_OFF
#define PDUR_ISDEF_UPTPSTARTOFRECEPTIONFCTPTROFMMROM                  STD_OFF
#define PDUR_ISDEF_UPTPTPRXINDICATIONFCTPTROFMMROM                    STD_OFF
#define PDUR_ISDEF_UPTPTPTXCONFIRMATIONFCTPTROFMMROM                  STD_OFF
#define PDUR_ISDEF_BMTXBUFFERINDROMENDIDXOFRMBUFFEREDTPPROPERTIESROM  STD_OFF
#define PDUR_ISDEF_BMTXBUFFERINDROMLENGTHOFRMBUFFEREDTPPROPERTIESROM  STD_OFF
#define PDUR_ISDEF_BMTXBUFFERINDROMSTARTIDXOFRMBUFFEREDTPPROPERTIESROM STD_OFF
#define PDUR_ISDEF_FMFIFOROMIDXOFRMBUFFEREDTPPROPERTIESROM            STD_OFF
#define PDUR_ISDEF_TPTHRESHOLDOFRMBUFFEREDTPPROPERTIESROM             STD_OFF
#define PDUR_ISDEF_DIRECTIONOFRMDESTROM                               STD_OFF
#define PDUR_ISDEF_RMGDESTROMIDXOFRMDESTROM                           STD_OFF
#define PDUR_ISDEF_RMSRCROMIDXOFRMDESTROM                             STD_OFF
#define PDUR_ISDEF_ROUTINGTYPEOFRMDESTROM                             STD_OFF
#define PDUR_ISDEF_DESTHNDOFRMGDESTROM                                STD_OFF
#define PDUR_ISDEF_FMFIFOINSTANCEROMIDXOFRMGDESTROM                   STD_OFF
#define PDUR_ISDEF_FMFIFOINSTANCEROMUSEDOFRMGDESTROM                  STD_OFF
#define PDUR_ISDEF_MASKEDBITSOFRMGDESTROM                             STD_OFF
#define PDUR_ISDEF_MMROMIDXOFRMGDESTROM                               STD_OFF
#define PDUR_ISDEF_PDURDESTPDUPROCESSINGOFRMGDESTROM                  STD_OFF
#define PDUR_ISDEF_RMDESTROMIDXOFRMGDESTROM                           STD_OFF
#define PDUR_ISDEF_RMDESTROMUSEDOFRMGDESTROM                          STD_OFF
#define PDUR_ISDEF_RMGDESTTPTXSTATERAMIDXOFRMGDESTROM                 STD_OFF
#define PDUR_ISDEF_RMGDESTTPTXSTATERAMUSEDOFRMGDESTROM                STD_OFF
#define PDUR_ISDEF_MASKEDBITSOFRMSRCROM                               STD_OFF
#define PDUR_ISDEF_MMROMIDXOFRMSRCROM                                 STD_OFF
#define PDUR_ISDEF_RMBUFFEREDTPPROPERTIESROMIDXOFRMSRCROM             STD_OFF
#define PDUR_ISDEF_RMBUFFEREDTPPROPERTIESROMUSEDOFRMSRCROM            STD_OFF
#define PDUR_ISDEF_RMDESTROMENDIDXOFRMSRCROM                          STD_OFF
#define PDUR_ISDEF_RMDESTROMLENGTHOFRMSRCROM                          STD_OFF
#define PDUR_ISDEF_RMDESTROMSTARTIDXOFRMSRCROM                        STD_OFF
#define PDUR_ISDEF_SRCHNDOFRMSRCROM                                   STD_OFF
#define PDUR_ISDEF_TRIGGERTRANSMITSUPPORTEDOFRMSRCROM                 STD_OFF
#define PDUR_ISDEF_TXCONFIRMATIONSUPPORTEDOFRMSRCROM                  STD_OFF
#define PDUR_ISDEF_RMTRANSMITFCTPTR                                   STD_OFF
#define PDUR_ISDEF_RMSRCROMIDXOFRXIF2DEST                             STD_OFF
#define PDUR_ISDEF_RMSRCROMIDXOFRXTP2DEST                             STD_OFF
#define PDUR_ISDEF_RMSRCROMUSEDOFRXTP2DEST                            STD_OFF
#define PDUR_ISDEF_FCTPTROFSTARTOFRECEPTIONRXSMTRANSITION             STD_OFF
#define PDUR_ISDEF_FCTPTROFTPACTIVATENEXTFIFOSMTRANSITION             STD_OFF
#define PDUR_ISDEF_FCTPTROFTPACTIVATEREADFIFOSMTRANSITION             STD_OFF
#define PDUR_ISDEF_FCTPTROFTPACTIVATEWRITEFIFOSMTRANSITION            STD_OFF
#define PDUR_ISDEF_FCTPTROFTPCANCELRECEIVEFIFOSMTRANSITION            STD_OFF
#define PDUR_ISDEF_FCTPTROFTPCANCELTRANSMITTXINSTSMTRANSITION         STD_OFF
#define PDUR_ISDEF_FCTPTROFTPCHECKREADY2TRANSMITRMSMTRANSITION        STD_OFF
#define PDUR_ISDEF_FCTPTROFTPRXINDICATIONRXSMTRANSITION               STD_OFF
#define PDUR_ISDEF_FCTPTROFTPTRIGGERTRANSMITTXINSTSMTRANSITION        STD_OFF
#define PDUR_ISDEF_FCTPTROFTPTXCONFIRMATIONTXSMTRANSITION             STD_OFF
#define PDUR_ISDEF_CANCELTRANSMITUSEDOFTX2LO                          STD_OFF
#define PDUR_ISDEF_MASKEDBITSOFTX2LO                                  STD_OFF
#define PDUR_ISDEF_RMSRCROMIDXOFTX2LO                                 STD_OFF
#define PDUR_ISDEF_RMSRCROMUSEDOFTX2LO                                STD_OFF
#define PDUR_ISDEF_RMTRANSMITFCTPTRIDXOFTX2LO                         STD_OFF
#define PDUR_ISDEF_RMGDESTROMIDXOFTXIF2UP                             STD_OFF
#define PDUR_ISDEF_TXCONFIRMATIONUSEDOFTXIF2UP                        STD_OFF
#define PDUR_ISDEF_RMGDESTROMIDXOFTXTP2SRC                            STD_OFF
#define PDUR_ISDEF_BMTXBUFFERARRAYRAMOFPCCONFIG                       STD_ON
#define PDUR_ISDEF_BMTXBUFFERINDROMOFPCCONFIG                         STD_ON
#define PDUR_ISDEF_BMTXBUFFERINSTANCERAMOFPCCONFIG                    STD_ON
#define PDUR_ISDEF_BMTXBUFFERINSTANCEROMOFPCCONFIG                    STD_ON
#define PDUR_ISDEF_BMTXBUFFERRAMOFPCCONFIG                            STD_ON
#define PDUR_ISDEF_BMTXBUFFERROMOFPCCONFIG                            STD_ON
#define PDUR_ISDEF_COPYRXDATARXSMTRANSITIONOFPCCONFIG                 STD_ON
#define PDUR_ISDEF_COPYTXDATATXINSTSMTRANSITIONOFPCCONFIG             STD_ON
#define PDUR_ISDEF_FINISHREADFMSMTRANSITIONOFPCCONFIG                 STD_ON
#define PDUR_ISDEF_FINISHRECEPTIONRMSMTRANSITIONOFPCCONFIG            STD_ON
#define PDUR_ISDEF_FINISHTRANSMISSIONRMSMTRANSITIONOFPCCONFIG         STD_ON
#define PDUR_ISDEF_FINISHWRITEFMSMTRANSITIONOFPCCONFIG                STD_ON
#define PDUR_ISDEF_FMFIFOELEMENTRAMOFPCCONFIG                         STD_ON
#define PDUR_ISDEF_FMFIFOINSTANCERAMOFPCCONFIG                        STD_ON
#define PDUR_ISDEF_FMFIFOINSTANCEROMOFPCCONFIG                        STD_ON
#define PDUR_ISDEF_FMFIFORAMOFPCCONFIG                                STD_ON
#define PDUR_ISDEF_FMFIFOROMOFPCCONFIG                                STD_ON
#define PDUR_ISDEF_IFROUTINGSTATETABLEOFPCCONFIG                      STD_ON
#define PDUR_ISDEF_INITIALIZEDOFPCCONFIG                              STD_ON
#define PDUR_ISDEF_MMROMOFPCCONFIG                                    STD_ON
#define PDUR_ISDEF_RMBUFFEREDTPPROPERTIESRAMOFPCCONFIG                STD_ON
#define PDUR_ISDEF_RMBUFFEREDTPPROPERTIESROMOFPCCONFIG                STD_ON
#define PDUR_ISDEF_RMDESTROMOFPCCONFIG                                STD_ON
#define PDUR_ISDEF_RMGDESTROMOFPCCONFIG                               STD_ON
#define PDUR_ISDEF_RMGDESTTPTXSTATERAMOFPCCONFIG                      STD_ON
#define PDUR_ISDEF_RMSRCROMOFPCCONFIG                                 STD_ON
#define PDUR_ISDEF_RMTRANSMITFCTPTROFPCCONFIG                         STD_ON
#define PDUR_ISDEF_RXIF2DESTOFPCCONFIG                                STD_ON
#define PDUR_ISDEF_RXTP2DESTOFPCCONFIG                                STD_ON
#define PDUR_ISDEF_STARTOFRECEPTIONRXSMTRANSITIONOFPCCONFIG           STD_ON
#define PDUR_ISDEF_TPACTIVATENEXTFIFOSMTRANSITIONOFPCCONFIG           STD_ON
#define PDUR_ISDEF_TPACTIVATEREADFIFOSMTRANSITIONOFPCCONFIG           STD_ON
#define PDUR_ISDEF_TPACTIVATEWRITEFIFOSMTRANSITIONOFPCCONFIG          STD_ON
#define PDUR_ISDEF_TPCANCELRECEIVEFIFOSMTRANSITIONOFPCCONFIG          STD_ON
#define PDUR_ISDEF_TPCANCELTRANSMITTXINSTSMTRANSITIONOFPCCONFIG       STD_ON
#define PDUR_ISDEF_TPCHECKREADY2TRANSMITRMSMTRANSITIONOFPCCONFIG      STD_ON
#define PDUR_ISDEF_TPRXINDICATIONRXSMTRANSITIONOFPCCONFIG             STD_ON
#define PDUR_ISDEF_TPTRIGGERTRANSMITTXINSTSMTRANSITIONOFPCCONFIG      STD_ON
#define PDUR_ISDEF_TPTXCONFIRMATIONTXSMTRANSITIONOFPCCONFIG           STD_ON
#define PDUR_ISDEF_TX2LOOFPCCONFIG                                    STD_ON
#define PDUR_ISDEF_TXIF2UPOFPCCONFIG                                  STD_ON
#define PDUR_ISDEF_TXTP2SRCOFPCCONFIG                                 STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCEqualsAlwaysToDefines  PduR Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define PDUR_EQ2_BMTXBUFFERROMIDXOFBMTXBUFFERINDROM                   
#define PDUR_EQ2_BMTXBUFFERROMIDXOFBMTXBUFFERINSTANCEROM              
#define PDUR_EQ2_BMTXBUFFERARRAYRAMENDIDXOFBMTXBUFFERROM              
#define PDUR_EQ2_BMTXBUFFERARRAYRAMLENGTHOFBMTXBUFFERROM              
#define PDUR_EQ2_BMTXBUFFERARRAYRAMSTARTIDXOFBMTXBUFFERROM            
#define PDUR_EQ2_BMTXBUFFERINSTANCEROMENDIDXOFBMTXBUFFERROM           
#define PDUR_EQ2_BMTXBUFFERINSTANCEROMSTARTIDXOFBMTXBUFFERROM         
#define PDUR_EQ2_FCTPTROFCOPYRXDATARXSMTRANSITION                     
#define PDUR_EQ2_FCTPTROFCOPYTXDATATXINSTSMTRANSITION                 
#define PDUR_EQ2_FCTPTROFFINISHREADFMSMTRANSITION                     
#define PDUR_EQ2_FCTPTROFFINISHRECEPTIONRMSMTRANSITION                
#define PDUR_EQ2_FCTPTROFFINISHTRANSMISSIONRMSMTRANSITION             
#define PDUR_EQ2_FCTPTROFFINISHWRITEFMSMTRANSITION                    
#define PDUR_EQ2_FMFIFOROMIDXOFFMFIFOINSTANCEROM                      
#define PDUR_EQ2_FMFIFOELEMENTRAMENDIDXOFFMFIFOROM                    
#define PDUR_EQ2_FMFIFOELEMENTRAMLENGTHOFFMFIFOROM                    
#define PDUR_EQ2_FMFIFOELEMENTRAMSTARTIDXOFFMFIFOROM                  
#define PDUR_EQ2_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE 
#define PDUR_EQ2_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE 
#define PDUR_EQ2_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE 
#define PDUR_EQ2_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE 
#define PDUR_EQ2_IFCANCELTRANSMITSUPPORTEDOFMMROM                     
#define PDUR_EQ2_LOIFCANCELTRANSMITFCTPTROFMMROM                      
#define PDUR_EQ2_LOIFOFMMROM                                          
#define PDUR_EQ2_LOIFTRANSMITFCTPTROFMMROM                            
#define PDUR_EQ2_LOTPCANCELTRANSMITFCTPTROFMMROM                      
#define PDUR_EQ2_LOTPOFMMROM                                          
#define PDUR_EQ2_LOTPTRANSMITFCTPTROFMMROM                            
#define PDUR_EQ2_MASKEDBITSOFMMROM                                    
#define PDUR_EQ2_TPCANCELTRANSMITSUPPORTEDOFMMROM                     
#define PDUR_EQ2_UPIFOFMMROM                                          
#define PDUR_EQ2_UPIFRXINDICATIONFCTPTROFMMROM                        
#define PDUR_EQ2_UPIFTRIGGERTRANSMITFCTPTROFMMROM                     
#define PDUR_EQ2_UPIFTXCONFIRMATIONFCTPTROFMMROM                      
#define PDUR_EQ2_UPTPCOPYRXDATAFCTPTROFMMROM                          
#define PDUR_EQ2_UPTPCOPYTXDATAFCTPTROFMMROM                          
#define PDUR_EQ2_UPTPOFMMROM                                          
#define PDUR_EQ2_UPTPSTARTOFRECEPTIONFCTPTROFMMROM                    
#define PDUR_EQ2_UPTPTPRXINDICATIONFCTPTROFMMROM                      
#define PDUR_EQ2_UPTPTPTXCONFIRMATIONFCTPTROFMMROM                    
#define PDUR_EQ2_BMTXBUFFERINDROMENDIDXOFRMBUFFEREDTPPROPERTIESROM    
#define PDUR_EQ2_BMTXBUFFERINDROMLENGTHOFRMBUFFEREDTPPROPERTIESROM    
#define PDUR_EQ2_BMTXBUFFERINDROMSTARTIDXOFRMBUFFEREDTPPROPERTIESROM  
#define PDUR_EQ2_FMFIFOROMIDXOFRMBUFFEREDTPPROPERTIESROM              
#define PDUR_EQ2_TPTHRESHOLDOFRMBUFFEREDTPPROPERTIESROM               
#define PDUR_EQ2_DIRECTIONOFRMDESTROM                                 
#define PDUR_EQ2_RMGDESTROMIDXOFRMDESTROM                             
#define PDUR_EQ2_RMSRCROMIDXOFRMDESTROM                               
#define PDUR_EQ2_ROUTINGTYPEOFRMDESTROM                               
#define PDUR_EQ2_DESTHNDOFRMGDESTROM                                  
#define PDUR_EQ2_FMFIFOINSTANCEROMIDXOFRMGDESTROM                     
#define PDUR_EQ2_FMFIFOINSTANCEROMUSEDOFRMGDESTROM                    
#define PDUR_EQ2_MASKEDBITSOFRMGDESTROM                               
#define PDUR_EQ2_MMROMIDXOFRMGDESTROM                                 
#define PDUR_EQ2_PDURDESTPDUPROCESSINGOFRMGDESTROM                    
#define PDUR_EQ2_RMDESTROMIDXOFRMGDESTROM                             
#define PDUR_EQ2_RMDESTROMUSEDOFRMGDESTROM                            
#define PDUR_EQ2_RMGDESTTPTXSTATERAMIDXOFRMGDESTROM                   
#define PDUR_EQ2_RMGDESTTPTXSTATERAMUSEDOFRMGDESTROM                  
#define PDUR_EQ2_MASKEDBITSOFRMSRCROM                                 
#define PDUR_EQ2_MMROMIDXOFRMSRCROM                                   
#define PDUR_EQ2_RMBUFFEREDTPPROPERTIESROMIDXOFRMSRCROM               
#define PDUR_EQ2_RMBUFFEREDTPPROPERTIESROMUSEDOFRMSRCROM              
#define PDUR_EQ2_RMDESTROMENDIDXOFRMSRCROM                            
#define PDUR_EQ2_RMDESTROMLENGTHOFRMSRCROM                            
#define PDUR_EQ2_RMDESTROMSTARTIDXOFRMSRCROM                          
#define PDUR_EQ2_SRCHNDOFRMSRCROM                                     
#define PDUR_EQ2_TRIGGERTRANSMITSUPPORTEDOFRMSRCROM                   
#define PDUR_EQ2_TXCONFIRMATIONSUPPORTEDOFRMSRCROM                    
#define PDUR_EQ2_RMTRANSMITFCTPTR                                     
#define PDUR_EQ2_RMSRCROMIDXOFRXIF2DEST                               
#define PDUR_EQ2_RMSRCROMIDXOFRXTP2DEST                               
#define PDUR_EQ2_RMSRCROMUSEDOFRXTP2DEST                              
#define PDUR_EQ2_FCTPTROFSTARTOFRECEPTIONRXSMTRANSITION               
#define PDUR_EQ2_FCTPTROFTPACTIVATENEXTFIFOSMTRANSITION               
#define PDUR_EQ2_FCTPTROFTPACTIVATEREADFIFOSMTRANSITION               
#define PDUR_EQ2_FCTPTROFTPACTIVATEWRITEFIFOSMTRANSITION              
#define PDUR_EQ2_FCTPTROFTPCANCELRECEIVEFIFOSMTRANSITION              
#define PDUR_EQ2_FCTPTROFTPCANCELTRANSMITTXINSTSMTRANSITION           
#define PDUR_EQ2_FCTPTROFTPCHECKREADY2TRANSMITRMSMTRANSITION          
#define PDUR_EQ2_FCTPTROFTPRXINDICATIONRXSMTRANSITION                 
#define PDUR_EQ2_FCTPTROFTPTRIGGERTRANSMITTXINSTSMTRANSITION          
#define PDUR_EQ2_FCTPTROFTPTXCONFIRMATIONTXSMTRANSITION               
#define PDUR_EQ2_CANCELTRANSMITUSEDOFTX2LO                            
#define PDUR_EQ2_MASKEDBITSOFTX2LO                                    
#define PDUR_EQ2_RMSRCROMIDXOFTX2LO                                   
#define PDUR_EQ2_RMSRCROMUSEDOFTX2LO                                  
#define PDUR_EQ2_RMTRANSMITFCTPTRIDXOFTX2LO                           
#define PDUR_EQ2_RMGDESTROMIDXOFTXIF2UP                               
#define PDUR_EQ2_TXCONFIRMATIONUSEDOFTXIF2UP                          
#define PDUR_EQ2_RMGDESTROMIDXOFTXTP2SRC                              
#define PDUR_EQ2_BMTXBUFFERARRAYRAMOFPCCONFIG                         PduR_BmTxBufferArrayRam.raw
#define PDUR_EQ2_BMTXBUFFERINDROMOFPCCONFIG                           PduR_BmTxBufferIndRom
#define PDUR_EQ2_BMTXBUFFERINSTANCERAMOFPCCONFIG                      PduR_BmTxBufferInstanceRam.raw
#define PDUR_EQ2_BMTXBUFFERINSTANCEROMOFPCCONFIG                      PduR_BmTxBufferInstanceRom
#define PDUR_EQ2_BMTXBUFFERRAMOFPCCONFIG                              PduR_BmTxBufferRam.raw
#define PDUR_EQ2_BMTXBUFFERROMOFPCCONFIG                              PduR_BmTxBufferRom
#define PDUR_EQ2_COPYRXDATARXSMTRANSITIONOFPCCONFIG                   PduR_CopyRxDataRxSmTransition
#define PDUR_EQ2_COPYTXDATATXINSTSMTRANSITIONOFPCCONFIG               PduR_CopyTxDataTxInstSmTransition
#define PDUR_EQ2_FINISHREADFMSMTRANSITIONOFPCCONFIG                   PduR_FinishReadFmSmTransition
#define PDUR_EQ2_FINISHRECEPTIONRMSMTRANSITIONOFPCCONFIG              PduR_FinishReceptionRmSmTransition
#define PDUR_EQ2_FINISHTRANSMISSIONRMSMTRANSITIONOFPCCONFIG           PduR_FinishTransmissionRmSmTransition
#define PDUR_EQ2_FINISHWRITEFMSMTRANSITIONOFPCCONFIG                  PduR_FinishWriteFmSmTransition
#define PDUR_EQ2_FMFIFOELEMENTRAMOFPCCONFIG                           PduR_FmFifoElementRam
#define PDUR_EQ2_FMFIFOINSTANCERAMOFPCCONFIG                          PduR_FmFifoInstanceRam.raw
#define PDUR_EQ2_FMFIFOINSTANCEROMOFPCCONFIG                          PduR_FmFifoInstanceRom
#define PDUR_EQ2_FMFIFORAMOFPCCONFIG                                  PduR_FmFifoRam
#define PDUR_EQ2_FMFIFOROMOFPCCONFIG                                  PduR_FmFifoRom
#define PDUR_EQ2_IFROUTINGSTATETABLEOFPCCONFIG                        PduR_IfRoutingStateTable
#define PDUR_EQ2_INITIALIZEDOFPCCONFIG                                (&(PduR_Initialized))
#define PDUR_EQ2_MMROMOFPCCONFIG                                      PduR_MmRom
#define PDUR_EQ2_RMBUFFEREDTPPROPERTIESRAMOFPCCONFIG                  PduR_RmBufferedTpPropertiesRam.raw
#define PDUR_EQ2_RMBUFFEREDTPPROPERTIESROMOFPCCONFIG                  PduR_RmBufferedTpPropertiesRom
#define PDUR_EQ2_RMDESTROMOFPCCONFIG                                  PduR_RmDestRom
#define PDUR_EQ2_RMGDESTROMOFPCCONFIG                                 PduR_RmGDestRom
#define PDUR_EQ2_RMGDESTTPTXSTATERAMOFPCCONFIG                        PduR_RmGDestTpTxStateRam.raw
#define PDUR_EQ2_RMSRCROMOFPCCONFIG                                   PduR_RmSrcRom
#define PDUR_EQ2_RMTRANSMITFCTPTROFPCCONFIG                           PduR_RmTransmitFctPtr
#define PDUR_EQ2_RXIF2DESTOFPCCONFIG                                  PduR_RxIf2Dest
#define PDUR_EQ2_RXTP2DESTOFPCCONFIG                                  PduR_RxTp2Dest
#define PDUR_EQ2_STARTOFRECEPTIONRXSMTRANSITIONOFPCCONFIG             PduR_StartOfReceptionRxSmTransition
#define PDUR_EQ2_TPACTIVATENEXTFIFOSMTRANSITIONOFPCCONFIG             PduR_TpActivateNextFifoSmTransition
#define PDUR_EQ2_TPACTIVATEREADFIFOSMTRANSITIONOFPCCONFIG             PduR_TpActivateReadFifoSmTransition
#define PDUR_EQ2_TPACTIVATEWRITEFIFOSMTRANSITIONOFPCCONFIG            PduR_TpActivateWriteFifoSmTransition
#define PDUR_EQ2_TPCANCELRECEIVEFIFOSMTRANSITIONOFPCCONFIG            PduR_TpCancelReceiveFifoSmTransition
#define PDUR_EQ2_TPCANCELTRANSMITTXINSTSMTRANSITIONOFPCCONFIG         PduR_TpCancelTransmitTxInstSmTransition
#define PDUR_EQ2_TPCHECKREADY2TRANSMITRMSMTRANSITIONOFPCCONFIG        PduR_TpCheckReady2TransmitRmSmTransition
#define PDUR_EQ2_TPRXINDICATIONRXSMTRANSITIONOFPCCONFIG               PduR_TpRxIndicationRxSmTransition
#define PDUR_EQ2_TPTRIGGERTRANSMITTXINSTSMTRANSITIONOFPCCONFIG        PduR_TpTriggerTransmitTxInstSmTransition
#define PDUR_EQ2_TPTXCONFIRMATIONTXSMTRANSITIONOFPCCONFIG             PduR_TpTxConfirmationTxSmTransition
#define PDUR_EQ2_TX2LOOFPCCONFIG                                      PduR_Tx2Lo
#define PDUR_EQ2_TXIF2UPOFPCCONFIG                                    PduR_TxIf2Up
#define PDUR_EQ2_TXTP2SRCOFPCCONFIG                                   PduR_TxTp2Src
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCSymbolicInitializationPointers  PduR Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define PduR_Config_Ptr                                               NULL_PTR  /**< symbolic identifier which shall be used to initialize 'PduR' */
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCInitializationSymbols  PduR Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define PduR_Config                                                   NULL_PTR  /**< symbolic identifier which could be used to initialize 'PduR */
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCGeneral  PduR General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define PDUR_CHECK_INIT_POINTER                                       STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define PDUR_FINAL_MAGIC_NUMBER                                       0x331EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of PduR */
#define PDUR_INDIVIDUAL_POSTBUILD                                     STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'PduR' is not configured to be postbuild capable. */
#define PDUR_INIT_DATA                                                PDUR_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define PDUR_INIT_DATA_HASH_CODE                                      -713907762L  /**< the precompile constant to validate the initialization structure at initialization time of PduR with a hashcode. The seed value is '0x331EU' */
#define PDUR_USE_ECUM_BSW_ERROR_HOOK                                  STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define PDUR_USE_INIT_POINTER                                         STD_OFF  /**< STD_ON if the init pointer PduR shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  PduRLTDataSwitches  PduR Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define PDUR_LTCONFIG                                                 STD_OFF  /**< Deactivateable: 'PduR_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
/** 
  \}
*/ 



/** BroadcastDummy */

#define PDUR_MAX_TRIGGER_TRANSMIT_PDU_SIZE 8


#if (PDUR_FMFIFOELEMENTRAM == STD_OFF)
  #define PduR_FmFifoElementRamIterType uint16
#endif

/**********************************************************************************************************************
 * GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
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
  \defgroup  PduRPCGetConstantDuplicatedRootDataMacros  PduR Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define PduR_GetBmTxBufferArrayRamOfPCConfig()                        PduR_BmTxBufferArrayRam.raw  /**< the pointer to PduR_BmTxBufferArrayRam */
#define PduR_GetBmTxBufferIndRomOfPCConfig()                          PduR_BmTxBufferIndRom  /**< the pointer to PduR_BmTxBufferIndRom */
#define PduR_GetBmTxBufferInstanceRamOfPCConfig()                     PduR_BmTxBufferInstanceRam.raw  /**< the pointer to PduR_BmTxBufferInstanceRam */
#define PduR_GetBmTxBufferInstanceRomOfPCConfig()                     PduR_BmTxBufferInstanceRom  /**< the pointer to PduR_BmTxBufferInstanceRom */
#define PduR_GetBmTxBufferRamOfPCConfig()                             PduR_BmTxBufferRam.raw  /**< the pointer to PduR_BmTxBufferRam */
#define PduR_GetBmTxBufferRomOfPCConfig()                             PduR_BmTxBufferRom  /**< the pointer to PduR_BmTxBufferRom */
#define PduR_GetConfigIdOfPCConfig()                                  0U  /**< DefinitionRef: /MICROSAR/PduR/PduRRoutingTables/PduRConfigurationId */
#define PduR_GetCopyRxDataRxSmTransitionOfPCConfig()                  PduR_CopyRxDataRxSmTransition  /**< the pointer to PduR_CopyRxDataRxSmTransition */
#define PduR_GetCopyTxDataTxInstSmTransitionOfPCConfig()              PduR_CopyTxDataTxInstSmTransition  /**< the pointer to PduR_CopyTxDataTxInstSmTransition */
#define PduR_GetFinishReadFmSmTransitionOfPCConfig()                  PduR_FinishReadFmSmTransition  /**< the pointer to PduR_FinishReadFmSmTransition */
#define PduR_GetFinishReceptionRmSmTransitionOfPCConfig()             PduR_FinishReceptionRmSmTransition  /**< the pointer to PduR_FinishReceptionRmSmTransition */
#define PduR_GetFinishTransmissionRmSmTransitionOfPCConfig()          PduR_FinishTransmissionRmSmTransition  /**< the pointer to PduR_FinishTransmissionRmSmTransition */
#define PduR_GetFinishWriteFmSmTransitionOfPCConfig()                 PduR_FinishWriteFmSmTransition  /**< the pointer to PduR_FinishWriteFmSmTransition */
#define PduR_GetFmFifoElementRamOfPCConfig()                          PduR_FmFifoElementRam  /**< the pointer to PduR_FmFifoElementRam */
#define PduR_GetFmFifoInstanceRamOfPCConfig()                         PduR_FmFifoInstanceRam.raw  /**< the pointer to PduR_FmFifoInstanceRam */
#define PduR_GetFmFifoInstanceRomOfPCConfig()                         PduR_FmFifoInstanceRom  /**< the pointer to PduR_FmFifoInstanceRom */
#define PduR_GetFmFifoRamOfPCConfig()                                 PduR_FmFifoRam  /**< the pointer to PduR_FmFifoRam */
#define PduR_GetFmFifoRomOfPCConfig()                                 PduR_FmFifoRom  /**< the pointer to PduR_FmFifoRom */
#define PduR_GetIfRoutingStateTableOfPCConfig()                       PduR_IfRoutingStateTable  /**< the pointer to PduR_IfRoutingStateTable */
#define PduR_GetInitializedOfPCConfig()                               (&(PduR_Initialized))  /**< the pointer to PduR_Initialized */
#define PduR_GetMmRomOfPCConfig()                                     PduR_MmRom  /**< the pointer to PduR_MmRom */
#define PduR_GetRmBufferedTpPropertiesRamOfPCConfig()                 PduR_RmBufferedTpPropertiesRam.raw  /**< the pointer to PduR_RmBufferedTpPropertiesRam */
#define PduR_GetRmBufferedTpPropertiesRomOfPCConfig()                 PduR_RmBufferedTpPropertiesRom  /**< the pointer to PduR_RmBufferedTpPropertiesRom */
#define PduR_GetRmDestRomOfPCConfig()                                 PduR_RmDestRom  /**< the pointer to PduR_RmDestRom */
#define PduR_GetRmGDestRomOfPCConfig()                                PduR_RmGDestRom  /**< the pointer to PduR_RmGDestRom */
#define PduR_GetRmGDestTpTxStateRamOfPCConfig()                       PduR_RmGDestTpTxStateRam.raw  /**< the pointer to PduR_RmGDestTpTxStateRam */
#define PduR_GetRmSrcRomOfPCConfig()                                  PduR_RmSrcRom  /**< the pointer to PduR_RmSrcRom */
#define PduR_GetRmTransmitFctPtrOfPCConfig()                          PduR_RmTransmitFctPtr  /**< the pointer to PduR_RmTransmitFctPtr */
#define PduR_GetRxIf2DestOfPCConfig()                                 PduR_RxIf2Dest  /**< the pointer to PduR_RxIf2Dest */
#define PduR_GetRxTp2DestOfPCConfig()                                 PduR_RxTp2Dest  /**< the pointer to PduR_RxTp2Dest */
#define PduR_GetSizeOfBmTxBufferArrayRamOfPCConfig()                  128UL  /**< the number of accomplishable value elements in PduR_BmTxBufferArrayRam */
#define PduR_GetSizeOfBmTxBufferIndRomOfPCConfig()                    184U  /**< the number of accomplishable value elements in PduR_BmTxBufferIndRom */
#define PduR_GetSizeOfBmTxBufferInstanceRomOfPCConfig()               12U  /**< the number of accomplishable value elements in PduR_BmTxBufferInstanceRom */
#define PduR_GetSizeOfBmTxBufferRomOfPCConfig()                       4U  /**< the number of accomplishable value elements in PduR_BmTxBufferRom */
#define PduR_GetSizeOfCopyRxDataRxSmTransitionOfPCConfig()            3U  /**< the number of accomplishable value elements in PduR_CopyRxDataRxSmTransition */
#define PduR_GetSizeOfCopyTxDataTxInstSmTransitionOfPCConfig()        3U  /**< the number of accomplishable value elements in PduR_CopyTxDataTxInstSmTransition */
#define PduR_GetSizeOfFinishReadFmSmTransitionOfPCConfig()            8U  /**< the number of accomplishable value elements in PduR_FinishReadFmSmTransition */
#define PduR_GetSizeOfFinishReceptionRmSmTransitionOfPCConfig()       5U  /**< the number of accomplishable value elements in PduR_FinishReceptionRmSmTransition */
#define PduR_GetSizeOfFinishTransmissionRmSmTransitionOfPCConfig()    5U  /**< the number of accomplishable value elements in PduR_FinishTransmissionRmSmTransition */
#define PduR_GetSizeOfFinishWriteFmSmTransitionOfPCConfig()           8U  /**< the number of accomplishable value elements in PduR_FinishWriteFmSmTransition */
#define PduR_GetSizeOfFmFifoElementRamOfPCConfig()                    182U  /**< the number of accomplishable value elements in PduR_FmFifoElementRam */
#define PduR_GetSizeOfFmFifoInstanceRomOfPCConfig()                   50U  /**< the number of accomplishable value elements in PduR_FmFifoInstanceRom */
#define PduR_GetSizeOfFmFifoRomOfPCConfig()                           46U  /**< the number of accomplishable value elements in PduR_FmFifoRom */
#define PduR_GetSizeOfIfRoutingStateTableOfPCConfig()                 4U  /**< the number of accomplishable value elements in PduR_IfRoutingStateTable */
#define PduR_GetSizeOfMmRomOfPCConfig()                               9U  /**< the number of accomplishable value elements in PduR_MmRom */
#define PduR_GetSizeOfRmBufferedTpPropertiesRomOfPCConfig()           46U  /**< the number of accomplishable value elements in PduR_RmBufferedTpPropertiesRom */
#define PduR_GetSizeOfRmDestRomOfPCConfig()                           467U  /**< the number of accomplishable value elements in PduR_RmDestRom */
#define PduR_GetSizeOfRmGDestRomOfPCConfig()                          467U  /**< the number of accomplishable value elements in PduR_RmGDestRom */
#define PduR_GetSizeOfRmGDestTpTxStateRamOfPCConfig()                 50U  /**< the number of accomplishable value elements in PduR_RmGDestTpTxStateRam */
#define PduR_GetSizeOfRmSrcRomOfPCConfig()                            463U  /**< the number of accomplishable value elements in PduR_RmSrcRom */
#define PduR_GetSizeOfRmTransmitFctPtrOfPCConfig()                    2U  /**< the number of accomplishable value elements in PduR_RmTransmitFctPtr */
#define PduR_GetSizeOfRxIf2DestOfPCConfig()                           188U  /**< the number of accomplishable value elements in PduR_RxIf2Dest */
#define PduR_GetSizeOfRxTp2DestOfPCConfig()                           93U  /**< the number of accomplishable value elements in PduR_RxTp2Dest */
#define PduR_GetSizeOfStartOfReceptionRxSmTransitionOfPCConfig()      3U  /**< the number of accomplishable value elements in PduR_StartOfReceptionRxSmTransition */
#define PduR_GetSizeOfTpActivateNextFifoSmTransitionOfPCConfig()      8U  /**< the number of accomplishable value elements in PduR_TpActivateNextFifoSmTransition */
#define PduR_GetSizeOfTpActivateReadFifoSmTransitionOfPCConfig()      8U  /**< the number of accomplishable value elements in PduR_TpActivateReadFifoSmTransition */
#define PduR_GetSizeOfTpActivateWriteFifoSmTransitionOfPCConfig()     8U  /**< the number of accomplishable value elements in PduR_TpActivateWriteFifoSmTransition */
#define PduR_GetSizeOfTpCancelReceiveFifoSmTransitionOfPCConfig()     3U  /**< the number of accomplishable value elements in PduR_TpCancelReceiveFifoSmTransition */
#define PduR_GetSizeOfTpCancelTransmitTxInstSmTransitionOfPCConfig()  3U  /**< the number of accomplishable value elements in PduR_TpCancelTransmitTxInstSmTransition */
#define PduR_GetSizeOfTpCheckReady2TransmitRmSmTransitionOfPCConfig() 5U  /**< the number of accomplishable value elements in PduR_TpCheckReady2TransmitRmSmTransition */
#define PduR_GetSizeOfTpRxIndicationRxSmTransitionOfPCConfig()        3U  /**< the number of accomplishable value elements in PduR_TpRxIndicationRxSmTransition */
#define PduR_GetSizeOfTpTriggerTransmitTxInstSmTransitionOfPCConfig() 3U  /**< the number of accomplishable value elements in PduR_TpTriggerTransmitTxInstSmTransition */
#define PduR_GetSizeOfTpTxConfirmationTxSmTransitionOfPCConfig()      3U  /**< the number of accomplishable value elements in PduR_TpTxConfirmationTxSmTransition */
#define PduR_GetSizeOfTx2LoOfPCConfig()                               182U  /**< the number of accomplishable value elements in PduR_Tx2Lo */
#define PduR_GetSizeOfTxIf2UpOfPCConfig()                             139U  /**< the number of accomplishable value elements in PduR_TxIf2Up */
#define PduR_GetSizeOfTxTp2SrcOfPCConfig()                            98U  /**< the number of accomplishable value elements in PduR_TxTp2Src */
#define PduR_GetStartOfReceptionRxSmTransitionOfPCConfig()            PduR_StartOfReceptionRxSmTransition  /**< the pointer to PduR_StartOfReceptionRxSmTransition */
#define PduR_GetTpActivateNextFifoSmTransitionOfPCConfig()            PduR_TpActivateNextFifoSmTransition  /**< the pointer to PduR_TpActivateNextFifoSmTransition */
#define PduR_GetTpActivateReadFifoSmTransitionOfPCConfig()            PduR_TpActivateReadFifoSmTransition  /**< the pointer to PduR_TpActivateReadFifoSmTransition */
#define PduR_GetTpActivateWriteFifoSmTransitionOfPCConfig()           PduR_TpActivateWriteFifoSmTransition  /**< the pointer to PduR_TpActivateWriteFifoSmTransition */
#define PduR_GetTpCancelReceiveFifoSmTransitionOfPCConfig()           PduR_TpCancelReceiveFifoSmTransition  /**< the pointer to PduR_TpCancelReceiveFifoSmTransition */
#define PduR_GetTpCancelTransmitTxInstSmTransitionOfPCConfig()        PduR_TpCancelTransmitTxInstSmTransition  /**< the pointer to PduR_TpCancelTransmitTxInstSmTransition */
#define PduR_GetTpCheckReady2TransmitRmSmTransitionOfPCConfig()       PduR_TpCheckReady2TransmitRmSmTransition  /**< the pointer to PduR_TpCheckReady2TransmitRmSmTransition */
#define PduR_GetTpRxIndicationRxSmTransitionOfPCConfig()              PduR_TpRxIndicationRxSmTransition  /**< the pointer to PduR_TpRxIndicationRxSmTransition */
#define PduR_GetTpTriggerTransmitTxInstSmTransitionOfPCConfig()       PduR_TpTriggerTransmitTxInstSmTransition  /**< the pointer to PduR_TpTriggerTransmitTxInstSmTransition */
#define PduR_GetTpTxConfirmationTxSmTransitionOfPCConfig()            PduR_TpTxConfirmationTxSmTransition  /**< the pointer to PduR_TpTxConfirmationTxSmTransition */
#define PduR_GetTx2LoOfPCConfig()                                     PduR_Tx2Lo  /**< the pointer to PduR_Tx2Lo */
#define PduR_GetTxIf2UpOfPCConfig()                                   PduR_TxIf2Up  /**< the pointer to PduR_TxIf2Up */
#define PduR_GetTxTp2SrcOfPCConfig()                                  PduR_TxTp2Src  /**< the pointer to PduR_TxTp2Src */
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCGetDuplicatedRootDataMacros  PduR Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define PduR_GetSizeOfBmTxBufferInstanceRamOfPCConfig()               PduR_GetSizeOfBmTxBufferInstanceRomOfPCConfig()  /**< the number of accomplishable value elements in PduR_BmTxBufferInstanceRam */
#define PduR_GetSizeOfBmTxBufferRamOfPCConfig()                       PduR_GetSizeOfBmTxBufferRomOfPCConfig()  /**< the number of accomplishable value elements in PduR_BmTxBufferRam */
#define PduR_GetSizeOfFmFifoInstanceRamOfPCConfig()                   PduR_GetSizeOfFmFifoInstanceRomOfPCConfig()  /**< the number of accomplishable value elements in PduR_FmFifoInstanceRam */
#define PduR_GetSizeOfFmFifoRamOfPCConfig()                           PduR_GetSizeOfFmFifoRomOfPCConfig()  /**< the number of accomplishable value elements in PduR_FmFifoRam */
#define PduR_GetSizeOfRmBufferedTpPropertiesRamOfPCConfig()           PduR_GetSizeOfRmBufferedTpPropertiesRomOfPCConfig()  /**< the number of accomplishable value elements in PduR_RmBufferedTpPropertiesRam */
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCGetDataMacros  PduR Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define PduR_GetBmTxBufferArrayRam(Index)                             (PduR_GetBmTxBufferArrayRamOfPCConfig()[(Index)])
#define PduR_GetBmTxBufferRomIdxOfBmTxBufferIndRom(Index)             (PduR_GetBmTxBufferIndRomOfPCConfig()[(Index)].BmTxBufferRomIdxOfBmTxBufferIndRom)
#define PduR_GetBmTxBufferArrayRamReadIdxOfBmTxBufferInstanceRam(Index) (PduR_GetBmTxBufferInstanceRamOfPCConfig()[(Index)].BmTxBufferArrayRamReadIdxOfBmTxBufferInstanceRam)
#define PduR_GetBmTxBufferArrayRamWriteIdxOfBmTxBufferInstanceRam(Index) (PduR_GetBmTxBufferInstanceRamOfPCConfig()[(Index)].BmTxBufferArrayRamWriteIdxOfBmTxBufferInstanceRam)
#define PduR_GetPduRBufferStateOfBmTxBufferInstanceRam(Index)         (PduR_GetBmTxBufferInstanceRamOfPCConfig()[(Index)].PduRBufferStateOfBmTxBufferInstanceRam)
#define PduR_IsTxBufferUsedOfBmTxBufferInstanceRam(Index)             ((PduR_GetBmTxBufferInstanceRamOfPCConfig()[(Index)].TxBufferUsedOfBmTxBufferInstanceRam) != FALSE)
#define PduR_GetBmTxBufferRomIdxOfBmTxBufferInstanceRom(Index)        (PduR_GetBmTxBufferInstanceRomOfPCConfig()[(Index)].BmTxBufferRomIdxOfBmTxBufferInstanceRom)
#define PduR_GetBmTxBufferArrayRamInstanceStopIdxOfBmTxBufferRam(Index) (PduR_GetBmTxBufferRamOfPCConfig()[(Index)].BmTxBufferArrayRamInstanceStopIdxOfBmTxBufferRam)
#define PduR_GetBmTxBufferArrayRamReadIdxOfBmTxBufferRam(Index)       (PduR_GetBmTxBufferRamOfPCConfig()[(Index)].BmTxBufferArrayRamReadIdxOfBmTxBufferRam)
#define PduR_GetBmTxBufferArrayRamWriteIdxOfBmTxBufferRam(Index)      (PduR_GetBmTxBufferRamOfPCConfig()[(Index)].BmTxBufferArrayRamWriteIdxOfBmTxBufferRam)
#define PduR_GetPduRBufferStateOfBmTxBufferRam(Index)                 (PduR_GetBmTxBufferRamOfPCConfig()[(Index)].PduRBufferStateOfBmTxBufferRam)
#define PduR_GetRxLengthOfBmTxBufferRam(Index)                        (PduR_GetBmTxBufferRamOfPCConfig()[(Index)].RxLengthOfBmTxBufferRam)
#define PduR_GetTpBufMgrStateOfBmTxBufferRam(Index)                   (PduR_GetBmTxBufferRamOfPCConfig()[(Index)].TpBufMgrStateOfBmTxBufferRam)
#define PduR_GetBmTxBufferArrayRamLengthOfBmTxBufferRom(Index)        (PduR_GetBmTxBufferRomOfPCConfig()[(Index)].BmTxBufferArrayRamLengthOfBmTxBufferRom)
#define PduR_GetBmTxBufferArrayRamStartIdxOfBmTxBufferRom(Index)      (PduR_GetBmTxBufferRomOfPCConfig()[(Index)].BmTxBufferArrayRamStartIdxOfBmTxBufferRom)
#define PduR_GetBmTxBufferInstanceRomStartIdxOfBmTxBufferRom(Index)   (PduR_GetBmTxBufferRomOfPCConfig()[(Index)].BmTxBufferInstanceRomStartIdxOfBmTxBufferRom)
#define PduR_GetFctPtrOfCopyRxDataRxSmTransition(Index)               (PduR_GetCopyRxDataRxSmTransitionOfPCConfig()[(Index)].FctPtrOfCopyRxDataRxSmTransition)
#define PduR_GetFctPtrOfCopyTxDataTxInstSmTransition(Index)           (PduR_GetCopyTxDataTxInstSmTransitionOfPCConfig()[(Index)].FctPtrOfCopyTxDataTxInstSmTransition)
#define PduR_GetFctPtrOfFinishReadFmSmTransition(Index)               (PduR_GetFinishReadFmSmTransitionOfPCConfig()[(Index)].FctPtrOfFinishReadFmSmTransition)
#define PduR_GetFctPtrOfFinishReceptionRmSmTransition(Index)          (PduR_GetFinishReceptionRmSmTransitionOfPCConfig()[(Index)].FctPtrOfFinishReceptionRmSmTransition)
#define PduR_GetFctPtrOfFinishTransmissionRmSmTransition(Index)       (PduR_GetFinishTransmissionRmSmTransitionOfPCConfig()[(Index)].FctPtrOfFinishTransmissionRmSmTransition)
#define PduR_GetFctPtrOfFinishWriteFmSmTransition(Index)              (PduR_GetFinishWriteFmSmTransitionOfPCConfig()[(Index)].FctPtrOfFinishWriteFmSmTransition)
#define PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(Index)             (PduR_GetFmFifoElementRamOfPCConfig()[(Index)].BmTxBufferRomIdxOfFmFifoElementRam)
#define PduR_IsDedicatedTxBufferOfFmFifoElementRam(Index)             ((PduR_GetFmFifoElementRamOfPCConfig()[(Index)].DedicatedTxBufferOfFmFifoElementRam) != FALSE)
#define PduR_GetRmDestRomIdxOfFmFifoElementRam(Index)                 (PduR_GetFmFifoElementRamOfPCConfig()[(Index)].RmDestRomIdxOfFmFifoElementRam)
#define PduR_GetStateOfFmFifoElementRam(Index)                        (PduR_GetFmFifoElementRamOfPCConfig()[(Index)].StateOfFmFifoElementRam)
#define PduR_GetBmTxBufferInstanceRomIdxOfFmFifoInstanceRam(Index)    (PduR_GetFmFifoInstanceRamOfPCConfig()[(Index)].BmTxBufferInstanceRomIdxOfFmFifoInstanceRam)
#define PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(Index)                (PduR_GetFmFifoInstanceRomOfPCConfig()[(Index)].FmFifoRomIdxOfFmFifoInstanceRom)
#define PduR_GetFillLevelOfFmFifoRam(Index)                           (PduR_GetFmFifoRamOfPCConfig()[(Index)].FillLevelOfFmFifoRam)
#define PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(Index)             (PduR_GetFmFifoRamOfPCConfig()[(Index)].FmFifoElementRamReadIdxOfFmFifoRam)
#define PduR_GetFmFifoElementRamWriteIdxOfFmFifoRam(Index)            (PduR_GetFmFifoRamOfPCConfig()[(Index)].FmFifoElementRamWriteIdxOfFmFifoRam)
#define PduR_GetPendingConfirmationsOfFmFifoRam(Index)                (PduR_GetFmFifoRamOfPCConfig()[(Index)].PendingConfirmationsOfFmFifoRam)
#define PduR_GetTpTxSmStateOfFmFifoRam(Index)                         (PduR_GetFmFifoRamOfPCConfig()[(Index)].TpTxSmStateOfFmFifoRam)
#define PduR_GetFmFifoElementRamEndIdxOfFmFifoRom(Index)              (PduR_GetFmFifoRomOfPCConfig()[(Index)].FmFifoElementRamEndIdxOfFmFifoRom)
#define PduR_GetFmFifoElementRamStartIdxOfFmFifoRom(Index)            (PduR_GetFmFifoRomOfPCConfig()[(Index)].FmFifoElementRamStartIdxOfFmFifoRom)
#define PduR_GetNextState_For_Init_If_Routing_StateOfIfRoutingStateTable(Index) (PduR_GetIfRoutingStateTableOfPCConfig()[(Index)].NextState_For_Init_If_Routing_StateOfIfRoutingStateTable)
#define PduR_GetNextState_For_Wait_For_RxIndicationOfIfRoutingStateTable(Index) (PduR_GetIfRoutingStateTableOfPCConfig()[(Index)].NextState_For_Wait_For_RxIndicationOfIfRoutingStateTable)
#define PduR_GetNextState_For_Wait_For_TriggerTransmitOfIfRoutingStateTable(Index) (PduR_GetIfRoutingStateTableOfPCConfig()[(Index)].NextState_For_Wait_For_TriggerTransmitOfIfRoutingStateTable)
#define PduR_GetNextState_For_Wait_For_TxConfirmationOfIfRoutingStateTable(Index) (PduR_GetIfRoutingStateTableOfPCConfig()[(Index)].NextState_For_Wait_For_TxConfirmationOfIfRoutingStateTable)
#define PduR_IsInitialized()                                          (((*(PduR_GetInitializedOfPCConfig()))) != FALSE)
#define PduR_GetLoIfCancelTransmitFctPtrOfMmRom(Index)                (PduR_GetMmRomOfPCConfig()[(Index)].LoIfCancelTransmitFctPtrOfMmRom)
#define PduR_GetLoIfTransmitFctPtrOfMmRom(Index)                      (PduR_GetMmRomOfPCConfig()[(Index)].LoIfTransmitFctPtrOfMmRom)
#define PduR_GetLoTpCancelTransmitFctPtrOfMmRom(Index)                (PduR_GetMmRomOfPCConfig()[(Index)].LoTpCancelTransmitFctPtrOfMmRom)
#define PduR_GetLoTpTransmitFctPtrOfMmRom(Index)                      (PduR_GetMmRomOfPCConfig()[(Index)].LoTpTransmitFctPtrOfMmRom)
#define PduR_GetMaskedBitsOfMmRom(Index)                              (PduR_GetMmRomOfPCConfig()[(Index)].MaskedBitsOfMmRom)
#define PduR_GetUpIfRxIndicationFctPtrOfMmRom(Index)                  (PduR_GetMmRomOfPCConfig()[(Index)].UpIfRxIndicationFctPtrOfMmRom)
#define PduR_GetUpIfTriggerTransmitFctPtrOfMmRom(Index)               (PduR_GetMmRomOfPCConfig()[(Index)].UpIfTriggerTransmitFctPtrOfMmRom)
#define PduR_GetUpIfTxConfirmationFctPtrOfMmRom(Index)                (PduR_GetMmRomOfPCConfig()[(Index)].UpIfTxConfirmationFctPtrOfMmRom)
#define PduR_GetUpTpCopyRxDataFctPtrOfMmRom(Index)                    (PduR_GetMmRomOfPCConfig()[(Index)].UpTpCopyRxDataFctPtrOfMmRom)
#define PduR_GetUpTpCopyTxDataFctPtrOfMmRom(Index)                    (PduR_GetMmRomOfPCConfig()[(Index)].UpTpCopyTxDataFctPtrOfMmRom)
#define PduR_GetUpTpStartOfReceptionFctPtrOfMmRom(Index)              (PduR_GetMmRomOfPCConfig()[(Index)].UpTpStartOfReceptionFctPtrOfMmRom)
#define PduR_GetUpTpTpRxIndicationFctPtrOfMmRom(Index)                (PduR_GetMmRomOfPCConfig()[(Index)].UpTpTpRxIndicationFctPtrOfMmRom)
#define PduR_GetUpTpTpTxConfirmationFctPtrOfMmRom(Index)              (PduR_GetMmRomOfPCConfig()[(Index)].UpTpTpTxConfirmationFctPtrOfMmRom)
#define PduR_GetFmFifoElementRamIdxOfRmBufferedTpPropertiesRam(Index) (PduR_GetRmBufferedTpPropertiesRamOfPCConfig()[(Index)].FmFifoElementRamIdxOfRmBufferedTpPropertiesRam)
#define PduR_GetTpRxSmStateOfRmBufferedTpPropertiesRam(Index)         (PduR_GetRmBufferedTpPropertiesRamOfPCConfig()[(Index)].TpRxSmStateOfRmBufferedTpPropertiesRam)
#define PduR_GetBmTxBufferIndRomLengthOfRmBufferedTpPropertiesRom(Index) (PduR_GetRmBufferedTpPropertiesRomOfPCConfig()[(Index)].BmTxBufferIndRomLengthOfRmBufferedTpPropertiesRom)
#define PduR_GetBmTxBufferIndRomStartIdxOfRmBufferedTpPropertiesRom(Index) (PduR_GetRmBufferedTpPropertiesRomOfPCConfig()[(Index)].BmTxBufferIndRomStartIdxOfRmBufferedTpPropertiesRom)
#define PduR_GetFmFifoRomIdxOfRmBufferedTpPropertiesRom(Index)        (PduR_GetRmBufferedTpPropertiesRomOfPCConfig()[(Index)].FmFifoRomIdxOfRmBufferedTpPropertiesRom)
#define PduR_GetTpThresholdOfRmBufferedTpPropertiesRom(Index)         (PduR_GetRmBufferedTpPropertiesRomOfPCConfig()[(Index)].TpThresholdOfRmBufferedTpPropertiesRom)
#define PduR_GetDirectionOfRmDestRom(Index)                           (PduR_GetRmDestRomOfPCConfig()[(Index)].DirectionOfRmDestRom)
#define PduR_GetRmGDestRomIdxOfRmDestRom(Index)                       (PduR_GetRmDestRomOfPCConfig()[(Index)].RmGDestRomIdxOfRmDestRom)
#define PduR_GetRmSrcRomIdxOfRmDestRom(Index)                         (PduR_GetRmDestRomOfPCConfig()[(Index)].RmSrcRomIdxOfRmDestRom)
#define PduR_GetRoutingTypeOfRmDestRom(Index)                         (PduR_GetRmDestRomOfPCConfig()[(Index)].RoutingTypeOfRmDestRom)
#define PduR_GetDestHndOfRmGDestRom(Index)                            (PduR_GetRmGDestRomOfPCConfig()[(Index)].DestHndOfRmGDestRom)
#define PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(Index)               (PduR_GetRmGDestRomOfPCConfig()[(Index)].FmFifoInstanceRomIdxOfRmGDestRom)
#define PduR_GetMaskedBitsOfRmGDestRom(Index)                         (PduR_GetRmGDestRomOfPCConfig()[(Index)].MaskedBitsOfRmGDestRom)
#define PduR_GetMmRomIdxOfRmGDestRom(Index)                           (PduR_GetRmGDestRomOfPCConfig()[(Index)].MmRomIdxOfRmGDestRom)
#define PduR_GetPduRDestPduProcessingOfRmGDestRom(Index)              (PduR_GetRmGDestRomOfPCConfig()[(Index)].PduRDestPduProcessingOfRmGDestRom)
#define PduR_GetRmDestRomIdxOfRmGDestRom(Index)                       (PduR_GetRmGDestRomOfPCConfig()[(Index)].RmDestRomIdxOfRmGDestRom)
#define PduR_GetRmGDestTpTxStateRamIdxOfRmGDestRom(Index)             (PduR_GetRmGDestRomOfPCConfig()[(Index)].RmGDestTpTxStateRamIdxOfRmGDestRom)
#define PduR_GetTpTxInstSmStateOfRmGDestTpTxStateRam(Index)           (PduR_GetRmGDestTpTxStateRamOfPCConfig()[(Index)].TpTxInstSmStateOfRmGDestTpTxStateRam)
#define PduR_GetMaskedBitsOfRmSrcRom(Index)                           (PduR_GetRmSrcRomOfPCConfig()[(Index)].MaskedBitsOfRmSrcRom)
#define PduR_GetMmRomIdxOfRmSrcRom(Index)                             (PduR_GetRmSrcRomOfPCConfig()[(Index)].MmRomIdxOfRmSrcRom)
#define PduR_GetRmBufferedTpPropertiesRomIdxOfRmSrcRom(Index)         (PduR_GetRmSrcRomOfPCConfig()[(Index)].RmBufferedTpPropertiesRomIdxOfRmSrcRom)
#define PduR_GetRmDestRomEndIdxOfRmSrcRom(Index)                      (PduR_GetRmSrcRomOfPCConfig()[(Index)].RmDestRomEndIdxOfRmSrcRom)
#define PduR_GetRmDestRomStartIdxOfRmSrcRom(Index)                    (PduR_GetRmSrcRomOfPCConfig()[(Index)].RmDestRomStartIdxOfRmSrcRom)
#define PduR_GetSrcHndOfRmSrcRom(Index)                               (PduR_GetRmSrcRomOfPCConfig()[(Index)].SrcHndOfRmSrcRom)
#define PduR_GetRmTransmitFctPtr(Index)                               (PduR_GetRmTransmitFctPtrOfPCConfig()[(Index)])
#define PduR_GetRmSrcRomIdxOfRxIf2Dest(Index)                         (PduR_GetRxIf2DestOfPCConfig()[(Index)].RmSrcRomIdxOfRxIf2Dest)
#define PduR_GetRmSrcRomIdxOfRxTp2Dest(Index)                         (PduR_GetRxTp2DestOfPCConfig()[(Index)].RmSrcRomIdxOfRxTp2Dest)
#define PduR_GetFctPtrOfStartOfReceptionRxSmTransition(Index)         (PduR_GetStartOfReceptionRxSmTransitionOfPCConfig()[(Index)].FctPtrOfStartOfReceptionRxSmTransition)
#define PduR_GetFctPtrOfTpActivateNextFifoSmTransition(Index)         (PduR_GetTpActivateNextFifoSmTransitionOfPCConfig()[(Index)].FctPtrOfTpActivateNextFifoSmTransition)
#define PduR_GetFctPtrOfTpActivateReadFifoSmTransition(Index)         (PduR_GetTpActivateReadFifoSmTransitionOfPCConfig()[(Index)].FctPtrOfTpActivateReadFifoSmTransition)
#define PduR_GetFctPtrOfTpActivateWriteFifoSmTransition(Index)        (PduR_GetTpActivateWriteFifoSmTransitionOfPCConfig()[(Index)].FctPtrOfTpActivateWriteFifoSmTransition)
#define PduR_GetFctPtrOfTpCancelReceiveFifoSmTransition(Index)        (PduR_GetTpCancelReceiveFifoSmTransitionOfPCConfig()[(Index)].FctPtrOfTpCancelReceiveFifoSmTransition)
#define PduR_GetFctPtrOfTpCancelTransmitTxInstSmTransition(Index)     (PduR_GetTpCancelTransmitTxInstSmTransitionOfPCConfig()[(Index)].FctPtrOfTpCancelTransmitTxInstSmTransition)
#define PduR_GetFctPtrOfTpCheckReady2TransmitRmSmTransition(Index)    (PduR_GetTpCheckReady2TransmitRmSmTransitionOfPCConfig()[(Index)].FctPtrOfTpCheckReady2TransmitRmSmTransition)
#define PduR_GetFctPtrOfTpRxIndicationRxSmTransition(Index)           (PduR_GetTpRxIndicationRxSmTransitionOfPCConfig()[(Index)].FctPtrOfTpRxIndicationRxSmTransition)
#define PduR_GetFctPtrOfTpTriggerTransmitTxInstSmTransition(Index)    (PduR_GetTpTriggerTransmitTxInstSmTransitionOfPCConfig()[(Index)].FctPtrOfTpTriggerTransmitTxInstSmTransition)
#define PduR_GetFctPtrOfTpTxConfirmationTxSmTransition(Index)         (PduR_GetTpTxConfirmationTxSmTransitionOfPCConfig()[(Index)].FctPtrOfTpTxConfirmationTxSmTransition)
#define PduR_GetMaskedBitsOfTx2Lo(Index)                              (PduR_GetTx2LoOfPCConfig()[(Index)].MaskedBitsOfTx2Lo)
#define PduR_GetRmSrcRomIdxOfTx2Lo(Index)                             (PduR_GetTx2LoOfPCConfig()[(Index)].RmSrcRomIdxOfTx2Lo)
#define PduR_GetRmTransmitFctPtrIdxOfTx2Lo(Index)                     (PduR_GetTx2LoOfPCConfig()[(Index)].RmTransmitFctPtrIdxOfTx2Lo)
#define PduR_GetRmGDestRomIdxOfTxIf2Up(Index)                         (PduR_GetTxIf2UpOfPCConfig()[(Index)].RmGDestRomIdxOfTxIf2Up)
#define PduR_IsTxConfirmationUsedOfTxIf2Up(Index)                     ((PduR_GetTxIf2UpOfPCConfig()[(Index)].TxConfirmationUsedOfTxIf2Up) != FALSE)
#define PduR_GetRmGDestRomIdxOfTxTp2Src(Index)                        (PduR_GetTxTp2SrcOfPCConfig()[(Index)].RmGDestRomIdxOfTxTp2Src)
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCGetBitDataMacros  PduR Get Bit Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read bitcoded data elements.
  \{
*/ 
#define PduR_IsLoTpOfMmRom(Index)                                     (PDUR_LOTPOFMMROM_MASK == (PduR_GetMaskedBitsOfMmRom(Index) & PDUR_LOTPOFMMROM_MASK))  /**< Is the module a lower transport protocol module. */
#define PduR_IsUpIfOfMmRom(Index)                                     (PDUR_UPIFOFMMROM_MASK == (PduR_GetMaskedBitsOfMmRom(Index) & PDUR_UPIFOFMMROM_MASK))  /**< Is the module a upper communication interface module. */
#define PduR_IsUpTpOfMmRom(Index)                                     (PDUR_UPTPOFMMROM_MASK == (PduR_GetMaskedBitsOfMmRom(Index) & PDUR_UPTPOFMMROM_MASK))  /**< Is the module a upper transport protocol module. */
#define PduR_IsRmGDestTpTxStateRamUsedOfRmGDestRom(Index)             (PDUR_RMGDESTTPTXSTATERAMUSEDOFRMGDESTROM_MASK == (PduR_GetMaskedBitsOfRmGDestRom(Index) & PDUR_RMGDESTTPTXSTATERAMUSEDOFRMGDESTROM_MASK))  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to PduR_RmGDestTpTxStateRam */
#define PduR_IsTriggerTransmitSupportedOfRmSrcRom(Index)              (PDUR_TRIGGERTRANSMITSUPPORTEDOFRMSRCROM_MASK == (PduR_GetMaskedBitsOfRmSrcRom(Index) & PDUR_TRIGGERTRANSMITSUPPORTEDOFRMSRCROM_MASK))
#define PduR_IsTxConfirmationSupportedOfRmSrcRom(Index)               (PDUR_TXCONFIRMATIONSUPPORTEDOFRMSRCROM_MASK == (PduR_GetMaskedBitsOfRmSrcRom(Index) & PDUR_TXCONFIRMATIONSUPPORTEDOFRMSRCROM_MASK))
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCGetDeduplicatedDataMacros  PduR Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define PduR_GetBmTxBufferArrayRamEndIdxOfBmTxBufferRom(Index)        ((PduR_BmTxBufferArrayRamEndIdxOfBmTxBufferRomType)((PduR_GetBmTxBufferArrayRamStartIdxOfBmTxBufferRom(Index) + 32U)))  /**< the end index of the 1:n relation pointing to PduR_BmTxBufferArrayRam */
#define PduR_GetBmTxBufferInstanceRomEndIdxOfBmTxBufferRom(Index)     ((PduR_BmTxBufferInstanceRomEndIdxOfBmTxBufferRomType)((PduR_GetBmTxBufferInstanceRomStartIdxOfBmTxBufferRom(Index) + 3U)))  /**< the end index of the 1:n relation pointing to PduR_BmTxBufferInstanceRom */
#define PduR_GetConfigId()                                            PduR_GetConfigIdOfPCConfig()
#define PduR_GetFmFifoElementRamLengthOfFmFifoRom(Index)              ((PduR_FmFifoElementRamLengthOfFmFifoRomType)((PduR_GetFmFifoElementRamEndIdxOfFmFifoRom(Index) - PduR_GetFmFifoElementRamStartIdxOfFmFifoRom(Index))))  /**< the number of relations pointing to PduR_FmFifoElementRam */
#define PduR_IsIfCancelTransmitSupportedOfMmRom(Index)                (((boolean)(PduR_GetMaskedBitsOfMmRom(Index) == 0x30U)) != FALSE)  /**< Does the module support the Communication Interface CancelTransmit API. */
#define PduR_IsLoIfOfMmRom(Index)                                     (((boolean)(PduR_GetMaskedBitsOfMmRom(Index) >= 13)) != FALSE)  /**< Is the module a lower communication interface module. */
#define PduR_IsTpCancelTransmitSupportedOfMmRom(Index)                (((boolean)(PduR_GetMaskedBitsOfMmRom(Index) == 0x0CU)) != FALSE)  /**< Does the module support the transport protocol CancelTransmit API. */
#define PduR_GetBmTxBufferIndRomEndIdxOfRmBufferedTpPropertiesRom(Index) ((PduR_BmTxBufferIndRomEndIdxOfRmBufferedTpPropertiesRomType)((PduR_GetBmTxBufferIndRomStartIdxOfRmBufferedTpPropertiesRom(Index) + 4U)))  /**< the end index of the 1:n relation pointing to PduR_BmTxBufferIndRom */
#define PduR_IsFmFifoInstanceRomUsedOfRmGDestRom(Index)               PduR_IsRmGDestTpTxStateRamUsedOfRmGDestRom(Index)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to PduR_FmFifoInstanceRom */
#define PduR_IsRmDestRomUsedOfRmGDestRom(Index)                       (((boolean)(PduR_GetRmDestRomIdxOfRmGDestRom(Index) != PDUR_NO_RMDESTROMIDXOFRMGDESTROM)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to PduR_RmDestRom */
#define PduR_IsRmBufferedTpPropertiesRomUsedOfRmSrcRom(Index)         (((boolean)(PduR_GetRmBufferedTpPropertiesRomIdxOfRmSrcRom(Index) != PDUR_NO_RMBUFFEREDTPPROPERTIESROMIDXOFRMSRCROM)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to PduR_RmBufferedTpPropertiesRom */
#define PduR_GetRmDestRomLengthOfRmSrcRom(Index)                      ((PduR_RmDestRomLengthOfRmSrcRomType)((PduR_GetRmDestRomEndIdxOfRmSrcRom(Index) - PduR_GetRmDestRomStartIdxOfRmSrcRom(Index))))  /**< the number of relations pointing to PduR_RmDestRom */
#define PduR_IsRmSrcRomUsedOfRxTp2Dest(Index)                         (((boolean)(PduR_GetRmSrcRomIdxOfRxTp2Dest(Index) != PDUR_NO_RMSRCROMIDXOFRXTP2DEST)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to PduR_RmSrcRom */
#define PduR_GetSizeOfBmTxBufferArrayRam()                            PduR_GetSizeOfBmTxBufferArrayRamOfPCConfig()
#define PduR_GetSizeOfBmTxBufferIndRom()                              PduR_GetSizeOfBmTxBufferIndRomOfPCConfig()
#define PduR_GetSizeOfBmTxBufferInstanceRam()                         PduR_GetSizeOfBmTxBufferInstanceRamOfPCConfig()
#define PduR_GetSizeOfBmTxBufferInstanceRom()                         PduR_GetSizeOfBmTxBufferInstanceRomOfPCConfig()
#define PduR_GetSizeOfBmTxBufferRam()                                 PduR_GetSizeOfBmTxBufferRamOfPCConfig()
#define PduR_GetSizeOfBmTxBufferRom()                                 PduR_GetSizeOfBmTxBufferRomOfPCConfig()
#define PduR_GetSizeOfCopyRxDataRxSmTransition()                      PduR_GetSizeOfCopyRxDataRxSmTransitionOfPCConfig()
#define PduR_GetSizeOfCopyTxDataTxInstSmTransition()                  PduR_GetSizeOfCopyTxDataTxInstSmTransitionOfPCConfig()
#define PduR_GetSizeOfFinishReadFmSmTransition()                      PduR_GetSizeOfFinishReadFmSmTransitionOfPCConfig()
#define PduR_GetSizeOfFinishReceptionRmSmTransition()                 PduR_GetSizeOfFinishReceptionRmSmTransitionOfPCConfig()
#define PduR_GetSizeOfFinishTransmissionRmSmTransition()              PduR_GetSizeOfFinishTransmissionRmSmTransitionOfPCConfig()
#define PduR_GetSizeOfFinishWriteFmSmTransition()                     PduR_GetSizeOfFinishWriteFmSmTransitionOfPCConfig()
#define PduR_GetSizeOfFmFifoElementRam()                              PduR_GetSizeOfFmFifoElementRamOfPCConfig()
#define PduR_GetSizeOfFmFifoInstanceRam()                             PduR_GetSizeOfFmFifoInstanceRamOfPCConfig()
#define PduR_GetSizeOfFmFifoInstanceRom()                             PduR_GetSizeOfFmFifoInstanceRomOfPCConfig()
#define PduR_GetSizeOfFmFifoRam()                                     PduR_GetSizeOfFmFifoRamOfPCConfig()
#define PduR_GetSizeOfFmFifoRom()                                     PduR_GetSizeOfFmFifoRomOfPCConfig()
#define PduR_GetSizeOfIfRoutingStateTable()                           PduR_GetSizeOfIfRoutingStateTableOfPCConfig()
#define PduR_GetSizeOfMmRom()                                         PduR_GetSizeOfMmRomOfPCConfig()
#define PduR_GetSizeOfRmBufferedTpPropertiesRam()                     PduR_GetSizeOfRmBufferedTpPropertiesRamOfPCConfig()
#define PduR_GetSizeOfRmBufferedTpPropertiesRom()                     PduR_GetSizeOfRmBufferedTpPropertiesRomOfPCConfig()
#define PduR_GetSizeOfRmDestRom()                                     PduR_GetSizeOfRmDestRomOfPCConfig()
#define PduR_GetSizeOfRmGDestRom()                                    PduR_GetSizeOfRmGDestRomOfPCConfig()
#define PduR_GetSizeOfRmGDestTpTxStateRam()                           PduR_GetSizeOfRmGDestTpTxStateRamOfPCConfig()
#define PduR_GetSizeOfRmSrcRom()                                      PduR_GetSizeOfRmSrcRomOfPCConfig()
#define PduR_GetSizeOfRmTransmitFctPtr()                              PduR_GetSizeOfRmTransmitFctPtrOfPCConfig()
#define PduR_GetSizeOfRxIf2Dest()                                     PduR_GetSizeOfRxIf2DestOfPCConfig()
#define PduR_GetSizeOfRxTp2Dest()                                     PduR_GetSizeOfRxTp2DestOfPCConfig()
#define PduR_GetSizeOfStartOfReceptionRxSmTransition()                PduR_GetSizeOfStartOfReceptionRxSmTransitionOfPCConfig()
#define PduR_GetSizeOfTpActivateNextFifoSmTransition()                PduR_GetSizeOfTpActivateNextFifoSmTransitionOfPCConfig()
#define PduR_GetSizeOfTpActivateReadFifoSmTransition()                PduR_GetSizeOfTpActivateReadFifoSmTransitionOfPCConfig()
#define PduR_GetSizeOfTpActivateWriteFifoSmTransition()               PduR_GetSizeOfTpActivateWriteFifoSmTransitionOfPCConfig()
#define PduR_GetSizeOfTpCancelReceiveFifoSmTransition()               PduR_GetSizeOfTpCancelReceiveFifoSmTransitionOfPCConfig()
#define PduR_GetSizeOfTpCancelTransmitTxInstSmTransition()            PduR_GetSizeOfTpCancelTransmitTxInstSmTransitionOfPCConfig()
#define PduR_GetSizeOfTpCheckReady2TransmitRmSmTransition()           PduR_GetSizeOfTpCheckReady2TransmitRmSmTransitionOfPCConfig()
#define PduR_GetSizeOfTpRxIndicationRxSmTransition()                  PduR_GetSizeOfTpRxIndicationRxSmTransitionOfPCConfig()
#define PduR_GetSizeOfTpTriggerTransmitTxInstSmTransition()           PduR_GetSizeOfTpTriggerTransmitTxInstSmTransitionOfPCConfig()
#define PduR_GetSizeOfTpTxConfirmationTxSmTransition()                PduR_GetSizeOfTpTxConfirmationTxSmTransitionOfPCConfig()
#define PduR_GetSizeOfTx2Lo()                                         PduR_GetSizeOfTx2LoOfPCConfig()
#define PduR_GetSizeOfTxIf2Up()                                       PduR_GetSizeOfTxIf2UpOfPCConfig()
#define PduR_GetSizeOfTxTp2Src()                                      PduR_GetSizeOfTxTp2SrcOfPCConfig()
#define PduR_IsCancelTransmitUsedOfTx2Lo(Index)                       (((boolean)(PduR_GetMaskedBitsOfTx2Lo(Index) == 0x03U)) != FALSE)  /**< TRUE if the routing can use the CancelTransmit API */
#define PduR_IsRmSrcRomUsedOfTx2Lo(Index)                             (((boolean)(PduR_GetRmSrcRomIdxOfTx2Lo(Index) != PDUR_NO_RMSRCROMIDXOFTX2LO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to PduR_RmSrcRom */
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCSetDataMacros  PduR Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define PduR_SetBmTxBufferArrayRam(Index, Value)                      PduR_GetBmTxBufferArrayRamOfPCConfig()[(Index)] = (Value)
#define PduR_SetBmTxBufferArrayRamReadIdxOfBmTxBufferInstanceRam(Index, Value) PduR_GetBmTxBufferInstanceRamOfPCConfig()[(Index)].BmTxBufferArrayRamReadIdxOfBmTxBufferInstanceRam = (Value)
#define PduR_SetBmTxBufferArrayRamWriteIdxOfBmTxBufferInstanceRam(Index, Value) PduR_GetBmTxBufferInstanceRamOfPCConfig()[(Index)].BmTxBufferArrayRamWriteIdxOfBmTxBufferInstanceRam = (Value)
#define PduR_SetPduRBufferStateOfBmTxBufferInstanceRam(Index, Value)  PduR_GetBmTxBufferInstanceRamOfPCConfig()[(Index)].PduRBufferStateOfBmTxBufferInstanceRam = (Value)
#define PduR_SetTxBufferUsedOfBmTxBufferInstanceRam(Index, Value)     PduR_GetBmTxBufferInstanceRamOfPCConfig()[(Index)].TxBufferUsedOfBmTxBufferInstanceRam = (Value)
#define PduR_SetBmTxBufferArrayRamInstanceStopIdxOfBmTxBufferRam(Index, Value) PduR_GetBmTxBufferRamOfPCConfig()[(Index)].BmTxBufferArrayRamInstanceStopIdxOfBmTxBufferRam = (Value)
#define PduR_SetBmTxBufferArrayRamReadIdxOfBmTxBufferRam(Index, Value) PduR_GetBmTxBufferRamOfPCConfig()[(Index)].BmTxBufferArrayRamReadIdxOfBmTxBufferRam = (Value)
#define PduR_SetBmTxBufferArrayRamWriteIdxOfBmTxBufferRam(Index, Value) PduR_GetBmTxBufferRamOfPCConfig()[(Index)].BmTxBufferArrayRamWriteIdxOfBmTxBufferRam = (Value)
#define PduR_SetPduRBufferStateOfBmTxBufferRam(Index, Value)          PduR_GetBmTxBufferRamOfPCConfig()[(Index)].PduRBufferStateOfBmTxBufferRam = (Value)
#define PduR_SetRxLengthOfBmTxBufferRam(Index, Value)                 PduR_GetBmTxBufferRamOfPCConfig()[(Index)].RxLengthOfBmTxBufferRam = (Value)
#define PduR_SetTpBufMgrStateOfBmTxBufferRam(Index, Value)            PduR_GetBmTxBufferRamOfPCConfig()[(Index)].TpBufMgrStateOfBmTxBufferRam = (Value)
#define PduR_SetBmTxBufferRomIdxOfFmFifoElementRam(Index, Value)      PduR_GetFmFifoElementRamOfPCConfig()[(Index)].BmTxBufferRomIdxOfFmFifoElementRam = (Value)
#define PduR_SetDedicatedTxBufferOfFmFifoElementRam(Index, Value)     PduR_GetFmFifoElementRamOfPCConfig()[(Index)].DedicatedTxBufferOfFmFifoElementRam = (Value)
#define PduR_SetRmDestRomIdxOfFmFifoElementRam(Index, Value)          PduR_GetFmFifoElementRamOfPCConfig()[(Index)].RmDestRomIdxOfFmFifoElementRam = (Value)
#define PduR_SetStateOfFmFifoElementRam(Index, Value)                 PduR_GetFmFifoElementRamOfPCConfig()[(Index)].StateOfFmFifoElementRam = (Value)
#define PduR_SetBmTxBufferInstanceRomIdxOfFmFifoInstanceRam(Index, Value) PduR_GetFmFifoInstanceRamOfPCConfig()[(Index)].BmTxBufferInstanceRomIdxOfFmFifoInstanceRam = (Value)
#define PduR_SetFillLevelOfFmFifoRam(Index, Value)                    PduR_GetFmFifoRamOfPCConfig()[(Index)].FillLevelOfFmFifoRam = (Value)
#define PduR_SetFmFifoElementRamReadIdxOfFmFifoRam(Index, Value)      PduR_GetFmFifoRamOfPCConfig()[(Index)].FmFifoElementRamReadIdxOfFmFifoRam = (Value)
#define PduR_SetFmFifoElementRamWriteIdxOfFmFifoRam(Index, Value)     PduR_GetFmFifoRamOfPCConfig()[(Index)].FmFifoElementRamWriteIdxOfFmFifoRam = (Value)
#define PduR_SetPendingConfirmationsOfFmFifoRam(Index, Value)         PduR_GetFmFifoRamOfPCConfig()[(Index)].PendingConfirmationsOfFmFifoRam = (Value)
#define PduR_SetTpTxSmStateOfFmFifoRam(Index, Value)                  PduR_GetFmFifoRamOfPCConfig()[(Index)].TpTxSmStateOfFmFifoRam = (Value)
#define PduR_SetInitialized(Value)                                    (*(PduR_GetInitializedOfPCConfig())) = (Value)
#define PduR_SetFmFifoElementRamIdxOfRmBufferedTpPropertiesRam(Index, Value) PduR_GetRmBufferedTpPropertiesRamOfPCConfig()[(Index)].FmFifoElementRamIdxOfRmBufferedTpPropertiesRam = (Value)
#define PduR_SetTpRxSmStateOfRmBufferedTpPropertiesRam(Index, Value)  PduR_GetRmBufferedTpPropertiesRamOfPCConfig()[(Index)].TpRxSmStateOfRmBufferedTpPropertiesRam = (Value)
#define PduR_SetTpTxInstSmStateOfRmGDestTpTxStateRam(Index, Value)    PduR_GetRmGDestTpTxStateRamOfPCConfig()[(Index)].TpTxInstSmStateOfRmGDestTpTxStateRam = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCGetAddressOfDataMacros  PduR Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define PduR_GetAddrBmTxBufferArrayRam(Index)                         &PduR_GetBmTxBufferArrayRam(Index)
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCHasMacros  PduR Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define PduR_HasBmTxBufferArrayRam()                                  (TRUE != FALSE)
#define PduR_HasBmTxBufferIndRom()                                    (TRUE != FALSE)
#define PduR_HasBmTxBufferRomIdxOfBmTxBufferIndRom()                  (TRUE != FALSE)
#define PduR_HasBmTxBufferInstanceRam()                               (TRUE != FALSE)
#define PduR_HasBmTxBufferArrayRamReadIdxOfBmTxBufferInstanceRam()    (TRUE != FALSE)
#define PduR_HasBmTxBufferArrayRamWriteIdxOfBmTxBufferInstanceRam()   (TRUE != FALSE)
#define PduR_HasPduRBufferStateOfBmTxBufferInstanceRam()              (TRUE != FALSE)
#define PduR_HasTxBufferUsedOfBmTxBufferInstanceRam()                 (TRUE != FALSE)
#define PduR_HasBmTxBufferInstanceRom()                               (TRUE != FALSE)
#define PduR_HasBmTxBufferRomIdxOfBmTxBufferInstanceRom()             (TRUE != FALSE)
#define PduR_HasBmTxBufferRam()                                       (TRUE != FALSE)
#define PduR_HasBmTxBufferArrayRamInstanceStopIdxOfBmTxBufferRam()    (TRUE != FALSE)
#define PduR_HasBmTxBufferArrayRamReadIdxOfBmTxBufferRam()            (TRUE != FALSE)
#define PduR_HasBmTxBufferArrayRamWriteIdxOfBmTxBufferRam()           (TRUE != FALSE)
#define PduR_HasPduRBufferStateOfBmTxBufferRam()                      (TRUE != FALSE)
#define PduR_HasRxLengthOfBmTxBufferRam()                             (TRUE != FALSE)
#define PduR_HasTpBufMgrStateOfBmTxBufferRam()                        (TRUE != FALSE)
#define PduR_HasBmTxBufferRom()                                       (TRUE != FALSE)
#define PduR_HasBmTxBufferArrayRamEndIdxOfBmTxBufferRom()             (TRUE != FALSE)
#define PduR_HasBmTxBufferArrayRamLengthOfBmTxBufferRom()             (TRUE != FALSE)
#define PduR_HasBmTxBufferArrayRamStartIdxOfBmTxBufferRom()           (TRUE != FALSE)
#define PduR_HasBmTxBufferInstanceRomEndIdxOfBmTxBufferRom()          (TRUE != FALSE)
#define PduR_HasBmTxBufferInstanceRomStartIdxOfBmTxBufferRom()        (TRUE != FALSE)
#define PduR_HasConfigId()                                            (TRUE != FALSE)
#define PduR_HasCopyRxDataRxSmTransition()                            (TRUE != FALSE)
#define PduR_HasFctPtrOfCopyRxDataRxSmTransition()                    (TRUE != FALSE)
#define PduR_HasCopyTxDataTxInstSmTransition()                        (TRUE != FALSE)
#define PduR_HasFctPtrOfCopyTxDataTxInstSmTransition()                (TRUE != FALSE)
#define PduR_HasFinishReadFmSmTransition()                            (TRUE != FALSE)
#define PduR_HasFctPtrOfFinishReadFmSmTransition()                    (TRUE != FALSE)
#define PduR_HasFinishReceptionRmSmTransition()                       (TRUE != FALSE)
#define PduR_HasFctPtrOfFinishReceptionRmSmTransition()               (TRUE != FALSE)
#define PduR_HasFinishTransmissionRmSmTransition()                    (TRUE != FALSE)
#define PduR_HasFctPtrOfFinishTransmissionRmSmTransition()            (TRUE != FALSE)
#define PduR_HasFinishWriteFmSmTransition()                           (TRUE != FALSE)
#define PduR_HasFctPtrOfFinishWriteFmSmTransition()                   (TRUE != FALSE)
#define PduR_HasFmFifoElementRam()                                    (TRUE != FALSE)
#define PduR_HasBmTxBufferRomIdxOfFmFifoElementRam()                  (TRUE != FALSE)
#define PduR_HasDedicatedTxBufferOfFmFifoElementRam()                 (TRUE != FALSE)
#define PduR_HasRmDestRomIdxOfFmFifoElementRam()                      (TRUE != FALSE)
#define PduR_HasStateOfFmFifoElementRam()                             (TRUE != FALSE)
#define PduR_HasFmFifoInstanceRam()                                   (TRUE != FALSE)
#define PduR_HasBmTxBufferInstanceRomIdxOfFmFifoInstanceRam()         (TRUE != FALSE)
#define PduR_HasFmFifoInstanceRom()                                   (TRUE != FALSE)
#define PduR_HasFmFifoRomIdxOfFmFifoInstanceRom()                     (TRUE != FALSE)
#define PduR_HasFmFifoRam()                                           (TRUE != FALSE)
#define PduR_HasFillLevelOfFmFifoRam()                                (TRUE != FALSE)
#define PduR_HasFmFifoElementRamReadIdxOfFmFifoRam()                  (TRUE != FALSE)
#define PduR_HasFmFifoElementRamWriteIdxOfFmFifoRam()                 (TRUE != FALSE)
#define PduR_HasPendingConfirmationsOfFmFifoRam()                     (TRUE != FALSE)
#define PduR_HasTpTxSmStateOfFmFifoRam()                              (TRUE != FALSE)
#define PduR_HasFmFifoRom()                                           (TRUE != FALSE)
#define PduR_HasFmFifoElementRamEndIdxOfFmFifoRom()                   (TRUE != FALSE)
#define PduR_HasFmFifoElementRamLengthOfFmFifoRom()                   (TRUE != FALSE)
#define PduR_HasFmFifoElementRamStartIdxOfFmFifoRom()                 (TRUE != FALSE)
#define PduR_HasIfRoutingStateTable()                                 (TRUE != FALSE)
#define PduR_HasNextState_For_Init_If_Routing_StateOfIfRoutingStateTable() (TRUE != FALSE)
#define PduR_HasNextState_For_Wait_For_RxIndicationOfIfRoutingStateTable() (TRUE != FALSE)
#define PduR_HasNextState_For_Wait_For_TriggerTransmitOfIfRoutingStateTable() (TRUE != FALSE)
#define PduR_HasNextState_For_Wait_For_TxConfirmationOfIfRoutingStateTable() (TRUE != FALSE)
#define PduR_HasInitialized()                                         (TRUE != FALSE)
#define PduR_HasMmRom()                                               (TRUE != FALSE)
#define PduR_HasIfCancelTransmitSupportedOfMmRom()                    (TRUE != FALSE)
#define PduR_HasLoIfCancelTransmitFctPtrOfMmRom()                     (TRUE != FALSE)
#define PduR_HasLoIfOfMmRom()                                         (TRUE != FALSE)
#define PduR_HasLoIfTransmitFctPtrOfMmRom()                           (TRUE != FALSE)
#define PduR_HasLoTpCancelTransmitFctPtrOfMmRom()                     (TRUE != FALSE)
#define PduR_HasLoTpOfMmRom()                                         (TRUE != FALSE)
#define PduR_HasLoTpTransmitFctPtrOfMmRom()                           (TRUE != FALSE)
#define PduR_HasMaskedBitsOfMmRom()                                   (TRUE != FALSE)
#define PduR_HasTpCancelTransmitSupportedOfMmRom()                    (TRUE != FALSE)
#define PduR_HasUpIfOfMmRom()                                         (TRUE != FALSE)
#define PduR_HasUpIfRxIndicationFctPtrOfMmRom()                       (TRUE != FALSE)
#define PduR_HasUpIfTriggerTransmitFctPtrOfMmRom()                    (TRUE != FALSE)
#define PduR_HasUpIfTxConfirmationFctPtrOfMmRom()                     (TRUE != FALSE)
#define PduR_HasUpTpCopyRxDataFctPtrOfMmRom()                         (TRUE != FALSE)
#define PduR_HasUpTpCopyTxDataFctPtrOfMmRom()                         (TRUE != FALSE)
#define PduR_HasUpTpOfMmRom()                                         (TRUE != FALSE)
#define PduR_HasUpTpStartOfReceptionFctPtrOfMmRom()                   (TRUE != FALSE)
#define PduR_HasUpTpTpRxIndicationFctPtrOfMmRom()                     (TRUE != FALSE)
#define PduR_HasUpTpTpTxConfirmationFctPtrOfMmRom()                   (TRUE != FALSE)
#define PduR_HasRmBufferedTpPropertiesRam()                           (TRUE != FALSE)
#define PduR_HasFmFifoElementRamIdxOfRmBufferedTpPropertiesRam()      (TRUE != FALSE)
#define PduR_HasTpRxSmStateOfRmBufferedTpPropertiesRam()              (TRUE != FALSE)
#define PduR_HasRmBufferedTpPropertiesRom()                           (TRUE != FALSE)
#define PduR_HasBmTxBufferIndRomEndIdxOfRmBufferedTpPropertiesRom()   (TRUE != FALSE)
#define PduR_HasBmTxBufferIndRomLengthOfRmBufferedTpPropertiesRom()   (TRUE != FALSE)
#define PduR_HasBmTxBufferIndRomStartIdxOfRmBufferedTpPropertiesRom() (TRUE != FALSE)
#define PduR_HasFmFifoRomIdxOfRmBufferedTpPropertiesRom()             (TRUE != FALSE)
#define PduR_HasTpThresholdOfRmBufferedTpPropertiesRom()              (TRUE != FALSE)
#define PduR_HasRmDestRom()                                           (TRUE != FALSE)
#define PduR_HasDirectionOfRmDestRom()                                (TRUE != FALSE)
#define PduR_HasRmGDestRomIdxOfRmDestRom()                            (TRUE != FALSE)
#define PduR_HasRmSrcRomIdxOfRmDestRom()                              (TRUE != FALSE)
#define PduR_HasRoutingTypeOfRmDestRom()                              (TRUE != FALSE)
#define PduR_HasRmGDestRom()                                          (TRUE != FALSE)
#define PduR_HasDestHndOfRmGDestRom()                                 (TRUE != FALSE)
#define PduR_HasFmFifoInstanceRomIdxOfRmGDestRom()                    (TRUE != FALSE)
#define PduR_HasFmFifoInstanceRomUsedOfRmGDestRom()                   (TRUE != FALSE)
#define PduR_HasMaskedBitsOfRmGDestRom()                              (TRUE != FALSE)
#define PduR_HasMmRomIdxOfRmGDestRom()                                (TRUE != FALSE)
#define PduR_HasPduRDestPduProcessingOfRmGDestRom()                   (TRUE != FALSE)
#define PduR_HasRmDestRomIdxOfRmGDestRom()                            (TRUE != FALSE)
#define PduR_HasRmDestRomUsedOfRmGDestRom()                           (TRUE != FALSE)
#define PduR_HasRmGDestTpTxStateRamIdxOfRmGDestRom()                  (TRUE != FALSE)
#define PduR_HasRmGDestTpTxStateRamUsedOfRmGDestRom()                 (TRUE != FALSE)
#define PduR_HasRmGDestTpTxStateRam()                                 (TRUE != FALSE)
#define PduR_HasTpTxInstSmStateOfRmGDestTpTxStateRam()                (TRUE != FALSE)
#define PduR_HasRmSrcRom()                                            (TRUE != FALSE)
#define PduR_HasMaskedBitsOfRmSrcRom()                                (TRUE != FALSE)
#define PduR_HasMmRomIdxOfRmSrcRom()                                  (TRUE != FALSE)
#define PduR_HasRmBufferedTpPropertiesRomIdxOfRmSrcRom()              (TRUE != FALSE)
#define PduR_HasRmBufferedTpPropertiesRomUsedOfRmSrcRom()             (TRUE != FALSE)
#define PduR_HasRmDestRomEndIdxOfRmSrcRom()                           (TRUE != FALSE)
#define PduR_HasRmDestRomLengthOfRmSrcRom()                           (TRUE != FALSE)
#define PduR_HasRmDestRomStartIdxOfRmSrcRom()                         (TRUE != FALSE)
#define PduR_HasSrcHndOfRmSrcRom()                                    (TRUE != FALSE)
#define PduR_HasTriggerTransmitSupportedOfRmSrcRom()                  (TRUE != FALSE)
#define PduR_HasTxConfirmationSupportedOfRmSrcRom()                   (TRUE != FALSE)
#define PduR_HasRmTransmitFctPtr()                                    (TRUE != FALSE)
#define PduR_HasRxIf2Dest()                                           (TRUE != FALSE)
#define PduR_HasRmSrcRomIdxOfRxIf2Dest()                              (TRUE != FALSE)
#define PduR_HasRxTp2Dest()                                           (TRUE != FALSE)
#define PduR_HasRmSrcRomIdxOfRxTp2Dest()                              (TRUE != FALSE)
#define PduR_HasRmSrcRomUsedOfRxTp2Dest()                             (TRUE != FALSE)
#define PduR_HasSizeOfBmTxBufferArrayRam()                            (TRUE != FALSE)
#define PduR_HasSizeOfBmTxBufferIndRom()                              (TRUE != FALSE)
#define PduR_HasSizeOfBmTxBufferInstanceRam()                         (TRUE != FALSE)
#define PduR_HasSizeOfBmTxBufferInstanceRom()                         (TRUE != FALSE)
#define PduR_HasSizeOfBmTxBufferRam()                                 (TRUE != FALSE)
#define PduR_HasSizeOfBmTxBufferRom()                                 (TRUE != FALSE)
#define PduR_HasSizeOfCopyRxDataRxSmTransition()                      (TRUE != FALSE)
#define PduR_HasSizeOfCopyTxDataTxInstSmTransition()                  (TRUE != FALSE)
#define PduR_HasSizeOfFinishReadFmSmTransition()                      (TRUE != FALSE)
#define PduR_HasSizeOfFinishReceptionRmSmTransition()                 (TRUE != FALSE)
#define PduR_HasSizeOfFinishTransmissionRmSmTransition()              (TRUE != FALSE)
#define PduR_HasSizeOfFinishWriteFmSmTransition()                     (TRUE != FALSE)
#define PduR_HasSizeOfFmFifoElementRam()                              (TRUE != FALSE)
#define PduR_HasSizeOfFmFifoInstanceRam()                             (TRUE != FALSE)
#define PduR_HasSizeOfFmFifoInstanceRom()                             (TRUE != FALSE)
#define PduR_HasSizeOfFmFifoRam()                                     (TRUE != FALSE)
#define PduR_HasSizeOfFmFifoRom()                                     (TRUE != FALSE)
#define PduR_HasSizeOfIfRoutingStateTable()                           (TRUE != FALSE)
#define PduR_HasSizeOfMmRom()                                         (TRUE != FALSE)
#define PduR_HasSizeOfRmBufferedTpPropertiesRam()                     (TRUE != FALSE)
#define PduR_HasSizeOfRmBufferedTpPropertiesRom()                     (TRUE != FALSE)
#define PduR_HasSizeOfRmDestRom()                                     (TRUE != FALSE)
#define PduR_HasSizeOfRmGDestRom()                                    (TRUE != FALSE)
#define PduR_HasSizeOfRmGDestTpTxStateRam()                           (TRUE != FALSE)
#define PduR_HasSizeOfRmSrcRom()                                      (TRUE != FALSE)
#define PduR_HasSizeOfRmTransmitFctPtr()                              (TRUE != FALSE)
#define PduR_HasSizeOfRxIf2Dest()                                     (TRUE != FALSE)
#define PduR_HasSizeOfRxTp2Dest()                                     (TRUE != FALSE)
#define PduR_HasSizeOfStartOfReceptionRxSmTransition()                (TRUE != FALSE)
#define PduR_HasSizeOfTpActivateNextFifoSmTransition()                (TRUE != FALSE)
#define PduR_HasSizeOfTpActivateReadFifoSmTransition()                (TRUE != FALSE)
#define PduR_HasSizeOfTpActivateWriteFifoSmTransition()               (TRUE != FALSE)
#define PduR_HasSizeOfTpCancelReceiveFifoSmTransition()               (TRUE != FALSE)
#define PduR_HasSizeOfTpCancelTransmitTxInstSmTransition()            (TRUE != FALSE)
#define PduR_HasSizeOfTpCheckReady2TransmitRmSmTransition()           (TRUE != FALSE)
#define PduR_HasSizeOfTpRxIndicationRxSmTransition()                  (TRUE != FALSE)
#define PduR_HasSizeOfTpTriggerTransmitTxInstSmTransition()           (TRUE != FALSE)
#define PduR_HasSizeOfTpTxConfirmationTxSmTransition()                (TRUE != FALSE)
#define PduR_HasSizeOfTx2Lo()                                         (TRUE != FALSE)
#define PduR_HasSizeOfTxIf2Up()                                       (TRUE != FALSE)
#define PduR_HasSizeOfTxTp2Src()                                      (TRUE != FALSE)
#define PduR_HasStartOfReceptionRxSmTransition()                      (TRUE != FALSE)
#define PduR_HasFctPtrOfStartOfReceptionRxSmTransition()              (TRUE != FALSE)
#define PduR_HasTpActivateNextFifoSmTransition()                      (TRUE != FALSE)
#define PduR_HasFctPtrOfTpActivateNextFifoSmTransition()              (TRUE != FALSE)
#define PduR_HasTpActivateReadFifoSmTransition()                      (TRUE != FALSE)
#define PduR_HasFctPtrOfTpActivateReadFifoSmTransition()              (TRUE != FALSE)
#define PduR_HasTpActivateWriteFifoSmTransition()                     (TRUE != FALSE)
#define PduR_HasFctPtrOfTpActivateWriteFifoSmTransition()             (TRUE != FALSE)
#define PduR_HasTpCancelReceiveFifoSmTransition()                     (TRUE != FALSE)
#define PduR_HasFctPtrOfTpCancelReceiveFifoSmTransition()             (TRUE != FALSE)
#define PduR_HasTpCancelTransmitTxInstSmTransition()                  (TRUE != FALSE)
#define PduR_HasFctPtrOfTpCancelTransmitTxInstSmTransition()          (TRUE != FALSE)
#define PduR_HasTpCheckReady2TransmitRmSmTransition()                 (TRUE != FALSE)
#define PduR_HasFctPtrOfTpCheckReady2TransmitRmSmTransition()         (TRUE != FALSE)
#define PduR_HasTpRxIndicationRxSmTransition()                        (TRUE != FALSE)
#define PduR_HasFctPtrOfTpRxIndicationRxSmTransition()                (TRUE != FALSE)
#define PduR_HasTpTriggerTransmitTxInstSmTransition()                 (TRUE != FALSE)
#define PduR_HasFctPtrOfTpTriggerTransmitTxInstSmTransition()         (TRUE != FALSE)
#define PduR_HasTpTxConfirmationTxSmTransition()                      (TRUE != FALSE)
#define PduR_HasFctPtrOfTpTxConfirmationTxSmTransition()              (TRUE != FALSE)
#define PduR_HasTx2Lo()                                               (TRUE != FALSE)
#define PduR_HasCancelTransmitUsedOfTx2Lo()                           (TRUE != FALSE)
#define PduR_HasMaskedBitsOfTx2Lo()                                   (TRUE != FALSE)
#define PduR_HasRmSrcRomIdxOfTx2Lo()                                  (TRUE != FALSE)
#define PduR_HasRmSrcRomUsedOfTx2Lo()                                 (TRUE != FALSE)
#define PduR_HasRmTransmitFctPtrIdxOfTx2Lo()                          (TRUE != FALSE)
#define PduR_HasTxIf2Up()                                             (TRUE != FALSE)
#define PduR_HasRmGDestRomIdxOfTxIf2Up()                              (TRUE != FALSE)
#define PduR_HasTxConfirmationUsedOfTxIf2Up()                         (TRUE != FALSE)
#define PduR_HasTxTp2Src()                                            (TRUE != FALSE)
#define PduR_HasRmGDestRomIdxOfTxTp2Src()                             (TRUE != FALSE)
#define PduR_HasPCConfig()                                            (TRUE != FALSE)
#define PduR_HasBmTxBufferArrayRamOfPCConfig()                        (TRUE != FALSE)
#define PduR_HasBmTxBufferIndRomOfPCConfig()                          (TRUE != FALSE)
#define PduR_HasBmTxBufferInstanceRamOfPCConfig()                     (TRUE != FALSE)
#define PduR_HasBmTxBufferInstanceRomOfPCConfig()                     (TRUE != FALSE)
#define PduR_HasBmTxBufferRamOfPCConfig()                             (TRUE != FALSE)
#define PduR_HasBmTxBufferRomOfPCConfig()                             (TRUE != FALSE)
#define PduR_HasConfigIdOfPCConfig()                                  (TRUE != FALSE)
#define PduR_HasCopyRxDataRxSmTransitionOfPCConfig()                  (TRUE != FALSE)
#define PduR_HasCopyTxDataTxInstSmTransitionOfPCConfig()              (TRUE != FALSE)
#define PduR_HasFinishReadFmSmTransitionOfPCConfig()                  (TRUE != FALSE)
#define PduR_HasFinishReceptionRmSmTransitionOfPCConfig()             (TRUE != FALSE)
#define PduR_HasFinishTransmissionRmSmTransitionOfPCConfig()          (TRUE != FALSE)
#define PduR_HasFinishWriteFmSmTransitionOfPCConfig()                 (TRUE != FALSE)
#define PduR_HasFmFifoElementRamOfPCConfig()                          (TRUE != FALSE)
#define PduR_HasFmFifoInstanceRamOfPCConfig()                         (TRUE != FALSE)
#define PduR_HasFmFifoInstanceRomOfPCConfig()                         (TRUE != FALSE)
#define PduR_HasFmFifoRamOfPCConfig()                                 (TRUE != FALSE)
#define PduR_HasFmFifoRomOfPCConfig()                                 (TRUE != FALSE)
#define PduR_HasIfRoutingStateTableOfPCConfig()                       (TRUE != FALSE)
#define PduR_HasInitializedOfPCConfig()                               (TRUE != FALSE)
#define PduR_HasMmRomOfPCConfig()                                     (TRUE != FALSE)
#define PduR_HasRmBufferedTpPropertiesRamOfPCConfig()                 (TRUE != FALSE)
#define PduR_HasRmBufferedTpPropertiesRomOfPCConfig()                 (TRUE != FALSE)
#define PduR_HasRmDestRomOfPCConfig()                                 (TRUE != FALSE)
#define PduR_HasRmGDestRomOfPCConfig()                                (TRUE != FALSE)
#define PduR_HasRmGDestTpTxStateRamOfPCConfig()                       (TRUE != FALSE)
#define PduR_HasRmSrcRomOfPCConfig()                                  (TRUE != FALSE)
#define PduR_HasRmTransmitFctPtrOfPCConfig()                          (TRUE != FALSE)
#define PduR_HasRxIf2DestOfPCConfig()                                 (TRUE != FALSE)
#define PduR_HasRxTp2DestOfPCConfig()                                 (TRUE != FALSE)
#define PduR_HasSizeOfBmTxBufferArrayRamOfPCConfig()                  (TRUE != FALSE)
#define PduR_HasSizeOfBmTxBufferIndRomOfPCConfig()                    (TRUE != FALSE)
#define PduR_HasSizeOfBmTxBufferInstanceRamOfPCConfig()               (TRUE != FALSE)
#define PduR_HasSizeOfBmTxBufferInstanceRomOfPCConfig()               (TRUE != FALSE)
#define PduR_HasSizeOfBmTxBufferRamOfPCConfig()                       (TRUE != FALSE)
#define PduR_HasSizeOfBmTxBufferRomOfPCConfig()                       (TRUE != FALSE)
#define PduR_HasSizeOfCopyRxDataRxSmTransitionOfPCConfig()            (TRUE != FALSE)
#define PduR_HasSizeOfCopyTxDataTxInstSmTransitionOfPCConfig()        (TRUE != FALSE)
#define PduR_HasSizeOfFinishReadFmSmTransitionOfPCConfig()            (TRUE != FALSE)
#define PduR_HasSizeOfFinishReceptionRmSmTransitionOfPCConfig()       (TRUE != FALSE)
#define PduR_HasSizeOfFinishTransmissionRmSmTransitionOfPCConfig()    (TRUE != FALSE)
#define PduR_HasSizeOfFinishWriteFmSmTransitionOfPCConfig()           (TRUE != FALSE)
#define PduR_HasSizeOfFmFifoElementRamOfPCConfig()                    (TRUE != FALSE)
#define PduR_HasSizeOfFmFifoInstanceRamOfPCConfig()                   (TRUE != FALSE)
#define PduR_HasSizeOfFmFifoInstanceRomOfPCConfig()                   (TRUE != FALSE)
#define PduR_HasSizeOfFmFifoRamOfPCConfig()                           (TRUE != FALSE)
#define PduR_HasSizeOfFmFifoRomOfPCConfig()                           (TRUE != FALSE)
#define PduR_HasSizeOfIfRoutingStateTableOfPCConfig()                 (TRUE != FALSE)
#define PduR_HasSizeOfMmRomOfPCConfig()                               (TRUE != FALSE)
#define PduR_HasSizeOfRmBufferedTpPropertiesRamOfPCConfig()           (TRUE != FALSE)
#define PduR_HasSizeOfRmBufferedTpPropertiesRomOfPCConfig()           (TRUE != FALSE)
#define PduR_HasSizeOfRmDestRomOfPCConfig()                           (TRUE != FALSE)
#define PduR_HasSizeOfRmGDestRomOfPCConfig()                          (TRUE != FALSE)
#define PduR_HasSizeOfRmGDestTpTxStateRamOfPCConfig()                 (TRUE != FALSE)
#define PduR_HasSizeOfRmSrcRomOfPCConfig()                            (TRUE != FALSE)
#define PduR_HasSizeOfRmTransmitFctPtrOfPCConfig()                    (TRUE != FALSE)
#define PduR_HasSizeOfRxIf2DestOfPCConfig()                           (TRUE != FALSE)
#define PduR_HasSizeOfRxTp2DestOfPCConfig()                           (TRUE != FALSE)
#define PduR_HasSizeOfStartOfReceptionRxSmTransitionOfPCConfig()      (TRUE != FALSE)
#define PduR_HasSizeOfTpActivateNextFifoSmTransitionOfPCConfig()      (TRUE != FALSE)
#define PduR_HasSizeOfTpActivateReadFifoSmTransitionOfPCConfig()      (TRUE != FALSE)
#define PduR_HasSizeOfTpActivateWriteFifoSmTransitionOfPCConfig()     (TRUE != FALSE)
#define PduR_HasSizeOfTpCancelReceiveFifoSmTransitionOfPCConfig()     (TRUE != FALSE)
#define PduR_HasSizeOfTpCancelTransmitTxInstSmTransitionOfPCConfig()  (TRUE != FALSE)
#define PduR_HasSizeOfTpCheckReady2TransmitRmSmTransitionOfPCConfig() (TRUE != FALSE)
#define PduR_HasSizeOfTpRxIndicationRxSmTransitionOfPCConfig()        (TRUE != FALSE)
#define PduR_HasSizeOfTpTriggerTransmitTxInstSmTransitionOfPCConfig() (TRUE != FALSE)
#define PduR_HasSizeOfTpTxConfirmationTxSmTransitionOfPCConfig()      (TRUE != FALSE)
#define PduR_HasSizeOfTx2LoOfPCConfig()                               (TRUE != FALSE)
#define PduR_HasSizeOfTxIf2UpOfPCConfig()                             (TRUE != FALSE)
#define PduR_HasSizeOfTxTp2SrcOfPCConfig()                            (TRUE != FALSE)
#define PduR_HasStartOfReceptionRxSmTransitionOfPCConfig()            (TRUE != FALSE)
#define PduR_HasTpActivateNextFifoSmTransitionOfPCConfig()            (TRUE != FALSE)
#define PduR_HasTpActivateReadFifoSmTransitionOfPCConfig()            (TRUE != FALSE)
#define PduR_HasTpActivateWriteFifoSmTransitionOfPCConfig()           (TRUE != FALSE)
#define PduR_HasTpCancelReceiveFifoSmTransitionOfPCConfig()           (TRUE != FALSE)
#define PduR_HasTpCancelTransmitTxInstSmTransitionOfPCConfig()        (TRUE != FALSE)
#define PduR_HasTpCheckReady2TransmitRmSmTransitionOfPCConfig()       (TRUE != FALSE)
#define PduR_HasTpRxIndicationRxSmTransitionOfPCConfig()              (TRUE != FALSE)
#define PduR_HasTpTriggerTransmitTxInstSmTransitionOfPCConfig()       (TRUE != FALSE)
#define PduR_HasTpTxConfirmationTxSmTransitionOfPCConfig()            (TRUE != FALSE)
#define PduR_HasTx2LoOfPCConfig()                                     (TRUE != FALSE)
#define PduR_HasTxIf2UpOfPCConfig()                                   (TRUE != FALSE)
#define PduR_HasTxTp2SrcOfPCConfig()                                  (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCIncrementDataMacros  PduR Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define PduR_IncBmTxBufferArrayRam(Index)                             PduR_GetBmTxBufferArrayRam(Index)++
#define PduR_IncRxLengthOfBmTxBufferRam(Index)                        PduR_GetRxLengthOfBmTxBufferRam(Index)++
#define PduR_IncFillLevelOfFmFifoRam(Index)                           PduR_GetFillLevelOfFmFifoRam(Index)++
#define PduR_IncPendingConfirmationsOfFmFifoRam(Index)                PduR_GetPendingConfirmationsOfFmFifoRam(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCDecrementDataMacros  PduR Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define PduR_DecBmTxBufferArrayRam(Index)                             PduR_GetBmTxBufferArrayRam(Index)--
#define PduR_DecRxLengthOfBmTxBufferRam(Index)                        PduR_GetRxLengthOfBmTxBufferRam(Index)--
#define PduR_DecFillLevelOfFmFifoRam(Index)                           PduR_GetFillLevelOfFmFifoRam(Index)--
#define PduR_DecPendingConfirmationsOfFmFifoRam(Index)                PduR_GetPendingConfirmationsOfFmFifoRam(Index)--
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


/**********************************************************************************************************************
 * GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
/* Communication Interface APIs */
typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_TransmitFctPtrType) (PduIdType, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA));
typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_TriggerTransmitFctPtrType) (PduIdType, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA));
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_IfRxIndicationType) (PduIdType, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA));
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_IfTxConfirmationFctPtrType) (PduIdType);

/* Transport Protocol APIs */
typedef P2FUNC(BufReq_ReturnType, PDUR_APPL_CODE, PduR_StartOfReceptionFctPtrType) (PduIdType, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA), PduLengthType, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA));

typedef P2FUNC(BufReq_ReturnType, PDUR_APPL_CODE, PduR_CopyRxDataFctPtrType) (PduIdType, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA), P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA));

typedef P2FUNC(BufReq_ReturnType, PDUR_APPL_CODE, PduR_CopyTxDataFctPtrType) (PduIdType, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA), P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA), P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA));

typedef P2FUNC(void, PDUR_APPL_CODE, PduR_TpRxIndicationFctPtrType) (PduIdType, Std_ReturnType);

typedef P2FUNC(void, PDUR_APPL_CODE, PduR_TpTxConfirmationFctPtrType) (PduIdType, Std_ReturnType);


#if ((PDUR_IFCANCELTRANSMITSUPPORTEDOFMMROM == STD_ON) || (PDUR_TPCANCELTRANSMITSUPPORTEDOFMMROM == STD_ON))
typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_CancelTransmitFctPtrType)(PduIdType);
#endif
#if (PDUR_CANCELRECEIVESUPPORTEDOFMMROM == STD_ON)
typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_CancelReceiveFctPtrType) (PduIdType);
#endif
#if (PDUR_CHANGEPARAMETERSUPPORTEDOFMMROM == STD_ON)
typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_ChangeParameterFctPtrType) (PduIdType, TPParameterType, uint16);
#endif

typedef P2FUNC(void, PDUR_CODE, PduR_DisableRoutingFctPtrType) (PduR_RoutingPathGroupIdType);


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  PduRPCIterableTypes  PduR Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate PduR_BmTxBufferArrayRam */
typedef uint32_least PduR_BmTxBufferArrayRamIterType;

/**   \brief  type used to iterate PduR_BmTxBufferIndRom */
typedef uint8_least PduR_BmTxBufferIndRomIterType;

/**   \brief  type used to iterate PduR_BmTxBufferInstanceRom */
typedef uint8_least PduR_BmTxBufferInstanceRomIterType;

/**   \brief  type used to iterate PduR_BmTxBufferRom */
typedef uint8_least PduR_BmTxBufferRomIterType;

/**   \brief  type used to iterate PduR_CopyRxDataRxSmTransition */
typedef uint8_least PduR_CopyRxDataRxSmTransitionIterType;

/**   \brief  type used to iterate PduR_CopyTxDataTxInstSmTransition */
typedef uint8_least PduR_CopyTxDataTxInstSmTransitionIterType;

/**   \brief  type used to iterate PduR_FinishReadFmSmTransition */
typedef uint8_least PduR_FinishReadFmSmTransitionIterType;

/**   \brief  type used to iterate PduR_FinishReceptionRmSmTransition */
typedef uint8_least PduR_FinishReceptionRmSmTransitionIterType;

/**   \brief  type used to iterate PduR_FinishTransmissionRmSmTransition */
typedef uint8_least PduR_FinishTransmissionRmSmTransitionIterType;

/**   \brief  type used to iterate PduR_FinishWriteFmSmTransition */
typedef uint8_least PduR_FinishWriteFmSmTransitionIterType;

/**   \brief  type used to iterate PduR_FmFifoElementRam */
typedef uint8_least PduR_FmFifoElementRamIterType;

/**   \brief  type used to iterate PduR_FmFifoInstanceRom */
typedef uint8_least PduR_FmFifoInstanceRomIterType;

/**   \brief  type used to iterate PduR_FmFifoRom */
typedef uint8_least PduR_FmFifoRomIterType;

/**   \brief  type used to iterate PduR_IfRoutingStateTable */
typedef uint8_least PduR_IfRoutingStateTableIterType;

/**   \brief  type used to iterate PduR_MmRom */
typedef uint8_least PduR_MmRomIterType;

/**   \brief  type used to iterate PduR_RmBufferedTpPropertiesRom */
typedef uint8_least PduR_RmBufferedTpPropertiesRomIterType;

/**   \brief  type used to iterate PduR_RmDestRom */
typedef uint16_least PduR_RmDestRomIterType;

/**   \brief  type used to iterate PduR_RmGDestRom */
typedef uint16_least PduR_RmGDestRomIterType;

/**   \brief  type used to iterate PduR_RmGDestTpTxStateRam */
typedef uint8_least PduR_RmGDestTpTxStateRamIterType;

/**   \brief  type used to iterate PduR_RmSrcRom */
typedef uint16_least PduR_RmSrcRomIterType;

/**   \brief  type used to iterate PduR_RmTransmitFctPtr */
typedef uint8_least PduR_RmTransmitFctPtrIterType;

/**   \brief  type used to iterate PduR_RxIf2Dest */
typedef uint8_least PduR_RxIf2DestIterType;

/**   \brief  type used to iterate PduR_RxTp2Dest */
typedef uint8_least PduR_RxTp2DestIterType;

/**   \brief  type used to iterate PduR_StartOfReceptionRxSmTransition */
typedef uint8_least PduR_StartOfReceptionRxSmTransitionIterType;

/**   \brief  type used to iterate PduR_TpActivateNextFifoSmTransition */
typedef uint8_least PduR_TpActivateNextFifoSmTransitionIterType;

/**   \brief  type used to iterate PduR_TpActivateReadFifoSmTransition */
typedef uint8_least PduR_TpActivateReadFifoSmTransitionIterType;

/**   \brief  type used to iterate PduR_TpActivateWriteFifoSmTransition */
typedef uint8_least PduR_TpActivateWriteFifoSmTransitionIterType;

/**   \brief  type used to iterate PduR_TpCancelReceiveFifoSmTransition */
typedef uint8_least PduR_TpCancelReceiveFifoSmTransitionIterType;

/**   \brief  type used to iterate PduR_TpCancelTransmitTxInstSmTransition */
typedef uint8_least PduR_TpCancelTransmitTxInstSmTransitionIterType;

/**   \brief  type used to iterate PduR_TpCheckReady2TransmitRmSmTransition */
typedef uint8_least PduR_TpCheckReady2TransmitRmSmTransitionIterType;

/**   \brief  type used to iterate PduR_TpRxIndicationRxSmTransition */
typedef uint8_least PduR_TpRxIndicationRxSmTransitionIterType;

/**   \brief  type used to iterate PduR_TpTriggerTransmitTxInstSmTransition */
typedef uint8_least PduR_TpTriggerTransmitTxInstSmTransitionIterType;

/**   \brief  type used to iterate PduR_TpTxConfirmationTxSmTransition */
typedef uint8_least PduR_TpTxConfirmationTxSmTransitionIterType;

/**   \brief  type used to iterate PduR_Tx2Lo */
typedef uint8_least PduR_Tx2LoIterType;

/**   \brief  type used to iterate PduR_TxIf2Up */
typedef uint8_least PduR_TxIf2UpIterType;

/**   \brief  type used to iterate PduR_TxTp2Src */
typedef uint8_least PduR_TxTp2SrcIterType;

/** 
  \}
*/ 

/** 
  \defgroup  PduRPCIterableTypesWithSizeRelations  PduR Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate PduR_BmTxBufferInstanceRam */
typedef PduR_BmTxBufferInstanceRomIterType PduR_BmTxBufferInstanceRamIterType;

/**   \brief  type used to iterate PduR_BmTxBufferRam */
typedef PduR_BmTxBufferRomIterType PduR_BmTxBufferRamIterType;

/**   \brief  type used to iterate PduR_FmFifoInstanceRam */
typedef PduR_FmFifoInstanceRomIterType PduR_FmFifoInstanceRamIterType;

/**   \brief  type used to iterate PduR_FmFifoRam */
typedef PduR_FmFifoRomIterType PduR_FmFifoRamIterType;

/**   \brief  type used to iterate PduR_RmBufferedTpPropertiesRam */
typedef PduR_RmBufferedTpPropertiesRomIterType PduR_RmBufferedTpPropertiesRamIterType;

/** 
  \}
*/ 

/** 
  \defgroup  PduRPCValueTypes  PduR Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for PduR_BmTxBufferArrayRam */
typedef uint8 PduR_BmTxBufferArrayRamType;

/**   \brief  value based type definition for PduR_BmTxBufferRomIdxOfBmTxBufferIndRom */
typedef uint8 PduR_BmTxBufferRomIdxOfBmTxBufferIndRomType;

/**   \brief  value based type definition for PduR_BmTxBufferArrayRamReadIdxOfBmTxBufferInstanceRam */
typedef uint32 PduR_BmTxBufferArrayRamReadIdxOfBmTxBufferInstanceRamType;

/**   \brief  value based type definition for PduR_BmTxBufferArrayRamWriteIdxOfBmTxBufferInstanceRam */
typedef uint32 PduR_BmTxBufferArrayRamWriteIdxOfBmTxBufferInstanceRamType;

/**   \brief  value based type definition for PduR_PduRBufferStateOfBmTxBufferInstanceRam */
typedef uint8 PduR_PduRBufferStateOfBmTxBufferInstanceRamType;

/**   \brief  value based type definition for PduR_TxBufferUsedOfBmTxBufferInstanceRam */
typedef boolean PduR_TxBufferUsedOfBmTxBufferInstanceRamType;

/**   \brief  value based type definition for PduR_BmTxBufferRomIdxOfBmTxBufferInstanceRom */
typedef uint8 PduR_BmTxBufferRomIdxOfBmTxBufferInstanceRomType;

/**   \brief  value based type definition for PduR_BmTxBufferArrayRamInstanceStopIdxOfBmTxBufferRam */
typedef uint32 PduR_BmTxBufferArrayRamInstanceStopIdxOfBmTxBufferRamType;

/**   \brief  value based type definition for PduR_BmTxBufferArrayRamReadIdxOfBmTxBufferRam */
typedef uint32 PduR_BmTxBufferArrayRamReadIdxOfBmTxBufferRamType;

/**   \brief  value based type definition for PduR_BmTxBufferArrayRamWriteIdxOfBmTxBufferRam */
typedef uint32 PduR_BmTxBufferArrayRamWriteIdxOfBmTxBufferRamType;

/**   \brief  value based type definition for PduR_PduRBufferStateOfBmTxBufferRam */
typedef uint8 PduR_PduRBufferStateOfBmTxBufferRamType;

/**   \brief  value based type definition for PduR_TpBufMgrStateOfBmTxBufferRam */
typedef uint8 PduR_TpBufMgrStateOfBmTxBufferRamType;

/**   \brief  value based type definition for PduR_BmTxBufferArrayRamEndIdxOfBmTxBufferRom */
typedef uint8 PduR_BmTxBufferArrayRamEndIdxOfBmTxBufferRomType;

/**   \brief  value based type definition for PduR_BmTxBufferArrayRamLengthOfBmTxBufferRom */
typedef uint8 PduR_BmTxBufferArrayRamLengthOfBmTxBufferRomType;

/**   \brief  value based type definition for PduR_BmTxBufferArrayRamStartIdxOfBmTxBufferRom */
typedef uint8 PduR_BmTxBufferArrayRamStartIdxOfBmTxBufferRomType;

/**   \brief  value based type definition for PduR_BmTxBufferInstanceRomEndIdxOfBmTxBufferRom */
typedef uint8 PduR_BmTxBufferInstanceRomEndIdxOfBmTxBufferRomType;

/**   \brief  value based type definition for PduR_BmTxBufferInstanceRomStartIdxOfBmTxBufferRom */
typedef uint8 PduR_BmTxBufferInstanceRomStartIdxOfBmTxBufferRomType;

/**   \brief  value based type definition for PduR_ConfigId */
typedef uint8 PduR_ConfigIdType;

/**   \brief  value based type definition for PduR_BmTxBufferRomIdxOfFmFifoElementRam */
typedef uint8 PduR_BmTxBufferRomIdxOfFmFifoElementRamType;

/**   \brief  value based type definition for PduR_DedicatedTxBufferOfFmFifoElementRam */
typedef boolean PduR_DedicatedTxBufferOfFmFifoElementRamType;

/**   \brief  value based type definition for PduR_RmDestRomIdxOfFmFifoElementRam */
typedef uint16 PduR_RmDestRomIdxOfFmFifoElementRamType;

/**   \brief  value based type definition for PduR_StateOfFmFifoElementRam */
typedef uint8 PduR_StateOfFmFifoElementRamType;

/**   \brief  value based type definition for PduR_BmTxBufferInstanceRomIdxOfFmFifoInstanceRam */
typedef uint8 PduR_BmTxBufferInstanceRomIdxOfFmFifoInstanceRamType;

/**   \brief  value based type definition for PduR_FmFifoRomIdxOfFmFifoInstanceRom */
typedef uint8 PduR_FmFifoRomIdxOfFmFifoInstanceRomType;

/**   \brief  value based type definition for PduR_FillLevelOfFmFifoRam */
typedef uint16 PduR_FillLevelOfFmFifoRamType;

/**   \brief  value based type definition for PduR_FmFifoElementRamReadIdxOfFmFifoRam */
typedef uint8 PduR_FmFifoElementRamReadIdxOfFmFifoRamType;

/**   \brief  value based type definition for PduR_FmFifoElementRamWriteIdxOfFmFifoRam */
typedef uint8 PduR_FmFifoElementRamWriteIdxOfFmFifoRamType;

/**   \brief  value based type definition for PduR_TpTxSmStateOfFmFifoRam */
typedef uint8 PduR_TpTxSmStateOfFmFifoRamType;

/**   \brief  value based type definition for PduR_FmFifoElementRamEndIdxOfFmFifoRom */
typedef uint8 PduR_FmFifoElementRamEndIdxOfFmFifoRomType;

/**   \brief  value based type definition for PduR_FmFifoElementRamLengthOfFmFifoRom */
typedef uint8 PduR_FmFifoElementRamLengthOfFmFifoRomType;

/**   \brief  value based type definition for PduR_FmFifoElementRamStartIdxOfFmFifoRom */
typedef uint8 PduR_FmFifoElementRamStartIdxOfFmFifoRomType;

/**   \brief  value based type definition for PduR_NextState_For_Init_If_Routing_StateOfIfRoutingStateTable */
typedef uint8 PduR_NextState_For_Init_If_Routing_StateOfIfRoutingStateTableType;

/**   \brief  value based type definition for PduR_NextState_For_Wait_For_RxIndicationOfIfRoutingStateTable */
typedef uint8 PduR_NextState_For_Wait_For_RxIndicationOfIfRoutingStateTableType;

/**   \brief  value based type definition for PduR_NextState_For_Wait_For_TriggerTransmitOfIfRoutingStateTable */
typedef uint8 PduR_NextState_For_Wait_For_TriggerTransmitOfIfRoutingStateTableType;

/**   \brief  value based type definition for PduR_NextState_For_Wait_For_TxConfirmationOfIfRoutingStateTable */
typedef uint8 PduR_NextState_For_Wait_For_TxConfirmationOfIfRoutingStateTableType;

/**   \brief  value based type definition for PduR_Initialized */
typedef boolean PduR_InitializedType;

/**   \brief  value based type definition for PduR_IfCancelTransmitSupportedOfMmRom */
typedef boolean PduR_IfCancelTransmitSupportedOfMmRomType;

/**   \brief  value based type definition for PduR_LoIfOfMmRom */
typedef boolean PduR_LoIfOfMmRomType;

/**   \brief  value based type definition for PduR_LoTpOfMmRom */
typedef boolean PduR_LoTpOfMmRomType;

/**   \brief  value based type definition for PduR_MaskedBitsOfMmRom */
typedef uint8 PduR_MaskedBitsOfMmRomType;

/**   \brief  value based type definition for PduR_TpCancelTransmitSupportedOfMmRom */
typedef boolean PduR_TpCancelTransmitSupportedOfMmRomType;

/**   \brief  value based type definition for PduR_UpIfOfMmRom */
typedef boolean PduR_UpIfOfMmRomType;

/**   \brief  value based type definition for PduR_UpTpOfMmRom */
typedef boolean PduR_UpTpOfMmRomType;

/**   \brief  value based type definition for PduR_FmFifoElementRamIdxOfRmBufferedTpPropertiesRam */
typedef uint8 PduR_FmFifoElementRamIdxOfRmBufferedTpPropertiesRamType;

/**   \brief  value based type definition for PduR_TpRxSmStateOfRmBufferedTpPropertiesRam */
typedef uint8 PduR_TpRxSmStateOfRmBufferedTpPropertiesRamType;

/**   \brief  value based type definition for PduR_BmTxBufferIndRomEndIdxOfRmBufferedTpPropertiesRom */
typedef uint8 PduR_BmTxBufferIndRomEndIdxOfRmBufferedTpPropertiesRomType;

/**   \brief  value based type definition for PduR_BmTxBufferIndRomLengthOfRmBufferedTpPropertiesRom */
typedef uint8 PduR_BmTxBufferIndRomLengthOfRmBufferedTpPropertiesRomType;

/**   \brief  value based type definition for PduR_BmTxBufferIndRomStartIdxOfRmBufferedTpPropertiesRom */
typedef uint8 PduR_BmTxBufferIndRomStartIdxOfRmBufferedTpPropertiesRomType;

/**   \brief  value based type definition for PduR_FmFifoRomIdxOfRmBufferedTpPropertiesRom */
typedef uint8 PduR_FmFifoRomIdxOfRmBufferedTpPropertiesRomType;

/**   \brief  value based type definition for PduR_TpThresholdOfRmBufferedTpPropertiesRom */
typedef uint8 PduR_TpThresholdOfRmBufferedTpPropertiesRomType;

/**   \brief  value based type definition for PduR_DirectionOfRmDestRom */
typedef uint8 PduR_DirectionOfRmDestRomType;

/**   \brief  value based type definition for PduR_RmGDestRomIdxOfRmDestRom */
typedef uint16 PduR_RmGDestRomIdxOfRmDestRomType;

/**   \brief  value based type definition for PduR_RmSrcRomIdxOfRmDestRom */
typedef uint16 PduR_RmSrcRomIdxOfRmDestRomType;

/**   \brief  value based type definition for PduR_RoutingTypeOfRmDestRom */
typedef uint8 PduR_RoutingTypeOfRmDestRomType;

/**   \brief  value based type definition for PduR_DestHndOfRmGDestRom */
typedef uint8 PduR_DestHndOfRmGDestRomType;

/**   \brief  value based type definition for PduR_FmFifoInstanceRomIdxOfRmGDestRom */
typedef uint8 PduR_FmFifoInstanceRomIdxOfRmGDestRomType;

/**   \brief  value based type definition for PduR_FmFifoInstanceRomUsedOfRmGDestRom */
typedef boolean PduR_FmFifoInstanceRomUsedOfRmGDestRomType;

/**   \brief  value based type definition for PduR_MaskedBitsOfRmGDestRom */
typedef uint8 PduR_MaskedBitsOfRmGDestRomType;

/**   \brief  value based type definition for PduR_MmRomIdxOfRmGDestRom */
typedef uint8 PduR_MmRomIdxOfRmGDestRomType;

/**   \brief  value based type definition for PduR_PduRDestPduProcessingOfRmGDestRom */
typedef uint8 PduR_PduRDestPduProcessingOfRmGDestRomType;

/**   \brief  value based type definition for PduR_RmDestRomIdxOfRmGDestRom */
typedef uint16 PduR_RmDestRomIdxOfRmGDestRomType;

/**   \brief  value based type definition for PduR_RmDestRomUsedOfRmGDestRom */
typedef boolean PduR_RmDestRomUsedOfRmGDestRomType;

/**   \brief  value based type definition for PduR_RmGDestTpTxStateRamIdxOfRmGDestRom */
typedef uint8 PduR_RmGDestTpTxStateRamIdxOfRmGDestRomType;

/**   \brief  value based type definition for PduR_RmGDestTpTxStateRamUsedOfRmGDestRom */
typedef boolean PduR_RmGDestTpTxStateRamUsedOfRmGDestRomType;

/**   \brief  value based type definition for PduR_TpTxInstSmStateOfRmGDestTpTxStateRam */
typedef uint8 PduR_TpTxInstSmStateOfRmGDestTpTxStateRamType;

/**   \brief  value based type definition for PduR_MaskedBitsOfRmSrcRom */
typedef uint8 PduR_MaskedBitsOfRmSrcRomType;

/**   \brief  value based type definition for PduR_MmRomIdxOfRmSrcRom */
typedef uint8 PduR_MmRomIdxOfRmSrcRomType;

/**   \brief  value based type definition for PduR_RmBufferedTpPropertiesRomIdxOfRmSrcRom */
typedef uint8 PduR_RmBufferedTpPropertiesRomIdxOfRmSrcRomType;

/**   \brief  value based type definition for PduR_RmBufferedTpPropertiesRomUsedOfRmSrcRom */
typedef boolean PduR_RmBufferedTpPropertiesRomUsedOfRmSrcRomType;

/**   \brief  value based type definition for PduR_RmDestRomEndIdxOfRmSrcRom */
typedef uint16 PduR_RmDestRomEndIdxOfRmSrcRomType;

/**   \brief  value based type definition for PduR_RmDestRomLengthOfRmSrcRom */
typedef uint8 PduR_RmDestRomLengthOfRmSrcRomType;

/**   \brief  value based type definition for PduR_RmDestRomStartIdxOfRmSrcRom */
typedef uint16 PduR_RmDestRomStartIdxOfRmSrcRomType;

/**   \brief  value based type definition for PduR_SrcHndOfRmSrcRom */
typedef uint8 PduR_SrcHndOfRmSrcRomType;

/**   \brief  value based type definition for PduR_TriggerTransmitSupportedOfRmSrcRom */
typedef boolean PduR_TriggerTransmitSupportedOfRmSrcRomType;

/**   \brief  value based type definition for PduR_TxConfirmationSupportedOfRmSrcRom */
typedef boolean PduR_TxConfirmationSupportedOfRmSrcRomType;

/**   \brief  value based type definition for PduR_RmSrcRomIdxOfRxIf2Dest */
typedef uint16 PduR_RmSrcRomIdxOfRxIf2DestType;

/**   \brief  value based type definition for PduR_RmSrcRomIdxOfRxTp2Dest */
typedef uint16 PduR_RmSrcRomIdxOfRxTp2DestType;

/**   \brief  value based type definition for PduR_RmSrcRomUsedOfRxTp2Dest */
typedef boolean PduR_RmSrcRomUsedOfRxTp2DestType;

/**   \brief  value based type definition for PduR_SizeOfBmTxBufferArrayRam */
typedef uint8 PduR_SizeOfBmTxBufferArrayRamType;

/**   \brief  value based type definition for PduR_SizeOfBmTxBufferIndRom */
typedef uint8 PduR_SizeOfBmTxBufferIndRomType;

/**   \brief  value based type definition for PduR_SizeOfBmTxBufferInstanceRam */
typedef uint8 PduR_SizeOfBmTxBufferInstanceRamType;

/**   \brief  value based type definition for PduR_SizeOfBmTxBufferInstanceRom */
typedef uint8 PduR_SizeOfBmTxBufferInstanceRomType;

/**   \brief  value based type definition for PduR_SizeOfBmTxBufferRam */
typedef uint8 PduR_SizeOfBmTxBufferRamType;

/**   \brief  value based type definition for PduR_SizeOfBmTxBufferRom */
typedef uint8 PduR_SizeOfBmTxBufferRomType;

/**   \brief  value based type definition for PduR_SizeOfCopyRxDataRxSmTransition */
typedef uint8 PduR_SizeOfCopyRxDataRxSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfCopyTxDataTxInstSmTransition */
typedef uint8 PduR_SizeOfCopyTxDataTxInstSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfFinishReadFmSmTransition */
typedef uint8 PduR_SizeOfFinishReadFmSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfFinishReceptionRmSmTransition */
typedef uint8 PduR_SizeOfFinishReceptionRmSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfFinishTransmissionRmSmTransition */
typedef uint8 PduR_SizeOfFinishTransmissionRmSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfFinishWriteFmSmTransition */
typedef uint8 PduR_SizeOfFinishWriteFmSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfFmFifoElementRam */
typedef uint8 PduR_SizeOfFmFifoElementRamType;

/**   \brief  value based type definition for PduR_SizeOfFmFifoInstanceRam */
typedef uint8 PduR_SizeOfFmFifoInstanceRamType;

/**   \brief  value based type definition for PduR_SizeOfFmFifoInstanceRom */
typedef uint8 PduR_SizeOfFmFifoInstanceRomType;

/**   \brief  value based type definition for PduR_SizeOfFmFifoRam */
typedef uint8 PduR_SizeOfFmFifoRamType;

/**   \brief  value based type definition for PduR_SizeOfFmFifoRom */
typedef uint8 PduR_SizeOfFmFifoRomType;

/**   \brief  value based type definition for PduR_SizeOfIfRoutingStateTable */
typedef uint8 PduR_SizeOfIfRoutingStateTableType;

/**   \brief  value based type definition for PduR_SizeOfMmRom */
typedef uint8 PduR_SizeOfMmRomType;

/**   \brief  value based type definition for PduR_SizeOfRmBufferedTpPropertiesRam */
typedef uint8 PduR_SizeOfRmBufferedTpPropertiesRamType;

/**   \brief  value based type definition for PduR_SizeOfRmBufferedTpPropertiesRom */
typedef uint8 PduR_SizeOfRmBufferedTpPropertiesRomType;

/**   \brief  value based type definition for PduR_SizeOfRmDestRom */
typedef uint16 PduR_SizeOfRmDestRomType;

/**   \brief  value based type definition for PduR_SizeOfRmGDestRom */
typedef uint16 PduR_SizeOfRmGDestRomType;

/**   \brief  value based type definition for PduR_SizeOfRmGDestTpTxStateRam */
typedef uint8 PduR_SizeOfRmGDestTpTxStateRamType;

/**   \brief  value based type definition for PduR_SizeOfRmSrcRom */
typedef uint16 PduR_SizeOfRmSrcRomType;

/**   \brief  value based type definition for PduR_SizeOfRmTransmitFctPtr */
typedef uint8 PduR_SizeOfRmTransmitFctPtrType;

/**   \brief  value based type definition for PduR_SizeOfRxIf2Dest */
typedef uint8 PduR_SizeOfRxIf2DestType;

/**   \brief  value based type definition for PduR_SizeOfRxTp2Dest */
typedef uint8 PduR_SizeOfRxTp2DestType;

/**   \brief  value based type definition for PduR_SizeOfStartOfReceptionRxSmTransition */
typedef uint8 PduR_SizeOfStartOfReceptionRxSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfTpActivateNextFifoSmTransition */
typedef uint8 PduR_SizeOfTpActivateNextFifoSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfTpActivateReadFifoSmTransition */
typedef uint8 PduR_SizeOfTpActivateReadFifoSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfTpActivateWriteFifoSmTransition */
typedef uint8 PduR_SizeOfTpActivateWriteFifoSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfTpCancelReceiveFifoSmTransition */
typedef uint8 PduR_SizeOfTpCancelReceiveFifoSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfTpCancelTransmitTxInstSmTransition */
typedef uint8 PduR_SizeOfTpCancelTransmitTxInstSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfTpCheckReady2TransmitRmSmTransition */
typedef uint8 PduR_SizeOfTpCheckReady2TransmitRmSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfTpRxIndicationRxSmTransition */
typedef uint8 PduR_SizeOfTpRxIndicationRxSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfTpTriggerTransmitTxInstSmTransition */
typedef uint8 PduR_SizeOfTpTriggerTransmitTxInstSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfTpTxConfirmationTxSmTransition */
typedef uint8 PduR_SizeOfTpTxConfirmationTxSmTransitionType;

/**   \brief  value based type definition for PduR_SizeOfTx2Lo */
typedef uint8 PduR_SizeOfTx2LoType;

/**   \brief  value based type definition for PduR_SizeOfTxIf2Up */
typedef uint8 PduR_SizeOfTxIf2UpType;

/**   \brief  value based type definition for PduR_SizeOfTxTp2Src */
typedef uint8 PduR_SizeOfTxTp2SrcType;

/**   \brief  value based type definition for PduR_CancelTransmitUsedOfTx2Lo */
typedef boolean PduR_CancelTransmitUsedOfTx2LoType;

/**   \brief  value based type definition for PduR_MaskedBitsOfTx2Lo */
typedef uint8 PduR_MaskedBitsOfTx2LoType;

/**   \brief  value based type definition for PduR_RmSrcRomIdxOfTx2Lo */
typedef uint16 PduR_RmSrcRomIdxOfTx2LoType;

/**   \brief  value based type definition for PduR_RmSrcRomUsedOfTx2Lo */
typedef boolean PduR_RmSrcRomUsedOfTx2LoType;

/**   \brief  value based type definition for PduR_RmTransmitFctPtrIdxOfTx2Lo */
typedef uint8 PduR_RmTransmitFctPtrIdxOfTx2LoType;

/**   \brief  value based type definition for PduR_RmGDestRomIdxOfTxIf2Up */
typedef uint16 PduR_RmGDestRomIdxOfTxIf2UpType;

/**   \brief  value based type definition for PduR_TxConfirmationUsedOfTxIf2Up */
typedef boolean PduR_TxConfirmationUsedOfTxIf2UpType;

/**   \brief  value based type definition for PduR_RmGDestRomIdxOfTxTp2Src */
typedef uint16 PduR_RmGDestRomIdxOfTxTp2SrcType;

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

#if(PDUR_RMSRCROM == STD_ON)
typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_RmTransmitFctPtrType) (PduR_RmSrcRomIterType, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA));
#endif
#if(PDUR_RMDESTROM == STD_ON)
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_RmIfRxIndicationType) (PduR_RmDestRomIterType, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA));
#endif

#if(PDUR_FMFIFORAM == STD_ON)
typedef P2FUNC(BufReq_ReturnType, PDUR_APPL_CODE, PduR_StartOfReceptionFifoSmFctPtrType) (PduR_RmSrcRomIterType, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA), PduLengthType, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA));
typedef P2FUNC(BufReq_ReturnType, PDUR_APPL_CODE, PduR_CopyRxDataFifoSmFctPtrType) (PduR_RmSrcRomIterType, PduLengthType, SduDataPtrType, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA));
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_TpRxIndicationFifoSmFctPtrType) (PduR_RmSrcRomIterType, Std_ReturnType);
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_TpCancelReceiveFctPtrType) (PduR_RmSrcRomIterType);

typedef P2FUNC(BufReq_ReturnType, PDUR_APPL_CODE, PduR_CopyTxDataFifoSmFctPtrType) (PduR_RmGDestRomIterType, PduLengthType, SduDataPtrType, P2CONST(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA), P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA));
typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_TpTriggerTransmitFctPtrType) (PduR_RmDestRomIterType);
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_TpTxConfirmationFifoSmFctPtrType) (PduR_RmGDestRomIterType, Std_ReturnType);
typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_TpCancelTransmitFctPtrType)(PduR_RmDestRomIterType);
typedef P2FUNC(void, PDUR_CODE, PduR_TpDisableRoutingFctPtrType) (PduR_RmGDestRomIterType);

typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_CheckReady2TransmitFctPtrType) (PduR_RmSrcRomIterType);

typedef P2FUNC(void, PDUR_APPL_CODE, PduR_FinishReceptionFctPtrType) (PduR_RmSrcRomIterType, Std_ReturnType);

typedef P2FUNC(void, PDUR_APPL_CODE, PduR_FinishTransmissionFctPtrType) (PduR_RmSrcRomIterType, Std_ReturnType);

typedef P2FUNC(void, PDUR_APPL_CODE, PduR_ActivateNextFctPtrType) (PduR_FmFifoElementRamIterType, Std_ReturnType);
#endif

#if(PDUR_FINISHREADFMSMTRANSITION  == STD_ON)
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_FinishReadFctPtrType) (PduR_FmFifoElementRamIterType, Std_ReturnType);
#endif
#if (PDUR_FINISHWRITEFMSMTRANSITION  == STD_ON)
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_FinishWriteFctPtrType) (PduR_FmFifoElementRamIterType, Std_ReturnType);
#endif
#if (PDUR_TPACTIVATEREADFIFOSMTRANSITION == STD_ON)
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_ActivateReadFctPtrType) (PduR_FmFifoElementRamIterType);
#endif
#if (PDUR_TPACTIVATEWRITEFIFOSMTRANSITION == STD_ON)
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_ActivateWriteFctPtrType) (PduR_FmFifoElementRamIterType);
#endif

#if (PDUR_FMFLUSHFIFOELEMENT == STD_ON)
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_Fm_FlushFiFoElementPtrType) (PduR_FmFifoElementRamIterType);
#endif

#if(PDUR_SMDATAPLANEROM == STD_ON)
typedef uint8 PduR_FilterReturnType;
# define PDUR_FILTER_PASS  0u
# define PDUR_FILTER_BLOCK 1u

typedef uint32 PduR_SmSaType;
typedef uint32 PduR_SmTaType;

#define PDUR_SM_UNLEARNED_CONNECTION 0u
typedef P2FUNC(PduR_SmSaType, PDUR_CODE, PduR_Sm_LinearTaToSaCalculationStrategy_GetSaFctPtrType) (PduR_SmLinearTaToSaCalculationStrategyRomIterType, uint32);
typedef P2FUNC(void, PDUR_CODE, PduR_Sm_SrcFilterFctPtrType) (PduR_SmSrcRomIdxOfRmSrcRomType, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA));
typedef P2FUNC(PduR_FilterReturnType, PDUR_CODE, PduR_Sm_DestFilterFctPtrType) (PduR_SmGDestRomIdxOfRmGDestRomType, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA));
#endif

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  PduRPCStructTypes  PduR Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in PduR_BmTxBufferIndRom */
typedef struct sPduR_BmTxBufferIndRomType
{
  PduR_BmTxBufferRomIdxOfBmTxBufferIndRomType BmTxBufferRomIdxOfBmTxBufferIndRom;  /**< the index of the 1:1 relation pointing to PduR_BmTxBufferRom */
} PduR_BmTxBufferIndRomType;

/**   \brief  type used in PduR_BmTxBufferInstanceRam */
typedef struct sPduR_BmTxBufferInstanceRamType
{
  PduR_BmTxBufferArrayRamReadIdxOfBmTxBufferInstanceRamType BmTxBufferArrayRamReadIdxOfBmTxBufferInstanceRam;  /**< the index of the 1:1 relation pointing to PduR_BmTxBufferArrayRam */
  PduR_BmTxBufferArrayRamWriteIdxOfBmTxBufferInstanceRamType BmTxBufferArrayRamWriteIdxOfBmTxBufferInstanceRam;  /**< the index of the 1:1 relation pointing to PduR_BmTxBufferArrayRam */
  PduR_PduRBufferStateOfBmTxBufferInstanceRamType PduRBufferStateOfBmTxBufferInstanceRam;  /**< PduRBufferState represents the buffer state (READ4WRITE, WRITE4READ, FULL, EMPTY) */
  PduR_TxBufferUsedOfBmTxBufferInstanceRamType TxBufferUsedOfBmTxBufferInstanceRam;  /**< TRUE if a destination of an 1:N routing use the TxBuffer element. */
} PduR_BmTxBufferInstanceRamType;

/**   \brief  type used in PduR_BmTxBufferInstanceRom */
typedef struct sPduR_BmTxBufferInstanceRomType
{
  PduR_BmTxBufferRomIdxOfBmTxBufferInstanceRomType BmTxBufferRomIdxOfBmTxBufferInstanceRom;  /**< the index of the 1:1 relation pointing to PduR_BmTxBufferRom */
} PduR_BmTxBufferInstanceRomType;

/**   \brief  type used in PduR_BmTxBufferRam */
typedef struct sPduR_BmTxBufferRamType
{
  PduR_BmTxBufferArrayRamInstanceStopIdxOfBmTxBufferRamType BmTxBufferArrayRamInstanceStopIdxOfBmTxBufferRam;  /**< the index of the 1:1 relation pointing to PduR_BmTxBufferArrayRam */
  PduR_BmTxBufferArrayRamReadIdxOfBmTxBufferRamType BmTxBufferArrayRamReadIdxOfBmTxBufferRam;  /**< the index of the 1:1 relation pointing to PduR_BmTxBufferArrayRam */
  PduR_BmTxBufferArrayRamWriteIdxOfBmTxBufferRamType BmTxBufferArrayRamWriteIdxOfBmTxBufferRam;  /**< the index of the 1:1 relation pointing to PduR_BmTxBufferArrayRam */
  PduR_PduRBufferStateOfBmTxBufferRamType PduRBufferStateOfBmTxBufferRam;  /**< PduRBufferState represents the buffer state (READ4WRITE, WRITE4READ, FULL, EMPTY) */
  PduR_TpBufMgrStateOfBmTxBufferRamType TpBufMgrStateOfBmTxBufferRam;  /**< TpBufMgrState represent the Tp buffer state (IDLE, RX_ACTIVE, TX_ACTIVE, RX_TX_ACTIVE) */
  PduR_BmTxBufferArrayRamLengthOfBmTxBufferRomType RxLengthOfBmTxBufferRam;  /**< Rx Pdu Sdu length */
} PduR_BmTxBufferRamType;

/**   \brief  type used in PduR_BmTxBufferRom */
typedef struct sPduR_BmTxBufferRomType
{
  PduR_BmTxBufferArrayRamLengthOfBmTxBufferRomType BmTxBufferArrayRamLengthOfBmTxBufferRom;  /**< the number of relations pointing to PduR_BmTxBufferArrayRam */
  PduR_BmTxBufferArrayRamStartIdxOfBmTxBufferRomType BmTxBufferArrayRamStartIdxOfBmTxBufferRom;  /**< the start index of the 1:n relation pointing to PduR_BmTxBufferArrayRam */
  PduR_BmTxBufferInstanceRomStartIdxOfBmTxBufferRomType BmTxBufferInstanceRomStartIdxOfBmTxBufferRom;  /**< the start index of the 1:n relation pointing to PduR_BmTxBufferInstanceRom */
} PduR_BmTxBufferRomType;

/**   \brief  type used in PduR_CopyRxDataRxSmTransition */
typedef struct sPduR_CopyRxDataRxSmTransitionType
{
  PduR_CopyRxDataFifoSmFctPtrType FctPtrOfCopyRxDataRxSmTransition;
} PduR_CopyRxDataRxSmTransitionType;

/**   \brief  type used in PduR_CopyTxDataTxInstSmTransition */
typedef struct sPduR_CopyTxDataTxInstSmTransitionType
{
  PduR_CopyTxDataFifoSmFctPtrType FctPtrOfCopyTxDataTxInstSmTransition;
} PduR_CopyTxDataTxInstSmTransitionType;

/**   \brief  type used in PduR_FinishReadFmSmTransition */
typedef struct sPduR_FinishReadFmSmTransitionType
{
  PduR_FinishReadFctPtrType FctPtrOfFinishReadFmSmTransition;
} PduR_FinishReadFmSmTransitionType;

/**   \brief  type used in PduR_FinishReceptionRmSmTransition */
typedef struct sPduR_FinishReceptionRmSmTransitionType
{
  PduR_FinishReceptionFctPtrType FctPtrOfFinishReceptionRmSmTransition;
} PduR_FinishReceptionRmSmTransitionType;

/**   \brief  type used in PduR_FinishTransmissionRmSmTransition */
typedef struct sPduR_FinishTransmissionRmSmTransitionType
{
  PduR_FinishTransmissionFctPtrType FctPtrOfFinishTransmissionRmSmTransition;
} PduR_FinishTransmissionRmSmTransitionType;

/**   \brief  type used in PduR_FinishWriteFmSmTransition */
typedef struct sPduR_FinishWriteFmSmTransitionType
{
  PduR_FinishWriteFctPtrType FctPtrOfFinishWriteFmSmTransition;
} PduR_FinishWriteFmSmTransitionType;

/**   \brief  type used in PduR_FmFifoElementRam */
typedef struct sPduR_FmFifoElementRamType
{
  PduR_RmDestRomIdxOfFmFifoElementRamType RmDestRomIdxOfFmFifoElementRam;  /**< the index of the 0:1 relation pointing to PduR_RmDestRom */
  PduR_BmTxBufferRomIdxOfFmFifoElementRamType BmTxBufferRomIdxOfFmFifoElementRam;  /**< the index of the 0:1 relation pointing to PduR_BmTxBufferRom */
  PduR_DedicatedTxBufferOfFmFifoElementRamType DedicatedTxBufferOfFmFifoElementRam;  /**< TRUE if a routing has a dedicate Tx Buffer and the Tx Buffer is not shared with an other routing */
  PduR_StateOfFmFifoElementRamType StateOfFmFifoElementRam;  /**< Fifo Manager state machine state */
} PduR_FmFifoElementRamType;

/**   \brief  type used in PduR_FmFifoInstanceRam */
typedef struct sPduR_FmFifoInstanceRamType
{
  PduR_BmTxBufferInstanceRomIdxOfFmFifoInstanceRamType BmTxBufferInstanceRomIdxOfFmFifoInstanceRam;  /**< the index of the 0:1 relation pointing to PduR_BmTxBufferInstanceRom */
} PduR_FmFifoInstanceRamType;

/**   \brief  type used in PduR_FmFifoInstanceRom */
typedef struct sPduR_FmFifoInstanceRomType
{
  PduR_FmFifoRomIdxOfFmFifoInstanceRomType FmFifoRomIdxOfFmFifoInstanceRom;  /**< the index of the 1:1 relation pointing to PduR_FmFifoRom */
} PduR_FmFifoInstanceRomType;

/**   \brief  type used in PduR_FmFifoRam */
typedef struct sPduR_FmFifoRamType
{
  PduR_FillLevelOfFmFifoRamType FillLevelOfFmFifoRam;  /**< Fill level of the FIFO queue */
  PduR_FmFifoElementRamReadIdxOfFmFifoRamType FmFifoElementRamReadIdxOfFmFifoRam;  /**< the index of the 0:1 relation pointing to PduR_FmFifoElementRam */
  PduR_FmFifoElementRamWriteIdxOfFmFifoRamType FmFifoElementRamWriteIdxOfFmFifoRam;  /**< the index of the 0:1 relation pointing to PduR_FmFifoElementRam */
  PduR_TpTxSmStateOfFmFifoRamType TpTxSmStateOfFmFifoRam;  /**< Tp Tx state */
  PduR_RmDestRomLengthOfRmSrcRomType PendingConfirmationsOfFmFifoRam;  /**< Number of pending Tx Confirmations of all possible destinations. */
} PduR_FmFifoRamType;

/**   \brief  type used in PduR_FmFifoRom */
typedef struct sPduR_FmFifoRomType
{
  PduR_FmFifoElementRamEndIdxOfFmFifoRomType FmFifoElementRamEndIdxOfFmFifoRom;  /**< the end index of the 1:n relation pointing to PduR_FmFifoElementRam */
  PduR_FmFifoElementRamStartIdxOfFmFifoRomType FmFifoElementRamStartIdxOfFmFifoRom;  /**< the start index of the 1:n relation pointing to PduR_FmFifoElementRam */
} PduR_FmFifoRomType;

/**   \brief  type used in PduR_IfRoutingStateTable */
typedef struct sPduR_IfRoutingStateTableType
{
  PduR_NextState_For_Init_If_Routing_StateOfIfRoutingStateTableType NextState_For_Init_If_Routing_StateOfIfRoutingStateTable;
  PduR_NextState_For_Wait_For_RxIndicationOfIfRoutingStateTableType NextState_For_Wait_For_RxIndicationOfIfRoutingStateTable;
  PduR_NextState_For_Wait_For_TriggerTransmitOfIfRoutingStateTableType NextState_For_Wait_For_TriggerTransmitOfIfRoutingStateTable;
  PduR_NextState_For_Wait_For_TxConfirmationOfIfRoutingStateTableType NextState_For_Wait_For_TxConfirmationOfIfRoutingStateTable;
} PduR_IfRoutingStateTableType;

/**   \brief  type used in PduR_MmRom */
typedef struct sPduR_MmRomType
{
  PduR_MaskedBitsOfMmRomType MaskedBitsOfMmRom;  /**< contains bitcoded the boolean data of PduR_IfCancelTransmitSupportedOfMmRom, PduR_LoIfOfMmRom, PduR_LoTpOfMmRom, PduR_TpCancelTransmitSupportedOfMmRom, PduR_UpIfOfMmRom, PduR_UpTpOfMmRom */
  PduR_CancelTransmitFctPtrType LoIfCancelTransmitFctPtrOfMmRom;  /**< Lower layer cancel transmit function pointers. */
  PduR_CancelTransmitFctPtrType LoTpCancelTransmitFctPtrOfMmRom;  /**< Lower layer cancel transmit function pointers. */
  PduR_CopyRxDataFctPtrType UpTpCopyRxDataFctPtrOfMmRom;  /**< Transport protocol CopyRxData function pointers */
  PduR_CopyTxDataFctPtrType UpTpCopyTxDataFctPtrOfMmRom;  /**< Transport protocol CopyTxData function pointers */
  PduR_IfRxIndicationType UpIfRxIndicationFctPtrOfMmRom;  /**< Upper layer communication interface Rx indication function pointers. */
  PduR_IfTxConfirmationFctPtrType UpIfTxConfirmationFctPtrOfMmRom;  /**< Upper layer communication interface Tx confimation function pointers */
  PduR_StartOfReceptionFctPtrType UpTpStartOfReceptionFctPtrOfMmRom;  /**< Transport protocol StartOfReception function pointers */
  PduR_TpRxIndicationFctPtrType UpTpTpRxIndicationFctPtrOfMmRom;  /**< Transport protocol TpRxIndication function pointers */
  PduR_TpTxConfirmationFctPtrType UpTpTpTxConfirmationFctPtrOfMmRom;  /**< Transport protocol TpTxConfimation function pointers */
  PduR_TransmitFctPtrType LoIfTransmitFctPtrOfMmRom;  /**< Lower layer If transmit function pointers */
  PduR_TransmitFctPtrType LoTpTransmitFctPtrOfMmRom;  /**< Lower layer Tp transmit function pointers */
  PduR_TriggerTransmitFctPtrType UpIfTriggerTransmitFctPtrOfMmRom;  /**< Upper layer trigger transmit function pointers */
} PduR_MmRomType;

/**   \brief  type used in PduR_RmBufferedTpPropertiesRam */
typedef struct sPduR_RmBufferedTpPropertiesRamType
{
  PduR_FmFifoElementRamIdxOfRmBufferedTpPropertiesRamType FmFifoElementRamIdxOfRmBufferedTpPropertiesRam;  /**< the index of the 0:1 relation pointing to PduR_FmFifoElementRam */
  PduR_TpRxSmStateOfRmBufferedTpPropertiesRamType TpRxSmStateOfRmBufferedTpPropertiesRam;  /**< Tp source instance state */
} PduR_RmBufferedTpPropertiesRamType;

/**   \brief  type used in PduR_RmBufferedTpPropertiesRom */
typedef struct sPduR_RmBufferedTpPropertiesRomType
{
  PduR_BmTxBufferIndRomLengthOfRmBufferedTpPropertiesRomType BmTxBufferIndRomLengthOfRmBufferedTpPropertiesRom;  /**< the number of relations pointing to PduR_BmTxBufferIndRom */
  PduR_BmTxBufferIndRomStartIdxOfRmBufferedTpPropertiesRomType BmTxBufferIndRomStartIdxOfRmBufferedTpPropertiesRom;  /**< the start index of the 1:n relation pointing to PduR_BmTxBufferIndRom */
  PduR_FmFifoRomIdxOfRmBufferedTpPropertiesRomType FmFifoRomIdxOfRmBufferedTpPropertiesRom;  /**< the index of the 1:1 relation pointing to PduR_FmFifoRom */
  PduR_TpThresholdOfRmBufferedTpPropertiesRomType TpThresholdOfRmBufferedTpPropertiesRom;  /**< TP threshold value */
} PduR_RmBufferedTpPropertiesRomType;

/**   \brief  type used in PduR_RmDestRom */
typedef struct sPduR_RmDestRomType
{
  PduR_RmGDestRomIdxOfRmDestRomType RmGDestRomIdxOfRmDestRom;  /**< the index of the 1:1 relation pointing to PduR_RmGDestRom */
  PduR_RmSrcRomIdxOfRmDestRomType RmSrcRomIdxOfRmDestRom;  /**< the index of the 1:1 relation pointing to PduR_RmSrcRom */
  PduR_DirectionOfRmDestRomType DirectionOfRmDestRom;  /**< Direction of this Pdu: Rx or Tx */
  PduR_RoutingTypeOfRmDestRomType RoutingTypeOfRmDestRom;  /**< Type of the Routing (API Forwarding, Gateway). */
} PduR_RmDestRomType;

/**   \brief  type used in PduR_RmGDestRom */
typedef struct sPduR_RmGDestRomType
{
  PduR_RmDestRomIdxOfRmGDestRomType RmDestRomIdxOfRmGDestRom;  /**< the index of the 0:1 relation pointing to PduR_RmDestRom */
  PduR_DestHndOfRmGDestRomType DestHndOfRmGDestRom;  /**< handle to be used as parameter for the StartOfReception, CopyRxData, Transmit or RxIndication function call. */
  PduR_FmFifoInstanceRomIdxOfRmGDestRomType FmFifoInstanceRomIdxOfRmGDestRom;  /**< the index of the 0:1 relation pointing to PduR_FmFifoInstanceRom */
  PduR_MaskedBitsOfRmGDestRomType MaskedBitsOfRmGDestRom;  /**< contains bitcoded the boolean data of PduR_FmFifoInstanceRomUsedOfRmGDestRom, PduR_RmDestRomUsedOfRmGDestRom, PduR_RmGDestTpTxStateRamUsedOfRmGDestRom */
  PduR_MmRomIdxOfRmGDestRomType MmRomIdxOfRmGDestRom;  /**< the index of the 1:1 relation pointing to PduR_MmRom */
  PduR_PduRDestPduProcessingOfRmGDestRomType PduRDestPduProcessingOfRmGDestRom;  /**< Is Processing Type of destination PDU. */
  PduR_RmGDestTpTxStateRamIdxOfRmGDestRomType RmGDestTpTxStateRamIdxOfRmGDestRom;  /**< the index of the 0:1 relation pointing to PduR_RmGDestTpTxStateRam */
} PduR_RmGDestRomType;

/**   \brief  type used in PduR_RmGDestTpTxStateRam */
typedef struct sPduR_RmGDestTpTxStateRamType
{
  PduR_TpTxInstSmStateOfRmGDestTpTxStateRamType TpTxInstSmStateOfRmGDestTpTxStateRam;  /**< Tp dest instance state */
} PduR_RmGDestTpTxStateRamType;

/**   \brief  type used in PduR_RmSrcRom */
typedef struct sPduR_RmSrcRomType
{
  PduR_RmDestRomEndIdxOfRmSrcRomType RmDestRomEndIdxOfRmSrcRom;  /**< the end index of the 1:n relation pointing to PduR_RmDestRom */
  PduR_RmDestRomStartIdxOfRmSrcRomType RmDestRomStartIdxOfRmSrcRom;  /**< the start index of the 1:n relation pointing to PduR_RmDestRom */
  PduR_MaskedBitsOfRmSrcRomType MaskedBitsOfRmSrcRom;  /**< contains bitcoded the boolean data of PduR_RmBufferedTpPropertiesRomUsedOfRmSrcRom, PduR_TriggerTransmitSupportedOfRmSrcRom, PduR_TxConfirmationSupportedOfRmSrcRom */
  PduR_MmRomIdxOfRmSrcRomType MmRomIdxOfRmSrcRom;  /**< the index of the 1:1 relation pointing to PduR_MmRom */
  PduR_RmBufferedTpPropertiesRomIdxOfRmSrcRomType RmBufferedTpPropertiesRomIdxOfRmSrcRom;  /**< the index of the 0:1 relation pointing to PduR_RmBufferedTpPropertiesRom */
  PduR_SrcHndOfRmSrcRomType SrcHndOfRmSrcRom;  /**< handle to be used as parameter for the TxConfirmation or TriggerTransmit function call. */
} PduR_RmSrcRomType;

/**   \brief  type used in PduR_RxIf2Dest */
typedef struct sPduR_RxIf2DestType
{
  PduR_RmSrcRomIdxOfRxIf2DestType RmSrcRomIdxOfRxIf2Dest;  /**< the index of the 1:1 relation pointing to PduR_RmSrcRom */
} PduR_RxIf2DestType;

/**   \brief  type used in PduR_RxTp2Dest */
typedef struct sPduR_RxTp2DestType
{
  PduR_RmSrcRomIdxOfRxTp2DestType RmSrcRomIdxOfRxTp2Dest;  /**< the index of the 0:1 relation pointing to PduR_RmSrcRom */
} PduR_RxTp2DestType;

/**   \brief  type used in PduR_StartOfReceptionRxSmTransition */
typedef struct sPduR_StartOfReceptionRxSmTransitionType
{
  PduR_StartOfReceptionFifoSmFctPtrType FctPtrOfStartOfReceptionRxSmTransition;
} PduR_StartOfReceptionRxSmTransitionType;

/**   \brief  type used in PduR_TpActivateNextFifoSmTransition */
typedef struct sPduR_TpActivateNextFifoSmTransitionType
{
  PduR_ActivateNextFctPtrType FctPtrOfTpActivateNextFifoSmTransition;
} PduR_TpActivateNextFifoSmTransitionType;

/**   \brief  type used in PduR_TpActivateReadFifoSmTransition */
typedef struct sPduR_TpActivateReadFifoSmTransitionType
{
  PduR_ActivateReadFctPtrType FctPtrOfTpActivateReadFifoSmTransition;
} PduR_TpActivateReadFifoSmTransitionType;

/**   \brief  type used in PduR_TpActivateWriteFifoSmTransition */
typedef struct sPduR_TpActivateWriteFifoSmTransitionType
{
  PduR_ActivateWriteFctPtrType FctPtrOfTpActivateWriteFifoSmTransition;
} PduR_TpActivateWriteFifoSmTransitionType;

/**   \brief  type used in PduR_TpCancelReceiveFifoSmTransition */
typedef struct sPduR_TpCancelReceiveFifoSmTransitionType
{
  PduR_TpCancelReceiveFctPtrType FctPtrOfTpCancelReceiveFifoSmTransition;
} PduR_TpCancelReceiveFifoSmTransitionType;

/**   \brief  type used in PduR_TpCancelTransmitTxInstSmTransition */
typedef struct sPduR_TpCancelTransmitTxInstSmTransitionType
{
  PduR_TpCancelTransmitFctPtrType FctPtrOfTpCancelTransmitTxInstSmTransition;
} PduR_TpCancelTransmitTxInstSmTransitionType;

/**   \brief  type used in PduR_TpCheckReady2TransmitRmSmTransition */
typedef struct sPduR_TpCheckReady2TransmitRmSmTransitionType
{
  PduR_CheckReady2TransmitFctPtrType FctPtrOfTpCheckReady2TransmitRmSmTransition;
} PduR_TpCheckReady2TransmitRmSmTransitionType;

/**   \brief  type used in PduR_TpRxIndicationRxSmTransition */
typedef struct sPduR_TpRxIndicationRxSmTransitionType
{
  PduR_TpRxIndicationFifoSmFctPtrType FctPtrOfTpRxIndicationRxSmTransition;
} PduR_TpRxIndicationRxSmTransitionType;

/**   \brief  type used in PduR_TpTriggerTransmitTxInstSmTransition */
typedef struct sPduR_TpTriggerTransmitTxInstSmTransitionType
{
  PduR_TpTriggerTransmitFctPtrType FctPtrOfTpTriggerTransmitTxInstSmTransition;
} PduR_TpTriggerTransmitTxInstSmTransitionType;

/**   \brief  type used in PduR_TpTxConfirmationTxSmTransition */
typedef struct sPduR_TpTxConfirmationTxSmTransitionType
{
  PduR_TpTxConfirmationFifoSmFctPtrType FctPtrOfTpTxConfirmationTxSmTransition;
} PduR_TpTxConfirmationTxSmTransitionType;

/**   \brief  type used in PduR_Tx2Lo */
typedef struct sPduR_Tx2LoType
{
  PduR_RmSrcRomIdxOfTx2LoType RmSrcRomIdxOfTx2Lo;  /**< the index of the 0:1 relation pointing to PduR_RmSrcRom */
  PduR_MaskedBitsOfTx2LoType MaskedBitsOfTx2Lo;  /**< contains bitcoded the boolean data of PduR_CancelTransmitUsedOfTx2Lo, PduR_RmSrcRomUsedOfTx2Lo */
  PduR_RmTransmitFctPtrIdxOfTx2LoType RmTransmitFctPtrIdxOfTx2Lo;  /**< the index of the 1:1 relation pointing to PduR_RmTransmitFctPtr */
} PduR_Tx2LoType;

/**   \brief  type used in PduR_TxIf2Up */
typedef struct sPduR_TxIf2UpType
{
  PduR_RmGDestRomIdxOfTxIf2UpType RmGDestRomIdxOfTxIf2Up;  /**< the index of the 1:1 relation pointing to PduR_RmGDestRom */
  PduR_TxConfirmationUsedOfTxIf2UpType TxConfirmationUsedOfTxIf2Up;  /**< True, if the any of the source PduRDestPdus use a TxConfirmation. */
} PduR_TxIf2UpType;

/**   \brief  type used in PduR_TxTp2Src */
typedef struct sPduR_TxTp2SrcType
{
  PduR_RmGDestRomIdxOfTxTp2SrcType RmGDestRomIdxOfTxTp2Src;  /**< the index of the 1:1 relation pointing to PduR_RmGDestRom */
} PduR_TxTp2SrcType;

/** 
  \}
*/ 

/** 
  \defgroup  PduRPCSymbolicStructTypes  PduR Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to PduR_BmTxBufferArrayRam */
typedef struct PduR_BmTxBufferArrayRamStructSTag
{
  PduR_BmTxBufferArrayRamType PduRTxBuffer[32];
  PduR_BmTxBufferArrayRamType PduRTxBuffer_1[32];
  PduR_BmTxBufferArrayRamType PduRTxBuffer_2[32];
  PduR_BmTxBufferArrayRamType PduRTxBuffer_3[32];
} PduR_BmTxBufferArrayRamStructSType;

/**   \brief  type to be used as symbolic data element access to PduR_BmTxBufferInstanceRam */
typedef struct PduR_BmTxBufferInstanceRamStructSTag
{
  PduR_BmTxBufferInstanceRamType PduRTxBuffer[3];
  PduR_BmTxBufferInstanceRamType PduRTxBuffer_1[3];
  PduR_BmTxBufferInstanceRamType PduRTxBuffer_2[3];
  PduR_BmTxBufferInstanceRamType PduRTxBuffer_3[3];
} PduR_BmTxBufferInstanceRamStructSType;

/**   \brief  type to be used as symbolic data element access to PduR_BmTxBufferRam */
typedef struct PduR_BmTxBufferRamStructSTag
{
  PduR_BmTxBufferRamType PduRTxBuffer[1];
  PduR_BmTxBufferRamType PduRTxBuffer_1[1];
  PduR_BmTxBufferRamType PduRTxBuffer_2[1];
  PduR_BmTxBufferRamType PduRTxBuffer_3[1];
} PduR_BmTxBufferRamStructSType;

/**   \brief  type to be used as symbolic data element access to PduR_FmFifoInstanceRam */
typedef struct PduR_FmFifoInstanceRamStructSTag
{
  PduR_FmFifoInstanceRamType PhysDiagRespMsg_F2_A2_BB2_oBackbone2_3cccad73_Tx[1];
  PduR_FmFifoInstanceRamType PhysDiagReqMsg_A0_F2_Sec_oSecuritySubnet_821cf5f0_Tx[1];
  PduR_FmFifoInstanceRamType PhysDiagReqMsg_98_F2_Cab_oCabSubnet_842fd26e_Tx[1];
  PduR_FmFifoInstanceRamType PhysDiagReqMsg_53_F2_Cab_oCabSubnet_862857f1_Tx[1];
  PduR_FmFifoInstanceRamType PhysDiagRespMsg_F2_A1_BB2_oBackbone2_b71f936a_Tx[1];
  PduR_FmFifoInstanceRamType PhysDiagRespMsg_F2_98_BB2_oBackbone2_0931b1de_Tx[1];
  PduR_FmFifoInstanceRamType DiagRespMsgIntTGW2_F4_A0_BB2_oBackbone2_5d078c5b_Tx[1];
  PduR_FmFifoInstanceRamType DiagReqMsgIntHMIIOM_A1_F3_Sec_oSecuritySubnet_06e2b6e6_Tx[1];
  PduR_FmFifoInstanceRamType PhysDiagRespMsg_F2_53_BB2_oBackbone2_0057c77b_Tx[1];
  PduR_FmFifoInstanceRamType PhysDiagRespMsg_F2_26_BB2_oBackbone2_1be3a078_Tx[1];
  PduR_FmFifoInstanceRamType DiagRespMsgIntHMIIOM_F3_A0_BB2_oBackbone2_91123731_Tx[1];
  PduR_FmFifoInstanceRamType DiagReqMsgIntHMIIOM_C0_F3_Sec_oSecuritySubnet_fe92025d_Tx[1];
  PduR_FmFifoInstanceRamType DiagReqMsgIntTGW2_A0_F4_Sec_oSecuritySubnet_c9e0207f_Tx[1];
  PduR_FmFifoInstanceRamType DiagRespMsgIntHMIIOM_F3_A2_BB2_oBackbone2_d55f1ee0_Tx[1];
  PduR_FmFifoInstanceRamType PhysDiagRespMsg_F1_53_BB2_oBackbone2_4dbfc71c_Tx[1];
  PduR_FmFifoInstanceRamType DiagRespMsgIntHMIIOM_F3_53_BB2_oBackbone2_e9c474e8_Tx[1];
  PduR_FmFifoInstanceRamType DiagReqMsgIntHMIIOM_A2_F3_Cab_oCabSubnet_bf1d0d5b_Tx[1];
  PduR_FmFifoInstanceRamType DiagReqMsgIntTGW2_53_F4_Cab_oCabSubnet_878411a3_Tx[1];
  PduR_FmFifoInstanceRamType DiagReqMsgIntTGW2_98_F4_Cab_oCabSubnet_8583943c_Tx[1];
  PduR_FmFifoInstanceRamType DiagRespMsgIntHMIIOM_F3_98_BB2_oBackbone2_e0a2024d_Tx[1];
  PduR_FmFifoInstanceRamType DiagReqMsgIntHMIIOM_26_F3_Cab_oCabSubnet_ad37a189_Tx[1];
  PduR_FmFifoInstanceRamType DiagRespMsgIntHMIIOM_F3_26_BB2_oBackbone2_f27013eb_Tx[1];
  PduR_FmFifoInstanceRamType PhysDiagRespMsg_F2_C0_BB2_oBackbone2_89112bc9_Tx[1];
  PduR_FmFifoInstanceRamType TesterFuncDiagMsg_BB2_oBackbone2_7fc3ea4b_Rx[1];
  PduR_FmFifoInstanceRamType TesterFuncDiagMsg_Cab_oCabSubnet_766a0d5a_Tx[1];
  PduR_FmFifoInstanceRamType TesterFuncDiagMsg_Sec_oSecuritySubnet_50e2aa6d_Tx[1];
  PduR_FmFifoInstanceRamType PhysDiagRespMsg_F2_A0_BB2_oBackbone2_788184a2_Tx[1];
  PduR_FmFifoInstanceRamType PhysDiagReqMsg_C0_F2_Sec_oSecuritySubnet_47ddad97_Tx[1];
  PduR_FmFifoInstanceRamType DiagRespMsgIntTGW2_F4_A1_BB2_oBackbone2_92999b93_Tx[1];
  PduR_FmFifoInstanceRamType DiagReqMsgIntTGW2_26_F4_Cab_oCabSubnet_63722514_Tx[1];
  PduR_FmFifoInstanceRamType DiagReqMsgIntHMIIOM_53_F3_Cab_oCabSubnet_49c1953e_Tx[1];
  PduR_FmFifoInstanceRamType DiagReqMsgIntHMIIOM_98_F3_Cab_oCabSubnet_4bc610a1_Tx[1];
  PduR_FmFifoInstanceRamType PhysDiagReqMsg_A1_F2_Sec_oSecuritySubnet_bfad192c_Tx[1];
  PduR_FmFifoInstanceRamType DiagRespMsgIntHMIIOM_F3_A1_BB2_oBackbone2_5e8c20f9_Tx[1];
  PduR_FmFifoInstanceRamType DiagReqMsgIntTGW2_A2_F4_Cab_oCabSubnet_715889c6_Tx[1];
  PduR_FmFifoInstanceRamType DiagReqMsgIntHMIIOM_A0_F3_Sec_oSecuritySubnet_3b535a3a_Tx[1];
  PduR_FmFifoInstanceRamType PhysDiagReqMsg_53_F1_Cab_oCabSubnet_0dfb69e8_Tx[1];
  PduR_FmFifoInstanceRamType DiagReqMsgIntTGW2_C0_F4_Sec_oSecuritySubnet_0c217818_Tx[1];
  PduR_FmFifoInstanceRamType DiagRespMsgIntTGW2_F4_53_BB2_oBackbone2_25d1cf82_Tx[1];
  PduR_FmFifoInstanceRamType PhysDiagReqMsg_26_F2_Cab_oCabSubnet_62de6346_Tx[1];
  PduR_FmFifoInstanceRamType DiagRespMsgIntHMIIOM_F3_C0_BB2_oBackbone2_6082985a_Tx[1];
  PduR_FmFifoInstanceRamType DiagRespMsgIntTGW2_F4_98_BB2_oBackbone2_2cb7b927_Tx[1];
  PduR_FmFifoInstanceRamType DiagReqMsgIntTGW2_A1_F4_Sec_oSecuritySubnet_f451cca3_Tx[1];
  PduR_FmFifoInstanceRamType PhysDiagReqMsg_A2_F2_Cab_oCabSubnet_70f4cf94_Tx[1];
  PduR_FmFifoInstanceRamType IntTesterTGW2FuncDiagMsg_BB2_oBackbone2_5e7bda8e_Rx[1];
  PduR_FmFifoInstanceRamType IntTesterTGW2FuncDiagMsg_Cab_oCabSubnet_302595ad_Tx[1];
  PduR_FmFifoInstanceRamType IntTesterTGW2FuncDiagMsg_Sec_oSecuritySubnet_04594da9_Tx[1];
  PduR_FmFifoInstanceRamType DiagRespMsgIntTGW2_F4_C0_BB2_oBackbone2_ac972330_Tx[1];
  PduR_FmFifoInstanceRamType DiagRespMsgIntTGW2_F4_26_BB2_oBackbone2_3e65a881_Tx[1];
  PduR_FmFifoInstanceRamType DiagRespMsgIntTGW2_F4_A2_BB2_oBackbone2_194aa58a_Tx[1];
} PduR_FmFifoInstanceRamStructSType;

/**   \brief  type to be used as symbolic data element access to PduR_RmBufferedTpPropertiesRam */
typedef struct PduR_RmBufferedTpPropertiesRamStructSTag
{
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_01528206[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_064dc9ab[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_1ac6f203[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_1b947dce[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_246f1e3b[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_25a59123[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_266542d7[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_2e6f76ae[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_304f257a[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_30b4cd32[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_39fe25b5[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_3c553d77[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_446f53c1[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_5cfa406e[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_62ae1653[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_63947842[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_6ea67099[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_71b786d1[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_8259d96a[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_86e04d33[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_89263a8e[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_8c488735[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_99e30330[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_9e5d6760[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_a40032de[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_ac4babc0[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_b18fc6c3[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_b4b812c0[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_b9d033d4[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_bbc023c9[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_bd1ce89a[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_bfda77cf[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_c050dec8[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_c0680d6c[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_c28e0d5d[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_c6acd63d[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_ccea7767[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_cd1487f2[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_d91d7573[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_d9d30309[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_da0a8dca[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_df9a30f3[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_dfacef7f[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_ea4e2140[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_f1553bf5[1];
  PduR_RmBufferedTpPropertiesRamType PduRSrcPdu_ff6a6468[1];
} PduR_RmBufferedTpPropertiesRamStructSType;

/**   \brief  type to be used as symbolic data element access to PduR_RmGDestTpTxStateRam */
typedef struct PduR_RmGDestTpTxStateRamStructSTag
{
  PduR_RmGDestTpTxStateRamType DiagReqMsgIntHMIIOM_26_F3_Cab_oCabSubnet_ad37a189_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagReqMsgIntHMIIOM_53_F3_Cab_oCabSubnet_49c1953e_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagReqMsgIntHMIIOM_98_F3_Cab_oCabSubnet_4bc610a1_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagReqMsgIntHMIIOM_A0_F3_Sec_oSecuritySubnet_3b535a3a_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagReqMsgIntHMIIOM_A1_F3_Sec_oSecuritySubnet_06e2b6e6_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagReqMsgIntHMIIOM_A2_F3_Cab_oCabSubnet_bf1d0d5b_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagReqMsgIntHMIIOM_C0_F3_Sec_oSecuritySubnet_fe92025d_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagReqMsgIntTGW2_26_F4_Cab_oCabSubnet_63722514_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagReqMsgIntTGW2_53_F4_Cab_oCabSubnet_878411a3_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagReqMsgIntTGW2_98_F4_Cab_oCabSubnet_8583943c_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagReqMsgIntTGW2_A0_F4_Sec_oSecuritySubnet_c9e0207f_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagReqMsgIntTGW2_A1_F4_Sec_oSecuritySubnet_f451cca3_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagReqMsgIntTGW2_A2_F4_Cab_oCabSubnet_715889c6_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagReqMsgIntTGW2_C0_F4_Sec_oSecuritySubnet_0c217818_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagRespMsgIntHMIIOM_F3_26_BB2_oBackbone2_f27013eb_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagRespMsgIntHMIIOM_F3_53_BB2_oBackbone2_e9c474e8_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagRespMsgIntHMIIOM_F3_98_BB2_oBackbone2_e0a2024d_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagRespMsgIntHMIIOM_F3_A0_BB2_oBackbone2_91123731_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagRespMsgIntHMIIOM_F3_A1_BB2_oBackbone2_5e8c20f9_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagRespMsgIntHMIIOM_F3_A2_BB2_oBackbone2_d55f1ee0_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagRespMsgIntHMIIOM_F3_C0_BB2_oBackbone2_6082985a_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagRespMsgIntTGW2_F4_26_BB2_oBackbone2_3e65a881_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagRespMsgIntTGW2_F4_53_BB2_oBackbone2_25d1cf82_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagRespMsgIntTGW2_F4_98_BB2_oBackbone2_2cb7b927_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagRespMsgIntTGW2_F4_A0_BB2_oBackbone2_5d078c5b_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagRespMsgIntTGW2_F4_A1_BB2_oBackbone2_92999b93_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagRespMsgIntTGW2_F4_A2_BB2_oBackbone2_194aa58a_Tx[1];
  PduR_RmGDestTpTxStateRamType DiagRespMsgIntTGW2_F4_C0_BB2_oBackbone2_ac972330_Tx[1];
  PduR_RmGDestTpTxStateRamType IntTesterTGW2FuncDiagMsg_BB2_oBackbone2_5e7bda8e_Rx[1];
  PduR_RmGDestTpTxStateRamType IntTesterTGW2FuncDiagMsg_Cab_oCabSubnet_302595ad_Tx[1];
  PduR_RmGDestTpTxStateRamType IntTesterTGW2FuncDiagMsg_Sec_oSecuritySubnet_04594da9_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagReqMsg_26_F2_Cab_oCabSubnet_62de6346_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagReqMsg_53_F1_Cab_oCabSubnet_0dfb69e8_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagReqMsg_53_F2_Cab_oCabSubnet_862857f1_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagReqMsg_98_F2_Cab_oCabSubnet_842fd26e_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagReqMsg_A0_F2_Sec_oSecuritySubnet_821cf5f0_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagReqMsg_A1_F2_Sec_oSecuritySubnet_bfad192c_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagReqMsg_A2_F2_Cab_oCabSubnet_70f4cf94_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagReqMsg_C0_F2_Sec_oSecuritySubnet_47ddad97_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagRespMsg_F1_53_BB2_oBackbone2_4dbfc71c_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagRespMsg_F2_26_BB2_oBackbone2_1be3a078_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagRespMsg_F2_53_BB2_oBackbone2_0057c77b_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagRespMsg_F2_98_BB2_oBackbone2_0931b1de_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagRespMsg_F2_A0_BB2_oBackbone2_788184a2_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagRespMsg_F2_A1_BB2_oBackbone2_b71f936a_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagRespMsg_F2_A2_BB2_oBackbone2_3cccad73_Tx[1];
  PduR_RmGDestTpTxStateRamType PhysDiagRespMsg_F2_C0_BB2_oBackbone2_89112bc9_Tx[1];
  PduR_RmGDestTpTxStateRamType TesterFuncDiagMsg_BB2_oBackbone2_7fc3ea4b_Rx[1];
  PduR_RmGDestTpTxStateRamType TesterFuncDiagMsg_Cab_oCabSubnet_766a0d5a_Tx[1];
  PduR_RmGDestTpTxStateRamType TesterFuncDiagMsg_Sec_oSecuritySubnet_50e2aa6d_Tx[1];
} PduR_RmGDestTpTxStateRamStructSType;

/** 
  \}
*/ 

/** 
  \defgroup  PduRPCUnionIndexAndSymbolTypes  PduR Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access PduR_BmTxBufferArrayRam in an index and symbol based style. */
typedef union PduR_BmTxBufferArrayRamUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  PduR_BmTxBufferArrayRamType raw[128];
  PduR_BmTxBufferArrayRamStructSType str;
} PduR_BmTxBufferArrayRamUType;

/**   \brief  type to access PduR_BmTxBufferInstanceRam in an index and symbol based style. */
typedef union PduR_BmTxBufferInstanceRamUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  PduR_BmTxBufferInstanceRamType raw[12];
  PduR_BmTxBufferInstanceRamStructSType str;
} PduR_BmTxBufferInstanceRamUType;

/**   \brief  type to access PduR_BmTxBufferRam in an index and symbol based style. */
typedef union PduR_BmTxBufferRamUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  PduR_BmTxBufferRamType raw[4];
  PduR_BmTxBufferRamStructSType str;
} PduR_BmTxBufferRamUType;

/**   \brief  type to access PduR_FmFifoInstanceRam in an index and symbol based style. */
typedef union PduR_FmFifoInstanceRamUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  PduR_FmFifoInstanceRamType raw[50];
  PduR_FmFifoInstanceRamStructSType str;
} PduR_FmFifoInstanceRamUType;

/**   \brief  type to access PduR_RmBufferedTpPropertiesRam in an index and symbol based style. */
typedef union PduR_RmBufferedTpPropertiesRamUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  PduR_RmBufferedTpPropertiesRamType raw[46];
  PduR_RmBufferedTpPropertiesRamStructSType str;
} PduR_RmBufferedTpPropertiesRamUType;

/**   \brief  type to access PduR_RmGDestTpTxStateRam in an index and symbol based style. */
typedef union PduR_RmGDestTpTxStateRamUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  PduR_RmGDestTpTxStateRamType raw[50];
  PduR_RmGDestTpTxStateRamStructSType str;
} PduR_RmGDestTpTxStateRamUType;

/** 
  \}
*/ 

/** 
  \defgroup  PduRPCRootPointerTypes  PduR Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point from the config root to symbol instances.
  \{
*/ 
/**   \brief  type used to point to PduR_BmTxBufferArrayRam */
typedef P2VAR(PduR_BmTxBufferArrayRamType, TYPEDEF, PDUR_VAR_NOINIT) PduR_BmTxBufferArrayRamPtrType;

/**   \brief  type used to point to PduR_BmTxBufferIndRom */
typedef P2CONST(PduR_BmTxBufferIndRomType, TYPEDEF, PDUR_CONST) PduR_BmTxBufferIndRomPtrType;

/**   \brief  type used to point to PduR_BmTxBufferInstanceRam */
typedef P2VAR(PduR_BmTxBufferInstanceRamType, TYPEDEF, PDUR_VAR_NOINIT) PduR_BmTxBufferInstanceRamPtrType;

/**   \brief  type used to point to PduR_BmTxBufferInstanceRom */
typedef P2CONST(PduR_BmTxBufferInstanceRomType, TYPEDEF, PDUR_CONST) PduR_BmTxBufferInstanceRomPtrType;

/**   \brief  type used to point to PduR_BmTxBufferRam */
typedef P2VAR(PduR_BmTxBufferRamType, TYPEDEF, PDUR_VAR_NOINIT) PduR_BmTxBufferRamPtrType;

/**   \brief  type used to point to PduR_BmTxBufferRom */
typedef P2CONST(PduR_BmTxBufferRomType, TYPEDEF, PDUR_CONST) PduR_BmTxBufferRomPtrType;

/**   \brief  type used to point to PduR_CopyRxDataRxSmTransition */
typedef P2CONST(PduR_CopyRxDataRxSmTransitionType, TYPEDEF, PDUR_CONST) PduR_CopyRxDataRxSmTransitionPtrType;

/**   \brief  type used to point to PduR_CopyTxDataTxInstSmTransition */
typedef P2CONST(PduR_CopyTxDataTxInstSmTransitionType, TYPEDEF, PDUR_CONST) PduR_CopyTxDataTxInstSmTransitionPtrType;

/**   \brief  type used to point to PduR_FinishReadFmSmTransition */
typedef P2CONST(PduR_FinishReadFmSmTransitionType, TYPEDEF, PDUR_CONST) PduR_FinishReadFmSmTransitionPtrType;

/**   \brief  type used to point to PduR_FinishReceptionRmSmTransition */
typedef P2CONST(PduR_FinishReceptionRmSmTransitionType, TYPEDEF, PDUR_CONST) PduR_FinishReceptionRmSmTransitionPtrType;

/**   \brief  type used to point to PduR_FinishTransmissionRmSmTransition */
typedef P2CONST(PduR_FinishTransmissionRmSmTransitionType, TYPEDEF, PDUR_CONST) PduR_FinishTransmissionRmSmTransitionPtrType;

/**   \brief  type used to point to PduR_FinishWriteFmSmTransition */
typedef P2CONST(PduR_FinishWriteFmSmTransitionType, TYPEDEF, PDUR_CONST) PduR_FinishWriteFmSmTransitionPtrType;

/**   \brief  type used to point to PduR_FmFifoElementRam */
typedef P2VAR(PduR_FmFifoElementRamType, TYPEDEF, PDUR_VAR_NOINIT) PduR_FmFifoElementRamPtrType;

/**   \brief  type used to point to PduR_FmFifoInstanceRam */
typedef P2VAR(PduR_FmFifoInstanceRamType, TYPEDEF, PDUR_VAR_NOINIT) PduR_FmFifoInstanceRamPtrType;

/**   \brief  type used to point to PduR_FmFifoInstanceRom */
typedef P2CONST(PduR_FmFifoInstanceRomType, TYPEDEF, PDUR_CONST) PduR_FmFifoInstanceRomPtrType;

/**   \brief  type used to point to PduR_FmFifoRam */
typedef P2VAR(PduR_FmFifoRamType, TYPEDEF, PDUR_VAR_NOINIT) PduR_FmFifoRamPtrType;

/**   \brief  type used to point to PduR_FmFifoRom */
typedef P2CONST(PduR_FmFifoRomType, TYPEDEF, PDUR_CONST) PduR_FmFifoRomPtrType;

/**   \brief  type used to point to PduR_IfRoutingStateTable */
typedef P2CONST(PduR_IfRoutingStateTableType, TYPEDEF, PDUR_CONST) PduR_IfRoutingStateTablePtrType;

/**   \brief  type used to point to PduR_Initialized */
typedef P2VAR(PduR_InitializedType, TYPEDEF, PDUR_VAR_ZERO_INIT) PduR_InitializedPtrType;

/**   \brief  type used to point to PduR_MmRom */
typedef P2CONST(PduR_MmRomType, TYPEDEF, PDUR_CONST) PduR_MmRomPtrType;

/**   \brief  type used to point to PduR_RmBufferedTpPropertiesRam */
typedef P2VAR(PduR_RmBufferedTpPropertiesRamType, TYPEDEF, PDUR_VAR_NOINIT) PduR_RmBufferedTpPropertiesRamPtrType;

/**   \brief  type used to point to PduR_RmBufferedTpPropertiesRom */
typedef P2CONST(PduR_RmBufferedTpPropertiesRomType, TYPEDEF, PDUR_CONST) PduR_RmBufferedTpPropertiesRomPtrType;

/**   \brief  type used to point to PduR_RmDestRom */
typedef P2CONST(PduR_RmDestRomType, TYPEDEF, PDUR_CONST) PduR_RmDestRomPtrType;

/**   \brief  type used to point to PduR_RmGDestRom */
typedef P2CONST(PduR_RmGDestRomType, TYPEDEF, PDUR_CONST) PduR_RmGDestRomPtrType;

/**   \brief  type used to point to PduR_RmGDestTpTxStateRam */
typedef P2VAR(PduR_RmGDestTpTxStateRamType, TYPEDEF, PDUR_VAR_NOINIT) PduR_RmGDestTpTxStateRamPtrType;

/**   \brief  type used to point to PduR_RmSrcRom */
typedef P2CONST(PduR_RmSrcRomType, TYPEDEF, PDUR_CONST) PduR_RmSrcRomPtrType;

/**   \brief  type used to point to PduR_RmTransmitFctPtr */
typedef P2CONST(PduR_RmTransmitFctPtrType, TYPEDEF, PDUR_CONST) PduR_RmTransmitFctPtrPtrType;

/**   \brief  type used to point to PduR_RxIf2Dest */
typedef P2CONST(PduR_RxIf2DestType, TYPEDEF, PDUR_CONST) PduR_RxIf2DestPtrType;

/**   \brief  type used to point to PduR_RxTp2Dest */
typedef P2CONST(PduR_RxTp2DestType, TYPEDEF, PDUR_CONST) PduR_RxTp2DestPtrType;

/**   \brief  type used to point to PduR_StartOfReceptionRxSmTransition */
typedef P2CONST(PduR_StartOfReceptionRxSmTransitionType, TYPEDEF, PDUR_CONST) PduR_StartOfReceptionRxSmTransitionPtrType;

/**   \brief  type used to point to PduR_TpActivateNextFifoSmTransition */
typedef P2CONST(PduR_TpActivateNextFifoSmTransitionType, TYPEDEF, PDUR_CONST) PduR_TpActivateNextFifoSmTransitionPtrType;

/**   \brief  type used to point to PduR_TpActivateReadFifoSmTransition */
typedef P2CONST(PduR_TpActivateReadFifoSmTransitionType, TYPEDEF, PDUR_CONST) PduR_TpActivateReadFifoSmTransitionPtrType;

/**   \brief  type used to point to PduR_TpActivateWriteFifoSmTransition */
typedef P2CONST(PduR_TpActivateWriteFifoSmTransitionType, TYPEDEF, PDUR_CONST) PduR_TpActivateWriteFifoSmTransitionPtrType;

/**   \brief  type used to point to PduR_TpCancelReceiveFifoSmTransition */
typedef P2CONST(PduR_TpCancelReceiveFifoSmTransitionType, TYPEDEF, PDUR_CONST) PduR_TpCancelReceiveFifoSmTransitionPtrType;

/**   \brief  type used to point to PduR_TpCancelTransmitTxInstSmTransition */
typedef P2CONST(PduR_TpCancelTransmitTxInstSmTransitionType, TYPEDEF, PDUR_CONST) PduR_TpCancelTransmitTxInstSmTransitionPtrType;

/**   \brief  type used to point to PduR_TpCheckReady2TransmitRmSmTransition */
typedef P2CONST(PduR_TpCheckReady2TransmitRmSmTransitionType, TYPEDEF, PDUR_CONST) PduR_TpCheckReady2TransmitRmSmTransitionPtrType;

/**   \brief  type used to point to PduR_TpRxIndicationRxSmTransition */
typedef P2CONST(PduR_TpRxIndicationRxSmTransitionType, TYPEDEF, PDUR_CONST) PduR_TpRxIndicationRxSmTransitionPtrType;

/**   \brief  type used to point to PduR_TpTriggerTransmitTxInstSmTransition */
typedef P2CONST(PduR_TpTriggerTransmitTxInstSmTransitionType, TYPEDEF, PDUR_CONST) PduR_TpTriggerTransmitTxInstSmTransitionPtrType;

/**   \brief  type used to point to PduR_TpTxConfirmationTxSmTransition */
typedef P2CONST(PduR_TpTxConfirmationTxSmTransitionType, TYPEDEF, PDUR_CONST) PduR_TpTxConfirmationTxSmTransitionPtrType;

/**   \brief  type used to point to PduR_Tx2Lo */
typedef P2CONST(PduR_Tx2LoType, TYPEDEF, PDUR_CONST) PduR_Tx2LoPtrType;

/**   \brief  type used to point to PduR_TxIf2Up */
typedef P2CONST(PduR_TxIf2UpType, TYPEDEF, PDUR_CONST) PduR_TxIf2UpPtrType;

/**   \brief  type used to point to PduR_TxTp2Src */
typedef P2CONST(PduR_TxTp2SrcType, TYPEDEF, PDUR_CONST) PduR_TxTp2SrcPtrType;

/** 
  \}
*/ 

/** 
  \defgroup  PduRPCRootValueTypes  PduR Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in PduR_PCConfig */
typedef struct sPduR_PCConfigType
{
  uint8 PduR_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} PduR_PCConfigType;

typedef PduR_PCConfigType PduR_PBConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
 * GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  PduR_BmTxBufferIndRom
**********************************************************************************************************************/
/** 
  \var    PduR_BmTxBufferIndRom
  \brief  PduR BufferManager TxBuffer Indirection Table
  \details
  Element             Description
  BmTxBufferRomIdx    the index of the 1:1 relation pointing to PduR_BmTxBufferRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_BmTxBufferIndRomType, PDUR_CONST) PduR_BmTxBufferIndRom[184];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_BmTxBufferInstanceRom
**********************************************************************************************************************/
/** 
  \var    PduR_BmTxBufferInstanceRom
  \brief  PduR BufferManager TxBufferInstance Table
  \details
  Element             Description
  BmTxBufferRomIdx    the index of the 1:1 relation pointing to PduR_BmTxBufferRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_BmTxBufferInstanceRomType, PDUR_CONST) PduR_BmTxBufferInstanceRom[12];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_BmTxBufferRom
**********************************************************************************************************************/
/** 
  \var    PduR_BmTxBufferRom
  \brief  PduR BufferManager TxBuffer Table
  \details
  Element                          Description
  BmTxBufferArrayRamLength         the number of relations pointing to PduR_BmTxBufferArrayRam
  BmTxBufferArrayRamStartIdx       the start index of the 1:n relation pointing to PduR_BmTxBufferArrayRam
  BmTxBufferInstanceRomStartIdx    the start index of the 1:n relation pointing to PduR_BmTxBufferInstanceRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_BmTxBufferRomType, PDUR_CONST) PduR_BmTxBufferRom[4];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_CopyRxDataRxSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_CopyRxDataRxSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_CopyRxDataRxSmTransitionType, PDUR_CONST) PduR_CopyRxDataRxSmTransition[3];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_CopyTxDataTxInstSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_CopyTxDataTxInstSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_CopyTxDataTxInstSmTransitionType, PDUR_CONST) PduR_CopyTxDataTxInstSmTransition[3];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_FinishReadFmSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_FinishReadFmSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_FinishReadFmSmTransitionType, PDUR_CONST) PduR_FinishReadFmSmTransition[8];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_FinishReceptionRmSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_FinishReceptionRmSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_FinishReceptionRmSmTransitionType, PDUR_CONST) PduR_FinishReceptionRmSmTransition[5];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_FinishTransmissionRmSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_FinishTransmissionRmSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_FinishTransmissionRmSmTransitionType, PDUR_CONST) PduR_FinishTransmissionRmSmTransition[5];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_FinishWriteFmSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_FinishWriteFmSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_FinishWriteFmSmTransitionType, PDUR_CONST) PduR_FinishWriteFmSmTransition[8];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_FmFifoInstanceRom
**********************************************************************************************************************/
/** 
  \var    PduR_FmFifoInstanceRom
  \brief  Instance of the PduRDestPdus using a single Fifo
  \details
  Element         Description
  FmFifoRomIdx    the index of the 1:1 relation pointing to PduR_FmFifoRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_FmFifoInstanceRomType, PDUR_CONST) PduR_FmFifoInstanceRom[50];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_FmFifoRom
**********************************************************************************************************************/
/** 
  \var    PduR_FmFifoRom
  \brief  PduR FiFoManager Fifo Table
  \details
  Element                     Description
  FmFifoElementRamEndIdx      the end index of the 1:n relation pointing to PduR_FmFifoElementRam
  FmFifoElementRamStartIdx    the start index of the 1:n relation pointing to PduR_FmFifoElementRam
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_FmFifoRomType, PDUR_CONST) PduR_FmFifoRom[46];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_IfRoutingStateTable
**********************************************************************************************************************/
/** 
  \var    PduR_IfRoutingStateTable
  \brief  Contains state transition for Communication Interface routings
  \details
  Element                                   Description
  NextState_For_Init_If_Routing_State   
  NextState_For_Wait_For_RxIndication   
  NextState_For_Wait_For_TriggerTransmit
  NextState_For_Wait_For_TxConfirmation 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_IfRoutingStateTableType, PDUR_CONST) PduR_IfRoutingStateTable[4];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_MmRom
**********************************************************************************************************************/
/** 
  \var    PduR_MmRom
  \brief  Module manager: Contains all function pointers of the bordering modules.
  \details
  Element                       Description
  MaskedBits                    contains bitcoded the boolean data of PduR_IfCancelTransmitSupportedOfMmRom, PduR_LoIfOfMmRom, PduR_LoTpOfMmRom, PduR_TpCancelTransmitSupportedOfMmRom, PduR_UpIfOfMmRom, PduR_UpTpOfMmRom
  LoIfCancelTransmitFctPtr      Lower layer cancel transmit function pointers.
  LoTpCancelTransmitFctPtr      Lower layer cancel transmit function pointers.
  UpTpCopyRxDataFctPtr          Transport protocol CopyRxData function pointers
  UpTpCopyTxDataFctPtr          Transport protocol CopyTxData function pointers
  UpIfRxIndicationFctPtr        Upper layer communication interface Rx indication function pointers.
  UpIfTxConfirmationFctPtr      Upper layer communication interface Tx confimation function pointers
  UpTpStartOfReceptionFctPtr    Transport protocol StartOfReception function pointers
  UpTpTpRxIndicationFctPtr      Transport protocol TpRxIndication function pointers
  UpTpTpTxConfirmationFctPtr    Transport protocol TpTxConfimation function pointers
  LoIfTransmitFctPtr            Lower layer If transmit function pointers
  LoTpTransmitFctPtr            Lower layer Tp transmit function pointers
  UpIfTriggerTransmitFctPtr     Upper layer trigger transmit function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_MmRomType, PDUR_CONST) PduR_MmRom[9];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmBufferedTpPropertiesRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmBufferedTpPropertiesRom
  \brief  PduR RoutiongManager Properties of buffered Tp routing paths.
  \details
  Element                     Description
  BmTxBufferIndRomLength      the number of relations pointing to PduR_BmTxBufferIndRom
  BmTxBufferIndRomStartIdx    the start index of the 1:n relation pointing to PduR_BmTxBufferIndRom
  FmFifoRomIdx                the index of the 1:1 relation pointing to PduR_FmFifoRom
  TpThreshold                 TP threshold value
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_RmBufferedTpPropertiesRomType, PDUR_CONST) PduR_RmBufferedTpPropertiesRom[46];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmDestRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmDestRom
  \brief  PduR RoutiongPathManager destPdu Table
  \details
  Element          Description
  RmGDestRomIdx    the index of the 1:1 relation pointing to PduR_RmGDestRom
  RmSrcRomIdx      the index of the 1:1 relation pointing to PduR_RmSrcRom
  Direction        Direction of this Pdu: Rx or Tx
  RoutingType      Type of the Routing (API Forwarding, Gateway).
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_RmDestRomType, PDUR_CONST) PduR_RmDestRom[467];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmGDestRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmGDestRom
  \brief  PduR RoutiongPathManager global destPdu Table
  \details
  Element                   Description
  RmDestRomIdx              the index of the 0:1 relation pointing to PduR_RmDestRom
  DestHnd                   handle to be used as parameter for the StartOfReception, CopyRxData, Transmit or RxIndication function call.
  FmFifoInstanceRomIdx      the index of the 0:1 relation pointing to PduR_FmFifoInstanceRom
  MaskedBits                contains bitcoded the boolean data of PduR_FmFifoInstanceRomUsedOfRmGDestRom, PduR_RmDestRomUsedOfRmGDestRom, PduR_RmGDestTpTxStateRamUsedOfRmGDestRom
  MmRomIdx                  the index of the 1:1 relation pointing to PduR_MmRom
  PduRDestPduProcessing     Is Processing Type of destination PDU.
  RmGDestTpTxStateRamIdx    the index of the 0:1 relation pointing to PduR_RmGDestTpTxStateRam
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_RmGDestRomType, PDUR_CONST) PduR_RmGDestRom[467];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmSrcRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmSrcRom
  \brief  PduR RoutiongManager SrcPdu Table
  \details
  Element                         Description
  RmDestRomEndIdx                 the end index of the 1:n relation pointing to PduR_RmDestRom
  RmDestRomStartIdx               the start index of the 1:n relation pointing to PduR_RmDestRom
  MaskedBits                      contains bitcoded the boolean data of PduR_RmBufferedTpPropertiesRomUsedOfRmSrcRom, PduR_TriggerTransmitSupportedOfRmSrcRom, PduR_TxConfirmationSupportedOfRmSrcRom
  MmRomIdx                        the index of the 1:1 relation pointing to PduR_MmRom
  RmBufferedTpPropertiesRomIdx    the index of the 0:1 relation pointing to PduR_RmBufferedTpPropertiesRom
  SrcHnd                          handle to be used as parameter for the TxConfirmation or TriggerTransmit function call.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_RmSrcRomType, PDUR_CONST) PduR_RmSrcRom[463];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmTransmitFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_RmTransmitFctPtr
  \brief  Internal routing manager Transmit functions.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_RmTransmitFctPtrType, PDUR_CONST) PduR_RmTransmitFctPtr[2];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RxIf2Dest
**********************************************************************************************************************/
/** 
  \var    PduR_RxIf2Dest
  \brief  This table contains all routing information to perform the Rx handling of an interface routing. Used in the &lt;LLIf&gt;_RxIndication
  \details
  Element        Description
  RmSrcRomIdx    the index of the 1:1 relation pointing to PduR_RmSrcRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_RxIf2DestType, PDUR_CONST) PduR_RxIf2Dest[188];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RxTp2Dest
**********************************************************************************************************************/
/** 
  \var    PduR_RxTp2Dest
  \brief  This table contains all routing information to perform the Rx handling of a Tp Routing. Used in the PduR_&lt;LLTp&gt;_StartOfReception, PduR_&lt;LLTp&gt;_CopyRxData and PduR_&lt;LLTp&gt;_RxIndication.
  \details
  Element        Description
  RmSrcRomIdx    the index of the 0:1 relation pointing to PduR_RmSrcRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_RxTp2DestType, PDUR_CONST) PduR_RxTp2Dest[93];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_StartOfReceptionRxSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_StartOfReceptionRxSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_StartOfReceptionRxSmTransitionType, PDUR_CONST) PduR_StartOfReceptionRxSmTransition[3];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TpActivateNextFifoSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_TpActivateNextFifoSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_TpActivateNextFifoSmTransitionType, PDUR_CONST) PduR_TpActivateNextFifoSmTransition[8];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TpActivateReadFifoSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_TpActivateReadFifoSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_TpActivateReadFifoSmTransitionType, PDUR_CONST) PduR_TpActivateReadFifoSmTransition[8];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TpActivateWriteFifoSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_TpActivateWriteFifoSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_TpActivateWriteFifoSmTransitionType, PDUR_CONST) PduR_TpActivateWriteFifoSmTransition[8];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TpCancelReceiveFifoSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_TpCancelReceiveFifoSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_TpCancelReceiveFifoSmTransitionType, PDUR_CONST) PduR_TpCancelReceiveFifoSmTransition[3];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TpCancelTransmitTxInstSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_TpCancelTransmitTxInstSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_TpCancelTransmitTxInstSmTransitionType, PDUR_CONST) PduR_TpCancelTransmitTxInstSmTransition[3];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TpCheckReady2TransmitRmSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_TpCheckReady2TransmitRmSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_TpCheckReady2TransmitRmSmTransitionType, PDUR_CONST) PduR_TpCheckReady2TransmitRmSmTransition[5];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TpRxIndicationRxSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_TpRxIndicationRxSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_TpRxIndicationRxSmTransitionType, PDUR_CONST) PduR_TpRxIndicationRxSmTransition[3];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TpTriggerTransmitTxInstSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_TpTriggerTransmitTxInstSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_TpTriggerTransmitTxInstSmTransitionType, PDUR_CONST) PduR_TpTriggerTransmitTxInstSmTransition[3];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TpTxConfirmationTxSmTransition
**********************************************************************************************************************/
/** 
  \var    PduR_TpTxConfirmationTxSmTransition
  \details
  Element    Description
  FctPtr 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_TpTxConfirmationTxSmTransitionType, PDUR_CONST) PduR_TpTxConfirmationTxSmTransition[3];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Tx2Lo
**********************************************************************************************************************/
/** 
  \var    PduR_Tx2Lo
  \brief  Contains all informations to route a Pdu from a upper layer to a lower layer module, or to cancel a transmission
  \details
  Element                Description
  RmSrcRomIdx            the index of the 0:1 relation pointing to PduR_RmSrcRom
  MaskedBits             contains bitcoded the boolean data of PduR_CancelTransmitUsedOfTx2Lo, PduR_RmSrcRomUsedOfTx2Lo
  RmTransmitFctPtrIdx    the index of the 1:1 relation pointing to PduR_RmTransmitFctPtr
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_Tx2LoType, PDUR_CONST) PduR_Tx2Lo[182];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TxIf2Up
**********************************************************************************************************************/
/** 
  \var    PduR_TxIf2Up
  \brief  This table contains all routing information to perform the Tx handling of an interface routing. Used in the &lt;LLIf&gt;_TriggerTransmit and &lt;LLIf&gt;_TxConfirmation
  \details
  Element               Description
  RmGDestRomIdx         the index of the 1:1 relation pointing to PduR_RmGDestRom
  TxConfirmationUsed    True, if the any of the source PduRDestPdus use a TxConfirmation.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_TxIf2UpType, PDUR_CONST) PduR_TxIf2Up[139];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TxTp2Src
**********************************************************************************************************************/
/** 
  \var    PduR_TxTp2Src
  \brief  This table contains all routing information to perform the Tx handling of a transport protocol routing, Used in the &lt;LoTp&gt;_CopyTxData and &lt;LoTp&gt;_TxConfirmation
  \details
  Element          Description
  RmGDestRomIdx    the index of the 1:1 relation pointing to PduR_RmGDestRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_TxTp2SrcType, PDUR_CONST) PduR_TxTp2Src[98];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_BmTxBufferArrayRam
**********************************************************************************************************************/
/** 
  \var    PduR_BmTxBufferArrayRam
  \brief  PduR BufferManagere TxBufferArray Table
*/ 
#define PDUR_START_SEC_BUFFER_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(PduR_BmTxBufferArrayRamUType, PDUR_VAR_NOINIT) PduR_BmTxBufferArrayRam;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define PDUR_STOP_SEC_BUFFER_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_BmTxBufferInstanceRam
**********************************************************************************************************************/
/** 
  \var    PduR_BmTxBufferInstanceRam
  \brief  PduR BufferManager TxBufferInstance Table
  \details
  Element                       Description
  BmTxBufferArrayRamReadIdx     the index of the 1:1 relation pointing to PduR_BmTxBufferArrayRam
  BmTxBufferArrayRamWriteIdx    the index of the 1:1 relation pointing to PduR_BmTxBufferArrayRam
  PduRBufferState               PduRBufferState represents the buffer state (READ4WRITE, WRITE4READ, FULL, EMPTY)
  TxBufferUsed                  TRUE if a destination of an 1:N routing use the TxBuffer element.
*/ 
#define PDUR_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(PduR_BmTxBufferInstanceRamUType, PDUR_VAR_NOINIT) PduR_BmTxBufferInstanceRam;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define PDUR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_BmTxBufferRam
**********************************************************************************************************************/
/** 
  \var    PduR_BmTxBufferRam
  \brief  PduR BufferManager TxBuffer Table
  \details
  Element                              Description
  BmTxBufferArrayRamInstanceStopIdx    the index of the 1:1 relation pointing to PduR_BmTxBufferArrayRam
  BmTxBufferArrayRamReadIdx            the index of the 1:1 relation pointing to PduR_BmTxBufferArrayRam
  BmTxBufferArrayRamWriteIdx           the index of the 1:1 relation pointing to PduR_BmTxBufferArrayRam
  PduRBufferState                      PduRBufferState represents the buffer state (READ4WRITE, WRITE4READ, FULL, EMPTY)
  TpBufMgrState                        TpBufMgrState represent the Tp buffer state (IDLE, RX_ACTIVE, TX_ACTIVE, RX_TX_ACTIVE)
  RxLength                             Rx Pdu Sdu length
*/ 
#define PDUR_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(PduR_BmTxBufferRamUType, PDUR_VAR_NOINIT) PduR_BmTxBufferRam;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define PDUR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_FmFifoElementRam
**********************************************************************************************************************/
/** 
  \var    PduR_FmFifoElementRam
  \brief  PduR FiFoManager FIFO element table
  \details
  Element              Description
  RmDestRomIdx         the index of the 0:1 relation pointing to PduR_RmDestRom
  BmTxBufferRomIdx     the index of the 0:1 relation pointing to PduR_BmTxBufferRom
  DedicatedTxBuffer    TRUE if a routing has a dedicate Tx Buffer and the Tx Buffer is not shared with an other routing
  State                Fifo Manager state machine state
*/ 
#define PDUR_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(PduR_FmFifoElementRamType, PDUR_VAR_NOINIT) PduR_FmFifoElementRam[182];
#define PDUR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_FmFifoInstanceRam
**********************************************************************************************************************/
/** 
  \var    PduR_FmFifoInstanceRam
  \brief  Instance of the PduRDestPdus using a single Fifo
  \details
  Element                     Description
  BmTxBufferInstanceRomIdx    the index of the 0:1 relation pointing to PduR_BmTxBufferInstanceRom
*/ 
#define PDUR_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(PduR_FmFifoInstanceRamUType, PDUR_VAR_NOINIT) PduR_FmFifoInstanceRam;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define PDUR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_FmFifoRam
**********************************************************************************************************************/
/** 
  \var    PduR_FmFifoRam
  \brief  PduR FiFoManager Fifo Table
  \details
  Element                     Description
  FillLevel                   Fill level of the FIFO queue
  FmFifoElementRamReadIdx     the index of the 0:1 relation pointing to PduR_FmFifoElementRam
  FmFifoElementRamWriteIdx    the index of the 0:1 relation pointing to PduR_FmFifoElementRam
  TpTxSmState                 Tp Tx state
  PendingConfirmations        Number of pending Tx Confirmations of all possible destinations.
*/ 
#define PDUR_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(PduR_FmFifoRamType, PDUR_VAR_NOINIT) PduR_FmFifoRam[46];
#define PDUR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Initialized
**********************************************************************************************************************/
/** 
  \var    PduR_Initialized
  \brief  Initialization state of PduR. TRUE, if PduR_Init() has been called, else FALSE
*/ 
#define PDUR_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(PduR_InitializedType, PDUR_VAR_ZERO_INIT) PduR_Initialized;
#define PDUR_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmBufferedTpPropertiesRam
**********************************************************************************************************************/
/** 
  \var    PduR_RmBufferedTpPropertiesRam
  \brief  PduR RoutiongManager Properties of buffered Tp routing paths.
  \details
  Element                Description
  FmFifoElementRamIdx    the index of the 0:1 relation pointing to PduR_FmFifoElementRam
  TpRxSmState            Tp source instance state
*/ 
#define PDUR_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(PduR_RmBufferedTpPropertiesRamUType, PDUR_VAR_NOINIT) PduR_RmBufferedTpPropertiesRam;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define PDUR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmGDestTpTxStateRam
**********************************************************************************************************************/
/** 
  \var    PduR_RmGDestTpTxStateRam
  \brief  PduR RoutiongPathManager global destPdu Tp Tx State
  \details
  Element            Description
  TpTxInstSmState    Tp dest instance state
*/ 
#define PDUR_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(PduR_RmGDestTpTxStateRamUType, PDUR_VAR_NOINIT) PduR_RmGDestTpTxStateRam;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define PDUR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


#define PDUR_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_19.1 */

#if(PDUR_USE_INIT_POINTER == STD_ON)
extern P2CONST(PduR_PBConfigType, PDUR_VAR_ZERO_INIT, PDUR_PBCFG) PduR_ConfigDataPtr;
#endif

#define PDUR_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
 * LOCAL GEN FUNCTION PROTOTYPES
 *********************************************************************************************************************/
# ifdef PDUR_SOURCE
#if(PDUR_RECEPTIONINDICATIONQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_ReceptionIndicationQueueInit
 *********************************************************************************************************************/
/*! \brief   Initializes the queue parameters
 *  \details -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_ReceptionIndicationQueueInit(void);
#endif

#if(PDUR_RECEPTIONINDICATIONQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_IsReceptionIndicationQueueFull
 *********************************************************************************************************************/
/*! \brief   Checks if the queue is full
 *  \details -
 *  \return  TRUE  - If the queue is full
 *            FALSE - If the queue is not full
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, PDUR_CODE) PduR_IsReceptionIndicationQueueFull(void);
#endif

#if(PDUR_RECEPTIONINDICATIONQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_IsReceptionIndicationQueueEmpty
 *********************************************************************************************************************/
/*! \brief   Checks if the queue is empty
 *  \details -
 *  \return  TRUE  - If the queue is empty
 *            FALSE - If the queue is not empty
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, PDUR_CODE) PduR_IsReceptionIndicationQueueEmpty(void);
#endif

#if(PDUR_RECEPTIONINDICATIONQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_ReceptionIndicationQueueWriteIdxIncrement
 *********************************************************************************************************************/
/*! \brief   Increments the queue write index
 *  \details -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_ReceptionIndicationQueueWriteIdxIncrement(void);
#endif

#if(PDUR_RECEPTIONINDICATIONQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_ReceptionIndicationQueueReadIdxIncrement
 *********************************************************************************************************************/
/*! \brief   Increments the queue read index
 *  \details -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_ReceptionIndicationQueueReadIdxIncrement(void);
#endif

#if(PDUR_TRANSMITREQUESTQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_TransmitRequestQueueInit
 *********************************************************************************************************************/
/*! \brief   Initializes the queue parameters
 *  \details -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_TransmitRequestQueueInit(void);
#endif

#if(PDUR_TRANSMITREQUESTQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_IsTransmitRequestQueueFull
 *********************************************************************************************************************/
/*! \brief   Checks if the queue is full
 *  \details -
 *  \return  TRUE  - If the queue is full
 *            FALSE - If the queue is not full
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, PDUR_CODE) PduR_IsTransmitRequestQueueFull(void);
#endif

#if(PDUR_TRANSMITREQUESTQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_IsTransmitRequestQueueEmpty
 *********************************************************************************************************************/
/*! \brief   Checks if the queue is empty
 *  \details -
 *  \return  TRUE  - If the queue is empty
 *            FALSE - If the queue is not empty
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, PDUR_CODE) PduR_IsTransmitRequestQueueEmpty(void);
#endif

#if(PDUR_TRANSMITREQUESTQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_TransmitRequestQueueWriteIdxIncrement
 *********************************************************************************************************************/
/*! \brief   Increments the queue write index
 *  \details -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_TransmitRequestQueueWriteIdxIncrement(void);
#endif

#if(PDUR_TRANSMITREQUESTQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_TransmitRequestQueueReadIdxIncrement
 *********************************************************************************************************************/
/*! \brief   Increments the queue read index
 *  \details -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_TransmitRequestQueueReadIdxIncrement(void);
#endif


# endif

/**********************************************************************************************************************
 * LOCAL GEN FUNCTIONS
 *********************************************************************************************************************/
# ifdef PDUR_SOURCE
#if(PDUR_RECEPTIONINDICATIONQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_ReceptionIndicationQueueInit
 *********************************************************************************************************************/
/*!
 * \internal
 * - Initialize read and write index
 * \endinternal
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_ReceptionIndicationQueueInit(void)
{
  PduR_SetReceptionIndicationQueueReadIdx(0); /* SBSW_PDUR_CSL_VAR_ACCESS */
  PduR_SetReceptionIndicationQueueWriteIdx(0); /* SBSW_PDUR_CSL_VAR_ACCESS */
}
#endif

#if(PDUR_RECEPTIONINDICATIONQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_IsReceptionIndicationQueueFull
 *********************************************************************************************************************/
/*!
 * \internal
 * - return true if the queue is full
 * \endinternal
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, PDUR_CODE) PduR_IsReceptionIndicationQueueFull(void)
{
  boolean ret = FALSE;
  if(PduR_GetReceptionIndicationQueueReadIdx() == ((PduR_GetReceptionIndicationQueueWriteIdx() + 1) % PduR_GetSizeOfReceptionIndicationQueue()))
  {
    ret = TRUE;
  }
  return ret;
}
#endif

#if(PDUR_RECEPTIONINDICATIONQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_IsReceptionIndicationQueueEmpty
 *********************************************************************************************************************/
/*!
 * \internal
 * - return true if the queue is empty
 * \endinternal
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, PDUR_CODE) PduR_IsReceptionIndicationQueueEmpty(void)
{
  boolean ret = FALSE;
  if(PduR_GetReceptionIndicationQueueReadIdx() == PduR_GetReceptionIndicationQueueWriteIdx())
  {
    ret = TRUE;
  }
  return ret;
}
#endif

#if(PDUR_RECEPTIONINDICATIONQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_ReceptionIndicationQueueWriteIdxIncrement
 *********************************************************************************************************************/
/*!
 * \internal
 * - increment the write index
 * \endinternal
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_ReceptionIndicationQueueWriteIdxIncrement(void)
{
  PduR_SetReceptionIndicationQueueWriteIdx((PduR_GetReceptionIndicationQueueWriteIdx() + 1) % PduR_GetSizeOfReceptionIndicationQueue()); /* SBSW_PDUR_CSL_VAR_ACCESS */
}
#endif

#if(PDUR_RECEPTIONINDICATIONQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_ReceptionIndicationQueueReadIdxIncrement
 *********************************************************************************************************************/
/*!
 * \internal
 * - increment the read index
 * \endinternal
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_ReceptionIndicationQueueReadIdxIncrement(void)
{
  PduR_SetReceptionIndicationQueueReadIdx((PduR_GetReceptionIndicationQueueReadIdx() + 1) % PduR_GetSizeOfReceptionIndicationQueue()); /* SBSW_PDUR_CSL_VAR_ACCESS */
}
#endif

#if(PDUR_TRANSMITREQUESTQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_TransmitRequestQueueInit
 *********************************************************************************************************************/
/*!
 * \internal
 * - Initialize read and write index
 * \endinternal
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_TransmitRequestQueueInit(void)
{
  PduR_SetTransmitRequestQueueReadIdx(0); /* SBSW_PDUR_CSL_VAR_ACCESS */
  PduR_SetTransmitRequestQueueWriteIdx(0); /* SBSW_PDUR_CSL_VAR_ACCESS */
}
#endif

#if(PDUR_TRANSMITREQUESTQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_IsTransmitRequestQueueFull
 *********************************************************************************************************************/
/*!
 * \internal
 * - return true if the queue is full
 * \endinternal
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, PDUR_CODE) PduR_IsTransmitRequestQueueFull(void)
{
  boolean ret = FALSE;
  if(PduR_GetTransmitRequestQueueReadIdx() == ((PduR_GetTransmitRequestQueueWriteIdx() + 1) % PduR_GetSizeOfTransmitRequestQueue()))
  {
    ret = TRUE;
  }
  return ret;
}
#endif

#if(PDUR_TRANSMITREQUESTQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_IsTransmitRequestQueueEmpty
 *********************************************************************************************************************/
/*!
 * \internal
 * - return true if the queue is empty
 * \endinternal
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, PDUR_CODE) PduR_IsTransmitRequestQueueEmpty(void)
{
  boolean ret = FALSE;
  if(PduR_GetTransmitRequestQueueReadIdx() == PduR_GetTransmitRequestQueueWriteIdx())
  {
    ret = TRUE;
  }
  return ret;
}
#endif

#if(PDUR_TRANSMITREQUESTQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_TransmitRequestQueueWriteIdxIncrement
 *********************************************************************************************************************/
/*!
 * \internal
 * - increment the write index
 * \endinternal
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_TransmitRequestQueueWriteIdxIncrement(void)
{
  PduR_SetTransmitRequestQueueWriteIdx((PduR_GetTransmitRequestQueueWriteIdx() + 1) % PduR_GetSizeOfTransmitRequestQueue()); /* SBSW_PDUR_CSL_VAR_ACCESS */
}
#endif

#if(PDUR_TRANSMITREQUESTQUEUE == STD_ON)
/**********************************************************************************************************************
 * PduR_TransmitRequestQueueReadIdxIncrement
 *********************************************************************************************************************/
/*!
 * \internal
 * - increment the read index
 * \endinternal
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_TransmitRequestQueueReadIdxIncrement(void)
{
  PduR_SetTransmitRequestQueueReadIdx((PduR_GetTransmitRequestQueueReadIdx() + 1) % PduR_GetSizeOfTransmitRequestQueue()); /* SBSW_PDUR_CSL_VAR_ACCESS */
}
#endif


# endif

#endif  /* PDUR_LCFG_H */
/**********************************************************************************************************************
 * END OF FILE: PduR_Lcfg.h
 *********************************************************************************************************************/

