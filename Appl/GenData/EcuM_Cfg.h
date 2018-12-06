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
 *            Module: EcuM
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: EcuM_Cfg.h
 *   Generation Time: 2018-12-01 17:02:19
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


#if !defined(ECUM_CFG_H)
#define ECUM_CFG_H

/**********************************************************************************************************************
 *  PRE-COMPILE Switches
 *********************************************************************************************************************/
/* pre-compile switches for EcuM configuration and services */
#ifndef ECUM_DEV_ERROR_DETECT
#define ECUM_DEV_ERROR_DETECT STD_OFF
#endif
#ifndef ECUM_DEV_ERROR_REPORT
#define ECUM_DEV_ERROR_REPORT STD_OFF
#endif

# define ECUM_DEFERRED_BSWM_NOTIFICATION                              (STD_OFF)
# define ECUM_SLAVE_CORE_HANDLING                                     (STD_OFF)
# define ECUM_BSW_ERROR_HOOK                                          (STD_ON)


/* pre-compile switches for module API */
# define ECUM_VERSION_INFO_API                                        (STD_ON)

/* pre-compile switches for the EcuMFlex Behavior */ 
# define ECUM_ENABLE_DEF_BEHAVIOR                                     (STD_OFF)
# define ECUM_RESET_LOOP_DETECTION                                    (STD_OFF)
# define ECUM_ALARM_CLOCK_PRESENT                                     (STD_OFF)
# define ECUM_MODE_HANDLING                                           (STD_OFF)



/* pre-compile switches for the EcuMFixed Behavior */
# define ECUM_FIXED_BEHAVIOR                                          (STD_OFF)
# define ECUM_SUPPORT_RTE                                             (STD_OFF)
# define ECUM_SUPPORT_RTE_MODE_SWITCH                                 (STD_OFF)
# define ECUM_SUPPORT_RTE_MODE_SWITCH_ACK                             (STD_OFF)
# define ECUM_INCLUDE_NVRAM_MGR                                       (STD_OFF)
# define ECUM_SUPPORT_DEM                                             (STD_OFF)
# define ECUM_SUPPORT_COMM                                            (STD_OFF)

/* current configuration variant ECUM_VARIANT_PRECOMPILE  || ECUM_VARIANT_POSTBUILD */
# define ECUM_PRECOMPILE_CRC_HASH_UPPER                               (0x3D14460BUL)
# define ECUM_PRECOMPILE_CRC_HASH_LOWER                               (0x1089DD72UL)
# define ECUM_GENERATOR_COMPATIBILITY_VERSION                         (0x0800U)

/* General Defines */
#ifndef ECUM_USE_DUMMY_FUNCTIONS
#define ECUM_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef ECUM_USE_DUMMY_STATEMENT
#define ECUM_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef ECUM_DUMMY_STATEMENT
#define ECUM_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef ECUM_DUMMY_STATEMENT_CONST
#define ECUM_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef ECUM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define ECUM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef ECUM_ATOMIC_VARIABLE_ACCESS
#define ECUM_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef ECUM_PROCESSOR_MPC5746C
#define ECUM_PROCESSOR_MPC5746C
#endif
#ifndef ECUM_COMP_DIAB
#define ECUM_COMP_DIAB
#endif
#ifndef ECUM_GEN_GENERATOR_MSR
#define ECUM_GEN_GENERATOR_MSR
#endif
#ifndef ECUM_CPUTYPE_BITORDER_MSB2LSB
#define ECUM_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef ECUM_CONFIGURATION_VARIANT_PRECOMPILE
#define ECUM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef ECUM_CONFIGURATION_VARIANT_LINKTIME
#define ECUM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef ECUM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define ECUM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef ECUM_CONFIGURATION_VARIANT
#define ECUM_CONFIGURATION_VARIANT ECUM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#endif
#ifndef ECUM_POSTBUILD_VARIANT_SUPPORT
#define ECUM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/**********************************************************************************************************************
 *  PRE-COMPILE Parameters
 *********************************************************************************************************************/
/* Variables that are used to determine the arraysizes or the number of some modes */
#define ECUM_RESETMODECOUNT                                           (4U)
#define ECUM_SHUTDOWNCAUSECOUNT                                       (4U)
#define ECUM_NUMBER_OF_CORES                                          (1U)

#define ECUM_CORE_ID_STARTUP                                          OS_CORE_ID_MASTER
#define ECUM_CORE_ID_BSW                                              OS_CORE_ID_MASTER
#define ECUM_OS_RESOURCE                                              OsResource /*  The selected OsResource  */ 


