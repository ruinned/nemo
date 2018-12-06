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
 *            Module: J1939Nm
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: J1939Nm_Cfg.h
 *   Generation Time: 2018-11-22 20:14:51
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

#if !(defined J1939NM_CFG_H)
#define J1939NM_CFG_H

/**********************************************************************************************************************
  MISRA JUSTIFICATION
**********************************************************************************************************************/

/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

#include "ComStack_Types.h"
#include "J1939Nm_Types.h"

/* include headers with callout function prototypes */
#include "Dem.h"


/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

#ifndef J1939NM_USE_DUMMY_FUNCTIONS
#define J1939NM_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef J1939NM_USE_DUMMY_STATEMENT
#define J1939NM_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef J1939NM_DUMMY_STATEMENT
#define J1939NM_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef J1939NM_DUMMY_STATEMENT_CONST
#define J1939NM_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef J1939NM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define J1939NM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef J1939NM_ATOMIC_VARIABLE_ACCESS
#define J1939NM_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef J1939NM_PROCESSOR_MPC5746C
#define J1939NM_PROCESSOR_MPC5746C
#endif
#ifndef J1939NM_COMP_DIAB
#define J1939NM_COMP_DIAB
#endif
#ifndef J1939NM_GEN_GENERATOR_MSR
#define J1939NM_GEN_GENERATOR_MSR
#endif
#ifndef J1939NM_CPUTYPE_BITORDER_MSB2LSB
#define J1939NM_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef J1939NM_CONFIGURATION_VARIANT_PRECOMPILE
#define J1939NM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef J1939NM_CONFIGURATION_VARIANT_LINKTIME
#define J1939NM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef J1939NM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define J1939NM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef J1939NM_CONFIGURATION_VARIANT
#define J1939NM_CONFIGURATION_VARIANT J1939NM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef J1939NM_POSTBUILD_VARIANT_SUPPORT
#define J1939NM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define J1939NM_CFG_MAJOR_VERSION (2u)
#define J1939NM_CFG_MINOR_VERSION (1u)
#define J1939NM_CFG_PATCH_VERSION (0u)

#define J1939NM_DEV_ERROR_DETECT STD_OFF
#define J1939NM_VERSION_INFO_API STD_OFF

#define J1939NM_CANIF_DLCCHECK STD_ON
#define J1939NM_NM_STATECHANGENOTIF STD_OFF

#define J1939NM_DYNAMIC_ADDRESS_SUPPORT STD_OFF
#define J1939NM_NAME_MANAGEMENT_SUPPORT STD_OFF
#define J1939NM_NM_PG_SUPPORT STD_OFF

/* Node IDs */



/**
 * \defgroup J1939NmHandleIdsLocalNodeIDs Handle IDs of handle space Local Node IDs.
 * \brief Symbolic Name Values (SNVs) for local J1939Nm nodes
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define J1939NmConf_J1939NmNode_CIOM_4d5cd289                         0
/**\} */


/* TxPdu IDs */



/**
 * \defgroup J1939NmHandleIdsTxACandNMPDUIDs Handle IDs of handle space Tx AC and NM PDU IDs.
 * \brief Symbolic Name Values (SNVs) for Tx AC and NM PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define J1939NmConf_J1939NmTxPdu_J1939NmTxPdu_2068bfea                0
#define J1939NmConf_J1939NmTxPdu_J1939NmTxPdu_fa509995                1
/**\} */
/* RxPdu IDs */



