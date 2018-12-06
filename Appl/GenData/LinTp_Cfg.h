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
 *            Module: LinTp
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: LinTp_Cfg.h
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


#if !defined(LINTP_CFG_H)
#define LINTP_CFG_H

/* Tp_Asr4TpLin CFG5 Generatorversion 5.00.01 */

/**********************************************************************************************************************
 *  Includes
 *********************************************************************************************************************/
#include "ComStack_Types.h"
#include "Lin_GeneralTypes.h"


/**********************************************************************************************************************
 *  Defines
 *********************************************************************************************************************/
#define LINTP_VERSION_INFO_API                          STD_OFF
#define LINTP_CANCEL_RECEIVE_SUPPORTED                  STD_OFF
#define LINTP_CANCEL_TRANSMIT_SUPPORTED                 STD_OFF
#define LINTP_CHANGE_PARAMETER_SUPPORTED                STD_OFF
#define LINTP_FUNCTIONAL_REQUEST_SUPPORTED              STD_ON
#define LINTP_FORWARD_RESPONSEPENDING_TO_PDUR           STD_ON
#define LINTP_RUNTIME_MEASUREMENT_SUPPORT               STD_OFF
#define LINTP_BROADCAST_REQUEST_HANDLING                STD_OFF

/* above defines are required inside LinTp_Types.h */
#include "LinTp_Types.h"

/**********************************************************************************************************************
 *  General Defines
 *********************************************************************************************************************/
#ifndef LINTP_USE_DUMMY_FUNCTIONS
#define LINTP_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef LINTP_USE_DUMMY_STATEMENT
#define LINTP_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef LINTP_DUMMY_STATEMENT
#define LINTP_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef LINTP_DUMMY_STATEMENT_CONST
#define LINTP_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef LINTP_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define LINTP_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef LINTP_ATOMIC_VARIABLE_ACCESS
#define LINTP_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef LINTP_PROCESSOR_MPC5746C
#define LINTP_PROCESSOR_MPC5746C
#endif
#ifndef LINTP_COMP_DIAB
#define LINTP_COMP_DIAB
#endif
#ifndef LINTP_GEN_GENERATOR_MSR
#define LINTP_GEN_GENERATOR_MSR
#endif
#ifndef LINTP_CPUTYPE_BITORDER_MSB2LSB
#define LINTP_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef LINTP_CONFIGURATION_VARIANT_PRECOMPILE
#define LINTP_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef LINTP_CONFIGURATION_VARIANT_LINKTIME
#define LINTP_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef LINTP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define LINTP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef LINTP_CONFIGURATION_VARIANT
#define LINTP_CONFIGURATION_VARIANT LINTP_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef LINTP_POSTBUILD_VARIANT_SUPPORT
#define LINTP_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/**********************************************************************************************************************
 *  Symbolic Name Values for TxNSdus
 *********************************************************************************************************************/



/**
 * \defgroup LinTpHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define LinTpConf_LinTpTxNSdu_MasterReq_CCFW_oLIN03_98357989_Tx     0
#define LinTpConf_LinTpTxNSdu_MasterReq_DLFW_oLIN03_40053787_Tx     1
#define LinTpConf_LinTpTxNSdu_MasterReq_ELCP1_oLIN03_cbecb6de_Tx    2
#define LinTpConf_LinTpTxNSdu_MasterReq_ELCP2_oLIN03_4563b13d_Tx    3
#define LinTpConf_LinTpTxNSdu_MasterReq_FSP1_L1_oLIN00_2de78d2a_Tx  4
#define LinTpConf_LinTpTxNSdu_MasterReq_FSP1_L2_oLIN01_d46fba5f_Tx  5
#define LinTpConf_LinTpTxNSdu_MasterReq_FSP1_L3_oLIN02_81cceb7b_Tx  6
#define LinTpConf_LinTpTxNSdu_MasterReq_FSP1_L4_oLIN03_fc0ed2f4_Tx  7
#define LinTpConf_LinTpTxNSdu_MasterReq_FSP1_L5_oLIN04_aec047c9_Tx  8
#define LinTpConf_LinTpTxNSdu_MasterReq_FSP2_L1_oLIN00_b405eb2b_Tx  9
#define LinTpConf_LinTpTxNSdu_MasterReq_FSP2_L2_oLIN01_4d8ddc5e_Tx  10
#define LinTpConf_LinTpTxNSdu_MasterReq_FSP2_L3_oLIN02_182e8d7a_Tx  11
#define LinTpConf_LinTpTxNSdu_MasterReq_FSP3_L2_oLIN01_8c03039e_Tx  12
#define LinTpConf_LinTpTxNSdu_MasterReq_FSP4_L2_oLIN01_a538161d_Tx  13
#define LinTpConf_LinTpTxNSdu_MasterReq_ILCP1_oLIN00_57efaae5_Tx    14
#define LinTpConf_LinTpTxNSdu_MasterReq_ILCP2_oLIN03_4069fcbc_Tx    15
#define LinTpConf_LinTpTxNSdu_MasterReq_LECM2_oLIN00_670141b5_Tx    16
#define LinTpConf_LinTpTxNSdu_MasterReq_LECMBasic_oLIN00_16bdebb7_Tx 17
#define LinTpConf_LinTpTxNSdu_MasterReq_RCECS_oLIN04_b46d7afd_Tx    18
#define LinTpConf_LinTpTxNSdu_MasterReq_TCP_oLIN02_4b422897_Tx      19
#define LinTpConf_LinTpTxNSdu_MasterReq_oLIN00_4a2bb011_Tx          20
#define LinTpConf_LinTpTxNSdu_MasterReq_oLIN01_3d2c8087_Tx          21
#define LinTpConf_LinTpTxNSdu_MasterReq_oLIN02_a425d13d_Tx          22
#define LinTpConf_LinTpTxNSdu_MasterReq_oLIN03_d322e1ab_Tx          23
#define LinTpConf_LinTpTxNSdu_MasterReq_oLIN04_4d467408_Tx          24
/**\} */


