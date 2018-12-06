/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TestApp.c
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/SCIM_BP/SCIM_BP.dpa
 *     SW-C Type:  TestApp
 *  Generated at:  Sun Oct 14 17:01:10 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <TestApp>
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
 *********************************************************************************************************************/

#include "Rte_TestApp.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  typedef struct
  {
	  uint8 p12VDcDcEnable;
	  uint8 CAN1STB;
	  uint8 CAN2STB;
	  uint8 CAN3STB;
	  uint8 CAN4STB;
	  uint8 CAN5STB; 
	  uint8 CAN6STB;
	  uint8 HsOut1IpsFault;
	  uint8 HsOut1IpsInput0;
	  uint8 HsOut1IpsInput1;
	  uint8 HsOut3IpsFault;
	  uint8 HsOut3IpsInput0;
	  uint8 HsOut3IpsInput1;
	  uint8 HsOut5IpsInput;   
	  uint8 HsPwm1IpsFault;  
	  uint8 HsPwm3IpsFault;
	  uint8 IPSComSel;
	  uint8 RegRst;  
	  uint8 RficNres;  
	  uint8 RficRed;
	  uint8 IPSComSen;  
	  uint8 IPSPwrSel0;
	  uint8 IPSPwrSel1;
	  uint8 IPSPwrSen;
	  uint8 LIN1EN;
	  uint8 LIN1Inh;
	  uint8 LIN2EN;
	  uint8 LIN2Inh;
	  uint8 LIN3EN;
	  uint8 LIN3Inh;
	  uint8 LIN4EN;
	  uint8 LIN4Inh;
	  uint8 LIN5EN;
	  uint8 LIN5Inh;
	  uint8 LIN6EN;
	  uint8 LIN6Inh;
	  uint8 LINPwrIpsFaultRst; 
	  uint8 LINPwrIpsIn0; 
	  uint8 LINPwrIpsIn1;
	  uint8 LINSecurityEN; 
	  uint8 LINSecurityInh;
	  uint8 LficNres;
	  uint8 LivingPopUpCtrl;
	  uint8 ParkedPopUpCtrl;
	  
  }IoHwAbDioChannelType;
  
  typedef struct
  {
	  
	  uint16 AdcAnalogInputBatteryMon;
	  uint16 AdcAnalogInputC18;
	  uint16 AdcAnalogInputC19;
	  uint16 AdcAnalogInputC20;
	  uint16 AdcAnalogInputC21;
	  uint16 AdcAnalogInputC22;
	  uint16 AdcAnalogInputC23;
	  uint16 AdcAnalogInputC4;
	  uint16 AdcAnalogInputC5;
	  uint16 AdcAnalogInputC6;
	  uint16 AdcAnalogInputC7;
	  uint16 AdcAnalogInputCAN1TermintionH1;
	  uint16 AdcAnalogInputCAN1TermintionH2;
	  uint16 AdcAnalogInputCAN1TermintionL1;
	  uint16 AdcAnalogInputCAN1TermintionL2;
	  uint16 AdcAnalogInputD17;
	  uint16 AdcAnalogInputD8;
	  uint16 AdcAnalogInputHighSideOut2;
	  uint16 AdcAnalogInputHighSideOut3;
	  uint16 AdcAnalogInputHighSideOut4;
	  uint16 AdcAnalogInputHsLin1IpsMultiSense;
	  uint16 AdcAnalogInputHsOut1IpsCurrentSense;
	  uint16 AdcAnalogInputHsOut3IpsCurrentSense;
	  uint16 AdcAnalogInputHsOut5IpsCurrentSense;
	  uint16 AdcAnalogInputHsPwm1IpsCurrentSense;
	  uint16 AdcAnalogInputHsPwm3IpsCurrentSense;
	  uint16 AdcAnalogInputLsPwm1GateMonitoring;
	  uint16 AdcAnalogInputLsPwm2GateMonitoring;
	  uint16 AdcAnalogInputLsPwm3GateMonitoring;
	  uint16 AdcAnalogInputLsPwm4GateMonitoring;
	  uint16 AdcAnalogInputLsPwm5GateMonitoring;
	  uint16 AdcAnalogInputUAI73;
	  uint16 AdcAnalogInputUAI74;
	  uint16 AdcAnalogInputUAI75;
	  uint16 AdcAnalogInputUAI76;
	  uint16 AdcAnalogInputUAI81;
	  uint16 AdcAnalogInputUAI82;
	  uint16 AdcAnalogInputUAI87;  
	  
  }IoHwAbAdcChannelType;
  
  typedef struct
  {
	  uint16 PwmHsPwm1IpsIn0;
	  uint16 PwmHsPwm1IpsIn1;
	  uint16 PwmHsPwm3IpsIn0;
	  uint16 PwmHsPwm3IpsIn1;
	  uint16 PwmLsPwm1Gate;
	  uint16 PwmLsPwm2Gate;
	  uint16 PwmLsPwm3Gate;
	  uint16 PwmLsPwm4Gate;
	  uint16 PwmLsPwm5Gate;
	  uint16 PwmRegWdtOut;
	  
  }IoHwAbPwmChannelType;
  
  
  