#define ECUM_BSWM_CONFIG_POINTER                                      BswM_Config_Ptr
#define ECUM_SCHM_CONFIG_POINTER                                      
#define ECUM_FIRST_CONFIG_STRUCTURE                                   &EcuM_GlobalConfigRoot.GlobalConfiguration


# if (STD_ON == ECUM_DEV_ERROR_DETECT)
#  define EcuM_Det_ReportError(EcuM_FunctionId, EcuM_ErrorCode)       ((void)Det_ReportError((ECUM_MODULE_ID), (ECUM_INSTANCE_ID), (EcuM_FunctionId), (EcuM_ErrorCode))) /* PRQA S 3453 */ /* MD_EcuM_3453 */
# else
#  define EcuM_Det_ReportError(EcuM_FunctionId, EcuM_ErrorCode)  
# endif

/*---- configurable DEM Errors ---------------------------------------------*/
#define ECUM_E_RAM_CHECK_FAILED                DemConf_DemEventParameter_AutoCreatedDemEvent_ECUM_E_RAM_CHECK_FAILED /*  Dem Event Id  */  
#define ECUM_E_IMPROPER_CALLER                 DemConf_DemEventParameter_AutoCreatedDemEvent_ECUM_E_IMPROPER_CALLER /*  Dem Event Id  */  
#define ECUM_E_CONFIGURATION_DATA_INCONSISTENT DemConf_DemEventParameter_AutoCreatedDemEvent_ECUM_E_CONFIGURATION_DATA_INCONSISTENT /*  Dem Event Id  */  
#define ECUM_E_ALL_RUN_REQUESTS_KILLED         DemConf_DemEventParameter_AutoCreatedDemEvent_ECUM_E_ALL_RUN_REQUESTS_KILLED /*  Dem Event Id  */  



/**********************************************************************************************************************
 *  POSTBUILD Parameters
 *********************************************************************************************************************/
 
 /**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/* Postbuild */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  EcuMPBDataSwitches  EcuM Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define ECUM_ECUM_CRCHASH_LOWER                                       STD_ON
#define ECUM_ECUM_CRCHASH_UPPER                                       STD_ON
#define ECUM_FINALMAGICNUMBER                                         STD_ON
#define ECUM_GENERATORCOMPATIBILITYVERSION                            STD_ON
#define ECUM_INITDATAHASHCODE                                         STD_ON
#define ECUM_PBCONFIG                                                 STD_ON
#define ECUM_ECUM_CRCHASH_LOWEROFPBCONFIG                             STD_ON
#define ECUM_ECUM_CRCHASH_UPPEROFPBCONFIG                             STD_ON
#define ECUM_FINALMAGICNUMBEROFPBCONFIG                               STD_ON
#define ECUM_GENERATORCOMPATIBILITYVERSIONOFPBCONFIG                  STD_ON
#define ECUM_INITDATAHASHCODEOFPBCONFIG                               STD_ON
#define ECUM_LTCONFIGIDXOFPBCONFIG                                    STD_OFF  /**< Deactivateable: 'EcuM_PBConfig.LTConfigIdx' Reason: 'the module configuration does not support flashing of data and is not selectable.' */
#define ECUM_PCCONFIGIDXOFPBCONFIG                                    STD_OFF  /**< Deactivateable: 'EcuM_PBConfig.PCConfigIdx' Reason: 'the module configuration does not support flashing of data and is not selectable.' */
/** 
  \}
*/ 

/** 
  \defgroup  EcuMPBIsReducedToDefineDefines  EcuM Is Reduced To Define Defines (POST_BUILD)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define ECUM_ISDEF_ECUM_CRCHASH_LOWEROFPBCONFIG                       STD_OFF
#define ECUM_ISDEF_ECUM_CRCHASH_UPPEROFPBCONFIG                       STD_OFF
#define ECUM_ISDEF_FINALMAGICNUMBEROFPBCONFIG                         STD_OFF
#define ECUM_ISDEF_GENERATORCOMPATIBILITYVERSIONOFPBCONFIG            STD_OFF
#define ECUM_ISDEF_INITDATAHASHCODEOFPBCONFIG                         STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  EcuMPBEqualsAlwaysToDefines  EcuM Equals Always To Defines (POST_BUILD)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define ECUM_EQ2_ECUM_CRCHASH_LOWEROFPBCONFIG                         
#define ECUM_EQ2_ECUM_CRCHASH_UPPEROFPBCONFIG                         
#define ECUM_EQ2_FINALMAGICNUMBEROFPBCONFIG                           
#define ECUM_EQ2_GENERATORCOMPATIBILITYVERSIONOFPBCONFIG              
#define ECUM_EQ2_INITDATAHASHCODEOFPBCONFIG                           
/** 
  \}
*/ 