/**********************************************************************************************************************
 *  Symbolic Name Values for RxNSdus
 *********************************************************************************************************************/



/**
 * \defgroup LinTpHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define LinTpConf_LinTpRxNSdu_SlaveResp_CCFW_oLIN03_d7124ce9_Rx     0
#define LinTpConf_LinTpRxNSdu_SlaveResp_DLFW_oLIN03_0f2202e7_Rx     1
#define LinTpConf_LinTpRxNSdu_SlaveResp_ELCP1_oLIN03_8611f0b3_Rx    2
#define LinTpConf_LinTpRxNSdu_SlaveResp_ELCP2_oLIN03_089ef750_Rx    3
#define LinTpConf_LinTpRxNSdu_SlaveResp_FSP1_L1_oLIN00_620b3198_Rx  4
#define LinTpConf_LinTpRxNSdu_SlaveResp_FSP1_L2_oLIN01_9b8306ed_Rx  5
#define LinTpConf_LinTpRxNSdu_SlaveResp_FSP1_L3_oLIN02_ce2057c9_Rx  6
#define LinTpConf_LinTpRxNSdu_SlaveResp_FSP1_L4_oLIN03_b3e26e46_Rx  7
#define LinTpConf_LinTpRxNSdu_SlaveResp_FSP1_L5_oLIN04_e12cfb7b_Rx  8
#define LinTpConf_LinTpRxNSdu_SlaveResp_FSP2_L1_oLIN00_fbe95799_Rx  9
#define LinTpConf_LinTpRxNSdu_SlaveResp_FSP2_L2_oLIN01_026160ec_Rx  10
#define LinTpConf_LinTpRxNSdu_SlaveResp_FSP2_L3_oLIN02_57c231c8_Rx  11
#define LinTpConf_LinTpRxNSdu_SlaveResp_FSP3_L2_oLIN01_c3efbf2c_Rx  12
#define LinTpConf_LinTpRxNSdu_SlaveResp_FSP4_L2_oLIN01_ead4aaaf_Rx  13
#define LinTpConf_LinTpRxNSdu_SlaveResp_ILCP1_oLIN00_1a12ec88_Rx    14
#define LinTpConf_LinTpRxNSdu_SlaveResp_ILCP2_oLIN03_0d94bad1_Rx    15
#define LinTpConf_LinTpRxNSdu_SlaveResp_LECM2_oLIN00_2afc07d8_Rx    16
#define LinTpConf_LinTpRxNSdu_SlaveResp_LECMBasic_oLIN00_029997c6_Rx 17
#define LinTpConf_LinTpRxNSdu_SlaveResp_RCECS_oLIN04_f9903c90_Rx    18
#define LinTpConf_LinTpRxNSdu_SlaveResp_TCP_oLIN02_b3851a34_Rx      19
/**\} */


