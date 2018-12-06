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
 *            Module: ComM
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: ComM_Lcfg.c
 *   Generation Time: 2018-11-22 20:14:49
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


#define CCL_ASR_COMM_LCFG_MODULE

/**********************************************************************************************************************
   LOCAL MISRA / PCLINT JUSTIFICATION
**********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_MSR_5.1_779 */
/* PRQA S 0777 EOF */ /* MD_MSR_5.1_777 */
/* PRQA S 3453 EOF */ /* MD_MSR_19.7    */

/* -----------------------------------------------------------------------------
    &&&~ INCLUDES
 ----------------------------------------------------------------------------- */

#include "ComM_Private_Cfg.h"
#include "CanSM_ComM.h"
#include "CanSM.h"
#include "LinSM.h"


#include "Rte_ComM.h"

#if defined( COMM_LOCAL )
#else
# define COMM_LOCAL static
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
  ComM_Channel
**********************************************************************************************************************/
/** 
  \var    ComM_Channel
  \brief  Contains PreCompile configuration parameters of channels
  \details
  Element          Description
  BusType          The channel bus type
  J1939Support     Decides if the channel supports J1939
  NmSupport        Decides if the channel has NmType FULL or PASSIVE
  SilentSupport    Decides if the channel supports Silent mode (TRUE if ETH or CAN without J1939NM and Nm or NmLightSilentDuration)
  NmType           The Network Management type fo the channel
  WakeupState      Target channel state after a Passive Wake-up
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(ComM_ChannelType, COMM_CONST) ComM_Channel[10] = {
    /* Index    BusType            J1939Support  NmSupport  SilentSupport  NmType                     WakeupState                            Referable Keys */
  { /*     0 */ COMM_BUS_TYPE_CAN,        FALSE,      TRUE,          TRUE, COMM_FULL_NMTYPEOFCHANNEL, COMM_FULL_COM_READY_SLEEP       },  /* [ComMChannel_0] */
  { /*     1 */ COMM_BUS_TYPE_CAN,        FALSE,      TRUE,          TRUE, COMM_FULL_NMTYPEOFCHANNEL, COMM_FULL_COM_READY_SLEEP       },  /* [ComMChannel_1] */
  { /*     2 */ COMM_BUS_TYPE_CAN,        FALSE,      TRUE,          TRUE, COMM_FULL_NMTYPEOFCHANNEL, COMM_FULL_COM_READY_SLEEP       },  /* [ComMChannel_2] */
  { /*     3 */ COMM_BUS_TYPE_CAN,         TRUE,      TRUE,         FALSE, COMM_FULL_NMTYPEOFCHANNEL, COMM_FULL_COM_READY_SLEEP       },  /* [ComMChannel_3] */
  { /*     4 */ COMM_BUS_TYPE_CAN,         TRUE,      TRUE,         FALSE, COMM_FULL_NMTYPEOFCHANNEL, COMM_FULL_COM_READY_SLEEP       },  /* [ComMChannel_4] */
  { /*     5 */ COMM_BUS_TYPE_LIN,        FALSE,     FALSE,         FALSE, COMM_NONE_NMTYPEOFCHANNEL, COMM_FULL_COM_NETWORK_REQUESTED },  /* [ComMChannel_5] */
  { /*     6 */ COMM_BUS_TYPE_LIN,        FALSE,     FALSE,         FALSE, COMM_NONE_NMTYPEOFCHANNEL, COMM_FULL_COM_NETWORK_REQUESTED },  /* [ComMChannel_6] */
  { /*     7 */ COMM_BUS_TYPE_LIN,        FALSE,     FALSE,         FALSE, COMM_NONE_NMTYPEOFCHANNEL, COMM_FULL_COM_NETWORK_REQUESTED },  /* [ComMChannel_7] */
  { /*     8 */ COMM_BUS_TYPE_LIN,        FALSE,     FALSE,         FALSE, COMM_NONE_NMTYPEOFCHANNEL, COMM_FULL_COM_NETWORK_REQUESTED },  /* [ComMChannel_8] */
  { /*     9 */ COMM_BUS_TYPE_LIN,        FALSE,     FALSE,         FALSE, COMM_NONE_NMTYPEOFCHANNEL, COMM_FULL_COM_NETWORK_REQUESTED }   /* [ComMChannel_9] */
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_ChannelPb
**********************************************************************************************************************/
/** 
  \var    ComM_ChannelPb
  \brief  Contains PostBuild configuration parameters of channels
  \details
  Element                   Description
  UserReqFullComEndIdx      the end index of the 0:n relation pointing to ComM_UserReqFullCom
  UserReqFullComStartIdx    the start index of the 0:n relation pointing to ComM_UserReqFullCom
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(ComM_ChannelPbType, COMM_CONST) ComM_ChannelPb[10] = {
    /* Index    UserReqFullComEndIdx  UserReqFullComStartIdx */
  { /*     0 */                   1U,                     0U },
  { /*     1 */                   2U,                     1U },
  { /*     2 */                   3U,                     2U },
  { /*     3 */                   4U,                     3U },
  { /*     4 */                   5U,                     4U },
  { /*     5 */                   6U,                     5U },
  { /*     6 */                   7U,                     6U },
  { /*     7 */                   8U,                     7U },
  { /*     8 */                   9U,                     8U },
  { /*     9 */                  10U,                     9U }
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_User
**********************************************************************************************************************/
/** 
  \var    ComM_User
  \brief  Information about ComM users
  \details
  Element                 Description
  PncUser                 decides if a user is a partial network user or a direct channel user
  UserByteMaskEndIdx      the end index of the 0:n relation pointing to ComM_UserByteMask
  UserByteMaskStartIdx    the start index of the 0:n relation pointing to ComM_UserByteMask
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(ComM_UserType, COMM_CONST) ComM_User[10] = {
    /* Index    PncUser  UserByteMaskEndIdx  UserByteMaskStartIdx        Comment */
  { /*     0 */   FALSE,                 1U,                   0U },  /* [CN_Backbone2_3f947ba3] */
  { /*     1 */   FALSE,                 2U,                   1U },  /* [CN_CabSubnet_aa77b0b0] */
  { /*     2 */   FALSE,                 3U,                   2U },  /* [CN_SecuritySubnet_7cec9a61] */
  { /*     3 */   FALSE,                 4U,                   3U },  /* [CN_Backbone1J1939_2a22de3d] */
  { /*     4 */   FALSE,                 5U,                   4U },  /* [CN_FMSNet_05490e3d] */
  { /*     5 */   FALSE,                 6U,                   5U },  /* [CN_LIN00_ace1a6ba] */
  { /*     6 */   FALSE,                 7U,                   6U },  /* [CN_LIN01_4323cd84] */
  { /*     7 */   FALSE,                 8U,                   7U },  /* [CN_LIN02_a8147687] */
  { /*     8 */   FALSE,                 9U,                   8U },  /* [CN_LIN03_47d61db9] */
  { /*     9 */   FALSE,                10U,                   9U }   /* [CN_LIN04_a50a06c0] */
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_UserByteMask
**********************************************************************************************************************/
/** 
  \var    ComM_UserByteMask
  \brief  Each user has N entries in this array (N = # channels attached to this user, directly or through PNC). Each entry describes a Byte Position and a Mask for storing/clearing the user request in UserReqFullCom
  \details
  Element              Description
  Channel              ID of the channel which is requested by this entry.
  UserReqFullComIdx    the index of the 1:1 relation pointing to ComM_UserReqFullCom
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(ComM_UserByteMaskType, COMM_CONST) ComM_UserByteMask[10] = {
    /* Index    Channel  UserReqFullComIdx        Referable Keys */
  { /*     0 */      0U,                0U },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone2_3f947ba3] */
  { /*     1 */      1U,                1U },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_CabSubnet_aa77b0b0] */
  { /*     2 */      2U,                2U },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_SecuritySubnet_7cec9a61] */
  { /*     3 */      3U,                3U },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_Backbone1J1939_2a22de3d] */
  { /*     4 */      4U,                4U },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_FMSNet_05490e3d] */
  { /*     5 */      5U,                5U },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN00_ace1a6ba] */
  { /*     6 */      6U,                6U },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN01_4323cd84] */
  { /*     7 */      7U,                7U },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN02_a8147687] */
  { /*     8 */      8U,                8U },  /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN03_47d61db9] */
  { /*     9 */      9U,                9U }   /* [/ActiveEcuC/ComM/ComMConfigSet/CN_LIN04_a50a06c0] */
};
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_DcmRequestActive
**********************************************************************************************************************/
/** 
  \var    ComM_DcmRequestActive
  \brief  Status of Dcm active diagnostic request, TRUE if requested, FALSE otherwise
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(ComM_DcmRequestActiveUType, COMM_VAR_NOINIT) ComM_DcmRequestActive;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [ComMChannel_0] */
  /*     1 */  /* [ComMChannel_1] */
  /*     2 */  /* [ComMChannel_2] */
  /*     3 */  /* [ComMChannel_3] */
  /*     4 */  /* [ComMChannel_4] */
  /*     5 */  /* [ComMChannel_5] */
  /*     6 */  /* [ComMChannel_6] */
  /*     7 */  /* [ComMChannel_7] */
  /*     8 */  /* [ComMChannel_8] */
  /*     9 */  /* [ComMChannel_9] */

