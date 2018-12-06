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
 *            Module: IoHwAb
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: IoHwAb_30.c
 *   Generation Time: 2018-11-23 08:59:19
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


#define IOHWAB_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

/* ===== MODULE INCLUDES ================================================== */
#include "IoHwAb.h" 
#include "IoHwAb_Cbk.h"
#include "IoHwAb_Cfg.h"


/* ===== RTE INCLUDE ====================================================== */
#include "Rte_IoHwAb.h"


/* ===== USER INCLUDES ==================================================== */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Includes>
 *********************************************************************************************************************/
/* TODO: Add user includes here */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  VERSION CHECK
 **********************************************************************************************************************/
#define IOHWAB_C_MAJOR_VERSION  (6u) 
#define IOHWAB_C_MINOR_VERSION  (1u) 
#define IOHWAB_C_PATCH_VERSION  (0u) 

#if (  (IOHWAB_CFG_MAJOR_VERSION != IOHWAB_C_MAJOR_VERSION) \
    || (IOHWAB_CFG_MINOR_VERSION != IOHWAB_C_MINOR_VERSION) )
        #error "Version numbers of IoHwAb.c and IoHwAb_Cfg.h are inconsistent!"
#endif

#if(   (IOHWAB_SW_MAJOR_VERSION != (3u)) \
    || (IOHWAB_SW_MINOR_VERSION != (0u)) )
    #error "Version numbers of IoHwAb.c and IoHwAb.h are inconsistent!"
#endif

#if(   (IOHWAB_CBK_MAJOR_VERSION != IOHWAB_C_MAJOR_VERSION) \
    || (IOHWAB_CBK_MINOR_VERSION != IOHWAB_C_MINOR_VERSION) )
    #error "Version numbers of IoHwAb.c and IoHwAb_Cbk.h are inconsistent!"
#endif



/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Macros>
 *********************************************************************************************************************/
/* TODO: Add user macros here */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Data>
 *********************************************************************************************************************/
/* TODO: Add user variables here */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

#define IOHWAB_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * IoHwAb_Init
 **********************************************************************************************************************/
/*! \brief      This method is the IoHwAb initialization function. If initialization is needed, add the code to this
 *              function.
 *  \return     void
 **********************************************************************************************************************/
FUNC(void, IOHWAB_CODE) IoHwAb_Init (void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK Initialization Code>
 *********************************************************************************************************************/
  /* TODO: Add the implementation of the initialization code here */



/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return;
} /* IoHwAb_Init() */



/**********************************************************************************************************************
 *  CLIENT/SERVER PORTS
 **********************************************************************************************************************/


/* ----- Operations Of Client/Server Port AdInterfaces_P ----- */

