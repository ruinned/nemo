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
 *          File:  Rte_J1939Rm_Type.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application types header file for SW-C <J1939Rm>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_J1939RM_TYPE_H
# define _RTE_J1939RM_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef J1939RM_ACK_POSITIVE
#   define J1939RM_ACK_POSITIVE (0U)
#  endif

#  ifndef J1939RM_ACK_NEGATIVE
#   define J1939RM_ACK_NEGATIVE (1U)
#  endif

#  ifndef J1939RM_ACK_ACCESS_DENIED
#   define J1939RM_ACK_ACCESS_DENIED (2U)
#  endif

#  ifndef J1939RM_ACK_CANNOT_RESPOND
#   define J1939RM_ACK_CANNOT_RESPOND (3U)
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

#endif /* _RTE_J1939RM_TYPE_H */
