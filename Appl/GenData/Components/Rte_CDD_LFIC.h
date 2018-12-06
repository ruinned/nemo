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
 *          File:  Rte_CDD_LFIC.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <CDD_LFIC>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_LFIC_H
# define _RTE_CDD_LFIC_H

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

# include "Rte_CDD_LFIC_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_LFIC_b_DST_ResponseNG_P_SR; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_LFIC_b_DST_RxCompleteFlag_P_SR; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_TP_st_DstBlock_P_write_fob_number; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_b_DST_ResponseNG_P_SR (0U)
#  define Rte_InitValue_b_DST_ResponseNG_R_SR (0U)
#  define Rte_InitValue_b_DST_RxCompleteFlag_P_SR (0U)
#  define Rte_InitValue_b_DST_RxCompleteFlag_R_SR (0U)
#  define Rte_InitValue_st_DstBlock_P_write_fob_number (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_LFIC_st_DstBlock_P_challenge(P2VAR(uint8, AUTOMATIC, RTE_CDD_LFIC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_LFIC_st_DstBlock_P_challenge(P2VAR(ArrayByteSize8, AUTOMATIC, RTE_CDD_LFIC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_LFIC_st_DstBlock_P_encryption(P2VAR(uint8, AUTOMATIC, RTE_CDD_LFIC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_LFIC_st_DstBlock_P_encryption(P2VAR(ArrayByteSize16, AUTOMATIC, RTE_CDD_LFIC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_LFIC_st_DstBlock_P_security_key_number(P2VAR(uint8, AUTOMATIC, RTE_CDD_LFIC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_LFIC_st_DstBlock_P_security_key_number(P2VAR(ArrayByteSize3, AUTOMATIC, RTE_CDD_LFIC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_LFIC_st_DstBlock_P_vehicle_serial(P2VAR(uint8, AUTOMATIC, RTE_CDD_LFIC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_LFIC_st_DstBlock_P_vehicle_serial(P2VAR(ArrayByteSize3, AUTOMATIC, RTE_CDD_LFIC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_st_DstBlock_P_challenge Rte_Read_CDD_LFIC_st_DstBlock_P_challenge
#  define Rte_Read_st_DstBlock_P_encryption Rte_Read_CDD_LFIC_st_DstBlock_P_encryption
#  define Rte_Read_st_DstBlock_P_security_key_number Rte_Read_CDD_LFIC_st_DstBlock_P_security_key_number
#  define Rte_Read_st_DstBlock_P_vehicle_serial Rte_Read_CDD_LFIC_st_DstBlock_P_vehicle_serial
#  define Rte_Read_st_DstBlock_P_write_fob_number Rte_Read_CDD_LFIC_st_DstBlock_P_write_fob_number
#  define Rte_Read_CDD_LFIC_st_DstBlock_P_write_fob_number(data) (*(data) = Rte_TP_st_DstBlock_P_write_fob_number, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_b_DST_ResponseNG_P_SR Rte_Write_CDD_LFIC_b_DST_ResponseNG_P_SR
#  define Rte_Write_CDD_LFIC_b_DST_ResponseNG_P_SR(data) (Rte_CDD_LFIC_b_DST_ResponseNG_P_SR = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_b_DST_RxCompleteFlag_P_SR Rte_Write_CDD_LFIC_b_DST_RxCompleteFlag_P_SR
#  define Rte_Write_CDD_LFIC_b_DST_RxCompleteFlag_P_SR(data) (Rte_CDD_LFIC_b_DST_RxCompleteFlag_P_SR = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_LficICU_P_IcuDisableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_LficICU_R_IcuDisableEdgeDetection IoHwAb_LficICU_P_IcuDisableEdgeDetection
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_LficICU_P_IcuDisableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_LficICU_R_IcuDisableNotification IoHwAb_LficICU_P_IcuDisableNotification
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_LficICU_P_IcuEnableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_LficICU_R_IcuEnableEdgeDetection IoHwAb_LficICU_P_IcuEnableEdgeDetection
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_LficICU_P_IcuEnableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_LficICU_R_IcuEnableNotification IoHwAb_LficICU_P_IcuEnableNotification
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_LficNRESDio_P_Read(P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) ReadValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_LficNRESDio_R_Read IoHwAb_LficNRESDio_P_Read
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_LficNRESDio_P_Write(IOHWAB_UINT8 SetValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_LficNRESDio_R_Write IoHwAb_LficNRESDio_P_Write


# endif /* !defined(RTE_CORE) */


# define CDD_LFIC_START_SEC_CODE
# include "CDD_LFIC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_RE_DST_RX_ISR RE_DST_RX_ISR
#  define RTE_RUNNABLE_RE_LFIC_Init RE_LFIC_Init
#  define RTE_RUNNABLE_RE_SetupDST_Telegram RE_SetupDST_Telegram
#  define RTE_RUNNABLE_RE_SetupLF_Telegram RE_SetupLF_Telegram
#  define RTE_RUNNABLE_RE_Timeout_Tx_Telegram RE_Timeout_Tx_Telegram
# endif

FUNC(void, CDD_LFIC_CODE) RE_DST_RX_ISR(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_LFIC_CODE) RE_LFIC_Init(uint8 Gain_vehicleOption); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_LFIC_CODE) RE_SetupDST_Telegram(uint8 dst_order); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CDD_LFIC_CODE) RE_SetupLF_Telegram(uint8 b_AntenaIndex, uint8 b_SearchPattern, uint16 Counter_LFRawDataBit, P2CONST(uint8, AUTOMATIC, RTE_CDD_LFIC_APPL_DATA) Buffer_LFRawData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, CDD_LFIC_CODE) RE_SetupLF_Telegram(uint8 b_AntenaIndex, uint8 b_SearchPattern, uint16 Counter_LFRawDataBit, P2CONST(ArrayByteSize32, AUTOMATIC, RTE_CDD_LFIC_APPL_DATA) Buffer_LFRawData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, CDD_LFIC_CODE) RE_Timeout_Tx_Telegram(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_LFIC_STOP_SEC_CODE
# include "CDD_LFIC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_Dio_I_IoHwAbApplicationError (1U)

#  define RTE_E_Icu_I_IoHwAbApplicationError (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_LFIC_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