#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_UserReqFullCom
**********************************************************************************************************************/
/** 
  \var    ComM_UserReqFullCom
  \brief  RAM array used to store user requests for channels as bitmasks. Each channel 'owns' 1..n bytes in this array, depending on the number of users assigned to it.
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(ComM_UserReqFullComType, COMM_VAR_NOINIT) ComM_UserReqFullCom[10];
  /* Index        Referable Keys  */
  /*     0 */  /* [ComMChannel_0, Channel0_To_User0] */
  /*     1 */  /* [ComMChannel_1, Channel1_To_User1] */
  /*     2 */  /* [ComMChannel_2, Channel2_To_User2] */
  /*     3 */  /* [ComMChannel_3, Channel3_To_User3] */
  /*     4 */  /* [ComMChannel_4, Channel4_To_User4] */
  /*     5 */  /* [ComMChannel_5, Channel5_To_User5] */
  /*     6 */  /* [ComMChannel_6, Channel6_To_User6] */
  /*     7 */  /* [ComMChannel_7, Channel7_To_User7] */
  /*     8 */  /* [ComMChannel_8, Channel8_To_User8] */
  /*     9 */  /* [ComMChannel_9, Channel9_To_User9] */

#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */




/* -----------------------------------------------------------------------------
    &&&~ GLOBAL DATA ROM
 ----------------------------------------------------------------------------- */

