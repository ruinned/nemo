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
 *              File: Dem_Lcfg.h
 *   Generation Time: 2018-11-27 18:44:39
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
#if !defined (DEM_LCFG_H)
# define DEM_LCFG_H

/**********************************************************************************************************************
  MISRA JUSTIFICATIONS
**********************************************************************************************************************/

/* PRQA S 0777 EOF */ /* MD_DEM_5.1 */                                          /* External identifier does not differ in 32 significant characters */
/* PRQA S 0779 EOF */ /* MD_DEM_5.1 */                                          /* Identifier does not differ in 32 significant characters */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */                                      /* Number of macro definitions exceeds 1024 - program is non-conforming -- caused by #include'd files. */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Dem_SatelliteData_Types.h"
#include "Dem_DTCSelector_Types.h"
#include "Dem_FilterData_Types.h"
#include "Dem_FreezeFrameIterator_Types.h"
#include "Dem_ClearDTC_Types.h"
#include "Dem_Event_Types.h"
#include "Dem_DTCReadoutBuffer_Types.h"

#include "Os.h"                                                                           /* get: ApplicationType    */

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgPCDataSwitches  Dem_Cfg Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define DEM_CFG_ADMINDATA                                             STD_ON
#define DEM_CFG_CALLBACKCLEAREVENTALLOWED                             STD_OFF  /**< Deactivateable: 'Dem_Cfg_CallbackClearEventAllowed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_CALLBACKDTCSTATUSCHANGED                              STD_OFF  /**< Deactivateable: 'Dem_Cfg_CallbackDtcStatusChanged' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_CALLBACKGETFDC                                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_CallbackGetFdc' Reason: '(DEM_CFG_SUPPORT_DEBOUNCE_MONITORINTERNAL == STD_OFF)' */
#define DEM_CFG_CALLBACKJ1939DTCSTATUSCHANGED                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_CallbackJ1939DtcStatusChanged' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_CLEARDTCTABLE                                         STD_ON
#define DEM_CFG_CLEARDTCNOTIFICATIONFINISHTABLE                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_ClearDtcNotificationFinishTable' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_CLEARDTCNOTIFICATIONSTARTTABLE                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_ClearDtcNotificationStartTable' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_CLIENTTABLE                                           STD_ON
#define DEM_CFG_CLEARDTCINDEXOFCLIENTTABLE                            STD_ON
#define DEM_CFG_FILTERINDEXOFCLIENTTABLE                              STD_ON
#define DEM_CFG_FREEZEFRAMEITERATORINDEXOFCLIENTTABLE                 STD_ON
#define DEM_CFG_NMNODEIDOFCLIENTTABLE                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_ClientTable.NmNodeId' Reason: '(DEM_CFG_SUPPORT_J1939 == STD_OFF)' */
#define DEM_CFG_READOUTBUFFERINDEXOFCLIENTTABLE                       STD_ON
#define DEM_CFG_SELECTORINDEXOFCLIENTTABLE                            STD_ON
#define DEM_CFG_COMMITBUFFER                                          STD_ON
#define DEM_CFG_DTCSELECTORTABLE                                      STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEJ19392COLLIND                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_DataCollectionTableJ19392CollInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_DATACOLLECTIONTABLEPID2COLLIND                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_DataCollectionTablePid2CollInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_DATAELEMENTTABLE                                      STD_ON
#define DEM_CFG_DATAISSTOREDINNVOFDATAELEMENTTABLE                    STD_ON
#define DEM_CFG_ELEMENTKINDOFDATAELEMENTTABLE                         STD_ON
#define DEM_CFG_ELEMENTSIZEOFDATAELEMENTTABLE                         STD_ON
#define DEM_CFG_READDATAFUNCOFDATAELEMENTTABLE                        STD_ON
#define DEM_CFG_DEBOUNCEDATA                                          STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceData' Reason: 'DEM_CFG_SUPPORT_DEBOUNCE_NV==STD_OFF' */
#define DEM_CFG_DTCGROUPMASK                                          STD_ON
#define DEM_CFG_GROUPMASKOFDTCGROUPMASK                               STD_ON
#define DEM_CFG_UDSGROUPDTCOFDTCGROUPMASK                             STD_ON
#define DEM_CFG_DTCTABLE                                              STD_ON
#define DEM_CFG_DTCSEVERITYOFDTCTABLE                                 STD_ON
#define DEM_CFG_FUNCTIONALUNITOFDTCTABLE                              STD_ON
#define DEM_CFG_IMMEDIATENVSTORAGEOFDTCTABLE                          STD_ON
#define DEM_CFG_J1939NODEIDINDENDIDXOFDTCTABLE                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcTable.J1939NodeIdIndEndIdx' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_J1939NODEIDINDSTARTIDXOFDTCTABLE                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcTable.J1939NodeIdIndStartIdx' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_J1939NODEIDINDUSEDOFDTCTABLE                          STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcTable.J1939NodeIdIndUsed' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_DTRDATA                                               STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtrData' Reason: '(((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))) || (DEM_CFG_SUPPORT_DTR==STD_OFF)' */
#define DEM_CFG_DTRSTATUS                                             STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtrStatus' Reason: '(DEM_CFG_SUPPORT_DTR==STD_OFF) || (((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF)))' */
#define DEM_CFG_ENABLECONDITIONINITTABLE                              STD_ON
#define DEM_CFG_INITVALUEOFENABLECONDITIONINITTABLE                   STD_ON
#define DEM_CFG_ENABLECONDITIONSTATE                                  STD_ON
#define DEM_CFG_EVENTAVAILABLEDATA                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventAvailableData' Reason: 'DEM_CFG_SUPPORT_EVENTAVAILABLE_NV==STD_OFF' */
#define DEM_CFG_EVENTAVAILABLEINVARIANT                               STD_ON
#define DEM_CFG_EVENTCYCLESTATUS                                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventCycleStatus' Reason: '(((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))) || (DEM_CFG_PROCESS_CDTC_STOREDONLY==STD_OFF)' */
#define DEM_CFG_EVENTDATACHANGED                                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventDataChanged' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EVENTDEBOUNCEVALUE                                    STD_ON
#define DEM_CFG_EVENTINTERNALSTATUS                                   STD_ON
#define DEM_CFG_EVENTQUEUE                                            STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventQueue' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EVENTSTATUSCHANGED                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventStatusChanged' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EVENTTABLEIND                                         STD_ON
#define DEM_CFG_FILTERINFOTABLE                                       STD_ON
#define DEM_CFG_FILTERREPORTEDEVENTS                                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_FilterReportedEvents' Reason: 'DEM_CFG_PROCESS_CDTC_STOREDONLY==STD_OFF' */
#define DEM_CFG_FREEZEFRAMEDATA                                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_FreezeFrameData' Reason: '(DEM_CFG_SUPPORT_OBDII == STD_OFF)' */
#define DEM_CFG_FREEZEFRAMEITERATORTABLE                              STD_ON
#define DEM_CFG_FREEZEFRAMENUMTABLE                                   STD_ON
#define DEM_CFG_FFNUMBEROFFREEZEFRAMENUMTABLE                         STD_ON
#define DEM_CFG_FFTRIGGEROFFREEZEFRAMENUMTABLE                        STD_ON
#define DEM_CFG_FFUPDATEOFFREEZEFRAMENUMTABLE                         STD_ON
#define DEM_CFG_GENERALJ1939TABLE                                     STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralJ1939Table' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_CFG_DATACOLLECTIONTABLEJ19392COLLINDENDIDXOFGENERALJ1939TABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralJ1939Table.DataCollectionTableJ19392CollIndEndIdx' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_CFG_DATACOLLECTIONTABLEJ19392COLLINDSTARTIDXOFGENERALJ1939TABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralJ1939Table.DataCollectionTableJ19392CollIndStartIdx' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_CFG_DATACOLLECTIONTABLEJ19392COLLINDUSEDOFGENERALJ1939TABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralJ1939Table.DataCollectionTableJ19392CollIndUsed' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_CFG_RECORDSIZEOFGENERALJ1939TABLE                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralJ1939Table.RecordSize' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_CFG_GENERALOBDINPUT                                       STD_ON
#define DEM_CFG_DATAELEMENTTABLEIDXOFGENERALOBDINPUT                  STD_ON
#define DEM_CFG_GLOBALINDICATORSTATES                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_GlobalIndicatorStates' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INDICATORBLINKING                                     STD_OFF  /**< Deactivateable: 'Dem_Cfg_IndicatorBlinking' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INDICATORCONTINUOUS                                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_IndicatorContinuous' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INDICATORFASTFLASH                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_IndicatorFastFlash' Reason: '(DEM_CFG_SUPPORT_J1939 == STD_OFF)' */
#define DEM_CFG_INDICATORSLOWFLASH                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_IndicatorSlowFlash' Reason: '(DEM_CFG_SUPPORT_J1939 == STD_OFF)' */
#define DEM_CFG_INITMONLISTFORFUNC                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonListForFunc' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_INITMONITORSFORFUNCENDIDXOFINITMONLISTFORFUNC         STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonListForFunc.InitMonitorsForFuncEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INITMONITORSFORFUNCSTARTIDXOFINITMONLISTFORFUNC       STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonListForFunc.InitMonitorsForFuncStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INITMONITORSFORFUNCUSEDOFINITMONLISTFORFUNC           STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonListForFunc.InitMonitorsForFuncUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INITMONITORFOREVENT                                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonitorForEvent' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INITMONITORSFORFUNC                                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonitorsForFunc' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_J1939NODEID                                           STD_OFF  /**< Deactivateable: 'Dem_Cfg_J1939NodeId' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_J1939NODEIDIND                                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_J1939NodeIdInd' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_MEMORYBLOCKID                                         STD_ON
#define DEM_CFG_MEMORYCOMMITNUMBER                                    STD_ON
#define DEM_CFG_MEMORYDATAPTR                                         STD_ON
#define DEM_CFG_MEMORYDATASIZE                                        STD_ON
#define DEM_CFG_MEMORYENTRY                                           STD_ON
#define DEM_CFG_MEMORYENTRYINIT                                       STD_ON
#define DEM_CFG_MEMORYSTATUS                                          STD_ON
#define DEM_CFG_MIRRORDATA                                            STD_OFF  /**< Deactivateable: 'Dem_Cfg_MirrorData' Reason: 'DEM_CFG_SUPPORT_MIRROR==STD_OFF' */
#define DEM_CFG_OBDIUMPRDATA                                          STD_OFF  /**< Deactivateable: 'Dem_Cfg_ObdIumprData' Reason: '(((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))) || (DEM_CFG_SUPPORT_IUMPR==STD_OFF)' */
#define DEM_CFG_OBDIUMPRUPDATEPENDING                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_ObdIumprUpdatePending' Reason: '(((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))) || (DEM_CFG_SUPPORT_IUMPR==STD_OFF)' */
#define DEM_CFG_PERMANENTDATA                                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_PermanentData' Reason: '(DEM_CFG_SUPPORT_PERMANENT==STD_OFF) || ((DEM_CFG_SUPPORT_OBDII == STD_OFF))' */
#define DEM_CFG_PIDTABLE                                              STD_OFF  /**< Deactivateable: 'Dem_Cfg_PidTable' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_DATACOLLECTIONTABLEPID2COLLINDENDIDXOFPIDTABLE        STD_OFF  /**< Deactivateable: 'Dem_Cfg_PidTable.DataCollectionTablePid2CollIndEndIdx' Reason: 'the optional indirection is deactivated because DataCollectionTablePid2CollIndUsedOfPidTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_CFG_DATACOLLECTIONTABLEPID2COLLINDSTARTIDXOFPIDTABLE      STD_OFF  /**< Deactivateable: 'Dem_Cfg_PidTable.DataCollectionTablePid2CollIndStartIdx' Reason: 'the optional indirection is deactivated because DataCollectionTablePid2CollIndUsedOfPidTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_CFG_DATACOLLECTIONTABLEPID2COLLINDUSEDOFPIDTABLE          STD_OFF  /**< Deactivateable: 'Dem_Cfg_PidTable.DataCollectionTablePid2CollIndUsed' Reason: 'the optional indirection is deactivated because DataCollectionTablePid2CollIndUsedOfPidTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_CFG_PRESTORAGE                                            STD_OFF  /**< Deactivateable: 'Dem_Cfg_Prestorage' Reason: 'DEM_CFG_SUPPORT_PRESTORED_FF==STD_OFF' */
#define DEM_CFG_PRESTORAGEINDEX                                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_PrestorageIndex' Reason: 'DEM_CFG_SUPPORT_PRESTORED_FF==STD_OFF' */
#define DEM_CFG_PRIMARYCHRONOLOGY                                     STD_ON
#define DEM_CFG_PRIMARYENTRY_0                                        STD_ON
#define DEM_CFG_READOUTBUFFER                                         STD_ON
#define DEM_CFG_REPORTEDEVENTSOFFILTER                                STD_ON
#define DEM_CFG_SATELLITEINFO                                         STD_ON
#define DEM_CFG_APPLICATIONIDOFSATELLITEINFO                          STD_ON
#define DEM_CFG_DEBOUNCELORESTIMEROFSATELLITEINFO                     STD_OFF  /**< Deactivateable: 'Dem_Cfg_SatelliteInfo.DebounceLoResTimer' Reason: 'No LowRes Timebased Debouncing support (DEM_CFG_SUPPORT_DEBOUNCE_TIME_LR == STD_OFF)' */
#define DEM_CFG_EVENTCOUNTOFSATELLITEINFO                             STD_ON
#define DEM_CFG_EVENTTABLEINDENDIDXOFSATELLITEINFO                    STD_ON
#define DEM_CFG_EVENTTABLEINDSTARTIDXOFSATELLITEINFO                  STD_ON
#define DEM_CFG_EVENTTABLEINDUSEDOFSATELLITEINFO                      STD_ON
#define DEM_CFG_MAXDEBOUNCEVALUESOFSATELLITEINFO                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_SatelliteInfo.MaxDebounceValues' Reason: 'Neither DataElement type DEM_MAX_FDC_SINCE_LAST_CLEAR nor DEM_MAX_FDC_DURING_CURRENT_CYCLE is used (DEM_CFG_DATA_MAX_FDC_SINCE_LAST_CLEAR == STD_OFF) && (DEM_CFG_DATA_MAX_FDC_DURING_CURRENT_CYCLE == STD_OFF)' */
#define DEM_CFG_SATELLITEDATAOFSATELLITEINFO                          STD_ON
#define DEM_CFG_SATELLITEEXTENDEDDATAOFSATELLITEINFO                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_SatelliteInfo.SatelliteExtendedData' Reason: 'No Prestored FreezeFrame support (DEM_CFG_SUPPORT_PRESTORED_FF == STD_OFF)' */
#define DEM_CFG_SATELLITESTATUSOFSATELLITEINFO                        STD_ON
#define DEM_CFG_SATELLITEINFOOSAPPLICATION_UNTRUSTED_CORE0            STD_ON
#define DEM_CFG_SECONDARYCHRONOLOGY                                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_SecondaryChronology' Reason: 'DEM_CFG_SUPPORT_SECONDARY==STD_OFF' */
#define DEM_CFG_SIZEOFCLEARDTCTABLE                                   STD_ON
#define DEM_CFG_SIZEOFCLIENTTABLE                                     STD_ON
#define DEM_CFG_SIZEOFDTCSELECTORTABLE                                STD_ON
#define DEM_CFG_SIZEOFDATAELEMENTTABLE                                STD_ON
#define DEM_CFG_SIZEOFDTCGROUPMASK                                    STD_ON
#define DEM_CFG_SIZEOFENABLECONDITIONSTATE                            STD_ON
#define DEM_CFG_SIZEOFENABLECONDITIONTABLE                            STD_ON
#define DEM_CFG_SIZEOFEVENTDEBOUNCEVALUE                              STD_ON
#define DEM_CFG_SIZEOFEVENTINTERNALSTATUS                             STD_ON
#define DEM_CFG_SIZEOFEVENTTABLE                                      STD_ON
#define DEM_CFG_SIZEOFFILTERINFOTABLE                                 STD_ON
#define DEM_CFG_SIZEOFFREEZEFRAMEITERATORTABLE                        STD_ON
#define DEM_CFG_SIZEOFMEMORYCOMMITNUMBER                              STD_ON
#define DEM_CFG_SIZEOFMEMORYENTRY                                     STD_ON
#define DEM_CFG_SIZEOFMEMORYSTATUS                                    STD_ON
#define DEM_CFG_SIZEOFPRIMARYCHRONOLOGY                               STD_ON
#define DEM_CFG_SIZEOFREADOUTBUFFER                                   STD_ON
#define DEM_CFG_SIZEOFREPORTEDEVENTSOFFILTER                          STD_ON
#define DEM_CFG_SIZEOFSATELLITEINFO                                   STD_ON
#define DEM_CFG_STATUSDATA                                            STD_ON
#define DEM_CFG_STORAGECONDITIONINITTABLE                             STD_OFF  /**< Deactivateable: 'Dem_Cfg_StorageConditionInitTable' Reason: '(DEM_CFG_HAS_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_INITVALUEOFSTORAGECONDITIONINITTABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_StorageConditionInitTable.InitValue' Reason: '(DEM_CFG_HAS_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_STORAGECONDITIONSTATE                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_StorageConditionState' Reason: '(DEM_CFG_HAS_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_TIMESERIESCHRONOLOGY                                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_TimeSeriesChronology' Reason: '(DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST==STD_OFF) || (DEM_CFG_SUPPORT_PRIMARY==STD_OFF)' */
#define DEM_CFG_TIMESERIESENTRYINIT                                   STD_ON
#define DEM_CFG_TIMESERIESREADOUTBUFFER                               STD_OFF  /**< Deactivateable: 'Dem_Cfg_TimeSeriesReadoutBuffer' Reason: 'DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST==STD_OFF' */
#define DEM_PCCONFIG                                                  STD_ON
#define DEM_CFG_ADMINDATAOFPCCONFIG                                   STD_ON
#define DEM_CFG_CLEARDTCTABLEOFPCCONFIG                               STD_ON
#define DEM_CFG_CLIENTTABLEOFPCCONFIG                                 STD_ON
#define DEM_CFG_COMMITBUFFEROFPCCONFIG                                STD_ON
#define DEM_CFG_DTCSELECTORTABLEOFPCCONFIG                            STD_ON
#define DEM_CFG_DATAELEMENTTABLEOFPCCONFIG                            STD_ON
#define DEM_CFG_DTCGROUPMASKOFPCCONFIG                                STD_ON
#define DEM_CFG_DTCTABLEOFPCCONFIG                                    STD_ON
#define DEM_CFG_ENABLECONDITIONINITTABLEOFPCCONFIG                    STD_ON
#define DEM_CFG_ENABLECONDITIONSTATEOFPCCONFIG                        STD_ON
#define DEM_CFG_EVENTAVAILABLEINVARIANTOFPCCONFIG                     STD_ON
#define DEM_CFG_EVENTDEBOUNCEVALUEOFPCCONFIG                          STD_ON
#define DEM_CFG_EVENTINTERNALSTATUSOFPCCONFIG                         STD_ON
#define DEM_CFG_EVENTTABLEINDOFPCCONFIG                               STD_ON
#define DEM_CFG_FILTERINFOTABLEOFPCCONFIG                             STD_ON
#define DEM_CFG_FREEZEFRAMEITERATORTABLEOFPCCONFIG                    STD_ON
#define DEM_CFG_FREEZEFRAMENUMTABLEOFPCCONFIG                         STD_ON
#define DEM_CFG_GENERALOBDINPUTOFPCCONFIG                             STD_ON
#define DEM_CFG_MEMORYBLOCKIDOFPCCONFIG                               STD_ON
#define DEM_CFG_MEMORYCOMMITNUMBEROFPCCONFIG                          STD_ON
#define DEM_CFG_MEMORYDATAPTROFPCCONFIG                               STD_ON
#define DEM_CFG_MEMORYDATASIZEOFPCCONFIG                              STD_ON
#define DEM_CFG_MEMORYENTRYINITOFPCCONFIG                             STD_ON
#define DEM_CFG_MEMORYENTRYOFPCCONFIG                                 STD_ON
#define DEM_CFG_MEMORYSTATUSOFPCCONFIG                                STD_ON
#define DEM_CFG_PRIMARYCHRONOLOGYOFPCCONFIG                           STD_ON
#define DEM_CFG_PRIMARYENTRY_0OFPCCONFIG                              STD_ON
#define DEM_CFG_READOUTBUFFEROFPCCONFIG                               STD_ON
#define DEM_CFG_REPORTEDEVENTSOFFILTEROFPCCONFIG                      STD_ON
#define DEM_CFG_SATELLITEINFOOFPCCONFIG                               STD_ON
#define DEM_CFG_SATELLITEINFOOSAPPLICATION_UNTRUSTED_CORE0OFPCCONFIG  STD_ON
#define DEM_CFG_SIZEOFCLEARDTCTABLEOFPCCONFIG                         STD_ON
#define DEM_CFG_SIZEOFCLIENTTABLEOFPCCONFIG                           STD_ON
#define DEM_CFG_SIZEOFDTCSELECTORTABLEOFPCCONFIG                      STD_ON
#define DEM_CFG_SIZEOFDATAELEMENTTABLEOFPCCONFIG                      STD_ON
#define DEM_CFG_SIZEOFDTCGROUPMASKOFPCCONFIG                          STD_ON
#define DEM_CFG_SIZEOFENABLECONDITIONSTATEOFPCCONFIG                  STD_ON
#define DEM_CFG_SIZEOFENABLECONDITIONTABLEOFPCCONFIG                  STD_ON
#define DEM_CFG_SIZEOFEVENTDEBOUNCEVALUEOFPCCONFIG                    STD_ON
#define DEM_CFG_SIZEOFEVENTINTERNALSTATUSOFPCCONFIG                   STD_ON
#define DEM_CFG_SIZEOFEVENTTABLEOFPCCONFIG                            STD_ON
#define DEM_CFG_SIZEOFFILTERINFOTABLEOFPCCONFIG                       STD_ON
#define DEM_CFG_SIZEOFFREEZEFRAMEITERATORTABLEOFPCCONFIG              STD_ON
#define DEM_CFG_SIZEOFMEMORYCOMMITNUMBEROFPCCONFIG                    STD_ON
#define DEM_CFG_SIZEOFMEMORYENTRYOFPCCONFIG                           STD_ON
#define DEM_CFG_SIZEOFMEMORYSTATUSOFPCCONFIG                          STD_ON
#define DEM_CFG_SIZEOFPRIMARYCHRONOLOGYOFPCCONFIG                     STD_ON
#define DEM_CFG_SIZEOFREADOUTBUFFEROFPCCONFIG                         STD_ON
#define DEM_CFG_SIZEOFREPORTEDEVENTSOFFILTEROFPCCONFIG                STD_ON
#define DEM_CFG_SIZEOFSATELLITEINFOOFPCCONFIG                         STD_ON
#define DEM_CFG_STATUSDATAOFPCCONFIG                                  STD_ON
#define DEM_CFG_TIMESERIESENTRYINITOFPCCONFIG                         STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCMinNumericValueDefines  Dem_Cfg Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define DEM_CFG_MIN_ENABLECONDITIONSTATE                              0U
#define DEM_CFG_MIN_EVENTDEBOUNCEVALUE                                -32768
#define DEM_CFG_MIN_MEMORYCOMMITNUMBER                                0U
#define DEM_CFG_MIN_MEMORYSTATUS                                      0U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCMaxNumericValueDefines  Dem_Cfg Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define DEM_CFG_MAX_ENABLECONDITIONSTATE                              255U
#define DEM_CFG_MAX_EVENTDEBOUNCEVALUE                                32767
#define DEM_CFG_MAX_MEMORYCOMMITNUMBER                                255U
#define DEM_CFG_MAX_MEMORYSTATUS                                      255U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCNoReferenceDefines  Dem_Cfg No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define DEM_CFG_NO_EVENTTABLEINDENDIDXOFSATELLITEINFO                 255U
#define DEM_CFG_NO_EVENTTABLEINDSTARTIDXOFSATELLITEINFO               255U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCIsReducedToDefineDefines  Dem_Cfg Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define DEM_CFG_ISDEF_CLEARDTCINDEXOFCLIENTTABLE                      STD_ON
#define DEM_CFG_ISDEF_FILTERINDEXOFCLIENTTABLE                        STD_ON
#define DEM_CFG_ISDEF_FREEZEFRAMEITERATORINDEXOFCLIENTTABLE           STD_ON
#define DEM_CFG_ISDEF_READOUTBUFFERINDEXOFCLIENTTABLE                 STD_ON
#define DEM_CFG_ISDEF_SELECTORINDEXOFCLIENTTABLE                      STD_ON
#define DEM_CFG_ISDEF_DATAISSTOREDINNVOFDATAELEMENTTABLE              STD_OFF
#define DEM_CFG_ISDEF_ELEMENTKINDOFDATAELEMENTTABLE                   STD_OFF
#define DEM_CFG_ISDEF_ELEMENTSIZEOFDATAELEMENTTABLE                   STD_OFF
#define DEM_CFG_ISDEF_READDATAFUNCOFDATAELEMENTTABLE                  STD_OFF
#define DEM_CFG_ISDEF_GROUPMASKOFDTCGROUPMASK                         STD_OFF
#define DEM_CFG_ISDEF_UDSGROUPDTCOFDTCGROUPMASK                       STD_OFF
#define DEM_CFG_ISDEF_DTCSEVERITYOFDTCTABLE                           STD_ON
#define DEM_CFG_ISDEF_FUNCTIONALUNITOFDTCTABLE                        STD_OFF
#define DEM_CFG_ISDEF_IMMEDIATENVSTORAGEOFDTCTABLE                    STD_ON
#define DEM_CFG_ISDEF_INITVALUEOFENABLECONDITIONINITTABLE             STD_ON
#define DEM_CFG_ISDEF_EVENTAVAILABLEINVARIANT                         STD_ON
#define DEM_CFG_ISDEF_EVENTTABLEIND                                   STD_OFF
#define DEM_CFG_ISDEF_FFNUMBEROFFREEZEFRAMENUMTABLE                   STD_ON
#define DEM_CFG_ISDEF_FFTRIGGEROFFREEZEFRAMENUMTABLE                  STD_ON
#define DEM_CFG_ISDEF_FFUPDATEOFFREEZEFRAMENUMTABLE                   STD_ON
#define DEM_CFG_ISDEF_DATAELEMENTTABLEIDXOFGENERALOBDINPUT            STD_ON
#define DEM_CFG_ISDEF_MEMORYBLOCKID                                   STD_OFF
#define DEM_CFG_ISDEF_MEMORYDATAPTR                                   STD_OFF
#define DEM_CFG_ISDEF_MEMORYDATASIZE                                  STD_OFF
#define DEM_CFG_ISDEF_MEMORYENTRY                                     STD_OFF
#define DEM_CFG_ISDEF_APPLICATIONIDOFSATELLITEINFO                    STD_ON
#define DEM_CFG_ISDEF_EVENTCOUNTOFSATELLITEINFO                       STD_ON
#define DEM_CFG_ISDEF_EVENTTABLEINDENDIDXOFSATELLITEINFO              STD_ON
#define DEM_CFG_ISDEF_EVENTTABLEINDSTARTIDXOFSATELLITEINFO            STD_ON
#define DEM_CFG_ISDEF_EVENTTABLEINDUSEDOFSATELLITEINFO                STD_ON
#define DEM_CFG_ISDEF_SATELLITEDATAOFSATELLITEINFO                    STD_ON
#define DEM_CFG_ISDEF_SATELLITESTATUSOFSATELLITEINFO                  STD_ON
#define DEM_CFG_ISDEF_ADMINDATAOFPCCONFIG                             STD_ON
#define DEM_CFG_ISDEF_CLEARDTCTABLEOFPCCONFIG                         STD_ON
#define DEM_CFG_ISDEF_CLIENTTABLEOFPCCONFIG                           STD_ON
#define DEM_CFG_ISDEF_COMMITBUFFEROFPCCONFIG                          STD_ON
#define DEM_CFG_ISDEF_DTCSELECTORTABLEOFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_DATAELEMENTTABLEOFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_DTCGROUPMASKOFPCCONFIG                          STD_ON
#define DEM_CFG_ISDEF_DTCTABLEOFPCCONFIG                              STD_ON
#define DEM_CFG_ISDEF_ENABLECONDITIONINITTABLEOFPCCONFIG              STD_ON
#define DEM_CFG_ISDEF_ENABLECONDITIONSTATEOFPCCONFIG                  STD_ON
#define DEM_CFG_ISDEF_EVENTAVAILABLEINVARIANTOFPCCONFIG               STD_ON
#define DEM_CFG_ISDEF_EVENTDEBOUNCEVALUEOFPCCONFIG                    STD_ON
#define DEM_CFG_ISDEF_EVENTINTERNALSTATUSOFPCCONFIG                   STD_ON
#define DEM_CFG_ISDEF_EVENTTABLEINDOFPCCONFIG                         STD_ON
#define DEM_CFG_ISDEF_FILTERINFOTABLEOFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_FREEZEFRAMEITERATORTABLEOFPCCONFIG              STD_ON
#define DEM_CFG_ISDEF_FREEZEFRAMENUMTABLEOFPCCONFIG                   STD_ON
#define DEM_CFG_ISDEF_GENERALOBDINPUTOFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_MEMORYBLOCKIDOFPCCONFIG                         STD_ON
#define DEM_CFG_ISDEF_MEMORYCOMMITNUMBEROFPCCONFIG                    STD_ON
#define DEM_CFG_ISDEF_MEMORYDATAPTROFPCCONFIG                         STD_ON
#define DEM_CFG_ISDEF_MEMORYDATASIZEOFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_MEMORYENTRYINITOFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_MEMORYENTRYOFPCCONFIG                           STD_ON
#define DEM_CFG_ISDEF_MEMORYSTATUSOFPCCONFIG                          STD_ON
#define DEM_CFG_ISDEF_PRIMARYCHRONOLOGYOFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_0OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_READOUTBUFFEROFPCCONFIG                         STD_ON
#define DEM_CFG_ISDEF_REPORTEDEVENTSOFFILTEROFPCCONFIG                STD_ON
#define DEM_CFG_ISDEF_SATELLITEINFOOFPCCONFIG                         STD_ON
#define DEM_CFG_ISDEF_SATELLITEINFOOSAPPLICATION_UNTRUSTED_CORE0OFPCCONFIG STD_ON
#define DEM_CFG_ISDEF_STATUSDATAOFPCCONFIG                            STD_ON
#define DEM_CFG_ISDEF_TIMESERIESENTRYINITOFPCCONFIG                   STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCEqualsAlwaysToDefines  Dem_Cfg Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define DEM_CFG_EQ2_CLEARDTCINDEXOFCLIENTTABLE                        0U
#define DEM_CFG_EQ2_FILTERINDEXOFCLIENTTABLE                          0U
#define DEM_CFG_EQ2_FREEZEFRAMEITERATORINDEXOFCLIENTTABLE             0U
#define DEM_CFG_EQ2_READOUTBUFFERINDEXOFCLIENTTABLE                   0U
#define DEM_CFG_EQ2_SELECTORINDEXOFCLIENTTABLE                        0U
#define DEM_CFG_EQ2_DATAISSTOREDINNVOFDATAELEMENTTABLE                
#define DEM_CFG_EQ2_ELEMENTKINDOFDATAELEMENTTABLE                     
#define DEM_CFG_EQ2_ELEMENTSIZEOFDATAELEMENTTABLE                     
#define DEM_CFG_EQ2_READDATAFUNCOFDATAELEMENTTABLE                    
#define DEM_CFG_EQ2_GROUPMASKOFDTCGROUPMASK                           
#define DEM_CFG_EQ2_UDSGROUPDTCOFDTCGROUPMASK                         
#define DEM_CFG_EQ2_DTCSEVERITYOFDTCTABLE                             0U
#define DEM_CFG_EQ2_FUNCTIONALUNITOFDTCTABLE                          
#define DEM_CFG_EQ2_IMMEDIATENVSTORAGEOFDTCTABLE                      FALSE
#define DEM_CFG_EQ2_INITVALUEOFENABLECONDITIONINITTABLE               1U
#define DEM_CFG_EQ2_EVENTAVAILABLEINVARIANT                           TRUE
#define DEM_CFG_EQ2_EVENTTABLEIND                                     
#define DEM_CFG_EQ2_FFNUMBEROFFREEZEFRAMENUMTABLE                     1U
#define DEM_CFG_EQ2_FFTRIGGEROFFREEZEFRAMENUMTABLE                    DEM_CFG_TRIGGER_TESTFAILED
#define DEM_CFG_EQ2_FFUPDATEOFFREEZEFRAMENUMTABLE                     FALSE
#define DEM_CFG_EQ2_DATAELEMENTTABLEIDXOFGENERALOBDINPUT              0U
#define DEM_CFG_EQ2_MEMORYBLOCKID                                     
#define DEM_CFG_EQ2_MEMORYDATAPTR                                     
#define DEM_CFG_EQ2_MEMORYDATASIZE                                    
#define DEM_CFG_EQ2_MEMORYENTRY                                       
#define DEM_CFG_EQ2_APPLICATIONIDOFSATELLITEINFO                      OsApplication_Untrusted_Core0
#define DEM_CFG_EQ2_EVENTCOUNTOFSATELLITEINFO                         212U
#define DEM_CFG_EQ2_EVENTTABLEINDENDIDXOFSATELLITEINFO                212U
#define DEM_CFG_EQ2_EVENTTABLEINDSTARTIDXOFSATELLITEINFO              0U
#define DEM_CFG_EQ2_EVENTTABLEINDUSEDOFSATELLITEINFO                  TRUE
#define DEM_CFG_EQ2_SATELLITEDATAOFSATELLITEINFO                      &Dem_Cfg_GetSatelliteInfoOsApplication_Untrusted_Core0().SatelliteData[0]
#define DEM_CFG_EQ2_SATELLITESTATUSOFSATELLITEINFO                    &Dem_Cfg_GetSatelliteInfoOsApplication_Untrusted_Core0().SatelliteStatus
#define DEM_CFG_EQ2_ADMINDATAOFPCCONFIG                               Dem_Cfg_AdminData
#define DEM_CFG_EQ2_CLEARDTCTABLEOFPCCONFIG                           Dem_Cfg_ClearDTCTable
#define DEM_CFG_EQ2_CLIENTTABLEOFPCCONFIG                             Dem_Cfg_ClientTable
#define DEM_CFG_EQ2_COMMITBUFFEROFPCCONFIG                            Dem_Cfg_CommitBuffer
#define DEM_CFG_EQ2_DTCSELECTORTABLEOFPCCONFIG                        Dem_Cfg_DTCSelectorTable
#define DEM_CFG_EQ2_DATAELEMENTTABLEOFPCCONFIG                        Dem_Cfg_DataElementTable
#define DEM_CFG_EQ2_DTCGROUPMASKOFPCCONFIG                            Dem_Cfg_DtcGroupMask
#define DEM_CFG_EQ2_DTCTABLEOFPCCONFIG                                Dem_Cfg_DtcTable
#define DEM_CFG_EQ2_ENABLECONDITIONINITTABLEOFPCCONFIG                Dem_Cfg_EnableConditionInitTable
#define DEM_CFG_EQ2_ENABLECONDITIONSTATEOFPCCONFIG                    Dem_Cfg_EnableConditionState
#define DEM_CFG_EQ2_EVENTAVAILABLEINVARIANTOFPCCONFIG                 Dem_Cfg_EventAvailableInVariant
#define DEM_CFG_EQ2_EVENTDEBOUNCEVALUEOFPCCONFIG                      Dem_Cfg_EventDebounceValue
#define DEM_CFG_EQ2_EVENTINTERNALSTATUSOFPCCONFIG                     Dem_Cfg_EventInternalStatus
#define DEM_CFG_EQ2_EVENTTABLEINDOFPCCONFIG                           Dem_Cfg_EventTableInd
#define DEM_CFG_EQ2_FILTERINFOTABLEOFPCCONFIG                         Dem_Cfg_FilterInfoTable
#define DEM_CFG_EQ2_FREEZEFRAMEITERATORTABLEOFPCCONFIG                Dem_Cfg_FreezeFrameIteratorTable
#define DEM_CFG_EQ2_FREEZEFRAMENUMTABLEOFPCCONFIG                     Dem_Cfg_FreezeFrameNumTable
#define DEM_CFG_EQ2_GENERALOBDINPUTOFPCCONFIG                         Dem_Cfg_GeneralObdInput
#define DEM_CFG_EQ2_MEMORYBLOCKIDOFPCCONFIG                           Dem_Cfg_MemoryBlockId
#define DEM_CFG_EQ2_MEMORYCOMMITNUMBEROFPCCONFIG                      Dem_Cfg_MemoryCommitNumber
#define DEM_CFG_EQ2_MEMORYDATAPTROFPCCONFIG                           Dem_Cfg_MemoryDataPtr
#define DEM_CFG_EQ2_MEMORYDATASIZEOFPCCONFIG                          Dem_Cfg_MemoryDataSize
#define DEM_CFG_EQ2_MEMORYENTRYINITOFPCCONFIG                         Dem_Cfg_MemoryEntryInit
#define DEM_CFG_EQ2_MEMORYENTRYOFPCCONFIG                             Dem_Cfg_MemoryEntry
#define DEM_CFG_EQ2_MEMORYSTATUSOFPCCONFIG                            Dem_Cfg_MemoryStatus
#define DEM_CFG_EQ2_PRIMARYCHRONOLOGYOFPCCONFIG                       Dem_Cfg_PrimaryChronology
#define DEM_CFG_EQ2_PRIMARYENTRY_0OFPCCONFIG                          Dem_Cfg_PrimaryEntry_0
#define DEM_CFG_EQ2_READOUTBUFFEROFPCCONFIG                           Dem_Cfg_ReadoutBuffer
#define DEM_CFG_EQ2_REPORTEDEVENTSOFFILTEROFPCCONFIG                  Dem_Cfg_ReportedEventsOfFilter
#define DEM_CFG_EQ2_SATELLITEINFOOFPCCONFIG                           Dem_Cfg_SatelliteInfo
#define DEM_CFG_EQ2_SATELLITEINFOOSAPPLICATION_UNTRUSTED_CORE0OFPCCONFIG Dem_Cfg_SatelliteInfoOsApplication_Untrusted_Core0
#define DEM_CFG_EQ2_STATUSDATAOFPCCONFIG                              Dem_Cfg_StatusData
#define DEM_CFG_EQ2_TIMESERIESENTRYINITOFPCCONFIG                     Dem_Cfg_TimeSeriesEntryInit
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgLTDataSwitches  Dem_Cfg Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define DEM_LTCONFIG                                                  STD_OFF  /**< Deactivateable: 'Dem_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
/** 
  \}
*/ 


