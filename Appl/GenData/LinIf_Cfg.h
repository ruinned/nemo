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
 *              File: LinIf_Cfg.h
 *   Generation Time: 2018-11-27 18:44:35
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


#if !defined(LINIF_CFG_H)
#define LINIF_CFG_H

/* If_Asr4IfLin CFG5 Generatorversion 5.02.01 */

/**********************************************************************************************************************
 *  Justifications
 *********************************************************************************************************************/
 /* PRQA S 0779 EOF */ /* MD_MSR_5.1_779 */


/**********************************************************************************************************************
 *  Includes
 *********************************************************************************************************************/
#include "ComStack_Types.h"
#include "Lin_GeneralTypes.h"




/**********************************************************************************************************************
 *  Defines
 *********************************************************************************************************************/
#define LINIF_VERSION_INFO_API                          STD_OFF
#define LINIF_TP_SUPPORTED                              STD_ON
#define LINIF_TRCV_HANDLING                             STD_OFF
#define LINIF_CANCEL_TRANSMIT_SUPPORTED                 STD_OFF
#define LINIF_LIN_CHANNEL_WAKEUP_SUPPORT                STD_OFF
#define LINIF_LINTRCV_WAKEUP_SUPPORT                    STD_OFF
#define LINIF_MULTIPLE_DRIVER_SUPPORT                   STD_OFF
#define LINIF_SPORADIC_FRM_SUPPORTED                    STD_OFF
#define LINIF_EVT_FRM_SUPPORTED                         STD_OFF
#define LINIF_RUNTIME_MEASUREMENT_SUPPORT               STD_OFF
#define LINIF_SCHEDULE_END_NOTIFICATION                 STD_OFF
#define LINIF_J2602_FRAME_TOLERANCE_SUPPORT             STD_OFF
#define LINIF_SCHEDULE_INFO_API                         STD_OFF

#define LinIf_NumberOfChannels                          0x05U 


/**********************************************************************************************************************
 *  General Defines
 *********************************************************************************************************************/
#ifndef LINIF_USE_DUMMY_FUNCTIONS
#define LINIF_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef LINIF_USE_DUMMY_STATEMENT
#define LINIF_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef LINIF_DUMMY_STATEMENT
#define LINIF_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef LINIF_DUMMY_STATEMENT_CONST
#define LINIF_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef LINIF_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define LINIF_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef LINIF_ATOMIC_VARIABLE_ACCESS
#define LINIF_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef LINIF_PROCESSOR_MPC5746C
#define LINIF_PROCESSOR_MPC5746C
#endif
#ifndef LINIF_COMP_DIAB
#define LINIF_COMP_DIAB
#endif
#ifndef LINIF_GEN_GENERATOR_MSR
#define LINIF_GEN_GENERATOR_MSR
#endif
#ifndef LINIF_CPUTYPE_BITORDER_MSB2LSB
#define LINIF_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef LINIF_CONFIGURATION_VARIANT_PRECOMPILE
#define LINIF_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef LINIF_CONFIGURATION_VARIANT_LINKTIME
#define LINIF_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef LINIF_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define LINIF_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef LINIF_CONFIGURATION_VARIANT
#define LINIF_CONFIGURATION_VARIANT LINIF_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef LINIF_POSTBUILD_VARIANT_SUPPORT
#define LINIF_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define LINIF_DEV_ERROR_DETECT                          STD_OFF
#define LINIF_DEV_ERROR_REPORT                          STD_OFF

/**********************************************************************************************************************
 *  Global timebase
 *********************************************************************************************************************/
#define LinIf_GlobalTimeBaseMS                          5U


/**********************************************************************************************************************
 *  Precompile optimizations
 *********************************************************************************************************************/
#define LINIF_PDUR_ONLY_UL_OPTIMIZATION                 STD_ON
#define LINIF_LINSM_ONLY_UL_OPTIMIZATION                STD_ON
/* FBL usecase */
#define LINIF_DIAGNOSTIC_FRAMES_ONLY                    STD_OFF

/* Single LIN driver instance */
#define LinIf_Lin_SendFrame_FctCall(a,b)                Lin_SendFrame((a), (b)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#define LinIf_Lin_GoToSleep_FctCall(a)                  Lin_GoToSleep((a)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#define LinIf_Lin_GoToSleepInternal_FctCall(a)          Lin_GoToSleepInternal((a)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#define LinIf_Lin_Wakeup_FctCall(a)                     Lin_Wakeup((a)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#define LinIf_Lin_WakeupInternal_FctCall(a)             Lin_WakeupInternal((a)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#define LinIf_Lin_CheckWakeup_FctCall(a)                Lin_CheckWakeup((a)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#define LinIf_Lin_GetStatus_FctCall(a,b)                Lin_GetStatus((a), (b)) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 *  Symbolic Name Values For LinIf Channels
 *********************************************************************************************************************/



/**
 * \defgroup LinIfHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define LinIfConf_LinIfChannel_CHNL_8e3d5be2                          0
#define LinIfConf_LinIfChannel_CHNL_08a9294c                          1
#define LinIfConf_LinIfChannel_CHNL_45618847                          2
#define LinIfConf_LinIfChannel_CHNL_c3f5fae9                          3
#define LinIfConf_LinIfChannel_CHNL_def0ca51                          4
/**\} */

/**********************************************************************************************************************
 *  Symbolic Name Values For Tx Frames
 *********************************************************************************************************************/



/**
 * \defgroup LinIfHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_1ce2e8ec                      0
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_3b534005                      1
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_5c6eb50c                      2
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_6bd99233                      3
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_7c7da1f0                      4
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_36ecc1c9                      5
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_61d4a9ba                      6
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_383b08fc                      7
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_493e2f86                      8
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_3127f2fd                      9
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_3697d699                      10
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_a03cc159                      11
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_a807ad91                      12
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_af15de2d                      13
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_d034dae6                      14
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_dc4d24aa                      15
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_dc506f0f                      16
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_ee4aa5ca                      17
#define LinIfConf_LinIfTxPdu_LinIfTxPdu_f1527db2                      18
/**\} */

/**********************************************************************************************************************
 *  Symbolic Name Values For Schedule Tables
 *********************************************************************************************************************/



/**
 * \defgroup LinIfHandleIdsCHNL_8e3d5be2 Handle IDs of handle space CHNL_8e3d5be2.
 * \brief 
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define LinIfConf_LinIfScheduleTable_MasterReq_SlaveResp_Table0_9e3481d6 2
#define LinIfConf_LinIfScheduleTable_MasterReq_SlaveResp_e4c5082e     1
#define LinIfConf_LinIfScheduleTable_NULLSchedule_CHNL_8e3d5be2       0
#define LinIfConf_LinIfScheduleTable_Table0_df24d2a0                  3
#define LinIfConf_LinIfScheduleTable_Table_e_dbb68a08                 4
/**\} */

/**
 * \defgroup LinIfHandleIdsCHNL_08a9294c Handle IDs of handle space CHNL_08a9294c.
 * \brief 
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define LinIfConf_LinIfScheduleTable_MasterReq_SlaveResp_1692e5d6     1
#define LinIfConf_LinIfScheduleTable_MasterReq_SlaveResp_Table_1_631128e5 2
#define LinIfConf_LinIfScheduleTable_MasterReq_SlaveResp_Table_2_fa18795f 3
#define LinIfConf_LinIfScheduleTable_NULLSchedule_CHNL_08a9294c       0
#define LinIfConf_LinIfScheduleTable_Table_1_cbd13a3e                 4
#define LinIfConf_LinIfScheduleTable_Table_2_52d86b84                 5
#define LinIfConf_LinIfScheduleTable_Table_e_a7d7afd3                 6
/**\} */

