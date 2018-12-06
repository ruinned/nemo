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
 *          File:  Rte_TP_Type.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application types header file for SW-C <TP>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TP_TYPE_H
# define _RTE_TP_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef Cx0_None
#   define Cx0_None (0U)
#  endif

#  ifndef Cx1_For_PS_only_Pi
#   define Cx1_For_PS_only_Pi (1U)
#  endif

#  ifndef Cx2_For_PS_only_Pi_P1
#   define Cx2_For_PS_only_Pi_P1 (2U)
#  endif

#  ifndef Cx3_For_PS_PE_Pi_P1_P2_P3
#   define Cx3_For_PS_PE_Pi_P1_P2_P3 (3U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_TP_TYPE_H */
