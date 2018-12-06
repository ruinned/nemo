#include "type.h"
#include "define.h"
#include "timer.h"
#include "data.h"

#include "pj_define.h"
// #include "eeprom.h"

//#include "SMK_RFIC.h"
//#include "SMK_LFIC.h"
#include "SMK_Telegram_Type.h"
#include "SMK_Telegram.h"
#include "math.h"

/* SP2  : rLH, rINT1, rRH, rTRUNK */

#ifdef	IBU_SP2_LF_SET_MODE


double sqrt_(double src);

/** SMK LF Telegram Table */
const	t_LF_SearchTelegram	tbl_LF_SearchSchedule[LF_SEARCHMODE_MAX]=
{
	/* kLF_SearchMode_None */
	{
		0,0,0,0
	},
	{
		0,0,0,0
	},

	/* kLF_SearchMode_LH_side */
	{
		kANTENA_P1,kSEARCH_LOCATION,kRETRY_1,kSTOP_SEARCH_ONE
	},
	{
		kANTENA_P1,kSEARCH_AUTHENTICATION,kRETRY_1,kSTOP_ALWAYS_ONE
	},
	
	/* kLF_SearchMode_RH_side */
	{
		kANTENA_P2,kSEARCH_LOCATION,kRETRY_1,kSTOP_SEARCH_ONE
	},
	{
		kANTENA_P2,kSEARCH_AUTHENTICATION,kRETRY_1,kSTOP_ALWAYS_ONE
	},

	/* kLF_SearchMode_Interior */
	{
		kANTENA_P3,kSEARCH_LOCATION,kRETRY_1,kSTOP_SEARCH_ONE
	},
	{
		kANTENA_P3,kSEARCH_AUTHENTICATION,kRETRY_1,kSTOP_ALWAYS_ONE
	},

	/* kLF_SearchMode_Bumper */
	{
		kANTENA_P4,kSEARCH_LOCATION,kRETRY_1,kSTOP_SEARCH_ONE
	},
	{
		kANTENA_P4,kSEARCH_AUTHENTICATION,kRETRY_1,kSTOP_ALWAYS_ONE
	},	

	/* kLF_SearchMode_LH_side_NoAuth */
	{
		kANTENA_P1,kSEARCH_LOCATION,kRETRY_1,kSTOP_ALWAYS_ONE
	},
	{
		0,0,0,0	
	},

	/* kLF_SearchMode_RH_side_NoAuth */
	{
		kANTENA_P2,kSEARCH_LOCATION,kRETRY_1,kSTOP_ALWAYS_ONE
	},
	{
		0,0,0,0
	},
	
	/* kLF_SearchMode_Interior_NoAuth */
	{
		kANTENA_P3,kSEARCH_LOCATION,kRETRY_1,kSTOP_ALWAYS_ALL
	},
	{
		0,0,0,0
	},

	/* kLF_SearchMode_Welcome */
	{
		kLH_RH_SIDE_ANTENA,kSEARCH_WELCOME,kRETRY_0,kSTOP_OK
	},
	{
		0,0,0,0
	},	

	/* kLF_SearchMode_HandsFree */
	{
		kANTENA_P4,kSEARCH_HANDSFREE,kRETRY_0,kSTOP_OK
	},
	{
		0,0,0,0
	},

	/* kLF_SearchMode_WelcomeHandsFree */	
	{
		0,0,0,0
	},
	{
		0,0,0,0
	},

	/* kLF_SearchMode_Diag_Type2_LH_side */
	{
		kANTENA_P1,kSEARCH_FACTORY,kRETRY_0,kSTOP_ALWAYS_ONE
	},
	{
		0,0,0,0
	},
	
	/* kLF_SearchMode_Diag_Type2_RH_side */
	{
		kANTENA_P2,kSEARCH_FACTORY,kRETRY_0,kSTOP_ALWAYS_ONE
	},
	{
		0,0,0,0
	},

	/* kLF_SearchMode_Diag_Type2_Interior1 */
	{
		kANTENA_P3,kSEARCH_FACTORY,kRETRY_0,kSTOP_ALWAYS_ONE
	},
	{
		0,0,0,0
	},

	/* kLF_SearchMode_Diag_Type2_Interior2 */
	{
		kINTERIOR_ANTENA2,kSEARCH_FACTORY,kRETRY_0,kSTOP_ALWAYS_ONE
	},
	{
		0,0,0,0
	},

	/* kLF_SearchMode_Diag_Type2_Trunk */
	{
		kANTENA_P4,kSEARCH_FACTORY,kRETRY_0,kSTOP_ALWAYS_ONE
	},
	{
		0,0,0,0
	},

	/* kLF_SearchMode_Diag_Type2_Bumper */
	{
		kBUMPER_ANTENA,kSEARCH_FACTORY,kRETRY_0,kSTOP_ALWAYS_ONE
	},
	{
		0,0,0,0
	},

	/* kLF_SearchMode_Diag_Type3_LH_side */
	{
		kANTENA_P1,kSEARCH_FACTORY,kRETRY_1,kSTOP_ALWAYS_ONE
	},
	{
		0,0,0,0
	},

	/* kLF_SearchMode_Diag_Type3_RH_side */
	{
		kANTENA_P2,kSEARCH_FACTORY,kRETRY_1,kSTOP_ALWAYS_ONE
	},
	{
		0,0,0,0
	},

	/* kLF_SearchMode_Diag_Type3_Interior1 */
	{
		kANTENA_P3,kSEARCH_FACTORY,kRETRY_1,kSTOP_ALWAYS_ONE
	},
	{
		0,0,0,0
	},

	/* kLF_SearchMode_Diag_Type3_Interior2 */
	{
		kINTERIOR_ANTENA2,kSEARCH_FACTORY,kRETRY_1,kSTOP_ALWAYS_ONE
	},
	{
		0,0,0,0
	},

	/* kLF_SearchMode_Diag_Type3_Trunk */
	{
		kANTENA_P4,kSEARCH_FACTORY,kRETRY_1,kSTOP_ALWAYS_ONE
	},
	{
		0,0,0,0
	},

	/* kLF_SearchMode_Diag_Type3_Bumper */
	{
		kBUMPER_ANTENA,kSEARCH_FACTORY,kRETRY_1,kSTOP_ALWAYS_ONE
	},
	{
		0,0,0,0
	}
};



