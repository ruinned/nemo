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
 *              File: BswM_Private_Cfg.h
 *   Generation Time: 2018-11-22 17:59:56
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


#if !defined(BSWM_PRIVATE_CFG_H)
#define BSWM_PRIVATE_CFG_H


/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
#include "BswM_Cfg.h"

#include "Com.h" 
#include "Rte_BswM.h" 
#include "EcuM_Init_PBCfg.h" 
#include "Issm_Cbk.h" 
#include "SchM_BswM.h" 
#include "EcuM.h" 
#include "NvM.h" 
#include "Dem.h" 
#include "Can.h" 
#include "Lin.h" 
#include "CanIf.h" 
#include "Fee.h" 
#include "LinIf.h" 
#include "PduR.h" 
#include "CanSM_EcuM.h" 
#include "LinSM.h" 
#include "CanNm.h" 
#include "J1939Rm.h" 
#include "Nm.h" 
#include "CanTp.h" 
#include "J1939Tp.h" 
#include "Issm.h" 
#include "ComM.h" 
#include "Dcm.h" 
#include "J1939Nm.h" 
#include "Rte_Main.h" 


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#define BSWM_INIT_GEN                STD_ON 
#define BSWM_MODENOTIFICATIONFCT     STD_ON 
#define BSWM_SWCMODEREQUESTUPDATEFCT STD_ON 


# define BSWM_FUNCTION_BASED STD_ON

#if (defined (BSWM_ACTIONLISTSTRUEIDXOFRULES))
# if ((BSWM_ACTIONLISTSTRUEIDXOFRULES == STD_ON) && defined (BSWM_NO_ACTIONLISTSTRUEIDXOFRULES))
#  define BSWM_NO_ACTIONLIST BSWM_NO_ACTIONLISTSTRUEIDXOFRULES
# endif
#endif
#if (defined(BSWM_NO_ACTIONLIST))
#else
# if(defined(BSWM_ACTIONLISTSFALSEIDXOFRULES))
#  if ((BSWM_ACTIONLISTSFALSEIDXOFRULES == STD_ON) && defined (BSWM_NO_ACTIONLISTSFALSEIDXOFRULES))
#   define BSWM_NO_ACTIONLIST BSWM_NO_ACTIONLISTSFALSEIDXOFRULES
#  endif
# endif
#endif
#if (defined(BSWM_NO_ACTIONLIST))
#else
# if(defined(BSWM_SIZEOFACTIONLISTS))
#  if (BSWM_SIZEOFACTIONLISTS == STD_ON)
#   define BSWM_NO_ACTIONLIST BswM_GetSizeOfActionLists()
#  endif
# endif
#endif
#if (defined(BSWM_NO_ACTIONLIST))
#else
# define BSWM_NO_ACTIONLIST 255
#endif

#define BSWM_GROUPCONTROL_IDLE   (uint8)0x00u
#define BSWM_GROUPCONTROL_NORMAL (uint8)0x01u
#define BSWM_GROUPCONTROL_REINIT (uint8)0x02u
#define BSWM_GROUPCONTROL_DM     (uint8)0x04u



#define BSWM_ID_RULE_CC_CN_CabSubnet_9ea693f1_RX_DM                      0U 
#define BSWM_ID_RULE_CC_CN_Backbone2_78967e2c_RX_DM                      1U 
#define BSWM_ID_RULE_CC_CN_SecuritySubnet_e7a0ee54_TX                    2U 
#define BSWM_ID_RULE_CC_CN_LIN02_c2d7c6f3                                3U 
#define BSWM_ID_RULE_CC_CN_SecuritySubnet_e7a0ee54_RX                    4U 
#define BSWM_ID_RULE_CC_CN_SecuritySubnet_e7a0ee54_RX_DM                 5U 
#define BSWM_ID_RULE_CC_CN_Backbone2_78967e2c_RX                         6U 
#define BSWM_ID_RULE_CC_CN_CabSubnet_9ea693f1_TX                         7U 
#define BSWM_ID_RULE_CC_CN_Backbone2_78967e2c_TX                         8U 
#define BSWM_ID_RULE_CC_CN_CabSubnet_9ea693f1_RX                         9U 
#define BSWM_ID_RULE_CC_CN_LIN03_b5d0f665                                10U 
#define BSWM_ID_RULE_CC_CN_LIN01_5bde9749                                11U 
#define BSWM_ID_RULE_CC_CN_LIN04_2bb463c6                                12U 
#define BSWM_ID_RULE_CC_CN_Backbone1J1939_0b1f4bae_RX                    13U 
#define BSWM_ID_RULE_CC_CN_Backbone1J1939_0b1f4bae_RX_DM                 14U 
#define BSWM_ID_RULE_CC_CN_LIN00_2cd9a7df                                15U 
#define BSWM_ID_RULE_ESH_RunToPostRun                                    16U 
#define BSWM_ID_RULE_ESH_RunToPostRunNested                              17U 
#define BSWM_ID_RULE_ESH_WaitToShutdown                                  18U 
#define BSWM_ID_RULE_ESH_WakeupToPrep                                    19U 
#define BSWM_ID_RULE_ESH_WaitToWakeup                                    20U 
#define BSWM_ID_RULE_ESH_WakeupToRun                                     21U 
#define BSWM_ID_RULE_ESH_DemInit                                         22U 
#define BSWM_ID_RULE_ESH_InitToWakeup                                    23U 
#define BSWM_ID_RULE_ESH_PostRunToPrepNested                             24U 
#define BSWM_ID_RULE_ESH_PostRunNested                                   25U 
#define BSWM_ID_RULE_ESH_PostRun                                         26U 
#define BSWM_ID_RULE_ESH_PrepToWait                                      27U 
#define BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_RX                            28U 
#define BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_RX_DM                         29U 
#define BSWM_ID_RULE_CC_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX      30U 
#define BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX              31U 
#define BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_Table1                     32U 
#define BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_NULL                       33U 
#define BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_Table2                     34U 
#define BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_Table_E                    35U 
#define BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp        36U 
#define BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table1 37U 
#define BSWM_ID_RULE_CC_Rule_LIN3_Schedule_To_MasterReq_SlaveResp_Table2 38U 
#define BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp        39U 
#define BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table1 40U 
#define BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_MasterReq_SlaveResp_Table2 41U 
#define BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_NULL                       42U 
#define BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_Table1                     43U 
#define BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_Table2                     44U 
#define BSWM_ID_RULE_CC_Rule_LIN1_Schedule_To_Table_E                    45U 
#define BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp        46U 
#define BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_MasterReq_SlaveResp_Table0 47U 
#define BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_NULL                       48U 
#define BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_Table0                     49U 
#define BSWM_ID_RULE_CC_Rule_LIN2_Schedule_To_Table_E                    50U 
#define BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp        51U 
#define BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table1 52U 
#define BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_MasterReq_SlaveResp_Table2 53U 
#define BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_NULL                       54U 
#define BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_Table1                     55U 
#define BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_Table2                     56U 
#define BSWM_ID_RULE_CC_Rule_LIN4_Schedule_To_Table_E                    57U 
#define BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp        58U 
#define BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table1 59U 
#define BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_MasterReq_SlaveResp_Table2 60U 
#define BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_NULL                       61U 
#define BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_Table1                     62U 
#define BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_Table2                     63U 
#define BSWM_ID_RULE_CC_Rule_LIN5_Schedule_To_Table_E                    64U 
#define BSWM_ID_RULE_CC_CN_FMSNet_fce1aae5_TX                            65U 

