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
 *            Module: Cdd
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Cdd_Cbk.h
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



#if !defined (CDD_CBK_H)
# define CDD_CBK_H

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
# include "ComStack_Types.h"



/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#ifndef CDD_USE_DUMMY_FUNCTIONS
#define CDD_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef CDD_USE_DUMMY_STATEMENT
#define CDD_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef CDD_DUMMY_STATEMENT
#define CDD_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CDD_DUMMY_STATEMENT_CONST
#define CDD_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CDD_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define CDD_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_ON /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef CDD_ATOMIC_VARIABLE_ACCESS
#define CDD_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef CDD_PROCESSOR_MPC5746C
#define CDD_PROCESSOR_MPC5746C
#endif
#ifndef CDD_COMP_DIAB
#define CDD_COMP_DIAB
#endif
#ifndef CDD_GEN_GENERATOR_MSR
#define CDD_GEN_GENERATOR_MSR
#endif
#ifndef CDD_CPUTYPE_BITORDER_MSB2LSB
#define CDD_CPUTYPE_BITORDER_MSB2LSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef CDD_CONFIGURATION_VARIANT_PRECOMPILE
#define CDD_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef CDD_CONFIGURATION_VARIANT_LINKTIME
#define CDD_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef CDD_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define CDD_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef CDD_CONFIGURATION_VARIANT
#define CDD_CONFIGURATION_VARIANT CDD_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef CDD_POSTBUILD_VARIANT_SUPPORT
#define CDD_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define CDD_COMIF  STD_OFF
#define CDD_COMIF_RX  STD_OFF
#define CDD_COMIF_TX  STD_OFF
#define CDD_COMIF_TRIGGERTRANSMIT  STD_OFF

#define CDD_PDUR_UL_COMIF  STD_OFF
#define CDD_PDUR_UL_COMIF_TRIGGERTRANSMIT  STD_OFF

#define CDD_PDUR_UL_COMTP  STD_ON

#define CDD_PDUR_LL_COMIF  STD_OFF
#define CDD_PDUR_LL_COMIF_TRIGGERTRANSMIT  STD_OFF

#define CDD_PDUR_LL_COMTP  STD_OFF

#define CDD_SOADUL_COMIF_RX  STD_OFF
#define CDD_SOADUL_COMIF_TRIGGERTRANSMIT  STD_OFF
#define CDD_SOADUL_COMIF_TXCONFIRMATION   STD_OFF

#define CDD_SOADUL_COMTP_RX  STD_OFF
#define CDD_SOADUL_COMTP_TX  STD_OFF





/**
 * \defgroup CddHandleIdsPduRUpperLayerRx Handle IDs of handle space PduRUpperLayerRx.
 * \brief CddPduRUpperLayerContribution Rx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_CCFW_oLIN03_d7124ce9_Rx 0
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_DLFW_oLIN03_0f2202e7_Rx 1
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_ELCP1_oLIN03_8611f0b3_Rx 2
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_ELCP2_oLIN03_089ef750_Rx 3
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_FSP1_L1_oLIN00_620b3198_Rx 4
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_FSP1_L2_oLIN01_9b8306ed_Rx 5
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_FSP1_L3_oLIN02_ce2057c9_Rx 6
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_FSP1_L4_oLIN03_b3e26e46_Rx 7
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_FSP1_L5_oLIN04_e12cfb7b_Rx 8
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_FSP2_L1_oLIN00_fbe95799_Rx 9
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_FSP2_L2_oLIN01_026160ec_Rx 10
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_FSP2_L3_oLIN02_57c231c8_Rx 11
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_FSP3_L2_oLIN01_c3efbf2c_Rx 12
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_FSP4_L2_oLIN01_ead4aaaf_Rx 13
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_ILCP1_oLIN00_1a12ec88_Rx 14
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_ILCP2_oLIN03_0d94bad1_Rx 15
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_LECM2_oLIN00_2afc07d8_Rx 16
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_LECMBasic_oLIN00_029997c6_Rx 17
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_RCECS_oLIN04_f9903c90_Rx 18
#define CddConf_CddPduRUpperLayerRxPdu_SlaveResp_TCP_oLIN02_b3851a34_Rx 19
/**\} */

