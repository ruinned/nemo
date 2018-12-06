
#ifndef PAS_NVM_RAM_H
#define PAS_NVM_RAM_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* #include "Std_Types.h" */
#include "Rte_Type.h"
#include "Type.h"

/*******************************************************************************
**                      Macros                                                **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

extern u8	rub_EEPROM_Par_PAS[];
extern u8	PAS_EEPROMData[];

#define	sizeEEBlk_PAS_1						(50u)
#define	sizeEEBlk_PAS_2						(50u)
#define	sizeEEBlk_PAS_3						(50u)
#define	sizeEEBlk_PAS_4						(50u)
#define	sizeEEBlk_PAS_5						(40u)
#define	sizeEEBlk_PAS_ALL					(240u)

#define INDEX14_RO							((u8*)(&PAS_EEPROMData[(6*0)]))
#define INDEX15_RO							((u8*)(&PAS_EEPROMData[(6*1)]))
#define INDEX16_RO							((u8*)(&PAS_EEPROMData[(6*2)]))
#define INDEX17_RO							((u8*)(&PAS_EEPROMData[(6*3)]))
#define INDEX18_RO							((u8*)(&PAS_EEPROMData[(6*4)]))
#define INDEX19_RO							((u8*)(&PAS_EEPROMData[(6*5)]))
#define INDEX20_RO							((u8*)(&PAS_EEPROMData[(6*6)]))

#define INDEX14_RI							((u8*)(&PAS_EEPROMData[(6*7)]))
#define INDEX15_RI							((u8*)(&PAS_EEPROMData[(6*8)]))
#define INDEX16_RI							((u8*)(&PAS_EEPROMData[(6*9)]))
#define INDEX17_RI							((u8*)(&PAS_EEPROMData[(6*10)]))
#define INDEX18_RI							((u8*)(&PAS_EEPROMData[(6*11)]))
#define INDEX19_RI							((u8*)(&PAS_EEPROMData[(6*12)]))
#define INDEX20_RI							((u8*)(&PAS_EEPROMData[(6*13)]))

#define INDEX14_FO							((u8*)(&PAS_EEPROMData[(6*14)]))
#define INDEX15_FO							((u8*)(&PAS_EEPROMData[(6*15)]))
#define INDEX16_FO							((u8*)(&PAS_EEPROMData[(6*16)]))
#define INDEX17_FO							((u8*)(&PAS_EEPROMData[(6*17)]))
#define INDEX18_FO							((u8*)(&PAS_EEPROMData[(6*18)]))
#define INDEX19_FO							((u8*)(&PAS_EEPROMData[(6*19)]))
#define INDEX20_FO							((u8*)(&PAS_EEPROMData[(6*20)]))

#define INDEX14_FI							((u8*)(&PAS_EEPROMData[(6*21)]))
#define INDEX15_FI							((u8*)(&PAS_EEPROMData[(6*22)]))
#define INDEX16_FI							((u8*)(&PAS_EEPROMData[(6*23)]))
#define INDEX17_FI							((u8*)(&PAS_EEPROMData[(6*24)]))
#define INDEX18_FI							((u8*)(&PAS_EEPROMData[(6*25)]))
#define INDEX19_FI							((u8*)(&PAS_EEPROMData[(6*26)]))
#define INDEX20_FI							((u8*)(&PAS_EEPROMData[(6*27)]))

/* Dynamic Amplification Function */
/* Sensor Side 에서 고유한 기능으로써, 장거리 감지성능 향상을 위해 사용한다. INDEX23번지 해당 값을 센서 TEACHING시 전송한다 */
#define INDEX23_RO							((u8*)(&PAS_EEPROMData[(6*28)]))
#define INDEX23_RI							((u8*)(&PAS_EEPROMData[(6*28)]))

#define INDEX23_FO							((u8*)(&PAS_EEPROMData[(6*29)]))
#define INDEX23_FI							((u8*)(&PAS_EEPROMData[(6*29)]))


#define RI_Group_DirectBlindSpot        	INDEX14_RI[3]
#define RO_Group_DirectBlindSpot        	INDEX14_RO[3]
#define FI_Group_DirectBlindSpot        	INDEX14_FI[3]
#define FO_Group_DirectBlindSpot        	INDEX14_FO[3]

#define MaxRingTime(x,y)					(((x)>(y))? (x) : (y))
#define MinRingTime(x,y)					(((x)<(y))? (x) : (y))


/* 온도 보상 데이터 */

#define EEPROM_THRMO_R_Sect1ToSect1			PAS_EEPROMData[(6*30) + 0]
#define EEPROM_THRMO_R_Sect1ToSect2			PAS_EEPROMData[(6*30) + 1]
#define EEPROM_THRMO_R_Sect1ToSect3			PAS_EEPROMData[(6*30) + 2]

#define EEPROM_THRMO_R_Sect2ToSect1			PAS_EEPROMData[(6*30) + 3]
#define EEPROM_THRMO_R_Sect2ToSect2			PAS_EEPROMData[(6*30) + 4]
#define EEPROM_THRMO_R_Sect2ToSect3			PAS_EEPROMData[(6*30) + 5]