/**********************************************************************************************************************
 *  IoHwAb_AdInterfaces_P_GetAdiPinState
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_AdInterfaces_P_GetAdiPinState is an operation of the C/S port 
 *              AdInterfaces_P
 *  \param[in]  AdiPinRef                       Parameter 'AdiPinRef'   
 *  \param[out] AdiPinVoltage                   Parameter 'AdiPinVoltage'   
 *  \param[out] LivingPullUpVoltage             Parameter 'LivingPullUpVoltage'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_AdInterfaces_P_GetAdiPinState(
  IOHWAB_UINT8 AdiPinRef, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) AdiPinVoltage, 
  P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) LivingPullUpVoltage
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK AdInterfaces_P_GetAdiPinState>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_AdInterfaces_P_GetAdiPinState() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_AdInterfaces_P_GetAdiPinStateAll
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_AdInterfaces_P_GetAdiPinStateAll is an operation of the C/S port 
 *              AdInterfaces_P
 *  \param[out] VoltageOnAdiPins                Parameter 'VoltageOnAdiPins'   
 *  \param[out] LivingPullUpVoltage             Parameter 'LivingPullUpVoltage'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_AdInterfaces_P_GetAdiPinStateAll(
  P2VAR(VGTT_ScimAdiPinsState, AUTOMATIC, RTE_IOHWAB_APPL_VAR) VoltageOnAdiPins, 
  P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) LivingPullUpVoltage
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK AdInterfaces_P_GetAdiPinStateAll>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_AdInterfaces_P_GetAdiPinStateAll() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_AdInterfaces_P_GetPullUpState
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_AdInterfaces_P_GetPullUpState is an operation of the C/S port 
 *              AdInterfaces_P
 *  \param[out] PullUpVoltage_Living            Parameter 'PullUpVoltage_Living'   
 *  \param[out] PullUpVoltage_Parked            Parameter 'PullUpVoltage_Parked'   
 *  \param[out] PullUpVoltage_DAI1              Parameter 'PullUpVoltage_DAI1'   
 *  \param[out] PullUpVoltage_DAI2              Parameter 'PullUpVoltage_DAI2'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_AdInterfaces_P_GetPullUpState(
  P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_Living, 
  P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_Parked, 
  P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_DAI1, 
  P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PullUpVoltage_DAI2
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK AdInterfaces_P_GetPullUpState>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_AdInterfaces_P_GetPullUpState() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_AdInterfaces_P_SetPullUp
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_AdInterfaces_P_SetPullUp is an operation of the C/S port 
 *              AdInterfaces_P
 *  \param[in]  ActivateLivingPullUp            Parameter 'ActivateLivingPullUp'   
 *  \param[in]  ActivateParkedPullUp            Parameter 'ActivateParkedPullUp'   
 *  \param[in]  ActivateDAIPullUp               Parameter 'ActivateDAIPullUp'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_AdInterfaces_P_SetPullUp(
  IOHWAB_BOOL ActivateLivingPullUp, 
  IOHWAB_BOOL ActivateParkedPullUp, 
  IOHWAB_BOOL ActivateDAIPullUp
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK AdInterfaces_P_SetPullUp>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_AdInterfaces_P_SetPullUp() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port Do12VInterface_P ----- */

/**********************************************************************************************************************
 *  IoHwAb_Do12VInterface_P_GetDo12VPinsState
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_Do12VInterface_P_GetDo12VPinsState is an operation of the C/S port 
 *              Do12VInterface_P
 *  \param[in]  SelectParkedOrLivingPin         Parameter 'SelectParkedOrLivingPin'   
 *  \param[out] IsDo12VActivated                Parameter 'IsDo12VActivated'   
 *  \param[out] Do12VPinVoltage                 Parameter 'Do12VPinVoltage'   
 *  \param[out] BatteryVoltage                  Parameter 'BatteryVoltage'   
 *  \param[out] DcdcRefVoltage                  Parameter 'DcdcRefVoltage'   
 *  \param[out] DiagStatus                      Parameter 'DiagStatus'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_Do12VInterface_P_GetDo12VPinsState(
  IOHWAB_UINT8 SelectParkedOrLivingPin, 
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDo12VActivated, 
  P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Do12VPinVoltage, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, 
  P2VAR(VGTT_EcuPinVoltage_0V2, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DcdcRefVoltage, 
  P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK Do12VInterface_P_GetDo12VPinsState>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_Do12VInterface_P_GetDo12VPinsState() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_Do12VInterface_P_SetDcdc12VActive
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_Do12VInterface_P_SetDcdc12VActive is an operation of the C/S port 
 *              Do12VInterface_P
 *  \param[in]  Activation                      Parameter 'Activation'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_Do12VInterface_P_SetDcdc12VActive(
  IOHWAB_BOOL Activation
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK Do12VInterface_P_SetDcdc12VActive>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_Do12VInterface_P_SetDcdc12VActive() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_Do12VInterface_P_SetDo12VLivingActive
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_Do12VInterface_P_SetDo12VLivingActive is an operation of the C/S port 
 *              Do12VInterface_P
 *  \param[in]  Activation                      Parameter 'Activation'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_Do12VInterface_P_SetDo12VLivingActive(
  IOHWAB_BOOL Activation
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK Do12VInterface_P_SetDo12VLivingActive>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_Do12VInterface_P_SetDo12VLivingActive() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_Do12VInterface_P_SetDo12VParkedActive
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_Do12VInterface_P_SetDo12VParkedActive is an operation of the C/S port 
 *              Do12VInterface_P
 *  \param[in]  Activation                      Parameter 'Activation'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_Do12VInterface_P_SetDo12VParkedActive(
  IOHWAB_BOOL Activation
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK Do12VInterface_P_SetDo12VParkedActive>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_Do12VInterface_P_SetDo12VParkedActive() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port DobhsCtrlInterface_P_2 ----- */

