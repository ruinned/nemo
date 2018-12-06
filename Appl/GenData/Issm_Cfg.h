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
 *              File: Issm_Cfg.h
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

#if !defined (ISSM_CFG_H)
# define ISSM_CFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_CSL_0779 */

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Issm_PBcfg.h"
#include "Appl_Cbk.h"
#include "ComM.h"

/**********************************************************************************************************************
    Pre-Compile Options
**********************************************************************************************************************/

#define ISSM_DEV_ERROR_DETECT    STD_ON
#define ISSM_MULTI_CHANNEL       STD_ON

#define ISSM_INSTANCE_ID    1U


/**********************************************************************************************************************
    General Defines
**********************************************************************************************************************/
#ifndef ISSM_USE_DUMMY_FUNCTIONS
#define ISSM_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef ISSM_USE_DUMMY_STATEMENT
#define ISSM_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef ISSM_DUMMY_STATEMENT
#define ISSM_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef ISSM_DUMMY_STATEMENT_CONST
#define ISSM_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef ISSM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define ISSM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef ISSM_ATOMIC_VARIABLE_ACCESS
#define ISSM_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef ISSM_PROCESSOR_MPC5746C
#define ISSM_PROCESSOR_MPC5746C
#endif
#ifndef ISSM_COMP_DIAB
#define ISSM_COMP_DIAB
#endif
#ifndef ISSM_GEN_GENERATOR_MSR
#define ISSM_GEN_GENERATOR_MSR
#endif
#ifndef ISSM_CPUTYPE_BITORDER_MSB2LSB
#define ISSM_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef ISSM_CONFIGURATION_VARIANT_PRECOMPILE
#define ISSM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef ISSM_CONFIGURATION_VARIANT_LINKTIME
#define ISSM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef ISSM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define ISSM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef ISSM_CONFIGURATION_VARIANT
#define ISSM_CONFIGURATION_VARIANT ISSM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef ISSM_POSTBUILD_VARIANT_SUPPORT
#define ISSM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/**********************************************************************************************************************
    Symbolic Name Values
**********************************************************************************************************************/

 /*  User Handle Ids  */ 


/**
 * \defgroup IssmHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define IssmConf_IssmUser_IssmUser                                    0
/**\} */

 /*  ISS Handle Ids  */ 


