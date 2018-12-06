
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
  \file  File:  BrsHw.c
      Project:  Vector Basic Runtime System
       Module:  BrsHw for platform Freescale/ST Mpc57xx
     Template:  This file is reviewed according to zBrs_Template@root[2.02.01]

  \brief Description:  This is the hardware specific code file for Vector Basic Runtime System (BRS).
                       This file supports: see BrsHw_DerivativeList.h

  \attention Please note:
    The demo and example programs only show special aspects of the software. With regard to the fact
    that these programs are meant for demonstration purposes only, Vector Informatik liability shall be
    expressly excluded in cases of ordinary negligence, to the extent admissible by law or statute.
**********************************************************************************************************************/

/**********************************************************************************************************************
  AUTHOR IDENTITY
 ----------------------------------------------------------------------------------------------------------------------
  Name                          Initials      Company
  ----------------------------  ------------  -------------------------------------------------------------------------
  Benjamin Walter               visbwa        Vector Informatik GmbH
  Stefan Schorer                vissns        Vector Informatik GmbH
  Andreas Hahn                  vishan        Vector Informatik GmbH
  Timo Mueller                  vistir        Vector Informatik GmbH
  Nam Trinh                     visntr        Vector Informatik GmbH
  Nguyen Le                     vislnn        Vector Informatik GmbH
  Jens Haerer                   visjhr        Vector Informatik GmbH
  Viet Duc Nguyen               visvnn        Vector Informatik GmbH
  Volker Kaiser                 viskvr        Vector Informatik GmbH
  Yves Plaindoux                vispys        Vector Informatik GmbH
  Michael Tiran                 vismin        Vector Informatik GmbH
  Mohammed Seblani              vissmd        Vector Informatik GmbH
  Roland Reinl                  virrro        Vector Informatik GmbH
  Sascha Mauser                 vismaa        Vector Informatik GmbH
  Cyrille Wamba                 viswca        Vector Informatik GmbH
  Derick Beng Yuh               visydg        Vector Informatik GmbH
  Ivo Georgiev                  visivg        Vector Informatik GmbH
  Michael Tiran                 vismin        Vector Informatik GmbH
  Muhammad Suliman              vismun        Vector Informatik GmbH
-----------------------------------------------------------------------------------------------------------------------
  REVISION HISTORY
 ----------------------------------------------------------------------------------------------------------------------
  Version   Date        Author  Description
  --------  ----------  ------  ---------------------------------------------------------------------------------------
  01.00.00  2015-05-05  vissns  New creation, based on zBrs_Mpc@root[3.09.04],
                                according to template for BrsHw Codestyle 2.0
            2015-07-09  vishan  Added support for Quasar2 and McKinley Cut2
                                Added support for Evalboard VEBN01387
            2015-07-20  visbwa  Review
  01.00.01  2015-08-05  vistir  Added support for MPC5746C
  01.00.02  2015-08-12  vistir  Added support for MPC5746R
  01.00.03  2015-09-15  visntr  Fixed PllInit for MPC5746R (no aux-clock 7), removed include of BrsHw_IsrDef.h
  01.00.04  2015-09-29  visfsn  Added BRSHW_USERMODE_ACCESS_GROUP_B for MPC5746B
  01.00.05  2015-12-09  vislnn  Added SIU_GROUP_H and SIU_GROUP_I (empty, as HW not available yet)
  01.00.06  2015-12-09  visjhr  Added support for PC580020/Quasar2 and VEN01473 (LED + CAN), fixed typo in BrsHw.h,
                                fixed prescaler value for emiosA system timer
  01.00.07  2015-12-14  visjhr  Fixed CAN1,2,3 port config for SIU_GROUP_A, added CAN port config for S32R274
  01.00.08  2015-12-23  visjhr  Finalized S32R support
                        visvnn  Addded support for SPC574K
                        visbwa  Review
  01.00.09  2016-01-14  visvnn  Reworked CAN-pins for SPC574K
  01.00.10  2016-02-23  viskvr  Fixed define-statement for BRSHW_INTERRUPT_TABLE_GROUP_B
  01.00.11  2016-02-29  viskvr  Removed C_ENABLE_CAN_INTERRUPT within BRSHW_INTERRUPT_TABLE_GROUP_B
  01.00.12  2016-03-14  vispys  Fixed wrapper for old DrvCan/DrvLin versions @ SafeContext
  01.00.13  2016-03-22  visbwa  Removed wrong Reset Generation Module (RGM) register definitions,
                                fixed Fr/Lin clock init for BRSHW_FMPLL_GROUP_A_2,
                                fixed PLL0-init within BRSHW_FMPLL_GROUP_A with BRSHW_OPMODES_GROUP_NONE
  01.00.14  2016-03-22  vismin  Added support for PC580000/Quasar0 and VEBN01655
  01.00.15  2016-03-30  visbwa  Fixed DrvCan Pin settings for BRSHW_SIU_GROUP_A (IMUX)
  01.00.16  2016-03-31  vismin  Finalized VEBN01655 support and fixed TIMER_GROUP_B ISR priority
  01.00.17  2016-04-07  visbwa  Fixed CAN Interrupt initialization for BRSHW_INTERRUPT_TABLE_GROUP_D
  01.00.18  2016-04-19  visbwa  Fixed PBRIDGE0_BASE address of BRSHW_USERMODE_ACCESS_GROUP_A
  01.00.19  2016-04-27  visbwa  Added SIU_IMCR for BRSHW_SIU_GROUP_A, added BRSHW_USERMODE_ACCESS_GROUP_C
  01.00.20  2016-04-27  vissmd  FlexRay pins for BRSHW_SIU_GROUP_A verified
  01.01.00  2016-07-01  visbwa  Review according to Brs_Template 2.00.02
  01.01.01  2016-07-04  virrro  Introduced BRSHW_USERMODE_ACCESS_GROUP_A1 (S32R)
  01.01.02  2016-10-21  vismaa  Added support for PC582101/Quasar2e and blinking LED support for HSR165
  01.01.03  2016-11-11  visbwa  Added PortPins for DrvLin ch.6 to ch.9 within BRSHW_SIU_GROUP_E
  01.01.04  2016-11-15  visbwa  Fixed port initialization (SIU_MSCR instead of outdates SIU_PCR)
  01.02.00  2016-12-21  viswca  Introduced TCM support and BrsHw_Ports.h
            2017-01-20  visbwa  Review
  01.02.01  2017-02-01  visbwa  Fixed BrsHwSwitchRunMode() to enter RESET mode if HW booted in SAFE mode
  01.02.02  2017-02-08  visbwa  Added Os_CoreGen7 support (check within header file)
  01.02.03  2017-03-14  visydg  Fixed PLL initialization for MPC5777M within FMPLL_GROUP_A_1,
                                added DrvFr pin configuration for BRSHW_SIU_GROUP_C
  01.02.04  2017-05-12  visbwa  Removed limitation of i within BrsHwConfigureInterruptsAtPowerOn()
  01.03.00  2017-07-07  visivg  Started BrsHw_Ports.h concept according to Brs_Template 2.01.00,
                                fixed support for SPC574Sx
            2017-07-07  visbwa  Review
  01.03.01  2017-07-11  visivg  Fixed BrsHwInitPortConfig()
  01.03.02  2017-07-12  visivg  Reworked embracements within Port helper functions to solve runtime issues
  01.03.03  2017-07-17  visivg  Fixed macro names for port pins and defined BRSHW_PORT_ETH0_MDIO as Input/Output pin
  01.03.04  2017-08-11  vismaa  Added MPC5745R support
  01.03.05  2017-08-14  visivg  Defined BrsHwInitPortConfig() for SIU Group B
  01.04.00  2017-08-28  visivg  Added support for GnuGcc compiler, renamed BRS_COMP_GNU into BRS_COMP_HIGHTEC,
                                enabled Software Vector Mode for IRQ Table Group E
  01.04.01  2017-09-14  virrro  Added BRSHW_USERMODE_ACCESS_GROUP_D
  01.04.02  2017-10-09  virrro  Moved SWT0 + STM OPACR registers into BRSHW_USERMODE_ACCESS_GROUP_A/A1
  01.04.03  2017-10-27  vismin  Fixed PLL Init for BRSHW_SIU_GROUP_B (MPC5777C)
  01.04.04  2017-10-25  vismaa  Enabled all cores for S32R274 in RUN0
  01.04.05  2017-11-14  vismaa  Added new CAN include for use of 2 CAN cells
  01.04.06  2017-11-17  vismaa  Added MCAN support in BrsHwConfigureInterruptsAtPowerOn()
            2017-11-22  visbwa  Review, added configuration check for MCAN configuration
  01.04.07  2018-01-30  visbwa  Removed buggy setting of CGM_AC2_SC and CGM_AC2_DC0 for BRSHW_FMPLL_GROUP_A_3
  01.04.08  2018-02-14  vismun  Moved assembler command redefinition from BrsStartup.c and BrsIntTb.c to BrsHw.h
  01.05.00  2018-03-20  vismaa  Added FBL support (Brs_Template 2.02.01), implemented BrsHwSoftwareResetECU() from FBL
  01.05.01  2018-04-04  visbwa  Fixed MemMap encapsulation of BrsHwPort_SetLevel(),
                                added while-loop to BrsHwSoftwareResetECU()
**********************************************************************************************************************/

/**********************************************************************************************************************
*  EXAMPLE CODE ONLY
*  -------------------------------------------------------------------------------------------------------------------
*  This Example Code is only intended for illustrating an example of a possible BSW integration and BSW configuration.
*  The Example Code has not passed any quality control measures and may be incomplete. The Example Code is neither
*  intended nor qualified for use in series production. The Example Code as well as any of its modifications and/or
*  implementations must be tested with diligent care and must comply with all quality requirements which are necessary
*  according to the state of the art before their use.
*********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
/*
 * Description: The BrsHw header provides all the necessary interfaces to
 *              the microcontroller hardware features like ports, timers, LEDs, ...
 */
#include "BrsHw.h"

#if defined (VGEN_ENABLE_CAN_DRV)
# if defined (VGEN_ENABLE_IF_ASRIFCAN)
  /*Autosar component*/
#  if defined (BRSHW_USED_CANCELL_DEFAULT)
  #include "Can.h"
#  endif
#  if defined (BRSHW_USED_CANCELL_MCAN)
  #include "Can_30_Mcan.h"
#   if !defined (kCan_30_McanPhysToLogChannelIndex_0) && !defined (kCan_30_McanPhysToLogChannelIndex_1)
  #error "Could not detect DrvMCan channel configuration automatically. Please define here manually, which channel is used within your configuration."
  /*#define kCan_30_McanPhysToLogChannelIndex_0*/
  /*#define kCan_30_McanPhysToLogChannelIndex_1*/
#   endif
#  endif /*BRSHW_USED_CANCELL_MCAN*/
#  if defined (BRSASR_ENABLE_SAFECTXSUPPORT)
  /* Necessary for WRAPPER FOR OLD DRVCAN IMPLEMENTATIONS (previous to MSR4 R11) */
  #include "CanIf_Cfg.h"
#  endif
# else
  /*CANbedded component*/
  #include "can_inc.h"
# endif
#endif

#if defined (VGEN_ENABLE_LIN_DRV)
# if defined (VGEN_ENABLE_IF_ASRIFLIN)
  /*Autosar component*/
  #include "Lin.h"
# else
  /*CANbedded component*/
  #include "lin_api.h"
  #include "sio_par.h"
# endif
#endif

#if defined (VGEN_ENABLE_DRVFR__BASEASR)
  #include "Fr.h"
# if !defined (FR_CHANNEL_A_USED) && !defined (FR_CHANNEL_B_USED)
  #error "Could not detect DrvFr channel configuration automatically. Please define here manually, which channel is used within your configuration."*/
  /*#define FR_CHANNEL_A_USED STD_ON*/
  /*#define FR_CHANNEL_B_USED STD_ON*/
# endif
#endif

#if defined (VGEN_ENABLE_DRVETH__BASEASR)
  #include "Eth.h"
#endif

#if !defined (VGEN_ENABLE_DRVPORT)
  #include "BrsHw_Ports.h"
#endif

#if defined (VGEN_ENABLE_DRVDIO)
# if defined (BRS_ENABLE_SUPPORT_LEDS)          || \
     defined (BRS_ENABLE_SUPPORT_TOGGLE_WD_PIN) || \
     defined (BRS_ENABLE_SUPPORT_TOGGLE_CUSTOM_PIN)
  #include "Dio.h"
#  if defined (VGEN_ENABLE_DRVPORT)
  #define BRSHW_PORT_LOGIC_HIGH STD_HIGH
  #define BRSHW_PORT_LOGIC_LOW STD_LOW
#  else
  #error "LED alive mechanism and MCAL does only work proper if DrvPort and DrvDio are used together!"
#  endif
# endif /*BRS_ENABLE_SUPPORT_LEDS||BRS_ENABLE_SUPPORT_TOGGLE_WD_PIN||BRS_ENABLE_SUPPORT_TOGGLE_CUSTOM_PIN*/
#else
# if defined (VGEN_ENABLE_DRVPORT)
#  if defined (BRS_ENABLE_SUPPORT_LEDS)          || \
      defined (BRS_ENABLE_SUPPORT_TOGGLE_WD_PIN) || \
      defined (BRS_ENABLE_SUPPORT_TOGGLE_CUSTOM_PIN)
  #error "LED alive mechanism and MCAL does only work proper if DrvPort and DrvDio are used together!"
#  endif
# endif /*VGEN_ENABLE_DRVPORT*/
#endif /*VGEN_ENABLE_DRVDIO*/

/**********************************************************************************************************************
  VERSION CHECK
**********************************************************************************************************************/
#if (BRSHW_VERSION != 0x0105u)
  #error "Header and source file are inconsistent!"
#endif
#if (BRSHW_BUGFIX_VERSION != 0x01u)
  #error "Different versions of bugfix in Header and Source used!"
#endif

/**********************************************************************************************************************
  CONFIGURATION CHECK
**********************************************************************************************************************/
#if defined (BRS_COMP_DIAB)    

#else
  #error "Unknown compiler specified!"
#endif

/**********************************************************************************************************************
  DEFINITION + MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL VARIABLES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL CONST VARIABLES
**********************************************************************************************************************/
/*
 * Description: These constants are used to propagate the Versions over
 *              module boundaries.The version numbers are BCD coded. E.g. a sub
 *              version of 23 is coded with 0x23, a bug fix version of 9 is
 *              coded 0x09.
 */
uint8 const kBrsHwMainVersion   = (uint8)(BRSHW_VERSION >> 8);
uint8 const kBrsHwSubVersion    = (uint8)(BRSHW_VERSION & 0xFF);
uint8 const kBrsHwBugfixVersion = (uint8)(BRSHW_BUGFIX_VERSION);

/**********************************************************************************************************************
  LOCAL VARIABLES AND LOCAL HW REGISTERS
**********************************************************************************************************************/
/*
 * Description: This counter is used to count the number of nested calls to
 *              disable and restore the state of the global INT enable bit.
 *              Please note: This variable is used only in this file.
 * Values     : 0 if no BrsHwDisableInterrupt is called and INT is allowed by the
 *              BRS. Value > 0 if INT is locked by the BRS interrupt control API.
 */
static uint8 bBrsHwIntDiCounter;

#if defined (BRSHW_ENABLE_ISR_SW_DISPATCHING)
  extern void (*intvect_ExtExceptions[])();
#endif

/**********************************************************************************************************************
  CONTROLLER CONFIGURATION REGISTERS
**********************************************************************************************************************/
/***********************************************/
/* PLL / CGM / RGM registers                   */
/***********************************************/
#if defined (BRSHW_FMPLL_GROUP_A) || defined (BRSHW_FMPLL_GROUP_A_1) || defined (BRSHW_FMPLL_GROUP_A_2) || defined (BRSHW_FMPLL_GROUP_A_3)
# if defined (BRSHW_FMPLL_GROUP_A_1)
  #define BRSHW_FMPLL_GROUP_A BRSHW_FMPLL_GROUP_A_1
# endif
# if defined (BRSHW_FMPLL_GROUP_A_2)
  #define BRSHW_FMPLL_GROUP_A BRSHW_FMPLL_GROUP_A_2
# endif
# if defined (BRSHW_FMPLL_GROUP_A_3)
  #define BRSHW_FMPLL_GROUP_A BRSHW_FMPLL_GROUP_A_3
# endif

  #define FMPLL_BASE_ADDR BRSHW_FMPLL_GROUP_A

  #define PLL0CR   BRSHW_IOS(uint32, FMPLL_BASE_ADDR + 0x00) /* PLL0 Control Register */
  #define PLL0SR   BRSHW_IOS(uint32, FMPLL_BASE_ADDR + 0x04) /* PLL0 Status Register */
  #define PLL0DV   BRSHW_IOS(uint32, FMPLL_BASE_ADDR + 0x08) /* PLL0 Divider Register */
  #define PLL1CR   BRSHW_IOS(uint32, FMPLL_BASE_ADDR + 0x20) /* PLL1 Control Register */
  #define PLL1SR   BRSHW_IOS(uint32, FMPLL_BASE_ADDR + 0x24) /* PLL1 Status Register */
  #define PLL1DV   BRSHW_IOS(uint32, FMPLL_BASE_ADDR + 0x28) /* PLL1 Divider Register */

# if defined (BRSHW_OPMODES_GROUP_A)
  /* Clock Generation Module (CGM) */
#  if defined (BRS_DERIVATIVE_PC580000x) || defined (BRS_DERIVATIVE_PC580002x) || defined (BRS_DERIVATIVE_PC580003x) || defined (BRS_DERIVATIVE_PC582101) 
  #define CGM_BASE_ADDR 0xFFFF0000
#  else
  #define CGM_BASE_ADDR 0xFFFB0000
#  endif

  #define CGM_AC0_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0800)  /* Auxiliary Clock 0 Select Control Register */
  #define CGM_AC0_SS   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0804)  /* Auxiliary Clock 0 Select Status Register */
  #define CGM_AC0_DC0  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0808)  /* Auxiliary Clock 0 Divider 0 Configuration Register */
  #define CGM_AC0_DC1  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x080C)  /* Auxiliary Clock 0 Divider 1 Configuration Register */
  #define CGM_AC0_DC2  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0810)  /* Auxiliary Clock 0 Divider 2 Configuration Register */
  #define CGM_AC0_DC3  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0814)  /* Auxiliary Clock 0 Divider 3 Configuration Register */
  #define CGM_AC0_DC4  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0818)  /* Auxiliary Clock 0 Divider 4 Configuration Register */
  #define CGM_AC0_DC5  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x081C)  /* Auxiliary Clock 0 Divider 5 Configuration Register */

  #define CGM_AC1_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0820)  /* Auxiliary Clock 1 Select Control Register */
  #define CGM_AC1_SS   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0824)  /* Auxiliary Clock 1 Select Status Register */
  #define CGM_AC1_DC0  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0828)  /* Auxiliary Clock 1 Divider 0 Configuration */
  #define CGM_AC1_DC1  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x082C)  /* Auxiliary Clock 1 Divider 1 Configuration */

  #define CGM_AC2_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0840)  /* Auxiliary Clock 2 Select Control Register */
  #define CGM_AC2_SS   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0844)  /* Auxiliary Clock 2 Select Status Register */
  #define CGM_AC2_DC0  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0848)  /* Auxiliary Clock 2 Divider Control Register */

  #define CGM_AC3_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0860)  /* Auxiliary Clock 3 Select Control Register */
  #define CGM_AC3_SS   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0864)  /* Auxiliary Clock 3 Select Status Register */

  #define CGM_AC4_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0880)  /* Auxiliary Clock 4 Select Control Register */
  #define CGM_AC5_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x08A0)  /* Auxiliary Clock 5 Select Control Register */
  #define CGM_AC6_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x08C0)  /* Auxiliary Clock 6 Select Control Register */
  #define CGM_AC6_DC0  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x08C8)  /* Auxiliary Clock 6 Divider Configuration Register */
  #define CGM_AC7_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x08E0)  /* Auxiliary Clock 7 Select Control Register */
  #define CGM_AC7_DC0  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x08E8)  /* Auxiliary Clock 7 Divider Configuration Register */
  #define CGM_AC8_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0900)  /* Auxiliary Clock 8 Select Control Register */
  #define CGM_AC8_DC0  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0908)  /* Auxiliary Clock 8 Divider Configuration Register */
  #define CGM_AC9_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0920)  /* Auxiliary Clock 9 Select Control Register */
  #define CGM_AC9_DC0  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0928)  /* Auxiliary Clock 9 Divider Configuration Register */
  #define CGM_AC15_SC  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x09E0)  /* Auxiliary Clock 15 Select Control Register */
  #define CGM_AC15_DC0 BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x09E8)  /* Auxiliary Clock 15 Divider Configuration Register */

  #define CGM_SC_SS    BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x07E4)  /* System Clock Select Status Register */
  #define CGM_SC_DC0   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x07E8)  /* System Clock Divider 0 Configuration Register */
  #define CGM_SC_DC1   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x07EC)  /* System Clock Divider 1 Configuration Register */
  #define CGM_SC_DC2   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x07F0)  /* Core2 System Clock Divider Configuration Register */
  #define CGM_SC_DC3   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x07F4)
  #define CGM_SC_DC4   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x07F8)

  #define CGM_SC_DIV_RC     BRSHW_IOS(uint32, CGM_BASE_ADDR+0x7D0)
  #define CGM_DIV_UPD_TYPE  BRSHW_IOS(uint32, CGM_BASE_ADDR+0x7D4)
  #define CGM_DIV_UPD_TRIG  BRSHW_IOS(uint32, CGM_BASE_ADDR+0x7D8)
  #define CGM_DIV_UPD_STAT  BRSHW_IOS(uint32, CGM_BASE_ADDR+0x7DC)
