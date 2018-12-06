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
 *              File: Dem_Lcfg.c
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



/* configuration, interrupt handling implementations differ from the
 * source identification define used here. The naming
 * schemes for those files can be taken from this list:
 *
 * Dem.c:         DEM_SOURCE
 * Dem_Lcfg.c:    DEM_LCFG_SOURCE
 * Dem_PBcfg.c:   DEM_PBCFG_SOURCE */
#define DEM_LCFG_SOURCE


/**********************************************************************************************************************
  MISRA JUSTIFICATIONS
**********************************************************************************************************************/

/* PRQA S 0810 EOF */ /* MD_MSR_1.1_810 */                                      /* #include "..." causes nesting to exceed 8 levels - program is non-conforming. -- caused by #include'd files. */
/* PRQA S 0828 EOF */ /* MD_MSR_1.1_828 */                                      /* Maximum '#if...' nesting exceeds 8 levels - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */                                      /* Number of macro definitions exceeds 1024 - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0779 EOF */ /* MD_DEM_5.1 */                                          /* Identifier does not differ in 32 significant characters -- caused by Autosar algorithm for unique symbolic names. */
/* PRQA S 0612 EOF */ /* MD_DEM_1.1_612 */                                      /* The size of an object exceeds 32767 bytes - program is non-conforming -- caused by large user configration. */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

