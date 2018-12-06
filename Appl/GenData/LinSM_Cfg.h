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
 *            Module: LinSM
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: LinSM_Cfg.h
 *   Generation Time: 2018-11-27 18:44:40
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



#if !defined (LINSM_CFG_H)
# define LINSM_CFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_CSL_0779 */

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "LinSM_PBcfg.h"

/**********************************************************************************************************************
    Pre-Compile Options
**********************************************************************************************************************/
#define LINSM_VERSION_INFO_API           STD_OFF
#define LINSM_SCHEDULE_END_NOTIFICATION  STD_OFF

/**********************************************************************************************************************
    General Defines
**********************************************************************************************************************/
#ifndef LINSM_DEV_ERROR_DETECT
#define LINSM_DEV_ERROR_DETECT STD_OFF
#endif
#ifndef LINSM_DEV_ERROR_REPORT
#define LINSM_DEV_ERROR_REPORT STD_OFF
#endif
#ifndef LINSM_USE_DUMMY_FUNCTIONS
#define LINSM_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef LINSM_USE_DUMMY_STATEMENT
#define LINSM_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef LINSM_DUMMY_STATEMENT
#define LINSM_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef LINSM_DUMMY_STATEMENT_CONST
#define LINSM_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef LINSM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define LINSM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef LINSM_ATOMIC_VARIABLE_ACCESS
#define LINSM_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef LINSM_PROCESSOR_MPC5746C
#define LINSM_PROCESSOR_MPC5746C
#endif
#ifndef LINSM_COMP_DIAB
#define LINSM_COMP_DIAB
#endif
#ifndef LINSM_GEN_GENERATOR_MSR
#define LINSM_GEN_GENERATOR_MSR
#endif
#ifndef LINSM_CPUTYPE_BITORDER_MSB2LSB
#define LINSM_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef LINSM_CONFIGURATION_VARIANT_PRECOMPILE
#define LINSM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef LINSM_CONFIGURATION_VARIANT_LINKTIME
#define LINSM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef LINSM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define LINSM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef LINSM_CONFIGURATION_VARIANT
#define LINSM_CONFIGURATION_VARIANT LINSM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef LINSM_POSTBUILD_VARIANT_SUPPORT
#define LINSM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/**********************************************************************************************************************
    Symbolic Name Values
**********************************************************************************************************************/
 /*  Schedule table Handle IDs  */ 


/**
 * \defgroup LinSMHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define LinSMConf_LinSMSchedule_CHNL_8e3d5be2_a66eb9f7              0
#define LinSMConf_LinSMSchedule_CHNL_08a9294c_f4be7c2c              0
#define LinSMConf_LinSMSchedule_CHNL_45618847_32a17f26              0
#define LinSMConf_LinSMSchedule_CHNL_c3f5fae9_fb3b3248              0
#define LinSMConf_LinSMSchedule_CHNL_def0ca51_faa54df8              0
#define LinSMConf_LinSMSchedule_MasterReq_SlaveResp_03d8aeb9        1
#define LinSMConf_LinSMSchedule_MasterReq_SlaveResp_294c3867        1
#define LinSMConf_LinSMSchedule_MasterReq_SlaveResp_1692e5d6        1
#define LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table0_9e3481d6 2
#define LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_1_2a158a89 2
#define LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_1_479379d3 2
#define LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_1_631128e5 2
#define LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_1_b81cce51 2
#define LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_2_21159feb 3
#define LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_2_b31cdb33 3
#define LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_2_de9a2869 3
#define LinSMConf_LinSMSchedule_MasterReq_SlaveResp_Table_2_fa18795f 3
#define LinSMConf_LinSMSchedule_MasterReq_SlaveResp_e4c5082e        1
#define LinSMConf_LinSMSchedule_MasterReq_SlaveResp_f18f4341        1
#define LinSMConf_LinSMSchedule_Table0_df24d2a0                     3
#define LinSMConf_LinSMSchedule_Table_1_2abffe93                    4
#define LinSMConf_LinSMSchedule_Table_1_56dedb48                    4
#define LinSMConf_LinSMSchedule_Table_1_33137188                    4
#define LinSMConf_LinSMSchedule_Table_1_cbd13a3e                    4
#define LinSMConf_LinSMSchedule_Table_2_52d86b84                    5
#define LinSMConf_LinSMSchedule_Table_2_aa1a2032                    5
#define LinSMConf_LinSMSchedule_Table_2_b3b6af29                    5
#define LinSMConf_LinSMSchedule_Table_2_cfd78af2                    5
#define LinSMConf_LinSMSchedule_Table_e_3ad84ea5                    6
#define LinSMConf_LinSMSchedule_Table_e_5f15e465                    6
#define LinSMConf_LinSMSchedule_Table_e_46b96b7e                    6
#define LinSMConf_LinSMSchedule_Table_e_a7d7afd3                    6
#define LinSMConf_LinSMSchedule_Table_e_dbb68a08                    4
/**\} */


