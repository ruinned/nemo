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
 *            Module: Nm
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Nm_Cfg.c
 *   Generation Time: 2018-11-22 03:14:19
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


/* PRQA S 0857 EOF */ /* MD_MSR_1.1 */
#define NM_CFG_SOURCE


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Nm_Cfg.h"


#include "ComM.h"
#include "CanNm.h"
#include "J1939Nm.h"

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 **********************************************************************************************************************/
/* (NM_SYSTONMCHIND == STD_ON) If the number of system channels is not equal to the number of NM channels,
 * channel indirection is needed. Otherwise, the channel index is equals to the network handler. */
# if ( NM_SYSTONMCHIND == STD_ON )
#  define NM_CHANNEL_IDX                          Nm_GetSysToNmChInd(nmNetworkHandle)
# else
#  define NM_CHANNEL_IDX                          nmNetworkHandle
# endif

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
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
  Nm_CarWakeUpCallbackFctPtr
**********************************************************************************************************************/
/** 
  \var    Nm_CarWakeUpCallbackFctPtr
  \brief  Car Wake Up Callback
*/ 
#define NM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Nm_CallbackFunction, NM_CONST) Nm_CarWakeUpCallbackFctPtr = NULL_PTR;
#define NM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Nm_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    Nm_ChannelConfig
  \brief  Structure for channel specific configuration parameters
  \details
  Element               Description
  NmChannelId       
  NmFunctionTableIdx    the index of the 1:1 relation pointing to Nm_NmFunctionTable
  PduRxIndication   
*/ 
#define NM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Nm_ChannelConfigType, NM_CONST) Nm_ChannelConfig[5] = {
    /* Index    NmChannelId                                      NmFunctionTableIdx  PduRxIndication        Referable Keys */
  { /*     0 */      ComMConf_ComMChannel_CN_Backbone2_78967e2c,                 0U, NULL_PTR        },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone2_78967e2c] */
  { /*     1 */      ComMConf_ComMChannel_CN_CabSubnet_9ea693f1,                 0U, NULL_PTR        },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_CabSubnet_9ea693f1] */
  { /*     2 */ ComMConf_ComMChannel_CN_SecuritySubnet_e7a0ee54,                 0U, NULL_PTR        },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_SecuritySubnet_e7a0ee54] */
  { /*     3 */ ComMConf_ComMChannel_CN_Backbone1J1939_0b1f4bae,                 1U, NULL_PTR        },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone1J1939_0b1f4bae] */
  { /*     4 */         ComMConf_ComMChannel_CN_FMSNet_fce1aae5,                 1U, NULL_PTR        }   /* [/ActiveEcuC/ComM/ComMConfigSet/CN_FMSNet_fce1aae5] */
};
#define NM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Nm_NmFunctionTable
**********************************************************************************************************************/
/** 
  \var    Nm_NmFunctionTable
  \details
  Element                   Description
  GetLocalNodeIdentifier
  GetNodeIdentifier     
  GetPduData            
  GetState              
  NetworkRelease        
  NetworkRequest        
  PassiveStartUp        
*/ 
#define NM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Nm_NmFunctionTableType, NM_CONST) Nm_NmFunctionTable[2] = {
    /* Index    GetLocalNodeIdentifier          GetNodeIdentifier          GetPduData          GetState          NetworkRelease          NetworkRequest          PassiveStartUp                Referable Keys */
  { /*     0 */ CanNm_GetLocalNodeIdentifier  , CanNm_GetNodeIdentifier  , CanNm_GetPduData  , CanNm_GetState  , CanNm_NetworkRelease  , CanNm_NetworkRequest  , CanNm_PassiveStartUp   },  /* [CanNm] */
  { /*     1 */ J1939Nm_GetLocalNodeIdentifier, J1939Nm_GetNodeIdentifier, J1939Nm_GetPduData, J1939Nm_GetState, J1939Nm_NetworkRelease, J1939Nm_NetworkRequest, J1939Nm_PassiveStartUp }   /* [J1939Nm] */
};
#define NM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Nm_SysToNmChInd
**********************************************************************************************************************/
/** 
  \var    Nm_SysToNmChInd
  \brief  Channel indirection: System Channel handle to NM channel handle
*/ 
#define NM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Nm_SysToNmChIndType, NM_CONST) Nm_SysToNmChInd[10] = {
  /* Index     SysToNmChInd        */
  /*     0 */                  0U,
  /*     1 */                  1U,
  /*     2 */                  2U,
  /*     3 */                  3U,
  /*     4 */                  4U,
  /*     5 */  NM_NO_SYSTONMCHIND,
  /*     6 */  NM_NO_SYSTONMCHIND,
  /*     7 */  NM_NO_SYSTONMCHIND,
  /*     8 */  NM_NO_SYSTONMCHIND,
  /*     9 */  NM_NO_SYSTONMCHIND
};
#define NM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA
**********************************************************************************************************************/



#if ( NM_USE_INIT_POINTER == STD_ON )
# define NM_START_SEC_VAR_INIT_UNSPECIFIED
# include "MemMap.h"    /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Pointer to Postbuild configuration */
P2CONST(Nm_ConfigType, NM_VAR_INIT, NM_CONST) Nm_ConfigPtr = NULL_PTR;

# define NM_STOP_SEC_VAR_INIT_UNSPECIFIED
# include "MemMap.h"    /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

 

/**********************************************************************************************************************
 *  END OF FILE: Nm_Cfg.c
 *********************************************************************************************************************/

