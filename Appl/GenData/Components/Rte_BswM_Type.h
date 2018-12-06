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
 *          File:  Rte_BswM_Type.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application types header file for SW-C <BswM>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BSWM_TYPE_H
# define _RTE_BSWM_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef LIN1_Table1
#   define LIN1_Table1 (1U)
#  endif

#  ifndef LIN1_Table2
#   define LIN1_Table2 (2U)
#  endif

#  ifndef LIN1_Table_E
#   define LIN1_Table_E (3U)
#  endif

#  ifndef LIN1_MasterReq_SlaveResp_Table1
#   define LIN1_MasterReq_SlaveResp_Table1 (4U)
#  endif

#  ifndef LIN1_MasterReq_SlaveResp_Table2
#   define LIN1_MasterReq_SlaveResp_Table2 (5U)
#  endif

#  ifndef LIN1_NULL
#   define LIN1_NULL (0U)
#  endif

#  ifndef LIN1_MasterReq_SlaveResp
#   define LIN1_MasterReq_SlaveResp (6U)
#  endif

#  ifndef LIN2_NULL
#   define LIN2_NULL (0U)
#  endif

#  ifndef LIN2_TABLE0
#   define LIN2_TABLE0 (1U)
#  endif

#  ifndef LIN2_TABLE_E
#   define LIN2_TABLE_E (2U)
#  endif

#  ifndef LIN2_MasterReq_SlaveResp_TABLE0
#   define LIN2_MasterReq_SlaveResp_TABLE0 (3U)
#  endif

#  ifndef LIN2_MasterReq_SlaveResp
#   define LIN2_MasterReq_SlaveResp (4U)
#  endif

#  ifndef LIN3_NULL
#   define LIN3_NULL (0U)
#  endif

#  ifndef LIN3_TABLE1
#   define LIN3_TABLE1 (1U)
#  endif

#  ifndef LIN3_TABLE2
#   define LIN3_TABLE2 (2U)
#  endif

#  ifndef LIN3_TABLE_E
#   define LIN3_TABLE_E (3U)
#  endif

#  ifndef LIN3_MasterReq_SlaveResp_Table1
#   define LIN3_MasterReq_SlaveResp_Table1 (4U)
#  endif

#  ifndef LIN3_MasterReq_SlaveResp_Table2
#   define LIN3_MasterReq_SlaveResp_Table2 (5U)
#  endif

#  ifndef LIN3_MasterReq_SlaveResp
#   define LIN3_MasterReq_SlaveResp (6U)
#  endif

#  ifndef LIN4_NULL
#   define LIN4_NULL (0U)
#  endif

#  ifndef LIN4_MasterReq_SlaveResp_Table1
#   define LIN4_MasterReq_SlaveResp_Table1 (4U)
#  endif

#  ifndef LIN4_TABLE1
#   define LIN4_TABLE1 (1U)
#  endif

#  ifndef LIN4_TABLE2
#   define LIN4_TABLE2 (2U)
#  endif

#  ifndef LIN4_TABLE_E
#   define LIN4_TABLE_E (3U)
#  endif

#  ifndef LIN4_MasterReq_SlaveResp_Table2
#   define LIN4_MasterReq_SlaveResp_Table2 (5U)
#  endif

#  ifndef LIN4_MasterReq_SlaveResp
#   define LIN4_MasterReq_SlaveResp (6U)
#  endif

#  ifndef LIN5_NULL
#   define LIN5_NULL (0U)
#  endif

#  ifndef LIN5_TABLE1
#   define LIN5_TABLE1 (1U)
#  endif

#  ifndef LIN5_MasterReq_SlaveResp_Table1
#   define LIN5_MasterReq_SlaveResp_Table1 (4U)
#  endif

#  ifndef LIN5_MasterReq_SlaveResp_Table2
#   define LIN5_MasterReq_SlaveResp_Table2 (5U)
#  endif

#  ifndef LIN5_MasterReq_SlaveResp
#   define LIN5_MasterReq_SlaveResp (6U)
#  endif

#  ifndef LIN5_TABLE2
#   define LIN5_TABLE2 (2U)
#  endif

#  ifndef LIN5_TABLE_E
#   define LIN5_TABLE_E (3U)
#  endif

#  ifndef STARTUP
#   define STARTUP (0U)
#  endif