/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  LinSMPCDataSwitches  LinSM Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define LINSM_CHANNELCONFIG                                           STD_ON
#define LINSM_COMMCHANNELHANDLEOFCHANNELCONFIG                        STD_ON
#define LINSM_CONFIRMATIONTIMEOUTOFCHANNELCONFIG                      STD_ON
#define LINSM_SLEEPSUPPORTOFCHANNELCONFIG                             STD_ON
#define LINSM_TRANSCEIVERHANDLINGOFCHANNELCONFIG                      STD_OFF  /**< Deactivateable: 'LinSM_ChannelConfig.TransceiverHandling' Reason: 'the value of LinSM_TransceiverHandlingOfChannelConfig is always '0' due to this, the array is deactivated.' */
#define LINSM_CHANNELPOSTBUILDCONFIG                                  STD_OFF  /**< Deactivateable: 'LinSM_ChannelPostBuildConfig' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define LINSM_SCHEDULETABLEIDRANGEOFCHANNELPOSTBUILDCONFIG            STD_OFF  /**< Deactivateable: 'LinSM_ChannelPostBuildConfig.ScheduleTableIdRange' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define LINSM_COMMTOLINSMCHANNEL                                      STD_ON
#define LINSM_COMSTATE                                                STD_ON
#define LINSM_CONFIRMATIONTIMER                                       STD_ON
#define LINSM_FINALMAGICNUMBER                                        STD_OFF  /**< Deactivateable: 'LinSM_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define LINSM_INITDATAHASHCODE                                        STD_OFF  /**< Deactivateable: 'LinSM_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define LINSM_INITIALIZED                                             STD_ON
#define LINSM_MODEREQUESTREPETITIONMAX                                STD_OFF  /**< Deactivateable: 'LinSM_ModeRequestRepetitionMax' Reason: 'the value of LinSM_ModeRequestRepetitionMax is always '0' due to this, the array is deactivated.' */
#define LINSM_NEGATIVECONFIRMATION                                    STD_ON
#define LINSM_REQUESTEDCOMMODE                                        STD_ON
#define LINSM_SIZEOFCHANNELCONFIG                                     STD_ON
#define LINSM_SIZEOFCOMMTOLINSMCHANNEL                                STD_ON
#define LINSM_SIZEOFCOMSTATE                                          STD_ON
#define LINSM_SIZEOFCONFIRMATIONTIMER                                 STD_ON
#define LINSM_SIZEOFNEGATIVECONFIRMATION                              STD_ON
#define LINSM_SIZEOFREQUESTEDCOMMODE                                  STD_ON
#define LINSM_SIZEOFWAKEUPRETRYCOUNTER                                STD_ON
#define LINSM_WAKEUPRETRYCOUNTER                                      STD_ON
#define LINSM_PCCONFIG                                                STD_ON
#define LINSM_CHANNELCONFIGOFPCCONFIG                                 STD_ON
#define LINSM_COMMTOLINSMCHANNELOFPCCONFIG                            STD_ON
#define LINSM_COMSTATEOFPCCONFIG                                      STD_ON
#define LINSM_CONFIRMATIONTIMEROFPCCONFIG                             STD_ON
#define LINSM_FINALMAGICNUMBEROFPCCONFIG                              STD_OFF  /**< Deactivateable: 'LinSM_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define LINSM_INITDATAHASHCODEOFPCCONFIG                              STD_OFF  /**< Deactivateable: 'LinSM_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define LINSM_INITIALIZEDOFPCCONFIG                                   STD_ON
#define LINSM_MODEREQUESTREPETITIONMAXOFPCCONFIG                      STD_OFF  /**< Deactivateable: 'LinSM_PCConfig.ModeRequestRepetitionMax' Reason: 'the value of LinSM_ModeRequestRepetitionMaxOfPCConfig is always '0' due to this, the array is deactivated.' */
#define LINSM_NEGATIVECONFIRMATIONOFPCCONFIG                          STD_ON
#define LINSM_REQUESTEDCOMMODEOFPCCONFIG                              STD_ON
#define LINSM_SIZEOFCHANNELCONFIGOFPCCONFIG                           STD_ON
#define LINSM_SIZEOFCOMMTOLINSMCHANNELOFPCCONFIG                      STD_ON
#define LINSM_SIZEOFCOMSTATEOFPCCONFIG                                STD_ON
#define LINSM_SIZEOFCONFIRMATIONTIMEROFPCCONFIG                       STD_ON
#define LINSM_SIZEOFNEGATIVECONFIRMATIONOFPCCONFIG                    STD_ON
#define LINSM_SIZEOFREQUESTEDCOMMODEOFPCCONFIG                        STD_ON
#define LINSM_SIZEOFWAKEUPRETRYCOUNTEROFPCCONFIG                      STD_ON
#define LINSM_WAKEUPRETRYCOUNTEROFPCCONFIG                            STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCMinNumericValueDefines  LinSM Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define LINSM_MIN_CONFIRMATIONTIMER                                   0U
#define LINSM_MIN_REQUESTEDCOMMODE                                    0U
#define LINSM_MIN_WAKEUPRETRYCOUNTER                                  0U
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCMaxNumericValueDefines  LinSM Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define LINSM_MAX_CONFIRMATIONTIMER                                   65535U
#define LINSM_MAX_REQUESTEDCOMMODE                                    255U
#define LINSM_MAX_WAKEUPRETRYCOUNTER                                  255U
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCNoReferenceDefines  LinSM No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define LINSM_NO_COMMTOLINSMCHANNEL                                   255U
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCIsReducedToDefineDefines  LinSM Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define LINSM_ISDEF_COMMCHANNELHANDLEOFCHANNELCONFIG                  STD_OFF
#define LINSM_ISDEF_CONFIRMATIONTIMEOUTOFCHANNELCONFIG                STD_ON
#define LINSM_ISDEF_SLEEPSUPPORTOFCHANNELCONFIG                       STD_ON
#define LINSM_ISDEF_COMMTOLINSMCHANNEL                                STD_OFF
#define LINSM_ISDEF_CHANNELCONFIGOFPCCONFIG                           STD_ON
#define LINSM_ISDEF_COMMTOLINSMCHANNELOFPCCONFIG                      STD_ON
#define LINSM_ISDEF_COMSTATEOFPCCONFIG                                STD_ON
#define LINSM_ISDEF_CONFIRMATIONTIMEROFPCCONFIG                       STD_ON
#define LINSM_ISDEF_INITIALIZEDOFPCCONFIG                             STD_ON
#define LINSM_ISDEF_NEGATIVECONFIRMATIONOFPCCONFIG                    STD_ON
#define LINSM_ISDEF_REQUESTEDCOMMODEOFPCCONFIG                        STD_ON
#define LINSM_ISDEF_WAKEUPRETRYCOUNTEROFPCCONFIG                      STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCEqualsAlwaysToDefines  LinSM Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define LINSM_EQ2_COMMCHANNELHANDLEOFCHANNELCONFIG                    
#define LINSM_EQ2_CONFIRMATIONTIMEOUTOFCHANNELCONFIG                  100U
#define LINSM_EQ2_SLEEPSUPPORTOFCHANNELCONFIG                         TRUE
#define LINSM_EQ2_COMMTOLINSMCHANNEL                                  
#define LINSM_EQ2_CHANNELCONFIGOFPCCONFIG                             LinSM_ChannelConfig
#define LINSM_EQ2_COMMTOLINSMCHANNELOFPCCONFIG                        LinSM_ComMToLinSMChannel
#define LINSM_EQ2_COMSTATEOFPCCONFIG                                  LinSM_ComState.raw
#define LINSM_EQ2_CONFIRMATIONTIMEROFPCCONFIG                         LinSM_ConfirmationTimer.raw
#define LINSM_EQ2_INITIALIZEDOFPCCONFIG                               LinSM_Initialized
#define LINSM_EQ2_NEGATIVECONFIRMATIONOFPCCONFIG                      LinSM_NegativeConfirmation.raw
#define LINSM_EQ2_REQUESTEDCOMMODEOFPCCONFIG                          LinSM_RequestedComMode.raw
#define LINSM_EQ2_WAKEUPRETRYCOUNTEROFPCCONFIG                        LinSM_WakeUpRetryCounter.raw
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCSymbolicInitializationPointers  LinSM Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define LinSM_Config_Ptr                                              NULL_PTR  /**< symbolic identifier which shall be used to initialize 'LinSM' */
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCInitializationSymbols  LinSM Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define LinSM_Config                                                  NULL_PTR  /**< symbolic identifier which could be used to initialize 'LinSM */
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCGeneral  LinSM General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define LINSM_CHECK_INIT_POINTER                                      STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define LINSM_FINAL_MAGIC_NUMBER                                      0x8D1EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of LinSM */
#define LINSM_INDIVIDUAL_POSTBUILD                                    STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'LinSM' is not configured to be postbuild capable. */
#define LINSM_INIT_DATA                                               LINSM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define LINSM_INIT_DATA_HASH_CODE                                     -1582901040L  /**< the precompile constant to validate the initialization structure at initialization time of LinSM with a hashcode. The seed value is '0x8D1EU' */
#define LINSM_USE_ECUM_BSW_ERROR_HOOK                                 STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define LINSM_USE_INIT_POINTER                                        STD_OFF  /**< STD_ON if the init pointer LinSM shall be used. */
/** 
  \}
*/ 



