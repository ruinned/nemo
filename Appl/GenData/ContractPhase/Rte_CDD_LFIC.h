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
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim/SCIM_BP.dpa
 *     SW-C Type:  CDD_LFIC
 *  Generated at:  Mon Dec  3 14:41:38 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <CDD_LFIC> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_LFIC_H
# define _RTE_CDD_LFIC_H

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

# include "Rte_CDD_LFIC_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_LFIC
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_LFIC, RTE_CONST, RTE_CONST) Rte_Inst_CDD_LFIC; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_LFIC, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_b_DST_ResponseNG_P_SR (0U)
# define Rte_InitValue_b_DST_RxCompleteFlag_P_SR (0U)
# define Rte_InitValue_st_DstBlock_P_write_fob_number (0U)


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
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_LFIC_st_DstBlock_P_write_fob_number(P2VAR(uint8, AUTOMATIC, RTE_CDD_LFIC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_LFIC_b_DST_ResponseNG_P_SR(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_LFIC_b_DST_RxCompleteFlag_P_SR(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_LFIC_LficICU_R_IcuDisableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_LFIC_LficICU_R_IcuDisableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_LFIC_LficICU_R_IcuEnableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_LFIC_LficICU_R_IcuEnableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_LFIC_LficNRESDio_R_Read(P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_CDD_LFIC_APPL_VAR) ReadValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_LFIC_LficNRESDio_R_Write(IOHWAB_UINT8 SetValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_st_DstBlock_P_challenge Rte_Read_CDD_LFIC_st_DstBlock_P_challenge
# define Rte_Read_st_DstBlock_P_encryption Rte_Read_CDD_LFIC_st_DstBlock_P_encryption
# define Rte_Read_st_DstBlock_P_security_key_number Rte_Read_CDD_LFIC_st_DstBlock_P_security_key_number
# define Rte_Read_st_DstBlock_P_vehicle_serial Rte_Read_CDD_LFIC_st_DstBlock_P_vehicle_serial
# define Rte_Read_st_DstBlock_P_write_fob_number Rte_Read_CDD_LFIC_st_DstBlock_P_write_fob_number


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_b_DST_ResponseNG_P_SR Rte_Write_CDD_LFIC_b_DST_ResponseNG_P_SR
# define Rte_Write_b_DST_RxCompleteFlag_P_SR Rte_Write_CDD_LFIC_b_DST_RxCompleteFlag_P_SR


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_LficICU_R_IcuDisableEdgeDetection Rte_Call_CDD_LFIC_LficICU_R_IcuDisableEdgeDetection
# define Rte_Call_LficICU_R_IcuDisableNotification Rte_Call_CDD_LFIC_LficICU_R_IcuDisableNotification
# define Rte_Call_LficICU_R_IcuEnableEdgeDetection Rte_Call_CDD_LFIC_LficICU_R_IcuEnableEdgeDetection
# define Rte_Call_LficICU_R_IcuEnableNotification Rte_Call_CDD_LFIC_LficICU_R_IcuEnableNotification
# define Rte_Call_LficNRESDio_R_Read Rte_Call_CDD_LFIC_LficNRESDio_R_Read
# define Rte_Call_LficNRESDio_R_Write Rte_Call_CDD_LFIC_LficNRESDio_R_Write




# define CDD_LFIC_START_SEC_CODE
# include "CDD_LFIC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_DST_RX_ISR
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * This runnable is never executed by the RTE.
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_b_DST_ResponseNG_P_SR(uint8 data)
 *   Std_ReturnType Rte_Write_b_DST_RxCompleteFlag_P_SR(uint8 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RE_DST_RX_ISR RE_DST_RX_ISR
FUNC(void, CDD_LFIC_CODE) RE_DST_RX_ISR(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_LFIC_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <LfICInit_P>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_LficICU_R_IcuDisableEdgeDetection(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_LficICU_R_IcuDisableNotification(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_LficICU_R_IcuEnableEdgeDetection(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_LficICU_R_IcuEnableNotification(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_LficNRESDio_R_Read(IOHWAB_UINT8 *ReadValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Dio_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_LficNRESDio_R_Write(IOHWAB_UINT8 SetValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Dio_I_IoHwAbApplicationError
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_LFIC_Init(uint8 Gain_vehicleOption)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RE_LFIC_Init RE_LFIC_Init
FUNC(void, CDD_LFIC_CODE) RE_LFIC_Init(uint8 Gain_vehicleOption); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_SetupDST_Telegram
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <SetupDST_Telegram_P>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_st_DstBlock_P_challenge(uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize8
 *   Std_ReturnType Rte_Read_st_DstBlock_P_encryption(uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize16
 *   Std_ReturnType Rte_Read_st_DstBlock_P_security_key_number(uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize3
 *   Std_ReturnType Rte_Read_st_DstBlock_P_vehicle_serial(uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize3
 *   Std_ReturnType Rte_Read_st_DstBlock_P_write_fob_number(uint8 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_SetupDST_Telegram(uint8 dst_order)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RE_SetupDST_Telegram RE_SetupDST_Telegram
FUNC(void, CDD_LFIC_CODE) RE_SetupDST_Telegram(uint8 dst_order); /* PRQA S 0850 */ /* MD_MSR_19.8 */
void Test_SetupDST_Telegram(uint8 dst_order, uint8 data);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_SetupLF_Telegram
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <SetupLfTelegram_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_SetupLF_Telegram(uint8 b_AntenaIndex, uint8 b_SearchPattern, uint16 Counter_LFRawDataBit, const uint8 *Buffer_LFRawData)
 *     Argument Buffer_LFRawData: uint8* is of type ArrayByteSize32
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RE_SetupLF_Telegram RE_SetupLF_Telegram
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CDD_LFIC_CODE) RE_SetupLF_Telegram(uint8 b_AntenaIndex, uint8 b_SearchPattern, uint16 Counter_LFRawDataBit, P2CONST(uint8, AUTOMATIC, RTE_CDD_LFIC_APPL_DATA) Buffer_LFRawData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, CDD_LFIC_CODE) RE_SetupLF_Telegram(uint8 b_AntenaIndex, uint8 b_SearchPattern, uint16 Counter_LFRawDataBit, P2CONST(ArrayByteSize32, AUTOMATIC, RTE_CDD_LFIC_APPL_DATA) Buffer_LFRawData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_Timeout_Tx_Telegram
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <TimeoutTxTelegram_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_Timeout_Tx_Telegram(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RE_Timeout_Tx_Telegram RE_Timeout_Tx_Telegram
FUNC(void, CDD_LFIC_CODE) RE_Timeout_Tx_Telegram(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_LFIC_STOP_SEC_CODE
# include "CDD_LFIC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_Dio_I_IoHwAbApplicationError (1U)

# define RTE_E_Icu_I_IoHwAbApplicationError (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_LFIC_H */
