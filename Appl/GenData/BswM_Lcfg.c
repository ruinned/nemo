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
 *            Module: BswM
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: BswM_Lcfg.c
 *   Generation Time: 2018-11-24 18:55:52
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

#define BSWM_LCFG_SOURCE

/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
#include "BswM.h"
#include "BswM_Private_Cfg.h"
#include "SchM_BswM.h"

#if !defined (BSWM_LOCAL)
# define BSWM_LOCAL static
#endif

#if !defined (BSWM_LOCAL_INLINE) /* COV_BSWM_LOCAL_INLINE */
# define BSWM_LOCAL_INLINE LOCAL_INLINE
#endif

/* -----------------------------------------------------------------------------
    &&&~ MACROS
 ----------------------------------------------------------------------------- */
/* PRQA S 3453 1 */ /* MD_BswM_3453 */
#define BswM_SetIpduGroup(pduId, bitVal) Com_SetIpduGroup(BswM_ComIPduGroupState, (pduId), (bitVal))
#define BswM_SetIpduReinitGroup(pduId, bitVal)
/* PRQA S 3453 1 */ /* MD_BswM_3453 */
#define BswM_SetIpduDMGroup(pduId, bitVal) Com_SetIpduGroup(BswM_ComRxIPduGroupDMState, (pduId), (bitVal))

/* PRQA S 3453 1 */ /* MD_BswM_3453 */
#define BswM_MarkPduGroupControlInvocation(control) BswM_PduGroupControlInvocation |= (control)
#define BswM_MarkDmControlInvocation() BswM_PduGroupControlInvocation |= BSWM_GROUPCONTROL_DM



#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ LOCAL FUNCTION DECLARATIONS
 ----------------------------------------------------------------------------- */
/**********************************************************************************************************************
 *  BswM_Action_RuleHandler()
 **********************************************************************************************************************/
/*!
 * \brief       Executes a rule.
 * \details     Arbitrates a rule and executes corresponding action list.
 * \param[in]   handleId  Id of the rule to execute.
 * \return      E_OK      No action list was executed or corresponding action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_RuleHandler(BswM_HandleType handleId);

/**********************************************************************************************************************
 *  BswM_UpdateRuleStates()
 **********************************************************************************************************************/
/*!
 * \brief       Updates the state of a rule.
 * \details     Set rule state of passed ruleId to passed state.
 * \param[in]   ruleId    Id of the rule to update.
 * \param[in]   state     New state of the rule.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateRuleStates(BswM_SizeOfRuleStatesType ruleId, BswM_RuleStatesType state);

/**********************************************************************************************************************
 *  BswM_UpdateTimer()
 **********************************************************************************************************************/
/*!
 * \brief       Updates a timer.
 * \details     Set timer value of passed timerId to passed value and calculates the new state.
 * \param[in]   timerId   Id of the timer to update.
 * \param[in]   value     New value of the timer.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateTimer(BswM_SizeOfTimerValueType timerId, BswM_TimerValueType value);

/*! \addtogroup    BswMGeneratedFunctions BswM Generated Functions
 * \{
 */
/* PRQA S 0779 FUNCTIONDECLARATIONS */ /* MD_BswM_0779 */

/**********************************************************************************************************************
 *  ImmediateSwcRequest
 *********************************************************************************************************************/
/*! \defgroup    ImmediateSwcRequest
 * \{
 */
/**********************************************************************************************************************
 *  BswM_ImmediateSwcRequest
 *********************************************************************************************************************/
/*!
 * \brief       Arbitrates depending immediate rules of a Swc Mode Request port.
 * \details     Checks if port is valid and arbitrates depending immediate rules.
 * \param[IN]   requestId  Index of a swc mode request port.
 * \pre         -
 * \context     TASK
 * \reentrant   TRUE
 * \synchronous TRUE
 * \note        Function called by immediate swc request functions (BswMRteRequestFunctions).
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_ImmediateSwcRequest(BswM_SizeOfModeRequestMappingType requestId);
/*! \} */ /* End of group ImmediateSwcRequest */

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMActionListFunctions
 * \{
 */

/*!
 * \{
 * \brief       Execute actions of action list.
 * \details     Generated function which depends on the configuration. Executes the actions of the action list in the
 *              configured order.
 * \return      E_OK      Action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_Disable_DM(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_Enable_DM(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_1(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_EnableNoinit(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN02_c2d7c6f3_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN02_c2d7c6f3_Enable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_EnableNoinit(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_Disable_DM(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_Enable_DM(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_RX_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_RX_EnableNoinit(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_TX_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_TX_EnableNoinit(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_TX_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_TX_EnableNoinit(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_Table_E(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_RX_EnableNoinit(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table2(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN03_b5d0f665_Enable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN01_5bde9749_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN01_5bde9749_Enable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN04_2bb463c6_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN04_2bb463c6_Enable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_RX_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_Disable_DM(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_Enable_DM(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN00_2cd9a7df_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN00_2cd9a7df_Enable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ExitRun(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_RunToPostRun(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMToShutdown(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToPrep(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMWakeup(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToRun(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_DemInit(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_InitToWakeup(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PostRunToPrepShutdown(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PostRunToRun(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ExitPostRun(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_INIT_AL_Initialize(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_RX_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_RX_EnableNoinit(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_Disable_DM(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_Enable_DM(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_EnableNoinit(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_EnableNoinit(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_Table1(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_NULL(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_Table2(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_Table_E(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_1(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_2(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_Table2(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table_E(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_Table_E(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_Table_E(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_Table2(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table1(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_Table1(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_Table0(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_Table1(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_NULL(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_NULL(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_NULL(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_NULL(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_2(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_2(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_2(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp_Table_0(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_1(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_1(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_TX_Disable(void);
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_TX_EnableNoinit(void);
/*! \} */ /* End of sharing description for BswMActionListFunctions */
/*! \} */ /* End of group BswMActionListFunctions */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/
/*! \defgroup    BswMRuleFunctions
 * \{
 */

/*!
 * \{
 * \brief       Arbitrates the configured rule.
 * \details     Generated function which depends on the configuration. Arbitrates the rule and returns the action list
 *              which shall be executed.
 * \return      ID of action list to execute (BSWM_NO_ACTIONLIST if no ActionList shall be executed)
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_CabSubnet_9ea693f1_RX_DM(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_Backbone2_78967e2c_RX_DM(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_SecuritySubnet_e7a0ee54_TX(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_LIN02_c2d7c6f3(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_SecuritySubnet_e7a0ee54_RX(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_SecuritySubnet_e7a0ee54_RX_DM(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_Backbone2_78967e2c_RX(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_CabSubnet_9ea693f1_TX(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_Backbone2_78967e2c_TX(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_CabSubnet_9ea693f1_RX(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_LIN03_b5d0f665(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_LIN01_5bde9749(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_LIN04_2bb463c6(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_Backbone1J1939_0b1f4bae_RX(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_Backbone1J1939_0b1f4bae_RX_DM(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_LIN00_2cd9a7df(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_RunToPostRun(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_RunToPostRunNested(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToShutdown(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToPrep(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToWakeup(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToRun(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_DemInit(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_InitToWakeup(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunToPrepNested(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunNested(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRun(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PrepToWait(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_FMSNet_fce1aae5_RX(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_FMSNet_fce1aae5_RX_DM(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN3_Schedule_To_Table1(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN3_Schedule_To_NULL(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN3_Schedule_To_Table2(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN3_Schedule_To_Table_E(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table1(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table2(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table1(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table2(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN1_Schedule_To_NULL(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN1_Schedule_To_Table1(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN1_Schedule_To_Table2(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN1_Schedule_To_Table_E(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp_Table0(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN2_Schedule_To_NULL(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN2_Schedule_To_Table0(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN2_Schedule_To_Table_E(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table1(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table2(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN4_Schedule_To_NULL(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN4_Schedule_To_Table1(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN4_Schedule_To_Table2(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN4_Schedule_To_Table_E(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table1(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table2(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN5_Schedule_To_NULL(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN5_Schedule_To_Table1(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN5_Schedule_To_Table2(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN5_Schedule_To_Table_E(void);
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_FMSNet_fce1aae5_TX(void);
/*! \} */ /* End of sharing description for BswMRuleFunctions */
/*! \} */ /* End of group BswMRuleFunctions */
/* PRQA L:FUNCTIONDECLARATIONS */
/*! \} */ /* End of group BswMGeneratedFunctions */

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ LOCAL VARIABLE DECLARATIONS
 ----------------------------------------------------------------------------- */

/* PRQA S 0779 VARIABLEDECLARATIONS */ /* MD_BswM_0779 */ 

#define BSWM_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

BSWM_LOCAL VAR(uint8, BSWM_VAR_NOINIT) BswM_PduGroupControlInvocation;

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


BSWM_LOCAL VAR(Rte_ModeType_ESH_Mode, BSWM_VAR_NOINIT) BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;

BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_RunRequest_0_requestedMode;
BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_RunRequest_1_requestedMode;
BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_PostRunRequest_0_requestedMode;
BSWM_LOCAL VAR(BswM_ESH_RunRequest, BSWM_VAR_NOINIT) Request_ESH_PostRunRequest_1_requestedMode;
BSWM_LOCAL VAR(BswM_BswMRteMDG_LIN3Schedule, BSWM_VAR_NOINIT) Request_LIN3_ScheduleTableRequestMode_requestedMode;
BSWM_LOCAL VAR(BswM_BswMRteMDG_LIN1Schedule, BSWM_VAR_NOINIT) Request_LIN1_ScheduleTableRequestMode_requestedMode;
BSWM_LOCAL VAR(BswM_BswMRteMDG_LIN2Schedule, BSWM_VAR_NOINIT) Request_LIN2_ScheduleTableRequestMode_requestedMode;
BSWM_LOCAL VAR(BswM_BswMRteMDG_LIN4Schedule, BSWM_VAR_NOINIT) Request_LIN4_ScheduleTableRequestMode_requestedMode;
BSWM_LOCAL VAR(BswM_BswMRteMDG_LIN5Schedule, BSWM_VAR_NOINIT) Request_LIN5_ScheduleTableRequestMode_requestedMode;
BSWM_LOCAL VAR(Rte_ModeType_ESH_Mode, BSWM_VAR_NOINIT) BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode;


/* PRQA S 3218 3 */ /* MD_BswM_3218 */
BSWM_LOCAL VAR(Com_IpduGroupVector, BSWM_VAR_NOINIT) BswM_ComIPduGroupState;
BSWM_LOCAL VAR(Com_IpduGroupVector, BSWM_VAR_NOINIT) BswM_ComRxIPduGroupDMState;

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* PRQA L:VARIABLEDECLARATIONS */

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
/* PRQA S 0310 GLOBALDATADECLARATIONS */ /* MD_BswM_0310 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  BswM_ActionLists
**********************************************************************************************************************/
/** 
  \var    BswM_ActionLists
  \details
  Element    Description
  FctPtr     Pointer to the array list function.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ActionListsType, BSWM_CONST) BswM_ActionLists[84] = {
    /* Index    FctPtr                                                                                Comment                   Referable Keys */
  { /*     0 */ BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_Disable_DM                         },  /* [Priority: 0] */  /* [AL_CC_AL_CN_CabSubnet_9ea693f1_Disable_DM] */
  { /*     1 */ BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_Enable_DM                          },  /* [Priority: 0] */  /* [AL_CC_AL_CN_CabSubnet_9ea693f1_Enable_DM] */
  { /*     2 */ BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_1        },  /* [Priority: 0] */  /* [AL_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_1] */
  { /*     3 */ BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp                },  /* [Priority: 0] */  /* [AL_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp] */
  { /*     4 */ BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_Disable                    },  /* [Priority: 0] */  /* [AL_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_Disable] */
  { /*     5 */ BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_EnableNoinit               },  /* [Priority: 0] */  /* [AL_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_EnableNoinit] */
  { /*     6 */ BswM_ActionList_CC_AL_CN_LIN02_c2d7c6f3_Disable                                },  /* [Priority: 0] */  /* [AL_CC_AL_CN_LIN02_c2d7c6f3_Disable] */
  { /*     7 */ BswM_ActionList_CC_AL_CN_LIN02_c2d7c6f3_Enable                                 },  /* [Priority: 0] */  /* [AL_CC_AL_CN_LIN02_c2d7c6f3_Enable] */
  { /*     8 */ BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_Disable                    },  /* [Priority: 0] */  /* [AL_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_Disable] */
  { /*     9 */ BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_EnableNoinit               },  /* [Priority: 0] */  /* [AL_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_EnableNoinit] */
  { /*    10 */ BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_Disable_DM                    },  /* [Priority: 0] */  /* [AL_CC_AL_CN_SecuritySubnet_e7a0ee54_Disable_DM] */
  { /*    11 */ BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_Enable_DM                     },  /* [Priority: 0] */  /* [AL_CC_AL_CN_SecuritySubnet_e7a0ee54_Enable_DM] */
  { /*    12 */ BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_RX_Disable                         },  /* [Priority: 0] */  /* [AL_CC_AL_CN_Backbone2_78967e2c_RX_Disable] */
  { /*    13 */ BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_RX_EnableNoinit                    },  /* [Priority: 0] */  /* [AL_CC_AL_CN_Backbone2_78967e2c_RX_EnableNoinit] */
  { /*    14 */ BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_TX_Disable                         },  /* [Priority: 0] */  /* [AL_CC_AL_CN_CabSubnet_9ea693f1_TX_Disable] */
  { /*    15 */ BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_TX_EnableNoinit                    },  /* [Priority: 0] */  /* [AL_CC_AL_CN_CabSubnet_9ea693f1_TX_EnableNoinit] */
  { /*    16 */ BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_TX_Disable                         },  /* [Priority: 0] */  /* [AL_CC_AL_CN_Backbone2_78967e2c_TX_Disable] */
  { /*    17 */ BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_TX_EnableNoinit                    },  /* [Priority: 0] */  /* [AL_CC_AL_CN_Backbone2_78967e2c_TX_EnableNoinit] */
  { /*    18 */ BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_Table_E                            },  /* [Priority: 0] */  /* [AL_CC_AL_LIN2_ScheduleTable_to_Table_E] */
  { /*    19 */ BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_RX_EnableNoinit                    },  /* [Priority: 0] */  /* [AL_CC_AL_CN_CabSubnet_9ea693f1_RX_EnableNoinit] */
  { /*    20 */ BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table2                             },  /* [Priority: 0] */  /* [AL_CC_AL_LIN5_ScheduleTable_to_Table2] */
  { /*    21 */ BswM_ActionList_CC_AL_CN_LIN03_b5d0f665_Enable                                 },  /* [Priority: 0] */  /* [AL_CC_AL_CN_LIN03_b5d0f665_Enable] */
  { /*    22 */ BswM_ActionList_CC_AL_CN_LIN01_5bde9749_Disable                                },  /* [Priority: 0] */  /* [AL_CC_AL_CN_LIN01_5bde9749_Disable] */
  { /*    23 */ BswM_ActionList_CC_AL_CN_LIN01_5bde9749_Enable                                 },  /* [Priority: 0] */  /* [AL_CC_AL_CN_LIN01_5bde9749_Enable] */
  { /*    24 */ BswM_ActionList_CC_AL_CN_LIN04_2bb463c6_Disable                                },  /* [Priority: 0] */  /* [AL_CC_AL_CN_LIN04_2bb463c6_Disable] */
  { /*    25 */ BswM_ActionList_CC_AL_CN_LIN04_2bb463c6_Enable                                 },  /* [Priority: 0] */  /* [AL_CC_AL_CN_LIN04_2bb463c6_Enable] */
  { /*    26 */ BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_RX_Disable                    },  /* [Priority: 0] */  /* [AL_CC_AL_CN_Backbone1J1939_0b1f4bae_RX_Disable] */
  { /*    27 */ BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp                },  /* [Priority: 0] */  /* [AL_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp] */
  { /*    28 */ BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_Disable_DM                    },  /* [Priority: 0] */  /* [AL_CC_AL_CN_Backbone1J1939_0b1f4bae_Disable_DM] */
  { /*    29 */ BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_Enable_DM                     },  /* [Priority: 0] */  /* [AL_CC_AL_CN_Backbone1J1939_0b1f4bae_Enable_DM] */
  { /*    30 */ BswM_ActionList_CC_AL_CN_LIN00_2cd9a7df_Disable                                },  /* [Priority: 0] */  /* [AL_CC_AL_CN_LIN00_2cd9a7df_Disable] */
  { /*    31 */ BswM_ActionList_CC_AL_CN_LIN00_2cd9a7df_Enable                                 },  /* [Priority: 0] */  /* [AL_CC_AL_CN_LIN00_2cd9a7df_Enable] */
  { /*    32 */ BswM_ActionList_ESH_AL_ExitRun                                                 },  /* [Priority: 0] */  /* [AL_ESH_AL_ExitRun] */
  { /*    33 */ BswM_ActionList_ESH_AL_RunToPostRun                                            },  /* [Priority: 0] */  /* [AL_ESH_AL_RunToPostRun] */
  { /*    34 */ BswM_ActionList_ESH_AL_WaitForNvMToShutdown                                    },  /* [Priority: 0] */  /* [AL_ESH_AL_WaitForNvMToShutdown] */
  { /*    35 */ BswM_ActionList_ESH_AL_WakeupToPrep                                            },  /* [Priority: 0] */  /* [AL_ESH_AL_WakeupToPrep] */
  { /*    36 */ BswM_ActionList_ESH_AL_WaitForNvMWakeup                                        },  /* [Priority: 0] */  /* [AL_ESH_AL_WaitForNvMWakeup] */
  { /*    37 */ BswM_ActionList_ESH_AL_WakeupToRun                                             },  /* [Priority: 0] */  /* [AL_ESH_AL_WakeupToRun] */
  { /*    38 */ BswM_ActionList_ESH_AL_DemInit                                                 },  /* [Priority: 0] */  /* [AL_ESH_AL_DemInit] */
  { /*    39 */ BswM_ActionList_ESH_AL_InitToWakeup                                            },  /* [Priority: 0] */  /* [AL_ESH_AL_InitToWakeup] */
  { /*    40 */ BswM_ActionList_ESH_AL_PostRunToPrepShutdown                                   },  /* [Priority: 0] */  /* [AL_ESH_AL_PostRunToPrepShutdown] */
  { /*    41 */ BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck                                  },  /* [Priority: 0] */  /* [AL_ESH_AL_ESH_PostRunToPrepCheck] */
  { /*    42 */ BswM_ActionList_ESH_AL_PostRunToRun                                            },  /* [Priority: 0] */  /* [AL_ESH_AL_PostRunToRun] */
  { /*    43 */ BswM_ActionList_ESH_AL_ExitPostRun                                             },  /* [Priority: 0] */  /* [AL_ESH_AL_ExitPostRun] */
  { /*    44 */ BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM                                },  /* [Priority: 0] */  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  { /*    45 */ BswM_ActionList_INIT_AL_Initialize                                             },  /* [Priority: 0] */  /* [AL_INIT_AL_Initialize] */
  { /*    46 */ BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_RX_Disable                            },  /* [Priority: 0] */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_RX_Disable] */
  { /*    47 */ BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_RX_EnableNoinit                       },  /* [Priority: 0] */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_RX_EnableNoinit] */
  { /*    48 */ BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_Disable_DM                            },  /* [Priority: 0] */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_Disable_DM] */
  { /*    49 */ BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_Enable_DM                             },  /* [Priority: 0] */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_Enable_DM] */
    /* Index    FctPtr                                                                                Comment                   Referable Keys */
  { /*    50 */ BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_Disable      },  /* [Priority: 0] */  /* [AL_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_Disable] */
  { /*    51 */ BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_EnableNoinit },  /* [Priority: 0] */  /* [AL_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_EnableNoinit] */
  { /*    52 */ BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_Disable              },  /* [Priority: 0] */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_Disable] */
  { /*    53 */ BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_EnableNoinit         },  /* [Priority: 0] */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_EnableNoinit] */
  { /*    54 */ BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_Table1                             },  /* [Priority: 0] */  /* [AL_CC_AL_LIN3_ScheduleTable_to_Table1] */
  { /*    55 */ BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_NULL                               },  /* [Priority: 0] */  /* [AL_CC_AL_LIN3_ScheduleTable_to_NULL] */
  { /*    56 */ BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_Table2                             },  /* [Priority: 0] */  /* [AL_CC_AL_LIN3_ScheduleTable_to_Table2] */
  { /*    57 */ BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_Table_E                            },  /* [Priority: 0] */  /* [AL_CC_AL_LIN3_ScheduleTable_to_Table_E] */
  { /*    58 */ BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp                },  /* [Priority: 0] */  /* [AL_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp] */
  { /*    59 */ BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_1        },  /* [Priority: 0] */  /* [AL_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_1] */
  { /*    60 */ BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_2        },  /* [Priority: 0] */  /* [AL_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_2] */
  { /*    61 */ BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp                },  /* [Priority: 0] */  /* [AL_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp] */
  { /*    62 */ BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp                },  /* [Priority: 0] */  /* [AL_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp] */
  { /*    63 */ BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_Table2                             },  /* [Priority: 0] */  /* [AL_CC_AL_LIN1_ScheduleTable_to_Table2] */
  { /*    64 */ BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table_E                            },  /* [Priority: 0] */  /* [AL_CC_AL_LIN5_ScheduleTable_to_Table_E] */
  { /*    65 */ BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_Table_E                            },  /* [Priority: 0] */  /* [AL_CC_AL_LIN4_ScheduleTable_to_Table_E] */
  { /*    66 */ BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_Table_E                            },  /* [Priority: 0] */  /* [AL_CC_AL_LIN1_ScheduleTable_to_Table_E] */
  { /*    67 */ BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_Table2                             },  /* [Priority: 0] */  /* [AL_CC_AL_LIN4_ScheduleTable_to_Table2] */
  { /*    68 */ BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table1                             },  /* [Priority: 0] */  /* [AL_CC_AL_LIN5_ScheduleTable_to_Table1] */
  { /*    69 */ BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_Table1                             },  /* [Priority: 0] */  /* [AL_CC_AL_LIN4_ScheduleTable_to_Table1] */
  { /*    70 */ BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_Table0                             },  /* [Priority: 0] */  /* [AL_CC_AL_LIN2_ScheduleTable_to_Table0] */
  { /*    71 */ BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_Table1                             },  /* [Priority: 0] */  /* [AL_CC_AL_LIN1_ScheduleTable_to_Table1] */
  { /*    72 */ BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_NULL                               },  /* [Priority: 0] */  /* [AL_CC_AL_LIN5_ScheduleTable_to_NULL] */
  { /*    73 */ BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_NULL                               },  /* [Priority: 0] */  /* [AL_CC_AL_LIN4_ScheduleTable_to_NULL] */
  { /*    74 */ BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_NULL                               },  /* [Priority: 0] */  /* [AL_CC_AL_LIN2_ScheduleTable_to_NULL] */
  { /*    75 */ BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_NULL                               },  /* [Priority: 0] */  /* [AL_CC_AL_LIN1_ScheduleTable_to_NULL] */
  { /*    76 */ BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_2        },  /* [Priority: 0] */  /* [AL_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_2] */
  { /*    77 */ BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_2        },  /* [Priority: 0] */  /* [AL_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_2] */
  { /*    78 */ BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_2        },  /* [Priority: 0] */  /* [AL_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_2] */
  { /*    79 */ BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp_Table_0        },  /* [Priority: 0] */  /* [AL_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp_Table_0] */
  { /*    80 */ BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_1        },  /* [Priority: 0] */  /* [AL_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_1] */
  { /*    81 */ BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_1        },  /* [Priority: 0] */  /* [AL_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_1] */
  { /*    82 */ BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_TX_Disable                            },  /* [Priority: 0] */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_TX_Disable] */
  { /*    83 */ BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_TX_EnableNoinit                       }   /* [Priority: 0] */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_TX_EnableNoinit] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_CanSMChannelMapping
