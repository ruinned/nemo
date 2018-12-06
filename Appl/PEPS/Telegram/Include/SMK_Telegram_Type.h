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
#ifndef	__SMK_TELEGRAM_TYPE_H__
#define	__SMK_TELEGRAM_TYPE_H__


/*******************************************************************************
	Define Variables Type
*******************************************************************************/
typedef struct
{
	/* INPUT  INTERNAL */
	tVAR	LFSearchCompleteFlag;					/* LF*/
	tVAR	b_TailgateOption;						/* Vehicle is in  Tailgate Option configuration. */
	tVAR	TerminalControlState;					/* Emulated terminal state correspondent to a non SMK system which uses mechanical terminal rotary switch.: OFF, ACC, IGN, START */

	/* INPUT COMMON */
	tVAR	u1g_LF_Telegram_Output_OK;
	tVAR	A_IGN1_IN_SMK;
	tVAR	b_SMKSleepMode;

	/* OUTPUT  COMMUNICATION */
	tVAR	S_DiagResp;								/* Diagnostic communication response */
	
	/* OUTPUT COMMON */
	tVAR	b_FobSearch;							/* Fob Found, No Fob Found */
	tVAR	LFRF_SearchFinishedJob;
	tVAR	b_LFRF_SearchFinished;
	tVAR	b_LFOverheating;
	tVAR	b_SearchInterruptedByBatteryOrOverheating;
	tVAR	b_LowBatteryBitSet;
	tVAR	b_WelcomeSearchStatus;
	tVAR	FoundFobNb;

}tSMK_TELEGRAM;
extern tSMK_TELEGRAM	SMK_TELEGRAM_IF;

#endif	/* __SMK_TELEGRAM_TYPE_H__ */