/*********************************************************************************************************************/


 /*  Invalid Indicator IDs  */ 
#define DEM_CFG_INDICATOR_INVALID                                     0U           /* Lowest, unused IndicatorID */ 
#define DEM_CFG_SPECIAL_INDICATOR_NONE                                255U         /* Always different from DEM_CFG_INDICATOR_INVALID */ 

 /*  Indicator global definitions  */ 
#define DEM_CFG_GLOBAL_INDICATOR_COUNT                                0U           /* Total number of configured Indicators */ 
#define DEM_G_NUMBER_SPECIAL_INDICATORS                               0U           /* Number of special indicators (i.e. only MIL, AWL, PL, RSL) */ 


 /*  Aging- and OperationCycle IDs [symbolic name value]  */ 
#define DemConf_DemOperationCycle_DemOperationCycle_0                 0U 
#define Dem_DemOperationCycle_0                                       0U 

 /*  Global, cycle related values  */ 
#define DEM_CFG_GLOBAL_CYCLE_COUNT                                    1U                                                                /* Total number of configured (operation and aging) cycles. */ 
#define DEM_CFG_GLOBAL_OBD_DRIVING_CYCLE_ID                           /* No DemOperationCycleType 'DEM_OPCYC_OBD_DCY' configured. */    /* Cycle ID of the DemOperationCycleType 'DEM_OPCYC_OBD_DCY'. */ 
#define DEM_CFG_GLOBAL_WARMUP_CYCLE_ID                                /* No DemOperationCycleType 'DEM_OPCYC_WARMUP' configured. */     /* Cycle ID of the DemOperationCycleType 'DEM_OPCYC_WARMUP'. */ 



 /*  Support for optimized routines of Vector DCM - FreezeFrame records  */ 
