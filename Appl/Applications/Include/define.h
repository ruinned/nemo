/*******************************************************************************
 * Project      	: 	SP2 IBU
 * File Name    	: 	define.h
 * Compiler		: 	Eclipse
 * Author       	: 	MyoungKwon Choi (mk210@seoyonelec.com)
 * Created at   	: 	2017-06-15 
 * Code Editor	: 	Source Insight (Recomended Font : D2Coding / Size 10)
 * Revision     	: 	Version 0.1
 * Copyright   	: 	(c) Copyright Seoyon Electronisc Co.Ltd. All Rights Reserved       
 * Description  	: 	This is a header file associated with constants & macro.
 *					
 *******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------------------------*/
#ifndef	__DEFINE_H__
#define	__DEFINE_H__


/*******************************************************************************
	Define Constants
*******************************************************************************/
#define Unknown_lowbat	0x2u

#define	kOn				(u8)1
#define	kOff			(u8)0
#define	Blinking		(u8)1
#define	On				(u8)1
#define	Off				(u8)0
#define	ON				(u8)1
#define	OFF				(u8)0
#define Pre				(u8)2
#define Multi			(u8)3
#define	_On				(u8)0
#define	_Off			(u8)1

#define	kTrue			(u8)1
#define	kFalse			(u8)0
#define	True			(u8)1
#define	False			(u8)0

#define	kHigh			(u8)1
#define	kLow			(u8)0

#define	kEnable			(u8)1
#define	kDisable		(u8)0

#define kNormal_Input	0
#define kInhibit_Input	1

#define kDefault		(u8)0
#define kNone			(u8)0
#define NoAnswer		(u8)0
#define NoRequest		(u8)0
#define Normal			(u8)0
#define Nothing			(u8)0
#define Fault			(u8)1

#define	k0km			(u8)0
#define	k3km			(u8)3
#define	k5km			(u8)5
#define	k10km			(u8)10
#define	k15km			(u8)15

#define	kBit0			0x0001U
#define	kBit1			0x0002U
#define	kBit2			0x0004U
#define	kBit3			0x0008U
#define	kBit4			0x0010U
#define	kBit5			0x0020U
#define	kBit6			0x0040U
#define	kBit7			0x0080U
#define	kBit8			0x0100U
#define	kBit9			0x0200U
#define	kBitA			0x0400U
#define	kBitB			0x0800U
#define	kBitC			0x1000U
#define	kBitD			0x2000U
#define	kBitE			0x4000U
#define	kBitF			0x8000U

#define Snsr_OFF			(u8)0
#define Snsr_ON				(u8)1
#define Snsr_Reserved		(u8)2
#define Snsr_Invalid		(u8)3


//#include "ghs_null.h"

#define	kPN_Model	(u8)0x01
#define	kPN_Option	(u8)0x02

#define	Check_PartNum	(u8)0x01
#define	Set_Option		(u8)0x02

#define	Analog_movebit	(u8)2

#define	MAX_VALUE(x, y)			((x)>(y))? (x) : (y)
#define	MIN_VALUE(x, y)			((x)<(y))? (x) : (y)

/*******************************************************************************
	Define Macro
*******************************************************************************/
#if 0
#define QAC_Report	/* QAC �����ÿ� Ȱ��ȭ */
#endif

#define	Time20msTASK_ms(x) 			((x)/20u)
#define	Time5msTASK_ms(x) 			((x)/5u)
#define	Time_ms(x)					((x)/10u)
#define	Time_sec(x)					((x)*100u)
#define	Time_min(x)					((x)*6000UL)
#define	Time_hour(x)				((u32)(x)*(u32)(60L*60L*100L))
#define	Time_day(x)					((u32)(x)*(u32)(24L*60L*60L*100L))