/**
 * \defgroup IssmHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define IssmConf_IssmIss_IssmIss                                      0
#define IssmConf_IssmIss_IssmIss_001                                  1
#define IssmConf_IssmIss_IssmIss_002                                  2
/**\} */

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  IssmPCDataSwitches  Issm Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define ISSM_ACTIVEISSFIELD                                           STD_ON
#define ISSM_BSWMMODEREQUESTID                                        STD_ON
#define ISSM_BSWMMODEREQUESTNORUN                                     STD_ON
#define ISSM_BSWMMODEREQUESTRUN                                       STD_ON
#define ISSM_CHANNELCONFIG                                            STD_ON
#define ISSM_COMMUSERHANDLEOFCHANNELCONFIG                            STD_ON
#define ISSM_RXSIGNALIDENDIDXOFCHANNELCONFIG                          STD_ON
#define ISSM_RXSIGNALIDSTARTIDXOFCHANNELCONFIG                        STD_ON
#define ISSM_RXSIGNALIDUSEDOFCHANNELCONFIG                            STD_ON
#define ISSM_TXPDUIDOFCHANNELCONFIG                                   STD_OFF  /**< Deactivateable: 'Issm_ChannelConfig.TxPduId' Reason: 'the value of Issm_TxPduIdOfChannelConfig is always 'ISSM_NO_TXPDUIDOFCHANNELCONFIG' due to this, the array is deactivated.' */
#define ISSM_TXSIGNALIDOFCHANNELCONFIG                                STD_ON
#define ISSM_CHANNELPOSTBUILDCONFIG                                   STD_ON
#define ISSM_MAPPEDISSMASKOFCHANNELPOSTBUILDCONFIG                    STD_ON
#define ISSM_ECURUNSTATE                                              STD_ON
#define ISSM_EXTERNALREQUESTFIELD                                     STD_ON
#define ISSM_EXTERNALREQUESTSCHANGED                                  STD_ON
#define ISSM_FINALMAGICNUMBER                                         STD_OFF  /**< Deactivateable: 'Issm_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define ISSM_INITDATAHASHCODE                                         STD_OFF  /**< Deactivateable: 'Issm_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define ISSM_INITIALIZED                                              STD_ON
#define ISSM_INTERNALREQUESTFIELD                                     STD_ON
#define ISSM_INTERNALREQUESTSCHANGED                                  STD_ON
#define ISSM_ISCOMMUNICATIONISSMASK                                   STD_ON
#define ISSM_ISSID                                                    STD_ON
#define ISSM_MINACTIVETIMER                                           STD_ON
#define ISSM_MINISSACTIVATIONTIMEOUT                                  STD_ON
#define ISSM_NETWORKOUTPUTFIELD                                       STD_ON
#define ISSM_NETWORKREQUESTED                                         STD_ON
#define ISSM_OVERALLREQUESTFIELD                                      STD_ON
#define ISSM_RXSIGNALID                                               STD_ON
#define ISSM_RXSIGNALTIMER                                            STD_ON
#define ISSM_SIZEOFCHANNELCONFIG                                      STD_ON
#define ISSM_SIZEOFCHANNELPOSTBUILDCONFIG                             STD_ON
#define ISSM_SIZEOFEXTERNALREQUESTFIELD                               STD_ON
#define ISSM_SIZEOFISCOMMUNICATIONISSMASK                             STD_ON
#define ISSM_SIZEOFISSID                                              STD_ON
#define ISSM_SIZEOFMINACTIVETIMER                                     STD_ON
#define ISSM_SIZEOFNETWORKOUTPUTFIELD                                 STD_ON
#define ISSM_SIZEOFNETWORKREQUESTED                                   STD_ON
#define ISSM_SIZEOFRXSIGNALID                                         STD_ON
#define ISSM_SIZEOFRXSIGNALTIMER                                      STD_ON
#define ISSM_SIZEOFUSERPBCONFIG                                       STD_ON
#define ISSM_SIZEOFUSERREQUESTED                                      STD_ON
#define ISSM_USERHANDLIDTOLOCALUSERID                                 STD_OFF  /**< Deactivateable: 'Issm_UserHandlIdToLocalUserId' Reason: 'Configured User Handle Id is always equal to local Handle Id. No Indirection needed.' */
#define ISSM_USERPBCONFIG                                             STD_ON
#define ISSM_MAPPEDISSMASKOFUSERPBCONFIG                              STD_ON
#define ISSM_USERREQUESTED                                            STD_ON
#define ISSM_PCCONFIG                                                 STD_ON
#define ISSM_ACTIVEISSFIELDOFPCCONFIG                                 STD_ON
#define ISSM_BSWMMODEREQUESTIDOFPCCONFIG                              STD_ON
#define ISSM_BSWMMODEREQUESTNORUNOFPCCONFIG                           STD_ON
#define ISSM_BSWMMODEREQUESTRUNOFPCCONFIG                             STD_ON
#define ISSM_CHANNELCONFIGOFPCCONFIG                                  STD_ON
#define ISSM_CHANNELPOSTBUILDCONFIGOFPCCONFIG                         STD_ON
#define ISSM_ECURUNSTATEOFPCCONFIG                                    STD_ON
#define ISSM_EXTERNALREQUESTFIELDOFPCCONFIG                           STD_ON
#define ISSM_EXTERNALREQUESTSCHANGEDOFPCCONFIG                        STD_ON
#define ISSM_FINALMAGICNUMBEROFPCCONFIG                               STD_OFF  /**< Deactivateable: 'Issm_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define ISSM_INITDATAHASHCODEOFPCCONFIG                               STD_OFF  /**< Deactivateable: 'Issm_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define ISSM_INITIALIZEDOFPCCONFIG                                    STD_ON
#define ISSM_INTERNALREQUESTFIELDOFPCCONFIG                           STD_ON
#define ISSM_INTERNALREQUESTSCHANGEDOFPCCONFIG                        STD_ON
#define ISSM_ISCOMMUNICATIONISSMASKOFPCCONFIG                         STD_ON
#define ISSM_ISSIDOFPCCONFIG                                          STD_ON
#define ISSM_MINACTIVETIMEROFPCCONFIG                                 STD_ON
#define ISSM_MINISSACTIVATIONTIMEOUTOFPCCONFIG                        STD_ON
#define ISSM_NETWORKOUTPUTFIELDOFPCCONFIG                             STD_ON
#define ISSM_NETWORKREQUESTEDOFPCCONFIG                               STD_ON
#define ISSM_OVERALLREQUESTFIELDOFPCCONFIG                            STD_ON
#define ISSM_RXSIGNALIDOFPCCONFIG                                     STD_ON
#define ISSM_RXSIGNALTIMEROFPCCONFIG                                  STD_ON
#define ISSM_SIZEOFCHANNELCONFIGOFPCCONFIG                            STD_ON
#define ISSM_SIZEOFCHANNELPOSTBUILDCONFIGOFPCCONFIG                   STD_ON
#define ISSM_SIZEOFEXTERNALREQUESTFIELDOFPCCONFIG                     STD_ON
#define ISSM_SIZEOFISCOMMUNICATIONISSMASKOFPCCONFIG                   STD_ON
#define ISSM_SIZEOFISSIDOFPCCONFIG                                    STD_ON
#define ISSM_SIZEOFMINACTIVETIMEROFPCCONFIG                           STD_ON
#define ISSM_SIZEOFNETWORKOUTPUTFIELDOFPCCONFIG                       STD_ON
#define ISSM_SIZEOFNETWORKREQUESTEDOFPCCONFIG                         STD_ON
#define ISSM_SIZEOFRXSIGNALIDOFPCCONFIG                               STD_ON
#define ISSM_SIZEOFRXSIGNALTIMEROFPCCONFIG                            STD_ON
#define ISSM_SIZEOFUSERPBCONFIGOFPCCONFIG                             STD_ON
#define ISSM_SIZEOFUSERREQUESTEDOFPCCONFIG                            STD_ON
#define ISSM_USERPBCONFIGOFPCCONFIG                                   STD_ON
#define ISSM_USERREQUESTEDOFPCCONFIG                                  STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCMinNumericValueDefines  Issm Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define ISSM_MIN_ACTIVEISSFIELD                                       0UL
#define ISSM_MIN_ECURUNSTATE                                          0U
#define ISSM_MIN_EXTERNALREQUESTFIELD                                 0UL
#define ISSM_MIN_INTERNALREQUESTFIELD                                 0UL
#define ISSM_MIN_MINACTIVETIMER                                       0U
#define ISSM_MIN_NETWORKOUTPUTFIELD                                   0UL
#define ISSM_MIN_OVERALLREQUESTFIELD                                  0UL
#define ISSM_MIN_RXSIGNALTIMER                                        0U
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCMaxNumericValueDefines  Issm Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define ISSM_MAX_ACTIVEISSFIELD                                       4294967295UL
#define ISSM_MAX_ECURUNSTATE                                          255U
#define ISSM_MAX_EXTERNALREQUESTFIELD                                 4294967295UL
#define ISSM_MAX_INTERNALREQUESTFIELD                                 4294967295UL
#define ISSM_MAX_MINACTIVETIMER                                       65535U
#define ISSM_MAX_NETWORKOUTPUTFIELD                                   4294967295UL
#define ISSM_MAX_OVERALLREQUESTFIELD                                  4294967295UL
#define ISSM_MAX_RXSIGNALTIMER                                        65535U
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCNoReferenceDefines  Issm No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define ISSM_NO_COMMUSERHANDLEOFCHANNELCONFIG                         255U
#define ISSM_NO_RXSIGNALIDENDIDXOFCHANNELCONFIG                       255U
#define ISSM_NO_RXSIGNALIDSTARTIDXOFCHANNELCONFIG                     255U
#define ISSM_NO_TXSIGNALIDOFCHANNELCONFIG                             255U
#define ISSM_NO_MAPPEDISSMASKOFCHANNELPOSTBUILDCONFIG                 255U
#define ISSM_NO_ISCOMMUNICATIONISSMASK                                255U
#define ISSM_NO_ISSID                                                 255U
#define ISSM_NO_RXSIGNALID                                            255U
#define ISSM_NO_MAPPEDISSMASKOFUSERPBCONFIG                           255U
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCIsReducedToDefineDefines  Issm Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define ISSM_ISDEF_COMMUSERHANDLEOFCHANNELCONFIG                      STD_OFF
#define ISSM_ISDEF_RXSIGNALIDENDIDXOFCHANNELCONFIG                    STD_OFF
#define ISSM_ISDEF_RXSIGNALIDSTARTIDXOFCHANNELCONFIG                  STD_OFF
#define ISSM_ISDEF_RXSIGNALIDUSEDOFCHANNELCONFIG                      STD_ON
#define ISSM_ISDEF_TXSIGNALIDOFCHANNELCONFIG                          STD_OFF
#define ISSM_ISDEF_MAPPEDISSMASKOFCHANNELPOSTBUILDCONFIG              STD_OFF
#define ISSM_ISDEF_ISCOMMUNICATIONISSMASK                             STD_ON
#define ISSM_ISDEF_ISSID                                              STD_OFF
#define ISSM_ISDEF_RXSIGNALID                                         STD_OFF
#define ISSM_ISDEF_MAPPEDISSMASKOFUSERPBCONFIG                        STD_ON
#define ISSM_ISDEF_ACTIVEISSFIELDOFPCCONFIG                           STD_ON
#define ISSM_ISDEF_CHANNELCONFIGOFPCCONFIG                            STD_ON
#define ISSM_ISDEF_CHANNELPOSTBUILDCONFIGOFPCCONFIG                   STD_ON
#define ISSM_ISDEF_ECURUNSTATEOFPCCONFIG                              STD_ON
#define ISSM_ISDEF_EXTERNALREQUESTFIELDOFPCCONFIG                     STD_ON
#define ISSM_ISDEF_EXTERNALREQUESTSCHANGEDOFPCCONFIG                  STD_ON
#define ISSM_ISDEF_INITIALIZEDOFPCCONFIG                              STD_ON
#define ISSM_ISDEF_INTERNALREQUESTFIELDOFPCCONFIG                     STD_ON
#define ISSM_ISDEF_INTERNALREQUESTSCHANGEDOFPCCONFIG                  STD_ON
#define ISSM_ISDEF_ISCOMMUNICATIONISSMASKOFPCCONFIG                   STD_ON
#define ISSM_ISDEF_ISSIDOFPCCONFIG                                    STD_ON
#define ISSM_ISDEF_MINACTIVETIMEROFPCCONFIG                           STD_ON
#define ISSM_ISDEF_NETWORKOUTPUTFIELDOFPCCONFIG                       STD_ON
#define ISSM_ISDEF_NETWORKREQUESTEDOFPCCONFIG                         STD_ON
#define ISSM_ISDEF_OVERALLREQUESTFIELDOFPCCONFIG                      STD_ON
#define ISSM_ISDEF_RXSIGNALIDOFPCCONFIG                               STD_ON
#define ISSM_ISDEF_RXSIGNALTIMEROFPCCONFIG                            STD_ON
#define ISSM_ISDEF_USERPBCONFIGOFPCCONFIG                             STD_ON
#define ISSM_ISDEF_USERREQUESTEDOFPCCONFIG                            STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCEqualsAlwaysToDefines  Issm Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define ISSM_EQ2_COMMUSERHANDLEOFCHANNELCONFIG                        
#define ISSM_EQ2_RXSIGNALIDENDIDXOFCHANNELCONFIG                      
#define ISSM_EQ2_RXSIGNALIDSTARTIDXOFCHANNELCONFIG                    
#define ISSM_EQ2_RXSIGNALIDUSEDOFCHANNELCONFIG                        TRUE
#define ISSM_EQ2_TXSIGNALIDOFCHANNELCONFIG                            
#define ISSM_EQ2_MAPPEDISSMASKOFCHANNELPOSTBUILDCONFIG                
#define ISSM_EQ2_ISCOMMUNICATIONISSMASK                               0x00000006UL
#define ISSM_EQ2_ISSID                                                
#define ISSM_EQ2_RXSIGNALID                                           
#define ISSM_EQ2_MAPPEDISSMASKOFUSERPBCONFIG                          0x00000007UL
#define ISSM_EQ2_ACTIVEISSFIELDOFPCCONFIG                             (&(Issm_ActiveIssField))
#define ISSM_EQ2_CHANNELCONFIGOFPCCONFIG                              Issm_ChannelConfig
#define ISSM_EQ2_CHANNELPOSTBUILDCONFIGOFPCCONFIG                     Issm_ChannelPostBuildConfig
#define ISSM_EQ2_ECURUNSTATEOFPCCONFIG                                (&(Issm_EcuRunState))
#define ISSM_EQ2_EXTERNALREQUESTFIELDOFPCCONFIG                       Issm_ExternalRequestField.raw
#define ISSM_EQ2_EXTERNALREQUESTSCHANGEDOFPCCONFIG                    (&(Issm_ExternalRequestsChanged))
#define ISSM_EQ2_INITIALIZEDOFPCCONFIG                                (&(Issm_Initialized))
#define ISSM_EQ2_INTERNALREQUESTFIELDOFPCCONFIG                       (&(Issm_InternalRequestField))
#define ISSM_EQ2_INTERNALREQUESTSCHANGEDOFPCCONFIG                    (&(Issm_InternalRequestsChanged))
#define ISSM_EQ2_ISCOMMUNICATIONISSMASKOFPCCONFIG                     Issm_IsCommunicationIssMask
#define ISSM_EQ2_ISSIDOFPCCONFIG                                      Issm_IssId
#define ISSM_EQ2_MINACTIVETIMEROFPCCONFIG                             Issm_MinActiveTimer
#define ISSM_EQ2_NETWORKOUTPUTFIELDOFPCCONFIG                         Issm_NetworkOutputField
#define ISSM_EQ2_NETWORKREQUESTEDOFPCCONFIG                           Issm_NetworkRequested
#define ISSM_EQ2_OVERALLREQUESTFIELDOFPCCONFIG                        (&(Issm_OverallRequestField))
#define ISSM_EQ2_RXSIGNALIDOFPCCONFIG                                 Issm_RxSignalId
#define ISSM_EQ2_RXSIGNALTIMEROFPCCONFIG                              Issm_RxSignalTimer.raw
#define ISSM_EQ2_USERPBCONFIGOFPCCONFIG                               Issm_UserPbConfig
#define ISSM_EQ2_USERREQUESTEDOFPCCONFIG                              Issm_UserRequested
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCSymbolicInitializationPointers  Issm Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define Issm_Config_Ptr                                               NULL_PTR  /**< symbolic identifier which shall be used to initialize 'Issm' */
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCInitializationSymbols  Issm Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define Issm_Config                                                   NULL_PTR  /**< symbolic identifier which could be used to initialize 'Issm */
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCGeneral  Issm General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define ISSM_CHECK_INIT_POINTER                                       STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define ISSM_FINAL_MAGIC_NUMBER                                       0xFF1EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of Issm */
#define ISSM_INDIVIDUAL_POSTBUILD                                     STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'Issm' is not configured to be postbuild capable. */
#define ISSM_INIT_DATA                                                ISSM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define ISSM_INIT_DATA_HASH_CODE                                      -1874145486L  /**< the precompile constant to validate the initialization structure at initialization time of Issm with a hashcode. The seed value is '0xFF1EU' */
#define ISSM_USE_ECUM_BSW_ERROR_HOOK                                  STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define ISSM_USE_INIT_POINTER                                         STD_OFF  /**< STD_ON if the init pointer Issm shall be used. */
/** 
  \}
*/ 



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
  \defgroup  IssmPCGetConstantDuplicatedRootDataMacros  Issm Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define Issm_GetActiveIssFieldOfPCConfig()                            (&(Issm_ActiveIssField))  /**< the pointer to Issm_ActiveIssField */
