/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Com
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Cbk.h
 *   Generation Time: 2018-11-22 03:14:17
 *           Project: CBD1800194D00 - Version 1.0
 *          Delivery: CBD1800194_D01
 *      Tool Version: DaVinci Configurator (beta) 5.17.51 SP2
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Pro and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/


#if !defined (COM_CBK_H)
# define COM_CBK_H

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/
/* PRQA S 0777 EOF */ /* MD_Com_0777_IPduCallouts */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com_Cot.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/



/**
 * \defgroup ComHandleIdsComRxPdu Handle IDs of handle space ComRxPdu.
 * \brief Rx Pdus
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_ACM_BB1_01P_oBackbone1J1939_57f87ee7_Rx       0
#define ComConf_ComIPdu_AIR1_X_VMCU_oBackbone1J1939_8c40baab_Rx       1
#define ComConf_ComIPdu_AMB_X_VMCU_oBackbone1J1939_7e62cfad_Rx        2
#define ComConf_ComIPdu_Alarm_Sec_02P_oSecuritySubnet_c389f589_Rx     3
#define ComConf_ComIPdu_Alarm_Sec_03S_oSecuritySubnet_7f4118ec_Rx     4
#define ComConf_ComIPdu_Alarm_Sec_06S_oSecuritySubnet_9bbb790b_Rx     5
#define ComConf_ComIPdu_Alarm_Sec_07S_oSecuritySubnet_74e9cfea_Rx     6
#define ComConf_ComIPdu_AnmMsg_Alarm_SecuritySubnet_oSecuritySubnet_142a14f5_Rx 7
#define ComConf_ComIPdu_AnmMsg_BBM_Backbone2_oBackbone2_bca080bd_Rx   8
#define ComConf_ComIPdu_AnmMsg_CCM_CabSubnet_oCabSubnet_2d9f2dda_Rx   9
#define ComConf_ComIPdu_AnmMsg_DACU_Backbone2_oBackbone2_49517b4d_Rx  10
#define ComConf_ComIPdu_AnmMsg_DDM_SecuritySubnet_oSecuritySubnet_c5aaf372_Rx 11
#define ComConf_ComIPdu_AnmMsg_ECUspare1_Backbone2_oBackbone2_90f829ea_Rx 12
#define ComConf_ComIPdu_AnmMsg_ECUspare2_Backbone2_oBackbone2_a98084aa_Rx 13
#define ComConf_ComIPdu_AnmMsg_ECUspare5_SecuritySubnet_oSecuritySubnet_44137fdb_Rx 14
#define ComConf_ComIPdu_AnmMsg_ECUspare6_CabSubnet_oCabSubnet_7e48353e_Rx 15
#define ComConf_ComIPdu_AnmMsg_EMS_Backbone2_oBackbone2_99fd5a83_Rx   16
#define ComConf_ComIPdu_AnmMsg_IC3_Backbone2_oBackbone2_8d54783a_Rx   17
#define ComConf_ComIPdu_AnmMsg_LECM1_CabSubnet_oCabSubnet_10e92ec5_Rx 18
#define ComConf_ComIPdu_AnmMsg_PDM_SecuritySubnet_oSecuritySubnet_7215ae09_Rx 19
#define ComConf_ComIPdu_AnmMsg_SRS_CabSubnet_oCabSubnet_aab008be_Rx   20
#define ComConf_ComIPdu_AnmMsg_TECU_Backbone2_oBackbone2_7840c27c_Rx  21
#define ComConf_ComIPdu_AnmMsg_VMCU_Backbone2_oBackbone2_3a2bd89f_Rx  22
#define ComConf_ComIPdu_AnmMsg_WRCS_CabSubnet_oCabSubnet_fa464471_Rx  23
#define ComConf_ComIPdu_BBM_BB2_01P_oBackbone2_0d63adb7_Rx            24
#define ComConf_ComIPdu_BBM_BB2_02P_oBackbone2_b0a9c179_Rx            25
#define ComConf_ComIPdu_BBM_BB2_03S_CIOM_oBackbone2_d5047985_Rx       26
#define ComConf_ComIPdu_BBM_BB2_06P_oBackbone2_7010abef_Rx            27
#define ComConf_ComIPdu_CCFWtoCIOM_L4_oLIN03_c78ba01d_Rx              28
#define ComConf_ComIPdu_CCM_Cab_01P_oCabSubnet_3993b0cf_Rx            29
#define ComConf_ComIPdu_CCM_Cab_03P_oCabSubnet_59cf0584_Rx            30
#define ComConf_ComIPdu_CCM_Cab_04P_oCabSubnet_24bc03dc_Rx            31
#define ComConf_ComIPdu_CCM_Cab_06P_oCabSubnet_44e0b697_Rx            32
#define ComConf_ComIPdu_CCM_Cab_07P_oCabSubnet_99766f12_Rx            33
#define ComConf_ComIPdu_CCM_Cab_08P_oCabSubnet_be06ba27_Rx            34
#define ComConf_ComIPdu_CCVS_X_VMCU_oBackbone1J1939_ebb768c1_Rx       35
#define ComConf_ComIPdu_CVW_X_EBS_oBackbone1J1939_1a9bdeb1_Rx         36
#define ComConf_ComIPdu_DACU_BB2_02P_oBackbone2_3e1257a1_Rx           37
#define ComConf_ComIPdu_DDM_Sec_01P_oSecuritySubnet_40cf4e44_Rx       38
#define ComConf_ComIPdu_DDM_Sec_03S_oSecuritySubnet_16817e43_Rx       39
#define ComConf_ComIPdu_DDM_Sec_04S_oSecuritySubnet_f7af7427_Rx       40
#define ComConf_ComIPdu_DDM_Sec_05S_oSecuritySubnet_18fdc2c6_Rx       41
#define ComConf_ComIPdu_DI_X_TACHO_oBackbone1J1939_0dca0ef5_Rx        42
#define ComConf_ComIPdu_DLFWtoCIOM_L4_oLIN03_65509040_Rx              43
#define ComConf_ComIPdu_DebugCtrl1_SCIM_BB2_oBackbone2_4d739d72_Rx    44
#define ComConf_ComIPdu_DebugCtrl2_SCIM_BB2_oBackbone2_366d1f91_Rx    45
#define ComConf_ComIPdu_DebugCtrl3_SCIM_BB2_oBackbone2_a9b79c0f_Rx    46
#define ComConf_ComIPdu_DebugCtrl4_SCIM_BB2_oBackbone2_c0501a57_Rx    47
#define ComConf_ComIPdu_DebugCtrl5_SCIM_BB2_oBackbone2_5f8a99c9_Rx    48
#define ComConf_ComIPdu_DebugCtrl6_SCIM_BB2_oBackbone2_24941b2a_Rx    49
#define ComConf_ComIPdu_DebugCtrl7_SCIM_BB2_oBackbone2_bb4e98b4_Rx    50
#define ComConf_ComIPdu_DebugCtrl8_SCIM_BB2_oBackbone2_f75b179a_Rx    51
#define ComConf_ComIPdu_DebugCtrl9_SCIM_BB2_oBackbone2_68819404_Rx    52
#define ComConf_ComIPdu_DiagFaultStat_Alarm_Sec_oSecuritySubnet_347db5f6_Rx 53
#define ComConf_ComIPdu_DiagFaultStat_CCM_Cab_oCabSubnet_d4c98b2c_Rx  54
#define ComConf_ComIPdu_DiagFaultStat_DDM_Sec_oSecuritySubnet_c65980ff_Rx 55
#define ComConf_ComIPdu_DiagFaultStat_LECM_Cab_oCabSubnet_870f9288_Rx 56
#define ComConf_ComIPdu_DiagFaultStat_PDM_Sec_oSecuritySubnet_c777a720_Rx 57
#define ComConf_ComIPdu_DiagFaultStat_SRS_Cab_oCabSubnet_ac384d3f_Rx  58
#define ComConf_ComIPdu_DiagFaultStat_WRCS_Cab_oCabSubnet_3792ace7_Rx 59
#define ComConf_ComIPdu_EBC1_X_EBS_oBackbone1J1939_68913e3f_Rx        60
#define ComConf_ComIPdu_EBC2_X_EBS_oBackbone1J1939_1e740702_Rx        61
#define ComConf_ComIPdu_EBC5_X_EBS_oBackbone1J1939_68cd9fac_Rx        62
#define ComConf_ComIPdu_EBS_BB1_01P_oBackbone1J1939_ce636b4a_Rx       63
#define ComConf_ComIPdu_EBS_BB1_02P_oBackbone1J1939_24e5b628_Rx       64
#define ComConf_ComIPdu_EBS_BB1_05P_oBackbone1J1939_c5cbbc4c_Rx       65
#define ComConf_ComIPdu_EEC1_X_EMS_oBackbone1J1939_50be66ff_Rx        66
#define ComConf_ComIPdu_EEC2_X_EMS_oBackbone1J1939_265b5fc2_Rx        67
#define ComConf_ComIPdu_ELCP1toCIOM_L4_oLIN03_e80fe278_Rx             68
#define ComConf_ComIPdu_ELCP2toCIOM_L4_oLIN03_bb95b9fc_Rx             69
#define ComConf_ComIPdu_EMS_BB2_01P_oBackbone2_dd91fc9b_Rx            70
#define ComConf_ComIPdu_EMS_BB2_04P_oBackbone2_c0be4f88_Rx            71
#define ComConf_ComIPdu_EMS_BB2_05P_oBackbone2_1d28960d_Rx            72
#define ComConf_ComIPdu_EMS_BB2_06P_oBackbone2_a0e2fac3_Rx            73
#define ComConf_ComIPdu_EMS_BB2_08P_oBackbone2_5a04f673_Rx            74
#define ComConf_ComIPdu_EMS_BB2_09S_oBackbone2_f00cfd06_Rx            75
#define ComConf_ComIPdu_EMS_BB2_11S_oBackbone2_3700cf1d_Rx            76
#define ComConf_ComIPdu_EMS_BB2_13P_oBackbone2_20c2a8a6_Rx            77
#define ComConf_ComIPdu_ERC1_X_EMSRet_oBackbone1J1939_6b48ff0e_Rx     78
#define ComConf_ComIPdu_ERC1_X_RECU_oBackbone1J1939_5afd0b6e_Rx       79
#define ComConf_ComIPdu_ET1_X_EMS_oBackbone1J1939_b4e1bda2_Rx         80
#define ComConf_ComIPdu_FMS1_X_HMIIOM_oBackbone1J1939_69e6dd44_Rx     81
#define ComConf_ComIPdu_FSP1_Frame_L1_oLIN00_7e067bd3_Rx              82
#define ComConf_ComIPdu_FSP1_Frame_L2_oLIN01_878e4ca6_Rx              83
#define ComConf_ComIPdu_FSP1_Frame_L3_oLIN02_d22d1d82_Rx              84
#define ComConf_ComIPdu_FSP1_Frame_L4_oLIN03_afef240d_Rx              85
#define ComConf_ComIPdu_FSP1_Frame_L5_oLIN04_fd21b130_Rx              86
#define ComConf_ComIPdu_FSP1_SwitchDetResp_L1_oLIN00_db048333_Rx      87
#define ComConf_ComIPdu_FSP1_SwitchDetResp_L2_oLIN01_228cb446_Rx      88
#define ComConf_ComIPdu_FSP1_SwitchDetResp_L3_oLIN02_772fe562_Rx      89
#define ComConf_ComIPdu_FSP1_SwitchDetResp_L4_oLIN03_0aeddced_Rx      90
#define ComConf_ComIPdu_FSP1_SwitchDetResp_L5_oLIN04_582349d0_Rx      91
#define ComConf_ComIPdu_FSP2_Frame_L1_oLIN00_2d9c2057_Rx              92
#define ComConf_ComIPdu_FSP2_Frame_L2_oLIN01_d4141722_Rx              93
#define ComConf_ComIPdu_FSP2_Frame_L3_oLIN02_81b74606_Rx              94
#define ComConf_ComIPdu_FSP2_SwitchDetResp_L1_oLIN00_eee93560_Rx      95
#define ComConf_ComIPdu_FSP2_SwitchDetResp_L2_oLIN01_17610215_Rx      96
#define ComConf_ComIPdu_FSP2_SwitchDetResp_L3_oLIN02_42c25331_Rx      97
#define ComConf_ComIPdu_FSP3_Frame_L2_oLIN01_53b2dc61_Rx              98
#define ComConf_ComIPdu_FSP3_SwitchDetResp_L2_oLIN01_b2ea921b_Rx      99
#define ComConf_ComIPdu_FSP4_Frame_L2_oLIN01_7320a02a_Rx              100
#define ComConf_ComIPdu_FSP4_SwitchDetResp_L2_oLIN01_7cba6eb3_Rx      101
#define ComConf_ComIPdu_HMIIOM_BB2_01P_oBackbone2_6b8c9af6_Rx         102
#define ComConf_ComIPdu_HMIIOM_BB2_03P_oBackbone2_0bd02fbd_Rx         103
#define ComConf_ComIPdu_HMIIOM_BB2_07P_oBackbone2_cb69452b_Rx         104
#define ComConf_ComIPdu_HMIIOM_BB2_08P_oBackbone2_ec19901e_Rx         105
#define ComConf_ComIPdu_HMIIOM_BB2_09P_oBackbone2_318f499b_Rx         106
#define ComConf_ComIPdu_HMIIOM_BB2_19P_CIOM_oBackbone2_da8f8d8b_Rx    107
#define ComConf_ComIPdu_HMIIOM_BB2_20S_oBackbone2_20ea552e_Rx         108
#define ComConf_ComIPdu_HMIIOM_BB2_22P_oBackbone2_37283295_Rx         109
#define ComConf_ComIPdu_HMIIOM_BB2_23P_oBackbone2_eabeeb10_Rx         110
#define ComConf_ComIPdu_HMIIOM_BB2_24P_oBackbone2_97cded48_Rx         111
#define ComConf_ComIPdu_HMIIOM_BB2_33P_oBackbone2_77b10a66_Rx         112
#define ComConf_ComIPdu_HMIIOM_BB2_34S_oBackbone2_7d5cdece_Rx         113
#define ComConf_ComIPdu_HMIIOM_BB2_35S_oBackbone2_a0ca074b_Rx         114
#define ComConf_ComIPdu_HMIIOM_BB2_36S_oBackbone2_1d006b85_Rx         115
#define ComConf_ComIPdu_HMIIOM_BB2_38P_oBackbone2_9078b5c5_Rx         116
#define ComConf_ComIPdu_HMIIOM_BB2_39P_oBackbone2_4dee6c40_Rx         117
#define ComConf_ComIPdu_HRLFC_X_EMS_oBackbone1J1939_e671f1b7_Rx       118
#define ComConf_ComIPdu_IC3_BB2_01S_oBackbone2_b32667c6_Rx            119
#define ComConf_ComIPdu_IC3_BB2_02P_oBackbone2_7972d9f8_Rx            120
#define ComConf_ComIPdu_IC3_BB2_03S_oBackbone2_d37ad28d_Rx            121
#define ComConf_ComIPdu_ILCP1toCIOM_L1_oLIN00_0eedb06b_Rx             122
#define ComConf_ComIPdu_ILCP2toCIOM_L4_oLIN03_8c9eb431_Rx             123
#define ComConf_ComIPdu_LECM1_Cab_02P_oCabSubnet_d045028e_Rx          124
#define ComConf_ComIPdu_LECM1_Cab_03S_oCabSubnet_7a4d09fb_Rx          125
#define ComConf_ComIPdu_LECM1_Cab_04P_oCabSubnet_70a0dd53_Rx          126
#define ComConf_ComIPdu_LECM1_Cab_05S_oCabSubnet_daa8d626_Rx          127
#define ComConf_ComIPdu_LECM2toCIOM_FR1_L1_oLIN00_3ccb97ef_Rx         128
#define ComConf_ComIPdu_LECM2toCIOM_FR2_L1_oLIN00_a529f1ee_Rx         129
#define ComConf_ComIPdu_LECM2toCIOM_FR3_L1_oLIN00_64a72e2e_Rx         130
#define ComConf_ComIPdu_LECMBasic2CIOM_L1_oLIN00_da4f3dd9_Rx          131
#define ComConf_ComIPdu_LFE_X_EMS_oBackbone1J1939_9d303f5e_Rx         132
#define ComConf_ComIPdu_PDM_Sec_01P_oSecuritySubnet_7ffa8e54_Rx       133
#define ComConf_ComIPdu_PDM_Sec_03S_oSecuritySubnet_29b4be53_Rx       134
#define ComConf_ComIPdu_PDM_Sec_04S_oSecuritySubnet_c89ab437_Rx       135
#define ComConf_ComIPdu_PropTCO2_X_TACHO_oBackbone1J1939_d2ebdcdb_Rx  136
#define ComConf_ComIPdu_RCECStoCIOM_L5_oLIN04_1a7dde70_Rx             137
#define ComConf_ComIPdu_SRS_Cab_01P_oCabSubnet_bd648bbe_Rx            138
#define ComConf_ComIPdu_SRS_Cab_03P_oCabSubnet_dd383ef5_Rx            139
#define ComConf_ComIPdu_SRS_Cab_04P_oCabSubnet_a04b38ad_Rx            140
#define ComConf_ComIPdu_SRS_Cab_05P_oCabSubnet_7ddde128_Rx            141
#define ComConf_ComIPdu_SRS_Cab_06P_oCabSubnet_c0178de6_Rx            142
#define ComConf_ComIPdu_TCO1_X_TACHO_oBackbone1J1939_9ce49b57_Rx      143
#define ComConf_ComIPdu_TCPtoMaster_oLIN02_0421b227_Rx                144
#define ComConf_ComIPdu_TD_X_HMIIOM_oBackbone1J1939_221848c4_Rx       145
#define ComConf_ComIPdu_TECU_BB2_01P_oBackbone2_de0b2e23_Rx           146
#define ComConf_ComIPdu_TECU_BB2_05S_oBackbone2_692c9645_Rx           147
#define ComConf_ComIPdu_TECU_BB2_06S_oBackbone2_d4e6fa8b_Rx           148
#define ComConf_ComIPdu_VDC1_X_EBS_oBackbone1J1939_5b4fe419_Rx        149
#define ComConf_ComIPdu_VDC2_X_EBS_oBackbone1J1939_2daadd24_Rx        150
#define ComConf_ComIPdu_VDHR_X_VMCU_oBackbone1J1939_fc2f75ee_Rx       151
#define ComConf_ComIPdu_VMCU_BB1_01P_oBackbone1J1939_f5234d42_Rx      152
#define ComConf_ComIPdu_VMCU_BB1_03P_oBackbone1J1939_f0f726c1_Rx      153
#define ComConf_ComIPdu_VMCU_BB2_01P_oBackbone2_8adedbca_Rx           154
#define ComConf_ComIPdu_VMCU_BB2_02P_oBackbone2_3714b704_Rx           155
#define ComConf_ComIPdu_VMCU_BB2_03P_oBackbone2_ea826e81_Rx           156
#define ComConf_ComIPdu_VMCU_BB2_04P_oBackbone2_97f168d9_Rx           157
#define ComConf_ComIPdu_VMCU_BB2_05P_oBackbone2_4a67b15c_Rx           158
#define ComConf_ComIPdu_VMCU_BB2_07P_oBackbone2_2a3b0417_Rx           159
#define ComConf_ComIPdu_VMCU_BB2_08P_oBackbone2_0d4bd122_Rx           160
#define ComConf_ComIPdu_VMCU_BB2_20P_oBackbone2_b626c6e2_Rx           161
#define ComConf_ComIPdu_VMCU_BB2_29P_oBackbone2_31b3cc0a_Rx           162
#define ComConf_ComIPdu_VMCU_BB2_31S_oBackbone2_81212ce1_Rx           163
#define ComConf_ComIPdu_VMCU_BB2_32S_oBackbone2_3ceb402f_Rx           164
#define ComConf_ComIPdu_VMCU_BB2_34S_oBackbone2_9c0e9ff2_Rx           165
#define ComConf_ComIPdu_VMCU_BB2_51P_oBackbone2_0e7db5a7_Rx           166
#define ComConf_ComIPdu_VMCU_BB2_52P_oBackbone2_b3b7d969_Rx           167
#define ComConf_ComIPdu_VMCU_BB2_53P_oBackbone2_6e2100ec_Rx           168
#define ComConf_ComIPdu_VMCU_BB2_54P_oBackbone2_135206b4_Rx           169
#define ComConf_ComIPdu_VMCU_BB2_55P_oBackbone2_cec4df31_Rx           170
#define ComConf_ComIPdu_VMCU_BB2_57P_oBackbone2_ae986a7a_Rx           171
#define ComConf_ComIPdu_VMCU_BB2_58P_oBackbone2_89e8bf4f_Rx           172
#define ComConf_ComIPdu_VMCU_BB2_73P_oBackbone2_8f4fc441_Rx           173
#define ComConf_ComIPdu_VMCU_BB2_74P_oBackbone2_f23cc219_Rx           174
#define ComConf_ComIPdu_VMCU_BB2_80P_oBackbone2_64111c79_Rx           175
#define ComConf_ComIPdu_VMCU_BB2_86P_oBackbone2_c4f4c3a4_Rx           176
#define ComConf_ComIPdu_VMCU_BB2_87P_oBackbone2_19621a21_Rx           177
#define ComConf_ComIPdu_VMCU_BB2_88P_oBackbone2_3e12cf14_Rx           178
#define ComConf_ComIPdu_VMCU_BB2_89P_oBackbone2_e3841691_Rx           179
#define ComConf_ComIPdu_VMCU_BB2_90P_oBackbone2_f91efd0f_Rx           180
#define ComConf_ComIPdu_VMCU_BB2_91P_oBackbone2_2488248a_Rx           181
#define ComConf_ComIPdu_VMCU_BB2_92P_oBackbone2_99424844_Rx           182
#define ComConf_ComIPdu_VMCU_BB2_93P_oBackbone2_44d491c1_Rx           183
#define ComConf_ComIPdu_VMCU_BB2_95P_oBackbone2_e4314e1c_Rx           184
#define ComConf_ComIPdu_VMCU_BB2_96P_oBackbone2_59fb22d2_Rx           185
#define ComConf_ComIPdu_VMCU_BB2_98P_oBackbone2_a31d2e62_Rx           186
#define ComConf_ComIPdu_VMCU_BB2_99P_oBackbone2_7e8bf7e7_Rx           187
#define ComConf_ComIPdu_VMCU_BB2_100P_oBackbone2_ff8ed6a7_Rx          188
#define ComConf_ComIPdu_VMCU_BB2_101P_oBackbone2_22180f22_Rx          189
#define ComConf_ComIPdu_VMCU_BB2_102P_oBackbone2_9fd263ec_Rx          190
#define ComConf_ComIPdu_VMCU_BB2_103P_oBackbone2_4244ba69_Rx          191
#define ComConf_ComIPdu_VMCU_BB2_105P_oBackbone2_e2a165b4_Rx          192
#define ComConf_ComIPdu_VMCU_BB2_106P_oBackbone2_5f6b097a_Rx          193
#define ComConf_ComIPdu_VMCU_BB2_107P_oBackbone2_82fdd0ff_Rx          194
#define ComConf_ComIPdu_VMCU_BB2_109P_oBackbone2_781bdc4f_Rx          195
#define ComConf_ComIPdu_VMCU_BB2_110P_oBackbone2_628137d1_Rx          196
#define ComConf_ComIPdu_VMCU_BB2_111P_oBackbone2_bf17ee54_Rx          197
#define ComConf_ComIPdu_VMCU_BB2_119P_oBackbone2_e5143d39_Rx          198
#define ComConf_ComIPdu_VP232_X_ERAU_oFMSNet_34122677_Rx              199
#define ComConf_ComIPdu_WRCS_Cab_01P_oCabSubnet_5ce104ec_Rx           200
#define ComConf_ComIPdu_WRCS_Cab_02P_oCabSubnet_e12b6822_Rx           201
#define ComConf_ComIPdu_WRCS_Cab_03P_oCabSubnet_3cbdb1a7_Rx           202
/**\} */