/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  LinTpPCDataSwitches  LinTp Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define LINTP_CHANNELCONFIG                                           STD_ON
#define LINTP_LINTP_SCHEDCHANGENOTIFYOFCHANNELCONFIG                  STD_ON
#define LINTP_LINTP_STRICTNADCHECKOFCHANNELCONFIG                     STD_ON
#define LINTP_CTRL                                                    STD_ON
#define LINTP_FINALMAGICNUMBER                                        STD_OFF  /**< Deactivateable: 'LinTp_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define LINTP_INITDATAHASHCODE                                        STD_OFF  /**< Deactivateable: 'LinTp_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define LINTP_LINIFTOLINTPCHANNEL                                     STD_ON
#define LINTP_CHANNELOFLINIFTOLINTPCHANNEL                            STD_ON
#define LINTP_MAXRESPPENDINGFRAMES                                    STD_ON
#define LINTP_NUMBEROFLINTPRXNSDU                                     STD_ON
#define LINTP_NUMBEROFLINTPTXNSDU                                     STD_ON
#define LINTP_P2MAXTIME                                               STD_ON
#define LINTP_P2TIME                                                  STD_ON
#define LINTP_RXNSDU                                                  STD_ON
#define LINTP_CTRLIDXOFRXNSDU                                         STD_ON
#define LINTP_INVALIDHNDOFRXNSDU                                      STD_OFF  /**< Deactivateable: 'LinTp_RxNSdu.InvalidHnd' Reason: 'the value of LinTp_InvalidHndOfRxNSdu is always 'false' due to this, the array is deactivated.' */
#define LINTP_NADOFRXNSDU                                             STD_ON
#define LINTP_NCROFRXNSDU                                             STD_ON
#define LINTP_UPPERLAYERPDUIDOFRXNSDU                                 STD_ON
#define LINTP_SIZEOFCTRL                                              STD_ON
#define LINTP_TXNSDU                                                  STD_ON
#define LINTP_ASSOCIATEDRXNSDUIDOFTXNSDU                              STD_ON
#define LINTP_CTRLIDXOFTXNSDU                                         STD_ON
#define LINTP_INVALIDHNDOFTXNSDU                                      STD_OFF  /**< Deactivateable: 'LinTp_TxNSdu.InvalidHnd' Reason: 'the value of LinTp_InvalidHndOfTxNSdu is always 'false' due to this, the array is deactivated.' */
#define LINTP_NADOFTXNSDU                                             STD_ON
#define LINTP_NASOFTXNSDU                                             STD_ON
#define LINTP_NCSOFTXNSDU                                             STD_ON
#define LINTP_UPPERLAYERPDUIDOFTXNSDU                                 STD_ON
#define LINTP_PCCONFIG                                                STD_ON
#define LINTP_CHANNELCONFIGOFPCCONFIG                                 STD_ON
#define LINTP_CTRLOFPCCONFIG                                          STD_ON
#define LINTP_FINALMAGICNUMBEROFPCCONFIG                              STD_OFF  /**< Deactivateable: 'LinTp_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define LINTP_INITDATAHASHCODEOFPCCONFIG                              STD_OFF  /**< Deactivateable: 'LinTp_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define LINTP_LINIFTOLINTPCHANNELOFPCCONFIG                           STD_ON
#define LINTP_MAXRESPPENDINGFRAMESOFPCCONFIG                          STD_ON
#define LINTP_NUMBEROFLINTPRXNSDUOFPCCONFIG                           STD_ON
#define LINTP_NUMBEROFLINTPTXNSDUOFPCCONFIG                           STD_ON
#define LINTP_P2MAXTIMEOFPCCONFIG                                     STD_ON
#define LINTP_P2TIMEOFPCCONFIG                                        STD_ON
#define LINTP_RXNSDUOFPCCONFIG                                        STD_ON
#define LINTP_SIZEOFCTRLOFPCCONFIG                                    STD_ON
#define LINTP_TXNSDUOFPCCONFIG                                        STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCIsReducedToDefineDefines  LinTp Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define LINTP_ISDEF_LINTP_SCHEDCHANGENOTIFYOFCHANNELCONFIG            STD_OFF
#define LINTP_ISDEF_LINTP_STRICTNADCHECKOFCHANNELCONFIG               STD_OFF
#define LINTP_ISDEF_CHANNELOFLINIFTOLINTPCHANNEL                      STD_OFF
#define LINTP_ISDEF_CTRLIDXOFRXNSDU                                   STD_OFF
#define LINTP_ISDEF_NADOFRXNSDU                                       STD_OFF
#define LINTP_ISDEF_NCROFRXNSDU                                       STD_OFF
#define LINTP_ISDEF_UPPERLAYERPDUIDOFRXNSDU                           STD_OFF
#define LINTP_ISDEF_ASSOCIATEDRXNSDUIDOFTXNSDU                        STD_OFF
#define LINTP_ISDEF_CTRLIDXOFTXNSDU                                   STD_OFF
#define LINTP_ISDEF_NADOFTXNSDU                                       STD_OFF
#define LINTP_ISDEF_NASOFTXNSDU                                       STD_OFF
#define LINTP_ISDEF_NCSOFTXNSDU                                       STD_OFF
#define LINTP_ISDEF_UPPERLAYERPDUIDOFTXNSDU                           STD_OFF
#define LINTP_ISDEF_CHANNELCONFIGOFPCCONFIG                           STD_ON
#define LINTP_ISDEF_CTRLOFPCCONFIG                                    STD_ON
#define LINTP_ISDEF_LINIFTOLINTPCHANNELOFPCCONFIG                     STD_ON
#define LINTP_ISDEF_RXNSDUOFPCCONFIG                                  STD_ON
#define LINTP_ISDEF_TXNSDUOFPCCONFIG                                  STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCEqualsAlwaysToDefines  LinTp Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define LINTP_EQ2_LINTP_SCHEDCHANGENOTIFYOFCHANNELCONFIG              
#define LINTP_EQ2_LINTP_STRICTNADCHECKOFCHANNELCONFIG                 
#define LINTP_EQ2_CHANNELOFLINIFTOLINTPCHANNEL                        
#define LINTP_EQ2_CTRLIDXOFRXNSDU                                     
#define LINTP_EQ2_NADOFRXNSDU                                         
#define LINTP_EQ2_NCROFRXNSDU                                         
#define LINTP_EQ2_UPPERLAYERPDUIDOFRXNSDU                             
#define LINTP_EQ2_ASSOCIATEDRXNSDUIDOFTXNSDU                          
#define LINTP_EQ2_CTRLIDXOFTXNSDU                                     
#define LINTP_EQ2_NADOFTXNSDU                                         
#define LINTP_EQ2_NASOFTXNSDU                                         
#define LINTP_EQ2_NCSOFTXNSDU                                         
#define LINTP_EQ2_UPPERLAYERPDUIDOFTXNSDU                             
#define LINTP_EQ2_CHANNELCONFIGOFPCCONFIG                             LinTp_ChannelConfig
#define LINTP_EQ2_CTRLOFPCCONFIG                                      LinTp_Ctrl.raw
#define LINTP_EQ2_LINIFTOLINTPCHANNELOFPCCONFIG                       LinTp_LinIfToLinTpChannel
#define LINTP_EQ2_RXNSDUOFPCCONFIG                                    LinTp_RxNSdu
#define LINTP_EQ2_TXNSDUOFPCCONFIG                                    LinTp_TxNSdu
/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCSymbolicInitializationPointers  LinTp Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define LinTp_Config_Ptr                                              NULL_PTR  /**< symbolic identifier which shall be used to initialize 'LinTp' */
/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCInitializationSymbols  LinTp Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define LinTp_Config                                                  NULL_PTR  /**< symbolic identifier which could be used to initialize 'LinTp */
/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCGeneral  LinTp General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define LINTP_CHECK_INIT_POINTER                                      STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define LINTP_FINAL_MAGIC_NUMBER                                      0x3E1EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of LinTp */
#define LINTP_INDIVIDUAL_POSTBUILD                                    STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'LinTp' is not configured to be postbuild capable. */
#define LINTP_INIT_DATA                                               LINTP_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define LINTP_INIT_DATA_HASH_CODE                                     -780818732L  /**< the precompile constant to validate the initialization structure at initialization time of LinTp with a hashcode. The seed value is '0x3E1EU' */
#define LINTP_USE_ECUM_BSW_ERROR_HOOK                                 STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define LINTP_USE_INIT_POINTER                                        STD_OFF  /**< STD_ON if the init pointer LinTp shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  LinTpLTDataSwitches  LinTp Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define LINTP_LTCONFIG                                                STD_OFF  /**< Deactivateable: 'LinTp_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  LinTpPBDataSwitches  LinTp Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define LINTP_PBCONFIG                                                STD_OFF  /**< Deactivateable: 'LinTp_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define LINTP_LTCONFIGIDXOFPBCONFIG                                   STD_OFF  /**< Deactivateable: 'LinTp_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define LINTP_PCCONFIGIDXOFPBCONFIG                                   STD_OFF  /**< Deactivateable: 'LinTp_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
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
  \defgroup  LinTpPCGetConstantDuplicatedRootDataMacros  LinTp Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define LinTp_GetChannelConfigOfPCConfig()                            LinTp_ChannelConfig  /**< the pointer to LinTp_ChannelConfig */
