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
 *            Module: Com
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Appl_Cbk.h
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


#if !defined (APPL_CBK_H)
# define APPL_CBK_H

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com_Types.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define COM_START_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* Configurable notification interface prototypes */
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_BacklightCmd_ISig_13_oBacklight_FuncInd_L1_oLIN00_e8d0b8c1_Tx(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_FSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_FSP2IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_115be26b_Tx(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_FuncIndIlluminationLevel_ISig_13_oBacklight_FuncInd_L1_oLIN00_dc8bb8a1_Tx(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_LIN_DoorAutoFuncInd_cmd_oCIOMtoSlaves1_L1_oLIN00_52fafc3c_Tx(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_LIN_IntLghtOffModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_00d309d6_Tx(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_LIN_IntLightMaxModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_523a53e3_Tx(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_LIN_IntLightNightModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_8c1fb2a2_Tx(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_LIN_IntLightRestingModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_df4802bd_Tx(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_Alarm_SecuritySubnet_oAnmMsg_Alarm_SecuritySubnet_oSecuritySubnet_b4bb691c_Rx_intId13_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_BBM_Backbone2_oAnmMsg_BBM_Backbone2_oBackbone2_396d1d95_Rx_intId0_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_CCM_CabSubnet_oAnmMsg_CCM_CabSubnet_oCabSubnet_eb4ad192_Rx_intId8_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_DACU_Backbone2_oAnmMsg_DACU_Backbone2_oBackbone2_82fc6af4_Rx_intId1_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_DDM_SecuritySubnet_oAnmMsg_DDM_SecuritySubnet_oSecuritySubnet_b331a2fd_Rx_intId14_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_ECUspare1_Backbone2_oAnmMsg_ECUspare1_Backbone2_oBackbone2_9471a62d_Rx_intId2_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_ECUspare2_Backbone2_oAnmMsg_ECUspare2_Backbone2_oBackbone2_fa2b273f_Rx_intId3_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_ECUspare5_SecuritySubnet_oAnmMsg_ECUspare5_SecuritySubnet_oSecuritySubnet_c77f9883_Rx_intId15_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_ECUspare6_CabSubnet_oAnmMsg_ECUspare6_CabSubnet_oCabSubnet_b891e97c_Rx_intId9_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_EMS_Backbone2_oAnmMsg_EMS_Backbone2_oBackbone2_c10b5f2c_Rx_intId4_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_IC3_Backbone2_oAnmMsg_IC3_Backbone2_oBackbone2_15db4986_Rx_intId5_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_LECM1_CabSubnet_oAnmMsg_LECM1_CabSubnet_oCabSubnet_e04b322d_Rx_intId10_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_PDM_SecuritySubnet_oAnmMsg_PDM_SecuritySubnet_oSecuritySubnet_99da07cf_Rx_intId16_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_SRS_CabSubnet_oAnmMsg_SRS_CabSubnet_oCabSubnet_deb2073e_Rx_intId11_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_TECU_Backbone2_oAnmMsg_TECU_Backbone2_oBackbone2_a0843952_Rx_intId6_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_VMCU_Backbone2_oAnmMsg_VMCU_Backbone2_oBackbone2_64a6ada3_Rx_intId7_Notification(void);
FUNC(void, COM_APPL_CODE) Issm_Com_AnmSig_WRCS_CabSubnet_oAnmMsg_WRCS_CabSubnet_oCabSubnet_a4bc01b1_Rx_intId12_Notification(void);


#define COM_STOP_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#endif  /* APPL_CBK_H */
/**********************************************************************************************************************
  END OF FILE: Appl_Cbk.h
**********************************************************************************************************************/