/*************************************************************************************************/
/***  ������ ���� ������ Ȯ�� �ʿ� �׸�  *********************************************************/
/*************************************************************************************************/

			/* ���� ���� - ����base (cm) */
			u16 Par_VehicleLength			= 300;	/* Y�� �ǳ� ����. (Rear ���׳����� ���� DashBoard ������ �Ÿ�) */
			u16 Par_VehicleLength_AntToAnt	= 270;	/* Front ���׳��� Rear ���׳� ���� ���� */
			u16 Par_VehicleWidthHalf_Square 	= 14400;	/* ����/2 : 120 - ������ �̻����� ���� ������ ��� */
			s16 Par_VehicleLength_Cut	= -10; 	/* Rear ���׳� �������� �ǳ� Cut */

			/* Ʃ�׽� �ʿ� �Ķ��Ÿ */			
			u16 Par_PassiveEntryLH_LimitRSSI = 175;	/* LH Passive Entry �۵��Ÿ� ���� 2m ������ ���� */
			u16 Par_PassiveEntryRH_LimitRSSI = 175;	/* RH Passive Entry �۵��Ÿ� ���� 2m ������ ���� */

			u16 Par_PassiveEntryRear_LimitRSSI = 110;		/* Bumper Passive Entry �۵��Ÿ� ���� 2m ������ ���� */
			u16 Par_TopOverRange_LimitLength = 450;	/* ���� ��� ���������� ���� ��, ���� �� - Fob �� Front Ant �Ÿ� & Fob �� Rear Ant �Ÿ��� �հ� �� */
			s16 Par_LHAnt_RSSIOffset = 0;		/* �ǳ� ���ڼ� Door ������ ���ν� (DRV & AST�� �ν�) ������ ���� LH Ant RSSI �� ���� */
			s16 Par_RHAnt_RSSIOffset = 0;		/* �ǳ� ���ڼ� Door ������ ���ν� (DRV & AST�� �ν�) ������ ���� RH Ant RSSI �� ���� */

			u16 Par_DifferenceToFrontAndRear = 120;	/* �� ����â ���� ������ ����. Front ANT RSSI�� Rear ANT RSSI�� ���̰� 120�̻��� ��� ���� ���� �ܺη� �Ǵ� */	
			u16 Par_Frontwindow_RearRSSI_cut = 150; 	/* �� ����â ���� ������ ����. Rear ANT RSSI�� ������ ���� ���� ��� ���� ���� �ܺη� �Ǵ� */
			u16 Par_FrontWindow_Cut = 130;			/* �� ����â ���� ������ ����. Front ANT���� �Ÿ��� ������ ���� Ŭ ��� ���� ���� �ܺη� �Ǵ� */
			u16 Par_PassiveEntryRear_StartCutRSSI = 306;
			u16 Par_RearAntToFOB_IntCut = 82;
			u16 Par_PassiveStartTrunkEdge = 300;
			u16 Par_Over_LHMax_Cut = 480;
			u16 Par_Over_RHMax_Cut = 480;
			u16 Par_Over_RearMax_Cut = 400;
			u16 Par_Over_SideMirror_Cut = 200;
			
			u16 Par_ValidFrontAntToFOB	= 84;	/* Front ���׳� ���� �Ÿ��� ����/2 (120)�� 70% �̳��� ��� Front ANT������ ��ȿ FOB�� �Ǵ� */
											/* 120cm * 0.7 = 84cm */

			u16 Par_RSSIDiffValue = 30;				/* ���׳� ���� ���� ��, RSSI �߰� �� 2���� ���̸� �̿��� �ǳ� �� �Ǵ� ���� �� */ 

						
			u16 Par_FrontAnt_LimitRSSI = 500;	/* FOB Front ���׳� ���� �� RSSI �ִ밪, ������ �̻��� ��� ���ǰ�(Par_FrontAntToFob_FixValie)���� �Ǵ� ó���� ���� */
			double Par_FrontAnt_A = -171.0;
			double Par_FrontAnt_K = 1075.0;

	
			u16 Par_RearAnt_LimitRSSI = 490;	/* FOB Rear  ���׳� ���� �� RSSI �ִ밪, ������ �̻��� ��� ���ǰ�(Par_RearAntToFob_FixValie)���� �Ǵ� ó���� ���� */
			double Par_RearAnt_A = -171.0;
			double Par_RearAnt_K = 1060.0;
			

			u8 Par_FrontAntToFob_FixDistance = 5;	/* FOB �� Front ���׳��� �ٰ̰Ÿ� ���� �� */
			u8 Par_RearAntToFob_FixDistance = 5;	/* FOB �� Rear ���׳��� �ٰ̰Ÿ� ���� �� */			