#define DEM_DCM_NUM_FRZFRAME_RECID                                    1U 
#define DEM_DCM_LST_FRZFRAME_RECID                                    0x01U 

 /*  Event IDs [symbolic name value] - sorted by name.
     See Dem_Cfg_EventTable[] for this list sorted by Ids.  */ 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ADC_E_TIMEOUT                                                                                               2U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisableDM_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef                                     3U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisableDM_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef                                             4U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisableDM_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef                                             5U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisableDM_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef                                             6U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisableDM_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef                                        7U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef                               8U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone1J1939_Tx_0x31_BC_3782f500_BswMReportFailToDemRef                          9U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef                                       10U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone2_Tx_1838e3b2_BswMReportFailToDemRef                                       11U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef                                       12U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oCabSubnet_Tx_5060f83a_BswMReportFailToDemRef                                       13U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef                                       14U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oFMSNet_Tx_0x31_BC_38fc8c7d_BswMReportFailToDemRef                                  15U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN00_Rx_dd181faa_BswMReportFailToDemRef                                           16U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN00_Tx_8b42b82c_BswMReportFailToDemRef                                           17U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN01_Rx_65a478cf_BswMReportFailToDemRef                                           18U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN01_Tx_33fedf49_BswMReportFailToDemRef                                           19U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN02_Rx_7711d721_BswMReportFailToDemRef                                           20U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN02_Tx_214b70a7_BswMReportFailToDemRef                                           21U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN03_Rx_cfadb044_BswMReportFailToDemRef                                           22U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN03_Tx_99f717c2_BswMReportFailToDemRef                                           23U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN04_Rx_527a88fd_BswMReportFailToDemRef                                           24U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN04_Tx_04202f7b_BswMReportFailToDemRef                                           25U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef                                  26U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oSecuritySubnet_Tx_6c66ba3a_BswMReportFailToDemRef                                  27U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnableDM_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef                                      28U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnableDM_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef                                              29U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnableDM_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef                                              30U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnableDM_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef                                              31U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnableDM_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef                                         32U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef                                33U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone1J1939_Tx_0x31_BC_3782f500_BswMReportFailToDemRef                           34U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef                                        35U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone2_Tx_1838e3b2_BswMReportFailToDemRef                                        36U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef                                        37U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oCabSubnet_Tx_5060f83a_BswMReportFailToDemRef                                        38U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef                                        39U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oFMSNet_Tx_0x31_BC_38fc8c7d_BswMReportFailToDemRef                                   40U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN00_Rx_dd181faa_BswMReportFailToDemRef                                            41U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN00_Tx_8b42b82c_BswMReportFailToDemRef                                            42U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN01_Rx_65a478cf_BswMReportFailToDemRef                                            43U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN01_Tx_33fedf49_BswMReportFailToDemRef                                            44U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN02_Rx_7711d721_BswMReportFailToDemRef                                            45U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN02_Tx_214b70a7_BswMReportFailToDemRef                                            46U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN03_Rx_cfadb044_BswMReportFailToDemRef                                            47U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN03_Tx_99f717c2_BswMReportFailToDemRef                                            48U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN04_Rx_527a88fd_BswMReportFailToDemRef                                            49U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN04_Tx_04202f7b_BswMReportFailToDemRef                                            50U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef                                   51U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oSecuritySubnet_Tx_6c66ba3a_BswMReportFailToDemRef                                   52U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_J1939RM_STATE_OFFLINE_BswMReportFa_540060b1  53U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_J1939RM_STATE_ONLINE_BswMReportFailToDemRef  54U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_FMSNet_fce1aae5_CIOM_3a3d59b1_J1939RM_STATE_OFFLINE_BswMReportFailToDemRef         55U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_FMSNet_fce1aae5_CIOM_3a3d59b1_J1939RM_STATE_ONLINE_BswMReportFailToDemRef          56U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_17344684_CANSM_E_BUS_OFF                                                                               59U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_17344684_CANSM_E_MODE_REQUEST_TIMEOUT                                                                  60U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_53cce282_CANSM_E_BUS_OFF                                                                               57U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_53cce282_CANSM_E_MODE_REQUEST_TIMEOUT                                                                  58U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_a6b6a922_CANSM_E_BUS_OFF                                                                               61U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_a6b6a922_CANSM_E_MODE_REQUEST_TIMEOUT                                                                  62U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_df893ad5_CANSM_E_BUS_OFF                                                                               63U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_df893ad5_CANSM_E_MODE_REQUEST_TIMEOUT                                                                  64U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_e058b4ae_CANSM_E_BUS_OFF                                                                               65U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CHNL_e058b4ae_CANSM_E_MODE_REQUEST_TIMEOUT                                                                  66U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ECUM_E_ALL_RUN_REQUESTS_KILLED                                                                              67U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ECUM_E_CONFIGURATION_DATA_INCONSISTENT                                                                      68U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ECUM_E_IMPROPER_CALLER                                                                                      69U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ECUM_E_RAM_CHECK_FAILED                                                                                     70U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_CancelNvMWriteAll_BswMReportFailToDemRef                                                         71U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_CancelWriteAllTimer_Start_BswMReportFailToDemRef                                                 72U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_CancelWriteAllTimer_Stop_BswMReportFailToDemRef                                                  73U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone1J1939_0b1f4bae_BswMReportFailToDemRef                                      74U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone1J1939_0b1f4bae_BswMReportFailToDemRef_1                                    75U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone2_78967e2c_BswMReportFailToDemRef                                           76U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone2_78967e2c_BswMReportFailToDemRef_1                                         77U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_CabSubnet_9ea693f1_BswMReportFailToDemRef                                           78U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_CabSubnet_9ea693f1_BswMReportFailToDemRef_1                                         79U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_FMSNet_fce1aae5_BswMReportFailToDemRef                                              80U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_FMSNet_fce1aae5_BswMReportFailToDemRef_1                                            81U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN00_2cd9a7df_BswMReportFailToDemRef                                               82U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN00_2cd9a7df_BswMReportFailToDemRef_1                                             83U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN01_5bde9749_BswMReportFailToDemRef                                               84U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN01_5bde9749_BswMReportFailToDemRef_1                                             85U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN02_c2d7c6f3_BswMReportFailToDemRef                                               86U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN02_c2d7c6f3_BswMReportFailToDemRef_1                                             87U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN03_b5d0f665_BswMReportFailToDemRef                                               88U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN03_b5d0f665_BswMReportFailToDemRef_1                                             89U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN04_2bb463c6_BswMReportFailToDemRef                                               90U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN04_2bb463c6_BswMReportFailToDemRef_1                                             91U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_SecuritySubnet_e7a0ee54_BswMReportFailToDemRef                                      92U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_SecuritySubnet_e7a0ee54_BswMReportFailToDemRef_1                                    93U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMCheckPendingRequests_BswMReportFailToDemRef                                                  94U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMCheckPendingRequests_BswMReportFailToDemRef_1                                                95U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMCheckPendingRequests_BswMReportFailToDemRef_2                                                96U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_Backbone1J1939_0b1f4bae_BswMReportFailToDemRef                                   97U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_Backbone2_78967e2c_BswMReportFailToDemRef                                        98U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_CabSubnet_9ea693f1_BswMReportFailToDemRef                                        99U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_FMSNet_fce1aae5_BswMReportFailToDemRef                                           100U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN00_2cd9a7df_BswMReportFailToDemRef                                            101U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN01_5bde9749_BswMReportFailToDemRef                                            102U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN02_c2d7c6f3_BswMReportFailToDemRef                                            103U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN03_b5d0f665_BswMReportFailToDemRef                                            104U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN04_2bb463c6_BswMReportFailToDemRef                                            105U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_SecuritySubnet_e7a0ee54_BswMReportFailToDemRef                                   106U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_DemInit_BswMReportFailToDemRef                                                                   107U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_DemInitialized_BswMReportFailToDemRef                                                            108U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_DemNotInitialized_BswMReportFailToDemRef                                                         109U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_DemShutdown_BswMReportFailToDemRef                                                               110U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ESH_PostRun_BswMReportFailToDemRef                                                               111U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ESH_PrepShutdown_BswMReportFailToDemRef                                                          112U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ESH_PrepShutdown_BswMReportFailToDemRef_1                                                        113U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ESH_Run_BswMReportFailToDemRef                                                                   114U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ESH_Run_BswMReportFailToDemRef_1                                                                 115U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ESH_WaitForNvm_BswMReportFailToDemRef                                                            116U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ESH_Wakeup_BswMReportFailToDemRef                                                                117U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ESH_Wakeup_BswMReportFailToDemRef_1                                                              118U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_EcuMClearValidatedWakeupEvents_BswMReportFailToDemRef                                            119U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_EcuMGoToSelectedShutdownTarget_BswMReportFailToDemRef                                            120U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_EnterExclusiveArea_BswMReportFailToDemRef                                                        121U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_EnterExclusiveArea_BswMReportFailToDemRef_1                                                      122U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ExitExclusiveArea_BswMReportFailToDemRef                                                         123U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_ExitExclusiveArea_BswMReportFailToDemRef_1                                                       124U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_NvMWriteAll_BswMReportFailToDemRef                                                               125U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_OnEnterPostRun_BswMReportFailToDemRef                                                            126U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_OnEnterPrepShutdown_BswMReportFailToDemRef                                                       127U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_OnEnterPrepShutdown_BswMReportFailToDemRef_1                                                     128U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_OnEnterRun_BswMReportFailToDemRef                                                                129U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_OnEnterRun_BswMReportFailToDemRef_1                                                              130U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_OnEnterShutdown_BswMReportFailToDemRef                                                           131U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_OnEnterWaitForNvm_BswMReportFailToDemRef                                                         132U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_OnEnterWakeup_BswMReportFailToDemRef                                                             133U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_OnEnterWakeup_BswMReportFailToDemRef_1                                                           134U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_SelfRunRequestTimer_Start_BswMReportFailToDemRef                                                 135U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_SelfRunRequestTimer_Start_BswMReportFailToDemRef_1                                               136U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_SwitchPostRun_BswMReportFailToDemRef                                                             137U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_SwitchRun_BswMReportFailToDemRef                                                                 138U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_SwitchRun_BswMReportFailToDemRef_1                                                               139U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_SwitchShutdown_BswMReportFailToDemRef                                                            140U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_SwitchShutdown_BswMReportFailToDemRef_1                                                          141U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_SwitchWakeup_BswMReportFailToDemRef                                                              142U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_SwitchWakeup_BswMReportFailToDemRef_1                                                            143U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_WriteAllTimer_Start_BswMReportFailToDemRef                                                       144U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_WriteAllTimer_Stop_BswMReportFailToDemRef                                                        145U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_Action_WriteAllTimer_Stop_BswMReportFailToDemRef_1                                                      146U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_DemInit_BswMReportFailToDemRef                                                                          147U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_PostRunNested_BswMReportFailToDemRef                                                                    148U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_PostRunToPrepNested_BswMReportFailToDemRef                                                              149U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_ESH_RunToPostRunNested_BswMReportFailToDemRef                                                               150U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_FLS_E_COMPARE_FAILED                                                                                        151U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_FLS_E_ERASE_FAILED                                                                                          152U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_FLS_E_READ_FAILED                                                                                           153U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_FLS_E_UNEXPECTED_FLASH_ID                                                                                   154U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_FLS_E_WRITE_FAILED                                                                                          155U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_GPT_E_TIMEOUT                                                                                               156U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_BrsHw_EnableHwAccess_BswMReportFailToDemRef                                                     157U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_CanIf_Init_BswMReportFailToDemRef                                                               158U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_CanNm_Init_BswMReportFailToDemRef                                                               159U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_CanSM_Init_BswMReportFailToDemRef                                                               160U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_CanTp_Init_BswMReportFailToDemRef                                                               161U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_Can_Init_BswMReportFailToDemRef                                                                 162U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_ComM_Init_BswMReportFailToDemRef                                                                163U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_Com_Init_BswMReportFailToDemRef                                                                 164U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_Dcm_Init_BswMReportFailToDemRef                                                                 165U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_Dem_Init_BswMReportFailToDemRef                                                                 166U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_EnableInterrupts_BswMReportFailToDemRef                                                         167U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_Fee_Init_BswMReportFailToDemRef                                                                 168U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_Issm_Init_BswMReportFailToDemRef                                                                169U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_J1939Nm_Init_BswMReportFailToDemRef                                                             170U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_J1939Rm_Init_BswMReportFailToDemRef                                                             171U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_J1939Tp_Init_BswMReportFailToDemRef                                                             172U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_LinIf_Init_BswMReportFailToDemRef                                                               173U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_LinSM_Init_BswMReportFailToDemRef                                                               174U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_LinTp_Init_BswMReportFailToDemRef                                                               175U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_Lin_Init_BswMReportFailToDemRef                                                                 176U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_Nm_Init_BswMReportFailToDemRef                                                                  177U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_NvMReadAll_BswMReportFailToDemRef                                                               178U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_NvM_Init_BswMReportFailToDemRef                                                                 179U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_PduR_Init_BswMReportFailToDemRef                                                                180U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_INIT_Action_RteStart_BswMReportFailToDemRef                                                                 181U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_J1939NM_E_ADDRESS_LOST                                                                                      182U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_J1939TpConfiguration_J1939TP_E_COMMUNICATION                                                                183U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_LIN_E_TIMEOUT                                                                                               184U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_MCL_E_DMA_BUS                                                                                               185U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_MCL_E_DMA_DESCRIPTOR                                                                                        186U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_MCL_E_DMA_ECC                                                                                               187U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_MCL_E_DMA_INCONSISTENCY                                                                                     188U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_MCL_E_DMA_PRIORITY                                                                                          189U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_MCL_E_DMA_UNRECOGNIZED                                                                                      190U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_MCU_E_CLOCK_FAILURE                                                                                         191U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_MCU_E_INVALIDMODE_CONFIG                                                                                    192U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_MCU_E_SSCM_CER_FAILURE                                                                                      193U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_MCU_E_TIMEOUT_FAILURE                                                                                       194U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_INTEGRITY_FAILED                                                                                      195U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_LOSS_OF_REDUNDANCY                                                                                    196U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_QUEUE_OVERFLOW                                                                                        197U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_REQ_FAILED                                                                                            198U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_VERIFY_FAILED                                                                                         199U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_WRITE_PROTECTED                                                                                       200U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_WRONG_BLOCK_ID                                                                                        201U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_SPI_E_HARDWARE_ERROR                                                                                        202U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_SpiDriver_SPI_E_HARDWARE_ERROR                                                                              203U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_WDG_E_CORRUPT_CONFIG                                                                                        204U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_WDG_E_DISABLE_REJECTED                                                                                      205U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_WDG_E_FORBIDDEN_INVOCATION                                                                                  206U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_WDG_E_INVALID_CALL                                                                                          207U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_WDG_E_INVALID_PARAMETER                                                                                     208U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_WDG_E_MODE_FAILED                                                                                           209U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_WDG_E_UNLOCKED                                                                                              210U 
