
#include "type.h"
#include "define.h"
#include "timer.h"
#include "data.h"
#include "pj_define.h"

#include "SMK_TP_Type.h"
#include "SMK_TP.h"

/*******************************************************************************
	Declare Function Prototypes 
*******************************************************************************/


/*******************************************************************************
	Declare  Variables
*******************************************************************************/
/* INPUT OUTPUT ------------------------------------------------------------------------*/
tSMK_TP	SMK_TP_IF = {{0u,}};


u8	Buffer_DST_RxData[63] = {0,};
u8	b_DST_RxCompleteFlag = OFF;
u8	b_DST_ResponseNG = OFF;


void RE_SMK_TP(void)
{
#if 0	// TP Rev.1
	(void)Rte_Read_R_b_DST_ResponseNG_SR(&b_DST_ResponseNG);
	(void)Rte_Read_R_b_DST_RxCompleteFlag_SR(&b_DST_RxCompleteFlag);
	(void)Rte_Read_R_SMKState_SR(&SMKState);
	(void)Rte_Read_R_b_Learning_RegistCnt_SR(&b_Learning_RegistCnt);
	/* SR_Management */
	(void)Rte_Read_R_S_TPDemodulatorResp_SR(&S_TPDemodulatorResp);
	(void)Rte_Read_R_b_TP_Already_Learnt_SR(&b_TP_Already_Learnt);
	(void)Rte_Read_R_b_SSBPressEnabled_SR(&b_SSBPressEnabled);
	/* SR_Management */
	(void)Rte_Read_R_b_SMKLearningInProgress_SR(&b_SMKLearningInProgress);
	(void)Rte_Read_R_S_DiagSession_SR(&S_DiagSession);
	(void)Rte_Read_R_S_DiagReq_SR(&S_DiagReq);
#endif
	DST_Telegram_Process();
	Fob_Partnumber_Read_Control();
#if 0	// TP Rev.1
	(void)Rte_Write_P_b_DST_ResponseNG_SR(b_DST_ResponseNG);
	(vo
	id)Rte_Write_P_b_DST_RxCompleteFlag_SR(b_DST_RxCompleteFlag);
#endif
}