/*************************************************************************************************/
/***  ������ ���� ������ Ȯ�� �ʿ� �׸�  *********************************************************/
/*************************************************************************************************/


double d_FrontAntToFOB = 0;			/* Front ���׳����� ������ Fob �Ÿ� */
double d_RearAntToFOB = 0;			/* Rear ���׳����� ������ Fob �Ÿ� */

double d_ContactPoint_Yaxis = 0;	/* Front ���׳��� Rear ���׳��� �� ������ ������ Y�� ��ǥ */	
double d_ContactPoint_Xaxis = 0;	/* Front ���׳��� Rear ���׳��� �� ������ ������ X�� ��ǥ */
double d_ContactPoint_Xaxis_Square = 0;	/* �� ������ ���� X�� ��ǥ�� ���� �� */


u16 Loca_RSSI[4][kANTENA_INDEX_MAX]={0,};	/* ���׳� �� Location Search RSSI �� */
u16 Auth_RSSI[kANTENA_INDEX_MAX][3]={0,};	/* ���׳� �� Auth Search RSSI �� */
u8 Auth_RSSIcos[kANTENA_INDEX_MAX][3]={0,};	/* ���׳� �� Auth Search RSSI cosine �� */

st_RSSIValidFobData	RSSIValidFobData;


#define ANT_NUM 4u

void SortRSSI(u16 RSSIValueArr[])
{
	u16 temp;
	u8 iCnt;
	u8 jCnt;
	
	
	for(iCnt = 0u; iCnt < ANT_NUM-1u; iCnt ++)
	{
		 for(jCnt = iCnt + 1u ; jCnt < ANT_NUM; jCnt ++)
		 
		 {
			 if(RSSIValueArr[jCnt] > RSSIValueArr[iCnt])
			 {
				  temp = RSSIValueArr[iCnt];				
				  RSSIValueArr[iCnt] = RSSIValueArr[jCnt];
				  RSSIValueArr[jCnt] = temp;
			 }					 
		 }		 
	} 
}