#define DemConf_DemEventParameter_DEM_EVENT_StartApplication                                                                                                      211U 
#define DemConf_DemEventParameter_DemEventParameter_0                                                                                                             1U 
#define Dem_AutoCreatedDemEvent_ADC_E_TIMEOUT                                                                                                                     2U 
#define Dem_AutoCreatedDemEvent_CC_DisableDM_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef                                                           3U 
#define Dem_AutoCreatedDemEvent_CC_DisableDM_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef                                                                   4U 
#define Dem_AutoCreatedDemEvent_CC_DisableDM_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef                                                                   5U 
#define Dem_AutoCreatedDemEvent_CC_DisableDM_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef                                                                   6U 
#define Dem_AutoCreatedDemEvent_CC_DisableDM_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef                                                              7U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef                                                     8U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone1J1939_Tx_0x31_BC_3782f500_BswMReportFailToDemRef                                                9U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef                                                             10U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone2_Tx_1838e3b2_BswMReportFailToDemRef                                                             11U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef                                                             12U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oCabSubnet_Tx_5060f83a_BswMReportFailToDemRef                                                             13U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef                                                             14U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oFMSNet_Tx_0x31_BC_38fc8c7d_BswMReportFailToDemRef                                                        15U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN00_Rx_dd181faa_BswMReportFailToDemRef                                                                 16U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN00_Tx_8b42b82c_BswMReportFailToDemRef                                                                 17U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN01_Rx_65a478cf_BswMReportFailToDemRef                                                                 18U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN01_Tx_33fedf49_BswMReportFailToDemRef                                                                 19U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN02_Rx_7711d721_BswMReportFailToDemRef                                                                 20U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN02_Tx_214b70a7_BswMReportFailToDemRef                                                                 21U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN03_Rx_cfadb044_BswMReportFailToDemRef                                                                 22U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN03_Tx_99f717c2_BswMReportFailToDemRef                                                                 23U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN04_Rx_527a88fd_BswMReportFailToDemRef                                                                 24U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN04_Tx_04202f7b_BswMReportFailToDemRef                                                                 25U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef                                                        26U 
#define Dem_AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oSecuritySubnet_Tx_6c66ba3a_BswMReportFailToDemRef                                                        27U 
#define Dem_AutoCreatedDemEvent_CC_EnableDM_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef                                                            28U 
#define Dem_AutoCreatedDemEvent_CC_EnableDM_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef                                                                    29U 
#define Dem_AutoCreatedDemEvent_CC_EnableDM_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef                                                                    30U 
#define Dem_AutoCreatedDemEvent_CC_EnableDM_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef                                                                    31U 
#define Dem_AutoCreatedDemEvent_CC_EnableDM_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef                                                               32U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef                                                      33U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone1J1939_Tx_0x31_BC_3782f500_BswMReportFailToDemRef                                                 34U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef                                                              35U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone2_Tx_1838e3b2_BswMReportFailToDemRef                                                              36U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef                                                              37U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oCabSubnet_Tx_5060f83a_BswMReportFailToDemRef                                                              38U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef                                                              39U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oFMSNet_Tx_0x31_BC_38fc8c7d_BswMReportFailToDemRef                                                         40U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN00_Rx_dd181faa_BswMReportFailToDemRef                                                                  41U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN00_Tx_8b42b82c_BswMReportFailToDemRef                                                                  42U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN01_Rx_65a478cf_BswMReportFailToDemRef                                                                  43U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN01_Tx_33fedf49_BswMReportFailToDemRef                                                                  44U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN02_Rx_7711d721_BswMReportFailToDemRef                                                                  45U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN02_Tx_214b70a7_BswMReportFailToDemRef                                                                  46U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN03_Rx_cfadb044_BswMReportFailToDemRef                                                                  47U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN03_Tx_99f717c2_BswMReportFailToDemRef                                                                  48U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN04_Rx_527a88fd_BswMReportFailToDemRef                                                                  49U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN04_Tx_04202f7b_BswMReportFailToDemRef                                                                  50U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef                                                         51U 
#define Dem_AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oSecuritySubnet_Tx_6c66ba3a_BswMReportFailToDemRef                                                         52U 
#define Dem_AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_J1939RM_STATE_OFFLINE_BswMReportFa_540060b1                        53U 
#define Dem_AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_J1939RM_STATE_ONLINE_BswMReportFailToDemRef                        54U 
#define Dem_AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_FMSNet_fce1aae5_CIOM_3a3d59b1_J1939RM_STATE_OFFLINE_BswMReportFailToDemRef                               55U 
#define Dem_AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_FMSNet_fce1aae5_CIOM_3a3d59b1_J1939RM_STATE_ONLINE_BswMReportFailToDemRef                                56U 
#define Dem_AutoCreatedDemEvent_CHNL_17344684_CANSM_E_BUS_OFF                                                                                                     59U 
#define Dem_AutoCreatedDemEvent_CHNL_17344684_CANSM_E_MODE_REQUEST_TIMEOUT                                                                                        60U 
#define Dem_AutoCreatedDemEvent_CHNL_53cce282_CANSM_E_BUS_OFF                                                                                                     57U 
#define Dem_AutoCreatedDemEvent_CHNL_53cce282_CANSM_E_MODE_REQUEST_TIMEOUT                                                                                        58U 
#define Dem_AutoCreatedDemEvent_CHNL_a6b6a922_CANSM_E_BUS_OFF                                                                                                     61U 
#define Dem_AutoCreatedDemEvent_CHNL_a6b6a922_CANSM_E_MODE_REQUEST_TIMEOUT                                                                                        62U 
#define Dem_AutoCreatedDemEvent_CHNL_df893ad5_CANSM_E_BUS_OFF                                                                                                     63U 
#define Dem_AutoCreatedDemEvent_CHNL_df893ad5_CANSM_E_MODE_REQUEST_TIMEOUT                                                                                        64U 
#define Dem_AutoCreatedDemEvent_CHNL_e058b4ae_CANSM_E_BUS_OFF                                                                                                     65U 
#define Dem_AutoCreatedDemEvent_CHNL_e058b4ae_CANSM_E_MODE_REQUEST_TIMEOUT                                                                                        66U 
#define Dem_AutoCreatedDemEvent_ECUM_E_ALL_RUN_REQUESTS_KILLED                                                                                                    67U 
#define Dem_AutoCreatedDemEvent_ECUM_E_CONFIGURATION_DATA_INCONSISTENT                                                                                            68U 
#define Dem_AutoCreatedDemEvent_ECUM_E_IMPROPER_CALLER                                                                                                            69U 
#define Dem_AutoCreatedDemEvent_ECUM_E_RAM_CHECK_FAILED                                                                                                           70U 
#define Dem_AutoCreatedDemEvent_ESH_Action_CancelNvMWriteAll_BswMReportFailToDemRef                                                                               71U 
#define Dem_AutoCreatedDemEvent_ESH_Action_CancelWriteAllTimer_Start_BswMReportFailToDemRef                                                                       72U 
#define Dem_AutoCreatedDemEvent_ESH_Action_CancelWriteAllTimer_Stop_BswMReportFailToDemRef                                                                        73U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone1J1939_0b1f4bae_BswMReportFailToDemRef                                                            74U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone1J1939_0b1f4bae_BswMReportFailToDemRef_1                                                          75U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone2_78967e2c_BswMReportFailToDemRef                                                                 76U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone2_78967e2c_BswMReportFailToDemRef_1                                                               77U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_CabSubnet_9ea693f1_BswMReportFailToDemRef                                                                 78U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_CabSubnet_9ea693f1_BswMReportFailToDemRef_1                                                               79U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_FMSNet_fce1aae5_BswMReportFailToDemRef                                                                    80U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_FMSNet_fce1aae5_BswMReportFailToDemRef_1                                                                  81U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN00_2cd9a7df_BswMReportFailToDemRef                                                                     82U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN00_2cd9a7df_BswMReportFailToDemRef_1                                                                   83U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN01_5bde9749_BswMReportFailToDemRef                                                                     84U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN01_5bde9749_BswMReportFailToDemRef_1                                                                   85U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN02_c2d7c6f3_BswMReportFailToDemRef                                                                     86U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN02_c2d7c6f3_BswMReportFailToDemRef_1                                                                   87U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN03_b5d0f665_BswMReportFailToDemRef                                                                     88U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN03_b5d0f665_BswMReportFailToDemRef_1                                                                   89U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN04_2bb463c6_BswMReportFailToDemRef                                                                     90U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN04_2bb463c6_BswMReportFailToDemRef_1                                                                   91U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_SecuritySubnet_e7a0ee54_BswMReportFailToDemRef                                                            92U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_SecuritySubnet_e7a0ee54_BswMReportFailToDemRef_1                                                          93U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMCheckPendingRequests_BswMReportFailToDemRef                                                                        94U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMCheckPendingRequests_BswMReportFailToDemRef_1                                                                      95U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMCheckPendingRequests_BswMReportFailToDemRef_2                                                                      96U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_Backbone1J1939_0b1f4bae_BswMReportFailToDemRef                                                         97U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_Backbone2_78967e2c_BswMReportFailToDemRef                                                              98U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_CabSubnet_9ea693f1_BswMReportFailToDemRef                                                              99U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_FMSNet_fce1aae5_BswMReportFailToDemRef                                                                 100U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN00_2cd9a7df_BswMReportFailToDemRef                                                                  101U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN01_5bde9749_BswMReportFailToDemRef                                                                  102U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN02_c2d7c6f3_BswMReportFailToDemRef                                                                  103U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN03_b5d0f665_BswMReportFailToDemRef                                                                  104U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN04_2bb463c6_BswMReportFailToDemRef                                                                  105U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_SecuritySubnet_e7a0ee54_BswMReportFailToDemRef                                                         106U 
#define Dem_AutoCreatedDemEvent_ESH_Action_DemInit_BswMReportFailToDemRef                                                                                         107U 
#define Dem_AutoCreatedDemEvent_ESH_Action_DemInitialized_BswMReportFailToDemRef                                                                                  108U 
#define Dem_AutoCreatedDemEvent_ESH_Action_DemNotInitialized_BswMReportFailToDemRef                                                                               109U 
#define Dem_AutoCreatedDemEvent_ESH_Action_DemShutdown_BswMReportFailToDemRef                                                                                     110U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ESH_PostRun_BswMReportFailToDemRef                                                                                     111U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ESH_PrepShutdown_BswMReportFailToDemRef                                                                                112U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ESH_PrepShutdown_BswMReportFailToDemRef_1                                                                              113U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ESH_Run_BswMReportFailToDemRef                                                                                         114U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ESH_Run_BswMReportFailToDemRef_1                                                                                       115U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ESH_WaitForNvm_BswMReportFailToDemRef                                                                                  116U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ESH_Wakeup_BswMReportFailToDemRef                                                                                      117U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ESH_Wakeup_BswMReportFailToDemRef_1                                                                                    118U 
#define Dem_AutoCreatedDemEvent_ESH_Action_EcuMClearValidatedWakeupEvents_BswMReportFailToDemRef                                                                  119U 
#define Dem_AutoCreatedDemEvent_ESH_Action_EcuMGoToSelectedShutdownTarget_BswMReportFailToDemRef                                                                  120U 
#define Dem_AutoCreatedDemEvent_ESH_Action_EnterExclusiveArea_BswMReportFailToDemRef                                                                              121U 
#define Dem_AutoCreatedDemEvent_ESH_Action_EnterExclusiveArea_BswMReportFailToDemRef_1                                                                            122U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ExitExclusiveArea_BswMReportFailToDemRef                                                                               123U 
#define Dem_AutoCreatedDemEvent_ESH_Action_ExitExclusiveArea_BswMReportFailToDemRef_1                                                                             124U 
#define Dem_AutoCreatedDemEvent_ESH_Action_NvMWriteAll_BswMReportFailToDemRef                                                                                     125U 
#define Dem_AutoCreatedDemEvent_ESH_Action_OnEnterPostRun_BswMReportFailToDemRef                                                                                  126U 
#define Dem_AutoCreatedDemEvent_ESH_Action_OnEnterPrepShutdown_BswMReportFailToDemRef                                                                             127U 
#define Dem_AutoCreatedDemEvent_ESH_Action_OnEnterPrepShutdown_BswMReportFailToDemRef_1                                                                           128U 
#define Dem_AutoCreatedDemEvent_ESH_Action_OnEnterRun_BswMReportFailToDemRef                                                                                      129U 
#define Dem_AutoCreatedDemEvent_ESH_Action_OnEnterRun_BswMReportFailToDemRef_1                                                                                    130U 
#define Dem_AutoCreatedDemEvent_ESH_Action_OnEnterShutdown_BswMReportFailToDemRef                                                                                 131U 
#define Dem_AutoCreatedDemEvent_ESH_Action_OnEnterWaitForNvm_BswMReportFailToDemRef                                                                               132U 
#define Dem_AutoCreatedDemEvent_ESH_Action_OnEnterWakeup_BswMReportFailToDemRef                                                                                   133U 
#define Dem_AutoCreatedDemEvent_ESH_Action_OnEnterWakeup_BswMReportFailToDemRef_1                                                                                 134U 
#define Dem_AutoCreatedDemEvent_ESH_Action_SelfRunRequestTimer_Start_BswMReportFailToDemRef                                                                       135U 
#define Dem_AutoCreatedDemEvent_ESH_Action_SelfRunRequestTimer_Start_BswMReportFailToDemRef_1                                                                     136U 
#define Dem_AutoCreatedDemEvent_ESH_Action_SwitchPostRun_BswMReportFailToDemRef                                                                                   137U 
#define Dem_AutoCreatedDemEvent_ESH_Action_SwitchRun_BswMReportFailToDemRef                                                                                       138U 
#define Dem_AutoCreatedDemEvent_ESH_Action_SwitchRun_BswMReportFailToDemRef_1                                                                                     139U 
#define Dem_AutoCreatedDemEvent_ESH_Action_SwitchShutdown_BswMReportFailToDemRef                                                                                  140U 
#define Dem_AutoCreatedDemEvent_ESH_Action_SwitchShutdown_BswMReportFailToDemRef_1                                                                                141U 
#define Dem_AutoCreatedDemEvent_ESH_Action_SwitchWakeup_BswMReportFailToDemRef                                                                                    142U 
#define Dem_AutoCreatedDemEvent_ESH_Action_SwitchWakeup_BswMReportFailToDemRef_1                                                                                  143U 
#define Dem_AutoCreatedDemEvent_ESH_Action_WriteAllTimer_Start_BswMReportFailToDemRef                                                                             144U 
#define Dem_AutoCreatedDemEvent_ESH_Action_WriteAllTimer_Stop_BswMReportFailToDemRef                                                                              145U 
#define Dem_AutoCreatedDemEvent_ESH_Action_WriteAllTimer_Stop_BswMReportFailToDemRef_1                                                                            146U 
#define Dem_AutoCreatedDemEvent_ESH_DemInit_BswMReportFailToDemRef                                                                                                147U 
#define Dem_AutoCreatedDemEvent_ESH_PostRunNested_BswMReportFailToDemRef                                                                                          148U 
#define Dem_AutoCreatedDemEvent_ESH_PostRunToPrepNested_BswMReportFailToDemRef                                                                                    149U 
#define Dem_AutoCreatedDemEvent_ESH_RunToPostRunNested_BswMReportFailToDemRef                                                                                     150U 
#define Dem_AutoCreatedDemEvent_FLS_E_COMPARE_FAILED                                                                                                              151U 
#define Dem_AutoCreatedDemEvent_FLS_E_ERASE_FAILED                                                                                                                152U 
#define Dem_AutoCreatedDemEvent_FLS_E_READ_FAILED                                                                                                                 153U 
#define Dem_AutoCreatedDemEvent_FLS_E_UNEXPECTED_FLASH_ID                                                                                                         154U 
#define Dem_AutoCreatedDemEvent_FLS_E_WRITE_FAILED                                                                                                                155U 
#define Dem_AutoCreatedDemEvent_GPT_E_TIMEOUT                                                                                                                     156U 
#define Dem_AutoCreatedDemEvent_INIT_Action_BrsHw_EnableHwAccess_BswMReportFailToDemRef                                                                           157U 
#define Dem_AutoCreatedDemEvent_INIT_Action_CanIf_Init_BswMReportFailToDemRef                                                                                     158U 
#define Dem_AutoCreatedDemEvent_INIT_Action_CanNm_Init_BswMReportFailToDemRef                                                                                     159U 
#define Dem_AutoCreatedDemEvent_INIT_Action_CanSM_Init_BswMReportFailToDemRef                                                                                     160U 
#define Dem_AutoCreatedDemEvent_INIT_Action_CanTp_Init_BswMReportFailToDemRef                                                                                     161U 
#define Dem_AutoCreatedDemEvent_INIT_Action_Can_Init_BswMReportFailToDemRef                                                                                       162U 
#define Dem_AutoCreatedDemEvent_INIT_Action_ComM_Init_BswMReportFailToDemRef                                                                                      163U 
#define Dem_AutoCreatedDemEvent_INIT_Action_Com_Init_BswMReportFailToDemRef                                                                                       164U 
#define Dem_AutoCreatedDemEvent_INIT_Action_Dcm_Init_BswMReportFailToDemRef                                                                                       165U 
#define Dem_AutoCreatedDemEvent_INIT_Action_Dem_Init_BswMReportFailToDemRef                                                                                       166U 
#define Dem_AutoCreatedDemEvent_INIT_Action_EnableInterrupts_BswMReportFailToDemRef                                                                               167U 
#define Dem_AutoCreatedDemEvent_INIT_Action_Fee_Init_BswMReportFailToDemRef                                                                                       168U 
#define Dem_AutoCreatedDemEvent_INIT_Action_Issm_Init_BswMReportFailToDemRef                                                                                      169U 
#define Dem_AutoCreatedDemEvent_INIT_Action_J1939Nm_Init_BswMReportFailToDemRef                                                                                   170U 
#define Dem_AutoCreatedDemEvent_INIT_Action_J1939Rm_Init_BswMReportFailToDemRef                                                                                   171U 
#define Dem_AutoCreatedDemEvent_INIT_Action_J1939Tp_Init_BswMReportFailToDemRef                                                                                   172U 
#define Dem_AutoCreatedDemEvent_INIT_Action_LinIf_Init_BswMReportFailToDemRef                                                                                     173U 
#define Dem_AutoCreatedDemEvent_INIT_Action_LinSM_Init_BswMReportFailToDemRef                                                                                     174U 
#define Dem_AutoCreatedDemEvent_INIT_Action_LinTp_Init_BswMReportFailToDemRef                                                                                     175U 
#define Dem_AutoCreatedDemEvent_INIT_Action_Lin_Init_BswMReportFailToDemRef                                                                                       176U 
#define Dem_AutoCreatedDemEvent_INIT_Action_Nm_Init_BswMReportFailToDemRef                                                                                        177U 
#define Dem_AutoCreatedDemEvent_INIT_Action_NvMReadAll_BswMReportFailToDemRef                                                                                     178U 
#define Dem_AutoCreatedDemEvent_INIT_Action_NvM_Init_BswMReportFailToDemRef                                                                                       179U 
#define Dem_AutoCreatedDemEvent_INIT_Action_PduR_Init_BswMReportFailToDemRef                                                                                      180U 
#define Dem_AutoCreatedDemEvent_INIT_Action_RteStart_BswMReportFailToDemRef                                                                                       181U 
#define Dem_AutoCreatedDemEvent_J1939NM_E_ADDRESS_LOST                                                                                                            182U 
#define Dem_AutoCreatedDemEvent_J1939TpConfiguration_J1939TP_E_COMMUNICATION                                                                                      183U 
#define Dem_AutoCreatedDemEvent_LIN_E_TIMEOUT                                                                                                                     184U 
#define Dem_AutoCreatedDemEvent_MCL_E_DMA_BUS                                                                                                                     185U 
#define Dem_AutoCreatedDemEvent_MCL_E_DMA_DESCRIPTOR                                                                                                              186U 
#define Dem_AutoCreatedDemEvent_MCL_E_DMA_ECC                                                                                                                     187U 
#define Dem_AutoCreatedDemEvent_MCL_E_DMA_INCONSISTENCY                                                                                                           188U 
#define Dem_AutoCreatedDemEvent_MCL_E_DMA_PRIORITY                                                                                                                189U 
#define Dem_AutoCreatedDemEvent_MCL_E_DMA_UNRECOGNIZED                                                                                                            190U 
#define Dem_AutoCreatedDemEvent_MCU_E_CLOCK_FAILURE                                                                                                               191U 
#define Dem_AutoCreatedDemEvent_MCU_E_INVALIDMODE_CONFIG                                                                                                          192U 
#define Dem_AutoCreatedDemEvent_MCU_E_SSCM_CER_FAILURE                                                                                                            193U 
#define Dem_AutoCreatedDemEvent_MCU_E_TIMEOUT_FAILURE                                                                                                             194U 
#define Dem_AutoCreatedDemEvent_NVM_E_INTEGRITY_FAILED                                                                                                            195U 
#define Dem_AutoCreatedDemEvent_NVM_E_LOSS_OF_REDUNDANCY                                                                                                          196U 
#define Dem_AutoCreatedDemEvent_NVM_E_QUEUE_OVERFLOW                                                                                                              197U 
#define Dem_AutoCreatedDemEvent_NVM_E_REQ_FAILED                                                                                                                  198U 
#define Dem_AutoCreatedDemEvent_NVM_E_VERIFY_FAILED                                                                                                               199U 
#define Dem_AutoCreatedDemEvent_NVM_E_WRITE_PROTECTED                                                                                                             200U 
#define Dem_AutoCreatedDemEvent_NVM_E_WRONG_BLOCK_ID                                                                                                              201U 
#define Dem_AutoCreatedDemEvent_SPI_E_HARDWARE_ERROR                                                                                                              202U 
#define Dem_AutoCreatedDemEvent_SpiDriver_SPI_E_HARDWARE_ERROR                                                                                                    203U 
#define Dem_AutoCreatedDemEvent_WDG_E_CORRUPT_CONFIG                                                                                                              204U 
#define Dem_AutoCreatedDemEvent_WDG_E_DISABLE_REJECTED                                                                                                            205U 
#define Dem_AutoCreatedDemEvent_WDG_E_FORBIDDEN_INVOCATION                                                                                                        206U 
#define Dem_AutoCreatedDemEvent_WDG_E_INVALID_CALL                                                                                                                207U 
#define Dem_AutoCreatedDemEvent_WDG_E_INVALID_PARAMETER                                                                                                           208U 
#define Dem_AutoCreatedDemEvent_WDG_E_MODE_FAILED                                                                                                                 209U 
#define Dem_AutoCreatedDemEvent_WDG_E_UNLOCKED                                                                                                                    210U 
#define Dem_DEM_EVENT_StartApplication                                                                                                                            211U 
#define Dem_DemEventParameter_0                                                                                                                                   1U 




 /*  Existance of iterator interfaces  */ 
#define DEM_CFG_HAVEITER_CLEARDTCNOTIFICATIONFINISH                   STD_OFF      /* Deactivated due DEM_CFG_CLEARDTCNOTIFICATIONFINISHTABLE==STD_OFF */ 
#define DEM_CFG_HAVEITER_CLEARDTCNOTIFICATIONSTART                    STD_OFF      /* Deactivated due DEM_CFG_CLEARDTCNOTIFICATIONSTARTTABLE==STD_OFF */ 
#define DEM_CFG_HAVEITER_COMBINEDGROUP                                STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_TYPE1_COMBINATION==STD_OFF */ 
#define DEM_CFG_HAVEITER_DEBOUNCEHIRES                                STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_DEBOUNCE_TIME_HR==STD_OFF */ 
#define DEM_CFG_HAVEITER_DEBOUNCELORES                                STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_DEBOUNCE_TIME_LR==STD_OFF */ 
#define DEM_CFG_HAVEITER_DIDDATA                                      STD_ON 
#define DEM_CFG_HAVEITER_ENABLECONDITIONGROUPS                        STD_ON 
#define DEM_CFG_HAVEITER_EVENTCBKINITFUNC                             STD_OFF      /* Deactivated due DEM_CFG_INITMONLISTFORFUNC==STD_OFF */ 
#define DEM_CFG_HAVEITER_EVENTCBKSTATUS                               STD_OFF      /* Deactivated due DEM_CFG_EVENTSTATUSCHANGED==STD_OFF */ 
#define DEM_CFG_HAVEITER_EVENTDID                                     STD_ON 
#define DEM_CFG_HAVEITER_EVENTEREC                                    STD_ON 
#define DEM_CFG_HAVEITER_EVENTIDLIST                                  STD_ON 
#define DEM_CFG_HAVEITER_EVENTINDICATOR                               STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF */ 
#define DEM_CFG_HAVEITER_EVENTJ1939NODE                               STD_OFF      /* Deactivated due (DEM_CFG_HAS_J1939_NODE == STD_OFF) */ 
#define DEM_CFG_HAVEITER_EVENTOBDDID                                  STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_WWHOBD==STD_OFF */ 
#define DEM_CFG_HAVEITER_EVENTSPN                                     STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_J1939==STD_OFF */ 
#define DEM_CFG_HAVEITER_EVENTSREC                                    STD_ON 
#define DEM_CFG_HAVEITER_GLOBALCBKDTC                                 STD_OFF      /* Deactivated due DEM_CFG_CALLBACKDTCSTATUSCHANGED==STD_OFF */ 
#define DEM_CFG_HAVEITER_GLOBALCBKJ1939DTC                            STD_OFF      /* Deactivated due DEM_CFG_CALLBACKJ1939DTCSTATUSCHANGED==STD_OFF */ 
#define DEM_CFG_HAVEITER_GLOBALPID                                    STD_ON 
#define DEM_CFG_HAVEITER_OBDFIMFID                                    STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_IUMPR==STD_OFF */ 
#define DEM_CFG_HAVEITER_OBDRATIOID                                   STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_IUMPR==STD_OFF */ 
#define DEM_CFG_HAVEITER_STORAGECONDITIONGROUPS                       STD_OFF      /* Deactivated due (DEM_CFG_HAS_STORAGE_CONDITIONS == STD_OFF) */ 
#define DEM_CFG_HAVEITER_TIMESERIESDIDFAST                            STD_OFF      /* Deactivated due (DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL || DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL || DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST || DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST) == STD_OFF */ 
#define DEM_CFG_HAVEITER_TIMESERIESDIDNORMAL                          STD_OFF      /* Deactivated due (DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL || DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL || DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST || DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST) == STD_OFF */ 

 /*  Event global definitions  */ 
#define DEM_CFG_GLOBAL_DTC_COUNT                                      2U 
#define DEM_CFG_GLOBAL_MIRROR_FIRST                                   0U           /* Lowest EventID with DemEventDestination==DEM_DTC_ORIGIN_MIRROR_MEMORY, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_MIRROR_LAST                                    0U           /* Highest EventID with DemEventDestination==DEM_DTC_ORIGIN_MIRROR_MEMORY, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_PERMANENT_FIRST                                0U           /* Lowest EventID with EventDestination==DEM_CFG_MEMORYID_PERMANENT, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_PERMANENT_LAST                                 0U           /* Highest EventID with EventDestination==DEM_CFG_MEMORYID_PERMANENT, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_PRIMARY_FIRST                                  1U           /* Lowest EventID with DemEventDestination==DEM_DTC_ORIGIN_PRIMARY_MEMORY, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_PRIMARY_LAST                                   211U         /* Highest EventID with DemEventDestination==DEM_DTC_ORIGIN_PRIMARY_MEMORY, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_SECONDARY_FIRST                                0U           /* Lowest EventID with DemEventDestination==DEM_DTC_ORIGIN_SECONDARY_MEMORY, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_SECONDARY_LAST                                 0U           /* Highest EventID with DemEventDestination==DEM_DTC_ORIGIN_SECONDARY_MEMORY, or 0 if no such destination is configured. */ 


 /*  Timebased debouncing - timing constants  */ 