**********************************************************************************************************************/
/** 
  \var    BswM_CanSMChannelMapping
  \brief  Maps the external id of BswMCanSMIndication to an internal id and references immediate request ports.
  \details
  Element                  Description
  ExternalId               External id of BswMCanSMIndication.
  ImmediateUserEndIdx      the end index of the 0:n relation pointing to BswM_ImmediateUser
  ImmediateUserStartIdx    the start index of the 0:n relation pointing to BswM_ImmediateUser
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_CanSMChannelMappingType, BSWM_CONST) BswM_CanSMChannelMapping[5] = {
    /* Index    ExternalId                                       ImmediateUserEndIdx  ImmediateUserStartIdx        Referable Keys */
  { /*     0 */ ComMConf_ComMChannel_CN_Backbone1J1939_0b1f4bae,                  1U,                    0U },  /* [CANSM_CHANNEL_0, MRP_CC_CanSMIndication_CN_Backbone1J1939_0b1f4bae] */
  { /*     1 */ ComMConf_ComMChannel_CN_Backbone2_78967e2c     ,                  2U,                    1U },  /* [CANSM_CHANNEL_1, MRP_CC_CanSMIndication_CN_Backbone2_78967e2c] */
  { /*     2 */ ComMConf_ComMChannel_CN_CabSubnet_9ea693f1     ,                  3U,                    2U },  /* [CANSM_CHANNEL_2, MRP_CC_CanSMIndication_CN_CabSubnet_9ea693f1] */
  { /*     3 */ ComMConf_ComMChannel_CN_FMSNet_fce1aae5        ,                  4U,                    3U },  /* [CANSM_CHANNEL_3, MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5] */
  { /*     4 */ ComMConf_ComMChannel_CN_SecuritySubnet_e7a0ee54,                  5U,                    4U }   /* [CANSM_CHANNEL_4, MRP_CC_CanSMIndication_CN_SecuritySubnet_e7a0ee54] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ComMChannelMapping
**********************************************************************************************************************/
/** 
  \var    BswM_ComMChannelMapping
  \brief  Maps the external id of BswMComMIndication to an internal id and references immediate request ports.
  \details
  Element       Description
  ExternalId    External id of BswMComMIndication.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ComMChannelMappingType, BSWM_CONST) BswM_ComMChannelMapping[10] = {
    /* Index    ExternalId                                             Referable Keys */
  { /*     0 */ ComMConf_ComMChannel_CN_Backbone1J1939_0b1f4bae },  /* [COMM_CHANNEL_0, MRP_ESH_ComMIndication_CN_Backbone1J1939_0b1f4bae] */
  { /*     1 */ ComMConf_ComMChannel_CN_Backbone2_78967e2c      },  /* [COMM_CHANNEL_1, MRP_ESH_ComMIndication_CN_Backbone2_78967e2c] */
  { /*     2 */ ComMConf_ComMChannel_CN_CabSubnet_9ea693f1      },  /* [COMM_CHANNEL_2, MRP_ESH_ComMIndication_CN_CabSubnet_9ea693f1] */
  { /*     3 */ ComMConf_ComMChannel_CN_FMSNet_fce1aae5         },  /* [COMM_CHANNEL_3, MRP_ESH_ComMIndication_CN_FMSNet_fce1aae5] */
  { /*     4 */ ComMConf_ComMChannel_CN_LIN00_2cd9a7df          },  /* [COMM_CHANNEL_4, MRP_ESH_ComMIndication_CN_LIN00_2cd9a7df] */
  { /*     5 */ ComMConf_ComMChannel_CN_LIN01_5bde9749          },  /* [COMM_CHANNEL_5, MRP_ESH_ComMIndication_CN_LIN01_5bde9749] */
  { /*     6 */ ComMConf_ComMChannel_CN_LIN02_c2d7c6f3          },  /* [COMM_CHANNEL_6, MRP_ESH_ComMIndication_CN_LIN02_c2d7c6f3] */
  { /*     7 */ ComMConf_ComMChannel_CN_LIN03_b5d0f665          },  /* [COMM_CHANNEL_7, MRP_ESH_ComMIndication_CN_LIN03_b5d0f665] */
  { /*     8 */ ComMConf_ComMChannel_CN_LIN04_2bb463c6          },  /* [COMM_CHANNEL_8, MRP_ESH_ComMIndication_CN_LIN04_2bb463c6] */
  { /*     9 */ ComMConf_ComMChannel_CN_SecuritySubnet_e7a0ee54 }   /* [COMM_CHANNEL_9, MRP_ESH_ComMIndication_CN_SecuritySubnet_e7a0ee54] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_DeferredRules
**********************************************************************************************************************/
/** 
  \var    BswM_DeferredRules
  \details
  Element     Description
  RulesIdx    the index of the 1:1 relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_DeferredRulesType, BSWM_CONST) BswM_DeferredRules[7] = {
    /* Index    RulesIdx        Referable Keys */
  { /*     0 */      16U },  /* [NoPartitions, R_ESH_RunToPostRun] */
  { /*     1 */      18U },  /* [NoPartitions, R_ESH_WaitToShutdown] */
  { /*     2 */      19U },  /* [NoPartitions, R_ESH_WakeupToPrep] */
  { /*     3 */      20U },  /* [NoPartitions, R_ESH_WaitToWakeup] */
  { /*     4 */      21U },  /* [NoPartitions, R_ESH_WakeupToRun] */
  { /*     5 */      26U },  /* [NoPartitions, R_ESH_PostRun] */
  { /*     6 */      27U }   /* [NoPartitions, R_ESH_PrepToWait] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericMapping
**********************************************************************************************************************/
/** 
  \var    BswM_GenericMapping
  \brief  Maps the external id of BswMGenericRequest to an internal id and references immediate request ports.
  \details
  Element                  Description
  ExternalId               External id of BswMGenericRequest.
  ImmediateUserEndIdx      the end index of the 0:n relation pointing to BswM_ImmediateUser
  ImmediateUserStartIdx    the start index of the 0:n relation pointing to BswM_ImmediateUser
  InitValue                Initialization value of port.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_GenericMappingType, BSWM_CONST) BswM_GenericMapping[3] = {
    /* Index    ExternalId  ImmediateUserEndIdx                          ImmediateUserStartIdx                          InitValue                                                            Referable Keys */
  { /*     0 */ 230       ,                                          6U,                                            5U, BSWM_GENERICVALUE_ESH_State_ESH_INIT                          },  /* [GENERIC_0, MRP_ESH_State] */
  { /*     1 */ 231       ,                                          7U,                                            6U, BSWM_GENERICVALUE_ESH_DemInitStatus_DEM_INITIALIZED           },  /* [GENERIC_1, MRP_ESH_DemInitStatus] */
  { /*     2 */ 232       , BSWM_NO_IMMEDIATEUSERENDIDXOFGENERICMAPPING, BSWM_NO_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING, BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST }   /* [GENERIC_2, MRP_ESH_ComMPendingRequests] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ImmediateUser
**********************************************************************************************************************/
/** 
  \var    BswM_ImmediateUser
  \brief  Contains all immediate request ports.
  \details
  Element             Description
  MaskedBits          contains bitcoded the boolean data of BswM_OnInitOfImmediateUser, BswM_RulesIndUsedOfImmediateUser
  RulesIndEndIdx      the end index of the 0:n relation pointing to BswM_RulesInd
  RulesIndStartIdx    the start index of the 0:n relation pointing to BswM_RulesInd
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ImmediateUserType, BSWM_CONST) BswM_ImmediateUser[19] = {
    /* Index    MaskedBits  RulesIndEndIdx                         RulesIndStartIdx                               Comment                                                                           Referable Keys */
  { /*     0 */      0x01U,                                    3U,                                      0U },  /* [Name: CC_CanSMIndication_CN_Backbone1J1939_0b1f4bae]                 */  /* [MRP_CC_CanSMIndication_CN_Backbone1J1939_0b1f4bae, CANSM_CHANNEL_0] */
  { /*     1 */      0x01U,                                    6U,                                      3U },  /* [Name: CC_CanSMIndication_CN_Backbone2_78967e2c]                      */  /* [MRP_CC_CanSMIndication_CN_Backbone2_78967e2c, CANSM_CHANNEL_1] */
  { /*     2 */      0x01U,                                    9U,                                      6U },  /* [Name: CC_CanSMIndication_CN_CabSubnet_9ea693f1]                      */  /* [MRP_CC_CanSMIndication_CN_CabSubnet_9ea693f1, CANSM_CHANNEL_2] */
  { /*     3 */      0x01U,                                   13U,                                      9U },  /* [Name: CC_CanSMIndication_CN_FMSNet_fce1aae5]                         */  /* [MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5, CANSM_CHANNEL_3] */
  { /*     4 */      0x01U,                                   16U,                                     13U },  /* [Name: CC_CanSMIndication_CN_SecuritySubnet_e7a0ee54]                 */  /* [MRP_CC_CanSMIndication_CN_SecuritySubnet_e7a0ee54, CANSM_CHANNEL_4] */
  { /*     5 */      0x03U,                                   24U,                                     16U },  /* [Name: ESH_State]                                                     */  /* [MRP_ESH_State, GENERIC_0] */
  { /*     6 */      0x00U, BSWM_NO_RULESINDENDIDXOFIMMEDIATEUSER, BSWM_NO_RULESINDSTARTIDXOFIMMEDIATEUSER },  /* [Name: ESH_DemInitStatus]                                             */  /* [MRP_ESH_DemInitStatus, GENERIC_1] */
  { /*     7 */      0x01U,                                   25U,                                     24U },  /* [Name: CC_J1939NmIndication_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289] */  /* [MRP_CC_J1939NmIndication_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289, J1939_NM_0] */
  { /*     8 */      0x01U,                                   26U,                                     25U },  /* [Name: CC_J1939NmIndication_CN_FMSNet_fce1aae5_CIOM_4d5cd289]         */  /* [MRP_CC_J1939NmIndication_CN_FMSNet_fce1aae5_CIOM_4d5cd289, J1939_NM_1] */
  { /*     9 */      0x01U,                                   27U,                                     26U },  /* [Name: CC_LinSMIndication_CN_LIN00_2cd9a7df]                          */  /* [MRP_CC_LinSMIndication_CN_LIN00_2cd9a7df, LINSM_CHANNEL_0] */
  { /*    10 */      0x01U,                                   28U,                                     27U },  /* [Name: CC_LinSMIndication_CN_LIN01_5bde9749]                          */  /* [MRP_CC_LinSMIndication_CN_LIN01_5bde9749, LINSM_CHANNEL_1] */
  { /*    11 */      0x01U,                                   29U,                                     28U },  /* [Name: CC_LinSMIndication_CN_LIN02_c2d7c6f3]                          */  /* [MRP_CC_LinSMIndication_CN_LIN02_c2d7c6f3, LINSM_CHANNEL_2] */
  { /*    12 */      0x01U,                                   30U,                                     29U },  /* [Name: CC_LinSMIndication_CN_LIN03_b5d0f665]                          */  /* [MRP_CC_LinSMIndication_CN_LIN03_b5d0f665, LINSM_CHANNEL_3] */
  { /*    13 */      0x01U,                                   31U,                                     30U },  /* [Name: CC_LinSMIndication_CN_LIN04_2bb463c6]                          */  /* [MRP_CC_LinSMIndication_CN_LIN04_2bb463c6, LINSM_CHANNEL_4] */
  { /*    14 */      0x01U,                                   38U,                                     31U },  /* [Name: LIN1_ScheduleTableRequestMode]                                 */  /* [MRP_LIN1_ScheduleTableRequestMode, SWC_REQUEST_4] */
  { /*    15 */      0x01U,                                   43U,                                     38U },  /* [Name: LIN2_ScheduleTableRequestMode]                                 */  /* [MRP_LIN2_ScheduleTableRequestMode, SWC_REQUEST_5] */
  { /*    16 */      0x01U,                                   50U,                                     43U },  /* [Name: LIN3_ScheduleTableRequestMode]                                 */  /* [MRP_LIN3_ScheduleTableRequestMode, SWC_REQUEST_6] */
  { /*    17 */      0x01U,                                   57U,                                     50U },  /* [Name: LIN4_ScheduleTableRequestMode]                                 */  /* [MRP_LIN4_ScheduleTableRequestMode, SWC_REQUEST_7] */
  { /*    18 */      0x01U,                                   64U,                                     57U }   /* [Name: LIN5_ScheduleTableRequestMode]                                 */  /* [MRP_LIN5_ScheduleTableRequestMode, SWC_REQUEST_8] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_J1939NmMapping
**********************************************************************************************************************/
/** 
  \var    BswM_J1939NmMapping
  \brief  Maps the external id of BswMJ1939NmIndication to an internal id and references immediate request ports.
  \details
  Element                  Description
  ExternalId               External id of BswMJ1939NmIndication.
  ImmediateUserEndIdx      the end index of the 0:n relation pointing to BswM_ImmediateUser
  ImmediateUserStartIdx    the start index of the 0:n relation pointing to BswM_ImmediateUser
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_J1939NmMappingType, BSWM_CONST) BswM_J1939NmMapping[2] = {
    /* Index    ExternalId                                                                                        ImmediateUserEndIdx  ImmediateUserStartIdx        Referable Keys */
  { /*     0 */ ((J1939NmConf_J1939NmNode_CIOM_4d5cd289 << 8) | ComMConf_ComMChannel_CN_Backbone1J1939_0b1f4bae),                  8U,                    7U },  /* [J1939_NM_0, MRP_CC_J1939NmIndication_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289] */
  { /*     1 */ ((J1939NmConf_J1939NmNode_CIOM_4d5cd289 << 8) | ComMConf_ComMChannel_CN_FMSNet_fce1aae5)        ,                  9U,                    8U }   /* [J1939_NM_1, MRP_CC_J1939NmIndication_CN_FMSNet_fce1aae5_CIOM_4d5cd289] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_LinSMMapping
**********************************************************************************************************************/
/** 
  \var    BswM_LinSMMapping
  \brief  Maps the external id of BswMLinSMIndication to an internal id and references immediate request ports.
  \details
  Element                  Description
  ExternalId               External id of BswMLinSMIndication.
  ImmediateUserEndIdx      the end index of the 0:n relation pointing to BswM_ImmediateUser
  ImmediateUserStartIdx    the start index of the 0:n relation pointing to BswM_ImmediateUser
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_LinSMMappingType, BSWM_CONST) BswM_LinSMMapping[5] = {
    /* Index    ExternalId                              ImmediateUserEndIdx  ImmediateUserStartIdx        Referable Keys */
  { /*     0 */ ComMConf_ComMChannel_CN_LIN00_2cd9a7df,                 10U,                    9U },  /* [LINSM_CHANNEL_0, MRP_CC_LinSMIndication_CN_LIN00_2cd9a7df] */
  { /*     1 */ ComMConf_ComMChannel_CN_LIN01_5bde9749,                 11U,                   10U },  /* [LINSM_CHANNEL_1, MRP_CC_LinSMIndication_CN_LIN01_5bde9749] */
  { /*     2 */ ComMConf_ComMChannel_CN_LIN02_c2d7c6f3,                 12U,                   11U },  /* [LINSM_CHANNEL_2, MRP_CC_LinSMIndication_CN_LIN02_c2d7c6f3] */
  { /*     3 */ ComMConf_ComMChannel_CN_LIN03_b5d0f665,                 13U,                   12U },  /* [LINSM_CHANNEL_3, MRP_CC_LinSMIndication_CN_LIN03_b5d0f665] */
  { /*     4 */ ComMConf_ComMChannel_CN_LIN04_2bb463c6,                 14U,                   13U }   /* [LINSM_CHANNEL_4, MRP_CC_LinSMIndication_CN_LIN04_2bb463c6] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ModeRequestMapping
**********************************************************************************************************************/
/** 
  \var    BswM_ModeRequestMapping
  \brief  Maps the external id of BswMSwcModeRequest to an internal id and references immediate request ports.
  \details
  Element                  Description
  ImmediateUserEndIdx      the end index of the 0:n relation pointing to BswM_ImmediateUser
  ImmediateUserStartIdx    the start index of the 0:n relation pointing to BswM_ImmediateUser
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_ModeRequestMappingType, BSWM_CONST) BswM_ModeRequestMapping[9] = {
    /* Index    ImmediateUserEndIdx                              ImmediateUserStartIdx                                    Referable Keys */
  { /*     0 */ BSWM_NO_IMMEDIATEUSERENDIDXOFMODEREQUESTMAPPING, BSWM_NO_IMMEDIATEUSERSTARTIDXOFMODEREQUESTMAPPING },  /* [SWC_REQUEST_0, MRP_ESH_PostRunRequest_0] */
  { /*     1 */ BSWM_NO_IMMEDIATEUSERENDIDXOFMODEREQUESTMAPPING, BSWM_NO_IMMEDIATEUSERSTARTIDXOFMODEREQUESTMAPPING },  /* [SWC_REQUEST_1, MRP_ESH_PostRunRequest_1] */
  { /*     2 */ BSWM_NO_IMMEDIATEUSERENDIDXOFMODEREQUESTMAPPING, BSWM_NO_IMMEDIATEUSERSTARTIDXOFMODEREQUESTMAPPING },  /* [SWC_REQUEST_2, MRP_ESH_RunRequest_0] */
  { /*     3 */ BSWM_NO_IMMEDIATEUSERENDIDXOFMODEREQUESTMAPPING, BSWM_NO_IMMEDIATEUSERSTARTIDXOFMODEREQUESTMAPPING },  /* [SWC_REQUEST_3, MRP_ESH_RunRequest_1] */
  { /*     4 */                                             15U,                                               14U },  /* [SWC_REQUEST_4, MRP_LIN1_ScheduleTableRequestMode] */
  { /*     5 */                                             16U,                                               15U },  /* [SWC_REQUEST_5, MRP_LIN2_ScheduleTableRequestMode] */
  { /*     6 */                                             17U,                                               16U },  /* [SWC_REQUEST_6, MRP_LIN3_ScheduleTableRequestMode] */
  { /*     7 */                                             18U,                                               17U },  /* [SWC_REQUEST_7, MRP_LIN4_ScheduleTableRequestMode] */
  { /*     8 */                                             19U,                                               18U }   /* [SWC_REQUEST_8, MRP_LIN5_ScheduleTableRequestMode] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Rules
**********************************************************************************************************************/
/** 
  \var    BswM_Rules
  \details
  Element    Description
  Id         External id of rule.
  FctPtr     Pointer to the rule function which does the arbitration.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_RulesType, BSWM_CONST) BswM_Rules[66] = {
    /* Index    Id   FctPtr                                                               Referable Keys */
  { /*     0 */  7U, BswM_Rule_CC_CN_CabSubnet_9ea693f1_RX_DM                      },  /* [R_CC_CN_CabSubnet_9ea693f1_RX_DM, MRP_CC_CanSMIndication_CN_CabSubnet_9ea693f1, NoPartitions] */
  { /*     1 */  4U, BswM_Rule_CC_CN_Backbone2_78967e2c_RX_DM                      },  /* [R_CC_CN_Backbone2_78967e2c_RX_DM, MRP_CC_CanSMIndication_CN_Backbone2_78967e2c, NoPartitions] */
  { /*     2 */ 20U, BswM_Rule_CC_CN_SecuritySubnet_e7a0ee54_TX                    },  /* [R_CC_CN_SecuritySubnet_e7a0ee54_TX, MRP_CC_CanSMIndication_CN_SecuritySubnet_e7a0ee54, NoPartitions] */
  { /*     3 */ 15U, BswM_Rule_CC_CN_LIN02_c2d7c6f3                                },  /* [R_CC_CN_LIN02_c2d7c6f3, MRP_CC_LinSMIndication_CN_LIN02_c2d7c6f3, NoPartitions] */
  { /*     4 */ 18U, BswM_Rule_CC_CN_SecuritySubnet_e7a0ee54_RX                    },  /* [R_CC_CN_SecuritySubnet_e7a0ee54_RX, MRP_CC_CanSMIndication_CN_SecuritySubnet_e7a0ee54, NoPartitions] */
  { /*     5 */ 19U, BswM_Rule_CC_CN_SecuritySubnet_e7a0ee54_RX_DM                 },  /* [R_CC_CN_SecuritySubnet_e7a0ee54_RX_DM, MRP_CC_CanSMIndication_CN_SecuritySubnet_e7a0ee54, NoPartitions] */
  { /*     6 */  3U, BswM_Rule_CC_CN_Backbone2_78967e2c_RX                         },  /* [R_CC_CN_Backbone2_78967e2c_RX, MRP_CC_CanSMIndication_CN_Backbone2_78967e2c, NoPartitions] */
  { /*     7 */  8U, BswM_Rule_CC_CN_CabSubnet_9ea693f1_TX                         },  /* [R_CC_CN_CabSubnet_9ea693f1_TX, MRP_CC_CanSMIndication_CN_CabSubnet_9ea693f1, NoPartitions] */
  { /*     8 */  5U, BswM_Rule_CC_CN_Backbone2_78967e2c_TX                         },  /* [R_CC_CN_Backbone2_78967e2c_TX, MRP_CC_CanSMIndication_CN_Backbone2_78967e2c, NoPartitions] */
  { /*     9 */  6U, BswM_Rule_CC_CN_CabSubnet_9ea693f1_RX                         },  /* [R_CC_CN_CabSubnet_9ea693f1_RX, MRP_CC_CanSMIndication_CN_CabSubnet_9ea693f1, NoPartitions] */
  { /*    10 */ 16U, BswM_Rule_CC_CN_LIN03_b5d0f665                                },  /* [R_CC_CN_LIN03_b5d0f665, MRP_CC_LinSMIndication_CN_LIN03_b5d0f665, NoPartitions] */
  { /*    11 */ 14U, BswM_Rule_CC_CN_LIN01_5bde9749                                },  /* [R_CC_CN_LIN01_5bde9749, MRP_CC_LinSMIndication_CN_LIN01_5bde9749, NoPartitions] */
  { /*    12 */ 17U, BswM_Rule_CC_CN_LIN04_2bb463c6                                },  /* [R_CC_CN_LIN04_2bb463c6, MRP_CC_LinSMIndication_CN_LIN04_2bb463c6, NoPartitions] */
  { /*    13 */  1U, BswM_Rule_CC_CN_Backbone1J1939_0b1f4bae_RX                    },  /* [R_CC_CN_Backbone1J1939_0b1f4bae_RX, MRP_CC_CanSMIndication_CN_Backbone1J1939_0b1f4bae, NoPartitions] */
  { /*    14 */  2U, BswM_Rule_CC_CN_Backbone1J1939_0b1f4bae_RX_DM                 },  /* [R_CC_CN_Backbone1J1939_0b1f4bae_RX_DM, MRP_CC_CanSMIndication_CN_Backbone1J1939_0b1f4bae, NoPartitions] */
  { /*    15 */ 13U, BswM_Rule_CC_CN_LIN00_2cd9a7df                                },  /* [R_CC_CN_LIN00_2cd9a7df, MRP_CC_LinSMIndication_CN_LIN00_2cd9a7df, NoPartitions] */
  { /*    16 */ 60U, BswM_Rule_ESH_RunToPostRun                                    },  /* [R_ESH_RunToPostRun, MRP_ESH_State, MRP_ESH_ComMIndication_CN_Backbone1J1939_0b1f4bae, MRP_ESH_ComMIndication_CN_LIN00_2cd9a7df, MRP_ESH_ComMIndication_CN_LIN02_c2d7c6f3, MRP_ESH_ComMIndication_CN_LIN04_2bb463c6, MRP_ESH_ComMIndication_CN_CabSubnet_9ea693f1, MRP_ESH_ComMIndication_CN_LIN03_b5d0f665, MRP_ESH_ComMIndication_CN_Backbone2_78967e2c, MRP_ESH_ComMIndication_CN_LIN01_5bde9749, MRP_ESH_ComMIndication_CN_FMSNet_fce1aae5, MRP_ESH_ComMIndication_CN_SecuritySubnet_e7a0ee54, MRP_ESH_RunRequest_0, MRP_ESH_RunRequest_1, MRP_ESH_SelfRunRequestTimer, MRP_ESH_ModeNotification, NoPartitions] */
  { /*    17 */ 61U, BswM_Rule_ESH_RunToPostRunNested                              },  /* [R_ESH_RunToPostRunNested, NoPartitions] */
  { /*    18 */ 62U, BswM_Rule_ESH_WaitToShutdown                                  },  /* [R_ESH_WaitToShutdown, MRP_ESH_State, MRP_ESH_NvMIndication, MRP_ESH_NvM_WriteAllTimer, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests, NoPartitions] */
  { /*    19 */ 64U, BswM_Rule_ESH_WakeupToPrep                                    },  /* [R_ESH_WakeupToPrep, MRP_ESH_State, MRP_ESH_NvMIndication, MRP_ESH_NvM_CancelWriteAllTimer, MRP_ESH_EcuM_GetPendingWakeupEvents, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests, MRP_ESH_ModeNotification, NoPartitions] */
  { /*    20 */ 63U, BswM_Rule_ESH_WaitToWakeup                                    },  /* [R_ESH_WaitToWakeup, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests, NoPartitions] */
  { /*    21 */ 65U, BswM_Rule_ESH_WakeupToRun                                     },  /* [R_ESH_WakeupToRun, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests, MRP_ESH_NvMIndication, MRP_ESH_NvM_CancelWriteAllTimer, MRP_ESH_ModeNotification, NoPartitions] */
  { /*    22 */ 54U, BswM_Rule_ESH_DemInit                                         },  /* [R_ESH_DemInit, NoPartitions] */
  { /*    23 */ 55U, BswM_Rule_ESH_InitToWakeup                                    },  /* [R_ESH_InitToWakeup, MRP_ESH_State, NoPartitions] */
  { /*    24 */ 58U, BswM_Rule_ESH_PostRunToPrepNested                             },  /* [R_ESH_PostRunToPrepNested, NoPartitions] */
  { /*    25 */ 57U, BswM_Rule_ESH_PostRunNested                                   },  /* [R_ESH_PostRunNested, NoPartitions] */
  { /*    26 */ 56U, BswM_Rule_ESH_PostRun                                         },  /* [R_ESH_PostRun, MRP_ESH_State, MRP_ESH_ModeNotification, NoPartitions] */
  { /*    27 */ 59U, BswM_Rule_ESH_PrepToWait                                      },  /* [R_ESH_PrepToWait, MRP_ESH_State, MRP_ESH_ModeNotification, NoPartitions] */
  { /*    28 */ 10U, BswM_Rule_CC_CN_FMSNet_fce1aae5_RX                            },  /* [R_CC_CN_FMSNet_fce1aae5_RX, MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5, NoPartitions] */
  { /*    29 */ 11U, BswM_Rule_CC_CN_FMSNet_fce1aae5_RX_DM                         },  /* [R_CC_CN_FMSNet_fce1aae5_RX_DM, MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5, NoPartitions] */
  { /*    30 */  0U, BswM_Rule_CC_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX      },  /* [R_CC_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX, MRP_CC_CanSMIndication_CN_Backbone1J1939_0b1f4bae, MRP_CC_J1939NmIndication_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289, NoPartitions] */
  { /*    31 */  9U, BswM_Rule_CC_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX              },  /* [R_CC_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX, MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5, MRP_CC_J1939NmIndication_CN_FMSNet_fce1aae5_CIOM_4d5cd289, NoPartitions] */
  { /*    32 */ 37U, BswM_Rule_CC_Rule_LIN3_Schedule_To_Table1                     },  /* [R_CC_Rule_LIN3_Schedule_To_Table1, MRP_LIN3_ScheduleTableRequestMode, NoPartitions] */
  { /*    33 */ 36U, BswM_Rule_CC_Rule_LIN3_Schedule_To_NULL                       },  /* [R_CC_Rule_LIN3_Schedule_To_NULL, MRP_LIN3_ScheduleTableRequestMode, NoPartitions] */
  { /*    34 */ 38U, BswM_Rule_CC_Rule_LIN3_Schedule_To_Table2                     },  /* [R_CC_Rule_LIN3_Schedule_To_Table2, MRP_LIN3_ScheduleTableRequestMode, NoPartitions] */
  { /*    35 */ 39U, BswM_Rule_CC_Rule_LIN3_Schedule_To_Table_E                    },  /* [R_CC_Rule_LIN3_Schedule_To_Table_E, MRP_LIN3_ScheduleTableRequestMode, NoPartitions] */
  { /*    36 */ 33U, BswM_Rule_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp        },  /* [R_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp, MRP_LIN3_ScheduleTableRequestMode, NoPartitions] */
  { /*    37 */ 34U, BswM_Rule_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table1 },  /* [R_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table1, MRP_LIN3_ScheduleTableRequestMode, NoPartitions] */
  { /*    38 */ 35U, BswM_Rule_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table2 },  /* [R_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table2, MRP_LIN3_ScheduleTableRequestMode, NoPartitions] */
  { /*    39 */ 21U, BswM_Rule_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp        },  /* [R_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp, MRP_LIN1_ScheduleTableRequestMode, NoPartitions] */
  { /*    40 */ 22U, BswM_Rule_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table1 },  /* [R_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table1, MRP_LIN1_ScheduleTableRequestMode, NoPartitions] */
  { /*    41 */ 23U, BswM_Rule_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table2 },  /* [R_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table2, MRP_LIN1_ScheduleTableRequestMode, NoPartitions] */
  { /*    42 */ 24U, BswM_Rule_CC_Rule_LIN1_Schedule_To_NULL                       },  /* [R_CC_Rule_LIN1_Schedule_To_NULL, MRP_LIN1_ScheduleTableRequestMode, NoPartitions] */
  { /*    43 */ 25U, BswM_Rule_CC_Rule_LIN1_Schedule_To_Table1                     },  /* [R_CC_Rule_LIN1_Schedule_To_Table1, MRP_LIN1_ScheduleTableRequestMode, NoPartitions] */
  { /*    44 */ 26U, BswM_Rule_CC_Rule_LIN1_Schedule_To_Table2                     },  /* [R_CC_Rule_LIN1_Schedule_To_Table2, MRP_LIN1_ScheduleTableRequestMode, NoPartitions] */
  { /*    45 */ 27U, BswM_Rule_CC_Rule_LIN1_Schedule_To_Table_E                    },  /* [R_CC_Rule_LIN1_Schedule_To_Table_E, MRP_LIN1_ScheduleTableRequestMode, NoPartitions] */
  { /*    46 */ 28U, BswM_Rule_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp        },  /* [R_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp, MRP_LIN2_ScheduleTableRequestMode, NoPartitions] */
  { /*    47 */ 29U, BswM_Rule_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp_Table0 },  /* [R_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp_Table0, MRP_LIN2_ScheduleTableRequestMode, NoPartitions] */
  { /*    48 */ 30U, BswM_Rule_CC_Rule_LIN2_Schedule_To_NULL                       },  /* [R_CC_Rule_LIN2_Schedule_To_NULL, MRP_LIN2_ScheduleTableRequestMode, NoPartitions] */
  { /*    49 */ 31U, BswM_Rule_CC_Rule_LIN2_Schedule_To_Table0                     },  /* [R_CC_Rule_LIN2_Schedule_To_Table0, MRP_LIN2_ScheduleTableRequestMode, NoPartitions] */
    /* Index    Id   FctPtr                                                               Referable Keys */
  { /*    50 */ 32U, BswM_Rule_CC_Rule_LIN2_Schedule_To_Table_E                    },  /* [R_CC_Rule_LIN2_Schedule_To_Table_E, MRP_LIN2_ScheduleTableRequestMode, NoPartitions] */
  { /*    51 */ 40U, BswM_Rule_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp        },  /* [R_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp, MRP_LIN4_ScheduleTableRequestMode, NoPartitions] */
  { /*    52 */ 41U, BswM_Rule_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table1 },  /* [R_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table1, MRP_LIN4_ScheduleTableRequestMode, NoPartitions] */
  { /*    53 */ 42U, BswM_Rule_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table2 },  /* [R_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table2, MRP_LIN4_ScheduleTableRequestMode, NoPartitions] */
  { /*    54 */ 43U, BswM_Rule_CC_Rule_LIN4_Schedule_To_NULL                       },  /* [R_CC_Rule_LIN4_Schedule_To_NULL, MRP_LIN4_ScheduleTableRequestMode, NoPartitions] */
  { /*    55 */ 44U, BswM_Rule_CC_Rule_LIN4_Schedule_To_Table1                     },  /* [R_CC_Rule_LIN4_Schedule_To_Table1, MRP_LIN4_ScheduleTableRequestMode, NoPartitions] */
  { /*    56 */ 45U, BswM_Rule_CC_Rule_LIN4_Schedule_To_Table2                     },  /* [R_CC_Rule_LIN4_Schedule_To_Table2, MRP_LIN4_ScheduleTableRequestMode, NoPartitions] */
  { /*    57 */ 46U, BswM_Rule_CC_Rule_LIN4_Schedule_To_Table_E                    },  /* [R_CC_Rule_LIN4_Schedule_To_Table_E, MRP_LIN4_ScheduleTableRequestMode, NoPartitions] */
  { /*    58 */ 47U, BswM_Rule_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp        },  /* [R_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp, MRP_LIN5_ScheduleTableRequestMode, NoPartitions] */
  { /*    59 */ 48U, BswM_Rule_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table1 },  /* [R_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table1, MRP_LIN5_ScheduleTableRequestMode, NoPartitions] */
  { /*    60 */ 49U, BswM_Rule_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table2 },  /* [R_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table2, MRP_LIN5_ScheduleTableRequestMode, NoPartitions] */
  { /*    61 */ 50U, BswM_Rule_CC_Rule_LIN5_Schedule_To_NULL                       },  /* [R_CC_Rule_LIN5_Schedule_To_NULL, MRP_LIN5_ScheduleTableRequestMode, NoPartitions] */
  { /*    62 */ 51U, BswM_Rule_CC_Rule_LIN5_Schedule_To_Table1                     },  /* [R_CC_Rule_LIN5_Schedule_To_Table1, MRP_LIN5_ScheduleTableRequestMode, NoPartitions] */
  { /*    63 */ 52U, BswM_Rule_CC_Rule_LIN5_Schedule_To_Table2                     },  /* [R_CC_Rule_LIN5_Schedule_To_Table2, MRP_LIN5_ScheduleTableRequestMode, NoPartitions] */
  { /*    64 */ 53U, BswM_Rule_CC_Rule_LIN5_Schedule_To_Table_E                    },  /* [R_CC_Rule_LIN5_Schedule_To_Table_E, MRP_LIN5_ScheduleTableRequestMode, NoPartitions] */
  { /*    65 */ 12U, BswM_Rule_CC_CN_FMSNet_fce1aae5_TX                            }   /* [R_CC_CN_FMSNet_fce1aae5_TX, MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5, NoPartitions] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RulesInd
**********************************************************************************************************************/
/** 
  \var    BswM_RulesInd
  \brief  the indexes of the 1:1 sorted relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_RulesIndType, BSWM_CONST) BswM_RulesInd[64] = {
  /* Index    RulesInd      Referable Keys */
  /*     0 */      13U,  /* [MRP_CC_CanSMIndication_CN_Backbone1J1939_0b1f4bae] */
  /*     1 */      14U,  /* [MRP_CC_CanSMIndication_CN_Backbone1J1939_0b1f4bae] */
  /*     2 */      30U,  /* [MRP_CC_CanSMIndication_CN_Backbone1J1939_0b1f4bae] */
  /*     3 */       1U,  /* [MRP_CC_CanSMIndication_CN_Backbone2_78967e2c] */
  /*     4 */       6U,  /* [MRP_CC_CanSMIndication_CN_Backbone2_78967e2c] */
  /*     5 */       8U,  /* [MRP_CC_CanSMIndication_CN_Backbone2_78967e2c] */
  /*     6 */       0U,  /* [MRP_CC_CanSMIndication_CN_CabSubnet_9ea693f1] */
  /*     7 */       7U,  /* [MRP_CC_CanSMIndication_CN_CabSubnet_9ea693f1] */
  /*     8 */       9U,  /* [MRP_CC_CanSMIndication_CN_CabSubnet_9ea693f1] */
  /*     9 */      28U,  /* [MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5] */
  /*    10 */      29U,  /* [MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5] */
  /*    11 */      31U,  /* [MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5] */
  /*    12 */      65U,  /* [MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5] */
  /*    13 */       2U,  /* [MRP_CC_CanSMIndication_CN_SecuritySubnet_e7a0ee54] */
  /*    14 */       4U,  /* [MRP_CC_CanSMIndication_CN_SecuritySubnet_e7a0ee54] */
  /*    15 */       5U,  /* [MRP_CC_CanSMIndication_CN_SecuritySubnet_e7a0ee54] */
  /*    16 */      16U,  /* [MRP_ESH_State] */
  /*    17 */      18U,  /* [MRP_ESH_State] */
  /*    18 */      19U,  /* [MRP_ESH_State] */
  /*    19 */      20U,  /* [MRP_ESH_State] */
  /*    20 */      21U,  /* [MRP_ESH_State] */
  /*    21 */      23U,  /* [MRP_ESH_State] */
  /*    22 */      26U,  /* [MRP_ESH_State] */
  /*    23 */      27U,  /* [MRP_ESH_State] */
  /*    24 */      30U,  /* [MRP_CC_J1939NmIndication_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289] */
  /*    25 */      31U,  /* [MRP_CC_J1939NmIndication_CN_FMSNet_fce1aae5_CIOM_4d5cd289] */
  /*    26 */      15U,  /* [MRP_CC_LinSMIndication_CN_LIN00_2cd9a7df] */
  /*    27 */      11U,  /* [MRP_CC_LinSMIndication_CN_LIN01_5bde9749] */
  /*    28 */       3U,  /* [MRP_CC_LinSMIndication_CN_LIN02_c2d7c6f3] */
  /*    29 */      10U,  /* [MRP_CC_LinSMIndication_CN_LIN03_b5d0f665] */
  /*    30 */      12U,  /* [MRP_CC_LinSMIndication_CN_LIN04_2bb463c6] */
  /*    31 */      39U,  /* [MRP_LIN1_ScheduleTableRequestMode] */
  /*    32 */      40U,  /* [MRP_LIN1_ScheduleTableRequestMode] */
  /*    33 */      41U,  /* [MRP_LIN1_ScheduleTableRequestMode] */
  /*    34 */      42U,  /* [MRP_LIN1_ScheduleTableRequestMode] */
  /*    35 */      43U,  /* [MRP_LIN1_ScheduleTableRequestMode] */
  /*    36 */      44U,  /* [MRP_LIN1_ScheduleTableRequestMode] */
  /*    37 */      45U,  /* [MRP_LIN1_ScheduleTableRequestMode] */
  /*    38 */      46U,  /* [MRP_LIN2_ScheduleTableRequestMode] */
  /*    39 */      47U,  /* [MRP_LIN2_ScheduleTableRequestMode] */
  /*    40 */      48U,  /* [MRP_LIN2_ScheduleTableRequestMode] */
  /*    41 */      49U,  /* [MRP_LIN2_ScheduleTableRequestMode] */
  /*    42 */      50U,  /* [MRP_LIN2_ScheduleTableRequestMode] */
  /*    43 */      32U,  /* [MRP_LIN3_ScheduleTableRequestMode] */
  /*    44 */      33U,  /* [MRP_LIN3_ScheduleTableRequestMode] */
  /*    45 */      34U,  /* [MRP_LIN3_ScheduleTableRequestMode] */
  /*    46 */      35U,  /* [MRP_LIN3_ScheduleTableRequestMode] */
  /*    47 */      36U,  /* [MRP_LIN3_ScheduleTableRequestMode] */
  /*    48 */      37U,  /* [MRP_LIN3_ScheduleTableRequestMode] */
  /*    49 */      38U,  /* [MRP_LIN3_ScheduleTableRequestMode] */
  /* Index    RulesInd      Referable Keys */
  /*    50 */      51U,  /* [MRP_LIN4_ScheduleTableRequestMode] */
  /*    51 */      52U,  /* [MRP_LIN4_ScheduleTableRequestMode] */
  /*    52 */      53U,  /* [MRP_LIN4_ScheduleTableRequestMode] */
  /*    53 */      54U,  /* [MRP_LIN4_ScheduleTableRequestMode] */
  /*    54 */      55U,  /* [MRP_LIN4_ScheduleTableRequestMode] */
  /*    55 */      56U,  /* [MRP_LIN4_ScheduleTableRequestMode] */
  /*    56 */      57U,  /* [MRP_LIN4_ScheduleTableRequestMode] */
  /*    57 */      58U,  /* [MRP_LIN5_ScheduleTableRequestMode] */
  /*    58 */      59U,  /* [MRP_LIN5_ScheduleTableRequestMode] */
  /*    59 */      60U,  /* [MRP_LIN5_ScheduleTableRequestMode] */
  /*    60 */      61U,  /* [MRP_LIN5_ScheduleTableRequestMode] */
  /*    61 */      62U,  /* [MRP_LIN5_ScheduleTableRequestMode] */
  /*    62 */      63U,  /* [MRP_LIN5_ScheduleTableRequestMode] */
  /*    63 */      64U   /* [MRP_LIN5_ScheduleTableRequestMode] */
};
#define BSWM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RulesOfConfig
**********************************************************************************************************************/
/** 
  \var    BswM_RulesOfConfig
  \details
  Element        Description
  InitActions
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(BswM_RulesOfConfigType, BSWM_CONST) BswM_RulesOfConfig[1] = {
    /* Index    InitActions                       Comment                    Referable Keys */
  { /*     0 */ BswM_Init_Gen_NoPartitions }   /* [NoPartitions] */  /* [NoPartitions] */
};
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ActionListQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ActionListQueue
  \brief  Variable to store action lists which shall be executed.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_ActionListQueueType, BSWM_VAR_NOINIT) BswM_ActionListQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [AL_CC_AL_CN_CabSubnet_9ea693f1_Disable_DM] */
  /*     1 */  /* [AL_CC_AL_CN_CabSubnet_9ea693f1_Enable_DM] */
  /*     2 */  /* [AL_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_1] */
  /*     3 */  /* [AL_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp] */
  /*     4 */  /* [AL_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_Disable] */
  /*     5 */  /* [AL_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_EnableNoinit] */
  /*     6 */  /* [AL_CC_AL_CN_LIN02_c2d7c6f3_Disable] */
  /*     7 */  /* [AL_CC_AL_CN_LIN02_c2d7c6f3_Enable] */
  /*     8 */  /* [AL_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_Disable] */
  /*     9 */  /* [AL_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_EnableNoinit] */
  /*    10 */  /* [AL_CC_AL_CN_SecuritySubnet_e7a0ee54_Disable_DM] */
  /*    11 */  /* [AL_CC_AL_CN_SecuritySubnet_e7a0ee54_Enable_DM] */
  /*    12 */  /* [AL_CC_AL_CN_Backbone2_78967e2c_RX_Disable] */
  /*    13 */  /* [AL_CC_AL_CN_Backbone2_78967e2c_RX_EnableNoinit] */
  /*    14 */  /* [AL_CC_AL_CN_CabSubnet_9ea693f1_TX_Disable] */
  /*    15 */  /* [AL_CC_AL_CN_CabSubnet_9ea693f1_TX_EnableNoinit] */
  /*    16 */  /* [AL_CC_AL_CN_Backbone2_78967e2c_TX_Disable] */
  /*    17 */  /* [AL_CC_AL_CN_Backbone2_78967e2c_TX_EnableNoinit] */
  /*    18 */  /* [AL_CC_AL_LIN2_ScheduleTable_to_Table_E] */
  /*    19 */  /* [AL_CC_AL_CN_CabSubnet_9ea693f1_RX_EnableNoinit] */
  /*    20 */  /* [AL_CC_AL_LIN5_ScheduleTable_to_Table2] */
  /*    21 */  /* [AL_CC_AL_CN_LIN03_b5d0f665_Enable] */
  /*    22 */  /* [AL_CC_AL_CN_LIN01_5bde9749_Disable] */
  /*    23 */  /* [AL_CC_AL_CN_LIN01_5bde9749_Enable] */
  /*    24 */  /* [AL_CC_AL_CN_LIN04_2bb463c6_Disable] */
  /*    25 */  /* [AL_CC_AL_CN_LIN04_2bb463c6_Enable] */
  /*    26 */  /* [AL_CC_AL_CN_Backbone1J1939_0b1f4bae_RX_Disable] */
  /*    27 */  /* [AL_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp] */
  /*    28 */  /* [AL_CC_AL_CN_Backbone1J1939_0b1f4bae_Disable_DM] */
  /*    29 */  /* [AL_CC_AL_CN_Backbone1J1939_0b1f4bae_Enable_DM] */
  /*    30 */  /* [AL_CC_AL_CN_LIN00_2cd9a7df_Disable] */
  /*    31 */  /* [AL_CC_AL_CN_LIN00_2cd9a7df_Enable] */
  /*    32 */  /* [AL_ESH_AL_ExitRun] */
  /*    33 */  /* [AL_ESH_AL_RunToPostRun] */
  /*    34 */  /* [AL_ESH_AL_WaitForNvMToShutdown] */
  /*    35 */  /* [AL_ESH_AL_WakeupToPrep] */
  /*    36 */  /* [AL_ESH_AL_WaitForNvMWakeup] */
  /*    37 */  /* [AL_ESH_AL_WakeupToRun] */
  /*    38 */  /* [AL_ESH_AL_DemInit] */
  /*    39 */  /* [AL_ESH_AL_InitToWakeup] */
  /*    40 */  /* [AL_ESH_AL_PostRunToPrepShutdown] */
  /*    41 */  /* [AL_ESH_AL_ESH_PostRunToPrepCheck] */
  /*    42 */  /* [AL_ESH_AL_PostRunToRun] */
  /*    43 */  /* [AL_ESH_AL_ExitPostRun] */
  /*    44 */  /* [AL_ESH_AL_PrepShutdownToWaitForNvM] */
  /*    45 */  /* [AL_INIT_AL_Initialize] */
  /*    46 */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_RX_Disable] */
  /*    47 */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_RX_EnableNoinit] */
  /*    48 */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_Disable_DM] */
  /*    49 */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_Enable_DM] */
  /* Index        Referable Keys  */
  /*    50 */  /* [AL_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_Disable] */
  /*    51 */  /* [AL_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_EnableNoinit] */
  /*    52 */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_Disable] */
  /*    53 */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_EnableNoinit] */
  /*    54 */  /* [AL_CC_AL_LIN3_ScheduleTable_to_Table1] */
  /*    55 */  /* [AL_CC_AL_LIN3_ScheduleTable_to_NULL] */
  /*    56 */  /* [AL_CC_AL_LIN3_ScheduleTable_to_Table2] */
  /*    57 */  /* [AL_CC_AL_LIN3_ScheduleTable_to_Table_E] */
  /*    58 */  /* [AL_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp] */
  /*    59 */  /* [AL_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_1] */
  /*    60 */  /* [AL_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_2] */
  /*    61 */  /* [AL_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp] */
  /*    62 */  /* [AL_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp] */
  /*    63 */  /* [AL_CC_AL_LIN1_ScheduleTable_to_Table2] */
  /*    64 */  /* [AL_CC_AL_LIN5_ScheduleTable_to_Table_E] */
  /*    65 */  /* [AL_CC_AL_LIN4_ScheduleTable_to_Table_E] */
  /*    66 */  /* [AL_CC_AL_LIN1_ScheduleTable_to_Table_E] */
  /*    67 */  /* [AL_CC_AL_LIN4_ScheduleTable_to_Table2] */
  /*    68 */  /* [AL_CC_AL_LIN5_ScheduleTable_to_Table1] */
  /*    69 */  /* [AL_CC_AL_LIN4_ScheduleTable_to_Table1] */
  /*    70 */  /* [AL_CC_AL_LIN2_ScheduleTable_to_Table0] */
  /*    71 */  /* [AL_CC_AL_LIN1_ScheduleTable_to_Table1] */
  /*    72 */  /* [AL_CC_AL_LIN5_ScheduleTable_to_NULL] */
  /*    73 */  /* [AL_CC_AL_LIN4_ScheduleTable_to_NULL] */
  /*    74 */  /* [AL_CC_AL_LIN2_ScheduleTable_to_NULL] */
  /*    75 */  /* [AL_CC_AL_LIN1_ScheduleTable_to_NULL] */
  /*    76 */  /* [AL_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_2] */
  /*    77 */  /* [AL_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_2] */
  /*    78 */  /* [AL_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_2] */
  /*    79 */  /* [AL_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp_Table_0] */
  /*    80 */  /* [AL_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_1] */
  /*    81 */  /* [AL_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_1] */
  /*    82 */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_TX_Disable] */
  /*    83 */  /* [AL_CC_AL_CN_FMSNet_fce1aae5_TX_EnableNoinit] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_CanSMChannelState
**********************************************************************************************************************/
/** 
  \var    BswM_CanSMChannelState
  \brief  Variable to store current mode of BswMCanSMIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanSM_BswMCurrentStateType, BSWM_VAR_NOINIT) BswM_CanSMChannelState[5];
  /* Index        Referable Keys  */
  /*     0 */  /* [CANSM_CHANNEL_0, MRP_CC_CanSMIndication_CN_Backbone1J1939_0b1f4bae] */
  /*     1 */  /* [CANSM_CHANNEL_1, MRP_CC_CanSMIndication_CN_Backbone2_78967e2c] */
  /*     2 */  /* [CANSM_CHANNEL_2, MRP_CC_CanSMIndication_CN_CabSubnet_9ea693f1] */
  /*     3 */  /* [CANSM_CHANNEL_3, MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5] */
  /*     4 */  /* [CANSM_CHANNEL_4, MRP_CC_CanSMIndication_CN_SecuritySubnet_e7a0ee54] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ComMChannelState
**********************************************************************************************************************/
/** 
  \var    BswM_ComMChannelState
  \brief  Variable to store current mode of BswMComMIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(ComM_ModeType, BSWM_VAR_NOINIT) BswM_ComMChannelState[10];
  /* Index        Referable Keys  */
  /*     0 */  /* [COMM_CHANNEL_0, MRP_ESH_ComMIndication_CN_Backbone1J1939_0b1f4bae] */
  /*     1 */  /* [COMM_CHANNEL_1, MRP_ESH_ComMIndication_CN_Backbone2_78967e2c] */
  /*     2 */  /* [COMM_CHANNEL_2, MRP_ESH_ComMIndication_CN_CabSubnet_9ea693f1] */
  /*     3 */  /* [COMM_CHANNEL_3, MRP_ESH_ComMIndication_CN_FMSNet_fce1aae5] */
  /*     4 */  /* [COMM_CHANNEL_4, MRP_ESH_ComMIndication_CN_LIN00_2cd9a7df] */
  /*     5 */  /* [COMM_CHANNEL_5, MRP_ESH_ComMIndication_CN_LIN01_5bde9749] */
  /*     6 */  /* [COMM_CHANNEL_6, MRP_ESH_ComMIndication_CN_LIN02_c2d7c6f3] */
  /*     7 */  /* [COMM_CHANNEL_7, MRP_ESH_ComMIndication_CN_LIN03_b5d0f665] */
  /*     8 */  /* [COMM_CHANNEL_8, MRP_ESH_ComMIndication_CN_LIN04_2bb463c6] */
  /*     9 */  /* [COMM_CHANNEL_9, MRP_ESH_ComMIndication_CN_SecuritySubnet_e7a0ee54] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ForcedActionListPriority
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_ForcedActionListPriorityType, BSWM_VAR_NOINIT) BswM_ForcedActionListPriority[1];
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericState
**********************************************************************************************************************/
/** 
  \var    BswM_GenericState
  \brief  Variable to store current mode of BswMGenericRequest mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_ModeType, BSWM_VAR_NOINIT) BswM_GenericState[3];
  /* Index        Referable Keys  */
  /*     0 */  /* [GENERIC_0, MRP_ESH_State] */
  /*     1 */  /* [GENERIC_1, MRP_ESH_DemInitStatus] */
  /*     2 */  /* [GENERIC_2, MRP_ESH_ComMPendingRequests] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Initialized
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_InitializedType, BSWM_VAR_NOINIT) BswM_Initialized[1];
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_J1939NmState
**********************************************************************************************************************/
/** 
  \var    BswM_J1939NmState
  \brief  Variable to store current mode of BswMJ1939NmIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Nm_StateType, BSWM_VAR_NOINIT) BswM_J1939NmState[2];
  /* Index        Referable Keys  */
  /*     0 */  /* [J1939_NM_0, MRP_CC_J1939NmIndication_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289] */
  /*     1 */  /* [J1939_NM_1, MRP_CC_J1939NmIndication_CN_FMSNet_fce1aae5_CIOM_4d5cd289] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_LinSMState
**********************************************************************************************************************/
/** 
  \var    BswM_LinSMState
  \brief  Variable to store current mode of BswMLinSMIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(LinSM_ModeType, BSWM_VAR_NOINIT) BswM_LinSMState[5];
  /* Index        Referable Keys  */
  /*     0 */  /* [LINSM_CHANNEL_0, MRP_CC_LinSMIndication_CN_LIN00_2cd9a7df] */
  /*     1 */  /* [LINSM_CHANNEL_1, MRP_CC_LinSMIndication_CN_LIN01_5bde9749] */
  /*     2 */  /* [LINSM_CHANNEL_2, MRP_CC_LinSMIndication_CN_LIN02_c2d7c6f3] */
  /*     3 */  /* [LINSM_CHANNEL_3, MRP_CC_LinSMIndication_CN_LIN03_b5d0f665] */
  /*     4 */  /* [LINSM_CHANNEL_4, MRP_CC_LinSMIndication_CN_LIN04_2bb463c6] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ModeRequestQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ModeRequestQueue
  \brief  Variable to store an immediate mode request which must be queued because of a current active arbitration.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_ModeRequestQueueType, BSWM_VAR_NOINIT) BswM_ModeRequestQueue[19];
  /* Index        Referable Keys  */
  /*     0 */  /* [MRP_CC_CanSMIndication_CN_Backbone1J1939_0b1f4bae, CANSM_CHANNEL_0] */
  /*     1 */  /* [MRP_CC_CanSMIndication_CN_Backbone2_78967e2c, CANSM_CHANNEL_1] */
  /*     2 */  /* [MRP_CC_CanSMIndication_CN_CabSubnet_9ea693f1, CANSM_CHANNEL_2] */
  /*     3 */  /* [MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5, CANSM_CHANNEL_3] */
  /*     4 */  /* [MRP_CC_CanSMIndication_CN_SecuritySubnet_e7a0ee54, CANSM_CHANNEL_4] */
  /*     5 */  /* [MRP_ESH_State, GENERIC_0] */
  /*     6 */  /* [MRP_ESH_DemInitStatus, GENERIC_1] */
  /*     7 */  /* [MRP_CC_J1939NmIndication_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289, J1939_NM_0] */
  /*     8 */  /* [MRP_CC_J1939NmIndication_CN_FMSNet_fce1aae5_CIOM_4d5cd289, J1939_NM_1] */
  /*     9 */  /* [MRP_CC_LinSMIndication_CN_LIN00_2cd9a7df, LINSM_CHANNEL_0] */
  /*    10 */  /* [MRP_CC_LinSMIndication_CN_LIN01_5bde9749, LINSM_CHANNEL_1] */
  /*    11 */  /* [MRP_CC_LinSMIndication_CN_LIN02_c2d7c6f3, LINSM_CHANNEL_2] */
  /*    12 */  /* [MRP_CC_LinSMIndication_CN_LIN03_b5d0f665, LINSM_CHANNEL_3] */
  /*    13 */  /* [MRP_CC_LinSMIndication_CN_LIN04_2bb463c6, LINSM_CHANNEL_4] */
  /*    14 */  /* [MRP_LIN1_ScheduleTableRequestMode, SWC_REQUEST_4] */
  /*    15 */  /* [MRP_LIN2_ScheduleTableRequestMode, SWC_REQUEST_5] */
  /*    16 */  /* [MRP_LIN3_ScheduleTableRequestMode, SWC_REQUEST_6] */
  /*    17 */  /* [MRP_LIN4_ScheduleTableRequestMode, SWC_REQUEST_7] */
  /*    18 */  /* [MRP_LIN5_ScheduleTableRequestMode, SWC_REQUEST_8] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_NvMJobState
**********************************************************************************************************************/
/** 
  \var    BswM_NvMJobState
  \brief  Variable to store current mode of BswMNvMJobModeIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(NvM_RequestResultType, BSWM_VAR_NOINIT) BswM_NvMJobState[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [NVM_JOB_0, MRP_ESH_NvMIndication] */

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_QueueSemaphore
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_QueueSemaphoreType, BSWM_VAR_NOINIT) BswM_QueueSemaphore[1];
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_QueueWritten
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_QueueWrittenType, BSWM_VAR_NOINIT) BswM_QueueWritten[1];
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RuleStates
**********************************************************************************************************************/
/** 
  \var    BswM_RuleStates
  \brief  Stores the last execution state of the rule.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(BswM_RuleStatesType, BSWM_VAR_NOINIT) BswM_RuleStates[66];
  /* Index        Referable Keys  */
  /*     0 */  /* [R_CC_CN_CabSubnet_9ea693f1_RX_DM, MRP_CC_CanSMIndication_CN_CabSubnet_9ea693f1, NoPartitions] */
  /*     1 */  /* [R_CC_CN_Backbone2_78967e2c_RX_DM, MRP_CC_CanSMIndication_CN_Backbone2_78967e2c, NoPartitions] */
  /*     2 */  /* [R_CC_CN_SecuritySubnet_e7a0ee54_TX, MRP_CC_CanSMIndication_CN_SecuritySubnet_e7a0ee54, NoPartitions] */
  /*     3 */  /* [R_CC_CN_LIN02_c2d7c6f3, MRP_CC_LinSMIndication_CN_LIN02_c2d7c6f3, NoPartitions] */
  /*     4 */  /* [R_CC_CN_SecuritySubnet_e7a0ee54_RX, MRP_CC_CanSMIndication_CN_SecuritySubnet_e7a0ee54, NoPartitions] */
  /*     5 */  /* [R_CC_CN_SecuritySubnet_e7a0ee54_RX_DM, MRP_CC_CanSMIndication_CN_SecuritySubnet_e7a0ee54, NoPartitions] */
  /*     6 */  /* [R_CC_CN_Backbone2_78967e2c_RX, MRP_CC_CanSMIndication_CN_Backbone2_78967e2c, NoPartitions] */
  /*     7 */  /* [R_CC_CN_CabSubnet_9ea693f1_TX, MRP_CC_CanSMIndication_CN_CabSubnet_9ea693f1, NoPartitions] */
  /*     8 */  /* [R_CC_CN_Backbone2_78967e2c_TX, MRP_CC_CanSMIndication_CN_Backbone2_78967e2c, NoPartitions] */
  /*     9 */  /* [R_CC_CN_CabSubnet_9ea693f1_RX, MRP_CC_CanSMIndication_CN_CabSubnet_9ea693f1, NoPartitions] */
  /*    10 */  /* [R_CC_CN_LIN03_b5d0f665, MRP_CC_LinSMIndication_CN_LIN03_b5d0f665, NoPartitions] */
  /*    11 */  /* [R_CC_CN_LIN01_5bde9749, MRP_CC_LinSMIndication_CN_LIN01_5bde9749, NoPartitions] */
  /*    12 */  /* [R_CC_CN_LIN04_2bb463c6, MRP_CC_LinSMIndication_CN_LIN04_2bb463c6, NoPartitions] */
  /*    13 */  /* [R_CC_CN_Backbone1J1939_0b1f4bae_RX, MRP_CC_CanSMIndication_CN_Backbone1J1939_0b1f4bae, NoPartitions] */
  /*    14 */  /* [R_CC_CN_Backbone1J1939_0b1f4bae_RX_DM, MRP_CC_CanSMIndication_CN_Backbone1J1939_0b1f4bae, NoPartitions] */
  /*    15 */  /* [R_CC_CN_LIN00_2cd9a7df, MRP_CC_LinSMIndication_CN_LIN00_2cd9a7df, NoPartitions] */
  /*    16 */  /* [R_ESH_RunToPostRun, MRP_ESH_State, MRP_ESH_ComMIndication_CN_Backbone1J1939_0b1f4bae, MRP_ESH_ComMIndication_CN_LIN00_2cd9a7df, MRP_ESH_ComMIndication_CN_LIN02_c2d7c6f3, MRP_ESH_ComMIndication_CN_LIN04_2bb463c6, MRP_ESH_ComMIndication_CN_CabSubnet_9ea693f1, MRP_ESH_ComMIndication_CN_LIN03_b5d0f665, MRP_ESH_ComMIndication_CN_Backbone2_78967e2c, MRP_ESH_ComMIndication_CN_LIN01_5bde9749, MRP_ESH_ComMIndication_CN_FMSNet_fce1aae5, MRP_ESH_ComMIndication_CN_SecuritySubnet_e7a0ee54, MRP_ESH_RunRequest_0, MRP_ESH_RunRequest_1, MRP_ESH_SelfRunRequestTimer, MRP_ESH_ModeNotification, NoPartitions] */
  /*    17 */  /* [R_ESH_RunToPostRunNested, NoPartitions] */
  /*    18 */  /* [R_ESH_WaitToShutdown, MRP_ESH_State, MRP_ESH_NvMIndication, MRP_ESH_NvM_WriteAllTimer, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests, NoPartitions] */
  /*    19 */  /* [R_ESH_WakeupToPrep, MRP_ESH_State, MRP_ESH_NvMIndication, MRP_ESH_NvM_CancelWriteAllTimer, MRP_ESH_EcuM_GetPendingWakeupEvents, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests, MRP_ESH_ModeNotification, NoPartitions] */
  /*    20 */  /* [R_ESH_WaitToWakeup, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests, NoPartitions] */
  /*    21 */  /* [R_ESH_WakeupToRun, MRP_ESH_State, MRP_ESH_EcuM_GetValidatedWakeupEvents, MRP_ESH_ComMPendingRequests, MRP_ESH_NvMIndication, MRP_ESH_NvM_CancelWriteAllTimer, MRP_ESH_ModeNotification, NoPartitions] */
  /*    22 */  /* [R_ESH_DemInit, NoPartitions] */
  /*    23 */  /* [R_ESH_InitToWakeup, MRP_ESH_State, NoPartitions] */
  /*    24 */  /* [R_ESH_PostRunToPrepNested, NoPartitions] */
  /*    25 */  /* [R_ESH_PostRunNested, NoPartitions] */
  /*    26 */  /* [R_ESH_PostRun, MRP_ESH_State, MRP_ESH_ModeNotification, NoPartitions] */
  /*    27 */  /* [R_ESH_PrepToWait, MRP_ESH_State, MRP_ESH_ModeNotification, NoPartitions] */
  /*    28 */  /* [R_CC_CN_FMSNet_fce1aae5_RX, MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5, NoPartitions] */
  /*    29 */  /* [R_CC_CN_FMSNet_fce1aae5_RX_DM, MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5, NoPartitions] */
  /*    30 */  /* [R_CC_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX, MRP_CC_CanSMIndication_CN_Backbone1J1939_0b1f4bae, MRP_CC_J1939NmIndication_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289, NoPartitions] */
  /*    31 */  /* [R_CC_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX, MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5, MRP_CC_J1939NmIndication_CN_FMSNet_fce1aae5_CIOM_4d5cd289, NoPartitions] */
  /*    32 */  /* [R_CC_Rule_LIN3_Schedule_To_Table1, MRP_LIN3_ScheduleTableRequestMode, NoPartitions] */
  /*    33 */  /* [R_CC_Rule_LIN3_Schedule_To_NULL, MRP_LIN3_ScheduleTableRequestMode, NoPartitions] */
  /*    34 */  /* [R_CC_Rule_LIN3_Schedule_To_Table2, MRP_LIN3_ScheduleTableRequestMode, NoPartitions] */
  /*    35 */  /* [R_CC_Rule_LIN3_Schedule_To_Table_E, MRP_LIN3_ScheduleTableRequestMode, NoPartitions] */
  /*    36 */  /* [R_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp, MRP_LIN3_ScheduleTableRequestMode, NoPartitions] */
  /*    37 */  /* [R_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table1, MRP_LIN3_ScheduleTableRequestMode, NoPartitions] */
  /*    38 */  /* [R_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table2, MRP_LIN3_ScheduleTableRequestMode, NoPartitions] */
  /*    39 */  /* [R_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp, MRP_LIN1_ScheduleTableRequestMode, NoPartitions] */
  /*    40 */  /* [R_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table1, MRP_LIN1_ScheduleTableRequestMode, NoPartitions] */
  /*    41 */  /* [R_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table2, MRP_LIN1_ScheduleTableRequestMode, NoPartitions] */
  /*    42 */  /* [R_CC_Rule_LIN1_Schedule_To_NULL, MRP_LIN1_ScheduleTableRequestMode, NoPartitions] */
  /*    43 */  /* [R_CC_Rule_LIN1_Schedule_To_Table1, MRP_LIN1_ScheduleTableRequestMode, NoPartitions] */
  /*    44 */  /* [R_CC_Rule_LIN1_Schedule_To_Table2, MRP_LIN1_ScheduleTableRequestMode, NoPartitions] */
  /*    45 */  /* [R_CC_Rule_LIN1_Schedule_To_Table_E, MRP_LIN1_ScheduleTableRequestMode, NoPartitions] */
  /*    46 */  /* [R_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp, MRP_LIN2_ScheduleTableRequestMode, NoPartitions] */
  /*    47 */  /* [R_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp_Table0, MRP_LIN2_ScheduleTableRequestMode, NoPartitions] */
  /*    48 */  /* [R_CC_Rule_LIN2_Schedule_To_NULL, MRP_LIN2_ScheduleTableRequestMode, NoPartitions] */
  /*    49 */  /* [R_CC_Rule_LIN2_Schedule_To_Table0, MRP_LIN2_ScheduleTableRequestMode, NoPartitions] */
  /* Index        Referable Keys  */
  /*    50 */  /* [R_CC_Rule_LIN2_Schedule_To_Table_E, MRP_LIN2_ScheduleTableRequestMode, NoPartitions] */
  /*    51 */  /* [R_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp, MRP_LIN4_ScheduleTableRequestMode, NoPartitions] */
  /*    52 */  /* [R_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table1, MRP_LIN4_ScheduleTableRequestMode, NoPartitions] */
  /*    53 */  /* [R_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table2, MRP_LIN4_ScheduleTableRequestMode, NoPartitions] */
  /*    54 */  /* [R_CC_Rule_LIN4_Schedule_To_NULL, MRP_LIN4_ScheduleTableRequestMode, NoPartitions] */
  /*    55 */  /* [R_CC_Rule_LIN4_Schedule_To_Table1, MRP_LIN4_ScheduleTableRequestMode, NoPartitions] */
  /*    56 */  /* [R_CC_Rule_LIN4_Schedule_To_Table2, MRP_LIN4_ScheduleTableRequestMode, NoPartitions] */
  /*    57 */  /* [R_CC_Rule_LIN4_Schedule_To_Table_E, MRP_LIN4_ScheduleTableRequestMode, NoPartitions] */
  /*    58 */  /* [R_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp, MRP_LIN5_ScheduleTableRequestMode, NoPartitions] */
  /*    59 */  /* [R_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table1, MRP_LIN5_ScheduleTableRequestMode, NoPartitions] */
  /*    60 */  /* [R_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table2, MRP_LIN5_ScheduleTableRequestMode, NoPartitions] */
  /*    61 */  /* [R_CC_Rule_LIN5_Schedule_To_NULL, MRP_LIN5_ScheduleTableRequestMode, NoPartitions] */
  /*    62 */  /* [R_CC_Rule_LIN5_Schedule_To_Table1, MRP_LIN5_ScheduleTableRequestMode, NoPartitions] */
  /*    63 */  /* [R_CC_Rule_LIN5_Schedule_To_Table2, MRP_LIN5_ScheduleTableRequestMode, NoPartitions] */
  /*    64 */  /* [R_CC_Rule_LIN5_Schedule_To_Table_E, MRP_LIN5_ScheduleTableRequestMode, NoPartitions] */
  /*    65 */  /* [R_CC_CN_FMSNet_fce1aae5_TX, MRP_CC_CanSMIndication_CN_FMSNet_fce1aae5, NoPartitions] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerState
**********************************************************************************************************************/
/** 
  \var    BswM_TimerState
  \brief  Variable to store current state of BswMTimer (STARTED, STOPPER OR EXPIRED).
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_TimerStateType, BSWM_VAR_NOINIT) BswM_TimerState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [MRP_ESH_NvM_CancelWriteAllTimer] */
  /*     1 */  /* [MRP_ESH_NvM_WriteAllTimer] */
  /*     2 */  /* [MRP_ESH_SelfRunRequestTimer] */

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerValue
**********************************************************************************************************************/
/** 
  \var    BswM_TimerValue
  \brief  Variable to store current timer values.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uBswM_TimerValueType, BSWM_VAR_NOINIT) BswM_TimerValue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [MRP_ESH_NvM_CancelWriteAllTimer] */
  /*     1 */  /* [MRP_ESH_NvM_WriteAllTimer] */
  /*     2 */  /* [MRP_ESH_SelfRunRequestTimer] */

