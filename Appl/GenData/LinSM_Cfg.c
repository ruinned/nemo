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
 *            Module: LinSM
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: LinSM_Cfg.c
 *   Generation Time: 2018-11-27 18:44:39
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

#define LINSM_CFG_SOURCE

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_CSL_0779 */

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "LinSM_Cfg.h"

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
  LinSM_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    LinSM_ChannelConfig
  \details
  Element              Description
  ComMChannelHandle
*/ 
#define LINSM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(LinSM_ChannelConfigType, LINSM_CONST) LinSM_ChannelConfig[5] = {
    /* Index    ComMChannelHandle                             Referable Keys */
  { /*     0 */ ComMConf_ComMChannel_CN_LIN00_2cd9a7df },  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_45618847] */
  { /*     1 */ ComMConf_ComMChannel_CN_LIN01_5bde9749 },  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_8e3d5be2] */
  { /*     2 */ ComMConf_ComMChannel_CN_LIN04_2bb463c6 },  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_def0ca51] */
  { /*     3 */ ComMConf_ComMChannel_CN_LIN02_c2d7c6f3 },  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_08a9294c] */
  { /*     4 */ ComMConf_ComMChannel_CN_LIN03_b5d0f665 }   /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_c3f5fae9] */
};
#define LINSM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_ComMToLinSMChannel
**********************************************************************************************************************/
#define LINSM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(LinSM_ComMToLinSMChannelType, LINSM_CONST) LinSM_ComMToLinSMChannel[10] = {
  /* Index    ComMToLinSMChannel               Referable Keys */
  /*     0 */ LINSM_NO_COMMTOLINSMCHANNEL,  /* [No LinSM Channel] */
  /*     1 */ LINSM_NO_COMMTOLINSMCHANNEL,  /* [No LinSM Channel] */
  /*     2 */ LINSM_NO_COMMTOLINSMCHANNEL,  /* [No LinSM Channel] */
  /*     3 */ LINSM_NO_COMMTOLINSMCHANNEL,  /* [No LinSM Channel] */
  /*     4 */ LINSM_NO_COMMTOLINSMCHANNEL,  /* [No LinSM Channel] */
  /*     5 */                          0U,  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN00_2cd9a7df] */
  /*     6 */                          1U,  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN01_5bde9749] */
  /*     7 */                          3U,  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN02_c2d7c6f3] */
  /*     8 */                          4U,  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN03_b5d0f665] */
  /*     9 */                          2U   /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN04_2bb463c6] */
};
#define LINSM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_ComState
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uLinSM_ComStateType, LINSM_VAR_NOINIT) LinSM_ComState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_45618847] */
  /*     1 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_8e3d5be2] */
  /*     2 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_def0ca51] */
  /*     3 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_08a9294c] */
  /*     4 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_c3f5fae9] */

#define LINSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_ConfirmationTimer
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uLinSM_ConfirmationTimerType, LINSM_VAR_NOINIT) LinSM_ConfirmationTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_45618847] */
  /*     1 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_8e3d5be2] */
  /*     2 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_def0ca51] */
  /*     3 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_08a9294c] */
  /*     4 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_c3f5fae9] */

#define LINSM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_Initialized
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(LinSM_InitializedType, LINSM_VAR_ZERO_INIT) LinSM_Initialized = FALSE;
#define LINSM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_NegativeConfirmation
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uLinSM_NegativeConfirmationType, LINSM_VAR_NOINIT) LinSM_NegativeConfirmation;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_45618847] */
  /*     1 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_8e3d5be2] */
  /*     2 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_def0ca51] */
  /*     3 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_08a9294c] */
  /*     4 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_c3f5fae9] */

#define LINSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_RequestedComMode
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uLinSM_RequestedComModeType, LINSM_VAR_NOINIT) LinSM_RequestedComMode;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_45618847] */
  /*     1 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_8e3d5be2] */
  /*     2 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_def0ca51] */
  /*     3 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_08a9294c] */
  /*     4 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_c3f5fae9] */

#define LINSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_WakeUpRetryCounter
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uLinSM_WakeUpRetryCounterType, LINSM_VAR_NOINIT) LinSM_WakeUpRetryCounter;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_45618847] */
  /*     1 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_8e3d5be2] */
  /*     2 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_def0ca51] */
  /*     3 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_08a9294c] */
  /*     4 */  /* [/ActiveEcuC/LinSM/LinSMConfigSet/CHNL_c3f5fae9] */

#define LINSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/


/**********************************************************************************************************************
  END OF FILE: LinSM_Cfg.c
**********************************************************************************************************************/

