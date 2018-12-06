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
 *          File:  TSC_CDD_LFIC.h
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
Std_ReturnType TSC_CDD_LFIC_Rte_Read_st_DstBlock_P_challenge(uint8 *data);
Std_ReturnType TSC_CDD_LFIC_Rte_Read_st_DstBlock_P_encryption(uint8 *data);
Std_ReturnType TSC_CDD_LFIC_Rte_Read_st_DstBlock_P_security_key_number(uint8 *data);
Std_ReturnType TSC_CDD_LFIC_Rte_Read_st_DstBlock_P_vehicle_serial(uint8 *data);
Std_ReturnType TSC_CDD_LFIC_Rte_Read_st_DstBlock_P_write_fob_number(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_CDD_LFIC_Rte_Write_b_DST_ResponseNG_P_SR(uint8 data);
Std_ReturnType TSC_CDD_LFIC_Rte_Write_b_DST_RxCompleteFlag_P_SR(uint8 data);

/** Client server interfaces */
Std_ReturnType TSC_CDD_LFIC_Rte_Call_LficICU_R_IcuDisableEdgeDetection(void);
Std_ReturnType TSC_CDD_LFIC_Rte_Call_LficICU_R_IcuDisableNotification(void);
Std_ReturnType TSC_CDD_LFIC_Rte_Call_LficICU_R_IcuEnableEdgeDetection(void);
Std_ReturnType TSC_CDD_LFIC_Rte_Call_LficICU_R_IcuEnableNotification(void);
Std_ReturnType TSC_CDD_LFIC_Rte_Call_LficNRESDio_R_Read(IOHWAB_UINT8 *ReadValue);
Std_ReturnType TSC_CDD_LFIC_Rte_Call_LficNRESDio_R_Write(IOHWAB_UINT8 SetValue);