#define COMM_START_SEC_CONST_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"

CONST(ComM_InhibitionStatusType, COMM_CONST) ComM_ECUGroupClassInit = 0x0;


#define COMM_STOP_SEC_CONST_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ INTERNAL DATA RAM
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
    &&&~ GLOBAL DATA RAM
 ----------------------------------------------------------------------------- */

#define COMM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ GLOBAL FUNCTION PROTOTYPES
 ----------------------------------------------------------------------------- */

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_0
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_0(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)0 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_1
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_1(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)1 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_2
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_2(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)2 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_3
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_3(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)3 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_4
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_4(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)4 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_5
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_5(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)5 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_6
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_6(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)6 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_7
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_7(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)7 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_8
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_8(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)8 );
}

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_9
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Call the ComM_MainFunction() for the corresponding channel.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_MainFunction_9(void)
{
  /* ----- Development Error Checks ------------------------------------- */
  /* Not needed, ComM_MainFunction() performs an initialization check. */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 Call the ComM_MainFunction() for the corresponding channel. */
  ComM_MainFunction((NetworkHandleType)9 );
}



/*********************************************************************************************************************
  FUNCTION: ComM_RequestBusSMMode
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Request the communication mode from the corresponding BusSM.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_RequestBusSMMode(NetworkHandleType Channel, ComM_ModeType ComMode)
{
  /* ----- Implementation ----------------------------------------------- */
  /* #10 Request the communication mode from the corresponding BusSM. */
  switch(Channel)
  {
    case 0:
      (void)CanSM_RequestComMode(Channel, ComMode);
      break;
    case 1:
      (void)CanSM_RequestComMode(Channel, ComMode);
      break;
    case 2:
      (void)CanSM_RequestComMode(Channel, ComMode);
      break;
    case 3:
      (void)CanSM_RequestComMode(Channel, ComMode);
      break;
    case 4:
      (void)CanSM_RequestComMode(Channel, ComMode);
      break;
    case 5:
      (void)LinSM_RequestComMode(Channel, ComMode);
      break;
    case 6:
      (void)LinSM_RequestComMode(Channel, ComMode);
      break;
    case 7:
      (void)LinSM_RequestComMode(Channel, ComMode);
      break;
    case 8:
      (void)LinSM_RequestComMode(Channel, ComMode);
      break;
    case 9:
      (void)LinSM_RequestComMode(Channel, ComMode);
      break;
    default:
      break;
  }
} /* PRQA S 6030 */ /* MD_MSR_STCYC */