/**
 * \defgroup ComHandleIdsComTxPdu Handle IDs of handle space ComTxPdu.
 * \brief Tx Pdus
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_AIR1_X_CIOMFMS_oFMSNet_c1c93f86_Tx            0
#define ComConf_ComIPdu_AMB_X_CIOMFMS_oFMSNet_e990831c_Tx             1
#define ComConf_ComIPdu_AT1T1I1_X_CIOMFMS_oFMSNet_111e0664_Tx         2
#define ComConf_ComIPdu_AnmMsg_CIOM_Backbone2_oBackbone2_455d35af_Tx  3
#define ComConf_ComIPdu_AnmMsg_CIOM_CabSubnet_oCabSubnet_ce34173b_Tx  4
#define ComConf_ComIPdu_AnmMsg_CIOM_SecuritySubnet_oSecuritySubnet_1ca8dd7a_Tx 5
#define ComConf_ComIPdu_Backlight_FuncInd_L1_oLIN00_6273f3b1_Tx       6
#define ComConf_ComIPdu_Backlight_FuncInd_L2_oLIN01_9bfbc4c4_Tx       7
#define ComConf_ComIPdu_Backlight_FuncInd_L3_oLIN02_ce5895e0_Tx       8
#define ComConf_ComIPdu_Backlight_FuncInd_L4_oLIN03_b39aac6f_Tx       9
#define ComConf_ComIPdu_Backlight_FuncInd_L5_oLIN04_e1543952_Tx       10
#define ComConf_ComIPdu_CCVS_X_CIOMFMS_oFMSNet_7f7a8999_Tx            11
#define ComConf_ComIPdu_CIOM_BB1_01P_oBackbone1J1939_83fef105_Tx      12
#define ComConf_ComIPdu_CIOM_BB2_01P_oBackbone2_0634f59b_Tx           13
#define ComConf_ComIPdu_CIOM_BB2_02P_oBackbone2_bbfe9955_Tx           14
#define ComConf_ComIPdu_CIOM_BB2_03P_oBackbone2_666840d0_Tx           15
#define ComConf_ComIPdu_CIOM_BB2_04P_oBackbone2_1b1b4688_Tx           16
#define ComConf_ComIPdu_CIOM_BB2_05P_oBackbone2_c68d9f0d_Tx           17
#define ComConf_ComIPdu_CIOM_BB2_06P_oBackbone2_7b47f3c3_Tx           18
#define ComConf_ComIPdu_CIOM_BB2_07P_oBackbone2_a6d12a46_Tx           19
#define ComConf_ComIPdu_CIOM_BB2_10P_oBackbone2_46adcd68_Tx           20
#define ComConf_ComIPdu_CIOM_BB2_11P_oBackbone2_9b3b14ed_Tx           21
#define ComConf_ComIPdu_CIOM_BB2_12S_oBackbone2_516faad3_Tx           22
#define ComConf_ComIPdu_CIOM_BB2_13S_oBackbone2_8cf97356_Tx           23
#define ComConf_ComIPdu_CIOM_BB2_20S_oBackbone2_4d523a43_Tx           24
#define ComConf_ComIPdu_CIOM_BB2_21S_oBackbone2_90c4e3c6_Tx           25
#define ComConf_ComIPdu_CIOM_BB2_25P_oBackbone2_27e35ba0_Tx           26
#define ComConf_ComIPdu_CIOM_BB2_26S_oBackbone2_edb7e59e_Tx           27
#define ComConf_ComIPdu_CIOM_BB2_27S_oBackbone2_30213c1b_Tx           28
#define ComConf_ComIPdu_CIOM_BB2_28P_oBackbone2_60cf3bde_Tx           29
#define ComConf_ComIPdu_CIOM_BB2_29P_oBackbone2_bd59e25b_Tx           30
#define ComConf_ComIPdu_CIOM_BB2_30P_oBackbone2_a7c309c5_Tx           31
#define ComConf_ComIPdu_CIOM_BB2_31S_oBackbone2_0dcb02b0_Tx           32
#define ComConf_ComIPdu_CIOM_BB2_32S_oBackbone2_b0016e7e_Tx           33
#define ComConf_ComIPdu_CIOM_Cab_01P_oCabSubnet_ba360fbd_Tx           34
#define ComConf_ComIPdu_CIOM_Cab_02P_oCabSubnet_07fc6373_Tx           35
#define ComConf_ComIPdu_CIOM_Cab_03P_oCabSubnet_da6abaf6_Tx           36
#define ComConf_ComIPdu_CIOM_Cab_04S_oCabSubnet_d0876e5e_Tx           37
#define ComConf_ComIPdu_CIOM_Cab_05S_oCabSubnet_0d11b7db_Tx           38
#define ComConf_ComIPdu_CIOM_Cab_06P_oCabSubnet_c74509e5_Tx           39
#define ComConf_ComIPdu_CIOM_Cab_07P_oCabSubnet_1ad3d060_Tx           40
#define ComConf_ComIPdu_CIOM_Cab_08P_oCabSubnet_3da30555_Tx           41
#define ComConf_ComIPdu_CIOM_Cab_09P_oCabSubnet_e035dcd0_Tx           42
#define ComConf_ComIPdu_CIOM_Cab_10P_oCabSubnet_faaf374e_Tx           43
#define ComConf_ComIPdu_CIOM_Cab_11S_oCabSubnet_50a73c3b_Tx           44
#define ComConf_ComIPdu_CIOM_Cab_12P_oCabSubnet_9af38205_Tx           45
#define ComConf_ComIPdu_CIOM_Cab_13S_oCabSubnet_30fb8970_Tx           46
#define ComConf_ComIPdu_CIOM_Cab_14P_oCabSubnet_3a165dd8_Tx           47
#define ComConf_ComIPdu_CIOM_Cab_15P_oCabSubnet_e780845d_Tx           48
#define ComConf_ComIPdu_CIOM_Cab_16P_oCabSubnet_5a4ae893_Tx           49
#define ComConf_ComIPdu_CIOM_Cab_17P_oCabSubnet_87dc3116_Tx           50
#define ComConf_ComIPdu_CIOM_Cab_18P_oCabSubnet_a0ace423_Tx           51
#define ComConf_ComIPdu_CIOM_Cab_19P_oCabSubnet_7d3a3da6_Tx           52
#define ComConf_ComIPdu_CIOM_Cab_20S_oCabSubnet_f150c065_Tx           53
#define ComConf_ComIPdu_CIOM_Cab_21P_oCabSubnet_5b58cb10_Tx           54
#define ComConf_ComIPdu_CIOM_Cab_22P_oCabSubnet_e692a7de_Tx           55
#define ComConf_ComIPdu_CIOM_Cab_23P_oCabSubnet_3b047e5b_Tx           56
#define ComConf_ComIPdu_CIOM_Cab_24P_oCabSubnet_46777803_Tx           57
#define ComConf_ComIPdu_CIOM_Cab_25S_oCabSubnet_ec7f7376_Tx           58
#define ComConf_ComIPdu_CIOM_Cab_26P_oCabSubnet_262bcd48_Tx           59
#define ComConf_ComIPdu_CIOM_Cab_27P_oCabSubnet_fbbd14cd_Tx           60
#define ComConf_ComIPdu_CIOM_Cab_28S_oCabSubnet_ab531308_Tx           61
#define ComConf_ComIPdu_CIOM_Cab_29S_oCabSubnet_76c5ca8d_Tx           62
#define ComConf_ComIPdu_CIOM_Cab_30S_oCabSubnet_6c5f2113_Tx           63
#define ComConf_ComIPdu_CIOM_Cab_31P_oCabSubnet_c6572a66_Tx           64
#define ComConf_ComIPdu_CIOM_Cab_32P_oCabSubnet_7b9d46a8_Tx           65
#define ComConf_ComIPdu_CIOM_Cab_33P_oCabSubnet_a60b9f2d_Tx           66
#define ComConf_ComIPdu_CIOM_Cab_34P_oCabSubnet_db789975_Tx           67
#define ComConf_ComIPdu_CIOM_Sec_01P_oSecuritySubnet_43c7ca84_Tx      68
#define ComConf_ComIPdu_CIOM_Sec_02P_oSecuritySubnet_a94117e6_Tx      69
#define ComConf_ComIPdu_CIOM_Sec_03P_oSecuritySubnet_4613a107_Tx      70
#define ComConf_ComIPdu_CIOM_Sec_04P_oSecuritySubnet_a73dab63_Tx      71
#define ComConf_ComIPdu_CIOM_Sec_05S_oSecuritySubnet_1bf54606_Tx      72
#define ComConf_ComIPdu_CIOM_Sec_06S_oSecuritySubnet_f1739b64_Tx      73
#define ComConf_ComIPdu_CIOM_Sec_07S_oSecuritySubnet_1e212d85_Tx      74
#define ComConf_ComIPdu_CIOM_Sec_08S_oSecuritySubnet_e85e89ed_Tx      75
#define ComConf_ComIPdu_CIOM_Sec_09S_oSecuritySubnet_070c3f0c_Tx      76
#define ComConf_ComIPdu_CIOM_Sec_10S_oSecuritySubnet_28eda7b9_Tx      77
#define ComConf_ComIPdu_CIOM_Sec_11S_oSecuritySubnet_c7bf1158_Tx      78
#define ComConf_ComIPdu_CIOM_Sec_12S_oSecuritySubnet_2d39cc3a_Tx      79
#define ComConf_ComIPdu_CIOMtoSlaves1_L1_oLIN00_8b7527bd_Tx           80
#define ComConf_ComIPdu_CIOMtoSlaves1_L4_oLIN03_5a9c7863_Tx           81
#define ComConf_ComIPdu_CIOMtoSlaves2_FR1_L1_oLIN00_dfa25815_Tx       82
#define ComConf_ComIPdu_CIOMtoSlaves2_FR2_L1_oLIN00_46403e14_Tx       83
#define ComConf_ComIPdu_CIOMtoSlaves2_FR3_L1_oLIN00_87cee1d4_Tx       84
#define ComConf_ComIPdu_CIOMtoSlaves2_L4_oLIN03_c37e1e62_Tx           85
#define ComConf_ComIPdu_CIOMtoSlaves_L5_oLIN04_f05bf497_Tx            86
#define ComConf_ComIPdu_CL_X_CIOMFMS_oFMSNet_d1f9e889_Tx              87
#define ComConf_ComIPdu_CVW_X_CIOMFMS_oFMSNet_f228048c_Tx             88
#define ComConf_ComIPdu_DD_X_CIOMFMS_oFMSNet_391c539f_Tx              89
#define ComConf_ComIPdu_DI_X_CIOMFMS_oFMSNet_0e37c3a0_Tx              90
#define ComConf_ComIPdu_Debug2_SCIM_BB2_oBackbone2_30ed01cc_Tx        91
#define ComConf_ComIPdu_Debug3_SCIM_BB2_oBackbone2_af378252_Tx        92
#define ComConf_ComIPdu_Debug4_SCIM_BB2_oBackbone2_c6d0040a_Tx        93
#define ComConf_ComIPdu_Debug5_SCIM_BB2_oBackbone2_590a8794_Tx        94
#define ComConf_ComIPdu_Debug6_SCIM_BB2_oBackbone2_22140577_Tx        95
#define ComConf_ComIPdu_Debug7_SCIM_BB2_oBackbone2_bdce86e9_Tx        96
#define ComConf_ComIPdu_Debug8_SCIM_BB2_oBackbone2_f1db09c7_Tx        97
#define ComConf_ComIPdu_Debug9_SCIM_BB2_oBackbone2_6e018a59_Tx        98
#define ComConf_ComIPdu_Debug10_SCIM_BB2_oBackbone2_2c9b76c3_Tx       99
#define ComConf_ComIPdu_Debug11_SCIM_BB2_oBackbone2_b341f55d_Tx       100
#define ComConf_ComIPdu_Debug12_SCIM_BB2_oBackbone2_c85f77be_Tx       101
#define ComConf_ComIPdu_Debug13_SCIM_BB2_oBackbone2_5785f420_Tx       102
#define ComConf_ComIPdu_Debug14_SCIM_BB2_oBackbone2_3e627278_Tx       103
#define ComConf_ComIPdu_Debug15_SCIM_BB2_oBackbone2_a1b8f1e6_Tx       104
#define ComConf_ComIPdu_Debug16_SCIM_BB2_oBackbone2_daa67305_Tx       105
#define ComConf_ComIPdu_Debug17_SCIM_BB2_oBackbone2_457cf09b_Tx       106
#define ComConf_ComIPdu_Debug18_SCIM_BB2_oBackbone2_09697fb5_Tx       107
#define ComConf_ComIPdu_Debug19_SCIM_BB2_oBackbone2_96b3fc2b_Tx       108
#define ComConf_ComIPdu_Debug20_SCIM_BB2_oBackbone2_15e3db83_Tx       109
#define ComConf_ComIPdu_Debug21_SCIM_BB2_oBackbone2_8a39581d_Tx       110
#define ComConf_ComIPdu_Debug22_SCIM_BB2_oBackbone2_f127dafe_Tx       111
#define ComConf_ComIPdu_Debug24_SCIM_BB2_oBackbone2_071adf38_Tx       112
#define ComConf_ComIPdu_Debug25_SCIM_BB2_oBackbone2_98c05ca6_Tx       113
#define ComConf_ComIPdu_Debug26_SCIM_BB2_oBackbone2_e3dede45_Tx       114
#define ComConf_ComIPdu_Debug27_SCIM_BB2_oBackbone2_7c045ddb_Tx       115
#define ComConf_ComIPdu_Debug28_SCIM_BB2_oBackbone2_3011d2f5_Tx       116
#define ComConf_ComIPdu_DiagFaultStat_Alarm_BB2_oBackbone2_ed9b4dd9_Tx 117
#define ComConf_ComIPdu_DiagFaultStat_CCM_BB2_oBackbone2_9d39fab0_Tx  118
#define ComConf_ComIPdu_DiagFaultStat_CIOM_BB2_oBackbone2_04816481_Tx 119
#define ComConf_ComIPdu_DiagFaultStat_DDM_BB2_oBackbone2_5c858c9f_Tx  120
#define ComConf_ComIPdu_DiagFaultStat_LECM_BB2_oBackbone2_ceffe314_Tx 121
#define ComConf_ComIPdu_DiagFaultStat_PDM_BB2_oBackbone2_798e0781_Tx  122
#define ComConf_ComIPdu_DiagFaultStat_SRS_BB2_oBackbone2_e5c83ca3_Tx  123
#define ComConf_ComIPdu_DiagFaultStat_WRCS_BB2_oBackbone2_7e62dd7b_Tx 124
#define ComConf_ComIPdu_EEC1_X_CIOMFMS_oFMSNet_2fc23128_Tx            125
#define ComConf_ComIPdu_EEC2_X_CIOMFMS_oFMSNet_8c94b781_Tx            126
#define ComConf_ComIPdu_EEC14_X_CIOMFMS_oFMSNet_2c0ebba5_Tx           127
#define ComConf_ComIPdu_ERC1_x_EMSRetFMS_oFMSNet_71599960_Tx          128
#define ComConf_ComIPdu_ERC1_x_RECUFMS_oFMSNet_64a06015_Tx            129
#define ComConf_ComIPdu_ET1_X_CIOMFMS_oFMSNet_388be6e9_Tx             130
#define ComConf_ComIPdu_FMS1_X_CIOMFMS_oFMSNet_d38e3e3b_Tx            131
#define ComConf_ComIPdu_FMS_X_CIOMFMS_oFMSNet_44d7be16_Tx             132
#define ComConf_ComIPdu_FSP_1_2_Req_L1_oLIN00_6846650e_Tx             133
#define ComConf_ComIPdu_FSP_1_2_Req_L2_oLIN01_91ce527b_Tx             134
#define ComConf_ComIPdu_FSP_1_2_Req_L3_oLIN02_c46d035f_Tx             135
#define ComConf_ComIPdu_FSP_1_2_Req_L4_oLIN03_b9af3ad0_Tx             136
#define ComConf_ComIPdu_FSP_1_2_Req_L5_oLIN04_eb61afed_Tx             137
#define ComConf_ComIPdu_FSP_3_4_Req_L2_oLIN01_6708164e_Tx             138
#define ComConf_ComIPdu_HOURS_X_CIOMFMS_oFMSNet_3c4de7ce_Tx           139
#define ComConf_ComIPdu_HRLFC_X_CIOMFMS_oFMSNet_2bd59f3d_Tx           140
#define ComConf_ComIPdu_LFC_X_CIOMFMS_oFMSNet_a4d1166f_Tx             141
#define ComConf_ComIPdu_LFE_X_CIOMFMS_oFMSNet_390d1d7c_Tx             142
#define ComConf_ComIPdu_MastertoTCP_oLIN02_d16528d3_Tx                143
#define ComConf_ComIPdu_PTODE_X_CIOMFMS_oFMSNet_74e3ffab_Tx           144
#define ComConf_ComIPdu_SERV_X_CIOMFMS_oFMSNet_50d7a0fd_Tx            145
#define ComConf_ComIPdu_TCO1_X_CIOMFMS_oFMSNet_b4162784_Tx            146
#define ComConf_ComIPdu_VDHR_X_CIOMFMS_oFMSNet_da3fd25a_Tx            147
#define ComConf_ComIPdu_VI_X_CIOMFMS_oFMSNet_243f1e09_Tx              148
#define ComConf_ComIPdu_VP236_X_CIOMFMS_oFMSNet_b08a3073_Tx           149
#define ComConf_ComIPdu_VW_X_CIOMFMS_oFMSNet_a3003395_Tx              150
/**\} */

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define COM_START_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
  Com_RxIndication
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer after an I-PDU has been received.
    \param    RxPduId      ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
                              Range: 0..(maximum number of I-PDU IDs received by AUTOSAR COM) - 1
    \param    PduInfoPtr      Payload information of the received I-PDU (pointer to data and data length).
    \return   none
    \context  The function can be called on interrupt and task level. It is not allowed to use CAT1 interrupts with Rte (BSW00326]). Due to this, the interrupt context shall be configured to a CAT2 interrupt if an Rte is used. 
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2737026
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_RxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);

