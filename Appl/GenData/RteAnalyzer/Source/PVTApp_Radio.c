/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PVTApp_Radio.c
 *        Config:  SCIM_BP.dpa
 *     SW-C Type:  PVTApp_Radio
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <PVTApp_Radio>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */ /* MD_Rte_TestCode */

/* PRQA S 3109 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3112 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3197 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3198 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3199 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3201 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3203 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3205 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3206 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3218 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3229 EOF */ /* MD_Rte_TestCode */
/* PRQA S 2002 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3334 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3417 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3426 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3453 EOF */ /* MD_Rte_TestCode */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_PVTApp_Radio.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_PVTApp_Radio.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void PVTApp_Radio_TestDefines(void);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Debug_PVT_Fob_RF_RollingCounter_1: Integer in interval [0...4294967295]
 * Debug_PVT_PEPS_A_AntP1: Integer in interval [-512...511]
 * Debug_PVT_PEPS_A_AntP1_Ctrl: Integer in interval [-512...511]
 * Debug_PVT_PEPS_A_AntP2: Integer in interval [-512...511]
 * Debug_PVT_PEPS_A_AntP2_Ctrl: Integer in interval [-512...511]
 * Debug_PVT_PEPS_A_AntP3: Integer in interval [-512...511]
 * Debug_PVT_PEPS_A_AntP3_Ctrl: Integer in interval [-512...511]
 * Debug_PVT_PEPS_A_AntP4: Integer in interval [-512...511]
 * Debug_PVT_PEPS_A_AntP4_Ctrl: Integer in interval [-512...511]
 * Debug_PVT_PEPS_A_AntPi: Integer in interval [-512...511]
 * Debug_PVT_PEPS_A_AntPi_Ctrl: Integer in interval [-512...511]
 * Debug_PVT_PEPS_AntP1_X: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntP1_X_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntP1_Y: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntP1_Y_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_X: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_X_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_Y: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_Y_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AverRSSI1: Integer in interval [0...255]
 * Debug_PVT_PEPS_AverRSSI2: Integer in interval [0...255]
 * Debug_PVT_PEPS_Avercut: Integer in interval [0...127]
 * Debug_PVT_PEPS_Avercut_Ctrl: Integer in interval [0...127]
 * Debug_PVT_PEPS_CTPoint_X1: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_CTPoint_X2: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_CTPoint_Y1: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_CTPoint_Y2: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_Cali_Cir: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_D_AntP1ToFob: Integer in interval [0...1023]
 * Debug_PVT_PEPS_D_AntP1toP2_Cir: Integer in interval [0...255]
 * Debug_PVT_PEPS_D_AntP1toP2_X: Integer in interval [-512...511]
 * Debug_PVT_PEPS_D_AntP1toP2_Y: Integer in interval [-512...511]
 * Debug_PVT_PEPS_D_AntP2ToFob: Integer in interval [-512...511]
 * Debug_PVT_PEPS_D_AntP3ToFob: Integer in interval [0...1023]
 * Debug_PVT_PEPS_D_AntP4ToFob: Integer in interval [0...1023]
 * Debug_PVT_PEPS_D_AntPiToFob: Integer in interval [0...1023]
 * Debug_PVT_PEPS_DecRSSI: Integer in interval [0...65535]
 * Debug_PVT_PEPS_GainP1_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP1_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP2_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP2_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP3_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP3_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP4_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP4_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainPi_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainPi_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_K_AntP1: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_K_AntP1_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_K_AntP2: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_K_AntP2_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_K_AntP3: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_K_AntP3_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_K_AntP4: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_K_AntP4_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_K_AntPi: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_K_AntPi_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_K_Cir: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_LimitRSSIP1: Integer in interval [0...511]
 * Debug_PVT_PEPS_LimitRSSIP1_Ctrl: Integer in interval [0...511]
 * Debug_PVT_PEPS_LimitRSSIP2: Integer in interval [0...511]
 * Debug_PVT_PEPS_LimitRSSIP2_Ctrl: Integer in interval [0...511]
 * Debug_PVT_PEPS_LimitRSSIP3: Integer in interval [0...511]
 * Debug_PVT_PEPS_LimitRSSIP3_Ctrl: Integer in interval [0...511]
 * Debug_PVT_PEPS_LimitRSSIP4: Integer in interval [0...511]
 * Debug_PVT_PEPS_LimitRSSIP4_Ctrl: Integer in interval [0...511]
 * Debug_PVT_PEPS_LimitRSSIPi: Integer in interval [0...511]
 * Debug_PVT_PEPS_LmitRSSIPi_Ctrl: Integer in interval [0...511]
 * Debug_PVT_PEPS_Logic_stat: Integer in interval [0...7]
 * Debug_PVT_PEPS_P1_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_P2_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_P2_RSSIcut: Integer in interval [0...511]
 * Debug_PVT_PEPS_P2_RSSIcut_Ctrl: Integer in interval [0...511]
 * Debug_PVT_PEPS_P3_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_P3_RSSIcut: Integer in interval [0...511]
 * Debug_PVT_PEPS_P3_RSSIcut_Ctrl: Integer in interval [0...511]
 * Debug_PVT_PEPS_P4_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_Pi_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_Pi_RSSIcut: Integer in interval [0...511]
 * Debug_PVT_PEPS_Pi_RSSIcut_Ctrl: Integer in interval [0...511]
 * Debug_PVT_PEPS_VDSI_Ctrl: Integer in interval [0...1023]
 * Debug_PVT_PEPS_VDSI_stat: Integer in interval [0...1023]
 * Debug_PVT_PEPS_VSquare_Ctrl: Integer in interval [0...65535]
 * Debug_PVT_PEPS_VWidth_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_Vlength: Integer in interval [0...255]
 * Debug_PVT_PEPS_Vlength_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_Vsquare: Integer in interval [0...65535]
 * Debug_PVT_PEPS_Vwidth: Integer in interval [0...255]
 * Debug_PVT_SCIM_RF_KeyfobSerialNb_1: Integer in interval [0...16777215]
 * Debug_PVT_SCIM_RF_RollingCounter_1: Integer in interval [0...4294967295]
 *
 * Enumeration Types:
 * ==================
 * Debug_PVT_Fob_Found: Enumeration of integer in interval [-2...1] with enumerators
 *   Cx0_None (0U)
 *   Cx1_Found (1U)
 *   Cx2_Not_found (2U)
 *   Cx3_Invaild (3U)
 * Debug_PVT_Fob_ID_1: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_Fob8 (0U)
 *   Cx1_Fob1 (1U)
 *   Cx2_Fob2 (2U)
 *   Cx3_Fob3 (3U)
 *   Cx4_Fob4 (4U)
 *   Cx5_Fob5 (5U)
 *   Cx6_Fob6 (6U)
 *   Cx7_Fob7 (7U)
 * Debug_PVT_Fob_Select_1: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_Fob8 (0U)
 *   Cx1_Fob1 (1U)
 *   Cx2_Fob2 (2U)
 *   Cx3_Fob3 (3U)
 *   Cx4_Fob4 (4U)
 *   Cx5_Fob5 (5U)
 *   Cx6_Fob6 (6U)
 *   Cx7_Fob7 (7U)
 * Debug_PVT_PEPS_AntCtrl_stat: Enumeration of integer in interval [-4...3] with enumerators
 *   Cx0_None (0U)
 *   Cx1_Pi_Antenna (1U)
 *   Cx2_P1_Antenna (2U)
 *   Cx3_P2_Antenna (3U)
 *   Cx4_P3_Antenna (4U)
 *   Cx5_P4_Antenna (5U)
 * Debug_PVT_PEPS_Ant_Ctrl: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_None (0U)
 *   Cx1_Pi_Antenna (1U)
 *   Cx2_P1_Antenna (2U)
 *   Cx3_P2_Antenna (3U)
 *   Cx4_P3_Antenna (4U)
 *   Cx5_P4_Antenna (5U)
 * Debug_PVT_PEPS_Fob_location: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_None (0U)
 *   Cx1_Drv (1U)
 *   Cx2_Ast (2U)
 *   Cx3_Front (3U)
 *   Cx4_Inside (4U)
 *   Cx5_Invaild (5U)
 * Debug_PVT_PEPS_Logic_Ctrl: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_None (0U)
 *   Cx1_For_PS_only_Pi (1U)
 *   Cx2_For_PS_only_Pi_P1 (2U)
 *   Cx3_For_PS_PE_Pi_P1_P2_P3 (3U)
 * Debug_PVT_PEPS_TestPeriod_Ctrl: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_None (0U)
 *   Cx1_1s (1U)
 *   Cx2_2s (2U)
 *   Cx3_3s (3U)
 *   Cx4_4s (4U)
 * Debug_PVT_PEPS_TestPeriod_stat: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_None (0U)
 *   Cx1_1s (1U)
 *   Cx2_2s (2U)
 *   Cx3_3s (3U)
 *   Cx4_4s (4U)
 *
 *********************************************************************************************************************/


