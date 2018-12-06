/*******************************************************************************
**                       AVIN SYSTEMS PVT LTD                                 **
********************************************************************************
** Copyright (C) AVIN SYSTEMS PVT LTD 2015 - All Rights Reserved              **
** Unauthorized copying of this file, via any medium is strictly prohibited   **
** Auto generated file, editing this file manually is strictly not allowed    **
*******************************************************************************/
/* Generate On : ¸ñ 9¿ù 07 2017 22:23:58 KST                                  */
/* Generate from : D:/Seoyon/05_Project/013_IBU_SP2/04_DevSrc/2_ODIN_v1.0.0/e_sp2_ibu_asr_swp_R170831*/
#include "Rte_SWC_NvM.h"

/* PROTECTED REGION START ID(User Defined File Inclusion):(SWC_NvM) */
/* Start of user defined code  - Do not remove this comment */
#include "Type.h"
#include "Define.h"
#include "Timer.h"
#include "Data.h"
#include "pj_define.h"
#include "Eeprom.h"


#include "APP_EEPROM_Type.h"
#include "APP_EEPROM.h"
/* End of user defined code - Do not remove this comment */
/* PROTECTED REGION END ID(User Defined File Inclusion):(SWC_NvM) */

/* PROTECTED REGION START ID(User Defined Constants):(SWC_NvM) */
/* Start of user defined code  - Do not remove this comment */
/* End of user defined code - Do not remove this comment */
/* PROTECTED REGION END ID(User Defined Constants):(SWC_NvM) */

/* PROTECTED REGION START ID(User Defined Global Variables):(SWC_NvM) */
/* Start of user defined code  - Do not remove this comment */
/* End of user defined code - Do not remove this comment */
/* PROTECTED REGION END ID(User Defined Global Variables):(SWC_NvM) */


extern uint8 rub_EEPROM_PARTNUM[10];
uint8 rub_EEPROM_PARTNUM_read[10];
uint8 NvMProcess_t = 0;



#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvM_10ms_Process(void) 
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/

	/* PROTECTED REGION START ID(User Defined Code):(RE_NvM_10ms_Process) */
	/* Start of user defined code  - Do not remove this comment */
	EEPROM_Control();
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvM_10ms_Process) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"


#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_BCMFUNCTION
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_BCMFUNCTION) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_BCMFUNCTION) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_BCMFUNCTION) */
	/* Start of user defined code  - Do not remove this comment */
	Callback_NVM_DATA(EEBlk_BCMFUNCTION, ServiceId, JobResult);
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_BCMFUNCTION) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"


#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_BCMOPTION
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_BCMOPTION) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_BCMOPTION) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_BCMOPTION) */
	/* Start of user defined code  - Do not remove this comment */
	Callback_NVM_DATA(EEBlk_BCMOPTION, ServiceId, JobResult);
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_BCMOPTION) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"


#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_CALIB_01
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_CALIB_01) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_CALIB_01) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_CALIB_01) */
	/* Start of user defined code  - Do not remove this comment */
	Callback_NVM_DATA(EEBlk_CALIB_01, ServiceId, JobResult);
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_CALIB_01) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"


#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_CALIB_02
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_CALIB_02) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_CALIB_02) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_CALIB_02) */
	/* Start of user defined code  - Do not remove this comment */
	Callback_NVM_DATA(EEBlk_CALIB_02, ServiceId, JobResult);
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_CALIB_02) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"


#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_CALIB_03
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_CALIB_03) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_CALIB_03) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_CALIB_03) */
	/* Start of user defined code  - Do not remove this comment */
	Callback_NVM_DATA(EEBlk_CALIB_03, ServiceId, JobResult);
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_CALIB_03) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"


#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_DTC
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_DTC) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_DTC) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_DTC) */
	/* Start of user defined code  - Do not remove this comment */
	Callback_NVM_DATA(EEBlk_DTC, ServiceId, JobResult);
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_DTC) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"


