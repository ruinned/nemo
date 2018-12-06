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
 *          File:  Rte_PVTApp_Radio.h
 *        Config:  SCIM_BP.dpa
 *   ECU-Project:  CIOM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Application header file for SW-C <PVTApp_Radio>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PVTAPP_RADIO_H
# define _RTE_PVTAPP_RADIO_H

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

# include "Rte_PVTApp_Radio_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Debug_PVT_Fob_Select_1, RTE_VAR_INIT) Rte_Debug_PVT_Fob_Select_oDebugCtrl2_SCIM_BB2_oBackbone2_069eb8ef_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_A_AntP1_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_A_AntP1_Ctrl_oDebugCtrl6_SCIM_BB2_oBackbone2_77ae2080_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_A_AntP2_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_A_AntP2_Ctrl_oDebugCtrl6_SCIM_BB2_oBackbone2_3a4620e7_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_A_AntP3_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_A_AntP3_Ctrl_oDebugCtrl6_SCIM_BB2_oBackbone2_b7cedd05_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_A_AntP4_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_A_AntP4_Ctrl_oDebugCtrl6_SCIM_BB2_oBackbone2_a1962029_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_A_AntPi_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_A_AntPi_Ctrl_oDebugCtrl6_SCIM_BB2_oBackbone2_ce25ee0c_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_AntP1_X_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntP1_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_fb66dba7_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_AntP1_Y_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntP1_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_76ee2645_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_AntPi_X_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntPi_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_108c5adc_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_AntPi_Y_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_AntPi_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_9d04a73e_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_Ant_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_Ant_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f212143a_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_Avercut_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_Avercut_Ctrl_oDebugCtrl4_SCIM_BB2_oBackbone2_0b11f392_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_GainP1_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP1_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_7b701f8e_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_GainP2_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP2_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_36981fe9_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_GainP3_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP3_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_bb10e20b_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_GainP4_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainP4_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_ad481f27_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_GainPi_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_GainPi_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_c2fbd102_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_K_AntP1_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_K_AntP1_Ctrl_oDebugCtrl7_SCIM_BB2_oBackbone2_3614168b_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_K_AntP2_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_K_AntP2_Ctrl_oDebugCtrl7_SCIM_BB2_oBackbone2_7bfc16ec_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_K_AntP3_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_K_AntP3_Ctrl_oDebugCtrl7_SCIM_BB2_oBackbone2_f674eb0e_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_K_AntP4_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_K_AntP4_Ctrl_oDebugCtrl8_SCIM_BB2_oBackbone2_ac39990c_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_K_AntPi_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_K_AntPi_Ctrl_oDebugCtrl7_SCIM_BB2_oBackbone2_8f9fd807_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_LimitRSSIP1_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_LimitRSSIP1_Ctrl_oDebugCtrl5_SCIM_BB2_oBackbone2_30da4a25_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_LimitRSSIP2_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_LimitRSSIP2_Ctrl_oDebugCtrl5_SCIM_BB2_oBackbone2_7d324a42_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_LimitRSSIP3_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_LimitRSSIP3_Ctrl_oDebugCtrl5_SCIM_BB2_oBackbone2_f0bab7a0_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_LimitRSSIP4_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_LimitRSSIP4_Ctrl_oDebugCtrl5_SCIM_BB2_oBackbone2_e6e24a8c_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_LmitRSSIPi_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_LmitRSSIPi_Ctrl_oDebugCtrl5_SCIM_BB2_oBackbone2_4e183669_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_Logic_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_Logic_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f1a79db4_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_P2_RSSIcut_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_P2_RSSIcut_Ctrl_oDebugCtrl4_SCIM_BB2_oBackbone2_408a6b78_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_P3_RSSIcut_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_P3_RSSIcut_Ctrl_oDebugCtrl4_SCIM_BB2_oBackbone2_3f43f0eb_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_Pi_RSSIcut_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl_oDebugCtrl4_SCIM_BB2_oBackbone2_31c63df0_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_TestPeriod_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_TestPeriod_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_2f247024_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_VDSI_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_VDSI_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_e74c4cec_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_VSquare_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_VSquare_Ctrl_oDebugCtrl8_SCIM_BB2_oBackbone2_aa069306_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_VWidth_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_VWidth_Ctrl_oDebugCtrl8_SCIM_BB2_oBackbone2_c00b5315_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Debug_PVT_PEPS_Vlength_Ctrl, RTE_VAR_INIT) Rte_Debug_PVT_PEPS_Vlength_Ctrl_oDebugCtrl8_SCIM_BB2_oBackbone2_f2bea79d_Rx; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_Debug_PVT_Fob_Found_Debug_PVT_Fob_Found (0U)
#  define Rte_InitValue_Debug_PVT_Fob_ID_Debug_PVT_Fob_ID (0U)
#  define Rte_InitValue_Debug_PVT_Fob_RF_RollingCounter_Debug_PVT_Fob_RF_RollingCounter (0U)
#  define Rte_InitValue_Debug_PVT_Fob_Select_Debug_PVT_Fob_Select (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_A_AntP1_Debug_PVT_PEPS_A_AntP1 (0)
#  define Rte_InitValue_Debug_PVT_PEPS_A_AntP1_Ctrl_Debug_PVT_PEPS_A_AntP1_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_A_AntP2_Debug_PVT_PEPS_A_AntP2 (0)
#  define Rte_InitValue_Debug_PVT_PEPS_A_AntP2_Ctrl_Debug_PVT_PEPS_A_AntP2_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_A_AntP3_Debug_PVT_PEPS_A_AntP3 (0)
#  define Rte_InitValue_Debug_PVT_PEPS_A_AntP3_Ctrl_Debug_PVT_PEPS_A_AntP3_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_A_AntP4_Debug_PVT_PEPS_A_AntP4 (0)
#  define Rte_InitValue_Debug_PVT_PEPS_A_AntP4_Ctrl_Debug_PVT_PEPS_A_AntP4_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_A_AntPi_Debug_PVT_PEPS_A_AntPi (0)
#  define Rte_InitValue_Debug_PVT_PEPS_A_AntPi_Ctrl_Debug_PVT_PEPS_A_AntPi_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_AntCtrl_stat_Debug_PVT_PEPS_AntCtrl_stat (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X (0)
#  define Rte_InitValue_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y (0)
#  define Rte_InitValue_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X (0)
#  define Rte_InitValue_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y (0)
#  define Rte_InitValue_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_Ant_Ctrl_Debug_PVT_PEPS_Ant_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_AverRSSI1_Debug_PVT_PEPS_AverRSSI1 (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_AverRSSI2_Debug_PVT_PEPS_AverRSSI2 (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_Avercut_Debug_PVT_PEPS_Avercut (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_Avercut_Ctrl_Debug_PVT_PEPS_Avercut_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_CTPoint_X1_Debug_PVT_PEPS_CTPoint_X1 (0)
#  define Rte_InitValue_Debug_PVT_PEPS_CTPoint_X2_Debug_PVT_PEPS_CTPoint_X2 (0)
#  define Rte_InitValue_Debug_PVT_PEPS_CTPoint_Y1_Debug_PVT_PEPS_CTPoint_Y1 (0)
#  define Rte_InitValue_Debug_PVT_PEPS_CTPoint_Y2_Debug_PVT_PEPS_CTPoint_Y2 (0)
#  define Rte_InitValue_Debug_PVT_PEPS_Cali_Cir_Debug_PVT_PEPS_Cali_Cir (0)
#  define Rte_InitValue_Debug_PVT_PEPS_D_AntP1ToFob_Debug_PVT_PEPS_D_AntP1ToFob (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_D_AntP1toP2_Cir_Debug_PVT_PEPS_D_AntP1toP2_Cir (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_D_AntP1toP2_X_Debug_PVT_PEPS_D_AntP1toP2_X (0)
#  define Rte_InitValue_Debug_PVT_PEPS_D_AntP1toP2_Y_Debug_PVT_PEPS_D_AntP1toP2_Y (0)
#  define Rte_InitValue_Debug_PVT_PEPS_D_AntP2ToFob_Debug_PVT_PEPS_D_AntP2ToFob (0)
#  define Rte_InitValue_Debug_PVT_PEPS_D_AntP3ToFob_Debug_PVT_PEPS_D_AntP3ToFob (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_D_AntP4ToFob_Debug_PVT_PEPS_D_AntP4ToFob (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_D_AntPiToFob_Debug_PVT_PEPS_D_AntPiToFob (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_DecRSSI_Debug_PVT_PEPS_DecRSSI (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_Fob_location_Debug_PVT_PEPS_Fob_location (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP1_Ctrl_Debug_PVT_PEPS_GainP1_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP1_stat_Debug_PVT_PEPS_GainP1_stat (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP2_Ctrl_Debug_PVT_PEPS_GainP2_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP2_stat_Debug_PVT_PEPS_GainP2_stat (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP3_Ctrl_Debug_PVT_PEPS_GainP3_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP3_stat_Debug_PVT_PEPS_GainP3_stat (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP4_Ctrl_Debug_PVT_PEPS_GainP4_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainP4_stat_Debug_PVT_PEPS_GainP4_stat (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainPi_Ctrl_Debug_PVT_PEPS_GainPi_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_GainPi_stat_Debug_PVT_PEPS_GainPi_stat (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_K_AntP1_Debug_PVT_PEPS_K_AntP1 (0)
#  define Rte_InitValue_Debug_PVT_PEPS_K_AntP1_Ctrl_Debug_PVT_PEPS_K_AntP1_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_K_AntP2_Debug_PVT_PEPS_K_AntP2 (0)
#  define Rte_InitValue_Debug_PVT_PEPS_K_AntP2_Ctrl_Debug_PVT_PEPS_K_AntP2_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_K_AntP3_Debug_PVT_PEPS_K_AntP3 (0)
#  define Rte_InitValue_Debug_PVT_PEPS_K_AntP3_Ctrl_Debug_PVT_PEPS_K_AntP3_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_K_AntP4_Debug_PVT_PEPS_K_AntP4 (0)
#  define Rte_InitValue_Debug_PVT_PEPS_K_AntP4_Ctrl_Debug_PVT_PEPS_K_AntP4_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_K_AntPi_Debug_PVT_PEPS_K_AntPi (0)
#  define Rte_InitValue_Debug_PVT_PEPS_K_AntPi_Ctrl_Debug_PVT_PEPS_K_AntPi_Ctrl (0)
#  define Rte_InitValue_Debug_PVT_PEPS_K_Cir_Debug_PVT_PEPS_K_Cir (0)
#  define Rte_InitValue_Debug_PVT_PEPS_LimitRSSIP1_Debug_PVT_PEPS_LimitRSSIP1 (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_LimitRSSIP1_Ctrl_Debug_PVT_PEPS_LimitRSSIP1_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_LimitRSSIP2_Debug_PVT_PEPS_LimitRSSIP2 (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_LimitRSSIP2_Ctrl_Debug_PVT_PEPS_LimitRSSIP2_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_LimitRSSIP3_Debug_PVT_PEPS_LimitRSSIP3 (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_LimitRSSIP3_Ctrl_Debug_PVT_PEPS_LimitRSSIP3_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_LimitRSSIP4_Debug_PVT_PEPS_LimitRSSIP4 (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_LimitRSSIP4_Ctrl_Debug_PVT_PEPS_LimitRSSIP4_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_LimitRSSIPi_Debug_PVT_PEPS_LimitRSSIPi (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_LmitRSSIPi_Ctrl_Debug_PVT_PEPS_LmitRSSIPi_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_Logic_stat_Debug_PVT_PEPS_Logic_stat (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_P1_MaxRSSI_Debug_PVT_PEPS_P1_MaxRSSI (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_P2_MaxRSSI_Debug_PVT_PEPS_P2_MaxRSSI (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_P2_RSSIcut_Debug_PVT_PEPS_P2_RSSIcut (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_P2_RSSIcut_Ctrl_Debug_PVT_PEPS_P2_RSSIcut_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_P3_MaxRSSI_Debug_PVT_PEPS_P3_MaxRSSI (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_P3_RSSIcut_Debug_PVT_PEPS_P3_RSSIcut (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_P3_RSSIcut_Ctrl_Debug_PVT_PEPS_P3_RSSIcut_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_P4_MaxRSSI_Debug_PVT_PEPS_P4_MaxRSSI (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_Pi_MaxRSSI_Debug_PVT_PEPS_Pi_MaxRSSI (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_Pi_RSSIcut_Debug_PVT_PEPS_Pi_RSSIcut (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_TestPeriod_Ctrl_Debug_PVT_PEPS_TestPeriod_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_TestPeriod_stat_Debug_PVT_PEPS_TestPeriod_stat (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_VDSI_Ctrl_Debug_PVT_PEPS_VDSI_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_VDSI_stat_Debug_PVT_PEPS_VDSI_stat (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_VSquare_Ctrl_Debug_PVT_PEPS_VSquare_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_VWidth_Ctrl_Debug_PVT_PEPS_VWidth_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_Vlength_Debug_PVT_PEPS_Vlength (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_Vlength_Ctrl_Debug_PVT_PEPS_Vlength_Ctrl (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_Vsquare_Debug_PVT_PEPS_Vsquare (0U)
#  define Rte_InitValue_Debug_PVT_PEPS_Vwidth_Debug_PVT_PEPS_Vwidth (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RF_KeyfobSerialNb_Debug_PVT_SCIM_RF_KeyfobSerialNb (0U)
#  define Rte_InitValue_Debug_PVT_SCIM_RF_RollingCounter_Debug_PVT_SCIM_RF_RollingCounter (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_Fob_Found_Debug_PVT_Fob_Found(Debug_PVT_Fob_Found data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_Fob_ID_Debug_PVT_Fob_ID(Debug_PVT_Fob_ID_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_Fob_RF_RollingCounter_Debug_PVT_Fob_RF_RollingCounter(Debug_PVT_Fob_RF_RollingCounter_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_A_AntP1_Debug_PVT_PEPS_A_AntP1(Debug_PVT_PEPS_A_AntP1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_A_AntP2_Debug_PVT_PEPS_A_AntP2(Debug_PVT_PEPS_A_AntP2 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_A_AntP3_Debug_PVT_PEPS_A_AntP3(Debug_PVT_PEPS_A_AntP3 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_A_AntP4_Debug_PVT_PEPS_A_AntP4(Debug_PVT_PEPS_A_AntP4 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_A_AntPi_Debug_PVT_PEPS_A_AntPi(Debug_PVT_PEPS_A_AntPi data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_AntCtrl_stat_Debug_PVT_PEPS_AntCtrl_stat(Debug_PVT_PEPS_AntCtrl_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X(Debug_PVT_PEPS_AntP1_X data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y(Debug_PVT_PEPS_AntP1_Y data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X(Debug_PVT_PEPS_AntPi_X data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y(Debug_PVT_PEPS_AntPi_Y data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_AverRSSI1_Debug_PVT_PEPS_AverRSSI1(Debug_PVT_PEPS_AverRSSI1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_AverRSSI2_Debug_PVT_PEPS_AverRSSI2(Debug_PVT_PEPS_AverRSSI2 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Avercut_Debug_PVT_PEPS_Avercut(Debug_PVT_PEPS_Avercut data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_CTPoint_X1_Debug_PVT_PEPS_CTPoint_X1(Debug_PVT_PEPS_CTPoint_X1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_CTPoint_X2_Debug_PVT_PEPS_CTPoint_X2(Debug_PVT_PEPS_CTPoint_X2 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_CTPoint_Y1_Debug_PVT_PEPS_CTPoint_Y1(Debug_PVT_PEPS_CTPoint_Y1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_CTPoint_Y2_Debug_PVT_PEPS_CTPoint_Y2(Debug_PVT_PEPS_CTPoint_Y2 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Cali_Cir_Debug_PVT_PEPS_Cali_Cir(Debug_PVT_PEPS_Cali_Cir data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntP1ToFob_Debug_PVT_PEPS_D_AntP1ToFob(Debug_PVT_PEPS_D_AntP1ToFob data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntP1toP2_Cir_Debug_PVT_PEPS_D_AntP1toP2_Cir(Debug_PVT_PEPS_D_AntP1toP2_Cir data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntP1toP2_X_Debug_PVT_PEPS_D_AntP1toP2_X(Debug_PVT_PEPS_D_AntP1toP2_X data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntP1toP2_Y_Debug_PVT_PEPS_D_AntP1toP2_Y(Debug_PVT_PEPS_D_AntP1toP2_Y data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntP2ToFob_Debug_PVT_PEPS_D_AntP2ToFob(Debug_PVT_PEPS_D_AntP2ToFob data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntP3ToFob_Debug_PVT_PEPS_D_AntP3ToFob(Debug_PVT_PEPS_D_AntP3ToFob data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntP4ToFob_Debug_PVT_PEPS_D_AntP4ToFob(Debug_PVT_PEPS_D_AntP4ToFob data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntPiToFob_Debug_PVT_PEPS_D_AntPiToFob(Debug_PVT_PEPS_D_AntPiToFob data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_DecRSSI_Debug_PVT_PEPS_DecRSSI(Debug_PVT_PEPS_DecRSSI data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Fob_location_Debug_PVT_PEPS_Fob_location(Debug_PVT_PEPS_Fob_location data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_GainP1_stat_Debug_PVT_PEPS_GainP1_stat(Debug_PVT_PEPS_GainP1_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_GainP2_stat_Debug_PVT_PEPS_GainP2_stat(Debug_PVT_PEPS_GainP2_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_GainP3_stat_Debug_PVT_PEPS_GainP3_stat(Debug_PVT_PEPS_GainP3_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_GainP4_stat_Debug_PVT_PEPS_GainP4_stat(Debug_PVT_PEPS_GainP4_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_GainPi_stat_Debug_PVT_PEPS_GainPi_stat(Debug_PVT_PEPS_GainPi_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_K_AntP1_Debug_PVT_PEPS_K_AntP1(Debug_PVT_PEPS_K_AntP1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_K_AntP2_Debug_PVT_PEPS_K_AntP2(Debug_PVT_PEPS_K_AntP2 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_K_AntP3_Debug_PVT_PEPS_K_AntP3(Debug_PVT_PEPS_K_AntP3 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_K_AntP4_Debug_PVT_PEPS_K_AntP4(Debug_PVT_PEPS_K_AntP4 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_K_AntPi_Debug_PVT_PEPS_K_AntPi(Debug_PVT_PEPS_K_AntPi data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_K_Cir_Debug_PVT_PEPS_K_Cir(Debug_PVT_PEPS_K_Cir data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP1_Debug_PVT_PEPS_LimitRSSIP1(Debug_PVT_PEPS_LimitRSSIP1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP2_Debug_PVT_PEPS_LimitRSSIP2(Debug_PVT_PEPS_LimitRSSIP2 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP3_Debug_PVT_PEPS_LimitRSSIP3(Debug_PVT_PEPS_LimitRSSIP3 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP4_Debug_PVT_PEPS_LimitRSSIP4(Debug_PVT_PEPS_LimitRSSIP4 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIPi_Debug_PVT_PEPS_LimitRSSIPi(Debug_PVT_PEPS_LimitRSSIPi data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Logic_stat_Debug_PVT_PEPS_Logic_stat(Debug_PVT_PEPS_Logic_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_P1_MaxRSSI_Debug_PVT_PEPS_P1_MaxRSSI(Debug_PVT_PEPS_P1_MaxRSSI data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_P2_MaxRSSI_Debug_PVT_PEPS_P2_MaxRSSI(Debug_PVT_PEPS_P2_MaxRSSI data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_P2_RSSIcut_Debug_PVT_PEPS_P2_RSSIcut(Debug_PVT_PEPS_P2_RSSIcut data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_P3_MaxRSSI_Debug_PVT_PEPS_P3_MaxRSSI(Debug_PVT_PEPS_P3_MaxRSSI data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_P3_RSSIcut_Debug_PVT_PEPS_P3_RSSIcut(Debug_PVT_PEPS_P3_RSSIcut data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_P4_MaxRSSI_Debug_PVT_PEPS_P4_MaxRSSI(Debug_PVT_PEPS_P4_MaxRSSI data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Pi_MaxRSSI_Debug_PVT_PEPS_Pi_MaxRSSI(Debug_PVT_PEPS_Pi_MaxRSSI data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Pi_RSSIcut_Debug_PVT_PEPS_Pi_RSSIcut(Debug_PVT_PEPS_Pi_RSSIcut data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_TestPeriod_stat_Debug_PVT_PEPS_TestPeriod_stat(Debug_PVT_PEPS_TestPeriod_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_VDSI_stat_Debug_PVT_PEPS_VDSI_stat(Debug_PVT_PEPS_VDSI_stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Vlength_Debug_PVT_PEPS_Vlength(Debug_PVT_PEPS_Vlength data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Vsquare_Debug_PVT_PEPS_Vsquare(Debug_PVT_PEPS_Vsquare data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Vwidth_Debug_PVT_PEPS_Vwidth(Debug_PVT_PEPS_Vwidth data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_SCIM_RF_KeyfobSerialNb_Debug_PVT_SCIM_RF_KeyfobSerialNb(Debug_PVT_SCIM_RF_KeyfobSerialNb_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PVTApp_Radio_Debug_PVT_SCIM_RF_RollingCounter_Debug_PVT_SCIM_RF_RollingCounter(Debug_PVT_SCIM_RF_RollingCounter_1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_Debug_PVT_Fob_Select_Debug_PVT_Fob_Select Rte_Read_PVTApp_Radio_Debug_PVT_Fob_Select_Debug_PVT_Fob_Select
#  define Rte_Read_PVTApp_Radio_Debug_PVT_Fob_Select_Debug_PVT_Fob_Select(data) (*(data) = Rte_Debug_PVT_Fob_Select_oDebugCtrl2_SCIM_BB2_oBackbone2_069eb8ef_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_A_AntP1_Ctrl_Debug_PVT_PEPS_A_AntP1_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_A_AntP1_Ctrl_Debug_PVT_PEPS_A_AntP1_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_A_AntP1_Ctrl_Debug_PVT_PEPS_A_AntP1_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_A_AntP1_Ctrl_oDebugCtrl6_SCIM_BB2_oBackbone2_77ae2080_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_A_AntP2_Ctrl_Debug_PVT_PEPS_A_AntP2_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_A_AntP2_Ctrl_Debug_PVT_PEPS_A_AntP2_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_A_AntP2_Ctrl_Debug_PVT_PEPS_A_AntP2_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_A_AntP2_Ctrl_oDebugCtrl6_SCIM_BB2_oBackbone2_3a4620e7_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_A_AntP3_Ctrl_Debug_PVT_PEPS_A_AntP3_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_A_AntP3_Ctrl_Debug_PVT_PEPS_A_AntP3_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_A_AntP3_Ctrl_Debug_PVT_PEPS_A_AntP3_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_A_AntP3_Ctrl_oDebugCtrl6_SCIM_BB2_oBackbone2_b7cedd05_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_A_AntP4_Ctrl_Debug_PVT_PEPS_A_AntP4_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_A_AntP4_Ctrl_Debug_PVT_PEPS_A_AntP4_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_A_AntP4_Ctrl_Debug_PVT_PEPS_A_AntP4_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_A_AntP4_Ctrl_oDebugCtrl6_SCIM_BB2_oBackbone2_a1962029_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_A_AntPi_Ctrl_Debug_PVT_PEPS_A_AntPi_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_A_AntPi_Ctrl_Debug_PVT_PEPS_A_AntPi_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_A_AntPi_Ctrl_Debug_PVT_PEPS_A_AntPi_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_A_AntPi_Ctrl_oDebugCtrl6_SCIM_BB2_oBackbone2_ce25ee0c_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_AntP1_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_fb66dba7_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_AntP1_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_76ee2645_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_AntPi_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_108c5adc_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_AntPi_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_9d04a73e_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_Ant_Ctrl_Debug_PVT_PEPS_Ant_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_Ant_Ctrl_Debug_PVT_PEPS_Ant_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_Ant_Ctrl_Debug_PVT_PEPS_Ant_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_Ant_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f212143a_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_Avercut_Ctrl_Debug_PVT_PEPS_Avercut_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_Avercut_Ctrl_Debug_PVT_PEPS_Avercut_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_Avercut_Ctrl_Debug_PVT_PEPS_Avercut_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_Avercut_Ctrl_oDebugCtrl4_SCIM_BB2_oBackbone2_0b11f392_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_GainP1_Ctrl_Debug_PVT_PEPS_GainP1_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_GainP1_Ctrl_Debug_PVT_PEPS_GainP1_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_GainP1_Ctrl_Debug_PVT_PEPS_GainP1_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_GainP1_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_7b701f8e_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_GainP2_Ctrl_Debug_PVT_PEPS_GainP2_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_GainP2_Ctrl_Debug_PVT_PEPS_GainP2_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_GainP2_Ctrl_Debug_PVT_PEPS_GainP2_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_GainP2_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_36981fe9_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_GainP3_Ctrl_Debug_PVT_PEPS_GainP3_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_GainP3_Ctrl_Debug_PVT_PEPS_GainP3_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_GainP3_Ctrl_Debug_PVT_PEPS_GainP3_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_GainP3_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_bb10e20b_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_GainP4_Ctrl_Debug_PVT_PEPS_GainP4_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_GainP4_Ctrl_Debug_PVT_PEPS_GainP4_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_GainP4_Ctrl_Debug_PVT_PEPS_GainP4_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_GainP4_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_ad481f27_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_GainPi_Ctrl_Debug_PVT_PEPS_GainPi_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_GainPi_Ctrl_Debug_PVT_PEPS_GainPi_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_GainPi_Ctrl_Debug_PVT_PEPS_GainPi_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_GainPi_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_c2fbd102_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_K_AntP1_Ctrl_Debug_PVT_PEPS_K_AntP1_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_K_AntP1_Ctrl_Debug_PVT_PEPS_K_AntP1_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_K_AntP1_Ctrl_Debug_PVT_PEPS_K_AntP1_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_K_AntP1_Ctrl_oDebugCtrl7_SCIM_BB2_oBackbone2_3614168b_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_K_AntP2_Ctrl_Debug_PVT_PEPS_K_AntP2_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_K_AntP2_Ctrl_Debug_PVT_PEPS_K_AntP2_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_K_AntP2_Ctrl_Debug_PVT_PEPS_K_AntP2_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_K_AntP2_Ctrl_oDebugCtrl7_SCIM_BB2_oBackbone2_7bfc16ec_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_K_AntP3_Ctrl_Debug_PVT_PEPS_K_AntP3_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_K_AntP3_Ctrl_Debug_PVT_PEPS_K_AntP3_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_K_AntP3_Ctrl_Debug_PVT_PEPS_K_AntP3_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_K_AntP3_Ctrl_oDebugCtrl7_SCIM_BB2_oBackbone2_f674eb0e_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_K_AntP4_Ctrl_Debug_PVT_PEPS_K_AntP4_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_K_AntP4_Ctrl_Debug_PVT_PEPS_K_AntP4_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_K_AntP4_Ctrl_Debug_PVT_PEPS_K_AntP4_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_K_AntP4_Ctrl_oDebugCtrl8_SCIM_BB2_oBackbone2_ac39990c_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_K_AntPi_Ctrl_Debug_PVT_PEPS_K_AntPi_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_K_AntPi_Ctrl_Debug_PVT_PEPS_K_AntPi_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_K_AntPi_Ctrl_Debug_PVT_PEPS_K_AntPi_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_K_AntPi_Ctrl_oDebugCtrl7_SCIM_BB2_oBackbone2_8f9fd807_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_LimitRSSIP1_Ctrl_Debug_PVT_PEPS_LimitRSSIP1_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP1_Ctrl_Debug_PVT_PEPS_LimitRSSIP1_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP1_Ctrl_Debug_PVT_PEPS_LimitRSSIP1_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_LimitRSSIP1_Ctrl_oDebugCtrl5_SCIM_BB2_oBackbone2_30da4a25_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_LimitRSSIP2_Ctrl_Debug_PVT_PEPS_LimitRSSIP2_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP2_Ctrl_Debug_PVT_PEPS_LimitRSSIP2_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP2_Ctrl_Debug_PVT_PEPS_LimitRSSIP2_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_LimitRSSIP2_Ctrl_oDebugCtrl5_SCIM_BB2_oBackbone2_7d324a42_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_LimitRSSIP3_Ctrl_Debug_PVT_PEPS_LimitRSSIP3_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP3_Ctrl_Debug_PVT_PEPS_LimitRSSIP3_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP3_Ctrl_Debug_PVT_PEPS_LimitRSSIP3_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_LimitRSSIP3_Ctrl_oDebugCtrl5_SCIM_BB2_oBackbone2_f0bab7a0_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_LimitRSSIP4_Ctrl_Debug_PVT_PEPS_LimitRSSIP4_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP4_Ctrl_Debug_PVT_PEPS_LimitRSSIP4_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP4_Ctrl_Debug_PVT_PEPS_LimitRSSIP4_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_LimitRSSIP4_Ctrl_oDebugCtrl5_SCIM_BB2_oBackbone2_e6e24a8c_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_LmitRSSIPi_Ctrl_Debug_PVT_PEPS_LmitRSSIPi_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_LmitRSSIPi_Ctrl_Debug_PVT_PEPS_LmitRSSIPi_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_LmitRSSIPi_Ctrl_Debug_PVT_PEPS_LmitRSSIPi_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_LmitRSSIPi_Ctrl_oDebugCtrl5_SCIM_BB2_oBackbone2_4e183669_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_Logic_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f1a79db4_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_P2_RSSIcut_Ctrl_Debug_PVT_PEPS_P2_RSSIcut_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_P2_RSSIcut_Ctrl_Debug_PVT_PEPS_P2_RSSIcut_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_P2_RSSIcut_Ctrl_Debug_PVT_PEPS_P2_RSSIcut_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_P2_RSSIcut_Ctrl_oDebugCtrl4_SCIM_BB2_oBackbone2_408a6b78_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_P3_RSSIcut_Ctrl_Debug_PVT_PEPS_P3_RSSIcut_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_P3_RSSIcut_Ctrl_Debug_PVT_PEPS_P3_RSSIcut_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_P3_RSSIcut_Ctrl_Debug_PVT_PEPS_P3_RSSIcut_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_P3_RSSIcut_Ctrl_oDebugCtrl4_SCIM_BB2_oBackbone2_3f43f0eb_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl_oDebugCtrl4_SCIM_BB2_oBackbone2_31c63df0_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_TestPeriod_Ctrl_Debug_PVT_PEPS_TestPeriod_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_TestPeriod_Ctrl_Debug_PVT_PEPS_TestPeriod_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_TestPeriod_Ctrl_Debug_PVT_PEPS_TestPeriod_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_TestPeriod_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_2f247024_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_VDSI_Ctrl_Debug_PVT_PEPS_VDSI_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_VDSI_Ctrl_Debug_PVT_PEPS_VDSI_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_VDSI_Ctrl_Debug_PVT_PEPS_VDSI_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_VDSI_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_e74c4cec_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_VSquare_Ctrl_Debug_PVT_PEPS_VSquare_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_VSquare_Ctrl_Debug_PVT_PEPS_VSquare_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_VSquare_Ctrl_Debug_PVT_PEPS_VSquare_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_VSquare_Ctrl_oDebugCtrl8_SCIM_BB2_oBackbone2_aa069306_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_VWidth_Ctrl_Debug_PVT_PEPS_VWidth_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_VWidth_Ctrl_Debug_PVT_PEPS_VWidth_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_VWidth_Ctrl_Debug_PVT_PEPS_VWidth_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_VWidth_Ctrl_oDebugCtrl8_SCIM_BB2_oBackbone2_c00b5315_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Debug_PVT_PEPS_Vlength_Ctrl_Debug_PVT_PEPS_Vlength_Ctrl Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_Vlength_Ctrl_Debug_PVT_PEPS_Vlength_Ctrl
#  define Rte_Read_PVTApp_Radio_Debug_PVT_PEPS_Vlength_Ctrl_Debug_PVT_PEPS_Vlength_Ctrl(data) (*(data) = Rte_Debug_PVT_PEPS_Vlength_Ctrl_oDebugCtrl8_SCIM_BB2_oBackbone2_f2bea79d_Rx, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_Debug_PVT_Fob_Found_Debug_PVT_Fob_Found Rte_Write_PVTApp_Radio_Debug_PVT_Fob_Found_Debug_PVT_Fob_Found
#  define Rte_Write_Debug_PVT_Fob_ID_Debug_PVT_Fob_ID Rte_Write_PVTApp_Radio_Debug_PVT_Fob_ID_Debug_PVT_Fob_ID
#  define Rte_Write_Debug_PVT_Fob_RF_RollingCounter_Debug_PVT_Fob_RF_RollingCounter Rte_Write_PVTApp_Radio_Debug_PVT_Fob_RF_RollingCounter_Debug_PVT_Fob_RF_RollingCounter
#  define Rte_Write_Debug_PVT_PEPS_A_AntP1_Debug_PVT_PEPS_A_AntP1 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_A_AntP1_Debug_PVT_PEPS_A_AntP1
#  define Rte_Write_Debug_PVT_PEPS_A_AntP2_Debug_PVT_PEPS_A_AntP2 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_A_AntP2_Debug_PVT_PEPS_A_AntP2
#  define Rte_Write_Debug_PVT_PEPS_A_AntP3_Debug_PVT_PEPS_A_AntP3 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_A_AntP3_Debug_PVT_PEPS_A_AntP3
#  define Rte_Write_Debug_PVT_PEPS_A_AntP4_Debug_PVT_PEPS_A_AntP4 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_A_AntP4_Debug_PVT_PEPS_A_AntP4
#  define Rte_Write_Debug_PVT_PEPS_A_AntPi_Debug_PVT_PEPS_A_AntPi Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_A_AntPi_Debug_PVT_PEPS_A_AntPi
#  define Rte_Write_Debug_PVT_PEPS_AntCtrl_stat_Debug_PVT_PEPS_AntCtrl_stat Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_AntCtrl_stat_Debug_PVT_PEPS_AntCtrl_stat
#  define Rte_Write_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X
#  define Rte_Write_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y
#  define Rte_Write_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X
#  define Rte_Write_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y
#  define Rte_Write_Debug_PVT_PEPS_AverRSSI1_Debug_PVT_PEPS_AverRSSI1 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_AverRSSI1_Debug_PVT_PEPS_AverRSSI1
#  define Rte_Write_Debug_PVT_PEPS_AverRSSI2_Debug_PVT_PEPS_AverRSSI2 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_AverRSSI2_Debug_PVT_PEPS_AverRSSI2
#  define Rte_Write_Debug_PVT_PEPS_Avercut_Debug_PVT_PEPS_Avercut Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Avercut_Debug_PVT_PEPS_Avercut
#  define Rte_Write_Debug_PVT_PEPS_CTPoint_X1_Debug_PVT_PEPS_CTPoint_X1 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_CTPoint_X1_Debug_PVT_PEPS_CTPoint_X1
#  define Rte_Write_Debug_PVT_PEPS_CTPoint_X2_Debug_PVT_PEPS_CTPoint_X2 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_CTPoint_X2_Debug_PVT_PEPS_CTPoint_X2
#  define Rte_Write_Debug_PVT_PEPS_CTPoint_Y1_Debug_PVT_PEPS_CTPoint_Y1 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_CTPoint_Y1_Debug_PVT_PEPS_CTPoint_Y1
#  define Rte_Write_Debug_PVT_PEPS_CTPoint_Y2_Debug_PVT_PEPS_CTPoint_Y2 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_CTPoint_Y2_Debug_PVT_PEPS_CTPoint_Y2
#  define Rte_Write_Debug_PVT_PEPS_Cali_Cir_Debug_PVT_PEPS_Cali_Cir Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Cali_Cir_Debug_PVT_PEPS_Cali_Cir
#  define Rte_Write_Debug_PVT_PEPS_D_AntP1ToFob_Debug_PVT_PEPS_D_AntP1ToFob Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntP1ToFob_Debug_PVT_PEPS_D_AntP1ToFob
#  define Rte_Write_Debug_PVT_PEPS_D_AntP1toP2_Cir_Debug_PVT_PEPS_D_AntP1toP2_Cir Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntP1toP2_Cir_Debug_PVT_PEPS_D_AntP1toP2_Cir
#  define Rte_Write_Debug_PVT_PEPS_D_AntP1toP2_X_Debug_PVT_PEPS_D_AntP1toP2_X Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntP1toP2_X_Debug_PVT_PEPS_D_AntP1toP2_X
#  define Rte_Write_Debug_PVT_PEPS_D_AntP1toP2_Y_Debug_PVT_PEPS_D_AntP1toP2_Y Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntP1toP2_Y_Debug_PVT_PEPS_D_AntP1toP2_Y
#  define Rte_Write_Debug_PVT_PEPS_D_AntP2ToFob_Debug_PVT_PEPS_D_AntP2ToFob Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntP2ToFob_Debug_PVT_PEPS_D_AntP2ToFob
#  define Rte_Write_Debug_PVT_PEPS_D_AntP3ToFob_Debug_PVT_PEPS_D_AntP3ToFob Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntP3ToFob_Debug_PVT_PEPS_D_AntP3ToFob
#  define Rte_Write_Debug_PVT_PEPS_D_AntP4ToFob_Debug_PVT_PEPS_D_AntP4ToFob Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntP4ToFob_Debug_PVT_PEPS_D_AntP4ToFob
#  define Rte_Write_Debug_PVT_PEPS_D_AntPiToFob_Debug_PVT_PEPS_D_AntPiToFob Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_D_AntPiToFob_Debug_PVT_PEPS_D_AntPiToFob
#  define Rte_Write_Debug_PVT_PEPS_DecRSSI_Debug_PVT_PEPS_DecRSSI Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_DecRSSI_Debug_PVT_PEPS_DecRSSI
#  define Rte_Write_Debug_PVT_PEPS_Fob_location_Debug_PVT_PEPS_Fob_location Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Fob_location_Debug_PVT_PEPS_Fob_location
#  define Rte_Write_Debug_PVT_PEPS_GainP1_stat_Debug_PVT_PEPS_GainP1_stat Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_GainP1_stat_Debug_PVT_PEPS_GainP1_stat
#  define Rte_Write_Debug_PVT_PEPS_GainP2_stat_Debug_PVT_PEPS_GainP2_stat Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_GainP2_stat_Debug_PVT_PEPS_GainP2_stat
#  define Rte_Write_Debug_PVT_PEPS_GainP3_stat_Debug_PVT_PEPS_GainP3_stat Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_GainP3_stat_Debug_PVT_PEPS_GainP3_stat
#  define Rte_Write_Debug_PVT_PEPS_GainP4_stat_Debug_PVT_PEPS_GainP4_stat Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_GainP4_stat_Debug_PVT_PEPS_GainP4_stat
#  define Rte_Write_Debug_PVT_PEPS_GainPi_stat_Debug_PVT_PEPS_GainPi_stat Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_GainPi_stat_Debug_PVT_PEPS_GainPi_stat
#  define Rte_Write_Debug_PVT_PEPS_K_AntP1_Debug_PVT_PEPS_K_AntP1 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_K_AntP1_Debug_PVT_PEPS_K_AntP1
#  define Rte_Write_Debug_PVT_PEPS_K_AntP2_Debug_PVT_PEPS_K_AntP2 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_K_AntP2_Debug_PVT_PEPS_K_AntP2
#  define Rte_Write_Debug_PVT_PEPS_K_AntP3_Debug_PVT_PEPS_K_AntP3 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_K_AntP3_Debug_PVT_PEPS_K_AntP3
#  define Rte_Write_Debug_PVT_PEPS_K_AntP4_Debug_PVT_PEPS_K_AntP4 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_K_AntP4_Debug_PVT_PEPS_K_AntP4
#  define Rte_Write_Debug_PVT_PEPS_K_AntPi_Debug_PVT_PEPS_K_AntPi Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_K_AntPi_Debug_PVT_PEPS_K_AntPi
#  define Rte_Write_Debug_PVT_PEPS_K_Cir_Debug_PVT_PEPS_K_Cir Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_K_Cir_Debug_PVT_PEPS_K_Cir
#  define Rte_Write_Debug_PVT_PEPS_LimitRSSIP1_Debug_PVT_PEPS_LimitRSSIP1 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP1_Debug_PVT_PEPS_LimitRSSIP1
#  define Rte_Write_Debug_PVT_PEPS_LimitRSSIP2_Debug_PVT_PEPS_LimitRSSIP2 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP2_Debug_PVT_PEPS_LimitRSSIP2
#  define Rte_Write_Debug_PVT_PEPS_LimitRSSIP3_Debug_PVT_PEPS_LimitRSSIP3 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP3_Debug_PVT_PEPS_LimitRSSIP3
#  define Rte_Write_Debug_PVT_PEPS_LimitRSSIP4_Debug_PVT_PEPS_LimitRSSIP4 Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIP4_Debug_PVT_PEPS_LimitRSSIP4
#  define Rte_Write_Debug_PVT_PEPS_LimitRSSIPi_Debug_PVT_PEPS_LimitRSSIPi Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_LimitRSSIPi_Debug_PVT_PEPS_LimitRSSIPi
#  define Rte_Write_Debug_PVT_PEPS_Logic_stat_Debug_PVT_PEPS_Logic_stat Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Logic_stat_Debug_PVT_PEPS_Logic_stat
#  define Rte_Write_Debug_PVT_PEPS_P1_MaxRSSI_Debug_PVT_PEPS_P1_MaxRSSI Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_P1_MaxRSSI_Debug_PVT_PEPS_P1_MaxRSSI
#  define Rte_Write_Debug_PVT_PEPS_P2_MaxRSSI_Debug_PVT_PEPS_P2_MaxRSSI Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_P2_MaxRSSI_Debug_PVT_PEPS_P2_MaxRSSI
#  define Rte_Write_Debug_PVT_PEPS_P2_RSSIcut_Debug_PVT_PEPS_P2_RSSIcut Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_P2_RSSIcut_Debug_PVT_PEPS_P2_RSSIcut
#  define Rte_Write_Debug_PVT_PEPS_P3_MaxRSSI_Debug_PVT_PEPS_P3_MaxRSSI Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_P3_MaxRSSI_Debug_PVT_PEPS_P3_MaxRSSI
#  define Rte_Write_Debug_PVT_PEPS_P3_RSSIcut_Debug_PVT_PEPS_P3_RSSIcut Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_P3_RSSIcut_Debug_PVT_PEPS_P3_RSSIcut
#  define Rte_Write_Debug_PVT_PEPS_P4_MaxRSSI_Debug_PVT_PEPS_P4_MaxRSSI Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_P4_MaxRSSI_Debug_PVT_PEPS_P4_MaxRSSI
#  define Rte_Write_Debug_PVT_PEPS_Pi_MaxRSSI_Debug_PVT_PEPS_Pi_MaxRSSI Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Pi_MaxRSSI_Debug_PVT_PEPS_Pi_MaxRSSI
#  define Rte_Write_Debug_PVT_PEPS_Pi_RSSIcut_Debug_PVT_PEPS_Pi_RSSIcut Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Pi_RSSIcut_Debug_PVT_PEPS_Pi_RSSIcut
#  define Rte_Write_Debug_PVT_PEPS_TestPeriod_stat_Debug_PVT_PEPS_TestPeriod_stat Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_TestPeriod_stat_Debug_PVT_PEPS_TestPeriod_stat
#  define Rte_Write_Debug_PVT_PEPS_VDSI_stat_Debug_PVT_PEPS_VDSI_stat Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_VDSI_stat_Debug_PVT_PEPS_VDSI_stat
#  define Rte_Write_Debug_PVT_PEPS_Vlength_Debug_PVT_PEPS_Vlength Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Vlength_Debug_PVT_PEPS_Vlength
#  define Rte_Write_Debug_PVT_PEPS_Vsquare_Debug_PVT_PEPS_Vsquare Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Vsquare_Debug_PVT_PEPS_Vsquare
#  define Rte_Write_Debug_PVT_PEPS_Vwidth_Debug_PVT_PEPS_Vwidth Rte_Write_PVTApp_Radio_Debug_PVT_PEPS_Vwidth_Debug_PVT_PEPS_Vwidth
#  define Rte_Write_Debug_PVT_SCIM_RF_KeyfobSerialNb_Debug_PVT_SCIM_RF_KeyfobSerialNb Rte_Write_PVTApp_Radio_Debug_PVT_SCIM_RF_KeyfobSerialNb_Debug_PVT_SCIM_RF_KeyfobSerialNb
#  define Rte_Write_Debug_PVT_SCIM_RF_RollingCounter_Debug_PVT_SCIM_RF_RollingCounter Rte_Write_PVTApp_Radio_Debug_PVT_SCIM_RF_RollingCounter_Debug_PVT_SCIM_RF_RollingCounter


# endif /* !defined(RTE_CORE) */


# define PVTApp_Radio_START_SEC_CODE
# include "PVTApp_Radio_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Re_PvtRadio Re_PvtRadio
# endif

FUNC(void, PVTApp_Radio_CODE) Re_PvtRadio(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define PVTApp_Radio_STOP_SEC_CODE
# include "PVTApp_Radio_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_PVTAPP_RADIO_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
