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
 *          File:  SchM_Fls.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Header of BSW Scheduler for BSW Module <Fls>
 *********************************************************************************************************************/
#ifndef SCHM_FLS_H
# define SCHM_FLS_H

# ifdef __cplusplus
extern "C" {
# endif  /* __cplusplus */

# include "SchM_Fls_Type.h"

# define FLS_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, FLS_CODE) Fls_MainFunction(void); /* PRQA S 3451 */ /* MD_Rte_3451 */

# define FLS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_00(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_00(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_01(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_01(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_02(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_02(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_03(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_03(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_04(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_04(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_05(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_05(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_06(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_06(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_07(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_07(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_08(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_08(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_09(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_09(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_10(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_10(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_11(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_11(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_12(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_12(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_13(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_13(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_14(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_14(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_15(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_15(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_16(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_16(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_17(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_17(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_18(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_18(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_19(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_19(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_20(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_20(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_21(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_21(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_22(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_22(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_23(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_23(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_24(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_24(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_25(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_25(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_26(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_26(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_27(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_27(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_28(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_28(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_29(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_29(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_30(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_30(void);

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif  /* __cplusplus */

#endif /* SCHM_FLS_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
