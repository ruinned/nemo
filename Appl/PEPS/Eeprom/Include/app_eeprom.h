/******************************************************************************
 * Project      	: 	SP2 IBU
 * File Name    	: 	APP_EEPROM.h
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
#ifndef	__APP_EEPROM_H__
#define	__APP_EEPROM_H__


/*******************************************************************************
	Declare External  Function
*******************************************************************************/
extern void Callback_NVM_DATA(u32 rcv_source, u8 rcv_serviceId, u8 rcv_jobResult);
extern void EEPROM_Control(void);

/* Function call Interface */
extern void Init_Eeprom_OK(u32 block);


/*******************************************************************************
	Declare External  Variables
*******************************************************************************/
extern	tSMK_EEPROM	SMK_EEPROM_IF;

/* Internal Variables */

				


/*******************************************************************************
	Define  Variables
*******************************************************************************/
/* OUTPUT  INTERNAL */
#define	SMKState								SMK_EEPROM_IF.SMKState

/* OUTPUT COMMON */
#define	b_EEPROM_EncryptedCodeWritingFailure	SMK_EEPROM_IF.b_EEPROM_EncryptedCodeWritingFailure


/*******************************************************************************
	Define Parameter                                                            
*******************************************************************************/


/*******************************************************************************
	Define Constant and Macro
*******************************************************************************/
/*************** AUTOSAR API ********************/
#include "Rte_SWC_Nvm.h"
#include "Nvm.h"
/*************** AUTOSAR API ********************/
/* Client Server Interface */


#endif	/* __APP_EEPROM_H__ */


