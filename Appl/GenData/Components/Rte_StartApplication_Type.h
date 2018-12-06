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
 *          File:  Rte_StartApplication_Type.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application types header file for SW-C <StartApplication>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_STARTAPPLICATION_TYPE_H
# define _RTE_STARTAPPLICATION_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef COMM_NO_COMMUNICATION
#   define COMM_NO_COMMUNICATION (0U)
#  endif

#  ifndef COMM_SILENT_COMMUNICATION
#   define COMM_SILENT_COMMUNICATION (1U)
#  endif

#  ifndef COMM_FULL_COMMUNICATION
#   define COMM_FULL_COMMUNICATION (2U)
#  endif

#  ifndef DCM_E_POSITIVERESPONSE
#   define DCM_E_POSITIVERESPONSE (0U)
#  endif

#  ifndef DCM_E_GENERALREJECT
#   define DCM_E_GENERALREJECT (16U)
#  endif

#  ifndef DCM_E_SERVICENOTSUPPORTED
#   define DCM_E_SERVICENOTSUPPORTED (17U)
#  endif

#  ifndef DCM_E_SUBFUNCTIONNOTSUPPORTED
#   define DCM_E_SUBFUNCTIONNOTSUPPORTED (18U)
#  endif

#  ifndef DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT
#   define DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
#  endif

#  ifndef DCM_E_RESPONSETOOLONG
#   define DCM_E_RESPONSETOOLONG (20U)
#  endif

#  ifndef DCM_E_BUSYREPEATREQUEST
#   define DCM_E_BUSYREPEATREQUEST (33U)
#  endif

#  ifndef DCM_E_CONDITIONSNOTCORRECT
#   define DCM_E_CONDITIONSNOTCORRECT (34U)
#  endif

#  ifndef DCM_E_REQUESTSEQUENCEERROR
#   define DCM_E_REQUESTSEQUENCEERROR (36U)
#  endif

#  ifndef DCM_E_NORESPONSEFROMSUBNETCOMPONENT
#   define DCM_E_NORESPONSEFROMSUBNETCOMPONENT (37U)
#  endif

#  ifndef DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION
#   define DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (38U)
#  endif

#  ifndef DCM_E_REQUESTOUTOFRANGE
#   define DCM_E_REQUESTOUTOFRANGE (49U)
#  endif

#  ifndef DCM_E_SECURITYACCESSDENIED
#   define DCM_E_SECURITYACCESSDENIED (51U)
#  endif

#  ifndef DCM_E_INVALIDKEY
#   define DCM_E_INVALIDKEY (53U)
#  endif

#  ifndef DCM_E_EXCEEDNUMBEROFATTEMPTS
#   define DCM_E_EXCEEDNUMBEROFATTEMPTS (54U)
#  endif

#  ifndef DCM_E_REQUIREDTIMEDELAYNOTEXPIRED
#   define DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (55U)
#  endif

#  ifndef DCM_E_UPLOADDOWNLOADNOTACCEPTED
#   define DCM_E_UPLOADDOWNLOADNOTACCEPTED (112U)
#  endif

#  ifndef DCM_E_TRANSFERDATASUSPENDED
#   define DCM_E_TRANSFERDATASUSPENDED (113U)
#  endif

#  ifndef DCM_E_GENERALPROGRAMMINGFAILURE
#   define DCM_E_GENERALPROGRAMMINGFAILURE (114U)
#  endif

#  ifndef DCM_E_WRONGBLOCKSEQUENCECOUNTER
#   define DCM_E_WRONGBLOCKSEQUENCECOUNTER (115U)
#  endif

#  ifndef DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING
#   define DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING (120U)
#  endif

#  ifndef DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION
#   define DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
#  endif

#  ifndef DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION
#   define DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (127U)
#  endif

#  ifndef DCM_E_RPMTOOHIGH
#   define DCM_E_RPMTOOHIGH (129U)
#  endif

#  ifndef DCM_E_RPMTOOLOW
#   define DCM_E_RPMTOOLOW (130U)
#  endif

#  ifndef DCM_E_ENGINEISRUNNING
#   define DCM_E_ENGINEISRUNNING (131U)
#  endif

#  ifndef DCM_E_ENGINEISNOTRUNNING
#   define DCM_E_ENGINEISNOTRUNNING (132U)
#  endif

#  ifndef DCM_E_ENGINERUNTIMETOOLOW
#   define DCM_E_ENGINERUNTIMETOOLOW (133U)
#  endif

#  ifndef DCM_E_TEMPERATURETOOHIGH
#   define DCM_E_TEMPERATURETOOHIGH (134U)
#  endif

#  ifndef DCM_E_TEMPERATURETOOLOW
#   define DCM_E_TEMPERATURETOOLOW (135U)
#  endif

#  ifndef DCM_E_VEHICLESPEEDTOOHIGH
#   define DCM_E_VEHICLESPEEDTOOHIGH (136U)
#  endif

#  ifndef DCM_E_VEHICLESPEEDTOOLOW
#   define DCM_E_VEHICLESPEEDTOOLOW (137U)
#  endif

#  ifndef DCM_E_THROTTLE_PEDALTOOHIGH
#   define DCM_E_THROTTLE_PEDALTOOHIGH (138U)
#  endif

#  ifndef DCM_E_THROTTLE_PEDALTOOLOW
#   define DCM_E_THROTTLE_PEDALTOOLOW (139U)
#  endif

#  ifndef DCM_E_TRANSMISSIONRANGENOTINNEUTRAL
#   define DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
#  endif

#  ifndef DCM_E_TRANSMISSIONRANGENOTINGEAR
#   define DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
#  endif

#  ifndef DCM_E_BRAKESWITCH_NOTCLOSED
#   define DCM_E_BRAKESWITCH_NOTCLOSED (143U)
#  endif

#  ifndef DCM_E_SHIFTERLEVERNOTINPARK
#   define DCM_E_SHIFTERLEVERNOTINPARK (144U)
#  endif

#  ifndef DCM_E_TORQUECONVERTERCLUTCHLOCKED
#   define DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
#  endif

#  ifndef DCM_E_VOLTAGETOOHIGH
#   define DCM_E_VOLTAGETOOHIGH (146U)
#  endif

#  ifndef DCM_E_VOLTAGETOOLOW
#   define DCM_E_VOLTAGETOOLOW (147U)
#  endif

#  ifndef DEM_EVENT_STATUS_PASSED
#   define DEM_EVENT_STATUS_PASSED (0U)
#  endif

#  ifndef DEM_EVENT_STATUS_FAILED
#   define DEM_EVENT_STATUS_FAILED (1U)
#  endif

#  ifndef DEM_EVENT_STATUS_PREPASSED
#   define DEM_EVENT_STATUS_PREPASSED (2U)
#  endif

#  ifndef DEM_EVENT_STATUS_PREFAILED
#   define DEM_EVENT_STATUS_PREFAILED (3U)
#  endif

#  ifndef DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED
#   define DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED (4U)
#  endif

#  ifndef DEM_CYCLE_STATE_START
#   define DEM_CYCLE_STATE_START (0U)
#  endif

#  ifndef DEM_CYCLE_STATE_END
#   define DEM_CYCLE_STATE_END (1U)
#  endif

#  ifndef ECUM_SUBSTATE_MASK
#   define ECUM_SUBSTATE_MASK (15U)
#  endif

#  ifndef ECUM_STATE_STARTUP
#   define ECUM_STATE_STARTUP (16U)
#  endif

#  ifndef ECUM_STATE_STARTUP_ONE
#   define ECUM_STATE_STARTUP_ONE (17U)
#  endif

#  ifndef ECUM_STATE_STARTUP_TWO
#   define ECUM_STATE_STARTUP_TWO (18U)
#  endif

#  ifndef ECUM_STATE_WAKEUP
#   define ECUM_STATE_WAKEUP (32U)
#  endif

#  ifndef ECUM_STATE_WAKEUP_ONE
#   define ECUM_STATE_WAKEUP_ONE (33U)
#  endif

#  ifndef ECUM_STATE_WAKEUP_VALIDATION
#   define ECUM_STATE_WAKEUP_VALIDATION (34U)
#  endif

#  ifndef ECUM_STATE_WAKEUP_REACTION
#   define ECUM_STATE_WAKEUP_REACTION (35U)
#  endif