/**********************************************************************************************************************
 *  IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState is an operation of the C/S port 
 *              DobhsCtrlInterface_P_2
 *  \param[out] IsDoActivated                   Parameter 'IsDoActivated'   
 *  \param[out] DoPinVoltage                    Parameter 'DoPinVoltage'   
 *  \param[out] BatteryVoltage                  Parameter 'BatteryVoltage'   
 *  \param[out] DiagStatus                      Parameter 'DiagStatus'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState(
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, 
  P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DobhsCtrlInterface_P_2_GetDobhsPinState>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DobhsCtrlInterface_P_2_GetDobhsPinState() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive is an operation of the C/S port 
 *              DobhsCtrlInterface_P_2
 *  \param[in]  Activation                      Parameter 'Activation'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive(
  IOHWAB_BOOL Activation
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DobhsCtrlInterface_P_2_SetDobhsActive>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DobhsCtrlInterface_P_2_SetDobhsActive() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port DobhsCtrlInterface_P_3 ----- */

/**********************************************************************************************************************
 *  IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState is an operation of the C/S port 
 *              DobhsCtrlInterface_P_3
 *  \param[out] IsDoActivated                   Parameter 'IsDoActivated'   
 *  \param[out] DoPinVoltage                    Parameter 'DoPinVoltage'   
 *  \param[out] BatteryVoltage                  Parameter 'BatteryVoltage'   
 *  \param[out] DiagStatus                      Parameter 'DiagStatus'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState(
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, 
  P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DobhsCtrlInterface_P_3_GetDobhsPinState>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DobhsCtrlInterface_P_3_GetDobhsPinState() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive is an operation of the C/S port 
 *              DobhsCtrlInterface_P_3
 *  \param[in]  Activation                      Parameter 'Activation'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive(
  IOHWAB_BOOL Activation
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DobhsCtrlInterface_P_3_SetDobhsActive>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DobhsCtrlInterface_P_3_SetDobhsActive() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port DobhsCtrlInterface_P_4 ----- */

/**********************************************************************************************************************
 *  IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState is an operation of the C/S port 
 *              DobhsCtrlInterface_P_4
 *  \param[out] IsDoActivated                   Parameter 'IsDoActivated'   
 *  \param[out] DoPinVoltage                    Parameter 'DoPinVoltage'   
 *  \param[out] BatteryVoltage                  Parameter 'BatteryVoltage'   
 *  \param[out] DiagStatus                      Parameter 'DiagStatus'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState(
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, 
  P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DobhsCtrlInterface_P_4_GetDobhsPinState>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DobhsCtrlInterface_P_4_GetDobhsPinState() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive is an operation of the C/S port 
 *              DobhsCtrlInterface_P_4
 *  \param[in]  Activation                      Parameter 'Activation'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive(
  IOHWAB_BOOL Activation
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DobhsCtrlInterface_P_4_SetDobhsActive>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DobhsCtrlInterface_P_4_SetDobhsActive() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port DobhsCtrlInterface_P_1 ----- */

