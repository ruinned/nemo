/******************************************************************************
 * Project      	: 	SP2 IBU
 * File Name    	: 	Toggle_Button_Access.h
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
#ifndef	__SMK_TP_H__
#define	__SMK_TP_H__


/*******************************************************************************
	Declare External  Function
*******************************************************************************/
extern void DST_Telegram_Process(void);
extern void Fob_Partnumber_Read_Control(void);

	
/*******************************************************************************
	Declare External  Variables
*******************************************************************************/
extern	tSMK_TP	SMK_TP_IF;

/* Internal Variables */
extern u8 DST_RxDataCRC8ChkLength;
extern u8 b_DST_RxCompleteFlag;
extern u8 b_DST_ResponseNG;
// extern u8 FobPartNumber[10];


/*******************************************************************************
	Define  Variables
*******************************************************************************/
/* INPUT  INTERNAL */
#define SMKState						SMK_TP_IF.SMKState
#define b_SMKLearningInProgress			SMK_TP_IF.b_SMKLearningInProgress

/* INPUT  COMMUNICATION */
#define S_DiagSession					SMK_TP_IF.S_DiagSession
#define	S_DiagReq						SMK_TP_IF.S_DiagReq

/* INPUT COMMON */
#define b_Learning_RegistCnt			SMK_TP_IF.b_Learning_RegistCnt

/* OUTPUT  INTERNAL */	
#define	b_SSBPressEnabled				SMK_TP_IF.b_SSBPressEnabled

/* OUTPUT  COMMUNICATION */
#define S_TPDemodulatorResp				SMK_TP_IF.S_TPDemodulatorResp

/* OUTPUT COMMON */
#define b_TP_Already_Learnt				SMK_TP_IF.b_TP_Already_Learnt


/*******************************************************************************
	Define Parameter                                                            
*******************************************************************************/




/*******************************************************************************
	Define Constant and Macro
*******************************************************************************/

#if 0	// TP Rev.1

/*************** AUTOSAR API ********************/
#include "Rte_SWC_SMK_TP.h"
/*************** AUTOSAR API ********************/
/* Client Server Interface */
#define R_Reset_Encryption_Manager()					Rte_Call_R_Reset_Encryption_Manager_CS()
#define R_Check_FOB_Serial(rcv_data)					Rte_Call_R_Check_FOB_Serial_CS(rcv_data)
#define R_Store_RKE_Serial(skn, rcv_data, num, high, low)	Rte_Call_R_Store_RKE_Serial_CS(skn, rcv_data, num, high, low)
#define R_Get_VehicleSerial(serial)						Rte_Call_R_Get_VehicleSerial_CS(serial)
#define R_Get_SecurityKeyNumber(skn)						Rte_Call_R_Get_SecurityKeyNumber_CS(skn)
#define R_StoreRKEDisableCnt(FobNo, data)				Rte_Call_R_StoreRKEDisableCnt_CS(FobNo, data)

#endif

#endif	/* __SMK_TP_H__ */