#  ifndef ECUM_STATE_WAKEUP_TWO
#   define ECUM_STATE_WAKEUP_TWO (36U)
#  endif

#  ifndef ECUM_STATE_WAKEUP_WAKESLEEP
#   define ECUM_STATE_WAKEUP_WAKESLEEP (37U)
#  endif

#  ifndef ECUM_STATE_WAKEUP_TTII
#   define ECUM_STATE_WAKEUP_TTII (38U)
#  endif

#  ifndef ECUM_STATE_RUN
#   define ECUM_STATE_RUN (48U)
#  endif

#  ifndef ECUM_STATE_APP_RUN
#   define ECUM_STATE_APP_RUN (50U)
#  endif

#  ifndef ECUM_STATE_APP_POST_RUN
#   define ECUM_STATE_APP_POST_RUN (51U)
#  endif

#  ifndef ECUM_STATE_SHUTDOWN
#   define ECUM_STATE_SHUTDOWN (64U)
#  endif

#  ifndef ECUM_STATE_PREP_SHUTDOWN
#   define ECUM_STATE_PREP_SHUTDOWN (68U)
#  endif

#  ifndef ECUM_STATE_GO_SLEEP
#   define ECUM_STATE_GO_SLEEP (73U)
#  endif

#  ifndef ECUM_STATE_GO_OFF_ONE
#   define ECUM_STATE_GO_OFF_ONE (77U)
#  endif

#  ifndef ECUM_STATE_GO_OFF_TWO
#   define ECUM_STATE_GO_OFF_TWO (78U)
#  endif

#  ifndef ECUM_STATE_SLEEP
#   define ECUM_STATE_SLEEP (80U)
#  endif

#  ifndef ECUM_STATE_OFF
#   define ECUM_STATE_OFF (128U)
#  endif

#  ifndef ECUM_STATE_RESET
#   define ECUM_STATE_RESET (144U)
#  endif

#  ifndef STARTAPPLICATION_ACTIVE_COMPONENT_COM_RXTX
#   define STARTAPPLICATION_ACTIVE_COMPONENT_COM_RXTX (0U)
#  endif

#  ifndef STARTAPPLICATION_ACTIVE_COMPONENT_DIAG
#   define STARTAPPLICATION_ACTIVE_COMPONENT_DIAG (2U)
#  endif

#  ifndef STARTAPPLICATION_ACTIVE_COMPONENT_COM_TXONLY
#   define STARTAPPLICATION_ACTIVE_COMPONENT_COM_TXONLY (3U)
#  endif

#  ifndef STARTAPPLICATION_ACTIVE_COMPONENT_MEMORYPROTECTION
#   define STARTAPPLICATION_ACTIVE_COMPONENT_MEMORYPROTECTION (9U)
#  endif

#  ifndef STARTAPPLICATION_ACTIVE_COMPONENT_NM
#   define STARTAPPLICATION_ACTIVE_COMPONENT_NM (10U)
#  endif

#  ifndef STARTAPPLICATION_ACTIVE_COMPONENT_INVALID
#   define STARTAPPLICATION_ACTIVE_COMPONENT_INVALID (255U)
#  endif

#  ifndef NM_APPL_STATE_FULL_COMM_EXTERN
#   define NM_APPL_STATE_FULL_COMM_EXTERN (0U)
#  endif

#  ifndef NM_APPL_STATE_FULL_COMM_INTERN
#   define NM_APPL_STATE_FULL_COMM_INTERN (1U)
#  endif

#  ifndef NM_APPL_STATE_NO_COMM_EXTERN
#   define NM_APPL_STATE_NO_COMM_EXTERN (2U)
#  endif

#  ifndef J1939RM_EXTID_NONE
#   define J1939RM_EXTID_NONE (0U)
#  endif

#  ifndef J1939RM_EXTID_ONE
#   define J1939RM_EXTID_ONE (1U)
#  endif

#  ifndef J1939RM_EXTID_TWO
#   define J1939RM_EXTID_TWO (2U)
#  endif

#  ifndef J1939RM_EXTID_THREE
#   define J1939RM_EXTID_THREE (3U)
#  endif

#  ifndef J1939RM_EXTID_GF
#   define J1939RM_EXTID_GF (4U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_STARTAPPLICATION_TYPE_H */
