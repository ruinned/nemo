/*******************************************************************************
 * Project      	: 	SP2 IBU
 * File Name    	: 	pj_function.c
 * Compiler		: 	Eclipse
 * Author       	: 	MyoungKwon Choi (mk210@seoyonelec.com)
 * Created at   	: 	2017-06-23
 * Code Editor	: 	Source Insight (Recomended Font : D2Coding / Size 10)
 * Revision     	: 	Version 0.1
 * Copyright   	: 	(c) Copyright Seoyon Electronics Co.Ltd. All Rights Reserved
 * Description  	: 	
 *					
 ******************************************************************************/




/*******************************************************************************
	Include Headers
*******************************************************************************/
#include "Type.h"
#include "Define.h"
#include "Data.h"
#include "pj_define.h"




/*******************************************************************************
	Declare  Variables
*******************************************************************************/
tVAR b_3rdFobOption={0u,};
tVAR b_ABS4WAvgSpeedOption={0u,};
tVAR b_AutoEnterARM_PwrTrunkTGOption={0u,};
tVAR b_BattSaveOption={0u,};
tVAR b_CANBrakeSignalOption={0u,};
tVAR b_C_CANUseOption={0u,};
tVAR b_DeactivationOption={0u,};
tVAR b_ESCLOption={0u,};
tVAR b_EVOption={0u,};
tVAR b_ExternalBuzzerOption={0u,};
tVAR b_FCEVOption={0u,};
tVAR b_FobBatteryDischargeDirectControlOption={0u,};
tVAR b_GearInputByCANOption={0u,};
tVAR b_GloveBoxTrunkLockSWOption={0u,};
tVAR b_HandFreeTrunkTGOption={0u,};
tVAR b_ImmoLampBlinkingDirectControlOption={0u,};
tVAR b_K_lineOption={0u,};
tVAR b_KeyOutLampBlinkingDirectControlOption={0u,};
tVAR b_MirrSeesawSWOption={0u,};
tVAR b_OFFIllumOption={0u,};
tVAR b_OSMirrFoldOption={0u,};
tVAR b_PpositionPWMOption={0u,};
tVAR b_PuddleOption={0u,};
/* tVAR b_PuddlePocketOption={0u,}; */
tVAR b_RearDoorButtonOption={0u,};
tVAR b_RemoteWindowOption={0u,};
tVAR b_RetractableSwOption={0u,};
tVAR b_RSPAOption={0u,};
tVAR b_SMKRKETeleCrankingOption={0u,};
tVAR b_TailgateLockUnlockOption={0u,};
tVAR b_TeleCrankingIBOXOption={0u,};
tVAR b_TeleCrankingOption={0u,};
tVAR b_ToggleButtonOption={0u,};
tVAR b_TrunkReopeningOption={0u,};
tVAR b_TwoStepsByRKEOption={0u,};
tVAR b_WelcomeLightAuthenticationOption={0u,};
tVAR b_WelcomeLightOption={0u,};
tVAR b_WelLightMirrUSMIntegrationSettingOption={0u,};
/* tVAR WelcomeSysTitleOption={0u,}; */
tVAR b_ASTAntRemoveOption={0u,};
tVAR b_ASTBtnRemoveOption={0u,};
tVAR b_SBWCheck={0u,};

tTIMER16	Timer_TwoStepsUnlock = {0u,};
tTIMER8		Timer_TrunkOpeningOutputClearWaiting = {0u,};
tTIMER32	Timer_RejectNeutralizationAndLearning = {0u,};
tTIMER8		tmr_CANeventSigOutWait = {0u,};
/* 
	Dynamic rolling radius[m] : 0.320
	Front tooth number : 46

	VehicleSpeedPulsesPerSecond = (0.320 * 2 * pi / 46) * 3600 / 1000 = 0.1573.. (kph)
*/

CALIB_0_001 DEF_CALIB_VehicleSpeedPulsesPerSecond=0.157f;
u8 DEF_CALIB_VehicleSpeedPulsesPerSecondeep=157u;
CALIB_0_001 DEF_CALIB_VehicleSpeedPulsesPerSecond_ABS=0.157f;
u8 DEF_CALIB_VehicleSpeedPulsesPerSecond_ABSeep=157u;
CALIB_0_01 DEF_CALIB_VehicleSpeedPulsesPerSecond_nonABS=1.88f;
u8 DEF_CALIB_VehicleSpeedPulsesPerSecond_nonABSeep=188u;

/*******************************************************************************
	Define Functions
*******************************************************************************/




u8 DST_Partnumber_Check(const u8 DST_PartNum[],u8 PNCondition)
{
	u8 result = Off;
	static	u8 PN_Model_1st_backup = 0x00;
	static	u8 PN_Model_2nd_backup = 0x00;

#if 0
	/* Model */
	if(	(PNCondition==kPN_Model) &&
		('0'==DST_PartNum[PartNum_1st]) &&
		('0'==DST_PartNum[PartNum_2nd])
	)
	{
		result = kOn;
		PN_Model_1st_backup = '0';
		PN_Model_2nd_backup = '0';		
	}
	else
	if(PNCondition==kPN_Model)
	{
		PN_Model_1st_backup = 0x00;
		PN_Model_2nd_backup = 0x00;
	}
	else
	{}

	/* Option */	
	if(	(PNCondition==kPN_Option) &&
		('0'==PN_Model_1st_backup) &&
		('0'==PN_Model_2nd_backup) &&
		('0'==DST_PartNum[PartNum_1st]) &&
		('0'==DST_PartNum[PartNum_2nd]) &&
		('0'==DST_PartNum[PartNum_3rd])
	)	
	{
		if(	('0'==Get_Eeprom_PARTNUM(ePartNumber)) && 
			('0'==Get_Eeprom_PARTNUM(ePartNumber+1)) &&
			((('0'==Get_Eeprom_PARTNUM(ePartNumber+2)) &&
			  ('0'==Get_Eeprom_PARTNUM(ePartNumber+3)) &&
			  ('0'==Get_Eeprom_PARTNUM(ePartNumber+4))) ||
			 (('0'==Get_Eeprom_PARTNUM(ePartNumber+2)) &&
			  ('0'==Get_Eeprom_PARTNUM(ePartNumber+3)) &&
			  ('0'==Get_Eeprom_PARTNUM(ePartNumber+4))))
		)
		{
			result = kOn;
		}
	}
	else
	{}
#else
	if(PNCondition==kPN_Model)
	{
		result = kOn;
	}
	else
	if(PNCondition==kPN_Option)	
	{
		result = kOn;
	}
	else
	{}
#endif

	return result;
}
