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
 *            Module: J1939Rm
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: J1939Rm_Cfg.h
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


#if !(defined J1939RM_CFG_H)
# define J1939RM_CFG_H

/**********************************************************************************************************************
  MISRA JUSTIFICATION
**********************************************************************************************************************/

/* PRQA S 0779 EOF */ /* MD_MSR_5.1_777 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

# include "ComStack_Types.h"
# include "J1939Rm_Types.h"


/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

#ifndef J1939RM_USE_DUMMY_FUNCTIONS
#define J1939RM_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef J1939RM_USE_DUMMY_STATEMENT
#define J1939RM_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef J1939RM_DUMMY_STATEMENT
#define J1939RM_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef J1939RM_DUMMY_STATEMENT_CONST
#define J1939RM_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef J1939RM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define J1939RM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef J1939RM_ATOMIC_VARIABLE_ACCESS
#define J1939RM_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef J1939RM_PROCESSOR_MPC5746C
#define J1939RM_PROCESSOR_MPC5746C
#endif
#ifndef J1939RM_COMP_DIAB
#define J1939RM_COMP_DIAB
#endif
#ifndef J1939RM_GEN_GENERATOR_MSR
#define J1939RM_GEN_GENERATOR_MSR
#endif
#ifndef J1939RM_CPUTYPE_BITORDER_MSB2LSB
#define J1939RM_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef J1939RM_CONFIGURATION_VARIANT_PRECOMPILE
#define J1939RM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef J1939RM_CONFIGURATION_VARIANT_LINKTIME
#define J1939RM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef J1939RM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define J1939RM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef J1939RM_CONFIGURATION_VARIANT
#define J1939RM_CONFIGURATION_VARIANT J1939RM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef J1939RM_POSTBUILD_VARIANT_SUPPORT
#define J1939RM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define J1939RM_CFG_MAJOR_VERSION (2u)
#define J1939RM_CFG_MINOR_VERSION (4u)
#define J1939RM_CFG_PATCH_VERSION (1u)

#define J1939RM_DEV_ERROR_DETECT STD_OFF
#define J1939RM_DEV_ERROR_REPORT STD_OFF
#define J1939RM_RUNTIME_ERROR_REPORT STD_OFF
#define J1939RM_VERSION_INFO_API STD_OFF

#define J1939RM_CANIF_DLCCHECK STD_ON

#define J1939RM_SUPPORT_ACK_INDICATION STD_OFF
#define J1939RM_SUPPORT_ACK_TRANSMISSION STD_OFF
#define J1939RM_SUPPORT_REQUEST_INDICATION STD_ON
#define J1939RM_SUPPORT_REQUEST_TRANSMISSION STD_OFF
#define J1939RM_SUPPORT_TIMEOUT_SUPERVISION STD_OFF

#define J1939RM_SUPPORT_COM_USER STD_ON
#define J1939RM_SUPPORT_REQUEST2 STD_OFF

/* TxPdu IDs */



/**
 * \defgroup J1939RmHandleIdsTxPDUIDs Handle IDs of handle space Tx PDU IDs.
 * \brief Symbolic Name Values (SNVs) for Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define J1939RmConf_J1939RmAckmTxPdu_AckmTxPdu_Backbone1J1939_54966c1b 0
#define J1939RmConf_J1939RmAckmTxPdu_AckmTxPdu_FMSNet_J1939_44d89c3b  1
/**\} */
/* RxPdu IDs */



/**
 * \defgroup J1939RmHandleIdsRxPDUIDs Handle IDs of handle space Rx PDU IDs.
 * \brief Symbolic Name Values (SNVs) for Rx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define J1939RmConf_J1939RmRqstRxPdu_RqstRxPdu_Backbone1J1939_54966c1b 0
#define J1939RmConf_J1939RmRqstRxPdu_RqstRxPdu_FMSNet_J1939_44d89c3b  1
/**\} */
/* User IDs */



