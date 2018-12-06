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
 *          File:  TSC_vDem42.c
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_vDem42.h"
#include "TSC_vDem42.h"















     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_vDem42_Rte_Call_ClearDTC_vDem42_ClearDTC(void)
{
  return Rte_Call_ClearDTC_vDem42_ClearDTC();
}
Std_ReturnType TSC_vDem42_Rte_Call_ClearDTC_vDem42_SelectDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin)
{
  return Rte_Call_ClearDTC_vDem42_SelectDTC(DTC, DTCFormat, DTCOrigin);
}


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, uint32 *DTCOfEvent)
{
  return Rte_Call_GeneralEvtInfo43_GetDTCOfEvent(EventId, DTCFormat, DTCOfEvent);
}


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_vDem42_Rte_Call_ControlDTCSuppression43_vDem42_GetDTCSuppression(boolean *SuppressionStatus)
{
  return Rte_Call_ControlDTCSuppression43_vDem42_GetDTCSuppression(SuppressionStatus);
}


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetDebouncingOfEvent(Dem_EventIdType EventId, Dem_DebouncingStateType *DebouncingState)
{
  return Rte_Call_GeneralEvtInfo43_GetDebouncingOfEvent(EventId, DebouncingState);
}


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetEventExtendedDataRecordEx(Dem_EventIdType EventId, uint8 RecordNumber, uint8 *DestBuffer, uint16 *BufSize)
{
  return Rte_Call_GeneralEvtInfo43_GetEventExtendedDataRecordEx(EventId, RecordNumber, DestBuffer, BufSize);
}


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
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetEventFailed(Dem_EventIdType EventId, boolean *EventFailed)
{
  return Rte_Call_GeneralEvtInfo43_GetEventFailed(EventId, EventFailed);
}


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, uint8 *DestBuffer, uint16 *BufSize)
{
  return Rte_Call_GeneralEvtInfo43_GetEventFreezeFrameDataEx(EventId, RecordNumber, DataId, DestBuffer, BufSize);
}


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
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetEventUdsStatus(Dem_EventIdType EventId, Dem_UdsStatusByteType *UDSStatusByte)
{
  return Rte_Call_GeneralEvtInfo43_GetEventUdsStatus(EventId, UDSStatusByte);
}


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetEventTested(Dem_EventIdType EventId, boolean *EventTested)
{
  return Rte_Call_GeneralEvtInfo43_GetEventTested(EventId, EventTested);
}


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_vDem42_Rte_Call_GeneralEvtInfo43_GetFaultDetectionCounter(Dem_EventIdType EventId, sint8 *FaultDetectionCounter)
{
  return Rte_Call_GeneralEvtInfo43_GetFaultDetectionCounter(EventId, FaultDetectionCounter);
}


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_vDem42_Rte_Call_ControlDTCSuppression43_vDem42_SetDTCSuppression(boolean SuppressionStatus)
{
  return Rte_Call_ControlDTCSuppression43_vDem42_SetDTCSuppression(SuppressionStatus);
}


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */







     /* vDem42 */
      /* vDem42 */



