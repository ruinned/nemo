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
 *            Module: LinIf
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: LinIf_Lcfg.c
 *   Generation Time: 2018-11-22 03:14:18
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


/**********************************************************************************************************************
 *  MISRA
 *********************************************************************************************************************/
/* Disable the following MISRA warnings because they would appear too often for individual suppression. */

/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_MSR_5.1_779 */

/**********************************************************************************************************************
 *  Includes
 *********************************************************************************************************************/

#include "LinIf.h"
#include "PduR_LinIf.h"
/*
 * [LINIF556]
 */
#include "LinSM_Cbk.h"


/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
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
  CONFIGURATION CLASS: LINK
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
  LinIf_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    LinIf_ChannelConfig
  \details
  Element                         Description
  FrameLengthDelayListEndIdx      the end index of the 0:n relation pointing to LinIf_FrameLengthDelayList
  FrameLengthDelayListStartIdx    the start index of the 0:n relation pointing to LinIf_FrameLengthDelayList
  FrameListEndIdx                 the end index of the 1:n relation pointing to LinIf_FrameList
  FrameListStartIdx               the start index of the 1:n relation pointing to LinIf_FrameList
  ScheduleTableListIndEndIdx      the end index of the 1:n relation pointing to LinIf_ScheduleTableListInd
  ScheduleTableListIndStartIdx    the start index of the 1:n relation pointing to LinIf_ScheduleTableListInd
  ScheduleChangeBeforeSlotEnd     Point of schedule table change. True = after maximum frame time, False = at end of schedule slot.
  ChannelFuncCallCycle            Channel function call cycle
  LoadBalancingOffset             Load balancing offset in ticks
  StartupState                    Startup state of channel: 0 : sleep 1 : operational state
  TimeBase                        Channel time base
  WakeupDelayExternal             External wakeup delay in ticks
  WakeupDelayInternal             Internal wakeup delay in ticks
  NumberOfSchedules               Number of schedule tables
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(LinIf_ChannelConfigType, LINIF_CONST) LinIf_ChannelConfig[5] = {
    /* Index    FrameLengthDelayListEndIdx  FrameLengthDelayListStartIdx  FrameListEndIdx  FrameListStartIdx  ScheduleTableListIndEndIdx  ScheduleTableListIndStartIdx  ScheduleChangeBeforeSlotEnd  ChannelFuncCallCycle  LoadBalancingOffset  StartupState  TimeBase  WakeupDelayExternal  WakeupDelayInternal  NumberOfSchedules */
  { /*     0 */                         8U,                           0U,             13U,                0U,                         5U,                           0U,                       FALSE,                   1U,                  1U,           0U,       5U,                 20U,                 20U,               4UL },
  { /*     1 */                        16U,                           8U,             23U,               13U,                        12U,                           5U,                       FALSE,                   1U,                  1U,           0U,       5U,                 20U,                 20U,               6UL },
  { /*     2 */                        24U,                          16U,             40U,               23U,                        19U,                          12U,                       FALSE,                   1U,                  1U,           0U,       5U,                 20U,                 20U,               6UL },
  { /*     3 */                        32U,                          24U,             53U,               40U,                        26U,                          19U,                       FALSE,                   1U,                  1U,           0U,       5U,                 20U,                 20U,               6UL },
  { /*     4 */                        40U,                          32U,             61U,               53U,                        33U,                          26U,                       FALSE,                   1U,                  1U,           0U,       5U,                 20U,                 20U,               6UL }
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_ChannelIndTable
**********************************************************************************************************************/
/** 
  \var    LinIf_ChannelIndTable
  \details
  Element               Description
  LinChannelIndex   
  SystemChannelIndex
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(LinIf_ChannelIndTableType, LINIF_CONST) LinIf_ChannelIndTable[5] = {
    /* Index    LinChannelIndex                               SystemChannelIndex                             */
  { /*     0 */ 1 /* LinConf_LinChannel_CN_LIN01_5bde9749 */, 6 /* ComMConf_ComMChannel_CN_LIN01_5bde9749 */ },
  { /*     1 */ 2 /* LinConf_LinChannel_CN_LIN02_c2d7c6f3 */, 7 /* ComMConf_ComMChannel_CN_LIN02_c2d7c6f3 */ },
  { /*     2 */ 0 /* LinConf_LinChannel_CN_LIN00_2cd9a7df */, 5 /* ComMConf_ComMChannel_CN_LIN00_2cd9a7df */ },
  { /*     3 */ 3 /* LinConf_LinChannel_CN_LIN03_b5d0f665 */, 8 /* ComMConf_ComMChannel_CN_LIN03_b5d0f665 */ },
  { /*     4 */ 4 /* LinConf_LinChannel_CN_LIN04_2bb463c6 */, 9 /* ComMConf_ComMChannel_CN_LIN04_2bb463c6 */ }
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_Entry
**********************************************************************************************************************/
/** 
  \var    LinIf_Entry
  \details
  Element                 Description
  FrameListIdx            the index of the 1:1 relation pointing to LinIf_FrameList
  DelayInTimebaseTicks
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(LinIf_EntryType, LINIF_CONST) LinIf_Entry[153] = {
    /* Index    FrameListIdx  DelayInTimebaseTicks        Comment                                            Referable Keys */
  { /*     0 */          11U,                   4U },  /* [FT_MasterReq_e2b94730_Tx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/MasterReq_SlaveResp_e4c5082e] */
  { /*     1 */          12U,                   4U },  /* [FT_SlaveResp_4abe3e84_Rx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/MasterReq_SlaveResp_e4c5082e] */
  { /*     2 */          11U,                   4U },  /* [FT_MasterReq_e2b94730_Tx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/MasterReq_SlaveResp_Table0_9e3481d6] */
  { /*     3 */          12U,                   4U },  /* [FT_SlaveResp_4abe3e84_Rx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/MasterReq_SlaveResp_Table0_9e3481d6] */
  { /*     4 */           0U,                   2U },  /* [FT_Backlight_FuncInd_L2_da42c80c_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/MasterReq_SlaveResp_Table0_9e3481d6] */
  { /*     5 */           2U,                   3U },  /* [FT_FSP_1_2_Req_L2_ca2370c5_Tx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/MasterReq_SlaveResp_Table0_9e3481d6] */
  { /*     6 */           1U,                   3U },  /* [FT_FSP_3_4_Req_L2_08b9a97f_Tx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/MasterReq_SlaveResp_Table0_9e3481d6] */
  { /*     7 */          10U,                   2U },  /* [FT_FSP1_Frame_L2_132831a0_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/MasterReq_SlaveResp_Table0_9e3481d6] */
  { /*     8 */           8U,                   2U },  /* [FT_FSP2_Frame_L2_f81f8aa3_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/MasterReq_SlaveResp_Table0_9e3481d6] */
  { /*     9 */           3U,                   2U },  /* [FT_FSP3_Frame_L2_17dde19d_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/MasterReq_SlaveResp_Table0_9e3481d6] */
  { /*    10 */           9U,                   2U },  /* [FT_FSP4_Frame_L2_f501fae4_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/MasterReq_SlaveResp_Table0_9e3481d6] */
  { /*    11 */           0U,                   2U },  /* [FT_Backlight_FuncInd_L2_da42c80c_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/Table0_df24d2a0] */
  { /*    12 */           2U,                   3U },  /* [FT_FSP_1_2_Req_L2_ca2370c5_Tx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/Table0_df24d2a0] */
  { /*    13 */           1U,                   3U },  /* [FT_FSP_3_4_Req_L2_08b9a97f_Tx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/Table0_df24d2a0] */
  { /*    14 */          10U,                   2U },  /* [FT_FSP1_Frame_L2_132831a0_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/Table0_df24d2a0] */
  { /*    15 */           8U,                   2U },  /* [FT_FSP2_Frame_L2_f81f8aa3_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/Table0_df24d2a0] */
  { /*    16 */           3U,                   2U },  /* [FT_FSP3_Frame_L2_17dde19d_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/Table0_df24d2a0] */
  { /*    17 */           9U,                   2U },  /* [FT_FSP4_Frame_L2_f501fae4_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/Table0_df24d2a0] */
  { /*    18 */           5U,                   4U },  /* [FT_FSP1_SwitchDetResp_L2_aba17fa3_Rx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/Table_e_dbb68a08] */
  { /*    19 */           7U,                   4U },  /* [FT_FSP2_SwitchDetResp_L2_4127a2c1_Rx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/Table_e_dbb68a08] */
  { /*    20 */           6U,                   4U },  /* [FT_FSP3_SwitchDetResp_L2_ae751420_Rx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/Table_e_dbb68a08] */
  { /*    21 */           4U,                   4U },  /* [FT_FSP4_SwitchDetResp_L2_4f5b1e44_Rx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/Table_e_dbb68a08] */
  { /*    22 */          21U,                   4U },  /* [FT_MasterReq_41efc199_Tx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/MasterReq_SlaveResp_1692e5d6] */
  { /*    23 */          22U,                   4U },  /* [FT_SlaveResp_e9e8b82d_Rx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/MasterReq_SlaveResp_1692e5d6] */
  { /*    24 */          21U,                   4U },  /* [FT_MasterReq_41efc199_Tx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/MasterReq_SlaveResp_Table_1_631128e5] */
  { /*    25 */          22U,                   4U },  /* [FT_SlaveResp_e9e8b82d_Rx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/MasterReq_SlaveResp_Table_1_631128e5] */
  { /*    26 */          15U,                   2U },  /* [FT_Backlight_FuncInd_L3_e9e4dd82_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/MasterReq_SlaveResp_Table_1_631128e5] */
  { /*    27 */          14U,                   3U },  /* [FT_FSP_1_2_Req_L3_e53ae97b_Tx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/MasterReq_SlaveResp_Table_1_631128e5] */
  { /*    28 */          20U,                   2U },  /* [FT_FSP1_Frame_L3_12ca380b_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/MasterReq_SlaveResp_Table_1_631128e5] */
  { /*    29 */          16U,                   2U },  /* [FT_FSP2_Frame_L3_f9fd8308_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/MasterReq_SlaveResp_Table_1_631128e5] */
  { /*    30 */          13U,                   2U },  /* [FT_MastertoTCP_a2bc639c_Tx]           */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/MasterReq_SlaveResp_Table_1_631128e5] */
  { /*    31 */          19U,                   3U },  /* [FT_TCPtoMaster_4ab36a9a_Rx]           */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/MasterReq_SlaveResp_Table_1_631128e5] */
  { /*    32 */          21U,                   4U },  /* [FT_MasterReq_41efc199_Tx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/MasterReq_SlaveResp_Table_2_fa18795f] */
  { /*    33 */          22U,                   4U },  /* [FT_SlaveResp_e9e8b82d_Rx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/MasterReq_SlaveResp_Table_2_fa18795f] */
  { /*    34 */          15U,                   2U },  /* [FT_Backlight_FuncInd_L3_e9e4dd82_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/MasterReq_SlaveResp_Table_2_fa18795f] */
  { /*    35 */          14U,                   3U },  /* [FT_FSP_1_2_Req_L3_e53ae97b_Tx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/MasterReq_SlaveResp_Table_2_fa18795f] */
  { /*    36 */          20U,                   2U },  /* [FT_FSP1_Frame_L3_12ca380b_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/MasterReq_SlaveResp_Table_2_fa18795f] */
  { /*    37 */          15U,                   2U },  /* [FT_Backlight_FuncInd_L3_e9e4dd82_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/Table_1_cbd13a3e] */
  { /*    38 */          14U,                   3U },  /* [FT_FSP_1_2_Req_L3_e53ae97b_Tx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/Table_1_cbd13a3e] */
  { /*    39 */          20U,                   2U },  /* [FT_FSP1_Frame_L3_12ca380b_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/Table_1_cbd13a3e] */
  { /*    40 */          16U,                   2U },  /* [FT_FSP2_Frame_L3_f9fd8308_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/Table_1_cbd13a3e] */
  { /*    41 */          13U,                   2U },  /* [FT_MastertoTCP_a2bc639c_Tx]           */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/Table_1_cbd13a3e] */
  { /*    42 */          19U,                   3U },  /* [FT_TCPtoMaster_4ab36a9a_Rx]           */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/Table_1_cbd13a3e] */
  { /*    43 */          15U,                   2U },  /* [FT_Backlight_FuncInd_L3_e9e4dd82_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/Table_2_52d86b84] */
  { /*    44 */          14U,                   3U },  /* [FT_FSP_1_2_Req_L3_e53ae97b_Tx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/Table_2_52d86b84] */
  { /*    45 */          20U,                   2U },  /* [FT_FSP1_Frame_L3_12ca380b_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/Table_2_52d86b84] */
  { /*    46 */          18U,                   4U },  /* [FT_FSP1_SwitchDetResp_L3_cf8e7646_Rx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/Table_e_a7d7afd3] */
  { /*    47 */          17U,                   4U },  /* [FT_FSP2_SwitchDetResp_L3_2508ab24_Rx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/Table_e_a7d7afd3] */
  { /*    48 */          38U,                   4U },  /* [FT_MasterReq_355bc768_Tx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_03d8aeb9] */
  { /*    49 */          39U,                   4U },  /* [FT_SlaveResp_9d5cbedc_Rx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_03d8aeb9] */
    /* Index    FrameListIdx  DelayInTimebaseTicks        Comment                                            Referable Keys */
  { /*    50 */          38U,                   4U },  /* [FT_MasterReq_355bc768_Tx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_1_2a158a89] */
  { /*    51 */          39U,                   4U },  /* [FT_SlaveResp_9d5cbedc_Rx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_1_2a158a89] */
  { /*    52 */          26U,                   2U },  /* [FT_Backlight_FuncInd_L1_7f2b7abe_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_1_2a158a89] */
  { /*    53 */          27U,                   3U },  /* [FT_FSP_1_2_Req_L1_d20f4458_Tx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_1_2a158a89] */
  { /*    54 */          31U,                   2U },  /* [FT_FSP1_Frame_L1_11528ace_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_1_2a158a89] */
  { /*    55 */          30U,                   2U },  /* [FT_FSP2_Frame_L1_fa6531cd_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_1_2a158a89] */
  { /*    56 */          23U,                   2U },  /* [FT_CIOMtoSlaves1_L1_417ce0d9_Tx]      */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_1_2a158a89] */
  { /*    57 */          35U,                   3U },  /* [FT_ILCP1toCIOM_L1_c9f6c6bc_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_1_2a158a89] */
  { /*    58 */          38U,                   4U },  /* [FT_MasterReq_355bc768_Tx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_2_b31cdb33] */
  { /*    59 */          39U,                   4U },  /* [FT_SlaveResp_9d5cbedc_Rx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_2_b31cdb33] */
  { /*    60 */          25U,                   3U },  /* [FT_CIOMtoSlaves2_FR1_L1_82486131_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_2_b31cdb33] */
  { /*    61 */          37U,                   4U },  /* [FT_LECM2toCIOM_FR1_L1_5fb10dc0_Rx]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_2_b31cdb33] */
  { /*    62 */          29U,                   2U },  /* [FT_LECM2toCIOM_FR2_L1_4d04a22e_Rx]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_2_b31cdb33] */
  { /*    63 */          36U,                   3U },  /* [FT_LECMBasic2CIOM_L1_c4710275_Rx]     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_2_b31cdb33] */
  { /*    64 */          24U,                   4U },  /* [FT_CIOMtoSlaves2_FR2_L1_90fdcedf_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_2_b31cdb33] */
  { /*    65 */          28U,                   3U },  /* [FT_CIOMtoSlaves2_FR3_L1_2841a9ba_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_2_b31cdb33] */
  { /*    66 */          32U,                   3U },  /* [FT_LECM2toCIOM_FR3_L1_f5b8c54b_Rx]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/MasterReq_SlaveResp_Table_2_b31cdb33] */
  { /*    67 */          26U,                   2U },  /* [FT_Backlight_FuncInd_L1_7f2b7abe_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_1_2abffe93] */
  { /*    68 */          27U,                   3U },  /* [FT_FSP_1_2_Req_L1_d20f4458_Tx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_1_2abffe93] */
  { /*    69 */          31U,                   2U },  /* [FT_FSP1_Frame_L1_11528ace_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_1_2abffe93] */
  { /*    70 */          30U,                   2U },  /* [FT_FSP2_Frame_L1_fa6531cd_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_1_2abffe93] */
  { /*    71 */          23U,                   2U },  /* [FT_CIOMtoSlaves1_L1_417ce0d9_Tx]      */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_1_2abffe93] */
  { /*    72 */          35U,                   3U },  /* [FT_ILCP1toCIOM_L1_c9f6c6bc_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_1_2abffe93] */
  { /*    73 */          25U,                   3U },  /* [FT_CIOMtoSlaves2_FR1_L1_82486131_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    74 */          37U,                   4U },  /* [FT_LECM2toCIOM_FR1_L1_5fb10dc0_Rx]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    75 */          29U,                   2U },  /* [FT_LECM2toCIOM_FR2_L1_4d04a22e_Rx]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    76 */          36U,                   3U },  /* [FT_LECMBasic2CIOM_L1_c4710275_Rx]     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    77 */          24U,                   4U },  /* [FT_CIOMtoSlaves2_FR2_L1_90fdcedf_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    78 */          25U,                   3U },  /* [FT_CIOMtoSlaves2_FR1_L1_82486131_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    79 */          37U,                   4U },  /* [FT_LECM2toCIOM_FR1_L1_5fb10dc0_Rx]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    80 */          29U,                   2U },  /* [FT_LECM2toCIOM_FR2_L1_4d04a22e_Rx]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    81 */          36U,                   3U },  /* [FT_LECMBasic2CIOM_L1_c4710275_Rx]     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    82 */          28U,                   3U },  /* [FT_CIOMtoSlaves2_FR3_L1_2841a9ba_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    83 */          25U,                   3U },  /* [FT_CIOMtoSlaves2_FR1_L1_82486131_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    84 */          37U,                   4U },  /* [FT_LECM2toCIOM_FR1_L1_5fb10dc0_Rx]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    85 */          29U,                   2U },  /* [FT_LECM2toCIOM_FR2_L1_4d04a22e_Rx]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    86 */          36U,                   3U },  /* [FT_LECMBasic2CIOM_L1_c4710275_Rx]     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    87 */          32U,                   3U },  /* [FT_LECM2toCIOM_FR3_L1_f5b8c54b_Rx]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    88 */          25U,                   3U },  /* [FT_CIOMtoSlaves2_FR1_L1_82486131_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    89 */          37U,                   4U },  /* [FT_LECM2toCIOM_FR1_L1_5fb10dc0_Rx]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    90 */          29U,                   2U },  /* [FT_LECM2toCIOM_FR2_L1_4d04a22e_Rx]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    91 */          36U,                   3U },  /* [FT_LECMBasic2CIOM_L1_c4710275_Rx]     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_2_b3b6af29] */
  { /*    92 */          34U,                   4U },  /* [FT_FSP1_SwitchDetResp_L1_3c4fc6c8_Rx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_e_46b96b7e] */
  { /*    93 */          33U,                   4U },  /* [FT_FSP2_SwitchDetResp_L1_d6c91baa_Rx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_e_46b96b7e] */
  { /*    94 */          23U,                   2U },  /* [FT_CIOMtoSlaves1_L1_417ce0d9_Tx]      */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_e_46b96b7e] */
  { /*    95 */          35U,                   3U },  /* [FT_ILCP1toCIOM_L1_c9f6c6bc_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/Table_e_46b96b7e] */
  { /*    96 */          51U,                   4U },  /* [FT_MasterReq_960d41c1_Tx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_f18f4341] */
  { /*    97 */          52U,                   4U },  /* [FT_SlaveResp_3e0a3875_Rx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_f18f4341] */
  { /*    98 */          51U,                   4U },  /* [FT_MasterReq_960d41c1_Tx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_Table_1_479379d3] */
  { /*    99 */          52U,                   4U },  /* [FT_SlaveResp_3e0a3875_Rx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_Table_1_479379d3] */
    /* Index    FrameListIdx  DelayInTimebaseTicks        Comment                                            Referable Keys */
  { /*   100 */          41U,                   2U },  /* [FT_CIOMtoSlaves1_L4_c341f9ae_Tx]      */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_Table_1_479379d3] */
  { /*   101 */          40U,                   2U },  /* [FT_Backlight_FuncInd_L4_4be0ab29_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_Table_1_479379d3] */
  { /*   102 */          43U,                   3U },  /* [FT_FSP_1_2_Req_L4_fa7b19ff_Tx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_Table_1_479379d3] */
  { /*   103 */          45U,                   2U },  /* [FT_FSP1_Frame_L4_17dd477c_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_Table_1_479379d3] */
  { /*   104 */          50U,                   3U },  /* [FT_ELCP1toCIOM_L4_cb770a36_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_Table_1_479379d3] */
  { /*   105 */          51U,                   4U },  /* [FT_MasterReq_960d41c1_Tx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_Table_2_de9a2869] */
  { /*   106 */          52U,                   4U },  /* [FT_SlaveResp_3e0a3875_Rx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_Table_2_de9a2869] */
  { /*   107 */          42U,                   2U },  /* [FT_CIOMtoSlaves2_L4_d1f45640_Tx]      */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_Table_2_de9a2869] */
  { /*   108 */          40U,                   2U },  /* [FT_Backlight_FuncInd_L4_4be0ab29_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_Table_2_de9a2869] */
  { /*   109 */          46U,                   3U },  /* [FT_ELCP2toCIOM_L4_2040b135_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_Table_2_de9a2869] */
  { /*   110 */          48U,                   3U },  /* [FT_CCFWtoCIOM_L4_41a1d427_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_Table_2_de9a2869] */
  { /*   111 */          49U,                   3U },  /* [FT_DLFWtoCIOM_L4_4e464d0e_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_Table_2_de9a2869] */
  { /*   112 */          47U,                   3U },  /* [FT_ILCP2toCIOM_L4_0ab52018_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/MasterReq_SlaveResp_Table_2_de9a2869] */
  { /*   113 */          41U,                   2U },  /* [FT_CIOMtoSlaves1_L4_c341f9ae_Tx]      */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/Table_1_56dedb48] */
  { /*   114 */          40U,                   2U },  /* [FT_Backlight_FuncInd_L4_4be0ab29_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/Table_1_56dedb48] */
  { /*   115 */          43U,                   3U },  /* [FT_FSP_1_2_Req_L4_fa7b19ff_Tx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/Table_1_56dedb48] */
  { /*   116 */          45U,                   2U },  /* [FT_FSP1_Frame_L4_17dd477c_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/Table_1_56dedb48] */
  { /*   117 */          50U,                   3U },  /* [FT_ELCP1toCIOM_L4_cb770a36_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/Table_1_56dedb48] */
  { /*   118 */          42U,                   2U },  /* [FT_CIOMtoSlaves2_L4_d1f45640_Tx]      */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/Table_2_cfd78af2] */
  { /*   119 */          40U,                   2U },  /* [FT_Backlight_FuncInd_L4_4be0ab29_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/Table_2_cfd78af2] */
  { /*   120 */          46U,                   3U },  /* [FT_ELCP2toCIOM_L4_2040b135_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/Table_2_cfd78af2] */
  { /*   121 */          48U,                   3U },  /* [FT_CCFWtoCIOM_L4_41a1d427_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/Table_2_cfd78af2] */
  { /*   122 */          49U,                   3U },  /* [FT_DLFWtoCIOM_L4_4e464d0e_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/Table_2_cfd78af2] */
  { /*   123 */          47U,                   3U },  /* [FT_ILCP2toCIOM_L4_0ab52018_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/Table_2_cfd78af2] */
  { /*   124 */          44U,                   4U },  /* [FT_FSP1_SwitchDetResp_L4_5f0d0b34_Rx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/Table_e_3ad84ea5] */
  { /*   125 */          41U,                   2U },  /* [FT_CIOMtoSlaves1_L4_c341f9ae_Tx]      */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/Table_e_3ad84ea5] */
  { /*   126 */          50U,                   3U },  /* [FT_ELCP1toCIOM_L4_cb770a36_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/Table_e_3ad84ea5] */
  { /*   127 */          59U,                   4U },  /* [FT_MasterReq_dc33ca8a_Tx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/MasterReq_SlaveResp_294c3867] */
  { /*   128 */          60U,                   4U },  /* [FT_SlaveResp_7434b33e_Rx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/MasterReq_SlaveResp_294c3867] */
  { /*   129 */          59U,                   4U },  /* [FT_MasterReq_dc33ca8a_Tx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/MasterReq_SlaveResp_Table_1_b81cce51] */
  { /*   130 */          60U,                   4U },  /* [FT_SlaveResp_7434b33e_Rx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/MasterReq_SlaveResp_Table_1_b81cce51] */
  { /*   131 */          56U,                   3U },  /* [FT_RCECStoCIOM_L5_a45c9d29_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/MasterReq_SlaveResp_Table_1_b81cce51] */
  { /*   132 */          53U,                   2U },  /* [FT_CIOMtoSlaves_L5_8632ed67_Tx]       */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/MasterReq_SlaveResp_Table_1_b81cce51] */
  { /*   133 */          54U,                   2U },  /* [FT_Backlight_FuncInd_L5_89c53287_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/MasterReq_SlaveResp_Table_1_b81cce51] */
  { /*   134 */          55U,                   3U },  /* [FT_FSP_1_2_Req_L5_bc641e1e_Tx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/MasterReq_SlaveResp_Table_1_b81cce51] */
  { /*   135 */          58U,                   2U },  /* [FT_FSP1_Frame_L5_1663ef44_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/MasterReq_SlaveResp_Table_1_b81cce51] */
  { /*   136 */          59U,                   4U },  /* [FT_MasterReq_dc33ca8a_Tx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/MasterReq_SlaveResp_Table_2_21159feb] */
  { /*   137 */          60U,                   4U },  /* [FT_SlaveResp_7434b33e_Rx]             */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/MasterReq_SlaveResp_Table_2_21159feb] */
  { /*   138 */          53U,                   2U },  /* [FT_CIOMtoSlaves_L5_8632ed67_Tx]       */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/MasterReq_SlaveResp_Table_2_21159feb] */
  { /*   139 */          54U,                   2U },  /* [FT_Backlight_FuncInd_L5_89c53287_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/MasterReq_SlaveResp_Table_2_21159feb] */
  { /*   140 */          56U,                   3U },  /* [FT_RCECStoCIOM_L5_a45c9d29_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/MasterReq_SlaveResp_Table_2_21159feb] */
  { /*   141 */          56U,                   3U },  /* [FT_RCECStoCIOM_L5_a45c9d29_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/Table_1_33137188] */
  { /*   142 */          53U,                   2U },  /* [FT_CIOMtoSlaves_L5_8632ed67_Tx]       */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/Table_1_33137188] */
  { /*   143 */          54U,                   2U },  /* [FT_Backlight_FuncInd_L5_89c53287_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/Table_1_33137188] */
  { /*   144 */          56U,                   3U },  /* [FT_RCECStoCIOM_L5_a45c9d29_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/Table_1_33137188] */
  { /*   145 */          55U,                   3U },  /* [FT_FSP_1_2_Req_L5_bc641e1e_Tx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/Table_1_33137188] */
  { /*   146 */          58U,                   2U },  /* [FT_FSP1_Frame_L5_1663ef44_Rx]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/Table_1_33137188] */
  { /*   147 */          53U,                   2U },  /* [FT_CIOMtoSlaves_L5_8632ed67_Tx]       */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/Table_2_aa1a2032] */
  { /*   148 */          54U,                   2U },  /* [FT_Backlight_FuncInd_L5_89c53287_Tx]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/Table_2_aa1a2032] */
  { /*   149 */          56U,                   3U },  /* [FT_RCECStoCIOM_L5_a45c9d29_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/Table_2_aa1a2032] */
    /* Index    FrameListIdx  DelayInTimebaseTicks        Comment                                            Referable Keys */
  { /*   150 */          57U,                   4U },  /* [FT_FSP1_SwitchDetResp_L5_00bda195_Rx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/Table_e_5f15e465] */
  { /*   151 */          53U,                   2U },  /* [FT_CIOMtoSlaves_L5_8632ed67_Tx]       */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/Table_e_5f15e465] */
  { /*   152 */          56U,                   3U }   /* [FT_RCECStoCIOM_L5_a45c9d29_Rx]        */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/Table_e_5f15e465] */
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_FrameLengthDelayList
**********************************************************************************************************************/
/** 
  \var    LinIf_FrameLengthDelayList
  \details
  Element             Description
  FrameLengthDelay
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(LinIf_FrameLengthDelayListType, LINIF_CONST) LinIf_FrameLengthDelayList[40] = {
    /* Index    FrameLengthDelay        Comment                     Referable Keys */
  { /*     0 */               2U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  { /*     1 */               2U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  { /*     2 */               3U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  { /*     3 */               3U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  { /*     4 */               3U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  { /*     5 */               4U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  { /*     6 */               4U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  { /*     7 */               4U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  { /*     8 */               2U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  { /*     9 */               2U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  { /*    10 */               3U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  { /*    11 */               3U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  { /*    12 */               3U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  { /*    13 */               4U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  { /*    14 */               4U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  { /*    15 */               4U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  { /*    16 */               2U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  { /*    17 */               2U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  { /*    18 */               3U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  { /*    19 */               3U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  { /*    20 */               3U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  { /*    21 */               4U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  { /*    22 */               4U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  { /*    23 */               4U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  { /*    24 */               2U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  { /*    25 */               2U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  { /*    26 */               3U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  { /*    27 */               3U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  { /*    28 */               3U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  { /*    29 */               4U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  { /*    30 */               4U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  { /*    31 */               4U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  { /*    32 */               2U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  { /*    33 */               2U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  { /*    34 */               3U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  { /*    35 */               3U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  { /*    36 */               3U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  { /*    37 */               4U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  { /*    38 */               4U },  /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  { /*    39 */               4U }   /* [Bitrate: 9600] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_FrameList
**********************************************************************************************************************/
/** 
  \var    LinIf_FrameList
  \details
  Element         Description
  PduId           Upper layer PduId
  ChecksumType    CLASSIC ENHANCED
  Direction       TX RX S2S
  FrameType       UNCONDITIONAL : 0 MRF : 1 SRF : 2 EVENT_TRIGGERED : 4 SPORADIC : 5 ASSIGN : 6 UNASSIGN : 7 ASSIGN_NAD : 8 FREE : 9 CONDITIONAL : 10 ASSIGN_FRAME_ID_RANGE : 11 SAVE_CONFIGURATION : 12
  Length          Frame length in bytes
  Pid             Protected Identifier
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(LinIf_FrameListType, LINIF_CONST) LinIf_FrameList[61] = {
    /* Index    PduId                                                         ChecksumType     Direction            FrameType  Length  Pid          Referable Keys */
  { /*     0 */ PduRConf_PduRDestPdu_Backlight_FuncInd_L2_oLIN01_2b903334_Tx, LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     1U, 0xB4U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/FT_Backlight_FuncInd_L2_da42c80c_Tx] */
  { /*     1 */ PduRConf_PduRDestPdu_FSP_3_4_Req_L2_oLIN01_a1ddc883_Tx      , LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     4U, 0x76U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/FT_FSP_3_4_Req_L2_08b9a97f_Tx] */
  { /*     2 */ PduRConf_PduRDestPdu_FSP_1_2_Req_L2_oLIN01_105a8fa6_Tx      , LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     4U, 0xF5U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/FT_FSP_1_2_Req_L2_ca2370c5_Tx] */
  { /*     3 */ PduRConf_PduRSrcPdu_PduRSrcPdu_9649cb45                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     2U, 0xC4U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/FT_FSP3_Frame_L2_17dde19d_Rx] */
  { /*     4 */ PduRConf_PduRSrcPdu_PduRSrcPdu_21916aa6                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     8U, 0x73U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/FT_FSP4_SwitchDetResp_L2_4f5b1e44_Rx] */
  { /*     5 */ PduRConf_PduRSrcPdu_PduRSrcPdu_d86f19ae                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     8U, 0xF0U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/FT_FSP1_SwitchDetResp_L2_aba17fa3_Rx] */
  { /*     6 */ PduRConf_PduRSrcPdu_PduRSrcPdu_1d7b2b95                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     8U, 0x32U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/FT_FSP3_SwitchDetResp_L2_ae751420_Rx] */
  { /*     7 */ PduRConf_PduRSrcPdu_PduRSrcPdu_7877d56d                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     8U, 0xB1U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/FT_FSP2_SwitchDetResp_L2_4127a2c1_Rx] */
  { /*     8 */ PduRConf_PduRSrcPdu_PduRSrcPdu_1d5f459f                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     2U, 0x03U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/FT_FSP2_Frame_L2_f81f8aa3_Rx] */
  { /*     9 */ PduRConf_PduRSrcPdu_PduRSrcPdu_be569886                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     2U, 0x85U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/FT_FSP4_Frame_L2_f501fae4_Rx] */
  { /*    10 */ PduRConf_PduRSrcPdu_PduRSrcPdu_8621b565                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     2U, 0x42U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/FT_FSP1_Frame_L2_132831a0_Rx] */
  { /*    11 */ 0                                                           , LIN_CLASSIC_CS , LIN_MASTER_RESPONSE,        1U,     8U, 0x3CU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/FT_MasterReq_e2b94730_Tx] */
  { /*    12 */ 0                                                           , LIN_CLASSIC_CS , LIN_SLAVE_RESPONSE ,        2U,     8U, 0x7DU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2/FT_SlaveResp_4abe3e84_Rx] */
  { /*    13 */ PduRConf_PduRDestPdu_MastertoTCP_oLIN02_7c7ed3d1_Tx         , LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     2U, 0x2EU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/FT_MastertoTCP_a2bc639c_Tx] */
  { /*    14 */ PduRConf_PduRDestPdu_FSP_1_2_Req_L3_oLIN02_3be8803a_Tx      , LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     4U, 0xF5U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/FT_FSP_1_2_Req_L3_e53ae97b_Tx] */
  { /*    15 */ PduRConf_PduRDestPdu_Backlight_FuncInd_L3_oLIN02_00223ca8_Tx, LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     1U, 0xB4U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/FT_Backlight_FuncInd_L3_e9e4dd82_Tx] */
  { /*    16 */ PduRConf_PduRSrcPdu_PduRSrcPdu_e2611c34                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     2U, 0x03U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/FT_FSP2_Frame_L3_f9fd8308_Rx] */
  { /*    17 */ PduRConf_PduRSrcPdu_PduRSrcPdu_25794016                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     8U, 0xB1U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/FT_FSP2_SwitchDetResp_L3_2508ab24_Rx] */
  { /*    18 */ PduRConf_PduRSrcPdu_PduRSrcPdu_7bebd14f                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     8U, 0xF0U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/FT_FSP1_SwitchDetResp_L3_cf8e7646_Rx] */
  { /*    19 */ PduRConf_PduRSrcPdu_PduRSrcPdu_93b09a1a                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     5U, 0xE7U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/FT_TCPtoMaster_4ab36a9a_Rx] */
  { /*    20 */ PduRConf_PduRSrcPdu_PduRSrcPdu_65a06375                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     2U, 0x42U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/FT_FSP1_Frame_L3_12ca380b_Rx] */
  { /*    21 */ 0                                                           , LIN_CLASSIC_CS , LIN_MASTER_RESPONSE,        1U,     8U, 0x3CU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/FT_MasterReq_41efc199_Tx] */
  { /*    22 */ 0                                                           , LIN_CLASSIC_CS , LIN_SLAVE_RESPONSE ,        2U,     8U, 0x7DU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c/FT_SlaveResp_e9e8b82d_Rx] */
  { /*    23 */ PduRConf_PduRDestPdu_CIOMtoSlaves1_L1_oLIN00_09e24f2a_Tx    , LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     2U, 0x78U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_CIOMtoSlaves1_L1_417ce0d9_Tx] */
  { /*    24 */ PduRConf_PduRDestPdu_CIOMtoSlaves2_FR2_L1_oLIN00_a56bd28e_Tx, LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     8U, 0xBAU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_CIOMtoSlaves2_FR2_L1_90fdcedf_Tx] */
  { /*    25 */ PduRConf_PduRDestPdu_CIOMtoSlaves2_FR1_L1_oLIN00_573c3f76_Tx, LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     5U, 0x39U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_CIOMtoSlaves2_FR1_L1_82486131_Tx] */
  { /*    26 */ PduRConf_PduRDestPdu_Backlight_FuncInd_L1_oLIN00_841aab0e_Tx, LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     1U, 0xB4U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_Backlight_FuncInd_L1_7f2b7abe_Tx] */
  { /*    27 */ PduRConf_PduRDestPdu_FSP_1_2_Req_L1_oLIN00_bfd0179c_Tx      , LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     4U, 0xF5U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_FSP_1_2_Req_L1_d20f4458_Tx] */
  { /*    28 */ PduRConf_PduRDestPdu_CIOMtoSlaves2_FR3_L1_oLIN00_42767419_Tx, LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     5U, 0xFBU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_CIOMtoSlaves2_FR3_L1_2841a9ba_Tx] */
  { /*    29 */ PduRConf_PduRSrcPdu_PduRSrcPdu_786aa0cd                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     1U, 0x2BU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_LECM2toCIOM_FR2_L1_4d04a22e_Rx] */
  { /*    30 */ PduRConf_PduRSrcPdu_PduRSrcPdu_3e9ce6c9                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     2U, 0x03U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_FSP2_Frame_L1_fa6531cd_Rx] */
  { /*    31 */ PduRConf_PduRSrcPdu_PduRSrcPdu_e89970ce                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     2U, 0x42U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_FSP1_Frame_L1_11528ace_Rx] */
  { /*    32 */ PduRConf_PduRSrcPdu_PduRSrcPdu_73b12bc9                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     5U, 0xECU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_LECM2toCIOM_FR3_L1_f5b8c54b_Rx] */
  { /*    33 */ PduRConf_PduRSrcPdu_PduRSrcPdu_807c58f3                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     8U, 0xB1U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_FSP2_SwitchDetResp_L1_d6c91baa_Rx] */
  { /*    34 */ PduRConf_PduRSrcPdu_PduRSrcPdu_7615762b                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     8U, 0xF0U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_FSP1_SwitchDetResp_L1_3c4fc6c8_Rx] */
  { /*    35 */ PduRConf_PduRSrcPdu_PduRSrcPdu_c4212af7                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     3U, 0x8BU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_ILCP1toCIOM_L1_c9f6c6bc_Rx] */
  { /*    36 */ PduRConf_PduRSrcPdu_PduRSrcPdu_7332fc25                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     3U, 0x5EU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_LECMBasic2CIOM_L1_c4710275_Rx] */
  { /*    37 */ PduRConf_PduRSrcPdu_PduRSrcPdu_8cd02125                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     8U, 0xDDU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_LECM2toCIOM_FR1_L1_5fb10dc0_Rx] */
  { /*    38 */ 0                                                           , LIN_CLASSIC_CS , LIN_MASTER_RESPONSE,        1U,     8U, 0x3CU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_MasterReq_355bc768_Tx] */
  { /*    39 */ 0                                                           , LIN_CLASSIC_CS , LIN_SLAVE_RESPONSE ,        2U,     8U, 0x7DU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847/FT_SlaveResp_9d5cbedc_Rx] */
  { /*    40 */ PduRConf_PduRDestPdu_Backlight_FuncInd_L4_oLIN03_aff40501_Tx, LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     1U, 0xB4U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/FT_Backlight_FuncInd_L4_4be0ab29_Tx] */
  { /*    41 */ PduRConf_PduRDestPdu_CIOMtoSlaves1_L4_oLIN03_220ce125_Tx    , LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     2U, 0x78U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/FT_CIOMtoSlaves1_L4_c341f9ae_Tx] */
  { /*    42 */ PduRConf_PduRDestPdu_CIOMtoSlaves2_L4_oLIN03_d05b0cdd_Tx    , LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     2U, 0xBAU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/FT_CIOMtoSlaves2_L4_d1f45640_Tx] */
  { /*    43 */ PduRConf_PduRDestPdu_FSP_1_2_Req_L4_oLIN03_943eb993_Tx      , LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     4U, 0xF5U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/FT_FSP_1_2_Req_L4_fa7b19ff_Tx] */
  { /*    44 */ PduRConf_PduRSrcPdu_PduRSrcPdu_d430c522                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     8U, 0xF0U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/FT_FSP1_SwitchDetResp_L4_5f0d0b34_Rx] */
  { /*    45 */ PduRConf_PduRSrcPdu_PduRSrcPdu_7272736c                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     2U, 0x42U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/FT_FSP1_Frame_L4_17dd477c_Rx] */
  { /*    46 */ PduRConf_PduRSrcPdu_PduRSrcPdu_97ced8ff                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     3U, 0xA3U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/FT_ELCP2toCIOM_L4_2040b135_Rx] */
  { /*    47 */ PduRConf_PduRSrcPdu_PduRSrcPdu_8f05a91a                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     3U, 0x20U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/FT_ILCP2toCIOM_L4_0ab52018_Rx] */
  { /*    48 */ PduRConf_PduRSrcPdu_PduRSrcPdu_c27f66fb                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     3U, 0xD3U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/FT_CCFWtoCIOM_L4_41a1d427_Rx] */
  { /*    49 */ PduRConf_PduRSrcPdu_PduRSrcPdu_a0a38a40                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     3U, 0x92U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/FT_DLFWtoCIOM_L4_4e464d0e_Rx] */
    /* Index    PduId                                                         ChecksumType     Direction            FrameType  Length  Pid          Referable Keys */
  { /*    50 */ PduRConf_PduRSrcPdu_PduRSrcPdu_b63a736f                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     4U, 0x8EU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/FT_ELCP1toCIOM_L4_cb770a36_Rx] */
  { /*    51 */ 0                                                           , LIN_CLASSIC_CS , LIN_MASTER_RESPONSE,        1U,     8U, 0x3CU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/FT_MasterReq_960d41c1_Tx] */
  { /*    52 */ 0                                                           , LIN_CLASSIC_CS , LIN_SLAVE_RESPONSE ,        2U,     8U, 0x7DU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9/FT_SlaveResp_3e0a3875_Rx] */
  { /*    53 */ PduRConf_PduRDestPdu_CIOMtoSlaves_L5_oLIN04_251caba0_Tx     , LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     2U, 0x78U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/FT_CIOMtoSlaves_L5_8632ed67_Tx] */
  { /*    54 */ PduRConf_PduRDestPdu_Backlight_FuncInd_L5_oLIN04_571a8203_Tx, LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     1U, 0xB4U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/FT_Backlight_FuncInd_L5_89c53287_Tx] */
  { /*    55 */ PduRConf_PduRDestPdu_FSP_1_2_Req_L5_oLIN04_6cd03e91_Tx      , LIN_ENHANCED_CS, LIN_MASTER_RESPONSE,        0U,     4U, 0xF5U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/FT_FSP_1_2_Req_L5_bc641e1e_Tx] */
  { /*    56 */ PduRConf_PduRSrcPdu_PduRSrcPdu_5d6ab1b6                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     3U, 0x50U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/FT_RCECStoCIOM_L5_a45c9d29_Rx] */
  { /*    57 */ PduRConf_PduRSrcPdu_PduRSrcPdu_c187c3bc                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     8U, 0xF0U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/FT_FSP1_SwitchDetResp_L5_00bda195_Rx] */
  { /*    58 */ PduRConf_PduRSrcPdu_PduRSrcPdu_1d41a162                     , LIN_ENHANCED_CS, LIN_SLAVE_RESPONSE ,        0U,     2U, 0x42U },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/FT_FSP1_Frame_L5_1663ef44_Rx] */
  { /*    59 */ 0                                                           , LIN_CLASSIC_CS , LIN_MASTER_RESPONSE,        1U,     8U, 0x3CU },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/FT_MasterReq_dc33ca8a_Tx] */
  { /*    60 */ 0                                                           , LIN_CLASSIC_CS , LIN_SLAVE_RESPONSE ,        2U,     8U, 0x7DU }   /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51/FT_SlaveResp_7434b33e_Rx] */
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_ScheduleTableList
**********************************************************************************************************************/
/** 
  \var    LinIf_ScheduleTableList
  \details
  Element                    Description
  EntryEndIdx                the end index of the 0:n relation pointing to LinIf_Entry
  EntryStartIdx              the start index of the 0:n relation pointing to LinIf_Entry
  NumberOfScheduleEntries    number of entries
  ResumePosition             CONTINUE_AT_IT_POINT : 0 START_FROM_BEGINNING : 1
  RunMode                    RUN_CONTINUOUS : 0 RUN_ONCE : 1
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(LinIf_ScheduleTableListType, LINIF_CONST) LinIf_ScheduleTableList[33] = {
    /* Index    EntryEndIdx                              EntryStartIdx                              NumberOfScheduleEntries  ResumePosition  RunMode        Comment                                            Referable Keys */
  { /*     0 */ LINIF_NO_ENTRYENDIDXOFSCHEDULETABLELIST, LINIF_NO_ENTRYSTARTIDXOFSCHEDULETABLELIST,                   0x00U,          0x00U,   0x00U },  /* [NULLSchedule_CHNL_8e3d5be2]           */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  { /*     1 */                                      2U,                                        0U,                   0x02U,          0x01U,   0x00U },  /* [MasterReq_SlaveResp_e4c5082e]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  { /*     2 */                                     11U,                                        2U,                   0x09U,          0x01U,   0x00U },  /* [MasterReq_SlaveResp_Table0_9e3481d6]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  { /*     3 */                                     18U,                                       11U,                   0x07U,          0x01U,   0x00U },  /* [Table0_df24d2a0]                      */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  { /*     4 */                                     22U,                                       18U,                   0x04U,          0x01U,   0x00U },  /* [Table_e_dbb68a08]                     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  { /*     5 */ LINIF_NO_ENTRYENDIDXOFSCHEDULETABLELIST, LINIF_NO_ENTRYSTARTIDXOFSCHEDULETABLELIST,                   0x00U,          0x00U,   0x00U },  /* [NULLSchedule_CHNL_08a9294c]           */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  { /*     6 */                                     24U,                                       22U,                   0x02U,          0x01U,   0x00U },  /* [MasterReq_SlaveResp_1692e5d6]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  { /*     7 */                                     32U,                                       24U,                   0x08U,          0x01U,   0x00U },  /* [MasterReq_SlaveResp_Table_1_631128e5] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  { /*     8 */                                     37U,                                       32U,                   0x05U,          0x01U,   0x00U },  /* [MasterReq_SlaveResp_Table_2_fa18795f] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  { /*     9 */                                     43U,                                       37U,                   0x06U,          0x01U,   0x00U },  /* [Table_1_cbd13a3e]                     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  { /*    10 */                                     46U,                                       43U,                   0x03U,          0x01U,   0x00U },  /* [Table_2_52d86b84]                     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  { /*    11 */                                     48U,                                       46U,                   0x02U,          0x01U,   0x00U },  /* [Table_e_a7d7afd3]                     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  { /*    12 */ LINIF_NO_ENTRYENDIDXOFSCHEDULETABLELIST, LINIF_NO_ENTRYSTARTIDXOFSCHEDULETABLELIST,                   0x00U,          0x00U,   0x00U },  /* [NULLSchedule_CHNL_45618847]           */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  { /*    13 */                                     50U,                                       48U,                   0x02U,          0x01U,   0x00U },  /* [MasterReq_SlaveResp_03d8aeb9]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  { /*    14 */                                     58U,                                       50U,                   0x08U,          0x01U,   0x00U },  /* [MasterReq_SlaveResp_Table_1_2a158a89] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  { /*    15 */                                     67U,                                       58U,                   0x09U,          0x01U,   0x00U },  /* [MasterReq_SlaveResp_Table_2_b31cdb33] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  { /*    16 */                                     73U,                                       67U,                   0x06U,          0x01U,   0x00U },  /* [Table_1_2abffe93]                     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  { /*    17 */                                     92U,                                       73U,                   0x13U,          0x01U,   0x00U },  /* [Table_2_b3b6af29]                     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  { /*    18 */                                     96U,                                       92U,                   0x04U,          0x01U,   0x00U },  /* [Table_e_46b96b7e]                     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  { /*    19 */ LINIF_NO_ENTRYENDIDXOFSCHEDULETABLELIST, LINIF_NO_ENTRYSTARTIDXOFSCHEDULETABLELIST,                   0x00U,          0x00U,   0x00U },  /* [NULLSchedule_CHNL_c3f5fae9]           */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  { /*    20 */                                     98U,                                       96U,                   0x02U,          0x01U,   0x00U },  /* [MasterReq_SlaveResp_f18f4341]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  { /*    21 */                                    105U,                                       98U,                   0x07U,          0x01U,   0x00U },  /* [MasterReq_SlaveResp_Table_1_479379d3] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  { /*    22 */                                    113U,                                      105U,                   0x08U,          0x01U,   0x00U },  /* [MasterReq_SlaveResp_Table_2_de9a2869] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  { /*    23 */                                    118U,                                      113U,                   0x05U,          0x01U,   0x00U },  /* [Table_1_56dedb48]                     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  { /*    24 */                                    124U,                                      118U,                   0x06U,          0x01U,   0x00U },  /* [Table_2_cfd78af2]                     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  { /*    25 */                                    127U,                                      124U,                   0x03U,          0x01U,   0x00U },  /* [Table_e_3ad84ea5]                     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  { /*    26 */ LINIF_NO_ENTRYENDIDXOFSCHEDULETABLELIST, LINIF_NO_ENTRYSTARTIDXOFSCHEDULETABLELIST,                   0x00U,          0x00U,   0x00U },  /* [NULLSchedule]                         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  { /*    27 */                                    129U,                                      127U,                   0x02U,          0x01U,   0x00U },  /* [MasterReq_SlaveResp_294c3867]         */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  { /*    28 */                                    136U,                                      129U,                   0x07U,          0x01U,   0x00U },  /* [MasterReq_SlaveResp_Table_1_b81cce51] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  { /*    29 */                                    141U,                                      136U,                   0x05U,          0x01U,   0x00U },  /* [MasterReq_SlaveResp_Table_2_21159feb] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  { /*    30 */                                    147U,                                      141U,                   0x06U,          0x01U,   0x00U },  /* [Table_1_33137188]                     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  { /*    31 */                                    150U,                                      147U,                   0x03U,          0x01U,   0x00U },  /* [Table_2_aa1a2032]                     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  { /*    32 */                                    153U,                                      150U,                   0x03U,          0x01U,   0x00U }   /* [Table_e_5f15e465]                     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_ScheduleTableListInd
**********************************************************************************************************************/
/** 
  \var    LinIf_ScheduleTableListInd
  \brief  the indexes of the 1:1 sorted relation pointing to LinIf_ScheduleTableList
*/ 
#define LINIF_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(LinIf_ScheduleTableListIndType, LINIF_CONST) LinIf_ScheduleTableListInd[33] = {
  /* Index     ScheduleTableListInd      Referable Keys */
  /*     0 */                    0U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  /*     1 */                    1U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  /*     2 */                    2U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  /*     3 */                    3U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  /*     4 */                    4U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_8e3d5be2] */
  /*     5 */                    5U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  /*     6 */                    6U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  /*     7 */                    7U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  /*     8 */                    8U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  /*     9 */                    9U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  /*    10 */                   10U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  /*    11 */                   11U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_08a9294c] */
  /*    12 */                   12U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  /*    13 */                   13U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  /*    14 */                   14U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  /*    15 */                   15U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  /*    16 */                   16U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  /*    17 */                   17U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  /*    18 */                   18U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_45618847] */
  /*    19 */                   19U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  /*    20 */                   20U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  /*    21 */                   21U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  /*    22 */                   22U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  /*    23 */                   23U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  /*    24 */                   24U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  /*    25 */                   25U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_c3f5fae9] */
  /*    26 */                   26U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  /*    27 */                   27U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  /*    28 */                   28U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  /*    29 */                   29U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  /*    30 */                   30U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  /*    31 */                   31U,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
  /*    32 */                   32U   /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_def0ca51] */
};
#define LINIF_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_SystemToLinIfChannel
**********************************************************************************************************************/
/** 
  \var    LinIf_SystemToLinIfChannel
  \details
  Element              Description
  LinIfChannelIndex
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(LinIf_SystemToLinIfChannelType, LINIF_CONST) LinIf_SystemToLinIfChannel[10] = {
    /* Index    LinIfChannelIndex                                                                       */
  { /*     0 */                                                       255U /* 0xFF -> No Lin channel */ },
  { /*     1 */                                                       255U /* 0xFF -> No Lin channel */ },
  { /*     2 */                                                       255U /* 0xFF -> No Lin channel */ },
  { /*     3 */                                                       255U /* 0xFF -> No Lin channel */ },
  { /*     4 */                                                       255U /* 0xFF -> No Lin channel */ },
  { /*     5 */ 2U /* ComMConf_ComMChannel_CN_LIN00_2cd9a7df -> LinIfConf_LinIfChannel_CHNL_45618847 */ },
  { /*     6 */ 0U /* ComMConf_ComMChannel_CN_LIN01_5bde9749 -> LinIfConf_LinIfChannel_CHNL_8e3d5be2 */ },
  { /*     7 */ 1U /* ComMConf_ComMChannel_CN_LIN02_c2d7c6f3 -> LinIfConf_LinIfChannel_CHNL_08a9294c */ },
  { /*     8 */ 3U /* ComMConf_ComMChannel_CN_LIN03_b5d0f665 -> LinIfConf_LinIfChannel_CHNL_c3f5fae9 */ },
  { /*     9 */ 4U /* ComMConf_ComMChannel_CN_LIN04_2bb463c6 -> LinIfConf_LinIfChannel_CHNL_def0ca51 */ }
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_ChannelData
**********************************************************************************************************************/
#define LINIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(LinIf_ChannelDataType, LINIF_VAR_NOINIT) LinIf_ChannelData[5];  /* Data structure per LinIf channel */
#define LINIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/