/** 
  \defgroup  EcuMPBSymbolicInitializationPointers  EcuM Symbolic Initialization Pointers (POST_BUILD)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define EcuM_Config_Ptr                                               &(EcuM_PBConfig.Config)  /**< symbolic identifier which shall be used to initialize 'EcuM' */
/** 
  \}
*/ 

/** 
  \defgroup  EcuMPBInitializationSymbols  EcuM Initialization Symbols (POST_BUILD)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define EcuM_Config                                                   EcuM_PBConfig.Config  /**< symbolic identifier which could be used to initialize 'EcuM */
/** 
  \}
*/ 

/** 
  \defgroup  EcuMPBGeneral  EcuM General (POST_BUILD)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define ECUM_CHECK_INIT_POINTER                                       STD_ON  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define ECUM_FINAL_MAGIC_NUMBER                                       0x0A1EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of EcuM */
#define ECUM_INDIVIDUAL_POSTBUILD                                     STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. A container 'DefinitionRef: /MICROSAR/EcuC/EcucGeneral/PostbuildLoadable/IndividualPostBuildLoadableModule/ModuleInitializationStructure' in an invariant view with the shortname 'EcuM_PBConfig' has to be configured to activate the feature module individual postbuild. */
#define ECUM_INIT_DATA                                                ECUM_PBCFG  /**< CompilerMemClassDefine for the initialization data. */
#define ECUM_INIT_DATA_HASH_CODE                                      1377999756L  /**< the precompile constant to validate the initialization structure at initialization time of EcuM with a hashcode. The seed value is '0x0A1EU' */
#define ECUM_USE_ECUM_BSW_ERROR_HOOK                                  STD_ON  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define ECUM_USE_INIT_POINTER                                         STD_ON  /**< STD_ON if the init pointer EcuM shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  EcuMPCDataSwitches  EcuM Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define ECUM_ALARMCLOCKTIMEOUT                                        STD_OFF  /**< Deactivateable: 'EcuM_AlarmClockTimeOut' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define ECUM_COMMPNCS                                                 STD_OFF  /**< Deactivateable: 'EcuM_ComMPNCs' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define ECUM_PNCOFCOMMPNCS                                            STD_OFF  /**< Deactivateable: 'EcuM_ComMPNCs.PNC' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define ECUM_CORERESOURCE                                             STD_OFF  /**< Deactivateable: 'EcuM_CoreResource' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define ECUM_DEFAULTAPPMODE                                           STD_ON
#define ECUM_DEFAULTSHUTDOWNMODE                                      STD_ON
#define ECUM_DEFAULTSHUTDOWNTARGET                                    STD_ON
#define ECUM_DRIVERINITONE                                            STD_ON
#define ECUM_FUNCTIONOFDRIVERINITONE                                  STD_ON
#define ECUM_DRIVERRESTARTLIST                                        STD_ON
#define ECUM_FUNCTIONOFDRIVERRESTARTLIST                              STD_ON
#define ECUM_FLEXUSER                                                 STD_OFF  /**< Deactivateable: 'EcuM_FlexUser' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define ECUM_ALARMCLOCKIDOFFLEXUSER                                   STD_OFF  /**< Deactivateable: 'EcuM_FlexUser.AlarmClockId' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define ECUM_GODOWNALLOWEDOFFLEXUSER                                  STD_OFF  /**< Deactivateable: 'EcuM_FlexUser.GoDownAllowed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define ECUM_MODULEIDOFFLEXUSER                                       STD_OFF  /**< Deactivateable: 'EcuM_FlexUser.ModuleId' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define ECUM_SETCLOCKALLOWEDOFFLEXUSER                                STD_OFF  /**< Deactivateable: 'EcuM_FlexUser.SetClockAllowed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define ECUM_MAXWAKEUPSOURCECOUNT                                     STD_ON
#define ECUM_MODULESTATE                                              STD_ON
#define ECUM_NORMALMCUMODE                                            STD_ON
#define ECUM_SIZEOFDRIVERINITONE                                      STD_ON
#define ECUM_SIZEOFDRIVERRESTARTLIST                                  STD_ON
#define ECUM_SIZEOFSLEEPMODELIST                                      STD_ON
#define ECUM_SIZEOFWAKEUPSOURCELIST                                   STD_ON
#define ECUM_SLEEPMODELIST                                            STD_ON
#define ECUM_MCUMODEOFSLEEPMODELIST                                   STD_ON
#define ECUM_POLLINGOFSLEEPMODELIST                                   STD_OFF  /**< Deactivateable: 'EcuM_SleepModeList.Polling' Reason: 'the value of EcuM_PollingOfSleepModeList is always 'false' due to this, the array is deactivated.' */
#define ECUM_VALIDOFSLEEPMODELIST                                     STD_OFF  /**< Deactivateable: 'EcuM_SleepModeList.Valid' Reason: 'the value of EcuM_ValidOfSleepModeList is always 'true' due to this, the array is deactivated.' */
#define ECUM_WAKEUPSOURCEOFSLEEPMODELIST                              STD_ON
#define ECUM_VALIDATIONTIMEOUTTABLE                                   STD_OFF  /**< Deactivateable: 'EcuM_ValidationTimeoutTable' Reason: 'No validation timeouts configured.' */
#define ECUM_WAKEUPSOURCELIST                                         STD_ON
#define ECUM_CHANNELOFWAKEUPSOURCELIST                                STD_ON
#define ECUM_CHECKWAKEUPTIMEOFWAKEUPSOURCELIST                        STD_OFF  /**< Deactivateable: 'EcuM_WakeupSourceList.CheckWakeupTime' Reason: 'the value of EcuM_CheckWakeupTimeOfWakeupSourceList is always '0' due to this, the array is deactivated.' */
#define ECUM_COMMPNCSENDIDXOFWAKEUPSOURCELIST                         STD_OFF  /**< Deactivateable: 'EcuM_WakeupSourceList.ComMPNCsEndIdx' Reason: 'the optional indirection is deactivated because ComMPNCsUsedOfWakeupSourceList is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define ECUM_COMMPNCSSTARTIDXOFWAKEUPSOURCELIST                       STD_OFF  /**< Deactivateable: 'EcuM_WakeupSourceList.ComMPNCsStartIdx' Reason: 'the optional indirection is deactivated because ComMPNCsUsedOfWakeupSourceList is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define ECUM_COMMPNCSUSEDOFWAKEUPSOURCELIST                           STD_OFF  /**< Deactivateable: 'EcuM_WakeupSourceList.ComMPNCsUsed' Reason: 'the optional indirection is deactivated because ComMPNCsUsedOfWakeupSourceList is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define ECUM_POLLINGOFWAKEUPSOURCELIST                                STD_OFF  /**< Deactivateable: 'EcuM_WakeupSourceList.Polling' Reason: 'the value of EcuM_PollingOfWakeupSourceList is always 'false' due to this, the array is deactivated.' */
#define ECUM_REASONOFWAKEUPSOURCELIST                                 STD_OFF  /**< Deactivateable: 'EcuM_WakeupSourceList.Reason' Reason: 'No Mcu Reset Reason configured.' */
#define ECUM_VALIDOFWAKEUPSOURCELIST                                  STD_OFF  /**< Deactivateable: 'EcuM_WakeupSourceList.Valid' Reason: 'the value of EcuM_ValidOfWakeupSourceList is always 'true' due to this, the array is deactivated.' */
#define ECUM_VALIDATIONTIMEOFWAKEUPSOURCELIST                         STD_OFF  /**< Deactivateable: 'EcuM_WakeupSourceList.ValidationTime' Reason: 'the value of EcuM_ValidationTimeOfWakeupSourceList is always '0' due to this, the array is deactivated.' */
#define ECUM_PCCONFIG                                                 STD_ON
#define ECUM_DEFAULTAPPMODEOFPCCONFIG                                 STD_ON
#define ECUM_DEFAULTSHUTDOWNMODEOFPCCONFIG                            STD_ON
#define ECUM_DEFAULTSHUTDOWNTARGETOFPCCONFIG                          STD_ON
#define ECUM_DRIVERINITONEOFPCCONFIG                                  STD_ON
#define ECUM_DRIVERRESTARTLISTOFPCCONFIG                              STD_ON
#define ECUM_MAXWAKEUPSOURCECOUNTOFPCCONFIG                           STD_ON
#define ECUM_MODULESTATEOFPCCONFIG                                    STD_ON
#define ECUM_NORMALMCUMODEOFPCCONFIG                                  STD_ON
#define ECUM_SIZEOFDRIVERINITONEOFPCCONFIG                            STD_ON
#define ECUM_SIZEOFDRIVERRESTARTLISTOFPCCONFIG                        STD_ON
#define ECUM_SIZEOFSLEEPMODELISTOFPCCONFIG                            STD_ON
#define ECUM_SIZEOFWAKEUPSOURCELISTOFPCCONFIG                         STD_ON
#define ECUM_SLEEPMODELISTOFPCCONFIG                                  STD_ON
#define ECUM_WAKEUPSOURCELISTOFPCCONFIG                               STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  EcuMPCIsReducedToDefineDefines  EcuM Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define ECUM_ISDEF_FUNCTIONOFDRIVERINITONE                            STD_OFF
#define ECUM_ISDEF_FUNCTIONOFDRIVERRESTARTLIST                        STD_OFF
#define ECUM_ISDEF_MCUMODEOFSLEEPMODELIST                             STD_ON
#define ECUM_ISDEF_WAKEUPSOURCEOFSLEEPMODELIST                        STD_ON
#define ECUM_ISDEF_CHANNELOFWAKEUPSOURCELIST                          STD_OFF
#define ECUM_ISDEF_DRIVERINITONEOFPCCONFIG                            STD_ON
#define ECUM_ISDEF_DRIVERRESTARTLISTOFPCCONFIG                        STD_ON
#define ECUM_ISDEF_MODULESTATEOFPCCONFIG                              STD_ON
#define ECUM_ISDEF_SLEEPMODELISTOFPCCONFIG                            STD_ON
#define ECUM_ISDEF_WAKEUPSOURCELISTOFPCCONFIG                         STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  EcuMPCEqualsAlwaysToDefines  EcuM Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define ECUM_EQ2_FUNCTIONOFDRIVERINITONE                              
#define ECUM_EQ2_FUNCTIONOFDRIVERRESTARTLIST                          
#define ECUM_EQ2_MCUMODEOFSLEEPMODELIST                               McuConf_McuModeSettingConf_McuModeSettingConf_0
#define ECUM_EQ2_WAKEUPSOURCEOFSLEEPMODELIST                          32UL
#define ECUM_EQ2_CHANNELOFWAKEUPSOURCELIST                            
#define ECUM_EQ2_DRIVERINITONEOFPCCONFIG                              EcuM_DriverInitOne
#define ECUM_EQ2_DRIVERRESTARTLISTOFPCCONFIG                          EcuM_DriverRestartList
#define ECUM_EQ2_MODULESTATEOFPCCONFIG                                EcuM_ModuleState
#define ECUM_EQ2_SLEEPMODELISTOFPCCONFIG                              EcuM_SleepModeList
#define ECUM_EQ2_WAKEUPSOURCELISTOFPCCONFIG                           EcuM_WakeupSourceList
/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
typedef P2FUNC ( void, ECUM_CODE, EcuM_DriverFuncType)( void );

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  EcuMPBValueTypes  EcuM Value Types (POST_BUILD)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for EcuM_EcuM_CRCHash_Lower */
typedef uint32 EcuM_EcuM_CRCHash_LowerType;

