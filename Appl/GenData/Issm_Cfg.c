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
 *            Module: Issm
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Issm_Cfg.c
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

#define ISSM_CFG_SOURCE

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Issm_Cbk.h"

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
  Issm_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    Issm_ChannelConfig
  \details
  Element               Description
  RxSignalIdEndIdx      the end index of the 0:n relation pointing to Issm_RxSignalId
  RxSignalIdStartIdx    the start index of the 0:n relation pointing to Issm_RxSignalId
*/ 
#define ISSM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Issm_ChannelConfigType, ISSM_CONST) Issm_ChannelConfig[3] = {
    /* Index    RxSignalIdEndIdx                                                    RxSignalIdStartIdx                                                          Comment */
  { /*     0 */               8U  /* /ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922 */,                 0U  /* /ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922 */ },  /* [CHNL_a6b6a922] */
  { /*     1 */              13U  /* /ActiveEcuC/Issm/IssmGeneral/CHNL_df893ad5 */,                 8U  /* /ActiveEcuC/Issm/IssmGeneral/CHNL_df893ad5 */ },  /* [CHNL_df893ad5] */
  { /*     2 */              17U  /* /ActiveEcuC/Issm/IssmGeneral/CHNL_53cce282 */,                13U  /* /ActiveEcuC/Issm/IssmGeneral/CHNL_53cce282 */ }   /* [CHNL_53cce282] */
};
#define ISSM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Issm_ChannelPostBuildConfig
**********************************************************************************************************************/
/** 
  \var    Issm_ChannelPostBuildConfig
  \details
  Element          Description
  MappedIssMask
*/ 
#define ISSM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Issm_ChannelPostBuildConfigType, ISSM_CONST) Issm_ChannelPostBuildConfig[3] = {
    /* Index    MappedIssMask        Comment */
  { /*     0 */  0x00000002UL },  /* [CHNL_a6b6a922] */
  { /*     1 */  0x00000004UL },  /* [CHNL_df893ad5] */
  { /*     2 */  0x00000000UL }   /* [CHNL_53cce282] */
};
#define ISSM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Issm_RxSignalId
**********************************************************************************************************************/
#define ISSM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Issm_RxSignalIdType, ISSM_CONST) Issm_RxSignalId[17] = {
  /* Index     RxSignalId                                                                                                          Referable Keys */
  /*     0 */                             ComConf_ComSignal_AnmSig_BBM_Backbone2_oAnmMsg_BBM_Backbone2_oBackbone2_396d1d95_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922] */
  /*     1 */                           ComConf_ComSignal_AnmSig_DACU_Backbone2_oAnmMsg_DACU_Backbone2_oBackbone2_82fc6af4_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922] */
  /*     2 */                 ComConf_ComSignal_AnmSig_ECUspare1_Backbone2_oAnmMsg_ECUspare1_Backbone2_oBackbone2_9471a62d_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922] */
  /*     3 */                 ComConf_ComSignal_AnmSig_ECUspare2_Backbone2_oAnmMsg_ECUspare2_Backbone2_oBackbone2_fa2b273f_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922] */
  /*     4 */                             ComConf_ComSignal_AnmSig_EMS_Backbone2_oAnmMsg_EMS_Backbone2_oBackbone2_c10b5f2c_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922] */
  /*     5 */                             ComConf_ComSignal_AnmSig_IC3_Backbone2_oAnmMsg_IC3_Backbone2_oBackbone2_15db4986_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922] */
  /*     6 */                           ComConf_ComSignal_AnmSig_TECU_Backbone2_oAnmMsg_TECU_Backbone2_oBackbone2_a0843952_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922] */
  /*     7 */                           ComConf_ComSignal_AnmSig_VMCU_Backbone2_oAnmMsg_VMCU_Backbone2_oBackbone2_64a6ada3_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922] */
  /*     8 */                             ComConf_ComSignal_AnmSig_CCM_CabSubnet_oAnmMsg_CCM_CabSubnet_oCabSubnet_eb4ad192_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_df893ad5] */
  /*     9 */                 ComConf_ComSignal_AnmSig_ECUspare6_CabSubnet_oAnmMsg_ECUspare6_CabSubnet_oCabSubnet_b891e97c_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_df893ad5] */
  /*    10 */                         ComConf_ComSignal_AnmSig_LECM1_CabSubnet_oAnmMsg_LECM1_CabSubnet_oCabSubnet_e04b322d_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_df893ad5] */
  /*    11 */                             ComConf_ComSignal_AnmSig_SRS_CabSubnet_oAnmMsg_SRS_CabSubnet_oCabSubnet_deb2073e_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_df893ad5] */
  /*    12 */                           ComConf_ComSignal_AnmSig_WRCS_CabSubnet_oAnmMsg_WRCS_CabSubnet_oCabSubnet_a4bc01b1_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_df893ad5] */
  /*    13 */          ComConf_ComSignal_AnmSig_Alarm_SecuritySubnet_oAnmMsg_Alarm_SecuritySubnet_oSecuritySubnet_b4bb691c_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_53cce282] */
  /*    14 */              ComConf_ComSignal_AnmSig_DDM_SecuritySubnet_oAnmMsg_DDM_SecuritySubnet_oSecuritySubnet_b331a2fd_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_53cce282] */
  /*    15 */  ComConf_ComSignal_AnmSig_ECUspare5_SecuritySubnet_oAnmMsg_ECUspare5_SecuritySubnet_oSecuritySubnet_c77f9883_Rx,  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_53cce282] */
  /*    16 */              ComConf_ComSignal_AnmSig_PDM_SecuritySubnet_oAnmMsg_PDM_SecuritySubnet_oSecuritySubnet_99da07cf_Rx   /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_53cce282] */
};
#define ISSM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Issm_ActiveIssField
**********************************************************************************************************************/
#define ISSM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Issm_ActiveIssFieldType, ISSM_VAR_NOINIT) Issm_ActiveIssField;
#define ISSM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Issm_EcuRunState
**********************************************************************************************************************/
#define ISSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Issm_EcuRunStateType, ISSM_VAR_NOINIT) Issm_EcuRunState;
#define ISSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Issm_ExternalRequestField
**********************************************************************************************************************/
#define ISSM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Issm_ExternalRequestFieldUType, ISSM_VAR_NOINIT) Issm_ExternalRequestField;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922] */
  /*   ... */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922] */
  /*     7 */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922] */
  /*     8 */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_df893ad5] */
  /*   ... */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_df893ad5] */
  /*    12 */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_df893ad5] */
  /*    13 */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_53cce282] */
  /*   ... */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_53cce282] */
  /*    16 */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_53cce282] */

