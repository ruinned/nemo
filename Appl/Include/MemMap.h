/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2007 - 2017 by Vector Informatik GmbH.                                           All rights reserved.
 *
 *                Please note, that this file contains example configuration used by the 
 *                MICROSAR BSW. This code may influence the behaviour of the MICROSAR BSW
 *                in principle. Therefore, great care must be taken to verify
 *                the correctness of the implementation.
 *
 *                The contents of the originally delivered files are only examples respectively
 *                implementation proposals. With regard to the fact that these functions
 *                are meant for demonstration purposes only, the liability of Vector Informatik
 *                shall be expressly excluded in cases of ordinary negligence, 
 *                to the extent admissible by law or statute.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  _MemMap.h
 *    Component:  -
 *       Module:  -
 *    Generator:  -
 *
 *  Description:  This File is a template for the MemMap.h
 *                This file has to be extended with the memory section defined for all BSW modules
 *                which are used.
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  MISRA VIOLATIONS
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Joachim Kalmbach              Jk            Vector Informatik GmbH
 *  Heike Honert                  Ht            Vector Informatik GmbH
 *  Eugen Stripling               Seu           Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2007-08-01  Jk                    Initial creation
 *  01.01.00  2007-12-14  Jk                    Component specific defines filtering added
 *  01.01.02  2008-11-04  Jk                    Component specific defines filtering added
 *  01.01.03  2008-12-17  Ht                    Improve list of components  (Tp_AsrTpCan,Tp_AsrTpFr,DrvMcu,DrvIcu added)
 *  01.01.04  2009-04-27  Ht                    improve list of components  (Cp_XcpOnCanAsr, Il_AsrIpduM, If_VxFblDcm,
 *                                              If_VxFblVpm_Volvo_ab, DrvFls added)
 *  01.01.05  2009-04-24  Msr                   Renamed J1939_AsrBase as TpJ1939_AsrBase
 *  01.01.06  2009-06-03  Ht                    Improve list of components (Adc, Dio, Gpt, Pwm, Spi, Wdg, Fls, Port, Fim)
 *  01.02.00  2009-08-01  Ht                    Improve list of components (Fee_30_Inst2, Can, ...Sub)
 *                                              Support filtering for RTE
 *  01.02.01  2009-08-18  HH                    replaced C++ comment by C comment
 *  01.02.02  2009-09-02  Lo                    add external Flash driver support
 *  01.02.03  2009-09-12  Lo                    add DrvFls_Mcs12xFslftm01ExtVx
 *                        Ht                    Improve list of components (CanTrcv_30_Tja1040dio,
 *                                                Eth, EthTrcv, EthIf, SoAd, TcpIp, EthSM)
 *  01.03.00  2009-10-30  Ht                    support R8: change EthTrcv to EthTrcv_30_Canoeemu
 *                                              support EthTrcv_30_Dp83848
 *                                              change CanTrcv_30_Xdio to CanTrcv_30___Your_Trcv__
 *                                              change CanTrcv_30_Tja1040dio to CanTrcv_30_Tja1041
 *                                              change name FrTrcv to FrTrcv_30_Tja1080dio
 *                        Lo                    add Cp_AsrXcp
 *                        Ht                    add Cp_XcpOnFrAsr
 *  01.03.01  2010-01-13  Ht                    support SysService_AsrCal
 *  01.03.02  2010-02-15  Ht                    support SysService_SswRcs_Daimler, SysService_Tls, Tp_Http, 
 *                                                      SysService_Dns, SysService_Json, DrvTrans_GenericLindioAsr
 *                        Lo                    add Diag_AsrDem for all OEMs
 *                                              rename internal variables and filter methods
 *  01.04.00  2010-03-04  Ht                    change name FrTrcv_30_Tja1080dio to FrTrcv_30_Tja1080
 *  01.04.01  2010-03-10  Ht                    support DrvTrans_GenericFrAsr, DrvTrans_As8223FrspiAsr, DrvEep and If_AsrIfEa
 *  01.04.02  2010-04-07  Lo                    change IfFee to real components and add If_AsrIfWdV85xNec01Sub
 *  01.04.03  2010-06-11  Ht                    add CanTrcv_30_Tja1043
 *                        Lo                    add Il_AsrIpduMEbBmwSub
 *  01.04.04  2010-08-24  Ht                    add CanTrcv_30_Tle62512G, DrvEep_XAt25128EAsr, Tp_AsrTpFrEbBmwSub
 *  01.05.00  2010-08-24  Ht                    support R10:
 *                                              change LinTrcv_30_Tle7259dio to LinTrcv_30_Tle7259
 *  01.05.01  2010-10-14  Ht                    add VStdLib, SysService_SswScc, SysService_IpBase, SysService_Crypto
 *  01.05.02  2010-10-20  Ht                    support comments for Package Merge Tool
 *  01.05.03  2010-11-03  Ht                    add SysService_E2eLibTttechSub, SysService_E2ePwTttechSub
 *  01.05.04  2010-11-16  Ht                    add SysService_Exi, DrvTrans_Int6400EthAsr, Cdd_AsrCdd_Fiat, Diag_AsrDem_Fiat
 *  01.05.05  2010-12-17  Ht                    add SysService_AsrSchM, DrvEep_XXStubAsr, DrvIcu_Tms570Tinhet01ExtVx
 *                                                  DrvWd_XTle4278gEAsr, DrvWd_XXStubAsr
 *  01.05.06  2011-02-17  Ht                    add DrvEed, SysService_AsrBswM
 *  01.05.07  2011-03-04  Ht                    add DrvTrans_Tja1055CandioAsr
 *                                              rename CanTrcv_30_Tja1040dio to CanTrcv_30_Tja1040
 *                                              add SysService_XmlEngine
 *  01.06.00  2011-03-15  Ht                    support ASR4.0
 *                                              add Ccl_Asr4ComM, Ccl_Asr4SmCan, Nm_Asr4NmIf, Nm_AsrNmDirOsek
 *  01.06.01  2011-04-15  Ht                    add Diag_AsrDcm_<OEM>
 *  01.06.02  2011-06-17  Ht                    correct Diag_AsrDcm_<OEM>
 *                                              add Monitoring_AsrDlt and Monitoring_GenericMeasurement
 *  01.06.03  2011-09-20  Ht                    add DrvTrans_Tja1145CanSpiAsr, DrvTrans_E52013CanspiAsr, DrvFls_XXStubAsr,
 *                                              If_AsrIfFeeV85xNec05Sub, If_AsrIfFeeV85xNec06Sub, If_AsrIfFeeV85xNec07Sub
 *                                              SysService_AsrWdMTttechSub and If_AsrIfWdTttechSub
 *  01.06.04  2011-11-22  Ht                    add If_AsrIfFeeTiSub, 
 *                                              ESCAN00054718: add Cdd_AsrCdd
 *  01.06.05  2011-12-09  Ht                    add Tp_IpV4, Tp_IpV6
 *  01.06.06  2011-12-14  Ht                    add Monitoring_RuntimeMeasurement
 *  01.06.07  2012-01-03  Ht                    add DrvI2c, SysService_Asr4BswM
 *  01.06.08  2012-01-31  Ht                    add DrvTrans_Ar7000EthAsr, DrvTrans_GenericEthmiiAsr
 *  01.06.09  2012-03-06  Ht                    add If_AsrIfFeeMb9df126Fuji01Sub, 
 *                                              Infineon_Tc1767Inf01Sub, Infineon_Tc178xInf01Sub, Infineon_Tc1797Inf01Sub, Infineon_Tc1797Inf02Sub
 *  01.06.10  2012-03-13  Ht                    add Gw_AsrPduRCfg5, Il_AsrComCfg5, Il_AsrIpduMCfg5, Cdd_AsrCddCfg5,
 *                                              Tp_Asr4TpCan, Diag_Asr4Dcm, Diag_Asr4Dem
 *  01.06.11  2012-03-20  Ht                    add Cp_AsrCcp, Cp_XcpOnTcpIpAsr
 *  01.07.00  2012-07-26  Ht                    ESCAN00059365: [AUTOSAR4, compiler warning]: Wrong define name in #undef statement causes re-definition warning
 *                                              add Nm_Asr4NmCan, Nm_Asr4NmFr, Infineon_Xc2000Inf01Sub, Ccl_Asr4ComMCfg5, SysService_Asr4BswMCfg5, SysService_Asr4EcuM, SysService_AsrRamTst,
 *                                                  Ccl_Asr4SmLin 
 *            2012-09-04  Ht                    add support for ASR specification 4.0 R3
 *  01.07.01  2012-10-23  Seu                   add SysService_XmlSecurity
 *  01.07.02  2013-01-10  Seu                   MISRA deviation comments added
 *  01.08.00  2013-03-01  Seu    ESCAN00065501  AR4-325: Add support for Post-build RAM memory section
 *            2013-04-12  Seu    ESCAN00066614  Add the deviation for violation of MISRA rule 19.6
 *  01.09.00  2013-12-10  Seu    ESCAN00072537  Add *_NOCACHE_* memory sections for variables
 *            2013-12-16  Seu                   MISRA compliance: usage of character "'" removed, typos corrected
 *  01.10.00  2016-09-27  Seu                   FEATC-317: FEAT-2002: CommonAsr__Common: Support 64 Bit Signal Types for COM according to ASR 4.2.2
 *  01.11.00  2017-07-05  Seu    ESCAN00095756  FEAT-2455: Support ASR4.2 compatible MemMap for MCALs
 *            2017-08-01  Seu    ESCAN00096129  MEMMAP_SW_MINOR_VERSION / MEM_SW_MINOR_VERSION is not correct
 *********************************************************************************************************************/

/* PRQA S 0841 MEMMAP_0841_TAG */ /* MD_MSR_19.6 */

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

 /* PRQA S 0883 1 */ /* MD_MemMap_19.15 */
#undef MEMMAP_VENDOR_ID /* PRQA S 0841 */ /* MD_MSR_19.6 */

#define MEMMAP_VENDOR_ID        (30u)

/* AUTOSAR Software Specification Version Information */


# undef MEMMAP_AR_RELEASE_MAJOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_AR_RELEASE_MINOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_AR_RELEASE_REVISION_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */

/* AUTOSAR release 4.0 R3 */
# define MEMMAP_AR_RELEASE_MAJOR_VERSION       (4u)
# define MEMMAP_AR_RELEASE_MINOR_VERSION       (0u)
# define MEMMAP_AR_RELEASE_REVISION_VERSION    (3u)

/* compatiblity to older versions */
# undef MEM_AR_RELEASE_MAJOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEM_AR_RELEASE_MINOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEM_AR_RELEASE_PATCH_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */

# define MEM_AR_RELEASE_MAJOR_VERSION          MEMMAP_AR_RELEASE_MAJOR_VERSION
# define MEM_AR_RELEASE_MINOR_VERSION          MEMMAP_AR_RELEASE_MINOR_VERSION
# define MEM_AR_RELEASE_PATCH_VERSION          MEMMAP_AR_RELEASE_REVISION_VERSION


# undef MEMMAP_SW_MAJOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_SW_MINOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_SW_PATCH_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */

# define MEMMAP_SW_MAJOR_VERSION     (1u)
# define MEMMAP_SW_MINOR_VERSION     (11u)
# define MEMMAP_SW_PATCH_VERSION     (0u)

/* compatiblity to older versions */
# undef MEM_SW_MAJOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEM_SW_MINOR_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEM_SW_PATCH_VERSION /* PRQA S 0841 */ /* MD_MSR_19.6 */

# define MEM_SW_MAJOR_VERSION        MEMMAP_SW_MAJOR_VERSION 
# define MEM_SW_MINOR_VERSION        MEMMAP_SW_MINOR_VERSION 
# define MEM_SW_PATCH_VERSION        MEMMAP_SW_PATCH_VERSION 
  
#define MEMMAP_ERROR

/* Package Merger: Start Section MemMapModuleList */


#include "Rte_MemMap.h"


/**********************************************************************************************************************
 *  COMM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef COMM_START_SEC_CODE
  #undef COMM_START_SEC_CODE                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef COMM_STOP_SEC_CODE
  #undef COMM_STOP_SEC_CODE                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef COMM_START_SEC_CONST_8BIT
# undef COMM_START_SEC_CONST_8BIT                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT                       /* mapped to default const 8bit section */
#endif
#ifdef COMM_STOP_SEC_CONST_8BIT
# undef COMM_STOP_SEC_CONST_8BIT                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                             /* default const stop section */
#endif

#ifdef COMM_START_SEC_CONST_16BIT
# undef COMM_START_SEC_CONST_16BIT                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#ifdef COMM_STOP_SEC_CONST_16BIT
# undef COMM_STOP_SEC_CONST_16BIT                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef COMM_START_SEC_CONST_UNSPECIFIED
# undef COMM_START_SEC_CONST_UNSPECIFIED            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef COMM_STOP_SEC_CONST_UNSPECIFIED
# undef COMM_STOP_SEC_CONST_UNSPECIFIED             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/* CONST PBCFG sections */

#ifdef COMM_START_SEC_PBCFG
# undef COMM_START_SEC_PBCFG                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#ifdef COMM_STOP_SEC_PBCFG
# undef COMM_STOP_SEC_PBCFG                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#ifdef COMM_START_SEC_VAR_NOINIT_8BIT
# undef COMM_START_SEC_VAR_NOINIT_8BIT              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef COMM_STOP_SEC_VAR_NOINIT_8BIT
# undef COMM_STOP_SEC_VAR_NOINIT_8BIT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef COMM_START_SEC_VAR_NOINIT_16BIT
# undef COMM_START_SEC_VAR_NOINIT_16BIT             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef COMM_STOP_SEC_VAR_NOINIT_16BIT
# undef COMM_STOP_SEC_VAR_NOINIT_16BIT              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef COMM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef COMM_START_SEC_VAR_NOINIT_UNSPECIFIED       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

/* VAR PBCFG sections */

#ifdef COMM_START_SEC_VAR_PBCFG
# undef COMM_START_SEC_VAR_PBCFG                     /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG                         /* mapped to default var pbcfg section */
#endif
#ifdef COMM_STOP_SEC_VAR_PBCFG
# undef COMM_STOP_SEC_VAR_PBCFG                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_PBCFG                                /* default var stop section */
#endif

/* VAR ZERO INIT sections */

#ifdef COMM_START_SEC_VAR_ZERO_INIT_8BIT
# undef COMM_START_SEC_VAR_ZERO_INIT_8BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef COMM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef COMM_STOP_SEC_VAR_ZERO_INIT_8BIT            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_8BIT
#endif

#ifdef COMM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef COMM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED    /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef COMM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef COMM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED     /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

/* VAR NVRAM sections */

#ifdef COMM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
# undef COMM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif
#ifdef COMM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
# undef COMM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif

/**********************************************************************************************************************
 *  COMM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  CanSM START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef CANSM_START_SEC_CODE
# undef CANSM_START_SEC_CODE
# define START_SEC_CODE                                               /* mapped to default code section */
#endif

#ifdef CANSM_STOP_SEC_CODE
# undef CANSM_STOP_SEC_CODE
# define STOP_SEC_CODE                                                /* default code stop section */
#endif


#ifdef CANSM_START_SEC_APPL_CODE
# undef CANSM_START_SEC_APPL_CODE
# define START_SEC_CODE                                               /* mapped to default code section */
#endif

#ifdef CANSM_STOP_SEC_APPL_CODE
# undef CANSM_STOP_SEC_APPL_CODE
# define STOP_SEC_CODE                                                /* default code stop section */
#endif
 


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */


#ifdef CANSM_START_SEC_CONST_8BIT
# undef CANSM_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif

#ifdef CANSM_STOP_SEC_CONST_8BIT
# undef CANSM_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST                                               /* default const stop section */
#endif

#ifdef CANSM_START_SEC_CONST_32BIT
# undef CANSM_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif

#ifdef CANSM_STOP_SEC_CONST_32BIT
# undef CANSM_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif


#ifdef CANSM_START_SEC_CONST_UNSPECIFIED
# undef CANSM_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef CANSM_STOP_SEC_CONST_UNSPECIFIED
# undef CANSM_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

/* FAST CONST sections */
#ifdef CANSM_START_SEC_CONST_FAST_8BIT
# undef CANSM_START_SEC_CONST_FAST_8BIT
# define START_SEC_CONST_FAST_8BIT
#endif

#ifdef CANSM_STOP_SEC_CONST_FAST_8BIT
# undef CANSM_STOP_SEC_CONST_FAST_8BIT
# define STOP_SEC_CONST                                               /* default const stop section */
#endif

#ifdef CANSM_START_SEC_CONST_FAST_32BIT
# undef CANSM_START_SEC_CONST_FAST_32BIT
# define START_SEC_CONST_FAST_32BIT
#endif

#ifdef CANSM_STOP_SEC_CONST_FAST_32BIT
# undef CANSM_STOP_SEC_CONST_FAST_32BIT
# define STOP_SEC_CONST
#endif


#ifdef CANSM_START_SEC_CONST_FAST_UNSPECIFIED
# undef CANSM_START_SEC_CONST_FAST_UNSPECIFIED
# define START_SEC_CONST_FAST_UNSPECIFIED
#endif

#ifdef CANSM_STOP_SEC_CONST_FAST_UNSPECIFIED
# undef CANSM_STOP_SEC_CONST_FAST_UNSPECIFIED
# define STOP_SEC_CONST
#endif



/* Postbuild CFG CONST sections */



/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */


/* VAR NOINIT sections */

#ifdef CANSM_START_SEC_VAR_NOINIT_8BIT
# undef CANSM_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef CANSM_STOP_SEC_VAR_NOINIT_8BIT
# undef CANSM_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR_NOINIT_8BIT
#endif


#ifdef CANSM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef CANSM_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef CANSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef CANSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif


/* VAR ZERO INIT sections */

#ifdef CANSM_START_SEC_VAR_ZERO_INIT_8BIT
# undef CANSM_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif

#ifdef CANSM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef CANSM_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR_ZERO_INIT_8BIT
#endif

/* VAR FAST INIT sections */

/* VAR FAST NOINIT sections */

#ifdef CANSM_START_SEC_VAR_FAST_NOINIT_8BIT
# undef CANSM_START_SEC_VAR_FAST_NOINIT_8BIT
# define START_SEC_VAR_FAST_NOINIT_8BIT
#endif

#ifdef CANSM_STOP_SEC_VAR_FAST_NOINIT_8BIT
# undef CANSM_STOP_SEC_VAR_FAST_NOINIT_8BIT
# define STOP_SEC_VAR_FAST_NOINIT_8BIT
#endif


#ifdef CANSM_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# undef CANSM_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif

#ifdef CANSM_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# undef CANSM_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif


/* VAR FAST ZERO INIT sections */

#ifdef CANSM_START_SEC_VAR_FAST_ZERO_INIT_8BIT
# undef CANSM_START_SEC_VAR_FAST_ZERO_INIT_8BIT
# define START_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif

#ifdef CANSM_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT
# undef CANSM_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT
# define STOP_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif







/**********************************************************************************************************************
 *  CanSM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  LINSM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef LINSM_START_SEC_CODE
  #undef LINSM_START_SEC_CODE
  #define START_SEC_CODE
#endif
#ifdef LINSM_STOP_SEC_CODE
  #undef LINSM_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef LINSM_START_SEC_CONST_8BIT
# undef LINSM_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif
#ifdef LINSM_STOP_SEC_CONST_8BIT
# undef LINSM_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

#ifdef LINSM_START_SEC_CONST_UNSPECIFIED
# undef LINSM_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef LINSM_STOP_SEC_CONST_UNSPECIFIED
# undef LINSM_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

#ifdef LINSM_START_SEC_PBCFG
# undef LINSM_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef LINSM_STOP_SEC_PBCFG
# undef LINSM_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#ifdef LINSM_START_SEC_VAR_NOINIT_8BIT
# undef LINSM_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef LINSM_STOP_SEC_VAR_NOINIT_8BIT
# undef LINSM_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef LINSM_START_SEC_VAR_NOINIT_16BIT
# undef LINSM_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef LINSM_STOP_SEC_VAR_NOINIT_16BIT
# undef LINSM_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef LINSM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef LINSM_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef LINSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef LINSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif


/* VAR ZERO INIT sections */

#ifdef LINSM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef LINSM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef LINSM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef LINSM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef LINSM_START_SEC_VAR_ZERO_INIT_8BIT
# undef LINSM_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef LINSM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef LINSM_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR_ZERO_INIT_8BIT
#endif


/**********************************************************************************************************************
 *  LINSM END
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined(DCMADDON_START_SEC_CODE)
# undef DCMADDON_START_SEC_CODE      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE         /* mapped to default code section */
#endif
#if defined(DCMADDON_STOP_SEC_CODE)
# undef DCMADDON_STOP_SEC_CODE       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif

#if defined(DCMADDON_START_SEC_CALLOUT_CODE)
# undef DCMADDON_START_SEC_CALLOUT_CODE                                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                                              /*mapped to default code section*/
#endif
#if defined(DCMADDON_STOP_SEC_CALLOUT_CODE)
# undef DCMADDON_STOP_SEC_CALLOUT_CODE                                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE                                               /*default code section*/
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#if defined(DCMADDON_START_SEC_VAR_INIT_UNSPECIFIED)
# undef DCMADDON_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined(DCMADDON_STOP_SEC_VAR_INIT_UNSPECIFIED)
# undef DCMADDON_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#if defined(DCMADDON_START_SEC_VAR_NOINIT_8BIT)
# undef DCMADDON_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined(DCMADDON_STOP_SEC_VAR_NOINIT_8BIT)
# undef DCMADDON_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(DCMADDON_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef DCMADDON_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined(DCMADDON_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef DCMADDON_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  DCMADDON END
 *********************************************************************************************************************/
#if defined(CDDDRM_START_SEC_CODE)
# undef CDDDRM_START_SEC_CODE      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE         /* mapped to default code section */
#endif
#if defined(CDDDRM_STOP_SEC_CODE)
# undef CDDDRM_STOP_SEC_CODE       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#if defined(CDDDRM_START_SEC_CONST_8BIT)
# undef CDDDRM_START_SEC_CONST_8BIT  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT     /* mapped to default const 8bit section */
#endif
#if defined(CDDDRM_STOP_SEC_CONST_8BIT)
# undef CDDDRM_STOP_SEC_CONST_8BIT   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST           /* default const stop section */
#endif

#if defined(CDDDRM_START_SEC_CONST_16BIT)
# undef CDDDRM_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined(CDDDRM_STOP_SEC_CONST_16BIT)
# undef CDDDRM_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(CDDDRM_START_SEC_CONST_32BIT)
# undef CDDDRM_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#if defined(CDDDRM_STOP_SEC_CONST_32BIT)
# undef CDDDRM_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif
#if defined(CDDDRM_START_SEC_CONST_UNSPECIFIED)
# undef CDDDRM_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined(CDDDRM_STOP_SEC_CONST_UNSPECIFIED)
# undef CDDDRM_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#if defined(CDDDRM_START_SEC_VAR_INIT_8BIT)
# undef CDDDRM_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT      /* mapped to default var init 8bit section */
#endif
#if defined(CDDDRM_STOP_SEC_VAR_INIT_8BIT)
# undef CDDDRM_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR                /* default var stop section */
#endif


/* VAR NOINIT sections */

#if defined(CDDDRM_START_SEC_VAR_NOINIT_8BIT)
# undef CDDDRM_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined(CDDDRM_STOP_SEC_VAR_NOINIT_8BIT)
# undef CDDDRM_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(CDDDRM_START_SEC_VAR_NOINIT_16BIT)
# undef CDDDRM_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined(CDDDRM_STOP_SEC_VAR_NOINIT_16BIT)
# undef CDDDRM_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(CDDDRM_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef CDDDRM_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined(CDDDRM_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef CDDDRM_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

/* ESCAN00065501 */
#if defined(CDDDRM_START_SEC_VAR_PBCFG)
# undef CDDDRM_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#if defined(CDDDRM_STOP_SEC_VAR_PBCFG)
# undef CDDDRM_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */

#if defined(CDDDRM_START_SEC_VAR_ZERO_INIT_8BIT)
# undef CDDDRM_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#if defined(CDDDRM_STOP_SEC_VAR_ZERO_INIT_8BIT)
# undef CDDDRM_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif

#if defined(CDDDRM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef CDDDRM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined(CDDDRM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef CDDDRM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif


/* VAR NVRAM sections */

#if defined (CDDDRM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED)
# undef CDDDRM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif
#if defined (CDDDRM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED)
# undef CDDDRM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
#endif
/**********************************************************************************************************************

 *  Cdd_AsrCdd START 
 *********************************************************************************************************************/
/* Copy the memory mapping defines for each of your configured CDDs and replace the prefix _CDD with the MSN of your configured CDD as higher case. */

/*******  CODE sections **********************************************************************************************/

#ifdef CDD_START_SEC_CODE
# undef CDD_START_SEC_CODE
# define START_SEC_CODE
#endif
#ifdef CDD_STOP_SEC_CODE
# undef CDD_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

/* Add additional memory mapping defines for each of you configured CDDs here. */

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

/* FAST CONST sections */

/* Postbuild CFG CONST sections */

/* Root table for postbuild data */

/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

/* VAR NOINIT sections */

/* VAR ZERO INIT sections */

/* VAR FAST INIT sections */

/* VAR FAST NOINIT sections */

/* VAR FAST ZERO INIT sections */

/**********************************************************************************************************************
 *  Cdd_AsrCdd END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  XCP START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined(XCP_START_SEC_CODE)
# undef XCP_START_SEC_CODE      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE         /* mapped to default code section */
#endif
#if defined(XCP_STOP_SEC_CODE)
# undef XCP_STOP_SEC_CODE       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#if defined(XCP_START_SEC_CONST_8BIT)
# undef XCP_START_SEC_CONST_8BIT  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT     /* mapped to default const 8bit section */
#endif
#if defined(XCP_STOP_SEC_CONST_8BIT)
# undef XCP_STOP_SEC_CONST_8BIT   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST           /* default const stop section */
#endif

#if defined(XCP_START_SEC_CONST_16BIT)
# undef XCP_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined(XCP_STOP_SEC_CONST_16BIT)
# undef XCP_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(XCP_START_SEC_CONST_32BIT)
# undef XCP_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#if defined(XCP_STOP_SEC_CONST_32BIT)
# undef XCP_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(XCP_START_SEC_CONST_UNSPECIFIED)
# undef XCP_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined(XCP_STOP_SEC_CONST_UNSPECIFIED)
# undef XCP_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

#if defined(XCP_START_SEC_PBCFG)
# undef XCP_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#if defined(XCP_STOP_SEC_PBCFG)
# undef XCP_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#if defined(XCP_START_SEC_VAR_INIT_8BIT)
# undef XCP_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT      /* mapped to default var init 8bit section */
#endif
#if defined(XCP_STOP_SEC_VAR_INIT_8BIT)
# undef XCP_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_8BIT                /* default var stop section */
#endif

