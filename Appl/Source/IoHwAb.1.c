/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  IoHwAb.c
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim_181121_BB2_Pvt_0_7_00/SCIM_BP.dpa
 *     SW-C Type:  IoHwAb
 *  Generated at:  Thu Nov 22 17:18:58 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <IoHwAb>
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
 * IOHWAB_SINT8
 *   sint8 represents integers with a minimum value of -128 and a maximum value of 127.
 *      The order-relation on sint8 is: x < y if y - x is positive.
 *      sint8 has a lexical representation consisting of an optional sign followed 
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is 
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, 12678, +10000.
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
 * VGTT_ScimAdiPinsState
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *
 * Runnable Entities:
 * ==================
 * IoHwAb_AdInterfaces_P_GetAdiPinState
 *   Runnable Entity for calling the Operation 'GetAdiPinState' of the Client/Server Port Prototype 'AdInterfaces_P'.
 *
 * IoHwAb_AdInterfaces_P_GetAdiPinStateAll
 *   Runnable Entity for calling the Operation 'GetAdiPinStateAll' of the Client/Server Port Prototype 'AdInterfaces_P'.
 *
 * IoHwAb_AdInterfaces_P_GetPullUpState
 *   Runnable Entity for calling the Operation 'GetPullUpState' of the Client/Server Port Prototype 'AdInterfaces_P'.
 *
 * IoHwAb_AdInterfaces_P_SetPullUp
 *   Runnable Entity for calling the Operation 'SetPullUp' of the Client/Server Port Prototype 'AdInterfaces_P'.
 *
 * IoHwAb_Do12VInterface_P_GetDo12VPinsState
 *   Runnable Entity for calling the Operation 'GetDo12VPinsState' of the Client/Server Port Prototype 'Do12VInterface_P'.
 *
 * IoHwAb_Do12VInterface_P_SetDcdc12VActive
 *   Runnable Entity for calling the Operation 'SetDcdc12VActive' of the Client/Server Port Prototype 'Do12VInterface_P'.
 *
 * IoHwAb_Do12VInterface_P_SetDo12VLivingActive
 *   Runnable Entity for calling the Operation 'SetDo12VLivingActive' of the Client/Server Port Prototype 'Do12VInterface_P'.
 *
 * IoHwAb_Do12VInterface_P_SetDo12VParkedActive
 *   Runnable Entity for calling the Operation 'SetDo12VParkedActive' of the Client/Server Port Prototype 'Do12VInterface_P'.
 *
 * IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState
 *   Runnable Entity for calling the Operation 'GetDobhsPinState' of the Client/Server Port Prototype 'DobhsCtrlInterface_P_1'.
 *
 * IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive
 *   Runnable Entity for calling the Operation 'SetDobhsActive' of the Client/Server Port Prototype 'DobhsCtrlInterface_P_1'.
 *
 * IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState
 *   Runnable Entity for calling the Operation 'GetDobhsPinState' of the Client/Server Port Prototype 'DobhsCtrlInterface_P_2'.
 *
 * IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive
 *   Runnable Entity for calling the Operation 'SetDobhsActive' of the Client/Server Port Prototype 'DobhsCtrlInterface_P_2'.
 *
 * IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState
 *   Runnable Entity for calling the Operation 'GetDobhsPinState' of the Client/Server Port Prototype 'DobhsCtrlInterface_P_3'.
 *
 * IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive
 *   Runnable Entity for calling the Operation 'SetDobhsActive' of the Client/Server Port Prototype 'DobhsCtrlInterface_P_3'.
 *
 * IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState
 *   Runnable Entity for calling the Operation 'GetDobhsPinState' of the Client/Server Port Prototype 'DobhsCtrlInterface_P_4'.
 *
 * IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive
 *   Runnable Entity for calling the Operation 'SetDobhsActive' of the Client/Server Port Prototype 'DobhsCtrlInterface_P_4'.
 *
 * IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne
 *   Runnable Entity for calling the Operation 'GetDoPinStateOne' of the Client/Server Port Prototype 'DowhsInterfaces_P_1'.
 *
 * IoHwAb_DowhsInterfaces_P_1_SetDowActive
 *   Runnable Entity for calling the Operation 'SetDowActive' of the Client/Server Port Prototype 'DowhsInterfaces_P_1'.
 *
 * IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne
 *   Runnable Entity for calling the Operation 'GetDoPinStateOne' of the Client/Server Port Prototype 'DowhsInterfaces_P_2'.
 *
 * IoHwAb_DowhsInterfaces_P_2_SetDowActive
 *   Runnable Entity for calling the Operation 'SetDowActive' of the Client/Server Port Prototype 'DowhsInterfaces_P_2'.
 *
 * IoHwAb_DowlsInterface_P_1_GetDoPinStateOne
 *   Runnable Entity for calling the Operation 'GetDoPinStateOne' of the Client/Server Port Prototype 'DowlsInterface_P_1'.
 *
 * IoHwAb_DowlsInterface_P_1_SetDowlsActive
 *   Runnable Entity for calling the Operation 'SetDowlsActive' of the Client/Server Port Prototype 'DowlsInterface_P_1'.
 *
 * IoHwAb_DowlsInterface_P_2_GetDoPinStateOne
 *   Runnable Entity for calling the Operation 'GetDoPinStateOne' of the Client/Server Port Prototype 'DowlsInterface_P_2'.
 *
 * IoHwAb_DowlsInterface_P_2_SetDowlsActive
 *   Runnable Entity for calling the Operation 'SetDowlsActive' of the Client/Server Port Prototype 'DowlsInterface_P_2'.
 *
 * IoHwAb_DowlsInterface_P_3_GetDoPinStateOne
 *   Runnable Entity for calling the Operation 'GetDoPinStateOne' of the Client/Server Port Prototype 'DowlsInterface_P_3'.
 *
 * IoHwAb_DowlsInterface_P_3_SetDowlsActive
 *   Runnable Entity for calling the Operation 'SetDowlsActive' of the Client/Server Port Prototype 'DowlsInterface_P_3'.
 *
 * IoHwAb_LficICU_P_IcuDisableEdgeDetection
 *   Runnable Entity for calling the Operation 'IcuDisableEdgeDetection' of the Client/Server Port Prototype 'LficICU_P'.
 *
 * IoHwAb_LficICU_P_IcuDisableNotification
 *   Runnable Entity for calling the Operation 'IcuDisableNotification' of the Client/Server Port Prototype 'LficICU_P'.
 *
 * IoHwAb_LficICU_P_IcuEnableEdgeDetection
 *   Runnable Entity for calling the Operation 'IcuEnableEdgeDetection' of the Client/Server Port Prototype 'LficICU_P'.
 *
 * IoHwAb_LficICU_P_IcuEnableNotification
 *   Runnable Entity for calling the Operation 'IcuEnableNotification' of the Client/Server Port Prototype 'LficICU_P'.
 *
 * IoHwAb_LficNRESDio_P_Read
 *   Runnable Entity for calling the Operation 'Read' of the Client/Server Port Prototype 'LficNRESDio_P'.
 *
 * IoHwAb_LficNRESDio_P_Write
 *   Runnable Entity for calling the Operation 'Write' of the Client/Server Port Prototype 'LficNRESDio_P'.
 *
 * IoHwAb_RficICU_P_IcuDisableEdgeDetection
 *   Runnable Entity for calling the Operation 'IcuDisableEdgeDetection' of the Client/Server Port Prototype 'RficICU_P'.
 *
 * IoHwAb_RficICU_P_IcuDisableNotification
 *   Runnable Entity for calling the Operation 'IcuDisableNotification' of the Client/Server Port Prototype 'RficICU_P'.
 *
 * IoHwAb_RficICU_P_IcuEnableEdgeDetection
 *   Runnable Entity for calling the Operation 'IcuEnableEdgeDetection' of the Client/Server Port Prototype 'RficICU_P'.
 *
 * IoHwAb_RficICU_P_IcuEnableNotification
 *   Runnable Entity for calling the Operation 'IcuEnableNotification' of the Client/Server Port Prototype 'RficICU_P'.
 *
 * IoHwAb_RficNRESDio_P_Read
 *   Runnable Entity for calling the Operation 'Read' of the Client/Server Port Prototype 'RficNRESDio_P'.
 *
 * IoHwAb_RficNRESDio_P_Write
 *   Runnable Entity for calling the Operation 'Write' of the Client/Server Port Prototype 'RficNRESDio_P'.
 *
 *********************************************************************************************************************/

#include "Rte_IoHwAb.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "IoHwAb_Cfg.h"

