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
 *          File:  Rte_Cbk.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Callback header file
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CBK_H
# define _RTE_CBK_H

# include "Com.h"


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * COM Callbacks for Rx Indication
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_AntP1_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_fb66dba7_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_AntP1_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_76ee2645_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_AntPi_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_108c5adc_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_AntPi_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_9d04a73e_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_Ant_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f212143a_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_GainP1_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_7b701f8e_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_GainP2_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_36981fe9_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_GainP3_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_bb10e20b_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_GainP4_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_ad481f27_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_Logic_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f1a79db4_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_PEPS_VDSI_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_e74c4cec_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_12VDCDC_oDebugCtrl1_SCIM_BB2_oBackbone2_052e0dec_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_12VLiving_oDebugCtrl1_SCIM_BB2_oBackbone2_1cf3479b_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_12VParked_oDebugCtrl1_SCIM_BB2_oBackbone2_2cd9a2ad_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_BHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_e91d1062_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_BHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_b20aa177_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_BHS3_oDebugCtrl1_SCIM_BB2_oBackbone2_84f83184_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_BHS4_oDebugCtrl1_SCIM_BB2_oBackbone2_0425c35d_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_DAIPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_2731869d_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_LivingPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_666b21d3_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_ParkedPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_bf982706_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WHS1_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_aec1e12e_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WHS1_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_31c9eab2_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_a57cfe3c_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WHS2_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_e329e149_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WHS2_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_7c21ead5_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_fe6b4f29_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS1_Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_055e2012_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS1_Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_9a562b8e_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS1_oDebugCtrl2_SCIM_BB2_oBackbone2_56f82f7d_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS2Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_1529858b_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS2Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_8a218e17_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS2_oDebugCtrl2_SCIM_BB2_oBackbone2_0def9e68_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS3Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_95d99294_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS3Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_0ad19908_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Debug_PVT_SCIM_Ctrl_WLS3_oDebugCtrl2_SCIM_BB2_oBackbone2_3b1d0e9b_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoCCFW_oCCFWtoCIOM_L4_oLIN03_69083ad8_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoDLFW_oDLFWtoCIOM_L4_oLIN03_f14b1ebc_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoELCP1_oELCP1toCIOM_L4_oLIN03_e88000c8_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoELCP2_oELCP2toCIOM_L4_oLIN03_e304f264_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoILCP1_oILCP1toCIOM_L1_oLIN00_051a4e47_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoILCP2_oILCP2toCIOM_L4_oLIN03_df77e335_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoLECM2_oLECM2toCIOM_FR1_L1_oLIN00_427132ed_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoLECMBasic_oLECMBasic2CIOM_L1_oLIN00_209584a0_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoRCECS_oRCECStoCIOM_L5_oLIN04_46e60a03_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_DiagInfoTCP_oTCPtoMaster_oLIN02_23eac2a6_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_EngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP1DiagInfoL1_oFSP1_Frame_L1_oLIN00_f04712d6_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP1DiagInfoL2_oFSP1_Frame_L2_oLIN01_7f2a1c9e_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP1DiagInfoL3_oFSP1_Frame_L3_oLIN02_b1faa76e_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP1DiagInfoL4_oFSP1_Frame_L4_oLIN03_ba81064f_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP1DiagInfoL5_oFSP1_Frame_L5_oLIN04_733c79a6_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP1ResponseErrorL1_oFSP1_Frame_L1_oLIN00_b9e1fc6c_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP1ResponseErrorL2_oFSP1_Frame_L2_oLIN01_368cf224_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP1ResponseErrorL3_oFSP1_Frame_L3_oLIN02_f85c49d4_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP1ResponseErrorL4_oFSP1_Frame_L4_oLIN03_f327e8f5_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP1ResponseErrorL5_oFSP1_Frame_L5_oLIN04_3a9a971c_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP1SwitchStatusL2_oFSP1_Frame_L2_oLIN01_68e68ffa_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP1SwitchStatusL3_oFSP1_Frame_L3_oLIN02_a636340a_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP1SwitchStatusL4_oFSP1_Frame_L4_oLIN03_ad4d952b_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP1SwitchStatusL5_oFSP1_Frame_L5_oLIN04_64f0eac2_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP2DiagInfoL1_oFSP2_Frame_L1_oLIN00_f8caf847_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP2DiagInfoL2_oFSP2_Frame_L2_oLIN01_77a7f60f_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP2DiagInfoL3_oFSP2_Frame_L3_oLIN02_b9774dff_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP2ResponseErrorL1_oFSP2_Frame_L1_oLIN00_a793a78f_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP2ResponseErrorL2_oFSP2_Frame_L2_oLIN01_28fea9c7_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP2ResponseErrorL3_oFSP2_Frame_L3_oLIN02_e62e1237_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP2SwitchStatusL2_oFSP2_Frame_L2_oLIN01_611deb1e_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP2SwitchStatusL3_oFSP2_Frame_L3_oLIN02_afcd50ee_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP3DiagInfoL2_oFSP3_Frame_L2_oLIN01_c6f3adbf_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP3ResponseErrorL2_oFSP3_Frame_L2_oLIN01_22d09f66_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP3SwitchStatusL2_oFSP3_Frame_L2_oLIN01_664b3742_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP4DiagInfoL2_oFSP4_Frame_L2_oLIN01_66bc232d_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP4ResponseErrorL2_oFSP4_Frame_L2_oLIN01_141a1e01_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_FSP4SwitchStatusL2_oFSP4_Frame_L2_oLIN01_72eb22d6_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_AdjustButtonStatus_oRCECStoCIOM_L5_oLIN04_52fa0034_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BackButtonStatus_oRCECStoCIOM_L5_oLIN04_91249976_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BackLightDimming_Status_oELCP1toCIOM_L4_oLIN03_ff25f41e_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BlackPanelMode_ButtonStat_oELCP1toCIOM_L4_oLIN03_dece2221_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkBAudioOnOff_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_a735a09a_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkBIntLightActvnBtn_stat_oLECMBasic2CIOM_L1_oLIN00_5d53684c_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkBParkHeater_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_0c567d49_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkBTempDec_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_bad7c8e9_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkBTempInc_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_7521d3fe_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkBVolumeDown_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_c7ff11cb_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkBVolumeUp_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_4fd90c4b_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2AudioOnOff_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_8085e670_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2Fade_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_64ae31ec_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2IntLightActvnBtn_sta_oLECM2toCIOM_FR1_L1_oLIN00_7ae32ea6_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2IntLightDecBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_445fc32a_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2IntLightIncBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_a3c1ab0b_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2LockButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_d71d2857_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2OnOFF_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_6a259b90_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2ParkHeater_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_2be63ba3_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2Phone_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_99e0fe87_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2PowerWinCloseDSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_9fa2715d_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2PowerWinClosePSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_281d2c26_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2PowerWinOpenDSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_0df6d397_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2PowerWinOpenPSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_ca96c47e_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2RoofhatchCloseBtn_St_oLECM2toCIOM_FR1_L1_oLIN00_c184d263_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2RoofhatchOpenBtn_Sta_oLECM2toCIOM_FR1_L1_oLIN00_dd2458bc_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2TempDec_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_857664ae_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2TempInc_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_61f74d27_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2VolumeDown_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_e04f5721_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_BunkH2VolumeUp_ButtonStatu_oLECM2toCIOM_FR1_L1_oLIN00_92cefa8d_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_DRL_ButtonStatus_oELCP2toCIOM_L4_oLIN03_e8cb5735_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_DifflockDeactivationBtn_st_oDLFWtoCIOM_L4_oLIN03_7700113d_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_DifflockMode_Wheelstatus_oDLFWtoCIOM_L4_oLIN03_80a746c7_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_DoorAutoFuncBtn_stat_oILCP1toCIOM_L1_oLIN00_0dc2e67f_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_EscButtonMuddySiteStatus_oDLFWtoCIOM_L4_oLIN03_ac37f393_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_FCWPushButton_oCCFWtoCIOM_L4_oLIN03_242f5462_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_FogLightFront_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_e1a5bfc2_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_FogLightFront_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_ea214d6e_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_FogLightRear_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_14baadea_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_FogLightRear_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_1f3e5f46_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_HeadLampUpDown_SwitchStatu_oELCP2toCIOM_L4_oLIN03_ea48cea1_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtCenterBtnFreeWhl_s_oILCP2toCIOM_L4_oLIN03_27a7dc09_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtDimmingLvlDecBtn_s_oILCP1toCIOM_L1_oLIN00_0a50c243_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtDimmingLvlFreeWhl_s_oILCP2toCIOM_L4_oLIN03_9d9afdd7_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtDimmingLvlIncBtn_s_oILCP1toCIOM_L1_oLIN00_34c0f447_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtMaxModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_eeb895fc_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtModeSelrFreeWheel_s_oILCP1toCIOM_L1_oLIN00_98c2e509_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtNightModeBt2_s_oILCP2toCIOM_L4_oLIN03_c1a85f21_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_IntLghtRestModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_46e1f77a_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_LKSPushButton_oCCFWtoCIOM_L4_oLIN03_8e8e108b_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_LevelingThumbwheel_stat_oELCP1toCIOM_L4_oLIN03_cb03d712_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_LightMode_Status_1_oELCP1toCIOM_L4_oLIN03_c62c6da2_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_LightMode_Status_2_oELCP2toCIOM_L4_oLIN03_cda89f0e_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_MemButtonStatus_oRCECStoCIOM_L5_oLIN04_0975e3a6_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_Offroad_ButtonStatus_oDLFWtoCIOM_L4_oLIN03_2199360f_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_RearWorkProjector_BtnStat_oELCP2toCIOM_L4_oLIN03_bb9bb1f8_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_SelectButtonStatus_oRCECStoCIOM_L5_oLIN04_07d81d0f_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_SpeedControlModeButtonStat_oCCFWtoCIOM_L4_oLIN03_0f6013d7_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_SpeedControlModeWheelStat_oCCFWtoCIOM_L4_oLIN03_cc9e59ce_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_StopButtonStatus_oRCECStoCIOM_L5_oLIN04_c8659d40_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_TCP_ABS_ButtonStatus_oTCPtoMaster_oLIN02_7968eb64_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_TCP_ATC_ButtonStatus_oTCPtoMaster_oLIN02_dff3ccff_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_TCP_ESC_ButtonStatus_oTCPtoMaster_oLIN02_e4eaf9d3_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_TCP_KnobPostionStatus_oTCPtoMaster_oLIN02_d1058f2b_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_TCP_TCS_ButtonStatus_oTCPtoMaster_oLIN02_fa9712f2_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_WRDownButtonStatus_oRCECStoCIOM_L5_oLIN04_48a8dab2_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_LIN_WRUpButtonStatus_oRCECStoCIOM_L5_oLIN04_a2873536_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorCCFW_oCCFWtoCIOM_L4_oLIN03_38ff59f8_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorDLFW_oDLFWtoCIOM_L4_oLIN03_a0bc7d9c_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorELCP1_oELCP1toCIOM_L4_oLIN03_a9bf457f_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorELCP2_oELCP2toCIOM_L4_oLIN03_a23bb7d3_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorILCP1_oILCP1toCIOM_L1_oLIN00_44250bf0_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorILCP2_oILCP2toCIOM_L4_oLIN03_9e48a682_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorLECM2_oLECM2toCIOM_FR1_L1_oLIN00_ed8050df_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorLECMBasic_oLECMBasic2CIOM_L1_oLIN00_9a0b7e5e_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorRCECS_oRCECStoCIOM_L5_oLIN04_07d94fb4_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_ResponseErrorTCP_oTCPtoMaster_oLIN02_2075be52_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SG_LIN_AlmClkSetCurAlm_rqst_sg_oLECM2toCIOM_FR1_L1_oLIN00_05d68799_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SG_LIN_BunkH2PHTi_rqs_sg_oLECM2toCIOM_FR3_L1_oLIN00_0bf5fe80_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded1L1_oFSP1_Frame_L1_oLIN00_099b825d_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded1L2_oFSP1_Frame_L2_oLIN01_86f68c15_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded1L3_oFSP1_Frame_L3_oLIN02_482637e5_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded1L4_oFSP1_Frame_L4_oLIN03_435d96c4_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded1L5_oFSP1_Frame_L5_oLIN04_8ae0e92d_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded2L1_oFSP2_Frame_L1_oLIN00_6fec6f8a_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded2L2_oFSP2_Frame_L2_oLIN01_e08161c2_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded2L3_oFSP2_Frame_L3_oLIN02_2e51da32_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded3L2_oFSP3_Frame_L2_oLIN01_c2ac3a8f_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionNeeded4L2_oFSP4_Frame_L2_oLIN01_2c6eba6c_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp1L1_oFSP1_SwitchDetResp_L1_oLIN00_e8a163d5_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp1L2_oFSP1_SwitchDetResp_L2_oLIN01_02016dd3_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp1L3_oFSP1_SwitchDetResp_L3_oLIN02_5945d426_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp1L4_oFSP1_SwitchDetResp_L4_oLIN03_0c30779e_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp1L5_oFSP1_SwitchDetResp_L5_oLIN04_50190a72_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp2L1_oFSP2_SwitchDetResp_L1_oLIN00_865b6493_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp2L2_oFSP2_SwitchDetResp_L2_oLIN01_6cfb6a95_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp2L3_oFSP2_SwitchDetResp_L3_oLIN02_37bfd360_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp3L2_oFSP3_SwitchDetResp_L2_oLIN01_ff826a68_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_SwitchDetectionResp4L2_oFSP4_SwitchDetResp_L2_oLIN01_b10f6419_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 * COM Callbacks for Rx Timeout Notification
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_DiagInfoILCP1_oILCP1toCIOM_L1_oLIN00_051a4e47_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_FSP1DiagInfoL1_oFSP1_Frame_L1_oLIN00_f04712d6_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_FSP1ResponseErrorL1_oFSP1_Frame_L1_oLIN00_b9e1fc6c_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_FSP2DiagInfoL1_oFSP2_Frame_L1_oLIN00_f8caf847_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_FSP2ResponseErrorL1_oFSP2_Frame_L1_oLIN00_a793a78f_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_LIN_DoorAutoFuncBtn_stat_oILCP1toCIOM_L1_oLIN00_0dc2e67f_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_LIN_IntLghtDimmingLvlDecBtn_s_oILCP1toCIOM_L1_oLIN00_0a50c243_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_LIN_IntLghtDimmingLvlIncBtn_s_oILCP1toCIOM_L1_oLIN00_34c0f447_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_LIN_IntLghtModeSelrFreeWheel_s_oILCP1toCIOM_L1_oLIN00_98c2e509_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_ResponseErrorILCP1_oILCP1toCIOM_L1_oLIN00_44250bf0_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_SwitchDetectionNeeded1L1_oFSP1_Frame_L1_oLIN00_099b825d_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbkRxTOut_SwitchDetectionNeeded2L1_oFSP2_Frame_L1_oLIN00_6fec6f8a_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 * RTE Schedulable entity for COM-Access from different partitions
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_ComSendSignalProxyPeriodic(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* _RTE_CBK_H */
