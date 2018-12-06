/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TP.c
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim_181203_TP/SCIM_BP.dpa
 *     SW-C Type:  TP
 *  Generated at:  Tue Dec  4 10:38:27 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <TP>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_TP.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "type.h"
#include "define.h"
#include "timer.h"
#include "data.h"
#include "Dio.h"
#include "pj_define.h"

#include "SMK_TP_Type.h"
#include "SMK_TP.h"


/* INPUT OUTPUT ------------------------------------------------------------------------*/
tSMK_TP	SMK_TP_IF = {{0u,}};

u8	Buffer_DST_RxData[63] = {0,};
u8	b_DST_RxCompleteFlag = OFF;
u8	b_DST_ResponseNG = OFF;


Debug_PVT_PEPS_AntP1_X_Ctrl	PVT_PEPS_AntP1_X_Ctrl;
Debug_PVT_PEPS_AntP1_Y_Ctrl	PVT_PEPS_AntP1_Y_Ctrl;
Debug_PVT_PEPS_AntPi_X_Ctrl	PVT_PEPS_AntPi_X_Ctrl;
Debug_PVT_PEPS_AntPi_Y_Ctrl	PVT_PEPS_AntPi_Y_Ctrl;
Debug_PVT_PEPS_Logic_Ctrl		PVT_PEPS_Logic_Ctrl;

Debug_PVT_PEPS_AntP1_X			PVT_PEPS_AntP1_X;
Debug_PVT_PEPS_AntP1_Y			PVT_PEPS_AntP1_Y;
Debug_PVT_PEPS_AntPi_X			PVT_PEPS_AntPi_X;
Debug_PVT_PEPS_AntPi_Y			PVT_PEPS_AntPi_Y;


static	u8 ImmoFlag = 0;
static	u8 ImmoMenu = 0;
static	u8 ImmoStep = 0;
static	u8 ImmoOrder = 0;
static	u8 ImmoData = 0;
static	tTIMER8 	Timer_ImmoTX = {Off,0};
static	u16 TestCnt = 0;
static	u8 TestTp = 1;

void TestCANInput_TP(void);
void TestAppl_TP(void);
void TestCANOutput_TP(void);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Debug_PVT_PEPS_AntP1_X: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntP1_X_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntP1_Y: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntP1_Y_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_X: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_X_Ctrl: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_Y: Integer in interval [-8192...8191]
 * Debug_PVT_PEPS_AntPi_Y_Ctrl: Integer in interval [-8192...8191]
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Debug_PVT_PEPS_Logic_Ctrl: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_None (0U)
 *   Cx1_For_PS_only_Pi (1U)
 *   Cx2_For_PS_only_Pi_P1 (2U)
 *   Cx3_For_PS_PE_Pi_P1_P2_P3 (3U)
 *
 * Array Types:
 * ============
 * ArrayByteSize16: Array with 16 element(s) of type uint8
 * ArrayByteSize3: Array with 3 element(s) of type uint8
 * ArrayByteSize8: Array with 8 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define TP_START_SEC_CODE