/**
 * \defgroup LinIfHandleIdsCHNL_45618847 Handle IDs of handle space CHNL_45618847.
 * \brief 
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define LinIfConf_LinIfScheduleTable_MasterReq_SlaveResp_03d8aeb9     1
#define LinIfConf_LinIfScheduleTable_MasterReq_SlaveResp_Table_1_2a158a89 2
#define LinIfConf_LinIfScheduleTable_MasterReq_SlaveResp_Table_2_b31cdb33 3
#define LinIfConf_LinIfScheduleTable_NULLSchedule_CHNL_45618847       0
#define LinIfConf_LinIfScheduleTable_Table_1_2abffe93                 4
#define LinIfConf_LinIfScheduleTable_Table_2_b3b6af29                 5
#define LinIfConf_LinIfScheduleTable_Table_e_46b96b7e                 6
/**\} */

/**
 * \defgroup LinIfHandleIdsCHNL_c3f5fae9 Handle IDs of handle space CHNL_c3f5fae9.
 * \brief 
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define LinIfConf_LinIfScheduleTable_MasterReq_SlaveResp_Table_1_479379d3 2
#define LinIfConf_LinIfScheduleTable_MasterReq_SlaveResp_Table_2_de9a2869 3
#define LinIfConf_LinIfScheduleTable_MasterReq_SlaveResp_f18f4341     1
#define LinIfConf_LinIfScheduleTable_NULLSchedule_CHNL_c3f5fae9       0
#define LinIfConf_LinIfScheduleTable_Table_1_56dedb48                 4
#define LinIfConf_LinIfScheduleTable_Table_2_cfd78af2                 5
#define LinIfConf_LinIfScheduleTable_Table_e_3ad84ea5                 6
/**\} */

/**
 * \defgroup LinIfHandleIdsCHNL_def0ca51 Handle IDs of handle space CHNL_def0ca51.
 * \brief 
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define LinIfConf_LinIfScheduleTable_MasterReq_SlaveResp_294c3867     1
#define LinIfConf_LinIfScheduleTable_MasterReq_SlaveResp_Table_1_b81cce51 2
#define LinIfConf_LinIfScheduleTable_MasterReq_SlaveResp_Table_2_21159feb 3
#define LinIfConf_LinIfScheduleTable_NULLSchedule                     0
#define LinIfConf_LinIfScheduleTable_Table_1_33137188                 4
#define LinIfConf_LinIfScheduleTable_Table_2_aa1a2032                 5
#define LinIfConf_LinIfScheduleTable_Table_e_5f15e465                 6
/**\} */

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  LinIfPCDataSwitches  LinIf Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define LINIF_CHANNELCONFIG                                           STD_ON
#define LINIF_CHANNELFUNCCALLCYCLEOFCHANNELCONFIG                     STD_ON
#define LINIF_FRAMELENGTHDELAYLISTENDIDXOFCHANNELCONFIG               STD_ON
#define LINIF_FRAMELENGTHDELAYLISTSTARTIDXOFCHANNELCONFIG             STD_ON
#define LINIF_FRAMELENGTHDELAYLISTUSEDOFCHANNELCONFIG                 STD_ON
#define LINIF_FRAMELISTENDIDXOFCHANNELCONFIG                          STD_ON
#define LINIF_FRAMELISTSTARTIDXOFCHANNELCONFIG                        STD_ON
#define LINIF_LOADBALANCINGOFFSETOFCHANNELCONFIG                      STD_ON
#define LINIF_NUMBEROFSCHEDULESOFCHANNELCONFIG                        STD_ON
#define LINIF_SCHEDULECHANGEBEFORESLOTENDOFCHANNELCONFIG              STD_ON
#define LINIF_SCHEDULETABLELISTINDENDIDXOFCHANNELCONFIG               STD_ON
#define LINIF_SCHEDULETABLELISTINDSTARTIDXOFCHANNELCONFIG             STD_ON
#define LINIF_STARTUPSTATEOFCHANNELCONFIG                             STD_ON
#define LINIF_TIMEBASEOFCHANNELCONFIG                                 STD_ON
#define LINIF_WAKEUPDELAYEXTERNALOFCHANNELCONFIG                      STD_ON
#define LINIF_WAKEUPDELAYINTERNALOFCHANNELCONFIG                      STD_ON
#define LINIF_CHANNELDATA                                             STD_ON
#define LINIF_CHANNELINDTABLE                                         STD_ON
#define LINIF_LINCHANNELINDEXOFCHANNELINDTABLE                        STD_ON
#define LINIF_SYSTEMCHANNELINDEXOFCHANNELINDTABLE                     STD_ON
#define LINIF_ENTRY                                                   STD_ON
#define LINIF_DELAYINTIMEBASETICKSOFENTRY                             STD_ON
#define LINIF_FRAMELISTIDXOFENTRY                                     STD_ON
#define LINIF_EVTFRAMEINFO                                            STD_OFF  /**< Deactivateable: 'LinIf_EvtFrameInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define LINIF_COLLRESOLVSCHEDHANDLEOFEVTFRAMEINFO                     STD_OFF  /**< Deactivateable: 'LinIf_EvtFrameInfo.CollResolvSchedHandle' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_EVTUNCONDITIONALFRAMEINFOENDIDXOFEVTFRAMEINFO           STD_OFF  /**< Deactivateable: 'LinIf_EvtFrameInfo.EvtUnconditionalFrameInfoEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_EVTUNCONDITIONALFRAMEINFOSTARTIDXOFEVTFRAMEINFO         STD_OFF  /**< Deactivateable: 'LinIf_EvtFrameInfo.EvtUnconditionalFrameInfoStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_EVTUNCONDITIONALFRAMEINFO                               STD_OFF  /**< Deactivateable: 'LinIf_EvtUnconditionalFrameInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define LINIF_FRAMELISTIDXOFEVTUNCONDITIONALFRAMEINFO                 STD_OFF  /**< Deactivateable: 'LinIf_EvtUnconditionalFrameInfo.FrameListIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_PIDOFEVTUNCONDITIONALFRAMEINFO                          STD_OFF  /**< Deactivateable: 'LinIf_EvtUnconditionalFrameInfo.Pid' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_FINALMAGICNUMBER                                        STD_OFF  /**< Deactivateable: 'LinIf_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define LINIF_FIXEDFRAMESDULIST                                       STD_OFF  /**< Deactivateable: 'LinIf_FixedFrameSduList' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define LINIF_SDUBYTEOFFIXEDFRAMESDULIST                              STD_OFF  /**< Deactivateable: 'LinIf_FixedFrameSduList.SduByte' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_FRAMELENGTHDELAYLIST                                    STD_ON
#define LINIF_FRAMELENGTHDELAYOFFRAMELENGTHDELAYLIST                  STD_ON
#define LINIF_FRAMELIST                                               STD_ON
#define LINIF_CHECKSUMTYPEOFFRAMELIST                                 STD_ON
#define LINIF_DIRECTIONOFFRAMELIST                                    STD_ON
#define LINIF_FIXEDFRAMESDULISTIDXOFFRAMELIST                         STD_OFF  /**< Deactivateable: 'LinIf_FrameList.FixedFrameSduListIdx' Reason: 'the optional indirection is deactivated because FixedFrameSduListUsedOfFrameList is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define LINIF_FIXEDFRAMESDULISTUSEDOFFRAMELIST                        STD_OFF  /**< Deactivateable: 'LinIf_FrameList.FixedFrameSduListUsed' Reason: 'the optional indirection is deactivated because FixedFrameSduListUsedOfFrameList is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define LINIF_FRAMETYPEOFFRAMELIST                                    STD_ON
#define LINIF_LENGTHOFFRAMELIST                                       STD_ON
#define LINIF_PDUIDOFFRAMELIST                                        STD_ON
#define LINIF_PIDOFFRAMELIST                                          STD_ON
#define LINIF_INITDATAHASHCODE                                        STD_OFF  /**< Deactivateable: 'LinIf_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define LINIF_NUMBEROFSYSTEMCHANNELS                                  STD_ON
#define LINIF_SCHEDULETABLELIST                                       STD_ON
#define LINIF_ENTRYENDIDXOFSCHEDULETABLELIST                          STD_ON
#define LINIF_ENTRYSTARTIDXOFSCHEDULETABLELIST                        STD_ON
#define LINIF_ENTRYUSEDOFSCHEDULETABLELIST                            STD_ON
#define LINIF_INVALIDHNDOFSCHEDULETABLELIST                           STD_OFF  /**< Deactivateable: 'LinIf_ScheduleTableList.InvalidHnd' Reason: 'the value of LinIf_InvalidHndOfScheduleTableList is always 'false' due to this, the array is deactivated.' */
#define LINIF_NUMBEROFSCHEDULEENTRIESOFSCHEDULETABLELIST              STD_ON
#define LINIF_RESUMEPOSITIONOFSCHEDULETABLELIST                       STD_ON
#define LINIF_RUNMODEOFSCHEDULETABLELIST                              STD_ON
#define LINIF_SCHEDULETABLELISTIND                                    STD_ON
#define LINIF_SIZEOFCHANNELDATA                                       STD_ON
#define LINIF_SIZEOFCHANNELINDTABLE                                   STD_ON
#define LINIF_SPORUNCFRAMEBYHANDLELIST                                STD_OFF  /**< Deactivateable: 'LinIf_SporUncFrameByHandleList' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define LINIF_SPORUNCONDITIONALFRAMEIDXOFSPORUNCFRAMEBYHANDLELIST     STD_OFF  /**< Deactivateable: 'LinIf_SporUncFrameByHandleList.SporUnconditionalFrameIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_SPORUNCFRAMEBYPRIORITYLIST                              STD_OFF  /**< Deactivateable: 'LinIf_SporUncFrameByPriorityList' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define LINIF_SPORUNCONDITIONALFRAMEIDXOFSPORUNCFRAMEBYPRIORITYLIST   STD_OFF  /**< Deactivateable: 'LinIf_SporUncFrameByPriorityList.SporUnconditionalFrameIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_SPORUNCONDITIONALFRAME                                  STD_OFF  /**< Deactivateable: 'LinIf_SporUnconditionalFrame' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define LINIF_BITMSKOFSPORUNCONDITIONALFRAME                          STD_OFF  /**< Deactivateable: 'LinIf_SporUnconditionalFrame.BitMsk' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_BYTEMSKOFSPORUNCONDITIONALFRAME                         STD_OFF  /**< Deactivateable: 'LinIf_SporUnconditionalFrame.ByteMsk' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_FRAMELISTIDXOFSPORUNCONDITIONALFRAME                    STD_OFF  /**< Deactivateable: 'LinIf_SporUnconditionalFrame.FrameListIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_SPORADICFRAMEINFO                                       STD_OFF  /**< Deactivateable: 'LinIf_SporadicFrameInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define LINIF_SPORUNCFRAMEBYPRIORITYLISTENDIDXOFSPORADICFRAMEINFO     STD_OFF  /**< Deactivateable: 'LinIf_SporadicFrameInfo.SporUncFrameByPriorityListEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_SPORUNCFRAMEBYPRIORITYLISTSTARTIDXOFSPORADICFRAMEINFO   STD_OFF  /**< Deactivateable: 'LinIf_SporadicFrameInfo.SporUncFrameByPriorityListStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_UNCFRAMECOUNTOFSPORADICFRAMEINFO                        STD_OFF  /**< Deactivateable: 'LinIf_SporadicFrameInfo.UncFrameCount' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_SPORADICFRAMELOOKUPTABLE                                STD_OFF  /**< Deactivateable: 'LinIf_SporadicFrameLookupTable' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define LINIF_BITMSKOFSPORADICFRAMELOOKUPTABLE                        STD_OFF  /**< Deactivateable: 'LinIf_SporadicFrameLookupTable.BitMsk' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_BYTEMSKOFSPORADICFRAMELOOKUPTABLE                       STD_OFF  /**< Deactivateable: 'LinIf_SporadicFrameLookupTable.ByteMsk' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_TXPDUIDOFSPORADICFRAMELOOKUPTABLE                       STD_OFF  /**< Deactivateable: 'LinIf_SporadicFrameLookupTable.TxPduId' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define LINIF_SYSTEMTOLINIFCHANNEL                                    STD_ON
#define LINIF_LINIFCHANNELINDEXOFSYSTEMTOLINIFCHANNEL                 STD_ON
#define LINIF_UNCTXFRMTOTALNUMBER                                     STD_ON
#define LINIF_PCCONFIG                                                STD_ON
#define LINIF_CHANNELCONFIGOFPCCONFIG                                 STD_ON
#define LINIF_CHANNELDATAOFPCCONFIG                                   STD_ON
#define LINIF_CHANNELINDTABLEOFPCCONFIG                               STD_ON
#define LINIF_ENTRYOFPCCONFIG                                         STD_ON
#define LINIF_FINALMAGICNUMBEROFPCCONFIG                              STD_OFF  /**< Deactivateable: 'LinIf_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define LINIF_FRAMELENGTHDELAYLISTOFPCCONFIG                          STD_ON
#define LINIF_FRAMELISTOFPCCONFIG                                     STD_ON
#define LINIF_INITDATAHASHCODEOFPCCONFIG                              STD_OFF  /**< Deactivateable: 'LinIf_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define LINIF_NUMBEROFSYSTEMCHANNELSOFPCCONFIG                        STD_ON
#define LINIF_SCHEDULETABLELISTINDOFPCCONFIG                          STD_ON
#define LINIF_SCHEDULETABLELISTOFPCCONFIG                             STD_ON
#define LINIF_SIZEOFCHANNELDATAOFPCCONFIG                             STD_ON
#define LINIF_SIZEOFCHANNELINDTABLEOFPCCONFIG                         STD_ON
#define LINIF_SYSTEMTOLINIFCHANNELOFPCCONFIG                          STD_ON
#define LINIF_UNCTXFRMTOTALNUMBEROFPCCONFIG                           STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  LinIfPCNoReferenceDefines  LinIf No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define LINIF_NO_FRAMELENGTHDELAYLISTENDIDXOFCHANNELCONFIG            65535U
#define LINIF_NO_FRAMELENGTHDELAYLISTSTARTIDXOFCHANNELCONFIG          65535U
#define LINIF_NO_ENTRYENDIDXOFSCHEDULETABLELIST                       65535U
#define LINIF_NO_ENTRYSTARTIDXOFSCHEDULETABLELIST                     65535U
/** 
  \}
*/ 