#define EEPROM_THRMO_R_Sect3ToSect1			PAS_EEPROMData[(6*31) + 0]
#define EEPROM_THRMO_R_Sect3ToSect2			PAS_EEPROMData[(6*31) + 1]
#define EEPROM_THRMO_R_Sect3ToSect3			PAS_EEPROMData[(6*31) + 2]

#define EEPROM_THRMO_R_Sect4ToSect1			PAS_EEPROMData[(6*31) + 3]
#define EEPROM_THRMO_R_Sect4ToSect2			PAS_EEPROMData[(6*31) + 4]
#define EEPROM_THRMO_R_Sect4ToSect3			PAS_EEPROMData[(6*31) + 5]

#define EEPROM_THRMO_F_Sect1ToSect1			PAS_EEPROMData[(6*32) + 0]
#define EEPROM_THRMO_F_Sect1ToSect2			PAS_EEPROMData[(6*32) + 1]
#define EEPROM_THRMO_F_Sect1ToSect3			PAS_EEPROMData[(6*32) + 2]

#define EEPROM_THRMO_F_Sect2ToSect1			PAS_EEPROMData[(6*32) + 3]
#define EEPROM_THRMO_F_Sect2ToSect2			PAS_EEPROMData[(6*32) + 4]
#define EEPROM_THRMO_F_Sect2ToSect3			PAS_EEPROMData[(6*32) + 5]

#define EEPROM_THRMO_F_Sect3ToSect1			PAS_EEPROMData[(6*33) + 0]
#define EEPROM_THRMO_F_Sect3ToSect2			PAS_EEPROMData[(6*33) + 1]
#define EEPROM_THRMO_F_Sect3ToSect3			PAS_EEPROMData[(6*33) + 2]

#define EEPROM_THRMO_F_Sect4ToSect1			PAS_EEPROMData[(6*33) + 3]
#define EEPROM_THRMO_F_Sect4ToSect2			PAS_EEPROMData[(6*33) + 4]
#define EEPROM_THRMO_F_Sect4ToSect3			PAS_EEPROMData[(6*33) + 5]

#define EEPROM_Level3_OFFSET_1				PAS_EEPROMData[((6*35)+0)]
#define EEPROM_Level3_OFFSET_2				PAS_EEPROMData[((6*35)+1)]
#define EEPROM_Level3_OFFSET_3				PAS_EEPROMData[((6*35)+2)]
#define EEPROM_Level3_OFFSET_4				PAS_EEPROMData[((6*35)+3)]

/* Calculation Reference */
#define EEPROM_Cal_Ref_R_Level1				PAS_EEPROMData[((6*36)+0)]
#define EEPROM_Cal_Ref_R_Level2				PAS_EEPROMData[((6*36)+1)]
#define EEPROM_Cal_Ref_R_Level3				PAS_EEPROMData[((6*36)+2)]
#define EEPROM_Cal_Ref_R_LevelL				PAS_EEPROMData[((6*36)+3)]
#define EEPROM_Cal_Ref_R_Center_Offset      ((PAS_EEPROMData[((6*36)+4)]&0xF0)>>4)
#define EEPROM_Cal_Ref_R_Corner_Offset      (PAS_EEPROMData[((6*36)+4)]&0x0F)
//#define EEPROM_Cal_Ref_R_OffSet				PAS_EEPROMData[((6*36)+4)]
#define EEPROM_Cal_Ref_R_RsLimit     	 	PAS_EEPROMData[((6*36)+5)]

#define EEPROM_Cal_Ref_F_Level1				PAS_EEPROMData[((6*37)+0)]
#define EEPROM_Cal_Ref_F_Level2				PAS_EEPROMData[((6*37)+1)]
#define EEPROM_Cal_Ref_F_Level3				PAS_EEPROMData[((6*37)+2)]

#define EEPROM_Cal_Ref_F_Center_Offset      ((PAS_EEPROMData[((6*37)+4)]&0xF0)>>4)
#define EEPROM_Cal_Ref_F_Corner_Offset      (PAS_EEPROMData[((6*37)+4)]&0x0F)
//#define EEPROM_Cal_Ref_F_OffSet				PAS_EEPROMData[((6*37)+4)]
#define EEPROM_Cal_Ref_F_FsLimit			PAS_EEPROMData[((6*37)+5)]

#define EEPROM_Cal_Ref_R_CtoC				PAS_EEPROMData[((6*38)+0)]
#define EEPROM_Cal_Ref_R_CtoS				PAS_EEPROMData[((6*38)+1)]
#define EEPROM_Cal_Ref_F_CtoC				PAS_EEPROMData[((6*38)+2)]
#define EEPROM_Cal_Ref_F_CtoS				PAS_EEPROMData[((6*38)+3)]

/* PAS Information */
#define EEPROM_CarName						PAS_EEPROMData[((6*39)+0)]
#define EEPROM_PAS_Type						PAS_EEPROMData[((6*39)+1)]
#define EEPROM_Par_Ver						PAS_EEPROMData[((6*39)+2)]
#define EEPROM_Checksum						PAS_EEPROMData[((6*39)+3)]
#define EEPROM_SEN_HW						PAS_EEPROMData[((6*39)+4)]
#define EEPROM_SEN_USER						PAS_EEPROMData[((6*39)+5)]

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/


#endif /*TPMS_NVM_RAM_H*/
/*******************************************************************************
**                       End of File                                          **
*******************************************************************************/