#define BSWM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/* PRQA L:GLOBALDATADECLARATIONS */


#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ FUNCTIONS
 ----------------------------------------------------------------------------- */
/**********************************************************************************************************************
 *  BswM_ExecuteIpduGroupControl()
 **********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_ExecuteIpduGroupControl(void)
{
  Com_IpduGroupVector ipduGroupState;
  Com_IpduGroupVector dmState;
  uint16 iCnt;
  uint8 controlInvocation = BSWM_GROUPCONTROL_IDLE;

  SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  if(BswM_PduGroupControlInvocation != BSWM_GROUPCONTROL_IDLE)
  {
    if((BswM_PduGroupControlInvocation & BSWM_GROUPCONTROL_NORMAL) != 0u)
    {
      iCnt = BSWM_IPDUGROUPVECTORSIZE;
      while(iCnt-- > (uint16)0x0000) /* PRQA S 3440 */ /* MD_BswM_3440 */
      {
        ipduGroupState[iCnt] = BswM_ComIPduGroupState[iCnt]; /* SBSW_BSWM_SETIPDUGROUPVECTOR */
      }
    }
    if((BswM_PduGroupControlInvocation & BSWM_GROUPCONTROL_DM) != 0u)
    {
      iCnt = BSWM_IPDUGROUPVECTORSIZE;
      while(iCnt-- > (uint16)0x0000) /* PRQA S 3440 */ /* MD_BswM_3440 */
      {
        dmState[iCnt] = BswM_ComRxIPduGroupDMState[iCnt]; /* SBSW_BSWM_SETIPDUGROUPVECTOR */
      }
    }
    controlInvocation = BswM_PduGroupControlInvocation;
    BswM_PduGroupControlInvocation = BSWM_GROUPCONTROL_IDLE;
  }
  SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if(controlInvocation != BSWM_GROUPCONTROL_IDLE)
  {
    if((controlInvocation & BSWM_GROUPCONTROL_NORMAL) != 0u)
    {
      Com_IpduGroupControl(ipduGroupState, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
    }
    if((controlInvocation & BSWM_GROUPCONTROL_DM) != 0u)
    {
      Com_ReceptionDMControl(dmState); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
    }
  }
} /* PRQA S 6010, 6030 */ /* MD_MSR_STPTH, MD_MSR_STCYC */