/** 
  \defgroup  LinIfPCIsReducedToDefineDefines  LinIf Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define LINIF_ISDEF_CHANNELFUNCCALLCYCLEOFCHANNELCONFIG               STD_OFF
#define LINIF_ISDEF_FRAMELENGTHDELAYLISTENDIDXOFCHANNELCONFIG         STD_OFF
#define LINIF_ISDEF_FRAMELENGTHDELAYLISTSTARTIDXOFCHANNELCONFIG       STD_OFF
#define LINIF_ISDEF_FRAMELENGTHDELAYLISTUSEDOFCHANNELCONFIG           STD_OFF
#define LINIF_ISDEF_FRAMELISTENDIDXOFCHANNELCONFIG                    STD_OFF
#define LINIF_ISDEF_FRAMELISTSTARTIDXOFCHANNELCONFIG                  STD_OFF
#define LINIF_ISDEF_LOADBALANCINGOFFSETOFCHANNELCONFIG                STD_OFF
#define LINIF_ISDEF_NUMBEROFSCHEDULESOFCHANNELCONFIG                  STD_OFF
#define LINIF_ISDEF_SCHEDULECHANGEBEFORESLOTENDOFCHANNELCONFIG        STD_OFF
#define LINIF_ISDEF_SCHEDULETABLELISTINDENDIDXOFCHANNELCONFIG         STD_OFF
#define LINIF_ISDEF_SCHEDULETABLELISTINDSTARTIDXOFCHANNELCONFIG       STD_OFF
#define LINIF_ISDEF_STARTUPSTATEOFCHANNELCONFIG                       STD_OFF
#define LINIF_ISDEF_TIMEBASEOFCHANNELCONFIG                           STD_OFF
#define LINIF_ISDEF_WAKEUPDELAYEXTERNALOFCHANNELCONFIG                STD_OFF
#define LINIF_ISDEF_WAKEUPDELAYINTERNALOFCHANNELCONFIG                STD_OFF
#define LINIF_ISDEF_LINCHANNELINDEXOFCHANNELINDTABLE                  STD_OFF
#define LINIF_ISDEF_SYSTEMCHANNELINDEXOFCHANNELINDTABLE               STD_OFF
#define LINIF_ISDEF_DELAYINTIMEBASETICKSOFENTRY                       STD_OFF
#define LINIF_ISDEF_FRAMELISTIDXOFENTRY                               STD_OFF
#define LINIF_ISDEF_FRAMELENGTHDELAYOFFRAMELENGTHDELAYLIST            STD_OFF
#define LINIF_ISDEF_CHECKSUMTYPEOFFRAMELIST                           STD_OFF
#define LINIF_ISDEF_DIRECTIONOFFRAMELIST                              STD_OFF
#define LINIF_ISDEF_FRAMETYPEOFFRAMELIST                              STD_OFF
#define LINIF_ISDEF_LENGTHOFFRAMELIST                                 STD_OFF
#define LINIF_ISDEF_PDUIDOFFRAMELIST                                  STD_OFF
#define LINIF_ISDEF_PIDOFFRAMELIST                                    STD_OFF
#define LINIF_ISDEF_ENTRYENDIDXOFSCHEDULETABLELIST                    STD_OFF
#define LINIF_ISDEF_ENTRYSTARTIDXOFSCHEDULETABLELIST                  STD_OFF
#define LINIF_ISDEF_ENTRYUSEDOFSCHEDULETABLELIST                      STD_OFF
#define LINIF_ISDEF_NUMBEROFSCHEDULEENTRIESOFSCHEDULETABLELIST        STD_OFF
#define LINIF_ISDEF_RESUMEPOSITIONOFSCHEDULETABLELIST                 STD_OFF
#define LINIF_ISDEF_RUNMODEOFSCHEDULETABLELIST                        STD_OFF
#define LINIF_ISDEF_SCHEDULETABLELISTIND                              STD_OFF
#define LINIF_ISDEF_LINIFCHANNELINDEXOFSYSTEMTOLINIFCHANNEL           STD_OFF
#define LINIF_ISDEF_CHANNELCONFIGOFPCCONFIG                           STD_ON
#define LINIF_ISDEF_CHANNELDATAOFPCCONFIG                             STD_ON
#define LINIF_ISDEF_CHANNELINDTABLEOFPCCONFIG                         STD_ON
#define LINIF_ISDEF_ENTRYOFPCCONFIG                                   STD_ON
#define LINIF_ISDEF_FRAMELENGTHDELAYLISTOFPCCONFIG                    STD_ON
#define LINIF_ISDEF_FRAMELISTOFPCCONFIG                               STD_ON
#define LINIF_ISDEF_SCHEDULETABLELISTINDOFPCCONFIG                    STD_ON
#define LINIF_ISDEF_SCHEDULETABLELISTOFPCCONFIG                       STD_ON
#define LINIF_ISDEF_SYSTEMTOLINIFCHANNELOFPCCONFIG                    STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  LinIfPCEqualsAlwaysToDefines  LinIf Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define LINIF_EQ2_CHANNELFUNCCALLCYCLEOFCHANNELCONFIG                 
#define LINIF_EQ2_FRAMELENGTHDELAYLISTENDIDXOFCHANNELCONFIG           
#define LINIF_EQ2_FRAMELENGTHDELAYLISTSTARTIDXOFCHANNELCONFIG         
#define LINIF_EQ2_FRAMELENGTHDELAYLISTUSEDOFCHANNELCONFIG             
#define LINIF_EQ2_FRAMELISTENDIDXOFCHANNELCONFIG                      
#define LINIF_EQ2_FRAMELISTSTARTIDXOFCHANNELCONFIG                    
#define LINIF_EQ2_LOADBALANCINGOFFSETOFCHANNELCONFIG                  
#define LINIF_EQ2_NUMBEROFSCHEDULESOFCHANNELCONFIG                    
#define LINIF_EQ2_SCHEDULECHANGEBEFORESLOTENDOFCHANNELCONFIG          
#define LINIF_EQ2_SCHEDULETABLELISTINDENDIDXOFCHANNELCONFIG           
#define LINIF_EQ2_SCHEDULETABLELISTINDSTARTIDXOFCHANNELCONFIG         
#define LINIF_EQ2_STARTUPSTATEOFCHANNELCONFIG                         
#define LINIF_EQ2_TIMEBASEOFCHANNELCONFIG                             
#define LINIF_EQ2_WAKEUPDELAYEXTERNALOFCHANNELCONFIG                  
#define LINIF_EQ2_WAKEUPDELAYINTERNALOFCHANNELCONFIG                  
#define LINIF_EQ2_LINCHANNELINDEXOFCHANNELINDTABLE                    
#define LINIF_EQ2_SYSTEMCHANNELINDEXOFCHANNELINDTABLE                 
#define LINIF_EQ2_DELAYINTIMEBASETICKSOFENTRY                         
#define LINIF_EQ2_FRAMELISTIDXOFENTRY                                 
#define LINIF_EQ2_FRAMELENGTHDELAYOFFRAMELENGTHDELAYLIST              
#define LINIF_EQ2_CHECKSUMTYPEOFFRAMELIST                             
#define LINIF_EQ2_DIRECTIONOFFRAMELIST                                
#define LINIF_EQ2_FRAMETYPEOFFRAMELIST                                
#define LINIF_EQ2_LENGTHOFFRAMELIST                                   
#define LINIF_EQ2_PDUIDOFFRAMELIST                                    
#define LINIF_EQ2_PIDOFFRAMELIST                                      
#define LINIF_EQ2_ENTRYENDIDXOFSCHEDULETABLELIST                      
#define LINIF_EQ2_ENTRYSTARTIDXOFSCHEDULETABLELIST                    
#define LINIF_EQ2_ENTRYUSEDOFSCHEDULETABLELIST                        
#define LINIF_EQ2_NUMBEROFSCHEDULEENTRIESOFSCHEDULETABLELIST          
#define LINIF_EQ2_RESUMEPOSITIONOFSCHEDULETABLELIST                   
#define LINIF_EQ2_RUNMODEOFSCHEDULETABLELIST                          
#define LINIF_EQ2_SCHEDULETABLELISTIND                                
#define LINIF_EQ2_LINIFCHANNELINDEXOFSYSTEMTOLINIFCHANNEL             
#define LINIF_EQ2_CHANNELCONFIGOFPCCONFIG                             LinIf_ChannelConfig
#define LINIF_EQ2_CHANNELDATAOFPCCONFIG                               LinIf_ChannelData
#define LINIF_EQ2_CHANNELINDTABLEOFPCCONFIG                           LinIf_ChannelIndTable
#define LINIF_EQ2_ENTRYOFPCCONFIG                                     LinIf_Entry
#define LINIF_EQ2_FRAMELENGTHDELAYLISTOFPCCONFIG                      LinIf_FrameLengthDelayList
#define LINIF_EQ2_FRAMELISTOFPCCONFIG                                 LinIf_FrameList
#define LINIF_EQ2_SCHEDULETABLELISTINDOFPCCONFIG                      LinIf_ScheduleTableListInd
#define LINIF_EQ2_SCHEDULETABLELISTOFPCCONFIG                         LinIf_ScheduleTableList
#define LINIF_EQ2_SYSTEMTOLINIFCHANNELOFPCCONFIG                      LinIf_SystemToLinIfChannel
/** 
  \}
*/ 

