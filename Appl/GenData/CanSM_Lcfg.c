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
 *            Module: CanSM
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanSM_Lcfg.c
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

#define CANSM_LCFG_C


 /**********************************************************************************************************************
 *  Includes
 **********************************************************************************************************************/

#include "CanSM_EcuM.h"



/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanSM_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    CanSM_ChannelConfig
  \details
  Element                    Description
  ControllerId           
  NetworkHandle          
  DemEventId_BusOff_     
  DemEventId_ModeRequest_
*/ 
#define CANSM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanSM_ChannelConfigType, CANSM_CONST) CanSM_ChannelConfig[5] = {
    /* Index    ControllerId  NetworkHandle  DemEventId_BusOff_                                                           DemEventId_ModeRequest_                                                                  */
  { /*     0 */           0U,            3U, DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_17344684_CANSM_E_BUS_OFF, DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_17344684_CANSM_E_MODE_REQUEST_TIMEOUT },
  { /*     1 */           4U,            0U, DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_a6b6a922_CANSM_E_BUS_OFF, DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_a6b6a922_CANSM_E_MODE_REQUEST_TIMEOUT },
  { /*     2 */           3U,            4U, DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_e058b4ae_CANSM_E_BUS_OFF, DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_e058b4ae_CANSM_E_MODE_REQUEST_TIMEOUT },
  { /*     3 */           2U,            2U, DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_53cce282_CANSM_E_BUS_OFF, DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_53cce282_CANSM_E_MODE_REQUEST_TIMEOUT },
  { /*     4 */           1U,            1U, DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_df893ad5_CANSM_E_BUS_OFF, DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_df893ad5_CANSM_E_MODE_REQUEST_TIMEOUT }
};
#define CANSM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanSM_ChannelVarRecord
**********************************************************************************************************************/
#define CANSM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanSM_ChannelVarRecordType, CANSM_VAR_NOINIT) CanSM_ChannelVarRecord[5];
#define CANSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/




 /**********************************************************************************************************************
 *  VAR DATA PROTOTYPES
 **********************************************************************************************************************/






/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

 /* -----------------------------------------------
 BusOffIndicationFct  Begin
 ----------------------------------------------- */

#define CANSM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(CanSM_BusOffBeginIndicationFctPtrType, CANSM_CONST) CanSM_BusOffBeginIndicationFctPtr = J1939Nm_GetBusOffDelay;

#define CANSM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */


 /* -----------------------------------------------
 BusOffIndicationFct  End
 ----------------------------------------------- */

#define CANSM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(CanSM_BusOffEndIndicationFctPtrType, CANSM_CONST) CanSM_BusOffEndIndicationFctPtr = J1939Nm_BusOffEnd;

#define CANSM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */





/* -----------------------------------------------------------------------------
    CanSM Functions
 ----------------------------------------------------------------------------- */

#define CANSM_START_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, CANSM_CODE) CanSM_Dem_ReportErrorEvent(Dem_EventIdType CanSM_EventID, Dem_EventStatusType CanSM_EventStatus)
{
  (void)Dem_ReportErrorStatus( CanSM_EventID, CanSM_EventStatus );
}

#define CANSM_STOP_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */


