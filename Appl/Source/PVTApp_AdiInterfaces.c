/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PVTApp_AdiInterfaces.c
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim_181121_BB2_Pvt_0_7_DetDisable_00/SCIM_BP.dpa
 *     SW-C Type:  PVTApp_AdiInterfaces
 *  Generated at:  Fri Nov 23 09:22:50 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <PVTApp_AdiInterfaces>
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
 * VGTT_EcuPinVoltage_0V2
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * VGTT_ScimAdiPinsState
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_PVTApp_AdiInterfaces.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
#include "MemMap.h"

   Debug_PVT_SCIM_RD_ADI01_1 RE_TEST_Debug_PVT_SCIM_RD_ADI01_1;
   Debug_PVT_SCIM_RD_ADI02_1 RE_TEST_Debug_PVT_SCIM_RD_ADI02_1;
   Debug_PVT_SCIM_RD_ADI03_1 RE_TEST_Debug_PVT_SCIM_RD_ADI03_1;
   Debug_PVT_SCIM_RD_ADI04_1 RE_TEST_Debug_PVT_SCIM_RD_ADI04_1;
   Debug_PVT_SCIM_RD_ADI05_1 RE_TEST_Debug_PVT_SCIM_RD_ADI05_1;
   Debug_PVT_SCIM_RD_ADI06_1 RE_TEST_Debug_PVT_SCIM_RD_ADI06_1;
   Debug_PVT_SCIM_RD_ADI07_1 RE_TEST_Debug_PVT_SCIM_RD_ADI07_1;
   Debug_PVT_SCIM_RD_ADI08_1 RE_TEST_Debug_PVT_SCIM_RD_ADI08_1;
   Debug_PVT_SCIM_RD_ADI09_1 RE_TEST_Debug_PVT_SCIM_RD_ADI09_1;
   Debug_PVT_SCIM_RD_ADI10_1 RE_TEST_Debug_PVT_SCIM_RD_ADI10_1;
   Debug_PVT_SCIM_RD_ADI11_1 RE_TEST_Debug_PVT_SCIM_RD_ADI11_1;
   Debug_PVT_SCIM_RD_ADI12_1 RE_TEST_Debug_PVT_SCIM_RD_ADI12_1;
   Debug_PVT_SCIM_RD_ADI13_1 RE_TEST_Debug_PVT_SCIM_RD_ADI13_1;
   Debug_PVT_SCIM_RD_ADI14_1 RE_TEST_Debug_PVT_SCIM_RD_ADI14_1;
   Debug_PVT_SCIM_RD_ADI15_1 RE_TEST_Debug_PVT_SCIM_RD_ADI15_1;
   Debug_PVT_SCIM_RD_ADI16_1 RE_TEST_Debug_PVT_SCIM_RD_ADI16_1;
   Debug_PVT_SCIM_RD_DAI1_1 RE_TEST_Debug_PVT_SCIM_RD_DAI1_1;
   Debug_PVT_SCIM_RD_DAI2_1 RE_TEST_Debug_PVT_SCIM_RD_DAI2_1;
   
   
   Debug_PVT_SCIM_RD_12VLivingVolt_1 RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt;
   Debug_PVT_SCIM_RD_12VParkedVolt_1 RE_TEST_Debug_PVT_SCIM_RD_12VParkedVolt;
   Debug_PVT_SCIM_Ctrl_DaiPullUp_1 RE_TEST_Debug_PVT_SCIM_Ctrl_DaiPullUp_1;
   
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
 * Debug_PVT_SCIM_Ctrl_DaiPullUp_1: Boolean
 * Debug_PVT_SCIM_Ctrl_LivingPullUp_1: Boolean
 * Debug_PVT_SCIM_Ctrl_ParkedPullUp_1: Boolean
 * Debug_PVT_SCIM_RD_12VLivingVolt_1: Integer in interval [0...255]
 * Debug_PVT_SCIM_RD_12VParkedVolt_1: Integer in interval [0...255]
 * Debug_PVT_SCIM_RD_ADI01_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI02_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI03_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI04_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI05_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI06_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI07_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI08_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI09_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI10_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI11_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI12_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI13_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI14_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI15_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_ADI16_1: Integer in interval [0...65535]
 * Debug_PVT_SCIM_RD_DAI1_1: Integer in interval [0...255]
 * Debug_PVT_SCIM_RD_DAI2_1: Integer in interval [0...255]
 * IOHWAB_BOOL: Boolean
 * IOHWAB_UINT16: Integer in interval [0...65535]
 * IOHWAB_UINT8: Integer in interval [0...255]
 * VGTT_EcuPinVoltage_0V2: Integer in interval [0...255]
 * VGTT_ScimAdiPinsState: Integer in interval [0...65535]
 * boolean: Boolean (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 *********************************************************************************************************************/


#define PVTApp_AdiInterfaces_START_SEC_CODE
#include "PVTApp_AdiInterfaces_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_PvtAdInterfaces
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
 *   Debug_PVT_SCIM_Ctrl_DaiPullUp_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_DaiPullUp_1_Debug_PVT_SCIM_Ctrl_DaiPullUp(void)
 *   Debug_PVT_SCIM_Ctrl_LivingPullUp_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_LivingPullUp_Debug_PVT_SCIM_Ctrl_LivingPullUp(void)
 *   Debug_PVT_SCIM_Ctrl_ParkedPullUp_1 Rte_DRead_Debug_PVT_SCIM_Ctrl_ParkedPullUp_Debug_PVT_SCIM_Ctrl_ParkedPullUp(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt(Debug_PVT_SCIM_RD_12VLivingVolt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt(Debug_PVT_SCIM_RD_12VParkedVolt_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01(Debug_PVT_SCIM_RD_ADI01_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02(Debug_PVT_SCIM_RD_ADI02_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03(Debug_PVT_SCIM_RD_ADI03_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04(Debug_PVT_SCIM_RD_ADI04_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05(Debug_PVT_SCIM_RD_ADI05_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06(Debug_PVT_SCIM_RD_ADI06_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07(Debug_PVT_SCIM_RD_ADI07_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08(Debug_PVT_SCIM_RD_ADI08_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09(Debug_PVT_SCIM_RD_ADI09_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10(Debug_PVT_SCIM_RD_ADI10_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11(Debug_PVT_SCIM_RD_ADI11_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12(Debug_PVT_SCIM_RD_ADI12_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13(Debug_PVT_SCIM_RD_ADI13_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14(Debug_PVT_SCIM_RD_ADI14_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15(Debug_PVT_SCIM_RD_ADI15_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16(Debug_PVT_SCIM_RD_ADI16_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1(Debug_PVT_SCIM_RD_DAI1_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2(Debug_PVT_SCIM_RD_DAI2_1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_AdiInterfaces_P_GetAdiPinState(IOHWAB_UINT8 AdiPinRef, IOHWAB_UINT16 *AdiPinVoltage, VGTT_EcuPinVoltage_0V2 *LivingPullUpVoltage)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_AdiInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_AdiInterfaces_P_GetAdiPinStateAll(VGTT_ScimAdiPinsState *VoltageOnAdiPins, VGTT_EcuPinVoltage_0V2 *LivingPullUpVoltage)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_AdiInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_AdiInterfaces_P_GetPullUpState(VGTT_EcuPinVoltage_0V2 *PullUpVoltage_Living, VGTT_EcuPinVoltage_0V2 *PullUpVoltage_Parked, VGTT_EcuPinVoltage_0V2 *PullUpVoltage_DAI1, VGTT_EcuPinVoltage_0V2 *PullUpVoltage_DAI2)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_AdiInterface_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_AdiInterfaces_P_SetPullUp(IOHWAB_BOOL ActivateLivingPullUp, IOHWAB_BOOL ActivateParkedPullUp, IOHWAB_BOOL ActivateDAIPullUp)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_AdiInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_PvtAdInterfaces_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PVTApp_AdiInterfaces_CODE) Re_PvtAdInterfaces(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_PvtAdInterfaces
 *********************************************************************************************************************/


    // Read data from COM layer  (CANoe --> CAN ---> COM --> PVT SWC)
   RE_TEST_Debug_PVT_SCIM_Ctrl_DaiPullUp_1 = Rte_DRead_Debug_PVT_SCIM_Ctrl_DaiPullUp_1_Debug_PVT_SCIM_Ctrl_DaiPullUp();

   Rte_Call_AdiInterfaces_P_SetPullUp((IOHWAB_BOOL)Rte_DRead_Debug_PVT_SCIM_Ctrl_LivingPullUp_Debug_PVT_SCIM_Ctrl_LivingPullUp(), (IOHWAB_BOOL)Rte_DRead_Debug_PVT_SCIM_Ctrl_ParkedPullUp_Debug_PVT_SCIM_Ctrl_ParkedPullUp(), (IOHWAB_BOOL)Rte_DRead_Debug_PVT_SCIM_Ctrl_DaiPullUp_1_Debug_PVT_SCIM_Ctrl_DaiPullUp());

   // PVT Software code (IO control logic)
 
   Rte_Call_AdiInterfaces_P_GetAdiPinState(1 , &RE_TEST_Debug_PVT_SCIM_RD_ADI01_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Call_AdiInterfaces_P_GetAdiPinState(2 , &RE_TEST_Debug_PVT_SCIM_RD_ADI02_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Call_AdiInterfaces_P_GetAdiPinState(3 , &RE_TEST_Debug_PVT_SCIM_RD_ADI03_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Call_AdiInterfaces_P_GetAdiPinState(4 , &RE_TEST_Debug_PVT_SCIM_RD_ADI04_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Call_AdiInterfaces_P_GetAdiPinState(5 , &RE_TEST_Debug_PVT_SCIM_RD_ADI05_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Call_AdiInterfaces_P_GetAdiPinState(6 , &RE_TEST_Debug_PVT_SCIM_RD_ADI06_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Call_AdiInterfaces_P_GetAdiPinState(7 , &RE_TEST_Debug_PVT_SCIM_RD_ADI07_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Call_AdiInterfaces_P_GetAdiPinState(8 , &RE_TEST_Debug_PVT_SCIM_RD_ADI08_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Call_AdiInterfaces_P_GetAdiPinState(9 , &RE_TEST_Debug_PVT_SCIM_RD_ADI09_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Call_AdiInterfaces_P_GetAdiPinState(10, &RE_TEST_Debug_PVT_SCIM_RD_ADI10_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Call_AdiInterfaces_P_GetAdiPinState(11, &RE_TEST_Debug_PVT_SCIM_RD_ADI11_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Call_AdiInterfaces_P_GetAdiPinState(12, &RE_TEST_Debug_PVT_SCIM_RD_ADI12_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Call_AdiInterfaces_P_GetAdiPinState(13, &RE_TEST_Debug_PVT_SCIM_RD_ADI13_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Call_AdiInterfaces_P_GetAdiPinState(14, &RE_TEST_Debug_PVT_SCIM_RD_ADI14_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Call_AdiInterfaces_P_GetAdiPinState(15, &RE_TEST_Debug_PVT_SCIM_RD_ADI15_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Call_AdiInterfaces_P_GetAdiPinState(16, &RE_TEST_Debug_PVT_SCIM_RD_ADI16_1, &RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
                                                                                  
   
   //Rte_Call_AdiInterfaces_P_GetAdiPinStateAll(VGTT_ScimAdiPinsState *VoltageOnAdiPins, VGTT_EcuPinVoltage_0V2 *LivingPullUpVoltage);
   
   Rte_Call_AdiInterfaces_P_GetPullUpState(&RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt, &RE_TEST_Debug_PVT_SCIM_RD_12VParkedVolt, &RE_TEST_Debug_PVT_SCIM_RD_DAI1_1, &RE_TEST_Debug_PVT_SCIM_RD_DAI2_1);
 
   // Write data to COM layer  (PVT SWC --> COM -->CAN --->CANoe)
   Rte_Write_Debug_PVT_SCIM_RD_ADI01_1_Debug_PVT_SCIM_RD_ADI01(RE_TEST_Debug_PVT_SCIM_RD_ADI01_1);
   Rte_Write_Debug_PVT_SCIM_RD_ADI02_1_Debug_PVT_SCIM_RD_ADI02(RE_TEST_Debug_PVT_SCIM_RD_ADI02_1);
   Rte_Write_Debug_PVT_SCIM_RD_ADI03_1_Debug_PVT_SCIM_RD_ADI03(RE_TEST_Debug_PVT_SCIM_RD_ADI03_1);
   Rte_Write_Debug_PVT_SCIM_RD_ADI04_1_Debug_PVT_SCIM_RD_ADI04(RE_TEST_Debug_PVT_SCIM_RD_ADI04_1);
   Rte_Write_Debug_PVT_SCIM_RD_ADI05_1_Debug_PVT_SCIM_RD_ADI05(RE_TEST_Debug_PVT_SCIM_RD_ADI05_1);
   Rte_Write_Debug_PVT_SCIM_RD_ADI06_1_Debug_PVT_SCIM_RD_ADI06(RE_TEST_Debug_PVT_SCIM_RD_ADI06_1);
   Rte_Write_Debug_PVT_SCIM_RD_ADI07_1_Debug_PVT_SCIM_RD_ADI07(RE_TEST_Debug_PVT_SCIM_RD_ADI07_1);
   Rte_Write_Debug_PVT_SCIM_RD_ADI08_1_Debug_PVT_SCIM_RD_ADI08(RE_TEST_Debug_PVT_SCIM_RD_ADI08_1);
   Rte_Write_Debug_PVT_SCIM_RD_ADI09_1_Debug_PVT_SCIM_RD_ADI09(RE_TEST_Debug_PVT_SCIM_RD_ADI09_1);
   Rte_Write_Debug_PVT_SCIM_RD_ADI10_1_Debug_PVT_SCIM_RD_ADI10(RE_TEST_Debug_PVT_SCIM_RD_ADI10_1);
   Rte_Write_Debug_PVT_SCIM_RD_ADI11_1_Debug_PVT_SCIM_RD_ADI11(RE_TEST_Debug_PVT_SCIM_RD_ADI11_1);
   Rte_Write_Debug_PVT_SCIM_RD_ADI12_1_Debug_PVT_SCIM_RD_ADI12(RE_TEST_Debug_PVT_SCIM_RD_ADI12_1);
   Rte_Write_Debug_PVT_SCIM_RD_ADI13_1_Debug_PVT_SCIM_RD_ADI13(RE_TEST_Debug_PVT_SCIM_RD_ADI13_1);
   Rte_Write_Debug_PVT_SCIM_RD_ADI14_1_Debug_PVT_SCIM_RD_ADI14(RE_TEST_Debug_PVT_SCIM_RD_ADI14_1);
   Rte_Write_Debug_PVT_SCIM_RD_ADI15_1_Debug_PVT_SCIM_RD_ADI15(RE_TEST_Debug_PVT_SCIM_RD_ADI15_1);
   Rte_Write_Debug_PVT_SCIM_RD_ADI16_1_Debug_PVT_SCIM_RD_ADI16(RE_TEST_Debug_PVT_SCIM_RD_ADI16_1);
   Rte_Write_Debug_PVT_SCIM_RD_12VLivingVolt_Debug_PVT_SCIM_RD_12VLivingVolt(RE_TEST_Debug_PVT_SCIM_RD_12VLivingVolt);
   Rte_Write_Debug_PVT_SCIM_RD_12VParkedVolt_Debug_PVT_SCIM_RD_12VParkedVolt(RE_TEST_Debug_PVT_SCIM_RD_12VParkedVolt);
   Rte_Write_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1(RE_TEST_Debug_PVT_SCIM_RD_DAI1_1);
   Rte_Write_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2(RE_TEST_Debug_PVT_SCIM_RD_DAI2_1);
   
   // Rte_Write_Debug_PVT_SCIM_RD_DAI1_1_Debug_PVT_SCIM_RD_DAI1(Debug_PVT_SCIM_RD_DAI1_1 data);
   // Rte_Write_Debug_PVT_SCIM_RD_DAI2_1_Debug_PVT_SCIM_RD_DAI2(Debug_PVT_SCIM_RD_DAI2_1 data);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define PVTApp_AdiInterfaces_STOP_SEC_CODE
#include "PVTApp_AdiInterfaces_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