/**********************************************************************************************************************
 *  IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState is an operation of the C/S port 
 *              DobhsCtrlInterface_P_1
 *  \param[out] IsDoActivated                   Parameter 'IsDoActivated'   
 *  \param[out] DoPinVoltage                    Parameter 'DoPinVoltage'   
 *  \param[out] BatteryVoltage                  Parameter 'BatteryVoltage'   
 *  \param[out] DiagStatus                      Parameter 'DiagStatus'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState(
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, 
  P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DobhsCtrlInterface_P_1_GetDobhsPinState>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DobhsCtrlInterface_P_1_GetDobhsPinState() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive is an operation of the C/S port 
 *              DobhsCtrlInterface_P_1
 *  \param[in]  Activation                      Parameter 'Activation'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive(
  IOHWAB_BOOL Activation
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DobhsCtrlInterface_P_1_SetDobhsActive>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DobhsCtrlInterface_P_1_SetDobhsActive() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port DowhsInterfaces_P_1 ----- */

/**********************************************************************************************************************
 *  IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne is an operation of the C/S port 
 *              DowhsInterfaces_P_1
 *  \param[in]  DoPinRef                        Parameter 'DoPinRef'   
 *  \param[out] IsDoActivated                   Parameter 'IsDoActivated'   
 *  \param[out] DoPinVoltage                    Parameter 'DoPinVoltage'   
 *  \param[out] BatteryVoltage                  Parameter 'BatteryVoltage'   
 *  \param[out] DutyCycle                       Parameter 'DutyCycle'   
 *  \param[out] Period                          Parameter 'Period'   
 *  \param[out] DiagStatus                      Parameter 'DiagStatus'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne(
  IOHWAB_UINT8 DoPinRef, 
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, 
  P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, 
  P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DowhsInterfaces_P_1_GetDoPinStateOne>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DowhsInterfaces_P_1_GetDoPinStateOne() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_DowhsInterfaces_P_1_SetDowActive
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DowhsInterfaces_P_1_SetDowActive is an operation of the C/S port 
 *              DowhsInterfaces_P_1
 *  \param[in]  OutputId                        Parameter 'OutputId'   
 *  \param[in]  Period                          Parameter 'Period'   
 *  \param[in]  DutyCycle                       Parameter 'DutyCycle'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DowhsInterfaces_P_1_SetDowActive(
  IOHWAB_UINT8 OutputId, 
  IOHWAB_UINT16 Period, 
  IOHWAB_UINT8 DutyCycle
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DowhsInterfaces_P_1_SetDowActive>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DowhsInterfaces_P_1_SetDowActive() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port DowlsInterface_P_1 ----- */

/**********************************************************************************************************************
 *  IoHwAb_DowlsInterface_P_1_GetDoPinStateOne
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DowlsInterface_P_1_GetDoPinStateOne is an operation of the C/S port 
 *              DowlsInterface_P_1
 *  \param[in]  DoPinRef                        Parameter 'DoPinRef'   
 *  \param[out] IsDoActivated                   Parameter 'IsDoActivated'   
 *  \param[out] DoPinVoltage                    Parameter 'DoPinVoltage'   
 *  \param[out] BatteryVoltage                  Parameter 'BatteryVoltage'   
 *  \param[out] DutyCycle                       Parameter 'DutyCycle'   
 *  \param[out] Period                          Parameter 'Period'   
 *  \param[out] DiagStatus                      Parameter 'DiagStatus'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DowlsInterface_P_1_GetDoPinStateOne(
  IOHWAB_UINT8 DoPinRef, 
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, 
  P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, 
  P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DowlsInterface_P_1_GetDoPinStateOne>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DowlsInterface_P_1_GetDoPinStateOne() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_DowlsInterface_P_1_SetDowlsActive
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DowlsInterface_P_1_SetDowlsActive is an operation of the C/S port 
 *              DowlsInterface_P_1
 *  \param[in]  OutputId                        Parameter 'OutputId'   
 *  \param[in]  Period                          Parameter 'Period'   
 *  \param[in]  DutyCycle                       Parameter 'DutyCycle'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DowlsInterface_P_1_SetDowlsActive(
  IOHWAB_UINT8 OutputId, 
  IOHWAB_UINT16 Period, 
  IOHWAB_SINT8 DutyCycle
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DowlsInterface_P_1_SetDowlsActive>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DowlsInterface_P_1_SetDowlsActive() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port LficICU_P ----- */