#define DEM_CFG_DEBOUNCE_LO_RES_TIMER_VALUE                           2U           /* Ticks of the low resolution timer, based on Dem_MasterMainFunction() call cycle [100.0ms]. Tick count here equals 150.0ms. */ 


 /*  StorageCondition global definitions  */ 
#define DEM_CFG_GLOBAL_STORAGE_COND_COUNT                             0U           /* (DEM_CFG_HAS_STORAGE_CONDITIONS == STD_OFF) */ 

 /*  Satellite global definitions  */ 
#define DEM_CFG_GLOBAL_PARTITION_COUNT                                1U                               /* Total number of different, referenced /Os/OsApplication containers. */ 
#define DEM_CFG_MASTER_APPLICATION_ID                                 OsApplication_Untrusted_Core0    /* /Dem/DemGeneral/DemMasterOsApplicationRef */ 
#define DEM_SATELLITEINFO_OsApplication_Untrusted_Core0               0x00U                            /* Index of partition "OsApplication_Untrusted_Core0" in SatelliteInfo[] table */ 


 /*  PID global definitions  */ 
#define DEM_CFG_GLOBAL_OBD_IIFFRAW_SIZE                               0U           /* Pure data size of OBD-II record. */ 
#define DEM_CFG_GLOBAL_OBD_IIFFUDS_SIZE                               2U           /* Data size of OBD-II record incl PID numbers (each 2B) plus RecordNumber (1B) plus RecordCount (1B). */ 

 /*  Defines for supporting A2L  */ 
#define DEM_A2L_MAX_NUMBER_PRIMEM_SNAPSHOTS                           1UL 
#define DEM_A2L_MAX_SIZE_PRIMEM_SNAPSHOTS                             2UL 
#define DEM_A2L_NUMBER_OF_EVENTS                                      212UL        /* incl. event #0 */ 
#define DEM_A2L_NUMBER_OF_MIL_GROUPS                                  0UL          /* number of DemMILGroup containers + 1 */ 
#define DEM_A2L_MAX_SIZE_STDENV_RECORD                                0UL          /* largest, configured StdEnvData */ 

 /*  NvRamBlock size configured in the NvM module  */ 
#define DEM_CFG_ADMIN_DATABLOCK_SIZE                                  10U          /* Size of the NvM block (NvM/NvMBlockDescriptor/NvMNvBlockLength) that's referenced via DemNvRamBlockId/DemNvRamBlockIdRef and has DemNvRamBlockId/DemNvRamBlockIdType=DEM_NVBLOCK_ADMIN */ 
#define DEM_CFG_STATUS_DATABLOCK_SIZE                                 430U         /* Size of the NvM block (NvM/NvMBlockDescriptor/NvMNvBlockLength) that's referenced via DemNvRamBlockId/DemNvRamBlockIdRef and has DemNvRamBlockId/DemNvRamBlockIdType=DEM_NVBLOCK_STATUS */ 
#define DEM_CFG_PRIMARY_DATABLOCK_SIZE                                12U          /* Size of the NvM block (NvM/NvMBlockDescriptor/NvMNvBlockLength) that's referenced via DemNvRamBlockId/DemNvRamBlockIdRef and has DemNvRamBlockId/DemNvRamBlockIdType=DEM_NVBLOCK_PRIMARY */ 




 /*  NV block global definitions  */ 
#define DEM_CFG_EVENTAVAILABLEDATATYPE_SIZE                           27U          /* Number of elements in arraytype 'Dem_Cfg_EventAvailableDataType'. */ 
#define DEM_CFG_GLOBAL_NV_BLOCK_COUNT                                 3U           /* Number of NV blocks. */ 
#define DEM_CFG_GLOBAL_PROCESSORWORDS_PER_REPORTEDEVENTSTYPE          7U           /* Number of Dem_Com_ProcessorWordType elements in arraytype 'Dem_Cfg_ReportedEventsType'. */ 
#define DEM_CFG_MAX_J1939_EXP_FF_SIZE                                 0U           /* Data size of the largest configured J1939 FreezeFrame record. */ 
#define DEM_CFG_MAX_J1939_FF_SIZE                                     0U           /* Data size of the largest configured J1939 FreezeFrame record. */ 
#define DEM_CFG_MAX_NUMBER_CONFIGURABLE_DTRS                          0U           /* Maximum number of configurable Dtrs (defined by the largest DemDtrId value, or with PostBuild-Loadable the value /Dem/DemGeneral/DemPostbuild/DemMaxNumberDtr). */ 
#define DEM_CFG_MAX_NUM_EXT_RECORDS                                   1U           /* Largest count of EDR records per event to be stored in ExtendedData[DEM_CFG_MAX_NUM_EXT_RECORDS][DEM_CFG_MAX_SIZE_EXT_RECORD] - ignore records with pure ROM data and/or data having own_variable. '1' if there are 0 records. */ 
#define DEM_CFG_MAX_NUM_SNAPSHOTS                                     1U           /* Largest count of FreezeFrame records per event to be stored in SnapshotData[DEM_CFG_MAX_NUM_SNAPSHOTS][DEM_CFG_MAX_SIZE_SNAPSHOT]. '1' if there are 0 records. */ 
#define DEM_CFG_MAX_SIZE_EXT_RECORD                                   1U           /* Data size of the largest EDR record to be stored in ExtendedData[DEM_CFG_MAX_NUM_EXT_RECORDS][DEM_CFG_MAX_SIZE_EXT_RECORD] or '1' if size is 0. */ 
#define DEM_CFG_MAX_SIZE_OBDFREEZEFRAME                               0U           /* Data size of largest configured FreezeFrame 0 (OBD II) record. */ 
#define DEM_CFG_MAX_SIZE_SNAPSHOT                                     2U           /* Data size of the largest FreezeFrame record to be stored in SnapshotData[DEM_CFG_MAX_NUM_SNAPSHOTS][DEM_CFG_MAX_SIZE_SNAPSHOT] or '1' if size is 0 or there are  0 records. */ 
#define DEM_CFG_MEMORY_ADMIN_INDEX                                    0U           /* Index into Dem_Cfg_MemoryBlockId[], Dem_Cfg_MemoryDataSize[], Dem_Cfg_MemoryDataPtr[] and other Memory*[] arrays. */ 
#define DEM_CFG_MEMORY_PRIMARY_INDEX                                  2U           /* Index into Dem_Cfg_MemoryBlockId[], Dem_Cfg_MemoryDataSize[], Dem_Cfg_MemoryDataPtr[] and other Memory*[] arrays. Buffer count: Dem_Cfg_GlobalPrimarySize() = 1 */ 
#define DEM_CFG_MEMORY_STATUS_INDEX                                   1U           /* Index into Dem_Cfg_MemoryBlockId[], Dem_Cfg_MemoryDataSize[], Dem_Cfg_MemoryDataPtr[] and other Memory*[] arrays. */ 

 /*  GroupOfDTC definition [symbolic name value], use like UDS DTC Number  */ 
#define DemConf_DemGroupOfDTC_DEM_DTC_GROUP_POWERTRAIN_DTCS           0x00000001UL 
#define Dem_DEM_DTC_GROUP_POWERTRAIN_DTCS                             0x00000001UL 
#define DemConf_DemGroupOfDTC_DEM_DTC_GROUP_CHASSIS_DTCS              0x00400000UL 
#define Dem_DEM_DTC_GROUP_CHASSIS_DTCS                                0x00400000UL 
#define DemConf_DemGroupOfDTC_DEM_DTC_GROUP_BODY_DTCS                 0x00800000UL 
#define Dem_DEM_DTC_GROUP_BODY_DTCS                                   0x00800000UL 
#define DemConf_DemGroupOfDTC_DEM_DTC_GROUP_NETWORK_COM_DTCS          0x00C00000UL 
#define Dem_DEM_DTC_GROUP_NETWORK_COM_DTCS                            0x00C00000UL 


 /*  Dem general defines  */ 
#define DEM_CFG_BSW_ERROR_BUFFER_SIZE                                 0U                                /* /Dem/DemGeneral/DemBswErrorBufferSize */ 
#define DEM_CFG_GLOBALCBKCONTROLDTCSETTING_FUNC                       NULL_PTR                          /* DEM_CFG_NOTIFY_CONTROL_DTC_SETTING==STD_OFF */ 
#define DEM_CFG_GLOBALCBKDATA_FUNC                                    NULL_PTR                          /* No ClientServerInterface GeneralCallbackEventDataChanged, DEM_CFG_NOTIFY_GENERAL_DATA==STD_OFF */ 
#define DEM_CFG_GLOBALCBKSTATUS_FUNC                                  NULL_PTR                          /* No ClientServerInterface GeneralCallbackEventUdsStatusChanged, DEM_CFG_NOTIFY_GENERAL_STATUS==STD_OFF */ 
#define DEM_CFG_GLOBALTRIGGERONMONITORSTATUS_FUNC                     NULL_PTR                          /* No or empty /Dem/DemGeneral/DemGeneralCallbackMonitorStatusChangedFnc parameter, DEM_CFG_NOTIFY_GENERAL_MONITORSTATUS_CHANGED==STD_OFF */ 
#define DEM_CFG_GLOBAL_CLEAR_DTC_RUNTIME_LIMIT                        212U                              /* not configured, here substituted by number of events (incl. event #0) */ 
#define DEM_CFG_GLOBAL_DEBOUNCE_STORAGE_EVENT_COUNT                   0U                                /* Number of events with .../DemEventClass/DemDebounceAlgorithClass/DemDebounceCounterBased/DemDebounceCounterStorage == TRUE */ 
#define DEM_CFG_GLOBAL_DTC_FORMAT                                     DEM_DTC_TRANSLATION_ISO14229_1    /* /Dem/DemGeneral/DemTypeOfDTCSupported */ 
#define DEM_CFG_GLOBAL_FREEZEFRAME_SIZE                               0U                                /* /Dem/DemGeneral/DemMaxNumberEventEntryOBDFreezeFrame */ 
#define DEM_CFG_GLOBAL_MIRROR_SIZE                                    0U                                /* /Dem/DemGeneral/DemMaxNumberEventEntryMirror */ 
#define DEM_CFG_GLOBAL_NV_STORAGE_LIMIT                               0U                                /* /Dem/DemGeneral/DemImmediateNvStorageLimit, 0: no limit configured */ 
#define DEM_CFG_GLOBAL_PERMANENT_SIZE                                 0U                                /* /Dem/DemGeneral/DemMaxNumberEventEntryPermanent */ 
#define DEM_CFG_GLOBAL_PRESTORED_FF_SIZE                              0U                                /* /Dem/DemGeneral/DemMaxNumberPrestoredFF, see Dem_Cfg_GlobalPrestorageSize() */ 
#define DEM_CFG_GLOBAL_PRIMARY_SIZE                                   1U                                /* /Dem/DemGeneral/DemMaxNumberEventEntryPrimary */ 
#define DEM_CFG_GLOBAL_SECONDARY_SIZE                                 0U                                /* /Dem/DemGeneral/DemMaxNumberEventEntrySecondary */ 
#define DEM_CFG_GLOBAL_STATUS_MASK                                    0x00U                             /* /Dem/DemGeneral/DemDtcStatusAvailabilityMask */ 
#define DEM_CFG_GLOBAL_TASK_MS                                        100U                              /* /Dem/DemGeneral/DemTaskTime in [ms]. See also macro DEM_CFG_TASK_TIME for exact float value */ 
#define DEM_CFG_GLOBAL_TIMESERIES_SNAPSHOTS_SIZE                      0U                                /* /Dem/DemGeneral/DemMaxNumberTimeSeriesSnapshots */ 
#define DEM_CFG_J1939_NODE_INVALID                                    0U                                /* Invalid NmNode index (Dem internal) */ 
#define DEM_CFG_OEMCBKGETCURRENTODOMETER_FUNC                         NULL_PTR                          /* unused */ 
#define DEM_CFG_OEMCBKGETEXTERNALTESTERSTATUS_FUNC                    NULL_PTR                          /* unused */ 
#define DEM_CFG_RATIOINDEX_INVALID                                    255U                              /* Internal use: no OBD RatioId configured */ 
#define DEM_CFG_SIZEOF_MAX_DATA_VALUE_TYPE                            2U                                /* sizeof(Dem_MaxDataValueType) - typedef is generated by the RTE into Rte_Type.h */ 
#define DEM_CFG_TASK_TIME                                             100.0                             /* /Dem/DemGeneral/DemTaskTime in [ms]. See also macro DEM_CFG_GLOBAL_TASK_MS for integer value. */ 
#define DEM_G_GLOBAL_PRESTORED_EVENT_COUNT                            0U                                /* Number of events with DemEventClass/DemFFPrestorageSupported == TRUE, see Dem_Cfg_GlobalPrestorageEventCount() */ 
#define DEM_G_MAX_NUMBER_J1939_NODES                                  1U                                /* Number of different J1939Nm node targets (=J1939NmNode) referenced via /Dem/DemConfigSet/DemJ1939NodeAddress/DemJ1939NmNodeRef - plus 1 when there are DTCs without a DemJ1939DTC_NodeAddressRef value. */ 
#define DEM_G_NUMBER_OF_EVENTS                                        212U                              /* Total number of DemEventParameter, incl. event #0 */ 
#define DEM_G_NUMBER_OF_RATIO_IDS                                     0U                                /* Number of OBD RatioIds (incl. ID 0, internally used for global values) */ 

 /*  OBD global definitions  */ 
#define DEM_CFG_OBDACCELERATORPEDALINFORMATION_INDEX                  0U           /* not defined */ 
#define DEM_CFG_OBDAMBIENTPRESSURE_INDEX                              0U           /* not defined */ 
#define DEM_CFG_OBDAMBIENTTEMPERATURE_INDEX                           0U           /* not defined */ 
#define DEM_CFG_OBDDISTANCEINFORMATION_INDEX                          0U           /* not defined */ 
#define DEM_CFG_OBDENGINERUNTIME_INDEX                                0U           /* not defined */ 
#define DEM_CFG_OBDENGINESPEED_INDEX                                  0U           /* not defined */ 
#define DEM_CFG_OBDENGINETEMPERATURE_INDEX                            0U           /* not defined */ 
#define DEM_CFG_OBDPROGRAMMINGEVENT_INDEX                             0U           /* not defined */ 
#define DEM_CFG_OBDVEHICLESPEED_INDEX                                 0U           /* not defined */ 

 /*  EnableCondition IDs [symbolic name value]  */ 
#define DemConf_DemEnableCondition___Internal_ControlDtcSetting       0U 

 /*  EnableCondition global definitions  */ 
#define DEM_CFG_GLOBAL_ENABLE_COND_COUNT                              1U           /* (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. */ 

 /*  Client IDs [symbolic name value]  */ 
#define DemConf_DemClient_DemClient                                   0U 
#define Dem_DemClient                                                 0U 

 /*  Client global definitions  */ 
#define DEM_CFG_CLEARDTC_INVALID                                      255U         /* Value used as invalid index in Dem_Cfg_ClientTable[] for the ClearDTCIndex - the Client has no ClearDTC filter. */ 
#define DEM_CFG_DTCSELECTOR_INVALID                                   255U         /* Value used as invalid index in Dem_Cfg_ClientTable[] for the SelectorIndex - the Client has no selector. */ 
#define DEM_CFG_FILTER_INVALID                                        255U         /* Value used as invalid index in Dem_Cfg_ClientTable[] for the FilterIndex - the Client has no filter. */ 
#define DEM_CFG_FREEZEFRAMEITERATOR_INVALID                           255U         /* Value used as invalid index in Dem_Cfg_ClientTable[] for the FreezeFrameIteratorIndex - the Client has no FreezeFrameIterator. */ 
#define DEM_CFG_GLOBAL_CLIENT_COUNT                                   1U           /* Total number of configured /Dem/DemGeneral/DemClient containers. */ 
#define DEM_CFG_NMNODEID_INVALID                                      65535U       /* Value used in Dem_Cfg_ClientTable[] for a Client, that has no J1939NmNode configured in the J1939Dcm. */ 
#define DEM_CFG_NUMBER_OF_CLEARDTCS                                   1U           /* Currently equal to the total number of configured /Dem/DemGeneral/DemClient containers. */ 
#define DEM_CFG_NUMBER_OF_DTCSELECTORS                                1U           /* Currently equal to the total number of configured /Dem/DemGeneral/DemClient containers. */ 
#define DEM_CFG_NUMBER_OF_FILTER                                      1U           /* Currently equal to the total number of configured /Dem/DemGeneral/DemClient containers. */ 
#define DEM_CFG_NUMBER_OF_FREEZEFRAMEITERATORS                        1U           /* Currently equal to the total number of configured /Dem/DemGeneral/DemClient containers. */ 
#define DEM_CFG_NUMBER_OF_READOUTBUFFERS                              1U           /* Currently equal to the total number of configured /Dem/DemGeneral/DemClient containers. */ 
#define DEM_CFG_READOUTBUFFER_INVALID                                 255U         /* Value used as invalid index in Dem_Cfg_ClientTable[] for the ReadoutBufferIndex - the Client has no ReadoutBuffer. */ 




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
  \defgroup  Dem_CfgPCGetConstantDuplicatedRootDataMacros  Dem_Cfg Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define Dem_Cfg_GetAdminDataOfPCConfig()                              Dem_Cfg_AdminData  /**< the pointer to Dem_Cfg_AdminData */
