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
 *          File:  TSC_PVTApp_Do12VInterface.h
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
Debug_PVT_SCIM_Ctrl_12VDCDC_1 TSC_PVTApp_Do12VInterface_Rte_DRead_Debug_PVT_SCIM_Ctrl_12VDCDC_Debug_PVT_SCIM_Ctrl_12VDCDC(void);
Debug_PVT_SCIM_Ctrl_12VLiving_1 TSC_PVTApp_Do12VInterface_Rte_DRead_Debug_PVT_SCIM_Ctrl_12VLiving_Debug_PVT_SCIM_Ctrl_12VLiving(void);
Debug_PVT_SCIM_Ctrl_12VParked_1 TSC_PVTApp_Do12VInterface_Rte_DRead_Debug_PVT_SCIM_Ctrl_12VParked_Debug_PVT_SCIM_Ctrl_12VParked(void);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_PVTApp_Do12VInterface_Rte_Write_Debug_PVT_SCIM_RD_12VDCDCFault_Debug_PVT_SCIM_RD_12VDCDCFault(Debug_PVT_SCIM_RD_12VDCDCFault data);
Std_ReturnType TSC_PVTApp_Do12VInterface_Rte_Write_Debug_PVT_SCIM_RD_12VDCDCVolt_Debug_PVT_SCIM_RD_12VDCDCVolt(Debug_PVT_SCIM_RD_12VDCDCVolt data);
Std_ReturnType TSC_PVTApp_Do12VInterface_Rte_Write_Debug_PVT_SCIM_RD_VBAT_Debug_PVT_SCIM_RD_VBAT(Debug_PVT_SCIM_RD_VBAT_1 data);

/** Client server interfaces */
Std_ReturnType TSC_PVTApp_Do12VInterface_Rte_Call_Do12VInterface_P_GetDo12VPinsState(IOHWAB_UINT8 SelectParkedOrLivingPin, IOHWAB_BOOL *IsDo12VActivated, VGTT_EcuPinVoltage_0V2 *Do12VPinVoltage, IOHWAB_UINT16 *BatteryVoltage, VGTT_EcuPinVoltage_0V2 *DcdcRefVoltage, VGTT_EcuPinDiagStatus *DiagStatus);
Std_ReturnType TSC_PVTApp_Do12VInterface_Rte_Call_Do12VInterface_P_SetDcdc12VActive(IOHWAB_BOOL Activation);
Std_ReturnType TSC_PVTApp_Do12VInterface_Rte_Call_Do12VInterface_P_SetDo12VLivingActive(IOHWAB_BOOL Activation);
Std_ReturnType TSC_PVTApp_Do12VInterface_Rte_Call_Do12VInterface_P_SetDo12VParkedActive(IOHWAB_BOOL Activation);