#define LinTp_GetCtrlOfPCConfig()                                     LinTp_Ctrl.raw  /**< the pointer to LinTp_Ctrl */
#define LinTp_GetLinIfToLinTpChannelOfPCConfig()                      LinTp_LinIfToLinTpChannel  /**< the pointer to LinTp_LinIfToLinTpChannel */
#define LinTp_GetMaxRespPendingFramesOfPCConfig()                     0x0003U  /**< Max number of RP frames */
#define LinTp_GetNumberOfLinTpRxNSduOfPCConfig()                      0x14U  /**< Size of LinTp_RxNSdu */
#define LinTp_GetNumberOfLinTpTxNSduOfPCConfig()                      0x19U  /**< Size of LinTp_TxNSdu */
#define LinTp_GetP2MaxTimeOfPCConfig()                                0x012DU  /**< P2Max timeout in ticks */
#define LinTp_GetP2TimeOfPCConfig()                                   0x0015U  /**< P2 timeout in ticks */
#define LinTp_GetRxNSduOfPCConfig()                                   LinTp_RxNSdu  /**< the pointer to LinTp_RxNSdu */
#define LinTp_GetSizeOfCtrlOfPCConfig()                               5U  /**< the number of accomplishable value elements in LinTp_Ctrl */
#define LinTp_GetTxNSduOfPCConfig()                                   LinTp_TxNSdu  /**< the pointer to LinTp_TxNSdu */
/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCGetDataMacros  LinTp Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define LinTp_IsLinTp_SchedChangeNotifyOfChannelConfig(Index)         ((LinTp_GetChannelConfigOfPCConfig()[(Index)].LinTp_SchedChangeNotifyOfChannelConfig) != FALSE)
#define LinTp_IsLinTp_StrictNADCheckOfChannelConfig(Index)            ((LinTp_GetChannelConfigOfPCConfig()[(Index)].LinTp_StrictNADCheckOfChannelConfig) != FALSE)
#define LinTp_GetCtrl(Index)                                          (LinTp_GetCtrlOfPCConfig()[(Index)])
#define LinTp_GetChannelOfLinIfToLinTpChannel(Index)                  (LinTp_GetLinIfToLinTpChannelOfPCConfig()[(Index)].ChannelOfLinIfToLinTpChannel)
#define LinTp_GetCtrlIdxOfRxNSdu(Index)                               (LinTp_GetRxNSduOfPCConfig()[(Index)].CtrlIdxOfRxNSdu)
#define LinTp_GetNADOfRxNSdu(Index)                                   (LinTp_GetRxNSduOfPCConfig()[(Index)].NADOfRxNSdu)
#define LinTp_GetNcrOfRxNSdu(Index)                                   (LinTp_GetRxNSduOfPCConfig()[(Index)].NcrOfRxNSdu)
#define LinTp_GetUpperLayerPduIdOfRxNSdu(Index)                       (LinTp_GetRxNSduOfPCConfig()[(Index)].UpperLayerPduIdOfRxNSdu)
#define LinTp_GetAssociatedRxNSduIdOfTxNSdu(Index)                    (LinTp_GetTxNSduOfPCConfig()[(Index)].AssociatedRxNSduIdOfTxNSdu)
#define LinTp_GetCtrlIdxOfTxNSdu(Index)                               (LinTp_GetTxNSduOfPCConfig()[(Index)].CtrlIdxOfTxNSdu)
#define LinTp_GetNADOfTxNSdu(Index)                                   (LinTp_GetTxNSduOfPCConfig()[(Index)].NADOfTxNSdu)
#define LinTp_GetNasOfTxNSdu(Index)                                   (LinTp_GetTxNSduOfPCConfig()[(Index)].NasOfTxNSdu)
#define LinTp_GetNcsOfTxNSdu(Index)                                   (LinTp_GetTxNSduOfPCConfig()[(Index)].NcsOfTxNSdu)
#define LinTp_GetUpperLayerPduIdOfTxNSdu(Index)                       (LinTp_GetTxNSduOfPCConfig()[(Index)].UpperLayerPduIdOfTxNSdu)
/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCGetDeduplicatedDataMacros  LinTp Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define LinTp_GetMaxRespPendingFrames()                               LinTp_GetMaxRespPendingFramesOfPCConfig()
#define LinTp_GetNumberOfLinTpRxNSdu()                                LinTp_GetNumberOfLinTpRxNSduOfPCConfig()
#define LinTp_GetNumberOfLinTpTxNSdu()                                LinTp_GetNumberOfLinTpTxNSduOfPCConfig()
#define LinTp_GetP2MaxTime()                                          LinTp_GetP2MaxTimeOfPCConfig()
#define LinTp_GetP2Time()                                             LinTp_GetP2TimeOfPCConfig()
#define LinTp_GetSizeOfCtrl()                                         LinTp_GetSizeOfCtrlOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCSetDataMacros  LinTp Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define LinTp_SetCtrl(Index, Value)                                   LinTp_GetCtrlOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCGetAddressOfDataMacros  LinTp Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define LinTp_GetAddrCtrl(Index)                                      &LinTp_GetCtrl(Index)
/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCHasMacros  LinTp Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define LinTp_HasChannelConfig()                                      (TRUE != FALSE)
#define LinTp_HasLinTp_SchedChangeNotifyOfChannelConfig()             (TRUE != FALSE)
#define LinTp_HasLinTp_StrictNADCheckOfChannelConfig()                (TRUE != FALSE)
#define LinTp_HasCtrl()                                               (TRUE != FALSE)
#define LinTp_HasLinIfToLinTpChannel()                                (TRUE != FALSE)
#define LinTp_HasChannelOfLinIfToLinTpChannel()                       (TRUE != FALSE)
#define LinTp_HasMaxRespPendingFrames()                               (TRUE != FALSE)
#define LinTp_HasNumberOfLinTpRxNSdu()                                (TRUE != FALSE)
#define LinTp_HasNumberOfLinTpTxNSdu()                                (TRUE != FALSE)
#define LinTp_HasP2MaxTime()                                          (TRUE != FALSE)
#define LinTp_HasP2Time()                                             (TRUE != FALSE)
#define LinTp_HasRxNSdu()                                             (TRUE != FALSE)
#define LinTp_HasCtrlIdxOfRxNSdu()                                    (TRUE != FALSE)
#define LinTp_HasNADOfRxNSdu()                                        (TRUE != FALSE)
#define LinTp_HasNcrOfRxNSdu()                                        (TRUE != FALSE)
#define LinTp_HasUpperLayerPduIdOfRxNSdu()                            (TRUE != FALSE)
#define LinTp_HasSizeOfCtrl()                                         (TRUE != FALSE)
#define LinTp_HasTxNSdu()                                             (TRUE != FALSE)
#define LinTp_HasAssociatedRxNSduIdOfTxNSdu()                         (TRUE != FALSE)
#define LinTp_HasCtrlIdxOfTxNSdu()                                    (TRUE != FALSE)
#define LinTp_HasNADOfTxNSdu()                                        (TRUE != FALSE)
#define LinTp_HasNasOfTxNSdu()                                        (TRUE != FALSE)
#define LinTp_HasNcsOfTxNSdu()                                        (TRUE != FALSE)
#define LinTp_HasUpperLayerPduIdOfTxNSdu()                            (TRUE != FALSE)
#define LinTp_HasPCConfig()                                           (TRUE != FALSE)
#define LinTp_HasChannelConfigOfPCConfig()                            (TRUE != FALSE)
#define LinTp_HasCtrlOfPCConfig()                                     (TRUE != FALSE)
#define LinTp_HasLinIfToLinTpChannelOfPCConfig()                      (TRUE != FALSE)
#define LinTp_HasMaxRespPendingFramesOfPCConfig()                     (TRUE != FALSE)
#define LinTp_HasNumberOfLinTpRxNSduOfPCConfig()                      (TRUE != FALSE)
#define LinTp_HasNumberOfLinTpTxNSduOfPCConfig()                      (TRUE != FALSE)
#define LinTp_HasP2MaxTimeOfPCConfig()                                (TRUE != FALSE)
#define LinTp_HasP2TimeOfPCConfig()                                   (TRUE != FALSE)
#define LinTp_HasRxNSduOfPCConfig()                                   (TRUE != FALSE)
#define LinTp_HasSizeOfCtrlOfPCConfig()                               (TRUE != FALSE)
#define LinTp_HasTxNSduOfPCConfig()                                   (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCIncrementDataMacros  LinTp Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define LinTp_IncCtrl(Index)                                          LinTp_GetCtrl(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCDecrementDataMacros  LinTp Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define LinTp_DecCtrl(Index)                                          LinTp_GetCtrl(Index)--
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
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  LinTpPCIterableTypes  LinTp Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate LinTp_ChannelConfig */
typedef uint8_least LinTp_ChannelConfigIterType;