/*********************************************************************************************************************
  FUNCTION: ComM_GetCurrentBusSMMode
*********************************************************************************************************************/
/*!
 * \internal
 * - #10 Query the current communication mode from the corresponding BusSM.
 * \endinternal
 */
FUNC(void, COMM_CODE) ComM_GetCurrentBusSMMode(NetworkHandleType Channel, P2VAR(ComM_ModeType, AUTOMATIC, AUTOMATIC) ComMode)
{
  /* ----- Implementation ----------------------------------------------- */
  /* #10 Query the current communication mode from the corresponding BusSM. */
  switch(Channel)
  {
    case 0:
      (void)CanSM_GetCurrentComMode(Channel, ComMode); /* SBSW_COMM_CALL_BUSSM_GET_CURRENT_COMMODE */
      break;
    case 1:
      (void)CanSM_GetCurrentComMode(Channel, ComMode); /* SBSW_COMM_CALL_BUSSM_GET_CURRENT_COMMODE */
      break;
    case 2:
      (void)CanSM_GetCurrentComMode(Channel, ComMode); /* SBSW_COMM_CALL_BUSSM_GET_CURRENT_COMMODE */
      break;
    case 3:
      (void)CanSM_GetCurrentComMode(Channel, ComMode); /* SBSW_COMM_CALL_BUSSM_GET_CURRENT_COMMODE */
      break;
    case 4:
      (void)CanSM_GetCurrentComMode(Channel, ComMode); /* SBSW_COMM_CALL_BUSSM_GET_CURRENT_COMMODE */
      break;
    case 5:
      (void)LinSM_GetCurrentComMode(Channel, ComMode); /* SBSW_COMM_CALL_BUSSM_GET_CURRENT_COMMODE */
      break;
    case 6:
      (void)LinSM_GetCurrentComMode(Channel, ComMode); /* SBSW_COMM_CALL_BUSSM_GET_CURRENT_COMMODE */
      break;
    case 7:
      (void)LinSM_GetCurrentComMode(Channel, ComMode); /* SBSW_COMM_CALL_BUSSM_GET_CURRENT_COMMODE */
      break;
    case 8:
      (void)LinSM_GetCurrentComMode(Channel, ComMode); /* SBSW_COMM_CALL_BUSSM_GET_CURRENT_COMMODE */
      break;
    case 9:
      (void)LinSM_GetCurrentComMode(Channel, ComMode); /* SBSW_COMM_CALL_BUSSM_GET_CURRENT_COMMODE */
      break;
    default:
      break;
  }
} /* PRQA S 6030 */ /* MD_MSR_STCYC */




#define COMM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

