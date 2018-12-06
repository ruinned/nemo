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
 *          File:  Rte_PVTApp_AdiInterfaces_Type.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application types header file for SW-C <PVTApp_AdiInterfaces>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PVTAPP_ADIINTERFACES_TYPE_H
# define _RTE_PVTAPP_ADIINTERFACES_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef Cx0_InactiveActive_Inactive
#   define Cx0_InactiveActive_Inactive (0U)
#  endif

#  ifndef Cx1_InactiveActive_Active
#   define Cx1_InactiveActive_Active (1U)
#  endif

#  ifndef Cx2_InactiveActive_Error
#   define Cx2_InactiveActive_Error (2U)
#  endif

#  ifndef Cx3_InactiveActive_NotAvailable
#   define Cx3_InactiveActive_NotAvailable (3U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_PVTAPP_ADIINTERFACES_TYPE_H */