/**
 * \defgroup CddHandleIdsPduRUpperLayerTx Handle IDs of handle space PduRUpperLayerTx.
 * \brief CddPduRUpperLayerContribution Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_CCFW_oLIN03_98357989_Tx 0
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_DLFW_oLIN03_40053787_Tx 1
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_ELCP1_oLIN03_cbecb6de_Tx 2
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_ELCP2_oLIN03_4563b13d_Tx 3
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_FSP1_L1_oLIN00_2de78d2a_Tx 4
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_FSP1_L2_oLIN01_d46fba5f_Tx 5
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_FSP1_L3_oLIN02_81cceb7b_Tx 6
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_FSP1_L4_oLIN03_fc0ed2f4_Tx 7
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_FSP1_L5_oLIN04_aec047c9_Tx 8
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_FSP2_L1_oLIN00_b405eb2b_Tx 9
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_FSP2_L2_oLIN01_4d8ddc5e_Tx 10
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_FSP2_L3_oLIN02_182e8d7a_Tx 11
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_FSP3_L2_oLIN01_8c03039e_Tx 12
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_FSP4_L2_oLIN01_a538161d_Tx 13
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_ILCP1_oLIN00_57efaae5_Tx 14
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_ILCP2_oLIN03_4069fcbc_Tx 15
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_LECM2_oLIN00_670141b5_Tx 16
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_LECMBasic_oLIN00_16bdebb7_Tx 17
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_RCECS_oLIN04_b46d7afd_Tx 23
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_TCP_oLIN02_4b422897_Tx 24
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_oLIN00_4a2bb011_Tx   18
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_oLIN01_3d2c8087_Tx   19
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_oLIN02_a425d13d_Tx   20
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_oLIN03_d322e1ab_Tx   21
#define CddConf_CddPduRUpperLayerTxPdu_MasterReq_oLIN04_4d467408_Tx   22
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
# define CDD_START_SEC_CODE
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"    /* PRQA S 5087 */       /* MD_MSR_19.1 */
/*lint -restore */





/** \defgroup ProvidedCddCddTransportProtocol Provided Cdd transport protocol interface to PduR
    \brief    These services have to be provided by the Cdd if the CDD is an upper layer for the PduR. */
/*\{*/

