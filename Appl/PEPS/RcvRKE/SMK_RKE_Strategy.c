/* CARNES interface include */
/* ======================== */

#include "type.h"
#include "define.h"
#include "timer.h"
#include "data.h"
#include "pj_define.h"
#include "eeprom.h"

#include "encryption.h"
#include "SMK_RFIC.h"
#include "AES128.h"

#include "SMK_RKE_Strategy_Type.h"
#include "SMK_RKE_Strategy.h"


u32 Get_RKESynchronizationCounter(void);
u32 Get_CurrentRollingCode(void);

/*******************************************************************************
	Declare  Variables
*******************************************************************************/
/* INPUT OUTPUT ------------------------------------------------------------------------*/
tSMK_RKE_STRATEGY	SMK_RKE_STRATEGY_IF = {{0u,}};


u8 b_RKE_ConfirmWaitFlg = Off;
u8 b_RKEDataRcvEvtFlg = Off;

void Confirm_RKE_Event(void)
{
	if(	(BAT_stab_finish_flg == On) &&
		(GetX(u1g_InhibitCriticalBatt)==Off)	
	)
	{/* ���͸� ����ȭ�� �Ϸ�� ���������� ���������� ��쿡��, RKE ������� */
		b_RKEDataRcvEvtFlg = On;
		SetC(b_ValidRKEStandardframe,On);
		R_LowPower_Prevent(SMK_OUTPUT_LP_FLAG);
	}
	else
	if(BAT_stab_finish_flg == Off)
	{/* ���͸� ����ȭ �̿Ϸ� �ÿ��� pending ó���Ͽ� ���͸� ����ȭ �Ϸ� �� ���� �ǵ��� ó�� */
		b_RKE_ConfirmWaitFlg = On;
		R_LowPower_Prevent(SMK_OUTPUT_LP_FLAG);
	}
	else
	{/* MISRA */}
}

static	u8		DiagReport_RKECMD = 0u;
static	u32		u32_ExpectedRollingCode = 0u;
static	u32		u32_RKESynchronizationCounter = 0u;

/*
description	: received RKE data processing
input		: none
output		: none
*/

/* #define	Calib_RKESynchronizationCount	b_Calib_RKESynchronizationCount */


extern u8 AES128_EncryptionKey[16];

void SMK_RKE_rcv_Manager(void)
{	
	u8	fob_num;
//	u32	memo_cnt = 0u;
	u16 memo_cnt = 0u;
	
	if( (R_Diag_ForceDrive_Antena_status() == On)||
		(R_Diag_ForceDrive_ESCL_status() == On)||
		(R_Diag_ForceDrive_Output() == On)||
		(GetX(b_DIAGReqStep) > 1u)
	)
	{
		b_RKEDataRcvEvtFlg = Off;	
	}

	if(	(b_RKE_ConfirmWaitFlg == On) &&
		(BAT_stab_finish_flg == On)
	)
	{	/* pending �� RKE ó���� ������ ���, ���͸� ����ȭ �Ϸ� �� ���� �ǵ��� ó�� */
		if(GetX(u1g_InhibitCriticalBatt)==Off)	
		{
			b_RKEDataRcvEvtFlg = On;
			SetC(b_ValidRKEStandardframe,On);
			R_LowPower_Prevent(SMK_OUTPUT_LP_FLAG);
			b_RKE_ConfirmWaitFlg = Off;
		}
		else
		{
			b_RKE_ConfirmWaitFlg = Off;
		}
	}

	if(b_RKEDataRcvEvtFlg == On)
	{
		b_RKEDataRcvEvtFlg = Off;
		DiagReport_RKECMD = 0u;

		/* Decryption */
		R_Generate_Telegram_EncryptionKey(AES128_EncryptionKey);
		aes_enc_dec(RcvRKEdata.rkedata,AES128_EncryptionKey,kAES_DEC);		

		fob_num = R_Check_RKE_Serial(RcvRKEdata.rkedata, &memo_cnt);
		if(fob_num!=Par_FobNone)
		{

			RcvRKEdata.rkecmd = RcvRKEdata.rkedata[8];
			RcvRKEdata.v_low = (u8)(RcvRKEdata.rkedata[15]&1u);
			/* RcvRKEdata.rolling_cnt = (u32)(RcvRKEdata.rkedata[3]) + (u32)(RcvRKEdata.rkedata[2]<<8) + (u32)(RcvRKEdata.rkedata[1]<<16) + (u32)(RcvRKEdata.rkedata[0]<<24); */
			RcvRKEdata.rolling_cnt = (u32)(RcvRKEdata.rkedata[1]) + ((u32)(RcvRKEdata.rkedata[0])<<8);
			

			#if 0	/* FOB ������� �ÿ� Ȱ��ȭ�Ͽ� ��� by CMK */
			u32_ExpectedRollingCode = RcvRKEdata.rolling_cnt;
			#else
			u32_ExpectedRollingCode = (u32)memo_cnt+1u;
			#endif
			u32_RKESynchronizationCounter = RcvRKEdata.rolling_cnt - u32_ExpectedRollingCode;

				
			SetC(S_SRX, On);
			SetX(b_ActionByte, RcvRKEdata.rkecmd);
			SetX(b_RKEID, fob_num);

		
			if(RcvRKEdata.v_low == On)
			{
				DiagReport_RKECMD |= kBit3;	/* Low Battery */
			}
			
			if(RcvRKEdata.rkecmd==RKE_Lock)
			{
				DiagReport_RKECMD |= kBit4;	/* LOCK */
			}
			else
			if(RcvRKEdata.rkecmd==RKE_Unlock)
			{
				DiagReport_RKECMD |= kBit5;	/* UNLOCK */
			}
			else
			if(RcvRKEdata.rkecmd==RKE_Trunk)
			{
				DiagReport_RKECMD |= kBit6;	/* TRUNK */
			}
			else
			if(RcvRKEdata.rkecmd==RKE_Panic)
			{
				DiagReport_RKECMD |= kBit7;	/* PANIC */
			}
			else
			{/* MISRA */}
		}
		else
		{
			DiagReport_RKECMD = kBit2;	/* Unknown Key */
		}
	}

}

#if 0	/* not used, delete by CMK */
u32 Get_ExpectedRollingCode(void)
{/* �̻������ �������� ���� �ʿ� by CMK */
	return u32_ExpectedRollingCode;								 
}
#endif

u32 Get_RKESynchronizationCounter(void)
{
	return u32_RKESynchronizationCounter;								 
}

u32 Get_CurrentRollingCode(void)
{
	return RcvRKEdata.rolling_cnt;
}

FUNC(Std_ReturnType, SWC_RKE_CODE) Get_RF_DataAnalysis(void)
{
	return	DiagReport_RKECMD;
}


