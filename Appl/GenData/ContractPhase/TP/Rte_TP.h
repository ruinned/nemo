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
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim/SCIM_BP.dpa
 *     SW-C Type:  TP
 *  Generated at:  Sat Dec  1 17:12:51 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <TP> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TP_H
# define _RTE_TP_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_TP_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_TP
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_TP, RTE_CONST, RTE_CONST) Rte_Inst_TP; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_TP, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_b_DST_ResponseNG_P_SR (0U)
# define Rte_InitValue_b_DST_ResponseNG_R_SR (0U)
# define Rte_InitValue_b_DST_RxCompleteFlag_P_SR (0U)
# define Rte_InitValue_b_DST_RxCompleteFlag_R_SR (0U)
# define Rte_InitValue_st_DstBlock_P_write_fob_number (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TP_b_DST_ResponseNG_R_SR(P2VAR(uint8, AUTOMATIC, RTE_TP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TP_b_DST_RxCompleteFlag_R_SR(P2VAR(uint8, AUTOMATIC, RTE_TP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_b_DST_ResponseNG_P_SR(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_b_DST_RxCompleteFlag_P_SR(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
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
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TP_st_DstBlock_P_write_fob_number(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TP_SetupDST_Telegram_P_CS(uint8 dst_order); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TP_Timeout_Tx_Telegram_P_CS(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_b_DST_ResponseNG_R_SR Rte_Read_TP_b_DST_ResponseNG_R_SR
# define Rte_Read_b_DST_RxCompleteFlag_R_SR Rte_Read_TP_b_DST_RxCompleteFlag_R_SR


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_b_DST_ResponseNG_P_SR Rte_Write_TP_b_DST_ResponseNG_P_SR
# define Rte_Write_b_DST_RxCompleteFlag_P_SR Rte_Write_TP_b_DST_RxCompleteFlag_P_SR
# define Rte_Write_st_DstBlock_P_challenge Rte_Write_TP_st_DstBlock_P_challenge
# define Rte_Write_st_DstBlock_P_encryption Rte_Write_TP_st_DstBlock_P_encryption
# define Rte_Write_st_DstBlock_P_security_key_number Rte_Write_TP_st_DstBlock_P_security_key_number
# define Rte_Write_st_DstBlock_P_vehicle_serial Rte_Write_TP_st_DstBlock_P_vehicle_serial
# define Rte_Write_st_DstBlock_P_write_fob_number Rte_Write_TP_st_DstBlock_P_write_fob_number


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_SetupDST_Telegram_P_CS Rte_Call_TP_SetupDST_Telegram_P_CS
# define Rte_Call_Timeout_Tx_Telegram_P_CS Rte_Call_TP_Timeout_Tx_Telegram_P_CS




# define TP_START_SEC_CODE
# include "TP_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_SMK_TP
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 20ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_b_DST_ResponseNG_R_SR(uint8 *data)
 *   Std_ReturnType Rte_Read_b_DST_RxCompleteFlag_R_SR(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_b_DST_ResponseNG_P_SR(uint8 data)
 *   Std_ReturnType Rte_Write_b_DST_RxCompleteFlag_P_SR(uint8 data)
 *   Std_ReturnType Rte_Write_st_DstBlock_P_challenge(const uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize8
 *   Std_ReturnType Rte_Write_st_DstBlock_P_encryption(const uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize16
 *   Std_ReturnType Rte_Write_st_DstBlock_P_security_key_number(const uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize3
 *   Std_ReturnType Rte_Write_st_DstBlock_P_vehicle_serial(const uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize3
 *   Std_ReturnType Rte_Write_st_DstBlock_P_write_fob_number(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetupDST_Telegram_P_CS(uint8 dst_order)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_Timeout_Tx_Telegram_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RE_SMK_TP RE_SMK_TP
FUNC(void, TP_CODE) RE_SMK_TP(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define TP_STOP_SEC_CODE
# include "TP_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_TP_H */