/**********************************************************************************************************************
 *  IoHwAb_LficICU_P_IcuEnableNotification
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_LficICU_P_IcuEnableNotification is an operation of the C/S port 
 *              LficICU_P
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_LficICU_P_IcuEnableNotification()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK LficICU_P_IcuEnableNotification>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_LficICU_P_IcuEnableNotification() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_LficICU_P_IcuEnableEdgeDetection
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_LficICU_P_IcuEnableEdgeDetection is an operation of the C/S port 
 *              LficICU_P
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_LficICU_P_IcuEnableEdgeDetection()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK LficICU_P_IcuEnableEdgeDetection>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_LficICU_P_IcuEnableEdgeDetection() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_LficICU_P_IcuDisableEdgeDetection
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_LficICU_P_IcuDisableEdgeDetection is an operation of the C/S port 
 *              LficICU_P
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_LficICU_P_IcuDisableEdgeDetection()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK LficICU_P_IcuDisableEdgeDetection>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_LficICU_P_IcuDisableEdgeDetection() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_LficICU_P_IcuDisableNotification
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_LficICU_P_IcuDisableNotification is an operation of the C/S port 
 *              LficICU_P
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_LficICU_P_IcuDisableNotification()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK LficICU_P_IcuDisableNotification>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_LficICU_P_IcuDisableNotification() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port RficICU_P ----- */

/**********************************************************************************************************************
 *  IoHwAb_RficICU_P_IcuEnableNotification
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_RficICU_P_IcuEnableNotification is an operation of the C/S port 
 *              RficICU_P
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_RficICU_P_IcuEnableNotification()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK RficICU_P_IcuEnableNotification>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_RficICU_P_IcuEnableNotification() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_RficICU_P_IcuEnableEdgeDetection
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_RficICU_P_IcuEnableEdgeDetection is an operation of the C/S port 
 *              RficICU_P
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_RficICU_P_IcuEnableEdgeDetection()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK RficICU_P_IcuEnableEdgeDetection>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_RficICU_P_IcuEnableEdgeDetection() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_RficICU_P_IcuDisableEdgeDetection
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_RficICU_P_IcuDisableEdgeDetection is an operation of the C/S port 
 *              RficICU_P
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_RficICU_P_IcuDisableEdgeDetection()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK RficICU_P_IcuDisableEdgeDetection>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_RficICU_P_IcuDisableEdgeDetection() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_RficICU_P_IcuDisableNotification
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_RficICU_P_IcuDisableNotification is an operation of the C/S port 
 *              RficICU_P
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_RficICU_P_IcuDisableNotification()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK RficICU_P_IcuDisableNotification>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_RficICU_P_IcuDisableNotification() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port LficNRESDio_P ----- */

/**********************************************************************************************************************
 *  IoHwAb_LficNRESDio_P_Read
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_LficNRESDio_P_Read is an operation of the C/S port 
 *              LficNRESDio_P
 *  \param[out] ReadValue                       Parameter 'ReadValue'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_LficNRESDio_P_Read(
  P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) ReadValue
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK LficNRESDio_P_Read>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_LficNRESDio_P_Read() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_LficNRESDio_P_Write
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_LficNRESDio_P_Write is an operation of the C/S port 
 *              LficNRESDio_P
 *  \param[in]  SetValue                        Parameter 'SetValue'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_LficNRESDio_P_Write(
  IOHWAB_UINT8 SetValue
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK LficNRESDio_P_Write>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_LficNRESDio_P_Write() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port RficNRESDio_P ----- */