# endif /*BRSHW_OPMODES_GROUP_A*/

#  if defined (BRSHW_OPMODES_GROUP_B)
  /* Clock Generation Module (CGM) */
  #define CGM_BASE_ADDR 0xFFFB0600

  #define CGM_AC0_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0200)  /* Auxiliary Clock 0 Select Control Register */
  #define CGM_AC0_SS   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0204)  /* Auxiliary Clock 0 Select Status Register */
  #define CGM_AC0_DC0  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0208)  /* Auxiliary Clock 0 Divider 0 Configuration Register */
  #define CGM_AC0_DC1  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x020C)  /* Auxiliary Clock 0 Divider 1 Configuration Register */
  #define CGM_AC0_DC2  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0210)  /* Auxiliary Clock 0 Divider 2 Configuration Register */
  #define CGM_AC0_DC3  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0214)  /* Auxiliary Clock 0 Divider 3 Configuration Register */
  #define CGM_AC0_DC4  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0218)  /* Auxiliary Clock 0 Divider 4 Configuration Register */

  #define CGM_AC1_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0220)  /* Auxiliary Clock 1 Select Control Register */
  #define CGM_AC1_SS   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0224)  /* Auxiliary Clock 1 Select Status Register */
  #define CGM_AC1_DC0  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0228)  /* Auxiliary Clock 1 Divider 0 Configuration */

  #define CGM_AC2_DC0  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0248)  /* Auxiliary Clock 2 Divider 0 Control Register */
  #define CGM_AC2_DC1  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x024C)  /* Auxiliary Clock 2 Divider 1 Control Register */

  #define CGM_AC3_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0260)  /* Auxiliary Clock 3 Select Control Register */
  #define CGM_AC3_SS   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0264)  /* Auxiliary Clock 3 Select Status Register */

  #define CGM_AC4_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0280)  /* Auxiliary Clock 4 Select Control Register */
  #define CGM_AC4_SS   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0284)  /* Auxiliary Clock 4 Select Control Register */

  #define CGM_AC5_DC0  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x02A8)  /* Auxiliary Clock 5 Divider 0 Control Register */
  #define CGM_AC5_DC1  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x02AC)  /* Auxiliary Clock 5 Divider 1 Control Register */
  #define CGM_AC5_DC2  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x02B0)  /* Auxiliary Clock 5 Divider 2 Control Register */

  #define CGM_AC6_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x02C0)  /* Auxiliary Clock 6 Select Control Register */
  #define CGM_AC6_SS   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x02C4)  /* Auxiliary Clock 6 Select Status Register */
  #define CGM_AC6_DC0  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x02C8)  /* Auxiliary Clock 6 Divider Configuration Register */

  #define CGM_AC7_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x02E0)  /* Auxiliary Clock 7 Select Control Register */
  #define CGM_AC7_SS   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x02E4)  /* Auxiliary Clock 7 Select Status Register */
  #define CGM_AC7_DC0  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x02E8)  /* Auxiliary Clock 7 Divider Configuration Register */

  #define CGM_AC8_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0300)  /* Auxiliary Clock 8 Select Control Register */
  #define CGM_AC8_SS   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0304)  /* Auxiliary Clock 8 Select Status Register */
  #define CGM_AC8_DC0  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0308)  /* Auxiliary Clock 8 Divider Configuration Register */

  #define CGM_AC9_SC   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0320)  /* Auxiliary Clock 9 Select Control Register */
  #define CGM_AC9_SS   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0324)  /* Auxiliary Clock 9 Select Status Register */
  #define CGM_AC9_DC0  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0328)  /* Auxiliary Clock 9 Divider Configuration Register */

  #define CGM_AC10_SC  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0340)  /* Auxiliary Clock 10 Select Control Register */
  #define CGM_AC10_SS  BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0344)  /* Auxiliary Clock 10 Select Status Register */
  #define CGM_AC10_DC0 BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x0348)  /* Auxiliary Clock 10 Divider Configuration Register */

  #define CGM_SC_SS    BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x01E4)  /* System Clock Select Status Register */
  #define CGM_SC_DC0   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x01E8)  /* System Clock Divider 0 Configuration Register */
  #define CGM_SC_DC1   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x01EC)  /* System Clock Divider 1 Configuration Register */
  #define CGM_SC_DC2   BRSHW_IOS(uint32, CGM_BASE_ADDR + 0x01F0)  /* System Clock Divider 2 Configuration Register */

  #define CGM_SC_DIV_RC     BRSHW_IOS(uint32, CGM_BASE_ADDR+0x1D0)
  #define CGM_DIV_UPD_TYPE  BRSHW_IOS(uint32, CGM_BASE_ADDR+0x1D4)
  #define CGM_DIV_UPD_TRIG  BRSHW_IOS(uint32, CGM_BASE_ADDR+0x1D8)
  #define CGM_DIV_UPD_STAT  BRSHW_IOS(uint32, CGM_BASE_ADDR+0x1DC)
# endif /*BRSHW_OPMODES_GROUP_B*/

#elif defined (BRSHW_FMPLL_GROUP_B)
  #define FMPLL_BASE_ADDR BRSHW_FMPLL_GROUP_B
  #define PLL0CR   BRSHW_IOS(uint32, FMPLL_BASE_ADDR+0x20) /* PLL0 Control Register */
  #define PLL0DV   BRSHW_IOS(uint32, FMPLL_BASE_ADDR+0x28) /* PLL0 Divider Register */
  #define PLLCAL3  BRSHW_IOS(uint32, FMPLL_BASE_ADDR+0x18)
  #define PLLFD    BRSHW_IOS(uint32, FMPLL_BASE_ADDR+0x30)

# if defined (BRSHW_OPMODES_GROUP_A)
  /* Clock Generation Module */
  #define CGM_BASE_ADDR   0xFFFB0000
  #define CGM_SC_DC       BRSHW_IOS(uint32, CGM_BASE_ADDR+0x7E8)   /* System Clock Divider Configuration Register */
  #define CGM_SC_DC2      BRSHW_IOS(uint32, CGM_BASE_ADDR+0x7F0)   /* Core2 System Clock Divider Configuration Register */
  #define CGM_AC0_SC      BRSHW_IOS(uint32, CGM_BASE_ADDR+0x800)   /* Auxiliary Clock 0 Select Control Register */
  #define CGM_AC0_DC0     BRSHW_IOS(uint32, CGM_BASE_ADDR+0x808)   /* Auxiliary Clock 0 Divider Control Register */
  #define CGM_AC0_DC4     BRSHW_IOS(uint32, CGM_BASE_ADDR+0x818)   /* Auxiliary Clock 0 Divider 4 Control Register */
  #define CGM_AC3_SC      BRSHW_IOS(uint32, CGM_BASE_ADDR+0x860)   /* Auxiliary Clock 3 Select Control Register */
  #define CGM_AC4_SC      BRSHW_IOS(uint32, CGM_BASE_ADDR+0x880)   /* Auxiliary Clock 4 Select Control Register */

#  if (MPC5748G_CUT == 1)
  #define CGM_AC5_SC      BRSHW_IOS(uint32, CGM_BASE_ADDR+0x8A0)   /* Auxiliary Clock 5 Select Control Register MPC5748G Cut1 */
#  else
  #define CGM_AC5_SC      BRSHW_IOS(uint32, CGM_BASE_ADDR+0x1C0)   /* Auxiliary Clock 5 Select Control Register */
#  endif

  #define CGM_AC6_SC      BRSHW_IOS(uint32, CGM_BASE_ADDR+0x8C0)   /* Auxiliary Clock 6 Select Control Register */
  #define CGM_AC7_SC      BRSHW_IOS(uint32, CGM_BASE_ADDR+0x8E0)   /* Auxiliary Clock 7 Select Control Register */
  #define CGM_AC8_SC      BRSHW_IOS(uint32, CGM_BASE_ADDR+0x900)   /* Auxiliary Clock 7 Select Control Register */
  #define CGM_AC8_DC0     BRSHW_IOS(uint32, CGM_BASE_ADDR+0x908)   /* Auxiliary Clock 7 Select Control Register */
# endif /*BRSHW_OPMODES_GROUP_A*/

#elif defined (BRSHW_FMPLL_GROUP_NONE)

#else
  #error "Unknown PLL Group. Please check your derivative settings within BrsHw_DerivativeList.h."
#endif

/***********************************************/
/* SIU registers                               */
/***********************************************/
#if defined (BRSHW_SIU_GROUP_A)
  #define SIU_BASE_ADDR BRSHW_SIU_GROUP_A
#elif defined (BRSHW_SIU_GROUP_B)
  #define SIU_BASE_ADDR BRSHW_SIU_GROUP_B
#elif defined (BRSHW_SIU_GROUP_C)
  #define SIU_BASE_ADDR BRSHW_SIU_GROUP_C
#elif defined (BRSHW_SIU_GROUP_D_1)
  #define SIU_BASE_ADDR BRSHW_SIU_GROUP_D_1
#elif defined (BRSHW_SIU_GROUP_E)
  #define SIU_BASE_ADDR BRSHW_SIU_GROUP_E
#elif defined (BRSHW_SIU_GROUP_F)
  #define SIU_BASE_ADDR BRSHW_SIU_GROUP_F
#elif defined (BRSHW_SIU_GROUP_G)
  #define SIU_BASE_ADDR BRSHW_SIU_GROUP_G
#elif defined (BRSHW_SIU_GROUP_H)
  #define SIU_BASE_ADDR BRSHW_SIU_GROUP_H
#elif defined (BRSHW_SIU_GROUP_I)
  #define SIU_BASE_ADDR BRSHW_SIU_GROUP_I
#else
  #error "Unknown SIU Group. Please check your derivative settings within BrsHw_DerivativeList.h."
#endif

#if defined (BRSHW_SIU_GROUP_B)
  #define BRSHW_MSCR_SOURCE_SIGNAL_SELECT_1      0x0400
  #define BRSHW_MSCR_SOURCE_SIGNAL_SELECT_2      0x0800
  #define BRSHW_MSCR_SOURCE_SIGNAL_SELECT_3      0x0C00
  #define BRSHW_MSCR_SOURCE_SIGNAL_SELECT_4      0x1000
  #define BRSHW_PCR_PIN_ASSIGNMENT_GPIO_INPUT    0x0100
  #define BRSHW_PCR_PIN_ASSIGNMENT_GPIO_OUTPUT   0x0200
  #define BRSHW_PCR_USE_WEAK_PULLUP              0x0003
  #define BRSHW_PCR_USE_WEAK_PULLDOWN            0x0002

  #define SIU_MSCR(x) BRSHW_IOS(uint16, SIU_BASE_ADDR + 0x40 + (x*2))    /* Pad Configuration Register */
  #define SIU_GPDO(x) BRSHW_IOS(uint8,  SIU_BASE_ADDR + 0x600 + x)       /* General Purpose Data Output Register */
  #define SIU_GPDI(x) BRSHW_IOS(uint8,  SIU_BASE_ADDR + 0x800 + x)       /* General Purpose Data Input Register */
  #define SIU_PSMI(x) BRSHW_IOS(uint8, SIU_BASE_ADDR + 0x500 + x)        /* Pad selection for multiplexed Inputs */
  #define SIU_RSR     BRSHW_IOS(uint32, SIU_BASE_ADDR + 0x0C)            /* Reset Status Register */
  #define SIU_SRCR    BRSHW_IOS(uint32, SIU_BASE_ADDR + 0x10)            /* System Reset Control Register */
  #define SIU_EISR    BRSHW_IOS(uint32, SIU_BASE_ADDR + 0x14)            /* ext. IRQ status register */
  #define SIU_DIRER   BRSHW_IOS(uint32, SIU_BASE_ADDR + 0x18)            /* ext. IRQ enable register */
  #define SIU_IFEER   BRSHW_IOS(uint32, SIU_BASE_ADDR + 0x2c)            /* ext. IRQ: falling edge enable register */
  #define SIU_SYSCLK  BRSHW_IOS(uint32, SIU_BASE_ADDR + 0x9A0)           /* System Clock Register */
  #define SIU_IMUX(x) BRSHW_IOS(uint32, SIU_BASE_ADDR + 0x1200 + (4*x))  /* Input Multiplexing Registers */

#else /*BRSHW_SIU_GROUP_B*/
  #define BRSHW_PCR_PIN_ASSIGNMENT_GPIO_INPUT    0x00080000
# if (MPC5748G_CUT == 1)
  #define BRSHW_PCR_PIN_ASSIGNMENT_GPIO_OUTPUT   0x02000000
# else
  #define BRSHW_PCR_PIN_ASSIGNMENT_GPIO_OUTPUT   0x32000000 /* Output Impedance - very strong */
# endif
  #define BRSHW_MSCR_SOURCE_SIGNAL_SELECT_0      0x00000000
  #define BRSHW_MSCR_SOURCE_SIGNAL_SELECT_1      0x00000001
  #define BRSHW_MSCR_SOURCE_SIGNAL_SELECT_2      0x00000002
  #define BRSHW_MSCR_SOURCE_SIGNAL_SELECT_3      0x00000003
  #define BRSHW_MSCR_SOURCE_SIGNAL_SELECT_4      0x00000004
  #define BRSHW_MSCR_SOURCE_SIGNAL_SELECT_5      0x00000005
  #define BRSHW_MSCR_SOURCE_SIGNAL_SELECT_8      0x00000008
  #define BRSHW_MSCR_SOURCE_SIGNAL_SELECT_9      0x00000009

  #define SIU_MSCR(x)  BRSHW_IOS(uint32, SIU_BASE_ADDR + 0x240 + (4*x))  /* SIUL2 Multiplexed Singnal Configuration Register */
# if defined (BRSHW_SIU_GROUP_A)
  #define SIU_IMCR(x)  BRSHW_IOS(uint32, SIU_BASE_ADDR + 0xA40 + (4*x))  /* SIUL2 Input Multiplexed Singnal Configuration Register*/
# endif
  #define SIU_GPDO(x)  BRSHW_IOS(uint8, SIU_BASE_ADDR + 0x1300 + x)      /* SIUL2 GPIO Pad Data Out */
  #define SIU_GPDI(x)  BRSHW_IOS(uint8, SIU_BASE_ADDR + 0x1500 + x)      /* SIUL2 GPIO Pad Data In */
  #define SIU_EISR     BRSHW_IOS(uint32, SIU_BASE_ADDR + 0x10)           /* ext. IRQ status register */
  #define SIU_DIRER    BRSHW_IOS(uint32, SIU_BASE_ADDR + 0x18)           /* ext. IRQ enable register */
  #define SIU_IFEER    BRSHW_IOS(uint32, SIU_BASE_ADDR + 0x30)           /* ext. IRQ: falling edge enable register */
  #define SIU_MIDR1    BRSHW_IOS(uint32, SIU_BASE_ADDR + 0x04)
# if defined (BRSHW_SIU_GROUP_D_2)
  #define SIU_B_MSCR(x)  BRSHW_IOS(uint32, BRSHW_SIU_GROUP_D_2 + 0x240 + (4*x))  /* SIUL2 Multiplexed Single Configuration */
  #define SIU_B_GPDO(x)  BRSHW_IOS(uint8,  BRSHW_SIU_GROUP_D_2 + 0x1300 + x)     /* SIUL2 GPIO Pad Data Out */
  #define SIU_B_GPDI(x)  BRSHW_IOS(uint8,  BRSHW_SIU_GROUP_D_2 + 0x1500 + x)     /* SIUL2 GPIO Pad Data In */
# endif
#endif /*else BRSHW_SIU_GROUP_B*/

/***********************************************/
/* Mode Entry Module registers (MC_ME)         */
/***********************************************/
#if defined (BRSHW_OPMODES_GROUP_A) || defined (BRSHW_OPMODES_GROUP_B)
# if defined (BRSHW_OPMODES_GROUP_A)
  #define ME_BASE_ADDR      BRSHW_OPMODES_GROUP_A
# elif defined (BRSHW_OPMODES_GROUP_B)
  #define ME_BASE_ADDR      BRSHW_OPMODES_GROUP_B
# endif

  #define ME_GS         BRSHW_IOS(uint32, ME_BASE_ADDR + 0x00)          /* Global Status Register */
  #define ME_MCTL       BRSHW_IOS(uint32, ME_BASE_ADDR + 0x004)         /* Mode Control Register */
  #define ME_ME         BRSHW_IOS(uint32, ME_BASE_ADDR + 0x008)         /* Mode Enable Register */
  #define ME_IS         BRSHW_IOS(uint32, ME_BASE_ADDR + 0x00C)         /* Interrupt Status Register */
  #define ME_DRUN_MC    BRSHW_IOS(uint32, ME_BASE_ADDR + 0x02C)         /* DRUN Mode Configuration Registers */
  #define ME_RUN_MC(x)  BRSHW_IOS(uint32, ME_BASE_ADDR + 0x030 + 4*x)   /* RUN0..x Mode Configuration Registers */
  #define ME_RUN_PC(x)  BRSHW_IOS(uint32, ME_BASE_ADDR + 0x080 + 4*x)   /* Run Peripheral Configuration Register 0..x */
  #define ME_LP_PC(x)   BRSHW_IOS(uint32, ME_BASE_ADDR + 0x0A0 + 4*x)   /* Low-Power Peripheral Configuration Register 1 */
  #define ME_PCTL(x)    BRSHW_IOS(uint8, (ME_BASE_ADDR + 0x0C0 + x))    /* Peripheral Control Registers */
  #define ME_CCTL(x)    BRSHW_IOS(uint16, (ME_BASE_ADDR + 0x1C4 + 2*x)) /* Core Control Register */

#elif defined (BRSHW_OPMODES_GROUP_NONE)

#else
  #error "Unknown Operation Mode Group. Please check your derivative settings within BrsHw_DerivativeList.h."
#endif

/***********************************************/
/* Watchdog registers                          */
/***********************************************/
#if defined (BRSHW_WATCHDOG_GROUP_A)
  #define SWT_BASE_ADDR  BRSHW_WATCHDOG_GROUP_A
  #define SWT_CR         BRSHW_IOS(uint32, SWT_BASE_ADDR + 0x00 )          /* SWT Control Register */
  #define SWT_SR         BRSHW_IOS(uint32, SWT_BASE_ADDR + 0x10 )          /* SWT Service Register */

#elif defined (BRSHW_WATCHDOG_GROUP_B)
  #define SWT_BASE_ADDR  BRSHW_WATCHDOG_GROUP_B
  #define SWT_CR         BRSHW_IOS(uint32, SWT_BASE_ADDR + 0x00 )          /* SWT1 Control Register */
  #define SWT_SR         BRSHW_IOS(uint32, SWT_BASE_ADDR + 0x10 )          /* SWT1 Service Register */
  #define SWT2_CR        BRSHW_IOS(uint32, SWT_BASE_ADDR + 0x4000 + 0x00 ) /* SWT2 Control Register */
  #define SWT2_SR        BRSHW_IOS(uint32, SWT_BASE_ADDR + 0x4000 + 0x10 ) /* SWT2 Service Register */