#if defined(XCP_START_SEC_VAR_INIT_16BIT)
# undef XCP_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_16BIT
#endif
#if defined(XCP_STOP_SEC_VAR_INIT_16BIT)
# undef XCP_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_16BIT
#endif

#if defined(XCP_START_SEC_VAR_INIT_32BIT)
# undef XCP_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_32BIT
#endif
#if defined(XCP_STOP_SEC_VAR_INIT_32BIT)
# undef XCP_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_32BIT
#endif

#if defined(XCP_START_SEC_VAR_INIT_UNSPECIFIED)
# undef XCP_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined(XCP_STOP_SEC_VAR_INIT_UNSPECIFIED)
# undef XCP_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif


/* VAR NOINIT sections */

#if defined(XCP_START_SEC_VAR_NOINIT_8BIT)
# undef XCP_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOINIT_8BIT)
# undef XCP_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#if defined(XCP_START_SEC_VAR_NOINIT_16BIT)
# undef XCP_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOINIT_16BIT)
# undef XCP_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_16BIT
#endif

#if defined(XCP_START_SEC_VAR_NOINIT_32BIT)
# undef XCP_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOINIT_32BIT)
# undef XCP_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_32BIT
#endif

#if defined(XCP_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef XCP_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined(XCP_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef XCP_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

/* ESCAN00065501 */
#if defined(XCP_START_SEC_VAR_PBCFG)
# undef XCP_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#if defined(XCP_STOP_SEC_VAR_PBCFG)
# undef XCP_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_PBCFG
#endif


/* VAR ZERO INIT sections */

#if defined(XCP_START_SEC_VAR_ZERO_INIT_8BIT)
# undef XCP_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#if defined(XCP_STOP_SEC_VAR_ZERO_INIT_8BIT)
# undef XCP_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_8BIT
#endif

#if defined(XCP_START_SEC_VAR_ZERO_INIT_16BIT)
# undef XCP_START_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#if defined(XCP_STOP_SEC_VAR_ZERO_INIT_16BIT)
# undef XCP_STOP_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_16BIT
#endif

#if defined(XCP_START_SEC_VAR_ZERO_INIT_32BIT)
# undef XCP_START_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#if defined(XCP_STOP_SEC_VAR_ZERO_INIT_32BIT)
# undef XCP_STOP_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_32BIT
#endif

#if defined(XCP_START_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef XCP_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined(XCP_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef XCP_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif


/* VAR NOCACHE INIT sections */

#if defined(XCP_START_SEC_VAR_NOCACHE_INIT_8BIT)
# undef XCP_START_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_8BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_INIT_8BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_INIT_8BIT
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_INIT_16BIT)
# undef XCP_START_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_16BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_INIT_16BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_INIT_16BIT
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_INIT_32BIT)
# undef XCP_START_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_32BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_INIT_32BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_INIT_32BIT
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef XCP_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef XCP_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#endif

/* VAR NOCACHE NOINIT sections */

#if defined(XCP_START_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef XCP_START_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_8BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_NOINIT_8BIT
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef XCP_START_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_16BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_NOINIT_16BIT
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef XCP_START_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef XCP_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef XCP_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#endif

/* VAR NOCACHE ZERO INIT sections */

#if defined(XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
#endif

#if defined(XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef XCP_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#endif
#if defined(XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef XCP_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#endif

/* VAR Safe sections */
#if defined (XCP_START_SEC_VAR_INIT_UNSPECIFIED_SAFE)
# undef XCP_START_SEC_VAR_INIT_UNSPECIFIED_SAFE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined (XCP_STOP_SEC_VAR_INIT_UNSPECIFIED_SAFE)
# undef XCP_STOP_SEC_VAR_INIT_UNSPECIFIED_SAFE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

/**********************************************************************************************************************
 *  XCP END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  CANXCP START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef CANXCP_START_SEC_CODE
  #undef CANXCP_START_SEC_CODE
  #define START_SEC_CODE                            /* mapped to default code section */
#endif

#ifdef CANXCP_STOP_SEC_CODE
  #undef CANXCP_STOP_SEC_CODE
  #define STOP_SEC_CODE                             /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef CANXCP_START_SEC_CONST_8BIT
  #undef CANXCP_START_SEC_CONST_8BIT
  #define START_SEC_CONST_8BIT                      /* mapped to const 8 bit section */
#endif

#ifdef CANXCP_STOP_SEC_CONST_8BIT
  #undef CANXCP_STOP_SEC_CONST_8BIT
  #define STOP_SEC_CONST                            /* default const stop section */
#endif

#ifdef CANXCP_START_SEC_CONST_UNSPECIFIED
  #undef CANXCP_START_SEC_CONST_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED               /* mapped to const unspecified bit section */
#endif

#ifdef CANXCP_STOP_SEC_CONST_UNSPECIFIED
  #undef CANXCP_STOP_SEC_CONST_UNSPECIFIED
  #define STOP_SEC_CONST                            /* default const stop section */
#endif


/* Post build config unspecified */

#ifdef CANXCP_START_SEC_PBCFG_ROOT
  #undef CANXCP_START_SEC_PBCFG_ROOT
  #define START_SEC_CONST_PBCFG                     /* mapped to const unspecified section */
#endif

#ifdef CANXCP_STOP_SEC_PBCFG_ROOT
  #undef CANXCP_STOP_SEC_PBCFG_ROOT
  #define STOP_SEC_CONST                            /* default const stop section */
#endif


#ifdef CANXCP_START_SEC_PBCFG
  #undef CANXCP_START_SEC_PBCFG
  #define START_SEC_CONST_PBCFG                     /* mapped to const unspecified section */
#endif

#ifdef CANXCP_STOP_SEC_PBCFG
  #undef CANXCP_STOP_SEC_PBCFG
  #define STOP_SEC_CONST                            /* default const stop section */
#endif


/*******  VAR sections  **********************************************************************************************/

#ifdef CANXCP_START_SEC_VAR_INIT_8BIT
  #undef CANXCP_START_SEC_VAR_INIT_8BIT
  #define START_SEC_VAR_INIT_8BIT                 /* mapped to uninitialized RAM 8bit section */
#endif

#ifdef CANXCP_STOP_SEC_VAR_INIT_8BIT
  #undef CANXCP_STOP_SEC_VAR_INIT_8BIT
  #define STOP_SEC_VAR_INIT_8BIT                              /* default RAM stop section */
#endif


#ifdef CANXCP_START_SEC_VAR_NOINIT_8BIT
  #undef CANXCP_START_SEC_VAR_NOINIT_8BIT
  #define START_SEC_VAR_NOINIT_8BIT                 /* mapped to uninitialized RAM 8bit section */
#endif

#ifdef CANXCP_STOP_SEC_VAR_NOINIT_8BIT
  #undef CANXCP_STOP_SEC_VAR_NOINIT_8BIT
  #define STOP_SEC_VAR_NOINIT_8BIT                              /* default RAM stop section */
#endif


#ifdef CANXCP_START_SEC_VAR_NOINIT_UNSPECIFIED
  #undef CANXCP_START_SEC_VAR_NOINIT_UNSPECIFIED
  #define START_SEC_VAR_NOINIT_UNSPECIFIED          /* mapped to uninitialized RAM unspecified section */
#endif

#ifdef CANXCP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
  #undef CANXCP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
  #define STOP_SEC_VAR_NOINIT_UNSPECIFIED                              /* default RAM stop section */
#endif


#ifdef CANXCP_START_SEC_VAR_INIT_UNSPECIFIED_SAFE 
    #undef CANXCP_START_SEC_VAR_INIT_UNSPECIFIED_SAFE 
    #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef CANXCP_STOP_SEC_VAR_INIT_UNSPECIFIED_SAFE 
    #undef CANXCP_STOP_SEC_VAR_INIT_UNSPECIFIED_SAFE 
    #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

/**********************************************************************************************************************
 *  CANXCP END
 *********************************************************************************************************************/

/* ==== Start sections mapping ==== */
#ifdef DCM_START_SEC_CONST_8
# undef DCM_START_SEC_CONST_8                                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT                                        /*mapped to default const section */
#endif

#ifdef DCM_START_SEC_CONST_16
# undef DCM_START_SEC_CONST_16                                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT                                       /*mapped to default const section */
#endif

#ifdef DCM_START_SEC_CONST_32
# undef DCM_START_SEC_CONST_32                                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT                                       /*mapped to default const section */
#endif

#ifdef DCM_START_SEC_CONST_UNSPECIFIED
# undef DCM_START_SEC_CONST_UNSPECIFIED                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED                                 /*mapped to default const section */
#endif

#ifdef DCM_START_SEC_CALIB_8
# undef DCM_START_SEC_CALIB_8                                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT                                        /*mapped to default const section */
#endif

#ifdef DCM_START_SEC_CALIB_16
# undef DCM_START_SEC_CALIB_16                                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT                                       /*mapped to default const section */
#endif

#ifdef DCM_START_SEC_CALIB_32
# undef DCM_START_SEC_CALIB_32                                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT                                       /*mapped to default const section */
#endif

#ifdef DCM_START_SEC_CALIB_UNSPECIFIED
# undef DCM_START_SEC_CALIB_UNSPECIFIED                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED                                 /* mapped to default const section */
#endif

#ifdef DCM_START_SEC_PBCFG
# undef DCM_START_SEC_PBCFG                                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG                                       /* mapped to default const section */
#endif

#ifdef DCM_START_SEC_VAR_PBCFG
# undef DCM_START_SEC_VAR_PBCFG                                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG                                         /* mapped to default var section */
#endif

#ifdef DCM_START_SEC_VAR_INIT_8
# undef DCM_START_SEC_VAR_INIT_8                                   	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT                                     /*mapped to default initialized var section*/
#endif

#ifdef DCM_START_SEC_VAR_NO_INIT_8
# undef DCM_START_SEC_VAR_NO_INIT_8                                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT                                   /*mapped to default var section*/
#endif

#ifdef DCM_START_SEC_VAR_NO_INIT_16
# undef DCM_START_SEC_VAR_NO_INIT_16                                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT                                  /*mapped to default var section*/
#endif

#ifdef DCM_START_SEC_VAR_NO_INIT_32
# undef DCM_START_SEC_VAR_NO_INIT_32
# define START_SEC_VAR_NOINIT_32BIT                                  /*mapped to default var section*/
#endif

#ifdef DCM_START_SEC_VAR_INIT_32
# undef DCM_START_SEC_VAR_INIT_32                                  	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_32BIT                                    /*mapped to default initialized var section*/
#endif

#ifdef DCM_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef DCM_START_SEC_VAR_NO_INIT_UNSPECIFIED                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED                            /*mapped to default var section*/
#endif

#ifdef DCM_START_SEC_CODE
# undef DCM_START_SEC_CODE                                           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                                              /* mapped to default code section */
#endif

#ifdef DCM_START_SEC_APPL_CODE
# undef DCM_START_SEC_APPL_CODE                                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                                              /* mapped to default code section */
#endif

#ifdef DCM_START_SEC_CALLOUT_CODE
# undef DCM_START_SEC_CALLOUT_CODE                                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                                              /* mapped to default code section */
#endif

/* ==== Stop sections mapping ==== */
#ifdef DCM_STOP_SEC_CONST_8
# undef DCM_STOP_SEC_CONST_8                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                                              /* default const section */
#endif

#ifdef DCM_STOP_SEC_CONST_16
# undef DCM_STOP_SEC_CONST_16                                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                                              /* default const section */
#endif

#ifdef DCM_STOP_SEC_CONST_32
# undef DCM_STOP_SEC_CONST_32
# define STOP_SEC_CONST                                              /* default const section */
#endif

#ifdef DCM_STOP_SEC_CONST_UNSPECIFIED
# undef DCM_STOP_SEC_CONST_UNSPECIFIED                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                                              /* default const section */
#endif

#ifdef DCM_STOP_SEC_CALIB_8
# undef DCM_STOP_SEC_CALIB_8                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                                              /* default const section */
#endif

#ifdef DCM_STOP_SEC_CALIB_16
# undef DCM_STOP_SEC_CALIB_16                                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                                              /* default const section */
#endif

#ifdef DCM_STOP_SEC_CALIB_32
# undef DCM_STOP_SEC_CALIB_32
# define STOP_SEC_CONST                                              /* default const section */
#endif

#ifdef DCM_STOP_SEC_CALIB_UNSPECIFIED
# undef DCM_STOP_SEC_CALIB_UNSPECIFIED                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                                              /* default const section */
#endif

#ifdef DCM_STOP_SEC_PBCFG
# undef DCM_STOP_SEC_PBCFG                                           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                                              /* default const section */
#endif

#ifdef DCM_STOP_SEC_VAR_INIT_8
# undef DCM_STOP_SEC_VAR_INIT_8                                   	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_8BIT                                                /*default initialized var section*/
#endif

#ifdef DCM_STOP_SEC_VAR_NO_INIT_8
# undef DCM_STOP_SEC_VAR_NO_INIT_8                                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_8BIT                                                /*default var section*/
#endif

#ifdef DCM_STOP_SEC_VAR_NO_INIT_16
# undef DCM_STOP_SEC_VAR_NO_INIT_16                                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_16BIT                                                /*default var section*/
#endif

#ifdef DCM_STOP_SEC_VAR_NO_INIT_32
# undef DCM_STOP_SEC_VAR_NO_INIT_32                                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_32BIT                                                /*default var section*/
#endif

#ifdef DCM_STOP_SEC_VAR_INIT_32
# undef DCM_STOP_SEC_VAR_INIT_32                                  	 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_32BIT                                                /*default initialized var section*/
#endif

#ifdef DCM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef DCM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED                                                /*default var section*/
#endif

#ifdef DCM_STOP_SEC_VAR_PBCFG
# undef DCM_STOP_SEC_VAR_PBCFG                                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_PBCFG                                                /*default var section */
#endif

#ifdef DCM_STOP_SEC_CODE
# undef DCM_STOP_SEC_CODE                                            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE                                               /* default code section */
#endif

#ifdef DCM_STOP_SEC_APPL_CODE
# undef DCM_STOP_SEC_APPL_CODE                                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE                                               /* default code section */
#endif

#ifdef DCM_STOP_SEC_CALLOUT_CODE
# undef DCM_STOP_SEC_CALLOUT_CODE                                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE                                               /* default code section */
#endif

/** DEM **********************************************************************/
/*---------------------START-MODULE-SPECIFIC-START-SECTIONS------------------*/

                                                            /* code sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_START_SEC_CODE)
# undef DEM_START_SEC_CODE                                                     /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

#if defined (DEM_START_SEC_CALLOUT_CODE)
# undef DEM_START_SEC_CALLOUT_CODE                                             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

#if defined (DEM_START_SEC_CODE_LIB)
# undef DEM_START_SEC_CODE_LIB                                                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

                                               /* uninitialized RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_START_SEC_VAR_NOINIT_8BIT)
# undef DEM_START_SEC_VAR_NOINIT_8BIT                                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined (DEM_START_SEC_VAR_NOINIT_16BIT)
# undef DEM_START_SEC_VAR_NOINIT_16BIT                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined (DEM_START_SEC_VAR_NOINIT_32BIT)
# undef DEM_START_SEC_VAR_NOINIT_32BIT                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined (DEM_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef DEM_START_SEC_VAR_NOINIT_UNSPECIFIED                                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_VAR_UNCACHED_UNSPECIFIED)
# undef DEM_START_SEC_VAR_UNCACHED_UNSPECIFIED                                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_VAR_NOINIT_UNSPECIFIED_SAT0)
# undef DEM_START_SEC_VAR_NOINIT_UNSPECIFIED_SAT0                             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_VAR_NOINIT_UNSPECIFIED_SAT1)
# undef DEM_START_SEC_VAR_NOINIT_UNSPECIFIED_SAT1                             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

                                                 /* initialized RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_START_SEC_VAR_INIT_8BIT)
# undef DEM_START_SEC_VAR_INIT_8BIT                                            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT
#endif
#if defined (DEM_START_SEC_VAR_INIT_32BIT)
# undef DEM_START_SEC_VAR_INIT_32BIT                                           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_32BIT
#endif

                                              /* post-buildable RAM sections */
/*---------------------------------------------------------------------------*/
#if defined (DEM_START_SEC_VAR_PBCFG)
# undef DEM_START_SEC_VAR_PBCFG                                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif


                                                          /* NV RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_START_SEC_VAR_SAVED_ZONE0_8BIT)
# undef DEM_START_SEC_VAR_SAVED_ZONE0_8BIT                                     /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif

#if defined (DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED)
# undef DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_CONST_SAVED_RECOVERY_ZONE0)
# undef DEM_START_SEC_CONST_SAVED_RECOVERY_ZONE0                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif

                                                             /* ROM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_START_SEC_CONST_8BIT)
# undef DEM_START_SEC_CONST_8BIT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT
#endif
#if defined (DEM_START_SEC_CONST_16BIT)
# undef DEM_START_SEC_CONST_16BIT                                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined (DEM_START_SEC_CONST_32BIT)
# undef DEM_START_SEC_CONST_32BIT                                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#if defined (DEM_START_SEC_CONST_UNSPECIFIED)
# undef DEM_START_SEC_CONST_UNSPECIFIED                                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_CONFIG_DATA_UNSPECIFIED)
# undef DEM_START_SEC_CONFIG_DATA_UNSPECIFIED                                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_PBCFG_ROOT)
# undef DEM_START_SEC_PBCFG_ROOT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif

#if defined (DEM_START_SEC_CALIB_UNSPECIFIED)
# undef DEM_START_SEC_CALIB_UNSPECIFIED                                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif

#if defined (DEM_START_SEC_CALIB_8BIT)
# undef DEM_START_SEC_CALIB_8BIT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT
#endif

#if defined (DEM_START_SEC_PBCFG)
# undef DEM_START_SEC_PBCFG                                                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif



/*---------------------STOP-MODULE-SPECIFIC-START-SECTIONS-------------------*/

/*---------------------START-MODULE-SPECIFIC-STOP-SECTIONS-------------------*/


                                                            /* code sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_STOP_SEC_CODE)
# undef DEM_STOP_SEC_CODE                                                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

#if defined (DEM_STOP_SEC_CALLOUT_CODE)
# undef DEM_STOP_SEC_CALLOUT_CODE                                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

#if defined (DEM_STOP_SEC_CODE_LIB)
# undef DEM_STOP_SEC_CODE_LIB                                                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

                                               /* uninitialized RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_STOP_SEC_VAR_NOINIT_8BIT)
# undef DEM_STOP_SEC_VAR_NOINIT_8BIT                                           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_8BIT
#endif
#if defined (DEM_STOP_SEC_VAR_NOINIT_16BIT)
# undef DEM_STOP_SEC_VAR_NOINIT_16BIT                                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_16BIT
#endif
#if defined (DEM_STOP_SEC_VAR_NOINIT_32BIT)
# undef DEM_STOP_SEC_VAR_NOINIT_32BIT                                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_32BIT
#endif
#if defined (DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED                                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_STOP_SEC_VAR_UNCACHED_UNSPECIFIED)
# undef DEM_STOP_SEC_VAR_UNCACHED_UNSPECIFIED                                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED_SAT0)
# undef DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED_SAT0                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED_SAT1)
# undef DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED_SAT1                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif


                                                 /* initialized RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_STOP_SEC_VAR_INIT_8BIT)
# undef DEM_STOP_SEC_VAR_INIT_8BIT                                             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_8BIT
#endif
#if defined (DEM_STOP_SEC_VAR_INIT_32BIT)
# undef DEM_STOP_SEC_VAR_INIT_32BIT                                            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_32BIT
#endif

                                              /* post-buildable RAM sections */
/*---------------------------------------------------------------------------*/
#if defined (DEM_STOP_SEC_VAR_PBCFG)
# undef DEM_STOP_SEC_VAR_PBCFG                                                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_PBCFG
#endif

                                                          /* NV RAM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED)
# undef DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#if defined (DEM_STOP_SEC_VAR_SAVED_ZONE0_8BIT)
# undef DEM_STOP_SEC_VAR_SAVED_ZONE0_8BIT                                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_8BIT
#endif

#if defined (DEM_STOP_SEC_CONST_SAVED_RECOVERY_ZONE0)
# undef DEM_STOP_SEC_CONST_SAVED_RECOVERY_ZONE0                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

                                                             /* ROM sections */
/*---------------------------------------------------------------------------*/

#if defined (DEM_STOP_SEC_CONST_8BIT)
# undef DEM_STOP_SEC_CONST_8BIT                                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif
#if defined (DEM_STOP_SEC_CONST_16BIT)
# undef DEM_STOP_SEC_CONST_16BIT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif
#if defined (DEM_STOP_SEC_CONST_32BIT)
# undef DEM_STOP_SEC_CONST_32BIT                                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif
#if defined (DEM_STOP_SEC_CONST_UNSPECIFIED)
# undef DEM_STOP_SEC_CONST_UNSPECIFIED                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined (DEM_STOP_SEC_PBCFG_ROOT)
# undef DEM_STOP_SEC_PBCFG_ROOT                                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined (DEM_STOP_SEC_CALIB_UNSPECIFIED)
# undef DEM_STOP_SEC_CALIB_UNSPECIFIED                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif
#if defined (DEM_STOP_SEC_CALIB_8BIT)
# undef DEM_STOP_SEC_CALIB_8BIT                                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined (DEM_STOP_SEC_PBCFG)
# undef DEM_STOP_SEC_PBCFG                                                     /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#include "Dem_MemMap.h"

/*---------------------STOP-MODULE-SPECIFIC-STOP-SECTIONS--------------------*/
/** End of DEM ***************************************************************/



/**********************************************************************************************************************
 *  J1939DCM START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef J1939DCM_START_SEC_CODE
  #undef J1939DCM_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CODE      /* mapped to default code section */
#endif
#ifdef J1939DCM_STOP_SEC_CODE
  #undef J1939DCM_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CODE      /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef J1939DCM_START_SEC_CONST_8BIT
# undef J1939DCM_START_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT      /* mapped to default const 8bit section */
#endif
#ifdef J1939DCM_STOP_SEC_CONST_8BIT
# undef J1939DCM_STOP_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST           /* default const stop section */
#endif

#ifdef J1939DCM_START_SEC_CONST_16BIT
# undef J1939DCM_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#ifdef J1939DCM_STOP_SEC_CONST_16BIT
# undef J1939DCM_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef J1939DCM_START_SEC_CONST_32BIT
# undef J1939DCM_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#ifdef J1939DCM_STOP_SEC_CONST_32BIT
# undef J1939DCM_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef J1939DCM_START_SEC_CONST_UNSPECIFIED
# undef J1939DCM_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef J1939DCM_STOP_SEC_CONST_UNSPECIFIED
# undef J1939DCM_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

#ifdef J1939DCM_START_SEC_PBCFG
# undef J1939DCM_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#ifdef J1939DCM_STOP_SEC_PBCFG
# undef J1939DCM_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef J1939DCM_START_SEC_PBCFG_ROOT
# undef J1939DCM_START_SEC_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#ifdef J1939DCM_STOP_SEC_PBCFG_ROOT
# undef J1939DCM_STOP_SEC_PBCFG_ROOT       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef J1939DCM_START_SEC_VAR_INIT_8BIT
# undef J1939DCM_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT      /* mapped to default var init 8bit section */
#endif
#ifdef J1939DCM_STOP_SEC_VAR_INIT_8BIT
# undef J1939DCM_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_8BIT                /* default var stop section */
#endif

#ifdef J1939DCM_START_SEC_VAR_INIT_16BIT
# undef J1939DCM_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_16BIT
#endif
#ifdef J1939DCM_STOP_SEC_VAR_INIT_16BIT
# undef J1939DCM_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_16BIT
#endif

#ifdef J1939DCM_START_SEC_VAR_INIT_32BIT
# undef J1939DCM_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_32BIT
#endif
#ifdef J1939DCM_STOP_SEC_VAR_INIT_32BIT
# undef J1939DCM_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_32BIT
#endif

#ifdef J1939DCM_START_SEC_VAR_INIT_UNSPECIFIED
# undef J1939DCM_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef J1939DCM_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef J1939DCM_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif


/* VAR NOINIT sections */

#ifdef J1939DCM_START_SEC_VAR_NOINIT_8BIT
# undef J1939DCM_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef J1939DCM_STOP_SEC_VAR_NOINIT_8BIT
# undef J1939DCM_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef J1939DCM_START_SEC_VAR_NOINIT_16BIT
# undef J1939DCM_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef J1939DCM_STOP_SEC_VAR_NOINIT_16BIT
# undef J1939DCM_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef J1939DCM_START_SEC_VAR_NOINIT_32BIT
# undef J1939DCM_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef J1939DCM_STOP_SEC_VAR_NOINIT_32BIT
# undef J1939DCM_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef J1939DCM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef J1939DCM_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef J1939DCM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef J1939DCM_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

/* ESCAN00065501 */
#ifdef J1939DCM_START_SEC_VAR_PBCFG
# undef J1939DCM_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#ifdef J1939DCM_STOP_SEC_VAR_PBCFG
# undef J1939DCM_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_PBCFG
#endif



/**********************************************************************************************************************
 *  J1939DCM END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2015 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  VEC_RomTest_MemMap.h
 *
 *   Description:  VEC_RomTest Memory Mapping header file
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * VEC_RomTest specific defines
 *********************************************************************************************************************/

/* open sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: VEC_RomTest_START_SEC_CODE
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef VEC_RomTest_START_SEC_CODE
# undef VEC_RomTest_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: VEC_RomTest_START_SEC_CONST_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef VEC_RomTest_START_SEC_CONST_UNSPECIFIED
# undef VEC_RomTest_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: VEC_RomTest_START_SEC_VAR_NOINIT_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef VEC_RomTest_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef VEC_RomTest_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: VEC_RomTest_START_SEC_VAR_INIT_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef VEC_RomTest_START_SEC_VAR_INIT_UNSPECIFIED
# undef VEC_RomTest_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: VEC_RomTest_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef VEC_RomTest_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef VEC_RomTest_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* close sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: VEC_RomTest_STOP_SEC_CODE
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef VEC_RomTest_STOP_SEC_CODE
# undef VEC_RomTest_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: VEC_RomTest_STOP_SEC_CONST_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef VEC_RomTest_STOP_SEC_CONST_UNSPECIFIED
# undef VEC_RomTest_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: VEC_RomTest_STOP_SEC_VAR_NOINIT_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef VEC_RomTest_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef VEC_RomTest_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: VEC_RomTest_STOP_SEC_VAR_INIT_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef VEC_RomTest_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef VEC_RomTest_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: VEC_RomTest_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
 *********************************************************************************************************************/

/* PRQA S 0883 L1 */ /* MD_Rte_0883 */
#ifdef VEC_RomTest_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef VEC_RomTest_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif
/* PRQA L:L1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
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
   MD_Rte_0883:  MISRA rule: 19.15
     Reason:     AUTOSAR SWS Memory Mapping requires inclusion of MemMap.h multiple times in a file in order to
                 select appropriate #pragma directives.
     Risk:       MemMap.h is provided by the integrator, hence many risks may occur, caused by wrong implementation of this file.
     Prevention: The integrator strictly has to adhere to the definitions of the AUTOSAR SWS Memory Mapping. Extensions to
                 the file not described in the SWS may not be put into MemMap.h. This has to be verified by code inspection.

*/

