/*******************************************************************************
 * Project      	: 	SP2 IBU
 * File Name    	: 	type.h
 * Compiler		: 	Eclipse
 * Author       	: 	MyoungKwon Choi (mk210@seoyonelec.com)
 * Created at   	: 	2017-06-15 
 * Code Editor	: 	Source Insight (Recomended Font : D2Coding / Size 10)
 * Revision     	: 	Version 0.1
 * Copyright   	: 	(c) Copyright Seoyon Electronisc Co.Ltd. All Rights Reserved       
 * Description  	: 	This is a header file associated with a varialble type.
 *
 *******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------------------------*/
#ifndef	__TYPE_H__
#define	__TYPE_H__


/*******************************************************************************
	Define tVARs Type
*******************************************************************************/
/* Common Type defines -------------------------------------------------------*/
typedef	signed char			s8;
typedef	unsigned char		u8;
typedef	signed short		s16;
typedef	unsigned short		u16;
typedef	signed long			s32;
typedef	unsigned long		u32;
typedef	float				f32;
typedef	double				f64;

typedef unsigned char		T_UBYTE;
typedef unsigned int		T_UWORD;
typedef unsigned long		T_ULONG;
typedef signed char			T_SBYTE;
typedef signed int			T_SWORD;
typedef signed long			T_SLONG;
typedef unsigned int		T_FLAG_ARRAY;



/* Super State Type defines --------------------------------------------------*/
typedef const struct _tSTATE{
	void (*en)();
	const struct _tSTATE* (*init)();
	void (*du)();
	void (*ex)();
	unsigned char (*run)();
	const struct _tSTATE* parent;
}tSTATE;

#define MAX_STATE_STRUCT_STACK (10)


//scim
#define kMax_FOB				 0x4U
#define AUTH_RAWDATA_LEN		22U



#define	LF_GAIN_FIRST			1u
#define	LF_GAIN_OTHER			2u
#define	SEARCH_LOCATION			0x01u
#define	SEARCH_AUTHENTICATION	0x02u
#define	SEARCH_WELCOME			0x06u
#define	SEARCH_HANDSFREE		0x09u

/*
typedef struct {
	u8 new_input;
	u8 old_input;
} tVAR;
*/

typedef enum
{
	kRFIC_SysMode_Idle = 0,
	kRFIC_SysMode_RcvRKE,
	kRFIC_SysMode_RcvRF_Loca,
	kRFIC_SysMode_RcvRF_Auth,
	kRFIC_SysMode_RcvRF_WlHn,
	kRFIC_SysMode_RcvTPMS
} e_RFIC_SysMode;


typedef enum
{
	rf_SpiReq_None 					= 0x00,
	rf_SpiReq0x01_ReadFillLvRxFIFO	= 0x01,
	rf_SpiReq0x04_GetEventBytes		= 0x04,
	rf_SpiReq0x06_ReadRxFIFO		= 0x06,
	rf_SpiReq0x08_ReadSRAM_sysmode	= 0x08,	
	rf_SpiReq0x09_WriteEEPROM		= 0x09,
	rf_SpiReq0x0A_ReadEEPROM		= 0x0A,
	rf_SpiReq0x0D_SetSystemMode		= 0x0D,
	rf_SpiReq0x12_ReadROMVersion 	= 0x12,
	rf_SpiReq0x13_ReadFlashVersion 	= 0x13,
	rf_SpiReq0x15_SystemReset		= 0x15,
	rf_SpiReq0x19_ReadTemperature	= 0x19,
	rf_SpiReqModeChgIdleAndOther	= 0xF1
} e_rfic_Spi_cmd;

typedef	struct
{
	u8 	fob_serial[4];	/* 32 bit */
	u16	rssi_ant[4];	/* 40 bit */	
	u8  v_low;			/* 1 bit */	
} st_RFdata;
extern st_RFdata		RcvRFdata[kMax_FOB];
#define	Get_LocaRSSI(x,y)		((u16)(RcvRFdata[x].rssi_ant[y]&0x3FF))		/* x : FobID	y : AntNume */		