#  ifndef RUN
#   define RUN (1U)
#  endif

#  ifndef POSTRUN
#   define POSTRUN (2U)
#  endif

#  ifndef WAKEUP
#   define WAKEUP (3U)
#  endif

#  ifndef SHUTDOWN
#   define SHUTDOWN (4U)
#  endif

#  ifndef RELEASED
#   define RELEASED (0U)
#  endif

#  ifndef REQUESTED
#   define REQUESTED (1U)
#  endif

# endif /* RTE_CORE */


/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
# ifndef RTE_MODETYPE_BswMRteMDG_LIN1Schedule
#  define RTE_MODETYPE_BswMRteMDG_LIN1Schedule
typedef BswM_BswMRteMDG_LIN1Schedule Rte_ModeType_BswMRteMDG_LIN1Schedule;
# endif
# ifndef RTE_MODETYPE_BswMRteMDG_LIN2Schedule
#  define RTE_MODETYPE_BswMRteMDG_LIN2Schedule
typedef BswM_BswMRteMDG_LIN2Schedule Rte_ModeType_BswMRteMDG_LIN2Schedule;
# endif
# ifndef RTE_MODETYPE_BswMRteMDG_LIN3Schedule
#  define RTE_MODETYPE_BswMRteMDG_LIN3Schedule
typedef BswM_BswMRteMDG_LIN3Schedule Rte_ModeType_BswMRteMDG_LIN3Schedule;
# endif
# ifndef RTE_MODETYPE_BswMRteMDG_LIN4Schedule
#  define RTE_MODETYPE_BswMRteMDG_LIN4Schedule
typedef BswM_BswMRteMDG_LIN4Schedule Rte_ModeType_BswMRteMDG_LIN4Schedule;
# endif
# ifndef RTE_MODETYPE_BswMRteMDG_LIN5Schedule
#  define RTE_MODETYPE_BswMRteMDG_LIN5Schedule
typedef BswM_BswMRteMDG_LIN5Schedule Rte_ModeType_BswMRteMDG_LIN5Schedule;
# endif
# ifndef RTE_MODETYPE_ESH_Mode
#  define RTE_MODETYPE_ESH_Mode
typedef BswM_ESH_Mode Rte_ModeType_ESH_Mode;
# endif
# ifndef RTE_MODETYPE_ESH_RunRequest
#  define RTE_MODETYPE_ESH_RunRequest
typedef BswM_ESH_RunRequest Rte_ModeType_ESH_RunRequest;
# endif

# define RTE_MODE_BswM_BswMRteMDG_LIN1Schedule_LIN1_MasterReq_SlaveResp (0U)
# ifndef RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_MasterReq_SlaveResp
#  define RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_MasterReq_SlaveResp (0U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN1Schedule_LIN1_MasterReq_SlaveResp_Table1 (1U)
# ifndef RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_MasterReq_SlaveResp_Table1
#  define RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_MasterReq_SlaveResp_Table1 (1U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN1Schedule_LIN1_MasterReq_SlaveResp_Table2 (2U)
# ifndef RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_MasterReq_SlaveResp_Table2
#  define RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_MasterReq_SlaveResp_Table2 (2U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN1Schedule_LIN1_NULL (3U)
# ifndef RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_NULL
#  define RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_NULL (3U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN1Schedule_LIN1_Table1 (4U)
# ifndef RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_Table1
#  define RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_Table1 (4U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN1Schedule_LIN1_Table2 (5U)
# ifndef RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_Table2
#  define RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_Table2 (5U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN1Schedule_LIN1_Table_E (6U)
# ifndef RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_Table_E
#  define RTE_MODE_BswMRteMDG_LIN1Schedule_LIN1_Table_E (6U)
# endif
# define RTE_TRANSITION_BswM_BswMRteMDG_LIN1Schedule (7U)
# ifndef RTE_TRANSITION_BswMRteMDG_LIN1Schedule
#  define RTE_TRANSITION_BswMRteMDG_LIN1Schedule (7U)
# endif