/* SMK Calibration Support */
#define	Calib_10ms(x)	((x))
#define	Calib_100ms(x)	((u32)(x)*10u)
#define	Calib_sec(x)	((u16)(x)*100u)
#define	Calib_min(x)	((u32)(x)*6000UL)
#define	Calib_hrs(x)	((u32)(x)*(u32)(60UL*100UL))
#define	Calib_1(x)		((x))
#define	Calib_32(x)		((u16)(x)*32u)
#define	Calib_1_0(x)	((f32)(x))
#define	Calib_0_001(x)	((f32)(x)*0.001f)
#define	Calib_0_01(x)	((f32)(x)*0.01f)
/* SMK Calibration Support - End */

#if defined(QAC_Report)
#define GetX(var)					(##var##.new_input)
#define	SetX(var,val)				{##var##.old_input = ##var##.new_input;	##var##.new_input = (val);}
//#define	SetE(var,val)				{##var##.old_input = ##var##.new_input;	##var##.new_input = (val); \
//									(void)Rte_Write_##var##_SR(&(var));}
//#define	SetC(var,val)				{##var##.old_input = ##var##.new_input;	##var##.new_input = (val); \
									(void)Rte_Call_P_##var##_CS(&(var));}
//#define	SetS(var,val)				{##var##.old_input = ##var##.new_input;	##var##.new_input = (val); \
									(void)Rte_Write_P_##var##_SR(&(var));}
#define	SetE(var,val)				
#define	SetC(var,val)				
#define	SetS(var,val)				
									

#define GetXOld(var)				(##var##.old_input)
#define	IsOnEvt(var)				((##var##.old_input!=On)&&(##var##.new_input==On))
#define	IsOffEvt(var)				((##var##.old_input!=Off)&&(##var##.new_input==Off))
#define IsChgEvt(var,val)			((##var##.old_input!=(val))&&(##var##.new_input==(val)))
#define IsChgNEvt(var,val)			((##var##.old_input==(val))&&(##var##.new_input!=(val)))
#define	IsEvt(var,old_val,new_val)	((##var##.old_input==(old_val))&&(##var##.new_input==(new_val)))
#define IsUnderEvt(var,val)			((##var##.old_input>=(val))&&(##var##.new_input<(val)))
#define IsOverEvt(var,val)			((##var##.old_input<=(val))&&(##var##.new_input>(val)))
#define	IsDiffEvt(var)				(##var##.old_input!=##var##.new_input)
#define	ClrEvt(var)					(##var##.old_input=##var##.new_input)
#else
#define GetX(var)					(##var##.new_input)
#define	SetX(var,val)				do{##var##.old_input = ##var##.new_input;	##var##.new_input = (val);}while(0)
//#define	SetE(var,val)				{##var##.old_input = ##var##.new_input; ##var##.new_input = (val); \
//									(void)Rte_Write_##var##_SR(&(var));}
//#define	SetC(var,val)				{##var##.old_input = ##var##.new_input; ##var##.new_input = (val); \
									(void)Rte_Call_P_##var##_CS(&(var));}
//#define	SetS(var,val)				{##var##.old_input = ##var##.new_input; ##var##.new_input = (val); \
									(void)Rte_Write_P_##var##_SR(&(var));}
#define	SetE(var,val)				
#define	SetC(var,val)				
#define	SetS(var,val)	

#define GetXOld(var)				(##var##.old_input)
#define	IsOnEvt(var)				((##var##.old_input!=On)&&(##var##.new_input==On))
#define	IsOffEvt(var)				((##var##.old_input!=Off)&&(##var##.new_input==Off))
#define IsChgEvt(var,val)			((##var##.old_input!=(val))&&(##var##.new_input==(val)))
#define IsChgNEvt(var,val)			((##var##.old_input==(val))&&(##var##.new_input!=(val)))
#define	IsEvt(var,old_val,new_val)	((##var##.old_input==(old_val))&&(##var##.new_input==(new_val)))
#define IsUnderEvt(var,val)			((##var##.old_input>=(val))&&(##var##.new_input<(val)))
#define IsOverEvt(var,val)			((##var##.old_input<=(val))&&(##var##.new_input>(val)))
#define	IsDiffEvt(var)				(##var##.old_input!=##var##.new_input)
#define	ClrEvt(var)					(##var##.old_input=##var##.new_input)

#endif


#endif	/* __DEFINE_H__ */
