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
 *          File:  Rte_vDem42.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <vDem42>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_VDEM42_H
# define _RTE_VDEM42_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_vDem42_Type.h"
# include "Rte_DataHandleType.h"


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_ClearDTC_vDem42_ClearDTC(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_ClearDTC_vDem42_SelectDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_ControlDTCSuppression43_vDem42_GetDTCSuppression(P2VAR(boolean, AUTOMATIC, RTE_VDEM42_APPL_VAR) SuppressionStatus); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_ControlDTCSuppression43_vDem42_SetDTCSuppression(boolean SuppressionStatus); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_VDEM42_APPL_VAR) DTCOfEvent); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetDebouncingOfEvent(Dem_EventIdType EventId, P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_VDEM42_APPL_VAR) DebouncingState); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetEventExtendedDataRecordEx(Dem_EventIdType EventId, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_VDEM42_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_VDEM42_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetEventExtendedDataRecordEx(Dem_EventIdType EventId, uint8 RecordNumber, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_VDEM42_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_VDEM42_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetEventFailed(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_VDEM42_APPL_VAR) EventFailed); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, P2VAR(uint8, AUTOMATIC, RTE_VDEM42_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_VDEM42_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_VDEM42_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_VDEM42_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetEventTested(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_VDEM42_APPL_VAR) EventTested); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetEventUdsStatus(Dem_EventIdType EventId, P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_VDEM42_APPL_VAR) UDSStatusByte); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_vDem42_GeneralEvtInfo43_GetFaultDetectionCounter(Dem_EventIdType EventId, P2VAR(sint8, AUTOMATIC, RTE_VDEM42_APPL_VAR) FaultDetectionCounter); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define Rte_Call_ClearDTC_vDem42_ClearDTC Rte_Call_vDem42_ClearDTC_vDem42_ClearDTC
#  define Rte_Call_ClearDTC_vDem42_SelectDTC Rte_Call_vDem42_ClearDTC_vDem42_SelectDTC
#  define Rte_Call_ControlDTCSuppression43_vDem42_GetDTCSuppression Rte_Call_vDem42_ControlDTCSuppression43_vDem42_GetDTCSuppression
#  define Rte_Call_ControlDTCSuppression43_vDem42_SetDTCSuppression Rte_Call_vDem42_ControlDTCSuppression43_vDem42_SetDTCSuppression
#  define Rte_Call_GeneralEvtInfo43_GetDTCOfEvent Rte_Call_vDem42_GeneralEvtInfo43_GetDTCOfEvent
#  define Rte_Call_GeneralEvtInfo43_GetDebouncingOfEvent Rte_Call_vDem42_GeneralEvtInfo43_GetDebouncingOfEvent
#  define Rte_Call_GeneralEvtInfo43_GetEventExtendedDataRecordEx Rte_Call_vDem42_GeneralEvtInfo43_GetEventExtendedDataRecordEx
#  define Rte_Call_GeneralEvtInfo43_GetEventFailed Rte_Call_vDem42_GeneralEvtInfo43_GetEventFailed
#  define Rte_Call_GeneralEvtInfo43_GetEventFreezeFrameDataEx Rte_Call_vDem42_GeneralEvtInfo43_GetEventFreezeFrameDataEx
#  define Rte_Call_GeneralEvtInfo43_GetEventTested Rte_Call_vDem42_GeneralEvtInfo43_GetEventTested
#  define Rte_Call_GeneralEvtInfo43_GetEventUdsStatus Rte_Call_vDem42_GeneralEvtInfo43_GetEventUdsStatus
#  define Rte_Call_GeneralEvtInfo43_GetFaultDetectionCounter Rte_Call_vDem42_GeneralEvtInfo43_GetFaultDetectionCounter


# endif /* !defined(RTE_CORE) */