#define PVTApp_Radio_START_SEC_CODE
#include "PVTApp_Radio_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Re_PvtRadio
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Debug_PVT_Fob_Select_Debug_PVT_Fob_Select(Debug_PVT_Fob_Select_1 *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_A_AntP1_Ctrl_Debug_PVT_PEPS_A_AntP1_Ctrl(Debug_PVT_PEPS_A_AntP1_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_A_AntP2_Ctrl_Debug_PVT_PEPS_A_AntP2_Ctrl(Debug_PVT_PEPS_A_AntP2_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_A_AntP3_Ctrl_Debug_PVT_PEPS_A_AntP3_Ctrl(Debug_PVT_PEPS_A_AntP3_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_A_AntP4_Ctrl_Debug_PVT_PEPS_A_AntP4_Ctrl(Debug_PVT_PEPS_A_AntP4_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_A_AntPi_Ctrl_Debug_PVT_PEPS_A_AntPi_Ctrl(Debug_PVT_PEPS_A_AntPi_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl(Debug_PVT_PEPS_AntP1_X_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl(Debug_PVT_PEPS_AntP1_Y_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl(Debug_PVT_PEPS_AntPi_X_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl(Debug_PVT_PEPS_AntPi_Y_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_Ant_Ctrl_Debug_PVT_PEPS_Ant_Ctrl(Debug_PVT_PEPS_Ant_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_Avercut_Ctrl_Debug_PVT_PEPS_Avercut_Ctrl(Debug_PVT_PEPS_Avercut_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP1_Ctrl_Debug_PVT_PEPS_GainP1_Ctrl(Debug_PVT_PEPS_GainP1_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP2_Ctrl_Debug_PVT_PEPS_GainP2_Ctrl(Debug_PVT_PEPS_GainP2_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP3_Ctrl_Debug_PVT_PEPS_GainP3_Ctrl(Debug_PVT_PEPS_GainP3_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP4_Ctrl_Debug_PVT_PEPS_GainP4_Ctrl(Debug_PVT_PEPS_GainP4_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainPi_Ctrl_Debug_PVT_PEPS_GainPi_Ctrl(Debug_PVT_PEPS_GainPi_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_K_AntP1_Ctrl_Debug_PVT_PEPS_K_AntP1_Ctrl(Debug_PVT_PEPS_K_AntP1_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_K_AntP2_Ctrl_Debug_PVT_PEPS_K_AntP2_Ctrl(Debug_PVT_PEPS_K_AntP2_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_K_AntP3_Ctrl_Debug_PVT_PEPS_K_AntP3_Ctrl(Debug_PVT_PEPS_K_AntP3_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_K_AntP4_Ctrl_Debug_PVT_PEPS_K_AntP4_Ctrl(Debug_PVT_PEPS_K_AntP4_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_K_AntPi_Ctrl_Debug_PVT_PEPS_K_AntPi_Ctrl(Debug_PVT_PEPS_K_AntPi_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_LimitRSSIP1_Ctrl_Debug_PVT_PEPS_LimitRSSIP1_Ctrl(Debug_PVT_PEPS_LimitRSSIP1_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_LimitRSSIP2_Ctrl_Debug_PVT_PEPS_LimitRSSIP2_Ctrl(Debug_PVT_PEPS_LimitRSSIP2_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_LimitRSSIP3_Ctrl_Debug_PVT_PEPS_LimitRSSIP3_Ctrl(Debug_PVT_PEPS_LimitRSSIP3_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_LimitRSSIP4_Ctrl_Debug_PVT_PEPS_LimitRSSIP4_Ctrl(Debug_PVT_PEPS_LimitRSSIP4_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_LmitRSSIPi_Ctrl_Debug_PVT_PEPS_LmitRSSIPi_Ctrl(Debug_PVT_PEPS_LmitRSSIPi_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl(Debug_PVT_PEPS_Logic_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_P2_RSSIcut_Ctrl_Debug_PVT_PEPS_P2_RSSIcut_Ctrl(Debug_PVT_PEPS_P2_RSSIcut_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_P3_RSSIcut_Ctrl_Debug_PVT_PEPS_P3_RSSIcut_Ctrl(Debug_PVT_PEPS_P3_RSSIcut_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl(Debug_PVT_PEPS_Pi_RSSIcut_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_TestPeriod_Ctrl_Debug_PVT_PEPS_TestPeriod_Ctrl(Debug_PVT_PEPS_TestPeriod_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_VDSI_Ctrl_Debug_PVT_PEPS_VDSI_Ctrl(Debug_PVT_PEPS_VDSI_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_VSquare_Ctrl_Debug_PVT_PEPS_VSquare_Ctrl(Debug_PVT_PEPS_VSquare_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_VWidth_Ctrl_Debug_PVT_PEPS_VWidth_Ctrl(Debug_PVT_PEPS_VWidth_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_Vlength_Ctrl_Debug_PVT_PEPS_Vlength_Ctrl(Debug_PVT_PEPS_Vlength_Ctrl *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Debug_PVT_Fob_Found_Debug_PVT_Fob_Found(Debug_PVT_Fob_Found data)
 *   Std_ReturnType Rte_Write_Debug_PVT_Fob_ID_Debug_PVT_Fob_ID(Debug_PVT_Fob_ID_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_Fob_RF_RollingCounter_Debug_PVT_Fob_RF_RollingCounter(Debug_PVT_Fob_RF_RollingCounter_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_A_AntP1_Debug_PVT_PEPS_A_AntP1(Debug_PVT_PEPS_A_AntP1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_A_AntP2_Debug_PVT_PEPS_A_AntP2(Debug_PVT_PEPS_A_AntP2 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_A_AntP3_Debug_PVT_PEPS_A_AntP3(Debug_PVT_PEPS_A_AntP3 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_A_AntP4_Debug_PVT_PEPS_A_AntP4(Debug_PVT_PEPS_A_AntP4 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_A_AntPi_Debug_PVT_PEPS_A_AntPi(Debug_PVT_PEPS_A_AntPi data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntCtrl_stat_Debug_PVT_PEPS_AntCtrl_stat(Debug_PVT_PEPS_AntCtrl_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X(Debug_PVT_PEPS_AntP1_X data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y(Debug_PVT_PEPS_AntP1_Y data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X(Debug_PVT_PEPS_AntPi_X data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y(Debug_PVT_PEPS_AntPi_Y data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AverRSSI1_Debug_PVT_PEPS_AverRSSI1(Debug_PVT_PEPS_AverRSSI1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AverRSSI2_Debug_PVT_PEPS_AverRSSI2(Debug_PVT_PEPS_AverRSSI2 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_Avercut_Debug_PVT_PEPS_Avercut(Debug_PVT_PEPS_Avercut data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_CTPoint_X1_Debug_PVT_PEPS_CTPoint_X1(Debug_PVT_PEPS_CTPoint_X1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_CTPoint_X2_Debug_PVT_PEPS_CTPoint_X2(Debug_PVT_PEPS_CTPoint_X2 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_CTPoint_Y1_Debug_PVT_PEPS_CTPoint_Y1(Debug_PVT_PEPS_CTPoint_Y1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_CTPoint_Y2_Debug_PVT_PEPS_CTPoint_Y2(Debug_PVT_PEPS_CTPoint_Y2 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_Cali_Cir_Debug_PVT_PEPS_Cali_Cir(Debug_PVT_PEPS_Cali_Cir data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_D_AntP1ToFob_Debug_PVT_PEPS_D_AntP1ToFob(Debug_PVT_PEPS_D_AntP1ToFob data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_D_AntP1toP2_Cir_Debug_PVT_PEPS_D_AntP1toP2_Cir(Debug_PVT_PEPS_D_AntP1toP2_Cir data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_D_AntP1toP2_X_Debug_PVT_PEPS_D_AntP1toP2_X(Debug_PVT_PEPS_D_AntP1toP2_X data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_D_AntP1toP2_Y_Debug_PVT_PEPS_D_AntP1toP2_Y(Debug_PVT_PEPS_D_AntP1toP2_Y data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_D_AntP2ToFob_Debug_PVT_PEPS_D_AntP2ToFob(Debug_PVT_PEPS_D_AntP2ToFob data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_D_AntP3ToFob_Debug_PVT_PEPS_D_AntP3ToFob(Debug_PVT_PEPS_D_AntP3ToFob data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_D_AntP4ToFob_Debug_PVT_PEPS_D_AntP4ToFob(Debug_PVT_PEPS_D_AntP4ToFob data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_D_AntPiToFob_Debug_PVT_PEPS_D_AntPiToFob(Debug_PVT_PEPS_D_AntPiToFob data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_DecRSSI_Debug_PVT_PEPS_DecRSSI(Debug_PVT_PEPS_DecRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_Fob_location_Debug_PVT_PEPS_Fob_location(Debug_PVT_PEPS_Fob_location data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP1_stat_Debug_PVT_PEPS_GainP1_stat(Debug_PVT_PEPS_GainP1_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP2_stat_Debug_PVT_PEPS_GainP2_stat(Debug_PVT_PEPS_GainP2_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP3_stat_Debug_PVT_PEPS_GainP3_stat(Debug_PVT_PEPS_GainP3_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP4_stat_Debug_PVT_PEPS_GainP4_stat(Debug_PVT_PEPS_GainP4_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainPi_stat_Debug_PVT_PEPS_GainPi_stat(Debug_PVT_PEPS_GainPi_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_K_AntP1_Debug_PVT_PEPS_K_AntP1(Debug_PVT_PEPS_K_AntP1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_K_AntP2_Debug_PVT_PEPS_K_AntP2(Debug_PVT_PEPS_K_AntP2 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_K_AntP3_Debug_PVT_PEPS_K_AntP3(Debug_PVT_PEPS_K_AntP3 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_K_AntP4_Debug_PVT_PEPS_K_AntP4(Debug_PVT_PEPS_K_AntP4 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_K_AntPi_Debug_PVT_PEPS_K_AntPi(Debug_PVT_PEPS_K_AntPi data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_K_Cir_Debug_PVT_PEPS_K_Cir(Debug_PVT_PEPS_K_Cir data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_LimitRSSIP1_Debug_PVT_PEPS_LimitRSSIP1(Debug_PVT_PEPS_LimitRSSIP1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_LimitRSSIP2_Debug_PVT_PEPS_LimitRSSIP2(Debug_PVT_PEPS_LimitRSSIP2 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_LimitRSSIP3_Debug_PVT_PEPS_LimitRSSIP3(Debug_PVT_PEPS_LimitRSSIP3 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_LimitRSSIP4_Debug_PVT_PEPS_LimitRSSIP4(Debug_PVT_PEPS_LimitRSSIP4 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_LimitRSSIPi_Debug_PVT_PEPS_LimitRSSIPi(Debug_PVT_PEPS_LimitRSSIPi data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_Logic_stat_Debug_PVT_PEPS_Logic_stat(Debug_PVT_PEPS_Logic_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P1_MaxRSSI_Debug_PVT_PEPS_P1_MaxRSSI(Debug_PVT_PEPS_P1_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P2_MaxRSSI_Debug_PVT_PEPS_P2_MaxRSSI(Debug_PVT_PEPS_P2_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P2_RSSIcut_Debug_PVT_PEPS_P2_RSSIcut(Debug_PVT_PEPS_P2_RSSIcut data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P3_MaxRSSI_Debug_PVT_PEPS_P3_MaxRSSI(Debug_PVT_PEPS_P3_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P3_RSSIcut_Debug_PVT_PEPS_P3_RSSIcut(Debug_PVT_PEPS_P3_RSSIcut data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P4_MaxRSSI_Debug_PVT_PEPS_P4_MaxRSSI(Debug_PVT_PEPS_P4_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_Pi_MaxRSSI_Debug_PVT_PEPS_Pi_MaxRSSI(Debug_PVT_PEPS_Pi_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_Pi_RSSIcut_Debug_PVT_PEPS_Pi_RSSIcut(Debug_PVT_PEPS_Pi_RSSIcut data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_TestPeriod_stat_Debug_PVT_PEPS_TestPeriod_stat(Debug_PVT_PEPS_TestPeriod_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_VDSI_stat_Debug_PVT_PEPS_VDSI_stat(Debug_PVT_PEPS_VDSI_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_Vlength_Debug_PVT_PEPS_Vlength(Debug_PVT_PEPS_Vlength data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_Vsquare_Debug_PVT_PEPS_Vsquare(Debug_PVT_PEPS_Vsquare data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_Vwidth_Debug_PVT_PEPS_Vwidth(Debug_PVT_PEPS_Vwidth data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RF_KeyfobSerialNb_Debug_PVT_SCIM_RF_KeyfobSerialNb(Debug_PVT_SCIM_RF_KeyfobSerialNb_1 data)
 *   Std_ReturnType Rte_Write_Debug_PVT_SCIM_RF_RollingCounter_Debug_PVT_SCIM_RF_RollingCounter(Debug_PVT_SCIM_RF_RollingCounter_1 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_PvtRadio_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, PVTApp_Radio_CODE) Re_PvtRadio(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Re_PvtRadio
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  Debug_PVT_Fob_Select_1 Read_Debug_PVT_Fob_Select_Debug_PVT_Fob_Select;
  Debug_PVT_PEPS_A_AntP1_Ctrl Read_Debug_PVT_PEPS_A_AntP1_Ctrl_Debug_PVT_PEPS_A_AntP1_Ctrl;
  Debug_PVT_PEPS_A_AntP2_Ctrl Read_Debug_PVT_PEPS_A_AntP2_Ctrl_Debug_PVT_PEPS_A_AntP2_Ctrl;
  Debug_PVT_PEPS_A_AntP3_Ctrl Read_Debug_PVT_PEPS_A_AntP3_Ctrl_Debug_PVT_PEPS_A_AntP3_Ctrl;
  Debug_PVT_PEPS_A_AntP4_Ctrl Read_Debug_PVT_PEPS_A_AntP4_Ctrl_Debug_PVT_PEPS_A_AntP4_Ctrl;
  Debug_PVT_PEPS_A_AntPi_Ctrl Read_Debug_PVT_PEPS_A_AntPi_Ctrl_Debug_PVT_PEPS_A_AntPi_Ctrl;
  Debug_PVT_PEPS_AntP1_X_Ctrl Read_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl;
  Debug_PVT_PEPS_AntP1_Y_Ctrl Read_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl;
  Debug_PVT_PEPS_AntPi_X_Ctrl Read_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl;
  Debug_PVT_PEPS_AntPi_Y_Ctrl Read_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl;
  Debug_PVT_PEPS_Ant_Ctrl Read_Debug_PVT_PEPS_Ant_Ctrl_Debug_PVT_PEPS_Ant_Ctrl;
  Debug_PVT_PEPS_Avercut_Ctrl Read_Debug_PVT_PEPS_Avercut_Ctrl_Debug_PVT_PEPS_Avercut_Ctrl;
  Debug_PVT_PEPS_GainP1_Ctrl Read_Debug_PVT_PEPS_GainP1_Ctrl_Debug_PVT_PEPS_GainP1_Ctrl;
  Debug_PVT_PEPS_GainP2_Ctrl Read_Debug_PVT_PEPS_GainP2_Ctrl_Debug_PVT_PEPS_GainP2_Ctrl;
  Debug_PVT_PEPS_GainP3_Ctrl Read_Debug_PVT_PEPS_GainP3_Ctrl_Debug_PVT_PEPS_GainP3_Ctrl;
  Debug_PVT_PEPS_GainP4_Ctrl Read_Debug_PVT_PEPS_GainP4_Ctrl_Debug_PVT_PEPS_GainP4_Ctrl;
  Debug_PVT_PEPS_GainPi_Ctrl Read_Debug_PVT_PEPS_GainPi_Ctrl_Debug_PVT_PEPS_GainPi_Ctrl;
  Debug_PVT_PEPS_K_AntP1_Ctrl Read_Debug_PVT_PEPS_K_AntP1_Ctrl_Debug_PVT_PEPS_K_AntP1_Ctrl;
  Debug_PVT_PEPS_K_AntP2_Ctrl Read_Debug_PVT_PEPS_K_AntP2_Ctrl_Debug_PVT_PEPS_K_AntP2_Ctrl;
  Debug_PVT_PEPS_K_AntP3_Ctrl Read_Debug_PVT_PEPS_K_AntP3_Ctrl_Debug_PVT_PEPS_K_AntP3_Ctrl;
  Debug_PVT_PEPS_K_AntP4_Ctrl Read_Debug_PVT_PEPS_K_AntP4_Ctrl_Debug_PVT_PEPS_K_AntP4_Ctrl;
  Debug_PVT_PEPS_K_AntPi_Ctrl Read_Debug_PVT_PEPS_K_AntPi_Ctrl_Debug_PVT_PEPS_K_AntPi_Ctrl;
  Debug_PVT_PEPS_LimitRSSIP1_Ctrl Read_Debug_PVT_PEPS_LimitRSSIP1_Ctrl_Debug_PVT_PEPS_LimitRSSIP1_Ctrl;
  Debug_PVT_PEPS_LimitRSSIP2_Ctrl Read_Debug_PVT_PEPS_LimitRSSIP2_Ctrl_Debug_PVT_PEPS_LimitRSSIP2_Ctrl;
  Debug_PVT_PEPS_LimitRSSIP3_Ctrl Read_Debug_PVT_PEPS_LimitRSSIP3_Ctrl_Debug_PVT_PEPS_LimitRSSIP3_Ctrl;
  Debug_PVT_PEPS_LimitRSSIP4_Ctrl Read_Debug_PVT_PEPS_LimitRSSIP4_Ctrl_Debug_PVT_PEPS_LimitRSSIP4_Ctrl;
  Debug_PVT_PEPS_LmitRSSIPi_Ctrl Read_Debug_PVT_PEPS_LmitRSSIPi_Ctrl_Debug_PVT_PEPS_LmitRSSIPi_Ctrl;
  Debug_PVT_PEPS_Logic_Ctrl Read_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl;
  Debug_PVT_PEPS_P2_RSSIcut_Ctrl Read_Debug_PVT_PEPS_P2_RSSIcut_Ctrl_Debug_PVT_PEPS_P2_RSSIcut_Ctrl;
  Debug_PVT_PEPS_P3_RSSIcut_Ctrl Read_Debug_PVT_PEPS_P3_RSSIcut_Ctrl_Debug_PVT_PEPS_P3_RSSIcut_Ctrl;
  Debug_PVT_PEPS_Pi_RSSIcut_Ctrl Read_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl;
  Debug_PVT_PEPS_TestPeriod_Ctrl Read_Debug_PVT_PEPS_TestPeriod_Ctrl_Debug_PVT_PEPS_TestPeriod_Ctrl;
  Debug_PVT_PEPS_VDSI_Ctrl Read_Debug_PVT_PEPS_VDSI_Ctrl_Debug_PVT_PEPS_VDSI_Ctrl;
  Debug_PVT_PEPS_VSquare_Ctrl Read_Debug_PVT_PEPS_VSquare_Ctrl_Debug_PVT_PEPS_VSquare_Ctrl;
  Debug_PVT_PEPS_VWidth_Ctrl Read_Debug_PVT_PEPS_VWidth_Ctrl_Debug_PVT_PEPS_VWidth_Ctrl;
  Debug_PVT_PEPS_Vlength_Ctrl Read_Debug_PVT_PEPS_Vlength_Ctrl_Debug_PVT_PEPS_Vlength_Ctrl;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_Fob_Select_Debug_PVT_Fob_Select(&Read_Debug_PVT_Fob_Select_Debug_PVT_Fob_Select);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_A_AntP1_Ctrl_Debug_PVT_PEPS_A_AntP1_Ctrl(&Read_Debug_PVT_PEPS_A_AntP1_Ctrl_Debug_PVT_PEPS_A_AntP1_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_A_AntP2_Ctrl_Debug_PVT_PEPS_A_AntP2_Ctrl(&Read_Debug_PVT_PEPS_A_AntP2_Ctrl_Debug_PVT_PEPS_A_AntP2_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_A_AntP3_Ctrl_Debug_PVT_PEPS_A_AntP3_Ctrl(&Read_Debug_PVT_PEPS_A_AntP3_Ctrl_Debug_PVT_PEPS_A_AntP3_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_A_AntP4_Ctrl_Debug_PVT_PEPS_A_AntP4_Ctrl(&Read_Debug_PVT_PEPS_A_AntP4_Ctrl_Debug_PVT_PEPS_A_AntP4_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_A_AntPi_Ctrl_Debug_PVT_PEPS_A_AntPi_Ctrl(&Read_Debug_PVT_PEPS_A_AntPi_Ctrl_Debug_PVT_PEPS_A_AntPi_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl(&Read_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl(&Read_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl(&Read_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl(&Read_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_Ant_Ctrl_Debug_PVT_PEPS_Ant_Ctrl(&Read_Debug_PVT_PEPS_Ant_Ctrl_Debug_PVT_PEPS_Ant_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_Avercut_Ctrl_Debug_PVT_PEPS_Avercut_Ctrl(&Read_Debug_PVT_PEPS_Avercut_Ctrl_Debug_PVT_PEPS_Avercut_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_GainP1_Ctrl_Debug_PVT_PEPS_GainP1_Ctrl(&Read_Debug_PVT_PEPS_GainP1_Ctrl_Debug_PVT_PEPS_GainP1_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_GainP2_Ctrl_Debug_PVT_PEPS_GainP2_Ctrl(&Read_Debug_PVT_PEPS_GainP2_Ctrl_Debug_PVT_PEPS_GainP2_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_GainP3_Ctrl_Debug_PVT_PEPS_GainP3_Ctrl(&Read_Debug_PVT_PEPS_GainP3_Ctrl_Debug_PVT_PEPS_GainP3_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_GainP4_Ctrl_Debug_PVT_PEPS_GainP4_Ctrl(&Read_Debug_PVT_PEPS_GainP4_Ctrl_Debug_PVT_PEPS_GainP4_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_GainPi_Ctrl_Debug_PVT_PEPS_GainPi_Ctrl(&Read_Debug_PVT_PEPS_GainPi_Ctrl_Debug_PVT_PEPS_GainPi_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_K_AntP1_Ctrl_Debug_PVT_PEPS_K_AntP1_Ctrl(&Read_Debug_PVT_PEPS_K_AntP1_Ctrl_Debug_PVT_PEPS_K_AntP1_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_K_AntP2_Ctrl_Debug_PVT_PEPS_K_AntP2_Ctrl(&Read_Debug_PVT_PEPS_K_AntP2_Ctrl_Debug_PVT_PEPS_K_AntP2_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_K_AntP3_Ctrl_Debug_PVT_PEPS_K_AntP3_Ctrl(&Read_Debug_PVT_PEPS_K_AntP3_Ctrl_Debug_PVT_PEPS_K_AntP3_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_K_AntP4_Ctrl_Debug_PVT_PEPS_K_AntP4_Ctrl(&Read_Debug_PVT_PEPS_K_AntP4_Ctrl_Debug_PVT_PEPS_K_AntP4_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_K_AntPi_Ctrl_Debug_PVT_PEPS_K_AntPi_Ctrl(&Read_Debug_PVT_PEPS_K_AntPi_Ctrl_Debug_PVT_PEPS_K_AntPi_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_LimitRSSIP1_Ctrl_Debug_PVT_PEPS_LimitRSSIP1_Ctrl(&Read_Debug_PVT_PEPS_LimitRSSIP1_Ctrl_Debug_PVT_PEPS_LimitRSSIP1_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_LimitRSSIP2_Ctrl_Debug_PVT_PEPS_LimitRSSIP2_Ctrl(&Read_Debug_PVT_PEPS_LimitRSSIP2_Ctrl_Debug_PVT_PEPS_LimitRSSIP2_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_LimitRSSIP3_Ctrl_Debug_PVT_PEPS_LimitRSSIP3_Ctrl(&Read_Debug_PVT_PEPS_LimitRSSIP3_Ctrl_Debug_PVT_PEPS_LimitRSSIP3_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_LimitRSSIP4_Ctrl_Debug_PVT_PEPS_LimitRSSIP4_Ctrl(&Read_Debug_PVT_PEPS_LimitRSSIP4_Ctrl_Debug_PVT_PEPS_LimitRSSIP4_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_LmitRSSIPi_Ctrl_Debug_PVT_PEPS_LmitRSSIPi_Ctrl(&Read_Debug_PVT_PEPS_LmitRSSIPi_Ctrl_Debug_PVT_PEPS_LmitRSSIPi_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl(&Read_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_P2_RSSIcut_Ctrl_Debug_PVT_PEPS_P2_RSSIcut_Ctrl(&Read_Debug_PVT_PEPS_P2_RSSIcut_Ctrl_Debug_PVT_PEPS_P2_RSSIcut_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_P3_RSSIcut_Ctrl_Debug_PVT_PEPS_P3_RSSIcut_Ctrl(&Read_Debug_PVT_PEPS_P3_RSSIcut_Ctrl_Debug_PVT_PEPS_P3_RSSIcut_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl(&Read_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_TestPeriod_Ctrl_Debug_PVT_PEPS_TestPeriod_Ctrl(&Read_Debug_PVT_PEPS_TestPeriod_Ctrl_Debug_PVT_PEPS_TestPeriod_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_VDSI_Ctrl_Debug_PVT_PEPS_VDSI_Ctrl(&Read_Debug_PVT_PEPS_VDSI_Ctrl_Debug_PVT_PEPS_VDSI_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_VSquare_Ctrl_Debug_PVT_PEPS_VSquare_Ctrl(&Read_Debug_PVT_PEPS_VSquare_Ctrl_Debug_PVT_PEPS_VSquare_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_VWidth_Ctrl_Debug_PVT_PEPS_VWidth_Ctrl(&Read_Debug_PVT_PEPS_VWidth_Ctrl_Debug_PVT_PEPS_VWidth_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Read_Debug_PVT_PEPS_Vlength_Ctrl_Debug_PVT_PEPS_Vlength_Ctrl(&Read_Debug_PVT_PEPS_Vlength_Ctrl_Debug_PVT_PEPS_Vlength_Ctrl);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_Fob_Found_Debug_PVT_Fob_Found(Rte_InitValue_Debug_PVT_Fob_Found_Debug_PVT_Fob_Found);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_Fob_ID_Debug_PVT_Fob_ID(Rte_InitValue_Debug_PVT_Fob_ID_Debug_PVT_Fob_ID);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_Fob_RF_RollingCounter_Debug_PVT_Fob_RF_RollingCounter(Rte_InitValue_Debug_PVT_Fob_RF_RollingCounter_Debug_PVT_Fob_RF_RollingCounter);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_A_AntP1_Debug_PVT_PEPS_A_AntP1(Rte_InitValue_Debug_PVT_PEPS_A_AntP1_Debug_PVT_PEPS_A_AntP1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_A_AntP2_Debug_PVT_PEPS_A_AntP2(Rte_InitValue_Debug_PVT_PEPS_A_AntP2_Debug_PVT_PEPS_A_AntP2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_A_AntP3_Debug_PVT_PEPS_A_AntP3(Rte_InitValue_Debug_PVT_PEPS_A_AntP3_Debug_PVT_PEPS_A_AntP3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_A_AntP4_Debug_PVT_PEPS_A_AntP4(Rte_InitValue_Debug_PVT_PEPS_A_AntP4_Debug_PVT_PEPS_A_AntP4);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_A_AntPi_Debug_PVT_PEPS_A_AntPi(Rte_InitValue_Debug_PVT_PEPS_A_AntPi_Debug_PVT_PEPS_A_AntPi);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_AntCtrl_stat_Debug_PVT_PEPS_AntCtrl_stat(Rte_InitValue_Debug_PVT_PEPS_AntCtrl_stat_Debug_PVT_PEPS_AntCtrl_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X(Rte_InitValue_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y(Rte_InitValue_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X(Rte_InitValue_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y(Rte_InitValue_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_AverRSSI1_Debug_PVT_PEPS_AverRSSI1(Rte_InitValue_Debug_PVT_PEPS_AverRSSI1_Debug_PVT_PEPS_AverRSSI1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_AverRSSI2_Debug_PVT_PEPS_AverRSSI2(Rte_InitValue_Debug_PVT_PEPS_AverRSSI2_Debug_PVT_PEPS_AverRSSI2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_Avercut_Debug_PVT_PEPS_Avercut(Rte_InitValue_Debug_PVT_PEPS_Avercut_Debug_PVT_PEPS_Avercut);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_CTPoint_X1_Debug_PVT_PEPS_CTPoint_X1(Rte_InitValue_Debug_PVT_PEPS_CTPoint_X1_Debug_PVT_PEPS_CTPoint_X1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_CTPoint_X2_Debug_PVT_PEPS_CTPoint_X2(Rte_InitValue_Debug_PVT_PEPS_CTPoint_X2_Debug_PVT_PEPS_CTPoint_X2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_CTPoint_Y1_Debug_PVT_PEPS_CTPoint_Y1(Rte_InitValue_Debug_PVT_PEPS_CTPoint_Y1_Debug_PVT_PEPS_CTPoint_Y1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_CTPoint_Y2_Debug_PVT_PEPS_CTPoint_Y2(Rte_InitValue_Debug_PVT_PEPS_CTPoint_Y2_Debug_PVT_PEPS_CTPoint_Y2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_Cali_Cir_Debug_PVT_PEPS_Cali_Cir(Rte_InitValue_Debug_PVT_PEPS_Cali_Cir_Debug_PVT_PEPS_Cali_Cir);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_D_AntP1ToFob_Debug_PVT_PEPS_D_AntP1ToFob(Rte_InitValue_Debug_PVT_PEPS_D_AntP1ToFob_Debug_PVT_PEPS_D_AntP1ToFob);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_D_AntP1toP2_Cir_Debug_PVT_PEPS_D_AntP1toP2_Cir(Rte_InitValue_Debug_PVT_PEPS_D_AntP1toP2_Cir_Debug_PVT_PEPS_D_AntP1toP2_Cir);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_D_AntP1toP2_X_Debug_PVT_PEPS_D_AntP1toP2_X(Rte_InitValue_Debug_PVT_PEPS_D_AntP1toP2_X_Debug_PVT_PEPS_D_AntP1toP2_X);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_D_AntP1toP2_Y_Debug_PVT_PEPS_D_AntP1toP2_Y(Rte_InitValue_Debug_PVT_PEPS_D_AntP1toP2_Y_Debug_PVT_PEPS_D_AntP1toP2_Y);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_D_AntP2ToFob_Debug_PVT_PEPS_D_AntP2ToFob(Rte_InitValue_Debug_PVT_PEPS_D_AntP2ToFob_Debug_PVT_PEPS_D_AntP2ToFob);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_D_AntP3ToFob_Debug_PVT_PEPS_D_AntP3ToFob(Rte_InitValue_Debug_PVT_PEPS_D_AntP3ToFob_Debug_PVT_PEPS_D_AntP3ToFob);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_D_AntP4ToFob_Debug_PVT_PEPS_D_AntP4ToFob(Rte_InitValue_Debug_PVT_PEPS_D_AntP4ToFob_Debug_PVT_PEPS_D_AntP4ToFob);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_D_AntPiToFob_Debug_PVT_PEPS_D_AntPiToFob(Rte_InitValue_Debug_PVT_PEPS_D_AntPiToFob_Debug_PVT_PEPS_D_AntPiToFob);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_DecRSSI_Debug_PVT_PEPS_DecRSSI(Rte_InitValue_Debug_PVT_PEPS_DecRSSI_Debug_PVT_PEPS_DecRSSI);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_Fob_location_Debug_PVT_PEPS_Fob_location(Rte_InitValue_Debug_PVT_PEPS_Fob_location_Debug_PVT_PEPS_Fob_location);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_GainP1_stat_Debug_PVT_PEPS_GainP1_stat(Rte_InitValue_Debug_PVT_PEPS_GainP1_stat_Debug_PVT_PEPS_GainP1_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_GainP2_stat_Debug_PVT_PEPS_GainP2_stat(Rte_InitValue_Debug_PVT_PEPS_GainP2_stat_Debug_PVT_PEPS_GainP2_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_GainP3_stat_Debug_PVT_PEPS_GainP3_stat(Rte_InitValue_Debug_PVT_PEPS_GainP3_stat_Debug_PVT_PEPS_GainP3_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_GainP4_stat_Debug_PVT_PEPS_GainP4_stat(Rte_InitValue_Debug_PVT_PEPS_GainP4_stat_Debug_PVT_PEPS_GainP4_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_GainPi_stat_Debug_PVT_PEPS_GainPi_stat(Rte_InitValue_Debug_PVT_PEPS_GainPi_stat_Debug_PVT_PEPS_GainPi_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_K_AntP1_Debug_PVT_PEPS_K_AntP1(Rte_InitValue_Debug_PVT_PEPS_K_AntP1_Debug_PVT_PEPS_K_AntP1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_K_AntP2_Debug_PVT_PEPS_K_AntP2(Rte_InitValue_Debug_PVT_PEPS_K_AntP2_Debug_PVT_PEPS_K_AntP2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_K_AntP3_Debug_PVT_PEPS_K_AntP3(Rte_InitValue_Debug_PVT_PEPS_K_AntP3_Debug_PVT_PEPS_K_AntP3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_K_AntP4_Debug_PVT_PEPS_K_AntP4(Rte_InitValue_Debug_PVT_PEPS_K_AntP4_Debug_PVT_PEPS_K_AntP4);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_K_AntPi_Debug_PVT_PEPS_K_AntPi(Rte_InitValue_Debug_PVT_PEPS_K_AntPi_Debug_PVT_PEPS_K_AntPi);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_K_Cir_Debug_PVT_PEPS_K_Cir(Rte_InitValue_Debug_PVT_PEPS_K_Cir_Debug_PVT_PEPS_K_Cir);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_LimitRSSIP1_Debug_PVT_PEPS_LimitRSSIP1(Rte_InitValue_Debug_PVT_PEPS_LimitRSSIP1_Debug_PVT_PEPS_LimitRSSIP1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_LimitRSSIP2_Debug_PVT_PEPS_LimitRSSIP2(Rte_InitValue_Debug_PVT_PEPS_LimitRSSIP2_Debug_PVT_PEPS_LimitRSSIP2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_LimitRSSIP3_Debug_PVT_PEPS_LimitRSSIP3(Rte_InitValue_Debug_PVT_PEPS_LimitRSSIP3_Debug_PVT_PEPS_LimitRSSIP3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_LimitRSSIP4_Debug_PVT_PEPS_LimitRSSIP4(Rte_InitValue_Debug_PVT_PEPS_LimitRSSIP4_Debug_PVT_PEPS_LimitRSSIP4);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_LimitRSSIPi_Debug_PVT_PEPS_LimitRSSIPi(Rte_InitValue_Debug_PVT_PEPS_LimitRSSIPi_Debug_PVT_PEPS_LimitRSSIPi);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_Logic_stat_Debug_PVT_PEPS_Logic_stat(Rte_InitValue_Debug_PVT_PEPS_Logic_stat_Debug_PVT_PEPS_Logic_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_P1_MaxRSSI_Debug_PVT_PEPS_P1_MaxRSSI(Rte_InitValue_Debug_PVT_PEPS_P1_MaxRSSI_Debug_PVT_PEPS_P1_MaxRSSI);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_P2_MaxRSSI_Debug_PVT_PEPS_P2_MaxRSSI(Rte_InitValue_Debug_PVT_PEPS_P2_MaxRSSI_Debug_PVT_PEPS_P2_MaxRSSI);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_P2_RSSIcut_Debug_PVT_PEPS_P2_RSSIcut(Rte_InitValue_Debug_PVT_PEPS_P2_RSSIcut_Debug_PVT_PEPS_P2_RSSIcut);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_P3_MaxRSSI_Debug_PVT_PEPS_P3_MaxRSSI(Rte_InitValue_Debug_PVT_PEPS_P3_MaxRSSI_Debug_PVT_PEPS_P3_MaxRSSI);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_P3_RSSIcut_Debug_PVT_PEPS_P3_RSSIcut(Rte_InitValue_Debug_PVT_PEPS_P3_RSSIcut_Debug_PVT_PEPS_P3_RSSIcut);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_P4_MaxRSSI_Debug_PVT_PEPS_P4_MaxRSSI(Rte_InitValue_Debug_PVT_PEPS_P4_MaxRSSI_Debug_PVT_PEPS_P4_MaxRSSI);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_Pi_MaxRSSI_Debug_PVT_PEPS_Pi_MaxRSSI(Rte_InitValue_Debug_PVT_PEPS_Pi_MaxRSSI_Debug_PVT_PEPS_Pi_MaxRSSI);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_Pi_RSSIcut_Debug_PVT_PEPS_Pi_RSSIcut(Rte_InitValue_Debug_PVT_PEPS_Pi_RSSIcut_Debug_PVT_PEPS_Pi_RSSIcut);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_TestPeriod_stat_Debug_PVT_PEPS_TestPeriod_stat(Rte_InitValue_Debug_PVT_PEPS_TestPeriod_stat_Debug_PVT_PEPS_TestPeriod_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_VDSI_stat_Debug_PVT_PEPS_VDSI_stat(Rte_InitValue_Debug_PVT_PEPS_VDSI_stat_Debug_PVT_PEPS_VDSI_stat);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_Vlength_Debug_PVT_PEPS_Vlength(Rte_InitValue_Debug_PVT_PEPS_Vlength_Debug_PVT_PEPS_Vlength);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_Vsquare_Debug_PVT_PEPS_Vsquare(Rte_InitValue_Debug_PVT_PEPS_Vsquare_Debug_PVT_PEPS_Vsquare);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_PEPS_Vwidth_Debug_PVT_PEPS_Vwidth(Rte_InitValue_Debug_PVT_PEPS_Vwidth_Debug_PVT_PEPS_Vwidth);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_SCIM_RF_KeyfobSerialNb_Debug_PVT_SCIM_RF_KeyfobSerialNb(Rte_InitValue_Debug_PVT_SCIM_RF_KeyfobSerialNb_Debug_PVT_SCIM_RF_KeyfobSerialNb);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_PVTApp_Radio_Rte_Write_Debug_PVT_SCIM_RF_RollingCounter_Debug_PVT_SCIM_RF_RollingCounter(Rte_InitValue_Debug_PVT_SCIM_RF_RollingCounter_Debug_PVT_SCIM_RF_RollingCounter);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  PVTApp_Radio_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define PVTApp_Radio_STOP_SEC_CODE
#include "PVTApp_Radio_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void PVTApp_Radio_TestDefines(void)
{
  /* Enumeration Data Types */

  Debug_PVT_Fob_Found Test_Debug_PVT_Fob_Found_V_1 = Cx0_None;
  Debug_PVT_Fob_Found Test_Debug_PVT_Fob_Found_V_2 = Cx1_Found;
  Debug_PVT_Fob_Found Test_Debug_PVT_Fob_Found_V_3 = Cx2_Not_found;
  Debug_PVT_Fob_Found Test_Debug_PVT_Fob_Found_V_4 = Cx3_Invaild;

  Debug_PVT_Fob_ID_1 Test_Debug_PVT_Fob_ID_1_V_1 = Cx0_Fob8;
  Debug_PVT_Fob_ID_1 Test_Debug_PVT_Fob_ID_1_V_2 = Cx1_Fob1;
  Debug_PVT_Fob_ID_1 Test_Debug_PVT_Fob_ID_1_V_3 = Cx2_Fob2;
  Debug_PVT_Fob_ID_1 Test_Debug_PVT_Fob_ID_1_V_4 = Cx3_Fob3;
  Debug_PVT_Fob_ID_1 Test_Debug_PVT_Fob_ID_1_V_5 = Cx4_Fob4;
  Debug_PVT_Fob_ID_1 Test_Debug_PVT_Fob_ID_1_V_6 = Cx5_Fob5;
  Debug_PVT_Fob_ID_1 Test_Debug_PVT_Fob_ID_1_V_7 = Cx6_Fob6;
  Debug_PVT_Fob_ID_1 Test_Debug_PVT_Fob_ID_1_V_8 = Cx7_Fob7;

  Debug_PVT_Fob_Select_1 Test_Debug_PVT_Fob_Select_1_V_1 = Cx0_Fob8;
  Debug_PVT_Fob_Select_1 Test_Debug_PVT_Fob_Select_1_V_2 = Cx1_Fob1;
  Debug_PVT_Fob_Select_1 Test_Debug_PVT_Fob_Select_1_V_3 = Cx2_Fob2;
  Debug_PVT_Fob_Select_1 Test_Debug_PVT_Fob_Select_1_V_4 = Cx3_Fob3;
  Debug_PVT_Fob_Select_1 Test_Debug_PVT_Fob_Select_1_V_5 = Cx4_Fob4;
  Debug_PVT_Fob_Select_1 Test_Debug_PVT_Fob_Select_1_V_6 = Cx5_Fob5;
  Debug_PVT_Fob_Select_1 Test_Debug_PVT_Fob_Select_1_V_7 = Cx6_Fob6;
  Debug_PVT_Fob_Select_1 Test_Debug_PVT_Fob_Select_1_V_8 = Cx7_Fob7;

  Debug_PVT_PEPS_AntCtrl_stat Test_Debug_PVT_PEPS_AntCtrl_stat_V_1 = Cx0_None;
  Debug_PVT_PEPS_AntCtrl_stat Test_Debug_PVT_PEPS_AntCtrl_stat_V_2 = Cx1_Pi_Antenna;
  Debug_PVT_PEPS_AntCtrl_stat Test_Debug_PVT_PEPS_AntCtrl_stat_V_3 = Cx2_P1_Antenna;
  Debug_PVT_PEPS_AntCtrl_stat Test_Debug_PVT_PEPS_AntCtrl_stat_V_4 = Cx3_P2_Antenna;
  Debug_PVT_PEPS_AntCtrl_stat Test_Debug_PVT_PEPS_AntCtrl_stat_V_5 = Cx4_P3_Antenna;
  Debug_PVT_PEPS_AntCtrl_stat Test_Debug_PVT_PEPS_AntCtrl_stat_V_6 = Cx5_P4_Antenna;

  Debug_PVT_PEPS_Ant_Ctrl Test_Debug_PVT_PEPS_Ant_Ctrl_V_1 = Cx0_None;
  Debug_PVT_PEPS_Ant_Ctrl Test_Debug_PVT_PEPS_Ant_Ctrl_V_2 = Cx1_Pi_Antenna;
  Debug_PVT_PEPS_Ant_Ctrl Test_Debug_PVT_PEPS_Ant_Ctrl_V_3 = Cx2_P1_Antenna;
  Debug_PVT_PEPS_Ant_Ctrl Test_Debug_PVT_PEPS_Ant_Ctrl_V_4 = Cx3_P2_Antenna;
  Debug_PVT_PEPS_Ant_Ctrl Test_Debug_PVT_PEPS_Ant_Ctrl_V_5 = Cx4_P3_Antenna;
  Debug_PVT_PEPS_Ant_Ctrl Test_Debug_PVT_PEPS_Ant_Ctrl_V_6 = Cx5_P4_Antenna;

  Debug_PVT_PEPS_Fob_location Test_Debug_PVT_PEPS_Fob_location_V_1 = Cx0_None;
  Debug_PVT_PEPS_Fob_location Test_Debug_PVT_PEPS_Fob_location_V_2 = Cx1_Drv;
  Debug_PVT_PEPS_Fob_location Test_Debug_PVT_PEPS_Fob_location_V_3 = Cx2_Ast;
  Debug_PVT_PEPS_Fob_location Test_Debug_PVT_PEPS_Fob_location_V_4 = Cx3_Front;
  Debug_PVT_PEPS_Fob_location Test_Debug_PVT_PEPS_Fob_location_V_5 = Cx4_Inside;
  Debug_PVT_PEPS_Fob_location Test_Debug_PVT_PEPS_Fob_location_V_6 = Cx5_Invaild;

  Debug_PVT_PEPS_Logic_Ctrl Test_Debug_PVT_PEPS_Logic_Ctrl_V_1 = Cx0_None;
  Debug_PVT_PEPS_Logic_Ctrl Test_Debug_PVT_PEPS_Logic_Ctrl_V_2 = Cx1_For_PS_only_Pi;
  Debug_PVT_PEPS_Logic_Ctrl Test_Debug_PVT_PEPS_Logic_Ctrl_V_3 = Cx2_For_PS_only_Pi_P1;
  Debug_PVT_PEPS_Logic_Ctrl Test_Debug_PVT_PEPS_Logic_Ctrl_V_4 = Cx3_For_PS_PE_Pi_P1_P2_P3;

  Debug_PVT_PEPS_TestPeriod_Ctrl Test_Debug_PVT_PEPS_TestPeriod_Ctrl_V_1 = Cx0_None;
  Debug_PVT_PEPS_TestPeriod_Ctrl Test_Debug_PVT_PEPS_TestPeriod_Ctrl_V_2 = Cx1_1s;
  Debug_PVT_PEPS_TestPeriod_Ctrl Test_Debug_PVT_PEPS_TestPeriod_Ctrl_V_3 = Cx2_2s;
  Debug_PVT_PEPS_TestPeriod_Ctrl Test_Debug_PVT_PEPS_TestPeriod_Ctrl_V_4 = Cx3_3s;
  Debug_PVT_PEPS_TestPeriod_Ctrl Test_Debug_PVT_PEPS_TestPeriod_Ctrl_V_5 = Cx4_4s;

  Debug_PVT_PEPS_TestPeriod_stat Test_Debug_PVT_PEPS_TestPeriod_stat_V_1 = Cx0_None;
  Debug_PVT_PEPS_TestPeriod_stat Test_Debug_PVT_PEPS_TestPeriod_stat_V_2 = Cx1_1s;
  Debug_PVT_PEPS_TestPeriod_stat Test_Debug_PVT_PEPS_TestPeriod_stat_V_3 = Cx2_2s;
  Debug_PVT_PEPS_TestPeriod_stat Test_Debug_PVT_PEPS_TestPeriod_stat_V_4 = Cx3_3s;
  Debug_PVT_PEPS_TestPeriod_stat Test_Debug_PVT_PEPS_TestPeriod_stat_V_5 = Cx4_4s;
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_TestCode:
     Reason:     This justification is used within the generated test code by the Rte Analyzer.
     Risk:       No functional risk.
     Prevention: Not required.

*/
