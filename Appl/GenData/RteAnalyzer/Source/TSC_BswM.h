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
 *          File:  TSC_BswM.h
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
Std_ReturnType TSC_BswM_Rte_Read_Request_ESH_PostRunRequest_0_requestedMode(BswM_ESH_RunRequest *data);
Std_ReturnType TSC_BswM_Rte_Read_Request_ESH_PostRunRequest_1_requestedMode(BswM_ESH_RunRequest *data);
Std_ReturnType TSC_BswM_Rte_Read_Request_ESH_RunRequest_0_requestedMode(BswM_ESH_RunRequest *data);
Std_ReturnType TSC_BswM_Rte_Read_Request_ESH_RunRequest_1_requestedMode(BswM_ESH_RunRequest *data);
Std_ReturnType TSC_BswM_Rte_Read_Request_LIN1_ScheduleTableRequestMode_requestedMode(BswM_BswMRteMDG_LIN1Schedule *data);
Std_ReturnType TSC_BswM_Rte_Read_Request_LIN2_ScheduleTableRequestMode_requestedMode(BswM_BswMRteMDG_LIN2Schedule *data);
Std_ReturnType TSC_BswM_Rte_Read_Request_LIN3_ScheduleTableRequestMode_requestedMode(BswM_BswMRteMDG_LIN3Schedule *data);
Std_ReturnType TSC_BswM_Rte_Read_Request_LIN4_ScheduleTableRequestMode_requestedMode(BswM_BswMRteMDG_LIN4Schedule *data);
Std_ReturnType TSC_BswM_Rte_Read_Request_LIN5_ScheduleTableRequestMode_requestedMode(BswM_BswMRteMDG_LIN5Schedule *data);

/** Mode switches */
BswM_ESH_Mode TSC_BswM_Rte_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode(void);
Std_ReturnType TSC_BswM_Rte_Switch_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(BswM_ESH_Mode mode);




