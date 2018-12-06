/******************************************************************************
 * Project      	: 	SP2 IBU
 * File Name    	: 	SMK_Telegram_Type.h
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
#ifndef	__SMK_TP_TYPE_H__
#define	__SMK_TP_TYPE_H__


/*******************************************************************************
	Define Variables Type
*******************************************************************************/
typedef struct
{
	/* INPUT  INTERNAL */	
	tVAR	SMKState;								/* SMK state: Virgin, Neutralized, Learnt (EEPROM) */
	tVAR	b_SMKLearningInProgress;				/* The SMK learning is in progress */

	/* INPUT  COMMUNICATION */
	tVAR	S_DiagSession;
	tVAR	S_DiagReq;								/* Diagnostic communication request */

	/* INPUT COMMON */
	tVAR	b_Learning_RegistCnt;

	/* OUTPUT  INTERNAL */	
	tVAR	b_SSBPressEnabled;						/* User pressing the SSB event detection enabling */

	/* OUTPUT  COMMUNICATION */
	tVAR	S_TPDemodulatorResp;					/* TP Base Station to SMK command feedbacks 0 : Default, 1 : ValidTPFound, 2 : NoTPFound */

	/* OUTPUT COMMON */
	tVAR	b_TP_Already_Learnt;

}tSMK_TP;

#endif	/* __SMK_TP_TYPE_H__ */