/**   \brief  type used to iterate LinTp_Ctrl */
typedef uint8_least LinTp_CtrlIterType;

/**   \brief  type used to iterate LinTp_LinIfToLinTpChannel */
typedef uint8_least LinTp_LinIfToLinTpChannelIterType;

/**   \brief  type used to iterate LinTp_RxNSdu */
typedef uint8_least LinTp_RxNSduIterType;

/**   \brief  type used to iterate LinTp_TxNSdu */
typedef uint8_least LinTp_TxNSduIterType;

/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCValueTypes  LinTp Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for LinTp_LinTp_SchedChangeNotifyOfChannelConfig */
typedef boolean LinTp_LinTp_SchedChangeNotifyOfChannelConfigType;

/**   \brief  value based type definition for LinTp_LinTp_StrictNADCheckOfChannelConfig */
typedef boolean LinTp_LinTp_StrictNADCheckOfChannelConfigType;

/**   \brief  value based type definition for LinTp_ChannelOfLinIfToLinTpChannel */
typedef uint8 LinTp_ChannelOfLinIfToLinTpChannelType;

/**   \brief  value based type definition for LinTp_MaxRespPendingFrames */
typedef uint16 LinTp_MaxRespPendingFramesType;

/**   \brief  value based type definition for LinTp_NumberOfLinTpRxNSdu */
typedef uint8 LinTp_NumberOfLinTpRxNSduType;

