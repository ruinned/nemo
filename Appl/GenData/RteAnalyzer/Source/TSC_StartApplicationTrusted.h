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
 *          File:  TSC_StartApplicationTrusted.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_StartApplicationTrusted_Rte_Read_PpTrustedData_DeValue(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_StartApplicationTrusted_Rte_Write_PpTrustedDataVerification_DeValue(uint8 data);
Std_ReturnType TSC_StartApplicationTrusted_Rte_Write_PpTrustedDataVerification_DeValue(uint8 data);

/** Explicit inter-runnable variables */
uint8 TSC_StartApplicationTrusted_Rte_IrvRead_StartApplicationTrusted_OnDataRec_TrustedData_IrvValue(void);
void TSC_StartApplicationTrusted_Rte_IrvWrite_StartApplicationTrusted_OnDataRec_TrustedData_IrvValue(uint8);
uint8 TSC_StartApplicationTrusted_Rte_IrvRead_StartApplicationTrusted_TriggerMemoryAccesViolation_IrvValue(void);
void TSC_StartApplicationTrusted_Rte_IrvWrite_StartApplicationTrusted_TriggerMemoryAccesViolation_IrvValue(uint8);




