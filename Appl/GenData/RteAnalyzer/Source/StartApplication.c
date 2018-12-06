/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  StartApplication.c
 *        Config:  SCIM_BP.dpa
 *     SW-C Type:  StartApplication
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <StartApplication>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */ /* MD_Rte_TestCode */

/* PRQA S 3109 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3112 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3197 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3198 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3199 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3201 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3203 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3205 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3206 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3218 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3229 EOF */ /* MD_Rte_TestCode */
/* PRQA S 2002 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3334 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3417 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3426 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3453 EOF */ /* MD_Rte_TestCode */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * ComM_ModeType
 *   
 *
 * Dcm_NegativeResponseCodeType
 *   
 *
 * Dem_EventStatusType
 *   
 *
 * Dem_OperationCycleStateType
 *   
 *
 * EcuM_SleepModeType
 *   
 *
 * EcuM_StateType
 *   
 *
 * EnumActiveComponentType
 *   
 *
 * EnumNM_ApplStateType
 *   
 *
 * J1939Rm_ExtIdType
 *   
 *
 *********************************************************************************************************************/

#include "Rte_StartApplication.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_StartApplication.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void StartApplication_TestDefines(void);

typedef P2FUNC(Std_ReturnType, RTE_CODE, FncPtrType)(void); /* PRQA S 3448 */ /* MD_Rte_TestCode */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * EcuM_SleepModeType: Integer in interval [0...255]
 * NetworkHandleType: Integer in interval [0...255]
 * boolean: Boolean (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ComM_ModeType: Enumeration of integer in interval [0...2] with enumerators
 *   COMM_NO_COMMUNICATION (0U)
 *   COMM_SILENT_COMMUNICATION (1U)
 *   COMM_FULL_COMMUNICATION (2U)
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...147] with enumerators
 *   DCM_E_POSITIVERESPONSE (0U)
 *   DCM_E_GENERALREJECT (16U)
 *   DCM_E_SERVICENOTSUPPORTED (17U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTED (18U)
 *   DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
 *   DCM_E_RESPONSETOOLONG (20U)
 *   DCM_E_BUSYREPEATREQUEST (33U)
 *   DCM_E_CONDITIONSNOTCORRECT (34U)
 *   DCM_E_REQUESTSEQUENCEERROR (36U)
 *   DCM_E_NORESPONSEFROMSUBNETCOMPONENT (37U)
 *   DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (38U)
 *   DCM_E_REQUESTOUTOFRANGE (49U)
 *   DCM_E_SECURITYACCESSDENIED (51U)
 *   DCM_E_INVALIDKEY (53U)
 *   DCM_E_EXCEEDNUMBEROFATTEMPTS (54U)
 *   DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (55U)
 *   DCM_E_UPLOADDOWNLOADNOTACCEPTED (112U)
 *   DCM_E_TRANSFERDATASUSPENDED (113U)
 *   DCM_E_GENERALPROGRAMMINGFAILURE (114U)
 *   DCM_E_WRONGBLOCKSEQUENCECOUNTER (115U)
 *   DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING (120U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
 *   DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (127U)
 *   DCM_E_RPMTOOHIGH (129U)
 *   DCM_E_RPMTOOLOW (130U)
 *   DCM_E_ENGINEISRUNNING (131U)
 *   DCM_E_ENGINEISNOTRUNNING (132U)
 *   DCM_E_ENGINERUNTIMETOOLOW (133U)
 *   DCM_E_TEMPERATURETOOHIGH (134U)
 *   DCM_E_TEMPERATURETOOLOW (135U)
 *   DCM_E_VEHICLESPEEDTOOHIGH (136U)
 *   DCM_E_VEHICLESPEEDTOOLOW (137U)
 *   DCM_E_THROTTLE_PEDALTOOHIGH (138U)
 *   DCM_E_THROTTLE_PEDALTOOLOW (139U)
 *   DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
 *   DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
 *   DCM_E_BRAKESWITCH_NOTCLOSED (143U)
 *   DCM_E_SHIFTERLEVERNOTINPARK (144U)
 *   DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
 *   DCM_E_VOLTAGETOOHIGH (146U)
 *   DCM_E_VOLTAGETOOLOW (147U)
 * Dem_EventStatusType: Enumeration of integer in interval [0...4] with enumerators
 *   DEM_EVENT_STATUS_PASSED (0U)
 *   DEM_EVENT_STATUS_FAILED (1U)
 *   DEM_EVENT_STATUS_PREPASSED (2U)
 *   DEM_EVENT_STATUS_PREFAILED (3U)
 *   DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED (4U)
 * Dem_OperationCycleStateType: Enumeration of integer in interval [0...1] with enumerators
 *   DEM_CYCLE_STATE_START (0U)
 *   DEM_CYCLE_STATE_END (1U)
 * EcuM_StateType: Enumeration of integer in interval [0...144] with enumerators
 *   ECUM_SUBSTATE_MASK (15U)
 *   ECUM_STATE_STARTUP (16U)
 *   ECUM_STATE_STARTUP_ONE (17U)
 *   ECUM_STATE_STARTUP_TWO (18U)
 *   ECUM_STATE_WAKEUP (32U)
 *   ECUM_STATE_WAKEUP_ONE (33U)
 *   ECUM_STATE_WAKEUP_VALIDATION (34U)
 *   ECUM_STATE_WAKEUP_REACTION (35U)
 *   ECUM_STATE_WAKEUP_TWO (36U)
 *   ECUM_STATE_WAKEUP_WAKESLEEP (37U)
 *   ECUM_STATE_WAKEUP_TTII (38U)
 *   ECUM_STATE_RUN (48U)
 *   ECUM_STATE_APP_RUN (50U)
 *   ECUM_STATE_APP_POST_RUN (51U)
 *   ECUM_STATE_SHUTDOWN (64U)
 *   ECUM_STATE_PREP_SHUTDOWN (68U)
 *   ECUM_STATE_GO_SLEEP (73U)
 *   ECUM_STATE_GO_OFF_ONE (77U)
 *   ECUM_STATE_GO_OFF_TWO (78U)
 *   ECUM_STATE_SLEEP (80U)
 *   ECUM_STATE_OFF (128U)
 *   ECUM_STATE_RESET (144U)
 * EnumActiveComponentType: Enumeration of integer in interval [0...255] with enumerators
 *   STARTAPPLICATION_ACTIVE_COMPONENT_COM_RXTX (0U)
 *   STARTAPPLICATION_ACTIVE_COMPONENT_DIAG (2U)
 *   STARTAPPLICATION_ACTIVE_COMPONENT_COM_TXONLY (3U)
 *   STARTAPPLICATION_ACTIVE_COMPONENT_MEMORYPROTECTION (9U)
 *   STARTAPPLICATION_ACTIVE_COMPONENT_NM (10U)
 *   STARTAPPLICATION_ACTIVE_COMPONENT_INVALID (255U)
 * EnumNM_ApplStateType: Enumeration of integer in interval [0...2] with enumerators
 *   NM_APPL_STATE_FULL_COMM_EXTERN (0U)
 *   NM_APPL_STATE_FULL_COMM_INTERN (1U)
 *   NM_APPL_STATE_NO_COMM_EXTERN (2U)
 * J1939Rm_ExtIdType: Enumeration of integer in interval [0...4] with enumerators
 *   J1939RM_EXTID_NONE (0U)
 *   J1939RM_EXTID_ONE (1U)
 *   J1939RM_EXTID_TWO (2U)
 *   J1939RM_EXTID_THREE (3U)
 *   J1939RM_EXTID_GF (4U)
 *
 * Array Types:
 * ============
 * DataArray_Type_2: Array with 2 element(s) of type uint8
 * Dcm_Data2ByteType: Array with 2 element(s) of type uint8
 *
 * Record Types:
 * =============
 * DtMemoryProtectionDataElementType: Record with elements
 *   Value of type uint8
 *   InvalidAccess of type boolean
 * J1939Rm_ExtIdInfoType: Record with elements
 *   ExtIdType of type J1939Rm_ExtIdType
 *   ExtId1 of type uint8
 *   ExtId2 of type uint8
 *   ExtId3 of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_NM_ActiveComMUsers(void)
 *   uint16 *Rte_Pim_COM_RxSigValue0(void)
 *   uint16 *Rte_Pim_COM_TxSigValue1(void)
 *   EnumActiveComponentType *Rte_Pim_ActiveComponent(void)
 *   uint8 *Rte_Pim_COM_RxSigValue1(void)
 *   uint8 *Rte_Pim_COM_TxSigValue0(void)
 *   uint8 *Rte_Pim_DIAG_LastRxData(void)
 *   uint8 *Rte_Pim_NM_ActiveChannelHasFullComRequest(void)
 *   uint8 *Rte_Pim_NM_ActiveComMChannel(void)
 *   EnumNM_ApplStateType *Rte_Pim_NM_ApplState(void)
 *   uint8 *Rte_Pim_NM_BusSleepModeTimer(void)
 *   uint8 *Rte_Pim_TxCtrlSigValue(void)
 *   uint8 *Rte_Pim_TxDataSigValue(void)
 *   uint8 *Rte_Pim_Uptime(void)
 *
 *********************************************************************************************************************/


#define StartApplication_START_SEC_CODE
#include "StartApplication_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StartApplication_Cyclic1000ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 1s
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_Cyclic1000ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StartApplication_CODE) StartApplication_Cyclic1000ms(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_Cyclic1000ms
 *********************************************************************************************************************/

  uint32 PimNM_ActiveComMUsers;
  uint16 PimCOM_RxSigValue0;
  uint16 PimCOM_TxSigValue1;
  EnumActiveComponentType PimActiveComponent;
  uint8 PimCOM_RxSigValue1;
  uint8 PimCOM_TxSigValue0;
  uint8 PimDIAG_LastRxData;
  uint8 PimNM_ActiveChannelHasFullComRequest;
  uint8 PimNM_ActiveComMChannel;
  EnumNM_ApplStateType PimNM_ApplState;
  uint8 PimNM_BusSleepModeTimer;
  uint8 PimTxCtrlSigValue;
  uint8 PimTxDataSigValue;
  uint8 PimUptime;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  PimNM_ActiveComMUsers = *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers() = PimNM_ActiveComMUsers;
  PimCOM_RxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue0() = PimCOM_RxSigValue0;
  PimCOM_TxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue1() = PimCOM_TxSigValue1;
  PimActiveComponent = *TSC_StartApplication_Rte_Pim_ActiveComponent();
  *TSC_StartApplication_Rte_Pim_ActiveComponent() = PimActiveComponent;
  PimCOM_RxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue1() = PimCOM_RxSigValue1;
  PimCOM_TxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue0() = PimCOM_TxSigValue0;
  PimDIAG_LastRxData = *TSC_StartApplication_Rte_Pim_DIAG_LastRxData();
  *TSC_StartApplication_Rte_Pim_DIAG_LastRxData() = PimDIAG_LastRxData;
  PimNM_ActiveChannelHasFullComRequest = *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest();
  *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest() = PimNM_ActiveChannelHasFullComRequest;
  PimNM_ActiveComMChannel = *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel() = PimNM_ActiveComMChannel;
  PimNM_ApplState = *TSC_StartApplication_Rte_Pim_NM_ApplState();
  *TSC_StartApplication_Rte_Pim_NM_ApplState() = PimNM_ApplState;
  PimNM_BusSleepModeTimer = *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer();
  *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer() = PimNM_BusSleepModeTimer;
  PimTxCtrlSigValue = *TSC_StartApplication_Rte_Pim_TxCtrlSigValue();
  *TSC_StartApplication_Rte_Pim_TxCtrlSigValue() = PimTxCtrlSigValue;
  PimTxDataSigValue = *TSC_StartApplication_Rte_Pim_TxDataSigValue();
  *TSC_StartApplication_Rte_Pim_TxDataSigValue() = PimTxDataSigValue;
  PimUptime = *TSC_StartApplication_Rte_Pim_Uptime();
  *TSC_StartApplication_Rte_Pim_Uptime() = PimUptime;

  StartApplication_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StartApplication_Cyclic10ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_Cyclic10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StartApplication_CODE) StartApplication_Cyclic10ms(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_Cyclic10ms
 *********************************************************************************************************************/

  uint32 PimNM_ActiveComMUsers;
  uint16 PimCOM_RxSigValue0;
  uint16 PimCOM_TxSigValue1;
  EnumActiveComponentType PimActiveComponent;
  uint8 PimCOM_RxSigValue1;
  uint8 PimCOM_TxSigValue0;
  uint8 PimDIAG_LastRxData;
  uint8 PimNM_ActiveChannelHasFullComRequest;
  uint8 PimNM_ActiveComMChannel;
  EnumNM_ApplStateType PimNM_ApplState;
  uint8 PimNM_BusSleepModeTimer;
  uint8 PimTxCtrlSigValue;
  uint8 PimTxDataSigValue;
  uint8 PimUptime;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  PimNM_ActiveComMUsers = *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers() = PimNM_ActiveComMUsers;
  PimCOM_RxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue0() = PimCOM_RxSigValue0;
  PimCOM_TxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue1() = PimCOM_TxSigValue1;
  PimActiveComponent = *TSC_StartApplication_Rte_Pim_ActiveComponent();
  *TSC_StartApplication_Rte_Pim_ActiveComponent() = PimActiveComponent;
  PimCOM_RxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue1() = PimCOM_RxSigValue1;
  PimCOM_TxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue0() = PimCOM_TxSigValue0;
  PimDIAG_LastRxData = *TSC_StartApplication_Rte_Pim_DIAG_LastRxData();
  *TSC_StartApplication_Rte_Pim_DIAG_LastRxData() = PimDIAG_LastRxData;
  PimNM_ActiveChannelHasFullComRequest = *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest();
  *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest() = PimNM_ActiveChannelHasFullComRequest;
  PimNM_ActiveComMChannel = *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel() = PimNM_ActiveComMChannel;
  PimNM_ApplState = *TSC_StartApplication_Rte_Pim_NM_ApplState();
  *TSC_StartApplication_Rte_Pim_NM_ApplState() = PimNM_ApplState;
  PimNM_BusSleepModeTimer = *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer();
  *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer() = PimNM_BusSleepModeTimer;
  PimTxCtrlSigValue = *TSC_StartApplication_Rte_Pim_TxCtrlSigValue();
  *TSC_StartApplication_Rte_Pim_TxCtrlSigValue() = PimTxCtrlSigValue;
  PimTxDataSigValue = *TSC_StartApplication_Rte_Pim_TxDataSigValue();
  *TSC_StartApplication_Rte_Pim_TxDataSigValue() = PimTxDataSigValue;
  PimUptime = *TSC_StartApplication_Rte_Pim_Uptime();
  *TSC_StartApplication_Rte_Pim_Uptime() = PimUptime;


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StartApplication_Cyclic1ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 1ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_Cyclic1ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StartApplication_CODE) StartApplication_Cyclic1ms(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_Cyclic1ms
 *********************************************************************************************************************/

  uint32 PimNM_ActiveComMUsers;
  uint16 PimCOM_RxSigValue0;
  uint16 PimCOM_TxSigValue1;
  EnumActiveComponentType PimActiveComponent;
  uint8 PimCOM_RxSigValue1;
  uint8 PimCOM_TxSigValue0;
  uint8 PimDIAG_LastRxData;
  uint8 PimNM_ActiveChannelHasFullComRequest;
  uint8 PimNM_ActiveComMChannel;
  EnumNM_ApplStateType PimNM_ApplState;
  uint8 PimNM_BusSleepModeTimer;
  uint8 PimTxCtrlSigValue;
  uint8 PimTxDataSigValue;
  uint8 PimUptime;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  PimNM_ActiveComMUsers = *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers() = PimNM_ActiveComMUsers;
  PimCOM_RxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue0() = PimCOM_RxSigValue0;
  PimCOM_TxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue1() = PimCOM_TxSigValue1;
  PimActiveComponent = *TSC_StartApplication_Rte_Pim_ActiveComponent();
  *TSC_StartApplication_Rte_Pim_ActiveComponent() = PimActiveComponent;
  PimCOM_RxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue1() = PimCOM_RxSigValue1;
  PimCOM_TxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue0() = PimCOM_TxSigValue0;
  PimDIAG_LastRxData = *TSC_StartApplication_Rte_Pim_DIAG_LastRxData();
  *TSC_StartApplication_Rte_Pim_DIAG_LastRxData() = PimDIAG_LastRxData;
  PimNM_ActiveChannelHasFullComRequest = *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest();
  *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest() = PimNM_ActiveChannelHasFullComRequest;
  PimNM_ActiveComMChannel = *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel() = PimNM_ActiveComMChannel;
  PimNM_ApplState = *TSC_StartApplication_Rte_Pim_NM_ApplState();
  *TSC_StartApplication_Rte_Pim_NM_ApplState() = PimNM_ApplState;
  PimNM_BusSleepModeTimer = *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer();
  *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer() = PimNM_BusSleepModeTimer;
  PimTxCtrlSigValue = *TSC_StartApplication_Rte_Pim_TxCtrlSigValue();
  *TSC_StartApplication_Rte_Pim_TxCtrlSigValue() = PimTxCtrlSigValue;
  PimTxDataSigValue = *TSC_StartApplication_Rte_Pim_TxDataSigValue();
  *TSC_StartApplication_Rte_Pim_TxDataSigValue() = PimTxDataSigValue;
  PimUptime = *TSC_StartApplication_Rte_Pim_Uptime();
  *TSC_StartApplication_Rte_Pim_Uptime() = PimUptime;


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StartApplication_Cyclic250ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 250ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx_DeEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx(uint16 *data)
 *   Std_ReturnType Rte_Read_PpFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx_DeFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx(uint8 *data)
 *   Std_ReturnType Rte_Read_PpTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx_DeTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx(uint16 *data)
 *   Std_ReturnType Rte_Read_PpTrustedDataVerification_DeValue(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx_DeDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx(uint32 data)
 *   Std_ReturnType Rte_Write_PpFSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx_DeFSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx(uint16 data)
 *   Std_ReturnType Rte_Write_PpPinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx_DePinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint16 Rte_IrvRead_StartApplication_Cyclic250ms_IrvOccuranceCounterDid(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_PpMemoryAccessViolationState_GetState(boolean *State)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PpJ1939Rm_SendRequest_J1939RmUser_StartApplication_SendRequest(NetworkHandleType channel, uint32 requestedPgn, const J1939Rm_ExtIdInfoType *extIdInfo, uint8 destAddress, uint8 priority, boolean checkTimeout)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiJ1939Rm_SendRequest_J1939RmUser_StartApplication_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_Backbone1J1939_2a22de3d_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_Backbone1J1939_2a22de3d_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_Backbone1J1939_2a22de3d_E_MODE_LIMITATION, RTE_E_PiUR_CN_Backbone1J1939_2a22de3d_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_Backbone2_3f947ba3_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_Backbone2_3f947ba3_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_Backbone2_3f947ba3_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_Backbone2_3f947ba3_E_MODE_LIMITATION, RTE_E_PiUR_CN_Backbone2_3f947ba3_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_CabSubnet_aa77b0b0_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_CabSubnet_aa77b0b0_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_CabSubnet_aa77b0b0_E_MODE_LIMITATION, RTE_E_PiUR_CN_CabSubnet_aa77b0b0_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_FMSNet_05490e3d_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_FMSNet_05490e3d_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_FMSNet_05490e3d_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_FMSNet_05490e3d_E_MODE_LIMITATION, RTE_E_PiUR_CN_FMSNet_05490e3d_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN00_ace1a6ba_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_LIN00_ace1a6ba_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN00_ace1a6ba_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_LIN00_ace1a6ba_E_MODE_LIMITATION, RTE_E_PiUR_CN_LIN00_ace1a6ba_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN01_4323cd84_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_LIN01_4323cd84_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN01_4323cd84_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_LIN01_4323cd84_E_MODE_LIMITATION, RTE_E_PiUR_CN_LIN01_4323cd84_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN02_a8147687_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_LIN02_a8147687_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN02_a8147687_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_LIN02_a8147687_E_MODE_LIMITATION, RTE_E_PiUR_CN_LIN02_a8147687_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN03_47d61db9_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_LIN03_47d61db9_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN03_47d61db9_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_LIN03_47d61db9_E_MODE_LIMITATION, RTE_E_PiUR_CN_LIN03_47d61db9_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN04_a50a06c0_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_LIN04_a50a06c0_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN04_a50a06c0_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_LIN04_a50a06c0_E_MODE_LIMITATION, RTE_E_PiUR_CN_LIN04_a50a06c0_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_SecuritySubnet_7cec9a61_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_SecuritySubnet_7cec9a61_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_SecuritySubnet_7cec9a61_E_MODE_LIMITATION, RTE_E_PiUR_CN_SecuritySubnet_7cec9a61_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_Cyclic250ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StartApplication_CODE) StartApplication_Cyclic250ms(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_Cyclic250ms
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint16 Read_PpEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx_DeEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx;
  uint8 Read_PpFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx_DeFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx;
  uint16 Read_PpTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx_DeTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx;
  uint8 Read_PpTrustedDataVerification_DeValue;

  uint32 PimNM_ActiveComMUsers;
  uint16 PimCOM_RxSigValue0;
  uint16 PimCOM_TxSigValue1;
  EnumActiveComponentType PimActiveComponent;
  uint8 PimCOM_RxSigValue1;
  uint8 PimCOM_TxSigValue0;
  uint8 PimDIAG_LastRxData;
  uint8 PimNM_ActiveChannelHasFullComRequest;
  uint8 PimNM_ActiveComMChannel;
  EnumNM_ApplStateType PimNM_ApplState;
  uint8 PimNM_BusSleepModeTimer;
  uint8 PimTxCtrlSigValue;
  uint8 PimTxDataSigValue;
  uint8 PimUptime;

  uint16 StartApplication_Cyclic250ms_IrvOccuranceCounterDid;

  boolean Call_PpMemoryAccessViolationState_GetState_State = FALSE;

  J1939Rm_ExtIdInfoType Call_PpJ1939Rm_SendRequest_J1939RmUser_StartApplication_SendRequest_extIdInfo = {
  0U, 0U, 0U, 0U
};
  ComM_ModeType Call_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode_ComMode = 0U;
  ComM_ModeType Call_UR_CN_Backbone2_3f947ba3_GetCurrentComMode_ComMode = 0U;
  ComM_ModeType Call_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode_ComMode = 0U;
  ComM_ModeType Call_UR_CN_FMSNet_05490e3d_GetCurrentComMode_ComMode = 0U;
  ComM_ModeType Call_UR_CN_LIN00_ace1a6ba_GetCurrentComMode_ComMode = 0U;
  ComM_ModeType Call_UR_CN_LIN01_4323cd84_GetCurrentComMode_ComMode = 0U;
  ComM_ModeType Call_UR_CN_LIN02_a8147687_GetCurrentComMode_ComMode = 0U;
  ComM_ModeType Call_UR_CN_LIN03_47d61db9_GetCurrentComMode_ComMode = 0U;
  ComM_ModeType Call_UR_CN_LIN04_a50a06c0_GetCurrentComMode_ComMode = 0U;
  ComM_ModeType Call_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode_ComMode = 0U;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  PimNM_ActiveComMUsers = *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers() = PimNM_ActiveComMUsers;
  PimCOM_RxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue0() = PimCOM_RxSigValue0;
  PimCOM_TxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue1() = PimCOM_TxSigValue1;
  PimActiveComponent = *TSC_StartApplication_Rte_Pim_ActiveComponent();
  *TSC_StartApplication_Rte_Pim_ActiveComponent() = PimActiveComponent;
  PimCOM_RxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue1() = PimCOM_RxSigValue1;
  PimCOM_TxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue0() = PimCOM_TxSigValue0;
  PimDIAG_LastRxData = *TSC_StartApplication_Rte_Pim_DIAG_LastRxData();
  *TSC_StartApplication_Rte_Pim_DIAG_LastRxData() = PimDIAG_LastRxData;
  PimNM_ActiveChannelHasFullComRequest = *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest();
  *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest() = PimNM_ActiveChannelHasFullComRequest;
  PimNM_ActiveComMChannel = *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel() = PimNM_ActiveComMChannel;
  PimNM_ApplState = *TSC_StartApplication_Rte_Pim_NM_ApplState();
  *TSC_StartApplication_Rte_Pim_NM_ApplState() = PimNM_ApplState;
  PimNM_BusSleepModeTimer = *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer();
  *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer() = PimNM_BusSleepModeTimer;
  PimTxCtrlSigValue = *TSC_StartApplication_Rte_Pim_TxCtrlSigValue();
  *TSC_StartApplication_Rte_Pim_TxCtrlSigValue() = PimTxCtrlSigValue;
  PimTxDataSigValue = *TSC_StartApplication_Rte_Pim_TxDataSigValue();
  *TSC_StartApplication_Rte_Pim_TxDataSigValue() = PimTxDataSigValue;
  PimUptime = *TSC_StartApplication_Rte_Pim_Uptime();
  *TSC_StartApplication_Rte_Pim_Uptime() = PimUptime;

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)Rte_Read_PpEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx_DeEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Read_PpEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx_DeEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx(&Read_PpEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx_DeEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)Rte_Read_PpFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx_DeFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Read_PpFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx_DeFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx(&Read_PpFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx_DeFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)Rte_Read_PpTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx_DeTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Read_PpTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx_DeTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx(&Read_PpTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx_DeTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)Rte_Read_PpTrustedDataVerification_DeValue; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Read_PpTrustedDataVerification_DeValue(&Read_PpTrustedDataVerification_DeValue);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)Rte_Write_PpDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx_DeDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Write_PpDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx_DeDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx(Rte_InitValue_PpDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx_DeDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)Rte_Write_PpFSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx_DeFSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Write_PpFSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx_DeFSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx(Rte_InitValue_PpFSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx_DeFSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)Rte_Write_PpPinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx_DePinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Write_PpPinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx_DePinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx(Rte_InitValue_PpPinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx_DePinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  StartApplication_Cyclic250ms_IrvOccuranceCounterDid = TSC_StartApplication_Rte_IrvRead_StartApplication_Cyclic250ms_IrvOccuranceCounterDid();

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_PpMemoryAccessViolationState_GetState; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_PpMemoryAccessViolationState_GetState(&Call_PpMemoryAccessViolationState_GetState_State);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_PpJ1939Rm_SendRequest_J1939RmUser_StartApplication_SendRequest; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_PpJ1939Rm_SendRequest_J1939RmUser_StartApplication_SendRequest(0U, 0U, &Call_PpJ1939Rm_SendRequest_J1939RmUser_StartApplication_SendRequest_extIdInfo, 0U, 0U, FALSE);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiJ1939Rm_SendRequest_J1939RmUser_StartApplication_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode(&Call_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode_ComMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_Backbone1J1939_2a22de3d_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_Backbone1J1939_2a22de3d_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_Backbone1J1939_2a22de3d_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_Backbone1J1939_2a22de3d_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_Backbone1J1939_2a22de3d_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_Backbone2_3f947ba3_GetCurrentComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_Backbone2_3f947ba3_GetCurrentComMode(&Call_UR_CN_Backbone2_3f947ba3_GetCurrentComMode_ComMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_Backbone2_3f947ba3_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_Backbone2_3f947ba3_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_Backbone2_3f947ba3_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_Backbone2_3f947ba3_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_Backbone2_3f947ba3_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode(&Call_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode_ComMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_CabSubnet_aa77b0b0_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_CabSubnet_aa77b0b0_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_CabSubnet_aa77b0b0_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_CabSubnet_aa77b0b0_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_CabSubnet_aa77b0b0_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_FMSNet_05490e3d_GetCurrentComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_FMSNet_05490e3d_GetCurrentComMode(&Call_UR_CN_FMSNet_05490e3d_GetCurrentComMode_ComMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_FMSNet_05490e3d_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_FMSNet_05490e3d_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_FMSNet_05490e3d_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_FMSNet_05490e3d_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_FMSNet_05490e3d_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_LIN00_ace1a6ba_GetCurrentComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_LIN00_ace1a6ba_GetCurrentComMode(&Call_UR_CN_LIN00_ace1a6ba_GetCurrentComMode_ComMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN00_ace1a6ba_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_LIN00_ace1a6ba_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_LIN00_ace1a6ba_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN00_ace1a6ba_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN00_ace1a6ba_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_LIN01_4323cd84_GetCurrentComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_LIN01_4323cd84_GetCurrentComMode(&Call_UR_CN_LIN01_4323cd84_GetCurrentComMode_ComMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN01_4323cd84_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_LIN01_4323cd84_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_LIN01_4323cd84_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN01_4323cd84_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN01_4323cd84_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_LIN02_a8147687_GetCurrentComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_LIN02_a8147687_GetCurrentComMode(&Call_UR_CN_LIN02_a8147687_GetCurrentComMode_ComMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN02_a8147687_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_LIN02_a8147687_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_LIN02_a8147687_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN02_a8147687_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN02_a8147687_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_LIN03_47d61db9_GetCurrentComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_LIN03_47d61db9_GetCurrentComMode(&Call_UR_CN_LIN03_47d61db9_GetCurrentComMode_ComMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN03_47d61db9_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_LIN03_47d61db9_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_LIN03_47d61db9_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN03_47d61db9_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN03_47d61db9_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_LIN04_a50a06c0_GetCurrentComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_LIN04_a50a06c0_GetCurrentComMode(&Call_UR_CN_LIN04_a50a06c0_GetCurrentComMode_ComMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN04_a50a06c0_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_LIN04_a50a06c0_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_LIN04_a50a06c0_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN04_a50a06c0_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN04_a50a06c0_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode(&Call_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode_ComMode);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_SecuritySubnet_7cec9a61_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_SecuritySubnet_7cec9a61_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_SecuritySubnet_7cec9a61_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_SecuritySubnet_7cec9a61_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_SecuritySubnet_7cec9a61_E_NOT_OK:
      fct_error = 1;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StartApplication_DIAG_ConditionCheckRead
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <PpDcmDataService_DID_StartApplication>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void StartApplication_DIAG_ConditionCheckRead(Dcm_NegativeResponseCodeType *ErrorCode)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_DIAG_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StartApplication_CODE) StartApplication_DIAG_ConditionCheckRead(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_DIAG_ConditionCheckRead
 *********************************************************************************************************************/

  uint32 PimNM_ActiveComMUsers;
  uint16 PimCOM_RxSigValue0;
  uint16 PimCOM_TxSigValue1;
  EnumActiveComponentType PimActiveComponent;
  uint8 PimCOM_RxSigValue1;
  uint8 PimCOM_TxSigValue0;
  uint8 PimDIAG_LastRxData;
  uint8 PimNM_ActiveChannelHasFullComRequest;
  uint8 PimNM_ActiveComMChannel;
  EnumNM_ApplStateType PimNM_ApplState;
  uint8 PimNM_BusSleepModeTimer;
  uint8 PimTxCtrlSigValue;
  uint8 PimTxDataSigValue;
  uint8 PimUptime;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  PimNM_ActiveComMUsers = *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers() = PimNM_ActiveComMUsers;
  PimCOM_RxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue0() = PimCOM_RxSigValue0;
  PimCOM_TxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue1() = PimCOM_TxSigValue1;
  PimActiveComponent = *TSC_StartApplication_Rte_Pim_ActiveComponent();
  *TSC_StartApplication_Rte_Pim_ActiveComponent() = PimActiveComponent;
  PimCOM_RxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue1() = PimCOM_RxSigValue1;
  PimCOM_TxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue0() = PimCOM_TxSigValue0;
  PimDIAG_LastRxData = *TSC_StartApplication_Rte_Pim_DIAG_LastRxData();
  *TSC_StartApplication_Rte_Pim_DIAG_LastRxData() = PimDIAG_LastRxData;
  PimNM_ActiveChannelHasFullComRequest = *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest();
  *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest() = PimNM_ActiveChannelHasFullComRequest;
  PimNM_ActiveComMChannel = *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel() = PimNM_ActiveComMChannel;
  PimNM_ApplState = *TSC_StartApplication_Rte_Pim_NM_ApplState();
  *TSC_StartApplication_Rte_Pim_NM_ApplState() = PimNM_ApplState;
  PimNM_BusSleepModeTimer = *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer();
  *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer() = PimNM_BusSleepModeTimer;
  PimTxCtrlSigValue = *TSC_StartApplication_Rte_Pim_TxCtrlSigValue();
  *TSC_StartApplication_Rte_Pim_TxCtrlSigValue() = PimTxCtrlSigValue;
  PimTxDataSigValue = *TSC_StartApplication_Rte_Pim_TxDataSigValue();
  *TSC_StartApplication_Rte_Pim_TxDataSigValue() = PimTxDataSigValue;
  PimUptime = *TSC_StartApplication_Rte_Pim_Uptime();
  *TSC_StartApplication_Rte_Pim_Uptime() = PimUptime;


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StartApplication_DIAG_DcmReadData
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <PpDcmDataService_DID_StartApplication>
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint16 Rte_IrvRead_StartApplication_DIAG_DcmReadData_IrvOccuranceCounterDid(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void StartApplication_DIAG_DcmReadData(uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_DIAG_DcmReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StartApplication_CODE) StartApplication_DIAG_DcmReadData(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_DIAG_DcmReadData
 *********************************************************************************************************************/

  uint32 PimNM_ActiveComMUsers;
  uint16 PimCOM_RxSigValue0;
  uint16 PimCOM_TxSigValue1;
  EnumActiveComponentType PimActiveComponent;
  uint8 PimCOM_RxSigValue1;
  uint8 PimCOM_TxSigValue0;
  uint8 PimDIAG_LastRxData;
  uint8 PimNM_ActiveChannelHasFullComRequest;
  uint8 PimNM_ActiveComMChannel;
  EnumNM_ApplStateType PimNM_ApplState;
  uint8 PimNM_BusSleepModeTimer;
  uint8 PimTxCtrlSigValue;
  uint8 PimTxDataSigValue;
  uint8 PimUptime;

  uint16 StartApplication_DIAG_DcmReadData_IrvOccuranceCounterDid;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  PimNM_ActiveComMUsers = *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers() = PimNM_ActiveComMUsers;
  PimCOM_RxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue0() = PimCOM_RxSigValue0;
  PimCOM_TxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue1() = PimCOM_TxSigValue1;
  PimActiveComponent = *TSC_StartApplication_Rte_Pim_ActiveComponent();
  *TSC_StartApplication_Rte_Pim_ActiveComponent() = PimActiveComponent;
  PimCOM_RxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue1() = PimCOM_RxSigValue1;
  PimCOM_TxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue0() = PimCOM_TxSigValue0;
  PimDIAG_LastRxData = *TSC_StartApplication_Rte_Pim_DIAG_LastRxData();
  *TSC_StartApplication_Rte_Pim_DIAG_LastRxData() = PimDIAG_LastRxData;
  PimNM_ActiveChannelHasFullComRequest = *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest();
  *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest() = PimNM_ActiveChannelHasFullComRequest;
  PimNM_ActiveComMChannel = *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel() = PimNM_ActiveComMChannel;
  PimNM_ApplState = *TSC_StartApplication_Rte_Pim_NM_ApplState();
  *TSC_StartApplication_Rte_Pim_NM_ApplState() = PimNM_ApplState;
  PimNM_BusSleepModeTimer = *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer();
  *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer() = PimNM_BusSleepModeTimer;
  PimTxCtrlSigValue = *TSC_StartApplication_Rte_Pim_TxCtrlSigValue();
  *TSC_StartApplication_Rte_Pim_TxCtrlSigValue() = PimTxCtrlSigValue;
  PimTxDataSigValue = *TSC_StartApplication_Rte_Pim_TxDataSigValue();
  *TSC_StartApplication_Rte_Pim_TxDataSigValue() = PimTxDataSigValue;
  PimUptime = *TSC_StartApplication_Rte_Pim_Uptime();
  *TSC_StartApplication_Rte_Pim_Uptime() = PimUptime;

  StartApplication_DIAG_DcmReadData_IrvOccuranceCounterDid = TSC_StartApplication_Rte_IrvRead_StartApplication_DIAG_DcmReadData_IrvOccuranceCounterDid();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StartApplication_DIAG_DcmWriteData
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <PpDcmDataService_DID_StartApplication>
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_StartApplication_DIAG_DcmWriteData_IrvOccuranceCounterDid(uint16 data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void StartApplication_DIAG_DcmWriteData(const uint8 *Data, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_DIAG_DcmWriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StartApplication_CODE) StartApplication_DIAG_DcmWriteData(P2CONST(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_DIAG_DcmWriteData
 *********************************************************************************************************************/

  uint32 PimNM_ActiveComMUsers;
  uint16 PimCOM_RxSigValue0;
  uint16 PimCOM_TxSigValue1;
  EnumActiveComponentType PimActiveComponent;
  uint8 PimCOM_RxSigValue1;
  uint8 PimCOM_TxSigValue0;
  uint8 PimDIAG_LastRxData;
  uint8 PimNM_ActiveChannelHasFullComRequest;
  uint8 PimNM_ActiveComMChannel;
  EnumNM_ApplStateType PimNM_ApplState;
  uint8 PimNM_BusSleepModeTimer;
  uint8 PimTxCtrlSigValue;
  uint8 PimTxDataSigValue;
  uint8 PimUptime;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  PimNM_ActiveComMUsers = *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers() = PimNM_ActiveComMUsers;
  PimCOM_RxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue0() = PimCOM_RxSigValue0;
  PimCOM_TxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue1() = PimCOM_TxSigValue1;
  PimActiveComponent = *TSC_StartApplication_Rte_Pim_ActiveComponent();
  *TSC_StartApplication_Rte_Pim_ActiveComponent() = PimActiveComponent;
  PimCOM_RxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue1() = PimCOM_RxSigValue1;
  PimCOM_TxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue0() = PimCOM_TxSigValue0;
  PimDIAG_LastRxData = *TSC_StartApplication_Rte_Pim_DIAG_LastRxData();
  *TSC_StartApplication_Rte_Pim_DIAG_LastRxData() = PimDIAG_LastRxData;
  PimNM_ActiveChannelHasFullComRequest = *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest();
  *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest() = PimNM_ActiveChannelHasFullComRequest;
  PimNM_ActiveComMChannel = *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel() = PimNM_ActiveComMChannel;
  PimNM_ApplState = *TSC_StartApplication_Rte_Pim_NM_ApplState();
  *TSC_StartApplication_Rte_Pim_NM_ApplState() = PimNM_ApplState;
  PimNM_BusSleepModeTimer = *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer();
  *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer() = PimNM_BusSleepModeTimer;
  PimTxCtrlSigValue = *TSC_StartApplication_Rte_Pim_TxCtrlSigValue();
  *TSC_StartApplication_Rte_Pim_TxCtrlSigValue() = PimTxCtrlSigValue;
  PimTxDataSigValue = *TSC_StartApplication_Rte_Pim_TxDataSigValue();
  *TSC_StartApplication_Rte_Pim_TxDataSigValue() = PimTxDataSigValue;
  PimUptime = *TSC_StartApplication_Rte_Pim_Uptime();
  *TSC_StartApplication_Rte_Pim_Uptime() = PimUptime;

  TSC_StartApplication_Rte_IrvWrite_StartApplication_DIAG_DcmWriteData_IrvOccuranceCounterDid(0U);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StartApplication_DIAG_DemReadData
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <PpDemDataService_DemDataElementClass_StartApplication>
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint16 Rte_IrvRead_StartApplication_DIAG_DemReadData_IrvOccuranceCounterDid(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void StartApplication_DIAG_DemReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArray_Type_2
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_DIAG_DemReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StartApplication_CODE) StartApplication_DIAG_DemReadData(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_DIAG_DemReadData
 *********************************************************************************************************************/

  uint32 PimNM_ActiveComMUsers;
  uint16 PimCOM_RxSigValue0;
  uint16 PimCOM_TxSigValue1;
  EnumActiveComponentType PimActiveComponent;
  uint8 PimCOM_RxSigValue1;
  uint8 PimCOM_TxSigValue0;
  uint8 PimDIAG_LastRxData;
  uint8 PimNM_ActiveChannelHasFullComRequest;
  uint8 PimNM_ActiveComMChannel;
  EnumNM_ApplStateType PimNM_ApplState;
  uint8 PimNM_BusSleepModeTimer;
  uint8 PimTxCtrlSigValue;
  uint8 PimTxDataSigValue;
  uint8 PimUptime;

  uint16 StartApplication_DIAG_DemReadData_IrvOccuranceCounterDid;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  PimNM_ActiveComMUsers = *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers() = PimNM_ActiveComMUsers;
  PimCOM_RxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue0() = PimCOM_RxSigValue0;
  PimCOM_TxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue1() = PimCOM_TxSigValue1;
  PimActiveComponent = *TSC_StartApplication_Rte_Pim_ActiveComponent();
  *TSC_StartApplication_Rte_Pim_ActiveComponent() = PimActiveComponent;
  PimCOM_RxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue1() = PimCOM_RxSigValue1;
  PimCOM_TxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue0() = PimCOM_TxSigValue0;
  PimDIAG_LastRxData = *TSC_StartApplication_Rte_Pim_DIAG_LastRxData();
  *TSC_StartApplication_Rte_Pim_DIAG_LastRxData() = PimDIAG_LastRxData;
  PimNM_ActiveChannelHasFullComRequest = *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest();
  *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest() = PimNM_ActiveChannelHasFullComRequest;
  PimNM_ActiveComMChannel = *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel() = PimNM_ActiveComMChannel;
  PimNM_ApplState = *TSC_StartApplication_Rte_Pim_NM_ApplState();
  *TSC_StartApplication_Rte_Pim_NM_ApplState() = PimNM_ApplState;
  PimNM_BusSleepModeTimer = *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer();
  *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer() = PimNM_BusSleepModeTimer;
  PimTxCtrlSigValue = *TSC_StartApplication_Rte_Pim_TxCtrlSigValue();
  *TSC_StartApplication_Rte_Pim_TxCtrlSigValue() = PimTxCtrlSigValue;
  PimTxDataSigValue = *TSC_StartApplication_Rte_Pim_TxDataSigValue();
  *TSC_StartApplication_Rte_Pim_TxDataSigValue() = PimTxDataSigValue;
  PimUptime = *TSC_StartApplication_Rte_Pim_Uptime();
  *TSC_StartApplication_Rte_Pim_Uptime() = PimUptime;

  StartApplication_DIAG_DemReadData_IrvOccuranceCounterDid = TSC_StartApplication_Rte_IrvRead_StartApplication_DIAG_DemReadData_IrvOccuranceCounterDid();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StartApplication_Init
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_UR_CN_Backbone1J1939_2a22de3d_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_Backbone1J1939_2a22de3d_E_MODE_LIMITATION, RTE_E_PiUR_CN_Backbone1J1939_2a22de3d_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_Backbone2_3f947ba3_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_Backbone2_3f947ba3_E_MODE_LIMITATION, RTE_E_PiUR_CN_Backbone2_3f947ba3_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_CabSubnet_aa77b0b0_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_CabSubnet_aa77b0b0_E_MODE_LIMITATION, RTE_E_PiUR_CN_CabSubnet_aa77b0b0_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_FMSNet_05490e3d_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_FMSNet_05490e3d_E_MODE_LIMITATION, RTE_E_PiUR_CN_FMSNet_05490e3d_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN00_ace1a6ba_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_LIN00_ace1a6ba_E_MODE_LIMITATION, RTE_E_PiUR_CN_LIN00_ace1a6ba_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN01_4323cd84_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_LIN01_4323cd84_E_MODE_LIMITATION, RTE_E_PiUR_CN_LIN01_4323cd84_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN02_a8147687_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_LIN02_a8147687_E_MODE_LIMITATION, RTE_E_PiUR_CN_LIN02_a8147687_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN03_47d61db9_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_LIN03_47d61db9_E_MODE_LIMITATION, RTE_E_PiUR_CN_LIN03_47d61db9_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN04_a50a06c0_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_LIN04_a50a06c0_E_MODE_LIMITATION, RTE_E_PiUR_CN_LIN04_a50a06c0_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_SecuritySubnet_7cec9a61_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiUR_CN_SecuritySubnet_7cec9a61_E_MODE_LIMITATION, RTE_E_PiUR_CN_SecuritySubnet_7cec9a61_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StartApplication_CODE) StartApplication_Init(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_Init
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint32 PimNM_ActiveComMUsers;
  uint16 PimCOM_RxSigValue0;
  uint16 PimCOM_TxSigValue1;
  EnumActiveComponentType PimActiveComponent;
  uint8 PimCOM_RxSigValue1;
  uint8 PimCOM_TxSigValue0;
  uint8 PimDIAG_LastRxData;
  uint8 PimNM_ActiveChannelHasFullComRequest;
  uint8 PimNM_ActiveComMChannel;
  EnumNM_ApplStateType PimNM_ApplState;
  uint8 PimNM_BusSleepModeTimer;
  uint8 PimTxCtrlSigValue;
  uint8 PimTxDataSigValue;
  uint8 PimUptime;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  PimNM_ActiveComMUsers = *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers() = PimNM_ActiveComMUsers;
  PimCOM_RxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue0() = PimCOM_RxSigValue0;
  PimCOM_TxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue1() = PimCOM_TxSigValue1;
  PimActiveComponent = *TSC_StartApplication_Rte_Pim_ActiveComponent();
  *TSC_StartApplication_Rte_Pim_ActiveComponent() = PimActiveComponent;
  PimCOM_RxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue1() = PimCOM_RxSigValue1;
  PimCOM_TxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue0() = PimCOM_TxSigValue0;
  PimDIAG_LastRxData = *TSC_StartApplication_Rte_Pim_DIAG_LastRxData();
  *TSC_StartApplication_Rte_Pim_DIAG_LastRxData() = PimDIAG_LastRxData;
  PimNM_ActiveChannelHasFullComRequest = *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest();
  *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest() = PimNM_ActiveChannelHasFullComRequest;
  PimNM_ActiveComMChannel = *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel() = PimNM_ActiveComMChannel;
  PimNM_ApplState = *TSC_StartApplication_Rte_Pim_NM_ApplState();
  *TSC_StartApplication_Rte_Pim_NM_ApplState() = PimNM_ApplState;
  PimNM_BusSleepModeTimer = *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer();
  *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer() = PimNM_BusSleepModeTimer;
  PimTxCtrlSigValue = *TSC_StartApplication_Rte_Pim_TxCtrlSigValue();
  *TSC_StartApplication_Rte_Pim_TxCtrlSigValue() = PimTxCtrlSigValue;
  PimTxDataSigValue = *TSC_StartApplication_Rte_Pim_TxDataSigValue();
  *TSC_StartApplication_Rte_Pim_TxDataSigValue() = PimTxDataSigValue;
  PimUptime = *TSC_StartApplication_Rte_Pim_Uptime();
  *TSC_StartApplication_Rte_Pim_Uptime() = PimUptime;

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_Backbone1J1939_2a22de3d_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_Backbone1J1939_2a22de3d_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_Backbone1J1939_2a22de3d_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_Backbone1J1939_2a22de3d_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_Backbone2_3f947ba3_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_Backbone2_3f947ba3_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_Backbone2_3f947ba3_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_Backbone2_3f947ba3_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_CabSubnet_aa77b0b0_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_CabSubnet_aa77b0b0_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_CabSubnet_aa77b0b0_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_CabSubnet_aa77b0b0_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_FMSNet_05490e3d_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_FMSNet_05490e3d_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_FMSNet_05490e3d_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_FMSNet_05490e3d_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_LIN00_ace1a6ba_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_LIN00_ace1a6ba_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN00_ace1a6ba_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN00_ace1a6ba_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_LIN01_4323cd84_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_LIN01_4323cd84_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN01_4323cd84_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN01_4323cd84_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_LIN02_a8147687_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_LIN02_a8147687_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN02_a8147687_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN02_a8147687_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_LIN03_47d61db9_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_LIN03_47d61db9_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN03_47d61db9_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN03_47d61db9_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_LIN04_a50a06c0_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_LIN04_a50a06c0_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN04_a50a06c0_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_LIN04_a50a06c0_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_UR_CN_SecuritySubnet_7cec9a61_RequestComMode; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_UR_CN_SecuritySubnet_7cec9a61_RequestComMode(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_SecuritySubnet_7cec9a61_E_MODE_LIMITATION:
      fct_error = 1;
      break;
    case RTE_E_PiUR_CN_SecuritySubnet_7cec9a61_E_NOT_OK:
      fct_error = 1;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StartApplication_MEMORYPROTECTION_Cyclic10ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   void Rte_IrvRead_StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData(DtMemoryProtectionDataElementType *data)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData(const DtMemoryProtectionDataElementType *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_PpTrustedDataInvalid_Write(uint8 Value)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_MEMORYPROTECTION_Cyclic10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StartApplication_CODE) StartApplication_MEMORYPROTECTION_Cyclic10ms(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_MEMORYPROTECTION_Cyclic10ms
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint32 PimNM_ActiveComMUsers;
  uint16 PimCOM_RxSigValue0;
  uint16 PimCOM_TxSigValue1;
  EnumActiveComponentType PimActiveComponent;
  uint8 PimCOM_RxSigValue1;
  uint8 PimCOM_TxSigValue0;
  uint8 PimDIAG_LastRxData;
  uint8 PimNM_ActiveChannelHasFullComRequest;
  uint8 PimNM_ActiveComMChannel;
  EnumNM_ApplStateType PimNM_ApplState;
  uint8 PimNM_BusSleepModeTimer;
  uint8 PimTxCtrlSigValue;
  uint8 PimTxDataSigValue;
  uint8 PimUptime;

  DtMemoryProtectionDataElementType StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData;

  DtMemoryProtectionDataElementType StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData_Write;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  PimNM_ActiveComMUsers = *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers() = PimNM_ActiveComMUsers;
  PimCOM_RxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue0() = PimCOM_RxSigValue0;
  PimCOM_TxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue1() = PimCOM_TxSigValue1;
  PimActiveComponent = *TSC_StartApplication_Rte_Pim_ActiveComponent();
  *TSC_StartApplication_Rte_Pim_ActiveComponent() = PimActiveComponent;
  PimCOM_RxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue1() = PimCOM_RxSigValue1;
  PimCOM_TxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue0() = PimCOM_TxSigValue0;
  PimDIAG_LastRxData = *TSC_StartApplication_Rte_Pim_DIAG_LastRxData();
  *TSC_StartApplication_Rte_Pim_DIAG_LastRxData() = PimDIAG_LastRxData;
  PimNM_ActiveChannelHasFullComRequest = *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest();
  *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest() = PimNM_ActiveChannelHasFullComRequest;
  PimNM_ActiveComMChannel = *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel() = PimNM_ActiveComMChannel;
  PimNM_ApplState = *TSC_StartApplication_Rte_Pim_NM_ApplState();
  *TSC_StartApplication_Rte_Pim_NM_ApplState() = PimNM_ApplState;
  PimNM_BusSleepModeTimer = *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer();
  *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer() = PimNM_BusSleepModeTimer;
  PimTxCtrlSigValue = *TSC_StartApplication_Rte_Pim_TxCtrlSigValue();
  *TSC_StartApplication_Rte_Pim_TxCtrlSigValue() = PimTxCtrlSigValue;
  PimTxDataSigValue = *TSC_StartApplication_Rte_Pim_TxDataSigValue();
  *TSC_StartApplication_Rte_Pim_TxDataSigValue() = PimTxDataSigValue;
  PimUptime = *TSC_StartApplication_Rte_Pim_Uptime();
  *TSC_StartApplication_Rte_Pim_Uptime() = PimUptime;

  TSC_StartApplication_Rte_IrvRead_StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData(&StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData);

  (void)memset(&StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData_Write, 0, sizeof(StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData_Write));
  TSC_StartApplication_Rte_IrvWrite_StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData(&StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData_Write);

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_PpTrustedDataInvalid_Write; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_PpTrustedDataInvalid_Write(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StartApplication_OnDataRec_RxCtrl
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx> of PortPrototype <PpTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx_DeTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx(uint16 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx_DeDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx(uint32 data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PpDemOpCycle_DemOperationCycle_0_SetOperationCycleState(Dem_OperationCycleStateType CycleState)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiDemOpCycle_DemOperationCycle_0_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_OnDataRec_RxCtrl_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StartApplication_CODE) StartApplication_OnDataRec_RxCtrl(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_OnDataRec_RxCtrl
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint16 Read_PpTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx_DeTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx;

  uint32 PimNM_ActiveComMUsers;
  uint16 PimCOM_RxSigValue0;
  uint16 PimCOM_TxSigValue1;
  EnumActiveComponentType PimActiveComponent;
  uint8 PimCOM_RxSigValue1;
  uint8 PimCOM_TxSigValue0;
  uint8 PimDIAG_LastRxData;
  uint8 PimNM_ActiveChannelHasFullComRequest;
  uint8 PimNM_ActiveComMChannel;
  EnumNM_ApplStateType PimNM_ApplState;
  uint8 PimNM_BusSleepModeTimer;
  uint8 PimTxCtrlSigValue;
  uint8 PimTxDataSigValue;
  uint8 PimUptime;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  PimNM_ActiveComMUsers = *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers() = PimNM_ActiveComMUsers;
  PimCOM_RxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue0() = PimCOM_RxSigValue0;
  PimCOM_TxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue1() = PimCOM_TxSigValue1;
  PimActiveComponent = *TSC_StartApplication_Rte_Pim_ActiveComponent();
  *TSC_StartApplication_Rte_Pim_ActiveComponent() = PimActiveComponent;
  PimCOM_RxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue1() = PimCOM_RxSigValue1;
  PimCOM_TxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue0() = PimCOM_TxSigValue0;
  PimDIAG_LastRxData = *TSC_StartApplication_Rte_Pim_DIAG_LastRxData();
  *TSC_StartApplication_Rte_Pim_DIAG_LastRxData() = PimDIAG_LastRxData;
  PimNM_ActiveChannelHasFullComRequest = *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest();
  *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest() = PimNM_ActiveChannelHasFullComRequest;
  PimNM_ActiveComMChannel = *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel() = PimNM_ActiveComMChannel;
  PimNM_ApplState = *TSC_StartApplication_Rte_Pim_NM_ApplState();
  *TSC_StartApplication_Rte_Pim_NM_ApplState() = PimNM_ApplState;
  PimNM_BusSleepModeTimer = *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer();
  *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer() = PimNM_BusSleepModeTimer;
  PimTxCtrlSigValue = *TSC_StartApplication_Rte_Pim_TxCtrlSigValue();
  *TSC_StartApplication_Rte_Pim_TxCtrlSigValue() = PimTxCtrlSigValue;
  PimTxDataSigValue = *TSC_StartApplication_Rte_Pim_TxDataSigValue();
  *TSC_StartApplication_Rte_Pim_TxDataSigValue() = PimTxDataSigValue;
  PimUptime = *TSC_StartApplication_Rte_Pim_Uptime();
  *TSC_StartApplication_Rte_Pim_Uptime() = PimUptime;

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)Rte_Read_PpTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx_DeTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Read_PpTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx_DeTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx(&Read_PpTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx_DeTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)Rte_Write_PpDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx_DeDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Write_PpDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx_DeDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx(Rte_InitValue_PpDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx_DeDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_PpDemOpCycle_DemOperationCycle_0_SetOperationCycleState; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_PpDemOpCycle_DemOperationCycle_0_SetOperationCycleState(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiDemOpCycle_DemOperationCycle_0_E_NOT_OK:
      fct_error = 1;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StartApplication_OnDataRec_RxData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx> of PortPrototype <PpEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx_DeEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx(uint16 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx_DeDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx(uint32 data)
 *   Std_ReturnType Rte_Write_PpTrustedData_DeValue(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint16 Rte_IrvRead_StartApplication_OnDataRec_RxData_IrvOccuranceCounterDid(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_StartApplication_OnDataRec_RxData_IrvMemoryProtectionData(const DtMemoryProtectionDataElementType *data)
 *   void Rte_IrvWrite_StartApplication_OnDataRec_RxData_IrvOccuranceCounterDid(uint16 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_PpMemoryAccessViolationState_Reset(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_EcuM_ShutdownTarget_SelectShutdownTarget(EcuM_StateType targetState, EcuM_SleepModeType resetSleepMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiEcuM_ShutdownTarget_E_NOT_OK
 *   Std_ReturnType Rte_Call_PpDiagnosticMonitor_DEM_EVENT_StartApplication_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PiDiagnosticMonitor_DEM_EVENT_StartApplication_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_OnDataRec_RxData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StartApplication_CODE) StartApplication_OnDataRec_RxData(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StartApplication_OnDataRec_RxData
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  uint16 Read_PpEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx_DeEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx;

  uint32 PimNM_ActiveComMUsers;
  uint16 PimCOM_RxSigValue0;
  uint16 PimCOM_TxSigValue1;
  EnumActiveComponentType PimActiveComponent;
  uint8 PimCOM_RxSigValue1;
  uint8 PimCOM_TxSigValue0;
  uint8 PimDIAG_LastRxData;
  uint8 PimNM_ActiveChannelHasFullComRequest;
  uint8 PimNM_ActiveComMChannel;
  EnumNM_ApplStateType PimNM_ApplState;
  uint8 PimNM_BusSleepModeTimer;
  uint8 PimTxCtrlSigValue;
  uint8 PimTxDataSigValue;
  uint8 PimUptime;

  uint16 StartApplication_OnDataRec_RxData_IrvOccuranceCounterDid;

  DtMemoryProtectionDataElementType StartApplication_OnDataRec_RxData_IrvMemoryProtectionData_Write;

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  PimNM_ActiveComMUsers = *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers() = PimNM_ActiveComMUsers;
  PimCOM_RxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue0() = PimCOM_RxSigValue0;
  PimCOM_TxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue1() = PimCOM_TxSigValue1;
  PimActiveComponent = *TSC_StartApplication_Rte_Pim_ActiveComponent();
  *TSC_StartApplication_Rte_Pim_ActiveComponent() = PimActiveComponent;
  PimCOM_RxSigValue1 = *TSC_StartApplication_Rte_Pim_COM_RxSigValue1();
  *TSC_StartApplication_Rte_Pim_COM_RxSigValue1() = PimCOM_RxSigValue1;
  PimCOM_TxSigValue0 = *TSC_StartApplication_Rte_Pim_COM_TxSigValue0();
  *TSC_StartApplication_Rte_Pim_COM_TxSigValue0() = PimCOM_TxSigValue0;
  PimDIAG_LastRxData = *TSC_StartApplication_Rte_Pim_DIAG_LastRxData();
  *TSC_StartApplication_Rte_Pim_DIAG_LastRxData() = PimDIAG_LastRxData;
  PimNM_ActiveChannelHasFullComRequest = *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest();
  *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest() = PimNM_ActiveChannelHasFullComRequest;
  PimNM_ActiveComMChannel = *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel();
  *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel() = PimNM_ActiveComMChannel;
  PimNM_ApplState = *TSC_StartApplication_Rte_Pim_NM_ApplState();
  *TSC_StartApplication_Rte_Pim_NM_ApplState() = PimNM_ApplState;
  PimNM_BusSleepModeTimer = *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer();
  *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer() = PimNM_BusSleepModeTimer;
  PimTxCtrlSigValue = *TSC_StartApplication_Rte_Pim_TxCtrlSigValue();
  *TSC_StartApplication_Rte_Pim_TxCtrlSigValue() = PimTxCtrlSigValue;
  PimTxDataSigValue = *TSC_StartApplication_Rte_Pim_TxDataSigValue();
  *TSC_StartApplication_Rte_Pim_TxDataSigValue() = PimTxDataSigValue;
  PimUptime = *TSC_StartApplication_Rte_Pim_Uptime();
  *TSC_StartApplication_Rte_Pim_Uptime() = PimUptime;

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)Rte_Read_PpEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx_DeEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Read_PpEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx_DeEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx(&Read_PpEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx_DeEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)Rte_Write_PpDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx_DeDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Write_PpDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx_DeDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx(Rte_InitValue_PpDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx_DeDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)Rte_Write_PpTrustedData_DeValue; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Write_PpTrustedData_DeValue(Rte_InitValue_PpTrustedData_DeValue);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  StartApplication_OnDataRec_RxData_IrvOccuranceCounterDid = TSC_StartApplication_Rte_IrvRead_StartApplication_OnDataRec_RxData_IrvOccuranceCounterDid();

  (void)memset(&StartApplication_OnDataRec_RxData_IrvMemoryProtectionData_Write, 0, sizeof(StartApplication_OnDataRec_RxData_IrvMemoryProtectionData_Write));
  TSC_StartApplication_Rte_IrvWrite_StartApplication_OnDataRec_RxData_IrvMemoryProtectionData(&StartApplication_OnDataRec_RxData_IrvMemoryProtectionData_Write);
  TSC_StartApplication_Rte_IrvWrite_StartApplication_OnDataRec_RxData_IrvOccuranceCounterDid(0U);

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_PpMemoryAccessViolationState_Reset; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_PpMemoryAccessViolationState_Reset();
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_EcuM_ShutdownTarget_SelectShutdownTarget; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_EcuM_ShutdownTarget_SelectShutdownTarget(0U, 0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiEcuM_ShutdownTarget_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType StartApplication_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    StartApplication_FctPtr = (FncPtrType)TSC_StartApplication_Rte_Call_PpDiagnosticMonitor_DEM_EVENT_StartApplication_SetEventStatus; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_StartApplication_Rte_Call_PpDiagnosticMonitor_DEM_EVENT_StartApplication_SetEventStatus(0U);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_PiDiagnosticMonitor_DEM_EVENT_StartApplication_E_NOT_OK:
      fct_error = 1;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define StartApplication_STOP_SEC_CODE
#include "StartApplication_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void StartApplication_TestDefines(void)
{
  /* Enumeration Data Types */

  ComM_ModeType Test_ComM_ModeType_V_1 = COMM_NO_COMMUNICATION;
  ComM_ModeType Test_ComM_ModeType_V_2 = COMM_SILENT_COMMUNICATION;
  ComM_ModeType Test_ComM_ModeType_V_3 = COMM_FULL_COMMUNICATION;

  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_1 = DCM_E_POSITIVERESPONSE;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_2 = DCM_E_GENERALREJECT;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_3 = DCM_E_SERVICENOTSUPPORTED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_4 = DCM_E_SUBFUNCTIONNOTSUPPORTED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_5 = DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_6 = DCM_E_RESPONSETOOLONG;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_7 = DCM_E_BUSYREPEATREQUEST;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_8 = DCM_E_CONDITIONSNOTCORRECT;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_9 = DCM_E_REQUESTSEQUENCEERROR;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_10 = DCM_E_NORESPONSEFROMSUBNETCOMPONENT;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_11 = DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_12 = DCM_E_REQUESTOUTOFRANGE;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_13 = DCM_E_SECURITYACCESSDENIED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_14 = DCM_E_INVALIDKEY;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_15 = DCM_E_EXCEEDNUMBEROFATTEMPTS;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_16 = DCM_E_REQUIREDTIMEDELAYNOTEXPIRED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_17 = DCM_E_UPLOADDOWNLOADNOTACCEPTED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_18 = DCM_E_TRANSFERDATASUSPENDED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_19 = DCM_E_GENERALPROGRAMMINGFAILURE;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_20 = DCM_E_WRONGBLOCKSEQUENCECOUNTER;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_21 = DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_22 = DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_23 = DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_24 = DCM_E_RPMTOOHIGH;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_25 = DCM_E_RPMTOOLOW;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_26 = DCM_E_ENGINEISRUNNING;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_27 = DCM_E_ENGINEISNOTRUNNING;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_28 = DCM_E_ENGINERUNTIMETOOLOW;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_29 = DCM_E_TEMPERATURETOOHIGH;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_30 = DCM_E_TEMPERATURETOOLOW;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_31 = DCM_E_VEHICLESPEEDTOOHIGH;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_32 = DCM_E_VEHICLESPEEDTOOLOW;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_33 = DCM_E_THROTTLE_PEDALTOOHIGH;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_34 = DCM_E_THROTTLE_PEDALTOOLOW;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_35 = DCM_E_TRANSMISSIONRANGENOTINNEUTRAL;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_36 = DCM_E_TRANSMISSIONRANGENOTINGEAR;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_37 = DCM_E_BRAKESWITCH_NOTCLOSED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_38 = DCM_E_SHIFTERLEVERNOTINPARK;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_39 = DCM_E_TORQUECONVERTERCLUTCHLOCKED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_40 = DCM_E_VOLTAGETOOHIGH;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_41 = DCM_E_VOLTAGETOOLOW;

  Dem_EventStatusType Test_Dem_EventStatusType_V_1 = DEM_EVENT_STATUS_PASSED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_2 = DEM_EVENT_STATUS_FAILED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_3 = DEM_EVENT_STATUS_PREPASSED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_4 = DEM_EVENT_STATUS_PREFAILED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_5 = DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED;

  Dem_OperationCycleStateType Test_Dem_OperationCycleStateType_V_1 = DEM_CYCLE_STATE_START;
  Dem_OperationCycleStateType Test_Dem_OperationCycleStateType_V_2 = DEM_CYCLE_STATE_END;

  EcuM_StateType Test_EcuM_StateType_V_1 = ECUM_SUBSTATE_MASK;
  EcuM_StateType Test_EcuM_StateType_V_2 = ECUM_STATE_STARTUP;
  EcuM_StateType Test_EcuM_StateType_V_3 = ECUM_STATE_STARTUP_ONE;
  EcuM_StateType Test_EcuM_StateType_V_4 = ECUM_STATE_STARTUP_TWO;
  EcuM_StateType Test_EcuM_StateType_V_5 = ECUM_STATE_WAKEUP;
  EcuM_StateType Test_EcuM_StateType_V_6 = ECUM_STATE_WAKEUP_ONE;
  EcuM_StateType Test_EcuM_StateType_V_7 = ECUM_STATE_WAKEUP_VALIDATION;
  EcuM_StateType Test_EcuM_StateType_V_8 = ECUM_STATE_WAKEUP_REACTION;
  EcuM_StateType Test_EcuM_StateType_V_9 = ECUM_STATE_WAKEUP_TWO;
  EcuM_StateType Test_EcuM_StateType_V_10 = ECUM_STATE_WAKEUP_WAKESLEEP;
  EcuM_StateType Test_EcuM_StateType_V_11 = ECUM_STATE_WAKEUP_TTII;
  EcuM_StateType Test_EcuM_StateType_V_12 = ECUM_STATE_RUN;
  EcuM_StateType Test_EcuM_StateType_V_13 = ECUM_STATE_APP_RUN;
  EcuM_StateType Test_EcuM_StateType_V_14 = ECUM_STATE_APP_POST_RUN;
  EcuM_StateType Test_EcuM_StateType_V_15 = ECUM_STATE_SHUTDOWN;
  EcuM_StateType Test_EcuM_StateType_V_16 = ECUM_STATE_PREP_SHUTDOWN;
  EcuM_StateType Test_EcuM_StateType_V_17 = ECUM_STATE_GO_SLEEP;
  EcuM_StateType Test_EcuM_StateType_V_18 = ECUM_STATE_GO_OFF_ONE;
  EcuM_StateType Test_EcuM_StateType_V_19 = ECUM_STATE_GO_OFF_TWO;
  EcuM_StateType Test_EcuM_StateType_V_20 = ECUM_STATE_SLEEP;
  EcuM_StateType Test_EcuM_StateType_V_21 = ECUM_STATE_OFF;
  EcuM_StateType Test_EcuM_StateType_V_22 = ECUM_STATE_RESET;

  EnumActiveComponentType Test_EnumActiveComponentType_V_1 = STARTAPPLICATION_ACTIVE_COMPONENT_COM_RXTX;
  EnumActiveComponentType Test_EnumActiveComponentType_V_2 = STARTAPPLICATION_ACTIVE_COMPONENT_DIAG;
  EnumActiveComponentType Test_EnumActiveComponentType_V_3 = STARTAPPLICATION_ACTIVE_COMPONENT_COM_TXONLY;
  EnumActiveComponentType Test_EnumActiveComponentType_V_4 = STARTAPPLICATION_ACTIVE_COMPONENT_MEMORYPROTECTION;
  EnumActiveComponentType Test_EnumActiveComponentType_V_5 = STARTAPPLICATION_ACTIVE_COMPONENT_NM;
  EnumActiveComponentType Test_EnumActiveComponentType_V_6 = STARTAPPLICATION_ACTIVE_COMPONENT_INVALID;

  EnumNM_ApplStateType Test_EnumNM_ApplStateType_V_1 = NM_APPL_STATE_FULL_COMM_EXTERN;
  EnumNM_ApplStateType Test_EnumNM_ApplStateType_V_2 = NM_APPL_STATE_FULL_COMM_INTERN;
  EnumNM_ApplStateType Test_EnumNM_ApplStateType_V_3 = NM_APPL_STATE_NO_COMM_EXTERN;

  J1939Rm_ExtIdType Test_J1939Rm_ExtIdType_V_1 = J1939RM_EXTID_NONE;
  J1939Rm_ExtIdType Test_J1939Rm_ExtIdType_V_2 = J1939RM_EXTID_ONE;
  J1939Rm_ExtIdType Test_J1939Rm_ExtIdType_V_3 = J1939RM_EXTID_TWO;
  J1939Rm_ExtIdType Test_J1939Rm_ExtIdType_V_4 = J1939RM_EXTID_THREE;
  J1939Rm_ExtIdType Test_J1939Rm_ExtIdType_V_5 = J1939RM_EXTID_GF;
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_TestCode:
     Reason:     This justification is used within the generated test code by the Rte Analyzer.
     Risk:       No functional risk.
     Prevention: Not required.

*/
