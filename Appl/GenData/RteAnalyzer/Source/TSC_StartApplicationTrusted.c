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
 *          File:  TSC_StartApplicationTrusted.c
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_StartApplicationTrusted.h"
#include "TSC_StartApplicationTrusted.h"








Std_ReturnType TSC_StartApplicationTrusted_Rte_Read_PpTrustedData_DeValue(uint8 *data)
{
  return Rte_Read_PpTrustedData_DeValue(data);
}




Std_ReturnType TSC_StartApplicationTrusted_Rte_Write_PpTrustedDataVerification_DeValue(uint8 data)
{
  return Rte_Write_PpTrustedDataVerification_DeValue(data);
}





     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */
uint8 TSC_StartApplicationTrusted_Rte_IrvRead_StartApplicationTrusted_OnDataRec_TrustedData_IrvValue(void)
{
return Rte_IrvRead_StartApplicationTrusted_OnDataRec_TrustedData_IrvValue();
}

void TSC_StartApplicationTrusted_Rte_IrvWrite_StartApplicationTrusted_OnDataRec_TrustedData_IrvValue(uint8 data)
{
  Rte_IrvWrite_StartApplicationTrusted_OnDataRec_TrustedData_IrvValue( data);
}












     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */
uint8 TSC_StartApplicationTrusted_Rte_IrvRead_StartApplicationTrusted_TriggerMemoryAccesViolation_IrvValue(void)
{
return Rte_IrvRead_StartApplicationTrusted_TriggerMemoryAccesViolation_IrvValue();
}

void TSC_StartApplicationTrusted_Rte_IrvWrite_StartApplicationTrusted_TriggerMemoryAccesViolation_IrvValue(uint8 data)
{
  Rte_IrvWrite_StartApplicationTrusted_TriggerMemoryAccesViolation_IrvValue( data);
}






     /* StartApplicationTrusted */
      /* StartApplicationTrusted */



