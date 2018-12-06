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
 *              File: J1939Tp_Cfg.c
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

#define J1939TP_CFG_SOURCE

#include "J1939Tp_Cfg.h"

/* include headers with symbolic name values */
#include "CanIf.h"
#include "PduR_J1939Tp.h"


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
CONST(J1939Tp_RxChannelType, J1939TP_CONST) J1939Tp_RxChannel[1] = {
    /* Index    ComMChannel  RxChannelRxNSduRxNSduTableIndEndIdx  RxChannelRxNSduRxNSduTableIndStartIdx  RxDa   RxDynamicBufferRatio  RxPacketsPerBlock  RxProtocolType                                     RxSa   TxPduRxFcNPduIdx        Referable Keys */
  { /*     0 */          3U,                                  2U,                                    0U, 0xFEU,                  80U,               16U, J1939TP_PROTOCOL_UNUSED_RXPROTOCOLTYPEOFRXCHANNEL, 0xEEU,               2U }   /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/Backbone1J1939_dba64907] */
};
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
CONST(J1939Tp_RxChannelRxNSduType, J1939TP_CONST) J1939Tp_RxChannelRxNSdu[2] = {
    /* Index    RxSduRxNSduIdx        Referable Keys */
  { /*     0 */             0U },  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/Backbone1J1939_dba64907] */
  { /*     1 */             1U }   /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/Backbone1J1939_dba64907] */
};
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
CONST(J1939Tp_RxChannelRxNSduRxNSduTableIndType, J1939TP_CONST) J1939Tp_RxChannelRxNSduRxNSduTableInd[2] = {
  /* Index    RxChannelRxNSduRxNSduTableInd      Referable Keys */
  /*     0 */                            0U,  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/Backbone1J1939_dba64907] */
  /*     1 */                            1U   /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/Backbone1J1939_dba64907] */
};
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
CONST(J1939Tp_RxPduType, J1939TP_CONST) J1939Tp_RxPdu[4] = {
    /* Index    PduFormat                      PduType                        RxPduRxChannelRxChannelTableIndEndIdx                    RxPduRxChannelRxChannelTableIndStartIdx                    RxPduRxSduRxSduTableIndEndIdx                    RxPduRxSduRxSduTableIndStartIdx                    RxPduTxChannelTxChannelTableIndEndIdx                    RxPduTxChannelTxChannelTableIndStartIdx                          Referable Keys */
  { /*     0 */ J1939TP_PDU1_PDUFORMATOFRXPDU,   J1939TP_TPCM_PDUTYPEOFRXPDU, J1939TP_NO_RXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFRXPDU, J1939TP_NO_RXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFRXPDU, J1939TP_NO_RXPDURXSDURXSDUTABLEINDENDIDXOFRXPDU, J1939TP_NO_RXPDURXSDURXSDUTABLEINDSTARTIDXOFRXPDU,                                                      2U,                                                        0U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/FcNPdu_Backbone1J1939_dba64907_Rx] */
  { /*     1 */ J1939TP_PDU1_PDUFORMATOFRXPDU,   J1939TP_TPCM_PDUTYPEOFRXPDU,                                                      1U,                                                        0U, J1939TP_NO_RXPDURXSDURXSDUTABLEINDENDIDXOFRXPDU, J1939TP_NO_RXPDURXSDURXSDUTABLEINDSTARTIDXOFRXPDU, J1939TP_NO_RXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFRXPDU, J1939TP_NO_RXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFRXPDU },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oBackbone1J1939_b357cc8b_Rx] */
  { /*     2 */ J1939TP_PDU1_PDUFORMATOFRXPDU,   J1939TP_TPDT_PDUTYPEOFRXPDU,                                                      2U,                                                        1U, J1939TP_NO_RXPDURXSDURXSDUTABLEINDENDIDXOFRXPDU, J1939TP_NO_RXPDURXSDURXSDUTABLEINDSTARTIDXOFRXPDU, J1939TP_NO_RXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFRXPDU, J1939TP_NO_RXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFRXPDU },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oBackbone1J1939_005f683d_Rx] */
  { /*     3 */ J1939TP_PDU2_PDUFORMATOFRXPDU, J1939TP_DIRECT_PDUTYPEOFRXPDU,                                                      3U,                                                        2U,                                              1U,                                                0U, J1939TP_NO_RXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFRXPDU, J1939TP_NO_RXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFRXPDU }   /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDirect_0FE6B_Tp_oBackbone1J1939_71559532_Rx] */
};
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
CONST(J1939Tp_RxPduRxChannelType, J1939TP_CONST) J1939Tp_RxPduRxChannel[3] = {
    /* Index    RxChannelRxChannelIdx        Referable Keys */
  { /*     0 */                    0U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oBackbone1J1939_b357cc8b_Rx] */
  { /*     1 */                    0U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oBackbone1J1939_005f683d_Rx] */
  { /*     2 */                    0U }   /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDirect_0FE6B_Tp_oBackbone1J1939_71559532_Rx] */
};
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
CONST(J1939Tp_RxPduRxChannelRxChannelTableIndType, J1939TP_CONST) J1939Tp_RxPduRxChannelRxChannelTableInd[3] = {
  /* Index    RxPduRxChannelRxChannelTableInd      Referable Keys */
  /*     0 */                              0U,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oBackbone1J1939_b357cc8b_Rx] */
  /*     1 */                              1U,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oBackbone1J1939_005f683d_Rx] */
  /*     2 */                              2U   /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDirect_0FE6B_Tp_oBackbone1J1939_71559532_Rx] */
};
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
CONST(J1939Tp_RxPduRxSduType, J1939TP_CONST) J1939Tp_RxPduRxSdu[1] = {
    /* Index    RxSduRxSduIdx        Referable Keys */
  { /*     0 */            0U }   /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDirect_0FE6B_Tp_oBackbone1J1939_71559532_Rx] */
};
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
CONST(J1939Tp_RxPduRxSduRxSduTableIndType, J1939TP_CONST) J1939Tp_RxPduRxSduRxSduTableInd[1] = {
  /* Index    RxPduRxSduRxSduTableInd      Referable Keys */
  /*     0 */                      0U   /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDirect_0FE6B_Tp_oBackbone1J1939_71559532_Rx] */
};
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
CONST(J1939Tp_RxPduTxChannelType, J1939TP_CONST) J1939Tp_RxPduTxChannel[2] = {
    /* Index    TxChannelTxChannelIdx        Referable Keys */
  { /*     0 */                    0U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/FcNPdu_Backbone1J1939_dba64907_Rx] */
  { /*     1 */                    1U }   /* [/ActiveEcuC/EcuC/EcucPduCollection/FcNPdu_Backbone1J1939_dba64907_Rx] */
};
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
CONST(J1939Tp_RxPduTxChannelTxChannelTableIndType, J1939TP_CONST) J1939Tp_RxPduTxChannelTxChannelTableInd[2] = {
  /* Index    RxPduTxChannelTxChannelTableInd      Referable Keys */
  /*     0 */                              0U,  /* [/ActiveEcuC/EcuC/EcucPduCollection/FcNPdu_Backbone1J1939_dba64907_Rx] */
  /*     1 */                              1U   /* [/ActiveEcuC/EcuC/EcucPduCollection/FcNPdu_Backbone1J1939_dba64907_Rx] */
};
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
CONST(J1939Tp_RxSduType, J1939TP_CONST) J1939Tp_RxSdu[2] = {
    /* Index    PGN           IsVariable  MetaDataLength  PduLength  RxChannelChannelIdx  RxSduStateIdx  SduId                                          Referable Keys */
  { /*     0 */ 0x0000FE6BUL,       TRUE,             2U,      40UL,                  0U,            0U, PduRConf_PduRSrcPdu_PduRSrcPdu_408ae78e },  /* [/ActiveEcuC/EcuC/EcucPduCollection/DI_X_TACHO_oBackbone1J1939_6121ec8b_Rx] */
  { /*     1 */ 0x0000FFC3UL,      FALSE,             2U,      21UL,                  0U,            1U, PduRConf_PduRSrcPdu_PduRSrcPdu_9d957b7c }   /* [/ActiveEcuC/EcuC/EcucPduCollection/PropTCO2_X_TACHO_oBackbone1J1939_4169b979_Rx] */
};
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
CONST(J1939Tp_TxChannelType, J1939TP_CONST) J1939Tp_TxChannel[2] = {
    /* Index    ComMChannel  TxChannelTxNSduTxNSduTableIndEndIdx  TxChannelTxNSduTxNSduTableIndStartIdx  TxDa   TxMaxPacketsPerBlock  TxPduTxCmNPduIdx  TxPduTxDtNPduIdx  TxProtocolType                                     TxSa         Referable Keys */
  { /*     0 */          4U,                                  1U,                                    0U, 0xFEU,                 255U,               0U,               1U, J1939TP_PROTOCOL_UNUSED_TXPROTOCOLTYPEOFTXCHANNEL, 0x31U },  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/FMSNet_J1939_5ab570f8] */
  { /*     1 */          4U,                                  2U,                                    1U, 0xFEU,                 255U,               0U,               1U, J1939TP_PROTOCOL_UNUSED_TXPROTOCOLTYPEOFTXCHANNEL, 0x31U }   /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/FMSNet_J1939_70bdad51] */
};
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
CONST(J1939Tp_TxChannelTxNSduType, J1939TP_CONST) J1939Tp_TxChannelTxNSdu[2] = {
    /* Index    TxSduTxNSduIdx        Referable Keys */
  { /*     0 */             0U },  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/FMSNet_J1939_5ab570f8] */
  { /*     1 */             1U }   /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/FMSNet_J1939_70bdad51] */
};
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
CONST(J1939Tp_TxChannelTxNSduTxNSduTableIndType, J1939TP_CONST) J1939Tp_TxChannelTxNSduTxNSduTableInd[2] = {
  /* Index    TxChannelTxNSduTxNSduTableInd      Referable Keys */
  /*     0 */                            0U,  /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/FMSNet_J1939_5ab570f8] */
  /*     1 */                            1U   /* [/ActiveEcuC/J1939Tp/J1939TpConfiguration/FMSNet_J1939_70bdad51] */
};
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
CONST(J1939Tp_TxPduType, J1939TP_CONST) J1939Tp_TxPdu[4] = {
    /* Index    PduId                                                          PduType                        TxPduRxChannelRxChannelTableIndEndIdx                    TxPduRxChannelRxChannelTableIndStartIdx                    TxPduStateIdx  TxPduTxChannelTxChannelTableIndEndIdx                    TxPduTxChannelTxChannelTableIndStartIdx                          Referable Keys */
  { /*     0 */           CanIfConf_CanIfTxPduCfg_TPCM_Tp_oFMSNet_55e2f930_Tx,   J1939TP_TPCM_PDUTYPEOFTXPDU, J1939TP_NO_TXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFTXPDU, J1939TP_NO_TXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFTXPDU,            0U,                                                      2U,                                                        0U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oFMSNet_527e1bbd_Tx] */
  { /*     1 */           CanIfConf_CanIfTxPduCfg_TPDT_Tp_oFMSNet_3018618a_Tx,   J1939TP_TPDT_PDUTYPEOFTXPDU, J1939TP_NO_TXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFTXPDU, J1939TP_NO_TXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFTXPDU,            1U,                                                      4U,                                                        2U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oFMSNet_b75dd625_Tx] */
  { /*     2 */        CanIfConf_CanIfTxPduCfg_FcNPdu_Backbone1J1939_dba64907,   J1939TP_TPCM_PDUTYPEOFTXPDU,                                                      1U,                                                        0U,            2U, J1939TP_NO_TXPDUTXCHANNELTXCHANNELTABLEINDENDIDXOFTXPDU, J1939TP_NO_TXPDUTXCHANNELTXCHANNELTABLEINDSTARTIDXOFTXPDU },  /* [/ActiveEcuC/EcuC/EcucPduCollection/FcNPdu_Backbone1J1939_dba64907_Tx] */
  { /*     3 */ CanIfConf_CanIfTxPduCfg_TPDirect_0FE6B_Tp_oFMSNet_5c137171_Tx, J1939TP_DIRECT_PDUTYPEOFTXPDU, J1939TP_NO_TXPDURXCHANNELRXCHANNELTABLEINDENDIDXOFTXPDU, J1939TP_NO_TXPDURXCHANNELRXCHANNELTABLEINDSTARTIDXOFTXPDU,            3U,                                                      5U,                                                        4U }   /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDirect_0FE6B_Tp_oFMSNet_0aa5f2bd_Tx] */
};
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
CONST(J1939Tp_TxPduRxChannelType, J1939TP_CONST) J1939Tp_TxPduRxChannel[1] = {
    /* Index    RxChannelRxChannelIdx        Referable Keys */
  { /*     0 */                    0U }   /* [/ActiveEcuC/EcuC/EcucPduCollection/FcNPdu_Backbone1J1939_dba64907_Tx] */
};
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
CONST(J1939Tp_TxPduRxChannelRxChannelTableIndType, J1939TP_CONST) J1939Tp_TxPduRxChannelRxChannelTableInd[1] = {
  /* Index    TxPduRxChannelRxChannelTableInd      Referable Keys */
  /*     0 */                              0U   /* [/ActiveEcuC/EcuC/EcucPduCollection/FcNPdu_Backbone1J1939_dba64907_Tx] */
};
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
CONST(J1939Tp_TxPduTxChannelType, J1939TP_CONST) J1939Tp_TxPduTxChannel[5] = {
    /* Index    TxChannelTxChannelIdx        Referable Keys */
  { /*     0 */                    0U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oFMSNet_527e1bbd_Tx] */
  { /*     1 */                    1U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oFMSNet_527e1bbd_Tx] */
  { /*     2 */                    0U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oFMSNet_b75dd625_Tx] */
  { /*     3 */                    1U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oFMSNet_b75dd625_Tx] */
  { /*     4 */                    1U }   /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDirect_0FE6B_Tp_oFMSNet_0aa5f2bd_Tx] */
};
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
CONST(J1939Tp_TxPduTxChannelTxChannelTableIndType, J1939TP_CONST) J1939Tp_TxPduTxChannelTxChannelTableInd[5] = {
  /* Index    TxPduTxChannelTxChannelTableInd      Referable Keys */
  /*     0 */                              0U,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oFMSNet_527e1bbd_Tx] */
  /*     1 */                              1U,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oFMSNet_527e1bbd_Tx] */
  /*     2 */                              2U,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oFMSNet_b75dd625_Tx] */
  /*     3 */                              3U,  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oFMSNet_b75dd625_Tx] */
  /*     4 */                              4U   /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDirect_0FE6B_Tp_oFMSNet_0aa5f2bd_Tx] */
};
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
CONST(J1939Tp_TxSduType, J1939TP_CONST) J1939Tp_TxSdu[2] = {
    /* Index    PGN           IsVariable  MetaDataLength  PduFormat                      PduLength  SduId                                                  TxChannelChannelIdx  TxPduDirectNPduIdx                    TxSduStateIdx        Referable Keys */
  { /*     0 */ 0x0000FEECUL,      FALSE,             2U, J1939TP_PDU2_PDUFORMATOFTXSDU,      17UL, PduRConf_PduRDestPdu_VI_X_CIOMFMS_oFMSNet_55f8530d_Tx,                  0U, J1939TP_NO_TXPDUDIRECTNPDUIDXOFTXSDU,            0U },  /* [/ActiveEcuC/EcuC/EcucPduCollection/VI_X_CIOMFMS_oFMSNet_55f8530d_Tx] */
  { /*     1 */ 0x0000FE6BUL,       TRUE,             2U, J1939TP_PDU2_PDUFORMATOFTXSDU,      40UL, PduRConf_PduRDestPdu_DI_X_CIOMFMS_oFMSNet_45299e3a_Tx,                  1U,                                   3U,            1U }   /* [/ActiveEcuC/EcuC/EcucPduCollection/DI_X_CIOMFMS_oFMSNet_45299e3a_Tx] */
};
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
VAR(J1939Tp_RxSduStateUType, J1939TP_VAR_NOINIT) J1939Tp_RxSduState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/DI_X_TACHO_oBackbone1J1939_6121ec8b_Rx] */
  /*     1 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/PropTCO2_X_TACHO_oBackbone1J1939_4169b979_Rx] */

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
VAR(J1939Tp_TxPduStateUType, J1939TP_VAR_NOINIT) J1939Tp_TxPduState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPCM_Tp_oFMSNet_527e1bbd_Tx] */
  /*     1 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDT_Tp_oFMSNet_b75dd625_Tx] */
  /*     2 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/FcNPdu_Backbone1J1939_dba64907_Tx] */
  /*     3 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/TPDirect_0FE6B_Tp_oFMSNet_0aa5f2bd_Tx] */

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
VAR(J1939Tp_TxSduStateUType, J1939TP_VAR_NOINIT) J1939Tp_TxSduState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/VI_X_CIOMFMS_oFMSNet_55f8530d_Tx] */
  /*     1 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/DI_X_CIOMFMS_oFMSNet_45299e3a_Tx] */

#define J1939TP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
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
  END OF FILE: J1939Tp_Cfg.c
**********************************************************************************************************************/

