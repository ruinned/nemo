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
 *          File:  Rte_TestLin.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <TestLin>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TESTLIN_H
# define _RTE_TESTLIN_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_TestLin_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(DiagInfoCCFW, RTE_VAR_INIT) Rte_DiagInfoCCFW_oCCFWtoCIOM_L4_oLIN03_69083ad8_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagInfoDLFW, RTE_VAR_INIT) Rte_DiagInfoDLFW_oDLFWtoCIOM_L4_oLIN03_f14b1ebc_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagInfoELCP1, RTE_VAR_INIT) Rte_DiagInfoELCP1_oELCP1toCIOM_L4_oLIN03_e88000c8_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagInfoELCP2, RTE_VAR_INIT) Rte_DiagInfoELCP2_oELCP2toCIOM_L4_oLIN03_e304f264_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagInfoILCP2, RTE_VAR_INIT) Rte_DiagInfoILCP2_oILCP2toCIOM_L4_oLIN03_df77e335_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagInfoLECM2, RTE_VAR_INIT) Rte_DiagInfoLECM2_oLECM2toCIOM_FR1_L1_oLIN00_427132ed_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagInfoLECMBasic, RTE_VAR_INIT) Rte_DiagInfoLECMBasic_oLECMBasic2CIOM_L1_oLIN00_209584a0_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagInfoRCECS, RTE_VAR_INIT) Rte_DiagInfoRCECS_oRCECStoCIOM_L5_oLIN04_46e60a03_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(DiagInfoTCP, RTE_VAR_INIT) Rte_DiagInfoTCP_oTCPtoMaster_oLIN02_23eac2a6_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP1DiagInfoL2, RTE_VAR_INIT) Rte_FSP1DiagInfoL2_oFSP1_Frame_L2_oLIN01_7f2a1c9e_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP1DiagInfoL3, RTE_VAR_INIT) Rte_FSP1DiagInfoL3_oFSP1_Frame_L3_oLIN02_b1faa76e_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP1DiagInfoL4, RTE_VAR_INIT) Rte_FSP1DiagInfoL4_oFSP1_Frame_L4_oLIN03_ba81064f_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP1DiagInfoL5, RTE_VAR_INIT) Rte_FSP1DiagInfoL5_oFSP1_Frame_L5_oLIN04_733c79a6_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP1ResponseErrorL2, RTE_VAR_INIT) Rte_FSP1ResponseErrorL2_oFSP1_Frame_L2_oLIN01_368cf224_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP1ResponseErrorL3, RTE_VAR_INIT) Rte_FSP1ResponseErrorL3_oFSP1_Frame_L3_oLIN02_f85c49d4_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP1ResponseErrorL4, RTE_VAR_INIT) Rte_FSP1ResponseErrorL4_oFSP1_Frame_L4_oLIN03_f327e8f5_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP1ResponseErrorL5, RTE_VAR_INIT) Rte_FSP1ResponseErrorL5_oFSP1_Frame_L5_oLIN04_3a9a971c_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP1SwitchStatusL2, RTE_VAR_INIT) Rte_FSP1SwitchStatusL2_oFSP1_Frame_L2_oLIN01_68e68ffa_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP1SwitchStatusL3, RTE_VAR_INIT) Rte_FSP1SwitchStatusL3_oFSP1_Frame_L3_oLIN02_a636340a_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP1SwitchStatusL4, RTE_VAR_INIT) Rte_FSP1SwitchStatusL4_oFSP1_Frame_L4_oLIN03_ad4d952b_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP1SwitchStatusL5, RTE_VAR_INIT) Rte_FSP1SwitchStatusL5_oFSP1_Frame_L5_oLIN04_64f0eac2_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP2DiagInfoL2, RTE_VAR_INIT) Rte_FSP2DiagInfoL2_oFSP2_Frame_L2_oLIN01_77a7f60f_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP2DiagInfoL3, RTE_VAR_INIT) Rte_FSP2DiagInfoL3_oFSP2_Frame_L3_oLIN02_b9774dff_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP2ResponseErrorL2, RTE_VAR_INIT) Rte_FSP2ResponseErrorL2_oFSP2_Frame_L2_oLIN01_28fea9c7_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP2ResponseErrorL3, RTE_VAR_INIT) Rte_FSP2ResponseErrorL3_oFSP2_Frame_L3_oLIN02_e62e1237_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP2SwitchStatusL2, RTE_VAR_INIT) Rte_FSP2SwitchStatusL2_oFSP2_Frame_L2_oLIN01_611deb1e_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP2SwitchStatusL3, RTE_VAR_INIT) Rte_FSP2SwitchStatusL3_oFSP2_Frame_L3_oLIN02_afcd50ee_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP3DiagInfoL2, RTE_VAR_INIT) Rte_FSP3DiagInfoL2_oFSP3_Frame_L2_oLIN01_c6f3adbf_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP3ResponseErrorL2, RTE_VAR_INIT) Rte_FSP3ResponseErrorL2_oFSP3_Frame_L2_oLIN01_22d09f66_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP3SwitchStatusL2, RTE_VAR_INIT) Rte_FSP3SwitchStatusL2_oFSP3_Frame_L2_oLIN01_664b3742_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP4DiagInfoL2, RTE_VAR_INIT) Rte_FSP4DiagInfoL2_oFSP4_Frame_L2_oLIN01_66bc232d_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP4ResponseErrorL2, RTE_VAR_INIT) Rte_FSP4ResponseErrorL2_oFSP4_Frame_L2_oLIN01_141a1e01_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FSP4SwitchStatusL2, RTE_VAR_INIT) Rte_FSP4SwitchStatusL2_oFSP4_Frame_L2_oLIN01_72eb22d6_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_AdjustButtonStatus, RTE_VAR_INIT) Rte_LIN_AdjustButtonStatus_oRCECStoCIOM_L5_oLIN04_52fa0034_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BackButtonStatus, RTE_VAR_INIT) Rte_LIN_BackButtonStatus_oRCECStoCIOM_L5_oLIN04_91249976_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BackLightDimming_Status, RTE_VAR_INIT) Rte_LIN_BackLightDimming_Status_oELCP1toCIOM_L4_oLIN03_ff25f41e_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BlackPanelMode_ButtonStat, RTE_VAR_INIT) Rte_LIN_BlackPanelMode_ButtonStat_oELCP1toCIOM_L4_oLIN03_dece2221_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkBAudioOnOff_ButtonStat, RTE_VAR_INIT) Rte_LIN_BunkBAudioOnOff_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_a735a09a_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkBIntLightActvnBtn_stat, RTE_VAR_INIT) Rte_LIN_BunkBIntLightActvnBtn_stat_oLECMBasic2CIOM_L1_oLIN00_5d53684c_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkBParkHeater_ButtonStat, RTE_VAR_INIT) Rte_LIN_BunkBParkHeater_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_0c567d49_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkBTempDec_ButtonStat, RTE_VAR_INIT) Rte_LIN_BunkBTempDec_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_bad7c8e9_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkBTempInc_ButtonStat, RTE_VAR_INIT) Rte_LIN_BunkBTempInc_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_7521d3fe_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkBVolumeDown_ButtonStat, RTE_VAR_INIT) Rte_LIN_BunkBVolumeDown_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_c7ff11cb_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkBVolumeUp_ButtonStat, RTE_VAR_INIT) Rte_LIN_BunkBVolumeUp_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_4fd90c4b_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2AudioOnOff_ButtonSta, RTE_VAR_INIT) Rte_LIN_BunkH2AudioOnOff_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_8085e670_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2Fade_ButtonStatus, RTE_VAR_INIT) Rte_LIN_BunkH2Fade_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_64ae31ec_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2IntLightActvnBtn_sta, RTE_VAR_INIT) Rte_LIN_BunkH2IntLightActvnBtn_sta_oLECM2toCIOM_FR1_L1_oLIN00_7ae32ea6_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2IntLightDecBtn_stat, RTE_VAR_INIT) Rte_LIN_BunkH2IntLightDecBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_445fc32a_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2IntLightIncBtn_stat, RTE_VAR_INIT) Rte_LIN_BunkH2IntLightIncBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_a3c1ab0b_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2LockButtonStatus, RTE_VAR_INIT) Rte_LIN_BunkH2LockButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_d71d2857_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2OnOFF_ButtonStatus, RTE_VAR_INIT) Rte_LIN_BunkH2OnOFF_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_6a259b90_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2ParkHeater_ButtonSta, RTE_VAR_INIT) Rte_LIN_BunkH2ParkHeater_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_2be63ba3_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2Phone_ButtonStatus, RTE_VAR_INIT) Rte_LIN_BunkH2Phone_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_99e0fe87_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2PowerWinCloseDSBtn_s, RTE_VAR_INIT) Rte_LIN_BunkH2PowerWinCloseDSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_9fa2715d_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2PowerWinClosePSBtn_s, RTE_VAR_INIT) Rte_LIN_BunkH2PowerWinClosePSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_281d2c26_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2PowerWinOpenDSBtn_st, RTE_VAR_INIT) Rte_LIN_BunkH2PowerWinOpenDSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_0df6d397_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2PowerWinOpenPSBtn_st, RTE_VAR_INIT) Rte_LIN_BunkH2PowerWinOpenPSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_ca96c47e_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2RoofhatchCloseBtn_St, RTE_VAR_INIT) Rte_LIN_BunkH2RoofhatchCloseBtn_St_oLECM2toCIOM_FR1_L1_oLIN00_c184d263_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2RoofhatchOpenBtn_Sta, RTE_VAR_INIT) Rte_LIN_BunkH2RoofhatchOpenBtn_Sta_oLECM2toCIOM_FR1_L1_oLIN00_dd2458bc_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2TempDec_ButtonStatus, RTE_VAR_INIT) Rte_LIN_BunkH2TempDec_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_857664ae_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2TempInc_ButtonStatus, RTE_VAR_INIT) Rte_LIN_BunkH2TempInc_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_61f74d27_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2VolumeDown_ButtonSta, RTE_VAR_INIT) Rte_LIN_BunkH2VolumeDown_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_e04f5721_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_BunkH2VolumeUp_ButtonStatu, RTE_VAR_INIT) Rte_LIN_BunkH2VolumeUp_ButtonStatu_oLECM2toCIOM_FR1_L1_oLIN00_92cefa8d_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_DRL_ButtonStatus, RTE_VAR_INIT) Rte_LIN_DRL_ButtonStatus_oELCP2toCIOM_L4_oLIN03_e8cb5735_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_DifflockDeactivationBtn_st, RTE_VAR_INIT) Rte_LIN_DifflockDeactivationBtn_st_oDLFWtoCIOM_L4_oLIN03_7700113d_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_DifflockMode_Wheelstatus, RTE_VAR_INIT) Rte_LIN_DifflockMode_Wheelstatus_oDLFWtoCIOM_L4_oLIN03_80a746c7_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_EscButtonMuddySiteStatus, RTE_VAR_INIT) Rte_LIN_EscButtonMuddySiteStatus_oDLFWtoCIOM_L4_oLIN03_ac37f393_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_FCWPushButton, RTE_VAR_INIT) Rte_LIN_FCWPushButton_oCCFWtoCIOM_L4_oLIN03_242f5462_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_FogLightFront_ButtonStat_1, RTE_VAR_INIT) Rte_LIN_FogLightFront_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_e1a5bfc2_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_FogLightFront_ButtonStat_2, RTE_VAR_INIT) Rte_LIN_FogLightFront_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_ea214d6e_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_FogLightRear_ButtonStat_1, RTE_VAR_INIT) Rte_LIN_FogLightRear_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_14baadea_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_FogLightRear_ButtonStat_2, RTE_VAR_INIT) Rte_LIN_FogLightRear_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_1f3e5f46_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_HeadLampUpDown_SwitchStatu, RTE_VAR_INIT) Rte_LIN_HeadLampUpDown_SwitchStatu_oELCP2toCIOM_L4_oLIN03_ea48cea1_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_IntLghtCenterBtnFreeWhl_s, RTE_VAR_INIT) Rte_LIN_IntLghtCenterBtnFreeWhl_s_oILCP2toCIOM_L4_oLIN03_27a7dc09_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_IntLghtDimmingLvlFreeWhl_s, RTE_VAR_INIT) Rte_LIN_IntLghtDimmingLvlFreeWhl_s_oILCP2toCIOM_L4_oLIN03_9d9afdd7_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_IntLghtMaxModeBtnPnl2_s, RTE_VAR_INIT) Rte_LIN_IntLghtMaxModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_eeb895fc_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_IntLghtNightModeBt2_s, RTE_VAR_INIT) Rte_LIN_IntLghtNightModeBt2_s_oILCP2toCIOM_L4_oLIN03_c1a85f21_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_IntLghtRestModeBtnPnl2_s, RTE_VAR_INIT) Rte_LIN_IntLghtRestModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_46e1f77a_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_LKSPushButton, RTE_VAR_INIT) Rte_LIN_LKSPushButton_oCCFWtoCIOM_L4_oLIN03_8e8e108b_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_LevelingThumbwheel_stat, RTE_VAR_INIT) Rte_LIN_LevelingThumbwheel_stat_oELCP1toCIOM_L4_oLIN03_cb03d712_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_LightMode_Status_1, RTE_VAR_INIT) Rte_LIN_LightMode_Status_1_oELCP1toCIOM_L4_oLIN03_c62c6da2_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_LightMode_Status_2, RTE_VAR_INIT) Rte_LIN_LightMode_Status_2_oELCP2toCIOM_L4_oLIN03_cda89f0e_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_MemButtonStatus, RTE_VAR_INIT) Rte_LIN_MemButtonStatus_oRCECStoCIOM_L5_oLIN04_0975e3a6_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_Offroad_ButtonStatus, RTE_VAR_INIT) Rte_LIN_Offroad_ButtonStatus_oDLFWtoCIOM_L4_oLIN03_2199360f_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_RearWorkProjector_BtnStat, RTE_VAR_INIT) Rte_LIN_RearWorkProjector_BtnStat_oELCP2toCIOM_L4_oLIN03_bb9bb1f8_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_SelectButtonStatus, RTE_VAR_INIT) Rte_LIN_SelectButtonStatus_oRCECStoCIOM_L5_oLIN04_07d81d0f_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_SpeedControlModeButtonStat, RTE_VAR_INIT) Rte_LIN_SpeedControlModeButtonStat_oCCFWtoCIOM_L4_oLIN03_0f6013d7_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_SpeedControlModeWheelStat, RTE_VAR_INIT) Rte_LIN_SpeedControlModeWheelStat_oCCFWtoCIOM_L4_oLIN03_cc9e59ce_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_StopButtonStatus, RTE_VAR_INIT) Rte_LIN_StopButtonStatus_oRCECStoCIOM_L5_oLIN04_c8659d40_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_TCP_ABS_ButtonStatus, RTE_VAR_INIT) Rte_LIN_TCP_ABS_ButtonStatus_oTCPtoMaster_oLIN02_7968eb64_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_TCP_ATC_ButtonStatus, RTE_VAR_INIT) Rte_LIN_TCP_ATC_ButtonStatus_oTCPtoMaster_oLIN02_dff3ccff_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_TCP_ESC_ButtonStatus, RTE_VAR_INIT) Rte_LIN_TCP_ESC_ButtonStatus_oTCPtoMaster_oLIN02_e4eaf9d3_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_TCP_KnobPostionStatus, RTE_VAR_INIT) Rte_LIN_TCP_KnobPostionStatus_oTCPtoMaster_oLIN02_d1058f2b_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_TCP_TCS_ButtonStatus, RTE_VAR_INIT) Rte_LIN_TCP_TCS_ButtonStatus_oTCPtoMaster_oLIN02_fa9712f2_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_WRDownButtonStatus, RTE_VAR_INIT) Rte_LIN_WRDownButtonStatus_oRCECStoCIOM_L5_oLIN04_48a8dab2_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LIN_WRUpButtonStatus, RTE_VAR_INIT) Rte_LIN_WRUpButtonStatus_oRCECStoCIOM_L5_oLIN04_a2873536_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(ResponseErrorCCFW, RTE_VAR_INIT) Rte_ResponseErrorCCFW_oCCFWtoCIOM_L4_oLIN03_38ff59f8_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(ResponseErrorDLFW, RTE_VAR_INIT) Rte_ResponseErrorDLFW_oDLFWtoCIOM_L4_oLIN03_a0bc7d9c_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(ResponseErrorELCP1, RTE_VAR_INIT) Rte_ResponseErrorELCP1_oELCP1toCIOM_L4_oLIN03_a9bf457f_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(ResponseErrorELCP2, RTE_VAR_INIT) Rte_ResponseErrorELCP2_oELCP2toCIOM_L4_oLIN03_a23bb7d3_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(ResponseErrorILCP2, RTE_VAR_INIT) Rte_ResponseErrorILCP2_oILCP2toCIOM_L4_oLIN03_9e48a682_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(ResponseErrorLECM2, RTE_VAR_INIT) Rte_ResponseErrorLECM2_oLECM2toCIOM_FR1_L1_oLIN00_ed8050df_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(ResponseErrorLECMBasic, RTE_VAR_INIT) Rte_ResponseErrorLECMBasic_oLECMBasic2CIOM_L1_oLIN00_9a0b7e5e_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(ResponseErrorRCECS, RTE_VAR_INIT) Rte_ResponseErrorRCECS_oRCECStoCIOM_L5_oLIN04_07d94fb4_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(ResponseErrorTCP, RTE_VAR_INIT) Rte_ResponseErrorTCP_oTCPtoMaster_oLIN02_2075be52_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SwitchDetectionNeeded1L2, RTE_VAR_INIT) Rte_SwitchDetectionNeeded1L2_oFSP1_Frame_L2_oLIN01_86f68c15_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SwitchDetectionNeeded1L3, RTE_VAR_INIT) Rte_SwitchDetectionNeeded1L3_oFSP1_Frame_L3_oLIN02_482637e5_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SwitchDetectionNeeded1L4, RTE_VAR_INIT) Rte_SwitchDetectionNeeded1L4_oFSP1_Frame_L4_oLIN03_435d96c4_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SwitchDetectionNeeded1L5, RTE_VAR_INIT) Rte_SwitchDetectionNeeded1L5_oFSP1_Frame_L5_oLIN04_8ae0e92d_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SwitchDetectionNeeded2L2, RTE_VAR_INIT) Rte_SwitchDetectionNeeded2L2_oFSP2_Frame_L2_oLIN01_e08161c2_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SwitchDetectionNeeded2L3, RTE_VAR_INIT) Rte_SwitchDetectionNeeded2L3_oFSP2_Frame_L3_oLIN02_2e51da32_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SwitchDetectionNeeded3L2, RTE_VAR_INIT) Rte_SwitchDetectionNeeded3L2_oFSP3_Frame_L2_oLIN01_c2ac3a8f_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SwitchDetectionNeeded4L2, RTE_VAR_INIT) Rte_SwitchDetectionNeeded4L2_oFSP4_Frame_L2_oLIN01_2c6eba6c_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ABS_Indication_ABS_Indication (3U)
#  define Rte_InitValue_ATC_Indication_ATC_Indication (3U)
#  define Rte_InitValue_DiagInfoCCFW_DiagInfoCCFW (0U)
#  define Rte_InitValue_DiagInfoDLFW_DiagInfoDLFW (0U)
#  define Rte_InitValue_DiagInfoELCP1_DiagInfoELCP1 (0U)
#  define Rte_InitValue_DiagInfoELCP2_DiagInfoELCP2 (0U)
#  define Rte_InitValue_DiagInfoILCP1_DiagInfoILCP1 (0U)
#  define Rte_InitValue_DiagInfoILCP2_DiagInfoILCP2 (0U)
#  define Rte_InitValue_DiagInfoLECM2_DiagInfoLECM2 (0U)
#  define Rte_InitValue_DiagInfoLECMBasic_DiagInfoLECMBasic (0U)
#  define Rte_InitValue_DiagInfoRCECS_DiagInfoRCECS (0U)
#  define Rte_InitValue_DiagInfoTCP_DiagInfoTCP (0U)
#  define Rte_InitValue_DoorLock_stat_DoorLock_stat (15U)
#  define Rte_InitValue_ESC_Indication_ESC_Indication (3U)
#  define Rte_InitValue_FSP1DiagInfoL1_FSP1DiagInfoL1 (0U)
#  define Rte_InitValue_FSP1DiagInfoL2_FSP1DiagInfoL2 (0U)
#  define Rte_InitValue_FSP1DiagInfoL3_FSP1DiagInfoL3 (0U)
#  define Rte_InitValue_FSP1DiagInfoL4_FSP1DiagInfoL4 (0U)
#  define Rte_InitValue_FSP1DiagInfoL5_FSP1DiagInfoL5 (0U)
#  define Rte_InitValue_FSP1IndicationCmdL2_FSP1IndicationCmdL2 (0U)
#  define Rte_InitValue_FSP1IndicationCmdL3_FSP1IndicationCmdL3 (0U)
#  define Rte_InitValue_FSP1IndicationCmdL4_FSP1IndicationCmdL4 (0U)
#  define Rte_InitValue_FSP1IndicationCmdL5_FSP1IndicationCmdL5 (0U)
#  define Rte_InitValue_FSP1ResponseErrorL1_FSP1ResponseErrorL1 (FALSE)
#  define Rte_InitValue_FSP1ResponseErrorL2_FSP1ResponseErrorL2 (FALSE)
#  define Rte_InitValue_FSP1ResponseErrorL3_FSP1ResponseErrorL3 (FALSE)
#  define Rte_InitValue_FSP1ResponseErrorL4_FSP1ResponseErrorL4 (FALSE)
#  define Rte_InitValue_FSP1ResponseErrorL5_FSP1ResponseErrorL5 (FALSE)
#  define Rte_InitValue_FSP1SwitchStatusL2_FSP1SwitchStatusL2 (0U)
#  define Rte_InitValue_FSP1SwitchStatusL3_FSP1SwitchStatusL3 (0U)
#  define Rte_InitValue_FSP1SwitchStatusL4_FSP1SwitchStatusL4 (0U)
#  define Rte_InitValue_FSP1SwitchStatusL5_FSP1SwitchStatusL5 (0U)
#  define Rte_InitValue_FSP2DiagInfoL1_FSP2DiagInfoL1 (0U)
#  define Rte_InitValue_FSP2DiagInfoL2_FSP2DiagInfoL2 (0U)
#  define Rte_InitValue_FSP2DiagInfoL3_FSP2DiagInfoL3 (0U)
#  define Rte_InitValue_FSP2IndicationCmdL1_FSP2IndicationCmdL1 (0U)
#  define Rte_InitValue_FSP2IndicationCmdL2_FSP2IndicationCmdL2 (0U)
#  define Rte_InitValue_FSP2IndicationCmdL3_FSP2IndicationCmdL3 (0U)
#  define Rte_InitValue_FSP2ResponseErrorL1_FSP2ResponseErrorL1 (FALSE)
#  define Rte_InitValue_FSP2ResponseErrorL2_FSP2ResponseErrorL2 (FALSE)
#  define Rte_InitValue_FSP2ResponseErrorL3_FSP2ResponseErrorL3 (FALSE)
#  define Rte_InitValue_FSP2SwitchStatusL1_FSP2SwitchStatusL1 (0U)
#  define Rte_InitValue_FSP2SwitchStatusL2_FSP2SwitchStatusL2 (0U)
#  define Rte_InitValue_FSP2SwitchStatusL3_FSP2SwitchStatusL3 (0U)
#  define Rte_InitValue_FSP3DiagInfoL2_FSP3DiagInfoL2 (0U)
#  define Rte_InitValue_FSP3IndicationCmdL2_FSP3IndicationCmdL2 (0U)
#  define Rte_InitValue_FSP3ResponseErrorL2_FSP3ResponseErrorL2 (FALSE)
#  define Rte_InitValue_FSP3SwitchStatusL2_FSP3SwitchStatusL2 (0U)
#  define Rte_InitValue_FSP4DiagInfoL2_FSP4DiagInfoL2 (0U)
#  define Rte_InitValue_FSP4IndicationCmdL2_FSP4IndicationCmdL2 (0U)
#  define Rte_InitValue_FSP4ResponseErrorL2_FSP4ResponseErrorL2 (FALSE)
#  define Rte_InitValue_FSP4SwitchStatusL2_FSP4SwitchStatusL2 (0U)
#  define Rte_InitValue_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication (0U)
#  define Rte_InitValue_LIN_ASLIndication_LIN_ASLIndication (0U)
#  define Rte_InitValue_LIN_AdjustButtonStatus_LIN_AdjustButtonStatus (3U)
#  define Rte_InitValue_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication (0U)
#  define Rte_InitValue_LIN_AudioSystemStatus_LIN_AudioSystemStatus (3U)
#  define Rte_InitValue_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd (0U)
#  define Rte_InitValue_LIN_BTStatus_LIN_BTStatus (3U)
#  define Rte_InitValue_LIN_BackButtonStatus_LIN_BackButtonStatus (3U)
#  define Rte_InitValue_LIN_BackLightDimming_Status_LIN_BackLightDimming_Status (31U)
#  define Rte_InitValue_LIN_BlackPanelMode_ButtonStat_LIN_BlackPanelMode_ButtonStat (3U)
#  define Rte_InitValue_LIN_BunkBAudioOnOff_ButtonStat_LIN_BunkBAudioOnOff_ButtonStat (3U)
#  define Rte_InitValue_LIN_BunkBIntLightActvnBtn_stat_LIN_BunkBIntLightActvnBtn_stat (3U)
#  define Rte_InitValue_LIN_BunkBParkHeater_ButtonStat_LIN_BunkBParkHeater_ButtonStat (3U)
#  define Rte_InitValue_LIN_BunkBTempDec_ButtonStat_LIN_BunkBTempDec_ButtonStat (3U)
#  define Rte_InitValue_LIN_BunkBTempInc_ButtonStat_LIN_BunkBTempInc_ButtonStat (3U)
#  define Rte_InitValue_LIN_BunkBVolumeDown_ButtonStat_LIN_BunkBVolumeDown_ButtonStat (3U)
#  define Rte_InitValue_LIN_BunkBVolumeUp_ButtonStat_LIN_BunkBVolumeUp_ButtonStat (3U)
#  define Rte_InitValue_LIN_BunkH2AudioOnOff_ButtonSta_LIN_BunkH2AudioOnOff_ButtonSta (3U)
#  define Rte_InitValue_LIN_BunkH2Fade_ButtonStatus_LIN_BunkH2Fade_ButtonStatus (3U)
#  define Rte_InitValue_LIN_BunkH2IntLightActvnBtn_sta_LIN_BunkH2IntLightActvnBtn_sta (3U)
#  define Rte_InitValue_LIN_BunkH2IntLightDecBtn_stat_LIN_BunkH2IntLightDecBtn_stat (3U)
#  define Rte_InitValue_LIN_BunkH2IntLightIncBtn_stat_LIN_BunkH2IntLightIncBtn_stat (3U)
#  define Rte_InitValue_LIN_BunkH2LockButtonStatus_LIN_BunkH2LockButtonStatus (3U)
#  define Rte_InitValue_LIN_BunkH2OnOFF_ButtonStatus_LIN_BunkH2OnOFF_ButtonStatus (3U)
#  define Rte_InitValue_LIN_BunkH2ParkHeater_ButtonSta_LIN_BunkH2ParkHeater_ButtonSta (3U)
#  define Rte_InitValue_LIN_BunkH2Phone_ButtonStatus_LIN_BunkH2Phone_ButtonStatus (3U)
#  define Rte_InitValue_LIN_BunkH2PowerWinCloseDSBtn_s_LIN_BunkH2PowerWinCloseDSBtn_s (3U)
#  define Rte_InitValue_LIN_BunkH2PowerWinClosePSBtn_s_LIN_BunkH2PowerWinClosePSBtn_s (3U)
#  define Rte_InitValue_LIN_BunkH2PowerWinOpenDSBtn_st_LIN_BunkH2PowerWinOpenDSBtn_st (3U)
#  define Rte_InitValue_LIN_BunkH2PowerWinOpenPSBtn_st_LIN_BunkH2PowerWinOpenPSBtn_st (3U)
#  define Rte_InitValue_LIN_BunkH2RoofhatchCloseBtn_St_LIN_BunkH2RoofhatchCloseBtn_St (3U)
#  define Rte_InitValue_LIN_BunkH2RoofhatchOpenBtn_Sta_LIN_BunkH2RoofhatchOpenBtn_Sta (3U)
#  define Rte_InitValue_LIN_BunkH2TempDec_ButtonStatus_LIN_BunkH2TempDec_ButtonStatus (3U)
#  define Rte_InitValue_LIN_BunkH2TempInc_ButtonStatus_LIN_BunkH2TempInc_ButtonStatus (3U)
#  define Rte_InitValue_LIN_BunkH2VolumeDown_ButtonSta_LIN_BunkH2VolumeDown_ButtonSta (3U)
#  define Rte_InitValue_LIN_BunkH2VolumeUp_ButtonStatu_LIN_BunkH2VolumeUp_ButtonStatu (3U)
#  define Rte_InitValue_LIN_DRL_ButtonStatus_LIN_DRL_ButtonStatus (3U)
#  define Rte_InitValue_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica (0U)
#  define Rte_InitValue_LIN_DifflockDeactivationBtn_st_LIN_DifflockDeactivationBtn_st (3U)
#  define Rte_InitValue_LIN_DifflockMode_Wheelstatus_LIN_DifflockMode_Wheelstatus (15U)
#  define Rte_InitValue_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication (0U)
#  define Rte_InitValue_LIN_DoorAutoFuncBtn_stat_LIN_DoorAutoFuncBtn_stat (3U)
#  define Rte_InitValue_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd (0U)
#  define Rte_InitValue_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication (0U)
#  define Rte_InitValue_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio (0U)
#  define Rte_InitValue_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication (0U)
#  define Rte_InitValue_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn (0U)
#  define Rte_InitValue_LIN_EscButtonMuddySiteStatus_LIN_EscButtonMuddySiteStatus (3U)
#  define Rte_InitValue_LIN_FCWPushButton_LIN_FCWPushButton (3U)
#  define Rte_InitValue_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication (0U)
#  define Rte_InitValue_LIN_FogLightFront_ButtonStat_1_LIN_FogLightFront_ButtonStat_1 (3U)
#  define Rte_InitValue_LIN_FogLightFront_ButtonStat_2_LIN_FogLightFront_ButtonStat_2 (3U)
#  define Rte_InitValue_LIN_FogLightRear_ButtonStat_1_LIN_FogLightRear_ButtonStat_1 (3U)
#  define Rte_InitValue_LIN_FogLightRear_ButtonStat_2_LIN_FogLightRear_ButtonStat_2 (3U)
#  define Rte_InitValue_LIN_FrontFog_Indication_LIN_FrontFog_Indication (0U)
#  define Rte_InitValue_LIN_HeadLampUpDown_SwitchStatu_LIN_HeadLampUpDown_SwitchStatu (7U)
#  define Rte_InitValue_LIN_IntLghtCenterBtnFreeWhl_s_LIN_IntLghtCenterBtnFreeWhl_s (3U)
#  define Rte_InitValue_LIN_IntLghtDimmingLvlDecBtn_s_LIN_IntLghtDimmingLvlDecBtn_s (3U)
#  define Rte_InitValue_LIN_IntLghtDimmingLvlFreeWhl_s_LIN_IntLghtDimmingLvlFreeWhl_s (15U)
#  define Rte_InitValue_LIN_IntLghtDimmingLvlIncBtn_s_LIN_IntLghtDimmingLvlIncBtn_s (3U)
#  define Rte_InitValue_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd (0U)
#  define Rte_InitValue_LIN_IntLghtMaxModeBtnPnl2_s_LIN_IntLghtMaxModeBtnPnl2_s (3U)
#  define Rte_InitValue_LIN_IntLghtModeSelrFreeWheel_s_LIN_IntLghtModeSelrFreeWheel_s (15U)
#  define Rte_InitValue_LIN_IntLghtNightModeBt2_s_LIN_IntLghtNightModeBt2_s (3U)
#  define Rte_InitValue_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd (0U)
#  define Rte_InitValue_LIN_IntLghtRestModeBtnPnl2_s_LIN_IntLghtRestModeBtnPnl2_s (3U)
#  define Rte_InitValue_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd (0U)
#  define Rte_InitValue_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd (0U)
#  define Rte_InitValue_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd (0U)
#  define Rte_InitValue_LIN_LKSPushButton_LIN_LKSPushButton (3U)
#  define Rte_InitValue_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication (0U)
#  define Rte_InitValue_LIN_LevelingThumbwheel_stat_LIN_LevelingThumbwheel_stat (31U)
#  define Rte_InitValue_LIN_LightMode_Status_1_LIN_LightMode_Status_1 (15U)
#  define Rte_InitValue_LIN_LightMode_Status_2_LIN_LightMode_Status_2 (15U)
#  define Rte_InitValue_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication (0U)
#  define Rte_InitValue_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication (0U)
#  define Rte_InitValue_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication (0U)
#  define Rte_InitValue_LIN_MemButtonStatus_LIN_MemButtonStatus (3U)
#  define Rte_InitValue_LIN_Offroad_ButtonStatus_LIN_Offroad_ButtonStatus (3U)
#  define Rte_InitValue_LIN_Offroad_Indication_LIN_Offroad_Indication (0U)
#  define Rte_InitValue_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication (0U)
#  define Rte_InitValue_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd (0U)
#  define Rte_InitValue_LIN_RearFog_Indication_LIN_RearFog_Indication (0U)
#  define Rte_InitValue_LIN_RearWorkProjector_BtnStat_LIN_RearWorkProjector_BtnStat (3U)
#  define Rte_InitValue_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati (0U)
#  define Rte_InitValue_LIN_SelectButtonStatus_LIN_SelectButtonStatus (3U)
#  define Rte_InitValue_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength (0U)
#  define Rte_InitValue_LIN_SpeedControlModeButtonStat_LIN_SpeedControlModeButtonStat (3U)
#  define Rte_InitValue_LIN_SpeedControlModeWheelStat_LIN_SpeedControlModeWheelStat (15U)
#  define Rte_InitValue_LIN_StopButtonStatus_LIN_StopButtonStatus (3U)
#  define Rte_InitValue_LIN_TCP_ABS_ButtonStatus_LIN_TCP_ABS_ButtonStatus (3U)
#  define Rte_InitValue_LIN_TCP_ATC_ButtonStatus_LIN_TCP_ATC_ButtonStatus (3U)
#  define Rte_InitValue_LIN_TCP_ESC_ButtonStatus_LIN_TCP_ESC_ButtonStatus (3U)
#  define Rte_InitValue_LIN_TCP_KnobPostionStatus_LIN_TCP_KnobPostionStatus (7U)
#  define Rte_InitValue_LIN_TCP_TCS_ButtonStatus_LIN_TCP_TCS_ButtonStatus (3U)
#  define Rte_InitValue_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication (0U)
#  define Rte_InitValue_LIN_WRDownButtonStatus_LIN_WRDownButtonStatus (7U)
#  define Rte_InitValue_LIN_WRUpButtonStatus_LIN_WRUpButtonStatus (7U)
#  define Rte_InitValue_ResponseErrorCCFW_ResponseErrorCCFW (FALSE)
#  define Rte_InitValue_ResponseErrorDLFW_ResponseErrorDLFW (FALSE)
#  define Rte_InitValue_ResponseErrorELCP1_ResponseErrorELCP1 (FALSE)
#  define Rte_InitValue_ResponseErrorELCP2_ResponseErrorELCP2 (FALSE)
#  define Rte_InitValue_ResponseErrorILCP1_ResponseErrorILCP1 (FALSE)
#  define Rte_InitValue_ResponseErrorILCP2_ResponseErrorILCP2 (FALSE)
#  define Rte_InitValue_ResponseErrorLECM2_ResponseErrorLECM2 (FALSE)
#  define Rte_InitValue_ResponseErrorLECMBasic_ResponseErrorLECMBasic (FALSE)
#  define Rte_InitValue_ResponseErrorRCECS_ResponseErrorRCECS (FALSE)
#  define Rte_InitValue_ResponseErrorTCP_ResponseErrorTCP (FALSE)
#  define Rte_InitValue_SwitchDetectionNeeded1L1_SwitchDetectionNeeded1L1 (FALSE)
#  define Rte_InitValue_SwitchDetectionNeeded1L2_SwitchDetectionNeeded1L2 (FALSE)
#  define Rte_InitValue_SwitchDetectionNeeded1L3_SwitchDetectionNeeded1L3 (FALSE)
#  define Rte_InitValue_SwitchDetectionNeeded1L4_SwitchDetectionNeeded1L4 (FALSE)
#  define Rte_InitValue_SwitchDetectionNeeded1L5_SwitchDetectionNeeded1L5 (FALSE)
#  define Rte_InitValue_SwitchDetectionNeeded2L1_SwitchDetectionNeeded2L1 (FALSE)
#  define Rte_InitValue_SwitchDetectionNeeded2L2_SwitchDetectionNeeded2L2 (FALSE)
#  define Rte_InitValue_SwitchDetectionNeeded2L3_SwitchDetectionNeeded2L3 (FALSE)
#  define Rte_InitValue_SwitchDetectionNeeded3L2_SwitchDetectionNeeded3L2 (FALSE)
#  define Rte_InitValue_SwitchDetectionNeeded4L2_SwitchDetectionNeeded4L2 (FALSE)
#  define Rte_InitValue_TCS_Indication_TCS_Indication (3U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_DiagInfoILCP1_DiagInfoILCP1(P2VAR(DiagInfoILCP1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_FSP1DiagInfoL1_FSP1DiagInfoL1(P2VAR(FSP1DiagInfoL1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_FSP1ResponseErrorL1_FSP1ResponseErrorL1(P2VAR(FSP1ResponseErrorL1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_FSP2DiagInfoL1_FSP2DiagInfoL1(P2VAR(FSP2DiagInfoL1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_FSP2ResponseErrorL1_FSP2ResponseErrorL1(P2VAR(FSP2ResponseErrorL1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_LIN_AlmClkSetCurAlm_rqst_sg_LIN_AlmClkSetCurAlm_rqst_sg(P2VAR(LIN_AlmClkSetCurAlm_rqst_sg, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_LIN_BunkH2PHTi_rqs_sg_LIN_BunkH2PHTi_rqs_sg(P2VAR(LIN_BunkH2PHTi_rqs_sg, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_LIN_DoorAutoFuncBtn_stat_LIN_DoorAutoFuncBtn_stat(P2VAR(LIN_DoorAutoFuncBtn_stat, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_LIN_IntLghtDimmingLvlDecBtn_s_LIN_IntLghtDimmingLvlDecBtn_s(P2VAR(LIN_IntLghtDimmingLvlDecBtn_s, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_LIN_IntLghtDimmingLvlIncBtn_s_LIN_IntLghtDimmingLvlIncBtn_s(P2VAR(LIN_IntLghtDimmingLvlIncBtn_s, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_LIN_IntLghtModeSelrFreeWheel_s_LIN_IntLghtModeSelrFreeWheel_s(P2VAR(LIN_IntLghtModeSelrFreeWheel_s, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_ResponseErrorILCP1_ResponseErrorILCP1(P2VAR(ResponseErrorILCP1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionNeeded1L1_SwitchDetectionNeeded1L1(P2VAR(SwitchDetectionNeeded1L1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionNeeded2L1_SwitchDetectionNeeded2L1(P2VAR(SwitchDetectionNeeded2L1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp1L1_SwitchDetectionResp1L1(P2VAR(uint8, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp1L1_SwitchDetectionResp1L1(P2VAR(SwitchDetectionResp1L1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp1L2_SwitchDetectionResp1L2(P2VAR(uint8, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp1L2_SwitchDetectionResp1L2(P2VAR(SwitchDetectionResp1L2, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp1L3_SwitchDetectionResp1L3(P2VAR(uint8, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp1L3_SwitchDetectionResp1L3(P2VAR(SwitchDetectionResp1L3, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp1L4_SwitchDetectionResp1L4(P2VAR(uint8, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp1L4_SwitchDetectionResp1L4(P2VAR(SwitchDetectionResp1L4, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp1L5_SwitchDetectionResp1L5(P2VAR(uint8, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp1L5_SwitchDetectionResp1L5(P2VAR(SwitchDetectionResp1L5, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp2L1_SwitchDetectionResp2L1(P2VAR(uint8, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp2L1_SwitchDetectionResp2L1(P2VAR(SwitchDetectionResp2L1, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp2L2_SwitchDetectionResp2L2(P2VAR(uint8, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp2L2_SwitchDetectionResp2L2(P2VAR(SwitchDetectionResp2L2, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp2L3_SwitchDetectionResp2L3(P2VAR(uint8, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp2L3_SwitchDetectionResp2L3(P2VAR(SwitchDetectionResp2L3, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp3L2_SwitchDetectionResp3L2(P2VAR(uint8, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp3L2_SwitchDetectionResp3L2(P2VAR(SwitchDetectionResp3L2, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp4L2_SwitchDetectionResp4L2(P2VAR(uint8, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TestLin_SwitchDetectionResp4L2_SwitchDetectionResp4L2(P2VAR(SwitchDetectionResp4L2, AUTOMATIC, RTE_TESTLIN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_ABS_Indication_ABS_Indication(ABS_Indication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_ATC_Indication_ATC_Indication(ATC_Indication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN1Schedule_BswM_MDGP_BswMRteMDG_LIN1Schedule_requestedMode(BswM_BswMRteMDG_LIN1Schedule data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN2Schedule_BswM_MDGP_BswMRteMDG_LIN2Schedule_requestedMode(BswM_BswMRteMDG_LIN2Schedule data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN3Schedule_BswM_MDGP_BswMRteMDG_LIN3Schedule_requestedMode(BswM_BswMRteMDG_LIN3Schedule data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN4Schedule_BswM_MDGP_BswMRteMDG_LIN4Schedule_requestedMode(BswM_BswMRteMDG_LIN4Schedule data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN5Schedule_BswM_MDGP_BswMRteMDG_LIN5Schedule_requestedMode(BswM_BswMRteMDG_LIN5Schedule data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_DoorLock_stat_DoorLock_stat(DoorLock_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_ESC_Indication_ESC_Indication(ESC_Indication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP1IndicationCmdL2_FSP1IndicationCmdL2(FSP1IndicationCmdL2 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP1IndicationCmdL3_FSP1IndicationCmdL3(FSP1IndicationCmdL3 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP1IndicationCmdL4_FSP1IndicationCmdL4(FSP1IndicationCmdL4 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP1IndicationCmdL5_FSP1IndicationCmdL5(FSP1IndicationCmdL5 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP2IndicationCmdL1_FSP2IndicationCmdL1(FSP2IndicationCmdL1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP2IndicationCmdL2_FSP2IndicationCmdL2(FSP2IndicationCmdL2 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP2IndicationCmdL3_FSP2IndicationCmdL3(FSP2IndicationCmdL3 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP3IndicationCmdL2_FSP3IndicationCmdL2(FSP3IndicationCmdL2 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_FSP4IndicationCmdL2_FSP4IndicationCmdL2(FSP4IndicationCmdL2 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication(LIN_ACCOrCCIndication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_ASLIndication_LIN_ASLIndication(LIN_ASLIndication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication(LIN_Adjust_DeviceIndication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg(P2CONST(LIN_AlmClkCurAlarm_stat_sg, AUTOMATIC, RTE_TESTLIN_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_AudioSystemStatus_LIN_AudioSystemStatus(LIN_AudioSystemStatus data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd(LIN_AudioVolumeIndicationCmd data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_BTStatus_LIN_BTStatus(LIN_BTStatus data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica(LIN_DaytimeRunningLight_Indica data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication(LIN_DifflockOnOff_Indication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd(LIN_DoorAutoFuncInd_cmd data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication(LIN_Down_DeviceIndication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio(LIN_DrivingLightPlus_Indicatio data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication(LIN_DrivingLight_Indication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn(LIN_EscButtonMuddySiteDeviceIn data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication(LIN_FCW_DeviceIndication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_FrontFog_Indication_LIN_FrontFog_Indication(LIN_FrontFog_Indication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd(LIN_IntLghtLvlIndScaled_cmd data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg(P2CONST(LIN_IntLghtModeInd_cmd_sg, AUTOMATIC, RTE_TESTLIN_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd(LIN_IntLghtOffModeInd_cmd data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd(LIN_IntLightMaxModeInd_cmd data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd(LIN_IntLightNightModeInd_cmd data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd(LIN_IntLightRestingModeInd_cmd data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication(LIN_LKS_DeviceIndication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication(LIN_M1_DeviceIndication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication(LIN_M2_DeviceIndication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication(LIN_M3_DeviceIndication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_Offroad_Indication_LIN_Offroad_Indication(LIN_Offroad_Indication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication(LIN_ParkingLight_Indication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd(LIN_PhoneButtonIndication_cmd data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_RearFog_Indication_LIN_RearFog_Indication(LIN_RearFog_Indication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati(LIN_RearWorkProjector_Indicati data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength(LIN_ShortPulseMaxLength data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication(LIN_Up_DeviceIndication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TestLin_TCS_Indication_TCS_Indication(TCS_Indication data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_DiagInfoCCFW_DiagInfoCCFW Rte_Read_TestLin_DiagInfoCCFW_DiagInfoCCFW
#  define Rte_Read_TestLin_DiagInfoCCFW_DiagInfoCCFW(data) (*(data) = Rte_DiagInfoCCFW_oCCFWtoCIOM_L4_oLIN03_69083ad8_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DiagInfoDLFW_DiagInfoDLFW Rte_Read_TestLin_DiagInfoDLFW_DiagInfoDLFW
#  define Rte_Read_TestLin_DiagInfoDLFW_DiagInfoDLFW(data) (*(data) = Rte_DiagInfoDLFW_oDLFWtoCIOM_L4_oLIN03_f14b1ebc_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DiagInfoELCP1_DiagInfoELCP1 Rte_Read_TestLin_DiagInfoELCP1_DiagInfoELCP1
#  define Rte_Read_TestLin_DiagInfoELCP1_DiagInfoELCP1(data) (*(data) = Rte_DiagInfoELCP1_oELCP1toCIOM_L4_oLIN03_e88000c8_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DiagInfoELCP2_DiagInfoELCP2 Rte_Read_TestLin_DiagInfoELCP2_DiagInfoELCP2
#  define Rte_Read_TestLin_DiagInfoELCP2_DiagInfoELCP2(data) (*(data) = Rte_DiagInfoELCP2_oELCP2toCIOM_L4_oLIN03_e304f264_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DiagInfoILCP1_DiagInfoILCP1 Rte_Read_TestLin_DiagInfoILCP1_DiagInfoILCP1
#  define Rte_Read_DiagInfoILCP2_DiagInfoILCP2 Rte_Read_TestLin_DiagInfoILCP2_DiagInfoILCP2
#  define Rte_Read_TestLin_DiagInfoILCP2_DiagInfoILCP2(data) (*(data) = Rte_DiagInfoILCP2_oILCP2toCIOM_L4_oLIN03_df77e335_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DiagInfoLECM2_DiagInfoLECM2 Rte_Read_TestLin_DiagInfoLECM2_DiagInfoLECM2
#  define Rte_Read_TestLin_DiagInfoLECM2_DiagInfoLECM2(data) (*(data) = Rte_DiagInfoLECM2_oLECM2toCIOM_FR1_L1_oLIN00_427132ed_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DiagInfoLECMBasic_DiagInfoLECMBasic Rte_Read_TestLin_DiagInfoLECMBasic_DiagInfoLECMBasic
#  define Rte_Read_TestLin_DiagInfoLECMBasic_DiagInfoLECMBasic(data) (*(data) = Rte_DiagInfoLECMBasic_oLECMBasic2CIOM_L1_oLIN00_209584a0_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DiagInfoRCECS_DiagInfoRCECS Rte_Read_TestLin_DiagInfoRCECS_DiagInfoRCECS
#  define Rte_Read_TestLin_DiagInfoRCECS_DiagInfoRCECS(data) (*(data) = Rte_DiagInfoRCECS_oRCECStoCIOM_L5_oLIN04_46e60a03_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DiagInfoTCP_DiagInfoTCP Rte_Read_TestLin_DiagInfoTCP_DiagInfoTCP
#  define Rte_Read_TestLin_DiagInfoTCP_DiagInfoTCP(data) (*(data) = Rte_DiagInfoTCP_oTCPtoMaster_oLIN02_23eac2a6_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP1DiagInfoL1_FSP1DiagInfoL1 Rte_Read_TestLin_FSP1DiagInfoL1_FSP1DiagInfoL1
#  define Rte_Read_FSP1DiagInfoL2_FSP1DiagInfoL2 Rte_Read_TestLin_FSP1DiagInfoL2_FSP1DiagInfoL2
#  define Rte_Read_TestLin_FSP1DiagInfoL2_FSP1DiagInfoL2(data) (*(data) = Rte_FSP1DiagInfoL2_oFSP1_Frame_L2_oLIN01_7f2a1c9e_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP1DiagInfoL3_FSP1DiagInfoL3 Rte_Read_TestLin_FSP1DiagInfoL3_FSP1DiagInfoL3
#  define Rte_Read_TestLin_FSP1DiagInfoL3_FSP1DiagInfoL3(data) (*(data) = Rte_FSP1DiagInfoL3_oFSP1_Frame_L3_oLIN02_b1faa76e_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP1DiagInfoL4_FSP1DiagInfoL4 Rte_Read_TestLin_FSP1DiagInfoL4_FSP1DiagInfoL4
#  define Rte_Read_TestLin_FSP1DiagInfoL4_FSP1DiagInfoL4(data) (*(data) = Rte_FSP1DiagInfoL4_oFSP1_Frame_L4_oLIN03_ba81064f_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP1DiagInfoL5_FSP1DiagInfoL5 Rte_Read_TestLin_FSP1DiagInfoL5_FSP1DiagInfoL5
#  define Rte_Read_TestLin_FSP1DiagInfoL5_FSP1DiagInfoL5(data) (*(data) = Rte_FSP1DiagInfoL5_oFSP1_Frame_L5_oLIN04_733c79a6_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP1ResponseErrorL1_FSP1ResponseErrorL1 Rte_Read_TestLin_FSP1ResponseErrorL1_FSP1ResponseErrorL1
#  define Rte_Read_FSP1ResponseErrorL2_FSP1ResponseErrorL2 Rte_Read_TestLin_FSP1ResponseErrorL2_FSP1ResponseErrorL2
#  define Rte_Read_TestLin_FSP1ResponseErrorL2_FSP1ResponseErrorL2(data) (*(data) = Rte_FSP1ResponseErrorL2_oFSP1_Frame_L2_oLIN01_368cf224_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP1ResponseErrorL3_FSP1ResponseErrorL3 Rte_Read_TestLin_FSP1ResponseErrorL3_FSP1ResponseErrorL3
#  define Rte_Read_TestLin_FSP1ResponseErrorL3_FSP1ResponseErrorL3(data) (*(data) = Rte_FSP1ResponseErrorL3_oFSP1_Frame_L3_oLIN02_f85c49d4_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP1ResponseErrorL4_FSP1ResponseErrorL4 Rte_Read_TestLin_FSP1ResponseErrorL4_FSP1ResponseErrorL4
#  define Rte_Read_TestLin_FSP1ResponseErrorL4_FSP1ResponseErrorL4(data) (*(data) = Rte_FSP1ResponseErrorL4_oFSP1_Frame_L4_oLIN03_f327e8f5_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP1ResponseErrorL5_FSP1ResponseErrorL5 Rte_Read_TestLin_FSP1ResponseErrorL5_FSP1ResponseErrorL5
#  define Rte_Read_TestLin_FSP1ResponseErrorL5_FSP1ResponseErrorL5(data) (*(data) = Rte_FSP1ResponseErrorL5_oFSP1_Frame_L5_oLIN04_3a9a971c_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP1SwitchStatusL2_FSP1SwitchStatusL2 Rte_Read_TestLin_FSP1SwitchStatusL2_FSP1SwitchStatusL2
#  define Rte_Read_TestLin_FSP1SwitchStatusL2_FSP1SwitchStatusL2(data) (*(data) = Rte_FSP1SwitchStatusL2_oFSP1_Frame_L2_oLIN01_68e68ffa_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP1SwitchStatusL3_FSP1SwitchStatusL3 Rte_Read_TestLin_FSP1SwitchStatusL3_FSP1SwitchStatusL3
#  define Rte_Read_TestLin_FSP1SwitchStatusL3_FSP1SwitchStatusL3(data) (*(data) = Rte_FSP1SwitchStatusL3_oFSP1_Frame_L3_oLIN02_a636340a_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP1SwitchStatusL4_FSP1SwitchStatusL4 Rte_Read_TestLin_FSP1SwitchStatusL4_FSP1SwitchStatusL4
#  define Rte_Read_TestLin_FSP1SwitchStatusL4_FSP1SwitchStatusL4(data) (*(data) = Rte_FSP1SwitchStatusL4_oFSP1_Frame_L4_oLIN03_ad4d952b_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP1SwitchStatusL5_FSP1SwitchStatusL5 Rte_Read_TestLin_FSP1SwitchStatusL5_FSP1SwitchStatusL5
#  define Rte_Read_TestLin_FSP1SwitchStatusL5_FSP1SwitchStatusL5(data) (*(data) = Rte_FSP1SwitchStatusL5_oFSP1_Frame_L5_oLIN04_64f0eac2_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP2DiagInfoL1_FSP2DiagInfoL1 Rte_Read_TestLin_FSP2DiagInfoL1_FSP2DiagInfoL1
#  define Rte_Read_FSP2DiagInfoL2_FSP2DiagInfoL2 Rte_Read_TestLin_FSP2DiagInfoL2_FSP2DiagInfoL2
#  define Rte_Read_TestLin_FSP2DiagInfoL2_FSP2DiagInfoL2(data) (*(data) = Rte_FSP2DiagInfoL2_oFSP2_Frame_L2_oLIN01_77a7f60f_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP2DiagInfoL3_FSP2DiagInfoL3 Rte_Read_TestLin_FSP2DiagInfoL3_FSP2DiagInfoL3
#  define Rte_Read_TestLin_FSP2DiagInfoL3_FSP2DiagInfoL3(data) (*(data) = Rte_FSP2DiagInfoL3_oFSP2_Frame_L3_oLIN02_b9774dff_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP2ResponseErrorL1_FSP2ResponseErrorL1 Rte_Read_TestLin_FSP2ResponseErrorL1_FSP2ResponseErrorL1
#  define Rte_Read_FSP2ResponseErrorL2_FSP2ResponseErrorL2 Rte_Read_TestLin_FSP2ResponseErrorL2_FSP2ResponseErrorL2
#  define Rte_Read_TestLin_FSP2ResponseErrorL2_FSP2ResponseErrorL2(data) (*(data) = Rte_FSP2ResponseErrorL2_oFSP2_Frame_L2_oLIN01_28fea9c7_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP2ResponseErrorL3_FSP2ResponseErrorL3 Rte_Read_TestLin_FSP2ResponseErrorL3_FSP2ResponseErrorL3
#  define Rte_Read_TestLin_FSP2ResponseErrorL3_FSP2ResponseErrorL3(data) (*(data) = Rte_FSP2ResponseErrorL3_oFSP2_Frame_L3_oLIN02_e62e1237_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP2SwitchStatusL1_FSP2SwitchStatusL1 Rte_Read_TestLin_FSP2SwitchStatusL1_FSP2SwitchStatusL1
#  define Rte_Read_TestLin_FSP2SwitchStatusL1_FSP2SwitchStatusL1(data) (*(data) = 0U, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP2SwitchStatusL2_FSP2SwitchStatusL2 Rte_Read_TestLin_FSP2SwitchStatusL2_FSP2SwitchStatusL2
#  define Rte_Read_TestLin_FSP2SwitchStatusL2_FSP2SwitchStatusL2(data) (*(data) = Rte_FSP2SwitchStatusL2_oFSP2_Frame_L2_oLIN01_611deb1e_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP2SwitchStatusL3_FSP2SwitchStatusL3 Rte_Read_TestLin_FSP2SwitchStatusL3_FSP2SwitchStatusL3
#  define Rte_Read_TestLin_FSP2SwitchStatusL3_FSP2SwitchStatusL3(data) (*(data) = Rte_FSP2SwitchStatusL3_oFSP2_Frame_L3_oLIN02_afcd50ee_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP3DiagInfoL2_FSP3DiagInfoL2 Rte_Read_TestLin_FSP3DiagInfoL2_FSP3DiagInfoL2
#  define Rte_Read_TestLin_FSP3DiagInfoL2_FSP3DiagInfoL2(data) (*(data) = Rte_FSP3DiagInfoL2_oFSP3_Frame_L2_oLIN01_c6f3adbf_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP3ResponseErrorL2_FSP3ResponseErrorL2 Rte_Read_TestLin_FSP3ResponseErrorL2_FSP3ResponseErrorL2
#  define Rte_Read_TestLin_FSP3ResponseErrorL2_FSP3ResponseErrorL2(data) (*(data) = Rte_FSP3ResponseErrorL2_oFSP3_Frame_L2_oLIN01_22d09f66_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP3SwitchStatusL2_FSP3SwitchStatusL2 Rte_Read_TestLin_FSP3SwitchStatusL2_FSP3SwitchStatusL2
#  define Rte_Read_TestLin_FSP3SwitchStatusL2_FSP3SwitchStatusL2(data) (*(data) = Rte_FSP3SwitchStatusL2_oFSP3_Frame_L2_oLIN01_664b3742_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP4DiagInfoL2_FSP4DiagInfoL2 Rte_Read_TestLin_FSP4DiagInfoL2_FSP4DiagInfoL2
#  define Rte_Read_TestLin_FSP4DiagInfoL2_FSP4DiagInfoL2(data) (*(data) = Rte_FSP4DiagInfoL2_oFSP4_Frame_L2_oLIN01_66bc232d_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP4ResponseErrorL2_FSP4ResponseErrorL2 Rte_Read_TestLin_FSP4ResponseErrorL2_FSP4ResponseErrorL2
#  define Rte_Read_TestLin_FSP4ResponseErrorL2_FSP4ResponseErrorL2(data) (*(data) = Rte_FSP4ResponseErrorL2_oFSP4_Frame_L2_oLIN01_141a1e01_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FSP4SwitchStatusL2_FSP4SwitchStatusL2 Rte_Read_TestLin_FSP4SwitchStatusL2_FSP4SwitchStatusL2
#  define Rte_Read_TestLin_FSP4SwitchStatusL2_FSP4SwitchStatusL2(data) (*(data) = Rte_FSP4SwitchStatusL2_oFSP4_Frame_L2_oLIN01_72eb22d6_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_AdjustButtonStatus_LIN_AdjustButtonStatus Rte_Read_TestLin_LIN_AdjustButtonStatus_LIN_AdjustButtonStatus
#  define Rte_Read_TestLin_LIN_AdjustButtonStatus_LIN_AdjustButtonStatus(data) (*(data) = Rte_LIN_AdjustButtonStatus_oRCECStoCIOM_L5_oLIN04_52fa0034_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_AlmClkSetCurAlm_rqst_sg_LIN_AlmClkSetCurAlm_rqst_sg Rte_Read_TestLin_LIN_AlmClkSetCurAlm_rqst_sg_LIN_AlmClkSetCurAlm_rqst_sg
#  define Rte_Read_LIN_BackButtonStatus_LIN_BackButtonStatus Rte_Read_TestLin_LIN_BackButtonStatus_LIN_BackButtonStatus
#  define Rte_Read_TestLin_LIN_BackButtonStatus_LIN_BackButtonStatus(data) (*(data) = Rte_LIN_BackButtonStatus_oRCECStoCIOM_L5_oLIN04_91249976_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BackLightDimming_Status_LIN_BackLightDimming_Status Rte_Read_TestLin_LIN_BackLightDimming_Status_LIN_BackLightDimming_Status
#  define Rte_Read_TestLin_LIN_BackLightDimming_Status_LIN_BackLightDimming_Status(data) (*(data) = Rte_LIN_BackLightDimming_Status_oELCP1toCIOM_L4_oLIN03_ff25f41e_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BlackPanelMode_ButtonStat_LIN_BlackPanelMode_ButtonStat Rte_Read_TestLin_LIN_BlackPanelMode_ButtonStat_LIN_BlackPanelMode_ButtonStat
#  define Rte_Read_TestLin_LIN_BlackPanelMode_ButtonStat_LIN_BlackPanelMode_ButtonStat(data) (*(data) = Rte_LIN_BlackPanelMode_ButtonStat_oELCP1toCIOM_L4_oLIN03_dece2221_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkBAudioOnOff_ButtonStat_LIN_BunkBAudioOnOff_ButtonStat Rte_Read_TestLin_LIN_BunkBAudioOnOff_ButtonStat_LIN_BunkBAudioOnOff_ButtonStat
#  define Rte_Read_TestLin_LIN_BunkBAudioOnOff_ButtonStat_LIN_BunkBAudioOnOff_ButtonStat(data) (*(data) = Rte_LIN_BunkBAudioOnOff_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_a735a09a_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkBIntLightActvnBtn_stat_LIN_BunkBIntLightActvnBtn_stat Rte_Read_TestLin_LIN_BunkBIntLightActvnBtn_stat_LIN_BunkBIntLightActvnBtn_stat
#  define Rte_Read_TestLin_LIN_BunkBIntLightActvnBtn_stat_LIN_BunkBIntLightActvnBtn_stat(data) (*(data) = Rte_LIN_BunkBIntLightActvnBtn_stat_oLECMBasic2CIOM_L1_oLIN00_5d53684c_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkBParkHeater_ButtonStat_LIN_BunkBParkHeater_ButtonStat Rte_Read_TestLin_LIN_BunkBParkHeater_ButtonStat_LIN_BunkBParkHeater_ButtonStat
#  define Rte_Read_TestLin_LIN_BunkBParkHeater_ButtonStat_LIN_BunkBParkHeater_ButtonStat(data) (*(data) = Rte_LIN_BunkBParkHeater_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_0c567d49_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkBTempDec_ButtonStat_LIN_BunkBTempDec_ButtonStat Rte_Read_TestLin_LIN_BunkBTempDec_ButtonStat_LIN_BunkBTempDec_ButtonStat
#  define Rte_Read_TestLin_LIN_BunkBTempDec_ButtonStat_LIN_BunkBTempDec_ButtonStat(data) (*(data) = Rte_LIN_BunkBTempDec_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_bad7c8e9_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkBTempInc_ButtonStat_LIN_BunkBTempInc_ButtonStat Rte_Read_TestLin_LIN_BunkBTempInc_ButtonStat_LIN_BunkBTempInc_ButtonStat
#  define Rte_Read_TestLin_LIN_BunkBTempInc_ButtonStat_LIN_BunkBTempInc_ButtonStat(data) (*(data) = Rte_LIN_BunkBTempInc_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_7521d3fe_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkBVolumeDown_ButtonStat_LIN_BunkBVolumeDown_ButtonStat Rte_Read_TestLin_LIN_BunkBVolumeDown_ButtonStat_LIN_BunkBVolumeDown_ButtonStat
#  define Rte_Read_TestLin_LIN_BunkBVolumeDown_ButtonStat_LIN_BunkBVolumeDown_ButtonStat(data) (*(data) = Rte_LIN_BunkBVolumeDown_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_c7ff11cb_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkBVolumeUp_ButtonStat_LIN_BunkBVolumeUp_ButtonStat Rte_Read_TestLin_LIN_BunkBVolumeUp_ButtonStat_LIN_BunkBVolumeUp_ButtonStat
#  define Rte_Read_TestLin_LIN_BunkBVolumeUp_ButtonStat_LIN_BunkBVolumeUp_ButtonStat(data) (*(data) = Rte_LIN_BunkBVolumeUp_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_4fd90c4b_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2AudioOnOff_ButtonSta_LIN_BunkH2AudioOnOff_ButtonSta Rte_Read_TestLin_LIN_BunkH2AudioOnOff_ButtonSta_LIN_BunkH2AudioOnOff_ButtonSta
#  define Rte_Read_TestLin_LIN_BunkH2AudioOnOff_ButtonSta_LIN_BunkH2AudioOnOff_ButtonSta(data) (*(data) = Rte_LIN_BunkH2AudioOnOff_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_8085e670_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2Fade_ButtonStatus_LIN_BunkH2Fade_ButtonStatus Rte_Read_TestLin_LIN_BunkH2Fade_ButtonStatus_LIN_BunkH2Fade_ButtonStatus
#  define Rte_Read_TestLin_LIN_BunkH2Fade_ButtonStatus_LIN_BunkH2Fade_ButtonStatus(data) (*(data) = Rte_LIN_BunkH2Fade_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_64ae31ec_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2IntLightActvnBtn_sta_LIN_BunkH2IntLightActvnBtn_sta Rte_Read_TestLin_LIN_BunkH2IntLightActvnBtn_sta_LIN_BunkH2IntLightActvnBtn_sta
#  define Rte_Read_TestLin_LIN_BunkH2IntLightActvnBtn_sta_LIN_BunkH2IntLightActvnBtn_sta(data) (*(data) = Rte_LIN_BunkH2IntLightActvnBtn_sta_oLECM2toCIOM_FR1_L1_oLIN00_7ae32ea6_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2IntLightDecBtn_stat_LIN_BunkH2IntLightDecBtn_stat Rte_Read_TestLin_LIN_BunkH2IntLightDecBtn_stat_LIN_BunkH2IntLightDecBtn_stat
#  define Rte_Read_TestLin_LIN_BunkH2IntLightDecBtn_stat_LIN_BunkH2IntLightDecBtn_stat(data) (*(data) = Rte_LIN_BunkH2IntLightDecBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_445fc32a_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2IntLightIncBtn_stat_LIN_BunkH2IntLightIncBtn_stat Rte_Read_TestLin_LIN_BunkH2IntLightIncBtn_stat_LIN_BunkH2IntLightIncBtn_stat
#  define Rte_Read_TestLin_LIN_BunkH2IntLightIncBtn_stat_LIN_BunkH2IntLightIncBtn_stat(data) (*(data) = Rte_LIN_BunkH2IntLightIncBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_a3c1ab0b_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2LockButtonStatus_LIN_BunkH2LockButtonStatus Rte_Read_TestLin_LIN_BunkH2LockButtonStatus_LIN_BunkH2LockButtonStatus
#  define Rte_Read_TestLin_LIN_BunkH2LockButtonStatus_LIN_BunkH2LockButtonStatus(data) (*(data) = Rte_LIN_BunkH2LockButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_d71d2857_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2OnOFF_ButtonStatus_LIN_BunkH2OnOFF_ButtonStatus Rte_Read_TestLin_LIN_BunkH2OnOFF_ButtonStatus_LIN_BunkH2OnOFF_ButtonStatus
#  define Rte_Read_TestLin_LIN_BunkH2OnOFF_ButtonStatus_LIN_BunkH2OnOFF_ButtonStatus(data) (*(data) = Rte_LIN_BunkH2OnOFF_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_6a259b90_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2PHTi_rqs_sg_LIN_BunkH2PHTi_rqs_sg Rte_Read_TestLin_LIN_BunkH2PHTi_rqs_sg_LIN_BunkH2PHTi_rqs_sg
#  define Rte_Read_LIN_BunkH2ParkHeater_ButtonSta_LIN_BunkH2ParkHeater_ButtonSta Rte_Read_TestLin_LIN_BunkH2ParkHeater_ButtonSta_LIN_BunkH2ParkHeater_ButtonSta
#  define Rte_Read_TestLin_LIN_BunkH2ParkHeater_ButtonSta_LIN_BunkH2ParkHeater_ButtonSta(data) (*(data) = Rte_LIN_BunkH2ParkHeater_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_2be63ba3_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2Phone_ButtonStatus_LIN_BunkH2Phone_ButtonStatus Rte_Read_TestLin_LIN_BunkH2Phone_ButtonStatus_LIN_BunkH2Phone_ButtonStatus
#  define Rte_Read_TestLin_LIN_BunkH2Phone_ButtonStatus_LIN_BunkH2Phone_ButtonStatus(data) (*(data) = Rte_LIN_BunkH2Phone_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_99e0fe87_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2PowerWinCloseDSBtn_s_LIN_BunkH2PowerWinCloseDSBtn_s Rte_Read_TestLin_LIN_BunkH2PowerWinCloseDSBtn_s_LIN_BunkH2PowerWinCloseDSBtn_s
#  define Rte_Read_TestLin_LIN_BunkH2PowerWinCloseDSBtn_s_LIN_BunkH2PowerWinCloseDSBtn_s(data) (*(data) = Rte_LIN_BunkH2PowerWinCloseDSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_9fa2715d_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2PowerWinClosePSBtn_s_LIN_BunkH2PowerWinClosePSBtn_s Rte_Read_TestLin_LIN_BunkH2PowerWinClosePSBtn_s_LIN_BunkH2PowerWinClosePSBtn_s
#  define Rte_Read_TestLin_LIN_BunkH2PowerWinClosePSBtn_s_LIN_BunkH2PowerWinClosePSBtn_s(data) (*(data) = Rte_LIN_BunkH2PowerWinClosePSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_281d2c26_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2PowerWinOpenDSBtn_st_LIN_BunkH2PowerWinOpenDSBtn_st Rte_Read_TestLin_LIN_BunkH2PowerWinOpenDSBtn_st_LIN_BunkH2PowerWinOpenDSBtn_st
#  define Rte_Read_TestLin_LIN_BunkH2PowerWinOpenDSBtn_st_LIN_BunkH2PowerWinOpenDSBtn_st(data) (*(data) = Rte_LIN_BunkH2PowerWinOpenDSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_0df6d397_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2PowerWinOpenPSBtn_st_LIN_BunkH2PowerWinOpenPSBtn_st Rte_Read_TestLin_LIN_BunkH2PowerWinOpenPSBtn_st_LIN_BunkH2PowerWinOpenPSBtn_st
#  define Rte_Read_TestLin_LIN_BunkH2PowerWinOpenPSBtn_st_LIN_BunkH2PowerWinOpenPSBtn_st(data) (*(data) = Rte_LIN_BunkH2PowerWinOpenPSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_ca96c47e_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2RoofhatchCloseBtn_St_LIN_BunkH2RoofhatchCloseBtn_St Rte_Read_TestLin_LIN_BunkH2RoofhatchCloseBtn_St_LIN_BunkH2RoofhatchCloseBtn_St
#  define Rte_Read_TestLin_LIN_BunkH2RoofhatchCloseBtn_St_LIN_BunkH2RoofhatchCloseBtn_St(data) (*(data) = Rte_LIN_BunkH2RoofhatchCloseBtn_St_oLECM2toCIOM_FR1_L1_oLIN00_c184d263_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2RoofhatchOpenBtn_Sta_LIN_BunkH2RoofhatchOpenBtn_Sta Rte_Read_TestLin_LIN_BunkH2RoofhatchOpenBtn_Sta_LIN_BunkH2RoofhatchOpenBtn_Sta
#  define Rte_Read_TestLin_LIN_BunkH2RoofhatchOpenBtn_Sta_LIN_BunkH2RoofhatchOpenBtn_Sta(data) (*(data) = Rte_LIN_BunkH2RoofhatchOpenBtn_Sta_oLECM2toCIOM_FR1_L1_oLIN00_dd2458bc_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2TempDec_ButtonStatus_LIN_BunkH2TempDec_ButtonStatus Rte_Read_TestLin_LIN_BunkH2TempDec_ButtonStatus_LIN_BunkH2TempDec_ButtonStatus
#  define Rte_Read_TestLin_LIN_BunkH2TempDec_ButtonStatus_LIN_BunkH2TempDec_ButtonStatus(data) (*(data) = Rte_LIN_BunkH2TempDec_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_857664ae_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2TempInc_ButtonStatus_LIN_BunkH2TempInc_ButtonStatus Rte_Read_TestLin_LIN_BunkH2TempInc_ButtonStatus_LIN_BunkH2TempInc_ButtonStatus
#  define Rte_Read_TestLin_LIN_BunkH2TempInc_ButtonStatus_LIN_BunkH2TempInc_ButtonStatus(data) (*(data) = Rte_LIN_BunkH2TempInc_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_61f74d27_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2VolumeDown_ButtonSta_LIN_BunkH2VolumeDown_ButtonSta Rte_Read_TestLin_LIN_BunkH2VolumeDown_ButtonSta_LIN_BunkH2VolumeDown_ButtonSta
#  define Rte_Read_TestLin_LIN_BunkH2VolumeDown_ButtonSta_LIN_BunkH2VolumeDown_ButtonSta(data) (*(data) = Rte_LIN_BunkH2VolumeDown_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_e04f5721_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_BunkH2VolumeUp_ButtonStatu_LIN_BunkH2VolumeUp_ButtonStatu Rte_Read_TestLin_LIN_BunkH2VolumeUp_ButtonStatu_LIN_BunkH2VolumeUp_ButtonStatu
#  define Rte_Read_TestLin_LIN_BunkH2VolumeUp_ButtonStatu_LIN_BunkH2VolumeUp_ButtonStatu(data) (*(data) = Rte_LIN_BunkH2VolumeUp_ButtonStatu_oLECM2toCIOM_FR1_L1_oLIN00_92cefa8d_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_DRL_ButtonStatus_LIN_DRL_ButtonStatus Rte_Read_TestLin_LIN_DRL_ButtonStatus_LIN_DRL_ButtonStatus
#  define Rte_Read_TestLin_LIN_DRL_ButtonStatus_LIN_DRL_ButtonStatus(data) (*(data) = Rte_LIN_DRL_ButtonStatus_oELCP2toCIOM_L4_oLIN03_e8cb5735_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_DifflockDeactivationBtn_st_LIN_DifflockDeactivationBtn_st Rte_Read_TestLin_LIN_DifflockDeactivationBtn_st_LIN_DifflockDeactivationBtn_st
#  define Rte_Read_TestLin_LIN_DifflockDeactivationBtn_st_LIN_DifflockDeactivationBtn_st(data) (*(data) = Rte_LIN_DifflockDeactivationBtn_st_oDLFWtoCIOM_L4_oLIN03_7700113d_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_DifflockMode_Wheelstatus_LIN_DifflockMode_Wheelstatus Rte_Read_TestLin_LIN_DifflockMode_Wheelstatus_LIN_DifflockMode_Wheelstatus
#  define Rte_Read_TestLin_LIN_DifflockMode_Wheelstatus_LIN_DifflockMode_Wheelstatus(data) (*(data) = Rte_LIN_DifflockMode_Wheelstatus_oDLFWtoCIOM_L4_oLIN03_80a746c7_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_DoorAutoFuncBtn_stat_LIN_DoorAutoFuncBtn_stat Rte_Read_TestLin_LIN_DoorAutoFuncBtn_stat_LIN_DoorAutoFuncBtn_stat
#  define Rte_Read_LIN_EscButtonMuddySiteStatus_LIN_EscButtonMuddySiteStatus Rte_Read_TestLin_LIN_EscButtonMuddySiteStatus_LIN_EscButtonMuddySiteStatus
#  define Rte_Read_TestLin_LIN_EscButtonMuddySiteStatus_LIN_EscButtonMuddySiteStatus(data) (*(data) = Rte_LIN_EscButtonMuddySiteStatus_oDLFWtoCIOM_L4_oLIN03_ac37f393_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_FCWPushButton_LIN_FCWPushButton Rte_Read_TestLin_LIN_FCWPushButton_LIN_FCWPushButton
#  define Rte_Read_TestLin_LIN_FCWPushButton_LIN_FCWPushButton(data) (*(data) = Rte_LIN_FCWPushButton_oCCFWtoCIOM_L4_oLIN03_242f5462_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_FogLightFront_ButtonStat_1_LIN_FogLightFront_ButtonStat_1 Rte_Read_TestLin_LIN_FogLightFront_ButtonStat_1_LIN_FogLightFront_ButtonStat_1
#  define Rte_Read_TestLin_LIN_FogLightFront_ButtonStat_1_LIN_FogLightFront_ButtonStat_1(data) (*(data) = Rte_LIN_FogLightFront_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_e1a5bfc2_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_FogLightFront_ButtonStat_2_LIN_FogLightFront_ButtonStat_2 Rte_Read_TestLin_LIN_FogLightFront_ButtonStat_2_LIN_FogLightFront_ButtonStat_2
#  define Rte_Read_TestLin_LIN_FogLightFront_ButtonStat_2_LIN_FogLightFront_ButtonStat_2(data) (*(data) = Rte_LIN_FogLightFront_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_ea214d6e_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_FogLightRear_ButtonStat_1_LIN_FogLightRear_ButtonStat_1 Rte_Read_TestLin_LIN_FogLightRear_ButtonStat_1_LIN_FogLightRear_ButtonStat_1
#  define Rte_Read_TestLin_LIN_FogLightRear_ButtonStat_1_LIN_FogLightRear_ButtonStat_1(data) (*(data) = Rte_LIN_FogLightRear_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_14baadea_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_FogLightRear_ButtonStat_2_LIN_FogLightRear_ButtonStat_2 Rte_Read_TestLin_LIN_FogLightRear_ButtonStat_2_LIN_FogLightRear_ButtonStat_2
#  define Rte_Read_TestLin_LIN_FogLightRear_ButtonStat_2_LIN_FogLightRear_ButtonStat_2(data) (*(data) = Rte_LIN_FogLightRear_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_1f3e5f46_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_HeadLampUpDown_SwitchStatu_LIN_HeadLampUpDown_SwitchStatu Rte_Read_TestLin_LIN_HeadLampUpDown_SwitchStatu_LIN_HeadLampUpDown_SwitchStatu
#  define Rte_Read_TestLin_LIN_HeadLampUpDown_SwitchStatu_LIN_HeadLampUpDown_SwitchStatu(data) (*(data) = Rte_LIN_HeadLampUpDown_SwitchStatu_oELCP2toCIOM_L4_oLIN03_ea48cea1_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_IntLghtCenterBtnFreeWhl_s_LIN_IntLghtCenterBtnFreeWhl_s Rte_Read_TestLin_LIN_IntLghtCenterBtnFreeWhl_s_LIN_IntLghtCenterBtnFreeWhl_s
#  define Rte_Read_TestLin_LIN_IntLghtCenterBtnFreeWhl_s_LIN_IntLghtCenterBtnFreeWhl_s(data) (*(data) = Rte_LIN_IntLghtCenterBtnFreeWhl_s_oILCP2toCIOM_L4_oLIN03_27a7dc09_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_IntLghtDimmingLvlDecBtn_s_LIN_IntLghtDimmingLvlDecBtn_s Rte_Read_TestLin_LIN_IntLghtDimmingLvlDecBtn_s_LIN_IntLghtDimmingLvlDecBtn_s
#  define Rte_Read_LIN_IntLghtDimmingLvlFreeWhl_s_LIN_IntLghtDimmingLvlFreeWhl_s Rte_Read_TestLin_LIN_IntLghtDimmingLvlFreeWhl_s_LIN_IntLghtDimmingLvlFreeWhl_s
#  define Rte_Read_TestLin_LIN_IntLghtDimmingLvlFreeWhl_s_LIN_IntLghtDimmingLvlFreeWhl_s(data) (*(data) = Rte_LIN_IntLghtDimmingLvlFreeWhl_s_oILCP2toCIOM_L4_oLIN03_9d9afdd7_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_IntLghtDimmingLvlIncBtn_s_LIN_IntLghtDimmingLvlIncBtn_s Rte_Read_TestLin_LIN_IntLghtDimmingLvlIncBtn_s_LIN_IntLghtDimmingLvlIncBtn_s
#  define Rte_Read_LIN_IntLghtMaxModeBtnPnl2_s_LIN_IntLghtMaxModeBtnPnl2_s Rte_Read_TestLin_LIN_IntLghtMaxModeBtnPnl2_s_LIN_IntLghtMaxModeBtnPnl2_s
#  define Rte_Read_TestLin_LIN_IntLghtMaxModeBtnPnl2_s_LIN_IntLghtMaxModeBtnPnl2_s(data) (*(data) = Rte_LIN_IntLghtMaxModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_eeb895fc_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_IntLghtModeSelrFreeWheel_s_LIN_IntLghtModeSelrFreeWheel_s Rte_Read_TestLin_LIN_IntLghtModeSelrFreeWheel_s_LIN_IntLghtModeSelrFreeWheel_s
#  define Rte_Read_LIN_IntLghtNightModeBt2_s_LIN_IntLghtNightModeBt2_s Rte_Read_TestLin_LIN_IntLghtNightModeBt2_s_LIN_IntLghtNightModeBt2_s
#  define Rte_Read_TestLin_LIN_IntLghtNightModeBt2_s_LIN_IntLghtNightModeBt2_s(data) (*(data) = Rte_LIN_IntLghtNightModeBt2_s_oILCP2toCIOM_L4_oLIN03_c1a85f21_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_IntLghtRestModeBtnPnl2_s_LIN_IntLghtRestModeBtnPnl2_s Rte_Read_TestLin_LIN_IntLghtRestModeBtnPnl2_s_LIN_IntLghtRestModeBtnPnl2_s
#  define Rte_Read_TestLin_LIN_IntLghtRestModeBtnPnl2_s_LIN_IntLghtRestModeBtnPnl2_s(data) (*(data) = Rte_LIN_IntLghtRestModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_46e1f77a_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_LKSPushButton_LIN_LKSPushButton Rte_Read_TestLin_LIN_LKSPushButton_LIN_LKSPushButton
#  define Rte_Read_TestLin_LIN_LKSPushButton_LIN_LKSPushButton(data) (*(data) = Rte_LIN_LKSPushButton_oCCFWtoCIOM_L4_oLIN03_8e8e108b_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_LevelingThumbwheel_stat_LIN_LevelingThumbwheel_stat Rte_Read_TestLin_LIN_LevelingThumbwheel_stat_LIN_LevelingThumbwheel_stat
#  define Rte_Read_TestLin_LIN_LevelingThumbwheel_stat_LIN_LevelingThumbwheel_stat(data) (*(data) = Rte_LIN_LevelingThumbwheel_stat_oELCP1toCIOM_L4_oLIN03_cb03d712_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_LightMode_Status_1_LIN_LightMode_Status_1 Rte_Read_TestLin_LIN_LightMode_Status_1_LIN_LightMode_Status_1
#  define Rte_Read_TestLin_LIN_LightMode_Status_1_LIN_LightMode_Status_1(data) (*(data) = Rte_LIN_LightMode_Status_1_oELCP1toCIOM_L4_oLIN03_c62c6da2_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_LightMode_Status_2_LIN_LightMode_Status_2 Rte_Read_TestLin_LIN_LightMode_Status_2_LIN_LightMode_Status_2
#  define Rte_Read_TestLin_LIN_LightMode_Status_2_LIN_LightMode_Status_2(data) (*(data) = Rte_LIN_LightMode_Status_2_oELCP2toCIOM_L4_oLIN03_cda89f0e_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_MemButtonStatus_LIN_MemButtonStatus Rte_Read_TestLin_LIN_MemButtonStatus_LIN_MemButtonStatus
#  define Rte_Read_TestLin_LIN_MemButtonStatus_LIN_MemButtonStatus(data) (*(data) = Rte_LIN_MemButtonStatus_oRCECStoCIOM_L5_oLIN04_0975e3a6_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_Offroad_ButtonStatus_LIN_Offroad_ButtonStatus Rte_Read_TestLin_LIN_Offroad_ButtonStatus_LIN_Offroad_ButtonStatus
#  define Rte_Read_TestLin_LIN_Offroad_ButtonStatus_LIN_Offroad_ButtonStatus(data) (*(data) = Rte_LIN_Offroad_ButtonStatus_oDLFWtoCIOM_L4_oLIN03_2199360f_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_RearWorkProjector_BtnStat_LIN_RearWorkProjector_BtnStat Rte_Read_TestLin_LIN_RearWorkProjector_BtnStat_LIN_RearWorkProjector_BtnStat
#  define Rte_Read_TestLin_LIN_RearWorkProjector_BtnStat_LIN_RearWorkProjector_BtnStat(data) (*(data) = Rte_LIN_RearWorkProjector_BtnStat_oELCP2toCIOM_L4_oLIN03_bb9bb1f8_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_SelectButtonStatus_LIN_SelectButtonStatus Rte_Read_TestLin_LIN_SelectButtonStatus_LIN_SelectButtonStatus
#  define Rte_Read_TestLin_LIN_SelectButtonStatus_LIN_SelectButtonStatus(data) (*(data) = Rte_LIN_SelectButtonStatus_oRCECStoCIOM_L5_oLIN04_07d81d0f_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_SpeedControlModeButtonStat_LIN_SpeedControlModeButtonStat Rte_Read_TestLin_LIN_SpeedControlModeButtonStat_LIN_SpeedControlModeButtonStat
#  define Rte_Read_TestLin_LIN_SpeedControlModeButtonStat_LIN_SpeedControlModeButtonStat(data) (*(data) = Rte_LIN_SpeedControlModeButtonStat_oCCFWtoCIOM_L4_oLIN03_0f6013d7_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_SpeedControlModeWheelStat_LIN_SpeedControlModeWheelStat Rte_Read_TestLin_LIN_SpeedControlModeWheelStat_LIN_SpeedControlModeWheelStat
#  define Rte_Read_TestLin_LIN_SpeedControlModeWheelStat_LIN_SpeedControlModeWheelStat(data) (*(data) = Rte_LIN_SpeedControlModeWheelStat_oCCFWtoCIOM_L4_oLIN03_cc9e59ce_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_StopButtonStatus_LIN_StopButtonStatus Rte_Read_TestLin_LIN_StopButtonStatus_LIN_StopButtonStatus
#  define Rte_Read_TestLin_LIN_StopButtonStatus_LIN_StopButtonStatus(data) (*(data) = Rte_LIN_StopButtonStatus_oRCECStoCIOM_L5_oLIN04_c8659d40_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_TCP_ABS_ButtonStatus_LIN_TCP_ABS_ButtonStatus Rte_Read_TestLin_LIN_TCP_ABS_ButtonStatus_LIN_TCP_ABS_ButtonStatus
#  define Rte_Read_TestLin_LIN_TCP_ABS_ButtonStatus_LIN_TCP_ABS_ButtonStatus(data) (*(data) = Rte_LIN_TCP_ABS_ButtonStatus_oTCPtoMaster_oLIN02_7968eb64_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_TCP_ATC_ButtonStatus_LIN_TCP_ATC_ButtonStatus Rte_Read_TestLin_LIN_TCP_ATC_ButtonStatus_LIN_TCP_ATC_ButtonStatus
#  define Rte_Read_TestLin_LIN_TCP_ATC_ButtonStatus_LIN_TCP_ATC_ButtonStatus(data) (*(data) = Rte_LIN_TCP_ATC_ButtonStatus_oTCPtoMaster_oLIN02_dff3ccff_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_TCP_ESC_ButtonStatus_LIN_TCP_ESC_ButtonStatus Rte_Read_TestLin_LIN_TCP_ESC_ButtonStatus_LIN_TCP_ESC_ButtonStatus
#  define Rte_Read_TestLin_LIN_TCP_ESC_ButtonStatus_LIN_TCP_ESC_ButtonStatus(data) (*(data) = Rte_LIN_TCP_ESC_ButtonStatus_oTCPtoMaster_oLIN02_e4eaf9d3_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_TCP_KnobPostionStatus_LIN_TCP_KnobPostionStatus Rte_Read_TestLin_LIN_TCP_KnobPostionStatus_LIN_TCP_KnobPostionStatus
#  define Rte_Read_TestLin_LIN_TCP_KnobPostionStatus_LIN_TCP_KnobPostionStatus(data) (*(data) = Rte_LIN_TCP_KnobPostionStatus_oTCPtoMaster_oLIN02_d1058f2b_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_TCP_TCS_ButtonStatus_LIN_TCP_TCS_ButtonStatus Rte_Read_TestLin_LIN_TCP_TCS_ButtonStatus_LIN_TCP_TCS_ButtonStatus
#  define Rte_Read_TestLin_LIN_TCP_TCS_ButtonStatus_LIN_TCP_TCS_ButtonStatus(data) (*(data) = Rte_LIN_TCP_TCS_ButtonStatus_oTCPtoMaster_oLIN02_fa9712f2_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_WRDownButtonStatus_LIN_WRDownButtonStatus Rte_Read_TestLin_LIN_WRDownButtonStatus_LIN_WRDownButtonStatus
#  define Rte_Read_TestLin_LIN_WRDownButtonStatus_LIN_WRDownButtonStatus(data) (*(data) = Rte_LIN_WRDownButtonStatus_oRCECStoCIOM_L5_oLIN04_48a8dab2_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LIN_WRUpButtonStatus_LIN_WRUpButtonStatus Rte_Read_TestLin_LIN_WRUpButtonStatus_LIN_WRUpButtonStatus
#  define Rte_Read_TestLin_LIN_WRUpButtonStatus_LIN_WRUpButtonStatus(data) (*(data) = Rte_LIN_WRUpButtonStatus_oRCECStoCIOM_L5_oLIN04_a2873536_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ResponseErrorCCFW_ResponseErrorCCFW Rte_Read_TestLin_ResponseErrorCCFW_ResponseErrorCCFW
#  define Rte_Read_TestLin_ResponseErrorCCFW_ResponseErrorCCFW(data) (*(data) = Rte_ResponseErrorCCFW_oCCFWtoCIOM_L4_oLIN03_38ff59f8_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ResponseErrorDLFW_ResponseErrorDLFW Rte_Read_TestLin_ResponseErrorDLFW_ResponseErrorDLFW
#  define Rte_Read_TestLin_ResponseErrorDLFW_ResponseErrorDLFW(data) (*(data) = Rte_ResponseErrorDLFW_oDLFWtoCIOM_L4_oLIN03_a0bc7d9c_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ResponseErrorELCP1_ResponseErrorELCP1 Rte_Read_TestLin_ResponseErrorELCP1_ResponseErrorELCP1
#  define Rte_Read_TestLin_ResponseErrorELCP1_ResponseErrorELCP1(data) (*(data) = Rte_ResponseErrorELCP1_oELCP1toCIOM_L4_oLIN03_a9bf457f_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ResponseErrorELCP2_ResponseErrorELCP2 Rte_Read_TestLin_ResponseErrorELCP2_ResponseErrorELCP2
#  define Rte_Read_TestLin_ResponseErrorELCP2_ResponseErrorELCP2(data) (*(data) = Rte_ResponseErrorELCP2_oELCP2toCIOM_L4_oLIN03_a23bb7d3_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ResponseErrorILCP1_ResponseErrorILCP1 Rte_Read_TestLin_ResponseErrorILCP1_ResponseErrorILCP1
#  define Rte_Read_ResponseErrorILCP2_ResponseErrorILCP2 Rte_Read_TestLin_ResponseErrorILCP2_ResponseErrorILCP2
#  define Rte_Read_TestLin_ResponseErrorILCP2_ResponseErrorILCP2(data) (*(data) = Rte_ResponseErrorILCP2_oILCP2toCIOM_L4_oLIN03_9e48a682_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ResponseErrorLECM2_ResponseErrorLECM2 Rte_Read_TestLin_ResponseErrorLECM2_ResponseErrorLECM2
#  define Rte_Read_TestLin_ResponseErrorLECM2_ResponseErrorLECM2(data) (*(data) = Rte_ResponseErrorLECM2_oLECM2toCIOM_FR1_L1_oLIN00_ed8050df_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ResponseErrorLECMBasic_ResponseErrorLECMBasic Rte_Read_TestLin_ResponseErrorLECMBasic_ResponseErrorLECMBasic
#  define Rte_Read_TestLin_ResponseErrorLECMBasic_ResponseErrorLECMBasic(data) (*(data) = Rte_ResponseErrorLECMBasic_oLECMBasic2CIOM_L1_oLIN00_9a0b7e5e_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ResponseErrorRCECS_ResponseErrorRCECS Rte_Read_TestLin_ResponseErrorRCECS_ResponseErrorRCECS
#  define Rte_Read_TestLin_ResponseErrorRCECS_ResponseErrorRCECS(data) (*(data) = Rte_ResponseErrorRCECS_oRCECStoCIOM_L5_oLIN04_07d94fb4_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ResponseErrorTCP_ResponseErrorTCP Rte_Read_TestLin_ResponseErrorTCP_ResponseErrorTCP
#  define Rte_Read_TestLin_ResponseErrorTCP_ResponseErrorTCP(data) (*(data) = Rte_ResponseErrorTCP_oTCPtoMaster_oLIN02_2075be52_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SwitchDetectionNeeded1L1_SwitchDetectionNeeded1L1 Rte_Read_TestLin_SwitchDetectionNeeded1L1_SwitchDetectionNeeded1L1
#  define Rte_Read_SwitchDetectionNeeded1L2_SwitchDetectionNeeded1L2 Rte_Read_TestLin_SwitchDetectionNeeded1L2_SwitchDetectionNeeded1L2
#  define Rte_Read_TestLin_SwitchDetectionNeeded1L2_SwitchDetectionNeeded1L2(data) (*(data) = Rte_SwitchDetectionNeeded1L2_oFSP1_Frame_L2_oLIN01_86f68c15_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SwitchDetectionNeeded1L3_SwitchDetectionNeeded1L3 Rte_Read_TestLin_SwitchDetectionNeeded1L3_SwitchDetectionNeeded1L3
#  define Rte_Read_TestLin_SwitchDetectionNeeded1L3_SwitchDetectionNeeded1L3(data) (*(data) = Rte_SwitchDetectionNeeded1L3_oFSP1_Frame_L3_oLIN02_482637e5_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SwitchDetectionNeeded1L4_SwitchDetectionNeeded1L4 Rte_Read_TestLin_SwitchDetectionNeeded1L4_SwitchDetectionNeeded1L4
#  define Rte_Read_TestLin_SwitchDetectionNeeded1L4_SwitchDetectionNeeded1L4(data) (*(data) = Rte_SwitchDetectionNeeded1L4_oFSP1_Frame_L4_oLIN03_435d96c4_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SwitchDetectionNeeded1L5_SwitchDetectionNeeded1L5 Rte_Read_TestLin_SwitchDetectionNeeded1L5_SwitchDetectionNeeded1L5
#  define Rte_Read_TestLin_SwitchDetectionNeeded1L5_SwitchDetectionNeeded1L5(data) (*(data) = Rte_SwitchDetectionNeeded1L5_oFSP1_Frame_L5_oLIN04_8ae0e92d_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SwitchDetectionNeeded2L1_SwitchDetectionNeeded2L1 Rte_Read_TestLin_SwitchDetectionNeeded2L1_SwitchDetectionNeeded2L1
#  define Rte_Read_SwitchDetectionNeeded2L2_SwitchDetectionNeeded2L2 Rte_Read_TestLin_SwitchDetectionNeeded2L2_SwitchDetectionNeeded2L2
#  define Rte_Read_TestLin_SwitchDetectionNeeded2L2_SwitchDetectionNeeded2L2(data) (*(data) = Rte_SwitchDetectionNeeded2L2_oFSP2_Frame_L2_oLIN01_e08161c2_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SwitchDetectionNeeded2L3_SwitchDetectionNeeded2L3 Rte_Read_TestLin_SwitchDetectionNeeded2L3_SwitchDetectionNeeded2L3
#  define Rte_Read_TestLin_SwitchDetectionNeeded2L3_SwitchDetectionNeeded2L3(data) (*(data) = Rte_SwitchDetectionNeeded2L3_oFSP2_Frame_L3_oLIN02_2e51da32_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SwitchDetectionNeeded3L2_SwitchDetectionNeeded3L2 Rte_Read_TestLin_SwitchDetectionNeeded3L2_SwitchDetectionNeeded3L2
#  define Rte_Read_TestLin_SwitchDetectionNeeded3L2_SwitchDetectionNeeded3L2(data) (*(data) = Rte_SwitchDetectionNeeded3L2_oFSP3_Frame_L2_oLIN01_c2ac3a8f_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SwitchDetectionNeeded4L2_SwitchDetectionNeeded4L2 Rte_Read_TestLin_SwitchDetectionNeeded4L2_SwitchDetectionNeeded4L2
#  define Rte_Read_TestLin_SwitchDetectionNeeded4L2_SwitchDetectionNeeded4L2(data) (*(data) = Rte_SwitchDetectionNeeded4L2_oFSP4_Frame_L2_oLIN01_2c6eba6c_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SwitchDetectionResp1L1_SwitchDetectionResp1L1 Rte_Read_TestLin_SwitchDetectionResp1L1_SwitchDetectionResp1L1
#  define Rte_Read_SwitchDetectionResp1L2_SwitchDetectionResp1L2 Rte_Read_TestLin_SwitchDetectionResp1L2_SwitchDetectionResp1L2
#  define Rte_Read_SwitchDetectionResp1L3_SwitchDetectionResp1L3 Rte_Read_TestLin_SwitchDetectionResp1L3_SwitchDetectionResp1L3
#  define Rte_Read_SwitchDetectionResp1L4_SwitchDetectionResp1L4 Rte_Read_TestLin_SwitchDetectionResp1L4_SwitchDetectionResp1L4
#  define Rte_Read_SwitchDetectionResp1L5_SwitchDetectionResp1L5 Rte_Read_TestLin_SwitchDetectionResp1L5_SwitchDetectionResp1L5
#  define Rte_Read_SwitchDetectionResp2L1_SwitchDetectionResp2L1 Rte_Read_TestLin_SwitchDetectionResp2L1_SwitchDetectionResp2L1
#  define Rte_Read_SwitchDetectionResp2L2_SwitchDetectionResp2L2 Rte_Read_TestLin_SwitchDetectionResp2L2_SwitchDetectionResp2L2
#  define Rte_Read_SwitchDetectionResp2L3_SwitchDetectionResp2L3 Rte_Read_TestLin_SwitchDetectionResp2L3_SwitchDetectionResp2L3
#  define Rte_Read_SwitchDetectionResp3L2_SwitchDetectionResp3L2 Rte_Read_TestLin_SwitchDetectionResp3L2_SwitchDetectionResp3L2
#  define Rte_Read_SwitchDetectionResp4L2_SwitchDetectionResp4L2 Rte_Read_TestLin_SwitchDetectionResp4L2_SwitchDetectionResp4L2


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_ABS_Indication_ABS_Indication Rte_Write_TestLin_ABS_Indication_ABS_Indication
#  define Rte_Write_ATC_Indication_ATC_Indication Rte_Write_TestLin_ATC_Indication_ATC_Indication
#  define Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN1Schedule_BswM_MDGP_BswMRteMDG_LIN1Schedule_requestedMode Rte_Write_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN1Schedule_BswM_MDGP_BswMRteMDG_LIN1Schedule_requestedMode
#  define Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN2Schedule_BswM_MDGP_BswMRteMDG_LIN2Schedule_requestedMode Rte_Write_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN2Schedule_BswM_MDGP_BswMRteMDG_LIN2Schedule_requestedMode
#  define Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN3Schedule_BswM_MDGP_BswMRteMDG_LIN3Schedule_requestedMode Rte_Write_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN3Schedule_BswM_MDGP_BswMRteMDG_LIN3Schedule_requestedMode
#  define Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN4Schedule_BswM_MDGP_BswMRteMDG_LIN4Schedule_requestedMode Rte_Write_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN4Schedule_BswM_MDGP_BswMRteMDG_LIN4Schedule_requestedMode
#  define Rte_Write_BswM_SRI_BswM_MSI_BswMRteMDG_LIN5Schedule_BswM_MDGP_BswMRteMDG_LIN5Schedule_requestedMode Rte_Write_TestLin_BswM_SRI_BswM_MSI_BswMRteMDG_LIN5Schedule_BswM_MDGP_BswMRteMDG_LIN5Schedule_requestedMode
#  define Rte_Write_DoorLock_stat_DoorLock_stat Rte_Write_TestLin_DoorLock_stat_DoorLock_stat
#  define Rte_Write_ESC_Indication_ESC_Indication Rte_Write_TestLin_ESC_Indication_ESC_Indication
#  define Rte_Write_FSP1IndicationCmdL2_FSP1IndicationCmdL2 Rte_Write_TestLin_FSP1IndicationCmdL2_FSP1IndicationCmdL2
#  define Rte_Write_FSP1IndicationCmdL3_FSP1IndicationCmdL3 Rte_Write_TestLin_FSP1IndicationCmdL3_FSP1IndicationCmdL3
#  define Rte_Write_FSP1IndicationCmdL4_FSP1IndicationCmdL4 Rte_Write_TestLin_FSP1IndicationCmdL4_FSP1IndicationCmdL4
#  define Rte_Write_FSP1IndicationCmdL5_FSP1IndicationCmdL5 Rte_Write_TestLin_FSP1IndicationCmdL5_FSP1IndicationCmdL5
#  define Rte_Write_FSP2IndicationCmdL1_FSP2IndicationCmdL1 Rte_Write_TestLin_FSP2IndicationCmdL1_FSP2IndicationCmdL1
#  define Rte_Write_FSP2IndicationCmdL2_FSP2IndicationCmdL2 Rte_Write_TestLin_FSP2IndicationCmdL2_FSP2IndicationCmdL2
#  define Rte_Write_FSP2IndicationCmdL3_FSP2IndicationCmdL3 Rte_Write_TestLin_FSP2IndicationCmdL3_FSP2IndicationCmdL3
#  define Rte_Write_FSP3IndicationCmdL2_FSP3IndicationCmdL2 Rte_Write_TestLin_FSP3IndicationCmdL2_FSP3IndicationCmdL2
#  define Rte_Write_FSP4IndicationCmdL2_FSP4IndicationCmdL2 Rte_Write_TestLin_FSP4IndicationCmdL2_FSP4IndicationCmdL2
#  define Rte_Write_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication Rte_Write_TestLin_LIN_ACCOrCCIndication_LIN_ACCOrCCIndication
#  define Rte_Write_LIN_ASLIndication_LIN_ASLIndication Rte_Write_TestLin_LIN_ASLIndication_LIN_ASLIndication
#  define Rte_Write_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication Rte_Write_TestLin_LIN_Adjust_DeviceIndication_LIN_Adjust_DeviceIndication
#  define Rte_Write_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg Rte_Write_TestLin_LIN_AlmClkCurAlarm_stat_sg_LIN_AlmClkCurAlarm_stat_sg
#  define Rte_Write_LIN_AudioSystemStatus_LIN_AudioSystemStatus Rte_Write_TestLin_LIN_AudioSystemStatus_LIN_AudioSystemStatus
#  define Rte_Write_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd Rte_Write_TestLin_LIN_AudioVolumeIndicationCmd_LIN_AudioVolumeIndicationCmd
#  define Rte_Write_LIN_BTStatus_LIN_BTStatus Rte_Write_TestLin_LIN_BTStatus_LIN_BTStatus
#  define Rte_Write_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica Rte_Write_TestLin_LIN_DaytimeRunningLight_Indica_LIN_DaytimeRunningLight_Indica
#  define Rte_Write_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication Rte_Write_TestLin_LIN_DifflockOnOff_Indication_LIN_DifflockOnOff_Indication
#  define Rte_Write_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd Rte_Write_TestLin_LIN_DoorAutoFuncInd_cmd_LIN_DoorAutoFuncInd_cmd
#  define Rte_Write_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication Rte_Write_TestLin_LIN_Down_DeviceIndication_LIN_Down_DeviceIndication
#  define Rte_Write_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio Rte_Write_TestLin_LIN_DrivingLightPlus_Indicatio_LIN_DrivingLightPlus_Indicatio
#  define Rte_Write_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication Rte_Write_TestLin_LIN_DrivingLight_Indication_LIN_DrivingLight_Indication
#  define Rte_Write_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn Rte_Write_TestLin_LIN_EscButtonMuddySiteDeviceIn_LIN_EscButtonMuddySiteDeviceIn
#  define Rte_Write_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication Rte_Write_TestLin_LIN_FCW_DeviceIndication_LIN_FCW_DeviceIndication
#  define Rte_Write_LIN_FrontFog_Indication_LIN_FrontFog_Indication Rte_Write_TestLin_LIN_FrontFog_Indication_LIN_FrontFog_Indication
#  define Rte_Write_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd Rte_Write_TestLin_LIN_IntLghtLvlIndScaled_cmd_LIN_IntLghtLvlIndScaled_cmd
#  define Rte_Write_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg Rte_Write_TestLin_LIN_IntLghtModeInd_cmd_sg_LIN_IntLghtModeInd_cmd_sg
#  define Rte_Write_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd Rte_Write_TestLin_LIN_IntLghtOffModeInd_cmd_LIN_IntLghtOffModeInd_cmd
#  define Rte_Write_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd Rte_Write_TestLin_LIN_IntLightMaxModeInd_cmd_LIN_IntLightMaxModeInd_cmd
#  define Rte_Write_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd Rte_Write_TestLin_LIN_IntLightNightModeInd_cmd_LIN_IntLightNightModeInd_cmd
#  define Rte_Write_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd Rte_Write_TestLin_LIN_IntLightRestingModeInd_cmd_LIN_IntLightRestingModeInd_cmd
#  define Rte_Write_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication Rte_Write_TestLin_LIN_LKS_DeviceIndication_LIN_LKS_DeviceIndication
#  define Rte_Write_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication Rte_Write_TestLin_LIN_M1_DeviceIndication_LIN_M1_DeviceIndication
#  define Rte_Write_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication Rte_Write_TestLin_LIN_M2_DeviceIndication_LIN_M2_DeviceIndication
#  define Rte_Write_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication Rte_Write_TestLin_LIN_M3_DeviceIndication_LIN_M3_DeviceIndication
#  define Rte_Write_LIN_Offroad_Indication_LIN_Offroad_Indication Rte_Write_TestLin_LIN_Offroad_Indication_LIN_Offroad_Indication
#  define Rte_Write_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication Rte_Write_TestLin_LIN_ParkingLight_Indication_LIN_ParkingLight_Indication
#  define Rte_Write_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd Rte_Write_TestLin_LIN_PhoneButtonIndication_cmd_LIN_PhoneButtonIndication_cmd
#  define Rte_Write_LIN_RearFog_Indication_LIN_RearFog_Indication Rte_Write_TestLin_LIN_RearFog_Indication_LIN_RearFog_Indication
#  define Rte_Write_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati Rte_Write_TestLin_LIN_RearWorkProjector_Indicati_LIN_RearWorkProjector_Indicati
#  define Rte_Write_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength Rte_Write_TestLin_LIN_ShortPulseMaxLength_LIN_ShortPulseMaxLength
#  define Rte_Write_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication Rte_Write_TestLin_LIN_Up_DeviceIndication_LIN_Up_DeviceIndication
#  define Rte_Write_TCS_Indication_TCS_Indication Rte_Write_TestLin_TCS_Indication_TCS_Indication