/**   \brief  value based type definition for LinTp_NumberOfLinTpTxNSdu */
typedef uint8 LinTp_NumberOfLinTpTxNSduType;

/**   \brief  value based type definition for LinTp_P2MaxTime */
typedef uint16 LinTp_P2MaxTimeType;

/**   \brief  value based type definition for LinTp_P2Time */
typedef uint16 LinTp_P2TimeType;

/**   \brief  value based type definition for LinTp_CtrlIdxOfRxNSdu */
typedef uint16 LinTp_CtrlIdxOfRxNSduType;

/**   \brief  value based type definition for LinTp_NADOfRxNSdu */
typedef uint8 LinTp_NADOfRxNSduType;

/**   \brief  value based type definition for LinTp_NcrOfRxNSdu */
typedef uint16 LinTp_NcrOfRxNSduType;

/**   \brief  value based type definition for LinTp_UpperLayerPduIdOfRxNSdu */
typedef PduIdType LinTp_UpperLayerPduIdOfRxNSduType;

/**   \brief  value based type definition for LinTp_SizeOfCtrl */
typedef uint16 LinTp_SizeOfCtrlType;

/**   \brief  value based type definition for LinTp_AssociatedRxNSduIdOfTxNSdu */
typedef PduIdType LinTp_AssociatedRxNSduIdOfTxNSduType;