/**
 * \defgroup J1939NmHandleIdsRxACandNMPDUIDs Handle IDs of handle space Rx AC and NM PDU IDs.
 * \brief Symbolic Name Values (SNVs) for Rx AC and NM PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define J1939NmConf_J1939NmRxPdu_J1939NmRxPdu_2068bfea                0
#define J1939NmConf_J1939NmRxPdu_J1939NmRxPdu_fa509995                1
/**\} */


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  J1939NmPCDataSwitches  J1939Nm Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define J1939NM_ADDRESSSTORAGEBLOCK                                   STD_OFF  /**< Deactivateable: 'J1939Nm_AddressStorageBlock' Reason: 'AddressStorageBlock is not configured.' */
#define J1939NM_CAPDU                                                 STD_OFF  /**< Deactivateable: 'J1939Nm_CaPdu' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_CHANNELCHANNELIDXOFCAPDU                              STD_OFF  /**< Deactivateable: 'J1939Nm_CaPdu.ChannelChannelIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_INVALIDHNDOFCAPDU                                     STD_OFF  /**< Deactivateable: 'J1939Nm_CaPdu.InvalidHnd' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_METADATALENGTHOFCAPDU                                 STD_OFF  /**< Deactivateable: 'J1939Nm_CaPdu.MetaDataLength' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_CANSMDELAYFACTOR                                      STD_ON
#define J1939NM_CANSMMAINPERIOD                                       STD_ON
#define J1939NM_CHANNEL                                               STD_ON
#define J1939NM_CAPDUIDXOFCHANNEL                                     STD_OFF  /**< Deactivateable: 'J1939Nm_Channel.CaPduIdx' Reason: 'the optional indirection is deactivated because CaPduUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_CAPDUUSEDOFCHANNEL                                    STD_OFF  /**< Deactivateable: 'J1939Nm_Channel.CaPduUsed' Reason: 'the optional indirection is deactivated because CaPduUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_CANIFCTRLIDOFCHANNEL                                  STD_ON
#define J1939NM_COMMCHANNELIDOFCHANNEL                                STD_ON
#define J1939NM_EXTERNALNODECHANNELCHANNELINDENDIDXOFCHANNEL          STD_OFF  /**< Deactivateable: 'J1939Nm_Channel.ExternalNodeChannelChannelIndEndIdx' Reason: 'the optional indirection is deactivated because ExternalNodeChannelChannelIndUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_EXTERNALNODECHANNELCHANNELINDSTARTIDXOFCHANNEL        STD_OFF  /**< Deactivateable: 'J1939Nm_Channel.ExternalNodeChannelChannelIndStartIdx' Reason: 'the optional indirection is deactivated because ExternalNodeChannelChannelIndUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_EXTERNALNODECHANNELCHANNELINDUSEDOFCHANNEL            STD_OFF  /**< Deactivateable: 'J1939Nm_Channel.ExternalNodeChannelChannelIndUsed' Reason: 'the optional indirection is deactivated because ExternalNodeChannelChannelIndUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_FIRSTANONYMOUSNODEIDOFCHANNEL                         STD_ON
#define J1939NM_ISOBUSCHANNELOFCHANNEL                                STD_OFF  /**< Deactivateable: 'J1939Nm_Channel.IsobusChannel' Reason: 'the value of J1939Nm_IsobusChannelOfChannel is always 'false' due to this, the array is deactivated.' */
#define J1939NM_LASTNODEIDOFCHANNEL                                   STD_ON
#define J1939NM_NMQUEUEINDENDIDXOFCHANNEL                             STD_OFF  /**< Deactivateable: 'J1939Nm_Channel.NmQueueIndEndIdx' Reason: 'the optional indirection is deactivated because NmQueueIndUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_NMQUEUEINDSTARTIDXOFCHANNEL                           STD_OFF  /**< Deactivateable: 'J1939Nm_Channel.NmQueueIndStartIdx' Reason: 'the optional indirection is deactivated because NmQueueIndUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_NMQUEUEINDUSEDOFCHANNEL                               STD_OFF  /**< Deactivateable: 'J1939Nm_Channel.NmQueueIndUsed' Reason: 'the optional indirection is deactivated because NmQueueIndUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_NMQUEUESIZEOFCHANNEL                                  STD_ON
#define J1939NM_NODECHANNELCHANNELINDENDIDXOFCHANNEL                  STD_ON
#define J1939NM_NODECHANNELCHANNELINDSTARTIDXOFCHANNEL                STD_ON
#define J1939NM_NODECHANNELCHANNELINDUSEDOFCHANNEL                    STD_ON
#define J1939NM_RXPDUACIDXOFCHANNEL                                   STD_ON
#define J1939NM_RXPDUNMIDXOFCHANNEL                                   STD_OFF  /**< Deactivateable: 'J1939Nm_Channel.RxPduNmIdx' Reason: 'the optional indirection is deactivated because RxPduNmUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_RXPDUNMUSEDOFCHANNEL                                  STD_OFF  /**< Deactivateable: 'J1939Nm_Channel.RxPduNmUsed' Reason: 'the optional indirection is deactivated because RxPduNmUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_TXPDUACIDXOFCHANNEL                                   STD_ON
#define J1939NM_TXPDUNMIDXOFCHANNEL                                   STD_OFF  /**< Deactivateable: 'J1939Nm_Channel.TxPduNmIdx' Reason: 'the optional indirection is deactivated because TxPduNmUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_TXPDUNMUSEDOFCHANNEL                                  STD_OFF  /**< Deactivateable: 'J1939Nm_Channel.TxPduNmUsed' Reason: 'the optional indirection is deactivated because TxPduNmUsedOfChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_USESADDRESSARBITRATIONOFCHANNEL                       STD_ON
#define J1939NM_USESDYNAMICADDRESSINGOFCHANNEL                        STD_OFF  /**< Deactivateable: 'J1939Nm_Channel.UsesDynamicAddressing' Reason: 'the value of J1939Nm_UsesDynamicAddressingOfChannel is always 'false' due to this, the array is deactivated.' */
#define J1939NM_CHANNELSTATE                                          STD_ON
#define J1939NM_COMMCHANNEL                                           STD_ON
#define J1939NM_CHANNELIDXOFCOMMCHANNEL                               STD_ON
#define J1939NM_CHANNELUSEDOFCOMMCHANNEL                              STD_ON
#define J1939NM_CURRENTEXTNODEADDRESS                                 STD_OFF  /**< Deactivateable: 'J1939Nm_CurrentExtNodeAddress' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939NM_CURRENTEXTNODENAME                                    STD_OFF  /**< Deactivateable: 'J1939Nm_CurrentExtNodeName' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939NM_CURRENTNODEADDRESS                                    STD_OFF  /**< Deactivateable: 'J1939Nm_CurrentNodeAddress' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939NM_CURRENTNODENAME                                       STD_OFF  /**< Deactivateable: 'J1939Nm_CurrentNodeName' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939NM_EXTERNALNODE                                          STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNode' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_CURRENTEXTNODENAMEIDXOFEXTERNALNODE                   STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNode.CurrentExtNodeNameIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_CURRENTEXTNODENAMEUSEDOFEXTERNALNODE                  STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNode.CurrentExtNodeNameUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_EXTERNALNODECHANNELNODEINDENDIDXOFEXTERNALNODE        STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNode.ExternalNodeChannelNodeIndEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_EXTERNALNODECHANNELNODEINDSTARTIDXOFEXTERNALNODE      STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNode.ExternalNodeChannelNodeIndStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_EXTERNALNODECHANNELNODEINDUSEDOFEXTERNALNODE          STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNode.ExternalNodeChannelNodeIndUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_EXTERNALNODENAMEFILTERIDXOFEXTERNALNODE               STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNode.ExternalNodeNameFilterIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_EXTERNALNODENAMEFILTERUSEDOFEXTERNALNODE              STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNode.ExternalNodeNameFilterUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_INVALIDHNDOFEXTERNALNODE                              STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNode.InvalidHnd' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_NODEADDRESSOFEXTERNALNODE                             STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNode.NodeAddress' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_NODENAMEIDXOFEXTERNALNODE                             STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNode.NodeNameIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_NODENAMEUSEDOFEXTERNALNODE                            STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNode.NodeNameUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_NODETYPEOFEXTERNALNODE                                STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNode.NodeType' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_EXTERNALNODECHANNEL                                   STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeChannel' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_CHANNELIDXOFEXTERNALNODECHANNEL                       STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeChannel.ChannelIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_CURRENTEXTNODEADDRESSIDXOFEXTERNALNODECHANNEL         STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeChannel.CurrentExtNodeAddressIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_CURRENTEXTNODEADDRESSUSEDOFEXTERNALNODECHANNEL        STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeChannel.CurrentExtNodeAddressUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_EXTERNALNODECHANNELSTATEIDXOFEXTERNALNODECHANNEL      STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeChannel.ExternalNodeChannelStateIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_EXTERNALNODEIDXOFEXTERNALNODECHANNEL                  STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeChannel.ExternalNodeIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_EXTERNALNODECHANNELCHANNELIND                         STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeChannelChannelInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939NM_EXTERNALNODECHANNELNODEIND                            STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeChannelNodeInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939NM_EXTERNALNODECHANNELSTATE                              STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeChannelState' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939NM_EXTERNALNODENAMEFILTER                                STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeNameFilter' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_NODENAMEFILTERBYTE1OFEXTERNALNODENAMEFILTER           STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeNameFilter.NodeNameFilterByte1' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_NODENAMEFILTERBYTE2OFEXTERNALNODENAMEFILTER           STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeNameFilter.NodeNameFilterByte2' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_NODENAMEFILTERBYTE3OFEXTERNALNODENAMEFILTER           STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeNameFilter.NodeNameFilterByte3' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_NODENAMEFILTERBYTE4OFEXTERNALNODENAMEFILTER           STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeNameFilter.NodeNameFilterByte4' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_NODENAMEFILTERBYTE5OFEXTERNALNODENAMEFILTER           STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeNameFilter.NodeNameFilterByte5' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_NODENAMEFILTERBYTE6OFEXTERNALNODENAMEFILTER           STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeNameFilter.NodeNameFilterByte6' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_NODENAMEFILTERBYTE7OFEXTERNALNODENAMEFILTER           STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeNameFilter.NodeNameFilterByte7' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_NODENAMEFILTERBYTE8OFEXTERNALNODENAMEFILTER           STD_OFF  /**< Deactivateable: 'J1939Nm_ExternalNodeNameFilter.NodeNameFilterByte8' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define J1939NM_FINALMAGICNUMBER                                      STD_OFF  /**< Deactivateable: 'J1939Nm_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define J1939NM_INITDATAHASHCODE                                      STD_OFF  /**< Deactivateable: 'J1939Nm_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define J1939NM_J1939NM_E_ADDRESS_LOST                                STD_ON
#define J1939NM_J1939NMDELAYFACTOR                                    STD_ON
#define J1939NM_MAINPERIOD                                            STD_ON
#define J1939NM_NAMEMANAGEMENTTIMEOUT                                 STD_ON
#define J1939NM_NAMESTORAGEBLOCK                                      STD_OFF  /**< Deactivateable: 'J1939Nm_NameStorageBlock' Reason: 'NameStorageBlock is not configured.' */
#define J1939NM_NMQUEUE                                               STD_OFF  /**< Deactivateable: 'J1939Nm_NmQueue' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939NM_NMQUEUEIND                                            STD_OFF  /**< Deactivateable: 'J1939Nm_NmQueueInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939NM_NODE                                                  STD_ON
#define J1939NM_ACCEPTSCOMMANDEDNAMEOFNODE                            STD_ON
#define J1939NM_CURRENTNODENAMEIDXOFNODE                              STD_OFF  /**< Deactivateable: 'J1939Nm_Node.CurrentNodeNameIdx' Reason: 'the optional indirection is deactivated because CurrentNodeNameUsedOfNode is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_CURRENTNODENAMEUSEDOFNODE                             STD_OFF  /**< Deactivateable: 'J1939Nm_Node.CurrentNodeNameUsed' Reason: 'the optional indirection is deactivated because CurrentNodeNameUsedOfNode is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_FIRSTDYNAMICADDRESSOFNODE                             STD_ON
#define J1939NM_J1939RMUSERIDOFNODE                                   STD_ON
#define J1939NM_LASTDYNAMICADDRESSOFNODE                              STD_ON
#define J1939NM_NODEADDRESSCONFIGURATIONCAPABILITYOFNODE              STD_ON
#define J1939NM_NODEADDRESSOFNODE                                     STD_ON
#define J1939NM_NODEADDRESSSEARCHALGORITHMOFNODE                      STD_ON
#define J1939NM_NODECHANNELNODEINDENDIDXOFNODE                        STD_ON
#define J1939NM_NODECHANNELNODEINDSTARTIDXOFNODE                      STD_ON
#define J1939NM_NODECHANNELNODEINDUSEDOFNODE                          STD_ON
#define J1939NM_NODENAMEIDXOFNODE                                     STD_ON
#define J1939NM_NODENAMEUSEDOFNODE                                    STD_ON
#define J1939NM_NODESTARTUPDELAYOFNODE                                STD_ON
#define J1939NM_RANDOMSEEDIDXOFNODE                                   STD_ON
#define J1939NM_NODECHANNEL                                           STD_ON
#define J1939NM_CHANNELIDXOFNODECHANNEL                               STD_ON
#define J1939NM_CURRENTNODEADDRESSIDXOFNODECHANNEL                    STD_OFF  /**< Deactivateable: 'J1939Nm_NodeChannel.CurrentNodeAddressIdx' Reason: 'the optional indirection is deactivated because CurrentNodeAddressUsedOfNodeChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_CURRENTNODEADDRESSUSEDOFNODECHANNEL                   STD_OFF  /**< Deactivateable: 'J1939Nm_NodeChannel.CurrentNodeAddressUsed' Reason: 'the optional indirection is deactivated because CurrentNodeAddressUsedOfNodeChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_NODECHANNELSTATEIDXOFNODECHANNEL                      STD_ON
#define J1939NM_NODEIDXOFNODECHANNEL                                  STD_ON
#define J1939NM_PREVIOUSNODEADDRESSIDXOFNODECHANNEL                   STD_OFF  /**< Deactivateable: 'J1939Nm_NodeChannel.PreviousNodeAddressIdx' Reason: 'the optional indirection is deactivated because PreviousNodeAddressUsedOfNodeChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_PREVIOUSNODEADDRESSUSEDOFNODECHANNEL                  STD_OFF  /**< Deactivateable: 'J1939Nm_NodeChannel.PreviousNodeAddressUsed' Reason: 'the optional indirection is deactivated because PreviousNodeAddressUsedOfNodeChannel is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define J1939NM_NODECHANNELCHANNELIND                                 STD_ON
#define J1939NM_NODECHANNELNODEIND                                    STD_ON
#define J1939NM_NODECHANNELSTATE                                      STD_ON
#define J1939NM_NODENAME                                              STD_ON
#define J1939NM_NODENAMEBYTE1OFNODENAME                               STD_ON
#define J1939NM_NODENAMEBYTE2OFNODENAME                               STD_ON
#define J1939NM_NODENAMEBYTE3OFNODENAME                               STD_ON
#define J1939NM_NODENAMEBYTE4OFNODENAME                               STD_ON
#define J1939NM_NODENAMEBYTE5OFNODENAME                               STD_ON
#define J1939NM_NODENAMEBYTE6OFNODENAME                               STD_ON
#define J1939NM_NODENAMEBYTE7OFNODENAME                               STD_ON
#define J1939NM_NODENAMEBYTE8OFNODENAME                               STD_ON
#define J1939NM_NODESTARTUPDELAY                                      STD_ON
#define J1939NM_PREVIOUSNODEADDRESS                                   STD_OFF  /**< Deactivateable: 'J1939Nm_PreviousNodeAddress' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define J1939NM_RANDOMSEED                                            STD_ON
#define J1939NM_REFRESHTIME                                           STD_OFF  /**< Deactivateable: 'J1939Nm_RefreshTime' Reason: 'AddressRefreshTime is not configured.' */
#define J1939NM_REQUESTRESPONSEDELAY                                  STD_ON
#define J1939NM_RXPDU                                                 STD_ON
#define J1939NM_CHANNELCHANNELIDXOFRXPDU                              STD_ON
#define J1939NM_INVALIDHNDOFRXPDU                                     STD_OFF  /**< Deactivateable: 'J1939Nm_RxPdu.InvalidHnd' Reason: 'the value of J1939Nm_InvalidHndOfRxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939NM_METADATALENGTHOFRXPDU                                 STD_ON
#define J1939NM_PDUTYPEOFRXPDU                                        STD_ON
#define J1939NM_SIZEOFCHANNEL                                         STD_ON
#define J1939NM_SIZEOFCHANNELSTATE                                    STD_ON
#define J1939NM_SIZEOFCOMMCHANNEL                                     STD_ON
#define J1939NM_SIZEOFNODE                                            STD_ON
#define J1939NM_SIZEOFNODECHANNEL                                     STD_ON
#define J1939NM_SIZEOFNODECHANNELCHANNELIND                           STD_ON
#define J1939NM_SIZEOFNODECHANNELNODEIND                              STD_ON
#define J1939NM_SIZEOFNODECHANNELSTATE                                STD_ON
#define J1939NM_SIZEOFNODENAME                                        STD_ON
#define J1939NM_SIZEOFRANDOMSEED                                      STD_ON
#define J1939NM_SIZEOFRXPDU                                           STD_ON
#define J1939NM_SIZEOFTXPDU                                           STD_ON
#define J1939NM_SIZEOFTXPDUSTATE                                      STD_ON
#define J1939NM_TXCONFTIMEOUT                                         STD_ON
#define J1939NM_TXPDU                                                 STD_ON
#define J1939NM_CHANNELCHANNELIDXOFTXPDU                              STD_ON
#define J1939NM_INVALIDHNDOFTXPDU                                     STD_OFF  /**< Deactivateable: 'J1939Nm_TxPdu.InvalidHnd' Reason: 'the value of J1939Nm_InvalidHndOfTxPdu is always 'false' due to this, the array is deactivated.' */
#define J1939NM_METADATALENGTHOFTXPDU                                 STD_ON
#define J1939NM_PDUIDOFTXPDU                                          STD_ON
#define J1939NM_PDUTYPEOFTXPDU                                        STD_ON
#define J1939NM_TXPDUSTATEIDXOFTXPDU                                  STD_ON
#define J1939NM_TXPDUSTATE                                            STD_ON
#define J1939NM_USERCALLOUT                                           STD_OFF  /**< Deactivateable: 'J1939Nm_UserCallout' Reason: 'UserCallout is not configured.' */
#define J1939NM_PCCONFIG                                              STD_ON
#define J1939NM_ADDRESSSTORAGEBLOCKOFPCCONFIG                         STD_OFF  /**< Deactivateable: 'J1939Nm_PCConfig.AddressStorageBlock' Reason: 'AddressStorageBlock is not configured.' */
#define J1939NM_CANSMDELAYFACTOROFPCCONFIG                            STD_ON
#define J1939NM_CANSMMAINPERIODOFPCCONFIG                             STD_ON
#define J1939NM_CHANNELOFPCCONFIG                                     STD_ON
#define J1939NM_CHANNELSTATEOFPCCONFIG                                STD_ON
#define J1939NM_COMMCHANNELOFPCCONFIG                                 STD_ON
#define J1939NM_FINALMAGICNUMBEROFPCCONFIG                            STD_OFF  /**< Deactivateable: 'J1939Nm_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define J1939NM_INITDATAHASHCODEOFPCCONFIG                            STD_OFF  /**< Deactivateable: 'J1939Nm_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define J1939NM_J1939NM_E_ADDRESS_LOSTOFPCCONFIG                      STD_ON
#define J1939NM_J1939NMDELAYFACTOROFPCCONFIG                          STD_ON
#define J1939NM_MAINPERIODOFPCCONFIG                                  STD_ON
#define J1939NM_NAMEMANAGEMENTTIMEOUTOFPCCONFIG                       STD_ON
#define J1939NM_NAMESTORAGEBLOCKOFPCCONFIG                            STD_OFF  /**< Deactivateable: 'J1939Nm_PCConfig.NameStorageBlock' Reason: 'NameStorageBlock is not configured.' */
#define J1939NM_NODECHANNELCHANNELINDOFPCCONFIG                       STD_ON
#define J1939NM_NODECHANNELNODEINDOFPCCONFIG                          STD_ON
#define J1939NM_NODECHANNELOFPCCONFIG                                 STD_ON
#define J1939NM_NODECHANNELSTATEOFPCCONFIG                            STD_ON
#define J1939NM_NODENAMEOFPCCONFIG                                    STD_ON
#define J1939NM_NODEOFPCCONFIG                                        STD_ON
#define J1939NM_NODESTARTUPDELAYOFPCCONFIG                            STD_ON
#define J1939NM_RANDOMSEEDOFPCCONFIG                                  STD_ON
#define J1939NM_REFRESHTIMEOFPCCONFIG                                 STD_OFF  /**< Deactivateable: 'J1939Nm_PCConfig.RefreshTime' Reason: 'AddressRefreshTime is not configured.' */
#define J1939NM_REQUESTRESPONSEDELAYOFPCCONFIG                        STD_ON
#define J1939NM_RXPDUOFPCCONFIG                                       STD_ON
#define J1939NM_SIZEOFCHANNELOFPCCONFIG                               STD_ON
#define J1939NM_SIZEOFCHANNELSTATEOFPCCONFIG                          STD_ON
#define J1939NM_SIZEOFCOMMCHANNELOFPCCONFIG                           STD_ON
#define J1939NM_SIZEOFNODECHANNELCHANNELINDOFPCCONFIG                 STD_ON
#define J1939NM_SIZEOFNODECHANNELNODEINDOFPCCONFIG                    STD_ON
#define J1939NM_SIZEOFNODECHANNELOFPCCONFIG                           STD_ON
#define J1939NM_SIZEOFNODECHANNELSTATEOFPCCONFIG                      STD_ON
#define J1939NM_SIZEOFNODENAMEOFPCCONFIG                              STD_ON
#define J1939NM_SIZEOFNODEOFPCCONFIG                                  STD_ON
#define J1939NM_SIZEOFRANDOMSEEDOFPCCONFIG                            STD_ON
#define J1939NM_SIZEOFRXPDUOFPCCONFIG                                 STD_ON
#define J1939NM_SIZEOFTXPDUOFPCCONFIG                                 STD_ON
#define J1939NM_SIZEOFTXPDUSTATEOFPCCONFIG                            STD_ON
#define J1939NM_TXCONFTIMEOUTOFPCCONFIG                               STD_ON
#define J1939NM_TXPDUOFPCCONFIG                                       STD_ON
#define J1939NM_TXPDUSTATEOFPCCONFIG                                  STD_ON
#define J1939NM_USERCALLOUTOFPCCONFIG                                 STD_OFF  /**< Deactivateable: 'J1939Nm_PCConfig.UserCallout' Reason: 'UserCallout is not configured.' */
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCMinNumericValueDefines  J1939Nm Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define J1939NM_MIN_CURRENTEXTNODEADDRESS                             0U
#define J1939NM_MIN_CURRENTNODEADDRESS                                0U
#define J1939NM_MIN_PREVIOUSNODEADDRESS                               0U
#define J1939NM_MIN_RANDOMSEED                                        0U
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCMaxNumericValueDefines  J1939Nm Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define J1939NM_MAX_CURRENTEXTNODEADDRESS                             255U
#define J1939NM_MAX_CURRENTNODEADDRESS                                255U
#define J1939NM_MAX_PREVIOUSNODEADDRESS                               255U
#define J1939NM_MAX_RANDOMSEED                                        255U
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCNoReferenceDefines  J1939Nm No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define J1939NM_NO_CAPDUIDXOFCHANNEL                                  65535U
#define J1939NM_NO_CANIFCTRLIDOFCHANNEL                               255U
#define J1939NM_NO_COMMCHANNELIDOFCHANNEL                             255U
#define J1939NM_NO_EXTERNALNODECHANNELCHANNELINDENDIDXOFCHANNEL       65535U
#define J1939NM_NO_EXTERNALNODECHANNELCHANNELINDSTARTIDXOFCHANNEL     65535U
#define J1939NM_NO_NMQUEUEINDENDIDXOFCHANNEL                          65535U
#define J1939NM_NO_NMQUEUEINDSTARTIDXOFCHANNEL                        65535U
#define J1939NM_NO_NODECHANNELCHANNELINDENDIDXOFCHANNEL               255U
#define J1939NM_NO_NODECHANNELCHANNELINDSTARTIDXOFCHANNEL             255U
#define J1939NM_NO_RXPDUNMIDXOFCHANNEL                                65535U
#define J1939NM_NO_TXPDUNMIDXOFCHANNEL                                65535U
#define J1939NM_NO_CHANNELIDXOFCOMMCHANNEL                            255U
#define J1939NM_NO_CURRENTEXTNODENAMEIDXOFEXTERNALNODE                65535U
#define J1939NM_NO_EXTERNALNODECHANNELNODEINDENDIDXOFEXTERNALNODE     65535U
#define J1939NM_NO_EXTERNALNODECHANNELNODEINDSTARTIDXOFEXTERNALNODE   65535U
#define J1939NM_NO_EXTERNALNODENAMEFILTERIDXOFEXTERNALNODE            65535U
#define J1939NM_NO_NODENAMEIDXOFEXTERNALNODE                          65535U
#define J1939NM_NO_CURRENTEXTNODEADDRESSIDXOFEXTERNALNODECHANNEL      65535U
#define J1939NM_NO_EXTERNALNODECHANNELCHANNELIND                      65535U
#define J1939NM_NO_EXTERNALNODECHANNELNODEIND                         65535U
#define J1939NM_NO_NMQUEUEIND                                         65535U
#define J1939NM_NO_CURRENTNODENAMEIDXOFNODE                           65535U
#define J1939NM_NO_NODECHANNELNODEINDENDIDXOFNODE                     255U
#define J1939NM_NO_NODECHANNELNODEINDSTARTIDXOFNODE                   255U
#define J1939NM_NO_NODENAMEIDXOFNODE                                  255U
#define J1939NM_NO_CURRENTNODEADDRESSIDXOFNODECHANNEL                 65535U
#define J1939NM_NO_PREVIOUSNODEADDRESSIDXOFNODECHANNEL                65535U
#define J1939NM_NO_NODECHANNELCHANNELIND                              255U
#define J1939NM_NO_NODECHANNELNODEIND                                 255U
#define J1939NM_NO_PDUIDOFTXPDU                                       255U
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCEnumExistsDefines  J1939Nm Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define J1939NM_EXISTS_REMOTE_NODETYPEOFEXTERNALNODE                  STD_OFF
#define J1939NM_EXISTS_ANONYMOUS_NODETYPEOFEXTERNALNODE               STD_OFF
#define J1939NM_EXISTS_NONE_NODETYPEOFEXTERNALNODE                    STD_OFF
#define J1939NM_EXISTS_AAC_NODEADDRESSCONFIGURATIONCAPABILITYOFNODE   STD_OFF
#define J1939NM_EXISTS_NCA_NODEADDRESSCONFIGURATIONCAPABILITYOFNODE   STD_ON
#define J1939NM_EXISTS_SVCA_NODEADDRESSCONFIGURATIONCAPABILITYOFNODE  STD_OFF
#define J1939NM_EXISTS_CCA_NODEADDRESSCONFIGURATIONCAPABILITYOFNODE   STD_OFF
#define J1939NM_EXISTS_SCA_NODEADDRESSCONFIGURATIONCAPABILITYOFNODE   STD_OFF
#define J1939NM_EXISTS_NONE_NODEADDRESSSEARCHALGORITHMOFNODE          STD_ON
#define J1939NM_EXISTS_ITER_NODEADDRESSSEARCHALGORITHMOFNODE          STD_OFF
#define J1939NM_EXISTS_REQUEST_NODEADDRESSSEARCHALGORITHMOFNODE       STD_OFF
#define J1939NM_EXISTS_ISO_DIRECT_NODEADDRESSSEARCHALGORITHMOFNODE    STD_OFF
#define J1939NM_EXISTS_ISO_GLOBAL_NODEADDRESSSEARCHALGORITHMOFNODE    STD_OFF
#define J1939NM_EXISTS_ISO_DELAYED_NODEADDRESSSEARCHALGORITHMOFNODE   STD_OFF
#define J1939NM_EXISTS_AC_RX_PDU_PDUTYPEOFRXPDU                       STD_ON
#define J1939NM_EXISTS_AC_TX_PDU_PDUTYPEOFRXPDU                       STD_OFF
#define J1939NM_EXISTS_CA_PDU_PDUTYPEOFRXPDU                          STD_OFF
#define J1939NM_EXISTS_NM_TX_PDU_PDUTYPEOFRXPDU                       STD_OFF
#define J1939NM_EXISTS_NM_RX_PDU_PDUTYPEOFRXPDU                       STD_OFF
#define J1939NM_EXISTS_AC_RX_PDU_PDUTYPEOFTXPDU                       STD_OFF
#define J1939NM_EXISTS_AC_TX_PDU_PDUTYPEOFTXPDU                       STD_ON
#define J1939NM_EXISTS_CA_PDU_PDUTYPEOFTXPDU                          STD_OFF
#define J1939NM_EXISTS_NM_TX_PDU_PDUTYPEOFTXPDU                       STD_OFF
#define J1939NM_EXISTS_NM_RX_PDU_PDUTYPEOFTXPDU                       STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCEnumDefines  J1939Nm Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define J1939NM_REMOTE_NODETYPEOFEXTERNALNODE                         0x00U
#define J1939NM_ANONYMOUS_NODETYPEOFEXTERNALNODE                      0x01U
#define J1939NM_NONE_NODETYPEOFEXTERNALNODE                           0x02U
#define J1939NM_AAC_NODEADDRESSCONFIGURATIONCAPABILITYOFNODE          0x00U
#define J1939NM_NCA_NODEADDRESSCONFIGURATIONCAPABILITYOFNODE          0x01U
#define J1939NM_SVCA_NODEADDRESSCONFIGURATIONCAPABILITYOFNODE         0x02U
#define J1939NM_CCA_NODEADDRESSCONFIGURATIONCAPABILITYOFNODE          0x03U
#define J1939NM_SCA_NODEADDRESSCONFIGURATIONCAPABILITYOFNODE          0x04U
#define J1939NM_NONE_NODEADDRESSSEARCHALGORITHMOFNODE                 0x00U
#define J1939NM_ITER_NODEADDRESSSEARCHALGORITHMOFNODE                 0x01U
#define J1939NM_REQUEST_NODEADDRESSSEARCHALGORITHMOFNODE              0x02U
#define J1939NM_ISO_DIRECT_NODEADDRESSSEARCHALGORITHMOFNODE           0x03U
#define J1939NM_ISO_GLOBAL_NODEADDRESSSEARCHALGORITHMOFNODE           0x04U
#define J1939NM_ISO_DELAYED_NODEADDRESSSEARCHALGORITHMOFNODE          0x05U
#define J1939NM_AC_RX_PDU_PDUTYPEOFRXPDU                              0x00U
#define J1939NM_AC_TX_PDU_PDUTYPEOFRXPDU                              0x01U
#define J1939NM_CA_PDU_PDUTYPEOFRXPDU                                 0x02U
#define J1939NM_NM_TX_PDU_PDUTYPEOFRXPDU                              0x03U
#define J1939NM_NM_RX_PDU_PDUTYPEOFRXPDU                              0x04U
#define J1939NM_AC_RX_PDU_PDUTYPEOFTXPDU                              0x00U
#define J1939NM_AC_TX_PDU_PDUTYPEOFTXPDU                              0x01U
#define J1939NM_CA_PDU_PDUTYPEOFTXPDU                                 0x02U
#define J1939NM_NM_TX_PDU_PDUTYPEOFTXPDU                              0x03U
#define J1939NM_NM_RX_PDU_PDUTYPEOFTXPDU                              0x04U
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCIsReducedToDefineDefines  J1939Nm Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define J1939NM_ISDEF_CHANNELCHANNELIDXOFCAPDU                        STD_OFF
#define J1939NM_ISDEF_INVALIDHNDOFCAPDU                               STD_OFF
#define J1939NM_ISDEF_METADATALENGTHOFCAPDU                           STD_OFF
#define J1939NM_ISDEF_CAPDUIDXOFCHANNEL                               STD_OFF
#define J1939NM_ISDEF_CAPDUUSEDOFCHANNEL                              STD_OFF
#define J1939NM_ISDEF_CANIFCTRLIDOFCHANNEL                            STD_OFF
#define J1939NM_ISDEF_COMMCHANNELIDOFCHANNEL                          STD_OFF
#define J1939NM_ISDEF_EXTERNALNODECHANNELCHANNELINDENDIDXOFCHANNEL    STD_OFF
#define J1939NM_ISDEF_EXTERNALNODECHANNELCHANNELINDSTARTIDXOFCHANNEL  STD_OFF
#define J1939NM_ISDEF_EXTERNALNODECHANNELCHANNELINDUSEDOFCHANNEL      STD_OFF
#define J1939NM_ISDEF_FIRSTANONYMOUSNODEIDOFCHANNEL                   STD_OFF
#define J1939NM_ISDEF_ISOBUSCHANNELOFCHANNEL                          STD_OFF
#define J1939NM_ISDEF_LASTNODEIDOFCHANNEL                             STD_OFF
#define J1939NM_ISDEF_NMQUEUEINDENDIDXOFCHANNEL                       STD_OFF
#define J1939NM_ISDEF_NMQUEUEINDSTARTIDXOFCHANNEL                     STD_OFF
#define J1939NM_ISDEF_NMQUEUEINDUSEDOFCHANNEL                         STD_OFF
#define J1939NM_ISDEF_NMQUEUESIZEOFCHANNEL                            STD_OFF
#define J1939NM_ISDEF_NODECHANNELCHANNELINDENDIDXOFCHANNEL            STD_OFF
#define J1939NM_ISDEF_NODECHANNELCHANNELINDSTARTIDXOFCHANNEL          STD_OFF
#define J1939NM_ISDEF_NODECHANNELCHANNELINDUSEDOFCHANNEL              STD_OFF
#define J1939NM_ISDEF_RXPDUACIDXOFCHANNEL                             STD_OFF
#define J1939NM_ISDEF_RXPDUNMIDXOFCHANNEL                             STD_OFF
#define J1939NM_ISDEF_RXPDUNMUSEDOFCHANNEL                            STD_OFF
#define J1939NM_ISDEF_TXPDUACIDXOFCHANNEL                             STD_OFF
#define J1939NM_ISDEF_TXPDUNMIDXOFCHANNEL                             STD_OFF
#define J1939NM_ISDEF_TXPDUNMUSEDOFCHANNEL                            STD_OFF
#define J1939NM_ISDEF_USESADDRESSARBITRATIONOFCHANNEL                 STD_OFF
#define J1939NM_ISDEF_USESDYNAMICADDRESSINGOFCHANNEL                  STD_OFF
#define J1939NM_ISDEF_CHANNELIDXOFCOMMCHANNEL                         STD_OFF
#define J1939NM_ISDEF_CHANNELUSEDOFCOMMCHANNEL                        STD_OFF
#define J1939NM_ISDEF_CURRENTEXTNODENAMEIDXOFEXTERNALNODE             STD_OFF
#define J1939NM_ISDEF_CURRENTEXTNODENAMEUSEDOFEXTERNALNODE            STD_OFF
#define J1939NM_ISDEF_EXTERNALNODECHANNELNODEINDENDIDXOFEXTERNALNODE  STD_OFF
#define J1939NM_ISDEF_EXTERNALNODECHANNELNODEINDSTARTIDXOFEXTERNALNODE STD_OFF
#define J1939NM_ISDEF_EXTERNALNODECHANNELNODEINDUSEDOFEXTERNALNODE    STD_OFF
#define J1939NM_ISDEF_EXTERNALNODENAMEFILTERIDXOFEXTERNALNODE         STD_OFF
#define J1939NM_ISDEF_EXTERNALNODENAMEFILTERUSEDOFEXTERNALNODE        STD_OFF
#define J1939NM_ISDEF_INVALIDHNDOFEXTERNALNODE                        STD_OFF
#define J1939NM_ISDEF_NODEADDRESSOFEXTERNALNODE                       STD_OFF
#define J1939NM_ISDEF_NODENAMEIDXOFEXTERNALNODE                       STD_OFF
#define J1939NM_ISDEF_NODENAMEUSEDOFEXTERNALNODE                      STD_OFF
#define J1939NM_ISDEF_NODETYPEOFEXTERNALNODE                          STD_OFF
#define J1939NM_ISDEF_CHANNELIDXOFEXTERNALNODECHANNEL                 STD_OFF
#define J1939NM_ISDEF_CURRENTEXTNODEADDRESSIDXOFEXTERNALNODECHANNEL   STD_OFF
#define J1939NM_ISDEF_CURRENTEXTNODEADDRESSUSEDOFEXTERNALNODECHANNEL  STD_OFF
#define J1939NM_ISDEF_EXTERNALNODECHANNELSTATEIDXOFEXTERNALNODECHANNEL STD_OFF
#define J1939NM_ISDEF_EXTERNALNODEIDXOFEXTERNALNODECHANNEL            STD_OFF
#define J1939NM_ISDEF_EXTERNALNODECHANNELCHANNELIND                   STD_OFF
#define J1939NM_ISDEF_EXTERNALNODECHANNELNODEIND                      STD_OFF
#define J1939NM_ISDEF_NODENAMEFILTERBYTE1OFEXTERNALNODENAMEFILTER     STD_OFF
#define J1939NM_ISDEF_NODENAMEFILTERBYTE2OFEXTERNALNODENAMEFILTER     STD_OFF
#define J1939NM_ISDEF_NODENAMEFILTERBYTE3OFEXTERNALNODENAMEFILTER     STD_OFF
#define J1939NM_ISDEF_NODENAMEFILTERBYTE4OFEXTERNALNODENAMEFILTER     STD_OFF
#define J1939NM_ISDEF_NODENAMEFILTERBYTE5OFEXTERNALNODENAMEFILTER     STD_OFF
#define J1939NM_ISDEF_NODENAMEFILTERBYTE6OFEXTERNALNODENAMEFILTER     STD_OFF
#define J1939NM_ISDEF_NODENAMEFILTERBYTE7OFEXTERNALNODENAMEFILTER     STD_OFF
#define J1939NM_ISDEF_NODENAMEFILTERBYTE8OFEXTERNALNODENAMEFILTER     STD_OFF
#define J1939NM_ISDEF_NMQUEUEIND                                      STD_OFF
#define J1939NM_ISDEF_ACCEPTSCOMMANDEDNAMEOFNODE                      STD_OFF
#define J1939NM_ISDEF_CURRENTNODENAMEIDXOFNODE                        STD_OFF
#define J1939NM_ISDEF_CURRENTNODENAMEUSEDOFNODE                       STD_OFF
#define J1939NM_ISDEF_FIRSTDYNAMICADDRESSOFNODE                       STD_OFF
#define J1939NM_ISDEF_J1939RMUSERIDOFNODE                             STD_OFF
#define J1939NM_ISDEF_LASTDYNAMICADDRESSOFNODE                        STD_OFF
#define J1939NM_ISDEF_NODEADDRESSCONFIGURATIONCAPABILITYOFNODE        STD_OFF
#define J1939NM_ISDEF_NODEADDRESSOFNODE                               STD_OFF
#define J1939NM_ISDEF_NODEADDRESSSEARCHALGORITHMOFNODE                STD_OFF
#define J1939NM_ISDEF_NODECHANNELNODEINDENDIDXOFNODE                  STD_OFF
#define J1939NM_ISDEF_NODECHANNELNODEINDSTARTIDXOFNODE                STD_OFF
#define J1939NM_ISDEF_NODECHANNELNODEINDUSEDOFNODE                    STD_OFF
#define J1939NM_ISDEF_NODENAMEIDXOFNODE                               STD_OFF
#define J1939NM_ISDEF_NODENAMEUSEDOFNODE                              STD_OFF
#define J1939NM_ISDEF_NODESTARTUPDELAYOFNODE                          STD_OFF
#define J1939NM_ISDEF_RANDOMSEEDIDXOFNODE                             STD_OFF
#define J1939NM_ISDEF_CHANNELIDXOFNODECHANNEL                         STD_OFF
#define J1939NM_ISDEF_CURRENTNODEADDRESSIDXOFNODECHANNEL              STD_OFF
#define J1939NM_ISDEF_CURRENTNODEADDRESSUSEDOFNODECHANNEL             STD_OFF
#define J1939NM_ISDEF_NODECHANNELSTATEIDXOFNODECHANNEL                STD_OFF
#define J1939NM_ISDEF_NODEIDXOFNODECHANNEL                            STD_OFF
#define J1939NM_ISDEF_PREVIOUSNODEADDRESSIDXOFNODECHANNEL             STD_OFF
#define J1939NM_ISDEF_PREVIOUSNODEADDRESSUSEDOFNODECHANNEL            STD_OFF
#define J1939NM_ISDEF_NODECHANNELCHANNELIND                           STD_OFF
#define J1939NM_ISDEF_NODECHANNELNODEIND                              STD_OFF
#define J1939NM_ISDEF_NODENAMEBYTE1OFNODENAME                         STD_OFF
#define J1939NM_ISDEF_NODENAMEBYTE2OFNODENAME                         STD_OFF
#define J1939NM_ISDEF_NODENAMEBYTE3OFNODENAME                         STD_OFF
#define J1939NM_ISDEF_NODENAMEBYTE4OFNODENAME                         STD_OFF
#define J1939NM_ISDEF_NODENAMEBYTE5OFNODENAME                         STD_OFF
#define J1939NM_ISDEF_NODENAMEBYTE6OFNODENAME                         STD_OFF
#define J1939NM_ISDEF_NODENAMEBYTE7OFNODENAME                         STD_OFF
#define J1939NM_ISDEF_NODENAMEBYTE8OFNODENAME                         STD_OFF
#define J1939NM_ISDEF_CHANNELCHANNELIDXOFRXPDU                        STD_OFF
#define J1939NM_ISDEF_INVALIDHNDOFRXPDU                               STD_OFF
#define J1939NM_ISDEF_METADATALENGTHOFRXPDU                           STD_OFF
#define J1939NM_ISDEF_PDUTYPEOFRXPDU                                  STD_OFF
#define J1939NM_ISDEF_CHANNELCHANNELIDXOFTXPDU                        STD_OFF
#define J1939NM_ISDEF_INVALIDHNDOFTXPDU                               STD_OFF
#define J1939NM_ISDEF_METADATALENGTHOFTXPDU                           STD_OFF
#define J1939NM_ISDEF_PDUIDOFTXPDU                                    STD_OFF
#define J1939NM_ISDEF_PDUTYPEOFTXPDU                                  STD_OFF
#define J1939NM_ISDEF_TXPDUSTATEIDXOFTXPDU                            STD_OFF
#define J1939NM_ISDEF_ADDRESSSTORAGEBLOCKOFPCCONFIG                   STD_OFF
#define J1939NM_ISDEF_CHANNELOFPCCONFIG                               STD_ON
#define J1939NM_ISDEF_CHANNELSTATEOFPCCONFIG                          STD_ON
#define J1939NM_ISDEF_COMMCHANNELOFPCCONFIG                           STD_ON
#define J1939NM_ISDEF_FINALMAGICNUMBEROFPCCONFIG                      STD_OFF
#define J1939NM_ISDEF_INITDATAHASHCODEOFPCCONFIG                      STD_OFF
#define J1939NM_ISDEF_NAMESTORAGEBLOCKOFPCCONFIG                      STD_OFF
#define J1939NM_ISDEF_NODECHANNELCHANNELINDOFPCCONFIG                 STD_ON
#define J1939NM_ISDEF_NODECHANNELNODEINDOFPCCONFIG                    STD_ON
#define J1939NM_ISDEF_NODECHANNELOFPCCONFIG                           STD_ON
#define J1939NM_ISDEF_NODECHANNELSTATEOFPCCONFIG                      STD_ON
#define J1939NM_ISDEF_NODENAMEOFPCCONFIG                              STD_ON
#define J1939NM_ISDEF_NODEOFPCCONFIG                                  STD_ON
#define J1939NM_ISDEF_RANDOMSEEDOFPCCONFIG                            STD_ON
#define J1939NM_ISDEF_REFRESHTIMEOFPCCONFIG                           STD_OFF
#define J1939NM_ISDEF_RXPDUOFPCCONFIG                                 STD_ON
#define J1939NM_ISDEF_TXPDUOFPCCONFIG                                 STD_ON
#define J1939NM_ISDEF_TXPDUSTATEOFPCCONFIG                            STD_ON
#define J1939NM_ISDEF_USERCALLOUTOFPCCONFIG                           STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCEqualsAlwaysToDefines  J1939Nm Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define J1939NM_EQ2_CHANNELCHANNELIDXOFCAPDU                          
#define J1939NM_EQ2_INVALIDHNDOFCAPDU                                 
#define J1939NM_EQ2_METADATALENGTHOFCAPDU                             
#define J1939NM_EQ2_CAPDUIDXOFCHANNEL                                 
#define J1939NM_EQ2_CAPDUUSEDOFCHANNEL                                
#define J1939NM_EQ2_CANIFCTRLIDOFCHANNEL                              
#define J1939NM_EQ2_COMMCHANNELIDOFCHANNEL                            
#define J1939NM_EQ2_EXTERNALNODECHANNELCHANNELINDENDIDXOFCHANNEL      
#define J1939NM_EQ2_EXTERNALNODECHANNELCHANNELINDSTARTIDXOFCHANNEL    
#define J1939NM_EQ2_EXTERNALNODECHANNELCHANNELINDUSEDOFCHANNEL        
#define J1939NM_EQ2_FIRSTANONYMOUSNODEIDOFCHANNEL                     
#define J1939NM_EQ2_ISOBUSCHANNELOFCHANNEL                            
#define J1939NM_EQ2_LASTNODEIDOFCHANNEL                               
#define J1939NM_EQ2_NMQUEUEINDENDIDXOFCHANNEL                         
#define J1939NM_EQ2_NMQUEUEINDSTARTIDXOFCHANNEL                       
#define J1939NM_EQ2_NMQUEUEINDUSEDOFCHANNEL                           
#define J1939NM_EQ2_NMQUEUESIZEOFCHANNEL                              
#define J1939NM_EQ2_NODECHANNELCHANNELINDENDIDXOFCHANNEL              
#define J1939NM_EQ2_NODECHANNELCHANNELINDSTARTIDXOFCHANNEL            
#define J1939NM_EQ2_NODECHANNELCHANNELINDUSEDOFCHANNEL                
#define J1939NM_EQ2_RXPDUACIDXOFCHANNEL                               
#define J1939NM_EQ2_RXPDUNMIDXOFCHANNEL                               
#define J1939NM_EQ2_RXPDUNMUSEDOFCHANNEL                              
#define J1939NM_EQ2_TXPDUACIDXOFCHANNEL                               
#define J1939NM_EQ2_TXPDUNMIDXOFCHANNEL                               
#define J1939NM_EQ2_TXPDUNMUSEDOFCHANNEL                              
#define J1939NM_EQ2_USESADDRESSARBITRATIONOFCHANNEL                   
#define J1939NM_EQ2_USESDYNAMICADDRESSINGOFCHANNEL                    
#define J1939NM_EQ2_CHANNELIDXOFCOMMCHANNEL                           
#define J1939NM_EQ2_CHANNELUSEDOFCOMMCHANNEL                          
#define J1939NM_EQ2_CURRENTEXTNODENAMEIDXOFEXTERNALNODE               
#define J1939NM_EQ2_CURRENTEXTNODENAMEUSEDOFEXTERNALNODE              
#define J1939NM_EQ2_EXTERNALNODECHANNELNODEINDENDIDXOFEXTERNALNODE    
#define J1939NM_EQ2_EXTERNALNODECHANNELNODEINDSTARTIDXOFEXTERNALNODE  
#define J1939NM_EQ2_EXTERNALNODECHANNELNODEINDUSEDOFEXTERNALNODE      
#define J1939NM_EQ2_EXTERNALNODENAMEFILTERIDXOFEXTERNALNODE           
#define J1939NM_EQ2_EXTERNALNODENAMEFILTERUSEDOFEXTERNALNODE          
#define J1939NM_EQ2_INVALIDHNDOFEXTERNALNODE                          
#define J1939NM_EQ2_NODEADDRESSOFEXTERNALNODE                         
#define J1939NM_EQ2_NODENAMEIDXOFEXTERNALNODE                         
#define J1939NM_EQ2_NODENAMEUSEDOFEXTERNALNODE                        
#define J1939NM_EQ2_NODETYPEOFEXTERNALNODE                            
#define J1939NM_EQ2_CHANNELIDXOFEXTERNALNODECHANNEL                   
#define J1939NM_EQ2_CURRENTEXTNODEADDRESSIDXOFEXTERNALNODECHANNEL     
#define J1939NM_EQ2_CURRENTEXTNODEADDRESSUSEDOFEXTERNALNODECHANNEL    
#define J1939NM_EQ2_EXTERNALNODECHANNELSTATEIDXOFEXTERNALNODECHANNEL  
#define J1939NM_EQ2_EXTERNALNODEIDXOFEXTERNALNODECHANNEL              
#define J1939NM_EQ2_EXTERNALNODECHANNELCHANNELIND                     
#define J1939NM_EQ2_EXTERNALNODECHANNELNODEIND                        
#define J1939NM_EQ2_NODENAMEFILTERBYTE1OFEXTERNALNODENAMEFILTER       
#define J1939NM_EQ2_NODENAMEFILTERBYTE2OFEXTERNALNODENAMEFILTER       
#define J1939NM_EQ2_NODENAMEFILTERBYTE3OFEXTERNALNODENAMEFILTER       
#define J1939NM_EQ2_NODENAMEFILTERBYTE4OFEXTERNALNODENAMEFILTER       
#define J1939NM_EQ2_NODENAMEFILTERBYTE5OFEXTERNALNODENAMEFILTER       
#define J1939NM_EQ2_NODENAMEFILTERBYTE6OFEXTERNALNODENAMEFILTER       
#define J1939NM_EQ2_NODENAMEFILTERBYTE7OFEXTERNALNODENAMEFILTER       
#define J1939NM_EQ2_NODENAMEFILTERBYTE8OFEXTERNALNODENAMEFILTER       
#define J1939NM_EQ2_NMQUEUEIND                                        
#define J1939NM_EQ2_ACCEPTSCOMMANDEDNAMEOFNODE                        
#define J1939NM_EQ2_CURRENTNODENAMEIDXOFNODE                          
#define J1939NM_EQ2_CURRENTNODENAMEUSEDOFNODE                         
#define J1939NM_EQ2_FIRSTDYNAMICADDRESSOFNODE                         
#define J1939NM_EQ2_J1939RMUSERIDOFNODE                               
#define J1939NM_EQ2_LASTDYNAMICADDRESSOFNODE                          
#define J1939NM_EQ2_NODEADDRESSCONFIGURATIONCAPABILITYOFNODE          
#define J1939NM_EQ2_NODEADDRESSOFNODE                                 
#define J1939NM_EQ2_NODEADDRESSSEARCHALGORITHMOFNODE                  
#define J1939NM_EQ2_NODECHANNELNODEINDENDIDXOFNODE                    
#define J1939NM_EQ2_NODECHANNELNODEINDSTARTIDXOFNODE                  
#define J1939NM_EQ2_NODECHANNELNODEINDUSEDOFNODE                      
#define J1939NM_EQ2_NODENAMEIDXOFNODE                                 
#define J1939NM_EQ2_NODENAMEUSEDOFNODE                                
#define J1939NM_EQ2_NODESTARTUPDELAYOFNODE                            
#define J1939NM_EQ2_RANDOMSEEDIDXOFNODE                               
#define J1939NM_EQ2_CHANNELIDXOFNODECHANNEL                           
#define J1939NM_EQ2_CURRENTNODEADDRESSIDXOFNODECHANNEL                
#define J1939NM_EQ2_CURRENTNODEADDRESSUSEDOFNODECHANNEL               
#define J1939NM_EQ2_NODECHANNELSTATEIDXOFNODECHANNEL                  
#define J1939NM_EQ2_NODEIDXOFNODECHANNEL                              
#define J1939NM_EQ2_PREVIOUSNODEADDRESSIDXOFNODECHANNEL               
#define J1939NM_EQ2_PREVIOUSNODEADDRESSUSEDOFNODECHANNEL              
#define J1939NM_EQ2_NODECHANNELCHANNELIND                             
#define J1939NM_EQ2_NODECHANNELNODEIND                                
#define J1939NM_EQ2_NODENAMEBYTE1OFNODENAME                           
#define J1939NM_EQ2_NODENAMEBYTE2OFNODENAME                           
#define J1939NM_EQ2_NODENAMEBYTE3OFNODENAME                           
#define J1939NM_EQ2_NODENAMEBYTE4OFNODENAME                           
#define J1939NM_EQ2_NODENAMEBYTE5OFNODENAME                           
#define J1939NM_EQ2_NODENAMEBYTE6OFNODENAME                           
#define J1939NM_EQ2_NODENAMEBYTE7OFNODENAME                           
#define J1939NM_EQ2_NODENAMEBYTE8OFNODENAME                           
#define J1939NM_EQ2_CHANNELCHANNELIDXOFRXPDU                          
#define J1939NM_EQ2_INVALIDHNDOFRXPDU                                 
#define J1939NM_EQ2_METADATALENGTHOFRXPDU                             
#define J1939NM_EQ2_PDUTYPEOFRXPDU                                    
#define J1939NM_EQ2_CHANNELCHANNELIDXOFTXPDU                          
#define J1939NM_EQ2_INVALIDHNDOFTXPDU                                 
#define J1939NM_EQ2_METADATALENGTHOFTXPDU                             
#define J1939NM_EQ2_PDUIDOFTXPDU                                      
#define J1939NM_EQ2_PDUTYPEOFTXPDU                                    
#define J1939NM_EQ2_TXPDUSTATEIDXOFTXPDU                              
#define J1939NM_EQ2_ADDRESSSTORAGEBLOCKOFPCCONFIG                     
#define J1939NM_EQ2_CHANNELOFPCCONFIG                                 J1939Nm_Channel
#define J1939NM_EQ2_CHANNELSTATEOFPCCONFIG                            J1939Nm_ChannelState.raw
#define J1939NM_EQ2_COMMCHANNELOFPCCONFIG                             J1939Nm_ComMChannel
#define J1939NM_EQ2_FINALMAGICNUMBEROFPCCONFIG                        
#define J1939NM_EQ2_INITDATAHASHCODEOFPCCONFIG                        
#define J1939NM_EQ2_NAMESTORAGEBLOCKOFPCCONFIG                        
#define J1939NM_EQ2_NODECHANNELCHANNELINDOFPCCONFIG                   J1939Nm_NodeChannelChannelInd
#define J1939NM_EQ2_NODECHANNELNODEINDOFPCCONFIG                      J1939Nm_NodeChannelNodeInd
#define J1939NM_EQ2_NODECHANNELOFPCCONFIG                             J1939Nm_NodeChannel
#define J1939NM_EQ2_NODECHANNELSTATEOFPCCONFIG                        J1939Nm_NodeChannelState
#define J1939NM_EQ2_NODENAMEOFPCCONFIG                                J1939Nm_NodeName
#define J1939NM_EQ2_NODEOFPCCONFIG                                    J1939Nm_Node
#define J1939NM_EQ2_RANDOMSEEDOFPCCONFIG                              J1939Nm_RandomSeed.raw
#define J1939NM_EQ2_REFRESHTIMEOFPCCONFIG                             
#define J1939NM_EQ2_RXPDUOFPCCONFIG                                   J1939Nm_RxPdu
#define J1939NM_EQ2_TXPDUOFPCCONFIG                                   J1939Nm_TxPdu
#define J1939NM_EQ2_TXPDUSTATEOFPCCONFIG                              J1939Nm_TxPduState.raw
#define J1939NM_EQ2_USERCALLOUTOFPCCONFIG                             
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCSymbolicInitializationPointers  J1939Nm Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define J1939Nm_Config_Ptr                                            NULL_PTR  /**< symbolic identifier which shall be used to initialize 'J1939Nm' */
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCInitializationSymbols  J1939Nm Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define J1939Nm_Config                                                NULL_PTR  /**< symbolic identifier which could be used to initialize 'J1939Nm */
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCGeneral  J1939Nm General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define J1939NM_CHECK_INIT_POINTER                                    STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define J1939NM_FINAL_MAGIC_NUMBER                                    0x221EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of J1939Nm */
#define J1939NM_INDIVIDUAL_POSTBUILD                                  STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'J1939Nm' is not configured to be postbuild capable. */
#define J1939NM_INIT_DATA                                             J1939NM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define J1939NM_INIT_DATA_HASH_CODE                                   917405230L  /**< the precompile constant to validate the initialization structure at initialization time of J1939Nm with a hashcode. The seed value is '0x221EU' */
#define J1939NM_USE_ECUM_BSW_ERROR_HOOK                               STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define J1939NM_USE_INIT_POINTER                                      STD_OFF  /**< STD_ON if the init pointer J1939Nm shall be used. */
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
  \defgroup  J1939NmPCGetRootDataMacros  J1939Nm Get Root Data Macros (PRE_COMPILE)
  \brief  These are used to get data pointers of root data.
  \{
*/ 
#define J1939Nm_GetAddressStorageBlockOfPCConfig()                    
#define J1939Nm_GetFinalMagicNumberOfPCConfig()                       
#define J1939Nm_GetInitDataHashCodeOfPCConfig()                       
#define J1939Nm_GetNameStorageBlockOfPCConfig()                       
#define J1939Nm_GetRefreshTimeOfPCConfig()                            
#define J1939Nm_GetUserCalloutOfPCConfig()                            
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCGetConstantDuplicatedRootDataMacros  J1939Nm Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define J1939Nm_GetCanSMDelayFactorOfPCConfig()                       123U  /**< Multiply with [0..255] and divide by 2048 to get the number of CanSM main function cycles required for the delay. */
#define J1939Nm_GetCanSMMainPeriodOfPCConfig()                        10U  /**< CanSM main function cycle time in [ms]. */
#define J1939Nm_GetChannelOfPCConfig()                                J1939Nm_Channel  /**< the pointer to J1939Nm_Channel */
#define J1939Nm_GetChannelStateOfPCConfig()                           J1939Nm_ChannelState.raw  /**< the pointer to J1939Nm_ChannelState */
#define J1939Nm_GetComMChannelOfPCConfig()                            J1939Nm_ComMChannel  /**< the pointer to J1939Nm_ComMChannel */
#define J1939Nm_GetJ1939NM_E_ADDRESS_LOSTOfPCConfig()                 DemConf_DemEventParameter_AutoCreatedDemEvent_J1939NM_E_ADDRESS_LOST
#define J1939Nm_GetJ1939NmDelayFactorOfPCConfig()                     123U  /**< Multiply with [0..255] and divide by 2048 to get the number of J1939Nm main function cycles required for the delay. */
#define J1939Nm_GetMainPeriodOfPCConfig()                             10U  /**< J1939Nm main function cycle time in [ms]. */
#define J1939Nm_GetNameManagementTimeoutOfPCConfig()                  125U
#define J1939Nm_GetNodeChannelChannelIndOfPCConfig()                  J1939Nm_NodeChannelChannelInd  /**< the pointer to J1939Nm_NodeChannelChannelInd */
#define J1939Nm_GetNodeChannelNodeIndOfPCConfig()                     J1939Nm_NodeChannelNodeInd  /**< the pointer to J1939Nm_NodeChannelNodeInd */
#define J1939Nm_GetNodeChannelOfPCConfig()                            J1939Nm_NodeChannel  /**< the pointer to J1939Nm_NodeChannel */
#define J1939Nm_GetNodeChannelStateOfPCConfig()                       J1939Nm_NodeChannelState  /**< the pointer to J1939Nm_NodeChannelState */
#define J1939Nm_GetNodeNameOfPCConfig()                               J1939Nm_NodeName  /**< the pointer to J1939Nm_NodeName */
#define J1939Nm_GetNodeOfPCConfig()                                   J1939Nm_Node  /**< the pointer to J1939Nm_Node */
#define J1939Nm_GetNodeStartupDelayOfPCConfig()                       25U
#define J1939Nm_GetRandomSeedOfPCConfig()                             J1939Nm_RandomSeed.raw  /**< the pointer to J1939Nm_RandomSeed */
#define J1939Nm_GetRequestResponseDelayOfPCConfig()                   125U
#define J1939Nm_GetRxPduOfPCConfig()                                  J1939Nm_RxPdu  /**< the pointer to J1939Nm_RxPdu */
#define J1939Nm_GetSizeOfChannelOfPCConfig()                          2U  /**< the number of accomplishable value elements in J1939Nm_Channel */
#define J1939Nm_GetSizeOfChannelStateOfPCConfig()                     2U  /**< the number of accomplishable value elements in J1939Nm_ChannelState */
#define J1939Nm_GetSizeOfComMChannelOfPCConfig()                      5U  /**< the number of accomplishable value elements in J1939Nm_ComMChannel */
#define J1939Nm_GetSizeOfNodeChannelChannelIndOfPCConfig()            2U  /**< the number of accomplishable value elements in J1939Nm_NodeChannelChannelInd */
#define J1939Nm_GetSizeOfNodeChannelNodeIndOfPCConfig()               2U  /**< the number of accomplishable value elements in J1939Nm_NodeChannelNodeInd */
#define J1939Nm_GetSizeOfNodeChannelOfPCConfig()                      2U  /**< the number of accomplishable value elements in J1939Nm_NodeChannel */
#define J1939Nm_GetSizeOfNodeChannelStateOfPCConfig()                 2U  /**< the number of accomplishable value elements in J1939Nm_NodeChannelState */
#define J1939Nm_GetSizeOfNodeNameOfPCConfig()                         1U  /**< the number of accomplishable value elements in J1939Nm_NodeName */
#define J1939Nm_GetSizeOfNodeOfPCConfig()                             1U  /**< the number of accomplishable value elements in J1939Nm_Node */
#define J1939Nm_GetSizeOfRandomSeedOfPCConfig()                       1U  /**< the number of accomplishable value elements in J1939Nm_RandomSeed */
#define J1939Nm_GetSizeOfRxPduOfPCConfig()                            2U  /**< the number of accomplishable value elements in J1939Nm_RxPdu */
#define J1939Nm_GetSizeOfTxPduOfPCConfig()                            2U  /**< the number of accomplishable value elements in J1939Nm_TxPdu */
#define J1939Nm_GetSizeOfTxPduStateOfPCConfig()                       2U  /**< the number of accomplishable value elements in J1939Nm_TxPduState */
#define J1939Nm_GetTxConfTimeoutOfPCConfig()                          150U  /**< Tx confirmation timeout in main function cycles. */
#define J1939Nm_GetTxPduOfPCConfig()                                  J1939Nm_TxPdu  /**< the pointer to J1939Nm_TxPdu */
#define J1939Nm_GetTxPduStateOfPCConfig()                             J1939Nm_TxPduState.raw  /**< the pointer to J1939Nm_TxPduState */
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCGetDataMacros  J1939Nm Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define J1939Nm_GetChannelChannelIdxOfCaPdu(Index)                    
#define J1939Nm_IsInvalidHndOfCaPdu(Index)                            
#define J1939Nm_GetMetaDataLengthOfCaPdu(Index)                       
#define J1939Nm_GetCaPduIdxOfChannel(Index)                           
#define J1939Nm_IsCaPduUsedOfChannel(Index)                           
#define J1939Nm_GetCanIfCtrlIdOfChannel(Index)                        (J1939Nm_GetChannelOfPCConfig()[(Index)].CanIfCtrlIdOfChannel)
#define J1939Nm_GetComMChannelIdOfChannel(Index)                      (J1939Nm_GetChannelOfPCConfig()[(Index)].ComMChannelIdOfChannel)
#define J1939Nm_GetExternalNodeChannelChannelIndEndIdxOfChannel(Index) 
#define J1939Nm_GetExternalNodeChannelChannelIndStartIdxOfChannel(Index) 
#define J1939Nm_IsExternalNodeChannelChannelIndUsedOfChannel(Index)   
#define J1939Nm_GetFirstAnonymousNodeIdOfChannel(Index)               (J1939Nm_GetChannelOfPCConfig()[(Index)].FirstAnonymousNodeIdOfChannel)
#define J1939Nm_IsIsobusChannelOfChannel(Index)                       
#define J1939Nm_GetLastNodeIdOfChannel(Index)                         (J1939Nm_GetChannelOfPCConfig()[(Index)].LastNodeIdOfChannel)
#define J1939Nm_GetNmQueueIndEndIdxOfChannel(Index)                   
#define J1939Nm_GetNmQueueIndStartIdxOfChannel(Index)                 
#define J1939Nm_IsNmQueueIndUsedOfChannel(Index)                      
#define J1939Nm_GetNmQueueSizeOfChannel(Index)                        (J1939Nm_GetChannelOfPCConfig()[(Index)].NmQueueSizeOfChannel)
#define J1939Nm_GetNodeChannelChannelIndEndIdxOfChannel(Index)        (J1939Nm_GetChannelOfPCConfig()[(Index)].NodeChannelChannelIndEndIdxOfChannel)
#define J1939Nm_GetNodeChannelChannelIndStartIdxOfChannel(Index)      (J1939Nm_GetChannelOfPCConfig()[(Index)].NodeChannelChannelIndStartIdxOfChannel)
#define J1939Nm_GetRxPduAcIdxOfChannel(Index)                         (J1939Nm_GetChannelOfPCConfig()[(Index)].RxPduAcIdxOfChannel)
#define J1939Nm_GetRxPduNmIdxOfChannel(Index)                         
#define J1939Nm_IsRxPduNmUsedOfChannel(Index)                         
#define J1939Nm_GetTxPduAcIdxOfChannel(Index)                         (J1939Nm_GetChannelOfPCConfig()[(Index)].TxPduAcIdxOfChannel)
#define J1939Nm_GetTxPduNmIdxOfChannel(Index)                         
#define J1939Nm_IsTxPduNmUsedOfChannel(Index)                         
#define J1939Nm_IsUsesAddressArbitrationOfChannel(Index)              ((J1939Nm_GetChannelOfPCConfig()[(Index)].UsesAddressArbitrationOfChannel) != FALSE)
#define J1939Nm_IsUsesDynamicAddressingOfChannel(Index)               
#define J1939Nm_GetChannelState(Index)                                (J1939Nm_GetChannelStateOfPCConfig()[(Index)])
#define J1939Nm_GetChannelIdxOfComMChannel(Index)                     (J1939Nm_GetComMChannelOfPCConfig()[(Index)].ChannelIdxOfComMChannel)
#define J1939Nm_GetCurrentExtNodeAddress(Index)                       
#define J1939Nm_GetCurrentExtNodeName(Index)                          
#define J1939Nm_GetCurrentNodeAddress(Index)                          
#define J1939Nm_GetCurrentNodeName(Index)                             
#define J1939Nm_GetCurrentExtNodeNameIdxOfExternalNode(Index)         
#define J1939Nm_IsCurrentExtNodeNameUsedOfExternalNode(Index)         
#define J1939Nm_GetExternalNodeChannelNodeIndEndIdxOfExternalNode(Index) 
#define J1939Nm_GetExternalNodeChannelNodeIndStartIdxOfExternalNode(Index) 
#define J1939Nm_IsExternalNodeChannelNodeIndUsedOfExternalNode(Index) 
#define J1939Nm_GetExternalNodeNameFilterIdxOfExternalNode(Index)     
#define J1939Nm_IsExternalNodeNameFilterUsedOfExternalNode(Index)     
#define J1939Nm_IsInvalidHndOfExternalNode(Index)                     
#define J1939Nm_GetNodeAddressOfExternalNode(Index)                   
#define J1939Nm_GetNodeNameIdxOfExternalNode(Index)                   
#define J1939Nm_IsNodeNameUsedOfExternalNode(Index)                   
#define J1939Nm_GetNodeTypeOfExternalNode(Index)                      
#define J1939Nm_GetChannelIdxOfExternalNodeChannel(Index)             
#define J1939Nm_GetCurrentExtNodeAddressIdxOfExternalNodeChannel(Index) 
#define J1939Nm_IsCurrentExtNodeAddressUsedOfExternalNodeChannel(Index) 
#define J1939Nm_GetExternalNodeChannelStateIdxOfExternalNodeChannel(Index) 
#define J1939Nm_GetExternalNodeIdxOfExternalNodeChannel(Index)        
#define J1939Nm_GetExternalNodeChannelChannelInd(Index)               
#define J1939Nm_GetExternalNodeChannelNodeInd(Index)                  
#define J1939Nm_GetExternalNodeChannelState(Index)                    
#define J1939Nm_GetNodeNameFilterByte1OfExternalNodeNameFilter(Index) 
#define J1939Nm_GetNodeNameFilterByte2OfExternalNodeNameFilter(Index) 
#define J1939Nm_GetNodeNameFilterByte3OfExternalNodeNameFilter(Index) 
#define J1939Nm_GetNodeNameFilterByte4OfExternalNodeNameFilter(Index) 
#define J1939Nm_GetNodeNameFilterByte5OfExternalNodeNameFilter(Index) 
#define J1939Nm_GetNodeNameFilterByte6OfExternalNodeNameFilter(Index) 
#define J1939Nm_GetNodeNameFilterByte7OfExternalNodeNameFilter(Index) 
#define J1939Nm_GetNodeNameFilterByte8OfExternalNodeNameFilter(Index) 
#define J1939Nm_GetNmQueue(Index)                                     
#define J1939Nm_GetNmQueueInd(Index)                                  
#define J1939Nm_IsAcceptsCommandedNameOfNode(Index)                   ((J1939Nm_GetNodeOfPCConfig()[(Index)].AcceptsCommandedNameOfNode) != FALSE)
#define J1939Nm_GetCurrentNodeNameIdxOfNode(Index)                    
#define J1939Nm_IsCurrentNodeNameUsedOfNode(Index)                    
#define J1939Nm_GetFirstDynamicAddressOfNode(Index)                   (J1939Nm_GetNodeOfPCConfig()[(Index)].FirstDynamicAddressOfNode)
#define J1939Nm_GetJ1939RmUserIdOfNode(Index)                         (J1939Nm_GetNodeOfPCConfig()[(Index)].J1939RmUserIdOfNode)
#define J1939Nm_GetLastDynamicAddressOfNode(Index)                    (J1939Nm_GetNodeOfPCConfig()[(Index)].LastDynamicAddressOfNode)
#define J1939Nm_GetNodeAddressConfigurationCapabilityOfNode(Index)    (J1939Nm_GetNodeOfPCConfig()[(Index)].NodeAddressConfigurationCapabilityOfNode)
#define J1939Nm_GetNodeAddressOfNode(Index)                           (J1939Nm_GetNodeOfPCConfig()[(Index)].NodeAddressOfNode)
#define J1939Nm_GetNodeAddressSearchAlgorithmOfNode(Index)            (J1939Nm_GetNodeOfPCConfig()[(Index)].NodeAddressSearchAlgorithmOfNode)
#define J1939Nm_GetNodeChannelNodeIndEndIdxOfNode(Index)              (J1939Nm_GetNodeOfPCConfig()[(Index)].NodeChannelNodeIndEndIdxOfNode)
#define J1939Nm_GetNodeChannelNodeIndStartIdxOfNode(Index)            (J1939Nm_GetNodeOfPCConfig()[(Index)].NodeChannelNodeIndStartIdxOfNode)
#define J1939Nm_GetNodeNameIdxOfNode(Index)                           (J1939Nm_GetNodeOfPCConfig()[(Index)].NodeNameIdxOfNode)
#define J1939Nm_IsNodeStartUpDelayOfNode(Index)                       ((J1939Nm_GetNodeOfPCConfig()[(Index)].NodeStartUpDelayOfNode) != FALSE)
#define J1939Nm_GetRandomSeedIdxOfNode(Index)                         (J1939Nm_GetNodeOfPCConfig()[(Index)].RandomSeedIdxOfNode)
#define J1939Nm_GetChannelIdxOfNodeChannel(Index)                     (J1939Nm_GetNodeChannelOfPCConfig()[(Index)].ChannelIdxOfNodeChannel)
#define J1939Nm_GetCurrentNodeAddressIdxOfNodeChannel(Index)          
#define J1939Nm_IsCurrentNodeAddressUsedOfNodeChannel(Index)          
#define J1939Nm_GetNodeChannelStateIdxOfNodeChannel(Index)            (J1939Nm_GetNodeChannelOfPCConfig()[(Index)].NodeChannelStateIdxOfNodeChannel)
#define J1939Nm_GetNodeIdxOfNodeChannel(Index)                        (J1939Nm_GetNodeChannelOfPCConfig()[(Index)].NodeIdxOfNodeChannel)
#define J1939Nm_GetPreviousNodeAddressIdxOfNodeChannel(Index)         
#define J1939Nm_IsPreviousNodeAddressUsedOfNodeChannel(Index)         
#define J1939Nm_GetNodeChannelChannelInd(Index)                       (J1939Nm_GetNodeChannelChannelIndOfPCConfig()[(Index)])
#define J1939Nm_GetNodeChannelNodeInd(Index)                          (J1939Nm_GetNodeChannelNodeIndOfPCConfig()[(Index)])
#define J1939Nm_GetNodeChannelState(Index)                            (J1939Nm_GetNodeChannelStateOfPCConfig()[(Index)])
#define J1939Nm_GetNodeNameByte1OfNodeName(Index)                     (J1939Nm_GetNodeNameOfPCConfig()[(Index)].NodeNameByte1OfNodeName)
#define J1939Nm_GetNodeNameByte2OfNodeName(Index)                     (J1939Nm_GetNodeNameOfPCConfig()[(Index)].NodeNameByte2OfNodeName)
#define J1939Nm_GetNodeNameByte3OfNodeName(Index)                     (J1939Nm_GetNodeNameOfPCConfig()[(Index)].NodeNameByte3OfNodeName)
#define J1939Nm_GetNodeNameByte4OfNodeName(Index)                     (J1939Nm_GetNodeNameOfPCConfig()[(Index)].NodeNameByte4OfNodeName)
#define J1939Nm_GetNodeNameByte5OfNodeName(Index)                     (J1939Nm_GetNodeNameOfPCConfig()[(Index)].NodeNameByte5OfNodeName)
#define J1939Nm_GetNodeNameByte6OfNodeName(Index)                     (J1939Nm_GetNodeNameOfPCConfig()[(Index)].NodeNameByte6OfNodeName)
#define J1939Nm_GetNodeNameByte7OfNodeName(Index)                     (J1939Nm_GetNodeNameOfPCConfig()[(Index)].NodeNameByte7OfNodeName)
#define J1939Nm_GetNodeNameByte8OfNodeName(Index)                     (J1939Nm_GetNodeNameOfPCConfig()[(Index)].NodeNameByte8OfNodeName)
#define J1939Nm_GetPreviousNodeAddress(Index)                         
#define J1939Nm_GetRandomSeed(Index)                                  (J1939Nm_GetRandomSeedOfPCConfig()[(Index)])
#define J1939Nm_GetChannelChannelIdxOfRxPdu(Index)                    (J1939Nm_GetRxPduOfPCConfig()[(Index)].ChannelChannelIdxOfRxPdu)
#define J1939Nm_IsInvalidHndOfRxPdu(Index)                            
#define J1939Nm_GetMetaDataLengthOfRxPdu(Index)                       (J1939Nm_GetRxPduOfPCConfig()[(Index)].MetaDataLengthOfRxPdu)
#define J1939Nm_GetPduTypeOfRxPdu(Index)                              (J1939Nm_GetRxPduOfPCConfig()[(Index)].PduTypeOfRxPdu)
#define J1939Nm_GetChannelChannelIdxOfTxPdu(Index)                    (J1939Nm_GetTxPduOfPCConfig()[(Index)].ChannelChannelIdxOfTxPdu)
#define J1939Nm_IsInvalidHndOfTxPdu(Index)                            
#define J1939Nm_GetMetaDataLengthOfTxPdu(Index)                       (J1939Nm_GetTxPduOfPCConfig()[(Index)].MetaDataLengthOfTxPdu)
#define J1939Nm_GetPduIdOfTxPdu(Index)                                (J1939Nm_GetTxPduOfPCConfig()[(Index)].PduIdOfTxPdu)
#define J1939Nm_GetPduTypeOfTxPdu(Index)                              (J1939Nm_GetTxPduOfPCConfig()[(Index)].PduTypeOfTxPdu)
#define J1939Nm_GetTxPduStateIdxOfTxPdu(Index)                        (J1939Nm_GetTxPduOfPCConfig()[(Index)].TxPduStateIdxOfTxPdu)
#define J1939Nm_GetTxPduState(Index)                                  (J1939Nm_GetTxPduStateOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCGetDeduplicatedDataMacros  J1939Nm Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define J1939Nm_GetAddressStorageBlock()                              
#define J1939Nm_GetCanSMDelayFactor()                                 J1939Nm_GetCanSMDelayFactorOfPCConfig()
#define J1939Nm_GetCanSMMainPeriod()                                  J1939Nm_GetCanSMMainPeriodOfPCConfig()
#define J1939Nm_IsNodeChannelChannelIndUsedOfChannel(Index)           (((boolean)(J1939Nm_GetNodeChannelChannelIndStartIdxOfChannel(Index) != J1939NM_NO_NODECHANNELCHANNELINDSTARTIDXOFCHANNEL)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Nm_NodeChannelChannelInd */
#define J1939Nm_IsChannelUsedOfComMChannel(Index)                     (((boolean)(J1939Nm_GetChannelIdxOfComMChannel(Index) != J1939NM_NO_CHANNELIDXOFCOMMCHANNEL)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Nm_Channel */
#define J1939Nm_GetFinalMagicNumber()                                 
#define J1939Nm_GetInitDataHashCode()                                 
#define J1939Nm_GetJ1939NM_E_ADDRESS_LOST()                           J1939Nm_GetJ1939NM_E_ADDRESS_LOSTOfPCConfig()
#define J1939Nm_GetJ1939NmDelayFactor()                               J1939Nm_GetJ1939NmDelayFactorOfPCConfig()
#define J1939Nm_GetMainPeriod()                                       J1939Nm_GetMainPeriodOfPCConfig()
#define J1939Nm_GetNameManagementTimeout()                            J1939Nm_GetNameManagementTimeoutOfPCConfig()
#define J1939Nm_GetNameStorageBlock()                                 
#define J1939Nm_IsNodeChannelNodeIndUsedOfNode(Index)                 (((boolean)(J1939Nm_GetNodeChannelNodeIndStartIdxOfNode(Index) != J1939NM_NO_NODECHANNELNODEINDSTARTIDXOFNODE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to J1939Nm_NodeChannelNodeInd */
#define J1939Nm_IsNodeNameUsedOfNode(Index)                           (((boolean)(J1939Nm_GetNodeNameIdxOfNode(Index) != J1939NM_NO_NODENAMEIDXOFNODE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to J1939Nm_NodeName */
#define J1939Nm_GetNodeStartupDelay()                                 J1939Nm_GetNodeStartupDelayOfPCConfig()
#define J1939Nm_GetRefreshTime()                                      
#define J1939Nm_GetRequestResponseDelay()                             J1939Nm_GetRequestResponseDelayOfPCConfig()
#define J1939Nm_GetSizeOfChannel()                                    J1939Nm_GetSizeOfChannelOfPCConfig()
#define J1939Nm_GetSizeOfChannelState()                               J1939Nm_GetSizeOfChannelStateOfPCConfig()
#define J1939Nm_GetSizeOfComMChannel()                                J1939Nm_GetSizeOfComMChannelOfPCConfig()
#define J1939Nm_GetSizeOfNode()                                       J1939Nm_GetSizeOfNodeOfPCConfig()
#define J1939Nm_GetSizeOfNodeChannel()                                J1939Nm_GetSizeOfNodeChannelOfPCConfig()
#define J1939Nm_GetSizeOfNodeChannelChannelInd()                      J1939Nm_GetSizeOfNodeChannelChannelIndOfPCConfig()
#define J1939Nm_GetSizeOfNodeChannelNodeInd()                         J1939Nm_GetSizeOfNodeChannelNodeIndOfPCConfig()
#define J1939Nm_GetSizeOfNodeChannelState()                           J1939Nm_GetSizeOfNodeChannelStateOfPCConfig()
#define J1939Nm_GetSizeOfNodeName()                                   J1939Nm_GetSizeOfNodeNameOfPCConfig()
#define J1939Nm_GetSizeOfRandomSeed()                                 J1939Nm_GetSizeOfRandomSeedOfPCConfig()
#define J1939Nm_GetSizeOfRxPdu()                                      J1939Nm_GetSizeOfRxPduOfPCConfig()
#define J1939Nm_GetSizeOfTxPdu()                                      J1939Nm_GetSizeOfTxPduOfPCConfig()
#define J1939Nm_GetSizeOfTxPduState()                                 J1939Nm_GetSizeOfTxPduStateOfPCConfig()
#define J1939Nm_GetTxConfTimeout()                                    J1939Nm_GetTxConfTimeoutOfPCConfig()
#define J1939Nm_GetUserCallout()                                      
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCSetDataMacros  J1939Nm Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define J1939Nm_SetChannelState(Index, Value)                         J1939Nm_GetChannelStateOfPCConfig()[(Index)] = (Value)
#define J1939Nm_SetCurrentExtNodeAddress(Index, Value)                
#define J1939Nm_SetCurrentExtNodeName(Index, Value)                   
#define J1939Nm_SetCurrentNodeAddress(Index, Value)                   
#define J1939Nm_SetCurrentNodeName(Index, Value)                      
#define J1939Nm_SetExternalNodeChannelState(Index, Value)             
#define J1939Nm_SetNmQueue(Index, Value)                              
#define J1939Nm_SetNodeChannelState(Index, Value)                     J1939Nm_GetNodeChannelStateOfPCConfig()[(Index)] = (Value)
#define J1939Nm_SetPreviousNodeAddress(Index, Value)                  
#define J1939Nm_SetRandomSeed(Index, Value)                           J1939Nm_GetRandomSeedOfPCConfig()[(Index)] = (Value)
#define J1939Nm_SetTxPduState(Index, Value)                           J1939Nm_GetTxPduStateOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCHasMacros  J1939Nm Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define J1939Nm_HasAddressStorageBlock()                              
#define J1939Nm_HasCaPdu()                                            
#define J1939Nm_HasChannelChannelIdxOfCaPdu()                         
#define J1939Nm_HasInvalidHndOfCaPdu()                                
#define J1939Nm_HasMetaDataLengthOfCaPdu()                            
#define J1939Nm_HasCanSMDelayFactor()                                 (TRUE != FALSE)
#define J1939Nm_HasCanSMMainPeriod()                                  (TRUE != FALSE)
#define J1939Nm_HasChannel()                                          (TRUE != FALSE)
#define J1939Nm_HasCaPduIdxOfChannel()                                
#define J1939Nm_HasCaPduUsedOfChannel()                               
#define J1939Nm_HasCanIfCtrlIdOfChannel()                             (TRUE != FALSE)
#define J1939Nm_HasComMChannelIdOfChannel()                           (TRUE != FALSE)
#define J1939Nm_HasExternalNodeChannelChannelIndEndIdxOfChannel()     
#define J1939Nm_HasExternalNodeChannelChannelIndStartIdxOfChannel()   
#define J1939Nm_HasExternalNodeChannelChannelIndUsedOfChannel()       
#define J1939Nm_HasFirstAnonymousNodeIdOfChannel()                    (TRUE != FALSE)
#define J1939Nm_HasIsobusChannelOfChannel()                           
#define J1939Nm_HasLastNodeIdOfChannel()                              (TRUE != FALSE)
#define J1939Nm_HasNmQueueIndEndIdxOfChannel()                        
#define J1939Nm_HasNmQueueIndStartIdxOfChannel()                      
#define J1939Nm_HasNmQueueIndUsedOfChannel()                          
#define J1939Nm_HasNmQueueSizeOfChannel()                             (TRUE != FALSE)
#define J1939Nm_HasNodeChannelChannelIndEndIdxOfChannel()             (TRUE != FALSE)
#define J1939Nm_HasNodeChannelChannelIndStartIdxOfChannel()           (TRUE != FALSE)
#define J1939Nm_HasNodeChannelChannelIndUsedOfChannel()               (TRUE != FALSE)
#define J1939Nm_HasRxPduAcIdxOfChannel()                              (TRUE != FALSE)
#define J1939Nm_HasRxPduNmIdxOfChannel()                              
#define J1939Nm_HasRxPduNmUsedOfChannel()                             
#define J1939Nm_HasTxPduAcIdxOfChannel()                              (TRUE != FALSE)
#define J1939Nm_HasTxPduNmIdxOfChannel()                              
#define J1939Nm_HasTxPduNmUsedOfChannel()                             
#define J1939Nm_HasUsesAddressArbitrationOfChannel()                  (TRUE != FALSE)
#define J1939Nm_HasUsesDynamicAddressingOfChannel()                   
#define J1939Nm_HasChannelState()                                     (TRUE != FALSE)
#define J1939Nm_HasComMChannel()                                      (TRUE != FALSE)
#define J1939Nm_HasChannelIdxOfComMChannel()                          (TRUE != FALSE)
#define J1939Nm_HasChannelUsedOfComMChannel()                         (TRUE != FALSE)
#define J1939Nm_HasCurrentExtNodeAddress()                            
#define J1939Nm_HasCurrentExtNodeName()                               
#define J1939Nm_HasCurrentNodeAddress()                               
#define J1939Nm_HasCurrentNodeName()                                  
#define J1939Nm_HasExternalNode()                                     
#define J1939Nm_HasCurrentExtNodeNameIdxOfExternalNode()              
#define J1939Nm_HasCurrentExtNodeNameUsedOfExternalNode()             
#define J1939Nm_HasExternalNodeChannelNodeIndEndIdxOfExternalNode()   
#define J1939Nm_HasExternalNodeChannelNodeIndStartIdxOfExternalNode() 
#define J1939Nm_HasExternalNodeChannelNodeIndUsedOfExternalNode()     
#define J1939Nm_HasExternalNodeNameFilterIdxOfExternalNode()          
#define J1939Nm_HasExternalNodeNameFilterUsedOfExternalNode()         
#define J1939Nm_HasInvalidHndOfExternalNode()                         
#define J1939Nm_HasNodeAddressOfExternalNode()                        
#define J1939Nm_HasNodeNameIdxOfExternalNode()                        
#define J1939Nm_HasNodeNameUsedOfExternalNode()                       
#define J1939Nm_HasNodeTypeOfExternalNode()                           
#define J1939Nm_HasExternalNodeChannel()                              
#define J1939Nm_HasChannelIdxOfExternalNodeChannel()                  
#define J1939Nm_HasCurrentExtNodeAddressIdxOfExternalNodeChannel()    
#define J1939Nm_HasCurrentExtNodeAddressUsedOfExternalNodeChannel()   
#define J1939Nm_HasExternalNodeChannelStateIdxOfExternalNodeChannel() 
#define J1939Nm_HasExternalNodeIdxOfExternalNodeChannel()             
#define J1939Nm_HasExternalNodeChannelChannelInd()                    
#define J1939Nm_HasExternalNodeChannelNodeInd()                       
#define J1939Nm_HasExternalNodeChannelState()                         
#define J1939Nm_HasExternalNodeNameFilter()                           
#define J1939Nm_HasNodeNameFilterByte1OfExternalNodeNameFilter()      
#define J1939Nm_HasNodeNameFilterByte2OfExternalNodeNameFilter()      
#define J1939Nm_HasNodeNameFilterByte3OfExternalNodeNameFilter()      
#define J1939Nm_HasNodeNameFilterByte4OfExternalNodeNameFilter()      
#define J1939Nm_HasNodeNameFilterByte5OfExternalNodeNameFilter()      
#define J1939Nm_HasNodeNameFilterByte6OfExternalNodeNameFilter()      
#define J1939Nm_HasNodeNameFilterByte7OfExternalNodeNameFilter()      
#define J1939Nm_HasNodeNameFilterByte8OfExternalNodeNameFilter()      
#define J1939Nm_HasFinalMagicNumber()                                 
#define J1939Nm_HasInitDataHashCode()                                 
#define J1939Nm_HasJ1939NM_E_ADDRESS_LOST()                           (TRUE != FALSE)
#define J1939Nm_HasJ1939NmDelayFactor()                               (TRUE != FALSE)
#define J1939Nm_HasMainPeriod()                                       (TRUE != FALSE)
#define J1939Nm_HasNameManagementTimeout()                            (TRUE != FALSE)
#define J1939Nm_HasNameStorageBlock()                                 
#define J1939Nm_HasNmQueue()                                          
#define J1939Nm_HasNmQueueInd()                                       
#define J1939Nm_HasNode()                                             (TRUE != FALSE)
#define J1939Nm_HasAcceptsCommandedNameOfNode()                       (TRUE != FALSE)
#define J1939Nm_HasCurrentNodeNameIdxOfNode()                         
#define J1939Nm_HasCurrentNodeNameUsedOfNode()                        
#define J1939Nm_HasFirstDynamicAddressOfNode()                        (TRUE != FALSE)
#define J1939Nm_HasJ1939RmUserIdOfNode()                              (TRUE != FALSE)
#define J1939Nm_HasLastDynamicAddressOfNode()                         (TRUE != FALSE)
#define J1939Nm_HasNodeAddressConfigurationCapabilityOfNode()         (TRUE != FALSE)
#define J1939Nm_HasNodeAddressOfNode()                                (TRUE != FALSE)
#define J1939Nm_HasNodeAddressSearchAlgorithmOfNode()                 (TRUE != FALSE)
#define J1939Nm_HasNodeChannelNodeIndEndIdxOfNode()                   (TRUE != FALSE)
#define J1939Nm_HasNodeChannelNodeIndStartIdxOfNode()                 (TRUE != FALSE)
#define J1939Nm_HasNodeChannelNodeIndUsedOfNode()                     (TRUE != FALSE)
#define J1939Nm_HasNodeNameIdxOfNode()                                (TRUE != FALSE)
#define J1939Nm_HasNodeNameUsedOfNode()                               (TRUE != FALSE)
#define J1939Nm_HasNodeStartUpDelayOfNode()                           (TRUE != FALSE)
#define J1939Nm_HasRandomSeedIdxOfNode()                              (TRUE != FALSE)
#define J1939Nm_HasNodeChannel()                                      (TRUE != FALSE)
#define J1939Nm_HasChannelIdxOfNodeChannel()                          (TRUE != FALSE)
#define J1939Nm_HasCurrentNodeAddressIdxOfNodeChannel()               
#define J1939Nm_HasCurrentNodeAddressUsedOfNodeChannel()              
#define J1939Nm_HasNodeChannelStateIdxOfNodeChannel()                 (TRUE != FALSE)
#define J1939Nm_HasNodeIdxOfNodeChannel()                             (TRUE != FALSE)
#define J1939Nm_HasPreviousNodeAddressIdxOfNodeChannel()              
#define J1939Nm_HasPreviousNodeAddressUsedOfNodeChannel()             
#define J1939Nm_HasNodeChannelChannelInd()                            (TRUE != FALSE)
#define J1939Nm_HasNodeChannelNodeInd()                               (TRUE != FALSE)
#define J1939Nm_HasNodeChannelState()                                 (TRUE != FALSE)
#define J1939Nm_HasNodeName()                                         (TRUE != FALSE)
#define J1939Nm_HasNodeNameByte1OfNodeName()                          (TRUE != FALSE)
#define J1939Nm_HasNodeNameByte2OfNodeName()                          (TRUE != FALSE)
#define J1939Nm_HasNodeNameByte3OfNodeName()                          (TRUE != FALSE)
#define J1939Nm_HasNodeNameByte4OfNodeName()                          (TRUE != FALSE)
#define J1939Nm_HasNodeNameByte5OfNodeName()                          (TRUE != FALSE)
#define J1939Nm_HasNodeNameByte6OfNodeName()                          (TRUE != FALSE)
#define J1939Nm_HasNodeNameByte7OfNodeName()                          (TRUE != FALSE)
#define J1939Nm_HasNodeNameByte8OfNodeName()                          (TRUE != FALSE)
#define J1939Nm_HasNodeStartupDelay()                                 (TRUE != FALSE)
#define J1939Nm_HasPreviousNodeAddress()                              
#define J1939Nm_HasRandomSeed()                                       (TRUE != FALSE)
#define J1939Nm_HasRefreshTime()                                      
#define J1939Nm_HasRequestResponseDelay()                             (TRUE != FALSE)
#define J1939Nm_HasRxPdu()                                            (TRUE != FALSE)
#define J1939Nm_HasChannelChannelIdxOfRxPdu()                         (TRUE != FALSE)
#define J1939Nm_HasInvalidHndOfRxPdu()                                
#define J1939Nm_HasMetaDataLengthOfRxPdu()                            (TRUE != FALSE)
#define J1939Nm_HasPduTypeOfRxPdu()                                   (TRUE != FALSE)
#define J1939Nm_HasSizeOfChannel()                                    (TRUE != FALSE)
#define J1939Nm_HasSizeOfChannelState()                               (TRUE != FALSE)
#define J1939Nm_HasSizeOfComMChannel()                                (TRUE != FALSE)
#define J1939Nm_HasSizeOfNode()                                       (TRUE != FALSE)
#define J1939Nm_HasSizeOfNodeChannel()                                (TRUE != FALSE)
#define J1939Nm_HasSizeOfNodeChannelChannelInd()                      (TRUE != FALSE)
#define J1939Nm_HasSizeOfNodeChannelNodeInd()                         (TRUE != FALSE)
#define J1939Nm_HasSizeOfNodeChannelState()                           (TRUE != FALSE)
#define J1939Nm_HasSizeOfNodeName()                                   (TRUE != FALSE)
#define J1939Nm_HasSizeOfRandomSeed()                                 (TRUE != FALSE)
#define J1939Nm_HasSizeOfRxPdu()                                      (TRUE != FALSE)
#define J1939Nm_HasSizeOfTxPdu()                                      (TRUE != FALSE)
#define J1939Nm_HasSizeOfTxPduState()                                 (TRUE != FALSE)
#define J1939Nm_HasTxConfTimeout()                                    (TRUE != FALSE)
#define J1939Nm_HasTxPdu()                                            (TRUE != FALSE)
#define J1939Nm_HasChannelChannelIdxOfTxPdu()                         (TRUE != FALSE)
#define J1939Nm_HasInvalidHndOfTxPdu()                                
#define J1939Nm_HasMetaDataLengthOfTxPdu()                            (TRUE != FALSE)
#define J1939Nm_HasPduIdOfTxPdu()                                     (TRUE != FALSE)
#define J1939Nm_HasPduTypeOfTxPdu()                                   (TRUE != FALSE)
#define J1939Nm_HasTxPduStateIdxOfTxPdu()                             (TRUE != FALSE)
#define J1939Nm_HasTxPduState()                                       (TRUE != FALSE)
#define J1939Nm_HasUserCallout()                                      
#define J1939Nm_HasPCConfig()                                         (TRUE != FALSE)
#define J1939Nm_HasAddressStorageBlockOfPCConfig()                    
#define J1939Nm_HasCanSMDelayFactorOfPCConfig()                       (TRUE != FALSE)
#define J1939Nm_HasCanSMMainPeriodOfPCConfig()                        (TRUE != FALSE)
#define J1939Nm_HasChannelOfPCConfig()                                (TRUE != FALSE)
#define J1939Nm_HasChannelStateOfPCConfig()                           (TRUE != FALSE)
#define J1939Nm_HasComMChannelOfPCConfig()                            (TRUE != FALSE)
#define J1939Nm_HasFinalMagicNumberOfPCConfig()                       
#define J1939Nm_HasInitDataHashCodeOfPCConfig()                       
#define J1939Nm_HasJ1939NM_E_ADDRESS_LOSTOfPCConfig()                 (TRUE != FALSE)
#define J1939Nm_HasJ1939NmDelayFactorOfPCConfig()                     (TRUE != FALSE)
#define J1939Nm_HasMainPeriodOfPCConfig()                             (TRUE != FALSE)
#define J1939Nm_HasNameManagementTimeoutOfPCConfig()                  (TRUE != FALSE)
#define J1939Nm_HasNameStorageBlockOfPCConfig()                       
#define J1939Nm_HasNodeChannelChannelIndOfPCConfig()                  (TRUE != FALSE)
#define J1939Nm_HasNodeChannelNodeIndOfPCConfig()                     (TRUE != FALSE)
#define J1939Nm_HasNodeChannelOfPCConfig()                            (TRUE != FALSE)
#define J1939Nm_HasNodeChannelStateOfPCConfig()                       (TRUE != FALSE)
#define J1939Nm_HasNodeNameOfPCConfig()                               (TRUE != FALSE)
#define J1939Nm_HasNodeOfPCConfig()                                   (TRUE != FALSE)
#define J1939Nm_HasNodeStartupDelayOfPCConfig()                       (TRUE != FALSE)
#define J1939Nm_HasRandomSeedOfPCConfig()                             (TRUE != FALSE)
#define J1939Nm_HasRefreshTimeOfPCConfig()                            
#define J1939Nm_HasRequestResponseDelayOfPCConfig()                   (TRUE != FALSE)
#define J1939Nm_HasRxPduOfPCConfig()                                  (TRUE != FALSE)
#define J1939Nm_HasSizeOfChannelOfPCConfig()                          (TRUE != FALSE)
#define J1939Nm_HasSizeOfChannelStateOfPCConfig()                     (TRUE != FALSE)
#define J1939Nm_HasSizeOfComMChannelOfPCConfig()                      (TRUE != FALSE)
#define J1939Nm_HasSizeOfNodeChannelChannelIndOfPCConfig()            (TRUE != FALSE)
#define J1939Nm_HasSizeOfNodeChannelNodeIndOfPCConfig()               (TRUE != FALSE)
#define J1939Nm_HasSizeOfNodeChannelOfPCConfig()                      (TRUE != FALSE)
#define J1939Nm_HasSizeOfNodeChannelStateOfPCConfig()                 (TRUE != FALSE)
#define J1939Nm_HasSizeOfNodeNameOfPCConfig()                         (TRUE != FALSE)
#define J1939Nm_HasSizeOfNodeOfPCConfig()                             (TRUE != FALSE)
#define J1939Nm_HasSizeOfRandomSeedOfPCConfig()                       (TRUE != FALSE)
#define J1939Nm_HasSizeOfRxPduOfPCConfig()                            (TRUE != FALSE)
#define J1939Nm_HasSizeOfTxPduOfPCConfig()                            (TRUE != FALSE)
#define J1939Nm_HasSizeOfTxPduStateOfPCConfig()                       (TRUE != FALSE)
#define J1939Nm_HasTxConfTimeoutOfPCConfig()                          (TRUE != FALSE)
#define J1939Nm_HasTxPduOfPCConfig()                                  (TRUE != FALSE)
#define J1939Nm_HasTxPduStateOfPCConfig()                             (TRUE != FALSE)
#define J1939Nm_HasUserCalloutOfPCConfig()                            
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCIncrementDataMacros  J1939Nm Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define J1939Nm_IncChannelState(Index)                                J1939Nm_GetChannelState(Index)++
#define J1939Nm_IncCurrentExtNodeAddress(Index)                       
#define J1939Nm_IncCurrentExtNodeName(Index)                          
#define J1939Nm_IncCurrentNodeAddress(Index)                          
#define J1939Nm_IncCurrentNodeName(Index)                             
#define J1939Nm_IncExternalNodeChannelState(Index)                    
#define J1939Nm_IncNmQueue(Index)                                     
#define J1939Nm_IncNodeChannelState(Index)                            J1939Nm_GetNodeChannelState(Index)++
#define J1939Nm_IncPreviousNodeAddress(Index)                         
#define J1939Nm_IncRandomSeed(Index)                                  J1939Nm_GetRandomSeed(Index)++
#define J1939Nm_IncTxPduState(Index)                                  J1939Nm_GetTxPduState(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCDecrementDataMacros  J1939Nm Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define J1939Nm_DecChannelState(Index)                                J1939Nm_GetChannelState(Index)--
#define J1939Nm_DecCurrentExtNodeAddress(Index)                       
#define J1939Nm_DecCurrentExtNodeName(Index)                          
#define J1939Nm_DecCurrentNodeAddress(Index)                          
#define J1939Nm_DecCurrentNodeName(Index)                             
#define J1939Nm_DecExternalNodeChannelState(Index)                    
#define J1939Nm_DecNmQueue(Index)                                     
#define J1939Nm_DecNodeChannelState(Index)                            J1939Nm_GetNodeChannelState(Index)--
#define J1939Nm_DecPreviousNodeAddress(Index)                         
#define J1939Nm_DecRandomSeed(Index)                                  J1939Nm_GetRandomSeed(Index)--
#define J1939Nm_DecTxPduState(Index)                                  J1939Nm_GetTxPduState(Index)--
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
  \defgroup  J1939NmPCIterableTypes  J1939Nm Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate J1939Nm_Channel */
typedef uint8_least J1939Nm_ChannelIterType;

/**   \brief  type used to iterate J1939Nm_ChannelState */
typedef uint8_least J1939Nm_ChannelStateIterType;

/**   \brief  type used to iterate J1939Nm_ComMChannel */
typedef uint8_least J1939Nm_ComMChannelIterType;

/**   \brief  type used to iterate J1939Nm_Node */
typedef uint8_least J1939Nm_NodeIterType;

/**   \brief  type used to iterate J1939Nm_NodeChannel */
typedef uint8_least J1939Nm_NodeChannelIterType;

/**   \brief  type used to iterate J1939Nm_NodeChannelChannelInd */
typedef uint8_least J1939Nm_NodeChannelChannelIndIterType;

/**   \brief  type used to iterate J1939Nm_NodeChannelNodeInd */
typedef uint8_least J1939Nm_NodeChannelNodeIndIterType;

/**   \brief  type used to iterate J1939Nm_NodeChannelState */
typedef uint8_least J1939Nm_NodeChannelStateIterType;

/**   \brief  type used to iterate J1939Nm_NodeName */
typedef uint8_least J1939Nm_NodeNameIterType;

/**   \brief  type used to iterate J1939Nm_RandomSeed */
typedef uint8_least J1939Nm_RandomSeedIterType;

/**   \brief  type used to iterate J1939Nm_RxPdu */
typedef uint8_least J1939Nm_RxPduIterType;

/**   \brief  type used to iterate J1939Nm_TxPdu */
typedef uint8_least J1939Nm_TxPduIterType;

/**   \brief  type used to iterate J1939Nm_TxPduState */
typedef uint8_least J1939Nm_TxPduStateIterType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCValueTypes  J1939Nm Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for J1939Nm_CanSMDelayFactor */
typedef uint8 J1939Nm_CanSMDelayFactorType;

/**   \brief  value based type definition for J1939Nm_CanSMMainPeriod */
typedef uint8 J1939Nm_CanSMMainPeriodType;

/**   \brief  value based type definition for J1939Nm_CanIfCtrlIdOfChannel */
typedef uint8 J1939Nm_CanIfCtrlIdOfChannelType;

/**   \brief  value based type definition for J1939Nm_ComMChannelIdOfChannel */
typedef NetworkHandleType J1939Nm_ComMChannelIdOfChannelType;

/**   \brief  value based type definition for J1939Nm_FirstAnonymousNodeIdOfChannel */
typedef uint16 J1939Nm_FirstAnonymousNodeIdOfChannelType;

/**   \brief  value based type definition for J1939Nm_LastNodeIdOfChannel */
typedef uint8 J1939Nm_LastNodeIdOfChannelType;

/**   \brief  value based type definition for J1939Nm_NmQueueSizeOfChannel */
typedef uint8 J1939Nm_NmQueueSizeOfChannelType;

/**   \brief  value based type definition for J1939Nm_NodeChannelChannelIndEndIdxOfChannel */
typedef uint8 J1939Nm_NodeChannelChannelIndEndIdxOfChannelType;

/**   \brief  value based type definition for J1939Nm_NodeChannelChannelIndStartIdxOfChannel */
typedef uint8 J1939Nm_NodeChannelChannelIndStartIdxOfChannelType;

/**   \brief  value based type definition for J1939Nm_NodeChannelChannelIndUsedOfChannel */
typedef boolean J1939Nm_NodeChannelChannelIndUsedOfChannelType;

/**   \brief  value based type definition for J1939Nm_RxPduAcIdxOfChannel */
typedef uint8 J1939Nm_RxPduAcIdxOfChannelType;

/**   \brief  value based type definition for J1939Nm_TxPduAcIdxOfChannel */
typedef uint8 J1939Nm_TxPduAcIdxOfChannelType;

/**   \brief  value based type definition for J1939Nm_UsesAddressArbitrationOfChannel */
typedef boolean J1939Nm_UsesAddressArbitrationOfChannelType;

/**   \brief  value based type definition for J1939Nm_ChannelIdxOfComMChannel */
typedef uint8 J1939Nm_ChannelIdxOfComMChannelType;

/**   \brief  value based type definition for J1939Nm_ChannelUsedOfComMChannel */
typedef boolean J1939Nm_ChannelUsedOfComMChannelType;

/**   \brief  value based type definition for J1939Nm_J1939NM_E_ADDRESS_LOST */
typedef uint8 J1939Nm_J1939NM_E_ADDRESS_LOSTType;

/**   \brief  value based type definition for J1939Nm_J1939NmDelayFactor */
typedef uint8 J1939Nm_J1939NmDelayFactorType;

/**   \brief  value based type definition for J1939Nm_MainPeriod */
typedef uint8 J1939Nm_MainPeriodType;

/**   \brief  value based type definition for J1939Nm_NameManagementTimeout */
typedef uint8 J1939Nm_NameManagementTimeoutType;

/**   \brief  value based type definition for J1939Nm_AcceptsCommandedNameOfNode */
typedef boolean J1939Nm_AcceptsCommandedNameOfNodeType;

/**   \brief  value based type definition for J1939Nm_FirstDynamicAddressOfNode */
typedef uint8 J1939Nm_FirstDynamicAddressOfNodeType;

/**   \brief  value based type definition for J1939Nm_J1939RmUserIdOfNode */
typedef uint8 J1939Nm_J1939RmUserIdOfNodeType;

/**   \brief  value based type definition for J1939Nm_LastDynamicAddressOfNode */
typedef uint8 J1939Nm_LastDynamicAddressOfNodeType;

/**   \brief  value based type definition for J1939Nm_NodeAddressConfigurationCapabilityOfNode */
typedef uint8 J1939Nm_NodeAddressConfigurationCapabilityOfNodeType;

/**   \brief  value based type definition for J1939Nm_NodeAddressOfNode */
typedef uint8 J1939Nm_NodeAddressOfNodeType;

/**   \brief  value based type definition for J1939Nm_NodeAddressSearchAlgorithmOfNode */
typedef uint8 J1939Nm_NodeAddressSearchAlgorithmOfNodeType;

/**   \brief  value based type definition for J1939Nm_NodeChannelNodeIndEndIdxOfNode */
typedef uint8 J1939Nm_NodeChannelNodeIndEndIdxOfNodeType;

/**   \brief  value based type definition for J1939Nm_NodeChannelNodeIndStartIdxOfNode */
typedef uint8 J1939Nm_NodeChannelNodeIndStartIdxOfNodeType;

/**   \brief  value based type definition for J1939Nm_NodeChannelNodeIndUsedOfNode */
typedef boolean J1939Nm_NodeChannelNodeIndUsedOfNodeType;

/**   \brief  value based type definition for J1939Nm_NodeNameIdxOfNode */
typedef uint8 J1939Nm_NodeNameIdxOfNodeType;

/**   \brief  value based type definition for J1939Nm_NodeNameUsedOfNode */
typedef boolean J1939Nm_NodeNameUsedOfNodeType;

/**   \brief  value based type definition for J1939Nm_NodeStartUpDelayOfNode */
typedef boolean J1939Nm_NodeStartUpDelayOfNodeType;

/**   \brief  value based type definition for J1939Nm_RandomSeedIdxOfNode */
typedef uint8 J1939Nm_RandomSeedIdxOfNodeType;

/**   \brief  value based type definition for J1939Nm_ChannelIdxOfNodeChannel */
typedef uint8 J1939Nm_ChannelIdxOfNodeChannelType;

/**   \brief  value based type definition for J1939Nm_NodeChannelStateIdxOfNodeChannel */
typedef uint8 J1939Nm_NodeChannelStateIdxOfNodeChannelType;

/**   \brief  value based type definition for J1939Nm_NodeIdxOfNodeChannel */
typedef uint8 J1939Nm_NodeIdxOfNodeChannelType;

/**   \brief  value based type definition for J1939Nm_NodeChannelChannelInd */
typedef uint8 J1939Nm_NodeChannelChannelIndType;

/**   \brief  value based type definition for J1939Nm_NodeChannelNodeInd */
typedef uint8 J1939Nm_NodeChannelNodeIndType;

/**   \brief  value based type definition for J1939Nm_NodeNameByte1OfNodeName */
typedef uint8 J1939Nm_NodeNameByte1OfNodeNameType;

/**   \brief  value based type definition for J1939Nm_NodeNameByte2OfNodeName */
typedef uint8 J1939Nm_NodeNameByte2OfNodeNameType;

/**   \brief  value based type definition for J1939Nm_NodeNameByte3OfNodeName */
typedef uint8 J1939Nm_NodeNameByte3OfNodeNameType;

/**   \brief  value based type definition for J1939Nm_NodeNameByte4OfNodeName */
typedef uint8 J1939Nm_NodeNameByte4OfNodeNameType;

/**   \brief  value based type definition for J1939Nm_NodeNameByte5OfNodeName */
typedef uint8 J1939Nm_NodeNameByte5OfNodeNameType;

/**   \brief  value based type definition for J1939Nm_NodeNameByte6OfNodeName */
typedef uint8 J1939Nm_NodeNameByte6OfNodeNameType;

/**   \brief  value based type definition for J1939Nm_NodeNameByte7OfNodeName */
typedef uint8 J1939Nm_NodeNameByte7OfNodeNameType;

/**   \brief  value based type definition for J1939Nm_NodeNameByte8OfNodeName */
typedef uint8 J1939Nm_NodeNameByte8OfNodeNameType;

/**   \brief  value based type definition for J1939Nm_NodeStartupDelay */
typedef uint8 J1939Nm_NodeStartupDelayType;

/**   \brief  value based type definition for J1939Nm_RandomSeed */
typedef uint8 J1939Nm_RandomSeedType;

/**   \brief  value based type definition for J1939Nm_RequestResponseDelay */
typedef uint8 J1939Nm_RequestResponseDelayType;

/**   \brief  value based type definition for J1939Nm_ChannelChannelIdxOfRxPdu */
typedef uint8 J1939Nm_ChannelChannelIdxOfRxPduType;

/**   \brief  value based type definition for J1939Nm_MetaDataLengthOfRxPdu */
typedef uint8 J1939Nm_MetaDataLengthOfRxPduType;

/**   \brief  value based type definition for J1939Nm_PduTypeOfRxPdu */
typedef uint8 J1939Nm_PduTypeOfRxPduType;

/**   \brief  value based type definition for J1939Nm_SizeOfChannel */
typedef uint8 J1939Nm_SizeOfChannelType;

/**   \brief  value based type definition for J1939Nm_SizeOfChannelState */
typedef uint8 J1939Nm_SizeOfChannelStateType;

/**   \brief  value based type definition for J1939Nm_SizeOfComMChannel */
typedef uint8 J1939Nm_SizeOfComMChannelType;

/**   \brief  value based type definition for J1939Nm_SizeOfNode */
typedef uint8 J1939Nm_SizeOfNodeType;

/**   \brief  value based type definition for J1939Nm_SizeOfNodeChannel */
typedef uint8 J1939Nm_SizeOfNodeChannelType;

/**   \brief  value based type definition for J1939Nm_SizeOfNodeChannelChannelInd */
typedef uint8 J1939Nm_SizeOfNodeChannelChannelIndType;

/**   \brief  value based type definition for J1939Nm_SizeOfNodeChannelNodeInd */
typedef uint8 J1939Nm_SizeOfNodeChannelNodeIndType;

/**   \brief  value based type definition for J1939Nm_SizeOfNodeChannelState */
typedef uint8 J1939Nm_SizeOfNodeChannelStateType;

/**   \brief  value based type definition for J1939Nm_SizeOfNodeName */
typedef uint8 J1939Nm_SizeOfNodeNameType;

/**   \brief  value based type definition for J1939Nm_SizeOfRandomSeed */
typedef uint8 J1939Nm_SizeOfRandomSeedType;

/**   \brief  value based type definition for J1939Nm_SizeOfRxPdu */
typedef uint8 J1939Nm_SizeOfRxPduType;

/**   \brief  value based type definition for J1939Nm_SizeOfTxPdu */
typedef uint8 J1939Nm_SizeOfTxPduType;

/**   \brief  value based type definition for J1939Nm_SizeOfTxPduState */
typedef uint8 J1939Nm_SizeOfTxPduStateType;

/**   \brief  value based type definition for J1939Nm_TxConfTimeout */
typedef uint8 J1939Nm_TxConfTimeoutType;

/**   \brief  value based type definition for J1939Nm_ChannelChannelIdxOfTxPdu */
typedef uint8 J1939Nm_ChannelChannelIdxOfTxPduType;

/**   \brief  value based type definition for J1939Nm_MetaDataLengthOfTxPdu */
typedef uint8 J1939Nm_MetaDataLengthOfTxPduType;

/**   \brief  value based type definition for J1939Nm_PduIdOfTxPdu */
typedef uint8 J1939Nm_PduIdOfTxPduType;

/**   \brief  value based type definition for J1939Nm_PduTypeOfTxPdu */
typedef uint8 J1939Nm_PduTypeOfTxPduType;

/**   \brief  value based type definition for J1939Nm_TxPduStateIdxOfTxPdu */
typedef uint8 J1939Nm_TxPduStateIdxOfTxPduType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  J1939NmPCStructTypes  J1939Nm Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in J1939Nm_Channel */
typedef struct sJ1939Nm_ChannelType
{
  J1939Nm_FirstAnonymousNodeIdOfChannelType FirstAnonymousNodeIdOfChannel;  /**< Index of first node with an unknown NAME that is attached to this channel */
  J1939Nm_ComMChannelIdOfChannelType ComMChannelIdOfChannel;  /**< DefinitionRef: /[ANY]/ComM/ComMConfigSet/ComMChannel */
  J1939Nm_UsesAddressArbitrationOfChannelType UsesAddressArbitrationOfChannel;  /**< DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmChannel/J1939NmChannelUsesAddressArbitration */
  J1939Nm_CanIfCtrlIdOfChannelType CanIfCtrlIdOfChannel;  /**< DefinitionRef: /[ANY]/CanIf/CanIfCtrlDrvCfg/CanIfCtrlCfg/CanIfCtrlId */
  J1939Nm_LastNodeIdOfChannelType LastNodeIdOfChannel;  /**< Index of last node which is attached to this channel */
  J1939Nm_NmQueueSizeOfChannelType NmQueueSizeOfChannel;  /**< DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmChannel/J1939NmNameManagementQueueSize */
  J1939Nm_NodeChannelChannelIndEndIdxOfChannelType NodeChannelChannelIndEndIdxOfChannel;  /**< the end index of the 0:n relation pointing to J1939Nm_NodeChannelChannelInd */
  J1939Nm_NodeChannelChannelIndStartIdxOfChannelType NodeChannelChannelIndStartIdxOfChannel;  /**< the start index of the 0:n relation pointing to J1939Nm_NodeChannelChannelInd */
  J1939Nm_RxPduAcIdxOfChannelType RxPduAcIdxOfChannel;  /**< the index of the 1:1 relation pointing to J1939Nm_RxPdu */
  J1939Nm_TxPduAcIdxOfChannelType TxPduAcIdxOfChannel;  /**< the index of the 1:1 relation pointing to J1939Nm_TxPdu */
} J1939Nm_ChannelType;

/**   \brief  type used in J1939Nm_ComMChannel */
typedef struct sJ1939Nm_ComMChannelType
{
  J1939Nm_ChannelIdxOfComMChannelType ChannelIdxOfComMChannel;  /**< the index of the 0:1 relation pointing to J1939Nm_Channel */
} J1939Nm_ComMChannelType;

/**   \brief  type used in J1939Nm_Node */
typedef struct sJ1939Nm_NodeType
{
  J1939Nm_AcceptsCommandedNameOfNodeType AcceptsCommandedNameOfNode;  /**< DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmAcceptsCommandedName */
  J1939Nm_NodeStartUpDelayOfNodeType NodeStartUpDelayOfNode;  /**< DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeStartUpDelay */
  J1939Nm_FirstDynamicAddressOfNodeType FirstDynamicAddressOfNode;  /**< DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmFirstDynamicAddress */
  J1939Nm_J1939RmUserIdOfNodeType J1939RmUserIdOfNode;  /**< J1939Rm User Id */
  J1939Nm_LastDynamicAddressOfNodeType LastDynamicAddressOfNode;  /**< DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmLastDynamicAddress */
  J1939Nm_NodeAddressOfNodeType NodeAddressOfNode;  /**< DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodePreferredAddress */
  J1939Nm_NodeAddressConfigurationCapabilityOfNodeType NodeAddressConfigurationCapabilityOfNode;  /**< DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmAddressConfigurationCapability */
  J1939Nm_NodeAddressSearchAlgorithmOfNodeType NodeAddressSearchAlgorithmOfNode;  /**< DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmAddressSearchAlgorithm */
  J1939Nm_NodeChannelNodeIndEndIdxOfNodeType NodeChannelNodeIndEndIdxOfNode;  /**< the end index of the 0:n relation pointing to J1939Nm_NodeChannelNodeInd */
  J1939Nm_NodeChannelNodeIndStartIdxOfNodeType NodeChannelNodeIndStartIdxOfNode;  /**< the start index of the 0:n relation pointing to J1939Nm_NodeChannelNodeInd */
  J1939Nm_NodeNameIdxOfNodeType NodeNameIdxOfNode;  /**< the index of the 0:1 relation pointing to J1939Nm_NodeName */
  J1939Nm_RandomSeedIdxOfNodeType RandomSeedIdxOfNode;  /**< the index of the 1:1 relation pointing to J1939Nm_RandomSeed */
} J1939Nm_NodeType;

/**   \brief  type used in J1939Nm_NodeChannel */
typedef struct sJ1939Nm_NodeChannelType
{
  J1939Nm_ChannelIdxOfNodeChannelType ChannelIdxOfNodeChannel;  /**< the index of the 1:1 relation pointing to J1939Nm_Channel */
  J1939Nm_NodeChannelStateIdxOfNodeChannelType NodeChannelStateIdxOfNodeChannel;  /**< the index of the 1:1 relation pointing to J1939Nm_NodeChannelState */
  J1939Nm_NodeIdxOfNodeChannelType NodeIdxOfNodeChannel;  /**< the index of the 1:1 relation pointing to J1939Nm_Node */
} J1939Nm_NodeChannelType;

/**   \brief  type used in J1939Nm_NodeName */
typedef struct sJ1939Nm_NodeNameType
{
  J1939Nm_NodeNameByte1OfNodeNameType NodeNameByte1OfNodeName;  /**< DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameIdentityNumber */
  J1939Nm_NodeNameByte2OfNodeNameType NodeNameByte2OfNodeName;  /**< DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameIdentityNumber */
  J1939Nm_NodeNameByte3OfNodeNameType NodeNameByte3OfNodeName;  /**< DefinitionRefs: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameManufacturerCode, /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameIdentityNumber */
  J1939Nm_NodeNameByte4OfNodeNameType NodeNameByte4OfNodeName;  /**< DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameManufacturerCode */
  J1939Nm_NodeNameByte5OfNodeNameType NodeNameByte5OfNodeName;  /**< DefinitionRefs: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameFunctionInstance, /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameECUInstance */
  J1939Nm_NodeNameByte6OfNodeNameType NodeNameByte6OfNodeName;  /**< DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameFunction */
  J1939Nm_NodeNameByte7OfNodeNameType NodeNameByte7OfNodeName;  /**< DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameVehicleSystem */
  J1939Nm_NodeNameByte8OfNodeNameType NodeNameByte8OfNodeName;  /**< DefinitionRefs: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameArbitraryAddressCapable, /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameIndustryGroup, /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameVehicleSystemInstance */
} J1939Nm_NodeNameType;

/**   \brief  type used in J1939Nm_RxPdu */
typedef struct sJ1939Nm_RxPduType
{
  J1939Nm_ChannelChannelIdxOfRxPduType ChannelChannelIdxOfRxPdu;  /**< the index of the 1:1 relation pointing to J1939Nm_Channel */
  J1939Nm_MetaDataLengthOfRxPduType MetaDataLengthOfRxPdu;  /**< MetaData Length */
  J1939Nm_PduTypeOfRxPduType PduTypeOfRxPdu;  /**< PDU type */
} J1939Nm_RxPduType;

/**   \brief  type used in J1939Nm_TxPdu */
typedef struct sJ1939Nm_TxPduType
{
  J1939Nm_ChannelChannelIdxOfTxPduType ChannelChannelIdxOfTxPdu;  /**< the index of the 1:1 relation pointing to J1939Nm_Channel */
  J1939Nm_MetaDataLengthOfTxPduType MetaDataLengthOfTxPdu;  /**< MetaData Length */
  J1939Nm_PduIdOfTxPduType PduIdOfTxPdu;  /**< PDU ID */
  J1939Nm_PduTypeOfTxPduType PduTypeOfTxPdu;  /**< PDU type */
  J1939Nm_TxPduStateIdxOfTxPduType TxPduStateIdxOfTxPdu;  /**< the index of the 1:1 relation pointing to J1939Nm_TxPduState */
} J1939Nm_TxPduType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCSymbolicStructTypes  J1939Nm Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to J1939Nm_ChannelState */
typedef struct J1939Nm_ChannelStateStructSTag
{
  J1939Nm_ChannelStateType Backbone1J1939_54966c1b[1];
  J1939Nm_ChannelStateType FMSNet_J1939_44d89c3b[1];
} J1939Nm_ChannelStateStructSType;

/**   \brief  type to be used as symbolic data element access to J1939Nm_RandomSeed */
typedef struct J1939Nm_RandomSeedStructSTag
{
  J1939Nm_RandomSeedType CIOM_4d5cd289[1];
} J1939Nm_RandomSeedStructSType;

/**   \brief  type to be used as symbolic data element access to J1939Nm_TxPduState */
typedef struct J1939Nm_TxPduStateStructSTag
{
  J1939Nm_TxPduStateType J1939NmTxPdu_2068bfea[1];
  J1939Nm_TxPduStateType J1939NmTxPdu_fa509995[1];
} J1939Nm_TxPduStateStructSType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCUnionIndexAndSymbolTypes  J1939Nm Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access J1939Nm_ChannelState in an index and symbol based style. */
typedef union J1939Nm_ChannelStateUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  J1939Nm_ChannelStateType raw[2];
  J1939Nm_ChannelStateStructSType str;
} J1939Nm_ChannelStateUType;