/**********************************************************************************************************************
 *  BswM_Action_RuleHandler()
 **********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_RuleHandler(BswM_HandleType handleId)
{
  BswM_HandleType actionListIndex;
  Std_ReturnType retVal = E_NOT_OK;
  
  if (handleId < BswM_GetSizeOfRules())
  {
    SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    actionListIndex = BswM_GetFctPtrOfRules(handleId)(); /* SBSW_BSWM_RULEFCTPTR */
    SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    if(actionListIndex < BswM_GetSizeOfActionLists())
    {
      retVal = BswM_GetFctPtrOfActionLists(actionListIndex)(); /* SBSW_BSWM_ACTIONLISTFCTPTR */
    }
    else
    {
      retVal = E_OK;
    }
  }
  return retVal;
} 

/**********************************************************************************************************************
 *  BswM_UpdateRuleStates()
 **********************************************************************************************************************/
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateRuleStates(BswM_SizeOfRuleStatesType ruleId, BswM_RuleStatesType state)
{
  if (ruleId < BswM_GetSizeOfRuleStates())
  {
    BswM_SetRuleStates(ruleId, state); /* SBSW_BSWM_SETRULESTATE */
  }
}

/**********************************************************************************************************************
 *  BswM_UpdateTimer()
 **********************************************************************************************************************/
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_UpdateTimer(BswM_SizeOfTimerValueType timerId, BswM_TimerValueType value)
{
  if (timerId < BswM_GetSizeOfTimerValue())
  {
      SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
      BswM_SetTimerValue(timerId, value); /* SBSW_BSWM_SETTIMER */
      BswM_SetTimerState(timerId, (BswM_TimerStateType)((value != 0u) ? BSWM_TIMER_STARTED : BSWM_TIMER_STOPPED)); /* SBSW_BSWM_SETTIMER */
      SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
}

/**********************************************************************************************************************
 *  BswM_Init_Gen_NoPartitions
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_Init_Gen_NoPartitions(void)
{

  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = 0xFF;
  Request_ESH_RunRequest_0_requestedMode = RELEASED;
  Request_ESH_RunRequest_1_requestedMode = RELEASED;
  Request_ESH_PostRunRequest_0_requestedMode = RELEASED;
  Request_ESH_PostRunRequest_1_requestedMode = RELEASED;
  Request_LIN3_ScheduleTableRequestMode_requestedMode = LIN3_NULL;
  Request_LIN1_ScheduleTableRequestMode_requestedMode = LIN1_NULL;
  Request_LIN2_ScheduleTableRequestMode_requestedMode = LIN2_NULL;
  Request_LIN4_ScheduleTableRequestMode_requestedMode = LIN4_NULL;
  Request_LIN5_ScheduleTableRequestMode_requestedMode = LIN5_NULL;
  BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_STARTUP;
  BswM_PduGroupControlInvocation = BSWM_GROUPCONTROL_IDLE;

  /* PRQA S 3109 COMCLEARIPDU */ /* MD_BswM_3109 */
  Com_ClearIpduGroupVector(BswM_ComIPduGroupState); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  Com_ClearIpduGroupVector(BswM_ComRxIPduGroupDMState); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMCLEARIPDU */

  (void)BswM_ActionList_INIT_AL_Initialize();
}