/**********************************************************************************************************************
  Cdd_StartOfReception
**********************************************************************************************************************/
/** \brief       The function call indicates the reception start of a segmented PDU.
    \param[in]   id             id of the TP CddPduRUpperLayerRxPdu.
    \param[in]   info           Pointer to a PduInfoType structure containing the payload data
    \param[in]   TpSduLength    length of the entire the TP SDU that will be received.
    \param[out]  bufferSizePtr  length of the available receive buffer in Cdd.\n
                                This parameter is used e.g. in CanTp to calculate the Block Size (BS).
    \return      a BufReq_ReturnType constant of ComStackTypes.h.
    \pre         The Cdd is initialized and active.
    \context     This function can be called on interrupt and task level and has not to be interrupted by other\n
                 Cdd_StartOfReception calls for the same id.
    \note        The function is called by the PduR.
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, CDD_CODE) Cdd_StartOfReception(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, CDD_APPL_DATA) info, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, CDD_APPL_DATA) bufferSizePtr);

/**********************************************************************************************************************
  Cdd_CopyRxData
**********************************************************************************************************************/
/** \brief       This function is called to trigger the copy process of a segmented PDU.\n
                 The function can be called several times and\n
                 each call to this function copies parts of the received data.\n
    \param[in]   id             id of the TP CddPduRUpperLayerRxPdu.
    \param[in]   info           a PduInfoType pointing to the data to be copied in the Cdd data buffer.
    \param[out]  bufferSizePtr  available receive buffer after data has been copied.
    \return      a BufReq_ReturnType constant of ComStackTypes.h.      
    \pre         The Cdd is initialized and active.
    \context     This function can be called on interrupt and task level and has not to be interrupted by other\n
                 Cdd_CopyRxData calls for the same id.
    \note        The function is called by the PduR.
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, CDD_CODE) Cdd_CopyRxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, CDD_APPL_DATA) info, P2VAR(PduLengthType, AUTOMATIC, CDD_APPL_DATA) bufferSizePtr);

/**********************************************************************************************************************
  Cdd_TpRxIndication
**********************************************************************************************************************/
/** \brief       The function is called to indicate the complete receiption of a Cdd TP SDU
                 or to report an error that occurred during reception.
    \param[in]   id             id of the TP CddPduRUpperLayerRxPdu.
    \param[in]   result         a Std_ReturnType to indicate the result of the reception.
    \return      none
    \pre         The Cdd is initialized and active.
    \context     This function can be called on interrupt and task level and has not to be interrupted by other\n
                 Cdd_TpRxIndication calls for the same id.
    \note        The function is called by the PduR.
**********************************************************************************************************************/
FUNC(void, CDD_CODE) Cdd_TpRxIndication(PduIdType id, Std_ReturnType result);

/**********************************************************************************************************************
  Cdd_CopyTxData
**********************************************************************************************************************/
/** \brief       This function is called to request transmit data of a TP CddPduRUpperLayerTxPdu\n
                 The function can be called several times and\n
                 each call to this function copies the next part of the data to be transmitted.\n
    \param[in]   id             id of the TP CddPduRUpperLayerTxPdu.
    \param[in]   info           a PduInfoType pointing to the destination buffer.
    \param[in]   retry          NULL_PTR to indicate a successful copy process\n
                                or a RetryInfoType containing a TpDataStateType constant of ComStackTypes.h.
    \param       availableDataPtr   Indicates the remaining number of bytes that are available in the TX buffer.\n
                                availableDataPtr can be used by TP modules that support dynamic payload lengths\n
                                (e.g. Iso FrTp) to determine the size of the following CFs.
    \return      a BufReq_ReturnType constant of ComStackTypes.h.
    \pre         The Cdd is initialized and active.
    \context     This function can be called on interrupt and task level and has not to be interrupted by other\n
                 Cdd_CopyTxData calls for the same id.
    \note        The function is called by the PduR.
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, CDD_CODE) Cdd_CopyTxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, CDD_APPL_DATA) info, P2VAR(RetryInfoType, AUTOMATIC, CDD_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, CDD_APPL_DATA) availableDataPtr);

/**********************************************************************************************************************
  Cdd_TpTxConfirmation
**********************************************************************************************************************/
/** \brief       The function is called to confirm a successful transmission of a TP CddPduRUpperLayerTxPdu\n
                 or to report an error that occurred during transmission.
    \param[in]   id             id of the TP CddPduRUpperLayerTxPdu.
    \param[in]   result         a Std_ReturnType to indicate the result of the transmission.
    \return      none
    \pre         The Cdd is initialized and active.
    \context     This function can be called on interrupt and task level and has not to be interrupted by other\n
                 Cdd_TpTxConfirmation calls for the same id.
    \note        The function is called by the PduR.
**********************************************************************************************************************/
FUNC(void, CDD_CODE) Cdd_TpTxConfirmation(PduIdType id, Std_ReturnType result);

/*\}*/


# define CDD_STOP_SEC_CODE
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"    /* PRQA S 5087 */       /* MD_MSR_19.1 */
/*lint -restore */

#endif  /* CDD_CBK_H */
/**********************************************************************************************************************
  END OF FILE: Cdd_Cbk.h
**********************************************************************************************************************/


