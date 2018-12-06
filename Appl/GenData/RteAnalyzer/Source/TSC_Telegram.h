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
 *          File:  TSC_Telegram.h
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
Std_ReturnType TSC_Telegram_Rte_Read_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl(Debug_PVT_PEPS_Ant_Ctrl *data);
Std_ReturnType TSC_Telegram_Rte_Read_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl(Debug_PVT_PEPS_GainP1_Ctrl *data);
Std_ReturnType TSC_Telegram_Rte_Read_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl(Debug_PVT_PEPS_GainP2_Ctrl *data);
Std_ReturnType TSC_Telegram_Rte_Read_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl(Debug_PVT_PEPS_GainP3_Ctrl *data);
Std_ReturnType TSC_Telegram_Rte_Read_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl(Debug_PVT_PEPS_GainP4_Ctrl *data);
Std_ReturnType TSC_Telegram_Rte_Read_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl(Debug_PVT_PEPS_VDSI_Ctrl *data);
Std_ReturnType TSC_Telegram_Rte_Read_RficSysModeConfirm_P_SR_RficSysModeConfirm(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_Telegram_Rte_Write_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat(Debug_PVT_PEPS_AntCtrl_stat data);
Std_ReturnType TSC_Telegram_Rte_Write_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat(Debug_PVT_PEPS_GainP1_stat data);
Std_ReturnType TSC_Telegram_Rte_Write_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat(Debug_PVT_PEPS_GainP2_stat data);
Std_ReturnType TSC_Telegram_Rte_Write_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat(Debug_PVT_PEPS_GainP3_stat data);
Std_ReturnType TSC_Telegram_Rte_Write_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat(Debug_PVT_PEPS_GainP4_stat data);
Std_ReturnType TSC_Telegram_Rte_Write_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat(Debug_PVT_PEPS_Logic_stat data);
Std_ReturnType TSC_Telegram_Rte_Write_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI(Debug_PVT_PEPS_P1_MaxRSSI data);
Std_ReturnType TSC_Telegram_Rte_Write_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI(Debug_PVT_PEPS_P2_MaxRSSI data);
Std_ReturnType TSC_Telegram_Rte_Write_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI(Debug_PVT_PEPS_P3_MaxRSSI data);
Std_ReturnType TSC_Telegram_Rte_Write_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI(Debug_PVT_PEPS_P4_MaxRSSI data);
Std_ReturnType TSC_Telegram_Rte_Write_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat(Debug_PVT_PEPS_VDSI_stat data);

/** Client server interfaces */
Std_ReturnType TSC_Telegram_Rte_Call_LfICInit_P_CS(uint8 Gain_vehicleOption);
Std_ReturnType TSC_Telegram_Rte_Call_LficNRESDio_R_Write(IOHWAB_UINT8 SetValue);
Std_ReturnType TSC_Telegram_Rte_Call_RficInit_P_CS(void);
Std_ReturnType TSC_Telegram_Rte_Call_SearchSysMode_P_CS(uint8 RFIC_SystemMode, uint8 RFIC_ReqCmd);
Std_ReturnType TSC_Telegram_Rte_Call_SetupLfTelegram_P_CS(uint8 b_AntenaIndex, uint8 b_SearchPattern, uint16 Counter_LFRawDataBit, const uint8 *Buffer_LFRawData);
Std_ReturnType TSC_Telegram_Rte_Call_StopLfPeriodicTelegram_P_CS(void);
Std_ReturnType TSC_Telegram_Rte_Call_TimeoutTxTelegram_P_CS(void);
Std_ReturnType TSC_Telegram_Rte_Call_rficIRQActiveCheck_P_CS(uint8 kb_TerminalControlState);
Std_ReturnType TSC_Telegram_Rte_Call_rficIRQPendingCheck_P_CS(void);