#include "Dem.h"
#include "Os.h"
#if (DEM_CFG_USE_NVM == STD_ON)
# include "NvM.h"                                                               /* get: symbolic names for NvM block IDs */
#endif
#if (DEM_CFG_SUPPORT_J1939 == STD_ON)
# include "J1939Nm.h"                                                           /* get: symbolic names for J1939Nm node IDs */
#endif
#if (DEM_CFG_USE_RTE == STD_ON)
/* DEM used with RTE */
# include "Rte_DemMaster_OsApplication_Untrusted_Core0.h"
#endif
#include "Dem_AdditionalIncludeCfg.h"                                           /* additional, configuration defined files */

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

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
CONST(Dem_Cfg_DataElementTableType, DEM_CONST) Dem_Cfg_DataElementTable[2] = {
    /* Index    ElementKind                  ElementSize  ReadDataFunc                                                                                                                         Referable Keys */
  { /*     0 */ DEM_CFG_DATAELEMENT_INVALID,          0U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                          },  /* [#NoDataElementConfigured] */
  { /*     1 */ DEM_CFG_DATA_FROM_CBK      ,          2U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_StartApplication_ReadData }   /* [#DemDataElementClass_StartApplication, DidDemDidClass_StartApplication] */
};
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
CONST(Dem_Cfg_DtcGroupMaskType, DEM_CONST) Dem_Cfg_DtcGroupMask[4] = {
    /* Index    UdsGroupDtc   GroupMask                           Comment */
  { /*     0 */ 0x00000001UL, DEM_CFG_GROUPMASK_POWERTRAIN },  /* [GroupDTC 0x000001: DEM_DTC_GROUP_POWERTRAIN_DTCS] */
  { /*     1 */ 0x00400000UL, DEM_CFG_GROUPMASK_CHASSIS    },  /* [GroupDTC 0x400000: DEM_DTC_GROUP_CHASSIS_DTCS] */
  { /*     2 */ 0x00800000UL, DEM_CFG_GROUPMASK_BODY       },  /* [GroupDTC 0x800000: DEM_DTC_GROUP_BODY_DTCS] */
  { /*     3 */ 0x00C00000UL, DEM_CFG_GROUPMASK_NETWORK    }   /* [GroupDTC 0xC00000: DEM_DTC_GROUP_NETWORK_COM_DTCS] */
};
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
CONST(Dem_Cfg_DtcTableType, DEM_CONST) Dem_Cfg_DtcTable[2] = {
    /* Index    FunctionalUnit        Referable Keys */
  { /*     0 */           255U },  /* [#NoUdsDtcConfigured] */
  { /*     1 */             0U }   /* [DemDTCClass_StartApplication] */
};
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
CONST(Dem_Cfg_MemoryBlockIdType, DEM_CONST) Dem_Cfg_MemoryBlockId[3] = {
  /* Index     MemoryBlockId                                                         Referable Keys */
  /*     0 */ NvMConf_NvMBlockDescriptor_DemAdminDataBlock /*NvMBlockId=2*/    ,  /* [Dem_AdminData] */
  /*     1 */ NvMConf_NvMBlockDescriptor_DemStatusDataBlock /*NvMBlockId=3*/   ,  /* [Dem_StatusData] */
  /*     2 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock0 /*NvMBlockId=4*/    /* [Dem_PrimaryEntry0] */
};
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
CONST(Dem_NvDataPtrType, DEM_CONST) Dem_Cfg_MemoryDataPtr[3] = {
  /* Index     MemoryDataPtr                                                                                  Referable Keys */
  /*     0 */ (Dem_NvDataPtrType) &Dem_Cfg_GetAdminData()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_AdminData] */
  /*     1 */ (Dem_NvDataPtrType) &Dem_Cfg_GetStatusData()       /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_StatusData] */
  /*     2 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_0()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [Dem_PrimaryEntry0] */
};
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
CONST(Dem_Cfg_MemoryDataSizeType, DEM_CONST) Dem_Cfg_MemoryDataSize[3] = {
  /* Index     MemoryDataSize                                                        Referable Keys */
  /*     0 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetAdminData())      ,  /* [Dem_AdminData] */
  /*     1 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetStatusData())     ,  /* [Dem_StatusData] */
  /*     2 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_0())    /* [Dem_PrimaryEntry0] */
};
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
CONST(Dem_SharedMemoryEntryPtrType, DEM_CONST) Dem_Cfg_MemoryEntry[2] = {
  /* Index     MemoryEntry                                                                     Referable Keys */
  /*     0 */ &Dem_Cfg_GetPrimaryEntry_0()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry0] */
  /*     1 */ &Dem_Cfg_GetReadoutBuffer(0).Data   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [Dem_Cfg_ReadoutBuffer[0].Data] */
};
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
CONST(Dem_Cfg_PrimaryEntryType, DEM_CONST) Dem_Cfg_MemoryEntryInit = { 0 };
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
CONST(Dem_Cfg_TimeSeriesEntryType, DEM_CONST) Dem_Cfg_TimeSeriesEntryInit = { 0 };
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
VAR(Dem_Cfg_AdminDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_AdminData;
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
VAR(Dem_ClearDTC_DataType, DEM_VAR_NOINIT) Dem_Cfg_ClearDTCTable[1];
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
VAR(Dem_Cfg_CommitBufferType, DEM_VAR_NOINIT) Dem_Cfg_CommitBuffer;  /* PRQA S 0759 */ /* MD_MSR_18.4 */
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
VAR(Dem_DTCSelector_DataType, DEM_VAR_NOINIT) Dem_Cfg_DTCSelectorTable[1];
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
VAR(Dem_Cfg_EnableConditionStateType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionState[1];
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
volatile VAR(Dem_Cfg_EventDebounceValueType, DEM_VAR_NOINIT) Dem_Cfg_EventDebounceValue[212];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID, Satellite#OsApplication_Untrusted_Core0] */
  /*     1 */  /* [DemEventParameter_0, Satellite#OsApplication_Untrusted_Core0] */
  /*     2 */  /* [AutoCreatedDemEvent_ADC_E_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*     3 */  /* [AutoCreatedDemEvent_CC_DisableDM_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*     4 */  /* [AutoCreatedDemEvent_CC_DisableDM_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*     5 */  /* [AutoCreatedDemEvent_CC_DisableDM_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*     6 */  /* [AutoCreatedDemEvent_CC_DisableDM_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*     7 */  /* [AutoCreatedDemEvent_CC_DisableDM_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*     8 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*     9 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone1J1939_Tx_0x31_BC_3782f500_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    10 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    11 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone2_Tx_1838e3b2_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    12 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    13 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oCabSubnet_Tx_5060f83a_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    14 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    15 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oFMSNet_Tx_0x31_BC_38fc8c7d_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    16 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN00_Rx_dd181faa_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    17 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN00_Tx_8b42b82c_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    18 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN01_Rx_65a478cf_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    19 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN01_Tx_33fedf49_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    20 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN02_Rx_7711d721_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    21 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN02_Tx_214b70a7_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    22 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN03_Rx_cfadb044_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    23 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN03_Tx_99f717c2_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    24 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN04_Rx_527a88fd_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    25 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN04_Tx_04202f7b_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    26 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    27 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oSecuritySubnet_Tx_6c66ba3a_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    28 */  /* [AutoCreatedDemEvent_CC_EnableDM_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    29 */  /* [AutoCreatedDemEvent_CC_EnableDM_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    30 */  /* [AutoCreatedDemEvent_CC_EnableDM_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    31 */  /* [AutoCreatedDemEvent_CC_EnableDM_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    32 */  /* [AutoCreatedDemEvent_CC_EnableDM_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    33 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    34 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone1J1939_Tx_0x31_BC_3782f500_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    35 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    36 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone2_Tx_1838e3b2_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    37 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    38 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oCabSubnet_Tx_5060f83a_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    39 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    40 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oFMSNet_Tx_0x31_BC_38fc8c7d_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    41 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN00_Rx_dd181faa_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    42 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN00_Tx_8b42b82c_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    43 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN01_Rx_65a478cf_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    44 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN01_Tx_33fedf49_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    45 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN02_Rx_7711d721_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    46 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN02_Tx_214b70a7_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    47 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN03_Rx_cfadb044_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    48 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN03_Tx_99f717c2_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    49 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN04_Rx_527a88fd_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /* Index        Referable Keys  */
  /*    50 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN04_Tx_04202f7b_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    51 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    52 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oSecuritySubnet_Tx_6c66ba3a_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    53 */  /* [AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_J1939RM_STATE_OFFLINE_BswMReportFa_540060b1, Satellite#OsApplication_Untrusted_Core0] */
  /*    54 */  /* [AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_J1939RM_STATE_ONLINE_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    55 */  /* [AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_FMSNet_fce1aae5_CIOM_3a3d59b1_J1939RM_STATE_OFFLINE_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    56 */  /* [AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_FMSNet_fce1aae5_CIOM_3a3d59b1_J1939RM_STATE_ONLINE_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    57 */  /* [AutoCreatedDemEvent_CHNL_53cce282_CANSM_E_BUS_OFF, Satellite#OsApplication_Untrusted_Core0] */
  /*    58 */  /* [AutoCreatedDemEvent_CHNL_53cce282_CANSM_E_MODE_REQUEST_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*    59 */  /* [AutoCreatedDemEvent_CHNL_17344684_CANSM_E_BUS_OFF, Satellite#OsApplication_Untrusted_Core0] */
  /*    60 */  /* [AutoCreatedDemEvent_CHNL_17344684_CANSM_E_MODE_REQUEST_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*    61 */  /* [AutoCreatedDemEvent_CHNL_a6b6a922_CANSM_E_BUS_OFF, Satellite#OsApplication_Untrusted_Core0] */
  /*    62 */  /* [AutoCreatedDemEvent_CHNL_a6b6a922_CANSM_E_MODE_REQUEST_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*    63 */  /* [AutoCreatedDemEvent_CHNL_df893ad5_CANSM_E_BUS_OFF, Satellite#OsApplication_Untrusted_Core0] */
  /*    64 */  /* [AutoCreatedDemEvent_CHNL_df893ad5_CANSM_E_MODE_REQUEST_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*    65 */  /* [AutoCreatedDemEvent_CHNL_e058b4ae_CANSM_E_BUS_OFF, Satellite#OsApplication_Untrusted_Core0] */
  /*    66 */  /* [AutoCreatedDemEvent_CHNL_e058b4ae_CANSM_E_MODE_REQUEST_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*    67 */  /* [AutoCreatedDemEvent_ECUM_E_ALL_RUN_REQUESTS_KILLED, Satellite#OsApplication_Untrusted_Core0] */
  /*    68 */  /* [AutoCreatedDemEvent_ECUM_E_CONFIGURATION_DATA_INCONSISTENT, Satellite#OsApplication_Untrusted_Core0] */
  /*    69 */  /* [AutoCreatedDemEvent_ECUM_E_IMPROPER_CALLER, Satellite#OsApplication_Untrusted_Core0] */
  /*    70 */  /* [AutoCreatedDemEvent_ECUM_E_RAM_CHECK_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*    71 */  /* [AutoCreatedDemEvent_ESH_Action_CancelNvMWriteAll_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    72 */  /* [AutoCreatedDemEvent_ESH_Action_CancelWriteAllTimer_Start_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    73 */  /* [AutoCreatedDemEvent_ESH_Action_CancelWriteAllTimer_Stop_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    74 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone1J1939_0b1f4bae_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    75 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone1J1939_0b1f4bae_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    76 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone2_78967e2c_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    77 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone2_78967e2c_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    78 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_CabSubnet_9ea693f1_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    79 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_CabSubnet_9ea693f1_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    80 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_FMSNet_fce1aae5_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    81 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_FMSNet_fce1aae5_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    82 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN00_2cd9a7df_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    83 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN00_2cd9a7df_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    84 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN01_5bde9749_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    85 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN01_5bde9749_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    86 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN02_c2d7c6f3_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    87 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN02_c2d7c6f3_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    88 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN03_b5d0f665_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    89 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN03_b5d0f665_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    90 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN04_2bb463c6_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    91 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN04_2bb463c6_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    92 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_SecuritySubnet_e7a0ee54_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    93 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_SecuritySubnet_e7a0ee54_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    94 */  /* [AutoCreatedDemEvent_ESH_Action_ComMCheckPendingRequests_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    95 */  /* [AutoCreatedDemEvent_ESH_Action_ComMCheckPendingRequests_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    96 */  /* [AutoCreatedDemEvent_ESH_Action_ComMCheckPendingRequests_BswMReportFailToDemRef_2, Satellite#OsApplication_Untrusted_Core0] */
  /*    97 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_Backbone1J1939_0b1f4bae_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    98 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_Backbone2_78967e2c_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    99 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_CabSubnet_9ea693f1_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /* Index        Referable Keys  */
  /*   100 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_FMSNet_fce1aae5_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   101 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN00_2cd9a7df_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   102 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN01_5bde9749_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   103 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN02_c2d7c6f3_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   104 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN03_b5d0f665_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   105 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN04_2bb463c6_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   106 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_SecuritySubnet_e7a0ee54_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   107 */  /* [AutoCreatedDemEvent_ESH_Action_DemInit_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   108 */  /* [AutoCreatedDemEvent_ESH_Action_DemInitialized_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   109 */  /* [AutoCreatedDemEvent_ESH_Action_DemNotInitialized_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   110 */  /* [AutoCreatedDemEvent_ESH_Action_DemShutdown_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   111 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_PostRun_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   112 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_PrepShutdown_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   113 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_PrepShutdown_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   114 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_Run_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   115 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_Run_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   116 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_WaitForNvm_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   117 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_Wakeup_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   118 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_Wakeup_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   119 */  /* [AutoCreatedDemEvent_ESH_Action_EcuMClearValidatedWakeupEvents_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   120 */  /* [AutoCreatedDemEvent_ESH_Action_EcuMGoToSelectedShutdownTarget_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   121 */  /* [AutoCreatedDemEvent_ESH_Action_EnterExclusiveArea_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   122 */  /* [AutoCreatedDemEvent_ESH_Action_EnterExclusiveArea_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   123 */  /* [AutoCreatedDemEvent_ESH_Action_ExitExclusiveArea_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   124 */  /* [AutoCreatedDemEvent_ESH_Action_ExitExclusiveArea_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   125 */  /* [AutoCreatedDemEvent_ESH_Action_NvMWriteAll_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   126 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterPostRun_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   127 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterPrepShutdown_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   128 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterPrepShutdown_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   129 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterRun_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   130 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterRun_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   131 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterShutdown_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   132 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterWaitForNvm_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   133 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterWakeup_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   134 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterWakeup_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   135 */  /* [AutoCreatedDemEvent_ESH_Action_SelfRunRequestTimer_Start_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   136 */  /* [AutoCreatedDemEvent_ESH_Action_SelfRunRequestTimer_Start_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   137 */  /* [AutoCreatedDemEvent_ESH_Action_SwitchPostRun_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   138 */  /* [AutoCreatedDemEvent_ESH_Action_SwitchRun_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   139 */  /* [AutoCreatedDemEvent_ESH_Action_SwitchRun_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   140 */  /* [AutoCreatedDemEvent_ESH_Action_SwitchShutdown_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   141 */  /* [AutoCreatedDemEvent_ESH_Action_SwitchShutdown_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   142 */  /* [AutoCreatedDemEvent_ESH_Action_SwitchWakeup_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   143 */  /* [AutoCreatedDemEvent_ESH_Action_SwitchWakeup_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   144 */  /* [AutoCreatedDemEvent_ESH_Action_WriteAllTimer_Start_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   145 */  /* [AutoCreatedDemEvent_ESH_Action_WriteAllTimer_Stop_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   146 */  /* [AutoCreatedDemEvent_ESH_Action_WriteAllTimer_Stop_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   147 */  /* [AutoCreatedDemEvent_ESH_DemInit_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   148 */  /* [AutoCreatedDemEvent_ESH_PostRunNested_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   149 */  /* [AutoCreatedDemEvent_ESH_PostRunToPrepNested_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /* Index        Referable Keys  */
  /*   150 */  /* [AutoCreatedDemEvent_ESH_RunToPostRunNested_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   151 */  /* [AutoCreatedDemEvent_FLS_E_COMPARE_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*   152 */  /* [AutoCreatedDemEvent_FLS_E_ERASE_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*   153 */  /* [AutoCreatedDemEvent_FLS_E_READ_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*   154 */  /* [AutoCreatedDemEvent_FLS_E_UNEXPECTED_FLASH_ID, Satellite#OsApplication_Untrusted_Core0] */
  /*   155 */  /* [AutoCreatedDemEvent_FLS_E_WRITE_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*   156 */  /* [AutoCreatedDemEvent_GPT_E_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*   157 */  /* [AutoCreatedDemEvent_INIT_Action_BrsHw_EnableHwAccess_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   158 */  /* [AutoCreatedDemEvent_INIT_Action_CanIf_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   159 */  /* [AutoCreatedDemEvent_INIT_Action_CanNm_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   160 */  /* [AutoCreatedDemEvent_INIT_Action_CanSM_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   161 */  /* [AutoCreatedDemEvent_INIT_Action_CanTp_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   162 */  /* [AutoCreatedDemEvent_INIT_Action_Can_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   163 */  /* [AutoCreatedDemEvent_INIT_Action_ComM_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   164 */  /* [AutoCreatedDemEvent_INIT_Action_Com_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   165 */  /* [AutoCreatedDemEvent_INIT_Action_Dcm_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   166 */  /* [AutoCreatedDemEvent_INIT_Action_Dem_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   167 */  /* [AutoCreatedDemEvent_INIT_Action_EnableInterrupts_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   168 */  /* [AutoCreatedDemEvent_INIT_Action_Fee_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   169 */  /* [AutoCreatedDemEvent_INIT_Action_Issm_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   170 */  /* [AutoCreatedDemEvent_INIT_Action_J1939Nm_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   171 */  /* [AutoCreatedDemEvent_INIT_Action_J1939Rm_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   172 */  /* [AutoCreatedDemEvent_INIT_Action_J1939Tp_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   173 */  /* [AutoCreatedDemEvent_INIT_Action_LinIf_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   174 */  /* [AutoCreatedDemEvent_INIT_Action_LinSM_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   175 */  /* [AutoCreatedDemEvent_INIT_Action_LinTp_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   176 */  /* [AutoCreatedDemEvent_INIT_Action_Lin_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   177 */  /* [AutoCreatedDemEvent_INIT_Action_Nm_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   178 */  /* [AutoCreatedDemEvent_INIT_Action_NvMReadAll_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   179 */  /* [AutoCreatedDemEvent_INIT_Action_NvM_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   180 */  /* [AutoCreatedDemEvent_INIT_Action_PduR_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   181 */  /* [AutoCreatedDemEvent_INIT_Action_RteStart_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   182 */  /* [AutoCreatedDemEvent_J1939NM_E_ADDRESS_LOST, Satellite#OsApplication_Untrusted_Core0] */
  /*   183 */  /* [AutoCreatedDemEvent_J1939TpConfiguration_J1939TP_E_COMMUNICATION, Satellite#OsApplication_Untrusted_Core0] */
  /*   184 */  /* [AutoCreatedDemEvent_LIN_E_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*   185 */  /* [AutoCreatedDemEvent_MCL_E_DMA_BUS, Satellite#OsApplication_Untrusted_Core0] */
  /*   186 */  /* [AutoCreatedDemEvent_MCL_E_DMA_DESCRIPTOR, Satellite#OsApplication_Untrusted_Core0] */
  /*   187 */  /* [AutoCreatedDemEvent_MCL_E_DMA_ECC, Satellite#OsApplication_Untrusted_Core0] */
  /*   188 */  /* [AutoCreatedDemEvent_MCL_E_DMA_INCONSISTENCY, Satellite#OsApplication_Untrusted_Core0] */
  /*   189 */  /* [AutoCreatedDemEvent_MCL_E_DMA_PRIORITY, Satellite#OsApplication_Untrusted_Core0] */
  /*   190 */  /* [AutoCreatedDemEvent_MCL_E_DMA_UNRECOGNIZED, Satellite#OsApplication_Untrusted_Core0] */
  /*   191 */  /* [AutoCreatedDemEvent_MCU_E_CLOCK_FAILURE, Satellite#OsApplication_Untrusted_Core0] */
  /*   192 */  /* [AutoCreatedDemEvent_MCU_E_INVALIDMODE_CONFIG, Satellite#OsApplication_Untrusted_Core0] */
  /*   193 */  /* [AutoCreatedDemEvent_MCU_E_SSCM_CER_FAILURE, Satellite#OsApplication_Untrusted_Core0] */
  /*   194 */  /* [AutoCreatedDemEvent_MCU_E_TIMEOUT_FAILURE, Satellite#OsApplication_Untrusted_Core0] */
  /*   195 */  /* [AutoCreatedDemEvent_NVM_E_INTEGRITY_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*   196 */  /* [AutoCreatedDemEvent_NVM_E_LOSS_OF_REDUNDANCY, Satellite#OsApplication_Untrusted_Core0] */
  /*   197 */  /* [AutoCreatedDemEvent_NVM_E_QUEUE_OVERFLOW, Satellite#OsApplication_Untrusted_Core0] */
  /*   198 */  /* [AutoCreatedDemEvent_NVM_E_REQ_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*   199 */  /* [AutoCreatedDemEvent_NVM_E_VERIFY_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /* Index        Referable Keys  */
  /*   200 */  /* [AutoCreatedDemEvent_NVM_E_WRITE_PROTECTED, Satellite#OsApplication_Untrusted_Core0] */
  /*   201 */  /* [AutoCreatedDemEvent_NVM_E_WRONG_BLOCK_ID, Satellite#OsApplication_Untrusted_Core0] */
  /*   202 */  /* [AutoCreatedDemEvent_SPI_E_HARDWARE_ERROR, Satellite#OsApplication_Untrusted_Core0] */
  /*   203 */  /* [AutoCreatedDemEvent_SpiDriver_SPI_E_HARDWARE_ERROR, Satellite#OsApplication_Untrusted_Core0] */
  /*   204 */  /* [AutoCreatedDemEvent_WDG_E_CORRUPT_CONFIG, Satellite#OsApplication_Untrusted_Core0] */
  /*   205 */  /* [AutoCreatedDemEvent_WDG_E_DISABLE_REJECTED, Satellite#OsApplication_Untrusted_Core0] */
  /*   206 */  /* [AutoCreatedDemEvent_WDG_E_FORBIDDEN_INVOCATION, Satellite#OsApplication_Untrusted_Core0] */
  /*   207 */  /* [AutoCreatedDemEvent_WDG_E_INVALID_CALL, Satellite#OsApplication_Untrusted_Core0] */
  /*   208 */  /* [AutoCreatedDemEvent_WDG_E_INVALID_PARAMETER, Satellite#OsApplication_Untrusted_Core0] */
  /*   209 */  /* [AutoCreatedDemEvent_WDG_E_MODE_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*   210 */  /* [AutoCreatedDemEvent_WDG_E_UNLOCKED, Satellite#OsApplication_Untrusted_Core0] */
  /*   211 */  /* [DEM_EVENT_StartApplication, Satellite#OsApplication_Untrusted_Core0] */

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
volatile VAR(Dem_Event_InternalStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventInternalStatus[212];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID, Satellite#OsApplication_Untrusted_Core0] */
  /*     1 */  /* [DemEventParameter_0, Satellite#OsApplication_Untrusted_Core0] */
  /*     2 */  /* [AutoCreatedDemEvent_ADC_E_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*     3 */  /* [AutoCreatedDemEvent_CC_DisableDM_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*     4 */  /* [AutoCreatedDemEvent_CC_DisableDM_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*     5 */  /* [AutoCreatedDemEvent_CC_DisableDM_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*     6 */  /* [AutoCreatedDemEvent_CC_DisableDM_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*     7 */  /* [AutoCreatedDemEvent_CC_DisableDM_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*     8 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*     9 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone1J1939_Tx_0x31_BC_3782f500_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    10 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    11 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oBackbone2_Tx_1838e3b2_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    12 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    13 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oCabSubnet_Tx_5060f83a_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    14 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    15 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oFMSNet_Tx_0x31_BC_38fc8c7d_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    16 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN00_Rx_dd181faa_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    17 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN00_Tx_8b42b82c_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    18 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN01_Rx_65a478cf_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    19 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN01_Tx_33fedf49_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    20 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN02_Rx_7711d721_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    21 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN02_Tx_214b70a7_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    22 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN03_Rx_cfadb044_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    23 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN03_Tx_99f717c2_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    24 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN04_Rx_527a88fd_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    25 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oLIN04_Tx_04202f7b_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    26 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    27 */  /* [AutoCreatedDemEvent_CC_DisablePDUGroup_CIOM_oSecuritySubnet_Tx_6c66ba3a_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    28 */  /* [AutoCreatedDemEvent_CC_EnableDM_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    29 */  /* [AutoCreatedDemEvent_CC_EnableDM_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    30 */  /* [AutoCreatedDemEvent_CC_EnableDM_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    31 */  /* [AutoCreatedDemEvent_CC_EnableDM_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    32 */  /* [AutoCreatedDemEvent_CC_EnableDM_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    33 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone1J1939_Rx_BC_405bc776_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    34 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone1J1939_Tx_0x31_BC_3782f500_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    35 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone2_Rx_4e624434_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    36 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oBackbone2_Tx_1838e3b2_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    37 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oCabSubnet_Rx_063a5fbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    38 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oCabSubnet_Tx_5060f83a_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    39 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oFMSNet_Rx_BC_dd2c1510_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    40 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oFMSNet_Tx_0x31_BC_38fc8c7d_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    41 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN00_Rx_dd181faa_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    42 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN00_Tx_8b42b82c_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    43 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN01_Rx_65a478cf_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    44 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN01_Tx_33fedf49_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    45 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN02_Rx_7711d721_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    46 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN02_Tx_214b70a7_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    47 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN03_Rx_cfadb044_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    48 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN03_Tx_99f717c2_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    49 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN04_Rx_527a88fd_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /* Index        Referable Keys  */
  /*    50 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oLIN04_Tx_04202f7b_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    51 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oSecuritySubnet_Rx_3a3c1dbc_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    52 */  /* [AutoCreatedDemEvent_CC_EnablePDUGroup_CIOM_oSecuritySubnet_Tx_6c66ba3a_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    53 */  /* [AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_J1939RM_STATE_OFFLINE_BswMReportFa_540060b1, Satellite#OsApplication_Untrusted_Core0] */
  /*    54 */  /* [AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_Backbone1J1939_0b1f4bae_CIOM_4d5cd289_J1939RM_STATE_ONLINE_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    55 */  /* [AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_FMSNet_fce1aae5_CIOM_3a3d59b1_J1939RM_STATE_OFFLINE_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    56 */  /* [AutoCreatedDemEvent_CC_J1939RmStateSwitch_CN_FMSNet_fce1aae5_CIOM_3a3d59b1_J1939RM_STATE_ONLINE_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    57 */  /* [AutoCreatedDemEvent_CHNL_53cce282_CANSM_E_BUS_OFF, Satellite#OsApplication_Untrusted_Core0] */
  /*    58 */  /* [AutoCreatedDemEvent_CHNL_53cce282_CANSM_E_MODE_REQUEST_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*    59 */  /* [AutoCreatedDemEvent_CHNL_17344684_CANSM_E_BUS_OFF, Satellite#OsApplication_Untrusted_Core0] */
  /*    60 */  /* [AutoCreatedDemEvent_CHNL_17344684_CANSM_E_MODE_REQUEST_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*    61 */  /* [AutoCreatedDemEvent_CHNL_a6b6a922_CANSM_E_BUS_OFF, Satellite#OsApplication_Untrusted_Core0] */
  /*    62 */  /* [AutoCreatedDemEvent_CHNL_a6b6a922_CANSM_E_MODE_REQUEST_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*    63 */  /* [AutoCreatedDemEvent_CHNL_df893ad5_CANSM_E_BUS_OFF, Satellite#OsApplication_Untrusted_Core0] */
  /*    64 */  /* [AutoCreatedDemEvent_CHNL_df893ad5_CANSM_E_MODE_REQUEST_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*    65 */  /* [AutoCreatedDemEvent_CHNL_e058b4ae_CANSM_E_BUS_OFF, Satellite#OsApplication_Untrusted_Core0] */
  /*    66 */  /* [AutoCreatedDemEvent_CHNL_e058b4ae_CANSM_E_MODE_REQUEST_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*    67 */  /* [AutoCreatedDemEvent_ECUM_E_ALL_RUN_REQUESTS_KILLED, Satellite#OsApplication_Untrusted_Core0] */
  /*    68 */  /* [AutoCreatedDemEvent_ECUM_E_CONFIGURATION_DATA_INCONSISTENT, Satellite#OsApplication_Untrusted_Core0] */
  /*    69 */  /* [AutoCreatedDemEvent_ECUM_E_IMPROPER_CALLER, Satellite#OsApplication_Untrusted_Core0] */
  /*    70 */  /* [AutoCreatedDemEvent_ECUM_E_RAM_CHECK_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*    71 */  /* [AutoCreatedDemEvent_ESH_Action_CancelNvMWriteAll_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    72 */  /* [AutoCreatedDemEvent_ESH_Action_CancelWriteAllTimer_Start_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    73 */  /* [AutoCreatedDemEvent_ESH_Action_CancelWriteAllTimer_Stop_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    74 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone1J1939_0b1f4bae_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    75 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone1J1939_0b1f4bae_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    76 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone2_78967e2c_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    77 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_Backbone2_78967e2c_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    78 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_CabSubnet_9ea693f1_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    79 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_CabSubnet_9ea693f1_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    80 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_FMSNet_fce1aae5_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    81 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_FMSNet_fce1aae5_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    82 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN00_2cd9a7df_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    83 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN00_2cd9a7df_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    84 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN01_5bde9749_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    85 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN01_5bde9749_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    86 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN02_c2d7c6f3_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    87 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN02_c2d7c6f3_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    88 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN03_b5d0f665_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    89 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN03_b5d0f665_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    90 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN04_2bb463c6_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    91 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_LIN04_2bb463c6_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    92 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_SecuritySubnet_e7a0ee54_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    93 */  /* [AutoCreatedDemEvent_ESH_Action_ComMAllow_CN_SecuritySubnet_e7a0ee54_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    94 */  /* [AutoCreatedDemEvent_ESH_Action_ComMCheckPendingRequests_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    95 */  /* [AutoCreatedDemEvent_ESH_Action_ComMCheckPendingRequests_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*    96 */  /* [AutoCreatedDemEvent_ESH_Action_ComMCheckPendingRequests_BswMReportFailToDemRef_2, Satellite#OsApplication_Untrusted_Core0] */
  /*    97 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_Backbone1J1939_0b1f4bae_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    98 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_Backbone2_78967e2c_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*    99 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_CabSubnet_9ea693f1_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /* Index        Referable Keys  */
  /*   100 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_FMSNet_fce1aae5_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   101 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN00_2cd9a7df_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   102 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN01_5bde9749_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   103 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN02_c2d7c6f3_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   104 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN03_b5d0f665_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   105 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_LIN04_2bb463c6_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   106 */  /* [AutoCreatedDemEvent_ESH_Action_ComMDisallow_CN_SecuritySubnet_e7a0ee54_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   107 */  /* [AutoCreatedDemEvent_ESH_Action_DemInit_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   108 */  /* [AutoCreatedDemEvent_ESH_Action_DemInitialized_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   109 */  /* [AutoCreatedDemEvent_ESH_Action_DemNotInitialized_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   110 */  /* [AutoCreatedDemEvent_ESH_Action_DemShutdown_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   111 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_PostRun_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   112 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_PrepShutdown_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   113 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_PrepShutdown_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   114 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_Run_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   115 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_Run_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   116 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_WaitForNvm_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   117 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_Wakeup_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   118 */  /* [AutoCreatedDemEvent_ESH_Action_ESH_Wakeup_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   119 */  /* [AutoCreatedDemEvent_ESH_Action_EcuMClearValidatedWakeupEvents_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   120 */  /* [AutoCreatedDemEvent_ESH_Action_EcuMGoToSelectedShutdownTarget_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   121 */  /* [AutoCreatedDemEvent_ESH_Action_EnterExclusiveArea_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   122 */  /* [AutoCreatedDemEvent_ESH_Action_EnterExclusiveArea_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   123 */  /* [AutoCreatedDemEvent_ESH_Action_ExitExclusiveArea_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   124 */  /* [AutoCreatedDemEvent_ESH_Action_ExitExclusiveArea_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   125 */  /* [AutoCreatedDemEvent_ESH_Action_NvMWriteAll_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   126 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterPostRun_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   127 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterPrepShutdown_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   128 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterPrepShutdown_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   129 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterRun_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   130 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterRun_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   131 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterShutdown_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   132 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterWaitForNvm_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   133 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterWakeup_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   134 */  /* [AutoCreatedDemEvent_ESH_Action_OnEnterWakeup_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   135 */  /* [AutoCreatedDemEvent_ESH_Action_SelfRunRequestTimer_Start_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   136 */  /* [AutoCreatedDemEvent_ESH_Action_SelfRunRequestTimer_Start_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   137 */  /* [AutoCreatedDemEvent_ESH_Action_SwitchPostRun_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   138 */  /* [AutoCreatedDemEvent_ESH_Action_SwitchRun_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   139 */  /* [AutoCreatedDemEvent_ESH_Action_SwitchRun_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   140 */  /* [AutoCreatedDemEvent_ESH_Action_SwitchShutdown_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   141 */  /* [AutoCreatedDemEvent_ESH_Action_SwitchShutdown_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   142 */  /* [AutoCreatedDemEvent_ESH_Action_SwitchWakeup_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   143 */  /* [AutoCreatedDemEvent_ESH_Action_SwitchWakeup_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   144 */  /* [AutoCreatedDemEvent_ESH_Action_WriteAllTimer_Start_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   145 */  /* [AutoCreatedDemEvent_ESH_Action_WriteAllTimer_Stop_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   146 */  /* [AutoCreatedDemEvent_ESH_Action_WriteAllTimer_Stop_BswMReportFailToDemRef_1, Satellite#OsApplication_Untrusted_Core0] */
  /*   147 */  /* [AutoCreatedDemEvent_ESH_DemInit_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   148 */  /* [AutoCreatedDemEvent_ESH_PostRunNested_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   149 */  /* [AutoCreatedDemEvent_ESH_PostRunToPrepNested_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /* Index        Referable Keys  */
  /*   150 */  /* [AutoCreatedDemEvent_ESH_RunToPostRunNested_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   151 */  /* [AutoCreatedDemEvent_FLS_E_COMPARE_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*   152 */  /* [AutoCreatedDemEvent_FLS_E_ERASE_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*   153 */  /* [AutoCreatedDemEvent_FLS_E_READ_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*   154 */  /* [AutoCreatedDemEvent_FLS_E_UNEXPECTED_FLASH_ID, Satellite#OsApplication_Untrusted_Core0] */
  /*   155 */  /* [AutoCreatedDemEvent_FLS_E_WRITE_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*   156 */  /* [AutoCreatedDemEvent_GPT_E_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*   157 */  /* [AutoCreatedDemEvent_INIT_Action_BrsHw_EnableHwAccess_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   158 */  /* [AutoCreatedDemEvent_INIT_Action_CanIf_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   159 */  /* [AutoCreatedDemEvent_INIT_Action_CanNm_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   160 */  /* [AutoCreatedDemEvent_INIT_Action_CanSM_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   161 */  /* [AutoCreatedDemEvent_INIT_Action_CanTp_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   162 */  /* [AutoCreatedDemEvent_INIT_Action_Can_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   163 */  /* [AutoCreatedDemEvent_INIT_Action_ComM_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   164 */  /* [AutoCreatedDemEvent_INIT_Action_Com_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   165 */  /* [AutoCreatedDemEvent_INIT_Action_Dcm_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   166 */  /* [AutoCreatedDemEvent_INIT_Action_Dem_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   167 */  /* [AutoCreatedDemEvent_INIT_Action_EnableInterrupts_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   168 */  /* [AutoCreatedDemEvent_INIT_Action_Fee_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   169 */  /* [AutoCreatedDemEvent_INIT_Action_Issm_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   170 */  /* [AutoCreatedDemEvent_INIT_Action_J1939Nm_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   171 */  /* [AutoCreatedDemEvent_INIT_Action_J1939Rm_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   172 */  /* [AutoCreatedDemEvent_INIT_Action_J1939Tp_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   173 */  /* [AutoCreatedDemEvent_INIT_Action_LinIf_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   174 */  /* [AutoCreatedDemEvent_INIT_Action_LinSM_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   175 */  /* [AutoCreatedDemEvent_INIT_Action_LinTp_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   176 */  /* [AutoCreatedDemEvent_INIT_Action_Lin_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   177 */  /* [AutoCreatedDemEvent_INIT_Action_Nm_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   178 */  /* [AutoCreatedDemEvent_INIT_Action_NvMReadAll_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   179 */  /* [AutoCreatedDemEvent_INIT_Action_NvM_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   180 */  /* [AutoCreatedDemEvent_INIT_Action_PduR_Init_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   181 */  /* [AutoCreatedDemEvent_INIT_Action_RteStart_BswMReportFailToDemRef, Satellite#OsApplication_Untrusted_Core0] */
  /*   182 */  /* [AutoCreatedDemEvent_J1939NM_E_ADDRESS_LOST, Satellite#OsApplication_Untrusted_Core0] */
  /*   183 */  /* [AutoCreatedDemEvent_J1939TpConfiguration_J1939TP_E_COMMUNICATION, Satellite#OsApplication_Untrusted_Core0] */
  /*   184 */  /* [AutoCreatedDemEvent_LIN_E_TIMEOUT, Satellite#OsApplication_Untrusted_Core0] */
  /*   185 */  /* [AutoCreatedDemEvent_MCL_E_DMA_BUS, Satellite#OsApplication_Untrusted_Core0] */
  /*   186 */  /* [AutoCreatedDemEvent_MCL_E_DMA_DESCRIPTOR, Satellite#OsApplication_Untrusted_Core0] */
  /*   187 */  /* [AutoCreatedDemEvent_MCL_E_DMA_ECC, Satellite#OsApplication_Untrusted_Core0] */
  /*   188 */  /* [AutoCreatedDemEvent_MCL_E_DMA_INCONSISTENCY, Satellite#OsApplication_Untrusted_Core0] */
  /*   189 */  /* [AutoCreatedDemEvent_MCL_E_DMA_PRIORITY, Satellite#OsApplication_Untrusted_Core0] */
  /*   190 */  /* [AutoCreatedDemEvent_MCL_E_DMA_UNRECOGNIZED, Satellite#OsApplication_Untrusted_Core0] */
  /*   191 */  /* [AutoCreatedDemEvent_MCU_E_CLOCK_FAILURE, Satellite#OsApplication_Untrusted_Core0] */
  /*   192 */  /* [AutoCreatedDemEvent_MCU_E_INVALIDMODE_CONFIG, Satellite#OsApplication_Untrusted_Core0] */
  /*   193 */  /* [AutoCreatedDemEvent_MCU_E_SSCM_CER_FAILURE, Satellite#OsApplication_Untrusted_Core0] */
  /*   194 */  /* [AutoCreatedDemEvent_MCU_E_TIMEOUT_FAILURE, Satellite#OsApplication_Untrusted_Core0] */
  /*   195 */  /* [AutoCreatedDemEvent_NVM_E_INTEGRITY_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*   196 */  /* [AutoCreatedDemEvent_NVM_E_LOSS_OF_REDUNDANCY, Satellite#OsApplication_Untrusted_Core0] */
  /*   197 */  /* [AutoCreatedDemEvent_NVM_E_QUEUE_OVERFLOW, Satellite#OsApplication_Untrusted_Core0] */
  /*   198 */  /* [AutoCreatedDemEvent_NVM_E_REQ_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*   199 */  /* [AutoCreatedDemEvent_NVM_E_VERIFY_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /* Index        Referable Keys  */
  /*   200 */  /* [AutoCreatedDemEvent_NVM_E_WRITE_PROTECTED, Satellite#OsApplication_Untrusted_Core0] */
  /*   201 */  /* [AutoCreatedDemEvent_NVM_E_WRONG_BLOCK_ID, Satellite#OsApplication_Untrusted_Core0] */
  /*   202 */  /* [AutoCreatedDemEvent_SPI_E_HARDWARE_ERROR, Satellite#OsApplication_Untrusted_Core0] */
  /*   203 */  /* [AutoCreatedDemEvent_SpiDriver_SPI_E_HARDWARE_ERROR, Satellite#OsApplication_Untrusted_Core0] */
  /*   204 */  /* [AutoCreatedDemEvent_WDG_E_CORRUPT_CONFIG, Satellite#OsApplication_Untrusted_Core0] */
  /*   205 */  /* [AutoCreatedDemEvent_WDG_E_DISABLE_REJECTED, Satellite#OsApplication_Untrusted_Core0] */
  /*   206 */  /* [AutoCreatedDemEvent_WDG_E_FORBIDDEN_INVOCATION, Satellite#OsApplication_Untrusted_Core0] */
  /*   207 */  /* [AutoCreatedDemEvent_WDG_E_INVALID_CALL, Satellite#OsApplication_Untrusted_Core0] */
  /*   208 */  /* [AutoCreatedDemEvent_WDG_E_INVALID_PARAMETER, Satellite#OsApplication_Untrusted_Core0] */
  /*   209 */  /* [AutoCreatedDemEvent_WDG_E_MODE_FAILED, Satellite#OsApplication_Untrusted_Core0] */
  /*   210 */  /* [AutoCreatedDemEvent_WDG_E_UNLOCKED, Satellite#OsApplication_Untrusted_Core0] */
  /*   211 */  /* [DEM_EVENT_StartApplication, Satellite#OsApplication_Untrusted_Core0] */

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
VAR(Dem_FilterData_InfoType, DEM_VAR_NOINIT) Dem_Cfg_FilterInfoTable[1];
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
VAR(Dem_FreezeFrameIterator_FilterType, DEM_VAR_NOINIT) Dem_Cfg_FreezeFrameIteratorTable[1];
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
volatile VAR(Dem_Cfg_MemoryCommitNumberType, DEM_VAR_NOINIT) Dem_Cfg_MemoryCommitNumber[3];
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
VAR(Dem_Cfg_MemoryStatusType, DEM_VAR_NOINIT) Dem_Cfg_MemoryStatus[3];
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
VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_PrimaryChronology[1];
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
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_0;
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
VAR(Dem_Cfg_ReadoutBufferEntryType, DEM_VAR_NOINIT) Dem_Cfg_ReadoutBuffer[1];
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
VAR(Dem_Cfg_ReportedEventsType, DEM_VAR_NOINIT) Dem_Cfg_ReportedEventsOfFilter[1];
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
VAR(Dem_Cfg_SatelliteInfoTypeOsApplication_Untrusted_Core0, DEM_VAR_NOINIT) Dem_Cfg_SatelliteInfoOsApplication_Untrusted_Core0;
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
VAR(Dem_Cfg_StatusDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_StatusData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/



/**********************************************************************************************************************
  END OF FILE: Dem_Lcfg.c     [VolvoAB (Vector), VARIANT-POSTBUILD-LOADABLE, 12.05.00.95622]
**********************************************************************************************************************/

