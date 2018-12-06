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
 *          File:  SchM_IoHwAb.h
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim_181121_BB2_Pvt_0_7_DetDisable_00/SCIM_BP.dpa
 *    BSW Module:  IoHwAb
 *  Generated at:  Fri Nov 23 09:22:47 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Header of BSW Scheduler for BSW Module <IoHwAb> (Contract Phase)
 *********************************************************************************************************************/
#ifndef SCHM_IOHWAB_H
# define SCHM_IOHWAB_H

# ifdef __cplusplus
extern "C" {
# endif  /* __cplusplus */

# include "SchM_IoHwAb_Type.h"

# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) SchM_Enter_IoHwAb_IOHWAB_EXCLUSIVE_AREA_0(void);
FUNC(void, RTE_CODE) SchM_Exit_IoHwAb_IOHWAB_EXCLUSIVE_AREA_0(void);

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif  /* __cplusplus */

#endif /* SCHM_IOHWAB_H */