/**   \brief  value based type definition for LinTp_CtrlIdxOfTxNSdu */
typedef uint16 LinTp_CtrlIdxOfTxNSduType;

/**   \brief  value based type definition for LinTp_NADOfTxNSdu */
typedef uint8 LinTp_NADOfTxNSduType;

/**   \brief  value based type definition for LinTp_NasOfTxNSdu */
typedef uint16 LinTp_NasOfTxNSduType;

/**   \brief  value based type definition for LinTp_NcsOfTxNSdu */
typedef uint16 LinTp_NcsOfTxNSduType;

/**   \brief  value based type definition for LinTp_UpperLayerPduIdOfTxNSdu */
typedef PduIdType LinTp_UpperLayerPduIdOfTxNSduType;

/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCStructTypes  LinTp Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in LinTp_ChannelConfig */
typedef struct sLinTp_ChannelConfigType
{
  LinTp_LinTp_SchedChangeNotifyOfChannelConfigType LinTp_SchedChangeNotifyOfChannelConfig;
  LinTp_LinTp_StrictNADCheckOfChannelConfigType LinTp_StrictNADCheckOfChannelConfig;  /**< My comment /ActiveEcuC/LinTp/LinTpGlobalConfig/CHNL_def0ca51 */
} LinTp_ChannelConfigType;

/**   \brief  type used in LinTp_LinIfToLinTpChannel */
typedef struct sLinTp_LinIfToLinTpChannelType
{
  LinTp_ChannelOfLinIfToLinTpChannelType ChannelOfLinIfToLinTpChannel;
} LinTp_LinIfToLinTpChannelType;