typedef	struct
{
	u8	authdata[AUTH_RAWDATA_LEN];	/* 169 bit = aes128data(128bit) + normaldata(41bit) */	
									/* 128bit	= Fob serial(32bit) + Random(16bit) + RSSI raw[ Ant1(30bit),Ant2(30bit),Ant3(20bit) ] */
									/* 41 bit	= RSSI raw[ Ant3(10bit) + Ant4(30bit) ] + v_low(1bit) */
	u8	fob_serial[4];	/* 32 bit */
	u16	random;			/* Randon 16 bit */
	u16	rssi_ant[4][3];	/* rssi (x,y,z) 30 bit * Ant Num (4ea) 120 bit*/
	u8	v_low;			/* 1 bit */
} st_RFdataAuth;	
extern st_RFdataAuth	RcvRFdataAuth;
#define	Get_AuthRSSI(x,y)		((u16)(RcvRFdataAuth.rssi_ant[x][y]&0x1FF))		/* x : AntName	y : axis */			
#define	Get_AuthRSSIcos(x,y)	((u8)((RcvRFdataAuth.rssi_ant[x][y]>>9)&0x1))	/* x : AntName	y : axis */			


typedef	struct
{
	u8 	rkedata[16];	/* 128 bit */
	u32	rolling_cnt;	/* 32 bit */
	u8	rkecmd;			/* 8 bit */
	u8	v_low;			/* 1 bit */
} st_RKEdata;  


#define	LF_ANT_RSSI_OUTPUT_ORDER_MAX	4u

extern u8	lf_antenna_RSSIOutputOrder[LF_ANT_RSSI_OUTPUT_ORDER_MAX]; 



#define	aRSSI(x,y)	Auth_RSSI[x][y]
#define	aRSSIcos(x,y)	Auth_RSSIcos[x][y]
#define	lRSSI(x,y)	Loca_RSSI[x][y]



//scim
typedef enum
{
	SharedCoil = 1,
	Always_Low
} PEPS_ImmoMode;
extern PEPS_ImmoMode ImmoMode;

extern u8	b_FobFound_OK;
extern u8	b_RkeFunction_OK;
extern u8 LFSearchCompleteFlag_test;
extern st_RKEdata RcvRKEdata;
extern u8	Buffer_DST_RxData[63];
extern u8	Buffer_DST_TxData[21];


/* SMK Calibration Support  --------------------------------------------------*/
typedef	unsigned char		CALIB_10MS;
typedef	unsigned long		CALIB_100MS;
typedef	unsigned short		CALIB_SEC;
typedef	unsigned long		CALIB_MIN;
typedef	unsigned long		CALIB_HRS;
typedef	unsigned char		CALIB_1;
typedef	unsigned short		CALIB_32;
typedef	float				CALIB_1_0;
typedef	float				CALIB_0_001;
typedef	float				CALIB_0_01;




#define	rom_tbl				const

typedef union
{
	struct
	{
		unsigned	b0: 1;
		unsigned	b1: 1;
		unsigned	b2: 1;
		unsigned	b3: 1;
		unsigned	b4: 1;
		unsigned	b5: 1;
		unsigned	b6: 1;
		unsigned	b7: 1;
		unsigned	b8: 1;
		unsigned	b9: 1;
		unsigned	b10: 1;
		unsigned	b11: 1;
		unsigned	b12: 1;
		unsigned	b13: 1;
		unsigned	b14: 1;
		unsigned	b15: 1;
	}Bit;
	u16 Word;
}stCanAppFlag;



/*******************************************************************************
	Define Timer tVARs
*******************************************************************************/
typedef struct
{
	u8	run;
	u8	time;
} tTIMER8;

typedef struct
{
	u8	run;
	u16	time;
} tTIMER16;


typedef struct
{
	u8	run;
	u32	time;
} tTIMER32;

typedef struct
{
	u8	active; 	/* prefix value : low active=0 */
	u8	on_time;	/* prefix value : sw on time   */
	u8	off_time;	/* prefix value : sw off time */
	u8	sw_status;	/* 0=deactive state 		*/
	u8	old_value;	/* old port value				*/
	u8	change; 	/* change mark				*/
	u8	counter;	/* chattering counter		*/
} sw_muxinput;

/*************** AUTOSAR API ********************/
#include "Rte_Type.h"
/*************** AUTOSAR API ********************/

#endif	/* __TYPE_H__ */