#elif defined (BRSHW_WATCHDOG_GROUP_C)
  #define SWT_BASE_ADDR  BRSHW_WATCHDOG_GROUP_C
  #define SWT_CR         BRSHW_IOS(uint32, SWT_BASE_ADDR + 0x00 )          /* SWT0 Control Register */
  #define SWT_SR         BRSHW_IOS(uint32, SWT_BASE_ADDR + 0x10 )          /* SWT0 Service Register */
  #define SWT2_CR        BRSHW_IOS(uint32, SWT_BASE_ADDR + 0x8000 + 0x00 ) /* SWT2 Control Register */
  #define SWT2_SR        BRSHW_IOS(uint32, SWT_BASE_ADDR + 0x8000 + 0x10 ) /* SWT2 Service Register */

  #define SWT3_CR        BRSHW_IOS(uint32, SWT_BASE_ADDR + 0xC000 + 0x00 ) /* SWT3 Control Register */
  #define SWT3_SR        BRSHW_IOS(uint32, SWT_BASE_ADDR + 0xC000 + 0x10 ) /* SWT3 Service Register */

#elif defined (BRSHW_WATCHDOG_GROUP_NONE)

#else
  #error "Unknown Watchdog Group. Please check your derivative settings within BrsHw_DerivativeList.h."
#endif /*BRSHW_WATCHDOG_GROUP_x*/

/****************************************************/
/*  Reset Genration Module  */
/****************************************************/
#define MC_RGM_BASE 0xFFFA8000
# define RGM_FRET   BRSHW_IOS(uint8, MC_RGM_BASE + 0x604)            /* Functional Reset Escalation Threshold Register */

# if defined (BRSASR_ENABLE_SAFECTXSUPPORT)
/****************************************************/
/*  UserMode Access Group (UAA-Bit + PACR + OPACR)  */
/****************************************************/
#  if defined (BRSHW_USERMODE_ACCESS_GROUP_A) || defined (BRSHW_USERMODE_ACCESS_GROUP_A1)
  /***************************************************************/
  /* Platform / Off-platform peripheral access control registers */
  /***************************************************************/
  #define PBRIDGE0_BASE 0xFC000000
  #define PBRIDGE1_BASE 0xF8000000

  /* PBRIDGE0 OPACR15 SIUL */
  #define O_PACR_REGISTER_SIUL_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x144)
  #define O_PACR_REGISTER_SIUL_VALUE     0xFFFFFFF0
  /* PBRIDGE0 OPACR30 PIT */
  #define O_PACR_REGISTER_PIT_ADDR       BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x14C)
  #define O_PACR_REGISTER_PIT_VALUE      0xFFFFFF0F

  /* PBRIDGE0 PACR26/PACR27/PACR28 - STM */
  #define O_PACR_REGISTER_STM_ADDR       BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x10C)
  #define O_PACR_REGISTER_STM_VALUE      0xFF000FFF /* Enable STM0, STM1 and STM 2 */

  /* PBRIDGE0 OPACR36 - DMAMUX_0 */
  #define O_PACR_REGISTER_DMA_MUX_0_ADDR   BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x150)
  #define O_PACR_REGISTER_DMA_MUX_0_VALUE  0xFFFF0FFF

  /* PBRIDGE0 OPACR146 - DMAMUX_1 */
  #define O_PACR_REGISTER_DMA_MUX_1_ADDR   BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x188)
  #define O_PACR_REGISTER_DMA_MUX_1_VALUE  0xFF0FFFFF

  /* *******************CAN****************** */
  /* PBRIDGE0 OPACR79 - FlexCan0 */
  #define O_PACR_REGISTER_CAN0_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x164)
  #define O_PACR_REGISTER_CAN0_VALUE     0xFFFFFFF0
  /* PBRIDGE0 OPACR78 - FlexCan1 */
  #define O_PACR_REGISTER_CAN1_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x164)
  #define O_PACR_REGISTER_CAN1_VALUE     0xFFFFFF0F
  /* PBRIDGE0 OPACR77 - FlexCan2 */
  #define O_PACR_REGISTER_CAN2_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x164)
  #define O_PACR_REGISTER_CAN2_VALUE     0xFFFFF0FF

  /* *******************LIN****************** */
  /* PBRIDGE1 OPACR94 - LinFlex0 */
  #define O_PACR_REGISTER_LIN0_ADDR      BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x16c)
  #define O_PACR_REGISTER_LIN0_VALUE     0xFFFFFF0F
  /* PBRIDGE0 OPACR91 - LinFlex1 */
  #define O_PACR_REGISTER_LIN1_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x16c)
  #define O_PACR_REGISTER_LIN1_VALUE     0xFFF0FFFF

  /* *******************FLEXRAY****************** */
  /* PBRIDGE0 OPACR107 - FlexRay */
  #define O_PACR_REGISTER_FLEXRAY0_ADDR  BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x174)
  #define O_PACR_REGISTER_FLEXRAY0_VALUE 0xFFF0FFFF

  /* *******************ETHERNET****************** */
  /* PBRIDGE0 OPACR12 - Ethernet */
  #define O_PACR_REGISTER_ETHERNET0_ADDR  BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x144)
  #define O_PACR_REGISTER_ETHERNET0_VALUE 0xFFFF0FFF

  /* *******************FLASH****************** */
  /* PBRIDGE0 OPACR7 - Flash */
  #define O_PACR_REGISTER_FLASH0_ADDR    BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x140)
  #define O_PACR_REGISTER_FLASH0_VALUE   0xFFFFFFF0

  /* *******************DSPI****************** */
  /* PBRIDGE0 OPACR99 - DSPI0 */
  #define O_PACR_REGISTER_DSPI0_ADDR     BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x170)
  #define O_PACR_REGISTER_DSPI0_VALUE    0xFFF0FFFF
  /* PBRIDGE0 OPACR98 - DSPI1 */
  #define O_PACR_REGISTER_DSPI1_ADDR     BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x170)
  #define O_PACR_REGISTER_DSPI1_VALUE    0xFF0FFFFF
  /* PBRIDGE1 OPACR99 - DSPI2 */
  #define O_PACR_REGISTER_DSPI2_ADDR     BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x170)
  #define O_PACR_REGISTER_DSPI2_VALUE    0xFFF0FFFF
  /* PBRIDGE1 OPACR98 - DSPI3 */
  #define O_PACR_REGISTER_DSPI3_ADDR     BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x170)
  #define O_PACR_REGISTER_DSPI3_VALUE    0xFF0FFFFF

  /* *******************WDG****************** */
  /* PBRIDGE0 PACR20 - SWT0 */
  #define O_PACR_REGISTER_SWT0_ADDR    BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x108)
  #define O_PACR_REGISTER_SWT0_VALUE   0xFFFF0FFF

#   if defined (BRSHW_USERMODE_ACCESS_GROUP_A1)
  /* PBRIDGE0 PACR40 - eDMA */
  #define O_PACR_REGISTER_EDMA_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x114)
  #define O_PACR_REGISTER_EDMA_VALUE     0x0FFFFFFF

  /* *******************WDG****************** */
  /* PBRIDGE0 PACR21 - SWT1 */
  #define O_PACR_REGISTER_SWT1_ADDR    BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x108)
  #define O_PACR_REGISTER_SWT1_VALUE   0xFFFFF0FF

  /* **************CROSSBAR SWITCH************* */
  #define O_PACR_REGISTER_XBAR_0_ADDR     BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x100)
  #define O_PACR_REGISTER_XBAR_0_VALUE    (0xF0FFFFFF)
  #define O_PACR_REGISTER_XBAR_1_ADDR     BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x100)
  #define O_PACR_REGISTER_XBAR_1_VALUE    (0xFF0FFFFF)
#   endif /*BRSHW_USERMODE_ACCESS_GROUP_A1*/

/* Additional base addresses for UAA bit setting */

  /* *****************ETHERNET***************** */
  #define ENET_BASE                     0xFC0B0000
  #define ENET_EIR                      BRSHW_IOS(uint32, ENET_BASE + 0x0004)

  /* *******************DSPI****************** */
#   if defined (BRSHW_USERMODE_ACCESS_GROUP_A)
  #define DSPI0_BASE 0xFFE70000
  #define DSPI3_BASE 0xFBE74000
#   endif
  #define DSPI1_BASE 0xFFE74000
  #define DSPI2_BASE 0xFBE70000

  /* *******************FLASH****************** */
  /* Base address of the flash module, used by DrvFls */
  /* This can be Dataflash or Codeflash, depending to the derivative */
  #define FLASH0_BASE 0xFFFE0000

  /* **************DMA MULTIPLEXER************* */
  #define DMAMUX_0_BASE                 0xFFF6C000
  #define DMAMUX_1_BASE                 0xFBF6C000

#  elif defined (BRSHW_USERMODE_ACCESS_GROUP_B) || defined (BRSHW_USERMODE_ACCESS_GROUP_C)
  /***************************************************************/
  /* Platform / Off-platform peripheral access control registers */
  /***************************************************************/
  /* PACR/OPACR only */  
  #define PBRIDGE0_BASE 0xFC000000
  #define PBRIDGE1_BASE 0xF8000000

  /* PBRIDGE0 OPACR15 SIUL */
  #define O_PACR_REGISTER_SIUL_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x144)
  #define O_PACR_REGISTER_SIUL_VALUE     0xFFFFFFF0
  /* PBRIDGE0 OPACR30 PIT */
  #define O_PACR_REGISTER_PIT_ADDR       BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x14C)
  #define O_PACR_REGISTER_PIT_VALUE      0xFFFFFF0F
  /* PBRIDGE0 PACR26 - STM */
  #define O_PACR_REGISTER_STM_ADDR       BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x10C)
  #define O_PACR_REGISTER_STM_VALUE      0xFF0FFFFF

  /* *******************CAN****************** */
  /* PBRIDGE0 OPACR79 - FlexCan0 */
  #define O_PACR_REGISTER_CAN0_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x164)
  #define O_PACR_REGISTER_CAN0_VALUE     0xFFFFFFF0

#   if defined (BRSHW_USERMODE_ACCESS_GROUP_B)
  /* PBRIDGE0 OPACR78 - FlexCan2 */
  #define O_PACR_REGISTER_CAN2_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x164)
  #define O_PACR_REGISTER_CAN2_VALUE     0xFFFFFF0F
  /* PBRIDGE0 OPACR77 - FlexCan4 */
  #define O_PACR_REGISTER_CAN4_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x164)
  #define O_PACR_REGISTER_CAN4_VALUE     0xFFFFF0FF
  /* PBRIDGE0 OPACR76 - FlexCan6 */
  #define O_PACR_REGISTER_CAN6_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x164)
  #define O_PACR_REGISTER_CAN6_VALUE     0xFFFF0FFF

  /* PBRIDGE1 OPACR79 - FlexCan1 */
  #define O_PACR_REGISTER_CAN1_ADDR      BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x164)
  #define O_PACR_REGISTER_CAN1_VALUE     0xFFFFFFF0
  /* PBRIDGE1 OPACR78 - FlexCan3 */
  #define O_PACR_REGISTER_CAN3_ADDR      BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x164)
  #define O_PACR_REGISTER_CAN3_VALUE     0xFFFFFF0F
  /* PBRIDGE1 OPACR77 - FlexCan5 */
  #define O_PACR_REGISTER_CAN5_ADDR      BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x164)
  #define O_PACR_REGISTER_CAN5_VALUE     0xFFFFF0FF
  /* PBRIDGE1 OPACR76 - FlexCan7 */
  #define O_PACR_REGISTER_CAN7_ADDR      BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x164)
  #define O_PACR_REGISTER_CAN7_VALUE     0xFFFF0FFF
#   endif /*BRSHW_USERMODE_ACCESS_GROUP_B*/

#   if defined (BRSHW_USERMODE_ACCESS_GROUP_C)
  /* PBRIDGE0 OPACR78 - FlexCan1 */
  #define O_PACR_REGISTER_CAN1_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x164)
  #define O_PACR_REGISTER_CAN1_VALUE     0xFFFFFF0F

  /* PBRIDGE1 OPACR77 - FlexCan2 */
  #define O_PACR_REGISTER_CAN2_ADDR      BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x164)
  #define O_PACR_REGISTER_CAN2_VALUE     0xFFFFF0FF
  /* PBRIDGE1 OPACR76 - FlexCan3 */
  #define O_PACR_REGISTER_CAN3_ADDR      BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x164)
  #define O_PACR_REGISTER_CAN3_VALUE     0xFFFF0FFF
#   endif /*BRSHW_USERMODE_ACCESS_GROUP_C*/

  /* *******************LIN****************** */
  /* PBRIDGE0 OPACR92 - LinFlex0 */
  #define O_PACR_REGISTER_LIN0_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x16c)
  #define O_PACR_REGISTER_LIN0_VALUE     0xFFFF0FFF

#   if defined (BRSHW_USERMODE_ACCESS_GROUP_B)
  /* PBRIDGE0 OPACR91 - LinFlex2 */
  #define O_PACR_REGISTER_LIN2_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x16c)
  #define O_PACR_REGISTER_LIN2_VALUE     0xFFF0FFFF
  /* PBRIDGE0 OPACR90 - LinFlex4 */
  #define O_PACR_REGISTER_LIN4_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x16c)
  #define O_PACR_REGISTER_LIN4_VALUE     0xFF0FFFFF
  /* PBRIDGE0 OPACR89 - LinFlex6 */
  #define O_PACR_REGISTER_LIN6_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x16c)
  #define O_PACR_REGISTER_LIN6_VALUE     0xF0FFFFFF
  /* PBRIDGE0 OPACR88 - LinFlex8 */
  #define O_PACR_REGISTER_LIN8_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x16c)
  #define O_PACR_REGISTER_LIN8_VALUE     0x0FFFFFFF
  /* PBRIDGE0 OPACR87 - LinFlex10 */
  #define O_PACR_REGISTER_LIN10_ADDR     BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x168)
  #define O_PACR_REGISTER_LIN10_VALUE    0xFFFFFFF0
  /* PBRIDGE0 OPACR86 - LinFlex12 */
  #define O_PACR_REGISTER_LIN12_ADDR     BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x168)
  #define O_PACR_REGISTER_LIN12_VALUE    0xFFFFFF0F
  /* PBRIDGE0 OPACR85 - LinFlex14 */
  #define O_PACR_REGISTER_LIN14_ADDR     BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x168)
  #define O_PACR_REGISTER_LIN14_VALUE    0xFFFFF0FF

  /* PBRIDGE1 OPACR92 - LinFlex1 */
  #define O_PACR_REGISTER_LIN1_ADDR      BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x16c)
  #define O_PACR_REGISTER_LIN1_VALUE     0xFFFF0FFF
  /* PBRIDGE1 OPACR91 - LinFlex3 */
  #define O_PACR_REGISTER_LIN3_ADDR      BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x16c)
  #define O_PACR_REGISTER_LIN3_VALUE     0xFFF0FFFF
  /* PBRIDGE1 OPACR90 - LinFlex5 */
  #define O_PACR_REGISTER_LIN5_ADDR      BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x16c)
  #define O_PACR_REGISTER_LIN5_VALUE     0xFF0FFFFF
  /* PBRIDGE1 OPACR89 - LinFlex7 */
  #define O_PACR_REGISTER_LIN7_ADDR      BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x16c)
  #define O_PACR_REGISTER_LIN7_VALUE     0xF0FFFFFF
  /* PBRIDGE1 OPACR88 - LinFlex9 */
  #define O_PACR_REGISTER_LIN9_ADDR      BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x16c)
  #define O_PACR_REGISTER_LIN9_VALUE     0x0FFFFFFF
  /* PBRIDGE1 OPACR87 - LinFlex11 */
  #define O_PACR_REGISTER_LIN11_ADDR     BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x168)
  #define O_PACR_REGISTER_LIN11_VALUE    0xFFFFFFF0
  /* PBRIDGE1 OPACR86 - LinFlex13 */
  #define O_PACR_REGISTER_LIN13_ADDR     BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x168)
  #define O_PACR_REGISTER_LIN13_VALUE    0xFFFFFF0F
  /* PBRIDGE1 OPACR85 - LinFlex15 */
  #define O_PACR_REGISTER_LIN15_ADDR     BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x168)
  #define O_PACR_REGISTER_LIN15_VALUE    0xFFFFF0FF
#   endif /*BRSHW_USERMODE_ACCESS_GROUP_B*/

#   if defined (BRSHW_USERMODE_ACCESS_GROUP_C)
  /* PBRIDGE0 OPACR91 - LinFlex1 */
  #define O_PACR_REGISTER_LIN1_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x16c)
  #define O_PACR_REGISTER_LIN1_VALUE     0xFFF0FFFF
  /* PBRIDGE0 OPACR92 - LinFlex3 */
  #define O_PACR_REGISTER_LIN3_ADDR      BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x16c)
  #define O_PACR_REGISTER_LIN3_VALUE     0xFF0FFFFF

  /* PBRIDGE1 OPACR92 - LinFlex2 */
  #define O_PACR_REGISTER_LIN2_ADDR      BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x16c)
  #define O_PACR_REGISTER_LIN2_VALUE     0xFFFF0FFF
#   endif /*BRSHW_USERMODE_ACCESS_GROUP_C*/

  /* *******************FLEXRAY****************** */
  /* PBRIDGE0 OPACR107 - FlexRay */
  #define O_PACR_REGISTER_FLEXRAY0_ADDR  BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x174)
  #define O_PACR_REGISTER_FLEXRAY0_VALUE 0xFFF0FFFF

// sslee
  /* *******************ADC****************** */
#   if defined (BRSHW_USERMODE_ACCESS_GROUP_B)
 /* PBRIDGE0 OPACR127 - ADC0 */
 #define O_PACR_REGISTER_ADC0_ADDR  BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x17C)
 #define O_PACR_REGISTER_ADC0_VALUE 0xFFFFFFF0
 /* PBRIDGE1 OPACR127 - ADC1 */
 #define O_PACR_REGISTER_ADC1_ADDR  BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x17C)
 #define O_PACR_REGISTER_ADC1_VALUE 0xFFFFFFF0
#   endif /*BRSHW_USERMODE_ACCESS_GROUP_B*/

// sslee
  /* *******************SIUL****************** */
#   if defined (BRSHW_USERMODE_ACCESS_GROUP_B)
 /* PBRIDGE0 OPACR15 - SIUL */
 #define O_PACR_REGISTER_SIUL_ADDR  BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x144)
 #define O_PACR_REGISTER_SIUL_VALUE 0xFFFFFFF0

#   endif /*BRSHW_USERMODE_ACCESS_GROUP_B*/

  /* *******************ETHERNET****************** */
#   if defined (BRSHW_USERMODE_ACCESS_GROUP_B)
  /* PBRIDGE0 OPACR206 - Ethernet */
  #define O_PACR_REGISTER_ETHERNET0_ADDR  BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x1A4)
  #define O_PACR_REGISTER_ETHERNET0_VALUE 0xFFFFFF0F
#   endif /*BRSHW_USERMODE_ACCESS_GROUP_B*/

#   if defined (BRSHW_USERMODE_ACCESS_GROUP_C)
  /* PBRIDGE0 PACR44 - Ethernet */
  #define O_PACR_REGISTER_ETHERNET0_ADDR  BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x114)
  #define O_PACR_REGISTER_ETHERNET0_VALUE 0xFFFF0FFF
#   endif /*BRSHW_USERMODE_ACCESS_GROUP_C*/

  /* *******************FLASH****************** */
  /* PBRIDGE0 OPACR7 - Flash */
  #define O_PACR_REGISTER_FLASH0_ADDR    BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x140)
  #define O_PACR_REGISTER_FLASH0_VALUE   0xFFFFFFF0

  /* *******************DSPI****************** */
  /* PBRIDGE0 OPACR99 - DSPI0 */
  #define O_PACR_REGISTER_DSPI0_ADDR    BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x170)
  #define O_PACR_REGISTER_DSPI0_VALUE   0xFFF0FFFF
  /* PBRIDGE0 OPACR98 - DSPI2 */
  #define O_PACR_REGISTER_DSPI2_ADDR    BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x170)
  #define O_PACR_REGISTER_DSPI2_VALUE   0xFF0FFFFF

  /* PBRIDGE1 OPACR99 - DSPI1 */
  #define O_PACR_REGISTER_DSPI1_ADDR    BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x170)
  #define O_PACR_REGISTER_DSPI1_VALUE   0xFFF0FFFF
  /* PBRIDGE1 OPACR98 - DSPI3 */
  #define O_PACR_REGISTER_DSPI3_ADDR    BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x170)
  #define O_PACR_REGISTER_DSPI3_VALUE   0xFF0FFFFF

  /* *******************WDG****************** */
  /* PBRIDGE0 PACR20/21 - SWT0/1 */
  #define O_PACR_REGISTER_SWT0_ADDR    BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x108)
  #define O_PACR_REGISTER_SWT0_VALUE   0xFFFF0FFF
  #define O_PACR_REGISTER_SWT1_ADDR    BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x108)
  #define O_PACR_REGISTER_SWT1_VALUE   0xFFFFF0FF
