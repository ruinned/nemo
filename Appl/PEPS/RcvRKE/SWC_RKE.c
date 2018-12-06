/*******************************************************************************
**                       AVIN SYSTEMS PVT LTD                                 **
********************************************************************************
** Copyright (C) AVIN SYSTEMS PVT LTD 2015 - All Rights Reserved              **
** Unauthorized copying of this file, via any medium is strictly prohibited   **
** Auto generated file, editing this file manually is strictly not allowed    **
*******************************************************************************/
/* Generate On : ¸ñ 10¿ù 12 2017 17:57:19 KST                                 */
/* Generate from : D:/MK/SP2/e_sp2_ibu_asr_swp_R171012_r2_CMK                 */
#include "Rte_SWC_RKE.h"

/* PROTECTED REGION START ID(User Defined File Inclusion):(SWC_RKE) */
/* Start of user defined code  - Do not remove this comment */
#include "Type.h"
#include "Define.h"
#include "Timer.h"
#include "Data.h"
#include "pj_define.h"
#include "Eeprom.h"


#include "SMK_RKE_Strategy_Type.h"
#include "SMK_RKE_Strategy.h"
/* End of user defined code - Do not remove this comment */
/* PROTECTED REGION END ID(User Defined File Inclusion):(SWC_RKE) */

/* PROTECTED REGION START ID(User Defined Constants):(SWC_RKE) */
/* Start of user defined code  - Do not remove this comment */
/* End of user defined code - Do not remove this comment */
/* PROTECTED REGION END ID(User Defined Constants):(SWC_RKE) */

/* PROTECTED REGION START ID(User Defined Global Variables):(SWC_RKE) */
/* Start of user defined code  - Do not remove this comment */
/* End of user defined code - Do not remove this comment */
/* PROTECTED REGION END ID(User Defined Global Variables):(SWC_RKE) */

#define SWC_RKE_START_SEC_CODE
#include "SWC_RKE_MemMap.h"

FUNC(void, SWC_RKE_CODE) RE_SMK_RKE_rcv_Manager(void) 
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	/* *****Local Variable Declaration for Rte Read/IRead/DRead/Receive API***** */
	#if 0
	VAR(tVAR, AUTOMATIC) RE_SMK_RKE_rcv_Manager_0;
	VAR(tVAR, AUTOMATIC) RE_SMK_RKE_rcv_Manager_1;
	/* *****Local Variable Declaration for Rte Write/IWrite/Send API***** */
	VAR(tVAR, AUTOMATIC) RE_SMK_RKE_rcv_Manager_0;
	VAR(tVAR, AUTOMATIC) RE_SMK_RKE_rcv_Manager_1;
	VAR(tVAR, AUTOMATIC) RE_SMK_RKE_rcv_Manager_2;
	VAR(tVAR, AUTOMATIC) RE_SMK_RKE_rcv_Manager_3;
	VAR(tVAR, AUTOMATIC) RE_SMK_RKE_rcv_Manager_4;
	VAR(Std_ReturnType, AUTOMATIC) retRE_SMK_RKE_rcv_Manager_0;
	VAR(Std_ReturnType, AUTOMATIC) retRE_SMK_RKE_rcv_Manager_1;
	VAR(Std_ReturnType, AUTOMATIC) retRE_SMK_RKE_rcv_Manager_0;
	VAR(Std_ReturnType, AUTOMATIC) retRE_SMK_RKE_rcv_Manager_1;
	VAR(Std_ReturnType, AUTOMATIC) retRE_SMK_RKE_rcv_Manager_2;
	VAR(Std_ReturnType, AUTOMATIC) retRE_SMK_RKE_rcv_Manager_3;
	VAR(Std_ReturnType, AUTOMATIC) retRE_SMK_RKE_rcv_Manager_4;
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_SMK_RKE_rcv_Manager) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_SMK_RKE_rcv_Manager) */
	
	/* **********************Rte Read/IRead/DRead/Receive API************************ */
	
	retRE_SMK_RKE_rcv_Manager_0 = Rte_Read_R_b_DIAGReqStep_SR(&RE_SMK_RKE_rcv_Manager_0);
	
	retRE_SMK_RKE_rcv_Manager_1 = Rte_Read_R_u1g_InhibitCriticalBatt_SR(&RE_SMK_RKE_rcv_Manager_1);
	
	/* **********************Rte Write/IWrite/Send API************************ */
	
	retRE_SMK_RKE_rcv_Manager_0 = Rte_Write_P_S_SRX_SR(&RE_SMK_RKE_rcv_Manager_0);
	
	retRE_SMK_RKE_rcv_Manager_1 = Rte_Write_P_b_ActionByte_SR(&RE_SMK_RKE_rcv_Manager_1);
	
	retRE_SMK_RKE_rcv_Manager_2 = Rte_Write_P_b_LowBatteryBitSet_SR(&RE_SMK_RKE_rcv_Manager_2);
	
	retRE_SMK_RKE_rcv_Manager_3 = Rte_Write_P_b_RKEID_SR(&RE_SMK_RKE_rcv_Manager_3);
	
	retRE_SMK_RKE_rcv_Manager_4 = Rte_Write_P_b_ValidRKEStandardframe_SR(&RE_SMK_RKE_rcv_Manager_4);
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_SMK_RKE_rcv_Manager) */
	/* Start of user defined code  - Do not remove this comment */
	#endif

	(void)Rte_Read_R_b_DIAGReqStep_SR(&b_DIAGReqStep);
	(void)Rte_Read_R_u1g_InhibitCriticalBatt_SR(&u1g_InhibitCriticalBatt);
	/* SR_Management */
	(void)Rte_Read_R_S_SRX_SR(&S_SRX);
	(void)Rte_Read_R_b_ValidRKEStandardframe_SR(&b_ValidRKEStandardframe);
	/* SR_Management */
	
	SMK_RKE_rcv_Manager();

	(void)Rte_Write_P_b_ActionByte_SR(&b_ActionByte);
	(void)Rte_Write_P_b_RKEID_SR(&b_RKEID);
	
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_SMK_RKE_rcv_Manager) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_RKE_STOP_SEC_CODE
#include "SWC_RKE_MemMap.h"

#define SWC_RKE_START_SEC_CODE
#include "SWC_RKE_MemMap.h"

FUNC(void, SWC_RKE_CODE) RE_Confirm_RKE_Event(void)
{
	(void)Rte_Read_R_u1g_InhibitCriticalBatt_SR(&u1g_InhibitCriticalBatt);
	
	Confirm_RKE_Event();
}

#define SWC_RKE_STOP_SEC_CODE
#include "SWC_RKE_MemMap.h"