#define Issm_GetBswmModeRequestIdOfPCConfig()                         0U
#define Issm_GetBswmModeRequestNoRunOfPCConfig()                      0U
#define Issm_GetBswmModeRequestRunOfPCConfig()                        1U
#define Issm_GetChannelConfigOfPCConfig()                             Issm_ChannelConfig  /**< the pointer to Issm_ChannelConfig */
#define Issm_GetChannelPostBuildConfigOfPCConfig()                    Issm_ChannelPostBuildConfig  /**< the pointer to Issm_ChannelPostBuildConfig */
#define Issm_GetEcuRunStateOfPCConfig()                               (&(Issm_EcuRunState))  /**< the pointer to Issm_EcuRunState */
#define Issm_GetExternalRequestFieldOfPCConfig()                      Issm_ExternalRequestField.raw  /**< the pointer to Issm_ExternalRequestField */
#define Issm_GetExternalRequestsChangedOfPCConfig()                   (&(Issm_ExternalRequestsChanged))  /**< the pointer to Issm_ExternalRequestsChanged */
#define Issm_GetInitializedOfPCConfig()                               (&(Issm_Initialized))  /**< the pointer to Issm_Initialized */
#define Issm_GetInternalRequestFieldOfPCConfig()                      (&(Issm_InternalRequestField))  /**< the pointer to Issm_InternalRequestField */
#define Issm_GetInternalRequestsChangedOfPCConfig()                   (&(Issm_InternalRequestsChanged))  /**< the pointer to Issm_InternalRequestsChanged */
#define Issm_GetIsCommunicationIssMaskOfPCConfig()                    Issm_IsCommunicationIssMask  /**< the pointer to Issm_IsCommunicationIssMask */
#define Issm_GetIssIdOfPCConfig()                                     Issm_IssId  /**< the pointer to Issm_IssId */
#define Issm_GetMinActiveTimerOfPCConfig()                            Issm_MinActiveTimer  /**< the pointer to Issm_MinActiveTimer */
#define Issm_GetMinIssActivationTimeoutOfPCConfig()                   500U
#define Issm_GetNetworkOutputFieldOfPCConfig()                        Issm_NetworkOutputField  /**< the pointer to Issm_NetworkOutputField */
#define Issm_GetNetworkRequestedOfPCConfig()                          Issm_NetworkRequested  /**< the pointer to Issm_NetworkRequested */
#define Issm_GetOverallRequestFieldOfPCConfig()                       (&(Issm_OverallRequestField))  /**< the pointer to Issm_OverallRequestField */
#define Issm_GetRxSignalIdOfPCConfig()                                Issm_RxSignalId  /**< the pointer to Issm_RxSignalId */
#define Issm_GetRxSignalTimerOfPCConfig()                             Issm_RxSignalTimer.raw  /**< the pointer to Issm_RxSignalTimer */
#define Issm_GetSizeOfChannelConfigOfPCConfig()                       3U  /**< the number of accomplishable value elements in Issm_ChannelConfig */
#define Issm_GetSizeOfChannelPostBuildConfigOfPCConfig()              3U  /**< the number of accomplishable value elements in Issm_ChannelPostBuildConfig */
#define Issm_GetSizeOfIsCommunicationIssMaskOfPCConfig()              1U  /**< the number of accomplishable value elements in Issm_IsCommunicationIssMask */
#define Issm_GetSizeOfIssIdOfPCConfig()                               3U  /**< the number of accomplishable value elements in Issm_IssId */
#define Issm_GetSizeOfRxSignalIdOfPCConfig()                          17U  /**< the number of accomplishable value elements in Issm_RxSignalId */
#define Issm_GetSizeOfUserPbConfigOfPCConfig()                        1U  /**< the number of accomplishable value elements in Issm_UserPbConfig */
#define Issm_GetUserPbConfigOfPCConfig()                              Issm_UserPbConfig  /**< the pointer to Issm_UserPbConfig */
#define Issm_GetUserRequestedOfPCConfig()                             Issm_UserRequested  /**< the pointer to Issm_UserRequested */
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCGetDuplicatedRootDataMacros  Issm Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define Issm_GetSizeOfExternalRequestFieldOfPCConfig()                Issm_GetSizeOfRxSignalIdOfPCConfig()  /**< the number of accomplishable value elements in Issm_ExternalRequestField */
#define Issm_GetSizeOfMinActiveTimerOfPCConfig()                      Issm_GetSizeOfIssIdOfPCConfig()  /**< the number of accomplishable value elements in Issm_MinActiveTimer */
#define Issm_GetSizeOfNetworkOutputFieldOfPCConfig()                  Issm_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in Issm_NetworkOutputField */
#define Issm_GetSizeOfNetworkRequestedOfPCConfig()                    Issm_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in Issm_NetworkRequested */
#define Issm_GetSizeOfRxSignalTimerOfPCConfig()                       Issm_GetSizeOfRxSignalIdOfPCConfig()  /**< the number of accomplishable value elements in Issm_RxSignalTimer */
#define Issm_GetSizeOfUserRequestedOfPCConfig()                       Issm_GetSizeOfUserPbConfigOfPCConfig()  /**< the number of accomplishable value elements in Issm_UserRequested */
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCGetDataMacros  Issm Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define Issm_GetActiveIssField()                                      ((*(Issm_GetActiveIssFieldOfPCConfig())))
#define Issm_GetRxSignalIdEndIdxOfChannelConfig(Index)                (Issm_GetChannelConfigOfPCConfig()[(Index)].RxSignalIdEndIdxOfChannelConfig)
#define Issm_GetRxSignalIdStartIdxOfChannelConfig(Index)              (Issm_GetChannelConfigOfPCConfig()[(Index)].RxSignalIdStartIdxOfChannelConfig)
#define Issm_GetMappedIssMaskOfChannelPostBuildConfig(Index)          (Issm_GetChannelPostBuildConfigOfPCConfig()[(Index)].MappedIssMaskOfChannelPostBuildConfig)
#define Issm_GetEcuRunState()                                         ((*(Issm_GetEcuRunStateOfPCConfig())))
#define Issm_GetExternalRequestField(Index)                           (Issm_GetExternalRequestFieldOfPCConfig()[(Index)])
#define Issm_IsExternalRequestsChanged()                              (((*(Issm_GetExternalRequestsChangedOfPCConfig()))) != FALSE)
#define Issm_IsInitialized()                                          (((*(Issm_GetInitializedOfPCConfig()))) != FALSE)
#define Issm_GetInternalRequestField()                                ((*(Issm_GetInternalRequestFieldOfPCConfig())))
#define Issm_IsInternalRequestsChanged()                              (((*(Issm_GetInternalRequestsChangedOfPCConfig()))) != FALSE)
#define Issm_GetMinActiveTimer(Index)                                 (Issm_GetMinActiveTimerOfPCConfig()[(Index)])
#define Issm_GetNetworkOutputField(Index)                             (Issm_GetNetworkOutputFieldOfPCConfig()[(Index)])
#define Issm_IsNetworkRequested(Index)                                ((Issm_GetNetworkRequestedOfPCConfig()[(Index)]) != FALSE)
#define Issm_GetOverallRequestField()                                 ((*(Issm_GetOverallRequestFieldOfPCConfig())))
#define Issm_GetRxSignalId(Index)                                     (Issm_GetRxSignalIdOfPCConfig()[(Index)])
#define Issm_GetRxSignalTimer(Index)                                  (Issm_GetRxSignalTimerOfPCConfig()[(Index)])
#define Issm_IsUserRequested(Index)                                   ((Issm_GetUserRequestedOfPCConfig()[(Index)]) != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCGetDeduplicatedDataMacros  Issm Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define Issm_GetBswmModeRequestId()                                   Issm_GetBswmModeRequestIdOfPCConfig()
#define Issm_GetBswmModeRequestNoRun()                                Issm_GetBswmModeRequestNoRunOfPCConfig()
#define Issm_GetBswmModeRequestRun()                                  Issm_GetBswmModeRequestRunOfPCConfig()
#define Issm_GetComMUserHandleOfChannelConfig(Index)                  ((Issm_ComMUserHandleOfChannelConfigType)((Index)))
#define Issm_IsRxSignalIdUsedOfChannelConfig(Index)                   (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Issm_RxSignalId */
#define Issm_GetTxSignalIdOfChannelConfig(Index)                      ((Issm_TxSignalIdOfChannelConfigType)(((Index) + 60U)))
#define Issm_GetIsCommunicationIssMask(Index)                         0x00000006UL
#define Issm_GetIssId(Index)                                          ((Issm_IssIdType)((Index)))
#define Issm_GetMinIssActivationTimeout()                             Issm_GetMinIssActivationTimeoutOfPCConfig()
#define Issm_GetSizeOfChannelConfig()                                 Issm_GetSizeOfChannelConfigOfPCConfig()
#define Issm_GetSizeOfChannelPostBuildConfig()                        Issm_GetSizeOfChannelPostBuildConfigOfPCConfig()
#define Issm_GetSizeOfExternalRequestField()                          Issm_GetSizeOfExternalRequestFieldOfPCConfig()
#define Issm_GetSizeOfIsCommunicationIssMask()                        Issm_GetSizeOfIsCommunicationIssMaskOfPCConfig()
#define Issm_GetSizeOfIssId()                                         Issm_GetSizeOfIssIdOfPCConfig()
#define Issm_GetSizeOfMinActiveTimer()                                Issm_GetSizeOfMinActiveTimerOfPCConfig()
#define Issm_GetSizeOfNetworkOutputField()                            Issm_GetSizeOfNetworkOutputFieldOfPCConfig()
#define Issm_GetSizeOfNetworkRequested()                              Issm_GetSizeOfNetworkRequestedOfPCConfig()
#define Issm_GetSizeOfRxSignalId()                                    Issm_GetSizeOfRxSignalIdOfPCConfig()
#define Issm_GetSizeOfRxSignalTimer()                                 Issm_GetSizeOfRxSignalTimerOfPCConfig()
#define Issm_GetSizeOfUserPbConfig()                                  Issm_GetSizeOfUserPbConfigOfPCConfig()
#define Issm_GetSizeOfUserRequested()                                 Issm_GetSizeOfUserRequestedOfPCConfig()
#define Issm_GetMappedIssMaskOfUserPbConfig(Index)                    0x00000007UL
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCSetDataMacros  Issm Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define Issm_SetActiveIssField(Value)                                 (*(Issm_GetActiveIssFieldOfPCConfig())) = (Value)
#define Issm_SetEcuRunState(Value)                                    (*(Issm_GetEcuRunStateOfPCConfig())) = (Value)
#define Issm_SetExternalRequestField(Index, Value)                    Issm_GetExternalRequestFieldOfPCConfig()[(Index)] = (Value)
#define Issm_SetExternalRequestsChanged(Value)                        (*(Issm_GetExternalRequestsChangedOfPCConfig())) = (Value)
#define Issm_SetInitialized(Value)                                    (*(Issm_GetInitializedOfPCConfig())) = (Value)
#define Issm_SetInternalRequestField(Value)                           (*(Issm_GetInternalRequestFieldOfPCConfig())) = (Value)
#define Issm_SetInternalRequestsChanged(Value)                        (*(Issm_GetInternalRequestsChangedOfPCConfig())) = (Value)
#define Issm_SetMinActiveTimer(Index, Value)                          Issm_GetMinActiveTimerOfPCConfig()[(Index)] = (Value)
#define Issm_SetNetworkOutputField(Index, Value)                      Issm_GetNetworkOutputFieldOfPCConfig()[(Index)] = (Value)
#define Issm_SetNetworkRequested(Index, Value)                        Issm_GetNetworkRequestedOfPCConfig()[(Index)] = (Value)
#define Issm_SetOverallRequestField(Value)                            (*(Issm_GetOverallRequestFieldOfPCConfig())) = (Value)
#define Issm_SetRxSignalTimer(Index, Value)                           Issm_GetRxSignalTimerOfPCConfig()[(Index)] = (Value)
#define Issm_SetUserRequested(Index, Value)                           Issm_GetUserRequestedOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCGetAddressOfDataMacros  Issm Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define Issm_GetAddrNetworkOutputField(Index)                         &Issm_GetNetworkOutputField(Index)
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCHasMacros  Issm Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Issm_HasActiveIssField()                                      (TRUE != FALSE)
#define Issm_HasBswmModeRequestId()                                   (TRUE != FALSE)
#define Issm_HasBswmModeRequestNoRun()                                (TRUE != FALSE)
#define Issm_HasBswmModeRequestRun()                                  (TRUE != FALSE)
#define Issm_HasChannelConfig()                                       (TRUE != FALSE)
#define Issm_HasComMUserHandleOfChannelConfig()                       (TRUE != FALSE)
#define Issm_HasRxSignalIdEndIdxOfChannelConfig()                     (TRUE != FALSE)
#define Issm_HasRxSignalIdStartIdxOfChannelConfig()                   (TRUE != FALSE)
#define Issm_HasRxSignalIdUsedOfChannelConfig()                       (TRUE != FALSE)
#define Issm_HasTxSignalIdOfChannelConfig()                           (TRUE != FALSE)
#define Issm_HasChannelPostBuildConfig()                              (TRUE != FALSE)
#define Issm_HasMappedIssMaskOfChannelPostBuildConfig()               (TRUE != FALSE)
#define Issm_HasEcuRunState()                                         (TRUE != FALSE)
#define Issm_HasExternalRequestField()                                (TRUE != FALSE)
#define Issm_HasExternalRequestsChanged()                             (TRUE != FALSE)
#define Issm_HasInitialized()                                         (TRUE != FALSE)
#define Issm_HasInternalRequestField()                                (TRUE != FALSE)
#define Issm_HasInternalRequestsChanged()                             (TRUE != FALSE)
#define Issm_HasIsCommunicationIssMask()                              (TRUE != FALSE)
#define Issm_HasIssId()                                               (TRUE != FALSE)
#define Issm_HasMinActiveTimer()                                      (TRUE != FALSE)
#define Issm_HasMinIssActivationTimeout()                             (TRUE != FALSE)
#define Issm_HasNetworkOutputField()                                  (TRUE != FALSE)
#define Issm_HasNetworkRequested()                                    (TRUE != FALSE)
#define Issm_HasOverallRequestField()                                 (TRUE != FALSE)
#define Issm_HasRxSignalId()                                          (TRUE != FALSE)
#define Issm_HasRxSignalTimer()                                       (TRUE != FALSE)
#define Issm_HasSizeOfChannelConfig()                                 (TRUE != FALSE)
#define Issm_HasSizeOfChannelPostBuildConfig()                        (TRUE != FALSE)
#define Issm_HasSizeOfExternalRequestField()                          (TRUE != FALSE)
#define Issm_HasSizeOfIsCommunicationIssMask()                        (TRUE != FALSE)
#define Issm_HasSizeOfIssId()                                         (TRUE != FALSE)
#define Issm_HasSizeOfMinActiveTimer()                                (TRUE != FALSE)
#define Issm_HasSizeOfNetworkOutputField()                            (TRUE != FALSE)
#define Issm_HasSizeOfNetworkRequested()                              (TRUE != FALSE)
#define Issm_HasSizeOfRxSignalId()                                    (TRUE != FALSE)
#define Issm_HasSizeOfRxSignalTimer()                                 (TRUE != FALSE)
#define Issm_HasSizeOfUserPbConfig()                                  (TRUE != FALSE)
#define Issm_HasSizeOfUserRequested()                                 (TRUE != FALSE)
#define Issm_HasUserPbConfig()                                        (TRUE != FALSE)
#define Issm_HasMappedIssMaskOfUserPbConfig()                         (TRUE != FALSE)
#define Issm_HasUserRequested()                                       (TRUE != FALSE)
#define Issm_HasPCConfig()                                            (TRUE != FALSE)
#define Issm_HasActiveIssFieldOfPCConfig()                            (TRUE != FALSE)
#define Issm_HasBswmModeRequestIdOfPCConfig()                         (TRUE != FALSE)
#define Issm_HasBswmModeRequestNoRunOfPCConfig()                      (TRUE != FALSE)
#define Issm_HasBswmModeRequestRunOfPCConfig()                        (TRUE != FALSE)
#define Issm_HasChannelConfigOfPCConfig()                             (TRUE != FALSE)
#define Issm_HasChannelPostBuildConfigOfPCConfig()                    (TRUE != FALSE)
#define Issm_HasEcuRunStateOfPCConfig()                               (TRUE != FALSE)
#define Issm_HasExternalRequestFieldOfPCConfig()                      (TRUE != FALSE)
#define Issm_HasExternalRequestsChangedOfPCConfig()                   (TRUE != FALSE)
#define Issm_HasInitializedOfPCConfig()                               (TRUE != FALSE)
#define Issm_HasInternalRequestFieldOfPCConfig()                      (TRUE != FALSE)
#define Issm_HasInternalRequestsChangedOfPCConfig()                   (TRUE != FALSE)
#define Issm_HasIsCommunicationIssMaskOfPCConfig()                    (TRUE != FALSE)
#define Issm_HasIssIdOfPCConfig()                                     (TRUE != FALSE)
#define Issm_HasMinActiveTimerOfPCConfig()                            (TRUE != FALSE)
#define Issm_HasMinIssActivationTimeoutOfPCConfig()                   (TRUE != FALSE)
#define Issm_HasNetworkOutputFieldOfPCConfig()                        (TRUE != FALSE)
#define Issm_HasNetworkRequestedOfPCConfig()                          (TRUE != FALSE)
#define Issm_HasOverallRequestFieldOfPCConfig()                       (TRUE != FALSE)
#define Issm_HasRxSignalIdOfPCConfig()                                (TRUE != FALSE)
#define Issm_HasRxSignalTimerOfPCConfig()                             (TRUE != FALSE)
#define Issm_HasSizeOfChannelConfigOfPCConfig()                       (TRUE != FALSE)
#define Issm_HasSizeOfChannelPostBuildConfigOfPCConfig()              (TRUE != FALSE)
#define Issm_HasSizeOfExternalRequestFieldOfPCConfig()                (TRUE != FALSE)
#define Issm_HasSizeOfIsCommunicationIssMaskOfPCConfig()              (TRUE != FALSE)
#define Issm_HasSizeOfIssIdOfPCConfig()                               (TRUE != FALSE)
#define Issm_HasSizeOfMinActiveTimerOfPCConfig()                      (TRUE != FALSE)
#define Issm_HasSizeOfNetworkOutputFieldOfPCConfig()                  (TRUE != FALSE)
#define Issm_HasSizeOfNetworkRequestedOfPCConfig()                    (TRUE != FALSE)
#define Issm_HasSizeOfRxSignalIdOfPCConfig()                          (TRUE != FALSE)
#define Issm_HasSizeOfRxSignalTimerOfPCConfig()                       (TRUE != FALSE)
#define Issm_HasSizeOfUserPbConfigOfPCConfig()                        (TRUE != FALSE)
#define Issm_HasSizeOfUserRequestedOfPCConfig()                       (TRUE != FALSE)
#define Issm_HasUserPbConfigOfPCConfig()                              (TRUE != FALSE)
#define Issm_HasUserRequestedOfPCConfig()                             (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCIncrementDataMacros  Issm Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define Issm_IncActiveIssField()                                      Issm_GetActiveIssField()++
#define Issm_IncEcuRunState()                                         Issm_GetEcuRunState()++
#define Issm_IncExternalRequestField(Index)                           Issm_GetExternalRequestField(Index)++
#define Issm_IncInternalRequestField()                                Issm_GetInternalRequestField()++
#define Issm_IncMinActiveTimer(Index)                                 Issm_GetMinActiveTimer(Index)++
#define Issm_IncNetworkOutputField(Index)                             Issm_GetNetworkOutputField(Index)++
#define Issm_IncOverallRequestField()                                 Issm_GetOverallRequestField()++
#define Issm_IncRxSignalTimer(Index)                                  Issm_GetRxSignalTimer(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  IssmPCDecrementDataMacros  Issm Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define Issm_DecActiveIssField()                                      Issm_GetActiveIssField()--
#define Issm_DecEcuRunState()                                         Issm_GetEcuRunState()--
#define Issm_DecExternalRequestField(Index)                           Issm_GetExternalRequestField(Index)--
#define Issm_DecInternalRequestField()                                Issm_GetInternalRequestField()--
#define Issm_DecMinActiveTimer(Index)                                 Issm_GetMinActiveTimer(Index)--
#define Issm_DecNetworkOutputField(Index)                             Issm_GetNetworkOutputField(Index)--
#define Issm_DecOverallRequestField()                                 Issm_GetOverallRequestField()--
#define Issm_DecRxSignalTimer(Index)                                  Issm_GetRxSignalTimer(Index)--
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
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  IssmPCIterableTypes  Issm Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Issm_ChannelConfig */
typedef uint8_least Issm_ChannelConfigIterType;