#define ADC0_AI_60_PB9_ADI_1                AdcChannel_PB9 
#define ADC0_AI_61_PB8_ADI_2                AdcChannel_PB8
#define ADC0_AI_62_PB10_ADI_3               AdcChannel_PB10
#define ADC0_AI_63_PF0_ADI_4                AdcChannel_PF0
#define ADC0_AI_64_PF1_ADI_5                AdcChannel_PF1
#define ADC0_AI_65_PF2_ADI_6                AdcChannel_PF2
#define ADC0_AI_66_PF3_ADI_7                AdcChannel_PF3
#define ADC0_AI_67_PF4_ADI_8                AdcChannel_PF4
#define ADC0_AI_68_PF5_ADI_9                AdcChannel_PF5
#define ADC0_AI_69_PF6_ADI_10               AdcChannel_PF6
#define ADC0_AI_70_PF7_ADI_11               AdcChannel_PF7
#define ADC0_AI_71_PJ3_ADI_12               AdcChannel_PJ3
#define ADC0_AI_73_PJ1_DOBHS2_MON           AdcChannel_PJ1
#define ADC0_AI_76_PI14_DOBHS1_MON          AdcChannel_PI14
#define ADC0_AI_101_PB12_DOWHS1_MON         AdcChannel_PB12
#define ADC0_AI_102_PB13_DOWHS2_MON         AdcChannel_PB13

#define ADC1_AI_79_PD2_DOBHS3_MON           AdcChannel_PD2 
#define ADC1_AI_80_PD3_DOBHS4_MON           AdcChannel_PD3 
#define ADC1_AI_81_PD4_PARKED_VOLT_MON      AdcChannel_PD4 
#define ADC1_AI_82_PD5_LIVING_VOLT_MON      AdcChannel_PD5 
#define ADC1_AI_84_PD7_VBAT_LOAD_MON        AdcChannel_PD7 
#define ADC1_AI_87_PD8_12V_MON              AdcChannel_PD8 
#define ADC1_AI_88_PB4_DOBHS_IPS1_CS        AdcChannel_PB4 
#define ADC1_AI_91_PB5_DOBHS_IPS2_CS        AdcChannel_PB5 
#define ADC1_AI_92_PB6_DOWHS_IPS_CS         AdcChannel_PB6 
#define ADC1_AI_95_PD10_IPS_MULTI           AdcChannel_PD10
#define ADC1_AI_128_PA7_DOWLS1_MON          AdcChannel_PA7
#define ADC1_AI_129_PA8_DOWLS2_MON          AdcChannel_PA8
#define ADC1_AI_130_PA9_DOWLS3_MON          AdcChannel_PA9
#define ADC1_AI_122_PG0_CAN1_L2             AdcChannel_PG0
#define ADC1_AI_125_PF15_CAN1_L1            AdcChannel_PF15
#define ADC1_AI_126_PF14_CAN1_H2            AdcChannel_PF14
#define ADC1_AI_127_PE13_CAN1_H1            AdcChannel_PE13 

#define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
#include "MemMap.h"

  Adc_ValueGroupType Adc0_GlobalInput[16] = {0,};
  Adc_ValueGroupType Adc1_GlobalInput[18] = {0,};

  Adc_ValueGroupType Adc0Input[16] = {0,};
  Adc_ValueGroupType Adc1Input[18] = {0,};
  
  uint8 TestLfIc = 0;
  uint8 TestRfIc = 0;  
  
  uint8 u8_spi_Lficdes_data[16] = {0,};
	uint8 u8_spi_Lficsrc_data[16] = {0,};
	uint8 u8_retTransmit = 0;
	uint8 u8_senddata = 0;

	uint8 u8_spi_Rficdes_data[16] = {0,};
	uint8 u8_spi_Rficsrc_data[8] = {0,};

  uint16 U16_TestIoHwAbPeriod=0;
  uint16 U16_TestIoHwADutyCycle=0;
  uint8 U8_TestPwm=0;
  
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
 * IOHWAB_BOOL: Boolean
 * IOHWAB_SINT8: Integer in interval [-128...127]
 * IOHWAB_UINT16: Integer in interval [0...65535]
 * IOHWAB_UINT8: Integer in interval [0...255]
 * VGTT_EcuPinDiagStatus: Integer in interval [0...255]
 * VGTT_EcuPinVoltage_0V2: Integer in interval [0...255]
 * VGTT_ScimAdiPinsState: Integer in interval [0...65535]
 * boolean: Boolean (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 *********************************************************************************************************************/


#define IoHwAb_START_SEC_CODE
#include "IoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_AdInterfaces_P_GetAdiPinState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetAdiPinState> of PortPrototype <AdInterfaces_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_AdInterfaces_P_GetAdiPinState(IOHWAB_UINT8 AdiPinRef, IOHWAB_UINT16 *AdiPinVoltage, VGTT_EcuPinVoltage_0V2 *LivingPullUpVoltage)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_AdiInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_AdInterfaces_P_GetAdiPinState_doc
 *********************************************************************************************************************/



uint8 IoHwAbConvert12bits_to_8bits(uint16 InputAdcValue)
{
return (InputAdcValue/16);
}


uint8 IoHwAbConvert10bits_to_8bits(uint16 InputAdcValue)
{
return (InputAdcValue/4);
}

uint8 IoHwAbConvert12bits_to_9bits(uint16 InputAdcValue)
{
return (InputAdcValue/8);
}


uint8 IoHwAbConvert10bits_to_9bits(uint16 InputAdcValue)
{
return (InputAdcValue/2);
}


void IohwAb_Adc0Group0_EndOfNotification(void)
{

 Adc_DisableGroupNotification(AdcConf_AdcGroup_AdcGroup_Adc0);
 Adc_ReadGroup(AdcConf_AdcGroup_AdcGroup_Adc0,Adc0Input);
  
}


void IohwAb_Adc1Group0_EndOfNotification(void)
{
 Adc_DisableGroupNotification(AdcConf_AdcGroup_AdcGroup_Adc1);
 Adc_ReadGroup(AdcConf_AdcGroup_AdcGroup_Adc1,Adc1Input);

}



/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_AdInterfaces_P_GetAdiPinState(IOHWAB_UINT8 AdiPinRef, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) AdiPinVoltage, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) LivingPullUpVoltage) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_AdInterfaces_P_GetAdiPinState (returns application error)
 *********************************************************************************************************************/
switch(AdiPinRef)
{
case 1 : 
				*AdiPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC0_AI_60_PB9_ADI_1]); 
        break;
case 2 : 
				*AdiPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC0_AI_62_PB10_ADI_3]);
        break;
case 3 : 
        *AdiPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC0_AI_64_PF1_ADI_5]);
				break;
case 4 :  
        *AdiPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC0_AI_66_PF3_ADI_7]); 
				break;
case 5 :
        *AdiPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC0_AI_61_PB8_ADI_2]);
        break;
case 6 :   
        *AdiPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC0_AI_63_PF0_ADI_4]);
				break;
case 7 :  
        *AdiPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC0_AI_65_PF2_ADI_6]); 
				break;
case 8 : 
				*AdiPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC0_AI_67_PF4_ADI_8]); 
				break;
case 9 :  
				*AdiPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC0_AI_68_PF5_ADI_9]); 
			  break;
case 10: 
				*AdiPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC0_AI_69_PF6_ADI_10]); 
				break;
case 11: 
				*AdiPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC0_AI_70_PF7_ADI_11]); 
				break;
case 12: 
				*AdiPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC0_AI_71_PJ3_ADI_12]); 
        break;
case 13: 
				*AdiPinVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_122_PG0_CAN1_L2]);
        break;
case 14: 
				*AdiPinVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_125_PF15_CAN1_L1]);
        break;
case 15: 
				*AdiPinVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_126_PF14_CAN1_H2]);
        break;
case 16: 
				*AdiPinVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_127_PE13_CAN1_H1]);
        break;