#define Dem_Cfg_GetClearDTCTableOfPCConfig()                          Dem_Cfg_ClearDTCTable  /**< the pointer to Dem_Cfg_ClearDTCTable */
#define Dem_Cfg_GetClientTableOfPCConfig()                            Dem_Cfg_ClientTable  /**< the pointer to Dem_Cfg_ClientTable */
#define Dem_Cfg_GetCommitBufferOfPCConfig()                           Dem_Cfg_CommitBuffer  /**< the pointer to Dem_Cfg_CommitBuffer */
#define Dem_Cfg_GetDTCSelectorTableOfPCConfig()                       Dem_Cfg_DTCSelectorTable  /**< the pointer to Dem_Cfg_DTCSelectorTable */
#define Dem_Cfg_GetDataElementTableOfPCConfig()                       Dem_Cfg_DataElementTable  /**< the pointer to Dem_Cfg_DataElementTable */
#define Dem_Cfg_GetDtcGroupMaskOfPCConfig()                           Dem_Cfg_DtcGroupMask  /**< the pointer to Dem_Cfg_DtcGroupMask */
#define Dem_Cfg_GetDtcTableOfPCConfig()                               Dem_Cfg_DtcTable  /**< the pointer to Dem_Cfg_DtcTable */
#define Dem_Cfg_GetEnableConditionInitTableOfPCConfig()               Dem_Cfg_EnableConditionInitTable  /**< the pointer to Dem_Cfg_EnableConditionInitTable */
#define Dem_Cfg_GetEnableConditionStateOfPCConfig()                   Dem_Cfg_EnableConditionState  /**< the pointer to Dem_Cfg_EnableConditionState */
#define Dem_Cfg_GetEventAvailableInVariantOfPCConfig()                Dem_Cfg_EventAvailableInVariant  /**< the pointer to Dem_Cfg_EventAvailableInVariant */
#define Dem_Cfg_GetEventDebounceValueOfPCConfig()                     Dem_Cfg_EventDebounceValue  /**< the pointer to Dem_Cfg_EventDebounceValue */
#define Dem_Cfg_GetEventInternalStatusOfPCConfig()                    Dem_Cfg_EventInternalStatus  /**< the pointer to Dem_Cfg_EventInternalStatus */
#define Dem_Cfg_GetEventTableIndOfPCConfig()                          Dem_Cfg_EventTableInd  /**< the pointer to Dem_Cfg_EventTableInd */
#define Dem_Cfg_GetFilterInfoTableOfPCConfig()                        Dem_Cfg_FilterInfoTable  /**< the pointer to Dem_Cfg_FilterInfoTable */
#define Dem_Cfg_GetFreezeFrameIteratorTableOfPCConfig()               Dem_Cfg_FreezeFrameIteratorTable  /**< the pointer to Dem_Cfg_FreezeFrameIteratorTable */
#define Dem_Cfg_GetFreezeFrameNumTableOfPCConfig()                    Dem_Cfg_FreezeFrameNumTable  /**< the pointer to Dem_Cfg_FreezeFrameNumTable */
#define Dem_Cfg_GetGeneralObdInputOfPCConfig()                        Dem_Cfg_GeneralObdInput  /**< the pointer to Dem_Cfg_GeneralObdInput */
#define Dem_Cfg_GetMemoryBlockIdOfPCConfig()                          Dem_Cfg_MemoryBlockId  /**< the pointer to Dem_Cfg_MemoryBlockId */
#define Dem_Cfg_GetMemoryCommitNumberOfPCConfig()                     Dem_Cfg_MemoryCommitNumber  /**< the pointer to Dem_Cfg_MemoryCommitNumber */
#define Dem_Cfg_GetMemoryDataPtrOfPCConfig()                          Dem_Cfg_MemoryDataPtr  /**< the pointer to Dem_Cfg_MemoryDataPtr */
#define Dem_Cfg_GetMemoryDataSizeOfPCConfig()                         Dem_Cfg_MemoryDataSize  /**< the pointer to Dem_Cfg_MemoryDataSize */
#define Dem_Cfg_GetMemoryEntryInitOfPCConfig()                        Dem_Cfg_MemoryEntryInit  /**< the pointer to Dem_Cfg_MemoryEntryInit */
#define Dem_Cfg_GetMemoryEntryOfPCConfig()                            Dem_Cfg_MemoryEntry  /**< the pointer to Dem_Cfg_MemoryEntry */
#define Dem_Cfg_GetMemoryStatusOfPCConfig()                           Dem_Cfg_MemoryStatus  /**< the pointer to Dem_Cfg_MemoryStatus */
#define Dem_Cfg_GetPrimaryChronologyOfPCConfig()                      Dem_Cfg_PrimaryChronology  /**< the pointer to Dem_Cfg_PrimaryChronology */
#define Dem_Cfg_GetPrimaryEntry_0OfPCConfig()                         Dem_Cfg_PrimaryEntry_0  /**< the pointer to Dem_Cfg_PrimaryEntry_0 */
#define Dem_Cfg_GetReadoutBufferOfPCConfig()                          Dem_Cfg_ReadoutBuffer  /**< the pointer to Dem_Cfg_ReadoutBuffer */
#define Dem_Cfg_GetReportedEventsOfFilterOfPCConfig()                 Dem_Cfg_ReportedEventsOfFilter  /**< the pointer to Dem_Cfg_ReportedEventsOfFilter */
#define Dem_Cfg_GetSatelliteInfoOfPCConfig()                          Dem_Cfg_SatelliteInfo  /**< the pointer to Dem_Cfg_SatelliteInfo */
#define Dem_Cfg_GetSatelliteInfoOsApplication_Untrusted_Core0OfPCConfig() Dem_Cfg_SatelliteInfoOsApplication_Untrusted_Core0  /**< the pointer to Dem_Cfg_SatelliteInfoOsApplication_Untrusted_Core0 */
#define Dem_Cfg_GetSizeOfClearDTCTableOfPCConfig()                    1U  /**< the number of accomplishable value elements in Dem_Cfg_ClearDTCTable */
#define Dem_Cfg_GetSizeOfClientTableOfPCConfig()                      1U  /**< the number of accomplishable value elements in Dem_Cfg_ClientTable */
#define Dem_Cfg_GetSizeOfDTCSelectorTableOfPCConfig()                 1U  /**< the number of accomplishable value elements in Dem_Cfg_DTCSelectorTable */
#define Dem_Cfg_GetSizeOfDataElementTableOfPCConfig()                 2U  /**< the number of accomplishable value elements in Dem_Cfg_DataElementTable */
#define Dem_Cfg_GetSizeOfDtcGroupMaskOfPCConfig()                     4U  /**< the number of accomplishable value elements in Dem_Cfg_DtcGroupMask */
#define Dem_Cfg_GetSizeOfEnableConditionTableOfPCConfig()             1U  /**< the number of accomplishable value elements in Dem_Cfg_EnableConditionTable */
#define Dem_Cfg_GetSizeOfEventTableOfPCConfig()                       212U  /**< the number of accomplishable value elements in Dem_Cfg_EventTable */
#define Dem_Cfg_GetSizeOfFilterInfoTableOfPCConfig()                  1U  /**< the number of accomplishable value elements in Dem_Cfg_FilterInfoTable */
#define Dem_Cfg_GetSizeOfFreezeFrameIteratorTableOfPCConfig()         1U  /**< the number of accomplishable value elements in Dem_Cfg_FreezeFrameIteratorTable */
#define Dem_Cfg_GetSizeOfMemoryCommitNumberOfPCConfig()               3U  /**< the number of accomplishable value elements in Dem_Cfg_MemoryCommitNumber */
#define Dem_Cfg_GetSizeOfMemoryEntryOfPCConfig()                      2U  /**< the number of accomplishable value elements in Dem_Cfg_MemoryEntry */
#define Dem_Cfg_GetSizeOfMemoryStatusOfPCConfig()                     3U  /**< the number of accomplishable value elements in Dem_Cfg_MemoryStatus */
#define Dem_Cfg_GetSizeOfPrimaryChronologyOfPCConfig()                1U  /**< the number of accomplishable value elements in Dem_Cfg_PrimaryChronology */
#define Dem_Cfg_GetSizeOfReadoutBufferOfPCConfig()                    1U  /**< the number of accomplishable value elements in Dem_Cfg_ReadoutBuffer */
#define Dem_Cfg_GetSizeOfReportedEventsOfFilterOfPCConfig()           1U  /**< the number of accomplishable value elements in Dem_Cfg_ReportedEventsOfFilter */
#define Dem_Cfg_GetSizeOfSatelliteInfoOfPCConfig()                    1U  /**< the number of accomplishable value elements in Dem_Cfg_SatelliteInfo */
#define Dem_Cfg_GetStatusDataOfPCConfig()                             Dem_Cfg_StatusData  /**< the pointer to Dem_Cfg_StatusData */
#define Dem_Cfg_GetTimeSeriesEntryInitOfPCConfig()                    Dem_Cfg_TimeSeriesEntryInit  /**< the pointer to Dem_Cfg_TimeSeriesEntryInit */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGetDuplicatedRootDataMacros  Dem_Cfg Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define Dem_Cfg_GetSizeOfEnableConditionStateOfPCConfig()             Dem_Cfg_GetSizeOfEnableConditionTableOfPCConfig()  /**< the number of accomplishable value elements in Dem_Cfg_EnableConditionState */
#define Dem_Cfg_GetSizeOfEventDebounceValueOfPCConfig()               Dem_Cfg_GetSizeOfEventTableOfPCConfig()  /**< the number of accomplishable value elements in Dem_Cfg_EventDebounceValue */
#define Dem_Cfg_GetSizeOfEventInternalStatusOfPCConfig()              Dem_Cfg_GetSizeOfEventTableOfPCConfig()  /**< the number of accomplishable value elements in Dem_Cfg_EventInternalStatus */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGetDataMacros  Dem_Cfg Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define Dem_Cfg_GetAdminData()                                        (Dem_Cfg_GetAdminDataOfPCConfig())
#define Dem_Cfg_GetClearDTCTable(Index)                               (Dem_Cfg_GetClearDTCTableOfPCConfig()[(Index)])
#define Dem_Cfg_GetCommitBuffer()                                     (Dem_Cfg_GetCommitBufferOfPCConfig())
#define Dem_Cfg_GetDTCSelectorTable(Index)                            (Dem_Cfg_GetDTCSelectorTableOfPCConfig()[(Index)])
#define Dem_Cfg_GetElementKindOfDataElementTable(Index)               (Dem_Cfg_GetDataElementTableOfPCConfig()[(Index)].ElementKindOfDataElementTable)
#define Dem_Cfg_GetElementSizeOfDataElementTable(Index)               (Dem_Cfg_GetDataElementTableOfPCConfig()[(Index)].ElementSizeOfDataElementTable)
#define Dem_Cfg_GetReadDataFuncOfDataElementTable(Index)              (Dem_Cfg_GetDataElementTableOfPCConfig()[(Index)].ReadDataFuncOfDataElementTable)
#define Dem_Cfg_GetGroupMaskOfDtcGroupMask(Index)                     (Dem_Cfg_GetDtcGroupMaskOfPCConfig()[(Index)].GroupMaskOfDtcGroupMask)
#define Dem_Cfg_GetUdsGroupDtcOfDtcGroupMask(Index)                   (Dem_Cfg_GetDtcGroupMaskOfPCConfig()[(Index)].UdsGroupDtcOfDtcGroupMask)
#define Dem_Cfg_GetFunctionalUnitOfDtcTable(Index)                    (Dem_Cfg_GetDtcTableOfPCConfig()[(Index)].FunctionalUnitOfDtcTable)
#define Dem_Cfg_GetEnableConditionState(Index)                        (Dem_Cfg_GetEnableConditionStateOfPCConfig()[(Index)])
#define Dem_Cfg_GetEventDebounceValue(Index)                          (Dem_Cfg_GetEventDebounceValueOfPCConfig()[(Index)])
#define Dem_Cfg_GetEventInternalStatus(Index)                         (Dem_Cfg_GetEventInternalStatusOfPCConfig()[(Index)])
#define Dem_Cfg_GetFilterInfoTable(Index)                             (Dem_Cfg_GetFilterInfoTableOfPCConfig()[(Index)])
#define Dem_Cfg_GetFreezeFrameIteratorTable(Index)                    (Dem_Cfg_GetFreezeFrameIteratorTableOfPCConfig()[(Index)])
#define Dem_Cfg_GetMemoryBlockId(Index)                               (Dem_Cfg_GetMemoryBlockIdOfPCConfig()[(Index)])
#define Dem_Cfg_GetMemoryCommitNumber(Index)                          (Dem_Cfg_GetMemoryCommitNumberOfPCConfig()[(Index)])
#define Dem_Cfg_GetMemoryDataPtr(Index)                               (Dem_Cfg_GetMemoryDataPtrOfPCConfig()[(Index)])
#define Dem_Cfg_GetMemoryDataSize(Index)                              (Dem_Cfg_GetMemoryDataSizeOfPCConfig()[(Index)])
#define Dem_Cfg_GetMemoryEntry(Index)                                 (Dem_Cfg_GetMemoryEntryOfPCConfig()[(Index)])
#define Dem_Cfg_GetMemoryEntryInit()                                  (Dem_Cfg_GetMemoryEntryInitOfPCConfig())
#define Dem_Cfg_GetMemoryStatus(Index)                                (Dem_Cfg_GetMemoryStatusOfPCConfig()[(Index)])
#define Dem_Cfg_GetPrimaryChronology(Index)                           (Dem_Cfg_GetPrimaryChronologyOfPCConfig()[(Index)])
#define Dem_Cfg_GetPrimaryEntry_0()                                   (Dem_Cfg_GetPrimaryEntry_0OfPCConfig())
#define Dem_Cfg_GetReadoutBuffer(Index)                               (Dem_Cfg_GetReadoutBufferOfPCConfig()[(Index)])
#define Dem_Cfg_GetReportedEventsOfFilter(Index)                      (Dem_Cfg_GetReportedEventsOfFilterOfPCConfig()[(Index)])
#define Dem_Cfg_GetSatelliteInfoOsApplication_Untrusted_Core0()       (Dem_Cfg_GetSatelliteInfoOsApplication_Untrusted_Core0OfPCConfig())
#define Dem_Cfg_GetStatusData()                                       (Dem_Cfg_GetStatusDataOfPCConfig())
#define Dem_Cfg_GetTimeSeriesEntryInit()                              (Dem_Cfg_GetTimeSeriesEntryInitOfPCConfig())
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGetDeduplicatedDataMacros  Dem_Cfg Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define Dem_Cfg_GetClearDTCIndexOfClientTable(Index)                  0U  /**< 'DEM_CFG_CLEARDTC_INVALID'(=255): no ClearDTC for the Client, else: index in Dem_Cfg_ClearDTCTable[] */
#define Dem_Cfg_GetFilterIndexOfClientTable(Index)                    0U  /**< 'DEM_CFG_FILTER_INVALID'(=255): no filter for the Client, else: index in Dem_Cfg_FilterInfoTable[] */
#define Dem_Cfg_GetFreezeFrameIteratorIndexOfClientTable(Index)       0U  /**< 'DEM_CFG_FREEZEFRAMEITERATOR_INVALID'(=255): no FreezeFrameIterator for the Client, else: index in Dem_Cfg_FreezeFrameIteratorTable[] */
#define Dem_Cfg_GetReadoutBufferIndexOfClientTable(Index)             0U  /**< 'DEM_CFG_READOUTBUFFER_INVALID'(=255): no ReadoutBuffer for the Client, else: index in Dem_Cfg_ReadoutBuffer[] */
#define Dem_Cfg_GetSelectorIndexOfClientTable(Index)                  0U  /**< 'DEM_CFG_DTCSELECTOR_INVALID'(=255): no selector for the Client, else: index in Dem_Cfg_DTCSelectorTable[] */
#define Dem_Cfg_IsDataIsStoredInNVOfDataElementTable(Index)           (((boolean)(Dem_Cfg_GetElementSizeOfDataElementTable(Index) == 2U)) != FALSE)
#define Dem_Cfg_GetDtcSeverityOfDtcTable(Index)                       0U  /**< DTC severity and DTCClass information - used with UDS services 19 08 and 19 09. */
#define Dem_Cfg_IsImmediateNvStorageOfDtcTable(Index)                 (((FALSE)) != FALSE)  /**< Write strategy for non-volatile storage of data. True: with each DTC data change, false: only at ECU shutdown. */
#define Dem_Cfg_GetInitValueOfEnableConditionInitTable(Index)         1U  /**< Initial value: '0' condition is in state 'disable', '1' condition is in state 'enable' */
#define Dem_Cfg_IsEventAvailableInVariant(Index)                      (((TRUE)) != FALSE)
#define Dem_Cfg_GetEventTableInd(Index)                               ((Dem_Cfg_EventTableIndType)((Index)))  /**< the indexes of the 1:1 sorted relation pointing to Dem_Cfg_EventTable */
#define Dem_Cfg_GetFFNumberOfFreezeFrameNumTable(Index)               1U
#define Dem_Cfg_GetFFTriggerOfFreezeFrameNumTable(Index)              DEM_CFG_TRIGGER_TESTFAILED
#define Dem_Cfg_IsFFUpdateOfFreezeFrameNumTable(Index)                (((FALSE)) != FALSE)
#define Dem_Cfg_GetDataElementTableIdxOfGeneralObdInput(Index)        0U  /**< the index of the 1:1 relation pointing to Dem_Cfg_DataElementTable */
#define Dem_Cfg_GetApplicationIdOfSatelliteInfo(Index)                OsApplication_Untrusted_Core0  /**< Partition (OsApplication identifier) of the satellite. */
#define Dem_Cfg_GetEventCountOfSatelliteInfo(Index)                   212U  /**< Satellite individual size of the monitor/event data RAM buffer */
#define Dem_Cfg_GetEventTableIndEndIdxOfSatelliteInfo(Index)          212U  /**< the end index of the 0:n relation pointing to Dem_Cfg_EventTableInd */
#define Dem_Cfg_GetEventTableIndStartIdxOfSatelliteInfo(Index)        0U  /**< the start index of the 0:n relation pointing to Dem_Cfg_EventTableInd */
#define Dem_Cfg_IsEventTableIndUsedOfSatelliteInfo(Index)             (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Dem_Cfg_EventTableInd */
#define Dem_Cfg_GetSatelliteDataOfSatelliteInfo(Index)                &Dem_Cfg_GetSatelliteInfoOsApplication_Untrusted_Core0().SatelliteData[0]  /**< Satellite individual RAM buffer 1 for the monitor/event data */
#define Dem_Cfg_GetSatelliteStatusOfSatelliteInfo(Index)              &Dem_Cfg_GetSatelliteInfoOsApplication_Untrusted_Core0().SatelliteStatus  /**< Satellite individual RAM buffer for the monitor/event status */
#define Dem_Cfg_GetSizeOfClearDTCTable()                              Dem_Cfg_GetSizeOfClearDTCTableOfPCConfig()
#define Dem_Cfg_GetSizeOfClientTable()                                Dem_Cfg_GetSizeOfClientTableOfPCConfig()
#define Dem_Cfg_GetSizeOfDTCSelectorTable()                           Dem_Cfg_GetSizeOfDTCSelectorTableOfPCConfig()
#define Dem_Cfg_GetSizeOfDataElementTable()                           Dem_Cfg_GetSizeOfDataElementTableOfPCConfig()
#define Dem_Cfg_GetSizeOfDtcGroupMask()                               Dem_Cfg_GetSizeOfDtcGroupMaskOfPCConfig()
#define Dem_Cfg_GetSizeOfEnableConditionState()                       Dem_Cfg_GetSizeOfEnableConditionStateOfPCConfig()
#define Dem_Cfg_GetSizeOfEnableConditionTable()                       Dem_Cfg_GetSizeOfEnableConditionTableOfPCConfig()
#define Dem_Cfg_GetSizeOfEventDebounceValue()                         Dem_Cfg_GetSizeOfEventDebounceValueOfPCConfig()
#define Dem_Cfg_GetSizeOfEventInternalStatus()                        Dem_Cfg_GetSizeOfEventInternalStatusOfPCConfig()
#define Dem_Cfg_GetSizeOfEventTable()                                 Dem_Cfg_GetSizeOfEventTableOfPCConfig()
#define Dem_Cfg_GetSizeOfFilterInfoTable()                            Dem_Cfg_GetSizeOfFilterInfoTableOfPCConfig()
#define Dem_Cfg_GetSizeOfFreezeFrameIteratorTable()                   Dem_Cfg_GetSizeOfFreezeFrameIteratorTableOfPCConfig()
#define Dem_Cfg_GetSizeOfMemoryCommitNumber()                         Dem_Cfg_GetSizeOfMemoryCommitNumberOfPCConfig()
#define Dem_Cfg_GetSizeOfMemoryEntry()                                Dem_Cfg_GetSizeOfMemoryEntryOfPCConfig()
#define Dem_Cfg_GetSizeOfMemoryStatus()                               Dem_Cfg_GetSizeOfMemoryStatusOfPCConfig()
#define Dem_Cfg_GetSizeOfPrimaryChronology()                          Dem_Cfg_GetSizeOfPrimaryChronologyOfPCConfig()
#define Dem_Cfg_GetSizeOfReadoutBuffer()                              Dem_Cfg_GetSizeOfReadoutBufferOfPCConfig()
#define Dem_Cfg_GetSizeOfReportedEventsOfFilter()                     Dem_Cfg_GetSizeOfReportedEventsOfFilterOfPCConfig()
#define Dem_Cfg_GetSizeOfSatelliteInfo()                              Dem_Cfg_GetSizeOfSatelliteInfoOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCSetDataMacros  Dem_Cfg Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define Dem_Cfg_SetAdminData(Value)                                   Dem_Cfg_GetAdminDataOfPCConfig() = (Value)
#define Dem_Cfg_SetClearDTCTable(Index, Value)                        Dem_Cfg_GetClearDTCTableOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetCommitBuffer(Value)                                Dem_Cfg_GetCommitBufferOfPCConfig() = (Value)
#define Dem_Cfg_SetDTCSelectorTable(Index, Value)                     Dem_Cfg_GetDTCSelectorTableOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetEnableConditionState(Index, Value)                 Dem_Cfg_GetEnableConditionStateOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetEventDebounceValue(Index, Value)                   Dem_Cfg_GetEventDebounceValueOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetEventInternalStatus(Index, Value)                  Dem_Cfg_GetEventInternalStatusOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetFilterInfoTable(Index, Value)                      Dem_Cfg_GetFilterInfoTableOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetFreezeFrameIteratorTable(Index, Value)             Dem_Cfg_GetFreezeFrameIteratorTableOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetMemoryCommitNumber(Index, Value)                   Dem_Cfg_GetMemoryCommitNumberOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetMemoryStatus(Index, Value)                         Dem_Cfg_GetMemoryStatusOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetPrimaryChronology(Index, Value)                    Dem_Cfg_GetPrimaryChronologyOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetPrimaryEntry_0(Value)                              Dem_Cfg_GetPrimaryEntry_0OfPCConfig() = (Value)
#define Dem_Cfg_SetReadoutBuffer(Index, Value)                        Dem_Cfg_GetReadoutBufferOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetReportedEventsOfFilter(Index, Value)               Dem_Cfg_GetReportedEventsOfFilterOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetSatelliteInfoOsApplication_Untrusted_Core0(Value)  Dem_Cfg_GetSatelliteInfoOsApplication_Untrusted_Core0OfPCConfig() = (Value)
#define Dem_Cfg_SetStatusData(Value)                                  Dem_Cfg_GetStatusDataOfPCConfig() = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGetAddressOfDataMacros  Dem_Cfg Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define Dem_Cfg_GetAddrClearDTCTable(Index)                           &Dem_Cfg_GetClearDTCTable(Index)
#define Dem_Cfg_GetAddrDTCSelectorTable(Index)                        &Dem_Cfg_GetDTCSelectorTable(Index)
#define Dem_Cfg_GetAddrEnableConditionState(Index)                    &Dem_Cfg_GetEnableConditionState(Index)
#define Dem_Cfg_GetAddrEventDebounceValue(Index)                      &Dem_Cfg_GetEventDebounceValue(Index)
#define Dem_Cfg_GetAddrEventInternalStatus(Index)                     &Dem_Cfg_GetEventInternalStatus(Index)
#define Dem_Cfg_GetAddrFilterInfoTable(Index)                         &Dem_Cfg_GetFilterInfoTable(Index)
#define Dem_Cfg_GetAddrFreezeFrameIteratorTable(Index)                &Dem_Cfg_GetFreezeFrameIteratorTable(Index)
#define Dem_Cfg_GetAddrMemoryCommitNumber(Index)                      &Dem_Cfg_GetMemoryCommitNumber(Index)
#define Dem_Cfg_GetAddrMemoryStatus(Index)                            &Dem_Cfg_GetMemoryStatus(Index)
#define Dem_Cfg_GetAddrPrimaryChronology(Index)                       &Dem_Cfg_GetPrimaryChronology(Index)
#define Dem_Cfg_GetAddrReadoutBuffer(Index)                           &Dem_Cfg_GetReadoutBuffer(Index)
#define Dem_Cfg_GetAddrReportedEventsOfFilter(Index)                  &Dem_Cfg_GetReportedEventsOfFilter(Index)
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCHasMacros  Dem_Cfg Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Dem_Cfg_HasAdminData()                                        (TRUE != FALSE)
#define Dem_Cfg_HasClearDTCTable()                                    (TRUE != FALSE)
#define Dem_Cfg_HasClientTable()                                      (TRUE != FALSE)
#define Dem_Cfg_HasClearDTCIndexOfClientTable()                       (TRUE != FALSE)
#define Dem_Cfg_HasFilterIndexOfClientTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameIteratorIndexOfClientTable()            (TRUE != FALSE)
#define Dem_Cfg_HasReadoutBufferIndexOfClientTable()                  (TRUE != FALSE)
#define Dem_Cfg_HasSelectorIndexOfClientTable()                       (TRUE != FALSE)
#define Dem_Cfg_HasCommitBuffer()                                     (TRUE != FALSE)
#define Dem_Cfg_HasDTCSelectorTable()                                 (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTable()                                 (TRUE != FALSE)
#define Dem_Cfg_HasDataIsStoredInNVOfDataElementTable()               (TRUE != FALSE)
#define Dem_Cfg_HasElementKindOfDataElementTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasElementSizeOfDataElementTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasReadDataFuncOfDataElementTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasDtcGroupMask()                                     (TRUE != FALSE)
#define Dem_Cfg_HasGroupMaskOfDtcGroupMask()                          (TRUE != FALSE)
#define Dem_Cfg_HasUdsGroupDtcOfDtcGroupMask()                        (TRUE != FALSE)
#define Dem_Cfg_HasDtcTable()                                         (TRUE != FALSE)
#define Dem_Cfg_HasDtcSeverityOfDtcTable()                            (TRUE != FALSE)
#define Dem_Cfg_HasFunctionalUnitOfDtcTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasImmediateNvStorageOfDtcTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionInitTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasInitValueOfEnableConditionInitTable()              (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionState()                             (TRUE != FALSE)
#define Dem_Cfg_HasEventAvailableInVariant()                          (TRUE != FALSE)
#define Dem_Cfg_HasEventDebounceValue()                               (TRUE != FALSE)
#define Dem_Cfg_HasEventInternalStatus()                              (TRUE != FALSE)
#define Dem_Cfg_HasEventTableInd()                                    (TRUE != FALSE)
#define Dem_Cfg_HasFilterInfoTable()                                  (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameIteratorTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameNumTable()                              (TRUE != FALSE)
#define Dem_Cfg_HasFFNumberOfFreezeFrameNumTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasFFTriggerOfFreezeFrameNumTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasFFUpdateOfFreezeFrameNumTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasGeneralObdInput()                                  (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableIdxOfGeneralObdInput()             (TRUE != FALSE)
#define Dem_Cfg_HasMemoryBlockId()                                    (TRUE != FALSE)
#define Dem_Cfg_HasMemoryCommitNumber()                               (TRUE != FALSE)
#define Dem_Cfg_HasMemoryDataPtr()                                    (TRUE != FALSE)
#define Dem_Cfg_HasMemoryDataSize()                                   (TRUE != FALSE)
#define Dem_Cfg_HasMemoryEntry()                                      (TRUE != FALSE)
#define Dem_Cfg_HasMemoryEntryInit()                                  (TRUE != FALSE)
#define Dem_Cfg_HasMemoryStatus()                                     (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryChronology()                                (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_0()                                   (TRUE != FALSE)
#define Dem_Cfg_HasReadoutBuffer()                                    (TRUE != FALSE)
#define Dem_Cfg_HasReportedEventsOfFilter()                           (TRUE != FALSE)
#define Dem_Cfg_HasSatelliteInfo()                                    (TRUE != FALSE)
#define Dem_Cfg_HasApplicationIdOfSatelliteInfo()                     (TRUE != FALSE)
#define Dem_Cfg_HasEventCountOfSatelliteInfo()                        (TRUE != FALSE)
#define Dem_Cfg_HasEventTableIndEndIdxOfSatelliteInfo()               (TRUE != FALSE)
#define Dem_Cfg_HasEventTableIndStartIdxOfSatelliteInfo()             (TRUE != FALSE)
#define Dem_Cfg_HasEventTableIndUsedOfSatelliteInfo()                 (TRUE != FALSE)
#define Dem_Cfg_HasSatelliteDataOfSatelliteInfo()                     (TRUE != FALSE)
#define Dem_Cfg_HasSatelliteStatusOfSatelliteInfo()                   (TRUE != FALSE)
#define Dem_Cfg_HasSatelliteInfoOsApplication_Untrusted_Core0()       (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfClearDTCTable()                              (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfClientTable()                                (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfDTCSelectorTable()                           (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfDataElementTable()                           (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfDtcGroupMask()                               (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEnableConditionState()                       (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEnableConditionTable()                       (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventDebounceValue()                         (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventInternalStatus()                        (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventTable()                                 (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfFilterInfoTable()                            (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfFreezeFrameIteratorTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfMemoryCommitNumber()                         (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfMemoryEntry()                                (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfMemoryStatus()                               (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfPrimaryChronology()                          (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfReadoutBuffer()                              (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfReportedEventsOfFilter()                     (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfSatelliteInfo()                              (TRUE != FALSE)
#define Dem_Cfg_HasStatusData()                                       (TRUE != FALSE)
#define Dem_Cfg_HasTimeSeriesEntryInit()                              (TRUE != FALSE)
#define Dem_HasPCConfig()                                             (TRUE != FALSE)
#define Dem_Cfg_HasAdminDataOfPCConfig()                              (TRUE != FALSE)
#define Dem_Cfg_HasClearDTCTableOfPCConfig()                          (TRUE != FALSE)
#define Dem_Cfg_HasClientTableOfPCConfig()                            (TRUE != FALSE)
#define Dem_Cfg_HasCommitBufferOfPCConfig()                           (TRUE != FALSE)
#define Dem_Cfg_HasDTCSelectorTableOfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableOfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasDtcGroupMaskOfPCConfig()                           (TRUE != FALSE)
#define Dem_Cfg_HasDtcTableOfPCConfig()                               (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionInitTableOfPCConfig()               (TRUE != FALSE)
#define Dem_Cfg_HasEnableConditionStateOfPCConfig()                   (TRUE != FALSE)
#define Dem_Cfg_HasEventAvailableInVariantOfPCConfig()                (TRUE != FALSE)
#define Dem_Cfg_HasEventDebounceValueOfPCConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasEventInternalStatusOfPCConfig()                    (TRUE != FALSE)
#define Dem_Cfg_HasEventTableIndOfPCConfig()                          (TRUE != FALSE)
#define Dem_Cfg_HasFilterInfoTableOfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameIteratorTableOfPCConfig()               (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameNumTableOfPCConfig()                    (TRUE != FALSE)
#define Dem_Cfg_HasGeneralObdInputOfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasMemoryBlockIdOfPCConfig()                          (TRUE != FALSE)
#define Dem_Cfg_HasMemoryCommitNumberOfPCConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasMemoryDataPtrOfPCConfig()                          (TRUE != FALSE)
#define Dem_Cfg_HasMemoryDataSizeOfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasMemoryEntryInitOfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasMemoryEntryOfPCConfig()                            (TRUE != FALSE)
#define Dem_Cfg_HasMemoryStatusOfPCConfig()                           (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryChronologyOfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_0OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasReadoutBufferOfPCConfig()                          (TRUE != FALSE)
#define Dem_Cfg_HasReportedEventsOfFilterOfPCConfig()                 (TRUE != FALSE)
#define Dem_Cfg_HasSatelliteInfoOfPCConfig()                          (TRUE != FALSE)
#define Dem_Cfg_HasSatelliteInfoOsApplication_Untrusted_Core0OfPCConfig() (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfClearDTCTableOfPCConfig()                    (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfClientTableOfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfDTCSelectorTableOfPCConfig()                 (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfDataElementTableOfPCConfig()                 (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfDtcGroupMaskOfPCConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEnableConditionStateOfPCConfig()             (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEnableConditionTableOfPCConfig()             (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventDebounceValueOfPCConfig()               (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventInternalStatusOfPCConfig()              (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventTableOfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfFilterInfoTableOfPCConfig()                  (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfFreezeFrameIteratorTableOfPCConfig()         (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfMemoryCommitNumberOfPCConfig()               (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfMemoryEntryOfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfMemoryStatusOfPCConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfPrimaryChronologyOfPCConfig()                (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfReadoutBufferOfPCConfig()                    (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfReportedEventsOfFilterOfPCConfig()           (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfSatelliteInfoOfPCConfig()                    (TRUE != FALSE)
#define Dem_Cfg_HasStatusDataOfPCConfig()                             (TRUE != FALSE)
#define Dem_Cfg_HasTimeSeriesEntryInitOfPCConfig()                    (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCIncrementDataMacros  Dem_Cfg Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define Dem_Cfg_IncAdminData()                                        Dem_Cfg_GetAdminData()++
#define Dem_Cfg_IncClearDTCTable(Index)                               Dem_Cfg_GetClearDTCTable(Index)++
#define Dem_Cfg_IncCommitBuffer()                                     Dem_Cfg_GetCommitBuffer()++
#define Dem_Cfg_IncDTCSelectorTable(Index)                            Dem_Cfg_GetDTCSelectorTable(Index)++
#define Dem_Cfg_IncEnableConditionState(Index)                        Dem_Cfg_GetEnableConditionState(Index)++
#define Dem_Cfg_IncEventDebounceValue(Index)                          Dem_Cfg_GetEventDebounceValue(Index)++
#define Dem_Cfg_IncEventInternalStatus(Index)                         Dem_Cfg_GetEventInternalStatus(Index)++
#define Dem_Cfg_IncFilterInfoTable(Index)                             Dem_Cfg_GetFilterInfoTable(Index)++
#define Dem_Cfg_IncFreezeFrameIteratorTable(Index)                    Dem_Cfg_GetFreezeFrameIteratorTable(Index)++
#define Dem_Cfg_IncMemoryCommitNumber(Index)                          Dem_Cfg_GetMemoryCommitNumber(Index)++
#define Dem_Cfg_IncMemoryStatus(Index)                                Dem_Cfg_GetMemoryStatus(Index)++
#define Dem_Cfg_IncPrimaryChronology(Index)                           Dem_Cfg_GetPrimaryChronology(Index)++
#define Dem_Cfg_IncPrimaryEntry_0()                                   Dem_Cfg_GetPrimaryEntry_0()++
#define Dem_Cfg_IncReadoutBuffer(Index)                               Dem_Cfg_GetReadoutBuffer(Index)++
#define Dem_Cfg_IncReportedEventsOfFilter(Index)                      Dem_Cfg_GetReportedEventsOfFilter(Index)++
#define Dem_Cfg_IncSatelliteInfoOsApplication_Untrusted_Core0()       Dem_Cfg_GetSatelliteInfoOsApplication_Untrusted_Core0()++
#define Dem_Cfg_IncStatusData()                                       Dem_Cfg_GetStatusData()++
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCDecrementDataMacros  Dem_Cfg Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define Dem_Cfg_DecAdminData()                                        Dem_Cfg_GetAdminData()--
#define Dem_Cfg_DecClearDTCTable(Index)                               Dem_Cfg_GetClearDTCTable(Index)--
#define Dem_Cfg_DecCommitBuffer()                                     Dem_Cfg_GetCommitBuffer()--
#define Dem_Cfg_DecDTCSelectorTable(Index)                            Dem_Cfg_GetDTCSelectorTable(Index)--
#define Dem_Cfg_DecEnableConditionState(Index)                        Dem_Cfg_GetEnableConditionState(Index)--
#define Dem_Cfg_DecEventDebounceValue(Index)                          Dem_Cfg_GetEventDebounceValue(Index)--
#define Dem_Cfg_DecEventInternalStatus(Index)                         Dem_Cfg_GetEventInternalStatus(Index)--
#define Dem_Cfg_DecFilterInfoTable(Index)                             Dem_Cfg_GetFilterInfoTable(Index)--
#define Dem_Cfg_DecFreezeFrameIteratorTable(Index)                    Dem_Cfg_GetFreezeFrameIteratorTable(Index)--
#define Dem_Cfg_DecMemoryCommitNumber(Index)                          Dem_Cfg_GetMemoryCommitNumber(Index)--
#define Dem_Cfg_DecMemoryStatus(Index)                                Dem_Cfg_GetMemoryStatus(Index)--
#define Dem_Cfg_DecPrimaryChronology(Index)                           Dem_Cfg_GetPrimaryChronology(Index)--
#define Dem_Cfg_DecPrimaryEntry_0()                                   Dem_Cfg_GetPrimaryEntry_0()--
#define Dem_Cfg_DecReadoutBuffer(Index)                               Dem_Cfg_GetReadoutBuffer(Index)--
#define Dem_Cfg_DecReportedEventsOfFilter(Index)                      Dem_Cfg_GetReportedEventsOfFilter(Index)--
#define Dem_Cfg_DecSatelliteInfoOsApplication_Untrusted_Core0()       Dem_Cfg_GetSatelliteInfoOsApplication_Untrusted_Core0()--
#define Dem_Cfg_DecStatusData()                                       Dem_Cfg_GetStatusData()--
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



