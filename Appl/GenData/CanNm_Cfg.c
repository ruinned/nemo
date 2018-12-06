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
 *            Module: CanNm
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanNm_Cfg.c
 *   Generation Time: 2018-11-22 20:14:47
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


#define CANNM_CFG_SOURCE

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_CSL_0779 */

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "CanNm_Cfg.h"

#include "PduR_Cfg.h"

#include "CanIf_Cfg.h"

#include "Nm.h"

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

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



#define CANNM_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* NM State */
VAR( Nm_StateType, CANNM_VAR_INIT ) CanNm_NmState[CANNM_NUMBER_OF_CANNM_CHANNELS] =
{
  NM_STATE_UNINIT, 
  NM_STATE_UNINIT, 
  NM_STATE_UNINIT
};

#define CANNM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanNm_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    CanNm_ChannelConfig
  \details
  Element               Description
  TimeoutTime           Timeout for the NM messages [ms].
  NodeIdEnabled         Determines if Node Ids are enabled or not
  ChannelId             Channel ID configured for the respective instance of the NM.
  MsgCycleTime          Period of a NM message [ms]. It determines the periodic rate in the periodic transmission mode.
  MsgTimeoutTime        Transmission Timeout [ms] of NM message. If there is no transmission confirmation by the CAN Interface within this timeout, the CAN NM module shall give an error notification.
  PduNidPosition        Node ID Position in the PDU
  RemoteSleepIndTime    Timeout for Remote Sleep Indication [ms].
  RepeatMessageTime     Timeout for Repeat Message State [ms].
  WaitBusSleepTime      Timeout for bus calm down phase [ms].