/** 
  \defgroup  LinIfPCSymbolicInitializationPointers  LinIf Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define LinIf_Config_Ptr                                              NULL_PTR  /**< symbolic identifier which shall be used to initialize 'LinIf' */
/** 
  \}
*/ 

/** 
  \defgroup  LinIfPCInitializationSymbols  LinIf Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define LinIf_Config                                                  NULL_PTR  /**< symbolic identifier which could be used to initialize 'LinIf */
/** 
  \}
*/ 

/** 
  \defgroup  LinIfPCGeneral  LinIf General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define LINIF_CHECK_INIT_POINTER                                      STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define LINIF_FINAL_MAGIC_NUMBER                                      0x3E1EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of LinIf */
#define LINIF_INDIVIDUAL_POSTBUILD                                    STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'LinIf' is not configured to be postbuild capable. */
#define LINIF_INIT_DATA                                               LINIF_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define LINIF_INIT_DATA_HASH_CODE                                     1257190497L  /**< the precompile constant to validate the initialization structure at initialization time of LinIf with a hashcode. The seed value is '0x3E1EU' */
#define LINIF_USE_ECUM_BSW_ERROR_HOOK                                 STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define LINIF_USE_INIT_POINTER                                        STD_OFF  /**< STD_ON if the init pointer LinIf shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  LinIfLTDataSwitches  LinIf Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define LINIF_LTCONFIG                                                STD_OFF  /**< Deactivateable: 'LinIf_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  LinIfPBDataSwitches  LinIf Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define LINIF_PBCONFIG                                                STD_OFF  /**< Deactivateable: 'LinIf_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define LINIF_LTCONFIGIDXOFPBCONFIG                                   STD_OFF  /**< Deactivateable: 'LinIf_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define LINIF_PCCONFIGIDXOFPBCONFIG                                   STD_OFF  /**< Deactivateable: 'LinIf_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 