default: 
        //TBD
        *AdiPinVoltage= 0;
        break;	
}

  *LivingPullUpVoltage =IoHwAbConvert12bits_to_8bits(Adc1Input[ADC1_AI_82_PD5_LIVING_VOLT_MON]);

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_AdInterfaces_P_GetAdiPinStateAll
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetAdiPinStateAll> of PortPrototype <AdInterfaces_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_AdInterfaces_P_GetAdiPinStateAll(VGTT_ScimAdiPinsState *VoltageOnAdiPins, VGTT_EcuPinVoltage_0V2 *LivingPullUpVoltage)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_AdiInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_AdInterfaces_P_GetAdiPinStateAll_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_AdInterfaces_P_GetAdiPinStateAll(P2VAR(VGTT_ScimAdiPinsState, AUTOMATIC, RTE_IOHWAB_APPL_VAR) VoltageOnAdiPins, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) LivingPullUpVoltage) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_AdInterfaces_P_GetAdiPinStateAll (returns application error)
 *********************************************************************************************************************/

 *LivingPullUpVoltage=IoHwAbConvert12bits_to_8bits(Adc1Input[ADC1_AI_82_PD5_LIVING_VOLT_MON]);
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_AdInterfaces_P_GetPullUpState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetPullUpState> of PortPrototype <AdInterfaces_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_AdInterfaces_P_GetPullUpState(VGTT_EcuPinVoltage_0V2 *PullUpVoltage_Living, VGTT_EcuPinVoltage_0V2 *PullUpVoltage_Parked, VGTT_EcuPinVoltage_0V2 *PullUpVoltage_DAI1, VGTT_EcuPinVoltage_0V2 *PullUpVoltage_DAI2)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_AdiInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_AdInterfaces_P_GetPullUpState_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_AdInterfaces_P_GetPullUpState(P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_Living, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_Parked, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_DAI1, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_DAI2) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_AdInterfaces_P_GetPullUpState (returns application error)
 *********************************************************************************************************************/

  *PullUpVoltage_Parked=IoHwAbConvert12bits_to_8bits(Adc1Input[ADC1_AI_81_PD4_PARKED_VOLT_MON]);
  *PullUpVoltage_Living=IoHwAbConvert12bits_to_8bits(Adc1Input[ADC1_AI_82_PD5_LIVING_VOLT_MON]);
  if(Dio_ReadChannel(DioConf_DioChannel_DOOR_ACC_INTERF_1)==1)
  {
    *PullUpVoltage_DAI1=0xFF;
  }
  else
  {
    *PullUpVoltage_DAI1=0x00;
  }
  
  if(Dio_ReadChannel(DioConf_DioChannel_DOOR_ACC_INTERF_2)==1)
  {
    *PullUpVoltage_DAI2=0xFF;
  }
  else{
    *PullUpVoltage_DAI2=0x00;
  }

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_AdInterfaces_P_SetPullUp
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetPullUp> of PortPrototype <AdInterfaces_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_AdInterfaces_P_SetPullUp(IOHWAB_BOOL ActivateLivingPullUp, IOHWAB_BOOL ActivateParkedPullUp, IOHWAB_BOOL ActivateDAIPullUp)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_AdiInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_AdInterfaces_P_SetPullUp_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_AdInterfaces_P_SetPullUp(IOHWAB_BOOL ActivateLivingPullUp, IOHWAB_BOOL ActivateParkedPullUp, IOHWAB_BOOL ActivateDAIPullUp) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_AdInterfaces_P_SetPullUp (returns application error)
 *********************************************************************************************************************/
  static IOHWAB_UINT8 backup_living=0xFF;
  static IOHWAB_UINT8 backup_parked=0xFF;
  static IOHWAB_UINT8 backup_dai=0xFF;

  if(backup_living != ActivateLivingPullUp)
  {
    backup_living = ActivateLivingPullUp;
    Dio_WriteChannel(DioConf_DioChannel_Living_PullUPCtrl, !ActivateLivingPullUp);
  }
  else
  {

  }

  if(backup_parked != ActivateParkedPullUp)
  {
    backup_parked = ActivateParkedPullUp;
    Dio_WriteChannel(DioConf_DioChannel_Parked_PullUPCtrl, !ActivateParkedPullUp);
  }
  else
  {

  }

  if(backup_dai != ActivateDAIPullUp)
  {
    backup_dai = ActivateDAIPullUp;
    Dio_WriteChannel(DioConf_DioChannel_CAPA_SNSR_OUTPUT_1_2, !ActivateDAIPullUp);
  }
  else
  {

  } 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_Do12VInterface_P_GetDo12VPinsState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDo12VPinsState> of PortPrototype <Do12VInterface_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_Do12VInterface_P_GetDo12VPinsState(IOHWAB_UINT8 SelectParkedOrLivingPin, IOHWAB_BOOL *IsDo12VActivated, VGTT_EcuPinVoltage_0V2 *Do12VPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinVoltage_0V2 *DcdcRefVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_Do12VInterface_P_GetDo12VPinsState_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_Do12VInterface_P_GetDo12VPinsState(IOHWAB_UINT8 SelectParkedOrLivingPin, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDo12VActivated, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Do12VPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DcdcRefVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_Do12VInterface_P_GetDo12VPinsState (returns application error)
 *********************************************************************************************************************/

  *IsDo12VActivated = Dio_ReadChannel(DioConf_DioChannel_V12DCDC_EN);
 
  *Do12VPinVoltage=IoHwAbConvert12bits_to_8bits(Adc1Input[ADC1_AI_87_PD8_12V_MON]);
   
  *BatteryVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_84_PD7_VBAT_LOAD_MON]);
  
  // undefined_sslee
  if(SelectParkedOrLivingPin == 0)
  {
    *DcdcRefVoltage=IoHwAbConvert12bits_to_8bits(Adc1Input[ADC1_AI_81_PD4_PARKED_VOLT_MON]);
  }
  else if(SelectParkedOrLivingPin == 1)
  {
    *DcdcRefVoltage=IoHwAbConvert12bits_to_8bits(Adc1Input[ADC1_AI_82_PD5_LIVING_VOLT_MON]);
  }
  else
  {
    // MISRA
  }
  
  *DiagStatus = Dio_ReadChannel(DioConf_DioChannel_LIN_PWR_FAULTRST);

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_Do12VInterface_P_SetDcdc12VActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDcdc12VActive> of PortPrototype <Do12VInterface_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_Do12VInterface_P_SetDcdc12VActive(IOHWAB_BOOL Activation)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_Do12VInterface_P_SetDcdc12VActive_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_Do12VInterface_P_SetDcdc12VActive(IOHWAB_BOOL Activation) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_Do12VInterface_P_SetDcdc12VActive (returns application error)
 *********************************************************************************************************************/
  static IOHWAB_UINT8 backup_activation=0xFF;

  if(backup_activation != Activation)
  {
    backup_activation = Activation;
    Dio_WriteChannel(DioConf_DioChannel_V12DCDC_EN, !Activation);
  }
  else
  {

  }
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_Do12VInterface_P_SetDo12VLivingActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDo12VLivingActive> of PortPrototype <Do12VInterface_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_Do12VInterface_P_SetDo12VLivingActive(IOHWAB_BOOL Activation)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_Do12VInterface_P_SetDo12VLivingActive_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_Do12VInterface_P_SetDo12VLivingActive(IOHWAB_BOOL Activation) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_Do12VInterface_P_SetDo12VLivingActive (returns application error)
 *********************************************************************************************************************/
  static IOHWAB_UINT8 backup_activation=0xFF;

  if(backup_activation != Activation)
  {
    backup_activation = Activation;
    Dio_WriteChannel(DioConf_DioChannel_Living_Ctrl, !Activation);
  }
  else
  {

  }
  
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_Do12VInterface_P_SetDo12VParkedActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDo12VParkedActive> of PortPrototype <Do12VInterface_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_Do12VInterface_P_SetDo12VParkedActive(IOHWAB_BOOL Activation)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Do12VInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_Do12VInterface_P_SetDo12VParkedActive_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_Do12VInterface_P_SetDo12VParkedActive(IOHWAB_BOOL Activation) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_Do12VInterface_P_SetDo12VParkedActive (returns application error)
 *********************************************************************************************************************/
  static IOHWAB_UINT8 backup_activation=0xFF;

  if(backup_activation != Activation)
  {
    backup_activation = Activation;
    Dio_WriteChannel(DioConf_DioChannel_Parked_Ctrl, !Activation);
  }
  else
  {
    
  } 
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDobhsPinState> of PortPrototype <DobhsCtrlInterface_P_1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState (returns application error)
 *********************************************************************************************************************/
 *DoPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC0_AI_76_PI14_DOBHS1_MON]);
 
 *BatteryVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_84_PD7_VBAT_LOAD_MON]);
 
 *DiagStatus=Dio_ReadChannel(DioConf_DioChannel_DOBHS_IPS1_FAULT); 
 
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDobhsActive> of PortPrototype <DobhsCtrlInterface_P_1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive(IOHWAB_BOOL Activation)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive(IOHWAB_BOOL Activation) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive (returns application error)
 *********************************************************************************************************************/
  static IOHWAB_UINT8 backup_activation=0xFF;

  if(backup_activation != Activation)
  {
    backup_activation = Activation;
    Dio_WriteChannel(DioConf_DioChannel_DOBHS1_Ctrl, !Activation);
  }
  else
  {
    
  }
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDobhsPinState> of PortPrototype <DobhsCtrlInterface_P_2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState (returns application error)
 *********************************************************************************************************************/
 *DoPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC0_AI_73_PJ1_DOBHS2_MON]);
 
 *BatteryVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_84_PD7_VBAT_LOAD_MON]);

 *DiagStatus=Dio_ReadChannel(DioConf_DioChannel_DOBHS_IPS1_FAULT);
 
 
 
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDobhsActive> of PortPrototype <DobhsCtrlInterface_P_2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive(IOHWAB_BOOL Activation)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive(IOHWAB_BOOL Activation) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive (returns application error)
 *********************************************************************************************************************/
  static IOHWAB_UINT8 backup_activation=0xFF;

  if(backup_activation != Activation)
  {
    backup_activation = Activation;
    Dio_WriteChannel(DioConf_DioChannel_DOBHS2_Ctrl, !Activation);
  }
  else
  {
    
  }
   
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDobhsPinState> of PortPrototype <DobhsCtrlInterface_P_3>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState (returns application error)
 *********************************************************************************************************************/
 
 
 *DoPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC1_AI_79_PD2_DOBHS3_MON]);
 
 *BatteryVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_84_PD7_VBAT_LOAD_MON]);
 
 *DiagStatus=Dio_ReadChannel(DioConf_DioChannel_DOBHS_IPS2_FAULT);
 
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDobhsActive> of PortPrototype <DobhsCtrlInterface_P_3>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive(IOHWAB_BOOL Activation)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive(IOHWAB_BOOL Activation) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive (returns application error)
 *********************************************************************************************************************/
  static IOHWAB_UINT8 backup_activation=0xFF;

  if(backup_activation != Activation)
  {
    backup_activation = Activation;
    Dio_WriteChannel(DioConf_DioChannel_DOBHS3_Ctrl, !Activation);
  }
  else
  {
    
  } 
 
 return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDobhsPinState> of PortPrototype <DobhsCtrlInterface_P_4>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState (returns application error)
 *********************************************************************************************************************/
 *DoPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC1_AI_80_PD3_DOBHS4_MON]); 
 
 *BatteryVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_84_PD7_VBAT_LOAD_MON]);
 
 *DiagStatus=Dio_ReadChannel(DioConf_DioChannel_DOBHS_IPS2_FAULT);
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDobhsActive> of PortPrototype <DobhsCtrlInterface_P_4>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive(IOHWAB_BOOL Activation)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DobhsCtrlInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive(IOHWAB_BOOL Activation) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive (returns application error)
 *********************************************************************************************************************/