/**   \brief  type used in LinTp_RxNSdu */
typedef struct sLinTp_RxNSduType
{
  LinTp_UpperLayerPduIdOfRxNSduType UpperLayerPduIdOfRxNSdu;  /**< RxNSdu external ID (SNV) */
  LinTp_CtrlIdxOfRxNSduType CtrlIdxOfRxNSdu;  /**< the index of the 1:1 relation pointing to LinTp_Ctrl */
  LinTp_NcrOfRxNSduType NcrOfRxNSdu;  /**< Ncr timeout in ticks */
  LinTp_NADOfRxNSduType NADOfRxNSdu;  /**< NAD */
} LinTp_RxNSduType;

/**   \brief  type used in LinTp_TxNSdu */
typedef struct sLinTp_TxNSduType
{
  LinTp_AssociatedRxNSduIdOfTxNSduType AssociatedRxNSduIdOfTxNSdu;
  LinTp_UpperLayerPduIdOfTxNSduType UpperLayerPduIdOfTxNSdu;
  LinTp_CtrlIdxOfTxNSduType CtrlIdxOfTxNSdu;  /**< the index of the 1:1 relation pointing to LinTp_Ctrl */
  LinTp_NasOfTxNSduType NasOfTxNSdu;  /**< Nas timeout in ticks */
  LinTp_NcsOfTxNSduType NcsOfTxNSdu;  /**< Ncs timeout in ticks */
  LinTp_NADOfTxNSduType NADOfTxNSdu;  /**< NAD */
} LinTp_TxNSduType;

/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCSymbolicStructTypes  LinTp Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to LinTp_Ctrl */
typedef struct sLinTp_CtrlStructTag
{
  LinTp_ControlType CHNL_8e3d5be2[1];
  LinTp_ControlType CHNL_08a9294c[1];
  LinTp_ControlType CHNL_45618847[1];
  LinTp_ControlType CHNL_c3f5fae9[1];
  LinTp_ControlType CHNL_def0ca51[1];
} sLinTp_CtrlStructType;

/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCUnionIndexAndSymbolTypes  LinTp Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access LinTp_Ctrl in an index and symbol based style. */
typedef union uLinTp_CtrlTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  LinTp_ControlType raw[5];
  sLinTp_CtrlStructType str;
} uLinTp_CtrlType;

/** 
  \}
*/ 

/** 
  \defgroup  LinTpPCRootValueTypes  LinTp Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in LinTp_PCConfig */
typedef struct sLinTp_PCConfigType
{
  uint8 LinTp_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} LinTp_PCConfigType;

typedef LinTp_PCConfigType LinTp_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  LinTp_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    LinTp_ChannelConfig
  \details
  Element                    Description
  LinTp_SchedChangeNotify
  LinTp_StrictNADCheck       My comment /ActiveEcuC/LinTp/LinTpGlobalConfig/CHNL_def0ca51
*/ 
#define LINTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(LinTp_ChannelConfigType, LINTP_CONST) LinTp_ChannelConfig[5];
#define LINTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinTp_LinIfToLinTpChannel
**********************************************************************************************************************/
/** 
  \var    LinTp_LinIfToLinTpChannel
  \details
  Element    Description
  Channel
*/ 
#define LINTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(LinTp_LinIfToLinTpChannelType, LINTP_CONST) LinTp_LinIfToLinTpChannel[5];
#define LINTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinTp_RxNSdu
**********************************************************************************************************************/
/** 
  \var    LinTp_RxNSdu
  \brief  List of all LinTp RxNsdus sorted by their PduId
  \details
  Element            Description
  UpperLayerPduId    RxNSdu external ID (SNV)
  CtrlIdx            the index of the 1:1 relation pointing to LinTp_Ctrl
  Ncr                Ncr timeout in ticks
  NAD                NAD
*/ 
#define LINTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(LinTp_RxNSduType, LINTP_CONST) LinTp_RxNSdu[20];
#define LINTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinTp_TxNSdu
**********************************************************************************************************************/
/** 
  \var    LinTp_TxNSdu
  \brief  List of all LinTp TxNsdus sorted by their PduId
  \details
  Element               Description
  AssociatedRxNSduId
  UpperLayerPduId   
  CtrlIdx               the index of the 1:1 relation pointing to LinTp_Ctrl
  Nas                   Nas timeout in ticks
  Ncs                   Ncs timeout in ticks
  NAD                   NAD
*/ 
#define LINTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(LinTp_TxNSduType, LINTP_CONST) LinTp_TxNSdu[25];
#define LINTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  LinTp_Ctrl
**********************************************************************************************************************/
#define LINTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uLinTp_CtrlType, LINTP_VAR_NOINIT) LinTp_Ctrl;  /* PRQA S 0759 */  /* MD_CSL_18.4 */  /* Data structure per LinIf channel */
#define LINTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
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




#endif