/**********************************************************************************************************************
 *  VDEM42 START
 *********************************************************************************************************************/

/*******  DATA sections **********************************************************************************************/

#if defined(VDEM42_START_SEC_VAR_INIT_UNSPECIFIED)
# undef VDEM42_START_SEC_VAR_INIT_UNSPECIFIED                                                                                                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED          /* mapped to default data section */
#endif

#if defined(VDEM42_STOP_SEC_VAR_INIT_UNSPECIFIED)
# undef VDEM42_STOP_SEC_VAR_INIT_UNSPECIFIED                                                                                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR                            /* default data stop section */
#endif

/*******  CODE sections **********************************************************************************************/

#if defined(VDEM42_START_SEC_CODE)
# undef VDEM42_START_SEC_CODE                                                                                                                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                          /* mapped to default code section */
#endif

#if defined(VDEM42_STOP_SEC_CODE)
# undef VDEM42_STOP_SEC_CODE                                                                                                                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE                           /* default code stop section */
#endif

/**********************************************************************************************************************
 *  VDEM42 END
 *********************************************************************************************************************/

/* Kernbauer Version: 1.14 Konfiguration: DrvCan_Mpc5700Flexcan3Asr Erzeugungsgangnummer: 820 */

/*        STARTSINGLE_OF_MULTIPLE_COMMENT      */


/**********************************************************************************************************************
 *  Can START  DRVCAN_IMXFLEXCAN3ASR
 *********************************************************************************************************************/

#if defined (CAN_REMAP_PB_SECTIONS)        /* PRQA S 0883 */ /* Appears only while testing */
/* for none PB variants the code will be mapped to standard sections, so the generated and static code can ignore the variant handling */
# if defined (CAN_START_SEC_PBCFG)
#  undef CAN_START_SEC_PBCFG                /* PRQA S 0841 */ /* MD_MSR_19.6 */
#  define CAN_START_SEC_CONST_UNSPECIFIED
# endif
# if defined (CAN_STOP_SEC_PBCFG)
#  undef CAN_STOP_SEC_PBCFG                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#  define CAN_STOP_SEC_CONST_UNSPECIFIED
# endif

# if defined (CAN_START_SEC_VAR_PBCFG)
#  undef CAN_START_SEC_VAR_PBCFG            /* PRQA S 0841 */ /* MD_MSR_19.6 */
#  define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
# endif
# if defined (CAN_STOP_SEC_VAR_PBCFG)
#  undef CAN_STOP_SEC_VAR_PBCFG             /* PRQA S 0841 */ /* MD_MSR_19.6 */
#  define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# endif
#endif

/*******  CODE sections **********************************************************************************************/

#ifdef CAN_START_SEC_CODE                             /* CAN code */
# undef CAN_START_SEC_CODE                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                               /* mapped to default code section */
#endif
#ifdef CAN_STOP_SEC_CODE
# undef CAN_STOP_SEC_CODE                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

#ifdef CAN_START_SEC_STATIC_CODE                      /* CAN static code */
# undef CAN_START_SEC_STATIC_CODE                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                               /* mapped to default code section */
#endif
#ifdef CAN_STOP_SEC_STATIC_CODE
# undef CAN_STOP_SEC_STATIC_CODE                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

#ifdef CAN_START_SEC_CODE_APPL                        /* Appl code (generic precopy)*/
# undef CAN_START_SEC_CODE_APPL                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                               /* mapped to default code section */
#endif
#ifdef CAN_STOP_SEC_CODE_APPL
# undef CAN_STOP_SEC_CODE_APPL                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef CAN_START_SEC_CONST_8BIT                       /* Const 8bit */
# undef CAN_START_SEC_CONST_8BIT                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT                         /* mapped to default const 8bit section */
#endif
#ifdef CAN_STOP_SEC_CONST_8BIT
# undef CAN_STOP_SEC_CONST_8BIT                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef CAN_START_SEC_CONST_16BIT                      /* Const 16bit */
# undef CAN_START_SEC_CONST_16BIT                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT                        /* mapped to default const 16bit section */
#endif
#ifdef CAN_STOP_SEC_CONST_16BIT
# undef CAN_STOP_SEC_CONST_16BIT                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef CAN_START_SEC_CONST_32BIT                      /* Const 32bit */
# undef CAN_START_SEC_CONST_32BIT                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT                        /* mapped to default const 32bit section */
#endif
#ifdef CAN_STOP_SEC_CONST_32BIT
# undef CAN_STOP_SEC_CONST_32BIT                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef CAN_START_SEC_CONST_UNSPECIFIED                /* Const unspecified */
# undef CAN_START_SEC_CONST_UNSPECIFIED                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED                  /* mapped to default const unspec section */
#endif
#ifdef CAN_STOP_SEC_CONST_UNSPECIFIED
# undef CAN_STOP_SEC_CONST_UNSPECIFIED                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/* FAST CONST sections */
/* unused */

/* Postbuild CFG CONST sections */

/* Root table for postbuild data (not relevant for CFG5 AutoSar4.0.3) */
#ifdef CAN_START_SEC_PBCFG_ROOT                       /* Generated Postbuild Root Table */
# undef CAN_START_SEC_PBCFG_ROOT                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG                        /* mapped to default const postbuild section */
#endif
#ifdef CAN_STOP_SEC_PBCFG_ROOT
# undef CAN_STOP_SEC_PBCFG_ROOT                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef CAN_START_SEC_PBCFG                            /* Generated Postbuild */
# undef CAN_START_SEC_PBCFG                             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG                        /* mapped to default const postbuild section */
#endif
#ifdef CAN_STOP_SEC_PBCFG
# undef CAN_STOP_SEC_PBCFG                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef CAN_START_SEC_VAR_INIT_UNSPECIFIED             /* init RAM*/
# undef CAN_START_SEC_VAR_INIT_UNSPECIFIED              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED               /* mapped to default init var section */
#endif
#ifdef CAN_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef CAN_STOP_SEC_VAR_INIT_UNSPECIFIED               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif


/* VAR NOINIT sections */

#ifdef CAN_START_SEC_VAR_NOINIT_UNSPECIFIED           /* uninit RAM*/
# undef CAN_START_SEC_VAR_NOINIT_UNSPECIFIED            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED             /* mapped to default uninit var section */
#endif
#ifdef CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef CAN_START_SEC_VAR_NOINIT_8BIT                  /* uninit 8bit RAM*/
# undef CAN_START_SEC_VAR_NOINIT_8BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT             /* mapped to default uninit var section */
#endif
#ifdef CAN_STOP_SEC_VAR_NOINIT_8BIT
# undef CAN_STOP_SEC_VAR_NOINIT_8BIT                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef CAN_START_SEC_VAR_NOINIT_16BIT                  /* uninit 16bit RAM*/
# undef CAN_START_SEC_VAR_NOINIT_16BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT             /* mapped to default uninit var section */
#endif
#ifdef CAN_STOP_SEC_VAR_NOINIT_16BIT
# undef CAN_STOP_SEC_VAR_NOINIT_16BIT                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef CAN_START_SEC_VAR_NOINIT_32BIT                  /* uninit 32bit RAM*/
# undef CAN_START_SEC_VAR_NOINIT_32BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT             /* mapped to default uninit var section */
#endif
#ifdef CAN_STOP_SEC_VAR_NOINIT_32BIT
# undef CAN_STOP_SEC_VAR_NOINIT_32BIT                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_32BIT
#endif



/* VAR PBCFG sections */

#ifdef CAN_START_SEC_VAR_PBCFG           /* Generated Postbuild RAM*/
# undef CAN_START_SEC_VAR_PBCFG            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG             /* mapped to default uninit var section */
#endif
#ifdef CAN_STOP_SEC_VAR_PBCFG
# undef CAN_STOP_SEC_VAR_PBCFG             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_PBCFG
#endif

/* VAR ZERO INIT sections */
/* unused */


/* VAR FAST INIT sections */
/* unused */


/* VAR FAST NOINIT sections */
/* unused */

/* VAR FAST ZERO INIT sections */
/* unused */



/**********************************************************************************************************************
 *  Can END    DRVCAN_IMXFLEXCAN3ASR
 *********************************************************************************************************************/

/*  STOPSINGLE_OF_MULTIPLE_COMMENT  */
/* Kernbauer Version: 1.14 Konfiguration: DrvCan_Mpc5700Flexcan3Asr Erzeugungsgangnummer: 820 */

/* Kernbauer Version: 1.14 Konfiguration: DrvCan_Mpc5700Flexcan3Asr Erzeugungsgangnummer: 820 */

/* Kernbauer Version: 1.14 Konfiguration: DrvCan_Mpc5700Flexcan3Asr Erzeugungsgangnummer: 820 */

/* Kernbauer Version: 1.14 Konfiguration: DrvCan_Mpc5700Flexcan3Asr Erzeugungsgangnummer: 820 */

/* Kernbauer Version: 1.14 Konfiguration: DrvCan_Mpc5700Flexcan3Asr Erzeugungsgangnummer: 820 */

/* Kernbauer Version: 1.14 Konfiguration: DrvCan_Mpc5700Flexcan3Asr Erzeugungsgangnummer: 820 */

/* Kernbauer Version: 1.14 Konfiguration: DrvCan_Mpc5700Flexcan3Asr Erzeugungsgangnummer: 820 */

/************   Organi, Version 3.9.2 Vector-Informatik GmbH  ************/



/**********************************************************************************************************************
 *  LIN START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#if defined(LIN_START_SEC_CODE)
# undef LIN_START_SEC_CODE      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE         /* mapped to default code section */
#endif
#if defined(LIN_STOP_SEC_CODE)
# undef LIN_STOP_SEC_CODE       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif

#if defined(LIN_START_SEC_CODE_FAST)
# undef LIN_START_SEC_CODE_FAST /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE_FAST    /* mapped to default fast code section */
#endif
#if defined(LIN_STOP_SEC_CODE_FAST)
# undef LIN_STOP_SEC_CODE_FAST  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif

#if defined(LIN_START_SEC_CODE_ISR)
# undef LIN_START_SEC_CODE_ISR  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE_ISR     /* mapped to default ISR code section */
#endif
#if defined(LIN_STOP_SEC_CODE_ISR)
# undef LIN_STOP_SEC_CODE_ISR   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE          /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#if defined(LIN_START_SEC_CONST_8BIT)
# undef LIN_START_SEC_CONST_8BIT  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT     /* mapped to default const 8bit section */
#endif
#if defined(LIN_STOP_SEC_CONST_8BIT)
# undef LIN_STOP_SEC_CONST_8BIT   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST           /* default const stop section */
#endif

#if defined(LIN_START_SEC_CONST_16BIT)
# undef LIN_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined(LIN_STOP_SEC_CONST_16BIT)
# undef LIN_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(LIN_START_SEC_CONST_32BIT)
# undef LIN_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#if defined(LIN_STOP_SEC_CONST_32BIT)
# undef LIN_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(LIN_START_SEC_CONST_UNSPECIFIED)
# undef LIN_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined(LIN_STOP_SEC_CONST_UNSPECIFIED)
# undef LIN_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* FAST CONST sections */

#if defined(LIN_START_SEC_FAST_CONST_8BIT)
# undef LIN_START_SEC_FAST_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_8BIT
#endif
#if defined(LIN_STOP_SEC_FAST_CONST_8BIT)
# undef LIN_STOP_SEC_FAST_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(LIN_START_SEC_FAST_CONST_16BIT)
# undef LIN_START_SEC_FAST_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_16BIT
#endif
#if defined(LIN_STOP_SEC_FAST_CONST_16BIT)
# undef LIN_STOP_SEC_FAST_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(LIN_START_SEC_FAST_CONST_32BIT)
# undef LIN_START_SEC_FAST_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_32BIT
#endif
#if defined(LIN_STOP_SEC_FAST_CONST_32BIT)
# undef LIN_STOP_SEC_FAST_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(LIN_START_SEC_FAST_CONST_UNSPECIFIED)
# undef LIN_START_SEC_FAST_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_FAST_CONST_UNSPECIFIED
#endif
#if defined(LIN_STOP_SEC_FAST_CONST_UNSPECIFIED)
# undef LIN_STOP_SEC_FAST_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

/* NOTE: ASR3.x till ASR4.0.1 only. Root table for postbuild data */
#if defined(LIN_START_SEC_PBCFG_ROOT)
# undef LIN_START_SEC_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#if defined(LIN_STOP_SEC_PBCFG_ROOT)
# undef LIN_STOP_SEC_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/* ESCAN00065501 */
/* NOTE: ASR4.0.3 (CFG5) only. The origin root table for postbuild data. Relevant only for EcuM. */
#if defined(LIN_START_SEC_PBCFG_GLOBALROOT)
# undef LIN_START_SEC_PBCFG_GLOBALROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_PBCFG_GLOBALROOT
#endif
#if defined(LIN_STOP_SEC_PBCFG_GLOBALROOT)
# undef LIN_STOP_SEC_PBCFG_GLOBALROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(LIN_START_SEC_PBCFG)
# undef LIN_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#if defined(LIN_STOP_SEC_PBCFG)
# undef LIN_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#if defined(LIN_START_SEC_VAR_INIT_8BIT)
# undef LIN_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT      /* mapped to default var init 8bit section */
#endif
#if defined(LIN_STOP_SEC_VAR_INIT_8BIT)
# undef LIN_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_8BIT                /* default var stop section */
#endif

#if defined(LIN_START_SEC_VAR_INIT_16BIT)
# undef LIN_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_16BIT
#endif
#if defined(LIN_STOP_SEC_VAR_INIT_16BIT)
# undef LIN_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_16BIT
#endif

#if defined(LIN_START_SEC_VAR_INIT_32BIT)
# undef LIN_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_32BIT
#endif
#if defined(LIN_STOP_SEC_VAR_INIT_32BIT)
# undef LIN_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_32BIT
#endif

#if defined(LIN_START_SEC_VAR_INIT_UNSPECIFIED)
# undef LIN_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#if defined(LIN_STOP_SEC_VAR_INIT_UNSPECIFIED)
# undef LIN_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif


/* VAR NOINIT sections */

#if defined(LIN_START_SEC_VAR_NOINIT_8BIT)
# undef LIN_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#if defined(LIN_STOP_SEC_VAR_NOINIT_8BIT)
# undef LIN_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#if defined(LIN_START_SEC_VAR_NOINIT_16BIT)
# undef LIN_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#if defined(LIN_STOP_SEC_VAR_NOINIT_16BIT)
# undef LIN_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_16BIT
#endif

#if defined(LIN_START_SEC_VAR_NOINIT_32BIT)
# undef LIN_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#if defined(LIN_STOP_SEC_VAR_NOINIT_32BIT)
# undef LIN_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_32BIT
#endif

#if defined(LIN_START_SEC_VAR_NOINIT_UNSPECIFIED)
# undef LIN_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined(LIN_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
# undef LIN_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

/* ESCAN00065501 */
#if defined(LIN_START_SEC_VAR_PBCFG)
# undef LIN_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#if defined(LIN_STOP_SEC_VAR_PBCFG)
# undef LIN_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_PBCFG
#endif


/* VAR ZERO INIT sections */

#if defined(LIN_START_SEC_VAR_ZERO_INIT_8BIT)
# undef LIN_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#if defined(LIN_STOP_SEC_VAR_ZERO_INIT_8BIT)
# undef LIN_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_8BIT
#endif

#if defined(LIN_START_SEC_VAR_ZERO_INIT_16BIT)
# undef LIN_START_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#if defined(LIN_STOP_SEC_VAR_ZERO_INIT_16BIT)
# undef LIN_STOP_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_16BIT
#endif

#if defined(LIN_START_SEC_VAR_ZERO_INIT_32BIT)
# undef LIN_START_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#if defined(LIN_STOP_SEC_VAR_ZERO_INIT_32BIT)
# undef LIN_STOP_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_32BIT
#endif

#if defined(LIN_START_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef LIN_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined(LIN_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED)
# undef LIN_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif


/* VAR FAST INIT sections */

#if defined(LIN_START_SEC_VAR_FAST_INIT_8BIT)
# undef LIN_START_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_8BIT
#endif
#if defined(LIN_STOP_SEC_VAR_FAST_INIT_8BIT)
# undef LIN_STOP_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_INIT_8BIT
#endif

#if defined(LIN_START_SEC_VAR_FAST_INIT_16BIT)
# undef LIN_START_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_16BIT
#endif
#if defined(LIN_STOP_SEC_VAR_FAST_INIT_16BIT)
# undef LIN_STOP_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_INIT_16BIT
#endif

#if defined(LIN_START_SEC_VAR_FAST_INIT_32BIT)
# undef LIN_START_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_32BIT
#endif
#if defined(LIN_STOP_SEC_VAR_FAST_INIT_32BIT)
# undef LIN_STOP_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_INIT_32BIT
#endif

#if defined(LIN_START_SEC_VAR_FAST_INIT_UNSPECIFIED)
# undef LIN_START_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_UNSPECIFIED
#endif
#if defined(LIN_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED)
# undef LIN_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_INIT_UNSPECIFIED
#endif


/* VAR FAST NOINIT sections */

#if defined(LIN_START_SEC_VAR_FAST_NOINIT_8BIT)
# undef LIN_START_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_8BIT
#endif
#if defined(LIN_STOP_SEC_VAR_FAST_NOINIT_8BIT)
# undef LIN_STOP_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_NOINIT_8BIT
#endif

#if defined(LIN_START_SEC_VAR_FAST_NOINIT_16BIT)
# undef LIN_START_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_16BIT
#endif
#if defined(LIN_STOP_SEC_VAR_FAST_NOINIT_16BIT)
# undef LIN_STOP_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_NOINIT_16BIT
#endif

#if defined(LIN_START_SEC_VAR_FAST_NOINIT_32BIT)
# undef LIN_START_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_32BIT
#endif
#if defined(LIN_STOP_SEC_VAR_FAST_NOINIT_32BIT)
# undef LIN_STOP_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_NOINIT_32BIT
#endif

#if defined(LIN_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED)
# undef LIN_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif
#if defined(LIN_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED)
# undef LIN_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif

/* VAR FAST ZERO INIT sections */

#if defined(LIN_START_SEC_VAR_FAST_ZERO_INIT_8BIT)
# undef LIN_START_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif
#if defined(LIN_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT)
# undef LIN_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif

#if defined(LIN_START_SEC_VAR_FAST_ZERO_INIT_16BIT)
# undef LIN_START_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_16BIT
#endif
#if defined(LIN_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT)
# undef LIN_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_ZERO_INIT_16BIT
#endif

#if defined(LIN_START_SEC_VAR_FAST_ZERO_INIT_32BIT)
# undef LIN_START_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_32BIT
#endif
#if defined(LIN_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT)
# undef LIN_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_ZERO_INIT_32BIT
#endif

#if defined(LIN_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED)
# undef LIN_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
#endif
#if defined(LIN_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED)
# undef LIN_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
#endif

/* VAR NOCACHE INIT sections */

#if defined(LIN_START_SEC_VAR_NOCACHE_INIT_8BIT)
# undef LIN_START_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_8BIT
#endif
#if defined(LIN_STOP_SEC_VAR_NOCACHE_INIT_8BIT)
# undef LIN_STOP_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_INIT_8BIT
#endif

#if defined(LIN_START_SEC_VAR_NOCACHE_INIT_16BIT)
# undef LIN_START_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_16BIT
#endif
#if defined(LIN_STOP_SEC_VAR_NOCACHE_INIT_16BIT)
# undef LIN_STOP_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_INIT_16BIT
#endif

#if defined(LIN_START_SEC_VAR_NOCACHE_INIT_32BIT)
# undef LIN_START_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_32BIT
#endif
#if defined(LIN_STOP_SEC_VAR_NOCACHE_INIT_32BIT)
# undef LIN_STOP_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_INIT_32BIT
#endif

#if defined(LIN_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef LIN_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#endif
#if defined(LIN_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED)
# undef LIN_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#endif

/* VAR NOCACHE NOINIT sections */

#if defined(LIN_START_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef LIN_START_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_8BIT
#endif
#if defined(LIN_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT)
# undef LIN_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_NOINIT_8BIT
#endif

#if defined(LIN_START_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef LIN_START_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_16BIT
#endif
#if defined(LIN_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT)
# undef LIN_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_NOINIT_16BIT
#endif

#if defined(LIN_START_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef LIN_START_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif
#if defined(LIN_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT)
# undef LIN_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif

#if defined(LIN_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef LIN_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#endif
#if defined(LIN_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED)
# undef LIN_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#endif

/* VAR NOCACHE ZERO INIT sections */

#if defined(LIN_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef LIN_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
#endif
#if defined(LIN_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT)
# undef LIN_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
#endif

#if defined(LIN_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef LIN_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
#endif
#if defined(LIN_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT)
# undef LIN_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
#endif

#if defined(LIN_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef LIN_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
#endif
#if defined(LIN_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT)
# undef LIN_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
#endif

#if defined(LIN_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef LIN_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#endif
#if defined(LIN_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)
# undef LIN_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#endif

/**********************************************************************************************************************
 *  LIN END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  EcuAb_AsrIoHwAb START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef IOHWAB_START_SEC_CODE
    #undef IOHWAB_START_SEC_CODE
    #define START_SEC_CODE
#endif
#ifdef IOHWAB_STOP_SEC_CODE
    #undef IOHWAB_STOP_SEC_CODE
    #define STOP_SEC_CODE
#endif

/*******  CONST sections  ********************************************************************************************/

#ifdef IOHWAB_START_SEC_CONST_32
    #undef IOHWAB_START_SEC_CONST_32
    #define START_SEC_CONST_32
#endif
#ifdef IOHWAB_STOP_SEC_CONST_32
    #undef IOHWAB_STOP_SEC_CONST_32
    #define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

#ifdef IOHWAB_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #undef IOHWAB_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #define START_SEC_VAR_NO_INIT_UNSPECIFIED
#endif
#ifdef IOHWAB_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    #undef IOHWAB_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    #define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  EcuAb_AsrIoHwAb END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  PDUR START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef PDUR_START_SEC_CODE
# undef PDUR_START_SEC_CODE
# define START_SEC_CODE
#endif
#ifdef PDUR_STOP_SEC_CODE
# undef PDUR_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef PDUR_START_SEC_CONST_8BIT
# undef PDUR_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif
#ifdef PDUR_STOP_SEC_CONST_8BIT
# undef PDUR_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

#ifdef PDUR_START_SEC_CONST_16BIT
# undef PDUR_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef PDUR_STOP_SEC_CONST_16BIT
# undef PDUR_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef PDUR_START_SEC_CONST_32BIT
# undef PDUR_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef PDUR_STOP_SEC_CONST_32BIT
# undef PDUR_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef PDUR_START_SEC_CONST_UNSPECIFIED
# undef PDUR_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef PDUR_STOP_SEC_CONST_UNSPECIFIED
# undef PDUR_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

/* FAST CONST sections */


/* Postbuild CFG CONST sections */

/* Root table for postbuild data */
#ifdef PDUR_START_SEC_PBCFG
# undef PDUR_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef PDUR_STOP_SEC_PBCFG
# undef PDUR_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef PDUR_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef PDUR_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef PDUR_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef PDUR_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef PDUR_START_SEC_VAR_ZERO_INIT_8BIT
# undef PDUR_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef PDUR_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef PDUR_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR_ZERO_INIT_8BIT
#endif


/* VAR NOINIT sections */

#ifdef PDUR_START_SEC_VAR_NOINIT_8BIT
# undef PDUR_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef PDUR_STOP_SEC_VAR_NOINIT_8BIT
# undef PDUR_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef PDUR_START_SEC_VAR_NOINIT_16BIT
# undef PDUR_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef PDUR_STOP_SEC_VAR_NOINIT_16BIT
# undef PDUR_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef PDUR_START_SEC_VAR_NOINIT_32BIT
# undef PDUR_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef PDUR_STOP_SEC_VAR_NOINIT_32BIT
# undef PDUR_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR_NOINIT_32BIT
#endif


#ifdef PDUR_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef PDUR_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef PDUR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef PDUR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef PDUR_START_SEC_BUFFER_VAR_NOINIT_8BIT
# undef PDUR_START_SEC_BUFFER_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef PDUR_STOP_SEC_BUFFER_VAR_NOINIT_8BIT
# undef PDUR_STOP_SEC_BUFFER_VAR_NOINIT_8BIT
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

/* Postbuild CFG VAR sections */

#ifdef PDUR_START_SEC_VAR_PBCFG
# undef PDUR_START_SEC_VAR_PBCFG
# define START_SEC_VAR_PBCFG
#endif
#ifdef PDUR_STOP_SEC_VAR_PBCFG
# undef PDUR_STOP_SEC_VAR_PBCFG
# define STOP_SEC_VAR_PBCFG
#endif


/* VAR ZERO INIT sections */



/* VAR FAST INIT sections */



/* VAR FAST NOINIT sections */


/* VAR FAST ZERO INIT sections */



/**********************************************************************************************************************
 *  PDUR END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LIN INTERFACE START
 *********************************************************************************************************************/

/* Code */
#ifdef LINIF_START_SEC_CODE
  #undef LINIF_START_SEC_CODE
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef LINIF_STOP_SEC_CODE
  #undef LINIF_STOP_SEC_CODE
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

/* Const 8 bit */
#ifdef LINIF_START_SEC_CONST_8BIT
  #undef LINIF_START_SEC_CONST_8BIT
  #define START_SEC_CONST_8BIT                      /* mapped to const 8 bit section */
#endif
#ifdef LINIF_STOP_SEC_CONST_8BIT
  #undef LINIF_STOP_SEC_CONST_8BIT
  #define STOP_SEC_CONST                            /* default const stop section */
#endif

/* Const 16 bit */
#ifdef LINIF_START_SEC_CONST_16BIT
  #undef LINIF_START_SEC_CONST_16BIT
  #define START_SEC_CONST_16BIT                      /* mapped to const 16 bit section */
#endif
#ifdef LINIF_STOP_SEC_CONST_16BIT
  #undef LINIF_STOP_SEC_CONST_16BIT
  #define STOP_SEC_CONST                            /* default const stop section */
#endif

/* Const 32 bit */
#ifdef LINIF_START_SEC_CONST_32BIT
  #undef LINIF_START_SEC_CONST_32BIT
  #define START_SEC_CONST_32BIT                      /* mapped to const 32 bit section */
#endif
#ifdef LINIF_STOP_SEC_CONST_32BIT
  #undef LINIF_STOP_SEC_CONST_32BIT
  #define STOP_SEC_CONST                            /* default const stop section */
#endif

/* Const unspecified */
#ifdef LINIF_START_SEC_CONST_UNSPECIFIED
  #undef LINIF_START_SEC_CONST_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED               /* mapped to const unspecified section */
