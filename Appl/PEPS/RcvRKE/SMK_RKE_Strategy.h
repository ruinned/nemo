/******************************************************************************
 * Project      	: 	SP2 IBU
 * File Name    	: 	SMK_RKE_Strategy.h
 * Compiler			: 	Eclipse
 * Author       	: 	MyoungKwon Choi (mk210@seoyonelec.com)
 * Created at   	: 	2017-06-23
 * Code Editor		: 	Source Insight (Recomended Font : D2Coding / Size 10)
 * Revision     	: 	Version 0.1
 * Copyright  	 	: 	Copyright Seoyon Electronics Co.Ltd. All Rights Reserved
 * Description  	: 	
 *
 ******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------------------------*/
#ifndef	__SMK_RKE_STRATEGY_H__
#define	__SMK_RKE_STRATEGY_H__


/*******************************************************************************
	Declare External  Function
*******************************************************************************/
extern void SMK_RKE_rcv_Manager(void);
extern void Confirm_RKE_Event(void);


	
/*******************************************************************************
	Declare External  Variables
*******************************************************************************/
extern	tSMK_RKE_STRATEGY	SMK_RKE_STRATEGY_IF;

/* Internal Variables */
extern u8 b_RKE_ConfirmWaitFlg;
extern u8 b_RKEDataRcvEvtFlg;

extern u8 BAT_stab_finish_flg;


/*******************************************************************************
	Define  Variables
*******************************************************************************/
/* INPUT INTERNAL */
#define b_DIAGReqStep						SMK_RKE_STRATEGY_IF.b_DIAGReqStep

/* INPUT COMMON */
#define u1g_InhibitCriticalBatt				SMK_RKE_STRATEGY_IF.u1g_InhibitCriticalBatt

/* OUTPUT  COMMUNICATION */
#define S_SRX								SMK_RKE_STRATEGY_IF.S_SRX

/* OUTPUT COMMON */
#define b_ActionByte						SMK_RKE_STRATEGY_IF.b_ActionByte
#define b_RKEID								SMK_RKE_STRATEGY_IF.b_RKEID
#define b_ValidRKEStandardframe				SMK_RKE_STRATEGY_IF.b_ValidRKEStandardframe


/*******************************************************************************
	Define Parameter                                                            
*******************************************************************************/



/*******************************************************************************
	Define Constant and Macro
*******************************************************************************/
/*************** AUTOSAR API ********************/
#include "Rte_SWC_RKE.h"
/*************** AUTOSAR API ********************/
/* Client Server Interface */
#define R_LowPower_Prevent(Id)					Rte_Call_R_LowPower_Prevent(Id)
#define R_Check_RKE_Serial(rcv_data, counter)	Rte_Call_R_Check_RKE_Serial_CS(rcv_data, counter)
#define R_Diag_ForceDrive_ESCL_status()			Rte_Call_R_Diag_ForceDrive_ESCL_status_CS()
#define R_Diag_ForceDrive_Antena_status()		Rte_Call_R_Diag_ForceDrive_Antena_status_CS()
#define R_Diag_ForceDrive_Output()				Rte_Call_R_Diag_ForceDrive_Output_CS()
#define R_Generate_Telegram_EncryptionKey(data)	Rte_Call_R_Generate_Telegram_EncryptionKey_CS(data)

#endif	/* __SMK_RKE_STRATEGY_H__ */