#   if defined (BRSHW_USERMODE_ACCESS_GROUP_C)
  /* PBRIDGE0 PACR22 - SWT2 */
  #define O_PACR_REGISTER_SWT2_ADDR    BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x108)
  #define O_PACR_REGISTER_SWT2_VALUE   0xFFFFFF0F
#   endif /*BRSHW_USERMODE_ACCESS_GROUP_C*/

  /* *******************eMIOS****************** */
// sslee
//#   if defined (BRSHW_USERMODE_ACCESS_GROUP_C)
#   if defined (BRSHW_USERMODE_ACCESS_GROUP_B) 
  /* PBRIDGE0 OPACR241 - eMIOS_0/1 */
  #define O_PACR_REGISTER_EMIOS0_ADDR    BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x1B8)
  #define O_PACR_REGISTER_EMIOS0_VALUE   0xF0FFFFFF
  #define O_PACR_REGISTER_EMIOS1_ADDR    BRSHW_IOS(uint32, PBRIDGE1_BASE + 0x1B8)
  #define O_PACR_REGISTER_EMIOS1_VALUE   0xF0FFFFFF
#   endif /*BRSHW_USERMODE_ACCESS_GROUP_C*/

  /***************************************************************/
  /* Additional base addresses for UAA bit setting */
  /***************************************************************/
  /* Calypso family seems to have the UAA bit only for the MC_ME module */

  /* *******************MC_ME****************** */
  #define MC_ME_BASE 0xFFFB8000

#   if defined (BRSHW_USERMODE_ACCESS_GROUP_C)
  /* *******************DSPI****************** */
  #define DSPI0_BASE 0xFFE70000
  #define DSPI1_BASE 0xFFE74000
  #define DSPI2_BASE 0xFBE70000
  #define DSPI3_BASE 0xFBE74000

  /* *******************FLASH****************** */
  /* Base address of the flash module, used by DrvFls */
  /* This can be Dataflash or Codeflash, depending to the derivative */
  #define FLASH0_BASE 0xFFFE0000
#   endif /*BRSHW_USERMODE_ACCESS_GROUP_C*/

#  elif defined (BRSHW_USERMODE_ACCESS_GROUP_D)
  /***************************************************************/
  /* Platform / Off-platform peripheral access control registers */
  /***************************************************************/
  /* PACR/OPACR only */
  #define PBRIDGE0_BASE 0xFC000000
  #define PBRIDGE1_BASE 0xF8000000

  #define O_PACR_REGISTER_CAN0_ADDR   BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x168)
  #define O_PACR_REGISTER_CAN0_VALUE  0xFFF0FFFF

  #define O_PACR_REGISTER_DATA_FLASH_ADDR   BRSHW_IOS(uint32, PBRIDGE0_BASE + 0x140)
  #define O_PACR_REGISTER_DATA_FLASH_VALUE  0xFFFFFFF0

#  else
  #error: "Your Derivative is currently not analyzed and categorized to a UserMode_Access_Group"
#  endif /*BRSHW_USERMODE_ACCESS_GROUP_x*/
# endif /*BRSASR_ENABLE_SAFECTXSUPPORT*/

/**********************************************************************************************************************
  LOCAL VARIABLES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL CONST VARIABLES
**********************************************************************************************************************/
  #define BRSHWNOP10() asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop");asm("nop")

/**********************************************************************************************************************
  PROTOTYPES OF LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  FUNCTION DEFINITIONS
**********************************************************************************************************************/

/*****************************************************************************/
/**
 * @brief      This function has to be used to initialize the Watchdog.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from main@BrsMain or EcuM at power on initialization
 */
/*****************************************************************************/
void BrsHwWatchdogInitPowerOn(void)
{
# if defined (BRSHW_WATCHDOG_GROUP_A) || defined (BRSHW_WATCHDOG_GROUP_B) || defined (BRSHW_WATCHDOG_GROUP_C)
  SWT_SR = (uint32)0x0000C520;
  SWT_SR = (uint32)0x0000D928; /* clear softlockbit */
  SWT_CR = (uint32)0x80000102; /* FRZ=1 SWT counter is stopped in debug mode */
                               /* RIA=1 Invalid access to the SWT causes a system reset */

#  if defined (BRSHW_WATCHDOG_GROUP_B) || defined (BRSHW_WATCHDOG_GROUP_C)
  /*Watchdog Timer2 is enabled by default --> disable watchdog */
  SWT2_SR = 0x0000C520;
  SWT2_SR = 0x0000D928; /* clear softlockbit */
  SWT2_CR = 0x80000102; /* FRZ=1 SWT counter is stopped in debug mode */
                        /* RIA=1 Invalid access to the SWT causes a system reset */

#   if defined (BRSHW_WATCHDOG_GROUP_C)
  SWT3_SR = 0x0000C520;
  SWT3_SR = 0x0000D928; /* clear softlockbit */
  SWT3_CR = 0x80000102; /* FRZ=1 SWT counter is stopped in debug mode */
#   endif /*BRSHW_WATCHDOG_GROUP_C*/
#  endif /*BRSHW_WATCHDOG_GROUP_B || BRSHW_WATCHDOG_GROUP_C*/
# endif /*BRSHW_WATCHDOG_GROUP_A || BRSHW_WATCHDOG_GROUP_B || BRSHW_WATCHDOG_GROUP_C*/
}

/*****************************************************************************/
/**
 * @brief      This function has to be used to initialize the PLL.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from main@BrsMain or EcuM at power on initialization
 */
/*****************************************************************************/
void BrsHwPllInitPowerOn(void)
{
#if !defined (VGEN_ENABLE_DRVMCU)
# if (BRS_TIMEBASE_CLOCK > BRSHW_CPU_MAX_FREQUENCY)
  #error "The selected derivative does not support frequencies above BRSHW_CPU_MAX_FREQUENCY (please find the defined value within BrsHw_DerivativeList.h)!"
# endif

# if defined (BRSHW_FMPLL_GROUP_A)
  /* Route XOSC to the PLLs - IRC is default */
#  if defined (BRSHW_OPMODES_GROUP_A)
#   if defined (BRSHW_FMPLL_GROUP_A_1)
  CGM_AC3_SC = (uint32)0x01000000;  /* set auxiliary clock 3 (PLL0 reference clock) source: 8-40 MHz crystal osc. */
  if ((((SIU_MIDR1) >> 16) == 0x5777) && (((SIU_MIDR1) & 0xff) != 0))
  {
    /* Matterhorn Cut2 */
    CGM_SC_DIV_RC = 0x00000001; /* System clock divider ratios will change with next update. */
    CGM_DIV_UPD_TYPE = 0x80000000; /* System clock divider ratios updated on writing MC_CGM.DIV_UPD_TRIG. */
    CGM_SC_DC0 = (uint32)0x80010000; /* DC0 = /3 */
    CGM_SC_DC1 = (uint32)0x80010000; /* DC1 = /6 */
    CGM_SC_DC2 = (uint32)0x80030000; /* set PBRIDGE_CLK DC2 = /12 */
    CGM_SC_DC3 = (uint32)0x80010000; /* DC3 = /2 */
    CGM_SC_DC4 = (uint32)0x80030000; /* DC4 = /4 */
    CGM_DIV_UPD_TRIG = 0xfeedface;
    while (CGM_DIV_UPD_STAT == 1)
    {
      asm("nop");
    }

    CGM_AC0_SC  = (uint32)0x02000000;  /* set auxiliary clock 0 to source: PLL0 */
    CGM_AC0_DC0 = (uint32)0x80030000;  /* set PER_CLK divider (used by PIT, etc. ) = PLL0/4 ; Reason: this is the max. frequency! */
    CGM_AC0_DC4 = (uint32)0x80030000;  /* set LIN_CLK divider (used by LIN, etc. ) = PLL0/8 = 160/4 = 40Mhz */
    CGM_AC2_DC0 = (uint32)0x80010000;  /* set FR_CLK divider = PLL0/2 = 80 MHz *//*Manual says max Freq is 40 Mhz, so this should not work...but it does...*/
    CGM_AC3_SC  = (uint32)0x01000000;  /* set auxiliary clock 3 (PLL0 reference clock) source: external crystal osc. (8-40 MHz) */
    CGM_AC6_SC  = (uint32)0x02000000;  /* set auxiliary clock 6 (SYS_CLK0) source: PLL0 */
    CGM_AC6_DC0 = (uint32)0x80010000;  /* set SYS_CLK0 divider = PLL0/2 = 80 Mhz */
    CGM_AC7_SC  = (uint32)0x02000000;  /* set auxiliary clock 7 (SYS_CLK1) source: PLL0 */
    CGM_AC7_DC0 = (uint32)0x80010000;  /* set SYS_CLK1 divider = PLL0/2 = 80 Mhz */
    CGM_AC8_SC  = (uint32)0x01000000;  /* set auxiliary clock 8 (CAN_CLK)  source: XOSC */
    CGM_AC8_DC0 = (uint32)0x80000000;  /* set auxiliary clock 8 divider to 2 (devider AC8 seems to be necessary otherwise MCAN doesn't get a clock) */
    CGM_AC9_SC  = (uint32)0x01000000;  /* set auxiliary clock 9 (RTI_CLK)  source: XOSC */
    CGM_AC9_DC0 = (uint32)0x80010000;  /* set auxiliary clock 9 divider to 2 */
  }
  else if ((((SIU_MIDR1) >> 16) == 0x5746) && (((SIU_MIDR1) & 0x10) == 0x10))
  {
    /* McKinley Cut2: not documented in data sheet, but token from sample program "skeletonProject" */
    CGM_SC_DIV_RC = 0x00000001; /* System clock divider ratios will change with next update. */
    CGM_DIV_UPD_TYPE = 0x80000000; /* System clock divider ratios updated on writing MC_CGM.DIV_UPD_TRIG. */
    /* Configure System clock dividers */
    CGM_SC_DC0    = (uint32)0x80000000; /* DC0 = /1 fast XBAR clock  */
    CGM_SC_DC1    = (uint32)0x80010000; /* DC1 = /2 slow XBAR clock */
    CGM_SC_DC2    = (uint32)0x80030000; /* set PBRIDGE_CLK DC2 = /4 -> STM timer */

    CGM_AC0_SC = (uint32)0x02000000;  /* set auxiliary clock 0 (PER_CLK)  source: PLL0 */
    CGM_AC0_DC0= (uint32)0x80030000;  /* set PER_CLK (used by PIT, etc. ) = SYS_CLK/4 ; Reason: this is the max. frequency! */
    CGM_AC0_DC4= (uint32)0x80010000;    /* set LIN_CLK (used by LIN, etc. ) = SYS_CLK/2 */
    CGM_AC2_DC0 = (uint32)0x80010000;
    CGM_AC6_SC = (uint32)0x02000000;  /* set auxiliary clock 6 (SYS_CLK0) source: PLL0 */
#    if !(defined (BRS_DERIVATIVE_MPC5746R) || defined (BRS_DERIVATIVE_MPC5745R))
    CGM_AC7_SC = (uint32)0x02000000;  /* set auxiliary clock 7 (SYS_CLK1) source: PLL0 */
#    endif
    CGM_AC8_SC = (uint32)0x01000000;  /* set auxiliary clock 8 (CAN_CLK)  source: XOSC */
    CGM_AC8_DC0= (uint32)0x80000000;  /* set auxiliary clock 8 divider to 1 (devider AC8 seems to be necessary otherwise MCAN doesn't get a clock) */

    CGM_AC9_SC = (uint32)0x01000000;  /* set auxiliary clock 9 (RTI_CLK)  source: XOSC */
    CGM_AC9_DC0 = (uint32)0x80010000;

    CGM_AC6_DC0 = (uint32) 0x80000000; /*divide PLL0 by 1*/
#    if !(defined (BRS_DERIVATIVE_MPC5746R) || defined (BRS_DERIVATIVE_MPC5745R))
    CGM_AC7_DC0 = (uint32) 0x80000000; /*divide PLL1 by 1*/
#    endif

    CGM_DIV_UPD_TRIG = 0xfeedface; /* System clock divider ratio updates triggered. */
    while (CGM_DIV_UPD_STAT == 1)  /* Wait for System Clock Divider Update Status == 0. */
    {
      asm("nop");
    }
  }
  else
  {
    CGM_SC_DC2  = (uint32)0x80030000; /* set PBRIDGE_CLK (used by ? etc. ) = SYS_CLK/4 ; Reason: this is the max. frequency! */
    CGM_AC0_SC  = (uint32)0x02000000; /* set auxiliary clock 0 (PER_CLK)  source: PLL0 */
    CGM_AC0_DC0 = (uint32)0x80030000; /* set PER_CLK (used by PIT, etc. ) = SYS_CLK/4 ; Reason: this is the max. frequency! */
    CGM_AC0_DC4 = (uint32)0x80010000; /* set LIN_CLK (used by LIN, etc. ) = SYS_CLK/2 */
    CGM_AC2_DC0 = (uint32)0x80010000; /* divide by 2 */
    CGM_AC6_SC  = (uint32)0x02000000; /* set auxiliary clock 6 (SYS_CLK0) source: PLL0 */
#    if !(defined (BRS_DERIVATIVE_MPC5746R) || defined (BRS_DERIVATIVE_MPC5745R))
    /* Rainier does not have AuxClk7 */
    CGM_AC7_SC  = (uint32)0x02000000; /* set auxiliary clock 7 (SYS_CLK1) source: PLL0 */
#    endif
    CGM_AC8_SC  = (uint32)0x01000000; /* set auxiliary clock 8 (CAN_CLK)  source: XOSC */
    CGM_AC8_DC0 = (uint32)0x80000000; /* set auxiliary clock 8 divider to 1 (devider AC8 seems to be necessary otherwise MCAN doesn't get a clock) */
    CGM_AC9_SC  = (uint32)0x01000000; /* set auxiliary clock 9 (RTI_CLK)  source: XOSC */
    CGM_AC9_DC0 = (uint32)0x80010000;
  }

#   elif defined (BRSHW_FMPLL_GROUP_A_2)
  CGM_AC4_SC = (uint32)0x01000000; /* set XOSC as clock source for PLL0*/
  /* If the Pll is wrong, check the CGM_AC4_SC Register if the value was written */
#    if defined (VGEN_ENABLE_DRVFR__BASEASR)
#     if (BRS_TIMEBASE_CLOCK%80 != 0)
  #error Flexray needs an 80 MHz clock. Please adjust PLL0 (TIMEBASE_CLOCK) and CGM_AC2_DC0 divider accordingly.
#     else
  CGM_AC2_DC0 =
    (0x1                       <<31U) | /* Bit 0:     DE - Divider Enable */
    ((BRS_TIMEBASE_CLOCK/80-1) <<16U);  /* Bit 12-15: DIV - Divider Division Value Divider. The resultant FlexRay clock has a period 'DIV + 1' times that of auxiliary clock 2. */
                                        /* The source of AC2 is PLL0 by default */
#     endif
#    endif /*VGEN_ENABLE_DRVFR__BASEASR*/
#    if defined (VGEN_ENABLE_LIN_DRV)
  CGM_AC8_SC  = (uint32)0x02000000; /* set Auxiliary Clock 8 Source Control to PLL0_PHI */
  CGM_AC8_DC0 = (uint32)0x80020000; /* enable LIN -> LIN baud rate clock 80MHz */
#     endif

#   elif defined (BRSHW_FMPLL_GROUP_A_3)
  CGM_AC2_SC  = 0x01000000; /* Select PLL0 input = XOSC */
  CGM_AC3_SC  = 0x01000000; /* Select PLL1 input = XOSC */
  CGM_SC_DC0  = 0x80000000; /* System clock divider enabled, System clock = System clock source / 1 */
  CGM_SC_DC1  = 0x80000000; /* IPS divider enabled, IPS clock = System clock source / 1 */

  CGM_AC0_SC  = 0x02000000; /* Select peripheral clock source = PLL0 (PIT, LINflex, etc.) */
  CGM_AC0_DC0 = 0x80030000; /* PIT clock divider enabled, peripheral clock / 4 */

  CGM_AC1_SC  = 0x02000000; /* Select CAN clock source = PLL0 */
  CGM_AC1_DC0 = 0x80000000; /* CAN divider enabled, CAN clock = PLL0 / 1 */

#   else
  CGM_AC3_SC = (uint32)0x01000000;  /* set auxiliary clock 3 (PLL0 reference clock) source: 8-40 MHz crystal osc. */
  CGM_SC_DC0 = (uint32)0x80030000;  /* set PBRIDGE_CLK (used by PIT, CAN, LIN, FR, etc. ) = SYS_CLK/4 ; Reason: this is the max. frequency! */
#    if defined (BRS_DERIVATIVE_MPC5775K)
  CGM_AC15_SC  = (uint32)0x02000000;  /*set auxilary clock 15 to PLL0_PHI_CLK*/
  CGM_AC15_DC0 = (uint32)0x80030000;  /*enable auxilary clock 15 and set divider to 4 --> Pll0_PHI_CLK/4 used for MCAN*/
#    endif
#    if defined (BRSASR_ENABLE_OS_MULTICORESUPPORT)
     CGM_SC_DC1 = (uint32)0x80010000; /* Core1_CLK divider: 2 (same divider than Core0_CLK) */
     CGM_SC_DC2 = (uint32)0x80010000; /* Core2_CLK divider: 2 (same divider than Core0_CLK) */
#    endif
#   endif /*BRSHW_FMPLL_GROUP_A_x*/
#  endif /*BRSHW_OPMODES_GROUP_A*/

#  if defined (BRSHW_OPMODES_GROUP_B)
  CGM_AC3_SC  = 0x01000000; /* Select PLL0 input = XOSC */
  CGM_AC4_SC  = 0x01000000; /* Select PLL1 input = XOSC */
  CGM_SC_DC0  = 0x80000000; /* System clock divider enabled, System clock = System clock source / 1 */
  CGM_SC_DC1  = 0x80010000; /* Peripheral Core 2 divider enabled, clock = System clock source / 2 */
  CGM_SC_DC2  = 0x80030000; /* PBRIDGE clock, clock = System clock source / 4 */

  CGM_AC0_SC  = 0x02000000; /* Select peripheral clock source = PLL0 (PIT, LINflex, etc.) */
  CGM_AC0_DC0 = 0x80030000; /* PIT clock divider enabled, peripheral clock / 4 */

  CGM_AC8_SC  = 0x01000000; /* Select FlexCAN clock source = PLL0 */
  CGM_AC2_DC0 = 0x00000000; /* FLEXRAY */
#  endif /*BRSHW_OPMODES_GROUP_B*/

#  if ((BRS_OSC_CLK < 8) || (BRS_OSC_CLK > 56) || ((BRS_OSC_CLK%8 != 0) && (BRS_OSC_CLK%10 != 0)))
  #error "The current PLL implementation only supports quartz frequencies which are multiples of 8 or 10 MHz and the quartz must be in the range of 8 - 56 MHz! PLL will have an undefined frequency!"
#  endif
#  if ((BRS_TIMEBASE_CLOCK < 75) || (BRS_TIMEBASE_CLOCK > 310) || (BRS_TIMEBASE_CLOCK%5 != 0)) && (BRS_OSC_CLK%10 == 0)
  #error "With the used quartz (divisible by 10MHz) the current PLL implementation only supports CPU frequencies in the range 75 - 310 MHz and which are multiples of 5 MHz! PLL will have an undefined frequency!"
#  elif (((BRS_TIMEBASE_CLOCK < 75) || ((BRS_TIMEBASE_CLOCK > 127) && (BRS_TIMEBASE_CLOCK < 150)) || (BRS_TIMEBASE_CLOCK > 254) || ((BRS_TIMEBASE_CLOCK >= 150) && (BRS_TIMEBASE_CLOCK <= 254) && (BRS_TIMEBASE_CLOCK%2 != 0))) && (BRS_OSC_CLK%8 == 0) && (BRS_OSC_CLK%10 != 0))
  #error "With the used quartz (divisible of 8MHz) the current PLL implementation only supports CPU frequencies in the range 75 - 127/150 - 254 MHz and which are multiples of 1/2 MHz! PLL will have an undefined frequency!"
#  endif

  /* CPU_FREQUENCY = (QUARTZ_FREQUENCY*MFD) / (PREDIV * (RFDPHI*2)) */
#  if (BRS_TIMEBASE_CLOCK >= 75) && (BRS_TIMEBASE_CLOCK < 150) && (BRS_OSC_CLK%10 == 0)
  #define PREDIV  BRS_OSC_CLK/10
  #define MFD     BRS_TIMEBASE_CLOCK*8/10
  #define RFDPHI  4*2
#  elif (BRS_TIMEBASE_CLOCK >= 150) && (BRS_TIMEBASE_CLOCK <= 310) && (BRS_OSC_CLK%10 == 0)
  #define PREDIV  BRS_OSC_CLK/10
  #define MFD     BRS_TIMEBASE_CLOCK*4/10
  #define RFDPHI  2*2
#  elif (BRS_TIMEBASE_CLOCK >= 75) && (BRS_TIMEBASE_CLOCK <= 127) && (BRS_OSC_CLK%8 == 0)
  #define PREDIV  BRS_OSC_CLK/8
  #define MFD     BRS_TIMEBASE_CLOCK
  #define RFDPHI  4*2
#  elif (BRS_TIMEBASE_CLOCK >= 150) && (BRS_TIMEBASE_CLOCK <= 254) && (BRS_OSC_CLK%8 == 0)
  #define PREDIV  BRS_OSC_CLK/8
  #define MFD     BRS_TIMEBASE_CLOCK/2
  #define RFDPHI  2*2
#  endif

  PLL0DV =
    (0x4    <<27U) | /* Bit 1-4: RFDPHI1: 0x4 = Divider for PHI1 output clock (not used but 0x0 is not allowed!) */
    (RFDPHI <<16U) | /* Bit 10-15: Divider for PHI output clock (0x00 -> invalid,0x1 ->2,0x2->4,0x3->6,...,0x3f->126) */
    (PREDIV <<12U) | /* Bit 17-19: Input clock pre-divider (0x0-> Clock inhibit,0x1->1,...,0x7->7) */
    (MFD    <<0U);   /* Bit 25-31: Loop multiplication factor divider (0x00-0x07->invalid ,0x08 -> 8,0x09 -> 9,...,0x7f ->127 */

#  if defined (BRSHW_SIU_GROUP_B)
  PLL0CR |= 0x00000300; /* Set CLKCFG to 11b -> PLL in normal mode */
  while (!(SIU_RSR & 0x00000080UL)){}; /* Confirm that XOSC clock is stable */
  /* (Mandatory for MPC5777C) */
  /* Bit 0-7:   SYSDIV unlocked (0), PLL0 input = XOSC (0), PLL1 input = XOSC (0), PERCLKSEL = SYSCLK (0)*/
  /* Bit 10-11: FMPERDIV = Divide_by_4 (bug->0b00, 0b01???) (FM_PER_CLK has to be lower than 100MHz! -> ATTENTION: bug description see below!) */
  /* Bit 14-15: PERDIV = Divide_by_4 (0b01) (has to be Sys_clk/4 for PIT timer calculation)*/
  /* Bit 16:    MCAN = XOSC (0)*/
  /* Bit 18-19: SYSCLKSEL = PLL0 (0b11) */
  /* Bit 23-31: eTPUDiv = Divide_by_2 (0), SysClkDiv = Divide_by_1 (0b100), ProgressiveClockSwitch = disabled (0) */
  SIU_SYSCLK = 0x00013010;  /* ATTENTION: MPC5777C works only correct with FMPERDIV = 0b00 (Divide_by_2 -> FM_PER_CLK > 100MHz ?) !!!   */
                            /* But according to the manual the prescaler has to be at least FMPERDIV = 0b01 (Divide_by_4) -> 0x00113010 */
#  endif /*BRSHW_SIU_GROUP_B*/
#  if defined (BRSHW_OPMODES_GROUP_NONE)
  /* PLL0 mode changes are handled threw CLKCFG-field of PLL0CR, and not threw MC_ME mode entry module */
  //PLL0CR &= 0xFFFFFCFF; /* Set CLKCFG to 00b -> PLL off; power down pulse */
  while (!(PLL0SR & 0x00000004UL)){}; /* Confirm that PLL0 clock is stable */
#  endif /*BRSHW_OPMODES_GROUP_NONE*/
# endif /*BRSHW_FMPLL_GROUP_A*/

# if defined (BRSHW_FMPLL_GROUP_B)
  /* Route XOSC to the PLL's - IRC is default */
  CGM_AC5_SC = (uint32)0x01000000;  /* set auxiliary clock 5 (PLL reference clock) source: 8-40 MHz external crystal osc. (FXOSC) */
#  if (BRS_TIMEBASE_CLOCK != 160)
  #error "According to the MPC5748G Datasheet Rev. 2 the PLL must have the output frequency 160MHz!"
#  endif

#  if ((BRS_OSC_CLK < 8) || (BRS_OSC_CLK > 56) || ((BRS_OSC_CLK%8 != 0) && (BRS_OSC_CLK%10 != 0)))
  #error "The current PLL implementation only supports quartz frequencies which are multiples of 8 or 10 MHz and the quartz must be in the range of 8 - 56 MHz! PLL will have an undefined frequency!"
#  endif
#  if ((BRS_TIMEBASE_CLOCK < 75) || (BRS_TIMEBASE_CLOCK > 310) || (BRS_TIMEBASE_CLOCK%5 != 0)) && (BRS_OSC_CLK%10 == 0)
  #error "With the used quartz (divisible by 10MHz) the current PLL implementation only supports CPU frequencies in the range 75 - 310 MHz and which are multiples of 5 MHz! PLL will have an undefined frequency!"
#  elif (((BRS_TIMEBASE_CLOCK < 75) || ((BRS_TIMEBASE_CLOCK > 127) && (BRS_TIMEBASE_CLOCK < 150)) || (BRS_TIMEBASE_CLOCK > 254) || ((BRS_TIMEBASE_CLOCK >= 150) && (BRS_TIMEBASE_CLOCK <= 254) && (BRS_TIMEBASE_CLOCK%2 != 0))) && (BRS_OSC_CLK%8 == 0) && (BRS_OSC_CLK%10 != 0))
  #error "With the used quartz (divisible of 8MHz) the current PLL implementation only supports CPU frequencies in the range 75 - 127/150 - 254 MHz and which are multiples of 1/2 MHz! PLL will have an undefined frequency!"
#  endif

  /* CPU_FREQUENCY = (QUARTZ_FREQUENCY*MFD) / (PREDIV * (2^(RFDPHI-1)) *4) */
  /* Don't trust the datasheet.... the Out Divider is 4*(2^(RFDPHI-1)) */
#  if (BRS_OSC_CLK%10 == 0)
  #define PREDIV  BRS_OSC_CLK/10
  #define MFD     BRS_TIMEBASE_CLOCK*4*1/10
  #define RFDPHI  1                              /* /4*1 */
#  elif (BRS_OSC_CLK%8 == 0)
  #define PREDIV  BRS_OSC_CLK/8
  #define MFD     BRS_TIMEBASE_CLOCK
  #define RFDPHI  2                              /* /4*2 */
#  endif

  PLL0DV =
  (0x4    <<27U) | /* Bit 1-4: RFDPHI1: 0x4 = Divider for PHI1 output clock (not used but 0x0 is not allowed!) */
  (RFDPHI <<16U) | /* Bit 10-15: Divider for PHI output clock (0x00 -> invalid,0x1 ->2,0x2->4,0x3->6,...,0x3f->126) */
  (PREDIV <<12U) | /* Bit 17-19: Input clock pre-divider (0x0-> Clock inhibit,0x1->1,...,0x7->7) */
  (MFD    <<0U);   /* Bit 25-31: Loop multiplication factor divider (0x00-0x07->invalid ,0x08 -> 8,0x09 -> 9,...,0x7f ->127 */

  PLLCAL3 = 0x09c3c000;
  PLLFD = 0x40000000; /* SMDEN=1 (to disable SDM...) */
# endif /*BRSHW_FMPLL_GROUP_B*/

  BrsHwSwitchRunMode();
#endif /*!VGEN_ENABLE_DRVMCU*/
}