#endif
#ifdef LINIF_STOP_SEC_CONST_UNSPECIFIED
  #undef LINIF_STOP_SEC_CONST_UNSPECIFIED
  #define STOP_SEC_CONST                            /* default const stop section */
#endif

/* Post build config unspecified */
#ifdef LINIF_START_SEC_PBCFG
  #undef LINIF_START_SEC_PBCFG
  #define START_SEC_CONST_PBCFG                     /* mapped to post build section */
#endif
#ifdef LINIF_STOP_SEC_PBCFG
  #undef LINIF_STOP_SEC_PBCFG
  #define STOP_SEC_CONST                            /* default post build stop section */
#endif

/* Var noinit unspecified */
#ifdef LINIF_START_SEC_VAR_NOINIT_UNSPECIFIED
  #undef LINIF_START_SEC_VAR_NOINIT_UNSPECIFIED
  #define START_SEC_VAR_NOINIT_UNSPECIFIED          /* mapped to uninitialized var unspecified section */
#endif
#ifdef LINIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
  #undef LINIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
  #define STOP_SEC_VAR_NOINIT_UNSPECIFIED                              /* default var stop section */
#endif

/* Var noinit 8 bit */
#ifdef LINIF_START_SEC_VAR_NOINIT_8BIT
  #undef LINIF_START_SEC_VAR_NOINIT_8BIT
  #define START_SEC_VAR_NOINIT_8BIT                 /* mapped to uninitialized var 8 bit section */
#endif
#ifdef LINIF_STOP_SEC_VAR_NOINIT_8BIT
  #undef LINIF_STOP_SEC_VAR_NOINIT_8BIT
  #define STOP_SEC_VAR_NOINIT_8BIT                              /* default var stop section */
#endif

/* Var zero init 8 bit */
#ifdef LINIF_START_SEC_VAR_ZERO_INIT_8BIT
  #undef LINIF_START_SEC_VAR_ZERO_INIT_8BIT
  #define START_SEC_VAR_ZERO_INIT_8BIT              /* mapped to zero initialized var unspecified section */
#endif
#ifdef LINIF_STOP_SEC_VAR_ZERO_INIT_8BIT
  #undef LINIF_STOP_SEC_VAR_ZERO_INIT_8BIT
  #define STOP_SEC_VAR_ZERO_INIT_8BIT                              /* default var stop section */
#endif

/* Post build config unspecified */
#ifdef LINIF_START_SEC_VAR_PBCFG
  #undef LINIF_START_SEC_VAR_PBCFG
  #define START_SEC_VAR_PBCFG                       /* mapped to post build section */
#endif
#ifdef LINIF_STOP_SEC_VAR_PBCFG
  #undef LINIF_STOP_SEC_VAR_PBCFG
  #define STOP_SEC_VAR_PBCFG                              /* default post build stop section */
#endif

/**********************************************************************************************************************
 *  LIN INTERFACE END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LIN TP START
 *********************************************************************************************************************/

/* Code */
#ifdef LINTP_START_SEC_CODE
  #undef LINTP_START_SEC_CODE
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef LINTP_STOP_SEC_CODE
  #undef LINTP_STOP_SEC_CODE
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

/* Const 8 bit */
#ifdef LINTP_START_SEC_CONST_8BIT
  #undef LINTP_START_SEC_CONST_8BIT
  #define START_SEC_CONST_8BIT                      /* mapped to const 8 bit section */
#endif
#ifdef LINTP_STOP_SEC_CONST_8BIT
  #undef LINTP_STOP_SEC_CONST_8BIT
  #define STOP_SEC_CONST                            /* default const stop section */
#endif

/* Const 16 bit */
#ifdef LINTP_START_SEC_CONST_16BIT
  #undef LINTP_START_SEC_CONST_16BIT
  #define START_SEC_CONST_16BIT                      /* mapped to const 16 bit section */
#endif
#ifdef LINTP_STOP_SEC_CONST_16BIT
  #undef LINTP_STOP_SEC_CONST_16BIT
  #define STOP_SEC_CONST                            /* default const stop section */
#endif

/* Const 32 bit */
#ifdef LINTP_START_SEC_CONST_32BIT
  #undef LINTP_START_SEC_CONST_32BIT
  #define START_SEC_CONST_32BIT                      /* mapped to const 32 bit section */
#endif
#ifdef LINTP_STOP_SEC_CONST_32BIT
  #undef LINTP_STOP_SEC_CONST_32BIT
  #define STOP_SEC_CONST                            /* default const stop section */
#endif

/* Const unspecified */
#ifdef LINTP_START_SEC_CONST_UNSPECIFIED
  #undef LINTP_START_SEC_CONST_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED               /* mapped to const unspecified section */
#endif
#ifdef LINTP_STOP_SEC_CONST_UNSPECIFIED
  #undef LINTP_STOP_SEC_CONST_UNSPECIFIED
  #define STOP_SEC_CONST                            /* default const stop section */
#endif

/* Post build config unspecified */
#ifdef LINTP_START_SEC_PBCFG
  #undef LINTP_START_SEC_PBCFG
  #define START_SEC_CONST_PBCFG                     /* mapped to post build section */
#endif
#ifdef LINTP_STOP_SEC_PBCFG
  #undef LINTP_STOP_SEC_PBCFG
  #define STOP_SEC_CONST                            /* default post build stop section */
#endif

/* Var noinit unspecified */
#ifdef LINTP_START_SEC_VAR_NOINIT_UNSPECIFIED
  #undef LINTP_START_SEC_VAR_NOINIT_UNSPECIFIED
  #define START_SEC_VAR_NOINIT_UNSPECIFIED          /* mapped to uninitialized var unspecified section */
#endif
#ifdef LINTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
  #undef LINTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
  #define STOP_SEC_VAR_NOINIT_UNSPECIFIED                              /* default var stop section */
#endif

/* Var noinit 8 bit */
#ifdef LINTP_START_SEC_VAR_NOINIT_8BIT
  #undef LINTP_START_SEC_VAR_NOINIT_8BIT
  #define START_SEC_VAR_NOINIT_8BIT                 /* mapped to uninitialized var 8 bit section */
#endif
#ifdef LINTP_STOP_SEC_VAR_NOINIT_8BIT
  #undef LINTP_STOP_SEC_VAR_NOINIT_8BIT
  #define STOP_SEC_VAR_NOINIT_8BIT                              /* default var stop section */
#endif

/* Var zero init 8 bit */
#ifdef LINTP_START_SEC_VAR_ZERO_INIT_8BIT
  #undef LINTP_START_SEC_VAR_ZERO_INIT_8BIT
  #define START_SEC_VAR_ZERO_INIT_8BIT              /* mapped to zero initialized var unspecified section */
#endif
#ifdef LINTP_STOP_SEC_VAR_ZERO_INIT_8BIT
  #undef LINTP_STOP_SEC_VAR_ZERO_INIT_8BIT
  #define STOP_SEC_VAR_ZERO_INIT_8BIT                              /* default var stop section */
#endif

#ifdef LINTP_START_SEC_VAR_PBCFG
  #undef LINTP_START_SEC_VAR_PBCFG
  #define START_SEC_VAR_PBCFG                       /* mapped to post build section */
#endif
#ifdef LINTP_STOP_SEC_VAR_PBCFG
  #undef LINTP_STOP_SEC_VAR_PBCFG
  #define STOP_SEC_VAR_PBCFG                            /* default post build stop section */
#endif
/**********************************************************************************************************************
 *  LIN TP END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  WDGIF START
 *********************************************************************************************************************/

//vissmd #include "WdgIf_MemMap.h"

/*******  CODE sections **********************************************************************************************/

#if defined WDGIF_START_SEC_CODE
# undef WDGIF_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif
#if defined WDGIF_STOP_SEC_CODE
# undef WDGIF_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif


/*******  CONST sections  ********************************************************************************************/

#if defined WDGIF_START_SEC_CONST_8BIT
# undef WDGIF_START_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT
#endif
#if defined WDGIF_STOP_SEC_CONST_8BIT
# undef WDGIF_STOP_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined WDGIF_START_SEC_CONST_16BIT
# undef WDGIF_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined WDGIF_STOP_SEC_CONST_16BIT
# undef WDGIF_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined WDGIF_START_SEC_CONST_32BIT
# undef WDGIF_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#if defined WDGIF_STOP_SEC_CONST_32BIT
# undef WDGIF_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined WDGIF_START_SEC_CONST_UNSPECIFIED
# undef WDGIF_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined WDGIF_STOP_SEC_CONST_UNSPECIFIED
# undef WDGIF_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#if defined WDGIF_START_SEC_VAR_INIT_8BIT
# undef WDGIF_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_8BIT
#endif
#if defined WDGIF_STOP_SEC_VAR_INIT_8BIT
# undef WDGIF_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_8BIT
#endif

#if defined WDGIF_START_SEC_VAR_INIT_16BIT
# undef WDGIF_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_16BIT
#endif
#if defined WDGIF_STOP_SEC_VAR_INIT_16BIT
# undef WDGIF_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_16BIT
#endif

#if defined WDGIF_START_SEC_VAR_INIT_32BIT
# undef WDGIF_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_32BIT
#endif
#if defined WDGIF_STOP_SEC_VAR_INIT_32BIT
# undef WDGIF_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_32BIT
#endif

#if defined WDGIF_START_SEC_VAR_INIT_UNSPECIFIED
# undef WDGIF_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_UNSPECIFIED
#endif
#if defined WDGIF_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef WDGIF_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_UNSPECIFIED
#endif

/* VAR NOINIT sections */

#if defined WDGIF_START_SEC_VAR_NOINIT_8BIT
# undef WDGIF_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_8BIT
#endif
#if defined WDGIF_STOP_SEC_VAR_NOINIT_8BIT
# undef WDGIF_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_8BIT
#endif

#if defined WDGIF_START_SEC_VAR_NOINIT_16BIT
# undef WDGIF_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_16BIT
#endif
#if defined WDGIF_STOP_SEC_VAR_NOINIT_16BIT
# undef WDGIF_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_16BIT
#endif

#if defined WDGIF_START_SEC_VAR_NOINIT_32BIT
# undef WDGIF_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_32BIT
#endif
#if defined WDGIF_STOP_SEC_VAR_NOINIT_32BIT
# undef WDGIF_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_32BIT
#endif

#if defined WDGIF_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef WDGIF_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_UNSPECIFIED
#endif
#if defined WDGIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef WDGIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_UNSPECIFIED
#endif


/* VAR ZERO_INIT sections */

#if defined WDGIF_START_SEC_VAR_ZERO_INIT_8BIT
# undef WDGIF_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_ZERO_INIT_8BIT
#endif
#if defined WDGIF_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef WDGIF_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_ZERO_INIT_8BIT
#endif

#if defined WDGIF_START_SEC_VAR_ZERO_INIT_16BIT
# undef WDGIF_START_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_ZERO_INIT_16BIT
#endif
#if defined WDGIF_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef WDGIF_STOP_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_ZERO_INIT_16BIT
#endif

#if defined WDGIF_START_SEC_VAR_ZERO_INIT_32BIT
# undef WDGIF_START_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_ZERO_INIT_32BIT
#endif
#if defined WDGIF_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef WDGIF_STOP_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_ZERO_INIT_32BIT
#endif

#if defined WDGIF_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef WDGIF_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_ZERO_INIT_UNSPECIFIED
#endif
#if defined WDGIF_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef WDGIF_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_ZERO_INIT_UNSPECIFIED
#endif


/**********************************************************************************************************************
 *  WDGIF END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  CANIF START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/
#ifdef CANIF_START_SEC_CODE
# undef CANIF_START_SEC_CODE                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef CANIF_STOP_SEC_CODE
# undef CANIF_STOP_SEC_CODE                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE                             /* default code stop section */
#endif


#ifdef CANIF_START_SEC_APPL_CODE
# undef CANIF_START_SEC_APPL_CODE                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                            /* mapped to default code section */
#endif

#ifdef CANIF_STOP_SEC_APPL_CODE
# undef CANIF_STOP_SEC_APPL_CODE                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE                             /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef CANIF_START_SEC_CONST_8BIT
# undef CANIF_START_SEC_CONST_8BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT                      /* mapped to const 8 bit section */
#endif
#ifdef CANIF_STOP_SEC_CONST_8BIT
# undef CANIF_STOP_SEC_CONST_8BIT                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                            /* default const stop section */
#endif

#ifdef CANIF_START_SEC_CONST_16BIT
# undef CANIF_START_SEC_CONST_16BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#ifdef CANIF_STOP_SEC_CONST_16BIT
# undef CANIF_STOP_SEC_CONST_16BIT                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                             /* default const stop section */
#endif


/* Const 32bit */

#ifdef CANIF_START_SEC_CONST_32BIT
# undef CANIF_START_SEC_CONST_32BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT                      /* mapped to const 32 bit section */
#endif
#ifdef CANIF_STOP_SEC_CONST_32BIT
# undef CANIF_STOP_SEC_CONST_32BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                            /* default const stop section */
#endif


/* Const unspecified */

#ifdef CANIF_START_SEC_CONST_UNSPECIFIED
# undef CANIF_START_SEC_CONST_UNSPECIFIED          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED               /* mapped to const unspecified section */
#endif
#ifdef CANIF_STOP_SEC_CONST_UNSPECIFIED
# undef CANIF_STOP_SEC_CONST_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                            /* default const stop section */
#endif


/* FAST CONST sections */

#ifdef CANIF_START_SEC_CONST_FAST_8BIT
# undef CANIF_START_SEC_CONST_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_FAST_8BIT
#endif
#ifdef CANIF_STOP_SEC_CONST_FAST_8BIT
# undef CANIF_STOP_SEC_CONST_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef CANIF_START_SEC_CONST_FAST_16BIT
# undef CANIF_START_SEC_CONST_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_FAST_16BIT
#endif
#ifdef CANIF_STOP_SEC_CONST_FAST_16BIT
# undef CANIF_STOP_SEC_CONST_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef CANIF_START_SEC_CONST_FAST_32BIT
# undef CANIF_START_SEC_CONST_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_FAST_32BIT
#endif
#ifdef CANIF_STOP_SEC_CONST_FAST_32BIT
# undef CANIF_STOP_SEC_CONST_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef CANIF_START_SEC_CONST_FAST_UNSPECIFIED
# undef CANIF_START_SEC_CONST_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_FAST_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_CONST_FAST_UNSPECIFIED
# undef CANIF_STOP_SEC_CONST_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

#ifdef CANIF_START_SEC_PBCFG
# undef CANIF_START_SEC_PBCFG                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG                     /* mapped to const unspecified section */
#endif
#ifdef CANIF_STOP_SEC_PBCFG
# undef CANIF_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef CANIF_START_SEC_VAR_INIT_8BIT
# undef CANIF_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT      /* mapped to default var init 8bit section */
#endif
#ifdef CANIF_STOP_SEC_VAR_INIT_8BIT
# undef CANIF_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_8BIT                /* default var stop section */
#endif

#ifdef CANIF_START_SEC_VAR_INIT_16BIT
# undef CANIF_START_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_INIT_16BIT
# undef CANIF_STOP_SEC_VAR_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_16BIT
#endif

#ifdef CANIF_START_SEC_VAR_INIT_32BIT
# undef CANIF_START_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_INIT_32BIT
# undef CANIF_STOP_SEC_VAR_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_32BIT
#endif

#ifdef CANIF_START_SEC_VAR_INIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif


/* VAR NOINIT sections */

#ifdef CANIF_START_SEC_VAR_NOINIT_8BIT
# undef CANIF_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOINIT_8BIT
# undef CANIF_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef CANIF_START_SEC_VAR_NOINIT_16BIT
# undef CANIF_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOINIT_16BIT
# undef CANIF_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef CANIF_START_SEC_VAR_NOINIT_32BIT
# undef CANIF_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOINIT_32BIT
# undef CANIF_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

/* ESCAN00065501 */
#ifdef CANIF_START_SEC_VAR_PBCFG
# undef CANIF_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#ifdef CANIF_STOP_SEC_VAR_PBCFG
# undef CANIF_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_PBCFG
#endif


/* VAR ZERO INIT sections */

#ifdef CANIF_START_SEC_VAR_ZERO_INIT_8BIT
# undef CANIF_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef CANIF_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_8BIT
#endif

#ifdef CANIF_START_SEC_VAR_ZERO_INIT_16BIT
# undef CANIF_START_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef CANIF_STOP_SEC_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_16BIT
#endif

#ifdef CANIF_START_SEC_VAR_ZERO_INIT_32BIT
# undef CANIF_START_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef CANIF_STOP_SEC_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_32BIT
#endif

#ifdef CANIF_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif


/* VAR FAST INIT sections */

#ifdef CANIF_START_SEC_VAR_FAST_INIT_8BIT
# undef CANIF_START_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_INIT_8BIT
# undef CANIF_STOP_SEC_VAR_FAST_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_INIT_8BIT
#endif

#ifdef CANIF_START_SEC_VAR_FAST_INIT_16BIT
# undef CANIF_START_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_INIT_16BIT
# undef CANIF_STOP_SEC_VAR_FAST_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_INIT_8BIT
#endif

#ifdef CANIF_START_SEC_VAR_FAST_INIT_32BIT
# undef CANIF_START_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_INIT_32BIT
# undef CANIF_STOP_SEC_VAR_FAST_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_INIT_32BIT
#endif

#ifdef CANIF_START_SEC_VAR_FAST_INIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_INIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_INIT_UNSPECIFIED
#endif


/* VAR FAST NOINIT sections */

#ifdef CANIF_START_SEC_VAR_FAST_NOINIT_8BIT
# undef CANIF_START_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_NOINIT_8BIT
# undef CANIF_STOP_SEC_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_NOINIT_8BIT
#endif

#ifdef CANIF_START_SEC_VAR_FAST_NOINIT_16BIT
# undef CANIF_START_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_NOINIT_16BIT
# undef CANIF_STOP_SEC_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_NOINIT_16BIT
#endif

#ifdef CANIF_START_SEC_VAR_FAST_NOINIT_32BIT
# undef CANIF_START_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_NOINIT_32BIT
# undef CANIF_STOP_SEC_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_NOINIT_32BIT
#endif

#ifdef CANIF_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
#endif

/* VAR FAST ZERO INIT sections */

#ifdef CANIF_START_SEC_VAR_FAST_ZERO_INIT_8BIT
# undef CANIF_START_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT
# undef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_ZERO_INIT_8BIT
#endif

#ifdef CANIF_START_SEC_VAR_FAST_ZERO_INIT_16BIT
# undef CANIF_START_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT
# undef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_ZERO_INIT_16BIT
#endif

#ifdef CANIF_START_SEC_VAR_FAST_ZERO_INIT_32BIT
# undef CANIF_START_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT
# undef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_ZERO_INIT_32BIT
#endif

#ifdef CANIF_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
#endif

/* VAR NOCACHE INIT sections */

#ifdef CANIF_START_SEC_VAR_NOCACHE_INIT_8BIT
# undef CANIF_START_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_INIT_8BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_INIT_8BIT
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_INIT_16BIT
# undef CANIF_START_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_INIT_16BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_INIT_16BIT
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_INIT_32BIT
# undef CANIF_START_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_INIT_32BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_INIT_32BIT
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#endif

/* VAR NOCACHE NOINIT sections */

#ifdef CANIF_START_SEC_VAR_NOCACHE_NOINIT_8BIT
# undef CANIF_START_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_NOINIT_8BIT
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_NOINIT_16BIT
# undef CANIF_START_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_NOINIT_16BIT
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_NOINIT_32BIT
# undef CANIF_START_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#endif

/* VAR NOCACHE ZERO INIT sections */

#ifdef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
# undef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
# undef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
# undef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
# undef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
#endif

#ifdef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# undef CANIF_START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#endif
#ifdef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# undef CANIF_STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
#endif

/**********************************************************************************************************************
 *  CANIF END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  FEE START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef FEE_START_SEC_CODE
# undef FEE_START_SEC_CODE
# define START_SEC_CODE                                               /* mapped to default code section */
#endif
#ifdef FEE_STOP_SEC_CODE
# undef FEE_STOP_SEC_CODE
# define STOP_SEC_CODE                                                /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef FEE_START_SEC_CONST_UNSPECIFIED
# undef FEE_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef FEE_STOP_SEC_CONST_UNSPECIFIED
# undef FEE_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef FEE_START_SEC_APPL_CONFIG_UNSPECIFIED
# undef FEE_START_SEC_APPL_CONFIG_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef FEE_STOP_SEC_APPL_CONFIG_UNSPECIFIED
# undef FEE_STOP_SEC_APPL_CONFIG_UNSPECIFIED
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef FEE_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FEE_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef FEE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FEE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef FEE_START_SEC_VAR_INIT_UNSPECIFIED
# undef FEE_START_SEC_VAR_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef FEE_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef FEE_STOP_SEC_VAR_INIT_UNSPECIFIED
# define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif
/**********************************************************************************************************************
 *  FEE END
 *********************************************************************************************************************/

#ifdef MEMIF_START_SEC_CONST_8BIT 
    #undef MEMIF_START_SEC_CONST_8BIT 
    #define START_SEC_CONST_8BIT
#endif

#ifdef MEMIF_STOP_SEC_CONST_8BIT 
    #undef MEMIF_STOP_SEC_CONST_8BIT 
    #define STOP_SEC_CONST
#endif


#ifdef MEMIF_START_SEC_CONST_32BIT
    #undef MEMIF_START_SEC_CONST_32BIT
    #define START_SEC_CONST_32BIT
#endif

#ifdef MEMIF_STOP_SEC_CONST_32BIT
    #undef MEMIF_STOP_SEC_CONST_32BIT
    #define STOP_SEC_CONST
#endif


#ifdef MEMIF_START_SEC_CODE
    #undef MEMIF_START_SEC_CODE
    #define START_SEC_CODE
#endif

#ifdef MEMIF_STOP_SEC_CODE
    #undef MEMIF_STOP_SEC_CODE
    #define STOP_SEC_CODE
#endif

#ifdef VPM_START_SEC_CODE
    #undef VPM_START_SEC_CODE
    #define START_SEC_CODE
#endif

#ifdef VPM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #undef VPM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif


#ifdef VPM_STOP_SEC_CODE
    #undef VPM_STOP_SEC_CODE
    #define STOP_SEC_CODE
#endif

#ifdef VPM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #undef VPM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 *  Com START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef COM_START_SEC_CODE
# undef COM_START_SEC_CODE
# define START_SEC_CODE
#endif
#ifdef COM_STOP_SEC_CODE
# undef COM_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif
/* COM application callback code section (Rte_Cbk.h)*/
#ifdef COM_START_SEC_APPL_CODE
# undef COM_START_SEC_APPL_CODE
# define START_SEC_CODE
#endif
#ifdef COM_STOP_SEC_APPL_CODE
# undef COM_STOP_SEC_APPL_CODE
# define STOP_SEC_CODE
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef COM_START_SEC_CONST_8BIT
# undef COM_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif
#ifdef COM_STOP_SEC_CONST_8BIT
# undef COM_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

#ifdef COM_START_SEC_CONST_16BIT
# undef COM_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef COM_STOP_SEC_CONST_16BIT
# undef COM_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef COM_START_SEC_CONST_32BIT
# undef COM_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef COM_STOP_SEC_CONST_32BIT
# undef COM_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef COM_START_SEC_CONST_64BIT
# undef COM_START_SEC_CONST_64BIT
# define START_SEC_CONST_64BIT
#endif
#ifdef COM_STOP_SEC_CONST_64BIT
# undef COM_STOP_SEC_CONST_64BIT
# define STOP_SEC_CONST
#endif

#ifdef COM_START_SEC_CONST_UNSPECIFIED
# undef COM_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef COM_STOP_SEC_CONST_UNSPECIFIED
# undef COM_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef COM_START_SEC_PBCFG
# undef COM_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef COM_STOP_SEC_PBCFG
# undef COM_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif

#ifdef COM_START_SEC_VAR_PBCFG
# undef COM_START_SEC_VAR_PBCFG
# define START_SEC_VAR_PBCFG
#endif
#ifdef COM_STOP_SEC_VAR_PBCFG
# undef COM_STOP_SEC_VAR_PBCFG
# define STOP_SEC_VAR_PBCFG
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef COM_START_SEC_VAR_INIT_UNSPECIFIED
# undef COM_START_SEC_VAR_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef COM_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef COM_STOP_SEC_VAR_INIT_UNSPECIFIED
# define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef COM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef COM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef COM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef COM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef COM_START_SEC_VAR_ZERO_INIT_8BIT
# undef COM_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef COM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef COM_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR_ZERO_INIT_8BIT
#endif

/* VAR NOINIT sections */

#ifdef COM_START_SEC_VAR_NOINIT_BOOLEAN
# undef COM_START_SEC_VAR_NOINIT_BOOLEAN
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef COM_STOP_SEC_VAR_NOINIT_BOOLEAN
# undef COM_STOP_SEC_VAR_NOINIT_BOOLEAN
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef COM_START_SEC_VAR_NOINIT_8BIT
# undef COM_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef COM_STOP_SEC_VAR_NOINIT_8BIT
# undef COM_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef COM_START_SEC_VAR_NOINIT_16BIT
# undef COM_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef COM_STOP_SEC_VAR_NOINIT_16BIT
# undef COM_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef COM_START_SEC_VAR_NOINIT_32BIT
# undef COM_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef COM_STOP_SEC_VAR_NOINIT_32BIT
# undef COM_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef COM_START_SEC_VAR_NOINIT_64BIT
# undef COM_START_SEC_VAR_NOINIT_64BIT
# define START_SEC_VAR_NOINIT_64BIT
#endif
#ifdef COM_STOP_SEC_VAR_NOINIT_64BIT
# undef COM_STOP_SEC_VAR_NOINIT_64BIT
# define STOP_SEC_VAR_NOINIT_64BIT
#endif

#ifdef COM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef COM_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef COM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef COM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif


/* VAR ZERO INIT sections */



/* VAR FAST INIT sections */



/* VAR FAST NOINIT sections */


/* VAR FAST ZERO INIT sections */



/**********************************************************************************************************************
 *  Com END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  IpduM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef IPDUM_START_SEC_CODE
# undef IPDUM_START_SEC_CODE
# define START_SEC_CODE /* mapped to default code section */
#endif
#ifdef IPDUM_STOP_SEC_CODE
# undef IPDUM_STOP_SEC_CODE
# define STOP_SEC_CODE  /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* Postbuild CFG CONST sections */