/**   \brief  type to access J1939Nm_RandomSeed in an index and symbol based style. */
typedef union J1939Nm_RandomSeedUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  J1939Nm_RandomSeedType raw[1];
  J1939Nm_RandomSeedStructSType str;
} J1939Nm_RandomSeedUType;

/**   \brief  type to access J1939Nm_TxPduState in an index and symbol based style. */
typedef union J1939Nm_TxPduStateUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  J1939Nm_TxPduStateType raw[2];
  J1939Nm_TxPduStateStructSType str;
} J1939Nm_TxPduStateUType;

/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCRootPointerTypes  J1939Nm Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point to arrays.
  \{
*/ 
/** 
  \}
*/ 

/** 
  \defgroup  J1939NmPCRootValueTypes  J1939Nm Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in J1939Nm_PCConfig */
typedef struct sJ1939Nm_PCConfigType
{
  uint8 J1939Nm_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} J1939Nm_PCConfigType;

typedef J1939Nm_PCConfigType J1939Nm_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

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
  J1939Nm_Channel
**********************************************************************************************************************/
/** 
  \var    J1939Nm_Channel
  \brief  DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmChannel
  \details
  Element                          Description
  FirstAnonymousNodeId             Index of first node with an unknown NAME that is attached to this channel
  ComMChannelId                    DefinitionRef: /[ANY]/ComM/ComMConfigSet/ComMChannel
  UsesAddressArbitration           DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmChannel/J1939NmChannelUsesAddressArbitration
  CanIfCtrlId                      DefinitionRef: /[ANY]/CanIf/CanIfCtrlDrvCfg/CanIfCtrlCfg/CanIfCtrlId
  LastNodeId                       Index of last node which is attached to this channel
  NmQueueSize                      DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmChannel/J1939NmNameManagementQueueSize
  NodeChannelChannelIndEndIdx      the end index of the 0:n relation pointing to J1939Nm_NodeChannelChannelInd
  NodeChannelChannelIndStartIdx    the start index of the 0:n relation pointing to J1939Nm_NodeChannelChannelInd
  RxPduAcIdx                       the index of the 1:1 relation pointing to J1939Nm_RxPdu
  TxPduAcIdx                       the index of the 1:1 relation pointing to J1939Nm_TxPdu
*/ 
#define J1939NM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Nm_ChannelType, J1939NM_CONST) J1939Nm_Channel[2];
#define J1939NM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Nm_ComMChannel
**********************************************************************************************************************/
/** 
  \var    J1939Nm_ComMChannel
  \brief  DefinitionRef: /[ANY]/ComM/ComMConfigSet/ComMChannel
  \details
  Element       Description
  ChannelIdx    the index of the 0:1 relation pointing to J1939Nm_Channel
*/ 
#define J1939NM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Nm_ComMChannelType, J1939NM_CONST) J1939Nm_ComMChannel[5];
#define J1939NM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Nm_Node
**********************************************************************************************************************/
/** 
  \var    J1939Nm_Node
  \brief  DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode
  \details
  Element                               Description
  AcceptsCommandedName                  DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmAcceptsCommandedName
  NodeStartUpDelay                      DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeStartUpDelay
  FirstDynamicAddress                   DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmFirstDynamicAddress
  J1939RmUserId                         J1939Rm User Id
  LastDynamicAddress                    DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmLastDynamicAddress
  NodeAddress                           DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodePreferredAddress
  NodeAddressConfigurationCapability    DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmAddressConfigurationCapability
  NodeAddressSearchAlgorithm            DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmAddressSearchAlgorithm
  NodeChannelNodeIndEndIdx              the end index of the 0:n relation pointing to J1939Nm_NodeChannelNodeInd
  NodeChannelNodeIndStartIdx            the start index of the 0:n relation pointing to J1939Nm_NodeChannelNodeInd
  NodeNameIdx                           the index of the 0:1 relation pointing to J1939Nm_NodeName
  RandomSeedIdx                         the index of the 1:1 relation pointing to J1939Nm_RandomSeed
*/ 
#define J1939NM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Nm_NodeType, J1939NM_CONST) J1939Nm_Node[1];
#define J1939NM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Nm_NodeChannel
**********************************************************************************************************************/
/** 
  \var    J1939Nm_NodeChannel
  \brief  DefinitionRefs: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode, /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmChannel
  \details
  Element                Description
  ChannelIdx             the index of the 1:1 relation pointing to J1939Nm_Channel
  NodeChannelStateIdx    the index of the 1:1 relation pointing to J1939Nm_NodeChannelState
  NodeIdx                the index of the 1:1 relation pointing to J1939Nm_Node
*/ 
#define J1939NM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Nm_NodeChannelType, J1939NM_CONST) J1939Nm_NodeChannel[2];
#define J1939NM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Nm_NodeChannelChannelInd
**********************************************************************************************************************/
/** 
  \var    J1939Nm_NodeChannelChannelInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Nm_NodeChannel
*/ 
#define J1939NM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Nm_NodeChannelChannelIndType, J1939NM_CONST) J1939Nm_NodeChannelChannelInd[2];
#define J1939NM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Nm_NodeChannelNodeInd
**********************************************************************************************************************/
/** 
  \var    J1939Nm_NodeChannelNodeInd
  \brief  the indexes of the 1:1 sorted relation pointing to J1939Nm_NodeChannel
*/ 
#define J1939NM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Nm_NodeChannelNodeIndType, J1939NM_CONST) J1939Nm_NodeChannelNodeInd[2];
#define J1939NM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Nm_NodeName
**********************************************************************************************************************/
/** 
  \var    J1939Nm_NodeName
  \brief  DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode
  \details
  Element          Description
  NodeNameByte1    DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameIdentityNumber
  NodeNameByte2    DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameIdentityNumber
  NodeNameByte3    DefinitionRefs: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameManufacturerCode, /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameIdentityNumber
  NodeNameByte4    DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameManufacturerCode
  NodeNameByte5    DefinitionRefs: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameFunctionInstance, /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameECUInstance
  NodeNameByte6    DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameFunction
  NodeNameByte7    DefinitionRef: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameVehicleSystem
  NodeNameByte8    DefinitionRefs: /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameArbitraryAddressCapable, /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameIndustryGroup, /MICROSAR/J1939Nm/J1939NmConfigSet/J1939NmNode/J1939NmNodeNameVehicleSystemInstance
*/ 
#define J1939NM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Nm_NodeNameType, J1939NM_CONST) J1939Nm_NodeName[1];
#define J1939NM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Nm_RxPdu
**********************************************************************************************************************/
/** 
  \var    J1939Nm_RxPdu
  \brief  List of received PDUs
  \details
  Element              Description
  ChannelChannelIdx    the index of the 1:1 relation pointing to J1939Nm_Channel
  MetaDataLength       MetaData Length
  PduType              PDU type
*/ 
#define J1939NM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Nm_RxPduType, J1939NM_CONST) J1939Nm_RxPdu[2];
#define J1939NM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Nm_TxPdu
**********************************************************************************************************************/
/** 
  \var    J1939Nm_TxPdu
  \brief  List of transmitted PDUs
  \details
  Element              Description
  ChannelChannelIdx    the index of the 1:1 relation pointing to J1939Nm_Channel
  MetaDataLength       MetaData Length
  PduId                PDU ID
  PduType              PDU type
  TxPduStateIdx        the index of the 1:1 relation pointing to J1939Nm_TxPduState
*/ 
#define J1939NM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(J1939Nm_TxPduType, J1939NM_CONST) J1939Nm_TxPdu[2];
#define J1939NM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Nm_ChannelState
**********************************************************************************************************************/
/** 
  \var    J1939Nm_ChannelState
  \brief  State of channel
*/ 
#define J1939NM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(J1939Nm_ChannelStateUType, J1939NM_VAR_NOINIT) J1939Nm_ChannelState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define J1939NM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Nm_NodeChannelState
**********************************************************************************************************************/
/** 
  \var    J1939Nm_NodeChannelState
  \brief  State of J1939Nm node per channel
*/ 
#define J1939NM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(J1939Nm_NodeChannelStateType, J1939NM_VAR_NOINIT) J1939Nm_NodeChannelState[2];
#define J1939NM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Nm_RandomSeed
**********************************************************************************************************************/
/** 
  \var    J1939Nm_RandomSeed
  \brief  Random seed for J1939Nm node
*/ 
#define J1939NM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(J1939Nm_RandomSeedUType, J1939NM_VAR_NOINIT) J1939Nm_RandomSeed;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define J1939NM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  J1939Nm_TxPduState
**********************************************************************************************************************/
/** 
  \var    J1939Nm_TxPduState
  \brief  State of J1939Nm Tx PDU
*/ 
#define J1939NM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(J1939Nm_TxPduStateUType, J1939NM_VAR_NOINIT) J1939Nm_TxPduState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define J1939NM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
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


#endif  /* J1939NM_CFG_H */

/**********************************************************************************************************************
  END OF FILE: J1939Nm_Cfg.h
**********************************************************************************************************************/