/**
 * \defgroup J1939RmHandleIdsUserIDs Handle IDs of handle space User IDs.
 * \brief Symbolic Name Values (SNVs) for J1939Rm users
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define J1939RmConf_J1939RmUser_J1939RmUser_StartApplication          0
/**\} */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  J1939RmPCDataSwitches  J1939Rm Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define J1939RM_ACKINDICATION                                         STD_OFF  /**< Deactivateable: 'J1939Rm_AckIndication' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939RM_ACKQUEUE                                              STD_ON
#define J1939RM_ACKQUEUEIND                                           STD_ON
#define J1939RM_CHANNEL                                               STD_ON
#define J1939RM_ACKQUEUEINDENDIDXOFCHANNEL                            STD_ON
#define J1939RM_ACKQUEUEINDSTARTIDXOFCHANNEL                          STD_ON
#define J1939RM_ACKQUEUEINDUSEDOFCHANNEL                              STD_ON
#define J1939RM_ACKQUEUESIZEOFCHANNEL                                 STD_ON
#define J1939RM_CHANNELNODENODETABLEINDENDIDXOFCHANNEL                STD_ON
#define J1939RM_CHANNELNODENODETABLEINDSTARTIDXOFCHANNEL              STD_ON
#define J1939RM_CHANNELNODENODETABLEINDUSEDOFCHANNEL                  STD_ON
#define J1939RM_COMMCHANNELIDOFCHANNEL                                STD_ON
#define J1939RM_ISOBUSCHANNELOFCHANNEL                                STD_OFF  /**< Deactivateable: 'J1939Rm_Channel.IsobusChannel' Reason: 'the value of J1939Rm_IsobusChannelOfChannel is always 'false' due to this, the array is deactivated.' */
#define J1939RM_REQ2QUEUEINDENDIDXOFCHANNEL                           STD_OFF  /**< Deactivateable: 'J1939Rm_Channel.Req2QueueIndEndIdx' Reason: 'the optional indirection is deactivated because Req2QueueIndUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_REQ2QUEUEINDSTARTIDXOFCHANNEL                         STD_OFF  /**< Deactivateable: 'J1939Rm_Channel.Req2QueueIndStartIdx' Reason: 'the optional indirection is deactivated because Req2QueueIndUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_REQ2QUEUEINDUSEDOFCHANNEL                             STD_OFF  /**< Deactivateable: 'J1939Rm_Channel.Req2QueueIndUsed' Reason: 'the optional indirection is deactivated because Req2QueueIndUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_REQQUEUEINDENDIDXOFCHANNEL                            STD_ON
#define J1939RM_REQQUEUEINDSTARTIDXOFCHANNEL                          STD_ON
#define J1939RM_REQQUEUEINDUSEDOFCHANNEL                              STD_ON
#define J1939RM_REQTIMEOUTINDENDIDXOFCHANNEL                          STD_ON
#define J1939RM_REQTIMEOUTINDSTARTIDXOFCHANNEL                        STD_ON
#define J1939RM_REQTIMEOUTINDUSEDOFCHANNEL                            STD_ON
#define J1939RM_REQUEST2QUEUESIZEOFCHANNEL                            STD_ON
#define J1939RM_REQUESTQUEUESIZEOFCHANNEL                             STD_ON
#define J1939RM_REQUESTTIMEOUTMONITORSOFCHANNEL                       STD_ON
#define J1939RM_RXPDUACKMIDXOFCHANNEL                                 STD_OFF  /**< Deactivateable: 'J1939Rm_Channel.RxPduAckmIdx' Reason: 'the optional indirection is deactivated because RxPduAckmUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_RXPDUACKMUSEDOFCHANNEL                                STD_OFF  /**< Deactivateable: 'J1939Rm_Channel.RxPduAckmUsed' Reason: 'the optional indirection is deactivated because RxPduAckmUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_RXPDURQST2IDXOFCHANNEL                                STD_OFF  /**< Deactivateable: 'J1939Rm_Channel.RxPduRqst2Idx' Reason: 'the optional indirection is deactivated because RxPduRqst2UsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_RXPDURQST2USEDOFCHANNEL                               STD_OFF  /**< Deactivateable: 'J1939Rm_Channel.RxPduRqst2Used' Reason: 'the optional indirection is deactivated because RxPduRqst2UsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_RXPDURQSTIDXOFCHANNEL                                 STD_ON
#define J1939RM_RXPDURQSTUSEDOFCHANNEL                                STD_ON
#define J1939RM_TXPDUACKMIDXOFCHANNEL                                 STD_ON
#define J1939RM_TXPDUACKMUSEDOFCHANNEL                                STD_ON
#define J1939RM_TXPDURQST2IDXOFCHANNEL                                STD_OFF  /**< Deactivateable: 'J1939Rm_Channel.TxPduRqst2Idx' Reason: 'the optional indirection is deactivated because TxPduRqst2UsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_TXPDURQST2USEDOFCHANNEL                               STD_OFF  /**< Deactivateable: 'J1939Rm_Channel.TxPduRqst2Used' Reason: 'the optional indirection is deactivated because TxPduRqst2UsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_TXPDURQSTIDXOFCHANNEL                                 STD_OFF  /**< Deactivateable: 'J1939Rm_Channel.TxPduRqstIdx' Reason: 'the optional indirection is deactivated because TxPduRqstUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_TXPDURQSTUSEDOFCHANNEL                                STD_OFF  /**< Deactivateable: 'J1939Rm_Channel.TxPduRqstUsed' Reason: 'the optional indirection is deactivated because TxPduRqstUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_CHANNELNODE                                           STD_ON
#define J1939RM_NODECHANNELSTATEIDXOFCHANNELNODE                      STD_ON
#define J1939RM_NODENODEIDXOFCHANNELNODE                              STD_ON
#define J1939RM_CHANNELNODENODETABLEIND                               STD_ON
#define J1939RM_CHANNELSTATE                                          STD_ON
#define J1939RM_COMIPDU                                               STD_ON
#define J1939RM_COMIPDUDESTENDIDXOFCOMIPDU                            STD_ON
#define J1939RM_COMIPDUDESTSTARTIDXOFCOMIPDU                          STD_ON
#define J1939RM_EXTID1OFCOMIPDU                                       STD_ON
#define J1939RM_EXTID2OFCOMIPDU                                       STD_ON
#define J1939RM_EXTID3OFCOMIPDU                                       STD_ON
#define J1939RM_EXTIDUSAGEOFCOMIPDU                                   STD_ON
#define J1939RM_METADATALENGTHOFCOMIPDU                               STD_ON
#define J1939RM_PGNOFCOMIPDU                                          STD_ON
#define J1939RM_PDUIDOFCOMIPDU                                        STD_ON
#define J1939RM_COMIPDUDEST                                           STD_ON
#define J1939RM_CHANNELIDXOFCOMIPDUDEST                               STD_ON
#define J1939RM_DAOFCOMIPDUDEST                                       STD_ON
#define J1939RM_COMIPDUIND                                            STD_ON
#define J1939RM_COMMCHANNEL                                           STD_ON
#define J1939RM_CHANNELIDXOFCOMMCHANNEL                               STD_ON
#define J1939RM_CHANNELUSEDOFCOMMCHANNEL                              STD_ON
#define J1939RM_FINALMAGICNUMBER                                      STD_OFF  /**< Deactivateable: 'J1939Rm_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define J1939RM_INITDATAHASHCODE                                      STD_OFF  /**< Deactivateable: 'J1939Rm_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define J1939RM_MAINPERIOD                                            STD_ON
#define J1939RM_NMNODE                                                STD_ON
#define J1939RM_NODEIDXOFNMNODE                                       STD_ON
#define J1939RM_NODEUSEDOFNMNODE                                      STD_ON
#define J1939RM_NODE                                                  STD_ON
#define J1939RM_NODEADDRESSOFNODE                                     STD_ON
#define J1939RM_NODECHANNELCHANNELTABLEINDENDIDXOFNODE                STD_ON
#define J1939RM_NODECHANNELCHANNELTABLEINDSTARTIDXOFNODE              STD_ON
#define J1939RM_NODECHANNELCHANNELTABLEINDUSEDOFNODE                  STD_ON
#define J1939RM_NODEIDOFNODE                                          STD_ON
#define J1939RM_NODEUSERUSERTABLEINDENDIDXOFNODE                      STD_ON
#define J1939RM_NODEUSERUSERTABLEINDSTARTIDXOFNODE                    STD_ON
#define J1939RM_NODEUSERUSERTABLEINDUSEDOFNODE                        STD_ON
#define J1939RM_NODECHANNEL                                           STD_ON
#define J1939RM_CHANNELCHANNELIDXOFNODECHANNEL                        STD_ON
#define J1939RM_NODECHANNELSTATEIDXOFNODECHANNEL                      STD_ON
#define J1939RM_NODECHANNELCHANNELTABLEIND                            STD_ON
#define J1939RM_NODECHANNELSTATE                                      STD_ON
#define J1939RM_NODEUSER                                              STD_ON
#define J1939RM_USERUSERIDXOFNODEUSER                                 STD_ON
#define J1939RM_NODEUSERUSERTABLEIND                                  STD_ON
#define J1939RM_REQ2QUEUE                                             STD_OFF  /**< Deactivateable: 'J1939Rm_Req2Queue' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939RM_REQ2QUEUEIND                                          STD_OFF  /**< Deactivateable: 'J1939Rm_Req2QueueInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939RM_REQQUEUE                                              STD_ON
#define J1939RM_REQQUEUEIND                                           STD_ON
#define J1939RM_REQTIMEOUT                                            STD_ON
#define J1939RM_REQTIMEOUTIND                                         STD_ON
#define J1939RM_REQUESTINDICATION                                     STD_ON
#define J1939RM_REQUESTTIMEOUTINDICATION                              STD_OFF  /**< Deactivateable: 'J1939Rm_RequestTimeoutIndication' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939RM_RTEACKINDICATION                                      STD_OFF  /**< Deactivateable: 'J1939Rm_RteAckIndication' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939RM_RTEREQUESTINDICATION                                  STD_OFF  /**< Deactivateable: 'J1939Rm_RteRequestIndication' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939RM_RTEREQUESTTIMEOUTINDICATION                           STD_OFF  /**< Deactivateable: 'J1939Rm_RteRequestTimeoutIndication' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939RM_RXPDU                                                 STD_ON
#define J1939RM_CHANNELIDXOFRXPDU                                     STD_ON
#define J1939RM_INVALIDHNDOFRXPDU                                     STD_OFF  /**< Deactivateable: 'J1939Rm_RxPdu.InvalidHnd' Reason: 'the value of J1939Rm_InvalidHndOfRxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939RM_METADATALENGTHOFRXPDU                                 STD_ON
#define J1939RM_PDUTYPEOFRXPDU                                        STD_ON
#define J1939RM_SIZEOFACKQUEUE                                        STD_ON
#define J1939RM_SIZEOFACKQUEUEIND                                     STD_ON
#define J1939RM_SIZEOFCHANNEL                                         STD_ON
#define J1939RM_SIZEOFCHANNELNODE                                     STD_ON
#define J1939RM_SIZEOFCHANNELNODENODETABLEIND                         STD_ON
#define J1939RM_SIZEOFCHANNELSTATE                                    STD_ON
#define J1939RM_SIZEOFCOMIPDU                                         STD_ON
#define J1939RM_SIZEOFCOMIPDUDEST                                     STD_ON
#define J1939RM_SIZEOFCOMIPDUIND                                      STD_ON
#define J1939RM_SIZEOFCOMMCHANNEL                                     STD_ON
#define J1939RM_SIZEOFNMNODE                                          STD_ON
#define J1939RM_SIZEOFNODE                                            STD_ON
#define J1939RM_SIZEOFNODECHANNEL                                     STD_ON
#define J1939RM_SIZEOFNODECHANNELCHANNELTABLEIND                      STD_ON
#define J1939RM_SIZEOFNODECHANNELSTATE                                STD_ON
#define J1939RM_SIZEOFNODEUSER                                        STD_ON
#define J1939RM_SIZEOFNODEUSERUSERTABLEIND                            STD_ON
#define J1939RM_SIZEOFREQQUEUE                                        STD_ON
#define J1939RM_SIZEOFREQQUEUEIND                                     STD_ON
#define J1939RM_SIZEOFREQTIMEOUT                                      STD_ON
#define J1939RM_SIZEOFREQTIMEOUTIND                                   STD_ON
#define J1939RM_SIZEOFREQUESTINDICATION                               STD_ON
#define J1939RM_SIZEOFRXPDU                                           STD_ON
#define J1939RM_SIZEOFTXPDU                                           STD_ON
#define J1939RM_SIZEOFTXPDUSTATE                                      STD_ON
#define J1939RM_SIZEOFUSER                                            STD_ON
#define J1939RM_SIZEOFUSERPGN                                         STD_ON
#define J1939RM_SIZEOFUSERPGNIND                                      STD_ON
#define J1939RM_TXCONFTIMEOUT                                         STD_ON
#define J1939RM_TXPDU                                                 STD_ON
#define J1939RM_CHANNELIDXOFTXPDU                                     STD_ON
#define J1939RM_INVALIDHNDOFTXPDU                                     STD_OFF  /**< Deactivateable: 'J1939Rm_TxPdu.InvalidHnd' Reason: 'the value of J1939Rm_InvalidHndOfTxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939RM_METADATALENGTHOFTXPDU                                 STD_ON
#define J1939RM_PDUIDOFTXPDU                                          STD_ON
#define J1939RM_PDUTYPEOFTXPDU                                        STD_ON
#define J1939RM_TXPDUSTATEIDXOFTXPDU                                  STD_ON
#define J1939RM_TXPDUSTATE                                            STD_ON
#define J1939RM_USER                                                  STD_ON
#define J1939RM_ACKINDICATIONIDXOFUSER                                STD_OFF  /**< Deactivateable: 'J1939Rm_User.AckIndicationIdx' Reason: 'the optional indirection is deactivated because AckIndicationUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_ACKINDICATIONUSEDOFUSER                               STD_OFF  /**< Deactivateable: 'J1939Rm_User.AckIndicationUsed' Reason: 'the optional indirection is deactivated because AckIndicationUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_COMIPDUINDENDIDXOFUSER                                STD_ON
#define J1939RM_COMIPDUINDSTARTIDXOFUSER                              STD_ON
#define J1939RM_COMIPDUINDUSEDOFUSER                                  STD_ON
#define J1939RM_INVALIDHNDOFUSER                                      STD_OFF  /**< Deactivateable: 'J1939Rm_User.InvalidHnd' Reason: 'the value of J1939Rm_InvalidHndOfUser is always 'false' due to this, the array is deactivated.' */
#define J1939RM_NODEIDXOFUSER                                         STD_ON
#define J1939RM_REQUESTINDICATIONIDXOFUSER                            STD_ON
#define J1939RM_REQUESTINDICATIONUSEDOFUSER                           STD_ON
#define J1939RM_REQUESTTIMEOUTINDICATIONIDXOFUSER                     STD_OFF  /**< Deactivateable: 'J1939Rm_User.RequestTimeoutIndicationIdx' Reason: 'the optional indirection is deactivated because RequestTimeoutIndicationUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_REQUESTTIMEOUTINDICATIONUSEDOFUSER                    STD_OFF  /**< Deactivateable: 'J1939Rm_User.RequestTimeoutIndicationUsed' Reason: 'the optional indirection is deactivated because RequestTimeoutIndicationUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_RTEACKINDICATIONIDXOFUSER                             STD_OFF  /**< Deactivateable: 'J1939Rm_User.RteAckIndicationIdx' Reason: 'the optional indirection is deactivated because RteAckIndicationUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_RTEACKINDICATIONUSEDOFUSER                            STD_OFF  /**< Deactivateable: 'J1939Rm_User.RteAckIndicationUsed' Reason: 'the optional indirection is deactivated because RteAckIndicationUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_RTEREQUESTINDICATIONIDXOFUSER                         STD_OFF  /**< Deactivateable: 'J1939Rm_User.RteRequestIndicationIdx' Reason: 'the optional indirection is deactivated because RteRequestIndicationUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_RTEREQUESTINDICATIONUSEDOFUSER                        STD_OFF  /**< Deactivateable: 'J1939Rm_User.RteRequestIndicationUsed' Reason: 'the optional indirection is deactivated because RteRequestIndicationUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_RTEREQUESTTIMEOUTINDICATIONIDXOFUSER                  STD_OFF  /**< Deactivateable: 'J1939Rm_User.RteRequestTimeoutIndicationIdx' Reason: 'the optional indirection is deactivated because RteRequestTimeoutIndicationUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_RTEREQUESTTIMEOUTINDICATIONUSEDOFUSER                 STD_OFF  /**< Deactivateable: 'J1939Rm_User.RteRequestTimeoutIndicationUsed' Reason: 'the optional indirection is deactivated because RteRequestTimeoutIndicationUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_USERACKINDICATIONOFUSER                               STD_OFF  /**< Deactivateable: 'J1939Rm_User.UserAckIndication' Reason: 'the value of J1939Rm_UserAckIndicationOfUser is always 'false' due to this, the array is deactivated.' */
#define J1939RM_USERACKPGNINDENDIDXOFUSER                             STD_OFF  /**< Deactivateable: 'J1939Rm_User.UserAckPGNIndEndIdx' Reason: 'the optional indirection is deactivated because UserAckPGNIndUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_USERACKPGNINDSTARTIDXOFUSER                           STD_OFF  /**< Deactivateable: 'J1939Rm_User.UserAckPGNIndStartIdx' Reason: 'the optional indirection is deactivated because UserAckPGNIndUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_USERACKPGNINDUSEDOFUSER                               STD_OFF  /**< Deactivateable: 'J1939Rm_User.UserAckPGNIndUsed' Reason: 'the optional indirection is deactivated because UserAckPGNIndUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939RM_USERPGNINDENDIDXOFUSER                                STD_ON
#define J1939RM_USERPGNINDSTARTIDXOFUSER                              STD_ON
#define J1939RM_USERPGNINDUSEDOFUSER                                  STD_ON
#define J1939RM_USERREQUESTINDICATIONOFUSER                           STD_ON
#define J1939RM_USERSENDACKOFUSER                                     STD_OFF  /**< Deactivateable: 'J1939Rm_User.UserSendAck' Reason: 'the value of J1939Rm_UserSendAckOfUser is always 'false' due to this, the array is deactivated.' */
#define J1939RM_USERSENDREQUESTOFUSER                                 STD_OFF  /**< Deactivateable: 'J1939Rm_User.UserSendRequest' Reason: 'the value of J1939Rm_UserSendRequestOfUser is always 'false' due to this, the array is deactivated.' */
#define J1939RM_USERTIMEOUTSUPERVISIONOFUSER                          STD_OFF  /**< Deactivateable: 'J1939Rm_User.UserTimeoutSupervision' Reason: 'the value of J1939Rm_UserTimeoutSupervisionOfUser is always 'false' due to this, the array is deactivated.' */
#define J1939RM_USERTYPEOFUSER                                        STD_ON
#define J1939RM_USERACKPGN                                            STD_OFF  /**< Deactivateable: 'J1939Rm_UserAckPGN' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939RM_ACKPGNOFUSERACKPGN                                    STD_OFF  /**< Deactivateable: 'J1939Rm_UserAckPGN.AckPGN' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939RM_USERACKPGNIND                                         STD_OFF  /**< Deactivateable: 'J1939Rm_UserAckPGNInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939RM_USERPGN                                               STD_ON
#define J1939RM_PGNOFUSERPGN                                          STD_ON
#define J1939RM_USERPGNIND                                            STD_ON
#define J1939RM_PCCONFIG                                              STD_ON
#define J1939RM_ACKQUEUEINDOFPCCONFIG                                 STD_ON
#define J1939RM_ACKQUEUEOFPCCONFIG                                    STD_ON
#define J1939RM_CHANNELNODENODETABLEINDOFPCCONFIG                     STD_ON
#define J1939RM_CHANNELNODEOFPCCONFIG                                 STD_ON
#define J1939RM_CHANNELOFPCCONFIG                                     STD_ON
#define J1939RM_CHANNELSTATEOFPCCONFIG                                STD_ON
#define J1939RM_COMIPDUDESTOFPCCONFIG                                 STD_ON
#define J1939RM_COMIPDUINDOFPCCONFIG                                  STD_ON
#define J1939RM_COMIPDUOFPCCONFIG                                     STD_ON
#define J1939RM_COMMCHANNELOFPCCONFIG                                 STD_ON
#define J1939RM_FINALMAGICNUMBEROFPCCONFIG                            STD_OFF  /**< Deactivateable: 'J1939Rm_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define J1939RM_INITDATAHASHCODEOFPCCONFIG                            STD_OFF  /**< Deactivateable: 'J1939Rm_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define J1939RM_MAINPERIODOFPCCONFIG                                  STD_ON
#define J1939RM_NMNODEOFPCCONFIG                                      STD_ON
#define J1939RM_NODECHANNELCHANNELTABLEINDOFPCCONFIG                  STD_ON
#define J1939RM_NODECHANNELOFPCCONFIG                                 STD_ON
#define J1939RM_NODECHANNELSTATEOFPCCONFIG                            STD_ON
#define J1939RM_NODEOFPCCONFIG                                        STD_ON
#define J1939RM_NODEUSEROFPCCONFIG                                    STD_ON
#define J1939RM_NODEUSERUSERTABLEINDOFPCCONFIG                        STD_ON
#define J1939RM_REQQUEUEINDOFPCCONFIG                                 STD_ON
#define J1939RM_REQQUEUEOFPCCONFIG                                    STD_ON
#define J1939RM_REQTIMEOUTINDOFPCCONFIG                               STD_ON
#define J1939RM_REQTIMEOUTOFPCCONFIG                                  STD_ON
#define J1939RM_REQUESTINDICATIONOFPCCONFIG                           STD_ON
#define J1939RM_RXPDUOFPCCONFIG                                       STD_ON
#define J1939RM_SIZEOFACKQUEUEINDOFPCCONFIG                           STD_ON
#define J1939RM_SIZEOFACKQUEUEOFPCCONFIG                              STD_ON
#define J1939RM_SIZEOFCHANNELNODENODETABLEINDOFPCCONFIG               STD_ON
#define J1939RM_SIZEOFCHANNELNODEOFPCCONFIG                           STD_ON
#define J1939RM_SIZEOFCHANNELOFPCCONFIG                               STD_ON
#define J1939RM_SIZEOFCHANNELSTATEOFPCCONFIG                          STD_ON
#define J1939RM_SIZEOFCOMIPDUDESTOFPCCONFIG                           STD_ON
#define J1939RM_SIZEOFCOMIPDUINDOFPCCONFIG                            STD_ON
#define J1939RM_SIZEOFCOMIPDUOFPCCONFIG                               STD_ON
#define J1939RM_SIZEOFCOMMCHANNELOFPCCONFIG                           STD_ON
#define J1939RM_SIZEOFNMNODEOFPCCONFIG                                STD_ON
#define J1939RM_SIZEOFNODECHANNELCHANNELTABLEINDOFPCCONFIG            STD_ON
#define J1939RM_SIZEOFNODECHANNELOFPCCONFIG                           STD_ON
#define J1939RM_SIZEOFNODECHANNELSTATEOFPCCONFIG                      STD_ON
#define J1939RM_SIZEOFNODEOFPCCONFIG                                  STD_ON
#define J1939RM_SIZEOFNODEUSEROFPCCONFIG                              STD_ON
#define J1939RM_SIZEOFNODEUSERUSERTABLEINDOFPCCONFIG                  STD_ON
#define J1939RM_SIZEOFREQQUEUEINDOFPCCONFIG                           STD_ON
#define J1939RM_SIZEOFREQQUEUEOFPCCONFIG                              STD_ON
#define J1939RM_SIZEOFREQTIMEOUTINDOFPCCONFIG                         STD_ON
#define J1939RM_SIZEOFREQTIMEOUTOFPCCONFIG                            STD_ON
#define J1939RM_SIZEOFREQUESTINDICATIONOFPCCONFIG                     STD_ON
#define J1939RM_SIZEOFRXPDUOFPCCONFIG                                 STD_ON
#define J1939RM_SIZEOFTXPDUOFPCCONFIG                                 STD_ON
#define J1939RM_SIZEOFTXPDUSTATEOFPCCONFIG                            STD_ON
#define J1939RM_SIZEOFUSEROFPCCONFIG                                  STD_ON
#define J1939RM_SIZEOFUSERPGNINDOFPCCONFIG                            STD_ON
#define J1939RM_SIZEOFUSERPGNOFPCCONFIG                               STD_ON
#define J1939RM_TXCONFTIMEOUTOFPCCONFIG                               STD_ON
#define J1939RM_TXPDUOFPCCONFIG                                       STD_ON
#define J1939RM_TXPDUSTATEOFPCCONFIG                                  STD_ON
#define J1939RM_USEROFPCCONFIG                                        STD_ON
#define J1939RM_USERPGNINDOFPCCONFIG                                  STD_ON
#define J1939RM_USERPGNOFPCCONFIG                                     STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCMinNumericValueDefines  J1939Rm Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define J1939RM_MIN_REQTIMEOUT                                        0U
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCMaxNumericValueDefines  J1939Rm Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define J1939RM_MAX_REQTIMEOUT                                        65535U
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCNoReferenceDefines  J1939Rm No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define J1939RM_NO_ACKQUEUEIND                                        255U
#define J1939RM_NO_ACKQUEUEINDENDIDXOFCHANNEL                         255U
#define J1939RM_NO_ACKQUEUEINDSTARTIDXOFCHANNEL                       255U
#define J1939RM_NO_CHANNELNODENODETABLEINDENDIDXOFCHANNEL             255U
#define J1939RM_NO_CHANNELNODENODETABLEINDSTARTIDXOFCHANNEL           255U
#define J1939RM_NO_COMMCHANNELIDOFCHANNEL                             255U
#define J1939RM_NO_REQ2QUEUEINDENDIDXOFCHANNEL                        65535U
#define J1939RM_NO_REQ2QUEUEINDSTARTIDXOFCHANNEL                      65535U
#define J1939RM_NO_REQQUEUEINDENDIDXOFCHANNEL                         255U
#define J1939RM_NO_REQQUEUEINDSTARTIDXOFCHANNEL                       255U
#define J1939RM_NO_REQTIMEOUTINDENDIDXOFCHANNEL                       255U
#define J1939RM_NO_REQTIMEOUTINDSTARTIDXOFCHANNEL                     255U
#define J1939RM_NO_RXPDUACKMIDXOFCHANNEL                              65535U
#define J1939RM_NO_RXPDURQST2IDXOFCHANNEL                             65535U
#define J1939RM_NO_RXPDURQSTIDXOFCHANNEL                              255U
#define J1939RM_NO_TXPDUACKMIDXOFCHANNEL                              255U
#define J1939RM_NO_TXPDURQST2IDXOFCHANNEL                             65535U
#define J1939RM_NO_TXPDURQSTIDXOFCHANNEL                              65535U
#define J1939RM_NO_CHANNELNODENODETABLEIND                            255U
#define J1939RM_NO_PDUIDOFCOMIPDU                                     255U
#define J1939RM_NO_DAOFCOMIPDUDEST                                    255U
#define J1939RM_NO_COMIPDUIND                                         255U
#define J1939RM_NO_CHANNELIDXOFCOMMCHANNEL                            255U
#define J1939RM_NO_NODEIDXOFNMNODE                                    255U
#define J1939RM_NO_NODEADDRESSOFNODE                                  255U
#define J1939RM_NO_NODECHANNELCHANNELTABLEINDENDIDXOFNODE             255U
#define J1939RM_NO_NODECHANNELCHANNELTABLEINDSTARTIDXOFNODE           255U
#define J1939RM_NO_NODEIDOFNODE                                       255U
#define J1939RM_NO_NODEUSERUSERTABLEINDENDIDXOFNODE                   255U
#define J1939RM_NO_NODEUSERUSERTABLEINDSTARTIDXOFNODE                 255U
#define J1939RM_NO_NODECHANNELCHANNELTABLEIND                         255U
#define J1939RM_NO_NODEUSERUSERTABLEIND                               255U
#define J1939RM_NO_REQ2QUEUEIND                                       65535U
#define J1939RM_NO_REQQUEUEIND                                        255U
#define J1939RM_NO_REQTIMEOUTIND                                      255U
#define J1939RM_NO_PDUIDOFTXPDU                                       255U
#define J1939RM_NO_ACKINDICATIONIDXOFUSER                             65535U
#define J1939RM_NO_COMIPDUINDENDIDXOFUSER                             255U
#define J1939RM_NO_COMIPDUINDSTARTIDXOFUSER                           255U
#define J1939RM_NO_REQUESTINDICATIONIDXOFUSER                         255U
#define J1939RM_NO_REQUESTTIMEOUTINDICATIONIDXOFUSER                  65535U
#define J1939RM_NO_RTEACKINDICATIONIDXOFUSER                          65535U
#define J1939RM_NO_RTEREQUESTINDICATIONIDXOFUSER                      65535U
#define J1939RM_NO_RTEREQUESTTIMEOUTINDICATIONIDXOFUSER               65535U
#define J1939RM_NO_USERACKPGNINDENDIDXOFUSER                          65535U
#define J1939RM_NO_USERACKPGNINDSTARTIDXOFUSER                        65535U
#define J1939RM_NO_USERPGNINDENDIDXOFUSER                             255U
#define J1939RM_NO_USERPGNINDSTARTIDXOFUSER                           255U
#define J1939RM_NO_USERACKPGNIND                                      65535U
#define J1939RM_NO_USERPGNIND                                         255U
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCEnumExistsDefines  J1939Rm Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define J1939RM_EXISTS_EXT_ID_NONE_EXTIDUSAGEOFCOMIPDU                STD_ON
#define J1939RM_EXISTS_EXT_ID_ONE_EXTIDUSAGEOFCOMIPDU                 STD_OFF
#define J1939RM_EXISTS_EXT_ID_TWO_EXTIDUSAGEOFCOMIPDU                 STD_OFF
#define J1939RM_EXISTS_EXT_ID_THREE_EXTIDUSAGEOFCOMIPDU               STD_OFF
#define J1939RM_EXISTS_PDU_ACKM_PDUTYPEOFRXPDU                        STD_OFF
#define J1939RM_EXISTS_PDU_RQST_PDUTYPEOFRXPDU                        STD_ON
#define J1939RM_EXISTS_PDU_RQST2_PDUTYPEOFRXPDU                       STD_OFF
#define J1939RM_EXISTS_PDU_UNUSED_PDUTYPEOFRXPDU                      STD_OFF
#define J1939RM_EXISTS_PDU_ACKM_PDUTYPEOFTXPDU                        STD_ON
#define J1939RM_EXISTS_PDU_RQST_PDUTYPEOFTXPDU                        STD_OFF
#define J1939RM_EXISTS_PDU_RQST2_PDUTYPEOFTXPDU                       STD_OFF
#define J1939RM_EXISTS_PDU_UNUSED_PDUTYPEOFTXPDU                      STD_OFF
#define J1939RM_EXISTS_USER_J1939NM_USERTYPEOFUSER                    STD_ON
#define J1939RM_EXISTS_USER_J1939DCM_USERTYPEOFUSER                   STD_OFF
#define J1939RM_EXISTS_USER_COM_USERTYPEOFUSER                        STD_ON
#define J1939RM_EXISTS_USER_CDD_USERTYPEOFUSER                        STD_OFF
#define J1939RM_EXISTS_USER_RTE_USERTYPEOFUSER                        STD_ON
#define J1939RM_EXISTS_USER_NONE_USERTYPEOFUSER                       STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCEnumDefines  J1939Rm Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define J1939RM_EXT_ID_NONE_EXTIDUSAGEOFCOMIPDU                       0x00U
#define J1939RM_EXT_ID_ONE_EXTIDUSAGEOFCOMIPDU                        0x01U
#define J1939RM_EXT_ID_TWO_EXTIDUSAGEOFCOMIPDU                        0x02U
#define J1939RM_EXT_ID_THREE_EXTIDUSAGEOFCOMIPDU                      0x03U
#define J1939RM_PDU_ACKM_PDUTYPEOFRXPDU                               0x00U
#define J1939RM_PDU_RQST_PDUTYPEOFRXPDU                               0x01U
#define J1939RM_PDU_RQST2_PDUTYPEOFRXPDU                              0x02U
#define J1939RM_PDU_UNUSED_PDUTYPEOFRXPDU                             0x03U
#define J1939RM_PDU_ACKM_PDUTYPEOFTXPDU                               0x00U
#define J1939RM_PDU_RQST_PDUTYPEOFTXPDU                               0x01U
#define J1939RM_PDU_RQST2_PDUTYPEOFTXPDU                              0x02U
#define J1939RM_PDU_UNUSED_PDUTYPEOFTXPDU                             0x03U
#define J1939RM_USER_J1939NM_USERTYPEOFUSER                           0x00U
#define J1939RM_USER_J1939DCM_USERTYPEOFUSER                          0x01U
#define J1939RM_USER_COM_USERTYPEOFUSER                               0x02U
#define J1939RM_USER_CDD_USERTYPEOFUSER                               0x03U
#define J1939RM_USER_RTE_USERTYPEOFUSER                               0x04U
#define J1939RM_USER_NONE_USERTYPEOFUSER                              0x05U
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCIsReducedToDefineDefines  J1939Rm Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define J1939RM_ISDEF_ACKINDICATION                                   STD_OFF
#define J1939RM_ISDEF_ACKQUEUEIND                                     STD_OFF
#define J1939RM_ISDEF_ACKQUEUEINDENDIDXOFCHANNEL                      STD_OFF
#define J1939RM_ISDEF_ACKQUEUEINDSTARTIDXOFCHANNEL                    STD_OFF
#define J1939RM_ISDEF_ACKQUEUEINDUSEDOFCHANNEL                        STD_OFF
#define J1939RM_ISDEF_ACKQUEUESIZEOFCHANNEL                           STD_OFF
#define J1939RM_ISDEF_CHANNELNODENODETABLEINDENDIDXOFCHANNEL          STD_OFF
#define J1939RM_ISDEF_CHANNELNODENODETABLEINDSTARTIDXOFCHANNEL        STD_OFF
#define J1939RM_ISDEF_CHANNELNODENODETABLEINDUSEDOFCHANNEL            STD_OFF
#define J1939RM_ISDEF_COMMCHANNELIDOFCHANNEL                          STD_OFF
#define J1939RM_ISDEF_ISOBUSCHANNELOFCHANNEL                          STD_OFF
#define J1939RM_ISDEF_REQ2QUEUEINDENDIDXOFCHANNEL                     STD_OFF
#define J1939RM_ISDEF_REQ2QUEUEINDSTARTIDXOFCHANNEL                   STD_OFF
#define J1939RM_ISDEF_REQ2QUEUEINDUSEDOFCHANNEL                       STD_OFF
#define J1939RM_ISDEF_REQQUEUEINDENDIDXOFCHANNEL                      STD_OFF
#define J1939RM_ISDEF_REQQUEUEINDSTARTIDXOFCHANNEL                    STD_OFF
#define J1939RM_ISDEF_REQQUEUEINDUSEDOFCHANNEL                        STD_OFF
#define J1939RM_ISDEF_REQTIMEOUTINDENDIDXOFCHANNEL                    STD_OFF
#define J1939RM_ISDEF_REQTIMEOUTINDSTARTIDXOFCHANNEL                  STD_OFF
#define J1939RM_ISDEF_REQTIMEOUTINDUSEDOFCHANNEL                      STD_OFF
#define J1939RM_ISDEF_REQUEST2QUEUESIZEOFCHANNEL                      STD_OFF
#define J1939RM_ISDEF_REQUESTQUEUESIZEOFCHANNEL                       STD_OFF
#define J1939RM_ISDEF_REQUESTTIMEOUTMONITORSOFCHANNEL                 STD_OFF
#define J1939RM_ISDEF_RXPDUACKMIDXOFCHANNEL                           STD_OFF
#define J1939RM_ISDEF_RXPDUACKMUSEDOFCHANNEL                          STD_OFF
#define J1939RM_ISDEF_RXPDURQST2IDXOFCHANNEL                          STD_OFF
#define J1939RM_ISDEF_RXPDURQST2USEDOFCHANNEL                         STD_OFF
#define J1939RM_ISDEF_RXPDURQSTIDXOFCHANNEL                           STD_OFF
#define J1939RM_ISDEF_RXPDURQSTUSEDOFCHANNEL                          STD_OFF
#define J1939RM_ISDEF_TXPDUACKMIDXOFCHANNEL                           STD_OFF
#define J1939RM_ISDEF_TXPDUACKMUSEDOFCHANNEL                          STD_OFF
#define J1939RM_ISDEF_TXPDURQST2IDXOFCHANNEL                          STD_OFF
#define J1939RM_ISDEF_TXPDURQST2USEDOFCHANNEL                         STD_OFF
#define J1939RM_ISDEF_TXPDURQSTIDXOFCHANNEL                           STD_OFF
#define J1939RM_ISDEF_TXPDURQSTUSEDOFCHANNEL                          STD_OFF
#define J1939RM_ISDEF_NODECHANNELSTATEIDXOFCHANNELNODE                STD_OFF
#define J1939RM_ISDEF_NODENODEIDXOFCHANNELNODE                        STD_OFF
#define J1939RM_ISDEF_CHANNELNODENODETABLEIND                         STD_OFF
#define J1939RM_ISDEF_COMIPDUDESTENDIDXOFCOMIPDU                      STD_OFF
#define J1939RM_ISDEF_COMIPDUDESTSTARTIDXOFCOMIPDU                    STD_OFF
#define J1939RM_ISDEF_EXTID1OFCOMIPDU                                 STD_OFF
#define J1939RM_ISDEF_EXTID2OFCOMIPDU                                 STD_OFF
#define J1939RM_ISDEF_EXTID3OFCOMIPDU                                 STD_OFF
#define J1939RM_ISDEF_EXTIDUSAGEOFCOMIPDU                             STD_OFF
#define J1939RM_ISDEF_METADATALENGTHOFCOMIPDU                         STD_OFF
#define J1939RM_ISDEF_PGNOFCOMIPDU                                    STD_OFF
#define J1939RM_ISDEF_PDUIDOFCOMIPDU                                  STD_OFF
#define J1939RM_ISDEF_CHANNELIDXOFCOMIPDUDEST                         STD_OFF
#define J1939RM_ISDEF_DAOFCOMIPDUDEST                                 STD_OFF
#define J1939RM_ISDEF_COMIPDUIND                                      STD_OFF
#define J1939RM_ISDEF_CHANNELIDXOFCOMMCHANNEL                         STD_OFF
#define J1939RM_ISDEF_CHANNELUSEDOFCOMMCHANNEL                        STD_OFF
#define J1939RM_ISDEF_NODEIDXOFNMNODE                                 STD_OFF
#define J1939RM_ISDEF_NODEUSEDOFNMNODE                                STD_OFF
#define J1939RM_ISDEF_NODEADDRESSOFNODE                               STD_OFF
#define J1939RM_ISDEF_NODECHANNELCHANNELTABLEINDENDIDXOFNODE          STD_OFF
#define J1939RM_ISDEF_NODECHANNELCHANNELTABLEINDSTARTIDXOFNODE        STD_OFF
#define J1939RM_ISDEF_NODECHANNELCHANNELTABLEINDUSEDOFNODE            STD_OFF
#define J1939RM_ISDEF_NODEIDOFNODE                                    STD_OFF
#define J1939RM_ISDEF_NODEUSERUSERTABLEINDENDIDXOFNODE                STD_OFF
#define J1939RM_ISDEF_NODEUSERUSERTABLEINDSTARTIDXOFNODE              STD_OFF
#define J1939RM_ISDEF_NODEUSERUSERTABLEINDUSEDOFNODE                  STD_OFF
#define J1939RM_ISDEF_CHANNELCHANNELIDXOFNODECHANNEL                  STD_OFF
#define J1939RM_ISDEF_NODECHANNELSTATEIDXOFNODECHANNEL                STD_OFF
#define J1939RM_ISDEF_NODECHANNELCHANNELTABLEIND                      STD_OFF
#define J1939RM_ISDEF_USERUSERIDXOFNODEUSER                           STD_OFF
#define J1939RM_ISDEF_NODEUSERUSERTABLEIND                            STD_OFF
#define J1939RM_ISDEF_REQ2QUEUEIND                                    STD_OFF
#define J1939RM_ISDEF_REQQUEUEIND                                     STD_OFF
#define J1939RM_ISDEF_REQTIMEOUTIND                                   STD_OFF
#define J1939RM_ISDEF_REQUESTINDICATION                               STD_OFF
#define J1939RM_ISDEF_REQUESTTIMEOUTINDICATION                        STD_OFF
#define J1939RM_ISDEF_RTEACKINDICATION                                STD_OFF
#define J1939RM_ISDEF_RTEREQUESTINDICATION                            STD_OFF
#define J1939RM_ISDEF_RTEREQUESTTIMEOUTINDICATION                     STD_OFF
#define J1939RM_ISDEF_CHANNELIDXOFRXPDU                               STD_OFF
#define J1939RM_ISDEF_INVALIDHNDOFRXPDU                               STD_OFF
#define J1939RM_ISDEF_METADATALENGTHOFRXPDU                           STD_OFF
#define J1939RM_ISDEF_PDUTYPEOFRXPDU                                  STD_OFF
#define J1939RM_ISDEF_CHANNELIDXOFTXPDU                               STD_OFF
#define J1939RM_ISDEF_INVALIDHNDOFTXPDU                               STD_OFF
#define J1939RM_ISDEF_METADATALENGTHOFTXPDU                           STD_OFF
#define J1939RM_ISDEF_PDUIDOFTXPDU                                    STD_OFF
#define J1939RM_ISDEF_PDUTYPEOFTXPDU                                  STD_OFF
#define J1939RM_ISDEF_TXPDUSTATEIDXOFTXPDU                            STD_OFF
#define J1939RM_ISDEF_ACKINDICATIONIDXOFUSER                          STD_OFF
#define J1939RM_ISDEF_ACKINDICATIONUSEDOFUSER                         STD_OFF
#define J1939RM_ISDEF_COMIPDUINDENDIDXOFUSER                          STD_OFF
#define J1939RM_ISDEF_COMIPDUINDSTARTIDXOFUSER                        STD_OFF
#define J1939RM_ISDEF_COMIPDUINDUSEDOFUSER                            STD_OFF
#define J1939RM_ISDEF_INVALIDHNDOFUSER                                STD_OFF
#define J1939RM_ISDEF_NODEIDXOFUSER                                   STD_OFF
#define J1939RM_ISDEF_REQUESTINDICATIONIDXOFUSER                      STD_OFF
#define J1939RM_ISDEF_REQUESTINDICATIONUSEDOFUSER                     STD_OFF
#define J1939RM_ISDEF_REQUESTTIMEOUTINDICATIONIDXOFUSER               STD_OFF
#define J1939RM_ISDEF_REQUESTTIMEOUTINDICATIONUSEDOFUSER              STD_OFF
#define J1939RM_ISDEF_RTEACKINDICATIONIDXOFUSER                       STD_OFF
#define J1939RM_ISDEF_RTEACKINDICATIONUSEDOFUSER                      STD_OFF
#define J1939RM_ISDEF_RTEREQUESTINDICATIONIDXOFUSER                   STD_OFF
#define J1939RM_ISDEF_RTEREQUESTINDICATIONUSEDOFUSER                  STD_OFF
#define J1939RM_ISDEF_RTEREQUESTTIMEOUTINDICATIONIDXOFUSER            STD_OFF
#define J1939RM_ISDEF_RTEREQUESTTIMEOUTINDICATIONUSEDOFUSER           STD_OFF
#define J1939RM_ISDEF_USERACKINDICATIONOFUSER                         STD_OFF
#define J1939RM_ISDEF_USERACKPGNINDENDIDXOFUSER                       STD_OFF
#define J1939RM_ISDEF_USERACKPGNINDSTARTIDXOFUSER                     STD_OFF
#define J1939RM_ISDEF_USERACKPGNINDUSEDOFUSER                         STD_OFF
#define J1939RM_ISDEF_USERPGNINDENDIDXOFUSER                          STD_OFF
#define J1939RM_ISDEF_USERPGNINDSTARTIDXOFUSER                        STD_OFF
#define J1939RM_ISDEF_USERPGNINDUSEDOFUSER                            STD_OFF
#define J1939RM_ISDEF_USERREQUESTINDICATIONOFUSER                     STD_OFF
#define J1939RM_ISDEF_USERSENDACKOFUSER                               STD_OFF
#define J1939RM_ISDEF_USERSENDREQUESTOFUSER                           STD_OFF
#define J1939RM_ISDEF_USERTIMEOUTSUPERVISIONOFUSER                    STD_OFF
#define J1939RM_ISDEF_USERTYPEOFUSER                                  STD_OFF
#define J1939RM_ISDEF_ACKPGNOFUSERACKPGN                              STD_OFF
#define J1939RM_ISDEF_USERACKPGNIND                                   STD_OFF
#define J1939RM_ISDEF_PGNOFUSERPGN                                    STD_OFF
#define J1939RM_ISDEF_USERPGNIND                                      STD_OFF
#define J1939RM_ISDEF_ACKQUEUEINDOFPCCONFIG                           STD_ON
#define J1939RM_ISDEF_ACKQUEUEOFPCCONFIG                              STD_ON
#define J1939RM_ISDEF_CHANNELNODENODETABLEINDOFPCCONFIG               STD_ON
#define J1939RM_ISDEF_CHANNELNODEOFPCCONFIG                           STD_ON
#define J1939RM_ISDEF_CHANNELOFPCCONFIG                               STD_ON
#define J1939RM_ISDEF_CHANNELSTATEOFPCCONFIG                          STD_ON
#define J1939RM_ISDEF_COMIPDUDESTOFPCCONFIG                           STD_ON
#define J1939RM_ISDEF_COMIPDUINDOFPCCONFIG                            STD_ON
#define J1939RM_ISDEF_COMIPDUOFPCCONFIG                               STD_ON
#define J1939RM_ISDEF_COMMCHANNELOFPCCONFIG                           STD_ON
#define J1939RM_ISDEF_FINALMAGICNUMBEROFPCCONFIG                      STD_OFF
#define J1939RM_ISDEF_INITDATAHASHCODEOFPCCONFIG                      STD_OFF
#define J1939RM_ISDEF_NMNODEOFPCCONFIG                                STD_ON
#define J1939RM_ISDEF_NODECHANNELCHANNELTABLEINDOFPCCONFIG            STD_ON
#define J1939RM_ISDEF_NODECHANNELOFPCCONFIG                           STD_ON
#define J1939RM_ISDEF_NODECHANNELSTATEOFPCCONFIG                      STD_ON
#define J1939RM_ISDEF_NODEOFPCCONFIG                                  STD_ON
#define J1939RM_ISDEF_NODEUSEROFPCCONFIG                              STD_ON
#define J1939RM_ISDEF_NODEUSERUSERTABLEINDOFPCCONFIG                  STD_ON
#define J1939RM_ISDEF_REQQUEUEINDOFPCCONFIG                           STD_ON
#define J1939RM_ISDEF_REQQUEUEOFPCCONFIG                              STD_ON
#define J1939RM_ISDEF_REQTIMEOUTINDOFPCCONFIG                         STD_ON
#define J1939RM_ISDEF_REQTIMEOUTOFPCCONFIG                            STD_ON
#define J1939RM_ISDEF_REQUESTINDICATIONOFPCCONFIG                     STD_ON
#define J1939RM_ISDEF_RXPDUOFPCCONFIG                                 STD_ON
#define J1939RM_ISDEF_TXPDUOFPCCONFIG                                 STD_ON
#define J1939RM_ISDEF_TXPDUSTATEOFPCCONFIG                            STD_ON
#define J1939RM_ISDEF_USEROFPCCONFIG                                  STD_ON
#define J1939RM_ISDEF_USERPGNINDOFPCCONFIG                            STD_ON
#define J1939RM_ISDEF_USERPGNOFPCCONFIG                               STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCEqualsAlwaysToDefines  J1939Rm Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define J1939RM_EQ2_ACKINDICATION                                     
#define J1939RM_EQ2_ACKQUEUEIND                                       
#define J1939RM_EQ2_ACKQUEUEINDENDIDXOFCHANNEL                        
#define J1939RM_EQ2_ACKQUEUEINDSTARTIDXOFCHANNEL                      
#define J1939RM_EQ2_ACKQUEUEINDUSEDOFCHANNEL                          
#define J1939RM_EQ2_ACKQUEUESIZEOFCHANNEL                             
#define J1939RM_EQ2_CHANNELNODENODETABLEINDENDIDXOFCHANNEL            
#define J1939RM_EQ2_CHANNELNODENODETABLEINDSTARTIDXOFCHANNEL          
#define J1939RM_EQ2_CHANNELNODENODETABLEINDUSEDOFCHANNEL              
#define J1939RM_EQ2_COMMCHANNELIDOFCHANNEL                            
#define J1939RM_EQ2_ISOBUSCHANNELOFCHANNEL                            
#define J1939RM_EQ2_REQ2QUEUEINDENDIDXOFCHANNEL                       
#define J1939RM_EQ2_REQ2QUEUEINDSTARTIDXOFCHANNEL                     
#define J1939RM_EQ2_REQ2QUEUEINDUSEDOFCHANNEL                         
#define J1939RM_EQ2_REQQUEUEINDENDIDXOFCHANNEL                        
#define J1939RM_EQ2_REQQUEUEINDSTARTIDXOFCHANNEL                      
#define J1939RM_EQ2_REQQUEUEINDUSEDOFCHANNEL                          
#define J1939RM_EQ2_REQTIMEOUTINDENDIDXOFCHANNEL                      
#define J1939RM_EQ2_REQTIMEOUTINDSTARTIDXOFCHANNEL                    
#define J1939RM_EQ2_REQTIMEOUTINDUSEDOFCHANNEL                        
#define J1939RM_EQ2_REQUEST2QUEUESIZEOFCHANNEL                        
#define J1939RM_EQ2_REQUESTQUEUESIZEOFCHANNEL                         
#define J1939RM_EQ2_REQUESTTIMEOUTMONITORSOFCHANNEL                   
#define J1939RM_EQ2_RXPDUACKMIDXOFCHANNEL                             
#define J1939RM_EQ2_RXPDUACKMUSEDOFCHANNEL                            
#define J1939RM_EQ2_RXPDURQST2IDXOFCHANNEL                            
#define J1939RM_EQ2_RXPDURQST2USEDOFCHANNEL                           
#define J1939RM_EQ2_RXPDURQSTIDXOFCHANNEL                             
#define J1939RM_EQ2_RXPDURQSTUSEDOFCHANNEL                            
#define J1939RM_EQ2_TXPDUACKMIDXOFCHANNEL                             
#define J1939RM_EQ2_TXPDUACKMUSEDOFCHANNEL                            
#define J1939RM_EQ2_TXPDURQST2IDXOFCHANNEL                            
#define J1939RM_EQ2_TXPDURQST2USEDOFCHANNEL                           
#define J1939RM_EQ2_TXPDURQSTIDXOFCHANNEL                             
#define J1939RM_EQ2_TXPDURQSTUSEDOFCHANNEL                            
#define J1939RM_EQ2_NODECHANNELSTATEIDXOFCHANNELNODE                  
#define J1939RM_EQ2_NODENODEIDXOFCHANNELNODE                          
#define J1939RM_EQ2_CHANNELNODENODETABLEIND                           
#define J1939RM_EQ2_COMIPDUDESTENDIDXOFCOMIPDU                        
#define J1939RM_EQ2_COMIPDUDESTSTARTIDXOFCOMIPDU                      
#define J1939RM_EQ2_EXTID1OFCOMIPDU                                   
#define J1939RM_EQ2_EXTID2OFCOMIPDU                                   
#define J1939RM_EQ2_EXTID3OFCOMIPDU                                   
#define J1939RM_EQ2_EXTIDUSAGEOFCOMIPDU                               
#define J1939RM_EQ2_METADATALENGTHOFCOMIPDU                           
#define J1939RM_EQ2_PGNOFCOMIPDU                                      
#define J1939RM_EQ2_PDUIDOFCOMIPDU                                    
#define J1939RM_EQ2_CHANNELIDXOFCOMIPDUDEST                           
#define J1939RM_EQ2_DAOFCOMIPDUDEST                                   
#define J1939RM_EQ2_COMIPDUIND                                        
#define J1939RM_EQ2_CHANNELIDXOFCOMMCHANNEL                           
#define J1939RM_EQ2_CHANNELUSEDOFCOMMCHANNEL                          
#define J1939RM_EQ2_NODEIDXOFNMNODE                                   
#define J1939RM_EQ2_NODEUSEDOFNMNODE                                  
#define J1939RM_EQ2_NODEADDRESSOFNODE                                 
#define J1939RM_EQ2_NODECHANNELCHANNELTABLEINDENDIDXOFNODE            
#define J1939RM_EQ2_NODECHANNELCHANNELTABLEINDSTARTIDXOFNODE          
#define J1939RM_EQ2_NODECHANNELCHANNELTABLEINDUSEDOFNODE              
#define J1939RM_EQ2_NODEIDOFNODE                                      
#define J1939RM_EQ2_NODEUSERUSERTABLEINDENDIDXOFNODE                  
#define J1939RM_EQ2_NODEUSERUSERTABLEINDSTARTIDXOFNODE                
#define J1939RM_EQ2_NODEUSERUSERTABLEINDUSEDOFNODE                    
#define J1939RM_EQ2_CHANNELCHANNELIDXOFNODECHANNEL                    
#define J1939RM_EQ2_NODECHANNELSTATEIDXOFNODECHANNEL                  
#define J1939RM_EQ2_NODECHANNELCHANNELTABLEIND                        
#define J1939RM_EQ2_USERUSERIDXOFNODEUSER                             
#define J1939RM_EQ2_NODEUSERUSERTABLEIND                              
#define J1939RM_EQ2_REQ2QUEUEIND                                      
#define J1939RM_EQ2_REQQUEUEIND                                       
#define J1939RM_EQ2_REQTIMEOUTIND                                     
#define J1939RM_EQ2_REQUESTINDICATION                                 
#define J1939RM_EQ2_REQUESTTIMEOUTINDICATION                          
#define J1939RM_EQ2_RTEACKINDICATION                                  
#define J1939RM_EQ2_RTEREQUESTINDICATION                              
#define J1939RM_EQ2_RTEREQUESTTIMEOUTINDICATION                       
#define J1939RM_EQ2_CHANNELIDXOFRXPDU                                 
#define J1939RM_EQ2_INVALIDHNDOFRXPDU                                 
#define J1939RM_EQ2_METADATALENGTHOFRXPDU                             
#define J1939RM_EQ2_PDUTYPEOFRXPDU                                    
#define J1939RM_EQ2_CHANNELIDXOFTXPDU                                 
#define J1939RM_EQ2_INVALIDHNDOFTXPDU                                 
#define J1939RM_EQ2_METADATALENGTHOFTXPDU                             
#define J1939RM_EQ2_PDUIDOFTXPDU                                      
#define J1939RM_EQ2_PDUTYPEOFTXPDU                                    
#define J1939RM_EQ2_TXPDUSTATEIDXOFTXPDU                              
#define J1939RM_EQ2_ACKINDICATIONIDXOFUSER                            
#define J1939RM_EQ2_ACKINDICATIONUSEDOFUSER                           
#define J1939RM_EQ2_COMIPDUINDENDIDXOFUSER                            
#define J1939RM_EQ2_COMIPDUINDSTARTIDXOFUSER                          
#define J1939RM_EQ2_COMIPDUINDUSEDOFUSER                              
#define J1939RM_EQ2_INVALIDHNDOFUSER                                  
#define J1939RM_EQ2_NODEIDXOFUSER                                     
#define J1939RM_EQ2_REQUESTINDICATIONIDXOFUSER                        
#define J1939RM_EQ2_REQUESTINDICATIONUSEDOFUSER                       
#define J1939RM_EQ2_REQUESTTIMEOUTINDICATIONIDXOFUSER                 
#define J1939RM_EQ2_REQUESTTIMEOUTINDICATIONUSEDOFUSER                
#define J1939RM_EQ2_RTEACKINDICATIONIDXOFUSER                         
#define J1939RM_EQ2_RTEACKINDICATIONUSEDOFUSER                        
#define J1939RM_EQ2_RTEREQUESTINDICATIONIDXOFUSER                     
#define J1939RM_EQ2_RTEREQUESTINDICATIONUSEDOFUSER                    
#define J1939RM_EQ2_RTEREQUESTTIMEOUTINDICATIONIDXOFUSER              
#define J1939RM_EQ2_RTEREQUESTTIMEOUTINDICATIONUSEDOFUSER             
#define J1939RM_EQ2_USERACKINDICATIONOFUSER                           
#define J1939RM_EQ2_USERACKPGNINDENDIDXOFUSER                         
#define J1939RM_EQ2_USERACKPGNINDSTARTIDXOFUSER                       
#define J1939RM_EQ2_USERACKPGNINDUSEDOFUSER                           
#define J1939RM_EQ2_USERPGNINDENDIDXOFUSER                            
#define J1939RM_EQ2_USERPGNINDSTARTIDXOFUSER                          
#define J1939RM_EQ2_USERPGNINDUSEDOFUSER                              
#define J1939RM_EQ2_USERREQUESTINDICATIONOFUSER                       
#define J1939RM_EQ2_USERSENDACKOFUSER                                 
#define J1939RM_EQ2_USERSENDREQUESTOFUSER                             
#define J1939RM_EQ2_USERTIMEOUTSUPERVISIONOFUSER                      
#define J1939RM_EQ2_USERTYPEOFUSER                                    
#define J1939RM_EQ2_ACKPGNOFUSERACKPGN                                
#define J1939RM_EQ2_USERACKPGNIND                                     
#define J1939RM_EQ2_PGNOFUSERPGN                                      
#define J1939RM_EQ2_USERPGNIND                                        
#define J1939RM_EQ2_ACKQUEUEINDOFPCCONFIG                             J1939Rm_AckQueueInd
#define J1939RM_EQ2_ACKQUEUEOFPCCONFIG                                J1939Rm_AckQueue.raw
#define J1939RM_EQ2_CHANNELNODENODETABLEINDOFPCCONFIG                 J1939Rm_ChannelNodeNodeTableInd
#define J1939RM_EQ2_CHANNELNODEOFPCCONFIG                             J1939Rm_ChannelNode
#define J1939RM_EQ2_CHANNELOFPCCONFIG                                 J1939Rm_Channel
#define J1939RM_EQ2_CHANNELSTATEOFPCCONFIG                            J1939Rm_ChannelState.raw
#define J1939RM_EQ2_COMIPDUDESTOFPCCONFIG                             J1939Rm_ComIPduDest
#define J1939RM_EQ2_COMIPDUINDOFPCCONFIG                              J1939Rm_ComIPduInd
#define J1939RM_EQ2_COMIPDUOFPCCONFIG                                 J1939Rm_ComIPdu
#define J1939RM_EQ2_COMMCHANNELOFPCCONFIG                             J1939Rm_ComMChannel
#define J1939RM_EQ2_FINALMAGICNUMBEROFPCCONFIG                        
#define J1939RM_EQ2_INITDATAHASHCODEOFPCCONFIG                        
#define J1939RM_EQ2_NMNODEOFPCCONFIG                                  J1939Rm_NmNode
#define J1939RM_EQ2_NODECHANNELCHANNELTABLEINDOFPCCONFIG              J1939Rm_NodeChannelChannelTableInd
#define J1939RM_EQ2_NODECHANNELOFPCCONFIG                             J1939Rm_NodeChannel
#define J1939RM_EQ2_NODECHANNELSTATEOFPCCONFIG                        J1939Rm_NodeChannelState
#define J1939RM_EQ2_NODEOFPCCONFIG                                    J1939Rm_Node
#define J1939RM_EQ2_NODEUSEROFPCCONFIG                                J1939Rm_NodeUser
#define J1939RM_EQ2_NODEUSERUSERTABLEINDOFPCCONFIG                    J1939Rm_NodeUserUserTableInd
#define J1939RM_EQ2_REQQUEUEINDOFPCCONFIG                             J1939Rm_ReqQueueInd
#define J1939RM_EQ2_REQQUEUEOFPCCONFIG                                J1939Rm_ReqQueue.raw
#define J1939RM_EQ2_REQTIMEOUTINDOFPCCONFIG                           J1939Rm_ReqTimeoutInd
#define J1939RM_EQ2_REQTIMEOUTOFPCCONFIG                              J1939Rm_ReqTimeout.raw
#define J1939RM_EQ2_REQUESTINDICATIONOFPCCONFIG                       J1939Rm_RequestIndication
#define J1939RM_EQ2_RXPDUOFPCCONFIG                                   J1939Rm_RxPdu
#define J1939RM_EQ2_TXPDUOFPCCONFIG                                   J1939Rm_TxPdu
#define J1939RM_EQ2_TXPDUSTATEOFPCCONFIG                              J1939Rm_TxPduState.raw
#define J1939RM_EQ2_USEROFPCCONFIG                                    J1939Rm_User
#define J1939RM_EQ2_USERPGNINDOFPCCONFIG                              J1939Rm_UserPGNInd
#define J1939RM_EQ2_USERPGNOFPCCONFIG                                 J1939Rm_UserPGN
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCSymbolicInitializationPointers  J1939Rm Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define J1939Rm_Config_Ptr                                            NULL_PTR  /**< symbolic identifier which shall be used to initialize 'J1939Rm' */
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCInitializationSymbols  J1939Rm Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define J1939Rm_Config                                                NULL_PTR  /**< symbolic identifier which could be used to initialize 'J1939Rm */
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCGeneral  J1939Rm General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define J1939RM_CHECK_INIT_POINTER                                    STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define J1939RM_FINAL_MAGIC_NUMBER                                    0x3B1EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of J1939Rm */
#define J1939RM_INDIVIDUAL_POSTBUILD                                  STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'J1939Rm' is not configured to be postbuild capable. */
#define J1939RM_INIT_DATA                                             J1939RM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define J1939RM_INIT_DATA_HASH_CODE                                   -788428429L  /**< the precompile constant to validate the initialization structure at initialization time of J1939Rm with a hashcode. The seed value is '0x3B1EU' */
#define J1939RM_USE_ECUM_BSW_ERROR_HOOK                               STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define J1939RM_USE_INIT_POINTER                                      STD_OFF  /**< STD_ON if the init pointer J1939Rm shall be used. */
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
  \defgroup  J1939RmPCGetRootDataMacros  J1939Rm Get Root Data Macros (PRE_COMPILE)
  \brief  These are used to get data pointers of root data.
  \{
*/ 
#define J1939Rm_GetFinalMagicNumberOfPCConfig()                       
#define J1939Rm_GetInitDataHashCodeOfPCConfig()                       
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCGetConstantDuplicatedRootDataMacros  J1939Rm Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define J1939Rm_GetAckQueueIndOfPCConfig()                            J1939Rm_AckQueueInd  /**< the pointer to J1939Rm_AckQueueInd */
#define J1939Rm_GetAckQueueOfPCConfig()                               J1939Rm_AckQueue.raw  /**< the pointer to J1939Rm_AckQueue */
#define J1939Rm_GetChannelNodeNodeTableIndOfPCConfig()                J1939Rm_ChannelNodeNodeTableInd  /**< the pointer to J1939Rm_ChannelNodeNodeTableInd */
#define J1939Rm_GetChannelNodeOfPCConfig()                            J1939Rm_ChannelNode  /**< the pointer to J1939Rm_ChannelNode */
#define J1939Rm_GetChannelOfPCConfig()                                J1939Rm_Channel  /**< the pointer to J1939Rm_Channel */
#define J1939Rm_GetChannelStateOfPCConfig()                           J1939Rm_ChannelState.raw  /**< the pointer to J1939Rm_ChannelState */
#define J1939Rm_GetComIPduDestOfPCConfig()                            J1939Rm_ComIPduDest  /**< the pointer to J1939Rm_ComIPduDest */
#define J1939Rm_GetComIPduIndOfPCConfig()                             J1939Rm_ComIPduInd  /**< the pointer to J1939Rm_ComIPduInd */
#define J1939Rm_GetComIPduOfPCConfig()                                J1939Rm_ComIPdu  /**< the pointer to J1939Rm_ComIPdu */
#define J1939Rm_GetComMChannelOfPCConfig()                            J1939Rm_ComMChannel  /**< the pointer to J1939Rm_ComMChannel */
#define J1939Rm_GetMainPeriodOfPCConfig()                             10U  /**< J1939Rm main function cycle time in [ms]. */
#define J1939Rm_GetNmNodeOfPCConfig()                                 J1939Rm_NmNode  /**< the pointer to J1939Rm_NmNode */
#define J1939Rm_GetNodeChannelChannelTableIndOfPCConfig()             J1939Rm_NodeChannelChannelTableInd  /**< the pointer to J1939Rm_NodeChannelChannelTableInd */
#define J1939Rm_GetNodeChannelOfPCConfig()                            J1939Rm_NodeChannel  /**< the pointer to J1939Rm_NodeChannel */
#define J1939Rm_GetNodeChannelStateOfPCConfig()                       J1939Rm_NodeChannelState  /**< the pointer to J1939Rm_NodeChannelState */
#define J1939Rm_GetNodeOfPCConfig()                                   J1939Rm_Node  /**< the pointer to J1939Rm_Node */
#define J1939Rm_GetNodeUserOfPCConfig()                               J1939Rm_NodeUser  /**< the pointer to J1939Rm_NodeUser */
#define J1939Rm_GetNodeUserUserTableIndOfPCConfig()                   J1939Rm_NodeUserUserTableInd  /**< the pointer to J1939Rm_NodeUserUserTableInd */
#define J1939Rm_GetReqQueueIndOfPCConfig()                            J1939Rm_ReqQueueInd  /**< the pointer to J1939Rm_ReqQueueInd */
#define J1939Rm_GetReqQueueOfPCConfig()                               J1939Rm_ReqQueue.raw  /**< the pointer to J1939Rm_ReqQueue */
#define J1939Rm_GetReqTimeoutIndOfPCConfig()                          J1939Rm_ReqTimeoutInd  /**< the pointer to J1939Rm_ReqTimeoutInd */
#define J1939Rm_GetReqTimeoutOfPCConfig()                             J1939Rm_ReqTimeout.raw  /**< the pointer to J1939Rm_ReqTimeout */
#define J1939Rm_GetRequestIndicationOfPCConfig()                      J1939Rm_RequestIndication  /**< the pointer to J1939Rm_RequestIndication */
#define J1939Rm_GetRxPduOfPCConfig()                                  J1939Rm_RxPdu  /**< the pointer to J1939Rm_RxPdu */
#define J1939Rm_GetSizeOfAckQueueIndOfPCConfig()                      20U  /**< the number of accomplishable value elements in J1939Rm_AckQueueInd */
#define J1939Rm_GetSizeOfAckQueueOfPCConfig()                         20U  /**< the number of accomplishable value elements in J1939Rm_AckQueue */
#define J1939Rm_GetSizeOfChannelNodeNodeTableIndOfPCConfig()          2U  /**< the number of accomplishable value elements in J1939Rm_ChannelNodeNodeTableInd */
#define J1939Rm_GetSizeOfChannelNodeOfPCConfig()                      2U  /**< the number of accomplishable value elements in J1939Rm_ChannelNode */
#define J1939Rm_GetSizeOfChannelOfPCConfig()                          2U  /**< the number of accomplishable value elements in J1939Rm_Channel */
#define J1939Rm_GetSizeOfChannelStateOfPCConfig()                     2U  /**< the number of accomplishable value elements in J1939Rm_ChannelState */
#define J1939Rm_GetSizeOfComIPduDestOfPCConfig()                      1U  /**< the number of accomplishable value elements in J1939Rm_ComIPduDest */
#define J1939Rm_GetSizeOfComIPduIndOfPCConfig()                       1U  /**< the number of accomplishable value elements in J1939Rm_ComIPduInd */
#define J1939Rm_GetSizeOfComIPduOfPCConfig()                          1U  /**< the number of accomplishable value elements in J1939Rm_ComIPdu */
#define J1939Rm_GetSizeOfComMChannelOfPCConfig()                      5U  /**< the number of accomplishable value elements in J1939Rm_ComMChannel */
#define J1939Rm_GetSizeOfNmNodeOfPCConfig()                           1U  /**< the number of accomplishable value elements in J1939Rm_NmNode */
#define J1939Rm_GetSizeOfNodeChannelChannelTableIndOfPCConfig()       2U  /**< the number of accomplishable value elements in J1939Rm_NodeChannelChannelTableInd */
#define J1939Rm_GetSizeOfNodeChannelOfPCConfig()                      2U  /**< the number of accomplishable value elements in J1939Rm_NodeChannel */
#define J1939Rm_GetSizeOfNodeChannelStateOfPCConfig()                 2U  /**< the number of accomplishable value elements in J1939Rm_NodeChannelState */
#define J1939Rm_GetSizeOfNodeOfPCConfig()                             1U  /**< the number of accomplishable value elements in J1939Rm_Node */
#define J1939Rm_GetSizeOfNodeUserOfPCConfig()                         3U  /**< the number of accomplishable value elements in J1939Rm_NodeUser */
#define J1939Rm_GetSizeOfNodeUserUserTableIndOfPCConfig()             3U  /**< the number of accomplishable value elements in J1939Rm_NodeUserUserTableInd */
#define J1939Rm_GetSizeOfReqQueueIndOfPCConfig()                      20U  /**< the number of accomplishable value elements in J1939Rm_ReqQueueInd */
#define J1939Rm_GetSizeOfReqQueueOfPCConfig()                         20U  /**< the number of accomplishable value elements in J1939Rm_ReqQueue */
#define J1939Rm_GetSizeOfReqTimeoutIndOfPCConfig()                    20U  /**< the number of accomplishable value elements in J1939Rm_ReqTimeoutInd */
#define J1939Rm_GetSizeOfReqTimeoutOfPCConfig()                       20U  /**< the number of accomplishable value elements in J1939Rm_ReqTimeout */
#define J1939Rm_GetSizeOfRequestIndicationOfPCConfig()                1U  /**< the number of accomplishable value elements in J1939Rm_RequestIndication */
#define J1939Rm_GetSizeOfRxPduOfPCConfig()                            2U  /**< the number of accomplishable value elements in J1939Rm_RxPdu */
#define J1939Rm_GetSizeOfTxPduOfPCConfig()                            2U  /**< the number of accomplishable value elements in J1939Rm_TxPdu */
#define J1939Rm_GetSizeOfTxPduStateOfPCConfig()                       2U  /**< the number of accomplishable value elements in J1939Rm_TxPduState */
#define J1939Rm_GetSizeOfUserOfPCConfig()                             3U  /**< the number of accomplishable value elements in J1939Rm_User */
#define J1939Rm_GetSizeOfUserPGNIndOfPCConfig()                       1U  /**< the number of accomplishable value elements in J1939Rm_UserPGNInd */
#define J1939Rm_GetSizeOfUserPGNOfPCConfig()                          1U  /**< the number of accomplishable value elements in J1939Rm_UserPGN */
#define J1939Rm_GetTxConfTimeoutOfPCConfig()                          150U  /**< Tx confirmation timeout in main function cycles. */
#define J1939Rm_GetTxPduOfPCConfig()                                  J1939Rm_TxPdu  /**< the pointer to J1939Rm_TxPdu */
#define J1939Rm_GetTxPduStateOfPCConfig()                             J1939Rm_TxPduState.raw  /**< the pointer to J1939Rm_TxPduState */
#define J1939Rm_GetUserOfPCConfig()                                   J1939Rm_User  /**< the pointer to J1939Rm_User */
#define J1939Rm_GetUserPGNIndOfPCConfig()                             J1939Rm_UserPGNInd  /**< the pointer to J1939Rm_UserPGNInd */
#define J1939Rm_GetUserPGNOfPCConfig()                                J1939Rm_UserPGN  /**< the pointer to J1939Rm_UserPGN */
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCGetDataMacros  J1939Rm Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define J1939Rm_GetAckIndication(Index)                               
#define J1939Rm_GetAckQueue(Index)                                    (J1939Rm_GetAckQueueOfPCConfig()[(Index)])
#define J1939Rm_GetAckQueueInd(Index)                                 (J1939Rm_GetAckQueueIndOfPCConfig()[(Index)])
#define J1939Rm_GetAckQueueIndEndIdxOfChannel(Index)                  (J1939Rm_GetChannelOfPCConfig()[(Index)].AckQueueIndEndIdxOfChannel)
#define J1939Rm_GetAckQueueIndStartIdxOfChannel(Index)                (J1939Rm_GetChannelOfPCConfig()[(Index)].AckQueueIndStartIdxOfChannel)
#define J1939Rm_GetAckQueueSizeOfChannel(Index)                       (J1939Rm_GetChannelOfPCConfig()[(Index)].AckQueueSizeOfChannel)
#define J1939Rm_GetChannelNodeNodeTableIndEndIdxOfChannel(Index)      (J1939Rm_GetChannelOfPCConfig()[(Index)].ChannelNodeNodeTableIndEndIdxOfChannel)
#define J1939Rm_GetChannelNodeNodeTableIndStartIdxOfChannel(Index)    (J1939Rm_GetChannelOfPCConfig()[(Index)].ChannelNodeNodeTableIndStartIdxOfChannel)
#define J1939Rm_GetComMChannelIdOfChannel(Index)                      (J1939Rm_GetChannelOfPCConfig()[(Index)].ComMChannelIdOfChannel)
#define J1939Rm_IsIsobusChannelOfChannel(Index)                       
#define J1939Rm_GetReq2QueueIndEndIdxOfChannel(Index)                 
#define J1939Rm_GetReq2QueueIndStartIdxOfChannel(Index)               
#define J1939Rm_IsReq2QueueIndUsedOfChannel(Index)                    
#define J1939Rm_GetReqQueueIndEndIdxOfChannel(Index)                  (J1939Rm_GetChannelOfPCConfig()[(Index)].ReqQueueIndEndIdxOfChannel)
#define J1939Rm_GetReqQueueIndStartIdxOfChannel(Index)                (J1939Rm_GetChannelOfPCConfig()[(Index)].ReqQueueIndStartIdxOfChannel)
#define J1939Rm_GetReqTimeoutIndEndIdxOfChannel(Index)                (J1939Rm_GetChannelOfPCConfig()[(Index)].ReqTimeoutIndEndIdxOfChannel)
#define J1939Rm_GetReqTimeoutIndStartIdxOfChannel(Index)              (J1939Rm_GetChannelOfPCConfig()[(Index)].ReqTimeoutIndStartIdxOfChannel)
#define J1939Rm_GetRequest2QueueSizeOfChannel(Index)                  (J1939Rm_GetChannelOfPCConfig()[(Index)].Request2QueueSizeOfChannel)
#define J1939Rm_GetRequestQueueSizeOfChannel(Index)                   (J1939Rm_GetChannelOfPCConfig()[(Index)].RequestQueueSizeOfChannel)
#define J1939Rm_GetRequestTimeoutMonitorsOfChannel(Index)             (J1939Rm_GetChannelOfPCConfig()[(Index)].RequestTimeoutMonitorsOfChannel)
#define J1939Rm_GetRxPduAckmIdxOfChannel(Index)                       
#define J1939Rm_IsRxPduAckmUsedOfChannel(Index)                       
#define J1939Rm_GetRxPduRqst2IdxOfChannel(Index)                      
#define J1939Rm_IsRxPduRqst2UsedOfChannel(Index)                      
#define J1939Rm_GetRxPduRqstIdxOfChannel(Index)                       (J1939Rm_GetChannelOfPCConfig()[(Index)].RxPduRqstIdxOfChannel)
#define J1939Rm_GetTxPduAckmIdxOfChannel(Index)                       (J1939Rm_GetChannelOfPCConfig()[(Index)].TxPduAckmIdxOfChannel)
#define J1939Rm_GetTxPduRqst2IdxOfChannel(Index)                      
#define J1939Rm_IsTxPduRqst2UsedOfChannel(Index)                      
#define J1939Rm_GetTxPduRqstIdxOfChannel(Index)                       
#define J1939Rm_IsTxPduRqstUsedOfChannel(Index)                       
#define J1939Rm_GetNodeChannelStateIdxOfChannelNode(Index)            (J1939Rm_GetChannelNodeOfPCConfig()[(Index)].NodeChannelStateIdxOfChannelNode)
#define J1939Rm_GetNodeNodeIdxOfChannelNode(Index)                    (J1939Rm_GetChannelNodeOfPCConfig()[(Index)].NodeNodeIdxOfChannelNode)
#define J1939Rm_GetChannelNodeNodeTableInd(Index)                     (J1939Rm_GetChannelNodeNodeTableIndOfPCConfig()[(Index)])
#define J1939Rm_GetChannelState(Index)                                (J1939Rm_GetChannelStateOfPCConfig()[(Index)])
#define J1939Rm_GetComIPduDestEndIdxOfComIPdu(Index)                  (J1939Rm_GetComIPduOfPCConfig()[(Index)].ComIPduDestEndIdxOfComIPdu)
#define J1939Rm_GetComIPduDestStartIdxOfComIPdu(Index)                (J1939Rm_GetComIPduOfPCConfig()[(Index)].ComIPduDestStartIdxOfComIPdu)
#define J1939Rm_GetExtId1OfComIPdu(Index)                             (J1939Rm_GetComIPduOfPCConfig()[(Index)].ExtId1OfComIPdu)
#define J1939Rm_GetExtId2OfComIPdu(Index)                             (J1939Rm_GetComIPduOfPCConfig()[(Index)].ExtId2OfComIPdu)
#define J1939Rm_GetExtId3OfComIPdu(Index)                             (J1939Rm_GetComIPduOfPCConfig()[(Index)].ExtId3OfComIPdu)
#define J1939Rm_GetExtIdUsageOfComIPdu(Index)                         (J1939Rm_GetComIPduOfPCConfig()[(Index)].ExtIdUsageOfComIPdu)
#define J1939Rm_GetMetaDataLengthOfComIPdu(Index)                     (J1939Rm_GetComIPduOfPCConfig()[(Index)].MetaDataLengthOfComIPdu)
#define J1939Rm_GetPGNOfComIPdu(Index)                                (J1939Rm_GetComIPduOfPCConfig()[(Index)].PGNOfComIPdu)
#define J1939Rm_GetPduIdOfComIPdu(Index)                              (J1939Rm_GetComIPduOfPCConfig()[(Index)].PduIdOfComIPdu)
#define J1939Rm_GetChannelIdxOfComIPduDest(Index)                     (J1939Rm_GetComIPduDestOfPCConfig()[(Index)].ChannelIdxOfComIPduDest)
#define J1939Rm_GetDAOfComIPduDest(Index)                             (J1939Rm_GetComIPduDestOfPCConfig()[(Index)].DAOfComIPduDest)
#define J1939Rm_GetComIPduInd(Index)                                  (J1939Rm_GetComIPduIndOfPCConfig()[(Index)])
#define J1939Rm_GetChannelIdxOfComMChannel(Index)                     (J1939Rm_GetComMChannelOfPCConfig()[(Index)].ChannelIdxOfComMChannel)
#define J1939Rm_GetNodeIdxOfNmNode(Index)                             (J1939Rm_GetNmNodeOfPCConfig()[(Index)].NodeIdxOfNmNode)
#define J1939Rm_GetNodeAddressOfNode(Index)                           (J1939Rm_GetNodeOfPCConfig()[(Index)].NodeAddressOfNode)
#define J1939Rm_GetNodeChannelChannelTableIndEndIdxOfNode(Index)      (J1939Rm_GetNodeOfPCConfig()[(Index)].NodeChannelChannelTableIndEndIdxOfNode)
#define J1939Rm_GetNodeChannelChannelTableIndStartIdxOfNode(Index)    (J1939Rm_GetNodeOfPCConfig()[(Index)].NodeChannelChannelTableIndStartIdxOfNode)
#define J1939Rm_GetNodeIdOfNode(Index)                                (J1939Rm_GetNodeOfPCConfig()[(Index)].NodeIdOfNode)
#define J1939Rm_GetNodeUserUserTableIndEndIdxOfNode(Index)            (J1939Rm_GetNodeOfPCConfig()[(Index)].NodeUserUserTableIndEndIdxOfNode)
#define J1939Rm_GetNodeUserUserTableIndStartIdxOfNode(Index)          (J1939Rm_GetNodeOfPCConfig()[(Index)].NodeUserUserTableIndStartIdxOfNode)
#define J1939Rm_GetChannelChannelIdxOfNodeChannel(Index)              (J1939Rm_GetNodeChannelOfPCConfig()[(Index)].ChannelChannelIdxOfNodeChannel)
#define J1939Rm_GetNodeChannelStateIdxOfNodeChannel(Index)            (J1939Rm_GetNodeChannelOfPCConfig()[(Index)].NodeChannelStateIdxOfNodeChannel)
#define J1939Rm_GetNodeChannelChannelTableInd(Index)                  (J1939Rm_GetNodeChannelChannelTableIndOfPCConfig()[(Index)])
#define J1939Rm_GetNodeChannelState(Index)                            (J1939Rm_GetNodeChannelStateOfPCConfig()[(Index)])
#define J1939Rm_GetUserUserIdxOfNodeUser(Index)                       (J1939Rm_GetNodeUserOfPCConfig()[(Index)].UserUserIdxOfNodeUser)
#define J1939Rm_GetNodeUserUserTableInd(Index)                        (J1939Rm_GetNodeUserUserTableIndOfPCConfig()[(Index)])
#define J1939Rm_GetReq2Queue(Index)                                   
#define J1939Rm_GetReq2QueueInd(Index)                                
#define J1939Rm_GetReqQueue(Index)                                    (J1939Rm_GetReqQueueOfPCConfig()[(Index)])
#define J1939Rm_GetReqQueueInd(Index)                                 (J1939Rm_GetReqQueueIndOfPCConfig()[(Index)])
#define J1939Rm_GetReqTimeout(Index)                                  (J1939Rm_GetReqTimeoutOfPCConfig()[(Index)])
#define J1939Rm_GetReqTimeoutInd(Index)                               (J1939Rm_GetReqTimeoutIndOfPCConfig()[(Index)])
#define J1939Rm_GetRequestIndication(Index)                           (J1939Rm_GetRequestIndicationOfPCConfig()[(Index)])
#define J1939Rm_GetRequestTimeoutIndication(Index)                    
#define J1939Rm_GetRteAckIndication(Index)                            
#define J1939Rm_GetRteRequestIndication(Index)                        
#define J1939Rm_GetRteRequestTimeoutIndication(Index)                 
#define J1939Rm_GetChannelIdxOfRxPdu(Index)                           (J1939Rm_GetRxPduOfPCConfig()[(Index)].ChannelIdxOfRxPdu)
#define J1939Rm_IsInvalidHndOfRxPdu(Index)                            
#define J1939Rm_GetMetaDataLengthOfRxPdu(Index)                       (J1939Rm_GetRxPduOfPCConfig()[(Index)].MetaDataLengthOfRxPdu)
#define J1939Rm_GetPduTypeOfRxPdu(Index)                              (J1939Rm_GetRxPduOfPCConfig()[(Index)].PduTypeOfRxPdu)
#define J1939Rm_GetChannelIdxOfTxPdu(Index)                           (J1939Rm_GetTxPduOfPCConfig()[(Index)].ChannelIdxOfTxPdu)
#define J1939Rm_IsInvalidHndOfTxPdu(Index)                            
#define J1939Rm_GetMetaDataLengthOfTxPdu(Index)                       (J1939Rm_GetTxPduOfPCConfig()[(Index)].MetaDataLengthOfTxPdu)
#define J1939Rm_GetPduIdOfTxPdu(Index)                                (J1939Rm_GetTxPduOfPCConfig()[(Index)].PduIdOfTxPdu)
#define J1939Rm_GetPduTypeOfTxPdu(Index)                              (J1939Rm_GetTxPduOfPCConfig()[(Index)].PduTypeOfTxPdu)
#define J1939Rm_GetTxPduStateIdxOfTxPdu(Index)                        (J1939Rm_GetTxPduOfPCConfig()[(Index)].TxPduStateIdxOfTxPdu)
#define J1939Rm_GetTxPduState(Index)                                  (J1939Rm_GetTxPduStateOfPCConfig()[(Index)])
#define J1939Rm_GetAckIndicationIdxOfUser(Index)                      
#define J1939Rm_IsAckIndicationUsedOfUser(Index)                      
#define J1939Rm_GetComIPduIndEndIdxOfUser(Index)                      (J1939Rm_GetUserOfPCConfig()[(Index)].ComIPduIndEndIdxOfUser)
#define J1939Rm_GetComIPduIndStartIdxOfUser(Index)                    (J1939Rm_GetUserOfPCConfig()[(Index)].ComIPduIndStartIdxOfUser)
#define J1939Rm_IsInvalidHndOfUser(Index)                             
#define J1939Rm_GetNodeIdxOfUser(Index)                               (J1939Rm_GetUserOfPCConfig()[(Index)].NodeIdxOfUser)
#define J1939Rm_GetRequestIndicationIdxOfUser(Index)                  (J1939Rm_GetUserOfPCConfig()[(Index)].RequestIndicationIdxOfUser)
#define J1939Rm_GetRequestTimeoutIndicationIdxOfUser(Index)           
#define J1939Rm_IsRequestTimeoutIndicationUsedOfUser(Index)           
#define J1939Rm_GetRteAckIndicationIdxOfUser(Index)                   
#define J1939Rm_IsRteAckIndicationUsedOfUser(Index)                   
#define J1939Rm_GetRteRequestIndicationIdxOfUser(Index)               
#define J1939Rm_IsRteRequestIndicationUsedOfUser(Index)               
#define J1939Rm_GetRteRequestTimeoutIndicationIdxOfUser(Index)        
#define J1939Rm_IsRteRequestTimeoutIndicationUsedOfUser(Index)        
#define J1939Rm_IsUserAckIndicationOfUser(Index)                      
#define J1939Rm_GetUserAckPGNIndEndIdxOfUser(Index)                   
#define J1939Rm_GetUserAckPGNIndStartIdxOfUser(Index)                 
#define J1939Rm_IsUserAckPGNIndUsedOfUser(Index)                      
#define J1939Rm_GetUserPGNIndEndIdxOfUser(Index)                      (J1939Rm_GetUserOfPCConfig()[(Index)].UserPGNIndEndIdxOfUser)
#define J1939Rm_GetUserPGNIndStartIdxOfUser(Index)                    (J1939Rm_GetUserOfPCConfig()[(Index)].UserPGNIndStartIdxOfUser)
#define J1939Rm_IsUserRequestIndicationOfUser(Index)                  ((J1939Rm_GetUserOfPCConfig()[(Index)].UserRequestIndicationOfUser) != FALSE)
#define J1939Rm_IsUserSendAckOfUser(Index)                            
#define J1939Rm_IsUserSendRequestOfUser(Index)                        
#define J1939Rm_IsUserTimeoutSupervisionOfUser(Index)                 
#define J1939Rm_GetUserTypeOfUser(Index)                              (J1939Rm_GetUserOfPCConfig()[(Index)].UserTypeOfUser)
#define J1939Rm_GetAckPGNOfUserAckPGN(Index)                          
#define J1939Rm_GetUserAckPGNInd(Index)                               
#define J1939Rm_GetPGNOfUserPGN(Index)                                (J1939Rm_GetUserPGNOfPCConfig()[(Index)].PGNOfUserPGN)
#define J1939Rm_GetUserPGNInd(Index)                                  (J1939Rm_GetUserPGNIndOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCGetDeduplicatedDataMacros  J1939Rm Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define J1939Rm_IsAckQueueIndUsedOfChannel(Index)                     (((boolean)(J1939Rm_GetAckQueueIndStartIdxOfChannel(Index) != J1939RM_NO_ACKQUEUEINDSTARTIDXOFCHANNEL)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Rm_AckQueueInd */
#define J1939Rm_IsChannelNodeNodeTableIndUsedOfChannel(Index)         (((boolean)(J1939Rm_GetChannelNodeNodeTableIndStartIdxOfChannel(Index) != J1939RM_NO_CHANNELNODENODETABLEINDSTARTIDXOFCHANNEL)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Rm_ChannelNodeNodeTableInd */
#define J1939Rm_IsReqQueueIndUsedOfChannel(Index)                     (((boolean)(J1939Rm_GetReqQueueIndStartIdxOfChannel(Index) != J1939RM_NO_REQQUEUEINDSTARTIDXOFCHANNEL)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Rm_ReqQueueInd */
#define J1939Rm_IsReqTimeoutIndUsedOfChannel(Index)                   (((boolean)(J1939Rm_GetReqTimeoutIndStartIdxOfChannel(Index) != J1939RM_NO_REQTIMEOUTINDSTARTIDXOFCHANNEL)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Rm_ReqTimeoutInd */
#define J1939Rm_IsRxPduRqstUsedOfChannel(Index)                       (((boolean)(J1939Rm_GetRxPduRqstIdxOfChannel(Index) != J1939RM_NO_RXPDURQSTIDXOFCHANNEL)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Rm_RxPdu */
#define J1939Rm_IsTxPduAckmUsedOfChannel(Index)                       (((boolean)(J1939Rm_GetTxPduAckmIdxOfChannel(Index) != J1939RM_NO_TXPDUACKMIDXOFCHANNEL)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Rm_TxPdu */
#define J1939Rm_IsChannelUsedOfComMChannel(Index)                     (((boolean)(J1939Rm_GetChannelIdxOfComMChannel(Index) != J1939RM_NO_CHANNELIDXOFCOMMCHANNEL)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Rm_Channel */
#define J1939Rm_GetFinalMagicNumber()                                 
#define J1939Rm_GetInitDataHashCode()                                 
#define J1939Rm_GetMainPeriod()                                       J1939Rm_GetMainPeriodOfPCConfig()
#define J1939Rm_IsNodeUsedOfNmNode(Index)                             (((boolean)(J1939Rm_GetNodeIdxOfNmNode(Index) != J1939RM_NO_NODEIDXOFNMNODE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Rm_Node */
#define J1939Rm_IsNodeChannelChannelTableIndUsedOfNode(Index)         (((boolean)(J1939Rm_GetNodeChannelChannelTableIndStartIdxOfNode(Index) != J1939RM_NO_NODECHANNELCHANNELTABLEINDSTARTIDXOFNODE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Rm_NodeChannelChannelTableInd */
#define J1939Rm_IsNodeUserUserTableIndUsedOfNode(Index)               (((boolean)(J1939Rm_GetNodeUserUserTableIndStartIdxOfNode(Index) != J1939RM_NO_NODEUSERUSERTABLEINDSTARTIDXOFNODE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Rm_NodeUserUserTableInd */
#define J1939Rm_GetSizeOfAckQueue()                                   J1939Rm_GetSizeOfAckQueueOfPCConfig()
#define J1939Rm_GetSizeOfAckQueueInd()                                J1939Rm_GetSizeOfAckQueueIndOfPCConfig()
#define J1939Rm_GetSizeOfChannel()                                    J1939Rm_GetSizeOfChannelOfPCConfig()
#define J1939Rm_GetSizeOfChannelNode()                                J1939Rm_GetSizeOfChannelNodeOfPCConfig()
#define J1939Rm_GetSizeOfChannelNodeNodeTableInd()                    J1939Rm_GetSizeOfChannelNodeNodeTableIndOfPCConfig()
#define J1939Rm_GetSizeOfChannelState()                               J1939Rm_GetSizeOfChannelStateOfPCConfig()
#define J1939Rm_GetSizeOfComIPdu()                                    J1939Rm_GetSizeOfComIPduOfPCConfig()
#define J1939Rm_GetSizeOfComIPduDest()                                J1939Rm_GetSizeOfComIPduDestOfPCConfig()
#define J1939Rm_GetSizeOfComIPduInd()                                 J1939Rm_GetSizeOfComIPduIndOfPCConfig()
#define J1939Rm_GetSizeOfComMChannel()                                J1939Rm_GetSizeOfComMChannelOfPCConfig()
#define J1939Rm_GetSizeOfNmNode()                                     J1939Rm_GetSizeOfNmNodeOfPCConfig()
#define J1939Rm_GetSizeOfNode()                                       J1939Rm_GetSizeOfNodeOfPCConfig()
#define J1939Rm_GetSizeOfNodeChannel()                                J1939Rm_GetSizeOfNodeChannelOfPCConfig()
#define J1939Rm_GetSizeOfNodeChannelChannelTableInd()                 J1939Rm_GetSizeOfNodeChannelChannelTableIndOfPCConfig()
#define J1939Rm_GetSizeOfNodeChannelState()                           J1939Rm_GetSizeOfNodeChannelStateOfPCConfig()
#define J1939Rm_GetSizeOfNodeUser()                                   J1939Rm_GetSizeOfNodeUserOfPCConfig()
#define J1939Rm_GetSizeOfNodeUserUserTableInd()                       J1939Rm_GetSizeOfNodeUserUserTableIndOfPCConfig()
#define J1939Rm_GetSizeOfReqQueue()                                   J1939Rm_GetSizeOfReqQueueOfPCConfig()
#define J1939Rm_GetSizeOfReqQueueInd()                                J1939Rm_GetSizeOfReqQueueIndOfPCConfig()
#define J1939Rm_GetSizeOfReqTimeout()                                 J1939Rm_GetSizeOfReqTimeoutOfPCConfig()
#define J1939Rm_GetSizeOfReqTimeoutInd()                              J1939Rm_GetSizeOfReqTimeoutIndOfPCConfig()
#define J1939Rm_GetSizeOfRequestIndication()                          J1939Rm_GetSizeOfRequestIndicationOfPCConfig()
#define J1939Rm_GetSizeOfRxPdu()                                      J1939Rm_GetSizeOfRxPduOfPCConfig()
#define J1939Rm_GetSizeOfTxPdu()                                      J1939Rm_GetSizeOfTxPduOfPCConfig()
#define J1939Rm_GetSizeOfTxPduState()                                 J1939Rm_GetSizeOfTxPduStateOfPCConfig()
#define J1939Rm_GetSizeOfUser()                                       J1939Rm_GetSizeOfUserOfPCConfig()
#define J1939Rm_GetSizeOfUserPGN()                                    J1939Rm_GetSizeOfUserPGNOfPCConfig()
#define J1939Rm_GetSizeOfUserPGNInd()                                 J1939Rm_GetSizeOfUserPGNIndOfPCConfig()
#define J1939Rm_GetTxConfTimeout()                                    J1939Rm_GetTxConfTimeoutOfPCConfig()
#define J1939Rm_IsComIPduIndUsedOfUser(Index)                         (((boolean)(J1939Rm_GetComIPduIndStartIdxOfUser(Index) != J1939RM_NO_COMIPDUINDSTARTIDXOFUSER)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Rm_ComIPduInd */
#define J1939Rm_IsRequestIndicationUsedOfUser(Index)                  (((boolean)(J1939Rm_GetRequestIndicationIdxOfUser(Index) != J1939RM_NO_REQUESTINDICATIONIDXOFUSER)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Rm_RequestIndication */
#define J1939Rm_IsUserPGNIndUsedOfUser(Index)                         (((boolean)(J1939Rm_GetUserPGNIndStartIdxOfUser(Index) != J1939RM_NO_USERPGNINDSTARTIDXOFUSER)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Rm_UserPGNInd */
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCSetDataMacros  J1939Rm Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define J1939Rm_SetAckQueue(Index, Value)                             J1939Rm_GetAckQueueOfPCConfig()[(Index)] = (Value)
#define J1939Rm_SetChannelState(Index, Value)                         J1939Rm_GetChannelStateOfPCConfig()[(Index)] = (Value)
#define J1939Rm_SetNodeChannelState(Index, Value)                     J1939Rm_GetNodeChannelStateOfPCConfig()[(Index)] = (Value)
#define J1939Rm_SetReq2Queue(Index, Value)                            
#define J1939Rm_SetReqQueue(Index, Value)                             J1939Rm_GetReqQueueOfPCConfig()[(Index)] = (Value)
#define J1939Rm_SetReqTimeout(Index, Value)                           J1939Rm_GetReqTimeoutOfPCConfig()[(Index)] = (Value)
#define J1939Rm_SetTxPduState(Index, Value)                           J1939Rm_GetTxPduStateOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCHasMacros  J1939Rm Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define J1939Rm_HasAckIndication()                                    
#define J1939Rm_HasAckQueue()                                         (TRUE != FALSE)
#define J1939Rm_HasAckQueueInd()                                      (TRUE != FALSE)
#define J1939Rm_HasChannel()                                          (TRUE != FALSE)
#define J1939Rm_HasAckQueueIndEndIdxOfChannel()                       (TRUE != FALSE)
#define J1939Rm_HasAckQueueIndStartIdxOfChannel()                     (TRUE != FALSE)
#define J1939Rm_HasAckQueueIndUsedOfChannel()                         (TRUE != FALSE)
#define J1939Rm_HasAckQueueSizeOfChannel()                            (TRUE != FALSE)
#define J1939Rm_HasChannelNodeNodeTableIndEndIdxOfChannel()           (TRUE != FALSE)
#define J1939Rm_HasChannelNodeNodeTableIndStartIdxOfChannel()         (TRUE != FALSE)
#define J1939Rm_HasChannelNodeNodeTableIndUsedOfChannel()             (TRUE != FALSE)
#define J1939Rm_HasComMChannelIdOfChannel()                           (TRUE != FALSE)
#define J1939Rm_HasIsobusChannelOfChannel()                           
#define J1939Rm_HasReq2QueueIndEndIdxOfChannel()                      
#define J1939Rm_HasReq2QueueIndStartIdxOfChannel()                    
#define J1939Rm_HasReq2QueueIndUsedOfChannel()                        
#define J1939Rm_HasReqQueueIndEndIdxOfChannel()                       (TRUE != FALSE)
#define J1939Rm_HasReqQueueIndStartIdxOfChannel()                     (TRUE != FALSE)
#define J1939Rm_HasReqQueueIndUsedOfChannel()                         (TRUE != FALSE)
#define J1939Rm_HasReqTimeoutIndEndIdxOfChannel()                     (TRUE != FALSE)
#define J1939Rm_HasReqTimeoutIndStartIdxOfChannel()                   (TRUE != FALSE)
#define J1939Rm_HasReqTimeoutIndUsedOfChannel()                       (TRUE != FALSE)
#define J1939Rm_HasRequest2QueueSizeOfChannel()                       (TRUE != FALSE)
#define J1939Rm_HasRequestQueueSizeOfChannel()                        (TRUE != FALSE)
#define J1939Rm_HasRequestTimeoutMonitorsOfChannel()                  (TRUE != FALSE)
#define J1939Rm_HasRxPduAckmIdxOfChannel()                            
#define J1939Rm_HasRxPduAckmUsedOfChannel()                           
#define J1939Rm_HasRxPduRqst2IdxOfChannel()                           
#define J1939Rm_HasRxPduRqst2UsedOfChannel()                          
#define J1939Rm_HasRxPduRqstIdxOfChannel()                            (TRUE != FALSE)
#define J1939Rm_HasRxPduRqstUsedOfChannel()                           (TRUE != FALSE)
#define J1939Rm_HasTxPduAckmIdxOfChannel()                            (TRUE != FALSE)
#define J1939Rm_HasTxPduAckmUsedOfChannel()                           (TRUE != FALSE)
#define J1939Rm_HasTxPduRqst2IdxOfChannel()                           
#define J1939Rm_HasTxPduRqst2UsedOfChannel()                          
#define J1939Rm_HasTxPduRqstIdxOfChannel()                            
#define J1939Rm_HasTxPduRqstUsedOfChannel()                           
#define J1939Rm_HasChannelNode()                                      (TRUE != FALSE)
#define J1939Rm_HasNodeChannelStateIdxOfChannelNode()                 (TRUE != FALSE)
#define J1939Rm_HasNodeNodeIdxOfChannelNode()                         (TRUE != FALSE)
#define J1939Rm_HasChannelNodeNodeTableInd()                          (TRUE != FALSE)
#define J1939Rm_HasChannelState()                                     (TRUE != FALSE)
#define J1939Rm_HasComIPdu()                                          (TRUE != FALSE)
#define J1939Rm_HasComIPduDestEndIdxOfComIPdu()                       (TRUE != FALSE)
#define J1939Rm_HasComIPduDestStartIdxOfComIPdu()                     (TRUE != FALSE)
#define J1939Rm_HasExtId1OfComIPdu()                                  (TRUE != FALSE)
#define J1939Rm_HasExtId2OfComIPdu()                                  (TRUE != FALSE)
#define J1939Rm_HasExtId3OfComIPdu()                                  (TRUE != FALSE)
#define J1939Rm_HasExtIdUsageOfComIPdu()                              (TRUE != FALSE)
#define J1939Rm_HasMetaDataLengthOfComIPdu()                          (TRUE != FALSE)
#define J1939Rm_HasPGNOfComIPdu()                                     (TRUE != FALSE)
#define J1939Rm_HasPduIdOfComIPdu()                                   (TRUE != FALSE)
#define J1939Rm_HasComIPduDest()                                      (TRUE != FALSE)
#define J1939Rm_HasChannelIdxOfComIPduDest()                          (TRUE != FALSE)
#define J1939Rm_HasDAOfComIPduDest()                                  (TRUE != FALSE)
#define J1939Rm_HasComIPduInd()                                       (TRUE != FALSE)
#define J1939Rm_HasComMChannel()                                      (TRUE != FALSE)
#define J1939Rm_HasChannelIdxOfComMChannel()                          (TRUE != FALSE)
#define J1939Rm_HasChannelUsedOfComMChannel()                         (TRUE != FALSE)
#define J1939Rm_HasFinalMagicNumber()                                 
#define J1939Rm_HasInitDataHashCode()                                 
#define J1939Rm_HasMainPeriod()                                       (TRUE != FALSE)
#define J1939Rm_HasNmNode()                                           (TRUE != FALSE)
#define J1939Rm_HasNodeIdxOfNmNode()                                  (TRUE != FALSE)
#define J1939Rm_HasNodeUsedOfNmNode()                                 (TRUE != FALSE)
#define J1939Rm_HasNode()                                             (TRUE != FALSE)
#define J1939Rm_HasNodeAddressOfNode()                                (TRUE != FALSE)
#define J1939Rm_HasNodeChannelChannelTableIndEndIdxOfNode()           (TRUE != FALSE)
#define J1939Rm_HasNodeChannelChannelTableIndStartIdxOfNode()         (TRUE != FALSE)
#define J1939Rm_HasNodeChannelChannelTableIndUsedOfNode()             (TRUE != FALSE)
#define J1939Rm_HasNodeIdOfNode()                                     (TRUE != FALSE)
#define J1939Rm_HasNodeUserUserTableIndEndIdxOfNode()                 (TRUE != FALSE)
#define J1939Rm_HasNodeUserUserTableIndStartIdxOfNode()               (TRUE != FALSE)
#define J1939Rm_HasNodeUserUserTableIndUsedOfNode()                   (TRUE != FALSE)
#define J1939Rm_HasNodeChannel()                                      (TRUE != FALSE)
#define J1939Rm_HasChannelChannelIdxOfNodeChannel()                   (TRUE != FALSE)
#define J1939Rm_HasNodeChannelStateIdxOfNodeChannel()                 (TRUE != FALSE)
#define J1939Rm_HasNodeChannelChannelTableInd()                       (TRUE != FALSE)
#define J1939Rm_HasNodeChannelState()                                 (TRUE != FALSE)
#define J1939Rm_HasNodeUser()                                         (TRUE != FALSE)
#define J1939Rm_HasUserUserIdxOfNodeUser()                            (TRUE != FALSE)
#define J1939Rm_HasNodeUserUserTableInd()                             (TRUE != FALSE)
#define J1939Rm_HasReq2Queue()                                        
#define J1939Rm_HasReq2QueueInd()                                     
#define J1939Rm_HasReqQueue()                                         (TRUE != FALSE)
#define J1939Rm_HasReqQueueInd()                                      (TRUE != FALSE)
#define J1939Rm_HasReqTimeout()                                       (TRUE != FALSE)
#define J1939Rm_HasReqTimeoutInd()                                    (TRUE != FALSE)
#define J1939Rm_HasRequestIndication()                                (TRUE != FALSE)
#define J1939Rm_HasRequestTimeoutIndication()                         
#define J1939Rm_HasRteAckIndication()                                 
#define J1939Rm_HasRteRequestIndication()                             
#define J1939Rm_HasRteRequestTimeoutIndication()                      
#define J1939Rm_HasRxPdu()                                            (TRUE != FALSE)
#define J1939Rm_HasChannelIdxOfRxPdu()                                (TRUE != FALSE)
#define J1939Rm_HasInvalidHndOfRxPdu()                                
#define J1939Rm_HasMetaDataLengthOfRxPdu()                            (TRUE != FALSE)
#define J1939Rm_HasPduTypeOfRxPdu()                                   (TRUE != FALSE)
#define J1939Rm_HasSizeOfAckQueue()                                   (TRUE != FALSE)
#define J1939Rm_HasSizeOfAckQueueInd()                                (TRUE != FALSE)
#define J1939Rm_HasSizeOfChannel()                                    (TRUE != FALSE)
#define J1939Rm_HasSizeOfChannelNode()                                (TRUE != FALSE)
#define J1939Rm_HasSizeOfChannelNodeNodeTableInd()                    (TRUE != FALSE)
#define J1939Rm_HasSizeOfChannelState()                               (TRUE != FALSE)
#define J1939Rm_HasSizeOfComIPdu()                                    (TRUE != FALSE)
#define J1939Rm_HasSizeOfComIPduDest()                                (TRUE != FALSE)
#define J1939Rm_HasSizeOfComIPduInd()                                 (TRUE != FALSE)
#define J1939Rm_HasSizeOfComMChannel()                                (TRUE != FALSE)
#define J1939Rm_HasSizeOfNmNode()                                     (TRUE != FALSE)
#define J1939Rm_HasSizeOfNode()                                       (TRUE != FALSE)
#define J1939Rm_HasSizeOfNodeChannel()                                (TRUE != FALSE)
#define J1939Rm_HasSizeOfNodeChannelChannelTableInd()                 (TRUE != FALSE)
#define J1939Rm_HasSizeOfNodeChannelState()                           (TRUE != FALSE)
#define J1939Rm_HasSizeOfNodeUser()                                   (TRUE != FALSE)
#define J1939Rm_HasSizeOfNodeUserUserTableInd()                       (TRUE != FALSE)
#define J1939Rm_HasSizeOfReqQueue()                                   (TRUE != FALSE)
#define J1939Rm_HasSizeOfReqQueueInd()                                (TRUE != FALSE)
#define J1939Rm_HasSizeOfReqTimeout()                                 (TRUE != FALSE)
#define J1939Rm_HasSizeOfReqTimeoutInd()                              (TRUE != FALSE)
#define J1939Rm_HasSizeOfRequestIndication()                          (TRUE != FALSE)
#define J1939Rm_HasSizeOfRxPdu()                                      (TRUE != FALSE)
#define J1939Rm_HasSizeOfTxPdu()                                      (TRUE != FALSE)
#define J1939Rm_HasSizeOfTxPduState()                                 (TRUE != FALSE)
#define J1939Rm_HasSizeOfUser()                                       (TRUE != FALSE)
#define J1939Rm_HasSizeOfUserPGN()                                    (TRUE != FALSE)
#define J1939Rm_HasSizeOfUserPGNInd()                                 (TRUE != FALSE)
#define J1939Rm_HasTxConfTimeout()                                    (TRUE != FALSE)
#define J1939Rm_HasTxPdu()                                            (TRUE != FALSE)
#define J1939Rm_HasChannelIdxOfTxPdu()                                (TRUE != FALSE)
#define J1939Rm_HasInvalidHndOfTxPdu()                                
#define J1939Rm_HasMetaDataLengthOfTxPdu()                            (TRUE != FALSE)
#define J1939Rm_HasPduIdOfTxPdu()                                     (TRUE != FALSE)
#define J1939Rm_HasPduTypeOfTxPdu()                                   (TRUE != FALSE)
#define J1939Rm_HasTxPduStateIdxOfTxPdu()                             (TRUE != FALSE)
#define J1939Rm_HasTxPduState()                                       (TRUE != FALSE)
#define J1939Rm_HasUser()                                             (TRUE != FALSE)
#define J1939Rm_HasAckIndicationIdxOfUser()                           
#define J1939Rm_HasAckIndicationUsedOfUser()                          
#define J1939Rm_HasComIPduIndEndIdxOfUser()                           (TRUE != FALSE)
#define J1939Rm_HasComIPduIndStartIdxOfUser()                         (TRUE != FALSE)
#define J1939Rm_HasComIPduIndUsedOfUser()                             (TRUE != FALSE)
#define J1939Rm_HasInvalidHndOfUser()                                 
#define J1939Rm_HasNodeIdxOfUser()                                    (TRUE != FALSE)
#define J1939Rm_HasRequestIndicationIdxOfUser()                       (TRUE != FALSE)
#define J1939Rm_HasRequestIndicationUsedOfUser()                      (TRUE != FALSE)
#define J1939Rm_HasRequestTimeoutIndicationIdxOfUser()                
#define J1939Rm_HasRequestTimeoutIndicationUsedOfUser()               
#define J1939Rm_HasRteAckIndicationIdxOfUser()                        
#define J1939Rm_HasRteAckIndicationUsedOfUser()                       
#define J1939Rm_HasRteRequestIndicationIdxOfUser()                    
#define J1939Rm_HasRteRequestIndicationUsedOfUser()                   
#define J1939Rm_HasRteRequestTimeoutIndicationIdxOfUser()             
#define J1939Rm_HasRteRequestTimeoutIndicationUsedOfUser()            
#define J1939Rm_HasUserAckIndicationOfUser()                          
#define J1939Rm_HasUserAckPGNIndEndIdxOfUser()                        
#define J1939Rm_HasUserAckPGNIndStartIdxOfUser()                      
#define J1939Rm_HasUserAckPGNIndUsedOfUser()                          
#define J1939Rm_HasUserPGNIndEndIdxOfUser()                           (TRUE != FALSE)
#define J1939Rm_HasUserPGNIndStartIdxOfUser()                         (TRUE != FALSE)
#define J1939Rm_HasUserPGNIndUsedOfUser()                             (TRUE != FALSE)
#define J1939Rm_HasUserRequestIndicationOfUser()                      (TRUE != FALSE)
#define J1939Rm_HasUserSendAckOfUser()                                
#define J1939Rm_HasUserSendRequestOfUser()                            
#define J1939Rm_HasUserTimeoutSupervisionOfUser()                     
#define J1939Rm_HasUserTypeOfUser()                                   (TRUE != FALSE)
#define J1939Rm_HasUserAckPGN()                                       
#define J1939Rm_HasAckPGNOfUserAckPGN()                               
#define J1939Rm_HasUserAckPGNInd()                                    
#define J1939Rm_HasUserPGN()                                          (TRUE != FALSE)
#define J1939Rm_HasPGNOfUserPGN()                                     (TRUE != FALSE)
#define J1939Rm_HasUserPGNInd()                                       (TRUE != FALSE)
#define J1939Rm_HasPCConfig()                                         (TRUE != FALSE)
#define J1939Rm_HasAckQueueIndOfPCConfig()                            (TRUE != FALSE)
#define J1939Rm_HasAckQueueOfPCConfig()                               (TRUE != FALSE)
#define J1939Rm_HasChannelNodeNodeTableIndOfPCConfig()                (TRUE != FALSE)
#define J1939Rm_HasChannelNodeOfPCConfig()                            (TRUE != FALSE)
#define J1939Rm_HasChannelOfPCConfig()                                (TRUE != FALSE)
#define J1939Rm_HasChannelStateOfPCConfig()                           (TRUE != FALSE)
#define J1939Rm_HasComIPduDestOfPCConfig()                            (TRUE != FALSE)
#define J1939Rm_HasComIPduIndOfPCConfig()                             (TRUE != FALSE)
#define J1939Rm_HasComIPduOfPCConfig()                                (TRUE != FALSE)
#define J1939Rm_HasComMChannelOfPCConfig()                            (TRUE != FALSE)
#define J1939Rm_HasFinalMagicNumberOfPCConfig()                       
#define J1939Rm_HasInitDataHashCodeOfPCConfig()                       
#define J1939Rm_HasMainPeriodOfPCConfig()                             (TRUE != FALSE)
#define J1939Rm_HasNmNodeOfPCConfig()                                 (TRUE != FALSE)
#define J1939Rm_HasNodeChannelChannelTableIndOfPCConfig()             (TRUE != FALSE)
#define J1939Rm_HasNodeChannelOfPCConfig()                            (TRUE != FALSE)
#define J1939Rm_HasNodeChannelStateOfPCConfig()                       (TRUE != FALSE)
#define J1939Rm_HasNodeOfPCConfig()                                   (TRUE != FALSE)
#define J1939Rm_HasNodeUserOfPCConfig()                               (TRUE != FALSE)
#define J1939Rm_HasNodeUserUserTableIndOfPCConfig()                   (TRUE != FALSE)
#define J1939Rm_HasReqQueueIndOfPCConfig()                            (TRUE != FALSE)
#define J1939Rm_HasReqQueueOfPCConfig()                               (TRUE != FALSE)
#define J1939Rm_HasReqTimeoutIndOfPCConfig()                          (TRUE != FALSE)
#define J1939Rm_HasReqTimeoutOfPCConfig()                             (TRUE != FALSE)
#define J1939Rm_HasRequestIndicationOfPCConfig()                      (TRUE != FALSE)
#define J1939Rm_HasRxPduOfPCConfig()                                  (TRUE != FALSE)
#define J1939Rm_HasSizeOfAckQueueIndOfPCConfig()                      (TRUE != FALSE)
#define J1939Rm_HasSizeOfAckQueueOfPCConfig()                         (TRUE != FALSE)
#define J1939Rm_HasSizeOfChannelNodeNodeTableIndOfPCConfig()          (TRUE != FALSE)
#define J1939Rm_HasSizeOfChannelNodeOfPCConfig()                      (TRUE != FALSE)
#define J1939Rm_HasSizeOfChannelOfPCConfig()                          (TRUE != FALSE)
#define J1939Rm_HasSizeOfChannelStateOfPCConfig()                     (TRUE != FALSE)
#define J1939Rm_HasSizeOfComIPduDestOfPCConfig()                      (TRUE != FALSE)
#define J1939Rm_HasSizeOfComIPduIndOfPCConfig()                       (TRUE != FALSE)
#define J1939Rm_HasSizeOfComIPduOfPCConfig()                          (TRUE != FALSE)
#define J1939Rm_HasSizeOfComMChannelOfPCConfig()                      (TRUE != FALSE)
#define J1939Rm_HasSizeOfNmNodeOfPCConfig()                           (TRUE != FALSE)
#define J1939Rm_HasSizeOfNodeChannelChannelTableIndOfPCConfig()       (TRUE != FALSE)
#define J1939Rm_HasSizeOfNodeChannelOfPCConfig()                      (TRUE != FALSE)
#define J1939Rm_HasSizeOfNodeChannelStateOfPCConfig()                 (TRUE != FALSE)
#define J1939Rm_HasSizeOfNodeOfPCConfig()                             (TRUE != FALSE)
#define J1939Rm_HasSizeOfNodeUserOfPCConfig()                         (TRUE != FALSE)
#define J1939Rm_HasSizeOfNodeUserUserTableIndOfPCConfig()             (TRUE != FALSE)
#define J1939Rm_HasSizeOfReqQueueIndOfPCConfig()                      (TRUE != FALSE)
#define J1939Rm_HasSizeOfReqQueueOfPCConfig()                         (TRUE != FALSE)
#define J1939Rm_HasSizeOfReqTimeoutIndOfPCConfig()                    (TRUE != FALSE)
#define J1939Rm_HasSizeOfReqTimeoutOfPCConfig()                       (TRUE != FALSE)
#define J1939Rm_HasSizeOfRequestIndicationOfPCConfig()                (TRUE != FALSE)
#define J1939Rm_HasSizeOfRxPduOfPCConfig()                            (TRUE != FALSE)
#define J1939Rm_HasSizeOfTxPduOfPCConfig()                            (TRUE != FALSE)
#define J1939Rm_HasSizeOfTxPduStateOfPCConfig()                       (TRUE != FALSE)
#define J1939Rm_HasSizeOfUserOfPCConfig()                             (TRUE != FALSE)
#define J1939Rm_HasSizeOfUserPGNIndOfPCConfig()                       (TRUE != FALSE)
#define J1939Rm_HasSizeOfUserPGNOfPCConfig()                          (TRUE != FALSE)
#define J1939Rm_HasTxConfTimeoutOfPCConfig()                          (TRUE != FALSE)
#define J1939Rm_HasTxPduOfPCConfig()                                  (TRUE != FALSE)
#define J1939Rm_HasTxPduStateOfPCConfig()                             (TRUE != FALSE)
#define J1939Rm_HasUserOfPCConfig()                                   (TRUE != FALSE)
#define J1939Rm_HasUserPGNIndOfPCConfig()                             (TRUE != FALSE)
#define J1939Rm_HasUserPGNOfPCConfig()                                (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCIncrementDataMacros  J1939Rm Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define J1939Rm_IncAckQueue(Index)                                    J1939Rm_GetAckQueue(Index)++
#define J1939Rm_IncChannelState(Index)                                J1939Rm_GetChannelState(Index)++
#define J1939Rm_IncNodeChannelState(Index)                            J1939Rm_GetNodeChannelState(Index)++
#define J1939Rm_IncReq2Queue(Index)                                   
#define J1939Rm_IncReqQueue(Index)                                    J1939Rm_GetReqQueue(Index)++
#define J1939Rm_IncReqTimeout(Index)                                  J1939Rm_GetReqTimeout(Index)++
#define J1939Rm_IncTxPduState(Index)                                  J1939Rm_GetTxPduState(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCDecrementDataMacros  J1939Rm Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define J1939Rm_DecAckQueue(Index)                                    J1939Rm_GetAckQueue(Index)--
#define J1939Rm_DecChannelState(Index)                                J1939Rm_GetChannelState(Index)--
#define J1939Rm_DecNodeChannelState(Index)                            J1939Rm_GetNodeChannelState(Index)--
#define J1939Rm_DecReq2Queue(Index)                                   
#define J1939Rm_DecReqQueue(Index)                                    J1939Rm_GetReqQueue(Index)--
#define J1939Rm_DecReqTimeout(Index)                                  J1939Rm_GetReqTimeout(Index)--
#define J1939Rm_DecTxPduState(Index)                                  J1939Rm_GetTxPduState(Index)--
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
  \defgroup  J1939RmPCIterableTypes  J1939Rm Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate J1939Rm_AckQueue */
typedef uint8_least J1939Rm_AckQueueIterType;

/**   \brief  type used to iterate J1939Rm_AckQueueInd */
typedef uint8_least J1939Rm_AckQueueIndIterType;

/**   \brief  type used to iterate J1939Rm_Channel */
typedef uint8_least J1939Rm_ChannelIterType;

/**   \brief  type used to iterate J1939Rm_ChannelNode */
typedef uint8_least J1939Rm_ChannelNodeIterType;

/**   \brief  type used to iterate J1939Rm_ChannelNodeNodeTableInd */
typedef uint8_least J1939Rm_ChannelNodeNodeTableIndIterType;

/**   \brief  type used to iterate J1939Rm_ChannelState */
typedef uint8_least J1939Rm_ChannelStateIterType;

/**   \brief  type used to iterate J1939Rm_ComIPdu */
typedef uint8_least J1939Rm_ComIPduIterType;

/**   \brief  type used to iterate J1939Rm_ComIPduDest */
typedef uint8_least J1939Rm_ComIPduDestIterType;

/**   \brief  type used to iterate J1939Rm_ComIPduInd */
typedef uint8_least J1939Rm_ComIPduIndIterType;

/**   \brief  type used to iterate J1939Rm_ComMChannel */
typedef uint8_least J1939Rm_ComMChannelIterType;

/**   \brief  type used to iterate J1939Rm_NmNode */
typedef uint8_least J1939Rm_NmNodeIterType;

/**   \brief  type used to iterate J1939Rm_Node */
typedef uint8_least J1939Rm_NodeIterType;

/**   \brief  type used to iterate J1939Rm_NodeChannel */
typedef uint8_least J1939Rm_NodeChannelIterType;

/**   \brief  type used to iterate J1939Rm_NodeChannelChannelTableInd */
typedef uint8_least J1939Rm_NodeChannelChannelTableIndIterType;

/**   \brief  type used to iterate J1939Rm_NodeChannelState */
typedef uint8_least J1939Rm_NodeChannelStateIterType;

/**   \brief  type used to iterate J1939Rm_NodeUser */
typedef uint8_least J1939Rm_NodeUserIterType;

/**   \brief  type used to iterate J1939Rm_NodeUserUserTableInd */
typedef uint8_least J1939Rm_NodeUserUserTableIndIterType;

/**   \brief  type used to iterate J1939Rm_ReqQueue */
typedef uint8_least J1939Rm_ReqQueueIterType;

/**   \brief  type used to iterate J1939Rm_ReqQueueInd */
typedef uint8_least J1939Rm_ReqQueueIndIterType;

/**   \brief  type used to iterate J1939Rm_ReqTimeout */
typedef uint8_least J1939Rm_ReqTimeoutIterType;

/**   \brief  type used to iterate J1939Rm_ReqTimeoutInd */
typedef uint8_least J1939Rm_ReqTimeoutIndIterType;

/**   \brief  type used to iterate J1939Rm_RequestIndication */
typedef uint8_least J1939Rm_RequestIndicationIterType;

/**   \brief  type used to iterate J1939Rm_RxPdu */
typedef uint8_least J1939Rm_RxPduIterType;

/**   \brief  type used to iterate J1939Rm_TxPdu */
typedef uint8_least J1939Rm_TxPduIterType;

/**   \brief  type used to iterate J1939Rm_TxPduState */
typedef uint8_least J1939Rm_TxPduStateIterType;

/**   \brief  type used to iterate J1939Rm_User */
typedef uint8_least J1939Rm_UserIterType;

/**   \brief  type used to iterate J1939Rm_UserPGN */
typedef uint8_least J1939Rm_UserPGNIterType;

/**   \brief  type used to iterate J1939Rm_UserPGNInd */
typedef uint8_least J1939Rm_UserPGNIndIterType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCValueTypes  J1939Rm Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for J1939Rm_AckQueueInd */
typedef uint8 J1939Rm_AckQueueIndType;

/**   \brief  value based type definition for J1939Rm_AckQueueIndEndIdxOfChannel */
typedef uint8 J1939Rm_AckQueueIndEndIdxOfChannelType;

/**   \brief  value based type definition for J1939Rm_AckQueueIndStartIdxOfChannel */
typedef uint8 J1939Rm_AckQueueIndStartIdxOfChannelType;

/**   \brief  value based type definition for J1939Rm_AckQueueIndUsedOfChannel */
typedef boolean J1939Rm_AckQueueIndUsedOfChannelType;

/**   \brief  value based type definition for J1939Rm_AckQueueSizeOfChannel */
typedef uint8 J1939Rm_AckQueueSizeOfChannelType;

/**   \brief  value based type definition for J1939Rm_ChannelNodeNodeTableIndEndIdxOfChannel */
typedef uint8 J1939Rm_ChannelNodeNodeTableIndEndIdxOfChannelType;

/**   \brief  value based type definition for J1939Rm_ChannelNodeNodeTableIndStartIdxOfChannel */
typedef uint8 J1939Rm_ChannelNodeNodeTableIndStartIdxOfChannelType;

/**   \brief  value based type definition for J1939Rm_ChannelNodeNodeTableIndUsedOfChannel */
typedef boolean J1939Rm_ChannelNodeNodeTableIndUsedOfChannelType;

/**   \brief  value based type definition for J1939Rm_ComMChannelIdOfChannel */
typedef uint8 J1939Rm_ComMChannelIdOfChannelType;

/**   \brief  value based type definition for J1939Rm_ReqQueueIndEndIdxOfChannel */
typedef uint8 J1939Rm_ReqQueueIndEndIdxOfChannelType;

/**   \brief  value based type definition for J1939Rm_ReqQueueIndStartIdxOfChannel */
typedef uint8 J1939Rm_ReqQueueIndStartIdxOfChannelType;

/**   \brief  value based type definition for J1939Rm_ReqQueueIndUsedOfChannel */
typedef boolean J1939Rm_ReqQueueIndUsedOfChannelType;

/**   \brief  value based type definition for J1939Rm_ReqTimeoutIndEndIdxOfChannel */
typedef uint8 J1939Rm_ReqTimeoutIndEndIdxOfChannelType;

/**   \brief  value based type definition for J1939Rm_ReqTimeoutIndStartIdxOfChannel */
typedef uint8 J1939Rm_ReqTimeoutIndStartIdxOfChannelType;

/**   \brief  value based type definition for J1939Rm_ReqTimeoutIndUsedOfChannel */
typedef boolean J1939Rm_ReqTimeoutIndUsedOfChannelType;

/**   \brief  value based type definition for J1939Rm_Request2QueueSizeOfChannel */
typedef uint8 J1939Rm_Request2QueueSizeOfChannelType;

/**   \brief  value based type definition for J1939Rm_RequestQueueSizeOfChannel */
typedef uint8 J1939Rm_RequestQueueSizeOfChannelType;

/**   \brief  value based type definition for J1939Rm_RequestTimeoutMonitorsOfChannel */
typedef uint8 J1939Rm_RequestTimeoutMonitorsOfChannelType;

/**   \brief  value based type definition for J1939Rm_RxPduRqstIdxOfChannel */
typedef uint8 J1939Rm_RxPduRqstIdxOfChannelType;

/**   \brief  value based type definition for J1939Rm_RxPduRqstUsedOfChannel */
typedef boolean J1939Rm_RxPduRqstUsedOfChannelType;

/**   \brief  value based type definition for J1939Rm_TxPduAckmIdxOfChannel */
typedef uint8 J1939Rm_TxPduAckmIdxOfChannelType;

/**   \brief  value based type definition for J1939Rm_TxPduAckmUsedOfChannel */
typedef boolean J1939Rm_TxPduAckmUsedOfChannelType;

/**   \brief  value based type definition for J1939Rm_NodeChannelStateIdxOfChannelNode */
typedef uint8 J1939Rm_NodeChannelStateIdxOfChannelNodeType;

/**   \brief  value based type definition for J1939Rm_NodeNodeIdxOfChannelNode */
typedef uint8 J1939Rm_NodeNodeIdxOfChannelNodeType;

/**   \brief  value based type definition for J1939Rm_ChannelNodeNodeTableInd */
typedef uint8 J1939Rm_ChannelNodeNodeTableIndType;

/**   \brief  value based type definition for J1939Rm_ComIPduDestEndIdxOfComIPdu */
typedef uint8 J1939Rm_ComIPduDestEndIdxOfComIPduType;

/**   \brief  value based type definition for J1939Rm_ComIPduDestStartIdxOfComIPdu */
typedef uint8 J1939Rm_ComIPduDestStartIdxOfComIPduType;

/**   \brief  value based type definition for J1939Rm_ExtId1OfComIPdu */
typedef uint8 J1939Rm_ExtId1OfComIPduType;

/**   \brief  value based type definition for J1939Rm_ExtId2OfComIPdu */
typedef uint8 J1939Rm_ExtId2OfComIPduType;

/**   \brief  value based type definition for J1939Rm_ExtId3OfComIPdu */
typedef uint8 J1939Rm_ExtId3OfComIPduType;

/**   \brief  value based type definition for J1939Rm_ExtIdUsageOfComIPdu */
typedef uint8 J1939Rm_ExtIdUsageOfComIPduType;

/**   \brief  value based type definition for J1939Rm_MetaDataLengthOfComIPdu */
typedef uint8 J1939Rm_MetaDataLengthOfComIPduType;

/**   \brief  value based type definition for J1939Rm_PGNOfComIPdu */
typedef uint16 J1939Rm_PGNOfComIPduType;

/**   \brief  value based type definition for J1939Rm_PduIdOfComIPdu */
typedef uint8 J1939Rm_PduIdOfComIPduType;

/**   \brief  value based type definition for J1939Rm_ChannelIdxOfComIPduDest */
typedef uint8 J1939Rm_ChannelIdxOfComIPduDestType;

/**   \brief  value based type definition for J1939Rm_DAOfComIPduDest */
typedef uint8 J1939Rm_DAOfComIPduDestType;

/**   \brief  value based type definition for J1939Rm_ComIPduInd */
typedef uint8 J1939Rm_ComIPduIndType;

/**   \brief  value based type definition for J1939Rm_ChannelIdxOfComMChannel */
typedef uint8 J1939Rm_ChannelIdxOfComMChannelType;

/**   \brief  value based type definition for J1939Rm_ChannelUsedOfComMChannel */
typedef boolean J1939Rm_ChannelUsedOfComMChannelType;

/**   \brief  value based type definition for J1939Rm_MainPeriod */
typedef uint8 J1939Rm_MainPeriodType;

/**   \brief  value based type definition for J1939Rm_NodeIdxOfNmNode */
typedef uint8 J1939Rm_NodeIdxOfNmNodeType;

/**   \brief  value based type definition for J1939Rm_NodeUsedOfNmNode */
typedef boolean J1939Rm_NodeUsedOfNmNodeType;

/**   \brief  value based type definition for J1939Rm_NodeAddressOfNode */
typedef uint8 J1939Rm_NodeAddressOfNodeType;

/**   \brief  value based type definition for J1939Rm_NodeChannelChannelTableIndEndIdxOfNode */
typedef uint8 J1939Rm_NodeChannelChannelTableIndEndIdxOfNodeType;

/**   \brief  value based type definition for J1939Rm_NodeChannelChannelTableIndStartIdxOfNode */
typedef uint8 J1939Rm_NodeChannelChannelTableIndStartIdxOfNodeType;

/**   \brief  value based type definition for J1939Rm_NodeChannelChannelTableIndUsedOfNode */
typedef boolean J1939Rm_NodeChannelChannelTableIndUsedOfNodeType;

/**   \brief  value based type definition for J1939Rm_NodeIdOfNode */
typedef uint8 J1939Rm_NodeIdOfNodeType;

/**   \brief  value based type definition for J1939Rm_NodeUserUserTableIndEndIdxOfNode */
typedef uint8 J1939Rm_NodeUserUserTableIndEndIdxOfNodeType;

/**   \brief  value based type definition for J1939Rm_NodeUserUserTableIndStartIdxOfNode */
typedef uint8 J1939Rm_NodeUserUserTableIndStartIdxOfNodeType;

/**   \brief  value based type definition for J1939Rm_NodeUserUserTableIndUsedOfNode */
typedef boolean J1939Rm_NodeUserUserTableIndUsedOfNodeType;

/**   \brief  value based type definition for J1939Rm_ChannelChannelIdxOfNodeChannel */
typedef uint8 J1939Rm_ChannelChannelIdxOfNodeChannelType;

/**   \brief  value based type definition for J1939Rm_NodeChannelStateIdxOfNodeChannel */
typedef uint8 J1939Rm_NodeChannelStateIdxOfNodeChannelType;

/**   \brief  value based type definition for J1939Rm_NodeChannelChannelTableInd */
typedef uint8 J1939Rm_NodeChannelChannelTableIndType;

/**   \brief  value based type definition for J1939Rm_UserUserIdxOfNodeUser */
typedef uint8 J1939Rm_UserUserIdxOfNodeUserType;

/**   \brief  value based type definition for J1939Rm_NodeUserUserTableInd */
typedef uint8 J1939Rm_NodeUserUserTableIndType;

/**   \brief  value based type definition for J1939Rm_ReqQueueInd */
typedef uint8 J1939Rm_ReqQueueIndType;

/**   \brief  value based type definition for J1939Rm_ReqTimeout */
typedef uint16 J1939Rm_ReqTimeoutType;

/**   \brief  value based type definition for J1939Rm_ReqTimeoutInd */
typedef uint8 J1939Rm_ReqTimeoutIndType;

/**   \brief  value based type definition for J1939Rm_ChannelIdxOfRxPdu */
typedef uint8 J1939Rm_ChannelIdxOfRxPduType;

/**   \brief  value based type definition for J1939Rm_MetaDataLengthOfRxPdu */
typedef uint8 J1939Rm_MetaDataLengthOfRxPduType;

/**   \brief  value based type definition for J1939Rm_PduTypeOfRxPdu */
typedef uint8 J1939Rm_PduTypeOfRxPduType;

/**   \brief  value based type definition for J1939Rm_SizeOfAckQueue */
typedef uint8 J1939Rm_SizeOfAckQueueType;

/**   \brief  value based type definition for J1939Rm_SizeOfAckQueueInd */
typedef uint8 J1939Rm_SizeOfAckQueueIndType;

/**   \brief  value based type definition for J1939Rm_SizeOfChannel */
typedef uint8 J1939Rm_SizeOfChannelType;

/**   \brief  value based type definition for J1939Rm_SizeOfChannelNode */
typedef uint8 J1939Rm_SizeOfChannelNodeType;

/**   \brief  value based type definition for J1939Rm_SizeOfChannelNodeNodeTableInd */
typedef uint8 J1939Rm_SizeOfChannelNodeNodeTableIndType;

/**   \brief  value based type definition for J1939Rm_SizeOfChannelState */
typedef uint8 J1939Rm_SizeOfChannelStateType;

/**   \brief  value based type definition for J1939Rm_SizeOfComIPdu */
typedef uint8 J1939Rm_SizeOfComIPduType;

/**   \brief  value based type definition for J1939Rm_SizeOfComIPduDest */
typedef uint8 J1939Rm_SizeOfComIPduDestType;

/**   \brief  value based type definition for J1939Rm_SizeOfComIPduInd */
typedef uint8 J1939Rm_SizeOfComIPduIndType;

/**   \brief  value based type definition for J1939Rm_SizeOfComMChannel */
typedef uint8 J1939Rm_SizeOfComMChannelType;

/**   \brief  value based type definition for J1939Rm_SizeOfNmNode */
typedef uint8 J1939Rm_SizeOfNmNodeType;

/**   \brief  value based type definition for J1939Rm_SizeOfNode */
typedef uint8 J1939Rm_SizeOfNodeType;

/**   \brief  value based type definition for J1939Rm_SizeOfNodeChannel */
typedef uint8 J1939Rm_SizeOfNodeChannelType;

/**   \brief  value based type definition for J1939Rm_SizeOfNodeChannelChannelTableInd */
typedef uint8 J1939Rm_SizeOfNodeChannelChannelTableIndType;

/**   \brief  value based type definition for J1939Rm_SizeOfNodeChannelState */
typedef uint8 J1939Rm_SizeOfNodeChannelStateType;

/**   \brief  value based type definition for J1939Rm_SizeOfNodeUser */
typedef uint8 J1939Rm_SizeOfNodeUserType;

/**   \brief  value based type definition for J1939Rm_SizeOfNodeUserUserTableInd */
typedef uint8 J1939Rm_SizeOfNodeUserUserTableIndType;

/**   \brief  value based type definition for J1939Rm_SizeOfReqQueue */
typedef uint8 J1939Rm_SizeOfReqQueueType;

/**   \brief  value based type definition for J1939Rm_SizeOfReqQueueInd */
typedef uint8 J1939Rm_SizeOfReqQueueIndType;

/**   \brief  value based type definition for J1939Rm_SizeOfReqTimeout */
typedef uint8 J1939Rm_SizeOfReqTimeoutType;

/**   \brief  value based type definition for J1939Rm_SizeOfReqTimeoutInd */
typedef uint8 J1939Rm_SizeOfReqTimeoutIndType;

/**   \brief  value based type definition for J1939Rm_SizeOfRequestIndication */
typedef uint8 J1939Rm_SizeOfRequestIndicationType;

/**   \brief  value based type definition for J1939Rm_SizeOfRxPdu */
typedef uint8 J1939Rm_SizeOfRxPduType;

/**   \brief  value based type definition for J1939Rm_SizeOfTxPdu */
typedef uint8 J1939Rm_SizeOfTxPduType;

/**   \brief  value based type definition for J1939Rm_SizeOfTxPduState */
typedef uint8 J1939Rm_SizeOfTxPduStateType;

/**   \brief  value based type definition for J1939Rm_SizeOfUser */
typedef uint8 J1939Rm_SizeOfUserType;

/**   \brief  value based type definition for J1939Rm_SizeOfUserPGN */
typedef uint8 J1939Rm_SizeOfUserPGNType;

/**   \brief  value based type definition for J1939Rm_SizeOfUserPGNInd */
typedef uint8 J1939Rm_SizeOfUserPGNIndType;

/**   \brief  value based type definition for J1939Rm_TxConfTimeout */
typedef uint8 J1939Rm_TxConfTimeoutType;

/**   \brief  value based type definition for J1939Rm_ChannelIdxOfTxPdu */
typedef uint8 J1939Rm_ChannelIdxOfTxPduType;

/**   \brief  value based type definition for J1939Rm_MetaDataLengthOfTxPdu */
typedef uint8 J1939Rm_MetaDataLengthOfTxPduType;

/**   \brief  value based type definition for J1939Rm_PduIdOfTxPdu */
typedef uint8 J1939Rm_PduIdOfTxPduType;

/**   \brief  value based type definition for J1939Rm_PduTypeOfTxPdu */
typedef uint8 J1939Rm_PduTypeOfTxPduType;

/**   \brief  value based type definition for J1939Rm_TxPduStateIdxOfTxPdu */
typedef uint8 J1939Rm_TxPduStateIdxOfTxPduType;

/**   \brief  value based type definition for J1939Rm_ComIPduIndEndIdxOfUser */
typedef uint8 J1939Rm_ComIPduIndEndIdxOfUserType;

/**   \brief  value based type definition for J1939Rm_ComIPduIndStartIdxOfUser */
typedef uint8 J1939Rm_ComIPduIndStartIdxOfUserType;

/**   \brief  value based type definition for J1939Rm_ComIPduIndUsedOfUser */
typedef boolean J1939Rm_ComIPduIndUsedOfUserType;

/**   \brief  value based type definition for J1939Rm_NodeIdxOfUser */
typedef uint8 J1939Rm_NodeIdxOfUserType;

/**   \brief  value based type definition for J1939Rm_RequestIndicationIdxOfUser */
typedef uint8 J1939Rm_RequestIndicationIdxOfUserType;

/**   \brief  value based type definition for J1939Rm_RequestIndicationUsedOfUser */
typedef boolean J1939Rm_RequestIndicationUsedOfUserType;

/**   \brief  value based type definition for J1939Rm_UserPGNIndEndIdxOfUser */
typedef uint8 J1939Rm_UserPGNIndEndIdxOfUserType;

/**   \brief  value based type definition for J1939Rm_UserPGNIndStartIdxOfUser */
typedef uint8 J1939Rm_UserPGNIndStartIdxOfUserType;

/**   \brief  value based type definition for J1939Rm_UserPGNIndUsedOfUser */
typedef boolean J1939Rm_UserPGNIndUsedOfUserType;

/**   \brief  value based type definition for J1939Rm_UserRequestIndicationOfUser */
typedef boolean J1939Rm_UserRequestIndicationOfUserType;

/**   \brief  value based type definition for J1939Rm_UserTypeOfUser */
typedef uint8 J1939Rm_UserTypeOfUserType;

/**   \brief  value based type definition for J1939Rm_PGNOfUserPGN */
typedef uint16 J1939Rm_PGNOfUserPGNType;

/**   \brief  value based type definition for J1939Rm_UserPGNInd */
typedef uint8 J1939Rm_UserPGNIndType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  J1939RmPCStructTypes  J1939Rm Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in J1939Rm_Channel */
typedef struct sJ1939Rm_ChannelType
{
  J1939Rm_AckQueueIndEndIdxOfChannelType AckQueueIndEndIdxOfChannel;  /**< the end index of the 0:n relation pointing to J1939Rm_AckQueueInd */
  J1939Rm_AckQueueIndStartIdxOfChannelType AckQueueIndStartIdxOfChannel;  /**< the start index of the 0:n relation pointing to J1939Rm_AckQueueInd */
  J1939Rm_AckQueueSizeOfChannelType AckQueueSizeOfChannel;  /**< DefinitionRef: /MICROSAR/J1939Rm/J1939RmConfigSet/J1939RmChannel/J1939RmAckQueueSize */
  J1939Rm_ChannelNodeNodeTableIndEndIdxOfChannelType ChannelNodeNodeTableIndEndIdxOfChannel;  /**< the end index of the 0:n relation pointing to J1939Rm_ChannelNodeNodeTableInd */
  J1939Rm_ChannelNodeNodeTableIndStartIdxOfChannelType ChannelNodeNodeTableIndStartIdxOfChannel;  /**< the start index of the 0:n relation pointing to J1939Rm_ChannelNodeNodeTableInd */
  J1939Rm_ComMChannelIdOfChannelType ComMChannelIdOfChannel;  /**< DefinitionRef: /[ANY]/ComM/ComMConfigSet/ComMChannel */
  J1939Rm_ReqQueueIndEndIdxOfChannelType ReqQueueIndEndIdxOfChannel;  /**< the end index of the 0:n relation pointing to J1939Rm_ReqQueueInd */
  J1939Rm_ReqQueueIndStartIdxOfChannelType ReqQueueIndStartIdxOfChannel;  /**< the start index of the 0:n relation pointing to J1939Rm_ReqQueueInd */
  J1939Rm_ReqTimeoutIndEndIdxOfChannelType ReqTimeoutIndEndIdxOfChannel;  /**< the end index of the 0:n relation pointing to J1939Rm_ReqTimeoutInd */
  J1939Rm_ReqTimeoutIndStartIdxOfChannelType ReqTimeoutIndStartIdxOfChannel;  /**< the start index of the 0:n relation pointing to J1939Rm_ReqTimeoutInd */
  J1939Rm_Request2QueueSizeOfChannelType Request2QueueSizeOfChannel;  /**< DefinitionRef: /MICROSAR/J1939Rm/J1939RmConfigSet/J1939RmChannel/J1939RmRequest2QueueSize */
  J1939Rm_RequestQueueSizeOfChannelType RequestQueueSizeOfChannel;  /**< DefinitionRef: /MICROSAR/J1939Rm/J1939RmConfigSet/J1939RmChannel/J1939RmRequestQueueSize */
  J1939Rm_RequestTimeoutMonitorsOfChannelType RequestTimeoutMonitorsOfChannel;  /**< DefinitionRef: /MICROSAR/J1939Rm/J1939RmConfigSet/J1939RmChannel/J1939RmRequestTimeoutMonitors */
  J1939Rm_RxPduRqstIdxOfChannelType RxPduRqstIdxOfChannel;  /**< the index of the 0:1 relation pointing to J1939Rm_RxPdu */
  J1939Rm_TxPduAckmIdxOfChannelType TxPduAckmIdxOfChannel;  /**< the index of the 0:1 relation pointing to J1939Rm_TxPdu */
} J1939Rm_ChannelType;

/**   \brief  type used in J1939Rm_ChannelNode */
typedef struct sJ1939Rm_ChannelNodeType
{
  J1939Rm_NodeChannelStateIdxOfChannelNodeType NodeChannelStateIdxOfChannelNode;  /**< the index of the 1:1 relation pointing to J1939Rm_NodeChannelState */
  J1939Rm_NodeNodeIdxOfChannelNodeType NodeNodeIdxOfChannelNode;  /**< the index of the 1:1 relation pointing to J1939Rm_Node */
} J1939Rm_ChannelNodeType;

/**   \brief  type used in J1939Rm_ComIPdu */
typedef struct sJ1939Rm_ComIPduType
{
  J1939Rm_PGNOfComIPduType PGNOfComIPdu;  /**< PGN */
  J1939Rm_ComIPduDestEndIdxOfComIPduType ComIPduDestEndIdxOfComIPdu;  /**< the end index of the 1:n relation pointing to J1939Rm_ComIPduDest */
  J1939Rm_ComIPduDestStartIdxOfComIPduType ComIPduDestStartIdxOfComIPdu;  /**< the start index of the 1:n relation pointing to J1939Rm_ComIPduDest */
  J1939Rm_ExtId1OfComIPduType ExtId1OfComIPdu;  /**< ExtId Byte 1 */
  J1939Rm_ExtId2OfComIPduType ExtId2OfComIPdu;  /**< ExtId Byte 2 */
  J1939Rm_ExtId3OfComIPduType ExtId3OfComIPdu;  /**< ExtId Byte 3 */
  J1939Rm_ExtIdUsageOfComIPduType ExtIdUsageOfComIPdu;  /**< ExtId Usage */
  J1939Rm_MetaDataLengthOfComIPduType MetaDataLengthOfComIPdu;  /**< MetaData Length */
  J1939Rm_PduIdOfComIPduType PduIdOfComIPdu;  /**< PDU ID */
} J1939Rm_ComIPduType;

/**   \brief  type used in J1939Rm_ComIPduDest */
typedef struct sJ1939Rm_ComIPduDestType
{
  J1939Rm_ChannelIdxOfComIPduDestType ChannelIdxOfComIPduDest;  /**< the index of the 1:1 relation pointing to J1939Rm_Channel */
  J1939Rm_DAOfComIPduDestType DAOfComIPduDest;  /**< DA */
} J1939Rm_ComIPduDestType;

/**   \brief  type used in J1939Rm_ComMChannel */
typedef struct sJ1939Rm_ComMChannelType
{
  J1939Rm_ChannelIdxOfComMChannelType ChannelIdxOfComMChannel;  /**< the index of the 0:1 relation pointing to J1939Rm_Channel */
} J1939Rm_ComMChannelType;

/**   \brief  type used in J1939Rm_NmNode */
typedef struct sJ1939Rm_NmNodeType
{
  J1939Rm_NodeIdxOfNmNodeType NodeIdxOfNmNode;  /**< the index of the 0:1 relation pointing to J1939Rm_Node */
} J1939Rm_NmNodeType;

/**   \brief  type used in J1939Rm_Node */
typedef struct sJ1939Rm_NodeType
{
  J1939Rm_NodeAddressOfNodeType NodeAddressOfNode;  /**< DefinitionRef: /[ANY]/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodePreferredAddress */
  J1939Rm_NodeChannelChannelTableIndEndIdxOfNodeType NodeChannelChannelTableIndEndIdxOfNode;  /**< the end index of the 0:n relation pointing to J1939Rm_NodeChannelChannelTableInd */
  J1939Rm_NodeChannelChannelTableIndStartIdxOfNodeType NodeChannelChannelTableIndStartIdxOfNode;  /**< the start index of the 0:n relation pointing to J1939Rm_NodeChannelChannelTableInd */
  J1939Rm_NodeIdOfNodeType NodeIdOfNode;  /**< DefinitionRef: /[ANY]/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeId */
  J1939Rm_NodeUserUserTableIndEndIdxOfNodeType NodeUserUserTableIndEndIdxOfNode;  /**< the end index of the 0:n relation pointing to J1939Rm_NodeUserUserTableInd */
  J1939Rm_NodeUserUserTableIndStartIdxOfNodeType NodeUserUserTableIndStartIdxOfNode;  /**< the start index of the 0:n relation pointing to J1939Rm_NodeUserUserTableInd */
} J1939Rm_NodeType;

/**   \brief  type used in J1939Rm_NodeChannel */
typedef struct sJ1939Rm_NodeChannelType
{
  J1939Rm_ChannelChannelIdxOfNodeChannelType ChannelChannelIdxOfNodeChannel;  /**< the index of the 1:1 relation pointing to J1939Rm_Channel */
  J1939Rm_NodeChannelStateIdxOfNodeChannelType NodeChannelStateIdxOfNodeChannel;  /**< the index of the 1:1 relation pointing to J1939Rm_NodeChannelState */
} J1939Rm_NodeChannelType;

/**   \brief  type used in J1939Rm_NodeUser */
typedef struct sJ1939Rm_NodeUserType
{
  J1939Rm_UserUserIdxOfNodeUserType UserUserIdxOfNodeUser;  /**< the index of the 1:1 relation pointing to J1939Rm_User */
} J1939Rm_NodeUserType;

/**   \brief  type used in J1939Rm_RxPdu */
typedef struct sJ1939Rm_RxPduType
{
  J1939Rm_ChannelIdxOfRxPduType ChannelIdxOfRxPdu;  /**< the index of the 1:1 relation pointing to J1939Rm_Channel */
  J1939Rm_MetaDataLengthOfRxPduType MetaDataLengthOfRxPdu;  /**< MetaData Length */
  J1939Rm_PduTypeOfRxPduType PduTypeOfRxPdu;  /**< PDU Type */
} J1939Rm_RxPduType;

/**   \brief  type used in J1939Rm_TxPdu */
typedef struct sJ1939Rm_TxPduType
{
  J1939Rm_ChannelIdxOfTxPduType ChannelIdxOfTxPdu;  /**< the index of the 1:1 relation pointing to J1939Rm_Channel */
  J1939Rm_MetaDataLengthOfTxPduType MetaDataLengthOfTxPdu;  /**< MetaData Length */
  J1939Rm_PduIdOfTxPduType PduIdOfTxPdu;  /**< PDU ID */
  J1939Rm_PduTypeOfTxPduType PduTypeOfTxPdu;  /**< PDU Type */
  J1939Rm_TxPduStateIdxOfTxPduType TxPduStateIdxOfTxPdu;  /**< the index of the 1:1 relation pointing to J1939Rm_TxPduState */
} J1939Rm_TxPduType;

/**   \brief  type used in J1939Rm_User */
typedef struct sJ1939Rm_UserType
{
  J1939Rm_UserRequestIndicationOfUserType UserRequestIndicationOfUser;  /**< DefinitionRef: /MICROSAR/J1939Rm/J1939RmConfigSet/J1939RmNode/J1939RmUser/J1939RmUserRequestIndication */
  J1939Rm_ComIPduIndEndIdxOfUserType ComIPduIndEndIdxOfUser;  /**< the end index of the 0:n relation pointing to J1939Rm_ComIPduInd */
  J1939Rm_ComIPduIndStartIdxOfUserType ComIPduIndStartIdxOfUser;  /**< the start index of the 0:n relation pointing to J1939Rm_ComIPduInd */
  J1939Rm_NodeIdxOfUserType NodeIdxOfUser;  /**< the index of the 1:1 relation pointing to J1939Rm_Node */
  J1939Rm_RequestIndicationIdxOfUserType RequestIndicationIdxOfUser;  /**< the index of the 0:1 relation pointing to J1939Rm_RequestIndication */
  J1939Rm_UserPGNIndEndIdxOfUserType UserPGNIndEndIdxOfUser;  /**< the end index of the 0:n relation pointing to J1939Rm_UserPGNInd */
  J1939Rm_UserPGNIndStartIdxOfUserType UserPGNIndStartIdxOfUser;  /**< the start index of the 0:n relation pointing to J1939Rm_UserPGNInd */
  J1939Rm_UserTypeOfUserType UserTypeOfUser;  /**< DefinitionRef: /MICROSAR/J1939Rm/J1939RmConfigSet/J1939RmNode/J1939RmUser/J1939RmUserType */
} J1939Rm_UserType;

/**   \brief  type used in J1939Rm_UserPGN */
typedef struct sJ1939Rm_UserPGNType
{
  J1939Rm_PGNOfUserPGNType PGNOfUserPGN;
} J1939Rm_UserPGNType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCSymbolicStructTypes  J1939Rm Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to J1939Rm_AckQueue */
typedef struct J1939Rm_AckQueueStructSTag
{
  J1939Rm_AckQueueElementType Backbone1J1939_54966c1b[10];
  J1939Rm_AckQueueElementType FMSNet_J1939_44d89c3b[10];
} J1939Rm_AckQueueStructSType;

/**   \brief  type to be used as symbolic data element access to J1939Rm_ChannelState */
typedef struct J1939Rm_ChannelStateStructSTag
{
  J1939Rm_ChannelStateType Backbone1J1939_54966c1b[1];
  J1939Rm_ChannelStateType FMSNet_J1939_44d89c3b[1];
} J1939Rm_ChannelStateStructSType;

/**   \brief  type to be used as symbolic data element access to J1939Rm_ReqQueue */
typedef struct J1939Rm_ReqQueueStructSTag
{
  J1939Rm_ReqQueueElementType Backbone1J1939_54966c1b[10];
  J1939Rm_ReqQueueElementType FMSNet_J1939_44d89c3b[10];
} J1939Rm_ReqQueueStructSType;

/**   \brief  type to be used as symbolic data element access to J1939Rm_ReqTimeout */
typedef struct J1939Rm_ReqTimeoutStructSTag
{
  J1939Rm_ReqTimeoutType Backbone1J1939_54966c1b[10];
  J1939Rm_ReqTimeoutType FMSNet_J1939_44d89c3b[10];
} J1939Rm_ReqTimeoutStructSType;

/**   \brief  type to be used as symbolic data element access to J1939Rm_TxPduState */
typedef struct J1939Rm_TxPduStateStructSTag
{
  J1939Rm_TxPduStateType AckmTxPdu_Backbone1J1939_54966c1b[1];
  J1939Rm_TxPduStateType AckmTxPdu_FMSNet_J1939_44d89c3b[1];
} J1939Rm_TxPduStateStructSType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCUnionIndexAndSymbolTypes  J1939Rm Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access J1939Rm_AckQueue in an index and symbol based style. */
typedef union J1939Rm_AckQueueUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  J1939Rm_AckQueueElementType raw[20];
  J1939Rm_AckQueueStructSType str;
} J1939Rm_AckQueueUType;