/**********************************************************************************************************************
  Com_TxConfirmation
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer after the PDU has been transmitted on the network.
              A confirmation that is received for an I-PDU that does not require a confirmation is silently discarded.
    \param    TxPduId    ID of AUTOSAR COM I-PDU that has been transmitted.
                            Range: 0..(maximum number of I-PDU IDs transmitted by AUTOSAR COM) - 1
    \return   none
    \context  The function can be called on interrupt and task level. It is not allowed to use CAT1 interrupts with Rte (BSW00326]). Due to this, the interrupt context shall be configured to a CAT2 interrupt if an Rte is used. 
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2737028
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TxConfirmation(PduIdType TxPduId);

/**********************************************************************************************************************
  Com_TriggerTransmit
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer when an AUTOSAR COM I-PDU shall be transmitted.
              Within this function, AUTOSAR COM shall copy the contents of its I-PDU transmit buffer
              to the L-PDU buffer given by SduPtr.
              Use case:
              This function is used e.g. by the LIN Master for sending out a LIN frame. In this case, the trigger transmit
              can be initiated by the Master schedule table itself or a received LIN header.
              This function is also used by the FlexRay Interface for requesting PDUs to be sent in static part
              (synchronous to the FlexRay global time). Once the I-PDU has been successfully sent by the lower layer
              (PDU-Router), the lower layer must call Com_TxConfirmation().
    \param          TxPduId       ID of AUTOSAR COM I-PDU that is requested to be transmitted by AUTOSAR COM.
    \param[in,out]  PduInfoPtr    Contains a pointer to a buffer (SduDataPtr) where the SDU
                                  data shall be copied to, and the available buffer size in SduLengh.
                                  On return, the service will indicate the length of the copied SDU
                                  data in SduLength.
    \return         E_OK          SDU has been copied and SduLength indicates the number of copied bytes.
    \return         E_NOT_OK      No data has been copied, because
                                  Com is not initialized
                                  or TxPduId is not valid
                                  or PduInfoPtr is NULL_PTR
                                  or SduDataPtr is NULL_PTR
                                  or SduLength is too small.
    \context  TASK|ISR2
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2737022, SPEC-2737023, SPEC-2737024
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(Std_ReturnType, COM_CODE) Com_TriggerTransmit(PduIdType TxPduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) PduInfoPtr);

/**********************************************************************************************************************
  Com_TpTxConfirmation
**********************************************************************************************************************/
/** \brief    This function is called by the PduR after a large I-PDU has been transmitted via the transport protocol on its network. 
    \param    PduId    ID of the I-PDU that has been transmitted.   
    \param    Result   Result of the transmission of the I-PDU 
    \return   None. 
    \context  TASK|ISR2
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2737029
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TpTxConfirmation( PduIdType PduId, Std_ReturnType Result );
                                        
/**********************************************************************************************************************
  Com_CopyTxData
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer to copy Data from the Com TP buffer to the lower layer TP buffer.
    \param    PduId               ID of Com TP I-PDU to be transmitted.
    \param    PduInfoPt           Pointer to a PduInfoType, which indicates the number of bytes to be copied (SduLength) and the location where the data have to be copied to (SduDataPtr). 
                                  An SduLength of 0 is possible in order to poll the available transmit data count. In this case no data are to be copied and SduDataPtr might be invalid.
    \param    RetryInfoPtr        The COM module ignores the value of this pointer, since it always keeps the complete buffer until the transmission of a large I-PDU is either confirmed or aborted.
    \param    TxDataCntPtr        Out parameter: Remaining Tx data after completion of this call.
    \return   BufReq_ReturnType   BUFREQ_OK:       Data has been copied to the transmit buffer completely as requested.
                                  BUFREQ_E_BUSY:   The transmission buffer is actually not available (implementation specific).
                                  BUFREQ_E_NOT_OK: Data has not been copied. Request failed, in case the corresponding I-PDU was stopped. 
    \context  TASK|ISR2
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2736849, SPEC-2737039, SPEC-2737040
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, COM_CODE) Com_CopyTxData(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) PduInfoPtr, P2VAR(RetryInfoType, AUTOMATIC, COM_APPL_VAR) RetryInfoPtr, P2VAR(PduLengthType, AUTOMATIC, COM_APPL_VAR) TxDataCntPtr);

/**********************************************************************************************************************
  Com_TpRxIndication
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer after a TP I-PDU has been received.
    \param    PduId      ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
                         Range: 0..(maximum number of I-PDU IDs received by AUTOSAR COM) - 1
    \param    Result     Indicates whether the Message was received successfully.
    \return   none
    \context  TASK|ISR2
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2737027, SPEC-2737063
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TpRxIndication( PduIdType PduId, Std_ReturnType Result );

/**********************************************************************************************************************
  Com_StartOfReception
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer to indicate the start of a incomming TP connection.
    \param    ComRxPduId         ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
    \param    TpSduInfoPtr       The parameter 'TpSduInfoPtr' is currently not used by COM.
    \param    TpSduLength        complete length of the TP I-PDU to be received.
    \param    RxBufferSizePtr    The Com returns in this value the remaining TP buffer size to the lower layer.
    \return   BufReq_ReturnType  BUFREQ_OK:       Connection has been accepted.                                                    
                                                  RxBufferSizePtr indicates the available receive buffer.
                                 BUFREQ_E_NOT_OK: Connection has been rejected. 
                                                  RxBufferSizePtr remains unchanged.
                                 BUFREQ_E_OVFL:   In case the configured buffer size as specified via ComPduIdRef.PduLength is smaller than TpSduLength.
                                 BUFREQ_E_BUSY:   In case the reception buffer is actually not available for a new reception (implementation specific).
    \context  TASK|ISR2
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2736846, SPEC-2737030, SPEC-2737031, SPEC-2737032, SPEC-2737033, SPEC-2737034, SPEC-2737035, SPEC-2737036
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, COM_CODE) Com_StartOfReception(PduIdType ComRxPduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) TpSduInfoPtr, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, COM_APPL_VAR) RxBufferSizePtr);

/**********************************************************************************************************************
  Com_CopyRxData
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer to hand a received TP segment to Com. 
              The Com copies the received segment in his internal tp buffer.
    \param    PduId              ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
    \param    PduInfoPointer     Payload information of the received TP segment (pointer to data and data length).
    \param    RxBufferSizePtr    The Com returns in this value the remaining TP buffer size to the lower layer.
    \return   BufReq_ReturnType  BUFREQ_OK:       Connection has been accepted.                                                    
                                                  RxBufferSizePtr indicates the available receive buffer.
                                 BUFREQ_E_NOT_OK: Connection has been rejected. 
                                                  RxBufferSizePtr remains unchanged.
                                 BUFREQ_E_OVFL:   In case the configured buffer size as specified via ComPduIdRef.PduLength is smaller than TpSduLength. 
                                 BUFREQ_E_BUSY:   In case the reception buffer is actually not available for a new reception (implementation specific).                    
    \context  TASK|ISR2
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2736846, SPEC-2737037, SPEC-2737038
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, COM_CODE) Com_CopyRxData(PduIdType PduId, CONSTP2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPointer, P2VAR(PduLengthType, AUTOMATIC, COM_APPL_VAR) RxBufferSizePtr);

#define COM_STOP_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /* MD_MSR_19.1 */

#endif  /* COM_CBK_H */
/**********************************************************************************************************************
  END OF FILE: Com_Cbk.h
**********************************************************************************************************************/