#ifdef IPDUM_START_SEC_PBCFG_8BIT
# undef IPDUM_START_SEC_PBCFG_8BIT
# define START_SEC_CONST_PBCFG
#endif
#ifdef IPDUM_STOP_SEC_PBCFG_8BIT
# undef IPDUM_STOP_SEC_PBCFG_8BIT
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_PBCFG_16BIT
# undef IPDUM_START_SEC_PBCFG_16BIT
# define START_SEC_CONST_PBCFG
#endif
#ifdef IPDUM_STOP_SEC_PBCFG_16BIT
# undef IPDUM_STOP_SEC_PBCFG_16BIT
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_PBCFG_32BIT
# undef IPDUM_START_SEC_PBCFG_32BIT
# define START_SEC_CONST_PBCFG
#endif
#ifdef IPDUM_STOP_SEC_PBCFG_32BIT
# undef IPDUM_STOP_SEC_PBCFG_32BIT
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_PBCFG_UNSPECIFIED
# undef IPDUM_START_SEC_PBCFG_UNSPECIFIED
# define START_SEC_CONST_PBCFG
#endif
#ifdef IPDUM_STOP_SEC_PBCFG_UNSPECIFIED
# undef IPDUM_STOP_SEC_PBCFG_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_PBCFG
# undef IPDUM_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef IPDUM_STOP_SEC_PBCFG
# undef IPDUM_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_VAR_PBCFG
# undef IPDUM_START_SEC_VAR_PBCFG
# define START_SEC_VAR_PBCFG
#endif
#ifdef IPDUM_STOP_SEC_VAR_PBCFG
# undef IPDUM_STOP_SEC_VAR_PBCFG
# define STOP_SEC_VAR
#endif

#ifdef IPDUM_START_SEC_CONST_8BIT
# undef IPDUM_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif
#ifdef IPDUM_STOP_SEC_CONST_8BIT
# undef IPDUM_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_CONST_16BIT
# undef IPDUM_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef IPDUM_STOP_SEC_CONST_16BIT
# undef IPDUM_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_CONST_32BIT
# undef IPDUM_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef IPDUM_STOP_SEC_CONST_32BIT
# undef IPDUM_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef IPDUM_START_SEC_CONST_UNSPECIFIED
# undef IPDUM_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef IPDUM_STOP_SEC_CONST_UNSPECIFIED
# undef IPDUM_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR ZERO INIT sections */

#ifdef IPDUM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef IPDUM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef IPDUM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef IPDUM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef IPDUM_START_SEC_VAR_ZERO_INIT_8BIT
# undef IPDUM_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_INIT_8BIT
#endif
#ifdef IPDUM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef IPDUM_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR_INIT_8BIT
#endif

/* VAR INIT sections */

#ifdef IPDUM_START_SEC_VAR_INIT_UNSPECIFIED
# undef IPDUM_START_SEC_VAR_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef IPDUM_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef IPDUM_STOP_SEC_VAR_INIT_UNSPECIFIED
# define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef IPDUM_START_SEC_VAR_INIT_8BIT
# undef IPDUM_START_SEC_VAR_INIT_8BIT
# define START_SEC_VAR_INIT_8BIT
#endif
#ifdef IPDUM_STOP_SEC_VAR_INIT_8BIT
# undef IPDUM_STOP_SEC_VAR_INIT_8BIT
# define STOP_SEC_VAR_INIT_8BIT
#endif

/* VAR NOINIT sections */

#ifdef IPDUM_START_SEC_VAR_NOINIT_8BIT
# undef IPDUM_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef IPDUM_STOP_SEC_VAR_NOINIT_8BIT
# undef IPDUM_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef IPDUM_START_SEC_VAR_NOINIT_16BIT
# undef IPDUM_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef IPDUM_STOP_SEC_VAR_NOINIT_16BIT
# undef IPDUM_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef IPDUM_START_SEC_VAR_NOINIT_32BIT
# undef IPDUM_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef IPDUM_STOP_SEC_VAR_NOINIT_32BIT
# undef IPDUM_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef IPDUM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef IPDUM_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef IPDUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef IPDUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

/**********************************************************************************************************************
 *  IpduM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  J1939RM START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef J1939RM_START_SEC_CODE
# undef J1939RM_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE /* mapped to default code section */
#endif
#ifdef J1939RM_STOP_SEC_CODE
# undef J1939RM_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef J1939RM_START_SEC_CONST_8BIT
# undef J1939RM_START_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT /* mapped to default const 8bit section */
#endif
#ifdef J1939RM_STOP_SEC_CONST_8BIT
# undef J1939RM_STOP_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST /* default const stop section */
#endif

#ifdef J1939RM_START_SEC_CONST_16BIT
# undef J1939RM_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#ifdef J1939RM_STOP_SEC_CONST_16BIT
# undef J1939RM_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef J1939RM_START_SEC_CONST_32BIT
# undef J1939RM_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#ifdef J1939RM_STOP_SEC_CONST_32BIT
# undef J1939RM_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef J1939RM_START_SEC_CONST_UNSPECIFIED
# undef J1939RM_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef J1939RM_STOP_SEC_CONST_UNSPECIFIED
# undef J1939RM_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* FAST CONST sections */


/* Postbuild CFG CONST sections */

#ifdef J1939RM_START_SEC_PBCFG
# undef J1939RM_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#ifdef J1939RM_STOP_SEC_PBCFG
# undef J1939RM_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef J1939RM_START_SEC_VAR_ZERO_INIT_8BIT
# undef J1939RM_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef J1939RM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef J1939RM_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_8BIT
#endif


/* VAR NOINIT sections */

#ifdef J1939RM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef J1939RM_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef J1939RM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef J1939RM_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef J1939RM_START_SEC_VAR_NOINIT_8BIT
# undef J1939RM_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef J1939RM_STOP_SEC_VAR_NOINIT_8BIT
# undef J1939RM_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef J1939RM_START_SEC_VAR_NOINIT_16BIT
# undef J1939RM_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef J1939RM_STOP_SEC_VAR_NOINIT_16BIT
# undef J1939RM_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_16BIT
#endif


/* VAR ZERO INIT sections */

#ifdef J1939RM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef J1939RM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef J1939RM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef J1939RM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif


/* VAR FAST INIT sections */


/* VAR FAST NOINIT sections */


/* VAR FAST ZERO INIT sections */


/* Postbuild CFG VAR sections */

#ifdef J1939RM_START_SEC_VAR_PBCFG
# undef J1939RM_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#ifdef J1939RM_STOP_SEC_VAR_PBCFG
# undef J1939RM_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_PBCFG
#endif

/**********************************************************************************************************************
 *  J1939RM END
 *********************************************************************************************************************/

#ifdef ADC_START_SEC_CODE
  #undef ADC_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef ADC_STOP_SEC_CODE
  #undef ADC_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef ADC_START_SEC_CONST_16
  #undef ADC_START_SEC_CONST_16
  #define START_SEC_CONST_16BIT
#endif

#ifdef ADC_STOP_SEC_CONST_16
  #undef ADC_STOP_SEC_CONST_16
  #define STOP_SEC_CONST
#endif

#ifdef ADC_START_SEC_CONST_32
  #undef ADC_START_SEC_CONST_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef ADC_STOP_SEC_CONST_32
  #undef ADC_STOP_SEC_CONST_32
  #define STOP_SEC_CONST
#endif

#ifdef ADC_START_SEC_CONST_8
  #undef ADC_START_SEC_CONST_8
  #define START_SEC_CONST_8BIT
#endif

#ifdef ADC_STOP_SEC_CONST_8
  #undef ADC_STOP_SEC_CONST_8
  #define STOP_SEC_CONST
#endif

#ifdef ADC_START_SEC_CONST_UNSPECIFIED
  #undef ADC_START_SEC_CONST_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_CONST_UNSPECIFIED
  #undef ADC_STOP_SEC_CONST_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef ADC_START_SEC_VAR_INIT_16
  #undef ADC_START_SEC_VAR_INIT_16
  #define START_SEC_VAR_INIT_16BIT
#endif

#ifdef ADC_STOP_SEC_VAR_INIT_16
  #undef ADC_STOP_SEC_VAR_INIT_16
  #define STOP_SEC_VAR_INIT_16BIT
#endif

#ifdef ADC_START_SEC_VAR_INIT_8
  #undef ADC_START_SEC_VAR_INIT_8
  #define START_SEC_VAR_INIT_8BIT
#endif

#ifdef ADC_STOP_SEC_VAR_INIT_8
  #undef ADC_STOP_SEC_VAR_INIT_8
  #define STOP_SEC_VAR_INIT_8BIT
#endif

#ifdef ADC_START_SEC_VAR_INIT_BOOLEAN
  #undef ADC_START_SEC_VAR_INIT_BOOLEAN
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_VAR_INIT_BOOLEAN
  #undef ADC_STOP_SEC_VAR_INIT_BOOLEAN
  #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef ADC_START_SEC_VAR_INIT_UNSPECIFIED
  #undef ADC_START_SEC_VAR_INIT_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef ADC_STOP_SEC_VAR_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef ADC_START_SEC_VAR_NO_INIT_32
  #undef ADC_START_SEC_VAR_NO_INIT_32
  #define START_SEC_VAR_NOINIT_32BIT
#endif

#ifdef ADC_STOP_SEC_VAR_NO_INIT_32
  #undef ADC_STOP_SEC_VAR_NO_INIT_32
  #define STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef ADC_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
  #undef ADC_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
  #undef ADC_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
  #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef ADC_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
  #undef ADC_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
  #define START_SEC_VAR_NOINIT_32BIT
#endif

#ifdef ADC_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
  #undef ADC_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
  #define STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef ADC_START_SEC_VAR_NO_INIT_8
  #undef ADC_START_SEC_VAR_NO_INIT_8
  #define START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef ADC_STOP_SEC_VAR_NO_INIT_8
  #undef ADC_STOP_SEC_VAR_NO_INIT_8
  #define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef ADC_START_SEC_VAR_NO_INIT_BOOLEAN
  #undef ADC_START_SEC_VAR_NO_INIT_BOOLEAN
  #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_VAR_NO_INIT_BOOLEAN
  #undef ADC_STOP_SEC_VAR_NO_INIT_BOOLEAN
  #define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef ADC_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef ADC_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef ADC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef ADC_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
  #undef ADC_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
  #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef ADC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
  #undef ADC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
  #define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef DIO_START_SEC_CODE
  #undef DIO_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef DIO_STOP_SEC_CODE
  #undef DIO_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef DIO_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef DIO_START_SEC_CONFIG_DATA_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef FLS_START_SEC_CODE
  #undef FLS_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef FLS_STOP_SEC_CODE
  #undef FLS_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef FLS_START_SEC_CODE_AC
  #undef FLS_START_SEC_CODE_AC
  #define START_SEC_CODE
#endif

#ifdef FLS_STOP_SEC_CODE_AC
  #undef FLS_STOP_SEC_CODE_AC
  #define STOP_SEC_CODE
#endif

#ifdef FLS_START_SEC_CONFIG_DATA_8
  #undef FLS_START_SEC_CONFIG_DATA_8
  #define START_SEC_CONST_8BIT
#endif

#ifdef FLS_STOP_SEC_CONFIG_DATA_8
  #undef FLS_STOP_SEC_CONFIG_DATA_8
  #define STOP_SEC_CONST
#endif

#ifdef FLS_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef FLS_START_SEC_CONFIG_DATA_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef FLS_START_SEC_CONST_32
  #undef FLS_START_SEC_CONST_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef FLS_STOP_SEC_CONST_32
  #undef FLS_STOP_SEC_CONST_32
  #define STOP_SEC_CONST
#endif

#ifdef FLS_START_SEC_CONST_UNSPECIFIED
  #undef FLS_START_SEC_CONST_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef FLS_STOP_SEC_CONST_UNSPECIFIED
  #undef FLS_STOP_SEC_CONST_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef FLS_START_SEC_VAR_INIT_32
  #undef FLS_START_SEC_VAR_INIT_32
  #define START_SEC_VAR_INIT_32BIT
#endif

#ifdef FLS_STOP_SEC_VAR_INIT_32
  #undef FLS_STOP_SEC_VAR_INIT_32
  #define STOP_SEC_VAR_INIT_32BIT
#endif

#ifdef FLS_START_SEC_VAR_INIT_8
  #undef FLS_START_SEC_VAR_INIT_8
  #define START_SEC_VAR_INIT_8BIT
#endif

#ifdef FLS_STOP_SEC_VAR_INIT_8
  #undef FLS_STOP_SEC_VAR_INIT_8
  #define STOP_SEC_VAR_INIT_8BIT
#endif

#ifdef FLS_START_SEC_VAR_INIT_BOOLEAN
  #undef FLS_START_SEC_VAR_INIT_BOOLEAN
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef FLS_STOP_SEC_VAR_INIT_BOOLEAN
  #undef FLS_STOP_SEC_VAR_INIT_BOOLEAN
  #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef FLS_START_SEC_VAR_INIT_UNSPECIFIED
  #undef FLS_START_SEC_VAR_INIT_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef FLS_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef FLS_STOP_SEC_VAR_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef GPT_START_SEC_CODE
  #undef GPT_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef GPT_STOP_SEC_CODE
  #undef GPT_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef GPT_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef GPT_START_SEC_CONFIG_DATA_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef GPT_START_SEC_CONST_32
  #undef GPT_START_SEC_CONST_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef GPT_STOP_SEC_CONST_32
  #undef GPT_STOP_SEC_CONST_32
  #define STOP_SEC_CONST
#endif

#ifdef GPT_START_SEC_VAR_INIT_32
  #undef GPT_START_SEC_VAR_INIT_32
  #define START_SEC_VAR_INIT_32BIT
#endif

#ifdef GPT_STOP_SEC_VAR_INIT_32
  #undef GPT_STOP_SEC_VAR_INIT_32
  #define STOP_SEC_VAR_INIT_32BIT
#endif

#ifdef GPT_START_SEC_VAR_INIT_UNSPECIFIED
  #undef GPT_START_SEC_VAR_INIT_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef GPT_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef GPT_STOP_SEC_VAR_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef GPT_START_SEC_VAR_NO_INIT_32
  #undef GPT_START_SEC_VAR_NO_INIT_32
  #define START_SEC_VAR_NOINIT_32BIT
#endif

#ifdef GPT_STOP_SEC_VAR_NO_INIT_32
  #undef GPT_STOP_SEC_VAR_NO_INIT_32
  #define STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef GPT_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef GPT_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef GPT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef GPT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef ICU_START_SEC_CODE
  #undef ICU_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef ICU_STOP_SEC_CODE
  #undef ICU_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef ICU_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef ICU_START_SEC_CONFIG_DATA_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef ICU_START_SEC_VAR_INIT_32
  #undef ICU_START_SEC_VAR_INIT_32
  #define START_SEC_VAR_INIT_32BIT
#endif

#ifdef ICU_STOP_SEC_VAR_INIT_32
  #undef ICU_STOP_SEC_VAR_INIT_32
  #define STOP_SEC_VAR_INIT_32BIT
#endif

#ifdef ICU_START_SEC_VAR_INIT_UNSPECIFIED
  #undef ICU_START_SEC_VAR_INIT_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef ICU_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef ICU_STOP_SEC_VAR_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef ICU_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef ICU_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef ICU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef ICU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef ICU_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
  #undef ICU_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
  #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef ICU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
  #undef ICU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
  #define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef MCEM_START_SEC_CODE
  #undef MCEM_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef MCEM_STOP_SEC_CODE
  #undef MCEM_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef MCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MCEM_START_SEC_CONFIG_DATA_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef MCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MCEM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef MCEM_START_SEC_VAR_INIT_BOOLEAN
  #undef MCEM_START_SEC_VAR_INIT_BOOLEAN
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef MCEM_STOP_SEC_VAR_INIT_BOOLEAN
  #undef MCEM_STOP_SEC_VAR_INIT_BOOLEAN
  #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef MCEM_START_SEC_VAR_INIT_UNSPECIFIED
  #undef MCEM_START_SEC_VAR_INIT_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef MCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef MCEM_STOP_SEC_VAR_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef MCEM_START_SEC_VAR_NO_INIT_32
  #undef MCEM_START_SEC_VAR_NO_INIT_32
  #define START_SEC_VAR_NOINIT_32BIT
#endif

#ifdef MCEM_STOP_SEC_VAR_NO_INIT_32
  #undef MCEM_STOP_SEC_VAR_NO_INIT_32
  #define STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef MCL_START_SEC_CODE
  #undef MCL_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef MCL_STOP_SEC_CODE
  #undef MCL_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef MCL_START_SEC_CONST_32
  #undef MCL_START_SEC_CONST_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef MCL_STOP_SEC_CONST_32
  #undef MCL_STOP_SEC_CONST_32
  #define STOP_SEC_CONST
#endif

#ifdef MCL_START_SEC_CONST_UNSPECIFIED
  #undef MCL_START_SEC_CONST_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef MCL_STOP_SEC_CONST_UNSPECIFIED
  #undef MCL_STOP_SEC_CONST_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef MCL_START_SEC_VAR_INIT_UNSPECIFIED
  #undef MCL_START_SEC_VAR_INIT_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef MCL_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef MCL_STOP_SEC_VAR_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef MCU_START_SEC_CODE
  #undef MCU_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef MCU_STOP_SEC_CODE
  #undef MCU_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef MCU_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MCU_START_SEC_CONFIG_DATA_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef MCU_START_SEC_CONST_32
  #undef MCU_START_SEC_CONST_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef MCU_STOP_SEC_CONST_32
  #undef MCU_STOP_SEC_CONST_32
  #define STOP_SEC_CONST
#endif

#ifdef MCU_START_SEC_CONST_UNSPECIFIED
  #undef MCU_START_SEC_CONST_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef MCU_STOP_SEC_CONST_UNSPECIFIED
  #undef MCU_STOP_SEC_CONST_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef MCU_START_SEC_RAMCODE
  #undef MCU_START_SEC_RAMCODE
  #define START_SEC_CODE
#endif

#ifdef MCU_STOP_SEC_RAMCODE
  #undef MCU_STOP_SEC_RAMCODE
  #define STOP_SEC_CODE
#endif

#ifdef MCU_START_SEC_VAR_INIT_32
  #undef MCU_START_SEC_VAR_INIT_32
  #define START_SEC_VAR_INIT_32BIT
#endif

#ifdef MCU_STOP_SEC_VAR_INIT_32
  #undef MCU_STOP_SEC_VAR_INIT_32
  #define STOP_SEC_VAR_INIT_32BIT
#endif

#ifdef MCU_START_SEC_VAR_INIT_UNSPECIFIED
  #undef MCU_START_SEC_VAR_INIT_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef MCU_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef MCU_STOP_SEC_VAR_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef MCU_START_SEC_VAR_NO_INIT_8
  #undef MCU_START_SEC_VAR_NO_INIT_8
  #define START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef MCU_STOP_SEC_VAR_NO_INIT_8
  #undef MCU_STOP_SEC_VAR_NO_INIT_8
  #define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef PORT_START_SEC_CODE
  #undef PORT_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef PORT_STOP_SEC_CODE
  #undef PORT_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_16
  #undef PORT_START_SEC_CONFIG_DATA_16
  #define START_SEC_CONST_16BIT
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_16
  #undef PORT_STOP_SEC_CONFIG_DATA_16
  #define STOP_SEC_CONST
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef PORT_START_SEC_CONST_16
  #undef PORT_START_SEC_CONST_16
  #define START_SEC_CONST_16BIT
#endif

#ifdef PORT_STOP_SEC_CONST_16
  #undef PORT_STOP_SEC_CONST_16
  #define STOP_SEC_CONST
#endif

#ifdef PORT_START_SEC_CONST_32
  #undef PORT_START_SEC_CONST_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef PORT_STOP_SEC_CONST_32
  #undef PORT_STOP_SEC_CONST_32
  #define STOP_SEC_CONST
#endif

#ifdef PORT_START_SEC_CONST_UNSPECIFIED
  #undef PORT_START_SEC_CONST_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef PORT_STOP_SEC_CONST_UNSPECIFIED
  #undef PORT_STOP_SEC_CONST_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED
  #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_16
  #undef PORT_START_SEC_VAR_NO_INIT_16
  #define START_SEC_VAR_NOINIT_16BIT
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16
  #undef PORT_STOP_SEC_VAR_NO_INIT_16
  #define STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef PWM_START_SEC_CODE
  #undef PWM_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef PWM_STOP_SEC_CODE
  #undef PWM_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef PWM_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef PWM_START_SEC_CONFIG_DATA_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef PWM_START_SEC_CONST_16
  #undef PWM_START_SEC_CONST_16
  #define START_SEC_CONST_16BIT
#endif

#ifdef PWM_STOP_SEC_CONST_16
  #undef PWM_STOP_SEC_CONST_16
  #define STOP_SEC_CONST
#endif

#ifdef PWM_START_SEC_CONST_32
  #undef PWM_START_SEC_CONST_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef PWM_STOP_SEC_CONST_32
  #undef PWM_STOP_SEC_CONST_32
  #define STOP_SEC_CONST
#endif

#ifdef PWM_START_SEC_VAR_INIT_8
  #undef PWM_START_SEC_VAR_INIT_8
  #define START_SEC_VAR_INIT_8BIT
#endif

#ifdef PWM_STOP_SEC_VAR_INIT_8
  #undef PWM_STOP_SEC_VAR_INIT_8
  #define STOP_SEC_VAR_INIT_8BIT
#endif

#ifdef PWM_START_SEC_VAR_INIT_UNSPECIFIED
  #undef PWM_START_SEC_VAR_INIT_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef PWM_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef PWM_STOP_SEC_VAR_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef PWM_START_SEC_VAR_NO_INIT_16
  #undef PWM_START_SEC_VAR_NO_INIT_16
  #define START_SEC_VAR_NOINIT_16BIT
#endif

#ifdef PWM_STOP_SEC_VAR_NO_INIT_16
  #undef PWM_STOP_SEC_VAR_NO_INIT_16
  #define STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef PWM_START_SEC_VAR_NO_INIT_32
  #undef PWM_START_SEC_VAR_NO_INIT_32
  #define START_SEC_VAR_NOINIT_32BIT
#endif

#ifdef PWM_STOP_SEC_VAR_NO_INIT_32
  #undef PWM_STOP_SEC_VAR_NO_INIT_32
  #define STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef PWM_START_SEC_VAR_NO_INIT_8
  #undef PWM_START_SEC_VAR_NO_INIT_8
  #define START_SEC_VAR_NOINIT_8BIT
#endif

#ifdef PWM_STOP_SEC_VAR_NO_INIT_8
  #undef PWM_STOP_SEC_VAR_NO_INIT_8
  #define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef PWM_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef PWM_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef PWM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef PWM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef SPI_START_SEC_CODE
  #undef SPI_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef SPI_STOP_SEC_CODE
  #undef SPI_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef SPI_START_SEC_CONST_32
  #undef SPI_START_SEC_CONST_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef SPI_STOP_SEC_CONST_32
  #undef SPI_STOP_SEC_CONST_32
  #define STOP_SEC_CONST
#endif

#ifdef SPI_START_SEC_VAR_INIT_32
  #undef SPI_START_SEC_VAR_INIT_32
  #define START_SEC_VAR_INIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_INIT_32
  #undef SPI_STOP_SEC_VAR_INIT_32
  #define STOP_SEC_VAR_INIT_32BIT
#endif

#ifdef SPI_START_SEC_VAR_INIT_UNSPECIFIED
  #undef SPI_START_SEC_VAR_INIT_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef SPI_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef SPI_STOP_SEC_VAR_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef SPI_START_SEC_VAR_NO_INIT_32
  #undef SPI_START_SEC_VAR_NO_INIT_32
  #define START_SEC_VAR_NOINIT_32BIT
#endif

#ifdef SPI_STOP_SEC_VAR_NO_INIT_32
  #undef SPI_STOP_SEC_VAR_NO_INIT_32
  #define STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
  #undef SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
  #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
  #undef SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
  #define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef WDG_START_SEC_CODE
  #undef WDG_START_SEC_CODE
  #define START_SEC_CODE
#endif

#ifdef WDG_STOP_SEC_CODE
  #undef WDG_STOP_SEC_CODE
  #define STOP_SEC_CODE
#endif

#ifdef WDG_START_SEC_CONFIG_DATA_8
  #undef WDG_START_SEC_CONFIG_DATA_8
  #define START_SEC_CONST_8BIT
#endif

#ifdef WDG_STOP_SEC_CONFIG_DATA_8
  #undef WDG_STOP_SEC_CONFIG_DATA_8
  #define STOP_SEC_CONST
#endif

#ifdef WDG_START_SEC_CONFIG_DATA_UNSPECIFIED
  #undef WDG_START_SEC_CONFIG_DATA_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #undef WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef WDG_START_SEC_CONST_32
  #undef WDG_START_SEC_CONST_32
  #define START_SEC_CONST_32BIT
#endif

#ifdef WDG_STOP_SEC_CONST_32
  #undef WDG_STOP_SEC_CONST_32
  #define STOP_SEC_CONST
#endif

#ifdef WDG_START_SEC_CONST_8
  #undef WDG_START_SEC_CONST_8
  #define START_SEC_CONST_8BIT
#endif

#ifdef WDG_STOP_SEC_CONST_8
  #undef WDG_STOP_SEC_CONST_8
  #define STOP_SEC_CONST
#endif

#ifdef WDG_START_SEC_CONST_UNSPECIFIED
  #undef WDG_START_SEC_CONST_UNSPECIFIED
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef WDG_STOP_SEC_CONST_UNSPECIFIED
  #undef WDG_STOP_SEC_CONST_UNSPECIFIED
  #define STOP_SEC_CONST
#endif

#ifdef WDG_START_SEC_RAMCODE
  #undef WDG_START_SEC_RAMCODE
  #define START_SEC_CODE
#endif

#ifdef WDG_STOP_SEC_RAMCODE
  #undef WDG_STOP_SEC_RAMCODE
  #define STOP_SEC_CODE
#endif

#ifdef WDG_START_SEC_VAR_INIT_16
  #undef WDG_START_SEC_VAR_INIT_16
  #define START_SEC_VAR_INIT_16BIT
#endif

#ifdef WDG_STOP_SEC_VAR_INIT_16
  #undef WDG_STOP_SEC_VAR_INIT_16
  #define STOP_SEC_VAR_INIT_16
#endif

#ifdef WDG_START_SEC_VAR_INIT_UNSPECIFIED
  #undef WDG_START_SEC_VAR_INIT_UNSPECIFIED
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef WDG_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef WDG_STOP_SEC_VAR_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef WDG_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef WDG_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef WDG_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef WDG_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif



/**********************************************************************************************************************
 *  NvM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef NVM_START_SEC_CODE
    #undef NVM_START_SEC_CODE
    #define START_SEC_CODE                /* mapped to default code section */
#endif
#ifdef NVM_STOP_SEC_CODE
    #undef NVM_STOP_SEC_CODE
    #define STOP_SEC_CODE                /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef NVM_START_SEC_CONST_8
    #undef NVM_START_SEC_CONST_8
    #define START_SEC_CONST_8BIT
#endif
#ifdef NVM_STOP_SEC_CONST_8
    #undef NVM_STOP_SEC_CONST_8
    #define STOP_SEC_CONST
#endif

#ifdef NVM_START_SEC_CONST_16
    #undef NVM_START_SEC_CONST_16
    #define START_SEC_CONST_16BIT
