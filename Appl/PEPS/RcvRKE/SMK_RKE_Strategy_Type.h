/******************************************************************************
 * Project      	: 	SP2 IBU
 * File Name    	: 	SMK_RKE_Strategy_Type.h
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
#ifndef	__SMK_RKE_STRATEGY_TYPE_H__
#define	__SMK_RKE_STRATEGY_TYPE_H__


/*******************************************************************************
	Define Variables Type
*******************************************************************************/
typedef struct
{
	/* INPUT INTERNAL */
	tVAR	b_DIAGReqStep;
	
	/* INPUT COMMON */
	tVAR	u1g_InhibitCriticalBatt;

	/* OUTPUT  COMMUNICATION */
	tVAR	S_SRX;

	/* OUTPUT COMMON */
	tVAR	b_ActionByte;							/* Legacy code ÀÇ kb_RKECMD */
	tVAR	b_RKEID;								/* Legacy code ÀÇ kb_RKEID */
	tVAR	b_ValidRKEStandardframe;				/* Correct RKE frame received (Fix code ignored) */

}tSMK_RKE_STRATEGY;

#endif	/* __SMK_RKE_STRATEGY_TYPE_H__ */