# define vDem42_START_SEC_CODE
# include "vDem42_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ClearDTC VDem42_ClearDTC
#  define RTE_RUNNABLE_GetDTCOfEvent VDem42_GetDTCOfEvent
#  define RTE_RUNNABLE_GetDTCSuppression VDem42_GetDTCSuppression
#  define RTE_RUNNABLE_GetDebouncingOfEvent VDem42_GetDebouncingOfEvent
#  define RTE_RUNNABLE_GetEventExtendedDataRecord VDem42_GetEventExtendedDataRecord
#  define RTE_RUNNABLE_GetEventExtendedDataRecordEx VDem42_GetEventExtendedDataRecordEx
#  define RTE_RUNNABLE_GetEventFailed VDem42_GetEventFailed
#  define RTE_RUNNABLE_GetEventFreezeFrameData VDem42_GetEventFreezeFrameData
#  define RTE_RUNNABLE_GetEventFreezeFrameDataEx VDem42_GetEventFreezeFrameDataEx
#  define RTE_RUNNABLE_GetEventStatus VDem42_GetEventStatus
#  define RTE_RUNNABLE_GetEventTested VDem42_GetEventTested
#  define RTE_RUNNABLE_GetFaultDetectionCounter VDem42_GetFaultDetectionCounter
#  define RTE_RUNNABLE_SetDTCSuppression VDem42_SetDTCSuppression
# endif

FUNC(Std_ReturnType, vDem42_CODE) VDem42_ClearDTC(uint32 DTC, VDem42_DTCFormatType DTCFormat, VDem42_DTCOriginType DTCOrigin); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, vDem42_CODE) VDem42_GetDTCOfEvent(VDem42_EventIdType parg0, VDem42_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_VDEM42_APPL_VAR) DTCOfEvent); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, vDem42_CODE) VDem42_GetDTCSuppression(uint32 DTC, VDem42_DTCFormatType DTCFormat, P2VAR(boolean, AUTOMATIC, RTE_VDEM42_APPL_VAR) SuppressionStatus); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, vDem42_CODE) VDem42_GetDebouncingOfEvent(VDem42_EventIdType parg0, P2VAR(VDem42_DebouncingStateType, AUTOMATIC, RTE_VDEM42_APPL_VAR) DebouncingState); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, vDem42_CODE) VDem42_GetEventExtendedDataRecord(VDem42_EventIdType parg0, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_VDEM42_APPL_VAR) DestBuffer); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, vDem42_CODE) VDem42_GetEventExtendedDataRecord(VDem42_EventIdType parg0, uint8 RecordNumber, P2VAR(VDem42_MaxDataValueType, AUTOMATIC, RTE_VDEM42_APPL_VAR) DestBuffer); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, vDem42_CODE) VDem42_GetEventExtendedDataRecordEx(VDem42_EventIdType parg0, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_VDEM42_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_VDEM42_APPL_VAR) BufSize); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, vDem42_CODE) VDem42_GetEventExtendedDataRecordEx(VDem42_EventIdType parg0, uint8 RecordNumber, P2VAR(VDem42_MaxDataValueType, AUTOMATIC, RTE_VDEM42_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_VDEM42_APPL_VAR) BufSize); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, vDem42_CODE) VDem42_GetEventFailed(VDem42_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_VDEM42_APPL_VAR) EventFailed); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, vDem42_CODE) VDem42_GetEventFreezeFrameData(VDem42_EventIdType parg0, uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, P2VAR(uint8, AUTOMATIC, RTE_VDEM42_APPL_VAR) DestBuffer); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, vDem42_CODE) VDem42_GetEventFreezeFrameData(VDem42_EventIdType parg0, uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, P2VAR(VDem42_MaxDataValueType, AUTOMATIC, RTE_VDEM42_APPL_VAR) DestBuffer); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, vDem42_CODE) VDem42_GetEventFreezeFrameDataEx(VDem42_EventIdType parg0, uint8 RecordNumber, uint16 DataId, P2VAR(uint8, AUTOMATIC, RTE_VDEM42_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_VDEM42_APPL_VAR) BufSize); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, vDem42_CODE) VDem42_GetEventFreezeFrameDataEx(VDem42_EventIdType parg0, uint8 RecordNumber, uint16 DataId, P2VAR(VDem42_MaxDataValueType, AUTOMATIC, RTE_VDEM42_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_VDEM42_APPL_VAR) BufSize); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, vDem42_CODE) VDem42_GetEventStatus(VDem42_EventIdType parg0, P2VAR(VDem42_UdsStatusByteType, AUTOMATIC, RTE_VDEM42_APPL_VAR) EventStatusByte); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, vDem42_CODE) VDem42_GetEventTested(VDem42_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_VDEM42_APPL_VAR) EventTested); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, vDem42_CODE) VDem42_GetFaultDetectionCounter(VDem42_EventIdType parg0, P2VAR(sint8, AUTOMATIC, RTE_VDEM42_APPL_VAR) FaultDetectionCounter); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, vDem42_CODE) VDem42_SetDTCSuppression(uint32 DTC, VDem42_DTCFormatType DTCFormat, boolean SuppressionStatus); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define vDem42_STOP_SEC_CODE
# include "vDem42_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_CddIf_DEM_CLEAR_BUSY (5U)