#define ISSM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Issm_ExternalRequestsChanged
**********************************************************************************************************************/
#define ISSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Issm_ExternalRequestsChangedType, ISSM_VAR_NOINIT) Issm_ExternalRequestsChanged;
#define ISSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Issm_Initialized
**********************************************************************************************************************/
#define ISSM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Issm_InitializedType, ISSM_VAR_ZERO_INIT) Issm_Initialized = FALSE;
#define ISSM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Issm_InternalRequestField
**********************************************************************************************************************/
#define ISSM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Issm_InternalRequestFieldType, ISSM_VAR_NOINIT) Issm_InternalRequestField;
#define ISSM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Issm_InternalRequestsChanged
**********************************************************************************************************************/
#define ISSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Issm_InternalRequestsChangedType, ISSM_VAR_NOINIT) Issm_InternalRequestsChanged;
#define ISSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Issm_MinActiveTimer
**********************************************************************************************************************/
#define ISSM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Issm_MinActiveTimerType, ISSM_VAR_NOINIT) Issm_MinActiveTimer[3];
#define ISSM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Issm_NetworkOutputField
**********************************************************************************************************************/
#define ISSM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Issm_NetworkOutputFieldType, ISSM_VAR_NOINIT) Issm_NetworkOutputField[3];
#define ISSM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Issm_NetworkRequested
**********************************************************************************************************************/
#define ISSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Issm_NetworkRequestedType, ISSM_VAR_NOINIT) Issm_NetworkRequested[3];
#define ISSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Issm_OverallRequestField
**********************************************************************************************************************/
#define ISSM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Issm_OverallRequestFieldType, ISSM_VAR_NOINIT) Issm_OverallRequestField;
#define ISSM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Issm_RxSignalTimer
**********************************************************************************************************************/
#define ISSM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Issm_RxSignalTimerUType, ISSM_VAR_NOINIT) Issm_RxSignalTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922] */
  /*   ... */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922] */
  /*     7 */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_a6b6a922] */
  /*     8 */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_df893ad5] */
  /*   ... */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_df893ad5] */
  /*    12 */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_df893ad5] */
  /*    13 */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_53cce282] */
  /*   ... */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_53cce282] */
  /*    16 */  /* [/ActiveEcuC/Issm/IssmGeneral/CHNL_53cce282] */