# endif /* !defined(RTE_CORE) */


# define TestLin_START_SEC_CODE
# include "TestLin_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ReTestLin ReTestLin
#  define RTE_RUNNABLE_Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RXCbk Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RXCbk
#  define RTE_RUNNABLE_Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RxTimeout Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RxTimeout
#  define RTE_RUNNABLE_Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RXCbk Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RXCbk
#  define RTE_RUNNABLE_Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RxTimeout Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RxTimeout
#  define RTE_RUNNABLE_Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RXCbk Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RXCbk
#  define RTE_RUNNABLE_Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RxTimeout Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RxTimeout
#  define RTE_RUNNABLE_Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RXCbk Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RXCbk
#  define RTE_RUNNABLE_Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RxTimeout Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RxTimeout
#  define RTE_RUNNABLE_Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RXCbk Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RXCbk
#  define RTE_RUNNABLE_Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RxTimeout Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RxTimeout
#  define RTE_RUNNABLE_Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RXCbk Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RXCbk
#  define RTE_RUNNABLE_Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RxTimeout Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RxTimeout
#  define RTE_RUNNABLE_Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RXCbk Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RXCbk
#  define RTE_RUNNABLE_Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RxTimeout Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RxTimeout
#  define RTE_RUNNABLE_Re_LIN0_ILCP1_DiagInfoILCP1_RXCbk Re_LIN0_ILCP1_DiagInfoILCP1_RXCbk
#  define RTE_RUNNABLE_Re_LIN0_ILCP1_DiagInfoILCP1_RxTimeout Re_LIN0_ILCP1_DiagInfoILCP1_RxTimeout
#  define RTE_RUNNABLE_Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RXCbk Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RXCbk
#  define RTE_RUNNABLE_Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RxTimeout Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RxTimeout
#  define RTE_RUNNABLE_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RXCbk Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RXCbk
#  define RTE_RUNNABLE_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RxTimeout Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RxTimeout
#  define RTE_RUNNABLE_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RXCbk Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RXCbk
#  define RTE_RUNNABLE_Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RxTimeout Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RxTimeout
#  define RTE_RUNNABLE_Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RXCbk Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RXCbk
#  define RTE_RUNNABLE_Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RxTimeout Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RxTimeout
#  define RTE_RUNNABLE_Re_LIN0_ILCP1_ResponseErrorILCP1_RXCbk Re_LIN0_ILCP1_ResponseErrorILCP1_RXCbk
#  define RTE_RUNNABLE_Re_LIN0_ILCP1_ResponseErrorILCP1_RxTimeout Re_LIN0_ILCP1_ResponseErrorILCP1_RxTimeout
# endif

