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
 *          File:  SchM_Dem.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Header of BSW Scheduler for BSW Module <Dem>
 *********************************************************************************************************************/
#ifndef SCHM_DEM_H
# define SCHM_DEM_H

# ifdef __cplusplus
extern "C" {
# endif  /* __cplusplus */

# include "SchM_Dem_Type.h"

# define DEM_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, DEM_CODE) Dem_MasterMainFunction(void); /* PRQA S 3451 */ /* MD_Rte_3451 */
FUNC(void, DEM_CODE) Dem_SatelliteMainFunction(void); /* PRQA S 3451 */ /* MD_Rte_3451 */

# define DEM_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_0(void);
FUNC(void, RTE_CODE) SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_0(void);
FUNC(void, RTE_CODE) SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_1(void);
FUNC(void, RTE_CODE) SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_1(void);
FUNC(void, RTE_CODE) SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_2(void);
FUNC(void, RTE_CODE) SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_2(void);
FUNC(void, RTE_CODE) SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_3(void);
FUNC(void, RTE_CODE) SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_3(void);
FUNC(void, RTE_CODE) SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_4(void);
FUNC(void, RTE_CODE) SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_4(void);

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif  /* __cplusplus */

#endif /* SCHM_DEM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
