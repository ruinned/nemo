/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TSC_StartApplication.c
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_StartApplication.h"
#include "TSC_StartApplication.h"















     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */






Std_ReturnType TSC_StartApplication_Rte_Read_PpEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx_DeEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx(uint16 *data)
{
  return Rte_Read_PpEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx_DeEngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx(data);
}

Std_ReturnType TSC_StartApplication_Rte_Read_PpFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx_DeFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx(uint8 *data)
{
  return Rte_Read_PpFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx_DeFSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx(data);
}

Std_ReturnType TSC_StartApplication_Rte_Read_PpTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx_DeTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx(uint16 *data)
{
  return Rte_Read_PpTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx_DeTrailer3CalibratedTotalLoad_ISig_4_oHMIIOM_BB2_15P_oBackbone2_a944db19_Rx(data);
}

Std_ReturnType TSC_StartApplication_Rte_Read_PpTrustedDataVerification_DeValue(uint8 *data)
{
  return Rte_Read_PpTrustedDataVerification_DeValue(data);
}




Std_ReturnType TSC_StartApplication_Rte_Write_PpDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx_DeDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx(uint32 data)
{
  return Rte_Write_PpDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx_DeDynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx(data);
}

Std_ReturnType TSC_StartApplication_Rte_Write_PpFSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx_DeFSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx(uint16 data)
{
  return Rte_Write_PpFSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx_DeFSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx(data);
}

Std_ReturnType TSC_StartApplication_Rte_Write_PpPinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx_DePinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx(uint8 data)
{
  return Rte_Write_PpPinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx_DePinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx(data);
}





     /* Client Server Interfaces: */
Std_ReturnType TSC_StartApplication_Rte_Call_PpMemoryAccessViolationState_GetState(boolean *State)
{
  return Rte_Call_PpMemoryAccessViolationState_GetState(State);
}


     /* Service calls */