#define LINSM_MAIN_FUNCTION_PERIOD  10U

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
  \defgroup  LinSMPCGetConstantDuplicatedRootDataMacros  LinSM Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define LinSM_GetChannelConfigOfPCConfig()                            LinSM_ChannelConfig  /**< the pointer to LinSM_ChannelConfig */
#define LinSM_GetComMToLinSMChannelOfPCConfig()                       LinSM_ComMToLinSMChannel  /**< the pointer to LinSM_ComMToLinSMChannel */
#define LinSM_GetComStateOfPCConfig()                                 LinSM_ComState.raw  /**< the pointer to LinSM_ComState */
#define LinSM_GetConfirmationTimerOfPCConfig()                        LinSM_ConfirmationTimer.raw  /**< the pointer to LinSM_ConfirmationTimer */
#define LinSM_GetInitializedOfPCConfig()                              LinSM_Initialized  /**< the pointer to LinSM_Initialized */
#define LinSM_GetNegativeConfirmationOfPCConfig()                     LinSM_NegativeConfirmation.raw  /**< the pointer to LinSM_NegativeConfirmation */
#define LinSM_GetRequestedComModeOfPCConfig()                         LinSM_RequestedComMode.raw  /**< the pointer to LinSM_RequestedComMode */
#define LinSM_GetSizeOfChannelConfigOfPCConfig()                      5U  /**< the number of accomplishable value elements in LinSM_ChannelConfig */
#define LinSM_GetSizeOfComMToLinSMChannelOfPCConfig()                 10U  /**< the number of accomplishable value elements in LinSM_ComMToLinSMChannel */
#define LinSM_GetWakeUpRetryCounterOfPCConfig()                       LinSM_WakeUpRetryCounter.raw  /**< the pointer to LinSM_WakeUpRetryCounter */
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCGetDuplicatedRootDataMacros  LinSM Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define LinSM_GetSizeOfComStateOfPCConfig()                           LinSM_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in LinSM_ComState */
#define LinSM_GetSizeOfConfirmationTimerOfPCConfig()                  LinSM_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in LinSM_ConfirmationTimer */
#define LinSM_GetSizeOfNegativeConfirmationOfPCConfig()               LinSM_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in LinSM_NegativeConfirmation */
#define LinSM_GetSizeOfRequestedComModeOfPCConfig()                   LinSM_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in LinSM_RequestedComMode */
#define LinSM_GetSizeOfWakeUpRetryCounterOfPCConfig()                 LinSM_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in LinSM_WakeUpRetryCounter */
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCGetDataMacros  LinSM Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define LinSM_GetComMChannelHandleOfChannelConfig(Index)              ((NetworkHandleType)LinSM_GetChannelConfigOfPCConfig()[(Index)].ComMChannelHandleOfChannelConfig)
#define LinSM_GetComMToLinSMChannel(Index)                            (LinSM_GetComMToLinSMChannelOfPCConfig()[(Index)])
#define LinSM_GetComState(Index)                                      (LinSM_GetComStateOfPCConfig()[(Index)])
#define LinSM_GetConfirmationTimer(Index)                             (LinSM_GetConfirmationTimerOfPCConfig()[(Index)])
#define LinSM_IsInitialized()                                         ((LinSM_GetInitializedOfPCConfig()) != FALSE)
#define LinSM_IsNegativeConfirmation(Index)                           ((LinSM_GetNegativeConfirmationOfPCConfig()[(Index)]) != FALSE)
#define LinSM_GetRequestedComMode(Index)                              (LinSM_GetRequestedComModeOfPCConfig()[(Index)])
#define LinSM_GetWakeUpRetryCounter(Index)                            (LinSM_GetWakeUpRetryCounterOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCGetDeduplicatedDataMacros  LinSM Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define LinSM_GetConfirmationTimeoutOfChannelConfig(Index)            100U
#define LinSM_IsSleepSupportOfChannelConfig(Index)                    (((TRUE)) != FALSE)
#define LinSM_GetSizeOfChannelConfig()                                LinSM_GetSizeOfChannelConfigOfPCConfig()
#define LinSM_GetSizeOfComMToLinSMChannel()                           LinSM_GetSizeOfComMToLinSMChannelOfPCConfig()
#define LinSM_GetSizeOfComState()                                     LinSM_GetSizeOfComStateOfPCConfig()
#define LinSM_GetSizeOfConfirmationTimer()                            LinSM_GetSizeOfConfirmationTimerOfPCConfig()
#define LinSM_GetSizeOfNegativeConfirmation()                         LinSM_GetSizeOfNegativeConfirmationOfPCConfig()
#define LinSM_GetSizeOfRequestedComMode()                             LinSM_GetSizeOfRequestedComModeOfPCConfig()
#define LinSM_GetSizeOfWakeUpRetryCounter()                           LinSM_GetSizeOfWakeUpRetryCounterOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCSetDataMacros  LinSM Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define LinSM_SetComState(Index, Value)                               LinSM_GetComStateOfPCConfig()[(Index)] = (Value)
#define LinSM_SetConfirmationTimer(Index, Value)                      LinSM_GetConfirmationTimerOfPCConfig()[(Index)] = (Value)
#define LinSM_SetInitialized(Value)                                   LinSM_GetInitializedOfPCConfig() = (Value)
#define LinSM_SetNegativeConfirmation(Index, Value)                   LinSM_GetNegativeConfirmationOfPCConfig()[(Index)] = (Value)
#define LinSM_SetRequestedComMode(Index, Value)                       LinSM_GetRequestedComModeOfPCConfig()[(Index)] = (Value)
#define LinSM_SetWakeUpRetryCounter(Index, Value)                     LinSM_GetWakeUpRetryCounterOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCGetAddressOfDataMacros  LinSM Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define LinSM_GetAddrComState(Index)                                  &LinSM_GetComState(Index)
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCHasMacros  LinSM Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define LinSM_HasChannelConfig()                                      (TRUE != FALSE)
#define LinSM_HasComMChannelHandleOfChannelConfig()                   (TRUE != FALSE)
#define LinSM_HasConfirmationTimeoutOfChannelConfig()                 (TRUE != FALSE)
#define LinSM_HasSleepSupportOfChannelConfig()                        (TRUE != FALSE)
#define LinSM_HasComMToLinSMChannel()                                 (TRUE != FALSE)
#define LinSM_HasComState()                                           (TRUE != FALSE)
#define LinSM_HasConfirmationTimer()                                  (TRUE != FALSE)
#define LinSM_HasInitialized()                                        (TRUE != FALSE)
#define LinSM_HasNegativeConfirmation()                               (TRUE != FALSE)
#define LinSM_HasRequestedComMode()                                   (TRUE != FALSE)
#define LinSM_HasSizeOfChannelConfig()                                (TRUE != FALSE)
#define LinSM_HasSizeOfComMToLinSMChannel()                           (TRUE != FALSE)
#define LinSM_HasSizeOfComState()                                     (TRUE != FALSE)
#define LinSM_HasSizeOfConfirmationTimer()                            (TRUE != FALSE)
#define LinSM_HasSizeOfNegativeConfirmation()                         (TRUE != FALSE)
#define LinSM_HasSizeOfRequestedComMode()                             (TRUE != FALSE)
#define LinSM_HasSizeOfWakeUpRetryCounter()                           (TRUE != FALSE)
#define LinSM_HasWakeUpRetryCounter()                                 (TRUE != FALSE)
#define LinSM_HasPCConfig()                                           (TRUE != FALSE)
#define LinSM_HasChannelConfigOfPCConfig()                            (TRUE != FALSE)
#define LinSM_HasComMToLinSMChannelOfPCConfig()                       (TRUE != FALSE)
#define LinSM_HasComStateOfPCConfig()                                 (TRUE != FALSE)
#define LinSM_HasConfirmationTimerOfPCConfig()                        (TRUE != FALSE)
#define LinSM_HasInitializedOfPCConfig()                              (TRUE != FALSE)
#define LinSM_HasNegativeConfirmationOfPCConfig()                     (TRUE != FALSE)
#define LinSM_HasRequestedComModeOfPCConfig()                         (TRUE != FALSE)
#define LinSM_HasSizeOfChannelConfigOfPCConfig()                      (TRUE != FALSE)
#define LinSM_HasSizeOfComMToLinSMChannelOfPCConfig()                 (TRUE != FALSE)
#define LinSM_HasSizeOfComStateOfPCConfig()                           (TRUE != FALSE)
#define LinSM_HasSizeOfConfirmationTimerOfPCConfig()                  (TRUE != FALSE)
#define LinSM_HasSizeOfNegativeConfirmationOfPCConfig()               (TRUE != FALSE)
#define LinSM_HasSizeOfRequestedComModeOfPCConfig()                   (TRUE != FALSE)
#define LinSM_HasSizeOfWakeUpRetryCounterOfPCConfig()                 (TRUE != FALSE)
#define LinSM_HasWakeUpRetryCounterOfPCConfig()                       (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCIncrementDataMacros  LinSM Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define LinSM_IncComState(Index)                                      LinSM_GetComState(Index)++
#define LinSM_IncConfirmationTimer(Index)                             LinSM_GetConfirmationTimer(Index)++
#define LinSM_IncRequestedComMode(Index)                              LinSM_GetRequestedComMode(Index)++
#define LinSM_IncWakeUpRetryCounter(Index)                            LinSM_GetWakeUpRetryCounter(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCDecrementDataMacros  LinSM Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define LinSM_DecComState(Index)                                      LinSM_GetComState(Index)--
#define LinSM_DecConfirmationTimer(Index)                             LinSM_GetConfirmationTimer(Index)--
#define LinSM_DecRequestedComMode(Index)                              LinSM_GetRequestedComMode(Index)--
#define LinSM_DecWakeUpRetryCounter(Index)                            LinSM_GetWakeUpRetryCounter(Index)--
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