/**   \brief  type used to iterate Issm_ChannelPostBuildConfig */
typedef uint8_least Issm_ChannelPostBuildConfigIterType;

/**   \brief  type used to iterate Issm_IsCommunicationIssMask */
typedef uint8_least Issm_IsCommunicationIssMaskIterType;

/**   \brief  type used to iterate Issm_IssId */
typedef uint8_least Issm_IssIdIterType;

/**   \brief  type used to iterate Issm_RxSignalId */
typedef uint8_least Issm_RxSignalIdIterType;

/**   \brief  type used to iterate Issm_UserPbConfig */
typedef uint8_least Issm_UserPbConfigIterType;

/** 
  \}
*/ 

/** 
  \defgroup  IssmPCIterableTypesWithSizeRelations  Issm Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate Issm_ExternalRequestField */
typedef Issm_RxSignalIdIterType Issm_ExternalRequestFieldIterType;

/**   \brief  type used to iterate Issm_MinActiveTimer */
typedef Issm_IssIdIterType Issm_MinActiveTimerIterType;

/**   \brief  type used to iterate Issm_NetworkOutputField */
typedef Issm_ChannelConfigIterType Issm_NetworkOutputFieldIterType;

/**   \brief  type used to iterate Issm_NetworkRequested */
typedef Issm_ChannelConfigIterType Issm_NetworkRequestedIterType;