/**********************************************************************************************************************
 *  IoHwAb_RficNRESDio_P_Read
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_RficNRESDio_P_Read is an operation of the C/S port 
 *              RficNRESDio_P
 *  \param[out] ReadValue                       Parameter 'ReadValue'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_RficNRESDio_P_Read(
  P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) ReadValue
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK RficNRESDio_P_Read>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_RficNRESDio_P_Read() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_RficNRESDio_P_Write
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_RficNRESDio_P_Write is an operation of the C/S port 
 *              RficNRESDio_P
 *  \param[in]  SetValue                        Parameter 'SetValue'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_RficNRESDio_P_Write(
  IOHWAB_UINT8 SetValue
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK RficNRESDio_P_Write>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_RficNRESDio_P_Write() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port DowhsInterfaces_P_2 ----- */

/**********************************************************************************************************************
 *  IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne is an operation of the C/S port 
 *              DowhsInterfaces_P_2
 *  \param[in]  DoPinRef                        Parameter 'DoPinRef'   
 *  \param[out] IsDoActivated                   Parameter 'IsDoActivated'   
 *  \param[out] DoPinVoltage                    Parameter 'DoPinVoltage'   
 *  \param[out] BatteryVoltage                  Parameter 'BatteryVoltage'   
 *  \param[out] DutyCycle                       Parameter 'DutyCycle'   
 *  \param[out] Period                          Parameter 'Period'   
 *  \param[out] DiagStatus                      Parameter 'DiagStatus'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne(
  IOHWAB_UINT8 DoPinRef, 
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, 
  P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, 
  P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DowhsInterfaces_P_2_GetDoPinStateOne>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DowhsInterfaces_P_2_GetDoPinStateOne() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_DowhsInterfaces_P_2_SetDowActive
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DowhsInterfaces_P_2_SetDowActive is an operation of the C/S port 
 *              DowhsInterfaces_P_2
 *  \param[in]  OutputId                        Parameter 'OutputId'   
 *  \param[in]  Period                          Parameter 'Period'   
 *  \param[in]  DutyCycle                       Parameter 'DutyCycle'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DowhsInterfaces_P_2_SetDowActive(
  IOHWAB_UINT8 OutputId, 
  IOHWAB_UINT16 Period, 
  IOHWAB_UINT8 DutyCycle
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DowhsInterfaces_P_2_SetDowActive>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DowhsInterfaces_P_2_SetDowActive() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port DowlsInterface_P_2 ----- */

/**********************************************************************************************************************
 *  IoHwAb_DowlsInterface_P_2_GetDoPinStateOne
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DowlsInterface_P_2_GetDoPinStateOne is an operation of the C/S port 
 *              DowlsInterface_P_2
 *  \param[in]  DoPinRef                        Parameter 'DoPinRef'   
 *  \param[out] IsDoActivated                   Parameter 'IsDoActivated'   
 *  \param[out] DoPinVoltage                    Parameter 'DoPinVoltage'   
 *  \param[out] BatteryVoltage                  Parameter 'BatteryVoltage'   
 *  \param[out] DutyCycle                       Parameter 'DutyCycle'   
 *  \param[out] Period                          Parameter 'Period'   
 *  \param[out] DiagStatus                      Parameter 'DiagStatus'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DowlsInterface_P_2_GetDoPinStateOne(
  IOHWAB_UINT8 DoPinRef, 
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, 
  P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, 
  P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DowlsInterface_P_2_GetDoPinStateOne>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DowlsInterface_P_2_GetDoPinStateOne() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_DowlsInterface_P_2_SetDowlsActive
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DowlsInterface_P_2_SetDowlsActive is an operation of the C/S port 
 *              DowlsInterface_P_2
 *  \param[in]  OutputId                        Parameter 'OutputId'   
 *  \param[in]  Period                          Parameter 'Period'   
 *  \param[in]  DutyCycle                       Parameter 'DutyCycle'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DowlsInterface_P_2_SetDowlsActive(
  IOHWAB_UINT8 OutputId, 
  IOHWAB_UINT16 Period, 
  IOHWAB_SINT8 DutyCycle
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DowlsInterface_P_2_SetDowlsActive>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DowlsInterface_P_2_SetDowlsActive() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port DowlsInterface_P_3 ----- */

