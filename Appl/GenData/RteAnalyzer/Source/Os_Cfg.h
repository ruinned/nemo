/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Os_Cfg.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Os definitions
 *********************************************************************************************************************/

#ifndef _OS_CFG_H_
# define _OS_CFG_H_

/* Os definitions */

/* Tasks */
# define Default_Appl_Task (0U)
# define Default_BSW_Async_Task (1U)
# define PvtTask (2U)
# define StartApplication_MemoryViolation_Task (3U)
# define StartApplication_Trusted_Task (4U)

/* Alarms */
# define Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms (0U)
# define Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms (1U)
# define Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms (2U)
# define Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms (3U)
# define Rte_Al_TE2_Default_BSW_Async_Task_0_100ms (4U)
# define Rte_Al_TE2_Default_BSW_Async_Task_0_10ms (5U)
# define Rte_Al_TE2_Default_BSW_Async_Task_0_20ms (6U)
# define Rte_Al_TE2_Default_BSW_Async_Task_0_5ms (7U)
# define Rte_Al_TE_PvtTask_0_10ms (8U)
# define Rte_Al_TE_TP_RE_SMK_TP (9U)
# define Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms (10U)
# define Rte_Al_TE_StartApplication_Trusted_Task_0_10ms (11U)

/* Events */
# define Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_100ms (0x10)
# define Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms (0x20)
# define Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_20ms (0x08)
# define Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms (0x200)
# define Rte_Ev_Cyclic_PvtTask_0_10ms (0x20)
# define Rte_Ev_Cyclic_StartApplication_Trusted_Task_0_10ms (0x01)
# define Rte_Ev_Run_BswM_BswM_Read_LIN1_ScheduleTableRequestMode (0x1000)
# define Rte_Ev_Run_BswM_BswM_Read_LIN2_ScheduleTableRequestMode (0x800)
# define Rte_Ev_Run_BswM_BswM_Read_LIN3_ScheduleTableRequestMode (0x100)
# define Rte_Ev_Run_BswM_BswM_Read_LIN4_ScheduleTableRequestMode (0x40)
# define Rte_Ev_Run_BswM_BswM_Read_LIN5_ScheduleTableRequestMode (0x01)
# define Rte_Ev_Run_CDD_RFIC_RE_rfic_init (0x10)
# define Rte_Ev_Run_ComM_GetCurrentComMode (0x02)
# define Rte_Ev_Run_ComM_RequestComMode (0x80)
# define Rte_Ev_Run_DemMaster_OsApplication_Untrusted_Core0_SetOperationCycleState (0x400)
# define Rte_Ev_Run_EcuM_SelectShutdownTarget (0x04)
# define Rte_Ev_Run_IOHWAB_IoHwAb_RficNRESDio_P_Read (0x04)
# define Rte_Ev_Run_StartApplicationTrusted_StartApplicationTrusted_OnDataRec_TrustedData (0x02)
# define Rte_Ev_Run_StartApplication_StartApplication_Cyclic1000ms (0x08)
# define Rte_Ev_Run_StartApplication_StartApplication_Cyclic10ms (0x02)
# define Rte_Ev_Run_StartApplication_StartApplication_Cyclic1ms (0x04)
# define Rte_Ev_Run_StartApplication_StartApplication_Cyclic250ms (0x01)
# define Rte_Ev_Run_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms (0x01)
# define Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxCtrl (0x20)
# define Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxData (0x10)
# define Rte_Ev_Run_TP_RE_SMK_TP (0x10000000)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RXCbk (0x04)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RxTimeout (0x8000)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RXCbk (0x08)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RxTimeout (0x2000)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RXCbk (0x80000)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RxTimeout (0x800000)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RXCbk (0x200000)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RxTimeout (0x100)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RXCbk (0x10000)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RxTimeout (0x02)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RXCbk (0x800)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RxTimeout (0x2000000)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RXCbk (0x80)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RxTimeout (0x01)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_DiagInfoILCP1_RXCbk (0x4000)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_DiagInfoILCP1_RxTimeout (0x40)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RXCbk (0x8000000)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RxTimeout (0x1000000)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RXCbk (0x1000)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RxTimeout (0x400)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RXCbk (0x200)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RxTimeout (0x400000)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RXCbk (0x20000)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RxTimeout (0x100000)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_ResponseErrorILCP1_RXCbk (0x4000000)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_ResponseErrorILCP1_RxTimeout (0x40000)

/* Spinlocks */

/* Resources */

/* ScheduleTables */

/* Cores */
# include "usrostyp.h"

/* Trusted Functions */


#endif /* _OS_CFG_H_ */