u8 Calculate_LocaRSSI(u8 RcvValidFob[],u8 AntIndex)
{
#if 0
	u8	FixFob = 0u;
	u8	fob_cnt = 0u;
	u8 	ant_cnt = 0u;	
	u8	temp = 0u;
	u8	OutsideConditionOK = 0u;	/* Fob �ǿ� ��ġ Ȯ�� flag */
	
	u16	diffRSSI = 0u;		 	/* RSSI ��(4EA)�� ���⺰�� ���� ��, �߰� �� 2EA�� ���� RSSI ���� */ 
	u16	maxRSSI = 0u;				/* RSSI ��(4EA)�� ���⺰�� ���� ��, RSSI� �ִ� �� */

	u16	RSSIValueArr[4] = {0u,0u,0u,0u};

	/* Clear buffer */
	for(fob_cnt = 0u; fob_cnt <= 3u; fob_cnt++)
	{
		for(ant_cnt = 0u; ant_cnt < (u8)kANTENA_INDEX_MAX; ant_cnt++)
		{
			Loca_RSSI[fob_cnt][ant_cnt] = 0u;
		}
	}

	/* Load Location RSSI */	
	for(fob_cnt = 0u; fob_cnt <= 3u; fob_cnt++)
	{
		lRSSI(fob_cnt,lf_antenna_RSSIOutputOrder[0]) = Get_LocaRSSI(fob_cnt,tRSSI1);	/* Fob���� ������ 1st LF RSSI�� ���� Max �ప Load */
		lRSSI(fob_cnt,lf_antenna_RSSIOutputOrder[1]) = Get_LocaRSSI(fob_cnt,tRSSI2); /* Fob���� ������ 2nd LF RSSI�� ���� Max �ప Load */	
		lRSSI(fob_cnt,lf_antenna_RSSIOutputOrder[2]) = Get_LocaRSSI(fob_cnt,tRSSI3); /* Fob���� ������ 3rd LF RSSI�� ���� Max �ప Load */
		lRSSI(fob_cnt,lf_antenna_RSSIOutputOrder[3]) = Get_LocaRSSI(fob_cnt,tRSSI4); /* Fob���� ������ 4th LF RSSI�� ���� Max �ప Load */

		/* Clear Fob Calculate Data */
		RSSIValidFobData.Position[fob_cnt] = kFobPos_None;
		RSSIValidFobData.Distance[fob_cnt] = 0u;
		RSSIValidFobData.RSSI[fob_cnt] = 0u;
	}

	/* ���� Search�� HandsFree Auth Search �� ��� HandFreeFob1/2/3/4FoundCnt ���� �����Ͽ� AuthSearchTargetFobID�� �����ؾ� ��. */
	/* Register Search���� ���������� �߰ߵ� Fob�� Auth������ �߰ߵǾ�� �ϹǷ�! */

#ifdef FOB_RSSI_CHECK_ENABLE
	for(fob_cnt = 0u;	fob_cnt <= 3u; fob_cnt++)
	{
		OutsideConditionOK = Off;


		/* ���ŵ� RSSI High -> Low ����, max �� RSSI diff Ȯ�� */
		/*-----------------------------------------------------*/
		RSSIValueArr[0] = lRSSI(fob_cnt,lf_antenna_RSSIOutputOrder[0]);
		RSSIValueArr[1] = lRSSI(fob_cnt,lf_antenna_RSSIOutputOrder[1]);
		RSSIValueArr[2] = lRSSI(fob_cnt,lf_antenna_RSSIOutputOrder[2]);
		RSSIValueArr[3] = lRSSI(fob_cnt,lf_antenna_RSSIOutputOrder[3]);			

		SortRSSI(RSSIValueArr);	/* ���ŵ� RSSI ���� ���⺰�� ���� [0] : Max, [3] : Min */
		diffRSSI = RSSIValueArr[1] - RSSIValueArr[2];
		maxRSSI = RSSIValueArr[0];
		/*-----------------------------------------------------*/


		/* ���¼� ������ �ǳ� ���ν� (DRV/AST�� �ν�) ���� ���� */
		/*------------------------------------------------------*/
		if((lRSSI(fob_cnt,rLH) + Par_LHAnt_RSSIOffset) >= 0u)
		{
			lRSSI(fob_cnt,rLH) = (u16)(lRSSI(fob_cnt,rLH) + Par_LHAnt_RSSIOffset);
		}
		else
		{
			lRSSI(fob_cnt,rLH) = 0u;
		}

		if((lRSSI(fob_cnt,rRH) + Par_RHAnt_RSSIOffset) >= 0u)
		{
			lRSSI(fob_cnt,rRH) = (u16)(lRSSI(fob_cnt,rRH) + Par_RHAnt_RSSIOffset);
		}
		else
		{
			lRSSI(fob_cnt,rRH) = 0u;
		}
		/*------------------------------------------------------*/


		/* logX X���� 0�� ��� ���Ѵ�� �߻��ϹǷ� 0�ϰ�� ��ȯ ó�� ���� */ 
        /* log ������ �ϴ� Front, Rear RSSI�� �ش� */
		/*------------------------------------------------------*/	
	    if(lRSSI(fob_cnt,rINT1) == 0u)
	    {
			lRSSI(fob_cnt,rINT1) = 1u;	
	    }
	    if(lRSSI(fob_cnt,rTRUNK) == 0u)
	    {
			lRSSI(fob_cnt,rTRUNK) = 1u;	
	    }
		/*------------------------------------------------------*/		
		
		if(RcvValidFob[fob_cnt+1u] == On)
		{
			/* Max �� RSSI �� Ȯ�� : Fob���� ���� sum ���� �ƴ�, Max �ప�� �۽��ϴ� ������ ���� ó�� �� */
			
			/* Front(INT1) ���׳� ���� ������ ���� */
			if(lRSSI(fob_cnt,rINT1) < Par_FrontAnt_LimitRSSI)
			{
				d_FrontAntToFOB = Par_FrontAnt_A * log(lRSSI(fob_cnt,rINT1)) + Par_FrontAnt_K;				
			}
			else
			{
				d_FrontAntToFOB = (double)(Par_FrontAntToFob_FixDistance);
			}

			/* Front ���׳����� �� �Ÿ��� Par_ValidFrontAntToFOB ���� �� ���, Fob ��ġ �ǳ��� Ȯ�� ó��. ���� ���� ���� ���ʿ�.  */ 
			if(d_FrontAntToFOB <= (double)Par_ValidFrontAntToFOB)
			{
				RSSIValidFobData.Position[fob_cnt] = kFobPos_INTERIOR;
				RSSIValidFobData.Distance[fob_cnt] = (u16)d_FrontAntToFOB;	
			}
			
			/* ���� ���� �Ҹ��� �� ��� Rear ���׳����� Fob �Ÿ� ���� �� ���� Ȯ�� ���� ���� */
			else
			{	
				/* Rear(TRUNK) ���׳� ���� ������ ���� */
				if(lRSSI(fob_cnt,rTRUNK) < Par_RearAnt_LimitRSSI)
				{
					d_RearAntToFOB = Par_RearAnt_A * log(lRSSI(fob_cnt,rTRUNK)) + Par_RearAnt_K;
				}
				else
				{
					d_RearAntToFOB = (double)(Par_RearAntToFob_FixDistance);
				}
				
				
				/* ���� ���� Y �� ���� */
				d_ContactPoint_Yaxis = ((d_RearAntToFOB*d_RearAntToFOB)-(d_FrontAntToFOB*d_FrontAntToFOB)+(Par_VehicleLength_AntToAnt*Par_VehicleLength_AntToAnt))/(2*Par_VehicleLength_AntToAnt);
				
				/* ���� ���� X �� ���� ���� */
				d_ContactPoint_Xaxis_Square = ((d_RearAntToFOB*d_RearAntToFOB) - (d_ContactPoint_Yaxis*d_ContactPoint_Yaxis));

			 	if(d_ContactPoint_Xaxis_Square < 0)
			 	{/* ���� �߻��� ���� ������ ���� �߰� (Rear ���׳��� ���� �Ÿ� - Y�� ���� �̹Ƿ� �׻� ��� ���� */ 
					d_ContactPoint_Xaxis_Square = -d_ContactPoint_Xaxis_Square;
			 	}

			/* LF Search ��� ���׳��� ���� Fob ��ġ Ȯ�� */	
				if(	(d_ContactPoint_Xaxis_Square > (double)(Par_VehicleWidthHalf_Square)) || 
					(d_ContactPoint_Yaxis < (double)(Par_VehicleLength_Cut)) ||
					(d_ContactPoint_Yaxis > (double)(Par_VehicleLength)))
				{/* Fob�� �ǿܿ� ��ġ�ϴ��� Ȯ�� */
					OutsideConditionOK = On;
				}


				if(	(OutsideConditionOK == On) &&
					(lRSSI(fob_cnt,rLH) > lRSSI(fob_cnt,rTRUNK)) &&
					(lRSSI(fob_cnt,rLH) > lRSSI(fob_cnt,rINT1)) &&
					(lRSSI(fob_cnt,rLH) > lRSSI(fob_cnt,rRH)) )
				{/* Fob�� �ǿ� LH Side�� ��ġ�ϴ��� Ȯ�� */
					if(lRSSI(fob_cnt,rLH) > Par_PassiveEntryLH_LimitRSSI) /* �۵��Ÿ� ���� */
					{
						RSSIValidFobData.Position[fob_cnt] = kFobPos_LH_SIDE;
						RSSIValidFobData.RSSI[fob_cnt] = lRSSI(fob_cnt,rLH);
					}
				}			
				else
				if(	(OutsideConditionOK == On) &&
					(lRSSI(fob_cnt,rRH) > lRSSI(fob_cnt,rTRUNK)) &&
					(lRSSI(fob_cnt,rRH) > lRSSI(fob_cnt,rINT1)) &&
					(lRSSI(fob_cnt,rRH) > lRSSI(fob_cnt,rLH)) )
				{/* Fob�� �ǿ� RH Side�� ��ġ�ϴ��� Ȯ�� */
					if(lRSSI(fob_cnt,rRH) > Par_PassiveEntryRH_LimitRSSI) /* �۵��Ÿ� ���� */
					{					
						RSSIValidFobData.Position[fob_cnt] = kFobPos_RH_SIDE;
						RSSIValidFobData.RSSI[fob_cnt] = lRSSI(fob_cnt,rRH);
					}
				}	
				else
				if(	(OutsideConditionOK == On) &&
					(lRSSI(fob_cnt,rTRUNK) > lRSSI(fob_cnt,rINT1)) )
				{/* Fob�� (����ó��) �ǳ� TRUNK side�� ��ġ�ϴ���, Fob�� �ǿ� BUMPER side�� ��ġ�ϴ��� Ȯ�� */

					if( (lRSSI(fob_cnt,rTRUNK) > Par_PassiveEntryRear_LimitRSSI) && /* �۵��Ÿ� ���� */
						(lRSSI(fob_cnt,rTRUNK) < Par_PassiveEntryRear_StartCutRSSI))
					{						
						RSSIValidFobData.Position[fob_cnt] = kFobPos_BUMPER;
						RSSIValidFobData.RSSI[fob_cnt] = lRSSI(fob_cnt,rTRUNK);
					}
					else
					if(lRSSI(fob_cnt,rTRUNK) > Par_PassiveStartTrunkEdge)
					{/* Trunk ���� ������ Bumper�� �νĵ� ���� */
						RSSIValidFobData.Position[fob_cnt] = kFobPos_INTERIOR;
						RSSIValidFobData.Distance[fob_cnt] = (u16)d_FrontAntToFOB;		
					}
					else
					{
						RSSIValidFobData.Position[fob_cnt] = kFobPos_None;
						RSSIValidFobData.Distance[fob_cnt] = 0u;
						RSSIValidFobData.RSSI[fob_cnt] = 0u;	
					}
				}	
				
			/* Fob�� ���׳��� ���� Ȥ�� ���� ��, ���׳� ����� ���� RSSI �� ������ ���� ���Ǵ� ���� ���� */
				else
				if(	(diffRSSI < Par_RSSIDiffValue) && (maxRSSI == lRSSI(fob_cnt,rLH)) && (maxRSSI > Par_Over_LHMax_Cut) )
				{/* ���׳� RSSI ���⿡ ���� Fob ��ġ ó�� - LH side */
					RSSIValidFobData.Position[fob_cnt] = kFobPos_LH_SIDE;
					RSSIValidFobData.RSSI[fob_cnt] = lRSSI(fob_cnt,rLH);
				}
				else
				if(	(diffRSSI < Par_RSSIDiffValue) && (maxRSSI == lRSSI(fob_cnt,rRH)) && (maxRSSI > Par_Over_RHMax_Cut) )
				{/* ���׳� RSSI ���⿡ ���� Fob ��ġ ó�� - LH side */
					RSSIValidFobData.Position[fob_cnt] = kFobPos_RH_SIDE;
					RSSIValidFobData.RSSI[fob_cnt] = lRSSI(fob_cnt,rRH);
				}
				else
				if(	(diffRSSI < Par_RSSIDiffValue) && (maxRSSI == lRSSI(fob_cnt,rTRUNK)) && (maxRSSI > Par_Over_RearMax_Cut) )
				{/* ���׳� RSSI ���⿡ ���� Fob ��ġ ó�� - TRUNK */
					RSSIValidFobData.Position[fob_cnt] = kFobPos_INTERIOR;
					RSSIValidFobData.Distance[fob_cnt] = (u16)d_FrontAntToFOB;
				}
				
				else
				if(	((d_FrontAntToFOB > Par_FrontWindow_Cut) &&
					 (lRSSI(fob_cnt,rTRUNK) < Par_Frontwindow_RearRSSI_cut) &&
					 (maxRSSI == lRSSI(fob_cnt,rINT1)) &&
					 (lRSSI(fob_cnt,rINT1) - lRSSI(fob_cnt,rTRUNK) > Par_DifferenceToFrontAndRear)) )
				{
					RSSIValidFobData.Position[fob_cnt] = kFobPos_None;
					RSSIValidFobData.Distance[fob_cnt] = 0u;
					RSSIValidFobData.RSSI[fob_cnt] = 0u;					
				}

			/* Side mirror over range ���� ���� ���� - 18.08.14 */ 			
				else
				if( (maxRSSI == lRSSI(fob_cnt,rLH)) &&
					(RSSIValueArr[1] == lRSSI(fob_cnt,rINT1)) &&
					(RSSIValueArr[2] == lRSSI(fob_cnt,rRH)) &&
					(lRSSI(fob_cnt,rRH) > Par_Over_SideMirror_Cut) )
				{
					RSSIValidFobData.Position[fob_cnt] = kFobPos_LH_SIDE;
					RSSIValidFobData.RSSI[fob_cnt] = lRSSI(fob_cnt,rLH);
				}
				else
				if( (maxRSSI == lRSSI(fob_cnt,rRH)) &&
					(RSSIValueArr[1] == lRSSI(fob_cnt,rINT1)) &&
					(RSSIValueArr[2] == lRSSI(fob_cnt,rLH)) &&
					(lRSSI(fob_cnt,rRH) > Par_Over_SideMirror_Cut) )
				{
					RSSIValidFobData.Position[fob_cnt] = kFobPos_LH_SIDE;
					RSSIValidFobData.RSSI[fob_cnt] = lRSSI(fob_cnt,rLH);
				}				

			/* ��� ���� ��� �Ҹ��� ��, �ǳ��� ����ó�� */	
				else
				{
					RSSIValidFobData.Position[fob_cnt] = kFobPos_INTERIOR;
					RSSIValidFobData.Distance[fob_cnt] = (u16)d_FrontAntToFOB;	
				}		
			}
		}
		else
		{
		}
	}


	/* RSSI ��� ��ġ ���� �ݿ��� Valid Fob �� ���� */
	for(fob_cnt = 0u,temp = 0u;	fob_cnt <= 3u; fob_cnt++)
	{
		/* LF Search�� ���� Fob �߰� Ȯ�� */
		/* WelcomeLight�� ���� ���� �ǹǷ� �� ���� ��ȣ�� ��. */
		if(	((AntIndex == kANTENA_P3) &&
				(RSSIValidFobData.Position[fob_cnt] == kFobPos_INTERIOR)) ||
			((AntIndex == kANTENA_P1) &&
				(RSSIValidFobData.Position[fob_cnt] == kFobPos_LH_SIDE)) ||
			((AntIndex == kANTENA_P2) &&
				(RSSIValidFobData.Position[fob_cnt] == kFobPos_RH_SIDE)) ||
			((AntIndex == kANTENA_P4) &&
				(RSSIValidFobData.Position[fob_cnt] == kFobPos_BUMPER))
		)	
		{
			RcvValidFob[fob_cnt+1u] = On;
			temp ++;
		}
		else
		{
			RcvValidFob[fob_cnt+1u] = Off;
		}
	}
	RcvValidFob[0] = temp;
	

	/* Auth Search Fob ���� */	
	for(fob_cnt = 0u; fob_cnt <= 3u; fob_cnt++)
	{
		/* �ǳ� Auth Search Fob ���� - INT1 ���׳������� �ִܰŸ� Fob ���� */
		if(	(AntIndex == kANTENA_P3) &&
			(RSSIValidFobData.Position[fob_cnt] == kFobPos_INTERIOR) )
		{
			if(FixFob == 0u)
			{
				FixFob = fob_cnt+1u;
			}
			else
			if(RSSIValidFobData.Distance[fob_cnt] < RSSIValidFobData.Distance[FixFob-1])
			{
				FixFob = fob_cnt+1u;
			}
			else
			{
			}
		}
		/* �ǿ� Auth Search Fob ���� - RSSI �� ���Ͽ� Fob ���� */
		else
		if( ((AntIndex == kANTENA_P1) &&
			 (RSSIValidFobData.Position[fob_cnt] == kFobPos_LH_SIDE)) ||
			((AntIndex == kANTENA_P2) &&
			 (RSSIValidFobData.Position[fob_cnt] == kFobPos_RH_SIDE)) ||
			((AntIndex == kANTENA_P4) &&
			 (RSSIValidFobData.Position[fob_cnt] == kFobPos_BUMPER)) )
		{
			if(FixFob == 0u)
			{
				FixFob = fob_cnt+1u;
			}
			else
			if(RSSIValidFobData.RSSI[fob_cnt] > RSSIValidFobData.RSSI[FixFob-1])
			{
				FixFob = fob_cnt+1u;
			}
			else
			{
			}
		}
		else
		{
		}
		
	}

#else
	/* RSSI �̻�� */
	if(RcvValidFob[1] == On) 		{FixFob = Par_Fob1;}
	else if(RcvValidFob[2] == On)	{FixFob = Par_Fob2;}
	else if(RcvValidFob[3] == On)	{FixFob = Par_Fob3;}
	else if(RcvValidFob[4] == On)	{FixFob = Par_Fob4;}
	else						{FixFob = Par_FobNone;}

#endif
#endif
	return	0; 	
}