*/ 
#define CANNM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanNm_ChannelConfigType, CANNM_CONST) CanNm_ChannelConfig[3] = {
    /* Index    TimeoutTime  NodeIdEnabled  ChannelId                                          MsgCycleTime  MsgTimeoutTime  PduNidPosition    RemoteSleepIndTime  RepeatMessageTime  WaitBusSleepTime        Referable Keys */
  { /*     0 */       1000U,          TRUE,      NmConf_NmChannelConfig_CN_Backbone2_78967e2c,          40U,            12U, CANNM_PDU_BYTE_0,                 0U,               60U,             151U },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone2_78967e2c] */
  { /*     1 */       1000U,         FALSE,      NmConf_NmChannelConfig_CN_CabSubnet_9ea693f1,          40U,            12U, CANNM_PDU_OFF   ,                 0U,               60U,             151U },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_CabSubnet_9ea693f1] */
  { /*     2 */         12U,         FALSE, NmConf_NmChannelConfig_CN_SecuritySubnet_e7a0ee54,           4U,             3U, CANNM_PDU_OFF   ,                 0U,               12U,              13U }   /* [/ActiveEcuC/ComM/ComMConfigSet/CN_SecuritySubnet_e7a0ee54] */
};
#define CANNM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_PbChannelConfig
**********************************************************************************************************************/
/** 
  \var    CanNm_PbChannelConfig
  \details
  Element                           Description
  MsgCycleOffset                
  NodeId                        
  RxMessageDataEndIdx               the end index of the 0:n relation pointing to CanNm_RxMessageData
  RxMessageDataLength               the number of relations pointing to CanNm_RxMessageData
  RxMessageDataStartIdx             the start index of the 0:n relation pointing to CanNm_RxMessageData
  RxMessageData_NIDIdx              the index of the 0:1 relation pointing to CanNm_RxMessageData
  RxMessageData_UserDataEndIdx      the end index of the 0:n relation pointing to CanNm_RxMessageData
  RxMessageData_UserDataLength      the number of relations pointing to CanNm_RxMessageData
  RxMessageData_UserDataStartIdx    the start index of the 0:n relation pointing to CanNm_RxMessageData
  TxMessageDataEndIdx               the end index of the 0:n relation pointing to CanNm_TxMessageData
  TxMessageDataLength               the number of relations pointing to CanNm_TxMessageData
  TxMessageDataStartIdx             the start index of the 0:n relation pointing to CanNm_TxMessageData
  TxMessageData_NIDIdx              the index of the 0:1 relation pointing to CanNm_TxMessageData
  TxMessageData_UserDataEndIdx      the end index of the 0:n relation pointing to CanNm_TxMessageData
  TxMessageData_UserDataLength      the number of relations pointing to CanNm_TxMessageData
  TxMessageData_UserDataStartIdx    the start index of the 0:n relation pointing to CanNm_TxMessageData
  TxPduId                       
*/ 
#define CANNM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanNm_PbChannelConfigType, CANNM_CONST) CanNm_PbChannelConfig[3] = {
    /* Index    MsgCycleOffset  NodeId  RxMessageDataEndIdx  RxMessageDataLength  RxMessageDataStartIdx  RxMessageData_NIDIdx                            RxMessageData_UserDataEndIdx                            RxMessageData_UserDataLength  RxMessageData_UserDataStartIdx                            TxMessageDataEndIdx  TxMessageDataLength  TxMessageDataStartIdx  TxMessageData_NIDIdx                            TxMessageData_UserDataEndIdx                            TxMessageData_UserDataLength  TxMessageData_UserDataStartIdx                            TxPduId                                                                   Referable Keys */
  { /*     0 */             0U,    64U,                  1U,                  1U,                    0U,                                             0U, CANNM_NO_RXMESSAGEDATA_USERDATAENDIDXOFPBCHANNELCONFIG,                           0U, CANNM_NO_RXMESSAGEDATA_USERDATASTARTIDXOFPBCHANNELCONFIG,                  1U,                  1U,                    0U,                                             0U, CANNM_NO_TXMESSAGEDATA_USERDATAENDIDXOFPBCHANNELCONFIG,                           0U, CANNM_NO_TXMESSAGEDATA_USERDATASTARTIDXOFPBCHANNELCONFIG,      CanIfConf_CanIfTxPduCfg_NmAsr_CIOM_BB2_oBackbone2_9b0338b4_Tx },  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/Backbone2_CAN_f911ddd5] */
  { /*     1 */             0U,    64U,                  2U,                  1U,                    1U, CANNM_NO_RXMESSAGEDATA_NIDIDXOFPBCHANNELCONFIG,                                                     2U,                           1U,                                                       1U,                  2U,                  1U,                    1U, CANNM_NO_TXMESSAGEDATA_NIDIDXOFPBCHANNELCONFIG,                                                     2U,                           1U,                                                       1U,      CanIfConf_CanIfTxPduCfg_NmAsr_CIOM_Cab_oCabSubnet_153d3c7d_Tx },  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CabSubnet_CAN_1a3a8edc] */
  { /*     2 */             0U,    64U,                  3U,                  1U,                    2U, CANNM_NO_RXMESSAGEDATA_NIDIDXOFPBCHANNELCONFIG,                                                     3U,                           1U,                                                       2U,                  3U,                  1U,                    2U, CANNM_NO_TXMESSAGEDATA_NIDIDXOFPBCHANNELCONFIG,                                                     3U,                           1U,                                                       2U, CanIfConf_CanIfTxPduCfg_NmAsr_CIOM_Sec_oSecuritySubnet_dae88b7d_Tx }   /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/SecuritySubnet_CAN_c9b1ce65] */
};
#define CANNM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_SysToNmChInd
**********************************************************************************************************************/
/** 
  \var    CanNm_SysToNmChInd
  \brief  Channel indirection: System Channel handle to NM channel handle
*/ 
#define CANNM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanNm_SysToNmChIndType, CANNM_CONST) CanNm_SysToNmChInd[10] = {
  /* Index    SysToNmChInd           */
  /*     0 */                    0U,
  /*     1 */                    1U,
  /*     2 */                    2U,
  /*     3 */ CANNM_NO_SYSTONMCHIND,
  /*     4 */ CANNM_NO_SYSTONMCHIND,
  /*     5 */ CANNM_NO_SYSTONMCHIND,
  /*     6 */ CANNM_NO_SYSTONMCHIND,
  /*     7 */ CANNM_NO_SYSTONMCHIND,
  /*     8 */ CANNM_NO_SYSTONMCHIND,
  /*     9 */ CANNM_NO_SYSTONMCHIND
};
#define CANNM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_CommState
**********************************************************************************************************************/
/** 
  \var    CanNm_CommState
  \brief  Internal state for the application's need for communication.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_CommStateUType, CANNM_VAR_NOINIT) CanNm_CommState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone2_78967e2c] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_CabSubnet_9ea693f1] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_SecuritySubnet_e7a0ee54] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_CoordReadyToSleepState
**********************************************************************************************************************/
/** 
  \var    CanNm_CoordReadyToSleepState
  \brief  State for Rx of Coordinator Sleep Ready Bit:
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_CoordReadyToSleepStateUType, CANNM_VAR_NOINIT) CanNm_CoordReadyToSleepState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone2_78967e2c] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_CabSubnet_9ea693f1] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_SecuritySubnet_e7a0ee54] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgConfirmationFlag
**********************************************************************************************************************/
/** 
  \var    CanNm_MsgConfirmationFlag
  \brief  Message Confirmation Flag
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_MsgConfirmationFlagUType, CANNM_VAR_NOINIT) CanNm_MsgConfirmationFlag;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone2_78967e2c] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_CabSubnet_9ea693f1] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_SecuritySubnet_e7a0ee54] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgIndicationFlag
**********************************************************************************************************************/
/** 
  \var    CanNm_MsgIndicationFlag
  \brief  Message Indication Flag
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_MsgIndicationFlagUType, CANNM_VAR_NOINIT) CanNm_MsgIndicationFlag;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone2_78967e2c] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_CabSubnet_9ea693f1] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_SecuritySubnet_e7a0ee54] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgTimeoutTimer
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_MsgTimeoutTimerUType, CANNM_VAR_NOINIT) CanNm_MsgTimeoutTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone2_78967e2c] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_CabSubnet_9ea693f1] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_SecuritySubnet_e7a0ee54] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgTimer
**********************************************************************************************************************/
/** 
  \var    CanNm_MsgTimer
  \brief  Timer for NM message transmission.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_MsgTimerUType, CANNM_VAR_NOINIT) CanNm_MsgTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone2_78967e2c] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_CabSubnet_9ea693f1] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_SecuritySubnet_e7a0ee54] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_NetworkRestartFlag
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_NetworkRestartFlagUType, CANNM_VAR_NOINIT) CanNm_NetworkRestartFlag;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone2_78967e2c] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_CabSubnet_9ea693f1] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_SecuritySubnet_e7a0ee54] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_RepeatMsgTimer
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_RepeatMsgTimerUType, CANNM_VAR_NOINIT) CanNm_RepeatMsgTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone2_78967e2c] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_CabSubnet_9ea693f1] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_SecuritySubnet_e7a0ee54] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_RxMessageData
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_RxMessageDataType, CANNM_VAR_NOINIT) CanNm_RxMessageData[3];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/Backbone2_CAN_f911ddd5, /ActiveEcuC/CanNm/CanNmGlobalConfig/Backbone2_CAN_f911ddd5_NID] */
  /*     1 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CabSubnet_CAN_1a3a8edc, /ActiveEcuC/CanNm/CanNmGlobalConfig/CabSubnet_CAN_1a3a8edc_UserData] */
  /*     2 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/SecuritySubnet_CAN_c9b1ce65, /ActiveEcuC/CanNm/CanNmGlobalConfig/SecuritySubnet_CAN_c9b1ce65_UserData] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TimeoutTimer
**********************************************************************************************************************/
/** 
  \var    CanNm_TimeoutTimer
  \brief  Timer for NM Algorithm.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_TimeoutTimerUType, CANNM_VAR_NOINIT) CanNm_TimeoutTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone2_78967e2c] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_CabSubnet_9ea693f1] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_SecuritySubnet_e7a0ee54] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TxControlState
**********************************************************************************************************************/
/** 
  \var    CanNm_TxControlState
  \brief  Message transmission control state.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_TxControlStateUType, CANNM_VAR_NOINIT) CanNm_TxControlState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone2_78967e2c] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_CabSubnet_9ea693f1] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_SecuritySubnet_e7a0ee54] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TxControlStateRequest
**********************************************************************************************************************/
/** 
  \var    CanNm_TxControlStateRequest
  \brief  Message transmission control state request.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_TxControlStateRequestUType, CANNM_VAR_NOINIT) CanNm_TxControlStateRequest;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone2_78967e2c] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_CabSubnet_9ea693f1] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_SecuritySubnet_e7a0ee54] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TxMessageData
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_TxMessageDataType, CANNM_VAR_NOINIT) CanNm_TxMessageData[3];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/Backbone2_CAN_f911ddd5, /ActiveEcuC/CanNm/CanNmGlobalConfig/Backbone2_CAN_f911ddd5_NID] */
  /*     1 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/CabSubnet_CAN_1a3a8edc, /ActiveEcuC/CanNm/CanNmGlobalConfig/CabSubnet_CAN_1a3a8edc_UserData] */
  /*     2 */  /* [/ActiveEcuC/CanNm/CanNmGlobalConfig/SecuritySubnet_CAN_c9b1ce65, /ActiveEcuC/CanNm/CanNmGlobalConfig/SecuritySubnet_CAN_c9b1ce65_UserData] */

#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_WaitBusSleepTimer
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanNm_WaitBusSleepTimerUType, CANNM_VAR_NOINIT) CanNm_WaitBusSleepTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone2_78967e2c] */
  /*     1 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_CabSubnet_9ea693f1] */
  /*     2 */  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_SecuritySubnet_e7a0ee54] */

#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  END OF FILE: CanNm_Cfg.c
**********************************************************************************************************************/

