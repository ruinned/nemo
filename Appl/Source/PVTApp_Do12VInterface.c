/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PVTApp_Do12VInterface.c
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim_181121_BB2_Pvt_0_7_DetDisable_00/SCIM_BP.dpa
 *     SW-C Type:  PVTApp_Do12VInterface
 *  Generated at:  Fri Nov 23 09:22:52 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <PVTApp_Do12VInterface>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * IOHWAB_BOOL
 *   boolean has the value space required to support the mathematical concept of 
 *      binary-valued logic: {true, false}.
 *
 * IOHWAB_UINT16
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * IOHWAB_UINT8
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * VGTT_EcuPinDiagStatus
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * VGTT_EcuPinVoltage_0V2
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_PVTApp_Do12VInterface.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
#include "MemMap.h"

 
IOHWAB_UINT8 RE_Do12_Test_SelectParkedOrLivingPin =0; 
IOHWAB_BOOL RE_Do12_Test_IsDo12VActivated =0;
VGTT_EcuPinVoltage_0V2 RE_Do12_Test_Do12VPinVoltage=0;
IOHWAB_UINT16 RE_Do12_Test_BatteryVoltage=0;
VGTT_EcuPinVoltage_0V2 RE_Do12_Test_DcdcRefVoltage=0; 
VGTT_EcuPinDiagStatus RE_Do12_Test_DiagStatus=0;


#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
#include "MemMap.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Debug_PVT_SCIM_Ctrl_12VDCDC_1: Boolean
 * Debug_PVT_SCIM_Ctrl_12VLiving_1: Boolean
 * Debug_PVT_SCIM_Ctrl_12VParked_1: Boolean
 * Debug_PVT_SCIM_RD_12VDCDCVolt: Integer in interval [0...255]
 * Debug_PVT_SCIM_RD_VBAT_1: Integer in interval [0...65535]
 * IOHWAB_BOOL: Boolean
 * IOHWAB_UINT16: Integer in interval [0...65535]
 * IOHWAB_UINT8: Integer in interval [0...255]
 * VGTT_EcuPinDiagStatus: Integer in interval [0...255]
 * VGTT_EcuPinVoltage_0V2: Integer in interval [0...255]
 * boolean: Boolean (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Debug_PVT_SCIM_RD_12VDCDCFault: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Nomal (0U)
 *   Cx1_Reserved (1U)
 *   Cx2_Reserved (2U)
 *   Cx3_Reserved (3U)
 *   Cx4_Reserved (4U)
 *   Cx5_Voltage_out_of_range (5U)
 *   Cx6_Reserved (6U)
 *   Cx7_Reserved (7U)
 *   Cx8_invalid_Error_Value_ (8U)
 *
 *********************************************************************************************************************/


#define PVTApp_Do12VInterface_START_SEC_CODE
#include "PVTApp_Do12VInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_PvtDo12VInterface
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Debug_PVT_SCIM_Ctrl_12VDCDC_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_12VDCDC_Debug_PVT_SCIM_Ctrl_12VDCDC(void)
 *   Debug_PVT_SCIM_Ctrl_12VLiving_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_12VLiving_Debug_PVT_SCIM_Ctrl_12VLiving(void)
 *   Debug_PVT_SCIM_Ctrl_12VParked_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_12VParked_Debug_PVT_SCIM_Ctrl_12VParked(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault(Debug_PVT_SCIM_RD_12VDCDCFault data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt(Debug_PVT_SCIM_RD_12VDCDCVolt data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT(Debug_PVT_SCIM_RD_VBAT_1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_Do12VInterface_P_GetDo12VPinsState(IOHWAB_UINT8 SelectParkedOrLivingPin, IOHWAB_BOOL *IsDo12VActivated, VGTT_EcuPinVoltage_0V2 *Do12VPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinVoltage_0V2 *DcdcRefVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_Do12VInterface_P_SetDcdc12VActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_Do12VInterface_P_SetDo12VLivingActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_Do12VInterface_P_SetDo12VParkedActive(IOHWAB_BOOL Activation)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_PvtDo12VInterface_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PVTApp_Do12VInterface_CODE) Re_PvtDo12VInterface(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_PvtDo12VInterface
 *********************************************************************************************************************/

Rte_Call_Do12VInterface_P_SetDcdc12VActive((IOHWAB_BOOL) Rte_DRead_Debug_PVT_SCIM_Ctrl_12VDCDC_Debug_PVT_SCIM_Ctrl_12VDCDC());
Rte_Call_Do12VInterface_P_SetDo12VLivingActive((IOHWAB_BOOL) Rte_DRead_Debug_PVT_SCIM_Ctrl_12VLiving_Debug_PVT_SCIM_Ctrl_12VLiving());
Rte_Call_Do12VInterface_P_SetDo12VParkedActive((IOHWAB_BOOL) Rte_DRead_Debug_PVT_SCIM_Ctrl_12VParked_Debug_PVT_SCIM_Ctrl_12VParked());


Rte_Call_Do12VInterface_P_GetDo12VPinsState(RE_Do12_Test_SelectParkedOrLivingPin, &RE_Do12_Test_IsDo12VActivated, &RE_Do12_Test_Do12VPinVoltage, &RE_Do12_Test_BatteryVoltage, &RE_Do12_Test_DcdcRefVoltage, &RE_Do12_Test_DiagStatus);


Rte_Write_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault(RE_Do12_Test_DiagStatus);
Rte_Write_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt(RE_Do12_Test_Do12VPinVoltage);
Rte_Write_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT(RE_Do12_Test_BatteryVoltage);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define PVTApp_Do12VInterface_STOP_SEC_CODE
#include "PVTApp_Do12VInterface_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