# define RTE_MODE_BswM_BswMRteMDG_LIN2Schedule_LIN2_MasterReq_SlaveResp (0U)
# ifndef RTE_MODE_BswMRteMDG_LIN2Schedule_LIN2_MasterReq_SlaveResp
#  define RTE_MODE_BswMRteMDG_LIN2Schedule_LIN2_MasterReq_SlaveResp (0U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN2Schedule_LIN2_MasterReq_SlaveResp_TABLE0 (1U)
# ifndef RTE_MODE_BswMRteMDG_LIN2Schedule_LIN2_MasterReq_SlaveResp_TABLE0
#  define RTE_MODE_BswMRteMDG_LIN2Schedule_LIN2_MasterReq_SlaveResp_TABLE0 (1U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN2Schedule_LIN2_NULL (2U)
# ifndef RTE_MODE_BswMRteMDG_LIN2Schedule_LIN2_NULL
#  define RTE_MODE_BswMRteMDG_LIN2Schedule_LIN2_NULL (2U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN2Schedule_LIN2_TABLE0 (3U)
# ifndef RTE_MODE_BswMRteMDG_LIN2Schedule_LIN2_TABLE0
#  define RTE_MODE_BswMRteMDG_LIN2Schedule_LIN2_TABLE0 (3U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN2Schedule_LIN2_TABLE_E (4U)
# ifndef RTE_MODE_BswMRteMDG_LIN2Schedule_LIN2_TABLE_E
#  define RTE_MODE_BswMRteMDG_LIN2Schedule_LIN2_TABLE_E (4U)
# endif
# define RTE_TRANSITION_BswM_BswMRteMDG_LIN2Schedule (5U)
# ifndef RTE_TRANSITION_BswMRteMDG_LIN2Schedule
#  define RTE_TRANSITION_BswMRteMDG_LIN2Schedule (5U)
# endif

# define RTE_MODE_BswM_BswMRteMDG_LIN3Schedule_LIN3_MasterReq_SlaveResp (0U)
# ifndef RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_MasterReq_SlaveResp
#  define RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_MasterReq_SlaveResp (0U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN3Schedule_LIN3_MasterReq_SlaveResp_Table1 (1U)
# ifndef RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_MasterReq_SlaveResp_Table1
#  define RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_MasterReq_SlaveResp_Table1 (1U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN3Schedule_LIN3_MasterReq_SlaveResp_Table2 (2U)
# ifndef RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_MasterReq_SlaveResp_Table2
#  define RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_MasterReq_SlaveResp_Table2 (2U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN3Schedule_LIN3_NULL (3U)
# ifndef RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_NULL
#  define RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_NULL (3U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN3Schedule_LIN3_TABLE1 (4U)
# ifndef RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_TABLE1
#  define RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_TABLE1 (4U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN3Schedule_LIN3_TABLE2 (5U)
# ifndef RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_TABLE2
#  define RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_TABLE2 (5U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN3Schedule_LIN3_TABLE_E (6U)
# ifndef RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_TABLE_E
#  define RTE_MODE_BswMRteMDG_LIN3Schedule_LIN3_TABLE_E (6U)
# endif
# define RTE_TRANSITION_BswM_BswMRteMDG_LIN3Schedule (7U)
# ifndef RTE_TRANSITION_BswMRteMDG_LIN3Schedule
#  define RTE_TRANSITION_BswMRteMDG_LIN3Schedule (7U)
# endif

# define RTE_MODE_BswM_BswMRteMDG_LIN4Schedule_LIN4_MasterReq_SlaveResp (0U)
# ifndef RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_MasterReq_SlaveResp
#  define RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_MasterReq_SlaveResp (0U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN4Schedule_LIN4_MasterReq_SlaveResp_Table1 (1U)
# ifndef RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_MasterReq_SlaveResp_Table1
#  define RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_MasterReq_SlaveResp_Table1 (1U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN4Schedule_LIN4_MasterReq_SlaveResp_Table2 (2U)
# ifndef RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_MasterReq_SlaveResp_Table2
#  define RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_MasterReq_SlaveResp_Table2 (2U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN4Schedule_LIN4_NULL (3U)
# ifndef RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_NULL
#  define RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_NULL (3U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN4Schedule_LIN4_TABLE1 (4U)
# ifndef RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_TABLE1
#  define RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_TABLE1 (4U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN4Schedule_LIN4_TABLE2 (5U)
# ifndef RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_TABLE2
#  define RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_TABLE2 (5U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN4Schedule_LIN4_TABLE_E (6U)
# ifndef RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_TABLE_E
#  define RTE_MODE_BswMRteMDG_LIN4Schedule_LIN4_TABLE_E (6U)
# endif
# define RTE_TRANSITION_BswM_BswMRteMDG_LIN4Schedule (7U)
# ifndef RTE_TRANSITION_BswMRteMDG_LIN4Schedule
#  define RTE_TRANSITION_BswMRteMDG_LIN4Schedule (7U)
# endif