/**   \brief  type used to iterate Issm_RxSignalTimer */
typedef Issm_RxSignalIdIterType Issm_RxSignalTimerIterType;

/**   \brief  type used to iterate Issm_UserRequested */
typedef Issm_UserPbConfigIterType Issm_UserRequestedIterType;

/** 
  \}
*/ 

/** 
  \defgroup  IssmPCValueTypes  Issm Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for Issm_ActiveIssField */
typedef uint32 Issm_ActiveIssFieldType;

/**   \brief  value based type definition for Issm_BswmModeRequestId */
typedef uint8 Issm_BswmModeRequestIdType;

/**   \brief  value based type definition for Issm_BswmModeRequestNoRun */
typedef uint8 Issm_BswmModeRequestNoRunType;

/**   \brief  value based type definition for Issm_BswmModeRequestRun */
typedef uint8 Issm_BswmModeRequestRunType;

/**   \brief  value based type definition for Issm_ComMUserHandleOfChannelConfig */
typedef uint8 Issm_ComMUserHandleOfChannelConfigType;

/**   \brief  value based type definition for Issm_RxSignalIdEndIdxOfChannelConfig */
typedef uint8 Issm_RxSignalIdEndIdxOfChannelConfigType;

/**   \brief  value based type definition for Issm_RxSignalIdStartIdxOfChannelConfig */
typedef uint8 Issm_RxSignalIdStartIdxOfChannelConfigType;

