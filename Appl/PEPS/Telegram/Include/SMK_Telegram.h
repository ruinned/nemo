#ifndef	_SMK_TELEGRAM_H
#define	_SMK_TELEGRAM_H

#define kSTOP_NOT 			0u		/* Retry 없이 다음 table의 Telegram 수행 */
#define kSTOP_SEARCH_ONE	1u		/* Fob를 하나도 못찾으면 Retry. 하나라도 찾으면 OK 설정 후 Idle step. Retry 모두 수행 시, 다음 table의 Telegram 수행 */
#define kSTOP_SEARCH_ALL	2u		/* 등록된 Fob를 모두 찾으면 OK 설정 후 Idle step, 그렇지 않으면 Retry. Retry 모두 수행 시, 다음 table의 Telegram 수행 */
#define kSTOP_ALWAYS_ONE	3u		/* Fob를 하나도 못찾으면 Retry. 하나라도 찾으면 OK 설정 후 Idle step. Retry 모두 수행 시, NG 설정 후 Idle step. */
#define kSTOP_ALWAYS_ALL	4u		/* 등록된 Fob를 모두 찾으면 OK 설정 후 Idle step. 그렇지 않으면 Retry. Retry 모두 수행 후, Fob를 하나라도 찾으면 OK, 그렇지 않으면 NG 설정 후 Idle step. */
#define kSTOP_OK			5u		/* Retry 없이 Idle step. */

#define kRETRY_0	1u
#define kRETRY_1	2u
#define kRETRY_2	3u

typedef	struct
{
	u8		AntenaIndex;
	u8		SearchPattern;
	u8		Retry;
	u8		StopCondition;
} t_LF_SearchTelegram;


#define	Xaxis	0u
#define	Yaxis	1u
#define	Zaxis	2u

#define	Fob1	0u
#define	Fob2	1u
#define	Fob3	2u
#define	Fob4	3u

typedef	struct
{
	u8 	Position[4];	
	u16	Distance[4];
	u16	RSSI[4];
} st_RSSIValidFobData;

#define	tRSSI1		0u
#define	tRSSI2		1u
#define	tRSSI3		2u
#define	tRSSI4		3u

#define	Par_RFWaitFOB1		Time_ms(40u)
#define	Par_RFWaitFOB2		Time_ms(60u)
#define	Par_RFWaitFOB3		Time_ms(80u)
#define	Par_RFWaitFOB4		Time_ms(100u)
#define	Par_RFWaitAuth		Time_ms(30u)

/* 아래 이외 Parameter 사용 시 LFIC CDD 로직 추가 변경 필요 */
#define	Par_240ms				240u
#define	Par_480ms				480u
#define	Par_720ms				720u

typedef struct
{
	u8	encryption_mode;
	u16	random_counter;
	u8	vehicle_encryption[5];
} t_EncryptionManager;


#define	kSEARCH_LOCATION		0x01u
#define	kSEARCH_AUTHENTICATION	0x02u
#define	kSEARCH_WELCOME			0x06u
#define	kSEARCH_HANDSFREE		0x09u
#define kSEARCH_FACTORY			0x0Au

#define	kSearchID_None	0u	
#define	kSearchID_Fob1	1u
#define	kSearchID_Fob2	2u
#define	kSearchID_Fob3	4u
#define	kSearchID_Fob4	8u

#define	LF_DATA_BUFFER_MAX 		32u


/* Telegram Strategy */
void LF_RF_Telegram_Process(void);
void Request_Antena_Drive(void);
void rfic_IRQ_HighFixCheck(void);
void rfic_SysModeChange(void);
void Set_ValidFobFoundResult(u8 fob_num);
void Select_SearchSysMode(void);

void PassiveEncryptionManager(void);

extern void StartLF_Telegram(u8 order);
extern u8 Get_LowBattery_FOB(void);
extern u8 Get_LF_RF_TelegramStep(void);



/*******************************************************************************
	Declare External  Variables
*******************************************************************************/
extern	tSMK_TELEGRAM	SMK_TELEGRAM_IF;

extern u8 LF_confirm_wait;
extern u8 BAT_stab_finish_flg;


/*******************************************************************************
	Define  Variables
*******************************************************************************/
/* INPUT  INTERNAL */		
#define LFSearchCompleteFlag						SMK_TELEGRAM_IF.LFSearchCompleteFlag
#define b_TailgateOption							SMK_TELEGRAM_IF.b_TailgateOption
#define	TerminalControlState						SMK_TELEGRAM_IF.TerminalControlState

/* INPUT COMMON */
#define	u1g_LF_Telegram_Output_OK					SMK_TELEGRAM_IF.u1g_LF_Telegram_Output_OK
#define	A_IGN1_IN_SMK								SMK_TELEGRAM_IF.A_IGN1_IN_SMK
#define b_SMKSleepMode								SMK_TELEGRAM_IF.b_SMKSleepMode

/* OUTPUT  COMMUNICATION */
#define S_DiagResp									SMK_TELEGRAM_IF.S_DiagResp

/* OUTPUT COMMON */
#define	b_FobSearch									SMK_TELEGRAM_IF.b_FobSearch
#define	LFRF_SearchFinishedJob						SMK_TELEGRAM_IF.LFRF_SearchFinishedJob
#define	b_LFRF_SearchFinished						SMK_TELEGRAM_IF.b_LFRF_SearchFinished
#define	b_LFOverheating								SMK_TELEGRAM_IF.b_LFOverheating
#define	b_SearchInterruptedByBatteryOrOverheating	SMK_TELEGRAM_IF.b_SearchInterruptedByBatteryOrOverheating
#define b_LowBatteryBitSet							SMK_TELEGRAM_IF.b_LowBatteryBitSet
#define	b_WelcomeSearchStatus						SMK_TELEGRAM_IF.b_WelcomeSearchStatus
#define FoundFobNb									SMK_TELEGRAM_IF.FoundFobNb


/*******************************************************************************
	Define Constant and Macro
*******************************************************************************/
/*************** AUTOSAR API ********************/
//#include "Rte_SWC_SMK_Telegram.h"
/*************** AUTOSAR API ********************/
/* Client Server Interface */
//#define R_Set_FOB_state(fob, state)				Rte_Call_R_Set_FOB_state_CS(fob, state)
//#define R_LowPower_Allow(Id)					Rte_Call_R_LowPower_Allow(Id)
//#define R_LowPower_Prevent(Id)					Rte_Call_R_LowPower_Prevent(Id)
//#define R_Check_FOB_Serial(rcv_data)			Rte_Call_R_Check_FOB_Serial_CS(rcv_data)
//#define R_Get_FOB_state(fob)					Rte_Call_R_Get_FOB_state_CS(fob)
//#define R_Get_VehicleSerial(serial)				Rte_Call_R_Get_VehicleSerial_CS(serial)
//#define R_Get_SecurityKeyNumber(skn)			Rte_Call_R_Get_SecurityKeyNumber_CS(skn)
//#define R_IsReset()								Rte_Call_R_IsReset_CS()

#endif