/**********************************************************************************************************************
 *  BswMRteRequestFunctions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_Read_LIN3_ScheduleTableRequestMode
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_Read_LIN3_ScheduleTableRequestMode(void)
{
  (void)Rte_Read_Request_LIN3_ScheduleTableRequestMode_requestedMode(&Request_LIN3_ScheduleTableRequestMode_requestedMode);  /* SBSW_BSWM_RTE_READ */
  BswM_ImmediateSwcRequest(6);
}

/**********************************************************************************************************************
 *  BswM_Read_LIN1_ScheduleTableRequestMode
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_Read_LIN1_ScheduleTableRequestMode(void)
{
  (void)Rte_Read_Request_LIN1_ScheduleTableRequestMode_requestedMode(&Request_LIN1_ScheduleTableRequestMode_requestedMode);  /* SBSW_BSWM_RTE_READ */
  BswM_ImmediateSwcRequest(4);
}

/**********************************************************************************************************************
 *  BswM_Read_LIN2_ScheduleTableRequestMode
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_Read_LIN2_ScheduleTableRequestMode(void)
{
  (void)Rte_Read_Request_LIN2_ScheduleTableRequestMode_requestedMode(&Request_LIN2_ScheduleTableRequestMode_requestedMode);  /* SBSW_BSWM_RTE_READ */
  BswM_ImmediateSwcRequest(5);
}