#endif
#ifdef NVM_STOP_SEC_CONST_16
    #undef NVM_STOP_SEC_CONST_16
    #define STOP_SEC_CONST
#endif

#ifdef NVM_START_SEC_CONST_UNSPECIFIED
    #undef NVM_START_SEC_CONST_UNSPECIFIED
    #define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef NVM_STOP_SEC_CONST_UNSPECIFIED
    #undef NVM_STOP_SEC_CONST_UNSPECIFIED
    #define STOP_SEC_CONST
#endif

#ifdef NVM_START_SEC_CONST_DESCRIPTOR_TABLE
    #undef NVM_START_SEC_CONST_DESCRIPTOR_TABLE
    #define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef NVM_STOP_SEC_CONST_DESCRIPTOR_TABLE
    #undef NVM_STOP_SEC_CONST_DESCRIPTOR_TABLE
    #define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#ifdef NVM_START_SEC_VAR_NOINIT_8
    #undef NVM_START_SEC_VAR_NOINIT_8
    #define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef NVM_STOP_SEC_VAR_NOINIT_8
    #undef NVM_STOP_SEC_VAR_NOINIT_8
    #define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef NVM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #undef NVM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef NVM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #undef NVM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

/* If Development Error Detection is ON (as well as INIT check),    *
 *   it SHALL be mapped to an initialized section (zeor is ok)      *
 * if Development Error Detection (or at least INIT check) is OFF,  *
 *   it MAY also be mapped to a NOINIT section.                     */
#ifdef NVM_START_SEC_VAR_UNSPECIFIED
    #undef NVM_START_SEC_VAR_UNSPECIFIED
    #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef NVM_STOP_SEC_VAR_UNSPECIFIED
    #undef NVM_STOP_SEC_VAR_UNSPECIFIED
    #define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

/* VAR FAST NOINIT sections */
#ifdef NVM_START_SEC_VAR_FAST_8
    #undef NVM_START_SEC_VAR_FAST_8
    #define START_SEC_VAR_FAST_NOINIT_8BIT
#endif
#ifdef NVM_STOP_SEC_VAR_FAST_8
    #undef NVM_STOP_SEC_VAR_FAST_8
    #define STOP_SEC_VAR_FAST_NOINIT_8BIT
#endif

/* VAR ZERO INIT sections */

/* SHALL be mapped to a section that is guaranteed to be ZEROed out after Power-On Reset       *
 * (therefore it MAY be a "normal" ZERO_INIT section, being ZEROed out after ANY reset         *
 * Make shure this helds true for all kinds of variable data (esp. "uninitialized).            *
 * If necessary, create a special section (don't map to a common one)                          */    
#ifdef NVM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
    #undef NVM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
    #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef NVM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
    #undef NVM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
    #define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

/**********************************************************************************************************************
 *  NvM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  DBG START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef DBG_START_SEC_CODE
  #undef DBG_START_SEC_CODE
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef DBG_STOP_SEC_CODE
  #undef DBG_STOP_SEC_CODE
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

#ifdef DBG_START_SEC_CODE_FAST
  #undef DBG_START_SEC_CODE_FAST
  #define START_SEC_CODE_FAST                       /* mapped to default fast code section */
#endif
#ifdef DBG_STOP_SEC_CODE_FAST
  #undef DBG_STOP_SEC_CODE_FAST
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef DBG_START_SEC_CONST_8BIT
# undef DBG_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT                       /* mapped to default const 8bit section */
#endif
#ifdef DBG_STOP_SEC_CONST_8BIT
# undef DBG_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST                             /* default const stop section */
#endif

#ifdef DBG_START_SEC_CONST_16BIT
# undef DBG_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef DBG_STOP_SEC_CONST_16BIT
# undef DBG_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef DBG_START_SEC_CONST_32BIT
# undef DBG_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef DBG_STOP_SEC_CONST_32BIT
# undef DBG_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef DBG_START_SEC_CONST_UNSPECIFIED
# undef DBG_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef DBG_STOP_SEC_CONST_UNSPECIFIED
# undef DBG_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef DBG_START_SEC_VAR_INIT_8BIT
# undef DBG_START_SEC_VAR_INIT_8BIT
# define START_SEC_VAR_INIT_8BIT                    /* mapped to default var init 8bit section */
#endif
#ifdef DBG_STOP_SEC_VAR_INIT_8BIT
# undef DBG_STOP_SEC_VAR_INIT_8BIT
# define STOP_SEC_VAR                               /* default var stop section */
#endif

#ifdef DBG_START_SEC_VAR_INIT_16BIT
# undef DBG_START_SEC_VAR_INIT_16BIT
# define START_SEC_VAR_INIT_16BIT
#endif
#ifdef DBG_STOP_SEC_VAR_INIT_16BIT
# undef DBG_STOP_SEC_VAR_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_INIT_32BIT
# undef DBG_START_SEC_VAR_INIT_32BIT
# define START_SEC_VAR_INIT_32BIT
#endif
#ifdef DBG_STOP_SEC_VAR_INIT_32BIT
# undef DBG_STOP_SEC_VAR_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_INIT_UNSPECIFIED
# undef DBG_START_SEC_VAR_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef DBG_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef DBG_STOP_SEC_VAR_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#ifdef DBG_START_SEC_VAR_NOINIT_8BIT
# undef DBG_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef DBG_STOP_SEC_VAR_NOINIT_8BIT
# undef DBG_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_NOINIT_16BIT
# undef DBG_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef DBG_STOP_SEC_VAR_NOINIT_16BIT
# undef DBG_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_NOINIT_32BIT
# undef DBG_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef DBG_STOP_SEC_VAR_NOINIT_32BIT
# undef DBG_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef DBG_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef DBG_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef DBG_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif


/* VAR ZERO INIT sections */

#ifdef DBG_START_SEC_VAR_ZERO_INIT_8BIT
# undef DBG_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef DBG_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef DBG_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_ZERO_INIT_16BIT
# undef DBG_START_SEC_VAR_ZERO_INIT_16BIT
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#ifdef DBG_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef DBG_STOP_SEC_VAR_ZERO_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_ZERO_INIT_32BIT
# undef DBG_START_SEC_VAR_ZERO_INIT_32BIT
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#ifdef DBG_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef DBG_STOP_SEC_VAR_ZERO_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef DBG_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef DBG_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef DBG_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef DBG_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif



/**********************************************************************************************************************
 *  DBG END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  RTM START 
 *********************************************************************************************************************/


/*******  CODE sections **********************************************************************************************/

#ifdef RTM_START_SEC_CODE
  #undef RTM_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef RTM_STOP_SEC_CODE
  #undef RTM_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CODE                             /* default code stop section */
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR ZERO INIT sections */

#ifdef RTM_START_SEC_VAR_ZERO_INIT_8BIT
# undef RTM_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef RTM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef RTM_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_8BIT
#endif

#ifdef RTM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef RTM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef RTM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef RTM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

/* VAR INIT sections */

#ifdef RTM_START_SEC_VAR_INIT_UNSPECIFIED
# undef RTM_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef RTM_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef RTM_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef RTM_START_SEC_VAR_INIT_UNSPECIFIED_SAFE
# undef RTM_START_SEC_VAR_INIT_UNSPECIFIED_SAFE // PRQA S 0841 / / MD_MSR_19.6 /
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef RTM_STOP_SEC_VAR_INIT_UNSPECIFIED_SAFE
# undef RTM_STOP_SEC_VAR_INIT_UNSPECIFIED_SAFE // PRQA S 0841 / / MD_MSR_19.6 /
# define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef RTM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef RTM_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef RTM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef RTM_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

/*******  CONST sections  **********************************************************************************************/

#ifdef RTM_START_SEC_CONST_UNSPECIFIED
# undef RTM_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef RTM_STOP_SEC_CONST_UNSPECIFIED
# undef RTM_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/**********************************************************************************************************************
 *  RTM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  DLT START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef DLT_START_SEC_CODE
  #undef DLT_START_SEC_CODE
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef DLT_STOP_SEC_CODE
  #undef DLT_STOP_SEC_CODE
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

#ifdef DLT_START_SEC_CODE_FAST
  #undef DLT_START_SEC_CODE_FAST
  #define START_SEC_CODE_FAST                       /* mapped to default fast code section */
#endif
#ifdef DLT_STOP_SEC_CODE_FAST
  #undef DLT_STOP_SEC_CODE_FAST
  #define STOP_SEC_CODE                             /* default code stop section */
#endif


#ifdef DLTCOM_START_SEC_CODE
  #undef DLTCOM_START_SEC_CODE
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef DLTCOM_STOP_SEC_CODE
  #undef DLTCOM_STOP_SEC_CODE
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

#ifdef DLTCOM_START_SEC_CODE_FAST
  #undef DLTCOM_START_SEC_CODE_FAST
  #define START_SEC_CODE_FAST                       /* mapped to default fast code section */
#endif
#ifdef DLTCOM_STOP_SEC_CODE_FAST
  #undef DLTCOM_STOP_SEC_CODE_FAST
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef DLT_START_SEC_CONST_8BIT
# undef DLT_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT                       /* mapped to default const 8bit section */
#endif
#ifdef DLT_STOP_SEC_CONST_8BIT
# undef DLT_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST                             /* default const stop section */
#endif

#ifdef DLT_START_SEC_CONST_16BIT
# undef DLT_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef DLT_STOP_SEC_CONST_16BIT
# undef DLT_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef DLT_START_SEC_CONST_32BIT
# undef DLT_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef DLT_STOP_SEC_CONST_32BIT
# undef DLT_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef DLT_START_SEC_CONST_UNSPECIFIED
# undef DLT_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef DLT_STOP_SEC_CONST_UNSPECIFIED
# undef DLT_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif



#ifdef DLTCOM_START_SEC_CONST_8BIT
# undef DLTCOM_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT                       /* mapped to default const 8bit section */
#endif
#ifdef DLTCOM_STOP_SEC_CONST_8BIT
# undef DLTCOM_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST                             /* default const stop section */
#endif

#ifdef DLTCOM_START_SEC_CONST_16BIT
# undef DLTCOM_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT
#endif
#ifdef DLTCOM_STOP_SEC_CONST_16BIT
# undef DLTCOM_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST
#endif

#ifdef DLTCOM_START_SEC_CONST_32BIT
# undef DLTCOM_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT
#endif
#ifdef DLTCOM_STOP_SEC_CONST_32BIT
# undef DLTCOM_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST
#endif

#ifdef DLTCOM_START_SEC_CONST_UNSPECIFIED
# undef DLTCOM_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef DLTCOM_STOP_SEC_CONST_UNSPECIFIED
# undef DLTCOM_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif



/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef DLT_START_SEC_VAR_INIT_8BIT
# undef DLT_START_SEC_VAR_INIT_8BIT
# define START_SEC_VAR_INIT_8BIT                    /* mapped to default var init 8bit section */
#endif
#ifdef DLT_STOP_SEC_VAR_INIT_8BIT
# undef DLT_STOP_SEC_VAR_INIT_8BIT
# define STOP_SEC_VAR                               /* default var stop section */
#endif

#ifdef DLT_START_SEC_VAR_INIT_16BIT
# undef DLT_START_SEC_VAR_INIT_16BIT
# define START_SEC_VAR_INIT_16BIT
#endif
#ifdef DLT_STOP_SEC_VAR_INIT_16BIT
# undef DLT_STOP_SEC_VAR_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_INIT_32BIT
# undef DLT_START_SEC_VAR_INIT_32BIT
# define START_SEC_VAR_INIT_32BIT
#endif
#ifdef DLT_STOP_SEC_VAR_INIT_32BIT
# undef DLT_STOP_SEC_VAR_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_INIT_UNSPECIFIED
# undef DLT_START_SEC_VAR_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef DLT_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef DLT_STOP_SEC_VAR_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif



#ifdef DLTCOM_START_SEC_VAR_INIT_8BIT
# undef DLTCOM_START_SEC_VAR_INIT_8BIT
# define START_SEC_VAR_INIT_8BIT                    /* mapped to default var init 8bit section */
#endif
#ifdef DLTCOM_STOP_SEC_VAR_INIT_8BIT
# undef DLTCOM_STOP_SEC_VAR_INIT_8BIT
# define STOP_SEC_VAR                               /* default var stop section */
#endif

#ifdef DLTCOM_START_SEC_VAR_INIT_16BIT
# undef DLTCOM_START_SEC_VAR_INIT_16BIT
# define START_SEC_VAR_INIT_16BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_INIT_16BIT
# undef DLTCOM_STOP_SEC_VAR_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_INIT_32BIT
# undef DLTCOM_START_SEC_VAR_INIT_32BIT
# define START_SEC_VAR_INIT_32BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_INIT_32BIT
# undef DLTCOM_STOP_SEC_VAR_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_INIT_UNSPECIFIED
# undef DLTCOM_START_SEC_VAR_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef DLTCOM_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef DLTCOM_STOP_SEC_VAR_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif


/* VAR NOINIT sections */

#ifdef DLT_START_SEC_VAR_NOINIT_8BIT
# undef DLT_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef DLT_STOP_SEC_VAR_NOINIT_8BIT
# undef DLT_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_NOINIT_16BIT
# undef DLT_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef DLT_STOP_SEC_VAR_NOINIT_16BIT
# undef DLT_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_NOINIT_32BIT
# undef DLT_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef DLT_STOP_SEC_VAR_NOINIT_32BIT
# undef DLT_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef DLT_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef DLT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef DLT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif



#ifdef DLTCOM_START_SEC_VAR_NOINIT_8BIT
# undef DLTCOM_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_NOINIT_8BIT
# undef DLTCOM_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_NOINIT_16BIT
# undef DLTCOM_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_NOINIT_16BIT
# undef DLTCOM_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_NOINIT_32BIT
# undef DLTCOM_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_NOINIT_32BIT
# undef DLTCOM_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef DLTCOM_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef DLTCOM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef DLTCOM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif



/* VAR ZERO INIT sections */

#ifdef DLT_START_SEC_VAR_ZERO_INIT_8BIT
# undef DLT_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef DLT_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef DLT_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_ZERO_INIT_16BIT
# undef DLT_START_SEC_VAR_ZERO_INIT_16BIT
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#ifdef DLT_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef DLT_STOP_SEC_VAR_ZERO_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_ZERO_INIT_32BIT
# undef DLT_START_SEC_VAR_ZERO_INIT_32BIT
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#ifdef DLT_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef DLT_STOP_SEC_VAR_ZERO_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef DLT_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef DLT_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef DLT_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef DLT_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif



#ifdef DLTCOM_START_SEC_VAR_ZERO_INIT_8BIT
# undef DLTCOM_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef DLTCOM_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_ZERO_INIT_16BIT
# undef DLTCOM_START_SEC_VAR_ZERO_INIT_16BIT
# define START_SEC_VAR_ZERO_INIT_16BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_ZERO_INIT_16BIT
# undef DLTCOM_STOP_SEC_VAR_ZERO_INIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_ZERO_INIT_32BIT
# undef DLTCOM_START_SEC_VAR_ZERO_INIT_32BIT
# define START_SEC_VAR_ZERO_INIT_32BIT
#endif
#ifdef DLTCOM_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef DLTCOM_STOP_SEC_VAR_ZERO_INIT_32BIT
# define STOP_SEC_VAR
#endif

#ifdef DLTCOM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef DLTCOM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef DLTCOM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef DLTCOM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif




/**********************************************************************************************************************
 *  DLT END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  J1939NM START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef J1939NM_START_SEC_CODE
# undef J1939NM_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE /* mapped to default code section */
#endif
#ifdef J1939NM_STOP_SEC_CODE
# undef J1939NM_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef J1939NM_START_SEC_CONST_8BIT
# undef J1939NM_START_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT /* mapped to default const 8bit section */
#endif
#ifdef J1939NM_STOP_SEC_CONST_8BIT
# undef J1939NM_STOP_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST /* default const stop section */
#endif

#ifdef J1939NM_START_SEC_CONST_16BIT
# undef J1939NM_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#ifdef J1939NM_STOP_SEC_CONST_16BIT
# undef J1939NM_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef J1939NM_START_SEC_CONST_32BIT
# undef J1939NM_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#ifdef J1939NM_STOP_SEC_CONST_32BIT
# undef J1939NM_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef J1939NM_START_SEC_CONST_UNSPECIFIED
# undef J1939NM_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef J1939NM_STOP_SEC_CONST_UNSPECIFIED
# undef J1939NM_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* FAST CONST sections */


/* Postbuild CFG CONST sections */

#ifdef J1939NM_START_SEC_PBCFG
# undef J1939NM_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#ifdef J1939NM_STOP_SEC_PBCFG
# undef J1939NM_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef J1939NM_START_SEC_VAR_ZERO_INIT_8BIT
# undef J1939NM_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef J1939NM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef J1939NM_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_8BIT
#endif


/* VAR NOINIT sections */

#ifdef J1939NM_START_SEC_VAR_NOINIT_8BIT
# undef J1939NM_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef J1939NM_STOP_SEC_VAR_NOINIT_8BIT
# undef J1939NM_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef J1939NM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef J1939NM_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef J1939NM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef J1939NM_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif


/* VAR ZERO INIT sections */

#ifdef J1939NM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef J1939NM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef J1939NM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef J1939NM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif


/* VAR FAST INIT sections */


/* VAR FAST NOINIT sections */


/* VAR FAST ZERO INIT sections */


/* Postbuild CFG VAR sections */

#ifdef J1939NM_START_SEC_VAR_PBCFG
# undef J1939NM_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#ifdef J1939NM_STOP_SEC_VAR_PBCFG
# undef J1939NM_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_PBCFG
#endif

/**********************************************************************************************************************
 *  J1939NM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  CANNM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef CANNM_START_SEC_CODE
    #undef CANNM_START_SEC_CODE                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_CODE                              /* mapped to default code section */
#endif
#ifdef CANNM_STOP_SEC_CODE
    #undef CANNM_STOP_SEC_CODE                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_CODE                               /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef CANNM_START_SEC_CONST_8BIT
    #undef CANNM_START_SEC_CONST_8BIT                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_CONST_8BIT                        /* mapped to default const section */
#endif
#ifdef CANNM_STOP_SEC_CONST_8BIT
    #undef CANNM_STOP_SEC_CONST_8BIT                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_CONST                              /* default const stop section */
#endif

#ifdef CANNM_START_SEC_CONST_UNSPECIFIED
    #undef CANNM_START_SEC_CONST_UNSPECIFIED            /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_CONST_UNSPECIFIED                 /* mapped to default const section */
#endif
#ifdef CANNM_STOP_SEC_CONST_UNSPECIFIED
    #undef CANNM_STOP_SEC_CONST_UNSPECIFIED             /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_CONST                              /* default const stop section */
#endif

/* Postbuild CFG CONST sections */

#ifdef CANNM_START_SEC_PBCFG
    #undef CANNM_START_SEC_PBCFG                        /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_CONST_PBCFG                       /* mapped to default postbuild section */
#endif
#ifdef CANNM_STOP_SEC_PBCFG
    #undef CANNM_STOP_SEC_PBCFG                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_CONST                              /* default const stop section */
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#ifdef CANNM_START_SEC_VAR_NOINIT_8BIT
    #undef CANNM_START_SEC_VAR_NOINIT_8BIT              /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_VAR_NOINIT_8BIT                   /* mapped to default var section */
#endif
#ifdef CANNM_STOP_SEC_VAR_NOINIT_8BIT
    #undef CANNM_STOP_SEC_VAR_NOINIT_8BIT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_VAR_NOINIT_8BIT                                /* default var stop section */
#endif

#ifdef CANNM_START_SEC_VAR_NOINIT_16BIT
    #undef CANNM_START_SEC_VAR_NOINIT_16BIT              /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_VAR_NOINIT_16BIT                   /* mapped to default var section */
#endif
#ifdef CANNM_STOP_SEC_VAR_NOINIT_16BIT
    #undef CANNM_STOP_SEC_VAR_NOINIT_16BIT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_VAR_NOINIT_16BIT                                /* default var stop section */
#endif

#ifdef CANNM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #undef CANNM_START_SEC_VAR_NOINIT_UNSPECIFIED       /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_VAR_NOINIT_UNSPECIFIED            /* mapped to default var section */
#endif
#ifdef CANNM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #undef CANNM_STOP_SEC_VAR_NOINIT_UNSPECIFIED        /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_VAR_NOINIT_UNSPECIFIED                                /* default var stop section */
#endif

/* VAR INIT sections */
#ifdef CANNM_START_SEC_VAR_INIT_UNSPECIFIED
    #undef CANNM_START_SEC_VAR_INIT_UNSPECIFIED         /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_VAR_INIT_UNSPECIFIED              /* mapped to default var section */
#endif
#ifdef CANNM_STOP_SEC_VAR_INIT_UNSPECIFIED
    #undef CANNM_STOP_SEC_VAR_INIT_UNSPECIFIED          /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_VAR_INIT_UNSPECIFIED                                /* default var stop section */
#endif

#ifdef CANNM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    #undef CANNM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED    /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED         /* mapped to default var section */
#endif
#ifdef CANNM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    #undef CANNM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED     /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED                                /* default var stop section */
#endif


#ifdef CANNM_START_SEC_VAR_ZERO_INIT_8BIT
    #undef CANNM_START_SEC_VAR_ZERO_INIT_8BIT              /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_VAR_ZERO_INIT_8BIT                   /* mapped to default var section */
#endif
#ifdef CANNM_STOP_SEC_VAR_ZERO_INIT_8BIT
    #undef CANNM_STOP_SEC_VAR_ZERO_INIT_8BIT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_VAR_ZERO_INIT_8BIT                                /* default var stop section */
#endif

/* VAR PBCFG sections */

#ifdef CANNM_START_SEC_VAR_PBCFG
    #undef CANNM_START_SEC_VAR_PBCFG                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define START_SEC_VAR_PBCFG                         /* mapped to default var section */
#endif
#ifdef CANNM_STOP_SEC_VAR_PBCFG
    #undef CANNM_STOP_SEC_VAR_PBCFG                     /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #define STOP_SEC_VAR_PBCFG                                /* default var stop section */
#endif

/**********************************************************************************************************************
 *  CANNM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  NM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef NM_START_SEC_CODE
# undef NM_START_SEC_CODE                               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                                 /* mapped to default code section */
#endif
#ifdef NM_STOP_SEC_CODE
# undef NM_STOP_SEC_CODE                                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE                                  /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#ifdef NM_START_SEC_CONST_8
# undef NM_START_SEC_CONST_8                            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8                              /* mapped to default const section */
#endif
#ifdef NM_STOP_SEC_CONST_8
# undef NM_STOP_SEC_CONST_8                             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                                 /* default const stop section */
#endif

#ifdef NM_START_SEC_CONST_16
# undef NM_START_SEC_CONST_16                           /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16                             /* mapped to default const section */
#endif
#ifdef NM_STOP_SEC_CONST_16
# undef NM_STOP_SEC_CONST_16                            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                                 /* default const stop section */
#endif

#ifdef NM_START_SEC_CONST_UNSPECIFIED
# undef NM_START_SEC_CONST_UNSPECIFIED                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED                    /* mapped to default const section */
#endif
#ifdef NM_STOP_SEC_CONST_UNSPECIFIED
# undef NM_STOP_SEC_CONST_UNSPECIFIED                   /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST                                 /* default const stop section */
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR NO_INIT sections */

#ifdef NM_START_SEC_VAR_NO_INIT_8
# undef NM_START_SEC_VAR_NO_INIT_8                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT                        /* mapped to default var section */
#endif
#ifdef NM_STOP_SEC_VAR_NO_INIT_8
# undef NM_STOP_SEC_VAR_NO_INIT_8                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_8BIT                                   /* default var stop section */
#endif

#ifdef NM_START_SEC_VAR_NO_INIT_16
# undef NM_START_SEC_VAR_NO_INIT_16                     /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_16BIT                       /* mapped to default var section */
#endif
#ifdef NM_STOP_SEC_VAR_NO_INIT_16
# undef NM_STOP_SEC_VAR_NO_INIT_16                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_16BIT                                   /* default var stop section */
#endif

#ifdef NM_START_SEC_VAR_NO_INIT_32
# undef NM_START_SEC_VAR_NO_INIT_32                     /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_32BIT                       /* mapped to default var section */
#endif
#ifdef NM_STOP_SEC_VAR_NO_INIT_32
# undef NM_STOP_SEC_VAR_NO_INIT_32                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_32BIT                                   /* default var stop section */
#endif

#ifdef NM_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef NM_START_SEC_VAR_NO_INIT_UNSPECIFIED            /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED              /* mapped to default var section */
#endif
#ifdef NM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef NM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED                                   /* default var stop section */
#endif

/* VAR INIT sections */

#ifdef NM_START_SEC_VAR_INIT_8
# undef NM_START_SEC_VAR_INIT_8                         /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT                           /* mapped to default var section */
#endif
#ifdef NM_STOP_SEC_VAR_INIT_8
# undef NM_STOP_SEC_VAR_INIT_8                          /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_8BIT                                   /* default var stop section */
#endif

#ifdef NM_START_SEC_VAR_INIT_UNSPECIFIED
# undef NM_START_SEC_VAR_INIT_UNSPECIFIED               /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_UNSPECIFIED                 /* mapped to default var section */
#endif
#ifdef NM_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef NM_STOP_SEC_VAR_INIT_UNSPECIFIED                /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_UNSPECIFIED                                   /* default var stop section */
#endif

/**********************************************************************************************************************
 *  NM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  LINNM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef LINNM_START_SEC_CODE
    #undef LINNM_START_SEC_CODE
    #define START_SEC_CODE                              /*mapped to default code section*/
#endif
#ifdef LINNM_STOP_SEC_CODE
    #undef LINNM_STOP_SEC_CODE
    #define STOP_SEC_CODE                               /*default code stop section*/
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef LINNM_START_SEC_CONST_8BIT
    #undef LINNM_START_SEC_CONST_8BIT
    #define START_SEC_CONST_8BIT                        /*mapped to default const section */
#endif
#ifdef LINNM_STOP_SEC_CONST_8BIT
    #undef LINNM_STOP_SEC_CONST_8BIT
    #define STOP_SEC_CONST                              /*default const stop section*/
#endif

#ifdef LINNM_START_SEC_CONST_32BIT
    #undef LINNM_START_SEC_CONST_32BIT
    #define START_SEC_CONST_32BIT                       /*mapped to default const section */
#endif
#ifdef LINNM_STOP_SEC_CONST_32BIT
    #undef LINNM_STOP_SEC_CONST_32BIT
    #define STOP_SEC_CONST                              /*default const stop section*/
#endif

#ifdef LINNM_START_SEC_CONST_UNSPECIFIED
    #undef LINNM_START_SEC_CONST_UNSPECIFIED
    #define START_SEC_CONST_UNSPECIFIED                 /*mapped to default const section */