/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
 /*  Return type of Dem_Cfg_EventIndicatorIterGet() - returns: eventIndicatorIndex  */ 
typedef uint8                                                         Dem_Cfg_IndicatorIndexType; 

typedef volatile P2VAR(Dem_Com_ProcessorWordType, TYPEDEF, DEM_VAR_NOINIT) Dem_Cfg_ProcessorWordPtrType; 

typedef volatile P2VAR(Dem_SatelliteData_DataType, TYPEDEF, DEM_VAR_NOINIT) Dem_Cfg_SatelliteDataPtrType; 

typedef struct Dem_Cfg_SatelliteInfoTypeOsApplication_Untrusted_Core0_s {
  volatile Dem_SatelliteData_DataType SatelliteData[ 212 ];
  volatile Dem_Com_ProcessorWordType  SatelliteStatus;
}                                                                     Dem_Cfg_SatelliteInfoTypeOsApplication_Untrusted_Core0;    /* Data structure for DEM satellite on partition "OsApplication_Untrusted_Core0" */ 

typedef struct Dem_Cfg_AdminDataType_s {
  uint16 ImplementationVersion;
  uint16 ConfigurationId;
  uint16 CycleCounter[ 1 /*DEM_CFG_GLOBAL_CYCLE_COUNT*/];
  uint16 CycleState;                                                            /* (DEM_CFG_SUPPORT_OPCYCLE_STORAGE == STD_ON) */
  uint8  MemoryOverflow;                                                        /* (DEM_CFG_DATA_OVFLIND == STD_ON) || (DEM_CFG_SUPPORT_OVFLIND_API == STD_ON) */
}                                                                     Dem_Cfg_AdminDataType; 

typedef struct Dem_Cfg_StatusDataType_s {
  uint16         FirstFailedEvent;
  uint16         FirstConfirmedEvent;
  uint16         MostRecentFailedEvent;
  uint16         MostRecentConfmdEvent;
  uint8          TripCount[ 212 /*DEM_G_NUMBER_OF_EVENTS (incl. #0)*/];         /* (DEM_CFG_SUPPORT_MULTITRIP == STD_ON) || use HealingCycleCounter */
  volatile uint8 EventStatus[ 212 /*DEM_G_NUMBER_OF_EVENTS (incl. #0)*/];
}                                                                     Dem_Cfg_StatusDataType; 

typedef struct Dem_Cfg_PrimaryEntryType_s {
  uint32 Timestamp;
  uint16 AgingCounter;
  uint16 EventId;
  uint8  SnapshotData[ 1 /*DEM_CFG_MAX_NUM_SNAPSHOTS*/][ 2 /*DEM_CFG_MAX_SIZE_SNAPSHOT*/];  /* (DEM_CFG_SUPPORT_SRECS == STD_ON) */
  uint8  State;                                                                             /* (DEM_CFG_SUPPORT_OBDII == STD_ON) || (DEM_CFG_SUPPORT_WWHOBD == STD_ON) || (DEM_CFG_PROCESS_CDTC_ALL_DTC == STD_ON) */
  uint8  SnapshotHeader;                                                                    /* (DEM_CFG_SUPPORT_SRECS == STD_ON) */
}                                                                     Dem_Cfg_PrimaryEntryType; 

typedef P2VAR(Dem_Cfg_PrimaryEntryType, TYPEDEF, DEM_SHARED_DATA)     Dem_SharedMemoryEntryPtrType; 

typedef P2CONST(Dem_Cfg_PrimaryEntryType, TYPEDEF, DEM_SHARED_DATA)   Dem_ConstSharedMemoryEntryPtrType; 

typedef struct Dem_Cfg_TimeSeriesEntryType_s {
  uint32 Timestamp;
  uint16 EventId;
}                                                                     Dem_Cfg_TimeSeriesEntryType; 

typedef uint8                                                         Dem_Cfg_MemoryIndexType;               /* Number of NV blocks, see Dem_Cfg_GlobalNvBlockCount(). */ 

typedef uint8                                                         Dem_Cfg_DtrStatusType; 

typedef Dem_Com_ProcessorWordType                                     Dem_Cfg_ReportedEventsType[7];         /* size: [ceiling( DEM_G_NUMBER_OF_EVENTS / 32 )] = (((DEM_G_NUMBER_OF_EVENTS - 1) / 32) + 1), here: 7. See define DEM_CFG_GLOBAL_PROCESSORWORDS_PER_REPORTEDEVENTSTYPE */ 

typedef uint16                                                        Dem_Cfg_IndicatorContinuousType[1];    /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint16                                                        Dem_Cfg_IndicatorBlinkingType[1];      /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint16                                                        Dem_Cfg_IndicatorFastFlashType[1];     /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint16                                                        Dem_Cfg_IndicatorSlowFlashType[1];     /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint8                                                         Dem_Cfg_GlobalIndicatorStatesType[1];    /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

 /*  Temporary buffer for interaction with NvM  */ 
typedef union Dem_Cfg_CommitBufferType_u { /* PRQA S 0750 */ /* MD_MSR_18.4 */
  uint8                    mRaw[ 1 ];
  Dem_Cfg_AdminDataType    mAdmin;
  Dem_Cfg_StatusDataType   mStatus;
  Dem_Cfg_PrimaryEntryType mPrimary;
}                                                                     Dem_Cfg_CommitBufferType; 

 /*  Buffer for Event Data, used after calling Dem_DisableDTCRecordUpdate().  */ 
typedef struct Dem_Cfg_ReadoutBufferEntryType_s {
  Dem_Cfg_PrimaryEntryType                      Data;                           /* Backed event data */
  Dem_DTCReadoutBuffer_ExtendedDataIteratorType ExtendedIterator;               /* Internal state for reporting ExtendedData record(s) */
  Dem_DTCReadoutBuffer_SnapshotDataIteratorType SnapshotIterator;               /* Internal state for reporting SnapshotData record(s) */
  uint16                                        EventId;                        /* EventId of this Data record */
  uint8                                         MemoryId;                       /* MemoryId of this Data record */
  uint8                                         State;                          /* Internal state of this buffer, see Dem_DTCReadoutBuffer_StatusType */
}                                                                     Dem_Cfg_ReadoutBufferEntryType; 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgPCIterableTypes  Dem_Cfg Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Dem_Cfg_ClearDTCTable */
typedef uint8_least Dem_Cfg_ClearDTCTableIterType;

/**   \brief  type used to iterate Dem_Cfg_ClientTable */
typedef uint8_least Dem_Cfg_ClientTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DTCSelectorTable */
typedef uint8_least Dem_Cfg_DTCSelectorTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DataElementTable */
typedef uint8_least Dem_Cfg_DataElementTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DtcGroupMask */
typedef uint8_least Dem_Cfg_DtcGroupMaskIterType;

/**   \brief  type used to iterate Dem_Cfg_DtcTable */
typedef uint8_least Dem_Cfg_DtcTableIterType;

/**   \brief  type used to iterate Dem_Cfg_EnableConditionInitTable */
typedef uint8_least Dem_Cfg_EnableConditionInitTableIterType;

/**   \brief  type used to iterate Dem_Cfg_EventAvailableInVariant */
typedef uint8_least Dem_Cfg_EventAvailableInVariantIterType;

/**   \brief  type used to iterate Dem_Cfg_EventTableInd */
typedef uint8_least Dem_Cfg_EventTableIndIterType;

