
/*******************************************************************************
(C) 2012 KPIT Cummins Infosystems Limited, Hyundai Motor Company,             **
**  Hyundai MOBIS Company and KEFICO Corporation                              **
**  Confidential Proprietary Information. Distribution Limited.               **
**  Do Not Copy Without Prior Permission                                      **
**                                                                            **
**  SRC-MODULE: App_NvM_Ram.h                                                 **
**                                                                            **
**  TARGET    : All                                                           **
**                                                                            **
**  PRODUCT   : AUTOSAR NvM Module                                            **
**                                                                            **
**  PURPOSE   : C header for App_NvM_Sub_Functions.c                          **
**                                                                            **
**  PLATFORM DEPENDANT [yes/no]: no                                           **
**                                                                            **
**  TO BE CHANGED BY USER [yes/no]: no                                        **
**                                                                            **
*******************************************************************************/

/*******************************************************************************
**                      Revision History                                      **
********************************************************************************
** Revision  Date          By             Description                         **
********************************************************************************
** 1.0.0     29-Dec-2012   AJAMEERPASHA   Initial Version                     **
*******************************************************************************/
#ifndef APP_NVM_RAM_H
#define APP_NVM_RAM_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* #include "Std_Types.h" */
#include "Type.h"

/*******************************************************************************
**                      Macros                                                **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

extern u8 NvM_Dummy;
extern u8 rub_EEPROM_OPTION[];
extern u8 rub_EEPROM_FOB[];
extern u8 rub_EEPROM_FOB_RC[];
extern u8 rub_EEPROM_LEARNT[];
extern u8 rub_EEPROM_FUNCTION[];
extern u8 rub_EEPROM_CALIB_01[];
extern u8 rub_EEPROM_CALIB_02[];
extern u8 rub_EEPROM_CALIB_03[];
extern u8 rub_EEPROM_DTC[];
extern u8 rub_EEPROM_FACTORY[];
extern u8 rub_EEPROM_PARTNUM[];
/* BCM EEPROM Image - Add */
extern u8 rub_EEPROM_BCMOPTION[];
extern u8 rub_EEPROM_BCMFUNCTION[];
extern u8  rub_EEPROM_Manufacture[];
extern u8  rub_EEPROM_HWVERSION[];
extern u8  rub_EEPROM_BCMCALIB[];
extern u8  rub_EEPROM_ECUINFO[];


/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/


#endif /*APP_NVM_RAM_H*/
/*******************************************************************************
**                       End of File                                          **
*******************************************************************************/