/**   \brief  value based type definition for EcuM_EcuM_CRCHash_Upper */
typedef uint32 EcuM_EcuM_CRCHash_UpperType;

/**   \brief  value based type definition for EcuM_FinalMagicNumber */
typedef uint16 EcuM_FinalMagicNumberType;

/**   \brief  value based type definition for EcuM_GeneratorCompatibilityVersion */
typedef uint16 EcuM_GeneratorCompatibilityVersionType;

/**   \brief  value based type definition for EcuM_InitDataHashCode */
typedef sint32 EcuM_InitDataHashCodeType;

/** 
  \}
*/ 

/** 
  \defgroup  EcuMPBRootValueTypes  EcuM Root Value Types (POST_BUILD)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in EcuM_PBConfig */
typedef struct sEcuM_PBConfigType
{
  EcuM_InitDataHashCodeType InitDataHashCodeOfPBConfig;  /**< the hashcode to validate the initialization structure at initialization time of EcuM */
  EcuM_EcuM_CRCHash_LowerType EcuM_CRCHash_LowerOfPBConfig;
  EcuM_EcuM_CRCHash_UpperType EcuM_CRCHash_UpperOfPBConfig;
  EcuM_GeneratorCompatibilityVersionType GeneratorCompatibilityVersionOfPBConfig;
  EcuM_FinalMagicNumberType FinalMagicNumberOfPBConfig;  /**< the FinalMagicNumber to validate the size of the initialization structure at initialization time of EcuM */
} EcuM_PBConfigType;

