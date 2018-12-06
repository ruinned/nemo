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
 *          File:  TSC_CDD_RFIC.c
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_CDD_RFIC.h"
#include "TSC_CDD_RFIC.h"











Std_ReturnType TSC_CDD_RFIC_Rte_Write_RficSysModeConfirm_P_SR_RficSysModeConfirm(uint8 data)
{
  return Rte_Write_RficSysModeConfirm_P_SR_RficSysModeConfirm(data);
}





     /* Client Server Interfaces: */
Std_ReturnType TSC_CDD_RFIC_Rte_Call_SetValidFobFoundResult_P_CS(uint8 fob_num)
{
  return Rte_Call_SetValidFobFoundResult_P_CS(fob_num);
}


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */
Std_ReturnType TSC_CDD_RFIC_Rte_Call_CleaHighFixCheckTimer_P_CS(void)
{
  return Rte_Call_CleaHighFixCheckTimer_P_CS();
}


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */
Std_ReturnType TSC_CDD_RFIC_Rte_Call_RficICU_R_IcuDisableEdgeDetection(void)
{
  return Rte_Call_RficICU_R_IcuDisableEdgeDetection();
}
Std_ReturnType TSC_CDD_RFIC_Rte_Call_RficICU_R_IcuDisableNotification(void)
{
  return Rte_Call_RficICU_R_IcuDisableNotification();
}
Std_ReturnType TSC_CDD_RFIC_Rte_Call_RficICU_R_IcuEnableEdgeDetection(void)
{
  return Rte_Call_RficICU_R_IcuEnableEdgeDetection();
}
Std_ReturnType TSC_CDD_RFIC_Rte_Call_RficICU_R_IcuEnableNotification(void)
{
  return Rte_Call_RficICU_R_IcuEnableNotification();
}
Std_ReturnType TSC_CDD_RFIC_Rte_Call_RficNRESDio_R_Read(void)
{
  return Rte_Call_RficNRESDio_R_Read();
}
Std_ReturnType TSC_CDD_RFIC_Rte_Call_RficNRESDio_R_Write(IOHWAB_UINT8 SetValue)
{
  return Rte_Call_RficNRESDio_R_Write(SetValue);
}

Std_ReturnType TSC_CDD_RFIC_Rte_Result_RficNRESDio_R_Read(IOHWAB_UINT8 *ReadValue)
{
  return Rte_Result_RficNRESDio_R_Read(ReadValue);
}

     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */







     /* CDD_RFIC */
      /* CDD_RFIC */



