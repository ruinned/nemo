/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  StartApplication.c
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/SCIM_BP_180925_03/SCIM_BP.dpa
 *     SW-C Type:  StartApplication
 *  Generated at:  Fri Oct  5 11:50:32 2018
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
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_NegativeResponseCodeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_EventStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_OperationCycleStateType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * EcuM_SleepModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * EcuM_StateType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * EnumActiveComponentType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * EnumNM_ApplStateType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * J1939Rm_ExtIdType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_StartApplication.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */

// sslee
#include "Dio_Cfg.h"
#include "Adc.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


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

#if 0
if(Adc_GetGroupStatus(AdcConf_AdcGroup_AdcGroup_Adc0)==ADC_IDLE)
{
  Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_Adc0);
}

if(Adc_GetGroupStatus(AdcConf_AdcGroup_AdcGroup_Adc1)==ADC_IDLE)
{
  Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_Adc1);    
}
#endif  
    


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


    // sslee
    /*
      if(val == 1)
      {
        val = 0;
      }
      else
      {
        val = 1;
      }
      */
      //Dio_WriteChannel(DioConf_DioChannel_Dio_PA1_DebugPort, 1);
      //Dio_FlipChannel(DioConf_DioChannel_Dio_PA1_DebugPort);
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
//static Adc_ValueGroupType adc_0_buf[17];
//static Adc_ValueGroupType adc_1_buf[22];
    /* Request full communication for all ComM Users */
//    (void)Rte_Call_UR_CN_LIN00_ace1a6ba_RequestComMode (COMM_FULL_COMMUNICATION);
    (void)Rte_Call_UR_CN_Backbone1J1939_2a22de3d_RequestComMode (COMM_FULL_COMMUNICATION);
    (void)Rte_Call_UR_CN_Backbone2_3f947ba3_RequestComMode (COMM_FULL_COMMUNICATION);
//    (void)Rte_Call_UR_CN_LIN04_a50a06c0_RequestComMode (COMM_FULL_COMMUNICATION);
//    (void)Rte_Call_UR_CN_LIN02_a8147687_RequestComMode (COMM_FULL_COMMUNICATION);
    (void)Rte_Call_UR_CN_SecuritySubnet_7cec9a61_RequestComMode (COMM_FULL_COMMUNICATION);
    (void)Rte_Call_UR_CN_CabSubnet_aa77b0b0_RequestComMode (COMM_FULL_COMMUNICATION);
//    (void)Rte_Call_UR_CN_LIN01_4323cd84_RequestComMode (COMM_FULL_COMMUNICATION);
//    (void)Rte_Call_UR_CN_LIN03_47d61db9_RequestComMode (COMM_FULL_COMMUNICATION);
    (void)Rte_Call_UR_CN_FMSNet_05490e3d_RequestComMode (COMM_FULL_COMMUNICATION);

  //Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_Adc0, adc_0_buf);
  // Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_Adc1, adc_1_buf);
/*
if(Adc_GetGroupStatus(AdcConf_AdcGroup_AdcGroup_Adc0)==ADC_IDLE)
{
  Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_Adc0);
}

if(Adc_GetGroupStatus(AdcConf_AdcGroup_AdcGroup_Adc1)==ADC_IDLE)
{
  Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_Adc1);    
}
*/
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


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define StartApplication_STOP_SEC_CODE
#include "StartApplication_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