/**   \brief  value based type definition for Issm_RxSignalIdUsedOfChannelConfig */
typedef boolean Issm_RxSignalIdUsedOfChannelConfigType;

/**   \brief  value based type definition for Issm_TxSignalIdOfChannelConfig */
typedef uint8 Issm_TxSignalIdOfChannelConfigType;

/**   \brief  value based type definition for Issm_MappedIssMaskOfChannelPostBuildConfig */
typedef uint8 Issm_MappedIssMaskOfChannelPostBuildConfigType;

/**   \brief  value based type definition for Issm_EcuRunState */
typedef uint8 Issm_EcuRunStateType;

/**   \brief  value based type definition for Issm_ExternalRequestField */
typedef uint32 Issm_ExternalRequestFieldType;

/**   \brief  value based type definition for Issm_ExternalRequestsChanged */
typedef boolean Issm_ExternalRequestsChangedType;

/**   \brief  value based type definition for Issm_Initialized */
typedef boolean Issm_InitializedType;

/**   \brief  value based type definition for Issm_InternalRequestField */
typedef uint32 Issm_InternalRequestFieldType;

/**   \brief  value based type definition for Issm_InternalRequestsChanged */
typedef boolean Issm_InternalRequestsChangedType;

/**   \brief  value based type definition for Issm_IsCommunicationIssMask */
typedef uint8 Issm_IsCommunicationIssMaskType;