/**********************************************************************************************************************
 *  Includes
 *********************************************************************************************************************/
#include "LinIf_Types.h"

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
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
  \defgroup  LinIfPCGetConstantDuplicatedRootDataMacros  LinIf Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define LinIf_GetChannelConfigOfPCConfig()                            LinIf_ChannelConfig  /**< the pointer to LinIf_ChannelConfig */
#define LinIf_GetChannelDataOfPCConfig()                              LinIf_ChannelData  /**< the pointer to LinIf_ChannelData */
#define LinIf_GetChannelIndTableOfPCConfig()                          LinIf_ChannelIndTable  /**< the pointer to LinIf_ChannelIndTable */
#define LinIf_GetEntryOfPCConfig()                                    LinIf_Entry  /**< the pointer to LinIf_Entry */
#define LinIf_GetFrameLengthDelayListOfPCConfig()                     LinIf_FrameLengthDelayList  /**< the pointer to LinIf_FrameLengthDelayList */
#define LinIf_GetFrameListOfPCConfig()                                LinIf_FrameList  /**< the pointer to LinIf_FrameList */
#define LinIf_GetNumberOfSystemChannelsOfPCConfig()                   10U  /**< Number of system channels (in variant) */
#define LinIf_GetScheduleTableListIndOfPCConfig()                     LinIf_ScheduleTableListInd  /**< the pointer to LinIf_ScheduleTableListInd */
#define LinIf_GetScheduleTableListOfPCConfig()                        LinIf_ScheduleTableList  /**< the pointer to LinIf_ScheduleTableList */
#define LinIf_GetSizeOfChannelDataOfPCConfig()                        5U  /**< the number of accomplishable value elements in LinIf_ChannelData */
#define LinIf_GetSizeOfChannelIndTableOfPCConfig()                    5U  /**< the number of accomplishable value elements in LinIf_ChannelIndTable */
#define LinIf_GetSystemToLinIfChannelOfPCConfig()                     LinIf_SystemToLinIfChannel  /**< the pointer to LinIf_SystemToLinIfChannel */
#define LinIf_GetUncTxFrmTotalNumberOfPCConfig()                      19U  /**< Number of unconditional Tx frames */
/** 
  \}
*/ 

/** 
  \defgroup  LinIfPCGetDataMacros  LinIf Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define LinIf_GetChannelFuncCallCycleOfChannelConfig(Index)           (LinIf_GetChannelConfigOfPCConfig()[(Index)].ChannelFuncCallCycleOfChannelConfig)
#define LinIf_GetFrameLengthDelayListEndIdxOfChannelConfig(Index)     (LinIf_GetChannelConfigOfPCConfig()[(Index)].FrameLengthDelayListEndIdxOfChannelConfig)
#define LinIf_GetFrameLengthDelayListStartIdxOfChannelConfig(Index)   (LinIf_GetChannelConfigOfPCConfig()[(Index)].FrameLengthDelayListStartIdxOfChannelConfig)
#define LinIf_GetFrameListEndIdxOfChannelConfig(Index)                (LinIf_GetChannelConfigOfPCConfig()[(Index)].FrameListEndIdxOfChannelConfig)
#define LinIf_GetFrameListStartIdxOfChannelConfig(Index)              (LinIf_GetChannelConfigOfPCConfig()[(Index)].FrameListStartIdxOfChannelConfig)
#define LinIf_GetLoadBalancingOffsetOfChannelConfig(Index)            (LinIf_GetChannelConfigOfPCConfig()[(Index)].LoadBalancingOffsetOfChannelConfig)
#define LinIf_GetNumberOfSchedulesOfChannelConfig(Index)              (LinIf_GetChannelConfigOfPCConfig()[(Index)].NumberOfSchedulesOfChannelConfig)
#define LinIf_IsScheduleChangeBeforeSlotEndOfChannelConfig(Index)     ((LinIf_GetChannelConfigOfPCConfig()[(Index)].ScheduleChangeBeforeSlotEndOfChannelConfig) != FALSE)
#define LinIf_GetScheduleTableListIndEndIdxOfChannelConfig(Index)     (LinIf_GetChannelConfigOfPCConfig()[(Index)].ScheduleTableListIndEndIdxOfChannelConfig)
#define LinIf_GetScheduleTableListIndStartIdxOfChannelConfig(Index)   (LinIf_GetChannelConfigOfPCConfig()[(Index)].ScheduleTableListIndStartIdxOfChannelConfig)
#define LinIf_GetStartupStateOfChannelConfig(Index)                   (LinIf_GetChannelConfigOfPCConfig()[(Index)].StartupStateOfChannelConfig)
#define LinIf_GetTimeBaseOfChannelConfig(Index)                       (LinIf_GetChannelConfigOfPCConfig()[(Index)].TimeBaseOfChannelConfig)
#define LinIf_GetWakeupDelayExternalOfChannelConfig(Index)            (LinIf_GetChannelConfigOfPCConfig()[(Index)].WakeupDelayExternalOfChannelConfig)
#define LinIf_GetWakeupDelayInternalOfChannelConfig(Index)            (LinIf_GetChannelConfigOfPCConfig()[(Index)].WakeupDelayInternalOfChannelConfig)
#define LinIf_GetChannelData(Index)                                   (LinIf_GetChannelDataOfPCConfig()[(Index)])
#define LinIf_GetLinChannelIndexOfChannelIndTable(Index)              (LinIf_GetChannelIndTableOfPCConfig()[(Index)].LinChannelIndexOfChannelIndTable)
#define LinIf_GetSystemChannelIndexOfChannelIndTable(Index)           (LinIf_GetChannelIndTableOfPCConfig()[(Index)].SystemChannelIndexOfChannelIndTable)
#define LinIf_GetDelayInTimebaseTicksOfEntry(Index)                   (LinIf_GetEntryOfPCConfig()[(Index)].DelayInTimebaseTicksOfEntry)
#define LinIf_GetFrameListIdxOfEntry(Index)                           (LinIf_GetEntryOfPCConfig()[(Index)].FrameListIdxOfEntry)
#define LinIf_GetFrameLengthDelayOfFrameLengthDelayList(Index)        (LinIf_GetFrameLengthDelayListOfPCConfig()[(Index)].FrameLengthDelayOfFrameLengthDelayList)
#define LinIf_GetChecksumTypeOfFrameList(Index)                       (LinIf_GetFrameListOfPCConfig()[(Index)].ChecksumTypeOfFrameList)
#define LinIf_GetDirectionOfFrameList(Index)                          (LinIf_GetFrameListOfPCConfig()[(Index)].DirectionOfFrameList)
#define LinIf_GetFrameTypeOfFrameList(Index)                          (LinIf_GetFrameListOfPCConfig()[(Index)].FrameTypeOfFrameList)
#define LinIf_GetLengthOfFrameList(Index)                             (LinIf_GetFrameListOfPCConfig()[(Index)].LengthOfFrameList)
#define LinIf_GetPduIdOfFrameList(Index)                              (LinIf_GetFrameListOfPCConfig()[(Index)].PduIdOfFrameList)
#define LinIf_GetPidOfFrameList(Index)                                (LinIf_GetFrameListOfPCConfig()[(Index)].PidOfFrameList)
#define LinIf_GetEntryEndIdxOfScheduleTableList(Index)                (LinIf_GetScheduleTableListOfPCConfig()[(Index)].EntryEndIdxOfScheduleTableList)
#define LinIf_GetEntryStartIdxOfScheduleTableList(Index)              (LinIf_GetScheduleTableListOfPCConfig()[(Index)].EntryStartIdxOfScheduleTableList)
#define LinIf_GetNumberOfScheduleEntriesOfScheduleTableList(Index)    (LinIf_GetScheduleTableListOfPCConfig()[(Index)].NumberOfScheduleEntriesOfScheduleTableList)
#define LinIf_GetResumePositionOfScheduleTableList(Index)             (LinIf_GetScheduleTableListOfPCConfig()[(Index)].ResumePositionOfScheduleTableList)
#define LinIf_GetRunModeOfScheduleTableList(Index)                    (LinIf_GetScheduleTableListOfPCConfig()[(Index)].RunModeOfScheduleTableList)
#define LinIf_GetScheduleTableListInd(Index)                          (LinIf_GetScheduleTableListIndOfPCConfig()[(Index)])
#define LinIf_GetLinIfChannelIndexOfSystemToLinIfChannel(Index)       (LinIf_GetSystemToLinIfChannelOfPCConfig()[(Index)].LinIfChannelIndexOfSystemToLinIfChannel)
/** 
  \}
*/ 