/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  LinSMPCIterableTypes  LinSM Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate LinSM_ChannelConfig */
typedef uint8_least LinSM_ChannelConfigIterType;

/**   \brief  type used to iterate LinSM_ComMToLinSMChannel */
typedef uint8_least LinSM_ComMToLinSMChannelIterType;

/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCIterableTypesWithSizeRelations  LinSM Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate LinSM_ComState */
typedef LinSM_ChannelConfigIterType LinSM_ComStateIterType;

/**   \brief  type used to iterate LinSM_ConfirmationTimer */
typedef LinSM_ChannelConfigIterType LinSM_ConfirmationTimerIterType;

/**   \brief  type used to iterate LinSM_NegativeConfirmation */
typedef LinSM_ChannelConfigIterType LinSM_NegativeConfirmationIterType;

/**   \brief  type used to iterate LinSM_RequestedComMode */
typedef LinSM_ChannelConfigIterType LinSM_RequestedComModeIterType;

/**   \brief  type used to iterate LinSM_WakeUpRetryCounter */
typedef LinSM_ChannelConfigIterType LinSM_WakeUpRetryCounterIterType;

/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCValueTypes  LinSM Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for LinSM_ComMChannelHandleOfChannelConfig */
typedef uint8 LinSM_ComMChannelHandleOfChannelConfigType;

