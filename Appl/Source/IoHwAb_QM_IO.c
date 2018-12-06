/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  IoHwAb_QM_IO.c
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/A_SCIM_BP_181020_NewIoHwAb_00/SCIM_BP.dpa
 *     SW-C Type:  IoHwAb_QM_IO
 *  Generated at:  Sun Oct 21 19:53:43 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <IoHwAb_QM_IO>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_IoHwAb_QM_IO.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Adc.h"
#include "Dio.h"

#define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
#include "MemMap.h"

  Adc_ValueGroupType Adc0Input[18] = {0,};
  Adc_ValueGroupType Adc1Input[22] = {0,};

  uint8 Dio_PE6_CAPA_SNSR_OUT1OR2;
  uint8 Dio_PG11_RFICE_RED;

#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
#include "MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


#define IoHwAb_QM_IO_START_SEC_CODE
#include "IoHwAb_QM_IO_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_IoHwAb_QM_IO
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_IoHwAb_QM_IO_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, IoHwAb_QM_IO_CODE) Re_IoHwAb_QM_IO(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_IoHwAb_QM_IO
 *********************************************************************************************************************/

#if 0
  // Hw Trigger
  Adc_EnableHardwareTrigger(AdcConf_AdcGroup_AdcGroup_Adc0);
  Adc_EnableHardwareTrigger(AdcConf_AdcGroup_AdcGroup_Adc1);
#else
  // Sw Trigger


  if(Adc_GetGroupStatus(AdcConf_AdcGroup_AdcGroup_Adc0)== ADC_IDLE)
  {
    Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_Adc0, Adc0Input);
  }
  else
  {
    // MISRA rules
  }
  
  if(Adc_GetGroupStatus(AdcConf_AdcGroup_AdcGroup_Adc1)== ADC_IDLE)
  {
    Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_Adc1, Adc1Input);
  }
  else
  {
    // MISRA rules
  }


  if(Adc_GetGroupStatus(AdcConf_AdcGroup_AdcGroup_Adc0)!= ADC_BUSY)
  {
    Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_Adc0);
  }
  else
  {
    // MISRA rules
  }
  
  if(Adc_GetGroupStatus(AdcConf_AdcGroup_AdcGroup_Adc1)!= ADC_BUSY)
  {
    Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_Adc1);
  }
  else
  {
    // MISRA rules
  }
  
#endif

   Dio_PG11_RFICE_RED = Dio_ReadChannel(DioConf_DioChannel_Dio_PG11_RFICE_RED);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define IoHwAb_QM_IO_STOP_SEC_CODE
#include "IoHwAb_QM_IO_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
