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
 *            Module: EcuM
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: EcuM_Cfg.c
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




/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0310 EOF */ /* MD_CSL_0310 */
#include "EcuM_Cbk.h"

#define ECUM_PRIVATE_CFG_PARTLY_INCLUDE
#include "EcuM_PrivateCfg.h"
#undef ECUM_PRIVATE_CFG_PARTLY_INCLUDE /* PRQA S 0841 */ /* MD_EcuM_0841 */

#if((ECUM_CHANNELOFWAKEUPSOURCELIST == STD_ON) ||(ECUM_PNCOFCOMMPNCS == STD_ON) || (ECUM_SUPPORT_COMM == STD_ON))
#include "ComM.h"
#endif

#if defined(STATIC)
#else
# define STATIC static
#endif


/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  LOCAL DATA
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
  EcuM_DriverInitOne
**********************************************************************************************************************/
/** 
  \var    EcuM_DriverInitOne
  \details
  Element     Description
  Function
*/ 
#define ECUM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(EcuM_DriverInitOneType, ECUM_CONST) EcuM_DriverInitOne[1] = {
    /* Index    Function              */
  { /*     0 */ EcuM_AL_DriverInitOne }
};
#define ECUM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  EcuM_DriverRestartList
**********************************************************************************************************************/
/** 
  \var    EcuM_DriverRestartList
  \details
  Element     Description
  Function
*/ 
#define ECUM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(EcuM_DriverRestartListType, ECUM_CONST) EcuM_DriverRestartList[1] = {
    /* Index    Function                  */
  { /*     0 */ EcuM_AL_DriverRestartList }
};
#define ECUM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  EcuM_WakeupSourceList
**********************************************************************************************************************/
/** 
  \var    EcuM_WakeupSourceList
  \brief  Contains all parameters configured for Wakeup Sources
  \details
  Element    Description
  Channel    Mapped ComM channel number - 255 if no ComM channel is assigned.
*/ 
#define ECUM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(EcuM_WakeupSourceListType, ECUM_CONST) EcuM_WakeupSourceList[15] = {
    /* Index    Channel                                                Comment                                    Referable Keys */
  { /*     0 */ 255                                             },  /* [ECUM_WKSOURCE_POWER]          */  /* [/EcuM/EcuM/EcuMConfiguration/EcuMCommonConfiguration/ECUM_WKSOURCE_POWER, ECUM_WKSOURCE_POWER] */
  { /*     1 */ 255                                             },  /* [ECUM_WKSOURCE_RESET]          */  /* [/EcuM/EcuM/EcuMConfiguration/EcuMCommonConfiguration/ECUM_WKSOURCE_RESET, ECUM_WKSOURCE_RESET] */
  { /*     2 */ 255                                             },  /* [ECUM_WKSOURCE_INTERNAL_RESET] */  /* [/EcuM/EcuM/EcuMConfiguration/EcuMCommonConfiguration/ECUM_WKSOURCE_INTERNAL_RESET, ECUM_WKSOURCE_INTERNAL_RESET] */
  { /*     3 */ 255                                             },  /* [ECUM_WKSOURCE_INTERNAL_WDG]   */  /* [/EcuM/EcuM/EcuMConfiguration/EcuMCommonConfiguration/ECUM_WKSOURCE_INTERNAL_WDG, ECUM_WKSOURCE_INTERNAL_WDG] */
  { /*     4 */ 255                                             },  /* [ECUM_WKSOURCE_EXTERNAL_WDG]   */  /* [/EcuM/EcuM/EcuMConfiguration/EcuMCommonConfiguration/ECUM_WKSOURCE_EXTERNAL_WDG, ECUM_WKSOURCE_EXTERNAL_WDG] */
  { /*     5 */ ComMConf_ComMChannel_CN_Backbone2_78967e2c      },  /* [CN_Backbone2_78967e2c]        */  /* [/EcuM/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_Backbone2_78967e2c, CN_Backbone2_78967e2c] */
  { /*     6 */ ComMConf_ComMChannel_CN_CabSubnet_9ea693f1      },  /* [CN_CabSubnet_9ea693f1]        */  /* [/EcuM/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_CabSubnet_9ea693f1, CN_CabSubnet_9ea693f1] */
  { /*     7 */ ComMConf_ComMChannel_CN_SecuritySubnet_e7a0ee54 },  /* [CN_SecuritySubnet_e7a0ee54]   */  /* [/EcuM/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_SecuritySubnet_e7a0ee54, CN_SecuritySubnet_e7a0ee54] */
  { /*     8 */ ComMConf_ComMChannel_CN_Backbone1J1939_0b1f4bae },  /* [CN_Backbone1J1939_0b1f4bae]   */  /* [/EcuM/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_Backbone1J1939_0b1f4bae, CN_Backbone1J1939_0b1f4bae] */
  { /*     9 */ ComMConf_ComMChannel_CN_FMSNet_fce1aae5         },  /* [CN_FMSNet_fce1aae5]           */  /* [/EcuM/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_FMSNet_fce1aae5, CN_FMSNet_fce1aae5] */
  { /*    10 */ ComMConf_ComMChannel_CN_LIN00_2cd9a7df          },  /* [CN_LIN00_2cd9a7df]            */  /* [/EcuM/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_LIN00_2cd9a7df, CN_LIN00_2cd9a7df] */
  { /*    11 */ ComMConf_ComMChannel_CN_LIN01_5bde9749          },  /* [CN_LIN01_5bde9749]            */  /* [/EcuM/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_LIN01_5bde9749, CN_LIN01_5bde9749] */
  { /*    12 */ ComMConf_ComMChannel_CN_LIN02_c2d7c6f3          },  /* [CN_LIN02_c2d7c6f3]            */  /* [/EcuM/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_LIN02_c2d7c6f3, CN_LIN02_c2d7c6f3] */
  { /*    13 */ ComMConf_ComMChannel_CN_LIN03_b5d0f665          },  /* [CN_LIN03_b5d0f665]            */  /* [/EcuM/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_LIN03_b5d0f665, CN_LIN03_b5d0f665] */
  { /*    14 */ ComMConf_ComMChannel_CN_LIN04_2bb463c6          }   /* [CN_LIN04_2bb463c6]            */  /* [/EcuM/EcuM/EcuMConfiguration/EcuMCommonConfiguration/CN_LIN04_2bb463c6, CN_LIN04_2bb463c6] */
};
#define ECUM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  EcuM_ModuleState
**********************************************************************************************************************/
#define ECUM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(EcuM_StateType, ECUM_VAR_NOINIT) EcuM_ModuleState;
#define ECUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/