#if !defined (VGEN_ENABLE_DRVPORT)
/*******************************************************************************
  Port Pin initialization helper functions for usage of BrsHw_Ports.h
********************************************************************************/
/*****************************************************************************/
/**
 * @brief      This function configures a port pin as input pin.
 * @pre        Port pin configuartions available within BrsHw_Ports.h and
 *             no DrvPort used for port pin initialization.
 * @param[in]  p - brsHw_Port_PortType, to be initialized.
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsHwPortInitPowerOn() and
 *             BrsHwEvaBoardInitPowerOn() locally.
 */
/*****************************************************************************/
void BrsHwInitPortInput(brsHw_Port_PortType p, brsHw_Port_MultiplexedType m)
{
#if defined (BRSHW_SIU_GROUP_B)
  SIU_MSCR((p.muxMSCRValue)) |= BRSHW_PCR_PIN_ASSIGNMENT_GPIO_INPUT; /* Very Strong drive, Push-pull */
  if ((m.muxIMUXValue) <= 12)
  {
    switch(m.muxMUXSEL)
    {
      case BRSHW_PORT_SIUL_MUXSEL_0:
        SIU_IMUX((m.muxIMUXValue)) &= (0xFFFFFFFC);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 0);
        break;
      case BRSHW_PORT_SIUL_MUXSEL_1:
        SIU_IMUX((m.muxIMUXValue)) &= (0xFFFFFFF3);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 2);
        break;
      case BRSHW_PORT_SIUL_MUXSEL_2:
        SIU_IMUX((m.muxIMUXValue)) &= (0xFFFFFFCF);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 4);
        break;
      case BRSHW_PORT_SIUL_MUXSEL_3:
        SIU_IMUX((m.muxIMUXValue)) &= (0xFFFFFF3F);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 6);
        break;
      case BRSHW_PORT_SIUL_MUXSEL_4:
        SIU_IMUX((m.muxIMUXValue)) &= (0xFFFFFCFF);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 8);
      case BRSHW_PORT_SIUL_MUXSEL_5:
        SIU_IMUX((m.muxIMUXValue)) &= (0xFFFFF3FF);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 10);
        break;
      case BRSHW_PORT_SIUL_MUXSEL_6:
        SIU_IMUX((m.muxIMUXValue)) &= (0xFFFFCFFF);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 12);
        break;
      case BRSHW_PORT_SIUL_MUXSEL_7:
        SIU_IMUX((m.muxIMUXValue)) &= (0xFFFF3FFF);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 14);
        break;
      case BRSHW_PORT_SIUL_MUXSEL_8:
        SIU_IMUX((m.muxIMUXValue)) &= (0xFFFCFFFF);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 16);
        break;
      case BRSHW_PORT_SIUL_MUXSEL_9:
        SIU_IMUX((m.muxIMUXValue)) &= (0xFFF3FFFF);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 18);
        break;          
      case BRSHW_PORT_SIUL_MUXSEL_10:
        SIU_IMUX((m.muxIMUXValue)) &= (0xFFCFFFFF);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 20);
        break;          
      case BRSHW_PORT_SIUL_MUXSEL_11:
        SIU_IMUX((m.muxIMUXValue)) &= (0xFF3FFFFF);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 22);
        break;
      case BRSHW_PORT_SIUL_MUXSEL_12:
        SIU_IMUX((m.muxIMUXValue)) &= (0xFCFFFFFF);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 24);
        break;
      case BRSHW_PORT_SIUL_MUXSEL_13:
        SIU_IMUX((m.muxIMUXValue)) &= (0xF3FFFFFF);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 26);
        break;          
      case BRSHW_PORT_SIUL_MUXSEL_14:
        SIU_IMUX((m.muxIMUXValue)) &= (0xCFFFFFFF);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 28);
        break;
      case BRSHW_PORT_SIUL_MUXSEL_15:
        SIU_IMUX((m.muxIMUXValue)) &= (0x3FFFFFFF);
        SIU_IMUX((m.muxIMUXValue)) |=  ((m.muxMultiplexedAlternative) << 30);
        break;
    }
  }

#elif defined (BRSHW_SIU_GROUP_D_2)
  if((p.portSIUL) == BRSHW_PORT_SIUL_A)
  {
    SIU_MSCR((p.muxMSCRValue)) |= BRSHW_PCR_PIN_ASSIGNMENT_GPIO_INPUT; /* Very Strong drive, Push-pull */
    SIU_MSCR((m.muxMSCRValue)) |= (m.muxMultiplexedAlternative); /* Source Signal Select */
  }
  else
  {
    SIU_B_MSCR((p.muxMSCRValue)) |= BRSHW_PCR_PIN_ASSIGNMENT_GPIO_INPUT; /* Very Strong drive, Push-pull */
    SIU_B_MSCR((m.muxMSCRValue)) |= (m.muxMultiplexedAlternative); /* Source Signal Select */
  }

#else
  SIU_MSCR((p.portGroup * 16 + p.portNumber)) |= BRSHW_PCR_PIN_ASSIGNMENT_GPIO_INPUT; /* Enables the input buffer */
# if defined (BRSHW_SIU_GROUP_A)
  SIU_IMCR((m.muxIMCRValue)) |= (m.muxMultiplexedAlternative);
# else
  SIU_MSCR((m.muxMSCRValue)) |= (m.muxMultiplexedAlternative);
# endif
#endif /*BRSHW_SIU_GROUP_x*/
}

/*****************************************************************************/
/**
 * @brief      This function configures a port pin as output pin.
 * @pre        Port pin configuartions available within BrsHw_Ports.h and
 *             no DrvPort used for port pin initialization.
 * @param[in]  p - brsHw_Port_PortType, to be initialized.
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsHwPortInitPowerOn() and
 *             BrsHwEvaBoardInitPowerOn() locally.
 */
/*****************************************************************************/
void BrsHwInitPortOutput(brsHw_Port_PortType p)
{
#if defined (BRSHW_SIU_GROUP_B)
  SIU_MSCR((p.muxMSCRValue)) |= BRSHW_PCR_PIN_ASSIGNMENT_GPIO_OUTPUT; /* Very Strong drive, Push-pull*/
  SIU_MSCR((p.muxMSCRValue)) |= (p.muxMultiplexedAlternative); /* Source Signal Select */

#elif defined (BRSHW_SIU_GROUP_D_2)
  if((p.portSIUL) == BRSHW_PORT_SIUL_A)
  {
    SIU_MSCR((p.muxMSCRValue)) |= BRSHW_PCR_PIN_ASSIGNMENT_GPIO_OUTPUT; /* Very Strong drive, Push-pull */
    SIU_MSCR((p.muxMSCRValue)) |= (p.muxMultiplexedAlternative); /* Source Signal Select */
  }
  else
  {
    SIU_B_MSCR((p.muxMSCRValue)) |= BRSHW_PCR_PIN_ASSIGNMENT_GPIO_OUTPUT; /* Very Strong drive, Push-pull */
    SIU_B_MSCR((p.muxMSCRValue)) |= (p.muxMultiplexedAlternative); /* Source Signal Select */
  }

#else
  SIU_MSCR((p.portGroup * 16 + p.portNumber)) |= BRSHW_PCR_PIN_ASSIGNMENT_GPIO_OUTPUT; /* Very Strong drive, Push-pull */
  SIU_MSCR((p.portGroup * 16 + p.portNumber)) |= (p.portAlternative); /* Source Signal Select */
#endif /*BRSHW_SIU_GROUP_x*/
}

/*****************************************************************************/
/**
 * @brief      This function configures the port pin configuration registers
 *             (pull-up, pull-down)
 * @pre        Port pin configuartions available within BrsHw_Ports.h and
 *             no DrvPort used for port pin initialization.
 * @param[in]  p - brsHw_Port_PortType, to be initialized,
 *             n - brsHw_Port_ConfType, for port pin configuration
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsHwPortInitPowerOn() and
 *             BrsHwEvaBoardInitPowerOn() locally.
 */
/*****************************************************************************/
void BrsHwInitPortConfig(brsHw_Port_PortType p, brsHw_Port_ConfType n)
{
#if defined (BRSHW_SIU_GROUP_B)
  if ((n.PortPullOption) == PORT_PULL_UP_ENABLED)
  {
    SIU_MSCR((p.muxMSCRValue)) &= (0xFFFCFFFF);
    SIU_MSCR((p.muxMSCRValue)) |= (3 << 16);
  }
  else if ((n.PortPullOption) == PORT_PULL_DOWN_ENABLED)
  {
    SIU_MSCR((p.muxMSCRValue)) &= (0xFFFCFFFF);
    SIU_MSCR((p.muxMSCRValue)) |= (1 << 16);
  }
  else
  {
    SIU_MSCR((p.muxMSCRValue)) &= (0xFFFCFFFF);
  }
#endif
}

# if defined (BRS_ENABLE_FBL_SUPPORT)
  #define BRS_START_SEC_RAM_CODE
  #include "Brs_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_19.1 */
# endif
/*****************************************************************************/
/**
 * @brief      This function sets the output level of a port pin.
 * @pre        Port pin configuartions available within BrsHw_Ports.h,
 *             no DrvPort used for port pin initialization and
 *             transferred port pin has to be initialized as output pin with
 *             GPIO functionality.
 * @param[in]  p     - brsHw_Port_PortType, to be set,
 *             Level - level, port pin has to be set to
 *                     (BRSHW_PORT_LOGIC_LOW or BRSHW_PORT_LOGIC_HIGH).
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsHwPortInitPowerOn(),
 *             BrsHwEvaBoardInitPowerOn(), BrsHw_WriteDio_TCM_SDA_OUT() and
 *             BrsHw_WriteDio_TCM_CLK_OUT() locally.
 */
/*****************************************************************************/
void BrsHwPort_SetLevel(brsHw_Port_PortType p, uint8 Level)
{
  if (Level != BRSHW_PORT_LOGIC_LOW)
  {
#if defined (BRSHW_SIU_GROUP_B) || defined (BRSHW_SIU_GROUP_D_2)
    SIU_GPDO((p.muxMSCRValue)) = BRSHW_PORT_LOGIC_HIGH; /* set port-pin-level to logic high */
#else
    SIU_GPDO((p.portGroup * 16 + p.portNumber)) = BRSHW_PORT_LOGIC_HIGH; /* set port-pin-level to logic high */
#endif
  }
  else
  {
#if defined (BRSHW_SIU_GROUP_B) || defined (BRSHW_SIU_GROUP_D_2)
    SIU_GPDO((p.muxMSCRValue)) = BRSHW_PORT_LOGIC_LOW; /* set port-pin-level to logic low */
#else
    SIU_GPDO((p.portGroup * 16 + p.portNumber)) = BRSHW_PORT_LOGIC_LOW; /* set port-pin-level to logic low */
#endif
  }
}
# if defined (BRS_ENABLE_FBL_SUPPORT)
  #define BRS_STOP_SEC_RAM_CODE
  #include "Brs_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_19.1 */
# endif

/*****************************************************************************/
/**
 * @brief      This function reads the input level of a port pin.
 * @pre        Port pin configuartions available within BrsHw_Ports.h,
 *             no DrvPort used for port pin initialization and
 *             transferred port pin has to be initialized as input pin with
 *             GPIO functionality.
 * @param[in]  p - brsHw_Port_PortType, to be read.
 * @param[out] -
 * @return     Level, read from port pin
 *             (BRSHW_PORT_LOGIC_LOW or BRSHW_PORT_LOGIC_HIGH).
 * @context    Function is called from BrsHw_WriteDio_TCM_SDA_OUT() and
 *             BrsHw_WriteDio_TCM_CLK_OUT() locally.
 */
