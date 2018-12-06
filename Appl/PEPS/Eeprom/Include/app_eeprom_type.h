/******************************************************************************
 * Project      	: 	SP2 IBU
 * File Name    	: 	APP_EEPROM_Type.h
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
#ifndef	__APP_EEPROM_TYPE_H__
#define	__APP_EEPROM_TYPE_H__


/*******************************************************************************
	Define Variables Type
*******************************************************************************/
typedef struct
{
	/* INPUT  COMMUNICATION */
		
	/* INPUT  INTERNAL */

	/* OUTPUT  COMMUNICATION */
		
	/* OUTPUT  INTERNAL */
	tVAR	SMKState;					/* SMK state: Virgin, Neutralized, Learnt (EEPROM) */

	/* OUTPUT COMMON */
	tVAR	b_EEPROM_EncryptedCodeWritingFailure;
	
}tSMK_EEPROM;

#endif	/* __APP_EEPROM_TYPE_H__ */