Std_ReturnType TSC_StartApplication_Rte_Call_PpJ1939Rm_SendRequest_J1939RmUser_StartApplication_SendRequest(NetworkHandleType channel, uint32 requestedPgn, const J1939Rm_ExtIdInfoType *extIdInfo, uint8 destAddress, uint8 priority, boolean checkTimeout)
{
  return Rte_Call_PpJ1939Rm_SendRequest_J1939RmUser_StartApplication_SendRequest(channel, requestedPgn, extIdInfo, destAddress, priority, checkTimeout);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode(ComM_ModeType *ComMode)
{
  return Rte_Call_UR_CN_Backbone1J1939_2a22de3d_GetCurrentComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_Backbone1J1939_2a22de3d_RequestComMode(ComM_ModeType ComMode)
{
  return Rte_Call_UR_CN_Backbone1J1939_2a22de3d_RequestComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_Backbone2_3f947ba3_GetCurrentComMode(ComM_ModeType *ComMode)
{
  return Rte_Call_UR_CN_Backbone2_3f947ba3_GetCurrentComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_Backbone2_3f947ba3_RequestComMode(ComM_ModeType ComMode)
{
  return Rte_Call_UR_CN_Backbone2_3f947ba3_RequestComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode(ComM_ModeType *ComMode)
{
  return Rte_Call_UR_CN_CabSubnet_aa77b0b0_GetCurrentComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_CabSubnet_aa77b0b0_RequestComMode(ComM_ModeType ComMode)
{
  return Rte_Call_UR_CN_CabSubnet_aa77b0b0_RequestComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_FMSNet_05490e3d_GetCurrentComMode(ComM_ModeType *ComMode)
{
  return Rte_Call_UR_CN_FMSNet_05490e3d_GetCurrentComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_FMSNet_05490e3d_RequestComMode(ComM_ModeType ComMode)
{
  return Rte_Call_UR_CN_FMSNet_05490e3d_RequestComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_LIN00_ace1a6ba_GetCurrentComMode(ComM_ModeType *ComMode)
{
  return Rte_Call_UR_CN_LIN00_ace1a6ba_GetCurrentComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_LIN00_ace1a6ba_RequestComMode(ComM_ModeType ComMode)
{
  return Rte_Call_UR_CN_LIN00_ace1a6ba_RequestComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_LIN01_4323cd84_GetCurrentComMode(ComM_ModeType *ComMode)
{
  return Rte_Call_UR_CN_LIN01_4323cd84_GetCurrentComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_LIN01_4323cd84_RequestComMode(ComM_ModeType ComMode)
{
  return Rte_Call_UR_CN_LIN01_4323cd84_RequestComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_LIN02_a8147687_GetCurrentComMode(ComM_ModeType *ComMode)
{
  return Rte_Call_UR_CN_LIN02_a8147687_GetCurrentComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_LIN02_a8147687_RequestComMode(ComM_ModeType ComMode)
{
  return Rte_Call_UR_CN_LIN02_a8147687_RequestComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_LIN03_47d61db9_GetCurrentComMode(ComM_ModeType *ComMode)
{
  return Rte_Call_UR_CN_LIN03_47d61db9_GetCurrentComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_LIN03_47d61db9_RequestComMode(ComM_ModeType ComMode)
{
  return Rte_Call_UR_CN_LIN03_47d61db9_RequestComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_LIN04_a50a06c0_GetCurrentComMode(ComM_ModeType *ComMode)
{
  return Rte_Call_UR_CN_LIN04_a50a06c0_GetCurrentComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_LIN04_a50a06c0_RequestComMode(ComM_ModeType ComMode)
{
  return Rte_Call_UR_CN_LIN04_a50a06c0_RequestComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode(ComM_ModeType *ComMode)
{
  return Rte_Call_UR_CN_SecuritySubnet_7cec9a61_GetCurrentComMode(ComMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_UR_CN_SecuritySubnet_7cec9a61_RequestComMode(ComM_ModeType ComMode)
{
  return Rte_Call_UR_CN_SecuritySubnet_7cec9a61_RequestComMode(ComMode);
}


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */
uint16 TSC_StartApplication_Rte_IrvRead_StartApplication_Cyclic250ms_IrvOccuranceCounterDid(void)
{
return Rte_IrvRead_StartApplication_Cyclic250ms_IrvOccuranceCounterDid();
}













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */
uint16 TSC_StartApplication_Rte_IrvRead_StartApplication_DIAG_DcmReadData_IrvOccuranceCounterDid(void)
{
return Rte_IrvRead_StartApplication_DIAG_DcmReadData_IrvOccuranceCounterDid();
}













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */

void TSC_StartApplication_Rte_IrvWrite_StartApplication_DIAG_DcmWriteData_IrvOccuranceCounterDid(uint16 data)
{
  Rte_IrvWrite_StartApplication_DIAG_DcmWriteData_IrvOccuranceCounterDid( data);
}












     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */
uint16 TSC_StartApplication_Rte_IrvRead_StartApplication_DIAG_DemReadData_IrvOccuranceCounterDid(void)
{
return Rte_IrvRead_StartApplication_DIAG_DemReadData_IrvOccuranceCounterDid();
}













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */
Std_ReturnType TSC_StartApplication_Rte_Call_PpTrustedDataInvalid_Write(uint8 Value)
{
  return Rte_Call_PpTrustedDataInvalid_Write(Value);
}


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */
void TSC_StartApplication_Rte_IrvRead_StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData(DtMemoryProtectionDataElementType *data)
{
Rte_IrvRead_StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData( data);
}

void TSC_StartApplication_Rte_IrvWrite_StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData(DtMemoryProtectionDataElementType *data)
{
  Rte_IrvWrite_StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData( data);
}












     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_StartApplication_Rte_Call_PpDemOpCycle_DemOperationCycle_0_SetOperationCycleState(Dem_OperationCycleStateType CycleState)
{
  return Rte_Call_PpDemOpCycle_DemOperationCycle_0_SetOperationCycleState(CycleState);
}


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */









Std_ReturnType TSC_StartApplication_Rte_Write_PpTrustedData_DeValue(uint8 data)
{
  return Rte_Write_PpTrustedData_DeValue(data);
}





     /* Client Server Interfaces: */
Std_ReturnType TSC_StartApplication_Rte_Call_PpMemoryAccessViolationState_Reset(void)
{
  return Rte_Call_PpMemoryAccessViolationState_Reset();
}


     /* Service calls */
Std_ReturnType TSC_StartApplication_Rte_Call_EcuM_ShutdownTarget_SelectShutdownTarget(EcuM_StateType targetState, EcuM_SleepModeType resetSleepMode)
{
  return Rte_Call_EcuM_ShutdownTarget_SelectShutdownTarget(targetState, resetSleepMode);
}
Std_ReturnType TSC_StartApplication_Rte_Call_PpDiagnosticMonitor_DEM_EVENT_StartApplication_SetEventStatus(Dem_EventStatusType EventStatus)
{
  return Rte_Call_PpDiagnosticMonitor_DEM_EVENT_StartApplication_SetEventStatus(EventStatus);
}


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */
uint16 TSC_StartApplication_Rte_IrvRead_StartApplication_OnDataRec_RxData_IrvOccuranceCounterDid(void)
{
return Rte_IrvRead_StartApplication_OnDataRec_RxData_IrvOccuranceCounterDid();
}

void TSC_StartApplication_Rte_IrvWrite_StartApplication_OnDataRec_RxData_IrvMemoryProtectionData(DtMemoryProtectionDataElementType *data)
{
  Rte_IrvWrite_StartApplication_OnDataRec_RxData_IrvMemoryProtectionData( data);
}
void TSC_StartApplication_Rte_IrvWrite_StartApplication_OnDataRec_RxData_IrvOccuranceCounterDid(uint16 data)
{
  Rte_IrvWrite_StartApplication_OnDataRec_RxData_IrvOccuranceCounterDid( data);
}






     /* StartApplication */
      /* StartApplication */

/** Per Instance Memories */
uint32 *TSC_StartApplication_Rte_Pim_NM_ActiveComMUsers(void)
{
  return Rte_Pim_NM_ActiveComMUsers();
}
uint16 *TSC_StartApplication_Rte_Pim_COM_RxSigValue0(void)
{
  return Rte_Pim_COM_RxSigValue0();
}
uint16 *TSC_StartApplication_Rte_Pim_COM_TxSigValue1(void)
{
  return Rte_Pim_COM_TxSigValue1();
}
EnumActiveComponentType *TSC_StartApplication_Rte_Pim_ActiveComponent(void)
{
  return Rte_Pim_ActiveComponent();
}
uint8 *TSC_StartApplication_Rte_Pim_COM_RxSigValue1(void)
{
  return Rte_Pim_COM_RxSigValue1();
}
uint8 *TSC_StartApplication_Rte_Pim_COM_TxSigValue0(void)
{
  return Rte_Pim_COM_TxSigValue0();
}
uint8 *TSC_StartApplication_Rte_Pim_DIAG_LastRxData(void)
{
  return Rte_Pim_DIAG_LastRxData();
}
uint8 *TSC_StartApplication_Rte_Pim_NM_ActiveChannelHasFullComRequest(void)
{
  return Rte_Pim_NM_ActiveChannelHasFullComRequest();
}
uint8 *TSC_StartApplication_Rte_Pim_NM_ActiveComMChannel(void)
{
  return Rte_Pim_NM_ActiveComMChannel();
}
EnumNM_ApplStateType *TSC_StartApplication_Rte_Pim_NM_ApplState(void)
{
  return Rte_Pim_NM_ApplState();
}
uint8 *TSC_StartApplication_Rte_Pim_NM_BusSleepModeTimer(void)
{
  return Rte_Pim_NM_BusSleepModeTimer();
}
uint8 *TSC_StartApplication_Rte_Pim_TxCtrlSigValue(void)
{
  return Rte_Pim_TxCtrlSigValue();
}
uint8 *TSC_StartApplication_Rte_Pim_TxDataSigValue(void)
{
  return Rte_Pim_TxDataSigValue();
}
uint8 *TSC_StartApplication_Rte_Pim_Uptime(void)
{
  return Rte_Pim_Uptime();
}