#endif
#ifdef LINNM_STOP_SEC_CONST_UNSPECIFIED
    #undef LINNM_STOP_SEC_CONST_UNSPECIFIED
    #define STOP_SEC_CONST                              /*default const stop section*/
#endif

/* Postbuild CFG CONST sections */

#ifdef LINNM_START_SEC_PBCFG
    #undef LINNM_START_SEC_PBCFG
    #define START_SEC_CONST_PBCFG                       /*mapped to default postbuild section */
#endif
#ifdef LINNM_STOP_SEC_PBCFG
    #undef LINNM_STOP_SEC_PBCFG
    #define STOP_SEC_CONST                              /*default const stop section*/
#endif

#ifdef LINNM_START_SEC_PBCFG_ROOT
    #undef LINNM_START_SEC_PBCFG_ROOT
    #define START_SEC_CONST_PBCFG                       /*mapped to default postbuild section */
#endif
#ifdef LINNM_STOP_SEC_PBCFG_ROOT
    #undef LINNM_STOP_SEC_PBCFG_ROOT
    #define STOP_SEC_CONST                              /*default const stop section*/
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#ifdef LINNM_START_SEC_VAR_NOINIT_8BIT
    #undef LINNM_START_SEC_VAR_NOINIT_8BIT
    #define START_SEC_VAR_NOINIT_8BIT                   /*mapped to default var section*/
#endif
#ifdef LINNM_STOP_SEC_VAR_NOINIT_8BIT
    #undef LINNM_STOP_SEC_VAR_NOINIT_8BIT
    #define STOP_SEC_VAR_NOINIT_8BIT                                /*default var stop section*/
#endif

#ifdef LINNM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #undef LINNM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #define START_SEC_VAR_NOINIT_UNSPECIFIED            /*mapped to default var section*/
#endif
#ifdef LINNM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #undef LINNM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #define STOP_SEC_VAR_NOINIT_UNSPECIFIED                                /*default var stop section*/
#endif

/* VAR FAST NOINIT sections */

#ifdef LINNM_START_SEC_VAR_FAST_NOINIT_8BIT
    #undef LINNM_START_SEC_VAR_FAST_NOINIT_8BIT
    #define START_SEC_VAR_FAST_NOINIT_8BIT              /*mapped to default var section*/
#endif
#ifdef LINNM_STOP_SEC_VAR_FAST_NOINIT_8BIT
    #undef LINNM_STOP_SEC_VAR_FAST_NOINIT_8BIT
    #define STOP_SEC_VAR_FAST_NOINIT_8BIT                                /*default var stop section*/
#endif

#ifdef LINNM_START_SEC_VAR_FAST_NOINIT_16BIT
    #undef LINNM_START_SEC_VAR_FAST_NOINIT_16BIT
    #define START_SEC_VAR_FAST_NOINIT_16BIT             /*mapped to default var section*/
#endif
#ifdef LINNM_STOP_SEC_VAR_FAST_NOINIT_16BIT
    #undef LINNM_STOP_SEC_VAR_FAST_NOINIT_16BIT
    #define STOP_SEC_VAR_FAST_NOINIT_16BIT                                /*default var stop section*/
#endif

#ifdef LINNM_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
    #undef LINNM_START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
    #define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED       /*mapped to default var section*/
#endif
#ifdef LINNM_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
    #undef LINNM_STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
    #define STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED                                /*default var stop section*/
#endif

/* VAR FAST ZERO INIT sections */

#ifdef LINNM_START_SEC_VAR_FAST_ZERO_INIT_8BIT
    #undef LINNM_START_SEC_VAR_FAST_ZERO_INIT_8BIT
    #define START_SEC_VAR_FAST_ZERO_INIT_8BIT           /*mapped to default var section*/
#endif
#ifdef LINNM_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT
    #undef LINNM_STOP_SEC_VAR_FAST_ZERO_INIT_8BIT
    #define STOP_SEC_VAR_FAST_ZERO_INIT_8BIT                                /*default var stop section*/
#endif

#ifdef LINNM_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
    #undef LINNM_START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
    #define START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED    /*mapped to default var section*/
#endif
#ifdef LINNM_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
    #undef LINNM_STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
    #define STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED                                /*default var stop section*/
#endif

/**********************************************************************************************************************
 *  LINNM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  BSWM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/
#ifdef BSWM_START_SEC_CODE
# undef BSWM_START_SEC_CODE
# define START_SEC_CODE                                 /* mapped to default code section*/
#endif

#ifdef BSWM_STOP_SEC_CODE
# undef BSWM_STOP_SEC_CODE
# define STOP_SEC_CODE                                  /* default code stop section*/
#endif

/*******  CONST sections  ********************************************************************************************/

#ifdef BSWM_START_SEC_CONST_8BIT
# undef BSWM_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT                           /* mapped to default const section */
#endif

#ifdef BSWM_STOP_SEC_CONST_8BIT
# undef BSWM_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST                                 /* default const stop section */
#endif

#ifdef BSWM_START_SEC_CONST_16BIT
# undef BSWM_START_SEC_CONST_16BIT
# define START_SEC_CONST_16BIT                          /* mapped to default const section */
#endif

#ifdef BSWM_STOP_SEC_CONST_16BIT
# undef BSWM_STOP_SEC_CONST_16BIT
# define STOP_SEC_CONST                                 /* default const stop section */
#endif

#ifdef BSWM_START_SEC_CONST_32BIT
# undef BSWM_START_SEC_CONST_32BIT
# define START_SEC_CONST_32BIT                          /* mapped to default const section */
#endif

#ifdef BSWM_STOP_SEC_CONST_32BIT
# undef BSWM_STOP_SEC_CONST_32BIT
# define STOP_SEC_CONST                                 /* default const stop section */
#endif

#ifdef BSWM_START_SEC_CONST_UNSPECIFIED
# undef BSWM_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED                    /* mapped to default const section */
#endif

#ifdef BSWM_STOP_SEC_CONST_UNSPECIFIED
# undef BSWM_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST                                 /* default const stop section */
#endif

#ifdef BSWM_START_SEC_PBCFG
# undef BSWM_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG                          /* mapped to default const section */
#endif

#ifdef BSWM_STOP_SEC_PBCFG
# undef BSWM_STOP_SEC_PBCFG
# define STOP_SEC_CONST                                 /* default const stop section */
#endif

/*******  VAR sections  **********************************************************************************************/

#ifdef BSWM_START_SEC_VAR_NOINIT_8BIT
# undef BSWM_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT                      /* mapped to default var section */
#endif

#ifdef BSWM_STOP_SEC_VAR_NOINIT_8BIT
# undef BSWM_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR_NOINIT_8BIT                                   /* default var stop section*/
#endif

#ifdef BSWM_START_SEC_VAR_NOINIT_16BIT
# undef  BSWM_START_SEC_VAR_NOINIT_16BIT                /* mapped to default var section */
# define START_SEC_VAR_NOINIT_16BIT
#endif

#ifdef BSWM_STOP_SEC_VAR_NOINIT_16BIT
# undef BSWM_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR_NOINIT_16BIT                                   /* default var stop section */
#endif

#ifdef BSWM_START_SEC_VAR_NOINIT_32BIT
# undef  BSWM_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT                     /* mapped to default var section */
#endif

#ifdef BSWM_STOP_SEC_VAR_NOINIT_32BIT
# undef BSWM_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR_NOINIT_32BIT                                   /* default var stop section*/
#endif

#ifdef BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED               /* mapped to default var section */
#endif

#ifdef BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED                                  /* default var stop section */
#endif

#ifdef BSWM_START_SEC_VAR_ZERO_INIT_8BIT
# undef BSWM_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT                   /* mapped to default var section */
#endif

#ifdef BSWM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef BSWM_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR_ZERO_INIT_8BIT                                   /* default var stop section */
#endif

#ifdef BSWM_START_SEC_VAR_PBCFG
# undef BSWM_START_SEC_VAR_PBCFG
# define START_SEC_VAR_PBCFG                            /* mapped to default var section */
#endif

#ifdef BSWM_STOP_SEC_VAR_PBCFG
# undef BSWM_STOP_SEC_VAR_PBCFG
# define STOP_SEC_VAR_PBCFG                                   /* default var stop section */
#endif

/**********************************************************************************************************************
 *  BSWM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  SYSSERVICE_ASR4ECUM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/
#ifdef ECUM_START_SEC_CODE
# undef ECUM_START_SEC_CODE
# define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef ECUM_STOP_SEC_CODE
# undef ECUM_STOP_SEC_CODE
# define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#ifdef ECUM_START_SEC_CONST_UNSPECIFIED
# undef ECUM_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef ECUM_STOP_SEC_CONST_UNSPECIFIED
# undef ECUM_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

#ifdef ECUM_START_SEC_CONST_8BIT
# undef ECUM_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT
#endif
#ifdef ECUM_STOP_SEC_CONST_8BIT
# undef ECUM_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST
#endif

/* Postbuild CFG CONST sections */

#ifdef ECUM_START_SEC_PBCFG
# undef ECUM_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef ECUM_STOP_SEC_PBCFG
# undef ECUM_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif

#ifdef ECUM_START_SEC_PBCFG_GLOBALROOT
# undef ECUM_START_SEC_PBCFG_GLOBALROOT
# define START_SEC_PBCFG_GLOBALROOT
#endif
#ifdef ECUM_STOP_SEC_PBCFG_GLOBALROOT
# undef ECUM_STOP_SEC_PBCFG_GLOBALROOT
# define STOP_SEC_CONST
#endif



/*******  VAR sections  **********************************************************************************************/


/* VAR NOINIT sections */

#ifdef ECUM_START_SEC_VAR_NOINIT_8BIT
# undef ECUM_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef ECUM_STOP_SEC_VAR_NOINIT_8BIT
# undef ECUM_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef ECUM_START_SEC_VAR_NOINIT_16BIT
# undef ECUM_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef ECUM_STOP_SEC_VAR_NOINIT_16BIT
# undef ECUM_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef ECUM_START_SEC_VAR_NOINIT_32BIT
# undef ECUM_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef ECUM_STOP_SEC_VAR_NOINIT_32BIT
# undef ECUM_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR_NOINIT_32BIT
#endif

#ifdef ECUM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef ECUM_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef ECUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef ECUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef ECUM_START_SEC_VAR_NOCACHE_NOINIT_32BIT
# undef ECUM_START_SEC_VAR_NOCACHE_NOINIT_32BIT
# define START_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif
#ifdef ECUM_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT
# undef ECUM_STOP_SEC_VAR_NOCACHE_NOINIT_32BIT
# define STOP_SEC_VAR_NOCACHE_NOINIT_32BIT
#endif


/**********************************************************************************************************************
 *  SYSSERVICE_ASR4ECUM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  WDGM START
 *********************************************************************************************************************/

//vissmd #include "WdgM_OsMemMap.h" 

/*******  CODE sections **********************************************************************************************/

#if defined WDGM_START_SEC_CODE
# undef WDGM_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif
#if defined WDGM_STOP_SEC_CODE
# undef WDGM_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

#if defined(WDGM_START_SEC_APPL_CODE)
# undef WDGM_START_SEC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif
#if defined(WDGM_STOP_SEC_APPL_CODE)
# undef WDGM_STOP_SEC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif


/*******  CONST sections  ********************************************************************************************/

#if defined WDGM_START_SEC_CONST_8BIT
# undef WDGM_START_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT
#endif
#if defined WDGM_STOP_SEC_CONST_8BIT
# undef WDGM_STOP_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined WDGM_START_SEC_CONST_16BIT
# undef WDGM_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined WDGM_STOP_SEC_CONST_16BIT
# undef WDGM_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined WDGM_START_SEC_CONST_32BIT
# undef WDGM_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#if defined WDGM_STOP_SEC_CONST_32BIT
# undef WDGM_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined WDGM_START_SEC_CONST_UNSPECIFIED
# undef WDGM_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#if defined WDGM_STOP_SEC_CONST_UNSPECIFIED
# undef WDGM_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#if defined WDGM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef WDGM_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_UNSPECIFIED
#endif
#if defined WDGM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef WDGM_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_UNSPECIFIED
#endif

#if defined WDGM_START_SEC_VAR_NOINIT_8BIT
# undef WDGM_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_8BIT
#endif
#if defined WDGM_STOP_SEC_VAR_NOINIT_8BIT
# undef WDGM_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_8BIT
#endif

#if defined WDGM_START_SEC_VAR_NOINIT_16BIT
# undef WDGM_START_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_16BIT
#endif
#if defined WDGM_STOP_SEC_VAR_NOINIT_16BIT
# undef WDGM_STOP_SEC_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_16BIT
#endif

#if defined WDGM_START_SEC_VAR_NOINIT_32BIT
# undef WDGM_START_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_16BIT
#endif
#if defined WDGM_STOP_SEC_VAR_NOINIT_32BIT
# undef WDGM_STOP_SEC_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_NOINIT_16BIT
#endif


/* VAR INIT sections */

#if defined WDGM_START_SEC_VAR_8BIT
# undef WDGM_START_SEC_VAR_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_8BIT
#endif
#if defined WDGM_STOP_SEC_VAR_8BIT
# undef WDGM_STOP_SEC_VAR_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_8BIT
#endif

#if defined WDGM_START_SEC_VAR_16BIT
# undef WDGM_START_SEC_VAR_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_16BIT
#endif
#if defined WDGM_STOP_SEC_VAR_16BIT
# undef WDGM_STOP_SEC_VAR_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_16BIT
#endif

#if defined WDGM_START_SEC_VAR_32BIT
# undef WDGM_START_SEC_VAR_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_32BIT
#endif
#if defined WDGM_STOP_SEC_VAR_32BIT
# undef WDGM_STOP_SEC_VAR_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_32BIT
#endif

#if defined WDGM_START_SEC_VAR_BOOLEAN
# undef WDGM_START_SEC_VAR_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_START_SEC_OsApplication_Trusted_Core0_VAR_UNSPECIFIED
#endif
#if defined WDGM_STOP_SEC_VAR_BOOLEAN
# undef WDGM_STOP_SEC_VAR_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OS_STOP_SEC_OsApplication_Trusted_Core0_VAR_UNSPECIFIED
#endif


/* Global Shared Variables of the WdgM.
 * If a SafeContext OS is used this section will be defined by the OS.
 * If no SafeContext OS is used this section has to be mapped to a memory area where all SWCs has access
 */
/*#if defined GlobalShared_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef GlobalShared_START_SEC_VAR_NOINIT_UNSPECIFIED*/ /* PRQA S 0841 */ /* MD_MSR_19.6 */
/*# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined GlobalShared_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef GlobalShared_STOP_SEC_VAR_NOINIT_UNSPECIFIED*/ /* PRQA S 0841 */ /* MD_MSR_19.6 */
/*# define STOP_SEC_VAR
#endif*/
/* or the following section (depending on which OS version is used) */
/*#if defined OS_START_SEC_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED
# undef OS_START_SEC_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED*/ /* PRQA S 0841 */ /* MD_MSR_19.6 */
/*# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#if defined OS_STOP_SEC_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED
# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED*/ /* PRQA S 0841 */ /* MD_MSR_19.6 */
/*# define STOP_SEC_VAR
#endif*/
 
/**********************************************************************************************************************
 *  WDGM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  SYSSERVICE_ASRCRC START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/
#ifdef CRC_START_SEC_CODE
    #undef CRC_START_SEC_CODE
    #define START_SEC_CODE
#endif
#ifdef CRC_STOP_SEC_CODE
    #undef CRC_STOP_SEC_CODE
    #define STOP_SEC_CODE
#endif

/*******  CONST sections  ********************************************************************************************/
#ifdef CRC_START_SEC_CONST_8
    #undef CRC_START_SEC_CONST_8
    #define START_SEC_CONST_8
#endif
#ifdef CRC_STOP_SEC_CONST_8
    #undef CRC_STOP_SEC_CONST_8
    #define STOP_SEC_CONST
#endif

#ifdef CRC_START_SEC_CONST_16
    #undef CRC_START_SEC_CONST_16
    #define START_SEC_CONST_16
#endif
#ifdef CRC_STOP_SEC_CONST_16
    #undef CRC_STOP_SEC_CONST_16
    #define STOP_SEC_CONST
#endif

#ifdef CRC_START_SEC_CONST_32
    #undef CRC_START_SEC_CONST_32
    #define START_SEC_CONST_32
#endif
#ifdef CRC_STOP_SEC_CONST_32
    #undef CRC_STOP_SEC_CONST_32
    #define STOP_SEC_CONST
#endif

#ifdef CRC_START_SEC_CONST_64
    #undef CRC_START_SEC_CONST_64
    #define START_SEC_CONST_64
#endif
#ifdef CRC_STOP_SEC_CONST_64
    #undef CRC_STOP_SEC_CONST_64
    #define STOP_SEC_CONST
#endif

/**********************************************************************************************************************
 *  SYSSERVICE_ASRCRC END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  CRY_30_LIBCV START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef CRY_30_LIBCV_START_SEC_CODE
  #undef CRY_30_LIBCV_START_SEC_CODE
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef CRY_30_LIBCV_STOP_SEC_CODE
  #undef CRY_30_LIBCV_STOP_SEC_CODE
  #define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */
#ifdef CRY_30_LIBCV_START_SEC_CONST_UNSPECIFIED
# undef CRY_30_LIBCV_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef CRY_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
# undef CRY_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#ifdef CRY_30_LIBCV_START_SEC_VAR_NOINIT_8BIT
# undef CRY_30_LIBCV_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef CRY_30_LIBCV_STOP_SEC_VAR_NOINIT_8BIT
# undef CRY_30_LIBCV_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef CRY_30_LIBCV_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef CRY_30_LIBCV_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef CRY_30_LIBCV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef CRY_30_LIBCV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

/**********************************************************************************************************************
 *  CRY_30_LIBCV END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  CSM START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef CSM_START_SEC_CODE
# undef CSM_START_SEC_CODE
# define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef CSM_STOP_SEC_CODE
# undef CSM_STOP_SEC_CODE
# define STOP_SEC_CODE                             /* default code stop section */
#endif

#ifdef CSM_START_SEC_APPL_CODE
# undef CSM_START_SEC_APPL_CODE                    /* mapped to default code section */
# define START_SEC_CODE
#endif
#ifdef CSM_STOP_SEC_APPL_CODE
# undef CSM_STOP_SEC_APPL_CODE
# define STOP_SEC_CODE                             /* default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef CSM_START_SEC_CONST_UNSPECIFIED
# undef CSM_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef CSM_STOP_SEC_CONST_UNSPECIFIED
# undef CSM_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#ifdef CSM_START_SEC_VAR_NOINIT_8BIT
# undef CSM_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef CSM_STOP_SEC_VAR_NOINIT_8BIT
# undef CSM_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef CSM_START_SEC_VAR_NOINIT_16BIT
# undef CSM_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef CSM_STOP_SEC_VAR_NOINIT_16BIT
# undef CSM_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR_NOINIT_16BIT
#endif

/* VAR ZERO INIT sections */

#ifdef CSM_START_SEC_VAR_ZERO_INIT_8BIT
# undef CSM_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef CSM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef CSM_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR_ZERO_INIT_8BIT
#endif

/**********************************************************************************************************************
 *  CSM END
 *********************************************************************************************************************/


#ifdef DET_START_SEC_CODE
# undef DET_START_SEC_CODE
# define START_SEC_CODE
#endif
#ifdef DET_STOP_SEC_CODE
# undef DET_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

#ifdef DET_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef DET_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef DET_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef DET_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef DET_START_SEC_VAR_NOINIT_8BIT
# undef DET_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef DET_STOP_SEC_VAR_NOINIT_8BIT
# undef DET_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef DET_START_SEC_VAR_INIT_UNSPECIFIED
# undef DET_START_SEC_VAR_INIT_UNSPECIFIED
# define START_SEC_VAR_INIT_UNSPECIFIED
#endif
#ifdef DET_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef DET_STOP_SEC_VAR_INIT_UNSPECIFIED
# define STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef DET_START_SEC_CONST_UNSPECIFIED
# undef DET_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef DET_STOP_SEC_CONST_UNSPECIFIED
# undef DET_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif



/**********************************************************************************************************************
 *  SysService_AsrRamTst START
 *********************************************************************************************************************/

#ifdef RAMTST_START_SEC_CODE
  #undef RAMTST_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CODE
#endif

#ifdef RAMTST_STOP_SEC_CODE
  #undef RAMTST_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CODE
#endif

#ifdef RAMTST_START_SEC_VAR_INIT_UNSPECIFIED
  #undef RAMTST_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifdef RAMTST_STOP_SEC_VAR_INIT_UNSPECIFIED
  #undef RAMTST_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_VAR
#endif

#ifdef RAMTST_START_SEC_VAR_NO_INIT_8
  #undef RAMTST_START_SEC_VAR_NO_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_VAR_NO_INIT_8
#endif

#ifdef RAMTST_STOP_SEC_VAR_NO_INIT_8
  #undef RAMTST_STOP_SEC_VAR_NO_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_VAR
#endif

#ifdef RAMTST_START_SEC_VAR_NO_INIT_32
  #undef RAMTST_START_SEC_VAR_NO_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_VAR_NO_INIT_32
#endif

#ifdef RAMTST_STOP_SEC_VAR_NO_INIT_32
  #undef RAMTST_STOP_SEC_VAR_NO_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_VAR
#endif

#ifdef RAMTST_START_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef RAMTST_START_SEC_VAR_NO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_VAR_NO_INIT_UNSPECIFIED
#endif

#ifdef RAMTST_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  #undef RAMTST_STOP_SEC_VAR_NO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_VAR
#endif

#ifdef RAMTST_START_SEC_CONST_32
  #undef RAMTST_START_SEC_CONST_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CONST_32
#endif

#ifdef RAMTST_STOP_SEC_CONST_32
  #undef RAMTST_STOP_SEC_CONST_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CONST
#endif

#ifdef RAMTST_START_SEC_CONST_UNSPECIFIED
  #undef RAMTST_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef RAMTST_STOP_SEC_CONST_UNSPECIFIED
  #undef RAMTST_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CONST
#endif

#ifdef RAMTST_START_SEC_CONST_PBCFG
  #undef RAMTST_START_SEC_CONST_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef RAMTST_STOP_SEC_CONST_PBCFG
  #undef RAMTST_STOP_SEC_CONST_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CONST
#endif

#ifdef RAMTST_START_SEC_CONST_PBCFG_ROOT
  #undef RAMTST_START_SEC_CONST_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef RAMTST_STOP_SEC_CONST_PBCFG_ROOT
  #undef RAMTST_STOP_SEC_CONST_PBCFG_ROOT /* PRQA S 0841 */ /* MD_MSR_19.6 */
  #define STOP_SEC_CONST
#endif

/**********************************************************************************************************************
 *  SysService_AsrRamTst END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  ISSM START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef ISSM_START_SEC_CODE
  #undef ISSM_START_SEC_CODE
  #define START_SEC_CODE                            /* mapped to default code section */
#endif
#ifdef ISSM_STOP_SEC_CODE
  #undef ISSM_STOP_SEC_CODE
  #define STOP_SEC_CODE                             /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef ISSM_START_SEC_CONST_8BIT
# undef ISSM_START_SEC_CONST_8BIT
# define START_SEC_CONST_8BIT                       /* mapped to default const 8bit section */
#endif
#ifdef ISSM_STOP_SEC_CONST_8BIT
# undef ISSM_STOP_SEC_CONST_8BIT
# define STOP_SEC_CONST                             /* default const stop section */
#endif

#ifdef ISSM_START_SEC_CONST_UNSPECIFIED
# undef ISSM_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef ISSM_STOP_SEC_CONST_UNSPECIFIED
# undef ISSM_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif


/* Postbuild CFG CONST sections */

#ifdef ISSM_START_SEC_PBCFG
# undef ISSM_START_SEC_PBCFG
# define START_SEC_CONST_PBCFG
#endif
#ifdef ISSM_STOP_SEC_PBCFG
# undef ISSM_STOP_SEC_PBCFG
# define STOP_SEC_CONST
#endif

#ifdef ISSM_START_SEC_VAR_PBCFG
# undef ISSM_START_SEC_VAR_PBCFG
# define START_SEC_VAR_PBCFG
#endif
#ifdef ISSM_STOP_SEC_VAR_PBCFG
# undef ISSM_STOP_SEC_VAR_PBCFG
# define STOP_SEC_VAR_PBCFG
#endif

/*******  VAR sections  **********************************************************************************************/

/* VAR NOINIT sections */

#ifdef ISSM_START_SEC_VAR_NOINIT_8BIT
# undef ISSM_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef ISSM_STOP_SEC_VAR_NOINIT_8BIT
# undef ISSM_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef ISSM_START_SEC_VAR_NOINIT_16BIT
# undef ISSM_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef ISSM_STOP_SEC_VAR_NOINIT_16BIT
# undef ISSM_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR_NOINIT_16BIT
#endif

#ifdef ISSM_START_SEC_VAR_NOINIT_32BIT
# undef ISSM_START_SEC_VAR_NOINIT_32BIT
# define START_SEC_VAR_NOINIT_32BIT
#endif
#ifdef ISSM_STOP_SEC_VAR_NOINIT_32BIT
# undef ISSM_STOP_SEC_VAR_NOINIT_32BIT
# define STOP_SEC_VAR_NOINIT_32BIT
#endif


/* VAR ZERO INIT sections */

#ifdef ISSM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ISSM_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef ISSM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef ISSM_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif

#ifdef ISSM_START_SEC_VAR_ZERO_INIT_8BIT
# undef ISSM_START_SEC_VAR_ZERO_INIT_8BIT
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef ISSM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef ISSM_STOP_SEC_VAR_ZERO_INIT_8BIT
# define STOP_SEC_VAR_ZERO_INIT_8BIT
#endif


/**********************************************************************************************************************
 *  ISSM END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  WRAPNV START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef WRAPNV_START_SEC_CODE
 #undef WRAPNV_START_SEC_CODE
 #define START_SEC_CODE                                              /* Mapped to default code section */
#endif

#ifdef WRAPNV_STOP_SEC_CODE
 #undef WRAPNV_STOP_SEC_CODE
 #define STOP_SEC_CODE                                               /* Default code stop section */
#endif

/*******  CONST sections  ********************************************************************************************/

#ifdef WRAPNV_START_SEC_CONST_UNSPECIFIED
 #undef WRAPNV_START_SEC_CONST_UNSPECIFIED
 #define START_SEC_CONST_UNSPECIFIED
#endif

#ifdef WRAPNV_STOP_SEC_CONST_UNSPECIFIED
 #undef WRAPNV_STOP_SEC_CONST_UNSPECIFIED
 #define STOP_SEC_CONST
#endif

/*******  VAR sections  **********************************************************************************************/

#ifdef WRAPNV_START_SEC_VAR_NOINIT_UNSPECIFIED
 #undef WRAPNV_START_SEC_VAR_NOINIT_UNSPECIFIED
 #define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef WRAPNV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
 #undef WRAPNV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
 #define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