#define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
 
 IoHwAbDioChannelType IoHwAbReadPinStatus= {0,};
 
 IoHwAbDioChannelType IoHwAbSetPinValue= {0,};
 
 IoHwAbAdcChannelType IoHwAbAdcValue= {0,};
 
 IoHwAbPwmChannelType IoHwAbPwmChannelDuty= {0,};
 
#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
 

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
 * IOHWAB_BOOL: Boolean
 * IOHWAB_UINT16: Integer in interval [0...65535]
 * boolean: Boolean (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 *
 *********************************************************************************************************************/


#define TestApp_START_SEC_CODE
#include "TestApp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReTestApp
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_Pp12VDcDcEnable_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_Pp12VDcDcEnable_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputBatteryMon_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputC18_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputC19_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputC20_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputC21_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputC22_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputC23_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputC4_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputC5_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputC6_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputC7_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputCAN1TermintionH1_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputCAN1TermintionH2_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputCAN1TermintionL1_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputCAN1TermintionL2_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputD17_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputD8_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputHighSideOut2_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputHighSideOut3_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputHighSideOut4_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputHsLin1IpsMultiSense_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputHsOut1IpsCurrentSense_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputHsOut3IpsCurrentSense_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputHsOut5IpsCurrentSense_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputHsPwm1IpsCurrentSense_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputHsPwm3IpsCurrentSense_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputLsPwm1GateMonitoring_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputLsPwm2GateMonitoring_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputLsPwm3GateMonitoring_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputLsPwm4GateMonitoring_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputLsPwm5GateMonitoring_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputUAI73_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputUAI74_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputUAI75_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputUAI76_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputUAI81_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputUAI82_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpAdcAnalogInputUAI87_AdcRead(IOHWAB_UINT16 *AdcValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfAdc_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpCAN1STB_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpCAN1STB_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpCAN2STB_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpCAN2STB_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpCAN3STB_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpCAN3STB_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpCAN4STB_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpCAN4STB_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpCAN5STB_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpCAN5STB_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpCAN6STB_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpCAN6STB_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsOut1IpsFault_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsOut1IpsFault_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsOut1IpsInput0_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsOut1IpsInput0_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsOut1IpsInput1_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsOut1IpsInput1_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsOut3IpsFault_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsOut3IpsFault_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsOut3IpsInput0_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsOut3IpsInput0_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsOut3IpsInput1_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsOut3IpsInput1_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsOut5IpsInput_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsOut5IpsInput_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsPwm1IpsFault_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsPwm1IpsFault_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsPwm3IpsFault_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpHsPwm3IpsFault_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpIPSComSel_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpIPSComSel_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpIPSComSen_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpIPSComSen_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpIPSPwrSel0_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpIPSPwrSel0_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpIPSPwrSel1_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpIPSPwrSel1_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpIPSPwrSen_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpIPSPwrSen_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN1EN_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN1EN_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN1Inh_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN1Inh_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN2EN_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN2EN_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN2Inh_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN2Inh_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN3EN_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN3EN_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN3Inh_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN3Inh_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN4EN_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN4EN_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN4Inh_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN4Inh_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN5EN_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN5EN_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN5Inh_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN5Inh_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN6EN_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN6EN_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN6Inh_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLIN6Inh_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLINPwrIpsFaultRst_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLINPwrIpsFaultRst_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLINPwrIpsIn0_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLINPwrIpsIn0_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLINPwrIpsIn1_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLINPwrIpsIn1_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLINSecurityEN_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLINSecurityEN_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLINSecurityInh_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLINSecurityInh_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLficNres_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLficNres_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLivingPopUpCtrl_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpLivingPopUpCtrl_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpParkedPopUpCtrl_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpParkedPopUpCtrl_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpPwmHsPwm1IpsIn0_PwmDutySet(IOHWAB_UINT16 PwmDuty)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfPwm_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpPwmHsPwm1IpsIn1_PwmDutySet(IOHWAB_UINT16 PwmDuty)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfPwm_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpPwmHsPwm3IpsIn0_PwmDutySet(IOHWAB_UINT16 PwmDuty)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfPwm_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpPwmHsPwm3IpsIn1_PwmDutySet(IOHWAB_UINT16 PwmDuty)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfPwm_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpPwmLsPwm1Gate_PwmDutySet(IOHWAB_UINT16 PwmDuty)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfPwm_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpPwmLsPwm2Gate_PwmDutySet(IOHWAB_UINT16 PwmDuty)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfPwm_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpPwmLsPwm3Gate_PwmDutySet(IOHWAB_UINT16 PwmDuty)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfPwm_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpPwmLsPwm4Gate_PwmDutySet(IOHWAB_UINT16 PwmDuty)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfPwm_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpPwmLsPwm5Gate_PwmDutySet(IOHWAB_UINT16 PwmDuty)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfPwm_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpPwmRegWdtOut_PwmDutySet(IOHWAB_UINT16 PwmDuty)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfPwm_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpRegRst_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpRegRst_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpRficNres_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpRficNres_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpRficRed_DioRead(IOHWAB_BOOL *PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_PpRficRed_DioWrite(IOHWAB_BOOL PinValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_IoHwAbCSIfDio_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReTestApp_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TestApp_CODE) ReTestApp(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ReTestApp
 *********************************************************************************************************************/

   Rte_Call_PpAdcAnalogInputBatteryMon_AdcRead(&IoHwAbAdcValue.AdcAnalogInputBatteryMon);
   Rte_Call_PpAdcAnalogInputC18_AdcRead(&IoHwAbAdcValue.AdcAnalogInputC18);
   Rte_Call_PpAdcAnalogInputC19_AdcRead(&IoHwAbAdcValue.AdcAnalogInputC19);
   Rte_Call_PpAdcAnalogInputC20_AdcRead(&IoHwAbAdcValue.AdcAnalogInputC20);
   Rte_Call_PpAdcAnalogInputC21_AdcRead(&IoHwAbAdcValue.AdcAnalogInputC21);
   Rte_Call_PpAdcAnalogInputC22_AdcRead(&IoHwAbAdcValue.AdcAnalogInputC22);
   Rte_Call_PpAdcAnalogInputC23_AdcRead(&IoHwAbAdcValue.AdcAnalogInputC23);
   Rte_Call_PpAdcAnalogInputC4_AdcRead(&IoHwAbAdcValue.AdcAnalogInputC4);
   Rte_Call_PpAdcAnalogInputC5_AdcRead(&IoHwAbAdcValue.AdcAnalogInputC5);
   Rte_Call_PpAdcAnalogInputC6_AdcRead(&IoHwAbAdcValue.AdcAnalogInputC6);
   Rte_Call_PpAdcAnalogInputC7_AdcRead(&IoHwAbAdcValue.AdcAnalogInputC7);
   Rte_Call_PpAdcAnalogInputCAN1TermintionH1_AdcRead(&IoHwAbAdcValue.AdcAnalogInputCAN1TermintionH1);
   Rte_Call_PpAdcAnalogInputCAN1TermintionH2_AdcRead(&IoHwAbAdcValue.AdcAnalogInputCAN1TermintionH2);
   Rte_Call_PpAdcAnalogInputCAN1TermintionL1_AdcRead(&IoHwAbAdcValue.AdcAnalogInputCAN1TermintionL1);
   Rte_Call_PpAdcAnalogInputCAN1TermintionL2_AdcRead(&IoHwAbAdcValue.AdcAnalogInputCAN1TermintionL2);
   Rte_Call_PpAdcAnalogInputD17_AdcRead(&IoHwAbAdcValue.AdcAnalogInputD17);
   Rte_Call_PpAdcAnalogInputD8_AdcRead(&IoHwAbAdcValue.AdcAnalogInputD8);
   Rte_Call_PpAdcAnalogInputHighSideOut2_AdcRead(&IoHwAbAdcValue.AdcAnalogInputHighSideOut2);
   Rte_Call_PpAdcAnalogInputHighSideOut3_AdcRead(&IoHwAbAdcValue.AdcAnalogInputHighSideOut3);
   Rte_Call_PpAdcAnalogInputHighSideOut4_AdcRead(&IoHwAbAdcValue.AdcAnalogInputHighSideOut4);
   Rte_Call_PpAdcAnalogInputHsLin1IpsMultiSense_AdcRead(&IoHwAbAdcValue.AdcAnalogInputHsLin1IpsMultiSense);
   Rte_Call_PpAdcAnalogInputHsOut1IpsCurrentSense_AdcRead(&IoHwAbAdcValue.AdcAnalogInputHsOut1IpsCurrentSense);
   Rte_Call_PpAdcAnalogInputHsOut3IpsCurrentSense_AdcRead(&IoHwAbAdcValue.AdcAnalogInputHsOut3IpsCurrentSense);
   Rte_Call_PpAdcAnalogInputHsOut5IpsCurrentSense_AdcRead(&IoHwAbAdcValue.AdcAnalogInputHsOut5IpsCurrentSense);
   Rte_Call_PpAdcAnalogInputHsPwm1IpsCurrentSense_AdcRead(&IoHwAbAdcValue.AdcAnalogInputHsPwm1IpsCurrentSense);
   Rte_Call_PpAdcAnalogInputHsPwm3IpsCurrentSense_AdcRead(&IoHwAbAdcValue.AdcAnalogInputHsPwm3IpsCurrentSense);
   Rte_Call_PpAdcAnalogInputLsPwm1GateMonitoring_AdcRead(&IoHwAbAdcValue.AdcAnalogInputLsPwm1GateMonitoring);
   Rte_Call_PpAdcAnalogInputLsPwm2GateMonitoring_AdcRead(&IoHwAbAdcValue.AdcAnalogInputLsPwm2GateMonitoring);
   Rte_Call_PpAdcAnalogInputLsPwm3GateMonitoring_AdcRead(&IoHwAbAdcValue.AdcAnalogInputLsPwm3GateMonitoring);
   Rte_Call_PpAdcAnalogInputLsPwm4GateMonitoring_AdcRead(&IoHwAbAdcValue.AdcAnalogInputLsPwm4GateMonitoring);
   Rte_Call_PpAdcAnalogInputLsPwm5GateMonitoring_AdcRead(&IoHwAbAdcValue.AdcAnalogInputLsPwm5GateMonitoring);
   Rte_Call_PpAdcAnalogInputUAI73_AdcRead(&IoHwAbAdcValue.AdcAnalogInputUAI73);
   Rte_Call_PpAdcAnalogInputUAI74_AdcRead(&IoHwAbAdcValue.AdcAnalogInputUAI74);
   Rte_Call_PpAdcAnalogInputUAI75_AdcRead(&IoHwAbAdcValue.AdcAnalogInputUAI75);
   Rte_Call_PpAdcAnalogInputUAI76_AdcRead(&IoHwAbAdcValue.AdcAnalogInputUAI76);
   Rte_Call_PpAdcAnalogInputUAI81_AdcRead(&IoHwAbAdcValue.AdcAnalogInputUAI81);
   Rte_Call_PpAdcAnalogInputUAI82_AdcRead(&IoHwAbAdcValue.AdcAnalogInputUAI82);
   Rte_Call_PpAdcAnalogInputUAI87_AdcRead(&IoHwAbAdcValue.AdcAnalogInputUAI87);  
   
   
   
   Rte_Call_Pp12VDcDcEnable_DioRead(&IoHwAbReadPinStatus.p12VDcDcEnable);
   Rte_Call_Pp12VDcDcEnable_DioWrite(IoHwAbSetPinValue.p12VDcDcEnable); 
   
   
   //Rte_Call_PpCAN1STB_DioRead(&IoHwAbReadPinStatus.CAN1STB);
  if(IoHwAbSetPinValue.CAN1STB)
  {
    IoHwAbSetPinValue.CAN1STB = 0;
  }
  else
  {
    IoHwAbSetPinValue.CAN1STB = 1;
  }
   Rte_Call_PpCAN1STB_DioWrite(IoHwAbSetPinValue.CAN1STB); 
   
   Rte_Call_PpCAN2STB_DioRead(&IoHwAbReadPinStatus.CAN2STB);
  // Rte_Call_PpCAN2STB_DioWrite(IoHwAbSetPinValue.CAN2STB);
   
   
  Rte_Call_PpCAN3STB_DioRead(&IoHwAbReadPinStatus.CAN3STB);
  // Rte_Call_PpCAN3STB_DioWrite(IoHwAbSetPinValue.CAN3STB);
   
   
   Rte_Call_PpCAN4STB_DioRead(&IoHwAbReadPinStatus.CAN4STB);
   //Rte_Call_PpCAN4STB_DioWrite(IoHwAbSetPinValue.CAN4STB);
   
   
   Rte_Call_PpCAN5STB_DioRead(&IoHwAbReadPinStatus.CAN5STB);
   //Rte_Call_PpCAN5STB_DioWrite(IoHwAbSetPinValue.CAN5STB); 
   
   
  Rte_Call_PpCAN6STB_DioRead(&IoHwAbReadPinStatus.CAN6STB);
   //Rte_Call_PpCAN6STB_DioWrite(IoHwAbSetPinValue.CAN6STB);
   
   
   Rte_Call_PpHsOut1IpsFault_DioRead(&IoHwAbReadPinStatus.HsOut1IpsFault);
  // Rte_Call_PpHsOut1IpsFault_DioWrite(IoHwAbSetPinValue.HsOut1IpsFault);
   
   
   Rte_Call_PpHsOut1IpsInput0_DioRead(&IoHwAbReadPinStatus.HsOut1IpsInput0);
   Rte_Call_PpHsOut1IpsInput0_DioWrite(IoHwAbSetPinValue.HsOut1IpsInput0);
   
   
   Rte_Call_PpHsOut1IpsInput1_DioRead(&IoHwAbReadPinStatus.HsOut1IpsInput1);
   Rte_Call_PpHsOut1IpsInput1_DioWrite(IoHwAbSetPinValue.HsOut1IpsInput1);
   
   Rte_Call_PpHsOut3IpsFault_DioRead(&IoHwAbReadPinStatus.HsOut3IpsFault);
   //Rte_Call_PpHsOut3IpsFault_DioWrite(IoHwAbSetPinValue.HsOut3IpsFault);
   
   
   Rte_Call_PpHsOut3IpsInput0_DioRead(&IoHwAbReadPinStatus.HsOut3IpsInput0);
   Rte_Call_PpHsOut3IpsInput0_DioWrite(IoHwAbSetPinValue.HsOut3IpsInput0);
   
   
   Rte_Call_PpHsOut3IpsInput1_DioRead(&IoHwAbReadPinStatus.HsOut3IpsInput1);
   Rte_Call_PpHsOut3IpsInput1_DioWrite(IoHwAbSetPinValue.HsOut3IpsInput1);
   
   
   Rte_Call_PpHsOut5IpsInput_DioRead(&IoHwAbReadPinStatus.HsOut5IpsInput);   
   Rte_Call_PpHsOut5IpsInput_DioWrite(IoHwAbSetPinValue.HsOut5IpsInput);
   
   
   Rte_Call_PpHsPwm1IpsFault_DioRead(&IoHwAbReadPinStatus.HsPwm1IpsFault);  
   //Rte_Call_PpHsPwm1IpsFault_DioWrite(IoHwAbSetPinValue.HsPwm1IpsFault);
   
   Rte_Call_PpHsPwm3IpsFault_DioRead(&IoHwAbReadPinStatus.HsPwm3IpsFault);
   //Rte_Call_PpHsPwm3IpsFault_DioWrite(IoHwAbSetPinValue.HsPwm3IpsFault);
   
   Rte_Call_PpIPSComSel_DioRead(&IoHwAbReadPinStatus.IPSComSel);
   Rte_Call_PpIPSComSel_DioWrite(IoHwAbSetPinValue.IPSComSel);
   
   
   Rte_Call_PpRegRst_DioRead(&IoHwAbReadPinStatus.RegRst); 
   //Rte_Call_PpRegRst_DioWrite(IoHwAbSetPinValue.RegRst); 
   
   
   Rte_Call_PpRficNres_DioRead(&IoHwAbReadPinStatus.RficNres); 
   Rte_Call_PpRficNres_DioWrite(IoHwAbSetPinValue.RficNres); 
   
   
   Rte_Call_PpRficRed_DioRead(&IoHwAbReadPinStatus.RficRed);
   Rte_Call_PpRficRed_DioWrite(IoHwAbSetPinValue.RficRed);
   
   
   Rte_Call_PpIPSComSen_DioRead(&IoHwAbReadPinStatus.IPSComSen); 
   Rte_Call_PpIPSComSen_DioWrite(IoHwAbSetPinValue.IPSComSen); 
   
   
   Rte_Call_PpIPSPwrSel0_DioRead(&IoHwAbReadPinStatus.IPSPwrSel0);
   Rte_Call_PpIPSPwrSel0_DioWrite(IoHwAbSetPinValue.IPSPwrSel0);
   
   
   Rte_Call_PpIPSPwrSel1_DioRead(&IoHwAbReadPinStatus.IPSPwrSel1);
   Rte_Call_PpIPSPwrSel1_DioWrite(IoHwAbSetPinValue.IPSPwrSel1);
   
   
   Rte_Call_PpIPSPwrSen_DioRead(&IoHwAbReadPinStatus.IPSPwrSen);
   Rte_Call_PpIPSPwrSen_DioWrite(IoHwAbSetPinValue.IPSPwrSen);
   
   Rte_Call_PpLIN1EN_DioRead(&IoHwAbReadPinStatus.LIN1EN);
   Rte_Call_PpLIN1EN_DioWrite(IoHwAbSetPinValue.LIN1EN);
   
   Rte_Call_PpLIN1Inh_DioRead(&IoHwAbReadPinStatus.LIN1Inh);
   //Rte_Call_PpLIN1Inh_DioWrite(IoHwAbSetPinValue.LIN1Inh);
   
   Rte_Call_PpLIN2EN_DioRead(&IoHwAbReadPinStatus.LIN2EN);
   Rte_Call_PpLIN2EN_DioWrite(IoHwAbSetPinValue.LIN2EN);
   
   Rte_Call_PpLIN2Inh_DioRead(&IoHwAbReadPinStatus.LIN2Inh);
  // Rte_Call_PpLIN2Inh_DioWrite(IoHwAbSetPinValue.LIN2Inh);
   
   IoHwAbSetPinValue.LIN3EN = 1;
   Rte_Call_PpLIN3EN_DioRead(&IoHwAbReadPinStatus.LIN3EN);
   Rte_Call_PpLIN3EN_DioWrite(IoHwAbSetPinValue.LIN3EN);
   
   Rte_Call_PpLIN3Inh_DioRead(&IoHwAbReadPinStatus.LIN3Inh);
   //Rte_Call_PpLIN3Inh_DioWrite(IoHwAbSetPinValue.LIN3Inh);
   
   Rte_Call_PpLIN4EN_DioRead(&IoHwAbReadPinStatus.LIN4EN);
   Rte_Call_PpLIN4EN_DioWrite(IoHwAbSetPinValue.LIN4EN);
   
   Rte_Call_PpLIN4Inh_DioRead(&IoHwAbReadPinStatus.LIN4Inh);
   //Rte_Call_PpLIN4Inh_DioWrite(IoHwAbSetPinValue.LIN4Inh);
   
   Rte_Call_PpLIN5EN_DioRead(&IoHwAbReadPinStatus.LIN5EN);
   Rte_Call_PpLIN5EN_DioWrite(IoHwAbSetPinValue.LIN5EN);
   
   Rte_Call_PpLIN5Inh_DioRead(&IoHwAbReadPinStatus.LIN5Inh);
   //Rte_Call_PpLIN5Inh_DioWrite(IoHwAbSetPinValue.LIN5Inh);
   
   Rte_Call_PpLIN6EN_DioRead(&IoHwAbReadPinStatus.LIN6EN);
   Rte_Call_PpLIN6EN_DioWrite(IoHwAbSetPinValue.LIN6EN);
   
   Rte_Call_PpLIN6Inh_DioRead(&IoHwAbReadPinStatus.LIN6Inh);
   //Rte_Call_PpLIN6Inh_DioWrite(IoHwAbSetPinValue.LIN6Inh);
   
   IoHwAbSetPinValue.LINPwrIpsFaultRst = 1;
   Rte_Call_PpLINPwrIpsFaultRst_DioRead(&IoHwAbReadPinStatus.LINPwrIpsFaultRst);
   Rte_Call_PpLINPwrIpsFaultRst_DioWrite(IoHwAbSetPinValue.LINPwrIpsFaultRst);  
   
   Rte_Call_PpLINPwrIpsIn0_DioRead(&IoHwAbReadPinStatus.LINPwrIpsIn0); 
   Rte_Call_PpLINPwrIpsIn0_DioWrite(IoHwAbSetPinValue.LINPwrIpsIn0);
   
   IoHwAbSetPinValue.LINPwrIpsIn1 = 1;
   Rte_Call_PpLINPwrIpsIn1_DioRead(&IoHwAbReadPinStatus.LINPwrIpsIn1);
   Rte_Call_PpLINPwrIpsIn1_DioWrite(IoHwAbSetPinValue.LINPwrIpsIn1);
   
   Rte_Call_PpLINSecurityEN_DioRead(&IoHwAbReadPinStatus.LINSecurityEN); 
   Rte_Call_PpLINSecurityEN_DioWrite(IoHwAbSetPinValue.LINSecurityEN);
   
   Rte_Call_PpLINSecurityInh_DioRead(&IoHwAbReadPinStatus.LINSecurityInh);
   //Rte_Call_PpLINSecurityInh_DioWrite(IoHwAbSetPinValue.LINSecurityInh);
   
   Rte_Call_PpLficNres_DioRead(&IoHwAbReadPinStatus.LficNres);
   Rte_Call_PpLficNres_DioWrite(IoHwAbSetPinValue.LficNres);
   
   IoHwAbSetPinValue.LivingPopUpCtrl = 1;
   Rte_Call_PpLivingPopUpCtrl_DioRead(&IoHwAbReadPinStatus.LivingPopUpCtrl);
   Rte_Call_PpLivingPopUpCtrl_DioWrite(IoHwAbSetPinValue.LivingPopUpCtrl);
   
   Rte_Call_PpParkedPopUpCtrl_DioRead(&IoHwAbReadPinStatus.ParkedPopUpCtrl);
   Rte_Call_PpParkedPopUpCtrl_DioWrite(IoHwAbSetPinValue.ParkedPopUpCtrl);
    
    
   Rte_Call_PpPwmHsPwm1IpsIn0_PwmDutySet(IoHwAbPwmChannelDuty.PwmHsPwm1IpsIn0);
   Rte_Call_PpPwmHsPwm1IpsIn1_PwmDutySet(IoHwAbPwmChannelDuty.PwmHsPwm1IpsIn1);
   Rte_Call_PpPwmHsPwm3IpsIn0_PwmDutySet(IoHwAbPwmChannelDuty.PwmHsPwm3IpsIn0);
   Rte_Call_PpPwmHsPwm3IpsIn1_PwmDutySet(IoHwAbPwmChannelDuty.PwmHsPwm3IpsIn1);
   Rte_Call_PpPwmLsPwm1Gate_PwmDutySet(IoHwAbPwmChannelDuty.PwmLsPwm1Gate);
   Rte_Call_PpPwmLsPwm2Gate_PwmDutySet(IoHwAbPwmChannelDuty.PwmLsPwm2Gate);
   Rte_Call_PpPwmLsPwm3Gate_PwmDutySet(IoHwAbPwmChannelDuty.PwmLsPwm3Gate);
   Rte_Call_PpPwmLsPwm4Gate_PwmDutySet(IoHwAbPwmChannelDuty.PwmLsPwm4Gate);
   Rte_Call_PpPwmLsPwm5Gate_PwmDutySet(IoHwAbPwmChannelDuty.PwmLsPwm5Gate);
   Rte_Call_PpPwmRegWdtOut_PwmDutySet(IoHwAbPwmChannelDuty.PwmRegWdtOut);

    
    

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define TestApp_STOP_SEC_CODE
#include "TestApp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
