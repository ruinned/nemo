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
 *              File: Com_Cfg.h
 *   Generation Time: 2018-12-05 19:46:52
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


#if !defined (COM_CFG_H)
# define COM_CFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_CSL_0779 */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
# include "Com_Types.h"
# include "Com_PBcfg.h"
# include "Com_Cbk.h"
# include "PduR_Cfg.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

#ifndef COM_USE_DUMMY_FUNCTIONS
#define COM_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef COM_USE_DUMMY_STATEMENT
#define COM_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef COM_DUMMY_STATEMENT
#define COM_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef COM_DUMMY_STATEMENT_CONST
#define COM_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef COM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define COM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef COM_ATOMIC_VARIABLE_ACCESS
#define COM_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef COM_PROCESSOR_MPC5746C
#define COM_PROCESSOR_MPC5746C
#endif
#ifndef COM_COMP_DIAB
#define COM_COMP_DIAB
#endif
#ifndef COM_GEN_GENERATOR_MSR
#define COM_GEN_GENERATOR_MSR
#endif
#ifndef COM_CPUTYPE_BITORDER_MSB2LSB
#define COM_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef COM_CONFIGURATION_VARIANT_PRECOMPILE
#define COM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef COM_CONFIGURATION_VARIANT_LINKTIME
#define COM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef COM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define COM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef COM_CONFIGURATION_VARIANT
#define COM_CONFIGURATION_VARIANT COM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef COM_POSTBUILD_VARIANT_SUPPORT
#define COM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  ComPCDataSwitches  Com Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define COM_ACTIVATABLERXCOMIPDUS                                     STD_ON
#define COM_RXPDUINFOIDXOFACTIVATABLERXCOMIPDUS                       STD_ON
#define COM_ACTIVATABLETXCOMIPDUS                                     STD_ON
#define COM_TXPDUINFOIDXOFACTIVATABLETXCOMIPDUS                       STD_ON
#define COM_ALWAYSACTIVERXCOMIPDUS                                    STD_OFF  /**< Deactivateable: 'Com_AlwaysActiveRxComIPdus' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXPDUINFOIDXOFALWAYSACTIVERXCOMIPDUS                      STD_OFF  /**< Deactivateable: 'Com_AlwaysActiveRxComIPdus.RxPduInfoIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_ALWAYSACTIVETXCOMIPDUS                                    STD_OFF  /**< Deactivateable: 'Com_AlwaysActiveTxComIPdus' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXPDUINFOIDXOFALWAYSACTIVETXCOMIPDUS                      STD_OFF  /**< Deactivateable: 'Com_AlwaysActiveTxComIPdus.TxPduInfoIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKRXTOUTFUNCPTR                                          STD_ON
#define COM_CBKRXTOUTFUNCPTRIND                                       STD_ON
#define COM_CBKTXACKDEFFUNCPTR                                        STD_OFF  /**< Deactivateable: 'Com_CbkTxAckDefFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXACKDEFFUNCPTRIND                                     STD_OFF  /**< Deactivateable: 'Com_CbkTxAckDefFuncPtrInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXACKIMFUNCPTR                                         STD_OFF  /**< Deactivateable: 'Com_CbkTxAckImFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXACKIMFUNCPTRIND                                      STD_OFF  /**< Deactivateable: 'Com_CbkTxAckImFuncPtrInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXERRFUNCPTR                                           STD_OFF  /**< Deactivateable: 'Com_CbkTxErrFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXERRFUNCPTRIND                                        STD_OFF  /**< Deactivateable: 'Com_CbkTxErrFuncPtrInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXTOUTFUNCPTR                                          STD_ON
#define COM_CBKTXTOUTFUNCPTRIND                                       STD_ON
#define COM_CONFIGID                                                  STD_ON
#define COM_CONSTVALUEARRAYBASED                                      STD_ON
#define COM_CONSTVALUEFLOAT32                                         STD_OFF  /**< Deactivateable: 'Com_ConstValueFloat32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUEFLOAT64                                         STD_OFF  /**< Deactivateable: 'Com_ConstValueFloat64' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUESINT16                                          STD_ON
#define COM_CONSTVALUESINT32                                          STD_OFF  /**< Deactivateable: 'Com_ConstValueSInt32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUESINT64                                          STD_OFF  /**< Deactivateable: 'Com_ConstValueSInt64' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUESINT8                                           STD_OFF  /**< Deactivateable: 'Com_ConstValueSInt8' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUESIGGRPARRAYACCESS                               STD_OFF  /**< Deactivateable: 'Com_ConstValueSigGrpArrayAccess' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUEUINT16                                          STD_ON
#define COM_CONSTVALUEUINT32                                          STD_ON
#define COM_CONSTVALUEUINT64                                          STD_OFF  /**< Deactivateable: 'Com_ConstValueUInt64' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUEUINT8                                           STD_ON
#define COM_CURRENTTXMODE                                             STD_ON
#define COM_CYCLETIMECNT                                              STD_ON
#define COM_CYCLICSENDREQUEST                                         STD_ON
#define COM_DEFERREDGWMAPPINGEVENT                                    STD_OFF  /**< Deactivateable: 'Com_DeferredGwMappingEvent' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionRoutingCodeGeneration] is configured to 'false'' */
#define COM_DEFERREDGWMAPPINGINFO                                     STD_OFF  /**< Deactivateable: 'Com_DeferredGwMappingInfo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionRoutingCodeGeneration] is configured to 'false'' */
#define COM_RXPDUINFOIDXOFDEFERREDGWMAPPINGINFO                       STD_OFF  /**< Deactivateable: 'Com_DeferredGwMappingInfo.RxPduInfoIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionRoutingCodeGeneration] is configured to 'false'' */
#define COM_DELAYTIMECNT                                              STD_ON
#define COM_DIRECTTRIGGER                                             STD_OFF  /**< Deactivateable: 'Com_DirectTrigger' Reason: 'the parameter is only needed if ComEnableMDTForCyclicTransmission is equals FALSE.' */
#define COM_FILTERINFO_FLOAT32                                        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_FLOAT32                            STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_FLOAT32                            STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_FLOAT32                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_FLOAT32                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_FLOAT32                               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_FLOAT64                                        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_FLOAT64                            STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_FLOAT64                            STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_FLOAT64                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_FLOAT64                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_FLOAT64                               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_SINT16                                         STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_SINT16                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_SINT16                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_SINT16                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_SINT16                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_SINT16                                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_SINT32                                         STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_SINT32                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_SINT32                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_SINT32                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_SINT32                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_SINT32                                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_SINT64                                         STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_SINT64                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_SINT64                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_SINT64                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_SINT64                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_SINT64                                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_SINT8                                          STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_SINT8                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_SINT8                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_SINT8                               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_SINT8                               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_SINT8                                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_UINT16                                         STD_ON
#define COM_FILTERALGOOFFILTERINFO_UINT16                             STD_ON
#define COM_FILTERMASKOFFILTERINFO_UINT16                             STD_ON
#define COM_FILTERMAXOFFILTERINFO_UINT16                              STD_ON
#define COM_FILTERMINOFFILTERINFO_UINT16                              STD_ON
#define COM_FILTERXOFFILTERINFO_UINT16                                STD_ON
#define COM_FILTERINFO_UINT32                                         STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_UINT32                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_UINT32                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_UINT32                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_UINT32                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_UINT32                                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_UINT64                                         STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_UINT64                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_UINT64                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_UINT64                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_UINT64                              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_UINT64                                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERINFO_UINT8                                          STD_ON
#define COM_FILTERALGOOFFILTERINFO_UINT8                              STD_ON
#define COM_FILTERMASKOFFILTERINFO_UINT8                              STD_ON
#define COM_FILTERMAXOFFILTERINFO_UINT8                               STD_ON
#define COM_FILTERMINOFFILTERINFO_UINT8                               STD_ON
#define COM_FILTERXOFFILTERINFO_UINT8                                 STD_ON
#define COM_FILTERINFO_UINT8_N                                        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO_UINT8_N                            STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMASKOFFILTERINFO_UINT8_N                            STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMAXOFFILTERINFO_UINT8_N                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterMax' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERMINOFFILTERINFO_UINT8_N                             STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterMin' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FILTERXOFFILTERINFO_UINT8_N                               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterX' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_FINALMAGICNUMBER                                          STD_OFF  /**< Deactivateable: 'Com_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define COM_GATEWAYDESCRIPTIONPROCESSINGISRLOCKCOUNTER                STD_ON
#define COM_GATEWAYDESCRIPTIONPROCESSINGISRLOCKTHRESHOLD              STD_OFF  /**< Deactivateable: 'Com_GatewayDescriptionProcessingISRLockThreshold' Reason: 'No Deferred Description Routings exist' */
#define COM_GATEWAYPROCESSINGISRLOCKCOUNTER                           STD_ON
#define COM_GATEWAYPROCESSINGISRLOCKTHRESHOLD                         STD_ON
#define COM_GWDESCRIPTIONACCESSINFO                                   STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_BITOFFSETOFGWDESCRIPTIONACCESSINFO                        STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.BitOffset' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_BITSIZEOFGWDESCRIPTIONACCESSINFO                          STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.BitSize' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_COPYTYPEOFGWDESCRIPTIONACCESSINFO                         STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.CopyType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_ENDIANNESSOFGWDESCRIPTIONACCESSINFO                       STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Endianness' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_GWSOURCESTARTBITINDEXOFGWDESCRIPTIONACCESSINFO            STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.GwSourceStartBitIndex' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXUBIDXOFGWDESCRIPTIONACCESSINFO                          STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.RxUbIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXUBMASKIDXOFGWDESCRIPTIONACCESSINFO                      STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.RxUbMaskIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXUBMASKUSEDOFGWDESCRIPTIONACCESSINFO                     STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.RxUbMaskUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_SOURCEDESCRIPTIONMASKENDMASKIDXOFGWDESCRIPTIONACCESSINFO  STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.SourceDescriptionMaskEndMaskIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_SOURCEDESCRIPTIONMASKENDMASKUSEDOFGWDESCRIPTIONACCESSINFO STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.SourceDescriptionMaskEndMaskUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_SOURCEDESCRIPTIONMASKIDXOFGWDESCRIPTIONACCESSINFO         STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.SourceDescriptionMaskIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_SOURCESTARTBYTEPOSITIONOFGWDESCRIPTIONACCESSINFO          STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.SourceStartBytePosition' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXBUFFERENDIDXOFGWDESCRIPTIONACCESSINFO                   STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxBufferEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXBUFFERLENGTHOFGWDESCRIPTIONACCESSINFO                   STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxBufferLength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXBUFFERSTARTIDXOFGWDESCRIPTIONACCESSINFO                 STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxBufferStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXBUFFERUBIDXOFGWDESCRIPTIONACCESSINFO                    STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxBufferUbIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXBUFFERUBUSEDOFGWDESCRIPTIONACCESSINFO                   STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxBufferUbUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXPDUINFOIDXOFGWDESCRIPTIONACCESSINFO                     STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxPduInfoIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXUBMASKIDXOFGWDESCRIPTIONACCESSINFO                      STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxUbMaskIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXUBMASKUSEDOFGWDESCRIPTIONACCESSINFO                     STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.TxUbMaskUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TYPEOFGWDESCRIPTIONACCESSINFO                             STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_VALIDDLCOFGWDESCRIPTIONACCESSINFO                         STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.ValidDlc' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_GWEVENT                                                   STD_ON
#define COM_GWEVENTCACHE                                              STD_OFF  /**< Deactivateable: 'Com_GwEventCache' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_GWEVENTCACHEINDEX                                         STD_ON
#define COM_GWGRPSIGMAPPING                                           STD_ON
#define COM_RXACCESSINFOIDXOFGWGRPSIGMAPPING                          STD_ON
#define COM_TXSIGIDOFGWGRPSIGMAPPING                                  STD_ON
#define COM_GWINFO                                                    STD_ON
#define COM_GWSIGGRPMAPPINGENDIDXOFGWINFO                             STD_ON
#define COM_GWSIGGRPMAPPINGSTARTIDXOFGWINFO                           STD_ON
#define COM_GWSIGGRPMAPPINGUSEDOFGWINFO                               STD_ON
#define COM_GWSIGMAPPINGENDIDXOFGWINFO                                STD_ON
#define COM_GWSIGMAPPINGSTARTIDXOFGWINFO                              STD_ON
#define COM_GWSIGMAPPINGUSEDOFGWINFO                                  STD_ON
#define COM_GWROUTINGTIMEOUTCOUNTER                                   STD_OFF  /**< Deactivateable: 'Com_GwRoutingTimeoutCounter' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_GWSIGGRPMAPPING                                           STD_ON
#define COM_GWGRPSIGMAPPINGENDIDXOFGWSIGGRPMAPPING                    STD_ON
#define COM_GWGRPSIGMAPPINGSTARTIDXOFGWSIGGRPMAPPING                  STD_ON
#define COM_TXSIGGRPIDOFGWSIGGRPMAPPING                               STD_ON
#define COM_GWSIGMAPPING                                              STD_ON
#define COM_RXACCESSINFOIDXOFGWSIGMAPPING                             STD_ON
#define COM_TXSIGIDOFGWSIGMAPPING                                     STD_ON
#define COM_GWTIMEOUTINFO                                             STD_OFF  /**< Deactivateable: 'Com_GwTimeoutInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_GWROUTINGTIMEOUTFACTOROFGWTIMEOUTINFO                     STD_OFF  /**< Deactivateable: 'Com_GwTimeoutInfo.GwRoutingTimeoutFactor' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXPDUINFOIDXOFGWTIMEOUTINFO                               STD_OFF  /**< Deactivateable: 'Com_GwTimeoutInfo.TxPduInfoIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_GWTXPDUDESCRIPTIONINFO                                    STD_OFF  /**< Deactivateable: 'Com_GwTxPduDescriptionInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_GWDESCRIPTIONACCESSINFOENDIDXOFGWTXPDUDESCRIPTIONINFO     STD_OFF  /**< Deactivateable: 'Com_GwTxPduDescriptionInfo.GwDescriptionAccessInfoEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_GWDESCRIPTIONACCESSINFOSTARTIDXOFGWTXPDUDESCRIPTIONINFO   STD_OFF  /**< Deactivateable: 'Com_GwTxPduDescriptionInfo.GwDescriptionAccessInfoStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_HANDLERXDEFERREDGWDESCRIPTION                             STD_OFF  /**< Deactivateable: 'Com_HandleRxDeferredGwDescription' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_HANDLERXPDUDEFERRED                                       STD_ON
#define COM_HANDLETXPDUDEFERRED                                       STD_ON
#define COM_IPDUGROUPINFO                                             STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOTOSUBIPDUGROUPSINDENDIDXOFIPDUGROUPINFO      STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.IPduGroupInfoToSubIPduGroupsIndEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOTOSUBIPDUGROUPSINDSTARTIDXOFIPDUGROUPINFO    STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.IPduGroupInfoToSubIPduGroupsIndStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOTOSUBIPDUGROUPSINDUSEDOFIPDUGROUPINFO        STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.IPduGroupInfoToSubIPduGroupsIndUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_INVALIDHNDOFIPDUGROUPINFO                                 STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.InvalidHnd' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_RXPDUINFOINDENDIDXOFIPDUGROUPINFO                         STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.RxPduInfoIndEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_RXPDUINFOINDSTARTIDXOFIPDUGROUPINFO                       STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.RxPduInfoIndStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_RXPDUINFOINDUSEDOFIPDUGROUPINFO                           STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.RxPduInfoIndUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_TXPDUINFOINDENDIDXOFIPDUGROUPINFO                         STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.TxPduInfoIndEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_TXPDUINFOINDSTARTIDXOFIPDUGROUPINFO                       STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.TxPduInfoIndStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_TXPDUINFOINDUSEDOFIPDUGROUPINFO                           STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.TxPduInfoIndUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOOFRXPDUINFOIND                               STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfoOfRxPduInfoInd' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOOFTXPDUINFOIND                               STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfoOfTxPduInfoInd' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOTOSUBIPDUGROUPSIND                           STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfoToSubIPduGroupsInd' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPSTATE                                            STD_OFF  /**< Deactivateable: 'Com_IPduGroupState' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_INITDATAHASHCODE                                          STD_OFF  /**< Deactivateable: 'Com_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define COM_INITIALIZED                                               STD_ON
#define COM_PDUGRPCNT                                                 STD_ON
#define COM_PDUGRPVECTOR                                              STD_ON
#define COM_REPCNT                                                    STD_ON
#define COM_REPCYCLECNT                                               STD_ON
#define COM_RXACCESSINFO                                              STD_ON
#define COM_APPLTYPEOFRXACCESSINFO                                    STD_ON
#define COM_BITLENGTHOFRXACCESSINFO                                   STD_ON
#define COM_BITPOSITIONOFRXACCESSINFO                                 STD_ON
#define COM_BUFFERIDXOFRXACCESSINFO                                   STD_ON
#define COM_BUFFERUSEDOFRXACCESSINFO                                  STD_ON
#define COM_BUSACCOFRXACCESSINFO                                      STD_ON
#define COM_BYTELENGTHOFRXACCESSINFO                                  STD_ON
#define COM_BYTEPOSITIONOFRXACCESSINFO                                STD_ON
#define COM_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO         STD_ON
#define COM_CONSTVALUEARRAYBASEDINITVALUELENGTHOFRXACCESSINFO         STD_ON
#define COM_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO       STD_ON
#define COM_CONSTVALUEARRAYBASEDINITVALUEUSEDOFRXACCESSINFO           STD_ON
#define COM_CONSTVALUEARRAYBASEDINVVALUEENDIDXOFRXACCESSINFO          STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedInvValueEndIdx' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDINVVALUELENGTHOFRXACCESSINFO          STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedInvValueLength' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDINVVALUESTARTIDXOFRXACCESSINFO        STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedInvValueStartIdx' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDINVVALUEUSEDOFRXACCESSINFO            STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedInvValueUsed' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDRXDATATIMEOUTSUBSTITUTIONVALUEENDIDXOFRXACCESSINFO STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedRxDataTimeoutSubstitutionValueEndIdx' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDRXDATATIMEOUTSUBSTITUTIONVALUELENGTHOFRXACCESSINFO STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedRxDataTimeoutSubstitutionValueLength' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDRXDATATIMEOUTSUBSTITUTIONVALUESTARTIDXOFRXACCESSINFO STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedRxDataTimeoutSubstitutionValueStartIdx' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDRXDATATIMEOUTSUBSTITUTIONVALUEUSEDOFRXACCESSINFO STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ConstValueArrayBasedRxDataTimeoutSubstitutionValueUsed' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINFOIDXOFRXACCESSINFO                               STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.FilterInfoIdx' Reason: 'the optional indirection is deactivated because FilterInfoUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINFOUSEDOFRXACCESSINFO                              STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.FilterInfoUsed' Reason: 'the optional indirection is deactivated because FilterInfoUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_GWINFOIDXOFRXACCESSINFO                                   STD_ON
#define COM_GWINFOUSEDOFRXACCESSINFO                                  STD_ON
#define COM_INITVALUEIDXOFRXACCESSINFO                                STD_ON
#define COM_INITVALUEUSEDOFRXACCESSINFO                               STD_ON
#define COM_INVVALUEIDXOFRXACCESSINFO                                 STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.InvValueIdx' Reason: 'the optional indirection is deactivated because InvValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVVALUEUSEDOFRXACCESSINFO                                STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.InvValueUsed' Reason: 'the optional indirection is deactivated because InvValueUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVALIDHNDOFRXACCESSINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfRxAccessInfo is always 'false' due to this, the array is deactivated.' */
#define COM_ISGROUPSIGNALOFRXACCESSINFO                               STD_ON
#define COM_ROUTINGBUFFERIDXOFRXACCESSINFO                            STD_ON
#define COM_ROUTINGBUFFERUSEDOFRXACCESSINFO                           STD_ON
#define COM_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO           STD_ON
#define COM_RXDATATIMEOUTSUBSTITUTIONVALUEUSEDOFRXACCESSINFO          STD_ON
#define COM_RXPDUINFOIDXOFRXACCESSINFO                                STD_ON
#define COM_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO           STD_ON
#define COM_RXSIGBUFFERARRAYBASEDBUFFERLENGTHOFRXACCESSINFO           STD_ON
#define COM_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO         STD_ON
#define COM_RXSIGBUFFERARRAYBASEDBUFFERUSEDOFRXACCESSINFO             STD_ON
#define COM_RXSIGBUFFERARRAYBASEDROUTINGBUFFERENDIDXOFRXACCESSINFO    STD_ON
#define COM_RXSIGBUFFERARRAYBASEDROUTINGBUFFERLENGTHOFRXACCESSINFO    STD_ON
#define COM_RXSIGBUFFERARRAYBASEDROUTINGBUFFERSTARTIDXOFRXACCESSINFO  STD_ON
#define COM_RXSIGBUFFERARRAYBASEDROUTINGBUFFERUSEDOFRXACCESSINFO      STD_ON
#define COM_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO        STD_ON
#define COM_RXSIGBUFFERARRAYBASEDSHDBUFFERLENGTHOFRXACCESSINFO        STD_ON
#define COM_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO      STD_ON
#define COM_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO          STD_ON
#define COM_RXTOUTINFOIDXOFRXACCESSINFO                               STD_ON
#define COM_RXTOUTINFOUSEDOFRXACCESSINFO                              STD_ON
#define COM_SHDBUFFERIDXOFRXACCESSINFO                                STD_ON
#define COM_SHDBUFFERUSEDOFRXACCESSINFO                               STD_ON
#define COM_SIGNEXTREQUIREDOFRXACCESSINFO                             STD_ON
#define COM_STARTBYTEINPDUPOSITIONOFRXACCESSINFO                      STD_ON
#define COM_TMPBUFFERIDXOFRXACCESSINFO                                STD_ON
#define COM_TMPBUFFERUSEDOFRXACCESSINFO                               STD_ON
#define COM_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO     STD_ON
#define COM_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERLENGTHOFRXACCESSINFO     STD_ON
#define COM_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO   STD_ON
#define COM_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERUSEDOFRXACCESSINFO       STD_ON
#define COM_RXACCESSINFOGRPSIGIND                                     STD_ON
#define COM_RXACCESSINFOIND                                           STD_ON
#define COM_RXACCESSINFOREPLACEGRPSIGIND                              STD_OFF  /**< Deactivateable: 'Com_RxAccessInfoReplaceGrpSigInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXACCESSINFOREPLACESIGIND                                 STD_OFF  /**< Deactivateable: 'Com_RxAccessInfoReplaceSigInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXCBKFUNCPTR                                              STD_ON
#define COM_RXDEADLINEMONITORINGISRLOCKCOUNTER                        STD_ON
#define COM_RXDEADLINEMONITORINGISRLOCKTHRESHOLD                      STD_ON
#define COM_RXDEFPDUBUFFER                                            STD_ON
#define COM_RXDEFERREDEVENTCACHE                                      STD_OFF  /**< Deactivateable: 'Com_RxDeferredEventCache' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDeferredEventCacheSupport] is configured to 'false'' */
#define COM_RXDEFERREDFCTPTRCACHE                                     STD_ON
#define COM_RXDEFERREDPROCESSINGISRLOCKCOUNTER                        STD_ON
#define COM_RXDEFERREDPROCESSINGISRLOCKTHRESHOLD                      STD_ON
#define COM_RXDLMONDIVISOR                                            STD_OFF  /**< Deactivateable: 'Com_RxDlMonDivisor' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_RXDLMONDIVISORCOUNTER                                     STD_OFF  /**< Deactivateable: 'Com_RxDlMonDivisorCounter' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_RXDYNSIGNALLENGTH                                         STD_ON
#define COM_RXDYNSIGNALTMPLENGTHFORSIGNALGROUPS                       STD_ON
#define COM_RXIPDUGROUPISRLOCKCOUNTER                                 STD_ON
#define COM_RXIPDUGROUPISRLOCKTHRESHOLD                               STD_ON
#define COM_RXNEXTEVENTCACHEENTY                                      STD_OFF  /**< Deactivateable: 'Com_RxNextEventCacheEnty' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDeferredEventCacheSupport] is configured to 'false'' */
#define COM_RXPDUCALLOUTFUNCPTR                                       STD_OFF  /**< Deactivateable: 'Com_RxPduCalloutFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXPDUDMSTATE                                              STD_ON
#define COM_RXPDUGRPACTIVE                                            STD_ON
#define COM_RXPDUGRPINFO                                              STD_ON
#define COM_PDUGRPVECTORENDIDXOFRXPDUGRPINFO                          STD_ON
#define COM_PDUGRPVECTORSTARTIDXOFRXPDUGRPINFO                        STD_ON
#define COM_PDUGRPVECTORUSEDOFRXPDUGRPINFO                            STD_ON
#define COM_RXPDUINFO                                                 STD_ON
#define COM_DEFERREDGWMAPPINGINFOIDXOFRXPDUINFO                       STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.DeferredGwMappingInfoIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionRoutingCodeGeneration] is configured to 'false'' */
#define COM_DEFERREDGWMAPPINGINFOUSEDOFRXPDUINFO                      STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.DeferredGwMappingInfoUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDescriptionRoutingCodeGeneration] is configured to 'false'' */
#define COM_GWINFOENDIDXOFRXPDUINFO                                   STD_ON
#define COM_GWINFOSTARTIDXOFRXPDUINFO                                 STD_ON
#define COM_GWINFOUSEDOFRXPDUINFO                                     STD_ON
#define COM_GWTXPDUDESCRIPTIONINFOENDIDXOFRXPDUINFO                   STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.GwTxPduDescriptionInfoEndIdx' Reason: 'the optional indirection is deactivated because GwTxPduDescriptionInfoUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_GWTXPDUDESCRIPTIONINFOSTARTIDXOFRXPDUINFO                 STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.GwTxPduDescriptionInfoStartIdx' Reason: 'the optional indirection is deactivated because GwTxPduDescriptionInfoUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_GWTXPDUDESCRIPTIONINFOUSEDOFRXPDUINFO                     STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.GwTxPduDescriptionInfoUsed' Reason: 'the optional indirection is deactivated because GwTxPduDescriptionInfoUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_HANDLERXDEFERREDGWDESCRIPTIONIDXOFRXPDUINFO               STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.HandleRxDeferredGwDescriptionIdx' Reason: 'the optional indirection is deactivated because HandleRxDeferredGwDescriptionUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_HANDLERXDEFERREDGWDESCRIPTIONUSEDOFRXPDUINFO              STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.HandleRxDeferredGwDescriptionUsed' Reason: 'the optional indirection is deactivated because HandleRxDeferredGwDescriptionUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_HANDLERXPDUDEFERREDIDXOFRXPDUINFO                         STD_ON
#define COM_HANDLERXPDUDEFERREDUSEDOFRXPDUINFO                        STD_ON
#define COM_IPDUGROUPINFOOFRXPDUINFOINDENDIDXOFRXPDUINFO              STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.IPduGroupInfoOfRxPduInfoIndEndIdx' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfRxPduInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_IPDUGROUPINFOOFRXPDUINFOINDSTARTIDXOFRXPDUINFO            STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.IPduGroupInfoOfRxPduInfoIndStartIdx' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfRxPduInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_IPDUGROUPINFOOFRXPDUINFOINDUSEDOFRXPDUINFO                STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.IPduGroupInfoOfRxPduInfoIndUsed' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfRxPduInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVALIDHNDOFRXPDUINFO                                     STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfRxPduInfo is always 'false' due to this, the array is deactivated.' */
#define COM_RXACCESSINFOINDENDIDXOFRXPDUINFO                          STD_ON
#define COM_RXACCESSINFOINDSTARTIDXOFRXPDUINFO                        STD_ON
#define COM_RXACCESSINFOINDUSEDOFRXPDUINFO                            STD_ON
#define COM_RXDEFPDUBUFFERENDIDXOFRXPDUINFO                           STD_ON
#define COM_RXDEFPDUBUFFERLENGTHOFRXPDUINFO                           STD_ON
#define COM_RXDEFPDUBUFFERSTARTIDXOFRXPDUINFO                         STD_ON
#define COM_RXDEFPDUBUFFERUSEDOFRXPDUINFO                             STD_ON
#define COM_RXPDUCALLOUTFUNCPTRIDXOFRXPDUINFO                         STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxPduCalloutFuncPtrIdx' Reason: 'the optional indirection is deactivated because RxPduCalloutFuncPtrUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXPDUCALLOUTFUNCPTRUSEDOFRXPDUINFO                        STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxPduCalloutFuncPtrUsed' Reason: 'the optional indirection is deactivated because RxPduCalloutFuncPtrUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGGRPINFOINDENDIDXOFRXPDUINFO                          STD_ON
#define COM_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO                        STD_ON
#define COM_RXSIGGRPINFOINDUSEDOFRXPDUINFO                            STD_ON
#define COM_RXSIGINFOENDIDXOFRXPDUINFO                                STD_ON
#define COM_RXSIGINFOSTARTIDXOFRXPDUINFO                              STD_ON
#define COM_RXSIGINFOUSEDOFRXPDUINFO                                  STD_ON
#define COM_RXTOUTINFOIDXOFRXPDUINFO                                  STD_ON
#define COM_RXTOUTINFOINDENDIDXOFRXPDUINFO                            STD_ON
#define COM_RXTOUTINFOINDSTARTIDXOFRXPDUINFO                          STD_ON
#define COM_RXTOUTINFOINDUSEDOFRXPDUINFO                              STD_ON
#define COM_RXTOUTINFOUSEDOFRXPDUINFO                                 STD_ON
#define COM_RXTPINFOIDXOFRXPDUINFO                                    STD_ON
#define COM_RXTPINFOUSEDOFRXPDUINFO                                   STD_ON
#define COM_SIGNALPROCESSINGOFRXPDUINFO                               STD_ON
#define COM_TYPEOFRXPDUINFO                                           STD_ON
#define COM_RXPDUINFOIND                                              STD_OFF  /**< Deactivateable: 'Com_RxPduInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGARRAYACCESSSIGGRPBUFFER                              STD_OFF  /**< Deactivateable: 'Com_RxSigArrayAccessSigGrpBuffer' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERARRAYBASED                                     STD_ON
#define COM_RXSIGBUFFERFLOAT32                                        STD_OFF  /**< Deactivateable: 'Com_RxSigBufferFloat32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERFLOAT64                                        STD_OFF  /**< Deactivateable: 'Com_RxSigBufferFloat64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERSINT16                                         STD_ON
#define COM_RXSIGBUFFERSINT32                                         STD_OFF  /**< Deactivateable: 'Com_RxSigBufferSInt32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERSINT64                                         STD_OFF  /**< Deactivateable: 'Com_RxSigBufferSInt64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERSINT8                                          STD_OFF  /**< Deactivateable: 'Com_RxSigBufferSInt8' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERUINT16                                         STD_ON
#define COM_RXSIGBUFFERUINT32                                         STD_ON
#define COM_RXSIGBUFFERUINT64                                         STD_OFF  /**< Deactivateable: 'Com_RxSigBufferUInt64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERUINT8                                          STD_ON
#define COM_RXSIGBUFFERZEROBIT                                        STD_OFF  /**< Deactivateable: 'Com_RxSigBufferZeroBit' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGGRPINFO                                              STD_ON
#define COM_ARRAYACCESSUSEDOFRXSIGGRPINFO                             STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ArrayAccessUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUESIGGRPARRAYACCESSENDIDXOFRXSIGGRPINFO           STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueSigGrpArrayAccessEndIdx' Reason: 'the optional indirection is deactivated because ConstValueSigGrpArrayAccessUsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUESIGGRPARRAYACCESSLENGTHOFRXSIGGRPINFO           STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueSigGrpArrayAccessLength' Reason: 'the optional indirection is deactivated because ConstValueSigGrpArrayAccessUsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUESIGGRPARRAYACCESSSTARTIDXOFRXSIGGRPINFO         STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueSigGrpArrayAccessStartIdx' Reason: 'the optional indirection is deactivated because ConstValueSigGrpArrayAccessUsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUESIGGRPARRAYACCESSUSEDOFRXSIGGRPINFO             STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueSigGrpArrayAccessUsed' Reason: 'the optional indirection is deactivated because ConstValueSigGrpArrayAccessUsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEUINT8ENDIDXOFRXSIGGRPINFO                       STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueUInt8EndIdx' Reason: 'the optional indirection is deactivated because ConstValueUInt8UsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEUINT8LENGTHOFRXSIGGRPINFO                       STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueUInt8Length' Reason: 'the optional indirection is deactivated because ConstValueUInt8UsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEUINT8STARTIDXOFRXSIGGRPINFO                     STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueUInt8StartIdx' Reason: 'the optional indirection is deactivated because ConstValueUInt8UsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEUINT8USEDOFRXSIGGRPINFO                         STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueUInt8Used' Reason: 'the optional indirection is deactivated because ConstValueUInt8UsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTEREVENTOFRXSIGGRPINFO                                 STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.FilterEvent' Reason: 'the value of Com_FilterEventOfRxSigGrpInfo is always 'false' due to this, the array is deactivated.' */
#define COM_GWINFOIDXOFRXSIGGRPINFO                                   STD_ON
#define COM_GWINFOUSEDOFRXSIGGRPINFO                                  STD_ON
#define COM_INVEVENTOFRXSIGGRPINFO                                    STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.InvEvent' Reason: 'the value of Com_InvEventOfRxSigGrpInfo is always 'false' due to this, the array is deactivated.' */
#define COM_INVALIDHNDOFRXSIGGRPINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfRxSigGrpInfo is always 'false' due to this, the array is deactivated.' */
#define COM_RXACCESSINFOGRPSIGINDENDIDXOFRXSIGGRPINFO                 STD_ON
#define COM_RXACCESSINFOGRPSIGINDSTARTIDXOFRXSIGGRPINFO               STD_ON
#define COM_RXACCESSINFOGRPSIGINDUSEDOFRXSIGGRPINFO                   STD_ON
#define COM_RXCBKFUNCPTRACKIDXOFRXSIGGRPINFO                          STD_ON
#define COM_RXCBKFUNCPTRACKUSEDOFRXSIGGRPINFO                         STD_ON
#define COM_RXCBKFUNCPTRINVACKIDXOFRXSIGGRPINFO                       STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxCbkFuncPtrInvAckIdx' Reason: 'the optional indirection is deactivated because RxCbkFuncPtrInvAckUsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXCBKFUNCPTRINVACKUSEDOFRXSIGGRPINFO                      STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxCbkFuncPtrInvAckUsed' Reason: 'the optional indirection is deactivated because RxCbkFuncPtrInvAckUsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXPDUINFOIDXOFRXSIGGRPINFO                                STD_ON
#define COM_RXSIGARRAYACCESSSIGGRPBUFFERENDIDXOFRXSIGGRPINFO          STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigArrayAccessSigGrpBufferEndIdx' Reason: 'the optional indirection is deactivated because RxSigArrayAccessSigGrpBufferUsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGARRAYACCESSSIGGRPBUFFERLENGTHOFRXSIGGRPINFO          STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigArrayAccessSigGrpBufferLength' Reason: 'the optional indirection is deactivated because RxSigArrayAccessSigGrpBufferUsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGARRAYACCESSSIGGRPBUFFERSTARTIDXOFRXSIGGRPINFO        STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigArrayAccessSigGrpBufferStartIdx' Reason: 'the optional indirection is deactivated because RxSigArrayAccessSigGrpBufferUsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGARRAYACCESSSIGGRPBUFFERUSEDOFRXSIGGRPINFO            STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigArrayAccessSigGrpBufferUsed' Reason: 'the optional indirection is deactivated because RxSigArrayAccessSigGrpBufferUsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGBUFFERUINT8ENDIDXOFRXSIGGRPINFO                      STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigBufferUInt8EndIdx' Reason: 'the optional indirection is deactivated because RxSigBufferUInt8UsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGBUFFERUINT8LENGTHOFRXSIGGRPINFO                      STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigBufferUInt8Length' Reason: 'the optional indirection is deactivated because RxSigBufferUInt8UsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGBUFFERUINT8STARTIDXOFRXSIGGRPINFO                    STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigBufferUInt8StartIdx' Reason: 'the optional indirection is deactivated because RxSigBufferUInt8UsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGBUFFERUINT8USEDOFRXSIGGRPINFO                        STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxSigBufferUInt8Used' Reason: 'the optional indirection is deactivated because RxSigBufferUInt8UsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOIDXOFRXSIGGRPINFO                               STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxTOutInfoIdx' Reason: 'the optional indirection is deactivated because RxTOutInfoUsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOUSEDOFRXSIGGRPINFO                              STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxTOutInfoUsed' Reason: 'the optional indirection is deactivated because RxTOutInfoUsedOfRxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_SHDBUFFERREQUIREDOFRXSIGGRPINFO                           STD_ON
#define COM_SIGNALPROCESSINGOFRXSIGGRPINFO                            STD_ON
#define COM_STARTBYTEPOSITIONOFRXSIGGRPINFO                           STD_ON
#define COM_UBIDXOFRXSIGGRPINFO                                       STD_ON
#define COM_UBMASKIDXOFRXSIGGRPINFO                                   STD_ON
#define COM_UBMASKUSEDOFRXSIGGRPINFO                                  STD_ON
#define COM_VALIDDLCOFRXSIGGRPINFO                                    STD_ON
#define COM_RXSIGGRPINFOIND                                           STD_ON
#define COM_RXSIGINFO                                                 STD_ON
#define COM_GWINFOIDXOFRXSIGINFO                                      STD_ON
#define COM_GWINFOUSEDOFRXSIGINFO                                     STD_ON
#define COM_RXACCESSINFOIDXOFRXSIGINFO                                STD_ON
#define COM_RXCBKFUNCPTRACKIDXOFRXSIGINFO                             STD_ON
#define COM_RXCBKFUNCPTRACKUSEDOFRXSIGINFO                            STD_ON
#define COM_RXCBKFUNCPTRINVACKIDXOFRXSIGINFO                          STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.RxCbkFuncPtrInvAckIdx' Reason: 'the optional indirection is deactivated because RxCbkFuncPtrInvAckUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXCBKFUNCPTRINVACKUSEDOFRXSIGINFO                         STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.RxCbkFuncPtrInvAckUsed' Reason: 'the optional indirection is deactivated because RxCbkFuncPtrInvAckUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOIDXOFRXSIGINFO                                  STD_ON
#define COM_RXTOUTINFOUSEDOFRXSIGINFO                                 STD_ON
#define COM_SIGNALPROCESSINGOFRXSIGINFO                               STD_ON
#define COM_UBIDXOFRXSIGINFO                                          STD_ON
#define COM_UBMASKIDXOFRXSIGINFO                                      STD_ON
#define COM_UBMASKUSEDOFRXSIGINFO                                     STD_ON
#define COM_VALIDDLCOFRXSIGINFO                                       STD_ON
#define COM_RXTOUTCNT                                                 STD_ON
#define COM_RXTOUTINFO                                                STD_ON
#define COM_CBKRXTOUTFUNCPTRINDENDIDXOFRXTOUTINFO                     STD_ON
#define COM_CBKRXTOUTFUNCPTRINDSTARTIDXOFRXTOUTINFO                   STD_ON
#define COM_CBKRXTOUTFUNCPTRINDUSEDOFRXTOUTINFO                       STD_ON
#define COM_FACTOROFRXTOUTINFO                                        STD_ON
#define COM_FIRSTFACTOROFRXTOUTINFO                                   STD_ON
#define COM_RXACCESSINFOREPLACEGRPSIGINDENDIDXOFRXTOUTINFO            STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceGrpSigIndEndIdx' Reason: 'the optional indirection is deactivated because RxAccessInfoReplaceGrpSigIndUsedOfRxTOutInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXACCESSINFOREPLACEGRPSIGINDSTARTIDXOFRXTOUTINFO          STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceGrpSigIndStartIdx' Reason: 'the optional indirection is deactivated because RxAccessInfoReplaceGrpSigIndUsedOfRxTOutInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXACCESSINFOREPLACEGRPSIGINDUSEDOFRXTOUTINFO              STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceGrpSigIndUsed' Reason: 'the optional indirection is deactivated because RxAccessInfoReplaceGrpSigIndUsedOfRxTOutInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXACCESSINFOREPLACESIGINDENDIDXOFRXTOUTINFO               STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceSigIndEndIdx' Reason: 'the optional indirection is deactivated because RxAccessInfoReplaceSigIndUsedOfRxTOutInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXACCESSINFOREPLACESIGINDSTARTIDXOFRXTOUTINFO             STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceSigIndStartIdx' Reason: 'the optional indirection is deactivated because RxAccessInfoReplaceSigIndUsedOfRxTOutInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXACCESSINFOREPLACESIGINDUSEDOFRXTOUTINFO                 STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceSigIndUsed' Reason: 'the optional indirection is deactivated because RxAccessInfoReplaceSigIndUsedOfRxTOutInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXPDUINFOIDXOFRXTOUTINFO                                  STD_ON
#define COM_RXTOUTINFOIND                                             STD_ON
#define COM_RXTPBUFFER                                                STD_ON
#define COM_RXTPCONNECTIONSTATE                                       STD_ON
#define COM_RXTPINFO                                                  STD_ON
#define COM_BUFFERSIZEOFRXTPINFO                                      STD_ON
#define COM_DYNAMICINITIALLENGTHOFRXTPINFO                            STD_ON
#define COM_RXACCESSINFODYNSIGIDXOFRXTPINFO                           STD_ON
#define COM_RXACCESSINFODYNSIGUSEDOFRXTPINFO                          STD_ON
#define COM_RXTPBUFFERENDIDXOFRXTPINFO                                STD_ON
#define COM_RXTPBUFFERSTARTIDXOFRXTPINFO                              STD_ON
#define COM_RXTPBUFFERUSEDOFRXTPINFO                                  STD_ON
#define COM_RXTPSDULENGTH                                             STD_ON
#define COM_RXTPWRITTENBYTESCOUNTER                                   STD_ON
#define COM_SIGGRPARRAYFILTERINFO                                     STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERMASKENDIDXOFSIGGRPARRAYFILTERINFO    STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterMaskEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERMASKLENGTHOFSIGGRPARRAYFILTERINFO    STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterMaskLength' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERMASKSTARTIDXOFSIGGRPARRAYFILTERINFO  STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterMaskStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERMASKUSEDOFSIGGRPARRAYFILTERINFO      STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterMaskUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERVALUEXENDIDXOFSIGGRPARRAYFILTERINFO  STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterValueXEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERVALUEXLENGTHOFSIGGRPARRAYFILTERINFO  STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterValueXLength' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERVALUEXSTARTIDXOFSIGGRPARRAYFILTERINFO STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterValueXStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_CONSTVALUEUINT8FILTERVALUEXUSEDOFSIGGRPARRAYFILTERINFO    STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.ConstValueUInt8FilterValueXUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_FILTERALGOOFSIGGRPARRAYFILTERINFO                         STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_OFFSETINSIGNALGROUPOFSIGGRPARRAYFILTERINFO                STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.OffsetInSignalGroup' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_SIGGRPEVENTFLAG                                           STD_ON
#define COM_SIZEOFACTIVATABLERXCOMIPDUS                               STD_ON
#define COM_SIZEOFACTIVATABLETXCOMIPDUS                               STD_ON
#define COM_SIZEOFCBKRXTOUTFUNCPTR                                    STD_ON
#define COM_SIZEOFCBKRXTOUTFUNCPTRIND                                 STD_ON
#define COM_SIZEOFCBKTXTOUTFUNCPTR                                    STD_ON
#define COM_SIZEOFCBKTXTOUTFUNCPTRIND                                 STD_ON
#define COM_SIZEOFCONSTVALUEARRAYBASED                                STD_ON
#define COM_SIZEOFCONSTVALUESINT16                                    STD_ON
#define COM_SIZEOFCONSTVALUEUINT16                                    STD_ON
#define COM_SIZEOFCONSTVALUEUINT32                                    STD_ON
#define COM_SIZEOFCONSTVALUEUINT8                                     STD_ON
#define COM_SIZEOFCURRENTTXMODE                                       STD_ON
#define COM_SIZEOFCYCLETIMECNT                                        STD_ON
#define COM_SIZEOFCYCLICSENDREQUEST                                   STD_ON
#define COM_SIZEOFDELAYTIMECNT                                        STD_ON
#define COM_SIZEOFFILTERINFO_UINT16                                   STD_ON
#define COM_SIZEOFFILTERINFO_UINT8                                    STD_ON
#define COM_SIZEOFGWEVENT                                             STD_ON
#define COM_SIZEOFGWGRPSIGMAPPING                                     STD_ON
#define COM_SIZEOFGWINFO                                              STD_ON
#define COM_SIZEOFGWSIGGRPMAPPING                                     STD_ON
#define COM_SIZEOFGWSIGMAPPING                                        STD_ON
#define COM_SIZEOFHANDLERXPDUDEFERRED                                 STD_ON
#define COM_SIZEOFHANDLETXPDUDEFERRED                                 STD_ON
#define COM_SIZEOFPDUGRPVECTOR                                        STD_ON
#define COM_SIZEOFREPCNT                                              STD_ON
#define COM_SIZEOFREPCYCLECNT                                         STD_ON
#define COM_SIZEOFRXACCESSINFO                                        STD_ON
#define COM_SIZEOFRXACCESSINFOGRPSIGIND                               STD_ON
#define COM_SIZEOFRXACCESSINFOIND                                     STD_ON
#define COM_SIZEOFRXCBKFUNCPTR                                        STD_ON
#define COM_SIZEOFRXDEFPDUBUFFER                                      STD_ON
#define COM_SIZEOFRXDEFERREDFCTPTRCACHE                               STD_ON
#define COM_SIZEOFRXDYNSIGNALLENGTH                                   STD_ON
#define COM_SIZEOFRXDYNSIGNALTMPLENGTHFORSIGNALGROUPS                 STD_ON
#define COM_SIZEOFRXPDUDMSTATE                                        STD_ON
#define COM_SIZEOFRXPDUGRPACTIVE                                      STD_ON
#define COM_SIZEOFRXPDUGRPINFO                                        STD_ON
#define COM_SIZEOFRXPDUINFO                                           STD_ON
#define COM_SIZEOFRXSIGBUFFERARRAYBASED                               STD_ON
#define COM_SIZEOFRXSIGBUFFERSINT16                                   STD_ON
#define COM_SIZEOFRXSIGBUFFERUINT16                                   STD_ON
#define COM_SIZEOFRXSIGBUFFERUINT32                                   STD_ON
#define COM_SIZEOFRXSIGBUFFERUINT8                                    STD_ON
#define COM_SIZEOFRXSIGGRPINFO                                        STD_ON
#define COM_SIZEOFRXSIGGRPINFOIND                                     STD_ON
#define COM_SIZEOFRXSIGINFO                                           STD_ON
#define COM_SIZEOFRXTOUTCNT                                           STD_ON
#define COM_SIZEOFRXTOUTINFO                                          STD_ON
#define COM_SIZEOFRXTOUTINFOIND                                       STD_ON
#define COM_SIZEOFRXTPBUFFER                                          STD_ON
#define COM_SIZEOFRXTPCONNECTIONSTATE                                 STD_ON
#define COM_SIZEOFRXTPINFO                                            STD_ON
#define COM_SIZEOFRXTPSDULENGTH                                       STD_ON
#define COM_SIZEOFRXTPWRITTENBYTESCOUNTER                             STD_ON
#define COM_SIZEOFSIGGRPEVENTFLAG                                     STD_ON
#define COM_SIZEOFTMPRXBUFFER                                         STD_ON
#define COM_SIZEOFTMPRXSHDBUFFERARRAYBASED                            STD_ON
#define COM_SIZEOFTMPRXSHDBUFFERUINT16                                STD_ON
#define COM_SIZEOFTMPRXSHDBUFFERUINT32                                STD_ON
#define COM_SIZEOFTMPRXSHDBUFFERUINT8                                 STD_ON
#define COM_SIZEOFTRANSMITREQUEST                                     STD_ON
#define COM_SIZEOFTXBUFFER                                            STD_ON
#define COM_SIZEOFTXDYNSIGNALLENGTH                                   STD_ON
#define COM_SIZEOFTXFILTERINITVALUEUINT16                             STD_ON
#define COM_SIZEOFTXFILTERINITVALUEUINT8                              STD_ON
#define COM_SIZEOFTXFILTEROLDVALUEUINT16                              STD_ON
#define COM_SIZEOFTXFILTEROLDVALUEUINT8                               STD_ON
#define COM_SIZEOFTXMODEFALSE                                         STD_ON
#define COM_SIZEOFTXMODEINFO                                          STD_ON
#define COM_SIZEOFTXMODETRUE                                          STD_ON
#define COM_SIZEOFTXPDUGRPACTIVE                                      STD_ON
#define COM_SIZEOFTXPDUGRPINFO                                        STD_ON
#define COM_SIZEOFTXPDUINFO                                           STD_ON
#define COM_SIZEOFTXPDUINITVALUE                                      STD_ON
#define COM_SIZEOFTXSDULENGTH                                         STD_ON
#define COM_SIZEOFTXSIGGRPINFO                                        STD_ON
#define COM_SIZEOFTXSIGGRPINFOIND                                     STD_ON
#define COM_SIZEOFTXSIGGRPMASK                                        STD_ON
#define COM_SIZEOFTXSIGINFO                                           STD_ON
#define COM_SIZEOFTXSIGINFOFILTERINITVALUEIND                         STD_ON
#define COM_SIZEOFTXTOUTCNT                                           STD_ON
#define COM_SIZEOFTXTOUTINFO                                          STD_ON
#define COM_SIZEOFTXTMPTPPDULENGTH                                    STD_ON
#define COM_SIZEOFTXTPCONNECTIONSTATE                                 STD_ON
#define COM_SIZEOFTXTPINFO                                            STD_ON
#define COM_SIZEOFTXTPSDULENGTH                                       STD_ON
#define COM_SIZEOFTXTPWRITTENBYTESCOUNTER                             STD_ON
#define COM_SIZEOFWAITINGFORCONFIRMATION                              STD_ON
#define COM_SOURCEDESCRIPTIONMASK                                     STD_OFF  /**< Deactivateable: 'Com_SourceDescriptionMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXBUFFER                                               STD_ON
#define COM_TMPRXSHDBUFFERARRAYBASED                                  STD_ON
#define COM_TMPRXSHDBUFFERFLOAT32                                     STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferFloat32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERFLOAT64                                     STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferFloat64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERSINT16                                      STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferSInt16' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERSINT32                                      STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferSInt32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERSINT64                                      STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferSInt64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERSINT8                                       STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferSInt8' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERUINT16                                      STD_ON
#define COM_TMPRXSHDBUFFERUINT32                                      STD_ON
#define COM_TMPRXSHDBUFFERUINT64                                      STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferUInt64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERUINT8                                       STD_ON
#define COM_TRANSMITREQUEST                                           STD_ON
#define COM_TXBUFFER                                                  STD_ON
#define COM_TXCYCLECOUNTERDIVISOR                                     STD_OFF  /**< Deactivateable: 'Com_TxCycleCounterDivisor' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_TXCYCLECOUNTERDIVISORCOUNTER                              STD_OFF  /**< Deactivateable: 'Com_TxCycleCounterDivisorCounter' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_TXCYCLICPROCESSINGISRLOCKCOUNTER                          STD_ON
#define COM_TXCYCLICPROCESSINGISRLOCKTHRESHOLD                        STD_ON
#define COM_TXDEADLINEMONITORINGISRLOCKCOUNTER                        STD_ON
#define COM_TXDEADLINEMONITORINGISRLOCKTHRESHOLD                      STD_ON
#define COM_TXDLMONDIVISOR                                            STD_OFF  /**< Deactivateable: 'Com_TxDlMonDivisor' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_TXDLMONDIVISORCOUNTER                                     STD_OFF  /**< Deactivateable: 'Com_TxDlMonDivisorCounter' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_TXDYNSIGNALLENGTH                                         STD_ON
#define COM_TXFILTERINITSTATE                                         STD_OFF  /**< Deactivateable: 'Com_TxFilterInitState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEARRAYBASED                               STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueArrayBased' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEFLOAT32                                  STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueFloat32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEFLOAT64                                  STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueFloat64' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUESINT16                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueSInt16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUESINT32                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueSInt32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUESINT64                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueSInt64' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUESINT8                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueSInt8' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUESIGGRPARRAYACCESS                        STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueSigGrpArrayAccess' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEUINT16                                   STD_ON
#define COM_TXFILTERINITVALUEUINT32                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueUInt32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEUINT64                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueUInt64' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEUINT8                                    STD_ON
#define COM_TXFILTEROLDVALUEARRAYBASED                                STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueArrayBased' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUEFLOAT32                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueFloat32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUEFLOAT64                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueFloat64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUESINT16                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueSInt16' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUESINT32                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueSInt32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUESINT64                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueSInt64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUESINT8                                     STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueSInt8' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUEUINT16                                    STD_ON
#define COM_TXFILTEROLDVALUEUINT32                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueUInt32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUEUINT64                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueUInt64' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUEUINT8                                     STD_ON
#define COM_TXFILTERSTATE                                             STD_OFF  /**< Deactivateable: 'Com_TxFilterState' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXIPDUGROUPISRLOCKCOUNTER                                 STD_ON
#define COM_TXIPDUGROUPISRLOCKTHRESHOLD                               STD_ON
#define COM_TXMODEFALSE                                               STD_ON
#define COM_DIRECTOFTXMODEFALSE                                       STD_ON
#define COM_PERIODICOFTXMODEFALSE                                     STD_ON
#define COM_REPCNTOFTXMODEFALSE                                       STD_OFF  /**< Deactivateable: 'Com_TxModeFalse.RepCnt' Reason: 'the value of Com_RepCntOfTxModeFalse is always '0' due to this, the array is deactivated.' */
#define COM_REPPERIODOFTXMODEFALSE                                    STD_OFF  /**< Deactivateable: 'Com_TxModeFalse.RepPeriod' Reason: 'the value of Com_RepPeriodOfTxModeFalse is always '0' due to this, the array is deactivated.' */
#define COM_TIMEOFFSETOFTXMODEFALSE                                   STD_ON
#define COM_TIMEPERIODOFTXMODEFALSE                                   STD_ON
#define COM_TXMODEINFO                                                STD_ON
#define COM_INITMODEOFTXMODEINFO                                      STD_ON
#define COM_INVALIDHNDOFTXMODEINFO                                    STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfTxModeInfo is always 'false' due to this, the array is deactivated.' */
#define COM_MINIMUMDELAYOFTXMODEINFO                                  STD_ON
#define COM_TXFILTERINITSTATEENDIDXOFTXMODEINFO                       STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxFilterInitStateEndIdx' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITSTATESTARTIDXOFTXMODEINFO                     STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxFilterInitStateStartIdx' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITSTATEUSEDOFTXMODEINFO                         STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxFilterInitStateUsed' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXMODEFALSEIDXOFTXMODEINFO                                STD_ON
#define COM_TXMODEFALSEUSEDOFTXMODEINFO                               STD_ON
#define COM_TXMODETRUEIDXOFTXMODEINFO                                 STD_ON
#define COM_TXMODETRUEUSEDOFTXMODEINFO                                STD_ON
#define COM_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO             STD_ON
#define COM_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO           STD_ON
#define COM_TXSIGINFOFILTERINITVALUEINDUSEDOFTXMODEINFO               STD_ON
#define COM_TXMODETRUE                                                STD_ON
#define COM_DIRECTOFTXMODETRUE                                        STD_ON
#define COM_PERIODICOFTXMODETRUE                                      STD_ON
#define COM_REPCNTOFTXMODETRUE                                        STD_OFF  /**< Deactivateable: 'Com_TxModeTrue.RepCnt' Reason: 'the value of Com_RepCntOfTxModeTrue is always '0' due to this, the array is deactivated.' */
#define COM_REPPERIODOFTXMODETRUE                                     STD_OFF  /**< Deactivateable: 'Com_TxModeTrue.RepPeriod' Reason: 'the value of Com_RepPeriodOfTxModeTrue is always '0' due to this, the array is deactivated.' */
#define COM_TIMEOFFSETOFTXMODETRUE                                    STD_ON
#define COM_TIMEPERIODOFTXMODETRUE                                    STD_ON
#define COM_TXPDUCALLOUTFUNCPTR                                       STD_OFF  /**< Deactivateable: 'Com_TxPduCalloutFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXPDUGRPACTIVE                                            STD_ON
#define COM_TXPDUGRPINFO                                              STD_ON
#define COM_PDUGRPVECTORENDIDXOFTXPDUGRPINFO                          STD_ON
#define COM_PDUGRPVECTORSTARTIDXOFTXPDUGRPINFO                        STD_ON
#define COM_PDUGRPVECTORUSEDOFTXPDUGRPINFO                            STD_ON
#define COM_TXPDUINFO                                                 STD_ON
#define COM_CANCELLATIONSUPPORTOFTXPDUINFO                            STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CancellationSupport' Reason: '/ActiveEcuC/PduR/Com[0:PduRCancelTransmit] is configured to 'false'' */
#define COM_CBKTXACKDEFFUNCPTRINDENDIDXOFTXPDUINFO                    STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckDefFuncPtrIndEndIdx' Reason: 'the optional indirection is deactivated because CbkTxAckDefFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXACKDEFFUNCPTRINDSTARTIDXOFTXPDUINFO                  STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckDefFuncPtrIndStartIdx' Reason: 'the optional indirection is deactivated because CbkTxAckDefFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO                      STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckDefFuncPtrIndUsed' Reason: 'the optional indirection is deactivated because CbkTxAckDefFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXACKIMFUNCPTRINDENDIDXOFTXPDUINFO                     STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckImFuncPtrIndEndIdx' Reason: 'the optional indirection is deactivated because CbkTxAckImFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXACKIMFUNCPTRINDSTARTIDXOFTXPDUINFO                   STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckImFuncPtrIndStartIdx' Reason: 'the optional indirection is deactivated because CbkTxAckImFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXACKIMFUNCPTRINDUSEDOFTXPDUINFO                       STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckImFuncPtrIndUsed' Reason: 'the optional indirection is deactivated because CbkTxAckImFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXERRFUNCPTRINDENDIDXOFTXPDUINFO                       STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxErrFuncPtrIndEndIdx' Reason: 'the optional indirection is deactivated because CbkTxErrFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXERRFUNCPTRINDSTARTIDXOFTXPDUINFO                     STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxErrFuncPtrIndStartIdx' Reason: 'the optional indirection is deactivated because CbkTxErrFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO                         STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxErrFuncPtrIndUsed' Reason: 'the optional indirection is deactivated because CbkTxErrFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CLRUBOFTXPDUINFO                                          STD_ON
#define COM_CONSTVALUEUINT8UBCLEARMASKENDIDXOFTXPDUINFO               STD_ON
#define COM_CONSTVALUEUINT8UBCLEARMASKSTARTIDXOFTXPDUINFO             STD_ON
#define COM_CONSTVALUEUINT8UBCLEARMASKUSEDOFTXPDUINFO                 STD_ON
#define COM_EXTERNALIDOFTXPDUINFO                                     STD_ON
#define COM_GWTIMEOUTINFOIDXOFTXPDUINFO                               STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.GwTimeoutInfoIdx' Reason: 'the optional indirection is deactivated because GwTimeoutInfoUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_GWTIMEOUTINFOUSEDOFTXPDUINFO                              STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.GwTimeoutInfoUsed' Reason: 'the optional indirection is deactivated because GwTimeoutInfoUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_IPDUGROUPINFOOFTXPDUINFOINDENDIDXOFTXPDUINFO              STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.IPduGroupInfoOfTxPduInfoIndEndIdx' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfTxPduInfoIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_IPDUGROUPINFOOFTXPDUINFOINDSTARTIDXOFTXPDUINFO            STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.IPduGroupInfoOfTxPduInfoIndStartIdx' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfTxPduInfoIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_IPDUGROUPINFOOFTXPDUINFOINDUSEDOFTXPDUINFO                STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.IPduGroupInfoOfTxPduInfoIndUsed' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfTxPduInfoIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVALIDHNDOFTXPDUINFO                                     STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfTxPduInfo is always 'false' due to this, the array is deactivated.' */
#define COM_METADATALENGTHOFTXPDUINFO                                 STD_ON
#define COM_PDUWITHMETADATALENGTHOFTXPDUINFO                          STD_ON
#define COM_TXBUFFERENDIDXOFTXPDUINFO                                 STD_ON
#define COM_TXBUFFERLENGTHOFTXPDUINFO                                 STD_ON
#define COM_TXBUFFERMETADATAENDIDXOFTXPDUINFO                         STD_ON
#define COM_TXBUFFERMETADATALENGTHOFTXPDUINFO                         STD_ON
#define COM_TXBUFFERMETADATASTARTIDXOFTXPDUINFO                       STD_ON
#define COM_TXBUFFERMETADATAUSEDOFTXPDUINFO                           STD_ON
#define COM_TXBUFFERSTARTIDXOFTXPDUINFO                               STD_ON
#define COM_TXBUFFERUSEDOFTXPDUINFO                                   STD_ON
#define COM_TXPDUCALLOUTFUNCPTRIDXOFTXPDUINFO                         STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduCalloutFuncPtrIdx' Reason: 'the optional indirection is deactivated because TxPduCalloutFuncPtrUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXPDUCALLOUTFUNCPTRUSEDOFTXPDUINFO                        STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduCalloutFuncPtrUsed' Reason: 'the optional indirection is deactivated because TxPduCalloutFuncPtrUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXPDUINITVALUEENDIDXOFTXPDUINFO                           STD_ON
#define COM_TXPDUINITVALUEMETADATAENDIDXOFTXPDUINFO                   STD_ON
#define COM_TXPDUINITVALUEMETADATASTARTIDXOFTXPDUINFO                 STD_ON
#define COM_TXPDUINITVALUEMETADATAUSEDOFTXPDUINFO                     STD_ON
#define COM_TXPDUINITVALUESTARTIDXOFTXPDUINFO                         STD_ON
#define COM_TXPDUINITVALUEUSEDOFTXPDUINFO                             STD_ON
#define COM_TXPDUTTCALLOUTFUNCPTRIDXOFTXPDUINFO                       STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduTTCalloutFuncPtrIdx' Reason: 'the optional indirection is deactivated because TxPduTTCalloutFuncPtrUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXPDUTTCALLOUTFUNCPTRUSEDOFTXPDUINFO                      STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduTTCalloutFuncPtrUsed' Reason: 'the optional indirection is deactivated because TxPduTTCalloutFuncPtrUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGGRPINFOINDENDIDXOFTXPDUINFO                          STD_ON
#define COM_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO                        STD_ON
#define COM_TXSIGGRPINFOINDUSEDOFTXPDUINFO                            STD_ON
#define COM_TXTOUTINFOIDXOFTXPDUINFO                                  STD_ON
#define COM_TXTOUTINFOUSEDOFTXPDUINFO                                 STD_ON
#define COM_TXTPINFOIDXOFTXPDUINFO                                    STD_ON
#define COM_TXTPINFOUSEDOFTXPDUINFO                                   STD_ON
#define COM_TXPDUINFOIND                                              STD_OFF  /**< Deactivateable: 'Com_TxPduInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXPDUINITVALUE                                            STD_ON
#define COM_TXPDUTTCALLOUTFUNCPTR                                     STD_OFF  /**< Deactivateable: 'Com_TxPduTTCalloutFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXPROCESSINGISRLOCKCOUNTER                                STD_ON
#define COM_TXPROCESSINGISRLOCKTHRESHOLD                              STD_ON
#define COM_TXSDULENGTH                                               STD_ON
#define COM_TXSIGGRPINFO                                              STD_ON
#define COM_ARRAYACCESSUSEDOFTXSIGGRPINFO                             STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.ArrayAccessUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_INVALIDHNDOFTXSIGGRPINFO                                  STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfTxSigGrpInfo is always 'false' due to this, the array is deactivated.' */
#define COM_PDUOFFSETOFTXSIGGRPINFO                                   STD_ON
#define COM_SIGGROUPONCHANGEOFFSETOFTXSIGGRPINFO                      STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGroupOnChangeOffset' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_SIGGROUPONCHANGESTARTPOSITIONOFTXSIGGRPINFO               STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGroupOnChangeStartPosition' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_SIGGROUPONCHANGEWITHOUTREPOFFSETOFTXSIGGRPINFO            STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGroupOnChangeWithoutRepOffset' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_SIGGROUPONCHANGEWITHOUTREPSTARTPOSITIONOFTXSIGGRPINFO     STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGroupOnChangeWithoutRepStartPosition' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_SIGGRPARRAYFILTERINFOENDIDXOFTXSIGGRPINFO                 STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGrpArrayFilterInfoEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_SIGGRPARRAYFILTERINFOSTARTIDXOFTXSIGGRPINFO               STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGrpArrayFilterInfoStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_SIGGRPARRAYFILTERINFOUSEDOFTXSIGGRPINFO                   STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGrpArrayFilterInfoUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TRANSFERPROPERTYOFTXSIGGRPINFO                            STD_ON
#define COM_TXBUFFERENDIDXOFTXSIGGRPINFO                              STD_ON
#define COM_TXBUFFERLENGTHOFTXSIGGRPINFO                              STD_ON
#define COM_TXBUFFERSIGGRPINTXIPDUENDIDXOFTXSIGGRPINFO                STD_ON
#define COM_TXBUFFERSIGGRPINTXIPDULENGTHOFTXSIGGRPINFO                STD_ON
#define COM_TXBUFFERSIGGRPINTXIPDUSTARTIDXOFTXSIGGRPINFO              STD_ON
#define COM_TXBUFFERSTARTIDXOFTXSIGGRPINFO                            STD_ON
#define COM_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGGRPINFO                  STD_ON
#define COM_TXBUFFERUBIDXINTXBUFFERUSEDOFTXSIGGRPINFO                 STD_ON
#define COM_TXBUFFERUSEDOFTXSIGGRPINFO                                STD_ON
#define COM_TXFILTERINITSTATEENDIDXOFTXSIGGRPINFO                     STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxFilterInitStateEndIdx' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITSTATESTARTIDXOFTXSIGGRPINFO                   STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxFilterInitStateStartIdx' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITSTATEUSEDOFTXSIGGRPINFO                       STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxFilterInitStateUsed' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXPDUINFOIDXOFTXSIGGRPINFO                                STD_ON
#define COM_TXSIGGRPMASKENDIDXOFTXSIGGRPINFO                          STD_ON
#define COM_TXSIGGRPMASKLENGTHOFTXSIGGRPINFO                          STD_ON
#define COM_TXSIGGRPMASKSTARTIDXOFTXSIGGRPINFO                        STD_ON
#define COM_TXSIGGRPMASKUSEDOFTXSIGGRPINFO                            STD_ON
#define COM_TXSIGGRPONCHANGEMASKONCHANGEENDIDXOFTXSIGGRPINFO          STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGELENGTHOFTXSIGGRPINFO          STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeLength' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGESTARTIDXOFTXSIGGRPINFO        STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEUSEDOFTXSIGGRPINFO            STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPENDIDXOFTXSIGGRPINFO STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeWithoutRepEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPLENGTHOFTXSIGGRPINFO STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeWithoutRepLength' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPSTARTIDXOFTXSIGGRPINFO STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeWithoutRepStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPUSEDOFTXSIGGRPINFO  STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeWithoutRepUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGINFOINVVALUEINDENDIDXOFTXSIGGRPINFO                  STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigInfoInvValueIndEndIdx' Reason: 'the optional indirection is deactivated because TxSigInfoInvValueIndUsedOfTxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGINFOINVVALUEINDSTARTIDXOFTXSIGGRPINFO                STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigInfoInvValueIndStartIdx' Reason: 'the optional indirection is deactivated because TxSigInfoInvValueIndUsedOfTxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGINFOINVVALUEINDUSEDOFTXSIGGRPINFO                    STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigInfoInvValueIndUsed' Reason: 'the optional indirection is deactivated because TxSigInfoInvValueIndUsedOfTxSigGrpInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_UBMASKIDXOFTXSIGGRPINFO                                   STD_ON
#define COM_UBMASKUSEDOFTXSIGGRPINFO                                  STD_ON
#define COM_TXSIGGRPINFOIND                                           STD_ON
#define COM_TXSIGGRPMASK                                              STD_ON
#define COM_TXSIGGRPONCHANGEMASK                                      STD_OFF  /**< Deactivateable: 'Com_TxSigGrpOnChangeMask' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGINFO                                                 STD_ON
#define COM_APPLTYPEOFTXSIGINFO                                       STD_ON
#define COM_BITLENGTHOFTXSIGINFO                                      STD_ON
#define COM_BITPOSITIONOFTXSIGINFO                                    STD_ON
#define COM_BUSACCOFTXSIGINFO                                         STD_ON
#define COM_BYTELENGTHOFTXSIGINFO                                     STD_ON
#define COM_BYTEPOSITIONOFTXSIGINFO                                   STD_ON
#define COM_CONSTVALUEARRAYBASEDINVVALUEENDIDXOFTXSIGINFO             STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.ConstValueArrayBasedInvValueEndIdx' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDINVVALUELENGTHOFTXSIGINFO             STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.ConstValueArrayBasedInvValueLength' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDINVVALUESTARTIDXOFTXSIGINFO           STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.ConstValueArrayBasedInvValueStartIdx' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEARRAYBASEDINVVALUEUSEDOFTXSIGINFO               STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.ConstValueArrayBasedInvValueUsed' Reason: 'the optional indirection is deactivated because ConstValueArrayBasedInvValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINFOIDXOFTXSIGINFO                                  STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.FilterInfoIdx' Reason: 'the optional indirection is deactivated because FilterInfoUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINFOUSEDOFTXSIGINFO                                 STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.FilterInfoUsed' Reason: 'the optional indirection is deactivated because FilterInfoUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINITVALUEIDXOFTXSIGINFO                             STD_ON
#define COM_FILTERINITVALUEUSEDOFTXSIGINFO                            STD_ON
#define COM_INVVALUEIDXOFTXSIGINFO                                    STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.InvValueIdx' Reason: 'the optional indirection is deactivated because InvValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVVALUEUSEDOFTXSIGINFO                                   STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.InvValueUsed' Reason: 'the optional indirection is deactivated because InvValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVALIDHNDOFTXSIGINFO                                     STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfTxSigInfo is always 'false' due to this, the array is deactivated.' */
#define COM_ONCHANGEIDXOFTXSIGINFO                                    STD_ON
#define COM_ONCHANGEUSEDOFTXSIGINFO                                   STD_ON
#define COM_STARTBYTEINPDUPOSITIONOFTXSIGINFO                         STD_ON
#define COM_TRIGGEREDOFTXSIGINFO                                      STD_ON
#define COM_TXBUFFERENDIDXOFTXSIGINFO                                 STD_ON
#define COM_TXBUFFERLENGTHOFTXSIGINFO                                 STD_ON
#define COM_TXBUFFERSTARTIDXOFTXSIGINFO                               STD_ON
#define COM_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO                     STD_ON
#define COM_TXBUFFERUBIDXINTXBUFFERUSEDOFTXSIGINFO                    STD_ON
#define COM_TXBUFFERUSEDOFTXSIGINFO                                   STD_ON
#define COM_TXFILTERINITSTATEIDXOFTXSIGINFO                           STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxFilterInitStateIdx' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITSTATEUSEDOFTXSIGINFO                          STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxFilterInitStateUsed' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUEENDIDXOFTXSIGINFO STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxFilterInitValueArrayBasedFilterInitValueEndIdx' Reason: 'the optional indirection is deactivated because TxFilterInitValueArrayBasedFilterInitValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUELENGTHOFTXSIGINFO STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxFilterInitValueArrayBasedFilterInitValueLength' Reason: 'the optional indirection is deactivated because TxFilterInitValueArrayBasedFilterInitValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUESTARTIDXOFTXSIGINFO STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxFilterInitValueArrayBasedFilterInitValueStartIdx' Reason: 'the optional indirection is deactivated because TxFilterInitValueArrayBasedFilterInitValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITVALUEARRAYBASEDFILTERINITVALUEUSEDOFTXSIGINFO STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxFilterInitValueArrayBasedFilterInitValueUsed' Reason: 'the optional indirection is deactivated because TxFilterInitValueArrayBasedFilterInitValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXPDUINFOIDXOFTXSIGINFO                                   STD_ON
#define COM_TXSIGGRPINFOIDXOFTXSIGINFO                                STD_ON
#define COM_TXSIGGRPINFOUSEDOFTXSIGINFO                               STD_ON
#define COM_UBMASKIDXOFTXSIGINFO                                      STD_ON
#define COM_UBMASKUSEDOFTXSIGINFO                                     STD_ON
#define COM_WITHOUTREPOFTXSIGINFO                                     STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.WithoutRep' Reason: 'the value of Com_WithoutRepOfTxSigInfo is always 'false' due to this, the array is deactivated.' */
#define COM_TXSIGINFOFILTERINITVALUEIND                               STD_ON
#define COM_TXSIGINFOINVVALUEIND                                      STD_OFF  /**< Deactivateable: 'Com_TxSigInfoInvValueInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXTOUTCNT                                                 STD_ON
#define COM_TXTOUTINFO                                                STD_ON
#define COM_CBKTXTOUTFUNCPTRINDENDIDXOFTXTOUTINFO                     STD_ON
#define COM_CBKTXTOUTFUNCPTRINDSTARTIDXOFTXTOUTINFO                   STD_ON
#define COM_CBKTXTOUTFUNCPTRINDUSEDOFTXTOUTINFO                       STD_ON
#define COM_FACTOROFTXTOUTINFO                                        STD_ON
#define COM_MODEOFTXTOUTINFO                                          STD_ON
#define COM_TXPDUINFOIDXOFTXTOUTINFO                                  STD_ON
#define COM_TXTMPTPPDULENGTH                                          STD_ON
#define COM_TXTPCONNECTIONSTATE                                       STD_ON
#define COM_TXTPINFO                                                  STD_ON
#define COM_BUFFERSIZEOFTXTPINFO                                      STD_ON
#define COM_DYNAMICINITIALLENGTHOFTXTPINFO                            STD_ON
#define COM_TXBUFFERENDIDXOFTXTPINFO                                  STD_ON
#define COM_TXBUFFERLENGTHOFTXTPINFO                                  STD_ON
#define COM_TXBUFFERSTARTIDXOFTXTPINFO                                STD_ON
#define COM_TXBUFFERUSEDOFTXTPINFO                                    STD_ON
#define COM_TXSIGINFODYNSIGIDXOFTXTPINFO                              STD_ON
#define COM_TXSIGINFODYNSIGUSEDOFTXTPINFO                             STD_ON
#define COM_TXTPSDULENGTH                                             STD_ON
#define COM_TXTPWRITTENBYTESCOUNTER                                   STD_ON
#define COM_WAITINGFORCONFIRMATION                                    STD_ON
#define COM_PCCONFIG                                                  STD_ON
#define COM_ACTIVATABLERXCOMIPDUSOFPCCONFIG                           STD_ON
#define COM_ACTIVATABLETXCOMIPDUSOFPCCONFIG                           STD_ON
#define COM_CBKRXTOUTFUNCPTRINDOFPCCONFIG                             STD_ON
#define COM_CBKRXTOUTFUNCPTROFPCCONFIG                                STD_ON
#define COM_CBKTXTOUTFUNCPTRINDOFPCCONFIG                             STD_ON
#define COM_CBKTXTOUTFUNCPTROFPCCONFIG                                STD_ON
#define COM_CONFIGIDOFPCCONFIG                                        STD_ON
#define COM_CONSTVALUEARRAYBASEDOFPCCONFIG                            STD_ON
#define COM_CONSTVALUESINT16OFPCCONFIG                                STD_ON
#define COM_CONSTVALUEUINT16OFPCCONFIG                                STD_ON
#define COM_CONSTVALUEUINT32OFPCCONFIG                                STD_ON
#define COM_CONSTVALUEUINT8OFPCCONFIG                                 STD_ON
#define COM_CURRENTTXMODEOFPCCONFIG                                   STD_ON
#define COM_CYCLETIMECNTOFPCCONFIG                                    STD_ON
#define COM_CYCLICSENDREQUESTOFPCCONFIG                               STD_ON
#define COM_DELAYTIMECNTOFPCCONFIG                                    STD_ON
#define COM_FILTERINFO_UINT16OFPCCONFIG                               STD_ON
#define COM_FILTERINFO_UINT8OFPCCONFIG                                STD_ON
#define COM_FINALMAGICNUMBEROFPCCONFIG                                STD_OFF  /**< Deactivateable: 'Com_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define COM_GATEWAYDESCRIPTIONPROCESSINGISRLOCKCOUNTEROFPCCONFIG      STD_ON
#define COM_GATEWAYDESCRIPTIONPROCESSINGISRLOCKTHRESHOLDOFPCCONFIG    STD_OFF  /**< Deactivateable: 'Com_PCConfig.GatewayDescriptionProcessingISRLockThreshold' Reason: 'No Deferred Description Routings exist' */
#define COM_GATEWAYPROCESSINGISRLOCKCOUNTEROFPCCONFIG                 STD_ON
#define COM_GATEWAYPROCESSINGISRLOCKTHRESHOLDOFPCCONFIG               STD_ON
#define COM_GWEVENTCACHEINDEXOFPCCONFIG                               STD_ON
#define COM_GWEVENTOFPCCONFIG                                         STD_ON
#define COM_GWGRPSIGMAPPINGOFPCCONFIG                                 STD_ON
#define COM_GWINFOOFPCCONFIG                                          STD_ON
#define COM_GWSIGGRPMAPPINGOFPCCONFIG                                 STD_ON
#define COM_GWSIGMAPPINGOFPCCONFIG                                    STD_ON
#define COM_HANDLERXPDUDEFERREDOFPCCONFIG                             STD_ON
#define COM_HANDLETXPDUDEFERREDOFPCCONFIG                             STD_ON
#define COM_INITDATAHASHCODEOFPCCONFIG                                STD_OFF  /**< Deactivateable: 'Com_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define COM_INITIALIZEDOFPCCONFIG                                     STD_ON
#define COM_PDUGRPCNTOFPCCONFIG                                       STD_ON
#define COM_PDUGRPVECTOROFPCCONFIG                                    STD_ON
#define COM_REPCNTOFPCCONFIG                                          STD_ON
#define COM_REPCYCLECNTOFPCCONFIG                                     STD_ON
#define COM_RXACCESSINFOGRPSIGINDOFPCCONFIG                           STD_ON
#define COM_RXACCESSINFOINDOFPCCONFIG                                 STD_ON
#define COM_RXACCESSINFOOFPCCONFIG                                    STD_ON
#define COM_RXCBKFUNCPTROFPCCONFIG                                    STD_ON
#define COM_RXDEADLINEMONITORINGISRLOCKCOUNTEROFPCCONFIG              STD_ON
#define COM_RXDEADLINEMONITORINGISRLOCKTHRESHOLDOFPCCONFIG            STD_ON
#define COM_RXDEFPDUBUFFEROFPCCONFIG                                  STD_ON
#define COM_RXDEFERREDFCTPTRCACHEOFPCCONFIG                           STD_ON
#define COM_RXDEFERREDPROCESSINGISRLOCKCOUNTEROFPCCONFIG              STD_ON
#define COM_RXDEFERREDPROCESSINGISRLOCKTHRESHOLDOFPCCONFIG            STD_ON
#define COM_RXDLMONDIVISOROFPCCONFIG                                  STD_OFF  /**< Deactivateable: 'Com_PCConfig.RxDlMonDivisor' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_RXDYNSIGNALLENGTHOFPCCONFIG                               STD_ON
#define COM_RXDYNSIGNALTMPLENGTHFORSIGNALGROUPSOFPCCONFIG             STD_ON
#define COM_RXIPDUGROUPISRLOCKCOUNTEROFPCCONFIG                       STD_ON
#define COM_RXIPDUGROUPISRLOCKTHRESHOLDOFPCCONFIG                     STD_ON
#define COM_RXPDUDMSTATEOFPCCONFIG                                    STD_ON
#define COM_RXPDUGRPACTIVEOFPCCONFIG                                  STD_ON
#define COM_RXPDUGRPINFOOFPCCONFIG                                    STD_ON
#define COM_RXPDUINFOOFPCCONFIG                                       STD_ON
#define COM_RXSIGBUFFERARRAYBASEDOFPCCONFIG                           STD_ON
#define COM_RXSIGBUFFERSINT16OFPCCONFIG                               STD_ON
#define COM_RXSIGBUFFERUINT16OFPCCONFIG                               STD_ON
#define COM_RXSIGBUFFERUINT32OFPCCONFIG                               STD_ON
#define COM_RXSIGBUFFERUINT8OFPCCONFIG                                STD_ON
#define COM_RXSIGGRPINFOINDOFPCCONFIG                                 STD_ON
#define COM_RXSIGGRPINFOOFPCCONFIG                                    STD_ON
#define COM_RXSIGINFOOFPCCONFIG                                       STD_ON
#define COM_RXTOUTCNTOFPCCONFIG                                       STD_ON
#define COM_RXTOUTINFOINDOFPCCONFIG                                   STD_ON
#define COM_RXTOUTINFOOFPCCONFIG                                      STD_ON
#define COM_RXTPBUFFEROFPCCONFIG                                      STD_ON
#define COM_RXTPCONNECTIONSTATEOFPCCONFIG                             STD_ON
#define COM_RXTPINFOOFPCCONFIG                                        STD_ON
#define COM_RXTPSDULENGTHOFPCCONFIG                                   STD_ON
#define COM_RXTPWRITTENBYTESCOUNTEROFPCCONFIG                         STD_ON
#define COM_SIGGRPEVENTFLAGOFPCCONFIG                                 STD_ON
#define COM_SIZEOFACTIVATABLERXCOMIPDUSOFPCCONFIG                     STD_ON
#define COM_SIZEOFACTIVATABLETXCOMIPDUSOFPCCONFIG                     STD_ON
#define COM_SIZEOFCBKRXTOUTFUNCPTRINDOFPCCONFIG                       STD_ON
#define COM_SIZEOFCBKRXTOUTFUNCPTROFPCCONFIG                          STD_ON
#define COM_SIZEOFCBKTXTOUTFUNCPTRINDOFPCCONFIG                       STD_ON
#define COM_SIZEOFCBKTXTOUTFUNCPTROFPCCONFIG                          STD_ON
#define COM_SIZEOFCONSTVALUEARRAYBASEDOFPCCONFIG                      STD_ON
#define COM_SIZEOFCONSTVALUESINT16OFPCCONFIG                          STD_ON
#define COM_SIZEOFCONSTVALUEUINT16OFPCCONFIG                          STD_ON
#define COM_SIZEOFCONSTVALUEUINT32OFPCCONFIG                          STD_ON
#define COM_SIZEOFCONSTVALUEUINT8OFPCCONFIG                           STD_ON
#define COM_SIZEOFCURRENTTXMODEOFPCCONFIG                             STD_ON
#define COM_SIZEOFCYCLETIMECNTOFPCCONFIG                              STD_ON
#define COM_SIZEOFCYCLICSENDREQUESTOFPCCONFIG                         STD_ON
#define COM_SIZEOFDELAYTIMECNTOFPCCONFIG                              STD_ON
#define COM_SIZEOFFILTERINFO_UINT16OFPCCONFIG                         STD_ON
#define COM_SIZEOFFILTERINFO_UINT8OFPCCONFIG                          STD_ON
#define COM_SIZEOFGWEVENTOFPCCONFIG                                   STD_ON
#define COM_SIZEOFGWGRPSIGMAPPINGOFPCCONFIG                           STD_ON
#define COM_SIZEOFGWINFOOFPCCONFIG                                    STD_ON
#define COM_SIZEOFGWSIGGRPMAPPINGOFPCCONFIG                           STD_ON
#define COM_SIZEOFGWSIGMAPPINGOFPCCONFIG                              STD_ON
#define COM_SIZEOFHANDLERXPDUDEFERREDOFPCCONFIG                       STD_ON
#define COM_SIZEOFHANDLETXPDUDEFERREDOFPCCONFIG                       STD_ON
#define COM_SIZEOFPDUGRPVECTOROFPCCONFIG                              STD_ON
#define COM_SIZEOFREPCNTOFPCCONFIG                                    STD_ON
#define COM_SIZEOFREPCYCLECNTOFPCCONFIG                               STD_ON
#define COM_SIZEOFRXACCESSINFOGRPSIGINDOFPCCONFIG                     STD_ON
#define COM_SIZEOFRXACCESSINFOINDOFPCCONFIG                           STD_ON
#define COM_SIZEOFRXACCESSINFOOFPCCONFIG                              STD_ON
#define COM_SIZEOFRXCBKFUNCPTROFPCCONFIG                              STD_ON
#define COM_SIZEOFRXDEFPDUBUFFEROFPCCONFIG                            STD_ON
#define COM_SIZEOFRXDEFERREDFCTPTRCACHEOFPCCONFIG                     STD_ON
#define COM_SIZEOFRXDYNSIGNALLENGTHOFPCCONFIG                         STD_ON
#define COM_SIZEOFRXDYNSIGNALTMPLENGTHFORSIGNALGROUPSOFPCCONFIG       STD_ON
#define COM_SIZEOFRXPDUDMSTATEOFPCCONFIG                              STD_ON
#define COM_SIZEOFRXPDUGRPACTIVEOFPCCONFIG                            STD_ON
#define COM_SIZEOFRXPDUGRPINFOOFPCCONFIG                              STD_ON
#define COM_SIZEOFRXPDUINFOOFPCCONFIG                                 STD_ON
#define COM_SIZEOFRXSIGBUFFERARRAYBASEDOFPCCONFIG                     STD_ON
#define COM_SIZEOFRXSIGBUFFERSINT16OFPCCONFIG                         STD_ON
#define COM_SIZEOFRXSIGBUFFERUINT16OFPCCONFIG                         STD_ON
#define COM_SIZEOFRXSIGBUFFERUINT32OFPCCONFIG                         STD_ON
#define COM_SIZEOFRXSIGBUFFERUINT8OFPCCONFIG                          STD_ON
#define COM_SIZEOFRXSIGGRPINFOINDOFPCCONFIG                           STD_ON
#define COM_SIZEOFRXSIGGRPINFOOFPCCONFIG                              STD_ON
#define COM_SIZEOFRXSIGINFOOFPCCONFIG                                 STD_ON
#define COM_SIZEOFRXTOUTCNTOFPCCONFIG                                 STD_ON
#define COM_SIZEOFRXTOUTINFOINDOFPCCONFIG                             STD_ON
#define COM_SIZEOFRXTOUTINFOOFPCCONFIG                                STD_ON
#define COM_SIZEOFRXTPBUFFEROFPCCONFIG                                STD_ON
#define COM_SIZEOFRXTPCONNECTIONSTATEOFPCCONFIG                       STD_ON
#define COM_SIZEOFRXTPINFOOFPCCONFIG                                  STD_ON
#define COM_SIZEOFRXTPSDULENGTHOFPCCONFIG                             STD_ON
#define COM_SIZEOFRXTPWRITTENBYTESCOUNTEROFPCCONFIG                   STD_ON
#define COM_SIZEOFSIGGRPEVENTFLAGOFPCCONFIG                           STD_ON
#define COM_SIZEOFTMPRXBUFFEROFPCCONFIG                               STD_ON
#define COM_SIZEOFTMPRXSHDBUFFERARRAYBASEDOFPCCONFIG                  STD_ON
#define COM_SIZEOFTMPRXSHDBUFFERUINT16OFPCCONFIG                      STD_ON
#define COM_SIZEOFTMPRXSHDBUFFERUINT32OFPCCONFIG                      STD_ON
#define COM_SIZEOFTMPRXSHDBUFFERUINT8OFPCCONFIG                       STD_ON
#define COM_SIZEOFTRANSMITREQUESTOFPCCONFIG                           STD_ON
#define COM_SIZEOFTXBUFFEROFPCCONFIG                                  STD_ON
#define COM_SIZEOFTXDYNSIGNALLENGTHOFPCCONFIG                         STD_ON
#define COM_SIZEOFTXFILTERINITVALUEUINT16OFPCCONFIG                   STD_ON
#define COM_SIZEOFTXFILTERINITVALUEUINT8OFPCCONFIG                    STD_ON
#define COM_SIZEOFTXFILTEROLDVALUEUINT16OFPCCONFIG                    STD_ON
#define COM_SIZEOFTXFILTEROLDVALUEUINT8OFPCCONFIG                     STD_ON
#define COM_SIZEOFTXMODEFALSEOFPCCONFIG                               STD_ON
#define COM_SIZEOFTXMODEINFOOFPCCONFIG                                STD_ON
#define COM_SIZEOFTXMODETRUEOFPCCONFIG                                STD_ON
#define COM_SIZEOFTXPDUGRPACTIVEOFPCCONFIG                            STD_ON
#define COM_SIZEOFTXPDUGRPINFOOFPCCONFIG                              STD_ON
#define COM_SIZEOFTXPDUINFOOFPCCONFIG                                 STD_ON
#define COM_SIZEOFTXPDUINITVALUEOFPCCONFIG                            STD_ON
#define COM_SIZEOFTXSDULENGTHOFPCCONFIG                               STD_ON
#define COM_SIZEOFTXSIGGRPINFOINDOFPCCONFIG                           STD_ON
#define COM_SIZEOFTXSIGGRPINFOOFPCCONFIG                              STD_ON
#define COM_SIZEOFTXSIGGRPMASKOFPCCONFIG                              STD_ON
#define COM_SIZEOFTXSIGINFOFILTERINITVALUEINDOFPCCONFIG               STD_ON
#define COM_SIZEOFTXSIGINFOOFPCCONFIG                                 STD_ON
#define COM_SIZEOFTXTOUTCNTOFPCCONFIG                                 STD_ON
#define COM_SIZEOFTXTOUTINFOOFPCCONFIG                                STD_ON
#define COM_SIZEOFTXTMPTPPDULENGTHOFPCCONFIG                          STD_ON
#define COM_SIZEOFTXTPCONNECTIONSTATEOFPCCONFIG                       STD_ON
#define COM_SIZEOFTXTPINFOOFPCCONFIG                                  STD_ON
#define COM_SIZEOFTXTPSDULENGTHOFPCCONFIG                             STD_ON
#define COM_SIZEOFTXTPWRITTENBYTESCOUNTEROFPCCONFIG                   STD_ON
#define COM_SIZEOFWAITINGFORCONFIRMATIONOFPCCONFIG                    STD_ON
#define COM_TMPRXBUFFEROFPCCONFIG                                     STD_ON
#define COM_TMPRXSHDBUFFERARRAYBASEDOFPCCONFIG                        STD_ON
#define COM_TMPRXSHDBUFFERUINT16OFPCCONFIG                            STD_ON
#define COM_TMPRXSHDBUFFERUINT32OFPCCONFIG                            STD_ON
#define COM_TMPRXSHDBUFFERUINT8OFPCCONFIG                             STD_ON
#define COM_TRANSMITREQUESTOFPCCONFIG                                 STD_ON
#define COM_TXBUFFEROFPCCONFIG                                        STD_ON
#define COM_TXCYCLECOUNTERDIVISOROFPCCONFIG                           STD_OFF  /**< Deactivateable: 'Com_PCConfig.TxCycleCounterDivisor' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_TXCYCLICPROCESSINGISRLOCKCOUNTEROFPCCONFIG                STD_ON
#define COM_TXCYCLICPROCESSINGISRLOCKTHRESHOLDOFPCCONFIG              STD_ON
#define COM_TXDEADLINEMONITORINGISRLOCKCOUNTEROFPCCONFIG              STD_ON
#define COM_TXDEADLINEMONITORINGISRLOCKTHRESHOLDOFPCCONFIG            STD_ON
#define COM_TXDLMONDIVISOROFPCCONFIG                                  STD_OFF  /**< Deactivateable: 'Com_PCConfig.TxDlMonDivisor' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMainfunctionTimingDomainSupport] is configured to 'false'' */
#define COM_TXDYNSIGNALLENGTHOFPCCONFIG                               STD_ON
#define COM_TXFILTERINITVALUEUINT16OFPCCONFIG                         STD_ON
#define COM_TXFILTERINITVALUEUINT8OFPCCONFIG                          STD_ON
#define COM_TXFILTEROLDVALUEUINT16OFPCCONFIG                          STD_ON
#define COM_TXFILTEROLDVALUEUINT8OFPCCONFIG                           STD_ON
#define COM_TXIPDUGROUPISRLOCKCOUNTEROFPCCONFIG                       STD_ON
#define COM_TXIPDUGROUPISRLOCKTHRESHOLDOFPCCONFIG                     STD_ON
#define COM_TXMODEFALSEOFPCCONFIG                                     STD_ON
#define COM_TXMODEINFOOFPCCONFIG                                      STD_ON
#define COM_TXMODETRUEOFPCCONFIG                                      STD_ON
#define COM_TXPDUGRPACTIVEOFPCCONFIG                                  STD_ON
#define COM_TXPDUGRPINFOOFPCCONFIG                                    STD_ON
#define COM_TXPDUINFOOFPCCONFIG                                       STD_ON
#define COM_TXPDUINITVALUEOFPCCONFIG                                  STD_ON
#define COM_TXPROCESSINGISRLOCKCOUNTEROFPCCONFIG                      STD_ON
#define COM_TXPROCESSINGISRLOCKTHRESHOLDOFPCCONFIG                    STD_ON
#define COM_TXSDULENGTHOFPCCONFIG                                     STD_ON
#define COM_TXSIGGRPINFOINDOFPCCONFIG                                 STD_ON
#define COM_TXSIGGRPINFOOFPCCONFIG                                    STD_ON
#define COM_TXSIGGRPMASKOFPCCONFIG                                    STD_ON
#define COM_TXSIGINFOFILTERINITVALUEINDOFPCCONFIG                     STD_ON
#define COM_TXSIGINFOOFPCCONFIG                                       STD_ON
#define COM_TXTOUTCNTOFPCCONFIG                                       STD_ON
#define COM_TXTOUTINFOOFPCCONFIG                                      STD_ON
#define COM_TXTMPTPPDULENGTHOFPCCONFIG                                STD_ON
#define COM_TXTPCONNECTIONSTATEOFPCCONFIG                             STD_ON
#define COM_TXTPINFOOFPCCONFIG                                        STD_ON
#define COM_TXTPSDULENGTHOFPCCONFIG                                   STD_ON
#define COM_TXTPWRITTENBYTESCOUNTEROFPCCONFIG                         STD_ON
#define COM_WAITINGFORCONFIRMATIONOFPCCONFIG                          STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  ComPCMinNumericValueDefines  Com Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define COM_MIN_CYCLETIMECNT                                          0U
#define COM_MIN_DELAYTIMECNT                                          0U
#define COM_MIN_GATEWAYDESCRIPTIONPROCESSINGISRLOCKCOUNTER            0U
#define COM_MIN_GATEWAYPROCESSINGISRLOCKCOUNTER                       0U
#define COM_MIN_GWEVENTCACHEINDEX                                     0U
#define COM_MIN_HANDLERXPDUDEFERRED                                   0U
#define COM_MIN_REPCNT                                                0U
#define COM_MIN_REPCYCLECNT                                           0U
#define COM_MIN_RXDEADLINEMONITORINGISRLOCKCOUNTER                    0U
#define COM_MIN_RXDEFPDUBUFFER                                        0U
#define COM_MIN_RXDEFERREDFCTPTRCACHE                                 0UL
#define COM_MIN_RXDEFERREDPROCESSINGISRLOCKCOUNTER                    0U
#define COM_MIN_RXDYNSIGNALLENGTH                                     0U
#define COM_MIN_RXDYNSIGNALTMPLENGTHFORSIGNALGROUPS                   0U
#define COM_MIN_RXIPDUGROUPISRLOCKCOUNTER                             0U
#define COM_MIN_RXSIGBUFFERARRAYBASED                                 0U
#define COM_MIN_RXSIGBUFFERSINT16                                     -32768
#define COM_MIN_RXSIGBUFFERUINT16                                     0U
#define COM_MIN_RXSIGBUFFERUINT32                                     0UL
#define COM_MIN_RXSIGBUFFERUINT8                                      0U
#define COM_MIN_RXTOUTCNT                                             0U
#define COM_MIN_RXTPBUFFER                                            0U
#define COM_MIN_RXTPSDULENGTH                                         0U
#define COM_MIN_RXTPWRITTENBYTESCOUNTER                               0U
#define COM_MIN_SIGGRPEVENTFLAG                                       0U
#define COM_MIN_TMPRXBUFFER                                           0U
#define COM_MIN_TMPRXSHDBUFFERARRAYBASED                              0U
#define COM_MIN_TMPRXSHDBUFFERUINT16                                  0U
#define COM_MIN_TMPRXSHDBUFFERUINT32                                  0UL
#define COM_MIN_TMPRXSHDBUFFERUINT8                                   0U
#define COM_MIN_TXBUFFER                                              0U
#define COM_MIN_TXCYCLICPROCESSINGISRLOCKCOUNTER                      0U
#define COM_MIN_TXDEADLINEMONITORINGISRLOCKCOUNTER                    0U
#define COM_MIN_TXDYNSIGNALLENGTH                                     0U
#define COM_MIN_TXFILTEROLDVALUEUINT16                                0U
#define COM_MIN_TXFILTEROLDVALUEUINT8                                 0U
#define COM_MIN_TXIPDUGROUPISRLOCKCOUNTER                             0U
#define COM_MIN_TXPROCESSINGISRLOCKCOUNTER                            0U
#define COM_MIN_TXSDULENGTH                                           0U
#define COM_MIN_TXTOUTCNT                                             0U
#define COM_MIN_TXTMPTPPDULENGTH                                      0U
#define COM_MIN_TXTPSDULENGTH                                         0U
#define COM_MIN_TXTPWRITTENBYTESCOUNTER                               0U
/** 
  \}
*/ 

/** 
  \defgroup  ComPCMaxNumericValueDefines  Com Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define COM_MAX_CYCLETIMECNT                                          65535U
#define COM_MAX_DELAYTIMECNT                                          255U
#define COM_MAX_GATEWAYDESCRIPTIONPROCESSINGISRLOCKCOUNTER            65535U
#define COM_MAX_GATEWAYPROCESSINGISRLOCKCOUNTER                       65535U
#define COM_MAX_GWEVENTCACHEINDEX                                     65535U
#define COM_MAX_HANDLERXPDUDEFERRED                                   65535U
#define COM_MAX_REPCNT                                                65535U
#define COM_MAX_REPCYCLECNT                                           65535U
#define COM_MAX_RXDEADLINEMONITORINGISRLOCKCOUNTER                    65535U
#define COM_MAX_RXDEFPDUBUFFER                                        255U
#define COM_MAX_RXDEFERREDFCTPTRCACHE                                 4294967295UL
#define COM_MAX_RXDEFERREDPROCESSINGISRLOCKCOUNTER                    65535U
#define COM_MAX_RXDYNSIGNALLENGTH                                     65535U
#define COM_MAX_RXDYNSIGNALTMPLENGTHFORSIGNALGROUPS                   65535U
#define COM_MAX_RXIPDUGROUPISRLOCKCOUNTER                             65535U
#define COM_MAX_RXSIGBUFFERARRAYBASED                                 255U
#define COM_MAX_RXSIGBUFFERSINT16                                     32767
#define COM_MAX_RXSIGBUFFERUINT16                                     65535U
#define COM_MAX_RXSIGBUFFERUINT32                                     4294967295UL
#define COM_MAX_RXSIGBUFFERUINT8                                      255U
#define COM_MAX_RXTOUTCNT                                             255U
#define COM_MAX_RXTPBUFFER                                            255U
#define COM_MAX_RXTPSDULENGTH                                         65535U
#define COM_MAX_RXTPWRITTENBYTESCOUNTER                               65535U
#define COM_MAX_SIGGRPEVENTFLAG                                       255U
#define COM_MAX_TMPRXBUFFER                                           255U
#define COM_MAX_TMPRXSHDBUFFERARRAYBASED                              255U
#define COM_MAX_TMPRXSHDBUFFERUINT16                                  65535U
#define COM_MAX_TMPRXSHDBUFFERUINT32                                  4294967295UL
#define COM_MAX_TMPRXSHDBUFFERUINT8                                   255U
#define COM_MAX_TXBUFFER                                              255U
#define COM_MAX_TXCYCLICPROCESSINGISRLOCKCOUNTER                      65535U
#define COM_MAX_TXDEADLINEMONITORINGISRLOCKCOUNTER                    65535U
#define COM_MAX_TXDYNSIGNALLENGTH                                     65535U
#define COM_MAX_TXFILTEROLDVALUEUINT16                                65535U
#define COM_MAX_TXFILTEROLDVALUEUINT8                                 255U
#define COM_MAX_TXIPDUGROUPISRLOCKCOUNTER                             65535U
#define COM_MAX_TXPROCESSINGISRLOCKCOUNTER                            65535U
#define COM_MAX_TXSDULENGTH                                           65535U
#define COM_MAX_TXTOUTCNT                                             255U
#define COM_MAX_TXTMPTPPDULENGTH                                      65535U
#define COM_MAX_TXTPSDULENGTH                                         65535U
#define COM_MAX_TXTPWRITTENBYTESCOUNTER                               65535U
/** 
  \}
*/ 

/** 
  \defgroup  ComPCNoReferenceDefines  Com No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define COM_NO_GWSIGGRPMAPPINGENDIDXOFGWINFO                          255U
#define COM_NO_GWSIGGRPMAPPINGSTARTIDXOFGWINFO                        255U
#define COM_NO_GWSIGMAPPINGENDIDXOFGWINFO                             255U
#define COM_NO_GWSIGMAPPINGSTARTIDXOFGWINFO                           255U
#define COM_NO_BUFFERIDXOFRXACCESSINFO                                65535U
#define COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO      255U
#define COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO    255U
#define COM_NO_GWINFOIDXOFRXACCESSINFO                                255U
#define COM_NO_INITVALUEIDXOFRXACCESSINFO                             255U
#define COM_NO_ROUTINGBUFFERIDXOFRXACCESSINFO                         65535U
#define COM_NO_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO        255U
#define COM_NO_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO        65535U
#define COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO      65535U
#define COM_NO_RXSIGBUFFERARRAYBASEDROUTINGBUFFERENDIDXOFRXACCESSINFO 65535U
#define COM_NO_RXSIGBUFFERARRAYBASEDROUTINGBUFFERSTARTIDXOFRXACCESSINFO 65535U
#define COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO     65535U
#define COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO   65535U
#define COM_NO_RXTOUTINFOIDXOFRXACCESSINFO                            255U
#define COM_NO_SHDBUFFERIDXOFRXACCESSINFO                             65535U
#define COM_NO_TMPBUFFERIDXOFRXACCESSINFO                             255U
#define COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO  255U
#define COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO 255U
#define COM_NO_PDUGRPVECTORENDIDXOFRXPDUGRPINFO                       255U
#define COM_NO_PDUGRPVECTORSTARTIDXOFRXPDUGRPINFO                     255U
#define COM_NO_GWINFOENDIDXOFRXPDUINFO                                255U
#define COM_NO_GWINFOSTARTIDXOFRXPDUINFO                              255U
#define COM_NO_HANDLERXPDUDEFERREDIDXOFRXPDUINFO                      255U
#define COM_NO_RXACCESSINFOINDENDIDXOFRXPDUINFO                       65535U
#define COM_NO_RXACCESSINFOINDSTARTIDXOFRXPDUINFO                     65535U
#define COM_NO_RXDEFPDUBUFFERENDIDXOFRXPDUINFO                        65535U
#define COM_NO_RXDEFPDUBUFFERSTARTIDXOFRXPDUINFO                      65535U
#define COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO                       255U
#define COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO                     255U
#define COM_NO_RXSIGINFOENDIDXOFRXPDUINFO                             65535U
#define COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO                           65535U
#define COM_NO_RXTOUTINFOIDXOFRXPDUINFO                               255U
#define COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO                         255U
#define COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO                       255U
#define COM_NO_RXTPINFOIDXOFRXPDUINFO                                 255U
#define COM_NO_GWINFOIDXOFRXSIGGRPINFO                                255U
#define COM_NO_RXACCESSINFOGRPSIGINDENDIDXOFRXSIGGRPINFO              255U
#define COM_NO_RXACCESSINFOGRPSIGINDSTARTIDXOFRXSIGGRPINFO            255U
#define COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGGRPINFO                       255U
#define COM_NO_UBIDXOFRXSIGGRPINFO                                    255U
#define COM_NO_UBMASKIDXOFRXSIGGRPINFO                                255U
#define COM_NO_GWINFOIDXOFRXSIGINFO                                   255U
#define COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO                          255U
#define COM_NO_RXTOUTINFOIDXOFRXSIGINFO                               255U
#define COM_NO_UBIDXOFRXSIGINFO                                       255U
#define COM_NO_UBMASKIDXOFRXSIGINFO                                   255U
#define COM_NO_CBKRXTOUTFUNCPTRINDENDIDXOFRXTOUTINFO                  255U
#define COM_NO_CBKRXTOUTFUNCPTRINDSTARTIDXOFRXTOUTINFO                255U
#define COM_NO_RXACCESSINFODYNSIGIDXOFRXTPINFO                        65535U
#define COM_NO_RXTPBUFFERENDIDXOFRXTPINFO                             65535U
#define COM_NO_RXTPBUFFERSTARTIDXOFRXTPINFO                           65535U
#define COM_NO_TXMODEFALSEIDXOFTXMODEINFO                             255U
#define COM_NO_TXMODETRUEIDXOFTXMODEINFO                              255U
#define COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO          255U
#define COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO        255U
#define COM_NO_PDUGRPVECTORENDIDXOFTXPDUGRPINFO                       255U
#define COM_NO_PDUGRPVECTORSTARTIDXOFTXPDUGRPINFO                     255U
#define COM_NO_CONSTVALUEUINT8UBCLEARMASKENDIDXOFTXPDUINFO            255U
#define COM_NO_CONSTVALUEUINT8UBCLEARMASKSTARTIDXOFTXPDUINFO          255U
#define COM_NO_TXBUFFERENDIDXOFTXPDUINFO                              65535U
#define COM_NO_TXBUFFERMETADATAENDIDXOFTXPDUINFO                      65535U
#define COM_NO_TXBUFFERMETADATASTARTIDXOFTXPDUINFO                    65535U
#define COM_NO_TXBUFFERSTARTIDXOFTXPDUINFO                            65535U
#define COM_NO_TXPDUINITVALUEENDIDXOFTXPDUINFO                        65535U
#define COM_NO_TXPDUINITVALUEMETADATAENDIDXOFTXPDUINFO                65535U
#define COM_NO_TXPDUINITVALUEMETADATASTARTIDXOFTXPDUINFO              65535U
#define COM_NO_TXPDUINITVALUESTARTIDXOFTXPDUINFO                      65535U
#define COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO                       255U
#define COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO                     255U
#define COM_NO_TXTOUTINFOIDXOFTXPDUINFO                               255U
#define COM_NO_TXTPINFOIDXOFTXPDUINFO                                 255U
#define COM_NO_TXBUFFERENDIDXOFTXSIGGRPINFO                           65535U
#define COM_NO_TXBUFFERSTARTIDXOFTXSIGGRPINFO                         65535U
#define COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGGRPINFO               65535U
#define COM_NO_TXSIGGRPMASKENDIDXOFTXSIGGRPINFO                       255U
#define COM_NO_TXSIGGRPMASKSTARTIDXOFTXSIGGRPINFO                     255U
#define COM_NO_UBMASKIDXOFTXSIGGRPINFO                                255U
#define COM_NO_FILTERINITVALUEIDXOFTXSIGINFO                          255U
#define COM_NO_ONCHANGEIDXOFTXSIGINFO                                 255U
#define COM_NO_TXBUFFERENDIDXOFTXSIGINFO                              65535U
#define COM_NO_TXBUFFERSTARTIDXOFTXSIGINFO                            65535U
#define COM_NO_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO                  65535U
#define COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO                             255U
#define COM_NO_UBMASKIDXOFTXSIGINFO                                   255U
#define COM_NO_CBKTXTOUTFUNCPTRINDENDIDXOFTXTOUTINFO                  255U
#define COM_NO_CBKTXTOUTFUNCPTRINDSTARTIDXOFTXTOUTINFO                255U
#define COM_NO_TXBUFFERENDIDXOFTXTPINFO                               65535U
#define COM_NO_TXBUFFERSTARTIDXOFTXTPINFO                             65535U
#define COM_NO_TXSIGINFODYNSIGIDXOFTXTPINFO                           65535U
/** 
  \}
*/ 

/** 
  \defgroup  ComPCEnumExistsDefines  Com Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_FLOAT32              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_FLOAT32               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_FLOAT32 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_FLOAT32 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_FLOAT32 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_FLOAT32      STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_FLOAT32       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_FLOAT32                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_FLOAT64              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_FLOAT64               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_FLOAT64 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_FLOAT64 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_FLOAT64 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_FLOAT64      STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_FLOAT64       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_FLOAT64                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_Float64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_SINT16               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_SINT16                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT16 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT16 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT16  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT16       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT16        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_SINT16                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt16.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_SINT32               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_SINT32                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT32 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT32 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT32  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT32       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT32        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_SINT32                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_SINT64               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_SINT64                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT64 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT64 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT64  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT64       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT64        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_SINT64                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_SINT8                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_SINT8                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_SINT8 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_SINT8  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_SINT8   STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_SINT8        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_SINT8         STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_SINT8                  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_SInt8.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_UINT16               STD_OFF
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_UINT16                STD_OFF
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT16 STD_ON
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT16 STD_OFF
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT16  STD_OFF
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT16       STD_OFF
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT16        STD_OFF
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_UINT16                 STD_OFF
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_UINT32               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_UINT32                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT32 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT32 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT32  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT32       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT32        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_UINT32                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt32.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_UINT64               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_UINT64                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT64 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT64 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT64  STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT64       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT64        STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_UINT64                 STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt64.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_UINT8                STD_OFF
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_UINT8                 STD_OFF
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT8 STD_ON
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT8  STD_OFF
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT8   STD_OFF
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT8        STD_OFF
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT8         STD_OFF
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_UINT8                  STD_OFF
#define COM_EXISTS_ALWAYS_FILTERALGOOFFILTERINFO_UINT8_N              STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO_UINT8_N               STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT8_N STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO_UINT8_N STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO_UINT8_N STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO_UINT8_N      STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO_UINT8_N       STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_NONE_FILTERALGOOFFILTERINFO_UINT8_N                STD_OFF  /**< Deactivateable: 'Com_FilterInfo_UInt8_N.FilterAlgo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_DIRECT_COPYTYPEOFGWDESCRIPTIONACCESSINFO           STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.CopyType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_RIGHTSHIFT_COPYTYPEOFGWDESCRIPTIONACCESSINFO       STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.CopyType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_LEFTSHIFT_COPYTYPEOFGWDESCRIPTIONACCESSINFO        STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.CopyType' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_BIG_ENDIAN_ENDIANNESSOFGWDESCRIPTIONACCESSINFO     STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Endianness' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_LITTLE_ENDIAN_ENDIANNESSOFGWDESCRIPTIONACCESSINFO  STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Endianness' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_IMMEDIATE_PENDING_TYPEOFGWDESCRIPTIONACCESSINFO    STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_IMMEDIATE_TRIGGERED_TYPEOFGWDESCRIPTIONACCESSINFO  STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_IMMEDIATE_TRIGGERED_ONCHANGE_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_IMMEDIATE_TRIGGERED_ONCHANGE_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_IMMEDIATE_TRIGGERED_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_DEFERRED_PENDING_TYPEOFGWDESCRIPTIONACCESSINFO     STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_DEFERRED_TRIGGERED_TYPEOFGWDESCRIPTIONACCESSINFO   STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_DEFERRED_TRIGGERED_ONCHANGE_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_DEFERRED_TRIGGERED_ONCHANGE_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_DEFERRED_TRIGGERED_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_EXISTS_UINT8_APPLTYPEOFRXACCESSINFO                       STD_ON
#define COM_EXISTS_SINT8_APPLTYPEOFRXACCESSINFO                       STD_OFF
#define COM_EXISTS_UINT16_APPLTYPEOFRXACCESSINFO                      STD_ON
#define COM_EXISTS_SINT16_APPLTYPEOFRXACCESSINFO                      STD_ON
#define COM_EXISTS_UINT32_APPLTYPEOFRXACCESSINFO                      STD_ON
#define COM_EXISTS_SINT32_APPLTYPEOFRXACCESSINFO                      STD_OFF
#define COM_EXISTS_UINT64_APPLTYPEOFRXACCESSINFO                      STD_OFF
#define COM_EXISTS_SINT64_APPLTYPEOFRXACCESSINFO                      STD_OFF
#define COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO                     STD_ON
#define COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO                   STD_ON
#define COM_EXISTS_ZEROBIT_APPLTYPEOFRXACCESSINFO                     STD_OFF
#define COM_EXISTS_FLOAT32_APPLTYPEOFRXACCESSINFO                     STD_OFF
#define COM_EXISTS_FLOAT64_APPLTYPEOFRXACCESSINFO                     STD_OFF
#define COM_EXISTS_NBIT_BUSACCOFRXACCESSINFO                          STD_ON
#define COM_EXISTS_BYTE_BUSACCOFRXACCESSINFO                          STD_ON
#define COM_EXISTS_NBYTE_BUSACCOFRXACCESSINFO                         STD_OFF
#define COM_EXISTS_NBYTE_SW_BUSACCOFRXACCESSINFO                      STD_ON
#define COM_EXISTS_NBITNBYTE_BUSACCOFRXACCESSINFO                     STD_OFF
#define COM_EXISTS_NBITNBYTE_SW_BUSACCOFRXACCESSINFO                  STD_ON
#define COM_EXISTS_ARRAY_BASED_BUSACCOFRXACCESSINFO                   STD_ON
#define COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO               STD_ON
#define COM_EXISTS_IMMEDIATE_SIGNALPROCESSINGOFRXPDUINFO              STD_OFF
#define COM_EXISTS_NORMAL_TYPEOFRXPDUINFO                             STD_ON
#define COM_EXISTS_TP_TYPEOFRXPDUINFO                                 STD_ON
#define COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO            STD_ON
#define COM_EXISTS_IMMEDIATE_SIGNALPROCESSINGOFRXSIGGRPINFO           STD_OFF
#define COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO               STD_ON
#define COM_EXISTS_IMMEDIATE_SIGNALPROCESSINGOFRXSIGINFO              STD_OFF
#define COM_EXISTS_ALWAYS_FILTERALGOOFSIGGRPARRAYFILTERINFO           STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_NEVER_FILTERALGOOFSIGGRPARRAYFILTERINFO            STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFSIGGRPARRAYFILTERINFO STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFSIGGRPARRAYFILTERINFO STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFSIGGRPARRAYFILTERINFO STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFSIGGRPARRAYFILTERINFO   STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFSIGGRPARRAYFILTERINFO    STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_NONE_FILTERALGOOFSIGGRPARRAYFILTERINFO             STD_OFF  /**< Deactivateable: 'Com_SigGrpArrayFilterInfo.FilterAlgo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_EXISTS_TRANSMIT_CLRUBOFTXPDUINFO                          STD_ON
#define COM_EXISTS_TRIGGER_TRANSMIT_CLRUBOFTXPDUINFO                  STD_OFF
#define COM_EXISTS_NOT_USED_CLRUBOFTXPDUINFO                          STD_ON
#define COM_EXISTS_CONFIRMATION_CLRUBOFTXPDUINFO                      STD_ON
#define COM_EXISTS_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO             STD_ON
#define COM_EXISTS_TRIGGERED_TRANSFERPROPERTYOFTXSIGGRPINFO           STD_OFF
#define COM_EXISTS_TRIGGERED_WITHOUT_REPETITION_TRANSFERPROPERTYOFTXSIGGRPINFO STD_OFF
#define COM_EXISTS_TRIGGERED_ON_CHANGE_TRANSFERPROPERTYOFTXSIGGRPINFO STD_OFF
#define COM_EXISTS_TRIGGERED_ON_CHANGE_WITHOUT_REPETITION_TRANSFERPROPERTYOFTXSIGGRPINFO STD_OFF
#define COM_EXISTS_UINT8_APPLTYPEOFTXSIGINFO                          STD_ON
#define COM_EXISTS_SINT8_APPLTYPEOFTXSIGINFO                          STD_ON
#define COM_EXISTS_UINT16_APPLTYPEOFTXSIGINFO                         STD_ON
#define COM_EXISTS_SINT16_APPLTYPEOFTXSIGINFO                         STD_ON
#define COM_EXISTS_UINT32_APPLTYPEOFTXSIGINFO                         STD_ON
#define COM_EXISTS_SINT32_APPLTYPEOFTXSIGINFO                         STD_OFF
#define COM_EXISTS_UINT64_APPLTYPEOFTXSIGINFO                         STD_OFF
#define COM_EXISTS_SINT64_APPLTYPEOFTXSIGINFO                         STD_OFF
#define COM_EXISTS_UINT8_N_APPLTYPEOFTXSIGINFO                        STD_ON
#define COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO                      STD_ON
#define COM_EXISTS_ZEROBIT_APPLTYPEOFTXSIGINFO                        STD_OFF
#define COM_EXISTS_FLOAT32_APPLTYPEOFTXSIGINFO                        STD_OFF
#define COM_EXISTS_FLOAT64_APPLTYPEOFTXSIGINFO                        STD_OFF
#define COM_EXISTS_NBIT_BUSACCOFTXSIGINFO                             STD_ON
#define COM_EXISTS_BYTE_BUSACCOFTXSIGINFO                             STD_ON
#define COM_EXISTS_NBYTE_BUSACCOFTXSIGINFO                            STD_OFF
#define COM_EXISTS_NBYTE_SW_BUSACCOFTXSIGINFO                         STD_ON
#define COM_EXISTS_NBITNBYTE_BUSACCOFTXSIGINFO                        STD_OFF
#define COM_EXISTS_NBITNBYTE_SW_BUSACCOFTXSIGINFO                     STD_ON
#define COM_EXISTS_ARRAY_BASED_BUSACCOFTXSIGINFO                      STD_ON
#define COM_EXISTS_NORMAL_MODEOFTXTOUTINFO                            STD_OFF
#define COM_EXISTS_NONE_MODEOFTXTOUTINFO                              STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  ComPCEnumDefines  Com Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define COM_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT16 0x02U
#define COM_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO_UINT8 0x02U
#define COM_UINT8_APPLTYPEOFRXACCESSINFO                              0x00U
#define COM_UINT16_APPLTYPEOFRXACCESSINFO                             0x02U
#define COM_SINT16_APPLTYPEOFRXACCESSINFO                             0x03U
#define COM_UINT32_APPLTYPEOFRXACCESSINFO                             0x04U
#define COM_UINT8_N_APPLTYPEOFRXACCESSINFO                            0x08U
#define COM_UINT8_DYN_APPLTYPEOFRXACCESSINFO                          0x09U
#define COM_NBIT_BUSACCOFRXACCESSINFO                                 0x00U
#define COM_BYTE_BUSACCOFRXACCESSINFO                                 0x01U
#define COM_NBYTE_SW_BUSACCOFRXACCESSINFO                             0x03U
#define COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO                         0x05U
#define COM_ARRAY_BASED_BUSACCOFRXACCESSINFO                          0x06U
#define COM_INACTIVE_RXPDUDMSTATE                                     0x00U
#define COM_ACTIVE_RXPDUDMSTATE                                       0x01U
#define COM_PURE_DM_STATE_MASK_RXPDUDMSTATE                           0x01U
#define COM_OCCURRED_RXPDUDMSTATE                                     0x03U
#define COM_OCCURRED_FLAG_RXPDUDMSTATE                                0x02U
#define COM_CLEAR_OCCURRED_FLAG_RXPDUDMSTATE                          0xFDU
#define COM_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO                      0x00U
#define COM_NORMAL_TYPEOFRXPDUINFO                                    0x00U
#define COM_TP_TYPEOFRXPDUINFO                                        0x01U
#define COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO                   0x00U
#define COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO                      0x00U
#define COM_READY_RXTPCONNECTIONSTATE                                 0x00U
#define COM_RECEPTION_STARTED_RXTPCONNECTIONSTATE                     0x01U
#define COM_COPYING_RXTPCONNECTIONSTATE                               0x02U
#define COM_WAITING_FOR_INDICATION_RXTPCONNECTIONSTATE                0x03U
#define COM_TP_ERROR_RXTPCONNECTIONSTATE                              0x04U
#define COM_TRANSMIT_CLRUBOFTXPDUINFO                                 0x00U
#define COM_NOT_USED_CLRUBOFTXPDUINFO                                 0x02U
#define COM_CONFIRMATION_CLRUBOFTXPDUINFO                             0x03U
#define COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO                    0x00U
#define COM_UINT8_APPLTYPEOFTXSIGINFO                                 0x00U
#define COM_SINT8_APPLTYPEOFTXSIGINFO                                 0x01U
#define COM_UINT16_APPLTYPEOFTXSIGINFO                                0x02U
#define COM_SINT16_APPLTYPEOFTXSIGINFO                                0x03U
#define COM_UINT32_APPLTYPEOFTXSIGINFO                                0x04U
#define COM_UINT8_N_APPLTYPEOFTXSIGINFO                               0x08U
#define COM_UINT8_DYN_APPLTYPEOFTXSIGINFO                             0x09U
#define COM_NBIT_BUSACCOFTXSIGINFO                                    0x00U
#define COM_BYTE_BUSACCOFTXSIGINFO                                    0x01U
#define COM_NBYTE_SW_BUSACCOFTXSIGINFO                                0x03U
#define COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO                            0x05U
#define COM_ARRAY_BASED_BUSACCOFTXSIGINFO                             0x06U
#define COM_NONE_MODEOFTXTOUTINFO                                     0x01U
#define COM_READY_TXTPCONNECTIONSTATE                                 0x00U
#define COM_TRANSMISSION_STARTED_TXTPCONNECTIONSTATE                  0x01U
#define COM_COPYING_TXTPCONNECTIONSTATE                               0x02U
#define COM_WAITING_FOR_CONFIRMATION_TXTPCONNECTIONSTATE              0x03U
#define COM_TP_ERROR_TXTPCONNECTIONSTATE                              0x04U
/** 
  \}
*/ 

/** 
  \defgroup  ComPCIsReducedToDefineDefines  Com Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define COM_ISDEF_RXPDUINFOIDXOFACTIVATABLERXCOMIPDUS                 STD_OFF
#define COM_ISDEF_TXPDUINFOIDXOFACTIVATABLETXCOMIPDUS                 STD_OFF
#define COM_ISDEF_CBKRXTOUTFUNCPTR                                    STD_OFF
#define COM_ISDEF_CBKRXTOUTFUNCPTRIND                                 STD_OFF
#define COM_ISDEF_CBKTXTOUTFUNCPTR                                    STD_OFF
#define COM_ISDEF_CBKTXTOUTFUNCPTRIND                                 STD_OFF
#define COM_ISDEF_CONSTVALUEARRAYBASED                                STD_OFF
#define COM_ISDEF_CONSTVALUESINT16                                    STD_OFF
#define COM_ISDEF_CONSTVALUEUINT16                                    STD_OFF
#define COM_ISDEF_CONSTVALUEUINT32                                    STD_OFF
#define COM_ISDEF_CONSTVALUEUINT8                                     STD_OFF
#define COM_ISDEF_FILTERALGOOFFILTERINFO_UINT16                       STD_OFF
#define COM_ISDEF_FILTERMASKOFFILTERINFO_UINT16                       STD_OFF
#define COM_ISDEF_FILTERMAXOFFILTERINFO_UINT16                        STD_OFF
#define COM_ISDEF_FILTERMINOFFILTERINFO_UINT16                        STD_OFF
#define COM_ISDEF_FILTERXOFFILTERINFO_UINT16                          STD_OFF
#define COM_ISDEF_FILTERALGOOFFILTERINFO_UINT8                        STD_OFF
#define COM_ISDEF_FILTERMASKOFFILTERINFO_UINT8                        STD_OFF
#define COM_ISDEF_FILTERMAXOFFILTERINFO_UINT8                         STD_OFF
#define COM_ISDEF_FILTERMINOFFILTERINFO_UINT8                         STD_OFF
#define COM_ISDEF_FILTERXOFFILTERINFO_UINT8                           STD_OFF
#define COM_ISDEF_RXACCESSINFOIDXOFGWGRPSIGMAPPING                    STD_OFF
#define COM_ISDEF_TXSIGIDOFGWGRPSIGMAPPING                            STD_OFF
#define COM_ISDEF_GWSIGGRPMAPPINGENDIDXOFGWINFO                       STD_OFF
#define COM_ISDEF_GWSIGGRPMAPPINGSTARTIDXOFGWINFO                     STD_OFF
#define COM_ISDEF_GWSIGGRPMAPPINGUSEDOFGWINFO                         STD_OFF
#define COM_ISDEF_GWSIGMAPPINGENDIDXOFGWINFO                          STD_OFF
#define COM_ISDEF_GWSIGMAPPINGSTARTIDXOFGWINFO                        STD_OFF
#define COM_ISDEF_GWSIGMAPPINGUSEDOFGWINFO                            STD_OFF
#define COM_ISDEF_GWGRPSIGMAPPINGENDIDXOFGWSIGGRPMAPPING              STD_OFF
#define COM_ISDEF_GWGRPSIGMAPPINGSTARTIDXOFGWSIGGRPMAPPING            STD_OFF
#define COM_ISDEF_TXSIGGRPIDOFGWSIGGRPMAPPING                         STD_OFF
#define COM_ISDEF_RXACCESSINFOIDXOFGWSIGMAPPING                       STD_OFF
#define COM_ISDEF_TXSIGIDOFGWSIGMAPPING                               STD_OFF
#define COM_ISDEF_PDUGRPVECTOR                                        STD_OFF
#define COM_ISDEF_APPLTYPEOFRXACCESSINFO                              STD_OFF
#define COM_ISDEF_BITLENGTHOFRXACCESSINFO                             STD_OFF
#define COM_ISDEF_BITPOSITIONOFRXACCESSINFO                           STD_OFF
#define COM_ISDEF_BUFFERIDXOFRXACCESSINFO                             STD_OFF
#define COM_ISDEF_BUFFERUSEDOFRXACCESSINFO                            STD_OFF
#define COM_ISDEF_BUSACCOFRXACCESSINFO                                STD_OFF
#define COM_ISDEF_BYTELENGTHOFRXACCESSINFO                            STD_OFF
#define COM_ISDEF_BYTEPOSITIONOFRXACCESSINFO                          STD_OFF
#define COM_ISDEF_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO   STD_OFF
#define COM_ISDEF_CONSTVALUEARRAYBASEDINITVALUELENGTHOFRXACCESSINFO   STD_OFF
#define COM_ISDEF_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO STD_OFF
#define COM_ISDEF_CONSTVALUEARRAYBASEDINITVALUEUSEDOFRXACCESSINFO     STD_OFF
#define COM_ISDEF_GWINFOIDXOFRXACCESSINFO                             STD_OFF
#define COM_ISDEF_GWINFOUSEDOFRXACCESSINFO                            STD_OFF
#define COM_ISDEF_INITVALUEIDXOFRXACCESSINFO                          STD_OFF
#define COM_ISDEF_INITVALUEUSEDOFRXACCESSINFO                         STD_OFF
#define COM_ISDEF_ISGROUPSIGNALOFRXACCESSINFO                         STD_OFF
#define COM_ISDEF_ROUTINGBUFFERIDXOFRXACCESSINFO                      STD_OFF
#define COM_ISDEF_ROUTINGBUFFERUSEDOFRXACCESSINFO                     STD_OFF
#define COM_ISDEF_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO     STD_OFF
#define COM_ISDEF_RXDATATIMEOUTSUBSTITUTIONVALUEUSEDOFRXACCESSINFO    STD_OFF
#define COM_ISDEF_RXPDUINFOIDXOFRXACCESSINFO                          STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO     STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDBUFFERLENGTHOFRXACCESSINFO     STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO   STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDBUFFERUSEDOFRXACCESSINFO       STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDROUTINGBUFFERENDIDXOFRXACCESSINFO STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDROUTINGBUFFERLENGTHOFRXACCESSINFO STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDROUTINGBUFFERSTARTIDXOFRXACCESSINFO STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDROUTINGBUFFERUSEDOFRXACCESSINFO STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO  STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDSHDBUFFERLENGTHOFRXACCESSINFO  STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO STD_OFF
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO    STD_OFF
#define COM_ISDEF_RXTOUTINFOIDXOFRXACCESSINFO                         STD_OFF
#define COM_ISDEF_RXTOUTINFOUSEDOFRXACCESSINFO                        STD_OFF
#define COM_ISDEF_SHDBUFFERIDXOFRXACCESSINFO                          STD_OFF
#define COM_ISDEF_SHDBUFFERUSEDOFRXACCESSINFO                         STD_OFF
#define COM_ISDEF_SIGNEXTREQUIREDOFRXACCESSINFO                       STD_OFF
#define COM_ISDEF_STARTBYTEINPDUPOSITIONOFRXACCESSINFO                STD_OFF
#define COM_ISDEF_TMPBUFFERIDXOFRXACCESSINFO                          STD_OFF
#define COM_ISDEF_TMPBUFFERUSEDOFRXACCESSINFO                         STD_OFF
#define COM_ISDEF_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO STD_OFF
#define COM_ISDEF_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERLENGTHOFRXACCESSINFO STD_OFF
#define COM_ISDEF_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO STD_OFF
#define COM_ISDEF_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERUSEDOFRXACCESSINFO STD_OFF
#define COM_ISDEF_RXACCESSINFOGRPSIGIND                               STD_OFF
#define COM_ISDEF_RXACCESSINFOIND                                     STD_OFF
#define COM_ISDEF_RXCBKFUNCPTR                                        STD_OFF
#define COM_ISDEF_PDUGRPVECTORENDIDXOFRXPDUGRPINFO                    STD_OFF
#define COM_ISDEF_PDUGRPVECTORSTARTIDXOFRXPDUGRPINFO                  STD_OFF
#define COM_ISDEF_PDUGRPVECTORUSEDOFRXPDUGRPINFO                      STD_OFF
#define COM_ISDEF_GWINFOENDIDXOFRXPDUINFO                             STD_OFF
#define COM_ISDEF_GWINFOSTARTIDXOFRXPDUINFO                           STD_OFF
#define COM_ISDEF_GWINFOUSEDOFRXPDUINFO                               STD_OFF
#define COM_ISDEF_HANDLERXPDUDEFERREDIDXOFRXPDUINFO                   STD_OFF
#define COM_ISDEF_HANDLERXPDUDEFERREDUSEDOFRXPDUINFO                  STD_OFF
#define COM_ISDEF_RXACCESSINFOINDENDIDXOFRXPDUINFO                    STD_OFF
#define COM_ISDEF_RXACCESSINFOINDSTARTIDXOFRXPDUINFO                  STD_OFF
#define COM_ISDEF_RXACCESSINFOINDUSEDOFRXPDUINFO                      STD_OFF
#define COM_ISDEF_RXDEFPDUBUFFERENDIDXOFRXPDUINFO                     STD_OFF
#define COM_ISDEF_RXDEFPDUBUFFERLENGTHOFRXPDUINFO                     STD_OFF
#define COM_ISDEF_RXDEFPDUBUFFERSTARTIDXOFRXPDUINFO                   STD_OFF
#define COM_ISDEF_RXDEFPDUBUFFERUSEDOFRXPDUINFO                       STD_OFF
#define COM_ISDEF_RXSIGGRPINFOINDENDIDXOFRXPDUINFO                    STD_OFF
#define COM_ISDEF_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO                  STD_OFF
#define COM_ISDEF_RXSIGGRPINFOINDUSEDOFRXPDUINFO                      STD_OFF
#define COM_ISDEF_RXSIGINFOENDIDXOFRXPDUINFO                          STD_OFF
#define COM_ISDEF_RXSIGINFOSTARTIDXOFRXPDUINFO                        STD_OFF
#define COM_ISDEF_RXSIGINFOUSEDOFRXPDUINFO                            STD_OFF
#define COM_ISDEF_RXTOUTINFOIDXOFRXPDUINFO                            STD_OFF
#define COM_ISDEF_RXTOUTINFOINDENDIDXOFRXPDUINFO                      STD_OFF
#define COM_ISDEF_RXTOUTINFOINDSTARTIDXOFRXPDUINFO                    STD_OFF
#define COM_ISDEF_RXTOUTINFOINDUSEDOFRXPDUINFO                        STD_OFF
#define COM_ISDEF_RXTOUTINFOUSEDOFRXPDUINFO                           STD_OFF
#define COM_ISDEF_RXTPINFOIDXOFRXPDUINFO                              STD_OFF
#define COM_ISDEF_RXTPINFOUSEDOFRXPDUINFO                             STD_OFF
#define COM_ISDEF_SIGNALPROCESSINGOFRXPDUINFO                         STD_OFF
#define COM_ISDEF_TYPEOFRXPDUINFO                                     STD_OFF
#define COM_ISDEF_GWINFOIDXOFRXSIGGRPINFO                             STD_OFF
#define COM_ISDEF_GWINFOUSEDOFRXSIGGRPINFO                            STD_OFF
#define COM_ISDEF_RXACCESSINFOGRPSIGINDENDIDXOFRXSIGGRPINFO           STD_OFF
#define COM_ISDEF_RXACCESSINFOGRPSIGINDSTARTIDXOFRXSIGGRPINFO         STD_OFF
#define COM_ISDEF_RXACCESSINFOGRPSIGINDUSEDOFRXSIGGRPINFO             STD_OFF
#define COM_ISDEF_RXCBKFUNCPTRACKIDXOFRXSIGGRPINFO                    STD_OFF
#define COM_ISDEF_RXCBKFUNCPTRACKUSEDOFRXSIGGRPINFO                   STD_OFF
#define COM_ISDEF_RXPDUINFOIDXOFRXSIGGRPINFO                          STD_OFF
#define COM_ISDEF_SHDBUFFERREQUIREDOFRXSIGGRPINFO                     STD_OFF
#define COM_ISDEF_SIGNALPROCESSINGOFRXSIGGRPINFO                      STD_OFF
#define COM_ISDEF_STARTBYTEPOSITIONOFRXSIGGRPINFO                     STD_OFF
#define COM_ISDEF_UBIDXOFRXSIGGRPINFO                                 STD_OFF
#define COM_ISDEF_UBMASKIDXOFRXSIGGRPINFO                             STD_OFF
#define COM_ISDEF_UBMASKUSEDOFRXSIGGRPINFO                            STD_OFF
#define COM_ISDEF_VALIDDLCOFRXSIGGRPINFO                              STD_OFF
#define COM_ISDEF_RXSIGGRPINFOIND                                     STD_OFF
#define COM_ISDEF_GWINFOIDXOFRXSIGINFO                                STD_OFF
#define COM_ISDEF_GWINFOUSEDOFRXSIGINFO                               STD_OFF
#define COM_ISDEF_RXACCESSINFOIDXOFRXSIGINFO                          STD_OFF
#define COM_ISDEF_RXCBKFUNCPTRACKIDXOFRXSIGINFO                       STD_OFF
#define COM_ISDEF_RXCBKFUNCPTRACKUSEDOFRXSIGINFO                      STD_OFF
#define COM_ISDEF_RXTOUTINFOIDXOFRXSIGINFO                            STD_OFF
#define COM_ISDEF_RXTOUTINFOUSEDOFRXSIGINFO                           STD_OFF
#define COM_ISDEF_SIGNALPROCESSINGOFRXSIGINFO                         STD_OFF
#define COM_ISDEF_UBIDXOFRXSIGINFO                                    STD_OFF
#define COM_ISDEF_UBMASKIDXOFRXSIGINFO                                STD_OFF
#define COM_ISDEF_UBMASKUSEDOFRXSIGINFO                               STD_OFF
#define COM_ISDEF_VALIDDLCOFRXSIGINFO                                 STD_OFF
#define COM_ISDEF_CBKRXTOUTFUNCPTRINDENDIDXOFRXTOUTINFO               STD_OFF
#define COM_ISDEF_CBKRXTOUTFUNCPTRINDSTARTIDXOFRXTOUTINFO             STD_OFF
#define COM_ISDEF_CBKRXTOUTFUNCPTRINDUSEDOFRXTOUTINFO                 STD_OFF
#define COM_ISDEF_FACTOROFRXTOUTINFO                                  STD_OFF
#define COM_ISDEF_FIRSTFACTOROFRXTOUTINFO                             STD_OFF
#define COM_ISDEF_RXPDUINFOIDXOFRXTOUTINFO                            STD_OFF
#define COM_ISDEF_RXTOUTINFOIND                                       STD_OFF
#define COM_ISDEF_BUFFERSIZEOFRXTPINFO                                STD_OFF
#define COM_ISDEF_DYNAMICINITIALLENGTHOFRXTPINFO                      STD_OFF
#define COM_ISDEF_RXACCESSINFODYNSIGIDXOFRXTPINFO                     STD_OFF
#define COM_ISDEF_RXACCESSINFODYNSIGUSEDOFRXTPINFO                    STD_OFF
#define COM_ISDEF_RXTPBUFFERENDIDXOFRXTPINFO                          STD_OFF
#define COM_ISDEF_RXTPBUFFERSTARTIDXOFRXTPINFO                        STD_OFF
#define COM_ISDEF_RXTPBUFFERUSEDOFRXTPINFO                            STD_OFF
#define COM_ISDEF_TXFILTERINITVALUEUINT16                             STD_OFF
#define COM_ISDEF_TXFILTERINITVALUEUINT8                              STD_OFF
#define COM_ISDEF_DIRECTOFTXMODEFALSE                                 STD_OFF
#define COM_ISDEF_PERIODICOFTXMODEFALSE                               STD_OFF
#define COM_ISDEF_TIMEOFFSETOFTXMODEFALSE                             STD_OFF
#define COM_ISDEF_TIMEPERIODOFTXMODEFALSE                             STD_OFF
#define COM_ISDEF_INITMODEOFTXMODEINFO                                STD_OFF
#define COM_ISDEF_MINIMUMDELAYOFTXMODEINFO                            STD_OFF
#define COM_ISDEF_TXMODEFALSEIDXOFTXMODEINFO                          STD_OFF
#define COM_ISDEF_TXMODEFALSEUSEDOFTXMODEINFO                         STD_OFF
#define COM_ISDEF_TXMODETRUEIDXOFTXMODEINFO                           STD_OFF
#define COM_ISDEF_TXMODETRUEUSEDOFTXMODEINFO                          STD_OFF
#define COM_ISDEF_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO       STD_OFF
#define COM_ISDEF_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO     STD_OFF
#define COM_ISDEF_TXSIGINFOFILTERINITVALUEINDUSEDOFTXMODEINFO         STD_OFF
#define COM_ISDEF_DIRECTOFTXMODETRUE                                  STD_OFF
#define COM_ISDEF_PERIODICOFTXMODETRUE                                STD_OFF
#define COM_ISDEF_TIMEOFFSETOFTXMODETRUE                              STD_OFF
#define COM_ISDEF_TIMEPERIODOFTXMODETRUE                              STD_OFF
#define COM_ISDEF_PDUGRPVECTORENDIDXOFTXPDUGRPINFO                    STD_OFF
#define COM_ISDEF_PDUGRPVECTORSTARTIDXOFTXPDUGRPINFO                  STD_OFF
#define COM_ISDEF_PDUGRPVECTORUSEDOFTXPDUGRPINFO                      STD_OFF
#define COM_ISDEF_CLRUBOFTXPDUINFO                                    STD_OFF
#define COM_ISDEF_CONSTVALUEUINT8UBCLEARMASKENDIDXOFTXPDUINFO         STD_OFF
#define COM_ISDEF_CONSTVALUEUINT8UBCLEARMASKSTARTIDXOFTXPDUINFO       STD_OFF
#define COM_ISDEF_CONSTVALUEUINT8UBCLEARMASKUSEDOFTXPDUINFO           STD_OFF
#define COM_ISDEF_EXTERNALIDOFTXPDUINFO                               STD_OFF
#define COM_ISDEF_METADATALENGTHOFTXPDUINFO                           STD_OFF
#define COM_ISDEF_PDUWITHMETADATALENGTHOFTXPDUINFO                    STD_OFF
#define COM_ISDEF_TXBUFFERENDIDXOFTXPDUINFO                           STD_OFF
#define COM_ISDEF_TXBUFFERLENGTHOFTXPDUINFO                           STD_OFF
#define COM_ISDEF_TXBUFFERMETADATAENDIDXOFTXPDUINFO                   STD_OFF
#define COM_ISDEF_TXBUFFERMETADATALENGTHOFTXPDUINFO                   STD_OFF
#define COM_ISDEF_TXBUFFERMETADATASTARTIDXOFTXPDUINFO                 STD_OFF
#define COM_ISDEF_TXBUFFERMETADATAUSEDOFTXPDUINFO                     STD_OFF
#define COM_ISDEF_TXBUFFERSTARTIDXOFTXPDUINFO                         STD_OFF
#define COM_ISDEF_TXBUFFERUSEDOFTXPDUINFO                             STD_OFF
#define COM_ISDEF_TXPDUINITVALUEENDIDXOFTXPDUINFO                     STD_OFF
#define COM_ISDEF_TXPDUINITVALUEMETADATAENDIDXOFTXPDUINFO             STD_OFF
#define COM_ISDEF_TXPDUINITVALUEMETADATASTARTIDXOFTXPDUINFO           STD_OFF
#define COM_ISDEF_TXPDUINITVALUEMETADATAUSEDOFTXPDUINFO               STD_OFF
#define COM_ISDEF_TXPDUINITVALUESTARTIDXOFTXPDUINFO                   STD_OFF
#define COM_ISDEF_TXPDUINITVALUEUSEDOFTXPDUINFO                       STD_OFF
#define COM_ISDEF_TXSIGGRPINFOINDENDIDXOFTXPDUINFO                    STD_OFF
#define COM_ISDEF_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO                  STD_OFF
#define COM_ISDEF_TXSIGGRPINFOINDUSEDOFTXPDUINFO                      STD_OFF
#define COM_ISDEF_TXTOUTINFOIDXOFTXPDUINFO                            STD_OFF
#define COM_ISDEF_TXTOUTINFOUSEDOFTXPDUINFO                           STD_OFF
#define COM_ISDEF_TXTPINFOIDXOFTXPDUINFO                              STD_OFF
#define COM_ISDEF_TXTPINFOUSEDOFTXPDUINFO                             STD_OFF
#define COM_ISDEF_TXPDUINITVALUE                                      STD_OFF
#define COM_ISDEF_PDUOFFSETOFTXSIGGRPINFO                             STD_OFF
#define COM_ISDEF_TRANSFERPROPERTYOFTXSIGGRPINFO                      STD_OFF
#define COM_ISDEF_TXBUFFERENDIDXOFTXSIGGRPINFO                        STD_OFF
#define COM_ISDEF_TXBUFFERLENGTHOFTXSIGGRPINFO                        STD_OFF
#define COM_ISDEF_TXBUFFERSIGGRPINTXIPDUENDIDXOFTXSIGGRPINFO          STD_OFF
#define COM_ISDEF_TXBUFFERSIGGRPINTXIPDULENGTHOFTXSIGGRPINFO          STD_OFF
#define COM_ISDEF_TXBUFFERSIGGRPINTXIPDUSTARTIDXOFTXSIGGRPINFO        STD_OFF
#define COM_ISDEF_TXBUFFERSTARTIDXOFTXSIGGRPINFO                      STD_OFF
#define COM_ISDEF_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGGRPINFO            STD_OFF
#define COM_ISDEF_TXBUFFERUBIDXINTXBUFFERUSEDOFTXSIGGRPINFO           STD_OFF
#define COM_ISDEF_TXBUFFERUSEDOFTXSIGGRPINFO                          STD_OFF
#define COM_ISDEF_TXPDUINFOIDXOFTXSIGGRPINFO                          STD_OFF
#define COM_ISDEF_TXSIGGRPMASKENDIDXOFTXSIGGRPINFO                    STD_OFF
#define COM_ISDEF_TXSIGGRPMASKLENGTHOFTXSIGGRPINFO                    STD_OFF
#define COM_ISDEF_TXSIGGRPMASKSTARTIDXOFTXSIGGRPINFO                  STD_OFF
#define COM_ISDEF_TXSIGGRPMASKUSEDOFTXSIGGRPINFO                      STD_OFF
#define COM_ISDEF_UBMASKIDXOFTXSIGGRPINFO                             STD_OFF
#define COM_ISDEF_UBMASKUSEDOFTXSIGGRPINFO                            STD_OFF
#define COM_ISDEF_TXSIGGRPINFOIND                                     STD_OFF
#define COM_ISDEF_TXSIGGRPMASK                                        STD_OFF
#define COM_ISDEF_APPLTYPEOFTXSIGINFO                                 STD_OFF
#define COM_ISDEF_BITLENGTHOFTXSIGINFO                                STD_OFF
#define COM_ISDEF_BITPOSITIONOFTXSIGINFO                              STD_OFF
#define COM_ISDEF_BUSACCOFTXSIGINFO                                   STD_OFF
#define COM_ISDEF_BYTELENGTHOFTXSIGINFO                               STD_OFF
#define COM_ISDEF_BYTEPOSITIONOFTXSIGINFO                             STD_OFF
#define COM_ISDEF_FILTERINITVALUEIDXOFTXSIGINFO                       STD_OFF
#define COM_ISDEF_FILTERINITVALUEUSEDOFTXSIGINFO                      STD_OFF
#define COM_ISDEF_ONCHANGEIDXOFTXSIGINFO                              STD_OFF
#define COM_ISDEF_ONCHANGEUSEDOFTXSIGINFO                             STD_OFF
#define COM_ISDEF_STARTBYTEINPDUPOSITIONOFTXSIGINFO                   STD_OFF
#define COM_ISDEF_TRIGGEREDOFTXSIGINFO                                STD_OFF
#define COM_ISDEF_TXBUFFERENDIDXOFTXSIGINFO                           STD_OFF
#define COM_ISDEF_TXBUFFERLENGTHOFTXSIGINFO                           STD_OFF
#define COM_ISDEF_TXBUFFERSTARTIDXOFTXSIGINFO                         STD_OFF
#define COM_ISDEF_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO               STD_OFF
#define COM_ISDEF_TXBUFFERUBIDXINTXBUFFERUSEDOFTXSIGINFO              STD_OFF
#define COM_ISDEF_TXBUFFERUSEDOFTXSIGINFO                             STD_OFF
#define COM_ISDEF_TXPDUINFOIDXOFTXSIGINFO                             STD_OFF
#define COM_ISDEF_TXSIGGRPINFOIDXOFTXSIGINFO                          STD_OFF
#define COM_ISDEF_TXSIGGRPINFOUSEDOFTXSIGINFO                         STD_OFF
#define COM_ISDEF_UBMASKIDXOFTXSIGINFO                                STD_OFF
#define COM_ISDEF_UBMASKUSEDOFTXSIGINFO                               STD_OFF
#define COM_ISDEF_TXSIGINFOFILTERINITVALUEIND                         STD_OFF
#define COM_ISDEF_CBKTXTOUTFUNCPTRINDENDIDXOFTXTOUTINFO               STD_OFF
#define COM_ISDEF_CBKTXTOUTFUNCPTRINDSTARTIDXOFTXTOUTINFO             STD_OFF
#define COM_ISDEF_CBKTXTOUTFUNCPTRINDUSEDOFTXTOUTINFO                 STD_OFF
#define COM_ISDEF_FACTOROFTXTOUTINFO                                  STD_OFF
#define COM_ISDEF_MODEOFTXTOUTINFO                                    STD_OFF
#define COM_ISDEF_TXPDUINFOIDXOFTXTOUTINFO                            STD_OFF
#define COM_ISDEF_BUFFERSIZEOFTXTPINFO                                STD_OFF
#define COM_ISDEF_DYNAMICINITIALLENGTHOFTXTPINFO                      STD_OFF
#define COM_ISDEF_TXBUFFERENDIDXOFTXTPINFO                            STD_OFF
#define COM_ISDEF_TXBUFFERLENGTHOFTXTPINFO                            STD_OFF
#define COM_ISDEF_TXBUFFERSTARTIDXOFTXTPINFO                          STD_OFF
#define COM_ISDEF_TXBUFFERUSEDOFTXTPINFO                              STD_OFF
#define COM_ISDEF_TXSIGINFODYNSIGIDXOFTXTPINFO                        STD_OFF
#define COM_ISDEF_TXSIGINFODYNSIGUSEDOFTXTPINFO                       STD_OFF
#define COM_ISDEF_ACTIVATABLERXCOMIPDUSOFPCCONFIG                     STD_ON
#define COM_ISDEF_ACTIVATABLETXCOMIPDUSOFPCCONFIG                     STD_ON
#define COM_ISDEF_CBKRXTOUTFUNCPTRINDOFPCCONFIG                       STD_ON
#define COM_ISDEF_CBKRXTOUTFUNCPTROFPCCONFIG                          STD_ON
#define COM_ISDEF_CBKTXTOUTFUNCPTRINDOFPCCONFIG                       STD_ON
#define COM_ISDEF_CBKTXTOUTFUNCPTROFPCCONFIG                          STD_ON
#define COM_ISDEF_CONSTVALUEARRAYBASEDOFPCCONFIG                      STD_ON
#define COM_ISDEF_CONSTVALUESINT16OFPCCONFIG                          STD_ON
#define COM_ISDEF_CONSTVALUEUINT16OFPCCONFIG                          STD_ON
#define COM_ISDEF_CONSTVALUEUINT32OFPCCONFIG                          STD_ON
#define COM_ISDEF_CONSTVALUEUINT8OFPCCONFIG                           STD_ON
#define COM_ISDEF_CURRENTTXMODEOFPCCONFIG                             STD_ON
#define COM_ISDEF_CYCLETIMECNTOFPCCONFIG                              STD_ON
#define COM_ISDEF_CYCLICSENDREQUESTOFPCCONFIG                         STD_ON
#define COM_ISDEF_DELAYTIMECNTOFPCCONFIG                              STD_ON
#define COM_ISDEF_FILTERINFO_UINT16OFPCCONFIG                         STD_ON
#define COM_ISDEF_FILTERINFO_UINT8OFPCCONFIG                          STD_ON
#define COM_ISDEF_GATEWAYDESCRIPTIONPROCESSINGISRLOCKCOUNTEROFPCCONFIG STD_ON
#define COM_ISDEF_GATEWAYPROCESSINGISRLOCKCOUNTEROFPCCONFIG           STD_ON
#define COM_ISDEF_GWEVENTCACHEINDEXOFPCCONFIG                         STD_ON
#define COM_ISDEF_GWEVENTOFPCCONFIG                                   STD_ON
#define COM_ISDEF_GWGRPSIGMAPPINGOFPCCONFIG                           STD_ON
#define COM_ISDEF_GWINFOOFPCCONFIG                                    STD_ON
#define COM_ISDEF_GWSIGGRPMAPPINGOFPCCONFIG                           STD_ON
#define COM_ISDEF_GWSIGMAPPINGOFPCCONFIG                              STD_ON
#define COM_ISDEF_HANDLERXPDUDEFERREDOFPCCONFIG                       STD_ON
#define COM_ISDEF_HANDLETXPDUDEFERREDOFPCCONFIG                       STD_ON
#define COM_ISDEF_INITIALIZEDOFPCCONFIG                               STD_ON
#define COM_ISDEF_PDUGRPVECTOROFPCCONFIG                              STD_ON
#define COM_ISDEF_REPCNTOFPCCONFIG                                    STD_ON
#define COM_ISDEF_REPCYCLECNTOFPCCONFIG                               STD_ON
#define COM_ISDEF_RXACCESSINFOGRPSIGINDOFPCCONFIG                     STD_ON
#define COM_ISDEF_RXACCESSINFOINDOFPCCONFIG                           STD_ON
#define COM_ISDEF_RXACCESSINFOOFPCCONFIG                              STD_ON
#define COM_ISDEF_RXCBKFUNCPTROFPCCONFIG                              STD_ON
#define COM_ISDEF_RXDEADLINEMONITORINGISRLOCKCOUNTEROFPCCONFIG        STD_ON
#define COM_ISDEF_RXDEFPDUBUFFEROFPCCONFIG                            STD_ON
#define COM_ISDEF_RXDEFERREDFCTPTRCACHEOFPCCONFIG                     STD_ON
#define COM_ISDEF_RXDEFERREDPROCESSINGISRLOCKCOUNTEROFPCCONFIG        STD_ON
#define COM_ISDEF_RXDYNSIGNALLENGTHOFPCCONFIG                         STD_ON
#define COM_ISDEF_RXDYNSIGNALTMPLENGTHFORSIGNALGROUPSOFPCCONFIG       STD_ON
#define COM_ISDEF_RXIPDUGROUPISRLOCKCOUNTEROFPCCONFIG                 STD_ON
#define COM_ISDEF_RXPDUDMSTATEOFPCCONFIG                              STD_ON
#define COM_ISDEF_RXPDUGRPACTIVEOFPCCONFIG                            STD_ON
#define COM_ISDEF_RXPDUGRPINFOOFPCCONFIG                              STD_ON
#define COM_ISDEF_RXPDUINFOOFPCCONFIG                                 STD_ON
#define COM_ISDEF_RXSIGBUFFERARRAYBASEDOFPCCONFIG                     STD_ON
#define COM_ISDEF_RXSIGBUFFERSINT16OFPCCONFIG                         STD_ON
#define COM_ISDEF_RXSIGBUFFERUINT16OFPCCONFIG                         STD_ON
#define COM_ISDEF_RXSIGBUFFERUINT32OFPCCONFIG                         STD_ON
#define COM_ISDEF_RXSIGBUFFERUINT8OFPCCONFIG                          STD_ON
#define COM_ISDEF_RXSIGGRPINFOINDOFPCCONFIG                           STD_ON
#define COM_ISDEF_RXSIGGRPINFOOFPCCONFIG                              STD_ON
#define COM_ISDEF_RXSIGINFOOFPCCONFIG                                 STD_ON
#define COM_ISDEF_RXTOUTCNTOFPCCONFIG                                 STD_ON
#define COM_ISDEF_RXTOUTINFOINDOFPCCONFIG                             STD_ON
#define COM_ISDEF_RXTOUTINFOOFPCCONFIG                                STD_ON
#define COM_ISDEF_RXTPBUFFEROFPCCONFIG                                STD_ON
#define COM_ISDEF_RXTPCONNECTIONSTATEOFPCCONFIG                       STD_ON
#define COM_ISDEF_RXTPINFOOFPCCONFIG                                  STD_ON
#define COM_ISDEF_RXTPSDULENGTHOFPCCONFIG                             STD_ON
#define COM_ISDEF_RXTPWRITTENBYTESCOUNTEROFPCCONFIG                   STD_ON
#define COM_ISDEF_SIGGRPEVENTFLAGOFPCCONFIG                           STD_ON
#define COM_ISDEF_TMPRXBUFFEROFPCCONFIG                               STD_ON
#define COM_ISDEF_TMPRXSHDBUFFERARRAYBASEDOFPCCONFIG                  STD_ON
#define COM_ISDEF_TMPRXSHDBUFFERUINT16OFPCCONFIG                      STD_ON
#define COM_ISDEF_TMPRXSHDBUFFERUINT32OFPCCONFIG                      STD_ON
#define COM_ISDEF_TMPRXSHDBUFFERUINT8OFPCCONFIG                       STD_ON
#define COM_ISDEF_TRANSMITREQUESTOFPCCONFIG                           STD_ON
#define COM_ISDEF_TXBUFFEROFPCCONFIG                                  STD_ON
#define COM_ISDEF_TXCYCLICPROCESSINGISRLOCKCOUNTEROFPCCONFIG          STD_ON
#define COM_ISDEF_TXDEADLINEMONITORINGISRLOCKCOUNTEROFPCCONFIG        STD_ON
#define COM_ISDEF_TXDYNSIGNALLENGTHOFPCCONFIG                         STD_ON
#define COM_ISDEF_TXFILTERINITVALUEUINT16OFPCCONFIG                   STD_ON
#define COM_ISDEF_TXFILTERINITVALUEUINT8OFPCCONFIG                    STD_ON
#define COM_ISDEF_TXFILTEROLDVALUEUINT16OFPCCONFIG                    STD_ON
#define COM_ISDEF_TXFILTEROLDVALUEUINT8OFPCCONFIG                     STD_ON
#define COM_ISDEF_TXIPDUGROUPISRLOCKCOUNTEROFPCCONFIG                 STD_ON
#define COM_ISDEF_TXMODEFALSEOFPCCONFIG                               STD_ON
#define COM_ISDEF_TXMODEINFOOFPCCONFIG                                STD_ON
#define COM_ISDEF_TXMODETRUEOFPCCONFIG                                STD_ON
#define COM_ISDEF_TXPDUGRPACTIVEOFPCCONFIG                            STD_ON
#define COM_ISDEF_TXPDUGRPINFOOFPCCONFIG                              STD_ON
#define COM_ISDEF_TXPDUINFOOFPCCONFIG                                 STD_ON
#define COM_ISDEF_TXPDUINITVALUEOFPCCONFIG                            STD_ON
#define COM_ISDEF_TXPROCESSINGISRLOCKCOUNTEROFPCCONFIG                STD_ON
#define COM_ISDEF_TXSDULENGTHOFPCCONFIG                               STD_ON
#define COM_ISDEF_TXSIGGRPINFOINDOFPCCONFIG                           STD_ON
#define COM_ISDEF_TXSIGGRPINFOOFPCCONFIG                              STD_ON
#define COM_ISDEF_TXSIGGRPMASKOFPCCONFIG                              STD_ON
#define COM_ISDEF_TXSIGINFOFILTERINITVALUEINDOFPCCONFIG               STD_ON
#define COM_ISDEF_TXSIGINFOOFPCCONFIG                                 STD_ON
#define COM_ISDEF_TXTOUTCNTOFPCCONFIG                                 STD_ON
#define COM_ISDEF_TXTOUTINFOOFPCCONFIG                                STD_ON
#define COM_ISDEF_TXTMPTPPDULENGTHOFPCCONFIG                          STD_ON
#define COM_ISDEF_TXTPCONNECTIONSTATEOFPCCONFIG                       STD_ON
#define COM_ISDEF_TXTPINFOOFPCCONFIG                                  STD_ON
#define COM_ISDEF_TXTPSDULENGTHOFPCCONFIG                             STD_ON
#define COM_ISDEF_TXTPWRITTENBYTESCOUNTEROFPCCONFIG                   STD_ON
#define COM_ISDEF_WAITINGFORCONFIRMATIONOFPCCONFIG                    STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  ComPCEqualsAlwaysToDefines  Com Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define COM_EQ2_RXPDUINFOIDXOFACTIVATABLERXCOMIPDUS                   
#define COM_EQ2_TXPDUINFOIDXOFACTIVATABLETXCOMIPDUS                   
#define COM_EQ2_CBKRXTOUTFUNCPTR                                      
#define COM_EQ2_CBKRXTOUTFUNCPTRIND                                   
#define COM_EQ2_CBKTXTOUTFUNCPTR                                      
#define COM_EQ2_CBKTXTOUTFUNCPTRIND                                   
#define COM_EQ2_CONSTVALUEARRAYBASED                                  
#define COM_EQ2_CONSTVALUESINT16                                      
#define COM_EQ2_CONSTVALUEUINT16                                      
#define COM_EQ2_CONSTVALUEUINT32                                      
#define COM_EQ2_CONSTVALUEUINT8                                       
#define COM_EQ2_FILTERALGOOFFILTERINFO_UINT16                         
#define COM_EQ2_FILTERMASKOFFILTERINFO_UINT16                         
#define COM_EQ2_FILTERMAXOFFILTERINFO_UINT16                          
#define COM_EQ2_FILTERMINOFFILTERINFO_UINT16                          
#define COM_EQ2_FILTERXOFFILTERINFO_UINT16                            
#define COM_EQ2_FILTERALGOOFFILTERINFO_UINT8                          
#define COM_EQ2_FILTERMASKOFFILTERINFO_UINT8                          
#define COM_EQ2_FILTERMAXOFFILTERINFO_UINT8                           
#define COM_EQ2_FILTERMINOFFILTERINFO_UINT8                           
#define COM_EQ2_FILTERXOFFILTERINFO_UINT8                             
#define COM_EQ2_RXACCESSINFOIDXOFGWGRPSIGMAPPING                      
#define COM_EQ2_TXSIGIDOFGWGRPSIGMAPPING                              
#define COM_EQ2_GWSIGGRPMAPPINGENDIDXOFGWINFO                         
#define COM_EQ2_GWSIGGRPMAPPINGSTARTIDXOFGWINFO                       
#define COM_EQ2_GWSIGGRPMAPPINGUSEDOFGWINFO                           
#define COM_EQ2_GWSIGMAPPINGENDIDXOFGWINFO                            
#define COM_EQ2_GWSIGMAPPINGSTARTIDXOFGWINFO                          
#define COM_EQ2_GWSIGMAPPINGUSEDOFGWINFO                              
#define COM_EQ2_GWGRPSIGMAPPINGENDIDXOFGWSIGGRPMAPPING                
#define COM_EQ2_GWGRPSIGMAPPINGSTARTIDXOFGWSIGGRPMAPPING              
#define COM_EQ2_TXSIGGRPIDOFGWSIGGRPMAPPING                           
#define COM_EQ2_RXACCESSINFOIDXOFGWSIGMAPPING                         
#define COM_EQ2_TXSIGIDOFGWSIGMAPPING                                 
#define COM_EQ2_PDUGRPVECTOR                                          
#define COM_EQ2_APPLTYPEOFRXACCESSINFO                                
#define COM_EQ2_BITLENGTHOFRXACCESSINFO                               
#define COM_EQ2_BITPOSITIONOFRXACCESSINFO                             
#define COM_EQ2_BUFFERIDXOFRXACCESSINFO                               
#define COM_EQ2_BUFFERUSEDOFRXACCESSINFO                              
#define COM_EQ2_BUSACCOFRXACCESSINFO                                  
#define COM_EQ2_BYTELENGTHOFRXACCESSINFO                              
#define COM_EQ2_BYTEPOSITIONOFRXACCESSINFO                            
#define COM_EQ2_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO     
#define COM_EQ2_CONSTVALUEARRAYBASEDINITVALUELENGTHOFRXACCESSINFO     
#define COM_EQ2_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO   
#define COM_EQ2_CONSTVALUEARRAYBASEDINITVALUEUSEDOFRXACCESSINFO       
#define COM_EQ2_GWINFOIDXOFRXACCESSINFO                               
#define COM_EQ2_GWINFOUSEDOFRXACCESSINFO                              
#define COM_EQ2_INITVALUEIDXOFRXACCESSINFO                            
#define COM_EQ2_INITVALUEUSEDOFRXACCESSINFO                           
#define COM_EQ2_ISGROUPSIGNALOFRXACCESSINFO                           
#define COM_EQ2_ROUTINGBUFFERIDXOFRXACCESSINFO                        
#define COM_EQ2_ROUTINGBUFFERUSEDOFRXACCESSINFO                       
#define COM_EQ2_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO       
#define COM_EQ2_RXDATATIMEOUTSUBSTITUTIONVALUEUSEDOFRXACCESSINFO      
#define COM_EQ2_RXPDUINFOIDXOFRXACCESSINFO                            
#define COM_EQ2_RXSIGBUFFERARRAYBASEDBUFFERENDIDXOFRXACCESSINFO       
#define COM_EQ2_RXSIGBUFFERARRAYBASEDBUFFERLENGTHOFRXACCESSINFO       
#define COM_EQ2_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO     
#define COM_EQ2_RXSIGBUFFERARRAYBASEDBUFFERUSEDOFRXACCESSINFO         
#define COM_EQ2_RXSIGBUFFERARRAYBASEDROUTINGBUFFERENDIDXOFRXACCESSINFO 
#define COM_EQ2_RXSIGBUFFERARRAYBASEDROUTINGBUFFERLENGTHOFRXACCESSINFO 
#define COM_EQ2_RXSIGBUFFERARRAYBASEDROUTINGBUFFERSTARTIDXOFRXACCESSINFO 
#define COM_EQ2_RXSIGBUFFERARRAYBASEDROUTINGBUFFERUSEDOFRXACCESSINFO  
#define COM_EQ2_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO    
#define COM_EQ2_RXSIGBUFFERARRAYBASEDSHDBUFFERLENGTHOFRXACCESSINFO    
#define COM_EQ2_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO  
#define COM_EQ2_RXSIGBUFFERARRAYBASEDSHDBUFFERUSEDOFRXACCESSINFO      
#define COM_EQ2_RXTOUTINFOIDXOFRXACCESSINFO                           
#define COM_EQ2_RXTOUTINFOUSEDOFRXACCESSINFO                          
#define COM_EQ2_SHDBUFFERIDXOFRXACCESSINFO                            
#define COM_EQ2_SHDBUFFERUSEDOFRXACCESSINFO                           
#define COM_EQ2_SIGNEXTREQUIREDOFRXACCESSINFO                         
#define COM_EQ2_STARTBYTEINPDUPOSITIONOFRXACCESSINFO                  
#define COM_EQ2_TMPBUFFERIDXOFRXACCESSINFO                            
#define COM_EQ2_TMPBUFFERUSEDOFRXACCESSINFO                           
#define COM_EQ2_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO 
#define COM_EQ2_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERLENGTHOFRXACCESSINFO 
#define COM_EQ2_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO 
#define COM_EQ2_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERUSEDOFRXACCESSINFO   
#define COM_EQ2_RXACCESSINFOGRPSIGIND                                 
#define COM_EQ2_RXACCESSINFOIND                                       
#define COM_EQ2_RXCBKFUNCPTR                                          
#define COM_EQ2_PDUGRPVECTORENDIDXOFRXPDUGRPINFO                      
#define COM_EQ2_PDUGRPVECTORSTARTIDXOFRXPDUGRPINFO                    
#define COM_EQ2_PDUGRPVECTORUSEDOFRXPDUGRPINFO                        
#define COM_EQ2_GWINFOENDIDXOFRXPDUINFO                               
#define COM_EQ2_GWINFOSTARTIDXOFRXPDUINFO                             
#define COM_EQ2_GWINFOUSEDOFRXPDUINFO                                 
#define COM_EQ2_HANDLERXPDUDEFERREDIDXOFRXPDUINFO                     
#define COM_EQ2_HANDLERXPDUDEFERREDUSEDOFRXPDUINFO                    
#define COM_EQ2_RXACCESSINFOINDENDIDXOFRXPDUINFO                      
#define COM_EQ2_RXACCESSINFOINDSTARTIDXOFRXPDUINFO                    
#define COM_EQ2_RXACCESSINFOINDUSEDOFRXPDUINFO                        
#define COM_EQ2_RXDEFPDUBUFFERENDIDXOFRXPDUINFO                       
#define COM_EQ2_RXDEFPDUBUFFERLENGTHOFRXPDUINFO                       
#define COM_EQ2_RXDEFPDUBUFFERSTARTIDXOFRXPDUINFO                     
#define COM_EQ2_RXDEFPDUBUFFERUSEDOFRXPDUINFO                         
#define COM_EQ2_RXSIGGRPINFOINDENDIDXOFRXPDUINFO                      
#define COM_EQ2_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO                    
#define COM_EQ2_RXSIGGRPINFOINDUSEDOFRXPDUINFO                        
#define COM_EQ2_RXSIGINFOENDIDXOFRXPDUINFO                            
#define COM_EQ2_RXSIGINFOSTARTIDXOFRXPDUINFO                          
#define COM_EQ2_RXSIGINFOUSEDOFRXPDUINFO                              
#define COM_EQ2_RXTOUTINFOIDXOFRXPDUINFO                              
#define COM_EQ2_RXTOUTINFOINDENDIDXOFRXPDUINFO                        
#define COM_EQ2_RXTOUTINFOINDSTARTIDXOFRXPDUINFO                      
#define COM_EQ2_RXTOUTINFOINDUSEDOFRXPDUINFO                          
#define COM_EQ2_RXTOUTINFOUSEDOFRXPDUINFO                             
#define COM_EQ2_RXTPINFOIDXOFRXPDUINFO                                
#define COM_EQ2_RXTPINFOUSEDOFRXPDUINFO                               
#define COM_EQ2_SIGNALPROCESSINGOFRXPDUINFO                           
#define COM_EQ2_TYPEOFRXPDUINFO                                       
#define COM_EQ2_GWINFOIDXOFRXSIGGRPINFO                               
#define COM_EQ2_GWINFOUSEDOFRXSIGGRPINFO                              
#define COM_EQ2_RXACCESSINFOGRPSIGINDENDIDXOFRXSIGGRPINFO             
#define COM_EQ2_RXACCESSINFOGRPSIGINDSTARTIDXOFRXSIGGRPINFO           
#define COM_EQ2_RXACCESSINFOGRPSIGINDUSEDOFRXSIGGRPINFO               
#define COM_EQ2_RXCBKFUNCPTRACKIDXOFRXSIGGRPINFO                      
#define COM_EQ2_RXCBKFUNCPTRACKUSEDOFRXSIGGRPINFO                     
#define COM_EQ2_RXPDUINFOIDXOFRXSIGGRPINFO                            
#define COM_EQ2_SHDBUFFERREQUIREDOFRXSIGGRPINFO                       
#define COM_EQ2_SIGNALPROCESSINGOFRXSIGGRPINFO                        
#define COM_EQ2_STARTBYTEPOSITIONOFRXSIGGRPINFO                       
#define COM_EQ2_UBIDXOFRXSIGGRPINFO                                   
#define COM_EQ2_UBMASKIDXOFRXSIGGRPINFO                               
#define COM_EQ2_UBMASKUSEDOFRXSIGGRPINFO                              
#define COM_EQ2_VALIDDLCOFRXSIGGRPINFO                                
#define COM_EQ2_RXSIGGRPINFOIND                                       
#define COM_EQ2_GWINFOIDXOFRXSIGINFO                                  
#define COM_EQ2_GWINFOUSEDOFRXSIGINFO                                 
#define COM_EQ2_RXACCESSINFOIDXOFRXSIGINFO                            
#define COM_EQ2_RXCBKFUNCPTRACKIDXOFRXSIGINFO                         
#define COM_EQ2_RXCBKFUNCPTRACKUSEDOFRXSIGINFO                        
#define COM_EQ2_RXTOUTINFOIDXOFRXSIGINFO                              
#define COM_EQ2_RXTOUTINFOUSEDOFRXSIGINFO                             
#define COM_EQ2_SIGNALPROCESSINGOFRXSIGINFO                           
#define COM_EQ2_UBIDXOFRXSIGINFO                                      
#define COM_EQ2_UBMASKIDXOFRXSIGINFO                                  
#define COM_EQ2_UBMASKUSEDOFRXSIGINFO                                 
#define COM_EQ2_VALIDDLCOFRXSIGINFO                                   
#define COM_EQ2_CBKRXTOUTFUNCPTRINDENDIDXOFRXTOUTINFO                 
#define COM_EQ2_CBKRXTOUTFUNCPTRINDSTARTIDXOFRXTOUTINFO               
#define COM_EQ2_CBKRXTOUTFUNCPTRINDUSEDOFRXTOUTINFO                   
#define COM_EQ2_FACTOROFRXTOUTINFO                                    
#define COM_EQ2_FIRSTFACTOROFRXTOUTINFO                               
#define COM_EQ2_RXPDUINFOIDXOFRXTOUTINFO                              
#define COM_EQ2_RXTOUTINFOIND                                         
#define COM_EQ2_BUFFERSIZEOFRXTPINFO                                  
#define COM_EQ2_DYNAMICINITIALLENGTHOFRXTPINFO                        
#define COM_EQ2_RXACCESSINFODYNSIGIDXOFRXTPINFO                       
#define COM_EQ2_RXACCESSINFODYNSIGUSEDOFRXTPINFO                      
#define COM_EQ2_RXTPBUFFERENDIDXOFRXTPINFO                            
#define COM_EQ2_RXTPBUFFERSTARTIDXOFRXTPINFO                          
#define COM_EQ2_RXTPBUFFERUSEDOFRXTPINFO                              
#define COM_EQ2_TXFILTERINITVALUEUINT16                               
#define COM_EQ2_TXFILTERINITVALUEUINT8                                
#define COM_EQ2_DIRECTOFTXMODEFALSE                                   
#define COM_EQ2_PERIODICOFTXMODEFALSE                                 
#define COM_EQ2_TIMEOFFSETOFTXMODEFALSE                               
#define COM_EQ2_TIMEPERIODOFTXMODEFALSE                               
#define COM_EQ2_INITMODEOFTXMODEINFO                                  
#define COM_EQ2_MINIMUMDELAYOFTXMODEINFO                              
#define COM_EQ2_TXMODEFALSEIDXOFTXMODEINFO                            
#define COM_EQ2_TXMODEFALSEUSEDOFTXMODEINFO                           
#define COM_EQ2_TXMODETRUEIDXOFTXMODEINFO                             
#define COM_EQ2_TXMODETRUEUSEDOFTXMODEINFO                            
#define COM_EQ2_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO         
#define COM_EQ2_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO       
#define COM_EQ2_TXSIGINFOFILTERINITVALUEINDUSEDOFTXMODEINFO           
#define COM_EQ2_DIRECTOFTXMODETRUE                                    
#define COM_EQ2_PERIODICOFTXMODETRUE                                  
#define COM_EQ2_TIMEOFFSETOFTXMODETRUE                                
#define COM_EQ2_TIMEPERIODOFTXMODETRUE                                
#define COM_EQ2_PDUGRPVECTORENDIDXOFTXPDUGRPINFO                      
#define COM_EQ2_PDUGRPVECTORSTARTIDXOFTXPDUGRPINFO                    
#define COM_EQ2_PDUGRPVECTORUSEDOFTXPDUGRPINFO                        
#define COM_EQ2_CLRUBOFTXPDUINFO                                      
#define COM_EQ2_CONSTVALUEUINT8UBCLEARMASKENDIDXOFTXPDUINFO           
#define COM_EQ2_CONSTVALUEUINT8UBCLEARMASKSTARTIDXOFTXPDUINFO         
#define COM_EQ2_CONSTVALUEUINT8UBCLEARMASKUSEDOFTXPDUINFO             
#define COM_EQ2_EXTERNALIDOFTXPDUINFO                                 
#define COM_EQ2_METADATALENGTHOFTXPDUINFO                             
#define COM_EQ2_PDUWITHMETADATALENGTHOFTXPDUINFO                      
#define COM_EQ2_TXBUFFERENDIDXOFTXPDUINFO                             
#define COM_EQ2_TXBUFFERLENGTHOFTXPDUINFO                             
#define COM_EQ2_TXBUFFERMETADATAENDIDXOFTXPDUINFO                     
#define COM_EQ2_TXBUFFERMETADATALENGTHOFTXPDUINFO                     
#define COM_EQ2_TXBUFFERMETADATASTARTIDXOFTXPDUINFO                   
#define COM_EQ2_TXBUFFERMETADATAUSEDOFTXPDUINFO                       
#define COM_EQ2_TXBUFFERSTARTIDXOFTXPDUINFO                           
#define COM_EQ2_TXBUFFERUSEDOFTXPDUINFO                               
#define COM_EQ2_TXPDUINITVALUEENDIDXOFTXPDUINFO                       
#define COM_EQ2_TXPDUINITVALUEMETADATAENDIDXOFTXPDUINFO               
#define COM_EQ2_TXPDUINITVALUEMETADATASTARTIDXOFTXPDUINFO             
#define COM_EQ2_TXPDUINITVALUEMETADATAUSEDOFTXPDUINFO                 
#define COM_EQ2_TXPDUINITVALUESTARTIDXOFTXPDUINFO                     
#define COM_EQ2_TXPDUINITVALUEUSEDOFTXPDUINFO                         
#define COM_EQ2_TXSIGGRPINFOINDENDIDXOFTXPDUINFO                      
#define COM_EQ2_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO                    
#define COM_EQ2_TXSIGGRPINFOINDUSEDOFTXPDUINFO                        
#define COM_EQ2_TXTOUTINFOIDXOFTXPDUINFO                              
#define COM_EQ2_TXTOUTINFOUSEDOFTXPDUINFO                             
#define COM_EQ2_TXTPINFOIDXOFTXPDUINFO                                
#define COM_EQ2_TXTPINFOUSEDOFTXPDUINFO                               
#define COM_EQ2_TXPDUINITVALUE                                        
#define COM_EQ2_PDUOFFSETOFTXSIGGRPINFO                               
#define COM_EQ2_TRANSFERPROPERTYOFTXSIGGRPINFO                        
#define COM_EQ2_TXBUFFERENDIDXOFTXSIGGRPINFO                          
#define COM_EQ2_TXBUFFERLENGTHOFTXSIGGRPINFO                          
#define COM_EQ2_TXBUFFERSIGGRPINTXIPDUENDIDXOFTXSIGGRPINFO            
#define COM_EQ2_TXBUFFERSIGGRPINTXIPDULENGTHOFTXSIGGRPINFO            
#define COM_EQ2_TXBUFFERSIGGRPINTXIPDUSTARTIDXOFTXSIGGRPINFO          
#define COM_EQ2_TXBUFFERSTARTIDXOFTXSIGGRPINFO                        
#define COM_EQ2_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGGRPINFO              
#define COM_EQ2_TXBUFFERUBIDXINTXBUFFERUSEDOFTXSIGGRPINFO             
#define COM_EQ2_TXBUFFERUSEDOFTXSIGGRPINFO                            
#define COM_EQ2_TXPDUINFOIDXOFTXSIGGRPINFO                            
#define COM_EQ2_TXSIGGRPMASKENDIDXOFTXSIGGRPINFO                      
#define COM_EQ2_TXSIGGRPMASKLENGTHOFTXSIGGRPINFO                      
#define COM_EQ2_TXSIGGRPMASKSTARTIDXOFTXSIGGRPINFO                    
#define COM_EQ2_TXSIGGRPMASKUSEDOFTXSIGGRPINFO                        
#define COM_EQ2_UBMASKIDXOFTXSIGGRPINFO                               
#define COM_EQ2_UBMASKUSEDOFTXSIGGRPINFO                              
#define COM_EQ2_TXSIGGRPINFOIND                                       
#define COM_EQ2_TXSIGGRPMASK                                          
#define COM_EQ2_APPLTYPEOFTXSIGINFO                                   
#define COM_EQ2_BITLENGTHOFTXSIGINFO                                  
#define COM_EQ2_BITPOSITIONOFTXSIGINFO                                
#define COM_EQ2_BUSACCOFTXSIGINFO                                     
#define COM_EQ2_BYTELENGTHOFTXSIGINFO                                 
#define COM_EQ2_BYTEPOSITIONOFTXSIGINFO                               
#define COM_EQ2_FILTERINITVALUEIDXOFTXSIGINFO                         
#define COM_EQ2_FILTERINITVALUEUSEDOFTXSIGINFO                        
#define COM_EQ2_ONCHANGEIDXOFTXSIGINFO                                
#define COM_EQ2_ONCHANGEUSEDOFTXSIGINFO                               
#define COM_EQ2_STARTBYTEINPDUPOSITIONOFTXSIGINFO                     
#define COM_EQ2_TRIGGEREDOFTXSIGINFO                                  
#define COM_EQ2_TXBUFFERENDIDXOFTXSIGINFO                             
#define COM_EQ2_TXBUFFERLENGTHOFTXSIGINFO                             
#define COM_EQ2_TXBUFFERSTARTIDXOFTXSIGINFO                           
#define COM_EQ2_TXBUFFERUBIDXINTXBUFFERIDXOFTXSIGINFO                 
#define COM_EQ2_TXBUFFERUBIDXINTXBUFFERUSEDOFTXSIGINFO                
#define COM_EQ2_TXBUFFERUSEDOFTXSIGINFO                               
#define COM_EQ2_TXPDUINFOIDXOFTXSIGINFO                               
#define COM_EQ2_TXSIGGRPINFOIDXOFTXSIGINFO                            
#define COM_EQ2_TXSIGGRPINFOUSEDOFTXSIGINFO                           
#define COM_EQ2_UBMASKIDXOFTXSIGINFO                                  
#define COM_EQ2_UBMASKUSEDOFTXSIGINFO                                 
#define COM_EQ2_TXSIGINFOFILTERINITVALUEIND                           
#define COM_EQ2_CBKTXTOUTFUNCPTRINDENDIDXOFTXTOUTINFO                 
#define COM_EQ2_CBKTXTOUTFUNCPTRINDSTARTIDXOFTXTOUTINFO               
#define COM_EQ2_CBKTXTOUTFUNCPTRINDUSEDOFTXTOUTINFO                   
#define COM_EQ2_FACTOROFTXTOUTINFO                                    
#define COM_EQ2_MODEOFTXTOUTINFO                                      
#define COM_EQ2_TXPDUINFOIDXOFTXTOUTINFO                              
#define COM_EQ2_BUFFERSIZEOFTXTPINFO                                  
#define COM_EQ2_DYNAMICINITIALLENGTHOFTXTPINFO                        
#define COM_EQ2_TXBUFFERENDIDXOFTXTPINFO                              
#define COM_EQ2_TXBUFFERLENGTHOFTXTPINFO                              
#define COM_EQ2_TXBUFFERSTARTIDXOFTXTPINFO                            
#define COM_EQ2_TXBUFFERUSEDOFTXTPINFO                                
#define COM_EQ2_TXSIGINFODYNSIGIDXOFTXTPINFO                          
#define COM_EQ2_TXSIGINFODYNSIGUSEDOFTXTPINFO                         
#define COM_EQ2_ACTIVATABLERXCOMIPDUSOFPCCONFIG                       Com_ActivatableRxComIPdus
#define COM_EQ2_ACTIVATABLETXCOMIPDUSOFPCCONFIG                       Com_ActivatableTxComIPdus
#define COM_EQ2_CBKRXTOUTFUNCPTRINDOFPCCONFIG                         Com_CbkRxTOutFuncPtrInd
#define COM_EQ2_CBKRXTOUTFUNCPTROFPCCONFIG                            Com_CbkRxTOutFuncPtr
#define COM_EQ2_CBKTXTOUTFUNCPTRINDOFPCCONFIG                         Com_CbkTxTOutFuncPtrInd
#define COM_EQ2_CBKTXTOUTFUNCPTROFPCCONFIG                            Com_CbkTxTOutFuncPtr
#define COM_EQ2_CONSTVALUEARRAYBASEDOFPCCONFIG                        Com_ConstValueArrayBased
#define COM_EQ2_CONSTVALUESINT16OFPCCONFIG                            Com_ConstValueSInt16
#define COM_EQ2_CONSTVALUEUINT16OFPCCONFIG                            Com_ConstValueUInt16
#define COM_EQ2_CONSTVALUEUINT32OFPCCONFIG                            Com_ConstValueUInt32
#define COM_EQ2_CONSTVALUEUINT8OFPCCONFIG                             Com_ConstValueUInt8
#define COM_EQ2_CURRENTTXMODEOFPCCONFIG                               Com_CurrentTxMode
#define COM_EQ2_CYCLETIMECNTOFPCCONFIG                                Com_CycleTimeCnt
#define COM_EQ2_CYCLICSENDREQUESTOFPCCONFIG                           Com_CyclicSendRequest
#define COM_EQ2_DELAYTIMECNTOFPCCONFIG                                Com_DelayTimeCnt
#define COM_EQ2_FILTERINFO_UINT16OFPCCONFIG                           Com_FilterInfo_UInt16
#define COM_EQ2_FILTERINFO_UINT8OFPCCONFIG                            Com_FilterInfo_UInt8
#define COM_EQ2_GATEWAYDESCRIPTIONPROCESSINGISRLOCKCOUNTEROFPCCONFIG  Com_GatewayDescriptionProcessingISRLockCounter
#define COM_EQ2_GATEWAYPROCESSINGISRLOCKCOUNTEROFPCCONFIG             Com_GatewayProcessingISRLockCounter
#define COM_EQ2_GWEVENTCACHEINDEXOFPCCONFIG                           Com_GwEventCacheIndex
#define COM_EQ2_GWEVENTOFPCCONFIG                                     Com_GwEvent
#define COM_EQ2_GWGRPSIGMAPPINGOFPCCONFIG                             Com_GwGrpSigMapping
#define COM_EQ2_GWINFOOFPCCONFIG                                      Com_GwInfo
#define COM_EQ2_GWSIGGRPMAPPINGOFPCCONFIG                             Com_GwSigGrpMapping
#define COM_EQ2_GWSIGMAPPINGOFPCCONFIG                                Com_GwSigMapping
#define COM_EQ2_HANDLERXPDUDEFERREDOFPCCONFIG                         Com_HandleRxPduDeferred.raw
#define COM_EQ2_HANDLETXPDUDEFERREDOFPCCONFIG                         Com_HandleTxPduDeferred
#define COM_EQ2_INITIALIZEDOFPCCONFIG                                 Com_Initialized
#define COM_EQ2_PDUGRPVECTOROFPCCONFIG                                Com_PduGrpVector
#define COM_EQ2_REPCNTOFPCCONFIG                                      Com_RepCnt
#define COM_EQ2_REPCYCLECNTOFPCCONFIG                                 Com_RepCycleCnt
#define COM_EQ2_RXACCESSINFOGRPSIGINDOFPCCONFIG                       Com_RxAccessInfoGrpSigInd
#define COM_EQ2_RXACCESSINFOINDOFPCCONFIG                             Com_RxAccessInfoInd
#define COM_EQ2_RXACCESSINFOOFPCCONFIG                                Com_RxAccessInfo
#define COM_EQ2_RXCBKFUNCPTROFPCCONFIG                                Com_RxCbkFuncPtr
#define COM_EQ2_RXDEADLINEMONITORINGISRLOCKCOUNTEROFPCCONFIG          Com_RxDeadlineMonitoringISRLockCounter
#define COM_EQ2_RXDEFPDUBUFFEROFPCCONFIG                              Com_RxDefPduBuffer.raw
#define COM_EQ2_RXDEFERREDFCTPTRCACHEOFPCCONFIG                       Com_RxDeferredFctPtrCache
#define COM_EQ2_RXDEFERREDPROCESSINGISRLOCKCOUNTEROFPCCONFIG          Com_RxDeferredProcessingISRLockCounter
#define COM_EQ2_RXDYNSIGNALLENGTHOFPCCONFIG                           Com_RxDynSignalLength.raw
#define COM_EQ2_RXDYNSIGNALTMPLENGTHFORSIGNALGROUPSOFPCCONFIG         Com_RxDynSignalTmpLengthForSignalGroups.raw
#define COM_EQ2_RXIPDUGROUPISRLOCKCOUNTEROFPCCONFIG                   Com_RxIPduGroupISRLockCounter
#define COM_EQ2_RXPDUDMSTATEOFPCCONFIG                                Com_RxPduDmState
#define COM_EQ2_RXPDUGRPACTIVEOFPCCONFIG                              Com_RxPduGrpActive
#define COM_EQ2_RXPDUGRPINFOOFPCCONFIG                                Com_RxPduGrpInfo
#define COM_EQ2_RXPDUINFOOFPCCONFIG                                   Com_RxPduInfo
#define COM_EQ2_RXSIGBUFFERARRAYBASEDOFPCCONFIG                       Com_RxSigBufferArrayBased
#define COM_EQ2_RXSIGBUFFERSINT16OFPCCONFIG                           Com_RxSigBufferSInt16
#define COM_EQ2_RXSIGBUFFERUINT16OFPCCONFIG                           Com_RxSigBufferUInt16
#define COM_EQ2_RXSIGBUFFERUINT32OFPCCONFIG                           Com_RxSigBufferUInt32
#define COM_EQ2_RXSIGBUFFERUINT8OFPCCONFIG                            Com_RxSigBufferUInt8
#define COM_EQ2_RXSIGGRPINFOINDOFPCCONFIG                             Com_RxSigGrpInfoInd
#define COM_EQ2_RXSIGGRPINFOOFPCCONFIG                                Com_RxSigGrpInfo
#define COM_EQ2_RXSIGINFOOFPCCONFIG                                   Com_RxSigInfo
#define COM_EQ2_RXTOUTCNTOFPCCONFIG                                   Com_RxTOutCnt
#define COM_EQ2_RXTOUTINFOINDOFPCCONFIG                               Com_RxTOutInfoInd
#define COM_EQ2_RXTOUTINFOOFPCCONFIG                                  Com_RxTOutInfo
#define COM_EQ2_RXTPBUFFEROFPCCONFIG                                  Com_RxTpBuffer.raw
#define COM_EQ2_RXTPCONNECTIONSTATEOFPCCONFIG                         Com_RxTpConnectionState.raw
#define COM_EQ2_RXTPINFOOFPCCONFIG                                    Com_RxTpInfo
#define COM_EQ2_RXTPSDULENGTHOFPCCONFIG                               Com_RxTpSduLength.raw
#define COM_EQ2_RXTPWRITTENBYTESCOUNTEROFPCCONFIG                     Com_RxTpWrittenBytesCounter.raw
#define COM_EQ2_SIGGRPEVENTFLAGOFPCCONFIG                             Com_SigGrpEventFlag
#define COM_EQ2_TMPRXBUFFEROFPCCONFIG                                 Com_TmpRxBuffer
#define COM_EQ2_TMPRXSHDBUFFERARRAYBASEDOFPCCONFIG                    Com_TmpRxShdBufferArrayBased.raw
#define COM_EQ2_TMPRXSHDBUFFERUINT16OFPCCONFIG                        Com_TmpRxShdBufferUInt16
#define COM_EQ2_TMPRXSHDBUFFERUINT32OFPCCONFIG                        Com_TmpRxShdBufferUInt32
#define COM_EQ2_TMPRXSHDBUFFERUINT8OFPCCONFIG                         Com_TmpRxShdBufferUInt8
#define COM_EQ2_TRANSMITREQUESTOFPCCONFIG                             Com_TransmitRequest
#define COM_EQ2_TXBUFFEROFPCCONFIG                                    Com_TxBuffer
#define COM_EQ2_TXCYCLICPROCESSINGISRLOCKCOUNTEROFPCCONFIG            Com_TxCyclicProcessingISRLockCounter
#define COM_EQ2_TXDEADLINEMONITORINGISRLOCKCOUNTEROFPCCONFIG          Com_TxDeadlineMonitoringISRLockCounter
#define COM_EQ2_TXDYNSIGNALLENGTHOFPCCONFIG                           Com_TxDynSignalLength.raw
#define COM_EQ2_TXFILTERINITVALUEUINT16OFPCCONFIG                     Com_TxFilterInitValueUInt16
#define COM_EQ2_TXFILTERINITVALUEUINT8OFPCCONFIG                      Com_TxFilterInitValueUInt8
#define COM_EQ2_TXFILTEROLDVALUEUINT16OFPCCONFIG                      Com_TxFilterOldValueUInt16
#define COM_EQ2_TXFILTEROLDVALUEUINT8OFPCCONFIG                       Com_TxFilterOldValueUInt8
#define COM_EQ2_TXIPDUGROUPISRLOCKCOUNTEROFPCCONFIG                   Com_TxIPduGroupISRLockCounter
#define COM_EQ2_TXMODEFALSEOFPCCONFIG                                 Com_TxModeFalse
#define COM_EQ2_TXMODEINFOOFPCCONFIG                                  Com_TxModeInfo
#define COM_EQ2_TXMODETRUEOFPCCONFIG                                  Com_TxModeTrue
#define COM_EQ2_TXPDUGRPACTIVEOFPCCONFIG                              Com_TxPduGrpActive
#define COM_EQ2_TXPDUGRPINFOOFPCCONFIG                                Com_TxPduGrpInfo
#define COM_EQ2_TXPDUINFOOFPCCONFIG                                   Com_TxPduInfo
#define COM_EQ2_TXPDUINITVALUEOFPCCONFIG                              Com_TxPduInitValue
#define COM_EQ2_TXPROCESSINGISRLOCKCOUNTEROFPCCONFIG                  Com_TxProcessingISRLockCounter
#define COM_EQ2_TXSDULENGTHOFPCCONFIG                                 Com_TxSduLength
#define COM_EQ2_TXSIGGRPINFOINDOFPCCONFIG                             Com_TxSigGrpInfoInd
#define COM_EQ2_TXSIGGRPINFOOFPCCONFIG                                Com_TxSigGrpInfo
#define COM_EQ2_TXSIGGRPMASKOFPCCONFIG                                Com_TxSigGrpMask
#define COM_EQ2_TXSIGINFOFILTERINITVALUEINDOFPCCONFIG                 Com_TxSigInfoFilterInitValueInd
#define COM_EQ2_TXSIGINFOOFPCCONFIG                                   Com_TxSigInfo
#define COM_EQ2_TXTOUTCNTOFPCCONFIG                                   Com_TxTOutCnt.raw
#define COM_EQ2_TXTOUTINFOOFPCCONFIG                                  Com_TxTOutInfo
#define COM_EQ2_TXTMPTPPDULENGTHOFPCCONFIG                            Com_TxTmpTpPduLength.raw
#define COM_EQ2_TXTPCONNECTIONSTATEOFPCCONFIG                         Com_TxTpConnectionState.raw
#define COM_EQ2_TXTPINFOOFPCCONFIG                                    Com_TxTpInfo
#define COM_EQ2_TXTPSDULENGTHOFPCCONFIG                               Com_TxTpSduLength.raw
#define COM_EQ2_TXTPWRITTENBYTESCOUNTEROFPCCONFIG                     Com_TxTpWrittenBytesCounter.raw
#define COM_EQ2_WAITINGFORCONFIRMATIONOFPCCONFIG                      Com_WaitingForConfirmation
/** 
  \}
*/ 

/** 
  \defgroup  ComPCSymbolicInitializationPointers  Com Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define Com_Config_Ptr                                                NULL_PTR  /**< symbolic identifier which shall be used to initialize 'Com' */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCInitializationSymbols  Com Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define Com_Config                                                    NULL_PTR  /**< symbolic identifier which could be used to initialize 'Com */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGeneral  Com General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define COM_CHECK_INIT_POINTER                                        STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define COM_FINAL_MAGIC_NUMBER                                        0x321EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of Com */
#define COM_INDIVIDUAL_POSTBUILD                                      STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'Com' is not configured to be postbuild capable. */
#define COM_INIT_DATA                                                 COM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define COM_INIT_DATA_HASH_CODE                                       -2111758871L  /**< the precompile constant to validate the initialization structure at initialization time of Com with a hashcode. The seed value is '0x321EU' */
#define COM_USE_ECUM_BSW_ERROR_HOOK                                   STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define COM_USE_INIT_POINTER                                          STD_OFF  /**< STD_ON if the init pointer Com shall be used. */
/** 
  \}
*/ 



/* General */
#define COM_DEV_ERROR_DETECT                 STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComSafeBswChecks] || /ActiveEcuC/Com/ComGeneral[0:ComConfigurationUseDet] */
#define COM_DEV_ERROR_REPORT                 STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComConfigurationUseDet] */
#define COM_RETRY_FAILED_TRANSMIT_REQUESTS   STD_ON  /**< /ActiveEcuC/Com/ComGeneral[0:ComRetryFailedTransmitRequests] */
#define COM_IPDUCALLOUT_USEPDUINFOPTR        STD_ON  /**< /ActiveEcuC/Com/ComGeneral[0:ComAdvancedIPduCallouts] */

/* Optimization */
#define COM_RECEIVE_SIGNAL_MACRO_API         STD_OFF

/* API */
#define COM_COMMUNICATION_INTERFACE          STD_ON  /**< /ActiveEcuC/PduR/Com[0:PduRCommunicationInterface] */
#define COM_TRANSPORT_PROTOCOL               STD_ON  /**< /ActiveEcuC/PduR/Com[0:PduRTransportProtocol] */

#define COM_TRIGGER_TRANSMIT_API             STD_ON  /**< /ActiveEcuC/PduR/Com[0:PduRTriggertransmit] */
#define COM_TX_CONFIRMATION_API              STD_ON  /**< /ActiveEcuC/PduR/Com[0:PduRTxConfirmation] */
#define COM_TRIGGER_IPDU_SEND_WITH_META_DATA_API    STD_ON  /**< /ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] */
#define COM_MAIN_FUNCTION_ROUTE_SIGNALS_API  STD_ON
#define COM_ENABLE_SIGNAL_GROUP_ARRAY_API    STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] */

#define COM_VERSION_INFO_API                 STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComVersionInfoApi] */
#define COM_GENERATED_DESCRIPTION_ROUTING    STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComDescriptionRoutingCodeGeneration] */

#define COM_LMGT_MAXIPDUGROUPVECTORBYTECNT   3U
#define COM_SUPPORTED_IPDU_GROUPS            22UL  /**< /ActiveEcuC/Com/ComGeneral[0:ComSupportedIPduGroups] */

#define COM_RXIMMEDIATEFCTPTRCACHE           STD_OFF
#define COM_RXIMMEDIATEFCTPTRCACHESIZE       0U

/**
  \brief  Constants to compare floating-point values according to ISO C-99 standard.
  \details  -
    \{
*/
#define COM_FLT_EPSILON                      1E-5
#define COM_DBL_EPSILON                      1E-9
/**
  \}
*/




/**
 * \defgroup ComHandleIdsComRxSig Handle IDs of handle space ComRxSig.
 * \brief Rx Signals
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComGroupSignal_AlarmClockAlarms_stat_DaySet_ISig_4_oVMCU_BB2_111P_oBackbone2_1f6687fc_Rx 21
#define ComConf_ComGroupSignal_AlarmClockAlarms_stat_ID_ISig_4_oVMCU_BB2_111P_oBackbone2_64cf6c9d_Rx 22
#define ComConf_ComGroupSignal_AlarmClockAlarms_stat_Mode_ISig_4_oVMCU_BB2_111P_oBackbone2_87505328_Rx 23
#define ComConf_ComGroupSignal_AlarmClockAlarms_stat_SetHr_ISig_4_oVMCU_BB2_111P_oBackbone2_d980dbc8_Rx 24
#define ComConf_ComGroupSignal_AlarmClockAlarms_stat_SetMin_ISig_4_oVMCU_BB2_111P_oBackbone2_fe84ef76_Rx 25
#define ComConf_ComGroupSignal_AlarmClockAlarms_stat_Stat_ISig_4_oVMCU_BB2_111P_oBackbone2_3e397858_Rx 26
#define ComConf_ComGroupSignal_AlarmClockAlarms_stat_Type_ISig_4_oVMCU_BB2_111P_oBackbone2_56db37bd_Rx 27
#define ComConf_ComGroupSignal_AlarmClockNotification_ID_ISig_4_oVMCU_BB2_110P_oBackbone2_5f5e4334_Rx 28
#define ComConf_ComGroupSignal_AlarmClockNotification_Stat_ISig_4_oVMCU_BB2_110P_oBackbone2_8e407b5d_Rx 29
#define ComConf_ComGroupSignal_AlarmClockNotification_Type_ISig_4_oVMCU_BB2_110P_oBackbone2_e6a234b8_Rx 30
#define ComConf_ComGroupSignal_AlmClkCurAlarm_stat_ID_oVMCU_BB2_111P_oBackbone2_75f3c2c2_Rx 33
#define ComConf_ComGroupSignal_AlmClkCurAlarm_stat_SetHr_oVMCU_BB2_111P_oBackbone2_b7db0b9a_Rx 34
#define ComConf_ComGroupSignal_AlmClkCurAlarm_stat_SetMin_oVMCU_BB2_111P_oBackbone2_608ef6c3_Rx 35
#define ComConf_ComGroupSignal_AlmClkCurAlarm_stat_Stat_oVMCU_BB2_111P_oBackbone2_aab7c9bc_Rx 36
#define ComConf_ComGroupSignal_AlmClkCurAlarm_stat_Type_oVMCU_BB2_111P_oBackbone2_af32820a_Rx 37
#define ComConf_ComGroupSignal_AlmClkSetAlm_LECM_rq_DaySet_ISig_5_oLECM1_Cab_03S_oCabSubnet_5151c68f_Rx 38
#define ComConf_ComGroupSignal_AlmClkSetAlm_LECM_rq_ID_ISig_5_oLECM1_Cab_03S_oCabSubnet_7ea001fa_Rx 39
#define ComConf_ComGroupSignal_AlmClkSetAlm_LECM_rq_Mode_ISig_5_oLECM1_Cab_03S_oCabSubnet_41cf9eaf_Rx 40
#define ComConf_ComGroupSignal_AlmClkSetAlm_LECM_rq_SetHr_ISig_5_oLECM1_Cab_03S_oCabSubnet_4655b7eb_Rx 41
#define ComConf_ComGroupSignal_AlmClkSetAlm_LECM_rq_SetMin_ISig_5_oLECM1_Cab_03S_oCabSubnet_b0b3ae05_Rx 42
#define ComConf_ComGroupSignal_AlmClkSetAlm_LECM_rq_Stat_ISig_5_oLECM1_Cab_03S_oCabSubnet_f8a6b5df_Rx 43
#define ComConf_ComGroupSignal_AlmClkSetAlm_LECM_rq_Type_ISig_5_oLECM1_Cab_03S_oCabSubnet_9044fa3a_Rx 44
#define ComConf_ComGroupSignal_AlmClkSnze_LECM_rqst_Action_ISig_5_oLECM1_Cab_03S_oCabSubnet_8525aacf_Rx 45
#define ComConf_ComGroupSignal_AlmClkSnze_LECM_rqst_ID_ISig_5_oLECM1_Cab_03S_oCabSubnet_2f8c2aaf_Rx 46
#define ComConf_ComGroupSignal_BnkH1IntLghtMMenu_stat_EventFlag_oLECM1_Cab_02P_oCabSubnet_e12f35c7_Rx 90
#define ComConf_ComGroupSignal_BnkH1IntLghtMMenu_stat_IL_Mode_oLECM1_Cab_02P_oCabSubnet_fb8e6b67_Rx 91
#define ComConf_ComGroupSignal_DiagFaultStat_Alarm_DtcIdA_ISig_10_oDiagFaultStat_Alarm_Sec_oSecuritySubnet_3b154a5b_Rx 237
#define ComConf_ComGroupSignal_DiagFaultStat_Alarm_DtcIdB_ISig_10_oDiagFaultStat_Alarm_Sec_oSecuritySubnet_6c376609_Rx 238
#define ComConf_ComGroupSignal_DiagFaultStat_Alarm_EcuAdr_ISig_10_oDiagFaultStat_Alarm_Sec_oSecuritySubnet_870b92a5_Rx 239
#define ComConf_ComGroupSignal_DiagFaultStat_Alarm_FailTA_ISig_10_oDiagFaultStat_Alarm_Sec_oSecuritySubnet_a08ae122_Rx 240
#define ComConf_ComGroupSignal_DiagFaultStat_Alarm_FailTB_ISig_10_oDiagFaultStat_Alarm_Sec_oSecuritySubnet_f7a8cd70_Rx 241
#define ComConf_ComGroupSignal_DiagFaultStat_CCM_DtcIdA_ISig_5_oDiagFaultStat_CCM_Cab_oCabSubnet_3abddcf2_Rx 242
#define ComConf_ComGroupSignal_DiagFaultStat_CCM_DtcIdB_ISig_5_oDiagFaultStat_CCM_Cab_oCabSubnet_02865781_Rx 243
#define ComConf_ComGroupSignal_DiagFaultStat_CCM_EcuAdr_ISig_5_oDiagFaultStat_CCM_Cab_oCabSubnet_a79f18ef_Rx 244
#define ComConf_ComGroupSignal_DiagFaultStat_CCM_FailTA_ISig_5_oDiagFaultStat_CCM_Cab_oCabSubnet_40b5d09a_Rx 245
#define ComConf_ComGroupSignal_DiagFaultStat_CCM_FailTB_ISig_5_oDiagFaultStat_CCM_Cab_oCabSubnet_788e5be9_Rx 246
#define ComConf_ComGroupSignal_DiagFaultStat_DDM_DtcIdA_ISig_10_oDiagFaultStat_DDM_Sec_oSecuritySubnet_76a330d2_Rx 247
#define ComConf_ComGroupSignal_DiagFaultStat_DDM_DtcIdB_ISig_10_oDiagFaultStat_DDM_Sec_oSecuritySubnet_307105b6_Rx 248
#define ComConf_ComGroupSignal_DiagFaultStat_DDM_EcuAdr_ISig_10_oDiagFaultStat_DDM_Sec_oSecuritySubnet_2a8e239a_Rx 249
#define ComConf_ComGroupSignal_DiagFaultStat_DDM_FailTA_ISig_10_oDiagFaultStat_DDM_Sec_oSecuritySubnet_cb26958d_Rx 250
#define ComConf_ComGroupSignal_DiagFaultStat_DDM_FailTB_ISig_10_oDiagFaultStat_DDM_Sec_oSecuritySubnet_8df4a0e9_Rx 251
#define ComConf_ComGroupSignal_DiagFaultStat_LECM_DtcIdA_ISig_5_oDiagFaultStat_LECM_Cab_oCabSubnet_dffcf738_Rx 252
#define ComConf_ComGroupSignal_DiagFaultStat_LECM_DtcIdB_ISig_5_oDiagFaultStat_LECM_Cab_oCabSubnet_16c8ec35_Rx 253
#define ComConf_ComGroupSignal_DiagFaultStat_LECM_EcuAdr_ISig_5_oDiagFaultStat_LECM_Cab_oCabSubnet_bc67b925_Rx 254
#define ComConf_ComGroupSignal_DiagFaultStat_LECM_FailTA_ISig_5_oDiagFaultStat_LECM_Cab_oCabSubnet_9cef165e_Rx 255
#define ComConf_ComGroupSignal_DiagFaultStat_LECM_FailTB_ISig_5_oDiagFaultStat_LECM_Cab_oCabSubnet_55db0d53_Rx 256
#define ComConf_ComGroupSignal_DiagFaultStat_PDM_DtcIdA_ISig_10_oDiagFaultStat_PDM_Sec_oSecuritySubnet_44fa7e9c_Rx 257
#define ComConf_ComGroupSignal_DiagFaultStat_PDM_DtcIdB_ISig_10_oDiagFaultStat_PDM_Sec_oSecuritySubnet_02284bf8_Rx 258
#define ComConf_ComGroupSignal_DiagFaultStat_PDM_EcuAdr_ISig_10_oDiagFaultStat_PDM_Sec_oSecuritySubnet_18d76dd4_Rx 259
#define ComConf_ComGroupSignal_DiagFaultStat_PDM_FailTA_ISig_10_oDiagFaultStat_PDM_Sec_oSecuritySubnet_f97fdbc3_Rx 260
#define ComConf_ComGroupSignal_DiagFaultStat_PDM_FailTB_ISig_10_oDiagFaultStat_PDM_Sec_oSecuritySubnet_bfadeea7_Rx 261
#define ComConf_ComGroupSignal_DiagFaultStat_SRS_DtcIdA_ISig_5_oDiagFaultStat_SRS_Cab_oCabSubnet_51cfef3d_Rx 262
#define ComConf_ComGroupSignal_DiagFaultStat_SRS_DtcIdB_ISig_5_oDiagFaultStat_SRS_Cab_oCabSubnet_69f4644e_Rx 263
#define ComConf_ComGroupSignal_DiagFaultStat_SRS_EcuAdr_ISig_5_oDiagFaultStat_SRS_Cab_oCabSubnet_cced2b20_Rx 264
#define ComConf_ComGroupSignal_DiagFaultStat_SRS_FailTA_ISig_5_oDiagFaultStat_SRS_Cab_oCabSubnet_2bc7e355_Rx 265
#define ComConf_ComGroupSignal_DiagFaultStat_SRS_FailTB_ISig_5_oDiagFaultStat_SRS_Cab_oCabSubnet_13fc6826_Rx 266
#define ComConf_ComGroupSignal_DiagFaultStat_WRCS_DtcIdA_ISig_5_oDiagFaultStat_WRCS_Cab_oCabSubnet_bacb970a_Rx 267
#define ComConf_ComGroupSignal_DiagFaultStat_WRCS_DtcIdB_ISig_5_oDiagFaultStat_WRCS_Cab_oCabSubnet_73ff8c07_Rx 268
#define ComConf_ComGroupSignal_DiagFaultStat_WRCS_EcuAdr_ISig_5_oDiagFaultStat_WRCS_Cab_oCabSubnet_d950d917_Rx 269
#define ComConf_ComGroupSignal_DiagFaultStat_WRCS_FailTA_ISig_5_oDiagFaultStat_WRCS_Cab_oCabSubnet_f9d8766c_Rx 270
#define ComConf_ComGroupSignal_DiagFaultStat_WRCS_FailTB_ISig_5_oDiagFaultStat_WRCS_Cab_oCabSubnet_30ec6d61_Rx 271
#define ComConf_ComGroupSignal_ESCReqESC_CtrlTrimMode_ISig_4_oVMCU_BB2_05P_oBackbone2_01d7f770_Rx 310
#define ComConf_ComGroupSignal_ESCReqESC_CtrlTrimReq_ISig_4_oVMCU_BB2_05P_oBackbone2_b0bbc036_Rx 311
#define ComConf_ComGroupSignal_ESCReqESC_CtrlTrimStat_ISig_4_oVMCU_BB2_05P_oBackbone2_0e288e06_Rx 312
#define ComConf_ComGroupSignal_ESCReqESC_CtrlTrimValue_ISig_4_oVMCU_BB2_05P_oBackbone2_fcd53bb7_Rx 313
#define ComConf_ComGroupSignal_EngineTimer_stat_Timer1Hours_ISig_5_oCCM_Cab_03P_oCabSubnet_9326d52f_Rx 328
#define ComConf_ComGroupSignal_EngineTimer_stat_Timer1Minutes_ISig_5_oCCM_Cab_03P_oCabSubnet_1aa68fed_Rx 329
#define ComConf_ComGroupSignal_EngineTimer_stat_Timer1Recurr_ISig_5_oCCM_Cab_03P_oCabSubnet_1a1c6dcb_Rx 330
#define ComConf_ComGroupSignal_EngineTimer_stat_Timer1StartDay_ISig_5_oCCM_Cab_03P_oCabSubnet_07bac5c2_Rx 331
#define ComConf_ComGroupSignal_EngineTimer_stat_Timer1_Status_ISig_5_oCCM_Cab_03P_oCabSubnet_b1dd8981_Rx 332
#define ComConf_ComGroupSignal_EngineTimer_stat_Timer2Hours_ISig_5_oCCM_Cab_03P_oCabSubnet_c947ea4f_Rx 333
#define ComConf_ComGroupSignal_EngineTimer_stat_Timer2Minutes_ISig_5_oCCM_Cab_03P_oCabSubnet_c93d9316_Rx 334
#define ComConf_ComGroupSignal_EngineTimer_stat_Timer2Recurr_ISig_5_oCCM_Cab_03P_oCabSubnet_57f46dac_Rx 335
#define ComConf_ComGroupSignal_EngineTimer_stat_Timer2StartDay_ISig_5_oCCM_Cab_03P_oCabSubnet_2d06754a_Rx 336
#define ComConf_ComGroupSignal_EngineTimer_stat_Timer2_Status_ISig_5_oCCM_Cab_03P_oCabSubnet_6246957a_Rx 337
#define ComConf_ComGroupSignal_EngineTimer_stat_Timer3Hours_ISig_5_oCCM_Cab_03P_oCabSubnet_49b7fd50_Rx 338
#define ComConf_ComGroupSignal_EngineTimer_stat_Timer3Minutes_ISig_5_oCCM_Cab_03P_oCabSubnet_87b498bf_Rx 339
#define ComConf_ComGroupSignal_EngineTimer_stat_Timer3Recurr_ISig_5_oCCM_Cab_03P_oCabSubnet_da7c904e_Rx 340
#define ComConf_ComGroupSignal_EngineTimer_stat_Timer3StartDay_ISig_5_oCCM_Cab_03P_oCabSubnet_8242e70d_Rx 341
#define ComConf_ComGroupSignal_EngineTimer_stat_Timer3_Status_ISig_5_oCCM_Cab_03P_oCabSubnet_2ccf9ed3_Rx 342
#define ComConf_ComGroupSignal_FMS1_Blockid_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_8939d795_Rx 356
#define ComConf_ComGroupSignal_FMS1_TellTaleStatus1_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_7e54b9f0_Rx 357
#define ComConf_ComGroupSignal_FMS1_TellTaleStatus2_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_adcfa50b_Rx 358
#define ComConf_ComGroupSignal_FMS1_TellTaleStatus3_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_e346aea2_Rx 359
#define ComConf_ComGroupSignal_FMS1_TellTaleStatus4_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_d1889abc_Rx 360
#define ComConf_ComGroupSignal_FMS1_TellTaleStatus5_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_9f019115_Rx 361
#define ComConf_ComGroupSignal_FMS1_TellTaleStatus6_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_4c9a8dee_Rx 362
#define ComConf_ComGroupSignal_FMS1_TellTaleStatus7_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_02138647_Rx 363
#define ComConf_ComGroupSignal_FMS1_TellTaleStatus8_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_2906e5d2_Rx 364
#define ComConf_ComGroupSignal_FMS1_TellTaleStatus9_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_678fee7b_Rx 365
#define ComConf_ComGroupSignal_FMS1_TellTaleStatus10_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_25e48308_Rx 366
#define ComConf_ComGroupSignal_FMS1_TellTaleStatus11_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_6b6d88a1_Rx 367
#define ComConf_ComGroupSignal_FMS1_TellTaleStatus12_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_b8f6945a_Rx 368
#define ComConf_ComGroupSignal_FMS1_TellTaleStatus13_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_f67f9ff3_Rx 369
#define ComConf_ComGroupSignal_FMS1_TellTaleStatus14_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_c4b1abed_Rx 370
#define ComConf_ComGroupSignal_FMS1_TellTaleStatus15_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_8a38a044_Rx 371
#define ComConf_ComGroupSignal_FPBRMMIStat_FPBRChangeAck_ISig_4_oVMCU_BB2_74P_oBackbone2_a405c2cc_Rx 372
#define ComConf_ComGroupSignal_FPBRMMIStat_FPBRStatusInd_ISig_4_oVMCU_BB2_74P_oBackbone2_9deb660c_Rx 373
#define ComConf_ComGroupSignal_GPSData_Altitude_ISig_4_56a_oHMIIOM_BB2_19P_CIOM_oBackbone2_6fc2eafa_Rx 422
#define ComConf_ComGroupSignal_GPSData_AntennaStat_ISig_4_56a_oHMIIOM_BB2_19P_CIOM_oBackbone2_96ede970_Rx 423
#define ComConf_ComGroupSignal_GPSData_Direction_ISig_4_56a_oHMIIOM_BB2_19P_CIOM_oBackbone2_1a354dd4_Rx 424
#define ComConf_ComGroupSignal_GPSData_HDOP_ISig_4_56a_oHMIIOM_BB2_19P_CIOM_oBackbone2_c5c4ed82_Rx 425
#define ComConf_ComGroupSignal_GPSData_Latitude_ISig_4_56a_oHMIIOM_BB2_19P_CIOM_oBackbone2_df6ff682_Rx 426
#define ComConf_ComGroupSignal_GPSData_Longitude_ISig_4_56a_oHMIIOM_BB2_19P_CIOM_oBackbone2_38eddc5b_Rx 427
#define ComConf_ComGroupSignal_GPSData_Time_ISig_4_56a_oHMIIOM_BB2_19P_CIOM_oBackbone2_6aa8078e_Rx 428
#define ComConf_ComGroupSignal_GPSData_VehSpeed_ISig_4_56a_oHMIIOM_BB2_19P_CIOM_oBackbone2_ebc79e38_Rx 429
#define ComConf_ComGroupSignal_IntLightMode_CoreRqst_EventFlag_oVMCU_BB2_03P_oBackbone2_1c89edce_Rx 439
#define ComConf_ComGroupSignal_IntLightMode_CoreRqst_IL_Mode_oVMCU_BB2_03P_oBackbone2_d008b1de_Rx 440
#define ComConf_ComGroupSignal_LIN_AlmClkSetCurAlm_rqst_ID_oLECM2toCIOM_FR1_L1_oLIN00_6f7167c5_Rx 456
#define ComConf_ComGroupSignal_LIN_AlmClkSetCurAlm_rqst_SetHr_oLECM2toCIOM_FR1_L1_oLIN00_a212d04d_Rx 457
#define ComConf_ComGroupSignal_LIN_AlmClkSetCurAlm_rqst_SetMin_oLECM2toCIOM_FR1_L1_oLIN00_ef20f768_Rx 458
#define ComConf_ComGroupSignal_LIN_AlmClkSetCurAlm_rqst_Stat_oLECM2toCIOM_FR1_L1_oLIN00_2711b94b_Rx 459
#define ComConf_ComGroupSignal_LIN_AlmClkSetCurAlm_rqst_Type_oLECM2toCIOM_FR1_L1_oLIN00_05162ab9_Rx 460
#define ComConf_ComGroupSignal_LIN_BunkH2PHTi_rqs_DurnTimeHr_oLECM2toCIOM_FR3_L1_oLIN00_5d2e274e_Rx 478
#define ComConf_ComGroupSignal_LIN_BunkH2PHTi_rqs_DurnTimeMin_oLECM2toCIOM_FR3_L1_oLIN00_c281bd7b_Rx 479
#define ComConf_ComGroupSignal_LIN_BunkH2PHTi_rqs_StartTimeHr_oLECM2toCIOM_FR3_L1_oLIN00_68595ad8_Rx 480
#define ComConf_ComGroupSignal_LIN_BunkH2PHTi_rqs_StartTimeMin_oLECM2toCIOM_FR3_L1_oLIN00_dbd8fc77_Rx 481
#define ComConf_ComGroupSignal_LIN_BunkH2PHTi_rqs_Timer_cmd_oLECM2toCIOM_FR3_L1_oLIN00_f01ce601_Rx 482
#define ComConf_ComGroupSignal_MaintService_CalDateID_ISig_4_576_oVMCU_BB2_57P_oBackbone2_ab280ec2_Rx 556
#define ComConf_ComGroupSignal_MaintService_DistID_ISig_4_576_oVMCU_BB2_57P_oBackbone2_dcca4c40_Rx 557
#define ComConf_ComGroupSignal_MaintService_EngTimeID_ISig_4_576_oVMCU_BB2_57P_oBackbone2_0bf0dca5_Rx 558
#define ComConf_ComGroupSignal_MaintService_ServiceCalendarTime_ISig_4_576_oVMCU_BB2_57P_oBackbone2_b4729c7a_Rx 559
#define ComConf_ComGroupSignal_MaintService_ServiceDistance_ISig_4_576_oVMCU_BB2_57P_oBackbone2_0d61f513_Rx 560
#define ComConf_ComGroupSignal_MaintService_ServiceEngineTime_ISig_4_576_oVMCU_BB2_57P_oBackbone2_2c9fcce6_Rx 561
#define ComConf_ComGroupSignal_MediaSourcesListReq_ItemID_ISig_5_oLECM1_Cab_05S_oCabSubnet_82ce4543_Rx 563
#define ComConf_ComGroupSignal_MediaSourcesListReq_Items_ISig_5_oLECM1_Cab_05S_oCabSubnet_ed07effa_Rx 564
#define ComConf_ComGroupSignal_MediaSourcesListReq_SInfo_ISig_5_oLECM1_Cab_05S_oCabSubnet_a6ff95db_Rx 565
#define ComConf_ComGroupSignal_MediaSourcesListRsp_ItemID_ISig_4_oHMIIOM_BB2_35S_oBackbone2_dec6c791_Rx 566
#define ComConf_ComGroupSignal_MediaSourcesListRsp_Name_ISig_4_oHMIIOM_BB2_35S_oBackbone2_46c28b07_Rx 567
#define ComConf_ComGroupSignal_MediaSourcesListRsp_PCI_ISig_4_oHMIIOM_BB2_35S_oBackbone2_b7aa1127_Rx 568
#define ComConf_ComGroupSignal_MediaSourcesListRsp_SInfo_ISig_4_oHMIIOM_BB2_35S_oBackbone2_e959cc9d_Rx 569
#define ComConf_ComGroupSignal_MediaSourcesListRsp_SrcAttrib_ISig_4_oHMIIOM_BB2_35S_oBackbone2_349b903a_Rx 570
#define ComConf_ComGroupSignal_OilPrediction_Quality_oEMS_BB2_06P_oBackbone2_5d1bf68a_Rx 580
#define ComConf_ComGroupSignal_OilPrediction_RemainDist_oEMS_BB2_06P_oBackbone2_a901fc0e_Rx 581
#define ComConf_ComGroupSignal_OilPrediction_RemainTime_oEMS_BB2_06P_oBackbone2_8f6731cb_Rx 582
#define ComConf_ComGroupSignal_OilPrediction_Status_oEMS_BB2_06P_oBackbone2_e3a3364a_Rx 583
#define ComConf_ComGroupSignal_PHTimer1_stat_Duration_ISig_5_oCCM_Cab_07P_oCabSubnet_e7bef727_Rx 585
#define ComConf_ComGroupSignal_PHTimer1_stat_Hours_ISig_5_oCCM_Cab_07P_oCabSubnet_4ed3a10a_Rx 586
#define ComConf_ComGroupSignal_PHTimer1_stat_Minutes_ISig_5_oCCM_Cab_07P_oCabSubnet_eff8382f_Rx 587
#define ComConf_ComGroupSignal_PHTimer1_stat_Recurrence_ISig_5_oCCM_Cab_07P_oCabSubnet_2bdc8eae_Rx 588
#define ComConf_ComGroupSignal_PHTimer1_stat_StartDay_ISig_5_oCCM_Cab_07P_oCabSubnet_ab30dd64_Rx 589
#define ComConf_ComGroupSignal_PHTimer1_stat_Status_ISig_5_oCCM_Cab_07P_oCabSubnet_6dd98737_Rx 590
#define ComConf_ComGroupSignal_PHTimer1_stat_Temp_ISig_5_oCCM_Cab_07P_oCabSubnet_18896c47_Rx 591
#define ComConf_ComGroupSignal_PHTimer2_stat_Hours_ISig_5_oCCM_Cab_08P_oCabSubnet_a0976f32_Rx 592
#define ComConf_ComGroupSignal_PHTimer2_stat_Minutes_ISig_5_oCCM_Cab_08P_oCabSubnet_f743938f_Rx 593
#define ComConf_ComGroupSignal_PHTimer2_stat_Recurrence_ISig_5_oCCM_Cab_08P_oCabSubnet_4a7e6eff_Rx 594
#define ComConf_ComGroupSignal_PHTimer2_stat_StartDay_ISig_5_oCCM_Cab_08P_oCabSubnet_0c1aa4e4_Rx 595
#define ComConf_ComGroupSignal_PHTimer2_stat_Status_ISig_5_oCCM_Cab_08P_oCabSubnet_34d11aa4_Rx 596
#define ComConf_ComGroupSignal_PHTimer2_stat_Temp_ISig_5_oCCM_Cab_08P_oCabSubnet_07c23201_Rx 597
#define ComConf_ComGroupSignal_PHTimer3_stat_Hours_ISig_5_oCCM_Cab_08P_oCabSubnet_e78499c9_Rx 598
#define ComConf_ComGroupSignal_PHTimer3_stat_Minutes_ISig_5_oCCM_Cab_08P_oCabSubnet_54d5bbc3_Rx 599
#define ComConf_ComGroupSignal_PHTimer3_stat_Recurrence_ISig_5_oCCM_Cab_08P_oCabSubnet_77cf8223_Rx 600
#define ComConf_ComGroupSignal_PHTimer3_stat_StartDay_ISig_5_oCCM_Cab_08P_oCabSubnet_73d33f77_Rx 601
#define ComConf_ComGroupSignal_PHTimer3_stat_Status_ISig_5_oCCM_Cab_08P_oCabSubnet_1ef922c6_Rx 602
#define ComConf_ComGroupSignal_PHTimer3_stat_Temp_ISig_5_oCCM_Cab_08P_oCabSubnet_a6fbb6ef_Rx 603
#define ComConf_ComGroupSignal_PHTimerRqstAck_CurrentOp_ISig_4_oVMCU_BB2_110P_oBackbone2_f5da355b_Rx 604
#define ComConf_ComGroupSignal_PHTimerRqstAck_DayOfWeekRq_ISig_4_oVMCU_BB2_110P_oBackbone2_3472d091_Rx 605
#define ComConf_ComGroupSignal_PHTimerRqstAck_Hours_ISig_4_oVMCU_BB2_110P_oBackbone2_7ba6bb25_Rx 606
#define ComConf_ComGroupSignal_PHTimerRqstAck_Minutes_ISig_4_oVMCU_BB2_110P_oBackbone2_a16836a7_Rx 607
#define ComConf_ComGroupSignal_PHTimer_rqst_DayOfWeekRq_ISig_5_oCCM_Cab_04P_oCabSubnet_9206df96_Rx 608
#define ComConf_ComGroupSignal_PHTimer_rqst_Hours_ISig_5_oCCM_Cab_04P_oCabSubnet_b31bda0c_Rx 609
#define ComConf_ComGroupSignal_PHTimer_rqst_Minutes_ISig_5_oCCM_Cab_04P_oCabSubnet_d2c2cc62_Rx 610
#define ComConf_ComGroupSignal_PHTimer_rqst_SetAlarmOper_ISig_5_oCCM_Cab_04P_oCabSubnet_85dceea5_Rx 611
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_SInfo_ISig_4_oHMIIOM_BB2_33P_oBackbone2_def9fef6_Rx 672
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source00_ISig_4_oHMIIOM_BB2_33P_oBackbone2_8bab8514_Rx 673
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source01_ISig_4_oHMIIOM_BB2_33P_oBackbone2_443592dc_Rx 674
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source02_ISig_4_oHMIIOM_BB2_33P_oBackbone2_cfe6acc5_Rx 675
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source03_ISig_4_oHMIIOM_BB2_33P_oBackbone2_0078bb0d_Rx 676
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source04_ISig_4_oHMIIOM_BB2_33P_oBackbone2_0331d6b6_Rx 677
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source05_ISig_4_oHMIIOM_BB2_33P_oBackbone2_ccafc17e_Rx 678
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source06_ISig_4_oHMIIOM_BB2_33P_oBackbone2_477cff67_Rx 679
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source07_ISig_4_oHMIIOM_BB2_33P_oBackbone2_88e2e8af_Rx 680
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source08_ISig_4_oHMIIOM_BB2_33P_oBackbone2_41ee2411_Rx 681
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source09_ISig_4_oHMIIOM_BB2_33P_oBackbone2_8e7033d9_Rx 682
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source10_ISig_4_oHMIIOM_BB2_33P_oBackbone2_1edb5181_Rx 683
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source11_ISig_4_oHMIIOM_BB2_33P_oBackbone2_d1454649_Rx 684
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source12_ISig_4_oHMIIOM_BB2_33P_oBackbone2_5a967850_Rx 685
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source13_ISig_4_oHMIIOM_BB2_33P_oBackbone2_95086f98_Rx 686
#define ComConf_ComGroupSignal_SRS2_SNPN_Byte0_oSRS_Cab_05P_oCabSubnet_1b342d85_Rx 691
#define ComConf_ComGroupSignal_SRS2_SNPN_Byte1_oSRS_Cab_05P_oCabSubnet_bebfbd8b_Rx 692
#define ComConf_ComGroupSignal_SRS2_SNPN_Byte2_oSRS_Cab_05P_oCabSubnet_8b520bd8_Rx 693
#define ComConf_ComGroupSignal_SRS2_SNPN_Byte3_oSRS_Cab_05P_oCabSubnet_2ed99bd6_Rx 694
#define ComConf_ComGroupSignal_SRS2_SNPN_Byte4_oSRS_Cab_05P_oCabSubnet_e089677e_Rx 695
#define ComConf_ComGroupSignal_SRS2_SN_Byte0_oSRS_Cab_06P_oCabSubnet_4fc90499_Rx 696
#define ComConf_ComGroupSignal_SRS2_SN_Byte1_oSRS_Cab_06P_oCabSubnet_ea429497_Rx 697
#define ComConf_ComGroupSignal_SRS2_SN_Byte2_oSRS_Cab_06P_oCabSubnet_dfaf22c4_Rx 698
#define ComConf_ComGroupSignal_SRS2_SN_Byte3_oSRS_Cab_06P_oCabSubnet_7a24b2ca_Rx 699
#define ComConf_ComGroupSignal_SetParkClimTimerRqst_Dur_ISig_4_oIC3_BB2_01S_oBackbone2_743dc6f8_Rx 710
#define ComConf_ComGroupSignal_SetParkClimTimerRqst_Fri_ISig_4_oIC3_BB2_01S_oBackbone2_8ab6c44f_Rx 711
#define ComConf_ComGroupSignal_SetParkClimTimerRqst_Hrs_ISig_4_oIC3_BB2_01S_oBackbone2_6850faa2_Rx 712
#define ComConf_ComGroupSignal_SetParkClimTimerRqst_Min_ISig_4_oIC3_BB2_01S_oBackbone2_4eff990f_Rx 713
#define ComConf_ComGroupSignal_SetParkClimTimerRqst_Mon_ISig_4_oIC3_BB2_01S_oBackbone2_f8d0fb25_Rx 714
#define ComConf_ComGroupSignal_SetParkClimTimerRqst_Rec_ISig_4_oIC3_BB2_01S_oBackbone2_bfce511e_Rx 715
#define ComConf_ComGroupSignal_SetParkClimTimerRqst_Sat_ISig_4_oIC3_BB2_01S_oBackbone2_e54a3f98_Rx 716
#define ComConf_ComGroupSignal_SetParkClimTimerRqst_Sun_ISig_4_oIC3_BB2_01S_oBackbone2_21c3284e_Rx 717
#define ComConf_ComGroupSignal_SetParkClimTimerRqst_Temp_ISig_4_oIC3_BB2_01S_oBackbone2_fa1a5255_Rx 718
#define ComConf_ComGroupSignal_SetParkClimTimerRqst_Thu_ISig_4_oIC3_BB2_01S_oBackbone2_b1089c9a_Rx 719
#define ComConf_ComGroupSignal_SetParkClimTimerRqst_TimerCmd_ISig_4_oIC3_BB2_01S_oBackbone2_520fb70c_Rx 720
#define ComConf_ComGroupSignal_SetParkClimTimerRqst_TimerNr_ISig_4_oIC3_BB2_01S_oBackbone2_ae46acf6_Rx 721
#define ComConf_ComGroupSignal_SetParkClimTimerRqst_Tue_ISig_4_oIC3_BB2_01S_oBackbone2_f447a327_Rx 722
#define ComConf_ComGroupSignal_SetParkClimTimerRqst_Type_ISig_4_oIC3_BB2_01S_oBackbone2_77d9a0e2_Rx 723
#define ComConf_ComGroupSignal_SetParkClimTimerRqst_Wed_ISig_4_oIC3_BB2_01S_oBackbone2_b1d05665_Rx 724
#define ComConf_ComGroupSignal_Trail1Type_Towing_ISig_4_oVMCU_BB2_91P_oBackbone2_34ee2eba_Rx 785
#define ComConf_ComGroupSignal_Trail1Type_TrailType_ISig_4_oVMCU_BB2_91P_oBackbone2_8358a038_Rx 786
#define ComConf_ComGroupSignal_Trail2Type_Towing_ISig_4_oVMCU_BB2_91P_oBackbone2_4a96661c_Rx 795
#define ComConf_ComGroupSignal_Trail2Type_TrailType_ISig_4_oVMCU_BB2_91P_oBackbone2_38d3bd97_Rx 796
#define ComConf_ComGroupSignal_Trail3Type_Towing_ISig_4_oVMCU_BB2_92P_oBackbone2_dd7432b0_Rx 805
#define ComConf_ComGroupSignal_Trail3Type_TrailType_ISig_4_oVMCU_BB2_92P_oBackbone2_ec60da3c_Rx 806
#define ComConf_ComGroupSignal_Trail4Type_Towing_ISig_4_oVMCU_BB2_92P_oBackbone2_0bac9b9e_Rx 815
#define ComConf_ComGroupSignal_Trail4Type_TrailType_ISig_4_oVMCU_BB2_92P_oBackbone2_297eec46_Rx 816
#define ComConf_ComGroupSignal_Trail5Type_Towing_ISig_4_oVMCU_BB2_92P_oBackbone2_2184a3fc_Rx 825
#define ComConf_ComGroupSignal_Trail5Type_TrailType_ISig_4_oVMCU_BB2_92P_oBackbone2_4007e723_Rx 826
#define ComConf_ComGroupSignal_UpdParkClimTimerRqst_TimRqst_ISig_4_oIC3_BB2_03S_oBackbone2_399ced81_Rx 831
#define ComConf_ComGroupSignal_UpdParkClimTimerRqst_TimerCmd_ISig_4_oIC3_BB2_03S_oBackbone2_a3079731_Rx 832
#define ComConf_ComSignal_ABSInhibitionStatus_ISig_3_oEBS_BB1_02P_oBackbone1J1939_14d96a66_Rx 0
#define ComConf_ComSignal_ABS_ButtonIndication_oHMIIOM_BB2_39P_oBackbone2_3343e277_Rx 1
#define ComConf_ComSignal_AC2CoolingFanControl_rqst_oVMCU_BB2_80P_oBackbone2_517f4b55_Rx 2
#define ComConf_ComSignal_ACCEnableRqst_oHMIIOM_BB2_01P_oBackbone2_a28d1007_Rx 3
#define ComConf_ComSignal_ACCoolingFanSpeedRequest_CCM_oCCM_Cab_01P_oCabSubnet_3e4f5a7d_Rx 4
#define ComConf_ComSignal_ACModeRqst_ISig_4_oIC3_BB2_02P_oBackbone2_055bddad_Rx 5
#define ComConf_ComSignal_AC_CompressorClutchCmd_ISig_5_oCCM_Cab_04P_oCabSubnet_fbd40acf_Rx 6
#define ComConf_ComSignal_ACdisplayIndication_Cmd_ISig_5_oCCM_Cab_01P_oCabSubnet_a4596e32_Rx 7
#define ComConf_ComSignal_ACmode_IndicationCmd_ISig_5_oCCM_Cab_04P_oCabSubnet_258b28f0_Rx 8
#define ComConf_ComSignal_AQSModeRqst_ISig_4_oIC3_BB2_02P_oBackbone2_b7186c02_Rx 9
#define ComConf_ComSignal_AQSmodeIndication_Cmd_ISig_5_oCCM_Cab_01P_oCabSubnet_b543f96c_Rx 10
#define ComConf_ComSignal_ASLStates_oVMCU_BB2_51P_oBackbone2_eef8c697_Rx 11
#define ComConf_ComSignal_ASRHillHolderSwitch_ISig_3_oEBC1_X_EBS_oBackbone1J1939_ae8948e3_Rx 12
#define ComConf_ComSignal_ATC_ButtonIndication_oHMIIOM_BB2_39P_oBackbone2_4016be26_Rx 13
#define ComConf_ComSignal_AcCoolantPumpEngagementRequest_ISig_5_oCCM_Cab_06P_oCabSubnet_187dfc7a_Rx 14
#define ComConf_ComSignal_AcceleratorPedalPosition1_ISig_3_oVMCU_BB1_01P_oBackbone1J1939_7025a200_Rx 15
#define ComConf_ComSignal_AcceleratorPedalStatus_ISig_4_oVMCU_BB2_52P_oBackbone2_c6b3ef9e_Rx 16
#define ComConf_ComSignal_ActualDrvlnRetdrPercentTorque_ISig_3_oERC1_X_RECU_oBackbone1J1939_b2bc1e25_Rx 17
#define ComConf_ComSignal_ActualEnginePercentTorque_ISig_3_oEEC1_X_EMS_oBackbone1J1939_cfb19d75_Rx 18
#define ComConf_ComSignal_ActualEngineRetarderPercentTrq_ISig_3_oERC1_X_EMSRet_oBackbone1J1939_d87209ba_Rx 19
#define ComConf_ComSignal_AirbagTelltale_stat_ISig_4_oIC3_BB2_02P_oBackbone2_b69c38b7_Rx 20
#define ComConf_ComSignal_AlarmStatus_stat_ISig_10_oAlarm_Sec_02P_oSecuritySubnet_14de6466_Rx 31
#define ComConf_ComSignal_AlarmTriggeringCause_stat_ISig_10_oAlarm_Sec_02P_oSecuritySubnet_4fa999d2_Rx 32
#define ComConf_ComSignal_AmbientAirTemperature_ISig_3_oAMB_X_VMCU_oBackbone1J1939_a102c408_Rx 47
#define ComConf_ComSignal_AnmSig_Alarm_SecuritySubnet_oAnmMsg_Alarm_SecuritySubnet_oSecuritySubnet_b4bb691c_Rx 48
#define ComConf_ComSignal_AnmSig_BBM_Backbone2_oAnmMsg_BBM_Backbone2_oBackbone2_396d1d95_Rx 49
#define ComConf_ComSignal_AnmSig_CCM_CabSubnet_oAnmMsg_CCM_CabSubnet_oCabSubnet_eb4ad192_Rx 50
#define ComConf_ComSignal_AnmSig_DACU_Backbone2_oAnmMsg_DACU_Backbone2_oBackbone2_82fc6af4_Rx 51
#define ComConf_ComSignal_AnmSig_DDM_SecuritySubnet_oAnmMsg_DDM_SecuritySubnet_oSecuritySubnet_b331a2fd_Rx 52
#define ComConf_ComSignal_AnmSig_ECUspare1_Backbone2_oAnmMsg_ECUspare1_Backbone2_oBackbone2_9471a62d_Rx 53
#define ComConf_ComSignal_AnmSig_ECUspare2_Backbone2_oAnmMsg_ECUspare2_Backbone2_oBackbone2_fa2b273f_Rx 54
#define ComConf_ComSignal_AnmSig_ECUspare5_SecuritySubnet_oAnmMsg_ECUspare5_SecuritySubnet_oSecuritySubnet_c77f9883_Rx 55
#define ComConf_ComSignal_AnmSig_ECUspare6_CabSubnet_oAnmMsg_ECUspare6_CabSubnet_oCabSubnet_b891e97c_Rx 56
#define ComConf_ComSignal_AnmSig_EMS_Backbone2_oAnmMsg_EMS_Backbone2_oBackbone2_c10b5f2c_Rx 57
#define ComConf_ComSignal_AnmSig_IC3_Backbone2_oAnmMsg_IC3_Backbone2_oBackbone2_15db4986_Rx 58
#define ComConf_ComSignal_AnmSig_LECM1_CabSubnet_oAnmMsg_LECM1_CabSubnet_oCabSubnet_e04b322d_Rx 59
#define ComConf_ComSignal_AnmSig_PDM_SecuritySubnet_oAnmMsg_PDM_SecuritySubnet_oSecuritySubnet_99da07cf_Rx 60
#define ComConf_ComSignal_AnmSig_SRS_CabSubnet_oAnmMsg_SRS_CabSubnet_oCabSubnet_deb2073e_Rx 61
#define ComConf_ComSignal_AnmSig_TECU_Backbone2_oAnmMsg_TECU_Backbone2_oBackbone2_a0843952_Rx 62
#define ComConf_ComSignal_AnmSig_VMCU_Backbone2_oAnmMsg_VMCU_Backbone2_oBackbone2_64a6ada3_Rx 63
#define ComConf_ComSignal_AnmSig_WRCS_CabSubnet_oAnmMsg_WRCS_CabSubnet_oCabSubnet_a4bc01b1_Rx 64
#define ComConf_ComSignal_AntiLockBrakingActive_ISig_3_oEBC1_X_EBS_oBackbone1J1939_8911a28c_Rx 65
#define ComConf_ComSignal_Area_9level_Indication_cmd_ISig_5_oCCM_Cab_01P_oCabSubnet_e51d2cdf_Rx 66
#define ComConf_ComSignal_AudioSourceStat_ISig_4_oHMIIOM_BB2_33P_oBackbone2_acdd67a3_Rx 67
#define ComConf_ComSignal_AutoBlowerLevelIndication_Cmd_ISig_5_oCCM_Cab_01P_oCabSubnet_14babdd0_Rx 68
#define ComConf_ComSignal_AutoBlowerLevelRqst_ISig_4_oIC3_BB2_02P_oBackbone2_2b473fa4_Rx 69
#define ComConf_ComSignal_AutoDefogIndication_Cmd_ISig_5_oCCM_Cab_01P_oCabSubnet_d8c73a4e_Rx 70
#define ComConf_ComSignal_AutoDefogModeRqst_ISig_4_oIC3_BB2_02P_oBackbone2_43f2b3c4_Rx 71
#define ComConf_ComSignal_AutoMode_IndicationCmd_ISig_5_oCCM_Cab_01P_oCabSubnet_0263602d_Rx 72
#define ComConf_ComSignal_AutorelockingMovements_stat_oAlarm_Sec_02P_oSecuritySubnet_c816460c_Rx 73
#define ComConf_ComSignal_AuxSwitchBbLoad1_Status_ISig_4_oVMCU_BB2_53P_oBackbone2_68beafdf_Rx 74
#define ComConf_ComSignal_AuxSwitchBbLoad2_Status_ISig_4_oVMCU_BB2_53P_oBackbone2_42021f57_Rx 75
#define ComConf_ComSignal_AuxSwitchBbLoad3_Status_ISig_4_oVMCU_BB2_53P_oBackbone2_ed468d10_Rx 76
#define ComConf_ComSignal_AuxSwitchBbLoad4_Status_ISig_4_oVMCU_BB2_53P_oBackbone2_177b7e47_Rx 77
#define ComConf_ComSignal_AuxSwitchBbLoad5_Status_ISig_4_oVMCU_BB2_53P_oBackbone2_b83fec00_Rx 78
#define ComConf_ComSignal_AuxSwitchBbLoad6_Status_ISig_4_oVMCU_BB2_53P_oBackbone2_92835c88_Rx 79
#define ComConf_ComSignal_BBNetwBeaconLight_stat_oBBM_BB2_02P_oBackbone2_0af6e9b5_Rx 80
#define ComConf_ComSignal_BBNetwBodyOrCabWrknLight_stat_oBBM_BB2_02P_oBackbone2_1a41cb1a_Rx 81
#define ComConf_ComSignal_BBNetwExtraSWrknLight_stat_oBBM_BB2_02P_oBackbone2_1307995b_Rx 82
#define ComConf_ComSignal_BBNetwTrailerBodyLighting_rqst_oBBM_BB2_02P_oBackbone2_a59c16c2_Rx 83
#define ComConf_ComSignal_BBNetwWrknLightChassis_stat_oBBM_BB2_02P_oBackbone2_d6b6577a_Rx 84
#define ComConf_ComSignal_BackToDriveReqACK_ISig_4_oVMCU_BB2_01P_oBackbone2_220da73b_Rx 85
#define ComConf_ComSignal_BacklightCmd_ISig_4_oHMIIOM_BB2_01P_oBackbone2_253a48e3_Rx 86
#define ComConf_ComSignal_BacklightLevelHighRes2_ISig_4_oHMIIOM_BB2_22P_oBackbone2_acafb4db_Rx 87
#define ComConf_ComSignal_BatterySOCAlertRawData_rqst_ISig_4_oVMCU_BB2_58P_oBackbone2_f341a23b_Rx 88
#define ComConf_ComSignal_BatterySOCAlert_rqst_ISig_4_oVMCU_BB2_55P_oBackbone2_86f3a037_Rx 89
#define ComConf_ComSignal_BodyOrCabWorkingLightFdbk_stat_ISig_4_oVMCU_BB2_08P_oBackbone2_6dee2288_Rx 92
#define ComConf_ComSignal_BrakePedalPosition_ISig_3_oVMCU_BB1_01P_oBackbone1J1939_d453118a_Rx 93
#define ComConf_ComSignal_BrakeSwitch_ISig_3_oCCVS_X_VMCU_oBackbone1J1939_f9976b4d_Rx 94
#define ComConf_ComSignal_BunkBacklightCmd_ISig_4_oHMIIOM_BB2_07P_oBackbone2_c6b4b319_Rx 95
#define ComConf_ComSignal_BunkH1AudioOnOff_ButtonStatus_ISig_5_oLECM1_Cab_02P_oCabSubnet_eabdf0fa_Rx 96
#define ComConf_ComSignal_BunkH1AudioSource_rqst2_ISig_5_oLECM1_Cab_02P_oCabSubnet_983516fc_Rx 97
#define ComConf_ComSignal_BunkH1AudioSource_rqst_ISig_5_oLECM1_Cab_02P_oCabSubnet_25671347_Rx 98
#define ComConf_ComSignal_BunkH1AudioSrcSem_rqst_ISig_5_oLECM1_Cab_04P_oCabSubnet_88ac8963_Rx 99
#define ComConf_ComSignal_BunkH1IntLghtActvnBtn_stat_oLECM1_Cab_02P_oCabSubnet_20e1888b_Rx 100
#define ComConf_ComSignal_BunkH1IntLghtDirAccsDnBtn_stat_oLECM1_Cab_02P_oCabSubnet_9b517646_Rx 101
#define ComConf_ComSignal_BunkH1IntLghtDirAccsUpBtn_stat_oLECM1_Cab_02P_oCabSubnet_a6085fb2_Rx 102
#define ComConf_ComSignal_BunkH1LockButtonStatus_oLECM1_Cab_02P_oCabSubnet_493c9af1_Rx 103
#define ComConf_ComSignal_BunkH1Mute_ButtonStatus_ISig_5_oLECM1_Cab_02P_oCabSubnet_6e4b6bc7_Rx 104
#define ComConf_ComSignal_BunkH1Next_ButtonStatus_ISig_5_oLECM1_Cab_02P_oCabSubnet_29b3ea49_Rx 105
#define ComConf_ComSignal_BunkH1PowerWinCloseDSBtn_stat_ISig_5_oLECM1_Cab_02P_oCabSubnet_d39a721b_Rx 106
#define ComConf_ComSignal_BunkH1PowerWinClosePSBtn_stat_ISig_5_oLECM1_Cab_02P_oCabSubnet_bebdd580_Rx 107
#define ComConf_ComSignal_BunkH1PowerWinOpenDSBtn_stat_ISig_5_oLECM1_Cab_02P_oCabSubnet_757e7847_Rx 108
#define ComConf_ComSignal_BunkH1PowerWinOpenPSBtn_stat_ISig_5_oLECM1_Cab_02P_oCabSubnet_1859dfdc_Rx 109
#define ComConf_ComSignal_BunkH1Prev_ButtonStatus_ISig_5_oLECM1_Cab_02P_oCabSubnet_93262fbd_Rx 110
#define ComConf_ComSignal_BunkH1RoofhatchCloseBtn_Stat_oLECM1_Cab_02P_oCabSubnet_fa799afe_Rx 111
#define ComConf_ComSignal_BunkH1RoofhatchOpenBtn_Stat_oLECM1_Cab_02P_oCabSubnet_fde56247_Rx 112
#define ComConf_ComSignal_BunkH1UnlockButtonStatus_oLECM1_Cab_02P_oCabSubnet_99f14132_Rx 113
#define ComConf_ComSignal_BunkH1VolumeDown_ButtonStatus_ISig_5_oLECM1_Cab_02P_oCabSubnet_f551bc69_Rx 114
#define ComConf_ComSignal_BunkH1VolumeUp_ButtonStatus_ISig_5_oLECM1_Cab_02P_oCabSubnet_a0201bc1_Rx 115
#define ComConf_ComSignal_CCActive_ISig_3_oCCVS_X_VMCU_oBackbone1J1939_143627fe_Rx 116
#define ComConf_ComSignal_CCEnableRequest_ISig_4_oHMIIOM_BB2_03P_oBackbone2_53582b1d_Rx 117
#define ComConf_ComSignal_CCStates_ISig_4_oVMCU_BB2_52P_oBackbone2_62c12527_Rx 118
#define ComConf_ComSignal_CM_Status_ISig_4_oDACU_BB2_02P_oBackbone2_1c558e89_Rx 119
#define ComConf_ComSignal_CabBeaconLightFeedback_Status_ISig_4_oVMCU_BB2_08P_oBackbone2_6f6463b5_Rx 120
#define ComConf_ComSignal_CabExtraSideWrknLightFdbk_stat_ISig_4_oVMCU_BB2_08P_oBackbone2_e159efee_Rx 121
#define ComConf_ComSignal_CabFrontSpotFeedback_Status_oVMCU_BB2_08P_oBackbone2_d9f3ed72_Rx 122
#define ComConf_ComSignal_CabInteriorTempVentilated_Stat_ISig_5_oCCM_Cab_04P_oCabSubnet_d73b6675_Rx 123
#define ComConf_ComSignal_CabRoofSignLightFeedback_stat_oVMCU_BB2_08P_oBackbone2_350ebaea_Rx 124
#define ComConf_ComSignal_CabRoofSpotFeedback_Status_oVMCU_BB2_08P_oBackbone2_ae9c92bc_Rx 125
#define ComConf_ComSignal_CabTiltEnableStatus_oVMCU_BB2_08P_oBackbone2_70084297_Rx 126
#define ComConf_ComSignal_CabTrailerBodyLgthnFdbk_stat_oVMCU_BB2_08P_oBackbone2_8622cf32_Rx 127
#define ComConf_ComSignal_CabWrknLightChassisFdbk_stat_ISig_4_oVMCU_BB2_08P_oBackbone2_2aa5c4e4_Rx 128
#define ComConf_ComSignal_CalLoadTrailer1Axle1_ISig_4_oVMCU_BB2_99P_oBackbone2_9b6fe7a3_Rx 129
#define ComConf_ComSignal_CalLoadTrailer1Axle2_ISig_4_oVMCU_BB2_100P_oBackbone2_e35c4464_Rx 130
#define ComConf_ComSignal_CalLoadTrailer1Axle3_ISig_4_oVMCU_BB2_95P_oBackbone2_6c307fbe_Rx 131
#define ComConf_ComSignal_CalLoadTrailer1Axle4_ISig_4_oVMCU_BB2_102P_oBackbone2_580d179b_Rx 132
#define ComConf_ComSignal_CalLoadTrailer1Axle5_ISig_4_oVMCU_BB2_100P_oBackbone2_1cd3f3e6_Rx 133
#define ComConf_ComSignal_CalLoadTrailer1Axle6_ISig_4_oVMCU_BB2_103P_oBackbone2_cc9f6c72_Rx 134
#define ComConf_ComSignal_CalLoadTrailer2Axle1_ISig_4_oVMCU_BB2_102P_oBackbone2_3d1d1e8e_Rx 135
#define ComConf_ComSignal_CalLoadTrailer2Axle2_ISig_4_oVMCU_BB2_103P_oBackbone2_8d0d3451_Rx 136
#define ComConf_ComSignal_CalLoadTrailer2Axle3_ISig_4_oVMCU_BB2_105P_oBackbone2_096ababa_Rx 137
#define ComConf_ComSignal_CalLoadTrailer2Axle4_ISig_4_oVMCU_BB2_100P_oBackbone2_ebcabe2b_Rx 138
#define ComConf_ComSignal_CalLoadTrailer2Axle5_ISig_4_oVMCU_BB2_96P_oBackbone2_2a3d713d_Rx 139
#define ComConf_ComSignal_CalLoadTrailer2Axle6_ISig_4_oVMCU_BB2_99P_oBackbone2_565a151d_Rx 140
#define ComConf_ComSignal_CalLoadTrailer3Axle1_ISig_4_oVMCU_BB2_98P_oBackbone2_8699c3a3_Rx 141
#define ComConf_ComSignal_CalLoadTrailer3Axle2_ISig_4_oVMCU_BB2_105P_oBackbone2_6361e025_Rx 142
#define ComConf_ComSignal_CalLoadTrailer3Axle3_ISig_4_oVMCU_BB2_96P_oBackbone2_119aeef5_Rx 143
#define ComConf_ComSignal_CalLoadTrailer3Axle4_ISig_4_oVMCU_BB2_103P_oBackbone2_1889d94c_Rx 144
#define ComConf_ComSignal_CalLoadTrailer3Axle5_ISig_4_oVMCU_BB2_101P_oBackbone2_5c573d31_Rx 145
#define ComConf_ComSignal_CalLoadTrailer3Axle6_ISig_4_oVMCU_BB2_105P_oBackbone2_f168a4fd_Rx 146
#define ComConf_ComSignal_CalLoadTrailer4Axle1_ISig_4_oVMCU_BB2_96P_oBackbone2_6a27323f_Rx 147
#define ComConf_ComSignal_CalLoadTrailer4Axle2_ISig_4_oVMCU_BB2_102P_oBackbone2_2cdcd263_Rx 148
#define ComConf_ComSignal_CalLoadTrailer4Axle3_ISig_4_oVMCU_BB2_102P_oBackbone2_085e8355_Rx 149
#define ComConf_ComSignal_CalLoadTrailer4Axle4_ISig_4_oVMCU_BB2_99P_oBackbone2_a06f3435_Rx 150
#define ComConf_ComSignal_CalLoadTrailer4Axle5_ISig_4_oVMCU_BB2_95P_oBackbone2_0c271d3d_Rx 151
#define ComConf_ComSignal_CalLoadTrailer4Axle6_ISig_4_oVMCU_BB2_101P_oBackbone2_031ffa75_Rx 152
#define ComConf_ComSignal_CalLoadTrailer5Axle1_ISig_4_oVMCU_BB2_98P_oBackbone2_1d49c36d_Rx 153
#define ComConf_ComSignal_CalLoadTrailer5Axle2_ISig_4_oVMCU_BB2_100P_oBackbone2_02096c81_Rx 154
#define ComConf_ComSignal_CalLoadTrailer5Axle3_ISig_4_oVMCU_BB2_96P_oBackbone2_8a4aee3b_Rx 155
#define ComConf_ComSignal_CalLoadTrailer5Axle4_ISig_4_oVMCU_BB2_98P_oBackbone2_f0711052_Rx 156
#define ComConf_ComSignal_CalLoadTrailer5Axle5_ISig_4_oVMCU_BB2_98P_oBackbone2_c68380a1_Rx 157
#define ComConf_ComSignal_CalLoadTrailer5Axle6_ISig_4_oVMCU_BB2_103P_oBackbone2_2dca4497_Rx 158
#define ComConf_ComSignal_CalLoadTruckFrontAxle1_ISig_4_oVMCU_BB2_95P_oBackbone2_e76f3303_Rx 159
#define ComConf_ComSignal_CalLoadTruckFrontAxle2_ISig_4_oVMCU_BB2_99P_oBackbone2_26c23bed_Rx 160
#define ComConf_ComSignal_CalLoadTruckRearAxle1_ISig_4_oVMCU_BB2_95P_oBackbone2_bb970d0b_Rx 161
#define ComConf_ComSignal_CalLoadTruckRearAxle2_ISig_4_oVMCU_BB2_101P_oBackbone2_cc12dffc_Rx 162
#define ComConf_ComSignal_CalLoadTruckRearAxle3_ISig_4_oVMCU_BB2_101P_oBackbone2_e8908eca_Rx 163
#define ComConf_ComSignal_CatalystTankLevel_ISig_3_oACM_BB1_01P_oBackbone1J1939_036544ac_Rx 164
#define ComConf_ComSignal_ChangeKneelACK_ISig_4_oVMCU_BB2_20P_oBackbone2_9adade9e_Rx 165
#define ComConf_ComSignal_ChildLock_DeviceIndication_oPDM_Sec_01P_oSecuritySubnet_fafff904_Rx 166
#define ComConf_ComSignal_ClutchSwitch_ISig_3_oCCVS_X_VMCU_oBackbone1J1939_29916b2c_Rx 167
#define ComConf_ComSignal_CoolantPumpEngagementStatus_ISig_4_oEMS_BB2_05P_oBackbone2_6d20b689_Rx 168
#define ComConf_ComSignal_CtaBB_Horn_rqst_oBBM_BB2_01P_oBackbone2_6037b38a_Rx 169
#define ComConf_ComSignal_DASApplicationStatus_oDACU_BB2_02P_oBackbone2_a698eb6f_Rx 170
#define ComConf_ComSignal_DSWindowPosition_ISig_10_oDDM_Sec_01P_oSecuritySubnet_727e39b7_Rx 171
#define ComConf_ComSignal_DayLocal_ISig_4_oVMCU_BB2_119P_oBackbone2_1f25eae8_Rx 172
#define ComConf_ComSignal_DayOfWeek_stat_ISig_4_oVMCU_BB2_119P_oBackbone2_47d2d9e0_Rx 173
#define ComConf_ComSignal_DayUTC_ISig_3_oTD_X_HMIIOM_oBackbone1J1939_ce1b0a51_Rx 174
#define ComConf_ComSignal_DaytimeRunningLight_Indication_oVMCU_BB2_03P_oBackbone2_24b27437_Rx 175
#define ComConf_ComSignal_Debug_PVT_Fob_Select_oDebugCtrl2_SCIM_BB2_oBackbone2_069eb8ef_Rx 176
#define ComConf_ComSignal_Debug_PVT_PEPS_A_AntP1_Ctrl_oDebugCtrl6_SCIM_BB2_oBackbone2_77ae2080_Rx 177
#define ComConf_ComSignal_Debug_PVT_PEPS_A_AntP2_Ctrl_oDebugCtrl6_SCIM_BB2_oBackbone2_3a4620e7_Rx 178
#define ComConf_ComSignal_Debug_PVT_PEPS_A_AntP3_Ctrl_oDebugCtrl6_SCIM_BB2_oBackbone2_b7cedd05_Rx 179
#define ComConf_ComSignal_Debug_PVT_PEPS_A_AntP4_Ctrl_oDebugCtrl6_SCIM_BB2_oBackbone2_a1962029_Rx 180
#define ComConf_ComSignal_Debug_PVT_PEPS_A_AntPi_Ctrl_oDebugCtrl6_SCIM_BB2_oBackbone2_ce25ee0c_Rx 181
#define ComConf_ComSignal_Debug_PVT_PEPS_AntP1_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_fb66dba7_Rx 182
#define ComConf_ComSignal_Debug_PVT_PEPS_AntP1_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_76ee2645_Rx 183
#define ComConf_ComSignal_Debug_PVT_PEPS_AntPi_X_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_108c5adc_Rx 184
#define ComConf_ComSignal_Debug_PVT_PEPS_AntPi_Y_Ctrl_oDebugCtrl9_SCIM_BB2_oBackbone2_9d04a73e_Rx 185
#define ComConf_ComSignal_Debug_PVT_PEPS_Ant_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f212143a_Rx 186
#define ComConf_ComSignal_Debug_PVT_PEPS_Avercut_Ctrl_oDebugCtrl4_SCIM_BB2_oBackbone2_0b11f392_Rx 187
#define ComConf_ComSignal_Debug_PVT_PEPS_GainP1_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_7b701f8e_Rx 188
#define ComConf_ComSignal_Debug_PVT_PEPS_GainP2_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_36981fe9_Rx 189
#define ComConf_ComSignal_Debug_PVT_PEPS_GainP3_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_bb10e20b_Rx 190
#define ComConf_ComSignal_Debug_PVT_PEPS_GainP4_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_ad481f27_Rx 191
#define ComConf_ComSignal_Debug_PVT_PEPS_GainPi_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_c2fbd102_Rx 192
#define ComConf_ComSignal_Debug_PVT_PEPS_K_AntP1_Ctrl_oDebugCtrl7_SCIM_BB2_oBackbone2_3614168b_Rx 193
#define ComConf_ComSignal_Debug_PVT_PEPS_K_AntP2_Ctrl_oDebugCtrl7_SCIM_BB2_oBackbone2_7bfc16ec_Rx 194
#define ComConf_ComSignal_Debug_PVT_PEPS_K_AntP3_Ctrl_oDebugCtrl7_SCIM_BB2_oBackbone2_f674eb0e_Rx 195
#define ComConf_ComSignal_Debug_PVT_PEPS_K_AntP4_Ctrl_oDebugCtrl8_SCIM_BB2_oBackbone2_ac39990c_Rx 196
#define ComConf_ComSignal_Debug_PVT_PEPS_K_AntPi_Ctrl_oDebugCtrl7_SCIM_BB2_oBackbone2_8f9fd807_Rx 197
#define ComConf_ComSignal_Debug_PVT_PEPS_LimitRSSIP1_Ctrl_oDebugCtrl5_SCIM_BB2_oBackbone2_30da4a25_Rx 198
#define ComConf_ComSignal_Debug_PVT_PEPS_LimitRSSIP2_Ctrl_oDebugCtrl5_SCIM_BB2_oBackbone2_7d324a42_Rx 199
#define ComConf_ComSignal_Debug_PVT_PEPS_LimitRSSIP3_Ctrl_oDebugCtrl5_SCIM_BB2_oBackbone2_f0bab7a0_Rx 200
#define ComConf_ComSignal_Debug_PVT_PEPS_LimitRSSIP4_Ctrl_oDebugCtrl5_SCIM_BB2_oBackbone2_e6e24a8c_Rx 201
#define ComConf_ComSignal_Debug_PVT_PEPS_LmitRSSIPi_Ctrl_oDebugCtrl5_SCIM_BB2_oBackbone2_4e183669_Rx 202
#define ComConf_ComSignal_Debug_PVT_PEPS_Logic_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_f1a79db4_Rx 203
#define ComConf_ComSignal_Debug_PVT_PEPS_P2_RSSIcut_Ctrl_oDebugCtrl4_SCIM_BB2_oBackbone2_408a6b78_Rx 204
#define ComConf_ComSignal_Debug_PVT_PEPS_P3_RSSIcut_Ctrl_oDebugCtrl4_SCIM_BB2_oBackbone2_3f43f0eb_Rx 205
#define ComConf_ComSignal_Debug_PVT_PEPS_Pi_RSSIcut_Ctrl_oDebugCtrl4_SCIM_BB2_oBackbone2_31c63df0_Rx 206
#define ComConf_ComSignal_Debug_PVT_PEPS_TestPeriod_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_2f247024_Rx 207
#define ComConf_ComSignal_Debug_PVT_PEPS_VDSI_Ctrl_oDebugCtrl3_SCIM_BB2_oBackbone2_e74c4cec_Rx 208
#define ComConf_ComSignal_Debug_PVT_PEPS_VSquare_Ctrl_oDebugCtrl8_SCIM_BB2_oBackbone2_aa069306_Rx 209
#define ComConf_ComSignal_Debug_PVT_PEPS_VWidth_Ctrl_oDebugCtrl8_SCIM_BB2_oBackbone2_c00b5315_Rx 210
#define ComConf_ComSignal_Debug_PVT_PEPS_Vlength_Ctrl_oDebugCtrl8_SCIM_BB2_oBackbone2_f2bea79d_Rx 211
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_12VDCDC_oDebugCtrl1_SCIM_BB2_oBackbone2_052e0dec_Rx 212
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_12VLiving_oDebugCtrl1_SCIM_BB2_oBackbone2_1cf3479b_Rx 213
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_12VParked_oDebugCtrl1_SCIM_BB2_oBackbone2_2cd9a2ad_Rx 214
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_BHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_e91d1062_Rx 215
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_BHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_b20aa177_Rx 216
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_BHS3_oDebugCtrl1_SCIM_BB2_oBackbone2_84f83184_Rx 217
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_BHS4_oDebugCtrl1_SCIM_BB2_oBackbone2_0425c35d_Rx 218
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_DAIPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_2731869d_Rx 219
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_LivingPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_666b21d3_Rx 220
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_ParkedPullUp_oDebugCtrl1_SCIM_BB2_oBackbone2_bf982706_Rx 221
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WHS1_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_aec1e12e_Rx 222
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WHS1_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_31c9eab2_Rx 223
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WHS1_oDebugCtrl1_SCIM_BB2_oBackbone2_a57cfe3c_Rx 224
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WHS2_Duty_oDebugCtrl1_SCIM_BB2_oBackbone2_e329e149_Rx 225
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WHS2_Freq_oDebugCtrl1_SCIM_BB2_oBackbone2_7c21ead5_Rx 226
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WHS2_oDebugCtrl1_SCIM_BB2_oBackbone2_fe6b4f29_Rx 227
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS1_Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_055e2012_Rx 228
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS1_Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_9a562b8e_Rx 229
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS1_oDebugCtrl2_SCIM_BB2_oBackbone2_56f82f7d_Rx 230
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS2Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_1529858b_Rx 231
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS2Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_8a218e17_Rx 232
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS2_oDebugCtrl2_SCIM_BB2_oBackbone2_0def9e68_Rx 233
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS3Duty_oDebugCtrl2_SCIM_BB2_oBackbone2_95d99294_Rx 234
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS3Freq_oDebugCtrl2_SCIM_BB2_oBackbone2_0ad19908_Rx 235
#define ComConf_ComSignal_Debug_PVT_SCIM_Ctrl_WLS3_oDebugCtrl2_SCIM_BB2_oBackbone2_3b1d0e9b_Rx 236
#define ComConf_ComSignal_DiagInfoCCFW_oCCFWtoCIOM_L4_oLIN03_69083ad8_Rx 272
#define ComConf_ComSignal_DiagInfoDLFW_oDLFWtoCIOM_L4_oLIN03_f14b1ebc_Rx 273
#define ComConf_ComSignal_DiagInfoELCP1_oELCP1toCIOM_L4_oLIN03_e88000c8_Rx 274
#define ComConf_ComSignal_DiagInfoELCP2_oELCP2toCIOM_L4_oLIN03_e304f264_Rx 275
#define ComConf_ComSignal_DiagInfoERAU_oVP232_X_ERAU_oFMSNet_845d32fd_Rx 276
#define ComConf_ComSignal_DiagInfoILCP1_oILCP1toCIOM_L1_oLIN00_051a4e47_Rx 277
#define ComConf_ComSignal_DiagInfoILCP2_oILCP2toCIOM_L4_oLIN03_df77e335_Rx 278
#define ComConf_ComSignal_DiagInfoLECM2_oLECM2toCIOM_FR1_L1_oLIN00_427132ed_Rx 279
#define ComConf_ComSignal_DiagInfoLECMBasic_oLECMBasic2CIOM_L1_oLIN00_209584a0_Rx 280
#define ComConf_ComSignal_DiagInfoRCECS_oRCECStoCIOM_L5_oLIN04_46e60a03_Rx 281
#define ComConf_ComSignal_DiagInfoSRS2_oSRS_Cab_04P_oCabSubnet_1f55ca5a_Rx 282
#define ComConf_ComSignal_DiagInfoTCP_oTCPtoMaster_oLIN02_23eac2a6_Rx 283
#define ComConf_ComSignal_DoorInstepLight_cmd_ISig_4_oVMCU_BB2_53P_oBackbone2_222e51a3_Rx 284
#define ComConf_ComSignal_DoorWarningLight_cmd_ISig_4_oVMCU_BB2_53P_oBackbone2_1a7230ad_Rx 285
#define ComConf_ComSignal_Driver1Identification_ISig_3_oPropTCO2_X_TACHO_oBackbone1J1939_c8e2845e_Rx 286
#define ComConf_ComSignal_Driver1TimeRelatedStates_ISig_3_oTCO1_X_TACHO_oBackbone1J1939_2d2093d1_Rx 287
#define ComConf_ComSignal_Driver1WorkingState_ISig_3_oTCO1_X_TACHO_oBackbone1J1939_edae4574_Rx 288
#define ComConf_ComSignal_Driver2TimeRelatedStates_ISig_3_oTCO1_X_TACHO_oBackbone1J1939_4b2446e1_Rx 289
#define ComConf_ComSignal_Driver2WorkingState_ISig_3_oTCO1_X_TACHO_oBackbone1J1939_ba8c6926_Rx 290
#define ComConf_ComSignal_DriverCardDriver1_ISig_3_oTCO1_X_TACHO_oBackbone1J1939_800ed341_Rx 291
#define ComConf_ComSignal_DriverCardDriver2_ISig_3_oTCO1_X_TACHO_oBackbone1J1939_cde6d326_Rx 292
#define ComConf_ComSignal_DriverDoorAjar_stat_ISig_10_oDDM_Sec_01P_oSecuritySubnet_81afb630_Rx 293
#define ComConf_ComSignal_DriverDoorKeyCylTurned_stat_oDDM_Sec_04S_oSecuritySubnet_c22d1da5_Rx 294
#define ComConf_ComSignal_DriverDoorLatch_stat_oDDM_Sec_01P_oSecuritySubnet_68da2bcf_Rx 295
#define ComConf_ComSignal_DriverMemory_rqst_ISig_4_oHMIIOM_BB2_08P_oBackbone2_a1568d13_Rx 296
#define ComConf_ComSignal_DriversIdentifications_oDI_X_TACHO_oBackbone1J1939_ebdf0af1_Rx 297
#define ComConf_ComSignal_DrivingLightPlus_Indication_oVMCU_BB2_03P_oBackbone2_a98387bf_Rx 298
#define ComConf_ComSignal_DrivingLight_Indication_oVMCU_BB2_03P_oBackbone2_db0b239c_Rx 299
#define ComConf_ComSignal_DynamicCode_rqst_oHMIIOM_BB2_09P_oBackbone2_3c032dbe_Rx 300
#define ComConf_ComSignal_ECSStandByReqWRC_oWRCS_Cab_01P_oCabSubnet_e31f608b_Rx 301
#define ComConf_ComSignal_ECSStandbyAllowed_ISig_4_oVMCU_BB2_20P_oBackbone2_38626bd2_Rx 302
#define ComConf_ComSignal_ECU1VIN_stat_oVMCU_BB2_31S_oBackbone2_fdb2f9bb_Rx 303
#define ComConf_ComSignal_ECU2VIN_stat_ISig_4_oVMCU_BB2_32S_oBackbone2_10789d9f_Rx 304
#define ComConf_ComSignal_ECU3VIN_stat_oHMIIOM_BB2_20S_oBackbone2_67971553_Rx 305
#define ComConf_ComSignal_ECU4VIN_stat_oEMS_BB2_09S_oBackbone2_520ec3f7_Rx 306
#define ComConf_ComSignal_ECU5VIN_stat_oTECU_BB2_06S_oBackbone2_3a7c6b09_Rx 307
#define ComConf_ComSignal_ECUVIN_rqst_oSRS_Cab_03P_oCabSubnet_6fe3ce11_Rx 308
#define ComConf_ComSignal_ESCOff_DeviceIndication_oHMIIOM_BB2_38P_oBackbone2_ccedf7bd_Rx 309
#define ComConf_ComSignal_ESCState_ISig_3_oEBS_BB1_01P_oBackbone1J1939_c8a122b4_Rx 314
#define ComConf_ComSignal_ESC_ButtonIndication2_oHMIIOM_BB2_39P_oBackbone2_0ce1681e_Rx 315
#define ComConf_ComSignal_ElectricalLoadReduction_rqst_ISig_4_oVMCU_BB2_52P_oBackbone2_8e6be74b_Rx 316
#define ComConf_ComSignal_EmergencyDoorsUnlock_rqst_oSRS_Cab_01P_oCabSubnet_12455702_Rx 317
#define ComConf_ComSignal_EngineCoolantTemp_stat_ISig_3_oET1_X_EMS_oBackbone1J1939_01eda871_Rx 318
#define ComConf_ComSignal_EngineCoolingFanSpeed_ISig_4_oEMS_BB2_05P_oBackbone2_27c480f4_Rx 319
#define ComConf_ComSignal_EngineFuelRate_ISig_3_oLFE_X_EMS_oBackbone1J1939_dd8e08ba_Rx 320
#define ComConf_ComSignal_EngineGasRate_oEMS_BB2_05P_oBackbone2_96ec243f_Rx 321
#define ComConf_ComSignal_EnginePercentLoadAtCurrentSpd_ISig_3_oEEC2_X_EMS_oBackbone1J1939_2e4dbdde_Rx 322
#define ComConf_ComSignal_EngineRetarderTorqueMode_ISig_3_oERC1_X_EMSRet_oBackbone1J1939_7b2fe6f4_Rx 323
#define ComConf_ComSignal_EngineRunningTime_ISig_4_oEMS_BB2_08P_oBackbone2_50a8aaa0_Rx 324
#define ComConf_ComSignal_EngineSpeedControlStatus_oVMCU_BB2_04P_oBackbone2_0bb8a21a_Rx 325
#define ComConf_ComSignal_EngineSpeed_ISig_3_oEEC1_X_EMS_oBackbone1J1939_56ecedf7_Rx 326
#define ComConf_ComSignal_EngineStartAuth_rqst_oEMS_BB2_01P_oBackbone2_285ce89b_Rx 327
#define ComConf_ComSignal_EngineTotalFuelConsumed_ISig_4_oEMS_BB2_04P_oBackbone2_ab6106b8_Rx 343
#define ComConf_ComSignal_EngineTotalLngConsumed_ISig_4_oEMS_BB2_13P_oBackbone2_cfe79fd2_Rx 344
#define ComConf_ComSignal_ExitPreDeliveryModeHMI_rqst_ISig_4_oVMCU_BB2_04P_oBackbone2_92e9b0a2_Rx 345
#define ComConf_ComSignal_ExtraAxleSteeringFunctionStat_ISig_4_oVMCU_BB2_08P_oBackbone2_e7241d0d_Rx 346
#define ComConf_ComSignal_ExtraBBContainerUnlockStatus_oVMCU_BB2_54P_oBackbone2_0f9800fc_Rx 347
#define ComConf_ComSignal_ExtraBBCraneStatus_ISig_4_oVMCU_BB2_54P_oBackbone2_bd0882a3_Rx 348
#define ComConf_ComSignal_ExtraBBSlidable5thWheelStatus_oVMCU_BB2_54P_oBackbone2_723450b2_Rx 349
#define ComConf_ComSignal_ExtraBBTailLiftStatus_ISig_4_oVMCU_BB2_54P_oBackbone2_0401d03c_Rx 350
#define ComConf_ComSignal_ExtraBbWrcWatchdog_ISig_5_oWRCS_Cab_03P_oCabSubnet_6f514843_Rx 351
#define ComConf_ComSignal_ExtraHeating_rqst_ISig_4_oHMIIOM_BB2_23P_oBackbone2_400f83d8_Rx 352
#define ComConf_ComSignal_ExtraHeating_status_ISig_5_oCCM_Cab_07P_oCabSubnet_5006eda2_Rx 353
#define ComConf_ComSignal_ExtraSideMarkers_FunctStat_oVMCU_BB2_73P_oBackbone2_34f556e9_Rx 354
#define ComConf_ComSignal_FCW_Status_oDACU_BB2_02P_oBackbone2_2f9cb77a_Rx 355
#define ComConf_ComSignal_FSP1DiagInfoL1_oFSP1_Frame_L1_oLIN00_f04712d6_Rx 374
#define ComConf_ComSignal_FSP1DiagInfoL2_oFSP1_Frame_L2_oLIN01_7f2a1c9e_Rx 375
#define ComConf_ComSignal_FSP1DiagInfoL3_oFSP1_Frame_L3_oLIN02_b1faa76e_Rx 376
#define ComConf_ComSignal_FSP1DiagInfoL4_oFSP1_Frame_L4_oLIN03_ba81064f_Rx 377
#define ComConf_ComSignal_FSP1DiagInfoL5_oFSP1_Frame_L5_oLIN04_733c79a6_Rx 378
#define ComConf_ComSignal_FSP1ResponseErrorL1_oFSP1_Frame_L1_oLIN00_b9e1fc6c_Rx 379
#define ComConf_ComSignal_FSP1ResponseErrorL2_oFSP1_Frame_L2_oLIN01_368cf224_Rx 380
#define ComConf_ComSignal_FSP1ResponseErrorL3_oFSP1_Frame_L3_oLIN02_f85c49d4_Rx 381
#define ComConf_ComSignal_FSP1ResponseErrorL4_oFSP1_Frame_L4_oLIN03_f327e8f5_Rx 382
#define ComConf_ComSignal_FSP1ResponseErrorL5_oFSP1_Frame_L5_oLIN04_3a9a971c_Rx 383
#define ComConf_ComSignal_FSP1SwitchStatusL1_oFSP1_Frame_L1_oLIN00_e78b81b2_Rx 384
#define ComConf_ComSignal_FSP1SwitchStatusL2_oFSP1_Frame_L2_oLIN01_68e68ffa_Rx 385
#define ComConf_ComSignal_FSP1SwitchStatusL3_oFSP1_Frame_L3_oLIN02_a636340a_Rx 386
#define ComConf_ComSignal_FSP1SwitchStatusL4_oFSP1_Frame_L4_oLIN03_ad4d952b_Rx 387
#define ComConf_ComSignal_FSP1SwitchStatusL5_oFSP1_Frame_L5_oLIN04_64f0eac2_Rx 388
#define ComConf_ComSignal_FSP2DiagInfoL1_oFSP2_Frame_L1_oLIN00_f8caf847_Rx 389
#define ComConf_ComSignal_FSP2DiagInfoL2_oFSP2_Frame_L2_oLIN01_77a7f60f_Rx 390
#define ComConf_ComSignal_FSP2DiagInfoL3_oFSP2_Frame_L3_oLIN02_b9774dff_Rx 391
#define ComConf_ComSignal_FSP2ResponseErrorL1_oFSP2_Frame_L1_oLIN00_a793a78f_Rx 392
#define ComConf_ComSignal_FSP2ResponseErrorL2_oFSP2_Frame_L2_oLIN01_28fea9c7_Rx 393
#define ComConf_ComSignal_FSP2ResponseErrorL3_oFSP2_Frame_L3_oLIN02_e62e1237_Rx 394
#define ComConf_ComSignal_FSP2SwitchStatusL1_oFSP2_Frame_L1_oLIN00_ee70e556_Rx 395
#define ComConf_ComSignal_FSP2SwitchStatusL2_oFSP2_Frame_L2_oLIN01_611deb1e_Rx 396
#define ComConf_ComSignal_FSP2SwitchStatusL3_oFSP2_Frame_L3_oLIN02_afcd50ee_Rx 397
#define ComConf_ComSignal_FSP3DiagInfoL2_oFSP3_Frame_L2_oLIN01_c6f3adbf_Rx 398
#define ComConf_ComSignal_FSP3ResponseErrorL2_oFSP3_Frame_L2_oLIN01_22d09f66_Rx 399
#define ComConf_ComSignal_FSP3SwitchStatusL2_oFSP3_Frame_L2_oLIN01_664b3742_Rx 400
#define ComConf_ComSignal_FSP4DiagInfoL2_oFSP4_Frame_L2_oLIN01_66bc232d_Rx 401
#define ComConf_ComSignal_FSP4ResponseErrorL2_oFSP4_Frame_L2_oLIN01_141a1e01_Rx 402
#define ComConf_ComSignal_FSP4SwitchStatusL2_oFSP4_Frame_L2_oLIN01_72eb22d6_Rx 403
#define ComConf_ComSignal_FdEquipmentFreeText_ISig_4_4ed_oBBM_BB2_03S_CIOM_oBackbone2_a36b5b5f_Rx 404
#define ComConf_ComSignal_FdEquipmentStatus1_ISig_4_oVMCU_BB2_04P_oBackbone2_68ea8436_Rx 405
#define ComConf_ComSignal_FdEquipmentStatus2_ISig_4_oBBM_BB2_02P_oBackbone2_6d30561f_Rx 406
#define ComConf_ComSignal_FdEquipmentStatus3_ISig_4_oBBM_BB2_02P_oBackbone2_9cea53b5_Rx 407
#define ComConf_ComSignal_FdEquipmentStatus4_ISig_4_oBBM_BB2_02P_oBackbone2_247f4120_Rx 408
#define ComConf_ComSignal_FdEquipmentStatus5_ISig_4_oBBM_BB2_02P_oBackbone2_d5a5448a_Rx 409
#define ComConf_ComSignal_FdEquipmentValue1_ISig_4_oBBM_BB2_02P_oBackbone2_81330433_Rx 410
#define ComConf_ComSignal_FdEquipmentValue2_ISig_4_oBBM_BB2_02P_oBackbone2_482c0c8c_Rx 411
#define ComConf_ComSignal_FdEquipmentValue3_ISig_4_oBBM_BB2_02P_oBackbone2_b9f60926_Rx 412
#define ComConf_ComSignal_FerryFunctionStatus_ISig_4_oVMCU_BB2_20P_oBackbone2_5e04e3f4_Rx 413
#define ComConf_ComSignal_FerryFunctionSwitchChangeACK_ISig_4_oVMCU_BB2_01P_oBackbone2_71f009e5_Rx 414
#define ComConf_ComSignal_FoundationBrakeUse_ISig_3_oEBC5_X_EBS_oBackbone1J1939_aefa3000_Rx 415
#define ComConf_ComSignal_FrontAxleSpeed_ISig_3_oEBC2_X_EBS_oBackbone1J1939_4111b41b_Rx 416
#define ComConf_ComSignal_FrontEndPositionStatus_ISig_4_oVMCU_BB2_20P_oBackbone2_48ebe314_Rx 417
#define ComConf_ComSignal_FrontFog_Indication_oVMCU_BB2_03P_oBackbone2_92113a12_Rx 418
#define ComConf_ComSignal_FrontalCollisionAccidentStatus_ISig_5_oSRS_Cab_01P_oCabSubnet_a88d0e20_Rx 419
#define ComConf_ComSignal_FuelLevel_ISig_3_oVMCU_BB1_03P_oBackbone1J1939_0f23d9f2_Rx 420
#define ComConf_ComSignal_FuncIndIlluminationLevel_ISig_4_oHMIIOM_BB2_01P_oBackbone2_173c8db7_Rx 421
#define ComConf_ComSignal_GearBoxUnlockAuth_rqst_oTECU_BB2_01P_oBackbone2_d45ce9c0_Rx 430
#define ComConf_ComSignal_GrossCombinationVehicleWeight_ISig_3_oCVW_X_EBS_oBackbone1J1939_81d6bcd8_Rx 431
#define ComConf_ComSignal_HandlingInformation_ISig_3_oTCO1_X_TACHO_oBackbone1J1939_8cdf696e_Rx 432
#define ComConf_ComSignal_HeightAdjustmentAllowed_ISig_4_oVMCU_BB2_02P_oBackbone2_3a236070_Rx 433
#define ComConf_ComSignal_HighResEngineTotalFuelUsed_ISig_3_oHRLFC_X_EMS_oBackbone1J1939_9a2f5b32_Rx 434
#define ComConf_ComSignal_HoursLocal_ISig_4_oVMCU_BB2_119P_oBackbone2_1c655c54_Rx 435
#define ComConf_ComSignal_HoursUTC_ISig_3_oTD_X_HMIIOM_oBackbone1J1939_0ccfb540_Rx 436
#define ComConf_ComSignal_Indicator_Lights_Alarm_rqst_ISig_10_oAlarm_Sec_02P_oSecuritySubnet_471bbc12_Rx 437
#define ComConf_ComSignal_InstantaneousFuelEconomy_ISig_3_oLFE_X_EMS_oBackbone1J1939_a1c216ba_Rx 438
#define ComConf_ComSignal_InteriorLightLevelInd_cmd_oVMCU_BB2_03P_oBackbone2_3f259764_Rx 441
#define ComConf_ComSignal_KeyAuthentication_rqst_oVMCU_BB2_04P_oBackbone2_c5ca7983_Rx 442
#define ComConf_ComSignal_KeyID_DriverDoorLatch_rqst_oDDM_Sec_05S_oSecuritySubnet_99c5da4c_Rx 443
#define ComConf_ComSignal_KeyID_EncryptedGBUnlockAuth_oTECU_BB2_05S_oBackbone2_1d0ec920_Rx 444
#define ComConf_ComSignal_KeyID_EngineStartAuth_oEMS_BB2_11S_oBackbone2_7b40f91d_Rx 445
#define ComConf_ComSignal_KeyID_KeyAuthEncrypted_oVMCU_BB2_34S_oBackbone2_c663ac17_Rx 446
#define ComConf_ComSignal_KeyID_LuggageCompartment_stat_oAlarm_Sec_07S_oSecuritySubnet_8ed452d8_Rx 447
#define ComConf_ComSignal_KeyID_PassengerDoorLatch_rqst_oPDM_Sec_03S_oSecuritySubnet_09c03245_Rx 448
#define ComConf_ComSignal_KeyID_ReducedSetMode_oAlarm_Sec_03S_oSecuritySubnet_0a371acd_Rx 449
#define ComConf_ComSignal_KeyID_TheftAlarmActivation_oAlarm_Sec_06S_oSecuritySubnet_1e0daa05_Rx 450
#define ComConf_ComSignal_KeyPosition_ISig_4_oVMCU_BB2_01P_oBackbone2_666d9433_Rx 451
#define ComConf_ComSignal_KneelingInformation_ISig_4_oVMCU_BB2_20P_oBackbone2_a26fcc6e_Rx 452
#define ComConf_ComSignal_KneelingStatusHMI_ISig_4_oVMCU_BB2_20P_oBackbone2_755dcb67_Rx 453
#define ComConf_ComSignal_LCSSystemStatus_oDACU_BB2_02P_oBackbone2_a47552fc_Rx 454
#define ComConf_ComSignal_LIN_AdjustButtonStatus_oRCECStoCIOM_L5_oLIN04_52fa0034_Rx 455
#define ComConf_ComSignal_LIN_BackButtonStatus_oRCECStoCIOM_L5_oLIN04_91249976_Rx 461
#define ComConf_ComSignal_LIN_BackLightDimming_Status_oELCP1toCIOM_L4_oLIN03_ff25f41e_Rx 462
#define ComConf_ComSignal_LIN_BlackPanelMode_ButtonStat_oELCP1toCIOM_L4_oLIN03_dece2221_Rx 463
#define ComConf_ComSignal_LIN_BunkBAudioOnOff_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_a735a09a_Rx 464
#define ComConf_ComSignal_LIN_BunkBIntLightActvnBtn_stat_oLECMBasic2CIOM_L1_oLIN00_5d53684c_Rx 465
#define ComConf_ComSignal_LIN_BunkBParkHeater_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_0c567d49_Rx 466
#define ComConf_ComSignal_LIN_BunkBTempDec_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_bad7c8e9_Rx 467
#define ComConf_ComSignal_LIN_BunkBTempInc_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_7521d3fe_Rx 468
#define ComConf_ComSignal_LIN_BunkBVolumeDown_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_c7ff11cb_Rx 469
#define ComConf_ComSignal_LIN_BunkBVolumeUp_ButtonStat_oLECMBasic2CIOM_L1_oLIN00_4fd90c4b_Rx 470
#define ComConf_ComSignal_LIN_BunkH2AudioOnOff_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_8085e670_Rx 471
#define ComConf_ComSignal_LIN_BunkH2Fade_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_64ae31ec_Rx 472
#define ComConf_ComSignal_LIN_BunkH2IntLightActvnBtn_sta_oLECM2toCIOM_FR1_L1_oLIN00_7ae32ea6_Rx 473
#define ComConf_ComSignal_LIN_BunkH2IntLightDecBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_445fc32a_Rx 474
#define ComConf_ComSignal_LIN_BunkH2IntLightIncBtn_stat_oLECM2toCIOM_FR1_L1_oLIN00_a3c1ab0b_Rx 475
#define ComConf_ComSignal_LIN_BunkH2LockButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_d71d2857_Rx 476
#define ComConf_ComSignal_LIN_BunkH2OnOFF_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_6a259b90_Rx 477
#define ComConf_ComSignal_LIN_BunkH2ParkHeater_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_2be63ba3_Rx 483
#define ComConf_ComSignal_LIN_BunkH2Phone_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_99e0fe87_Rx 484
#define ComConf_ComSignal_LIN_BunkH2PowerWinCloseDSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_9fa2715d_Rx 485
#define ComConf_ComSignal_LIN_BunkH2PowerWinClosePSBtn_s_oLECM2toCIOM_FR2_L1_oLIN00_281d2c26_Rx 486
#define ComConf_ComSignal_LIN_BunkH2PowerWinOpenDSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_0df6d397_Rx 487
#define ComConf_ComSignal_LIN_BunkH2PowerWinOpenPSBtn_st_oLECM2toCIOM_FR2_L1_oLIN00_ca96c47e_Rx 488
#define ComConf_ComSignal_LIN_BunkH2RoofhatchCloseBtn_St_oLECM2toCIOM_FR1_L1_oLIN00_c184d263_Rx 489
#define ComConf_ComSignal_LIN_BunkH2RoofhatchOpenBtn_Sta_oLECM2toCIOM_FR1_L1_oLIN00_dd2458bc_Rx 490
#define ComConf_ComSignal_LIN_BunkH2TempDec_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_857664ae_Rx 491
#define ComConf_ComSignal_LIN_BunkH2TempInc_ButtonStatus_oLECM2toCIOM_FR1_L1_oLIN00_61f74d27_Rx 492
#define ComConf_ComSignal_LIN_BunkH2VolumeDown_ButtonSta_oLECM2toCIOM_FR1_L1_oLIN00_e04f5721_Rx 493
#define ComConf_ComSignal_LIN_BunkH2VolumeUp_ButtonStatu_oLECM2toCIOM_FR1_L1_oLIN00_92cefa8d_Rx 494
#define ComConf_ComSignal_LIN_DRL_ButtonStatus_oELCP2toCIOM_L4_oLIN03_e8cb5735_Rx 495
#define ComConf_ComSignal_LIN_DifflockDeactivationBtn_st_oDLFWtoCIOM_L4_oLIN03_7700113d_Rx 496
#define ComConf_ComSignal_LIN_DifflockMode_Wheelstatus_oDLFWtoCIOM_L4_oLIN03_80a746c7_Rx 497
#define ComConf_ComSignal_LIN_DoorAutoFuncBtn_stat_oILCP1toCIOM_L1_oLIN00_0dc2e67f_Rx 498
#define ComConf_ComSignal_LIN_EscButtonMuddySiteStatus_oDLFWtoCIOM_L4_oLIN03_ac37f393_Rx 499
#define ComConf_ComSignal_LIN_FCWPushButton_oCCFWtoCIOM_L4_oLIN03_242f5462_Rx 500
#define ComConf_ComSignal_LIN_FogLightFront_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_e1a5bfc2_Rx 501
#define ComConf_ComSignal_LIN_FogLightFront_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_ea214d6e_Rx 502
#define ComConf_ComSignal_LIN_FogLightRear_ButtonStat_1_oELCP1toCIOM_L4_oLIN03_14baadea_Rx 503
#define ComConf_ComSignal_LIN_FogLightRear_ButtonStat_2_oELCP2toCIOM_L4_oLIN03_1f3e5f46_Rx 504
#define ComConf_ComSignal_LIN_HeadLampUpDown_SwitchStatu_oELCP2toCIOM_L4_oLIN03_ea48cea1_Rx 505
#define ComConf_ComSignal_LIN_IntLghtCenterBtnFreeWhl_s_oILCP2toCIOM_L4_oLIN03_27a7dc09_Rx 506
#define ComConf_ComSignal_LIN_IntLghtDimmingLvlDecBtn_s_oILCP1toCIOM_L1_oLIN00_0a50c243_Rx 507
#define ComConf_ComSignal_LIN_IntLghtDimmingLvlFreeWhl_s_oILCP2toCIOM_L4_oLIN03_9d9afdd7_Rx 508
#define ComConf_ComSignal_LIN_IntLghtDimmingLvlIncBtn_s_oILCP1toCIOM_L1_oLIN00_34c0f447_Rx 509
#define ComConf_ComSignal_LIN_IntLghtMaxModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_eeb895fc_Rx 510
#define ComConf_ComSignal_LIN_IntLghtModeSelrFreeWheel_s_oILCP1toCIOM_L1_oLIN00_98c2e509_Rx 511
#define ComConf_ComSignal_LIN_IntLghtNightModeBt2_s_oILCP2toCIOM_L4_oLIN03_c1a85f21_Rx 512
#define ComConf_ComSignal_LIN_IntLghtRestModeBtnPnl2_s_oILCP2toCIOM_L4_oLIN03_46e1f77a_Rx 513
#define ComConf_ComSignal_LIN_LKSPushButton_oCCFWtoCIOM_L4_oLIN03_8e8e108b_Rx 514
#define ComConf_ComSignal_LIN_LevelingThumbwheel_stat_oELCP1toCIOM_L4_oLIN03_cb03d712_Rx 515
#define ComConf_ComSignal_LIN_LightMode_Status_1_oELCP1toCIOM_L4_oLIN03_c62c6da2_Rx 516
#define ComConf_ComSignal_LIN_LightMode_Status_2_oELCP2toCIOM_L4_oLIN03_cda89f0e_Rx 517
#define ComConf_ComSignal_LIN_MemButtonStatus_oRCECStoCIOM_L5_oLIN04_0975e3a6_Rx 518
#define ComConf_ComSignal_LIN_Offroad_ButtonStatus_oDLFWtoCIOM_L4_oLIN03_2199360f_Rx 519
#define ComConf_ComSignal_LIN_RearWorkProjector_BtnStat_oELCP2toCIOM_L4_oLIN03_bb9bb1f8_Rx 520
#define ComConf_ComSignal_LIN_SelectButtonStatus_oRCECStoCIOM_L5_oLIN04_07d81d0f_Rx 521
#define ComConf_ComSignal_LIN_SpeedControlModeButtonStat_oCCFWtoCIOM_L4_oLIN03_0f6013d7_Rx 522
#define ComConf_ComSignal_LIN_SpeedControlModeWheelStat_oCCFWtoCIOM_L4_oLIN03_cc9e59ce_Rx 523
#define ComConf_ComSignal_LIN_StopButtonStatus_oRCECStoCIOM_L5_oLIN04_c8659d40_Rx 524
#define ComConf_ComSignal_LIN_TCP_ABS_ButtonStatus_oTCPtoMaster_oLIN02_7968eb64_Rx 525
#define ComConf_ComSignal_LIN_TCP_ATC_ButtonStatus_oTCPtoMaster_oLIN02_dff3ccff_Rx 526
#define ComConf_ComSignal_LIN_TCP_ESC_ButtonStatus_oTCPtoMaster_oLIN02_e4eaf9d3_Rx 527
#define ComConf_ComSignal_LIN_TCP_KnobPostionStatus_oTCPtoMaster_oLIN02_d1058f2b_Rx 528
#define ComConf_ComSignal_LIN_TCP_TCS_ButtonStatus_oTCPtoMaster_oLIN02_fa9712f2_Rx 529
#define ComConf_ComSignal_LIN_WRDownButtonStatus_oRCECStoCIOM_L5_oLIN04_48a8dab2_Rx 530
#define ComConf_ComSignal_LIN_WRUpButtonStatus_oRCECStoCIOM_L5_oLIN04_a2873536_Rx 531
#define ComConf_ComSignal_LKSApplicationStatus_oDACU_BB2_02P_oBackbone2_641e0f5d_Rx 532
#define ComConf_ComSignal_LKSCorrectiveSteeringStatus_oDACU_BB2_02P_oBackbone2_fb23c82c_Rx 533
#define ComConf_ComSignal_LevelControlInformation_ISig_4_oVMCU_BB2_02P_oBackbone2_c3136e85_Rx 534
#define ComConf_ComSignal_LiftAxle1PositionStatus_ISig_4_oVMCU_BB2_02P_oBackbone2_8f87d670_Rx 535
#define ComConf_ComSignal_LiftAxle1UpRequestACK_ISig_4_oVMCU_BB2_02P_oBackbone2_fa0577fd_Rx 536
#define ComConf_ComSignal_LiftAxle2PositionStatus_ISig_4_oVMCU_BB2_02P_oBackbone2_340ccbdf_Rx 537
#define ComConf_ComSignal_LiftAxle2UpRequestACK_ISig_4_oVMCU_BB2_02P_oBackbone2_c5ce0968_Rx 538
#define ComConf_ComSignal_LivBatteryCharging_stat_ISig_4_oVMCU_BB2_74P_oBackbone2_b323441a_Rx 539
#define ComConf_ComSignal_LngTank1RemainingGasVolume_ISig_3_oACM_BB1_01P_oBackbone1J1939_8a2851cd_Rx 540
#define ComConf_ComSignal_LngTank2RemainingGasVolume_ISig_3_oACM_BB1_01P_oBackbone1J1939_ec2c84fd_Rx 541
#define ComConf_ComSignal_LoadDistributionALDChangeACK_ISig_4_oVMCU_BB2_54P_oBackbone2_0286104b_Rx 542
#define ComConf_ComSignal_LoadDistributionChangeACK_ISig_4_oVMCU_BB2_02P_oBackbone2_3f2946ee_Rx 543
#define ComConf_ComSignal_LoadDistributionFuncSelected_ISig_4_oVMCU_BB2_02P_oBackbone2_e30d445f_Rx 544
#define ComConf_ComSignal_LoadDistributionRequestedACK_ISig_4_oVMCU_BB2_52P_oBackbone2_27f055a3_Rx 545
#define ComConf_ComSignal_LoadDistributionSelected_ISig_4_oVMCU_BB2_02P_oBackbone2_91087134_Rx 546
#define ComConf_ComSignal_LoadTrailer1_ISig_4_oVMCU_BB2_107P_oBackbone2_09d820ce_Rx 547
#define ComConf_ComSignal_LoadTrailer2_ISig_4_oVMCU_BB2_106P_oBackbone2_b9c80a11_Rx 548
#define ComConf_ComSignal_LoadTrailer3_ISig_4_oVMCU_BB2_109P_oBackbone2_ba3a8e12_Rx 549
#define ComConf_ComSignal_LoadTrailer4_ISig_4_oVMCU_BB2_106P_oBackbone2_62c5eca5_Rx 550
#define ComConf_ComSignal_LoadTrailer5_ISig_4_oVMCU_BB2_87P_oBackbone2_59e082b7_Rx 551
#define ComConf_ComSignal_LoadTruck_ISig_4_oVMCU_BB2_107P_oBackbone2_1a851661_Rx 552
#define ComConf_ComSignal_Locking_Switch_stat_oDDM_Sec_03S_oSecuritySubnet_5089aa26_Rx 553
#define ComConf_ComSignal_LongMotionDirectionQual_ISig_4_oVMCU_BB2_51P_oBackbone2_a56d21cd_Rx 554
#define ComConf_ComSignal_LongMotionDirection_ISig_4_oVMCU_BB2_51P_oBackbone2_6a1d65c7_Rx 555
#define ComConf_ComSignal_MediaSourcesListNPRsp_ISig_4_oHMIIOM_BB2_34S_oBackbone2_ce7ebea5_Rx 562
#define ComConf_ComSignal_MemoDisplayIndication_Cmd_ISig_5_oCCM_Cab_01P_oCabSubnet_0ca62f66_Rx 571
#define ComConf_ComSignal_MinutesLocal_ISig_4_oVMCU_BB2_119P_oBackbone2_06e06d22_Rx 572
#define ComConf_ComSignal_MinutesUTC_ISig_3_oTD_X_HMIIOM_oBackbone1J1939_b5b3e478_Rx 573
#define ComConf_ComSignal_MirrorHeatNormModeBtn_stat_ISig_5_oCCM_Cab_01P_oCabSubnet_7d638b95_Rx 574
#define ComConf_ComSignal_MirrorHeatNormalModeInd_cmd_2_ISig_10_oDDM_Sec_01P_oSecuritySubnet_c65f1413_Rx 575
#define ComConf_ComSignal_MirrorHeat_rqst_ddm_oDDM_Sec_01P_oSecuritySubnet_f2c6892d_Rx 576
#define ComConf_ComSignal_MirrorHeatingMode_ISig_4_oVMCU_BB2_03P_oBackbone2_93dcd786_Rx 577
#define ComConf_ComSignal_MonthLocal_ISig_4_oVMCU_BB2_119P_oBackbone2_a407e1c2_Rx 578
#define ComConf_ComSignal_MonthUTC_ISig_3_oTD_X_HMIIOM_oBackbone1J1939_151be18c_Rx 579
#define ComConf_ComSignal_PHMaintenanceService_stat_ISig_5_oCCM_Cab_01P_oCabSubnet_54ccfed7_Rx 584
#define ComConf_ComSignal_PH_Activation_cmd_ISig_5_oCCM_Cab_04P_oCabSubnet_da4064ac_Rx 612
#define ComConf_ComSignal_PSWindowPosition_ISig_10_oPDM_Sec_01P_oSecuritySubnet_ed1723f6_Rx 613
#define ComConf_ComSignal_ParkHeaterTimerReleased_stat_ISig_4_oVMCU_BB2_110P_oBackbone2_52fa2abd_Rx 614
#define ComConf_ComSignal_ParkingBrake_stat_ISig_4_oVMCU_BB2_03P_oBackbone2_6d75ab7e_Rx 615
#define ComConf_ComSignal_ParkingClimate_IndicationCmd_ISig_5_oCCM_Cab_07P_oCabSubnet_8738d589_Rx 616
#define ComConf_ComSignal_ParkingHeaterCleaning_Rqst_ISig_5_oCCM_Cab_04P_oCabSubnet_267a1400_Rx 617
#define ComConf_ComSignal_ParkingHeater_IndicationCmd_ISig_5_oCCM_Cab_04P_oCabSubnet_0283df54_Rx 618
#define ComConf_ComSignal_ParkingLight_Indication_oVMCU_BB2_03P_oBackbone2_e64048d9_Rx 619
#define ComConf_ComSignal_PassengerDoorAjar_stat_ISig_10_oPDM_Sec_01P_oSecuritySubnet_15fc3894_Rx 620
#define ComConf_ComSignal_PassengerDoorKeyCylTurned_stat_oPDM_Sec_04S_oSecuritySubnet_567e9301_Rx 621
#define ComConf_ComSignal_PassengerDoorLatch_stat_oPDM_Sec_01P_oSecuritySubnet_7ad7cbe3_Rx 622
#define ComConf_ComSignal_PinCodeEntered_value_oHMIIOM_BB2_09P_oBackbone2_7f89cada_Rx 623
#define ComConf_ComSignal_PloughLampModeStatus_ISig_4_oBBM_BB2_01P_oBackbone2_ce1fdf4f_Rx 624
#define ComConf_ComSignal_PredeliveryModeIndication_cmd_oVMCU_BB2_04P_oBackbone2_f371a782_Rx 625
#define ComConf_ComSignal_Pto1Indication_oVMCU_BB2_07P_oBackbone2_4298758a_Rx 626
#define ComConf_ComSignal_Pto1Status_ISig_4_oVMCU_BB2_07P_oBackbone2_c7aca240_Rx 627
#define ComConf_ComSignal_Pto2Indication_oVMCU_BB2_07P_oBackbone2_26780e74_Rx 628
#define ComConf_ComSignal_Pto2Status_ISig_4_oVMCU_BB2_07P_oBackbone2_1437bebb_Rx 629
#define ComConf_ComSignal_Pto3Indication_oVMCU_BB2_07P_oBackbone2_b308dae1_Rx 630
#define ComConf_ComSignal_Pto3Status_ISig_4_oVMCU_BB2_07P_oBackbone2_5abeb512_Rx 631
#define ComConf_ComSignal_Pto4Indication_oVMCU_BB2_07P_oBackbone2_efb8f988_Rx 632
#define ComConf_ComSignal_Pto4Status_ISig_4_oVMCU_BB2_07P_oBackbone2_6870810c_Rx 633
#define ComConf_ComSignal_PtosStatus_ISig_4_oVMCU_BB2_07P_oBackbone2_9464094a_Rx 634
#define ComConf_ComSignal_ROPBrakeControlActive_ISig_3_oVDC1_X_EBS_oBackbone1J1939_724c732f_Rx 635
#define ComConf_ComSignal_RampHeightOutsideTargetRange_ISig_4_oVMCU_BB2_20P_oBackbone2_d166bc63_Rx 636
#define ComConf_ComSignal_RampLevelRequestACK_ISig_4_oVMCU_BB2_07P_oBackbone2_a790dd8f_Rx 637
#define ComConf_ComSignal_RampLevelStatus_ISig_4_oVMCU_BB2_20P_oBackbone2_07183a96_Rx 638
#define ComConf_ComSignal_RampLevelStorageAck_ISig_4_oVMCU_BB2_02P_oBackbone2_4026e627_Rx 639
#define ComConf_ComSignal_RearAxleSteeringFunctionStatus_oEBS_BB1_02P_oBackbone1J1939_101ad651_Rx 640
#define ComConf_ComSignal_RearEndPositionStatus_ISig_4_oVMCU_BB2_20P_oBackbone2_c30080df_Rx 641
#define ComConf_ComSignal_RearFog_Indication_oVMCU_BB2_03P_oBackbone2_fa31dca4_Rx 642
#define ComConf_ComSignal_ReducedLoadMode_stat_ISig_4_oVMCU_BB2_55P_oBackbone2_c05bc810_Rx 643
#define ComConf_ComSignal_Regeneration_DeviceInd_oHMIIOM_BB2_24P_oBackbone2_86c1e4d1_Rx 644
#define ComConf_ComSignal_RelCargoLoadTrailer1_ISig_4_oVMCU_BB2_90P_oBackbone2_0fa308c1_Rx 645
#define ComConf_ComSignal_RelCargoLoadTrailer2_ISig_4_oVMCU_BB2_86P_oBackbone2_695e877f_Rx 646
#define ComConf_ComSignal_RelCargoLoadTrailer3_ISig_4_oVMCU_BB2_86P_oBackbone2_5fac178c_Rx 647
#define ComConf_ComSignal_RelCargoLoadTrailer4_ISig_4_oVMCU_BB2_89P_oBackbone2_f8013060_Rx 648
#define ComConf_ComSignal_RelCargoLoadTrailer5_ISig_4_oVMCU_BB2_90P_oBackbone2_d4694b0d_Rx 649
#define ComConf_ComSignal_RelCargoLoadTruck_ISig_4_oVMCU_BB2_88P_oBackbone2_842e5564_Rx 650
#define ComConf_ComSignal_RemoteParkClimateRqst_ISig_4_oIC3_BB2_02P_oBackbone2_9ef6badb_Rx 651
#define ComConf_ComSignal_ResponseErrorCCFW_oCCFWtoCIOM_L4_oLIN03_38ff59f8_Rx 652
#define ComConf_ComSignal_ResponseErrorDLFW_oDLFWtoCIOM_L4_oLIN03_a0bc7d9c_Rx 653
#define ComConf_ComSignal_ResponseErrorELCP1_oELCP1toCIOM_L4_oLIN03_a9bf457f_Rx 654
#define ComConf_ComSignal_ResponseErrorELCP2_oELCP2toCIOM_L4_oLIN03_a23bb7d3_Rx 655
#define ComConf_ComSignal_ResponseErrorILCP1_oILCP1toCIOM_L1_oLIN00_44250bf0_Rx 656
#define ComConf_ComSignal_ResponseErrorILCP2_oILCP2toCIOM_L4_oLIN03_9e48a682_Rx 657
#define ComConf_ComSignal_ResponseErrorLECM2_oLECM2toCIOM_FR1_L1_oLIN00_ed8050df_Rx 658
#define ComConf_ComSignal_ResponseErrorLECMBasic_oLECMBasic2CIOM_L1_oLIN00_9a0b7e5e_Rx 659
#define ComConf_ComSignal_ResponseErrorRCECS_oRCECStoCIOM_L5_oLIN04_07d94fb4_Rx 660
#define ComConf_ComSignal_ResponseErrorTCP_oTCPtoMaster_oLIN02_2075be52_Rx 661
#define ComConf_ComSignal_RetarderTorqueMode_ISig_3_oERC1_X_RECU_oBackbone1J1939_68c292d8_Rx 662
#define ComConf_ComSignal_ReverseGearEngaged_ISig_4_oVMCU_BB2_01P_oBackbone2_ea2f14fc_Rx 663
#define ComConf_ComSignal_RideHeightFunctionStatus_ISig_4_oVMCU_BB2_02P_oBackbone2_e99959ce_Rx 664
#define ComConf_ComSignal_RideHeightOutsideTargetRange_ISig_4_oVMCU_BB2_02P_oBackbone2_f6672cb2_Rx 665
#define ComConf_ComSignal_RideHeightStatus_ISig_4_oVMCU_BB2_02P_oBackbone2_15a23831_Rx 666
#define ComConf_ComSignal_RideHeightStorageAck_ISig_4_oVMCU_BB2_02P_oBackbone2_af65dfcb_Rx 667
#define ComConf_ComSignal_RollEndPositionStatus_ISig_4_oVMCU_BB2_20P_oBackbone2_21bf1658_Rx 668
#define ComConf_ComSignal_RollOverAccidentStatus_ISig_5_oSRS_Cab_01P_oCabSubnet_3b17343f_Rx 669
#define ComConf_ComSignal_RollerBenchGUIDeviceStatus_oHMIIOM_BB2_38P_oBackbone2_70220121_Rx 670
#define ComConf_ComSignal_SCLLogicEnable_rqst_oVMCU_BB2_05P_oBackbone2_99998d6b_Rx 671
#define ComConf_ComSignal_SEM_AudioMuteStat_ISig_4_oHMIIOM_BB2_33P_oBackbone2_a2364845_Rx 687
#define ComConf_ComSignal_SEM_AudioVolValIndCmd_ISig_4_oHMIIOM_BB2_33P_oBackbone2_8785fd0e_Rx 688
#define ComConf_ComSignal_SEM_DisplayText_stat_ISig_4_oHMIIOM_BB2_36S_oBackbone2_61e7ddb2_Rx 689
#define ComConf_ComSignal_SEM_PresetIndicationCmd_ISig_4_oHMIIOM_BB2_33P_oBackbone2_df80a1f7_Rx 690
#define ComConf_ComSignal_SRSAirbagStatus_ISig_5_oSRS_Cab_01P_oCabSubnet_47faee06_Rx 700
#define ComConf_ComSignal_SWSpdCtrlButtonsStatus6_oHMIIOM_BB2_01P_oBackbone2_f63c073a_Rx 701
#define ComConf_ComSignal_SWSpeedControlAdjustMode_oHMIIOM_BB2_01P_oBackbone2_4c33da86_Rx 702
#define ComConf_ComSignal_SecondsLocal_ISig_4_oVMCU_BB2_119P_oBackbone2_fbd19361_Rx 703
#define ComConf_ComSignal_SecondsUTC_ISig_3_oTD_X_HMIIOM_oBackbone1J1939_5a9bc5ac_Rx 704
#define ComConf_ComSignal_SelectedLanguage_stat_ISig_4_oHMIIOM_BB2_08P_oBackbone2_14725e1f_Rx 705
#define ComConf_ComSignal_SelectedTimeFormat_stat_ISig_4_oHMIIOM_BB2_08P_oBackbone2_6dd9ccb8_Rx 706
#define ComConf_ComSignal_SelectedWeightUnit_stat_ISig_4_oHMIIOM_BB2_08P_oBackbone2_d9c4bc19_Rx 707
#define ComConf_ComSignal_ServiceBrakeAirPrsCircuit1_ISig_3_oAIR1_X_VMCU_oBackbone1J1939_e8caeb17_Rx 708
#define ComConf_ComSignal_ServiceBrakeAirPrsCircuit2_ISig_3_oAIR1_X_VMCU_oBackbone1J1939_b2abd477_Rx 709
#define ComConf_ComSignal_ShortStopHeater_cmd_ISig_5_oCCM_Cab_07P_oCabSubnet_ade2d6ea_Rx 725
#define ComConf_ComSignal_ShortStopHeater_status_ISig_4_oVMCU_BB2_58P_oBackbone2_001b5374_Rx 726
#define ComConf_ComSignal_SpeedLockingInhibition_stat_oHMIIOM_BB2_08P_oBackbone2_0bfbe2ed_Rx 727
#define ComConf_ComSignal_SteeringWheelAngle_ISig_3_oVDC2_X_EBS_oBackbone1J1939_3194dacc_Rx 728
#define ComConf_ComSignal_StopLevelChangeAck_ISig_4_oVMCU_BB2_02P_oBackbone2_5eeeb44a_Rx 729
#define ComConf_ComSignal_SwitchDetectionNeeded1L1_oFSP1_Frame_L1_oLIN00_099b825d_Rx 730
#define ComConf_ComSignal_SwitchDetectionNeeded1L2_oFSP1_Frame_L2_oLIN01_86f68c15_Rx 731
#define ComConf_ComSignal_SwitchDetectionNeeded1L3_oFSP1_Frame_L3_oLIN02_482637e5_Rx 732
#define ComConf_ComSignal_SwitchDetectionNeeded1L4_oFSP1_Frame_L4_oLIN03_435d96c4_Rx 733
#define ComConf_ComSignal_SwitchDetectionNeeded1L5_oFSP1_Frame_L5_oLIN04_8ae0e92d_Rx 734
#define ComConf_ComSignal_SwitchDetectionNeeded2L1_oFSP2_Frame_L1_oLIN00_6fec6f8a_Rx 735
#define ComConf_ComSignal_SwitchDetectionNeeded2L2_oFSP2_Frame_L2_oLIN01_e08161c2_Rx 736
#define ComConf_ComSignal_SwitchDetectionNeeded2L3_oFSP2_Frame_L3_oLIN02_2e51da32_Rx 737
#define ComConf_ComSignal_SwitchDetectionNeeded3L2_oFSP3_Frame_L2_oLIN01_c2ac3a8f_Rx 738
#define ComConf_ComSignal_SwitchDetectionNeeded4L2_oFSP4_Frame_L2_oLIN01_2c6eba6c_Rx 739
#define ComConf_ComSignal_SwitchDetectionResp1L1_oFSP1_SwitchDetResp_L1_oLIN00_e8a163d5_Rx 740
#define ComConf_ComSignal_SwitchDetectionResp1L2_oFSP1_SwitchDetResp_L2_oLIN01_02016dd3_Rx 741
#define ComConf_ComSignal_SwitchDetectionResp1L3_oFSP1_SwitchDetResp_L3_oLIN02_5945d426_Rx 742
#define ComConf_ComSignal_SwitchDetectionResp1L4_oFSP1_SwitchDetResp_L4_oLIN03_0c30779e_Rx 743
#define ComConf_ComSignal_SwitchDetectionResp1L5_oFSP1_SwitchDetResp_L5_oLIN04_50190a72_Rx 744
#define ComConf_ComSignal_SwitchDetectionResp2L1_oFSP2_SwitchDetResp_L1_oLIN00_865b6493_Rx 745
#define ComConf_ComSignal_SwitchDetectionResp2L2_oFSP2_SwitchDetResp_L2_oLIN01_6cfb6a95_Rx 746
#define ComConf_ComSignal_SwitchDetectionResp2L3_oFSP2_SwitchDetResp_L3_oLIN02_37bfd360_Rx 747
#define ComConf_ComSignal_SwitchDetectionResp3L2_oFSP3_SwitchDetResp_L2_oLIN01_ff826a68_Rx 748
#define ComConf_ComSignal_SwitchDetectionResp4L2_oFSP4_SwitchDetResp_L2_oLIN01_b10f6419_Rx 749
#define ComConf_ComSignal_Synch_Unsynch_Mode_stat_oHMIIOM_BB2_08P_oBackbone2_8a425ab2_Rx 750
#define ComConf_ComSignal_SystemEvent_ISig_3_oTCO1_X_TACHO_oBackbone1J1939_5a5c5e53_Rx 751
#define ComConf_ComSignal_TCS_ButtonIndication_oHMIIOM_BB2_39P_oBackbone2_7a43f041_Rx 752
#define ComConf_ComSignal_TachographPerformance_ISig_3_oTCO1_X_TACHO_oBackbone1J1939_1bf17036_Rx 753
#define ComConf_ComSignal_TachographVehicleSpeed_ISig_3_oTCO1_X_TACHO_oBackbone1J1939_78a7f516_Rx 754
#define ComConf_ComSignal_TailLiftConditionsStatus_ISig_4_oBBM_BB2_06P_oBackbone2_dcedc42f_Rx 755
#define ComConf_ComSignal_TailLiftMotionRequest_ISig_5_oWRCS_Cab_03P_oCabSubnet_40398181_Rx 756
#define ComConf_ComSignal_TailLiftMotionStatus_ISig_4_oBBM_BB2_06P_oBackbone2_13c92849_Rx 757
#define ComConf_ComSignal_TailLiftRemoteNotAllowed_ISig_4_oBBM_BB2_06P_oBackbone2_dfb45e24_Rx 758
#define ComConf_ComSignal_TemperatureRqstIndication_cmd_ISig_5_oCCM_Cab_01P_oCabSubnet_f9276c95_Rx 759
#define ComConf_ComSignal_TemporaryRSLStatus_oVMCU_BB2_08P_oBackbone2_a2c7fff7_Rx 760
#define ComConf_ComSignal_TipperConditionsStatus_ISig_4_oBBM_BB2_06P_oBackbone2_26285b26_Rx 761
#define ComConf_ComSignal_TipperEmergencyStopStatus_ISig_4_oBBM_BB2_06P_oBackbone2_60d1f049_Rx 762
#define ComConf_ComSignal_TipperEmergencyStop_ISig_5_oWRCS_Cab_03P_oCabSubnet_8a6e172b_Rx 763
#define ComConf_ComSignal_TipperPrimaryBodyStatus_ISig_4_oBBM_BB2_06P_oBackbone2_8e0b25f3_Rx 764
#define ComConf_ComSignal_TipperSecondaryBodyStatus_ISig_4_oBBM_BB2_06P_oBackbone2_c46d962a_Rx 765
#define ComConf_ComSignal_TipperShakerRequest_ISig_5_oWRCS_Cab_03P_oCabSubnet_1ff097b1_Rx 766
#define ComConf_ComSignal_TipperShakerStatus_ISig_4_oBBM_BB2_06P_oBackbone2_818684fd_Rx 767
#define ComConf_ComSignal_TipperTailGateRequest_ISig_5_oWRCS_Cab_03P_oCabSubnet_440fef4d_Rx 768
#define ComConf_ComSignal_TipperTailGateStatus_ISig_4_oBBM_BB2_06P_oBackbone2_e3938ec9_Rx 769
#define ComConf_ComSignal_TipperTarpaulinRequest_ISig_5_oWRCS_Cab_03P_oCabSubnet_5150d5ab_Rx 770
#define ComConf_ComSignal_TipperTarpaulinStatus_ISig_4_oBBM_BB2_06P_oBackbone2_910c0b9b_Rx 771
#define ComConf_ComSignal_TipperTippingBodySelection_ISig_5_oWRCS_Cab_03P_oCabSubnet_d546ba53_Rx 772
#define ComConf_ComSignal_TipperUpDownRequest_ISig_5_oWRCS_Cab_03P_oCabSubnet_cce73dec_Rx 773
#define ComConf_ComSignal_TipperUpDownStatus_ISig_4_oBBM_BB2_06P_oBackbone2_be3d48c3_Rx 774
#define ComConf_ComSignal_TotalVehicleDistanceHighRes_ISig_3_oVDHR_X_VMCU_oBackbone1J1939_6b802705_Rx 775
#define ComConf_ComSignal_TrafficAccidentHazardLightRqst_ISig_5_oSRS_Cab_01P_oCabSubnet_8cf3600c_Rx 776
#define ComConf_ComSignal_Trail1Axle1Type_ISig_4_oVMCU_BB2_91P_oBackbone2_48743ce2_Rx 777
#define ComConf_ComSignal_Trail1Axle2Type_ISig_4_oVMCU_BB2_91P_oBackbone2_12150382_Rx 778
#define ComConf_ComSignal_Trail1Axle3Type_ISig_4_oVMCU_BB2_91P_oBackbone2_92e5149d_Rx 779
#define ComConf_ComSignal_Trail1Axle4Type_ISig_4_oVMCU_BB2_91P_oBackbone2_a6d77d42_Rx 780
#define ComConf_ComSignal_Trail1Axle5Type_ISig_4_oVMCU_BB2_91P_oBackbone2_26276a5d_Rx 781
#define ComConf_ComSignal_Trail1Axle6Type_ISig_4_oVMCU_BB2_91P_oBackbone2_7c46553d_Rx 782
#define ComConf_ComSignal_Trail1NoOfAxles_ISig_4_oVMCU_BB2_93P_oBackbone2_578189de_Rx 783
#define ComConf_ComSignal_Trail1NoOfFrontAxles_ISig_4_oVMCU_BB2_93P_oBackbone2_d2c00245_Rx 784
#define ComConf_ComSignal_Trail2Axle1Type_ISig_4_oVMCU_BB2_91P_oBackbone2_704fb791_Rx 787
#define ComConf_ComSignal_Trail2Axle2Type_ISig_4_oVMCU_BB2_91P_oBackbone2_2a2e88f1_Rx 788
#define ComConf_ComSignal_Trail2Axle3Type_ISig_4_oVMCU_BB2_91P_oBackbone2_aade9fee_Rx 789
#define ComConf_ComSignal_Trail2Axle4Type_ISig_4_oVMCU_BB2_91P_oBackbone2_9eecf631_Rx 790
#define ComConf_ComSignal_Trail2Axle5Type_ISig_4_oVMCU_BB2_91P_oBackbone2_1e1ce12e_Rx 791
#define ComConf_ComSignal_Trail2Axle6Type_ISig_4_oVMCU_BB2_91P_oBackbone2_447dde4e_Rx 792
#define ComConf_ComSignal_Trail2NoOfAxles_ISig_4_oVMCU_BB2_93P_oBackbone2_6fba02ad_Rx 793
#define ComConf_ComSignal_Trail2NoOfFrontAxles_ISig_4_oVMCU_BB2_93P_oBackbone2_694b1fea_Rx 794
#define ComConf_ComSignal_Trail3Axle1Type_ISig_4_oVMCU_BB2_91P_oBackbone2_d176337f_Rx 797
#define ComConf_ComSignal_Trail3Axle2Type_ISig_4_oVMCU_BB2_91P_oBackbone2_8b170c1f_Rx 798
#define ComConf_ComSignal_Trail3Axle3Type_ISig_4_oVMCU_BB2_91P_oBackbone2_0be71b00_Rx 799
#define ComConf_ComSignal_Trail3Axle4Type_ISig_4_oVMCU_BB2_91P_oBackbone2_3fd572df_Rx 800
#define ComConf_ComSignal_Trail3Axle5Type_ISig_4_oVMCU_BB2_91P_oBackbone2_bf2565c0_Rx 801
#define ComConf_ComSignal_Trail3Axle6Type_ISig_4_oVMCU_BB2_91P_oBackbone2_e5445aa0_Rx 802
#define ComConf_ComSignal_Trail3NoOfAxles_ISig_4_oVMCU_BB2_93P_oBackbone2_ce838643_Rx 803
#define ComConf_ComSignal_Trail3NoOfFrontAxles_ISig_4_oVMCU_BB2_93P_oBackbone2_0032148f_Rx 804
#define ComConf_ComSignal_Trail4Axle1Type_ISig_4_oVMCU_BB2_91P_oBackbone2_0038a177_Rx 807
#define ComConf_ComSignal_Trail4Axle2Type_ISig_4_oVMCU_BB2_91P_oBackbone2_5a599e17_Rx 808
#define ComConf_ComSignal_Trail4Axle3Type_ISig_4_oVMCU_BB2_91P_oBackbone2_daa98908_Rx 809
#define ComConf_ComSignal_Trail4Axle4Type_ISig_4_oVMCU_BB2_91P_oBackbone2_ee9be0d7_Rx 810
#define ComConf_ComSignal_Trail4Axle5Type_ISig_4_oVMCU_BB2_91P_oBackbone2_6e6bf7c8_Rx 811
#define ComConf_ComSignal_Trail4Axle6Type_ISig_4_oVMCU_BB2_91P_oBackbone2_340ac8a8_Rx 812
#define ComConf_ComSignal_Trail4NoOfAxles_ISig_4_oVMCU_BB2_93P_oBackbone2_1fcd144b_Rx 813
#define ComConf_ComSignal_Trail4NoOfFrontAxles_ISig_4_oVMCU_BB2_93P_oBackbone2_c52c22f5_Rx 814
#define ComConf_ComSignal_Trail5Axle1Type_ISig_4_oVMCU_BB2_92P_oBackbone2_1ccb4957_Rx 817
#define ComConf_ComSignal_Trail5Axle2Type_ISig_4_oVMCU_BB2_92P_oBackbone2_46aa7637_Rx 818
#define ComConf_ComSignal_Trail5Axle3Type_ISig_4_oVMCU_BB2_92P_oBackbone2_c65a6128_Rx 819
#define ComConf_ComSignal_Trail5Axle4Type_ISig_4_oVMCU_BB2_92P_oBackbone2_f26808f7_Rx 820
#define ComConf_ComSignal_Trail5Axle5Type_ISig_4_oVMCU_BB2_92P_oBackbone2_72981fe8_Rx 821
#define ComConf_ComSignal_Trail5Axle6Type_ISig_4_oVMCU_BB2_92P_oBackbone2_28f92088_Rx 822
#define ComConf_ComSignal_Trail5NoOfAxles_ISig_4_oVMCU_BB2_93P_oBackbone2_bef490a5_Rx 823
#define ComConf_ComSignal_Trail5NoOfFrontAxles_ISig_4_oVMCU_BB2_93P_oBackbone2_ac552990_Rx 824
#define ComConf_ComSignal_TrailerBodyLampDI_stat_oVMCU_BB2_80P_oBackbone2_47992f30_Rx 827
#define ComConf_ComSignal_TrailerBodyLampFdbk_stat_oVMCU_BB2_80P_oBackbone2_fa358fbc_Rx 828
#define ComConf_ComSignal_TrailersConnected_ISig_3_oEBS_BB1_05P_oBackbone1J1939_468078f0_Rx 829
#define ComConf_ComSignal_TransferCasePTOEngaged_ISig_4_oVMCU_BB2_29P_oBackbone2_9e9887d1_Rx 830
#define ComConf_ComSignal_VehicleMode_ISig_3_oVMCU_BB1_01P_oBackbone1J1939_997c94c6_Rx 833
#define ComConf_ComSignal_VehicleMotion_ISig_3_oTCO1_X_TACHO_oBackbone1J1939_c4c069be_Rx 834
#define ComConf_ComSignal_VehicleOverspeed_ISig_3_oTCO1_X_TACHO_oBackbone1J1939_b3d80892_Rx 835
#define ComConf_ComSignal_WRC5thWheelRequest_oWRCS_Cab_02P_oCabSubnet_6e07aa44_Rx 836
#define ComConf_ComSignal_WRCAirSuspensionStopRequest_oWRCS_Cab_01P_oCabSubnet_18c85d80_Rx 837
#define ComConf_ComSignal_WRCAux1Request_oWRCS_Cab_01P_oCabSubnet_3d62fac1_Rx 838
#define ComConf_ComSignal_WRCAux2Request_oWRCS_Cab_01P_oCabSubnet_66754bd4_Rx 839
#define ComConf_ComSignal_WRCAux3Request_oWRCS_Cab_01P_oCabSubnet_5087db27_Rx 840
#define ComConf_ComSignal_WRCAux4Request_oWRCS_Cab_01P_oCabSubnet_d05a29fe_Rx 841
#define ComConf_ComSignal_WRCAux5Request_oWRCS_Cab_01P_oCabSubnet_e6a8b90d_Rx 842
#define ComConf_ComSignal_WRCAux6Request_oWRCS_Cab_01P_oCabSubnet_bdbf0818_Rx 843
#define ComConf_ComSignal_WRCBeaconRequest_oWRCS_Cab_02P_oCabSubnet_7ba25fea_Rx 844
#define ComConf_ComSignal_WRCCabBodyWLightsRqst_oWRCS_Cab_02P_oCabSubnet_b2a0874a_Rx 845
#define ComConf_ComSignal_WRCCraneRequest_oWRCS_Cab_01P_oCabSubnet_95c4579e_Rx 846
#define ComConf_ComSignal_WRCEngineStartRequest_ISig_5_oWRCS_Cab_02P_oCabSubnet_bdc7ae47_Rx 847
#define ComConf_ComSignal_WRCEngineStopRequest_ISig_5_oWRCS_Cab_02P_oCabSubnet_e2ab787e_Rx 848
#define ComConf_ComSignal_WRCLevelAdjustmentAction_oWRCS_Cab_01P_oCabSubnet_810159ff_Rx 849
#define ComConf_ComSignal_WRCLevelAdjustmentAxles_oWRCS_Cab_01P_oCabSubnet_b1b2524c_Rx 850
#define ComConf_ComSignal_WRCLevelAdjustmentStroke_oWRCS_Cab_01P_oCabSubnet_e59ce5a1_Rx 851
#define ComConf_ComSignal_WRCLevelUserMemoryAction_oWRCS_Cab_02P_oCabSubnet_42c76a61_Rx 852
#define ComConf_ComSignal_WRCLevelUserMemory_oWRCS_Cab_02P_oCabSubnet_d79fc958_Rx 853
#define ComConf_ComSignal_WRCLockButtonStatus_oWRCS_Cab_01P_oCabSubnet_762ddecb_Rx 854
#define ComConf_ComSignal_WRCRollRequest_oWRCS_Cab_01P_oCabSubnet_47562199_Rx 855
#define ComConf_ComSignal_WRCSideReverseWorkingRequest_oWRCS_Cab_01P_oCabSubnet_6e2a3dc2_Rx 856
#define ComConf_ComSignal_WRCTailLiftRequest_oWRCS_Cab_01P_oCabSubnet_a1fd4993_Rx 857
#define ComConf_ComSignal_WRCUnlockButtonStatus_oWRCS_Cab_01P_oCabSubnet_fd05435c_Rx 858
#define ComConf_ComSignal_WRC_Docking_stat_ISig_5_oWRCS_Cab_02P_oCabSubnet_2cd788fb_Rx 859
#define ComConf_ComSignal_Washing_HMI_rqst_ISig_4_oVMCU_BB2_04P_oBackbone2_8a7814e2_Rx 860
#define ComConf_ComSignal_WheelBasedVehicleSpeedLowRes_ISig_4_oVMCU_BB2_08P_oBackbone2_48a57588_Rx 861
#define ComConf_ComSignal_WheelBasedVehicleSpeed_ISig_3_oCCVS_X_VMCU_oBackbone1J1939_e3ff6d4c_Rx 862
#define ComConf_ComSignal_WindscreenDefrostInd_cmd_ISig_5_oCCM_Cab_01P_oCabSubnet_ff0c4a94_Rx 863
#define ComConf_ComSignal_WiperModeStatus_ISig_4_oVMCU_BB2_03P_oBackbone2_5d215fe0_Rx 864
#define ComConf_ComSignal_WrcEngSpdCtrlDecreaseButtStat_oWRCS_Cab_02P_oCabSubnet_f90375a0_Rx 865
#define ComConf_ComSignal_WrcEngSpdCtrlEnableStatus_oWRCS_Cab_02P_oCabSubnet_c15f6325_Rx 866
#define ComConf_ComSignal_WrcEngSpdCtrlIncreaseButtStat_oWRCS_Cab_02P_oCabSubnet_7a1f067c_Rx 867
#define ComConf_ComSignal_WrcEngSpdCtrlResumeButtonStat_oWRCS_Cab_02P_oCabSubnet_09c53237_Rx 868
#define ComConf_ComSignal_WrcPto1ButtonStatus_oWRCS_Cab_01P_oCabSubnet_9b7a6ac6_Rx 869
#define ComConf_ComSignal_WrcPto2ButtonStatus_oWRCS_Cab_01P_oCabSubnet_d6926aa1_Rx 870
#define ComConf_ComSignal_WrcPto3ButtonStatus_oWRCS_Cab_01P_oCabSubnet_5b1a9743_Rx 871
#define ComConf_ComSignal_WrcPto4ButtonStatus_oWRCS_Cab_01P_oCabSubnet_4d426a6f_Rx 872
#define ComConf_ComSignal_YCBrakeControlActive_ISig_3_oVDC1_X_EBS_oBackbone1J1939_ba28bcee_Rx 873
#define ComConf_ComSignal_YearLocal_ISig_4_oVMCU_BB2_119P_oBackbone2_8e689699_Rx 874
#define ComConf_ComSignal_YearUTC_ISig_3_oTD_X_HMIIOM_oBackbone1J1939_e9880687_Rx 875
/**\} */

/**
 * \defgroup ComHandleIdsComTxSig Handle IDs of handle space ComTxSig.
 * \brief Tx Signals
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComGroupSignal_AlarmClockAlarms_stat_DaySet_ISig_5_oCIOM_Cab_12P_oCabSubnet_0665f472_Tx 27
#define ComConf_ComGroupSignal_AlarmClockAlarms_stat_ID_ISig_5_oCIOM_Cab_12P_oCabSubnet_1ea53bb8_Tx 28
#define ComConf_ComGroupSignal_AlarmClockAlarms_stat_Mode_ISig_5_oCIOM_Cab_12P_oCabSubnet_e2919c30_Tx 29
#define ComConf_ComGroupSignal_AlarmClockAlarms_stat_SetHr_ISig_5_oCIOM_Cab_12P_oCabSubnet_ece07248_Tx 30
#define ComConf_ComGroupSignal_AlarmClockAlarms_stat_SetMin_ISig_5_oCIOM_Cab_12P_oCabSubnet_ea956639_Tx 31
#define ComConf_ComGroupSignal_AlarmClockAlarms_stat_Stat_ISig_5_oCIOM_Cab_12P_oCabSubnet_ed6ee546_Tx 32
#define ComConf_ComGroupSignal_AlarmClockAlarms_stat_Type_ISig_5_oCIOM_Cab_12P_oCabSubnet_d292f894_Tx 33
#define ComConf_ComGroupSignal_AlarmClockNotification_ID_ISig_5_oCIOM_Cab_12P_oCabSubnet_7a0f16f7_Tx 34
#define ComConf_ComGroupSignal_AlarmClockNotification_ID_ISig_13_oCIOMtoSlaves2_FR2_L1_oLIN00_ab9341d2_Tx 35
#define ComConf_ComGroupSignal_AlarmClockNotification_Stat_ISig_5_oCIOM_Cab_12P_oCabSubnet_df508e53_Tx 36
#define ComConf_ComGroupSignal_AlarmClockNotification_Stat_ISig_13_oCIOMtoSlaves2_FR2_L1_oLIN00_e25090ee_Tx 37
#define ComConf_ComGroupSignal_AlarmClockNotification_Type_ISig_5_oCIOM_Cab_12P_oCabSubnet_e0ac9381_Tx 38
#define ComConf_ComGroupSignal_AlarmClockNotification_Type_ISig_13_oCIOMtoSlaves2_FR2_L1_oLIN00_5716931d_Tx 39
#define ComConf_ComGroupSignal_AlmClkSetAlm_LECM_rq_DaySet_ISig_4_oCIOM_BB2_26S_oBackbone2_a23fa5b3_Tx 42
#define ComConf_ComGroupSignal_AlmClkSetAlm_LECM_rq_ID_ISig_4_oCIOM_BB2_26S_oBackbone2_3c84578f_Tx 43
#define ComConf_ComGroupSignal_AlmClkSetAlm_LECM_rq_Mode_ISig_4_oCIOM_BB2_26S_oBackbone2_e61ddf29_Tx 44
#define ComConf_ComGroupSignal_AlmClkSetAlm_LECM_rq_SetHr_ISig_4_oCIOM_BB2_26S_oBackbone2_11f0822d_Tx 45
#define ComConf_ComGroupSignal_AlmClkSetAlm_LECM_rq_SetMin_ISig_4_oCIOM_BB2_26S_oBackbone2_4ecf37f8_Tx 46
#define ComConf_ComGroupSignal_AlmClkSetAlm_LECM_rq_Stat_ISig_4_oCIOM_BB2_26S_oBackbone2_e9e2a65f_Tx 47
#define ComConf_ComGroupSignal_AlmClkSetAlm_LECM_rq_Type_ISig_4_oCIOM_BB2_26S_oBackbone2_d61ebb8d_Tx 48
#define ComConf_ComGroupSignal_AlmClkSetCurAlm_rqst_ID_oCIOM_BB2_07P_oBackbone2_fb43f7fd_Tx 49
#define ComConf_ComGroupSignal_AlmClkSetCurAlm_rqst_SetHr_oCIOM_BB2_07P_oBackbone2_f1561a06_Tx 50
#define ComConf_ComGroupSignal_AlmClkSetCurAlm_rqst_SetMin_oCIOM_BB2_07P_oBackbone2_21615d84_Tx 51
#define ComConf_ComGroupSignal_AlmClkSetCurAlm_rqst_Stat_oCIOM_BB2_07P_oBackbone2_3a2eddce_Tx 52
#define ComConf_ComGroupSignal_AlmClkSetCurAlm_rqst_Type_oCIOM_BB2_07P_oBackbone2_bf327809_Tx 53
#define ComConf_ComGroupSignal_AlmClkSnze_LECM_rqst_Action_ISig_4_oCIOM_BB2_07P_oBackbone2_2605c808_Tx 54
#define ComConf_ComGroupSignal_AlmClkSnze_LECM_rqst_ID_ISig_4_oCIOM_BB2_07P_oBackbone2_85c9f766_Tx 55
#define ComConf_ComGroupSignal_BunkH2PHTimer_rqst_DurnTimeHr_oCIOM_Cab_03P_oCabSubnet_6676874d_Tx 132
#define ComConf_ComGroupSignal_BunkH2PHTimer_rqst_DurnTimeMin_oCIOM_Cab_03P_oCabSubnet_775e7dad_Tx 133
#define ComConf_ComGroupSignal_BunkH2PHTimer_rqst_StartTimeHr_oCIOM_Cab_03P_oCabSubnet_d127ee8b_Tx 134
#define ComConf_ComGroupSignal_BunkH2PHTimer_rqst_StartTimeMin_oCIOM_Cab_03P_oCabSubnet_05ee4b41_Tx 135
#define ComConf_ComGroupSignal_BunkH2PHTimer_rqst_Timer_cmd_oCIOM_Cab_03P_oCabSubnet_38708947_Tx 136
#define ComConf_ComGroupSignal_DiagFaultStat_Alarm_DtcIdA_ISig_4_oDiagFaultStat_Alarm_BB2_oBackbone2_cd94595c_Tx 325
#define ComConf_ComGroupSignal_DiagFaultStat_Alarm_DtcIdB_ISig_4_oDiagFaultStat_Alarm_BB2_oBackbone2_b3ec11fa_Tx 326
#define ComConf_ComGroupSignal_DiagFaultStat_Alarm_EcuAdr_ISig_4_oDiagFaultStat_Alarm_BB2_oBackbone2_aef1aecb_Tx 327
#define ComConf_ComGroupSignal_DiagFaultStat_Alarm_FailTA_ISig_4_oDiagFaultStat_Alarm_BB2_oBackbone2_69068ed0_Tx 328
#define ComConf_ComGroupSignal_DiagFaultStat_Alarm_FailTB_ISig_4_oDiagFaultStat_Alarm_BB2_oBackbone2_177ec676_Tx 329
#define ComConf_ComGroupSignal_DiagFaultStat_CCM_DtcIdA_ISig_4_oDiagFaultStat_CCM_BB2_oBackbone2_bcd3baa6_Tx 330
#define ComConf_ComGroupSignal_DiagFaultStat_CCM_DtcIdB_ISig_4_oDiagFaultStat_CCM_BB2_oBackbone2_84e831d5_Tx 331
#define ComConf_ComGroupSignal_DiagFaultStat_CCM_EcuAdr_ISig_4_oDiagFaultStat_CCM_BB2_oBackbone2_21f17ebb_Tx 332
#define ComConf_ComGroupSignal_DiagFaultStat_CCM_FailTA_ISig_4_oDiagFaultStat_CCM_BB2_oBackbone2_c6dbb6ce_Tx 333
#define ComConf_ComGroupSignal_DiagFaultStat_CCM_FailTB_ISig_4_oDiagFaultStat_CCM_BB2_oBackbone2_fee03dbd_Tx 334
#define ComConf_ComGroupSignal_DiagFaultStat_CIOM_DtcIdA_ISig_4_oDiagFaultStat_CIOM_BB2_oBackbone2_d7c31724_Tx 335
#define ComConf_ComGroupSignal_DiagFaultStat_CIOM_DtcIdB_ISig_4_oDiagFaultStat_CIOM_BB2_oBackbone2_1ef70c29_Tx 336
#define ComConf_ComGroupSignal_DiagFaultStat_CIOM_EcuAdr_ISig_4_oDiagFaultStat_CIOM_BB2_oBackbone2_b4585939_Tx 337
#define ComConf_ComGroupSignal_DiagFaultStat_CIOM_FailTA_ISig_4_oDiagFaultStat_CIOM_BB2_oBackbone2_94d0f642_Tx 338
#define ComConf_ComGroupSignal_DiagFaultStat_CIOM_FailTB_ISig_4_oDiagFaultStat_CIOM_BB2_oBackbone2_5de4ed4f_Tx 339
#define ComConf_ComGroupSignal_DiagFaultStat_DDM_DtcIdA_ISig_4_oDiagFaultStat_DDM_BB2_oBackbone2_4c315de6_Tx 340
#define ComConf_ComGroupSignal_DiagFaultStat_DDM_DtcIdB_ISig_4_oDiagFaultStat_DDM_BB2_oBackbone2_740ad695_Tx 341
#define ComConf_ComGroupSignal_DiagFaultStat_DDM_EcuAdr_ISig_4_oDiagFaultStat_DDM_BB2_oBackbone2_d11399fb_Tx 342
#define ComConf_ComGroupSignal_DiagFaultStat_DDM_FailTA_ISig_4_oDiagFaultStat_DDM_BB2_oBackbone2_3639518e_Tx 343
#define ComConf_ComGroupSignal_DiagFaultStat_DDM_FailTB_ISig_4_oDiagFaultStat_DDM_BB2_oBackbone2_0e02dafd_Tx 344
#define ComConf_ComGroupSignal_DiagFaultStat_LECM_DtcIdA_ISig_4_oDiagFaultStat_LECM_BB2_oBackbone2_037c5231_Tx 345
#define ComConf_ComGroupSignal_DiagFaultStat_LECM_DtcIdB_ISig_4_oDiagFaultStat_LECM_BB2_oBackbone2_ca48493c_Tx 346
#define ComConf_ComGroupSignal_DiagFaultStat_LECM_EcuAdr_ISig_4_oDiagFaultStat_LECM_BB2_oBackbone2_60e71c2c_Tx 347
#define ComConf_ComGroupSignal_DiagFaultStat_LECM_FailTA_ISig_4_oDiagFaultStat_LECM_BB2_oBackbone2_406fb357_Tx 348
#define ComConf_ComGroupSignal_DiagFaultStat_LECM_FailTB_ISig_4_oDiagFaultStat_LECM_BB2_oBackbone2_895ba85a_Tx 349
#define ComConf_ComGroupSignal_DiagFaultStat_PDM_DtcIdA_ISig_4_oDiagFaultStat_PDM_BB2_oBackbone2_e2d715cd_Tx 350
#define ComConf_ComGroupSignal_DiagFaultStat_PDM_DtcIdB_ISig_4_oDiagFaultStat_PDM_BB2_oBackbone2_daec9ebe_Tx 351
#define ComConf_ComGroupSignal_DiagFaultStat_PDM_EcuAdr_ISig_4_oDiagFaultStat_PDM_BB2_oBackbone2_7ff5d1d0_Tx 352
#define ComConf_ComGroupSignal_DiagFaultStat_PDM_FailTA_ISig_4_oDiagFaultStat_PDM_BB2_oBackbone2_98df19a5_Tx 353
#define ComConf_ComGroupSignal_DiagFaultStat_PDM_FailTB_ISig_4_oDiagFaultStat_PDM_BB2_oBackbone2_a0e492d6_Tx 354
#define ComConf_ComGroupSignal_DiagFaultStat_SRS_DtcIdA_ISig_4_oDiagFaultStat_SRS_BB2_oBackbone2_d7a18969_Tx 355
#define ComConf_ComGroupSignal_DiagFaultStat_SRS_DtcIdB_ISig_4_oDiagFaultStat_SRS_BB2_oBackbone2_ef9a021a_Tx 356
#define ComConf_ComGroupSignal_DiagFaultStat_SRS_EcuAdr_ISig_4_oDiagFaultStat_SRS_BB2_oBackbone2_4a834d74_Tx 357
#define ComConf_ComGroupSignal_DiagFaultStat_SRS_FailTA_ISig_4_oDiagFaultStat_SRS_BB2_oBackbone2_ada98501_Tx 358
#define ComConf_ComGroupSignal_DiagFaultStat_SRS_FailTB_ISig_4_oDiagFaultStat_SRS_BB2_oBackbone2_95920e72_Tx 359
#define ComConf_ComGroupSignal_DiagFaultStat_WRCS_DtcIdA_ISig_4_oDiagFaultStat_WRCS_BB2_oBackbone2_664b3203_Tx 360
#define ComConf_ComGroupSignal_DiagFaultStat_WRCS_DtcIdB_ISig_4_oDiagFaultStat_WRCS_BB2_oBackbone2_af7f290e_Tx 361
#define ComConf_ComGroupSignal_DiagFaultStat_WRCS_EcuAdr_ISig_4_oDiagFaultStat_WRCS_BB2_oBackbone2_05d07c1e_Tx 362
#define ComConf_ComGroupSignal_DiagFaultStat_WRCS_FailTA_ISig_4_oDiagFaultStat_WRCS_BB2_oBackbone2_2558d365_Tx 363
#define ComConf_ComGroupSignal_DiagFaultStat_WRCS_FailTB_ISig_4_oDiagFaultStat_WRCS_BB2_oBackbone2_ec6cc868_Tx 364
#define ComConf_ComGroupSignal_ESCReqESC_CtrlTrimMode_ISig_5_oCIOM_Cab_12P_oCabSubnet_365e62be_Tx 390
#define ComConf_ComGroupSignal_ESCReqESC_CtrlTrimReq_ISig_5_oCIOM_Cab_12P_oCabSubnet_873255f8_Tx 391
#define ComConf_ComGroupSignal_ESCReqESC_CtrlTrimStat_ISig_5_oCIOM_Cab_12P_oCabSubnet_39a11bc8_Tx 392
#define ComConf_ComGroupSignal_ESCReqESC_CtrlTrimValue_ISig_5_oCIOM_Cab_12P_oCabSubnet_cb5cae79_Tx 393
#define ComConf_ComGroupSignal_EngTimerGUIEvCmd_EhTimer1_cmd_ISig_5_oCIOM_Cab_04S_oCabSubnet_1a3c63da_Tx 398
#define ComConf_ComGroupSignal_EngTimerGUIEvCmd_EhTimer2_cmd_ISig_5_oCIOM_Cab_04S_oCabSubnet_405d5cba_Tx 399
#define ComConf_ComGroupSignal_EngTimerGUIEvCmd_EhTimer3_cmd_ISig_5_oCIOM_Cab_04S_oCabSubnet_c0ad4ba5_Tx 400
#define ComConf_ComGroupSignal_EngTimerGUIEvCmd_Timer1Hours_ISig_5_oCIOM_Cab_04S_oCabSubnet_7110de4e_Tx 401
#define ComConf_ComGroupSignal_EngTimerGUIEvCmd_Timer1Minutes_ISig_5_oCIOM_Cab_04S_oCabSubnet_e8caf3ea_Tx 402
#define ComConf_ComGroupSignal_EngTimerGUIEvCmd_Timer1Recur_ISig_5_oCIOM_Cab_04S_oCabSubnet_de7b00fe_Tx 403
#define ComConf_ComGroupSignal_EngTimerGUIEvCmd_Timer1StartDay_ISig_5_oCIOM_Cab_04S_oCabSubnet_3a003c8a_Tx 404
#define ComConf_ComGroupSignal_EngTimerGUIEvCmd_Timer2Hours_ISig_5_oCIOM_Cab_04S_oCabSubnet_3cf8de29_Tx 405
#define ComConf_ComGroupSignal_EngTimerGUIEvCmd_Timer2Minutes_ISig_5_oCIOM_Cab_04S_oCabSubnet_c2764362_Tx 406
#define ComConf_ComGroupSignal_EngTimerGUIEvCmd_Timer2Recur_ISig_5_oCIOM_Cab_04S_oCabSubnet_93930099_Tx 407
#define ComConf_ComGroupSignal_EngTimerGUIEvCmd_Timer2StartDay_ISig_5_oCIOM_Cab_04S_oCabSubnet_d9498b28_Tx 408
#define ComConf_ComGroupSignal_EngTimerGUIEvCmd_Timer3Hours_ISig_5_oCIOM_Cab_04S_oCabSubnet_b17023cb_Tx 409
#define ComConf_ComGroupSignal_EngTimerGUIEvCmd_Timer3Minutes_ISig_5_oCIOM_Cab_04S_oCabSubnet_6d32d125_Tx 410
#define ComConf_ComGroupSignal_EngTimerGUIEvCmd_Timer3Recur_ISig_5_oCIOM_Cab_04S_oCabSubnet_1e1bfd7b_Tx 411
#define ComConf_ComGroupSignal_EngTimerGUIEvCmd_Timer3StartDay_ISig_5_oCIOM_Cab_04S_oCabSubnet_315e1b89_Tx 412
#define ComConf_ComGroupSignal_FMS1_fms_Blockid_oFMS1_X_CIOMFMS_oFMSNet_db6e2be6_Tx 433
#define ComConf_ComGroupSignal_FMS1_fms_TellTaleStatus1_oFMS1_X_CIOMFMS_oFMSNet_a1c07919_Tx 434
#define ComConf_ComGroupSignal_FMS1_fms_TellTaleStatus2_oFMS1_X_CIOMFMS_oFMSNet_942dcf4a_Tx 435
#define ComConf_ComGroupSignal_FMS1_fms_TellTaleStatus3_oFMS1_X_CIOMFMS_oFMSNet_31a65f44_Tx 436
#define ComConf_ComGroupSignal_FMS1_fms_TellTaleStatus4_oFMS1_X_CIOMFMS_oFMSNet_fff6a3ec_Tx 437
#define ComConf_ComGroupSignal_FMS1_fms_TellTaleStatus5_oFMS1_X_CIOMFMS_oFMSNet_5a7d33e2_Tx 438
#define ComConf_ComGroupSignal_FMS1_fms_TellTaleStatus6_oFMS1_X_CIOMFMS_oFMSNet_6f9085b1_Tx 439
#define ComConf_ComGroupSignal_FMS1_fms_TellTaleStatus7_oFMS1_X_CIOMFMS_oFMSNet_ca1b15bf_Tx 440
#define ComConf_ComGroupSignal_FMS1_fms_TellTaleStatus8_oFMS1_X_CIOMFMS_oFMSNet_28407aa0_Tx 441
#define ComConf_ComGroupSignal_FMS1_fms_TellTaleStatus9_oFMS1_X_CIOMFMS_oFMSNet_8dcbeaae_Tx 442
#define ComConf_ComGroupSignal_FMS1_fms_TellTaleStatus10_oFMS1_X_CIOMFMS_oFMSNet_4fc4b9f7_Tx 443
#define ComConf_ComGroupSignal_FMS1_fms_TellTaleStatus11_oFMS1_X_CIOMFMS_oFMSNet_ea4f29f9_Tx 444
#define ComConf_ComGroupSignal_FMS1_fms_TellTaleStatus12_oFMS1_X_CIOMFMS_oFMSNet_dfa29faa_Tx 445
#define ComConf_ComGroupSignal_FMS1_fms_TellTaleStatus13_oFMS1_X_CIOMFMS_oFMSNet_7a290fa4_Tx 446
#define ComConf_ComGroupSignal_FMS1_fms_TellTaleStatus14_oFMS1_X_CIOMFMS_oFMSNet_b479f30c_Tx 447
#define ComConf_ComGroupSignal_FMS1_fms_TellTaleStatus15_oFMS1_X_CIOMFMS_oFMSNet_11f26302_Tx 448
#define ComConf_ComGroupSignal_GPSData_Altitude_ISig_5_oCIOM_Cab_34P_oCabSubnet_46fcdc81_Tx 508
#define ComConf_ComGroupSignal_GPSData_AntennaStat_ISig_5_oCIOM_Cab_34P_oCabSubnet_d8bbbf4b_Tx 509
#define ComConf_ComGroupSignal_GPSData_Direction_ISig_5_oCIOM_Cab_34P_oCabSubnet_00bfdee6_Tx 510
#define ComConf_ComGroupSignal_GPSData_HDOP_ISig_5_oCIOM_Cab_34P_oCabSubnet_3aff0fcd_Tx 511
#define ComConf_ComGroupSignal_GPSData_Latitude_ISig_5_oCIOM_Cab_34P_oCabSubnet_f54df821_Tx 512
#define ComConf_ComGroupSignal_GPSData_Longitude_ISig_5_oCIOM_Cab_34P_oCabSubnet_dde3718d_Tx 513
#define ComConf_ComGroupSignal_GPSData_Time_ISig_5_oCIOM_Cab_34P_oCabSubnet_df87a953_Tx 514
#define ComConf_ComGroupSignal_GPSData_VehSpeed_ISig_5_oCIOM_Cab_34P_oCabSubnet_83be3965_Tx 515
#define ComConf_ComGroupSignal_IntLghtModeInd_cmd_EventFlag_oCIOM_Cab_02P_oCabSubnet_9c5efbfd_Tx 528
#define ComConf_ComGroupSignal_IntLghtModeInd_cmd_IL_Mode_oCIOM_Cab_02P_oCabSubnet_738e33af_Tx 529
#define ComConf_ComGroupSignal_InteriorLightMode_rqst_EventFlag_oCIOM_BB2_05P_oBackbone2_1d016db0_Tx 531
#define ComConf_ComGroupSignal_InteriorLightMode_rqst_IL_Mode_oCIOM_BB2_05P_oBackbone2_07486700_Tx 532
#define ComConf_ComGroupSignal_LIN_AlmClkCurAlarm_stat_ID_oCIOMtoSlaves2_FR2_L1_oLIN00_19fc9ce3_Tx 548
#define ComConf_ComGroupSignal_LIN_AlmClkCurAlarm_stat_SetHr_oCIOMtoSlaves2_FR2_L1_oLIN00_88ecba00_Tx 549
#define ComConf_ComGroupSignal_LIN_AlmClkCurAlarm_stat_SetMin_oCIOMtoSlaves2_FR2_L1_oLIN00_ffefc0f0_Tx 550
#define ComConf_ComGroupSignal_LIN_AlmClkCurAlarm_stat_Stat_oCIOMtoSlaves2_FR2_L1_oLIN00_a5dbc118_Tx 551
#define ComConf_ComGroupSignal_LIN_AlmClkCurAlarm_stat_Type_oCIOMtoSlaves2_FR2_L1_oLIN00_ea57a2de_Tx 552
#define ComConf_ComGroupSignal_LIN_IntLghtModeInd_cmd_EventFlag_oCIOMtoSlaves2_FR1_L1_oLIN00_b8366a71_Tx 566
#define ComConf_ComGroupSignal_LIN_IntLghtModeInd_cmd_IL_Mode_oCIOMtoSlaves2_FR1_L1_oLIN00_dfc63d22_Tx 567
#define ComConf_ComGroupSignal_LevelRequest_FrontAxle_ISig_4_oCIOM_BB2_03P_oBackbone2_4acb87ef_Tx 586
#define ComConf_ComGroupSignal_LevelRequest_RearAxle_ISig_4_oCIOM_BB2_03P_oBackbone2_e294072f_Tx 587
#define ComConf_ComGroupSignal_LevelRequest_RollRequest_ISig_4_oCIOM_BB2_03P_oBackbone2_64a64a62_Tx 588
#define ComConf_ComGroupSignal_MediaSourcesListReq_ItemID_ISig_4_oCIOM_BB2_27S_oBackbone2_d9e3eeb1_Tx 611
#define ComConf_ComGroupSignal_MediaSourcesListReq_Items_ISig_4_oCIOM_BB2_27S_oBackbone2_a03eb667_Tx 612
#define ComConf_ComGroupSignal_MediaSourcesListReq_SInfo_ISig_4_oCIOM_BB2_27S_oBackbone2_5c90d042_Tx 613
#define ComConf_ComGroupSignal_MediaSourcesListRsp_ItemID_ISig_5_oCIOM_Cab_29S_oCabSubnet_904d7dea_Tx 614
#define ComConf_ComGroupSignal_MediaSourcesListRsp_Name_ISig_5_oCIOM_Cab_29S_oCabSubnet_2ac4d74a_Tx 615
#define ComConf_ComGroupSignal_MediaSourcesListRsp_PCI_ISig_5_oCIOM_Cab_29S_oCabSubnet_34251cfb_Tx 616
#define ComConf_ComGroupSignal_MediaSourcesListRsp_SInfo_ISig_5_oCIOM_Cab_29S_oCabSubnet_127ee904_Tx 617
#define ComConf_ComGroupSignal_MediaSourcesListRsp_SrcAttrib_ISig_5_oCIOM_Cab_29S_oCabSubnet_88851f32_Tx 618
#define ComConf_ComGroupSignal_PHTimer1_stat_Duration_ISig_13_oCIOMtoSlaves2_FR3_L1_oLIN00_d03cebf8_Tx 635
#define ComConf_ComGroupSignal_PHTimer1_stat_Hours_ISig_13_oCIOMtoSlaves2_FR3_L1_oLIN00_c3b88e4a_Tx 636
#define ComConf_ComGroupSignal_PHTimer1_stat_Minutes_ISig_13_oCIOMtoSlaves2_FR3_L1_oLIN00_e74640c6_Tx 637
#define ComConf_ComGroupSignal_PHTimer1_stat_Recurrence_ISig_13_oCIOMtoSlaves2_FR3_L1_oLIN00_14db7cfa_Tx 638
#define ComConf_ComGroupSignal_PHTimer1_stat_StartDay_ISig_13_oCIOMtoSlaves2_FR3_L1_oLIN00_a6871133_Tx 639
#define ComConf_ComGroupSignal_PHTimer1_stat_Status_ISig_13_oCIOMtoSlaves2_FR3_L1_oLIN00_606b5840_Tx 640
#define ComConf_ComGroupSignal_PHTimer1_stat_Temp_ISig_13_oCIOMtoSlaves2_FR3_L1_oLIN00_ad7a0656_Tx 641
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_PhTimer1_cmd_ISig_5_oCIOM_Cab_05S_oCabSubnet_15a5f8e4_Tx 642
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_PhTimer2_cmd_ISig_5_oCIOM_Cab_05S_oCabSubnet_4fc4c784_Tx 643
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_PhTimer3_cmd_ISig_5_oCIOM_Cab_05S_oCabSubnet_cf34d09b_Tx 644
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer1Duration_ISig_5_oCIOM_Cab_05S_oCabSubnet_5d2fad65_Tx 645
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer1Hours_ISig_5_oCIOM_Cab_05S_oCabSubnet_8475108d_Tx 646
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer1Minutes_ISig_5_oCIOM_Cab_05S_oCabSubnet_10ac6fd8_Tx 647
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer1Recur_ISig_5_oCIOM_Cab_05S_oCabSubnet_2b1ece3d_Tx 648
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer1StartDay_ISig_5_oCIOM_Cab_05S_oCabSubnet_b2b63365_Tx 649
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer1Temp_ISig_5_oCIOM_Cab_05S_oCabSubnet_76b89522_Tx 650
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer2Hours_ISig_5_oCIOM_Cab_05S_oCabSubnet_c99d10ea_Tx 651
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer2Minutes_ISig_5_oCIOM_Cab_05S_oCabSubnet_3a10df50_Tx 652
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer2Recur_ISig_5_oCIOM_Cab_05S_oCabSubnet_66f6ce5a_Tx 653
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer2StartDay_ISig_5_oCIOM_Cab_05S_oCabSubnet_51ff84c7_Tx 654
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer2Temp_ISig_5_oCIOM_Cab_05S_oCabSubnet_2cd9aa42_Tx 655
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer3Hours_ISig_5_oCIOM_Cab_05S_oCabSubnet_4415ed08_Tx 656
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer3Minutes_ISig_5_oCIOM_Cab_05S_oCabSubnet_95544d17_Tx 657
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer3Recur_ISig_5_oCIOM_Cab_05S_oCabSubnet_eb7e33b8_Tx 658
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer3StartDay_ISig_5_oCIOM_Cab_05S_oCabSubnet_b9e81466_Tx 659
#define ComConf_ComGroupSignal_PHTimerGUIEvCmd_Timer3Temp_ISig_5_oCIOM_Cab_05S_oCabSubnet_ac29bd5d_Tx 660
#define ComConf_ComGroupSignal_PHTimerRqstAck_CurrentOp_ISig_5_oCIOM_Cab_23P_oCabSubnet_55c2dac7_Tx 661
#define ComConf_ComGroupSignal_PHTimerRqstAck_DayOfWeekRq_ISig_5_oCIOM_Cab_23P_oCabSubnet_9c3abbf9_Tx 662
#define ComConf_ComGroupSignal_PHTimerRqstAck_Hours_ISig_5_oCIOM_Cab_23P_oCabSubnet_97a35d5a_Tx 663
#define ComConf_ComGroupSignal_PHTimerRqstAck_Minutes_ISig_5_oCIOM_Cab_23P_oCabSubnet_39960f31_Tx 664
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_PhTimer1_cmd_ISig_5_oCIOM_Cab_25S_oCabSubnet_2dad779e_Tx 665
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_PhTimer2_cmd_ISig_5_oCIOM_Cab_25S_oCabSubnet_77cc48fe_Tx 666
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_PhTimer3_cmd_ISig_5_oCIOM_Cab_25S_oCabSubnet_f73c5fe1_Tx 667
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer1Duration_ISig_5_oCIOM_Cab_25S_oCabSubnet_93367b6e_Tx 668
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer1Hours_ISig_5_oCIOM_Cab_25S_oCabSubnet_d50adfc9_Tx 669
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer1Minutes_ISig_5_oCIOM_Cab_25S_oCabSubnet_e9ac8a49_Tx 670
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer1Recur_ISig_5_oCIOM_Cab_25S_oCabSubnet_7a610179_Tx 671
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer1StartDay_ISig_5_oCIOM_Cab_25S_oCabSubnet_7cafe56e_Tx 672
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer1Temp_ISig_5_oCIOM_Cab_25S_oCabSubnet_56459af5_Tx 673
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer2Hours_ISig_5_oCIOM_Cab_25S_oCabSubnet_98e2dfae_Tx 674
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer2Minutes_ISig_5_oCIOM_Cab_25S_oCabSubnet_c3103ac1_Tx 675
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer2Recur_ISig_5_oCIOM_Cab_25S_oCabSubnet_3789011e_Tx 676
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer2StartDay_ISig_5_oCIOM_Cab_25S_oCabSubnet_9fe652cc_Tx 677
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer2Temp_ISig_5_oCIOM_Cab_25S_oCabSubnet_0c24a595_Tx 678
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer3Hours_ISig_5_oCIOM_Cab_25S_oCabSubnet_156a224c_Tx 679
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer3Minutes_ISig_5_oCIOM_Cab_25S_oCabSubnet_6c54a886_Tx 680
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer3Recur_ISig_5_oCIOM_Cab_25S_oCabSubnet_ba01fcfc_Tx 681
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer3StartDay_ISig_5_oCIOM_Cab_25S_oCabSubnet_77f1c26d_Tx 682
#define ComConf_ComGroupSignal_PHTimerTGWEvCmd_Timer3Temp_ISig_5_oCIOM_Cab_25S_oCabSubnet_8cd4b28a_Tx 683
#define ComConf_ComGroupSignal_PHTimer_rqst_DayOfWeekRq_ISig_4_oCIOM_BB2_20S_oBackbone2_3cf08e86_Tx 684
#define ComConf_ComGroupSignal_PHTimer_rqst_Hours_ISig_4_oCIOM_BB2_20S_oBackbone2_2c0be9d9_Tx 685
#define ComConf_ComGroupSignal_PHTimer_rqst_Minutes_ISig_4_oCIOM_BB2_20S_oBackbone2_86607c90_Tx 686
#define ComConf_ComGroupSignal_PHTimer_rqst_SetAlarmOper_ISig_4_oCIOM_BB2_20S_oBackbone2_833735a1_Tx 687
#define ComConf_ComGroupSignal_ParkClimTimerStat_Dur_ISig_4_oCIOM_BB2_31S_oBackbone2_669f9e8f_Tx 692
#define ComConf_ComGroupSignal_ParkClimTimerStat_Fri_ISig_4_oCIOM_BB2_31S_oBackbone2_336433a2_Tx 693
#define ComConf_ComGroupSignal_ParkClimTimerStat_Hrs_ISig_4_oCIOM_BB2_31S_oBackbone2_ed3d4b59_Tx 694
#define ComConf_ComGroupSignal_ParkClimTimerStat_MinRes_ISig_4_oCIOM_BB2_31S_oBackbone2_d7c2dcf6_Tx 695
#define ComConf_ComGroupSignal_ParkClimTimerStat_Min_ISig_4_oCIOM_BB2_31S_oBackbone2_457c3b6f_Tx 696
#define ComConf_ComGroupSignal_ParkClimTimerStat_Mon_ISig_4_oCIOM_BB2_31S_oBackbone2_9e71dddb_Tx 697
#define ComConf_ComGroupSignal_ParkClimTimerStat_Rec_ISig_4_oCIOM_BB2_31S_oBackbone2_2f3d2a55_Tx 698
#define ComConf_ComGroupSignal_ParkClimTimerStat_Sat_ISig_4_oCIOM_BB2_31S_oBackbone2_2bbc882e_Tx 699
#define ComConf_ComGroupSignal_ParkClimTimerStat_Status_ISig_4_oCIOM_BB2_31S_oBackbone2_447d1ca1_Tx 700
#define ComConf_ComGroupSignal_ParkClimTimerStat_Sun_ISig_4_oCIOM_BB2_31S_oBackbone2_44c876d8_Tx 701
#define ComConf_ComGroupSignal_ParkClimTimerStat_Temp_ISig_4_oCIOM_BB2_31S_oBackbone2_329dcac2_Tx 702
#define ComConf_ComGroupSignal_ParkClimTimerStat_Thu_ISig_4_oCIOM_BB2_31S_oBackbone2_c5e6aba1_Tx 703
#define ComConf_ComGroupSignal_ParkClimTimerStat_TimerNr_ISig_4_oCIOM_BB2_31S_oBackbone2_0cf7aeab_Tx 704
#define ComConf_ComGroupSignal_ParkClimTimerStat_TotalNoTimers_ISig_4_oCIOM_BB2_31S_oBackbone2_f449a8eb_Tx 705
#define ComConf_ComGroupSignal_ParkClimTimerStat_Tue_ISig_4_oCIOM_BB2_31S_oBackbone2_70732baf_Tx 706
#define ComConf_ComGroupSignal_ParkClimTimerStat_Type_ISig_4_oCIOM_BB2_31S_oBackbone2_67152f1f_Tx 707
#define ComConf_ComGroupSignal_ParkClimTimerStat_Wed_ISig_4_oCIOM_BB2_31S_oBackbone2_e8e49ce6_Tx 708
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_SInfo_ISig_5_oCIOM_Cab_27P_oCabSubnet_92d60f4c_Tx 757
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source00_ISig_5_oCIOM_Cab_27P_oCabSubnet_a7ae9d38_Tx 758
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source01_ISig_5_oCIOM_Cab_27P_oCabSubnet_915c0dcb_Tx 759
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source02_ISig_5_oCIOM_Cab_27P_oCabSubnet_ca4bbcde_Tx 760
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source03_ISig_5_oCIOM_Cab_27P_oCabSubnet_fcb92c2d_Tx 761
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source04_ISig_5_oCIOM_Cab_27P_oCabSubnet_7c64def4_Tx 762
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source05_ISig_5_oCIOM_Cab_27P_oCabSubnet_4a964e07_Tx 763
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source06_ISig_5_oCIOM_Cab_27P_oCabSubnet_1181ff12_Tx 764
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source07_ISig_5_oCIOM_Cab_27P_oCabSubnet_27736fe1_Tx 765
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source08_ISig_5_oCIOM_Cab_27P_oCabSubnet_cb4b1ce1_Tx 766
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source09_ISig_5_oCIOM_Cab_27P_oCabSubnet_fdb98c12_Tx 767
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source10_ISig_5_oCIOM_Cab_27P_oCabSubnet_832ccc0e_Tx 768
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source11_ISig_5_oCIOM_Cab_27P_oCabSubnet_b5de5cfd_Tx 769
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source12_ISig_5_oCIOM_Cab_27P_oCabSubnet_eec9ede8_Tx 770
#define ComConf_ComGroupSignal_SEMMediaSourceAvail_Source13_ISig_5_oCIOM_Cab_27P_oCabSubnet_d83b7d1b_Tx 771
#define ComConf_ComGroupSignal_Trailer1CalAxleLoad_AxleId_ISig_5_oCIOM_Cab_14P_oCabSubnet_ac965ea9_Tx 828
#define ComConf_ComGroupSignal_Trailer1CalAxleLoad_AxleLoad_ISig_5_oCIOM_Cab_14P_oCabSubnet_84724af5_Tx 829
#define ComConf_ComGroupSignal_Trailer1LiftAxles_LiftAxle1Id_ISig_5_oCIOM_Cab_24P_oCabSubnet_89bbf44a_Tx 832
#define ComConf_ComGroupSignal_Trailer1LiftAxles_LiftAxle1Pos_ISig_5_oCIOM_Cab_24P_oCabSubnet_41407941_Tx 833
#define ComConf_ComGroupSignal_Trailer1LiftAxles_LiftAxle2Id_ISig_5_oCIOM_Cab_24P_oCabSubnet_0268ca53_Tx 834
#define ComConf_ComGroupSignal_Trailer1LiftAxles_LiftAxle2Pos_ISig_5_oCIOM_Cab_24P_oCabSubnet_25a002bf_Tx 835
#define ComConf_ComGroupSignal_Trailer2CalAxleLoad_AxleId_ISig_5_oCIOM_Cab_15P_oCabSubnet_f43295d8_Tx 839
#define ComConf_ComGroupSignal_Trailer2CalAxleLoad_AxleLoad_ISig_5_oCIOM_Cab_15P_oCabSubnet_da8d43b3_Tx 840
#define ComConf_ComGroupSignal_Trailer2LiftAxles_LiftAxle1Id_ISig_5_oCIOM_Cab_24P_oCabSubnet_8b550e90_Tx 843
#define ComConf_ComGroupSignal_Trailer2LiftAxles_LiftAxle1Pos_ISig_5_oCIOM_Cab_24P_oCabSubnet_2744ac71_Tx 844
#define ComConf_ComGroupSignal_Trailer2LiftAxles_LiftAxle2Id_ISig_5_oCIOM_Cab_24P_oCabSubnet_00863089_Tx 845
#define ComConf_ComGroupSignal_Trailer2LiftAxles_LiftAxle2Pos_ISig_5_oCIOM_Cab_24P_oCabSubnet_43a4d78f_Tx 846
#define ComConf_ComGroupSignal_Trailer3CalAxleLoad_AxleId_ISig_5_oCIOM_Cab_16P_oCabSubnet_83c60a85_Tx 850
#define ComConf_ComGroupSignal_Trailer3CalAxleLoad_AxleLoad_ISig_5_oCIOM_Cab_16P_oCabSubnet_199f9f3c_Tx 851
#define ComConf_ComGroupSignal_Trailer3LiftAxles_LiftAxle1Id_ISig_5_oCIOM_Cab_24P_oCabSubnet_8af0a726_Tx 854
#define ComConf_ComGroupSignal_Trailer3LiftAxles_LiftAxle1Pos_ISig_5_oCIOM_Cab_24P_oCabSubnet_05471f61_Tx 855
#define ComConf_ComGroupSignal_Trailer3LiftAxles_LiftAxle2Id_ISig_5_oCIOM_Cab_24P_oCabSubnet_0123993f_Tx 856
#define ComConf_ComGroupSignal_Trailer3LiftAxles_LiftAxle2Pos_ISig_5_oCIOM_Cab_24P_oCabSubnet_61a7649f_Tx 857
#define ComConf_ComGroupSignal_Trailer4CalAxleLoad_AxleId_ISig_5_oCIOM_Cab_17P_oCabSubnet_457b033a_Tx 861
#define ComConf_ComGroupSignal_Trailer4CalAxleLoad_AxleLoad_ISig_5_oCIOM_Cab_17P_oCabSubnet_6773513f_Tx 862
#define ComConf_ComGroupSignal_Trailer4LiftAxles_LiftAxle1Id_ISig_5_oCIOM_Cab_24P_oCabSubnet_8e88fb24_Tx 865
#define ComConf_ComGroupSignal_Trailer4LiftAxles_LiftAxle1Pos_ISig_5_oCIOM_Cab_24P_oCabSubnet_eb4d0611_Tx 866
#define ComConf_ComGroupSignal_Trailer4LiftAxles_LiftAxle2Id_ISig_5_oCIOM_Cab_24P_oCabSubnet_055bc53d_Tx 867
#define ComConf_ComGroupSignal_Trailer4LiftAxles_LiftAxle2Pos_ISig_5_oCIOM_Cab_24P_oCabSubnet_8fad7def_Tx 868
#define ComConf_ComGroupSignal_Trailer5CalAxleLoad_AxleId_ISig_5_oCIOM_Cab_18P_oCabSubnet_a835259c_Tx 872
#define ComConf_ComGroupSignal_Trailer5CalAxleLoad_AxleLoad_ISig_5_oCIOM_Cab_18P_oCabSubnet_3edb344b_Tx 873
#define ComConf_ComGroupSignal_Trailer5LiftAxles_LiftAxle1Id_ISig_5_oCIOM_Cab_24P_oCabSubnet_8f2d5292_Tx 876
#define ComConf_ComGroupSignal_Trailer5LiftAxles_LiftAxle1Pos_ISig_5_oCIOM_Cab_24P_oCabSubnet_c94eb501_Tx 877
#define ComConf_ComGroupSignal_Trailer5LiftAxles_LiftAxle2Id_ISig_5_oCIOM_Cab_24P_oCabSubnet_04fe6c8b_Tx 878
#define ComConf_ComGroupSignal_Trailer5LiftAxles_LiftAxle2Pos_ISig_5_oCIOM_Cab_24P_oCabSubnet_adaeceff_Tx 879
#define ComConf_ComSignal_ABSInhibitRqstDenied_oCIOM_BB2_25P_oBackbone2_b939a8e2_Tx 0
#define ComConf_ComSignal_ABSInhibitionRequest_oCIOM_BB1_01P_oBackbone1J1939_cfd93cbf_Tx 1
#define ComConf_ComSignal_ABSModeRequest_oCIOM_BB1_01P_oBackbone1J1939_6786e101_Tx 2
#define ComConf_ComSignal_ABS_Indication_oMastertoTCP_oLIN02_826b948e_Tx 3
#define ComConf_ComSignal_ACCoolingFanSpeedRequest_oCIOM_BB2_11P_oBackbone2_6d1b1465_Tx 4
#define ComConf_ComSignal_ACMode_Selection_ISig_5_oCIOM_Cab_01P_oCabSubnet_0ecaff39_Tx 5
#define ComConf_ComSignal_AC_ButtonStatus_ISig_4_oCIOM_BB2_05P_oBackbone2_0fd14b7d_Tx 6
#define ComConf_ComSignal_AC_CompressorClutchCmd_ISig_4_oCIOM_BB2_04P_oBackbone2_7867c9c8_Tx 7
#define ComConf_ComSignal_ACmode_IndicationCmd_ISig_4_oCIOM_BB2_04P_oBackbone2_cedfbbd7_Tx 8
#define ComConf_ComSignal_ACmode_Status_ISig_4_oCIOM_BB2_30P_oBackbone2_01470cd0_Tx 9
#define ComConf_ComSignal_AQSMode_Selection_ISig_5_oCIOM_Cab_01P_oCabSubnet_c69738e6_Tx 10
#define ComConf_ComSignal_AQSmode_Status_ISig_4_oCIOM_BB2_30P_oBackbone2_2ee85fc2_Tx 11
#define ComConf_ComSignal_ATCFrontWheelDriveRequest_oCIOM_BB2_10P_oBackbone2_4d5720b1_Tx 12
#define ComConf_ComSignal_ATC_Indication_oMastertoTCP_oLIN02_f0d69bff_Tx 13
#define ComConf_ComSignal_AcCoolantPumpEngagementRequest_ISig_4_oCIOM_BB2_07P_oBackbone2_9f2b8f5e_Tx 14
#define ComConf_ComSignal_AcceleratorPedalPosition1_fms_oEEC2_X_CIOMFMS_oFMSNet_02c412c3_Tx 15
#define ComConf_ComSignal_ActualDrvlnRetdrPctTrq_fms_oERC1_x_RECUFMS_oFMSNet_34e828f4_Tx 16
#define ComConf_ComSignal_ActualDrvlnRetdrPercentTorque_ISig_5_oCIOM_Cab_31P_oCabSubnet_1255c737_Tx 17
#define ComConf_ComSignal_ActualEngRetdrPercentTrq_fms_oERC1_x_EMSRetFMS_oFMSNet_8a6dc98f_Tx 18
#define ComConf_ComSignal_ActualEnginePercentTorque_fms_oEEC1_X_CIOMFMS_oFMSNet_ca2935e8_Tx 19
#define ComConf_ComSignal_ActualEngineRetarderPercentTrq_ISig_5_oCIOM_Cab_31P_oCabSubnet_fd226a60_Tx 20
#define ComConf_ComSignal_AdjustFrontBeamInclination_oCIOM_BB2_01P_oBackbone2_5542f579_Tx 21
#define ComConf_ComSignal_AdjustRequestForIdle_oCIOM_BB2_10P_oBackbone2_31851a4f_Tx 22
#define ComConf_ComSignal_AirBlowerSpeed_FreeWheelStatus_ISig_4_oCIOM_BB2_05P_oBackbone2_828cd888_Tx 23
#define ComConf_ComSignal_AirFlowSelectionDownBtn_stat_ISig_4_oCIOM_BB2_05P_oBackbone2_579051e3_Tx 24
#define ComConf_ComSignal_AirFlowSelectionFrontBtn_stat_ISig_4_oCIOM_BB2_05P_oBackbone2_134197d3_Tx 25
#define ComConf_ComSignal_AirFlowSelectionUpBtn_stat_ISig_4_oCIOM_BB2_05P_oBackbone2_3e433d12_Tx 26
#define ComConf_ComSignal_AlarmStatus_stat_ISig_4_oCIOM_BB2_06P_oBackbone2_fa7d99af_Tx 40
#define ComConf_ComSignal_AlarmTriggeringCause_stat_ISig_4_oCIOM_BB2_06P_oBackbone2_f9cb6b32_Tx 41
#define ComConf_ComSignal_AltLoadDistribution_rqst_ISig_4_oCIOM_BB2_01P_oBackbone2_a87b84f8_Tx 56
#define ComConf_ComSignal_AmbientAirTemperature_ISig_5_oCIOM_Cab_01P_oCabSubnet_ed8bd980_Tx 57
#define ComConf_ComSignal_AmbientAirTemperature_ISig_10_oCIOM_Sec_03P_oSecuritySubnet_06e55c0b_Tx 58
#define ComConf_ComSignal_AmbientAirTemperature_fms_oAMB_X_CIOMFMS_oFMSNet_4984becf_Tx 59
#define ComConf_ComSignal_AnmSig_CIOM_Backbone2_oAnmMsg_CIOM_Backbone2_oBackbone2_8a1cbf56_Tx 60
#define ComConf_ComSignal_AnmSig_CIOM_CabSubnet_oAnmMsg_CIOM_CabSubnet_oCabSubnet_5a34740d_Tx 61
#define ComConf_ComSignal_AnmSig_CIOM_SecuritySubnet_oAnmMsg_CIOM_SecuritySubnet_oSecuritySubnet_c3c93d33_Tx 62
#define ComConf_ComSignal_AntiLockBrakingActive_ISig_5_oCIOM_Cab_31P_oCabSubnet_6d0d6f23_Tx 63
#define ComConf_ComSignal_ApproachLight_HMI_rqst_oCIOM_BB2_05P_oBackbone2_2bb44a94_Tx 64
#define ComConf_ComSignal_AudioMuteStat_ISig_5_oCIOM_Cab_23P_oCabSubnet_71dcc197_Tx 65
#define ComConf_ComSignal_AudioSourceBtStreamAvailable_ISig_5_oCIOM_Cab_22P_oCabSubnet_c3d6d03e_Tx 66
#define ComConf_ComSignal_AudioSourceCdAvailable_ISig_5_oCIOM_Cab_22P_oCabSubnet_3b4dd093_Tx 67
#define ComConf_ComSignal_AudioSourceIpodAvailable_ISig_5_oCIOM_Cab_22P_oCabSubnet_67285111_Tx 68
#define ComConf_ComSignal_AudioSourceStat_ISig_5_oCIOM_Cab_27P_oCabSubnet_b56176bb_Tx 69
#define ComConf_ComSignal_AudioSourceStatus2_ISig_5_oCIOM_Cab_22P_oCabSubnet_683dd40e_Tx 70
#define ComConf_ComSignal_AudioSourceStatus_ISig_5_oCIOM_Cab_09P_oCabSubnet_29ba6ba6_Tx 71
#define ComConf_ComSignal_AudioSourceUsbAvailable_ISig_5_oCIOM_Cab_22P_oCabSubnet_8817e2cb_Tx 72
#define ComConf_ComSignal_AudioSystemStatus_ISig_5_oCIOM_Cab_03P_oCabSubnet_d1d20e95_Tx 73
#define ComConf_ComSignal_AudioVolumeIndicationCmd_ISig_5_oCIOM_Cab_06P_oCabSubnet_39d8b310_Tx 74
#define ComConf_ComSignal_AutRrAxleDiffLockActvnDrvrReq_ISig_3_oCIOM_BB1_01P_oBackbone1J1939_54c4ef77_Tx 75
#define ComConf_ComSignal_AutoBlowerLevel_Selection_ISig_5_oCIOM_Cab_01P_oCabSubnet_2523a2ed_Tx 76
#define ComConf_ComSignal_AutoBlowerLevel_Status_ISig_4_oCIOM_BB2_30P_oBackbone2_63cbe52b_Tx 77
#define ComConf_ComSignal_AutoDefogmode_Selection_ISig_5_oCIOM_Cab_01P_oCabSubnet_1898240a_Tx 78
#define ComConf_ComSignal_AutoDefogmode_Status_ISig_4_oCIOM_BB2_30P_oBackbone2_e55ab176_Tx 79
#define ComConf_ComSignal_AutoFrontWheelDriveDrvReq_oCIOM_BB2_25P_oBackbone2_0ccb75ca_Tx 80
#define ComConf_ComSignal_AutoRelock_rqst_oCIOM_Sec_04P_oSecuritySubnet_95653a52_Tx 81
#define ComConf_ComSignal_Auto_ButtonStatus_ISig_4_oCIOM_BB2_05P_oBackbone2_10c867e1_Tx 82
#define ComConf_ComSignal_AuxSwitchBbLoad1_Request_oCIOM_BB2_04P_oBackbone2_cd327f5d_Tx 83
#define ComConf_ComSignal_AuxSwitchBbLoad1_Status_ISig_5_oCIOM_Cab_06P_oCabSubnet_26c70041_Tx 84
#define ComConf_ComSignal_AuxSwitchBbLoad2_Request_oCIOM_BB2_04P_oBackbone2_a0b48c07_Tx 85
#define ComConf_ComSignal_AuxSwitchBbLoad2_Status_ISig_5_oCIOM_Cab_06P_oCabSubnet_0c7bb0c9_Tx 86
#define ComConf_ComSignal_AuxSwitchBbLoad3_Request_oCIOM_BB2_04P_oBackbone2_8436dd31_Tx 87
#define ComConf_ComSignal_AuxSwitchBbLoad3_Status_ISig_5_oCIOM_Cab_06P_oCabSubnet_a33f228e_Tx 88
#define ComConf_ComSignal_AuxSwitchBbLoad4_Request_oCIOM_BB2_04P_oBackbone2_7bb96ab3_Tx 89
#define ComConf_ComSignal_AuxSwitchBbLoad4_Status_ISig_5_oCIOM_Cab_06P_oCabSubnet_5902d1d9_Tx 90
#define ComConf_ComSignal_AuxSwitchBbLoad5_Request_oCIOM_BB2_04P_oBackbone2_5f3b3b85_Tx 91
#define ComConf_ComSignal_AuxSwitchBbLoad5_Status_ISig_5_oCIOM_Cab_06P_oCabSubnet_f646439e_Tx 92
#define ComConf_ComSignal_AuxSwitchBbLoad6_Request_oCIOM_BB2_04P_oBackbone2_32bdc8df_Tx 93
#define ComConf_ComSignal_AuxSwitchBbLoad6_Status_ISig_5_oCIOM_Cab_06P_oCabSubnet_dcfaf316_Tx 94
#define ComConf_ComSignal_AuxiliaryHorn_cmd_ISig_4_oCIOM_BB2_02P_oBackbone2_6efb2d34_Tx 95
#define ComConf_ComSignal_BBContainerUnlockRequest_oCIOM_BB2_04P_oBackbone2_be44ebab_Tx 96
#define ComConf_ComSignal_BBCraneRequest_oCIOM_BB2_04P_oBackbone2_2506b603_Tx 97
#define ComConf_ComSignal_BBSlidable5thWheelRequest_oCIOM_BB2_04P_oBackbone2_e7a6bb38_Tx 98
#define ComConf_ComSignal_BBTailLiftRequest_oCIOM_BB2_04P_oBackbone2_f13a14eb_Tx 99
#define ComConf_ComSignal_BackLightDimming_Status_oCIOM_BB2_02P_oBackbone2_f449f3b8_Tx 100
#define ComConf_ComSignal_BackToDriveReq_ISig_4_oCIOM_BB2_03P_oBackbone2_eb59c4eb_Tx 101
#define ComConf_ComSignal_BacklightCmd_ISig_5_oCIOM_Cab_02P_oCabSubnet_0cab0f5d_Tx 102
#define ComConf_ComSignal_BacklightCmd_ISig_10_oCIOM_Sec_01P_oSecuritySubnet_00602180_Tx 103
#define ComConf_ComSignal_BacklightCmd_ISig_13_oBacklight_FuncInd_L1_oLIN00_e8d0b8c1_Tx 104
#define ComConf_ComSignal_BacklightCmd_ISig_14_oBacklight_FuncInd_L2_oLIN01_a47a268c_Tx 105
#define ComConf_ComSignal_BacklightCmd_ISig_15_oBacklight_FuncInd_L3_oLIN02_cdb994a0_Tx 106
#define ComConf_ComSignal_BacklightCmd_ISig_16_oBacklight_FuncInd_L4_oLIN03_f4da8837_Tx 107
#define ComConf_ComSignal_BacklightCmd_ISig_17_oBacklight_FuncInd_L5_oLIN04_9a74fe02_Tx 108
#define ComConf_ComSignal_BacklightLevelHighRes2_ISig_30_oCL_X_CIOMFMS_oFMSNet_b038fac4_Tx 109
#define ComConf_ComSignal_BatterySOCAlertRawData_rqst_ISig_5_oCIOM_Cab_08P_oCabSubnet_a017beb6_Tx 110
#define ComConf_ComSignal_BatterySOCAlert_rqst_ISig_5_oCIOM_Cab_26P_oCabSubnet_890114d9_Tx 111
#define ComConf_ComSignal_BlackOutConvoyModeSwitchStatus_oCIOM_BB2_05P_oBackbone2_8dbf613e_Tx 112
#define ComConf_ComSignal_BlackPanelMode_ButtonStatus_oCIOM_BB2_02P_oBackbone2_0df7bba5_Tx 113
#define ComConf_ComSignal_BodyOrCabWorkingLightFdbk_stat_ISig_5_oCIOM_Cab_09P_oCabSubnet_678d89ed_Tx 114
#define ComConf_ComSignal_BodyOrCabWorkingLight_rqst_oCIOM_BB2_04P_oBackbone2_f33eb9e7_Tx 115
#define ComConf_ComSignal_BrakeBlendingButtonStatus_oCIOM_BB2_02P_oBackbone2_750dda1c_Tx 116
#define ComConf_ComSignal_BrakePedalPosition_ISig_5_oCIOM_Cab_33P_oCabSubnet_1191c520_Tx 117
#define ComConf_ComSignal_BrakeSwitch_fms_oCCVS_X_CIOMFMS_oFMSNet_1175103e_Tx 118
#define ComConf_ComSignal_BunkB1ParkHeaterBtn_stat_oCIOM_Cab_03P_oCabSubnet_0a621894_Tx 119
#define ComConf_ComSignal_BunkB1ParkHeaterTempSw_stat_oCIOM_Cab_06P_oCabSubnet_ba22f52f_Tx 120
#define ComConf_ComSignal_BunkBParkHeater_ButtonStatus_oCIOM_Cab_03P_oCabSubnet_256b1fd7_Tx 121
#define ComConf_ComSignal_BunkBTempDec_ButtonStatus_oCIOM_Cab_03P_oCabSubnet_179b26a4_Tx 122
#define ComConf_ComSignal_BunkBTempInc_ButtonStatus_oCIOM_Cab_03P_oCabSubnet_94875578_Tx 123
#define ComConf_ComSignal_BunkBacklightCmd_ISig_5_oCIOM_Cab_06P_oCabSubnet_6ccc0708_Tx 124
#define ComConf_ComSignal_BunkBacklightCmd_ISig_13_oCIOMtoSlaves2_FR1_L1_oLIN00_438b1a35_Tx 125
#define ComConf_ComSignal_BunkH1AudioSrcSem_rqst_ISig_4_oCIOM_BB2_03P_oBackbone2_ef8fbf9a_Tx 126
#define ComConf_ComSignal_BunkH1PowerWinCloseDSBtn_stat_ISig_10_oCIOM_Sec_01P_oSecuritySubnet_e4aa2e42_Tx 127
#define ComConf_ComSignal_BunkH1PowerWinClosePSBtn_stat_ISig_10_oCIOM_Sec_01P_oSecuritySubnet_7f915c70_Tx 128
#define ComConf_ComSignal_BunkH1PowerWinOpenDSBtn_stat_ISig_10_oCIOM_Sec_01P_oSecuritySubnet_20428fff_Tx 129
#define ComConf_ComSignal_BunkH1PowerWinOpenPSBtn_stat_ISig_10_oCIOM_Sec_01P_oSecuritySubnet_bb79fdcd_Tx 130
#define ComConf_ComSignal_BunkH2OnOFF_ButtonStatus_oCIOM_Cab_02P_oCabSubnet_f236b6a2_Tx 131
#define ComConf_ComSignal_BunkH2ParkHeater_ButtonStatus_oCIOM_Cab_03P_oCabSubnet_b83998c9_Tx 137
#define ComConf_ComSignal_BunkH2PowerWinCloseDSBtn_stat_oCIOM_Sec_01P_oSecuritySubnet_afb80ffd_Tx 138
#define ComConf_ComSignal_BunkH2PowerWinClosePSBtn_stat_oCIOM_Sec_01P_oSecuritySubnet_8bde4fdc_Tx 139
#define ComConf_ComSignal_BunkH2PowerWinOpenDSBtn_stat_oCIOM_Sec_01P_oSecuritySubnet_ec23e2cc_Tx 140
#define ComConf_ComSignal_BunkH2PowerWinOpenPSBtn_stat_oCIOM_Sec_01P_oSecuritySubnet_c845a2ed_Tx 141
#define ComConf_ComSignal_BunkH2TempDec_ButtonStatus_oCIOM_Cab_03P_oCabSubnet_7e9f316c_Tx 142
#define ComConf_ComSignal_BunkH2TempInc_ButtonStatus_oCIOM_Cab_06P_oCabSubnet_e0acf1a3_Tx 143
#define ComConf_ComSignal_CCActive_fms_oCCVS_X_CIOMFMS_oFMSNet_b0dbfbea_Tx 144
#define ComConf_ComSignal_CCStates_ISig_5_oCIOM_Cab_26P_oCabSubnet_10409791_Tx 145
#define ComConf_ComSignal_CM_Status_ISig_5_oCIOM_Cab_32P_oCabSubnet_bec73917_Tx 146
#define ComConf_ComSignal_CabBeaconLightFeedback_Status_ISig_5_oCIOM_Cab_09P_oCabSubnet_6507c8d0_Tx 147
#define ComConf_ComSignal_CabBeaconLight_rqst_oCIOM_BB2_04P_oBackbone2_7af1061d_Tx 148
#define ComConf_ComSignal_CabExtraSideWorkingLight_rqst_oCIOM_BB2_04P_oBackbone2_96ac5397_Tx 149
#define ComConf_ComSignal_CabExtraSideWrknLightFdbk_stat_ISig_5_oCIOM_Cab_09P_oCabSubnet_eb3a448b_Tx 150
#define ComConf_ComSignal_CabFrontSpot_rqst_oCIOM_BB2_04P_oBackbone2_e7072579_Tx 151
#define ComConf_ComSignal_CabInteriorTempVentilated_Stat_ISig_4_oCIOM_BB2_05P_oBackbone2_8e69a5b3_Tx 152
#define ComConf_ComSignal_CabPlowLight_rqst_oCIOM_BB2_04P_oBackbone2_16113254_Tx 153
#define ComConf_ComSignal_CabRoofSignOrVegaLight_rqst_oCIOM_BB2_04P_oBackbone2_d113173c_Tx 154
#define ComConf_ComSignal_CabRoofSpot_rqst_oCIOM_BB2_04P_oBackbone2_5ebb684b_Tx 155
#define ComConf_ComSignal_CabTilt_rqst_oCIOM_BB2_11P_oBackbone2_808ccba3_Tx 156
#define ComConf_ComSignal_CabTrailerBodyLighting_rqst_oCIOM_BB2_04P_oBackbone2_4b9066db_Tx 157
#define ComConf_ComSignal_CabWorkingLightChassis_rqst_oCIOM_BB2_04P_oBackbone2_4a9fb568_Tx 158
#define ComConf_ComSignal_CabWrknLightChassisFdbk_stat_ISig_5_oCIOM_Cab_09P_oCabSubnet_20c66f81_Tx 159
#define ComConf_ComSignal_CatalystTankLevel_fms_oAT1T1I1_X_CIOMFMS_oFMSNet_9357008c_Tx 160
#define ComConf_ComSignal_CityHorn_cmd_ISig_4_oCIOM_BB2_02P_oBackbone2_60314286_Tx 161
#define ComConf_ComSignal_ClutchSwitch_fms_oCCVS_X_CIOMFMS_oFMSNet_19c22372_Tx 162
#define ComConf_ComSignal_CollSituationHMICtrlRequestVM_oCIOM_BB2_07P_oBackbone2_132d106d_Tx 163
#define ComConf_ComSignal_ConstructionSwitch_stat_oCIOM_BB2_10P_oBackbone2_4634ea4a_Tx 164
#define ComConf_ComSignal_CoolantPumpEngagementStatus_ISig_5_oCIOM_Cab_23P_oCabSubnet_36bc97d5_Tx 165
#define ComConf_ComSignal_DASActivation_rqst_oCIOM_BB2_10P_oBackbone2_9dc1a4a9_Tx 166
#define ComConf_ComSignal_DRL_ButtonStatus_oCIOM_BB2_04P_oBackbone2_3b7f565a_Tx 167
#define ComConf_ComSignal_DSWindowPosition_ISig_5_oCIOM_Cab_06P_oCabSubnet_8d38ca92_Tx 168
#define ComConf_ComSignal_DayLocal_ISig_5_oCIOM_Cab_08P_oCabSubnet_e45411dc_Tx 169
#define ComConf_ComSignal_DayOfWeek_stat_ISig_5_oCIOM_Cab_06P_oCabSubnet_81cd0451_Tx 170
#define ComConf_ComSignal_DayOfWeek_stat_ISig_13_oCIOMtoSlaves2_FR2_L1_oLIN00_17cd99f6_Tx 171
#define ComConf_ComSignal_DayUTC_ISig_5_oCIOM_Cab_07P_oCabSubnet_e907dab4_Tx 172
#define ComConf_ComSignal_DayUTC_ISig_10_oCIOM_Sec_02P_oSecuritySubnet_0ca67fcd_Tx 173
#define ComConf_ComSignal_Debug_PVT_Fob_Found_oDebug15_SCIM_BB2_oBackbone2_9776daad_Tx 174
#define ComConf_ComSignal_Debug_PVT_Fob_ID_oDebug12_SCIM_BB2_oBackbone2_53d74fc4_Tx 175
#define ComConf_ComSignal_Debug_PVT_Fob_RF_RollingCounter_oDebug13_SCIM_BB2_oBackbone2_141ae462_Tx 176
#define ComConf_ComSignal_Debug_PVT_PEPS_A_AntP1_oDebug19_SCIM_BB2_oBackbone2_a24e2a8b_Tx 177
#define ComConf_ComSignal_Debug_PVT_PEPS_A_AntP2_oDebug19_SCIM_BB2_oBackbone2_e6ef0f93_Tx 178
#define ComConf_ComSignal_Debug_PVT_PEPS_A_AntP3_oDebug19_SCIM_BB2_oBackbone2_da8fec9b_Tx 179
#define ComConf_ComSignal_Debug_PVT_PEPS_A_AntP4_oDebug19_SCIM_BB2_oBackbone2_6fad45a3_Tx 180
#define ComConf_ComSignal_Debug_PVT_PEPS_A_AntPi_oDebug19_SCIM_BB2_oBackbone2_f215fec1_Tx 181
#define ComConf_ComSignal_Debug_PVT_PEPS_AntCtrl_stat_oDebug15_SCIM_BB2_oBackbone2_2877d1d6_Tx 182
#define ComConf_ComSignal_Debug_PVT_PEPS_AntP1_X_oDebug22_SCIM_BB2_oBackbone2_3e4f02fb_Tx 183
#define ComConf_ComSignal_Debug_PVT_PEPS_AntP1_Y_oDebug22_SCIM_BB2_oBackbone2_022fe1f3_Tx 184
#define ComConf_ComSignal_Debug_PVT_PEPS_AntPi_X_oDebug22_SCIM_BB2_oBackbone2_b567e3e2_Tx 185
#define ComConf_ComSignal_Debug_PVT_PEPS_AntPi_Y_oDebug22_SCIM_BB2_oBackbone2_890700ea_Tx 186
#define ComConf_ComSignal_Debug_PVT_PEPS_AverRSSI1_oDebug26_SCIM_BB2_oBackbone2_f0aac79d_Tx 187
#define ComConf_ComSignal_Debug_PVT_PEPS_AverRSSI2_oDebug26_SCIM_BB2_oBackbone2_b40be285_Tx 188
#define ComConf_ComSignal_Debug_PVT_PEPS_Avercut_oDebug17_SCIM_BB2_oBackbone2_1e351cb0_Tx 189
#define ComConf_ComSignal_Debug_PVT_PEPS_CTPoint_X1_oDebug24_SCIM_BB2_oBackbone2_2170f573_Tx 190
#define ComConf_ComSignal_Debug_PVT_PEPS_CTPoint_X2_oDebug24_SCIM_BB2_oBackbone2_65d1d06b_Tx 191
#define ComConf_ComSignal_Debug_PVT_PEPS_CTPoint_Y1_oDebug24_SCIM_BB2_oBackbone2_2f971da2_Tx 192
#define ComConf_ComSignal_Debug_PVT_PEPS_CTPoint_Y2_oDebug24_SCIM_BB2_oBackbone2_6b3638ba_Tx 193
#define ComConf_ComSignal_Debug_PVT_PEPS_Cali_Cir_oDebug25_SCIM_BB2_oBackbone2_35ca775b_Tx 194
#define ComConf_ComSignal_Debug_PVT_PEPS_D_AntP1ToFob_oDebug14_SCIM_BB2_oBackbone2_8ffe4e9c_Tx 195
#define ComConf_ComSignal_Debug_PVT_PEPS_D_AntP1toP2_Cir_oDebug24_SCIM_BB2_oBackbone2_d5890342_Tx 196
#define ComConf_ComSignal_Debug_PVT_PEPS_D_AntP1toP2_X_oDebug25_SCIM_BB2_oBackbone2_de3f0840_Tx 197
#define ComConf_ComSignal_Debug_PVT_PEPS_D_AntP1toP2_Y_oDebug25_SCIM_BB2_oBackbone2_e25feb48_Tx 198
#define ComConf_ComSignal_Debug_PVT_PEPS_D_AntP2ToFob_oDebug14_SCIM_BB2_oBackbone2_042d7085_Tx 199
#define ComConf_ComSignal_Debug_PVT_PEPS_D_AntP3ToFob_oDebug14_SCIM_BB2_oBackbone2_cbb3674d_Tx 200
#define ComConf_ComSignal_Debug_PVT_PEPS_D_AntP4ToFob_oDebug14_SCIM_BB2_oBackbone2_c8fa0af6_Tx 201
#define ComConf_ComSignal_Debug_PVT_PEPS_D_AntPiToFob_oDebug14_SCIM_BB2_oBackbone2_eed9bcbf_Tx 202
#define ComConf_ComSignal_Debug_PVT_PEPS_DecRSSI_oDebug26_SCIM_BB2_oBackbone2_00e2cb3c_Tx 203
#define ComConf_ComSignal_Debug_PVT_PEPS_Fob_location_oDebug15_SCIM_BB2_oBackbone2_fa439810_Tx 204
#define ComConf_ComSignal_Debug_PVT_PEPS_GainP1_stat_oDebug15_SCIM_BB2_oBackbone2_7d778ea0_Tx 205
#define ComConf_ComSignal_Debug_PVT_PEPS_GainP2_stat_oDebug15_SCIM_BB2_oBackbone2_f6a4b0b9_Tx 206
#define ComConf_ComSignal_Debug_PVT_PEPS_GainP3_stat_oDebug15_SCIM_BB2_oBackbone2_393aa771_Tx 207
#define ComConf_ComSignal_Debug_PVT_PEPS_GainP4_stat_oDebug15_SCIM_BB2_oBackbone2_3a73caca_Tx 208
#define ComConf_ComSignal_Debug_PVT_PEPS_GainPi_stat_oDebug15_SCIM_BB2_oBackbone2_1c507c83_Tx 209
#define ComConf_ComSignal_Debug_PVT_PEPS_K_AntP1_oDebug20_SCIM_BB2_oBackbone2_a02e1366_Tx 210
#define ComConf_ComSignal_Debug_PVT_PEPS_K_AntP2_oDebug20_SCIM_BB2_oBackbone2_e48f367e_Tx 211
#define ComConf_ComSignal_Debug_PVT_PEPS_K_AntP3_oDebug20_SCIM_BB2_oBackbone2_d8efd576_Tx 212
#define ComConf_ComSignal_Debug_PVT_PEPS_K_AntP4_oDebug21_SCIM_BB2_oBackbone2_f217ffd0_Tx 213
#define ComConf_ComSignal_Debug_PVT_PEPS_K_AntPi_oDebug20_SCIM_BB2_oBackbone2_f075c72c_Tx 214
#define ComConf_ComSignal_Debug_PVT_PEPS_K_Cir_oDebug25_SCIM_BB2_oBackbone2_34b043f1_Tx 215
#define ComConf_ComSignal_Debug_PVT_PEPS_LimitRSSIP1_oDebug18_SCIM_BB2_oBackbone2_51397b35_Tx 216
#define ComConf_ComSignal_Debug_PVT_PEPS_LimitRSSIP2_oDebug18_SCIM_BB2_oBackbone2_15985e2d_Tx 217
#define ComConf_ComSignal_Debug_PVT_PEPS_LimitRSSIP3_oDebug18_SCIM_BB2_oBackbone2_29f8bd25_Tx 218
#define ComConf_ComSignal_Debug_PVT_PEPS_LimitRSSIP4_oDebug18_SCIM_BB2_oBackbone2_9cda141d_Tx 219
#define ComConf_ComSignal_Debug_PVT_PEPS_LimitRSSIPi_oDebug18_SCIM_BB2_oBackbone2_0162af7f_Tx 220
#define ComConf_ComSignal_Debug_PVT_PEPS_Logic_stat_oDebug15_SCIM_BB2_oBackbone2_19626c75_Tx 221
#define ComConf_ComSignal_Debug_PVT_PEPS_P1_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_6c5ea403_Tx 222
#define ComConf_ComSignal_Debug_PVT_PEPS_P2_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_21b6a464_Tx 223
#define ComConf_ComSignal_Debug_PVT_PEPS_P2_RSSIcut_oDebug17_SCIM_BB2_oBackbone2_b258a6ed_Tx 224
#define ComConf_ComSignal_Debug_PVT_PEPS_P3_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_ac3e5986_Tx 225
#define ComConf_ComSignal_Debug_PVT_PEPS_P3_RSSIcut_oDebug17_SCIM_BB2_oBackbone2_3fd05b0f_Tx 226
#define ComConf_ComSignal_Debug_PVT_PEPS_P4_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_ba66a4aa_Tx 227
#define ComConf_ComSignal_Debug_PVT_PEPS_Pi_MaxRSSI_oDebug16_SCIM_BB2_oBackbone2_d5d56a8f_Tx 228
#define ComConf_ComSignal_Debug_PVT_PEPS_Pi_RSSIcut_oDebug17_SCIM_BB2_oBackbone2_463b6806_Tx 229
#define ComConf_ComSignal_Debug_PVT_PEPS_TestPeriod_stat_oDebug15_SCIM_BB2_oBackbone2_5f76975a_Tx 230
#define ComConf_ComSignal_Debug_PVT_PEPS_VDSI_stat_oDebug15_SCIM_BB2_oBackbone2_cba0b8aa_Tx 231
#define ComConf_ComSignal_Debug_PVT_PEPS_Vlength_oDebug21_SCIM_BB2_oBackbone2_05e3a4e3_Tx 232
#define ComConf_ComSignal_Debug_PVT_PEPS_Vsquare_oDebug21_SCIM_BB2_oBackbone2_401956e3_Tx 233
#define ComConf_ComSignal_Debug_PVT_PEPS_Vwidth_oDebug21_SCIM_BB2_oBackbone2_051d28a8_Tx 234
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_12VDCDCFault_oDebug2_SCIM_BB2_oBackbone2_a76feb3e_Tx 235
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_12VDCDCVolt_oDebug2_SCIM_BB2_oBackbone2_cecf5c09_Tx 236
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_12VLivingFault_oDebug2_SCIM_BB2_oBackbone2_64d972d5_Tx 237
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_12VLivingVolt_oDebug2_SCIM_BB2_oBackbone2_74d816f4_Tx 238
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_12VParkedFault_oDebug2_SCIM_BB2_oBackbone2_ab53cda9_Tx 239
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_12VParkedVolt_oDebug2_SCIM_BB2_oBackbone2_44f2f3c2_Tx 240
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI01Fault_oDebug27_SCIM_BB2_oBackbone2_00b81d3f_Tx 241
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI01_oDebug7_SCIM_BB2_oBackbone2_d2059597_Tx 242
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI02Fault_oDebug27_SCIM_BB2_oBackbone2_8b6b2326_Tx 243
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI02_oDebug7_SCIM_BB2_oBackbone2_770dfefb_Tx 244
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI03Fault_oDebug27_SCIM_BB2_oBackbone2_44f534ee_Tx 245
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI03_oDebug7_SCIM_BB2_oBackbone2_140a27df_Tx 246
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI04Fault_oDebug27_SCIM_BB2_oBackbone2_47bc5955_Tx 247
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI04_oDebug7_SCIM_BB2_oBackbone2_e66c2e62_Tx 248
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI05Fault_oDebug27_SCIM_BB2_oBackbone2_88224e9d_Tx 249
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI05_oDebug7_SCIM_BB2_oBackbone2_856bf746_Tx 250
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI06Fault_oDebug27_SCIM_BB2_oBackbone2_03f17084_Tx 251
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI06_oDebug7_SCIM_BB2_oBackbone2_20639c2a_Tx 252
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI07Fault_oDebug27_SCIM_BB2_oBackbone2_cc6f674c_Tx 253
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI07_oDebug8_SCIM_BB2_oBackbone2_0f71ca20_Tx 254
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI08Fault_oDebug27_SCIM_BB2_oBackbone2_0563abf2_Tx 255
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI08_oDebug8_SCIM_BB2_oBackbone2_53cb063f_Tx 256
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI09Fault_oDebug27_SCIM_BB2_oBackbone2_cafdbc3a_Tx 257
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI09_oDebug8_SCIM_BB2_oBackbone2_30ccdf1b_Tx 258
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI10Fault_oDebug27_SCIM_BB2_oBackbone2_5a56de62_Tx 259
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI10_oDebug8_SCIM_BB2_oBackbone2_c1772095_Tx 260
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI11Fault_oDebug27_SCIM_BB2_oBackbone2_95c8c9aa_Tx 261
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI11_oDebug8_SCIM_BB2_oBackbone2_a270f9b1_Tx 262
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI12Fault_oDebug27_SCIM_BB2_oBackbone2_1e1bf7b3_Tx 263
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI12_oDebug8_SCIM_BB2_oBackbone2_077892dd_Tx 264
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI13Fault_oDebug27_SCIM_BB2_oBackbone2_d185e07b_Tx 265
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI13_oDebug28_SCIM_BB2_oBackbone2_f1e56b1c_Tx 266
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI14Fault_oDebug27_SCIM_BB2_oBackbone2_d2cc8dc0_Tx 267
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI14_oDebug28_SCIM_BB2_oBackbone2_44c7c224_Tx 268
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI15Fault_oDebug27_SCIM_BB2_oBackbone2_1d529a08_Tx 269
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI15_oDebug28_SCIM_BB2_oBackbone2_78a7212c_Tx 270
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI16Fault_oDebug27_SCIM_BB2_oBackbone2_9681a411_Tx 271
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_ADI16_oDebug28_SCIM_BB2_oBackbone2_3c060434_Tx 272
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS1_Fault_oDebug3_SCIM_BB2_oBackbone2_66b07d64_Tx 273
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS1_Volt_oDebug3_SCIM_BB2_oBackbone2_8af915ef_Tx 274
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS2_Fault_oDebug3_SCIM_BB2_oBackbone2_ed63437d_Tx 275
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS2_Volt_oDebug3_SCIM_BB2_oBackbone2_e77fe6b5_Tx 276
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS3_Fault_oDebug3_SCIM_BB2_oBackbone2_22fd54b5_Tx 277
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS3_Volt_oDebug3_SCIM_BB2_oBackbone2_c3fdb783_Tx 278
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS4_Fault_oDebug3_SCIM_BB2_oBackbone2_21b4390e_Tx 279
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_BHS4_Volt_oDebug3_SCIM_BB2_oBackbone2_3c720001_Tx 280
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_DAI1Fault_oDebug27_SCIM_BB2_oBackbone2_6728fa49_Tx 281
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_DAI1_oDebug9_SCIM_BB2_oBackbone2_179e2272_Tx 282
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_DAI2Fualt_oDebug27_SCIM_BB2_oBackbone2_8229f0ed_Tx 283
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_DAI2_oDebug9_SCIM_BB2_oBackbone2_b296491e_Tx 284
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_VBAT_Fault_oDebug2_SCIM_BB2_oBackbone2_3de6637b_Tx 285
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_VBAT_oDebug2_SCIM_BB2_oBackbone2_d3887400_Tx 286
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS1_Duty_oDebug10_SCIM_BB2_oBackbone2_e4964bec_Tx 287
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS1_Fault_oDebug10_SCIM_BB2_oBackbone2_7f82e8ff_Tx 288
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS1_Freq_oDebug10_SCIM_BB2_oBackbone2_e909035f_Tx 289
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS1_Volt_oDebug10_SCIM_BB2_oBackbone2_fae484a1_Tx 290
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS2_Duty_oDebug10_SCIM_BB2_oBackbone2_6f4575f5_Tx 291
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS2_Fault_oDebug10_SCIM_BB2_oBackbone2_1b629301_Tx 292
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS2_Freq_oDebug10_SCIM_BB2_oBackbone2_62da3d46_Tx 293
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WHS2_Volt_oDebug10_SCIM_BB2_oBackbone2_7137bab8_Tx 294
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS1_Duty_oDebug11_SCIM_BB2_oBackbone2_151f9ecd_Tx 295
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS1_Fault_oDebug11_SCIM_BB2_oBackbone2_bbe8962a_Tx 296
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS1_Freq_oDebug11_SCIM_BB2_oBackbone2_1880d67e_Tx 297
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS1_Volt_oDebug11_SCIM_BB2_oBackbone2_0b6d5180_Tx 298
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS2_Duty_oDebug11_SCIM_BB2_oBackbone2_9ecca0d4_Tx 299
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS2_Fault_oDebug11_SCIM_BB2_oBackbone2_df08edd4_Tx 300
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS2_Freq_oDebug11_SCIM_BB2_oBackbone2_9353e867_Tx 301
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS2_Volt_oDebug11_SCIM_BB2_oBackbone2_80be6f99_Tx 302
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS3_Duty_oDebug9_SCIM_BB2_oBackbone2_c539df90_Tx 303
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS3_Fault_oDebug9_SCIM_BB2_oBackbone2_ee12f9c5_Tx 304
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS3_Freq_oDebug9_SCIM_BB2_oBackbone2_371b521a_Tx 305
#define ComConf_ComSignal_Debug_PVT_SCIM_RD_WLS3_Volt_oDebug9_SCIM_BB2_oBackbone2_b604fa02_Tx 306
#define ComConf_ComSignal_Debug_PVT_SCIM_RF_BAT_oDebug4_SCIM_BB2_oBackbone2_06dc919d_Tx 307
#define ComConf_ComSignal_Debug_PVT_SCIM_RF_BtnPressIndex_oDebug4_SCIM_BB2_oBackbone2_b7de0f1e_Tx 308
#define ComConf_ComSignal_Debug_PVT_SCIM_RF_Button1_ID_oDebug4_SCIM_BB2_oBackbone2_ebba1000_Tx 309
#define ComConf_ComSignal_Debug_PVT_SCIM_RF_Button1_Time_oDebug4_SCIM_BB2_oBackbone2_c501849a_Tx 310
#define ComConf_ComSignal_Debug_PVT_SCIM_RF_Button2_ID_oDebug4_SCIM_BB2_oBackbone2_22a518bf_Tx 311
#define ComConf_ComSignal_Debug_PVT_SCIM_RF_Button2_Time_oDebug4_SCIM_BB2_oBackbone2_a88777c0_Tx 312
#define ComConf_ComSignal_Debug_PVT_SCIM_RF_KeyfobSerialNb_oDebug12_SCIM_BB2_oBackbone2_ac321a87_Tx 313
#define ComConf_ComSignal_Debug_PVT_SCIM_RF_RollingCounter_oDebug13_SCIM_BB2_oBackbone2_43716df6_Tx 314
#define ComConf_ComSignal_Debug_PVT_SCIM_TSincePwrOn_Long_oDebug5_SCIM_BB2_oBackbone2_f3adf1ef_Tx 315
#define ComConf_ComSignal_Debug_PVT_SCIM_TSincePwrOn_Short_oDebug5_SCIM_BB2_oBackbone2_70278e89_Tx 316
#define ComConf_ComSignal_Debug_PVT_SCIM_TSinceWkUp_Short_oDebug5_SCIM_BB2_oBackbone2_45eb7c38_Tx 317
#define ComConf_ComSignal_Debug_PVT_SCIM_Task1_Time_oDebug6_SCIM_BB2_oBackbone2_b7b9de59_Tx 318
#define ComConf_ComSignal_Debug_PVT_SCIM_Task2_Time_oDebug6_SCIM_BB2_oBackbone2_da3f2d03_Tx 319
#define ComConf_ComSignal_Debug_PVT_SCIM_Task3_Time_oDebug6_SCIM_BB2_oBackbone2_febd7c35_Tx 320
#define ComConf_ComSignal_Debug_PVT_SCIM_Task4_Time_oDebug6_SCIM_BB2_oBackbone2_0132cbb7_Tx 321
#define ComConf_ComSignal_Debug_PVT_SCIM_Task5_Time_oDebug6_SCIM_BB2_oBackbone2_25b09a81_Tx 322
#define ComConf_ComSignal_Debug_PVT_SCIM_Task6_Time_oDebug6_SCIM_BB2_oBackbone2_483669db_Tx 323
#define ComConf_ComSignal_Debug_PVT_SCIM_Task7_Time_oDebug6_SCIM_BB2_oBackbone2_6cb438ed_Tx 324
#define ComConf_ComSignal_DirectionIndicator_fms_oTCO1_X_CIOMFMS_oFMSNet_ca312c75_Tx 365
#define ComConf_ComSignal_DisplayText_stat_ISig_5_oCIOM_Cab_20S_oCabSubnet_93b8c839_Tx 366
#define ComConf_ComSignal_DoorAutoFunction_rqst_oCIOM_BB2_06P_oBackbone2_cdbceb0a_Tx 367
#define ComConf_ComSignal_DoorInstepLight_cmd_ISig_10_oCIOM_Sec_01P_oSecuritySubnet_10cf38ea_Tx 368
#define ComConf_ComSignal_DoorLock_stat_ISig_4_oCIOM_BB2_06P_oBackbone2_3a170244_Tx 369
#define ComConf_ComSignal_DoorLock_stat_ISig_5_oCIOM_Cab_06P_oCabSubnet_61085ef5_Tx 370
#define ComConf_ComSignal_DoorLock_stat_ISig_13_oCIOMtoSlaves2_FR1_L1_oLIN00_66228e20_Tx 371
#define ComConf_ComSignal_DoorWarningLight_cmd_ISig_10_oCIOM_Sec_01P_oSecuritySubnet_25340355_Tx 372
#define ComConf_ComSignal_DoorsAjar_stat_ISig_4_oCIOM_BB2_06P_oBackbone2_8810fc26_Tx 373
#define ComConf_ComSignal_Driver1TimeRelatedStates_fms_oTCO1_X_CIOMFMS_oFMSNet_81d8244b_Tx 374
#define ComConf_ComSignal_Driver1WorkingState_fms_oTCO1_X_CIOMFMS_oFMSNet_b6802f25_Tx 375
#define ComConf_ComSignal_Driver2TimeRelatedStates_fms_oTCO1_X_CIOMFMS_oFMSNet_018288fe_Tx 376
#define ComConf_ComSignal_Driver2WorkingState_fms_oTCO1_X_CIOMFMS_oFMSNet_55c99887_Tx 377
#define ComConf_ComSignal_DriverCardDriver1_fms_oTCO1_X_CIOMFMS_oFMSNet_1d233a45_Tx 378
#define ComConf_ComSignal_DriverCardDriver2_fms_oTCO1_X_CIOMFMS_oFMSNet_b82b5129_Tx 379
#define ComConf_ComSignal_DriverDoorAjar_stat_ISig_5_oCIOM_Cab_06P_oCabSubnet_5d073f03_Tx 380
#define ComConf_ComSignal_DriverDoorLatch_rqst_oCIOM_Sec_12S_oSecuritySubnet_bb5d6202_Tx 381
#define ComConf_ComSignal_DriverMemory_rqst_ISig_5_oCIOM_Cab_01P_oCabSubnet_4387b330_Tx 382
#define ComConf_ComSignal_DriverSeatBeltSwitch_ISig_4_oCIOM_BB2_10P_oBackbone2_a9b7c180_Tx 383
#define ComConf_ComSignal_DriverSeatBeltSwitch_ISig_5_oCIOM_Cab_01P_oCabSubnet_b231a5c2_Tx 384
#define ComConf_ComSignal_DynamicCode_value_oCIOM_BB2_21S_oBackbone2_04b10010_Tx 385
#define ComConf_ComSignal_ECSStandByRequest_ISig_4_oCIOM_BB2_03P_oBackbone2_9b85740c_Tx 386
#define ComConf_ComSignal_ECSStandbyActive_oCIOM_Cab_01P_oCabSubnet_6502eb60_Tx 387
#define ComConf_ComSignal_ECUVIN_stat_oCIOM_Cab_11S_oCabSubnet_107b8c30_Tx 388
#define ComConf_ComSignal_ESCDriverReq_ISig_3_oCIOM_BB1_01P_oBackbone1J1939_6af79638_Tx 389
#define ComConf_ComSignal_ESC_Indication_oMastertoTCP_oLIN02_e2022dfe_Tx 394
#define ComConf_ComSignal_ElectricalLoadReduction_rqst_ISig_5_oCIOM_Cab_09P_oCabSubnet_3af44465_Tx 395
#define ComConf_ComSignal_ElectricalLoadReduction_rqst_ISig_10_oCIOM_Sec_01P_oSecuritySubnet_de15d0e2_Tx 396
#define ComConf_ComSignal_EncryptedGBUnlockAuth_stat_oCIOM_BB2_32S_oBackbone2_c04307e8_Tx 397
#define ComConf_ComSignal_EngineCoolantTemp_stat_ISig_5_oCIOM_Cab_01P_oCabSubnet_8907a022_Tx 413
#define ComConf_ComSignal_EngineCoolantTemp_stat_fms_oET1_X_CIOMFMS_oFMSNet_ff8e0c87_Tx 414
#define ComConf_ComSignal_EngineCoolingFanSpeed_ISig_5_oCIOM_Cab_23P_oCabSubnet_18427e62_Tx 415
#define ComConf_ComSignal_EngineFuelRate_fms_oLFE_X_CIOMFMS_oFMSNet_f81e126b_Tx 416
#define ComConf_ComSignal_EnginePctLoadAtCurrentSpd_fms_oEEC2_X_CIOMFMS_oFMSNet_362c4bd9_Tx 417
#define ComConf_ComSignal_EngineRetarderTorqueMode_fms_oERC1_x_EMSRetFMS_oFMSNet_83ea8e1a_Tx 418
#define ComConf_ComSignal_EngineSpeed_ISig_5_oCIOM_Cab_02P_oCabSubnet_5593db2d_Tx 419
#define ComConf_ComSignal_EngineSpeed_fms_oEEC1_X_CIOMFMS_oFMSNet_b7a07fbb_Tx 420
#define ComConf_ComSignal_EngineStartAuth_stat_oCIOM_BB2_13S_oBackbone2_6b05f3d8_Tx 421
#define ComConf_ComSignal_EscCabActionRequest_oCIOM_BB2_10P_oBackbone2_ed068e29_Tx 422
#define ComConf_ComSignal_EscCabEnable_oCIOM_BB2_10P_oBackbone2_597c920c_Tx 423
#define ComConf_ComSignal_EscCrossCountryActivation_rqst_oCIOM_BB2_10P_oBackbone2_9ed7c809_Tx 424
#define ComConf_ComSignal_ExitPreDeliveryModeHMI_rqst_ISig_10_oCIOM_Sec_03P_oSecuritySubnet_84831d58_Tx 425
#define ComConf_ComSignal_ExtraBBCraneStatus_ISig_5_oCIOM_Cab_09P_oCabSubnet_a972fe50_Tx 426
#define ComConf_ComSignal_ExtraBBTailLiftStatus_ISig_5_oCIOM_Cab_09P_oCabSubnet_107baccf_Tx 427
#define ComConf_ComSignal_ExtraBbWrcWatchdog_ISig_4_oCIOM_BB2_25P_oBackbone2_931204d3_Tx 428
#define ComConf_ComSignal_ExtraHeating_rqst_ISig_5_oCIOM_Cab_26P_oCabSubnet_eee6066a_Tx 429
#define ComConf_ComSignal_ExtraHeating_status_ISig_4_oCIOM_BB2_25P_oBackbone2_0b563e39_Tx 430
#define ComConf_ComSignal_ExtraMainbeam_SwitchStatus_oCIOM_BB2_02P_oBackbone2_4bfcda80_Tx 431
#define ComConf_ComSignal_ExtraSideMarkers_Rqst_oCIOM_BB2_10P_oBackbone2_59adb931_Tx 432
#define ComConf_ComSignal_FMSAtLeastOnePTOEngaged_oPTODE_X_CIOMFMS_oFMSNet_0e3c3d22_Tx 449
#define ComConf_ComSignal_FMSAxleLocation_oVW_X_CIOMFMS_oFMSNet_d79ac7fe_Tx 450
#define ComConf_ComSignal_FMSAxleWeight_oVW_X_CIOMFMS_oFMSNet_7c1e47f9_Tx 451
#define ComConf_ComSignal_FMSDiagnosisSupported_oFMS_X_CIOMFMS_oFMSNet_edeabe28_Tx 452
#define ComConf_ComSignal_FMSDriversIdentifications_oDI_X_CIOMFMS_oFMSNet_ee328016_Tx 453
#define ComConf_ComSignal_FMSEngineTotHoursOfOp_oHOURS_X_CIOMFMS_oFMSNet_2efdec15_Tx 454
#define ComConf_ComSignal_FMSEngineTotalFuelUsed_oLFC_X_CIOMFMS_oFMSNet_3880399a_Tx 455
#define ComConf_ComSignal_FMSHiResEngineTotalFuelUsed_oHRLFC_X_CIOMFMS_oFMSNet_319b1e3e_Tx 456
#define ComConf_ComSignal_FMSInstantFuelEconomy_oLFE_X_CIOMFMS_oFMSNet_73e21f80_Tx 457
#define ComConf_ComSignal_FMSPtoState_oCCVS_X_CIOMFMS_oFMSNet_6c54927a_Tx 458
#define ComConf_ComSignal_FMSRequestsSupported_oFMS_X_CIOMFMS_oFMSNet_1e37029c_Tx 459
#define ComConf_ComSignal_FMSServiceDistance_oSERV_X_CIOMFMS_oFMSNet_6e1a9f31_Tx 460
#define ComConf_ComSignal_FMSSoftwareVersionSupported_oFMS_X_CIOMFMS_oFMSNet_25fb6e09_Tx 461
#define ComConf_ComSignal_FMSVehicleIdentNumber_oVI_X_CIOMFMS_oFMSNet_136893c1_Tx 462
#define ComConf_ComSignal_FPBRChangeReq_ISig_4_oCIOM_BB2_05P_oBackbone2_a6cd48eb_Tx 463
#define ComConf_ComSignal_FSP1IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_c2c0fe90_Tx 464
#define ComConf_ComSignal_FSP1IndicationCmdL2_oFSP_1_2_Req_L2_oLIN01_635660cd_Tx 465
#define ComConf_ComSignal_FSP1IndicationCmdL3_oFSP_1_2_Req_L3_oLIN02_b7d054ce_Tx 466
#define ComConf_ComSignal_FSP1IndicationCmdL4_oFSP_1_2_Req_L4_oLIN03_fb0a5a36_Tx 467
#define ComConf_ComSignal_FSP1IndicationCmdL5_oFSP_1_2_Req_L5_oLIN04_28e1aa2c_Tx 468
#define ComConf_ComSignal_FSP2IndicationCmdL1_oFSP_1_2_Req_L1_oLIN00_115be26b_Tx 469
#define ComConf_ComSignal_FSP2IndicationCmdL2_oFSP_1_2_Req_L2_oLIN01_b0cd7c36_Tx 470
#define ComConf_ComSignal_FSP2IndicationCmdL3_oFSP_1_2_Req_L3_oLIN02_644b4835_Tx 471
#define ComConf_ComSignal_FSP3IndicationCmdL2_oFSP_3_4_Req_L2_oLIN01_088233aa_Tx 472
#define ComConf_ComSignal_FSP4IndicationCmdL2_oFSP_3_4_Req_L2_oLIN01_3a4c07b4_Tx 473
#define ComConf_ComSignal_FWSelectedSpeedControlMode_oCIOM_BB2_01P_oBackbone2_1df17e0f_Tx 474
#define ComConf_ComSignal_FdEquipmentFreeText_ISig_5_oCIOM_Cab_13S_oCabSubnet_3252f51d_Tx 475
#define ComConf_ComSignal_FdEquipmentStatus1_ISig_5_oCIOM_Cab_10P_oCabSubnet_e2a97d36_Tx 476
#define ComConf_ComSignal_FdEquipmentStatus2_ISig_5_oCIOM_Cab_10P_oCabSubnet_b9becc23_Tx 477
#define ComConf_ComSignal_FdEquipmentStatus3_ISig_5_oCIOM_Cab_10P_oCabSubnet_8f4c5cd0_Tx 478
#define ComConf_ComSignal_FdEquipmentStatus4_ISig_5_oCIOM_Cab_10P_oCabSubnet_0f91ae09_Tx 479
#define ComConf_ComSignal_FdEquipmentStatus5_ISig_5_oCIOM_Cab_10P_oCabSubnet_39633efa_Tx 480
#define ComConf_ComSignal_FdEquipmentValue1_ISig_5_oCIOM_Cab_10P_oCabSubnet_8b8aa392_Tx 481
#define ComConf_ComSignal_FdEquipmentValue2_ISig_5_oCIOM_Cab_10P_oCabSubnet_d09d1287_Tx 482
#define ComConf_ComSignal_FdEquipmentValue3_ISig_5_oCIOM_Cab_10P_oCabSubnet_e66f8274_Tx 483
#define ComConf_ComSignal_FerryFunctionRequest_ISig_4_oCIOM_BB2_03P_oBackbone2_8521eb39_Tx 484
#define ComConf_ComSignal_FerryFunctionSwitchChangeReq_ISig_4_oCIOM_BB2_03P_oBackbone2_79229ff7_Tx 485
#define ComConf_ComSignal_FlexSwitchChildLockButton_stat_oCIOM_Sec_01P_oSecuritySubnet_ce40856c_Tx 486
#define ComConf_ComSignal_FogLightFront_ButtonStatus_1_oCIOM_BB2_04P_oBackbone2_8d98da42_Tx 487
#define ComConf_ComSignal_FogLightFront_ButtonStatus_2_oCIOM_BB2_04P_oBackbone2_7fcf37ba_Tx 488
#define ComConf_ComSignal_FogLightFront_ButtonStatus_3_oCIOM_BB2_01P_oBackbone2_85fd223e_Tx 489
#define ComConf_ComSignal_FogLightRear_ButtonStatus_1_oCIOM_BB2_04P_oBackbone2_74118aab_Tx 490
#define ComConf_ComSignal_FogLightRear_ButtonStatus_2_oCIOM_BB2_04P_oBackbone2_86466753_Tx 491
#define ComConf_ComSignal_FogLightRear_ButtonStatus_3_oCIOM_BB2_01P_oBackbone2_7c7472d7_Tx 492
#define ComConf_ComSignal_FoundationBrakeUse_ISig_5_oCIOM_Cab_31P_oCabSubnet_703ca000_Tx 493
#define ComConf_ComSignal_FrAxleDiffLockActvnDriverRqst_ISig_4_oCIOM_BB2_01P_oBackbone2_4d7c951e_Tx 494
#define ComConf_ComSignal_FrontEndPositionStatus_ISig_5_oCIOM_Cab_10P_oCabSubnet_e37fb42f_Tx 495
#define ComConf_ComSignal_FrontLidAjar_Stat_oCIOM_BB2_11P_oBackbone2_f2cbc51b_Tx 496
#define ComConf_ComSignal_FrontalCollisionAccidentStatus_ISig_4_oCIOM_BB2_25P_oBackbone2_d75caaf1_Tx 497
#define ComConf_ComSignal_FuelLevel_fms_oDD_X_CIOMFMS_oFMSNet_7f38bd28_Tx 498
#define ComConf_ComSignal_FuelType_oEEC14_X_CIOMFMS_oFMSNet_8b49076f_Tx 499
#define ComConf_ComSignal_FuncIndIlluminationLevel_ISig_5_oCIOM_Cab_01P_oCabSubnet_a3488a7e_Tx 500
#define ComConf_ComSignal_FuncIndIlluminationLevel_ISig_10_oCIOM_Sec_01P_oSecuritySubnet_4de61bd8_Tx 501
#define ComConf_ComSignal_FuncIndIlluminationLevel_ISig_13_oBacklight_FuncInd_L1_oLIN00_dc8bb8a1_Tx 502
#define ComConf_ComSignal_FuncIndIlluminationLevel_ISig_14_oBacklight_FuncInd_L2_oLIN01_902126ec_Tx 503
#define ComConf_ComSignal_FuncIndIlluminationLevel_ISig_15_oBacklight_FuncInd_L3_oLIN02_f9e294c0_Tx 504
#define ComConf_ComSignal_FuncIndIlluminationLevel_ISig_16_oBacklight_FuncInd_L4_oLIN03_c0818857_Tx 505
#define ComConf_ComSignal_FuncIndIlluminationLevel_ISig_17_oBacklight_FuncInd_L5_oLIN04_ae2ffe62_Tx 506
#define ComConf_ComSignal_FuncIndIlluminationLevel_ISig_30_oVP236_X_CIOMFMS_oFMSNet_d3e3a47a_Tx 507
#define ComConf_ComSignal_GearboxUnlockAuth_stat_oCIOM_BB2_28P_oBackbone2_02d2438a_Tx 516
#define ComConf_ComSignal_GrossCombVehicleWeight_fms_oCVW_X_CIOMFMS_oFMSNet_29d9716f_Tx 517
#define ComConf_ComSignal_HSADriverRequest_oCIOM_BB1_01P_oBackbone1J1939_28840db8_Tx 518
#define ComConf_ComSignal_HandlingInformation_fms_oTCO1_X_CIOMFMS_oFMSNet_09b78b56_Tx 519
#define ComConf_ComSignal_HeadLampUpDown_SwitchStatus_oCIOM_BB2_05P_oBackbone2_1a650ada_Tx 520
#define ComConf_ComSignal_HeightAdjustmentAllowed_ISig_5_oCIOM_Cab_01P_oCabSubnet_501c7e5e_Tx 521
#define ComConf_ComSignal_HoursLocal_ISig_5_oCIOM_Cab_08P_oCabSubnet_1200a15e_Tx 522
#define ComConf_ComSignal_HoursLocal_ISig_13_oCIOMtoSlaves2_FR2_L1_oLIN00_351e2953_Tx 523
#define ComConf_ComSignal_HoursUTC_ISig_5_oCIOM_Cab_07P_oCabSubnet_c75d2f34_Tx 524
#define ComConf_ComSignal_HoursUTC_ISig_10_oCIOM_Sec_02P_oSecuritySubnet_04a13014_Tx 525
#define ComConf_ComSignal_Indicator_Lights_Alarm_rqst_ISig_4_oCIOM_BB2_05P_oBackbone2_7563747d_Tx 526
#define ComConf_ComSignal_InhibitWRCECSMenuCmd_oCIOM_Cab_26P_oCabSubnet_2e017df7_Tx 527
#define ComConf_ComSignal_InteriorLightDimming_rqst_oCIOM_BB2_01P_oBackbone2_9372e3b7_Tx 530
#define ComConf_ComSignal_KeyAuthEncrypted_stat_oCIOM_BB2_12S_oBackbone2_f8744b4b_Tx 533
#define ComConf_ComSignal_KeyID_DrivDoorKeyCylinderStat_oCIOM_Sec_09S_oSecuritySubnet_d3beca19_Tx 534
#define ComConf_ComSignal_KeyID_Locking_Switch_stat_oCIOM_Sec_08S_oSecuritySubnet_39feba2e_Tx 535
#define ComConf_ComSignal_KeyID_PassDoorKeyCylinderStat_oCIOM_Sec_11S_oSecuritySubnet_67a2f229_Tx 536
#define ComConf_ComSignal_KeyNotValid_oCIOM_BB2_02P_oBackbone2_48475d55_Tx 537
#define ComConf_ComSignal_KeyPosition_ISig_10_oCIOM_Sec_04P_oSecuritySubnet_69aa2cc4_Tx 538
#define ComConf_ComSignal_KeyfobLockBtn_DoublePress_ISig_4_oCIOM_BB2_02P_oBackbone2_57b3a1f6_Tx 539
#define ComConf_ComSignal_KeyfobLockBtn_DoublePress_ISig_10_oCIOM_Sec_01P_oSecuritySubnet_0d0e3bf9_Tx 540
#define ComConf_ComSignal_KeyfobUnlockButton_Status_oCIOM_BB2_02P_oBackbone2_7b99e4e7_Tx 541
#define ComConf_ComSignal_KneelingChangeRequest_ISig_4_oCIOM_BB2_03P_oBackbone2_92f3403d_Tx 542
#define ComConf_ComSignal_KneelingInformation_ISig_5_oCIOM_Cab_26P_oCabSubnet_d57f6153_Tx 543
#define ComConf_ComSignal_LCS_EnableSwitch_rqst_oCIOM_BB2_10P_oBackbone2_419379e7_Tx 544
#define ComConf_ComSignal_LIN_ACCOrCCIndication_oCIOMtoSlaves2_L4_oLIN03_9dcb84e7_Tx 545
#define ComConf_ComSignal_LIN_ASLIndication_oCIOMtoSlaves2_L4_oLIN03_70f56c35_Tx 546
#define ComConf_ComSignal_LIN_Adjust_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_2e36f0fb_Tx 547
#define ComConf_ComSignal_LIN_AudioSystemStatus_oCIOMtoSlaves2_FR1_L1_oLIN00_13393810_Tx 553
#define ComConf_ComSignal_LIN_AudioVolumeIndicationCmd_oCIOMtoSlaves2_FR1_L1_oLIN00_e9108a0f_Tx 554
#define ComConf_ComSignal_LIN_BTStatus_oCIOMtoSlaves2_FR2_L1_oLIN00_71f34a0b_Tx 555
#define ComConf_ComSignal_LIN_DaytimeRunningLight_Indica_oCIOMtoSlaves1_L4_oLIN03_f7c9701b_Tx 556
#define ComConf_ComSignal_LIN_DifflockOnOff_Indication_oCIOMtoSlaves2_L4_oLIN03_eaa1e19e_Tx 557
#define ComConf_ComSignal_LIN_DoorAutoFuncInd_cmd_oCIOMtoSlaves1_L1_oLIN00_52fafc3c_Tx 558
#define ComConf_ComSignal_LIN_Down_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_c9ef6b77_Tx 559
#define ComConf_ComSignal_LIN_DrivingLightPlus_Indicatio_oCIOMtoSlaves1_L4_oLIN03_e75acc52_Tx 560
#define ComConf_ComSignal_LIN_DrivingLight_Indication_oCIOMtoSlaves1_L4_oLIN03_e3d131c9_Tx 561
#define ComConf_ComSignal_LIN_EscButtonMuddySiteDeviceIn_oCIOMtoSlaves2_L4_oLIN03_b87af696_Tx 562
#define ComConf_ComSignal_LIN_FCW_DeviceIndication_oCIOMtoSlaves2_L4_oLIN03_246586c3_Tx 563
#define ComConf_ComSignal_LIN_FrontFog_Indication_oCIOMtoSlaves1_L4_oLIN03_890ecb12_Tx 564
#define ComConf_ComSignal_LIN_IntLghtLvlIndScaled_cmd_oCIOMtoSlaves2_FR1_L1_oLIN00_9d28ed83_Tx 565
#define ComConf_ComSignal_LIN_IntLghtOffModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_00d309d6_Tx 568
#define ComConf_ComSignal_LIN_IntLightMaxModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_523a53e3_Tx 569
#define ComConf_ComSignal_LIN_IntLightNightModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_8c1fb2a2_Tx 570
#define ComConf_ComSignal_LIN_IntLightRestingModeInd_cmd_oCIOMtoSlaves1_L1_oLIN00_df4802bd_Tx 571
#define ComConf_ComSignal_LIN_LKS_DeviceIndication_oCIOMtoSlaves2_L4_oLIN03_e9d09941_Tx 572
#define ComConf_ComSignal_LIN_M1_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_d4ecc99f_Tx 573
#define ComConf_ComSignal_LIN_M2_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_ecd742ec_Tx 574
#define ComConf_ComSignal_LIN_M3_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_4deec602_Tx 575
#define ComConf_ComSignal_LIN_Offroad_Indication_oCIOMtoSlaves2_L4_oLIN03_f70e4ef2_Tx 576
#define ComConf_ComSignal_LIN_ParkingLight_Indication_oCIOMtoSlaves1_L4_oLIN03_de9a5a8c_Tx 577
#define ComConf_ComSignal_LIN_PhoneButtonIndication_cmd_oCIOMtoSlaves2_FR1_L1_oLIN00_a04041c2_Tx 578
#define ComConf_ComSignal_LIN_RearFog_Indication_oCIOMtoSlaves1_L4_oLIN03_9af57169_Tx 579
#define ComConf_ComSignal_LIN_RearWorkProjector_Indicati_oCIOMtoSlaves2_L4_oLIN03_d4496a61_Tx 580
#define ComConf_ComSignal_LIN_ShortPulseMaxLength_oCIOMtoSlaves_L5_oLIN04_83fa06d3_Tx 581
#define ComConf_ComSignal_LIN_Up_DeviceIndication_oCIOMtoSlaves_L5_oLIN04_c6192fe4_Tx 582
#define ComConf_ComSignal_LKSCSEnableSwitch_rqst_oCIOM_BB2_29P_oBackbone2_cb45770c_Tx 583
#define ComConf_ComSignal_LKSEnableSwitch_rqst_oCIOM_BB2_10P_oBackbone2_9c248b19_Tx 584
#define ComConf_ComSignal_LevelControlInformation_ISig_5_oCIOM_Cab_02P_oCabSubnet_14e61c65_Tx 585
#define ComConf_ComSignal_LevelStrokeRequest_ISig_4_oCIOM_BB2_03P_oBackbone2_62f81df3_Tx 589
#define ComConf_ComSignal_LevelingThumbwheel_stat_oCIOM_BB2_10P_oBackbone2_07c8addd_Tx 590
#define ComConf_ComSignal_LiftAxle1AutoLiftRequest_ISig_4_oCIOM_BB2_01P_oBackbone2_b608d773_Tx 591
#define ComConf_ComSignal_LiftAxle1DirectControl_ISig_4_oCIOM_BB2_06P_oBackbone2_e26a9610_Tx 592
#define ComConf_ComSignal_LiftAxle1LiftPositionRequest_ISig_4_oCIOM_BB2_01P_oBackbone2_c0a6412b_Tx 593
#define ComConf_ComSignal_LiftAxle1PositionStatus_ISig_5_oCIOM_Cab_23P_oCabSubnet_648ab9b8_Tx 594
#define ComConf_ComSignal_LiftAxle2AutoLiftRequest_ISig_4_oCIOM_BB2_01P_oBackbone2_f0dae217_Tx 595
#define ComConf_ComSignal_LiftAxle2LiftPositionRequest_ISig_4_oCIOM_BB2_01P_oBackbone2_7af3453c_Tx 596
#define ComConf_ComSignal_LiftAxle2PositionStatus_ISig_5_oCIOM_Cab_23P_oCabSubnet_df01a417_Tx 597
#define ComConf_ComSignal_LightMode_Status_Ctr_1_oCIOM_BB2_04P_oBackbone2_78dfefd0_Tx 598
#define ComConf_ComSignal_LightMode_Status_Ctr_2_oCIOM_BB2_04P_oBackbone2_8a880228_Tx 599
#define ComConf_ComSignal_LoadDistributionChangeRequest_ISig_4_oCIOM_BB2_01P_oBackbone2_8101c1ec_Tx 600
#define ComConf_ComSignal_LoadDistributionRequested_ISig_4_oCIOM_BB2_25P_oBackbone2_95a766a1_Tx 601
#define ComConf_ComSignal_LoadDistributionSelected_ISig_5_oCIOM_Cab_23P_oCabSubnet_7a051efc_Tx 602
#define ComConf_ComSignal_LockingIndication_rqst_oCIOM_BB2_02P_oBackbone2_f7574af7_Tx 603
#define ComConf_ComSignal_LongMotionDirectionQual_ISig_5_oCIOM_Cab_26P_oCabSubnet_6a26ffb5_Tx 604
#define ComConf_ComSignal_LongMotionDirection_ISig_5_oCIOM_Cab_26P_oCabSubnet_a556bbbf_Tx 605
#define ComConf_ComSignal_LuggageAjar_stat_oCIOM_BB2_06P_oBackbone2_f2229046_Tx 606
#define ComConf_ComSignal_LuggageCompartment_stat_oCIOM_Sec_05S_oSecuritySubnet_64873c5a_Tx 607
#define ComConf_ComSignal_MainSwitchButton_Status_ISig_4_oCIOM_BB2_02P_oBackbone2_98db5ec3_Tx 608
#define ComConf_ComSignal_MainSwitchButton_Status_ISig_10_oCIOM_Sec_01P_oSecuritySubnet_f7bc64fa_Tx 609
#define ComConf_ComSignal_MediaSourcesListNPRsp_ISig_5_oCIOM_Cab_28S_oCabSubnet_52263ef3_Tx 610
#define ComConf_ComSignal_MinutesLocal_ISig_5_oCIOM_Cab_08P_oCabSubnet_4de5aa4a_Tx 619
#define ComConf_ComSignal_MinutesLocal_ISig_13_oCIOMtoSlaves2_FR2_L1_oLIN00_e575ccc0_Tx 620
#define ComConf_ComSignal_MinutesUTC_ISig_5_oCIOM_Cab_07P_oCabSubnet_91a8083e_Tx 621
#define ComConf_ComSignal_MinutesUTC_ISig_10_oCIOM_Sec_02P_oSecuritySubnet_0f5254f1_Tx 622
#define ComConf_ComSignal_MirrorHeatNormModeBtn_stat_ISig_10_oCIOM_Sec_01P_oSecuritySubnet_8ed1d9d0_Tx 623
#define ComConf_ComSignal_MirrorHeatNormalModeInd_cmd_2_ISig_5_oCIOM_Cab_06P_oCabSubnet_154543b2_Tx 624
#define ComConf_ComSignal_MirrorHeat_rqst_oCIOM_BB2_04P_oBackbone2_30b53d0b_Tx 625
#define ComConf_ComSignal_MirrorHeatingMode_ISig_5_oCIOM_Cab_01P_oCabSubnet_2475102d_Tx 626
#define ComConf_ComSignal_MirrorHeatingMode_ISig_10_oCIOM_Sec_01P_oSecuritySubnet_ba717349_Tx 627
#define ComConf_ComSignal_MirrorSelectLeftMainBtn_stat_ISig_4_oCIOM_BB2_06P_oBackbone2_72601fd2_Tx 628
#define ComConf_ComSignal_MirrorSelectLeftWideBtn_stat_ISig_4_oCIOM_BB2_06P_oBackbone2_b9fa1933_Tx 629
#define ComConf_ComSignal_MirrorSelectRightMainBtn_stat_ISig_4_oCIOM_BB2_06P_oBackbone2_b50fbb61_Tx 630
#define ComConf_ComSignal_MirrorSelectRightWideBtn_stat_ISig_4_oCIOM_BB2_06P_oBackbone2_7e95bd80_Tx 631
#define ComConf_ComSignal_MonthLocal_ISig_5_oCIOM_Cab_08P_oCabSubnet_cd183869_Tx 632
#define ComConf_ComSignal_MonthUTC_ISig_5_oCIOM_Cab_07P_oCabSubnet_b660217c_Tx 633
#define ComConf_ComSignal_MonthUTC_ISig_10_oCIOM_Sec_02P_oSecuritySubnet_0fe8246f_Tx 634
#define ComConf_ComSignal_PSWindowPosition_ISig_5_oCIOM_Cab_06P_oCabSubnet_1603b8a0_Tx 688
#define ComConf_ComSignal_PW_Left_DS_SwStatus_ISig_4_oCIOM_BB2_06P_oBackbone2_bb85627f_Tx 689
#define ComConf_ComSignal_PW_Right_DS_SwStatus_ISig_4_oCIOM_BB2_06P_oBackbone2_1a815621_Tx 690
#define ComConf_ComSignal_PanicAlarmFromKeyfob_rqst_oCIOM_BB2_06P_oBackbone2_20c73409_Tx 691
#define ComConf_ComSignal_ParkHeaterCooler_ButtonStatus_ISig_4_oCIOM_BB2_05P_oBackbone2_e2ebeda4_Tx 709
#define ComConf_ComSignal_ParkHeaterTimerReleased_stat_ISig_5_oCIOM_Cab_03P_oCabSubnet_f395998e_Tx 710
#define ComConf_ComSignal_ParkingBrake_stat_ISig_5_oCIOM_Cab_23P_oCabSubnet_5bee1d33_Tx 711
#define ComConf_ComSignal_ParkingClimate_IndicationCmd_ISig_4_oCIOM_BB2_06P_oBackbone2_fb995122_Tx 712
#define ComConf_ComSignal_ParkingHeaterCleaning_Rqst_ISig_4_oCIOM_BB2_11P_oBackbone2_f341ea92_Tx 713
#define ComConf_ComSignal_ParkingHeaterCleaning_cmd_ISig_5_oCIOM_Cab_03P_oCabSubnet_32cf67ae_Tx 714
#define ComConf_ComSignal_ParkingHeater_IndicationCmd_ISig_4_oCIOM_BB2_05P_oBackbone2_c2d50d54_Tx 715
#define ComConf_ComSignal_ParkingHeater_IndicationCmd_ISig_10_oCIOM_Sec_04P_oSecuritySubnet_a75cc1e3_Tx 716
#define ComConf_ComSignal_ParkingHeater_IndicationCmd_ISig_13_oCIOMtoSlaves2_FR1_L1_oLIN00_fa69fd0d_Tx 717
#define ComConf_ComSignal_PassengerDoorAjar_stat_ISig_5_oCIOM_Cab_06P_oCabSubnet_159a4b0c_Tx 718
#define ComConf_ComSignal_PassengerDoorLatch_rqst_oCIOM_Sec_10S_oSecuritySubnet_91cb4d26_Tx 719
#define ComConf_ComSignal_PinCode_stat_oCIOM_BB2_10P_oBackbone2_dfaae276_Tx 720
#define ComConf_ComSignal_PinCode_validity_time_oCIOM_BB2_10P_oBackbone2_d8b8c81c_Tx 721
#define ComConf_ComSignal_PresetIndicationCmd_ISig_5_oCIOM_Cab_02P_oCabSubnet_ff89e7b8_Tx 722
#define ComConf_ComSignal_Pto1CabRequest_oCIOM_BB2_11P_oBackbone2_eff69840_Tx 723
#define ComConf_ComSignal_Pto1Status_ISig_5_oCIOM_Cab_09P_oCabSubnet_eabfdc10_Tx 724
#define ComConf_ComSignal_Pto2CabRequest_oCIOM_BB2_11P_oBackbone2_8b16e3be_Tx 725
#define ComConf_ComSignal_Pto2Status_ISig_5_oCIOM_Cab_09P_oCabSubnet_3924c0eb_Tx 726
#define ComConf_ComSignal_Pto3CabRequest_oCIOM_BB2_11P_oBackbone2_1e66372b_Tx 727
#define ComConf_ComSignal_Pto3Status_ISig_5_oCIOM_Cab_09P_oCabSubnet_77adcb42_Tx 728
#define ComConf_ComSignal_Pto4CabRequest_oCIOM_BB2_11P_oBackbone2_42d61442_Tx 729
#define ComConf_ComSignal_Pto4Status_ISig_5_oCIOM_Cab_09P_oCabSubnet_4563ff5c_Tx 730
#define ComConf_ComSignal_PtosStatus_ISig_5_oCIOM_Cab_03P_oCabSubnet_8328113c_Tx 731
#define ComConf_ComSignal_ROPBrakeControlActive_ISig_5_oCIOM_Cab_31P_oCabSubnet_81574730_Tx 732
#define ComConf_ComSignal_RampHeightOutsideTargetRange_ISig_5_oCIOM_Cab_10P_oCabSubnet_7af2eb58_Tx 733
#define ComConf_ComSignal_RampLevelRequest_ISig_4_oCIOM_BB2_03P_oBackbone2_26c4f794_Tx 734
#define ComConf_ComSignal_RampLevelStatus_ISig_5_oCIOM_Cab_10P_oCabSubnet_ac8c6dad_Tx 735
#define ComConf_ComSignal_RampLevelStorageRequest_ISig_4_oCIOM_BB2_03P_oBackbone2_002ea1c8_Tx 736
#define ComConf_ComSignal_RearAxleDiffLockActvnDrvrReq_ISig_3_oCIOM_BB1_01P_oBackbone1J1939_9d3c7d1c_Tx 737
#define ComConf_ComSignal_RearAxleSteeringFunctionDsbl_ISig_3_oCIOM_BB1_01P_oBackbone1J1939_1d5cff84_Tx 738
#define ComConf_ComSignal_RearEndPositionStatus_ISig_5_oCIOM_Cab_10P_oCabSubnet_6894d7e4_Tx 739
#define ComConf_ComSignal_Recirc_ButtonStatus_ISig_4_oCIOM_BB2_05P_oBackbone2_b540ab17_Tx 740
#define ComConf_ComSignal_ReducedLoadMode_stat_ISig_5_oCIOM_Cab_06P_oCabSubnet_2ec7b853_Tx 741
#define ComConf_ComSignal_ReducedSetMode_rqst_oCIOM_Sec_06S_oSecuritySubnet_a3c01e34_Tx 742
#define ComConf_ComSignal_RegenerationSwitchStatus_oCIOM_BB2_06P_oBackbone2_cf7b9d01_Tx 743
#define ComConf_ComSignal_RemoteParkingClimateRqst_ISig_5_oCIOM_Cab_22P_oCabSubnet_270b9661_Tx 744
#define ComConf_ComSignal_RetarderTorqueMode_fms_oERC1_x_RECUFMS_oFMSNet_24ddb8fa_Tx 745
#define ComConf_ComSignal_ReverseGearEngaged_ISig_5_oCIOM_Cab_01P_oCabSubnet_3dda661c_Tx 746
#define ComConf_ComSignal_ReverseWarning_rqst_ISig_4_oCIOM_BB2_02P_oBackbone2_e817f3e8_Tx 747
#define ComConf_ComSignal_RideHeightFunctionRequest_ISig_4_oCIOM_BB2_03P_oBackbone2_0a72da0d_Tx 748
#define ComConf_ComSignal_RideHeightFunctionStatus_ISig_5_oCIOM_Cab_10P_oCabSubnet_c33f7f13_Tx 749
#define ComConf_ComSignal_RideHeightOutsideTargetRange_ISig_5_oCIOM_Cab_10P_oCabSubnet_dcc10a6f_Tx 750
#define ComConf_ComSignal_RideHeightStatus_ISig_5_oCIOM_Cab_10P_oCabSubnet_3f041eec_Tx 751
#define ComConf_ComSignal_RideHeightStorageRequest_ISig_4_oCIOM_BB2_03P_oBackbone2_5cdc6278_Tx 752
#define ComConf_ComSignal_RollEndPositionStatus_ISig_5_oCIOM_Cab_10P_oCabSubnet_8a2b4163_Tx 753
#define ComConf_ComSignal_RoofHatch_HMI_rqst_oCIOM_BB2_10P_oBackbone2_40e0f043_Tx 754
#define ComConf_ComSignal_RrInterAxlDiffLockActvnDrvrReq_ISig_3_oCIOM_BB1_01P_oBackbone1J1939_791e0aea_Tx 755
#define ComConf_ComSignal_SCL_LogicPowerOutput_stat_oCIOM_BB2_10P_oBackbone2_2dac9e9c_Tx 756
#define ComConf_ComSignal_SEM_AudioMuteStat_ISig_5_oCIOM_Cab_27P_oCabSubnet_a74a9754_Tx 772
#define ComConf_ComSignal_SEM_AudioVolValIndCmd_ISig_5_oCIOM_Cab_27P_oCabSubnet_16acea7a_Tx 773
#define ComConf_ComSignal_SEM_DisplayText_stat_ISig_5_oCIOM_Cab_30S_oCabSubnet_bce281a4_Tx 774
#define ComConf_ComSignal_SEM_PresetIndicationCmd_ISig_5_oCIOM_Cab_27P_oCabSubnet_dba03c6f_Tx 775
#define ComConf_ComSignal_SRSAirbagStatus_ISig_4_oCIOM_BB2_11P_oBackbone2_b96617a1_Tx 776
#define ComConf_ComSignal_SeatSwivelWarning_rqst_oCIOM_BB2_11P_oBackbone2_d81917bb_Tx 777
#define ComConf_ComSignal_SecondsLocal_ISig_5_oCIOM_Cab_08P_oCabSubnet_1ee29350_Tx 778
#define ComConf_ComSignal_SecondsUTC_ISig_5_oCIOM_Cab_07P_oCabSubnet_303ccdc2_Tx 779
#define ComConf_ComSignal_SecondsUTC_ISig_10_oCIOM_Sec_02P_oSecuritySubnet_a66fab9c_Tx 780
#define ComConf_ComSignal_SelectedLanguage_stat_ISig_5_oCIOM_Cab_06P_oCabSubnet_f67c597e_Tx 781
#define ComConf_ComSignal_SelectedTimeFormat_stat_ISig_5_oCIOM_Cab_01P_oCabSubnet_a63cc027_Tx 782
#define ComConf_ComSignal_SelectedTimeFormat_stat_ISig_13_oCIOMtoSlaves2_FR2_L1_oLIN00_179d542e_Tx 783
#define ComConf_ComSignal_SelectedWeightUnit_stat_ISig_5_oCIOM_Cab_01P_oCabSubnet_046579f8_Tx 784
#define ComConf_ComSignal_ServiceBrakeAirPrsCircuit1_fms_oAIR1_X_CIOMFMS_oFMSNet_6b06ba72_Tx 785
#define ComConf_ComSignal_ServiceBrakeAirPrsCircuit2_fms_oAIR1_X_CIOMFMS_oFMSNet_ce0ed11e_Tx 786
#define ComConf_ComSignal_SetCMOperation_oCIOM_BB2_03P_oBackbone2_ac265db5_Tx 787
#define ComConf_ComSignal_SetFCWOperation_oCIOM_BB2_03P_oBackbone2_98202e42_Tx 788
#define ComConf_ComSignal_ShortStopHeater_cmd_ISig_4_oCIOM_BB2_25P_oBackbone2_73ac13a0_Tx 789
#define ComConf_ComSignal_ShortStopHeater_status_ISig_5_oCIOM_Cab_26P_oCabSubnet_48c587e4_Tx 790
#define ComConf_ComSignal_SplitBoxDifflockActvnDrvrRqst_ISig_4_oCIOM_BB2_10P_oBackbone2_79d941fa_Tx 791
#define ComConf_ComSignal_StatTrailerBrakeSwitchStatus_oCIOM_BB2_10P_oBackbone2_07dc986d_Tx 792
#define ComConf_ComSignal_StaticCornerLightMode_oCIOM_BB2_10P_oBackbone2_8db47c98_Tx 793
#define ComConf_ComSignal_SteeringWheelAngle_ISig_5_oCIOM_Cab_33P_oCabSubnet_2a3ac394_Tx 794
#define ComConf_ComSignal_StopLevelChangeRequest_ISig_4_oCIOM_BB2_03P_oBackbone2_5f7614ed_Tx 795
#define ComConf_ComSignal_SystemEvent_fms_oTCO1_X_CIOMFMS_oFMSNet_928072d3_Tx 796
#define ComConf_ComSignal_TCP_KnobPostionStatus_oCIOM_BB2_03P_oBackbone2_30f41f7f_Tx 797
#define ComConf_ComSignal_TCS_Indication_oMastertoTCP_oLIN02_27a40830_Tx 798
#define ComConf_ComSignal_TachographPerformance_fms_oTCO1_X_CIOMFMS_oFMSNet_c06209b0_Tx 799
#define ComConf_ComSignal_TachographVehicleSpeed_fms_oTCO1_X_CIOMFMS_oFMSNet_55c5be4c_Tx 800
#define ComConf_ComSignal_TailLiftConditionsStatus_ISig_5_oCIOM_Cab_26P_oCabSubnet_5afe5400_Tx 801
#define ComConf_ComSignal_TailLiftMotionRequest_ISig_4_oCIOM_BB2_25P_oBackbone2_bc7acd11_Tx 802
#define ComConf_ComSignal_TailLiftMotionStatus_ISig_5_oCIOM_Cab_26P_oCabSubnet_fee0b481_Tx 803
#define ComConf_ComSignal_TailLiftRemoteNotAllowed_ISig_5_oCIOM_Cab_26P_oCabSubnet_cd2fd412_Tx 804
#define ComConf_ComSignal_TemperatureRqstIndication_cmd_ISig_13_oCIOMtoSlaves2_FR1_L1_oLIN00_32a8dd01_Tx 805
#define ComConf_ComSignal_Temperature_FreeWheelStatus_ISig_4_oCIOM_BB2_05P_oBackbone2_61909f83_Tx 806
#define ComConf_ComSignal_TemporaryRSLDriverRequest_oCIOM_BB2_11P_oBackbone2_a5aa4a53_Tx 807
#define ComConf_ComSignal_TheftAlarmActivation_rqst_oCIOM_Sec_07S_oSecuritySubnet_cc025a3d_Tx 808
#define ComConf_ComSignal_TipperConditionsStatus_ISig_5_oCIOM_Cab_26P_oCabSubnet_23d8293b_Tx 809
#define ComConf_ComSignal_TipperEmergencyStopStatus_ISig_5_oCIOM_Cab_26P_oCabSubnet_fe93ac59_Tx 810
#define ComConf_ComSignal_TipperEmergencyStop_ISig_4_oCIOM_BB2_25P_oBackbone2_762d5bbb_Tx 811
#define ComConf_ComSignal_TipperPrimaryBodyStatus_ISig_5_oCIOM_Cab_26P_oCabSubnet_d5c92c1e_Tx 812
#define ComConf_ComSignal_TipperSecondaryBodyStatus_ISig_5_oCIOM_Cab_26P_oCabSubnet_2a8c20dd_Tx 813
#define ComConf_ComSignal_TipperShakerRequest_ISig_4_oCIOM_BB2_25P_oBackbone2_e3b3db21_Tx 814
#define ComConf_ComSignal_TipperShakerStatus_ISig_5_oCIOM_Cab_26P_oCabSubnet_327e8cb8_Tx 815
#define ComConf_ComSignal_TipperTailGateRequest_ISig_4_oCIOM_BB2_25P_oBackbone2_b84ca3dd_Tx 816
#define ComConf_ComSignal_TipperTailGateStatus_ISig_5_oCIOM_Cab_26P_oCabSubnet_13a86d07_Tx 817
#define ComConf_ComSignal_TipperTarpaulinRequest_ISig_4_oCIOM_BB2_25P_oBackbone2_ad13993b_Tx 818
#define ComConf_ComSignal_TipperTarpaulinStatus_ISig_5_oCIOM_Cab_26P_oCabSubnet_96bfc25a_Tx 819
#define ComConf_ComSignal_TipperTippingBodySelection_ISig_4_oCIOM_BB2_25P_oBackbone2_2905f6c3_Tx 820
#define ComConf_ComSignal_TipperUpDownRequest_ISig_4_oCIOM_BB2_25P_oBackbone2_30a4717c_Tx 821
#define ComConf_ComSignal_TipperUpDownStatus_ISig_5_oCIOM_Cab_26P_oCabSubnet_f3202adf_Tx 822
#define ComConf_ComSignal_TotalVehicleDistanceHiRes_fms_oVDHR_X_CIOMFMS_oFMSNet_d66ddec5_Tx 823
#define ComConf_ComSignal_TotalVehicleDistanceHighRes_ISig_5_oCIOM_Cab_09P_oCabSubnet_ad9ade1c_Tx 824
#define ComConf_ComSignal_TotalVehicleDistanceHighRes_ISig_10_oCIOM_Sec_03P_oSecuritySubnet_4ffff69c_Tx 825
#define ComConf_ComSignal_TractionControlDriverRqst_oCIOM_BB1_01P_oBackbone1J1939_42bdf92e_Tx 826
#define ComConf_ComSignal_TrafficAccidentHazardLightRqst_ISig_4_oCIOM_BB2_28P_oBackbone2_a28cd802_Tx 827
#define ComConf_ComSignal_Trailer1CalibratedCargoLoad_ISig_5_oCIOM_Cab_14P_oCabSubnet_7cddcf21_Tx 830
#define ComConf_ComSignal_Trailer1CalibratedTotalLoad_ISig_5_oCIOM_Cab_14P_oCabSubnet_4125ee6b_Tx 831
#define ComConf_ComSignal_Trailer1NumberOfAxles_ISig_5_oCIOM_Cab_14P_oCabSubnet_d96bdc0e_Tx 836
#define ComConf_ComSignal_Trailer1NumberOfFrontAxles_ISig_5_oCIOM_Cab_22P_oCabSubnet_9fd3a87d_Tx 837
#define ComConf_ComSignal_Trailer1Type_ISig_5_oCIOM_Cab_19P_oCabSubnet_5f4b8efe_Tx 838
#define ComConf_ComSignal_Trailer2CalibratedCargoLoad_ISig_5_oCIOM_Cab_15P_oCabSubnet_1b1e12b3_Tx 841
#define ComConf_ComSignal_Trailer2CalibratedTotalLoad_ISig_5_oCIOM_Cab_15P_oCabSubnet_26e633f9_Tx 842
#define ComConf_ComSignal_Trailer2NumberOfAxles_ISig_5_oCIOM_Cab_15P_oCabSubnet_84a7a93e_Tx 847
#define ComConf_ComSignal_Trailer2NumberOfFrontAxles_ISig_5_oCIOM_Cab_22P_oCabSubnet_1ae1ba89_Tx 848
#define ComConf_ComSignal_Trailer2Type_ISig_5_oCIOM_Cab_19P_oCabSubnet_052ab19e_Tx 849
#define ComConf_ComSignal_Trailer3CalibratedCargoLoad_ISig_5_oCIOM_Cab_16P_oCabSubnet_cf188270_Tx 852
#define ComConf_ComSignal_Trailer3CalibratedTotalLoad_ISig_5_oCIOM_Cab_16P_oCabSubnet_f2e0a33a_Tx 853
#define ComConf_ComSignal_Trailer3NumberOfAxles_ISig_5_oCIOM_Cab_16P_oCabSubnet_46a45e63_Tx 858
#define ComConf_ComSignal_Trailer3NumberOfFrontAxles_ISig_5_oCIOM_Cab_22P_oCabSubnet_d0df491a_Tx 859
#define ComConf_ComSignal_Trailer3Type_ISig_5_oCIOM_Cab_19P_oCabSubnet_85daa681_Tx 860
#define ComConf_ComSignal_Trailer4CalibratedCargoLoad_ISig_5_oCIOM_Cab_17P_oCabSubnet_d499a997_Tx 863
#define ComConf_ComSignal_Trailer4CalibratedTotalLoad_ISig_5_oCIOM_Cab_17P_oCabSubnet_e96188dd_Tx 864
#define ComConf_ComSignal_Trailer4NumberOfAxles_ISig_5_oCIOM_Cab_17P_oCabSubnet_3f3f435e_Tx 869
#define ComConf_ComSignal_Trailer4NumberOfFrontAxles_ISig_5_oCIOM_Cab_22P_oCabSubnet_cbf49920_Tx 870
#define ComConf_ComSignal_Trailer4Type_ISig_5_oCIOM_Cab_19P_oCabSubnet_b1e8cf5e_Tx 871
#define ComConf_ComSignal_Trailer5CalibratedCargoLoad_ISig_5_oCIOM_Cab_18P_oCabSubnet_9a2580af_Tx 874
#define ComConf_ComSignal_Trailer5CalibratedTotalLoad_ISig_5_oCIOM_Cab_18P_oCabSubnet_a7dda1e5_Tx 875
#define ComConf_ComSignal_Trailer5NumberOfAxles_ISig_5_oCIOM_Cab_18P_oCabSubnet_67860df8_Tx 880
#define ComConf_ComSignal_Trailer5NumberOfFrontAxles_ISig_5_oCIOM_Cab_22P_oCabSubnet_01ca6ab3_Tx 881
#define ComConf_ComSignal_Trailer5Type_ISig_5_oCIOM_Cab_19P_oCabSubnet_3118d841_Tx 882
#define ComConf_ComSignal_TrailerBodyLamp_rqst_oCIOM_BB2_01P_oBackbone2_9455a7cd_Tx 883
#define ComConf_ComSignal_TrailersConnected_ISig_5_oCIOM_Cab_06P_oCabSubnet_c4a66fe7_Tx 884
#define ComConf_ComSignal_VIN_rqst_ISig_4_oCIOM_BB2_01P_oBackbone2_f23ee95a_Tx 885
#define ComConf_ComSignal_VehFrontAxle1CalibratedLoad_ISig_5_oCIOM_Cab_21P_oCabSubnet_a652ecc4_Tx 886
#define ComConf_ComSignal_VehFrontAxle2CalibratedLoad_ISig_5_oCIOM_Cab_21P_oCabSubnet_1dd9f16b_Tx 887
#define ComConf_ComSignal_VehRearAxle1CalibratedLoad_ISig_5_oCIOM_Cab_19P_oCabSubnet_87f45712_Tx 888
#define ComConf_ComSignal_VehRearAxle2CalibratedLoad_ISig_5_oCIOM_Cab_19P_oCabSubnet_3c7f4abd_Tx 889
#define ComConf_ComSignal_VehRearAxle3CalibratedLoad_ISig_5_oCIOM_Cab_19P_oCabSubnet_550641d8_Tx 890
#define ComConf_ComSignal_VehicleCalibratedCargoLoad_ISig_5_oCIOM_Cab_21P_oCabSubnet_613b1eee_Tx 891
#define ComConf_ComSignal_VehicleCalibratedLoad_ISig_5_oCIOM_Cab_21P_oCabSubnet_7c0dbea7_Tx 892
#define ComConf_ComSignal_VehicleMode_ISig_5_oCIOM_Cab_02P_oCabSubnet_f8b15c56_Tx 893
#define ComConf_ComSignal_VehicleMode_ISig_10_oCIOM_Sec_01P_oSecuritySubnet_987d08af_Tx 894
#define ComConf_ComSignal_VehicleMotion_fms_oTCO1_X_CIOMFMS_oFMSNet_52a8ec35_Tx 895
#define ComConf_ComSignal_VehicleOverspeed_fms_oTCO1_X_CIOMFMS_oFMSNet_de4ffe0b_Tx 896
#define ComConf_ComSignal_WRCEngineStartRequest_ISig_4_oCIOM_BB2_06P_oBackbone2_c0b69331_Tx 897
#define ComConf_ComSignal_WRCEngineStopRequest_ISig_4_oCIOM_BB2_06P_oBackbone2_9fda4508_Tx 898
#define ComConf_ComSignal_WRC_Docking_stat_ISig_4_oCIOM_BB2_07P_oBackbone2_8c306c08_Tx 899
#define ComConf_ComSignal_WarmUp_Request_oCIOM_BB2_10P_oBackbone2_1ba31eb7_Tx 900
#define ComConf_ComSignal_Washing_HMI_rqst_ISig_5_oCIOM_Cab_03P_oCabSubnet_20fe605a_Tx 901
#define ComConf_ComSignal_WeightClass_oVP236_X_CIOMFMS_oFMSNet_5b59c350_Tx 902
#define ComConf_ComSignal_WheelBasedVehicleSpeedLowRes_ISig_10_oCIOM_Sec_03P_oSecuritySubnet_b2541ba7_Tx 903
#define ComConf_ComSignal_WheelBasedVehicleSpeed_ISig_5_oCIOM_Cab_02P_oCabSubnet_ba61b7d6_Tx 904
#define ComConf_ComSignal_WheelBasedVehicleSpeed_fms_oCCVS_X_CIOMFMS_oFMSNet_c6207f3e_Tx 905
#define ComConf_ComSignal_WindscreenDefrostInd_cmd_ISig_4_oCIOM_BB2_11P_oBackbone2_8059a5fc_Tx 906
#define ComConf_ComSignal_WindscreenDefrost_ButtonStatus_ISig_4_oCIOM_BB2_05P_oBackbone2_7acdd3a7_Tx 907
#define ComConf_ComSignal_WiperModeStatus_ISig_5_oCIOM_Cab_01P_oCabSubnet_ea88984b_Tx 908
#define ComConf_ComSignal_YCBrakeControlActive_ISig_5_oCIOM_Cab_31P_oCabSubnet_d8e5d6ed_Tx 909
#define ComConf_ComSignal_YearLocal_ISig_5_oCIOM_Cab_08P_oCabSubnet_cd44f792_Tx 910
#define ComConf_ComSignal_YearUTC_ISig_5_oCIOM_Cab_07P_oCabSubnet_caf125c7_Tx 911
#define ComConf_ComSignal_YearUTC_ISig_10_oCIOM_Sec_02P_oSecuritySubnet_d27276ec_Tx 912
/**\} */




/**
 * \defgroup ComHandleIdscomRxSigGrp Handle IDs of handle space comRxSigGrp.
 * \brief Rx SignalGroups
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComSignalGroup_SG_AlarmClockAlarms_stat_sg_ISig_4_oVMCU_BB2_111P_oBackbone2_87d755f9_Rx 0
#define ComConf_ComSignalGroup_SG_AlarmClockNotification_sg_ISig_4_oVMCU_BB2_110P_oBackbone2_002b7236_Rx 1
#define ComConf_ComSignalGroup_SG_AlmClkCurAlarm_stat_sg_oVMCU_BB2_111P_oBackbone2_d32c3631_Rx 2
#define ComConf_ComSignalGroup_SG_AlmClkSetAlm_LECM_rq_sg_ISig_5_oLECM1_Cab_03S_oCabSubnet_9633442f_Rx 3
#define ComConf_ComSignalGroup_SG_AlmClkSnze_LECM_rqst_sg_ISig_5_oLECM1_Cab_03S_oCabSubnet_c71f6f7a_Rx 4
#define ComConf_ComSignalGroup_SG_BnkH1IntLghtMMenu_stat_sg_oLECM1_Cab_02P_oCabSubnet_72949da5_Rx 5
#define ComConf_ComSignalGroup_SG_DiagFaultStat_Alarm_sg_ISig_10_oDiagFaultStat_Alarm_Sec_oSecuritySubnet_02bccd9c_Rx 6
#define ComConf_ComSignalGroup_SG_DiagFaultStat_CCM_sg_ISig_5_oDiagFaultStat_CCM_Cab_oCabSubnet_d96163f5_Rx 7
#define ComConf_ComSignalGroup_SG_DiagFaultStat_DDM_sg_ISig_10_oDiagFaultStat_DDM_Sec_oSecuritySubnet_40c5568a_Rx 8
#define ComConf_ComSignalGroup_SG_DiagFaultStat_LECM_sg_ISig_5_oDiagFaultStat_LECM_Cab_oCabSubnet_ef8b5dca_Rx 9
#define ComConf_ComSignalGroup_SG_DiagFaultStat_PDM_sg_ISig_10_oDiagFaultStat_PDM_Sec_oSecuritySubnet_e1b7ab04_Rx 10
#define ComConf_ComSignalGroup_SG_DiagFaultStat_SRS_sg_ISig_5_oDiagFaultStat_SRS_Cab_oCabSubnet_349d3897_Rx 11
#define ComConf_ComSignalGroup_SG_DiagFaultStat_WRCS_sg_ISig_5_oDiagFaultStat_WRCS_Cab_oCabSubnet_f309cde1_Rx 12
#define ComConf_ComSignalGroup_SG_ESCReqESC_sg_ISig_4_oVMCU_BB2_05P_oBackbone2_de20794e_Rx 13
#define ComConf_ComSignalGroup_SG_EngineTimer_stat_sg_ISig_5_oCCM_Cab_03P_oCabSubnet_7c0fa888_Rx 14
#define ComConf_ComSignalGroup_SG_FMS1_sg_ISig_3_oFMS1_X_HMIIOM_oBackbone1J1939_a2ca12fb_Rx 15
#define ComConf_ComSignalGroup_SG_FPBRMMIStat_sg_ISig_4_oVMCU_BB2_74P_oBackbone2_6ccb74d8_Rx 16
#define ComConf_ComSignalGroup_SG_GPSData_sg_ISig_4_56a_oHMIIOM_BB2_19P_CIOM_oBackbone2_b8f036f0_Rx 17
#define ComConf_ComSignalGroup_SG_IntLightMode_CoreRqst_sg_oVMCU_BB2_03P_oBackbone2_fb45020d_Rx 18
#define ComConf_ComSignalGroup_SG_LIN_AlmClkSetCurAlm_rqst_sg_oLECM2toCIOM_FR1_L1_oLIN00_05d68799_Rx 19
#define ComConf_ComSignalGroup_SG_LIN_BunkH2PHTi_rqs_sg_oLECM2toCIOM_FR3_L1_oLIN00_0bf5fe80_Rx 20
#define ComConf_ComSignalGroup_SG_MaintService_sg_ISig_4_576_oVMCU_BB2_57P_oBackbone2_deab6e21_Rx 21
#define ComConf_ComSignalGroup_SG_MediaSourcesListReq_sg_ISig_5_oLECM1_Cab_05S_oCabSubnet_5b546c8d_Rx 22
#define ComConf_ComSignalGroup_SG_MediaSourcesListRsp_sg_ISig_4_oHMIIOM_BB2_35S_oBackbone2_228311cf_Rx 23
#define ComConf_ComSignalGroup_SG_OilPrediction_sg_oEMS_BB2_06P_oBackbone2_f16954dd_Rx 24
#define ComConf_ComSignalGroup_SG_PHTimer1_stat_sg_ISig_5_oCCM_Cab_07P_oCabSubnet_cfd55945_Rx 25
#define ComConf_ComSignalGroup_SG_PHTimer2_stat_sg_ISig_5_oCCM_Cab_08P_oCabSubnet_c2193cf8_Rx 26
#define ComConf_ComSignalGroup_SG_PHTimer3_stat_sg_ISig_5_oCCM_Cab_08P_oCabSubnet_6d5daebf_Rx 27
#define ComConf_ComSignalGroup_SG_PHTimerRqstAck_sg_ISig_4_oVMCU_BB2_110P_oBackbone2_4a177568_Rx 28
#define ComConf_ComSignalGroup_SG_PHTimer_rqst_sg_ISig_5_oCCM_Cab_04P_oCabSubnet_07cedbc3_Rx 29
#define ComConf_ComSignalGroup_SG_SEMMediaSourceAvail_sg_ISig_4_oHMIIOM_BB2_33P_oBackbone2_48aa2a68_Rx 30
#define ComConf_ComSignalGroup_SG_SRS2_SNPN_sg_oSRS_Cab_05P_oCabSubnet_88a03d04_Rx 31
#define ComConf_ComSignalGroup_SG_SRS2_SN_sg_oSRS_Cab_06P_oCabSubnet_2ae9bc12_Rx 32
#define ComConf_ComSignalGroup_SG_SetParkClimTimerRqst_sg_ISig_4_oIC3_BB2_01S_oBackbone2_387c2033_Rx 33
#define ComConf_ComSignalGroup_SG_Trail1Type_sg_ISig_4_oVMCU_BB2_91P_oBackbone2_89bdedd2_Rx 34
#define ComConf_ComSignalGroup_SG_Trail2Type_sg_ISig_4_oVMCU_BB2_91P_oBackbone2_a3015d5a_Rx 35
#define ComConf_ComSignalGroup_SG_Trail3Type_sg_ISig_4_oVMCU_BB2_92P_oBackbone2_b18fa3d3_Rx 36
#define ComConf_ComSignalGroup_SG_Trail4Type_sg_ISig_4_oVMCU_BB2_92P_oBackbone2_4bb25084_Rx 37
#define ComConf_ComSignalGroup_SG_Trail5Type_sg_ISig_4_oVMCU_BB2_92P_oBackbone2_e4f6c2c3_Rx 38
#define ComConf_ComSignalGroup_SG_UpdParkClimTimerRqst_sg_ISig_4_oIC3_BB2_03S_oBackbone2_a903d549_Rx 39
/**\} */

/**
 * \defgroup ComHandleIdscomTxSigGrp Handle IDs of handle space comTxSigGrp.
 * \brief Tx SignalGroups
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComSignalGroup_SG_AlarmClockAlarms_stat_sg_ISig_5_oCIOM_Cab_12P_oCabSubnet_65974d30_Tx 0
#define ComConf_ComSignalGroup_SG_AlarmClockNotification_sg_ISig_5_oCIOM_Cab_12P_oCabSubnet_0ab61cce_Tx 1
#define ComConf_ComSignalGroup_SG_AlarmClockNotification_sg_oCIOMtoSlaves2_FR2_L1_oLIN00_9f1f08ee_Tx 2
#define ComConf_ComSignalGroup_SG_AlmClkSetAlm_LECM_rq_sg_ISig_4_oCIOM_BB2_26S_oBackbone2_1715b1c8_Tx 3
#define ComConf_ComSignalGroup_SG_AlmClkSetCurAlm_rqst_sg_oCIOM_BB2_07P_oBackbone2_f140587b_Tx 4
#define ComConf_ComSignalGroup_SG_AlmClkSnze_LECM_rqst_sg_ISig_4_oCIOM_BB2_07P_oBackbone2_ae581121_Tx 5
#define ComConf_ComSignalGroup_SG_BunkH2PHTimer_rqst_sg_oCIOM_Cab_03P_oCabSubnet_42802d2c_Tx 6
#define ComConf_ComSignalGroup_SG_DiagFaultStat_Alarm_sg_ISig_4_oDiagFaultStat_Alarm_BB2_oBackbone2_c2cd4381_Tx 7
#define ComConf_ComSignalGroup_SG_DiagFaultStat_CCM_sg_ISig_4_oDiagFaultStat_CCM_BB2_oBackbone2_5f0f05a1_Tx 8
#define ComConf_ComSignalGroup_SG_DiagFaultStat_CIOM_sg_ISig_4_oDiagFaultStat_CIOM_BB2_oBackbone2_017e7c1d_Tx 9
#define ComConf_ComSignalGroup_SG_DiagFaultStat_DDM_sg_ISig_4_oDiagFaultStat_DDM_BB2_oBackbone2_ffa0814c_Tx 10
#define ComConf_ComSignalGroup_SG_DiagFaultStat_LECM_sg_ISig_4_oDiagFaultStat_LECM_BB2_oBackbone2_330bf8c3_Tx 11
#define ComConf_ComSignalGroup_SG_DiagFaultStat_PDM_sg_ISig_4_oDiagFaultStat_PDM_BB2_oBackbone2_851b8892_Tx 12
#define ComConf_ComSignalGroup_SG_DiagFaultStat_SRS_sg_ISig_4_oDiagFaultStat_SRS_BB2_oBackbone2_b2f35ec3_Tx 13
#define ComConf_ComSignalGroup_SG_DiagFaultStat_WRCS_sg_ISig_4_oDiagFaultStat_WRCS_BB2_oBackbone2_2f8968e8_Tx 14
#define ComConf_ComSignalGroup_SG_ESCReqESC_sg_ISig_5_oCIOM_Cab_12P_oCabSubnet_e9a9ec80_Tx 15
#define ComConf_ComSignalGroup_SG_EngTimerGUIEvCmd_sg_ISig_5_oCIOM_Cab_04S_oCabSubnet_69583ac8_Tx 16
#define ComConf_ComSignalGroup_SG_FMS1_fms_sg_oFMS1_X_CIOMFMS_oFMSNet_6429d2e7_Tx 17
#define ComConf_ComSignalGroup_SG_GPSData_sg_ISig_5_oCIOM_Cab_34P_oCabSubnet_428a7346_Tx 18
#define ComConf_ComSignalGroup_SG_IntLghtModeInd_cmd_sg_oCIOM_Cab_02P_oCabSubnet_e1f7186f_Tx 19
#define ComConf_ComSignalGroup_SG_InteriorLightMode_rqst_sg_oCIOM_BB2_05P_oBackbone2_84c022f2_Tx 20
#define ComConf_ComSignalGroup_SG_LIN_AlmClkCurAlarm_stat_sg_oCIOMtoSlaves2_FR2_L1_oLIN00_ff5b96ab_Tx 21
#define ComConf_ComSignalGroup_SG_LIN_IntLghtModeInd_cmd_sg_oCIOMtoSlaves2_FR1_L1_oLIN00_daaab64c_Tx 22
#define ComConf_ComSignalGroup_SG_LevelRequest_sg_ISig_4_oCIOM_BB2_03P_oBackbone2_4410d8a6_Tx 23
#define ComConf_ComSignalGroup_SG_MediaSourcesListReq_sg_ISig_4_oCIOM_BB2_27S_oBackbone2_9590fc58_Tx 24
#define ComConf_ComSignalGroup_SG_MediaSourcesListRsp_sg_ISig_5_oCIOM_Cab_29S_oCabSubnet_77e75ab1_Tx 25
#define ComConf_ComSignalGroup_SG_PHTimer1_stat_sg_oCIOMtoSlaves2_FR3_L1_oLIN00_c28f55ea_Tx 26
#define ComConf_ComSignalGroup_SG_PHTimerGUIEvCmd_sg_ISig_5_oCIOM_Cab_05S_oCabSubnet_3897fb2e_Tx 27
#define ComConf_ComSignalGroup_SG_PHTimerRqstAck_sg_ISig_5_oCIOM_Cab_23P_oCabSubnet_48e3fff4_Tx 28
#define ComConf_ComSignalGroup_SG_PHTimerTGWEvCmd_sg_ISig_5_oCIOM_Cab_25S_oCabSubnet_5a8bf55a_Tx 29
#define ComConf_ComSignalGroup_SG_PHTimer_rqst_sg_ISig_4_oCIOM_BB2_20S_oBackbone2_2764e3f9_Tx 30
#define ComConf_ComSignalGroup_SG_ParkClimTimerStat_sg_ISig_4_oCIOM_BB2_31S_oBackbone2_0f087725_Tx 31
#define ComConf_ComSignalGroup_SG_SEMMediaSourceAvail_sg_ISig_5_oCIOM_Cab_27P_oCabSubnet_eb195eb2_Tx 32
#define ComConf_ComSignalGroup_SG_Trailer1CalAxleLoad_sg_ISig_5_oCIOM_Cab_14P_oCabSubnet_de5e4d08_Tx 33
#define ComConf_ComSignalGroup_SG_Trailer1LiftAxles_sg_ISig_5_oCIOM_Cab_24P_oCabSubnet_f5463d21_Tx 34
#define ComConf_ComSignalGroup_SG_Trailer2CalAxleLoad_sg_ISig_5_oCIOM_Cab_15P_oCabSubnet_b8438922_Tx 35
#define ComConf_ComSignalGroup_SG_Trailer2LiftAxles_sg_ISig_5_oCIOM_Cab_24P_oCabSubnet_ca8d43b4_Tx 36
#define ComConf_ComSignalGroup_SG_Trailer3CalAxleLoad_sg_ISig_5_oCIOM_Cab_16P_oCabSubnet_6cf0ee89_Tx 37
#define ComConf_ComSignalGroup_SG_Trailer3LiftAxles_sg_ISig_5_oCIOM_Cab_24P_oCabSubnet_691b6bf8_Tx 38
#define ComConf_ComSignalGroup_SG_Trailer4CalAxleLoad_sg_ISig_5_oCIOM_Cab_17P_oCabSubnet_74780176_Tx 39
#define ComConf_ComSignalGroup_SG_Trailer4LiftAxles_sg_ISig_5_oCIOM_Cab_24P_oCabSubnet_b51bbe9e_Tx 40
#define ComConf_ComSignalGroup_SG_Trailer5CalAxleLoad_sg_ISig_5_oCIOM_Cab_18P_oCabSubnet_3a71df26_Tx 41
#define ComConf_ComSignalGroup_SG_Trailer5LiftAxles_sg_ISig_5_oCIOM_Cab_24P_oCabSubnet_168d96d2_Tx 42
/**\} */




/**
 * \defgroup ComHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPduGroup_CIOM_oBackbone1J1939_Rx_BC_405bc776      0
#define ComConf_ComIPduGroup_CIOM_oBackbone1J1939_Tx_0x31_BC_3782f500 1
#define ComConf_ComIPduGroup_CIOM_oBackbone2_Rx_4e624434              2
#define ComConf_ComIPduGroup_CIOM_oBackbone2_Tx_1838e3b2              3
#define ComConf_ComIPduGroup_CIOM_oCabSubnet_Rx_063a5fbc              4
#define ComConf_ComIPduGroup_CIOM_oCabSubnet_Tx_5060f83a              5
#define ComConf_ComIPduGroup_CIOM_oFMSNet_Rx_BC_dd2c1510              6
#define ComConf_ComIPduGroup_CIOM_oFMSNet_Tx_0x0F_BC_89b46e88         7
#define ComConf_ComIPduGroup_CIOM_oFMSNet_Tx_0x10_BC_fa80b878         8
#define ComConf_ComIPduGroup_CIOM_oFMSNet_Tx_0x31_BC_38fc8c7d         9
#define ComConf_ComIPduGroup_CIOM_oLIN00_Rx_dd181faa                  10
#define ComConf_ComIPduGroup_CIOM_oLIN00_Tx_8b42b82c                  11
#define ComConf_ComIPduGroup_CIOM_oLIN01_Rx_65a478cf                  12
#define ComConf_ComIPduGroup_CIOM_oLIN01_Tx_33fedf49                  13
#define ComConf_ComIPduGroup_CIOM_oLIN02_Rx_7711d721                  14
#define ComConf_ComIPduGroup_CIOM_oLIN02_Tx_214b70a7                  15
#define ComConf_ComIPduGroup_CIOM_oLIN03_Rx_cfadb044                  16
#define ComConf_ComIPduGroup_CIOM_oLIN03_Tx_99f717c2                  17
#define ComConf_ComIPduGroup_CIOM_oLIN04_Rx_527a88fd                  18
#define ComConf_ComIPduGroup_CIOM_oLIN04_Tx_04202f7b                  19
#define ComConf_ComIPduGroup_CIOM_oSecuritySubnet_Rx_3a3c1dbc         20
#define ComConf_ComIPduGroup_CIOM_oSecuritySubnet_Tx_6c66ba3a         21
/**\} */

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  ComPCGetConstantDuplicatedRootDataMacros  Com Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define Com_GetActivatableRxComIPdusOfPCConfig()                      Com_ActivatableRxComIPdus  /**< the pointer to Com_ActivatableRxComIPdus */
#define Com_GetActivatableTxComIPdusOfPCConfig()                      Com_ActivatableTxComIPdus  /**< the pointer to Com_ActivatableTxComIPdus */
#define Com_GetCbkRxTOutFuncPtrIndOfPCConfig()                        Com_CbkRxTOutFuncPtrInd  /**< the pointer to Com_CbkRxTOutFuncPtrInd */
#define Com_GetCbkRxTOutFuncPtrOfPCConfig()                           Com_CbkRxTOutFuncPtr  /**< the pointer to Com_CbkRxTOutFuncPtr */
#define Com_GetCbkTxTOutFuncPtrIndOfPCConfig()                        Com_CbkTxTOutFuncPtrInd  /**< the pointer to Com_CbkTxTOutFuncPtrInd */
#define Com_GetCbkTxTOutFuncPtrOfPCConfig()                           Com_CbkTxTOutFuncPtr  /**< the pointer to Com_CbkTxTOutFuncPtr */
#define Com_GetConfigIdOfPCConfig()                                   0UL  /**< DefinitionRef: /MICROSAR/Com/ComConfig/ComConfigurationId */
#define Com_GetConstValueArrayBasedOfPCConfig()                       Com_ConstValueArrayBased  /**< the pointer to Com_ConstValueArrayBased */
#define Com_GetConstValueSInt16OfPCConfig()                           Com_ConstValueSInt16  /**< the pointer to Com_ConstValueSInt16 */
#define Com_GetConstValueUInt16OfPCConfig()                           Com_ConstValueUInt16  /**< the pointer to Com_ConstValueUInt16 */
#define Com_GetConstValueUInt32OfPCConfig()                           Com_ConstValueUInt32  /**< the pointer to Com_ConstValueUInt32 */
#define Com_GetConstValueUInt8OfPCConfig()                            Com_ConstValueUInt8  /**< the pointer to Com_ConstValueUInt8 */
#define Com_GetCurrentTxModeOfPCConfig()                              Com_CurrentTxMode  /**< the pointer to Com_CurrentTxMode */
#define Com_GetCycleTimeCntOfPCConfig()                               Com_CycleTimeCnt  /**< the pointer to Com_CycleTimeCnt */
#define Com_GetCyclicSendRequestOfPCConfig()                          Com_CyclicSendRequest  /**< the pointer to Com_CyclicSendRequest */
#define Com_GetDelayTimeCntOfPCConfig()                               Com_DelayTimeCnt  /**< the pointer to Com_DelayTimeCnt */
#define Com_GetFilterInfo_UInt16OfPCConfig()                          Com_FilterInfo_UInt16  /**< the pointer to Com_FilterInfo_UInt16 */
#define Com_GetFilterInfo_UInt8OfPCConfig()                           Com_FilterInfo_UInt8  /**< the pointer to Com_FilterInfo_UInt8 */
#define Com_GetGatewayDescriptionProcessingISRLockCounterOfPCConfig() Com_GatewayDescriptionProcessingISRLockCounter  /**< the pointer to Com_GatewayDescriptionProcessingISRLockCounter */
#define Com_GetGatewayProcessingISRLockCounterOfPCConfig()            Com_GatewayProcessingISRLockCounter  /**< the pointer to Com_GatewayProcessingISRLockCounter */
#define Com_GetGatewayProcessingISRLockThresholdOfPCConfig()          1U
#define Com_GetGwEventCacheIndexOfPCConfig()                          Com_GwEventCacheIndex  /**< the pointer to Com_GwEventCacheIndex */
#define Com_GetGwEventOfPCConfig()                                    Com_GwEvent  /**< the pointer to Com_GwEvent */
#define Com_GetGwGrpSigMappingOfPCConfig()                            Com_GwGrpSigMapping  /**< the pointer to Com_GwGrpSigMapping */
#define Com_GetGwInfoOfPCConfig()                                     Com_GwInfo  /**< the pointer to Com_GwInfo */
#define Com_GetGwSigGrpMappingOfPCConfig()                            Com_GwSigGrpMapping  /**< the pointer to Com_GwSigGrpMapping */
#define Com_GetGwSigMappingOfPCConfig()                               Com_GwSigMapping  /**< the pointer to Com_GwSigMapping */
#define Com_GetHandleRxPduDeferredOfPCConfig()                        Com_HandleRxPduDeferred.raw  /**< the pointer to Com_HandleRxPduDeferred */
#define Com_GetHandleTxPduDeferredOfPCConfig()                        Com_HandleTxPduDeferred  /**< the pointer to Com_HandleTxPduDeferred */
#define Com_GetInitializedOfPCConfig()                                Com_Initialized  /**< the pointer to Com_Initialized */
#define Com_GetPduGrpCntOfPCConfig()                                  22UL
#define Com_GetPduGrpVectorOfPCConfig()                               Com_PduGrpVector  /**< the pointer to Com_PduGrpVector */
#define Com_GetRepCntOfPCConfig()                                     Com_RepCnt  /**< the pointer to Com_RepCnt */
#define Com_GetRepCycleCntOfPCConfig()                                Com_RepCycleCnt  /**< the pointer to Com_RepCycleCnt */
#define Com_GetRxAccessInfoGrpSigIndOfPCConfig()                      Com_RxAccessInfoGrpSigInd  /**< the pointer to Com_RxAccessInfoGrpSigInd */
#define Com_GetRxAccessInfoIndOfPCConfig()                            Com_RxAccessInfoInd  /**< the pointer to Com_RxAccessInfoInd */
#define Com_GetRxAccessInfoOfPCConfig()                               Com_RxAccessInfo  /**< the pointer to Com_RxAccessInfo */
#define Com_GetRxCbkFuncPtrOfPCConfig()                               Com_RxCbkFuncPtr  /**< the pointer to Com_RxCbkFuncPtr */
#define Com_GetRxDeadlineMonitoringISRLockCounterOfPCConfig()         Com_RxDeadlineMonitoringISRLockCounter  /**< the pointer to Com_RxDeadlineMonitoringISRLockCounter */
#define Com_GetRxDeadlineMonitoringISRLockThresholdOfPCConfig()       1U
#define Com_GetRxDefPduBufferOfPCConfig()                             Com_RxDefPduBuffer.raw  /**< the pointer to Com_RxDefPduBuffer */
#define Com_GetRxDeferredFctPtrCacheOfPCConfig()                      Com_RxDeferredFctPtrCache  /**< the pointer to Com_RxDeferredFctPtrCache */
#define Com_GetRxDeferredProcessingISRLockCounterOfPCConfig()         Com_RxDeferredProcessingISRLockCounter  /**< the pointer to Com_RxDeferredProcessingISRLockCounter */
#define Com_GetRxDeferredProcessingISRLockThresholdOfPCConfig()       1U
#define Com_GetRxDynSignalLengthOfPCConfig()                          Com_RxDynSignalLength.raw  /**< the pointer to Com_RxDynSignalLength */
#define Com_GetRxDynSignalTmpLengthForSignalGroupsOfPCConfig()        Com_RxDynSignalTmpLengthForSignalGroups.raw  /**< the pointer to Com_RxDynSignalTmpLengthForSignalGroups */
#define Com_GetRxIPduGroupISRLockCounterOfPCConfig()                  Com_RxIPduGroupISRLockCounter  /**< the pointer to Com_RxIPduGroupISRLockCounter */
#define Com_GetRxIPduGroupISRLockThresholdOfPCConfig()                1U
#define Com_GetRxPduDmStateOfPCConfig()                               Com_RxPduDmState  /**< the pointer to Com_RxPduDmState */
#define Com_GetRxPduGrpActiveOfPCConfig()                             Com_RxPduGrpActive  /**< the pointer to Com_RxPduGrpActive */
#define Com_GetRxPduGrpInfoOfPCConfig()                               Com_RxPduGrpInfo  /**< the pointer to Com_RxPduGrpInfo */
#define Com_GetRxPduInfoOfPCConfig()                                  Com_RxPduInfo  /**< the pointer to Com_RxPduInfo */
#define Com_GetRxSigBufferArrayBasedOfPCConfig()                      Com_RxSigBufferArrayBased  /**< the pointer to Com_RxSigBufferArrayBased */
#define Com_GetRxSigBufferSInt16OfPCConfig()                          Com_RxSigBufferSInt16  /**< the pointer to Com_RxSigBufferSInt16 */
#define Com_GetRxSigBufferUInt16OfPCConfig()                          Com_RxSigBufferUInt16  /**< the pointer to Com_RxSigBufferUInt16 */
#define Com_GetRxSigBufferUInt32OfPCConfig()                          Com_RxSigBufferUInt32  /**< the pointer to Com_RxSigBufferUInt32 */
#define Com_GetRxSigBufferUInt8OfPCConfig()                           Com_RxSigBufferUInt8  /**< the pointer to Com_RxSigBufferUInt8 */
#define Com_GetRxSigGrpInfoIndOfPCConfig()                            Com_RxSigGrpInfoInd  /**< the pointer to Com_RxSigGrpInfoInd */
#define Com_GetRxSigGrpInfoOfPCConfig()                               Com_RxSigGrpInfo  /**< the pointer to Com_RxSigGrpInfo */
#define Com_GetRxSigInfoOfPCConfig()                                  Com_RxSigInfo  /**< the pointer to Com_RxSigInfo */
#define Com_GetRxTOutCntOfPCConfig()                                  Com_RxTOutCnt  /**< the pointer to Com_RxTOutCnt */
#define Com_GetRxTOutInfoIndOfPCConfig()                              Com_RxTOutInfoInd  /**< the pointer to Com_RxTOutInfoInd */
#define Com_GetRxTOutInfoOfPCConfig()                                 Com_RxTOutInfo  /**< the pointer to Com_RxTOutInfo */
#define Com_GetRxTpBufferOfPCConfig()                                 Com_RxTpBuffer.raw  /**< the pointer to Com_RxTpBuffer */
#define Com_GetRxTpConnectionStateOfPCConfig()                        Com_RxTpConnectionState.raw  /**< the pointer to Com_RxTpConnectionState */
#define Com_GetRxTpInfoOfPCConfig()                                   Com_RxTpInfo  /**< the pointer to Com_RxTpInfo */
#define Com_GetRxTpSduLengthOfPCConfig()                              Com_RxTpSduLength.raw  /**< the pointer to Com_RxTpSduLength */
#define Com_GetRxTpWrittenBytesCounterOfPCConfig()                    Com_RxTpWrittenBytesCounter.raw  /**< the pointer to Com_RxTpWrittenBytesCounter */
#define Com_GetSigGrpEventFlagOfPCConfig()                            Com_SigGrpEventFlag  /**< the pointer to Com_SigGrpEventFlag */
#define Com_GetSizeOfActivatableRxComIPdusOfPCConfig()                203UL  /**< the number of accomplishable value elements in Com_ActivatableRxComIPdus */
#define Com_GetSizeOfActivatableTxComIPdusOfPCConfig()                151UL  /**< the number of accomplishable value elements in Com_ActivatableTxComIPdus */
#define Com_GetSizeOfCbkRxTOutFuncPtrIndOfPCConfig()                  12UL  /**< the number of accomplishable value elements in Com_CbkRxTOutFuncPtrInd */
#define Com_GetSizeOfCbkRxTOutFuncPtrOfPCConfig()                     12UL  /**< the number of accomplishable value elements in Com_CbkRxTOutFuncPtr */
#define Com_GetSizeOfCbkTxTOutFuncPtrIndOfPCConfig()                  9UL  /**< the number of accomplishable value elements in Com_CbkTxTOutFuncPtrInd */
#define Com_GetSizeOfCbkTxTOutFuncPtrOfPCConfig()                     9UL  /**< the number of accomplishable value elements in Com_CbkTxTOutFuncPtr */
#define Com_GetSizeOfConstValueArrayBasedOfPCConfig()                 128UL  /**< the number of accomplishable value elements in Com_ConstValueArrayBased */
#define Com_GetSizeOfConstValueSInt16OfPCConfig()                     1UL  /**< the number of accomplishable value elements in Com_ConstValueSInt16 */
#define Com_GetSizeOfConstValueUInt16OfPCConfig()                     3UL  /**< the number of accomplishable value elements in Com_ConstValueUInt16 */
#define Com_GetSizeOfConstValueUInt32OfPCConfig()                     2UL  /**< the number of accomplishable value elements in Com_ConstValueUInt32 */
#define Com_GetSizeOfConstValueUInt8OfPCConfig()                      203UL  /**< the number of accomplishable value elements in Com_ConstValueUInt8 */
#define Com_GetSizeOfFilterInfo_UInt16OfPCConfig()                    1UL  /**< the number of accomplishable value elements in Com_FilterInfo_UInt16 */
#define Com_GetSizeOfFilterInfo_UInt8OfPCConfig()                     1UL  /**< the number of accomplishable value elements in Com_FilterInfo_UInt8 */
#define Com_GetSizeOfGwGrpSigMappingOfPCConfig()                      97UL  /**< the number of accomplishable value elements in Com_GwGrpSigMapping */
#define Com_GetSizeOfGwInfoOfPCConfig()                               86UL  /**< the number of accomplishable value elements in Com_GwInfo */
#define Com_GetSizeOfGwSigGrpMappingOfPCConfig()                      18UL  /**< the number of accomplishable value elements in Com_GwSigGrpMapping */
#define Com_GetSizeOfGwSigMappingOfPCConfig()                         169UL  /**< the number of accomplishable value elements in Com_GwSigMapping */
#define Com_GetSizeOfHandleRxPduDeferredOfPCConfig()                  203UL  /**< the number of accomplishable value elements in Com_HandleRxPduDeferred */
#define Com_GetSizeOfPduGrpVectorOfPCConfig()                         22UL  /**< the number of accomplishable value elements in Com_PduGrpVector */
#define Com_GetSizeOfRxAccessInfoGrpSigIndOfPCConfig()                214UL  /**< the number of accomplishable value elements in Com_RxAccessInfoGrpSigInd */
#define Com_GetSizeOfRxAccessInfoIndOfPCConfig()                      876UL  /**< the number of accomplishable value elements in Com_RxAccessInfoInd */
#define Com_GetSizeOfRxAccessInfoOfPCConfig()                         876UL  /**< the number of accomplishable value elements in Com_RxAccessInfo */
#define Com_GetSizeOfRxCbkFuncPtrOfPCConfig()                         191UL  /**< the number of accomplishable value elements in Com_RxCbkFuncPtr */
#define Com_GetSizeOfRxDefPduBufferOfPCConfig()                       1852UL  /**< the number of accomplishable value elements in Com_RxDefPduBuffer */
#define Com_GetSizeOfRxDeferredFctPtrCacheOfPCConfig()                1UL  /**< the number of accomplishable value elements in Com_RxDeferredFctPtrCache */
#define Com_GetSizeOfRxPduGrpInfoOfPCConfig()                         203UL  /**< the number of accomplishable value elements in Com_RxPduGrpInfo */
#define Com_GetSizeOfRxPduInfoOfPCConfig()                            203UL  /**< the number of accomplishable value elements in Com_RxPduInfo */
#define Com_GetSizeOfRxSigBufferArrayBasedOfPCConfig()                721UL  /**< the number of accomplishable value elements in Com_RxSigBufferArrayBased */
#define Com_GetSizeOfRxSigBufferSInt16OfPCConfig()                    14UL  /**< the number of accomplishable value elements in Com_RxSigBufferSInt16 */
#define Com_GetSizeOfRxSigBufferUInt16OfPCConfig()                    115UL  /**< the number of accomplishable value elements in Com_RxSigBufferUInt16 */
#define Com_GetSizeOfRxSigBufferUInt32OfPCConfig()                    35UL  /**< the number of accomplishable value elements in Com_RxSigBufferUInt32 */
#define Com_GetSizeOfRxSigBufferUInt8OfPCConfig()                     892UL  /**< the number of accomplishable value elements in Com_RxSigBufferUInt8 */
#define Com_GetSizeOfRxSigGrpInfoIndOfPCConfig()                      40UL  /**< the number of accomplishable value elements in Com_RxSigGrpInfoInd */
#define Com_GetSizeOfRxSigGrpInfoOfPCConfig()                         40UL  /**< the number of accomplishable value elements in Com_RxSigGrpInfo */
#define Com_GetSizeOfRxSigInfoOfPCConfig()                            662UL  /**< the number of accomplishable value elements in Com_RxSigInfo */
#define Com_GetSizeOfRxTOutInfoIndOfPCConfig()                        3UL  /**< the number of accomplishable value elements in Com_RxTOutInfoInd */
#define Com_GetSizeOfRxTOutInfoOfPCConfig()                           3UL  /**< the number of accomplishable value elements in Com_RxTOutInfo */
#define Com_GetSizeOfRxTpBufferOfPCConfig()                           472UL  /**< the number of accomplishable value elements in Com_RxTpBuffer */
#define Com_GetSizeOfRxTpInfoOfPCConfig()                             23UL  /**< the number of accomplishable value elements in Com_RxTpInfo */
#define Com_GetSizeOfTmpRxBufferOfPCConfig()                          128UL  /**< the number of accomplishable value elements in Com_TmpRxBuffer */
#define Com_GetSizeOfTmpRxShdBufferArrayBasedOfPCConfig()             96UL  /**< the number of accomplishable value elements in Com_TmpRxShdBufferArrayBased */
#define Com_GetSizeOfTmpRxShdBufferUInt16OfPCConfig()                 4UL  /**< the number of accomplishable value elements in Com_TmpRxShdBufferUInt16 */
#define Com_GetSizeOfTmpRxShdBufferUInt32OfPCConfig()                 3UL  /**< the number of accomplishable value elements in Com_TmpRxShdBufferUInt32 */
#define Com_GetSizeOfTmpRxShdBufferUInt8OfPCConfig()                  16UL  /**< the number of accomplishable value elements in Com_TmpRxShdBufferUInt8 */
#define Com_GetSizeOfTxBufferOfPCConfig()                             1833UL  /**< the number of accomplishable value elements in Com_TxBuffer */
#define Com_GetSizeOfTxFilterInitValueUInt16OfPCConfig()              2UL  /**< the number of accomplishable value elements in Com_TxFilterInitValueUInt16 */
#define Com_GetSizeOfTxFilterInitValueUInt8OfPCConfig()               3UL  /**< the number of accomplishable value elements in Com_TxFilterInitValueUInt8 */
#define Com_GetSizeOfTxModeFalseOfPCConfig()                          56UL  /**< the number of accomplishable value elements in Com_TxModeFalse */
#define Com_GetSizeOfTxModeInfoOfPCConfig()                           151UL  /**< the number of accomplishable value elements in Com_TxModeInfo */
#define Com_GetSizeOfTxModeTrueOfPCConfig()                           56UL  /**< the number of accomplishable value elements in Com_TxModeTrue */
#define Com_GetSizeOfTxPduGrpInfoOfPCConfig()                         151UL  /**< the number of accomplishable value elements in Com_TxPduGrpInfo */
#define Com_GetSizeOfTxPduInfoOfPCConfig()                            151UL  /**< the number of accomplishable value elements in Com_TxPduInfo */
#define Com_GetSizeOfTxPduInitValueOfPCConfig()                       1529UL  /**< the number of accomplishable value elements in Com_TxPduInitValue */
#define Com_GetSizeOfTxSigGrpInfoIndOfPCConfig()                      43UL  /**< the number of accomplishable value elements in Com_TxSigGrpInfoInd */
#define Com_GetSizeOfTxSigGrpInfoOfPCConfig()                         43UL  /**< the number of accomplishable value elements in Com_TxSigGrpInfo */
#define Com_GetSizeOfTxSigGrpMaskOfPCConfig()                         173UL  /**< the number of accomplishable value elements in Com_TxSigGrpMask */
#define Com_GetSizeOfTxSigInfoFilterInitValueIndOfPCConfig()          5UL  /**< the number of accomplishable value elements in Com_TxSigInfoFilterInitValueInd */
#define Com_GetSizeOfTxSigInfoOfPCConfig()                            913UL  /**< the number of accomplishable value elements in Com_TxSigInfo */
#define Com_GetSizeOfTxTOutCntOfPCConfig()                            3UL  /**< the number of accomplishable value elements in Com_TxTOutCnt */
#define Com_GetSizeOfTxTOutInfoOfPCConfig()                           3UL  /**< the number of accomplishable value elements in Com_TxTOutInfo */
#define Com_GetSizeOfTxTpInfoOfPCConfig()                             20UL  /**< the number of accomplishable value elements in Com_TxTpInfo */
#define Com_GetTmpRxBufferOfPCConfig()                                Com_TmpRxBuffer  /**< the pointer to Com_TmpRxBuffer */
#define Com_GetTmpRxShdBufferArrayBasedOfPCConfig()                   Com_TmpRxShdBufferArrayBased.raw  /**< the pointer to Com_TmpRxShdBufferArrayBased */
#define Com_GetTmpRxShdBufferUInt16OfPCConfig()                       Com_TmpRxShdBufferUInt16  /**< the pointer to Com_TmpRxShdBufferUInt16 */
#define Com_GetTmpRxShdBufferUInt32OfPCConfig()                       Com_TmpRxShdBufferUInt32  /**< the pointer to Com_TmpRxShdBufferUInt32 */
#define Com_GetTmpRxShdBufferUInt8OfPCConfig()                        Com_TmpRxShdBufferUInt8  /**< the pointer to Com_TmpRxShdBufferUInt8 */
#define Com_GetTransmitRequestOfPCConfig()                            Com_TransmitRequest  /**< the pointer to Com_TransmitRequest */
#define Com_GetTxBufferOfPCConfig()                                   Com_TxBuffer  /**< the pointer to Com_TxBuffer */
#define Com_GetTxCyclicProcessingISRLockCounterOfPCConfig()           Com_TxCyclicProcessingISRLockCounter  /**< the pointer to Com_TxCyclicProcessingISRLockCounter */
#define Com_GetTxCyclicProcessingISRLockThresholdOfPCConfig()         1U
#define Com_GetTxDeadlineMonitoringISRLockCounterOfPCConfig()         Com_TxDeadlineMonitoringISRLockCounter  /**< the pointer to Com_TxDeadlineMonitoringISRLockCounter */
#define Com_GetTxDeadlineMonitoringISRLockThresholdOfPCConfig()       1U
#define Com_GetTxDynSignalLengthOfPCConfig()                          Com_TxDynSignalLength.raw  /**< the pointer to Com_TxDynSignalLength */
#define Com_GetTxFilterInitValueUInt16OfPCConfig()                    Com_TxFilterInitValueUInt16  /**< the pointer to Com_TxFilterInitValueUInt16 */
#define Com_GetTxFilterInitValueUInt8OfPCConfig()                     Com_TxFilterInitValueUInt8  /**< the pointer to Com_TxFilterInitValueUInt8 */
#define Com_GetTxFilterOldValueUInt16OfPCConfig()                     Com_TxFilterOldValueUInt16  /**< the pointer to Com_TxFilterOldValueUInt16 */
#define Com_GetTxFilterOldValueUInt8OfPCConfig()                      Com_TxFilterOldValueUInt8  /**< the pointer to Com_TxFilterOldValueUInt8 */
#define Com_GetTxIPduGroupISRLockCounterOfPCConfig()                  Com_TxIPduGroupISRLockCounter  /**< the pointer to Com_TxIPduGroupISRLockCounter */
#define Com_GetTxIPduGroupISRLockThresholdOfPCConfig()                1U
#define Com_GetTxModeFalseOfPCConfig()                                Com_TxModeFalse  /**< the pointer to Com_TxModeFalse */
#define Com_GetTxModeInfoOfPCConfig()                                 Com_TxModeInfo  /**< the pointer to Com_TxModeInfo */
#define Com_GetTxModeTrueOfPCConfig()                                 Com_TxModeTrue  /**< the pointer to Com_TxModeTrue */
#define Com_GetTxPduGrpActiveOfPCConfig()                             Com_TxPduGrpActive  /**< the pointer to Com_TxPduGrpActive */
#define Com_GetTxPduGrpInfoOfPCConfig()                               Com_TxPduGrpInfo  /**< the pointer to Com_TxPduGrpInfo */
#define Com_GetTxPduInfoOfPCConfig()                                  Com_TxPduInfo  /**< the pointer to Com_TxPduInfo */
#define Com_GetTxPduInitValueOfPCConfig()                             Com_TxPduInitValue  /**< the pointer to Com_TxPduInitValue */
#define Com_GetTxProcessingISRLockCounterOfPCConfig()                 Com_TxProcessingISRLockCounter  /**< the pointer to Com_TxProcessingISRLockCounter */
#define Com_GetTxProcessingISRLockThresholdOfPCConfig()               1U
#define Com_GetTxSduLengthOfPCConfig()                                Com_TxSduLength  /**< the pointer to Com_TxSduLength */
#define Com_GetTxSigGrpInfoIndOfPCConfig()                            Com_TxSigGrpInfoInd  /**< the pointer to Com_TxSigGrpInfoInd */
#define Com_GetTxSigGrpInfoOfPCConfig()                               Com_TxSigGrpInfo  /**< the pointer to Com_TxSigGrpInfo */
#define Com_GetTxSigGrpMaskOfPCConfig()                               Com_TxSigGrpMask  /**< the pointer to Com_TxSigGrpMask */
#define Com_GetTxSigInfoFilterInitValueIndOfPCConfig()                Com_TxSigInfoFilterInitValueInd  /**< the pointer to Com_TxSigInfoFilterInitValueInd */
#define Com_GetTxSigInfoOfPCConfig()                                  Com_TxSigInfo  /**< the pointer to Com_TxSigInfo */
#define Com_GetTxTOutCntOfPCConfig()                                  Com_TxTOutCnt.raw  /**< the pointer to Com_TxTOutCnt */
#define Com_GetTxTOutInfoOfPCConfig()                                 Com_TxTOutInfo  /**< the pointer to Com_TxTOutInfo */
#define Com_GetTxTmpTpPduLengthOfPCConfig()                           Com_TxTmpTpPduLength.raw  /**< the pointer to Com_TxTmpTpPduLength */
#define Com_GetTxTpConnectionStateOfPCConfig()                        Com_TxTpConnectionState.raw  /**< the pointer to Com_TxTpConnectionState */
#define Com_GetTxTpInfoOfPCConfig()                                   Com_TxTpInfo  /**< the pointer to Com_TxTpInfo */
#define Com_GetTxTpSduLengthOfPCConfig()                              Com_TxTpSduLength.raw  /**< the pointer to Com_TxTpSduLength */
#define Com_GetTxTpWrittenBytesCounterOfPCConfig()                    Com_TxTpWrittenBytesCounter.raw  /**< the pointer to Com_TxTpWrittenBytesCounter */
#define Com_GetWaitingForConfirmationOfPCConfig()                     Com_WaitingForConfirmation  /**< the pointer to Com_WaitingForConfirmation */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGetDuplicatedRootDataMacros  Com Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define Com_GetSizeOfCurrentTxModeOfPCConfig()                        Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_CurrentTxMode */
#define Com_GetSizeOfCycleTimeCntOfPCConfig()                         Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_CycleTimeCnt */
#define Com_GetSizeOfCyclicSendRequestOfPCConfig()                    Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_CyclicSendRequest */
#define Com_GetSizeOfDelayTimeCntOfPCConfig()                         Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_DelayTimeCnt */
#define Com_GetSizeOfGwEventOfPCConfig()                              Com_GetSizeOfGwInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_GwEvent */
#define Com_GetSizeOfHandleTxPduDeferredOfPCConfig()                  Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_HandleTxPduDeferred */
#define Com_GetSizeOfRepCntOfPCConfig()                               Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RepCnt */
#define Com_GetSizeOfRepCycleCntOfPCConfig()                          Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RepCycleCnt */
#define Com_GetSizeOfRxDynSignalLengthOfPCConfig()                    Com_GetSizeOfRxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RxDynSignalLength */
#define Com_GetSizeOfRxDynSignalTmpLengthForSignalGroupsOfPCConfig()  Com_GetSizeOfRxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RxDynSignalTmpLengthForSignalGroups */
#define Com_GetSizeOfRxPduDmStateOfPCConfig()                         Com_GetSizeOfRxTOutInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RxPduDmState */
#define Com_GetSizeOfRxPduGrpActiveOfPCConfig()                       Com_GetSizeOfRxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RxPduGrpActive */
#define Com_GetSizeOfRxTOutCntOfPCConfig()                            Com_GetSizeOfRxTOutInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RxTOutCnt */
#define Com_GetSizeOfRxTpConnectionStateOfPCConfig()                  Com_GetSizeOfRxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RxTpConnectionState */
#define Com_GetSizeOfRxTpSduLengthOfPCConfig()                        Com_GetSizeOfRxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RxTpSduLength */
#define Com_GetSizeOfRxTpWrittenBytesCounterOfPCConfig()              Com_GetSizeOfRxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RxTpWrittenBytesCounter */
#define Com_GetSizeOfSigGrpEventFlagOfPCConfig()                      Com_GetSizeOfTxSigGrpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_SigGrpEventFlag */
#define Com_GetSizeOfTransmitRequestOfPCConfig()                      Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TransmitRequest */
#define Com_GetSizeOfTxDynSignalLengthOfPCConfig()                    Com_GetSizeOfTxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxDynSignalLength */
#define Com_GetSizeOfTxFilterOldValueUInt16OfPCConfig()               Com_GetSizeOfTxFilterInitValueUInt16OfPCConfig()  /**< the number of accomplishable value elements in Com_TxFilterOldValueUInt16 */
#define Com_GetSizeOfTxFilterOldValueUInt8OfPCConfig()                Com_GetSizeOfTxFilterInitValueUInt8OfPCConfig()  /**< the number of accomplishable value elements in Com_TxFilterOldValueUInt8 */
#define Com_GetSizeOfTxPduGrpActiveOfPCConfig()                       Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxPduGrpActive */
#define Com_GetSizeOfTxSduLengthOfPCConfig()                          Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxSduLength */
#define Com_GetSizeOfTxTmpTpPduLengthOfPCConfig()                     Com_GetSizeOfTxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxTmpTpPduLength */
#define Com_GetSizeOfTxTpConnectionStateOfPCConfig()                  Com_GetSizeOfTxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxTpConnectionState */
#define Com_GetSizeOfTxTpSduLengthOfPCConfig()                        Com_GetSizeOfTxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxTpSduLength */
#define Com_GetSizeOfTxTpWrittenBytesCounterOfPCConfig()              Com_GetSizeOfTxTpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxTpWrittenBytesCounter */
#define Com_GetSizeOfWaitingForConfirmationOfPCConfig()               Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_WaitingForConfirmation */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGetDataMacros  Com Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define Com_GetCbkRxTOutFuncPtr(Index)                                (Com_GetCbkRxTOutFuncPtrOfPCConfig()[(Index)])
#define Com_GetCbkTxTOutFuncPtr(Index)                                (Com_GetCbkTxTOutFuncPtrOfPCConfig()[(Index)])
#define Com_GetConstValueArrayBased(Index)                            (Com_GetConstValueArrayBasedOfPCConfig()[(Index)])
#define Com_GetConstValueSInt16(Index)                                (Com_GetConstValueSInt16OfPCConfig()[(Index)])
#define Com_GetConstValueUInt16(Index)                                (Com_GetConstValueUInt16OfPCConfig()[(Index)])
#define Com_GetConstValueUInt32(Index)                                (Com_GetConstValueUInt32OfPCConfig()[(Index)])
#define Com_GetConstValueUInt8(Index)                                 (Com_GetConstValueUInt8OfPCConfig()[(Index)])
#define Com_IsCurrentTxMode(Index)                                    ((Com_GetCurrentTxModeOfPCConfig()[(Index)]) != FALSE)
#define Com_GetCycleTimeCnt(Index)                                    (Com_GetCycleTimeCntOfPCConfig()[(Index)])
#define Com_IsCyclicSendRequest(Index)                                ((Com_GetCyclicSendRequestOfPCConfig()[(Index)]) != FALSE)
#define Com_GetDelayTimeCnt(Index)                                    (Com_GetDelayTimeCntOfPCConfig()[(Index)])
#define Com_GetGatewayDescriptionProcessingISRLockCounter()           (Com_GetGatewayDescriptionProcessingISRLockCounterOfPCConfig())
#define Com_GetGatewayProcessingISRLockCounter()                      (Com_GetGatewayProcessingISRLockCounterOfPCConfig())
#define Com_IsGwEvent(Index)                                          ((Com_GetGwEventOfPCConfig()[(Index)]) != FALSE)
#define Com_GetGwEventCacheIndex()                                    (Com_GetGwEventCacheIndexOfPCConfig())
#define Com_GetRxAccessInfoIdxOfGwGrpSigMapping(Index)                (Com_GetGwGrpSigMappingOfPCConfig()[(Index)].RxAccessInfoIdxOfGwGrpSigMapping)
#define Com_GetTxSigIdOfGwGrpSigMapping(Index)                        ((Com_SignalIdType)Com_GetGwGrpSigMappingOfPCConfig()[(Index)].TxSigIdOfGwGrpSigMapping)
#define Com_GetGwSigGrpMappingEndIdxOfGwInfo(Index)                   (Com_GetGwInfoOfPCConfig()[(Index)].GwSigGrpMappingEndIdxOfGwInfo)
#define Com_GetGwSigGrpMappingStartIdxOfGwInfo(Index)                 (Com_GetGwInfoOfPCConfig()[(Index)].GwSigGrpMappingStartIdxOfGwInfo)
#define Com_GetGwSigMappingEndIdxOfGwInfo(Index)                      (Com_GetGwInfoOfPCConfig()[(Index)].GwSigMappingEndIdxOfGwInfo)
#define Com_GetGwSigMappingStartIdxOfGwInfo(Index)                    (Com_GetGwInfoOfPCConfig()[(Index)].GwSigMappingStartIdxOfGwInfo)
#define Com_GetGwGrpSigMappingEndIdxOfGwSigGrpMapping(Index)          (Com_GetGwSigGrpMappingOfPCConfig()[(Index)].GwGrpSigMappingEndIdxOfGwSigGrpMapping)
#define Com_GetGwGrpSigMappingStartIdxOfGwSigGrpMapping(Index)        (Com_GetGwSigGrpMappingOfPCConfig()[(Index)].GwGrpSigMappingStartIdxOfGwSigGrpMapping)
#define Com_GetTxSigGrpIdOfGwSigGrpMapping(Index)                     ((Com_SignalGroupIdType)Com_GetGwSigGrpMappingOfPCConfig()[(Index)].TxSigGrpIdOfGwSigGrpMapping)
#define Com_GetRxAccessInfoIdxOfGwSigMapping(Index)                   (Com_GetGwSigMappingOfPCConfig()[(Index)].RxAccessInfoIdxOfGwSigMapping)
#define Com_GetTxSigIdOfGwSigMapping(Index)                           ((Com_SignalIdType)Com_GetGwSigMappingOfPCConfig()[(Index)].TxSigIdOfGwSigMapping)
#define Com_GetHandleRxPduDeferred(Index)                             (Com_GetHandleRxPduDeferredOfPCConfig()[(Index)])
#define Com_IsHandleTxPduDeferred(Index)                              ((Com_GetHandleTxPduDeferredOfPCConfig()[(Index)]) != FALSE)
#define Com_IsInitialized()                                           ((Com_GetInitializedOfPCConfig()) != FALSE)
#define Com_GetPduGrpVector(Index)                                    (Com_GetPduGrpVectorOfPCConfig()[(Index)])
#define Com_GetRepCnt(Index)                                          (Com_GetRepCntOfPCConfig()[(Index)])
#define Com_GetRepCycleCnt(Index)                                     (Com_GetRepCycleCntOfPCConfig()[(Index)])
#define Com_GetApplTypeOfRxAccessInfo(Index)                          (Com_GetRxAccessInfoOfPCConfig()[(Index)].ApplTypeOfRxAccessInfo)
#define Com_GetBitLengthOfRxAccessInfo(Index)                         (Com_GetRxAccessInfoOfPCConfig()[(Index)].BitLengthOfRxAccessInfo)
#define Com_GetBitPositionOfRxAccessInfo(Index)                       (Com_GetRxAccessInfoOfPCConfig()[(Index)].BitPositionOfRxAccessInfo)
#define Com_GetBufferIdxOfRxAccessInfo(Index)                         (Com_GetRxAccessInfoOfPCConfig()[(Index)].BufferIdxOfRxAccessInfo)
#define Com_GetBusAccOfRxAccessInfo(Index)                            (Com_GetRxAccessInfoOfPCConfig()[(Index)].BusAccOfRxAccessInfo)
#define Com_GetByteLengthOfRxAccessInfo(Index)                        (Com_GetRxAccessInfoOfPCConfig()[(Index)].ByteLengthOfRxAccessInfo)
#define Com_GetBytePositionOfRxAccessInfo(Index)                      (Com_GetRxAccessInfoOfPCConfig()[(Index)].BytePositionOfRxAccessInfo)
#define Com_GetConstValueArrayBasedInitValueEndIdxOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].ConstValueArrayBasedInitValueEndIdxOfRxAccessInfo)
#define Com_GetConstValueArrayBasedInitValueStartIdxOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].ConstValueArrayBasedInitValueStartIdxOfRxAccessInfo)
#define Com_GetGwInfoIdxOfRxAccessInfo(Index)                         (Com_GetRxAccessInfoOfPCConfig()[(Index)].GwInfoIdxOfRxAccessInfo)
#define Com_IsInitValueUsedOfRxAccessInfo(Index)                      ((Com_GetRxAccessInfoOfPCConfig()[(Index)].InitValueUsedOfRxAccessInfo) != FALSE)
#define Com_IsIsGroupSignalOfRxAccessInfo(Index)                      ((Com_GetRxAccessInfoOfPCConfig()[(Index)].IsGroupSignalOfRxAccessInfo) != FALSE)
#define Com_GetRoutingBufferIdxOfRxAccessInfo(Index)                  (Com_GetRxAccessInfoOfPCConfig()[(Index)].RoutingBufferIdxOfRxAccessInfo)
#define Com_GetRxDataTimeoutSubstitutionValueIdxOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].RxDataTimeoutSubstitutionValueIdxOfRxAccessInfo)
#define Com_GetRxPduInfoIdxOfRxAccessInfo(Index)                      (Com_GetRxAccessInfoOfPCConfig()[(Index)].RxPduInfoIdxOfRxAccessInfo)
#define Com_GetRxSigBufferArrayBasedBufferEndIdxOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].RxSigBufferArrayBasedBufferEndIdxOfRxAccessInfo)
#define Com_GetRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].RxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo)
#define Com_IsRxSigBufferArrayBasedBufferUsedOfRxAccessInfo(Index)    ((Com_GetRxAccessInfoOfPCConfig()[(Index)].RxSigBufferArrayBasedBufferUsedOfRxAccessInfo) != FALSE)
#define Com_GetRxSigBufferArrayBasedRoutingBufferEndIdxOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].RxSigBufferArrayBasedRoutingBufferEndIdxOfRxAccessInfo)
#define Com_GetRxSigBufferArrayBasedRoutingBufferStartIdxOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].RxSigBufferArrayBasedRoutingBufferStartIdxOfRxAccessInfo)
#define Com_GetRxSigBufferArrayBasedShdBufferEndIdxOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].RxSigBufferArrayBasedShdBufferEndIdxOfRxAccessInfo)
#define Com_GetRxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].RxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfo)
#define Com_GetRxTOutInfoIdxOfRxAccessInfo(Index)                     (Com_GetRxAccessInfoOfPCConfig()[(Index)].RxTOutInfoIdxOfRxAccessInfo)
#define Com_GetShdBufferIdxOfRxAccessInfo(Index)                      (Com_GetRxAccessInfoOfPCConfig()[(Index)].ShdBufferIdxOfRxAccessInfo)
#define Com_GetStartByteInPduPositionOfRxAccessInfo(Index)            (Com_GetRxAccessInfoOfPCConfig()[(Index)].StartByteInPduPositionOfRxAccessInfo)
#define Com_GetTmpBufferIdxOfRxAccessInfo(Index)                      (Com_GetRxAccessInfoOfPCConfig()[(Index)].TmpBufferIdxOfRxAccessInfo)
#define Com_IsTmpBufferUsedOfRxAccessInfo(Index)                      ((Com_GetRxAccessInfoOfPCConfig()[(Index)].TmpBufferUsedOfRxAccessInfo) != FALSE)
#define Com_GetTmpRxShdBufferArrayBasedTmpBufferEndIdxOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].TmpRxShdBufferArrayBasedTmpBufferEndIdxOfRxAccessInfo)
#define Com_GetTmpRxShdBufferArrayBasedTmpBufferStartIdxOfRxAccessInfo(Index) (Com_GetRxAccessInfoOfPCConfig()[(Index)].TmpRxShdBufferArrayBasedTmpBufferStartIdxOfRxAccessInfo)
#define Com_IsTmpRxShdBufferArrayBasedTmpBufferUsedOfRxAccessInfo(Index) ((Com_GetRxAccessInfoOfPCConfig()[(Index)].TmpRxShdBufferArrayBasedTmpBufferUsedOfRxAccessInfo) != FALSE)
#define Com_GetRxAccessInfoGrpSigInd(Index)                           (Com_GetRxAccessInfoGrpSigIndOfPCConfig()[(Index)])
#define Com_GetRxAccessInfoInd(Index)                                 (Com_GetRxAccessInfoIndOfPCConfig()[(Index)])
#define Com_GetRxCbkFuncPtr(Index)                                    (Com_GetRxCbkFuncPtrOfPCConfig()[(Index)])
#define Com_GetRxDeadlineMonitoringISRLockCounter()                   (Com_GetRxDeadlineMonitoringISRLockCounterOfPCConfig())
#define Com_GetRxDefPduBuffer(Index)                                  (Com_GetRxDefPduBufferOfPCConfig()[(Index)])
#define Com_GetRxDeferredFctPtrCache(Index)                           (Com_GetRxDeferredFctPtrCacheOfPCConfig()[(Index)])
#define Com_GetRxDeferredProcessingISRLockCounter()                   (Com_GetRxDeferredProcessingISRLockCounterOfPCConfig())
#define Com_GetRxDynSignalLength(Index)                               (Com_GetRxDynSignalLengthOfPCConfig()[(Index)])
#define Com_GetRxDynSignalTmpLengthForSignalGroups(Index)             (Com_GetRxDynSignalTmpLengthForSignalGroupsOfPCConfig()[(Index)])
#define Com_GetRxIPduGroupISRLockCounter()                            (Com_GetRxIPduGroupISRLockCounterOfPCConfig())
#define Com_GetRxPduDmState(Index)                                    (Com_GetRxPduDmStateOfPCConfig()[(Index)])
#define Com_IsRxPduGrpActive(Index)                                   ((Com_GetRxPduGrpActiveOfPCConfig()[(Index)]) != FALSE)
#define Com_GetPduGrpVectorEndIdxOfRxPduGrpInfo(Index)                (Com_GetRxPduGrpInfoOfPCConfig()[(Index)].PduGrpVectorEndIdxOfRxPduGrpInfo)
#define Com_GetPduGrpVectorStartIdxOfRxPduGrpInfo(Index)              (Com_GetRxPduGrpInfoOfPCConfig()[(Index)].PduGrpVectorStartIdxOfRxPduGrpInfo)
#define Com_GetGwInfoEndIdxOfRxPduInfo(Index)                         (Com_GetRxPduInfoOfPCConfig()[(Index)].GwInfoEndIdxOfRxPduInfo)
#define Com_GetGwInfoStartIdxOfRxPduInfo(Index)                       (Com_GetRxPduInfoOfPCConfig()[(Index)].GwInfoStartIdxOfRxPduInfo)
#define Com_GetRxAccessInfoIndEndIdxOfRxPduInfo(Index)                (Com_GetRxPduInfoOfPCConfig()[(Index)].RxAccessInfoIndEndIdxOfRxPduInfo)
#define Com_GetRxAccessInfoIndStartIdxOfRxPduInfo(Index)              (Com_GetRxPduInfoOfPCConfig()[(Index)].RxAccessInfoIndStartIdxOfRxPduInfo)
#define Com_IsRxAccessInfoIndUsedOfRxPduInfo(Index)                   ((Com_GetRxPduInfoOfPCConfig()[(Index)].RxAccessInfoIndUsedOfRxPduInfo) != FALSE)
#define Com_GetRxDefPduBufferEndIdxOfRxPduInfo(Index)                 (Com_GetRxPduInfoOfPCConfig()[(Index)].RxDefPduBufferEndIdxOfRxPduInfo)
#define Com_GetRxDefPduBufferStartIdxOfRxPduInfo(Index)               (Com_GetRxPduInfoOfPCConfig()[(Index)].RxDefPduBufferStartIdxOfRxPduInfo)
#define Com_GetRxSigGrpInfoIndEndIdxOfRxPduInfo(Index)                (Com_GetRxPduInfoOfPCConfig()[(Index)].RxSigGrpInfoIndEndIdxOfRxPduInfo)
#define Com_GetRxSigGrpInfoIndStartIdxOfRxPduInfo(Index)              (Com_GetRxPduInfoOfPCConfig()[(Index)].RxSigGrpInfoIndStartIdxOfRxPduInfo)
#define Com_GetRxSigInfoEndIdxOfRxPduInfo(Index)                      (Com_GetRxPduInfoOfPCConfig()[(Index)].RxSigInfoEndIdxOfRxPduInfo)
#define Com_GetRxSigInfoStartIdxOfRxPduInfo(Index)                    (Com_GetRxPduInfoOfPCConfig()[(Index)].RxSigInfoStartIdxOfRxPduInfo)
#define Com_GetRxTOutInfoIndEndIdxOfRxPduInfo(Index)                  (Com_GetRxPduInfoOfPCConfig()[(Index)].RxTOutInfoIndEndIdxOfRxPduInfo)
#define Com_GetRxTOutInfoIndStartIdxOfRxPduInfo(Index)                (Com_GetRxPduInfoOfPCConfig()[(Index)].RxTOutInfoIndStartIdxOfRxPduInfo)
#define Com_IsRxTOutInfoUsedOfRxPduInfo(Index)                        ((Com_GetRxPduInfoOfPCConfig()[(Index)].RxTOutInfoUsedOfRxPduInfo) != FALSE)
#define Com_GetRxTpInfoIdxOfRxPduInfo(Index)                          (Com_GetRxPduInfoOfPCConfig()[(Index)].RxTpInfoIdxOfRxPduInfo)
#define Com_GetSignalProcessingOfRxPduInfo(Index)                     (Com_GetRxPduInfoOfPCConfig()[(Index)].SignalProcessingOfRxPduInfo)
#define Com_GetTypeOfRxPduInfo(Index)                                 (Com_GetRxPduInfoOfPCConfig()[(Index)].TypeOfRxPduInfo)
#define Com_GetRxSigBufferArrayBased(Index)                           (Com_GetRxSigBufferArrayBasedOfPCConfig()[(Index)])
#define Com_GetRxSigBufferSInt16(Index)                               (Com_GetRxSigBufferSInt16OfPCConfig()[(Index)])
#define Com_GetRxSigBufferUInt16(Index)                               (Com_GetRxSigBufferUInt16OfPCConfig()[(Index)])
#define Com_GetRxSigBufferUInt32(Index)                               (Com_GetRxSigBufferUInt32OfPCConfig()[(Index)])
#define Com_GetRxSigBufferUInt8(Index)                                (Com_GetRxSigBufferUInt8OfPCConfig()[(Index)])
#define Com_GetGwInfoIdxOfRxSigGrpInfo(Index)                         (Com_GetRxSigGrpInfoOfPCConfig()[(Index)].GwInfoIdxOfRxSigGrpInfo)
#define Com_GetRxAccessInfoGrpSigIndEndIdxOfRxSigGrpInfo(Index)       (Com_GetRxSigGrpInfoOfPCConfig()[(Index)].RxAccessInfoGrpSigIndEndIdxOfRxSigGrpInfo)
#define Com_GetRxAccessInfoGrpSigIndStartIdxOfRxSigGrpInfo(Index)     (Com_GetRxSigGrpInfoOfPCConfig()[(Index)].RxAccessInfoGrpSigIndStartIdxOfRxSigGrpInfo)
#define Com_GetRxCbkFuncPtrAckIdxOfRxSigGrpInfo(Index)                (Com_GetRxSigGrpInfoOfPCConfig()[(Index)].RxCbkFuncPtrAckIdxOfRxSigGrpInfo)
#define Com_GetRxPduInfoIdxOfRxSigGrpInfo(Index)                      (Com_GetRxSigGrpInfoOfPCConfig()[(Index)].RxPduInfoIdxOfRxSigGrpInfo)
#define Com_IsShdBufferRequiredOfRxSigGrpInfo(Index)                  ((Com_GetRxSigGrpInfoOfPCConfig()[(Index)].ShdBufferRequiredOfRxSigGrpInfo) != FALSE)
#define Com_GetSignalProcessingOfRxSigGrpInfo(Index)                  (Com_GetRxSigGrpInfoOfPCConfig()[(Index)].SignalProcessingOfRxSigGrpInfo)
#define Com_GetStartBytePositionOfRxSigGrpInfo(Index)                 (Com_GetRxSigGrpInfoOfPCConfig()[(Index)].StartBytePositionOfRxSigGrpInfo)
#define Com_GetUbIdxOfRxSigGrpInfo(Index)                             (Com_GetRxSigGrpInfoOfPCConfig()[(Index)].UbIdxOfRxSigGrpInfo)
#define Com_GetUbMaskIdxOfRxSigGrpInfo(Index)                         (Com_GetRxSigGrpInfoOfPCConfig()[(Index)].UbMaskIdxOfRxSigGrpInfo)
#define Com_GetValidDlcOfRxSigGrpInfo(Index)                          (Com_GetRxSigGrpInfoOfPCConfig()[(Index)].ValidDlcOfRxSigGrpInfo)
#define Com_GetRxSigGrpInfoInd(Index)                                 (Com_GetRxSigGrpInfoIndOfPCConfig()[(Index)])
#define Com_GetGwInfoIdxOfRxSigInfo(Index)                            (Com_GetRxSigInfoOfPCConfig()[(Index)].GwInfoIdxOfRxSigInfo)
#define Com_GetRxAccessInfoIdxOfRxSigInfo(Index)                      (Com_GetRxSigInfoOfPCConfig()[(Index)].RxAccessInfoIdxOfRxSigInfo)
#define Com_GetRxCbkFuncPtrAckIdxOfRxSigInfo(Index)                   (Com_GetRxSigInfoOfPCConfig()[(Index)].RxCbkFuncPtrAckIdxOfRxSigInfo)
#define Com_GetRxTOutInfoIdxOfRxSigInfo(Index)                        (Com_GetRxSigInfoOfPCConfig()[(Index)].RxTOutInfoIdxOfRxSigInfo)
#define Com_GetSignalProcessingOfRxSigInfo(Index)                     (Com_GetRxSigInfoOfPCConfig()[(Index)].SignalProcessingOfRxSigInfo)
#define Com_GetUbIdxOfRxSigInfo(Index)                                (Com_GetRxSigInfoOfPCConfig()[(Index)].UbIdxOfRxSigInfo)
#define Com_GetUbMaskIdxOfRxSigInfo(Index)                            (Com_GetRxSigInfoOfPCConfig()[(Index)].UbMaskIdxOfRxSigInfo)
#define Com_GetValidDlcOfRxSigInfo(Index)                             (Com_GetRxSigInfoOfPCConfig()[(Index)].ValidDlcOfRxSigInfo)
#define Com_GetRxTOutCnt(Index)                                       (Com_GetRxTOutCntOfPCConfig()[(Index)])
#define Com_GetCbkRxTOutFuncPtrIndEndIdxOfRxTOutInfo(Index)           (Com_GetRxTOutInfoOfPCConfig()[(Index)].CbkRxTOutFuncPtrIndEndIdxOfRxTOutInfo)
#define Com_GetCbkRxTOutFuncPtrIndStartIdxOfRxTOutInfo(Index)         (Com_GetRxTOutInfoOfPCConfig()[(Index)].CbkRxTOutFuncPtrIndStartIdxOfRxTOutInfo)
#define Com_GetFactorOfRxTOutInfo(Index)                              (Com_GetRxTOutInfoOfPCConfig()[(Index)].FactorOfRxTOutInfo)
#define Com_GetFirstFactorOfRxTOutInfo(Index)                         (Com_GetRxTOutInfoOfPCConfig()[(Index)].FirstFactorOfRxTOutInfo)
#define Com_GetRxPduInfoIdxOfRxTOutInfo(Index)                        (Com_GetRxTOutInfoOfPCConfig()[(Index)].RxPduInfoIdxOfRxTOutInfo)
#define Com_GetRxTpBuffer(Index)                                      (Com_GetRxTpBufferOfPCConfig()[(Index)])
#define Com_GetRxTpConnectionState(Index)                             (Com_GetRxTpConnectionStateOfPCConfig()[(Index)])
#define Com_GetBufferSizeOfRxTpInfo(Index)                            (Com_GetRxTpInfoOfPCConfig()[(Index)].BufferSizeOfRxTpInfo)
#define Com_GetDynamicInitialLengthOfRxTpInfo(Index)                  (Com_GetRxTpInfoOfPCConfig()[(Index)].DynamicInitialLengthOfRxTpInfo)
#define Com_GetRxAccessInfoDynSigIdxOfRxTpInfo(Index)                 (Com_GetRxTpInfoOfPCConfig()[(Index)].RxAccessInfoDynSigIdxOfRxTpInfo)
#define Com_GetRxTpBufferEndIdxOfRxTpInfo(Index)                      (Com_GetRxTpInfoOfPCConfig()[(Index)].RxTpBufferEndIdxOfRxTpInfo)
#define Com_GetRxTpBufferStartIdxOfRxTpInfo(Index)                    (Com_GetRxTpInfoOfPCConfig()[(Index)].RxTpBufferStartIdxOfRxTpInfo)
#define Com_GetRxTpSduLength(Index)                                   (Com_GetRxTpSduLengthOfPCConfig()[(Index)])
#define Com_GetRxTpWrittenBytesCounter(Index)                         (Com_GetRxTpWrittenBytesCounterOfPCConfig()[(Index)])
#define Com_GetSigGrpEventFlag(Index)                                 (Com_GetSigGrpEventFlagOfPCConfig()[(Index)])
#define Com_GetTmpRxBuffer(Index)                                     (Com_GetTmpRxBufferOfPCConfig()[(Index)])
#define Com_GetTmpRxShdBufferArrayBased(Index)                        (Com_GetTmpRxShdBufferArrayBasedOfPCConfig()[(Index)])
#define Com_GetTmpRxShdBufferUInt16(Index)                            (Com_GetTmpRxShdBufferUInt16OfPCConfig()[(Index)])
#define Com_GetTmpRxShdBufferUInt32(Index)                            (Com_GetTmpRxShdBufferUInt32OfPCConfig()[(Index)])
#define Com_GetTmpRxShdBufferUInt8(Index)                             (Com_GetTmpRxShdBufferUInt8OfPCConfig()[(Index)])
#define Com_IsTransmitRequest(Index)                                  ((Com_GetTransmitRequestOfPCConfig()[(Index)]) != FALSE)
#define Com_GetTxBuffer(Index)                                        (Com_GetTxBufferOfPCConfig()[(Index)])
#define Com_GetTxCyclicProcessingISRLockCounter()                     (Com_GetTxCyclicProcessingISRLockCounterOfPCConfig())
#define Com_GetTxDeadlineMonitoringISRLockCounter()                   (Com_GetTxDeadlineMonitoringISRLockCounterOfPCConfig())
#define Com_GetTxDynSignalLength(Index)                               (Com_GetTxDynSignalLengthOfPCConfig()[(Index)])
#define Com_GetTxFilterInitValueUInt16(Index)                         (Com_GetTxFilterInitValueUInt16OfPCConfig()[(Index)])
#define Com_GetTxFilterInitValueUInt8(Index)                          (Com_GetTxFilterInitValueUInt8OfPCConfig()[(Index)])
#define Com_GetTxFilterOldValueUInt16(Index)                          (Com_GetTxFilterOldValueUInt16OfPCConfig()[(Index)])
#define Com_GetTxFilterOldValueUInt8(Index)                           (Com_GetTxFilterOldValueUInt8OfPCConfig()[(Index)])
#define Com_GetTxIPduGroupISRLockCounter()                            (Com_GetTxIPduGroupISRLockCounterOfPCConfig())
#define Com_IsDirectOfTxModeFalse(Index)                              ((Com_GetTxModeFalseOfPCConfig()[(Index)].DirectOfTxModeFalse) != FALSE)
#define Com_GetTimeOffsetOfTxModeFalse(Index)                         (Com_GetTxModeFalseOfPCConfig()[(Index)].TimeOffsetOfTxModeFalse)
#define Com_GetTimePeriodOfTxModeFalse(Index)                         (Com_GetTxModeFalseOfPCConfig()[(Index)].TimePeriodOfTxModeFalse)
#define Com_GetMinimumDelayOfTxModeInfo(Index)                        (Com_GetTxModeInfoOfPCConfig()[(Index)].MinimumDelayOfTxModeInfo)
#define Com_IsTxModeFalseUsedOfTxModeInfo(Index)                      ((Com_GetTxModeInfoOfPCConfig()[(Index)].TxModeFalseUsedOfTxModeInfo) != FALSE)
#define Com_GetTxModeTrueIdxOfTxModeInfo(Index)                       (Com_GetTxModeInfoOfPCConfig()[(Index)].TxModeTrueIdxOfTxModeInfo)
#define Com_GetTxSigInfoFilterInitValueIndEndIdxOfTxModeInfo(Index)   (Com_GetTxModeInfoOfPCConfig()[(Index)].TxSigInfoFilterInitValueIndEndIdxOfTxModeInfo)
#define Com_GetTxSigInfoFilterInitValueIndStartIdxOfTxModeInfo(Index) (Com_GetTxModeInfoOfPCConfig()[(Index)].TxSigInfoFilterInitValueIndStartIdxOfTxModeInfo)
#define Com_IsDirectOfTxModeTrue(Index)                               ((Com_GetTxModeTrueOfPCConfig()[(Index)].DirectOfTxModeTrue) != FALSE)
#define Com_GetTimeOffsetOfTxModeTrue(Index)                          (Com_GetTxModeTrueOfPCConfig()[(Index)].TimeOffsetOfTxModeTrue)
#define Com_GetTimePeriodOfTxModeTrue(Index)                          (Com_GetTxModeTrueOfPCConfig()[(Index)].TimePeriodOfTxModeTrue)
#define Com_IsTxPduGrpActive(Index)                                   ((Com_GetTxPduGrpActiveOfPCConfig()[(Index)]) != FALSE)
#define Com_GetPduGrpVectorEndIdxOfTxPduGrpInfo(Index)                (Com_GetTxPduGrpInfoOfPCConfig()[(Index)].PduGrpVectorEndIdxOfTxPduGrpInfo)
#define Com_GetPduGrpVectorStartIdxOfTxPduGrpInfo(Index)              (Com_GetTxPduGrpInfoOfPCConfig()[(Index)].PduGrpVectorStartIdxOfTxPduGrpInfo)
#define Com_GetClrUbOfTxPduInfo(Index)                                (Com_GetTxPduInfoOfPCConfig()[(Index)].ClrUbOfTxPduInfo)
#define Com_GetConstValueUInt8UbClearMaskEndIdxOfTxPduInfo(Index)     (Com_GetTxPduInfoOfPCConfig()[(Index)].ConstValueUInt8UbClearMaskEndIdxOfTxPduInfo)
#define Com_GetConstValueUInt8UbClearMaskStartIdxOfTxPduInfo(Index)   (Com_GetTxPduInfoOfPCConfig()[(Index)].ConstValueUInt8UbClearMaskStartIdxOfTxPduInfo)
#define Com_GetExternalIdOfTxPduInfo(Index)                           (Com_GetTxPduInfoOfPCConfig()[(Index)].ExternalIdOfTxPduInfo)
#define Com_GetPduWithMetaDataLengthOfTxPduInfo(Index)                (Com_GetTxPduInfoOfPCConfig()[(Index)].PduWithMetaDataLengthOfTxPduInfo)
#define Com_GetTxBufferLengthOfTxPduInfo(Index)                       (Com_GetTxPduInfoOfPCConfig()[(Index)].TxBufferLengthOfTxPduInfo)
#define Com_GetTxBufferMetaDataLengthOfTxPduInfo(Index)               (Com_GetTxPduInfoOfPCConfig()[(Index)].TxBufferMetaDataLengthOfTxPduInfo)
#define Com_GetTxPduInitValueEndIdxOfTxPduInfo(Index)                 (Com_GetTxPduInfoOfPCConfig()[(Index)].TxPduInitValueEndIdxOfTxPduInfo)
#define Com_GetTxPduInitValueMetaDataEndIdxOfTxPduInfo(Index)         (Com_GetTxPduInfoOfPCConfig()[(Index)].TxPduInitValueMetaDataEndIdxOfTxPduInfo)
#define Com_GetTxPduInitValueMetaDataStartIdxOfTxPduInfo(Index)       (Com_GetTxPduInfoOfPCConfig()[(Index)].TxPduInitValueMetaDataStartIdxOfTxPduInfo)
#define Com_IsTxPduInitValueMetaDataUsedOfTxPduInfo(Index)            ((Com_GetTxPduInfoOfPCConfig()[(Index)].TxPduInitValueMetaDataUsedOfTxPduInfo) != FALSE)
#define Com_GetTxPduInitValueStartIdxOfTxPduInfo(Index)               (Com_GetTxPduInfoOfPCConfig()[(Index)].TxPduInitValueStartIdxOfTxPduInfo)
#define Com_IsTxPduInitValueUsedOfTxPduInfo(Index)                    ((Com_GetTxPduInfoOfPCConfig()[(Index)].TxPduInitValueUsedOfTxPduInfo) != FALSE)
#define Com_GetTxSigGrpInfoIndEndIdxOfTxPduInfo(Index)                (Com_GetTxPduInfoOfPCConfig()[(Index)].TxSigGrpInfoIndEndIdxOfTxPduInfo)
#define Com_GetTxSigGrpInfoIndStartIdxOfTxPduInfo(Index)              (Com_GetTxPduInfoOfPCConfig()[(Index)].TxSigGrpInfoIndStartIdxOfTxPduInfo)
#define Com_GetTxTOutInfoIdxOfTxPduInfo(Index)                        (Com_GetTxPduInfoOfPCConfig()[(Index)].TxTOutInfoIdxOfTxPduInfo)
#define Com_GetTxTpInfoIdxOfTxPduInfo(Index)                          (Com_GetTxPduInfoOfPCConfig()[(Index)].TxTpInfoIdxOfTxPduInfo)
#define Com_GetTxPduInitValue(Index)                                  (Com_GetTxPduInitValueOfPCConfig()[(Index)])
#define Com_GetTxProcessingISRLockCounter()                           (Com_GetTxProcessingISRLockCounterOfPCConfig())
#define Com_GetTxSduLength(Index)                                     (Com_GetTxSduLengthOfPCConfig()[(Index)])
#define Com_GetPduOffsetOfTxSigGrpInfo(Index)                         (Com_GetTxSigGrpInfoOfPCConfig()[(Index)].PduOffsetOfTxSigGrpInfo)
#define Com_GetTransferPropertyOfTxSigGrpInfo(Index)                  (Com_GetTxSigGrpInfoOfPCConfig()[(Index)].TransferPropertyOfTxSigGrpInfo)
#define Com_GetTxBufferEndIdxOfTxSigGrpInfo(Index)                    (Com_GetTxSigGrpInfoOfPCConfig()[(Index)].TxBufferEndIdxOfTxSigGrpInfo)
#define Com_GetTxBufferSigGrpInTxIPDUEndIdxOfTxSigGrpInfo(Index)      (Com_GetTxSigGrpInfoOfPCConfig()[(Index)].TxBufferSigGrpInTxIPDUEndIdxOfTxSigGrpInfo)
#define Com_GetTxBufferSigGrpInTxIPDUStartIdxOfTxSigGrpInfo(Index)    (Com_GetTxSigGrpInfoOfPCConfig()[(Index)].TxBufferSigGrpInTxIPDUStartIdxOfTxSigGrpInfo)
#define Com_GetTxBufferStartIdxOfTxSigGrpInfo(Index)                  (Com_GetTxSigGrpInfoOfPCConfig()[(Index)].TxBufferStartIdxOfTxSigGrpInfo)
#define Com_GetTxBufferUbIdxInTxBufferIdxOfTxSigGrpInfo(Index)        (Com_GetTxSigGrpInfoOfPCConfig()[(Index)].TxBufferUbIdxInTxBufferIdxOfTxSigGrpInfo)
#define Com_GetTxPduInfoIdxOfTxSigGrpInfo(Index)                      (Com_GetTxSigGrpInfoOfPCConfig()[(Index)].TxPduInfoIdxOfTxSigGrpInfo)
#define Com_GetTxSigGrpMaskEndIdxOfTxSigGrpInfo(Index)                (Com_GetTxSigGrpInfoOfPCConfig()[(Index)].TxSigGrpMaskEndIdxOfTxSigGrpInfo)
#define Com_GetTxSigGrpMaskStartIdxOfTxSigGrpInfo(Index)              (Com_GetTxSigGrpInfoOfPCConfig()[(Index)].TxSigGrpMaskStartIdxOfTxSigGrpInfo)
#define Com_IsTxSigGrpMaskUsedOfTxSigGrpInfo(Index)                   ((Com_GetTxSigGrpInfoOfPCConfig()[(Index)].TxSigGrpMaskUsedOfTxSigGrpInfo) != FALSE)
#define Com_GetUbMaskIdxOfTxSigGrpInfo(Index)                         (Com_GetTxSigGrpInfoOfPCConfig()[(Index)].UbMaskIdxOfTxSigGrpInfo)
#define Com_IsUbMaskUsedOfTxSigGrpInfo(Index)                         ((Com_GetTxSigGrpInfoOfPCConfig()[(Index)].UbMaskUsedOfTxSigGrpInfo) != FALSE)
#define Com_GetTxSigGrpInfoInd(Index)                                 (Com_GetTxSigGrpInfoIndOfPCConfig()[(Index)])
#define Com_GetTxSigGrpMask(Index)                                    (Com_GetTxSigGrpMaskOfPCConfig()[(Index)])
#define Com_GetApplTypeOfTxSigInfo(Index)                             (Com_GetTxSigInfoOfPCConfig()[(Index)].ApplTypeOfTxSigInfo)
#define Com_GetBitLengthOfTxSigInfo(Index)                            (Com_GetTxSigInfoOfPCConfig()[(Index)].BitLengthOfTxSigInfo)
#define Com_GetBitPositionOfTxSigInfo(Index)                          (Com_GetTxSigInfoOfPCConfig()[(Index)].BitPositionOfTxSigInfo)
#define Com_GetBusAccOfTxSigInfo(Index)                               (Com_GetTxSigInfoOfPCConfig()[(Index)].BusAccOfTxSigInfo)
#define Com_GetByteLengthOfTxSigInfo(Index)                           (Com_GetTxSigInfoOfPCConfig()[(Index)].ByteLengthOfTxSigInfo)
#define Com_GetBytePositionOfTxSigInfo(Index)                         (Com_GetTxSigInfoOfPCConfig()[(Index)].BytePositionOfTxSigInfo)
#define Com_GetFilterInitValueIdxOfTxSigInfo(Index)                   (Com_GetTxSigInfoOfPCConfig()[(Index)].FilterInitValueIdxOfTxSigInfo)
#define Com_GetOnChangeIdxOfTxSigInfo(Index)                          (Com_GetTxSigInfoOfPCConfig()[(Index)].OnChangeIdxOfTxSigInfo)
#define Com_IsOnChangeUsedOfTxSigInfo(Index)                          ((Com_GetTxSigInfoOfPCConfig()[(Index)].OnChangeUsedOfTxSigInfo) != FALSE)
#define Com_GetStartByteInPduPositionOfTxSigInfo(Index)               (Com_GetTxSigInfoOfPCConfig()[(Index)].StartByteInPduPositionOfTxSigInfo)
#define Com_IsTriggeredOfTxSigInfo(Index)                             ((Com_GetTxSigInfoOfPCConfig()[(Index)].TriggeredOfTxSigInfo) != FALSE)
#define Com_GetTxBufferEndIdxOfTxSigInfo(Index)                       (Com_GetTxSigInfoOfPCConfig()[(Index)].TxBufferEndIdxOfTxSigInfo)
#define Com_GetTxBufferStartIdxOfTxSigInfo(Index)                     (Com_GetTxSigInfoOfPCConfig()[(Index)].TxBufferStartIdxOfTxSigInfo)
#define Com_GetTxBufferUbIdxInTxBufferIdxOfTxSigInfo(Index)           (Com_GetTxSigInfoOfPCConfig()[(Index)].TxBufferUbIdxInTxBufferIdxOfTxSigInfo)
#define Com_GetTxPduInfoIdxOfTxSigInfo(Index)                         (Com_GetTxSigInfoOfPCConfig()[(Index)].TxPduInfoIdxOfTxSigInfo)
#define Com_GetTxSigGrpInfoIdxOfTxSigInfo(Index)                      (Com_GetTxSigInfoOfPCConfig()[(Index)].TxSigGrpInfoIdxOfTxSigInfo)
#define Com_GetUbMaskIdxOfTxSigInfo(Index)                            (Com_GetTxSigInfoOfPCConfig()[(Index)].UbMaskIdxOfTxSigInfo)
#define Com_IsUbMaskUsedOfTxSigInfo(Index)                            ((Com_GetTxSigInfoOfPCConfig()[(Index)].UbMaskUsedOfTxSigInfo) != FALSE)
#define Com_GetTxTOutCnt(Index)                                       (Com_GetTxTOutCntOfPCConfig()[(Index)])
#define Com_GetCbkTxTOutFuncPtrIndEndIdxOfTxTOutInfo(Index)           (Com_GetTxTOutInfoOfPCConfig()[(Index)].CbkTxTOutFuncPtrIndEndIdxOfTxTOutInfo)
#define Com_GetCbkTxTOutFuncPtrIndStartIdxOfTxTOutInfo(Index)         (Com_GetTxTOutInfoOfPCConfig()[(Index)].CbkTxTOutFuncPtrIndStartIdxOfTxTOutInfo)
#define Com_GetFactorOfTxTOutInfo(Index)                              (Com_GetTxTOutInfoOfPCConfig()[(Index)].FactorOfTxTOutInfo)
#define Com_GetModeOfTxTOutInfo(Index)                                (Com_GetTxTOutInfoOfPCConfig()[(Index)].ModeOfTxTOutInfo)
#define Com_GetTxPduInfoIdxOfTxTOutInfo(Index)                        (Com_GetTxTOutInfoOfPCConfig()[(Index)].TxPduInfoIdxOfTxTOutInfo)
#define Com_GetTxTmpTpPduLength(Index)                                (Com_GetTxTmpTpPduLengthOfPCConfig()[(Index)])
#define Com_GetTxTpConnectionState(Index)                             (Com_GetTxTpConnectionStateOfPCConfig()[(Index)])
#define Com_GetDynamicInitialLengthOfTxTpInfo(Index)                  (Com_GetTxTpInfoOfPCConfig()[(Index)].DynamicInitialLengthOfTxTpInfo)
#define Com_GetTxBufferEndIdxOfTxTpInfo(Index)                        (Com_GetTxTpInfoOfPCConfig()[(Index)].TxBufferEndIdxOfTxTpInfo)
#define Com_GetTxBufferStartIdxOfTxTpInfo(Index)                      (Com_GetTxTpInfoOfPCConfig()[(Index)].TxBufferStartIdxOfTxTpInfo)
#define Com_GetTxSigInfoDynSigIdxOfTxTpInfo(Index)                    (Com_GetTxTpInfoOfPCConfig()[(Index)].TxSigInfoDynSigIdxOfTxTpInfo)
#define Com_GetTxTpSduLength(Index)                                   (Com_GetTxTpSduLengthOfPCConfig()[(Index)])
#define Com_GetTxTpWrittenBytesCounter(Index)                         (Com_GetTxTpWrittenBytesCounterOfPCConfig()[(Index)])
#define Com_IsWaitingForConfirmation(Index)                           ((Com_GetWaitingForConfirmationOfPCConfig()[(Index)]) != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGetDeduplicatedDataMacros  Com Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define Com_GetRxPduInfoIdxOfActivatableRxComIPdus(Index)             ((Com_RxPduInfoIdxOfActivatableRxComIPdusType)((Index)))  /**< the index of the 1:1 relation pointing to Com_RxPduInfo */
#define Com_GetTxPduInfoIdxOfActivatableTxComIPdus(Index)             ((Com_TxPduInfoIdxOfActivatableTxComIPdusType)((Index)))  /**< the index of the 1:1 relation pointing to Com_TxPduInfo */
#define Com_GetCbkRxTOutFuncPtrInd(Index)                             ((Com_CbkRxTOutFuncPtrIndType)((Index)))  /**< the indexes of the 1:1 sorted relation pointing to Com_CbkRxTOutFuncPtr */
#define Com_GetCbkTxTOutFuncPtrInd(Index)                             ((Com_CbkTxTOutFuncPtrIndType)((Index)))  /**< the indexes of the 1:1 sorted relation pointing to Com_CbkTxTOutFuncPtr */
#define Com_GetConfigId()                                             Com_GetConfigIdOfPCConfig()
#define Com_GetFilterAlgoOfFilterInfo_UInt16(Index)                   ((Com_FilterAlgoOfFilterInfo_UInt16Type)(((Index) + 0x02U)))  /**< Configured filter algorithm. */
#define Com_GetFilterMaskOfFilterInfo_UInt16(Index)                   ((Com_FilterMaskOfFilterInfo_UInt16Type)(((Index) + 0xFFFFU)))
#define Com_GetFilterMaxOfFilterInfo_UInt16(Index)                    ((Com_FilterMaxOfFilterInfo_UInt16Type)((Index)))
#define Com_GetFilterMinOfFilterInfo_UInt16(Index)                    ((Com_FilterMinOfFilterInfo_UInt16Type)((Index)))
#define Com_GetFilterXOfFilterInfo_UInt16(Index)                      ((Com_FilterXOfFilterInfo_UInt16Type)((Index)))
#define Com_GetFilterAlgoOfFilterInfo_UInt8(Index)                    ((Com_FilterAlgoOfFilterInfo_UInt8Type)(((Index) + 0x02U)))  /**< Configured filter algorithm. */
#define Com_GetFilterMaskOfFilterInfo_UInt8(Index)                    ((Com_FilterMaskOfFilterInfo_UInt8Type)(((Index) + 0xFFU)))
#define Com_GetFilterMaxOfFilterInfo_UInt8(Index)                     ((Com_FilterMaxOfFilterInfo_UInt8Type)((Index)))
#define Com_GetFilterMinOfFilterInfo_UInt8(Index)                     ((Com_FilterMinOfFilterInfo_UInt8Type)((Index)))
#define Com_GetFilterXOfFilterInfo_UInt8(Index)                       ((Com_FilterXOfFilterInfo_UInt8Type)((Index)))
#define Com_GetGatewayProcessingISRLockThreshold()                    Com_GetGatewayProcessingISRLockThresholdOfPCConfig()
#define Com_IsGwSigGrpMappingUsedOfGwInfo(Index)                      (((boolean)(Com_GetGwSigGrpMappingStartIdxOfGwInfo(Index) != COM_NO_GWSIGGRPMAPPINGSTARTIDXOFGWINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_GwSigGrpMapping */
#define Com_IsGwSigMappingUsedOfGwInfo(Index)                         (((boolean)(Com_GetGwSigMappingStartIdxOfGwInfo(Index) != COM_NO_GWSIGMAPPINGSTARTIDXOFGWINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_GwSigMapping */
#define Com_GetPduGrpCnt()                                            Com_GetPduGrpCntOfPCConfig()
#define Com_IsBufferUsedOfRxAccessInfo(Index)                         Com_IsInitValueUsedOfRxAccessInfo(Index)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64 */
#define Com_GetConstValueArrayBasedInitValueLengthOfRxAccessInfo(Index) ((Com_ConstValueArrayBasedInitValueLengthOfRxAccessInfoType)((Com_GetConstValueArrayBasedInitValueEndIdxOfRxAccessInfo(Index) - Com_GetConstValueArrayBasedInitValueStartIdxOfRxAccessInfo(Index))))  /**< the number of relations pointing to Com_ConstValueArrayBased */
#define Com_IsConstValueArrayBasedInitValueUsedOfRxAccessInfo(Index)  Com_IsRxSigBufferArrayBasedBufferUsedOfRxAccessInfo(Index)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_ConstValueArrayBased */
#define Com_IsGwInfoUsedOfRxAccessInfo(Index)                         (((boolean)(Com_GetGwInfoIdxOfRxAccessInfo(Index) != COM_NO_GWINFOIDXOFRXACCESSINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_GwInfo */
#define Com_GetInitValueIdxOfRxAccessInfo(Index)                      Com_GetRxDataTimeoutSubstitutionValueIdxOfRxAccessInfo(Index)  /**< the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64 */
#define Com_IsRoutingBufferUsedOfRxAccessInfo(Index)                  Com_IsInitValueUsedOfRxAccessInfo(Index)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64 */
#define Com_IsRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo(Index) Com_IsInitValueUsedOfRxAccessInfo(Index)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64 */
#define Com_GetRxSigBufferArrayBasedBufferLengthOfRxAccessInfo(Index) ((Com_RxSigBufferArrayBasedBufferLengthOfRxAccessInfoType)((Com_GetRxSigBufferArrayBasedBufferEndIdxOfRxAccessInfo(Index) - Com_GetRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo(Index))))  /**< the number of relations pointing to Com_RxSigBufferArrayBased */
#define Com_GetRxSigBufferArrayBasedRoutingBufferLengthOfRxAccessInfo(Index) ((Com_RxSigBufferArrayBasedRoutingBufferLengthOfRxAccessInfoType)((Com_GetRxSigBufferArrayBasedRoutingBufferEndIdxOfRxAccessInfo(Index) - Com_GetRxSigBufferArrayBasedRoutingBufferStartIdxOfRxAccessInfo(Index))))  /**< the number of relations pointing to Com_RxSigBufferArrayBased */
#define Com_IsRxSigBufferArrayBasedRoutingBufferUsedOfRxAccessInfo(Index) (((boolean)(Com_GetRxSigBufferArrayBasedRoutingBufferLengthOfRxAccessInfo(Index) != 0)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxSigBufferArrayBased */
#define Com_GetRxSigBufferArrayBasedShdBufferLengthOfRxAccessInfo(Index) ((Com_RxSigBufferArrayBasedShdBufferLengthOfRxAccessInfoType)((Com_GetRxSigBufferArrayBasedShdBufferEndIdxOfRxAccessInfo(Index) - Com_GetRxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfo(Index))))  /**< the number of relations pointing to Com_RxSigBufferArrayBased */
#define Com_IsRxSigBufferArrayBasedShdBufferUsedOfRxAccessInfo(Index) Com_IsTmpRxShdBufferArrayBasedTmpBufferUsedOfRxAccessInfo(Index)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxSigBufferArrayBased */
#define Com_IsRxTOutInfoUsedOfRxAccessInfo(Index)                     (((boolean)(Com_GetRxTOutInfoIdxOfRxAccessInfo(Index) != COM_NO_RXTOUTINFOIDXOFRXACCESSINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxTOutInfo */
#define Com_IsShdBufferUsedOfRxAccessInfo(Index)                      Com_IsTmpBufferUsedOfRxAccessInfo(Index)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64 */
#define Com_IsSignExtRequiredOfRxAccessInfo(Index)                    (((boolean)(Com_GetApplTypeOfRxAccessInfo(Index) == COM_SINT16_APPLTYPEOFRXACCESSINFO)) != FALSE)  /**< TRUE if sign extension is required for signal / group signal reception. */
#define Com_GetTmpRxShdBufferArrayBasedTmpBufferLengthOfRxAccessInfo(Index) ((Com_TmpRxShdBufferArrayBasedTmpBufferLengthOfRxAccessInfoType)((Com_GetTmpRxShdBufferArrayBasedTmpBufferEndIdxOfRxAccessInfo(Index) - Com_GetTmpRxShdBufferArrayBasedTmpBufferStartIdxOfRxAccessInfo(Index))))  /**< the number of relations pointing to Com_TmpRxShdBufferArrayBased */
#define Com_GetRxDeadlineMonitoringISRLockThreshold()                 Com_GetRxDeadlineMonitoringISRLockThresholdOfPCConfig()
#define Com_GetRxDeferredProcessingISRLockThreshold()                 Com_GetRxDeferredProcessingISRLockThresholdOfPCConfig()
#define Com_GetRxIPduGroupISRLockThreshold()                          Com_GetRxIPduGroupISRLockThresholdOfPCConfig()
#define Com_IsPduGrpVectorUsedOfRxPduGrpInfo(Index)                   (((boolean)(Com_GetPduGrpVectorStartIdxOfRxPduGrpInfo(Index) != COM_NO_PDUGRPVECTORSTARTIDXOFRXPDUGRPINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_PduGrpVector */
#define Com_IsGwInfoUsedOfRxPduInfo(Index)                            (((boolean)(Com_GetGwInfoStartIdxOfRxPduInfo(Index) != COM_NO_GWINFOSTARTIDXOFRXPDUINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_GwInfo */
#define Com_GetHandleRxPduDeferredIdxOfRxPduInfo(Index)               ((Com_HandleRxPduDeferredIdxOfRxPduInfoType)((Index)))  /**< the index of the 0:1 relation pointing to Com_HandleRxPduDeferred */
#define Com_IsHandleRxPduDeferredUsedOfRxPduInfo(Index)               Com_IsRxAccessInfoIndUsedOfRxPduInfo(Index)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_HandleRxPduDeferred */
#define Com_GetRxDefPduBufferLengthOfRxPduInfo(Index)                 ((Com_RxDefPduBufferLengthOfRxPduInfoType)((Com_GetRxDefPduBufferEndIdxOfRxPduInfo(Index) - Com_GetRxDefPduBufferStartIdxOfRxPduInfo(Index))))  /**< the number of relations pointing to Com_RxDefPduBuffer */
#define Com_IsRxDefPduBufferUsedOfRxPduInfo(Index)                    Com_IsRxAccessInfoIndUsedOfRxPduInfo(Index)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxDefPduBuffer */
#define Com_IsRxSigGrpInfoIndUsedOfRxPduInfo(Index)                   (((boolean)(Com_GetRxSigGrpInfoIndStartIdxOfRxPduInfo(Index) != COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxSigGrpInfoInd */
#define Com_IsRxSigInfoUsedOfRxPduInfo(Index)                         (((boolean)(Com_GetRxSigInfoStartIdxOfRxPduInfo(Index) != COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxSigInfo */
#define Com_GetRxTOutInfoIdxOfRxPduInfo(Index)                        Com_GetRxTOutInfoIndStartIdxOfRxPduInfo(Index)  /**< the index of the 0:1 relation pointing to Com_RxTOutInfo */
#define Com_IsRxTOutInfoIndUsedOfRxPduInfo(Index)                     Com_IsRxTOutInfoUsedOfRxPduInfo(Index)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxTOutInfoInd */
#define Com_IsRxTpInfoUsedOfRxPduInfo(Index)                          (((boolean)(Com_GetRxTpInfoIdxOfRxPduInfo(Index) != COM_NO_RXTPINFOIDXOFRXPDUINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxTpInfo */
#define Com_IsGwInfoUsedOfRxSigGrpInfo(Index)                         (((boolean)(Com_GetGwInfoIdxOfRxSigGrpInfo(Index) != COM_NO_GWINFOIDXOFRXSIGGRPINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_GwInfo */
#define Com_IsRxAccessInfoGrpSigIndUsedOfRxSigGrpInfo(Index)          Com_IsShdBufferRequiredOfRxSigGrpInfo(Index)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxAccessInfoGrpSigInd */
#define Com_IsRxCbkFuncPtrAckUsedOfRxSigGrpInfo(Index)                (((boolean)(Com_GetRxCbkFuncPtrAckIdxOfRxSigGrpInfo(Index) != COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGGRPINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxCbkFuncPtr */
#define Com_IsUbMaskUsedOfRxSigGrpInfo(Index)                         (((boolean)(Com_GetUbMaskIdxOfRxSigGrpInfo(Index) != COM_NO_UBMASKIDXOFRXSIGGRPINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64 */
#define Com_IsGwInfoUsedOfRxSigInfo(Index)                            (((boolean)(Com_GetGwInfoIdxOfRxSigInfo(Index) != COM_NO_GWINFOIDXOFRXSIGINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_GwInfo */
#define Com_IsRxCbkFuncPtrAckUsedOfRxSigInfo(Index)                   (((boolean)(Com_GetRxCbkFuncPtrAckIdxOfRxSigInfo(Index) != COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxCbkFuncPtr */
#define Com_IsRxTOutInfoUsedOfRxSigInfo(Index)                        (((boolean)(Com_GetRxTOutInfoIdxOfRxSigInfo(Index) != COM_NO_RXTOUTINFOIDXOFRXSIGINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxTOutInfo */
#define Com_IsUbMaskUsedOfRxSigInfo(Index)                            (((boolean)(Com_GetUbMaskIdxOfRxSigInfo(Index) != COM_NO_UBMASKIDXOFRXSIGINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64 */
#define Com_IsCbkRxTOutFuncPtrIndUsedOfRxTOutInfo(Index)              (((boolean)(Com_GetCbkRxTOutFuncPtrIndStartIdxOfRxTOutInfo(Index) != COM_NO_CBKRXTOUTFUNCPTRINDSTARTIDXOFRXTOUTINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_CbkRxTOutFuncPtrInd */
#define Com_GetRxTOutInfoInd(Index)                                   ((Com_RxTOutInfoIndType)((Index)))  /**< the indexes of the 1:1 sorted relation pointing to Com_RxTOutInfo */
#define Com_IsRxAccessInfoDynSigUsedOfRxTpInfo(Index)                 (((boolean)(Com_GetRxAccessInfoDynSigIdxOfRxTpInfo(Index) != COM_NO_RXACCESSINFODYNSIGIDXOFRXTPINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxAccessInfo */
#define Com_IsRxTpBufferUsedOfRxTpInfo(Index)                         (((boolean)(Com_GetRxTpBufferStartIdxOfRxTpInfo(Index) != COM_NO_RXTPBUFFERSTARTIDXOFRXTPINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxTpBuffer */
#define Com_GetSizeOfActivatableRxComIPdus()                          Com_GetSizeOfActivatableRxComIPdusOfPCConfig()
#define Com_GetSizeOfActivatableTxComIPdus()                          Com_GetSizeOfActivatableTxComIPdusOfPCConfig()
#define Com_GetSizeOfCbkRxTOutFuncPtr()                               Com_GetSizeOfCbkRxTOutFuncPtrOfPCConfig()
#define Com_GetSizeOfCbkRxTOutFuncPtrInd()                            Com_GetSizeOfCbkRxTOutFuncPtrIndOfPCConfig()
#define Com_GetSizeOfCbkTxTOutFuncPtr()                               Com_GetSizeOfCbkTxTOutFuncPtrOfPCConfig()
#define Com_GetSizeOfCbkTxTOutFuncPtrInd()                            Com_GetSizeOfCbkTxTOutFuncPtrIndOfPCConfig()
#define Com_GetSizeOfConstValueArrayBased()                           Com_GetSizeOfConstValueArrayBasedOfPCConfig()
#define Com_GetSizeOfConstValueSInt16()                               Com_GetSizeOfConstValueSInt16OfPCConfig()
#define Com_GetSizeOfConstValueUInt16()                               Com_GetSizeOfConstValueUInt16OfPCConfig()
#define Com_GetSizeOfConstValueUInt32()                               Com_GetSizeOfConstValueUInt32OfPCConfig()
#define Com_GetSizeOfConstValueUInt8()                                Com_GetSizeOfConstValueUInt8OfPCConfig()
#define Com_GetSizeOfCurrentTxMode()                                  Com_GetSizeOfCurrentTxModeOfPCConfig()
#define Com_GetSizeOfCycleTimeCnt()                                   Com_GetSizeOfCycleTimeCntOfPCConfig()
#define Com_GetSizeOfCyclicSendRequest()                              Com_GetSizeOfCyclicSendRequestOfPCConfig()
#define Com_GetSizeOfDelayTimeCnt()                                   Com_GetSizeOfDelayTimeCntOfPCConfig()
#define Com_GetSizeOfFilterInfo_UInt16()                              Com_GetSizeOfFilterInfo_UInt16OfPCConfig()
#define Com_GetSizeOfFilterInfo_UInt8()                               Com_GetSizeOfFilterInfo_UInt8OfPCConfig()
#define Com_GetSizeOfGwEvent()                                        Com_GetSizeOfGwEventOfPCConfig()
#define Com_GetSizeOfGwGrpSigMapping()                                Com_GetSizeOfGwGrpSigMappingOfPCConfig()
#define Com_GetSizeOfGwInfo()                                         Com_GetSizeOfGwInfoOfPCConfig()
#define Com_GetSizeOfGwSigGrpMapping()                                Com_GetSizeOfGwSigGrpMappingOfPCConfig()
#define Com_GetSizeOfGwSigMapping()                                   Com_GetSizeOfGwSigMappingOfPCConfig()
#define Com_GetSizeOfHandleRxPduDeferred()                            Com_GetSizeOfHandleRxPduDeferredOfPCConfig()
#define Com_GetSizeOfHandleTxPduDeferred()                            Com_GetSizeOfHandleTxPduDeferredOfPCConfig()
#define Com_GetSizeOfPduGrpVector()                                   Com_GetSizeOfPduGrpVectorOfPCConfig()
#define Com_GetSizeOfRepCnt()                                         Com_GetSizeOfRepCntOfPCConfig()
#define Com_GetSizeOfRepCycleCnt()                                    Com_GetSizeOfRepCycleCntOfPCConfig()
#define Com_GetSizeOfRxAccessInfo()                                   Com_GetSizeOfRxAccessInfoOfPCConfig()
#define Com_GetSizeOfRxAccessInfoGrpSigInd()                          Com_GetSizeOfRxAccessInfoGrpSigIndOfPCConfig()
#define Com_GetSizeOfRxAccessInfoInd()                                Com_GetSizeOfRxAccessInfoIndOfPCConfig()
#define Com_GetSizeOfRxCbkFuncPtr()                                   Com_GetSizeOfRxCbkFuncPtrOfPCConfig()
#define Com_GetSizeOfRxDefPduBuffer()                                 Com_GetSizeOfRxDefPduBufferOfPCConfig()
#define Com_GetSizeOfRxDeferredFctPtrCache()                          Com_GetSizeOfRxDeferredFctPtrCacheOfPCConfig()
#define Com_GetSizeOfRxDynSignalLength()                              Com_GetSizeOfRxDynSignalLengthOfPCConfig()
#define Com_GetSizeOfRxDynSignalTmpLengthForSignalGroups()            Com_GetSizeOfRxDynSignalTmpLengthForSignalGroupsOfPCConfig()
#define Com_GetSizeOfRxPduDmState()                                   Com_GetSizeOfRxPduDmStateOfPCConfig()
#define Com_GetSizeOfRxPduGrpActive()                                 Com_GetSizeOfRxPduGrpActiveOfPCConfig()
#define Com_GetSizeOfRxPduGrpInfo()                                   Com_GetSizeOfRxPduGrpInfoOfPCConfig()
#define Com_GetSizeOfRxPduInfo()                                      Com_GetSizeOfRxPduInfoOfPCConfig()
#define Com_GetSizeOfRxSigBufferArrayBased()                          Com_GetSizeOfRxSigBufferArrayBasedOfPCConfig()
#define Com_GetSizeOfRxSigBufferSInt16()                              Com_GetSizeOfRxSigBufferSInt16OfPCConfig()
#define Com_GetSizeOfRxSigBufferUInt16()                              Com_GetSizeOfRxSigBufferUInt16OfPCConfig()
#define Com_GetSizeOfRxSigBufferUInt32()                              Com_GetSizeOfRxSigBufferUInt32OfPCConfig()
#define Com_GetSizeOfRxSigBufferUInt8()                               Com_GetSizeOfRxSigBufferUInt8OfPCConfig()
#define Com_GetSizeOfRxSigGrpInfo()                                   Com_GetSizeOfRxSigGrpInfoOfPCConfig()
#define Com_GetSizeOfRxSigGrpInfoInd()                                Com_GetSizeOfRxSigGrpInfoIndOfPCConfig()
#define Com_GetSizeOfRxSigInfo()                                      Com_GetSizeOfRxSigInfoOfPCConfig()
#define Com_GetSizeOfRxTOutCnt()                                      Com_GetSizeOfRxTOutCntOfPCConfig()
#define Com_GetSizeOfRxTOutInfo()                                     Com_GetSizeOfRxTOutInfoOfPCConfig()
#define Com_GetSizeOfRxTOutInfoInd()                                  Com_GetSizeOfRxTOutInfoIndOfPCConfig()
#define Com_GetSizeOfRxTpBuffer()                                     Com_GetSizeOfRxTpBufferOfPCConfig()
#define Com_GetSizeOfRxTpConnectionState()                            Com_GetSizeOfRxTpConnectionStateOfPCConfig()
#define Com_GetSizeOfRxTpInfo()                                       Com_GetSizeOfRxTpInfoOfPCConfig()
#define Com_GetSizeOfRxTpSduLength()                                  Com_GetSizeOfRxTpSduLengthOfPCConfig()
#define Com_GetSizeOfRxTpWrittenBytesCounter()                        Com_GetSizeOfRxTpWrittenBytesCounterOfPCConfig()
#define Com_GetSizeOfSigGrpEventFlag()                                Com_GetSizeOfSigGrpEventFlagOfPCConfig()
#define Com_GetSizeOfTmpRxBuffer()                                    Com_GetSizeOfTmpRxBufferOfPCConfig()
#define Com_GetSizeOfTmpRxShdBufferArrayBased()                       Com_GetSizeOfTmpRxShdBufferArrayBasedOfPCConfig()
#define Com_GetSizeOfTmpRxShdBufferUInt16()                           Com_GetSizeOfTmpRxShdBufferUInt16OfPCConfig()
#define Com_GetSizeOfTmpRxShdBufferUInt32()                           Com_GetSizeOfTmpRxShdBufferUInt32OfPCConfig()
#define Com_GetSizeOfTmpRxShdBufferUInt8()                            Com_GetSizeOfTmpRxShdBufferUInt8OfPCConfig()
#define Com_GetSizeOfTransmitRequest()                                Com_GetSizeOfTransmitRequestOfPCConfig()
#define Com_GetSizeOfTxBuffer()                                       Com_GetSizeOfTxBufferOfPCConfig()
#define Com_GetSizeOfTxDynSignalLength()                              Com_GetSizeOfTxDynSignalLengthOfPCConfig()
#define Com_GetSizeOfTxFilterInitValueUInt16()                        Com_GetSizeOfTxFilterInitValueUInt16OfPCConfig()
#define Com_GetSizeOfTxFilterInitValueUInt8()                         Com_GetSizeOfTxFilterInitValueUInt8OfPCConfig()
#define Com_GetSizeOfTxFilterOldValueUInt16()                         Com_GetSizeOfTxFilterOldValueUInt16OfPCConfig()
#define Com_GetSizeOfTxFilterOldValueUInt8()                          Com_GetSizeOfTxFilterOldValueUInt8OfPCConfig()
#define Com_GetSizeOfTxModeFalse()                                    Com_GetSizeOfTxModeFalseOfPCConfig()
#define Com_GetSizeOfTxModeInfo()                                     Com_GetSizeOfTxModeInfoOfPCConfig()
#define Com_GetSizeOfTxModeTrue()                                     Com_GetSizeOfTxModeTrueOfPCConfig()
#define Com_GetSizeOfTxPduGrpActive()                                 Com_GetSizeOfTxPduGrpActiveOfPCConfig()
#define Com_GetSizeOfTxPduGrpInfo()                                   Com_GetSizeOfTxPduGrpInfoOfPCConfig()
#define Com_GetSizeOfTxPduInfo()                                      Com_GetSizeOfTxPduInfoOfPCConfig()
#define Com_GetSizeOfTxPduInitValue()                                 Com_GetSizeOfTxPduInitValueOfPCConfig()
#define Com_GetSizeOfTxSduLength()                                    Com_GetSizeOfTxSduLengthOfPCConfig()
#define Com_GetSizeOfTxSigGrpInfo()                                   Com_GetSizeOfTxSigGrpInfoOfPCConfig()
#define Com_GetSizeOfTxSigGrpInfoInd()                                Com_GetSizeOfTxSigGrpInfoIndOfPCConfig()
#define Com_GetSizeOfTxSigGrpMask()                                   Com_GetSizeOfTxSigGrpMaskOfPCConfig()
#define Com_GetSizeOfTxSigInfo()                                      Com_GetSizeOfTxSigInfoOfPCConfig()
#define Com_GetSizeOfTxSigInfoFilterInitValueInd()                    Com_GetSizeOfTxSigInfoFilterInitValueIndOfPCConfig()
#define Com_GetSizeOfTxTOutCnt()                                      Com_GetSizeOfTxTOutCntOfPCConfig()
#define Com_GetSizeOfTxTOutInfo()                                     Com_GetSizeOfTxTOutInfoOfPCConfig()
#define Com_GetSizeOfTxTmpTpPduLength()                               Com_GetSizeOfTxTmpTpPduLengthOfPCConfig()
#define Com_GetSizeOfTxTpConnectionState()                            Com_GetSizeOfTxTpConnectionStateOfPCConfig()
#define Com_GetSizeOfTxTpInfo()                                       Com_GetSizeOfTxTpInfoOfPCConfig()
#define Com_GetSizeOfTxTpSduLength()                                  Com_GetSizeOfTxTpSduLengthOfPCConfig()
#define Com_GetSizeOfTxTpWrittenBytesCounter()                        Com_GetSizeOfTxTpWrittenBytesCounterOfPCConfig()
#define Com_GetSizeOfWaitingForConfirmation()                         Com_GetSizeOfWaitingForConfirmationOfPCConfig()
#define Com_GetTxCyclicProcessingISRLockThreshold()                   Com_GetTxCyclicProcessingISRLockThresholdOfPCConfig()
#define Com_GetTxDeadlineMonitoringISRLockThreshold()                 Com_GetTxDeadlineMonitoringISRLockThresholdOfPCConfig()
#define Com_GetTxIPduGroupISRLockThreshold()                          Com_GetTxIPduGroupISRLockThresholdOfPCConfig()
#define Com_IsPeriodicOfTxModeFalse(Index)                            (((boolean)(Com_GetTimePeriodOfTxModeFalse(Index) != 0U)) != FALSE)  /**< TRUE if transmission mode contains a cyclic part. */
#define Com_IsInitModeOfTxModeInfo(Index)                             Com_IsTxModeFalseUsedOfTxModeInfo(Index)  /**< Initial transmission mode selector of the Tx I-PDU. */
#define Com_GetTxModeFalseIdxOfTxModeInfo(Index)                      Com_GetTxModeTrueIdxOfTxModeInfo(Index)  /**< the index of the 0:1 relation pointing to Com_TxModeFalse */
#define Com_IsTxModeTrueUsedOfTxModeInfo(Index)                       Com_IsTxModeFalseUsedOfTxModeInfo(Index)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TxModeTrue */
#define Com_IsTxSigInfoFilterInitValueIndUsedOfTxModeInfo(Index)      (((boolean)(Com_GetTxSigInfoFilterInitValueIndStartIdxOfTxModeInfo(Index) != COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxSigInfoFilterInitValueInd */
#define Com_IsPeriodicOfTxModeTrue(Index)                             (((boolean)(Com_GetTimePeriodOfTxModeTrue(Index) != 0U)) != FALSE)  /**< TRUE if transmission mode contains a cyclic part. */
#define Com_IsPduGrpVectorUsedOfTxPduGrpInfo(Index)                   (((boolean)(Com_GetPduGrpVectorStartIdxOfTxPduGrpInfo(Index) != COM_NO_PDUGRPVECTORSTARTIDXOFTXPDUGRPINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_PduGrpVector */
#define Com_IsConstValueUInt8UbClearMaskUsedOfTxPduInfo(Index)        (((boolean)(Com_GetConstValueUInt8UbClearMaskStartIdxOfTxPduInfo(Index) != COM_NO_CONSTVALUEUINT8UBCLEARMASKSTARTIDXOFTXPDUINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_ConstValueUInt8 */
#define Com_GetMetaDataLengthOfTxPduInfo(Index)                       Com_GetTxBufferMetaDataLengthOfTxPduInfo(Index)  /**< Length of MetaData. */
#define Com_GetTxBufferEndIdxOfTxPduInfo(Index)                       Com_GetTxPduInitValueEndIdxOfTxPduInfo(Index)  /**< the end index of the 0:n relation pointing to Com_TxBuffer */
#define Com_GetTxBufferMetaDataEndIdxOfTxPduInfo(Index)               Com_GetTxPduInitValueMetaDataEndIdxOfTxPduInfo(Index)  /**< the end index of the 0:n relation pointing to Com_TxBuffer */
#define Com_GetTxBufferMetaDataStartIdxOfTxPduInfo(Index)             Com_GetTxPduInitValueMetaDataStartIdxOfTxPduInfo(Index)  /**< the start index of the 0:n relation pointing to Com_TxBuffer */
#define Com_IsTxBufferMetaDataUsedOfTxPduInfo(Index)                  Com_IsTxPduInitValueMetaDataUsedOfTxPduInfo(Index)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxBuffer */
#define Com_GetTxBufferStartIdxOfTxPduInfo(Index)                     Com_GetTxPduInitValueStartIdxOfTxPduInfo(Index)  /**< the start index of the 0:n relation pointing to Com_TxBuffer */
#define Com_IsTxBufferUsedOfTxPduInfo(Index)                          Com_IsTxPduInitValueUsedOfTxPduInfo(Index)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxBuffer */
#define Com_IsTxSigGrpInfoIndUsedOfTxPduInfo(Index)                   (((boolean)(Com_GetTxSigGrpInfoIndStartIdxOfTxPduInfo(Index) != COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxSigGrpInfoInd */
#define Com_IsTxTOutInfoUsedOfTxPduInfo(Index)                        (((boolean)(Com_GetTxTOutInfoIdxOfTxPduInfo(Index) != COM_NO_TXTOUTINFOIDXOFTXPDUINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TxTOutInfo */
#define Com_IsTxTpInfoUsedOfTxPduInfo(Index)                          (((boolean)(Com_GetTxTpInfoIdxOfTxPduInfo(Index) != COM_NO_TXTPINFOIDXOFTXPDUINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TxTpInfo */
#define Com_GetTxProcessingISRLockThreshold()                         Com_GetTxProcessingISRLockThresholdOfPCConfig()
#define Com_GetTxBufferLengthOfTxSigGrpInfo(Index)                    ((Com_TxBufferLengthOfTxSigGrpInfoType)((Com_GetTxBufferEndIdxOfTxSigGrpInfo(Index) - Com_GetTxBufferStartIdxOfTxSigGrpInfo(Index))))  /**< the number of relations pointing to Com_TxBuffer */
#define Com_GetTxBufferSigGrpInTxIPDULengthOfTxSigGrpInfo(Index)      ((Com_TxBufferSigGrpInTxIPDULengthOfTxSigGrpInfoType)((Com_GetTxBufferSigGrpInTxIPDUEndIdxOfTxSigGrpInfo(Index) - Com_GetTxBufferSigGrpInTxIPDUStartIdxOfTxSigGrpInfo(Index))))  /**< the number of relations pointing to Com_TxBuffer */
#define Com_IsTxBufferUbIdxInTxBufferUsedOfTxSigGrpInfo(Index)        Com_IsUbMaskUsedOfTxSigGrpInfo(Index)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TxBuffer */
#define Com_IsTxBufferUsedOfTxSigGrpInfo(Index)                       Com_IsTxSigGrpMaskUsedOfTxSigGrpInfo(Index)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxBuffer */
#define Com_GetTxSigGrpMaskLengthOfTxSigGrpInfo(Index)                ((Com_TxSigGrpMaskLengthOfTxSigGrpInfoType)((Com_GetTxSigGrpMaskEndIdxOfTxSigGrpInfo(Index) - Com_GetTxSigGrpMaskStartIdxOfTxSigGrpInfo(Index))))  /**< the number of relations pointing to Com_TxSigGrpMask */
#define Com_IsFilterInitValueUsedOfTxSigInfo(Index)                   Com_IsOnChangeUsedOfTxSigInfo(Index)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TxFilterInitValueUInt8,Com_TxFilterInitValueUInt16,Com_TxFilterInitValueUInt32,Com_TxFilterInitValueUInt64,Com_TxFilterInitValueSInt8,Com_TxFilterInitValueSInt16,Com_TxFilterInitValueSInt32,Com_TxFilterInitValueSInt64,Com_TxFilterInitValueFloat32,Com_TxFilterInitValueFloat64 */
#define Com_GetTxBufferLengthOfTxSigInfo(Index)                       ((Com_TxBufferLengthOfTxSigInfoType)((Com_GetTxBufferEndIdxOfTxSigInfo(Index) - Com_GetTxBufferStartIdxOfTxSigInfo(Index))))  /**< the number of relations pointing to Com_TxBuffer */
#define Com_IsTxBufferUbIdxInTxBufferUsedOfTxSigInfo(Index)           Com_IsUbMaskUsedOfTxSigInfo(Index)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TxBuffer */
#define Com_IsTxBufferUsedOfTxSigInfo(Index)                          (((boolean)(Com_GetTxBufferLengthOfTxSigInfo(Index) != 0)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxBuffer */
#define Com_IsTxSigGrpInfoUsedOfTxSigInfo(Index)                      (((boolean)(Com_GetTxSigGrpInfoIdxOfTxSigInfo(Index) != COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TxSigGrpInfo */
#define Com_GetTxSigInfoFilterInitValueInd(Index)                     ((Com_TxSigInfoFilterInitValueIndType)(((Index) + 335U)))  /**< the indexes of the 1:1 sorted relation pointing to Com_TxSigInfo */
#define Com_IsCbkTxTOutFuncPtrIndUsedOfTxTOutInfo(Index)              (((boolean)(Com_GetCbkTxTOutFuncPtrIndStartIdxOfTxTOutInfo(Index) != COM_NO_CBKTXTOUTFUNCPTRINDSTARTIDXOFTXTOUTINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_CbkTxTOutFuncPtrInd */
#define Com_GetBufferSizeOfTxTpInfo(Index)                            Com_GetTxBufferLengthOfTxTpInfo(Index)
#define Com_GetTxBufferLengthOfTxTpInfo(Index)                        ((Com_TxBufferLengthOfTxTpInfoType)((Com_GetTxBufferEndIdxOfTxTpInfo(Index) - Com_GetTxBufferStartIdxOfTxTpInfo(Index))))  /**< the number of relations pointing to Com_TxBuffer */
#define Com_IsTxBufferUsedOfTxTpInfo(Index)                           (((boolean)(Com_GetTxBufferLengthOfTxTpInfo(Index) != 0)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxBuffer */
#define Com_IsTxSigInfoDynSigUsedOfTxTpInfo(Index)                    (((boolean)(Com_GetTxSigInfoDynSigIdxOfTxTpInfo(Index) != COM_NO_TXSIGINFODYNSIGIDXOFTXTPINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TxSigInfo */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCSetDataMacros  Com Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define Com_SetCurrentTxMode(Index, Value)                            Com_GetCurrentTxModeOfPCConfig()[(Index)] = (Value)
#define Com_SetCycleTimeCnt(Index, Value)                             Com_GetCycleTimeCntOfPCConfig()[(Index)] = (Value)
#define Com_SetCyclicSendRequest(Index, Value)                        Com_GetCyclicSendRequestOfPCConfig()[(Index)] = (Value)
#define Com_SetDelayTimeCnt(Index, Value)                             Com_GetDelayTimeCntOfPCConfig()[(Index)] = (Value)
#define Com_SetGatewayDescriptionProcessingISRLockCounter(Value)      Com_GetGatewayDescriptionProcessingISRLockCounterOfPCConfig() = (Value)
#define Com_SetGatewayProcessingISRLockCounter(Value)                 Com_GetGatewayProcessingISRLockCounterOfPCConfig() = (Value)
#define Com_SetGwEvent(Index, Value)                                  Com_GetGwEventOfPCConfig()[(Index)] = (Value)
#define Com_SetGwEventCacheIndex(Value)                               Com_GetGwEventCacheIndexOfPCConfig() = (Value)
#define Com_SetHandleRxPduDeferred(Index, Value)                      Com_GetHandleRxPduDeferredOfPCConfig()[(Index)] = (Value)
#define Com_SetHandleTxPduDeferred(Index, Value)                      Com_GetHandleTxPduDeferredOfPCConfig()[(Index)] = (Value)
#define Com_SetInitialized(Value)                                     Com_GetInitializedOfPCConfig() = (Value)
#define Com_SetRepCnt(Index, Value)                                   Com_GetRepCntOfPCConfig()[(Index)] = (Value)
#define Com_SetRepCycleCnt(Index, Value)                              Com_GetRepCycleCntOfPCConfig()[(Index)] = (Value)
#define Com_SetRxDeadlineMonitoringISRLockCounter(Value)              Com_GetRxDeadlineMonitoringISRLockCounterOfPCConfig() = (Value)
#define Com_SetRxDefPduBuffer(Index, Value)                           Com_GetRxDefPduBufferOfPCConfig()[(Index)] = (Value)
#define Com_SetRxDeferredFctPtrCache(Index, Value)                    Com_GetRxDeferredFctPtrCacheOfPCConfig()[(Index)] = (Value)
#define Com_SetRxDeferredProcessingISRLockCounter(Value)              Com_GetRxDeferredProcessingISRLockCounterOfPCConfig() = (Value)
#define Com_SetRxDynSignalLength(Index, Value)                        Com_GetRxDynSignalLengthOfPCConfig()[(Index)] = (Value)
#define Com_SetRxDynSignalTmpLengthForSignalGroups(Index, Value)      Com_GetRxDynSignalTmpLengthForSignalGroupsOfPCConfig()[(Index)] = (Value)
#define Com_SetRxIPduGroupISRLockCounter(Value)                       Com_GetRxIPduGroupISRLockCounterOfPCConfig() = (Value)
#define Com_SetRxPduDmState(Index, Value)                             Com_GetRxPduDmStateOfPCConfig()[(Index)] = (Value)
#define Com_SetRxPduGrpActive(Index, Value)                           Com_GetRxPduGrpActiveOfPCConfig()[(Index)] = (Value)
#define Com_SetRxSigBufferArrayBased(Index, Value)                    Com_GetRxSigBufferArrayBasedOfPCConfig()[(Index)] = (Value)
#define Com_SetRxSigBufferSInt16(Index, Value)                        Com_GetRxSigBufferSInt16OfPCConfig()[(Index)] = (Value)
#define Com_SetRxSigBufferUInt16(Index, Value)                        Com_GetRxSigBufferUInt16OfPCConfig()[(Index)] = (Value)
#define Com_SetRxSigBufferUInt32(Index, Value)                        Com_GetRxSigBufferUInt32OfPCConfig()[(Index)] = (Value)
#define Com_SetRxSigBufferUInt8(Index, Value)                         Com_GetRxSigBufferUInt8OfPCConfig()[(Index)] = (Value)
#define Com_SetRxTOutCnt(Index, Value)                                Com_GetRxTOutCntOfPCConfig()[(Index)] = (Value)
#define Com_SetRxTpBuffer(Index, Value)                               Com_GetRxTpBufferOfPCConfig()[(Index)] = (Value)
#define Com_SetRxTpConnectionState(Index, Value)                      Com_GetRxTpConnectionStateOfPCConfig()[(Index)] = (Value)
#define Com_SetRxTpSduLength(Index, Value)                            Com_GetRxTpSduLengthOfPCConfig()[(Index)] = (Value)
#define Com_SetRxTpWrittenBytesCounter(Index, Value)                  Com_GetRxTpWrittenBytesCounterOfPCConfig()[(Index)] = (Value)
#define Com_SetSigGrpEventFlag(Index, Value)                          Com_GetSigGrpEventFlagOfPCConfig()[(Index)] = (Value)
#define Com_SetTmpRxBuffer(Index, Value)                              Com_GetTmpRxBufferOfPCConfig()[(Index)] = (Value)
#define Com_SetTmpRxShdBufferArrayBased(Index, Value)                 Com_GetTmpRxShdBufferArrayBasedOfPCConfig()[(Index)] = (Value)
#define Com_SetTmpRxShdBufferUInt16(Index, Value)                     Com_GetTmpRxShdBufferUInt16OfPCConfig()[(Index)] = (Value)
#define Com_SetTmpRxShdBufferUInt32(Index, Value)                     Com_GetTmpRxShdBufferUInt32OfPCConfig()[(Index)] = (Value)
#define Com_SetTmpRxShdBufferUInt8(Index, Value)                      Com_GetTmpRxShdBufferUInt8OfPCConfig()[(Index)] = (Value)
#define Com_SetTransmitRequest(Index, Value)                          Com_GetTransmitRequestOfPCConfig()[(Index)] = (Value)
#define Com_SetTxBuffer(Index, Value)                                 Com_GetTxBufferOfPCConfig()[(Index)] = (Value)
#define Com_SetTxCyclicProcessingISRLockCounter(Value)                Com_GetTxCyclicProcessingISRLockCounterOfPCConfig() = (Value)
#define Com_SetTxDeadlineMonitoringISRLockCounter(Value)              Com_GetTxDeadlineMonitoringISRLockCounterOfPCConfig() = (Value)
#define Com_SetTxDynSignalLength(Index, Value)                        Com_GetTxDynSignalLengthOfPCConfig()[(Index)] = (Value)
#define Com_SetTxFilterOldValueUInt16(Index, Value)                   Com_GetTxFilterOldValueUInt16OfPCConfig()[(Index)] = (Value)
#define Com_SetTxFilterOldValueUInt8(Index, Value)                    Com_GetTxFilterOldValueUInt8OfPCConfig()[(Index)] = (Value)
#define Com_SetTxIPduGroupISRLockCounter(Value)                       Com_GetTxIPduGroupISRLockCounterOfPCConfig() = (Value)
#define Com_SetTxPduGrpActive(Index, Value)                           Com_GetTxPduGrpActiveOfPCConfig()[(Index)] = (Value)
#define Com_SetTxProcessingISRLockCounter(Value)                      Com_GetTxProcessingISRLockCounterOfPCConfig() = (Value)
#define Com_SetTxSduLength(Index, Value)                              Com_GetTxSduLengthOfPCConfig()[(Index)] = (Value)
#define Com_SetTxTOutCnt(Index, Value)                                Com_GetTxTOutCntOfPCConfig()[(Index)] = (Value)
#define Com_SetTxTmpTpPduLength(Index, Value)                         Com_GetTxTmpTpPduLengthOfPCConfig()[(Index)] = (Value)
#define Com_SetTxTpConnectionState(Index, Value)                      Com_GetTxTpConnectionStateOfPCConfig()[(Index)] = (Value)
#define Com_SetTxTpSduLength(Index, Value)                            Com_GetTxTpSduLengthOfPCConfig()[(Index)] = (Value)
#define Com_SetTxTpWrittenBytesCounter(Index, Value)                  Com_GetTxTpWrittenBytesCounterOfPCConfig()[(Index)] = (Value)
#define Com_SetWaitingForConfirmation(Index, Value)                   Com_GetWaitingForConfirmationOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGetAddressOfDataMacros  Com Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define Com_GetAddrConstValueArrayBased(Index)                        &Com_GetConstValueArrayBased(Index)
#define Com_GetAddrConstValueSInt16(Index)                            &Com_GetConstValueSInt16(Index)
#define Com_GetAddrConstValueUInt16(Index)                            &Com_GetConstValueUInt16(Index)
#define Com_GetAddrConstValueUInt32(Index)                            &Com_GetConstValueUInt32(Index)
#define Com_GetAddrConstValueUInt8(Index)                             &Com_GetConstValueUInt8(Index)
#define Com_GetAddrRxDefPduBuffer(Index)                              &Com_GetRxDefPduBuffer(Index)
#define Com_GetAddrRxDeferredFctPtrCache(Index)                       &Com_GetRxDeferredFctPtrCache(Index)
#define Com_GetAddrRxSigBufferArrayBased(Index)                       &Com_GetRxSigBufferArrayBased(Index)
#define Com_GetAddrRxSigBufferSInt16(Index)                           &Com_GetRxSigBufferSInt16(Index)
#define Com_GetAddrRxSigBufferUInt16(Index)                           &Com_GetRxSigBufferUInt16(Index)
#define Com_GetAddrRxSigBufferUInt32(Index)                           &Com_GetRxSigBufferUInt32(Index)
#define Com_GetAddrRxSigBufferUInt8(Index)                            &Com_GetRxSigBufferUInt8(Index)
#define Com_GetAddrRxTpBuffer(Index)                                  &Com_GetRxTpBuffer(Index)
#define Com_GetAddrTmpRxBuffer(Index)                                 &Com_GetTmpRxBuffer(Index)
#define Com_GetAddrTmpRxShdBufferArrayBased(Index)                    &Com_GetTmpRxShdBufferArrayBased(Index)
#define Com_GetAddrTmpRxShdBufferUInt16(Index)                        &Com_GetTmpRxShdBufferUInt16(Index)
#define Com_GetAddrTmpRxShdBufferUInt32(Index)                        &Com_GetTmpRxShdBufferUInt32(Index)
#define Com_GetAddrTmpRxShdBufferUInt8(Index)                         &Com_GetTmpRxShdBufferUInt8(Index)
#define Com_GetAddrTxBuffer(Index)                                    &Com_GetTxBuffer(Index)
#define Com_GetAddrTxFilterInitValueUInt16(Index)                     &Com_GetTxFilterInitValueUInt16(Index)
#define Com_GetAddrTxFilterInitValueUInt8(Index)                      &Com_GetTxFilterInitValueUInt8(Index)
#define Com_GetAddrTxFilterOldValueUInt16(Index)                      &Com_GetTxFilterOldValueUInt16(Index)
#define Com_GetAddrTxFilterOldValueUInt8(Index)                       &Com_GetTxFilterOldValueUInt8(Index)
#define Com_GetAddrTxPduInitValue(Index)                              &Com_GetTxPduInitValue(Index)
#define Com_GetAddrTxSigGrpMask(Index)                                &Com_GetTxSigGrpMask(Index)
/** 
  \}
*/ 

/** 
  \defgroup  ComPCHasMacros  Com Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Com_HasActivatableRxComIPdus()                                (TRUE != FALSE)
#define Com_HasRxPduInfoIdxOfActivatableRxComIPdus()                  (TRUE != FALSE)
#define Com_HasActivatableTxComIPdus()                                (TRUE != FALSE)
#define Com_HasTxPduInfoIdxOfActivatableTxComIPdus()                  (TRUE != FALSE)
#define Com_HasCbkRxTOutFuncPtr()                                     (TRUE != FALSE)
#define Com_HasCbkRxTOutFuncPtrInd()                                  (TRUE != FALSE)
#define Com_HasCbkTxTOutFuncPtr()                                     (TRUE != FALSE)
#define Com_HasCbkTxTOutFuncPtrInd()                                  (TRUE != FALSE)
#define Com_HasConfigId()                                             (TRUE != FALSE)
#define Com_HasConstValueArrayBased()                                 (TRUE != FALSE)
#define Com_HasConstValueSInt16()                                     (TRUE != FALSE)
#define Com_HasConstValueUInt16()                                     (TRUE != FALSE)
#define Com_HasConstValueUInt32()                                     (TRUE != FALSE)
#define Com_HasConstValueUInt8()                                      (TRUE != FALSE)
#define Com_HasCurrentTxMode()                                        (TRUE != FALSE)
#define Com_HasCycleTimeCnt()                                         (TRUE != FALSE)
#define Com_HasCyclicSendRequest()                                    (TRUE != FALSE)
#define Com_HasDelayTimeCnt()                                         (TRUE != FALSE)
#define Com_HasFilterInfo_UInt16()                                    (TRUE != FALSE)
#define Com_HasFilterAlgoOfFilterInfo_UInt16()                        (TRUE != FALSE)
#define Com_HasFilterMaskOfFilterInfo_UInt16()                        (TRUE != FALSE)
#define Com_HasFilterMaxOfFilterInfo_UInt16()                         (TRUE != FALSE)
#define Com_HasFilterMinOfFilterInfo_UInt16()                         (TRUE != FALSE)
#define Com_HasFilterXOfFilterInfo_UInt16()                           (TRUE != FALSE)
#define Com_HasFilterInfo_UInt8()                                     (TRUE != FALSE)
#define Com_HasFilterAlgoOfFilterInfo_UInt8()                         (TRUE != FALSE)
#define Com_HasFilterMaskOfFilterInfo_UInt8()                         (TRUE != FALSE)
#define Com_HasFilterMaxOfFilterInfo_UInt8()                          (TRUE != FALSE)
#define Com_HasFilterMinOfFilterInfo_UInt8()                          (TRUE != FALSE)
#define Com_HasFilterXOfFilterInfo_UInt8()                            (TRUE != FALSE)
#define Com_HasGatewayDescriptionProcessingISRLockCounter()           (TRUE != FALSE)
#define Com_HasGatewayProcessingISRLockCounter()                      (TRUE != FALSE)
#define Com_HasGatewayProcessingISRLockThreshold()                    (TRUE != FALSE)
#define Com_HasGwEvent()                                              (TRUE != FALSE)
#define Com_HasGwEventCacheIndex()                                    (TRUE != FALSE)
#define Com_HasGwGrpSigMapping()                                      (TRUE != FALSE)
#define Com_HasRxAccessInfoIdxOfGwGrpSigMapping()                     (TRUE != FALSE)
#define Com_HasTxSigIdOfGwGrpSigMapping()                             (TRUE != FALSE)
#define Com_HasGwInfo()                                               (TRUE != FALSE)
#define Com_HasGwSigGrpMappingEndIdxOfGwInfo()                        (TRUE != FALSE)
#define Com_HasGwSigGrpMappingStartIdxOfGwInfo()                      (TRUE != FALSE)
#define Com_HasGwSigGrpMappingUsedOfGwInfo()                          (TRUE != FALSE)
#define Com_HasGwSigMappingEndIdxOfGwInfo()                           (TRUE != FALSE)
#define Com_HasGwSigMappingStartIdxOfGwInfo()                         (TRUE != FALSE)
#define Com_HasGwSigMappingUsedOfGwInfo()                             (TRUE != FALSE)
#define Com_HasGwSigGrpMapping()                                      (TRUE != FALSE)
#define Com_HasGwGrpSigMappingEndIdxOfGwSigGrpMapping()               (TRUE != FALSE)
#define Com_HasGwGrpSigMappingStartIdxOfGwSigGrpMapping()             (TRUE != FALSE)
#define Com_HasTxSigGrpIdOfGwSigGrpMapping()                          (TRUE != FALSE)
#define Com_HasGwSigMapping()                                         (TRUE != FALSE)
#define Com_HasRxAccessInfoIdxOfGwSigMapping()                        (TRUE != FALSE)
#define Com_HasTxSigIdOfGwSigMapping()                                (TRUE != FALSE)
#define Com_HasHandleRxPduDeferred()                                  (TRUE != FALSE)
#define Com_HasHandleTxPduDeferred()                                  (TRUE != FALSE)
#define Com_HasInitialized()                                          (TRUE != FALSE)
#define Com_HasPduGrpCnt()                                            (TRUE != FALSE)
#define Com_HasPduGrpVector()                                         (TRUE != FALSE)
#define Com_HasRepCnt()                                               (TRUE != FALSE)
#define Com_HasRepCycleCnt()                                          (TRUE != FALSE)
#define Com_HasRxAccessInfo()                                         (TRUE != FALSE)
#define Com_HasApplTypeOfRxAccessInfo()                               (TRUE != FALSE)
#define Com_HasBitLengthOfRxAccessInfo()                              (TRUE != FALSE)
#define Com_HasBitPositionOfRxAccessInfo()                            (TRUE != FALSE)
#define Com_HasBufferIdxOfRxAccessInfo()                              (TRUE != FALSE)
#define Com_HasBufferUsedOfRxAccessInfo()                             (TRUE != FALSE)
#define Com_HasBusAccOfRxAccessInfo()                                 (TRUE != FALSE)
#define Com_HasByteLengthOfRxAccessInfo()                             (TRUE != FALSE)
#define Com_HasBytePositionOfRxAccessInfo()                           (TRUE != FALSE)
#define Com_HasConstValueArrayBasedInitValueEndIdxOfRxAccessInfo()    (TRUE != FALSE)
#define Com_HasConstValueArrayBasedInitValueLengthOfRxAccessInfo()    (TRUE != FALSE)
#define Com_HasConstValueArrayBasedInitValueStartIdxOfRxAccessInfo()  (TRUE != FALSE)
#define Com_HasConstValueArrayBasedInitValueUsedOfRxAccessInfo()      (TRUE != FALSE)
#define Com_HasGwInfoIdxOfRxAccessInfo()                              (TRUE != FALSE)
#define Com_HasGwInfoUsedOfRxAccessInfo()                             (TRUE != FALSE)
#define Com_HasInitValueIdxOfRxAccessInfo()                           (TRUE != FALSE)
#define Com_HasInitValueUsedOfRxAccessInfo()                          (TRUE != FALSE)
#define Com_HasIsGroupSignalOfRxAccessInfo()                          (TRUE != FALSE)
#define Com_HasRoutingBufferIdxOfRxAccessInfo()                       (TRUE != FALSE)
#define Com_HasRoutingBufferUsedOfRxAccessInfo()                      (TRUE != FALSE)
#define Com_HasRxDataTimeoutSubstitutionValueIdxOfRxAccessInfo()      (TRUE != FALSE)
#define Com_HasRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo()     (TRUE != FALSE)
#define Com_HasRxPduInfoIdxOfRxAccessInfo()                           (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedBufferEndIdxOfRxAccessInfo()      (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedBufferLengthOfRxAccessInfo()      (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo()    (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedBufferUsedOfRxAccessInfo()        (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedRoutingBufferEndIdxOfRxAccessInfo() (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedRoutingBufferLengthOfRxAccessInfo() (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedRoutingBufferStartIdxOfRxAccessInfo() (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedRoutingBufferUsedOfRxAccessInfo() (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedShdBufferEndIdxOfRxAccessInfo()   (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedShdBufferLengthOfRxAccessInfo()   (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfo() (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedShdBufferUsedOfRxAccessInfo()     (TRUE != FALSE)
#define Com_HasRxTOutInfoIdxOfRxAccessInfo()                          (TRUE != FALSE)
#define Com_HasRxTOutInfoUsedOfRxAccessInfo()                         (TRUE != FALSE)
#define Com_HasShdBufferIdxOfRxAccessInfo()                           (TRUE != FALSE)
#define Com_HasShdBufferUsedOfRxAccessInfo()                          (TRUE != FALSE)
#define Com_HasSignExtRequiredOfRxAccessInfo()                        (TRUE != FALSE)
#define Com_HasStartByteInPduPositionOfRxAccessInfo()                 (TRUE != FALSE)
#define Com_HasTmpBufferIdxOfRxAccessInfo()                           (TRUE != FALSE)
#define Com_HasTmpBufferUsedOfRxAccessInfo()                          (TRUE != FALSE)
#define Com_HasTmpRxShdBufferArrayBasedTmpBufferEndIdxOfRxAccessInfo() (TRUE != FALSE)
#define Com_HasTmpRxShdBufferArrayBasedTmpBufferLengthOfRxAccessInfo() (TRUE != FALSE)
#define Com_HasTmpRxShdBufferArrayBasedTmpBufferStartIdxOfRxAccessInfo() (TRUE != FALSE)
#define Com_HasTmpRxShdBufferArrayBasedTmpBufferUsedOfRxAccessInfo()  (TRUE != FALSE)
#define Com_HasRxAccessInfoGrpSigInd()                                (TRUE != FALSE)
#define Com_HasRxAccessInfoInd()                                      (TRUE != FALSE)
#define Com_HasRxCbkFuncPtr()                                         (TRUE != FALSE)
#define Com_HasRxDeadlineMonitoringISRLockCounter()                   (TRUE != FALSE)
#define Com_HasRxDeadlineMonitoringISRLockThreshold()                 (TRUE != FALSE)
#define Com_HasRxDefPduBuffer()                                       (TRUE != FALSE)
#define Com_HasRxDeferredFctPtrCache()                                (TRUE != FALSE)
#define Com_HasRxDeferredProcessingISRLockCounter()                   (TRUE != FALSE)
#define Com_HasRxDeferredProcessingISRLockThreshold()                 (TRUE != FALSE)
#define Com_HasRxDynSignalLength()                                    (TRUE != FALSE)
#define Com_HasRxDynSignalTmpLengthForSignalGroups()                  (TRUE != FALSE)
#define Com_HasRxIPduGroupISRLockCounter()                            (TRUE != FALSE)
#define Com_HasRxIPduGroupISRLockThreshold()                          (TRUE != FALSE)
#define Com_HasRxPduDmState()                                         (TRUE != FALSE)
#define Com_HasRxPduGrpActive()                                       (TRUE != FALSE)
#define Com_HasRxPduGrpInfo()                                         (TRUE != FALSE)
#define Com_HasPduGrpVectorEndIdxOfRxPduGrpInfo()                     (TRUE != FALSE)
#define Com_HasPduGrpVectorStartIdxOfRxPduGrpInfo()                   (TRUE != FALSE)
#define Com_HasPduGrpVectorUsedOfRxPduGrpInfo()                       (TRUE != FALSE)
#define Com_HasRxPduInfo()                                            (TRUE != FALSE)
#define Com_HasGwInfoEndIdxOfRxPduInfo()                              (TRUE != FALSE)
#define Com_HasGwInfoStartIdxOfRxPduInfo()                            (TRUE != FALSE)
#define Com_HasGwInfoUsedOfRxPduInfo()                                (TRUE != FALSE)
#define Com_HasHandleRxPduDeferredIdxOfRxPduInfo()                    (TRUE != FALSE)
#define Com_HasHandleRxPduDeferredUsedOfRxPduInfo()                   (TRUE != FALSE)
#define Com_HasRxAccessInfoIndEndIdxOfRxPduInfo()                     (TRUE != FALSE)
#define Com_HasRxAccessInfoIndStartIdxOfRxPduInfo()                   (TRUE != FALSE)
#define Com_HasRxAccessInfoIndUsedOfRxPduInfo()                       (TRUE != FALSE)
#define Com_HasRxDefPduBufferEndIdxOfRxPduInfo()                      (TRUE != FALSE)
#define Com_HasRxDefPduBufferLengthOfRxPduInfo()                      (TRUE != FALSE)
#define Com_HasRxDefPduBufferStartIdxOfRxPduInfo()                    (TRUE != FALSE)
#define Com_HasRxDefPduBufferUsedOfRxPduInfo()                        (TRUE != FALSE)
#define Com_HasRxSigGrpInfoIndEndIdxOfRxPduInfo()                     (TRUE != FALSE)
#define Com_HasRxSigGrpInfoIndStartIdxOfRxPduInfo()                   (TRUE != FALSE)
#define Com_HasRxSigGrpInfoIndUsedOfRxPduInfo()                       (TRUE != FALSE)
#define Com_HasRxSigInfoEndIdxOfRxPduInfo()                           (TRUE != FALSE)
#define Com_HasRxSigInfoStartIdxOfRxPduInfo()                         (TRUE != FALSE)
#define Com_HasRxSigInfoUsedOfRxPduInfo()                             (TRUE != FALSE)
#define Com_HasRxTOutInfoIdxOfRxPduInfo()                             (TRUE != FALSE)
#define Com_HasRxTOutInfoIndEndIdxOfRxPduInfo()                       (TRUE != FALSE)
#define Com_HasRxTOutInfoIndStartIdxOfRxPduInfo()                     (TRUE != FALSE)
#define Com_HasRxTOutInfoIndUsedOfRxPduInfo()                         (TRUE != FALSE)
#define Com_HasRxTOutInfoUsedOfRxPduInfo()                            (TRUE != FALSE)
#define Com_HasRxTpInfoIdxOfRxPduInfo()                               (TRUE != FALSE)
#define Com_HasRxTpInfoUsedOfRxPduInfo()                              (TRUE != FALSE)
#define Com_HasSignalProcessingOfRxPduInfo()                          (TRUE != FALSE)
#define Com_HasTypeOfRxPduInfo()                                      (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBased()                                (TRUE != FALSE)
#define Com_HasRxSigBufferSInt16()                                    (TRUE != FALSE)
#define Com_HasRxSigBufferUInt16()                                    (TRUE != FALSE)
#define Com_HasRxSigBufferUInt32()                                    (TRUE != FALSE)
#define Com_HasRxSigBufferUInt8()                                     (TRUE != FALSE)
#define Com_HasRxSigGrpInfo()                                         (TRUE != FALSE)
#define Com_HasGwInfoIdxOfRxSigGrpInfo()                              (TRUE != FALSE)
#define Com_HasGwInfoUsedOfRxSigGrpInfo()                             (TRUE != FALSE)
#define Com_HasRxAccessInfoGrpSigIndEndIdxOfRxSigGrpInfo()            (TRUE != FALSE)
#define Com_HasRxAccessInfoGrpSigIndStartIdxOfRxSigGrpInfo()          (TRUE != FALSE)
#define Com_HasRxAccessInfoGrpSigIndUsedOfRxSigGrpInfo()              (TRUE != FALSE)
#define Com_HasRxCbkFuncPtrAckIdxOfRxSigGrpInfo()                     (TRUE != FALSE)
#define Com_HasRxCbkFuncPtrAckUsedOfRxSigGrpInfo()                    (TRUE != FALSE)
#define Com_HasRxPduInfoIdxOfRxSigGrpInfo()                           (TRUE != FALSE)
#define Com_HasShdBufferRequiredOfRxSigGrpInfo()                      (TRUE != FALSE)
#define Com_HasSignalProcessingOfRxSigGrpInfo()                       (TRUE != FALSE)
#define Com_HasStartBytePositionOfRxSigGrpInfo()                      (TRUE != FALSE)
#define Com_HasUbIdxOfRxSigGrpInfo()                                  (TRUE != FALSE)
#define Com_HasUbMaskIdxOfRxSigGrpInfo()                              (TRUE != FALSE)
#define Com_HasUbMaskUsedOfRxSigGrpInfo()                             (TRUE != FALSE)
#define Com_HasValidDlcOfRxSigGrpInfo()                               (TRUE != FALSE)
#define Com_HasRxSigGrpInfoInd()                                      (TRUE != FALSE)
#define Com_HasRxSigInfo()                                            (TRUE != FALSE)
#define Com_HasGwInfoIdxOfRxSigInfo()                                 (TRUE != FALSE)
#define Com_HasGwInfoUsedOfRxSigInfo()                                (TRUE != FALSE)
#define Com_HasRxAccessInfoIdxOfRxSigInfo()                           (TRUE != FALSE)
#define Com_HasRxCbkFuncPtrAckIdxOfRxSigInfo()                        (TRUE != FALSE)
#define Com_HasRxCbkFuncPtrAckUsedOfRxSigInfo()                       (TRUE != FALSE)
#define Com_HasRxTOutInfoIdxOfRxSigInfo()                             (TRUE != FALSE)
#define Com_HasRxTOutInfoUsedOfRxSigInfo()                            (TRUE != FALSE)
#define Com_HasSignalProcessingOfRxSigInfo()                          (TRUE != FALSE)
#define Com_HasUbIdxOfRxSigInfo()                                     (TRUE != FALSE)
#define Com_HasUbMaskIdxOfRxSigInfo()                                 (TRUE != FALSE)
#define Com_HasUbMaskUsedOfRxSigInfo()                                (TRUE != FALSE)
#define Com_HasValidDlcOfRxSigInfo()                                  (TRUE != FALSE)
#define Com_HasRxTOutCnt()                                            (TRUE != FALSE)
#define Com_HasRxTOutInfo()                                           (TRUE != FALSE)
#define Com_HasCbkRxTOutFuncPtrIndEndIdxOfRxTOutInfo()                (TRUE != FALSE)
#define Com_HasCbkRxTOutFuncPtrIndStartIdxOfRxTOutInfo()              (TRUE != FALSE)
#define Com_HasCbkRxTOutFuncPtrIndUsedOfRxTOutInfo()                  (TRUE != FALSE)
#define Com_HasFactorOfRxTOutInfo()                                   (TRUE != FALSE)
#define Com_HasFirstFactorOfRxTOutInfo()                              (TRUE != FALSE)
#define Com_HasRxPduInfoIdxOfRxTOutInfo()                             (TRUE != FALSE)
#define Com_HasRxTOutInfoInd()                                        (TRUE != FALSE)
#define Com_HasRxTpBuffer()                                           (TRUE != FALSE)
#define Com_HasRxTpConnectionState()                                  (TRUE != FALSE)
#define Com_HasRxTpInfo()                                             (TRUE != FALSE)
#define Com_HasBufferSizeOfRxTpInfo()                                 (TRUE != FALSE)
#define Com_HasDynamicInitialLengthOfRxTpInfo()                       (TRUE != FALSE)
#define Com_HasRxAccessInfoDynSigIdxOfRxTpInfo()                      (TRUE != FALSE)
#define Com_HasRxAccessInfoDynSigUsedOfRxTpInfo()                     (TRUE != FALSE)
#define Com_HasRxTpBufferEndIdxOfRxTpInfo()                           (TRUE != FALSE)
#define Com_HasRxTpBufferStartIdxOfRxTpInfo()                         (TRUE != FALSE)
#define Com_HasRxTpBufferUsedOfRxTpInfo()                             (TRUE != FALSE)
#define Com_HasRxTpSduLength()                                        (TRUE != FALSE)
#define Com_HasRxTpWrittenBytesCounter()                              (TRUE != FALSE)
#define Com_HasSigGrpEventFlag()                                      (TRUE != FALSE)
#define Com_HasSizeOfActivatableRxComIPdus()                          (TRUE != FALSE)
#define Com_HasSizeOfActivatableTxComIPdus()                          (TRUE != FALSE)
#define Com_HasSizeOfCbkRxTOutFuncPtr()                               (TRUE != FALSE)
#define Com_HasSizeOfCbkRxTOutFuncPtrInd()                            (TRUE != FALSE)
#define Com_HasSizeOfCbkTxTOutFuncPtr()                               (TRUE != FALSE)
#define Com_HasSizeOfCbkTxTOutFuncPtrInd()                            (TRUE != FALSE)
#define Com_HasSizeOfConstValueArrayBased()                           (TRUE != FALSE)
#define Com_HasSizeOfConstValueSInt16()                               (TRUE != FALSE)
#define Com_HasSizeOfConstValueUInt16()                               (TRUE != FALSE)
#define Com_HasSizeOfConstValueUInt32()                               (TRUE != FALSE)
#define Com_HasSizeOfConstValueUInt8()                                (TRUE != FALSE)
#define Com_HasSizeOfCurrentTxMode()                                  (TRUE != FALSE)
#define Com_HasSizeOfCycleTimeCnt()                                   (TRUE != FALSE)
#define Com_HasSizeOfCyclicSendRequest()                              (TRUE != FALSE)
#define Com_HasSizeOfDelayTimeCnt()                                   (TRUE != FALSE)
#define Com_HasSizeOfFilterInfo_UInt16()                              (TRUE != FALSE)
#define Com_HasSizeOfFilterInfo_UInt8()                               (TRUE != FALSE)
#define Com_HasSizeOfGwEvent()                                        (TRUE != FALSE)
#define Com_HasSizeOfGwGrpSigMapping()                                (TRUE != FALSE)
#define Com_HasSizeOfGwInfo()                                         (TRUE != FALSE)
#define Com_HasSizeOfGwSigGrpMapping()                                (TRUE != FALSE)
#define Com_HasSizeOfGwSigMapping()                                   (TRUE != FALSE)
#define Com_HasSizeOfHandleRxPduDeferred()                            (TRUE != FALSE)
#define Com_HasSizeOfHandleTxPduDeferred()                            (TRUE != FALSE)
#define Com_HasSizeOfPduGrpVector()                                   (TRUE != FALSE)
#define Com_HasSizeOfRepCnt()                                         (TRUE != FALSE)
#define Com_HasSizeOfRepCycleCnt()                                    (TRUE != FALSE)
#define Com_HasSizeOfRxAccessInfo()                                   (TRUE != FALSE)
#define Com_HasSizeOfRxAccessInfoGrpSigInd()                          (TRUE != FALSE)
#define Com_HasSizeOfRxAccessInfoInd()                                (TRUE != FALSE)
#define Com_HasSizeOfRxCbkFuncPtr()                                   (TRUE != FALSE)
#define Com_HasSizeOfRxDefPduBuffer()                                 (TRUE != FALSE)
#define Com_HasSizeOfRxDeferredFctPtrCache()                          (TRUE != FALSE)
#define Com_HasSizeOfRxDynSignalLength()                              (TRUE != FALSE)
#define Com_HasSizeOfRxDynSignalTmpLengthForSignalGroups()            (TRUE != FALSE)
#define Com_HasSizeOfRxPduDmState()                                   (TRUE != FALSE)
#define Com_HasSizeOfRxPduGrpActive()                                 (TRUE != FALSE)
#define Com_HasSizeOfRxPduGrpInfo()                                   (TRUE != FALSE)
#define Com_HasSizeOfRxPduInfo()                                      (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferArrayBased()                          (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferSInt16()                              (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferUInt16()                              (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferUInt32()                              (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferUInt8()                               (TRUE != FALSE)
#define Com_HasSizeOfRxSigGrpInfo()                                   (TRUE != FALSE)
#define Com_HasSizeOfRxSigGrpInfoInd()                                (TRUE != FALSE)
#define Com_HasSizeOfRxSigInfo()                                      (TRUE != FALSE)
#define Com_HasSizeOfRxTOutCnt()                                      (TRUE != FALSE)
#define Com_HasSizeOfRxTOutInfo()                                     (TRUE != FALSE)
#define Com_HasSizeOfRxTOutInfoInd()                                  (TRUE != FALSE)
#define Com_HasSizeOfRxTpBuffer()                                     (TRUE != FALSE)
#define Com_HasSizeOfRxTpConnectionState()                            (TRUE != FALSE)
#define Com_HasSizeOfRxTpInfo()                                       (TRUE != FALSE)
#define Com_HasSizeOfRxTpSduLength()                                  (TRUE != FALSE)
#define Com_HasSizeOfRxTpWrittenBytesCounter()                        (TRUE != FALSE)
#define Com_HasSizeOfSigGrpEventFlag()                                (TRUE != FALSE)
#define Com_HasSizeOfTmpRxBuffer()                                    (TRUE != FALSE)
#define Com_HasSizeOfTmpRxShdBufferArrayBased()                       (TRUE != FALSE)
#define Com_HasSizeOfTmpRxShdBufferUInt16()                           (TRUE != FALSE)
#define Com_HasSizeOfTmpRxShdBufferUInt32()                           (TRUE != FALSE)
#define Com_HasSizeOfTmpRxShdBufferUInt8()                            (TRUE != FALSE)
#define Com_HasSizeOfTransmitRequest()                                (TRUE != FALSE)
#define Com_HasSizeOfTxBuffer()                                       (TRUE != FALSE)
#define Com_HasSizeOfTxDynSignalLength()                              (TRUE != FALSE)
#define Com_HasSizeOfTxFilterInitValueUInt16()                        (TRUE != FALSE)
#define Com_HasSizeOfTxFilterInitValueUInt8()                         (TRUE != FALSE)
#define Com_HasSizeOfTxFilterOldValueUInt16()                         (TRUE != FALSE)
#define Com_HasSizeOfTxFilterOldValueUInt8()                          (TRUE != FALSE)
#define Com_HasSizeOfTxModeFalse()                                    (TRUE != FALSE)
#define Com_HasSizeOfTxModeInfo()                                     (TRUE != FALSE)
#define Com_HasSizeOfTxModeTrue()                                     (TRUE != FALSE)
#define Com_HasSizeOfTxPduGrpActive()                                 (TRUE != FALSE)
#define Com_HasSizeOfTxPduGrpInfo()                                   (TRUE != FALSE)
#define Com_HasSizeOfTxPduInfo()                                      (TRUE != FALSE)
#define Com_HasSizeOfTxPduInitValue()                                 (TRUE != FALSE)
#define Com_HasSizeOfTxSduLength()                                    (TRUE != FALSE)
#define Com_HasSizeOfTxSigGrpInfo()                                   (TRUE != FALSE)
#define Com_HasSizeOfTxSigGrpInfoInd()                                (TRUE != FALSE)
#define Com_HasSizeOfTxSigGrpMask()                                   (TRUE != FALSE)
#define Com_HasSizeOfTxSigInfo()                                      (TRUE != FALSE)
#define Com_HasSizeOfTxSigInfoFilterInitValueInd()                    (TRUE != FALSE)
#define Com_HasSizeOfTxTOutCnt()                                      (TRUE != FALSE)
#define Com_HasSizeOfTxTOutInfo()                                     (TRUE != FALSE)
#define Com_HasSizeOfTxTmpTpPduLength()                               (TRUE != FALSE)
#define Com_HasSizeOfTxTpConnectionState()                            (TRUE != FALSE)
#define Com_HasSizeOfTxTpInfo()                                       (TRUE != FALSE)
#define Com_HasSizeOfTxTpSduLength()                                  (TRUE != FALSE)
#define Com_HasSizeOfTxTpWrittenBytesCounter()                        (TRUE != FALSE)
#define Com_HasSizeOfWaitingForConfirmation()                         (TRUE != FALSE)
#define Com_HasTmpRxBuffer()                                          (TRUE != FALSE)
#define Com_HasTmpRxShdBufferArrayBased()                             (TRUE != FALSE)
#define Com_HasTmpRxShdBufferUInt16()                                 (TRUE != FALSE)
#define Com_HasTmpRxShdBufferUInt32()                                 (TRUE != FALSE)
#define Com_HasTmpRxShdBufferUInt8()                                  (TRUE != FALSE)
#define Com_HasTransmitRequest()                                      (TRUE != FALSE)
#define Com_HasTxBuffer()                                             (TRUE != FALSE)
#define Com_HasTxCyclicProcessingISRLockCounter()                     (TRUE != FALSE)
#define Com_HasTxCyclicProcessingISRLockThreshold()                   (TRUE != FALSE)
#define Com_HasTxDeadlineMonitoringISRLockCounter()                   (TRUE != FALSE)
#define Com_HasTxDeadlineMonitoringISRLockThreshold()                 (TRUE != FALSE)
#define Com_HasTxDynSignalLength()                                    (TRUE != FALSE)
#define Com_HasTxFilterInitValueUInt16()                              (TRUE != FALSE)
#define Com_HasTxFilterInitValueUInt8()                               (TRUE != FALSE)
#define Com_HasTxFilterOldValueUInt16()                               (TRUE != FALSE)
#define Com_HasTxFilterOldValueUInt8()                                (TRUE != FALSE)
#define Com_HasTxIPduGroupISRLockCounter()                            (TRUE != FALSE)
#define Com_HasTxIPduGroupISRLockThreshold()                          (TRUE != FALSE)
#define Com_HasTxModeFalse()                                          (TRUE != FALSE)
#define Com_HasDirectOfTxModeFalse()                                  (TRUE != FALSE)
#define Com_HasPeriodicOfTxModeFalse()                                (TRUE != FALSE)
#define Com_HasTimeOffsetOfTxModeFalse()                              (TRUE != FALSE)
#define Com_HasTimePeriodOfTxModeFalse()                              (TRUE != FALSE)
#define Com_HasTxModeInfo()                                           (TRUE != FALSE)
#define Com_HasInitModeOfTxModeInfo()                                 (TRUE != FALSE)
#define Com_HasMinimumDelayOfTxModeInfo()                             (TRUE != FALSE)
#define Com_HasTxModeFalseIdxOfTxModeInfo()                           (TRUE != FALSE)
#define Com_HasTxModeFalseUsedOfTxModeInfo()                          (TRUE != FALSE)
#define Com_HasTxModeTrueIdxOfTxModeInfo()                            (TRUE != FALSE)
#define Com_HasTxModeTrueUsedOfTxModeInfo()                           (TRUE != FALSE)
#define Com_HasTxSigInfoFilterInitValueIndEndIdxOfTxModeInfo()        (TRUE != FALSE)
#define Com_HasTxSigInfoFilterInitValueIndStartIdxOfTxModeInfo()      (TRUE != FALSE)
#define Com_HasTxSigInfoFilterInitValueIndUsedOfTxModeInfo()          (TRUE != FALSE)
#define Com_HasTxModeTrue()                                           (TRUE != FALSE)
#define Com_HasDirectOfTxModeTrue()                                   (TRUE != FALSE)
#define Com_HasPeriodicOfTxModeTrue()                                 (TRUE != FALSE)
#define Com_HasTimeOffsetOfTxModeTrue()                               (TRUE != FALSE)
#define Com_HasTimePeriodOfTxModeTrue()                               (TRUE != FALSE)
#define Com_HasTxPduGrpActive()                                       (TRUE != FALSE)
#define Com_HasTxPduGrpInfo()                                         (TRUE != FALSE)
#define Com_HasPduGrpVectorEndIdxOfTxPduGrpInfo()                     (TRUE != FALSE)
#define Com_HasPduGrpVectorStartIdxOfTxPduGrpInfo()                   (TRUE != FALSE)
#define Com_HasPduGrpVectorUsedOfTxPduGrpInfo()                       (TRUE != FALSE)
#define Com_HasTxPduInfo()                                            (TRUE != FALSE)
#define Com_HasClrUbOfTxPduInfo()                                     (TRUE != FALSE)
#define Com_HasConstValueUInt8UbClearMaskEndIdxOfTxPduInfo()          (TRUE != FALSE)
#define Com_HasConstValueUInt8UbClearMaskStartIdxOfTxPduInfo()        (TRUE != FALSE)
#define Com_HasConstValueUInt8UbClearMaskUsedOfTxPduInfo()            (TRUE != FALSE)
#define Com_HasExternalIdOfTxPduInfo()                                (TRUE != FALSE)
#define Com_HasMetaDataLengthOfTxPduInfo()                            (TRUE != FALSE)
#define Com_HasPduWithMetaDataLengthOfTxPduInfo()                     (TRUE != FALSE)
#define Com_HasTxBufferEndIdxOfTxPduInfo()                            (TRUE != FALSE)
#define Com_HasTxBufferLengthOfTxPduInfo()                            (TRUE != FALSE)
#define Com_HasTxBufferMetaDataEndIdxOfTxPduInfo()                    (TRUE != FALSE)
#define Com_HasTxBufferMetaDataLengthOfTxPduInfo()                    (TRUE != FALSE)
#define Com_HasTxBufferMetaDataStartIdxOfTxPduInfo()                  (TRUE != FALSE)
#define Com_HasTxBufferMetaDataUsedOfTxPduInfo()                      (TRUE != FALSE)
#define Com_HasTxBufferStartIdxOfTxPduInfo()                          (TRUE != FALSE)
#define Com_HasTxBufferUsedOfTxPduInfo()                              (TRUE != FALSE)
#define Com_HasTxPduInitValueEndIdxOfTxPduInfo()                      (TRUE != FALSE)
#define Com_HasTxPduInitValueMetaDataEndIdxOfTxPduInfo()              (TRUE != FALSE)
#define Com_HasTxPduInitValueMetaDataStartIdxOfTxPduInfo()            (TRUE != FALSE)
#define Com_HasTxPduInitValueMetaDataUsedOfTxPduInfo()                (TRUE != FALSE)
#define Com_HasTxPduInitValueStartIdxOfTxPduInfo()                    (TRUE != FALSE)
#define Com_HasTxPduInitValueUsedOfTxPduInfo()                        (TRUE != FALSE)
#define Com_HasTxSigGrpInfoIndEndIdxOfTxPduInfo()                     (TRUE != FALSE)
#define Com_HasTxSigGrpInfoIndStartIdxOfTxPduInfo()                   (TRUE != FALSE)
#define Com_HasTxSigGrpInfoIndUsedOfTxPduInfo()                       (TRUE != FALSE)
#define Com_HasTxTOutInfoIdxOfTxPduInfo()                             (TRUE != FALSE)
#define Com_HasTxTOutInfoUsedOfTxPduInfo()                            (TRUE != FALSE)
#define Com_HasTxTpInfoIdxOfTxPduInfo()                               (TRUE != FALSE)
#define Com_HasTxTpInfoUsedOfTxPduInfo()                              (TRUE != FALSE)
#define Com_HasTxPduInitValue()                                       (TRUE != FALSE)
#define Com_HasTxProcessingISRLockCounter()                           (TRUE != FALSE)
#define Com_HasTxProcessingISRLockThreshold()                         (TRUE != FALSE)
#define Com_HasTxSduLength()                                          (TRUE != FALSE)
#define Com_HasTxSigGrpInfo()                                         (TRUE != FALSE)
#define Com_HasPduOffsetOfTxSigGrpInfo()                              (TRUE != FALSE)
#define Com_HasTransferPropertyOfTxSigGrpInfo()                       (TRUE != FALSE)
#define Com_HasTxBufferEndIdxOfTxSigGrpInfo()                         (TRUE != FALSE)
#define Com_HasTxBufferLengthOfTxSigGrpInfo()                         (TRUE != FALSE)
#define Com_HasTxBufferSigGrpInTxIPDUEndIdxOfTxSigGrpInfo()           (TRUE != FALSE)
#define Com_HasTxBufferSigGrpInTxIPDULengthOfTxSigGrpInfo()           (TRUE != FALSE)
#define Com_HasTxBufferSigGrpInTxIPDUStartIdxOfTxSigGrpInfo()         (TRUE != FALSE)
#define Com_HasTxBufferStartIdxOfTxSigGrpInfo()                       (TRUE != FALSE)
#define Com_HasTxBufferUbIdxInTxBufferIdxOfTxSigGrpInfo()             (TRUE != FALSE)
#define Com_HasTxBufferUbIdxInTxBufferUsedOfTxSigGrpInfo()            (TRUE != FALSE)
#define Com_HasTxBufferUsedOfTxSigGrpInfo()                           (TRUE != FALSE)
#define Com_HasTxPduInfoIdxOfTxSigGrpInfo()                           (TRUE != FALSE)
#define Com_HasTxSigGrpMaskEndIdxOfTxSigGrpInfo()                     (TRUE != FALSE)
#define Com_HasTxSigGrpMaskLengthOfTxSigGrpInfo()                     (TRUE != FALSE)
#define Com_HasTxSigGrpMaskStartIdxOfTxSigGrpInfo()                   (TRUE != FALSE)
#define Com_HasTxSigGrpMaskUsedOfTxSigGrpInfo()                       (TRUE != FALSE)
#define Com_HasUbMaskIdxOfTxSigGrpInfo()                              (TRUE != FALSE)
#define Com_HasUbMaskUsedOfTxSigGrpInfo()                             (TRUE != FALSE)
#define Com_HasTxSigGrpInfoInd()                                      (TRUE != FALSE)
#define Com_HasTxSigGrpMask()                                         (TRUE != FALSE)
#define Com_HasTxSigInfo()                                            (TRUE != FALSE)
#define Com_HasApplTypeOfTxSigInfo()                                  (TRUE != FALSE)
#define Com_HasBitLengthOfTxSigInfo()                                 (TRUE != FALSE)
#define Com_HasBitPositionOfTxSigInfo()                               (TRUE != FALSE)
#define Com_HasBusAccOfTxSigInfo()                                    (TRUE != FALSE)
#define Com_HasByteLengthOfTxSigInfo()                                (TRUE != FALSE)
#define Com_HasBytePositionOfTxSigInfo()                              (TRUE != FALSE)
#define Com_HasFilterInitValueIdxOfTxSigInfo()                        (TRUE != FALSE)
#define Com_HasFilterInitValueUsedOfTxSigInfo()                       (TRUE != FALSE)
#define Com_HasOnChangeIdxOfTxSigInfo()                               (TRUE != FALSE)
#define Com_HasOnChangeUsedOfTxSigInfo()                              (TRUE != FALSE)
#define Com_HasStartByteInPduPositionOfTxSigInfo()                    (TRUE != FALSE)
#define Com_HasTriggeredOfTxSigInfo()                                 (TRUE != FALSE)
#define Com_HasTxBufferEndIdxOfTxSigInfo()                            (TRUE != FALSE)
#define Com_HasTxBufferLengthOfTxSigInfo()                            (TRUE != FALSE)
#define Com_HasTxBufferStartIdxOfTxSigInfo()                          (TRUE != FALSE)
#define Com_HasTxBufferUbIdxInTxBufferIdxOfTxSigInfo()                (TRUE != FALSE)
#define Com_HasTxBufferUbIdxInTxBufferUsedOfTxSigInfo()               (TRUE != FALSE)
#define Com_HasTxBufferUsedOfTxSigInfo()                              (TRUE != FALSE)
#define Com_HasTxPduInfoIdxOfTxSigInfo()                              (TRUE != FALSE)
#define Com_HasTxSigGrpInfoIdxOfTxSigInfo()                           (TRUE != FALSE)
#define Com_HasTxSigGrpInfoUsedOfTxSigInfo()                          (TRUE != FALSE)
#define Com_HasUbMaskIdxOfTxSigInfo()                                 (TRUE != FALSE)
#define Com_HasUbMaskUsedOfTxSigInfo()                                (TRUE != FALSE)
#define Com_HasTxSigInfoFilterInitValueInd()                          (TRUE != FALSE)
#define Com_HasTxTOutCnt()                                            (TRUE != FALSE)
#define Com_HasTxTOutInfo()                                           (TRUE != FALSE)
#define Com_HasCbkTxTOutFuncPtrIndEndIdxOfTxTOutInfo()                (TRUE != FALSE)
#define Com_HasCbkTxTOutFuncPtrIndStartIdxOfTxTOutInfo()              (TRUE != FALSE)
#define Com_HasCbkTxTOutFuncPtrIndUsedOfTxTOutInfo()                  (TRUE != FALSE)
#define Com_HasFactorOfTxTOutInfo()                                   (TRUE != FALSE)
#define Com_HasModeOfTxTOutInfo()                                     (TRUE != FALSE)
#define Com_HasTxPduInfoIdxOfTxTOutInfo()                             (TRUE != FALSE)
#define Com_HasTxTmpTpPduLength()                                     (TRUE != FALSE)
#define Com_HasTxTpConnectionState()                                  (TRUE != FALSE)
#define Com_HasTxTpInfo()                                             (TRUE != FALSE)
#define Com_HasBufferSizeOfTxTpInfo()                                 (TRUE != FALSE)
#define Com_HasDynamicInitialLengthOfTxTpInfo()                       (TRUE != FALSE)
#define Com_HasTxBufferEndIdxOfTxTpInfo()                             (TRUE != FALSE)
#define Com_HasTxBufferLengthOfTxTpInfo()                             (TRUE != FALSE)
#define Com_HasTxBufferStartIdxOfTxTpInfo()                           (TRUE != FALSE)
#define Com_HasTxBufferUsedOfTxTpInfo()                               (TRUE != FALSE)
#define Com_HasTxSigInfoDynSigIdxOfTxTpInfo()                         (TRUE != FALSE)
#define Com_HasTxSigInfoDynSigUsedOfTxTpInfo()                        (TRUE != FALSE)
#define Com_HasTxTpSduLength()                                        (TRUE != FALSE)
#define Com_HasTxTpWrittenBytesCounter()                              (TRUE != FALSE)
#define Com_HasWaitingForConfirmation()                               (TRUE != FALSE)
#define Com_HasPCConfig()                                             (TRUE != FALSE)
#define Com_HasActivatableRxComIPdusOfPCConfig()                      (TRUE != FALSE)
#define Com_HasActivatableTxComIPdusOfPCConfig()                      (TRUE != FALSE)
#define Com_HasCbkRxTOutFuncPtrIndOfPCConfig()                        (TRUE != FALSE)
#define Com_HasCbkRxTOutFuncPtrOfPCConfig()                           (TRUE != FALSE)
#define Com_HasCbkTxTOutFuncPtrIndOfPCConfig()                        (TRUE != FALSE)
#define Com_HasCbkTxTOutFuncPtrOfPCConfig()                           (TRUE != FALSE)
#define Com_HasConfigIdOfPCConfig()                                   (TRUE != FALSE)
#define Com_HasConstValueArrayBasedOfPCConfig()                       (TRUE != FALSE)
#define Com_HasConstValueSInt16OfPCConfig()                           (TRUE != FALSE)
#define Com_HasConstValueUInt16OfPCConfig()                           (TRUE != FALSE)
#define Com_HasConstValueUInt32OfPCConfig()                           (TRUE != FALSE)
#define Com_HasConstValueUInt8OfPCConfig()                            (TRUE != FALSE)
#define Com_HasCurrentTxModeOfPCConfig()                              (TRUE != FALSE)
#define Com_HasCycleTimeCntOfPCConfig()                               (TRUE != FALSE)
#define Com_HasCyclicSendRequestOfPCConfig()                          (TRUE != FALSE)
#define Com_HasDelayTimeCntOfPCConfig()                               (TRUE != FALSE)
#define Com_HasFilterInfo_UInt16OfPCConfig()                          (TRUE != FALSE)
#define Com_HasFilterInfo_UInt8OfPCConfig()                           (TRUE != FALSE)
#define Com_HasGatewayDescriptionProcessingISRLockCounterOfPCConfig() (TRUE != FALSE)
#define Com_HasGatewayProcessingISRLockCounterOfPCConfig()            (TRUE != FALSE)
#define Com_HasGatewayProcessingISRLockThresholdOfPCConfig()          (TRUE != FALSE)
#define Com_HasGwEventCacheIndexOfPCConfig()                          (TRUE != FALSE)
#define Com_HasGwEventOfPCConfig()                                    (TRUE != FALSE)
#define Com_HasGwGrpSigMappingOfPCConfig()                            (TRUE != FALSE)
#define Com_HasGwInfoOfPCConfig()                                     (TRUE != FALSE)
#define Com_HasGwSigGrpMappingOfPCConfig()                            (TRUE != FALSE)
#define Com_HasGwSigMappingOfPCConfig()                               (TRUE != FALSE)
#define Com_HasHandleRxPduDeferredOfPCConfig()                        (TRUE != FALSE)
#define Com_HasHandleTxPduDeferredOfPCConfig()                        (TRUE != FALSE)
#define Com_HasInitializedOfPCConfig()                                (TRUE != FALSE)
#define Com_HasPduGrpCntOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasPduGrpVectorOfPCConfig()                               (TRUE != FALSE)
#define Com_HasRepCntOfPCConfig()                                     (TRUE != FALSE)
#define Com_HasRepCycleCntOfPCConfig()                                (TRUE != FALSE)
#define Com_HasRxAccessInfoGrpSigIndOfPCConfig()                      (TRUE != FALSE)
#define Com_HasRxAccessInfoIndOfPCConfig()                            (TRUE != FALSE)
#define Com_HasRxAccessInfoOfPCConfig()                               (TRUE != FALSE)
#define Com_HasRxCbkFuncPtrOfPCConfig()                               (TRUE != FALSE)
#define Com_HasRxDeadlineMonitoringISRLockCounterOfPCConfig()         (TRUE != FALSE)
#define Com_HasRxDeadlineMonitoringISRLockThresholdOfPCConfig()       (TRUE != FALSE)
#define Com_HasRxDefPduBufferOfPCConfig()                             (TRUE != FALSE)
#define Com_HasRxDeferredFctPtrCacheOfPCConfig()                      (TRUE != FALSE)
#define Com_HasRxDeferredProcessingISRLockCounterOfPCConfig()         (TRUE != FALSE)
#define Com_HasRxDeferredProcessingISRLockThresholdOfPCConfig()       (TRUE != FALSE)
#define Com_HasRxDynSignalLengthOfPCConfig()                          (TRUE != FALSE)
#define Com_HasRxDynSignalTmpLengthForSignalGroupsOfPCConfig()        (TRUE != FALSE)
#define Com_HasRxIPduGroupISRLockCounterOfPCConfig()                  (TRUE != FALSE)
#define Com_HasRxIPduGroupISRLockThresholdOfPCConfig()                (TRUE != FALSE)
#define Com_HasRxPduDmStateOfPCConfig()                               (TRUE != FALSE)
#define Com_HasRxPduGrpActiveOfPCConfig()                             (TRUE != FALSE)
#define Com_HasRxPduGrpInfoOfPCConfig()                               (TRUE != FALSE)
#define Com_HasRxPduInfoOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasRxSigBufferArrayBasedOfPCConfig()                      (TRUE != FALSE)
#define Com_HasRxSigBufferSInt16OfPCConfig()                          (TRUE != FALSE)
#define Com_HasRxSigBufferUInt16OfPCConfig()                          (TRUE != FALSE)
#define Com_HasRxSigBufferUInt32OfPCConfig()                          (TRUE != FALSE)
#define Com_HasRxSigBufferUInt8OfPCConfig()                           (TRUE != FALSE)
#define Com_HasRxSigGrpInfoIndOfPCConfig()                            (TRUE != FALSE)
#define Com_HasRxSigGrpInfoOfPCConfig()                               (TRUE != FALSE)
#define Com_HasRxSigInfoOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasRxTOutCntOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasRxTOutInfoIndOfPCConfig()                              (TRUE != FALSE)
#define Com_HasRxTOutInfoOfPCConfig()                                 (TRUE != FALSE)
#define Com_HasRxTpBufferOfPCConfig()                                 (TRUE != FALSE)
#define Com_HasRxTpConnectionStateOfPCConfig()                        (TRUE != FALSE)
#define Com_HasRxTpInfoOfPCConfig()                                   (TRUE != FALSE)
#define Com_HasRxTpSduLengthOfPCConfig()                              (TRUE != FALSE)
#define Com_HasRxTpWrittenBytesCounterOfPCConfig()                    (TRUE != FALSE)
#define Com_HasSigGrpEventFlagOfPCConfig()                            (TRUE != FALSE)
#define Com_HasSizeOfActivatableRxComIPdusOfPCConfig()                (TRUE != FALSE)
#define Com_HasSizeOfActivatableTxComIPdusOfPCConfig()                (TRUE != FALSE)
#define Com_HasSizeOfCbkRxTOutFuncPtrIndOfPCConfig()                  (TRUE != FALSE)
#define Com_HasSizeOfCbkRxTOutFuncPtrOfPCConfig()                     (TRUE != FALSE)
#define Com_HasSizeOfCbkTxTOutFuncPtrIndOfPCConfig()                  (TRUE != FALSE)
#define Com_HasSizeOfCbkTxTOutFuncPtrOfPCConfig()                     (TRUE != FALSE)
#define Com_HasSizeOfConstValueArrayBasedOfPCConfig()                 (TRUE != FALSE)
#define Com_HasSizeOfConstValueSInt16OfPCConfig()                     (TRUE != FALSE)
#define Com_HasSizeOfConstValueUInt16OfPCConfig()                     (TRUE != FALSE)
#define Com_HasSizeOfConstValueUInt32OfPCConfig()                     (TRUE != FALSE)
#define Com_HasSizeOfConstValueUInt8OfPCConfig()                      (TRUE != FALSE)
#define Com_HasSizeOfCurrentTxModeOfPCConfig()                        (TRUE != FALSE)
#define Com_HasSizeOfCycleTimeCntOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfCyclicSendRequestOfPCConfig()                    (TRUE != FALSE)
#define Com_HasSizeOfDelayTimeCntOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfFilterInfo_UInt16OfPCConfig()                    (TRUE != FALSE)
#define Com_HasSizeOfFilterInfo_UInt8OfPCConfig()                     (TRUE != FALSE)
#define Com_HasSizeOfGwEventOfPCConfig()                              (TRUE != FALSE)
#define Com_HasSizeOfGwGrpSigMappingOfPCConfig()                      (TRUE != FALSE)
#define Com_HasSizeOfGwInfoOfPCConfig()                               (TRUE != FALSE)
#define Com_HasSizeOfGwSigGrpMappingOfPCConfig()                      (TRUE != FALSE)
#define Com_HasSizeOfGwSigMappingOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfHandleRxPduDeferredOfPCConfig()                  (TRUE != FALSE)
#define Com_HasSizeOfHandleTxPduDeferredOfPCConfig()                  (TRUE != FALSE)
#define Com_HasSizeOfPduGrpVectorOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfRepCntOfPCConfig()                               (TRUE != FALSE)
#define Com_HasSizeOfRepCycleCntOfPCConfig()                          (TRUE != FALSE)
#define Com_HasSizeOfRxAccessInfoGrpSigIndOfPCConfig()                (TRUE != FALSE)
#define Com_HasSizeOfRxAccessInfoIndOfPCConfig()                      (TRUE != FALSE)
#define Com_HasSizeOfRxAccessInfoOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfRxCbkFuncPtrOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfRxDefPduBufferOfPCConfig()                       (TRUE != FALSE)
#define Com_HasSizeOfRxDeferredFctPtrCacheOfPCConfig()                (TRUE != FALSE)
#define Com_HasSizeOfRxDynSignalLengthOfPCConfig()                    (TRUE != FALSE)
#define Com_HasSizeOfRxDynSignalTmpLengthForSignalGroupsOfPCConfig()  (TRUE != FALSE)
#define Com_HasSizeOfRxPduDmStateOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfRxPduGrpActiveOfPCConfig()                       (TRUE != FALSE)
#define Com_HasSizeOfRxPduGrpInfoOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfRxPduInfoOfPCConfig()                            (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferArrayBasedOfPCConfig()                (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferSInt16OfPCConfig()                    (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferUInt16OfPCConfig()                    (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferUInt32OfPCConfig()                    (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferUInt8OfPCConfig()                     (TRUE != FALSE)
#define Com_HasSizeOfRxSigGrpInfoIndOfPCConfig()                      (TRUE != FALSE)
#define Com_HasSizeOfRxSigGrpInfoOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfRxSigInfoOfPCConfig()                            (TRUE != FALSE)
#define Com_HasSizeOfRxTOutCntOfPCConfig()                            (TRUE != FALSE)
#define Com_HasSizeOfRxTOutInfoIndOfPCConfig()                        (TRUE != FALSE)
#define Com_HasSizeOfRxTOutInfoOfPCConfig()                           (TRUE != FALSE)
#define Com_HasSizeOfRxTpBufferOfPCConfig()                           (TRUE != FALSE)
#define Com_HasSizeOfRxTpConnectionStateOfPCConfig()                  (TRUE != FALSE)
#define Com_HasSizeOfRxTpInfoOfPCConfig()                             (TRUE != FALSE)
#define Com_HasSizeOfRxTpSduLengthOfPCConfig()                        (TRUE != FALSE)
#define Com_HasSizeOfRxTpWrittenBytesCounterOfPCConfig()              (TRUE != FALSE)
#define Com_HasSizeOfSigGrpEventFlagOfPCConfig()                      (TRUE != FALSE)
#define Com_HasSizeOfTmpRxBufferOfPCConfig()                          (TRUE != FALSE)
#define Com_HasSizeOfTmpRxShdBufferArrayBasedOfPCConfig()             (TRUE != FALSE)
#define Com_HasSizeOfTmpRxShdBufferUInt16OfPCConfig()                 (TRUE != FALSE)
#define Com_HasSizeOfTmpRxShdBufferUInt32OfPCConfig()                 (TRUE != FALSE)
#define Com_HasSizeOfTmpRxShdBufferUInt8OfPCConfig()                  (TRUE != FALSE)
#define Com_HasSizeOfTransmitRequestOfPCConfig()                      (TRUE != FALSE)
#define Com_HasSizeOfTxBufferOfPCConfig()                             (TRUE != FALSE)
#define Com_HasSizeOfTxDynSignalLengthOfPCConfig()                    (TRUE != FALSE)
#define Com_HasSizeOfTxFilterInitValueUInt16OfPCConfig()              (TRUE != FALSE)
#define Com_HasSizeOfTxFilterInitValueUInt8OfPCConfig()               (TRUE != FALSE)
#define Com_HasSizeOfTxFilterOldValueUInt16OfPCConfig()               (TRUE != FALSE)
#define Com_HasSizeOfTxFilterOldValueUInt8OfPCConfig()                (TRUE != FALSE)
#define Com_HasSizeOfTxModeFalseOfPCConfig()                          (TRUE != FALSE)
#define Com_HasSizeOfTxModeInfoOfPCConfig()                           (TRUE != FALSE)
#define Com_HasSizeOfTxModeTrueOfPCConfig()                           (TRUE != FALSE)
#define Com_HasSizeOfTxPduGrpActiveOfPCConfig()                       (TRUE != FALSE)
#define Com_HasSizeOfTxPduGrpInfoOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfTxPduInfoOfPCConfig()                            (TRUE != FALSE)
#define Com_HasSizeOfTxPduInitValueOfPCConfig()                       (TRUE != FALSE)
#define Com_HasSizeOfTxSduLengthOfPCConfig()                          (TRUE != FALSE)
#define Com_HasSizeOfTxSigGrpInfoIndOfPCConfig()                      (TRUE != FALSE)
#define Com_HasSizeOfTxSigGrpInfoOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfTxSigGrpMaskOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfTxSigInfoFilterInitValueIndOfPCConfig()          (TRUE != FALSE)
#define Com_HasSizeOfTxSigInfoOfPCConfig()                            (TRUE != FALSE)
#define Com_HasSizeOfTxTOutCntOfPCConfig()                            (TRUE != FALSE)
#define Com_HasSizeOfTxTOutInfoOfPCConfig()                           (TRUE != FALSE)
#define Com_HasSizeOfTxTmpTpPduLengthOfPCConfig()                     (TRUE != FALSE)
#define Com_HasSizeOfTxTpConnectionStateOfPCConfig()                  (TRUE != FALSE)
#define Com_HasSizeOfTxTpInfoOfPCConfig()                             (TRUE != FALSE)
#define Com_HasSizeOfTxTpSduLengthOfPCConfig()                        (TRUE != FALSE)
#define Com_HasSizeOfTxTpWrittenBytesCounterOfPCConfig()              (TRUE != FALSE)
#define Com_HasSizeOfWaitingForConfirmationOfPCConfig()               (TRUE != FALSE)
#define Com_HasTmpRxBufferOfPCConfig()                                (TRUE != FALSE)
#define Com_HasTmpRxShdBufferArrayBasedOfPCConfig()                   (TRUE != FALSE)
#define Com_HasTmpRxShdBufferUInt16OfPCConfig()                       (TRUE != FALSE)
#define Com_HasTmpRxShdBufferUInt32OfPCConfig()                       (TRUE != FALSE)
#define Com_HasTmpRxShdBufferUInt8OfPCConfig()                        (TRUE != FALSE)
#define Com_HasTransmitRequestOfPCConfig()                            (TRUE != FALSE)
#define Com_HasTxBufferOfPCConfig()                                   (TRUE != FALSE)
#define Com_HasTxCyclicProcessingISRLockCounterOfPCConfig()           (TRUE != FALSE)
#define Com_HasTxCyclicProcessingISRLockThresholdOfPCConfig()         (TRUE != FALSE)
#define Com_HasTxDeadlineMonitoringISRLockCounterOfPCConfig()         (TRUE != FALSE)
#define Com_HasTxDeadlineMonitoringISRLockThresholdOfPCConfig()       (TRUE != FALSE)
#define Com_HasTxDynSignalLengthOfPCConfig()                          (TRUE != FALSE)
#define Com_HasTxFilterInitValueUInt16OfPCConfig()                    (TRUE != FALSE)
#define Com_HasTxFilterInitValueUInt8OfPCConfig()                     (TRUE != FALSE)
#define Com_HasTxFilterOldValueUInt16OfPCConfig()                     (TRUE != FALSE)
#define Com_HasTxFilterOldValueUInt8OfPCConfig()                      (TRUE != FALSE)
#define Com_HasTxIPduGroupISRLockCounterOfPCConfig()                  (TRUE != FALSE)
#define Com_HasTxIPduGroupISRLockThresholdOfPCConfig()                (TRUE != FALSE)
#define Com_HasTxModeFalseOfPCConfig()                                (TRUE != FALSE)
#define Com_HasTxModeInfoOfPCConfig()                                 (TRUE != FALSE)
#define Com_HasTxModeTrueOfPCConfig()                                 (TRUE != FALSE)
#define Com_HasTxPduGrpActiveOfPCConfig()                             (TRUE != FALSE)
#define Com_HasTxPduGrpInfoOfPCConfig()                               (TRUE != FALSE)
#define Com_HasTxPduInfoOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasTxPduInitValueOfPCConfig()                             (TRUE != FALSE)
#define Com_HasTxProcessingISRLockCounterOfPCConfig()                 (TRUE != FALSE)
#define Com_HasTxProcessingISRLockThresholdOfPCConfig()               (TRUE != FALSE)
#define Com_HasTxSduLengthOfPCConfig()                                (TRUE != FALSE)
#define Com_HasTxSigGrpInfoIndOfPCConfig()                            (TRUE != FALSE)
#define Com_HasTxSigGrpInfoOfPCConfig()                               (TRUE != FALSE)
#define Com_HasTxSigGrpMaskOfPCConfig()                               (TRUE != FALSE)
#define Com_HasTxSigInfoFilterInitValueIndOfPCConfig()                (TRUE != FALSE)
#define Com_HasTxSigInfoOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasTxTOutCntOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasTxTOutInfoOfPCConfig()                                 (TRUE != FALSE)
#define Com_HasTxTmpTpPduLengthOfPCConfig()                           (TRUE != FALSE)
#define Com_HasTxTpConnectionStateOfPCConfig()                        (TRUE != FALSE)
#define Com_HasTxTpInfoOfPCConfig()                                   (TRUE != FALSE)
#define Com_HasTxTpSduLengthOfPCConfig()                              (TRUE != FALSE)
#define Com_HasTxTpWrittenBytesCounterOfPCConfig()                    (TRUE != FALSE)
#define Com_HasWaitingForConfirmationOfPCConfig()                     (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  ComPCIncrementDataMacros  Com Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define Com_IncCycleTimeCnt(Index)                                    Com_GetCycleTimeCnt(Index)++
#define Com_IncDelayTimeCnt(Index)                                    Com_GetDelayTimeCnt(Index)++
#define Com_IncGatewayDescriptionProcessingISRLockCounter()           Com_GetGatewayDescriptionProcessingISRLockCounter()++
#define Com_IncGatewayProcessingISRLockCounter()                      Com_GetGatewayProcessingISRLockCounter()++
#define Com_IncGwEventCacheIndex()                                    Com_GetGwEventCacheIndex()++
#define Com_IncHandleRxPduDeferred(Index)                             Com_GetHandleRxPduDeferred(Index)++
#define Com_IncRepCnt(Index)                                          Com_GetRepCnt(Index)++
#define Com_IncRepCycleCnt(Index)                                     Com_GetRepCycleCnt(Index)++
#define Com_IncRxDeadlineMonitoringISRLockCounter()                   Com_GetRxDeadlineMonitoringISRLockCounter()++
#define Com_IncRxDefPduBuffer(Index)                                  Com_GetRxDefPduBuffer(Index)++
#define Com_IncRxDeferredFctPtrCache(Index)                           Com_GetRxDeferredFctPtrCache(Index)++
#define Com_IncRxDeferredProcessingISRLockCounter()                   Com_GetRxDeferredProcessingISRLockCounter()++
#define Com_IncRxDynSignalLength(Index)                               Com_GetRxDynSignalLength(Index)++
#define Com_IncRxDynSignalTmpLengthForSignalGroups(Index)             Com_GetRxDynSignalTmpLengthForSignalGroups(Index)++
#define Com_IncRxIPduGroupISRLockCounter()                            Com_GetRxIPduGroupISRLockCounter()++
#define Com_IncRxSigBufferArrayBased(Index)                           Com_GetRxSigBufferArrayBased(Index)++
#define Com_IncRxSigBufferSInt16(Index)                               Com_GetRxSigBufferSInt16(Index)++
#define Com_IncRxSigBufferUInt16(Index)                               Com_GetRxSigBufferUInt16(Index)++
#define Com_IncRxSigBufferUInt32(Index)                               Com_GetRxSigBufferUInt32(Index)++
#define Com_IncRxSigBufferUInt8(Index)                                Com_GetRxSigBufferUInt8(Index)++
#define Com_IncRxTOutCnt(Index)                                       Com_GetRxTOutCnt(Index)++
#define Com_IncRxTpBuffer(Index)                                      Com_GetRxTpBuffer(Index)++
#define Com_IncRxTpSduLength(Index)                                   Com_GetRxTpSduLength(Index)++
#define Com_IncRxTpWrittenBytesCounter(Index)                         Com_GetRxTpWrittenBytesCounter(Index)++
#define Com_IncSigGrpEventFlag(Index)                                 Com_GetSigGrpEventFlag(Index)++
#define Com_IncTmpRxBuffer(Index)                                     Com_GetTmpRxBuffer(Index)++
#define Com_IncTmpRxShdBufferArrayBased(Index)                        Com_GetTmpRxShdBufferArrayBased(Index)++
#define Com_IncTmpRxShdBufferUInt16(Index)                            Com_GetTmpRxShdBufferUInt16(Index)++
#define Com_IncTmpRxShdBufferUInt32(Index)                            Com_GetTmpRxShdBufferUInt32(Index)++
#define Com_IncTmpRxShdBufferUInt8(Index)                             Com_GetTmpRxShdBufferUInt8(Index)++
#define Com_IncTxBuffer(Index)                                        Com_GetTxBuffer(Index)++
#define Com_IncTxCyclicProcessingISRLockCounter()                     Com_GetTxCyclicProcessingISRLockCounter()++
#define Com_IncTxDeadlineMonitoringISRLockCounter()                   Com_GetTxDeadlineMonitoringISRLockCounter()++
#define Com_IncTxDynSignalLength(Index)                               Com_GetTxDynSignalLength(Index)++
#define Com_IncTxFilterOldValueUInt16(Index)                          Com_GetTxFilterOldValueUInt16(Index)++
#define Com_IncTxFilterOldValueUInt8(Index)                           Com_GetTxFilterOldValueUInt8(Index)++
#define Com_IncTxIPduGroupISRLockCounter()                            Com_GetTxIPduGroupISRLockCounter()++
#define Com_IncTxProcessingISRLockCounter()                           Com_GetTxProcessingISRLockCounter()++
#define Com_IncTxSduLength(Index)                                     Com_GetTxSduLength(Index)++
#define Com_IncTxTOutCnt(Index)                                       Com_GetTxTOutCnt(Index)++
#define Com_IncTxTmpTpPduLength(Index)                                Com_GetTxTmpTpPduLength(Index)++
#define Com_IncTxTpSduLength(Index)                                   Com_GetTxTpSduLength(Index)++
#define Com_IncTxTpWrittenBytesCounter(Index)                         Com_GetTxTpWrittenBytesCounter(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  ComPCDecrementDataMacros  Com Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define Com_DecCycleTimeCnt(Index)                                    Com_GetCycleTimeCnt(Index)--
#define Com_DecDelayTimeCnt(Index)                                    Com_GetDelayTimeCnt(Index)--
#define Com_DecGatewayDescriptionProcessingISRLockCounter()           Com_GetGatewayDescriptionProcessingISRLockCounter()--
#define Com_DecGatewayProcessingISRLockCounter()                      Com_GetGatewayProcessingISRLockCounter()--
#define Com_DecGwEventCacheIndex()                                    Com_GetGwEventCacheIndex()--
#define Com_DecHandleRxPduDeferred(Index)                             Com_GetHandleRxPduDeferred(Index)--
#define Com_DecRepCnt(Index)                                          Com_GetRepCnt(Index)--
#define Com_DecRepCycleCnt(Index)                                     Com_GetRepCycleCnt(Index)--
#define Com_DecRxDeadlineMonitoringISRLockCounter()                   Com_GetRxDeadlineMonitoringISRLockCounter()--
#define Com_DecRxDefPduBuffer(Index)                                  Com_GetRxDefPduBuffer(Index)--
#define Com_DecRxDeferredFctPtrCache(Index)                           Com_GetRxDeferredFctPtrCache(Index)--
#define Com_DecRxDeferredProcessingISRLockCounter()                   Com_GetRxDeferredProcessingISRLockCounter()--
#define Com_DecRxDynSignalLength(Index)                               Com_GetRxDynSignalLength(Index)--
#define Com_DecRxDynSignalTmpLengthForSignalGroups(Index)             Com_GetRxDynSignalTmpLengthForSignalGroups(Index)--
#define Com_DecRxIPduGroupISRLockCounter()                            Com_GetRxIPduGroupISRLockCounter()--
#define Com_DecRxSigBufferArrayBased(Index)                           Com_GetRxSigBufferArrayBased(Index)--
#define Com_DecRxSigBufferSInt16(Index)                               Com_GetRxSigBufferSInt16(Index)--
#define Com_DecRxSigBufferUInt16(Index)                               Com_GetRxSigBufferUInt16(Index)--
#define Com_DecRxSigBufferUInt32(Index)                               Com_GetRxSigBufferUInt32(Index)--
#define Com_DecRxSigBufferUInt8(Index)                                Com_GetRxSigBufferUInt8(Index)--
#define Com_DecRxTOutCnt(Index)                                       Com_GetRxTOutCnt(Index)--
#define Com_DecRxTpBuffer(Index)                                      Com_GetRxTpBuffer(Index)--
#define Com_DecRxTpSduLength(Index)                                   Com_GetRxTpSduLength(Index)--
#define Com_DecRxTpWrittenBytesCounter(Index)                         Com_GetRxTpWrittenBytesCounter(Index)--
#define Com_DecSigGrpEventFlag(Index)                                 Com_GetSigGrpEventFlag(Index)--
#define Com_DecTmpRxBuffer(Index)                                     Com_GetTmpRxBuffer(Index)--
#define Com_DecTmpRxShdBufferArrayBased(Index)                        Com_GetTmpRxShdBufferArrayBased(Index)--
#define Com_DecTmpRxShdBufferUInt16(Index)                            Com_GetTmpRxShdBufferUInt16(Index)--
#define Com_DecTmpRxShdBufferUInt32(Index)                            Com_GetTmpRxShdBufferUInt32(Index)--
#define Com_DecTmpRxShdBufferUInt8(Index)                             Com_GetTmpRxShdBufferUInt8(Index)--
#define Com_DecTxBuffer(Index)                                        Com_GetTxBuffer(Index)--
#define Com_DecTxCyclicProcessingISRLockCounter()                     Com_GetTxCyclicProcessingISRLockCounter()--
#define Com_DecTxDeadlineMonitoringISRLockCounter()                   Com_GetTxDeadlineMonitoringISRLockCounter()--
#define Com_DecTxDynSignalLength(Index)                               Com_GetTxDynSignalLength(Index)--
#define Com_DecTxFilterOldValueUInt16(Index)                          Com_GetTxFilterOldValueUInt16(Index)--
#define Com_DecTxFilterOldValueUInt8(Index)                           Com_GetTxFilterOldValueUInt8(Index)--
#define Com_DecTxIPduGroupISRLockCounter()                            Com_GetTxIPduGroupISRLockCounter()--
#define Com_DecTxProcessingISRLockCounter()                           Com_GetTxProcessingISRLockCounter()--
#define Com_DecTxSduLength(Index)                                     Com_GetTxSduLength(Index)--
#define Com_DecTxTOutCnt(Index)                                       Com_GetTxTOutCnt(Index)--
#define Com_DecTxTmpTpPduLength(Index)                                Com_GetTxTmpTpPduLength(Index)--
#define Com_DecTxTpSduLength(Index)                                   Com_GetTxTpSduLength(Index)--
#define Com_DecTxTpWrittenBytesCounter(Index)                         Com_GetTxTpWrittenBytesCounter(Index)--
/** 
  \}
*/ 

  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  ComPCIterableTypes  Com Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Com_ActivatableRxComIPdus */
typedef uint8_least Com_ActivatableRxComIPdusIterType;

/**   \brief  type used to iterate Com_ActivatableTxComIPdus */
typedef uint8_least Com_ActivatableTxComIPdusIterType;

/**   \brief  type used to iterate Com_CbkRxTOutFuncPtr */
typedef uint8_least Com_CbkRxTOutFuncPtrIterType;

/**   \brief  type used to iterate Com_CbkRxTOutFuncPtrInd */
typedef uint8_least Com_CbkRxTOutFuncPtrIndIterType;

/**   \brief  type used to iterate Com_CbkTxTOutFuncPtr */
typedef uint8_least Com_CbkTxTOutFuncPtrIterType;

/**   \brief  type used to iterate Com_CbkTxTOutFuncPtrInd */
typedef uint8_least Com_CbkTxTOutFuncPtrIndIterType;

/**   \brief  type used to iterate Com_ConstValueArrayBased */
typedef uint8_least Com_ConstValueArrayBasedIterType;

/**   \brief  type used to iterate Com_ConstValueSInt16 */
typedef uint8_least Com_ConstValueSInt16IterType;

/**   \brief  type used to iterate Com_ConstValueUInt16 */
typedef uint8_least Com_ConstValueUInt16IterType;

/**   \brief  type used to iterate Com_ConstValueUInt32 */
typedef uint8_least Com_ConstValueUInt32IterType;

/**   \brief  type used to iterate Com_ConstValueUInt8 */
typedef uint8_least Com_ConstValueUInt8IterType;

/**   \brief  type used to iterate Com_FilterInfo_UInt16 */
typedef uint8_least Com_FilterInfo_UInt16IterType;

/**   \brief  type used to iterate Com_FilterInfo_UInt8 */
typedef uint8_least Com_FilterInfo_UInt8IterType;

/**   \brief  type used to iterate Com_GwGrpSigMapping */
typedef uint8_least Com_GwGrpSigMappingIterType;

/**   \brief  type used to iterate Com_GwInfo */
typedef uint8_least Com_GwInfoIterType;

/**   \brief  type used to iterate Com_GwSigGrpMapping */
typedef uint8_least Com_GwSigGrpMappingIterType;

/**   \brief  type used to iterate Com_GwSigMapping */
typedef uint8_least Com_GwSigMappingIterType;

/**   \brief  type used to iterate Com_HandleRxPduDeferred */
typedef uint8_least Com_HandleRxPduDeferredIterType;

/**   \brief  type used to iterate Com_PduGrpVector */
typedef uint8_least Com_PduGrpVectorIterType;

/**   \brief  type used to iterate Com_RxAccessInfo */
typedef uint16_least Com_RxAccessInfoIterType;

/**   \brief  type used to iterate Com_RxAccessInfoGrpSigInd */
typedef uint8_least Com_RxAccessInfoGrpSigIndIterType;

/**   \brief  type used to iterate Com_RxAccessInfoInd */
typedef uint16_least Com_RxAccessInfoIndIterType;

/**   \brief  type used to iterate Com_RxCbkFuncPtr */
typedef uint8_least Com_RxCbkFuncPtrIterType;

/**   \brief  type used to iterate Com_RxDefPduBuffer */
typedef uint16_least Com_RxDefPduBufferIterType;

/**   \brief  type used to iterate Com_RxDeferredFctPtrCache */
typedef uint8_least Com_RxDeferredFctPtrCacheIterType;

/**   \brief  type used to iterate Com_RxPduGrpInfo */
typedef uint8_least Com_RxPduGrpInfoIterType;

/**   \brief  type used to iterate Com_RxPduInfo */
typedef uint8_least Com_RxPduInfoIterType;

/**   \brief  type used to iterate Com_RxSigBufferArrayBased */
typedef uint16_least Com_RxSigBufferArrayBasedIterType;

/**   \brief  type used to iterate Com_RxSigBufferSInt16 */
typedef uint8_least Com_RxSigBufferSInt16IterType;

/**   \brief  type used to iterate Com_RxSigBufferUInt16 */
typedef uint8_least Com_RxSigBufferUInt16IterType;

/**   \brief  type used to iterate Com_RxSigBufferUInt32 */
typedef uint8_least Com_RxSigBufferUInt32IterType;

/**   \brief  type used to iterate Com_RxSigBufferUInt8 */
typedef uint16_least Com_RxSigBufferUInt8IterType;

/**   \brief  type used to iterate Com_RxSigGrpInfo */
typedef uint8_least Com_RxSigGrpInfoIterType;

/**   \brief  type used to iterate Com_RxSigGrpInfoInd */
typedef uint8_least Com_RxSigGrpInfoIndIterType;

/**   \brief  type used to iterate Com_RxSigInfo */
typedef uint16_least Com_RxSigInfoIterType;

/**   \brief  type used to iterate Com_RxTOutInfo */
typedef uint8_least Com_RxTOutInfoIterType;

/**   \brief  type used to iterate Com_RxTOutInfoInd */
typedef uint8_least Com_RxTOutInfoIndIterType;

/**   \brief  type used to iterate Com_RxTpBuffer */
typedef uint16_least Com_RxTpBufferIterType;

/**   \brief  type used to iterate Com_RxTpInfo */
typedef uint8_least Com_RxTpInfoIterType;

/**   \brief  type used to iterate Com_TmpRxBuffer */
typedef uint8_least Com_TmpRxBufferIterType;

/**   \brief  type used to iterate Com_TmpRxShdBufferArrayBased */
typedef uint8_least Com_TmpRxShdBufferArrayBasedIterType;

/**   \brief  type used to iterate Com_TmpRxShdBufferUInt16 */
typedef uint8_least Com_TmpRxShdBufferUInt16IterType;

/**   \brief  type used to iterate Com_TmpRxShdBufferUInt32 */
typedef uint8_least Com_TmpRxShdBufferUInt32IterType;

/**   \brief  type used to iterate Com_TmpRxShdBufferUInt8 */
typedef uint8_least Com_TmpRxShdBufferUInt8IterType;

/**   \brief  type used to iterate Com_TxBuffer */
typedef uint16_least Com_TxBufferIterType;

/**   \brief  type used to iterate Com_TxFilterInitValueUInt16 */
typedef uint8_least Com_TxFilterInitValueUInt16IterType;

/**   \brief  type used to iterate Com_TxFilterInitValueUInt8 */
typedef uint8_least Com_TxFilterInitValueUInt8IterType;

/**   \brief  type used to iterate Com_TxModeFalse */
typedef uint8_least Com_TxModeFalseIterType;

/**   \brief  type used to iterate Com_TxModeInfo */
typedef uint8_least Com_TxModeInfoIterType;

/**   \brief  type used to iterate Com_TxModeTrue */
typedef uint8_least Com_TxModeTrueIterType;

/**   \brief  type used to iterate Com_TxPduGrpInfo */
typedef uint8_least Com_TxPduGrpInfoIterType;

/**   \brief  type used to iterate Com_TxPduInfo */
typedef uint8_least Com_TxPduInfoIterType;

/**   \brief  type used to iterate Com_TxPduInitValue */
typedef uint16_least Com_TxPduInitValueIterType;

/**   \brief  type used to iterate Com_TxSigGrpInfo */
typedef uint8_least Com_TxSigGrpInfoIterType;

/**   \brief  type used to iterate Com_TxSigGrpInfoInd */
typedef uint8_least Com_TxSigGrpInfoIndIterType;

/**   \brief  type used to iterate Com_TxSigGrpMask */
typedef uint8_least Com_TxSigGrpMaskIterType;

/**   \brief  type used to iterate Com_TxSigInfo */
typedef uint16_least Com_TxSigInfoIterType;

/**   \brief  type used to iterate Com_TxSigInfoFilterInitValueInd */
typedef uint8_least Com_TxSigInfoFilterInitValueIndIterType;

/**   \brief  type used to iterate Com_TxTOutCnt */
typedef uint8_least Com_TxTOutCntIterType;

/**   \brief  type used to iterate Com_TxTOutInfo */
typedef uint8_least Com_TxTOutInfoIterType;

/**   \brief  type used to iterate Com_TxTpInfo */
typedef uint8_least Com_TxTpInfoIterType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCIterableTypesWithSizeRelations  Com Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate Com_CurrentTxMode */
typedef Com_TxPduInfoIterType Com_CurrentTxModeIterType;

/**   \brief  type used to iterate Com_CycleTimeCnt */
typedef Com_TxPduInfoIterType Com_CycleTimeCntIterType;

/**   \brief  type used to iterate Com_CyclicSendRequest */
typedef Com_TxPduInfoIterType Com_CyclicSendRequestIterType;

/**   \brief  type used to iterate Com_DelayTimeCnt */
typedef Com_TxPduInfoIterType Com_DelayTimeCntIterType;

/**   \brief  type used to iterate Com_GwEvent */
typedef Com_GwInfoIterType Com_GwEventIterType;

/**   \brief  type used to iterate Com_HandleTxPduDeferred */
typedef Com_TxPduInfoIterType Com_HandleTxPduDeferredIterType;

/**   \brief  type used to iterate Com_RepCnt */
typedef Com_TxPduInfoIterType Com_RepCntIterType;

/**   \brief  type used to iterate Com_RepCycleCnt */
typedef Com_TxPduInfoIterType Com_RepCycleCntIterType;

/**   \brief  type used to iterate Com_RxDynSignalLength */
typedef Com_RxTpInfoIterType Com_RxDynSignalLengthIterType;

/**   \brief  type used to iterate Com_RxDynSignalTmpLengthForSignalGroups */
typedef Com_RxTpInfoIterType Com_RxDynSignalTmpLengthForSignalGroupsIterType;

/**   \brief  type used to iterate Com_RxPduDmState */
typedef Com_RxTOutInfoIterType Com_RxPduDmStateIterType;

/**   \brief  type used to iterate Com_RxPduGrpActive */
typedef Com_RxPduInfoIterType Com_RxPduGrpActiveIterType;

/**   \brief  type used to iterate Com_RxTOutCnt */
typedef Com_RxTOutInfoIterType Com_RxTOutCntIterType;

/**   \brief  type used to iterate Com_RxTpConnectionState */
typedef Com_RxTpInfoIterType Com_RxTpConnectionStateIterType;

/**   \brief  type used to iterate Com_RxTpSduLength */
typedef Com_RxTpInfoIterType Com_RxTpSduLengthIterType;

/**   \brief  type used to iterate Com_RxTpWrittenBytesCounter */
typedef Com_RxTpInfoIterType Com_RxTpWrittenBytesCounterIterType;

/**   \brief  type used to iterate Com_SigGrpEventFlag */
typedef Com_TxSigGrpInfoIterType Com_SigGrpEventFlagIterType;

/**   \brief  type used to iterate Com_TransmitRequest */
typedef Com_TxPduInfoIterType Com_TransmitRequestIterType;

/**   \brief  type used to iterate Com_TxDynSignalLength */
typedef Com_TxTpInfoIterType Com_TxDynSignalLengthIterType;

/**   \brief  type used to iterate Com_TxFilterOldValueUInt16 */
typedef Com_TxFilterInitValueUInt16IterType Com_TxFilterOldValueUInt16IterType;

/**   \brief  type used to iterate Com_TxFilterOldValueUInt8 */
typedef Com_TxFilterInitValueUInt8IterType Com_TxFilterOldValueUInt8IterType;

/**   \brief  type used to iterate Com_TxPduGrpActive */
typedef Com_TxPduInfoIterType Com_TxPduGrpActiveIterType;

/**   \brief  type used to iterate Com_TxSduLength */
typedef Com_TxPduInfoIterType Com_TxSduLengthIterType;

/**   \brief  type used to iterate Com_TxTmpTpPduLength */
typedef Com_TxTpInfoIterType Com_TxTmpTpPduLengthIterType;

/**   \brief  type used to iterate Com_TxTpConnectionState */
typedef Com_TxTpInfoIterType Com_TxTpConnectionStateIterType;

/**   \brief  type used to iterate Com_TxTpSduLength */
typedef Com_TxTpInfoIterType Com_TxTpSduLengthIterType;

/**   \brief  type used to iterate Com_TxTpWrittenBytesCounter */
typedef Com_TxTpInfoIterType Com_TxTpWrittenBytesCounterIterType;

/**   \brief  type used to iterate Com_WaitingForConfirmation */
typedef Com_TxPduInfoIterType Com_WaitingForConfirmationIterType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCValueTypes  Com Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for Com_RxPduInfoIdxOfActivatableRxComIPdus */
typedef uint8 Com_RxPduInfoIdxOfActivatableRxComIPdusType;

/**   \brief  value based type definition for Com_TxPduInfoIdxOfActivatableTxComIPdus */
typedef uint8 Com_TxPduInfoIdxOfActivatableTxComIPdusType;

/**   \brief  value based type definition for Com_CbkRxTOutFuncPtrInd */
typedef uint8 Com_CbkRxTOutFuncPtrIndType;

/**   \brief  value based type definition for Com_CbkTxTOutFuncPtrInd */
typedef uint8 Com_CbkTxTOutFuncPtrIndType;

/**   \brief  value based type definition for Com_ConfigId */
typedef uint8 Com_ConfigIdType;

/**   \brief  value based type definition for Com_ConstValueArrayBased */
typedef uint8 Com_ConstValueArrayBasedType;

/**   \brief  value based type definition for Com_ConstValueSInt16 */
typedef sint8 Com_ConstValueSInt16Type;

/**   \brief  value based type definition for Com_ConstValueUInt16 */
typedef uint16 Com_ConstValueUInt16Type;

/**   \brief  value based type definition for Com_ConstValueUInt32 */
typedef uint32 Com_ConstValueUInt32Type;

/**   \brief  value based type definition for Com_ConstValueUInt8 */
typedef uint8 Com_ConstValueUInt8Type;

/**   \brief  value based type definition for Com_CurrentTxMode */
typedef boolean Com_CurrentTxModeType;

/**   \brief  value based type definition for Com_CycleTimeCnt */
typedef uint16 Com_CycleTimeCntType;

/**   \brief  value based type definition for Com_CyclicSendRequest */
typedef boolean Com_CyclicSendRequestType;

/**   \brief  value based type definition for Com_DelayTimeCnt */
typedef uint8 Com_DelayTimeCntType;

/**   \brief  value based type definition for Com_FilterAlgoOfFilterInfo_UInt16 */
typedef uint8 Com_FilterAlgoOfFilterInfo_UInt16Type;

/**   \brief  value based type definition for Com_FilterMaskOfFilterInfo_UInt16 */
typedef uint16 Com_FilterMaskOfFilterInfo_UInt16Type;

/**   \brief  value based type definition for Com_FilterMaxOfFilterInfo_UInt16 */
typedef uint16 Com_FilterMaxOfFilterInfo_UInt16Type;

/**   \brief  value based type definition for Com_FilterMinOfFilterInfo_UInt16 */
typedef uint16 Com_FilterMinOfFilterInfo_UInt16Type;

/**   \brief  value based type definition for Com_FilterXOfFilterInfo_UInt16 */
typedef uint16 Com_FilterXOfFilterInfo_UInt16Type;

/**   \brief  value based type definition for Com_FilterAlgoOfFilterInfo_UInt8 */
typedef uint8 Com_FilterAlgoOfFilterInfo_UInt8Type;

/**   \brief  value based type definition for Com_FilterMaskOfFilterInfo_UInt8 */
typedef uint8 Com_FilterMaskOfFilterInfo_UInt8Type;

/**   \brief  value based type definition for Com_FilterMaxOfFilterInfo_UInt8 */
typedef uint8 Com_FilterMaxOfFilterInfo_UInt8Type;

/**   \brief  value based type definition for Com_FilterMinOfFilterInfo_UInt8 */
typedef uint8 Com_FilterMinOfFilterInfo_UInt8Type;

/**   \brief  value based type definition for Com_FilterXOfFilterInfo_UInt8 */
typedef uint8 Com_FilterXOfFilterInfo_UInt8Type;

/**   \brief  value based type definition for Com_GatewayDescriptionProcessingISRLockCounter */
typedef uint16 Com_GatewayDescriptionProcessingISRLockCounterType;

/**   \brief  value based type definition for Com_GatewayProcessingISRLockCounter */
typedef uint16 Com_GatewayProcessingISRLockCounterType;

/**   \brief  value based type definition for Com_GatewayProcessingISRLockThreshold */
typedef uint8 Com_GatewayProcessingISRLockThresholdType;

/**   \brief  value based type definition for Com_GwEvent */
typedef boolean Com_GwEventType;

/**   \brief  value based type definition for Com_GwEventCacheIndex */
typedef PduIdType Com_GwEventCacheIndexType;

/**   \brief  value based type definition for Com_RxAccessInfoIdxOfGwGrpSigMapping */
typedef uint16 Com_RxAccessInfoIdxOfGwGrpSigMappingType;

/**   \brief  value based type definition for Com_TxSigIdOfGwGrpSigMapping */
typedef uint16 Com_TxSigIdOfGwGrpSigMappingType;

/**   \brief  value based type definition for Com_GwSigGrpMappingEndIdxOfGwInfo */
typedef uint8 Com_GwSigGrpMappingEndIdxOfGwInfoType;

/**   \brief  value based type definition for Com_GwSigGrpMappingStartIdxOfGwInfo */
typedef uint8 Com_GwSigGrpMappingStartIdxOfGwInfoType;

/**   \brief  value based type definition for Com_GwSigGrpMappingUsedOfGwInfo */
typedef boolean Com_GwSigGrpMappingUsedOfGwInfoType;

/**   \brief  value based type definition for Com_GwSigMappingEndIdxOfGwInfo */
typedef uint8 Com_GwSigMappingEndIdxOfGwInfoType;

/**   \brief  value based type definition for Com_GwSigMappingStartIdxOfGwInfo */
typedef uint8 Com_GwSigMappingStartIdxOfGwInfoType;

/**   \brief  value based type definition for Com_GwSigMappingUsedOfGwInfo */
typedef boolean Com_GwSigMappingUsedOfGwInfoType;

/**   \brief  value based type definition for Com_GwGrpSigMappingEndIdxOfGwSigGrpMapping */
typedef uint8 Com_GwGrpSigMappingEndIdxOfGwSigGrpMappingType;

/**   \brief  value based type definition for Com_GwGrpSigMappingStartIdxOfGwSigGrpMapping */
typedef uint8 Com_GwGrpSigMappingStartIdxOfGwSigGrpMappingType;

/**   \brief  value based type definition for Com_TxSigGrpIdOfGwSigGrpMapping */
typedef uint8 Com_TxSigGrpIdOfGwSigGrpMappingType;

/**   \brief  value based type definition for Com_RxAccessInfoIdxOfGwSigMapping */
typedef uint16 Com_RxAccessInfoIdxOfGwSigMappingType;

/**   \brief  value based type definition for Com_TxSigIdOfGwSigMapping */
typedef uint16 Com_TxSigIdOfGwSigMappingType;

/**   \brief  value based type definition for Com_HandleRxPduDeferred */
typedef PduLengthType Com_HandleRxPduDeferredType;

/**   \brief  value based type definition for Com_HandleTxPduDeferred */
typedef boolean Com_HandleTxPduDeferredType;

/**   \brief  value based type definition for Com_Initialized */
typedef boolean Com_InitializedType;

/**   \brief  value based type definition for Com_PduGrpCnt */
typedef uint8 Com_PduGrpCntType;

/**   \brief  value based type definition for Com_PduGrpVector */
typedef uint8 Com_PduGrpVectorType;

/**   \brief  value based type definition for Com_RepCnt */
typedef uint16 Com_RepCntType;

/**   \brief  value based type definition for Com_RepCycleCnt */
typedef uint16 Com_RepCycleCntType;

/**   \brief  value based type definition for Com_ApplTypeOfRxAccessInfo */
typedef uint8 Com_ApplTypeOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BitLengthOfRxAccessInfo */
typedef uint16 Com_BitLengthOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BitPositionOfRxAccessInfo */
typedef uint16 Com_BitPositionOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BufferIdxOfRxAccessInfo */
typedef uint16 Com_BufferIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BufferUsedOfRxAccessInfo */
typedef boolean Com_BufferUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BusAccOfRxAccessInfo */
typedef uint8 Com_BusAccOfRxAccessInfoType;

/**   \brief  value based type definition for Com_ByteLengthOfRxAccessInfo */
typedef uint8 Com_ByteLengthOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BytePositionOfRxAccessInfo */
typedef uint8 Com_BytePositionOfRxAccessInfoType;

/**   \brief  value based type definition for Com_ConstValueArrayBasedInitValueEndIdxOfRxAccessInfo */
typedef uint8 Com_ConstValueArrayBasedInitValueEndIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_ConstValueArrayBasedInitValueLengthOfRxAccessInfo */
typedef uint8 Com_ConstValueArrayBasedInitValueLengthOfRxAccessInfoType;

/**   \brief  value based type definition for Com_ConstValueArrayBasedInitValueStartIdxOfRxAccessInfo */
typedef uint8 Com_ConstValueArrayBasedInitValueStartIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_ConstValueArrayBasedInitValueUsedOfRxAccessInfo */
typedef boolean Com_ConstValueArrayBasedInitValueUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_GwInfoIdxOfRxAccessInfo */
typedef uint8 Com_GwInfoIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_GwInfoUsedOfRxAccessInfo */
typedef boolean Com_GwInfoUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_InitValueIdxOfRxAccessInfo */
typedef uint8 Com_InitValueIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_InitValueUsedOfRxAccessInfo */
typedef boolean Com_InitValueUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_IsGroupSignalOfRxAccessInfo */
typedef boolean Com_IsGroupSignalOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RoutingBufferIdxOfRxAccessInfo */
typedef uint16 Com_RoutingBufferIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RoutingBufferUsedOfRxAccessInfo */
typedef boolean Com_RoutingBufferUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxDataTimeoutSubstitutionValueIdxOfRxAccessInfo */
typedef uint8 Com_RxDataTimeoutSubstitutionValueIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxDataTimeoutSubstitutionValueUsedOfRxAccessInfo */
typedef boolean Com_RxDataTimeoutSubstitutionValueUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxPduInfoIdxOfRxAccessInfo */
typedef uint8 Com_RxPduInfoIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedBufferEndIdxOfRxAccessInfo */
typedef uint16 Com_RxSigBufferArrayBasedBufferEndIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedBufferLengthOfRxAccessInfo */
typedef uint8 Com_RxSigBufferArrayBasedBufferLengthOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo */
typedef uint16 Com_RxSigBufferArrayBasedBufferStartIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedBufferUsedOfRxAccessInfo */
typedef boolean Com_RxSigBufferArrayBasedBufferUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedRoutingBufferEndIdxOfRxAccessInfo */
typedef uint16 Com_RxSigBufferArrayBasedRoutingBufferEndIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedRoutingBufferLengthOfRxAccessInfo */
typedef uint8 Com_RxSigBufferArrayBasedRoutingBufferLengthOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedRoutingBufferStartIdxOfRxAccessInfo */
typedef uint16 Com_RxSigBufferArrayBasedRoutingBufferStartIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedRoutingBufferUsedOfRxAccessInfo */
typedef boolean Com_RxSigBufferArrayBasedRoutingBufferUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedShdBufferEndIdxOfRxAccessInfo */
typedef uint16 Com_RxSigBufferArrayBasedShdBufferEndIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedShdBufferLengthOfRxAccessInfo */
typedef uint8 Com_RxSigBufferArrayBasedShdBufferLengthOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfo */
typedef uint16 Com_RxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBasedShdBufferUsedOfRxAccessInfo */
typedef boolean Com_RxSigBufferArrayBasedShdBufferUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxTOutInfoIdxOfRxAccessInfo */
typedef uint8 Com_RxTOutInfoIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxTOutInfoUsedOfRxAccessInfo */
typedef boolean Com_RxTOutInfoUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_ShdBufferIdxOfRxAccessInfo */
typedef uint16 Com_ShdBufferIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_ShdBufferUsedOfRxAccessInfo */
typedef boolean Com_ShdBufferUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_SignExtRequiredOfRxAccessInfo */
typedef boolean Com_SignExtRequiredOfRxAccessInfoType;

/**   \brief  value based type definition for Com_StartByteInPduPositionOfRxAccessInfo */
typedef uint8 Com_StartByteInPduPositionOfRxAccessInfoType;

/**   \brief  value based type definition for Com_TmpBufferIdxOfRxAccessInfo */
typedef uint8 Com_TmpBufferIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_TmpBufferUsedOfRxAccessInfo */
typedef boolean Com_TmpBufferUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_TmpRxShdBufferArrayBasedTmpBufferEndIdxOfRxAccessInfo */
typedef uint8 Com_TmpRxShdBufferArrayBasedTmpBufferEndIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_TmpRxShdBufferArrayBasedTmpBufferLengthOfRxAccessInfo */
typedef uint8 Com_TmpRxShdBufferArrayBasedTmpBufferLengthOfRxAccessInfoType;

/**   \brief  value based type definition for Com_TmpRxShdBufferArrayBasedTmpBufferStartIdxOfRxAccessInfo */
typedef uint8 Com_TmpRxShdBufferArrayBasedTmpBufferStartIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_TmpRxShdBufferArrayBasedTmpBufferUsedOfRxAccessInfo */
typedef boolean Com_TmpRxShdBufferArrayBasedTmpBufferUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoGrpSigInd */
typedef uint16 Com_RxAccessInfoGrpSigIndType;

/**   \brief  value based type definition for Com_RxAccessInfoInd */
typedef uint16 Com_RxAccessInfoIndType;

/**   \brief  value based type definition for Com_RxDeadlineMonitoringISRLockCounter */
typedef uint16 Com_RxDeadlineMonitoringISRLockCounterType;

/**   \brief  value based type definition for Com_RxDeadlineMonitoringISRLockThreshold */
typedef uint8 Com_RxDeadlineMonitoringISRLockThresholdType;

/**   \brief  value based type definition for Com_RxDefPduBuffer */
typedef uint8 Com_RxDefPduBufferType;

/**   \brief  value based type definition for Com_RxDeferredFctPtrCache */
typedef uint32 Com_RxDeferredFctPtrCacheType;

/**   \brief  value based type definition for Com_RxDeferredProcessingISRLockCounter */
typedef uint16 Com_RxDeferredProcessingISRLockCounterType;

/**   \brief  value based type definition for Com_RxDeferredProcessingISRLockThreshold */
typedef uint8 Com_RxDeferredProcessingISRLockThresholdType;

/**   \brief  value based type definition for Com_RxDynSignalLength */
typedef PduLengthType Com_RxDynSignalLengthType;

/**   \brief  value based type definition for Com_RxDynSignalTmpLengthForSignalGroups */
typedef PduLengthType Com_RxDynSignalTmpLengthForSignalGroupsType;

/**   \brief  value based type definition for Com_RxIPduGroupISRLockCounter */
typedef uint16 Com_RxIPduGroupISRLockCounterType;

/**   \brief  value based type definition for Com_RxIPduGroupISRLockThreshold */
typedef uint8 Com_RxIPduGroupISRLockThresholdType;

/**   \brief  value based type definition for Com_RxPduDmState */
typedef uint8 Com_RxPduDmStateType;

/**   \brief  value based type definition for Com_RxPduGrpActive */
typedef boolean Com_RxPduGrpActiveType;

/**   \brief  value based type definition for Com_PduGrpVectorEndIdxOfRxPduGrpInfo */
typedef uint8 Com_PduGrpVectorEndIdxOfRxPduGrpInfoType;

/**   \brief  value based type definition for Com_PduGrpVectorStartIdxOfRxPduGrpInfo */
typedef uint8 Com_PduGrpVectorStartIdxOfRxPduGrpInfoType;

/**   \brief  value based type definition for Com_PduGrpVectorUsedOfRxPduGrpInfo */
typedef boolean Com_PduGrpVectorUsedOfRxPduGrpInfoType;

/**   \brief  value based type definition for Com_GwInfoEndIdxOfRxPduInfo */
typedef uint8 Com_GwInfoEndIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_GwInfoStartIdxOfRxPduInfo */
typedef uint8 Com_GwInfoStartIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_GwInfoUsedOfRxPduInfo */
typedef boolean Com_GwInfoUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_HandleRxPduDeferredIdxOfRxPduInfo */
typedef uint8 Com_HandleRxPduDeferredIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_HandleRxPduDeferredUsedOfRxPduInfo */
typedef boolean Com_HandleRxPduDeferredUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoIndEndIdxOfRxPduInfo */
typedef uint16 Com_RxAccessInfoIndEndIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoIndStartIdxOfRxPduInfo */
typedef uint16 Com_RxAccessInfoIndStartIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoIndUsedOfRxPduInfo */
typedef boolean Com_RxAccessInfoIndUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxDefPduBufferEndIdxOfRxPduInfo */
typedef uint16 Com_RxDefPduBufferEndIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxDefPduBufferLengthOfRxPduInfo */
typedef uint8 Com_RxDefPduBufferLengthOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxDefPduBufferStartIdxOfRxPduInfo */
typedef uint16 Com_RxDefPduBufferStartIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxDefPduBufferUsedOfRxPduInfo */
typedef boolean Com_RxDefPduBufferUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxSigGrpInfoIndEndIdxOfRxPduInfo */
typedef uint8 Com_RxSigGrpInfoIndEndIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxSigGrpInfoIndStartIdxOfRxPduInfo */
typedef uint8 Com_RxSigGrpInfoIndStartIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxSigGrpInfoIndUsedOfRxPduInfo */
typedef boolean Com_RxSigGrpInfoIndUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxSigInfoEndIdxOfRxPduInfo */
typedef uint16 Com_RxSigInfoEndIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxSigInfoStartIdxOfRxPduInfo */
typedef uint16 Com_RxSigInfoStartIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxSigInfoUsedOfRxPduInfo */
typedef boolean Com_RxSigInfoUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxTOutInfoIdxOfRxPduInfo */
typedef uint8 Com_RxTOutInfoIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxTOutInfoIndEndIdxOfRxPduInfo */
typedef uint8 Com_RxTOutInfoIndEndIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxTOutInfoIndStartIdxOfRxPduInfo */
typedef uint8 Com_RxTOutInfoIndStartIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxTOutInfoIndUsedOfRxPduInfo */
typedef boolean Com_RxTOutInfoIndUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxTOutInfoUsedOfRxPduInfo */
typedef boolean Com_RxTOutInfoUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxTpInfoIdxOfRxPduInfo */
typedef uint8 Com_RxTpInfoIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxTpInfoUsedOfRxPduInfo */
typedef boolean Com_RxTpInfoUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_SignalProcessingOfRxPduInfo */
typedef uint8 Com_SignalProcessingOfRxPduInfoType;

/**   \brief  value based type definition for Com_TypeOfRxPduInfo */
typedef uint8 Com_TypeOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxSigBufferArrayBased */
typedef uint8 Com_RxSigBufferArrayBasedType;

/**   \brief  value based type definition for Com_RxSigBufferSInt16 */
typedef sint16 Com_RxSigBufferSInt16Type;

/**   \brief  value based type definition for Com_RxSigBufferUInt16 */
typedef uint16 Com_RxSigBufferUInt16Type;

/**   \brief  value based type definition for Com_RxSigBufferUInt32 */
typedef uint32 Com_RxSigBufferUInt32Type;

/**   \brief  value based type definition for Com_RxSigBufferUInt8 */
typedef uint8 Com_RxSigBufferUInt8Type;

/**   \brief  value based type definition for Com_GwInfoIdxOfRxSigGrpInfo */
typedef uint8 Com_GwInfoIdxOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_GwInfoUsedOfRxSigGrpInfo */
typedef boolean Com_GwInfoUsedOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoGrpSigIndEndIdxOfRxSigGrpInfo */
typedef uint8 Com_RxAccessInfoGrpSigIndEndIdxOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoGrpSigIndStartIdxOfRxSigGrpInfo */
typedef uint8 Com_RxAccessInfoGrpSigIndStartIdxOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoGrpSigIndUsedOfRxSigGrpInfo */
typedef boolean Com_RxAccessInfoGrpSigIndUsedOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_RxCbkFuncPtrAckIdxOfRxSigGrpInfo */
typedef uint8 Com_RxCbkFuncPtrAckIdxOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_RxCbkFuncPtrAckUsedOfRxSigGrpInfo */
typedef boolean Com_RxCbkFuncPtrAckUsedOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_RxPduInfoIdxOfRxSigGrpInfo */
typedef uint8 Com_RxPduInfoIdxOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_ShdBufferRequiredOfRxSigGrpInfo */
typedef boolean Com_ShdBufferRequiredOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_SignalProcessingOfRxSigGrpInfo */
typedef uint8 Com_SignalProcessingOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_StartBytePositionOfRxSigGrpInfo */
typedef uint8 Com_StartBytePositionOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_UbIdxOfRxSigGrpInfo */
typedef uint8 Com_UbIdxOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_UbMaskIdxOfRxSigGrpInfo */
typedef uint8 Com_UbMaskIdxOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_UbMaskUsedOfRxSigGrpInfo */
typedef boolean Com_UbMaskUsedOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_ValidDlcOfRxSigGrpInfo */
typedef uint8 Com_ValidDlcOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_RxSigGrpInfoInd */
typedef uint8 Com_RxSigGrpInfoIndType;

/**   \brief  value based type definition for Com_GwInfoIdxOfRxSigInfo */
typedef uint8 Com_GwInfoIdxOfRxSigInfoType;

/**   \brief  value based type definition for Com_GwInfoUsedOfRxSigInfo */
typedef boolean Com_GwInfoUsedOfRxSigInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoIdxOfRxSigInfo */
typedef uint16 Com_RxAccessInfoIdxOfRxSigInfoType;

/**   \brief  value based type definition for Com_RxCbkFuncPtrAckIdxOfRxSigInfo */
typedef uint8 Com_RxCbkFuncPtrAckIdxOfRxSigInfoType;

/**   \brief  value based type definition for Com_RxCbkFuncPtrAckUsedOfRxSigInfo */
typedef boolean Com_RxCbkFuncPtrAckUsedOfRxSigInfoType;

/**   \brief  value based type definition for Com_RxTOutInfoIdxOfRxSigInfo */
typedef uint8 Com_RxTOutInfoIdxOfRxSigInfoType;

/**   \brief  value based type definition for Com_RxTOutInfoUsedOfRxSigInfo */
typedef boolean Com_RxTOutInfoUsedOfRxSigInfoType;

/**   \brief  value based type definition for Com_SignalProcessingOfRxSigInfo */
typedef uint8 Com_SignalProcessingOfRxSigInfoType;

/**   \brief  value based type definition for Com_UbIdxOfRxSigInfo */
typedef uint8 Com_UbIdxOfRxSigInfoType;

/**   \brief  value based type definition for Com_UbMaskIdxOfRxSigInfo */
typedef uint8 Com_UbMaskIdxOfRxSigInfoType;

/**   \brief  value based type definition for Com_UbMaskUsedOfRxSigInfo */
typedef boolean Com_UbMaskUsedOfRxSigInfoType;

/**   \brief  value based type definition for Com_ValidDlcOfRxSigInfo */
typedef uint8 Com_ValidDlcOfRxSigInfoType;

/**   \brief  value based type definition for Com_RxTOutCnt */
typedef uint8 Com_RxTOutCntType;

/**   \brief  value based type definition for Com_CbkRxTOutFuncPtrIndEndIdxOfRxTOutInfo */
typedef uint8 Com_CbkRxTOutFuncPtrIndEndIdxOfRxTOutInfoType;

/**   \brief  value based type definition for Com_CbkRxTOutFuncPtrIndStartIdxOfRxTOutInfo */
typedef uint8 Com_CbkRxTOutFuncPtrIndStartIdxOfRxTOutInfoType;

/**   \brief  value based type definition for Com_CbkRxTOutFuncPtrIndUsedOfRxTOutInfo */
typedef boolean Com_CbkRxTOutFuncPtrIndUsedOfRxTOutInfoType;

/**   \brief  value based type definition for Com_FactorOfRxTOutInfo */
typedef uint8 Com_FactorOfRxTOutInfoType;

/**   \brief  value based type definition for Com_FirstFactorOfRxTOutInfo */
typedef uint8 Com_FirstFactorOfRxTOutInfoType;

/**   \brief  value based type definition for Com_RxPduInfoIdxOfRxTOutInfo */
typedef uint8 Com_RxPduInfoIdxOfRxTOutInfoType;

/**   \brief  value based type definition for Com_RxTOutInfoInd */
typedef uint8 Com_RxTOutInfoIndType;

/**   \brief  value based type definition for Com_RxTpBuffer */
typedef uint8 Com_RxTpBufferType;

/**   \brief  value based type definition for Com_RxTpConnectionState */
typedef uint8 Com_RxTpConnectionStateType;

/**   \brief  value based type definition for Com_BufferSizeOfRxTpInfo */
typedef uint8 Com_BufferSizeOfRxTpInfoType;

/**   \brief  value based type definition for Com_DynamicInitialLengthOfRxTpInfo */
typedef uint8 Com_DynamicInitialLengthOfRxTpInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoDynSigIdxOfRxTpInfo */
typedef uint16 Com_RxAccessInfoDynSigIdxOfRxTpInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoDynSigUsedOfRxTpInfo */
typedef boolean Com_RxAccessInfoDynSigUsedOfRxTpInfoType;

/**   \brief  value based type definition for Com_RxTpBufferEndIdxOfRxTpInfo */
typedef uint16 Com_RxTpBufferEndIdxOfRxTpInfoType;

/**   \brief  value based type definition for Com_RxTpBufferStartIdxOfRxTpInfo */
typedef uint16 Com_RxTpBufferStartIdxOfRxTpInfoType;

/**   \brief  value based type definition for Com_RxTpBufferUsedOfRxTpInfo */
typedef boolean Com_RxTpBufferUsedOfRxTpInfoType;

/**   \brief  value based type definition for Com_RxTpSduLength */
typedef PduLengthType Com_RxTpSduLengthType;

/**   \brief  value based type definition for Com_RxTpWrittenBytesCounter */
typedef PduLengthType Com_RxTpWrittenBytesCounterType;

/**   \brief  value based type definition for Com_SigGrpEventFlag */
typedef uint8 Com_SigGrpEventFlagType;

/**   \brief  value based type definition for Com_SizeOfActivatableRxComIPdus */
typedef uint8 Com_SizeOfActivatableRxComIPdusType;

/**   \brief  value based type definition for Com_SizeOfActivatableTxComIPdus */
typedef uint8 Com_SizeOfActivatableTxComIPdusType;

/**   \brief  value based type definition for Com_SizeOfCbkRxTOutFuncPtr */
typedef uint8 Com_SizeOfCbkRxTOutFuncPtrType;

/**   \brief  value based type definition for Com_SizeOfCbkRxTOutFuncPtrInd */
typedef uint8 Com_SizeOfCbkRxTOutFuncPtrIndType;

/**   \brief  value based type definition for Com_SizeOfCbkTxTOutFuncPtr */
typedef uint8 Com_SizeOfCbkTxTOutFuncPtrType;

/**   \brief  value based type definition for Com_SizeOfCbkTxTOutFuncPtrInd */
typedef uint8 Com_SizeOfCbkTxTOutFuncPtrIndType;

/**   \brief  value based type definition for Com_SizeOfConstValueArrayBased */
typedef uint8 Com_SizeOfConstValueArrayBasedType;

/**   \brief  value based type definition for Com_SizeOfConstValueSInt16 */
typedef uint8 Com_SizeOfConstValueSInt16Type;

/**   \brief  value based type definition for Com_SizeOfConstValueUInt16 */
typedef uint8 Com_SizeOfConstValueUInt16Type;

/**   \brief  value based type definition for Com_SizeOfConstValueUInt32 */
typedef uint8 Com_SizeOfConstValueUInt32Type;

/**   \brief  value based type definition for Com_SizeOfConstValueUInt8 */
typedef uint8 Com_SizeOfConstValueUInt8Type;

/**   \brief  value based type definition for Com_SizeOfCurrentTxMode */
typedef uint8 Com_SizeOfCurrentTxModeType;

/**   \brief  value based type definition for Com_SizeOfCycleTimeCnt */
typedef uint8 Com_SizeOfCycleTimeCntType;

/**   \brief  value based type definition for Com_SizeOfCyclicSendRequest */
typedef uint8 Com_SizeOfCyclicSendRequestType;

/**   \brief  value based type definition for Com_SizeOfDelayTimeCnt */
typedef uint8 Com_SizeOfDelayTimeCntType;

/**   \brief  value based type definition for Com_SizeOfFilterInfo_UInt16 */
typedef uint8 Com_SizeOfFilterInfo_UInt16Type;

/**   \brief  value based type definition for Com_SizeOfFilterInfo_UInt8 */
typedef uint8 Com_SizeOfFilterInfo_UInt8Type;

/**   \brief  value based type definition for Com_SizeOfGwEvent */
typedef uint8 Com_SizeOfGwEventType;

/**   \brief  value based type definition for Com_SizeOfGwGrpSigMapping */
typedef uint8 Com_SizeOfGwGrpSigMappingType;

/**   \brief  value based type definition for Com_SizeOfGwInfo */
typedef uint8 Com_SizeOfGwInfoType;

/**   \brief  value based type definition for Com_SizeOfGwSigGrpMapping */
typedef uint8 Com_SizeOfGwSigGrpMappingType;

/**   \brief  value based type definition for Com_SizeOfGwSigMapping */
typedef uint8 Com_SizeOfGwSigMappingType;

/**   \brief  value based type definition for Com_SizeOfHandleRxPduDeferred */
typedef uint8 Com_SizeOfHandleRxPduDeferredType;

/**   \brief  value based type definition for Com_SizeOfHandleTxPduDeferred */
typedef uint8 Com_SizeOfHandleTxPduDeferredType;

/**   \brief  value based type definition for Com_SizeOfPduGrpVector */
typedef uint8 Com_SizeOfPduGrpVectorType;

/**   \brief  value based type definition for Com_SizeOfRepCnt */
typedef uint8 Com_SizeOfRepCntType;

/**   \brief  value based type definition for Com_SizeOfRepCycleCnt */
typedef uint8 Com_SizeOfRepCycleCntType;

/**   \brief  value based type definition for Com_SizeOfRxAccessInfo */
typedef uint16 Com_SizeOfRxAccessInfoType;

/**   \brief  value based type definition for Com_SizeOfRxAccessInfoGrpSigInd */
typedef uint8 Com_SizeOfRxAccessInfoGrpSigIndType;

/**   \brief  value based type definition for Com_SizeOfRxAccessInfoInd */
typedef uint16 Com_SizeOfRxAccessInfoIndType;

/**   \brief  value based type definition for Com_SizeOfRxCbkFuncPtr */
typedef uint8 Com_SizeOfRxCbkFuncPtrType;

/**   \brief  value based type definition for Com_SizeOfRxDefPduBuffer */
typedef uint16 Com_SizeOfRxDefPduBufferType;

/**   \brief  value based type definition for Com_SizeOfRxDeferredFctPtrCache */
typedef uint8 Com_SizeOfRxDeferredFctPtrCacheType;

/**   \brief  value based type definition for Com_SizeOfRxDynSignalLength */
typedef uint8 Com_SizeOfRxDynSignalLengthType;

/**   \brief  value based type definition for Com_SizeOfRxDynSignalTmpLengthForSignalGroups */
typedef uint8 Com_SizeOfRxDynSignalTmpLengthForSignalGroupsType;

/**   \brief  value based type definition for Com_SizeOfRxPduDmState */
typedef uint8 Com_SizeOfRxPduDmStateType;

/**   \brief  value based type definition for Com_SizeOfRxPduGrpActive */
typedef uint8 Com_SizeOfRxPduGrpActiveType;

/**   \brief  value based type definition for Com_SizeOfRxPduGrpInfo */
typedef uint8 Com_SizeOfRxPduGrpInfoType;

/**   \brief  value based type definition for Com_SizeOfRxPduInfo */
typedef uint8 Com_SizeOfRxPduInfoType;

/**   \brief  value based type definition for Com_SizeOfRxSigBufferArrayBased */
typedef uint16 Com_SizeOfRxSigBufferArrayBasedType;

/**   \brief  value based type definition for Com_SizeOfRxSigBufferSInt16 */
typedef uint8 Com_SizeOfRxSigBufferSInt16Type;

/**   \brief  value based type definition for Com_SizeOfRxSigBufferUInt16 */
typedef uint8 Com_SizeOfRxSigBufferUInt16Type;

/**   \brief  value based type definition for Com_SizeOfRxSigBufferUInt32 */
typedef uint8 Com_SizeOfRxSigBufferUInt32Type;

/**   \brief  value based type definition for Com_SizeOfRxSigBufferUInt8 */
typedef uint16 Com_SizeOfRxSigBufferUInt8Type;

/**   \brief  value based type definition for Com_SizeOfRxSigGrpInfo */
typedef uint8 Com_SizeOfRxSigGrpInfoType;

/**   \brief  value based type definition for Com_SizeOfRxSigGrpInfoInd */
typedef uint8 Com_SizeOfRxSigGrpInfoIndType;

/**   \brief  value based type definition for Com_SizeOfRxSigInfo */
typedef uint16 Com_SizeOfRxSigInfoType;

/**   \brief  value based type definition for Com_SizeOfRxTOutCnt */
typedef uint8 Com_SizeOfRxTOutCntType;

/**   \brief  value based type definition for Com_SizeOfRxTOutInfo */
typedef uint8 Com_SizeOfRxTOutInfoType;

/**   \brief  value based type definition for Com_SizeOfRxTOutInfoInd */
typedef uint8 Com_SizeOfRxTOutInfoIndType;

/**   \brief  value based type definition for Com_SizeOfRxTpBuffer */
typedef uint16 Com_SizeOfRxTpBufferType;

/**   \brief  value based type definition for Com_SizeOfRxTpConnectionState */
typedef uint8 Com_SizeOfRxTpConnectionStateType;

/**   \brief  value based type definition for Com_SizeOfRxTpInfo */
typedef uint8 Com_SizeOfRxTpInfoType;

/**   \brief  value based type definition for Com_SizeOfRxTpSduLength */
typedef uint8 Com_SizeOfRxTpSduLengthType;

/**   \brief  value based type definition for Com_SizeOfRxTpWrittenBytesCounter */
typedef uint8 Com_SizeOfRxTpWrittenBytesCounterType;

/**   \brief  value based type definition for Com_SizeOfSigGrpEventFlag */
typedef uint8 Com_SizeOfSigGrpEventFlagType;

/**   \brief  value based type definition for Com_SizeOfTmpRxBuffer */
typedef uint8 Com_SizeOfTmpRxBufferType;

/**   \brief  value based type definition for Com_SizeOfTmpRxShdBufferArrayBased */
typedef uint8 Com_SizeOfTmpRxShdBufferArrayBasedType;

/**   \brief  value based type definition for Com_SizeOfTmpRxShdBufferUInt16 */
typedef uint8 Com_SizeOfTmpRxShdBufferUInt16Type;

/**   \brief  value based type definition for Com_SizeOfTmpRxShdBufferUInt32 */
typedef uint8 Com_SizeOfTmpRxShdBufferUInt32Type;

/**   \brief  value based type definition for Com_SizeOfTmpRxShdBufferUInt8 */
typedef uint8 Com_SizeOfTmpRxShdBufferUInt8Type;

/**   \brief  value based type definition for Com_SizeOfTransmitRequest */
typedef uint8 Com_SizeOfTransmitRequestType;

/**   \brief  value based type definition for Com_SizeOfTxBuffer */
typedef uint16 Com_SizeOfTxBufferType;

/**   \brief  value based type definition for Com_SizeOfTxDynSignalLength */
typedef uint8 Com_SizeOfTxDynSignalLengthType;

/**   \brief  value based type definition for Com_SizeOfTxFilterInitValueUInt16 */
typedef uint8 Com_SizeOfTxFilterInitValueUInt16Type;

/**   \brief  value based type definition for Com_SizeOfTxFilterInitValueUInt8 */
typedef uint8 Com_SizeOfTxFilterInitValueUInt8Type;

/**   \brief  value based type definition for Com_SizeOfTxFilterOldValueUInt16 */
typedef uint8 Com_SizeOfTxFilterOldValueUInt16Type;

/**   \brief  value based type definition for Com_SizeOfTxFilterOldValueUInt8 */
typedef uint8 Com_SizeOfTxFilterOldValueUInt8Type;

/**   \brief  value based type definition for Com_SizeOfTxModeFalse */
typedef uint8 Com_SizeOfTxModeFalseType;

/**   \brief  value based type definition for Com_SizeOfTxModeInfo */
typedef uint8 Com_SizeOfTxModeInfoType;

/**   \brief  value based type definition for Com_SizeOfTxModeTrue */
typedef uint8 Com_SizeOfTxModeTrueType;

/**   \brief  value based type definition for Com_SizeOfTxPduGrpActive */
typedef uint8 Com_SizeOfTxPduGrpActiveType;

/**   \brief  value based type definition for Com_SizeOfTxPduGrpInfo */
typedef uint8 Com_SizeOfTxPduGrpInfoType;

/**   \brief  value based type definition for Com_SizeOfTxPduInfo */
typedef uint8 Com_SizeOfTxPduInfoType;

/**   \brief  value based type definition for Com_SizeOfTxPduInitValue */
typedef uint16 Com_SizeOfTxPduInitValueType;

/**   \brief  value based type definition for Com_SizeOfTxSduLength */
typedef uint8 Com_SizeOfTxSduLengthType;

/**   \brief  value based type definition for Com_SizeOfTxSigGrpInfo */
typedef uint8 Com_SizeOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_SizeOfTxSigGrpInfoInd */
typedef uint8 Com_SizeOfTxSigGrpInfoIndType;

/**   \brief  value based type definition for Com_SizeOfTxSigGrpMask */
typedef uint8 Com_SizeOfTxSigGrpMaskType;

/**   \brief  value based type definition for Com_SizeOfTxSigInfo */
typedef uint16 Com_SizeOfTxSigInfoType;

/**   \brief  value based type definition for Com_SizeOfTxSigInfoFilterInitValueInd */
typedef uint8 Com_SizeOfTxSigInfoFilterInitValueIndType;

/**   \brief  value based type definition for Com_SizeOfTxTOutCnt */
typedef uint8 Com_SizeOfTxTOutCntType;

/**   \brief  value based type definition for Com_SizeOfTxTOutInfo */
typedef uint8 Com_SizeOfTxTOutInfoType;

/**   \brief  value based type definition for Com_SizeOfTxTmpTpPduLength */
typedef uint8 Com_SizeOfTxTmpTpPduLengthType;

/**   \brief  value based type definition for Com_SizeOfTxTpConnectionState */
typedef uint8 Com_SizeOfTxTpConnectionStateType;

/**   \brief  value based type definition for Com_SizeOfTxTpInfo */
typedef uint8 Com_SizeOfTxTpInfoType;

/**   \brief  value based type definition for Com_SizeOfTxTpSduLength */
typedef uint8 Com_SizeOfTxTpSduLengthType;

/**   \brief  value based type definition for Com_SizeOfTxTpWrittenBytesCounter */
typedef uint8 Com_SizeOfTxTpWrittenBytesCounterType;

/**   \brief  value based type definition for Com_SizeOfWaitingForConfirmation */
typedef uint8 Com_SizeOfWaitingForConfirmationType;

/**   \brief  value based type definition for Com_TmpRxBuffer */
typedef uint8 Com_TmpRxBufferType;

/**   \brief  value based type definition for Com_TmpRxShdBufferArrayBased */
typedef uint8 Com_TmpRxShdBufferArrayBasedType;

/**   \brief  value based type definition for Com_TmpRxShdBufferUInt16 */
typedef uint16 Com_TmpRxShdBufferUInt16Type;

/**   \brief  value based type definition for Com_TmpRxShdBufferUInt32 */
typedef uint32 Com_TmpRxShdBufferUInt32Type;

/**   \brief  value based type definition for Com_TmpRxShdBufferUInt8 */
typedef uint8 Com_TmpRxShdBufferUInt8Type;

/**   \brief  value based type definition for Com_TransmitRequest */
typedef boolean Com_TransmitRequestType;

/**   \brief  value based type definition for Com_TxBuffer */
typedef uint8 Com_TxBufferType;

/**   \brief  value based type definition for Com_TxCyclicProcessingISRLockCounter */
typedef uint16 Com_TxCyclicProcessingISRLockCounterType;

/**   \brief  value based type definition for Com_TxCyclicProcessingISRLockThreshold */
typedef uint8 Com_TxCyclicProcessingISRLockThresholdType;

/**   \brief  value based type definition for Com_TxDeadlineMonitoringISRLockCounter */
typedef uint16 Com_TxDeadlineMonitoringISRLockCounterType;

/**   \brief  value based type definition for Com_TxDeadlineMonitoringISRLockThreshold */
typedef uint8 Com_TxDeadlineMonitoringISRLockThresholdType;

/**   \brief  value based type definition for Com_TxDynSignalLength */
typedef PduLengthType Com_TxDynSignalLengthType;

/**   \brief  value based type definition for Com_TxFilterInitValueUInt16 */
typedef uint16 Com_TxFilterInitValueUInt16Type;

/**   \brief  value based type definition for Com_TxFilterInitValueUInt8 */
typedef uint8 Com_TxFilterInitValueUInt8Type;

/**   \brief  value based type definition for Com_TxFilterOldValueUInt16 */
typedef uint16 Com_TxFilterOldValueUInt16Type;

/**   \brief  value based type definition for Com_TxFilterOldValueUInt8 */
typedef uint8 Com_TxFilterOldValueUInt8Type;

/**   \brief  value based type definition for Com_TxIPduGroupISRLockCounter */
typedef uint16 Com_TxIPduGroupISRLockCounterType;

/**   \brief  value based type definition for Com_TxIPduGroupISRLockThreshold */
typedef uint8 Com_TxIPduGroupISRLockThresholdType;

/**   \brief  value based type definition for Com_DirectOfTxModeFalse */
typedef boolean Com_DirectOfTxModeFalseType;

/**   \brief  value based type definition for Com_PeriodicOfTxModeFalse */
typedef boolean Com_PeriodicOfTxModeFalseType;

/**   \brief  value based type definition for Com_TimeOffsetOfTxModeFalse */
typedef uint8 Com_TimeOffsetOfTxModeFalseType;

/**   \brief  value based type definition for Com_TimePeriodOfTxModeFalse */
typedef uint16 Com_TimePeriodOfTxModeFalseType;

/**   \brief  value based type definition for Com_InitModeOfTxModeInfo */
typedef boolean Com_InitModeOfTxModeInfoType;

/**   \brief  value based type definition for Com_MinimumDelayOfTxModeInfo */
typedef uint8 Com_MinimumDelayOfTxModeInfoType;

/**   \brief  value based type definition for Com_TxModeFalseIdxOfTxModeInfo */
typedef uint8 Com_TxModeFalseIdxOfTxModeInfoType;

/**   \brief  value based type definition for Com_TxModeFalseUsedOfTxModeInfo */
typedef boolean Com_TxModeFalseUsedOfTxModeInfoType;

/**   \brief  value based type definition for Com_TxModeTrueIdxOfTxModeInfo */
typedef uint8 Com_TxModeTrueIdxOfTxModeInfoType;

/**   \brief  value based type definition for Com_TxModeTrueUsedOfTxModeInfo */
typedef boolean Com_TxModeTrueUsedOfTxModeInfoType;

/**   \brief  value based type definition for Com_TxSigInfoFilterInitValueIndEndIdxOfTxModeInfo */
typedef uint8 Com_TxSigInfoFilterInitValueIndEndIdxOfTxModeInfoType;

/**   \brief  value based type definition for Com_TxSigInfoFilterInitValueIndStartIdxOfTxModeInfo */
typedef uint8 Com_TxSigInfoFilterInitValueIndStartIdxOfTxModeInfoType;

/**   \brief  value based type definition for Com_TxSigInfoFilterInitValueIndUsedOfTxModeInfo */
typedef boolean Com_TxSigInfoFilterInitValueIndUsedOfTxModeInfoType;

/**   \brief  value based type definition for Com_DirectOfTxModeTrue */
typedef boolean Com_DirectOfTxModeTrueType;

/**   \brief  value based type definition for Com_PeriodicOfTxModeTrue */
typedef boolean Com_PeriodicOfTxModeTrueType;

/**   \brief  value based type definition for Com_TimeOffsetOfTxModeTrue */
typedef uint8 Com_TimeOffsetOfTxModeTrueType;

/**   \brief  value based type definition for Com_TimePeriodOfTxModeTrue */
typedef uint16 Com_TimePeriodOfTxModeTrueType;

/**   \brief  value based type definition for Com_TxPduGrpActive */
typedef boolean Com_TxPduGrpActiveType;

/**   \brief  value based type definition for Com_PduGrpVectorEndIdxOfTxPduGrpInfo */
typedef uint8 Com_PduGrpVectorEndIdxOfTxPduGrpInfoType;

/**   \brief  value based type definition for Com_PduGrpVectorStartIdxOfTxPduGrpInfo */
typedef uint8 Com_PduGrpVectorStartIdxOfTxPduGrpInfoType;

/**   \brief  value based type definition for Com_PduGrpVectorUsedOfTxPduGrpInfo */
typedef boolean Com_PduGrpVectorUsedOfTxPduGrpInfoType;

/**   \brief  value based type definition for Com_ClrUbOfTxPduInfo */
typedef uint8 Com_ClrUbOfTxPduInfoType;

/**   \brief  value based type definition for Com_ConstValueUInt8UbClearMaskEndIdxOfTxPduInfo */
typedef uint8 Com_ConstValueUInt8UbClearMaskEndIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_ConstValueUInt8UbClearMaskStartIdxOfTxPduInfo */
typedef uint8 Com_ConstValueUInt8UbClearMaskStartIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_ConstValueUInt8UbClearMaskUsedOfTxPduInfo */
typedef boolean Com_ConstValueUInt8UbClearMaskUsedOfTxPduInfoType;

/**   \brief  value based type definition for Com_ExternalIdOfTxPduInfo */
typedef uint8 Com_ExternalIdOfTxPduInfoType;

/**   \brief  value based type definition for Com_MetaDataLengthOfTxPduInfo */
typedef uint8 Com_MetaDataLengthOfTxPduInfoType;

/**   \brief  value based type definition for Com_PduWithMetaDataLengthOfTxPduInfo */
typedef uint8 Com_PduWithMetaDataLengthOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxBufferEndIdxOfTxPduInfo */
typedef uint16 Com_TxBufferEndIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxBufferLengthOfTxPduInfo */
typedef uint8 Com_TxBufferLengthOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxBufferMetaDataEndIdxOfTxPduInfo */
typedef uint16 Com_TxBufferMetaDataEndIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxBufferMetaDataLengthOfTxPduInfo */
typedef uint8 Com_TxBufferMetaDataLengthOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxBufferMetaDataStartIdxOfTxPduInfo */
typedef uint16 Com_TxBufferMetaDataStartIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxBufferMetaDataUsedOfTxPduInfo */
typedef boolean Com_TxBufferMetaDataUsedOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxBufferStartIdxOfTxPduInfo */
typedef uint16 Com_TxBufferStartIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxBufferUsedOfTxPduInfo */
typedef boolean Com_TxBufferUsedOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduInitValueEndIdxOfTxPduInfo */
typedef uint16 Com_TxPduInitValueEndIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduInitValueMetaDataEndIdxOfTxPduInfo */
typedef uint16 Com_TxPduInitValueMetaDataEndIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduInitValueMetaDataStartIdxOfTxPduInfo */
typedef uint16 Com_TxPduInitValueMetaDataStartIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduInitValueMetaDataUsedOfTxPduInfo */
typedef boolean Com_TxPduInitValueMetaDataUsedOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduInitValueStartIdxOfTxPduInfo */
typedef uint16 Com_TxPduInitValueStartIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduInitValueUsedOfTxPduInfo */
typedef boolean Com_TxPduInitValueUsedOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxSigGrpInfoIndEndIdxOfTxPduInfo */
typedef uint8 Com_TxSigGrpInfoIndEndIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxSigGrpInfoIndStartIdxOfTxPduInfo */
typedef uint8 Com_TxSigGrpInfoIndStartIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxSigGrpInfoIndUsedOfTxPduInfo */
typedef boolean Com_TxSigGrpInfoIndUsedOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxTOutInfoIdxOfTxPduInfo */
typedef uint8 Com_TxTOutInfoIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxTOutInfoUsedOfTxPduInfo */
typedef boolean Com_TxTOutInfoUsedOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxTpInfoIdxOfTxPduInfo */
typedef uint8 Com_TxTpInfoIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxTpInfoUsedOfTxPduInfo */
typedef boolean Com_TxTpInfoUsedOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduInitValue */
typedef uint8 Com_TxPduInitValueType;

/**   \brief  value based type definition for Com_TxProcessingISRLockCounter */
typedef uint16 Com_TxProcessingISRLockCounterType;

/**   \brief  value based type definition for Com_TxProcessingISRLockThreshold */
typedef uint8 Com_TxProcessingISRLockThresholdType;

/**   \brief  value based type definition for Com_TxSduLength */
typedef PduLengthType Com_TxSduLengthType;

/**   \brief  value based type definition for Com_PduOffsetOfTxSigGrpInfo */
typedef uint8 Com_PduOffsetOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TransferPropertyOfTxSigGrpInfo */
typedef uint8 Com_TransferPropertyOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TxBufferEndIdxOfTxSigGrpInfo */
typedef uint16 Com_TxBufferEndIdxOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TxBufferLengthOfTxSigGrpInfo */
typedef uint8 Com_TxBufferLengthOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TxBufferSigGrpInTxIPDUEndIdxOfTxSigGrpInfo */
typedef uint16 Com_TxBufferSigGrpInTxIPDUEndIdxOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TxBufferSigGrpInTxIPDULengthOfTxSigGrpInfo */
typedef uint8 Com_TxBufferSigGrpInTxIPDULengthOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TxBufferSigGrpInTxIPDUStartIdxOfTxSigGrpInfo */
typedef uint16 Com_TxBufferSigGrpInTxIPDUStartIdxOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TxBufferStartIdxOfTxSigGrpInfo */
typedef uint16 Com_TxBufferStartIdxOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TxBufferUbIdxInTxBufferIdxOfTxSigGrpInfo */
typedef uint16 Com_TxBufferUbIdxInTxBufferIdxOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TxBufferUbIdxInTxBufferUsedOfTxSigGrpInfo */
typedef boolean Com_TxBufferUbIdxInTxBufferUsedOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TxBufferUsedOfTxSigGrpInfo */
typedef boolean Com_TxBufferUsedOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TxPduInfoIdxOfTxSigGrpInfo */
typedef uint8 Com_TxPduInfoIdxOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TxSigGrpMaskEndIdxOfTxSigGrpInfo */
typedef uint8 Com_TxSigGrpMaskEndIdxOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TxSigGrpMaskLengthOfTxSigGrpInfo */
typedef uint8 Com_TxSigGrpMaskLengthOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TxSigGrpMaskStartIdxOfTxSigGrpInfo */
typedef uint8 Com_TxSigGrpMaskStartIdxOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TxSigGrpMaskUsedOfTxSigGrpInfo */
typedef boolean Com_TxSigGrpMaskUsedOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_UbMaskIdxOfTxSigGrpInfo */
typedef uint8 Com_UbMaskIdxOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_UbMaskUsedOfTxSigGrpInfo */
typedef boolean Com_UbMaskUsedOfTxSigGrpInfoType;

/**   \brief  value based type definition for Com_TxSigGrpInfoInd */
typedef uint8 Com_TxSigGrpInfoIndType;

/**   \brief  value based type definition for Com_TxSigGrpMask */
typedef uint8 Com_TxSigGrpMaskType;

/**   \brief  value based type definition for Com_ApplTypeOfTxSigInfo */
typedef uint8 Com_ApplTypeOfTxSigInfoType;

/**   \brief  value based type definition for Com_BitLengthOfTxSigInfo */
typedef uint16 Com_BitLengthOfTxSigInfoType;

/**   \brief  value based type definition for Com_BitPositionOfTxSigInfo */
typedef uint16 Com_BitPositionOfTxSigInfoType;

/**   \brief  value based type definition for Com_BusAccOfTxSigInfo */
typedef uint8 Com_BusAccOfTxSigInfoType;

/**   \brief  value based type definition for Com_ByteLengthOfTxSigInfo */
typedef uint8 Com_ByteLengthOfTxSigInfoType;

/**   \brief  value based type definition for Com_BytePositionOfTxSigInfo */
typedef uint8 Com_BytePositionOfTxSigInfoType;

/**   \brief  value based type definition for Com_FilterInitValueIdxOfTxSigInfo */
typedef uint8 Com_FilterInitValueIdxOfTxSigInfoType;

/**   \brief  value based type definition for Com_FilterInitValueUsedOfTxSigInfo */
typedef boolean Com_FilterInitValueUsedOfTxSigInfoType;

/**   \brief  value based type definition for Com_OnChangeIdxOfTxSigInfo */
typedef uint8 Com_OnChangeIdxOfTxSigInfoType;

/**   \brief  value based type definition for Com_OnChangeUsedOfTxSigInfo */
typedef boolean Com_OnChangeUsedOfTxSigInfoType;

/**   \brief  value based type definition for Com_StartByteInPduPositionOfTxSigInfo */
typedef uint8 Com_StartByteInPduPositionOfTxSigInfoType;

/**   \brief  value based type definition for Com_TriggeredOfTxSigInfo */
typedef boolean Com_TriggeredOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxBufferEndIdxOfTxSigInfo */
typedef uint16 Com_TxBufferEndIdxOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxBufferLengthOfTxSigInfo */
typedef uint8 Com_TxBufferLengthOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxBufferStartIdxOfTxSigInfo */
typedef uint16 Com_TxBufferStartIdxOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxBufferUbIdxInTxBufferIdxOfTxSigInfo */
typedef uint16 Com_TxBufferUbIdxInTxBufferIdxOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxBufferUbIdxInTxBufferUsedOfTxSigInfo */
typedef boolean Com_TxBufferUbIdxInTxBufferUsedOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxBufferUsedOfTxSigInfo */
typedef boolean Com_TxBufferUsedOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxPduInfoIdxOfTxSigInfo */
typedef uint8 Com_TxPduInfoIdxOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxSigGrpInfoIdxOfTxSigInfo */
typedef uint8 Com_TxSigGrpInfoIdxOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxSigGrpInfoUsedOfTxSigInfo */
typedef boolean Com_TxSigGrpInfoUsedOfTxSigInfoType;

/**   \brief  value based type definition for Com_UbMaskIdxOfTxSigInfo */
typedef uint8 Com_UbMaskIdxOfTxSigInfoType;

/**   \brief  value based type definition for Com_UbMaskUsedOfTxSigInfo */
typedef boolean Com_UbMaskUsedOfTxSigInfoType;

/**   \brief  value based type definition for Com_TxSigInfoFilterInitValueInd */
typedef uint16 Com_TxSigInfoFilterInitValueIndType;

/**   \brief  value based type definition for Com_TxTOutCnt */
typedef uint8 Com_TxTOutCntType;

/**   \brief  value based type definition for Com_CbkTxTOutFuncPtrIndEndIdxOfTxTOutInfo */
typedef uint8 Com_CbkTxTOutFuncPtrIndEndIdxOfTxTOutInfoType;

/**   \brief  value based type definition for Com_CbkTxTOutFuncPtrIndStartIdxOfTxTOutInfo */
typedef uint8 Com_CbkTxTOutFuncPtrIndStartIdxOfTxTOutInfoType;

/**   \brief  value based type definition for Com_CbkTxTOutFuncPtrIndUsedOfTxTOutInfo */
typedef boolean Com_CbkTxTOutFuncPtrIndUsedOfTxTOutInfoType;

/**   \brief  value based type definition for Com_FactorOfTxTOutInfo */
typedef uint8 Com_FactorOfTxTOutInfoType;

/**   \brief  value based type definition for Com_ModeOfTxTOutInfo */
typedef uint8 Com_ModeOfTxTOutInfoType;

/**   \brief  value based type definition for Com_TxPduInfoIdxOfTxTOutInfo */
typedef uint8 Com_TxPduInfoIdxOfTxTOutInfoType;

/**   \brief  value based type definition for Com_TxTmpTpPduLength */
typedef PduLengthType Com_TxTmpTpPduLengthType;

/**   \brief  value based type definition for Com_TxTpConnectionState */
typedef uint8 Com_TxTpConnectionStateType;

/**   \brief  value based type definition for Com_BufferSizeOfTxTpInfo */
typedef uint8 Com_BufferSizeOfTxTpInfoType;

/**   \brief  value based type definition for Com_DynamicInitialLengthOfTxTpInfo */
typedef uint8 Com_DynamicInitialLengthOfTxTpInfoType;

/**   \brief  value based type definition for Com_TxBufferEndIdxOfTxTpInfo */
typedef uint16 Com_TxBufferEndIdxOfTxTpInfoType;

/**   \brief  value based type definition for Com_TxBufferLengthOfTxTpInfo */
typedef uint8 Com_TxBufferLengthOfTxTpInfoType;

/**   \brief  value based type definition for Com_TxBufferStartIdxOfTxTpInfo */
typedef uint16 Com_TxBufferStartIdxOfTxTpInfoType;

/**   \brief  value based type definition for Com_TxBufferUsedOfTxTpInfo */
typedef boolean Com_TxBufferUsedOfTxTpInfoType;

/**   \brief  value based type definition for Com_TxSigInfoDynSigIdxOfTxTpInfo */
typedef uint16 Com_TxSigInfoDynSigIdxOfTxTpInfoType;

/**   \brief  value based type definition for Com_TxSigInfoDynSigUsedOfTxTpInfo */
typedef boolean Com_TxSigInfoDynSigUsedOfTxTpInfoType;

/**   \brief  value based type definition for Com_TxTpSduLength */
typedef PduLengthType Com_TxTpSduLengthType;

/**   \brief  value based type definition for Com_TxTpWrittenBytesCounter */
typedef PduLengthType Com_TxTpWrittenBytesCounterType;

/**   \brief  value based type definition for Com_WaitingForConfirmation */
typedef boolean Com_WaitingForConfirmationType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  ComPCStructTypes  Com Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in Com_ActivatableRxComIPdus */
typedef struct sCom_ActivatableRxComIPdusType
{
  uint8 Com_ActivatableRxComIPdusNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_ActivatableRxComIPdusType;

/**   \brief  type used in Com_ActivatableTxComIPdus */
typedef struct sCom_ActivatableTxComIPdusType
{
  uint8 Com_ActivatableTxComIPdusNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_ActivatableTxComIPdusType;

/**   \brief  type used in Com_FilterInfo_UInt16 */
typedef struct sCom_FilterInfo_UInt16Type
{
  uint8 Com_FilterInfo_UInt16NeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_FilterInfo_UInt16Type;

/**   \brief  type used in Com_FilterInfo_UInt8 */
typedef struct sCom_FilterInfo_UInt8Type
{
  uint8 Com_FilterInfo_UInt8NeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_FilterInfo_UInt8Type;

/**   \brief  type used in Com_GwGrpSigMapping */
typedef struct sCom_GwGrpSigMappingType
{
  Com_RxAccessInfoIdxOfGwGrpSigMappingType RxAccessInfoIdxOfGwGrpSigMapping;  /**< the index of the 1:1 relation pointing to Com_RxAccessInfo */
  Com_TxSigIdOfGwGrpSigMappingType TxSigIdOfGwGrpSigMapping;  /**< The signal handle ID of the destination signal. */
} Com_GwGrpSigMappingType;

/**   \brief  type used in Com_GwInfo */
typedef struct sCom_GwInfoType
{
  Com_GwSigGrpMappingEndIdxOfGwInfoType GwSigGrpMappingEndIdxOfGwInfo;  /**< the end index of the 0:n relation pointing to Com_GwSigGrpMapping */
  Com_GwSigGrpMappingStartIdxOfGwInfoType GwSigGrpMappingStartIdxOfGwInfo;  /**< the start index of the 0:n relation pointing to Com_GwSigGrpMapping */
  Com_GwSigMappingEndIdxOfGwInfoType GwSigMappingEndIdxOfGwInfo;  /**< the end index of the 0:n relation pointing to Com_GwSigMapping */
  Com_GwSigMappingStartIdxOfGwInfoType GwSigMappingStartIdxOfGwInfo;  /**< the start index of the 0:n relation pointing to Com_GwSigMapping */
} Com_GwInfoType;

/**   \brief  type used in Com_GwSigGrpMapping */
typedef struct sCom_GwSigGrpMappingType
{
  Com_GwGrpSigMappingEndIdxOfGwSigGrpMappingType GwGrpSigMappingEndIdxOfGwSigGrpMapping;  /**< the end index of the 1:n relation pointing to Com_GwGrpSigMapping */
  Com_GwGrpSigMappingStartIdxOfGwSigGrpMappingType GwGrpSigMappingStartIdxOfGwSigGrpMapping;  /**< the start index of the 1:n relation pointing to Com_GwGrpSigMapping */
  Com_TxSigGrpIdOfGwSigGrpMappingType TxSigGrpIdOfGwSigGrpMapping;  /**< The signal group handle ID of the destination signal group. */
} Com_GwSigGrpMappingType;

/**   \brief  type used in Com_GwSigMapping */
typedef struct sCom_GwSigMappingType
{
  Com_RxAccessInfoIdxOfGwSigMappingType RxAccessInfoIdxOfGwSigMapping;  /**< the index of the 1:1 relation pointing to Com_RxAccessInfo */
  Com_TxSigIdOfGwSigMappingType TxSigIdOfGwSigMapping;  /**< The signal handle ID of the destination signal. */
} Com_GwSigMappingType;

/**   \brief  type used in Com_RxAccessInfo */
typedef struct sCom_RxAccessInfoType
{
  Com_BitLengthOfRxAccessInfoType BitLengthOfRxAccessInfo;  /**< Bit length of the signal or group signal. */
  Com_BitPositionOfRxAccessInfoType BitPositionOfRxAccessInfo;  /**< Little endian bit position of the signal or group signal within the I-PDU. */
  Com_BufferIdxOfRxAccessInfoType BufferIdxOfRxAccessInfo;  /**< the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64 */
  Com_RoutingBufferIdxOfRxAccessInfoType RoutingBufferIdxOfRxAccessInfo;  /**< the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64 */
  Com_RxSigBufferArrayBasedBufferEndIdxOfRxAccessInfoType RxSigBufferArrayBasedBufferEndIdxOfRxAccessInfo;  /**< the end index of the 0:n relation pointing to Com_RxSigBufferArrayBased */
  Com_RxSigBufferArrayBasedBufferStartIdxOfRxAccessInfoType RxSigBufferArrayBasedBufferStartIdxOfRxAccessInfo;  /**< the start index of the 0:n relation pointing to Com_RxSigBufferArrayBased */
  Com_RxSigBufferArrayBasedRoutingBufferEndIdxOfRxAccessInfoType RxSigBufferArrayBasedRoutingBufferEndIdxOfRxAccessInfo;  /**< the end index of the 0:n relation pointing to Com_RxSigBufferArrayBased */
  Com_RxSigBufferArrayBasedRoutingBufferStartIdxOfRxAccessInfoType RxSigBufferArrayBasedRoutingBufferStartIdxOfRxAccessInfo;  /**< the start index of the 0:n relation pointing to Com_RxSigBufferArrayBased */
  Com_RxSigBufferArrayBasedShdBufferEndIdxOfRxAccessInfoType RxSigBufferArrayBasedShdBufferEndIdxOfRxAccessInfo;  /**< the end index of the 0:n relation pointing to Com_RxSigBufferArrayBased */
  Com_RxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfoType RxSigBufferArrayBasedShdBufferStartIdxOfRxAccessInfo;  /**< the start index of the 0:n relation pointing to Com_RxSigBufferArrayBased */
  Com_ShdBufferIdxOfRxAccessInfoType ShdBufferIdxOfRxAccessInfo;  /**< the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64 */
  Com_InitValueUsedOfRxAccessInfoType InitValueUsedOfRxAccessInfo;  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64 */
  Com_IsGroupSignalOfRxAccessInfoType IsGroupSignalOfRxAccessInfo;
  Com_RxSigBufferArrayBasedBufferUsedOfRxAccessInfoType RxSigBufferArrayBasedBufferUsedOfRxAccessInfo;  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxSigBufferArrayBased */
  Com_TmpBufferUsedOfRxAccessInfoType TmpBufferUsedOfRxAccessInfo;  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TmpRxShdBufferUInt8,Com_TmpRxShdBufferUInt16,Com_TmpRxShdBufferUInt32,Com_TmpRxShdBufferUInt64,Com_TmpRxShdBufferSInt8,Com_TmpRxShdBufferSInt16,Com_TmpRxShdBufferSInt32,Com_TmpRxShdBufferSInt64,Com_TmpRxShdBufferFloat32,Com_TmpRxShdBufferFloat64 */
  Com_TmpRxShdBufferArrayBasedTmpBufferUsedOfRxAccessInfoType TmpRxShdBufferArrayBasedTmpBufferUsedOfRxAccessInfo;  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TmpRxShdBufferArrayBased */
  Com_ApplTypeOfRxAccessInfoType ApplTypeOfRxAccessInfo;  /**< Application data type. */
  Com_BusAccOfRxAccessInfoType BusAccOfRxAccessInfo;  /**< BUS access algorithm for signal or group signal packing / un-packing. */
  Com_ByteLengthOfRxAccessInfoType ByteLengthOfRxAccessInfo;  /**< Byte length of the signal or group signal. */
  Com_BytePositionOfRxAccessInfoType BytePositionOfRxAccessInfo;  /**< Little endian byte position of the signal or group signal within the I-PDU. */
  Com_ConstValueArrayBasedInitValueEndIdxOfRxAccessInfoType ConstValueArrayBasedInitValueEndIdxOfRxAccessInfo;  /**< the end index of the 0:n relation pointing to Com_ConstValueArrayBased */
  Com_ConstValueArrayBasedInitValueStartIdxOfRxAccessInfoType ConstValueArrayBasedInitValueStartIdxOfRxAccessInfo;  /**< the start index of the 0:n relation pointing to Com_ConstValueArrayBased */
  Com_GwInfoIdxOfRxAccessInfoType GwInfoIdxOfRxAccessInfo;  /**< the index of the 0:1 relation pointing to Com_GwInfo */
  Com_RxDataTimeoutSubstitutionValueIdxOfRxAccessInfoType RxDataTimeoutSubstitutionValueIdxOfRxAccessInfo;  /**< the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64 */
  Com_RxPduInfoIdxOfRxAccessInfoType RxPduInfoIdxOfRxAccessInfo;  /**< the index of the 1:1 relation pointing to Com_RxPduInfo */
  Com_RxTOutInfoIdxOfRxAccessInfoType RxTOutInfoIdxOfRxAccessInfo;  /**< the index of the 0:1 relation pointing to Com_RxTOutInfo */
  Com_StartByteInPduPositionOfRxAccessInfoType StartByteInPduPositionOfRxAccessInfo;  /**< Start Byte position of the signal or group signal within the I-PDU. */
  Com_TmpBufferIdxOfRxAccessInfoType TmpBufferIdxOfRxAccessInfo;  /**< the index of the 0:1 relation pointing to Com_TmpRxShdBufferUInt8,Com_TmpRxShdBufferUInt16,Com_TmpRxShdBufferUInt32,Com_TmpRxShdBufferUInt64,Com_TmpRxShdBufferSInt8,Com_TmpRxShdBufferSInt16,Com_TmpRxShdBufferSInt32,Com_TmpRxShdBufferSInt64,Com_TmpRxShdBufferFloat32,Com_TmpRxShdBufferFloat64 */
  Com_TmpRxShdBufferArrayBasedTmpBufferEndIdxOfRxAccessInfoType TmpRxShdBufferArrayBasedTmpBufferEndIdxOfRxAccessInfo;  /**< the end index of the 0:n relation pointing to Com_TmpRxShdBufferArrayBased */
  Com_TmpRxShdBufferArrayBasedTmpBufferStartIdxOfRxAccessInfoType TmpRxShdBufferArrayBasedTmpBufferStartIdxOfRxAccessInfo;  /**< the start index of the 0:n relation pointing to Com_TmpRxShdBufferArrayBased */
} Com_RxAccessInfoType;

/**   \brief  type used in Com_RxPduGrpInfo */
typedef struct sCom_RxPduGrpInfoType
{
  Com_PduGrpVectorEndIdxOfRxPduGrpInfoType PduGrpVectorEndIdxOfRxPduGrpInfo;  /**< the end index of the 0:n relation pointing to Com_PduGrpVector */
  Com_PduGrpVectorStartIdxOfRxPduGrpInfoType PduGrpVectorStartIdxOfRxPduGrpInfo;  /**< the start index of the 0:n relation pointing to Com_PduGrpVector */
} Com_RxPduGrpInfoType;

/**   \brief  type used in Com_RxPduInfo */
typedef struct sCom_RxPduInfoType
{
  Com_RxAccessInfoIndEndIdxOfRxPduInfoType RxAccessInfoIndEndIdxOfRxPduInfo;  /**< the end index of the 0:n relation pointing to Com_RxAccessInfoInd */
  Com_RxAccessInfoIndStartIdxOfRxPduInfoType RxAccessInfoIndStartIdxOfRxPduInfo;  /**< the start index of the 0:n relation pointing to Com_RxAccessInfoInd */
  Com_RxDefPduBufferEndIdxOfRxPduInfoType RxDefPduBufferEndIdxOfRxPduInfo;  /**< the end index of the 0:n relation pointing to Com_RxDefPduBuffer */
  Com_RxDefPduBufferStartIdxOfRxPduInfoType RxDefPduBufferStartIdxOfRxPduInfo;  /**< the start index of the 0:n relation pointing to Com_RxDefPduBuffer */
  Com_RxSigInfoEndIdxOfRxPduInfoType RxSigInfoEndIdxOfRxPduInfo;  /**< the end index of the 0:n relation pointing to Com_RxSigInfo */
  Com_RxSigInfoStartIdxOfRxPduInfoType RxSigInfoStartIdxOfRxPduInfo;  /**< the start index of the 0:n relation pointing to Com_RxSigInfo */
  Com_RxAccessInfoIndUsedOfRxPduInfoType RxAccessInfoIndUsedOfRxPduInfo;  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxAccessInfoInd */
  Com_RxTOutInfoUsedOfRxPduInfoType RxTOutInfoUsedOfRxPduInfo;  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxTOutInfo */
  Com_GwInfoEndIdxOfRxPduInfoType GwInfoEndIdxOfRxPduInfo;  /**< the end index of the 0:n relation pointing to Com_GwInfo */
  Com_GwInfoStartIdxOfRxPduInfoType GwInfoStartIdxOfRxPduInfo;  /**< the start index of the 0:n relation pointing to Com_GwInfo */
  Com_RxSigGrpInfoIndEndIdxOfRxPduInfoType RxSigGrpInfoIndEndIdxOfRxPduInfo;  /**< the end index of the 0:n relation pointing to Com_RxSigGrpInfoInd */
  Com_RxSigGrpInfoIndStartIdxOfRxPduInfoType RxSigGrpInfoIndStartIdxOfRxPduInfo;  /**< the start index of the 0:n relation pointing to Com_RxSigGrpInfoInd */
  Com_RxTOutInfoIndEndIdxOfRxPduInfoType RxTOutInfoIndEndIdxOfRxPduInfo;  /**< the end index of the 0:n relation pointing to Com_RxTOutInfoInd */
  Com_RxTOutInfoIndStartIdxOfRxPduInfoType RxTOutInfoIndStartIdxOfRxPduInfo;  /**< the start index of the 0:n relation pointing to Com_RxTOutInfoInd */
  Com_RxTpInfoIdxOfRxPduInfoType RxTpInfoIdxOfRxPduInfo;  /**< the index of the 0:1 relation pointing to Com_RxTpInfo */
  Com_SignalProcessingOfRxPduInfoType SignalProcessingOfRxPduInfo;  /**< Defines whether rx Pdu is processed in DEFERRED or IMMEDIATE fashion. */
  Com_TypeOfRxPduInfoType TypeOfRxPduInfo;  /**< Defines whether rx Pdu is a NORMAL or TP IPdu. */
} Com_RxPduInfoType;

/**   \brief  type used in Com_RxSigGrpInfo */
typedef struct sCom_RxSigGrpInfoType
{
  Com_ShdBufferRequiredOfRxSigGrpInfoType ShdBufferRequiredOfRxSigGrpInfo;
  Com_GwInfoIdxOfRxSigGrpInfoType GwInfoIdxOfRxSigGrpInfo;  /**< the index of the 0:1 relation pointing to Com_GwInfo */
  Com_RxAccessInfoGrpSigIndEndIdxOfRxSigGrpInfoType RxAccessInfoGrpSigIndEndIdxOfRxSigGrpInfo;  /**< the end index of the 0:n relation pointing to Com_RxAccessInfoGrpSigInd */
  Com_RxAccessInfoGrpSigIndStartIdxOfRxSigGrpInfoType RxAccessInfoGrpSigIndStartIdxOfRxSigGrpInfo;  /**< the start index of the 0:n relation pointing to Com_RxAccessInfoGrpSigInd */
  Com_RxCbkFuncPtrAckIdxOfRxSigGrpInfoType RxCbkFuncPtrAckIdxOfRxSigGrpInfo;  /**< the index of the 0:1 relation pointing to Com_RxCbkFuncPtr */
  Com_RxPduInfoIdxOfRxSigGrpInfoType RxPduInfoIdxOfRxSigGrpInfo;  /**< the index of the 1:1 relation pointing to Com_RxPduInfo */
  Com_SignalProcessingOfRxSigGrpInfoType SignalProcessingOfRxSigGrpInfo;
  Com_StartBytePositionOfRxSigGrpInfoType StartBytePositionOfRxSigGrpInfo;  /**< Least significant byte position of first group signal within the ComIPdu. */
  Com_UbIdxOfRxSigGrpInfoType UbIdxOfRxSigGrpInfo;  /**< Byte position of update-bit within the I-PDU. ea:{9B36DD60-EF52-4c12-9FB3-17D39CA664C3} */
  Com_UbMaskIdxOfRxSigGrpInfoType UbMaskIdxOfRxSigGrpInfo;  /**< the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64 */
  Com_ValidDlcOfRxSigGrpInfoType ValidDlcOfRxSigGrpInfo;  /**< Minimum length of PDU required to completely receive the signal or signal group. */
} Com_RxSigGrpInfoType;

/**   \brief  type used in Com_RxSigInfo */
typedef struct sCom_RxSigInfoType
{
  Com_RxAccessInfoIdxOfRxSigInfoType RxAccessInfoIdxOfRxSigInfo;  /**< the index of the 1:1 relation pointing to Com_RxAccessInfo */
  Com_GwInfoIdxOfRxSigInfoType GwInfoIdxOfRxSigInfo;  /**< the index of the 0:1 relation pointing to Com_GwInfo */
  Com_RxCbkFuncPtrAckIdxOfRxSigInfoType RxCbkFuncPtrAckIdxOfRxSigInfo;  /**< the index of the 0:1 relation pointing to Com_RxCbkFuncPtr */
  Com_RxTOutInfoIdxOfRxSigInfoType RxTOutInfoIdxOfRxSigInfo;  /**< the index of the 0:1 relation pointing to Com_RxTOutInfo */
  Com_SignalProcessingOfRxSigInfoType SignalProcessingOfRxSigInfo;
  Com_UbIdxOfRxSigInfoType UbIdxOfRxSigInfo;  /**< Byte position of update-bit within the I-PDU. ea:{9B36DD60-EF52-4c12-9FB3-17D39CA664C3} */
  Com_UbMaskIdxOfRxSigInfoType UbMaskIdxOfRxSigInfo;  /**< the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64 */
  Com_ValidDlcOfRxSigInfoType ValidDlcOfRxSigInfo;  /**< Minimum length of PDU required to completely receive the signal or signal group. */
} Com_RxSigInfoType;

/**   \brief  type used in Com_RxTOutInfo */
typedef struct sCom_RxTOutInfoType
{
  Com_CbkRxTOutFuncPtrIndEndIdxOfRxTOutInfoType CbkRxTOutFuncPtrIndEndIdxOfRxTOutInfo;  /**< the end index of the 0:n relation pointing to Com_CbkRxTOutFuncPtrInd */
  Com_CbkRxTOutFuncPtrIndStartIdxOfRxTOutInfoType CbkRxTOutFuncPtrIndStartIdxOfRxTOutInfo;  /**< the start index of the 0:n relation pointing to Com_CbkRxTOutFuncPtrInd */
  Com_FactorOfRxTOutInfoType FactorOfRxTOutInfo;  /**< Deadline monitoring timeout factor. */
  Com_FirstFactorOfRxTOutInfoType FirstFactorOfRxTOutInfo;  /**< Timeout factor for first deadline monitoring. */
  Com_RxPduInfoIdxOfRxTOutInfoType RxPduInfoIdxOfRxTOutInfo;  /**< the index of the 1:1 relation pointing to Com_RxPduInfo */
} Com_RxTOutInfoType;

/**   \brief  type used in Com_RxTpInfo */
typedef struct sCom_RxTpInfoType
{
  Com_RxAccessInfoDynSigIdxOfRxTpInfoType RxAccessInfoDynSigIdxOfRxTpInfo;  /**< the index of the 0:1 relation pointing to Com_RxAccessInfo */
  Com_RxTpBufferEndIdxOfRxTpInfoType RxTpBufferEndIdxOfRxTpInfo;  /**< the end index of the 0:n relation pointing to Com_RxTpBuffer */
  Com_RxTpBufferStartIdxOfRxTpInfoType RxTpBufferStartIdxOfRxTpInfo;  /**< the start index of the 0:n relation pointing to Com_RxTpBuffer */
  Com_BufferSizeOfRxTpInfoType BufferSizeOfRxTpInfo;
  Com_DynamicInitialLengthOfRxTpInfoType DynamicInitialLengthOfRxTpInfo;
} Com_RxTpInfoType;

/**   \brief  type used in Com_TxModeFalse */
typedef struct sCom_TxModeFalseType
{
  Com_TimePeriodOfTxModeFalseType TimePeriodOfTxModeFalse;  /**< Cycle time factor. */
  Com_DirectOfTxModeFalseType DirectOfTxModeFalse;  /**< TRUE if transmission mode contains a direct part. */
  Com_TimeOffsetOfTxModeFalseType TimeOffsetOfTxModeFalse;  /**< Initial time offset factor for cyclic transmission. */
} Com_TxModeFalseType;

/**   \brief  type used in Com_TxModeInfo */
typedef struct sCom_TxModeInfoType
{
  Com_TxModeFalseUsedOfTxModeInfoType TxModeFalseUsedOfTxModeInfo;  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TxModeFalse */
  Com_MinimumDelayOfTxModeInfoType MinimumDelayOfTxModeInfo;  /**< Minimum delay factor of the Tx I-PDU. */
  Com_TxModeTrueIdxOfTxModeInfoType TxModeTrueIdxOfTxModeInfo;  /**< the index of the 0:1 relation pointing to Com_TxModeTrue */
  Com_TxSigInfoFilterInitValueIndEndIdxOfTxModeInfoType TxSigInfoFilterInitValueIndEndIdxOfTxModeInfo;  /**< the end index of the 0:n relation pointing to Com_TxSigInfoFilterInitValueInd */
  Com_TxSigInfoFilterInitValueIndStartIdxOfTxModeInfoType TxSigInfoFilterInitValueIndStartIdxOfTxModeInfo;  /**< the start index of the 0:n relation pointing to Com_TxSigInfoFilterInitValueInd */
} Com_TxModeInfoType;

/**   \brief  type used in Com_TxModeTrue */
typedef struct sCom_TxModeTrueType
{
  Com_TimePeriodOfTxModeTrueType TimePeriodOfTxModeTrue;  /**< Cycle time factor. */
  Com_DirectOfTxModeTrueType DirectOfTxModeTrue;  /**< TRUE if transmission mode contains a direct part. */
  Com_TimeOffsetOfTxModeTrueType TimeOffsetOfTxModeTrue;  /**< Initial time offset factor for cyclic transmission. */
} Com_TxModeTrueType;

/**   \brief  type used in Com_TxPduGrpInfo */
typedef struct sCom_TxPduGrpInfoType
{
  Com_PduGrpVectorEndIdxOfTxPduGrpInfoType PduGrpVectorEndIdxOfTxPduGrpInfo;  /**< the end index of the 0:n relation pointing to Com_PduGrpVector */
  Com_PduGrpVectorStartIdxOfTxPduGrpInfoType PduGrpVectorStartIdxOfTxPduGrpInfo;  /**< the start index of the 0:n relation pointing to Com_PduGrpVector */
} Com_TxPduGrpInfoType;

/**   \brief  type used in Com_TxPduInfo */
typedef struct sCom_TxPduInfoType
{
  Com_TxPduInitValueEndIdxOfTxPduInfoType TxPduInitValueEndIdxOfTxPduInfo;  /**< the end index of the 0:n relation pointing to Com_TxPduInitValue */
  Com_TxPduInitValueMetaDataEndIdxOfTxPduInfoType TxPduInitValueMetaDataEndIdxOfTxPduInfo;  /**< the end index of the 0:n relation pointing to Com_TxPduInitValue */
  Com_TxPduInitValueMetaDataStartIdxOfTxPduInfoType TxPduInitValueMetaDataStartIdxOfTxPduInfo;  /**< the start index of the 0:n relation pointing to Com_TxPduInitValue */
  Com_TxPduInitValueStartIdxOfTxPduInfoType TxPduInitValueStartIdxOfTxPduInfo;  /**< the start index of the 0:n relation pointing to Com_TxPduInitValue */
  Com_TxPduInitValueMetaDataUsedOfTxPduInfoType TxPduInitValueMetaDataUsedOfTxPduInfo;  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduInitValue */
  Com_TxPduInitValueUsedOfTxPduInfoType TxPduInitValueUsedOfTxPduInfo;  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduInitValue */
  Com_ClrUbOfTxPduInfoType ClrUbOfTxPduInfo;  /**< Context the update-bits shall be cleared. */
  Com_ConstValueUInt8UbClearMaskEndIdxOfTxPduInfoType ConstValueUInt8UbClearMaskEndIdxOfTxPduInfo;  /**< the end index of the 0:n relation pointing to Com_ConstValueUInt8 */
  Com_ConstValueUInt8UbClearMaskStartIdxOfTxPduInfoType ConstValueUInt8UbClearMaskStartIdxOfTxPduInfo;  /**< the start index of the 0:n relation pointing to Com_ConstValueUInt8 */
  Com_ExternalIdOfTxPduInfoType ExternalIdOfTxPduInfo;  /**< External ID used to call PduR_ComTransmit(). */
  Com_PduWithMetaDataLengthOfTxPduInfoType PduWithMetaDataLengthOfTxPduInfo;  /**< Length of Pdu with MetaData. */
  Com_TxBufferLengthOfTxPduInfoType TxBufferLengthOfTxPduInfo;  /**< the number of relations pointing to Com_TxBuffer */
  Com_TxBufferMetaDataLengthOfTxPduInfoType TxBufferMetaDataLengthOfTxPduInfo;  /**< the number of relations pointing to Com_TxBuffer */
  Com_TxSigGrpInfoIndEndIdxOfTxPduInfoType TxSigGrpInfoIndEndIdxOfTxPduInfo;  /**< the end index of the 0:n relation pointing to Com_TxSigGrpInfoInd */
  Com_TxSigGrpInfoIndStartIdxOfTxPduInfoType TxSigGrpInfoIndStartIdxOfTxPduInfo;  /**< the start index of the 0:n relation pointing to Com_TxSigGrpInfoInd */
  Com_TxTOutInfoIdxOfTxPduInfoType TxTOutInfoIdxOfTxPduInfo;  /**< the index of the 0:1 relation pointing to Com_TxTOutInfo */
  Com_TxTpInfoIdxOfTxPduInfoType TxTpInfoIdxOfTxPduInfo;  /**< the index of the 0:1 relation pointing to Com_TxTpInfo */
} Com_TxPduInfoType;

/**   \brief  type used in Com_TxSigGrpInfo */
typedef struct sCom_TxSigGrpInfoType
{
  Com_TxBufferEndIdxOfTxSigGrpInfoType TxBufferEndIdxOfTxSigGrpInfo;  /**< the end index of the 0:n relation pointing to Com_TxBuffer */
  Com_TxBufferSigGrpInTxIPDUEndIdxOfTxSigGrpInfoType TxBufferSigGrpInTxIPDUEndIdxOfTxSigGrpInfo;  /**< the end index of the 1:n relation pointing to Com_TxBuffer */
  Com_TxBufferSigGrpInTxIPDUStartIdxOfTxSigGrpInfoType TxBufferSigGrpInTxIPDUStartIdxOfTxSigGrpInfo;  /**< the start index of the 1:n relation pointing to Com_TxBuffer */
  Com_TxBufferStartIdxOfTxSigGrpInfoType TxBufferStartIdxOfTxSigGrpInfo;  /**< the start index of the 0:n relation pointing to Com_TxBuffer */
  Com_TxBufferUbIdxInTxBufferIdxOfTxSigGrpInfoType TxBufferUbIdxInTxBufferIdxOfTxSigGrpInfo;  /**< the index of the 0:1 relation pointing to Com_TxBuffer */
  Com_TxSigGrpMaskUsedOfTxSigGrpInfoType TxSigGrpMaskUsedOfTxSigGrpInfo;  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxSigGrpMask */
  Com_UbMaskUsedOfTxSigGrpInfoType UbMaskUsedOfTxSigGrpInfo;  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64 */
  Com_PduOffsetOfTxSigGrpInfoType PduOffsetOfTxSigGrpInfo;  /**< Byte offset relative to the PDU the signal group is starting. */
  Com_TransferPropertyOfTxSigGrpInfoType TransferPropertyOfTxSigGrpInfo;
  Com_TxPduInfoIdxOfTxSigGrpInfoType TxPduInfoIdxOfTxSigGrpInfo;  /**< the index of the 1:1 relation pointing to Com_TxPduInfo */
  Com_TxSigGrpMaskEndIdxOfTxSigGrpInfoType TxSigGrpMaskEndIdxOfTxSigGrpInfo;  /**< the end index of the 0:n relation pointing to Com_TxSigGrpMask */
  Com_TxSigGrpMaskStartIdxOfTxSigGrpInfoType TxSigGrpMaskStartIdxOfTxSigGrpInfo;  /**< the start index of the 0:n relation pointing to Com_TxSigGrpMask */
  Com_UbMaskIdxOfTxSigGrpInfoType UbMaskIdxOfTxSigGrpInfo;  /**< the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64 */
} Com_TxSigGrpInfoType;

/**   \brief  type used in Com_TxSigInfo */
typedef struct sCom_TxSigInfoType
{
  Com_BitLengthOfTxSigInfoType BitLengthOfTxSigInfo;  /**< Bit length of the signal or group signal. */
  Com_BitPositionOfTxSigInfoType BitPositionOfTxSigInfo;  /**< Little endian bit position of the signal or group signal within the I-PDU. */
  Com_TxBufferEndIdxOfTxSigInfoType TxBufferEndIdxOfTxSigInfo;  /**< the end index of the 0:n relation pointing to Com_TxBuffer */
  Com_TxBufferStartIdxOfTxSigInfoType TxBufferStartIdxOfTxSigInfo;  /**< the start index of the 0:n relation pointing to Com_TxBuffer */
  Com_TxBufferUbIdxInTxBufferIdxOfTxSigInfoType TxBufferUbIdxInTxBufferIdxOfTxSigInfo;  /**< the index of the 0:1 relation pointing to Com_TxBuffer */
  Com_OnChangeUsedOfTxSigInfoType OnChangeUsedOfTxSigInfo;  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_FilterInfo_UInt8,Com_FilterInfo_SInt8,Com_FilterInfo_UInt16,Com_FilterInfo_SInt16,Com_FilterInfo_UInt32,Com_FilterInfo_SInt32,Com_FilterInfo_UInt64,Com_FilterInfo_SInt64,Com_FilterInfo_Float32,Com_FilterInfo_Float64,Com_FilterInfo_UInt8_N */
  Com_TriggeredOfTxSigInfoType TriggeredOfTxSigInfo;  /**< TRUE if signal or group signal has any 'TRIGGERED_*' transfer property. */
  Com_UbMaskUsedOfTxSigInfoType UbMaskUsedOfTxSigInfo;  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64 */
  Com_ApplTypeOfTxSigInfoType ApplTypeOfTxSigInfo;  /**< Application data type. */
  Com_BusAccOfTxSigInfoType BusAccOfTxSigInfo;  /**< BUS access algorithm for signal or group signal packing / un-packing. */
  Com_ByteLengthOfTxSigInfoType ByteLengthOfTxSigInfo;  /**< Byte length of the signal or group signal. */
  Com_BytePositionOfTxSigInfoType BytePositionOfTxSigInfo;  /**< Little endian byte position of the signal or group signal within the I-PDU. */
  Com_FilterInitValueIdxOfTxSigInfoType FilterInitValueIdxOfTxSigInfo;  /**< the index of the 0:1 relation pointing to Com_TxFilterInitValueUInt8,Com_TxFilterInitValueUInt16,Com_TxFilterInitValueUInt32,Com_TxFilterInitValueUInt64,Com_TxFilterInitValueSInt8,Com_TxFilterInitValueSInt16,Com_TxFilterInitValueSInt32,Com_TxFilterInitValueSInt64,Com_TxFilterInitValueFloat32,Com_TxFilterInitValueFloat64 */
  Com_OnChangeIdxOfTxSigInfoType OnChangeIdxOfTxSigInfo;  /**< the index of the 0:1 relation pointing to Com_FilterInfo_UInt8,Com_FilterInfo_SInt8,Com_FilterInfo_UInt16,Com_FilterInfo_SInt16,Com_FilterInfo_UInt32,Com_FilterInfo_SInt32,Com_FilterInfo_UInt64,Com_FilterInfo_SInt64,Com_FilterInfo_Float32,Com_FilterInfo_Float64,Com_FilterInfo_UInt8_N */
  Com_StartByteInPduPositionOfTxSigInfoType StartByteInPduPositionOfTxSigInfo;  /**< Start Byte position of the signal or group signal within the I-PDU. */
  Com_TxPduInfoIdxOfTxSigInfoType TxPduInfoIdxOfTxSigInfo;  /**< the index of the 1:1 relation pointing to Com_TxPduInfo */
  Com_TxSigGrpInfoIdxOfTxSigInfoType TxSigGrpInfoIdxOfTxSigInfo;  /**< the index of the 0:1 relation pointing to Com_TxSigGrpInfo */
  Com_UbMaskIdxOfTxSigInfoType UbMaskIdxOfTxSigInfo;  /**< the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64 */
} Com_TxSigInfoType;

/**   \brief  type used in Com_TxTOutInfo */
typedef struct sCom_TxTOutInfoType
{
  Com_CbkTxTOutFuncPtrIndEndIdxOfTxTOutInfoType CbkTxTOutFuncPtrIndEndIdxOfTxTOutInfo;  /**< the end index of the 0:n relation pointing to Com_CbkTxTOutFuncPtrInd */
  Com_CbkTxTOutFuncPtrIndStartIdxOfTxTOutInfoType CbkTxTOutFuncPtrIndStartIdxOfTxTOutInfo;  /**< the start index of the 0:n relation pointing to Com_CbkTxTOutFuncPtrInd */
  Com_FactorOfTxTOutInfoType FactorOfTxTOutInfo;  /**< Deadline monitoring timeout factor. */
  Com_ModeOfTxTOutInfoType ModeOfTxTOutInfo;  /**< Declares the type of Tx Deadline Monitoring (NORMAL_MODE or NONE_MODE only). */
  Com_TxPduInfoIdxOfTxTOutInfoType TxPduInfoIdxOfTxTOutInfo;  /**< the index of the 1:1 relation pointing to Com_TxPduInfo */
} Com_TxTOutInfoType;

/**   \brief  type used in Com_TxTpInfo */
typedef struct sCom_TxTpInfoType
{
  Com_TxBufferEndIdxOfTxTpInfoType TxBufferEndIdxOfTxTpInfo;  /**< the end index of the 0:n relation pointing to Com_TxBuffer */
  Com_TxBufferStartIdxOfTxTpInfoType TxBufferStartIdxOfTxTpInfo;  /**< the start index of the 0:n relation pointing to Com_TxBuffer */
  Com_TxSigInfoDynSigIdxOfTxTpInfoType TxSigInfoDynSigIdxOfTxTpInfo;  /**< the index of the 0:1 relation pointing to Com_TxSigInfo */
  Com_DynamicInitialLengthOfTxTpInfoType DynamicInitialLengthOfTxTpInfo;
} Com_TxTpInfoType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCSymbolicStructTypes  Com Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to Com_HandleRxPduDeferred */
typedef struct Com_HandleRxPduDeferredStructSTag
{
  Com_HandleRxPduDeferredType ACM_BB1_01P_oBackbone1J1939_57f87ee7_Rx[1];
  Com_HandleRxPduDeferredType AIR1_X_VMCU_oBackbone1J1939_8c40baab_Rx[1];
  Com_HandleRxPduDeferredType AMB_X_VMCU_oBackbone1J1939_7e62cfad_Rx[1];
  Com_HandleRxPduDeferredType Alarm_Sec_02P_oSecuritySubnet_c389f589_Rx[1];
  Com_HandleRxPduDeferredType Alarm_Sec_03S_oSecuritySubnet_7f4118ec_Rx[1];
  Com_HandleRxPduDeferredType Alarm_Sec_06S_oSecuritySubnet_9bbb790b_Rx[1];
  Com_HandleRxPduDeferredType Alarm_Sec_07S_oSecuritySubnet_74e9cfea_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_Alarm_SecuritySubnet_oSecuritySubnet_142a14f5_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_BBM_Backbone2_oBackbone2_bca080bd_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_CCM_CabSubnet_oCabSubnet_2d9f2dda_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_DACU_Backbone2_oBackbone2_49517b4d_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_DDM_SecuritySubnet_oSecuritySubnet_c5aaf372_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_ECUspare1_Backbone2_oBackbone2_90f829ea_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_ECUspare2_Backbone2_oBackbone2_a98084aa_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_ECUspare5_SecuritySubnet_oSecuritySubnet_44137fdb_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_ECUspare6_CabSubnet_oCabSubnet_7e48353e_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_EMS_Backbone2_oBackbone2_99fd5a83_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_IC3_Backbone2_oBackbone2_8d54783a_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_LECM1_CabSubnet_oCabSubnet_10e92ec5_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_PDM_SecuritySubnet_oSecuritySubnet_7215ae09_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_SRS_CabSubnet_oCabSubnet_aab008be_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_TECU_Backbone2_oBackbone2_7840c27c_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_VMCU_Backbone2_oBackbone2_3a2bd89f_Rx[1];
  Com_HandleRxPduDeferredType AnmMsg_WRCS_CabSubnet_oCabSubnet_fa464471_Rx[1];
  Com_HandleRxPduDeferredType BBM_BB2_01P_oBackbone2_0d63adb7_Rx[1];
  Com_HandleRxPduDeferredType BBM_BB2_02P_oBackbone2_b0a9c179_Rx[1];
  Com_HandleRxPduDeferredType BBM_BB2_03S_CIOM_oBackbone2_d5047985_Rx[1];
  Com_HandleRxPduDeferredType BBM_BB2_06P_oBackbone2_7010abef_Rx[1];
  Com_HandleRxPduDeferredType CCFWtoCIOM_L4_oLIN03_c78ba01d_Rx[1];
  Com_HandleRxPduDeferredType CCM_Cab_01P_oCabSubnet_3993b0cf_Rx[1];
  Com_HandleRxPduDeferredType CCM_Cab_03P_oCabSubnet_59cf0584_Rx[1];
  Com_HandleRxPduDeferredType CCM_Cab_04P_oCabSubnet_24bc03dc_Rx[1];
  Com_HandleRxPduDeferredType CCM_Cab_06P_oCabSubnet_44e0b697_Rx[1];
  Com_HandleRxPduDeferredType CCM_Cab_07P_oCabSubnet_99766f12_Rx[1];
  Com_HandleRxPduDeferredType CCM_Cab_08P_oCabSubnet_be06ba27_Rx[1];
  Com_HandleRxPduDeferredType CCVS_X_VMCU_oBackbone1J1939_ebb768c1_Rx[1];
  Com_HandleRxPduDeferredType CVW_X_EBS_oBackbone1J1939_1a9bdeb1_Rx[1];
  Com_HandleRxPduDeferredType DACU_BB2_02P_oBackbone2_3e1257a1_Rx[1];
  Com_HandleRxPduDeferredType DDM_Sec_01P_oSecuritySubnet_40cf4e44_Rx[1];
  Com_HandleRxPduDeferredType DDM_Sec_03S_oSecuritySubnet_16817e43_Rx[1];
  Com_HandleRxPduDeferredType DDM_Sec_04S_oSecuritySubnet_f7af7427_Rx[1];
  Com_HandleRxPduDeferredType DDM_Sec_05S_oSecuritySubnet_18fdc2c6_Rx[1];
  Com_HandleRxPduDeferredType DI_X_TACHO_oBackbone1J1939_0dca0ef5_Rx[1];
  Com_HandleRxPduDeferredType DLFWtoCIOM_L4_oLIN03_65509040_Rx[1];
  Com_HandleRxPduDeferredType DebugCtrl1_SCIM_BB2_oBackbone2_4d739d72_Rx[1];
  Com_HandleRxPduDeferredType DebugCtrl2_SCIM_BB2_oBackbone2_366d1f91_Rx[1];
  Com_HandleRxPduDeferredType DebugCtrl3_SCIM_BB2_oBackbone2_a9b79c0f_Rx[1];
  Com_HandleRxPduDeferredType DebugCtrl4_SCIM_BB2_oBackbone2_c0501a57_Rx[1];
  Com_HandleRxPduDeferredType DebugCtrl5_SCIM_BB2_oBackbone2_5f8a99c9_Rx[1];
  Com_HandleRxPduDeferredType DebugCtrl6_SCIM_BB2_oBackbone2_24941b2a_Rx[1];
  Com_HandleRxPduDeferredType DebugCtrl7_SCIM_BB2_oBackbone2_bb4e98b4_Rx[1];
  Com_HandleRxPduDeferredType DebugCtrl8_SCIM_BB2_oBackbone2_f75b179a_Rx[1];
  Com_HandleRxPduDeferredType DebugCtrl9_SCIM_BB2_oBackbone2_68819404_Rx[1];
  Com_HandleRxPduDeferredType DiagFaultStat_Alarm_Sec_oSecuritySubnet_347db5f6_Rx[1];
  Com_HandleRxPduDeferredType DiagFaultStat_CCM_Cab_oCabSubnet_d4c98b2c_Rx[1];
  Com_HandleRxPduDeferredType DiagFaultStat_DDM_Sec_oSecuritySubnet_c65980ff_Rx[1];
  Com_HandleRxPduDeferredType DiagFaultStat_LECM_Cab_oCabSubnet_870f9288_Rx[1];
  Com_HandleRxPduDeferredType DiagFaultStat_PDM_Sec_oSecuritySubnet_c777a720_Rx[1];
  Com_HandleRxPduDeferredType DiagFaultStat_SRS_Cab_oCabSubnet_ac384d3f_Rx[1];
  Com_HandleRxPduDeferredType DiagFaultStat_WRCS_Cab_oCabSubnet_3792ace7_Rx[1];
  Com_HandleRxPduDeferredType EBC1_X_EBS_oBackbone1J1939_68913e3f_Rx[1];
  Com_HandleRxPduDeferredType EBC2_X_EBS_oBackbone1J1939_1e740702_Rx[1];
  Com_HandleRxPduDeferredType EBC5_X_EBS_oBackbone1J1939_68cd9fac_Rx[1];
  Com_HandleRxPduDeferredType EBS_BB1_01P_oBackbone1J1939_ce636b4a_Rx[1];
  Com_HandleRxPduDeferredType EBS_BB1_02P_oBackbone1J1939_24e5b628_Rx[1];
  Com_HandleRxPduDeferredType EBS_BB1_05P_oBackbone1J1939_c5cbbc4c_Rx[1];
  Com_HandleRxPduDeferredType EEC1_X_EMS_oBackbone1J1939_50be66ff_Rx[1];
  Com_HandleRxPduDeferredType EEC2_X_EMS_oBackbone1J1939_265b5fc2_Rx[1];
  Com_HandleRxPduDeferredType ELCP1toCIOM_L4_oLIN03_e80fe278_Rx[1];
  Com_HandleRxPduDeferredType ELCP2toCIOM_L4_oLIN03_bb95b9fc_Rx[1];
  Com_HandleRxPduDeferredType EMS_BB2_01P_oBackbone2_dd91fc9b_Rx[1];
  Com_HandleRxPduDeferredType EMS_BB2_04P_oBackbone2_c0be4f88_Rx[1];
  Com_HandleRxPduDeferredType EMS_BB2_05P_oBackbone2_1d28960d_Rx[1];
  Com_HandleRxPduDeferredType EMS_BB2_06P_oBackbone2_a0e2fac3_Rx[1];
  Com_HandleRxPduDeferredType EMS_BB2_08P_oBackbone2_5a04f673_Rx[1];
  Com_HandleRxPduDeferredType EMS_BB2_09S_oBackbone2_f00cfd06_Rx[1];
  Com_HandleRxPduDeferredType EMS_BB2_11S_oBackbone2_3700cf1d_Rx[1];
  Com_HandleRxPduDeferredType EMS_BB2_13P_oBackbone2_20c2a8a6_Rx[1];
  Com_HandleRxPduDeferredType ERC1_X_EMSRet_oBackbone1J1939_6b48ff0e_Rx[1];
  Com_HandleRxPduDeferredType ERC1_X_RECU_oBackbone1J1939_5afd0b6e_Rx[1];
  Com_HandleRxPduDeferredType ET1_X_EMS_oBackbone1J1939_b4e1bda2_Rx[1];
  Com_HandleRxPduDeferredType FMS1_X_HMIIOM_oBackbone1J1939_69e6dd44_Rx[1];
  Com_HandleRxPduDeferredType FSP1_Frame_L1_oLIN00_7e067bd3_Rx[1];
  Com_HandleRxPduDeferredType FSP1_Frame_L2_oLIN01_878e4ca6_Rx[1];
  Com_HandleRxPduDeferredType FSP1_Frame_L3_oLIN02_d22d1d82_Rx[1];
  Com_HandleRxPduDeferredType FSP1_Frame_L4_oLIN03_afef240d_Rx[1];
  Com_HandleRxPduDeferredType FSP1_Frame_L5_oLIN04_fd21b130_Rx[1];
  Com_HandleRxPduDeferredType FSP1_SwitchDetResp_L1_oLIN00_db048333_Rx[1];
  Com_HandleRxPduDeferredType FSP1_SwitchDetResp_L2_oLIN01_228cb446_Rx[1];
  Com_HandleRxPduDeferredType FSP1_SwitchDetResp_L3_oLIN02_772fe562_Rx[1];
  Com_HandleRxPduDeferredType FSP1_SwitchDetResp_L4_oLIN03_0aeddced_Rx[1];
  Com_HandleRxPduDeferredType FSP1_SwitchDetResp_L5_oLIN04_582349d0_Rx[1];
  Com_HandleRxPduDeferredType FSP2_Frame_L1_oLIN00_2d9c2057_Rx[1];
  Com_HandleRxPduDeferredType FSP2_Frame_L2_oLIN01_d4141722_Rx[1];
  Com_HandleRxPduDeferredType FSP2_Frame_L3_oLIN02_81b74606_Rx[1];
  Com_HandleRxPduDeferredType FSP2_SwitchDetResp_L1_oLIN00_eee93560_Rx[1];
  Com_HandleRxPduDeferredType FSP2_SwitchDetResp_L2_oLIN01_17610215_Rx[1];
  Com_HandleRxPduDeferredType FSP2_SwitchDetResp_L3_oLIN02_42c25331_Rx[1];
  Com_HandleRxPduDeferredType FSP3_Frame_L2_oLIN01_53b2dc61_Rx[1];
  Com_HandleRxPduDeferredType FSP3_SwitchDetResp_L2_oLIN01_b2ea921b_Rx[1];
  Com_HandleRxPduDeferredType FSP4_Frame_L2_oLIN01_7320a02a_Rx[1];
  Com_HandleRxPduDeferredType FSP4_SwitchDetResp_L2_oLIN01_7cba6eb3_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_01P_oBackbone2_6b8c9af6_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_03P_oBackbone2_0bd02fbd_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_07P_oBackbone2_cb69452b_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_08P_oBackbone2_ec19901e_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_09P_oBackbone2_318f499b_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_19P_CIOM_oBackbone2_da8f8d8b_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_20S_oBackbone2_20ea552e_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_22P_oBackbone2_37283295_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_23P_oBackbone2_eabeeb10_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_24P_oBackbone2_97cded48_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_33P_oBackbone2_77b10a66_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_34S_oBackbone2_7d5cdece_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_35S_oBackbone2_a0ca074b_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_36S_oBackbone2_1d006b85_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_38P_oBackbone2_9078b5c5_Rx[1];
  Com_HandleRxPduDeferredType HMIIOM_BB2_39P_oBackbone2_4dee6c40_Rx[1];
  Com_HandleRxPduDeferredType HRLFC_X_EMS_oBackbone1J1939_e671f1b7_Rx[1];
  Com_HandleRxPduDeferredType IC3_BB2_01S_oBackbone2_b32667c6_Rx[1];
  Com_HandleRxPduDeferredType IC3_BB2_02P_oBackbone2_7972d9f8_Rx[1];
  Com_HandleRxPduDeferredType IC3_BB2_03S_oBackbone2_d37ad28d_Rx[1];
  Com_HandleRxPduDeferredType ILCP1toCIOM_L1_oLIN00_0eedb06b_Rx[1];
  Com_HandleRxPduDeferredType ILCP2toCIOM_L4_oLIN03_8c9eb431_Rx[1];
  Com_HandleRxPduDeferredType LECM1_Cab_02P_oCabSubnet_d045028e_Rx[1];
  Com_HandleRxPduDeferredType LECM1_Cab_03S_oCabSubnet_7a4d09fb_Rx[1];
  Com_HandleRxPduDeferredType LECM1_Cab_04P_oCabSubnet_70a0dd53_Rx[1];
  Com_HandleRxPduDeferredType LECM1_Cab_05S_oCabSubnet_daa8d626_Rx[1];
  Com_HandleRxPduDeferredType LECM2toCIOM_FR1_L1_oLIN00_3ccb97ef_Rx[1];
  Com_HandleRxPduDeferredType LECM2toCIOM_FR2_L1_oLIN00_a529f1ee_Rx[1];
  Com_HandleRxPduDeferredType LECM2toCIOM_FR3_L1_oLIN00_64a72e2e_Rx[1];
  Com_HandleRxPduDeferredType LECMBasic2CIOM_L1_oLIN00_da4f3dd9_Rx[1];
  Com_HandleRxPduDeferredType LFE_X_EMS_oBackbone1J1939_9d303f5e_Rx[1];
  Com_HandleRxPduDeferredType PDM_Sec_01P_oSecuritySubnet_7ffa8e54_Rx[1];
  Com_HandleRxPduDeferredType PDM_Sec_03S_oSecuritySubnet_29b4be53_Rx[1];
  Com_HandleRxPduDeferredType PDM_Sec_04S_oSecuritySubnet_c89ab437_Rx[1];
  Com_HandleRxPduDeferredType PropTCO2_X_TACHO_oBackbone1J1939_d2ebdcdb_Rx[1];
  Com_HandleRxPduDeferredType RCECStoCIOM_L5_oLIN04_1a7dde70_Rx[1];
  Com_HandleRxPduDeferredType SRS_Cab_01P_oCabSubnet_bd648bbe_Rx[1];
  Com_HandleRxPduDeferredType SRS_Cab_03P_oCabSubnet_dd383ef5_Rx[1];
  Com_HandleRxPduDeferredType SRS_Cab_04P_oCabSubnet_a04b38ad_Rx[1];
  Com_HandleRxPduDeferredType SRS_Cab_05P_oCabSubnet_7ddde128_Rx[1];
  Com_HandleRxPduDeferredType SRS_Cab_06P_oCabSubnet_c0178de6_Rx[1];
  Com_HandleRxPduDeferredType TCO1_X_TACHO_oBackbone1J1939_9ce49b57_Rx[1];
  Com_HandleRxPduDeferredType TCPtoMaster_oLIN02_0421b227_Rx[1];
  Com_HandleRxPduDeferredType TD_X_HMIIOM_oBackbone1J1939_221848c4_Rx[1];
  Com_HandleRxPduDeferredType TECU_BB2_01P_oBackbone2_de0b2e23_Rx[1];
  Com_HandleRxPduDeferredType TECU_BB2_05S_oBackbone2_692c9645_Rx[1];
  Com_HandleRxPduDeferredType TECU_BB2_06S_oBackbone2_d4e6fa8b_Rx[1];
  Com_HandleRxPduDeferredType VDC1_X_EBS_oBackbone1J1939_5b4fe419_Rx[1];
  Com_HandleRxPduDeferredType VDC2_X_EBS_oBackbone1J1939_2daadd24_Rx[1];
  Com_HandleRxPduDeferredType VDHR_X_VMCU_oBackbone1J1939_fc2f75ee_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB1_01P_oBackbone1J1939_f5234d42_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB1_03P_oBackbone1J1939_f0f726c1_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_01P_oBackbone2_8adedbca_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_02P_oBackbone2_3714b704_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_03P_oBackbone2_ea826e81_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_04P_oBackbone2_97f168d9_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_05P_oBackbone2_4a67b15c_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_07P_oBackbone2_2a3b0417_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_08P_oBackbone2_0d4bd122_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_20P_oBackbone2_b626c6e2_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_29P_oBackbone2_31b3cc0a_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_31S_oBackbone2_81212ce1_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_32S_oBackbone2_3ceb402f_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_34S_oBackbone2_9c0e9ff2_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_51P_oBackbone2_0e7db5a7_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_52P_oBackbone2_b3b7d969_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_53P_oBackbone2_6e2100ec_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_54P_oBackbone2_135206b4_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_55P_oBackbone2_cec4df31_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_57P_oBackbone2_ae986a7a_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_58P_oBackbone2_89e8bf4f_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_73P_oBackbone2_8f4fc441_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_74P_oBackbone2_f23cc219_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_80P_oBackbone2_64111c79_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_86P_oBackbone2_c4f4c3a4_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_87P_oBackbone2_19621a21_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_88P_oBackbone2_3e12cf14_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_89P_oBackbone2_e3841691_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_90P_oBackbone2_f91efd0f_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_91P_oBackbone2_2488248a_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_92P_oBackbone2_99424844_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_93P_oBackbone2_44d491c1_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_95P_oBackbone2_e4314e1c_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_96P_oBackbone2_59fb22d2_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_98P_oBackbone2_a31d2e62_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_99P_oBackbone2_7e8bf7e7_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_100P_oBackbone2_ff8ed6a7_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_101P_oBackbone2_22180f22_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_102P_oBackbone2_9fd263ec_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_103P_oBackbone2_4244ba69_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_105P_oBackbone2_e2a165b4_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_106P_oBackbone2_5f6b097a_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_107P_oBackbone2_82fdd0ff_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_109P_oBackbone2_781bdc4f_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_110P_oBackbone2_628137d1_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_111P_oBackbone2_bf17ee54_Rx[1];
  Com_HandleRxPduDeferredType VMCU_BB2_119P_oBackbone2_e5143d39_Rx[1];
  Com_HandleRxPduDeferredType VP232_X_ERAU_oFMSNet_34122677_Rx[1];
  Com_HandleRxPduDeferredType WRCS_Cab_01P_oCabSubnet_5ce104ec_Rx[1];
  Com_HandleRxPduDeferredType WRCS_Cab_02P_oCabSubnet_e12b6822_Rx[1];
  Com_HandleRxPduDeferredType WRCS_Cab_03P_oCabSubnet_3cbdb1a7_Rx[1];
} Com_HandleRxPduDeferredStructSType;  /* PRQA S 0639 */  /* MD_MSR_1.1_639 */

/**   \brief  type to be used as symbolic data element access to Com_RxDefPduBuffer */
typedef struct Com_RxDefPduBufferStructSTag
{
  Com_RxDefPduBufferType ACM_BB1_01P_oBackbone1J1939_57f87ee7_Rx[8];
  Com_RxDefPduBufferType AIR1_X_VMCU_oBackbone1J1939_8c40baab_Rx[8];
  Com_RxDefPduBufferType AMB_X_VMCU_oBackbone1J1939_7e62cfad_Rx[8];
  Com_RxDefPduBufferType Alarm_Sec_02P_oSecuritySubnet_c389f589_Rx[8];
  Com_RxDefPduBufferType Alarm_Sec_03S_oSecuritySubnet_7f4118ec_Rx[16];
  Com_RxDefPduBufferType Alarm_Sec_06S_oSecuritySubnet_9bbb790b_Rx[16];
  Com_RxDefPduBufferType Alarm_Sec_07S_oSecuritySubnet_74e9cfea_Rx[16];
  Com_RxDefPduBufferType AnmMsg_Alarm_SecuritySubnet_oSecuritySubnet_142a14f5_Rx[4];
  Com_RxDefPduBufferType AnmMsg_BBM_Backbone2_oBackbone2_bca080bd_Rx[4];
  Com_RxDefPduBufferType AnmMsg_CCM_CabSubnet_oCabSubnet_2d9f2dda_Rx[4];
  Com_RxDefPduBufferType AnmMsg_DACU_Backbone2_oBackbone2_49517b4d_Rx[4];
  Com_RxDefPduBufferType AnmMsg_DDM_SecuritySubnet_oSecuritySubnet_c5aaf372_Rx[4];
  Com_RxDefPduBufferType AnmMsg_ECUspare1_Backbone2_oBackbone2_90f829ea_Rx[4];
  Com_RxDefPduBufferType AnmMsg_ECUspare2_Backbone2_oBackbone2_a98084aa_Rx[4];
  Com_RxDefPduBufferType AnmMsg_ECUspare5_SecuritySubnet_oSecuritySubnet_44137fdb_Rx[4];
  Com_RxDefPduBufferType AnmMsg_ECUspare6_CabSubnet_oCabSubnet_7e48353e_Rx[4];
  Com_RxDefPduBufferType AnmMsg_EMS_Backbone2_oBackbone2_99fd5a83_Rx[4];
  Com_RxDefPduBufferType AnmMsg_IC3_Backbone2_oBackbone2_8d54783a_Rx[4];
  Com_RxDefPduBufferType AnmMsg_LECM1_CabSubnet_oCabSubnet_10e92ec5_Rx[4];
  Com_RxDefPduBufferType AnmMsg_PDM_SecuritySubnet_oSecuritySubnet_7215ae09_Rx[4];
  Com_RxDefPduBufferType AnmMsg_SRS_CabSubnet_oCabSubnet_aab008be_Rx[4];
  Com_RxDefPduBufferType AnmMsg_TECU_Backbone2_oBackbone2_7840c27c_Rx[4];
  Com_RxDefPduBufferType AnmMsg_VMCU_Backbone2_oBackbone2_3a2bd89f_Rx[4];
  Com_RxDefPduBufferType AnmMsg_WRCS_CabSubnet_oCabSubnet_fa464471_Rx[4];
  Com_RxDefPduBufferType BBM_BB2_01P_oBackbone2_0d63adb7_Rx[8];
  Com_RxDefPduBufferType BBM_BB2_02P_oBackbone2_b0a9c179_Rx[8];
  Com_RxDefPduBufferType BBM_BB2_03S_CIOM_oBackbone2_d5047985_Rx[128];
  Com_RxDefPduBufferType BBM_BB2_06P_oBackbone2_7010abef_Rx[8];
  Com_RxDefPduBufferType CCFWtoCIOM_L4_oLIN03_c78ba01d_Rx[3];
  Com_RxDefPduBufferType CCM_Cab_01P_oCabSubnet_3993b0cf_Rx[8];
  Com_RxDefPduBufferType CCM_Cab_03P_oCabSubnet_59cf0584_Rx[10];
  Com_RxDefPduBufferType CCM_Cab_04P_oCabSubnet_24bc03dc_Rx[8];
  Com_RxDefPduBufferType CCM_Cab_06P_oCabSubnet_44e0b697_Rx[8];
  Com_RxDefPduBufferType CCM_Cab_07P_oCabSubnet_99766f12_Rx[8];
  Com_RxDefPduBufferType CCM_Cab_08P_oCabSubnet_be06ba27_Rx[8];
  Com_RxDefPduBufferType CCVS_X_VMCU_oBackbone1J1939_ebb768c1_Rx[8];
  Com_RxDefPduBufferType CVW_X_EBS_oBackbone1J1939_1a9bdeb1_Rx[8];
  Com_RxDefPduBufferType DACU_BB2_02P_oBackbone2_3e1257a1_Rx[8];
  Com_RxDefPduBufferType DDM_Sec_01P_oSecuritySubnet_40cf4e44_Rx[8];
  Com_RxDefPduBufferType DDM_Sec_03S_oSecuritySubnet_16817e43_Rx[16];
  Com_RxDefPduBufferType DDM_Sec_04S_oSecuritySubnet_f7af7427_Rx[16];
  Com_RxDefPduBufferType DDM_Sec_05S_oSecuritySubnet_18fdc2c6_Rx[16];
  Com_RxDefPduBufferType DI_X_TACHO_oBackbone1J1939_0dca0ef5_Rx[40];
  Com_RxDefPduBufferType DLFWtoCIOM_L4_oLIN03_65509040_Rx[3];
  Com_RxDefPduBufferType DebugCtrl1_SCIM_BB2_oBackbone2_4d739d72_Rx[8];
  Com_RxDefPduBufferType DebugCtrl2_SCIM_BB2_oBackbone2_366d1f91_Rx[8];
  Com_RxDefPduBufferType DebugCtrl3_SCIM_BB2_oBackbone2_a9b79c0f_Rx[8];
  Com_RxDefPduBufferType DebugCtrl4_SCIM_BB2_oBackbone2_c0501a57_Rx[8];
  Com_RxDefPduBufferType DebugCtrl5_SCIM_BB2_oBackbone2_5f8a99c9_Rx[8];
  Com_RxDefPduBufferType DebugCtrl6_SCIM_BB2_oBackbone2_24941b2a_Rx[8];
  Com_RxDefPduBufferType DebugCtrl7_SCIM_BB2_oBackbone2_bb4e98b4_Rx[8];
  Com_RxDefPduBufferType DebugCtrl8_SCIM_BB2_oBackbone2_f75b179a_Rx[8];
  Com_RxDefPduBufferType DebugCtrl9_SCIM_BB2_oBackbone2_68819404_Rx[8];
  Com_RxDefPduBufferType DiagFaultStat_Alarm_Sec_oSecuritySubnet_347db5f6_Rx[8];
  Com_RxDefPduBufferType DiagFaultStat_CCM_Cab_oCabSubnet_d4c98b2c_Rx[8];
  Com_RxDefPduBufferType DiagFaultStat_DDM_Sec_oSecuritySubnet_c65980ff_Rx[8];
  Com_RxDefPduBufferType DiagFaultStat_LECM_Cab_oCabSubnet_870f9288_Rx[8];
  Com_RxDefPduBufferType DiagFaultStat_PDM_Sec_oSecuritySubnet_c777a720_Rx[8];
  Com_RxDefPduBufferType DiagFaultStat_SRS_Cab_oCabSubnet_ac384d3f_Rx[8];
  Com_RxDefPduBufferType DiagFaultStat_WRCS_Cab_oCabSubnet_3792ace7_Rx[8];
  Com_RxDefPduBufferType EBC1_X_EBS_oBackbone1J1939_68913e3f_Rx[8];
  Com_RxDefPduBufferType EBC2_X_EBS_oBackbone1J1939_1e740702_Rx[8];
  Com_RxDefPduBufferType EBC5_X_EBS_oBackbone1J1939_68cd9fac_Rx[8];
  Com_RxDefPduBufferType EBS_BB1_01P_oBackbone1J1939_ce636b4a_Rx[8];
  Com_RxDefPduBufferType EBS_BB1_02P_oBackbone1J1939_24e5b628_Rx[8];
  Com_RxDefPduBufferType EBS_BB1_05P_oBackbone1J1939_c5cbbc4c_Rx[8];
  Com_RxDefPduBufferType EEC1_X_EMS_oBackbone1J1939_50be66ff_Rx[8];
  Com_RxDefPduBufferType EEC2_X_EMS_oBackbone1J1939_265b5fc2_Rx[8];
  Com_RxDefPduBufferType ELCP1toCIOM_L4_oLIN03_e80fe278_Rx[4];
  Com_RxDefPduBufferType ELCP2toCIOM_L4_oLIN03_bb95b9fc_Rx[3];
  Com_RxDefPduBufferType EMS_BB2_01P_oBackbone2_dd91fc9b_Rx[8];
  Com_RxDefPduBufferType EMS_BB2_04P_oBackbone2_c0be4f88_Rx[8];
  Com_RxDefPduBufferType EMS_BB2_05P_oBackbone2_1d28960d_Rx[8];
  Com_RxDefPduBufferType EMS_BB2_06P_oBackbone2_a0e2fac3_Rx[8];
  Com_RxDefPduBufferType EMS_BB2_08P_oBackbone2_5a04f673_Rx[8];
  Com_RxDefPduBufferType EMS_BB2_09S_oBackbone2_f00cfd06_Rx[11];
  Com_RxDefPduBufferType EMS_BB2_11S_oBackbone2_3700cf1d_Rx[16];
  Com_RxDefPduBufferType EMS_BB2_13P_oBackbone2_20c2a8a6_Rx[8];
  Com_RxDefPduBufferType ERC1_X_EMSRet_oBackbone1J1939_6b48ff0e_Rx[8];
  Com_RxDefPduBufferType ERC1_X_RECU_oBackbone1J1939_5afd0b6e_Rx[8];
  Com_RxDefPduBufferType ET1_X_EMS_oBackbone1J1939_b4e1bda2_Rx[8];
  Com_RxDefPduBufferType FMS1_X_HMIIOM_oBackbone1J1939_69e6dd44_Rx[8];
  Com_RxDefPduBufferType FSP1_Frame_L1_oLIN00_7e067bd3_Rx[2];
  Com_RxDefPduBufferType FSP1_Frame_L2_oLIN01_878e4ca6_Rx[2];
  Com_RxDefPduBufferType FSP1_Frame_L3_oLIN02_d22d1d82_Rx[2];
  Com_RxDefPduBufferType FSP1_Frame_L4_oLIN03_afef240d_Rx[2];
  Com_RxDefPduBufferType FSP1_Frame_L5_oLIN04_fd21b130_Rx[2];
  Com_RxDefPduBufferType FSP1_SwitchDetResp_L1_oLIN00_db048333_Rx[8];
  Com_RxDefPduBufferType FSP1_SwitchDetResp_L2_oLIN01_228cb446_Rx[8];
  Com_RxDefPduBufferType FSP1_SwitchDetResp_L3_oLIN02_772fe562_Rx[8];
  Com_RxDefPduBufferType FSP1_SwitchDetResp_L4_oLIN03_0aeddced_Rx[8];
  Com_RxDefPduBufferType FSP1_SwitchDetResp_L5_oLIN04_582349d0_Rx[8];
  Com_RxDefPduBufferType FSP2_Frame_L1_oLIN00_2d9c2057_Rx[2];
  Com_RxDefPduBufferType FSP2_Frame_L2_oLIN01_d4141722_Rx[2];
  Com_RxDefPduBufferType FSP2_Frame_L3_oLIN02_81b74606_Rx[2];
  Com_RxDefPduBufferType FSP2_SwitchDetResp_L1_oLIN00_eee93560_Rx[8];
  Com_RxDefPduBufferType FSP2_SwitchDetResp_L2_oLIN01_17610215_Rx[8];
  Com_RxDefPduBufferType FSP2_SwitchDetResp_L3_oLIN02_42c25331_Rx[8];
  Com_RxDefPduBufferType FSP3_Frame_L2_oLIN01_53b2dc61_Rx[2];
  Com_RxDefPduBufferType FSP3_SwitchDetResp_L2_oLIN01_b2ea921b_Rx[8];
  Com_RxDefPduBufferType FSP4_Frame_L2_oLIN01_7320a02a_Rx[2];
  Com_RxDefPduBufferType FSP4_SwitchDetResp_L2_oLIN01_7cba6eb3_Rx[8];
  Com_RxDefPduBufferType HMIIOM_BB2_01P_oBackbone2_6b8c9af6_Rx[8];
  Com_RxDefPduBufferType HMIIOM_BB2_03P_oBackbone2_0bd02fbd_Rx[8];
  Com_RxDefPduBufferType HMIIOM_BB2_07P_oBackbone2_cb69452b_Rx[8];
  Com_RxDefPduBufferType HMIIOM_BB2_08P_oBackbone2_ec19901e_Rx[8];
  Com_RxDefPduBufferType HMIIOM_BB2_09P_oBackbone2_318f499b_Rx[8];
  Com_RxDefPduBufferType HMIIOM_BB2_19P_CIOM_oBackbone2_da8f8d8b_Rx[21];
  Com_RxDefPduBufferType HMIIOM_BB2_20S_oBackbone2_20ea552e_Rx[11];
  Com_RxDefPduBufferType HMIIOM_BB2_22P_oBackbone2_37283295_Rx[8];
  Com_RxDefPduBufferType HMIIOM_BB2_23P_oBackbone2_eabeeb10_Rx[8];
  Com_RxDefPduBufferType HMIIOM_BB2_24P_oBackbone2_97cded48_Rx[8];
  Com_RxDefPduBufferType HMIIOM_BB2_33P_oBackbone2_77b10a66_Rx[8];
  Com_RxDefPduBufferType HMIIOM_BB2_34S_oBackbone2_7d5cdece_Rx[8];
  Com_RxDefPduBufferType HMIIOM_BB2_35S_oBackbone2_a0ca074b_Rx[98];
  Com_RxDefPduBufferType HMIIOM_BB2_36S_oBackbone2_1d006b85_Rx[36];
  Com_RxDefPduBufferType HMIIOM_BB2_38P_oBackbone2_9078b5c5_Rx[8];
  Com_RxDefPduBufferType HMIIOM_BB2_39P_oBackbone2_4dee6c40_Rx[8];
  Com_RxDefPduBufferType HRLFC_X_EMS_oBackbone1J1939_e671f1b7_Rx[8];
  Com_RxDefPduBufferType IC3_BB2_01S_oBackbone2_b32667c6_Rx[8];
  Com_RxDefPduBufferType IC3_BB2_02P_oBackbone2_7972d9f8_Rx[8];
  Com_RxDefPduBufferType IC3_BB2_03S_oBackbone2_d37ad28d_Rx[8];
  Com_RxDefPduBufferType ILCP1toCIOM_L1_oLIN00_0eedb06b_Rx[3];
  Com_RxDefPduBufferType ILCP2toCIOM_L4_oLIN03_8c9eb431_Rx[3];
  Com_RxDefPduBufferType LECM1_Cab_02P_oCabSubnet_d045028e_Rx[8];
  Com_RxDefPduBufferType LECM1_Cab_03S_oCabSubnet_7a4d09fb_Rx[8];
  Com_RxDefPduBufferType LECM1_Cab_04P_oCabSubnet_70a0dd53_Rx[8];
  Com_RxDefPduBufferType LECM1_Cab_05S_oCabSubnet_daa8d626_Rx[8];
  Com_RxDefPduBufferType LECM2toCIOM_FR1_L1_oLIN00_3ccb97ef_Rx[8];
  Com_RxDefPduBufferType LECM2toCIOM_FR2_L1_oLIN00_a529f1ee_Rx[1];
  Com_RxDefPduBufferType LECM2toCIOM_FR3_L1_oLIN00_64a72e2e_Rx[5];
  Com_RxDefPduBufferType LECMBasic2CIOM_L1_oLIN00_da4f3dd9_Rx[3];
  Com_RxDefPduBufferType LFE_X_EMS_oBackbone1J1939_9d303f5e_Rx[8];
  Com_RxDefPduBufferType PDM_Sec_01P_oSecuritySubnet_7ffa8e54_Rx[8];
  Com_RxDefPduBufferType PDM_Sec_03S_oSecuritySubnet_29b4be53_Rx[16];
  Com_RxDefPduBufferType PDM_Sec_04S_oSecuritySubnet_c89ab437_Rx[16];
  Com_RxDefPduBufferType PropTCO2_X_TACHO_oBackbone1J1939_d2ebdcdb_Rx[21];
  Com_RxDefPduBufferType RCECStoCIOM_L5_oLIN04_1a7dde70_Rx[3];
  Com_RxDefPduBufferType SRS_Cab_01P_oCabSubnet_bd648bbe_Rx[8];
  Com_RxDefPduBufferType SRS_Cab_03P_oCabSubnet_dd383ef5_Rx[8];
  Com_RxDefPduBufferType SRS_Cab_04P_oCabSubnet_a04b38ad_Rx[8];
  Com_RxDefPduBufferType SRS_Cab_05P_oCabSubnet_7ddde128_Rx[8];
  Com_RxDefPduBufferType SRS_Cab_06P_oCabSubnet_c0178de6_Rx[8];
  Com_RxDefPduBufferType TCO1_X_TACHO_oBackbone1J1939_9ce49b57_Rx[8];
  Com_RxDefPduBufferType TCPtoMaster_oLIN02_0421b227_Rx[5];
  Com_RxDefPduBufferType TD_X_HMIIOM_oBackbone1J1939_221848c4_Rx[8];
  Com_RxDefPduBufferType TECU_BB2_01P_oBackbone2_de0b2e23_Rx[8];
  Com_RxDefPduBufferType TECU_BB2_05S_oBackbone2_692c9645_Rx[16];
  Com_RxDefPduBufferType TECU_BB2_06S_oBackbone2_d4e6fa8b_Rx[11];
  Com_RxDefPduBufferType VDC1_X_EBS_oBackbone1J1939_5b4fe419_Rx[8];
  Com_RxDefPduBufferType VDC2_X_EBS_oBackbone1J1939_2daadd24_Rx[8];
  Com_RxDefPduBufferType VDHR_X_VMCU_oBackbone1J1939_fc2f75ee_Rx[8];
  Com_RxDefPduBufferType VMCU_BB1_01P_oBackbone1J1939_f5234d42_Rx[8];
  Com_RxDefPduBufferType VMCU_BB1_03P_oBackbone1J1939_f0f726c1_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_01P_oBackbone2_8adedbca_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_02P_oBackbone2_3714b704_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_03P_oBackbone2_ea826e81_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_04P_oBackbone2_97f168d9_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_05P_oBackbone2_4a67b15c_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_07P_oBackbone2_2a3b0417_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_08P_oBackbone2_0d4bd122_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_20P_oBackbone2_b626c6e2_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_29P_oBackbone2_31b3cc0a_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_31S_oBackbone2_81212ce1_Rx[11];
  Com_RxDefPduBufferType VMCU_BB2_32S_oBackbone2_3ceb402f_Rx[11];
  Com_RxDefPduBufferType VMCU_BB2_34S_oBackbone2_9c0e9ff2_Rx[16];
  Com_RxDefPduBufferType VMCU_BB2_51P_oBackbone2_0e7db5a7_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_52P_oBackbone2_b3b7d969_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_53P_oBackbone2_6e2100ec_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_54P_oBackbone2_135206b4_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_55P_oBackbone2_cec4df31_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_57P_oBackbone2_ae986a7a_Rx[15];
  Com_RxDefPduBufferType VMCU_BB2_58P_oBackbone2_89e8bf4f_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_73P_oBackbone2_8f4fc441_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_74P_oBackbone2_f23cc219_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_80P_oBackbone2_64111c79_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_86P_oBackbone2_c4f4c3a4_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_87P_oBackbone2_19621a21_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_88P_oBackbone2_3e12cf14_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_89P_oBackbone2_e3841691_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_90P_oBackbone2_f91efd0f_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_91P_oBackbone2_2488248a_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_92P_oBackbone2_99424844_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_93P_oBackbone2_44d491c1_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_95P_oBackbone2_e4314e1c_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_96P_oBackbone2_59fb22d2_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_98P_oBackbone2_a31d2e62_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_99P_oBackbone2_7e8bf7e7_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_100P_oBackbone2_ff8ed6a7_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_101P_oBackbone2_22180f22_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_102P_oBackbone2_9fd263ec_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_103P_oBackbone2_4244ba69_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_105P_oBackbone2_e2a165b4_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_106P_oBackbone2_5f6b097a_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_107P_oBackbone2_82fdd0ff_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_109P_oBackbone2_781bdc4f_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_110P_oBackbone2_628137d1_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_111P_oBackbone2_bf17ee54_Rx[8];
  Com_RxDefPduBufferType VMCU_BB2_119P_oBackbone2_e5143d39_Rx[8];
  Com_RxDefPduBufferType VP232_X_ERAU_oFMSNet_34122677_Rx[8];
  Com_RxDefPduBufferType WRCS_Cab_01P_oCabSubnet_5ce104ec_Rx[8];
  Com_RxDefPduBufferType WRCS_Cab_02P_oCabSubnet_e12b6822_Rx[8];
  Com_RxDefPduBufferType WRCS_Cab_03P_oCabSubnet_3cbdb1a7_Rx[8];
} Com_RxDefPduBufferStructSType;  /* PRQA S 0639 */  /* MD_MSR_1.1_639 */

/**   \brief  type to be used as symbolic data element access to Com_RxDynSignalLength */
typedef struct Com_RxDynSignalLengthStructSTag
{
  Com_RxDynSignalLengthType Alarm_Sec_03S_oSecuritySubnet_7f4118ec_Rx[1];
  Com_RxDynSignalLengthType Alarm_Sec_06S_oSecuritySubnet_9bbb790b_Rx[1];
  Com_RxDynSignalLengthType Alarm_Sec_07S_oSecuritySubnet_74e9cfea_Rx[1];
  Com_RxDynSignalLengthType CCM_Cab_03P_oCabSubnet_59cf0584_Rx[1];
  Com_RxDynSignalLengthType DDM_Sec_03S_oSecuritySubnet_16817e43_Rx[1];
  Com_RxDynSignalLengthType DDM_Sec_04S_oSecuritySubnet_f7af7427_Rx[1];
  Com_RxDynSignalLengthType DDM_Sec_05S_oSecuritySubnet_18fdc2c6_Rx[1];
  Com_RxDynSignalLengthType DI_X_TACHO_oBackbone1J1939_0dca0ef5_Rx[1];
  Com_RxDynSignalLengthType EMS_BB2_09S_oBackbone2_f00cfd06_Rx[1];
  Com_RxDynSignalLengthType EMS_BB2_11S_oBackbone2_3700cf1d_Rx[1];
  Com_RxDynSignalLengthType HMIIOM_BB2_19P_CIOM_oBackbone2_da8f8d8b_Rx[1];
  Com_RxDynSignalLengthType HMIIOM_BB2_20S_oBackbone2_20ea552e_Rx[1];
  Com_RxDynSignalLengthType HMIIOM_BB2_35S_oBackbone2_a0ca074b_Rx[1];
  Com_RxDynSignalLengthType HMIIOM_BB2_36S_oBackbone2_1d006b85_Rx[1];
  Com_RxDynSignalLengthType PDM_Sec_03S_oSecuritySubnet_29b4be53_Rx[1];
  Com_RxDynSignalLengthType PDM_Sec_04S_oSecuritySubnet_c89ab437_Rx[1];
  Com_RxDynSignalLengthType PropTCO2_X_TACHO_oBackbone1J1939_d2ebdcdb_Rx[1];
  Com_RxDynSignalLengthType TECU_BB2_05S_oBackbone2_692c9645_Rx[1];
  Com_RxDynSignalLengthType TECU_BB2_06S_oBackbone2_d4e6fa8b_Rx[1];
  Com_RxDynSignalLengthType VMCU_BB2_31S_oBackbone2_81212ce1_Rx[1];
  Com_RxDynSignalLengthType VMCU_BB2_32S_oBackbone2_3ceb402f_Rx[1];
  Com_RxDynSignalLengthType VMCU_BB2_34S_oBackbone2_9c0e9ff2_Rx[1];
  Com_RxDynSignalLengthType VMCU_BB2_57P_oBackbone2_ae986a7a_Rx[1];
} Com_RxDynSignalLengthStructSType;

/**   \brief  type to be used as symbolic data element access to Com_RxDynSignalTmpLengthForSignalGroups */
typedef struct Com_RxDynSignalTmpLengthForSignalGroupsStructSTag
{
  Com_RxDynSignalTmpLengthForSignalGroupsType Alarm_Sec_03S_oSecuritySubnet_7f4118ec_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType Alarm_Sec_06S_oSecuritySubnet_9bbb790b_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType Alarm_Sec_07S_oSecuritySubnet_74e9cfea_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType CCM_Cab_03P_oCabSubnet_59cf0584_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType DDM_Sec_03S_oSecuritySubnet_16817e43_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType DDM_Sec_04S_oSecuritySubnet_f7af7427_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType DDM_Sec_05S_oSecuritySubnet_18fdc2c6_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType DI_X_TACHO_oBackbone1J1939_0dca0ef5_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType EMS_BB2_09S_oBackbone2_f00cfd06_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType EMS_BB2_11S_oBackbone2_3700cf1d_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType HMIIOM_BB2_19P_CIOM_oBackbone2_da8f8d8b_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType HMIIOM_BB2_20S_oBackbone2_20ea552e_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType HMIIOM_BB2_35S_oBackbone2_a0ca074b_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType HMIIOM_BB2_36S_oBackbone2_1d006b85_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType PDM_Sec_03S_oSecuritySubnet_29b4be53_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType PDM_Sec_04S_oSecuritySubnet_c89ab437_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType PropTCO2_X_TACHO_oBackbone1J1939_d2ebdcdb_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType TECU_BB2_05S_oBackbone2_692c9645_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType TECU_BB2_06S_oBackbone2_d4e6fa8b_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType VMCU_BB2_31S_oBackbone2_81212ce1_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType VMCU_BB2_32S_oBackbone2_3ceb402f_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType VMCU_BB2_34S_oBackbone2_9c0e9ff2_Rx[1];
  Com_RxDynSignalTmpLengthForSignalGroupsType VMCU_BB2_57P_oBackbone2_ae986a7a_Rx[1];
} Com_RxDynSignalTmpLengthForSignalGroupsStructSType;

/**   \brief  type to be used as symbolic data element access to Com_RxTpBuffer */
typedef struct Com_RxTpBufferStructSTag
{
  Com_RxTpBufferType Alarm_Sec_03S_oSecuritySubnet_7f4118ec_Rx[16];
  Com_RxTpBufferType Alarm_Sec_06S_oSecuritySubnet_9bbb790b_Rx[16];
  Com_RxTpBufferType Alarm_Sec_07S_oSecuritySubnet_74e9cfea_Rx[16];
  Com_RxTpBufferType CCM_Cab_03P_oCabSubnet_59cf0584_Rx[10];
  Com_RxTpBufferType DDM_Sec_03S_oSecuritySubnet_16817e43_Rx[16];
  Com_RxTpBufferType DDM_Sec_04S_oSecuritySubnet_f7af7427_Rx[16];
  Com_RxTpBufferType DDM_Sec_05S_oSecuritySubnet_18fdc2c6_Rx[16];
  Com_RxTpBufferType DI_X_TACHO_oBackbone1J1939_0dca0ef5_Rx[40];
  Com_RxTpBufferType EMS_BB2_09S_oBackbone2_f00cfd06_Rx[11];
  Com_RxTpBufferType EMS_BB2_11S_oBackbone2_3700cf1d_Rx[16];
  Com_RxTpBufferType HMIIOM_BB2_19P_CIOM_oBackbone2_da8f8d8b_Rx[21];
  Com_RxTpBufferType HMIIOM_BB2_20S_oBackbone2_20ea552e_Rx[11];
  Com_RxTpBufferType HMIIOM_BB2_35S_oBackbone2_a0ca074b_Rx[98];
  Com_RxTpBufferType HMIIOM_BB2_36S_oBackbone2_1d006b85_Rx[36];
  Com_RxTpBufferType PDM_Sec_03S_oSecuritySubnet_29b4be53_Rx[16];
  Com_RxTpBufferType PDM_Sec_04S_oSecuritySubnet_c89ab437_Rx[16];
  Com_RxTpBufferType PropTCO2_X_TACHO_oBackbone1J1939_d2ebdcdb_Rx[21];
  Com_RxTpBufferType TECU_BB2_05S_oBackbone2_692c9645_Rx[16];
  Com_RxTpBufferType TECU_BB2_06S_oBackbone2_d4e6fa8b_Rx[11];
  Com_RxTpBufferType VMCU_BB2_31S_oBackbone2_81212ce1_Rx[11];
  Com_RxTpBufferType VMCU_BB2_32S_oBackbone2_3ceb402f_Rx[11];
  Com_RxTpBufferType VMCU_BB2_34S_oBackbone2_9c0e9ff2_Rx[16];
  Com_RxTpBufferType VMCU_BB2_57P_oBackbone2_ae986a7a_Rx[15];
} Com_RxTpBufferStructSType;

/**   \brief  type to be used as symbolic data element access to Com_RxTpConnectionState */
typedef struct Com_RxTpConnectionStateStructSTag
{
  Com_RxTpConnectionStateType Alarm_Sec_03S_oSecuritySubnet_7f4118ec_Rx[1];
  Com_RxTpConnectionStateType Alarm_Sec_06S_oSecuritySubnet_9bbb790b_Rx[1];
  Com_RxTpConnectionStateType Alarm_Sec_07S_oSecuritySubnet_74e9cfea_Rx[1];
  Com_RxTpConnectionStateType CCM_Cab_03P_oCabSubnet_59cf0584_Rx[1];
  Com_RxTpConnectionStateType DDM_Sec_03S_oSecuritySubnet_16817e43_Rx[1];
  Com_RxTpConnectionStateType DDM_Sec_04S_oSecuritySubnet_f7af7427_Rx[1];
  Com_RxTpConnectionStateType DDM_Sec_05S_oSecuritySubnet_18fdc2c6_Rx[1];
  Com_RxTpConnectionStateType DI_X_TACHO_oBackbone1J1939_0dca0ef5_Rx[1];
  Com_RxTpConnectionStateType EMS_BB2_09S_oBackbone2_f00cfd06_Rx[1];
  Com_RxTpConnectionStateType EMS_BB2_11S_oBackbone2_3700cf1d_Rx[1];
  Com_RxTpConnectionStateType HMIIOM_BB2_19P_CIOM_oBackbone2_da8f8d8b_Rx[1];
  Com_RxTpConnectionStateType HMIIOM_BB2_20S_oBackbone2_20ea552e_Rx[1];
  Com_RxTpConnectionStateType HMIIOM_BB2_35S_oBackbone2_a0ca074b_Rx[1];
  Com_RxTpConnectionStateType HMIIOM_BB2_36S_oBackbone2_1d006b85_Rx[1];
  Com_RxTpConnectionStateType PDM_Sec_03S_oSecuritySubnet_29b4be53_Rx[1];
  Com_RxTpConnectionStateType PDM_Sec_04S_oSecuritySubnet_c89ab437_Rx[1];
  Com_RxTpConnectionStateType PropTCO2_X_TACHO_oBackbone1J1939_d2ebdcdb_Rx[1];
  Com_RxTpConnectionStateType TECU_BB2_05S_oBackbone2_692c9645_Rx[1];
  Com_RxTpConnectionStateType TECU_BB2_06S_oBackbone2_d4e6fa8b_Rx[1];
  Com_RxTpConnectionStateType VMCU_BB2_31S_oBackbone2_81212ce1_Rx[1];
  Com_RxTpConnectionStateType VMCU_BB2_32S_oBackbone2_3ceb402f_Rx[1];
  Com_RxTpConnectionStateType VMCU_BB2_34S_oBackbone2_9c0e9ff2_Rx[1];
  Com_RxTpConnectionStateType VMCU_BB2_57P_oBackbone2_ae986a7a_Rx[1];
} Com_RxTpConnectionStateStructSType;

/**   \brief  type to be used as symbolic data element access to Com_RxTpSduLength */
typedef struct Com_RxTpSduLengthStructSTag
{
  Com_RxTpSduLengthType Alarm_Sec_03S_oSecuritySubnet_7f4118ec_Rx[1];
  Com_RxTpSduLengthType Alarm_Sec_06S_oSecuritySubnet_9bbb790b_Rx[1];
  Com_RxTpSduLengthType Alarm_Sec_07S_oSecuritySubnet_74e9cfea_Rx[1];
  Com_RxTpSduLengthType CCM_Cab_03P_oCabSubnet_59cf0584_Rx[1];
  Com_RxTpSduLengthType DDM_Sec_03S_oSecuritySubnet_16817e43_Rx[1];
  Com_RxTpSduLengthType DDM_Sec_04S_oSecuritySubnet_f7af7427_Rx[1];
  Com_RxTpSduLengthType DDM_Sec_05S_oSecuritySubnet_18fdc2c6_Rx[1];
  Com_RxTpSduLengthType DI_X_TACHO_oBackbone1J1939_0dca0ef5_Rx[1];
  Com_RxTpSduLengthType EMS_BB2_09S_oBackbone2_f00cfd06_Rx[1];
  Com_RxTpSduLengthType EMS_BB2_11S_oBackbone2_3700cf1d_Rx[1];
  Com_RxTpSduLengthType HMIIOM_BB2_19P_CIOM_oBackbone2_da8f8d8b_Rx[1];
  Com_RxTpSduLengthType HMIIOM_BB2_20S_oBackbone2_20ea552e_Rx[1];
  Com_RxTpSduLengthType HMIIOM_BB2_35S_oBackbone2_a0ca074b_Rx[1];
  Com_RxTpSduLengthType HMIIOM_BB2_36S_oBackbone2_1d006b85_Rx[1];
  Com_RxTpSduLengthType PDM_Sec_03S_oSecuritySubnet_29b4be53_Rx[1];
  Com_RxTpSduLengthType PDM_Sec_04S_oSecuritySubnet_c89ab437_Rx[1];
  Com_RxTpSduLengthType PropTCO2_X_TACHO_oBackbone1J1939_d2ebdcdb_Rx[1];
  Com_RxTpSduLengthType TECU_BB2_05S_oBackbone2_692c9645_Rx[1];
  Com_RxTpSduLengthType TECU_BB2_06S_oBackbone2_d4e6fa8b_Rx[1];
  Com_RxTpSduLengthType VMCU_BB2_31S_oBackbone2_81212ce1_Rx[1];
  Com_RxTpSduLengthType VMCU_BB2_32S_oBackbone2_3ceb402f_Rx[1];
  Com_RxTpSduLengthType VMCU_BB2_34S_oBackbone2_9c0e9ff2_Rx[1];
  Com_RxTpSduLengthType VMCU_BB2_57P_oBackbone2_ae986a7a_Rx[1];
} Com_RxTpSduLengthStructSType;

/**   \brief  type to be used as symbolic data element access to Com_RxTpWrittenBytesCounter */
typedef struct Com_RxTpWrittenBytesCounterStructSTag
{
  Com_RxTpWrittenBytesCounterType Alarm_Sec_03S_oSecuritySubnet_7f4118ec_Rx[1];
  Com_RxTpWrittenBytesCounterType Alarm_Sec_06S_oSecuritySubnet_9bbb790b_Rx[1];
  Com_RxTpWrittenBytesCounterType Alarm_Sec_07S_oSecuritySubnet_74e9cfea_Rx[1];
  Com_RxTpWrittenBytesCounterType CCM_Cab_03P_oCabSubnet_59cf0584_Rx[1];
  Com_RxTpWrittenBytesCounterType DDM_Sec_03S_oSecuritySubnet_16817e43_Rx[1];
  Com_RxTpWrittenBytesCounterType DDM_Sec_04S_oSecuritySubnet_f7af7427_Rx[1];
  Com_RxTpWrittenBytesCounterType DDM_Sec_05S_oSecuritySubnet_18fdc2c6_Rx[1];
  Com_RxTpWrittenBytesCounterType DI_X_TACHO_oBackbone1J1939_0dca0ef5_Rx[1];
  Com_RxTpWrittenBytesCounterType EMS_BB2_09S_oBackbone2_f00cfd06_Rx[1];
  Com_RxTpWrittenBytesCounterType EMS_BB2_11S_oBackbone2_3700cf1d_Rx[1];
  Com_RxTpWrittenBytesCounterType HMIIOM_BB2_19P_CIOM_oBackbone2_da8f8d8b_Rx[1];
  Com_RxTpWrittenBytesCounterType HMIIOM_BB2_20S_oBackbone2_20ea552e_Rx[1];
  Com_RxTpWrittenBytesCounterType HMIIOM_BB2_35S_oBackbone2_a0ca074b_Rx[1];
  Com_RxTpWrittenBytesCounterType HMIIOM_BB2_36S_oBackbone2_1d006b85_Rx[1];
  Com_RxTpWrittenBytesCounterType PDM_Sec_03S_oSecuritySubnet_29b4be53_Rx[1];
  Com_RxTpWrittenBytesCounterType PDM_Sec_04S_oSecuritySubnet_c89ab437_Rx[1];
  Com_RxTpWrittenBytesCounterType PropTCO2_X_TACHO_oBackbone1J1939_d2ebdcdb_Rx[1];
  Com_RxTpWrittenBytesCounterType TECU_BB2_05S_oBackbone2_692c9645_Rx[1];
  Com_RxTpWrittenBytesCounterType TECU_BB2_06S_oBackbone2_d4e6fa8b_Rx[1];
  Com_RxTpWrittenBytesCounterType VMCU_BB2_31S_oBackbone2_81212ce1_Rx[1];
  Com_RxTpWrittenBytesCounterType VMCU_BB2_32S_oBackbone2_3ceb402f_Rx[1];
  Com_RxTpWrittenBytesCounterType VMCU_BB2_34S_oBackbone2_9c0e9ff2_Rx[1];
  Com_RxTpWrittenBytesCounterType VMCU_BB2_57P_oBackbone2_ae986a7a_Rx[1];
} Com_RxTpWrittenBytesCounterStructSType;

/**   \brief  type to be used as symbolic data element access to Com_TmpRxShdBufferArrayBased */
typedef struct Com_TmpRxShdBufferArrayBasedStructSTag
{
  Com_TmpRxShdBufferArrayBasedType MediaSourcesListRsp_SrcAttrib_ISig_4_oHMIIOM_BB2_35S_oBackbone2_349b903a_Rx[48];
  Com_TmpRxShdBufferArrayBasedType MediaSourcesListRsp_Name_ISig_4_oHMIIOM_BB2_35S_oBackbone2_46c28b07_Rx[48];
} Com_TmpRxShdBufferArrayBasedStructSType;

/**   \brief  type to be used as symbolic data element access to Com_TxDynSignalLength */
typedef struct Com_TxDynSignalLengthStructSTag
{
  Com_TxDynSignalLengthType CIOM_BB2_32S_oBackbone2_b0016e7e_Tx[1];
  Com_TxDynSignalLengthType CIOM_Cab_04S_oCabSubnet_d0876e5e_Tx[1];
  Com_TxDynSignalLengthType CIOM_Cab_05S_oCabSubnet_0d11b7db_Tx[1];
  Com_TxDynSignalLengthType CIOM_Cab_11S_oCabSubnet_50a73c3b_Tx[1];
  Com_TxDynSignalLengthType CIOM_Cab_13S_oCabSubnet_30fb8970_Tx[1];
  Com_TxDynSignalLengthType CIOM_Cab_20S_oCabSubnet_f150c065_Tx[1];
  Com_TxDynSignalLengthType CIOM_Cab_25S_oCabSubnet_ec7f7376_Tx[1];
  Com_TxDynSignalLengthType CIOM_Cab_29S_oCabSubnet_76c5ca8d_Tx[1];
  Com_TxDynSignalLengthType CIOM_Cab_30S_oCabSubnet_6c5f2113_Tx[1];
  Com_TxDynSignalLengthType CIOM_Cab_34P_oCabSubnet_db789975_Tx[1];
  Com_TxDynSignalLengthType CIOM_Sec_05S_oSecuritySubnet_1bf54606_Tx[1];
  Com_TxDynSignalLengthType CIOM_Sec_06S_oSecuritySubnet_f1739b64_Tx[1];
  Com_TxDynSignalLengthType CIOM_Sec_07S_oSecuritySubnet_1e212d85_Tx[1];
  Com_TxDynSignalLengthType CIOM_Sec_08S_oSecuritySubnet_e85e89ed_Tx[1];
  Com_TxDynSignalLengthType CIOM_Sec_09S_oSecuritySubnet_070c3f0c_Tx[1];
  Com_TxDynSignalLengthType CIOM_Sec_10S_oSecuritySubnet_28eda7b9_Tx[1];
  Com_TxDynSignalLengthType CIOM_Sec_11S_oSecuritySubnet_c7bf1158_Tx[1];
  Com_TxDynSignalLengthType CIOM_Sec_12S_oSecuritySubnet_2d39cc3a_Tx[1];
  Com_TxDynSignalLengthType DI_X_CIOMFMS_oFMSNet_0e37c3a0_Tx[1];
  Com_TxDynSignalLengthType VI_X_CIOMFMS_oFMSNet_243f1e09_Tx[1];
} Com_TxDynSignalLengthStructSType;

/**   \brief  type to be used as symbolic data element access to Com_TxTOutCnt */
typedef struct Com_TxTOutCntStructSTag
{
  Com_TxTOutCntType Backlight_FuncInd_L1_oLIN00_6273f3b1_Tx[1];
  Com_TxTOutCntType CIOMtoSlaves1_L1_oLIN00_8b7527bd_Tx[1];
  Com_TxTOutCntType FSP_1_2_Req_L1_oLIN00_6846650e_Tx[1];
} Com_TxTOutCntStructSType;

/**   \brief  type to be used as symbolic data element access to Com_TxTmpTpPduLength */
typedef struct Com_TxTmpTpPduLengthStructSTag
{
  Com_TxTmpTpPduLengthType CIOM_BB2_32S_oBackbone2_b0016e7e_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Cab_04S_oCabSubnet_d0876e5e_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Cab_05S_oCabSubnet_0d11b7db_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Cab_11S_oCabSubnet_50a73c3b_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Cab_13S_oCabSubnet_30fb8970_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Cab_20S_oCabSubnet_f150c065_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Cab_25S_oCabSubnet_ec7f7376_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Cab_29S_oCabSubnet_76c5ca8d_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Cab_30S_oCabSubnet_6c5f2113_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Cab_34P_oCabSubnet_db789975_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Sec_05S_oSecuritySubnet_1bf54606_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Sec_06S_oSecuritySubnet_f1739b64_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Sec_07S_oSecuritySubnet_1e212d85_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Sec_08S_oSecuritySubnet_e85e89ed_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Sec_09S_oSecuritySubnet_070c3f0c_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Sec_10S_oSecuritySubnet_28eda7b9_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Sec_11S_oSecuritySubnet_c7bf1158_Tx[1];
  Com_TxTmpTpPduLengthType CIOM_Sec_12S_oSecuritySubnet_2d39cc3a_Tx[1];
  Com_TxTmpTpPduLengthType DI_X_CIOMFMS_oFMSNet_0e37c3a0_Tx[1];
  Com_TxTmpTpPduLengthType VI_X_CIOMFMS_oFMSNet_243f1e09_Tx[1];
} Com_TxTmpTpPduLengthStructSType;

/**   \brief  type to be used as symbolic data element access to Com_TxTpConnectionState */
typedef struct Com_TxTpConnectionStateStructSTag
{
  Com_TxTpConnectionStateType CIOM_BB2_32S_oBackbone2_b0016e7e_Tx[1];
  Com_TxTpConnectionStateType CIOM_Cab_04S_oCabSubnet_d0876e5e_Tx[1];
  Com_TxTpConnectionStateType CIOM_Cab_05S_oCabSubnet_0d11b7db_Tx[1];
  Com_TxTpConnectionStateType CIOM_Cab_11S_oCabSubnet_50a73c3b_Tx[1];
  Com_TxTpConnectionStateType CIOM_Cab_13S_oCabSubnet_30fb8970_Tx[1];
  Com_TxTpConnectionStateType CIOM_Cab_20S_oCabSubnet_f150c065_Tx[1];
  Com_TxTpConnectionStateType CIOM_Cab_25S_oCabSubnet_ec7f7376_Tx[1];
  Com_TxTpConnectionStateType CIOM_Cab_29S_oCabSubnet_76c5ca8d_Tx[1];
  Com_TxTpConnectionStateType CIOM_Cab_30S_oCabSubnet_6c5f2113_Tx[1];
  Com_TxTpConnectionStateType CIOM_Cab_34P_oCabSubnet_db789975_Tx[1];
  Com_TxTpConnectionStateType CIOM_Sec_05S_oSecuritySubnet_1bf54606_Tx[1];
  Com_TxTpConnectionStateType CIOM_Sec_06S_oSecuritySubnet_f1739b64_Tx[1];
  Com_TxTpConnectionStateType CIOM_Sec_07S_oSecuritySubnet_1e212d85_Tx[1];
  Com_TxTpConnectionStateType CIOM_Sec_08S_oSecuritySubnet_e85e89ed_Tx[1];
  Com_TxTpConnectionStateType CIOM_Sec_09S_oSecuritySubnet_070c3f0c_Tx[1];
  Com_TxTpConnectionStateType CIOM_Sec_10S_oSecuritySubnet_28eda7b9_Tx[1];
  Com_TxTpConnectionStateType CIOM_Sec_11S_oSecuritySubnet_c7bf1158_Tx[1];
  Com_TxTpConnectionStateType CIOM_Sec_12S_oSecuritySubnet_2d39cc3a_Tx[1];
  Com_TxTpConnectionStateType DI_X_CIOMFMS_oFMSNet_0e37c3a0_Tx[1];
  Com_TxTpConnectionStateType VI_X_CIOMFMS_oFMSNet_243f1e09_Tx[1];
} Com_TxTpConnectionStateStructSType;

/**   \brief  type to be used as symbolic data element access to Com_TxTpSduLength */
typedef struct Com_TxTpSduLengthStructSTag
{
  Com_TxTpSduLengthType CIOM_BB2_32S_oBackbone2_b0016e7e_Tx[1];
  Com_TxTpSduLengthType CIOM_Cab_04S_oCabSubnet_d0876e5e_Tx[1];
  Com_TxTpSduLengthType CIOM_Cab_05S_oCabSubnet_0d11b7db_Tx[1];
  Com_TxTpSduLengthType CIOM_Cab_11S_oCabSubnet_50a73c3b_Tx[1];
  Com_TxTpSduLengthType CIOM_Cab_13S_oCabSubnet_30fb8970_Tx[1];
  Com_TxTpSduLengthType CIOM_Cab_20S_oCabSubnet_f150c065_Tx[1];
  Com_TxTpSduLengthType CIOM_Cab_25S_oCabSubnet_ec7f7376_Tx[1];
  Com_TxTpSduLengthType CIOM_Cab_29S_oCabSubnet_76c5ca8d_Tx[1];
  Com_TxTpSduLengthType CIOM_Cab_30S_oCabSubnet_6c5f2113_Tx[1];
  Com_TxTpSduLengthType CIOM_Cab_34P_oCabSubnet_db789975_Tx[1];
  Com_TxTpSduLengthType CIOM_Sec_05S_oSecuritySubnet_1bf54606_Tx[1];
  Com_TxTpSduLengthType CIOM_Sec_06S_oSecuritySubnet_f1739b64_Tx[1];
  Com_TxTpSduLengthType CIOM_Sec_07S_oSecuritySubnet_1e212d85_Tx[1];
  Com_TxTpSduLengthType CIOM_Sec_08S_oSecuritySubnet_e85e89ed_Tx[1];
  Com_TxTpSduLengthType CIOM_Sec_09S_oSecuritySubnet_070c3f0c_Tx[1];
  Com_TxTpSduLengthType CIOM_Sec_10S_oSecuritySubnet_28eda7b9_Tx[1];
  Com_TxTpSduLengthType CIOM_Sec_11S_oSecuritySubnet_c7bf1158_Tx[1];
  Com_TxTpSduLengthType CIOM_Sec_12S_oSecuritySubnet_2d39cc3a_Tx[1];
  Com_TxTpSduLengthType DI_X_CIOMFMS_oFMSNet_0e37c3a0_Tx[1];
  Com_TxTpSduLengthType VI_X_CIOMFMS_oFMSNet_243f1e09_Tx[1];
} Com_TxTpSduLengthStructSType;

/**   \brief  type to be used as symbolic data element access to Com_TxTpWrittenBytesCounter */
typedef struct Com_TxTpWrittenBytesCounterStructSTag
{
  Com_TxTpWrittenBytesCounterType CIOM_BB2_32S_oBackbone2_b0016e7e_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Cab_04S_oCabSubnet_d0876e5e_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Cab_05S_oCabSubnet_0d11b7db_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Cab_11S_oCabSubnet_50a73c3b_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Cab_13S_oCabSubnet_30fb8970_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Cab_20S_oCabSubnet_f150c065_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Cab_25S_oCabSubnet_ec7f7376_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Cab_29S_oCabSubnet_76c5ca8d_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Cab_30S_oCabSubnet_6c5f2113_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Cab_34P_oCabSubnet_db789975_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Sec_05S_oSecuritySubnet_1bf54606_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Sec_06S_oSecuritySubnet_f1739b64_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Sec_07S_oSecuritySubnet_1e212d85_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Sec_08S_oSecuritySubnet_e85e89ed_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Sec_09S_oSecuritySubnet_070c3f0c_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Sec_10S_oSecuritySubnet_28eda7b9_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Sec_11S_oSecuritySubnet_c7bf1158_Tx[1];
  Com_TxTpWrittenBytesCounterType CIOM_Sec_12S_oSecuritySubnet_2d39cc3a_Tx[1];
  Com_TxTpWrittenBytesCounterType DI_X_CIOMFMS_oFMSNet_0e37c3a0_Tx[1];
  Com_TxTpWrittenBytesCounterType VI_X_CIOMFMS_oFMSNet_243f1e09_Tx[1];
} Com_TxTpWrittenBytesCounterStructSType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCUnionIndexAndSymbolTypes  Com Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access Com_HandleRxPduDeferred in an index and symbol based style. */
typedef union Com_HandleRxPduDeferredUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_HandleRxPduDeferredType raw[203];
  Com_HandleRxPduDeferredStructSType str;
} Com_HandleRxPduDeferredUType;

/**   \brief  type to access Com_RxDefPduBuffer in an index and symbol based style. */
typedef union Com_RxDefPduBufferUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_RxDefPduBufferType raw[1852];
  Com_RxDefPduBufferStructSType str;
} Com_RxDefPduBufferUType;

/**   \brief  type to access Com_RxDynSignalLength in an index and symbol based style. */
typedef union Com_RxDynSignalLengthUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_RxDynSignalLengthType raw[23];
  Com_RxDynSignalLengthStructSType str;
} Com_RxDynSignalLengthUType;

/**   \brief  type to access Com_RxDynSignalTmpLengthForSignalGroups in an index and symbol based style. */
typedef union Com_RxDynSignalTmpLengthForSignalGroupsUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_RxDynSignalTmpLengthForSignalGroupsType raw[23];
  Com_RxDynSignalTmpLengthForSignalGroupsStructSType str;
} Com_RxDynSignalTmpLengthForSignalGroupsUType;

/**   \brief  type to access Com_RxTpBuffer in an index and symbol based style. */
typedef union Com_RxTpBufferUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_RxTpBufferType raw[472];
  Com_RxTpBufferStructSType str;
} Com_RxTpBufferUType;

/**   \brief  type to access Com_RxTpConnectionState in an index and symbol based style. */
typedef union Com_RxTpConnectionStateUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_RxTpConnectionStateType raw[23];
  Com_RxTpConnectionStateStructSType str;
} Com_RxTpConnectionStateUType;

/**   \brief  type to access Com_RxTpSduLength in an index and symbol based style. */
typedef union Com_RxTpSduLengthUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_RxTpSduLengthType raw[23];
  Com_RxTpSduLengthStructSType str;
} Com_RxTpSduLengthUType;

/**   \brief  type to access Com_RxTpWrittenBytesCounter in an index and symbol based style. */
typedef union Com_RxTpWrittenBytesCounterUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_RxTpWrittenBytesCounterType raw[23];
  Com_RxTpWrittenBytesCounterStructSType str;
} Com_RxTpWrittenBytesCounterUType;

/**   \brief  type to access Com_TmpRxShdBufferArrayBased in an index and symbol based style. */
typedef union Com_TmpRxShdBufferArrayBasedUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_TmpRxShdBufferArrayBasedType raw[96];
  Com_TmpRxShdBufferArrayBasedStructSType str;
} Com_TmpRxShdBufferArrayBasedUType;

/**   \brief  type to access Com_TxDynSignalLength in an index and symbol based style. */
typedef union Com_TxDynSignalLengthUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_TxDynSignalLengthType raw[20];
  Com_TxDynSignalLengthStructSType str;
} Com_TxDynSignalLengthUType;

/**   \brief  type to access Com_TxTOutCnt in an index and symbol based style. */
typedef union Com_TxTOutCntUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_TxTOutCntType raw[3];
  Com_TxTOutCntStructSType str;
} Com_TxTOutCntUType;

/**   \brief  type to access Com_TxTmpTpPduLength in an index and symbol based style. */
typedef union Com_TxTmpTpPduLengthUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_TxTmpTpPduLengthType raw[20];
  Com_TxTmpTpPduLengthStructSType str;
} Com_TxTmpTpPduLengthUType;

/**   \brief  type to access Com_TxTpConnectionState in an index and symbol based style. */
typedef union Com_TxTpConnectionStateUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_TxTpConnectionStateType raw[20];
  Com_TxTpConnectionStateStructSType str;
} Com_TxTpConnectionStateUType;

/**   \brief  type to access Com_TxTpSduLength in an index and symbol based style. */
typedef union Com_TxTpSduLengthUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_TxTpSduLengthType raw[20];
  Com_TxTpSduLengthStructSType str;
} Com_TxTpSduLengthUType;

/**   \brief  type to access Com_TxTpWrittenBytesCounter in an index and symbol based style. */
typedef union Com_TxTpWrittenBytesCounterUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_TxTpWrittenBytesCounterType raw[20];
  Com_TxTpWrittenBytesCounterStructSType str;
} Com_TxTpWrittenBytesCounterUType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCRootValueTypes  Com Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in Com_PCConfig */
typedef struct sCom_PCConfigType
{
  uint8 Com_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_PCConfigType;

typedef Com_PCConfigType Com_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  Com_CbkRxTOutFuncPtr
**********************************************************************************************************************/
/** 
  \var    Com_CbkRxTOutFuncPtr
  \brief  Function pointer table containing configured Rx timeout notifications for signals and signal groups.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(ComCbkRxTOutType, COM_CONST) Com_CbkRxTOutFuncPtr[12];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CbkTxTOutFuncPtr
**********************************************************************************************************************/
/** 
  \var    Com_CbkTxTOutFuncPtr
  \brief  Function pointer table containing configured Tx timeout notifications for signals and signal groups.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(ComCbkTxTOutType, COM_CONST) Com_CbkTxTOutFuncPtr[9];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueArrayBased
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueArrayBased
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_ConstValueArrayBasedType, COM_CONST) Com_ConstValueArrayBased[128];
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueSInt16
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueSInt16
  \brief  Optimized array of commonly used values like initial or invalid values. (SINT16)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_ConstValueSInt16Type, COM_CONST) Com_ConstValueSInt16[1];
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt16
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt16
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT16)
*/ 
#define COM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_ConstValueUInt16Type, COM_CONST) Com_ConstValueUInt16[3];
#define COM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt32
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt32
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT32)
*/ 
#define COM_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_ConstValueUInt32Type, COM_CONST) Com_ConstValueUInt32[2];
#define COM_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt8
  \brief  Optimized array of commonly used values like initial or invalid values. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_ConstValueUInt8Type, COM_CONST) Com_ConstValueUInt8[203];
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_GwGrpSigMapping
**********************************************************************************************************************/
/** 
  \var    Com_GwGrpSigMapping
  \brief  Group Signal routing information describing Rx group signal to Tx group signal routing.
  \details
  Element            Description
  RxAccessInfoIdx    the index of the 1:1 relation pointing to Com_RxAccessInfo
  TxSigId            The signal handle ID of the destination signal.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_GwGrpSigMappingType, COM_CONST) Com_GwGrpSigMapping[97];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_GwInfo
**********************************************************************************************************************/
/** 
  \var    Com_GwInfo
  \brief  Contains signal routing mappings and signal group routing mappings for I-PDU based and update-bit based routing relations.
  \details
  Element                    Description
  GwSigGrpMappingEndIdx      the end index of the 0:n relation pointing to Com_GwSigGrpMapping
  GwSigGrpMappingStartIdx    the start index of the 0:n relation pointing to Com_GwSigGrpMapping
  GwSigMappingEndIdx         the end index of the 0:n relation pointing to Com_GwSigMapping
  GwSigMappingStartIdx       the start index of the 0:n relation pointing to Com_GwSigMapping
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_GwInfoType, COM_CONST) Com_GwInfo[86];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_GwSigGrpMapping
**********************************************************************************************************************/
/** 
  \var    Com_GwSigGrpMapping
  \brief  Signal Group routing information describing Rx signal group to Tx signal group routing. The group signal mappings have to be listed separately to support different signal group layouts of the source and destination signal group.
  \details
  Element                    Description
  GwGrpSigMappingEndIdx      the end index of the 1:n relation pointing to Com_GwGrpSigMapping
  GwGrpSigMappingStartIdx    the start index of the 1:n relation pointing to Com_GwGrpSigMapping
  TxSigGrpId                 The signal group handle ID of the destination signal group.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_GwSigGrpMappingType, COM_CONST) Com_GwSigGrpMapping[18];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_GwSigMapping
**********************************************************************************************************************/
/** 
  \var    Com_GwSigMapping
  \brief  Signal routing information describing Rx signal or Rx group signal to Tx signal routing.
  \details
  Element            Description
  RxAccessInfoIdx    the index of the 1:1 relation pointing to Com_RxAccessInfo
  TxSigId            The signal handle ID of the destination signal.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_GwSigMappingType, COM_CONST) Com_GwSigMapping[169];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_PduGrpVector
**********************************************************************************************************************/
/** 
  \var    Com_PduGrpVector
  \brief  Contains an I-PDU-Group vector for each I-PDU, mapping the I-PDU to the corresponding I-PDU-Groups.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_PduGrpVectorType, COM_CONST) Com_PduGrpVector[22];
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfo
  \brief  Contains all signal layout information necessary for signal access within an I-PDU.
  \details
  Element                                       Description
  BitLength                                     Bit length of the signal or group signal.
  BitPosition                                   Little endian bit position of the signal or group signal within the I-PDU.
  BufferIdx                                     the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64
  RoutingBufferIdx                              the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64
  RxSigBufferArrayBasedBufferEndIdx             the end index of the 0:n relation pointing to Com_RxSigBufferArrayBased
  RxSigBufferArrayBasedBufferStartIdx           the start index of the 0:n relation pointing to Com_RxSigBufferArrayBased
  RxSigBufferArrayBasedRoutingBufferEndIdx      the end index of the 0:n relation pointing to Com_RxSigBufferArrayBased
  RxSigBufferArrayBasedRoutingBufferStartIdx    the start index of the 0:n relation pointing to Com_RxSigBufferArrayBased
  RxSigBufferArrayBasedShdBufferEndIdx          the end index of the 0:n relation pointing to Com_RxSigBufferArrayBased
  RxSigBufferArrayBasedShdBufferStartIdx        the start index of the 0:n relation pointing to Com_RxSigBufferArrayBased
  ShdBufferIdx                                  the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64
  InitValueUsed                                 TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  IsGroupSignal                             
  RxSigBufferArrayBasedBufferUsed               TRUE, if the 0:n relation has 1 relation pointing to Com_RxSigBufferArrayBased
  TmpBufferUsed                                 TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TmpRxShdBufferUInt8,Com_TmpRxShdBufferUInt16,Com_TmpRxShdBufferUInt32,Com_TmpRxShdBufferUInt64,Com_TmpRxShdBufferSInt8,Com_TmpRxShdBufferSInt16,Com_TmpRxShdBufferSInt32,Com_TmpRxShdBufferSInt64,Com_TmpRxShdBufferFloat32,Com_TmpRxShdBufferFloat64
  TmpRxShdBufferArrayBasedTmpBufferUsed         TRUE, if the 0:n relation has 1 relation pointing to Com_TmpRxShdBufferArrayBased
  ApplType                                      Application data type.
  BusAcc                                        BUS access algorithm for signal or group signal packing / un-packing.
  ByteLength                                    Byte length of the signal or group signal.
  BytePosition                                  Little endian byte position of the signal or group signal within the I-PDU.
  ConstValueArrayBasedInitValueEndIdx           the end index of the 0:n relation pointing to Com_ConstValueArrayBased
  ConstValueArrayBasedInitValueStartIdx         the start index of the 0:n relation pointing to Com_ConstValueArrayBased
  GwInfoIdx                                     the index of the 0:1 relation pointing to Com_GwInfo
  RxDataTimeoutSubstitutionValueIdx             the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  RxPduInfoIdx                                  the index of the 1:1 relation pointing to Com_RxPduInfo
  RxTOutInfoIdx                                 the index of the 0:1 relation pointing to Com_RxTOutInfo
  StartByteInPduPosition                        Start Byte position of the signal or group signal within the I-PDU.
  TmpBufferIdx                                  the index of the 0:1 relation pointing to Com_TmpRxShdBufferUInt8,Com_TmpRxShdBufferUInt16,Com_TmpRxShdBufferUInt32,Com_TmpRxShdBufferUInt64,Com_TmpRxShdBufferSInt8,Com_TmpRxShdBufferSInt16,Com_TmpRxShdBufferSInt32,Com_TmpRxShdBufferSInt64,Com_TmpRxShdBufferFloat32,Com_TmpRxShdBufferFloat64
  TmpRxShdBufferArrayBasedTmpBufferEndIdx       the end index of the 0:n relation pointing to Com_TmpRxShdBufferArrayBased
  TmpRxShdBufferArrayBasedTmpBufferStartIdx     the start index of the 0:n relation pointing to Com_TmpRxShdBufferArrayBased
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_RxAccessInfoType, COM_CONST) Com_RxAccessInfo[876];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfoGrpSigInd
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfoGrpSigInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_RxAccessInfo
*/ 
#define COM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_RxAccessInfoGrpSigIndType, COM_CONST) Com_RxAccessInfoGrpSigInd[214];
#define COM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_RxAccessInfo
*/ 
#define COM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_RxAccessInfoIndType, COM_CONST) Com_RxAccessInfoInd[876];
#define COM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxCbkFuncPtr
**********************************************************************************************************************/
/** 
  \var    Com_RxCbkFuncPtr
  \brief  Function pointer table containing configured notification and invalid notifications function pointer for signals and signal groups.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(ComRxCbkType, COM_CONST) Com_RxCbkFuncPtr[191];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Rx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorEndIdx      the end index of the 0:n relation pointing to Com_PduGrpVector
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Com_PduGrpVector
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_RxPduGrpInfoType, COM_CONST) Com_RxPduGrpInfo[203];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduInfo
  \brief  Contains all relevant common information for Rx I-PDUs.
  \details
  Element                    Description
  RxAccessInfoIndEndIdx      the end index of the 0:n relation pointing to Com_RxAccessInfoInd
  RxAccessInfoIndStartIdx    the start index of the 0:n relation pointing to Com_RxAccessInfoInd
  RxDefPduBufferEndIdx       the end index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxDefPduBufferStartIdx     the start index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxSigInfoEndIdx            the end index of the 0:n relation pointing to Com_RxSigInfo
  RxSigInfoStartIdx          the start index of the 0:n relation pointing to Com_RxSigInfo
  RxAccessInfoIndUsed        TRUE, if the 0:n relation has 1 relation pointing to Com_RxAccessInfoInd
  RxTOutInfoUsed             TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxTOutInfo
  GwInfoEndIdx               the end index of the 0:n relation pointing to Com_GwInfo
  GwInfoStartIdx             the start index of the 0:n relation pointing to Com_GwInfo
  RxSigGrpInfoIndEndIdx      the end index of the 0:n relation pointing to Com_RxSigGrpInfoInd
  RxSigGrpInfoIndStartIdx    the start index of the 0:n relation pointing to Com_RxSigGrpInfoInd
  RxTOutInfoIndEndIdx        the end index of the 0:n relation pointing to Com_RxTOutInfoInd
  RxTOutInfoIndStartIdx      the start index of the 0:n relation pointing to Com_RxTOutInfoInd
  RxTpInfoIdx                the index of the 0:1 relation pointing to Com_RxTpInfo
  SignalProcessing           Defines whether rx Pdu is processed in DEFERRED or IMMEDIATE fashion.
  Type                       Defines whether rx Pdu is a NORMAL or TP IPdu.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_RxPduInfoType, COM_CONST) Com_RxPduInfo[203];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigGrpInfo
  \brief  Contains all relevant information for Rx signal groups.
  \details
  Element                          Description
  ShdBufferRequired            
  GwInfoIdx                        the index of the 0:1 relation pointing to Com_GwInfo
  RxAccessInfoGrpSigIndEndIdx      the end index of the 0:n relation pointing to Com_RxAccessInfoGrpSigInd
  RxAccessInfoGrpSigIndStartIdx    the start index of the 0:n relation pointing to Com_RxAccessInfoGrpSigInd
  RxCbkFuncPtrAckIdx               the index of the 0:1 relation pointing to Com_RxCbkFuncPtr
  RxPduInfoIdx                     the index of the 1:1 relation pointing to Com_RxPduInfo
  SignalProcessing             
  StartBytePosition                Least significant byte position of first group signal within the ComIPdu.
  UbIdx                            Byte position of update-bit within the I-PDU. ea:{9B36DD60-EF52-4c12-9FB3-17D39CA664C3}
  UbMaskIdx                        the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  ValidDlc                         Minimum length of PDU required to completely receive the signal or signal group.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_RxSigGrpInfoType, COM_CONST) Com_RxSigGrpInfo[40];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigGrpInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_RxSigGrpInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_RxSigGrpInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_RxSigGrpInfoIndType, COM_CONST) Com_RxSigGrpInfoInd[40];
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigInfo
  \brief  Contains all relevant information for Rx signals.
  \details
  Element               Description
  RxAccessInfoIdx       the index of the 1:1 relation pointing to Com_RxAccessInfo
  GwInfoIdx             the index of the 0:1 relation pointing to Com_GwInfo
  RxCbkFuncPtrAckIdx    the index of the 0:1 relation pointing to Com_RxCbkFuncPtr
  RxTOutInfoIdx         the index of the 0:1 relation pointing to Com_RxTOutInfo
  SignalProcessing  
  UbIdx                 Byte position of update-bit within the I-PDU. ea:{9B36DD60-EF52-4c12-9FB3-17D39CA664C3}
  UbMaskIdx             the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  ValidDlc              Minimum length of PDU required to completely receive the signal or signal group.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_RxSigInfoType, COM_CONST) Com_RxSigInfo[662];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTOutInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxTOutInfo
  \brief  Contains all relevant information for signal based and I-PDu based Rx deadline monitoring.
  \details
  Element                        Description
  CbkRxTOutFuncPtrIndEndIdx      the end index of the 0:n relation pointing to Com_CbkRxTOutFuncPtrInd
  CbkRxTOutFuncPtrIndStartIdx    the start index of the 0:n relation pointing to Com_CbkRxTOutFuncPtrInd
  Factor                         Deadline monitoring timeout factor.
  FirstFactor                    Timeout factor for first deadline monitoring.
  RxPduInfoIdx                   the index of the 1:1 relation pointing to Com_RxPduInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_RxTOutInfoType, COM_CONST) Com_RxTOutInfo[3];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTpInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxTpInfo
  \brief  Contains all relevant information for Tx Tp I-PDUs.
  \details
  Element                  Description
  RxAccessInfoDynSigIdx    the index of the 0:1 relation pointing to Com_RxAccessInfo
  RxTpBufferEndIdx         the end index of the 0:n relation pointing to Com_RxTpBuffer
  RxTpBufferStartIdx       the start index of the 0:n relation pointing to Com_RxTpBuffer
  BufferSize           
  DynamicInitialLength 
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_RxTpInfoType, COM_CONST) Com_RxTpInfo[23];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxFilterInitValueUInt16
**********************************************************************************************************************/
/** 
  \var    Com_TxFilterInitValueUInt16
  \brief  Contains the initial values used for initialization of the old value to evaluate the filter algorithm. (UINT16)
*/ 
#define COM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_TxFilterInitValueUInt16Type, COM_CONST) Com_TxFilterInitValueUInt16[2];
#define COM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxFilterInitValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_TxFilterInitValueUInt8
  \brief  Contains the initial values used for initialization of the old value to evaluate the filter algorithm. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_TxFilterInitValueUInt8Type, COM_CONST) Com_TxFilterInitValueUInt8[3];
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeFalse
**********************************************************************************************************************/
/** 
  \var    Com_TxModeFalse
  \brief  Contains all relevant information for transmission mode false.
  \details
  Element       Description
  TimePeriod    Cycle time factor.
  Direct        TRUE if transmission mode contains a direct part.
  TimeOffset    Initial time offset factor for cyclic transmission.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_TxModeFalseType, COM_CONST) Com_TxModeFalse[56];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxModeInfo
  \brief  Contains all relevant information for transmission mode handling.
  \details
  Element                                Description
  TxModeFalseUsed                        TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TxModeFalse
  MinimumDelay                           Minimum delay factor of the Tx I-PDU.
  TxModeTrueIdx                          the index of the 0:1 relation pointing to Com_TxModeTrue
  TxSigInfoFilterInitValueIndEndIdx      the end index of the 0:n relation pointing to Com_TxSigInfoFilterInitValueInd
  TxSigInfoFilterInitValueIndStartIdx    the start index of the 0:n relation pointing to Com_TxSigInfoFilterInitValueInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_TxModeInfoType, COM_CONST) Com_TxModeInfo[151];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeTrue
**********************************************************************************************************************/
/** 
  \var    Com_TxModeTrue
  \brief  Contains all relevant information for transmission mode true.
  \details
  Element       Description
  TimePeriod    Cycle time factor.
  Direct        TRUE if transmission mode contains a direct part.
  TimeOffset    Initial time offset factor for cyclic transmission.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_TxModeTrueType, COM_CONST) Com_TxModeTrue[56];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Tx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorEndIdx      the end index of the 0:n relation pointing to Com_PduGrpVector
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Com_PduGrpVector
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_TxPduGrpInfoType, COM_CONST) Com_TxPduGrpInfo[151];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInfo
  \brief  Contains all relevant information for Tx I-PDUs.
  \details
  Element                               Description
  TxPduInitValueEndIdx                  the end index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueMetaDataEndIdx          the end index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueMetaDataStartIdx        the start index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueStartIdx                the start index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueMetaDataUsed            TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduInitValue
  TxPduInitValueUsed                    TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduInitValue
  ClrUb                                 Context the update-bits shall be cleared.
  ConstValueUInt8UbClearMaskEndIdx      the end index of the 0:n relation pointing to Com_ConstValueUInt8
  ConstValueUInt8UbClearMaskStartIdx    the start index of the 0:n relation pointing to Com_ConstValueUInt8
  ExternalId                            External ID used to call PduR_ComTransmit().
  PduWithMetaDataLength                 Length of Pdu with MetaData.
  TxBufferLength                        the number of relations pointing to Com_TxBuffer
  TxBufferMetaDataLength                the number of relations pointing to Com_TxBuffer
  TxSigGrpInfoIndEndIdx                 the end index of the 0:n relation pointing to Com_TxSigGrpInfoInd
  TxSigGrpInfoIndStartIdx               the start index of the 0:n relation pointing to Com_TxSigGrpInfoInd
  TxTOutInfoIdx                         the index of the 0:1 relation pointing to Com_TxTOutInfo
  TxTpInfoIdx                           the index of the 0:1 relation pointing to Com_TxTpInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_TxPduInfoType, COM_CONST) Com_TxPduInfo[151];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInitValue
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInitValue
  \brief  Initial values used for Tx I-PDU buffer initialization.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_TxPduInitValueType, COM_CONST) Com_TxPduInitValue[1529];
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpInfo
  \brief  Contains all relevant information for Tx Signal Groups.
  \details
  Element                           Description
  TxBufferEndIdx                    the end index of the 0:n relation pointing to Com_TxBuffer
  TxBufferSigGrpInTxIPDUEndIdx      the end index of the 1:n relation pointing to Com_TxBuffer
  TxBufferSigGrpInTxIPDUStartIdx    the start index of the 1:n relation pointing to Com_TxBuffer
  TxBufferStartIdx                  the start index of the 0:n relation pointing to Com_TxBuffer
  TxBufferUbIdxInTxBufferIdx        the index of the 0:1 relation pointing to Com_TxBuffer
  TxSigGrpMaskUsed                  TRUE, if the 0:n relation has 1 relation pointing to Com_TxSigGrpMask
  UbMaskUsed                        TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  PduOffset                         Byte offset relative to the PDU the signal group is starting.
  TransferProperty              
  TxPduInfoIdx                      the index of the 1:1 relation pointing to Com_TxPduInfo
  TxSigGrpMaskEndIdx                the end index of the 0:n relation pointing to Com_TxSigGrpMask
  TxSigGrpMaskStartIdx              the start index of the 0:n relation pointing to Com_TxSigGrpMask
  UbMaskIdx                         the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_TxSigGrpInfoType, COM_CONST) Com_TxSigGrpInfo[43];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_TxSigGrpInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_TxSigGrpInfoIndType, COM_CONST) Com_TxSigGrpInfoInd[43];
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpMask
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpMask
  \brief  Signal group mask needed to copy interlaced signal groups to the Tx PDU buffer.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_TxSigGrpMaskType, COM_CONST) Com_TxSigGrpMask[173];
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigInfo
  \brief  Contains all relevant information for Tx signals and group signals.
  \details
  Element                       Description
  BitLength                     Bit length of the signal or group signal.
  BitPosition                   Little endian bit position of the signal or group signal within the I-PDU.
  TxBufferEndIdx                the end index of the 0:n relation pointing to Com_TxBuffer
  TxBufferStartIdx              the start index of the 0:n relation pointing to Com_TxBuffer
  TxBufferUbIdxInTxBufferIdx    the index of the 0:1 relation pointing to Com_TxBuffer
  OnChangeUsed                  TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_FilterInfo_UInt8,Com_FilterInfo_SInt8,Com_FilterInfo_UInt16,Com_FilterInfo_SInt16,Com_FilterInfo_UInt32,Com_FilterInfo_SInt32,Com_FilterInfo_UInt64,Com_FilterInfo_SInt64,Com_FilterInfo_Float32,Com_FilterInfo_Float64,Com_FilterInfo_UInt8_N
  Triggered                     TRUE if signal or group signal has any 'TRIGGERED_*' transfer property.
  UbMaskUsed                    TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  ApplType                      Application data type.
  BusAcc                        BUS access algorithm for signal or group signal packing / un-packing.
  ByteLength                    Byte length of the signal or group signal.
  BytePosition                  Little endian byte position of the signal or group signal within the I-PDU.
  FilterInitValueIdx            the index of the 0:1 relation pointing to Com_TxFilterInitValueUInt8,Com_TxFilterInitValueUInt16,Com_TxFilterInitValueUInt32,Com_TxFilterInitValueUInt64,Com_TxFilterInitValueSInt8,Com_TxFilterInitValueSInt16,Com_TxFilterInitValueSInt32,Com_TxFilterInitValueSInt64,Com_TxFilterInitValueFloat32,Com_TxFilterInitValueFloat64
  OnChangeIdx                   the index of the 0:1 relation pointing to Com_FilterInfo_UInt8,Com_FilterInfo_SInt8,Com_FilterInfo_UInt16,Com_FilterInfo_SInt16,Com_FilterInfo_UInt32,Com_FilterInfo_SInt32,Com_FilterInfo_UInt64,Com_FilterInfo_SInt64,Com_FilterInfo_Float32,Com_FilterInfo_Float64,Com_FilterInfo_UInt8_N
  StartByteInPduPosition        Start Byte position of the signal or group signal within the I-PDU.
  TxPduInfoIdx                  the index of the 1:1 relation pointing to Com_TxPduInfo
  TxSigGrpInfoIdx               the index of the 0:1 relation pointing to Com_TxSigGrpInfo
  UbMaskIdx                     the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_TxSigInfoType, COM_CONST) Com_TxSigInfo[913];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxTOutInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxTOutInfo
  \brief  Contains all relevant information for I-PDU based Tx deadline monitoring.
  \details
  Element                        Description
  CbkTxTOutFuncPtrIndEndIdx      the end index of the 0:n relation pointing to Com_CbkTxTOutFuncPtrInd
  CbkTxTOutFuncPtrIndStartIdx    the start index of the 0:n relation pointing to Com_CbkTxTOutFuncPtrInd
  Factor                         Deadline monitoring timeout factor.
  Mode                           Declares the type of Tx Deadline Monitoring (NORMAL_MODE or NONE_MODE only).
  TxPduInfoIdx                   the index of the 1:1 relation pointing to Com_TxPduInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_TxTOutInfoType, COM_CONST) Com_TxTOutInfo[3];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxTpInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxTpInfo
  \brief  Contains all relevant information for Tx Tp I-PDUs.
  \details
  Element                 Description
  TxBufferEndIdx          the end index of the 0:n relation pointing to Com_TxBuffer
  TxBufferStartIdx        the start index of the 0:n relation pointing to Com_TxBuffer
  TxSigInfoDynSigIdx      the index of the 0:1 relation pointing to Com_TxSigInfo
  DynamicInitialLength
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_TxTpInfoType, COM_CONST) Com_TxTpInfo[20];
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CurrentTxMode
**********************************************************************************************************************/
/** 
  \var    Com_CurrentTxMode
  \brief  Current transmission mode state of all Tx I-PDUs.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_CurrentTxModeType, COM_VAR_NOINIT) Com_CurrentTxMode[151];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CycleTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_CycleTimeCnt
  \brief  Current counter value of cyclic transmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_CycleTimeCntType, COM_VAR_NOINIT) Com_CycleTimeCnt[151];
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CyclicSendRequest
**********************************************************************************************************************/
/** 
  \var    Com_CyclicSendRequest
  \brief  Cyclic send request flag used to indicate cyclic transmission mode for all Tx I-PDU.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_CyclicSendRequestType, COM_VAR_NOINIT) Com_CyclicSendRequest[151];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_DelayTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_DelayTimeCnt
  \brief  Current counter value of minimum delay counter.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_DelayTimeCntType, COM_VAR_NOINIT) Com_DelayTimeCnt[151];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_GatewayDescriptionProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_GatewayDescriptionProcessingISRLockCounterType, COM_VAR_NOINIT) Com_GatewayDescriptionProcessingISRLockCounter;  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_GatewayProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_GatewayProcessingISRLockCounterType, COM_VAR_NOINIT) Com_GatewayProcessingISRLockCounter;  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_GwEvent
**********************************************************************************************************************/
/** 
  \var    Com_GwEvent
  \brief  Flag array indication a routing event has to be processed within the next call of Com_MainfunctionRouteSignals(). A routing event is stored for Rx I-PDU based routings and Rx signal based routings with configured update-bit.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_GwEventType, COM_VAR_NOINIT) Com_GwEvent[86];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_GwEventCacheIndex
**********************************************************************************************************************/
/** 
  \var    Com_GwEventCacheIndex
  \brief  Index for deferred gw description event cache
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_GwEventCacheIndexType, COM_VAR_NOINIT) Com_GwEventCacheIndex;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleRxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleRxPduDeferred
  \brief  Array indicating received Rx I-PDUs to be processed deferred within the next call of Com_MainfunctionRx().
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_HandleRxPduDeferredUType, COM_VAR_NOINIT) Com_HandleRxPduDeferred;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleTxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleTxPduDeferred
  \brief  Flag array used for deferred Tx confirmation handling.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_HandleTxPduDeferredType, COM_VAR_NOINIT) Com_HandleTxPduDeferred[151];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_Initialized
**********************************************************************************************************************/
/** 
  \var    Com_Initialized
  \brief  Initialization state of Com. TRUE, if Com_Init() has been called, else FALSE.
*/ 
#define COM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_InitializedType, COM_VAR_ZERO_INIT) Com_Initialized;
#define COM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCnt
  \brief  Current repetition counter value for replication of transmission requests plus one initial transmit.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RepCntType, COM_VAR_NOINIT) Com_RepCnt[151];
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCycleCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCycleCnt
  \brief  Current counter value of repetition period for replication of transmission requests.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RepCycleCntType, COM_VAR_NOINIT) Com_RepCycleCnt[151];
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeadlineMonitoringISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxDeadlineMonitoringISRLockCounterType, COM_VAR_NOINIT) Com_RxDeadlineMonitoringISRLockCounter;  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDefPduBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxDefPduBuffer
  \brief  Rx I-PDU buffer for deferred signal processing.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxDefPduBufferUType, COM_VAR_NOINIT) Com_RxDefPduBuffer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeferredFctPtrCache
**********************************************************************************************************************/
/** 
  \var    Com_RxDeferredFctPtrCache
  \brief  Cache for deferred Rx (invalid) notification.
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxDeferredFctPtrCacheType, COM_VAR_NOINIT) Com_RxDeferredFctPtrCache[1];
#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeferredProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxDeferredProcessingISRLockCounterType, COM_VAR_NOINIT) Com_RxDeferredProcessingISRLockCounter;  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDynSignalLength
**********************************************************************************************************************/
/** 
  \var    Com_RxDynSignalLength
  \brief  This var Array contains the calculated length of dynamic length signals.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxDynSignalLengthUType, COM_VAR_NOINIT) Com_RxDynSignalLength;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDynSignalTmpLengthForSignalGroups
**********************************************************************************************************************/
/** 
  \var    Com_RxDynSignalTmpLengthForSignalGroups
  \brief  This array is needed to cache the length for dynamic length signals within a signal group.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxDynSignalTmpLengthForSignalGroupsUType, COM_VAR_NOINIT) Com_RxDynSignalTmpLengthForSignalGroups;  /* PRQA S 0777, 0759 */  /* MD_MSR_5.1_777, MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_RxIPduGroupISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduDmState
**********************************************************************************************************************/
/** 
  \var    Com_RxPduDmState
  \brief  Rx I-PDU based deadline monitoring state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxPduDmStateType, COM_VAR_NOINIT) Com_RxPduDmState[3];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpActive
  \brief  Rx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxPduGrpActiveType, COM_VAR_NOINIT) Com_RxPduGrpActive[203];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferArrayBased
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferArrayBased
  \brief  Rx Signal and Group Signal Buffer. (UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxSigBufferArrayBasedType, COM_VAR_NOINIT) Com_RxSigBufferArrayBased[721];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferSInt16
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferSInt16
  \brief  Rx Signal and Group Signal Buffer. (SINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxSigBufferSInt16Type, COM_VAR_NOINIT) Com_RxSigBufferSInt16[14];
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt16
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt16
  \brief  Rx Signal and Group Signal Buffer. (UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxSigBufferUInt16Type, COM_VAR_NOINIT) Com_RxSigBufferUInt16[115];
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt32
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt32
  \brief  Rx Signal and Group Signal Buffer. (UINT32)
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxSigBufferUInt32Type, COM_VAR_NOINIT) Com_RxSigBufferUInt32[35];
#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt8
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt8
  \brief  Rx Signal and Group Signal Buffer. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxSigBufferUInt8Type, COM_VAR_NOINIT) Com_RxSigBufferUInt8[892];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTOutCnt
**********************************************************************************************************************/
/** 
  \var    Com_RxTOutCnt
  \brief  This array holds timeout counters for all Rx timeout objects.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxTOutCntType, COM_VAR_NOINIT) Com_RxTOutCnt[3];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTpBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxTpBuffer
  \brief  This var Array contains the Tp Buffers.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxTpBufferUType, COM_VAR_NOINIT) Com_RxTpBuffer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTpConnectionState
**********************************************************************************************************************/
/** 
  \var    Com_RxTpConnectionState
  \brief  This var Array indicates the Tp connection state.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxTpConnectionStateUType, COM_VAR_NOINIT) Com_RxTpConnectionState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTpSduLength
**********************************************************************************************************************/
/** 
  \var    Com_RxTpSduLength
  \brief  This var Array contains the Sdu Length of a Tp connection.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxTpSduLengthUType, COM_VAR_NOINIT) Com_RxTpSduLength;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTpWrittenBytesCounter
**********************************************************************************************************************/
/** 
  \var    Com_RxTpWrittenBytesCounter
  \brief  This var Array contains the number of written bytes of a Tp connection.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxTpWrittenBytesCounterUType, COM_VAR_NOINIT) Com_RxTpWrittenBytesCounter;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_SigGrpEventFlag
**********************************************************************************************************************/
/** 
  \var    Com_SigGrpEventFlag
  \brief  Flag is set if a group signal write access caused a triggered event.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_SigGrpEventFlagType, COM_VAR_NOINIT) Com_SigGrpEventFlag[43];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxBuffer
  \brief  Temporary buffer for Rx UINT8_N and UINT8_DYN signals.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TmpRxBufferType, COM_VAR_NOINIT) Com_TmpRxBuffer[128];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferArrayBased
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferArrayBased
  \brief  Temporary Rx Group Signal Shadow Buffer. (UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TmpRxShdBufferArrayBasedUType, COM_VAR_NOINIT) Com_TmpRxShdBufferArrayBased;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferUInt16
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferUInt16
  \brief  Temporary Rx Group Signal Shadow Buffer. (UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TmpRxShdBufferUInt16Type, COM_VAR_NOINIT) Com_TmpRxShdBufferUInt16[4];
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferUInt32
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferUInt32
  \brief  Temporary Rx Group Signal Shadow Buffer. (UINT32)
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TmpRxShdBufferUInt32Type, COM_VAR_NOINIT) Com_TmpRxShdBufferUInt32[3];
#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferUInt8
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferUInt8
  \brief  Temporary Rx Group Signal Shadow Buffer. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TmpRxShdBufferUInt8Type, COM_VAR_NOINIT) Com_TmpRxShdBufferUInt8[16];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TransmitRequest
**********************************************************************************************************************/
/** 
  \var    Com_TransmitRequest
  \brief  Transmit request flag used for decoupled Tx I-PDU tranmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TransmitRequestType, COM_VAR_NOINIT) Com_TransmitRequest[151];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TxBuffer
  \brief  Shared uint8 buffer for Tx I-PDUs and ComSignalGroup shadow buffer.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxBufferType, COM_VAR_NOINIT) Com_TxBuffer[1833];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxCyclicProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxCyclicProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxCyclicProcessingISRLockCounter;  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxDeadlineMonitoringISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxDeadlineMonitoringISRLockCounterType, COM_VAR_NOINIT) Com_TxDeadlineMonitoringISRLockCounter;  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxDynSignalLength
**********************************************************************************************************************/
/** 
  \var    Com_TxDynSignalLength
  \brief  This var Array contains the length of dynamic length signals.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxDynSignalLengthUType, COM_VAR_NOINIT) Com_TxDynSignalLength;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxFilterOldValueUInt16
**********************************************************************************************************************/
/** 
  \var    Com_TxFilterOldValueUInt16
  \brief  This buffer holds the old signal values for filter MASKED_NEW_DIFFERS_MASKED_OLD and for transfer property TRIGGERED_ON_CHANGE_* evaluation. (UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxFilterOldValueUInt16Type, COM_VAR_NOINIT) Com_TxFilterOldValueUInt16[2];
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxFilterOldValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_TxFilterOldValueUInt8
  \brief  This buffer holds the old signal values for filter MASKED_NEW_DIFFERS_MASKED_OLD and for transfer property TRIGGERED_ON_CHANGE_* evaluation. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxFilterOldValueUInt8Type, COM_VAR_NOINIT) Com_TxFilterOldValueUInt8[3];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_TxIPduGroupISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpActive
  \brief  Tx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxPduGrpActiveType, COM_VAR_NOINIT) Com_TxPduGrpActive[151];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxProcessingISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxSduLength
  \brief  This var Array contains the Com Ipdu Length.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxSduLengthType, COM_VAR_NOINIT) Com_TxSduLength[151];
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxTOutCnt
**********************************************************************************************************************/
/** 
  \var    Com_TxTOutCnt
  \brief  This array holds timeout counters for all Tx I-PDUs with a configured I-PDU based deadline monitoring.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxTOutCntUType, COM_VAR_NOINIT) Com_TxTOutCnt;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxTmpTpPduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxTmpTpPduLength
  \brief  This var Array contains the calculated length of the dynamic length pdu.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxTmpTpPduLengthUType, COM_VAR_NOINIT) Com_TxTmpTpPduLength;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxTpConnectionState
**********************************************************************************************************************/
/** 
  \var    Com_TxTpConnectionState
  \brief  This var Array indicates the Tp connection state.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxTpConnectionStateUType, COM_VAR_NOINIT) Com_TxTpConnectionState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxTpSduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxTpSduLength
  \brief  This var Array contains the Sdu Length of a Tp connection.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxTpSduLengthUType, COM_VAR_NOINIT) Com_TxTpSduLength;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxTpWrittenBytesCounter
**********************************************************************************************************************/
/** 
  \var    Com_TxTpWrittenBytesCounter
  \brief  This var Array contains the number of written bytes of a Tp connection.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxTpWrittenBytesCounterUType, COM_VAR_NOINIT) Com_TxTpWrittenBytesCounter;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_WaitingForConfirmation
**********************************************************************************************************************/
/** 
  \var    Com_WaitingForConfirmation
  \brief  Flag array used for Tx error notification handling.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_WaitingForConfirmationType, COM_VAR_NOINIT) Com_WaitingForConfirmation[151];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  RECEIVE MACRO API
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/* User Config File Start */

/* User Config File End */


#endif  /* COM_CFG_H */
/**********************************************************************************************************************
  END OF FILE: Com_Cfg.h
**********************************************************************************************************************/