/**********************************************************************************************************************
 *  IoHwAb_DowlsInterface_P_3_GetDoPinStateOne
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DowlsInterface_P_3_GetDoPinStateOne is an operation of the C/S port 
 *              DowlsInterface_P_3
 *  \param[in]  DoPinRef                        Parameter 'DoPinRef'   
 *  \param[out] IsDoActivated                   Parameter 'IsDoActivated'   
 *  \param[out] DoPinVoltage                    Parameter 'DoPinVoltage'   
 *  \param[out] BatteryVoltage                  Parameter 'BatteryVoltage'   
 *  \param[out] DutyCycle                       Parameter 'DutyCycle'   
 *  \param[out] Period                          Parameter 'Period'   
 *  \param[out] DiagStatus                      Parameter 'DiagStatus'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DowlsInterface_P_3_GetDoPinStateOne(
  IOHWAB_UINT8 DoPinRef, 
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) IsDoActivated, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DoPinVoltage, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) BatteryVoltage, 
  P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DutyCycle, 
  P2VAR(IOHWAB_UINT16, AUTOMATIC, RTE_IOHWAB_APPL_VAR) Period, 
  P2VAR(VGTT_EcuPinDiagStatus, AUTOMATIC, RTE_IOHWAB_APPL_VAR) DiagStatus
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DowlsInterface_P_3_GetDoPinStateOne>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DowlsInterface_P_3_GetDoPinStateOne() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */


/**********************************************************************************************************************
 *  IoHwAb_DowlsInterface_P_3_SetDowlsActive
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_DowlsInterface_P_3_SetDowlsActive is an operation of the C/S port 
 *              DowlsInterface_P_3
 *  \param[in]  OutputId                        Parameter 'OutputId'   
 *  \param[in]  Period                          Parameter 'Period'   
 *  \param[in]  DutyCycle                       Parameter 'DutyCycle'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_DowlsInterface_P_3_SetDowlsActive(
  IOHWAB_UINT8 OutputId, 
  IOHWAB_UINT16 Period, 
  IOHWAB_SINT8 DutyCycle
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DowlsInterface_P_3_SetDowlsActive>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_DowlsInterface_P_3_SetDowlsActive() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */



/**********************************************************************************************************************
 *  SENDER/RECEIVER PORTS
 **********************************************************************************************************************/


/**********************************************************************************************************************
 *  RUNNABLES
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  IoHwAb_REIoHwAb_10ms
 **********************************************************************************************************************/
/*! \brief      The method REIoHwAb_10ms is a user defined runnable entity function that will be called
 *              every 10 msec by the RTE.
 *  \retval     void
 **********************************************************************************************************************/