/** 
  \defgroup  LinIfPCGetDeduplicatedDataMacros  LinIf Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define LinIf_IsFrameLengthDelayListUsedOfChannelConfig(Index)        (((boolean)(LinIf_GetFrameLengthDelayListStartIdxOfChannelConfig(Index) != LINIF_NO_FRAMELENGTHDELAYLISTSTARTIDXOFCHANNELCONFIG)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to LinIf_FrameLengthDelayList */
#define LinIf_GetNumberOfSystemChannels()                             LinIf_GetNumberOfSystemChannelsOfPCConfig()
#define LinIf_IsEntryUsedOfScheduleTableList(Index)                   (((boolean)(LinIf_GetEntryStartIdxOfScheduleTableList(Index) != LINIF_NO_ENTRYSTARTIDXOFSCHEDULETABLELIST)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to LinIf_Entry */
#define LinIf_GetSizeOfChannelData()                                  LinIf_GetSizeOfChannelDataOfPCConfig()
#define LinIf_GetSizeOfChannelIndTable()                              LinIf_GetSizeOfChannelIndTableOfPCConfig()
#define LinIf_GetUncTxFrmTotalNumber()                                LinIf_GetUncTxFrmTotalNumberOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  LinIfPCSetDataMacros  LinIf Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define LinIf_SetChannelData(Index, Value)                            LinIf_GetChannelDataOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  LinIfPCGetAddressOfDataMacros  LinIf Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define LinIf_GetAddrChannelData(Index)                               &LinIf_GetChannelData(Index)
/** 
  \}
*/ 

/** 
  \defgroup  LinIfPCHasMacros  LinIf Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define LinIf_HasChannelConfig()                                      (TRUE != FALSE)
#define LinIf_HasChannelFuncCallCycleOfChannelConfig()                (TRUE != FALSE)
#define LinIf_HasFrameLengthDelayListEndIdxOfChannelConfig()          (TRUE != FALSE)
#define LinIf_HasFrameLengthDelayListStartIdxOfChannelConfig()        (TRUE != FALSE)
#define LinIf_HasFrameLengthDelayListUsedOfChannelConfig()            (TRUE != FALSE)
#define LinIf_HasFrameListEndIdxOfChannelConfig()                     (TRUE != FALSE)
#define LinIf_HasFrameListStartIdxOfChannelConfig()                   (TRUE != FALSE)
#define LinIf_HasLoadBalancingOffsetOfChannelConfig()                 (TRUE != FALSE)
#define LinIf_HasNumberOfSchedulesOfChannelConfig()                   (TRUE != FALSE)
#define LinIf_HasScheduleChangeBeforeSlotEndOfChannelConfig()         (TRUE != FALSE)
#define LinIf_HasScheduleTableListIndEndIdxOfChannelConfig()          (TRUE != FALSE)
#define LinIf_HasScheduleTableListIndStartIdxOfChannelConfig()        (TRUE != FALSE)
#define LinIf_HasStartupStateOfChannelConfig()                        (TRUE != FALSE)
#define LinIf_HasTimeBaseOfChannelConfig()                            (TRUE != FALSE)
#define LinIf_HasWakeupDelayExternalOfChannelConfig()                 (TRUE != FALSE)
#define LinIf_HasWakeupDelayInternalOfChannelConfig()                 (TRUE != FALSE)
#define LinIf_HasChannelData()                                        (TRUE != FALSE)
#define LinIf_HasChannelIndTable()                                    (TRUE != FALSE)
#define LinIf_HasLinChannelIndexOfChannelIndTable()                   (TRUE != FALSE)
#define LinIf_HasSystemChannelIndexOfChannelIndTable()                (TRUE != FALSE)
#define LinIf_HasEntry()                                              (TRUE != FALSE)
#define LinIf_HasDelayInTimebaseTicksOfEntry()                        (TRUE != FALSE)
#define LinIf_HasFrameListIdxOfEntry()                                (TRUE != FALSE)
#define LinIf_HasFrameLengthDelayList()                               (TRUE != FALSE)
#define LinIf_HasFrameLengthDelayOfFrameLengthDelayList()             (TRUE != FALSE)
#define LinIf_HasFrameList()                                          (TRUE != FALSE)
#define LinIf_HasChecksumTypeOfFrameList()                            (TRUE != FALSE)
#define LinIf_HasDirectionOfFrameList()                               (TRUE != FALSE)
#define LinIf_HasFrameTypeOfFrameList()                               (TRUE != FALSE)
#define LinIf_HasLengthOfFrameList()                                  (TRUE != FALSE)
#define LinIf_HasPduIdOfFrameList()                                   (TRUE != FALSE)
#define LinIf_HasPidOfFrameList()                                     (TRUE != FALSE)
#define LinIf_HasNumberOfSystemChannels()                             (TRUE != FALSE)
#define LinIf_HasScheduleTableList()                                  (TRUE != FALSE)
#define LinIf_HasEntryEndIdxOfScheduleTableList()                     (TRUE != FALSE)
#define LinIf_HasEntryStartIdxOfScheduleTableList()                   (TRUE != FALSE)
#define LinIf_HasEntryUsedOfScheduleTableList()                       (TRUE != FALSE)
#define LinIf_HasNumberOfScheduleEntriesOfScheduleTableList()         (TRUE != FALSE)
#define LinIf_HasResumePositionOfScheduleTableList()                  (TRUE != FALSE)
#define LinIf_HasRunModeOfScheduleTableList()                         (TRUE != FALSE)
#define LinIf_HasScheduleTableListInd()                               (TRUE != FALSE)
#define LinIf_HasSizeOfChannelData()                                  (TRUE != FALSE)
#define LinIf_HasSizeOfChannelIndTable()                              (TRUE != FALSE)
#define LinIf_HasSystemToLinIfChannel()                               (TRUE != FALSE)
#define LinIf_HasLinIfChannelIndexOfSystemToLinIfChannel()            (TRUE != FALSE)
#define LinIf_HasUncTxFrmTotalNumber()                                (TRUE != FALSE)
#define LinIf_HasPCConfig()                                           (TRUE != FALSE)
#define LinIf_HasChannelConfigOfPCConfig()                            (TRUE != FALSE)
#define LinIf_HasChannelDataOfPCConfig()                              (TRUE != FALSE)
#define LinIf_HasChannelIndTableOfPCConfig()                          (TRUE != FALSE)
#define LinIf_HasEntryOfPCConfig()                                    (TRUE != FALSE)
#define LinIf_HasFrameLengthDelayListOfPCConfig()                     (TRUE != FALSE)
#define LinIf_HasFrameListOfPCConfig()                                (TRUE != FALSE)
#define LinIf_HasNumberOfSystemChannelsOfPCConfig()                   (TRUE != FALSE)
#define LinIf_HasScheduleTableListIndOfPCConfig()                     (TRUE != FALSE)
#define LinIf_HasScheduleTableListOfPCConfig()                        (TRUE != FALSE)
#define LinIf_HasSizeOfChannelDataOfPCConfig()                        (TRUE != FALSE)
#define LinIf_HasSizeOfChannelIndTableOfPCConfig()                    (TRUE != FALSE)
#define LinIf_HasSystemToLinIfChannelOfPCConfig()                     (TRUE != FALSE)
#define LinIf_HasUncTxFrmTotalNumberOfPCConfig()                      (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  LinIfPCIncrementDataMacros  LinIf Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define LinIf_IncChannelData(Index)                                   LinIf_GetChannelData(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  LinIfPCDecrementDataMacros  LinIf Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define LinIf_DecChannelData(Index)                                   LinIf_GetChannelData(Index)--
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
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
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
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  LinIfPCIterableTypes  LinIf Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate LinIf_ChannelConfig */
typedef uint8_least LinIf_ChannelConfigIterType;