u8 Calculate_AuthRSSI(u8 RcvValidFob, u8 AntIndex)
{
#if 0
	u8	rssi_num = 0u;
	u8	ant_cnt = 0u;
	u8	axis_cnt = 0u;

	/* Clear buffer */
	for(ant_cnt = 0u; ant_cnt < (u8)kANTENA_INDEX_MAX; ant_cnt++)
	{
		for(axis_cnt = 0u; axis_cnt <= 2u; axis_cnt++)
		{
			Auth_RSSI[ant_cnt][axis_cnt] = 0u;
			Auth_RSSIcos[ant_cnt][axis_cnt] = 0u;
		}
	}

	/* Load Authentication RSSI */	
	for(rssi_num = 0u; rssi_num <= 3u; rssi_num++)
	{
		aRSSI(lf_antenna_RSSIOutputOrder[rssi_num],Xaxis) = Get_AuthRSSI(rssi_num,Xaxis);
		aRSSI(lf_antenna_RSSIOutputOrder[rssi_num],Yaxis) = Get_AuthRSSI(rssi_num,Yaxis);
		aRSSI(lf_antenna_RSSIOutputOrder[rssi_num],Zaxis) = Get_AuthRSSI(rssi_num,Zaxis);
		aRSSIcos(lf_antenna_RSSIOutputOrder[rssi_num],Xaxis) = Get_AuthRSSIcos(rssi_num,Xaxis);
		aRSSIcos(lf_antenna_RSSIOutputOrder[rssi_num],Xaxis) = Get_AuthRSSIcos(rssi_num,Xaxis);
		aRSSIcos(lf_antenna_RSSIOutputOrder[rssi_num],Xaxis) = Get_AuthRSSIcos(rssi_num,Xaxis);		
	}


	/* ���� ���� �ʿ�. ���� Location Search ����� �������� �Ǵ�. Auth Search������ Fob ���������� Ȯ��. */
#endif

	return 0;
}



/* Newton-Raphson method sqrt */

#define NUM_REPEAT	8u

double sqrt_(double src)
{
	u8 cnt = 0u;

	double t = 0u;
	double buf = 0u;

	buf = src;
	for(cnt=0u,t=buf;cnt<NUM_REPEAT;cnt++)
	{
		if(t<1.0)
		{
			break;
		}
		t = (t*t+buf)/(2.0*t);
	}

	return t;
}

#endif