#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_FACTORY
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_FACTORY) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_FACTORY) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_FACTORY) */
	/* Start of user defined code  - Do not remove this comment */
	Callback_NVM_DATA(EEBlk_FACTORY, ServiceId, JobResult);
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_FACTORY) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"


#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_FOB
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_FOB) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_FOB) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_FOB) */
	/* Start of user defined code  - Do not remove this comment */
	Callback_NVM_DATA(EEBlk_FOB, ServiceId, JobResult);
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_FOB) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"


#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_FOB_RC
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_FOB_RC) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_FOB_RC) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_FOB_RC) */
	/* Start of user defined code  - Do not remove this comment */
	Callback_NVM_DATA(EEBlk_FOB_RC, ServiceId, JobResult);
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_FOB_RC) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"


#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_FUNCTION
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_FUNCTION) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_FUNCTION) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_FUNCTION) */
	/* Start of user defined code  - Do not remove this comment */
	Callback_NVM_DATA(EEBlk_FUNCTION, ServiceId, JobResult);
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_FUNCTION) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"


#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_LEARNT
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_LEARNT) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_LEARNT) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_LEARNT) */
	/* Start of user defined code  - Do not remove this comment */
	Callback_NVM_DATA(EEBlk_LEARNT, ServiceId, JobResult);
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_LEARNT) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"


#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_OPTION
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_OPTION) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_OPTION) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_OPTION) */
	/* Start of user defined code  - Do not remove this comment */
	Callback_NVM_DATA(EEBlk_OPTION, ServiceId, JobResult);
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_OPTION) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"


#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_PARTNUM
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_PARTNUM) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_PARTNUM) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_PARTNUM) */
	/* Start of user defined code  - Do not remove this comment */
	Callback_NVM_DATA(EEBlk_PARTNUM, ServiceId, JobResult);
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_PARTNUM) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"


#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_Par_PAS
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/

	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_PARTNUM) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_PARTNUM) */

	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_PARTNUM) */
	/* Start of user defined code  - Do not remove this comment */
	Callback_NVM_DATA(EEBlk_Par_PAS, ServiceId, JobResult);
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_PARTNUM) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
}
#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"


#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_MANUFACTURE
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_PARTNUM) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_PARTNUM) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_PARTNUM) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_PARTNUM) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
	Callback_NVM_DATA(EEBlk_MANUFACTURE, ServiceId, JobResult);
}

#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"

#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_HWVERSION
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_PARTNUM) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_PARTNUM) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_PARTNUM) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_PARTNUM) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
	Callback_NVM_DATA(EEBlk_HWVERSION, ServiceId, JobResult);
}

#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"

#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_BCMCALIB
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_PARTNUM) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_PARTNUM) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_PARTNUM) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_PARTNUM) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
	Callback_NVM_DATA(EEBlk_BCMCALIB, ServiceId, JobResult);
}

#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"

#define SWC_NvM_START_SEC_CODE
#include "SWC_NvM_MemMap.h"

FUNC(void, SWC_NvM_CODE) NvMJobFinished_ECUINFO
(
	IN VAR(uint8, AUTOMATIC) ServiceId,
	IN VAR(NvM_RequestResultType, AUTOMATIC) JobResult
)
{
	/*****************************************************************************/
	/*               Start of Runnable                                           */
	/*****************************************************************************/
	
	/* PROTECTED REGION START ID(User Defined Variable):(RE_NvMJobFinished_PARTNUM) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Variable):(RE_NvMJobFinished_PARTNUM) */
	
	/* PROTECTED REGION START ID(User Defined Code):(RE_NvMJobFinished_PARTNUM) */
	/* Start of user defined code  - Do not remove this comment */
	/* End of user defined code - Do not remove this comment */
	/* PROTECTED REGION END ID(User Defined Code):(RE_NvMJobFinished_PARTNUM) */
	/*****************************************************************************/
	/*               End of Runnable                                             */
	/*****************************************************************************/
	Callback_NVM_DATA(EEBlk_ECUINFO, ServiceId, JobResult);
}

#define SWC_NvM_STOP_SEC_CODE
#include "SWC_NvM_MemMap.h"