/**   \brief  value based type definition for LinSM_ConfirmationTimeoutOfChannelConfig */
typedef uint8 LinSM_ConfirmationTimeoutOfChannelConfigType;

/**   \brief  value based type definition for LinSM_SleepSupportOfChannelConfig */
typedef boolean LinSM_SleepSupportOfChannelConfigType;

/**   \brief  value based type definition for LinSM_ComMToLinSMChannel */
typedef uint8 LinSM_ComMToLinSMChannelType;

/**   \brief  value based type definition for LinSM_ConfirmationTimer */
typedef uint16 LinSM_ConfirmationTimerType;

/**   \brief  value based type definition for LinSM_Initialized */
typedef boolean LinSM_InitializedType;

/**   \brief  value based type definition for LinSM_NegativeConfirmation */
typedef boolean LinSM_NegativeConfirmationType;

/**   \brief  value based type definition for LinSM_RequestedComMode */
typedef uint8 LinSM_RequestedComModeType;

/**   \brief  value based type definition for LinSM_SizeOfChannelConfig */
typedef uint8 LinSM_SizeOfChannelConfigType;

/**   \brief  value based type definition for LinSM_SizeOfComMToLinSMChannel */
typedef uint8 LinSM_SizeOfComMToLinSMChannelType;

/**   \brief  value based type definition for LinSM_SizeOfComState */
typedef uint8 LinSM_SizeOfComStateType;

