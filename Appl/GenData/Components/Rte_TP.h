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
 *          File:  Rte_TP.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <TP>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TP_H
# define _RTE_TP_H

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

# include "Rte_TP_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Debug_PVT_PEPS_AntP1_X_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntP1_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_fb66dba7_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_AntP1_Y_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntP1_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_76ee2645_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_AntPi_X_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntPi_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_108c5adc_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_AntPi_Y_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntPi_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_9d04a73e_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_Logic_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_Logic_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f1a79db4_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_TP_st_DstBlock_P_write_fob_number; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_LFIC_b_DST_ResponseNG_P_SR; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_LFIC_b_DST_RxCompleteFlag_P_SR; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X (0)
#  define Rte_InitValue_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y (0)
#  define Rte_InitValue_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X (0)
#  define Rte_InitValue_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y (0)
#  define Rte_InitValue_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl (0U)
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
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X(Debug_PVT_PEPS_AntP1_X data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y(Debug_PVT_PEPS_AntP1_Y data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X(Debug_PVT_PEPS_AntPi_X data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y(Debug_PVT_PEPS_AntPi_Y data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_st_DstBlock_P_challenge(P2CONST(uint8, AUTOMATIC, RTE_TP_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_st_DstBlock_P_challenge(P2CONST(ArrayByteSize8, AUTOMATIC, RTE_TP_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_st_DstBlock_P_encryption(P2CONST(uint8, AUTOMATIC, RTE_TP_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_st_DstBlock_P_encryption(P2CONST(ArrayByteSize16, AUTOMATIC, RTE_TP_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_st_DstBlock_P_security_key_number(P2CONST(uint8, AUTOMATIC, RTE_TP_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_st_DstBlock_P_security_key_number(P2CONST(ArrayByteSize3, AUTOMATIC, RTE_TP_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_st_DstBlock_P_vehicle_serial(P2CONST(uint8, AUTOMATIC, RTE_TP_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_st_DstBlock_P_vehicle_serial(P2CONST(ArrayByteSize3, AUTOMATIC, RTE_TP_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl Rte_Read_TP_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl
#  define Rte_Read_TP_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_AntP1_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_fb66dba7_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl Rte_Read_TP_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl
#  define Rte_Read_TP_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_AntP1_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_76ee2645_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl Rte_Read_TP_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl
#  define Rte_Read_TP_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_AntPi_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_108c5adc_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl Rte_Read_TP_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl
#  define Rte_Read_TP_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_AntPi_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_9d04a73e_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl Rte_Read_TP_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl
#  define Rte_Read_TP_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_Logic_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f1a79db4_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_b_DST_ResponseNG_R_SR Rte_Read_TP_b_DST_ResponseNG_R_SR
#  define Rte_Read_TP_b_DST_ResponseNG_R_SR(data) (*(data) = Rte_CDD_LFIC_b_DST_ResponseNG_P_SR, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_b_DST_RxCompleteFlag_R_SR Rte_Read_TP_b_DST_RxCompleteFlag_R_SR
#  define Rte_Read_TP_b_DST_RxCompleteFlag_R_SR(data) (*(data) = Rte_CDD_LFIC_b_DST_RxCompleteFlag_P_SR, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X Rte_Write_TP_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X
#  define Rte_Write_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y Rte_Write_TP_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y
#  define Rte_Write_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X Rte_Write_TP_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X
#  define Rte_Write_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y Rte_Write_TP_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y
#  define Rte_Write_b_DST_ResponseNG_P_SR Rte_Write_TP_b_DST_ResponseNG_P_SR
#  define Rte_Write_TP_b_DST_ResponseNG_P_SR(data) (RTE_E_OK) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_b_DST_RxCompleteFlag_P_SR Rte_Write_TP_b_DST_RxCompleteFlag_P_SR
#  define Rte_Write_TP_b_DST_RxCompleteFlag_P_SR(data) (RTE_E_OK) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_st_DstBlock_P_challenge Rte_Write_TP_st_DstBlock_P_challenge
#  define Rte_Write_st_DstBlock_P_encryption Rte_Write_TP_st_DstBlock_P_encryption
#  define Rte_Write_st_DstBlock_P_security_key_number Rte_Write_TP_st_DstBlock_P_security_key_number
#  define Rte_Write_st_DstBlock_P_vehicle_serial Rte_Write_TP_st_DstBlock_P_vehicle_serial
#  define Rte_Write_st_DstBlock_P_write_fob_number Rte_Write_TP_st_DstBlock_P_write_fob_number
#  define Rte_Write_TP_st_DstBlock_P_write_fob_number(data) (Rte_TP_st_DstBlock_P_write_fob_number = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_LFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_LFIC_APPL_CODE) RE_SetupDST_Telegram(uint8 dst_order); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_LFIC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetupDST_Telegram_P_CS(arg1) (RE_SetupDST_Telegram(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_TimeoutTxTelegram_P_CS() (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define TP_START_SEC_CODE
# include "TP_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_RE_SMK_TP RE_SMK_TP
# endif

FUNC(void, TP_CODE) RE_SMK_TP(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define TP_STOP_SEC_CODE
# include "TP_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_TP_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
