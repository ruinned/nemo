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
 *              File: J1939Nm_Cfg.c
 *   Generation Time: 2018-11-22 03:14:20
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

/**********************************************************************************************************************
  MISRA JUSTIFICATION
**********************************************************************************************************************/

/* PRQA S 0779 EOF */ /* MD_MSR_5.1_777 */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

#define J1939NM_CFG_SOURCE

#include "J1939Nm_Cfg.h"

/* include headers with symbolic name values */
#include "CanIf.h"
#include "ComM.h"
#include "J1939Rm.h"


/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
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
CONST(J1939Nm_ChannelType, J1939NM_CONST) J1939Nm_Channel[2] = {
    /* Index    FirstAnonymousNodeId  ComMChannelId                                    UsesAddressArbitration  CanIfCtrlId                                        LastNodeId  NmQueueSize  NodeChannelChannelIndEndIdx  NodeChannelChannelIndStartIdx  RxPduAcIdx  TxPduAcIdx        Referable Keys */
  { /*     0 */               65535U, ComMConf_ComMChannel_CN_Backbone1J1939_0b1f4bae,                   TRUE, CanIfConf_CanIfCtrlCfg_CT_Backbone1J1939_198bcf1c,         0U,          0U,                          1U,                            0U,         1U,         1U },  /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/Backbone1J1939_54966c1b] */
  { /*     1 */               65535U,         ComMConf_ComMChannel_CN_FMSNet_fce1aae5,                   TRUE,         CanIfConf_CanIfCtrlCfg_CT_FMSNet_119a8706,         0U,          0U,                          2U,                            1U,         0U,         0U }   /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/FMSNet_J1939_44d89c3b] */
};
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
CONST(J1939Nm_ComMChannelType, J1939NM_CONST) J1939Nm_ComMChannel[5] = {
    /* Index    ChannelIdx                                Referable Keys */
  { /*     0 */ J1939NM_NO_CHANNELIDXOFCOMMCHANNEL },  /* [unused] */
  { /*     1 */ J1939NM_NO_CHANNELIDXOFCOMMCHANNEL },  /* [unused] */
  { /*     2 */ J1939NM_NO_CHANNELIDXOFCOMMCHANNEL },  /* [unused] */
  { /*     3 */                                 0U },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone1J1939_0b1f4bae] */
  { /*     4 */                                 1U }   /* [/ActiveEcuC/ComM/ComMConfigSet/CN_FMSNet_fce1aae5] */
};
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
CONST(J1939Nm_NodeType, J1939NM_CONST) J1939Nm_Node[1] = {
    /* Index    AcceptsCommandedName  NodeStartUpDelay  FirstDynamicAddress  J1939RmUserId  LastDynamicAddress  NodeAddress  NodeAddressConfigurationCapability                    NodeAddressSearchAlgorithm                     NodeChannelNodeIndEndIdx  NodeChannelNodeIndStartIdx  NodeNameIdx  RandomSeedIdx        Referable Keys */
  { /*     0 */                 TRUE,             TRUE,               0x80U,            0U,              0xF7U,       0x31U, J1939NM_NCA_NODEADDRESSCONFIGURATIONCAPABILITYOFNODE, J1939NM_NONE_NODEADDRESSSEARCHALGORITHMOFNODE,                       2U,                         0U,          0U,            0U }   /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/CIOM_4d5cd289] */
};
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
CONST(J1939Nm_NodeChannelType, J1939NM_CONST) J1939Nm_NodeChannel[2] = {
    /* Index    ChannelIdx  NodeChannelStateIdx  NodeIdx        Referable Keys */
  { /*     0 */         0U,                  0U,      0U },  /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/CIOM_4d5cd289, /ActiveEcuC/J1939Nm/J1939NmConfigSet/Backbone1J1939_54966c1b] */
  { /*     1 */         1U,                  1U,      0U }   /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/CIOM_4d5cd289, /ActiveEcuC/J1939Nm/J1939NmConfigSet/FMSNet_J1939_44d89c3b] */
};
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
CONST(J1939Nm_NodeChannelChannelIndType, J1939NM_CONST) J1939Nm_NodeChannelChannelInd[2] = {
  /* Index    NodeChannelChannelInd      Referable Keys */
  /*     0 */                    0U,  /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/Backbone1J1939_54966c1b] */
  /*     1 */                    1U   /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/FMSNet_J1939_44d89c3b] */
};
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
CONST(J1939Nm_NodeChannelNodeIndType, J1939NM_CONST) J1939Nm_NodeChannelNodeInd[2] = {
  /* Index    NodeChannelNodeInd      Referable Keys */
  /*     0 */                 0U,  /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/CIOM_4d5cd289] */
  /*     1 */                 1U   /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/CIOM_4d5cd289] */
};
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
CONST(J1939Nm_NodeNameType, J1939NM_CONST) J1939Nm_NodeName[1] = {
    /* Index    NodeNameByte1  NodeNameByte2  NodeNameByte3  NodeNameByte4  NodeNameByte5  NodeNameByte6  NodeNameByte7  NodeNameByte8        Referable Keys */
  { /*     0 */         0x32U,         0x00U,         0x00U,         0x00U,         0x00U,         0x00U,         0x00U,         0x00U }   /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/CIOM_4d5cd289] */
};
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
CONST(J1939Nm_RxPduType, J1939NM_CONST) J1939Nm_RxPdu[2] = {
    /* Index    ChannelChannelIdx  MetaDataLength  PduType                                 Referable Keys */
  { /*     0 */                1U,             1U, J1939NM_AC_RX_PDU_PDUTYPEOFRXPDU },  /* [/ActiveEcuC/EcuC/EcucPduCollection/J1939NmRxPdu_2068bfea] */
  { /*     1 */                0U,             1U, J1939NM_AC_RX_PDU_PDUTYPEOFRXPDU }   /* [/ActiveEcuC/EcuC/EcucPduCollection/J1939NmRxPdu_fa509995] */
};
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
CONST(J1939Nm_TxPduType, J1939NM_CONST) J1939Nm_TxPdu[2] = {
    /* Index    ChannelChannelIdx  MetaDataLength  PduId                                          PduType                           TxPduStateIdx        Referable Keys */
  { /*     0 */                1U,             1U, CanIfConf_CanIfTxPduCfg_J1939NmTxPdu_2068bfea, J1939NM_AC_TX_PDU_PDUTYPEOFTXPDU,            0U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/J1939NmTxPdu_2068bfea] */
  { /*     1 */                0U,             1U, CanIfConf_CanIfTxPduCfg_J1939NmTxPdu_fa509995, J1939NM_AC_TX_PDU_PDUTYPEOFTXPDU,            1U }   /* [/ActiveEcuC/EcuC/EcucPduCollection/J1939NmTxPdu_fa509995] */
};
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
VAR(J1939Nm_ChannelStateUType, J1939NM_VAR_NOINIT) J1939Nm_ChannelState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/Backbone1J1939_54966c1b] */
  /*     1 */  /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/FMSNet_J1939_44d89c3b] */

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
VAR(J1939Nm_NodeChannelStateType, J1939NM_VAR_NOINIT) J1939Nm_NodeChannelState[2];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/CIOM_4d5cd289::/ActiveEcuC/J1939Nm/J1939NmConfigSet/Backbone1J1939_54966c1b] */
  /*     1 */  /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/CIOM_4d5cd289::/ActiveEcuC/J1939Nm/J1939NmConfigSet/FMSNet_J1939_44d89c3b] */

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
VAR(J1939Nm_RandomSeedUType, J1939NM_VAR_NOINIT) J1939Nm_RandomSeed;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/CIOM_4d5cd289] */

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
VAR(J1939Nm_TxPduStateUType, J1939NM_VAR_NOINIT) J1939Nm_TxPduState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/J1939NmTxPdu_2068bfea] */
  /*     1 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/J1939NmTxPdu_fa509995] */

#define J1939NM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/


/**********************************************************************************************************************
  END OF FILE: J1939Nm_Cfg.c
**********************************************************************************************************************/