/**********************************************************************************************************************
 *  WRAPNV END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  J1939TP START
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef J1939TP_START_SEC_CODE
# undef J1939TP_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE /* mapped to default code section */
#endif
#ifdef J1939TP_STOP_SEC_CODE
# undef J1939TP_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef J1939TP_START_SEC_CONST_8BIT
# undef J1939TP_START_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT /* mapped to default const 8bit section */
#endif
#ifdef J1939TP_STOP_SEC_CONST_8BIT
# undef J1939TP_STOP_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST /* default const stop section */
#endif

#ifdef J1939TP_START_SEC_CONST_16BIT
# undef J1939TP_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#ifdef J1939TP_STOP_SEC_CONST_16BIT
# undef J1939TP_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef J1939TP_START_SEC_CONST_32BIT
# undef J1939TP_START_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_32BIT
#endif
#ifdef J1939TP_STOP_SEC_CONST_32BIT
# undef J1939TP_STOP_SEC_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef J1939TP_START_SEC_CONST_UNSPECIFIED
# undef J1939TP_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef J1939TP_STOP_SEC_CONST_UNSPECIFIED
# undef J1939TP_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/* FAST CONST sections */


/* Postbuild CFG CONST sections */

#ifdef J1939TP_START_SEC_PBCFG
# undef J1939TP_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#ifdef J1939TP_STOP_SEC_PBCFG
# undef J1939TP_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef J1939TP_START_SEC_VAR_ZERO_INIT_8BIT
# undef J1939TP_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_8BIT
#endif
#ifdef J1939TP_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef J1939TP_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_8BIT
#endif


/* VAR NOINIT sections */

#ifdef J1939TP_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef J1939TP_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef J1939TP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef J1939TP_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef J1939TP_START_SEC_VAR_NOINIT_8BIT
# undef J1939TP_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef J1939TP_STOP_SEC_VAR_NOINIT_8BIT
# undef J1939TP_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_8BIT
#endif


/* VAR ZERO INIT sections */

#ifdef J1939TP_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef J1939TP_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif
#ifdef J1939TP_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef J1939TP_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#endif


/* VAR FAST INIT sections */


/* VAR FAST NOINIT sections */


/* VAR FAST ZERO INIT sections */


/* Postbuild CFG VAR sections */

#ifdef J1939TP_START_SEC_VAR_PBCFG
# undef J1939TP_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#ifdef J1939TP_STOP_SEC_VAR_PBCFG
# undef J1939TP_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_PBCFG
#endif

/**********************************************************************************************************************
 *  J1939TP END
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  CANTP START 
 *********************************************************************************************************************/

/*******  CODE sections **********************************************************************************************/

#ifdef   CANTP_START_SEC_CODE
# undef  CANTP_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE      /* mapped to default code section */
#endif
#ifdef   CANTP_STOP_SEC_CODE
# undef  CANTP_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE      /* default code stop section */
#endif


/*******  CONST sections  ********************************************************************************************/

/* CONST sections */

#ifdef   CANTP_START_SEC_CONST_UNSPECIFIED
# undef  CANTP_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef   CANTP_STOP_SEC_CONST_UNSPECIFIED
# undef  CANTP_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#if defined(CANTP_START_SEC_CONST_16BIT)
# undef CANTP_START_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_16BIT
#endif
#if defined(CANTP_STOP_SEC_CONST_16BIT)
# undef CANTP_STOP_SEC_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

#ifdef   CANTP_START_SEC_CONST_8BIT
# undef  CANTP_START_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_8BIT
#endif
#ifdef   CANTP_STOP_SEC_CONST_8BIT
# undef  CANTP_STOP_SEC_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/* Postbuild CFG CONST sections */

#ifdef   CANTP_START_SEC_PBCFG
# undef  CANTP_START_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_PBCFG
#endif
#ifdef   CANTP_STOP_SEC_PBCFG
# undef  CANTP_STOP_SEC_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif



/*******  VAR sections  **********************************************************************************************/

/* VAR INIT sections */

#ifdef   CANTP_START_SEC_VAR_INIT_8BIT
# undef  CANTP_START_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_INIT_8BIT
#endif
#ifdef   CANTP_STOP_SEC_VAR_INIT_8BIT
# undef  CANTP_STOP_SEC_VAR_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_INIT_8BIT
#endif


/* VAR NOINIT sections */

#ifdef   CANTP_START_SEC_VAR_NOINIT_8BIT
# undef  CANTP_START_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef   CANTP_STOP_SEC_VAR_NOINIT_8BIT
# undef  CANTP_STOP_SEC_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_8BIT
#endif

#ifdef   CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef  CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef   CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef  CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_NOINIT_UNSPECIFIED
#endif

#ifdef   CANTP_START_SEC_VAR_PBCFG
# undef  CANTP_START_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_VAR_PBCFG
#endif
#ifdef   CANTP_STOP_SEC_VAR_PBCFG
# undef  CANTP_STOP_SEC_VAR_PBCFG /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_VAR_PBCFG
#endif



/**********************************************************************************************************************
 *  CANTP END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  VSTDLIB START
 *********************************************************************************************************************/

#if defined(VSTDLIB_START_SEC_CODE)
# undef VSTDLIB_START_SEC_CODE                             /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE                                    /* mapped to default code section */
#endif
#if defined(VSTDLIB_STOP_SEC_CODE)
# undef VSTDLIB_STOP_SEC_CODE                              /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 *  VSTDLIB END
 *********************************************************************************************************************/


/* PRQA L:MEMMAP_0841_TAG */

#ifdef START_SEC_CONST_8
    #define START_SEC_CONST_8BIT
    #undef START_SEC_CONST_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_CONST_16
    #define START_SEC_CONST_16BIT
    #undef START_SEC_CONST_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_CONST_32
    #define START_SEC_CONST_32BIT
    #undef START_SEC_CONST_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_CONST_64
    #define START_SEC_CONST_64BIT
    #undef START_SEC_CONST_64 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_CONST_FAST_8
    #define START_SEC_CONST_FAST_8BIT
    #undef START_SEC_CONST_FAST_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_CONST_FAST_16
    #define START_SEC_CONST_FAST_16BIT
    #undef START_SEC_CONST_FAST_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_CONST_FAST_32
    #define START_SEC_CONST_FAST_32BIT
    #undef START_SEC_CONST_FAST_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_CONST_FAST_64
    #define START_SEC_CONST_FAST_64BIT
    #undef START_SEC_CONST_FAST_64 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_INIT_8
    #define START_SEC_VAR_INIT_8BIT
    #undef START_SEC_VAR_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_INIT_16
    #define START_SEC_VAR_INIT_16BIT
    #undef START_SEC_VAR_INIT_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_INIT_32
    #define START_SEC_VAR_INIT_32BIT
    #undef START_SEC_VAR_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_INIT_64
    #define START_SEC_VAR_INIT_64BIT
    #undef START_SEC_VAR_INIT_64 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NO_INIT_8
    #define START_SEC_VAR_NOINIT_8BIT
    #undef START_SEC_VAR_NO_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NO_INIT_16
    #define START_SEC_VAR_NOINIT_16BIT
    #undef START_SEC_VAR_NO_INIT_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NO_INIT_32
    #define START_SEC_VAR_NOINIT_32BIT
    #undef START_SEC_VAR_NO_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NO_INIT_64
    #define START_SEC_VAR_NOINIT_64BIT
    #undef START_SEC_VAR_NO_INIT_64 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NO_INIT_UNSPECIFIED
    #define START_SEC_VAR_NOINIT_UNSPECIFIED
    #undef START_SEC_VAR_NO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_CLEARED_8
    #define START_SEC_VAR_ZERO_INIT_8BIT
    #undef START_SEC_VAR_CLEARED_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_CLEARED_16
    #define START_SEC_VAR_ZERO_INIT_16BIT
    #undef START_SEC_VAR_CLEARED_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_CLEARED_32
    #define START_SEC_VAR_ZERO_INIT_32BIT
    #undef START_SEC_VAR_CLEARED_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_CLEARED_64
    #define START_SEC_VAR_ZERO_INIT_64BIT
    #undef START_SEC_VAR_CLEARED_64 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_CLEARED_UNSPECIFIED
    #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
    #undef START_SEC_VAR_CLEARED_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_INIT_8
    #define START_SEC_VAR_FAST_INIT_8BIT
    #undef START_SEC_VAR_FAST_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_INIT_16
    #define START_SEC_VAR_FAST_INIT_16BIT
    #undef START_SEC_VAR_FAST_INIT_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_INIT_32
    #define START_SEC_VAR_FAST_INIT_32BIT
    #undef START_SEC_VAR_FAST_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_INIT_64
    #define START_SEC_VAR_FAST_INIT_64BIT
    #undef START_SEC_VAR_FAST_INIT_64 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_NO_INIT_8
    #define START_SEC_VAR_FAST_NOINIT_8BIT
    #undef START_SEC_VAR_FAST_NO_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_NO_INIT_16
    #define START_SEC_VAR_FAST_NOINIT_16BIT
    #undef START_SEC_VAR_FAST_NO_INIT_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_NO_INIT_32
    #define START_SEC_VAR_FAST_NOINIT_32BIT
    #undef START_SEC_VAR_FAST_NO_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_NO_INIT_64
    #define START_SEC_VAR_FAST_NOINIT_64BIT
    #undef START_SEC_VAR_FAST_NO_INIT_64 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_NO_INIT_UNSPECIFIED
    #define START_SEC_VAR_FAST_NOINIT_UNSPECIFIED
    #undef START_SEC_VAR_FAST_NO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_CLEARED_8
    #define START_SEC_VAR_FAST_ZERO_INIT_8BIT
    #undef START_SEC_VAR_FAST_CLEARED_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_CLEARED_16
    #define START_SEC_VAR_FAST_ZERO_INIT_16BIT
    #undef START_SEC_VAR_FAST_CLEARED_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_CLEARED_32
    #define START_SEC_VAR_FAST_ZERO_INIT_32BIT
    #undef START_SEC_VAR_FAST_CLEARED_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_CLEARED_64
    #define START_SEC_VAR_FAST_ZERO_INIT_64BIT
    #undef START_SEC_VAR_FAST_CLEARED_64 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_FAST_CLEARED_UNSPECIFIED
    #define START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
    #undef START_SEC_VAR_FAST_CLEARED_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_INIT_8
    #define START_SEC_VAR_NOCACHE_INIT_8BIT
    #undef START_SEC_VAR_NOCACHE_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_INIT_16
    #define START_SEC_VAR_NOCACHE_INIT_16BIT
    #undef START_SEC_VAR_NOCACHE_INIT_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_INIT_32
    #define START_SEC_VAR_NOCACHE_INIT_32BIT
    #undef START_SEC_VAR_NOCACHE_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_INIT_64
    #define START_SEC_VAR_NOCACHE_INIT_64BIT
    #undef START_SEC_VAR_NOCACHE_INIT_64 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_NO_INIT_8
    #define START_SEC_VAR_NOCACHE_NOINIT_8BIT
    #undef START_SEC_VAR_NOCACHE_NO_INIT_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_NO_INIT_16
    #define START_SEC_VAR_NOCACHE_NOINIT_16BIT
    #undef START_SEC_VAR_NOCACHE_NO_INIT_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_NO_INIT_32
    #define START_SEC_VAR_NOCACHE_NOINIT_32BIT
    #undef START_SEC_VAR_NOCACHE_NO_INIT_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_NO_INIT_64
    #define START_SEC_VAR_NOCACHE_NOINIT_64BIT
    #undef START_SEC_VAR_NOCACHE_NO_INIT_64 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_NO_INIT_UNSPECIFIED
    #define START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_NO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_CLEARED_8
    #define START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
    #undef START_SEC_VAR_NOCACHE_CLEARED_8 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_CLEARED_16
    #define START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
    #undef START_SEC_VAR_NOCACHE_CLEARED_16 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_CLEARED_32
    #define START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
    #undef START_SEC_VAR_NOCACHE_CLEARED_32 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_CLEARED_64
    #define START_SEC_VAR_NOCACHE_ZERO_INIT_64BIT
    #undef START_SEC_VAR_NOCACHE_CLEARED_64 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef START_SEC_VAR_NOCACHE_CLEARED_UNSPECIFIED
    #define START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_CLEARED_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/*------------------------------GLOBAL-SECTIONS-----------------------------*/
/* Check code sections */
#if ( (defined CODE_SEC_OPEN)                            && \
     ((defined START_SEC_CODE                          ) || \
      (defined START_SEC_CODE_FAST                     ) || \
      (defined START_SEC_CODE_ISR                      )    \
      ))
    #error "MemMap.h: Close the former code segment before opening a new one."
#endif

/* Check const sections */
#if ( (defined CONST_SEC_OPEN)                           && \
     ((defined START_SEC_CONST_8BIT                    ) || \
      (defined START_SEC_CONST_16BIT                   ) || \
      (defined START_SEC_CONST_32BIT                   ) || \
      (defined START_SEC_CONST_64BIT                   ) || \
      (defined START_SEC_CONST_UNSPECIFIED             ) || \
      (defined START_SEC_CONST_FAST_8BIT               ) || \
      (defined START_SEC_CONST_FAST_16BIT              ) || \
      (defined START_SEC_CONST_FAST_32BIT              ) || \
      (defined START_SEC_CONST_FAST_64BIT              ) || \
      (defined START_SEC_CONST_FAST_UNSPECIFIED        ) || \
      (defined START_SEC_CONST_PBCFG                   ) || \
      (defined START_SEC_PBCFG_GLOBALROOT              )    \
      ))
    #error "MemMap.h: Close the former const segment before opening a new one."
#endif

/* Check data sections */
#if ( (defined VAR_SEC_OPEN)                             && \
     ((defined START_SEC_VAR_INIT_8BIT                 ) || \
      (defined START_SEC_VAR_INIT_16BIT                ) || \
      (defined START_SEC_VAR_INIT_32BIT                ) || \
      (defined START_SEC_VAR_INIT_64BIT                ) || \
      (defined START_SEC_VAR_INIT_UNSPECIFIED          ) || \
      (defined START_SEC_VAR_NOINIT_8BIT               ) || \
      (defined START_SEC_VAR_NOINIT_16BIT              ) || \
      (defined START_SEC_VAR_NOINIT_32BIT              ) || \
      (defined START_SEC_VAR_NOINIT_64BIT              ) || \
      (defined START_SEC_VAR_NOINIT_UNSPECIFIED        ) || \
      (defined START_SEC_VAR_PBCFG                     ) || \
      (defined START_SEC_VAR_ZERO_INIT_8BIT            ) || \
      (defined START_SEC_VAR_ZERO_INIT_16BIT           ) || \
      (defined START_SEC_VAR_ZERO_INIT_32BIT           ) || \
      (defined START_SEC_VAR_ZERO_INIT_64BIT           ) || \
      (defined START_SEC_VAR_ZERO_INIT_UNSPECIFIED     ) || \
      (defined START_SEC_VAR_FAST_INIT_8BIT            ) || \
      (defined START_SEC_VAR_FAST_INIT_16BIT           ) || \
      (defined START_SEC_VAR_FAST_INIT_32BIT           ) || \
      (defined START_SEC_VAR_FAST_INIT_64BIT           ) || \
      (defined START_SEC_VAR_FAST_INIT_UNSPECIFIED     ) || \
      (defined START_SEC_VAR_FAST_NOINIT_8BIT          ) || \
      (defined START_SEC_VAR_FAST_NOINIT_16BIT         ) || \
      (defined START_SEC_VAR_FAST_NOINIT_32BIT         ) || \
      (defined START_SEC_VAR_FAST_NOINIT_64BIT         ) || \
      (defined START_SEC_VAR_FAST_NOINIT_UNSPECIFIED   ) || \
      (defined START_SEC_VAR_FAST_ZERO_INIT_8BIT       ) || \
      (defined START_SEC_VAR_FAST_ZERO_INIT_16BIT      ) || \
      (defined START_SEC_VAR_FAST_ZERO_INIT_32BIT      ) || \
      (defined START_SEC_VAR_FAST_ZERO_INIT_64BIT      ) || \
      (defined START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED) || \
      (defined START_SEC_VAR_NOCACHE_INIT_8BIT         ) || \
      (defined START_SEC_VAR_NOCACHE_INIT_16BIT        ) || \
      (defined START_SEC_VAR_NOCACHE_INIT_32BIT        ) || \
      (defined START_SEC_VAR_NOCACHE_INIT_64BIT        ) || \
      (defined START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED  ) || \
      (defined START_SEC_VAR_NOCACHE_NOINIT_8BIT       ) || \
      (defined START_SEC_VAR_NOCACHE_NOINIT_16BIT      ) || \
      (defined START_SEC_VAR_NOCACHE_NOINIT_32BIT      ) || \
      (defined START_SEC_VAR_NOCACHE_NOINIT_64BIT      ) || \
      (defined START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED) || \
      (defined START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT    ) || \
      (defined START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT   ) || \
      (defined START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT   ) || \
      (defined START_SEC_VAR_NOCACHE_ZERO_INIT_64BIT   ) || \
      (defined START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED)    \
      ))
    #error "MemMap.h: Close the former variable segment before opening a new one."
#endif



/*------------------------------GLOBAL-START-SECTIONS------------------------------*/

/* Code section */
#ifdef START_SEC_CODE                          
    #define CODE_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CODE                           /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CODE_FAST                     
    #define CODE_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CODE_FAST                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CODE_ISR                      
    #define CODE_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CODE_ISR                       /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif




/* Const section */
#ifdef START_SEC_CONST_8BIT                    
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_8BIT                     /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_16BIT                   
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_16BIT                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_32BIT                   
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_32BIT                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_64BIT                   
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_64BIT                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_UNSPECIFIED             
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_UNSPECIFIED              /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_FAST_8BIT               
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_FAST_8BIT                /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_FAST_16BIT              
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_FAST_16BIT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_FAST_32BIT              
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_FAST_32BIT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_FAST_64BIT              
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_FAST_64BIT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_FAST_UNSPECIFIED        
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_FAST_UNSPECIFIED         /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_CONST_PBCFG                   
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_CONST_PBCFG                    /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_PBCFG_GLOBALROOT              
    #define CONST_SEC_OPEN
/* Enter here a #pragma command for opening the specified section */
/*    #pragma */
    #undef START_SEC_PBCFG_GLOBALROOT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif




/* Var section */
#ifdef START_SEC_VAR_INIT_8BIT                 
    #define VAR_SEC_OPEN
	#define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_8BIT
    #undef START_SEC_VAR_INIT_8BIT                  /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_INIT_8BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_8BIT
    #undef STOP_SEC_VAR_INIT_8BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_INIT_16BIT                
    #define VAR_SEC_OPEN
	#define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_16BIT
    #undef START_SEC_VAR_INIT_16BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_INIT_16BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_16BIT
    #undef STOP_SEC_VAR_INIT_16BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_INIT_32BIT                
    #define VAR_SEC_OPEN
	#define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_32BIT
    #undef START_SEC_VAR_INIT_32BIT                 /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_INIT_32BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_32BIT
    #undef STOP_SEC_VAR_INIT_32BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_INIT_UNSPECIFIED          
    #define VAR_SEC_OPEN
	#define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
    #undef START_SEC_VAR_INIT_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_INIT_UNSPECIFIED
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
    #undef STOP_SEC_VAR_INIT_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOINIT_8BIT               
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOINIT_8BIT
    #undef START_SEC_VAR_NOINIT_8BIT                /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOINIT_8BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOINIT_8BIT
    #undef STOP_SEC_VAR_NOINIT_8BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOINIT_16BIT              
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOINIT_16BIT
    #undef START_SEC_VAR_NOINIT_16BIT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOINIT_16BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOINIT_16BIT
    #undef STOP_SEC_VAR_NOINIT_16BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOINIT_32BIT              
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOINIT_32BIT
    #undef START_SEC_VAR_NOINIT_32BIT               /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOINIT_32BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOINIT_32BIT
    #undef STOP_SEC_VAR_NOINIT_32BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOINIT_UNSPECIFIED        
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOINIT_UNSPECIFIED
    #undef START_SEC_VAR_NOINIT_UNSPECIFIED         /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOINIT_UNSPECIFIED
    #undef STOP_SEC_VAR_NOINIT_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_PBCFG                     
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOINIT_UNSPECIFIED
    #undef START_SEC_VAR_PBCFG         /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_PBCFG
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOINIT_UNSPECIFIED
    #undef STOP_SEC_VAR_PBCFG                      /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_ZERO_INIT_8BIT            
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
    #undef START_SEC_VAR_ZERO_INIT_8BIT             /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_ZERO_INIT_8BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
    #undef STOP_SEC_VAR_ZERO_INIT_8BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_ZERO_INIT_16BIT           
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
    #undef START_SEC_VAR_ZERO_INIT_16BIT            /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_ZERO_INIT_16BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
    #undef STOP_SEC_VAR_ZERO_INIT_16BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_ZERO_INIT_32BIT           
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
    #undef START_SEC_VAR_ZERO_INIT_32BIT            /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_ZERO_INIT_32BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
    #undef STOP_SEC_VAR_ZERO_INIT_32BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_ZERO_INIT_UNSPECIFIED     
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
    #undef START_SEC_VAR_ZERO_INIT_UNSPECIFIED      /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
    #undef STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_INIT_8BIT            
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_FAST_8BIT
    #undef START_SEC_VAR_FAST_INIT_8BIT             /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_FAST_INIT_8BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_FAST_8BIT
    #undef STOP_SEC_VAR_FAST_INIT_8BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_INIT_16BIT           
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_FAST_16BIT
    #undef START_SEC_VAR_FAST_INIT_16BIT            /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_FAST_INIT_16BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_FAST_16BIT
    #undef STOP_SEC_VAR_FAST_INIT_16BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_INIT_32BIT           
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_FAST_32BIT
    #undef START_SEC_VAR_FAST_INIT_32BIT            /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_FAST_INIT_32BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_FAST_32BIT
    #undef STOP_SEC_VAR_FAST_INIT_32BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_INIT_UNSPECIFIED     
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_FAST_UNSPECIFIED
    #undef START_SEC_VAR_FAST_INIT_UNSPECIFIED      /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_FAST_INIT_UNSPECIFIED
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_FAST_UNSPECIFIED
    #undef STOP_SEC_VAR_FAST_INIT_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_NOINIT_8BIT          
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_FAST_NOINIT_8BIT
    #undef START_SEC_VAR_FAST_NOINIT_8BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_FAST_NOINIT_8BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_FAST_NOINIT_8BIT
    #undef STOP_SEC_VAR_FAST_NOINIT_8BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_NOINIT_16BIT         
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_FAST_NOINIT_16BIT
    #undef START_SEC_VAR_FAST_NOINIT_16BIT          /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_FAST_NOINIT_16BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_FAST_NOINIT_16BIT
    #undef STOP_SEC_VAR_FAST_NOINIT_16BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_NOINIT_32BIT         
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_FAST_NOINIT_32BIT
    #undef START_SEC_VAR_FAST_NOINIT_32BIT          /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_FAST_NOINIT_32BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_FAST_NOINIT_32BIT
    #undef STOP_SEC_VAR_FAST_NOINIT_32BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_NOINIT_UNSPECIFIED   
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_FAST_NOINIT_UNSPECIFIED
    #undef START_SEC_VAR_FAST_NOINIT_UNSPECIFIED    /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_FAST_NOINIT_UNSPECIFIED
    #undef STOP_SEC_VAR_FAST_NOINIT_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_ZERO_INIT_8BIT       
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_FAST_8BIT
    #undef START_SEC_VAR_FAST_ZERO_INIT_8BIT        /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_FAST_ZERO_INIT_8BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_FAST_8BIT
    #undef STOP_SEC_VAR_FAST_ZERO_INIT_8BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_ZERO_INIT_16BIT      
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_FAST_16BIT
    #undef START_SEC_VAR_FAST_ZERO_INIT_16BIT       /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_FAST_ZERO_INIT_16BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_FAST_16BIT
    #undef STOP_SEC_VAR_FAST_ZERO_INIT_16BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_ZERO_INIT_32BIT      
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_FAST_32BIT
    #undef START_SEC_VAR_FAST_ZERO_INIT_32BIT       /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_FAST_ZERO_INIT_32BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_FAST_32BIT
    #undef STOP_SEC_VAR_FAST_ZERO_INIT_32BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_FAST_8BIT_UNSPECIFIED
    #undef START_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_FAST_UNSPECIFIED
    #undef STOP_SEC_VAR_FAST_ZERO_INIT_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_INIT_8BIT         
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_INIT_8BIT          /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOCACHE_INIT_8BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_UNSPECIFIED
    #undef STOP_SEC_VAR_NOCACHE_INIT_8BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_INIT_16BIT        
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_INIT_16BIT         /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOCACHE_INIT_16BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_UNSPECIFIED
    #undef STOP_SEC_VAR_NOCACHE_INIT_16BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_INIT_32BIT        
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_INIT_32BIT         /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOCACHE_INIT_32BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_UNSPECIFIED
    #undef STOP_SEC_VAR_NOCACHE_INIT_32BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED  
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED   /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_UNSPECIFIED
    #undef STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_NOINIT_8BIT       
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_NOINIT_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_NOINIT_8BIT        /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOCACHE_NOINIT_8BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_NOINIT_UNSPECIFIED
    #undef STOP_SEC_VAR_NOCACHE_NOINIT_8BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_NOINIT_16BIT      
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_NOINIT_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_NOINIT_16BIT       /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOCACHE_NOINIT_16BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_NOINIT_UNSPECIFIED
    #undef STOP_SEC_VAR_NOCACHE_NOINIT_16BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_NOINIT_32BIT      
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_NOINIT_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_NOINIT_32BIT       /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOCACHE_NOINIT_32BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_NOINIT_UNSPECIFIED
    #undef STOP_SEC_VAR_NOCACHE_NOINIT_32BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_NOINIT_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_NOINIT_UNSPECIFIED
    #undef STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT    
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT     /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
    #undef STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT   
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_ZERO_INIT_16BIT    /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
    #undef STOP_SEC_VAR_NOCACHE_ZERO_INIT_16BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT   
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_ZERO_INIT_32BIT    /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
    #undef STOP_SEC_VAR_NOCACHE_ZERO_INIT_32BIT           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


#ifdef START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
    #define VAR_SEC_OPEN
    #define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
    #undef START_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
# ifdef STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
    #undef VAR_SEC_OPEN
	#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
    #undef STOP_SEC_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED           /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
#ifdef STOP_SEC_CODE
    #undef CODE_SEC_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
#ifdef STOP_SEC_CONST
    #undef CONST_SEC_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef STOP_SEC_CONST /* PRQA S 0841 */ /* MD_MSR_19.6 */
    #undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
#ifdef STOP_SEC_VAR
    #undef VAR_SEC_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
	#define OsApplication_Untrusted_Core0_STOP_SEC_VAR_NOINIT_8BIT
    #undef STOP_SEC_VAR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif
#include "Os_MemMap.h"

#ifdef MEMMAP_ERROR
    #error "MemMap.h, wrong pragma command"
#endif
/**********************************************************************************************************************
 *  END OF FILE: MemMap.h
 *********************************************************************************************************************/
