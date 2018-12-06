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
 *          File:  TSC_TP.h
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
Std_ReturnType TSC_TP_Rte_Read_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl(Debug_PVT_PEPS_AntP1_X_Ctrl *data);
Std_ReturnType TSC_TP_Rte_Read_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl(Debug_PVT_PEPS_AntP1_Y_Ctrl *data);
Std_ReturnType TSC_TP_Rte_Read_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl(Debug_PVT_PEPS_AntPi_X_Ctrl *data);
Std_ReturnType TSC_TP_Rte_Read_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl(Debug_PVT_PEPS_AntPi_Y_Ctrl *data);
Std_ReturnType TSC_TP_Rte_Read_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl(Debug_PVT_PEPS_Logic_Ctrl *data);
Std_ReturnType TSC_TP_Rte_Read_b_DST_ResponseNG_R_SR(uint8 *data);
Std_ReturnType TSC_TP_Rte_Read_b_DST_RxCompleteFlag_R_SR(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_TP_Rte_Write_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X(Debug_PVT_PEPS_AntP1_X data);
Std_ReturnType TSC_TP_Rte_Write_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y(Debug_PVT_PEPS_AntP1_Y data);
Std_ReturnType TSC_TP_Rte_Write_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X(Debug_PVT_PEPS_AntPi_X data);
Std_ReturnType TSC_TP_Rte_Write_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y(Debug_PVT_PEPS_AntPi_Y data);
Std_ReturnType TSC_TP_Rte_Write_b_DST_ResponseNG_P_SR(uint8 data);
Std_ReturnType TSC_TP_Rte_Write_b_DST_RxCompleteFlag_P_SR(uint8 data);
Std_ReturnType TSC_TP_Rte_Write_st_DstBlock_P_challenge(const uint8 *data);
Std_ReturnType TSC_TP_Rte_Write_st_DstBlock_P_encryption(const uint8 *data);
Std_ReturnType TSC_TP_Rte_Write_st_DstBlock_P_security_key_number(const uint8 *data);
Std_ReturnType TSC_TP_Rte_Write_st_DstBlock_P_vehicle_serial(const uint8 *data);
Std_ReturnType TSC_TP_Rte_Write_st_DstBlock_P_write_fob_number(uint8 data);

/** Client server interfaces */
Std_ReturnType TSC_TP_Rte_Call_SetupDST_Telegram_P_CS(uint8 dst_order);
Std_ReturnType TSC_TP_Rte_Call_TimeoutTxTelegram_P_CS(void);




