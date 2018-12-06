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
 *            Module: LinTp
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: LinTp_Lcfg.c
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
 *  MISRA
 *********************************************************************************************************************/
/* Disable the following MISRA warnings because they would appear too often for individual suppression. */

/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_MSR_5.1_779 */

/**********************************************************************************************************************
 *  Includes
 *********************************************************************************************************************/
#include "LinIf.h"
#include "PduR_LinTp.h"

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
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
  CONFIGURATION CLASS: LINK
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
  LinTp_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    LinTp_ChannelConfig
  \details
  Element                    Description
  LinTp_SchedChangeNotify
  LinTp_StrictNADCheck       My comment /ActiveEcuC/LinTp/LinTpGlobalConfig/CHNL_def0ca51
*/ 
#define LINTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(LinTp_ChannelConfigType, LINTP_CONST) LinTp_ChannelConfig[5] = {
    /* Index    LinTp_SchedChangeNotify  LinTp_StrictNADCheck        Referable Keys */
  { /*     0 */                   FALSE,                FALSE },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/CHNL_8e3d5be2] */
  { /*     1 */                   FALSE,                FALSE },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/CHNL_08a9294c] */
  { /*     2 */                   FALSE,                FALSE },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/CHNL_45618847] */
  { /*     3 */                   FALSE,                FALSE },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/CHNL_c3f5fae9] */
  { /*     4 */                   FALSE,                FALSE }   /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/CHNL_def0ca51] */
};
#define LINTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinTp_LinIfToLinTpChannel
**********************************************************************************************************************/
/** 
  \var    LinTp_LinIfToLinTpChannel
  \details
  Element    Description
  Channel
*/ 
#define LINTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(LinTp_LinIfToLinTpChannelType, LINTP_CONST) LinTp_LinIfToLinTpChannel[5] = {
    /* Index    Channel                              */
  { /*     0 */ LinIfConf_LinIfChannel_CHNL_8e3d5be2 },
  { /*     1 */ LinIfConf_LinIfChannel_CHNL_08a9294c },
  { /*     2 */ LinIfConf_LinIfChannel_CHNL_45618847 },
  { /*     3 */ LinIfConf_LinIfChannel_CHNL_c3f5fae9 },
  { /*     4 */ LinIfConf_LinIfChannel_CHNL_def0ca51 }
};
#define LINTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinTp_RxNSdu
**********************************************************************************************************************/
/** 
  \var    LinTp_RxNSdu
  \brief  List of all LinTp RxNsdus sorted by their PduId
  \details
  Element            Description
  UpperLayerPduId    RxNSdu external ID (SNV)
  CtrlIdx            the index of the 1:1 relation pointing to LinTp_Ctrl
  Ncr                Ncr timeout in ticks
  NAD                NAD
*/ 
#define LINTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(LinTp_RxNSduType, LINTP_CONST) LinTp_RxNSdu[20] = {
    /* Index    UpperLayerPduId                          CtrlIdx  Ncr      NAD          Referable Keys */
  { /*     0 */ PduRConf_PduRSrcPdu_PduRSrcPdu_5b587d0d,      3U, 0x001FU, 0x13U },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_CCFW_oLIN03_d7124ce9_Rx] */
  { /*     1 */ PduRConf_PduRSrcPdu_PduRSrcPdu_f46eac1f,      3U, 0x001FU, 0x12U },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_DLFW_oLIN03_0f2202e7_Rx] */
  { /*     2 */ PduRConf_PduRSrcPdu_PduRSrcPdu_903f7ca8,      3U, 0x001FU, 0x0EU },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_ELCP1_oLIN03_8611f0b3_Rx] */
  { /*     3 */ PduRConf_PduRSrcPdu_PduRSrcPdu_1e24ebac,      3U, 0x001FU, 0x23U },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_ELCP2_oLIN03_089ef750_Rx] */
  { /*     4 */ PduRConf_PduRSrcPdu_PduRSrcPdu_99747a0b,      2U, 0x001FU, 0x02U },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_FSP1_L1_oLIN00_620b3198_Rx] */
  { /*     5 */ PduRConf_PduRSrcPdu_PduRSrcPdu_afe1a735,      0U, 0x001FU, 0x02U },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_FSP1_L2_oLIN01_9b8306ed_Rx] */
  { /*     6 */ PduRConf_PduRSrcPdu_PduRSrcPdu_55c6efb1,      1U, 0x001FU, 0x02U },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_FSP1_L3_oLIN02_ce2057c9_Rx] */
  { /*     7 */ PduRConf_PduRSrcPdu_PduRSrcPdu_fc6b6d63,      3U, 0x001FU, 0x02U },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_FSP1_L4_oLIN03_b3e26e46_Rx] */
  { /*     8 */ PduRConf_PduRSrcPdu_PduRSrcPdu_377e0be2,      4U, 0x001FU, 0x02U },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_FSP1_L5_oLIN04_e12cfb7b_Rx] */
  { /*     9 */ PduRConf_PduRSrcPdu_PduRSrcPdu_f7959d8f,      2U, 0x001FU, 0x03U },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_FSP2_L1_oLIN00_fbe95799_Rx] */
  { /*    10 */ PduRConf_PduRSrcPdu_PduRSrcPdu_e28df3db,      0U, 0x001FU, 0x03U },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_FSP2_L2_oLIN01_026160ec_Rx] */
  { /*    11 */ PduRConf_PduRSrcPdu_PduRSrcPdu_1b1ab2ff,      1U, 0x001FU, 0x03U },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_FSP2_L3_oLIN02_57c231c8_Rx] */
  { /*    12 */ PduRConf_PduRSrcPdu_PduRSrcPdu_6b1d1eb8,      0U, 0x001FU, 0x04U },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_FSP3_L2_oLIN01_c3efbf2c_Rx] */
  { /*    13 */ PduRConf_PduRSrcPdu_PduRSrcPdu_87b10390,      0U, 0x001FU, 0x05U },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_FSP4_L2_oLIN01_ead4aaaf_Rx] */
  { /*    14 */ PduRConf_PduRSrcPdu_PduRSrcPdu_a0f8dbfb,      2U, 0x001FU, 0x0BU },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_ILCP1_oLIN00_1a12ec88_Rx] */
  { /*    15 */ PduRConf_PduRSrcPdu_PduRSrcPdu_95103cdf,      3U, 0x001FU, 0x20U },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_ILCP2_oLIN03_0d94bad1_Rx] */
  { /*    16 */ PduRConf_PduRSrcPdu_PduRSrcPdu_8389a02c,      2U, 0x001FU, 0x1DU },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_LECM2_oLIN00_2afc07d8_Rx] */
  { /*    17 */ PduRConf_PduRSrcPdu_PduRSrcPdu_3b8e8c69,      2U, 0x001FU, 0x1EU },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_LECMBasic_oLIN00_029997c6_Rx] */
  { /*    18 */ PduRConf_PduRSrcPdu_PduRSrcPdu_0e5523b8,      4U, 0x001FU, 0x10U },  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_RCECS_oLIN04_f9903c90_Rx] */
  { /*    19 */ PduRConf_PduRSrcPdu_PduRSrcPdu_68bca152,      1U, 0x001FU, 0x39U }   /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/SlaveResp_TCP_oLIN02_b3851a34_Rx] */
};
#define LINTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinTp_TxNSdu
**********************************************************************************************************************/
/** 
  \var    LinTp_TxNSdu
  \brief  List of all LinTp TxNsdus sorted by their PduId
  \details
  Element               Description
  AssociatedRxNSduId
  UpperLayerPduId   
  CtrlIdx               the index of the 1:1 relation pointing to LinTp_Ctrl
  Nas                   Nas timeout in ticks
  Ncs                   Ncs timeout in ticks
  NAD                   NAD
*/ 
#define LINTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(LinTp_TxNSduType, LINTP_CONST) LinTp_TxNSdu[25] = {
    /* Index    AssociatedRxNSduId  UpperLayerPduId                                              CtrlIdx  Nas      Ncs      NAD          Comment                                                                    Referable Keys */
  { /*     0 */                 0U,      PduRConf_PduRDestPdu_MasterReq_CCFW_oLIN03_fcabea98_Tx,      3U, 0x0015U, 0x001FU, 0x13U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_CCFW_oLIN03_d7124ce9_Rx]      */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_CCFW_oLIN03_98357989_Tx] */
  { /*     1 */                 1U,      PduRConf_PduRDestPdu_MasterReq_DLFW_oLIN03_c633fea1_Tx,      3U, 0x0015U, 0x001FU, 0x12U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_DLFW_oLIN03_0f2202e7_Rx]      */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_DLFW_oLIN03_40053787_Tx] */
  { /*     2 */                 2U,     PduRConf_PduRDestPdu_MasterReq_ELCP1_oLIN03_18fd3d27_Tx,      3U, 0x0015U, 0x001FU, 0x0EU },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_ELCP1_oLIN03_8611f0b3_Rx]     */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_ELCP1_oLIN03_cbecb6de_Tx] */
  { /*     3 */                 3U,     PduRConf_PduRDestPdu_MasterReq_ELCP2_oLIN03_6e18041a_Tx,      3U, 0x0015U, 0x001FU, 0x23U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_ELCP2_oLIN03_089ef750_Rx]     */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_ELCP2_oLIN03_4563b13d_Tx] */
  { /*     4 */                 4U,   PduRConf_PduRDestPdu_MasterReq_FSP1_L1_oLIN00_e7dc451b_Tx,      2U, 0x0015U, 0x001FU, 0x02U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_FSP1_L1_oLIN00_620b3198_Rx]   */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_FSP1_L1_oLIN00_2de78d2a_Tx] */
  { /*     5 */                 5U,   PduRConf_PduRDestPdu_MasterReq_FSP1_L2_oLIN01_4856dd21_Tx,      0U, 0x0015U, 0x001FU, 0x02U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_FSP1_L2_oLIN01_9b8306ed_Rx]   */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_FSP1_L2_oLIN01_d46fba5f_Tx] */
  { /*     6 */                 6U,   PduRConf_PduRDestPdu_MasterReq_FSP1_L3_oLIN02_63e4d2bd_Tx,      1U, 0x0015U, 0x001FU, 0x02U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_FSP1_L3_oLIN02_ce2057c9_Rx]   */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_FSP1_L3_oLIN02_81cceb7b_Tx] */
  { /*     7 */                 7U,   PduRConf_PduRDestPdu_MasterReq_FSP1_L4_oLIN03_cc32eb14_Tx,      3U, 0x0015U, 0x001FU, 0x02U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_FSP1_L4_oLIN03_b3e26e46_Rx]   */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_FSP1_L4_oLIN03_fc0ed2f4_Tx] */
  { /*     8 */                 8U,   PduRConf_PduRDestPdu_MasterReq_FSP1_L5_oLIN04_34dc6c16_Tx,      4U, 0x0015U, 0x001FU, 0x02U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_FSP1_L5_oLIN04_e12cfb7b_Rx]   */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_FSP1_L5_oLIN04_aec047c9_Tx] */
  { /*     9 */                 9U,   PduRConf_PduRDestPdu_MasterReq_FSP2_L1_oLIN00_158ba8e3_Tx,      2U, 0x0015U, 0x001FU, 0x03U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_FSP2_L1_oLIN00_fbe95799_Rx]   */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_FSP2_L1_oLIN00_b405eb2b_Tx] */
  { /*    10 */                10U,   PduRConf_PduRDestPdu_MasterReq_FSP2_L2_oLIN01_ba0130d9_Tx,      0U, 0x0015U, 0x001FU, 0x03U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_FSP2_L2_oLIN01_026160ec_Rx]   */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_FSP2_L2_oLIN01_4d8ddc5e_Tx] */
  { /*    11 */                11U,   PduRConf_PduRDestPdu_MasterReq_FSP2_L3_oLIN02_91b33f45_Tx,      1U, 0x0015U, 0x001FU, 0x03U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_FSP2_L3_oLIN02_57c231c8_Rx]   */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_FSP2_L3_oLIN02_182e8d7a_Tx] */
  { /*    12 */                12U,   PduRConf_PduRDestPdu_MasterReq_FSP3_L2_oLIN01_5d1c964e_Tx,      0U, 0x0015U, 0x001FU, 0x04U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_FSP3_L2_oLIN01_c3efbf2c_Rx]   */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_FSP3_L2_oLIN01_8c03039e_Tx] */
  { /*    13 */                13U,   PduRConf_PduRDestPdu_MasterReq_FSP4_L2_oLIN01_85dfed68_Tx,      0U, 0x0015U, 0x001FU, 0x05U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_FSP4_L2_oLIN01_ead4aaaf_Rx]   */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_FSP4_L2_oLIN01_a538161d_Tx] */
  { /*    14 */                14U,     PduRConf_PduRDestPdu_MasterReq_ILCP1_oLIN00_0bff65a0_Tx,      2U, 0x0015U, 0x001FU, 0x0BU },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_ILCP1_oLIN00_1a12ec88_Rx]     */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_ILCP1_oLIN00_57efaae5_Tx] */
  { /*    15 */                15U,     PduRConf_PduRDestPdu_MasterReq_ILCP2_oLIN03_cddbb9d5_Tx,      3U, 0x0015U, 0x001FU, 0x20U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_ILCP2_oLIN03_0d94bad1_Rx]     */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_ILCP2_oLIN03_4069fcbc_Tx] */
  { /*    16 */                16U,     PduRConf_PduRDestPdu_MasterReq_LECM2_oLIN00_85a61f49_Tx,      2U, 0x0015U, 0x001FU, 0x1DU },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_LECM2_oLIN00_2afc07d8_Rx]     */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_LECM2_oLIN00_670141b5_Tx] */
  { /*    17 */                17U, PduRConf_PduRDestPdu_MasterReq_LECMBasic_oLIN00_33465f21_Tx,      2U, 0x0015U, 0x001FU, 0x1EU },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_LECMBasic_oLIN00_029997c6_Rx] */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_LECMBasic_oLIN00_16bdebb7_Tx] */
  { /*    18 */                18U,     PduRConf_PduRDestPdu_MasterReq_RCECS_oLIN04_dc3c974a_Tx,      4U, 0x0015U, 0x001FU, 0x10U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_RCECS_oLIN04_f9903c90_Rx]     */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_RCECS_oLIN04_b46d7afd_Tx] */
  { /*    19 */                19U,       PduRConf_PduRDestPdu_MasterReq_TCP_oLIN02_741cea1f_Tx,      1U, 0x0015U, 0x001FU, 0x39U },  /* [LinTpConf_LinTpRxNSdu_SlaveResp_TCP_oLIN02_b3851a34_Rx]       */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_TCP_oLIN02_4b422897_Tx] */
  { /*    20 */               255U,           PduRConf_PduRDestPdu_MasterReq_oLIN00_3234fe1b_Tx,      2U, 0x0015U, 0x001FU, 0x7EU },  /* [No referenced RxNSdu]                                         */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_oLIN00_4a2bb011_Tx] */
  { /*    21 */               255U,           PduRConf_PduRDestPdu_MasterReq_oLIN01_eb5b5f1c_Tx,      0U, 0x0015U, 0x001FU, 0x7EU },  /* [No referenced RxNSdu]                                         */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_oLIN01_3d2c8087_Tx] */
  { /*    22 */               255U,           PduRConf_PduRDestPdu_MasterReq_oLIN02_5b9aba54_Tx,      1U, 0x0015U, 0x001FU, 0x7EU },  /* [No referenced RxNSdu]                                         */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_oLIN02_a425d13d_Tx] */
  { /*    23 */               255U,           PduRConf_PduRDestPdu_MasterReq_oLIN03_82f51b53_Tx,      3U, 0x0015U, 0x001FU, 0x7EU },  /* [No referenced RxNSdu]                                         */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_oLIN03_d322e1ab_Tx] */
  { /*    24 */               255U,           PduRConf_PduRDestPdu_MasterReq_oLIN04_e1687685_Tx,      4U, 0x0015U, 0x001FU, 0x7EU }   /* [No referenced RxNSdu]                                         */  /* [/ActiveEcuC/LinTp/LinTpGlobalConfig/MasterReq_oLIN04_4d467408_Tx] */
};
#define LINTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinTp_Ctrl
**********************************************************************************************************************/
#define LINTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uLinTp_CtrlType, LINTP_VAR_NOINIT) LinTp_Ctrl;  /* PRQA S 0759 */  /* MD_CSL_18.4 */  /* Data structure per LinIf channel */
  /* Index        Referable Keys  */
  /*     0 */  /* [CHNL_8e3d5be2] */
  /*     1 */  /* [CHNL_08a9294c] */
  /*     2 */  /* [CHNL_45618847] */
  /*     3 */  /* [CHNL_c3f5fae9] */
  /*     4 */  /* [CHNL_def0ca51] */

#define LINTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/





