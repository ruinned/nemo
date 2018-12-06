/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Telegram.c
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim/SCIM_BP.dpa
 *     SW-C Type:  Telegram
 *  Generated at:  Sat Dec  1 17:13:17 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <Telegram>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * IOHWAB_UINT8
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *
 * Component Types:
 * ================
 * Telegram
 *   This Application SWC is for Telegram function.
 *      
 *
 *
 * Runnable Entities:
 * ==================
 * RE_Clear_HighFixCheckTimer
 *   This runnable is to cancel and start timer_rficIRQHighTimeout.
 *
 * RE_Set_ValidFobFoundResult
 *   This runnable is to set valid fob found result.
 *
 *********************************************************************************************************************/

#include "Rte_Telegram.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "string.h"
#include "type.h"
#include "define.h"
#include "timer.h"
#include "data.h"

//#include "SMK_LFIC.h"
//#include "SMK_RFIC.h"

#include "SMK_Telegram_Type.h"
#include "SMK_Telegram.h"
#include "cdd_lfic_drv.h"

u8 DrvOutput_enable = 0;
u8 AstOutput_enable = 0;
u8 DashOutput_enable = 0;
u8 BPillarOutput_enable = 0;
u8 GainWrite_enable = 0;
u8 GainRead_enable = 0;

extern uint16	VDS_TargetVolt; 
extern uint8	Antena_P1_Gain;
extern uint8	Antena_P3_Gain;
extern uint8	Antena_P2_Gain;
extern uint8 	Antena_P4_Gain;

extern uint8 Get_LFGainValue(uint8 mode, uint8 search, uint8 ant_index);

u8 rfic_SysModeConfirmValue = 0;

u8 fob_cnt = 0u;
static u16 TestCounter = 0;

tSMK_TELEGRAM	SMK_TELEGRAM_IF;


Debug_PVT_PEPS_Ant_Ctrl 		PVT_PEPS_Ant_Ctrl=0;
Debug_PVT_PEPS_AntCtrl_stat 	PVT_PEPS_AntCtrl_stat=0;
Debug_PVT_PEPS_Logic_stat		PVT_PEPS_Logic_stat=0;

Debug_PVT_PEPS_GainP1_Ctrl  	PVT_PEPS_GainP1_Ctrl=0;
Debug_PVT_PEPS_GainP2_Ctrl 	  	PVT_PEPS_GainP2_Ctrl=0;
Debug_PVT_PEPS_GainP3_Ctrl  	PVT_PEPS_GainP3_Ctrl=0;
Debug_PVT_PEPS_GainP4_Ctrl  	PVT_PEPS_GainP4_Ctrl=0;
Debug_PVT_PEPS_GainP1_stat 		PVT_PEPS_GainP1_stat=0;
Debug_PVT_PEPS_GainP2_stat 		PVT_PEPS_GainP2_stat=0;
Debug_PVT_PEPS_GainP3_stat 		PVT_PEPS_GainP3_stat=0;
Debug_PVT_PEPS_GainP4_stat 		PVT_PEPS_GainP4_stat=0;

Debug_PVT_PEPS_VDSI_Ctrl 		PVT_PEPS_VDSI_Ctrl=0;    //unsigned 필요?
Debug_PVT_PEPS_VDSI_stat 		PVT_PEPS_VDSI_stat=0;

Debug_PVT_PEPS_P1_MaxRSSI 	 	PVT_PEPS_P1_MaxRSSI=0;
Debug_PVT_PEPS_P2_MaxRSSI 	 	PVT_PEPS_P2_MaxRSSI=0;
Debug_PVT_PEPS_P3_MaxRSSI 	 	PVT_PEPS_P3_MaxRSSI=0;
Debug_PVT_PEPS_P4_MaxRSSI 	 	PVT_PEPS_P4_MaxRSSI=0;