/**   \brief  value based type definition for LinSM_SizeOfConfirmationTimer */
typedef uint8 LinSM_SizeOfConfirmationTimerType;

/**   \brief  value based type definition for LinSM_SizeOfNegativeConfirmation */
typedef uint8 LinSM_SizeOfNegativeConfirmationType;

/**   \brief  value based type definition for LinSM_SizeOfRequestedComMode */
typedef uint8 LinSM_SizeOfRequestedComModeType;

/**   \brief  value based type definition for LinSM_SizeOfWakeUpRetryCounter */
typedef uint8 LinSM_SizeOfWakeUpRetryCounterType;

/**   \brief  value based type definition for LinSM_WakeUpRetryCounter */
typedef uint8 LinSM_WakeUpRetryCounterType;

/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCStructTypes  LinSM Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in LinSM_ChannelConfig */
typedef struct sLinSM_ChannelConfigType
{
  LinSM_ComMChannelHandleOfChannelConfigType ComMChannelHandleOfChannelConfig;
} LinSM_ChannelConfigType;

/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCSymbolicStructTypes  LinSM Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to LinSM_ComState */
typedef struct sLinSM_ComStateStructTag
{
  ComM_ModeType CHNL_45618847[1];
  ComM_ModeType CHNL_8e3d5be2[1];
  ComM_ModeType CHNL_def0ca51[1];
  ComM_ModeType CHNL_08a9294c[1];
  ComM_ModeType CHNL_c3f5fae9[1];
} sLinSM_ComStateStructType;