#define ISSM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Issm_UserRequested
**********************************************************************************************************************/
#define ISSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Issm_UserRequestedType, ISSM_VAR_NOINIT) Issm_UserRequested[1];
#define ISSM_STOP_SEC_VAR_NOINIT_8BIT
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


#define ISSM_START_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Signal Rx Indication functions */
FUNC(void, ISSM_CODE) Issm_Com_AnmSig_BBM_Backbone2_oAnmMsg_BBM_Backbone2_oBackbone2_396d1d95_Rx_intId0_Notification( void )
{
  Issm_RxSignalNotification( 0U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_DACU_Backbone2_oAnmMsg_DACU_Backbone2_oBackbone2_82fc6af4_Rx_intId1_Notification( void )
{
  Issm_RxSignalNotification( 1U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_ECUspare1_Backbone2_oAnmMsg_ECUspare1_Backbone2_oBackbone2_9471a62d_Rx_intId2_Notification( void )
{
  Issm_RxSignalNotification( 2U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_ECUspare2_Backbone2_oAnmMsg_ECUspare2_Backbone2_oBackbone2_fa2b273f_Rx_intId3_Notification( void )
{
  Issm_RxSignalNotification( 3U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_EMS_Backbone2_oAnmMsg_EMS_Backbone2_oBackbone2_c10b5f2c_Rx_intId4_Notification( void )
{
  Issm_RxSignalNotification( 4U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_IC3_Backbone2_oAnmMsg_IC3_Backbone2_oBackbone2_15db4986_Rx_intId5_Notification( void )
{
  Issm_RxSignalNotification( 5U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_TECU_Backbone2_oAnmMsg_TECU_Backbone2_oBackbone2_a0843952_Rx_intId6_Notification( void )
{
  Issm_RxSignalNotification( 6U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_VMCU_Backbone2_oAnmMsg_VMCU_Backbone2_oBackbone2_64a6ada3_Rx_intId7_Notification( void )
{
  Issm_RxSignalNotification( 7U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_CCM_CabSubnet_oAnmMsg_CCM_CabSubnet_oCabSubnet_eb4ad192_Rx_intId8_Notification( void )
{
  Issm_RxSignalNotification( 8U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_ECUspare6_CabSubnet_oAnmMsg_ECUspare6_CabSubnet_oCabSubnet_b891e97c_Rx_intId9_Notification( void )
{
  Issm_RxSignalNotification( 9U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_LECM1_CabSubnet_oAnmMsg_LECM1_CabSubnet_oCabSubnet_e04b322d_Rx_intId10_Notification( void )
{
  Issm_RxSignalNotification( 10U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_SRS_CabSubnet_oAnmMsg_SRS_CabSubnet_oCabSubnet_deb2073e_Rx_intId11_Notification( void )
{
  Issm_RxSignalNotification( 11U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_WRCS_CabSubnet_oAnmMsg_WRCS_CabSubnet_oCabSubnet_a4bc01b1_Rx_intId12_Notification( void )
{
  Issm_RxSignalNotification( 12U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_Alarm_SecuritySubnet_oAnmMsg_Alarm_SecuritySubnet_oSecuritySubnet_b4bb691c_Rx_intId13_Notification( void )
{
  Issm_RxSignalNotification( 13U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_DDM_SecuritySubnet_oAnmMsg_DDM_SecuritySubnet_oSecuritySubnet_b331a2fd_Rx_intId14_Notification( void )
{
  Issm_RxSignalNotification( 14U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_ECUspare5_SecuritySubnet_oAnmMsg_ECUspare5_SecuritySubnet_oSecuritySubnet_c77f9883_Rx_intId15_Notification( void )
{
  Issm_RxSignalNotification( 15U );
}

FUNC(void, ISSM_CODE) Issm_Com_AnmSig_PDM_SecuritySubnet_oAnmMsg_PDM_SecuritySubnet_oSecuritySubnet_99da07cf_Rx_intId16_Notification( void )
{
  Issm_RxSignalNotification( 16U );
}



#define ISSM_STOP_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
  END OF FILE: Issm_Cfg.c
**********************************************************************************************************************/

