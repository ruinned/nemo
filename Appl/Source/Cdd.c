/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2017 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Cdd_Com.c
 *        \brief  TODO
 *
 *      \details  TODO
 *
 *  \attention    Please note:
 *                The demo and example programs only show special aspects of the software. With regard to the fact
 *                that these programs are meant for demonstration purposes only, Vector Informatik liability shall be
 *                expressly excluded in cases of ordinary negligence, to the extent admissible by law or statute.
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  TODO                          virrro        Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  YYYY-MM-DD  virrro TODO          TODO
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "PduR.h"
/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
FUNC(void, CDD_CODE) Cdd_RxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, CDD_COM_APPL_DATA) PduInfoPtr)
{
}

FUNC(void, CDD_CODE) Cdd_TxConfirmation(PduIdType TxPduId)
{
}

FUNC(Std_ReturnType, CDD_CODE) Cdd_Transmit(PduIdType TxPduId, P2CONST(PduInfoType, AUTOMATIC, CDD_LOWER_APPL_DATA) PduInfoPtr)
{
  return E_OK;
}

FUNC(BufReq_ReturnType, CDD_CODE) Cdd_StartOfReception(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, CDD_APPL_DATA) info, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, CDD_APPL_DATA) bufferSizePtr)
{
  return BUFREQ_E_NOT_OK;
}

FUNC(BufReq_ReturnType, CDD_CODE) Cdd_CopyRxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, CDD_APPL_DATA) info, P2VAR(PduLengthType, AUTOMATIC, CDD_APPL_DATA) bufferSizePtr)
{
  return BUFREQ_E_NOT_OK;
}

FUNC(void, CDD_CODE) Cdd_TpRxIndication(PduIdType id, Std_ReturnType result)
{
}

FUNC(BufReq_ReturnType, CDD_CODE) Cdd_CopyTxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, CDD_APPL_DATA) info, P2VAR(RetryInfoType, AUTOMATIC, CDD_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, CDD_APPL_DATA) availableDataPtr)
{
  return BUFREQ_E_NOT_OK;
}

FUNC(void, CDD_CODE) Cdd_TpTxConfirmation(PduIdType id, Std_ReturnType result)
{
}
/**********************************************************************************************************************
 *  END OF FILE: Cdd_Com.c
 *********************************************************************************************************************/