void TestCANInput(void); //Panel에서 신호를 쏴주면 그걸 여기에서 받음. 내부 변수에 세팅 끝.
void TestAppl(void); // lf를 쏴라 마라에 대한 입력 (App 대신) 젤 위 R_StartLF_Telegram, R_b_FobSearch
void TestCANOutput(void); // CAN Input Gain값 변경, RSSI와 같은,내부 변수에서 셋팅된 값을  CAN Output하는 역할 

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
 * Debug_PVT_PEPS_GainP1_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP1_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP2_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP2_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP3_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP3_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP4_Ctrl: Integer in interval [0...255]
 * Debug_PVT_PEPS_GainP4_stat: Integer in interval [0...255]
 * Debug_PVT_PEPS_Logic_stat: Integer in interval [0...7]
 * Debug_PVT_PEPS_P1_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_P2_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_P3_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_P4_MaxRSSI: Integer in interval [0...511]
 * Debug_PVT_PEPS_VDSI_Ctrl: Integer in interval [0...1023]
 * Debug_PVT_PEPS_VDSI_stat: Integer in interval [0...1023]
 * IOHWAB_UINT8: Integer in interval [0...255]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Debug_PVT_PEPS_AntCtrl_stat: Enumeration of integer in interval [-4...3] with enumerators
 *   Cx4_PEPS_AntCtrl_P3_Antenna (-4)
 *   Cx5_PEPS_AntCtrl_P4_Antenna (-3)
 *   Cx0_PEPS_AntCtrl_None (0)
 *   Cx1_PEPS_AntCtrl_Pi_Antenna (1)
 *   Cx2_PEPS_AntCtrl_P1_Antenna (2)
 *   Cx3_PEPS_AntCtrl_P2_Antenna (3)
 * Debug_PVT_PEPS_Ant_Ctrl: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_None (0U)
 *   Cx1_Pi_Antenna (1U)
 *   Cx2_P1_Antenna (2U)
 *   Cx3_P2_Antenna (3U)
 *   Cx4_P3_Antenna (4U)
 *   Cx5_P4_Antenna (5U)
 *
 * Array Types:
 * ============
 * ArrayByteSize32: Array with 32 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define Telegram_START_SEC_CODE