FUNC(void, TestLin_CODE) ReTestLin(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RXCbk(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_FSP1_L1_FSP1DiagInfoL1_RxTimeout(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RXCbk(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_FSP1_L1_FSP1ResponseErrorL1_RxTimeout(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RXCbk(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_FSP1_L1_SwitchDetectionNeeded1L1_RxTimeout(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RXCbk(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_FSP2DiagInfoL1_RxTimeout(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RXCbk(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_FSP2ResponseErrorL1_RxTimeout(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RXCbk(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_FSP2SwitchStatusL1_RxTimeout(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RXCbk(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_FSP2_L1_SwitchDetectionNeeded2L1_RxTimeout(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_DiagInfoILCP1_RXCbk(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_DiagInfoILCP1_RxTimeout(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RXCbk(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_DoorAutoFuncBtn_stat_RxTimeout(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RXCbk(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlDecBtn_s_RxTimeout(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RXCbk(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_IntLghtDimmingLvlIncBtn_s_RxTimeout(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RXCbk(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_LIN_IntLghtModeSelrFreeWheel_s_RxTimeout(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_ResponseErrorILCP1_RXCbk(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TestLin_CODE) Re_LIN0_ILCP1_ResponseErrorILCP1_RxTimeout(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define TestLin_STOP_SEC_CODE
# include "TestLin_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_TESTLIN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