static IOHWAB_UINT8 backup_activation=0xFF;

  if(backup_activation != Activation)
  {
    backup_activation = Activation;
    Dio_WriteChannel(DioConf_DioChannel_DOBHS4_Ctrl, !Activation);
  }
  else
  {
    
  }
  
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDoPinStateOne> of PortPrototype <DowhsInterfaces_P_1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_SINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_SINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne (returns application error)
 *********************************************************************************************************************/

  static uint32 DowhsDutyCycle_1 = 0;
  static uint32 DowhsPeriod_1 = 0;

  *BatteryVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_84_PD7_VBAT_LOAD_MON]);

  *DoPinVoltage=IoHwAbConvert10bits_to_9bits(Adc0Input[ADC0_AI_101_PB12_DOWHS1_MON]);

  DowhsDutyCycle_1 = REG_READ32(0xFFC38320);   // eMios0 Ch24_A
  DowhsPeriod_1 = REG_READ32(0xFFC38324);      // eMios0 Ch24_B
  
  *DutyCycle = 100-(sint8)(DowhsDutyCycle_1/400);
  *Period = (uint16)(80000000/DowhsPeriod_1);

  *DiagStatus = Dio_ReadChannel(DioConf_DioChannel_DOWHS_IPS_FAULT);

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowhsInterfaces_P_1_SetDowActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDowActive> of PortPrototype <DowhsInterfaces_P_1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowhsInterfaces_P_1_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowhsInterfaces_P_1_SetDowActive_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowhsInterfaces_P_1_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowhsInterfaces_P_1_SetDowActive (returns application error)
 *********************************************************************************************************************/

  uint16 UpdatedDutyCycle;
  uint32 UpdatedPeriod;
  static uint8 nState;
  static uint16 DutyCycleBuf_HS1;
  static uint32 PeriodBuf_HS1;