/**   \brief  value based type definition for Issm_IssId */
typedef uint8 Issm_IssIdType;

/**   \brief  value based type definition for Issm_MinActiveTimer */
typedef uint16 Issm_MinActiveTimerType;

/**   \brief  value based type definition for Issm_MinIssActivationTimeout */
typedef uint16 Issm_MinIssActivationTimeoutType;

/**   \brief  value based type definition for Issm_NetworkOutputField */
typedef uint32 Issm_NetworkOutputFieldType;

/**   \brief  value based type definition for Issm_NetworkRequested */
typedef boolean Issm_NetworkRequestedType;

/**   \brief  value based type definition for Issm_OverallRequestField */
typedef uint32 Issm_OverallRequestFieldType;

/**   \brief  value based type definition for Issm_RxSignalId */
typedef uint8 Issm_RxSignalIdType;

/**   \brief  value based type definition for Issm_RxSignalTimer */
typedef uint16 Issm_RxSignalTimerType;

/**   \brief  value based type definition for Issm_SizeOfChannelConfig */
typedef uint8 Issm_SizeOfChannelConfigType;

/**   \brief  value based type definition for Issm_SizeOfChannelPostBuildConfig */
typedef uint8 Issm_SizeOfChannelPostBuildConfigType;

/**   \brief  value based type definition for Issm_SizeOfExternalRequestField */
typedef uint8 Issm_SizeOfExternalRequestFieldType;

/**   \brief  value based type definition for Issm_SizeOfIsCommunicationIssMask */
typedef uint8 Issm_SizeOfIsCommunicationIssMaskType;

/**   \brief  value based type definition for Issm_SizeOfIssId */
typedef uint8 Issm_SizeOfIssIdType;

/**   \brief  value based type definition for Issm_SizeOfMinActiveTimer */
typedef uint8 Issm_SizeOfMinActiveTimerType;

/**   \brief  value based type definition for Issm_SizeOfNetworkOutputField */
typedef uint8 Issm_SizeOfNetworkOutputFieldType;

/**   \brief  value based type definition for Issm_SizeOfNetworkRequested */
typedef uint8 Issm_SizeOfNetworkRequestedType;

/**   \brief  value based type definition for Issm_SizeOfRxSignalId */
typedef uint8 Issm_SizeOfRxSignalIdType;

/**   \brief  value based type definition for Issm_SizeOfRxSignalTimer */
typedef uint8 Issm_SizeOfRxSignalTimerType;

/**   \brief  value based type definition for Issm_SizeOfUserPbConfig */
typedef uint8 Issm_SizeOfUserPbConfigType;

/**   \brief  value based type definition for Issm_SizeOfUserRequested */
typedef uint8 Issm_SizeOfUserRequestedType;

/**   \brief  value based type definition for Issm_MappedIssMaskOfUserPbConfig */
typedef uint8 Issm_MappedIssMaskOfUserPbConfigType;

/**   \brief  value based type definition for Issm_UserRequested */
typedef boolean Issm_UserRequestedType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  IssmPCStructTypes  Issm Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in Issm_ChannelConfig */
typedef struct sIssm_ChannelConfigType
{
  Issm_RxSignalIdEndIdxOfChannelConfigType RxSignalIdEndIdxOfChannelConfig;  /**< the end index of the 0:n relation pointing to Issm_RxSignalId */
  Issm_RxSignalIdStartIdxOfChannelConfigType RxSignalIdStartIdxOfChannelConfig;  /**< the start index of the 0:n relation pointing to Issm_RxSignalId */
} Issm_ChannelConfigType;

/**   \brief  type used in Issm_ChannelPostBuildConfig */
typedef struct sIssm_ChannelPostBuildConfigType
{
  Issm_MappedIssMaskOfChannelPostBuildConfigType MappedIssMaskOfChannelPostBuildConfig;
} Issm_ChannelPostBuildConfigType;

/**   \brief  type used in Issm_UserPbConfig */
typedef struct sIssm_UserPbConfigType
{
  uint8 Issm_UserPbConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Issm_UserPbConfigType;

/** 
  \}
*/ 

/** 
  \defgroup  IssmPCSymbolicStructTypes  Issm Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to Issm_ExternalRequestField */
typedef struct Issm_ExternalRequestFieldStructSTag
{
  Issm_ExternalRequestFieldType CHNL_a6b6a922[8];
  Issm_ExternalRequestFieldType CHNL_df893ad5[5];
  Issm_ExternalRequestFieldType CHNL_53cce282[4];
} Issm_ExternalRequestFieldStructSType;

/**   \brief  type to be used as symbolic data element access to Issm_RxSignalTimer */
typedef struct Issm_RxSignalTimerStructSTag
{
  Issm_RxSignalTimerType CHNL_a6b6a922[8];
  Issm_RxSignalTimerType CHNL_df893ad5[5];
  Issm_RxSignalTimerType CHNL_53cce282[4];
} Issm_RxSignalTimerStructSType;

/** 
  \}
*/ 

/** 
  \defgroup  IssmPCUnionIndexAndSymbolTypes  Issm Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access Issm_ExternalRequestField in an index and symbol based style. */
typedef union Issm_ExternalRequestFieldUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Issm_ExternalRequestFieldType raw[17];
  Issm_ExternalRequestFieldStructSType str;
} Issm_ExternalRequestFieldUType;

