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
 *          File:  TSC_vDem42.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Service interfaces */
Std_ReturnType TSC_vDem42_Rte_Call_ClearDTC_vDem42_ClearDTC(void);
Std_ReturnType TSC_vDem42_Rte_Call_ClearDTC_vDem42_SelectDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin);
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, uint32 *DTCOfEvent);
Std_ReturnType TSC_vDem42_Rte_Call_ClearDTC_vDem42_SelectDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin);
Std_ReturnType TSC_vDem42_Rte_Call_ControlDTCSuppression43_vDem42_GetDTCSuppression(boolean *SuppressionStatus);
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetDebouncingOfEvent(Dem_EventIdType EventId, Dem_DebouncingStateType *DebouncingState);
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetEventExtendedDataRecordEx(Dem_EventIdType EventId, uint8 RecordNumber, uint8 *DestBuffer, uint16 *BufSize);
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetEventExtendedDataRecordEx(Dem_EventIdType EventId, uint8 RecordNumber, uint8 *DestBuffer, uint16 *BufSize);
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetEventFailed(Dem_EventIdType EventId, boolean *EventFailed);
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, uint8 *DestBuffer, uint16 *BufSize);
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, uint8 *DestBuffer, uint16 *BufSize);
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetEventUdsStatus(Dem_EventIdType EventId, Dem_UdsStatusByteType *UDSStatusByte);
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetEventTested(Dem_EventIdType EventId, boolean *EventTested);
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetFaultDetectionCounter(Dem_EventIdType EventId, sint8 *FaultDetectionCounter);
Std_ReturnType TSC_vDem42_Rte_Call_ClearDTC_vDem42_SelectDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin);
Std_ReturnType TSC_vDem42_Rte_Call_ControlDTCSuppression43_vDem42_SetDTCSuppression(boolean SuppressionStatus);