/*****************************************************************************/
uint8 BrsHwPort_GetLevel(brsHw_Port_PortType p)
{
  uint32 temp;
#if defined (BRSHW_SIU_GROUP_B) || defined (BRSHW_SIU_GROUP_D_2)
  temp = SIU_GPDI((p.muxMSCRValue));
#else
  temp = SIU_GPDI((p.portGroup*16 + p.portNumber));
#endif

  if(temp != 0x00000000)
  {
    return BRSHW_PORT_LOGIC_HIGH;
  }
  else
  {
    return BRSHW_PORT_LOGIC_LOW;
  }
}

# if defined (BRS_ENABLE_TCM_SUPPORT)
/*******************************************************************************
  TCM Write Functions
********************************************************************************/
void BrsHw_WriteDio_TCM_SDA_OUT(uint8 Level)
{
  BrsHwPort_SetLevel(BRSHW_PORT_TCM_SDA_OUT, Level);
}

void BrsHw_WriteDio_TCM_CLK_OUT(uint8 Level)
{
  BrsHwPort_SetLevel(BRSHW_PORT_TCM_CLK_OUT, Level);
}

/*******************************************************************************
  TCM Read Functions
********************************************************************************/
uint8 BrsHw_ReadDio_TCM_SDA_IN(void)
{
  return BrsHwPort_GetLevel(BRSHW_PORT_TCM_SDA_IN);
}

uint8 BrsHw_ReadDio_TCM_CLK_IN(void)
{
  return BrsHwPort_GetLevel(BRSHW_PORT_TCM_CLK_IN);
}
# endif /*BRS_ENABLE_TCM_SUPPORT*/
#endif /*!VGEN_ENABLE_DRVPORT*/

/*****************************************************************************/
/**
 * @brief      This function has to be used to initialize the used ports.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from main@BrsMain or EcuM at power on initialization
 */
/*****************************************************************************/
void BrsHwPortInitPowerOn(void)
{
#if defined (VGEN_ENABLE_DRVPORT)
# if defined (BRS_ENABLE_SUPPORT_LEDS)          || \
     defined (BRS_ENABLE_SUPPORT_TOGGLE_WD_PIN) || \
     defined (BRS_ENABLE_SUPPORT_TOGGLE_CUSTOM_PIN)
  #error "Configure the valid toggle pins within your DrvPort config. Or disable the depending BRS mechanism."*/
# endif

#else
# if defined (BRS_ENABLE_SUPPORT_LEDS)
  BrsHwInitPortOutput(BRSHW_PORT_LED);

  /* Set LED on EVB demo board to show the system is alive */
  BrsHwTogglePin(BRSHW_TOGGLEPIN_LED);
# endif /*BRS_ENABLE_SUPPORT_LEDS*/

# if defined (BRS_ENABLE_SUPPORT_TOGGLE_WD_PIN)
  BrsHwInitPortOutput(BRSHW_PORT_TOGGLE_WD);
# endif

# if defined (BRS_ENABLE_SUPPORT_TOGGLE_CUSTOM_PIN)
  BrsHwInitPortOutput(BRSHW_PORT_TOGGLE_CUSTOM);
# endif

# if defined (BRS_ENABLE_TCM_SUPPORT)
  BrsHwInitPortOutput(BRSHW_PORT_TCM_CLK_OUT);
  BrsHwInitPortOutput(BRSHW_PORT_TCM_SDA_OUT);
  BrsHwInitPortInput(BRSHW_PORT_TCM_SDA_IN, BRSHW_PORT_MUX_TCM_SDA_IN);
  BrsHwInitPortInput(BRSHW_PORT_TCM_CLK_IN, BRSHW_PORT_MUX_TCM_CLK_IN);
#  if defined (BRSHW_USE_TCM_EXT_IRQ)
  BrsHwInitPortInput(BRSHW_PORT_TCM_INTA_IN, BRSHW_PORT_MUX_TCM_INTA_IN);
  BrsHwInitPortInput(BRSHW_PORT_TCM_INTB_IN, BRSHW_PORT_MUX_TCM_INTB_IN);
#  endif
# endif /*BRS_ENABLE_TCM_SUPPORT*/

/*******************************************************************************
  CAN driver
********************************************************************************/
# if defined (VGEN_ENABLE_CAN_DRV)
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_0)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_0, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_0);
#  endif
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_1)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_1, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_1);
#  endif
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_2)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_2, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_2);
#  endif
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_3)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_3, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_3);
#  endif
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_4)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_4, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_4);
#  endif
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_5)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_5, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_5);
#  endif
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_6)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_6, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_6);
#  endif
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_7)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_7, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_7);
#  endif
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_8)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_8, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_8);
#  endif
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_9)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_9, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_9);
#  endif
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_10)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_10, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_10);
#  endif
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_11)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_11, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_11);
#  endif
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_12)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_12, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_12);
#  endif
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_13)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_13, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_13);
#  endif
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_14)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_14, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_14);
#  endif
#  if defined (_BRSHW_PORT_CAN_WAKEUP_IRQ_15)
  BrsHwInitPortInput(BRSHW_PORT_CAN_WAKEUP_IRQ_15, BRSHW_PORT_MUX_CAN_WAKEUP_IRQ_15);
#  endif

#  if defined (kCanPhysToLogChannelIndex_0)
  BrsHwInitPortOutput(BRSHW_PORT_CAN0_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN0_RX, BRSHW_PORT_MUX_CAN0_RX);
#   if defined(_BRSHW_PORT_CAN0_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_CAN0_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN0_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#   if defined (_BRSHW_PORT_CAN0_TRCV_EN)
  BrsHwInitPortOutput(BRSHW_PORT_CAN0_TRCV_EN);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN0_TRCV_EN, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*kCanPhysToLogChannelIndex_0*/

#  if defined (kCanPhysToLogChannelIndex_1)
  BrsHwInitPortOutput(BRSHW_PORT_CAN1_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN1_RX, BRSHW_PORT_MUX_CAN1_RX);
#   if defined(_BRSHW_PORT_CAN1_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_CAN1_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN1_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#   if defined (_BRSHW_PORT_CAN1_TRCV_EN)
  BrsHwInitPortOutput(BRSHW_PORT_CAN1_TRCV_EN);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN1_TRCV_EN, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*kCanPhysToLogChannelIndex_1*/

#  if defined (kCanPhysToLogChannelIndex_2)
  BrsHwInitPortOutput(BRSHW_PORT_CAN2_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN2_RX, BRSHW_PORT_MUX_CAN2_RX);
#   if defined(_BRSHW_PORT_CAN2_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_CAN2_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN2_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#   if defined (_BRSHW_PORT_CAN2_TRCV_EN)
  BrsHwInitPortOutput(BRSHW_PORT_CAN2_TRCV_EN);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN2_TRCV_EN, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*kCanPhysToLogChannelIndex_2*/

#  if defined (kCanPhysToLogChannelIndex_3)
  BrsHwInitPortOutput(BRSHW_PORT_CAN3_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN3_RX, BRSHW_PORT_MUX_CAN3_RX);
#   if defined(_BRSHW_PORT_CAN3_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_CAN3_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN3_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#   if defined (_BRSHW_PORT_CAN3_TRCV_EN)
  BrsHwInitPortOutput(BRSHW_PORT_CAN3_TRCV_EN);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN3_TRCV_EN, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*kCanPhysToLogChannelIndex_3*/

#  if defined (kCanPhysToLogChannelIndex_4)
  BrsHwInitPortOutput(BRSHW_PORT_CAN4_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN4_RX, BRSHW_PORT_MUX_CAN4_RX);
#   if defined(_BRSHW_PORT_CAN4_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_CAN4_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN4_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#    if defined (_BRSHW_PORT_CAN4_TRCV_EN)
  BrsHwInitPortOutput(BRSHW_PORT_CAN4_TRCV_EN);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN4_TRCV_EN, BRSHW_PORT_LOGIC_HIGH);
#    endif
#  endif /*kCanPhysToLogChannelIndex_4*/

#  if defined (kCanPhysToLogChannelIndex_5)
  BrsHwInitPortOutput(BRSHW_PORT_CAN5_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN5_RX, BRSHW_PORT_MUX_CAN5_RX);
#   if defined(_BRSHW_PORT_CAN5_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_CAN5_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN5_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#    if defined (_BRSHW_PORT_CAN5_TRCV_EN)
  BrsHwInitPortOutput(BRSHW_PORT_CAN5_TRCV_EN);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN5_TRCV_EN, BRSHW_PORT_LOGIC_HIGH);
#    endif
#  endif /*kCanPhysToLogChannelIndex_5*/

#  if defined (kCanPhysToLogChannelIndex_6)
  BrsHwInitPortOutput(BRSHW_PORT_CAN6_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN6_RX, BRSHW_PORT_MUX_CAN6_RX);
#   if defined(_BRSHW_PORT_CAN6_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_CAN6_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN6_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#   if defined (_BRSHW_PORT_CAN6_TRCV_EN)
  BrsHwInitPortOutput(BRSHW_PORT_CAN6_TRCV_EN);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN6_TRCV_EN, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*kCanPhysToLogChannelIndex_6*/

#  if defined (kCanPhysToLogChannelIndex_7)
  BrsHwInitPortOutput(BRSHW_PORT_CAN7_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN7_RX, BRSHW_PORT_MUX_CAN7_RX);
#   if defined(_BRSHW_PORT_CAN7_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_CAN7_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN7_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#   if defined (_BRSHW_PORT_CAN7_TRCV_EN)
  BrsHwInitPortOutput(BRSHW_PORT_CAN7_TRCV_EN);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN7_TRCV_EN, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*kCanPhysToLogChannelIndex_7*/

#  if defined (kCan_30_McanPhysToLogChannelIndex_0)
  BrsHwInitPortOutput(BRSHW_PORT_CAN0_SECOND_CANCELL_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN0_SECOND_CANCELL_RX, BRSHW_PORT_MUX_CAN0_SECOND_CANCELL_RX);
#   if defined(_BRSHW_PORT_CAN0_TRCV_SECOND_CANCELL_STB)
  BrsHwInitPortOutput(BRSHW_PORT_CAN0_TRCV_SECOND_CANCELL_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN0_TRCV_SECOND_CANCELL_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#   if defined (_BRSHW_PORT_CAN0_TRCV_SECOND_CANCELL_EN)
  BrsHwInitPortOutput(BRSHW_PORT_CAN0_TRCV_SECOND_CANCELL_EN);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN0_TRCV_SECOND_CANCELL_EN, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*kCan_30_McanPhysToLogChannelIndex_0*/

#  if defined (kCan_30_McanPhysToLogChannelIndex_1)
  BrsHwInitPortOutput(BRSHW_PORT_CAN1_SECOND_CANCELL_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN1_SECOND_CANCELL_RX, BRSHW_PORT_MUX_CAN1_SECOND_CANCELL_RX);
#   if defined(_BRSHW_PORT_CAN1_TRCV_SECOND_CANCELL_STB)
  BrsHwInitPortOutput(BRSHW_PORT_CAN1_TRCV_SECOND_CANCELL_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN1_TRCV_SECOND_CANCELL_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#   if defined (_BRSHW_PORT_CAN1_TRCV_SECOND_CANCELL_EN)
  BrsHwInitPortOutput(BRSHW_PORT_CAN1_TRCV_SECOND_CANCELL_EN);
  BrsHwPort_SetLevel(BRSHW_PORT_CAN1_TRCV_SECOND_CANCELL_EN, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*kCan_30_McanPhysToLogChannelIndex_0*/
# endif /*VGEN_ENABLE_CAN_DRV*/

/*******************************************************************************
  LIN driver
********************************************************************************/
# if defined (VGEN_ENABLE_LIN_DRV)
#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_0)
  BrsHwInitPortOutput(BRSHW_PORT_LIN0_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN0_RX, BRSHW_PORT_MUX_LIN0_RX);
#   if defined(_BRSHW_PORT_CONF_LIN)
  BrsHwInitPortConfig(BRSHW_PORT_LIN0_RX, BRSHW_PORT_CONF_LIN);
#   endif
#   if defined(_BRSHW_PORT_LIN0_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_LIN0_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_LIN0_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*LIN_ENABLE_HARDWARE_INTERFACE_0*/

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_1)
  BrsHwInitPortOutput(BRSHW_PORT_LIN1_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN1_RX, BRSHW_PORT_MUX_LIN1_RX);
#   if defined(_BRSHW_PORT_CONF_LIN)
  BrsHwInitPortConfig(BRSHW_PORT_LIN1_RX, BRSHW_PORT_CONF_LIN);
#   endif
#   if defined(_BRSHW_PORT_LIN1_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_LIN1_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_LIN1_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*LIN_ENABLE_HARDWARE_INTERFACE_1*/

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_2)
  BrsHwInitPortOutput(BRSHW_PORT_LIN2_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN2_RX, BRSHW_PORT_MUX_LIN2_RX);
#   if defined(_BRSHW_PORT_CONF_LIN)
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_RX, BRSHW_PORT_CONF_LIN);
#   endif
#   if defined(_BRSHW_PORT_LIN2_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_LIN2_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_LIN2_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*LIN_ENABLE_HARDWARE_INTERFACE_2*/

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_3)
  BrsHwInitPortOutput(BRSHW_PORT_LIN3_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN3_RX, BRSHW_PORT_MUX_LIN3_RX);
#   if defined(_BRSHW_PORT_CONF_LIN)
  BrsHwInitPortConfig(BRSHW_PORT_LIN3_RX, BRSHW_PORT_CONF_LIN);
#   endif
#   if defined(_BRSHW_PORT_LIN3_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_LIN3_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_LIN3_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*LIN_ENABLE_HARDWARE_INTERFACE_3*/

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_4)
  BrsHwInitPortOutput(BRSHW_PORT_LIN4_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN4_RX, BRSHW_PORT_MUX_LIN4_RX);
#   if defined(_BRSHW_PORT_CONF_LIN)
  BrsHwInitPortConfig(BRSHW_PORT_LIN4_RX, BRSHW_PORT_CONF_LIN);
#   endif
#   if defined(_BRSHW_PORT_LIN4_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_LIN4_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_LIN4_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*LIN_ENABLE_HARDWARE_INTERFACE_4*/

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_5)
  BrsHwInitPortOutput(BRSHW_PORT_LIN5_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN5_RX, BRSHW_PORT_MUX_LIN5_RX);
#   if defined(_BRSHW_PORT_CONF_LIN)
  BrsHwInitPortConfig(BRSHW_PORT_LIN5_RX, BRSHW_PORT_CONF_LIN);
#   endif
#   if defined(_BRSHW_PORT_LIN5_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_LIN5_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_LIN5_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*LIN_ENABLE_HARDWARE_INTERFACE_5*/

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_6)
  BrsHwInitPortOutput(BRSHW_PORT_LIN6_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN6_RX, BRSHW_PORT_MUX_LIN6_RX);
#   if defined(_BRSHW_PORT_CONF_LIN)
  BrsHwInitPortConfig(BRSHW_PORT_LIN6_RX, BRSHW_PORT_CONF_LIN);
#   endif
#   if defined(_BRSHW_PORT_LIN6_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_LIN6_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_LIN6_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*LIN_ENABLE_HARDWARE_INTERFACE_6*/

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_7)
  BrsHwInitPortOutput(BRSHW_PORT_LIN7_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN7_RX, BRSHW_PORT_MUX_LIN7_RX);
#   if defined(_BRSHW_PORT_CONF_LIN)
  BrsHwInitPortConfig(BRSHW_PORT_LIN7_RX, BRSHW_PORT_CONF_LIN);
#   endif
#   if defined(_BRSHW_PORT_LIN7_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_LIN7_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_LIN7_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*LIN_ENABLE_HARDWARE_INTERFACE_7*/

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_8)
  BrsHwInitPortOutput(BRSHW_PORT_LIN8_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN8_RX, BRSHW_PORT_MUX_LIN8_RX);
#   if defined(_BRSHW_PORT_CONF_LIN)
  BrsHwInitPortConfig(BRSHW_PORT_LIN8_RX, BRSHW_PORT_CONF_LIN);
#   endif
#   if defined(_BRSHW_PORT_LIN8_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_LIN8_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_LIN8_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*LIN_ENABLE_HARDWARE_INTERFACE_8*/

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_9)
  BrsHwInitPortOutput(BRSHW_PORT_LIN9_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN9_RX, BRSHW_PORT_MUX_LIN9_RX);
#   if defined(_BRSHW_PORT_CONF_LIN)
  BrsHwInitPortConfig(BRSHW_PORT_LIN9_RX, BRSHW_PORT_CONF_LIN);
#   endif
#   if defined(_BRSHW_PORT_LIN9_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_LIN9_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_LIN9_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*LIN_ENABLE_HARDWARE_INTERFACE_9*/
# endif /*VGEN_ENABLE_LIN_DRV*/

/*******************************************************************************
  FLEXRAY driver
********************************************************************************/
# if defined (VGEN_ENABLE_DRVFR__BASEASR)
#  if (FR_CHANNEL_A_USED == STD_ON)
  BrsHwInitPortOutput(BRSHW_PORT_FR0A_TX);
  BrsHwInitPortInput(BRSHW_PORT_FR0A_RX, BRSHW_PORT_MUX_FR0A_RX);
  BrsHwInitPortOutput(BRSHW_PORT_FR0A_TXEN);
  /*BrsHwInitPortInput(BRSHW_PORT_FR0A_ERRNA); ERRNA-Pin not necessary on this platform*/
#   if defined(_BRSHW_PORT_FR0A_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_FR0A_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_FR0A_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#   if defined (_BRSHW_PORT_FR0A_TRCV_EN)
  BrsHwInitPortOutput(BRSHW_PORT_FR0A_TRCV_EN);
  BrsHwPort_SetLevel(BRSHW_PORT_FR0A_TRCV_EN, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*FR_CHANNEL_A_USED*/

#  if (FR_CHANNEL_B_USED == STD_ON)
  BrsHwInitPortOutput(BRSHW_PORT_FR0B_TX);
  BrsHwInitPortInput(BRSHW_PORT_FR0B_RX, BRSHW_PORT_MUX_FR0B_RX);
  BrsHwInitPortOutput(BRSHW_PORT_FR0B_TXEN);
  /*BrsHwInitPortInput(BRSHW_PORT_FR0B_ERRNA); ERRNA-Pin not necessary on this platform */
#   if defined(_BRSHW_PORT_FR0B_TRCV_STB)
  BrsHwInitPortOutput(BRSHW_PORT_FR0B_TRCV_STB);
  BrsHwPort_SetLevel(BRSHW_PORT_FR0B_TRCV_STB, BRSHW_PORT_LOGIC_HIGH);
#   endif
#   if defined (_BRSHW_PORT_FR0B_TRCV_EN)
  BrsHwInitPortOutput(BRSHW_PORT_FR0B_TRCV_EN);
  BrsHwPort_SetLevel(BRSHW_PORT_FR0B_TRCV_EN, BRSHW_PORT_LOGIC_HIGH);
#   endif
#  endif /*FR_CHANNEL_B_USED*/
# endif /*VGEN_ENABLE_DRVFR__BASEASR*/

/*******************************************************************************
  ETHERNET driver
********************************************************************************/
# if defined (VGEN_ENABLE_DRVETH__BASEASR)
  /* -- Transmitter signals -- */
  BrsHwInitPortInput(BRSHW_PORT_ETH0_REFCLK, BRSHW_PORT_MUX_ETH0_REFCLK);
  BrsHwInitPortOutput(BRSHW_PORT_ETH0_TXD0);
  BrsHwInitPortOutput(BRSHW_PORT_ETH0_TXD1);
#  if defined (_BRSHW_PORT_ETH0_TXD2)
  /* Transmit signal 2 is obsolete within RMII */
  BrsHwInitPortOutput(BRSHW_PORT_ETH0_TXD2);
#  endif
#  if defined (_BRSHW_PORT_ETH0_TXD3)
  /* Transmit signal 3 is obsolete within RMII */
  BrsHwInitPortOutput(BRSHW_PORT_ETH0_TXD3);
#  endif
  BrsHwInitPortOutput(BRSHW_PORT_ETH0_TXEN);
#  if defined (_BRSHW_PORT_ETH0_TXER)
  /* Transmit Error signal is only optional within MII and obsolete within RMII */
  BrsHwInitPortOutput(BRSHW_PORT_ETH0_TXER);
#  endif
#  if defined (_BRSHW_PORT_ETH0_RXER)
  BrsHwInitPortInput(BRSHW_PORT_ETH0_RXER, BRSHW_PORT_MUX_ETH0_RXER);
#  endif

  /* -- Receiver signals -- */
#  if defined (_BRSHW_PORT_ETH0_RXCLK)
  /* Receive clock signal is obsolete within RMII */
  BrsHwInitPortInput(BRSHW_PORT_ETH0_RXCLK, BRSHW_PORT_MUX_ETH0_RXCLK);
#  endif
  BrsHwInitPortInput(BRSHW_PORT_ETH0_RXD0, BRSHW_PORT_MUX_ETH0_RXD0);
  BrsHwInitPortInput(BRSHW_PORT_ETH0_RXD1, BRSHW_PORT_MUX_ETH0_RXD1);
#  if defined (_BRSHW_PORT_ETH0_RXD2)
  /* Receive signal 2 is obsolete within RMII */
  BrsHwInitPortInput(BRSHW_PORT_ETH0_RXD2, BRSHW_PORT_MUX_ETH0_RXD2);
#  endif
#  if defined (_BRSHW_PORT_ETH0_RXD3)
  /* Receive signal 3 is obsolete within RMII */
  BrsHwInitPortInput(BRSHW_PORT_ETH0_RXD3, BRSHW_PORT_MUX_ETH0_RXD3);
#  endif
#  if defined (BRSHW_SIU_GROUP_E)
  BrsHwInitPortInput(BRSHW_PORT_ETH0_CRS, BRSHW_PORT_MUX_ETH0_CRS);
  BrsHwInitPortInput(BRSHW_PORT_ETH0_RXDV, BRSHW_PORT_MUX_ETH0_RXDV);
  BrsHwInitPortInput(BRSHW_PORT_ETH0_COL, BRSHW_PORT_MUX_ETH0_COL);
#  else
BrsHwInitPortInput(BRSHW_PORT_ETH0_CRSDV, BRSHW_PORT_MUX_ETH0_CRSDV);
#  endif
  /* -- Management signals -- */
  BrsHwInitPortInput(BRSHW_PORT_ETH0_MDIO, BRSHW_PORT_MUX_ETH0_MDIO);
  BrsHwInitPortOutput(BRSHW_PORT_ETH0_MDIO);
#  if defined (_BRSHW_PORT_ETH0_MDC)
  /* Management data clock not always needed */
  BrsHwInitPortOutput(BRSHW_PORT_ETH0_MDC);
#  endif

#  if defined (_BRSHW_PORT_ETH0_TRCV_EN)
  BrsHwInitPortInput(BRSHW_PORT_ETH0_TRCV_EN, BRSHW_PORT_MUX_ETH0_TRCV_EN);
  BrsHwPort_SetLevel(BRSHW_PORT_ETH0_TRCV_EN, BRSHW_PORT_LOGIC_HIGH);
#  endif
# endif /*VGEN_ENABLE_DRVETH__BASEASR*/

#endif /*!VGEN_ENABLE_DRVPORT*/
}