typedef EcuM_PBConfigType EcuM_PbConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/**   \brief  type to access EcuM_PBConfig in a symbol based style. */
typedef struct sEcuM_PBConfigsType
{
  EcuM_PBConfigType Config;  /**< [Config] */
} EcuM_PBConfigsType;

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  EcuMPCIterableTypes  EcuM Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate EcuM_DriverInitOne */
typedef uint8_least EcuM_DriverInitOneIterType;

/**   \brief  type used to iterate EcuM_DriverRestartList */
typedef uint8_least EcuM_DriverRestartListIterType;

/**   \brief  type used to iterate EcuM_SleepModeList */
typedef uint8_least EcuM_SleepModeListIterType;

/**   \brief  type used to iterate EcuM_WakeupSourceList */
typedef uint8_least EcuM_WakeupSourceListIterType;

/** 
  \}
*/ 

/** 
  \defgroup  EcuMPCValueTypes  EcuM Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for EcuM_DefaultAppMode */
typedef uint32 EcuM_DefaultAppModeType;

/**   \brief  value based type definition for EcuM_DefaultShutdownMode */
typedef uint8 EcuM_DefaultShutdownModeType;

/**   \brief  value based type definition for EcuM_MaxWakeupSourceCount */
typedef uint8 EcuM_MaxWakeupSourceCountType;

