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
 *            Module: Lin
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Lin_LCfg.c
 *   Generation Time: 2018-11-24 19:12:47
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


/* MICROSAR Lin Mpc56xx Generator */
/* 4.01.02 */
/* PRQA S 0303 EOF */ /* MD_LIN_0303 */

/* -----------------------------------------------------------------------------
    &&&~ Includes
----------------------------------------------------------------------------- */
#include "Lin.h"
#include "Os.h"


/* -----------------------------------------------------------------------------
    &&&~ Interrupts
----------------------------------------------------------------------------- */
#define LIN_START_SEC_CODE_ISR
#include "MemMap.h"

ISR( LinIsr_0 ){ Lin_Interrupt( 0 ); }
ISR( LinIsr_1 ){ Lin_Interrupt( 1 ); }
ISR( LinIsr_6 ){ Lin_Interrupt( 2 ); }
ISR( LinIsr_7 ){ Lin_Interrupt( 3 ); }
ISR( LinIsr_10 ){ Lin_Interrupt( 4 ); }

#define LIN_STOP_SEC_CODE_ISR
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/* -----------------------------------------------------------------------------
    &&&~ Lin_Config (ComStackLib)
----------------------------------------------------------------------------- */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  Lin_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    Lin_ChannelConfig
  \brief  List of all Lin channel config
  \details
  Element               Description
  linIBRR           
  linFBRR               Lin_BaudRateRegValue_LINIBRR.
  ChannelBaseAddress    Hardware register base address of channel
*/ 
#define LIN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Lin_ChannelConfigType, LIN_CONST) Lin_ChannelConfig[5] = {
    /* Index    linIBRR  linFBRR  ChannelBaseAddress                           Referable Keys */
  { /*     0 */ 0x0208U, 0x000DU, ((Lin_RegisterStructPtr)0xFFEA0000UL) },  /* [CN_LIN00_2cd9a7df] */
  { /*     1 */ 0x0104U, 0x0007U, ((Lin_RegisterStructPtr)0xFFE8C000UL) },  /* [CN_LIN01_5bde9749] */
  { /*     2 */ 0x0208U, 0x000DU, ((Lin_RegisterStructPtr)0xFBE98000UL) },  /* [CN_LIN02_c2d7c6f3] */
  { /*     3 */ 0x0208U, 0x000DU, ((Lin_RegisterStructPtr)0xFFE98000UL) },  /* [CN_LIN03_b5d0f665] */
  { /*     4 */ 0x0208U, 0x000DU, ((Lin_RegisterStructPtr)0xFBE8C000UL) }   /* [CN_LIN04_2bb463c6] */
};
#define LIN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Lin_ChannelHw
**********************************************************************************************************************/
/** 
  \var    Lin_ChannelHw
  \brief  Indirection from mapped interrupt count to ChannelConfig idx.
  \details
  Element             Description
  ChannelConfigIdx    the index of the 1:1 relation pointing to Lin_ChannelConfig
*/ 
#define LIN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Lin_ChannelHwType, LIN_CONST) Lin_ChannelHw[5] = {
    /* Index    ChannelConfigIdx */
  { /*     0 */               1U },
  { /*     1 */               4U },
  { /*     2 */               3U },
  { /*     3 */               2U },
  { /*     4 */               0U }
};
#define LIN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Lin_ChannelData
**********************************************************************************************************************/
/** 
  \var    Lin_ChannelData
  \brief  RAM data for channels.
  \details
  Element          Description
  InternalState    Internal software state.
  DataBuffer       Data Buffer.
*/ 
#define LIN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uLin_ChannelDataType, LIN_VAR_NOINIT) Lin_ChannelData;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [CN_LIN00_2cd9a7df] */
  /*     1 */  /* [CN_LIN01_5bde9749] */
  /*     2 */  /* [CN_LIN02_c2d7c6f3] */
  /*     3 */  /* [CN_LIN03_b5d0f665] */
  /*     4 */  /* [CN_LIN04_2bb463c6] */

#define LIN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/





/* Hardware specific precompile data */
/* None */