/**   \brief  type used to iterate Dem_Cfg_FilterInfoTable */
typedef uint8_least Dem_Cfg_FilterInfoTableIterType;

/**   \brief  type used to iterate Dem_Cfg_FreezeFrameIteratorTable */
typedef uint8_least Dem_Cfg_FreezeFrameIteratorTableIterType;

/**   \brief  type used to iterate Dem_Cfg_FreezeFrameNumTable */
typedef uint8_least Dem_Cfg_FreezeFrameNumTableIterType;

/**   \brief  type used to iterate Dem_Cfg_GeneralObdInput */
typedef uint8_least Dem_Cfg_GeneralObdInputIterType;

/**   \brief  type used to iterate Dem_Cfg_MemoryBlockId */
typedef uint8_least Dem_Cfg_MemoryBlockIdIterType;

/**   \brief  type used to iterate Dem_Cfg_MemoryCommitNumber */
typedef uint8_least Dem_Cfg_MemoryCommitNumberIterType;

/**   \brief  type used to iterate Dem_Cfg_MemoryDataPtr */
typedef uint8_least Dem_Cfg_MemoryDataPtrIterType;

/**   \brief  type used to iterate Dem_Cfg_MemoryDataSize */
typedef uint8_least Dem_Cfg_MemoryDataSizeIterType;

/**   \brief  type used to iterate Dem_Cfg_MemoryEntry */
typedef uint8_least Dem_Cfg_MemoryEntryIterType;

/**   \brief  type used to iterate Dem_Cfg_MemoryStatus */
typedef uint8_least Dem_Cfg_MemoryStatusIterType;

/**   \brief  type used to iterate Dem_Cfg_PrimaryChronology */
typedef uint8_least Dem_Cfg_PrimaryChronologyIterType;

/**   \brief  type used to iterate Dem_Cfg_ReadoutBuffer */
typedef uint8_least Dem_Cfg_ReadoutBufferIterType;

/**   \brief  type used to iterate Dem_Cfg_ReportedEventsOfFilter */
typedef uint8_least Dem_Cfg_ReportedEventsOfFilterIterType;

/**   \brief  type used to iterate Dem_Cfg_SatelliteInfo */
typedef uint8_least Dem_Cfg_SatelliteInfoIterType;

/**   \brief  type used to iterate Dem_Cfg_EnableConditionTable */
typedef uint8_least Dem_Cfg_EnableConditionTableIterType;

/**   \brief  type used to iterate Dem_Cfg_EventTable */
typedef uint8_least Dem_Cfg_EventTableIterType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCIterableTypesWithSizeRelations  Dem_Cfg Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate Dem_Cfg_EnableConditionState */
typedef Dem_Cfg_EnableConditionTableIterType Dem_Cfg_EnableConditionStateIterType;

/**   \brief  type used to iterate Dem_Cfg_EventDebounceValue */
typedef Dem_Cfg_EventTableIterType Dem_Cfg_EventDebounceValueIterType;

/**   \brief  type used to iterate Dem_Cfg_EventInternalStatus */
typedef Dem_Cfg_EventTableIterType Dem_Cfg_EventInternalStatusIterType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCValueTypes  Dem_Cfg Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for Dem_Cfg_ClearDTCIndexOfClientTable */
typedef uint8 Dem_Cfg_ClearDTCIndexOfClientTableType;

/**   \brief  value based type definition for Dem_Cfg_FilterIndexOfClientTable */
typedef uint8 Dem_Cfg_FilterIndexOfClientTableType;

/**   \brief  value based type definition for Dem_Cfg_FreezeFrameIteratorIndexOfClientTable */
typedef uint8 Dem_Cfg_FreezeFrameIteratorIndexOfClientTableType;

/**   \brief  value based type definition for Dem_Cfg_ReadoutBufferIndexOfClientTable */
typedef uint8 Dem_Cfg_ReadoutBufferIndexOfClientTableType;

/**   \brief  value based type definition for Dem_Cfg_SelectorIndexOfClientTable */
typedef uint8 Dem_Cfg_SelectorIndexOfClientTableType;

/**   \brief  value based type definition for Dem_Cfg_DataIsStoredInNVOfDataElementTable */
typedef boolean Dem_Cfg_DataIsStoredInNVOfDataElementTableType;

/**   \brief  value based type definition for Dem_Cfg_ElementKindOfDataElementTable */
typedef uint8 Dem_Cfg_ElementKindOfDataElementTableType;

/**   \brief  value based type definition for Dem_Cfg_ElementSizeOfDataElementTable */
typedef uint8 Dem_Cfg_ElementSizeOfDataElementTableType;

/**   \brief  value based type definition for Dem_Cfg_GroupMaskOfDtcGroupMask */
typedef uint8 Dem_Cfg_GroupMaskOfDtcGroupMaskType;

/**   \brief  value based type definition for Dem_Cfg_UdsGroupDtcOfDtcGroupMask */
typedef uint32 Dem_Cfg_UdsGroupDtcOfDtcGroupMaskType;

/**   \brief  value based type definition for Dem_Cfg_DtcSeverityOfDtcTable */
typedef uint8 Dem_Cfg_DtcSeverityOfDtcTableType;

/**   \brief  value based type definition for Dem_Cfg_FunctionalUnitOfDtcTable */
typedef uint8 Dem_Cfg_FunctionalUnitOfDtcTableType;

/**   \brief  value based type definition for Dem_Cfg_ImmediateNvStorageOfDtcTable */
typedef boolean Dem_Cfg_ImmediateNvStorageOfDtcTableType;

/**   \brief  value based type definition for Dem_Cfg_InitValueOfEnableConditionInitTable */
typedef uint8 Dem_Cfg_InitValueOfEnableConditionInitTableType;

/**   \brief  value based type definition for Dem_Cfg_EnableConditionState */
typedef uint8 Dem_Cfg_EnableConditionStateType;

/**   \brief  value based type definition for Dem_Cfg_EventAvailableInVariant */
typedef boolean Dem_Cfg_EventAvailableInVariantType;

/**   \brief  value based type definition for Dem_Cfg_EventDebounceValue */
typedef sint16 Dem_Cfg_EventDebounceValueType;

/**   \brief  value based type definition for Dem_Cfg_EventTableInd */
typedef uint8 Dem_Cfg_EventTableIndType;

/**   \brief  value based type definition for Dem_Cfg_FFNumberOfFreezeFrameNumTable */
typedef uint8 Dem_Cfg_FFNumberOfFreezeFrameNumTableType;

/**   \brief  value based type definition for Dem_Cfg_FFTriggerOfFreezeFrameNumTable */
typedef uint8 Dem_Cfg_FFTriggerOfFreezeFrameNumTableType;

/**   \brief  value based type definition for Dem_Cfg_FFUpdateOfFreezeFrameNumTable */
typedef boolean Dem_Cfg_FFUpdateOfFreezeFrameNumTableType;

/**   \brief  value based type definition for Dem_Cfg_DataElementTableIdxOfGeneralObdInput */
typedef uint8 Dem_Cfg_DataElementTableIdxOfGeneralObdInputType;

/**   \brief  value based type definition for Dem_Cfg_MemoryBlockId */
typedef uint16 Dem_Cfg_MemoryBlockIdType;

/**   \brief  value based type definition for Dem_Cfg_MemoryCommitNumber */
typedef uint8 Dem_Cfg_MemoryCommitNumberType;

/**   \brief  value based type definition for Dem_Cfg_MemoryDataSize */
typedef uint16 Dem_Cfg_MemoryDataSizeType;

/**   \brief  value based type definition for Dem_Cfg_MemoryStatus */
typedef uint8 Dem_Cfg_MemoryStatusType;

/**   \brief  value based type definition for Dem_Cfg_EventCountOfSatelliteInfo */
typedef uint8 Dem_Cfg_EventCountOfSatelliteInfoType;

/**   \brief  value based type definition for Dem_Cfg_EventTableIndEndIdxOfSatelliteInfo */
typedef uint8 Dem_Cfg_EventTableIndEndIdxOfSatelliteInfoType;

/**   \brief  value based type definition for Dem_Cfg_EventTableIndStartIdxOfSatelliteInfo */
typedef uint8 Dem_Cfg_EventTableIndStartIdxOfSatelliteInfoType;

/**   \brief  value based type definition for Dem_Cfg_EventTableIndUsedOfSatelliteInfo */
typedef boolean Dem_Cfg_EventTableIndUsedOfSatelliteInfoType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfClearDTCTable */
typedef uint8 Dem_Cfg_SizeOfClearDTCTableType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfClientTable */
typedef uint8 Dem_Cfg_SizeOfClientTableType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfDTCSelectorTable */
typedef uint8 Dem_Cfg_SizeOfDTCSelectorTableType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfDataElementTable */
typedef uint8 Dem_Cfg_SizeOfDataElementTableType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfDtcGroupMask */
typedef uint8 Dem_Cfg_SizeOfDtcGroupMaskType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEnableConditionState */
typedef uint8 Dem_Cfg_SizeOfEnableConditionStateType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEnableConditionTable */
typedef uint8 Dem_Cfg_SizeOfEnableConditionTableType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEventDebounceValue */
typedef uint8 Dem_Cfg_SizeOfEventDebounceValueType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEventInternalStatus */
typedef uint8 Dem_Cfg_SizeOfEventInternalStatusType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEventTable */
typedef uint8 Dem_Cfg_SizeOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfFilterInfoTable */
typedef uint8 Dem_Cfg_SizeOfFilterInfoTableType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfFreezeFrameIteratorTable */
typedef uint8 Dem_Cfg_SizeOfFreezeFrameIteratorTableType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfMemoryCommitNumber */
typedef uint8 Dem_Cfg_SizeOfMemoryCommitNumberType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfMemoryEntry */
typedef uint8 Dem_Cfg_SizeOfMemoryEntryType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfMemoryStatus */
typedef uint8 Dem_Cfg_SizeOfMemoryStatusType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfPrimaryChronology */
typedef uint8 Dem_Cfg_SizeOfPrimaryChronologyType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfReadoutBuffer */
typedef uint8 Dem_Cfg_SizeOfReadoutBufferType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfReportedEventsOfFilter */
typedef uint8 Dem_Cfg_SizeOfReportedEventsOfFilterType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfSatelliteInfo */
typedef uint8 Dem_Cfg_SizeOfSatelliteInfoType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgPCStructTypes  Dem_Cfg Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in Dem_Cfg_ClientTable */
typedef struct sDem_Cfg_ClientTableType
{
  uint8 Dem_Cfg_ClientTableNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_Cfg_ClientTableType;

/**   \brief  type used in Dem_Cfg_DataElementTable */
typedef struct sDem_Cfg_DataElementTableType
{
  Dem_Cfg_ElementKindOfDataElementTableType ElementKindOfDataElementTable;  /**< DataElement kind, returned by Dem_Cfg_DataCallbackType() */
  Dem_Cfg_ElementSizeOfDataElementTableType ElementSizeOfDataElementTable;  /**< Size of data element in Byte. */
  Dem_ReadDataFPtrType ReadDataFuncOfDataElementTable;  /**< C-function for getting the data. Its signature depends on ElementKind: With value(s) DEM_CFG_DATA_FROM_CBK_WITH_EVENTID use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId); - and use: Std_ReturnType (*)(uint8* Buffer); with the other values DEM_CFG_DATA_FROM_CBK, DEM_CFG_DATA_FROM_SR_PORT_BOOLEAN, DEM_CFG_DATA_FROM_SR_PORT_SINT16, DEM_CFG_DATA_FROM_SR_PORT_SINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT32, DEM_CFG_DATA_FROM_SR_PORT_SINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT8, DEM_CFG_DATA_FROM_SR_PORT_SINT8_N, DEM_CFG_DATA_FROM_SR_PORT_UINT16, DEM_CFG_DATA_FROM_SR_PORT_UINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT32, DEM_CFG_DATA_FROM_SR_PORT_UINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT8, DEM_CFG_DATA_FROM_SR_PORT_UINT8_N. */
} Dem_Cfg_DataElementTableType;

/**   \brief  type used in Dem_Cfg_DtcGroupMask */
typedef struct sDem_Cfg_DtcGroupMaskType
{
  Dem_Cfg_UdsGroupDtcOfDtcGroupMaskType UdsGroupDtcOfDtcGroupMask;  /**< configuration value Dem/DemGeneral/DemGroupOfDTC/DemGroupDTCs */
  Dem_Cfg_GroupMaskOfDtcGroupMaskType GroupMaskOfDtcGroupMask;  /**< internally used mask for the DTC group, see defines DEM_CFG_GROUPMASK_POWERTRAIN, ~_CHASSIS, ~_BODY, ~_NETWORK */
} Dem_Cfg_DtcGroupMaskType;

/**   \brief  type used in Dem_Cfg_DtcTable */
typedef struct sDem_Cfg_DtcTableType
{
  Dem_Cfg_FunctionalUnitOfDtcTableType FunctionalUnitOfDtcTable;  /**< FunctionalUnit for the report of severity information - used for UDS service 19 09 only. */
} Dem_Cfg_DtcTableType;

/**   \brief  type used in Dem_Cfg_EnableConditionInitTable */
typedef struct sDem_Cfg_EnableConditionInitTableType
{
  uint8 Dem_Cfg_EnableConditionInitTableNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_Cfg_EnableConditionInitTableType;

/**   \brief  type used in Dem_Cfg_FreezeFrameNumTable */
typedef struct sDem_Cfg_FreezeFrameNumTableType
{
  uint8 Dem_Cfg_FreezeFrameNumTableNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_Cfg_FreezeFrameNumTableType;

/**   \brief  type used in Dem_Cfg_GeneralObdInput */
typedef struct sDem_Cfg_GeneralObdInputType
{
  uint8 Dem_Cfg_GeneralObdInputNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_Cfg_GeneralObdInputType;

/**   \brief  type used in Dem_Cfg_SatelliteInfo */
typedef struct sDem_Cfg_SatelliteInfoType
{
  uint8 Dem_Cfg_SatelliteInfoNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_Cfg_SatelliteInfoType;

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
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  Dem_Cfg_DataElementTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataElementTable
  \details
  Element         Description
  ElementKind     DataElement kind, returned by Dem_Cfg_DataCallbackType()
  ElementSize     Size of data element in Byte.
  ReadDataFunc    C-function for getting the data. Its signature depends on ElementKind: With value(s) DEM_CFG_DATA_FROM_CBK_WITH_EVENTID use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId); - and use: Std_ReturnType (*)(uint8* Buffer); with the other values DEM_CFG_DATA_FROM_CBK, DEM_CFG_DATA_FROM_SR_PORT_BOOLEAN, DEM_CFG_DATA_FROM_SR_PORT_SINT16, DEM_CFG_DATA_FROM_SR_PORT_SINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT32, DEM_CFG_DATA_FROM_SR_PORT_SINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT8, DEM_CFG_DATA_FROM_SR_PORT_SINT8_N, DEM_CFG_DATA_FROM_SR_PORT_UINT16, DEM_CFG_DATA_FROM_SR_PORT_UINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT32, DEM_CFG_DATA_FROM_SR_PORT_UINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT8, DEM_CFG_DATA_FROM_SR_PORT_UINT8_N.
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_DataElementTableType, DEM_CONST) Dem_Cfg_DataElementTable[2];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DtcGroupMask
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DtcGroupMask
  \brief  Mapping of configured DemGroupOfDTC/DemGroupDTCs ('UdsGroupDtc') to the internal used mask value ('GroupMask'). This table is sorted by the GroupDTC number.
  \details
  Element        Description
  UdsGroupDtc    configuration value Dem/DemGeneral/DemGroupOfDTC/DemGroupDTCs
  GroupMask      internally used mask for the DTC group, see defines DEM_CFG_GROUPMASK_POWERTRAIN, ~_CHASSIS, ~_BODY, ~_NETWORK
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_DtcGroupMaskType, DEM_CONST) Dem_Cfg_DtcGroupMask[4];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DtcTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DtcTable
  \details
  Element           Description
  FunctionalUnit    FunctionalUnit for the report of severity information - used for UDS service 19 09 only.
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_DtcTableType, DEM_CONST) Dem_Cfg_DtcTable[2];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryBlockId
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryBlockId
  \brief  The array contains these items: Admin, Status, 1 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_MemoryBlockIdType, DEM_CONST) Dem_Cfg_MemoryBlockId[3];
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataPtr
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataPtr
  \brief  The array contains these items: Admin, Status, 1 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_NvDataPtrType, DEM_CONST) Dem_Cfg_MemoryDataPtr[3];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataSize
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataSize
  \brief  The array contains these items: Admin, Status, 1 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_MemoryDataSizeType, DEM_CONST) Dem_Cfg_MemoryDataSize[3];
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntry
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryEntry
  \brief  The array contains these items: Primary, ReadoutBuffer; size = DEM_CFG_GLOBAL_PRIMARY_SIZE + DEM_CFG_GLOBAL_SECONDARY_SIZE + DEM_CFG_NUMBER_OF_READOUTBUFFERS
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_SharedMemoryEntryPtrType, DEM_CONST) Dem_Cfg_MemoryEntry[2];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_PrimaryEntryType, DEM_CONST) Dem_Cfg_MemoryEntryInit;
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_TimeSeriesEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_TimeSeriesEntryType, DEM_CONST) Dem_Cfg_TimeSeriesEntryInit;
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_AdminData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_AdminDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_AdminData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ClearDTCTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ClearDTCTable
  \brief  size = DEM_CFG_NUMBER_OF_CLEARDTCS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_ClearDTC_DataType, DEM_VAR_NOINIT) Dem_Cfg_ClearDTCTable[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_CommitBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_CommitBufferType, DEM_VAR_NOINIT) Dem_Cfg_CommitBuffer;  /* PRQA S 0759 */ /* MD_MSR_18.4 */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DTCSelectorTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DTCSelectorTable
  \brief  size = DEM_CFG_NUMBER_OF_DTCSELECTORS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_DTCSelector_DataType, DEM_VAR_NOINIT) Dem_Cfg_DTCSelectorTable[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionState
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionState
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition ID. Table value: current condition state '0' disable, '1' enable.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_EnableConditionStateType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionState[1];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventDebounceValue
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventDebounceValue
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Dem_Cfg_EventDebounceValueType, DEM_VAR_NOINIT) Dem_Cfg_EventDebounceValue[212];
#define DEM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventInternalStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventInternalStatus
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Dem_Event_InternalStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventInternalStatus[212];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FilterInfoTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FilterInfoTable
  \brief  size = DEM_CFG_NUMBER_OF_FILTER
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_FilterData_InfoType, DEM_VAR_NOINIT) Dem_Cfg_FilterInfoTable[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameIteratorTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameIteratorTable
  \brief  size = DEM_CFG_NUMBER_OF_FREEZEFRAMEITERATORS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_FreezeFrameIterator_FilterType, DEM_VAR_NOINIT) Dem_Cfg_FreezeFrameIteratorTable[1];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryCommitNumber
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryCommitNumber
  \brief  The array contains these items: Admin, Status, 1 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Dem_Cfg_MemoryCommitNumberType, DEM_VAR_NOINIT) Dem_Cfg_MemoryCommitNumber[3];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryStatus
  \brief  The array contains these items: Admin, Status, 1 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_MemoryStatusType, DEM_VAR_NOINIT) Dem_Cfg_MemoryStatus[3];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryChronology
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_PrimaryChronology
  \brief  size = DEM_CFG_GLOBAL_PRIMARY_SIZE
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_PrimaryChronology[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_0
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_0;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ReadoutBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_ReadoutBufferEntryType, DEM_VAR_NOINIT) Dem_Cfg_ReadoutBuffer[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ReportedEventsOfFilter
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ReportedEventsOfFilter
  \brief  size = DEM_CFG_NUMBER_OF_FILTER
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_ReportedEventsType, DEM_VAR_NOINIT) Dem_Cfg_ReportedEventsOfFilter[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SatelliteInfoOsApplication_Untrusted_Core0
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_SatelliteInfoOsApplication_Untrusted_Core0
  \brief  Buffer for satellite data on OsApplication "OsApplication_Untrusted_Core0"
*/ 
#define DEM_START_SEC_OSAPPLICATION_UNTRUSTED_CORE0_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_SatelliteInfoTypeOsApplication_Untrusted_Core0, DEM_VAR_NOINIT) Dem_Cfg_SatelliteInfoOsApplication_Untrusted_Core0;  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define DEM_STOP_SEC_OSAPPLICATION_UNTRUSTED_CORE0_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_StatusData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_StatusDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_StatusData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
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
  Justification of MISRA deviations
**********************************************************************************************************************/


#endif  /* DEM_LCFG_H */
/**********************************************************************************************************************
  END OF FILE: Dem_Lcfg.h     [VolvoAB (Vector), VARIANT-POSTBUILD-LOADABLE, 12.05.00.95622]
**********************************************************************************************************************/

