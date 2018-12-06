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
 *          File:  TSC_CDD_RFIC.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit write services */
Std_ReturnType TSC_CDD_RFIC_Rte_Write_RficSysModeConfirm_P_SR_RficSysModeConfirm(uint8 data);

/** Client server interfaces */
Std_ReturnType TSC_CDD_RFIC_Rte_Call_SetValidFobFoundResult_P_CS(uint8 fob_num);
Std_ReturnType TSC_CDD_RFIC_Rte_Call_CleaHighFixCheckTimer_P_CS(void);
Std_ReturnType TSC_CDD_RFIC_Rte_Call_RficICU_R_IcuDisableEdgeDetection(void);
Std_ReturnType TSC_CDD_RFIC_Rte_Call_RficICU_R_IcuDisableNotification(void);
Std_ReturnType TSC_CDD_RFIC_Rte_Call_RficICU_R_IcuEnableEdgeDetection(void);
Std_ReturnType TSC_CDD_RFIC_Rte_Call_RficICU_R_IcuEnableNotification(void);
Std_ReturnType TSC_CDD_RFIC_Rte_Call_RficNRESDio_R_Read(void);
Std_ReturnType TSC_CDD_RFIC_Rte_Call_RficNRESDio_R_Write(IOHWAB_UINT8 SetValue);
Std_ReturnType TSC_CDD_RFIC_Rte_Result_RficNRESDio_R_Read(IOHWAB_UINT8 *ReadValue);




