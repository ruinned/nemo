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
 *              File: J1939Rm_Cfg.c
 *   Generation Time: 2018-11-22 03:14:18
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
  MISRA JUSTIFICATION
**********************************************************************************************************************/

/* PRQA S 0779 EOF */ /* MD_MSR_5.1_777 */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

#define J1939RM_CFG_SOURCE

#include "J1939Rm_Cfg.h"

/* include headers with symbolic name values */
#include "PduR_J1939Rm.h"
#include "J1939Nm_Cbk.h"
#include "ComM.h"

/* include headers with callout function prototypes */
#include "Com.h"
#include "J1939Nm_Cbk.h"
#include "Rte_J1939Rm.h"


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
CONST(J1939Rm_AckQueueIndType, J1939RM_CONST) J1939Rm_AckQueueInd[20] = {
  /* Index    AckQueueInd      Referable Keys */
  /*     0 */          0U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     1 */          1U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     2 */          2U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     3 */          3U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     4 */          4U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     5 */          5U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     6 */          6U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     7 */          7U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     8 */          8U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     9 */          9U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*    10 */         10U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    11 */         11U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    12 */         12U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    13 */         13U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    14 */         14U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    15 */         15U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    16 */         16U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    17 */         17U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    18 */         18U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    19 */         19U   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
};
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
CONST(J1939Rm_ChannelType, J1939RM_CONST) J1939Rm_Channel[2] = {
    /* Index    AckQueueIndEndIdx  AckQueueIndStartIdx  AckQueueSize  ChannelNodeNodeTableIndEndIdx  ChannelNodeNodeTableIndStartIdx  ComMChannelId                                    ReqQueueIndEndIdx  ReqQueueIndStartIdx  ReqTimeoutIndEndIdx  ReqTimeoutIndStartIdx  Request2QueueSize  RequestQueueSize  RequestTimeoutMonitors  RxPduRqstIdx  TxPduAckmIdx        Referable Keys */
  { /*     0 */               10U,                  0U,          10U,                            1U,                              0U, ComMConf_ComMChannel_CN_Backbone1J1939_0b1f4bae,               10U,                  0U,                 10U,                    0U,                0U,              10U,                    10U,           0U,           0U },  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  { /*     1 */               20U,                 10U,          10U,                            2U,                              1U,         ComMConf_ComMChannel_CN_FMSNet_fce1aae5,               20U,                 10U,                 20U,                   10U,                0U,              10U,                    10U,           1U,           1U }   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
};
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
CONST(J1939Rm_ChannelNodeType, J1939RM_CONST) J1939Rm_ChannelNode[2] = {
    /* Index    NodeChannelStateIdx  NodeNodeIdx        Referable Keys */
  { /*     0 */                  0U,          0U },  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  { /*     1 */                  1U,          0U }   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
};
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
CONST(J1939Rm_ChannelNodeNodeTableIndType, J1939RM_CONST) J1939Rm_ChannelNodeNodeTableInd[2] = {
  /* Index    ChannelNodeNodeTableInd      Referable Keys */
  /*     0 */                      0U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     1 */                      1U   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
};
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
CONST(J1939Rm_ComIPduType, J1939RM_CONST) J1939Rm_ComIPdu[1] = {
    /* Index    PGN           ComIPduDestEndIdx  ComIPduDestStartIdx  ExtId1  ExtId2  ExtId3  ExtIdUsage                               MetaDataLength  PduId                                                           Comment                                                                                                                     Referable Keys */
  { /*     0 */ 0x0000FF44UL,                1U,                  0U,     0U,     0U,     0U, J1939RM_EXT_ID_NONE_EXTIDUSAGEOFCOMIPDU,             0U, ComConf_ComIPdu_CIOM_BB1_01P_oBackbone1J1939_83fef105_Tx }   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289/Com_CIOM_4d5cd289/CIOM_BB1_01P_oBackbone1J1939_83fef105_Tx] */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289/Com_CIOM_4d5cd289] */
};
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
CONST(J1939Rm_ComIPduDestType, J1939RM_CONST) J1939Rm_ComIPduDest[1] = {
    /* Index    ChannelIdx  DA           Referable Keys */
  { /*     0 */         0U, 0xFEU }   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289/Com_CIOM_4d5cd289/CIOM_BB1_01P_oBackbone1J1939_83fef105_Tx] */
};
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
CONST(J1939Rm_ComIPduIndType, J1939RM_CONST) J1939Rm_ComIPduInd[1] = {
  /* Index    ComIPduInd      Referable Keys */
  /*     0 */         0U   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289/Com_CIOM_4d5cd289] */
};
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
CONST(J1939Rm_ComMChannelType, J1939RM_CONST) J1939Rm_ComMChannel[5] = {
    /* Index    ChannelIdx                                Referable Keys */
  { /*     0 */ J1939RM_NO_CHANNELIDXOFCOMMCHANNEL },  /* [unused] */
  { /*     1 */ J1939RM_NO_CHANNELIDXOFCOMMCHANNEL },  /* [unused] */
  { /*     2 */ J1939RM_NO_CHANNELIDXOFCOMMCHANNEL },  /* [unused] */
  { /*     3 */                                 0U },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone1J1939_0b1f4bae] */
  { /*     4 */                                 1U }   /* [/ActiveEcuC/ComM/ComMConfigSet/CN_FMSNet_fce1aae5] */
};
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
CONST(J1939Rm_NmNodeType, J1939RM_CONST) J1939Rm_NmNode[1] = {
    /* Index    NodeIdx        Referable Keys */
  { /*     0 */      0U }   /* [/ActiveEcuC/J1939Nm/J1939NmConfigSet/CIOM_4d5cd289] */
};
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
CONST(J1939Rm_NodeType, J1939RM_CONST) J1939Rm_Node[1] = {
    /* Index    NodeAddress  NodeChannelChannelTableIndEndIdx  NodeChannelChannelTableIndStartIdx  NodeId                                 NodeUserUserTableIndEndIdx  NodeUserUserTableIndStartIdx        Referable Keys */
  { /*     0 */         49U,                               2U,                                 0U, J1939NmConf_J1939NmNode_CIOM_4d5cd289,                         3U,                           0U }   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289] */
};
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
CONST(J1939Rm_NodeChannelType, J1939RM_CONST) J1939Rm_NodeChannel[2] = {
    /* Index    ChannelChannelIdx  NodeChannelStateIdx        Referable Keys */
  { /*     0 */                0U,                  0U },  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289] */
  { /*     1 */                1U,                  1U }   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289] */
};
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
CONST(J1939Rm_NodeChannelChannelTableIndType, J1939RM_CONST) J1939Rm_NodeChannelChannelTableInd[2] = {
  /* Index    NodeChannelChannelTableInd      Referable Keys */
  /*     0 */                         0U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289] */
  /*     1 */                         1U   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289] */
};
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
CONST(J1939Rm_NodeUserType, J1939RM_CONST) J1939Rm_NodeUser[3] = {
    /* Index    UserUserIdx        Referable Keys */
  { /*     0 */          2U },  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289] */
  { /*     1 */          1U },  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289] */
  { /*     2 */          0U }   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289] */
};
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
CONST(J1939Rm_NodeUserUserTableIndType, J1939RM_CONST) J1939Rm_NodeUserUserTableInd[3] = {
  /* Index    NodeUserUserTableInd      Referable Keys */
  /*     0 */                   0U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289] */
  /*     1 */                   1U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289] */
  /*     2 */                   2U   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289] */
};
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
CONST(J1939Rm_ReqQueueIndType, J1939RM_CONST) J1939Rm_ReqQueueInd[20] = {
  /* Index    ReqQueueInd      Referable Keys */
  /*     0 */          0U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     1 */          1U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     2 */          2U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     3 */          3U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     4 */          4U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     5 */          5U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     6 */          6U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     7 */          7U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     8 */          8U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     9 */          9U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*    10 */         10U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    11 */         11U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    12 */         12U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    13 */         13U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    14 */         14U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    15 */         15U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    16 */         16U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    17 */         17U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    18 */         18U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    19 */         19U   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
};
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
CONST(J1939Rm_ReqTimeoutIndType, J1939RM_CONST) J1939Rm_ReqTimeoutInd[20] = {
  /* Index    ReqTimeoutInd      Referable Keys */
  /*     0 */            0U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     1 */            1U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     2 */            2U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     3 */            3U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     4 */            4U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     5 */            5U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     6 */            6U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     7 */            7U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     8 */            8U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     9 */            9U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*    10 */           10U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    11 */           11U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    12 */           12U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    13 */           13U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    14 */           14U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    15 */           15U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    16 */           16U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    17 */           17U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    18 */           18U,  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    19 */           19U   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
};
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
CONST(J1939Rm_RequestIndicationFctPtrType, J1939RM_CONST) J1939Rm_RequestIndication[1] = {
  /* Index    RequestIndication              Referable Keys */
  /*     0 */J1939Nm_RequestIndication    /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289/CIOM_cbc3dd0f] */
};
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
CONST(J1939Rm_RxPduType, J1939RM_CONST) J1939Rm_RxPdu[2] = {
    /* Index    ChannelIdx  MetaDataLength  PduType                                Referable Keys */
  { /*     0 */         0U,             4U, J1939RM_PDU_RQST_PDUTYPEOFRXPDU },  /* [/ActiveEcuC/EcuC/EcucPduCollection/RqstRxPdu_Backbone1J1939_54966c1b] */
  { /*     1 */         1U,             4U, J1939RM_PDU_RQST_PDUTYPEOFRXPDU }   /* [/ActiveEcuC/EcuC/EcucPduCollection/RqstRxPdu_FMNSet_J1939] */
};
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
CONST(J1939Rm_TxPduType, J1939RM_CONST) J1939Rm_TxPdu[2] = {
    /* Index    ChannelIdx  MetaDataLength  PduId                             PduType                          TxPduStateIdx        Referable Keys */
  { /*     0 */         0U,             4U,   PduRConf_PduRSrcPdu_PduRSrcPdu, J1939RM_PDU_ACKM_PDUTYPEOFTXPDU,            0U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/AckmTxPdu_Backbone1J1939_54966c1b] */
  { /*     1 */         1U,             4U, PduRConf_PduRSrcPdu_PduRSrcPdu_2, J1939RM_PDU_ACKM_PDUTYPEOFTXPDU,            1U }   /* [/ActiveEcuC/EcuC/EcucPduCollection/AckmTxPdu_FMSNet_J1939_44d89c3b] */
};
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
CONST(J1939Rm_UserType, J1939RM_CONST) J1939Rm_User[3] = {
    /* Index    UserRequestIndication  ComIPduIndEndIdx                   ComIPduIndStartIdx                   NodeIdx  RequestIndicationIdx                   UserPGNIndEndIdx                   UserPGNIndStartIdx                   UserType                                   Referable Keys */
  { /*     0 */                 FALSE, J1939RM_NO_COMIPDUINDENDIDXOFUSER, J1939RM_NO_COMIPDUINDSTARTIDXOFUSER,      0U, J1939RM_NO_REQUESTINDICATIONIDXOFUSER, J1939RM_NO_USERPGNINDENDIDXOFUSER, J1939RM_NO_USERPGNINDSTARTIDXOFUSER,     J1939RM_USER_RTE_USERTYPEOFUSER },  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289/J1939RmUser_StartApplication] */
  { /*     1 */                 FALSE,                                1U,                                  0U,      0U, J1939RM_NO_REQUESTINDICATIONIDXOFUSER, J1939RM_NO_USERPGNINDENDIDXOFUSER, J1939RM_NO_USERPGNINDSTARTIDXOFUSER,     J1939RM_USER_COM_USERTYPEOFUSER },  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289/Com_CIOM_4d5cd289] */
  { /*     2 */                  TRUE, J1939RM_NO_COMIPDUINDENDIDXOFUSER, J1939RM_NO_COMIPDUINDSTARTIDXOFUSER,      0U,                                    0U,                                1U,                                  0U, J1939RM_USER_J1939NM_USERTYPEOFUSER }   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289/CIOM_cbc3dd0f] */
};
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
CONST(J1939Rm_UserPGNType, J1939RM_CONST) J1939Rm_UserPGN[1] = {
    /* Index    PGN                 Referable Keys */
  { /*     0 */ 0x0000EE00UL }   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289/CIOM_cbc3dd0f] */
};
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
CONST(J1939Rm_UserPGNIndType, J1939RM_CONST) J1939Rm_UserPGNInd[1] = {
  /* Index    UserPGNInd      Referable Keys */
  /*     0 */         0U   /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289/CIOM_cbc3dd0f] */
};
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
VAR(J1939Rm_AckQueueUType, J1939RM_VAR_NOINIT) J1939Rm_AckQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     1 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     2 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     3 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     4 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     5 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     6 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     7 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     8 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     9 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*    10 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    11 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    12 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    13 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    14 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    15 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    16 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    17 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    18 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    19 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */

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
VAR(J1939Rm_ChannelStateUType, J1939RM_VAR_NOINIT) J1939Rm_ChannelState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     1 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */

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
VAR(J1939Rm_NodeChannelStateType, J1939RM_VAR_NOINIT) J1939Rm_NodeChannelState[2];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289::/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     1 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/CIOM_4d5cd289::/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */

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
VAR(J1939Rm_ReqQueueUType, J1939RM_VAR_NOINIT) J1939Rm_ReqQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     1 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     2 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     3 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     4 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     5 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     6 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     7 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     8 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     9 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*    10 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    11 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    12 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    13 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    14 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    15 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    16 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    17 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    18 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    19 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */

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
VAR(J1939Rm_ReqTimeoutUType, J1939RM_VAR_NOINIT) J1939Rm_ReqTimeout;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     1 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     2 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     3 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     4 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     5 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     6 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     7 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     8 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*     9 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/Backbone1J1939_54966c1b] */
  /*    10 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    11 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    12 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    13 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    14 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    15 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    16 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    17 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    18 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */
  /*    19 */  /* [/ActiveEcuC/J1939Rm/J1939RmConfigSet/FMSNet_J1939_44d89c3b] */

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
VAR(J1939Rm_TxPduStateUType, J1939RM_VAR_NOINIT) J1939Rm_TxPduState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/AckmTxPdu_Backbone1J1939_54966c1b] */
  /*     1 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/AckmTxPdu_FMSNet_J1939_44d89c3b] */

#define J1939RM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
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
  END OF FILE: J1939Rm_Cfg.c
**********************************************************************************************************************/