/* BrsHwTimeBaseInitPowerOn() and BrsHwTimeBaseInterrupt() removed by Organi, because of ALM attributes of project */

/*****************************************************************************/
/**
 * @brief      Disable the global system interrupt and initialize the INT
 *             lock handler variables.
 * @pre        Must be the first function call in main@BrsMain
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from main@BrsMain at power on initialization
 */
/*****************************************************************************/
void BrsHwDisableInterruptAtPowerOn(void)
{
  bBrsHwIntDiCounter = 0;

  asm(" wrteei 0"); /* Disable external interrupts */
}

/*****************************************************************************/
/**
 * @brief      Enable the global system interrupt the first time
 * @pre        Must be called after all initializations are done
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from main@BrsMain at power on initialization
 */
/*****************************************************************************/
void BrsHwEnableInterruptAtPowerOn(void)
{
  /* With OsGen7, OS-APIs have to be used for this */
  /*BrsHwConfigureInterruptsAtPowerOn();*/

  asm(" wrteei 1");
}

/*****************************************************************************/
/**
 * @brief      Disables the global interrupt of the micro. This is done in a
 *             "save way" to allow also nested calls of BrsHwDisableInterrupt
 *             and BrsHwRestoreInterrupt. The first call of BrsHwDisableInterrupt
 *             stores the current state of the global INT flag and the last
 *             call to BrsHwRestoreInterrupt restores the state.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from all modules to disable the global interrupt
 */
/*****************************************************************************/
void BrsHwDisableInterrupt(void)
{
  /* No check for "overrun" of nested INT lock counter is performed, due to more
  *  than 255 nested calls to BrsHwDisableInterrupt are very unlikely. */
  if (bBrsHwIntDiCounter == 0)
  {
    asm(" wrteei 0"); /* Disable external interrupts */
  }

  bBrsHwIntDiCounter++;
}

/*****************************************************************************/
/**
 * @brief      Restores the state of the global interrupt of the micro. This
 *             is done in a "save way" to allow also nested calls of
 *             BrsHwDisableInterrupt and BrsHwRestoreInterrupt. The first call
 *             of BrsHwDisableInterrupt stores the current state of the global
 *             INT flag and the last call to BrsHwRestoreInterrupt restores the
 *             state.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from all modules to enable the global interrupt
 */
/*****************************************************************************/
void BrsHwRestoreInterrupt(void)
{
  /* Check for illegal call of BrsHwRestoreInterrupt. If this function is called
   *  too often, the INT lock works incorrect. */
  if (bBrsHwIntDiCounter == 0)
  {
    /* Check is only performed, if no OS and no FBL are used */
  }

  bBrsHwIntDiCounter--;
  if (bBrsHwIntDiCounter == 0)
  {
    asm(" wrteei 1");
  }
}

/*****************************************************************************/
/**
 * @brief      restart ECU (issue a software reset or jump to startup code)
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from e.g. ECU state handling
 */
/*****************************************************************************/
void BrsHwSoftwareResetECU(void)
{
  BrsHwDisableInterrupt();

#if defined (BRSHW_SIU_GROUP_B)
  /* Derivatives, which do not contain Mode Entry Module for generating a reset, could generate an interanl system reaset via System Reset Control Register */
  SIU_SRCR |= 0x80000000;
#else
  /* Reset the functional reset escalation threshold register */
  RGM_FRET = RGM_FRET;

  /* Sequence that mode transition are mannaged by hardware */
  ME_MCTL = 0x00005AF0UL; /* Key access 1st step */
  ME_MCTL = 0x0000A50FUL; /* Key access 2nd step */
#endif

  while (1)
  {
    /* Wait until watchdog reset occurs */
  }
}

#if defined (BRS_ENABLE_SUPPORT_LEDS)          || \
    defined (BRS_ENABLE_SUPPORT_TOGGLE_WD_PIN) || \
    defined (BRS_ENABLE_SUPPORT_TOGGLE_CUSTOM_PIN)
# if defined (BRS_ENABLE_FBL_SUPPORT)
  #define BRS_START_SEC_RAM_CODE
  #include "Brs_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_19.1 */
# endif
/*****************************************************************************/
/**
 * @brief      This API is used to toggle a PortPin.
 *             Per default, the following parameters are available:
 *               BRSHW_TOGGLEPIN_LED
 *               BRSHW_TOGGLEPIN_WD
 *               BRSHW_TOGGLEPIN_CUSTOM
 *             Depending pins have to be configured within BrsHw_Ports.h.
 * @pre        -
 * @param[in]  Pin has to configure the depending pin to be toggled
 * @param[out] -
 * @return     -
 * @context    Function is called from all modules to set or clear a PortPin
 */
/*****************************************************************************/
void BrsHwTogglePin(brsHw_TogglePin Pin)
{
#if defined (VGEN_ENABLE_DRVDIO)
  #error "Configure the valid DioChannel for the toggle pins within your DrvDio config and set it as value for BrsHw_Dio_ToggleX_Channel. Or disable the depending BRS mechanism."*/
# if defined (BRS_ENABLE_SUPPORT_LEDS)
  Dio_ChannelType BrsHw_Dio_ToggleLED_Channel = DioConf_DioChannel_DioChannel_LED;
# endif
# if defined (BRS_ENABLE_SUPPORT_TOGGLE_WD_PIN)
  Dio_ChannelType BrsHw_Dio_ToggleWD_Channel = DioConf_DioChannel_DioChannel_WD;
# endif
# if defined (BRS_ENABLE_SUPPORT_TOGGLE_CUSTOM_PIN)
  Dio_ChannelType BrsHw_Dio_ToggleCUSTOM_Channel = DioConf_DioChannel_DioChannel_CUSTOM;
# endif
#endif /*VGEN_ENABLE_DRVDIO*/

#if defined (BRS_ENABLE_SUPPORT_LEDS)
  static uint8 BrsHw_ToggleSwitch_LED = BRSHW_PORT_LOGIC_HIGH;
#endif
#if defined (BRS_ENABLE_SUPPORT_TOGGLE_WD_PIN)
  static uint8 BrsHw_ToggleSwitch_WD = BRSHW_PORT_LOGIC_HIGH;
#endif
#if defined (BRS_ENABLE_SUPPORT_TOGGLE_CUSTOM_PIN)
  static uint8 BrsHw_ToggleSwitch_CUSTOM = BRSHW_PORT_LOGIC_HIGH;
#endif

  switch (Pin)
  {
#if defined (BRS_ENABLE_SUPPORT_LEDS)
    case BRSHW_TOGGLEPIN_LED:
# if defined (VGEN_ENABLE_DRVDIO)
      Dio_WriteChannel(BrsHw_Dio_ToggleLED_Channel, BrsHw_ToggleSwitch_LED & 0x01);
# else
      BrsHwPort_SetLevel(BRSHW_PORT_LED, BrsHw_ToggleSwitch_LED & 0x01);
# endif
      BrsHw_ToggleSwitch_LED++;
      break;
#endif /*BRS_ENABLE_SUPPORT_LEDS*/
#if defined (BRS_ENABLE_SUPPORT_TOGGLE_WD_PIN)
    case BRSHW_TOGGLEPIN_WD:
# if defined (VGEN_ENABLE_DRVDIO)
      Dio_WriteChannel(BrsHw_Dio_ToggleWD_Channel, BrsHw_ToggleSwitch_WD & 0x01);
# else
      BrsHwPort_SetLevel(BRSHW_PORT_TOGGLE_WD, BrsHw_ToggleSwitch_WD & 0x01);
# endif
      BrsHw_ToggleSwitch_WD++;
      break;
#endif /*BRS_ENABLE_SUPPORT_TOGGLE_WD_PIN*/
#if defined (BRS_ENABLE_SUPPORT_TOGGLE_CUSTOM_PIN)
    case BRSHW_TOGGLEPIN_CUSTOM:
# if defined (VGEN_ENABLE_DRVDIO)
      Dio_WriteChannel(BrsHw_Dio_ToggleCUSTOM_Channel, BrsHw_ToggleSwitch_CUSTOM & 0x01);
# else
      BrsHwPort_SetLevel(BRSHW_PORT_TOGGLE_CUSTOM, BrsHw_ToggleSwitch_CUSTOM & 0x01);
# endif
      BrsHw_ToggleSwitch_CUSTOM++;
      break;
#endif /*BRS_ENABLE_SUPPORT_TOGGLE_CUSTOM_PIN*/
    default:
      break;
  }
}
# if defined (BRS_ENABLE_FBL_SUPPORT)
  #define BRS_STOP_SEC_RAM_CODE
  #include "Brs_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_19.1 */
# endif
#endif /*BRS_ENABLE_SUPPORT_LEDS||BRS_ENABLE_SUPPORT_TOGGLE_WD_PIN||BRS_ENABLE_SUPPORT_TOGGLE_CUSTOM_PIN*/

/*****************************************************************************/
/**
 * @brief      This API is used for the BRS time measurement support to get a
 *             default time value for all measurements with this platform to
 *             be able to compare time measurements on different dates based
 *             on this time result.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from TimeMeasurement
 */
/*****************************************************************************/
void BrsHwTime100NOP(void)
{
  BrsHwDisableInterrupt();

  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();

  BrsHwRestoreInterrupt();
}

# if defined (BRSASR_ENABLE_SAFECTXSUPPORT)
/*****************************************************************/
/* WRAPPER FOR OLD DRVLIN IMPLEMENTATIONS (previous to MSR4 R11) */
/*****************************************************************/
# if defined (VGEN_ENABLE_LIN_DRV)
#  if !defined (Lin_GetHardwareBaseAdressOfChannelConfig)
  #define Lin_GetChannelConfigIdxOfChannelHw(ch) ch
  #define Lin_GetHardwareBaseAdressOfChannelConfig(ch) (uint32*)Lin_HardwareBaseAdress[ch]
#  endif
# endif
/*****************************************************************/
/* WRAPPER FOR OLD DRVCAN IMPLEMENTATIONS (previous to MSR4 R11) */
/*****************************************************************/
# if defined (VGEN_ENABLE_CAN_DRV)
#  if !defined (Can_HwChannelData)
  #define Can_HwChannelData CanHwChannelData
  #define BaseAddressOfHwChannelData CanBaseAddress
#  endif
# endif

/*****************************************************************************/
/**
 * @brief      This API is used to enable hardware access in untrusted mode
 * @pre        -
 * @param[in]  -MODE
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsAsrInitBsw
 */
/*****************************************************************************/
void BrsHw_EnableHwAccess(void)
{
# if defined (BRSHW_USERMODE_ACCESS_GROUP_A) || defined (BRSHW_USERMODE_ACCESS_GROUP_A1) || defined (BRSHW_USERMODE_ACCESS_GROUP_C)
  /* **************************************************** */
  /* UAA Bits of peripherals, to allow access in UserMode */
  /* **************************************************** */
  *((volatile uint32*)(SIU_BASE_ADDR + 0x3FFC)) = 0x00800000;   /* set UAA for Port to enable write to GPDO (SIUL) registers in UserMode */

#  if defined (BRSHW_TIMER_GROUP_A)
  *((volatile uint32*)(BRSHW_TIMER_GROUP_A + 0x3FFC)) = 0x00800000;   /* set UAA-bit for PIT to enable write in usermode */
#  elif defined (BRSHW_TIMER_GROUP_B)
  *((volatile uint32*)(EMIOS_BASE_ADDR + 0x3FFC)) = 0x00800000; /* set UAA-bit for eMIOS to enable write in usermode */
#  endif

#  if defined (VGEN_ENABLE_CAN_DRV)
#   if defined (kCanPhysToLogChannelIndex_0)
  *((volatile uint32*)(Can_HwChannelData[kCanPhysToLogChannelIndex_0].BaseAddressOfHwChannelData + 0x3FFC)) = 0x00800000; /* set UAA-bit for FlexCan channel 0 to enable write in usermode */
#   endif
#   if defined (kCanPhysToLogChannelIndex_1)
  *((volatile uint32*)(Can_HwChannelData[kCanPhysToLogChannelIndex_1].BaseAddressOfHwChannelData + 0x3FFC)) = 0x00800000; /* set UAA-bit for FlexCan channel 1 to enable write in usermode */
#   endif
#   if defined (kCanPhysToLogChannelIndex_2)
  *((volatile uint32*)(Can_HwChannelData[kCanPhysToLogChannelIndex_2].BaseAddressOfHwChannelData + 0x3FFC)) = 0x00800000; /* set UAA-bit for FlexCan channel 2 to enable write in usermode */
#   endif
#   if defined (kCanPhysToLogChannelIndex_3)
  *((volatile uint32*)(Can_HwChannelData[kCanPhysToLogChannelIndex_3].BaseAddressOfHwChannelData + 0x3FFC)) = 0x00800000; /* set UAA-bit for FlexCan channel 3 to enable write in usermode */
#   endif
#  endif /*VGEN_ENABLE_CAN_DRV*/

#  if defined (VGEN_ENABLE_LIN_DRV)
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_0)
  *((volatile uint32*)(Lin_GetHardwareBaseAdressOfChannelConfig(Lin_GetChannelConfigIdxOfChannelHw(0)) + 0x3FFC)) = 0x00800000; /* set UAA-bit for LinFlex0 to enable write in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_1)
  *((volatile uint32*)(Lin_GetHardwareBaseAdressOfChannelConfig(Lin_GetChannelConfigIdxOfChannelHw(1)) + 0x3FFC)) = 0x00800000; /* set UAA-bit for LinFlex1 to enable write in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_2)
  *((volatile uint32*)(Lin_GetHardwareBaseAdressOfChannelConfig(Lin_GetChannelConfigIdxOfChannelHw(2)) + 0x3FFC)) = 0x00800000; /* set UAA-bit for LinFlex2 to enable write in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_3)
  *((volatile uint32*)(Lin_GetHardwareBaseAdressOfChannelConfig(Lin_GetChannelConfigIdxOfChannelHw(3)) + 0x3FFC)) = 0x00800000; /* set UAA-bit for LinFlex3 to enable write in usermode */
#   endif
#  endif /*VGEN_ENABLE_LIN_DRV*/

#  if defined (VGEN_ENABLE_DRVFR__BASEASR)
  *((volatile uint32*)(FR_VCC_REG_START_ADDR + 0x3FFC)) = 0x00800000; /* set UAA-bit for FlexRay to enable write in usermode */
#  endif /*VGEN_ENABLE_DRVFR__BASEASR*/

#  if defined (VGEN_ENABLE_DRVETH__BASEASR)
  {
    /* ENET seems to require at least one supervisor mode access before accessing registers in user mode */
    volatile uint32 ENET_EIR_VALUE = ENET_EIR;
  }
  *((volatile uint32*)(ENET_BASE + 0x3FFC)) = 0x00800000; /* set UAA-bit for ENET to enable write in user mode */
#  endif /*VGEN_ENABLE_DRVETH__BASEASR*/

#  if defined (VGEN_ENABLE_DRVFLS)
  *((volatile uint32*)(FLASH0_BASE + 0x3FFC)) = 0x00800000; /* set UAA-bit for Flash0 to enable write in usermode */
#  endif /*VGEN_ENABLE_DRVFLS*/

#  if defined (VGEN_ENABLE_DRVSPI)
#   if defined (DSPI0_BASE)
  *((volatile uint32*)(DSPI0_BASE + 0x3FFC)) = 0x00800000; /* set UAA-bit for DSPI0 to enable write in usermode */
#   endif
  *((volatile uint32*)(DSPI1_BASE + 0x3FFC)) = 0x00800000; /* set UAA-bit for DSPI1 to enable write in usermode */
  *((volatile uint32*)(DSPI2_BASE + 0x3FFC)) = 0x00800000; /* set UAA-bit for DSPI2 to enable write in usermode */
#   if defined (DSPI3_BASE)
  *((volatile uint32*)(DSPI3_BASE + 0x3FFC)) = 0x00800000; /* set UAA-bit for DSPI3 to enable write in usermode */
#   endif
#  endif /*VGEN_ENABLE_DRVSPI*/

#  if defined (DMAMUX_0_BASE)
  *((volatile uint32*)(DMAMUX_0_BASE + 0x3FFC)) = 0x00800000; /* set UAA-bit for DMAMUX_0 to enable write in usermode */
#  endif
#  if defined (DMAMUX_1_BASE)
  *((volatile uint32*)(DMAMUX_1_BASE + 0x3FFC)) = 0x00800000; /* set UAA-bit for DMAMUX_1 to enable write in usermode */
#  endif

# endif /*BRSHW_USERMODE_ACCESS_GROUP_A/A1/C*/

# if defined (BRSHW_USERMODE_ACCESS_GROUP_B) || defined (BRSHW_USERMODE_ACCESS_GROUP_C)
  /* **************************************************** */
  /* UAA Bits of peripherals, to allow access in UserMode */
  /* **************************************************** */
#  if defined (VGEN_ENABLE_DRVMCU)
  *((volatile uint32*)(MC_ME_BASE + 0x3FFC)) = 0x00800000; /* set UAA-bit for MC_ME to enable write in usermode */
#  endif /*VGEN_ENABLE_DRVMCU*/
# endif /*BRSHW_USERMODE_ACCESS_GROUP_B/C*/

