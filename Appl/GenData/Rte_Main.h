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
 *          File:  Rte_Main.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Lifecycle Header File
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MAIN_H
# define _RTE_MAIN_H

# include "Rte.h"

# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* BSW Scheduler Life-Cycle API */
FUNC(void, RTE_CODE) SchM_Init(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) SchM_Deinit(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/* RTE Life-Cycle API */
FUNC(Std_ReturnType, RTE_CODE) Rte_Start(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Stop(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/* Extended Life-Cycle API */
FUNC(void, RTE_CODE) Rte_InitMemory(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_InitMemory_OsApplication_Trusted_Core0(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_InitMemory_OsApplication_Untrusted_Core0(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */


# ifdef RTE_CORE
/* RTE internal IOC replacements */
FUNC(Std_ReturnType, RTE_CODE) Rte_IocSend_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read(CONST(uint8, RTE_CONST) data0);
FUNC(Std_ReturnType, RTE_CODE) Rte_IocReceive_Rte_CS_ServerQueue_IOHWAB_RficNRESDio_P_Read(P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) data0);
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* _RTE_MAIN_H */