#include "Telegram_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_Clear_HighFixCheckTimer
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <ClearHighFixCheckTimer_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_Clear_HighFixCheckTimer(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_Clear_HighFixCheckTimer_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Telegram_CODE) RE_Clear_HighFixCheckTimer(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_Clear_HighFixCheckTimer
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_SMK_Telegram
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl(Debug_PVT_PEPS_Ant_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl(Debug_PVT_PEPS_GainP1_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl(Debug_PVT_PEPS_GainP2_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl(Debug_PVT_PEPS_GainP3_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl(Debug_PVT_PEPS_GainP4_Ctrl *data)
 *   Std_ReturnType Rte_Read_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl(Debug_PVT_PEPS_VDSI_Ctrl *data)
 *   Std_ReturnType Rte_Read_RficSysModeConfirm_P_SR_RficSysModeConfirm(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat(Debug_PVT_PEPS_AntCtrl_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat(Debug_PVT_PEPS_GainP1_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat(Debug_PVT_PEPS_GainP2_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat(Debug_PVT_PEPS_GainP3_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat(Debug_PVT_PEPS_GainP4_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat(Debug_PVT_PEPS_Logic_stat data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI(Debug_PVT_PEPS_P1_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI(Debug_PVT_PEPS_P2_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI(Debug_PVT_PEPS_P3_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI(Debug_PVT_PEPS_P4_MaxRSSI data)
 *   Std_ReturnType Rte_Write_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat(Debug_PVT_PEPS_VDSI_stat data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_LfICInit_P_CS(uint8 Gain_vehicleOption)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_LficNRESDio_R_Write(IOHWAB_UINT8 SetValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Dio_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_RficInit_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SearchSysMode_P_CS(uint8 RFIC_SystemMode, uint8 RFIC_ReqCmd)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetupLfTelegram_P_CS(uint8 b_AntenaIndex, uint8 b_SearchPattern, uint16 Counter_LFRawDataBit, const uint8 *Buffer_LFRawData)
 *     Argument Buffer_LFRawData: uint8* is of type ArrayByteSize32
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_StopLfPeriodicTelegram_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_TimeoutTxTelegram_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_rficIRQActiveCheck_P_CS(uint8 kb_TerminalControlState)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_rficIRQPendingCheck_P_CS(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_SMK_Telegram_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Telegram_CODE) RE_SMK_Telegram(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_SMK_Telegram
 *********************************************************************************************************************/
#if 0
	Rte_Read_RficSysModeConfirm_P_SR_RficSysModeConfirm(&rfic_SysModeConfirmValue)
#endif	
	// 10ms triggered.
  	TestCANInput(); 
   TestAppl(); 
	LF_RF_Telegram_Process(); 
//	Request_Antena_Drive(); 
//	rfic_SysModeChange();	
	TestCANOutput(); 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_Set_ValidFobFoundResult
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <SetValidFobFoundResult_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_Set_ValidFobFoundResult(uint8 fob_num)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_Set_ValidFobFoundResult_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Telegram_CODE) RE_Set_ValidFobFoundResult(uint8 fob_num) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_Set_ValidFobFoundResult
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Telegram_STOP_SEC_CODE
#include "Telegram_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

void TestCANInput(void) //Panel에서 신호를 쏴주면 그걸 여기에서 받음. 내부 변수에 세팅 끝.
{
	Rte_Read_Debug_PVT_PEPS_Ant_Ctrl_P_Debug_PVT_PEPS_Ant_Ctrl(&PVT_PEPS_Ant_Ctrl);
	Rte_Read_Debug_PVT_PEPS_VDSI_Ctrl_P_Debug_PVT_PEPS_VDSI_Ctrl(&PVT_PEPS_VDSI_Ctrl);
	Rte_Read_Debug_PVT_PEPS_GainP1_Ctrl_P_Debug_PVT_PEPS_GainP1_Ctrl(&PVT_PEPS_GainP1_Ctrl);
	Rte_Read_Debug_PVT_PEPS_GainP2_Ctrl_P_Debug_PVT_PEPS_GainP2_Ctrl(&PVT_PEPS_GainP2_Ctrl);
	Rte_Read_Debug_PVT_PEPS_GainP3_Ctrl_P_Debug_PVT_PEPS_GainP3_Ctrl(&PVT_PEPS_GainP3_Ctrl);
	Rte_Read_Debug_PVT_PEPS_GainP4_Ctrl_P_Debug_PVT_PEPS_GainP4_Ctrl(&PVT_PEPS_GainP4_Ctrl);

	switch(PVT_PEPS_Ant_Ctrl)
	{
		case 0:
			/* Antenna: none */
			break;
		case 2:
			DrvOutput_enable = On;
			break;
		case 3:
			AstOutput_enable = On;
			break;
		case 4:
			DashOutput_enable = On;
			break;
		case 5:
			BPillarOutput_enable = On;
			break;
		case 6:	// Read Gain
			GainRead_enable = On;
			break;	
		case 7:	// Write Gain
			GainWrite_enable = On;
			break;			
		default:
			/* default */
			break;
	}

	PVT_PEPS_AntCtrl_stat = PVT_PEPS_Ant_Ctrl;
}


void TestAppl(void)  
{
	if(DrvOutput_enable == On)
	{ 
		DrvOutput_enable = Off;
		StartLF_Telegram(kLF_Search_FL_Unlock);
	}
	else
	if(AstOutput_enable == On)
	{ 
		AstOutput_enable = Off;
		StartLF_Telegram(kLF_Search_FR_Unlock);
	}
	else
	if(DashOutput_enable == On)
	{ 
		DashOutput_enable = Off;
		StartLF_Telegram(kLF_Search_Authentication);
	}
	else
	if(BPillarOutput_enable == On)
	{ 
		BPillarOutput_enable = Off;
		StartLF_Telegram(kLF_Search_Trunk_Open);
	}
	else
	if(GainRead_enable == On)
	{
		GainRead_enable = Off;

		/* LF Antenna Gain Reading */	
		PVT_PEPS_GainP1_stat = Get_LFGainValue(LF_GAIN_FIRST,SEARCH_LOCATION,kANTENA_P1);		// P1
 		PVT_PEPS_GainP2_stat = Get_LFGainValue(LF_GAIN_FIRST,SEARCH_LOCATION,kANTENA_P2);		// P2
 		PVT_PEPS_GainP3_stat = Get_LFGainValue(LF_GAIN_FIRST,SEARCH_LOCATION,kANTENA_P3);	// P3
 		PVT_PEPS_GainP4_stat = Get_LFGainValue(LF_GAIN_FIRST,SEARCH_LOCATION,kANTENA_P4);			// P4
		PVT_PEPS_VDSI_stat = VDS_TargetVolt;
	}
	else
	if(GainWrite_enable == On)
	{ 
		GainWrite_enable = Off;

		/* LF Antenna Gain setting */
 		Antena_P1_Gain = PVT_PEPS_GainP1_Ctrl;			// P1
		Antena_P2_Gain = PVT_PEPS_GainP2_Ctrl;			// P2
		Antena_P3_Gain = PVT_PEPS_GainP3_Ctrl;			// P3
		Antena_P4_Gain = PVT_PEPS_GainP4_Ctrl;			// P4

		VDS_TargetVolt = PVT_PEPS_VDSI_Ctrl;
	}
	else
	{
	/* do nothing */	
	}
}


#define Par_GainReadOutputClearTime	Time_ms(150)

extern u16 Loca_RSSI[4][kANTENA_INDEX_MAX];
void TestCANOutput(void) // CAN Input Gain값 변경, RSSI와 같은,내부 변수에서 셋팅된 값을  CAN Output하는 역할 
{

	// kANTENA_INDEX_MAX = 4 (data.h)
	// fob_cnt = 1 (Global)
	/*
	kANTENA_P1
	kANTENA_P2
	kANTENA_P3
	kANTENA_P4
	*/

#if 0
	static tTIMER8 tmr_GainReadOutputClear;

	UpTimer8(tmr_GainReadOutputClear);

	PVT_PEPS_P1_MaxRSSI = (lRSSI(fob_cnt,rLH)) & 0x1FF; // P1
	PVT_PEPS_P2_MaxRSSI = (lRSSI(fob_cnt,rRH)) & 0x1FF; // P2
	PVT_PEPS_P3_MaxRSSI = (lRSSI(fob_cnt,rINT1)) & 0x1FF; // P3
	PVT_PEPS_P4_MaxRSSI = (lRSSI(fob_cnt,rTRUNK)) & 0x1FF; // P4

	Rte_Write_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat(PVT_PEPS_AntCtrl_stat);
	
	Rte_Write_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI(PVT_PEPS_P1_MaxRSSI);
	Rte_Write_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI(PVT_PEPS_P2_MaxRSSI);
	Rte_Write_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI(PVT_PEPS_P3_MaxRSSI);
	Rte_Write_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI(PVT_PEPS_P4_MaxRSSI);

	if(GainRead_enable == On)
	{ 
		GainRead_enable = Off;
		Rte_Write_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat(VDS_TargetVolt);
		Rte_Write_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat(Antena_P1_Gain);
		Rte_Write_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat(Antena_P3_Gain);
		Rte_Write_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat(Antena_P2_Gain);
		Rte_Write_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat(Antena_P4_Gain);
		StartTimer(tmr_GainReadOutputClear);
	}
	else if (tmr_GainReadOutputClear.time >= Par_GainReadOutputClearTime)
	{
		Rte_Write_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat(0x0);
		Rte_Write_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat(0x0);
		Rte_Write_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat(0x0);
		Rte_Write_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat(0x0);
		Rte_Write_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat(0x0);
		Rte_Write_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat(0x0);
		CancelTimer(tmr_GainReadOutputClear);
	}
	else
	{
	/* else */
	}
#else

	// UpTimer8(tmr_rssivalueClear)

	if(b_FobFound_OK == On)
	{
		b_FobFound_OK = Off;
		// StartTimer(tmr_rssivalueClear);
		PVT_PEPS_P1_MaxRSSI = (lRSSI(fob_cnt,kANTENA_P1)) & 0x1FF; // P1
		PVT_PEPS_P2_MaxRSSI = (lRSSI(fob_cnt,kANTENA_P2)) & 0x1FF; // P2
		PVT_PEPS_P3_MaxRSSI = (lRSSI(fob_cnt,kANTENA_P3)) & 0x1FF; // P3
		PVT_PEPS_P4_MaxRSSI = (lRSSI(fob_cnt,kANTENA_P4)) & 0x1FF; // P4

		Rte_Write_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI(PVT_PEPS_P1_MaxRSSI);
		Rte_Write_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI(PVT_PEPS_P2_MaxRSSI);
		Rte_Write_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI(PVT_PEPS_P3_MaxRSSI);
		Rte_Write_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI(PVT_PEPS_P4_MaxRSSI);
	}

	if(b_RkeFunction_OK == On)
	{
		b_RkeFunction_OK = Off;

		PVT_PEPS_Logic_stat = (RcvRKEdata.rkecmd & 0x07);
		Rte_Write_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat(PVT_PEPS_Logic_stat);
	}

	Rte_Write_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat(PVT_PEPS_AntCtrl_stat);
	
	Rte_Write_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat(PVT_PEPS_VDSI_stat);
	Rte_Write_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat(PVT_PEPS_GainP1_stat);
	Rte_Write_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat(PVT_PEPS_GainP2_stat);
	Rte_Write_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat(PVT_PEPS_GainP3_stat);
	Rte_Write_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat(PVT_PEPS_GainP4_stat);

/*
	if(TestCounter >= 10)
	{
		TestCounter = 0;

		Rte_Write_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI(0);
		Rte_Write_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI(0);
		Rte_Write_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI(0);
		Rte_Write_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI(0);

		Rte_Write_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat(0);

		Rte_Write_Debug_PVT_PEPS_AntCtrl_stat_P_Debug_PVT_PEPS_AntCtrl_stat(0);
		
		Rte_Write_Debug_PVT_PEPS_VDSI_stat_P_Debug_PVT_PEPS_VDSI_stat(0);
		Rte_Write_Debug_PVT_PEPS_GainP1_stat_P_Debug_PVT_PEPS_GainP1_stat(0);
		Rte_Write_Debug_PVT_PEPS_GainP2_stat_P_Debug_PVT_PEPS_GainP2_stat(0);
		Rte_Write_Debug_PVT_PEPS_GainP3_stat_P_Debug_PVT_PEPS_GainP3_stat(0);
		Rte_Write_Debug_PVT_PEPS_GainP4_stat_P_Debug_PVT_PEPS_GainP4_stat(0);
	}
	else
	{
		TestCounter++;
	}
*/
/*
	if(tmr_rssivalueClear.time >= 15)
	{
		CancelTimer(tmr_rssivalueClear);

		Rte_Write_Debug_PVT_PEPS_P1_MaxRSSI_P_Debug_PVT_PEPS_P1_MaxRSSI(0);
		Rte_Write_Debug_PVT_PEPS_P2_MaxRSSI_P_Debug_PVT_PEPS_P2_MaxRSSI(0);
		Rte_Write_Debug_PVT_PEPS_P3_MaxRSSI_P_Debug_PVT_PEPS_P3_MaxRSSI(0);
		Rte_Write_Debug_PVT_PEPS_P4_MaxRSSI_P_Debug_PVT_PEPS_P4_MaxRSSI(0);

		Rte_Write_Debug_PVT_PEPS_Logic_stat_P_Debug_PVT_PEPS_Logic_stat(0);
	}
*/

#endif
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