#include "TP_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_SMK_TP
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 20ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl(Debug_PVT_PEPS_AntP1_X_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl(Debug_PVT_PEPS_AntP1_Y_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl(Debug_PVT_PEPS_AntPi_X_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl(Debug_PVT_PEPS_AntPi_Y_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl(Debug_PVT_PEPS_Logic_Ctrl *data)
 *   Std_ReturnType Rte_Read_b_DST_ResponseNG_R_SR(uint8 *data)
 *   Std_ReturnType Rte_Read_b_DST_RxCompleteFlag_R_SR(uint8 *data)
 *					
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X(Debug_PVT_PEPS_AntP1_X data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y(Debug_PVT_PEPS_AntP1_Y data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X(Debug_PVT_PEPS_AntPi_X data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y(Debug_PVT_PEPS_AntPi_Y data)
 *   Std_ReturnType Rte_Write_b_DST_ResponseNG_P_SR(uint8 data)
 *   Std_ReturnType Rte_Write_b_DST_RxCompleteFlag_P_SR(uint8 data)
 *   Std_ReturnType Rte_Write_st_DstBlock_P_challenge(const uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize8
 *   Std_ReturnType Rte_Write_st_DstBlock_P_encryption(const uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize16
 *   Std_ReturnType Rte_Write_st_DstBlock_P_security_key_number(const uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize3
 *   Std_ReturnType Rte_Write_st_DstBlock_P_vehicle_serial(const uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize3
 *   Std_ReturnType Rte_Write_st_DstBlock_P_write_fob_number(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetupDST_Telegram_P_CS(uint8 dst_order)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_TimeoutTxTelegram_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_SMK_TP_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TP_CODE) RE_SMK_TP(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_SMK_TP
 *********************************************************************************************************************/

	TestCANInput_TP();

	// (void)Rte_Read_R_b_DST_ResponseNG_SR(&b_DST_ResponseNG);
   (void)Rte_Read_b_DST_ResponseNG_R_SR(&b_DST_ResponseNG);

	// (void)Rte_Read_R_b_DST_RxCompleteFlag_SR(&b_DST_RxCompleteFlag);
   (void)Rte_Read_b_DST_RxCompleteFlag_R_SR(&b_DST_RxCompleteFlag);

	// (void)Rte_Read_R_SMKState_SR(&SMKState);									// TP Rev.1
	// (void)Rte_Read_R_b_Learning_RegistCnt_SR(&b_Learning_RegistCnt);	// TP Rev.1
	/* SR_Management */
	// (void)Rte_Read_R_S_TPDemodulatorResp_SR(&S_TPDemodulatorResp);		// TP Rev.1
	// (void)Rte_Read_R_b_TP_Already_Learnt_SR(&b_TP_Already_Learnt);		// TP Rev.1
	// (void)Rte_Read_R_b_SSBPressEnabled_SR(&b_SSBPressEnabled);			// TP Rev.1
	/* SR_Management */
	// (void)Rte_Read_R_b_SMKLearningInProgress_SR(&b_SMKLearningInProgress);	// TP Rev.1
	// (void)Rte_Read_R_S_DiagSession_SR(&S_DiagSession);								// TP Rev.1
	// (void)Rte_Read_R_S_DiagReq_SR(&S_DiagReq);										// TP Rev.1

	DST_Telegram_Process();
	Fob_Partnumber_Read_Control();

	// (void)Rte_Write_P_b_DST_ResponseNG_SR(b_DST_ResponseNG);
   (void)Rte_Write_b_DST_ResponseNG_P_SR(b_DST_ResponseNG);

	// (void)Rte_Write_P_b_DST_RxCompleteFlag_SR(b_DST_RxCompleteFlag);
   (void)Rte_Write_b_DST_RxCompleteFlag_P_SR(b_DST_RxCompleteFlag);

	TestAppl_TP();
	TestCANOutput_TP();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define TP_STOP_SEC_CODE
#include "TP_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

void TestCANInput_TP(void)
{
	static u8 PreviousButton = 0;

	Rte_Read_Debug_PVT_PEPS_AntP1_X_Ctrl_Debug_PVT_PEPS_AntP1_X_Ctrl(&PVT_PEPS_AntP1_X_Ctrl);
	Rte_Read_Debug_PVT_PEPS_AntP1_Y_Ctrl_Debug_PVT_PEPS_AntP1_Y_Ctrl(&PVT_PEPS_AntP1_Y_Ctrl);
	Rte_Read_Debug_PVT_PEPS_AntPi_X_Ctrl_Debug_PVT_PEPS_AntPi_X_Ctrl(&PVT_PEPS_AntPi_X_Ctrl);
	Rte_Read_Debug_PVT_PEPS_AntPi_Y_Ctrl_Debug_PVT_PEPS_AntPi_Y_Ctrl(&PVT_PEPS_AntPi_Y_Ctrl);
	Rte_Read_Debug_PVT_PEPS_Logic_Ctrl_Debug_PVT_PEPS_Logic_Ctrl(&PVT_PEPS_Logic_Ctrl);



	if(ImmoMenu == 0)
	{
		if(PreviousButton != (uint8)PVT_PEPS_Logic_Ctrl)
		{
			PreviousButton = (uint8)PVT_PEPS_Logic_Ctrl;	
			ImmoMenu = (uint8)PVT_PEPS_Logic_Ctrl;
		}
		else
		{

		}	
	}
	else
	{
		
	}

	switch(ImmoMenu)
	{
		case 0:
			break;
		case 1:		// Write
			ImmoOrder = kDST_Selected_Program_Page6;
			ImmoData = (u8)PVT_PEPS_AntP1_X_Ctrl;
			break;
		case 2:		// Read
			ImmoOrder = kDST_General_Read_Page6;
			ImmoData = (u8)PVT_PEPS_AntP1_X_Ctrl;
			break;
		default:
			break;

	}

}

void TestAppl_TP(void)
{
	static u8 IrcChecker = 0;
	static u8 preMenu = 0;
	static u8 TestApplCnt = 0;
/*
	if(preMenu == ImmoMenu)
	{
		ImmoMenu = 0;
	}
	else
	{
		preMenu = ImmoMenu;
	}
*/

	if(ImmoMenu != 0)
	{
		switch(ImmoStep)
		{
			case 0:
				Test_SetupDST_Telegram(ImmoOrder, ImmoData);

				ImmoStep = 1;
				break;
			case 1:
				if(TestApplCnt >= 1)
				{
					TestApplCnt = 0;
					ImmoStep = 2;
				}
				else
				{
					TestApplCnt++;
				}
				break;
			case 2:
				DST_TX_ISR();

				if(ImmoMenu == 2)
				{
					ImmoFlag = 1;
				}

				ImmoMenu = 0;
				ImmoStep = 0;
				ImmoOrder = 0;
				ImmoData = 0;
				break;
			default:
				break;
		}
	}
	


	if(Dio_ReadChannel(DioConf_DioChannel_LFIC_IRQ) == 1)
	{
		if(IrcChecker >= 5)
		{
			lfic_global_status_check();
		}
		else
		{
			IrcChecker++;
		}
	}
	else
	{
		IrcChecker = 0;
	}

}

void TestCANOutput_TP(void)
{
	static u8 cnt = 0;

	if(cnt >= 5)
	{
		cnt = 0;
/*
		if(ImmoFlag == 1)
		{
			if((ImmoMenu == 2) && (PVT_PEPS_AntP1_X != (Debug_PVT_PEPS_AntP1_X)Buffer_DST_RxData[2]))
			{
				PVT_PEPS_AntP1_X = (Debug_PVT_PEPS_AntP1_X)Buffer_DST_RxData[2];
			}

			ImmoFlag = 0;
			ImmoMenu = 0;

		}
*/
		if(ImmoFlag == 1)
		{
			ImmoFlag = 0;

			if(Buffer_DST_RxData[2] > 15)
			{
				ImmoMenu = 2;
			}
			else
			{	
				PVT_PEPS_AntP1_X = (Debug_PVT_PEPS_AntP1_X)Buffer_DST_RxData[2];

				Rte_Write_Debug_PVT_PEPS_AntP1_X_Debug_PVT_PEPS_AntP1_X(PVT_PEPS_AntP1_X);
				Rte_Write_Debug_PVT_PEPS_AntP1_Y_Debug_PVT_PEPS_AntP1_Y(PVT_PEPS_AntP1_Y);
				Rte_Write_Debug_PVT_PEPS_AntPi_X_Debug_PVT_PEPS_AntPi_X(PVT_PEPS_AntPi_X);
				Rte_Write_Debug_PVT_PEPS_AntPi_Y_Debug_PVT_PEPS_AntPi_Y(PVT_PEPS_AntPi_Y);
			}
		}
	}
	else
	{
		cnt++;
	}
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
