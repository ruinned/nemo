
/**********************************************************************************************************************
  COPYRIGHT
-----------------------------------------------------------------------------------------------------------------------
  \par      copyright
  \verbatim
  Copyright (c) 2017 by Vector Informatik GmbH.                                                  All rights reserved.

                This software is copyright protected and proprietary to Vector Informatik GmbH.
                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
                All other rights remain with Vector Informatik GmbH.
  \endverbatim
-----------------------------------------------------------------------------------------------------------------------
  FILE DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
  \file  File:  BswInit_Callout_Stubs.h
      Project:  Vector Basic Runtime System for MICROSAR4
       Module:  BrsAsrInit

  \brief Description:  Vector Basic Runtime System for AUTOSAR 4 projects
                       - Module header for initialization Callouts, out of BswInit.c and/or BrsAsrMain.c

  \attention Please note:
    The demo and example programs only show special aspects of the software. With regard to the fact
    that these programs are meant for demonstration purposes only, Vector Informatik liability shall be
    expressly excluded in cases of ordinary negligence, to the extent admissible by law or statute.
**********************************************************************************************************************/

#ifndef _BSWINIT_CALLOUT_STUBS_H_
#define _BSWINIT_CALLOUT_STUBS_H_

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/* Version number of this implementation */
#define BSWINIT_CALLOUT_STUBS_MAJOR_VERSION  1U  /* Major version */
#define BSWINIT_CALLOUT_STUBS_MINOR_VERSION  0U  /* Minor version */
#define BSWINIT_CALLOUT_STUBS_PATCH_VERSION  9U  /* Patch level version */

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
void BswInit_PreInitPowerOn(void);
void BswInit_InitializeOne(void);
void BswInit_InitializeTwo(void);

#endif /*_BSWINIT_CALLOUT_STUBS_H_*/
