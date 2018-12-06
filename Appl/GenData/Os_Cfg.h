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
 *            Module: Os
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Cfg.h
 *   Generation Time: 2018-12-01 17:02:20
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

#if !defined (OS_CFG_H)                                                              /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */

/* Os module declarations */

/* Os kernel module dependencies */

/* Os hal dependencies */
# include "Os_Hal_Cfg.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! Configuration major version identification. */
# define OS_CFG_MAJOR_VERSION                    (2U)

/*! Configuration minor version identification. */
# define OS_CFG_MINOR_VERSION                    (18U)


/*! Defines which platform is used. */
# define OS_CFG_PLATFORM_POWERPC     (STD_ON)

/*! Defines which derivative group is configured. */
# define OS_CFG_DERIVATIVEGROUP_MPC574XC1     (STD_ON)

/*! Defines which derivative is configured. */
# define OS_CFG_DERIVATIVE_MPC5746C     (STD_ON)

/*! Defines which compiler is configured. */
# define OS_CFG_COMPILER_DIAB     (STD_ON)


/*! Defines whether access macros to get context related information in the error hook are enabled (STD_ON) or not (STD_OFF). */
# define OS_CFG_ERR_PARAMETERACCESS              (STD_OFF)

/*! Defines whether access macros to get service ID information in the error hook are enabled (STD_ON) or not (STD_OFF). */
# define OS_CFG_ERR_GETSERVICEID                 (STD_OFF)

/*! Defines whether the pre-task hook is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_PRETASKHOOK                      (STD_OFF)

/*! Defines whether the post-task hook is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_POSTTASKHOOK                     (STD_OFF)

/*! Defines whether the OS shall call the panic hook (STD_ON) or not (STD_OFF). */
# define OS_CFG_PANICHOOK                        (STD_OFF)

/*! Defines whether the system startup hook is configured (STD_ON) or not (STD_OFF). */
# define OS_CFG_STARTUPHOOK_SYSTEM               (STD_OFF)

/*! Defines whether the system shutdown hook is configured (STD_ON) or not (STD_OFF). */
# define OS_CFG_SHUTDOWNHOOK_SYSTEM              (STD_OFF)

/*! Defines whether the system error hook is configured (STD_ON) or not (STD_OFF). */
# define OS_CFG_ERRORHOOK_SYSTEM                 (STD_ON)

/*! Defines whether the system protection hook is configured (STD_ON) or not (STD_OFF). */
# define OS_CFG_PROTECTIONHOOK_SYSTEM            (STD_ON)

/*! Defines whether backward compatibility defines are needed (STD_ON) or not (STD_OFF). */
# define OS_CFG_PERIPHERAL_COMPATIBILITY         (STD_ON)


/* OS application modes */
# define DONOTCARE     ((AppModeType)0)
# define OS_APPMODE_NONE     ((AppModeType)0)
# define OSDEFAULTAPPMODE     ((AppModeType)1)
# define OS_APPMODE_ANY     ((AppModeType)255)


/* Event masks */
# define Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_100ms     ((EventMaskType)1ULL)
# define Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms     ((EventMaskType)2ULL)
# define Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_20ms     ((EventMaskType)4ULL)
# define Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms     ((EventMaskType)8ULL)
# define Rte_Ev_Cyclic_PvtTask_0_10ms     ((EventMaskType)1ULL)
# define Rte_Ev_Cyclic_StartApplication_Trusted_Task_0_10ms     ((EventMaskType)1ULL)
# define Rte_Ev_Run_BswM_BswM_Read_LIN1_ScheduleTableRequestMode     ((EventMaskType)16ULL)
# define Rte_Ev_Run_BswM_BswM_Read_LIN2_ScheduleTableRequestMode     ((EventMaskType)32ULL)
# define Rte_Ev_Run_BswM_BswM_Read_LIN3_ScheduleTableRequestMode     ((EventMaskType)64ULL)
# define Rte_Ev_Run_BswM_BswM_Read_LIN4_ScheduleTableRequestMode     ((EventMaskType)128ULL)
# define Rte_Ev_Run_BswM_BswM_Read_LIN5_ScheduleTableRequestMode     ((EventMaskType)256ULL)
# define Rte_Ev_Run_CDD_RFIC_RE_rfic_init     ((EventMaskType)2ULL)
# define Rte_Ev_Run_ComM_GetCurrentComMode     ((EventMaskType)512ULL)
# define Rte_Ev_Run_ComM_RequestComMode     ((EventMaskType)1024ULL)
# define Rte_Ev_Run_DemMaster_OsApplication_Untrusted_Core0_SetOperationCycleState     ((EventMaskType)2048ULL)
# define Rte_Ev_Run_EcuM_SelectShutdownTarget     ((EventMaskType)4096ULL)
# define Rte_Ev_Run_IOHWAB_IoHwAb_RficNRESDio_P_Read     ((EventMaskType)2ULL)
# define Rte_Ev_Run_StartApplicationTrusted_StartApplicationTrusted_OnDataRec_TrustedData     ((EventMaskType)4ULL)
# define Rte_Ev_Run_StartApplication_StartApplication_Cyclic1000ms     ((EventMaskType)1ULL)
# define Rte_Ev_Run_StartApplication_StartApplication_Cyclic10ms     ((EventMaskType)2ULL)
# define Rte_Ev_Run_StartApplication_StartApplication_Cyclic1ms     ((EventMaskType)4ULL)
# define Rte_Ev_Run_StartApplication_StartApplication_Cyclic250ms     ((EventMaskType)8ULL)
# define Rte_Ev_Run_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms     ((EventMaskType)1ULL)
# define Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxCtrl     ((EventMaskType)16ULL)
# define Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxData     ((EventMaskType)32ULL)
# define Rte_Ev_Run_TP_RE_SMK_TP     ((EventMaskType)4ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RXCbk     ((EventMaskType)8ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RxTimeout     ((EventMaskType)16ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RXCbk     ((EventMaskType)32ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RxTimeout     ((EventMaskType)64ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RXCbk     ((EventMaskType)128ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RxTimeout     ((EventMaskType)256ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RXCbk     ((EventMaskType)512ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RxTimeout     ((EventMaskType)1024ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RXCbk     ((EventMaskType)2048ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RxTimeout     ((EventMaskType)4096ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RXCbk     ((EventMaskType)8192ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RxTimeout     ((EventMaskType)16384ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RXCbk     ((EventMaskType)32768ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RxTimeout     ((EventMaskType)65536ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_DiagInfoILCP1_RXCbk     ((EventMaskType)131072ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_DiagInfoILCP1_RxTimeout     ((EventMaskType)262144ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RXCbk     ((EventMaskType)524288ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RxTimeout     ((EventMaskType)1048576ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RXCbk     ((EventMaskType)2097152ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RxTimeout     ((EventMaskType)4194304ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RXCbk     ((EventMaskType)8388608ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RxTimeout     ((EventMaskType)16777216ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RXCbk     ((EventMaskType)33554432ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RxTimeout     ((EventMaskType)67108864ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_ResponseErrorILCP1_RXCbk     ((EventMaskType)134217728ULL)
# define Rte_Ev_Run_TestLin_Re_LIN0_ILCP1_ResponseErrorILCP1_RxTimeout     ((EventMaskType)268435456ULL)


/* Software counter timing macros */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Cfg.h
 *********************************************************************************************************************/