/**********************************************************************************************************************
 *  BswM_Read_LIN4_ScheduleTableRequestMode
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_Read_LIN4_ScheduleTableRequestMode(void)
{
  (void)Rte_Read_Request_LIN4_ScheduleTableRequestMode_requestedMode(&Request_LIN4_ScheduleTableRequestMode_requestedMode);  /* SBSW_BSWM_RTE_READ */
  BswM_ImmediateSwcRequest(7);
}

/**********************************************************************************************************************
 *  BswM_Read_LIN5_ScheduleTableRequestMode
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_Read_LIN5_ScheduleTableRequestMode(void)
{
  (void)Rte_Read_Request_LIN5_ScheduleTableRequestMode_requestedMode(&Request_LIN5_ScheduleTableRequestMode_requestedMode);  /* SBSW_BSWM_RTE_READ */
  BswM_ImmediateSwcRequest(8);
}

/**********************************************************************************************************************
 *  BswM_ImmediateSwcRequest
 *********************************************************************************************************************/
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_ImmediateSwcRequest(BswM_SizeOfModeRequestMappingType requestId)
{
  if(requestId < BswM_GetSizeOfModeRequestMapping())
  {
    BswM_ImmediateModeRequest(BswM_GetImmediateUserStartIdxOfModeRequestMapping(requestId), BswM_GetImmediateUserEndIdxOfModeRequestMapping(requestId), BSWM_SWCREQUESTMODE_ID);
  }
}

/**********************************************************************************************************************
 *  BswM_ModeNotificationFct
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_ModeNotificationFct(void)
{
  if(BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode != 0xFF)
  {
    if(Rte_Switch_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode) == RTE_E_OK)
    {
      BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = 0xFF;
    }
  }
}

/**********************************************************************************************************************
 *  BswM_SwcModeRequestUpdateFct
 *********************************************************************************************************************/
FUNC(void, BSWM_CODE) BswM_SwcModeRequestUpdateFct(void)
{
  uint32 mode;
  mode = Rte_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode();
  if (mode != RTE_TRANSITION_ESH_Mode)
  {
    BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode = (Rte_ModeType_ESH_Mode)mode;
  }
  (void)Rte_Read_Request_ESH_RunRequest_0_requestedMode(&Request_ESH_RunRequest_0_requestedMode); /* SBSW_BSWM_RTE_READ */
  (void)Rte_Read_Request_ESH_RunRequest_1_requestedMode(&Request_ESH_RunRequest_1_requestedMode); /* SBSW_BSWM_RTE_READ */
  (void)Rte_Read_Request_ESH_PostRunRequest_0_requestedMode(&Request_ESH_PostRunRequest_0_requestedMode); /* SBSW_BSWM_RTE_READ */
  (void)Rte_Read_Request_ESH_PostRunRequest_1_requestedMode(&Request_ESH_PostRunRequest_1_requestedMode); /* SBSW_BSWM_RTE_READ */
}