/*
  if(nState != OutputId)
  {
    nState = OutputId;

    if(OutputId == 0)
    {
      Pwm_SetChannelOutput(PwmChannel_HS_PWM_IN1, 1);
    }
    else
    {
      Pwm_SetChannelOutput(PwmChannel_HS_PWM_IN1, 0);
    }
  }
  else
  {
  }
*/
  if(DutyCycle <= 0x64)
  {
    UpdatedDutyCycle = (uint16)DutyCycle*0x8000/100;
    UpdatedPeriod = 80000000/Period;
  }
  else
  {
    return RTE_E_OK;
  }

  if((UpdatedDutyCycle != DutyCycleBuf_HS1) || (UpdatedPeriod != PeriodBuf_HS1))
  {
    DutyCycleBuf_HS1 = UpdatedDutyCycle;
    PeriodBuf_HS1 = UpdatedPeriod;
    Pwm_SetPeriodAndDuty(PwmChannel_HS_PWM_IN1,UpdatedPeriod,UpdatedDutyCycle);
  }
  else
  {
  }

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDoPinStateOne> of PortPrototype <DowhsInterfaces_P_2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_SINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_SINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne (returns application error)
 *********************************************************************************************************************/

  static uint32 DowhsDutyCycle_2 = 0;
  static uint32 DowhsPeriod_2 = 0;

  *BatteryVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_84_PD7_VBAT_LOAD_MON]);

  *DoPinVoltage=IoHwAbConvert10bits_to_9bits(Adc1Input[ADC0_AI_102_PB13_DOWHS2_MON]); 

  DowhsDutyCycle_2 = REG_READ32(0xFFC38344);   // eMios0 Ch25_B
  DowhsPeriod_2 = REG_READ32(0xFFC38300);      // eMios0 Ch23_A

  *DutyCycle = (usint8)(DowhsDutyCycle_2/400);
  *Period = (uint16)(80000000/DowhsPeriod_2);

  *DiagStatus = Dio_ReadChannel(DioConf_DioChannel_DOWHS_IPS_FAULT);

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowhsInterfaces_P_2_SetDowActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDowActive> of PortPrototype <DowhsInterfaces_P_2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowhsInterfaces_P_2_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowhsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowhsInterfaces_P_2_SetDowActive_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowhsInterfaces_P_2_SetDowActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowhsInterfaces_P_2_SetDowActive (returns application error)
 *********************************************************************************************************************/

  uint16 UpdatedDutyCycle;
  uint32 UpdatedPeriod;
  static uint16 DutyCycleBuf_HS2;
  

  if(DutyCycle <= 0x64)
  {
    UpdatedDutyCycle = (uint16)DutyCycle*0x8000/100;
    UpdatedPeriod = 80000000/Period;
  }
  else
  {
    return RTE_E_OK;
  }

  if(UpdatedDutyCycle != DutyCycleBuf_HS2)
  {
    DutyCycleBuf_HS2 = UpdatedDutyCycle;
    Pwm_SetDutyCycle(PwmChannel_HS_PWM_IN2, UpdatedDutyCycle);
    //Pwm_SetPeriodAndDuty(PwmChannel_HS_PWM_IN2,UpdatedPeriod,UpdatedDutyCycle);
  }
  else
  {
  }

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowlsInterface_P_1_GetDoPinStateOne
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDoPinStateOne> of PortPrototype <DowlsInterface_P_1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowlsInterface_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_SINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowlsInterface_P_1_GetDoPinStateOne_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_1_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_SINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowlsInterface_P_1_GetDoPinStateOne (returns application error)
 *********************************************************************************************************************/

  static uint32 DowlsDutyCycle_1 = 0;
  static uint32 DowlsPeriod_1 = 0;

  *BatteryVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_84_PD7_VBAT_LOAD_MON]);

  *DoPinVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_128_PA7_DOWLS1_MON]);

  DowlsDutyCycle_1 = REG_READ32(0xFBC380E4);   // eMios1 Ch6_B
  DowlsPeriod_1 = REG_READ32(0xFBC38300);      // eMios1 Ch23_A

  *DutyCycle = (sint8)(DowlsDutyCycle_1/400);
  *Period = (uint16)(80000000/DowlsPeriod_1);

  *DiagStatus = 0;
     
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowlsInterface_P_1_SetDowlsActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDowlsActive> of PortPrototype <DowlsInterface_P_1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowlsInterface_P_1_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowlsInterface_P_1_SetDowlsActive_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_1_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowlsInterface_P_1_SetDowlsActive (returns application error)
 *********************************************************************************************************************/

  uint16 UpdatedDutyCycle;
  uint32 UpdatedPeriod;
  static uint16 DutyCycleBuf_LS1;

  if(DutyCycle <= 0x64)
  {
    UpdatedDutyCycle = (uint16)DutyCycle*0x8000/100;
    UpdatedPeriod = 80000000/Period;
  }
  else
  {
    return RTE_E_OK;
  }

  if(UpdatedDutyCycle != DutyCycleBuf_LS1)
  {
    DutyCycleBuf_LS1 = UpdatedDutyCycle;
    Pwm_SetDutyCycle(PwmChannel_LS_GATE1, UpdatedDutyCycle);
    //Pwm_SetPeriodAndDuty(PwmChannel_LS_GATE1,UpdatedPeriod,UpdatedDutyCycle);
  }
  else
  {
  }

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowlsInterface_P_2_GetDoPinStateOne
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDoPinStateOne> of PortPrototype <DowlsInterface_P_2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowlsInterface_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_SINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowlsInterface_P_2_GetDoPinStateOne_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_2_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_SINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowlsInterface_P_2_GetDoPinStateOne (returns application error)
 *********************************************************************************************************************/

  static uint32 DowlsDutyCycle_2 = 0;
  static uint32 DowlsPeriod_2 = 0;

  *BatteryVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_84_PD7_VBAT_LOAD_MON]);

  *DoPinVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_129_PA8_DOWLS2_MON]); 

  DowlsDutyCycle_2 = REG_READ32(0xFBC38104);   // eMios1 Ch7_B
  DowlsPeriod_2 = REG_READ32(0xFBC382E0);      // eMios1 Ch22_A

  *DutyCycle = (sint8)(DowlsDutyCycle_2/400);
  *Period = (uint16)(80000000/DowlsPeriod_2);

  *DiagStatus = 0;
      
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowlsInterface_P_2_SetDowlsActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDowlsActive> of PortPrototype <DowlsInterface_P_2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowlsInterface_P_2_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowlsInterface_P_2_SetDowlsActive_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_2_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowlsInterface_P_2_SetDowlsActive (returns application error)
 *********************************************************************************************************************/

  uint16 UpdatedDutyCycle;
  uint32 UpdatedPeriod;
  static uint16 DutyCycleBuf_LS2;

  if(DutyCycle <= 0x64)
  {
    UpdatedDutyCycle = (uint16)DutyCycle*0x8000/100;
    UpdatedPeriod = 80000000/Period;
  }
  else
  {
    return RTE_E_OK;
  }

  if(UpdatedDutyCycle != DutyCycleBuf_LS2)
  {
    DutyCycleBuf_LS2 = UpdatedDutyCycle;
    Pwm_SetDutyCycle(PwmChannel_LS_GATE2, UpdatedDutyCycle);
    //Pwm_SetPeriodAndDuty(PwmChannel_LS_GATE2,UpdatedPeriod,UpdatedDutyCycle);
  }
  else
  { 
  }

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowlsInterface_P_3_GetDoPinStateOne
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDoPinStateOne> of PortPrototype <DowlsInterface_P_3>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowlsInterface_P_3_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, IOHWAB_SINT8 *DutyCycle, IOHWAB_UINT16 *Period, VGTT_EcuPinDiagStatus *DiagStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowlsInterface_P_3_GetDoPinStateOne_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_3_GetDoPinStateOne(IOHWAB_UINT8 DoPinRef, P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, P2VAR(IOHWAB_SINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowlsInterface_P_3_GetDoPinStateOne (returns application error)
 *********************************************************************************************************************/

  static uint32 DowlsDutyCycle_3 = 0;
  static uint32 DowlsPeriod_3 = 0;

  *BatteryVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_84_PD7_VBAT_LOAD_MON]);

  *DoPinVoltage=IoHwAbConvert12bits_to_9bits(Adc1Input[ADC1_AI_130_PA9_DOWLS3_MON]); 

  DowlsDutyCycle_3 = REG_READ32(0xFBC38120);   // eMios1 Ch8_A
  DowlsPeriod_3 = REG_READ32(0xFBC38124);      // eMios1 Ch8_B

  *DutyCycle = 100-(sint8)(DowlsDutyCycle_3/400);
  *Period = (uint16)(80000000/DowlsPeriod_3);

  *DiagStatus = 0;
  
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_DowlsInterface_P_3_SetDowlsActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetDowlsActive> of PortPrototype <DowlsInterface_P_3>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_DowlsInterface_P_3_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DowlsInterface_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowlsInterface_P_3_SetDowlsActive_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_DowlsInterface_P_3_SetDowlsActive(IOHWAB_UINT8 OutputId, IOHWAB_UINT16 Period, IOHWAB_SINT8 DutyCycle) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_DowlsInterface_P_3_SetDowlsActive (returns application error)
 *********************************************************************************************************************/

  uint16 UpdatedDutyCycle;
  uint32 UpdatedPeriod;
  static uint16 DutyCycleBuf_LS3;
  static uint32 PeriodBuf_LS3;

  if(DutyCycle <= 0x64)
  {
    UpdatedDutyCycle = (uint16)DutyCycle*0x8000/100;
    UpdatedPeriod = 80000000/Period;
  }
  else
  {
    return RTE_E_OK;
  }

  if((UpdatedDutyCycle != DutyCycleBuf_LS3) || (UpdatedPeriod != PeriodBuf_LS3))
  {
    DutyCycleBuf_LS3 = UpdatedDutyCycle;
    PeriodBuf_LS3 = UpdatedPeriod;
    Pwm_SetPeriodAndDuty(PwmChannel_LS_GATE3,UpdatedPeriod,UpdatedDutyCycle);
  }
  else
  {
  }

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_LficICU_P_IcuDisableEdgeDetection
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuDisableEdgeDetection> of PortPrototype <LficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_LficICU_P_IcuDisableEdgeDetection(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_LficICU_P_IcuDisableEdgeDetection_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficICU_P_IcuDisableEdgeDetection(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_LficICU_P_IcuDisableEdgeDetection (returns application error)
 *********************************************************************************************************************/
  Icu_DisableEdgeDetection(IcuChannel_LFIC_IRQ);
 
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_LficICU_P_IcuDisableNotification
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuDisableNotification> of PortPrototype <LficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_LficICU_P_IcuDisableNotification(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_LficICU_P_IcuDisableNotification_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficICU_P_IcuDisableNotification(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_LficICU_P_IcuDisableNotification (returns application error)
 *********************************************************************************************************************/
  Icu_DisableNotification(IcuChannel_LFIC_IRQ);
  
  
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_LficICU_P_IcuEnableEdgeDetection
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuEnableEdgeDetection> of PortPrototype <LficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_LficICU_P_IcuEnableEdgeDetection(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_LficICU_P_IcuEnableEdgeDetection_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficICU_P_IcuEnableEdgeDetection(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_LficICU_P_IcuEnableEdgeDetection (returns application error)
 *********************************************************************************************************************/

 Icu_EnableEdgeDetection(IcuChannel_LFIC_IRQ);
 
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_LficICU_P_IcuEnableNotification
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuEnableNotification> of PortPrototype <LficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_LficICU_P_IcuEnableNotification(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_LficICU_P_IcuEnableNotification_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficICU_P_IcuEnableNotification(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_LficICU_P_IcuEnableNotification (returns application error)
 *********************************************************************************************************************/

 
 Icu_EnableNotification(IcuChannel_LFIC_IRQ);


  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_LficNRESDio_P_Read
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Read> of PortPrototype <LficNRESDio_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_LficNRESDio_P_Read(IOHWAB_UINT8 *ReadValue)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Dio_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_LficNRESDio_P_Read_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficNRESDio_P_Read(P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) ReadValue) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_LficNRESDio_P_Read (returns application error)
 *********************************************************************************************************************/
   *ReadValue = Dio_ReadChannel(DioConf_DioChannel_LFIC_NRES);


  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_LficNRESDio_P_Write
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Write> of PortPrototype <LficNRESDio_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_LficNRESDio_P_Write(IOHWAB_UINT8 SetValue)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Dio_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_LficNRESDio_P_Write_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_LficNRESDio_P_Write(IOHWAB_UINT8 SetValue) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_LficNRESDio_P_Write (returns application error)
 *********************************************************************************************************************/

  Dio_WriteChannel(DioConf_DioChannel_LFIC_NRES,SetValue);
 
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_REIoHwAb_10ms
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_REIoHwAb_10ms_doc
 *********************************************************************************************************************/
void IoHwAb_IcuNotification_RFIC_IRQ(void)
{

 // RE_RFIC_WakeUp();


}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, IoHwAb_CODE) IoHwAb_REIoHwAb_10ms(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_REIoHwAb_10ms
 *********************************************************************************************************************/
  if(Adc_GetGroupStatus(AdcConf_AdcGroup_AdcGroup_Adc0)== ADC_IDLE)
  {
    Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_Adc0, Adc0_GlobalInput);
  }
  else
  {
    // MISRA rules
  }
  
  if(Adc_GetGroupStatus(AdcConf_AdcGroup_AdcGroup_Adc1)== ADC_IDLE)
  {
    Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_Adc1, Adc1_GlobalInput);
  }
  else
  {
    // MISRA rules
  }


  if(Adc_GetGroupStatus(AdcConf_AdcGroup_AdcGroup_Adc0)!= ADC_BUSY)
  {
     Adc_EnableGroupNotification(AdcConf_AdcGroup_AdcGroup_Adc0);
    Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_Adc0);
  }
  else
  {
    // MISRA rules
  }
  
  if(Adc_GetGroupStatus(AdcConf_AdcGroup_AdcGroup_Adc1)!= ADC_BUSY)
  {
    Adc_EnableGroupNotification(AdcConf_AdcGroup_AdcGroup_Adc1);
    Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_Adc1);
  }
  else
  {
    // MISRA rules
  }
  



if(U8_TestPwm==1)
{
  Pwm_SetPeriodAndDuty(PwmChannel_LS_GATE1,U16_TestIoHwAbPeriod, U16_TestIoHwADutyCycle);
}















  #if 1
  if(TestLfIc==1)
  {
	 //TestLfIc=0; 
	  
	  
  u8_spi_Lficsrc_data[0] = 0x6C;
  u8_spi_Lficsrc_data[1] = (116<<1);
  u8_spi_Lficsrc_data[2] = 0x00;
	
  Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, (const uint8 *)&u8_spi_Lficsrc_data[0], &u8_spi_Lficdes_data[0], 3);
  u8_retTransmit = Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);


   u8_spi_Lficsrc_data[0] = 0x60; 
   u8_spi_Lficsrc_data[1] = 0x00;
	
   Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, u8_spi_Lficsrc_data, u8_spi_Lficdes_data, 2);
   u8_retTransmit = Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
/*
  u8_spi_Lficdes_data[0] = 0;
  u8_spi_Lficdes_data[1] = 0;
  u8_spi_Lficdes_data[2] = 0;


  u8_spi_Lficsrc_data[0] = 0x6D; 	
  u8_spi_Lficsrc_data[1] =  (115<<1);
	
	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, u8_spi_Lficsrc_data, u8_spi_Lficdes_data, 16);
	u8_retTransmit = Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);

  u8_spi_Lficdes_data[0] = 0;
  u8_senddata = ((~u8_senddata)&0x02)|0x01;
*/  
  }
 
  if(TestRfIc==1)
  {
	  // TestRfIc=0;	  
	  
	  u8_spi_Rficsrc_data[0] = 0x4;
	  u8_spi_Rficsrc_data[1] = 0x0;
	  u8_spi_Rficsrc_data[2] = 0x0;
	  u8_spi_Rficsrc_data[3] = 0x0;
	  u8_spi_Rficsrc_data[4] = 0x0;
	  u8_spi_Rficsrc_data[5] = 0x0;
	  
	  
	  
	  u8_spi_Rficdes_data[0] = 0x0;
	  u8_spi_Rficdes_data[1] = 0x0;
	  u8_spi_Rficdes_data[2] = 0x0;
	  u8_spi_Rficdes_data[3] = 0x0;
	  u8_spi_Rficdes_data[4] = 0x0;
	  u8_spi_Rficdes_data[5] = 0x0;
	  
	  
	 Spi_SetupEB(SpiConf_SpiChannel_RFIC_CH, u8_spi_Rficsrc_data, u8_spi_Rficdes_data, 6);
	 u8_retTransmit = Spi_SyncTransmit(SpiConf_SpiSequence_RFIC_SEQ_DATA);
	   
  }
  
 #endif 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_RficICU_P_IcuDisableEdgeDetection
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuDisableEdgeDetection> of PortPrototype <RficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_RficICU_P_IcuDisableEdgeDetection(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_RficICU_P_IcuDisableEdgeDetection_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficICU_P_IcuDisableEdgeDetection(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_RficICU_P_IcuDisableEdgeDetection (returns application error)
 *********************************************************************************************************************/

  Icu_DisableEdgeDetection(IcuChannel_RFIC_IRQ);
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_RficICU_P_IcuDisableNotification
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuDisableNotification> of PortPrototype <RficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_RficICU_P_IcuDisableNotification(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_RficICU_P_IcuDisableNotification_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficICU_P_IcuDisableNotification(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_RficICU_P_IcuDisableNotification (returns application error)
 *********************************************************************************************************************/

  Icu_DisableNotification(IcuChannel_RFIC_IRQ);

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_RficICU_P_IcuEnableEdgeDetection
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuEnableEdgeDetection> of PortPrototype <RficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_RficICU_P_IcuEnableEdgeDetection(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_RficICU_P_IcuEnableEdgeDetection_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficICU_P_IcuEnableEdgeDetection(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_RficICU_P_IcuEnableEdgeDetection (returns application error)
 *********************************************************************************************************************/

  Icu_EnableEdgeDetection(IcuChannel_RFIC_IRQ);
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_RficICU_P_IcuEnableNotification
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <IcuEnableNotification> of PortPrototype <RficICU_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_RficICU_P_IcuEnableNotification(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Icu_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_RficICU_P_IcuEnableNotification_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficICU_P_IcuEnableNotification(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_RficICU_P_IcuEnableNotification (returns application error)
 *********************************************************************************************************************/

 
 Icu_EnableNotification(IcuChannel_RFIC_IRQ);


  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_RficNRESDio_P_Read
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Read> of PortPrototype <RficNRESDio_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_RficNRESDio_P_Read(IOHWAB_UINT8 *ReadValue)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Dio_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_RficNRESDio_P_Read_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficNRESDio_P_Read(P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) ReadValue) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_RficNRESDio_P_Read (returns application error)
 *********************************************************************************************************************/

   *ReadValue = Dio_ReadChannel(DioConf_DioChannel_RFIC_NRES);
 
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_RficNRESDio_P_Write
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Write> of PortPrototype <RficNRESDio_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType IoHwAb_RficNRESDio_P_Write(IOHWAB_UINT8 SetValue)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Dio_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_RficNRESDio_P_Write_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_RficNRESDio_P_Write(IOHWAB_UINT8 SetValue) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_RficNRESDio_P_Write (returns application error)
 *********************************************************************************************************************/

  Dio_WriteChannel(DioConf_DioChannel_RFIC_NRES,SetValue);
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define IoHwAb_STOP_SEC_CODE
#include "IoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpIoHwAbDio_DioRead)  *********************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpIoHwAbPwm_PwmDutySet_doc)  *******************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpIoHwAbAdc_AdcRead)  *********************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpIoHwAbDio_DioRead_doc)  **********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpIoHwAbAdc_AdcRead_doc)  **********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpIoHwAbDio_DioWrite)  ********************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpIoHwAbPwm_PwmDutySet)  ******************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpIoHwAbDio_DioWrite_doc)  *********************/


/***  End of saved code  ************************************************************************************/
#endif


#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpPwmHsPwm3IpsIn1_PwmDutySet_doc)  *************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputD17_AdcRead_doc)  **************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputUAI87_AdcRead_doc)  ************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLINPwrIpsFaultRst_DioWrite_doc)  *************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN4EN_DioRead)  ************************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PF8_LIN4_EN);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpRegRst_DioWrite)  ***********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PD6_REG_RST,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputHsOut1IpsCurrentSense_AdcRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputHighSideOut3_AdcRead_doc)  *****/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputLsPwm2GateMonitoring_AdcRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpCAN5STB_DioRead)  ***********************/
    *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PE1_CAN5_STB);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN3Inh_DioRead)  ***********************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PH15_LIN3_INH);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputHsPwm1IpsCurrentSense_AdcRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpPwmLsPwm4Gate_PwmDutySet)  **************/
Pwm_SetDutyCycle(PwmConf_PwmChannelConfigSet_PwmChannel_LS_GATE4,PwmDuty);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputC4_AdcRead_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN6Inh_DioRead_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN6Inh_DioWrite)  **********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PA4_LIN6INH,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputHighSideOut4_AdcRead)  ****/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsOut3IpsInput0_DioRead)  ***************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PI11_HSOUT3_IPS_IN0);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpCAN5STB_DioRead_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpPwmLsPwm3Gate_PwmDutySet)  **************/
Pwm_SetDutyCycle(PwmConf_PwmChannelConfigSet_PwmChannel_LS_GATE3,PwmDuty);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputUAI81_AdcRead)  ***********/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputC22_AdcRead_doc)  **************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpIPSPwrSel0_DioWrite_doc)  ********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLINSecurityEN_DioRead)  *****************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PC12_LIN_SECURITY_EN);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputHsLin1IpsMultiSense_AdcRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpPwmHsPwm3IpsIn0_PwmDutySet_doc)  *************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN5EN_DioWrite)  ***********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PA15_LIN5EN,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpIPSComSen_DioWrite)  ********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PH11_IPS_COM_SEN,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsOut5IpsInput_DioRead)  ****************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PA3_HSOUT5_IN0);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpPwmLsPwm5Gate_PwmDutySet_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputD8_AdcRead_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputUAI75_AdcRead_doc)  ************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLINPwrIpsIn1_DioRead)  ******************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PA6_LINPWR_IN1);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputC20_AdcRead)  *************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpCAN3STB_DioRead_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpParkedPopUpCtrl_DioWrite_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpCAN4STB_DioWrite_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsPwm1IpsFault_DioWrite)  ***************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PD13_HSPWM1_FAULT,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputHighSideOut2_AdcRead_doc)  *****/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpRegRst_DioRead_doc)  *************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLINPwrIpsIn0_DioWrite_doc)  ******************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN6EN_DioRead_doc)  *************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputC21_AdcRead_doc)  **************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN3EN_DioRead_doc)  *************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLficNres_DioRead)  **********************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PG12_LFIC_NRES);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpIPSPwrSen_DioWrite)  ********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PC3_IPS_PWR_SEN,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLINPwrIpsFaultRst_DioWrite)  ************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PC2_LIN_PWR_FAULTRST,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputC5_AdcRead_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLINSecurityEN_DioWrite)  ****************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PC12_LIN_SECURITY_EN,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpPwmHsPwm1IpsIn0_PwmDutySet)  ************/
Pwm_SetDutyCycle(PwmConf_PwmChannelConfigSet_PwmChannel_HS_PWM1_IN0,PwmDuty);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpPwmLsPwm1Gate_PwmDutySet)  **************/
Pwm_SetDutyCycle(PwmConf_PwmChannelConfigSet_PwmChannel_LS_GATE1,PwmDuty);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLivingPopUpCtrl_DioWrite_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputCAN1TermintionL2_AdcRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputUAI72_AdcRead_doc)  ************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLINPwrIpsIn0_DioRead_doc)  *******************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN3EN_DioWrite_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputUAI76_AdcRead)  ***********/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN3Inh_DioRead_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputCAN1TermintionH1_AdcRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpIPSComSen_DioRead_doc)  **********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLivingPopUpCtrl_DioWrite)  **************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PI6_LIVING_POPUP_CTRL,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN1EN_DioWrite)  ***********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PH14_LIN1_EN,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLINSecurityEN_DioRead_doc)  ******************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_Pp12VDcDcEnable_DioRead_doc)  ******************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpCAN6STB_DioWrite)  **********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PE2_CAN6_STB,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_Pp12VDcDcEnable_DioWrite_doc)  *****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputHsOut5IpsCurrentSense_AdcRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLINPwrIpsIn0_DioWrite)  *****************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PA5_LINPWR_IN0,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpIPSComSel_DioRead_doc)  **********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN6EN_DioWrite)  ***********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PA14_LIN6EN,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpPwmLsPwm1Gate_PwmDutySet_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpCAN6STB_DioRead)  ***********************/
    *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PE2_CAN6_STB);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpCAN1STB_DioWrite)  **********************/
     Dio_WriteChannel(DioConf_DioChannel_Dio_PC9_CAN1STB,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpIPSComSen_DioWrite_doc)  *********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpRficRed_DioRead_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpRegRst_DioRead)  ************************/
*PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PD6_REG_RST);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpPwmHsPwm1IpsIn1_PwmDutySet_doc)  *************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpPwmLsPwm2Gate_PwmDutySet)  **************/
Pwm_SetDutyCycle(PwmConf_PwmChannelConfigSet_PwmChannel_LS_GATE2,PwmDuty);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpRficNres_DioWrite)  *********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PG10_RFIC_NRES,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputUAI82_AdcRead)  ***********/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpCAN5STB_DioWrite)  **********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PE1_CAN5_STB,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN3EN_DioWrite)  ***********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PE10_LIN3_EN,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN6Inh_DioWrite_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLivingPopUpCtrl_DioRead_doc)  ****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpIPSComSen_DioRead)  *********************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PH11_IPS_COM_SEN);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputBatteryMon_AdcRead_doc)  *******/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpCAN2STB_DioWrite_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLINPwrIpsFaultRst_DioRead_doc)  **************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsOut5IpsInput_DioWrite)  ***************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PA3_HSOUT5_IN0,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpIPSPwrSel0_DioRead)  ********************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PI5_IPS_PWR_SEL0);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpRficRed_DioWrite_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpCAN3STB_DioRead)  ***********************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PF9_CAN3_STB);
   
   
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN6Inh_DioRead)  ***********************/
    *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PA4_LIN6INH);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN5EN_DioRead)  ************************/
  *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PA15_LIN5EN);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsOut3IpsInput1_DioRead)  ***************/
  *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PI12_HSOUT3_IPS_IN1);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN4EN_DioWrite)  ***********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PF8_LIN4_EN,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN2Inh_DioWrite_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN6EN_DioWrite_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpRficRed_DioRead)  ***********************/
*PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PG11_RFICE_RED);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN6EN_DioRead)  ************************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PA14_LIN6EN);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpIPSPwrSen_DioRead)  *********************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PC3_IPS_PWR_SEN);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN4Inh_DioRead)  ***********************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PH13_LIN4_INH);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputC4_AdcRead)  **************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputC7_AdcRead)  **************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLINSecurityInh_DioWrite_doc)  ****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpCAN6STB_DioWrite_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpCAN2STB_DioWrite)  **********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PA2_CAN2STB,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpIPSPwrSel1_DioRead)  ********************/
    *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PI4_IPS_PWR_SEL1);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN3Inh_DioWrite_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsOut1IpsInput0_DioRead)  ***************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PD15_HSOUT1_IN0);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputC23_AdcRead)  *************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpIPSComSel_DioWrite_doc)  *********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN2EN_DioWrite_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsOut3IpsInput0_DioRead_doc)  ****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN2EN_DioRead_doc)  *************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpCAN6STB_DioRead_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputUAI72_AdcRead)  ***********/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpCAN4STB_DioWrite)  **********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PE11_CAN4_STB,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputLsPwm1GateMonitoring_AdcRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputC19_AdcRead)  *************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputC18_AdcRead)  *************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsOut1IpsInput0_DioWrite)  **************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PD15_HSOUT1_IN0,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpPwmLsPwm3Gate_PwmDutySet_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputUAI73_AdcRead)  ***********/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpIPSPwrSen_DioRead_doc)  **********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpParkedPopUpCtrl_DioRead_doc)  ****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsOut1IpsInput1_DioWrite_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLINPwrIpsIn0_DioRead)  ******************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PA5_LINPWR_IN0);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpIPSComSel_DioRead)  *********************/
     *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PH12_IPS_COM_SEL);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputHsOut3IpsCurrentSense_AdcRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsOut3IpsInput0_DioWrite)  **************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PI11_HSOUT3_IPS_IN0,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputHsPwm1IpsCurrentSense_AdcRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsOut1IpsFault_DioRead_doc)  *****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN1Inh_DioRead_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsOut1IpsInput1_DioWrite)  **************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PB15_HSOUT1_IN1,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsPwm3IpsFault_DioRead_doc)  *****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN1Inh_DioWrite_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN5Inh_DioRead_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsOut5IpsInput_DioWrite_doc)  ****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsOut5IpsInput_DioRead_doc)  *****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN2Inh_DioRead)  ***********************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PJ4_LIN2_INH);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN5Inh_DioRead)  ***********************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PE0_LIN5_INH);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputUAI76_AdcRead_doc)  ************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputHsOut3IpsCurrentSense_AdcRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputCAN1TermintionH2_AdcRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpRficNres_DioRead_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpCAN1STB_DioRead)  ***********************/
    *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PC9_CAN1STB);
 
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpRficNres_DioWrite_doc)  **********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpPwmHsPwm1IpsIn1_PwmDutySet)  ************/
Pwm_SetDutyCycle(PwmConf_PwmChannelConfigSet_PwmChannel_HS_PWM1_IN1,PwmDuty);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLivingPopUpCtrl_DioRead)  ***************/
    *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PI6_LIVING_POPUP_CTRL);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsPwm3IpsFault_DioRead)  ****************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PB14_HSPWM3_FAULT);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputHsLin1IpsMultiSense_AdcRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpCAN5STB_DioWrite_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN1EN_DioRead)  ************************/
  *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PH14_LIN1_EN);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpCAN3STB_DioWrite_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpRficNres_DioRead)  **********************/
*PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PG10_RFIC_NRES);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputC22_AdcRead)  *************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputC6_AdcRead)  **************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN5Inh_DioWrite_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputC20_AdcRead_doc)  **************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputHsPwm3IpsCurrentSense_AdcRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN2Inh_DioWrite)  **********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PJ4_LIN2_INH,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputCAN1TermintionH2_AdcRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputBatteryMon_AdcRead)  ******/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsOut1IpsInput1_DioRead)  ***************/
     *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PB15_HSOUT1_IN1);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputUAI73_AdcRead_doc)  ************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsPwm1IpsFault_DioRead_doc)  *****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputD8_AdcRead)  **************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLINSecurityInh_DioRead)  ****************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PC13_LIN_SECURITY_INH);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputLsPwm5GateMonitoring_AdcRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsOut3IpsInput1_DioWrite_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN1EN_DioWrite_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputLsPwm4GateMonitoring_AdcRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN3Inh_DioWrite)  **********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PH15_LIN3_INH,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsOut3IpsFault_DioRead)  ****************/
     *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PI13_HSOUT3_IPS_FAULT);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputLsPwm3GateMonitoring_AdcRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsOut3IpsFault_DioWrite_doc)  ****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputCAN1TermintionL2_AdcRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_Pp12VDcDcEnable_DioWrite)  ****************/
   Dio_WriteChannel(DioConf_DioChannel_Dio_PA12_12VDCDC_EN,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputLsPwm3GateMonitoring_AdcRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLficNres_DioWrite_doc)  **********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputLsPwm4GateMonitoring_AdcRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputHsOut1IpsCurrentSense_AdcRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpCAN3STB_DioWrite)  **********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PF9_CAN3_STB,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLficNres_DioWrite)  *********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PG12_LFIC_NRES,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpPwmHsPwm1IpsIn0_PwmDutySet_doc)  *************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsOut3IpsFault_DioWrite)  ***************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PI13_HSOUT3_IPS_FAULT,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpPwmLsPwm2Gate_PwmDutySet_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN2EN_DioRead)  ************************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PA0_LIN2EN);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsOut3IpsInput1_DioWrite)  **************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PI12_HSOUT3_IPS_IN1,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputLsPwm5GateMonitoring_AdcRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN4EN_DioWrite_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputHighSideOut3_AdcRead)  ****/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpCAN2STB_DioRead)  ***********************/
  *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PA2_CAN2STB);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpParkedPopUpCtrl_DioWrite)  **************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PI7_PARKED_POPUP_CTRL,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpIPSPwrSen_DioWrite_doc)  *********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpIPSPwrSel1_DioWrite)  *******************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PI4_IPS_PWR_SEL1,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpIPSPwrSel1_DioWrite_doc)  ********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsPwm3IpsFault_DioWrite_doc)  ****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpParkedPopUpCtrl_DioRead)  ***************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PI7_PARKED_POPUP_CTRL);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputC5_AdcRead)  **************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLINPwrIpsFaultRst_DioRead)  *************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PC2_LIN_PWR_FAULTRST);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN4EN_DioRead_doc)  *************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputCAN1TermintionL1_AdcRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsOut1IpsFault_DioRead)  ****************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PI8_HSOUT1_IPS_FAULT);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN2Inh_DioRead_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpCAN2STB_DioRead_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpPwmRegWdtOut_PwmDutySet)  ***************/
Pwm_SetDutyCycle(PwmConf_PwmChannelConfigSet_PwmChannel_REG_WDT_OUT,PwmDuty);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsOut1IpsFault_DioWrite_doc)  ****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsPwm1IpsFault_DioRead)  ****************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PD13_HSPWM1_FAULT);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN1Inh_DioWrite)  **********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PB3_LIN1INH,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_Pp12VDcDcEnable_DioRead)  *****************/
      *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PA12_12VDCDC_EN);
  
  
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputC21_AdcRead)  *************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpPwmHsPwm3IpsIn1_PwmDutySet)  ************/
Pwm_SetDutyCycle(PwmConf_PwmChannelConfigSet_PwmChannel_HS_PWM3_IN1,PwmDuty);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN1EN_DioRead_doc)  *************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN1Inh_DioRead)  ***********************/
  *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PB3_LIN1INH);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpCAN4STB_DioRead)  ***********************/
     *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PE11_CAN4_STB);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputC7_AdcRead_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsPwm1IpsFault_DioWrite_doc)  ****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputCAN1TermintionH1_AdcRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsPwm3IpsFault_DioWrite)  ***************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PB14_HSPWM3_FAULT,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN2EN_DioWrite)  ***********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PA0_LIN2EN,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputC18_AdcRead_doc)  **************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpIPSPwrSel1_DioRead_doc)  *********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputHighSideOut4_AdcRead_doc)  *****/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpIPSPwrSel0_DioWrite)  *******************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PI5_IPS_PWR_SEL0,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLINSecurityInh_DioWrite)  ***************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PC13_LIN_SECURITY_INH,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputUAI75_AdcRead)  ***********/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpPwmRegWdtOut_PwmDutySet_doc)  ****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsOut3IpsInput1_DioRead_doc)  ****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputUAI82_AdcRead_doc)  ************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN4Inh_DioWrite)  **********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PH13_LIN4_INH,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputUAI81_AdcRead_doc)  ************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN5EN_DioWrite_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputUAI87_AdcRead)  ***********/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputD17_AdcRead)  *************/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpHsOut1IpsFault_DioWrite)  ***************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PI8_HSOUT1_IPS_FAULT,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLficNres_DioRead_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputLsPwm2GateMonitoring_AdcRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputUAI74_AdcRead_doc)  ************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputHighSideOut2_AdcRead)  ****/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN5EN_DioRead_doc)  *************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN4Inh_DioWrite_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpIPSComSel_DioWrite)  ********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PH12_IPS_COM_SEL,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpCAN1STB_DioRead_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpCAN4STB_DioRead_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputC19_AdcRead_doc)  **************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpPwmHsPwm3IpsIn0_PwmDutySet)  ************/
Pwm_SetDutyCycle(PwmConf_PwmChannelConfigSet_PwmChannel_HS_PWM3_IN0,PwmDuty);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN5Inh_DioWrite)  **********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PE0_LIN5_INH,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsOut3IpsInput0_DioWrite_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsOut1IpsInput0_DioWrite_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLINPwrIpsIn1_DioRead_doc)  *******************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputCAN1TermintionL1_AdcRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputUAI74_AdcRead)  ***********/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpRegRst_DioWrite_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpIPSPwrSel0_DioRead_doc)  *********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLINPwrIpsIn1_DioWrite_doc)  ******************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputC23_AdcRead_doc)  **************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpAdcAnalogInputHsPwm3IpsCurrentSense_AdcRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputLsPwm1GateMonitoring_AdcRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLIN4Inh_DioRead_doc)  ************************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputC6_AdcRead_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsOut1IpsInput0_DioRead_doc)  ****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpPwmLsPwm4Gate_PwmDutySet_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpRficRed_DioWrite)  **********************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PG11_RFICE_RED,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsOut3IpsFault_DioRead_doc)  *****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLINSecurityEN_DioWrite_doc)  *****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpAdcAnalogInputHsOut5IpsCurrentSense_AdcRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpLINSecurityInh_DioRead_doc)  *****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLINPwrIpsIn1_DioWrite)  *****************/
Dio_WriteChannel(DioConf_DioChannel_Dio_PA6_LINPWR_IN1,PinValue);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpLIN3EN_DioRead)  ************************/
   *PinValue = Dio_ReadChannel(DioConf_DioChannel_Dio_PE10_LIN3_EN);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpCAN1STB_DioWrite_doc)  ***********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:IoHwAb_PpHsOut1IpsInput1_DioRead_doc)  ****************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:IoHwAb_PpPwmLsPwm5Gate_PwmDutySet)  **************/
Pwm_SetDutyCycle(PwmConf_PwmChannelConfigSet_PwmChannel_LS_GATE5,PwmDuty);
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