/**   \brief  type to be used as symbolic data element access to LinSM_ConfirmationTimer */
typedef struct sLinSM_ConfirmationTimerStructTag
{
  LinSM_ConfirmationTimerType CHNL_45618847[1];
  LinSM_ConfirmationTimerType CHNL_8e3d5be2[1];
  LinSM_ConfirmationTimerType CHNL_def0ca51[1];
  LinSM_ConfirmationTimerType CHNL_08a9294c[1];
  LinSM_ConfirmationTimerType CHNL_c3f5fae9[1];
} sLinSM_ConfirmationTimerStructType;

/**   \brief  type to be used as symbolic data element access to LinSM_NegativeConfirmation */
typedef struct sLinSM_NegativeConfirmationStructTag
{
  LinSM_NegativeConfirmationType CHNL_45618847[1];
  LinSM_NegativeConfirmationType CHNL_8e3d5be2[1];
  LinSM_NegativeConfirmationType CHNL_def0ca51[1];
  LinSM_NegativeConfirmationType CHNL_08a9294c[1];
  LinSM_NegativeConfirmationType CHNL_c3f5fae9[1];
} sLinSM_NegativeConfirmationStructType;

/**   \brief  type to be used as symbolic data element access to LinSM_RequestedComMode */
typedef struct sLinSM_RequestedComModeStructTag
{
  LinSM_RequestedComModeType CHNL_45618847[1];
  LinSM_RequestedComModeType CHNL_8e3d5be2[1];
  LinSM_RequestedComModeType CHNL_def0ca51[1];
  LinSM_RequestedComModeType CHNL_08a9294c[1];
  LinSM_RequestedComModeType CHNL_c3f5fae9[1];
} sLinSM_RequestedComModeStructType;

