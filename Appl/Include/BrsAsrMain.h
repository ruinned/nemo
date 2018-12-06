
/**********************************************************************************************************************
  COPYRIGHT
-----------------------------------------------------------------------------------------------------------------------
  \par      copyright
  \verbatim
  Copyright (c) 2018 by Vector Informatik GmbH.                                                  All rights reserved.

                This software is copyright protected and proprietary to Vector Informatik GmbH.
                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
                All other rights remain with Vector Informatik GmbH.
  \endverbatim
-----------------------------------------------------------------------------------------------------------------------
  FILE DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
  \file  File:  BrsAsrMain.h
      Project:  Vector Basic Runtime System for MICROSAR4
       Module:  BrsAsrMain

  \brief Description:  Main Header of BrsAsr4 contains
                       - Main function (start of initialization (EcuM)
                       - Default_Init_Task, Main and Background Task which can be used by the operating system
                       - Exception handling

  \attention Please note:
    The demo and example programs only show special aspects of the software. With regard to the fact
    that these programs are meant for demonstration purposes only, Vector Informatik liability shall be
    expressly excluded in cases of ordinary negligence, to the extent admissible by law or statute.
**********************************************************************************************************************/

#ifndef _BRSASRMAIN_H_
#define _BRSASRMAIN_H_

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "BrsCfg.h"

#if !defined (BRSASR_ENABLE_OSSUPPORT) || defined (BRSASR_ENABLE_OSEMULATION)
/* 
 *  Enable support for the BRS Timer interrupt in BrsHw and BrsMainAsr if no OS is used
 */
  #define BRS_ENABLE_TIMER_INTERRUPT
#endif

#include "Os.h"

/* Ecu State Manager has to be available in system (BSW module or BRS Stubb) */
#include "EcuM.h"

/**********************************************************************************************************************
  CONFIGURATION CHECK
**********************************************************************************************************************/
#if defined (BRSASR_ENABLE_OSSUPPORT)
# ifndef OS_MS2TICKS_SystemTimer
  #error "Please configure here the name of your OS SystemTimer" */
  #define OS_MS2TICKS_SystemTimer OS_MS2TICKS_YourTimer
# endif
#endif

/**********************************************************************************************************************
  MODULE VERSION
**********************************************************************************************************************/
/*
 * Description: This is the BrsHw main and bug fix version. The version numbers are BCD coded. 
 *              E.g. a main version of 1.23 is coded with 0x0123, a bug fix version of 9 is coded 0x09.
 */
#define BRSASRMAIN_VERSION        0x0107u
#define BRSASRMAIN_BUGFIX_VERSION 0x00u

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

/*******************************************************************************
 * ModuleCode for BrsMainExceptionHandler 
 ******************************************************************************/
# define BRSERROR_MODULE_BRSHW      0x01
# define BRSERROR_MODULE_BRSMAIN    0x02
# define BRSERROR_MODULE_BRSOSEK    0x03
# define BRSERROR_MODULE_BRSADDON   0x04
# define BRSERROR_MODULE_BRSQNX     0x05
# define BRSERROR_MODULE_BRSCTRL    0x06
# define BRSERROR_MODULE_BRSECUM    0x07

/*******************************************************************************
 * ErrorCodes for BrsMainExceptionHandler 
 * 0x00 to 0x7f are assigned to the BRS
 * 0x80 to 0xff are assigned to the application
 ******************************************************************************/
/* General error which is not assigned to a special error class */
# define kBrsUndefinedError                   0x00

/* No handler is installed in interrupt vector table for given interrupt */
# define kBrsInterruptHandlerNotInstalled     0x01

/* A GenTool setting is different to the excepted value */
# define kBrsWrongGenToolSettings             0x02

/* BrsHwRestoreInterrupt is called more often than BrsHwDisableInterrupt */
# define kBrsIllegalInterruptRestoration      0x03

/* Hardware configuration like clock setting is wrong */
# define kBrsIllegalHardwareConfiguration     0x04

/* Illegal parameter used like wrong channel parameter */
# define kBrsIllegalParameter                 0x05

/* Illegal TCC channel used */
# define kBrsTccChannelOutOfRange             0x06

/* Interrupt from unknown source occurred */
# define kBrsUnknownInterrupt                 0x07

/* CAN1 and CAN2 interrupts cannot be distinguished from each other */
# define kBrsAmbiguousInterruptSource         0x08

/* Execution of library version check in Common_SipVersionCheck failed */
#define kBrsLibraryVersionCheckFailed         0x09

/* OS ErrorHook called */
#define kBrsOsErrorHookCall                   0x0A

/* BRS not properly initialized */
#define kBrsConfigUninit                      0x0B

/**********************************************************************************************************************
  Global variables
**********************************************************************************************************************/
#if defined (BRSHW_ENABLE_TIMER_INTERRUPT)
/**
 * \var gbBrsMainIsrMilliSecondFlag
 *      The BRS internal timing is based on a cyclic called function. The call 
 *      must be performed each 1ms. This is done by an endless loop polling 
 *      this variable for being '1'. The value is set to '1' by a periodic 
 *      interrupt function in the hardware dependent module HW_CTRL. The value 
 *      is cleared to '0', if the 1ms event has been handled. The separation of 
 *      hardware independent and hardware dependent parts is the only reason to 
 *      export this variable here.
 *      Values: 0, wait for next 1ms event; 1, 1ms event occured
 */
 extern volatile uint8 gbBrsMainIsrMilliSecondFlag;
#endif /*BRSHW_ENABLE_TIMER_INTERRUPT*/

/**********************************************************************************************************************
  Global const variables
**********************************************************************************************************************/

/**********************************************************************************************************************
  Global function prototypes
**********************************************************************************************************************/
#if !defined (_MICROSOFT_C_VTT_)
void BrsAsrMainInit(void);
#endif

#if defined (BRS_ENABLE_HLPTEST_SUPPORT) || \
    defined (BRSASR_ENABLE_TFW_SUPPORT)  || \
    defined (BRS_ENABLE_TCM_SUPPORT)     || \
    defined (BRSASR_ENABLE_OS_STUB)      || \
    defined (BRS_ENABLE_SUPPORT_LEDS)
TASK(BrsAsrMainTask);
#endif

#if defined (BRSASR_ENABLE_OSSUPPORT)
TASK(BrsAsrMainBackgroundTask);
#endif /*BRSASR_ENABLE_OSSUPPORT*/

void BrsMainExceptionHandler(uint8 ErrorCode, uint8 ModuleCode, uint16 LineNumber);

#endif /*_BRSASRMAIN_H_*/