/**   \brief  type used to iterate LinIf_ChannelData */
typedef uint8_least LinIf_ChannelDataIterType;

/**   \brief  type used to iterate LinIf_ChannelIndTable */
typedef uint8_least LinIf_ChannelIndTableIterType;

/**   \brief  type used to iterate LinIf_Entry */
typedef uint8_least LinIf_EntryIterType;

/**   \brief  type used to iterate LinIf_FrameLengthDelayList */
typedef uint8_least LinIf_FrameLengthDelayListIterType;

/**   \brief  type used to iterate LinIf_FrameList */
typedef uint8_least LinIf_FrameListIterType;

/**   \brief  type used to iterate LinIf_ScheduleTableList */
typedef uint8_least LinIf_ScheduleTableListIterType;

/**   \brief  type used to iterate LinIf_ScheduleTableListInd */
typedef uint8_least LinIf_ScheduleTableListIndIterType;

/**   \brief  type used to iterate LinIf_SystemToLinIfChannel */
typedef uint8_least LinIf_SystemToLinIfChannelIterType;

/** 
  \}
*/ 

/** 
  \defgroup  LinIfPCValueTypes  LinIf Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for LinIf_ChannelFuncCallCycleOfChannelConfig */
typedef uint8 LinIf_ChannelFuncCallCycleOfChannelConfigType;

/**   \brief  value based type definition for LinIf_FrameLengthDelayListEndIdxOfChannelConfig */
typedef uint16 LinIf_FrameLengthDelayListEndIdxOfChannelConfigType;

/**   \brief  value based type definition for LinIf_FrameLengthDelayListStartIdxOfChannelConfig */
typedef uint16 LinIf_FrameLengthDelayListStartIdxOfChannelConfigType;

/**   \brief  value based type definition for LinIf_FrameLengthDelayListUsedOfChannelConfig */
typedef boolean LinIf_FrameLengthDelayListUsedOfChannelConfigType;

/**   \brief  value based type definition for LinIf_FrameListEndIdxOfChannelConfig */
typedef uint16 LinIf_FrameListEndIdxOfChannelConfigType;

/**   \brief  value based type definition for LinIf_FrameListStartIdxOfChannelConfig */
typedef uint16 LinIf_FrameListStartIdxOfChannelConfigType;

/**   \brief  value based type definition for LinIf_LoadBalancingOffsetOfChannelConfig */
typedef uint8 LinIf_LoadBalancingOffsetOfChannelConfigType;

/**   \brief  value based type definition for LinIf_ScheduleChangeBeforeSlotEndOfChannelConfig */
typedef boolean LinIf_ScheduleChangeBeforeSlotEndOfChannelConfigType;

/**   \brief  value based type definition for LinIf_ScheduleTableListIndEndIdxOfChannelConfig */
typedef uint16 LinIf_ScheduleTableListIndEndIdxOfChannelConfigType;

/**   \brief  value based type definition for LinIf_ScheduleTableListIndStartIdxOfChannelConfig */
typedef uint16 LinIf_ScheduleTableListIndStartIdxOfChannelConfigType;

/**   \brief  value based type definition for LinIf_StartupStateOfChannelConfig */
typedef uint8 LinIf_StartupStateOfChannelConfigType;

/**   \brief  value based type definition for LinIf_TimeBaseOfChannelConfig */
typedef uint8 LinIf_TimeBaseOfChannelConfigType;

/**   \brief  value based type definition for LinIf_WakeupDelayExternalOfChannelConfig */
typedef uint8 LinIf_WakeupDelayExternalOfChannelConfigType;

/**   \brief  value based type definition for LinIf_WakeupDelayInternalOfChannelConfig */
typedef uint8 LinIf_WakeupDelayInternalOfChannelConfigType;

/**   \brief  value based type definition for LinIf_LinChannelIndexOfChannelIndTable */
typedef uint8 LinIf_LinChannelIndexOfChannelIndTableType;

/**   \brief  value based type definition for LinIf_SystemChannelIndexOfChannelIndTable */
typedef uint8 LinIf_SystemChannelIndexOfChannelIndTableType;

/**   \brief  value based type definition for LinIf_DelayInTimebaseTicksOfEntry */
typedef uint8 LinIf_DelayInTimebaseTicksOfEntryType;

/**   \brief  value based type definition for LinIf_FrameListIdxOfEntry */
typedef uint16 LinIf_FrameListIdxOfEntryType;

/**   \brief  value based type definition for LinIf_FrameLengthDelayOfFrameLengthDelayList */
typedef uint8 LinIf_FrameLengthDelayOfFrameLengthDelayListType;

/**   \brief  value based type definition for LinIf_ChecksumTypeOfFrameList */
typedef uint8 LinIf_ChecksumTypeOfFrameListType;

/**   \brief  value based type definition for LinIf_DirectionOfFrameList */
typedef uint8 LinIf_DirectionOfFrameListType;

/**   \brief  value based type definition for LinIf_FrameTypeOfFrameList */
typedef uint8 LinIf_FrameTypeOfFrameListType;

/**   \brief  value based type definition for LinIf_LengthOfFrameList */
typedef uint8 LinIf_LengthOfFrameListType;

/**   \brief  value based type definition for LinIf_PduIdOfFrameList */
typedef PduIdType LinIf_PduIdOfFrameListType;

/**   \brief  value based type definition for LinIf_PidOfFrameList */
typedef uint8 LinIf_PidOfFrameListType;

/**   \brief  value based type definition for LinIf_NumberOfSystemChannels */
typedef uint8 LinIf_NumberOfSystemChannelsType;

/**   \brief  value based type definition for LinIf_EntryEndIdxOfScheduleTableList */
typedef uint16 LinIf_EntryEndIdxOfScheduleTableListType;

/**   \brief  value based type definition for LinIf_EntryStartIdxOfScheduleTableList */
typedef uint16 LinIf_EntryStartIdxOfScheduleTableListType;

/**   \brief  value based type definition for LinIf_EntryUsedOfScheduleTableList */
typedef boolean LinIf_EntryUsedOfScheduleTableListType;

/**   \brief  value based type definition for LinIf_NumberOfScheduleEntriesOfScheduleTableList */
typedef uint8 LinIf_NumberOfScheduleEntriesOfScheduleTableListType;

/**   \brief  value based type definition for LinIf_ResumePositionOfScheduleTableList */
typedef uint8 LinIf_ResumePositionOfScheduleTableListType;

/**   \brief  value based type definition for LinIf_RunModeOfScheduleTableList */
typedef uint8 LinIf_RunModeOfScheduleTableListType;

/**   \brief  value based type definition for LinIf_ScheduleTableListInd */
typedef uint16 LinIf_ScheduleTableListIndType;

/**   \brief  value based type definition for LinIf_SizeOfChannelData */
typedef uint16 LinIf_SizeOfChannelDataType;

/**   \brief  value based type definition for LinIf_SizeOfChannelIndTable */
typedef uint16 LinIf_SizeOfChannelIndTableType;