/**   \brief  type to be used as symbolic data element access to LinSM_WakeUpRetryCounter */
typedef struct sLinSM_WakeUpRetryCounterStructTag
{
  LinSM_WakeUpRetryCounterType CHNL_45618847[1];
  LinSM_WakeUpRetryCounterType CHNL_8e3d5be2[1];
  LinSM_WakeUpRetryCounterType CHNL_def0ca51[1];
  LinSM_WakeUpRetryCounterType CHNL_08a9294c[1];
  LinSM_WakeUpRetryCounterType CHNL_c3f5fae9[1];
} sLinSM_WakeUpRetryCounterStructType;

/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCUnionIndexAndSymbolTypes  LinSM Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access LinSM_ComState in an index and symbol based style. */
typedef union uLinSM_ComStateTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  ComM_ModeType raw[5];
  sLinSM_ComStateStructType str;
} uLinSM_ComStateType;

/**   \brief  type to access LinSM_ConfirmationTimer in an index and symbol based style. */
typedef union uLinSM_ConfirmationTimerTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  LinSM_ConfirmationTimerType raw[5];
  sLinSM_ConfirmationTimerStructType str;
} uLinSM_ConfirmationTimerType;

/**   \brief  type to access LinSM_NegativeConfirmation in an index and symbol based style. */
typedef union uLinSM_NegativeConfirmationTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  LinSM_NegativeConfirmationType raw[5];
  sLinSM_NegativeConfirmationStructType str;
} uLinSM_NegativeConfirmationType;

/**   \brief  type to access LinSM_RequestedComMode in an index and symbol based style. */
typedef union uLinSM_RequestedComModeTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  LinSM_RequestedComModeType raw[5];
  sLinSM_RequestedComModeStructType str;
} uLinSM_RequestedComModeType;

/**   \brief  type to access LinSM_WakeUpRetryCounter in an index and symbol based style. */
typedef union uLinSM_WakeUpRetryCounterTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  LinSM_WakeUpRetryCounterType raw[5];
  sLinSM_WakeUpRetryCounterStructType str;
} uLinSM_WakeUpRetryCounterType;

/** 
  \}
*/ 

/** 
  \defgroup  LinSMPCRootValueTypes  LinSM Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in LinSM_PCConfig */
typedef struct sLinSM_PCConfigType
{
  uint8 LinSM_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} LinSM_PCConfigType;

typedef LinSM_PCConfigType LinSM_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  LinSM_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    LinSM_ChannelConfig
  \details
  Element              Description
  ComMChannelHandle
*/ 
#define LINSM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(LinSM_ChannelConfigType, LINSM_CONST) LinSM_ChannelConfig[5];
#define LINSM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_ComMToLinSMChannel
**********************************************************************************************************************/
#define LINSM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(LinSM_ComMToLinSMChannelType, LINSM_CONST) LinSM_ComMToLinSMChannel[10];
#define LINSM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_ComState
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uLinSM_ComStateType, LINSM_VAR_NOINIT) LinSM_ComState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define LINSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_ConfirmationTimer
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uLinSM_ConfirmationTimerType, LINSM_VAR_NOINIT) LinSM_ConfirmationTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define LINSM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_Initialized
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(LinSM_InitializedType, LINSM_VAR_ZERO_INIT) LinSM_Initialized;
#define LINSM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_NegativeConfirmation
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uLinSM_NegativeConfirmationType, LINSM_VAR_NOINIT) LinSM_NegativeConfirmation;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define LINSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_RequestedComMode
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uLinSM_RequestedComModeType, LINSM_VAR_NOINIT) LinSM_RequestedComMode;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define LINSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinSM_WakeUpRetryCounter
**********************************************************************************************************************/
#define LINSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uLinSM_WakeUpRetryCounterType, LINSM_VAR_NOINIT) LinSM_WakeUpRetryCounter;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define LINSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



#define LINSM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if ( LINSM_USE_INIT_POINTER == STD_ON )
extern P2CONST(LinSM_ConfigType, LINSM_VAR_ZERO_INIT, LINSM_INIT_DATA) LinSM_ConfigDataPtr;
#endif

#define LINSM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/



#endif  /* LINSM_CFG_H */
/**********************************************************************************************************************
  END OF FILE: LinSM_Cfg.h
**********************************************************************************************************************/

