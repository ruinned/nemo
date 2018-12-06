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
 *          File:  TSC_PVTApp_DobhsCtrlInterface.h
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
Debug_PVT_SCIM_Ctrl_BHS1_1 TSC_PVTApp_DobhsCtrlInterface_Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS1_1_Debug_PVT_SCIM_Ctrl_BHS1(void);
Debug_PVT_SCIM_Ctrl_BHS2_1 TSC_PVTApp_DobhsCtrlInterface_Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS2_1_Debug_PVT_SCIM_Ctrl_BHS2(void);
Debug_PVT_SCIM_Ctrl_BHS3_1 TSC_PVTApp_DobhsCtrlInterface_Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS3_1_Debug_PVT_SCIM_Ctrl_BHS3(void);
Debug_PVT_SCIM_Ctrl_BHS4_1 TSC_PVTApp_DobhsCtrlInterface_Rte_DRead_Debug_PVT_SCIM_Ctrl_BHS4_1_Debug_PVT_SCIM_Ctrl_BHS4(void);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS1_Fault_1_Debug_PVT_SCIM_RD_BHS1_Fault(Debug_PVT_SCIM_RD_BHS1_Fault_1 data);
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS1_Volt_1_Debug_PVT_SCIM_RD_BHS1_Volt(Debug_PVT_SCIM_RD_BHS1_Volt_1 data);
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS2_Fault_1_Debug_PVT_SCIM_RD_BHS2_Fault(Debug_PVT_SCIM_RD_BHS2_Fault_1 data);
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS2_Volt_1_Debug_PVT_SCIM_RD_BHS2_Volt(Debug_PVT_SCIM_RD_BHS2_Volt_1 data);
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS3_Fault_1_Debug_PVT_SCIM_RD_BHS3_Fault(Debug_PVT_SCIM_RD_BHS3_Fault_1 data);
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS3_Volt_1_Debug_PVT_SCIM_RD_BHS3_Volt(Debug_PVT_SCIM_RD_BHS3_Volt_1 data);
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS4_Fault_1_Debug_PVT_SCIM_RD_BHS4_Fault(Debug_PVT_SCIM_RD_BHS4_Fault_1 data);
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Write_Debug_PVT_SCIM_RD_BHS4_Volt_1_Debug_PVT_SCIM_RD_BHS4_Volt(Debug_PVT_SCIM_RD_BHS4_Volt_1 data);

/** Client server interfaces */
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_1_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus);
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_1_SetDobhsActive(IOHWAB_BOOL Activation);
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_2_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus);
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_2_SetDobhsActive(IOHWAB_BOOL Activation);
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_3_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus);
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_3_SetDobhsActive(IOHWAB_BOOL Activation);
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_4_GetDobhsPinState(IOHWAB_BOOL *IsDoActivated, IOHWAB_UINT16 *DoPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinDiagStatus *DiagStatus);
Std_ReturnType TSC_PVTApp_DobhsCtrlInterface_Rte_Call_DobhsCtrlInterface_P_4_SetDobhsActive(IOHWAB_BOOL Activation);




