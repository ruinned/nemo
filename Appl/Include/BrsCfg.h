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
 *            Module: Brs
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: ../Include/BrsCfg.h
 *   Generation Time: 2018-05-25 14:50:31
 *           Project: CBD1800194D00 - Version 1.0
 *          Delivery: CBD1800194_D00
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

#ifndef _BRSCFG_H_
#define _BRSCFG_H_

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Std_Types.h"

/* v_def.h maybe necessary, if you are using an old BrsHw implementation. A template for v_def.h is included within this BrsAsr4. */
/*#include "v_def.h"*/

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#define BASIC_RUNTIME_SYSTEM_TYPE_MSR4

#define BRS_GENERATED_HW_CONFIG_VERSION 4U

# if !defined (BRS_OS_USECASE_OSGEN7)
#define BRS_OS_USECASE_OSGEN7
# endif

/*******************************************************************************
 Standard BrsAsr configuration
*******************************************************************************/
/* Support of test generator framework */
/* Tgf support is disabled (#define BRSASR_ENABLE_TGFSUPPORT) */

/* Use Autosar-OS conform Tasks; disable this, if no OS should be used */
#define BRSASR_ENABLE_OSSUPPORT

/* Support of OS emulation */
/* OS Emulation support is disabled (#define BRSASR_ENABLE_OSEMULATION) */

/* Support of TFW Support */
/* TFW support is disabled (#define BRSASR_ENABLE_TFW_SUPPORT) */

/* Use the functionality of a blinking live-LED for the used EvalBoard */
/* LED support is disabled (#define BRS_ENABLE_SUPPORT_LEDS) */

/*******************************************************************************
 Additional BrsAsr support features
*******************************************************************************/
/* Switch to enable support of SafeContext OS */
#define BRSASR_ENABLE_SAFECTXSUPPORT

/* Switch to enable support of MCALs that can not be initialized in non-trusted OS-Application*/
/* MCAL trusted only support is disabled (#define BRSASR_ENABLE_MCAL_TRUSTED_ONLY) */

/* Switch to enable support of MultiCore OS */
/* MultiCore OS support is disabled (#define BRSASR_ENABLE_OS_MULTICORESUPPORT) */

/* Switch to enable support of SafeWatchdog Stack */
/* SafeWatchdog support is disabled (#define BRSASR_ENABLE_SAFEWDGSUPPORT) */

/* Switch to enable support of MultiCore SafeWatchdog Stack */
/* SafeWatchdog support is disabled (#define BRSASR_ENABLE_SAFEWDG_MULTICORESUPPORT) */

/* Switch to enable support of configuring additional pins for external wakeup functionality within BrsHw, if available */
/* External Wakeup support is disabled (#define BRS_ENABLE_EXTERNAL_WAKEUP) */

/* Switch to enable support of Test-Control-Module */
/* Test-Control-Module support is disabled (#define BRS_ENABLE_TCM_SUPPORT) */

/* Switch to enable support of HLP-Testsuite */
/* HLP-Testsuite support is disabled (#define BRS_ENABLE_HLPTEST_SUPPORT) */

/* Switch to enable support of FlashBootLoader */
/* FlashBootLoader support is disabled (#define BRS_ENABLE_FBL_SUPPORT) */

/*******************************************************************************
 Project specific VGEN_ENABLE-switches (derived from actual Cfg5 Configuration)
*******************************************************************************/
/* VGEN_ENABLE switches for Can Driver */
#define VGEN_ENABLE_CAN_DRV
#define VGEN_ENABLE_IF_ASRIFCAN
#define VGEN_ENABLE_CCL_ASR4SMCAN

/* VGEN_ENABLE switches for LIN Driver */
#define VGEN_ENABLE_LIN_DRV
#define VGEN_ENABLE_IF_ASRIFLIN

/* VGEN_ENABLE switches for MCAL Adc Driver */
#define VGEN_ENABLE_DRVADC

/* VGEN_ENABLE switches for MCAL Dio Driver */
#define VGEN_ENABLE_DRVDIO

/* VGEN_ENABLE switches for MCAL Fee Driver */
#define VGEN_ENABLE_IF_ASRIFFEE

/* VGEN_ENABLE switches for MCAL Fls Driver */
#define VGEN_ENABLE_DRVFLS

/* VGEN_ENABLE switches for MCAL Gpt Driver */
#define VGEN_ENABLE_DRVGPT

/* VGEN_ENABLE switches for MCAL Icu Driver */
#define VGEN_ENABLE_DRVICU

/* VGEN_ENABLE switches for MCAL Mcu Driver */
#define VGEN_ENABLE_DRVMCU

/* VGEN_ENABLE switches for MCAL Port Driver */
#define VGEN_ENABLE_DRVPORT

/* VGEN_ENABLE switches for MCAL Pwm Driver */
#define VGEN_ENABLE_DRVPWM

/* VGEN_ENABLE switches for MCAL Spi Driver */
#define VGEN_ENABLE_DRVSPI

/* VGEN_ENABLE switches for MCAL Wdg Driver */
#define VGEN_ENABLE_DRVWD

#endif /*_BRSCFG_H_*/