FUNC(void, IOHWAB_APPL_CODE) IoHwAb_REIoHwAb_10ms(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK REIoHwAb_10ms>
 *********************************************************************************************************************/
/* TODO: Add runnable implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return;
} /* IoHwAb_REIoHwAb_10ms() */ 



/**********************************************************************************************************************
 *  SCHEDULABLES
 **********************************************************************************************************************/



/* Hint: IoHwAb_GetVersionInfo() has been removed from the code. Use the configuration switch 'IoHwAbVersionInfoApi'
   to enable it. */



/* Section for deleted/unregonized user blocks: */
#if 0
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN4Inh_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsPwm3IpsFault_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputC23_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpPwmLsPwm1Gate_PwmDutySet>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpCAN5STB_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputCAN1TermintionH2_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN1Inh_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputBatteryMon_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputCAN1TermintionH1_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpRficNres_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpPwmLsPwm4Gate_PwmDutySet>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputLsPwm3GateMonitoring_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN3Inh_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsOut1IpsFault_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLficNres_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsOut5IpsInput_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputC22_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpRegRst_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputHighSideOut4_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLINPwrIpsIn0_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsPwm1IpsFault_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputHsLin1IpsMultiSense_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLINSecurityInh_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsOut3IpsInput0_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsOut1IpsInput1_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpIoHwAbPwm_PwmDutySet>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpIPSPwrSen_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsOut1IpsInput0_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsOut3IpsFault_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsOut1IpsInput0_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsOut3IpsInput1_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpIPSPwrSel0_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpPwmHsPwm1IpsIn1_PwmDutySet>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputC6_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputUAI87_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpCAN3STB_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN5EN_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLINSecurityEN_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsOut3IpsInput1_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputUAI74_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputHsPwm3IpsCurrentSense_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputLsPwm1GateMonitoring_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpParkedPopUpCtrl_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN6Inh_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpIPSComSen_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpCAN4STB_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpCAN5STB_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLivingPopUpCtrl_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DowlsInterface_P_SetDowlsActive>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN6EN_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLINPwrIpsIn1_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN4EN_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpPwmLsPwm3Gate_PwmDutySet>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputC4_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsOut1IpsInput1_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputUAI75_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN3EN_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpRficRed_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLINSecurityEN_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DowhsInterfaces_P_GetDoPinStateOne>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpIPSComSel_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLINSecurityInh_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN2Inh_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLINPwrIpsIn1_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN1EN_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputLsPwm2GateMonitoring_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputLsPwm4GateMonitoring_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputC7_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpCAN4STB_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DowlsInterface_P_GetDoPinStateOne>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputC18_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputUAI82_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN3EN_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputC5_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputHighSideOut3_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpCAN2STB_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN6EN_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLINPwrIpsIn0_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpIPSPwrSel1_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputHsPwm1IpsCurrentSense_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpRficNres_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputD17_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpRficRed_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputHsOut5IpsCurrentSense_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN2EN_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpCAN6STB_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpCAN6STB_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpIPSPwrSel0_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputUAI81_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputUAI72_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN3Inh_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpCAN1STB_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpParkedPopUpCtrl_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLficNres_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpPwmLsPwm2Gate_PwmDutySet>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLivingPopUpCtrl_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpRegRst_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpPwmHsPwm1IpsIn0_PwmDutySet>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpPwmLsPwm5Gate_PwmDutySet>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK Pp12VDcDcEnable_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputC19_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputUAI76_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpCAN3STB_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputC20_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsOut3IpsInput0_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsOut1IpsFault_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputC21_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputHsOut1IpsCurrentSense_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN5Inh_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputCAN1TermintionL1_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputLsPwm5GateMonitoring_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpIoHwAbDio_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsOut3IpsFault_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLINPwrIpsFaultRst_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN4Inh_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpPwmRegWdtOut_PwmDutySet>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN5EN_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN6Inh_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpIPSComSen_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpIPSPwrSen_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputCAN1TermintionL2_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpCAN2STB_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK DowhsInterfaces_P_SetDowActive>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN2EN_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpIPSPwrSel1_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpIoHwAbAdc_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsPwm3IpsFault_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN4EN_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpPwmHsPwm3IpsIn0_PwmDutySet>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputD8_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsOut5IpsInput_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLINPwrIpsFaultRst_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpHsPwm1IpsFault_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpPwmHsPwm3IpsIn1_PwmDutySet>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputHighSideOut2_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpCAN1STB_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK Pp12VDcDcEnable_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN1Inh_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpIoHwAbDio_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpIPSComSel_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputUAI73_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpAdcAnalogInputHsOut3IpsCurrentSense_AdcRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN5Inh_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN1EN_DioRead>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK PpLIN2Inh_DioWrite>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

#endif


#define IOHWAB_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
 *  END OF FILE: IoHwAb_30.c
 **********************************************************************************************************************/