/**********************************************************************************************************************
 *  BswMActionListFunctions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_Disable_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_Disable_DM(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oCabSubnet_Rx_063a5fbc, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkDmControlInvocation();
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_Enable_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_Enable_DM(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oCabSubnet_Rx_063a5fbc, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkDmControlInvocation();
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_1(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN00_2cd9a7df, LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_1_2a158a89);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oBackbone2_Rx_4e624434, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkDmControlInvocation();
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oBackbone2_Rx_4e624434, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkDmControlInvocation();
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oSecuritySubnet_Tx_6c66ba3a, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oSecuritySubnet_Tx_6c66ba3a, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_EnableNoinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_EnableNoinit(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oSecuritySubnet_Tx_6c66ba3a, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oSecuritySubnet_Tx_6c66ba3a, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_LIN02_c2d7c6f3_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN02_c2d7c6f3_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN02_Tx_214b70a7, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN02_Tx_214b70a7, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN02_Rx_7711d721, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN02_Rx_7711d721, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_LIN02_c2d7c6f3_Enable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN02_c2d7c6f3_Enable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN02_Tx_214b70a7, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN02_Tx_214b70a7, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN02_Rx_7711d721, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN02_Rx_7711d721, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oSecuritySubnet_Rx_3a3c1dbc, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oSecuritySubnet_Rx_3a3c1dbc, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_EnableNoinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_EnableNoinit(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oSecuritySubnet_Rx_3a3c1dbc, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oSecuritySubnet_Rx_3a3c1dbc, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_Disable_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_Disable_DM(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oSecuritySubnet_Rx_3a3c1dbc, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkDmControlInvocation();
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_Enable_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_Enable_DM(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oSecuritySubnet_Rx_3a3c1dbc, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkDmControlInvocation();
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_RX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_RX_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oBackbone2_Rx_4e624434, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oBackbone2_Rx_4e624434, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_RX_EnableNoinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_RX_EnableNoinit(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oBackbone2_Rx_4e624434, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oBackbone2_Rx_4e624434, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_TX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_TX_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oCabSubnet_Tx_5060f83a, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oCabSubnet_Tx_5060f83a, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_TX_EnableNoinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_TX_EnableNoinit(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oCabSubnet_Tx_5060f83a, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oCabSubnet_Tx_5060f83a, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_TX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_TX_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oBackbone2_Tx_1838e3b2, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oBackbone2_Tx_1838e3b2, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_TX_EnableNoinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_TX_EnableNoinit(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oBackbone2_Tx_1838e3b2, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oBackbone2_Tx_1838e3b2, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_Table_E
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_Table_E(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN01_5bde9749, LinSMConf_LinSMSchedule_Table_e_dbb68a08);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oCabSubnet_Rx_063a5fbc, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oCabSubnet_Rx_063a5fbc, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_RX_EnableNoinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_RX_EnableNoinit(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oCabSubnet_Rx_063a5fbc, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oCabSubnet_Rx_063a5fbc, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table2(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN04_2bb463c6, LinSMConf_LinSMSchedule_Table_2_aa1a2032);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN03_Tx_99f717c2, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN03_Tx_99f717c2, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN03_Rx_cfadb044, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN03_Rx_cfadb044, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_LIN03_b5d0f665_Enable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN03_b5d0f665_Enable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN03_Tx_99f717c2, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN03_Tx_99f717c2, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN03_Rx_cfadb044, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN03_Rx_cfadb044, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_LIN01_5bde9749_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN01_5bde9749_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN01_Tx_33fedf49, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN01_Tx_33fedf49, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN01_Rx_65a478cf, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN01_Rx_65a478cf, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_LIN01_5bde9749_Enable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN01_5bde9749_Enable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN01_Tx_33fedf49, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN01_Tx_33fedf49, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN01_Rx_65a478cf, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN01_Rx_65a478cf, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_LIN04_2bb463c6_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN04_2bb463c6_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN04_Tx_04202f7b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN04_Tx_04202f7b, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN04_Rx_527a88fd, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN04_Rx_527a88fd, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_LIN04_2bb463c6_Enable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN04_2bb463c6_Enable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN04_Tx_04202f7b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN04_Tx_04202f7b, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN04_Rx_527a88fd, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN04_Rx_527a88fd, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_RX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_RX_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oBackbone1J1939_Rx_BC_405bc776, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oBackbone1J1939_Rx_BC_405bc776, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oBackbone1J1939_Rx_BC_405bc776, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oBackbone1J1939_Rx_BC_405bc776, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_Disable_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_Disable_DM(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oBackbone1J1939_Rx_BC_405bc776, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkDmControlInvocation();
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_Enable_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_Enable_DM(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oBackbone1J1939_Rx_BC_405bc776, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkDmControlInvocation();
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_LIN00_2cd9a7df_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN00_2cd9a7df_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN00_Tx_8b42b82c, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN00_Tx_8b42b82c, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN00_Rx_dd181faa, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN00_Rx_dd181faa, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_LIN00_2cd9a7df_Enable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_LIN00_2cd9a7df_Enable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN00_Tx_8b42b82c, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN00_Tx_8b42b82c, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oLIN00_Rx_dd181faa, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oLIN00_Rx_dd181faa, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_ExitRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ExitRun(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0();
  /*lint -restore */
  ESH_ComM_CheckPendingRequests();
  (void)BswM_Action_RuleHandler(BSWM_ID_RULE_ESH_RunToPostRunNested);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_RunToPostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_RunToPostRun(void)
{
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_Backbone1J1939_0b1f4bae, FALSE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN00_2cd9a7df, FALSE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN02_c2d7c6f3, FALSE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN04_2bb463c6, FALSE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_CabSubnet_9ea693f1, FALSE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN03_b5d0f665, FALSE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_Backbone2_78967e2c, FALSE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN01_5bde9749, FALSE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_FMSNet_fce1aae5, FALSE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_SecuritySubnet_e7a0ee54, FALSE);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  EcuM_ClearValidatedWakeupEvent(ECUM_WKSOURCE_ALL_SOURCES);
  /*lint -restore */
  BswM_ESH_OnEnterPostRun();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_POSTRUN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_POST_RUN);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WaitForNvMToShutdown
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMToShutdown(void)
{
  BswM_UpdateTimer(BSWM_TMR_ESH_NvM_WriteAllTimer, 0U);
  BswM_ESH_OnEnterShutdown();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  (void)EcuM_GoToSelectedShutdownTarget();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WakeupToPrep
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToPrep(void)
{
  BswM_ESH_OnEnterPrepShutdown();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_SHUTDOWN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_PREP_SHUTDOWN);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WaitForNvMWakeup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WaitForNvMWakeup(void)
{
  BswM_UpdateTimer(BSWM_TMR_ESH_NvM_WriteAllTimer, 0U);
  BswM_UpdateTimer(BSWM_TMR_ESH_NvM_CancelWriteAllTimer, 6000UL);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  NvM_CancelWriteAll();
  /*lint -restore */
  BswM_ESH_OnEnterWakeup();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_WAKEUP;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_WakeupToRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_WakeupToRun(void)
{
  BswM_UpdateTimer(BSWM_TMR_ESH_NvM_CancelWriteAllTimer, 0U);
  (void)BswM_Action_RuleHandler(BSWM_ID_RULE_ESH_DemInit);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_Backbone1J1939_0b1f4bae, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN00_2cd9a7df, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN02_c2d7c6f3, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN04_2bb463c6, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_CabSubnet_9ea693f1, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN03_b5d0f665, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_Backbone2_78967e2c, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN01_5bde9749, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_FMSNet_fce1aae5, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_SecuritySubnet_e7a0ee54, TRUE);
  BswM_UpdateTimer(BSWM_TMR_ESH_SelfRunRequestTimer, 1000UL);
  BswM_ESH_OnEnterRun();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_RUN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_RUN);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_DemInit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_DemInit(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_Init(EcuM_GlobalPBConfig_Ptr->CfgPtr_Dem_Init);
  /*lint -restore */
  BswM_RequestMode(BSWM_GENERIC_ESH_DemInitStatus, BSWM_GENERICVALUE_ESH_DemInitStatus_DEM_INITIALIZED);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_InitToWakeup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_InitToWakeup(void)
{
  BswM_ESH_OnEnterWakeup();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_WAKEUP;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_PostRunToPrepShutdown
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PostRunToPrepShutdown(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_Shutdown();
  /*lint -restore */
  BswM_RequestMode(BSWM_GENERIC_ESH_DemInitStatus, BSWM_GENERICVALUE_ESH_DemInitStatus_DEM_NOT_INITIALIZED);
  BswM_ESH_OnEnterPrepShutdown();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_SHUTDOWN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_PREP_SHUTDOWN);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck(void)
{
  (void)BswM_Action_RuleHandler(BSWM_ID_RULE_ESH_PostRunToPrepNested);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_PostRunToRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PostRunToRun(void)
{
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_Backbone1J1939_0b1f4bae, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN00_2cd9a7df, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN02_c2d7c6f3, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN04_2bb463c6, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_CabSubnet_9ea693f1, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN03_b5d0f665, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_Backbone2_78967e2c, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN01_5bde9749, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_FMSNet_fce1aae5, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_SecuritySubnet_e7a0ee54, TRUE);
  BswM_UpdateTimer(BSWM_TMR_ESH_SelfRunRequestTimer, 1000UL);
  BswM_ESH_OnEnterRun();
  BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_ESH_Mode_RUN;
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_RUN);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_ExitPostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_ExitPostRun(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0();
  /*lint -restore */
  ESH_ComM_CheckPendingRequests();
  (void)BswM_Action_RuleHandler(BSWM_ID_RULE_ESH_PostRunNested);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM(void)
{
  BswM_UpdateTimer(BSWM_TMR_ESH_NvM_WriteAllTimer, 6000UL);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  NvM_WriteAll();
  /*lint -restore */
  ESH_ComM_CheckPendingRequests();
  BswM_ESH_OnEnterWaitForNvm();
  BswM_RequestMode(BSWM_GENERIC_ESH_State, BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_INIT_AL_Initialize
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_INIT_AL_Initialize(void)
{
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Can_Init(Can_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Lin_Init(Lin_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  CanIf_Init(CanIf_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Fee_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  LinIf_Init(LinIf_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Com_Init(Com_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  PduR_Init(PduR_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  CanSM_Init(CanSM_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  LinSM_Init(LinSM_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  CanNm_Init(CanNm_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  J1939Rm_Init(J1939Rm_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Nm_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  CanTp_Init(CanTp_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  J1939Tp_Init(J1939Tp_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  LinTp_Init(LinTp_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Issm_Init(Issm_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  NvM_Init();
  /*lint -restore */
  BswM_INIT_NvMReadAll();
  BswM_AL_SetProgrammableInterrupts();
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  ComM_Init();
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dcm_Init(NULL_PTR);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Dem_Init(EcuM_GlobalPBConfig_Ptr->CfgPtr_Dem_Init);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  J1939Nm_Init(J1939Nm_Config_Ptr);
  /*lint -restore */
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  Issm_Init(Issm_Config_Ptr);
  /*lint -restore */
  (void)ComM_RequestComMode(ComMConf_ComMUser_CN_LIN00_ace1a6ba, COMM_FULL_COMMUNICATION);
  (void)ComM_RequestComMode(ComMConf_ComMUser_CN_LIN01_4323cd84, COMM_FULL_COMMUNICATION);
  (void)ComM_RequestComMode(ComMConf_ComMUser_CN_LIN02_a8147687, COMM_FULL_COMMUNICATION);
  (void)ComM_RequestComMode(ComMConf_ComMUser_CN_LIN03_47d61db9, COMM_FULL_COMMUNICATION);
  (void)ComM_RequestComMode(ComMConf_ComMUser_CN_LIN04_a50a06c0, COMM_FULL_COMMUNICATION);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN00_2cd9a7df, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN01_5bde9749, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN02_c2d7c6f3, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN03_b5d0f665, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_LIN04_2bb463c6, TRUE);
  (void)ComM_RequestComMode(ComMConf_ComMUser_CN_Backbone1J1939_2a22de3d, COMM_FULL_COMMUNICATION);
  (void)ComM_RequestComMode(ComMConf_ComMUser_CN_Backbone2_3f947ba3, COMM_FULL_COMMUNICATION);
  (void)ComM_RequestComMode(ComMConf_ComMUser_CN_SecuritySubnet_7cec9a61, COMM_FULL_COMMUNICATION);
  (void)ComM_RequestComMode(ComMConf_ComMUser_CN_CabSubnet_aa77b0b0, COMM_FULL_COMMUNICATION);
  (void)ComM_RequestComMode(ComMConf_ComMUser_CN_FMSNet_05490e3d, COMM_FULL_COMMUNICATION);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_Backbone1J1939_0b1f4bae, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_Backbone2_78967e2c, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_CabSubnet_9ea693f1, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_SecuritySubnet_e7a0ee54, TRUE);
  ComM_CommunicationAllowed(ComMConf_ComMChannel_CN_FMSNet_fce1aae5, TRUE);
  /*lint -save -e534 *//* PRQA S 3109, 3200 1 */ /* MD_MSR_14.3, MD_BswM_3200 */
  (void)Rte_Start();
  /*lint -restore */
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_RX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_RX_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Rx_BC_dd2c1510, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Rx_BC_dd2c1510, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_RX_EnableNoinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_RX_EnableNoinit(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Rx_BC_dd2c1510, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Rx_BC_dd2c1510, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_Disable_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_Disable_DM(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Rx_BC_dd2c1510, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkDmControlInvocation();
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_Enable_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_Enable_DM(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Rx_BC_dd2c1510, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkDmControlInvocation();
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oBackbone1J1939_Tx_0x31_BC_3782f500, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oBackbone1J1939_Tx_0x31_BC_3782f500, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_EnableNoinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_EnableNoinit(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oBackbone1J1939_Tx_0x31_BC_3782f500, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oBackbone1J1939_Tx_0x31_BC_3782f500, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Tx_0x31_BC_38fc8c7d, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Tx_0x31_BC_38fc8c7d, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Tx_0x10_BC_fa80b878, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Tx_0x10_BC_fa80b878, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_EnableNoinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_EnableNoinit(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Tx_0x31_BC_38fc8c7d, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Tx_0x31_BC_38fc8c7d, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Tx_0x10_BC_fa80b878, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Tx_0x10_BC_fa80b878, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_Table1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_Table1(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN02_c2d7c6f3, LinSMConf_LinSMSchedule_Table_1_cbd13a3e);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_NULL
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_NULL(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN02_c2d7c6f3, LinSMConf_LinSMSchedule_CHNL_08a9294c_f4be7c2c);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_Table2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_Table2(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN02_c2d7c6f3, LinSMConf_LinSMSchedule_Table_2_52d86b84);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_Table_E
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_Table_E(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN02_c2d7c6f3, LinSMConf_LinSMSchedule_Table_e_a7d7afd3);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN02_c2d7c6f3, LinSMConf_LinSMSchedule_MasterReq_SlaveResp_1692e5d6);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_1(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN02_c2d7c6f3, LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_1_631128e5);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_2(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN02_c2d7c6f3, LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_2_fa18795f);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN00_2cd9a7df, LinSMConf_LinSMSchedule_MasterReq_SlaveResp_03d8aeb9);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN01_5bde9749, LinSMConf_LinSMSchedule_MasterReq_SlaveResp_e4c5082e);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_Table2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_Table2(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN00_2cd9a7df, LinSMConf_LinSMSchedule_Table_2_b3b6af29);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table_E
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table_E(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN04_2bb463c6, LinSMConf_LinSMSchedule_Table_e_5f15e465);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_Table_E
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_Table_E(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN03_b5d0f665, LinSMConf_LinSMSchedule_Table_e_3ad84ea5);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_Table_E
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_Table_E(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN00_2cd9a7df, LinSMConf_LinSMSchedule_Table_e_46b96b7e);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_Table2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_Table2(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN03_b5d0f665, LinSMConf_LinSMSchedule_Table_2_cfd78af2);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table1(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN04_2bb463c6, LinSMConf_LinSMSchedule_Table_1_33137188);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_Table1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_Table1(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN03_b5d0f665, LinSMConf_LinSMSchedule_Table_1_56dedb48);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_Table0
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_Table0(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN01_5bde9749, LinSMConf_LinSMSchedule_Table0_df24d2a0);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_Table1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_Table1(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN00_2cd9a7df, LinSMConf_LinSMSchedule_Table_1_2abffe93);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_NULL
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_NULL(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN04_2bb463c6, LinSMConf_LinSMSchedule_CHNL_def0ca51_faa54df8);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_NULL
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_NULL(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN03_b5d0f665, LinSMConf_LinSMSchedule_CHNL_c3f5fae9_fb3b3248);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_NULL
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_NULL(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN01_5bde9749, LinSMConf_LinSMSchedule_CHNL_8e3d5be2_a66eb9f7);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_NULL
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_NULL(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN00_2cd9a7df, LinSMConf_LinSMSchedule_CHNL_45618847_32a17f26);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_2(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN04_2bb463c6, LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_2_21159feb);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_2(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN03_b5d0f665, LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_2_de9a2869);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_2(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN00_2cd9a7df, LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_2_b31cdb33);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp_Table_0
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp_Table_0(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN01_5bde9749, LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table0_9e3481d6);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_1(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN04_2bb463c6, LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_1_b81cce51);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_1(void)
{
  (void)LinSM_ScheduleRequest(ComMConf_ComMChannel_CN_LIN03_b5d0f665, LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_1_479379d3);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_TX_Disable
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_TX_Disable(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Tx_0x0F_BC_89b46e88, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Tx_0x0F_BC_89b46e88, FALSE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_TX_EnableNoinit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(Std_ReturnType, BSWM_CODE) BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_TX_EnableNoinit(void)
{
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Tx_0x0F_BC_89b46e88, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  /* PRQA S 0277, 3109, 3201, 3325 COMSETIPDU */ /* MD_BswM_0277, MD_BswM_3109, MD_BswM_3201, MD_BswM_3325 */ /*lint -e506 -e572 */
  BswM_SetIpduDMGroup(ComConf_ComIPduGroup_CIOM_oFMSNet_Tx_0x0F_BC_89b46e88, TRUE); /* SBSW_BSWM_IPDUGROUPVECTORCALL */
  /* PRQA L:COMSETIPDU */ /*lint +e506 +e572 */
  BswM_MarkPduGroupControlInvocation(BSWM_GROUPCONTROL_NORMAL);
  return E_OK;
}/* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/**********************************************************************************************************************
 *  BswMRuleFunctions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_CabSubnet_9ea693f1_RX_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_CabSubnet_9ea693f1_RX_DM(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_CabSubnet_9ea693f1_RX_DM. */
  if(BswM_GetCanSMChannelState(2) == CANSM_BSWM_FULL_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_CabSubnet_9ea693f1_RX_DM) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_CabSubnet_9ea693f1_RX_DM, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_Enable_DM. */
      retVal = BSWM_ID_AL_CC_AL_CN_CabSubnet_9ea693f1_Enable_DM;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_CabSubnet_9ea693f1_RX_DM) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_CabSubnet_9ea693f1_RX_DM, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_Disable_DM. */
      retVal = BSWM_ID_AL_CC_AL_CN_CabSubnet_9ea693f1_Disable_DM;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_Backbone2_78967e2c_RX_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_Backbone2_78967e2c_RX_DM(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_Backbone2_78967e2c_RX_DM. */
  if(BswM_GetCanSMChannelState(1) == CANSM_BSWM_FULL_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_Backbone2_78967e2c_RX_DM) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_Backbone2_78967e2c_RX_DM, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp. */
      retVal = BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_Backbone2_78967e2c_RX_DM) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_Backbone2_78967e2c_RX_DM, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_1. */
      retVal = BSWM_ID_AL_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_1;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_SecuritySubnet_e7a0ee54_TX
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_SecuritySubnet_e7a0ee54_TX(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_SecuritySubnet_e7a0ee54_TX. */
  if(BswM_GetCanSMChannelState(4) == CANSM_BSWM_FULL_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_SecuritySubnet_e7a0ee54_TX) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_SecuritySubnet_e7a0ee54_TX, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_EnableNoinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_EnableNoinit;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_SecuritySubnet_e7a0ee54_TX) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_SecuritySubnet_e7a0ee54_TX, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_Disable;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_LIN02_c2d7c6f3
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_LIN02_c2d7c6f3(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_LIN02_c2d7c6f3. */
  if(BswM_GetLinSMState(2) == LINSM_BSWM_FULL_COM)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_LIN02_c2d7c6f3) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_LIN02_c2d7c6f3, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_LIN02_c2d7c6f3_Enable. */
      retVal = BSWM_ID_AL_CC_AL_CN_LIN02_c2d7c6f3_Enable;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_LIN02_c2d7c6f3) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_LIN02_c2d7c6f3, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_LIN02_c2d7c6f3_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_LIN02_c2d7c6f3_Disable;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_SecuritySubnet_e7a0ee54_RX
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_SecuritySubnet_e7a0ee54_RX(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_SecuritySubnet_e7a0ee54_RX. */
  if(BswM_GetCanSMChannelState(4) != CANSM_BSWM_NO_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_SecuritySubnet_e7a0ee54_RX) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_SecuritySubnet_e7a0ee54_RX, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_EnableNoinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_EnableNoinit;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_SecuritySubnet_e7a0ee54_RX) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_SecuritySubnet_e7a0ee54_RX, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_Disable;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_SecuritySubnet_e7a0ee54_RX_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_SecuritySubnet_e7a0ee54_RX_DM(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_SecuritySubnet_e7a0ee54_RX_DM. */
  if(BswM_GetCanSMChannelState(4) == CANSM_BSWM_FULL_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_SecuritySubnet_e7a0ee54_RX_DM) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_SecuritySubnet_e7a0ee54_RX_DM, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_Enable_DM. */
      retVal = BSWM_ID_AL_CC_AL_CN_SecuritySubnet_e7a0ee54_Enable_DM;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_SecuritySubnet_e7a0ee54_RX_DM) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_SecuritySubnet_e7a0ee54_RX_DM, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_SecuritySubnet_e7a0ee54_Disable_DM. */
      retVal = BSWM_ID_AL_CC_AL_CN_SecuritySubnet_e7a0ee54_Disable_DM;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_Backbone2_78967e2c_RX
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_Backbone2_78967e2c_RX(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_Backbone2_78967e2c_RX. */
  if(BswM_GetCanSMChannelState(1) != CANSM_BSWM_NO_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_Backbone2_78967e2c_RX) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_Backbone2_78967e2c_RX, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_RX_EnableNoinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_Backbone2_78967e2c_RX_EnableNoinit;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_Backbone2_78967e2c_RX) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_Backbone2_78967e2c_RX, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_RX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_Backbone2_78967e2c_RX_Disable;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_CabSubnet_9ea693f1_TX
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_CabSubnet_9ea693f1_TX(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_CabSubnet_9ea693f1_TX. */
  if(BswM_GetCanSMChannelState(2) == CANSM_BSWM_FULL_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_CabSubnet_9ea693f1_TX) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_CabSubnet_9ea693f1_TX, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_TX_EnableNoinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_CabSubnet_9ea693f1_TX_EnableNoinit;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_CabSubnet_9ea693f1_TX) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_CabSubnet_9ea693f1_TX, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_TX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_CabSubnet_9ea693f1_TX_Disable;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_Backbone2_78967e2c_TX
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_Backbone2_78967e2c_TX(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_Backbone2_78967e2c_TX. */
  if(BswM_GetCanSMChannelState(1) == CANSM_BSWM_FULL_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_Backbone2_78967e2c_TX) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_Backbone2_78967e2c_TX, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_TX_EnableNoinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_Backbone2_78967e2c_TX_EnableNoinit;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_Backbone2_78967e2c_TX) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_Backbone2_78967e2c_TX, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_Backbone2_78967e2c_TX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_Backbone2_78967e2c_TX_Disable;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_CabSubnet_9ea693f1_RX
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_CabSubnet_9ea693f1_RX(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_CabSubnet_9ea693f1_RX. */
  if(BswM_GetCanSMChannelState(2) != CANSM_BSWM_NO_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_CabSubnet_9ea693f1_RX) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_CabSubnet_9ea693f1_RX, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_CabSubnet_9ea693f1_RX_EnableNoinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_CabSubnet_9ea693f1_RX_EnableNoinit;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_CabSubnet_9ea693f1_RX) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_CabSubnet_9ea693f1_RX, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_Table_E. */
      retVal = BSWM_ID_AL_CC_AL_LIN2_ScheduleTable_to_Table_E;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_LIN03_b5d0f665
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_LIN03_b5d0f665(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_LIN03_b5d0f665. */
  if(BswM_GetLinSMState(3) == LINSM_BSWM_FULL_COM)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_LIN03_b5d0f665) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_LIN03_b5d0f665, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_LIN03_b5d0f665_Enable. */
      retVal = BSWM_ID_AL_CC_AL_CN_LIN03_b5d0f665_Enable;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_LIN03_b5d0f665) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_LIN03_b5d0f665, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table2. */
      retVal = BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_Table2;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_LIN01_5bde9749
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_LIN01_5bde9749(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_LIN01_5bde9749. */
  if(BswM_GetLinSMState(1) == LINSM_BSWM_FULL_COM)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_LIN01_5bde9749) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_LIN01_5bde9749, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_LIN01_5bde9749_Enable. */
      retVal = BSWM_ID_AL_CC_AL_CN_LIN01_5bde9749_Enable;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_LIN01_5bde9749) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_LIN01_5bde9749, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_LIN01_5bde9749_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_LIN01_5bde9749_Disable;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_LIN04_2bb463c6
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_LIN04_2bb463c6(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_LIN04_2bb463c6. */
  if(BswM_GetLinSMState(4) == LINSM_BSWM_FULL_COM)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_LIN04_2bb463c6) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_LIN04_2bb463c6, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_LIN04_2bb463c6_Enable. */
      retVal = BSWM_ID_AL_CC_AL_CN_LIN04_2bb463c6_Enable;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_LIN04_2bb463c6) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_LIN04_2bb463c6, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_LIN04_2bb463c6_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_LIN04_2bb463c6_Disable;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_Backbone1J1939_0b1f4bae_RX
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_Backbone1J1939_0b1f4bae_RX(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_Backbone1J1939_0b1f4bae_RX. */
  if(BswM_GetCanSMChannelState(0) != CANSM_BSWM_NO_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_Backbone1J1939_0b1f4bae_RX) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_Backbone1J1939_0b1f4bae_RX, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp. */
      retVal = BSWM_ID_AL_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_Backbone1J1939_0b1f4bae_RX) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_Backbone1J1939_0b1f4bae_RX, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_RX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_Backbone1J1939_0b1f4bae_RX_Disable;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_Backbone1J1939_0b1f4bae_RX_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_Backbone1J1939_0b1f4bae_RX_DM(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_Backbone1J1939_0b1f4bae_RX_DM. */
  if(BswM_GetCanSMChannelState(0) == CANSM_BSWM_FULL_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_Backbone1J1939_0b1f4bae_RX_DM) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_Backbone1J1939_0b1f4bae_RX_DM, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_Enable_DM. */
      retVal = BSWM_ID_AL_CC_AL_CN_Backbone1J1939_0b1f4bae_Enable_DM;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_Backbone1J1939_0b1f4bae_RX_DM) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_Backbone1J1939_0b1f4bae_RX_DM, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_Disable_DM. */
      retVal = BSWM_ID_AL_CC_AL_CN_Backbone1J1939_0b1f4bae_Disable_DM;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_LIN00_2cd9a7df
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_LIN00_2cd9a7df(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_LIN00_2cd9a7df. */
  if(BswM_GetLinSMState(0) == LINSM_BSWM_FULL_COM)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_LIN00_2cd9a7df) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_LIN00_2cd9a7df, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_LIN00_2cd9a7df_Enable. */
      retVal = BSWM_ID_AL_CC_AL_CN_LIN00_2cd9a7df_Enable;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_LIN00_2cd9a7df) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_LIN00_2cd9a7df, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_LIN00_2cd9a7df_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_LIN00_2cd9a7df_Disable;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_RunToPostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_RunToPostRun(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_RunToPostRun. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_RUN) && ((BswM_GetComMChannelState(0) == COMM_NO_COMMUNICATION) && (BswM_GetComMChannelState(4) == COMM_NO_COMMUNICATION) && (BswM_GetComMChannelState(6) == COMM_NO_COMMUNICATION) && (BswM_GetComMChannelState(8) == COMM_NO_COMMUNICATION) && (BswM_GetComMChannelState(2) == COMM_NO_COMMUNICATION) && (BswM_GetComMChannelState(7) == COMM_NO_COMMUNICATION) && (BswM_GetComMChannelState(1) == COMM_NO_COMMUNICATION) && (BswM_GetComMChannelState(5) == COMM_NO_COMMUNICATION) && (BswM_GetComMChannelState(3) == COMM_NO_COMMUNICATION) && (BswM_GetComMChannelState(9) == COMM_NO_COMMUNICATION)) && ((Request_ESH_RunRequest_0_requestedMode == RELEASED) && (Request_ESH_RunRequest_1_requestedMode == RELEASED)) && (BswM_GetTimerState(2) == BSWM_TIMER_EXPIRED) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_RUN))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_ExitRun. */
    retVal = BSWM_ID_AL_ESH_AL_ExitRun;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_RunToPostRunNested
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_RunToPostRunNested(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_ComMNoPendingRequests. */
  if(BswM_GetGenericState(2) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST)
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_RunToPostRun. */
    retVal = BSWM_ID_AL_ESH_AL_RunToPostRun;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WaitToShutdown
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToShutdown(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_WaitForNvMToShutdown. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM) && ((BswM_GetNvMJobState(0) != NVM_REQ_PENDING) || (BswM_GetTimerState(1) != BSWM_TIMER_STARTED)) && ((EcuM_GetValidatedWakeupEvents() == 0u) && (BswM_GetGenericState(2) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST)))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WaitForNvMToShutdown. */
    retVal = BSWM_ID_AL_ESH_AL_WaitForNvMToShutdown;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WakeupToPrep
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToPrep(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_WakeupToPrepShutdown. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP) && ((BswM_GetNvMJobState(0) != NVM_REQ_PENDING) || (BswM_GetTimerState(0) != BSWM_TIMER_STARTED)) && (EcuM_GetPendingWakeupEvents() == 0u) && ((EcuM_GetValidatedWakeupEvents() == 0u) && (BswM_GetGenericState(2) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST)) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_WAKEUP))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WakeupToPrep. */
    retVal = BSWM_ID_AL_ESH_AL_WakeupToPrep;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WaitToWakeup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WaitToWakeup(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_WaitForNvMToWakeup. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM) && ((EcuM_GetValidatedWakeupEvents() != 0u) || (BswM_GetGenericState(2) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_PENDING_REQUEST)))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WaitForNvMWakeup. */
    retVal = BSWM_ID_AL_ESH_AL_WaitForNvMWakeup;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_WakeupToRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_WakeupToRun(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_WakeupToRun. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if((BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP) && ((EcuM_GetValidatedWakeupEvents() != 0u) || (BswM_GetGenericState(2) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_PENDING_REQUEST)) && ((BswM_GetNvMJobState(0) != NVM_REQ_PENDING) || (BswM_GetTimerState(0) != BSWM_TIMER_STARTED)) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_WAKEUP))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_WakeupToRun. */
    retVal = BSWM_ID_AL_ESH_AL_WakeupToRun;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_DemInit
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_DemInit(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_DemNotInitialized. */
  if(BswM_GetGenericState(1) == BSWM_GENERICVALUE_ESH_DemInitStatus_DEM_NOT_INITIALIZED)
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_DemInit. */
    retVal = BSWM_ID_AL_ESH_AL_DemInit;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_InitToWakeup
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_InitToWakeup(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_InitToWakeup. */
  if(BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_INIT)
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_InitToWakeup. */
    retVal = BSWM_ID_AL_ESH_AL_InitToWakeup;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PostRunToPrepNested
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunToPrepNested(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_PostRunToPrep. */
  if((Request_ESH_PostRunRequest_0_requestedMode == RELEASED) && (Request_ESH_PostRunRequest_1_requestedMode == RELEASED))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_PostRunToPrepShutdown. */
    retVal = BSWM_ID_AL_ESH_AL_PostRunToPrepShutdown;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PostRunNested
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRunNested(void)
{
  BswM_HandleType retVal;
  /* Evaluate logical expression ESH_LE_RunRequestsOrWakeup. */ /* PRQA S 3415 1 */ /* MD_MSR_12.4 */
  if(((Request_ESH_RunRequest_0_requestedMode == REQUESTED) || (Request_ESH_RunRequest_1_requestedMode == REQUESTED)) || ((EcuM_GetValidatedWakeupEvents() != 0u) || (BswM_GetGenericState(2) == BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_PENDING_REQUEST)))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_PostRunToRun. */
    retVal = BSWM_ID_AL_ESH_AL_PostRunToRun;
  }
  else
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_ESH_PostRunToPrepCheck. */
    retVal = BSWM_ID_AL_ESH_AL_ESH_PostRunToPrepCheck;
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PostRun
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PostRun(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_PostRun. */
  if((BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_POST_RUN) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_POSTRUN))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_ExitPostRun. */
    retVal = BSWM_ID_AL_ESH_AL_ExitPostRun;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_ESH_PrepToWait
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_ESH_PrepToWait(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression ESH_LE_PrepShutdownToWaitForNvM. */
  if((BswM_GetGenericState(0) == BSWM_GENERICVALUE_ESH_State_ESH_PREP_SHUTDOWN) && (BswM_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode == RTE_MODE_ESH_Mode_SHUTDOWN))
  {
    /* Return conditional action list BswM_ActionList_ESH_AL_PrepShutdownToWaitForNvM. */
    retVal = BSWM_ID_AL_ESH_AL_PrepShutdownToWaitForNvM;
  }
  /* No false action list configured. */
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_FMSNet_fce1aae5_RX
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_FMSNet_fce1aae5_RX(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_FMSNet_fce1aae5_RX. */
  if(BswM_GetCanSMChannelState(3) != CANSM_BSWM_NO_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_RX) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_RX, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_RX_EnableNoinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_RX_EnableNoinit;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_RX) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_RX, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_RX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_RX_Disable;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_FMSNet_fce1aae5_RX_DM
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_FMSNet_fce1aae5_RX_DM(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_FMSNet_fce1aae5_RX_DM. */
  if(BswM_GetCanSMChannelState(3) == CANSM_BSWM_FULL_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_RX_DM) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_RX_DM, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_Enable_DM. */
      retVal = BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_Enable_DM;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_RX_DM) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_RX_DM, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_Disable_DM. */
      retVal = BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_Disable_DM;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX. */
  if((BswM_GetCanSMChannelState(0) == CANSM_BSWM_FULL_COMMUNICATION) && (BswM_GetJ1939NmState(0) != NM_STATE_OFFLINE))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_EnableNoinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_EnableNoinit;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_Disable;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX. */
  if((BswM_GetCanSMChannelState(3) == CANSM_BSWM_FULL_COMMUNICATION) && (BswM_GetJ1939NmState(1) != NM_STATE_OFFLINE))
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_EnableNoinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_EnableNoinit;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_Disable;
    }
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN3_Schedule_To_Table1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN3_Schedule_To_Table1(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN3_Schedule_To_Table1. */
  if(Request_LIN3_ScheduleTableRequestMode_requestedMode == LIN3_TABLE1)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_Table1) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_Table1, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_Table1. */
      retVal = BSWM_ID_AL_CC_AL_LIN3_ScheduleTable_to_Table1;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_Table1, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN3_Schedule_To_NULL
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN3_Schedule_To_NULL(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN3_Schedule_To_NULL. */
  if(Request_LIN3_ScheduleTableRequestMode_requestedMode == LIN3_NULL)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_NULL) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_NULL, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_NULL. */
      retVal = BSWM_ID_AL_CC_AL_LIN3_ScheduleTable_to_NULL;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_NULL, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN3_Schedule_To_Table2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN3_Schedule_To_Table2(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN3_Schedule_To_Table2. */
  if(Request_LIN3_ScheduleTableRequestMode_requestedMode == LIN3_TABLE2)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_Table2) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_Table2, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_Table2. */
      retVal = BSWM_ID_AL_CC_AL_LIN3_ScheduleTable_to_Table2;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_Table2, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN3_Schedule_To_Table_E
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN3_Schedule_To_Table_E(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN3_Schedule_To_Table_E. */
  if(Request_LIN3_ScheduleTableRequestMode_requestedMode == LIN3_TABLE_E)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_Table_E) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_Table_E, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_Table_E. */
      retVal = BSWM_ID_AL_CC_AL_LIN3_ScheduleTable_to_Table_E;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_Table_E, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN3_Schedule_To_MasterReq_SlaveResp. */
  if(Request_LIN3_ScheduleTableRequestMode_requestedMode == LIN3_MasterReq_SlaveResp)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp. */
      retVal = BSWM_ID_AL_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table1(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN3_Schedule_To_MasterReq_SlaveResp_Table1. */
  if(Request_LIN3_ScheduleTableRequestMode_requestedMode == LIN3_MasterReq_SlaveResp_Table1)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table1) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table1, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_1. */
      retVal = BSWM_ID_AL_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_1;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table1, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table2(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN3_Schedule_To_MasterReq_SlaveResp_Table2. */
  if(Request_LIN3_ScheduleTableRequestMode_requestedMode == LIN3_MasterReq_SlaveResp_Table2)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table2) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table2, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_2. */
      retVal = BSWM_ID_AL_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_2;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table2, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN1_Schedule_To_MasterReq_SlaveResp. */
  if(Request_LIN1_ScheduleTableRequestMode_requestedMode == LIN1_MasterReq_SlaveResp)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp. */
      retVal = BSWM_ID_AL_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table1(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN1_Schedule_To_MasterReq_SlaveResp_Table1. */
  if(Request_LIN1_ScheduleTableRequestMode_requestedMode == LIN1_MasterReq_SlaveResp_Table1)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table1) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table1, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_1. */
      retVal = BSWM_ID_AL_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_1;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table1, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table2(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN1_Schedule_To_MasterReq_SlaveResp_Table2. */
  if(Request_LIN1_ScheduleTableRequestMode_requestedMode == LIN1_MasterReq_SlaveResp_Table2)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table2) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table2, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_2. */
      retVal = BSWM_ID_AL_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_2;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table2, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN1_Schedule_To_NULL
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN1_Schedule_To_NULL(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN1_Schedule_To_NULL. */
  if(Request_LIN1_ScheduleTableRequestMode_requestedMode == LIN1_NULL)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_NULL) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_NULL, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_NULL. */
      retVal = BSWM_ID_AL_CC_AL_LIN1_ScheduleTable_to_NULL;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_NULL, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN1_Schedule_To_Table1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN1_Schedule_To_Table1(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN1_Schedule_To_Table1. */
  if(Request_LIN1_ScheduleTableRequestMode_requestedMode == LIN1_Table1)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_Table1) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_Table1, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_Table1. */
      retVal = BSWM_ID_AL_CC_AL_LIN1_ScheduleTable_to_Table1;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_Table1, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN1_Schedule_To_Table2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN1_Schedule_To_Table2(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN1_Schedule_To_Table2. */
  if(Request_LIN1_ScheduleTableRequestMode_requestedMode == LIN1_Table2)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_Table2) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_Table2, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_Table2. */
      retVal = BSWM_ID_AL_CC_AL_LIN1_ScheduleTable_to_Table2;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_Table2, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN1_Schedule_To_Table_E
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN1_Schedule_To_Table_E(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN1_Schedule_To_Table_E. */
  if(Request_LIN1_ScheduleTableRequestMode_requestedMode == LIN1_Table_E)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_Table_E) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_Table_E, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN1_ScheduleTable_to_Table_E. */
      retVal = BSWM_ID_AL_CC_AL_LIN1_ScheduleTable_to_Table_E;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_Table_E, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN2_Schedule_To_MasterReq_SlaveResp. */
  if(Request_LIN2_ScheduleTableRequestMode_requestedMode == LIN2_MasterReq_SlaveResp)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp. */
      retVal = BSWM_ID_AL_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp_Table0
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp_Table0(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN2_Schedule_To_MasterReq_SlaveResp_Table0. */
  if(Request_LIN2_ScheduleTableRequestMode_requestedMode == LIN2_MasterReq_SlaveResp_TABLE0)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp_Table0) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp_Table0, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp_Table_0. */
      retVal = BSWM_ID_AL_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp_Table_0;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp_Table0, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN2_Schedule_To_NULL
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN2_Schedule_To_NULL(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN2_Schedule_To_NULL. */
  if(Request_LIN2_ScheduleTableRequestMode_requestedMode == LIN2_NULL)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_NULL) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_NULL, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_NULL. */
      retVal = BSWM_ID_AL_CC_AL_LIN2_ScheduleTable_to_NULL;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_NULL, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN2_Schedule_To_Table0
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN2_Schedule_To_Table0(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN2_Schedule_To_Table0. */
  if(Request_LIN2_ScheduleTableRequestMode_requestedMode == LIN2_TABLE0)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_Table0) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_Table0, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_Table0. */
      retVal = BSWM_ID_AL_CC_AL_LIN2_ScheduleTable_to_Table0;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_Table0, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN2_Schedule_To_Table_E
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN2_Schedule_To_Table_E(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN2_Schedule_To_Table_E. */
  if(Request_LIN2_ScheduleTableRequestMode_requestedMode == LIN2_TABLE_E)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_Table_E) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_Table_E, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN2_ScheduleTable_to_Table_E. */
      retVal = BSWM_ID_AL_CC_AL_LIN2_ScheduleTable_to_Table_E;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_Table_E, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN4_Schedule_To_MasterReq_SlaveResp. */
  if(Request_LIN4_ScheduleTableRequestMode_requestedMode == LIN4_MasterReq_SlaveResp)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp. */
      retVal = BSWM_ID_AL_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table1(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN4_Schedule_To_MasterReq_SlaveResp_Table1. */
  if(Request_LIN4_ScheduleTableRequestMode_requestedMode == LIN4_MasterReq_SlaveResp_Table1)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table1) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table1, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_1. */
      retVal = BSWM_ID_AL_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_1;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table1, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table2(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN4_Schedule_To_MasterReq_SlaveResp_Table2. */
  if(Request_LIN4_ScheduleTableRequestMode_requestedMode == LIN4_MasterReq_SlaveResp_Table2)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table2) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table2, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_2. */
      retVal = BSWM_ID_AL_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_2;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table2, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN4_Schedule_To_NULL
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN4_Schedule_To_NULL(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN4_Schedule_To_NULL. */
  if(Request_LIN4_ScheduleTableRequestMode_requestedMode == LIN4_NULL)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_NULL) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_NULL, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_NULL. */
      retVal = BSWM_ID_AL_CC_AL_LIN4_ScheduleTable_to_NULL;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_NULL, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN4_Schedule_To_Table1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN4_Schedule_To_Table1(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN4_Schedule_To_Table1. */
  if(Request_LIN4_ScheduleTableRequestMode_requestedMode == LIN4_TABLE1)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_Table1) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_Table1, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_Table1. */
      retVal = BSWM_ID_AL_CC_AL_LIN4_ScheduleTable_to_Table1;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_Table1, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN4_Schedule_To_Table2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN4_Schedule_To_Table2(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN4_Schedule_To_Table2. */
  if(Request_LIN4_ScheduleTableRequestMode_requestedMode == LIN4_TABLE2)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_Table2) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_Table2, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_Table2. */
      retVal = BSWM_ID_AL_CC_AL_LIN4_ScheduleTable_to_Table2;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_Table2, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN4_Schedule_To_Table_E
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN4_Schedule_To_Table_E(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN4_Schedule_To_Table_E. */
  if(Request_LIN4_ScheduleTableRequestMode_requestedMode == LIN4_TABLE_E)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_Table_E) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_Table_E, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN4_ScheduleTable_to_Table_E. */
      retVal = BSWM_ID_AL_CC_AL_LIN4_ScheduleTable_to_Table_E;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_Table_E, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN5_Schedule_To_MasterReq_SlaveResp. */
  if(Request_LIN5_ScheduleTableRequestMode_requestedMode == LIN5_MasterReq_SlaveResp)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp. */
      retVal = BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table1(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN5_Schedule_To_MasterReq_SlaveResp_Table1. */
  if(Request_LIN5_ScheduleTableRequestMode_requestedMode == LIN5_MasterReq_SlaveResp_Table1)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table1) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table1, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_1. */
      retVal = BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_1;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table1, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table2(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN5_Schedule_To_MasterReq_SlaveResp_Table2. */
  if(Request_LIN5_ScheduleTableRequestMode_requestedMode == LIN5_MasterReq_SlaveResp_Table2)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table2) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table2, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_2. */
      retVal = BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_2;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table2, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN5_Schedule_To_NULL
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN5_Schedule_To_NULL(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN5_Schedule_To_NULL. */
  if(Request_LIN5_ScheduleTableRequestMode_requestedMode == LIN5_NULL)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_NULL) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_NULL, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_NULL. */
      retVal = BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_NULL;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_NULL, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN5_Schedule_To_Table1
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN5_Schedule_To_Table1(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN5_Schedule_To_Table1. */
  if(Request_LIN5_ScheduleTableRequestMode_requestedMode == LIN5_TABLE1)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_Table1) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_Table1, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table1. */
      retVal = BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_Table1;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_Table1, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN5_Schedule_To_Table2
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN5_Schedule_To_Table2(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN5_Schedule_To_Table2. */
  if(Request_LIN5_ScheduleTableRequestMode_requestedMode == LIN5_TABLE2)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_Table2) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_Table2, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table2. */
      retVal = BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_Table2;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_Table2, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_Rule_LIN5_Schedule_To_Table_E
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_Rule_LIN5_Schedule_To_Table_E(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression LE_LIN5_Schedule_To_Table_E. */
  if(Request_LIN5_ScheduleTableRequestMode_requestedMode == LIN5_TABLE_E)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_Table_E) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_Table_E, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_LIN5_ScheduleTable_to_Table_E. */
      retVal = BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_Table_E;
    }
  }
  else
  {
    BswM_UpdateRuleStates(BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_Table_E, BSWM_FALSE);
    /* No false action list configured. */
  }
  return retVal;
}

/**********************************************************************************************************************
 *  BswM_Rule_CC_CN_FMSNet_fce1aae5_TX
 *********************************************************************************************************************/
BSWM_LOCAL FUNC(BswM_HandleType, BSWM_CODE) BswM_Rule_CC_CN_FMSNet_fce1aae5_TX(void)
{
  BswM_HandleType retVal = BSWM_NO_ACTIONLIST;
  /* Evaluate logical expression CC_LE_CN_FMSNet_fce1aae5_TX. */
  if(BswM_GetCanSMChannelState(3) == CANSM_BSWM_FULL_COMMUNICATION)
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_TX) != BSWM_TRUE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_TX, BSWM_TRUE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_TX_EnableNoinit. */
      retVal = BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_TX_EnableNoinit;
    }
  }
  else
  {
    if( BswM_GetRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_TX) != BSWM_FALSE ) /* COV_BSWM_TRIGGEREDRULEEXECUTION */
    {
      BswM_UpdateRuleStates(BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_TX, BSWM_FALSE);
      /* Return triggered action list BswM_ActionList_CC_AL_CN_FMSNet_fce1aae5_TX_Disable. */
      retVal = BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_TX_Disable;
    }
  }
  return retVal;
}



#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