# if defined (BRSHW_USERMODE_ACCESS_GROUP_A) || defined (BRSHW_USERMODE_ACCESS_GROUP_A1) || defined (BRSHW_USERMODE_ACCESS_GROUP_B) || defined (BRSHW_USERMODE_ACCESS_GROUP_C)
  /* *************************************************************** */
  /* PACR/OPACR Register of peripherals, to allow access in UserMode */
  /* *************************************************************** */
  O_PACR_REGISTER_SIUL_ADDR &= O_PACR_REGISTER_SIUL_VALUE; /* set OPACR-Register to enable read/write access to SIUL in usermode */
  O_PACR_REGISTER_PIT_ADDR  &= O_PACR_REGISTER_PIT_VALUE;  /* set OPACR-Register to enable read/write access to PIT in usermode */
  O_PACR_REGISTER_STM_ADDR  &= O_PACR_REGISTER_STM_VALUE;  /* set PACR-Register to enable read/write access to STM Timer in usermode */

#  if defined (O_PACR_REGISTER_EDMA_ADDR)
  O_PACR_REGISTER_EDMA_ADDR &= O_PACR_REGISTER_EDMA_VALUE;
#  endif

#  if defined (O_PACR_REGISTER_DMA_MUX_0_ADDR)
  O_PACR_REGISTER_DMA_MUX_0_ADDR &= O_PACR_REGISTER_DMA_MUX_0_VALUE;
#  endif
#  if defined (O_PACR_REGISTER_DMA_MUX_1_ADDR)
  O_PACR_REGISTER_DMA_MUX_1_ADDR &= O_PACR_REGISTER_DMA_MUX_1_VALUE;
#  endif

#  if defined (VGEN_ENABLE_CAN_DRV)
#   if defined (kCanPhysToLogChannelIndex_0)
  O_PACR_REGISTER_CAN0_ADDR &= O_PACR_REGISTER_CAN0_VALUE; /* set OPACR-Register to enable read/write access to FlexCAN0 in usermode */
#   endif
#   if defined (kCanPhysToLogChannelIndex_1)
  O_PACR_REGISTER_CAN1_ADDR &= O_PACR_REGISTER_CAN1_VALUE; /* set OPACR-Register to enable read/write access to FlexCAN1 in usermode */
#   endif
#   if defined (kCanPhysToLogChannelIndex_2)
  O_PACR_REGISTER_CAN2_ADDR &= O_PACR_REGISTER_CAN2_VALUE; /* set OPACR-Register to enable read/write access to FlexCAN2 in usermode */
#   endif
#   if defined (kCanPhysToLogChannelIndex_3)
  O_PACR_REGISTER_CAN3_ADDR &= O_PACR_REGISTER_CAN3_VALUE; /* set OPACR-Register to enable read/write access to FlexCAN3 in usermode */
#   endif
#   if defined (kCanPhysToLogChannelIndex_4)
  O_PACR_REGISTER_CAN4_ADDR &= O_PACR_REGISTER_CAN4_VALUE; /* set OPACR-Register to enable read/write access to FlexCAN3 in usermode */
#   endif
#   if defined (kCanPhysToLogChannelIndex_7)
  O_PACR_REGISTER_CAN7_ADDR &= O_PACR_REGISTER_CAN7_VALUE; /* set OPACR-Register to enable read/write access to FlexCAN7 in usermode */
#   endif
#  endif /*VGEN_ENABLE_CAN_DRV*/

// sslee
#  if defined (VGEN_ENABLE_DRVADC)
 O_PACR_REGISTER_ADC0_ADDR &= O_PACR_REGISTER_ADC0_VALUE; /* set OPACR-Register to enable read/write access to ADC0 controller in usermode */
 O_PACR_REGISTER_ADC1_ADDR &= O_PACR_REGISTER_ADC1_VALUE; /* set OPACR-Register to enable read/write access to ADC1 controller in usermode */
#  endif /*VGEN_ENABLE_DRVADC*/

// sslee
#  if defined (VGEN_ENABLE_DRVPORT)
 O_PACR_REGISTER_SIUL_ADDR &= O_PACR_REGISTER_SIUL_VALUE; /* set OPACR-Register to enable read/write access to ADC0 controller in usermode */
#  endif /*VGEN_ENABLE_DRVADC*/




#  if defined (VGEN_ENABLE_LIN_DRV)
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_0)
  O_PACR_REGISTER_LIN0_ADDR &= O_PACR_REGISTER_LIN0_VALUE; /* set OPACR-Register to enable read/write access to LinFlex0 in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_1)
  O_PACR_REGISTER_LIN1_ADDR &= O_PACR_REGISTER_LIN1_VALUE; /* set OPACR-Register to enable read/write access to LinFlex1 in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_2)
  O_PACR_REGISTER_LIN2_ADDR &= O_PACR_REGISTER_LIN2_VALUE; /* set OPACR-Register to enable read/write access to LinFlex2 in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_3)
  O_PACR_REGISTER_LIN3_ADDR &= O_PACR_REGISTER_LIN3_VALUE; /* set OPACR-Register to enable read/write access to LinFlex3 in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_4)
  O_PACR_REGISTER_LIN4_ADDR &= O_PACR_REGISTER_LIN4_VALUE; /* set OPACR-Register to enable read/write access to LinFlex4 in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_5)
  O_PACR_REGISTER_LIN5_ADDR &= O_PACR_REGISTER_LIN5_VALUE; /* set OPACR-Register to enable read/write access to LinFlex5 in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_6)
  O_PACR_REGISTER_LIN6_ADDR &= O_PACR_REGISTER_LIN6_VALUE; /* set OPACR-Register to enable read/write access to LinFlex6 in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_7)
  O_PACR_REGISTER_LIN7_ADDR &= O_PACR_REGISTER_LIN7_VALUE; /* set OPACR-Register to enable read/write access to LinFlex7 in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_8)
  O_PACR_REGISTER_LIN8_ADDR &= O_PACR_REGISTER_LIN8_VALUE; /* set OPACR-Register to enable read/write access to LinFlex8 in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_9)
  O_PACR_REGISTER_LIN9_ADDR &= O_PACR_REGISTER_LIN9_VALUE; /* set OPACR-Register to enable read/write access to LinFlex9 in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_10)
  O_PACR_REGISTER_LIN10_ADDR &= O_PACR_REGISTER_LIN10_VALUE; /* set OPACR-Register to enable read/write access to LinFlex10 in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_11)
  O_PACR_REGISTER_LIN11_ADDR &= O_PACR_REGISTER_LIN11_VALUE; /* set OPACR-Register to enable read/write access to LinFlex11 in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_12)
  O_PACR_REGISTER_LIN12_ADDR &= O_PACR_REGISTER_LIN12_VALUE; /* set OPACR-Register to enable read/write access to LinFlex12 in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_13)
  O_PACR_REGISTER_LIN13_ADDR &= O_PACR_REGISTER_LIN13_VALUE; /* set OPACR-Register to enable read/write access to LinFlex13 in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_14)
  O_PACR_REGISTER_LIN14_ADDR &= O_PACR_REGISTER_LIN14_VALUE; /* set OPACR-Register to enable read/write access to LinFlex14 in usermode */
#   endif
#   if defined (LIN_ENABLE_HARDWARE_INTERFACE_15)
  O_PACR_REGISTER_LIN15_ADDR &= O_PACR_REGISTER_LIN15_VALUE; /* set OPACR-Register to enable read/write access to LinFlex15 in usermode */
#   endif
#  endif /*VGEN_ENABLE_LIN_DRV*/

#  if defined (VGEN_ENABLE_DRVFR__BASEASR)
  O_PACR_REGISTER_FLEXRAY0_ADDR &= O_PACR_REGISTER_FLEXRAY0_VALUE; /* set OPACR-Register to enable read/write access to FlexRay0 controller in usermode */
#  endif /*VGEN_ENABLE_DRVFR__BASEASR*/

#  if defined (VGEN_ENABLE_DRVETH__BASEASR)
  O_PACR_REGISTER_ETHERNET0_ADDR &= O_PACR_REGISTER_ETHERNET0_VALUE; /* set OPACR-Register to enable read/write access to Ethernet0 controller in usermode */
#  endif /*VGEN_ENABLE_DRVETH__BASEASR*/

#  if defined (VGEN_ENABLE_DRVFLS)
  O_PACR_REGISTER_FLASH0_ADDR &= O_PACR_REGISTER_FLASH0_VALUE; /* set OPACR-Register to enable read/write access to Flash0 in usermode */
#  endif /*VGEN_ENABLE_DRVFLS*/

#  if defined (VGEN_ENABLE_DRVSPI)
  O_PACR_REGISTER_DSPI0_ADDR &= O_PACR_REGISTER_DSPI0_VALUE; /* set OPACR-Register to enable read/write access to DSPI0 in usermode */
  O_PACR_REGISTER_DSPI1_ADDR &= O_PACR_REGISTER_DSPI1_VALUE; /* set OPACR-Register to enable read/write access to DSPI1 in usermode */
  O_PACR_REGISTER_DSPI2_ADDR &= O_PACR_REGISTER_DSPI2_VALUE; /* set OPACR-Register to enable read/write access to DSPI2 in usermode */
#   if defined (O_PACR_REGISTER_DSPI3_ADDR)
  O_PACR_REGISTER_DSPI3_ADDR &= O_PACR_REGISTER_DSPI3_VALUE; /* set OPACR-Register to enable read/write access to DSPI3 in usermode */
#   endif
#  endif /*VGEN_ENABLE_DRVSPI*/

#  if defined (VGEN_ENABLE_DRVWD)
#   if defined (O_PACR_REGISTER_SWT0_ADDR)
  O_PACR_REGISTER_SWT0_ADDR &= O_PACR_REGISTER_SWT0_VALUE; /* set OPACR-Register to enable read/write access to SWT0 in usermode */
#   endif
#   if defined (O_PACR_REGISTER_SWT1_ADDR)
  O_PACR_REGISTER_SWT1_ADDR &= O_PACR_REGISTER_SWT1_VALUE; /* set OPACR-Register to enable read/write access to SWT1 in usermode */
#   endif
#   if defined (O_PACR_REGISTER_SWT2_ADDR)
  O_PACR_REGISTER_SWT2_ADDR &= O_PACR_REGISTER_SWT2_VALUE; /* set OPACR-Register to enable read/write access to SWT2 in usermode */
#   endif
#  endif  /* VGEN_ENABLE_DRVWD */
#  if defined (VGEN_ENABLE_DRVGPT)
#   if defined (O_PACR_REGISTER_EMIOS0_ADDR)
  O_PACR_REGISTER_EMIOS0_ADDR &= O_PACR_REGISTER_EMIOS0_VALUE; /* set OPACR-Register to enable read/write access to EMIOS0 in usermode */
#   endif
#   if defined (O_PACR_REGISTER_EMIOS1_ADDR)
  O_PACR_REGISTER_EMIOS1_ADDR &= O_PACR_REGISTER_EMIOS1_VALUE; /* set OPACR-Register to enable read/write access to EMIOS1 in usermode */
#   endif
#  endif /* VGEN_ENABLE_DRVGPT */


#  if defined (VGEN_ENABLE_DRVPWM)
#   if defined (O_PACR_REGISTER_EMIOS0_ADDR)
  O_PACR_REGISTER_EMIOS0_ADDR &= O_PACR_REGISTER_EMIOS0_VALUE; /* set OPACR-Register to enable read/write access to EMIOS0 in usermode */
#   endif
#   if defined (O_PACR_REGISTER_EMIOS1_ADDR)
  O_PACR_REGISTER_EMIOS1_ADDR &= O_PACR_REGISTER_EMIOS1_VALUE; /* set OPACR-Register to enable read/write access to EMIOS1 in usermode */
#   endif
#  endif /* VGEN_ENABLE_DRVGPT */








#  if defined (O_PACR_REGISTER_XBAR_0_ADDR)
  O_PACR_REGISTER_XBAR_0_ADDR &= O_PACR_REGISTER_XBAR_0_VALUE;
#  endif
#  if defined (O_PACR_REGISTER_XBAR_1_ADDR)
  O_PACR_REGISTER_XBAR_1_ADDR &= O_PACR_REGISTER_XBAR_1_VALUE;
#  endif
# endif /*BRSHW_USERMODE_ACCESS_GROUP_A/A1/B/C*/

# if defined (BRSHW_USERMODE_ACCESS_GROUP_D)
  O_PACR_REGISTER_DATA_FLASH_ADDR &= O_PACR_REGISTER_DATA_FLASH_VALUE;

#  if defined (VGEN_ENABLE_CAN_DRV)
#   if defined (kCanPhysToLogChannelIndex_0)
  O_PACR_REGISTER_CAN0_ADDR &= O_PACR_REGISTER_CAN0_VALUE; /* set OPACR-Register to enable read/write access to FlexCAN0 in usermode */
#   endif
#  endif /*VGEN_ENABLE_CAN_DRV*/
# endif /*BRSHW_USERMODE_ACCESS_GROUP_D*/
}
# else
  /* BrsHw_EnableHwAccess() removed by Organi, because of ALM attributes of project */
# endif /*BRSASR_ENABLE_SAFECTXSUPPORT*/

/**********************************************************************************************************************
  Interrupt handler function protoytpes
**********************************************************************************************************************/

/*****************************************************************************/
/**
 * @brief      Initialize run mode for CPU and peripheral
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    at the end of BrsHwPllInitPowerOn()
 */
/*****************************************************************************/
void BrsHwSwitchRunMode(void)
{
#if defined (BRSHW_OPMODES_GROUP_A) || defined (BRSHW_OPMODES_GROUP_B)
# if defined (BRS_DERIVATIVE_PC580000x) || defined (BRS_DERIVATIVE_PC580002x)|| defined (BRS_DERIVATIVE_PC580003x) || defined (BRS_DERIVATIVE_PC582101)
  ME_RUN_PC(0) = (uint32)0x0000001C;    /* allow all modes to use run peripheral configuration 0 */
# else
  ME_ME = (uint32)0x000005FF;           /* allow usage of all modes */
  ME_RUN_PC(0) = (uint32)0x000000FE;    /* allow all modes to use run peripheral configuration 0 */
  ME_LP_PC(0) = (uint32)0x00000500;     /* allow usage of peripherals in halt and stop mode */
# endif

  ME_RUN_MC(0) |= (uint32)(0x00000020); /* enable XOSC */
# if defined (BRSHW_FMPLL_GROUP_A)
  ME_RUN_MC(0) |= (uint32)(0x00000040); /* enable PLL0 */
  ME_RUN_MC(0) |= (uint32)(0x00000002); /* select system clock = PLL0 clock */
#  if defined (BRS_DERIVATIVE_MPC5775N) || defined (BRS_DERIVATIVE_MPC5773N) || defined (BRS_DERIVATIVE_SPC574Kxx)
  ME_CCTL(1) |= (uint16)0x0010; /* enable z4a clock during RUN0. !IMPORTANT! Do not even think about removing this line!!! */
#  elif defined (BRS_DERIVATIVE_S32R274)
  ME_CCTL(1) |= (uint16)0x0010; /* enable z4a clock during RUN0 */
#  if defined (BRSASR_ENABLE_OS_MULTICORESUPPORT)
  ME_CCTL(2) |= (uint16)0x0010; /* enable z7a clock during RUN0 */
  ME_CCTL(3) |= (uint16)0x0010; /* enable z7b clock during RUN0 */
#  endif
#  elif defined (BRS_DERIVATIVE_SPC574Sx)
  ME_CCTL(0) |= (uint16)0x0010;
#  endif
# elif defined (BRSHW_FMPLL_GROUP_B)
  ME_RUN_MC(0) |= (uint32)(0x00000080); /* enable IRC */
  ME_RUN_MC(0) |= (uint32)(0x00000040); /* enable PLL0 */
  ME_RUN_MC(0) |= (uint32)(0x00000002); /* select system clock = PLL0 clock */
# else
  #error "Your PLL is currently not supported in combination with BRSHW_OPMODES_GROUP_A/B!"
# endif
  
  /* There is no need to switch on any peripherals, because they are assigned to run peripheral configuration 0 by default! */
# if defined (BRS_DERIVATIVE_SPC574Kxx)
  /* Derivate SPC574kxx: Because of unknown reason, the value of this register is set to 2 which is unexpected! */
  /* This register should have value 0 since mode RUN0 is applied */
  ME_PCTL(15) = 0x00;
# endif
  if((ME_GS & (uint32)0xf0000000) == (uint32)0x20000000)
  {
    /* ATTENTION: If you reach this point, your ECU will never switch to the mode Run1! 
      To resolve this issue, a reset will be performed automatically. */
    ME_MCTL = (uint32)0x00005AF0; /* mode transition request to Reset */
    ME_MCTL = (uint32)0x0000A50F; /* mode transition request to Reset */
    while((ME_GS & (uint32)0x08000000) == (uint32)0x08000000)
    {
      ; /* wait for mode transition has completed */
    }
  }
  ME_MCTL = (uint32)0x40005AF0; /* mode transition request to run mode 0 */
  ME_MCTL = (uint32)0x4000A50F; /* mode transition request to run mode 0 */
  while((ME_GS & (uint32)0x08000000) == (uint32)0x08000000)
  {
    ; /* wait for mode transition has completed */
  }
# if !defined (BRS_DERIVATIVE_PC580000x) && !defined (BRS_DERIVATIVE_PC580002x) && !defined (BRS_DERIVATIVE_PC580003x) && !defined (BRS_DERIVATIVE_PC582101)
  while((ME_GS & (uint32)0x00000020) != (uint32)0x00000020)
  {
    ; /* wait for XOSC on */
  }
# endif
  while((ME_GS & (uint32)0x00000040) != (uint32)0x00000040)
  {
    ; /* wait for PLL0 on */
  }
  ME_IS = (uint32)0x3F;
#endif /*BRSHW_OPMODES_GROUP_A || BRSHW_OPMODES_GROUP_B*/
}

#if defined (BRSHW_ENABLE_INIT_RAM)
/*****************************************************************************/
/**
 * @brief      Copys data for initialized variables from ROM to RAM
 * @pre        Functions (and ISRs) that might require initialized global variables
 *             must not be executed before this function is done.
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Called by main() before any other initialization
 */
/*****************************************************************************/
void BrsHwInitRam(void)
{
  uint8 section_copy_counter;

# if defined (BRS_COMP_DIAB)
  #define BRSHW_INIT_RAM_SECTION_COPY_COUNT 1
  #define BRSHW_INIT_RAM_COPY_MODE_INDEXED

  uint16 copy_section_index, copy_section_size;
  char * p_start_src;
  char * p_start_dest;
  char * p_start_src_list[BRSHW_INIT_RAM_SECTION_COPY_COUNT];
  char * p_start_dest_list[BRSHW_INIT_RAM_SECTION_COPY_COUNT];
  uint16 copy_section_size_list[BRSHW_INIT_RAM_SECTION_COPY_COUNT];

  /*external definition of sections. will be resolved by the linker*/
  extern char __DATA_ROM[], __DATA_RAM[], __DATA_END[];

  if (__DATA_ROM == __DATA_RAM)
  {
    copy_section_size_list[0]=0;
    p_start_src_list[0]=0;/*to avoid compiler warnings*/
    p_start_dest_list[0]=0;/*to avoid compiler warnings*/
  }
  else
  {
    copy_section_size_list[0]= __DATA_END - __DATA_RAM ;
    p_start_src_list[0]=__DATA_ROM;
    p_start_dest_list[0]=__DATA_RAM;
  }
# endif /*BRS_COMP_DIAB*/

/* do the actual copying */
  for( section_copy_counter = 0; section_copy_counter < BRSHW_INIT_RAM_SECTION_COPY_COUNT; section_copy_counter++ )
  {
    p_start_src=p_start_src_list[section_copy_counter];
    p_start_dest=p_start_dest_list[section_copy_counter];
# if defined (BRSHW_INIT_RAM_COPY_MODE_DIRECT)
    p_end_src=p_end_src_list[section_copy_counter];
    while( p_start_src < p_end_src )
    {
      p_start_dest[0] = p_start_src[0];
      p_start_src++;
      p_start_dest++;
    }
# elif defined (BRSHW_INIT_RAM_COPY_MODE_INDEXED)
    copy_section_index=0;
    copy_section_size=copy_section_size_list[section_copy_counter];
    while( copy_section_index < copy_section_size )
    {
      p_start_dest[copy_section_index] = p_start_src[copy_section_index];
      copy_section_index++;
    }
# else
  #error "No copy mode selected."
# endif /*BRSHW_INIT_RAM_COPY_MODE_x*/
  }
}
#endif /*BRSHW_ENABLE_INIT_RAM*/