#  define RTE_E_CddIf_DEM_CLEAR_FAILED (3U)

#  define RTE_E_CddIf_DEM_CLEAR_MEMORY_ERROR (6U)

#  define RTE_E_CddIf_DEM_CLEAR_PENDING (4U)

#  define RTE_E_CddIf_DEM_CLEAR_WRONG_DTC (1U)

#  define RTE_E_CddIf_DEM_CLEAR_WRONG_DTCORIGIN (2U)

#  define RTE_E_ClearDTC_DEM_CLEAR_BUSY (5U)

#  define RTE_E_ClearDTC_DEM_CLEAR_FAILED (7U)

#  define RTE_E_ClearDTC_DEM_CLEAR_MEMORY_ERROR (6U)

#  define RTE_E_ClearDTC_DEM_PENDING (4U)

#  define RTE_E_ClearDTC_DEM_WRONG_DTC (8U)

#  define RTE_E_ClearDTC_DEM_WRONG_DTCORIGIN (9U)

#  define RTE_E_ClearDTC_E_NOT_OK (1U)

#  define RTE_E_DTCSuppression422_E_NOT_OK (1U)

#  define RTE_E_DTCSuppression43_DEM_PENDING (4U)

#  define RTE_E_DTCSuppression43_DEM_WRONG_DTC (8U)

#  define RTE_E_DTCSuppression43_DEM_WRONG_DTCORIGIN (9U)

#  define RTE_E_DTCSuppression43_E_NOT_OK (1U)

#  define RTE_E_DiagnosticInfo422_DEM_E_NODATAAVAILABLE (48U)

#  define RTE_E_DiagnosticInfo422_DEM_E_NO_DTC_AVAILABLE (2U)

#  define RTE_E_DiagnosticInfo422_DEM_E_NO_FDC_AVAILABLE (3U)

#  define RTE_E_DiagnosticInfo422_DEM_E_WRONG_BUFFERSIZE (21U)

#  define RTE_E_DiagnosticInfo422_DEM_E_WRONG_DIDNUMBER (50U)

#  define RTE_E_DiagnosticInfo422_DEM_E_WRONG_RECORDNUMBER (49U)

#  define RTE_E_DiagnosticInfo422_E_NOT_OK (1U)

#  define RTE_E_GeneralDiagnosticInfo422_DEM_E_NODATAAVAILABLE (48U)

#  define RTE_E_GeneralDiagnosticInfo422_DEM_E_NO_DTC_AVAILABLE (2U)

#  define RTE_E_GeneralDiagnosticInfo422_DEM_E_NO_FDC_AVAILABLE (3U)

#  define RTE_E_GeneralDiagnosticInfo422_DEM_E_WRONG_BUFFERSIZE (21U)

#  define RTE_E_GeneralDiagnosticInfo422_DEM_E_WRONG_DIDNUMBER (50U)

#  define RTE_E_GeneralDiagnosticInfo422_DEM_E_WRONG_RECORDNUMBER (49U)

#  define RTE_E_GeneralDiagnosticInfo422_E_NOT_OK (1U)

#  define RTE_E_GeneralDiagnosticInfo43_DEM_BUFFER_TOO_SMALL (21U)

#  define RTE_E_GeneralDiagnosticInfo43_DEM_E_NO_DTC_AVAILABLE (10U)

#  define RTE_E_GeneralDiagnosticInfo43_DEM_E_NO_FDC_AVAILABLE (14U)

#  define RTE_E_GeneralDiagnosticInfo43_DEM_NO_SUCH_ELEMENT (48U)

#  define RTE_E_GeneralDiagnosticInfo43_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_VDEM42_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1330:  MISRA rule: 16.4
     Reason:     The RTE Generator uses default names for parameter identifiers of port defined arguments of service modules.
                 Therefore the parameter identifiers in the function declaration differs from those of the implementation of the BSW module.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
