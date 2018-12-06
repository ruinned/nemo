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
 *            Module: Dem
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dem_PBcfg.h
 *   Generation Time: 2018-11-22 03:14:20
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


/* configuration, interrupt handling and callback headers use different names
 * for the multiple inclusion protection define, shown in this example. The
 * appropriate names for these files can be taken from this list:
 *
 * Dem_Cfg.h:                   DEM_CFG_H
 * Dem_Lcfg.h:                  DEM_LCFG_H
 * Dem_PBcfg.h:                 DEM_PBFG_H
 * Dem_AdditionalIncludeCfg.h:  DEM_ADDITIONALINCLUDECFG_H
 * Dem_Swc.h:                   DEM_SWC_H
 * Dem_Swc_Types.h:             DEM_SWC_TYPES_H
 */
#if !defined (DEM_PBCFG_H)
# define DEM_PBCFG_H

/**********************************************************************************************************************
  MISRA JUSTIFICATIONS
**********************************************************************************************************************/

/* PRQA S 0779 EOF */ /* MD_DEM_5.1 */                                          /* Identifier does not differ in 32 significant characters. */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgPBDataSwitches  Dem_Cfg Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define DEM_CFG_COMPATIBILITYVERSION                                  STD_ON
#define DEM_CFG_CONFIGURATIONID                                       STD_ON
#define DEM_CFG_CYCLEIDTABLE                                          STD_ON
#define DEM_CFG_ENDSONINITOFCYCLEIDTABLE                              STD_OFF  /**< Deactivateable: 'Dem_Cfg_CycleIdTable.EndsOnInit' Reason: 'no DemOperationCycle/DemOperationCycleAutomaticEnd defined or all defined parameters are 'false'' */
#define DEM_CFG_OPCYCLETYPEOFCYCLEIDTABLE                             STD_ON
#define DEM_CFG_USEDFORAGINGOFCYCLEIDTABLE                            STD_ON
#define DEM_CFG_DATACOLLECTIONTABLE                                   STD_ON
#define DEM_CFG_COLLECTIONSIZEOFDATACOLLECTIONTABLE                   STD_ON
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE STD_ON
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE STD_ON
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTINDUSEDOFDATACOLLECTIONTABLE  STD_ON
#define DEM_CFG_DIDOFFSETFASTOFDATACOLLECTIONTABLE                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_DataCollectionTable.DidOffsetFast' Reason: '(DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST == STD_OFF) && (DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST == STD_OFF)' */
#define DEM_CFG_DIDOFFSETNORMALOFDATACOLLECTIONTABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_DataCollectionTable.DidOffsetNormal' Reason: '(DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL == STD_OFF) && (DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL == STD_OFF)' */
#define DEM_CFG_IDNUMBEROFDATACOLLECTIONTABLE                         STD_ON
#define DEM_CFG_STORAGEKINDOFDATACOLLECTIONTABLE                      STD_ON
#define DEM_CFG_UPDATEOFDATACOLLECTIONTABLE                           STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEEDR2COLLIND                        STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEFFM2COLLIND                        STD_ON
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTIND                           STD_ON
#define DEM_CFG_DEBOUNCEHIRESTABLE                                    STD_ON
#define DEM_CFG_DEBOUNCELORESTABLE                                    STD_ON
#define DEM_CFG_DEBOUNCETABLE                                         STD_ON
#define DEM_CFG_DEBOUNCECONTINUOUSOFDEBOUNCETABLE                     STD_ON
#define DEM_CFG_DECREMENTSTEPSIZEOFDEBOUNCETABLE                      STD_ON
#define DEM_CFG_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE                 STD_ON
#define DEM_CFG_EVENTDEBOUNCEBEHAVIOROFDEBOUNCETABLE                  STD_ON
#define DEM_CFG_FAILTIMERCYCLESOFDEBOUNCETABLE                        STD_ON
#define DEM_CFG_FAILEDTHRESHOLDOFDEBOUNCETABLE                        STD_ON
#define DEM_CFG_INCREMENTSTEPSIZEOFDEBOUNCETABLE                      STD_ON
#define DEM_CFG_JUMPDOWNOFDEBOUNCETABLE                               STD_ON
#define DEM_CFG_JUMPDOWNVALUEOFDEBOUNCETABLE                          STD_ON
#define DEM_CFG_JUMPUPOFDEBOUNCETABLE                                 STD_ON
#define DEM_CFG_JUMPUPVALUEOFDEBOUNCETABLE                            STD_ON
#define DEM_CFG_PASSTIMERCYCLESOFDEBOUNCETABLE                        STD_ON
#define DEM_CFG_PASSEDTHRESHOLDOFDEBOUNCETABLE                        STD_ON
#define DEM_CFG_PRECONFIRMEDTHRESHOLDOFDEBOUNCETABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceTable.PreconfirmedThreshold' Reason: 'DemDebounceCounterPreconfirmedThreshold is not required' */
#define DEM_CFG_STORAGEOFDEBOUNCETABLE                                STD_ON
#define DEM_CFG_STORAGETHRESHOLDOFDEBOUNCETABLE                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceTable.StorageThreshold' Reason: 'DemEventDebounceCounterStorageThreshold is not required.' */
#define DEM_CFG_STORAGETIMERCYCLESOFDEBOUNCETABLE                     STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceTable.StorageTimerCycles' Reason: 'DemDebounceTimeStorageThreshold is not required. ' */
#define DEM_CFG_DTCJ1939TABLE                                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcJ1939Table' Reason: '(DEM_CFG_SUPPORT_J1939 == STD_OFF)' */
#define DEM_CFG_EVENTIDOFDTCJ1939TABLE                                STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcJ1939Table.EventId' Reason: '(DEM_CFG_SUPPORT_J1939 == STD_OFF)' */
#define DEM_CFG_J1939DTCOFDTCJ1939TABLE                               STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcJ1939Table.J1939Dtc' Reason: '(DEM_CFG_SUPPORT_J1939 == STD_OFF)' */
#define DEM_CFG_DTCNUMBERTABLE                                        STD_ON
#define DEM_CFG_EVENTIDOFDTCNUMBERTABLE                               STD_ON
#define DEM_CFG_OBDDTCOFDTCNUMBERTABLE                                STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcNumberTable.ObdDtc' Reason: '(DEM_CFG_SUPPORT_OBDII == STD_OFF)' */
#define DEM_CFG_UDSDTCOFDTCNUMBERTABLE                                STD_ON
#define DEM_CFG_DTRTABLE                                              STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtrTable' Reason: 'No Dtr support.' */
#define DEM_CFG_DIVISOROFDTRTABLE                                     STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtrTable.Divisor' Reason: 'No Dtr support.' */
#define DEM_CFG_EVENTTABLEIDXOFDTRTABLE                               STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtrTable.EventTableIdx' Reason: 'No Dtr support.' */
#define DEM_CFG_LINEARFACTOROFDTRTABLE                                STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtrTable.LinearFactor' Reason: 'No Dtr support.' */
#define DEM_CFG_OFFSETOFDTRTABLE                                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtrTable.Offset' Reason: 'No Dtr support.' */
#define DEM_CFG_UASIDOFDTRTABLE                                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtrTable.Uasid' Reason: 'No Dtr support.' */
#define DEM_CFG_UPDATEKINDOFDTRTABLE                                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtrTable.UpdateKind' Reason: 'No Dtr support.' */
#define DEM_CFG_DTRTABLEIND                                           STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtrTableInd' Reason: 'No Dtr support.' */
#define DEM_CFG_ENABLECONDITIONGROUPCOUNTER                           STD_ON
#define DEM_CFG_ENABLECONDITIONGROUPSTATE                             STD_ON
#define DEM_CFG_ENABLECONDITIONGROUPTABLE                             STD_ON
#define DEM_CFG_INDEXOFENABLECONDITIONGROUPTABLE                      STD_ON
#define DEM_CFG_ENABLECONDITIONGROUPTABLEIND                          STD_ON
#define DEM_CFG_ENABLECONDITIONTABLE                                  STD_ON
#define DEM_CFG_ENABLECONDITIONGROUPTABLEINDENDIDXOFENABLECONDITIONTABLE STD_ON
#define DEM_CFG_ENABLECONDITIONGROUPTABLEINDSTARTIDXOFENABLECONDITIONTABLE STD_ON
#define DEM_CFG_ENABLECONDITIONGROUPTABLEINDUSEDOFENABLECONDITIONTABLE STD_ON
#define DEM_CFG_EVENTAVAILABLEDEFAULT                                 STD_ON
#define DEM_CFG_EVENTTABLE                                            STD_ON
#define DEM_CFG_AGINGALLOWEDOFEVENTTABLE                              STD_ON
#define DEM_CFG_AGINGCYCLECOUNTERTHRESHOLDOFEVENTTABLE                STD_ON
#define DEM_CFG_AGINGCYCLEIDOFEVENTTABLE                              STD_ON
#define DEM_CFG_CALLBACKCLEAREVENTALLOWEDIDXOFEVENTTABLE              STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.CallbackClearEventAllowedIdx' Reason: 'All indirection targets are deactivated in all variants.' */
#define DEM_CFG_CALLBACKCLEAREVENTALLOWEDUSEDOFEVENTTABLE             STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.CallbackClearEventAllowedUsed' Reason: 'All indirection targets are deactivated in all variants.' */
#define DEM_CFG_CALLBACKGETFDCIDXOFEVENTTABLE                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.CallbackGetFdcIdx' Reason: '(DEM_CFG_SUPPORT_DEBOUNCE_MONITORINTERNAL == STD_OFF)' */
#define DEM_CFG_DEBOUNCETABLEIDXOFEVENTTABLE                          STD_ON
#define DEM_CFG_DTCNUMBERTABLEIDXOFEVENTTABLE                         STD_ON
#define DEM_CFG_DTCTABLEIDXOFEVENTTABLE                               STD_ON
#define DEM_CFG_DTRTABLEINDENDIDXOFEVENTTABLE                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.DtrTableIndEndIdx' Reason: 'All indirection targets are deactivated in all variants.' */
#define DEM_CFG_DTRTABLEINDSTARTIDXOFEVENTTABLE                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.DtrTableIndStartIdx' Reason: 'All indirection targets are deactivated in all variants.' */
#define DEM_CFG_DTRTABLEINDUSEDOFEVENTTABLE                           STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.DtrTableIndUsed' Reason: 'All indirection targets are deactivated in all variants.' */
#define DEM_CFG_ENABLECONDITIONGROUPTABLEIDXOFEVENTTABLE              STD_ON
#define DEM_CFG_EVENTDATACHANGEDIDXOFEVENTTABLE                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.EventDataChangedIdx' Reason: 'All indirection targets are deactivated in all variants.' */
#define DEM_CFG_EVENTDESTINATIONOFEVENTTABLE                          STD_ON
#define DEM_CFG_EVENTFAILURECYCLECOUNTERTHRESHOLDOFEVENTTABLE         STD_ON
#define DEM_CFG_EVENTKINDOFEVENTTABLE                                 STD_ON
#define DEM_CFG_EVENTLATCHTFOFEVENTTABLE                              STD_ON
#define DEM_CFG_EVENTPRIORITYOFEVENTTABLE                             STD_ON
#define DEM_CFG_EVENTSIGNIFICANCEOFEVENTTABLE                         STD_ON
#define DEM_CFG_EVENTSTATUSCHANGEDENDIDXOFEVENTTABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.EventStatusChangedEndIdx' Reason: 'All indirection targets are deactivated in all variants.' */
#define DEM_CFG_EVENTSTATUSCHANGEDSTARTIDXOFEVENTTABLE                STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.EventStatusChangedStartIdx' Reason: 'All indirection targets are deactivated in all variants.' */
#define DEM_CFG_EVENTSTATUSCHANGEDUSEDOFEVENTTABLE                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.EventStatusChangedUsed' Reason: 'All indirection targets are deactivated in all variants.' */
#define DEM_CFG_EXTENDEDDATATABLEIDXOFEVENTTABLE                      STD_ON
#define DEM_CFG_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE                 STD_ON
#define DEM_CFG_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE               STD_ON
#define DEM_CFG_FREEZEFRAMENUMTABLEUSEDOFEVENTTABLE                   STD_ON
#define DEM_CFG_FREEZEFRAMETABLESTDFFIDXOFEVENTTABLE                  STD_ON
#define DEM_CFG_HEALINGTARGETOFEVENTTABLE                             STD_ON
#define DEM_CFG_INITMONLISTFORFUNCIDXOFEVENTTABLE                     STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.InitMonListForFuncIdx' Reason: 'All indirection targets are deactivated in all variants.' */
#define DEM_CFG_INITMONITORFOREVENTIDXOFEVENTTABLE                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.InitMonitorForEventIdx' Reason: 'All indirection targets are deactivated in all variants.' */
#define DEM_CFG_INITMONITORFOREVENTUSEDOFEVENTTABLE                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.InitMonitorForEventUsed' Reason: 'All indirection targets are deactivated in all variants.' */
#define DEM_CFG_NORMALINDICATORTABLEENDIDXOFEVENTTABLE                STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.NormalIndicatorTableEndIdx' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_CFG_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE              STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.NormalIndicatorTableStartIdx' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_CFG_NORMALINDICATORTABLEUSEDOFEVENTTABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.NormalIndicatorTableUsed' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_CFG_OPERATIONCYCLEIDOFEVENTTABLE                          STD_ON
#define DEM_CFG_SATELLITEEVENTIDXOFEVENTTABLE                         STD_ON
#define DEM_CFG_SATELLITEINFOIDXOFEVENTTABLE                          STD_ON
#define DEM_CFG_STORAGECONDITIONGROUPTABLEIDXOFEVENTTABLE             STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.StorageConditionGroupTableIdx' Reason: '(DEM_CFG_HAS_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_STORAGECONDITIONGROUPTABLEUSEDOFEVENTTABLE            STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.StorageConditionGroupTableUsed' Reason: '(DEM_CFG_HAS_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_EXTENDEDDATATABLE                                     STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEEDR2COLLINDUSEDOFEXTENDEDDATATABLE STD_ON
#define DEM_CFG_MAXRECORDSIZEOFEXTENDEDDATATABLE                      STD_ON
#define DEM_CFG_FINALMAGICNUMBER                                      STD_ON
#define DEM_CFG_FREEZEFRAMETABLE                                      STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEFFM2COLLINDUSEDOFFREEZEFRAMETABLE  STD_ON
#define DEM_CFG_RECORDSIZEOFFREEZEFRAMETABLE                          STD_ON
#define DEM_CFG_RECORDSIZEUDSOFFREEZEFRAMETABLE                       STD_ON
#define DEM_CFG_GLOBALOBDREQUIREMENTS                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_GlobalObdRequirements' Reason: '((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))' */
#define DEM_CFG_GLOBALSEVERITYMASK                                    STD_ON
#define DEM_CFG_INITDATAHASHCODE                                      STD_ON
#define DEM_CFG_J1939NODEINDICATOR                                    STD_ON
#define DEM_CFG_MIDTABLE                                              STD_OFF  /**< Deactivateable: 'Dem_Cfg_MidTable' Reason: 'No Dtr support.' */
#define DEM_CFG_DTRTABLEIDXOFMIDTABLE                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_MidTable.DtrTableIdx' Reason: 'No Dtr support.' */
#define DEM_CFG_MIDOFMIDTABLE                                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_MidTable.Mid' Reason: 'No Dtr support.' */
#define DEM_CFG_TIDOFMIDTABLE                                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_MidTable.Tid' Reason: 'No Dtr support.' */
#define DEM_CFG_NORMALINDICATORTABLE                                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_NormalIndicatorTable' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_CFG_BEHAVIOROFNORMALINDICATORTABLE                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_NormalIndicatorTable.Behavior' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_CFG_IDOFNORMALINDICATORTABLE                              STD_OFF  /**< Deactivateable: 'Dem_Cfg_NormalIndicatorTable.Id' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_CFG_RATIOIDTABLE                                          STD_OFF  /**< Deactivateable: 'Dem_Cfg_RatioIdTable' Reason: 'no OBD support or no DemRatioId container configured' */
#define DEM_CFG_SATELLITETIMEDEBOUNCEINFO                             STD_ON
#define DEM_CFG_DEBOUNCEHIRESTABLEENDIDXOFSATELLITETIMEDEBOUNCEINFO   STD_ON
#define DEM_CFG_DEBOUNCEHIRESTABLESTARTIDXOFSATELLITETIMEDEBOUNCEINFO STD_ON
#define DEM_CFG_DEBOUNCEHIRESTABLEUSEDOFSATELLITETIMEDEBOUNCEINFO     STD_ON
#define DEM_CFG_DEBOUNCELORESTABLEENDIDXOFSATELLITETIMEDEBOUNCEINFO   STD_ON
#define DEM_CFG_DEBOUNCELORESTABLESTARTIDXOFSATELLITETIMEDEBOUNCEINFO STD_ON
#define DEM_CFG_DEBOUNCELORESTABLEUSEDOFSATELLITETIMEDEBOUNCEINFO     STD_ON
#define DEM_CFG_SIZEOFDEBOUNCEHIRESTABLE                              STD_ON
#define DEM_CFG_SIZEOFDEBOUNCELORESTABLE                              STD_ON
#define DEM_CFG_SIZEOFENABLECONDITIONGROUPCOUNTER                     STD_ON
#define DEM_CFG_SIZEOFENABLECONDITIONGROUPSTATE                       STD_ON
#define DEM_CFG_SIZEOFENABLECONDITIONGROUPTABLE                       STD_ON
#define DEM_CFG_SPECIALINDICATORTABLE                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_SpecialIndicatorTable' Reason: 'no special indicator is configured' */
#define DEM_CFG_BEHAVIOROFSPECIALINDICATORTABLE                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_SpecialIndicatorTable.Behavior' Reason: 'no special indicator is configured' */
#define DEM_CFG_IDOFSPECIALINDICATORTABLE                             STD_OFF  /**< Deactivateable: 'Dem_Cfg_SpecialIndicatorTable.Id' Reason: 'no special indicator is configured' */
#define DEM_CFG_STORAGECONDITIONGROUPCOUNTER                          STD_OFF  /**< Deactivateable: 'Dem_Cfg_StorageConditionGroupCounter' Reason: '(DEM_CFG_HAS_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_STORAGECONDITIONGROUPTABLE                            STD_OFF  /**< Deactivateable: 'Dem_Cfg_StorageConditionGroupTable' Reason: '(DEM_CFG_HAS_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_INDEXOFSTORAGECONDITIONGROUPTABLE                     STD_OFF  /**< Deactivateable: 'Dem_Cfg_StorageConditionGroupTable.Index' Reason: '(DEM_CFG_HAS_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_STORAGECONDITIONGROUPTABLEIND                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_StorageConditionGroupTableInd' Reason: '(DEM_CFG_HAS_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_STORAGECONDITIONTABLE                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_StorageConditionTable' Reason: '(DEM_CFG_HAS_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_STORAGECONDITIONGROUPTABLEINDENDIDXOFSTORAGECONDITIONTABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_StorageConditionTable.StorageConditionGroupTableIndEndIdx' Reason: '(DEM_CFG_HAS_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_STORAGECONDITIONGROUPTABLEINDSTARTIDXOFSTORAGECONDITIONTABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_StorageConditionTable.StorageConditionGroupTableIndStartIdx' Reason: '(DEM_CFG_HAS_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_STORAGECONDITIONGROUPTABLEINDUSEDOFSTORAGECONDITIONTABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_StorageConditionTable.StorageConditionGroupTableIndUsed' Reason: '(DEM_CFG_HAS_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_SUPPORTEDMIDSTABLE                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_SupportedMidsTable' Reason: 'No Dtr support.' */
#define DEM_CFG_STARTIDXMIDTABLEOFSUPPORTEDMIDSTABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_SupportedMidsTable.StartIdxMidTable' Reason: 'No Dtr support.' */
#define DEM_CFG_SUPPORTEDMIDMASKOFSUPPORTEDMIDSTABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_SupportedMidsTable.SupportedMidMask' Reason: 'No Dtr support.' */
#define DEM_PBCONFIG                                                  STD_ON
#define DEM_CFG_COMPATIBILITYVERSIONOFPBCONFIG                        STD_ON
#define DEM_CFG_CONFIGURATIONIDOFPBCONFIG                             STD_ON
#define DEM_CFG_CYCLEIDTABLEOFPBCONFIG                                STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEEDR2COLLINDOFPBCONFIG              STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEFFM2COLLINDOFPBCONFIG              STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEOFPBCONFIG                         STD_ON
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTINDOFPBCONFIG                 STD_ON
#define DEM_CFG_DEBOUNCEHIRESTABLEOFPBCONFIG                          STD_ON
#define DEM_CFG_DEBOUNCELORESTABLEOFPBCONFIG                          STD_ON
#define DEM_CFG_DEBOUNCETABLEOFPBCONFIG                               STD_ON
#define DEM_CFG_DTCNUMBERTABLEOFPBCONFIG                              STD_ON
#define DEM_CFG_ENABLECONDITIONGROUPCOUNTEROFPBCONFIG                 STD_ON
#define DEM_CFG_ENABLECONDITIONGROUPSTATEOFPBCONFIG                   STD_ON
#define DEM_CFG_ENABLECONDITIONGROUPTABLEINDOFPBCONFIG                STD_ON
#define DEM_CFG_ENABLECONDITIONGROUPTABLEOFPBCONFIG                   STD_ON
#define DEM_CFG_ENABLECONDITIONTABLEOFPBCONFIG                        STD_ON
#define DEM_CFG_EVENTAVAILABLEDEFAULTOFPBCONFIG                       STD_ON
#define DEM_CFG_EVENTTABLEOFPBCONFIG                                  STD_ON
#define DEM_CFG_EXTENDEDDATATABLEOFPBCONFIG                           STD_ON
#define DEM_CFG_FINALMAGICNUMBEROFPBCONFIG                            STD_ON
#define DEM_CFG_FREEZEFRAMETABLEOFPBCONFIG                            STD_ON
#define DEM_CFG_GLOBALOBDREQUIREMENTSOFPBCONFIG                       STD_OFF  /**< Deactivateable: 'Dem_PBConfig.GlobalObdRequirements' Reason: '((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))' */
#define DEM_CFG_GLOBALSEVERITYMASKOFPBCONFIG                          STD_ON
#define DEM_CFG_INITDATAHASHCODEOFPBCONFIG                            STD_ON
#define DEM_CFG_J1939NODEINDICATOROFPBCONFIG                          STD_ON
#define DEM_CFG_LTCONFIGIDXOFPBCONFIG                                 STD_OFF  /**< Deactivateable: 'Dem_PBConfig.LTConfigIdx' Reason: 'the module configuration does not support flashing of data and is not selectable.' */
#define DEM_CFG_PCCONFIGIDXOFPBCONFIG                                 STD_OFF  /**< Deactivateable: 'Dem_PBConfig.PCConfigIdx' Reason: 'the module configuration does not support flashing of data and is not selectable.' */
#define DEM_CFG_SATELLITETIMEDEBOUNCEINFOOFPBCONFIG                   STD_ON
#define DEM_CFG_SIZEOFDEBOUNCEHIRESTABLEOFPBCONFIG                    STD_ON
#define DEM_CFG_SIZEOFDEBOUNCELORESTABLEOFPBCONFIG                    STD_ON
#define DEM_CFG_SIZEOFENABLECONDITIONGROUPCOUNTEROFPBCONFIG           STD_ON
#define DEM_CFG_SIZEOFENABLECONDITIONGROUPSTATEOFPBCONFIG             STD_ON
#define DEM_CFG_SIZEOFENABLECONDITIONGROUPTABLEOFPBCONFIG             STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBMinNumericValueDefines  Dem_Cfg Min Numeric Value Defines (POST_BUILD)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define DEM_CFG_MIN_ENABLECONDITIONGROUPCOUNTER                       0U
#define DEM_CFG_MIN_ENABLECONDITIONGROUPSTATE                         0U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBMaxNumericValueDefines  Dem_Cfg Max Numeric Value Defines (POST_BUILD)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define DEM_CFG_MAX_ENABLECONDITIONGROUPCOUNTER                       255U
#define DEM_CFG_MAX_ENABLECONDITIONGROUPSTATE                         255U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBNoReferenceDefines  Dem_Cfg No Reference Defines (POST_BUILD)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE 65535U
#define DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE 65535U
#define DEM_CFG_NO_ENABLECONDITIONGROUPTABLEINDENDIDXOFENABLECONDITIONTABLE 65535U
#define DEM_CFG_NO_ENABLECONDITIONGROUPTABLEINDSTARTIDXOFENABLECONDITIONTABLE 65535U
#define DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE              255U
#define DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE            255U
#define DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE 65535U
#define DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE 65535U
#define DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE 65535U
#define DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE 65535U
#define DEM_CFG_NO_DEBOUNCEHIRESTABLEENDIDXOFSATELLITETIMEDEBOUNCEINFO 65535U
#define DEM_CFG_NO_DEBOUNCEHIRESTABLESTARTIDXOFSATELLITETIMEDEBOUNCEINFO 65535U
#define DEM_CFG_NO_DEBOUNCELORESTABLEENDIDXOFSATELLITETIMEDEBOUNCEINFO 65535U
#define DEM_CFG_NO_DEBOUNCELORESTABLESTARTIDXOFSATELLITETIMEDEBOUNCEINFO 65535U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBEnumExistsDefines  Dem_Cfg Enum Exists Defines (POST_BUILD)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define DEM_CFG_EXISTS_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_ON
#define DEM_CFG_EXISTS_DEM_CFG_DEBOUNCETYPE_TIMER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_ON
#define DEM_CFG_EXISTS_DEM_CFG_DEBOUNCETYPE_EXTERNAL_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_ON
#define DEM_CFG_EXISTS_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_ON
#define DEM_CFG_EXISTS_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE       STD_ON
#define DEM_CFG_EXISTS_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE       STD_ON
#define DEM_CFG_EXISTS_DEM_EVENT_SIGNIFICANCE_OCCURRENCE_EVENTSIGNIFICANCEOFEVENTTABLE STD_ON
#define DEM_CFG_EXISTS_DEM_EVENT_SIGNIFICANCE_FAULT_EVENTSIGNIFICANCEOFEVENTTABLE STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBEnumDefines  Dem_Cfg Enum Defines (POST_BUILD)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define DEM_CFG_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE 0x00U
#define DEM_CFG_DEM_CFG_DEBOUNCETYPE_TIMER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE 0x01U
#define DEM_CFG_DEM_CFG_DEBOUNCETYPE_EXTERNAL_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE 0x02U
#define DEM_CFG_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE 0x03U
#define DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE              0x00U
#define DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE              0x01U
#define DEM_CFG_DEM_EVENT_SIGNIFICANCE_OCCURRENCE_EVENTSIGNIFICANCEOFEVENTTABLE 0x00U
#define DEM_CFG_DEM_EVENT_SIGNIFICANCE_FAULT_EVENTSIGNIFICANCEOFEVENTTABLE 0x01U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBIsReducedToDefineDefines  Dem_Cfg Is Reduced To Define Defines (POST_BUILD)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define DEM_CFG_ISDEF_OPCYCLETYPEOFCYCLEIDTABLE                       STD_OFF
#define DEM_CFG_ISDEF_USEDFORAGINGOFCYCLEIDTABLE                      STD_OFF
#define DEM_CFG_ISDEF_COLLECTIONSIZEOFDATACOLLECTIONTABLE             STD_OFF
#define DEM_CFG_ISDEF_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE STD_OFF
#define DEM_CFG_ISDEF_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE STD_OFF
#define DEM_CFG_ISDEF_DATAELEMENTTABLECOL2ELMTINDUSEDOFDATACOLLECTIONTABLE STD_OFF
#define DEM_CFG_ISDEF_IDNUMBEROFDATACOLLECTIONTABLE                   STD_OFF
#define DEM_CFG_ISDEF_STORAGEKINDOFDATACOLLECTIONTABLE                STD_OFF
#define DEM_CFG_ISDEF_UPDATEOFDATACOLLECTIONTABLE                     STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEEDR2COLLIND                  STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEFFM2COLLIND                  STD_OFF
#define DEM_CFG_ISDEF_DATAELEMENTTABLECOL2ELMTIND                     STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCEHIRESTABLE                              STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCELORESTABLE                              STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCECONTINUOUSOFDEBOUNCETABLE               STD_OFF
#define DEM_CFG_ISDEF_DECREMENTSTEPSIZEOFDEBOUNCETABLE                STD_OFF
#define DEM_CFG_ISDEF_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE           STD_OFF
#define DEM_CFG_ISDEF_EVENTDEBOUNCEBEHAVIOROFDEBOUNCETABLE            STD_OFF
#define DEM_CFG_ISDEF_FAILTIMERCYCLESOFDEBOUNCETABLE                  STD_OFF
#define DEM_CFG_ISDEF_FAILEDTHRESHOLDOFDEBOUNCETABLE                  STD_OFF
#define DEM_CFG_ISDEF_INCREMENTSTEPSIZEOFDEBOUNCETABLE                STD_OFF
#define DEM_CFG_ISDEF_JUMPDOWNOFDEBOUNCETABLE                         STD_OFF
#define DEM_CFG_ISDEF_JUMPDOWNVALUEOFDEBOUNCETABLE                    STD_OFF
#define DEM_CFG_ISDEF_JUMPUPOFDEBOUNCETABLE                           STD_OFF
#define DEM_CFG_ISDEF_JUMPUPVALUEOFDEBOUNCETABLE                      STD_OFF
#define DEM_CFG_ISDEF_PASSTIMERCYCLESOFDEBOUNCETABLE                  STD_OFF
#define DEM_CFG_ISDEF_PASSEDTHRESHOLDOFDEBOUNCETABLE                  STD_OFF
#define DEM_CFG_ISDEF_STORAGEOFDEBOUNCETABLE                          STD_OFF
#define DEM_CFG_ISDEF_EVENTIDOFDTCNUMBERTABLE                         STD_OFF
#define DEM_CFG_ISDEF_UDSDTCOFDTCNUMBERTABLE                          STD_OFF
#define DEM_CFG_ISDEF_INDEXOFENABLECONDITIONGROUPTABLE                STD_OFF
#define DEM_CFG_ISDEF_ENABLECONDITIONGROUPTABLEIND                    STD_OFF
#define DEM_CFG_ISDEF_ENABLECONDITIONGROUPTABLEINDENDIDXOFENABLECONDITIONTABLE STD_OFF
#define DEM_CFG_ISDEF_ENABLECONDITIONGROUPTABLEINDSTARTIDXOFENABLECONDITIONTABLE STD_OFF
#define DEM_CFG_ISDEF_ENABLECONDITIONGROUPTABLEINDUSEDOFENABLECONDITIONTABLE STD_OFF
#define DEM_CFG_ISDEF_EVENTAVAILABLEDEFAULT                           STD_OFF
#define DEM_CFG_ISDEF_AGINGALLOWEDOFEVENTTABLE                        STD_OFF
#define DEM_CFG_ISDEF_AGINGCYCLECOUNTERTHRESHOLDOFEVENTTABLE          STD_OFF
#define DEM_CFG_ISDEF_AGINGCYCLEIDOFEVENTTABLE                        STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCETABLEIDXOFEVENTTABLE                    STD_OFF
#define DEM_CFG_ISDEF_DTCNUMBERTABLEIDXOFEVENTTABLE                   STD_OFF
#define DEM_CFG_ISDEF_DTCTABLEIDXOFEVENTTABLE                         STD_OFF
#define DEM_CFG_ISDEF_ENABLECONDITIONGROUPTABLEIDXOFEVENTTABLE        STD_OFF
#define DEM_CFG_ISDEF_EVENTDESTINATIONOFEVENTTABLE                    STD_OFF
#define DEM_CFG_ISDEF_EVENTFAILURECYCLECOUNTERTHRESHOLDOFEVENTTABLE   STD_OFF
#define DEM_CFG_ISDEF_EVENTKINDOFEVENTTABLE                           STD_OFF
#define DEM_CFG_ISDEF_EVENTLATCHTFOFEVENTTABLE                        STD_OFF
#define DEM_CFG_ISDEF_EVENTPRIORITYOFEVENTTABLE                       STD_OFF
#define DEM_CFG_ISDEF_EVENTSIGNIFICANCEOFEVENTTABLE                   STD_OFF
#define DEM_CFG_ISDEF_EXTENDEDDATATABLEIDXOFEVENTTABLE                STD_OFF
#define DEM_CFG_ISDEF_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE           STD_OFF
#define DEM_CFG_ISDEF_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE         STD_OFF
#define DEM_CFG_ISDEF_FREEZEFRAMENUMTABLEUSEDOFEVENTTABLE             STD_OFF
#define DEM_CFG_ISDEF_FREEZEFRAMETABLESTDFFIDXOFEVENTTABLE            STD_OFF
#define DEM_CFG_ISDEF_HEALINGTARGETOFEVENTTABLE                       STD_OFF
#define DEM_CFG_ISDEF_OPERATIONCYCLEIDOFEVENTTABLE                    STD_OFF
#define DEM_CFG_ISDEF_SATELLITEEVENTIDXOFEVENTTABLE                   STD_OFF
#define DEM_CFG_ISDEF_SATELLITEINFOIDXOFEVENTTABLE                    STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEEDR2COLLINDUSEDOFEXTENDEDDATATABLE STD_OFF
#define DEM_CFG_ISDEF_MAXRECORDSIZEOFEXTENDEDDATATABLE                STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEFFM2COLLINDUSEDOFFREEZEFRAMETABLE STD_OFF
#define DEM_CFG_ISDEF_RECORDSIZEOFFREEZEFRAMETABLE                    STD_OFF
#define DEM_CFG_ISDEF_RECORDSIZEUDSOFFREEZEFRAMETABLE                 STD_OFF
#define DEM_CFG_ISDEF_J1939NODEINDICATOR                              STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCEHIRESTABLEENDIDXOFSATELLITETIMEDEBOUNCEINFO STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCEHIRESTABLESTARTIDXOFSATELLITETIMEDEBOUNCEINFO STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCEHIRESTABLEUSEDOFSATELLITETIMEDEBOUNCEINFO STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCELORESTABLEENDIDXOFSATELLITETIMEDEBOUNCEINFO STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCELORESTABLESTARTIDXOFSATELLITETIMEDEBOUNCEINFO STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCELORESTABLEUSEDOFSATELLITETIMEDEBOUNCEINFO STD_OFF
#define DEM_CFG_ISDEF_COMPATIBILITYVERSIONOFPBCONFIG                  STD_OFF
#define DEM_CFG_ISDEF_CONFIGURATIONIDOFPBCONFIG                       STD_OFF
#define DEM_CFG_ISDEF_CYCLEIDTABLEOFPBCONFIG                          STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEEDR2COLLINDOFPBCONFIG        STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEFFM2COLLINDOFPBCONFIG        STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEOFPBCONFIG                   STD_OFF
#define DEM_CFG_ISDEF_DATAELEMENTTABLECOL2ELMTINDOFPBCONFIG           STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCEHIRESTABLEOFPBCONFIG                    STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCELORESTABLEOFPBCONFIG                    STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCETABLEOFPBCONFIG                         STD_OFF
#define DEM_CFG_ISDEF_DTCNUMBERTABLEOFPBCONFIG                        STD_OFF
#define DEM_CFG_ISDEF_ENABLECONDITIONGROUPCOUNTEROFPBCONFIG           STD_OFF
#define DEM_CFG_ISDEF_ENABLECONDITIONGROUPSTATEOFPBCONFIG             STD_OFF
#define DEM_CFG_ISDEF_ENABLECONDITIONGROUPTABLEINDOFPBCONFIG          STD_OFF
#define DEM_CFG_ISDEF_ENABLECONDITIONGROUPTABLEOFPBCONFIG             STD_OFF
#define DEM_CFG_ISDEF_ENABLECONDITIONTABLEOFPBCONFIG                  STD_OFF
#define DEM_CFG_ISDEF_EVENTAVAILABLEDEFAULTOFPBCONFIG                 STD_OFF
#define DEM_CFG_ISDEF_EVENTTABLEOFPBCONFIG                            STD_OFF
#define DEM_CFG_ISDEF_EXTENDEDDATATABLEOFPBCONFIG                     STD_OFF
#define DEM_CFG_ISDEF_FINALMAGICNUMBEROFPBCONFIG                      STD_OFF
#define DEM_CFG_ISDEF_FREEZEFRAMETABLEOFPBCONFIG                      STD_OFF
#define DEM_CFG_ISDEF_GLOBALSEVERITYMASKOFPBCONFIG                    STD_OFF
#define DEM_CFG_ISDEF_INITDATAHASHCODEOFPBCONFIG                      STD_OFF
#define DEM_CFG_ISDEF_J1939NODEINDICATOROFPBCONFIG                    STD_OFF
#define DEM_CFG_ISDEF_SATELLITETIMEDEBOUNCEINFOOFPBCONFIG             STD_OFF
#define DEM_CFG_ISDEF_SIZEOFDEBOUNCEHIRESTABLEOFPBCONFIG              STD_OFF
#define DEM_CFG_ISDEF_SIZEOFDEBOUNCELORESTABLEOFPBCONFIG              STD_OFF
#define DEM_CFG_ISDEF_SIZEOFENABLECONDITIONGROUPTABLEOFPBCONFIG       STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBEqualsAlwaysToDefines  Dem_Cfg Equals Always To Defines (POST_BUILD)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define DEM_CFG_EQ2_OPCYCLETYPEOFCYCLEIDTABLE                         
#define DEM_CFG_EQ2_USEDFORAGINGOFCYCLEIDTABLE                        
#define DEM_CFG_EQ2_COLLECTIONSIZEOFDATACOLLECTIONTABLE               
#define DEM_CFG_EQ2_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE 
#define DEM_CFG_EQ2_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE 
#define DEM_CFG_EQ2_DATAELEMENTTABLECOL2ELMTINDUSEDOFDATACOLLECTIONTABLE 
#define DEM_CFG_EQ2_IDNUMBEROFDATACOLLECTIONTABLE                     
#define DEM_CFG_EQ2_STORAGEKINDOFDATACOLLECTIONTABLE                  
#define DEM_CFG_EQ2_UPDATEOFDATACOLLECTIONTABLE                       
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEEDR2COLLIND                    
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEFFM2COLLIND                    
#define DEM_CFG_EQ2_DATAELEMENTTABLECOL2ELMTIND                       
#define DEM_CFG_EQ2_DEBOUNCEHIRESTABLE                                
#define DEM_CFG_EQ2_DEBOUNCELORESTABLE                                
#define DEM_CFG_EQ2_DEBOUNCECONTINUOUSOFDEBOUNCETABLE                 
#define DEM_CFG_EQ2_DECREMENTSTEPSIZEOFDEBOUNCETABLE                  
#define DEM_CFG_EQ2_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE             
#define DEM_CFG_EQ2_EVENTDEBOUNCEBEHAVIOROFDEBOUNCETABLE              
#define DEM_CFG_EQ2_FAILTIMERCYCLESOFDEBOUNCETABLE                    
#define DEM_CFG_EQ2_FAILEDTHRESHOLDOFDEBOUNCETABLE                    
#define DEM_CFG_EQ2_INCREMENTSTEPSIZEOFDEBOUNCETABLE                  
#define DEM_CFG_EQ2_JUMPDOWNOFDEBOUNCETABLE                           
#define DEM_CFG_EQ2_JUMPDOWNVALUEOFDEBOUNCETABLE                      
#define DEM_CFG_EQ2_JUMPUPOFDEBOUNCETABLE                             
#define DEM_CFG_EQ2_JUMPUPVALUEOFDEBOUNCETABLE                        
#define DEM_CFG_EQ2_PASSTIMERCYCLESOFDEBOUNCETABLE                    
#define DEM_CFG_EQ2_PASSEDTHRESHOLDOFDEBOUNCETABLE                    
#define DEM_CFG_EQ2_STORAGEOFDEBOUNCETABLE                            
#define DEM_CFG_EQ2_EVENTIDOFDTCNUMBERTABLE                           
#define DEM_CFG_EQ2_UDSDTCOFDTCNUMBERTABLE                            
#define DEM_CFG_EQ2_INDEXOFENABLECONDITIONGROUPTABLE                  
#define DEM_CFG_EQ2_ENABLECONDITIONGROUPTABLEIND                      
#define DEM_CFG_EQ2_ENABLECONDITIONGROUPTABLEINDENDIDXOFENABLECONDITIONTABLE 
#define DEM_CFG_EQ2_ENABLECONDITIONGROUPTABLEINDSTARTIDXOFENABLECONDITIONTABLE 
#define DEM_CFG_EQ2_ENABLECONDITIONGROUPTABLEINDUSEDOFENABLECONDITIONTABLE 
#define DEM_CFG_EQ2_EVENTAVAILABLEDEFAULT                             
#define DEM_CFG_EQ2_AGINGALLOWEDOFEVENTTABLE                          
#define DEM_CFG_EQ2_AGINGCYCLECOUNTERTHRESHOLDOFEVENTTABLE            
#define DEM_CFG_EQ2_AGINGCYCLEIDOFEVENTTABLE                          
#define DEM_CFG_EQ2_DEBOUNCETABLEIDXOFEVENTTABLE                      
#define DEM_CFG_EQ2_DTCNUMBERTABLEIDXOFEVENTTABLE                     
#define DEM_CFG_EQ2_DTCTABLEIDXOFEVENTTABLE                           
#define DEM_CFG_EQ2_ENABLECONDITIONGROUPTABLEIDXOFEVENTTABLE          
#define DEM_CFG_EQ2_EVENTDESTINATIONOFEVENTTABLE                      
#define DEM_CFG_EQ2_EVENTFAILURECYCLECOUNTERTHRESHOLDOFEVENTTABLE     
#define DEM_CFG_EQ2_EVENTKINDOFEVENTTABLE                             
#define DEM_CFG_EQ2_EVENTLATCHTFOFEVENTTABLE                          
#define DEM_CFG_EQ2_EVENTPRIORITYOFEVENTTABLE                         
#define DEM_CFG_EQ2_EVENTSIGNIFICANCEOFEVENTTABLE                     
#define DEM_CFG_EQ2_EXTENDEDDATATABLEIDXOFEVENTTABLE                  
#define DEM_CFG_EQ2_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE             
#define DEM_CFG_EQ2_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE           
#define DEM_CFG_EQ2_FREEZEFRAMENUMTABLEUSEDOFEVENTTABLE               
#define DEM_CFG_EQ2_FREEZEFRAMETABLESTDFFIDXOFEVENTTABLE              
#define DEM_CFG_EQ2_HEALINGTARGETOFEVENTTABLE                         
#define DEM_CFG_EQ2_OPERATIONCYCLEIDOFEVENTTABLE                      
#define DEM_CFG_EQ2_SATELLITEEVENTIDXOFEVENTTABLE                     
#define DEM_CFG_EQ2_SATELLITEINFOIDXOFEVENTTABLE                      
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE 
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE 
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEEDR2COLLINDUSEDOFEXTENDEDDATATABLE 
#define DEM_CFG_EQ2_MAXRECORDSIZEOFEXTENDEDDATATABLE                  
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE 
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE 
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEFFM2COLLINDUSEDOFFREEZEFRAMETABLE 
#define DEM_CFG_EQ2_RECORDSIZEOFFREEZEFRAMETABLE                      
#define DEM_CFG_EQ2_RECORDSIZEUDSOFFREEZEFRAMETABLE                   
#define DEM_CFG_EQ2_J1939NODEINDICATOR                                
#define DEM_CFG_EQ2_DEBOUNCEHIRESTABLEENDIDXOFSATELLITETIMEDEBOUNCEINFO 
#define DEM_CFG_EQ2_DEBOUNCEHIRESTABLESTARTIDXOFSATELLITETIMEDEBOUNCEINFO 
#define DEM_CFG_EQ2_DEBOUNCEHIRESTABLEUSEDOFSATELLITETIMEDEBOUNCEINFO 
#define DEM_CFG_EQ2_DEBOUNCELORESTABLEENDIDXOFSATELLITETIMEDEBOUNCEINFO 
#define DEM_CFG_EQ2_DEBOUNCELORESTABLESTARTIDXOFSATELLITETIMEDEBOUNCEINFO 
#define DEM_CFG_EQ2_DEBOUNCELORESTABLEUSEDOFSATELLITETIMEDEBOUNCEINFO 
#define DEM_CFG_EQ2_COMPATIBILITYVERSIONOFPBCONFIG                    
#define DEM_CFG_EQ2_CONFIGURATIONIDOFPBCONFIG                         
#define DEM_CFG_EQ2_CYCLEIDTABLEOFPBCONFIG                            
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEEDR2COLLINDOFPBCONFIG          
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEFFM2COLLINDOFPBCONFIG          
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEOFPBCONFIG                     
#define DEM_CFG_EQ2_DATAELEMENTTABLECOL2ELMTINDOFPBCONFIG             
#define DEM_CFG_EQ2_DEBOUNCEHIRESTABLEOFPBCONFIG                      
#define DEM_CFG_EQ2_DEBOUNCELORESTABLEOFPBCONFIG                      
#define DEM_CFG_EQ2_DEBOUNCETABLEOFPBCONFIG                           
#define DEM_CFG_EQ2_DTCNUMBERTABLEOFPBCONFIG                          
#define DEM_CFG_EQ2_ENABLECONDITIONGROUPCOUNTEROFPBCONFIG             
#define DEM_CFG_EQ2_ENABLECONDITIONGROUPSTATEOFPBCONFIG               
#define DEM_CFG_EQ2_ENABLECONDITIONGROUPTABLEINDOFPBCONFIG            
#define DEM_CFG_EQ2_ENABLECONDITIONGROUPTABLEOFPBCONFIG               
#define DEM_CFG_EQ2_ENABLECONDITIONTABLEOFPBCONFIG                    
#define DEM_CFG_EQ2_EVENTAVAILABLEDEFAULTOFPBCONFIG                   
#define DEM_CFG_EQ2_EVENTTABLEOFPBCONFIG                              
#define DEM_CFG_EQ2_EXTENDEDDATATABLEOFPBCONFIG                       
#define DEM_CFG_EQ2_FINALMAGICNUMBEROFPBCONFIG                        
#define DEM_CFG_EQ2_FREEZEFRAMETABLEOFPBCONFIG                        
#define DEM_CFG_EQ2_GLOBALSEVERITYMASKOFPBCONFIG                      
#define DEM_CFG_EQ2_INITDATAHASHCODEOFPBCONFIG                        
#define DEM_CFG_EQ2_J1939NODEINDICATOROFPBCONFIG                      
#define DEM_CFG_EQ2_SATELLITETIMEDEBOUNCEINFOOFPBCONFIG               
#define DEM_CFG_EQ2_SIZEOFDEBOUNCEHIRESTABLEOFPBCONFIG                
#define DEM_CFG_EQ2_SIZEOFDEBOUNCELORESTABLEOFPBCONFIG                
#define DEM_CFG_EQ2_SIZEOFENABLECONDITIONGROUPTABLEOFPBCONFIG         
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBSymbolicInitializationPointers  Dem_Cfg Symbolic Initialization Pointers (POST_BUILD)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define Dem_Config_Ptr                                                &(Dem_PBConfig.Config)  /**< symbolic identifier which shall be used to initialize 'Dem' */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBInitializationSymbols  Dem_Cfg Initialization Symbols (POST_BUILD)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define Dem_Config                                                    Dem_PBConfig.Config  /**< symbolic identifier which could be used to initialize 'Dem */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBGeneral  Dem_Cfg General (POST_BUILD)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define DEM_CFG_CHECK_INIT_POINTER                                    STD_ON  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define DEM_CFG_FINAL_MAGIC_NUMBER                                    0x361EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of Dem */
#define DEM_CFG_INDIVIDUAL_POSTBUILD                                  STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. A container 'DefinitionRef: /MICROSAR/EcuC/EcucGeneral/PostbuildLoadable/IndividualPostBuildLoadableModule/ModuleInitializationStructure' in an invariant view with the shortname 'Dem_PBConfig' has to be configured to activate the feature module individual postbuild. */
#define DEM_CFG_INIT_DATA                                             DEM_PBCFG  /**< CompilerMemClassDefine for the initialization data. */
#define DEM_CFG_INIT_DATA_HASH_CODE                                   -462955940L  /**< the precompile constant to validate the initialization structure at initialization time of Dem with a hashcode. The seed value is '0x361EU' */
#define DEM_CFG_USE_ECUM_BSW_ERROR_HOOK                               STD_ON  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define DEM_CFG_USE_INIT_POINTER                                      STD_ON  /**< STD_ON if the init pointer Dem shall be used. */
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
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgPBGetRootDataMacros  Dem_Cfg Get Root Data Macros (POST_BUILD)
  \brief  These are used to get data pointers of root data.
  \{
*/ 
#define Dem_Cfg_GetCompatibilityVersionOfPBConfig(ConfigDataPtr)      (ConfigDataPtr)->CompatibilityVersionOfPBConfig
#define Dem_Cfg_GetConfigurationIdOfPBConfig()                        Dem_GlobalConfigPtr->ConfigurationIdOfPBConfig
#define Dem_Cfg_GetCycleIdTableOfPBConfig()                           Dem_GlobalConfigPtr->CycleIdTableOfPBConfig
#define Dem_Cfg_GetDataCollectionTableEdr2CollIndOfPBConfig()         Dem_GlobalConfigPtr->DataCollectionTableEdr2CollIndOfPBConfig
#define Dem_Cfg_GetDataCollectionTableFfm2CollIndOfPBConfig()         Dem_GlobalConfigPtr->DataCollectionTableFfm2CollIndOfPBConfig
#define Dem_Cfg_GetDataCollectionTableOfPBConfig()                    Dem_GlobalConfigPtr->DataCollectionTableOfPBConfig
#define Dem_Cfg_GetDataElementTableCol2ElmtIndOfPBConfig()            Dem_GlobalConfigPtr->DataElementTableCol2ElmtIndOfPBConfig
#define Dem_Cfg_GetDebounceHiResTableOfPBConfig()                     Dem_GlobalConfigPtr->DebounceHiResTableOfPBConfig
#define Dem_Cfg_GetDebounceLoResTableOfPBConfig()                     Dem_GlobalConfigPtr->DebounceLoResTableOfPBConfig
#define Dem_Cfg_GetDebounceTableOfPBConfig()                          Dem_GlobalConfigPtr->DebounceTableOfPBConfig
#define Dem_Cfg_GetDtcNumberTableOfPBConfig()                         Dem_GlobalConfigPtr->DtcNumberTableOfPBConfig
#define Dem_Cfg_GetEnableConditionGroupCounterOfPBConfig()            Dem_GlobalConfigPtr->EnableConditionGroupCounterOfPBConfig
#define Dem_Cfg_GetEnableConditionGroupStateOfPBConfig()              Dem_GlobalConfigPtr->EnableConditionGroupStateOfPBConfig
#define Dem_Cfg_GetEnableConditionGroupTableIndOfPBConfig()           Dem_GlobalConfigPtr->EnableConditionGroupTableIndOfPBConfig
#define Dem_Cfg_GetEnableConditionGroupTableOfPBConfig()              Dem_GlobalConfigPtr->EnableConditionGroupTableOfPBConfig
#define Dem_Cfg_GetEnableConditionTableOfPBConfig()                   Dem_GlobalConfigPtr->EnableConditionTableOfPBConfig
#define Dem_Cfg_GetEventAvailableDefaultOfPBConfig()                  Dem_GlobalConfigPtr->EventAvailableDefaultOfPBConfig
#define Dem_Cfg_GetEventTableOfPBConfig()                             Dem_GlobalConfigPtr->EventTableOfPBConfig
#define Dem_Cfg_GetExtendedDataTableOfPBConfig()                      Dem_GlobalConfigPtr->ExtendedDataTableOfPBConfig
#define Dem_Cfg_GetFinalMagicNumberOfPBConfig(ConfigDataPtr)          (ConfigDataPtr)->FinalMagicNumberOfPBConfig
#define Dem_Cfg_GetFreezeFrameTableOfPBConfig()                       Dem_GlobalConfigPtr->FreezeFrameTableOfPBConfig
#define Dem_Cfg_GetGlobalSeverityMaskOfPBConfig()                     Dem_GlobalConfigPtr->GlobalSeverityMaskOfPBConfig
#define Dem_Cfg_GetInitDataHashCodeOfPBConfig(ConfigDataPtr)          (ConfigDataPtr)->InitDataHashCodeOfPBConfig
#define Dem_Cfg_GetJ1939NodeIndicatorOfPBConfig()                     Dem_GlobalConfigPtr->J1939NodeIndicatorOfPBConfig
#define Dem_Cfg_GetSatelliteTimeDebounceInfoOfPBConfig()              Dem_GlobalConfigPtr->SatelliteTimeDebounceInfoOfPBConfig
#define Dem_Cfg_GetSizeOfDebounceHiResTableOfPBConfig()               Dem_GlobalConfigPtr->SizeOfDebounceHiResTableOfPBConfig
#define Dem_Cfg_GetSizeOfDebounceLoResTableOfPBConfig()               Dem_GlobalConfigPtr->SizeOfDebounceLoResTableOfPBConfig
#define Dem_Cfg_GetSizeOfEnableConditionGroupTableOfPBConfig()        Dem_GlobalConfigPtr->SizeOfEnableConditionGroupTableOfPBConfig
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBGetDuplicatedRootDataMacros  Dem_Cfg Get Duplicated Root Data Macros (POST_BUILD)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define Dem_Cfg_GetSizeOfEnableConditionGroupCounterOfPBConfig()      Dem_Cfg_GetSizeOfEnableConditionGroupTableOfPBConfig()  /**< the number of accomplishable value elements in Dem_Cfg_EnableConditionGroupCounter */
#define Dem_Cfg_GetSizeOfEnableConditionGroupStateOfPBConfig()        Dem_Cfg_GetSizeOfEnableConditionGroupTableOfPBConfig()  /**< the number of accomplishable value elements in Dem_Cfg_EnableConditionGroupState */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBGetDataMacros  Dem_Cfg Get Data Macros (POST_BUILD)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define Dem_Cfg_GetOpCycleTypeOfCycleIdTable(Index)                   (Dem_Cfg_GetCycleIdTableOfPBConfig()[(Index)].OpCycleTypeOfCycleIdTable)
#define Dem_Cfg_IsUsedForAgingOfCycleIdTable(Index)                   ((Dem_Cfg_GetCycleIdTableOfPBConfig()[(Index)].UsedForAgingOfCycleIdTable) != FALSE)
#define Dem_Cfg_GetCollectionSizeOfDataCollectionTable(Index)         (Dem_Cfg_GetDataCollectionTableOfPBConfig()[(Index)].CollectionSizeOfDataCollectionTable)
#define Dem_Cfg_GetDataElementTableCol2ElmtIndEndIdxOfDataCollectionTable(Index) (Dem_Cfg_GetDataCollectionTableOfPBConfig()[(Index)].DataElementTableCol2ElmtIndEndIdxOfDataCollectionTable)
#define Dem_Cfg_GetDataElementTableCol2ElmtIndStartIdxOfDataCollectionTable(Index) (Dem_Cfg_GetDataCollectionTableOfPBConfig()[(Index)].DataElementTableCol2ElmtIndStartIdxOfDataCollectionTable)
#define Dem_Cfg_GetIdNumberOfDataCollectionTable(Index)               (Dem_Cfg_GetDataCollectionTableOfPBConfig()[(Index)].IdNumberOfDataCollectionTable)
#define Dem_Cfg_GetStorageKindOfDataCollectionTable(Index)            (Dem_Cfg_GetDataCollectionTableOfPBConfig()[(Index)].StorageKindOfDataCollectionTable)
#define Dem_Cfg_IsUpdateOfDataCollectionTable(Index)                  ((Dem_Cfg_GetDataCollectionTableOfPBConfig()[(Index)].UpdateOfDataCollectionTable) != FALSE)
#define Dem_Cfg_GetDataCollectionTableEdr2CollInd(Index)              (Dem_Cfg_GetDataCollectionTableEdr2CollIndOfPBConfig()[(Index)])
#define Dem_Cfg_GetDataCollectionTableFfm2CollInd(Index)              (Dem_Cfg_GetDataCollectionTableFfm2CollIndOfPBConfig()[(Index)])
#define Dem_Cfg_GetDataElementTableCol2ElmtInd(Index)                 (Dem_Cfg_GetDataElementTableCol2ElmtIndOfPBConfig()[(Index)])
#define Dem_Cfg_GetDebounceHiResTable(Index)                          (Dem_Cfg_GetDebounceHiResTableOfPBConfig()[(Index)])
#define Dem_Cfg_GetDebounceLoResTable(Index)                          (Dem_Cfg_GetDebounceLoResTableOfPBConfig()[(Index)])
#define Dem_Cfg_IsDebounceContinuousOfDebounceTable(Index)            ((Dem_Cfg_GetDebounceTableOfPBConfig()[(Index)].DebounceContinuousOfDebounceTable) != FALSE)
#define Dem_Cfg_GetDecrementStepSizeOfDebounceTable(Index)            (Dem_Cfg_GetDebounceTableOfPBConfig()[(Index)].DecrementStepSizeOfDebounceTable)
#define Dem_Cfg_GetEventDebounceAlgorithmOfDebounceTable(Index)       (Dem_Cfg_GetDebounceTableOfPBConfig()[(Index)].EventDebounceAlgorithmOfDebounceTable)
#define Dem_Cfg_IsEventDebounceBehaviorOfDebounceTable(Index)         ((Dem_Cfg_GetDebounceTableOfPBConfig()[(Index)].EventDebounceBehaviorOfDebounceTable) != FALSE)
#define Dem_Cfg_GetFailTimerCyclesOfDebounceTable(Index)              (Dem_Cfg_GetDebounceTableOfPBConfig()[(Index)].FailTimerCyclesOfDebounceTable)
#define Dem_Cfg_GetFailedThresholdOfDebounceTable(Index)              (Dem_Cfg_GetDebounceTableOfPBConfig()[(Index)].FailedThresholdOfDebounceTable)
#define Dem_Cfg_GetIncrementStepSizeOfDebounceTable(Index)            (Dem_Cfg_GetDebounceTableOfPBConfig()[(Index)].IncrementStepSizeOfDebounceTable)
#define Dem_Cfg_IsJumpDownOfDebounceTable(Index)                      ((Dem_Cfg_GetDebounceTableOfPBConfig()[(Index)].JumpDownOfDebounceTable) != FALSE)
#define Dem_Cfg_GetJumpDownValueOfDebounceTable(Index)                (Dem_Cfg_GetDebounceTableOfPBConfig()[(Index)].JumpDownValueOfDebounceTable)
#define Dem_Cfg_IsJumpUpOfDebounceTable(Index)                        ((Dem_Cfg_GetDebounceTableOfPBConfig()[(Index)].JumpUpOfDebounceTable) != FALSE)
#define Dem_Cfg_GetJumpUpValueOfDebounceTable(Index)                  (Dem_Cfg_GetDebounceTableOfPBConfig()[(Index)].JumpUpValueOfDebounceTable)
#define Dem_Cfg_GetPassTimerCyclesOfDebounceTable(Index)              (Dem_Cfg_GetDebounceTableOfPBConfig()[(Index)].PassTimerCyclesOfDebounceTable)
#define Dem_Cfg_GetPassedThresholdOfDebounceTable(Index)              (Dem_Cfg_GetDebounceTableOfPBConfig()[(Index)].PassedThresholdOfDebounceTable)
#define Dem_Cfg_IsStorageOfDebounceTable(Index)                       ((Dem_Cfg_GetDebounceTableOfPBConfig()[(Index)].StorageOfDebounceTable) != FALSE)
#define Dem_Cfg_GetEventIdOfDtcNumberTable(Index)                     (Dem_Cfg_GetDtcNumberTableOfPBConfig()[(Index)].EventIdOfDtcNumberTable)
#define Dem_Cfg_GetUdsDtcOfDtcNumberTable(Index)                      (Dem_Cfg_GetDtcNumberTableOfPBConfig()[(Index)].UdsDtcOfDtcNumberTable)
#define Dem_Cfg_GetEnableConditionGroupCounter(Index)                 (Dem_Cfg_GetEnableConditionGroupCounterOfPBConfig()[(Index)])
#define Dem_Cfg_GetEnableConditionGroupState(Index)                   (Dem_Cfg_GetEnableConditionGroupStateOfPBConfig()[(Index)])
#define Dem_Cfg_GetIndexOfEnableConditionGroupTable(Index)            (Dem_Cfg_GetEnableConditionGroupTableOfPBConfig()[(Index)].IndexOfEnableConditionGroupTable)
#define Dem_Cfg_GetEnableConditionGroupTableInd(Index)                (Dem_Cfg_GetEnableConditionGroupTableIndOfPBConfig()[(Index)])
#define Dem_Cfg_GetEnableConditionGroupTableIndEndIdxOfEnableConditionTable(Index) (Dem_Cfg_GetEnableConditionTableOfPBConfig()[(Index)].EnableConditionGroupTableIndEndIdxOfEnableConditionTable)
#define Dem_Cfg_GetEnableConditionGroupTableIndStartIdxOfEnableConditionTable(Index) (Dem_Cfg_GetEnableConditionTableOfPBConfig()[(Index)].EnableConditionGroupTableIndStartIdxOfEnableConditionTable)
#define Dem_Cfg_IsEventAvailableDefault(Index)                        ((Dem_Cfg_GetEventAvailableDefaultOfPBConfig()[(Index)]) != FALSE)
#define Dem_Cfg_IsAgingAllowedOfEventTable(Index)                     ((Dem_Cfg_GetEventTableOfPBConfig()[(Index)].AgingAllowedOfEventTable) != FALSE)
#define Dem_Cfg_GetAgingCycleCounterThresholdOfEventTable(Index)      (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].AgingCycleCounterThresholdOfEventTable)
#define Dem_Cfg_GetAgingCycleIdOfEventTable(Index)                    (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].AgingCycleIdOfEventTable)
#define Dem_Cfg_GetDebounceTableIdxOfEventTable(Index)                (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].DebounceTableIdxOfEventTable)
#define Dem_Cfg_GetDtcNumberTableIdxOfEventTable(Index)               (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].DtcNumberTableIdxOfEventTable)
#define Dem_Cfg_GetDtcTableIdxOfEventTable(Index)                     (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].DtcTableIdxOfEventTable)
#define Dem_Cfg_GetEnableConditionGroupTableIdxOfEventTable(Index)    (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].EnableConditionGroupTableIdxOfEventTable)
#define Dem_Cfg_GetEventDestinationOfEventTable(Index)                (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].EventDestinationOfEventTable)
#define Dem_Cfg_GetEventFailureCycleCounterThresholdOfEventTable(Index) (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].EventFailureCycleCounterThresholdOfEventTable)
#define Dem_Cfg_GetEventKindOfEventTable(Index)                       (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].EventKindOfEventTable)
#define Dem_Cfg_IsEventLatchTFOfEventTable(Index)                     ((Dem_Cfg_GetEventTableOfPBConfig()[(Index)].EventLatchTFOfEventTable) != FALSE)
#define Dem_Cfg_GetEventPriorityOfEventTable(Index)                   (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].EventPriorityOfEventTable)
#define Dem_Cfg_GetEventSignificanceOfEventTable(Index)               (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].EventSignificanceOfEventTable)
#define Dem_Cfg_GetExtendedDataTableIdxOfEventTable(Index)            (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].ExtendedDataTableIdxOfEventTable)
#define Dem_Cfg_GetFreezeFrameNumTableEndIdxOfEventTable(Index)       (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].FreezeFrameNumTableEndIdxOfEventTable)
#define Dem_Cfg_GetFreezeFrameNumTableStartIdxOfEventTable(Index)     (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].FreezeFrameNumTableStartIdxOfEventTable)
#define Dem_Cfg_GetFreezeFrameTableStdFFIdxOfEventTable(Index)        (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].FreezeFrameTableStdFFIdxOfEventTable)
#define Dem_Cfg_GetHealingTargetOfEventTable(Index)                   (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].HealingTargetOfEventTable)
#define Dem_Cfg_GetOperationCycleIdOfEventTable(Index)                (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].OperationCycleIdOfEventTable)
#define Dem_Cfg_GetSatelliteEventIdxOfEventTable(Index)               (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].SatelliteEventIdxOfEventTable)
#define Dem_Cfg_GetSatelliteInfoIdxOfEventTable(Index)                (Dem_Cfg_GetEventTableOfPBConfig()[(Index)].SatelliteInfoIdxOfEventTable)
#define Dem_Cfg_GetDataCollectionTableEdr2CollIndEndIdxOfExtendedDataTable(Index) (Dem_Cfg_GetExtendedDataTableOfPBConfig()[(Index)].DataCollectionTableEdr2CollIndEndIdxOfExtendedDataTable)
#define Dem_Cfg_GetDataCollectionTableEdr2CollIndStartIdxOfExtendedDataTable(Index) (Dem_Cfg_GetExtendedDataTableOfPBConfig()[(Index)].DataCollectionTableEdr2CollIndStartIdxOfExtendedDataTable)
#define Dem_Cfg_GetMaxRecordSizeOfExtendedDataTable(Index)            (Dem_Cfg_GetExtendedDataTableOfPBConfig()[(Index)].MaxRecordSizeOfExtendedDataTable)
#define Dem_Cfg_GetDataCollectionTableFfm2CollIndEndIdxOfFreezeFrameTable(Index) (Dem_Cfg_GetFreezeFrameTableOfPBConfig()[(Index)].DataCollectionTableFfm2CollIndEndIdxOfFreezeFrameTable)
#define Dem_Cfg_GetDataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTable(Index) (Dem_Cfg_GetFreezeFrameTableOfPBConfig()[(Index)].DataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTable)
#define Dem_Cfg_GetRecordSizeOfFreezeFrameTable(Index)                (Dem_Cfg_GetFreezeFrameTableOfPBConfig()[(Index)].RecordSizeOfFreezeFrameTable)
#define Dem_Cfg_GetRecordSizeUdsOfFreezeFrameTable(Index)             (Dem_Cfg_GetFreezeFrameTableOfPBConfig()[(Index)].RecordSizeUdsOfFreezeFrameTable)
#define Dem_Cfg_GetJ1939NodeIndicator(Index)                          (Dem_Cfg_GetJ1939NodeIndicatorOfPBConfig()[(Index)])
#define Dem_Cfg_GetDebounceHiResTableEndIdxOfSatelliteTimeDebounceInfo(Index) (Dem_Cfg_GetSatelliteTimeDebounceInfoOfPBConfig()[(Index)].DebounceHiResTableEndIdxOfSatelliteTimeDebounceInfo)
#define Dem_Cfg_GetDebounceHiResTableStartIdxOfSatelliteTimeDebounceInfo(Index) (Dem_Cfg_GetSatelliteTimeDebounceInfoOfPBConfig()[(Index)].DebounceHiResTableStartIdxOfSatelliteTimeDebounceInfo)
#define Dem_Cfg_GetDebounceLoResTableEndIdxOfSatelliteTimeDebounceInfo(Index) (Dem_Cfg_GetSatelliteTimeDebounceInfoOfPBConfig()[(Index)].DebounceLoResTableEndIdxOfSatelliteTimeDebounceInfo)
#define Dem_Cfg_GetDebounceLoResTableStartIdxOfSatelliteTimeDebounceInfo(Index) (Dem_Cfg_GetSatelliteTimeDebounceInfoOfPBConfig()[(Index)].DebounceLoResTableStartIdxOfSatelliteTimeDebounceInfo)
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBGetDeduplicatedDataMacros  Dem_Cfg Get Deduplicated Data Macros (POST_BUILD)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define Dem_Cfg_GetCompatibilityVersion(ConfigDataPtr)                Dem_Cfg_GetCompatibilityVersionOfPBConfig(ConfigDataPtr)
#define Dem_Cfg_GetConfigurationId()                                  Dem_Cfg_GetConfigurationIdOfPBConfig()
#define Dem_Cfg_IsDataElementTableCol2ElmtIndUsedOfDataCollectionTable(Index) (((boolean)(Dem_Cfg_GetDataElementTableCol2ElmtIndStartIdxOfDataCollectionTable(Index) != DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd */
#define Dem_Cfg_IsEnableConditionGroupTableIndUsedOfEnableConditionTable(Index) (((boolean)(Dem_Cfg_GetEnableConditionGroupTableIndStartIdxOfEnableConditionTable(Index) != DEM_CFG_NO_ENABLECONDITIONGROUPTABLEINDSTARTIDXOFENABLECONDITIONTABLE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Dem_Cfg_EnableConditionGroupTableInd */
#define Dem_Cfg_IsFreezeFrameNumTableUsedOfEventTable(Index)          (((boolean)(Dem_Cfg_GetFreezeFrameNumTableStartIdxOfEventTable(Index) != DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Dem_Cfg_FreezeFrameNumTable */
#define Dem_Cfg_IsDataCollectionTableEdr2CollIndUsedOfExtendedDataTable(Index) (((boolean)(Dem_Cfg_GetDataCollectionTableEdr2CollIndStartIdxOfExtendedDataTable(Index) != DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd */
#define Dem_Cfg_GetFinalMagicNumber(ConfigDataPtr)                    Dem_Cfg_GetFinalMagicNumberOfPBConfig(ConfigDataPtr)
#define Dem_Cfg_IsDataCollectionTableFfm2CollIndUsedOfFreezeFrameTable(Index) (((boolean)(Dem_Cfg_GetDataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTable(Index) != DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd */
#define Dem_Cfg_GetGlobalSeverityMask()                               Dem_Cfg_GetGlobalSeverityMaskOfPBConfig()
#define Dem_Cfg_GetInitDataHashCode(ConfigDataPtr)                    Dem_Cfg_GetInitDataHashCodeOfPBConfig(ConfigDataPtr)
#define Dem_Cfg_IsDebounceHiResTableUsedOfSatelliteTimeDebounceInfo(Index) (((boolean)(Dem_Cfg_GetDebounceHiResTableStartIdxOfSatelliteTimeDebounceInfo(Index) != DEM_CFG_NO_DEBOUNCEHIRESTABLESTARTIDXOFSATELLITETIMEDEBOUNCEINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Dem_Cfg_DebounceHiResTable */
#define Dem_Cfg_IsDebounceLoResTableUsedOfSatelliteTimeDebounceInfo(Index) (((boolean)(Dem_Cfg_GetDebounceLoResTableStartIdxOfSatelliteTimeDebounceInfo(Index) != DEM_CFG_NO_DEBOUNCELORESTABLESTARTIDXOFSATELLITETIMEDEBOUNCEINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Dem_Cfg_DebounceLoResTable */
#define Dem_Cfg_GetSizeOfDebounceHiResTable()                         Dem_Cfg_GetSizeOfDebounceHiResTableOfPBConfig()
#define Dem_Cfg_GetSizeOfDebounceLoResTable()                         Dem_Cfg_GetSizeOfDebounceLoResTableOfPBConfig()
#define Dem_Cfg_GetSizeOfEnableConditionGroupCounter()                Dem_Cfg_GetSizeOfEnableConditionGroupCounterOfPBConfig()
#define Dem_Cfg_GetSizeOfEnableConditionGroupState()                  Dem_Cfg_GetSizeOfEnableConditionGroupStateOfPBConfig()
#define Dem_Cfg_GetSizeOfEnableConditionGroupTable()                  Dem_Cfg_GetSizeOfEnableConditionGroupTableOfPBConfig()
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBSetDataMacros  Dem_Cfg Set Data Macros (POST_BUILD)
  \brief  These macros can be used to write data.
  \{
*/ 
#define Dem_Cfg_SetEnableConditionGroupCounter(Index, Value)          Dem_Cfg_GetEnableConditionGroupCounterOfPBConfig()[(Index)] = (Value)
#define Dem_Cfg_SetEnableConditionGroupState(Index, Value)            Dem_Cfg_GetEnableConditionGroupStateOfPBConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBGetAddressOfDataMacros  Dem_Cfg Get Address Of Data Macros (POST_BUILD)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define Dem_Cfg_GetAddrEnableConditionGroupCounter(Index)             &Dem_Cfg_GetEnableConditionGroupCounter(Index)
#define Dem_Cfg_GetAddrEnableConditionGroupState(Index)               &Dem_Cfg_GetEnableConditionGroupState(Index)
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBHasMacros  Dem_Cfg Has Macros (POST_BUILD)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Dem_Cfg_HasCompatibilityVersion()                             (TRUE != FALSE)
#define Dem_Cfg_HasConfigurationId()                                  (TRUE != FALSE)
#define Dem_Cfg_HasCycleIdTable()                                     (Dem_Cfg_GetCycleIdTableOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasOpCycleTypeOfCycleIdTable()                        (TRUE != FALSE)
#define Dem_Cfg_HasUsedForAgingOfCycleIdTable()                       (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTable()                              (Dem_Cfg_GetDataCollectionTableOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasCollectionSizeOfDataCollectionTable()              (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableCol2ElmtIndEndIdxOfDataCollectionTable() (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableCol2ElmtIndStartIdxOfDataCollectionTable() (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableCol2ElmtIndUsedOfDataCollectionTable() (TRUE != FALSE)
#define Dem_Cfg_HasIdNumberOfDataCollectionTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasStorageKindOfDataCollectionTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasUpdateOfDataCollectionTable()                      (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableEdr2CollInd()                   (Dem_Cfg_GetDataCollectionTableEdr2CollIndOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasDataCollectionTableFfm2CollInd()                   (Dem_Cfg_GetDataCollectionTableFfm2CollIndOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasDataElementTableCol2ElmtInd()                      (Dem_Cfg_GetDataElementTableCol2ElmtIndOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasDebounceHiResTable()                               (Dem_Cfg_GetDebounceHiResTableOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasDebounceLoResTable()                               (Dem_Cfg_GetDebounceLoResTableOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasDebounceTable()                                    (Dem_Cfg_GetDebounceTableOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasDebounceContinuousOfDebounceTable()                (TRUE != FALSE)
#define Dem_Cfg_HasDecrementStepSizeOfDebounceTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasEventDebounceAlgorithmOfDebounceTable()            (TRUE != FALSE)
#define Dem_Cfg_HasEventDebounceBehaviorOfDebounceTable()             (TRUE != FALSE)
#define Dem_Cfg_HasFailTimerCyclesOfDebounceTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasFailedThresholdOfDebounceTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasIncrementStepSizeOfDebounceTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasJumpDownOfDebounceTable()                          (TRUE != FALSE)
#define Dem_Cfg_HasJumpDownValueOfDebounceTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasJumpUpOfDebounceTable()                            (TRUE != FALSE)
#define Dem_Cfg_HasJumpUpValueOfDebounceTable()                       (TRUE != FALSE)
#define Dem_Cfg_HasPassTimerCyclesOfDebounceTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasPassedThresholdOfDebounceTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasStorageOfDebounceTable()                           (TRUE != FALSE)
#define Dem_Cfg_HasDtcNumberTable()                                   (Dem_Cfg_GetDtcNumberTableOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasEventIdOfDtcNumberTable()                          (TRUE != FALSE)
#define Dem_Cfg_HasUdsDtcOfDtcNumberTable()                           (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionGroupCounter()                      (Dem_Cfg_GetEnableConditionGroupCounterOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasEnableConditionGroupState()                        (Dem_Cfg_GetEnableConditionGroupStateOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasEnableConditionGroupTable()                        (Dem_Cfg_GetEnableConditionGroupTableOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasIndexOfEnableConditionGroupTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionGroupTableInd()                     (Dem_Cfg_GetEnableConditionGroupTableIndOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasEnableConditionTable()                             (Dem_Cfg_GetEnableConditionTableOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasEnableConditionGroupTableIndEndIdxOfEnableConditionTable() (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionGroupTableIndStartIdxOfEnableConditionTable() (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionGroupTableIndUsedOfEnableConditionTable() (TRUE != FALSE)
#define Dem_Cfg_HasEventAvailableDefault()                            (Dem_Cfg_GetEventAvailableDefaultOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasEventTable()                                       (Dem_Cfg_GetEventTableOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasAgingAllowedOfEventTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasAgingCycleCounterThresholdOfEventTable()           (TRUE != FALSE)
#define Dem_Cfg_HasAgingCycleIdOfEventTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasDebounceTableIdxOfEventTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasDtcNumberTableIdxOfEventTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasDtcTableIdxOfEventTable()                          (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionGroupTableIdxOfEventTable()         (TRUE != FALSE)
#define Dem_Cfg_HasEventDestinationOfEventTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasEventFailureCycleCounterThresholdOfEventTable()    (TRUE != FALSE)
#define Dem_Cfg_HasEventKindOfEventTable()                            (TRUE != FALSE)
#define Dem_Cfg_HasEventLatchTFOfEventTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasEventPriorityOfEventTable()                        (TRUE != FALSE)
#define Dem_Cfg_HasEventSignificanceOfEventTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasExtendedDataTableIdxOfEventTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameNumTableEndIdxOfEventTable()            (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameNumTableStartIdxOfEventTable()          (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameNumTableUsedOfEventTable()              (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameTableStdFFIdxOfEventTable()             (TRUE != FALSE)
#define Dem_Cfg_HasHealingTargetOfEventTable()                        (TRUE != FALSE)
#define Dem_Cfg_HasOperationCycleIdOfEventTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasSatelliteEventIdxOfEventTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasSatelliteInfoIdxOfEventTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasExtendedDataTable()                                (Dem_Cfg_GetExtendedDataTableOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasDataCollectionTableEdr2CollIndEndIdxOfExtendedDataTable() (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableEdr2CollIndStartIdxOfExtendedDataTable() (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableEdr2CollIndUsedOfExtendedDataTable() (TRUE != FALSE)
#define Dem_Cfg_HasMaxRecordSizeOfExtendedDataTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasFinalMagicNumber()                                 (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameTable()                                 (Dem_Cfg_GetFreezeFrameTableOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasDataCollectionTableFfm2CollIndEndIdxOfFreezeFrameTable() (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTable() (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableFfm2CollIndUsedOfFreezeFrameTable() (TRUE != FALSE)
#define Dem_Cfg_HasRecordSizeOfFreezeFrameTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasRecordSizeUdsOfFreezeFrameTable()                  (TRUE != FALSE)
#define Dem_Cfg_HasGlobalSeverityMask()                               (TRUE != FALSE)
#define Dem_Cfg_HasInitDataHashCode()                                 (TRUE != FALSE)
#define Dem_Cfg_HasJ1939NodeIndicator()                               (Dem_Cfg_GetJ1939NodeIndicatorOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasSatelliteTimeDebounceInfo()                        (Dem_Cfg_GetSatelliteTimeDebounceInfoOfPBConfig() != NULL_PTR)
#define Dem_Cfg_HasDebounceHiResTableEndIdxOfSatelliteTimeDebounceInfo() (TRUE != FALSE)
#define Dem_Cfg_HasDebounceHiResTableStartIdxOfSatelliteTimeDebounceInfo() (TRUE != FALSE)
#define Dem_Cfg_HasDebounceHiResTableUsedOfSatelliteTimeDebounceInfo() (TRUE != FALSE)
#define Dem_Cfg_HasDebounceLoResTableEndIdxOfSatelliteTimeDebounceInfo() (TRUE != FALSE)
#define Dem_Cfg_HasDebounceLoResTableStartIdxOfSatelliteTimeDebounceInfo() (TRUE != FALSE)
#define Dem_Cfg_HasDebounceLoResTableUsedOfSatelliteTimeDebounceInfo() (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfDebounceHiResTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfDebounceLoResTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEnableConditionGroupCounter()                (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEnableConditionGroupState()                  (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEnableConditionGroupTable()                  (TRUE != FALSE)
#define Dem_HasPBConfig()                                             (TRUE != FALSE)
#define Dem_Cfg_HasCompatibilityVersionOfPBConfig()                   (TRUE != FALSE)
#define Dem_Cfg_HasConfigurationIdOfPBConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasCycleIdTableOfPBConfig()                           (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableEdr2CollIndOfPBConfig()         (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableFfm2CollIndOfPBConfig()         (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableOfPBConfig()                    (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableCol2ElmtIndOfPBConfig()            (TRUE != FALSE)
#define Dem_Cfg_HasDebounceHiResTableOfPBConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasDebounceLoResTableOfPBConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasDebounceTableOfPBConfig()                          (TRUE != FALSE)
#define Dem_Cfg_HasDtcNumberTableOfPBConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionGroupCounterOfPBConfig()            (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionGroupStateOfPBConfig()              (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionGroupTableIndOfPBConfig()           (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionGroupTableOfPBConfig()              (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionTableOfPBConfig()                   (TRUE != FALSE)
#define Dem_Cfg_HasEventAvailableDefaultOfPBConfig()                  (TRUE != FALSE)
#define Dem_Cfg_HasEventTableOfPBConfig()                             (TRUE != FALSE)
#define Dem_Cfg_HasExtendedDataTableOfPBConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasFinalMagicNumberOfPBConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameTableOfPBConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasGlobalSeverityMaskOfPBConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasInitDataHashCodeOfPBConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasJ1939NodeIndicatorOfPBConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasSatelliteTimeDebounceInfoOfPBConfig()              (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfDebounceHiResTableOfPBConfig()               (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfDebounceLoResTableOfPBConfig()               (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEnableConditionGroupCounterOfPBConfig()      (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEnableConditionGroupStateOfPBConfig()        (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEnableConditionGroupTableOfPBConfig()        (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBIncrementDataMacros  Dem_Cfg Increment Data Macros (POST_BUILD)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define Dem_Cfg_IncEnableConditionGroupCounter(Index)                 Dem_Cfg_GetEnableConditionGroupCounter(Index)++
#define Dem_Cfg_IncEnableConditionGroupState(Index)                   Dem_Cfg_GetEnableConditionGroupState(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBDecrementDataMacros  Dem_Cfg Decrement Data Macros (POST_BUILD)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define Dem_Cfg_DecEnableConditionGroupCounter(Index)                 Dem_Cfg_GetEnableConditionGroupCounter(Index)--
#define Dem_Cfg_DecEnableConditionGroupState(Index)                   Dem_Cfg_GetEnableConditionGroupState(Index)--
/** 
  \}
*/ 

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
/* PRQA S 3453 ROOT_TYPE_0850 */ /* MD_MSR_19.8 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgPBIterableTypes  Dem_Cfg Iterable Types (POST_BUILD)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Dem_Cfg_CycleIdTable */
typedef uint16_least Dem_Cfg_CycleIdTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DataCollectionTable */
typedef uint16_least Dem_Cfg_DataCollectionTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DataCollectionTableEdr2CollInd */
typedef uint16_least Dem_Cfg_DataCollectionTableEdr2CollIndIterType;

/**   \brief  type used to iterate Dem_Cfg_DataCollectionTableFfm2CollInd */
typedef uint16_least Dem_Cfg_DataCollectionTableFfm2CollIndIterType;

/**   \brief  type used to iterate Dem_Cfg_DataElementTableCol2ElmtInd */
typedef uint16_least Dem_Cfg_DataElementTableCol2ElmtIndIterType;

/**   \brief  type used to iterate Dem_Cfg_DebounceHiResTable */
typedef uint16_least Dem_Cfg_DebounceHiResTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DebounceLoResTable */
typedef uint16_least Dem_Cfg_DebounceLoResTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DebounceTable */
typedef uint16_least Dem_Cfg_DebounceTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DtcNumberTable */
typedef uint16_least Dem_Cfg_DtcNumberTableIterType;

/**   \brief  type used to iterate Dem_Cfg_EnableConditionGroupTable */
typedef uint16_least Dem_Cfg_EnableConditionGroupTableIterType;

/**   \brief  type used to iterate Dem_Cfg_EnableConditionGroupTableInd */
typedef uint16_least Dem_Cfg_EnableConditionGroupTableIndIterType;

/**   \brief  type used to iterate Dem_Cfg_EventAvailableDefault */
typedef uint16_least Dem_Cfg_EventAvailableDefaultIterType;

/**   \brief  type used to iterate Dem_Cfg_ExtendedDataTable */
typedef uint16_least Dem_Cfg_ExtendedDataTableIterType;

/**   \brief  type used to iterate Dem_Cfg_FreezeFrameTable */
typedef uint16_least Dem_Cfg_FreezeFrameTableIterType;

/**   \brief  type used to iterate Dem_Cfg_J1939NodeIndicator */
typedef uint16_least Dem_Cfg_J1939NodeIndicatorIterType;

/**   \brief  type used to iterate Dem_Cfg_SatelliteTimeDebounceInfo */
typedef uint16_least Dem_Cfg_SatelliteTimeDebounceInfoIterType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBIterableTypesWithSizeRelations  Dem_Cfg Iterable Types With Size Relations (POST_BUILD)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate Dem_Cfg_EnableConditionGroupCounter */
typedef Dem_Cfg_EnableConditionGroupTableIterType Dem_Cfg_EnableConditionGroupCounterIterType;

/**   \brief  type used to iterate Dem_Cfg_EnableConditionGroupState */
typedef Dem_Cfg_EnableConditionGroupTableIterType Dem_Cfg_EnableConditionGroupStateIterType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBValueTypes  Dem_Cfg Value Types (POST_BUILD)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for Dem_Cfg_CompatibilityVersion */
typedef uint32 Dem_Cfg_CompatibilityVersionType;

/**   \brief  value based type definition for Dem_Cfg_ConfigurationId */
typedef uint16 Dem_Cfg_ConfigurationIdType;

/**   \brief  value based type definition for Dem_Cfg_OpCycleTypeOfCycleIdTable */
typedef uint8 Dem_Cfg_OpCycleTypeOfCycleIdTableType;

/**   \brief  value based type definition for Dem_Cfg_UsedForAgingOfCycleIdTable */
typedef boolean Dem_Cfg_UsedForAgingOfCycleIdTableType;

/**   \brief  value based type definition for Dem_Cfg_CollectionSizeOfDataCollectionTable */
typedef uint16 Dem_Cfg_CollectionSizeOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_DataElementTableCol2ElmtIndEndIdxOfDataCollectionTable */
typedef uint16 Dem_Cfg_DataElementTableCol2ElmtIndEndIdxOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_DataElementTableCol2ElmtIndStartIdxOfDataCollectionTable */
typedef uint16 Dem_Cfg_DataElementTableCol2ElmtIndStartIdxOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_DataElementTableCol2ElmtIndUsedOfDataCollectionTable */
typedef boolean Dem_Cfg_DataElementTableCol2ElmtIndUsedOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_IdNumberOfDataCollectionTable */
typedef uint16 Dem_Cfg_IdNumberOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_StorageKindOfDataCollectionTable */
typedef uint8 Dem_Cfg_StorageKindOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_UpdateOfDataCollectionTable */
typedef boolean Dem_Cfg_UpdateOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableEdr2CollInd */
typedef uint16 Dem_Cfg_DataCollectionTableEdr2CollIndType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableFfm2CollInd */
typedef uint16 Dem_Cfg_DataCollectionTableFfm2CollIndType;

/**   \brief  value based type definition for Dem_Cfg_DataElementTableCol2ElmtInd */
typedef uint8 Dem_Cfg_DataElementTableCol2ElmtIndType;

/**   \brief  value based type definition for Dem_Cfg_DebounceHiResTable */
typedef uint16 Dem_Cfg_DebounceHiResTableType;

/**   \brief  value based type definition for Dem_Cfg_DebounceLoResTable */
typedef uint16 Dem_Cfg_DebounceLoResTableType;

/**   \brief  value based type definition for Dem_Cfg_DebounceContinuousOfDebounceTable */
typedef boolean Dem_Cfg_DebounceContinuousOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_DecrementStepSizeOfDebounceTable */
typedef sint16 Dem_Cfg_DecrementStepSizeOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_EventDebounceAlgorithmOfDebounceTable */
typedef uint8 Dem_Cfg_EventDebounceAlgorithmOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_EventDebounceBehaviorOfDebounceTable */
typedef boolean Dem_Cfg_EventDebounceBehaviorOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_FailTimerCyclesOfDebounceTable */
typedef sint16 Dem_Cfg_FailTimerCyclesOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_FailedThresholdOfDebounceTable */
typedef sint16 Dem_Cfg_FailedThresholdOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_IncrementStepSizeOfDebounceTable */
typedef sint16 Dem_Cfg_IncrementStepSizeOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_JumpDownOfDebounceTable */
typedef boolean Dem_Cfg_JumpDownOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_JumpDownValueOfDebounceTable */
typedef sint16 Dem_Cfg_JumpDownValueOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_JumpUpOfDebounceTable */
typedef boolean Dem_Cfg_JumpUpOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_JumpUpValueOfDebounceTable */
typedef sint16 Dem_Cfg_JumpUpValueOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_PassTimerCyclesOfDebounceTable */
typedef sint16 Dem_Cfg_PassTimerCyclesOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_PassedThresholdOfDebounceTable */
typedef sint16 Dem_Cfg_PassedThresholdOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_StorageOfDebounceTable */
typedef boolean Dem_Cfg_StorageOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_EventIdOfDtcNumberTable */
typedef uint16 Dem_Cfg_EventIdOfDtcNumberTableType;

/**   \brief  value based type definition for Dem_Cfg_UdsDtcOfDtcNumberTable */
typedef uint32 Dem_Cfg_UdsDtcOfDtcNumberTableType;

/**   \brief  value based type definition for Dem_Cfg_EnableConditionGroupCounter */
typedef uint8 Dem_Cfg_EnableConditionGroupCounterType;

/**   \brief  value based type definition for Dem_Cfg_EnableConditionGroupState */
typedef uint8 Dem_Cfg_EnableConditionGroupStateType;

/**   \brief  value based type definition for Dem_Cfg_IndexOfEnableConditionGroupTable */
typedef uint8 Dem_Cfg_IndexOfEnableConditionGroupTableType;

/**   \brief  value based type definition for Dem_Cfg_EnableConditionGroupTableInd */
typedef uint16 Dem_Cfg_EnableConditionGroupTableIndType;

/**   \brief  value based type definition for Dem_Cfg_EnableConditionGroupTableIndEndIdxOfEnableConditionTable */
typedef uint16 Dem_Cfg_EnableConditionGroupTableIndEndIdxOfEnableConditionTableType;

/**   \brief  value based type definition for Dem_Cfg_EnableConditionGroupTableIndStartIdxOfEnableConditionTable */
typedef uint16 Dem_Cfg_EnableConditionGroupTableIndStartIdxOfEnableConditionTableType;

/**   \brief  value based type definition for Dem_Cfg_EnableConditionGroupTableIndUsedOfEnableConditionTable */
typedef boolean Dem_Cfg_EnableConditionGroupTableIndUsedOfEnableConditionTableType;

/**   \brief  value based type definition for Dem_Cfg_EventAvailableDefault */
typedef boolean Dem_Cfg_EventAvailableDefaultType;

/**   \brief  value based type definition for Dem_Cfg_AgingAllowedOfEventTable */
typedef boolean Dem_Cfg_AgingAllowedOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_AgingCycleCounterThresholdOfEventTable */
typedef uint8 Dem_Cfg_AgingCycleCounterThresholdOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_AgingCycleIdOfEventTable */
typedef uint8 Dem_Cfg_AgingCycleIdOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_DebounceTableIdxOfEventTable */
typedef uint16 Dem_Cfg_DebounceTableIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_DtcNumberTableIdxOfEventTable */
typedef uint16 Dem_Cfg_DtcNumberTableIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_DtcTableIdxOfEventTable */
typedef uint8 Dem_Cfg_DtcTableIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EnableConditionGroupTableIdxOfEventTable */
typedef uint16 Dem_Cfg_EnableConditionGroupTableIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventDestinationOfEventTable */
typedef uint8 Dem_Cfg_EventDestinationOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventFailureCycleCounterThresholdOfEventTable */
typedef uint8 Dem_Cfg_EventFailureCycleCounterThresholdOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventKindOfEventTable */
typedef uint8 Dem_Cfg_EventKindOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventLatchTFOfEventTable */
typedef boolean Dem_Cfg_EventLatchTFOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventPriorityOfEventTable */
typedef uint8 Dem_Cfg_EventPriorityOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventSignificanceOfEventTable */
typedef uint8 Dem_Cfg_EventSignificanceOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_ExtendedDataTableIdxOfEventTable */
typedef uint16 Dem_Cfg_ExtendedDataTableIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_FreezeFrameNumTableEndIdxOfEventTable */
typedef uint8 Dem_Cfg_FreezeFrameNumTableEndIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_FreezeFrameNumTableStartIdxOfEventTable */
typedef uint8 Dem_Cfg_FreezeFrameNumTableStartIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_FreezeFrameNumTableUsedOfEventTable */
typedef boolean Dem_Cfg_FreezeFrameNumTableUsedOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_FreezeFrameTableStdFFIdxOfEventTable */
typedef uint16 Dem_Cfg_FreezeFrameTableStdFFIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_HealingTargetOfEventTable */
typedef uint8 Dem_Cfg_HealingTargetOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_OperationCycleIdOfEventTable */
typedef uint8 Dem_Cfg_OperationCycleIdOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_SatelliteEventIdxOfEventTable */
typedef uint16 Dem_Cfg_SatelliteEventIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_SatelliteInfoIdxOfEventTable */
typedef uint8 Dem_Cfg_SatelliteInfoIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableEdr2CollIndEndIdxOfExtendedDataTable */
typedef uint16 Dem_Cfg_DataCollectionTableEdr2CollIndEndIdxOfExtendedDataTableType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableEdr2CollIndStartIdxOfExtendedDataTable */
typedef uint16 Dem_Cfg_DataCollectionTableEdr2CollIndStartIdxOfExtendedDataTableType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableEdr2CollIndUsedOfExtendedDataTable */
typedef boolean Dem_Cfg_DataCollectionTableEdr2CollIndUsedOfExtendedDataTableType;

/**   \brief  value based type definition for Dem_Cfg_MaxRecordSizeOfExtendedDataTable */
typedef uint16 Dem_Cfg_MaxRecordSizeOfExtendedDataTableType;

/**   \brief  value based type definition for Dem_Cfg_FinalMagicNumber */
typedef uint16 Dem_Cfg_FinalMagicNumberType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableFfm2CollIndEndIdxOfFreezeFrameTable */
typedef uint16 Dem_Cfg_DataCollectionTableFfm2CollIndEndIdxOfFreezeFrameTableType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTable */
typedef uint16 Dem_Cfg_DataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTableType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableFfm2CollIndUsedOfFreezeFrameTable */
typedef boolean Dem_Cfg_DataCollectionTableFfm2CollIndUsedOfFreezeFrameTableType;

/**   \brief  value based type definition for Dem_Cfg_RecordSizeOfFreezeFrameTable */
typedef uint16 Dem_Cfg_RecordSizeOfFreezeFrameTableType;

/**   \brief  value based type definition for Dem_Cfg_RecordSizeUdsOfFreezeFrameTable */
typedef uint16 Dem_Cfg_RecordSizeUdsOfFreezeFrameTableType;

/**   \brief  value based type definition for Dem_Cfg_GlobalSeverityMask */
typedef uint8 Dem_Cfg_GlobalSeverityMaskType;

/**   \brief  value based type definition for Dem_Cfg_InitDataHashCode */
typedef sint32 Dem_Cfg_InitDataHashCodeType;

/**   \brief  value based type definition for Dem_Cfg_J1939NodeIndicator */
typedef uint16 Dem_Cfg_J1939NodeIndicatorType;

/**   \brief  value based type definition for Dem_Cfg_DebounceHiResTableEndIdxOfSatelliteTimeDebounceInfo */
typedef uint16 Dem_Cfg_DebounceHiResTableEndIdxOfSatelliteTimeDebounceInfoType;

/**   \brief  value based type definition for Dem_Cfg_DebounceHiResTableStartIdxOfSatelliteTimeDebounceInfo */
typedef uint16 Dem_Cfg_DebounceHiResTableStartIdxOfSatelliteTimeDebounceInfoType;

/**   \brief  value based type definition for Dem_Cfg_DebounceHiResTableUsedOfSatelliteTimeDebounceInfo */
typedef boolean Dem_Cfg_DebounceHiResTableUsedOfSatelliteTimeDebounceInfoType;

/**   \brief  value based type definition for Dem_Cfg_DebounceLoResTableEndIdxOfSatelliteTimeDebounceInfo */
typedef uint16 Dem_Cfg_DebounceLoResTableEndIdxOfSatelliteTimeDebounceInfoType;

/**   \brief  value based type definition for Dem_Cfg_DebounceLoResTableStartIdxOfSatelliteTimeDebounceInfo */
typedef uint16 Dem_Cfg_DebounceLoResTableStartIdxOfSatelliteTimeDebounceInfoType;

/**   \brief  value based type definition for Dem_Cfg_DebounceLoResTableUsedOfSatelliteTimeDebounceInfo */
typedef boolean Dem_Cfg_DebounceLoResTableUsedOfSatelliteTimeDebounceInfoType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfDebounceHiResTable */
typedef uint16 Dem_Cfg_SizeOfDebounceHiResTableType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfDebounceLoResTable */
typedef uint16 Dem_Cfg_SizeOfDebounceLoResTableType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEnableConditionGroupCounter */
typedef uint16 Dem_Cfg_SizeOfEnableConditionGroupCounterType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEnableConditionGroupState */
typedef uint16 Dem_Cfg_SizeOfEnableConditionGroupStateType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEnableConditionGroupTable */
typedef uint16 Dem_Cfg_SizeOfEnableConditionGroupTableType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgPBStructTypes  Dem_Cfg Struct Types (POST_BUILD)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in Dem_Cfg_CycleIdTable */
typedef struct sDem_Cfg_CycleIdTableType
{
  Dem_Cfg_UsedForAgingOfCycleIdTableType UsedForAgingOfCycleIdTable;  /**< DemOperationCycle is target of any DemEventParameter/DemEventClass/DemAgingCycleRef */
  Dem_Cfg_OpCycleTypeOfCycleIdTableType OpCycleTypeOfCycleIdTable;  /**< DemOperationCycleType of the DemOperationCycle: [DEM_CFG_OPCYC_IGNITION, DEM_CFG_OPCYC_OBD_DCY, DEM_CFG_OPCYC_OTHER, DEM_CFG_OPCYC_POWER, DEM_CFG_OPCYC_TIME, DEM_CFG_OPCYC_WARMUP, DEM_CFG_OPCYC_IGNITION_HYBRID, DEM_CFG_OPCYC_AGING] */
} Dem_Cfg_CycleIdTableType;

/**   \brief  type used in Dem_Cfg_DataCollectionTable */
typedef struct sDem_Cfg_DataCollectionTableType
{
  Dem_Cfg_CollectionSizeOfDataCollectionTableType CollectionSizeOfDataCollectionTable;
  Dem_Cfg_DataElementTableCol2ElmtIndEndIdxOfDataCollectionTableType DataElementTableCol2ElmtIndEndIdxOfDataCollectionTable;  /**< the end index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd */
  Dem_Cfg_DataElementTableCol2ElmtIndStartIdxOfDataCollectionTableType DataElementTableCol2ElmtIndStartIdxOfDataCollectionTable;  /**< the start index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd */
  Dem_Cfg_IdNumberOfDataCollectionTableType IdNumberOfDataCollectionTable;
  Dem_Cfg_UpdateOfDataCollectionTableType UpdateOfDataCollectionTable;
  Dem_Cfg_StorageKindOfDataCollectionTableType StorageKindOfDataCollectionTable;
} Dem_Cfg_DataCollectionTableType;

/**   \brief  type used in Dem_Cfg_DebounceTable */
typedef struct sDem_Cfg_DebounceTableType
{
  Dem_Cfg_DecrementStepSizeOfDebounceTableType DecrementStepSizeOfDebounceTable;  /**< (-1) * DemDebounceCounterDecrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_FailTimerCyclesOfDebounceTableType FailTimerCyclesOfDebounceTable;  /**< HiRes- or LoRes-Timer ticks for DemDebounceTimeFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceTimeBase */
  Dem_Cfg_FailedThresholdOfDebounceTableType FailedThresholdOfDebounceTable;  /**< DemDebounceCounterFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_IncrementStepSizeOfDebounceTableType IncrementStepSizeOfDebounceTable;  /**< DemDebounceCounterIncrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_JumpDownValueOfDebounceTableType JumpDownValueOfDebounceTable;  /**< DemDebounceCounterJumpDownValue of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_JumpUpValueOfDebounceTableType JumpUpValueOfDebounceTable;  /**< DemDebounceCounterJumpUpValue of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_PassTimerCyclesOfDebounceTableType PassTimerCyclesOfDebounceTable;  /**< HiRes- or LoRes-Timer ticks for DemDebounceTimePassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceTimeBase */
  Dem_Cfg_PassedThresholdOfDebounceTableType PassedThresholdOfDebounceTable;  /**< DemDebounceCounterPassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_DebounceContinuousOfDebounceTableType DebounceContinuousOfDebounceTable;  /**< DemDebounceContinuous of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased and ~/DemDebounceTimeBase */
  Dem_Cfg_EventDebounceBehaviorOfDebounceTableType EventDebounceBehaviorOfDebounceTable;  /**< DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/[algorithm]/DemDebounceBehavior == DEM_DEBOUNCE_RESET */
  Dem_Cfg_JumpDownOfDebounceTableType JumpDownOfDebounceTable;  /**< DemDebounceCounterJumpDown of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBase */
  Dem_Cfg_JumpUpOfDebounceTableType JumpUpOfDebounceTable;  /**< DemDebounceCounterJumpUp of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_StorageOfDebounceTableType StorageOfDebounceTable;  /**< DemDebounceCounterStorage of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_EventDebounceAlgorithmOfDebounceTableType EventDebounceAlgorithmOfDebounceTable;  /**< Used DemEventParameter/DemEventClass/DemDebounceAlgorithmClass */
} Dem_Cfg_DebounceTableType;

/**   \brief  type used in Dem_Cfg_DtcNumberTable */
typedef struct sDem_Cfg_DtcNumberTableType
{
  Dem_Cfg_UdsDtcOfDtcNumberTableType UdsDtcOfDtcNumberTable;  /**< Sorted values of DefinitionRef: /MICROSAR/Dem/DemConfigSet/DemDTCClass/DemUdsDTC */
  Dem_Cfg_EventIdOfDtcNumberTableType EventIdOfDtcNumberTable;  /**< EventId that references this Dtc, or with combination groups the 'representative EventId' */
} Dem_Cfg_DtcNumberTableType;

/**   \brief  type used in Dem_Cfg_EnableConditionGroupTable */
typedef struct sDem_Cfg_EnableConditionGroupTableType
{
  Dem_Cfg_IndexOfEnableConditionGroupTableType IndexOfEnableConditionGroupTable;  /**< Dummy - contains always the index of this element (self) */
} Dem_Cfg_EnableConditionGroupTableType;

/**   \brief  type used in Dem_Cfg_EnableConditionTable */
typedef struct sDem_Cfg_EnableConditionTableType
{
  Dem_Cfg_EnableConditionGroupTableIndEndIdxOfEnableConditionTableType EnableConditionGroupTableIndEndIdxOfEnableConditionTable;  /**< the end index of the 0:n relation pointing to Dem_Cfg_EnableConditionGroupTableInd */
  Dem_Cfg_EnableConditionGroupTableIndStartIdxOfEnableConditionTableType EnableConditionGroupTableIndStartIdxOfEnableConditionTable;  /**< the start index of the 0:n relation pointing to Dem_Cfg_EnableConditionGroupTableInd */
} Dem_Cfg_EnableConditionTableType;

/**   \brief  type used in Dem_Cfg_EventTable */
typedef struct sDem_Cfg_EventTableType
{
  Dem_Cfg_DebounceTableIdxOfEventTableType DebounceTableIdxOfEventTable;  /**< the index of the 1:1 relation pointing to Dem_Cfg_DebounceTable */
  Dem_Cfg_DtcNumberTableIdxOfEventTableType DtcNumberTableIdxOfEventTable;  /**< the index of the 1:1 relation pointing to Dem_Cfg_DtcNumberTable */
  Dem_Cfg_EnableConditionGroupTableIdxOfEventTableType EnableConditionGroupTableIdxOfEventTable;  /**< the index of the 1:1 relation pointing to Dem_Cfg_EnableConditionGroupTable */
  Dem_Cfg_ExtendedDataTableIdxOfEventTableType ExtendedDataTableIdxOfEventTable;  /**< the index of the 1:1 relation pointing to Dem_Cfg_ExtendedDataTable */
  Dem_Cfg_FreezeFrameTableStdFFIdxOfEventTableType FreezeFrameTableStdFFIdxOfEventTable;  /**< the index of the 1:1 relation pointing to Dem_Cfg_FreezeFrameTable */
  Dem_Cfg_SatelliteEventIdxOfEventTableType SatelliteEventIdxOfEventTable;  /**< Index of this event in the satellite's RAM buffers Dem_Cfg_SatelliteInfoNN.SatelliteData[] and Dem_Cfg_SatelliteInfoNN.SatelliteExtendedData[]. */
  Dem_Cfg_AgingAllowedOfEventTableType AgingAllowedOfEventTable;  /**< DemAgingAllowed of the DemEventParameter/DemEventClass */
  Dem_Cfg_EventLatchTFOfEventTableType EventLatchTFOfEventTable;  /**< DemEventLatchTestFailed of the DemEventParameter */
  Dem_Cfg_AgingCycleCounterThresholdOfEventTableType AgingCycleCounterThresholdOfEventTable;  /**< DemAgingCycleCounterThreshold of the DemEventParameter/DemEventClass, if AgingAllowedOfEventTable==FALSE we use '255' here, too. */
  Dem_Cfg_AgingCycleIdOfEventTableType AgingCycleIdOfEventTable;  /**< DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemAgingCycleRef */
  Dem_Cfg_DtcTableIdxOfEventTableType DtcTableIdxOfEventTable;  /**< the index of the 1:1 relation pointing to Dem_Cfg_DtcTable */
  Dem_Cfg_EventDestinationOfEventTableType EventDestinationOfEventTable;  /**< DemEventDestination of the DemEventParameter/DemEventClass */
  Dem_Cfg_EventFailureCycleCounterThresholdOfEventTableType EventFailureCycleCounterThresholdOfEventTable;  /**< DemEventFailureCycleCounterThreshold of the DemEventParameter/DemEventClass, '0': is also default for unset parameter */
  Dem_Cfg_EventKindOfEventTableType EventKindOfEventTable;  /**< DemEventKind of the DemEventParameter */
  Dem_Cfg_EventPriorityOfEventTableType EventPriorityOfEventTable;  /**< DemEventParameter/DemEventClass/DemEventPriority, values [1..255] for the configuration range [1..255]. */
  Dem_Cfg_EventSignificanceOfEventTableType EventSignificanceOfEventTable;  /**< DemEventSignificance of the DemEventParameter/DemEventClass */
  Dem_Cfg_FreezeFrameNumTableEndIdxOfEventTableType FreezeFrameNumTableEndIdxOfEventTable;  /**< the end index of the 0:n relation pointing to Dem_Cfg_FreezeFrameNumTable */
  Dem_Cfg_FreezeFrameNumTableStartIdxOfEventTableType FreezeFrameNumTableStartIdxOfEventTable;  /**< the start index of the 0:n relation pointing to Dem_Cfg_FreezeFrameNumTable */
  Dem_Cfg_HealingTargetOfEventTableType HealingTargetOfEventTable;  /**< DemIndicatorHealingCycleCounterThreshold of the DemEventParameter/DemEventClass/DemIndicatorAttribute (for each event all attribute's value must be identical). Events without DemIndicatorAttribute have: 0. */
  Dem_Cfg_OperationCycleIdOfEventTableType OperationCycleIdOfEventTable;  /**< DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemOperationCycleRef */
  Dem_Cfg_SatelliteInfoIdxOfEventTableType SatelliteInfoIdxOfEventTable;  /**< the index of the 1:1 relation pointing to Dem_Cfg_SatelliteInfo */
} Dem_Cfg_EventTableType;

/**   \brief  type used in Dem_Cfg_ExtendedDataTable */
typedef struct sDem_Cfg_ExtendedDataTableType
{
  Dem_Cfg_DataCollectionTableEdr2CollIndEndIdxOfExtendedDataTableType DataCollectionTableEdr2CollIndEndIdxOfExtendedDataTable;  /**< the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd */
  Dem_Cfg_DataCollectionTableEdr2CollIndStartIdxOfExtendedDataTableType DataCollectionTableEdr2CollIndStartIdxOfExtendedDataTable;  /**< the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd */
  Dem_Cfg_MaxRecordSizeOfExtendedDataTableType MaxRecordSizeOfExtendedDataTable;
} Dem_Cfg_ExtendedDataTableType;

/**   \brief  type used in Dem_Cfg_FreezeFrameTable */
typedef struct sDem_Cfg_FreezeFrameTableType
{
  Dem_Cfg_DataCollectionTableFfm2CollIndEndIdxOfFreezeFrameTableType DataCollectionTableFfm2CollIndEndIdxOfFreezeFrameTable;  /**< the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd */
  Dem_Cfg_DataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTableType DataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTable;  /**< the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd */
  Dem_Cfg_RecordSizeOfFreezeFrameTableType RecordSizeOfFreezeFrameTable;  /**< Summarized size of did data that is stored in Dem_Cfg_PrimaryEntryType.SnapshotData[][] (i.e. typically without size of dids containing internal data elements). */
  Dem_Cfg_RecordSizeUdsOfFreezeFrameTableType RecordSizeUdsOfFreezeFrameTable;  /**< Summarized size of did data, did numbers and snapshot header (i.e. dynamical payload size of the uds response message). */
} Dem_Cfg_FreezeFrameTableType;

/**   \brief  type used in Dem_Cfg_SatelliteTimeDebounceInfo */
typedef struct sDem_Cfg_SatelliteTimeDebounceInfoType
{
  Dem_Cfg_DebounceHiResTableEndIdxOfSatelliteTimeDebounceInfoType DebounceHiResTableEndIdxOfSatelliteTimeDebounceInfo;  /**< the end index of the 0:n relation pointing to Dem_Cfg_DebounceHiResTable */
  Dem_Cfg_DebounceHiResTableStartIdxOfSatelliteTimeDebounceInfoType DebounceHiResTableStartIdxOfSatelliteTimeDebounceInfo;  /**< the start index of the 0:n relation pointing to Dem_Cfg_DebounceHiResTable */
  Dem_Cfg_DebounceLoResTableEndIdxOfSatelliteTimeDebounceInfoType DebounceLoResTableEndIdxOfSatelliteTimeDebounceInfo;  /**< the end index of the 0:n relation pointing to Dem_Cfg_DebounceLoResTable */
  Dem_Cfg_DebounceLoResTableStartIdxOfSatelliteTimeDebounceInfoType DebounceLoResTableStartIdxOfSatelliteTimeDebounceInfo;  /**< the start index of the 0:n relation pointing to Dem_Cfg_DebounceLoResTable */
} Dem_Cfg_SatelliteTimeDebounceInfoType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBRootPointerTypes  Dem_Cfg Root Pointer Types (POST_BUILD)
  \brief  These type definitions are used to point to arrays.
  \{
*/ 
/**   \brief  type used to point to Dem_Cfg_CycleIdTable */
typedef P2CONST(Dem_Cfg_CycleIdTableType, TYPEDEF, DEM_PBCFG) Dem_Cfg_CycleIdTablePtrType;

/**   \brief  type used to point to Dem_Cfg_DataCollectionTable */
typedef P2CONST(Dem_Cfg_DataCollectionTableType, TYPEDEF, DEM_PBCFG) Dem_Cfg_DataCollectionTablePtrType;

/**   \brief  type used to point to Dem_Cfg_DataCollectionTableEdr2CollInd */
typedef P2CONST(Dem_Cfg_DataCollectionTableEdr2CollIndType, TYPEDEF, DEM_PBCFG) Dem_Cfg_DataCollectionTableEdr2CollIndPtrType;

/**   \brief  type used to point to Dem_Cfg_DataCollectionTableFfm2CollInd */
typedef P2CONST(Dem_Cfg_DataCollectionTableFfm2CollIndType, TYPEDEF, DEM_PBCFG) Dem_Cfg_DataCollectionTableFfm2CollIndPtrType;

/**   \brief  type used to point to Dem_Cfg_DataElementTableCol2ElmtInd */
typedef P2CONST(Dem_Cfg_DataElementTableCol2ElmtIndType, TYPEDEF, DEM_PBCFG) Dem_Cfg_DataElementTableCol2ElmtIndPtrType;

/**   \brief  type used to point to Dem_Cfg_DebounceHiResTable */
typedef P2CONST(Dem_Cfg_DebounceHiResTableType, TYPEDEF, DEM_PBCFG) Dem_Cfg_DebounceHiResTablePtrType;

/**   \brief  type used to point to Dem_Cfg_DebounceLoResTable */
typedef P2CONST(Dem_Cfg_DebounceLoResTableType, TYPEDEF, DEM_PBCFG) Dem_Cfg_DebounceLoResTablePtrType;

/**   \brief  type used to point to Dem_Cfg_DebounceTable */
typedef P2CONST(Dem_Cfg_DebounceTableType, TYPEDEF, DEM_PBCFG) Dem_Cfg_DebounceTablePtrType;

/**   \brief  type used to point to Dem_Cfg_DtcNumberTable */
typedef P2CONST(Dem_Cfg_DtcNumberTableType, TYPEDEF, DEM_PBCFG) Dem_Cfg_DtcNumberTablePtrType;

/**   \brief  type used to point to Dem_Cfg_EnableConditionGroupCounter */
typedef P2VAR(Dem_Cfg_EnableConditionGroupCounterType, TYPEDEF, DEM_VAR_PBCFG) Dem_Cfg_EnableConditionGroupCounterPtrType;

/**   \brief  type used to point to Dem_Cfg_EnableConditionGroupState */
typedef P2VAR(volatile Dem_Cfg_EnableConditionGroupStateType, TYPEDEF, DEM_VAR_PBCFG) Dem_Cfg_EnableConditionGroupStatePtrType;

/**   \brief  type used to point to Dem_Cfg_EnableConditionGroupTable */
typedef P2CONST(Dem_Cfg_EnableConditionGroupTableType, TYPEDEF, DEM_PBCFG) Dem_Cfg_EnableConditionGroupTablePtrType;

/**   \brief  type used to point to Dem_Cfg_EnableConditionGroupTableInd */
typedef P2CONST(Dem_Cfg_EnableConditionGroupTableIndType, TYPEDEF, DEM_PBCFG) Dem_Cfg_EnableConditionGroupTableIndPtrType;

/**   \brief  type used to point to Dem_Cfg_EnableConditionTable */
typedef P2CONST(Dem_Cfg_EnableConditionTableType, TYPEDEF, DEM_PBCFG) Dem_Cfg_EnableConditionTablePtrType;

/**   \brief  type used to point to Dem_Cfg_EventAvailableDefault */
typedef P2CONST(Dem_Cfg_EventAvailableDefaultType, TYPEDEF, DEM_PBCFG) Dem_Cfg_EventAvailableDefaultPtrType;

/**   \brief  type used to point to Dem_Cfg_EventTable */
typedef P2CONST(Dem_Cfg_EventTableType, TYPEDEF, DEM_PBCFG) Dem_Cfg_EventTablePtrType;

/**   \brief  type used to point to Dem_Cfg_ExtendedDataTable */
typedef P2CONST(Dem_Cfg_ExtendedDataTableType, TYPEDEF, DEM_PBCFG) Dem_Cfg_ExtendedDataTablePtrType;

/**   \brief  type used to point to Dem_Cfg_FreezeFrameTable */
typedef P2CONST(Dem_Cfg_FreezeFrameTableType, TYPEDEF, DEM_PBCFG) Dem_Cfg_FreezeFrameTablePtrType;

/**   \brief  type used to point to Dem_Cfg_J1939NodeIndicator */
typedef P2CONST(Dem_Cfg_J1939NodeIndicatorType, TYPEDEF, DEM_PBCFG) Dem_Cfg_J1939NodeIndicatorPtrType;

/**   \brief  type used to point to Dem_Cfg_SatelliteTimeDebounceInfo */
typedef P2CONST(Dem_Cfg_SatelliteTimeDebounceInfoType, TYPEDEF, DEM_PBCFG) Dem_Cfg_SatelliteTimeDebounceInfoPtrType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPBRootValueTypes  Dem_Cfg Root Value Types (POST_BUILD)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in Dem_PBConfig */
typedef struct sDem_PBConfigType
{
  Dem_Cfg_InitDataHashCodeType InitDataHashCodeOfPBConfig;  /**< the hashcode to validate the initialization structure at initialization time of Dem */
  Dem_Cfg_CycleIdTablePtrType CycleIdTableOfPBConfig;  /**< the pointer to Dem_Cfg_CycleIdTable */
  Dem_Cfg_DataCollectionTablePtrType DataCollectionTableOfPBConfig;  /**< the pointer to Dem_Cfg_DataCollectionTable */
  Dem_Cfg_DataCollectionTableEdr2CollIndPtrType DataCollectionTableEdr2CollIndOfPBConfig;  /**< the pointer to Dem_Cfg_DataCollectionTableEdr2CollInd */
  Dem_Cfg_DataCollectionTableFfm2CollIndPtrType DataCollectionTableFfm2CollIndOfPBConfig;  /**< the pointer to Dem_Cfg_DataCollectionTableFfm2CollInd */
  Dem_Cfg_DataElementTableCol2ElmtIndPtrType DataElementTableCol2ElmtIndOfPBConfig;  /**< the pointer to Dem_Cfg_DataElementTableCol2ElmtInd */
  Dem_Cfg_DebounceHiResTablePtrType DebounceHiResTableOfPBConfig;  /**< the pointer to Dem_Cfg_DebounceHiResTable */
  Dem_Cfg_DebounceLoResTablePtrType DebounceLoResTableOfPBConfig;  /**< the pointer to Dem_Cfg_DebounceLoResTable */
  Dem_Cfg_DebounceTablePtrType DebounceTableOfPBConfig;  /**< the pointer to Dem_Cfg_DebounceTable */
  Dem_Cfg_DtcNumberTablePtrType DtcNumberTableOfPBConfig;  /**< the pointer to Dem_Cfg_DtcNumberTable */
  Dem_Cfg_EnableConditionGroupCounterPtrType EnableConditionGroupCounterOfPBConfig;  /**< the pointer to Dem_Cfg_EnableConditionGroupCounter */
  Dem_Cfg_EnableConditionGroupStatePtrType EnableConditionGroupStateOfPBConfig;  /**< the pointer to Dem_Cfg_EnableConditionGroupState */
  Dem_Cfg_EnableConditionGroupTablePtrType EnableConditionGroupTableOfPBConfig;  /**< the pointer to Dem_Cfg_EnableConditionGroupTable */
  Dem_Cfg_EnableConditionGroupTableIndPtrType EnableConditionGroupTableIndOfPBConfig;  /**< the pointer to Dem_Cfg_EnableConditionGroupTableInd */
  Dem_Cfg_EnableConditionTablePtrType EnableConditionTableOfPBConfig;  /**< the pointer to Dem_Cfg_EnableConditionTable */
  Dem_Cfg_EventAvailableDefaultPtrType EventAvailableDefaultOfPBConfig;  /**< the pointer to Dem_Cfg_EventAvailableDefault */
  Dem_Cfg_EventTablePtrType EventTableOfPBConfig;  /**< the pointer to Dem_Cfg_EventTable */
  Dem_Cfg_ExtendedDataTablePtrType ExtendedDataTableOfPBConfig;  /**< the pointer to Dem_Cfg_ExtendedDataTable */
  Dem_Cfg_FreezeFrameTablePtrType FreezeFrameTableOfPBConfig;  /**< the pointer to Dem_Cfg_FreezeFrameTable */
  Dem_Cfg_J1939NodeIndicatorPtrType J1939NodeIndicatorOfPBConfig;  /**< the pointer to Dem_Cfg_J1939NodeIndicator */
  Dem_Cfg_SatelliteTimeDebounceInfoPtrType SatelliteTimeDebounceInfoOfPBConfig;  /**< the pointer to Dem_Cfg_SatelliteTimeDebounceInfo */
  Dem_Cfg_CompatibilityVersionType CompatibilityVersionOfPBConfig;  /**< Compatibility version of the Dem generator that generated this configuration. */
  Dem_Cfg_ConfigurationIdType ConfigurationIdOfPBConfig;  /**< Magic constant derived from the configuration parameters /Dem/DemGeneral/DemCompiledConfigId and /Dem/DemGeneral/DemCompiledPostbuildCrc. Each value change is evidence to incompatible NV stored data and triggers a re-initialization of the NV data. */
  Dem_Cfg_SizeOfDebounceHiResTableType SizeOfDebounceHiResTableOfPBConfig;  /**< the number of accomplishable value elements in Dem_Cfg_DebounceHiResTable */
  Dem_Cfg_SizeOfDebounceLoResTableType SizeOfDebounceLoResTableOfPBConfig;  /**< the number of accomplishable value elements in Dem_Cfg_DebounceLoResTable */
  Dem_Cfg_SizeOfEnableConditionGroupTableType SizeOfEnableConditionGroupTableOfPBConfig;  /**< the number of accomplishable value elements in Dem_Cfg_EnableConditionGroupTable */
  Dem_Cfg_GlobalSeverityMaskType GlobalSeverityMaskOfPBConfig;  /**< Variant specific mask from OR'ed /Dem/DemConfigSet/DemDTCClass/DemDTCSeverity bits. */
  Dem_Cfg_FinalMagicNumberType FinalMagicNumberOfPBConfig;  /**< the FinalMagicNumber to validate the size of the initialization structure at initialization time of Dem */
} Dem_PBConfigType;

typedef Dem_PBConfigType Dem_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/**   \brief  type to access Dem_PBConfig in a symbol based style. */
typedef struct sDem_PBConfigsType
{
  Dem_PBConfigType Config;  /**< [Config] */
} Dem_PBConfigsType;

/** 
  \}
*/ 


/* PRQA L:ROOT_TYPE_0850 */

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  Dem_PBConfig
**********************************************************************************************************************/
/** 
  \var    Dem_PBConfig
  \details
  Element                            Description
  InitDataHashCode                   the hashcode to validate the initialization structure at initialization time of Dem
  CycleIdTable                       the pointer to Dem_Cfg_CycleIdTable
  DataCollectionTable                the pointer to Dem_Cfg_DataCollectionTable
  DataCollectionTableEdr2CollInd     the pointer to Dem_Cfg_DataCollectionTableEdr2CollInd
  DataCollectionTableFfm2CollInd     the pointer to Dem_Cfg_DataCollectionTableFfm2CollInd
  DataElementTableCol2ElmtInd        the pointer to Dem_Cfg_DataElementTableCol2ElmtInd
  DebounceHiResTable                 the pointer to Dem_Cfg_DebounceHiResTable
  DebounceLoResTable                 the pointer to Dem_Cfg_DebounceLoResTable
  DebounceTable                      the pointer to Dem_Cfg_DebounceTable
  DtcNumberTable                     the pointer to Dem_Cfg_DtcNumberTable
  EnableConditionGroupCounter        the pointer to Dem_Cfg_EnableConditionGroupCounter
  EnableConditionGroupState          the pointer to Dem_Cfg_EnableConditionGroupState
  EnableConditionGroupTable          the pointer to Dem_Cfg_EnableConditionGroupTable
  EnableConditionGroupTableInd       the pointer to Dem_Cfg_EnableConditionGroupTableInd
  EnableConditionTable               the pointer to Dem_Cfg_EnableConditionTable
  EventAvailableDefault              the pointer to Dem_Cfg_EventAvailableDefault
  EventTable                         the pointer to Dem_Cfg_EventTable
  ExtendedDataTable                  the pointer to Dem_Cfg_ExtendedDataTable
  FreezeFrameTable                   the pointer to Dem_Cfg_FreezeFrameTable
  J1939NodeIndicator                 the pointer to Dem_Cfg_J1939NodeIndicator
  SatelliteTimeDebounceInfo          the pointer to Dem_Cfg_SatelliteTimeDebounceInfo
  CompatibilityVersion               Compatibility version of the Dem generator that generated this configuration.
  ConfigurationId                    Magic constant derived from the configuration parameters /Dem/DemGeneral/DemCompiledConfigId and /Dem/DemGeneral/DemCompiledPostbuildCrc. Each value change is evidence to incompatible NV stored data and triggers a re-initialization of the NV data.
  SizeOfDebounceHiResTable           the number of accomplishable value elements in Dem_Cfg_DebounceHiResTable
  SizeOfDebounceLoResTable           the number of accomplishable value elements in Dem_Cfg_DebounceLoResTable
  SizeOfEnableConditionGroupTable    the number of accomplishable value elements in Dem_Cfg_EnableConditionGroupTable
  GlobalSeverityMask                 Variant specific mask from OR'ed /Dem/DemConfigSet/DemDTCClass/DemDTCSeverity bits.
  FinalMagicNumber                   the FinalMagicNumber to validate the size of the initialization structure at initialization time of Dem
*/ 
#define DEM_START_SEC_PBCFG
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_PBConfigsType, DEM_PBCFG) Dem_PBConfig;
#define DEM_STOP_SEC_PBCFG
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


/**********************************************************************************************************************
  Justification of MISRA deviations
**********************************************************************************************************************/


#endif  /* DEM_PBCFG_H */
/**********************************************************************************************************************
  END OF FILE: Dem_PBcfg.h     [VolvoAB (Vector), VARIANT-POSTBUILD-LOADABLE, 12.05.00.95622]
**********************************************************************************************************************/