/**   \brief  type to access Issm_RxSignalTimer in an index and symbol based style. */
typedef union Issm_RxSignalTimerUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Issm_RxSignalTimerType raw[17];
  Issm_RxSignalTimerStructSType str;
} Issm_RxSignalTimerUType;

/** 
  \}
*/ 

/** 
  \defgroup  IssmPCRootPointerTypes  Issm Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point from the config root to symbol instances.
  \{
*/ 
/**   \brief  type used to point to Issm_ActiveIssField */
typedef P2VAR(Issm_ActiveIssFieldType, TYPEDEF, ISSM_VAR_NOINIT) Issm_ActiveIssFieldPtrType;

/**   \brief  type used to point to Issm_ChannelConfig */
typedef P2CONST(Issm_ChannelConfigType, TYPEDEF, ISSM_CONST) Issm_ChannelConfigPtrType;

/**   \brief  type used to point to Issm_ChannelPostBuildConfig */
typedef P2CONST(Issm_ChannelPostBuildConfigType, TYPEDEF, ISSM_CONST) Issm_ChannelPostBuildConfigPtrType;

/**   \brief  type used to point to Issm_EcuRunState */
typedef P2VAR(Issm_EcuRunStateType, TYPEDEF, ISSM_VAR_NOINIT) Issm_EcuRunStatePtrType;

/**   \brief  type used to point to Issm_ExternalRequestField */
typedef P2VAR(Issm_ExternalRequestFieldType, TYPEDEF, ISSM_VAR_NOINIT) Issm_ExternalRequestFieldPtrType;

/**   \brief  type used to point to Issm_ExternalRequestsChanged */
typedef P2VAR(Issm_ExternalRequestsChangedType, TYPEDEF, ISSM_VAR_NOINIT) Issm_ExternalRequestsChangedPtrType;

/**   \brief  type used to point to Issm_Initialized */
typedef P2VAR(Issm_InitializedType, TYPEDEF, ISSM_VAR_ZERO_INIT) Issm_InitializedPtrType;

/**   \brief  type used to point to Issm_InternalRequestField */
typedef P2VAR(Issm_InternalRequestFieldType, TYPEDEF, ISSM_VAR_NOINIT) Issm_InternalRequestFieldPtrType;

/**   \brief  type used to point to Issm_InternalRequestsChanged */
typedef P2VAR(Issm_InternalRequestsChangedType, TYPEDEF, ISSM_VAR_NOINIT) Issm_InternalRequestsChangedPtrType;

/**   \brief  type used to point to Issm_IsCommunicationIssMask */
typedef P2CONST(Issm_IsCommunicationIssMaskType, TYPEDEF, ISSM_CONST) Issm_IsCommunicationIssMaskPtrType;

/**   \brief  type used to point to Issm_IssId */
typedef P2CONST(Issm_IssIdType, TYPEDEF, ISSM_CONST) Issm_IssIdPtrType;

/**   \brief  type used to point to Issm_MinActiveTimer */
typedef P2VAR(Issm_MinActiveTimerType, TYPEDEF, ISSM_VAR_NOINIT) Issm_MinActiveTimerPtrType;

/**   \brief  type used to point to Issm_NetworkOutputField */
typedef P2VAR(Issm_NetworkOutputFieldType, TYPEDEF, ISSM_VAR_NOINIT) Issm_NetworkOutputFieldPtrType;

/**   \brief  type used to point to Issm_NetworkRequested */
typedef P2VAR(Issm_NetworkRequestedType, TYPEDEF, ISSM_VAR_NOINIT) Issm_NetworkRequestedPtrType;

/**   \brief  type used to point to Issm_OverallRequestField */
typedef P2VAR(Issm_OverallRequestFieldType, TYPEDEF, ISSM_VAR_NOINIT) Issm_OverallRequestFieldPtrType;

/**   \brief  type used to point to Issm_RxSignalId */
typedef P2CONST(Issm_RxSignalIdType, TYPEDEF, ISSM_CONST) Issm_RxSignalIdPtrType;

/**   \brief  type used to point to Issm_RxSignalTimer */
typedef P2VAR(Issm_RxSignalTimerType, TYPEDEF, ISSM_VAR_NOINIT) Issm_RxSignalTimerPtrType;

/**   \brief  type used to point to Issm_UserPbConfig */
typedef P2CONST(Issm_UserPbConfigType, TYPEDEF, ISSM_CONST) Issm_UserPbConfigPtrType;

/**   \brief  type used to point to Issm_UserRequested */
typedef P2VAR(Issm_UserRequestedType, TYPEDEF, ISSM_VAR_NOINIT) Issm_UserRequestedPtrType;

/** 
  \}
*/ 

/** 
  \defgroup  IssmPCRootValueTypes  Issm Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in Issm_PCConfig */
typedef struct sIssm_PCConfigType
{
  uint8 Issm_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Issm_PCConfigType;

typedef Issm_PCConfigType Issm_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

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
extern CONST(Issm_ChannelConfigType, ISSM_CONST) Issm_ChannelConfig[3];
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
extern CONST(Issm_ChannelPostBuildConfigType, ISSM_CONST) Issm_ChannelPostBuildConfig[3];
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
extern CONST(Issm_RxSignalIdType, ISSM_CONST) Issm_RxSignalId[17];
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
extern VAR(Issm_ActiveIssFieldType, ISSM_VAR_NOINIT) Issm_ActiveIssField;
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
extern VAR(Issm_EcuRunStateType, ISSM_VAR_NOINIT) Issm_EcuRunState;
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
extern VAR(Issm_ExternalRequestFieldUType, ISSM_VAR_NOINIT) Issm_ExternalRequestField;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
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
extern VAR(Issm_ExternalRequestsChangedType, ISSM_VAR_NOINIT) Issm_ExternalRequestsChanged;
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
extern VAR(Issm_InitializedType, ISSM_VAR_ZERO_INIT) Issm_Initialized;
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
extern VAR(Issm_InternalRequestFieldType, ISSM_VAR_NOINIT) Issm_InternalRequestField;
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
extern VAR(Issm_InternalRequestsChangedType, ISSM_VAR_NOINIT) Issm_InternalRequestsChanged;
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
extern VAR(Issm_MinActiveTimerType, ISSM_VAR_NOINIT) Issm_MinActiveTimer[3];
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
extern VAR(Issm_NetworkOutputFieldType, ISSM_VAR_NOINIT) Issm_NetworkOutputField[3];
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
extern VAR(Issm_NetworkRequestedType, ISSM_VAR_NOINIT) Issm_NetworkRequested[3];
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
extern VAR(Issm_OverallRequestFieldType, ISSM_VAR_NOINIT) Issm_OverallRequestField;
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
extern VAR(Issm_RxSignalTimerUType, ISSM_VAR_NOINIT) Issm_RxSignalTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
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
extern VAR(Issm_UserRequestedType, ISSM_VAR_NOINIT) Issm_UserRequested[1];
#define ISSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



#define ISSM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if ( ISSM_USE_INIT_POINTER == STD_ON )
extern P2CONST(Issm_ConfigType, ISSM_VAR_ZERO_INIT, ISSM_INIT_DATA) Issm_ConfigDataPtr;
#endif

#define ISSM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/



#endif  /* ISSM_CFG_H */
/**********************************************************************************************************************
  END OF FILE: Issm_Cfg.h
**********************************************************************************************************************/