#define BSWM_ID_AL_CC_AL_CN_CabSubnet_9ea693f1_Disable_DM                         0U 
#define BSWM_ID_AL_CC_AL_CN_CabSubnet_9ea693f1_Enable_DM                          1U 
#define BSWM_ID_AL_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_1        2U 
#define BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp                3U 
#define BSWM_ID_AL_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_Disable                    4U 
#define BSWM_ID_AL_CC_AL_CN_SecuritySubnet_e7a0ee54_TX_EnableNoinit               5U 
#define BSWM_ID_AL_CC_AL_CN_LIN02_c2d7c6f3_Disable                                6U 
#define BSWM_ID_AL_CC_AL_CN_LIN02_c2d7c6f3_Enable                                 7U 
#define BSWM_ID_AL_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_Disable                    8U 
#define BSWM_ID_AL_CC_AL_CN_SecuritySubnet_e7a0ee54_RX_EnableNoinit               9U 
#define BSWM_ID_AL_CC_AL_CN_SecuritySubnet_e7a0ee54_Disable_DM                    10U 
#define BSWM_ID_AL_CC_AL_CN_SecuritySubnet_e7a0ee54_Enable_DM                     11U 
#define BSWM_ID_AL_CC_AL_CN_Backbone2_78967e2c_RX_Disable                         12U 
#define BSWM_ID_AL_CC_AL_CN_Backbone2_78967e2c_RX_EnableNoinit                    13U 
#define BSWM_ID_AL_CC_AL_CN_CabSubnet_9ea693f1_TX_Disable                         14U 
#define BSWM_ID_AL_CC_AL_CN_CabSubnet_9ea693f1_TX_EnableNoinit                    15U 
#define BSWM_ID_AL_CC_AL_CN_Backbone2_78967e2c_TX_Disable                         16U 
#define BSWM_ID_AL_CC_AL_CN_Backbone2_78967e2c_TX_EnableNoinit                    17U 
#define BSWM_ID_AL_CC_AL_LIN2_ScheduleTable_to_Table_E                            18U 
#define BSWM_ID_AL_CC_AL_CN_CabSubnet_9ea693f1_RX_EnableNoinit                    19U 
#define BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_Table2                             20U 
#define BSWM_ID_AL_CC_AL_CN_LIN03_b5d0f665_Enable                                 21U 
#define BSWM_ID_AL_CC_AL_CN_LIN01_5bde9749_Disable                                22U 
#define BSWM_ID_AL_CC_AL_CN_LIN01_5bde9749_Enable                                 23U 
#define BSWM_ID_AL_CC_AL_CN_LIN04_2bb463c6_Disable                                24U 
#define BSWM_ID_AL_CC_AL_CN_LIN04_2bb463c6_Enable                                 25U 
#define BSWM_ID_AL_CC_AL_CN_Backbone1J1939_0b1f4bae_RX_Disable                    26U 
#define BSWM_ID_AL_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp                27U 
#define BSWM_ID_AL_CC_AL_CN_Backbone1J1939_0b1f4bae_Disable_DM                    28U 
#define BSWM_ID_AL_CC_AL_CN_Backbone1J1939_0b1f4bae_Enable_DM                     29U 
#define BSWM_ID_AL_CC_AL_CN_LIN00_2cd9a7df_Disable                                30U 
#define BSWM_ID_AL_CC_AL_CN_LIN00_2cd9a7df_Enable                                 31U 
#define BSWM_ID_AL_ESH_AL_ExitRun                                                 32U 
#define BSWM_ID_AL_ESH_AL_RunToPostRun                                            33U 
#define BSWM_ID_AL_ESH_AL_WaitForNvMToShutdown                                    34U 
#define BSWM_ID_AL_ESH_AL_WakeupToPrep                                            35U 
#define BSWM_ID_AL_ESH_AL_WaitForNvMWakeup                                        36U 
#define BSWM_ID_AL_ESH_AL_WakeupToRun                                             37U 
#define BSWM_ID_AL_ESH_AL_DemInit                                                 38U 
#define BSWM_ID_AL_ESH_AL_InitToWakeup                                            39U 
#define BSWM_ID_AL_ESH_AL_PostRunToPrepShutdown                                   40U 
#define BSWM_ID_AL_ESH_AL_ESH_PostRunToPrepCheck                                  41U 
#define BSWM_ID_AL_ESH_AL_PostRunToRun                                            42U 
#define BSWM_ID_AL_ESH_AL_ExitPostRun                                             43U 
#define BSWM_ID_AL_ESH_AL_PrepShutdownToWaitForNvM                                44U 
#define BSWM_ID_AL_INIT_AL_Initialize                                             45U 
#define BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_RX_Disable                            46U 
#define BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_RX_EnableNoinit                       47U 
#define BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_Disable_DM                            48U 
#define BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_Enable_DM                             49U 
#define BSWM_ID_AL_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_Disable      50U 
#define BSWM_ID_AL_CC_AL_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_TX_EnableNoinit 51U 
#define BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_Disable              52U 
#define BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_CIOM_4d5cd289_TX_EnableNoinit         53U 
#define BSWM_ID_AL_CC_AL_LIN3_ScheduleTable_to_Table1                             54U 
#define BSWM_ID_AL_CC_AL_LIN3_ScheduleTable_to_NULL                               55U 
#define BSWM_ID_AL_CC_AL_LIN3_ScheduleTable_to_Table2                             56U 
#define BSWM_ID_AL_CC_AL_LIN3_ScheduleTable_to_Table_E                            57U 
#define BSWM_ID_AL_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp                58U 
#define BSWM_ID_AL_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_1        59U 
#define BSWM_ID_AL_CC_AL_LIN3_ScheduleTable_to_MasterReq_SlaveResp_Table_2        60U 
#define BSWM_ID_AL_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp                61U 
#define BSWM_ID_AL_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp                62U 
#define BSWM_ID_AL_CC_AL_LIN1_ScheduleTable_to_Table2                             63U 
#define BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_Table_E                            64U 
#define BSWM_ID_AL_CC_AL_LIN4_ScheduleTable_to_Table_E                            65U 
#define BSWM_ID_AL_CC_AL_LIN1_ScheduleTable_to_Table_E                            66U 
#define BSWM_ID_AL_CC_AL_LIN4_ScheduleTable_to_Table2                             67U 
#define BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_Table1                             68U 
#define BSWM_ID_AL_CC_AL_LIN4_ScheduleTable_to_Table1                             69U 
#define BSWM_ID_AL_CC_AL_LIN2_ScheduleTable_to_Table0                             70U 
#define BSWM_ID_AL_CC_AL_LIN1_ScheduleTable_to_Table1                             71U 
#define BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_NULL                               72U 
#define BSWM_ID_AL_CC_AL_LIN4_ScheduleTable_to_NULL                               73U 
#define BSWM_ID_AL_CC_AL_LIN2_ScheduleTable_to_NULL                               74U 
#define BSWM_ID_AL_CC_AL_LIN1_ScheduleTable_to_NULL                               75U 
#define BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_2        76U 
#define BSWM_ID_AL_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_2        77U 
#define BSWM_ID_AL_CC_AL_LIN1_ScheduleTable_to_MasterReq_SlaveResp_Table_2        78U 
#define BSWM_ID_AL_CC_AL_LIN2_ScheduleTable_to_MasterReq_SlaveResp_Table_0        79U 
#define BSWM_ID_AL_CC_AL_LIN5_ScheduleTable_to_MasterReq_SlaveResp_Table_1        80U 
#define BSWM_ID_AL_CC_AL_LIN4_ScheduleTable_to_MasterReq_SlaveResp_Table_1        81U 
#define BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_TX_Disable                            82U 
#define BSWM_ID_AL_CC_AL_CN_FMSNet_fce1aae5_TX_EnableNoinit                       83U 


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  BswMPCGetConstantDuplicatedRootDataMacros  BswM Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define BswM_GetActionListQueueOfPCConfig()                           BswM_ActionListQueue.raw  /**< the pointer to BswM_ActionListQueue */
#define BswM_GetActionListsOfPCConfig()                               BswM_ActionLists  /**< the pointer to BswM_ActionLists */
#define BswM_GetCanSMChannelMappingOfPCConfig()                       BswM_CanSMChannelMapping  /**< the pointer to BswM_CanSMChannelMapping */
#define BswM_GetCanSMChannelStateOfPCConfig()                         BswM_CanSMChannelState  /**< the pointer to BswM_CanSMChannelState */
#define BswM_GetComMChannelMappingOfPCConfig()                        BswM_ComMChannelMapping  /**< the pointer to BswM_ComMChannelMapping */
#define BswM_GetComMChannelStateOfPCConfig()                          BswM_ComMChannelState  /**< the pointer to BswM_ComMChannelState */
#define BswM_GetDeferredRulesOfPCConfig()                             BswM_DeferredRules  /**< the pointer to BswM_DeferredRules */
#define BswM_GetForcedActionListPriorityOfPCConfig()                  BswM_ForcedActionListPriority  /**< the pointer to BswM_ForcedActionListPriority */
#define BswM_GetGenericMappingOfPCConfig()                            BswM_GenericMapping  /**< the pointer to BswM_GenericMapping */
#define BswM_GetGenericStateOfPCConfig()                              BswM_GenericState  /**< the pointer to BswM_GenericState */
#define BswM_GetImmediateUserOfPCConfig()                             BswM_ImmediateUser  /**< the pointer to BswM_ImmediateUser */
#define BswM_GetInitializedOfPCConfig()                               BswM_Initialized  /**< the pointer to BswM_Initialized */
#define BswM_GetJ1939NmMappingOfPCConfig()                            BswM_J1939NmMapping  /**< the pointer to BswM_J1939NmMapping */
#define BswM_GetJ1939NmStateOfPCConfig()                              BswM_J1939NmState  /**< the pointer to BswM_J1939NmState */
#define BswM_GetLinSMMappingOfPCConfig()                              BswM_LinSMMapping  /**< the pointer to BswM_LinSMMapping */
#define BswM_GetLinSMStateOfPCConfig()                                BswM_LinSMState  /**< the pointer to BswM_LinSMState */
#define BswM_GetModeRequestMappingOfPCConfig()                        BswM_ModeRequestMapping  /**< the pointer to BswM_ModeRequestMapping */
#define BswM_GetModeRequestQueueOfPCConfig()                          BswM_ModeRequestQueue  /**< the pointer to BswM_ModeRequestQueue */
#define BswM_GetNvMJobMappingOfPCConfig()                             BswM_NvMJobMapping  /**< the pointer to BswM_NvMJobMapping */
#define BswM_GetNvMJobStateOfPCConfig()                               BswM_NvMJobState  /**< the pointer to BswM_NvMJobState */
#define BswM_GetQueueSemaphoreOfPCConfig()                            BswM_QueueSemaphore  /**< the pointer to BswM_QueueSemaphore */
#define BswM_GetQueueWrittenOfPCConfig()                              BswM_QueueWritten  /**< the pointer to BswM_QueueWritten */
#define BswM_GetRuleStatesOfPCConfig()                                BswM_RuleStates  /**< the pointer to BswM_RuleStates */
#define BswM_GetRulesIndOfPCConfig()                                  BswM_RulesInd  /**< the pointer to BswM_RulesInd */
#define BswM_GetRulesOfConfigOfPCConfig()                             BswM_RulesOfConfig  /**< the pointer to BswM_RulesOfConfig */
#define BswM_GetRulesOfPCConfig()                                     BswM_Rules  /**< the pointer to BswM_Rules */
#define BswM_GetSizeOfActionListsOfPCConfig()                         84U  /**< the number of accomplishable value elements in BswM_ActionLists */
#define BswM_GetSizeOfCanSMChannelMappingOfPCConfig()                 5U  /**< the number of accomplishable value elements in BswM_CanSMChannelMapping */
#define BswM_GetSizeOfComMChannelMappingOfPCConfig()                  10U  /**< the number of accomplishable value elements in BswM_ComMChannelMapping */
#define BswM_GetSizeOfDeferredRulesOfPCConfig()                       7U  /**< the number of accomplishable value elements in BswM_DeferredRules */
#define BswM_GetSizeOfForcedActionListPriorityOfPCConfig()            1U  /**< the number of accomplishable value elements in BswM_ForcedActionListPriority */
#define BswM_GetSizeOfGenericMappingOfPCConfig()                      3U  /**< the number of accomplishable value elements in BswM_GenericMapping */
#define BswM_GetSizeOfImmediateUserOfPCConfig()                       19U  /**< the number of accomplishable value elements in BswM_ImmediateUser */
#define BswM_GetSizeOfInitializedOfPCConfig()                         1U  /**< the number of accomplishable value elements in BswM_Initialized */
#define BswM_GetSizeOfJ1939NmMappingOfPCConfig()                      2U  /**< the number of accomplishable value elements in BswM_J1939NmMapping */
#define BswM_GetSizeOfLinSMMappingOfPCConfig()                        5U  /**< the number of accomplishable value elements in BswM_LinSMMapping */
#define BswM_GetSizeOfModeRequestMappingOfPCConfig()                  9U  /**< the number of accomplishable value elements in BswM_ModeRequestMapping */
#define BswM_GetSizeOfNvMJobMappingOfPCConfig()                       1U  /**< the number of accomplishable value elements in BswM_NvMJobMapping */
#define BswM_GetSizeOfQueueSemaphoreOfPCConfig()                      1U  /**< the number of accomplishable value elements in BswM_QueueSemaphore */
#define BswM_GetSizeOfQueueWrittenOfPCConfig()                        1U  /**< the number of accomplishable value elements in BswM_QueueWritten */
#define BswM_GetSizeOfRulesIndOfPCConfig()                            64U  /**< the number of accomplishable value elements in BswM_RulesInd */
#define BswM_GetSizeOfRulesOfConfigOfPCConfig()                       1U  /**< the number of accomplishable value elements in BswM_RulesOfConfig */
#define BswM_GetSizeOfRulesOfPCConfig()                               66U  /**< the number of accomplishable value elements in BswM_Rules */
#define BswM_GetSizeOfTimerStateOfPCConfig()                          3U  /**< the number of accomplishable value elements in BswM_TimerState */
#define BswM_GetSizeOfTimerValueOfPCConfig()                          3U  /**< the number of accomplishable value elements in BswM_TimerValue */
#define BswM_GetTimerStateOfPCConfig()                                BswM_TimerState.raw  /**< the pointer to BswM_TimerState */
#define BswM_GetTimerValueOfPCConfig()                                BswM_TimerValue.raw  /**< the pointer to BswM_TimerValue */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetDuplicatedRootDataMacros  BswM Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define BswM_GetSizeOfActionListQueueOfPCConfig()                     BswM_GetSizeOfActionListsOfPCConfig()  /**< the number of accomplishable value elements in BswM_ActionListQueue */
#define BswM_GetSizeOfCanSMChannelStateOfPCConfig()                   BswM_GetSizeOfCanSMChannelMappingOfPCConfig()  /**< the number of accomplishable value elements in BswM_CanSMChannelState */
#define BswM_GetSizeOfComMChannelStateOfPCConfig()                    BswM_GetSizeOfComMChannelMappingOfPCConfig()  /**< the number of accomplishable value elements in BswM_ComMChannelState */
#define BswM_GetSizeOfGenericStateOfPCConfig()                        BswM_GetSizeOfGenericMappingOfPCConfig()  /**< the number of accomplishable value elements in BswM_GenericState */
#define BswM_GetSizeOfJ1939NmStateOfPCConfig()                        BswM_GetSizeOfJ1939NmMappingOfPCConfig()  /**< the number of accomplishable value elements in BswM_J1939NmState */
#define BswM_GetSizeOfLinSMStateOfPCConfig()                          BswM_GetSizeOfLinSMMappingOfPCConfig()  /**< the number of accomplishable value elements in BswM_LinSMState */
#define BswM_GetSizeOfModeRequestQueueOfPCConfig()                    BswM_GetSizeOfImmediateUserOfPCConfig()  /**< the number of accomplishable value elements in BswM_ModeRequestQueue */
#define BswM_GetSizeOfNvMJobStateOfPCConfig()                         BswM_GetSizeOfNvMJobMappingOfPCConfig()  /**< the number of accomplishable value elements in BswM_NvMJobState */
#define BswM_GetSizeOfRuleStatesOfPCConfig()                          BswM_GetSizeOfRulesOfPCConfig()  /**< the number of accomplishable value elements in BswM_RuleStates */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetDataMacros  BswM Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define BswM_GetActionListQueue(Index)                                (BswM_GetActionListQueueOfPCConfig()[(Index)])
#define BswM_GetFctPtrOfActionLists(Index)                            (BswM_GetActionListsOfPCConfig()[(Index)].FctPtrOfActionLists)
#define BswM_GetExternalIdOfCanSMChannelMapping(Index)                (BswM_GetCanSMChannelMappingOfPCConfig()[(Index)].ExternalIdOfCanSMChannelMapping)
#define BswM_GetImmediateUserEndIdxOfCanSMChannelMapping(Index)       (BswM_GetCanSMChannelMappingOfPCConfig()[(Index)].ImmediateUserEndIdxOfCanSMChannelMapping)
#define BswM_GetImmediateUserStartIdxOfCanSMChannelMapping(Index)     (BswM_GetCanSMChannelMappingOfPCConfig()[(Index)].ImmediateUserStartIdxOfCanSMChannelMapping)
#define BswM_GetCanSMChannelState(Index)                              (BswM_GetCanSMChannelStateOfPCConfig()[(Index)])
#define BswM_GetExternalIdOfComMChannelMapping(Index)                 (BswM_GetComMChannelMappingOfPCConfig()[(Index)].ExternalIdOfComMChannelMapping)
#define BswM_GetComMChannelState(Index)                               (BswM_GetComMChannelStateOfPCConfig()[(Index)])
#define BswM_GetRulesIdxOfDeferredRules(Index)                        (BswM_GetDeferredRulesOfPCConfig()[(Index)].RulesIdxOfDeferredRules)
#define BswM_GetForcedActionListPriority(Index)                       (BswM_GetForcedActionListPriorityOfPCConfig()[(Index)])
#define BswM_GetExternalIdOfGenericMapping(Index)                     (BswM_GetGenericMappingOfPCConfig()[(Index)].ExternalIdOfGenericMapping)
#define BswM_GetImmediateUserEndIdxOfGenericMapping(Index)            (BswM_GetGenericMappingOfPCConfig()[(Index)].ImmediateUserEndIdxOfGenericMapping)
#define BswM_GetImmediateUserStartIdxOfGenericMapping(Index)          (BswM_GetGenericMappingOfPCConfig()[(Index)].ImmediateUserStartIdxOfGenericMapping)
#define BswM_GetInitValueOfGenericMapping(Index)                      (BswM_GetGenericMappingOfPCConfig()[(Index)].InitValueOfGenericMapping)
#define BswM_GetGenericState(Index)                                   (BswM_GetGenericStateOfPCConfig()[(Index)])
#define BswM_GetMaskedBitsOfImmediateUser(Index)                      (BswM_GetImmediateUserOfPCConfig()[(Index)].MaskedBitsOfImmediateUser)
#define BswM_GetRulesIndEndIdxOfImmediateUser(Index)                  (BswM_GetImmediateUserOfPCConfig()[(Index)].RulesIndEndIdxOfImmediateUser)
#define BswM_GetRulesIndStartIdxOfImmediateUser(Index)                (BswM_GetImmediateUserOfPCConfig()[(Index)].RulesIndStartIdxOfImmediateUser)
#define BswM_IsInitialized(Index)                                     ((BswM_GetInitializedOfPCConfig()[(Index)]) != FALSE)
#define BswM_GetExternalIdOfJ1939NmMapping(Index)                     (BswM_GetJ1939NmMappingOfPCConfig()[(Index)].ExternalIdOfJ1939NmMapping)
#define BswM_GetImmediateUserEndIdxOfJ1939NmMapping(Index)            (BswM_GetJ1939NmMappingOfPCConfig()[(Index)].ImmediateUserEndIdxOfJ1939NmMapping)
#define BswM_GetImmediateUserStartIdxOfJ1939NmMapping(Index)          (BswM_GetJ1939NmMappingOfPCConfig()[(Index)].ImmediateUserStartIdxOfJ1939NmMapping)
#define BswM_GetJ1939NmState(Index)                                   (BswM_GetJ1939NmStateOfPCConfig()[(Index)])
#define BswM_GetExternalIdOfLinSMMapping(Index)                       (BswM_GetLinSMMappingOfPCConfig()[(Index)].ExternalIdOfLinSMMapping)
#define BswM_GetImmediateUserEndIdxOfLinSMMapping(Index)              (BswM_GetLinSMMappingOfPCConfig()[(Index)].ImmediateUserEndIdxOfLinSMMapping)
#define BswM_GetImmediateUserStartIdxOfLinSMMapping(Index)            (BswM_GetLinSMMappingOfPCConfig()[(Index)].ImmediateUserStartIdxOfLinSMMapping)
#define BswM_GetLinSMState(Index)                                     (BswM_GetLinSMStateOfPCConfig()[(Index)])
#define BswM_GetImmediateUserEndIdxOfModeRequestMapping(Index)        (BswM_GetModeRequestMappingOfPCConfig()[(Index)].ImmediateUserEndIdxOfModeRequestMapping)
#define BswM_GetImmediateUserStartIdxOfModeRequestMapping(Index)      (BswM_GetModeRequestMappingOfPCConfig()[(Index)].ImmediateUserStartIdxOfModeRequestMapping)
#define BswM_GetModeRequestQueue(Index)                               (BswM_GetModeRequestQueueOfPCConfig()[(Index)])
#define BswM_GetNvMJobState(Index)                                    (BswM_GetNvMJobStateOfPCConfig()[(Index)])
#define BswM_GetQueueSemaphore(Index)                                 (BswM_GetQueueSemaphoreOfPCConfig()[(Index)])
#define BswM_IsQueueWritten(Index)                                    ((BswM_GetQueueWrittenOfPCConfig()[(Index)]) != FALSE)
#define BswM_GetRuleStates(Index)                                     (BswM_GetRuleStatesOfPCConfig()[(Index)])
#define BswM_GetFctPtrOfRules(Index)                                  (BswM_GetRulesOfPCConfig()[(Index)].FctPtrOfRules)
#define BswM_GetIdOfRules(Index)                                      (BswM_GetRulesOfPCConfig()[(Index)].IdOfRules)
#define BswM_GetRulesInd(Index)                                       (BswM_GetRulesIndOfPCConfig()[(Index)])
#define BswM_GetInitActionsOfRulesOfConfig(Index)                     (BswM_GetRulesOfConfigOfPCConfig()[(Index)].InitActionsOfRulesOfConfig)
#define BswM_GetTimerState(Index)                                     (BswM_GetTimerStateOfPCConfig()[(Index)])
#define BswM_GetTimerValue(Index)                                     (BswM_GetTimerValueOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetBitDataMacros  BswM Get Bit Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read bitcoded data elements.
  \{
*/ 
#define BswM_IsOnInitOfImmediateUser(Index)                           (BSWM_ONINITOFIMMEDIATEUSER_MASK == (BswM_GetMaskedBitsOfImmediateUser(Index) & BSWM_ONINITOFIMMEDIATEUSER_MASK))  /**< Arbitrate depending rules on initialization. */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetDeduplicatedDataMacros  BswM Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define BswM_IsImmediateUserUsedOfCanSMChannelMapping(Index)          (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_ImmediateUser */
#define BswM_GetInitValueOfCanSMChannelMapping(Index)                 CANSM_BSWM_NO_COMMUNICATION  /**< Initialization value of port. */
#define BswM_GetInitValueOfComMChannelMapping(Index)                  COMM_NO_COMMUNICATION  /**< Initialization value of port. */
#define BswM_IsImmediateUserUsedOfGenericMapping(Index)               (((boolean)(BswM_GetImmediateUserStartIdxOfGenericMapping(Index) != BSWM_NO_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_ImmediateUser */
#define BswM_IsRulesIndUsedOfImmediateUser(Index)                     (((boolean)(BswM_GetRulesIndStartIdxOfImmediateUser(Index) != BSWM_NO_RULESINDSTARTIDXOFIMMEDIATEUSER)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_RulesInd */
#define BswM_IsImmediateUserUsedOfJ1939NmMapping(Index)               (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_ImmediateUser */
#define BswM_GetInitValueOfJ1939NmMapping(Index)                      NM_STATE_BUS_SLEEP  /**< Initialization value of port. */
#define BswM_IsImmediateUserUsedOfLinSMMapping(Index)                 (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_ImmediateUser */
#define BswM_GetInitValueOfLinSMMapping(Index)                        LINSM_BSWM_NO_COM  /**< Initialization value of port. */
#define BswM_IsImmediateUserUsedOfModeRequestMapping(Index)           (((boolean)(BswM_GetImmediateUserStartIdxOfModeRequestMapping(Index) != BSWM_NO_IMMEDIATEUSERSTARTIDXOFMODEREQUESTMAPPING)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_ImmediateUser */
#define BswM_GetExternalIdOfNvMJobMapping(Index)                      13  /**< External id of BswMNvMJobModeIndication. */
#define BswM_GetInitValueOfNvMJobMapping(Index)                       NVM_REQ_OK  /**< Initialization value of port. */
#define BswM_GetInitOfRules(Index)                                    BSWM_FALSE  /**< Initialization value of rule state (TRUE, FALSE, UNDEFINED or DEACTIVATED). */
#define BswM_GetDeferredRulesEndIdxOfRulesOfConfig(Index)             7U  /**< the end index of the 0:n relation pointing to BswM_DeferredRules */
#define BswM_GetDeferredRulesStartIdxOfRulesOfConfig(Index)           0U  /**< the start index of the 0:n relation pointing to BswM_DeferredRules */
#define BswM_IsDeferredRulesUsedOfRulesOfConfig(Index)                (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_DeferredRules */
#define BswM_GetMaskedBitsOfRulesOfConfig(Index)                      0x03U  /**< contains bitcoded the boolean data of BswM_DeferredRulesUsedOfRulesOfConfig, BswM_RulesUsedOfRulesOfConfig */
#define BswM_GetRulesEndIdxOfRulesOfConfig(Index)                     66U  /**< the end index of the 0:n relation pointing to BswM_Rules */
#define BswM_GetRulesStartIdxOfRulesOfConfig(Index)                   0U  /**< the start index of the 0:n relation pointing to BswM_Rules */
#define BswM_IsRulesUsedOfRulesOfConfig(Index)                        (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_Rules */
#define BswM_GetSizeOfActionListQueue()                               BswM_GetSizeOfActionListQueueOfPCConfig()
#define BswM_GetSizeOfActionLists()                                   BswM_GetSizeOfActionListsOfPCConfig()
#define BswM_GetSizeOfCanSMChannelMapping()                           BswM_GetSizeOfCanSMChannelMappingOfPCConfig()
#define BswM_GetSizeOfCanSMChannelState()                             BswM_GetSizeOfCanSMChannelStateOfPCConfig()
#define BswM_GetSizeOfComMChannelMapping()                            BswM_GetSizeOfComMChannelMappingOfPCConfig()
#define BswM_GetSizeOfComMChannelState()                              BswM_GetSizeOfComMChannelStateOfPCConfig()
#define BswM_GetSizeOfDeferredRules()                                 BswM_GetSizeOfDeferredRulesOfPCConfig()
#define BswM_GetSizeOfForcedActionListPriority()                      BswM_GetSizeOfForcedActionListPriorityOfPCConfig()
#define BswM_GetSizeOfGenericMapping()                                BswM_GetSizeOfGenericMappingOfPCConfig()
#define BswM_GetSizeOfGenericState()                                  BswM_GetSizeOfGenericStateOfPCConfig()
#define BswM_GetSizeOfImmediateUser()                                 BswM_GetSizeOfImmediateUserOfPCConfig()
#define BswM_GetSizeOfInitialized()                                   BswM_GetSizeOfInitializedOfPCConfig()
#define BswM_GetSizeOfJ1939NmMapping()                                BswM_GetSizeOfJ1939NmMappingOfPCConfig()
#define BswM_GetSizeOfJ1939NmState()                                  BswM_GetSizeOfJ1939NmStateOfPCConfig()
#define BswM_GetSizeOfLinSMMapping()                                  BswM_GetSizeOfLinSMMappingOfPCConfig()
#define BswM_GetSizeOfLinSMState()                                    BswM_GetSizeOfLinSMStateOfPCConfig()
#define BswM_GetSizeOfModeRequestMapping()                            BswM_GetSizeOfModeRequestMappingOfPCConfig()
#define BswM_GetSizeOfModeRequestQueue()                              BswM_GetSizeOfModeRequestQueueOfPCConfig()
#define BswM_GetSizeOfNvMJobMapping()                                 BswM_GetSizeOfNvMJobMappingOfPCConfig()
#define BswM_GetSizeOfNvMJobState()                                   BswM_GetSizeOfNvMJobStateOfPCConfig()
#define BswM_GetSizeOfQueueSemaphore()                                BswM_GetSizeOfQueueSemaphoreOfPCConfig()
#define BswM_GetSizeOfQueueWritten()                                  BswM_GetSizeOfQueueWrittenOfPCConfig()
#define BswM_GetSizeOfRuleStates()                                    BswM_GetSizeOfRuleStatesOfPCConfig()
#define BswM_GetSizeOfRules()                                         BswM_GetSizeOfRulesOfPCConfig()
#define BswM_GetSizeOfRulesInd()                                      BswM_GetSizeOfRulesIndOfPCConfig()
#define BswM_GetSizeOfRulesOfConfig()                                 BswM_GetSizeOfRulesOfConfigOfPCConfig()
#define BswM_GetSizeOfTimerState()                                    BswM_GetSizeOfTimerStateOfPCConfig()
#define BswM_GetSizeOfTimerValue()                                    BswM_GetSizeOfTimerValueOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCSetDataMacros  BswM Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define BswM_SetActionListQueue(Index, Value)                         BswM_GetActionListQueueOfPCConfig()[(Index)] = (Value)
#define BswM_SetCanSMChannelState(Index, Value)                       BswM_GetCanSMChannelStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetComMChannelState(Index, Value)                        BswM_GetComMChannelStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetForcedActionListPriority(Index, Value)                BswM_GetForcedActionListPriorityOfPCConfig()[(Index)] = (Value)
#define BswM_SetGenericState(Index, Value)                            BswM_GetGenericStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetInitialized(Index, Value)                             BswM_GetInitializedOfPCConfig()[(Index)] = (Value)
#define BswM_SetJ1939NmState(Index, Value)                            BswM_GetJ1939NmStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetLinSMState(Index, Value)                              BswM_GetLinSMStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetModeRequestQueue(Index, Value)                        BswM_GetModeRequestQueueOfPCConfig()[(Index)] = (Value)
#define BswM_SetNvMJobState(Index, Value)                             BswM_GetNvMJobStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetQueueSemaphore(Index, Value)                          BswM_GetQueueSemaphoreOfPCConfig()[(Index)] = (Value)
#define BswM_SetQueueWritten(Index, Value)                            BswM_GetQueueWrittenOfPCConfig()[(Index)] = (Value)
#define BswM_SetRuleStates(Index, Value)                              BswM_GetRuleStatesOfPCConfig()[(Index)] = (Value)
#define BswM_SetTimerState(Index, Value)                              BswM_GetTimerStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetTimerValue(Index, Value)                              BswM_GetTimerValueOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCHasMacros  BswM Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define BswM_HasActionListQueue()                                     (TRUE != FALSE)
#define BswM_HasActionLists()                                         (TRUE != FALSE)
#define BswM_HasFctPtrOfActionLists()                                 (TRUE != FALSE)
#define BswM_HasCanSMChannelMapping()                                 (TRUE != FALSE)
#define BswM_HasExternalIdOfCanSMChannelMapping()                     (TRUE != FALSE)
#define BswM_HasImmediateUserEndIdxOfCanSMChannelMapping()            (TRUE != FALSE)
#define BswM_HasImmediateUserStartIdxOfCanSMChannelMapping()          (TRUE != FALSE)
#define BswM_HasImmediateUserUsedOfCanSMChannelMapping()              (TRUE != FALSE)
#define BswM_HasInitValueOfCanSMChannelMapping()                      (TRUE != FALSE)
#define BswM_HasCanSMChannelState()                                   (TRUE != FALSE)
#define BswM_HasComMChannelMapping()                                  (TRUE != FALSE)
#define BswM_HasExternalIdOfComMChannelMapping()                      (TRUE != FALSE)
#define BswM_HasInitValueOfComMChannelMapping()                       (TRUE != FALSE)
#define BswM_HasComMChannelState()                                    (TRUE != FALSE)
#define BswM_HasDeferredRules()                                       (TRUE != FALSE)
#define BswM_HasRulesIdxOfDeferredRules()                             (TRUE != FALSE)
#define BswM_HasForcedActionListPriority()                            (TRUE != FALSE)
#define BswM_HasGenericMapping()                                      (TRUE != FALSE)
#define BswM_HasExternalIdOfGenericMapping()                          (TRUE != FALSE)
#define BswM_HasImmediateUserEndIdxOfGenericMapping()                 (TRUE != FALSE)
#define BswM_HasImmediateUserStartIdxOfGenericMapping()               (TRUE != FALSE)
#define BswM_HasImmediateUserUsedOfGenericMapping()                   (TRUE != FALSE)
#define BswM_HasInitValueOfGenericMapping()                           (TRUE != FALSE)
#define BswM_HasGenericState()                                        (TRUE != FALSE)
#define BswM_HasImmediateUser()                                       (TRUE != FALSE)
#define BswM_HasMaskedBitsOfImmediateUser()                           (TRUE != FALSE)
#define BswM_HasOnInitOfImmediateUser()                               (TRUE != FALSE)
#define BswM_HasRulesIndEndIdxOfImmediateUser()                       (TRUE != FALSE)
#define BswM_HasRulesIndStartIdxOfImmediateUser()                     (TRUE != FALSE)
#define BswM_HasRulesIndUsedOfImmediateUser()                         (TRUE != FALSE)
#define BswM_HasInitialized()                                         (TRUE != FALSE)
#define BswM_HasJ1939NmMapping()                                      (TRUE != FALSE)
#define BswM_HasExternalIdOfJ1939NmMapping()                          (TRUE != FALSE)
#define BswM_HasImmediateUserEndIdxOfJ1939NmMapping()                 (TRUE != FALSE)
#define BswM_HasImmediateUserStartIdxOfJ1939NmMapping()               (TRUE != FALSE)
#define BswM_HasImmediateUserUsedOfJ1939NmMapping()                   (TRUE != FALSE)
#define BswM_HasInitValueOfJ1939NmMapping()                           (TRUE != FALSE)
#define BswM_HasJ1939NmState()                                        (TRUE != FALSE)
#define BswM_HasLinSMMapping()                                        (TRUE != FALSE)
#define BswM_HasExternalIdOfLinSMMapping()                            (TRUE != FALSE)
#define BswM_HasImmediateUserEndIdxOfLinSMMapping()                   (TRUE != FALSE)
#define BswM_HasImmediateUserStartIdxOfLinSMMapping()                 (TRUE != FALSE)
#define BswM_HasImmediateUserUsedOfLinSMMapping()                     (TRUE != FALSE)
#define BswM_HasInitValueOfLinSMMapping()                             (TRUE != FALSE)
#define BswM_HasLinSMState()                                          (TRUE != FALSE)
#define BswM_HasModeRequestMapping()                                  (TRUE != FALSE)
#define BswM_HasImmediateUserEndIdxOfModeRequestMapping()             (TRUE != FALSE)
#define BswM_HasImmediateUserStartIdxOfModeRequestMapping()           (TRUE != FALSE)
#define BswM_HasImmediateUserUsedOfModeRequestMapping()               (TRUE != FALSE)
#define BswM_HasModeRequestQueue()                                    (TRUE != FALSE)
#define BswM_HasNvMJobMapping()                                       (TRUE != FALSE)
#define BswM_HasExternalIdOfNvMJobMapping()                           (TRUE != FALSE)
#define BswM_HasInitValueOfNvMJobMapping()                            (TRUE != FALSE)
#define BswM_HasNvMJobState()                                         (TRUE != FALSE)
#define BswM_HasQueueSemaphore()                                      (TRUE != FALSE)
#define BswM_HasQueueWritten()                                        (TRUE != FALSE)
#define BswM_HasRuleStates()                                          (TRUE != FALSE)
#define BswM_HasRules()                                               (TRUE != FALSE)
#define BswM_HasFctPtrOfRules()                                       (TRUE != FALSE)
#define BswM_HasIdOfRules()                                           (TRUE != FALSE)
#define BswM_HasInitOfRules()                                         (TRUE != FALSE)
#define BswM_HasRulesInd()                                            (TRUE != FALSE)
#define BswM_HasRulesOfConfig()                                       (TRUE != FALSE)
#define BswM_HasDeferredRulesEndIdxOfRulesOfConfig()                  (TRUE != FALSE)
#define BswM_HasDeferredRulesStartIdxOfRulesOfConfig()                (TRUE != FALSE)
#define BswM_HasDeferredRulesUsedOfRulesOfConfig()                    (TRUE != FALSE)
#define BswM_HasInitActionsOfRulesOfConfig()                          (TRUE != FALSE)
#define BswM_HasMaskedBitsOfRulesOfConfig()                           (TRUE != FALSE)
#define BswM_HasRulesEndIdxOfRulesOfConfig()                          (TRUE != FALSE)
#define BswM_HasRulesStartIdxOfRulesOfConfig()                        (TRUE != FALSE)
#define BswM_HasRulesUsedOfRulesOfConfig()                            (TRUE != FALSE)
#define BswM_HasSizeOfActionListQueue()                               (TRUE != FALSE)
#define BswM_HasSizeOfActionLists()                                   (TRUE != FALSE)
#define BswM_HasSizeOfCanSMChannelMapping()                           (TRUE != FALSE)
#define BswM_HasSizeOfCanSMChannelState()                             (TRUE != FALSE)
#define BswM_HasSizeOfComMChannelMapping()                            (TRUE != FALSE)
#define BswM_HasSizeOfComMChannelState()                              (TRUE != FALSE)
#define BswM_HasSizeOfDeferredRules()                                 (TRUE != FALSE)
#define BswM_HasSizeOfForcedActionListPriority()                      (TRUE != FALSE)
#define BswM_HasSizeOfGenericMapping()                                (TRUE != FALSE)
#define BswM_HasSizeOfGenericState()                                  (TRUE != FALSE)
#define BswM_HasSizeOfImmediateUser()                                 (TRUE != FALSE)
#define BswM_HasSizeOfInitialized()                                   (TRUE != FALSE)
#define BswM_HasSizeOfJ1939NmMapping()                                (TRUE != FALSE)
#define BswM_HasSizeOfJ1939NmState()                                  (TRUE != FALSE)
#define BswM_HasSizeOfLinSMMapping()                                  (TRUE != FALSE)
#define BswM_HasSizeOfLinSMState()                                    (TRUE != FALSE)
#define BswM_HasSizeOfModeRequestMapping()                            (TRUE != FALSE)
#define BswM_HasSizeOfModeRequestQueue()                              (TRUE != FALSE)
#define BswM_HasSizeOfNvMJobMapping()                                 (TRUE != FALSE)
#define BswM_HasSizeOfNvMJobState()                                   (TRUE != FALSE)
#define BswM_HasSizeOfQueueSemaphore()                                (TRUE != FALSE)
#define BswM_HasSizeOfQueueWritten()                                  (TRUE != FALSE)
#define BswM_HasSizeOfRuleStates()                                    (TRUE != FALSE)
#define BswM_HasSizeOfRules()                                         (TRUE != FALSE)
#define BswM_HasSizeOfRulesInd()                                      (TRUE != FALSE)
#define BswM_HasSizeOfRulesOfConfig()                                 (TRUE != FALSE)
#define BswM_HasSizeOfTimerState()                                    (TRUE != FALSE)
#define BswM_HasSizeOfTimerValue()                                    (TRUE != FALSE)
#define BswM_HasTimerState()                                          (TRUE != FALSE)
#define BswM_HasTimerValue()                                          (TRUE != FALSE)
#define BswM_HasPCConfig()                                            (TRUE != FALSE)
#define BswM_HasActionListQueueOfPCConfig()                           (TRUE != FALSE)
#define BswM_HasActionListsOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasCanSMChannelMappingOfPCConfig()                       (TRUE != FALSE)
#define BswM_HasCanSMChannelStateOfPCConfig()                         (TRUE != FALSE)
#define BswM_HasComMChannelMappingOfPCConfig()                        (TRUE != FALSE)
#define BswM_HasComMChannelStateOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasDeferredRulesOfPCConfig()                             (TRUE != FALSE)
#define BswM_HasForcedActionListPriorityOfPCConfig()                  (TRUE != FALSE)
#define BswM_HasGenericMappingOfPCConfig()                            (TRUE != FALSE)
#define BswM_HasGenericStateOfPCConfig()                              (TRUE != FALSE)
#define BswM_HasImmediateUserOfPCConfig()                             (TRUE != FALSE)
#define BswM_HasInitializedOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasJ1939NmMappingOfPCConfig()                            (TRUE != FALSE)
#define BswM_HasJ1939NmStateOfPCConfig()                              (TRUE != FALSE)
#define BswM_HasLinSMMappingOfPCConfig()                              (TRUE != FALSE)
#define BswM_HasLinSMStateOfPCConfig()                                (TRUE != FALSE)
#define BswM_HasModeRequestMappingOfPCConfig()                        (TRUE != FALSE)
#define BswM_HasModeRequestQueueOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasNvMJobMappingOfPCConfig()                             (TRUE != FALSE)
#define BswM_HasNvMJobStateOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasQueueSemaphoreOfPCConfig()                            (TRUE != FALSE)
#define BswM_HasQueueWrittenOfPCConfig()                              (TRUE != FALSE)
#define BswM_HasRuleStatesOfPCConfig()                                (TRUE != FALSE)
#define BswM_HasRulesIndOfPCConfig()                                  (TRUE != FALSE)
#define BswM_HasRulesOfConfigOfPCConfig()                             (TRUE != FALSE)
#define BswM_HasRulesOfPCConfig()                                     (TRUE != FALSE)
#define BswM_HasSizeOfActionListQueueOfPCConfig()                     (TRUE != FALSE)
#define BswM_HasSizeOfActionListsOfPCConfig()                         (TRUE != FALSE)
#define BswM_HasSizeOfCanSMChannelMappingOfPCConfig()                 (TRUE != FALSE)
#define BswM_HasSizeOfCanSMChannelStateOfPCConfig()                   (TRUE != FALSE)
#define BswM_HasSizeOfComMChannelMappingOfPCConfig()                  (TRUE != FALSE)
#define BswM_HasSizeOfComMChannelStateOfPCConfig()                    (TRUE != FALSE)
#define BswM_HasSizeOfDeferredRulesOfPCConfig()                       (TRUE != FALSE)
#define BswM_HasSizeOfForcedActionListPriorityOfPCConfig()            (TRUE != FALSE)
#define BswM_HasSizeOfGenericMappingOfPCConfig()                      (TRUE != FALSE)
#define BswM_HasSizeOfGenericStateOfPCConfig()                        (TRUE != FALSE)
#define BswM_HasSizeOfImmediateUserOfPCConfig()                       (TRUE != FALSE)
#define BswM_HasSizeOfInitializedOfPCConfig()                         (TRUE != FALSE)
#define BswM_HasSizeOfJ1939NmMappingOfPCConfig()                      (TRUE != FALSE)
#define BswM_HasSizeOfJ1939NmStateOfPCConfig()                        (TRUE != FALSE)
#define BswM_HasSizeOfLinSMMappingOfPCConfig()                        (TRUE != FALSE)
#define BswM_HasSizeOfLinSMStateOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasSizeOfModeRequestMappingOfPCConfig()                  (TRUE != FALSE)
#define BswM_HasSizeOfModeRequestQueueOfPCConfig()                    (TRUE != FALSE)
#define BswM_HasSizeOfNvMJobMappingOfPCConfig()                       (TRUE != FALSE)
#define BswM_HasSizeOfNvMJobStateOfPCConfig()                         (TRUE != FALSE)
#define BswM_HasSizeOfQueueSemaphoreOfPCConfig()                      (TRUE != FALSE)
#define BswM_HasSizeOfQueueWrittenOfPCConfig()                        (TRUE != FALSE)
#define BswM_HasSizeOfRuleStatesOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasSizeOfRulesIndOfPCConfig()                            (TRUE != FALSE)
#define BswM_HasSizeOfRulesOfConfigOfPCConfig()                       (TRUE != FALSE)
#define BswM_HasSizeOfRulesOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasSizeOfTimerStateOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasSizeOfTimerValueOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasTimerStateOfPCConfig()                                (TRUE != FALSE)
#define BswM_HasTimerValueOfPCConfig()                                (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCIncrementDataMacros  BswM Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define BswM_IncActionListQueue(Index)                                BswM_GetActionListQueue(Index)++
#define BswM_IncCanSMChannelState(Index)                              BswM_GetCanSMChannelState(Index)++
#define BswM_IncComMChannelState(Index)                               BswM_GetComMChannelState(Index)++
#define BswM_IncForcedActionListPriority(Index)                       BswM_GetForcedActionListPriority(Index)++
#define BswM_IncGenericState(Index)                                   BswM_GetGenericState(Index)++
#define BswM_IncJ1939NmState(Index)                                   BswM_GetJ1939NmState(Index)++
#define BswM_IncLinSMState(Index)                                     BswM_GetLinSMState(Index)++
#define BswM_IncModeRequestQueue(Index)                               BswM_GetModeRequestQueue(Index)++
#define BswM_IncNvMJobState(Index)                                    BswM_GetNvMJobState(Index)++
#define BswM_IncQueueSemaphore(Index)                                 BswM_GetQueueSemaphore(Index)++
#define BswM_IncRuleStates(Index)                                     BswM_GetRuleStates(Index)++
#define BswM_IncTimerState(Index)                                     BswM_GetTimerState(Index)++
#define BswM_IncTimerValue(Index)                                     BswM_GetTimerValue(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCDecrementDataMacros  BswM Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define BswM_DecActionListQueue(Index)                                BswM_GetActionListQueue(Index)--
#define BswM_DecCanSMChannelState(Index)                              BswM_GetCanSMChannelState(Index)--
#define BswM_DecComMChannelState(Index)                               BswM_GetComMChannelState(Index)--
#define BswM_DecForcedActionListPriority(Index)                       BswM_GetForcedActionListPriority(Index)--
#define BswM_DecGenericState(Index)                                   BswM_GetGenericState(Index)--
#define BswM_DecJ1939NmState(Index)                                   BswM_GetJ1939NmState(Index)--
#define BswM_DecLinSMState(Index)                                     BswM_GetLinSMState(Index)--
#define BswM_DecModeRequestQueue(Index)                               BswM_GetModeRequestQueue(Index)--
#define BswM_DecNvMJobState(Index)                                    BswM_GetNvMJobState(Index)--
#define BswM_DecQueueSemaphore(Index)                                 BswM_GetQueueSemaphore(Index)--
#define BswM_DecRuleStates(Index)                                     BswM_GetRuleStates(Index)--
#define BswM_DecTimerState(Index)                                     BswM_GetTimerState(Index)--
#define BswM_DecTimerValue(Index)                                     BswM_GetTimerValue(Index)--
/** 
  \}
*/ 

  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/* PRQA S 3451 EXTERNDECLARATIONS */ /* MD_BswM_3451 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
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
extern CONST(BswM_ActionListsType, BSWM_CONST) BswM_ActionLists[84];
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
extern CONST(BswM_CanSMChannelMappingType, BSWM_CONST) BswM_CanSMChannelMapping[5];
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
extern CONST(BswM_ComMChannelMappingType, BSWM_CONST) BswM_ComMChannelMapping[10];
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
extern CONST(BswM_DeferredRulesType, BSWM_CONST) BswM_DeferredRules[7];
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
extern CONST(BswM_GenericMappingType, BSWM_CONST) BswM_GenericMapping[3];
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
extern CONST(BswM_ImmediateUserType, BSWM_CONST) BswM_ImmediateUser[19];
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
extern CONST(BswM_J1939NmMappingType, BSWM_CONST) BswM_J1939NmMapping[2];
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
extern CONST(BswM_LinSMMappingType, BSWM_CONST) BswM_LinSMMapping[5];
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
extern CONST(BswM_ModeRequestMappingType, BSWM_CONST) BswM_ModeRequestMapping[9];
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
extern CONST(BswM_RulesType, BSWM_CONST) BswM_Rules[66];
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
extern CONST(BswM_RulesIndType, BSWM_CONST) BswM_RulesInd[64];
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
extern CONST(BswM_RulesOfConfigType, BSWM_CONST) BswM_RulesOfConfig[1];
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
extern VAR(uBswM_ActionListQueueType, BSWM_VAR_NOINIT) BswM_ActionListQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
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
extern VAR(CanSM_BswMCurrentStateType, BSWM_VAR_NOINIT) BswM_CanSMChannelState[5];
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
extern VAR(ComM_ModeType, BSWM_VAR_NOINIT) BswM_ComMChannelState[10];
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
extern VAR(BswM_ForcedActionListPriorityType, BSWM_VAR_NOINIT) BswM_ForcedActionListPriority[1];
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
extern VAR(BswM_ModeType, BSWM_VAR_NOINIT) BswM_GenericState[3];
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
extern VAR(BswM_InitializedType, BSWM_VAR_NOINIT) BswM_Initialized[1];
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
extern VAR(Nm_StateType, BSWM_VAR_NOINIT) BswM_J1939NmState[2];
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
extern VAR(LinSM_ModeType, BSWM_VAR_NOINIT) BswM_LinSMState[5];
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
extern VAR(BswM_ModeRequestQueueType, BSWM_VAR_NOINIT) BswM_ModeRequestQueue[19];
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
extern VAR(NvM_RequestResultType, BSWM_VAR_NOINIT) BswM_NvMJobState[1];
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
extern VAR(BswM_QueueSemaphoreType, BSWM_VAR_NOINIT) BswM_QueueSemaphore[1];
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
extern VAR(BswM_QueueWrittenType, BSWM_VAR_NOINIT) BswM_QueueWritten[1];
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
extern VAR(BswM_RuleStatesType, BSWM_VAR_NOINIT) BswM_RuleStates[66];
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
extern VAR(uBswM_TimerStateType, BSWM_VAR_NOINIT) BswM_TimerState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
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
extern VAR(uBswM_TimerValueType, BSWM_VAR_NOINIT) BswM_TimerValue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define BSWM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/* PRQA L:EXTERNDECLARATIONS */


#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#if (BSWM_USE_INIT_POINTER == STD_ON)
extern  P2CONST(BswM_ConfigType, AUTOMATIC, BSWM_PBCFG) BswM_ConfigPtr;
#endif

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/* -----------------------------------------------------------------------------
    &&&~ EXTERNAL DECLARATIONS
 ----------------------------------------------------------------------------- */

#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/*! \addtogroup    BswMGeneratedFunctions BswM Generated Functions
 * \{
 */
/* PRQA S 0779 FUNCTIONDECLARATIONS */ /* MD_BswM_0779 */

/**********************************************************************************************************************
 *  Init
 *********************************************************************************************************************/
/*! \defgroup    Init
 * \{
 */
/**********************************************************************************************************************
 *  BswM_Init_Gen_NoPartitions
 *********************************************************************************************************************/
/*!
 * \brief       Initializes BswM.
 * \details     Part of the BswM_Init. Initializes all generated variables and executes action lists for initialization.
 * \pre         -
 * \reentrant   FALSE
 * \synchronous TRUE
 * \note        May only be called by BswM_Init.
 */
extern FUNC(void, BSWM_CODE) BswM_Init_Gen_NoPartitions(void);
/*! \} */ /* End of group Init */

/*!
 * \{
 * \brief       Function called by Rte to indicate a new mode of a SwcModeRequestPort.
 * \details     Mode is read from Rte, stored and depending immediate rules are arbitrated.
 * \pre         -
 * \context     TASK
 * \reentrant   TRUE
 * \synchronous TRUE
 * \note        Function is called by RTE.
 */
/*! \fn BswM_Read_LIN3_ScheduleTableRequestMode */
/*! \fn BswM_Read_LIN1_ScheduleTableRequestMode */
/*! \fn BswM_Read_LIN2_ScheduleTableRequestMode */
/*! \fn BswM_Read_LIN4_ScheduleTableRequestMode */
/*! \fn BswM_Read_LIN5_ScheduleTableRequestMode */
/*! \} */ /* End of sharing description for BswMRteRequestFunctions */

/**********************************************************************************************************************
 *  Common
 *********************************************************************************************************************/
/*! \defgroup    Common
 * \{
 */
/**********************************************************************************************************************
 *  BswM_ModeNotificationFct
 *********************************************************************************************************************/
/*!
 * \brief       Switch Modes of RTE and writes RTE values.
 * \details     Forwards a BswM Switch Action to the RTE and writes value of RteRequestPorts to RTE.
 * \pre         -
 * \context     TASK
 * \reentrant   TRUE
 * \synchronous TRUE
 * \note        May only be called by BswM_MainFunction.
 */
extern FUNC(void, BSWM_CODE) BswM_ModeNotificationFct(void);
/*! \} */ /* End of group Common */

/**********************************************************************************************************************
 *  SwcModeRequestUpdate
 *********************************************************************************************************************/
/*! \defgroup    SwcModeRequestUpdate
 * \{
 */
/**********************************************************************************************************************
 *  BswM_SwcModeRequestUpdateFct
 *********************************************************************************************************************/
/*!
 * \brief       Reads port values from RTE.
 * \details     Gets the current value of SwcModeRequest Ports and SwcNotification Ports from RTE.
 * \pre         -
 * \context     TASK
 * \reentrant   TRUE
 * \synchronous TRUE
 * \note        May only be called by BswM_MainFunction.
 */
extern FUNC(void, BSWM_CODE) BswM_SwcModeRequestUpdateFct(void);
/*! \} */ /* End of group SwcModeRequestUpdate */
/* PRQA L:FUNCTIONDECLARATIONS */
/*! \} */ /* End of group BswMGeneratedFunctions */


#if (BSWM_FUNCTION_BASED == STD_OFF)
/**********************************************************************************************************************
 *  BswM_Action_ActionListHandler()
 **********************************************************************************************************************/
/*!
 * \brief       Executes an action list.
 * \details     Executes all actions of an action list.
 * \param[in]   handleId  Id of the action list to execute.
 * \return      E_OK      Action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
extern FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ActionListHandler(BswM_HandleType handleId);
#endif

#if ((BSWM_RULES == STD_ON)  && (BSWM_FUNCTION_BASED == STD_OFF))
/**********************************************************************************************************************
 *  BswM_ArbitrateRule()
 **********************************************************************************************************************/
/*!
 * \brief       Arbitrates a rule.
 * \details     Evaluates the logical expression of the rule and determines the action list to execute.
 * \param[in]   ruleId  Id of the rule to arbitrate
 * \return      ID of action list to execute (BSWM_NO_ACTIONLIST if no action list shall be executed)
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
extern FUNC(BswM_SizeOfActionListsType, BSWM_CODE) BswM_ArbitrateRule(BswM_HandleType ruleId);
#endif

/**********************************************************************************************************************
 *  BswM_ExecuteIpduGroupControl()
 **********************************************************************************************************************/
/*!
 * \brief       Enabes and disables PDU Groups and DeadlineMonitoring in Com.
 * \details     Forwards the changes to the local Com_IpduGroupVector caused by executed actions to the corresponding 
 *              Com APIS.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
extern FUNC(void, BSWM_CODE) BswM_ExecuteIpduGroupControl(void);

#if(BSWM_IMMEDIATEUSER == STD_ON)
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
/**********************************************************************************************************************
 *  BswM_ImmediateModeRequest()
 **********************************************************************************************************************/
/*!
 * \brief       Processes an immediate mode request.
 * \details     Queues mode request and starts arbitration of depending rules if no other request is currently active.
 * \param[in]   start   Handle of first mode request.
 * \param[in]   end     Handle of last mode request.
 * \param[in]   sid     Service Id of calling API. Only available if BSWM_DEV_ERROR_REPORT is STD_ON.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
extern FUNC(void, BSWM_CODE) BswM_ImmediateModeRequest(BswM_SizeOfImmediateUserType start, BswM_SizeOfImmediateUserType end, uint8 sid);
# else
extern FUNC(void, BSWM_CODE) BswM_ImmediateModeRequest(BswM_SizeOfImmediateUserType start, BswM_SizeOfImmediateUserType end);
# endif
#endif

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#endif /* BSWM_PRIVATE_CFG_H */


