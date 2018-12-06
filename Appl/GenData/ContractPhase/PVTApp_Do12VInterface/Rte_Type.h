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
 *          File:  Rte_Type.h
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim_181121_BB2_Pvt_0_7_DetDisable_00/SCIM_BP.dpa
 *     SW-C Type:  PVTApp_Do12VInterface
 *  Generated at:  Fri Nov 23 09:22:52 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  Header file containing user defined AUTOSAR types and RTE structures (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TYPE_H
# define _RTE_TYPE_H

# include "Rte.h"


/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_12VDCDC_1
typedef boolean Debug_PVT_SCIM_Ctrl_12VDCDC_1;

# define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_12VLiving_1
typedef boolean Debug_PVT_SCIM_Ctrl_12VLiving_1;

# define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_12VParked_1
typedef boolean Debug_PVT_SCIM_Ctrl_12VParked_1;

# define Rte_TypeDef_Debug_PVT_SCIM_RD_12VDCDCVolt
typedef uint8 Debug_PVT_SCIM_RD_12VDCDCVolt;

# define Rte_TypeDef_Debug_PVT_SCIM_RD_VBAT_1
typedef uint16 Debug_PVT_SCIM_RD_VBAT_1;

# define Rte_TypeDef_Debug_PVT_SCIM_RD_12VDCDCFault
typedef uint8 Debug_PVT_SCIM_RD_12VDCDCFault;

# define Rte_TypeDef_IOHWAB_BOOL
typedef boolean IOHWAB_BOOL;

# define Rte_TypeDef_IOHWAB_UINT16
typedef uint16 IOHWAB_UINT16;

# define Rte_TypeDef_IOHWAB_UINT8
typedef uint8 IOHWAB_UINT8;

# define Rte_TypeDef_VGTT_EcuPinDiagStatus
typedef IOHWAB_UINT8 VGTT_EcuPinDiagStatus;

# define Rte_TypeDef_VGTT_EcuPinVoltage_0V2
typedef IOHWAB_UINT8 VGTT_EcuPinVoltage_0V2;


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_Debug_PVT_Fob_RF_RollingCounter
typedef uint32 Debug_PVT_Fob_RF_RollingCounter;

#  define Rte_TypeDef_Debug_PVT_Fob_RF_RollingCounter_1
typedef uint32 Debug_PVT_Fob_RF_RollingCounter_1;

#  define Rte_TypeDef_Debug_PVT_Fob_Volt_Low
typedef boolean Debug_PVT_Fob_Volt_Low;

#  define Rte_TypeDef_Debug_PVT_PEPS_A_AntP1
typedef sint16 Debug_PVT_PEPS_A_AntP1;

#  define Rte_TypeDef_Debug_PVT_PEPS_A_AntP1_Ctrl
typedef sint16 Debug_PVT_PEPS_A_AntP1_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_A_AntP2
typedef sint16 Debug_PVT_PEPS_A_AntP2;

#  define Rte_TypeDef_Debug_PVT_PEPS_A_AntP2_Ctrl
typedef sint16 Debug_PVT_PEPS_A_AntP2_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_A_AntP3
typedef sint16 Debug_PVT_PEPS_A_AntP3;

#  define Rte_TypeDef_Debug_PVT_PEPS_A_AntP3_Ctrl
typedef sint16 Debug_PVT_PEPS_A_AntP3_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_A_AntP4
typedef sint16 Debug_PVT_PEPS_A_AntP4;

#  define Rte_TypeDef_Debug_PVT_PEPS_A_AntP4_Ctrl
typedef sint16 Debug_PVT_PEPS_A_AntP4_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_A_AntPi
typedef sint16 Debug_PVT_PEPS_A_AntPi;

#  define Rte_TypeDef_Debug_PVT_PEPS_A_AntPi_Ctrl
typedef sint16 Debug_PVT_PEPS_A_AntPi_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_AntP1_X
typedef sint16 Debug_PVT_PEPS_AntP1_X;

#  define Rte_TypeDef_Debug_PVT_PEPS_AntP1_X_Ctrl
typedef sint16 Debug_PVT_PEPS_AntP1_X_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_AntP1_Y
typedef sint16 Debug_PVT_PEPS_AntP1_Y;

#  define Rte_TypeDef_Debug_PVT_PEPS_AntP1_Y_Ctrl
typedef sint16 Debug_PVT_PEPS_AntP1_Y_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_AntPi_X
typedef sint16 Debug_PVT_PEPS_AntPi_X;

#  define Rte_TypeDef_Debug_PVT_PEPS_AntPi_X_Ctrl
typedef sint16 Debug_PVT_PEPS_AntPi_X_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_AntPi_Y
typedef sint16 Debug_PVT_PEPS_AntPi_Y;

#  define Rte_TypeDef_Debug_PVT_PEPS_AntPi_Y_Ctrl
typedef sint16 Debug_PVT_PEPS_AntPi_Y_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_AverRSSI1
typedef uint8 Debug_PVT_PEPS_AverRSSI1;

#  define Rte_TypeDef_Debug_PVT_PEPS_AverRSSI2
typedef uint8 Debug_PVT_PEPS_AverRSSI2;

#  define Rte_TypeDef_Debug_PVT_PEPS_Avercut
typedef uint8 Debug_PVT_PEPS_Avercut;

#  define Rte_TypeDef_Debug_PVT_PEPS_Avercut_Ctrl
typedef uint8 Debug_PVT_PEPS_Avercut_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_CTPoint_X1
typedef sint16 Debug_PVT_PEPS_CTPoint_X1;

#  define Rte_TypeDef_Debug_PVT_PEPS_CTPoint_X2
typedef sint16 Debug_PVT_PEPS_CTPoint_X2;

#  define Rte_TypeDef_Debug_PVT_PEPS_CTPoint_Y1
typedef sint16 Debug_PVT_PEPS_CTPoint_Y1;

#  define Rte_TypeDef_Debug_PVT_PEPS_CTPoint_Y2
typedef sint16 Debug_PVT_PEPS_CTPoint_Y2;

#  define Rte_TypeDef_Debug_PVT_PEPS_Cali_Cir
typedef sint16 Debug_PVT_PEPS_Cali_Cir;

#  define Rte_TypeDef_Debug_PVT_PEPS_D_AntP1ToFob
typedef uint16 Debug_PVT_PEPS_D_AntP1ToFob;

#  define Rte_TypeDef_Debug_PVT_PEPS_D_AntP1toP2_Cir
typedef uint8 Debug_PVT_PEPS_D_AntP1toP2_Cir;

#  define Rte_TypeDef_Debug_PVT_PEPS_D_AntP1toP2_X
typedef sint16 Debug_PVT_PEPS_D_AntP1toP2_X;

#  define Rte_TypeDef_Debug_PVT_PEPS_D_AntP1toP2_Y
typedef sint16 Debug_PVT_PEPS_D_AntP1toP2_Y;

#  define Rte_TypeDef_Debug_PVT_PEPS_D_AntP2ToFob
typedef sint16 Debug_PVT_PEPS_D_AntP2ToFob;

#  define Rte_TypeDef_Debug_PVT_PEPS_D_AntP3ToFob
typedef uint16 Debug_PVT_PEPS_D_AntP3ToFob;

#  define Rte_TypeDef_Debug_PVT_PEPS_D_AntP4ToFob
typedef uint16 Debug_PVT_PEPS_D_AntP4ToFob;

#  define Rte_TypeDef_Debug_PVT_PEPS_D_AntPiToFob
typedef uint16 Debug_PVT_PEPS_D_AntPiToFob;

#  define Rte_TypeDef_Debug_PVT_PEPS_DecRSSI
typedef uint16 Debug_PVT_PEPS_DecRSSI;

#  define Rte_TypeDef_Debug_PVT_PEPS_GainP1_Ctrl
typedef uint8 Debug_PVT_PEPS_GainP1_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_GainP1_stat
typedef uint8 Debug_PVT_PEPS_GainP1_stat;

#  define Rte_TypeDef_Debug_PVT_PEPS_GainP2_Ctrl
typedef uint8 Debug_PVT_PEPS_GainP2_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_GainP2_stat
typedef uint8 Debug_PVT_PEPS_GainP2_stat;

#  define Rte_TypeDef_Debug_PVT_PEPS_GainP3_Ctrl
typedef uint8 Debug_PVT_PEPS_GainP3_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_GainP3_stat
typedef uint8 Debug_PVT_PEPS_GainP3_stat;

#  define Rte_TypeDef_Debug_PVT_PEPS_GainP4_Ctrl
typedef uint8 Debug_PVT_PEPS_GainP4_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_GainP4_stat
typedef uint8 Debug_PVT_PEPS_GainP4_stat;

#  define Rte_TypeDef_Debug_PVT_PEPS_GainPi_Ctrl
typedef uint8 Debug_PVT_PEPS_GainPi_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_GainPi_stat
typedef uint8 Debug_PVT_PEPS_GainPi_stat;

#  define Rte_TypeDef_Debug_PVT_PEPS_K_AntP1
typedef sint16 Debug_PVT_PEPS_K_AntP1;

#  define Rte_TypeDef_Debug_PVT_PEPS_K_AntP1_Ctrl
typedef sint16 Debug_PVT_PEPS_K_AntP1_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_K_AntP2
typedef sint16 Debug_PVT_PEPS_K_AntP2;

#  define Rte_TypeDef_Debug_PVT_PEPS_K_AntP2_Ctrl
typedef sint16 Debug_PVT_PEPS_K_AntP2_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_K_AntP3
typedef sint16 Debug_PVT_PEPS_K_AntP3;

#  define Rte_TypeDef_Debug_PVT_PEPS_K_AntP3_Ctrl
typedef sint16 Debug_PVT_PEPS_K_AntP3_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_K_AntP4
typedef sint16 Debug_PVT_PEPS_K_AntP4;

#  define Rte_TypeDef_Debug_PVT_PEPS_K_AntP4_Ctrl
typedef sint16 Debug_PVT_PEPS_K_AntP4_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_K_AntPi
typedef sint16 Debug_PVT_PEPS_K_AntPi;

#  define Rte_TypeDef_Debug_PVT_PEPS_K_AntPi_Ctrl
typedef sint16 Debug_PVT_PEPS_K_AntPi_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_K_Cir
typedef sint16 Debug_PVT_PEPS_K_Cir;

#  define Rte_TypeDef_Debug_PVT_PEPS_LimitRSSIP1
typedef uint16 Debug_PVT_PEPS_LimitRSSIP1;

#  define Rte_TypeDef_Debug_PVT_PEPS_LimitRSSIP1_Ctrl
typedef uint16 Debug_PVT_PEPS_LimitRSSIP1_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_LimitRSSIP2
typedef uint16 Debug_PVT_PEPS_LimitRSSIP2;

#  define Rte_TypeDef_Debug_PVT_PEPS_LimitRSSIP2_Ctrl
typedef uint16 Debug_PVT_PEPS_LimitRSSIP2_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_LimitRSSIP3
typedef uint16 Debug_PVT_PEPS_LimitRSSIP3;

#  define Rte_TypeDef_Debug_PVT_PEPS_LimitRSSIP3_Ctrl
typedef uint16 Debug_PVT_PEPS_LimitRSSIP3_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_LimitRSSIP4
typedef uint16 Debug_PVT_PEPS_LimitRSSIP4;

#  define Rte_TypeDef_Debug_PVT_PEPS_LimitRSSIP4_Ctrl
typedef uint16 Debug_PVT_PEPS_LimitRSSIP4_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_LimitRSSIPi
typedef uint16 Debug_PVT_PEPS_LimitRSSIPi;

#  define Rte_TypeDef_Debug_PVT_PEPS_LmitRSSIPi_Ctrl
typedef uint16 Debug_PVT_PEPS_LmitRSSIPi_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_Logic_stat
typedef uint8 Debug_PVT_PEPS_Logic_stat;

#  define Rte_TypeDef_Debug_PVT_PEPS_P1_MaxRSSI
typedef uint16 Debug_PVT_PEPS_P1_MaxRSSI;

#  define Rte_TypeDef_Debug_PVT_PEPS_P2_MaxRSSI
typedef uint16 Debug_PVT_PEPS_P2_MaxRSSI;

#  define Rte_TypeDef_Debug_PVT_PEPS_P2_RSSIcut
typedef uint16 Debug_PVT_PEPS_P2_RSSIcut;

#  define Rte_TypeDef_Debug_PVT_PEPS_P2_RSSIcut_Ctrl
typedef uint16 Debug_PVT_PEPS_P2_RSSIcut_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_P3_MaxRSSI
typedef uint16 Debug_PVT_PEPS_P3_MaxRSSI;

#  define Rte_TypeDef_Debug_PVT_PEPS_P3_RSSIcut
typedef uint16 Debug_PVT_PEPS_P3_RSSIcut;

#  define Rte_TypeDef_Debug_PVT_PEPS_P3_RSSIcut_Ctrl
typedef uint16 Debug_PVT_PEPS_P3_RSSIcut_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_P4_MaxRSSI
typedef uint16 Debug_PVT_PEPS_P4_MaxRSSI;

#  define Rte_TypeDef_Debug_PVT_PEPS_Pi_MaxRSSI
typedef uint16 Debug_PVT_PEPS_Pi_MaxRSSI;

#  define Rte_TypeDef_Debug_PVT_PEPS_Pi_RSSIcut
typedef uint16 Debug_PVT_PEPS_Pi_RSSIcut;

#  define Rte_TypeDef_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl
typedef uint16 Debug_PVT_PEPS_Pi_RSSIcut_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_VDSI_Ctrl
typedef uint16 Debug_PVT_PEPS_VDSI_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_VDSI_stat
typedef uint16 Debug_PVT_PEPS_VDSI_stat;

#  define Rte_TypeDef_Debug_PVT_PEPS_VSquare_Ctrl
typedef uint16 Debug_PVT_PEPS_VSquare_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_VWidth_Ctrl
typedef uint8 Debug_PVT_PEPS_VWidth_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_Vlength
typedef uint8 Debug_PVT_PEPS_Vlength;

#  define Rte_TypeDef_Debug_PVT_PEPS_Vlength_Ctrl
typedef uint8 Debug_PVT_PEPS_Vlength_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_Vsquare
typedef uint16 Debug_PVT_PEPS_Vsquare;

#  define Rte_TypeDef_Debug_PVT_PEPS_Vwidth
typedef uint8 Debug_PVT_PEPS_Vwidth;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_12VDCDC
typedef boolean Debug_PVT_SCIM_Ctrl_12VDCDC;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_12VLiving
typedef boolean Debug_PVT_SCIM_Ctrl_12VLiving;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_12VParked
typedef boolean Debug_PVT_SCIM_Ctrl_12VParked;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_BHS1
typedef boolean Debug_PVT_SCIM_Ctrl_BHS1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_BHS1_1
typedef boolean Debug_PVT_SCIM_Ctrl_BHS1_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_BHS2
typedef boolean Debug_PVT_SCIM_Ctrl_BHS2;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_BHS2_1
typedef boolean Debug_PVT_SCIM_Ctrl_BHS2_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_BHS3
typedef boolean Debug_PVT_SCIM_Ctrl_BHS3;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_BHS3_1
typedef boolean Debug_PVT_SCIM_Ctrl_BHS3_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_BHS4
typedef boolean Debug_PVT_SCIM_Ctrl_BHS4;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_BHS4_1
typedef boolean Debug_PVT_SCIM_Ctrl_BHS4_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_DaiPullUp
typedef boolean Debug_PVT_SCIM_Ctrl_DaiPullUp;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_DaiPullUp_1
typedef boolean Debug_PVT_SCIM_Ctrl_DaiPullUp_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_LivingPullUp
typedef boolean Debug_PVT_SCIM_Ctrl_LivingPullUp;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_LivingPullUp_1
typedef boolean Debug_PVT_SCIM_Ctrl_LivingPullUp_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_ParkedPullUp
typedef boolean Debug_PVT_SCIM_Ctrl_ParkedPullUp;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_ParkedPullUp_1
typedef boolean Debug_PVT_SCIM_Ctrl_ParkedPullUp_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WHS1
typedef boolean Debug_PVT_SCIM_Ctrl_WHS1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WHS1_1
typedef boolean Debug_PVT_SCIM_Ctrl_WHS1_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WHS1_Duty
typedef uint8 Debug_PVT_SCIM_Ctrl_WHS1_Duty;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WHS1_Duty_1
typedef uint8 Debug_PVT_SCIM_Ctrl_WHS1_Duty_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WHS1_Freq
typedef uint16 Debug_PVT_SCIM_Ctrl_WHS1_Freq;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WHS1_Freq_1
typedef uint16 Debug_PVT_SCIM_Ctrl_WHS1_Freq_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WHS2
typedef boolean Debug_PVT_SCIM_Ctrl_WHS2;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WHS2_1
typedef boolean Debug_PVT_SCIM_Ctrl_WHS2_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WHS2_Duty
typedef uint8 Debug_PVT_SCIM_Ctrl_WHS2_Duty;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WHS2_Duty_1
typedef uint8 Debug_PVT_SCIM_Ctrl_WHS2_Duty_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WHS2_Freq
typedef uint16 Debug_PVT_SCIM_Ctrl_WHS2_Freq;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WHS2_Freq_1
typedef uint16 Debug_PVT_SCIM_Ctrl_WHS2_Freq_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS1
typedef boolean Debug_PVT_SCIM_Ctrl_WLS1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS1_1
typedef boolean Debug_PVT_SCIM_Ctrl_WLS1_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS1_Duty
typedef uint8 Debug_PVT_SCIM_Ctrl_WLS1_Duty;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS1_Duty_1
typedef uint8 Debug_PVT_SCIM_Ctrl_WLS1_Duty_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS1_Freq
typedef uint16 Debug_PVT_SCIM_Ctrl_WLS1_Freq;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS1_Freq_1
typedef uint16 Debug_PVT_SCIM_Ctrl_WLS1_Freq_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS2
typedef boolean Debug_PVT_SCIM_Ctrl_WLS2;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS2Duty
typedef uint8 Debug_PVT_SCIM_Ctrl_WLS2Duty;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS2Duty_1
typedef uint8 Debug_PVT_SCIM_Ctrl_WLS2Duty_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS2Freq
typedef uint16 Debug_PVT_SCIM_Ctrl_WLS2Freq;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS2Freq_1
typedef uint16 Debug_PVT_SCIM_Ctrl_WLS2Freq_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS2_1
typedef boolean Debug_PVT_SCIM_Ctrl_WLS2_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS3
typedef boolean Debug_PVT_SCIM_Ctrl_WLS3;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS3Duty
typedef uint8 Debug_PVT_SCIM_Ctrl_WLS3Duty;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS3Duty_1
typedef uint8 Debug_PVT_SCIM_Ctrl_WLS3Duty_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS3Freq
typedef uint16 Debug_PVT_SCIM_Ctrl_WLS3Freq;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS3Freq_1
typedef uint16 Debug_PVT_SCIM_Ctrl_WLS3Freq_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_Ctrl_WLS3_1
typedef boolean Debug_PVT_SCIM_Ctrl_WLS3_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_12VDCDCVolt_1
typedef uint8 Debug_PVT_SCIM_RD_12VDCDCVolt_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_12VLivingVolt
typedef uint8 Debug_PVT_SCIM_RD_12VLivingVolt;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_12VLivingVolt_1
typedef uint8 Debug_PVT_SCIM_RD_12VLivingVolt_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_12VParkedVolt
typedef uint8 Debug_PVT_SCIM_RD_12VParkedVolt;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_12VParkedVolt_1
typedef uint8 Debug_PVT_SCIM_RD_12VParkedVolt_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI01
typedef uint16 Debug_PVT_SCIM_RD_ADI01;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI01_1
typedef uint16 Debug_PVT_SCIM_RD_ADI01_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI02
typedef uint16 Debug_PVT_SCIM_RD_ADI02;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI02_1
typedef uint16 Debug_PVT_SCIM_RD_ADI02_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI03
typedef uint16 Debug_PVT_SCIM_RD_ADI03;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI03_1
typedef uint16 Debug_PVT_SCIM_RD_ADI03_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI04
typedef uint16 Debug_PVT_SCIM_RD_ADI04;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI04_1
typedef uint16 Debug_PVT_SCIM_RD_ADI04_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI05
typedef uint16 Debug_PVT_SCIM_RD_ADI05;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI05_1
typedef uint16 Debug_PVT_SCIM_RD_ADI05_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI06
typedef uint16 Debug_PVT_SCIM_RD_ADI06;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI06_1
typedef uint16 Debug_PVT_SCIM_RD_ADI06_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI07
typedef uint16 Debug_PVT_SCIM_RD_ADI07;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI07_1
typedef uint16 Debug_PVT_SCIM_RD_ADI07_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI08
typedef uint16 Debug_PVT_SCIM_RD_ADI08;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI08_1
typedef uint16 Debug_PVT_SCIM_RD_ADI08_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI09
typedef uint16 Debug_PVT_SCIM_RD_ADI09;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI09_1
typedef uint16 Debug_PVT_SCIM_RD_ADI09_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI10
typedef uint16 Debug_PVT_SCIM_RD_ADI10;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI10_1
typedef uint16 Debug_PVT_SCIM_RD_ADI10_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI11
typedef uint16 Debug_PVT_SCIM_RD_ADI11;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI11_1
typedef uint16 Debug_PVT_SCIM_RD_ADI11_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI12
typedef uint16 Debug_PVT_SCIM_RD_ADI12;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI12_1
typedef uint16 Debug_PVT_SCIM_RD_ADI12_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI13
typedef uint16 Debug_PVT_SCIM_RD_ADI13;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI13_1
typedef uint16 Debug_PVT_SCIM_RD_ADI13_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI14
typedef uint16 Debug_PVT_SCIM_RD_ADI14;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI14_1
typedef uint16 Debug_PVT_SCIM_RD_ADI14_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI15
typedef uint16 Debug_PVT_SCIM_RD_ADI15;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI15_1
typedef uint16 Debug_PVT_SCIM_RD_ADI15_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI16
typedef uint16 Debug_PVT_SCIM_RD_ADI16;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_ADI16_1
typedef uint16 Debug_PVT_SCIM_RD_ADI16_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS1_Volt
typedef uint16 Debug_PVT_SCIM_RD_BHS1_Volt;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS1_Volt_1
typedef uint16 Debug_PVT_SCIM_RD_BHS1_Volt_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS2_Volt
typedef uint16 Debug_PVT_SCIM_RD_BHS2_Volt;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS2_Volt_1
typedef uint16 Debug_PVT_SCIM_RD_BHS2_Volt_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS3_Volt
typedef uint16 Debug_PVT_SCIM_RD_BHS3_Volt;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS3_Volt_1
typedef uint16 Debug_PVT_SCIM_RD_BHS3_Volt_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS4_Volt
typedef uint16 Debug_PVT_SCIM_RD_BHS4_Volt;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS4_Volt_1
typedef uint16 Debug_PVT_SCIM_RD_BHS4_Volt_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_DAI1
typedef uint8 Debug_PVT_SCIM_RD_DAI1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_DAI1_1
typedef uint8 Debug_PVT_SCIM_RD_DAI1_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_DAI2
typedef uint8 Debug_PVT_SCIM_RD_DAI2;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_DAI2_1
typedef uint8 Debug_PVT_SCIM_RD_DAI2_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_VBAT
typedef uint16 Debug_PVT_SCIM_RD_VBAT;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS1_Duty
typedef uint8 Debug_PVT_SCIM_RD_WHS1_Duty;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS1_Duty_1
typedef uint8 Debug_PVT_SCIM_RD_WHS1_Duty_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS1_Freq
typedef uint16 Debug_PVT_SCIM_RD_WHS1_Freq;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS1_Freq_1
typedef uint16 Debug_PVT_SCIM_RD_WHS1_Freq_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS1_Volt
typedef uint16 Debug_PVT_SCIM_RD_WHS1_Volt;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS1_Volt_1
typedef uint16 Debug_PVT_SCIM_RD_WHS1_Volt_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS2_Duty
typedef uint8 Debug_PVT_SCIM_RD_WHS2_Duty;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS2_Duty_1
typedef uint8 Debug_PVT_SCIM_RD_WHS2_Duty_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS2_Freq
typedef uint16 Debug_PVT_SCIM_RD_WHS2_Freq;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS2_Freq_1
typedef uint16 Debug_PVT_SCIM_RD_WHS2_Freq_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS2_Volt
typedef uint16 Debug_PVT_SCIM_RD_WHS2_Volt;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS2_Volt_1
typedef uint16 Debug_PVT_SCIM_RD_WHS2_Volt_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS1_Duty
typedef uint8 Debug_PVT_SCIM_RD_WLS1_Duty;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS1_Duty_1
typedef uint8 Debug_PVT_SCIM_RD_WLS1_Duty_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS1_Freq
typedef uint16 Debug_PVT_SCIM_RD_WLS1_Freq;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS1_Freq_1
typedef uint16 Debug_PVT_SCIM_RD_WLS1_Freq_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS1_Volt
typedef uint16 Debug_PVT_SCIM_RD_WLS1_Volt;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS1_Volt_1
typedef uint16 Debug_PVT_SCIM_RD_WLS1_Volt_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS2_Duty
typedef uint8 Debug_PVT_SCIM_RD_WLS2_Duty;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS2_Duty_1
typedef uint8 Debug_PVT_SCIM_RD_WLS2_Duty_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS2_Freq
typedef uint16 Debug_PVT_SCIM_RD_WLS2_Freq;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS2_Freq_1
typedef uint16 Debug_PVT_SCIM_RD_WLS2_Freq_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS2_Volt
typedef uint16 Debug_PVT_SCIM_RD_WLS2_Volt;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS2_Volt_1
typedef uint16 Debug_PVT_SCIM_RD_WLS2_Volt_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS3_Duty
typedef uint8 Debug_PVT_SCIM_RD_WLS3_Duty;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS3_Duty_1
typedef uint8 Debug_PVT_SCIM_RD_WLS3_Duty_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS3_Freq
typedef uint16 Debug_PVT_SCIM_RD_WLS3_Freq;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS3_Freq_1
typedef uint16 Debug_PVT_SCIM_RD_WLS3_Freq_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS3_Volt
typedef uint16 Debug_PVT_SCIM_RD_WLS3_Volt;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS3_Volt_1
typedef uint16 Debug_PVT_SCIM_RD_WLS3_Volt_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RF_BAT
typedef uint8 Debug_PVT_SCIM_RF_BAT;

#  define Rte_TypeDef_Debug_PVT_SCIM_RF_BtnPressIndex
typedef uint8 Debug_PVT_SCIM_RF_BtnPressIndex;

#  define Rte_TypeDef_Debug_PVT_SCIM_RF_Button1_ID
typedef uint8 Debug_PVT_SCIM_RF_Button1_ID;

#  define Rte_TypeDef_Debug_PVT_SCIM_RF_Button1_Time
typedef uint8 Debug_PVT_SCIM_RF_Button1_Time;

#  define Rte_TypeDef_Debug_PVT_SCIM_RF_Button2_ID
typedef uint8 Debug_PVT_SCIM_RF_Button2_ID;

#  define Rte_TypeDef_Debug_PVT_SCIM_RF_Button2_Time
typedef uint8 Debug_PVT_SCIM_RF_Button2_Time;

#  define Rte_TypeDef_Debug_PVT_SCIM_RF_KeyfobSerialNb
typedef uint32 Debug_PVT_SCIM_RF_KeyfobSerialNb;

#  define Rte_TypeDef_Debug_PVT_SCIM_RF_KeyfobSerialNb_1
typedef uint32 Debug_PVT_SCIM_RF_KeyfobSerialNb_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RF_RollingCounter
typedef uint32 Debug_PVT_SCIM_RF_RollingCounter;

#  define Rte_TypeDef_Debug_PVT_SCIM_RF_RollingCounter_1
typedef uint32 Debug_PVT_SCIM_RF_RollingCounter_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_TSincePwrOn_Long
typedef uint16 Debug_PVT_SCIM_TSincePwrOn_Long;

#  define Rte_TypeDef_Debug_PVT_SCIM_TSincePwrOn_Short
typedef uint8 Debug_PVT_SCIM_TSincePwrOn_Short;

#  define Rte_TypeDef_Debug_PVT_SCIM_TSinceWkUp_Short
typedef uint8 Debug_PVT_SCIM_TSinceWkUp_Short;

#  define Rte_TypeDef_Debug_PVT_SCIM_Task1_Time
typedef uint8 Debug_PVT_SCIM_Task1_Time;

#  define Rte_TypeDef_Debug_PVT_SCIM_Task2_Time
typedef uint8 Debug_PVT_SCIM_Task2_Time;

#  define Rte_TypeDef_Debug_PVT_SCIM_Task3_Time
typedef uint8 Debug_PVT_SCIM_Task3_Time;

#  define Rte_TypeDef_Debug_PVT_SCIM_Task4_Time
typedef uint8 Debug_PVT_SCIM_Task4_Time;

#  define Rte_TypeDef_Debug_PVT_SCIM_Task5_Time
typedef uint8 Debug_PVT_SCIM_Task5_Time;

#  define Rte_TypeDef_Debug_PVT_SCIM_Task6_Time
typedef uint8 Debug_PVT_SCIM_Task6_Time;

#  define Rte_TypeDef_Debug_PVT_SCIM_Task7_Time
typedef uint8 Debug_PVT_SCIM_Task7_Time;

#  define Rte_TypeDef_DiagInfoCCFW
typedef uint8 DiagInfoCCFW;

#  define Rte_TypeDef_DiagInfoDLFW
typedef uint8 DiagInfoDLFW;

#  define Rte_TypeDef_DiagInfoELCP1
typedef uint8 DiagInfoELCP1;

#  define Rte_TypeDef_DiagInfoELCP2
typedef uint8 DiagInfoELCP2;

#  define Rte_TypeDef_DiagInfoILCP1
typedef uint8 DiagInfoILCP1;

#  define Rte_TypeDef_DiagInfoILCP2
typedef uint8 DiagInfoILCP2;

#  define Rte_TypeDef_DiagInfoLECM2
typedef uint8 DiagInfoLECM2;

#  define Rte_TypeDef_DiagInfoLECMBasic
typedef uint8 DiagInfoLECMBasic;

#  define Rte_TypeDef_DiagInfoRCECS
typedef uint8 DiagInfoRCECS;

#  define Rte_TypeDef_DiagInfoTCP
typedef uint8 DiagInfoTCP;

#  define Rte_TypeDef_FSP1DiagInfoL1
typedef uint8 FSP1DiagInfoL1;

#  define Rte_TypeDef_FSP1DiagInfoL2
typedef uint8 FSP1DiagInfoL2;

#  define Rte_TypeDef_FSP1DiagInfoL3
typedef uint8 FSP1DiagInfoL3;

#  define Rte_TypeDef_FSP1DiagInfoL4
typedef uint8 FSP1DiagInfoL4;

#  define Rte_TypeDef_FSP1DiagInfoL5
typedef uint8 FSP1DiagInfoL5;

#  define Rte_TypeDef_FSP1IndicationCmdL1
typedef uint16 FSP1IndicationCmdL1;

#  define Rte_TypeDef_FSP1IndicationCmdL2
typedef uint16 FSP1IndicationCmdL2;

#  define Rte_TypeDef_FSP1IndicationCmdL3
typedef uint16 FSP1IndicationCmdL3;

#  define Rte_TypeDef_FSP1IndicationCmdL4
typedef uint16 FSP1IndicationCmdL4;

#  define Rte_TypeDef_FSP1IndicationCmdL5
typedef uint16 FSP1IndicationCmdL5;

#  define Rte_TypeDef_FSP1ResponseErrorL1
typedef boolean FSP1ResponseErrorL1;

#  define Rte_TypeDef_FSP1ResponseErrorL2
typedef boolean FSP1ResponseErrorL2;

#  define Rte_TypeDef_FSP1ResponseErrorL3
typedef boolean FSP1ResponseErrorL3;

#  define Rte_TypeDef_FSP1ResponseErrorL4
typedef boolean FSP1ResponseErrorL4;

#  define Rte_TypeDef_FSP1ResponseErrorL5
typedef boolean FSP1ResponseErrorL5;

#  define Rte_TypeDef_FSP1SwitchStatusL1
typedef uint8 FSP1SwitchStatusL1;

#  define Rte_TypeDef_FSP1SwitchStatusL2
typedef uint8 FSP1SwitchStatusL2;

#  define Rte_TypeDef_FSP1SwitchStatusL3
typedef uint8 FSP1SwitchStatusL3;

#  define Rte_TypeDef_FSP1SwitchStatusL4
typedef uint8 FSP1SwitchStatusL4;

#  define Rte_TypeDef_FSP1SwitchStatusL5
typedef uint8 FSP1SwitchStatusL5;

#  define Rte_TypeDef_FSP2DiagInfoL1
typedef uint8 FSP2DiagInfoL1;

#  define Rte_TypeDef_FSP2DiagInfoL2
typedef uint8 FSP2DiagInfoL2;

#  define Rte_TypeDef_FSP2DiagInfoL3
typedef uint8 FSP2DiagInfoL3;

#  define Rte_TypeDef_FSP2IndicationCmdL1
typedef uint16 FSP2IndicationCmdL1;

#  define Rte_TypeDef_FSP2IndicationCmdL2
typedef uint16 FSP2IndicationCmdL2;

#  define Rte_TypeDef_FSP2IndicationCmdL3
typedef uint16 FSP2IndicationCmdL3;

#  define Rte_TypeDef_FSP2ResponseErrorL1
typedef boolean FSP2ResponseErrorL1;

#  define Rte_TypeDef_FSP2ResponseErrorL2
typedef boolean FSP2ResponseErrorL2;

#  define Rte_TypeDef_FSP2ResponseErrorL3
typedef boolean FSP2ResponseErrorL3;

#  define Rte_TypeDef_FSP2SwitchStatusL1
typedef uint8 FSP2SwitchStatusL1;

#  define Rte_TypeDef_FSP2SwitchStatusL2
typedef uint8 FSP2SwitchStatusL2;

#  define Rte_TypeDef_FSP2SwitchStatusL3
typedef uint8 FSP2SwitchStatusL3;

#  define Rte_TypeDef_FSP3DiagInfoL2
typedef uint8 FSP3DiagInfoL2;

#  define Rte_TypeDef_FSP3IndicationCmdL2
typedef uint16 FSP3IndicationCmdL2;

#  define Rte_TypeDef_FSP3ResponseErrorL2
typedef boolean FSP3ResponseErrorL2;

#  define Rte_TypeDef_FSP3SwitchStatusL2
typedef uint8 FSP3SwitchStatusL2;

#  define Rte_TypeDef_FSP4DiagInfoL2
typedef uint8 FSP4DiagInfoL2;

#  define Rte_TypeDef_FSP4IndicationCmdL2
typedef uint16 FSP4IndicationCmdL2;

#  define Rte_TypeDef_FSP4ResponseErrorL2
typedef boolean FSP4ResponseErrorL2;

#  define Rte_TypeDef_FSP4SwitchStatusL2
typedef uint8 FSP4SwitchStatusL2;

#  define Rte_TypeDef_LIN_AlmClkCurAlarm_stat_SetHr
typedef uint8 LIN_AlmClkCurAlarm_stat_SetHr;

#  define Rte_TypeDef_LIN_AlmClkCurAlarm_stat_SetMin
typedef uint8 LIN_AlmClkCurAlarm_stat_SetMin;

#  define Rte_TypeDef_LIN_AlmClkSetCurAlm_rqst_SetHr
typedef uint8 LIN_AlmClkSetCurAlm_rqst_SetHr;

#  define Rte_TypeDef_LIN_AlmClkSetCurAlm_rqst_SetMin
typedef uint8 LIN_AlmClkSetCurAlm_rqst_SetMin;

#  define Rte_TypeDef_LIN_AudioVolumeIndicationCmd
typedef uint8 LIN_AudioVolumeIndicationCmd;

#  define Rte_TypeDef_LIN_BunkH2PHTi_rqs_DurnTimeHr
typedef uint8 LIN_BunkH2PHTi_rqs_DurnTimeHr;

#  define Rte_TypeDef_LIN_BunkH2PHTi_rqs_DurnTimeMin
typedef uint8 LIN_BunkH2PHTi_rqs_DurnTimeMin;

#  define Rte_TypeDef_LIN_BunkH2PHTi_rqs_StartTimeHr
typedef uint8 LIN_BunkH2PHTi_rqs_StartTimeHr;

#  define Rte_TypeDef_LIN_BunkH2PHTi_rqs_StartTimeMin
typedef uint8 LIN_BunkH2PHTi_rqs_StartTimeMin;

#  define Rte_TypeDef_LIN_IntLghtLvlIndScaled_cmd
typedef uint8 LIN_IntLghtLvlIndScaled_cmd;

#  define Rte_TypeDef_LIN_IntLghtModeInd_cmd_EventFlag
typedef boolean LIN_IntLghtModeInd_cmd_EventFlag;

#  define Rte_TypeDef_LIN_ShortPulseMaxLength
typedef uint8 LIN_ShortPulseMaxLength;

#  define Rte_TypeDef_ResponseErrorCCFW
typedef boolean ResponseErrorCCFW;

#  define Rte_TypeDef_ResponseErrorDLFW
typedef boolean ResponseErrorDLFW;

#  define Rte_TypeDef_ResponseErrorELCP1
typedef boolean ResponseErrorELCP1;

#  define Rte_TypeDef_ResponseErrorELCP2
typedef boolean ResponseErrorELCP2;

#  define Rte_TypeDef_ResponseErrorILCP1
typedef boolean ResponseErrorILCP1;

#  define Rte_TypeDef_ResponseErrorILCP2
typedef boolean ResponseErrorILCP2;

#  define Rte_TypeDef_ResponseErrorLECM2
typedef boolean ResponseErrorLECM2;

#  define Rte_TypeDef_ResponseErrorLECMBasic
typedef boolean ResponseErrorLECMBasic;

#  define Rte_TypeDef_ResponseErrorRCECS
typedef boolean ResponseErrorRCECS;

#  define Rte_TypeDef_ResponseErrorTCP
typedef boolean ResponseErrorTCP;

#  define Rte_TypeDef_Rte_DT_VGTT_ScimAdiPinsState_0
typedef uint8 Rte_DT_VGTT_ScimAdiPinsState_0;

#  define Rte_TypeDef_SwitchDetectionNeeded1L1
typedef boolean SwitchDetectionNeeded1L1;

#  define Rte_TypeDef_SwitchDetectionNeeded1L2
typedef boolean SwitchDetectionNeeded1L2;

#  define Rte_TypeDef_SwitchDetectionNeeded1L3
typedef boolean SwitchDetectionNeeded1L3;

#  define Rte_TypeDef_SwitchDetectionNeeded1L4
typedef boolean SwitchDetectionNeeded1L4;

#  define Rte_TypeDef_SwitchDetectionNeeded1L5
typedef boolean SwitchDetectionNeeded1L5;

#  define Rte_TypeDef_SwitchDetectionNeeded2L1
typedef boolean SwitchDetectionNeeded2L1;

#  define Rte_TypeDef_SwitchDetectionNeeded2L2
typedef boolean SwitchDetectionNeeded2L2;

#  define Rte_TypeDef_SwitchDetectionNeeded2L3
typedef boolean SwitchDetectionNeeded2L3;

#  define Rte_TypeDef_SwitchDetectionNeeded3L2
typedef boolean SwitchDetectionNeeded3L2;

#  define Rte_TypeDef_SwitchDetectionNeeded4L2
typedef boolean SwitchDetectionNeeded4L2;

#  define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

#  define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

#  define Rte_TypeDef_ABSInhibitRqstDenied
typedef uint8 ABSInhibitRqstDenied;

#  define Rte_TypeDef_ABS_Indication
typedef uint8 ABS_Indication;

#  define Rte_TypeDef_ATC_Indication
typedef uint8 ATC_Indication;

#  define Rte_TypeDef_Debug_PVT_Fob_1BTN_ID
typedef uint8 Debug_PVT_Fob_1BTN_ID;

#  define Rte_TypeDef_Debug_PVT_Fob_2BTN_ID
typedef uint8 Debug_PVT_Fob_2BTN_ID;

#  define Rte_TypeDef_Debug_PVT_Fob_Found
typedef uint8 Debug_PVT_Fob_Found;

#  define Rte_TypeDef_Debug_PVT_Fob_ID
typedef uint8 Debug_PVT_Fob_ID;

#  define Rte_TypeDef_Debug_PVT_Fob_ID_1
typedef uint8 Debug_PVT_Fob_ID_1;

#  define Rte_TypeDef_Debug_PVT_Fob_Select
typedef uint8 Debug_PVT_Fob_Select;

#  define Rte_TypeDef_Debug_PVT_Fob_Select_1
typedef uint8 Debug_PVT_Fob_Select_1;

#  define Rte_TypeDef_Debug_PVT_PEPS_AntCtrl_stat
typedef uint8 Debug_PVT_PEPS_AntCtrl_stat;

#  define Rte_TypeDef_Debug_PVT_PEPS_Ant_Ctrl
typedef uint8 Debug_PVT_PEPS_Ant_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_Fob_location
typedef uint8 Debug_PVT_PEPS_Fob_location;

#  define Rte_TypeDef_Debug_PVT_PEPS_Logic_Ctrl
typedef uint8 Debug_PVT_PEPS_Logic_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_TestPeriod_Ctrl
typedef uint8 Debug_PVT_PEPS_TestPeriod_Ctrl;

#  define Rte_TypeDef_Debug_PVT_PEPS_TestPeriod_stat
typedef uint8 Debug_PVT_PEPS_TestPeriod_stat;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_12VDCDCFault_1
typedef uint8 Debug_PVT_SCIM_RD_12VDCDCFault_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_12VLivingFault
typedef uint8 Debug_PVT_SCIM_RD_12VLivingFault;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_12VLivingFault_1
typedef uint8 Debug_PVT_SCIM_RD_12VLivingFault_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_12VParkedFault
typedef uint8 Debug_PVT_SCIM_RD_12VParkedFault;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_12VParkedFault_1
typedef uint8 Debug_PVT_SCIM_RD_12VParkedFault_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS1_Fault
typedef uint8 Debug_PVT_SCIM_RD_BHS1_Fault;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS1_Fault_1
typedef uint8 Debug_PVT_SCIM_RD_BHS1_Fault_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS2_Fault
typedef uint8 Debug_PVT_SCIM_RD_BHS2_Fault;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS2_Fault_1
typedef uint8 Debug_PVT_SCIM_RD_BHS2_Fault_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS3_Fault
typedef uint8 Debug_PVT_SCIM_RD_BHS3_Fault;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS3_Fault_1
typedef uint8 Debug_PVT_SCIM_RD_BHS3_Fault_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS4_Fault
typedef uint8 Debug_PVT_SCIM_RD_BHS4_Fault;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_BHS4_Fault_1
typedef uint8 Debug_PVT_SCIM_RD_BHS4_Fault_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_VBAT_Fault
typedef uint8 Debug_PVT_SCIM_RD_VBAT_Fault;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS1_Fault
typedef uint8 Debug_PVT_SCIM_RD_WHS1_Fault;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS1_Fault_1
typedef uint8 Debug_PVT_SCIM_RD_WHS1_Fault_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS2_Fault
typedef uint8 Debug_PVT_SCIM_RD_WHS2_Fault;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WHS2_Fault_1
typedef uint8 Debug_PVT_SCIM_RD_WHS2_Fault_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS1_Fault
typedef uint8 Debug_PVT_SCIM_RD_WLS1_Fault;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS1_Fault_1
typedef uint8 Debug_PVT_SCIM_RD_WLS1_Fault_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS2_Fault
typedef uint8 Debug_PVT_SCIM_RD_WLS2_Fault;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS2_Fault_1
typedef uint8 Debug_PVT_SCIM_RD_WLS2_Fault_1;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS3_Fault
typedef uint8 Debug_PVT_SCIM_RD_WLS3_Fault;

#  define Rte_TypeDef_Debug_PVT_SCIM_RD_WLS3_Fault_1
typedef uint8 Debug_PVT_SCIM_RD_WLS3_Fault_1;

#  define Rte_TypeDef_DoorLock_stat
typedef uint8 DoorLock_stat;

#  define Rte_TypeDef_ESC_Indication
typedef uint8 ESC_Indication;

#  define Rte_TypeDef_LIN_ACCOrCCIndication
typedef uint8 LIN_ACCOrCCIndication;

#  define Rte_TypeDef_LIN_ASLIndication
typedef uint8 LIN_ASLIndication;

#  define Rte_TypeDef_LIN_AdjustButtonStatus
typedef uint8 LIN_AdjustButtonStatus;

#  define Rte_TypeDef_LIN_Adjust_DeviceIndication
typedef uint8 LIN_Adjust_DeviceIndication;

#  define Rte_TypeDef_LIN_AlmClkCurAlarm_stat_ID
typedef uint8 LIN_AlmClkCurAlarm_stat_ID;

#  define Rte_TypeDef_LIN_AlmClkCurAlarm_stat_Stat
typedef uint8 LIN_AlmClkCurAlarm_stat_Stat;

#  define Rte_TypeDef_LIN_AlmClkCurAlarm_stat_Type
typedef uint8 LIN_AlmClkCurAlarm_stat_Type;

#  define Rte_TypeDef_LIN_AlmClkSetCurAlm_rqst_ID
typedef uint8 LIN_AlmClkSetCurAlm_rqst_ID;

#  define Rte_TypeDef_LIN_AlmClkSetCurAlm_rqst_Stat
typedef uint8 LIN_AlmClkSetCurAlm_rqst_Stat;

#  define Rte_TypeDef_LIN_AlmClkSetCurAlm_rqst_Type
typedef uint8 LIN_AlmClkSetCurAlm_rqst_Type;

#  define Rte_TypeDef_LIN_AudioSystemStatus
typedef uint8 LIN_AudioSystemStatus;

#  define Rte_TypeDef_LIN_BTStatus
typedef uint8 LIN_BTStatus;

#  define Rte_TypeDef_LIN_BackButtonStatus
typedef uint8 LIN_BackButtonStatus;

#  define Rte_TypeDef_LIN_BackLightDimming_Status
typedef uint8 LIN_BackLightDimming_Status;

#  define Rte_TypeDef_LIN_BlackPanelMode_ButtonStat
typedef uint8 LIN_BlackPanelMode_ButtonStat;

#  define Rte_TypeDef_LIN_BunkBAudioOnOff_ButtonStat
typedef uint8 LIN_BunkBAudioOnOff_ButtonStat;

#  define Rte_TypeDef_LIN_BunkBIntLightActvnBtn_stat
typedef uint8 LIN_BunkBIntLightActvnBtn_stat;

#  define Rte_TypeDef_LIN_BunkBParkHeater_ButtonStat
typedef uint8 LIN_BunkBParkHeater_ButtonStat;

#  define Rte_TypeDef_LIN_BunkBTempDec_ButtonStat
typedef uint8 LIN_BunkBTempDec_ButtonStat;

#  define Rte_TypeDef_LIN_BunkBTempInc_ButtonStat
typedef uint8 LIN_BunkBTempInc_ButtonStat;

#  define Rte_TypeDef_LIN_BunkBVolumeDown_ButtonStat
typedef uint8 LIN_BunkBVolumeDown_ButtonStat;

#  define Rte_TypeDef_LIN_BunkBVolumeUp_ButtonStat
typedef uint8 LIN_BunkBVolumeUp_ButtonStat;

#  define Rte_TypeDef_LIN_BunkH2AudioOnOff_ButtonSta
typedef uint8 LIN_BunkH2AudioOnOff_ButtonSta;

#  define Rte_TypeDef_LIN_BunkH2Fade_ButtonStatus
typedef uint8 LIN_BunkH2Fade_ButtonStatus;

#  define Rte_TypeDef_LIN_BunkH2IntLightActvnBtn_sta
typedef uint8 LIN_BunkH2IntLightActvnBtn_sta;

#  define Rte_TypeDef_LIN_BunkH2IntLightDecBtn_stat
typedef uint8 LIN_BunkH2IntLightDecBtn_stat;

#  define Rte_TypeDef_LIN_BunkH2IntLightIncBtn_stat
typedef uint8 LIN_BunkH2IntLightIncBtn_stat;

#  define Rte_TypeDef_LIN_BunkH2LockButtonStatus
typedef uint8 LIN_BunkH2LockButtonStatus;

#  define Rte_TypeDef_LIN_BunkH2OnOFF_ButtonStatus
typedef uint8 LIN_BunkH2OnOFF_ButtonStatus;

#  define Rte_TypeDef_LIN_BunkH2PHTi_rqs_Timer_cmd
typedef uint8 LIN_BunkH2PHTi_rqs_Timer_cmd;

#  define Rte_TypeDef_LIN_BunkH2ParkHeater_ButtonSta
typedef uint8 LIN_BunkH2ParkHeater_ButtonSta;

#  define Rte_TypeDef_LIN_BunkH2Phone_ButtonStatus
typedef uint8 LIN_BunkH2Phone_ButtonStatus;

#  define Rte_TypeDef_LIN_BunkH2PowerWinCloseDSBtn_s
typedef uint8 LIN_BunkH2PowerWinCloseDSBtn_s;

#  define Rte_TypeDef_LIN_BunkH2PowerWinClosePSBtn_s
typedef uint8 LIN_BunkH2PowerWinClosePSBtn_s;

#  define Rte_TypeDef_LIN_BunkH2PowerWinOpenDSBtn_st
typedef uint8 LIN_BunkH2PowerWinOpenDSBtn_st;

#  define Rte_TypeDef_LIN_BunkH2PowerWinOpenPSBtn_st
typedef uint8 LIN_BunkH2PowerWinOpenPSBtn_st;

#  define Rte_TypeDef_LIN_BunkH2RoofhatchCloseBtn_St
typedef uint8 LIN_BunkH2RoofhatchCloseBtn_St;

#  define Rte_TypeDef_LIN_BunkH2RoofhatchOpenBtn_Sta
typedef uint8 LIN_BunkH2RoofhatchOpenBtn_Sta;

#  define Rte_TypeDef_LIN_BunkH2TempDec_ButtonStatus
typedef uint8 LIN_BunkH2TempDec_ButtonStatus;

#  define Rte_TypeDef_LIN_BunkH2TempInc_ButtonStatus
typedef uint8 LIN_BunkH2TempInc_ButtonStatus;

#  define Rte_TypeDef_LIN_BunkH2VolumeDown_ButtonSta
typedef uint8 LIN_BunkH2VolumeDown_ButtonSta;

#  define Rte_TypeDef_LIN_BunkH2VolumeUp_ButtonStatu
typedef uint8 LIN_BunkH2VolumeUp_ButtonStatu;

#  define Rte_TypeDef_LIN_DRL_ButtonStatus
typedef uint8 LIN_DRL_ButtonStatus;

#  define Rte_TypeDef_LIN_DaytimeRunningLight_Indica
typedef uint8 LIN_DaytimeRunningLight_Indica;

#  define Rte_TypeDef_LIN_DifflockDeactivationBtn_st
typedef uint8 LIN_DifflockDeactivationBtn_st;

#  define Rte_TypeDef_LIN_DifflockMode_Wheelstatus
typedef uint8 LIN_DifflockMode_Wheelstatus;

#  define Rte_TypeDef_LIN_DifflockOnOff_Indication
typedef uint8 LIN_DifflockOnOff_Indication;

#  define Rte_TypeDef_LIN_DoorAutoFuncBtn_stat
typedef uint8 LIN_DoorAutoFuncBtn_stat;

#  define Rte_TypeDef_LIN_DoorAutoFuncInd_cmd
typedef uint8 LIN_DoorAutoFuncInd_cmd;

#  define Rte_TypeDef_LIN_Down_DeviceIndication
typedef uint8 LIN_Down_DeviceIndication;

#  define Rte_TypeDef_LIN_DrivingLightPlus_Indicatio
typedef uint8 LIN_DrivingLightPlus_Indicatio;

#  define Rte_TypeDef_LIN_DrivingLight_Indication
typedef uint8 LIN_DrivingLight_Indication;

#  define Rte_TypeDef_LIN_EscButtonMuddySiteDeviceIn
typedef uint8 LIN_EscButtonMuddySiteDeviceIn;

#  define Rte_TypeDef_LIN_EscButtonMuddySiteStatus
typedef uint8 LIN_EscButtonMuddySiteStatus;

#  define Rte_TypeDef_LIN_FCWPushButton
typedef uint8 LIN_FCWPushButton;

#  define Rte_TypeDef_LIN_FCW_DeviceIndication
typedef uint8 LIN_FCW_DeviceIndication;

#  define Rte_TypeDef_LIN_FogLightFront_ButtonStat_1
typedef uint8 LIN_FogLightFront_ButtonStat_1;

#  define Rte_TypeDef_LIN_FogLightFront_ButtonStat_2
typedef uint8 LIN_FogLightFront_ButtonStat_2;

#  define Rte_TypeDef_LIN_FogLightRear_ButtonStat_1
typedef uint8 LIN_FogLightRear_ButtonStat_1;

#  define Rte_TypeDef_LIN_FogLightRear_ButtonStat_2
typedef uint8 LIN_FogLightRear_ButtonStat_2;

#  define Rte_TypeDef_LIN_FrontFog_Indication
typedef uint8 LIN_FrontFog_Indication;

#  define Rte_TypeDef_LIN_HeadLampUpDown_SwitchStatu
typedef uint8 LIN_HeadLampUpDown_SwitchStatu;

#  define Rte_TypeDef_LIN_IntLghtCenterBtnFreeWhl_s
typedef uint8 LIN_IntLghtCenterBtnFreeWhl_s;

#  define Rte_TypeDef_LIN_IntLghtDimmingLvlDecBtn_s
typedef uint8 LIN_IntLghtDimmingLvlDecBtn_s;

#  define Rte_TypeDef_LIN_IntLghtDimmingLvlFreeWhl_s
typedef uint8 LIN_IntLghtDimmingLvlFreeWhl_s;

#  define Rte_TypeDef_LIN_IntLghtDimmingLvlIncBtn_s
typedef uint8 LIN_IntLghtDimmingLvlIncBtn_s;

#  define Rte_TypeDef_LIN_IntLghtMaxModeBtnPnl2_s
typedef uint8 LIN_IntLghtMaxModeBtnPnl2_s;

#  define Rte_TypeDef_LIN_IntLghtModeInd_cmd_IL_Mode
typedef uint8 LIN_IntLghtModeInd_cmd_IL_Mode;

#  define Rte_TypeDef_LIN_IntLghtModeSelrFreeWheel_s
typedef uint8 LIN_IntLghtModeSelrFreeWheel_s;

#  define Rte_TypeDef_LIN_IntLghtNightModeBt2_s
typedef uint8 LIN_IntLghtNightModeBt2_s;

#  define Rte_TypeDef_LIN_IntLghtOffModeInd_cmd
typedef uint8 LIN_IntLghtOffModeInd_cmd;

#  define Rte_TypeDef_LIN_IntLghtRestModeBtnPnl2_s
typedef uint8 LIN_IntLghtRestModeBtnPnl2_s;

#  define Rte_TypeDef_LIN_IntLightMaxModeInd_cmd
typedef uint8 LIN_IntLightMaxModeInd_cmd;

#  define Rte_TypeDef_LIN_IntLightNightModeInd_cmd
typedef uint8 LIN_IntLightNightModeInd_cmd;

#  define Rte_TypeDef_LIN_IntLightRestingModeInd_cmd
typedef uint8 LIN_IntLightRestingModeInd_cmd;

#  define Rte_TypeDef_LIN_LKSPushButton
typedef uint8 LIN_LKSPushButton;

#  define Rte_TypeDef_LIN_LKS_DeviceIndication
typedef uint8 LIN_LKS_DeviceIndication;

#  define Rte_TypeDef_LIN_LevelingThumbwheel_stat
typedef uint8 LIN_LevelingThumbwheel_stat;

#  define Rte_TypeDef_LIN_LightMode_Status_1
typedef uint8 LIN_LightMode_Status_1;

#  define Rte_TypeDef_LIN_LightMode_Status_2
typedef uint8 LIN_LightMode_Status_2;

#  define Rte_TypeDef_LIN_M1_DeviceIndication
typedef uint8 LIN_M1_DeviceIndication;

#  define Rte_TypeDef_LIN_M2_DeviceIndication
typedef uint8 LIN_M2_DeviceIndication;

#  define Rte_TypeDef_LIN_M3_DeviceIndication
typedef uint8 LIN_M3_DeviceIndication;

#  define Rte_TypeDef_LIN_MemButtonStatus
typedef uint8 LIN_MemButtonStatus;

#  define Rte_TypeDef_LIN_Offroad_ButtonStatus
typedef uint8 LIN_Offroad_ButtonStatus;

#  define Rte_TypeDef_LIN_Offroad_Indication
typedef uint8 LIN_Offroad_Indication;

#  define Rte_TypeDef_LIN_ParkingLight_Indication
typedef uint8 LIN_ParkingLight_Indication;

#  define Rte_TypeDef_LIN_PhoneButtonIndication_cmd
typedef uint8 LIN_PhoneButtonIndication_cmd;

#  define Rte_TypeDef_LIN_RearFog_Indication
typedef uint8 LIN_RearFog_Indication;

#  define Rte_TypeDef_LIN_RearWorkProjector_BtnStat
typedef uint8 LIN_RearWorkProjector_BtnStat;

#  define Rte_TypeDef_LIN_RearWorkProjector_Indicati
typedef uint8 LIN_RearWorkProjector_Indicati;

#  define Rte_TypeDef_LIN_SelectButtonStatus
typedef uint8 LIN_SelectButtonStatus;

#  define Rte_TypeDef_LIN_SpeedControlModeButtonStat
typedef uint8 LIN_SpeedControlModeButtonStat;

#  define Rte_TypeDef_LIN_SpeedControlModeWheelStat
typedef uint8 LIN_SpeedControlModeWheelStat;

#  define Rte_TypeDef_LIN_StopButtonStatus
typedef uint8 LIN_StopButtonStatus;

#  define Rte_TypeDef_LIN_TCP_ABS_ButtonStatus
typedef uint8 LIN_TCP_ABS_ButtonStatus;

#  define Rte_TypeDef_LIN_TCP_ATC_ButtonStatus
typedef uint8 LIN_TCP_ATC_ButtonStatus;

#  define Rte_TypeDef_LIN_TCP_ESC_ButtonStatus
typedef uint8 LIN_TCP_ESC_ButtonStatus;

#  define Rte_TypeDef_LIN_TCP_KnobPostionStatus
typedef uint8 LIN_TCP_KnobPostionStatus;

#  define Rte_TypeDef_LIN_TCP_TCS_ButtonStatus
typedef uint8 LIN_TCP_TCS_ButtonStatus;

#  define Rte_TypeDef_LIN_Up_DeviceIndication
typedef uint8 LIN_Up_DeviceIndication;

#  define Rte_TypeDef_LIN_WRDownButtonStatus
typedef uint8 LIN_WRDownButtonStatus;

#  define Rte_TypeDef_LIN_WRUpButtonStatus
typedef uint8 LIN_WRUpButtonStatus;

#  define Rte_TypeDef_TCS_Indication
typedef uint8 TCS_Indication;

#  define Rte_TypeDef_ArrayByteSize32
typedef uint8 ArrayByteSize32[32];

#  define Rte_TypeDef_DataArrayType_uint8_2
typedef uint8 DataArrayType_uint8_2[2];

#  define Rte_TypeDef_DataArray_Type_2
typedef uint8 DataArray_Type_2[2];

#  define Rte_TypeDef_Dcm_Data2ByteType
typedef uint8 Dcm_Data2ByteType[2];

#  define Rte_TypeDef_Dem_MaxDataValueType
typedef uint8 Dem_MaxDataValueType[2];

#  define Rte_TypeDef_Issm_ActiveUserArrayType
typedef uint32 Issm_ActiveUserArrayType[1];

#  define Rte_TypeDef_SwitchDetectionResp1L1
typedef uint8 SwitchDetectionResp1L1[8];

#  define Rte_TypeDef_SwitchDetectionResp1L2
typedef uint8 SwitchDetectionResp1L2[8];

#  define Rte_TypeDef_SwitchDetectionResp1L3
typedef uint8 SwitchDetectionResp1L3[8];

#  define Rte_TypeDef_SwitchDetectionResp1L4
typedef uint8 SwitchDetectionResp1L4[8];

#  define Rte_TypeDef_SwitchDetectionResp1L5
typedef uint8 SwitchDetectionResp1L5[8];

#  define Rte_TypeDef_SwitchDetectionResp2L1
typedef uint8 SwitchDetectionResp2L1[8];

#  define Rte_TypeDef_SwitchDetectionResp2L2
typedef uint8 SwitchDetectionResp2L2[8];

#  define Rte_TypeDef_SwitchDetectionResp2L3
typedef uint8 SwitchDetectionResp2L3[8];

#  define Rte_TypeDef_SwitchDetectionResp3L2
typedef uint8 SwitchDetectionResp3L2[8];

#  define Rte_TypeDef_SwitchDetectionResp4L2
typedef uint8 SwitchDetectionResp4L2[8];

#  define Rte_TypeDef_VDem42_MaxDataValueType
typedef uint8 VDem42_MaxDataValueType[2];

#  define Rte_TypeDef_VGTT_ScimAdiPinsState
typedef Rte_DT_VGTT_ScimAdiPinsState_0 VGTT_ScimAdiPinsState[15];

#  define Rte_TypeDef_DtMemoryProtectionDataElementType
typedef struct
{
  uint8 Value;
  boolean InvalidAccess;
} DtMemoryProtectionDataElementType;

#  define Rte_TypeDef_LIN_AlmClkCurAlarm_stat_sg
typedef struct
{
  LIN_AlmClkCurAlarm_stat_Stat LIN_AlmClkCurAlarm_stat_Stat;
  LIN_AlmClkCurAlarm_stat_SetHr LIN_AlmClkCurAlarm_stat_SetHr;
  LIN_AlmClkCurAlarm_stat_Type LIN_AlmClkCurAlarm_stat_Type;
  LIN_AlmClkCurAlarm_stat_SetMin LIN_AlmClkCurAlarm_stat_SetMin;
  LIN_AlmClkCurAlarm_stat_ID LIN_AlmClkCurAlarm_stat_ID;
} LIN_AlmClkCurAlarm_stat_sg;

#  define Rte_TypeDef_LIN_AlmClkSetCurAlm_rqst_sg
typedef struct
{
  LIN_AlmClkSetCurAlm_rqst_SetMin LIN_AlmClkSetCurAlm_rqst_SetMin;
  LIN_AlmClkSetCurAlm_rqst_Type LIN_AlmClkSetCurAlm_rqst_Type;
  LIN_AlmClkSetCurAlm_rqst_ID LIN_AlmClkSetCurAlm_rqst_ID;
  LIN_AlmClkSetCurAlm_rqst_SetHr LIN_AlmClkSetCurAlm_rqst_SetHr;
  LIN_AlmClkSetCurAlm_rqst_Stat LIN_AlmClkSetCurAlm_rqst_Stat;
} LIN_AlmClkSetCurAlm_rqst_sg;

#  define Rte_TypeDef_LIN_BunkH2PHTi_rqs_sg
typedef struct
{
  LIN_BunkH2PHTi_rqs_StartTimeHr LIN_BunkH2PHTi_rqs_StartTimeHr;
  LIN_BunkH2PHTi_rqs_Timer_cmd LIN_BunkH2PHTi_rqs_Timer_cmd;
  LIN_BunkH2PHTi_rqs_DurnTimeHr LIN_BunkH2PHTi_rqs_DurnTimeHr;
  LIN_BunkH2PHTi_rqs_StartTimeMin LIN_BunkH2PHTi_rqs_StartTimeMin;
  LIN_BunkH2PHTi_rqs_DurnTimeMin LIN_BunkH2PHTi_rqs_DurnTimeMin;
} LIN_BunkH2PHTi_rqs_sg;

#  define Rte_TypeDef_LIN_IntLghtModeInd_cmd_sg
typedef struct
{
  LIN_IntLghtModeInd_cmd_EventFlag LIN_IntLghtModeInd_cmd_EventFlag;
  LIN_IntLghtModeInd_cmd_IL_Mode LIN_IntLghtModeInd_cmd_IL_Mode;
} LIN_IntLghtModeInd_cmd_sg;

#  define Rte_TypeDef_BswM_BswMRteMDG_LIN1Schedule
typedef uint8 BswM_BswMRteMDG_LIN1Schedule;

#  define Rte_TypeDef_BswM_BswMRteMDG_LIN2Schedule
typedef uint8 BswM_BswMRteMDG_LIN2Schedule;

#  define Rte_TypeDef_BswM_BswMRteMDG_LIN3Schedule
typedef uint8 BswM_BswMRteMDG_LIN3Schedule;

#  define Rte_TypeDef_BswM_BswMRteMDG_LIN4Schedule
typedef uint8 BswM_BswMRteMDG_LIN4Schedule;

#  define Rte_TypeDef_BswM_BswMRteMDG_LIN5Schedule
typedef uint8 BswM_BswMRteMDG_LIN5Schedule;

#  define Rte_TypeDef_BswM_ESH_Mode
typedef uint8 BswM_ESH_Mode;

#  define Rte_TypeDef_BswM_ESH_RunRequest
typedef uint8 BswM_ESH_RunRequest;

#  define Rte_TypeDef_ComM_InhibitionStatusType
typedef uint8 ComM_InhibitionStatusType;

#  define Rte_TypeDef_ComM_ModeType
typedef uint8 ComM_ModeType;

#  define Rte_TypeDef_ComM_UserHandleType
typedef uint8 ComM_UserHandleType;

#  define Rte_TypeDef_Dcm_CommunicationModeType
typedef uint8 Dcm_CommunicationModeType;

#  define Rte_TypeDef_Dcm_ConfirmationStatusType
typedef uint8 Dcm_ConfirmationStatusType;

#  define Rte_TypeDef_Dcm_DiagnosticSessionControlType
typedef uint8 Dcm_DiagnosticSessionControlType;

#  define Rte_TypeDef_Dcm_EcuResetType
typedef uint8 Dcm_EcuResetType;

#  define Rte_TypeDef_Dcm_NegativeResponseCodeType
typedef uint8 Dcm_NegativeResponseCodeType;

#  define Rte_TypeDef_Dcm_OpStatusType
typedef uint8 Dcm_OpStatusType;

#  define Rte_TypeDef_Dcm_ProtocolType
typedef uint8 Dcm_ProtocolType;

#  define Rte_TypeDef_Dcm_RequestKindType
typedef uint8 Dcm_RequestKindType;

#  define Rte_TypeDef_Dcm_SesCtrlType
typedef uint8 Dcm_SesCtrlType;

#  define Rte_TypeDef_Dem_DTCFormatType
typedef uint8 Dem_DTCFormatType;

#  define Rte_TypeDef_Dem_DTCGroupType
typedef uint32 Dem_DTCGroupType;

#  define Rte_TypeDef_Dem_DTCKindType
typedef uint8 Dem_DTCKindType;

#  define Rte_TypeDef_Dem_DTCOriginType
typedef uint16 Dem_DTCOriginType;

#  define Rte_TypeDef_Dem_DTCSeverityType
typedef uint8 Dem_DTCSeverityType;

#  define Rte_TypeDef_Dem_DTCStatusMaskType
typedef uint8 Dem_DTCStatusMaskType;

#  define Rte_TypeDef_Dem_DTRControlType
typedef uint8 Dem_DTRControlType;

#  define Rte_TypeDef_Dem_DebounceResetStatusType
typedef uint8 Dem_DebounceResetStatusType;

#  define Rte_TypeDef_Dem_DebouncingStateType
typedef uint8 Dem_DebouncingStateType;

#  define Rte_TypeDef_Dem_EventIdType
typedef uint16 Dem_EventIdType;

#  define Rte_TypeDef_Dem_EventStatusType
typedef uint8 Dem_EventStatusType;

#  define Rte_TypeDef_Dem_IndicatorStatusType
typedef uint8 Dem_IndicatorStatusType;

#  define Rte_TypeDef_Dem_InitMonitorReasonType
typedef uint8 Dem_InitMonitorReasonType;

#  define Rte_TypeDef_Dem_IumprDenomCondIdType
typedef uint8 Dem_IumprDenomCondIdType;

#  define Rte_TypeDef_Dem_IumprDenomCondStatusType
typedef uint8 Dem_IumprDenomCondStatusType;

#  define Rte_TypeDef_Dem_IumprReadinessGroupType
typedef uint8 Dem_IumprReadinessGroupType;

#  define Rte_TypeDef_Dem_MonitorStatusType
typedef uint8 Dem_MonitorStatusType;

#  define Rte_TypeDef_Dem_OperationCycleIdType
typedef uint8 Dem_OperationCycleIdType;

#  define Rte_TypeDef_Dem_OperationCycleStateType
typedef uint8 Dem_OperationCycleStateType;

#  define Rte_TypeDef_Dem_RatioIdType
typedef uint16 Dem_RatioIdType;

#  define Rte_TypeDef_Dem_UdsStatusByteType
typedef uint8 Dem_UdsStatusByteType;

#  define Rte_TypeDef_EcuM_BootTargetType
typedef uint8 EcuM_BootTargetType;

#  define Rte_TypeDef_EcuM_ModeType
typedef uint8 EcuM_ModeType;

#  define Rte_TypeDef_EcuM_ShutdownCauseType
typedef uint8 EcuM_ShutdownCauseType;

#  define Rte_TypeDef_EcuM_SleepModeType
typedef uint8 EcuM_SleepModeType;

#  define Rte_TypeDef_EcuM_StateType
typedef uint8 EcuM_StateType;

#  define Rte_TypeDef_EcuM_TimeType
typedef uint32 EcuM_TimeType;

#  define Rte_TypeDef_EcuM_UserType
typedef uint8 EcuM_UserType;

#  define Rte_TypeDef_EnumActiveComponentType
typedef uint8 EnumActiveComponentType;

#  define Rte_TypeDef_EnumNM_ApplStateType
typedef uint8 EnumNM_ApplStateType;

#  define Rte_TypeDef_IOHWAB_SINT8
typedef sint8 IOHWAB_SINT8;

#  define Rte_TypeDef_Issm_IssHandleType
typedef uint8 Issm_IssHandleType;

#  define Rte_TypeDef_Issm_IssStateType
typedef uint8 Issm_IssStateType;

#  define Rte_TypeDef_Issm_UserHandleType
typedef uint8 Issm_UserHandleType;

#  define Rte_TypeDef_J1939Rm_AckCode
typedef uint8 J1939Rm_AckCode;

#  define Rte_TypeDef_J1939Rm_ExtIdType
typedef uint8 J1939Rm_ExtIdType;

#  define Rte_TypeDef_NvM_BlockIdType
typedef uint16 NvM_BlockIdType;

#  define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

#  define Rte_TypeDef_NvM_ServiceIdType
typedef uint8 NvM_ServiceIdType;

#  define Rte_TypeDef_TimeInMicrosecondsType
typedef uint32 TimeInMicrosecondsType;

#  define Rte_TypeDef_VDem42_DTCFormatType
typedef uint8 VDem42_DTCFormatType;

#  define Rte_TypeDef_VDem42_DTCOriginType
typedef uint8 VDem42_DTCOriginType;

#  define Rte_TypeDef_VDem42_DebouncingStateType
typedef uint8 VDem42_DebouncingStateType;

#  define Rte_TypeDef_VDem42_EventIdType
typedef uint16 VDem42_EventIdType;

#  define Rte_TypeDef_VDem42_UdsStatusByteType
typedef uint8 VDem42_UdsStatusByteType;

#  define Rte_TypeDef_J1939Rm_ExtIdInfoType
typedef struct
{
  J1939Rm_ExtIdType ExtIdType;
  uint8 ExtId1;
  uint8 ExtId2;
  uint8 ExtId3;
} J1939Rm_ExtIdInfoType;

# endif

#endif /* _RTE_TYPE_H */