/**   \brief  value based type definition for LinIf_LinIfChannelIndexOfSystemToLinIfChannel */
typedef uint8 LinIf_LinIfChannelIndexOfSystemToLinIfChannelType;

/**   \brief  value based type definition for LinIf_UncTxFrmTotalNumber */
typedef uint8 LinIf_UncTxFrmTotalNumberType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  LinIfPCStructTypes  LinIf Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in LinIf_ChannelConfig */
typedef struct sLinIf_ChannelConfigType
{
  LinIf_FrameLengthDelayListEndIdxOfChannelConfigType FrameLengthDelayListEndIdxOfChannelConfig;  /**< the end index of the 0:n relation pointing to LinIf_FrameLengthDelayList */
  LinIf_FrameLengthDelayListStartIdxOfChannelConfigType FrameLengthDelayListStartIdxOfChannelConfig;  /**< the start index of the 0:n relation pointing to LinIf_FrameLengthDelayList */
  LinIf_FrameListEndIdxOfChannelConfigType FrameListEndIdxOfChannelConfig;  /**< the end index of the 1:n relation pointing to LinIf_FrameList */
  LinIf_FrameListStartIdxOfChannelConfigType FrameListStartIdxOfChannelConfig;  /**< the start index of the 1:n relation pointing to LinIf_FrameList */
  LinIf_ScheduleTableListIndEndIdxOfChannelConfigType ScheduleTableListIndEndIdxOfChannelConfig;  /**< the end index of the 1:n relation pointing to LinIf_ScheduleTableListInd */
  LinIf_ScheduleTableListIndStartIdxOfChannelConfigType ScheduleTableListIndStartIdxOfChannelConfig;  /**< the start index of the 1:n relation pointing to LinIf_ScheduleTableListInd */
  LinIf_ScheduleChangeBeforeSlotEndOfChannelConfigType ScheduleChangeBeforeSlotEndOfChannelConfig;  /**< Point of schedule table change. True = after maximum frame time, False = at end of schedule slot. */
  LinIf_ChannelFuncCallCycleOfChannelConfigType ChannelFuncCallCycleOfChannelConfig;  /**< Channel function call cycle */
  LinIf_LoadBalancingOffsetOfChannelConfigType LoadBalancingOffsetOfChannelConfig;  /**< Load balancing offset in ticks */
  LinIf_StartupStateOfChannelConfigType StartupStateOfChannelConfig;  /**< Startup state of channel: 0 : sleep 1 : operational state */
  LinIf_TimeBaseOfChannelConfigType TimeBaseOfChannelConfig;  /**< Channel time base */
  LinIf_WakeupDelayExternalOfChannelConfigType WakeupDelayExternalOfChannelConfig;  /**< External wakeup delay in ticks */
  LinIf_WakeupDelayInternalOfChannelConfigType WakeupDelayInternalOfChannelConfig;  /**< Internal wakeup delay in ticks */
  LinIf_SchHandleType NumberOfSchedulesOfChannelConfig;  /**< Number of schedule tables */
} LinIf_ChannelConfigType;

/**   \brief  type used in LinIf_ChannelIndTable */
typedef struct sLinIf_ChannelIndTableType
{
  LinIf_LinChannelIndexOfChannelIndTableType LinChannelIndexOfChannelIndTable;
  LinIf_SystemChannelIndexOfChannelIndTableType SystemChannelIndexOfChannelIndTable;
} LinIf_ChannelIndTableType;

/**   \brief  type used in LinIf_Entry */
typedef struct sLinIf_EntryType
{
  LinIf_FrameListIdxOfEntryType FrameListIdxOfEntry;  /**< the index of the 1:1 relation pointing to LinIf_FrameList */
  LinIf_DelayInTimebaseTicksOfEntryType DelayInTimebaseTicksOfEntry;
} LinIf_EntryType;

/**   \brief  type used in LinIf_FrameLengthDelayList */
typedef struct sLinIf_FrameLengthDelayListType
{
  LinIf_FrameLengthDelayOfFrameLengthDelayListType FrameLengthDelayOfFrameLengthDelayList;
} LinIf_FrameLengthDelayListType;

/**   \brief  type used in LinIf_FrameList */
typedef struct sLinIf_FrameListType
{
  LinIf_PduIdOfFrameListType PduIdOfFrameList;  /**< Upper layer PduId */
  LinIf_ChecksumTypeOfFrameListType ChecksumTypeOfFrameList;  /**< CLASSIC ENHANCED */
  LinIf_DirectionOfFrameListType DirectionOfFrameList;  /**< TX RX S2S */
  LinIf_FrameTypeOfFrameListType FrameTypeOfFrameList;  /**< UNCONDITIONAL : 0 MRF : 1 SRF : 2 EVENT_TRIGGERED : 4 SPORADIC : 5 ASSIGN : 6 UNASSIGN : 7 ASSIGN_NAD : 8 FREE : 9 CONDITIONAL : 10 ASSIGN_FRAME_ID_RANGE : 11 SAVE_CONFIGURATION : 12 */
  LinIf_LengthOfFrameListType LengthOfFrameList;  /**< Frame length in bytes */
  LinIf_PidOfFrameListType PidOfFrameList;  /**< Protected Identifier */
} LinIf_FrameListType;

/**   \brief  type used in LinIf_ScheduleTableList */
typedef struct sLinIf_ScheduleTableListType
{
  LinIf_EntryEndIdxOfScheduleTableListType EntryEndIdxOfScheduleTableList;  /**< the end index of the 0:n relation pointing to LinIf_Entry */
  LinIf_EntryStartIdxOfScheduleTableListType EntryStartIdxOfScheduleTableList;  /**< the start index of the 0:n relation pointing to LinIf_Entry */
  LinIf_NumberOfScheduleEntriesOfScheduleTableListType NumberOfScheduleEntriesOfScheduleTableList;  /**< number of entries */
  LinIf_ResumePositionOfScheduleTableListType ResumePositionOfScheduleTableList;  /**< CONTINUE_AT_IT_POINT : 0 START_FROM_BEGINNING : 1 */
  LinIf_RunModeOfScheduleTableListType RunModeOfScheduleTableList;  /**< RUN_CONTINUOUS : 0 RUN_ONCE : 1 */
} LinIf_ScheduleTableListType;

/**   \brief  type used in LinIf_SystemToLinIfChannel */
typedef struct sLinIf_SystemToLinIfChannelType
{
  LinIf_LinIfChannelIndexOfSystemToLinIfChannelType LinIfChannelIndexOfSystemToLinIfChannel;
} LinIf_SystemToLinIfChannelType;

/** 
  \}
*/ 

/** 
  \defgroup  LinIfPCRootValueTypes  LinIf Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in LinIf_PCConfig */
typedef struct sLinIf_PCConfigType
{
  uint8 LinIf_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} LinIf_PCConfigType;

typedef LinIf_PCConfigType LinIf_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
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
extern CONST(LinIf_ChannelConfigType, LINIF_CONST) LinIf_ChannelConfig[5];
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
extern CONST(LinIf_ChannelIndTableType, LINIF_CONST) LinIf_ChannelIndTable[5];
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
extern CONST(LinIf_EntryType, LINIF_CONST) LinIf_Entry[153];
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
extern CONST(LinIf_FrameLengthDelayListType, LINIF_CONST) LinIf_FrameLengthDelayList[40];
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
extern CONST(LinIf_FrameListType, LINIF_CONST) LinIf_FrameList[61];
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
extern CONST(LinIf_ScheduleTableListType, LINIF_CONST) LinIf_ScheduleTableList[33];
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
extern CONST(LinIf_ScheduleTableListIndType, LINIF_CONST) LinIf_ScheduleTableListInd[33];
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
extern CONST(LinIf_SystemToLinIfChannelType, LINIF_CONST) LinIf_SystemToLinIfChannel[10];
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
extern VAR(LinIf_ChannelDataType, LINIF_VAR_NOINIT) LinIf_ChannelData[5];  /* Data structure per LinIf channel */
#define LINIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/






/**********************************************************************************************************************
 *  LinIf User Config File
 *********************************************************************************************************************/


#endif


