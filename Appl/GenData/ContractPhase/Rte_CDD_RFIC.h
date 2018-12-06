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
 *          File:  Rte_CDD_RFIC.h
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim/SCIM_BP.dpa
 *     SW-C Type:  CDD_RFIC
 *  Generated at:  Sat Dec  1 17:27:25 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <CDD_RFIC> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_RFIC_H
# define _RTE_CDD_RFIC_H

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

# include "Rte_CDD_RFIC_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_RFIC
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_RFIC, RTE_CONST, RTE_CONST) Rte_Inst_CDD_RFIC; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_RFIC, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_RficSysModeConfirm_P_SR_RficSysModeConfirm (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_RFIC_RficSysModeConfirm_P_SR_RficSysModeConfirm(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_RFIC_CleaHighFixCheckTimer_P_CS(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_RFIC_RficICU_R_IcuDisableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_RFIC_RficICU_R_IcuDisableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_RFIC_RficICU_R_IcuEnableEdgeDetection(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_RFIC_RficICU_R_IcuEnableNotification(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_RFIC_RficNRESDio_R_Read(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_RFIC_RficNRESDio_R_Write(IOHWAB_UINT8 SetValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_RFIC_SetValidFobFoundResult_P_CS(uint8 fob_num); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Result_CDD_RFIC_RficNRESDio_R_Read(P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_CDD_RFIC_APPL_VAR) ReadValue); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_RficSysModeConfirm_P_SR_RficSysModeConfirm Rte_Write_CDD_RFIC_RficSysModeConfirm_P_SR_RficSysModeConfirm


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_CleaHighFixCheckTimer_P_CS Rte_Call_CDD_RFIC_CleaHighFixCheckTimer_P_CS
# define Rte_Call_RficICU_R_IcuDisableEdgeDetection Rte_Call_CDD_RFIC_RficICU_R_IcuDisableEdgeDetection
# define Rte_Call_RficICU_R_IcuDisableNotification Rte_Call_CDD_RFIC_RficICU_R_IcuDisableNotification
# define Rte_Call_RficICU_R_IcuEnableEdgeDetection Rte_Call_CDD_RFIC_RficICU_R_IcuEnableEdgeDetection
# define Rte_Call_RficICU_R_IcuEnableNotification Rte_Call_CDD_RFIC_RficICU_R_IcuEnableNotification
# define Rte_Call_RficNRESDio_R_Read Rte_Call_CDD_RFIC_RficNRESDio_R_Read
# define Rte_Call_RficNRESDio_R_Write Rte_Call_CDD_RFIC_RficNRESDio_R_Write
# define Rte_Call_SetValidFobFoundResult_P_CS Rte_Call_CDD_RFIC_SetValidFobFoundResult_P_CS


/**********************************************************************************************************************
 * Rte_Result_<p>_<o> (asynchronous C/S result)
 *********************************************************************************************************************/
# define Rte_Result_RficNRESDio_R_Read Rte_Result_CDD_RFIC_RficNRESDio_R_Read




# define CDD_RFIC_START_SEC_CODE
# include "CDD_RFIC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_RFIC_Control_ISR
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
 *   Std_ReturnType Rte_Write_RficSysModeConfirm_P_SR_RficSysModeConfirm(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetValidFobFoundResult_P_CS(uint8 fob_num)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RE_RFIC_Control_ISR RE_RFIC_Control_ISR
FUNC(void, CDD_RFIC_CODE) RE_RFIC_Control_ISR(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_RFIC_WakeUp
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * This runnable is never executed by the RTE.
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CleaHighFixCheckTimer_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RE_RFIC_WakeUp RE_RFIC_WakeUp
FUNC(void, CDD_RFIC_CODE) RE_RFIC_WakeUp(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_SearchSysmode
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <SearchSysMode_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_SearchSysmode(uint8 RFIC_SystemMode, uint8 RFIC_ReqCmd)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RE_SearchSysmode RE_SearchSysmode
FUNC(void, CDD_RFIC_CODE) RE_SearchSysmode(uint8 RFIC_SystemMode, uint8 RFIC_ReqCmd); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_rfic_IRQ_ActiveCheck
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <RficIRQActiveCheck_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_rfic_IRQ_ActiveCheck(uint8 kb_TerminalControlState)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RE_rfic_IRQ_ActiveCheck RE_rfic_IRQ_ActiveCheck
FUNC(void, CDD_RFIC_CODE) RE_rfic_IRQ_ActiveCheck(uint8 kb_TerminalControlState); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_rfic_IRQ_PendingCheck
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <RficIRQPendingCheck_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_rfic_IRQ_PendingCheck(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RE_rfic_IRQ_PendingCheck RE_rfic_IRQ_PendingCheck
FUNC(void, CDD_RFIC_CODE) RE_rfic_IRQ_PendingCheck(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_rfic_init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <RficInit_P>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_RficICU_R_IcuDisableEdgeDetection(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_RficICU_R_IcuDisableNotification(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_RficICU_R_IcuEnableEdgeDetection(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_RficICU_R_IcuEnableNotification(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_RficNRESDio_R_Read(void)
 *     Asynchronous Server Invocation
 *   Std_ReturnType Rte_Call_RficNRESDio_R_Write(IOHWAB_UINT8 SetValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Dio_I_IoHwAbApplicationError
 *
 *   Server Result:
 *   --------------
 *   Std_ReturnType Rte_Result_RficNRESDio_R_Read(IOHWAB_UINT8 *ReadValue)
 *     Returned Application Errors: RTE_E_Dio_I_IoHwAbApplicationError
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_rfic_init(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RE_rfic_init RE_rfic_init
FUNC(void, CDD_RFIC_CODE) RE_rfic_init(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_RFIC_STOP_SEC_CODE
# include "CDD_RFIC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_Dio_I_IoHwAbApplicationError (1U)

# define RTE_E_Icu_I_IoHwAbApplicationError (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_RFIC_H */