/**   \brief  value based type definition for EcuM_NormalMcuMode */
typedef uint32 EcuM_NormalMcuModeType;

/**   \brief  value based type definition for EcuM_SizeOfDriverInitOne */
typedef uint8 EcuM_SizeOfDriverInitOneType;

/**   \brief  value based type definition for EcuM_SizeOfDriverRestartList */
typedef uint8 EcuM_SizeOfDriverRestartListType;

/**   \brief  value based type definition for EcuM_SizeOfSleepModeList */
typedef uint8 EcuM_SizeOfSleepModeListType;

/**   \brief  value based type definition for EcuM_SizeOfWakeupSourceList */
typedef uint8 EcuM_SizeOfWakeupSourceListType;

/**   \brief  value based type definition for EcuM_McuModeOfSleepModeList */
typedef uint8 EcuM_McuModeOfSleepModeListType;

/**   \brief  value based type definition for EcuM_WakeupSourceOfSleepModeList */
typedef uint8 EcuM_WakeupSourceOfSleepModeListType;

/**   \brief  value based type definition for EcuM_ChannelOfWakeupSourceList */
typedef uint8 EcuM_ChannelOfWakeupSourceListType;

/** 
  \}
*/ 

/** 
  \defgroup  EcuMPCStructTypes  EcuM Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in EcuM_DriverInitOne */
typedef struct sEcuM_DriverInitOneType
{
  EcuM_DriverFuncType FunctionOfDriverInitOne;
} EcuM_DriverInitOneType;

/**   \brief  type used in EcuM_DriverRestartList */
typedef struct sEcuM_DriverRestartListType
{
  EcuM_DriverFuncType FunctionOfDriverRestartList;
} EcuM_DriverRestartListType;

/**   \brief  type used in EcuM_SleepModeList */
typedef struct sEcuM_SleepModeListType
{
  uint8 EcuM_SleepModeListNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} EcuM_SleepModeListType;

/**   \brief  type used in EcuM_WakeupSourceList */
typedef struct sEcuM_WakeupSourceListType
{
  EcuM_ChannelOfWakeupSourceListType ChannelOfWakeupSourceList;  /**< Mapped ComM channel number - 255 if no ComM channel is assigned. */
} EcuM_WakeupSourceListType;

/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  EcuM_PBConfig
**********************************************************************************************************************/
/** 
  \var    EcuM_PBConfig
  \details
  Element                          Description
  InitDataHashCode                 the hashcode to validate the initialization structure at initialization time of EcuM
  EcuM_CRCHash_Lower           
  EcuM_CRCHash_Upper           
  GeneratorCompatibilityVersion
  FinalMagicNumber                 the FinalMagicNumber to validate the size of the initialization structure at initialization time of EcuM
*/ 
#define ECUM_START_SEC_PBCFG
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(EcuM_PBConfigsType, ECUM_PBCFG) EcuM_PBConfig;
#define ECUM_STOP_SEC_PBCFG
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/





#endif /* ECUM_CFG_H */
/**********************************************************************************************************************
 *  END OF FILE: ECUM_CFG.H
 *********************************************************************************************************************/