# define RTE_MODE_BswM_BswMRteMDG_LIN5Schedule_LIN5_MasterReq_SlaveResp (0U)
# ifndef RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_MasterReq_SlaveResp
#  define RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_MasterReq_SlaveResp (0U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN5Schedule_LIN5_MasterReq_SlaveResp_Table1 (1U)
# ifndef RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_MasterReq_SlaveResp_Table1
#  define RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_MasterReq_SlaveResp_Table1 (1U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN5Schedule_LIN5_MasterReq_SlaveResp_Table2 (2U)
# ifndef RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_MasterReq_SlaveResp_Table2
#  define RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_MasterReq_SlaveResp_Table2 (2U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN5Schedule_LIN5_NULL (3U)
# ifndef RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_NULL
#  define RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_NULL (3U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN5Schedule_LIN5_TABLE1 (4U)
# ifndef RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_TABLE1
#  define RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_TABLE1 (4U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN5Schedule_LIN5_TABLE2 (5U)
# ifndef RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_TABLE2
#  define RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_TABLE2 (5U)
# endif
# define RTE_MODE_BswM_BswMRteMDG_LIN5Schedule_LIN5_TABLE_E (6U)
# ifndef RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_TABLE_E
#  define RTE_MODE_BswMRteMDG_LIN5Schedule_LIN5_TABLE_E (6U)
# endif
# define RTE_TRANSITION_BswM_BswMRteMDG_LIN5Schedule (7U)
# ifndef RTE_TRANSITION_BswMRteMDG_LIN5Schedule
#  define RTE_TRANSITION_BswMRteMDG_LIN5Schedule (7U)
# endif

# define RTE_MODE_BswM_ESH_Mode_POSTRUN (0U)
# ifndef RTE_MODE_ESH_Mode_POSTRUN
#  define RTE_MODE_ESH_Mode_POSTRUN (0U)
# endif
# define RTE_MODE_BswM_ESH_Mode_RUN (1U)
# ifndef RTE_MODE_ESH_Mode_RUN
#  define RTE_MODE_ESH_Mode_RUN (1U)
# endif
# define RTE_MODE_BswM_ESH_Mode_SHUTDOWN (2U)
# ifndef RTE_MODE_ESH_Mode_SHUTDOWN
#  define RTE_MODE_ESH_Mode_SHUTDOWN (2U)
# endif
# define RTE_MODE_BswM_ESH_Mode_STARTUP (3U)
# ifndef RTE_MODE_ESH_Mode_STARTUP
#  define RTE_MODE_ESH_Mode_STARTUP (3U)
# endif
# define RTE_MODE_BswM_ESH_Mode_WAKEUP (4U)
# ifndef RTE_MODE_ESH_Mode_WAKEUP
#  define RTE_MODE_ESH_Mode_WAKEUP (4U)
# endif
# define RTE_TRANSITION_BswM_ESH_Mode (5U)
# ifndef RTE_TRANSITION_ESH_Mode
#  define RTE_TRANSITION_ESH_Mode (5U)
# endif

# define RTE_MODE_BswM_ESH_RunRequest_RELEASED (0U)
# ifndef RTE_MODE_ESH_RunRequest_RELEASED
#  define RTE_MODE_ESH_RunRequest_RELEASED (0U)
# endif
# define RTE_MODE_BswM_ESH_RunRequest_REQUESTED (1U)
# ifndef RTE_MODE_ESH_RunRequest_REQUESTED
#  define RTE_MODE_ESH_RunRequest_REQUESTED (1U)
# endif
# define RTE_TRANSITION_BswM_ESH_RunRequest (2U)
# ifndef RTE_TRANSITION_ESH_RunRequest
#  define RTE_TRANSITION_ESH_RunRequest (2U)
# endif

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BSWM_TYPE_H */