/**   \brief  type to access J1939Rm_ChannelState in an index and symbol based style. */
typedef union J1939Rm_ChannelStateUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  J1939Rm_ChannelStateType raw[2];
  J1939Rm_ChannelStateStructSType str;
} J1939Rm_ChannelStateUType;

/**   \brief  type to access J1939Rm_ReqQueue in an index and symbol based style. */
typedef union J1939Rm_ReqQueueUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  J1939Rm_ReqQueueElementType raw[20];
  J1939Rm_ReqQueueStructSType str;
} J1939Rm_ReqQueueUType;

/**   \brief  type to access J1939Rm_ReqTimeout in an index and symbol based style. */
typedef union J1939Rm_ReqTimeoutUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  J1939Rm_ReqTimeoutType raw[20];
  J1939Rm_ReqTimeoutStructSType str;
} J1939Rm_ReqTimeoutUType;

/**   \brief  type to access J1939Rm_TxPduState in an index and symbol based style. */
typedef union J1939Rm_TxPduStateUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  J1939Rm_TxPduStateType raw[2];
  J1939Rm_TxPduStateStructSType str;
} J1939Rm_TxPduStateUType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCRootPointerTypes  J1939Rm Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point to arrays.
  \{
*/ 
/** 
  \}
*/ 

/** 
  \defgroup  J1939RmPCRootValueTypes  J1939Rm Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in J1939Rm_PCConfig */
typedef struct sJ1939Rm_PCConfigType
{
  uint8 J1939Rm_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} J1939Rm_PCConfigType;

typedef J1939Rm_PCConfigType J1939Rm_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

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
  J1939Rm_AckQueueInd
**********************************************************************************************************************/
/** 
  \var    J1939Rm_AckQueueInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Rm_AckQueue
*/ 
#define J1939RM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_AckQueueIndType, J1939RM_CONST) J1939Rm_AckQueueInd[20];
#define J1939RM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_Channel
**********************************************************************************************************************/
/** 
  \var    J1939Rm_Channel
  \brief  DefinitionRef: /MICROSAR/J1939Rm/J1939RmConfigSet/J1939RmChannel
  \details
  Element                            Description
  AckQueueIndEndIdx                  the end index of the 0:n relation pointing to J1939Rm_AckQueueInd
  AckQueueIndStartIdx                the start index of the 0:n relation pointing to J1939Rm_AckQueueInd
  AckQueueSize                       DefinitionRef: /MICROSAR/J1939Rm/J1939RmConfigSet/J1939RmChannel/J1939RmAckQueueSize
  ChannelNodeNodeTableIndEndIdx      the end index of the 0:n relation pointing to J1939Rm_ChannelNodeNodeTableInd
  ChannelNodeNodeTableIndStartIdx    the start index of the 0:n relation pointing to J1939Rm_ChannelNodeNodeTableInd
  ComMChannelId                      DefinitionRef: /[ANY]/ComM/ComMConfigSet/ComMChannel
  ReqQueueIndEndIdx                  the end index of the 0:n relation pointing to J1939Rm_ReqQueueInd
  ReqQueueIndStartIdx                the start index of the 0:n relation pointing to J1939Rm_ReqQueueInd
  ReqTimeoutIndEndIdx                the end index of the 0:n relation pointing to J1939Rm_ReqTimeoutInd
  ReqTimeoutIndStartIdx              the start index of the 0:n relation pointing to J1939Rm_ReqTimeoutInd
  Request2QueueSize                  DefinitionRef: /MICROSAR/J1939Rm/J1939RmConfigSet/J1939RmChannel/J1939RmRequest2QueueSize
  RequestQueueSize                   DefinitionRef: /MICROSAR/J1939Rm/J1939RmConfigSet/J1939RmChannel/J1939RmRequestQueueSize
  RequestTimeoutMonitors             DefinitionRef: /MICROSAR/J1939Rm/J1939RmConfigSet/J1939RmChannel/J1939RmRequestTimeoutMonitors
  RxPduRqstIdx                       the index of the 0:1 relation pointing to J1939Rm_RxPdu
  TxPduAckmIdx                       the index of the 0:1 relation pointing to J1939Rm_TxPdu
*/ 
#define J1939RM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_ChannelType, J1939RM_CONST) J1939Rm_Channel[2];
#define J1939RM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_ChannelNode
**********************************************************************************************************************/
/** 
  \var    J1939Rm_ChannelNode
  \details
  Element                Description
  NodeChannelStateIdx    the index of the 1:1 relation pointing to J1939Rm_NodeChannelState
  NodeNodeIdx            the index of the 1:1 relation pointing to J1939Rm_Node
*/ 
#define J1939RM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_ChannelNodeType, J1939RM_CONST) J1939Rm_ChannelNode[2];
#define J1939RM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_ChannelNodeNodeTableInd
**********************************************************************************************************************/
/** 
  \var    J1939Rm_ChannelNodeNodeTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Rm_ChannelNode
*/ 
#define J1939RM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_ChannelNodeNodeTableIndType, J1939RM_CONST) J1939Rm_ChannelNodeNodeTableInd[2];
#define J1939RM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_ComIPdu
**********************************************************************************************************************/
/** 
  \var    J1939Rm_ComIPdu
  \brief  List of requested COM I-PDUs
  \details
  Element                Description
  PGN                    PGN
  ComIPduDestEndIdx      the end index of the 1:n relation pointing to J1939Rm_ComIPduDest
  ComIPduDestStartIdx    the start index of the 1:n relation pointing to J1939Rm_ComIPduDest
  ExtId1                 ExtId Byte 1
  ExtId2                 ExtId Byte 2
  ExtId3                 ExtId Byte 3
  ExtIdUsage             ExtId Usage
  MetaDataLength         MetaData Length
  PduId                  PDU ID
*/ 
#define J1939RM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_ComIPduType, J1939RM_CONST) J1939Rm_ComIPdu[1];
#define J1939RM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_ComIPduDest
**********************************************************************************************************************/
/** 
  \var    J1939Rm_ComIPduDest
  \brief  List of Channels and DA addresses of requested COM I-PDUs
  \details
  Element       Description
  ChannelIdx    the index of the 1:1 relation pointing to J1939Rm_Channel
  DA            DA
*/ 
#define J1939RM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_ComIPduDestType, J1939RM_CONST) J1939Rm_ComIPduDest[1];
#define J1939RM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_ComIPduInd
**********************************************************************************************************************/
/** 
  \var    J1939Rm_ComIPduInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Rm_ComIPdu
*/ 
#define J1939RM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_ComIPduIndType, J1939RM_CONST) J1939Rm_ComIPduInd[1];
#define J1939RM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_ComMChannel
**********************************************************************************************************************/
/** 
  \var    J1939Rm_ComMChannel
  \brief  DefinitionRef: /[ANY]/ComM/ComMConfigSet/ComMChannel
  \details
  Element       Description
  ChannelIdx    the index of the 0:1 relation pointing to J1939Rm_Channel
*/ 
#define J1939RM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_ComMChannelType, J1939RM_CONST) J1939Rm_ComMChannel[5];
#define J1939RM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_NmNode
**********************************************************************************************************************/
/** 
  \var    J1939Rm_NmNode
  \brief  DefinitionRef: /[ANY]/J1939Nm/J1939NmConfigSet/J1939NmNode
  \details
  Element    Description
  NodeIdx    the index of the 0:1 relation pointing to J1939Rm_Node
*/ 
#define J1939RM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_NmNodeType, J1939RM_CONST) J1939Rm_NmNode[1];
#define J1939RM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_Node
**********************************************************************************************************************/
/** 
  \var    J1939Rm_Node
  \brief  DefinitionRef: /MICROSAR/J1939Rm/J1939RmConfigSet/J1939RmNode
  \details
  Element                               Description
  NodeAddress                           DefinitionRef: /[ANY]/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodePreferredAddress
  NodeChannelChannelTableIndEndIdx      the end index of the 0:n relation pointing to J1939Rm_NodeChannelChannelTableInd
  NodeChannelChannelTableIndStartIdx    the start index of the 0:n relation pointing to J1939Rm_NodeChannelChannelTableInd
  NodeId                                DefinitionRef: /[ANY]/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeId
  NodeUserUserTableIndEndIdx            the end index of the 0:n relation pointing to J1939Rm_NodeUserUserTableInd
  NodeUserUserTableIndStartIdx          the start index of the 0:n relation pointing to J1939Rm_NodeUserUserTableInd
*/ 
#define J1939RM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_NodeType, J1939RM_CONST) J1939Rm_Node[1];
#define J1939RM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_NodeChannel
**********************************************************************************************************************/
/** 
  \var    J1939Rm_NodeChannel
  \details
  Element                Description
  ChannelChannelIdx      the index of the 1:1 relation pointing to J1939Rm_Channel
  NodeChannelStateIdx    the index of the 1:1 relation pointing to J1939Rm_NodeChannelState
*/ 
#define J1939RM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_NodeChannelType, J1939RM_CONST) J1939Rm_NodeChannel[2];
#define J1939RM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_NodeChannelChannelTableInd
**********************************************************************************************************************/
/** 
  \var    J1939Rm_NodeChannelChannelTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Rm_NodeChannel
*/ 
#define J1939RM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_NodeChannelChannelTableIndType, J1939RM_CONST) J1939Rm_NodeChannelChannelTableInd[2];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define J1939RM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_NodeUser
**********************************************************************************************************************/
/** 
  \var    J1939Rm_NodeUser
  \details
  Element        Description
  UserUserIdx    the index of the 1:1 relation pointing to J1939Rm_User
*/ 
#define J1939RM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_NodeUserType, J1939RM_CONST) J1939Rm_NodeUser[3];
#define J1939RM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_NodeUserUserTableInd
**********************************************************************************************************************/
/** 
  \var    J1939Rm_NodeUserUserTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Rm_NodeUser
*/ 
#define J1939RM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_NodeUserUserTableIndType, J1939RM_CONST) J1939Rm_NodeUserUserTableInd[3];
#define J1939RM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_ReqQueueInd
**********************************************************************************************************************/
/** 
  \var    J1939Rm_ReqQueueInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Rm_ReqQueue
*/ 
#define J1939RM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_ReqQueueIndType, J1939RM_CONST) J1939Rm_ReqQueueInd[20];
#define J1939RM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_ReqTimeoutInd
**********************************************************************************************************************/
/** 
  \var    J1939Rm_ReqTimeoutInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Rm_ReqTimeout
*/ 
#define J1939RM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_ReqTimeoutIndType, J1939RM_CONST) J1939Rm_ReqTimeoutInd[20];
#define J1939RM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_RequestIndication
**********************************************************************************************************************/
#define J1939RM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_RequestIndicationFctPtrType, J1939RM_CONST) J1939Rm_RequestIndication[1];
#define J1939RM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_RxPdu
**********************************************************************************************************************/
/** 
  \var    J1939Rm_RxPdu
  \brief  List of received PDUs
  \details
  Element           Description
  ChannelIdx        the index of the 1:1 relation pointing to J1939Rm_Channel
  MetaDataLength    MetaData Length
  PduType           PDU Type
*/ 
#define J1939RM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_RxPduType, J1939RM_CONST) J1939Rm_RxPdu[2];
#define J1939RM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_TxPdu
**********************************************************************************************************************/
/** 
  \var    J1939Rm_TxPdu
  \brief  List of transmitted PDUs
  \details
  Element           Description
  ChannelIdx        the index of the 1:1 relation pointing to J1939Rm_Channel
  MetaDataLength    MetaData Length
  PduId             PDU ID
  PduType           PDU Type
  TxPduStateIdx     the index of the 1:1 relation pointing to J1939Rm_TxPduState
*/ 
#define J1939RM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_TxPduType, J1939RM_CONST) J1939Rm_TxPdu[2];
#define J1939RM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_User
**********************************************************************************************************************/
/** 
  \var    J1939Rm_User
  \brief  DefinitionRef: /MICROSAR/J1939Rm/J1939RmConfigSet/J1939RmNode/J1939RmUser
  \details
  Element                  Description
  UserRequestIndication    DefinitionRef: /MICROSAR/J1939Rm/J1939RmConfigSet/J1939RmNode/J1939RmUser/J1939RmUserRequestIndication
  ComIPduIndEndIdx         the end index of the 0:n relation pointing to J1939Rm_ComIPduInd
  ComIPduIndStartIdx       the start index of the 0:n relation pointing to J1939Rm_ComIPduInd
  NodeIdx                  the index of the 1:1 relation pointing to J1939Rm_Node
  RequestIndicationIdx     the index of the 0:1 relation pointing to J1939Rm_RequestIndication
  UserPGNIndEndIdx         the end index of the 0:n relation pointing to J1939Rm_UserPGNInd
  UserPGNIndStartIdx       the start index of the 0:n relation pointing to J1939Rm_UserPGNInd
  UserType                 DefinitionRef: /MICROSAR/J1939Rm/J1939RmConfigSet/J1939RmNode/J1939RmUser/J1939RmUserType
*/ 
#define J1939RM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_UserType, J1939RM_CONST) J1939Rm_User[3];
#define J1939RM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_UserPGN
**********************************************************************************************************************/
/** 
  \var    J1939Rm_UserPGN
  \details
  Element    Description
  PGN    
*/ 
#define J1939RM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_UserPGNType, J1939RM_CONST) J1939Rm_UserPGN[1];
#define J1939RM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_UserPGNInd
**********************************************************************************************************************/
/** 
  \var    J1939Rm_UserPGNInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Rm_UserPGN
*/ 
#define J1939RM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Rm_UserPGNIndType, J1939RM_CONST) J1939Rm_UserPGNInd[1];
#define J1939RM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_AckQueue
**********************************************************************************************************************/
/** 
  \var    J1939Rm_AckQueue
  \brief  Queued Acknowledgement messages per J1939Rm channel
*/ 
#define J1939RM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(J1939Rm_AckQueueUType, J1939RM_VAR_NOINIT) J1939Rm_AckQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define J1939RM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_ChannelState
**********************************************************************************************************************/
/** 
  \var    J1939Rm_ChannelState
  \brief  State of J1939Rm channel
*/ 
#define J1939RM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(J1939Rm_ChannelStateUType, J1939RM_VAR_NOINIT) J1939Rm_ChannelState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define J1939RM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_NodeChannelState
**********************************************************************************************************************/
/** 
  \var    J1939Rm_NodeChannelState
  \brief  State of J1939Rm node per channel
*/ 
#define J1939RM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(J1939Rm_NodeChannelStateType, J1939RM_VAR_NOINIT) J1939Rm_NodeChannelState[2];
#define J1939RM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_ReqQueue
**********************************************************************************************************************/
/** 
  \var    J1939Rm_ReqQueue
  \brief  Queued Request messages per J1939Rm channel
*/ 
#define J1939RM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(J1939Rm_ReqQueueUType, J1939RM_VAR_NOINIT) J1939Rm_ReqQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define J1939RM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_ReqTimeout
**********************************************************************************************************************/
/** 
  \var    J1939Rm_ReqTimeout
  \brief  Timeout monitors per J1939Rm channel
*/ 
#define J1939RM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(J1939Rm_ReqTimeoutUType, J1939RM_VAR_NOINIT) J1939Rm_ReqTimeout;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define J1939RM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Rm_TxPduState
**********************************************************************************************************************/
/** 
  \var    J1939Rm_TxPduState
  \brief  State of J1939Rm Tx PDU
*/ 
#define J1939RM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(J1939Rm_TxPduStateUType, J1939RM_VAR_NOINIT) J1939Rm_TxPduState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define J1939RM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/* User Config File Start */

/* User Config File End */


#endif  /* J1939RM_CFG_H */

/**********************************************************************************************************************
  END OF FILE: J1939Rm_Cfg.h
**********************************************************************************************************************/

