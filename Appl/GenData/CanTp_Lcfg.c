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
 *              File: CanTp_Lcfg.c
 *   Generation Time: 2018-11-22 03:14:17
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

#define CANTP_LCFG_SOURCE

/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* -----------------------------------------------------------------------------
    &&&~ Include files
 ----------------------------------------------------------------------------- */

#include "CanTp_Lcfg.h"
#include "CanIf.h"
#include "PduR_CanTp.h"
/* -----------------------------------------------------------------------------
    &&&~ Data definitions
 ----------------------------------------------------------------------------- */



/**********************************************************************************************************************
 *  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanTp_RxPduMap
**********************************************************************************************************************/
/** 
  \var    CanTp_RxPduMap
  \details
  Element                Description
  RxSduCfgIndEndIdx      the end index of the 0:n relation pointing to CanTp_RxSduCfgInd
  RxSduCfgIndStartIdx    the start index of the 0:n relation pointing to CanTp_RxSduCfgInd
  TxSduCfgIndEndIdx      the end index of the 0:n relation pointing to CanTp_TxSduCfgInd
  TxSduCfgIndStartIdx    the start index of the 0:n relation pointing to CanTp_TxSduCfgInd
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanTp_RxPduMapType, CANTP_CONST) CanTp_RxPduMap[91] = {
    /* Index    RxSduCfgIndEndIdx                     RxSduCfgIndStartIdx                     TxSduCfgIndEndIdx                     TxSduCfgIndStartIdx                    */
  { /*     0 */                                   1U,                                     0U,                                   1U,                                     0U },
  { /*     1 */                                   2U,                                     1U,                                   2U,                                     1U },
  { /*     2 */                                   3U,                                     2U,                                   3U,                                     2U },
  { /*     3 */                                   4U,                                     3U,                                   4U,                                     3U },
  { /*     4 */                                   5U,                                     4U,                                   5U,                                     4U },
  { /*     5 */                                   6U,                                     5U,                                   6U,                                     5U },
  { /*     6 */                                   7U,                                     6U,                                   7U,                                     6U },
  { /*     7 */                                   8U,                                     7U,                                   8U,                                     7U },
  { /*     8 */                                   9U,                                     8U,                                   9U,                                     8U },
  { /*     9 */                                  10U,                                     9U,                                  10U,                                     9U },
  { /*    10 */                                  11U,                                    10U,                                  11U,                                    10U },
  { /*    11 */                                  12U,                                    11U,                                  12U,                                    11U },
  { /*    12 */                                  13U,                                    12U,                                  13U,                                    12U },
  { /*    13 */                                  14U,                                    13U,                                  14U,                                    13U },
  { /*    14 */                                  15U,                                    14U,                                  15U,                                    14U },
  { /*    15 */                                  16U,                                    15U,                                  16U,                                    15U },
  { /*    16 */                                  17U,                                    16U,                                  17U,                                    16U },
  { /*    17 */                                  18U,                                    17U,                                  18U,                                    17U },
  { /*    18 */                                  19U,                                    18U,                                  19U,                                    18U },
  { /*    19 */                                  20U,                                    19U,                                  20U,                                    19U },
  { /*    20 */                                  21U,                                    20U,                                  21U,                                    20U },
  { /*    21 */                                  22U,                                    21U,                                  22U,                                    21U },
  { /*    22 */                                  23U,                                    22U,                                  23U,                                    22U },
  { /*    23 */                                  24U,                                    23U,                                  24U,                                    23U },
  { /*    24 */                                  25U,                                    24U,                                  25U,                                    24U },
  { /*    25 */                                  26U,                                    25U,                                  26U,                                    25U },
  { /*    26 */                                  27U,                                    26U,                                  27U,                                    26U },
  { /*    27 */                                  28U,                                    27U,                                  28U,                                    27U },
  { /*    28 */                                  29U,                                    28U,                                  29U,                                    28U },
  { /*    29 */                                  30U,                                    29U,                                  30U,                                    29U },
  { /*    30 */                                  31U,                                    30U,                                  31U,                                    30U },
  { /*    31 */                                  32U,                                    31U,                                  32U,                                    31U },
  { /*    32 */                                  33U,                                    32U,                                  33U,                                    32U },
  { /*    33 */                                  34U,                                    33U,                                  34U,                                    33U },
  { /*    34 */                                  35U,                                    34U,                                  35U,                                    34U },
  { /*    35 */                                  36U,                                    35U,                                  36U,                                    35U },
  { /*    36 */                                  37U,                                    36U,                                  37U,                                    36U },
  { /*    37 */                                  38U,                                    37U,                                  38U,                                    37U },
  { /*    38 */                                  39U,                                    38U,                                  39U,                                    38U },
  { /*    39 */                                  40U,                                    39U,                                  40U,                                    39U },
  { /*    40 */                                  41U,                                    40U,                                  41U,                                    40U },
  { /*    41 */                                  42U,                                    41U,                                  42U,                                    41U },
  { /*    42 */                                  43U,                                    42U,                                  43U,                                    42U },
  { /*    43 */                                  44U,                                    43U,                                  44U,                                    43U },
  { /*    44 */                                  45U,                                    44U,                                  45U,                                    44U },
  { /*    45 */                                  46U,                                    45U,                                  46U,                                    45U },
  { /*    46 */                                  47U,                                    46U,                                  47U,                                    46U },
  { /*    47 */                                  48U,                                    47U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    48 */                                  49U,                                    48U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    49 */                                  50U,                                    49U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
    /* Index    RxSduCfgIndEndIdx                     RxSduCfgIndStartIdx                     TxSduCfgIndEndIdx                     TxSduCfgIndStartIdx                    */
  { /*    50 */                                  51U,                                    50U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    51 */                                  52U,                                    51U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    52 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  48U,                                    47U },
  { /*    53 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  49U,                                    48U },
  { /*    54 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  50U,                                    49U },
  { /*    55 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  51U,                                    50U },
  { /*    56 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  52U,                                    51U },
  { /*    57 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  53U,                                    52U },
  { /*    58 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  54U,                                    53U },
  { /*    59 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  55U,                                    54U },
  { /*    60 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  56U,                                    55U },
  { /*    61 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  57U,                                    56U },
  { /*    62 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  58U,                                    57U },
  { /*    63 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  59U,                                    58U },
  { /*    64 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  60U,                                    59U },
  { /*    65 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  61U,                                    60U },
  { /*    66 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  62U,                                    61U },
  { /*    67 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  63U,                                    62U },
  { /*    68 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  64U,                                    63U },
  { /*    69 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  65U,                                    64U },
  { /*    70 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  66U,                                    65U },
  { /*    71 */ CANTP_NO_RXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_RXSDUCFGINDSTARTIDXOFRXPDUMAP,                                  67U,                                    66U },
  { /*    72 */                                  53U,                                    52U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    73 */                                  54U,                                    53U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    74 */                                  55U,                                    54U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    75 */                                  56U,                                    55U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    76 */                                  57U,                                    56U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    77 */                                  58U,                                    57U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    78 */                                  59U,                                    58U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    79 */                                  60U,                                    59U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    80 */                                  61U,                                    60U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    81 */                                  62U,                                    61U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    82 */                                  63U,                                    62U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    83 */                                  64U,                                    63U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    84 */                                  65U,                                    64U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    85 */                                  66U,                                    65U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    86 */                                  67U,                                    66U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    87 */                                  68U,                                    67U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    88 */                                  69U,                                    68U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    89 */                                  70U,                                    69U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*    90 */                                  71U,                                    70U, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP }
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxSduCfg
**********************************************************************************************************************/
/** 
  \var    CanTp_RxSduCfg
  \details
  Element                     Description
  CanIfTxFcPduId          
  PduRRxSduId             
  RxPduId                 
  TxFcPduConfirmationPduId
  BlockSize               
  NAr                     
  NCr                     
  RxTaType                
  STmin                   
  TxSduCfgIdx                 the index of the 0:1 relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanTp_RxSduCfgType, CANTP_CONST) CanTp_RxSduCfg[71] = {
    /* Index    CanIfTxFcPduId                                                                        PduRRxSduId                              RxPduId                                     TxFcPduConfirmationPduId                        BlockSize  NAr  NCr   RxTaType                             STmin  TxSduCfgIdx                           Comment                            Referable Keys */
  { /*     0 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_53_F3_Cab_Tp_oCabSubnet_e9059d48_Tx     , PduRConf_PduRSrcPdu_PduRSrcPdu_1ac6f203, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_74e116b6, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_74e116b6,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                             1U },  /* [CanTpRxNSdu_0b4e5ed3] */  /* [CanTpRxNSdu_0b4e5ed3, 17] */
  { /*     1 */ CanIfConf_CanIfTxPduCfg_TECU_BB2_05S_FCM_Tp_oBackbone2_69d48940_Tx                  , PduRConf_PduRSrcPdu_PduRSrcPdu_0aeda82a, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_b76b68d2, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_b76b68d2,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_0bfbcf81] */  /* [CanTpRxNSdu_0bfbcf81, 84] */
  { /*     2 */ CanIfConf_CanIfTxPduCfg_PDM_Sec_03S_FCM_Tp_oSecuritySubnet_2750bd9e_Tx              , PduRConf_PduRSrcPdu_PduRSrcPdu_c4655c6f, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_421ce650, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_421ce650,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_0c44e225] */  /* [CanTpRxNSdu_0c44e225, 82] */
  { /*     3 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_98_F4_Cab_Tp_oCabSubnet_2e8c3543_Tx       , PduRConf_PduRSrcPdu_PduRSrcPdu_8c488735, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_65cbdaf5, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_65cbdaf5,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                             4U },  /* [CanTpRxNSdu_1a4aae9e] */  /* [CanTpRxNSdu_1a4aae9e, 25] */
  { /*     4 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_A1_BB2_Tp_oBackbone2_08540fc1_Tx    , PduRConf_PduRSrcPdu_PduRSrcPdu_86e04d33, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_05c66f0e, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_05c66f0e,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                             5U },  /* [CanTpRxNSdu_1c70aeed] */  /* [CanTpRxNSdu_1c70aeed, 5] */
  { /*     5 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_A2_F3_Cab_Tp_oCabSubnet_fcbc8d7d_Tx     , PduRConf_PduRSrcPdu_PduRSrcPdu_bbc023c9, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_e2f34c3e, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_e2f34c3e,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                             9U },  /* [CanTpRxNSdu_2ed2671b] */  /* [CanTpRxNSdu_2ed2671b, 21] */
  { /*     6 */ CANTP_INVALID_HDL                                                                   , PduRConf_PduRSrcPdu_PduRSrcPdu_f1553bf5, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_21f32ee4, CANTP_INVALID_HDL                             ,        8U, 11U,  11U, CANTP_FUNCTIONAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_3cc05d5a] */  /* [CanTpRxNSdu_3cc05d5a, 86] */
  { /*     7 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_98_BB2_Tp_oBackbone2_73235a33_Tx    , PduRConf_PduRSrcPdu_PduRSrcPdu_bfda77cf, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_668e4c4b, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_668e4c4b,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            11U },  /* [CanTpRxNSdu_6a041a59] */  /* [CanTpRxNSdu_6a041a59, 3] */
  { /*     8 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F1_53_BB2_Tp_oBackbone2_be0c70d1_Tx         , PduRConf_PduRSrcPdu_PduRSrcPdu_da0a8dca, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_28810efa, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_28810efa,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            12U },  /* [CanTpRxNSdu_6b50c215] */  /* [CanTpRxNSdu_6b50c215, 32] */
  { /*     9 */ CanIfConf_CanIfTxPduCfg_Alarm_Sec_06S_FCM_Tp_oSecuritySubnet_a3ee35ea_Tx            , PduRConf_PduRSrcPdu_PduRSrcPdu_eb982057, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_fc653524, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_fc653524,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_6c38d736] */  /* [CanTpRxNSdu_6c38d736, 48] */
  { /*    10 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_53_BB2_Tp_oBackbone2_930c5799_Tx    , PduRConf_PduRSrcPdu_PduRSrcPdu_c0680d6c, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_387809ee, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_387809ee,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            13U },  /* [CanTpRxNSdu_6e537029] */  /* [CanTpRxNSdu_6e537029, 2] */
  { /*    11 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_C0_F4_Sec_Tp_oSecuritySubnet_0ba24808_Tx  , PduRConf_PduRSrcPdu_PduRSrcPdu_8259d96a, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_7ebb8e19, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_7ebb8e19,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            14U },  /* [CanTpRxNSdu_6eda9336] */  /* [CanTpRxNSdu_6eda9336, 29] */
  { /*    12 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_26_BB2_Tp_oBackbone2_aba3af99_Tx    , PduRConf_PduRSrcPdu_PduRSrcPdu_304f257a, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_dcf96d37, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_dcf96d37,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            15U },  /* [CanTpRxNSdu_6f288d0c] */  /* [CanTpRxNSdu_6f288d0c, 0] */
  { /*    13 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_A2_F2_Cab_Tp_oCabSubnet_6d74e481_Tx          , PduRConf_PduRSrcPdu_PduRSrcPdu_d9d30309, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_e80a3615, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_e80a3615,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            16U },  /* [CanTpRxNSdu_9bc05ec2] */  /* [CanTpRxNSdu_9bc05ec2, 45] */
  { /*    14 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_40_BB2_Tp_oBackbone2_bd4d3e52_Tx         , PduRConf_PduRSrcPdu_PduRSrcPdu_d62010ae, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_47b3cfa9, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_47b3cfa9,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U,                            17U },  /* [CanTpRxNSdu_9fd60b61] */  /* [CanTpRxNSdu_9fd60b61, 31] */
  { /*    15 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_A0_F2_Sec_Tp_oSecuritySubnet_cb87d97b_Tx     , PduRConf_PduRSrcPdu_PduRSrcPdu_b18fc6c3, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c2ef7286, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_c2ef7286,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            20U },  /* [CanTpRxNSdu_05d82786] */  /* [CanTpRxNSdu_05d82786, 43] */
  { /*    16 */ CanIfConf_CanIfTxPduCfg_BBM_BB2_03S_CIOM_FCM_Tp_oBackbone2_29c4ac8e_Tx              , PduRConf_PduRSrcPdu_PduRSrcPdu_bd0d068c, CanTpConf_CanTpRxNPdu_CanTpRxNPdu         , CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu         ,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_08e2bc01] */  /* [CanTpRxNSdu_08e2bc01, 50] */
  { /*    17 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_40_BB2_Tp_oBackbone2_7b130fa6_Tx    , PduRConf_PduRSrcPdu_PduRSrcPdu_8771577a, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_78cc4330, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_78cc4330,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U,                            21U },  /* [CanTpRxNSdu_11b4d294] */  /* [CanTpRxNSdu_11b4d294, 1] */
  { /*    18 */ CanIfConf_CanIfTxPduCfg_HMIIOM_BB2_36S_FCM_Tp_oBackbone2_bf84bd48_Tx                , PduRConf_PduRSrcPdu_PduRSrcPdu_270fccd3, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_d377e3b9, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_d377e3b9,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_14edf183] */  /* [CanTpRxNSdu_14edf183, 80] */
  { /*    19 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_A0_BB2_Tp_oBackbone2_7d9615e1_Tx      , PduRConf_PduRSrcPdu_PduRSrcPdu_d91d7573, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_144dc068, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_144dc068,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            22U },  /* [CanTpRxNSdu_30eb7850] */  /* [CanTpRxNSdu_30eb7850, 12] */
  { /*    20 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_53_BB2_Tp_oBackbone2_ef1139d4_Tx         , PduRConf_PduRSrcPdu_PduRSrcPdu_266542d7, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c70ab37c, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_c70ab37c,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            23U },  /* [CanTpRxNSdu_33cb3e9e] */  /* [CanTpRxNSdu_33cb3e9e, 33] */
  { /*    21 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_A2_BB2_Tp_oBackbone2_d6b4927e_Tx    , PduRConf_PduRSrcPdu_PduRSrcPdu_ac4babc0, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_e0f38cc0, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_e0f38cc0,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            25U },  /* [CanTpRxNSdu_39f210d3] */  /* [CanTpRxNSdu_39f210d3, 6] */
  { /*    22 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_C0_BB2_Tp_oBackbone2_f7aad0d7_Tx      , PduRConf_PduRSrcPdu_PduRSrcPdu_bd1ce89a, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_5cca3067, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_5cca3067,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            26U },  /* [CanTpRxNSdu_40c57205] */  /* [CanTpRxNSdu_40c57205, 15] */
  { /*    23 */ CanIfConf_CanIfTxPduCfg_Alarm_Sec_03S_FCM_Tp_oSecuritySubnet_48e47132_Tx            , PduRConf_PduRSrcPdu_PduRSrcPdu_304197c1, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_0630f603, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_0630f603,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_53d85cb5] */  /* [CanTpRxNSdu_53d85cb5, 47] */
  { /*    24 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_C0_F3_Sec_Tp_oSecuritySubnet_3aaf1649_Tx, PduRConf_PduRSrcPdu_PduRSrcPdu_b4b812c0, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_93bdf061, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_93bdf061,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            27U },  /* [CanTpRxNSdu_66ceed3b] */  /* [CanTpRxNSdu_66ceed3b, 22] */
  { /*    25 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_53_F1_Cab_Tp_oCabSubnet_682570ce_Tx          , PduRConf_PduRSrcPdu_PduRSrcPdu_5cfa406e, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_4564c8c7, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_4564c8c7,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            28U },  /* [CanTpRxNSdu_68a1d221] */  /* [CanTpRxNSdu_68a1d221, 39] */
  { /*    26 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_A2_F4_Cab_Tp_oCabSubnet_fc611706_Tx       , PduRConf_PduRSrcPdu_PduRSrcPdu_9e5d6760, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_95c73622, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_95c73622,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            30U },  /* [CanTpRxNSdu_90b4ee1f] */  /* [CanTpRxNSdu_90b4ee1f, 28] */
  { /*    27 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_53_F2_Cab_Tp_oCabSubnet_9abe6f67_Tx          , PduRConf_PduRSrcPdu_PduRSrcPdu_ccea7767, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_361163ac, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_361163ac,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            31U },  /* [CanTpRxNSdu_97d435bf] */  /* [CanTpRxNSdu_97d435bf, 41] */
  { /*    28 */ CanIfConf_CanIfTxPduCfg_Alarm_Sec_07S_FCM_Tp_oSecuritySubnet_94ec21d2_Tx            , PduRConf_PduRSrcPdu_PduRSrcPdu_26a1cbb9, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_f5215d2b, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_f5215d2b,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_135f1a6f] */  /* [CanTpRxNSdu_135f1a6f, 49] */
  { /*    29 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_A0_BB2_Tp_oBackbone2_d77a4b8a_Tx         , PduRConf_PduRSrcPdu_PduRSrcPdu_1b947dce, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_4c679115, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_4c679115,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            34U },  /* [CanTpRxNSdu_155b67c1] */  /* [CanTpRxNSdu_155b67c1, 35] */
  { /*    30 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_A1_F2_Sec_Tp_oSecuritySubnet_5d2e792a_Tx     , PduRConf_PduRSrcPdu_PduRSrcPdu_6ea67099, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_3610aff9, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_3610aff9,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            35U },  /* [CanTpRxNSdu_160b460d] */  /* [CanTpRxNSdu_160b460d, 44] */
  { /*    31 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_53_BB2_Tp_oBackbone2_280e15fa_Tx      , PduRConf_PduRSrcPdu_PduRSrcPdu_a40032de, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_b15d7d27, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_b15d7d27,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            36U },  /* [CanTpRxNSdu_163b0bdd] */  /* [CanTpRxNSdu_163b0bdd, 10] */
  { /*    32 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_C0_BB2_Tp_oBackbone2_9924f26b_Tx    , PduRConf_PduRSrcPdu_PduRSrcPdu_c050dec8, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_877a9cec, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_877a9cec,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            39U },  /* [CanTpRxNSdu_602b7b73] */  /* [CanTpRxNSdu_602b7b73, 7] */
  { /*    33 */ CanIfConf_CanIfTxPduCfg_VMCU_BB2_32S_FCM_Tp_oBackbone2_8a7e4a00_Tx                  , PduRConf_PduRSrcPdu_PduRSrcPdu_8c4f8f58, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_5a70888a, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_5a70888a,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_835e9534] */  /* [CanTpRxNSdu_835e9534, 88] */
  { /*    34 */ CanIfConf_CanIfTxPduCfg_CCM_Cab_03P_FCM_Tp_oCabSubnet_af75b436_Tx                   , PduRConf_PduRSrcPdu_PduRSrcPdu_8a32f8f6, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_2b3a4000, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_2b3a4000,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_871bc7b1] */  /* [CanTpRxNSdu_871bc7b1, 51] */
  { /*    35 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_A0_F4_Sec_Tp_oSecuritySubnet_8adef0bc_Tx  , PduRConf_PduRSrcPdu_PduRSrcPdu_064dc9ab, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_0229ec59, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_0229ec59,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            40U },  /* [CanTpRxNSdu_917ba177] */  /* [CanTpRxNSdu_917ba177, 26] */
  { /*    36 */ CanIfConf_CanIfTxPduCfg_VMCU_BB2_34S_FCM_Tp_oBackbone2_c87b48e1_Tx                  , PduRConf_PduRSrcPdu_PduRSrcPdu_656dbd2a, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_7f7d9999, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_7f7d9999,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_948ebe8b] */  /* [CanTpRxNSdu_948ebe8b, 89] */
  { /*    37 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_26_BB2_Tp_oBackbone2_5b036461_Tx      , PduRConf_PduRSrcPdu_PduRSrcPdu_01528206, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c91b6bff, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_c91b6bff,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            41U },  /* [CanTpRxNSdu_2541fba3] */  /* [CanTpRxNSdu_2541fba3, 8] */
  { /*    38 */ CanIfConf_CanIfTxPduCfg_HMIIOM_BB2_20S_FCM_Tp_oBackbone2_2def59ba_Tx                , PduRConf_PduRSrcPdu_PduRSrcPdu_fed5ac9b, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_57a7378c, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_57a7378c,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_2626eddc] */  /* [CanTpRxNSdu_2626eddc, 78] */
  { /*    39 */ CanIfConf_CanIfTxPduCfg_DDM_Sec_04S_FCM_Tp_oSecuritySubnet_eddd4cee_Tx              , PduRConf_PduRSrcPdu_PduRSrcPdu_06bdd5c2, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c0beb877, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_c0beb877,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_7107e017] */  /* [CanTpRxNSdu_7107e017, 73] */
  { /*    40 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_98_BB2_Tp_oBackbone2_0c1730ea_Tx         , PduRConf_PduRSrcPdu_PduRSrcPdu_246f1e3b, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_0cd86411, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_0cd86411,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            42U },  /* [CanTpRxNSdu_8729f19d] */  /* [CanTpRxNSdu_8729f19d, 34] */
  { /*    41 */ CanIfConf_CanIfTxPduCfg_DDM_Sec_05S_FCM_Tp_oSecuritySubnet_d14dc345_Tx              , PduRConf_PduRSrcPdu_PduRSrcPdu_0948f4eb, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_51e36fbf, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_51e36fbf,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_598434b3] */  /* [CanTpRxNSdu_598434b3, 74] */
  { /*    42 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_A1_F4_Sec_Tp_oSecuritySubnet_eb89cc56_Tx  , PduRConf_PduRSrcPdu_PduRSrcPdu_df9a30f3, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_28dbd0e5, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_28dbd0e5,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            45U },  /* [CanTpRxNSdu_2609472a] */  /* [CanTpRxNSdu_2609472a, 27] */
  { /*    43 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_26_F3_Cab_Tp_oCabSubnet_2e1f9ada_Tx     , PduRConf_PduRSrcPdu_PduRSrcPdu_b9d033d4, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_27a9b571, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_27a9b571,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            46U },  /* [CanTpRxNSdu_8388957a] */  /* [CanTpRxNSdu_8388957a, 16] */
  { /*    44 */ CanIfConf_CanIfTxPduCfg_HMIIOM_BB2_19P_CIOM_FCM_Tp_oBackbone2_1a616940_Tx           , PduRConf_PduRSrcPdu_PduRSrcPdu_75cfe088, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_6c59aa4f, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_6c59aa4f,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_9872323c] */  /* [CanTpRxNSdu_9872323c, 77] */
  { /*    45 */ CanIfConf_CanIfTxPduCfg_TECU_BB2_06S_FCM_Tp_oBackbone2_a56e8b10_Tx                  , PduRConf_PduRSrcPdu_PduRSrcPdu_187ffacf, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_349983d6, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_349983d6,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_33326932] */  /* [CanTpRxNSdu_33326932, 85] */
  { /*    46 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_26_F4_Cab_Tp_oCabSubnet_b42402a4_Tx       , PduRConf_PduRSrcPdu_PduRSrcPdu_25a59123, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_70297ecd, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_70297ecd,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            48U },  /* [CanTpRxNSdu_93056798] */  /* [CanTpRxNSdu_93056798, 23] */
  { /*    47 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_26_F2_Cab_Tp_oCabSubnet_e2a6386f_Tx          , PduRConf_PduRSrcPdu_PduRSrcPdu_62ae1653, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c7e1ce5c, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_c7e1ce5c,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            49U },  /* [CanTpRxNSdu_a23f8213] */  /* [CanTpRxNSdu_a23f8213, 40] */
  { /*    48 */ CanIfConf_CanIfTxPduCfg_DDM_Sec_03S_FCM_Tp_oSecuritySubnet_5a2ee2bf_Tx              , PduRConf_PduRSrcPdu_PduRSrcPdu_fdae10f0, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_9778b9b1, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_9778b9b1,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_a9722d89] */  /* [CanTpRxNSdu_a9722d89, 72] */
  { /*    49 */ CanIfConf_CanIfTxPduCfg_HMIIOM_BB2_35S_FCM_Tp_oBackbone2_e32a38c7_Tx                , PduRConf_PduRSrcPdu_PduRSrcPdu_99763ffd, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_71cb145a, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_71cb145a,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_add9d1da] */  /* [CanTpRxNSdu_add9d1da, 79] */
    /* Index    CanIfTxFcPduId                                                                        PduRRxSduId                              RxPduId                                     TxFcPduConfirmationPduId                        BlockSize  NAr  NCr   RxTaType                             STmin  TxSduCfgIdx                           Comment                            Referable Keys */
  { /*    50 */ CanIfConf_CanIfTxPduCfg_VMCU_BB2_31S_FCM_Tp_oBackbone2_46c44850_Tx                  , PduRConf_PduRSrcPdu_PduRSrcPdu_962aaefb, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_19b1d643, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_19b1d643,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_b7bc20cf] */  /* [CanTpRxNSdu_b7bc20cf, 87] */
  { /*    51 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_C0_BB2_Tp_oBackbone2_ae5b54dc_Tx         , PduRConf_PduRSrcPdu_PduRSrcPdu_2e6f76ae, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_5e3f6ed5, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_5e3f6ed5,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            52U },  /* [CanTpRxNSdu_b397195b] */  /* [CanTpRxNSdu_b397195b, 38] */
  { /*    52 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_A2_BB2_Tp_oBackbone2_249acffa_Tx      , PduRConf_PduRSrcPdu_PduRSrcPdu_ea4e2140, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_74ef1723, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_74ef1723,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            53U },  /* [CanTpRxNSdu_ba7ca71e] */  /* [CanTpRxNSdu_ba7ca71e, 14] */
  { /*    53 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_26_BB2_Tp_oBackbone2_ebb70ff2_Tx         , PduRConf_PduRSrcPdu_PduRSrcPdu_dfacef7f, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_d579a88f, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_d579a88f,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            54U },  /* [CanTpRxNSdu_bf49619c] */  /* [CanTpRxNSdu_bf49619c, 30] */
  { /*    54 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_A1_BB2_Tp_oBackbone2_bca8fbcc_Tx      , PduRConf_PduRSrcPdu_PduRSrcPdu_39fe25b5, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_9a31522e, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_9a31522e,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            55U },  /* [CanTpRxNSdu_c1f2403e] */  /* [CanTpRxNSdu_c1f2403e, 13] */
  { /*    55 */ CANTP_INVALID_HDL                                                                   , PduRConf_PduRSrcPdu_PduRSrcPdu_446f53c1, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_07a55d85, CANTP_INVALID_HDL                             ,        8U, 11U,  11U, CANTP_FUNCTIONAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_c5d4f814] */  /* [CanTpRxNSdu_c5d4f814, 81] */
  { /*    56 */ CanIfConf_CanIfTxPduCfg_EMS_BB2_09S_FCM_Tp_oBackbone2_41cc37fa_Tx                   , PduRConf_PduRSrcPdu_PduRSrcPdu_7ab1f990, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_715a9875, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_715a9875,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_c9b42c98] */  /* [CanTpRxNSdu_c9b42c98, 75] */
  { /*    57 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_98_F3_Cab_Tp_oCabSubnet_2daafb4e_Tx     , PduRConf_PduRSrcPdu_PduRSrcPdu_c6acd63d, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_9bc423ff, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_9bc423ff,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            56U },  /* [CanTpRxNSdu_c66f942c] */  /* [CanTpRxNSdu_c66f942c, 18] */
  { /*    58 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_A1_BB2_Tp_oBackbone2_441131ae_Tx         , PduRConf_PduRSrcPdu_PduRSrcPdu_30b4cd32, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_8c756e81, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_8c756e81,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            57U },  /* [CanTpRxNSdu_c046cd74] */  /* [CanTpRxNSdu_c046cd74, 36] */
  { /*    59 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_C0_F2_Sec_Tp_oSecuritySubnet_f27248ff_Tx     , PduRConf_PduRSrcPdu_PduRSrcPdu_89263a8e, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_80566eb2, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_80566eb2,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            60U },  /* [CanTpRxNSdu_d7af4a84] */  /* [CanTpRxNSdu_d7af4a84, 46] */
  { /*    60 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_A0_BB2_Tp_oBackbone2_f4db796b_Tx    , PduRConf_PduRSrcPdu_PduRSrcPdu_71b786d1, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_be583640, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_be583640,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            61U },  /* [CanTpRxNSdu_d61db36a] */  /* [CanTpRxNSdu_d61db36a, 4] */
  { /*    61 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_98_BB2_Tp_oBackbone2_8516ddd7_Tx      , PduRConf_PduRSrcPdu_PduRSrcPdu_63947842, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_b8e6fb7d, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_b8e6fb7d,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            62U },  /* [CanTpRxNSdu_d70f6cb5] */  /* [CanTpRxNSdu_d70f6cb5, 11] */
  { /*    62 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_98_F2_Cab_Tp_oCabSubnet_4c51814f_Tx          , PduRConf_PduRSrcPdu_PduRSrcPdu_cd1487f2, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_5b7a8082, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_5b7a8082,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            63U },  /* [CanTpRxNSdu_de4f6c03] */  /* [CanTpRxNSdu_de4f6c03, 42] */
  { /*    63 */ CanIfConf_CanIfTxPduCfg_EMS_BB2_11S_FCM_Tp_oBackbone2_6cd5cf95_Tx                   , PduRConf_PduRSrcPdu_PduRSrcPdu_ab3d4554, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_25603869, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_25603869,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_e0b16505] */  /* [CanTpRxNSdu_e0b16505, 76] */
  { /*    64 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_40_BB2_Tp_oBackbone2_f5224357_Tx      , PduRConf_PduRSrcPdu_PduRSrcPdu_59f7faf1, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_31537c8d, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_31537c8d,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U,                            64U },  /* [CanTpRxNSdu_e1638777] */  /* [CanTpRxNSdu_e1638777, 9] */
  { /*    65 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_A1_F3_Sec_Tp_oSecuritySubnet_a1b03b66_Tx, PduRConf_PduRSrcPdu_PduRSrcPdu_c28e0d5d, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_7c980d9a, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_7c980d9a,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            65U },  /* [CanTpRxNSdu_f0daeab1] */  /* [CanTpRxNSdu_f0daeab1, 20] */
  { /*    66 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_A0_F3_Sec_Tp_oSecuritySubnet_09265670_Tx, PduRConf_PduRSrcPdu_PduRSrcPdu_ff6a6468, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_64268354, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_64268354,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            67U },  /* [CanTpRxNSdu_f5b24442] */  /* [CanTpRxNSdu_f5b24442, 19] */
  { /*    67 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_A2_BB2_Tp_oBackbone2_2addb983_Tx         , PduRConf_PduRSrcPdu_PduRSrcPdu_3c553d77, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_1f316795, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_1f316795,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            68U },  /* [CanTpRxNSdu_f5e91b1b] */  /* [CanTpRxNSdu_f5e91b1b, 37] */
  { /*    68 */ CanIfConf_CanIfTxPduCfg_PDM_Sec_04S_FCM_Tp_oSecuritySubnet_90a313cf_Tx              , PduRConf_PduRSrcPdu_PduRSrcPdu_26b85268, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_ddd13b60, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_ddd13b60,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_f932f12a] */  /* [CanTpRxNSdu_f932f12a, 83] */
  { /*    69 */ CanIfConf_CanIfTxPduCfg_VMCU_BB2_57P_FCM_Tp_oBackbone2_65fb58e9_Tx                  , PduRConf_PduRSrcPdu_PduRSrcPdu_46a397e3, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_28a0dc1f, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_28a0dc1f,      255U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,    0U, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_fe9c6258] */  /* [CanTpRxNSdu_fe9c6258, 90] */
  { /*    70 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_53_F4_Cab_Tp_oCabSubnet_75ef26c1_Tx       , PduRConf_PduRSrcPdu_PduRSrcPdu_99e30330, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_c096cb56, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_c096cb56,        8U, 21U, 101U,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20U,                            70U }   /* [CanTpRxNSdu_ff43a8b1] */  /* [CanTpRxNSdu_ff43a8b1, 24] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxSduCfgInd
**********************************************************************************************************************/
/** 
  \var    CanTp_RxSduCfgInd
  \brief  the indexes of the 1:1 sorted relation pointing to CanTp_RxSduCfg
*/ 
#define CANTP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanTp_RxSduCfgIndType, CANTP_CONST) CanTp_RxSduCfgInd[71] = {
  /* Index    RxSduCfgInd      Referable Keys */
  /*     0 */         12U,  /* [0] */
  /*     1 */         17U,  /* [1] */
  /*     2 */         10U,  /* [2] */
  /*     3 */          7U,  /* [3] */
  /*     4 */         60U,  /* [4] */
  /*     5 */          4U,  /* [5] */
  /*     6 */         21U,  /* [6] */
  /*     7 */         32U,  /* [7] */
  /*     8 */         37U,  /* [8] */
  /*     9 */         64U,  /* [9] */
  /*    10 */         31U,  /* [10] */
  /*    11 */         61U,  /* [11] */
  /*    12 */         19U,  /* [12] */
  /*    13 */         54U,  /* [13] */
  /*    14 */         52U,  /* [14] */
  /*    15 */         22U,  /* [15] */
  /*    16 */         43U,  /* [16] */
  /*    17 */          0U,  /* [17] */
  /*    18 */         57U,  /* [18] */
  /*    19 */         66U,  /* [19] */
  /*    20 */         65U,  /* [20] */
  /*    21 */          5U,  /* [21] */
  /*    22 */         24U,  /* [22] */
  /*    23 */         46U,  /* [23] */
  /*    24 */         70U,  /* [24] */
  /*    25 */          3U,  /* [25] */
  /*    26 */         35U,  /* [26] */
  /*    27 */         42U,  /* [27] */
  /*    28 */         26U,  /* [28] */
  /*    29 */         11U,  /* [29] */
  /*    30 */         53U,  /* [30] */
  /*    31 */         14U,  /* [31] */
  /*    32 */          8U,  /* [32] */
  /*    33 */         20U,  /* [33] */
  /*    34 */         40U,  /* [34] */
  /*    35 */         29U,  /* [35] */
  /*    36 */         58U,  /* [36] */
  /*    37 */         67U,  /* [37] */
  /*    38 */         51U,  /* [38] */
  /*    39 */         25U,  /* [39] */
  /*    40 */         47U,  /* [40] */
  /*    41 */         27U,  /* [41] */
  /*    42 */         62U,  /* [42] */
  /*    43 */         15U,  /* [43] */
  /*    44 */         30U,  /* [44] */
  /*    45 */         13U,  /* [45] */
  /*    46 */         59U,  /* [46] */
  /*    47 */         23U,  /* [47] */
  /*    48 */          9U,  /* [48] */
  /*    49 */         28U,  /* [49] */
  /* Index    RxSduCfgInd      Referable Keys */
  /*    50 */         16U,  /* [50] */
  /*    51 */         34U,  /* [51] */
  /*    52 */         48U,  /* [72] */
  /*    53 */         39U,  /* [73] */
  /*    54 */         41U,  /* [74] */
  /*    55 */         56U,  /* [75] */
  /*    56 */         63U,  /* [76] */
  /*    57 */         44U,  /* [77] */
  /*    58 */         38U,  /* [78] */
  /*    59 */         49U,  /* [79] */
  /*    60 */         18U,  /* [80] */
  /*    61 */         55U,  /* [81] */
  /*    62 */          2U,  /* [82] */
  /*    63 */         68U,  /* [83] */
  /*    64 */          1U,  /* [84] */
  /*    65 */         45U,  /* [85] */
  /*    66 */          6U,  /* [86] */
  /*    67 */         50U,  /* [87] */
  /*    68 */         33U,  /* [88] */
  /*    69 */         36U,  /* [89] */
  /*    70 */         69U   /* [90] */
};
#define CANTP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxSduSnv2Hdl
**********************************************************************************************************************/
/** 
  \var    CanTp_RxSduSnv2Hdl
  \details
  Element        Description
  RxSduCfgIdx    the index of the 0:1 relation pointing to CanTp_RxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanTp_RxSduSnv2HdlType, CANTP_CONST) CanTp_RxSduSnv2Hdl[71] = {
    /* Index    RxSduCfgIdx        Comment */
  { /*     0 */          0U },  /* [CanTpRxNSdu_0b4e5ed3] */
  { /*     1 */          1U },  /* [CanTpRxNSdu_0bfbcf81] */
  { /*     2 */          2U },  /* [CanTpRxNSdu_0c44e225] */
  { /*     3 */          3U },  /* [CanTpRxNSdu_1a4aae9e] */
  { /*     4 */          4U },  /* [CanTpRxNSdu_1c70aeed] */
  { /*     5 */          5U },  /* [CanTpRxNSdu_2ed2671b] */
  { /*     6 */          6U },  /* [CanTpRxNSdu_3cc05d5a] */
  { /*     7 */          7U },  /* [CanTpRxNSdu_6a041a59] */
  { /*     8 */          8U },  /* [CanTpRxNSdu_6b50c215] */
  { /*     9 */          9U },  /* [CanTpRxNSdu_6c38d736] */
  { /*    10 */         10U },  /* [CanTpRxNSdu_6e537029] */
  { /*    11 */         11U },  /* [CanTpRxNSdu_6eda9336] */
  { /*    12 */         12U },  /* [CanTpRxNSdu_6f288d0c] */
  { /*    13 */         13U },  /* [CanTpRxNSdu_9bc05ec2] */
  { /*    14 */         14U },  /* [CanTpRxNSdu_9fd60b61] */
  { /*    15 */         15U },  /* [CanTpRxNSdu_05d82786] */
  { /*    16 */         16U },  /* [CanTpRxNSdu_08e2bc01] */
  { /*    17 */         17U },  /* [CanTpRxNSdu_11b4d294] */
  { /*    18 */         18U },  /* [CanTpRxNSdu_14edf183] */
  { /*    19 */         19U },  /* [CanTpRxNSdu_30eb7850] */
  { /*    20 */         20U },  /* [CanTpRxNSdu_33cb3e9e] */
  { /*    21 */         21U },  /* [CanTpRxNSdu_39f210d3] */
  { /*    22 */         22U },  /* [CanTpRxNSdu_40c57205] */
  { /*    23 */         23U },  /* [CanTpRxNSdu_53d85cb5] */
  { /*    24 */         24U },  /* [CanTpRxNSdu_66ceed3b] */
  { /*    25 */         25U },  /* [CanTpRxNSdu_68a1d221] */
  { /*    26 */         26U },  /* [CanTpRxNSdu_90b4ee1f] */
  { /*    27 */         27U },  /* [CanTpRxNSdu_97d435bf] */
  { /*    28 */         28U },  /* [CanTpRxNSdu_135f1a6f] */
  { /*    29 */         29U },  /* [CanTpRxNSdu_155b67c1] */
  { /*    30 */         30U },  /* [CanTpRxNSdu_160b460d] */
  { /*    31 */         31U },  /* [CanTpRxNSdu_163b0bdd] */
  { /*    32 */         32U },  /* [CanTpRxNSdu_602b7b73] */
  { /*    33 */         33U },  /* [CanTpRxNSdu_835e9534] */
  { /*    34 */         34U },  /* [CanTpRxNSdu_871bc7b1] */
  { /*    35 */         35U },  /* [CanTpRxNSdu_917ba177] */
  { /*    36 */         36U },  /* [CanTpRxNSdu_948ebe8b] */
  { /*    37 */         37U },  /* [CanTpRxNSdu_2541fba3] */
  { /*    38 */         38U },  /* [CanTpRxNSdu_2626eddc] */
  { /*    39 */         39U },  /* [CanTpRxNSdu_7107e017] */
  { /*    40 */         40U },  /* [CanTpRxNSdu_8729f19d] */
  { /*    41 */         41U },  /* [CanTpRxNSdu_598434b3] */
  { /*    42 */         42U },  /* [CanTpRxNSdu_2609472a] */
  { /*    43 */         43U },  /* [CanTpRxNSdu_8388957a] */
  { /*    44 */         44U },  /* [CanTpRxNSdu_9872323c] */
  { /*    45 */         45U },  /* [CanTpRxNSdu_33326932] */
  { /*    46 */         46U },  /* [CanTpRxNSdu_93056798] */
  { /*    47 */         47U },  /* [CanTpRxNSdu_a23f8213] */
  { /*    48 */         48U },  /* [CanTpRxNSdu_a9722d89] */
  { /*    49 */         49U },  /* [CanTpRxNSdu_add9d1da] */
    /* Index    RxSduCfgIdx        Comment */
  { /*    50 */         50U },  /* [CanTpRxNSdu_b7bc20cf] */
  { /*    51 */         51U },  /* [CanTpRxNSdu_b397195b] */
  { /*    52 */         52U },  /* [CanTpRxNSdu_ba7ca71e] */
  { /*    53 */         53U },  /* [CanTpRxNSdu_bf49619c] */
  { /*    54 */         54U },  /* [CanTpRxNSdu_c1f2403e] */
  { /*    55 */         55U },  /* [CanTpRxNSdu_c5d4f814] */
  { /*    56 */         56U },  /* [CanTpRxNSdu_c9b42c98] */
  { /*    57 */         57U },  /* [CanTpRxNSdu_c66f942c] */
  { /*    58 */         58U },  /* [CanTpRxNSdu_c046cd74] */
  { /*    59 */         59U },  /* [CanTpRxNSdu_d7af4a84] */
  { /*    60 */         60U },  /* [CanTpRxNSdu_d61db36a] */
  { /*    61 */         61U },  /* [CanTpRxNSdu_d70f6cb5] */
  { /*    62 */         62U },  /* [CanTpRxNSdu_de4f6c03] */
  { /*    63 */         63U },  /* [CanTpRxNSdu_e0b16505] */
  { /*    64 */         64U },  /* [CanTpRxNSdu_e1638777] */
  { /*    65 */         65U },  /* [CanTpRxNSdu_f0daeab1] */
  { /*    66 */         66U },  /* [CanTpRxNSdu_f5b24442] */
  { /*    67 */         67U },  /* [CanTpRxNSdu_f5e91b1b] */
  { /*    68 */         68U },  /* [CanTpRxNSdu_f932f12a] */
  { /*    69 */         69U },  /* [CanTpRxNSdu_fe9c6258] */
  { /*    70 */         70U }   /* [CanTpRxNSdu_ff43a8b1] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSduCfg
**********************************************************************************************************************/
/** 
  \var    CanTp_TxSduCfg
  \details
  Element                   Description
  CanIfTxPduId          
  PduRTxSduId           
  RxFcPduId             
  TxPduConfirmationPduId
  NBs                   
  RxSduCfgIdx               the index of the 0:1 relation pointing to CanTp_RxSduCfg
  TxTaType              
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanTp_TxSduCfgType, CANTP_CONST) CanTp_TxSduCfg[71] = {
    /* Index    CanIfTxPduId                                                                          PduRTxSduId                                                                 RxFcPduId                                       TxPduConfirmationPduId                      NBs   RxSduCfgIdx                     TxTaType                                   Comment                            Referable Keys */
  { /*     0 */ CanIfConf_CanIfTxPduCfg_CIOM_BB2_12S_Tp_oBackbone2_b9170acc_Tx                      , PduRConf_PduRDestPdu_CIOM_BB2_12S_oBackbone2_fe325e86_Tx                  , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu         , CanTpConf_CanTpTxNPdu_CanTpTxNPdu         , 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu]          */  /* [CanTpTxNSdu, 52] */
  { /*     1 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_53_F3_Cab_Tp_oCabSubnet_e9059d48_Tx     , PduRConf_PduRDestPdu_CIOM_14cb3836_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_561bc244, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_561bc244, 101U,                             0U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_0b4e5ed3] */  /* [CanTpTxNSdu_0b4e5ed3, 17] */
  { /*     2 */ CanIfConf_CanIfTxPduCfg_CIOM_Cab_04S_Tp_oCabSubnet_e3ca2569_Tx                      , PduRConf_PduRDestPdu_CIOM_Cab_04S_oCabSubnet_779a15ce_Tx                  , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_89f8ff59, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_89f8ff59, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_0b28b3c4] */  /* [CanTpTxNSdu_0b28b3c4, 55] */
  { /*     3 */ CanIfConf_CanIfTxPduCfg_IntTesterTGW2FuncDiagMsg_Sec_Tp_oSecuritySubnet_57d96404_Tx , PduRConf_PduRDestPdu_CIOM_9aa9598b_Tx                                     , CANTP_INVALID_HDL                             , CanTpConf_CanTpTxNPdu_CanTpTxNPdu_2e007fb2,  11U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG, CANTP_FUNCTIONAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_0f9a4f9c] */  /* [CanTpTxNSdu_0f9a4f9c, 65535] */
  { /*     4 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_98_F4_Cab_Tp_oCabSubnet_2e8c3543_Tx       , PduRConf_PduRDestPdu_CIOM_ee94b160_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_47310e07, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_47310e07, 101U,                             3U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_1a4aae9e] */  /* [CanTpTxNSdu_1a4aae9e, 25] */
  { /*     5 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_A1_BB2_Tp_oBackbone2_08540fc1_Tx    , PduRConf_PduRDestPdu_CIOM_500aa266_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_273cbbfc, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_273cbbfc, 101U,                             4U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_1c70aeed] */  /* [CanTpTxNSdu_1c70aeed, 5] */
  { /*     6 */ CanIfConf_CanIfTxPduCfg_CIOM_Cab_13S_Tp_oCabSubnet_e50870d8_Tx                      , PduRConf_PduRDestPdu_CIOM_Cab_13S_oCabSubnet_f9fd97a8_Tx                  , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_4322dc05, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_4322dc05, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_2b6a0a70] */  /* [CanTpTxNSdu_2b6a0a70, 58] */
  { /*     7 */ CanIfConf_CanIfTxPduCfg_CIOM_Sec_06S_Tp_oSecuritySubnet_39a2f744_Tx                 , PduRConf_PduRDestPdu_CIOM_Sec_06S_oSecuritySubnet_423b684c_Tx             , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_7d9d2994, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_7d9d2994, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_2c8e4400] */  /* [CanTpTxNSdu_2c8e4400, 65] */
  { /*     8 */ CanIfConf_CanIfTxPduCfg_CIOM_Cab_11S_Tp_oCabSubnet_ec1435f4_Tx                      , PduRConf_PduRDestPdu_CIOM_Cab_11S_oCabSubnet_c1389abd_Tx                  , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_1b772fca, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_1b772fca, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_2c8eef3f] */  /* [CanTpTxNSdu_2c8eef3f, 57] */
  { /*     9 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_A2_F3_Cab_Tp_oCabSubnet_fcbc8d7d_Tx     , PduRConf_PduRDestPdu_CIOM_e217a053_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_c00998cc, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_c00998cc, 101U,                             5U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_2ed2671b] */  /* [CanTpTxNSdu_2ed2671b, 21] */
  { /*    10 */ CanIfConf_CanIfTxPduCfg_CIOM_Sec_11S_Tp_oSecuritySubnet_dc8daaf0_Tx                 , PduRConf_PduRDestPdu_CIOM_Sec_11S_oSecuritySubnet_d4660cbf_Tx             , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_adf550fb, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_adf550fb, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_4c161f1d] */  /* [CanTpTxNSdu_4c161f1d, 70] */
  { /*    11 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_98_BB2_Tp_oBackbone2_73235a33_Tx    , PduRConf_PduRDestPdu_CIOM_ee2480d2_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_447498b9, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_447498b9, 101U,                             7U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_6a041a59] */  /* [CanTpTxNSdu_6a041a59, 3] */
  { /*    12 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F1_53_BB2_Tp_oBackbone2_be0c70d1_Tx         , PduRConf_PduRDestPdu_CIOM_e5f820d2_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_0a7bda08, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_0a7bda08, 101U,                             8U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_6b50c215] */  /* [CanTpTxNSdu_6b50c215, 32] */
  { /*    13 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_53_BB2_Tp_oBackbone2_930c5799_Tx    , PduRConf_PduRDestPdu_CIOM_e742f677_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_1a82dd1c, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_1a82dd1c, 101U,                            10U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_6e537029] */  /* [CanTpTxNSdu_6e537029, 2] */
  { /*    14 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_C0_F4_Sec_Tp_oSecuritySubnet_0ba24808_Tx  , PduRConf_PduRDestPdu_CIOM_98a0f91f_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_5c415aeb, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_5c415aeb, 101U,                            11U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_6eda9336] */  /* [CanTpTxNSdu_6eda9336, 29] */
  { /*    15 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_26_BB2_Tp_oBackbone2_aba3af99_Tx    , PduRConf_PduRDestPdu_CIOM_fcf69174_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_fe03b9c5, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_fe03b9c5, 101U,                            12U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_6f288d0c] */  /* [CanTpTxNSdu_6f288d0c, 0] */
  { /*    16 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_A2_F2_Cab_Tp_oCabSubnet_6d74e481_Tx          , PduRConf_PduRDestPdu_CIOM_50cc5439_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_caf0e2e7, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_caf0e2e7, 101U,                            13U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_9bc05ec2] */  /* [CanTpTxNSdu_9bc05ec2, 45] */
  { /*    17 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_40_BB2_Tp_oBackbone2_bd4d3e52_Tx         , PduRConf_PduRDestPdu_PhysDiagRespMsg_F2_40_BB2_oBackbone2_1ef42df7_Tx     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_65491b5b, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_65491b5b, 101U,                            14U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_9fd60b61] */  /* [CanTpTxNSdu_9fd60b61, 31] */
  { /*    18 */ CanIfConf_CanIfTxPduCfg_CIOM_Sec_08S_Tp_oSecuritySubnet_eafb50f2_Tx                 , PduRConf_PduRDestPdu_CIOM_Sec_08S_oSecuritySubnet_3bd74a1d_Tx             , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_1bcf3d59, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_1bcf3d59, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_9fe90810] */  /* [CanTpTxNSdu_9fe90810, 67] */
  { /*    19 */ CanIfConf_CanIfTxPduCfg_CIOM_Cab_25S_Tp_oCabSubnet_d5957759_Tx                      , PduRConf_PduRDestPdu_CIOM_Cab_25S_oCabSubnet_eba53182_Tx                  , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_9a489703, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_9a489703, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_05a0c60a] */  /* [CanTpTxNSdu_05a0c60a, 60] */
  { /*    20 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_A0_F2_Sec_Tp_oSecuritySubnet_cb87d97b_Tx     , PduRConf_PduRDestPdu_CIOM_0fefd926_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_e015a674, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_e015a674, 101U,                            15U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_05d82786] */  /* [CanTpTxNSdu_05d82786, 43] */
  { /*    21 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_40_BB2_Tp_oBackbone2_7b130fa6_Tx    , PduRConf_PduRDestPdu_DiagRespMsgIntHMIIOM_F3_40_BB2_oBackbone2_f7679e64_Tx, CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_5a3697c2, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_5a3697c2, 101U,                            17U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_11b4d294] */  /* [CanTpTxNSdu_11b4d294, 1] */
  { /*    22 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_A0_BB2_Tp_oBackbone2_7d9615e1_Tx      , PduRConf_PduRDestPdu_CIOM_3fb186a1_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_36b7149a, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_36b7149a, 101U,                            19U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_30eb7850] */  /* [CanTpTxNSdu_30eb7850, 12] */
  { /*    23 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_53_BB2_Tp_oBackbone2_ef1139d4_Tx         , PduRConf_PduRDestPdu_CIOM_a81020b5_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_e5f0678e, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_e5f0678e, 101U,                            20U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_33cb3e9e] */  /* [CanTpTxNSdu_33cb3e9e, 33] */
  { /*    24 */ CanIfConf_CanIfTxPduCfg_CIOM_Cab_34P_Tp_oCabSubnet_377e6916_Tx                      , PduRConf_PduRDestPdu_CIOM_Cab_34P_oCabSubnet_3fa59da8_Tx                  , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_d3983306, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_d3983306, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_39c7c1db] */  /* [CanTpTxNSdu_39c7c1db, 63] */
  { /*    25 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_A2_BB2_Tp_oBackbone2_d6b4927e_Tx    , PduRConf_PduRDestPdu_CIOM_dbd99c7f_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_c2095832, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_c2095832, 101U,                            21U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_39f210d3] */  /* [CanTpTxNSdu_39f210d3, 6] */
  { /*    26 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_C0_BB2_Tp_oBackbone2_f7aad0d7_Tx      , PduRConf_PduRDestPdu_CIOM_ce2129ca_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_7e30e495, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_7e30e495, 101U,                            22U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_40c57205] */  /* [CanTpTxNSdu_40c57205, 15] */
  { /*    27 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_C0_F3_Sec_Tp_oSecuritySubnet_3aaf1649_Tx, PduRConf_PduRDestPdu_CIOM_2b6cb3ad_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_b1472493, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_b1472493, 101U,                            24U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_66ceed3b] */  /* [CanTpTxNSdu_66ceed3b, 22] */
  { /*    28 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_53_F1_Cab_Tp_oCabSubnet_682570ce_Tx          , PduRConf_PduRDestPdu_CIOM_2dc3f245_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_679e1c35, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_679e1c35, 101U,                            25U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_68a1d221] */  /* [CanTpTxNSdu_68a1d221, 39] */
  { /*    29 */ CanIfConf_CanIfTxPduCfg_TesterFuncDiagMsg_Cab_Tp_oCabSubnet_d293ecaa_Tx             , PduRConf_PduRDestPdu_CIOM_017be91a_Tx                                     , CANTP_INVALID_HDL                             , CanTpConf_CanTpTxNPdu_CanTpTxNPdu_9516a986,  11U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG, CANTP_FUNCTIONAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_85a43433] */  /* [CanTpTxNSdu_85a43433, 65535] */
  { /*    30 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_A2_F4_Cab_Tp_oCabSubnet_fc611706_Tx       , PduRConf_PduRDestPdu_CIOM_1a4fac9a_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_b73de2d0, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_b73de2d0, 101U,                            26U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_90b4ee1f] */  /* [CanTpTxNSdu_90b4ee1f, 28] */
  { /*    31 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_53_F2_Cab_Tp_oCabSubnet_9abe6f67_Tx          , PduRConf_PduRDestPdu_CIOM_a610cc5c_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_14ebb75e, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_14ebb75e, 101U,                            27U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_97d435bf] */  /* [CanTpTxNSdu_97d435bf, 41] */
  { /*    32 */ CanIfConf_CanIfTxPduCfg_CIOM_BB2_13S_Tp_oBackbone2_bd99285a_Tx                      , PduRConf_PduRDestPdu_CIOM_BB2_13S_oBackbone2_0fe85b2c_Tx                  , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_001     , CanTpConf_CanTpTxNPdu_CanTpTxNPdu_001     , 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_638f93bd] */  /* [CanTpTxNSdu_638f93bd, 53] */
  { /*    33 */ CanIfConf_CanIfTxPduCfg_CIOM_Cab_29S_Tp_oCabSubnet_e3dce9b1_Tx                      , PduRConf_PduRDestPdu_CIOM_Cab_29S_oCabSubnet_793b1ffc_Tx                  , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_4ce4798a, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_4ce4798a, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_072ad05f] */  /* [CanTpTxNSdu_072ad05f, 61] */
  { /*    34 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_A0_BB2_Tp_oBackbone2_d77a4b8a_Tx         , PduRConf_PduRDestPdu_CIOM_d0c6636c_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_6e9d45e7, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_6e9d45e7, 101U,                            29U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_155b67c1] */  /* [CanTpTxNSdu_155b67c1, 35] */
  { /*    35 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_A1_F2_Sec_Tp_oSecuritySubnet_5d2e792a_Tx     , PduRConf_PduRDestPdu_CIOM_325e35fa_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_14ea7b0b, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_14ea7b0b, 101U,                            30U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_160b460d] */  /* [CanTpTxNSdu_160b460d, 44] */
  { /*    36 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_53_BB2_Tp_oBackbone2_280e15fa_Tx      , PduRConf_PduRDestPdu_CIOM_4767c578_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_93a7a9d5, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_93a7a9d5, 101U,                            31U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_163b0bdd] */  /* [CanTpTxNSdu_163b0bdd, 10] */
  { /*    37 */ CanIfConf_CanIfTxPduCfg_IntTesterTGW2FuncDiagMsg_Cab_Tp_oCabSubnet_96ec8334_Tx      , PduRConf_PduRDestPdu_CIOM_52939f57_Tx                                     , CANTP_INVALID_HDL                             , CanTpConf_CanTpTxNPdu_CanTpTxNPdu_f3f911f3,  11U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG, CANTP_FUNCTIONAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_338fdf39] */  /* [CanTpTxNSdu_338fdf39, 65535] */
  { /*    38 */ CanIfConf_CanIfTxPduCfg_CIOM_Sec_09S_Tp_oSecuritySubnet_ba09ccac_Tx                 , PduRConf_PduRDestPdu_CIOM_Sec_09S_oSecuritySubnet_9aeecef3_Tx             , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_16d15085, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_16d15085, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_421e4ec4] */  /* [CanTpTxNSdu_421e4ec4, 68] */
  { /*    39 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_C0_BB2_Tp_oBackbone2_9924f26b_Tx    , PduRConf_PduRDestPdu_CIOM_6e041ac5_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_a580481e, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_a580481e, 101U,                            32U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_602b7b73] */  /* [CanTpTxNSdu_602b7b73, 7] */
  { /*    40 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_A0_F4_Sec_Tp_oSecuritySubnet_8adef0bc_Tx  , PduRConf_PduRDestPdu_CIOM_5d61a178_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_20d338ab, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_20d338ab, 101U,                            35U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_917ba177] */  /* [CanTpTxNSdu_917ba177, 26] */
  { /*    41 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_26_BB2_Tp_oBackbone2_5b036461_Tx      , PduRConf_PduRDestPdu_CIOM_5cd3a27b_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_ebe1bf0d, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_ebe1bf0d, 101U,                            37U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_2541fba3] */  /* [CanTpTxNSdu_2541fba3, 8] */
  { /*    42 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_98_BB2_Tp_oBackbone2_0c1730ea_Tx         , PduRConf_PduRDestPdu_CIOM_a1765610_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_2e22b0e3, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_2e22b0e3, 101U,                            40U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_8729f19d] */  /* [CanTpTxNSdu_8729f19d, 34] */
  { /*    43 */ CanIfConf_CanIfTxPduCfg_CIOM_Cab_05S_Tp_oCabSubnet_e74407ff_Tx                      , PduRConf_PduRDestPdu_CIOM_Cab_05S_oCabSubnet_86401064_Tx                  , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_8b06b311, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_8b06b311, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_67565e28] */  /* [CanTpTxNSdu_67565e28, 56] */
  { /*    44 */ CanIfConf_CanIfTxPduCfg_TesterFuncDiagMsg_Sec_Tp_oSecuritySubnet_7f5a7347_Tx        , PduRConf_PduRDestPdu_CIOM_305ca23a_Tx                                     , CANTP_INVALID_HDL                             , CanTpConf_CanTpTxNPdu_CanTpTxNPdu_0fcb0b72,  11U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG, CANTP_FUNCTIONAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_81649aaa] */  /* [CanTpTxNSdu_81649aaa, 65535] */
  { /*    45 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_A1_F4_Sec_Tp_oSecuritySubnet_eb89cc56_Tx  , PduRConf_PduRDestPdu_CIOM_60d04da4_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_0a210417, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_0a210417, 101U,                            42U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_2609472a] */  /* [CanTpTxNSdu_2609472a, 27] */
  { /*    46 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_26_F3_Cab_Tp_oCabSubnet_2e1f9ada_Tx     , PduRConf_PduRDestPdu_CIOM_f03d0c81_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_05536183, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_05536183, 101U,                            43U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_8388957a] */  /* [CanTpTxNSdu_8388957a, 16] */
  { /*    47 */ CanIfConf_CanIfTxPduCfg_CIOM_Sec_12S_Tp_oSecuritySubnet_2d9a0e12_Tx                 , PduRConf_PduRDestPdu_CIOM_Sec_12S_oSecuritySubnet_ec5d87cc_Tx             , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_426219dc, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_426219dc, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_40316546] */  /* [CanTpTxNSdu_40316546, 71] */
  { /*    48 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_26_F4_Cab_Tp_oCabSubnet_b42402a4_Tx       , PduRConf_PduRDestPdu_CIOM_08650048_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_52d3aa3f, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_52d3aa3f, 101U,                            46U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_93056798] */  /* [CanTpTxNSdu_93056798, 23] */
  { /*    49 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_26_F2_Cab_Tp_oCabSubnet_e2a6386f_Tx          , PduRConf_PduRDestPdu_CIOM_42e6f8eb_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_e51b1aae, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_e51b1aae, 101U,                            47U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_a23f8213] */  /* [CanTpTxNSdu_a23f8213, 40] */
    /* Index    CanIfTxPduId                                                                          PduRTxSduId                                                                 RxFcPduId                                       TxPduConfirmationPduId                      NBs   RxSduCfgIdx                     TxTaType                                   Comment                            Referable Keys */
  { /*    50 */ CanIfConf_CanIfTxPduCfg_CIOM_Cab_30S_Tp_oCabSubnet_da4b67c4_Tx                      , PduRConf_PduRDestPdu_CIOM_Cab_30S_oCabSubnet_5d07bef1_Tx                  , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_2679860a, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_2679860a, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_ac62b136] */  /* [CanTpTxNSdu_ac62b136, 62] */
  { /*    51 */ CanIfConf_CanIfTxPduCfg_CIOM_Sec_07S_Tp_oSecuritySubnet_69506b1a_Tx                 , PduRConf_PduRDestPdu_CIOM_Sec_07S_oSecuritySubnet_e302eca2_Tx             , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_ae8e313f, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_ae8e313f, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_b77300d6] */  /* [CanTpTxNSdu_b77300d6, 66] */
  { /*    52 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_C0_BB2_Tp_oBackbone2_ae5b54dc_Tx         , PduRConf_PduRDestPdu_CIOM_2156cc07_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_7cc5ba27, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_7cc5ba27, 101U,                            51U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_b397195b] */  /* [CanTpTxNSdu_b397195b, 38] */
  { /*    53 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_A2_BB2_Tp_oBackbone2_249acffa_Tx      , PduRConf_PduRDestPdu_CIOM_7bfcaf70_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_5615c3d1, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_5615c3d1, 101U,                            52U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_ba7ca71e] */  /* [CanTpTxNSdu_ba7ca71e, 14] */
  { /*    54 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_26_BB2_Tp_oBackbone2_ebb70ff2_Tx         , PduRConf_PduRDestPdu_CIOM_b3a447b6_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_f7837c7d, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_f7837c7d, 101U,                            53U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_bf49619c] */  /* [CanTpTxNSdu_bf49619c, 30] */
  { /*    55 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_A1_BB2_Tp_oBackbone2_bca8fbcc_Tx      , PduRConf_PduRDestPdu_CIOM_f02f9169_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_b8cb86dc, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_b8cb86dc, 101U,                            54U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_c1f2403e] */  /* [CanTpTxNSdu_c1f2403e, 13] */
  { /*    56 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_98_F3_Cab_Tp_oCabSubnet_2daafb4e_Tx     , PduRConf_PduRDestPdu_CIOM_16ccbda9_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_b93ef70d, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_b93ef70d, 101U,                            57U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_c66f942c] */  /* [CanTpTxNSdu_c66f942c, 18] */
  { /*    57 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_A1_BB2_Tp_oBackbone2_441131ae_Tx         , PduRConf_PduRDestPdu_CIOM_1f5874a4_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_ae8fba73, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_ae8fba73, 101U,                            58U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_c046cd74] */  /* [CanTpTxNSdu_c046cd74, 36] */
  { /*    58 */ CanIfConf_CanIfTxPduCfg_CIOM_BB2_32S_Tp_oBackbone2_8bc67a6a_Tx                      , PduRConf_PduRDestPdu_CIOM_BB2_32S_oBackbone2_93d77f60_Tx                  , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_71dc397e, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_71dc397e, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_cd0025ca] */  /* [CanTpTxNSdu_cd0025ca, 54] */
  { /*    59 */ CanIfConf_CanIfTxPduCfg_CIOM_Sec_05S_Tp_oSecuritySubnet_c8b553a6_Tx                 , PduRConf_PduRDestPdu_CIOM_Sec_05S_oSecuritySubnet_7a00e33f_Tx             , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_cc0bb21d, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_cc0bb21d, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_cfd2742b] */  /* [CanTpTxNSdu_cfd2742b, 64] */
  { /*    60 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_C0_F2_Sec_Tp_oSecuritySubnet_f27248ff_Tx     , PduRConf_PduRDestPdu_CIOM_ca2e8141_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_a2acba40, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_a2acba40, 101U,                            59U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_d7af4a84] */  /* [CanTpTxNSdu_d7af4a84, 46] */
  { /*    61 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntHMIIOM_F3_A0_BB2_Tp_oBackbone2_f4db796b_Tx    , PduRConf_PduRDestPdu_CIOM_9f94b5ae_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_9ca2e2b2, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_9ca2e2b2, 101U,                            60U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_d61db36a] */  /* [CanTpTxNSdu_d61db36a, 4] */
  { /*    62 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_98_BB2_Tp_oBackbone2_8516ddd7_Tx      , PduRConf_PduRDestPdu_CIOM_4e01b3dd_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_9a1c2f8f, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_9a1c2f8f, 101U,                            61U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_d70f6cb5] */  /* [CanTpTxNSdu_d70f6cb5, 11] */
  { /*    63 */ CanIfConf_CanIfTxPduCfg_PhysDiagReqMsg_98_F2_Cab_Tp_oCabSubnet_4c51814f_Tx          , PduRConf_PduRDestPdu_CIOM_a41749c3_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_79805470, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_79805470, 101U,                            62U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_de4f6c03] */  /* [CanTpTxNSdu_de4f6c03, 42] */
  { /*    64 */ CanIfConf_CanIfTxPduCfg_DiagRespMsgIntTGW2_F4_40_BB2_Tp_oBackbone2_f5224357_Tx      , PduRConf_PduRDestPdu_DiagRespMsgIntTGW2_F4_40_BB2_oBackbone2_3b72250e_Tx  , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_13a9a87f, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_13a9a87f, 101U,                            64U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_e1638777] */  /* [CanTpTxNSdu_e1638777, 9] */
  { /*    65 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_A1_F3_Sec_Tp_oSecuritySubnet_a1b03b66_Tx, PduRConf_PduRDestPdu_CIOM_d31c0716_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_5e62d968, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_5e62d968, 101U,                            65U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_f0daeab1] */  /* [CanTpTxNSdu_f0daeab1, 20] */
  { /*    66 */ CanIfConf_CanIfTxPduCfg_CIOM_Cab_20S_Tp_oCabSubnet_c323df97_Tx                      , PduRConf_PduRDestPdu_CIOM_Cab_20S_oCabSubnet_6bf52e02_Tx                  , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_51ea11e5, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_51ea11e5, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_f3c4bb5a] */  /* [CanTpTxNSdu_f3c4bb5a, 59] */
  { /*    67 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntHMIIOM_A0_F3_Sec_Tp_oSecuritySubnet_09265670_Tx, PduRConf_PduRDestPdu_CIOM_eeadebca_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_46dc57a6, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_46dc57a6, 101U,                            66U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_f5b24442] */  /* [CanTpTxNSdu_f5b24442, 19] */
  { /*    68 */ CanIfConf_CanIfTxPduCfg_PhysDiagRespMsg_F2_A2_BB2_Tp_oBackbone2_2addb983_Tx         , PduRConf_PduRDestPdu_CIOM_948b4abd_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_3dcbb367, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_3dcbb367, 101U,                            67U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_f5e91b1b] */  /* [CanTpTxNSdu_f5e91b1b, 37] */
  { /*    69 */ CanIfConf_CanIfTxPduCfg_CIOM_Sec_10S_Tp_oSecuritySubnet_8c7f36ae_Tx                 , PduRConf_PduRDestPdu_CIOM_Sec_10S_oSecuritySubnet_755f8851_Tx             , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_6def313d, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_6def313d, 101U, CANTP_NO_RXSDUCFGIDXOFTXSDUCFG,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG },  /* [CanTpTxNSdu_f8c8b245] */  /* [CanTpTxNSdu_f8c8b245, 69] */
  { /*    70 */ CanIfConf_CanIfTxPduCfg_DiagReqMsgIntTGW2_53_F4_Cab_Tp_oCabSubnet_75ef26c1_Tx       , PduRConf_PduRDestPdu_CIOM_ec9334ff_Tx                                     , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_e26c1fa4, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_e26c1fa4, 101U,                            70U,   CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG }   /* [CanTpTxNSdu_ff43a8b1] */  /* [CanTpTxNSdu_ff43a8b1, 24] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSduCfgInd
**********************************************************************************************************************/
/** 
  \var    CanTp_TxSduCfgInd
  \brief  the indexes of the 1:1 sorted relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanTp_TxSduCfgIndType, CANTP_CONST) CanTp_TxSduCfgInd[67] = {
  /* Index    TxSduCfgInd      Referable Keys */
  /*     0 */         15U,  /* [0] */
  /*     1 */         21U,  /* [1] */
  /*     2 */         13U,  /* [2] */
  /*     3 */         11U,  /* [3] */
  /*     4 */         61U,  /* [4] */
  /*     5 */          5U,  /* [5] */
  /*     6 */         25U,  /* [6] */
  /*     7 */         39U,  /* [7] */
  /*     8 */         41U,  /* [8] */
  /*     9 */         64U,  /* [9] */
  /*    10 */         36U,  /* [10] */
  /*    11 */         62U,  /* [11] */
  /*    12 */         22U,  /* [12] */
  /*    13 */         55U,  /* [13] */
  /*    14 */         53U,  /* [14] */
  /*    15 */         26U,  /* [15] */
  /*    16 */         46U,  /* [16] */
  /*    17 */          1U,  /* [17] */
  /*    18 */         56U,  /* [18] */
  /*    19 */         67U,  /* [19] */
  /*    20 */         65U,  /* [20] */
  /*    21 */          9U,  /* [21] */
  /*    22 */         27U,  /* [22] */
  /*    23 */         48U,  /* [23] */
  /*    24 */         70U,  /* [24] */
  /*    25 */          4U,  /* [25] */
  /*    26 */         40U,  /* [26] */
  /*    27 */         45U,  /* [27] */
  /*    28 */         30U,  /* [28] */
  /*    29 */         14U,  /* [29] */
  /*    30 */         54U,  /* [30] */
  /*    31 */         17U,  /* [31] */
  /*    32 */         12U,  /* [32] */
  /*    33 */         23U,  /* [33] */
  /*    34 */         42U,  /* [34] */
  /*    35 */         34U,  /* [35] */
  /*    36 */         57U,  /* [36] */
  /*    37 */         68U,  /* [37] */
  /*    38 */         52U,  /* [38] */
  /*    39 */         28U,  /* [39] */
  /*    40 */         49U,  /* [40] */
  /*    41 */         31U,  /* [41] */
  /*    42 */         63U,  /* [42] */
  /*    43 */         20U,  /* [43] */
  /*    44 */         35U,  /* [44] */
  /*    45 */         16U,  /* [45] */
  /*    46 */         60U,  /* [46] */
  /*    47 */          0U,  /* [52] */
  /*    48 */         32U,  /* [53] */
  /*    49 */         58U,  /* [54] */
  /* Index    TxSduCfgInd      Referable Keys */
  /*    50 */          2U,  /* [55] */
  /*    51 */         43U,  /* [56] */
  /*    52 */          8U,  /* [57] */
  /*    53 */          6U,  /* [58] */
  /*    54 */         66U,  /* [59] */
  /*    55 */         19U,  /* [60] */
  /*    56 */         33U,  /* [61] */
  /*    57 */         50U,  /* [62] */
  /*    58 */         24U,  /* [63] */
  /*    59 */         59U,  /* [64] */
  /*    60 */          7U,  /* [65] */
  /*    61 */         51U,  /* [66] */
  /*    62 */         18U,  /* [67] */
  /*    63 */         38U,  /* [68] */
  /*    64 */         69U,  /* [69] */
  /*    65 */         10U,  /* [70] */
  /*    66 */         47U   /* [71] */
};
#define CANTP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSduSnv2Hdl
**********************************************************************************************************************/
/** 
  \var    CanTp_TxSduSnv2Hdl
  \details
  Element        Description
  TxSduCfgIdx    the index of the 0:1 relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanTp_TxSduSnv2HdlType, CANTP_CONST) CanTp_TxSduSnv2Hdl[71] = {
    /* Index    TxSduCfgIdx        Comment */
  { /*     0 */          0U },  /* [CanTpTxNSdu] */
  { /*     1 */          1U },  /* [CanTpTxNSdu_0b4e5ed3] */
  { /*     2 */          2U },  /* [CanTpTxNSdu_0b28b3c4] */
  { /*     3 */          3U },  /* [CanTpTxNSdu_0f9a4f9c] */
  { /*     4 */          4U },  /* [CanTpTxNSdu_1a4aae9e] */
  { /*     5 */          5U },  /* [CanTpTxNSdu_1c70aeed] */
  { /*     6 */          6U },  /* [CanTpTxNSdu_2b6a0a70] */
  { /*     7 */          7U },  /* [CanTpTxNSdu_2c8e4400] */
  { /*     8 */          8U },  /* [CanTpTxNSdu_2c8eef3f] */
  { /*     9 */          9U },  /* [CanTpTxNSdu_2ed2671b] */
  { /*    10 */         10U },  /* [CanTpTxNSdu_4c161f1d] */
  { /*    11 */         11U },  /* [CanTpTxNSdu_6a041a59] */
  { /*    12 */         12U },  /* [CanTpTxNSdu_6b50c215] */
  { /*    13 */         13U },  /* [CanTpTxNSdu_6e537029] */
  { /*    14 */         14U },  /* [CanTpTxNSdu_6eda9336] */
  { /*    15 */         15U },  /* [CanTpTxNSdu_6f288d0c] */
  { /*    16 */         16U },  /* [CanTpTxNSdu_9bc05ec2] */
  { /*    17 */         17U },  /* [CanTpTxNSdu_9fd60b61] */
  { /*    18 */         18U },  /* [CanTpTxNSdu_9fe90810] */
  { /*    19 */         19U },  /* [CanTpTxNSdu_05a0c60a] */
  { /*    20 */         20U },  /* [CanTpTxNSdu_05d82786] */
  { /*    21 */         21U },  /* [CanTpTxNSdu_11b4d294] */
  { /*    22 */         22U },  /* [CanTpTxNSdu_30eb7850] */
  { /*    23 */         23U },  /* [CanTpTxNSdu_33cb3e9e] */
  { /*    24 */         24U },  /* [CanTpTxNSdu_39c7c1db] */
  { /*    25 */         25U },  /* [CanTpTxNSdu_39f210d3] */
  { /*    26 */         26U },  /* [CanTpTxNSdu_40c57205] */
  { /*    27 */         27U },  /* [CanTpTxNSdu_66ceed3b] */
  { /*    28 */         28U },  /* [CanTpTxNSdu_68a1d221] */
  { /*    29 */         29U },  /* [CanTpTxNSdu_85a43433] */
  { /*    30 */         30U },  /* [CanTpTxNSdu_90b4ee1f] */
  { /*    31 */         31U },  /* [CanTpTxNSdu_97d435bf] */
  { /*    32 */         32U },  /* [CanTpTxNSdu_638f93bd] */
  { /*    33 */         33U },  /* [CanTpTxNSdu_072ad05f] */
  { /*    34 */         34U },  /* [CanTpTxNSdu_155b67c1] */
  { /*    35 */         35U },  /* [CanTpTxNSdu_160b460d] */
  { /*    36 */         36U },  /* [CanTpTxNSdu_163b0bdd] */
  { /*    37 */         37U },  /* [CanTpTxNSdu_338fdf39] */
  { /*    38 */         38U },  /* [CanTpTxNSdu_421e4ec4] */
  { /*    39 */         39U },  /* [CanTpTxNSdu_602b7b73] */
  { /*    40 */         40U },  /* [CanTpTxNSdu_917ba177] */
  { /*    41 */         41U },  /* [CanTpTxNSdu_2541fba3] */
  { /*    42 */         42U },  /* [CanTpTxNSdu_8729f19d] */
  { /*    43 */         43U },  /* [CanTpTxNSdu_67565e28] */
  { /*    44 */         44U },  /* [CanTpTxNSdu_81649aaa] */
  { /*    45 */         45U },  /* [CanTpTxNSdu_2609472a] */
  { /*    46 */         46U },  /* [CanTpTxNSdu_8388957a] */
  { /*    47 */         47U },  /* [CanTpTxNSdu_40316546] */
  { /*    48 */         48U },  /* [CanTpTxNSdu_93056798] */
  { /*    49 */         49U },  /* [CanTpTxNSdu_a23f8213] */
    /* Index    TxSduCfgIdx        Comment */
  { /*    50 */         50U },  /* [CanTpTxNSdu_ac62b136] */
  { /*    51 */         51U },  /* [CanTpTxNSdu_b77300d6] */
  { /*    52 */         52U },  /* [CanTpTxNSdu_b397195b] */
  { /*    53 */         53U },  /* [CanTpTxNSdu_ba7ca71e] */
  { /*    54 */         54U },  /* [CanTpTxNSdu_bf49619c] */
  { /*    55 */         55U },  /* [CanTpTxNSdu_c1f2403e] */
  { /*    56 */         56U },  /* [CanTpTxNSdu_c66f942c] */
  { /*    57 */         57U },  /* [CanTpTxNSdu_c046cd74] */
  { /*    58 */         58U },  /* [CanTpTxNSdu_cd0025ca] */
  { /*    59 */         59U },  /* [CanTpTxNSdu_cfd2742b] */
  { /*    60 */         60U },  /* [CanTpTxNSdu_d7af4a84] */
  { /*    61 */         61U },  /* [CanTpTxNSdu_d61db36a] */
  { /*    62 */         62U },  /* [CanTpTxNSdu_d70f6cb5] */
  { /*    63 */         63U },  /* [CanTpTxNSdu_de4f6c03] */
  { /*    64 */         64U },  /* [CanTpTxNSdu_e1638777] */
  { /*    65 */         65U },  /* [CanTpTxNSdu_f0daeab1] */
  { /*    66 */         66U },  /* [CanTpTxNSdu_f3c4bb5a] */
  { /*    67 */         67U },  /* [CanTpTxNSdu_f5b24442] */
  { /*    68 */         68U },  /* [CanTpTxNSdu_f5e91b1b] */
  { /*    69 */         69U },  /* [CanTpTxNSdu_f8c8b245] */
  { /*    70 */         70U }   /* [CanTpTxNSdu_ff43a8b1] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_CalcBS
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanTp_CalcBSType, CANTP_VAR_NOINIT) CanTp_CalcBS[71];
#define CANTP_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxState
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanTp_RxStateType, CANTP_VAR_NOINIT) CanTp_RxState[71];
#define CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSemaphores
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanTp_TxSemaphoreType, CANTP_VAR_NOINIT) CanTp_TxSemaphores[93];
#define CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxState
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanTp_TxStateType, CANTP_VAR_NOINIT) CanTp_TxState[71];
#define CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 * FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/




