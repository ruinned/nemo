/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_RFIC.c
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/SCIM_BP_181030_PVT_LFIC/SCIM_BP.dpa
 *     SW-C Type:  CDD_RFIC
 *  Generated at:  Sun Nov  4 12:37:27 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <CDD_RFIC>
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
 *********************************************************************************************************************/

#include "Rte_CDD_RFIC.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Spi.h"
#include "crc4.h"
#include "type.h"
#include "Dio.h"
#include "Timer.h"
#include "data.h"

#define RFIC_CMD_READ_RX_FIFO_LEVEL          0x01U
#define RFIC_CMD_READ_RSSI_FIFO_LEVEL        0x03U
#define RFIC_CMD_GET_EVENT_STATUS            0x04U
#define RFIC_CMD_READ_RSSI_FIFO_DATA         0x05U
#define RFIC_CMD_READ_RX_FIFO_DATA           0x06U
#define RFIC_CMD_WRITE_SRAM_REG              0x07U
#define RFIC_CMD_READ_SRAM_REG               0x08U
#define RFIC_CMD_WRITE_EEPROM                0x09U
#define RFIC_CMD_READ_EEPROM                 0x0AU
#define RFIC_CMD_SET_SYSMODE                 0x0DU
#define RFIC_CMD_CAL_AND_CHECK               0x0EU
#define RFIC_CMD_SPI_PATCH	                  0x0FU
#define RFIC_CMD_SYSRESET_ROM                0x10U
#define RFIC_CMD_GET_FLASH_VER               0x13U
#define RFIC_CMD_CUSTOMER_CONF               0x14U
#define RFIC_CMD_SYSTEM_RESET                0x15U
#define RFIC_CMD_TRIG_EEPROM_SECURE_WRITE    0x16U
#define RFIC_CMD_SET_VOLT_MON                0x17U
#define RFIC_CMD_OFF_MODE 					  0x18U
#define RFIC_CMD_READ_TEMP_VALUE		      0x19U
#define RFIC_CMD_INIT_SRAM_SERVICE           0x1AU
#define RFIC_CMD_START_RSSI_MEASUREMENT      0x1BU
#define RFIC_CMD_GET_RSSI_VALUE              0x1CU
#define RFIC_CMD_READ_RXFIFO_BYTE_ISR        0x1DU
#define RFIC_CMD_READ_RSSIFIFO_BYTE_ISR      0x1EU

#define RECEIVE_PATH_NONE       0x0U
#define RECEIVE_PATH_A          0x1U 
#define RECEIVE_PATH_B          0x2U

#define kRawDataLen_RKE			132		/* 128 + 4 */
#define kRawDataLen_LocaSearch	    77		/* 72 + 5 */	
#define kRawDataLen_AuthSearch	    173		/* 168 + 5 */
#define kRawDataLen_WlHnSearch	    37		/* 32 + 5 */
		
#define Get_RawDataRemainder(x) (uint8)(x%8)
#define Get_RawDataLength(x)	 (uint8)(x/8)
 
#define	On				(uint8)1
#define	Off				(uint8)0
#define	ON				(uint8)1
#define	OFF				(uint8)0

typedef struct
{
	uint8 SYS_ERR:1;
	uint8 CMD_RDY:1;
	uint8 SYS_RDY:1;
	uint8 AVCCLOW:1;
	uint8 LOWBATT:1;
	uint8 SFIFO:1;
	uint8 DFIFO_RX:1;
	uint8 Rsv1:1;	  
}st_RFIC_EVENTSystem;


typedef union
{
	st_RFIC_EVENTSystem b;
	uint8 U:8;
		  
}Un_RFIC_EVENTSystem;


typedef struct
{
	uint8 IDCHKA:1;
	uint8 WCOKA:1;
	uint8 SOTA:1;
	uint8 EOTA:1;
	uint8 IDCHKB:1;
	uint8 WCOKB:1;
	uint8 SOTB:1;
	uint8 EOTB:1;	   
}st_RFIC_EVENTEvents;


typedef union
{
	st_RFIC_EVENTEvents b;
	uint8 U:8;
		  
}Un_RFIC_EVENTEvents;


typedef struct
{
	uint8 PWRON:1;
	uint8 Rsv2:1;
	uint8 NPWRON6:1;
	uint8 NPWRON5:1;
	uint8 NPWRON4:1;
	uint8 NPWRON3:1;
	uint8 NPWRON2:1;
	uint8 NPWRON1:1;		
}st_RFIC_EVENTPower;


typedef union
{
	st_RFIC_EVENTPower b;
	uint8 U:8;
		  
}Un_RFIC_EVENTPower;


typedef struct
{
	uint8 PathB:1;
	uint8 PathA:1;
	uint8 ch:3;
	uint8 Rsv3:1;
	uint8 ser:3;	 
}st_RFIC_EVENTConfig;


typedef union
{
	st_RFIC_EVENTConfig b;
	uint8 U:8;
		  
}Un_RFIC_EVENTConfig;

 
typedef struct
 {
   Un_RFIC_EVENTSystem System;
   Un_RFIC_EVENTEvents Events;
   Un_RFIC_EVENTPower Power;
   Un_RFIC_EVENTConfig Config;		  
 }st_RFIC_EVENTStatus;


static u8	Read_RKEdata(st_RKEdata *data, u8 rawdata[]);
static void	Read_RFdataLocation(st_RFdata *data, u8 rawdata[]);
static void	Read_RFdataAuth(st_RFdataAuth *data, u8 rawdata[]);
static void	Read_RFdataWelHands(st_RFdata *data, u8 rawdata[]);

#define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
#include "MemMap.h"


st_RKEdata RcvRKEdata;	
st_RFdata  RcvRFdata[kMax_FOB];
st_RFdataAuth	RcvRFdataAuth; 

u8	b_RkeFunction_OK = Off;


u16 Loca_RSSI[4][kANTENA_INDEX_MAX]={0,};
u16 Auth_RSSI[kANTENA_INDEX_MAX][3]={0,};
u8 Auth_RSSIcos[kANTENA_INDEX_MAX][3]={0,};

uint8 logic_rfic_cmd = RFIC_CMD_GET_EVENT_STATUS;

static e_RFIC_SysMode U8_rfic_SysMode = kRFIC_SysMode_Idle;
static e_RFIC_SysMode U8_rfic_LastSearch = kRFIC_SysMode_Idle;
static e_RFIC_SysMode U8_rfic_SysModeConfirm = kRFIC_SysMode_Idle;

static uint8 U8_rfic_init = Off;

static uint8 U8_CDD_RFIC_TxData[100]={0,};
static uint8 U8_CDD_RFIC_SPIRxData[100]={0,};
static uint8 U8_CDD_RFIC_RxFifoData[100]={0,};

static uint8 U8_rfic_RawDataRemainder = 0u;
static uint8 U8_rfic_RawDataLength = 0u;
static uint8 U8_rfic_SystemModeConfig = 0u; 	
static uint8 U8_rfic_ServiceChConfig = 0u;

static uint8 U8_CDD_RFIC_RxFifoLevel=0;

uint8 b_DiagRKEDataRcvEvtFlg = 0;
uint8 b_DiagTPMSDataRcvEvtFlg = 0;


#define	PATH_A	0	/* RKE */
#define	PATH_B	1	/* Welcome */

static uint8 rcvpath = 0u;



static st_RFIC_EVENTStatus RFIC_EventStatus={0,0,0,0};

static uint8 U8_CDD_RFIC_RxPATH = RECEIVE_PATH_NONE;

// static uint8 CDD_RFIC_Confirmdata[16]; 

uint8 b_DiagRFDataRcvEvtFlg = 0;   

uint8 U8_RFIC_ExtIRQ_Activeflag = 0;

static u8 b_rfic_IRQ_Pending = Off;

FUNC(void, CDD_RFIC_CODE)Set_RFIC_SysMode(e_RFIC_SysMode mode);
static FUNC(uint8, CDD_RFIC_CODE) Read_RKEdata(st_RKEdata *data, uint8 rawdata[]);
static FUNC(void, CDD_RFIC_CODE) Read_RFdataLocation(st_RFdata *data, uint8 rawdata[]);
static FUNC(void, CDD_RFIC_CODE) Read_RFdataAuth(st_RFdataAuth *data, uint8 rawdata[]);
static FUNC(void, CDD_RFIC_CODE) Read_RFdataWelHands(st_RFdata *data, uint8 rawdata[]);

#define OS_STOP_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
#include "MemMap.h"


  

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
 * IOHWAB_UINT8: Integer in interval [0...255]
 * uint8: Integer in interval [0...255] (standard type)
 *
 *********************************************************************************************************************/


#define CDD_RFIC_START_SEC_CODE
#include "CDD_RFIC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_RFIC_Control_ISR
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * This runnable is never executed by the RTE.
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RficSysModeConfirm_P_SR_RficSysModeConfirm(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetValidFobFoundResult_P_CS(uint8 fob_num)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_RFIC_Control_ISR_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_RFIC_CODE) RE_RFIC_Control_ISR(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_RFIC_Control_ISR
 *********************************************************************************************************************/

  /* Remove This Function */ 
 
 /**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#if 1
FUNC(void, CDD_RFIC_CODE) RFIC_ISR_Logic(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_RFIC_WakeUp
 *********************************************************************************************************************/
	uint8 Index=0;
	uint8 U8_rfic_crc4chk=255;
	uint8 U8_rfic_rkechk=0;

	uint8 U8_startIndex=0;
	uint8 U8_RficSPI_retTransmit=0;


	if(logic_rfic_cmd == RFIC_CMD_GET_EVENT_STATUS)
	{
		U8_CDD_RFIC_TxData[0] = RFIC_CMD_GET_EVENT_STATUS;
		U8_CDD_RFIC_TxData[1] = 0x0U;
		U8_CDD_RFIC_TxData[2] = 0x0U;
		U8_CDD_RFIC_TxData[3] = 0x0U;
		// U8_CDD_RFIC_TxData[4] = 0x0U;

    	Spi_SetupEB(SpiConf_SpiChannel_RFIC_CH, U8_CDD_RFIC_TxData, U8_CDD_RFIC_SPIRxData, 4);
		U8_RficSPI_retTransmit = Spi_SyncTransmit(SpiConf_SpiSequence_RFIC_SEQ_DATA);

		RFIC_EventStatus.System.U = U8_CDD_RFIC_SPIRxData[0];
		RFIC_EventStatus.Events.U = U8_CDD_RFIC_SPIRxData[0];
		RFIC_EventStatus.Power.U  = U8_CDD_RFIC_SPIRxData[0];
		RFIC_EventStatus.Config.U = U8_CDD_RFIC_SPIRxData[0];
		U8_startIndex=4;

#if 0
		if(U8_rfic_init == Off)
		{
			if((RFIC_EventStatus.System.b.SYS_RDY==0x01)/*&&(RFIC_EventStatus.Power.b.PWRON==0x01)*/)
			{
				U8_rfic_init = On;
				Set_RFIC_SysMode(kRFIC_SysMode_RcvRKE);			
			}
			else
			{
				// Set_RFIC_SysMode(kRFIC_SysMode_Idle);
			}
		}
#endif

		// logic_rfic_cmd = RFIC_CMD_SET_SYSMODE;
		logic_rfic_cmd = RFIC_CMD_READ_RX_FIFO_LEVEL;
	}
	else if(logic_rfic_cmd == RFIC_CMD_SET_SYSMODE)
	{
		U8_CDD_RFIC_TxData[0] = RFIC_CMD_SET_SYSMODE;
		U8_CDD_RFIC_TxData[1] = U8_rfic_SystemModeConfig;
		U8_CDD_RFIC_TxData[2] = U8_rfic_ServiceChConfig;
		// U8_CDD_RFIC_TxData[3] = 0x0U;

    	Spi_SetupEB(SpiConf_SpiChannel_RFIC_CH, U8_CDD_RFIC_TxData, U8_CDD_RFIC_SPIRxData, 3);
		U8_RficSPI_retTransmit = Spi_SyncTransmit(SpiConf_SpiSequence_RFIC_SEQ_DATA);

		RFIC_EventStatus.System.U = U8_CDD_RFIC_SPIRxData[0];
		RFIC_EventStatus.Events.U = U8_CDD_RFIC_SPIRxData[1];
		U8_startIndex=3;

		U8_rfic_SysModeConfirm = U8_rfic_SysMode;

		Rte_Write_RficSysModeConfirm_P_SR_RficSysModeConfirm(U8_rfic_SysModeConfirm);
	}
	else if(logic_rfic_cmd == RFIC_CMD_READ_RX_FIFO_LEVEL)
	{
		U8_CDD_RFIC_TxData[0] = RFIC_CMD_READ_RX_FIFO_LEVEL;
		U8_CDD_RFIC_TxData[1] = 0x0U;
		U8_CDD_RFIC_TxData[2] = 0x0U;
		// U8_CDD_RFIC_TxData[3] = 0x0U;

		Spi_SetupEB(SpiConf_SpiChannel_RFIC_CH, U8_CDD_RFIC_TxData, U8_CDD_RFIC_SPIRxData, 3);
		U8_RficSPI_retTransmit = Spi_SyncTransmit(SpiConf_SpiSequence_RFIC_SEQ_DATA);

		U8_CDD_RFIC_RxFifoLevel = U8_CDD_RFIC_SPIRxData[2];

		RFIC_EventStatus.System.U = U8_CDD_RFIC_SPIRxData[0];
		RFIC_EventStatus.Events.U = U8_CDD_RFIC_SPIRxData[1];
	   U8_startIndex=2;

		if(RFIC_EventStatus.Events.b.EOTA == 0x1U)
		{
			U8_CDD_RFIC_RxPATH = RECEIVE_PATH_A;

			logic_rfic_cmd = RFIC_CMD_READ_RX_FIFO_DATA;
		}
		else if(RFIC_EventStatus.Events.b.EOTB == 0x1U)
		{
			U8_CDD_RFIC_RxPATH = RECEIVE_PATH_B;

			logic_rfic_cmd = RFIC_CMD_READ_RX_FIFO_DATA;
		}
		else
		{
			U8_CDD_RFIC_RxPATH = RECEIVE_PATH_NONE;

			logic_rfic_cmd = RFIC_CMD_GET_EVENT_STATUS;
		}
	}
	else if(logic_rfic_cmd == RFIC_CMD_READ_RX_FIFO_DATA)
	{
		U8_CDD_RFIC_TxData[0]= RFIC_CMD_READ_RX_FIFO_DATA;
		U8_CDD_RFIC_TxData[1]= U8_CDD_RFIC_RxFifoLevel;
		U8_CDD_RFIC_TxData[2]= 0x0U;
		for(Index=3; Index<(3+U8_CDD_RFIC_RxFifoLevel); Index++)
		{
			U8_CDD_RFIC_TxData[Index]= 0x0U;
		}

		Spi_SetupEB(SpiConf_SpiChannel_RFIC_CH, U8_CDD_RFIC_TxData, U8_CDD_RFIC_SPIRxData, Index);
		U8_RficSPI_retTransmit = Spi_SyncTransmit(SpiConf_SpiSequence_RFIC_SEQ_DATA);

		if(U8_rfic_SysMode==kRFIC_SysMode_RcvTPMS)
		{
								
		}
		else
		{
			if((U8_rfic_SysMode==kRFIC_SysMode_RcvRKE)||(U8_rfic_SysMode==kRFIC_SysMode_RcvRF_WlHn))
			{
				if(U8_CDD_RFIC_RxPATH == RECEIVE_PATH_A)
				{
				  	U8_rfic_RawDataLength = Get_RawDataLength(kRawDataLen_RKE);		
		         U8_rfic_RawDataRemainder = Get_RawDataRemainder(kRawDataLen_RKE);
					
					U8_rfic_SysMode = kRFIC_SysMode_RcvRKE;
				}
				else if(U8_CDD_RFIC_RxPATH == RECEIVE_PATH_B)
				{
				 	U8_rfic_RawDataLength = Get_RawDataLength(kRawDataLen_WlHnSearch);		
		         U8_rfic_RawDataRemainder = Get_RawDataRemainder(kRawDataLen_WlHnSearch);

					U8_rfic_SysMode = kRFIC_SysMode_RcvRF_WlHn;
				}
				else
				{
					U8_rfic_RawDataLength = 0;			// ???
					U8_rfic_RawDataRemainder = 0;		// ??
				}
							
				U8_rfic_crc4chk = check_crc4(&U8_CDD_RFIC_SPIRxData[3], U8_rfic_RawDataLength, U8_rfic_RawDataRemainder);
				
				//if(U8_rfic_crc4chk==0)
				if(1)
				{
					U8_rfic_LastSearch = U8_rfic_SysMode;
				
					switch(U8_rfic_SysMode)
					{
						case kRFIC_SysMode_RcvRKE:
							U8_rfic_rkechk = Read_RKEdata(&RcvRKEdata,&U8_CDD_RFIC_SPIRxData[3]);
							b_DiagRKEDataRcvEvtFlg = U8_rfic_rkechk;
							
							if(U8_rfic_rkechk == On)
							{
								//Confirm_RKE_Event();
								//Rte_Call_R_RFIC_ISR_Logic_CS();
							}
							break;
							
						case kRFIC_SysMode_RcvRF_Loca:
							Read_RFdataLocation(RcvRFdata,&U8_CDD_RFIC_SPIRxData[3]);
							break;
							
						case kRFIC_SysMode_RcvRF_Auth:
							Read_RFdataAuth(&RcvRFdataAuth,&U8_CDD_RFIC_SPIRxData[3]);
							break;
								
						case kRFIC_SysMode_RcvRF_WlHn:					
							Read_RFdataWelHands(RcvRFdata,&U8_CDD_RFIC_SPIRxData[3]);
							break;
							
						default:
						break;
					}
				}
				else
				{		
				}
			}	
		}
	}
#if 0
	else if(logic_rfic_cmd == rf_SpiReqModeChgIdleAndOther)
	{
		rfic_SpiReq0x0D(0x00,0x00); /* Set Idle Mode */
		rfic_SysModeConfirm = kRFIC_SysMode_Idle; /* Idle Mode */			

		(void)Rte_Write_P_rfic_SysModeConfirm_SR(rfic_SysModeConfirm);

		logic_rfic_Spi_mode = rf_LogicSpi_NextCmd;
		logic_rfic_cmd = rf_SpiReq0x0D_SetSystemMode;

		rfic_Spi_StartOC(Par_spi_timing_T4_direct);
	}	
	else if(logic_rfic_cmd == rf_SpiReq0x0A_ReadEEPROM)
	{
		/* TPMS */
		Rte_Call_R_TPMS_Set_RF_Failure_Status_CS(rfic_SpiReq0x0A());

		logic_rfic_Spi_mode = rf_LogicSpi_StopOC;
		logic_rfic_cmd = rf_SpiReq_None;

		rfic_Spi_StartOC(Par_spi_timing_T4_direct);	
	}
#endif
	else
	{

	}

	logic_rfic_cmd = RFIC_CMD_GET_EVENT_STATUS;
   
   // Enable the WAKEUP- IRQ (RFIC_IRQ) Notification function
   Rte_Call_RficICU_R_IcuEnableEdgeDetection();
   Rte_Call_RficICU_R_IcuEnableNotification();
   
  // Update the Gobal Variable value to Notification is Enabled  
 
  U8_RFIC_ExtIRQ_Activeflag = 1;  

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}
#else
FUNC(void, CDD_RFIC_CODE) RE_RFIC_WakeUp(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_RFIC_WakeUp
 *********************************************************************************************************************/
    uint8 ret;
	
    uint8 Index=0;
	
	uint8 U8_rfic_crc4chk=255;
	
	uint8 U8_rfic_rkechk=0;
	
	
   // Disable the Wakeup IRQ notification Function. (Using IOHWAB Functions)
   
    Rte_Call_RficICU_R_IcuDisableNotification();
	Rte_Call_RficICU_R_IcuDisableEdgeDetection();
	
	U8_RFIC_ExtIRQ_Activeflag = 0; 

   // IRQ Processing --> 1. Check RFIC is in INIT mode or Receive Mode (By checking Receive Mode Variable Value)

     // If RFIC is in INIT MOde  
         // check for RFIC System is ready and Power ON (By sending GetEventBytes Command)
         
         
         // If power is ON and RFIC System is ready then set SystemMode to Receive RKE Mode (Set Receive Mode Variable to value Enabled) or else set System Mode to Idle.   
        
        
        //   send the system Mode value to RFIC using SetSystemMode command (0x0D)
      
   if(U8_rfic_init==0)
   {
	    
	    U8_CDD_RFIC_TxData[0]=RFIC_CMD_GET_EVENT_STATUS;
        U8_CDD_RFIC_TxData[1]=0x0U;
        U8_CDD_RFIC_TxData[2]=0x0U;
        U8_CDD_RFIC_TxData[3]=0x0U;		
		
        ret = RE_RFIC_SPIProcessor(U8_CDD_RFIC_TxData,NULL_PTR,4);
		if((RFIC_EventStatus.System.b.SYS_RDY==0x01)&&(RFIC_EventStatus.Power.b.PWRON==0x01))
		{
			U8_rfic_init =1;
			Set_RFIC_SysMode(kRFIC_SysMode_RcvRKE);			
		}
		else
		{
			Set_RFIC_SysMode(kRFIC_SysMode_Idle);
		}
	    
		if(U8_rfic_SysModeConfirm != U8_rfic_SysMode)
		{
		   U8_CDD_RFIC_TxData[0]= RFIC_CMD_SET_SYSMODE;
           U8_CDD_RFIC_TxData[1]= U8_rfic_SystemModeConfig;
           U8_CDD_RFIC_TxData[2]= U8_rfic_ServiceChConfig;		
		   
           ret = RE_RFIC_SPIProcessor(U8_CDD_RFIC_TxData,NULL_PTR,3);
		   
		   U8_rfic_SysModeConfirm = U8_rfic_SysMode;
		   
		   Rte_Write_RficSysModeConfirm_P_SR_RficSysModeConfirm(U8_rfic_SysModeConfirm);
        }
		
   }
   else
   {
	   
	   	U8_CDD_RFIC_TxData[0]=RFIC_CMD_READ_RX_FIFO_LEVEL;
        U8_CDD_RFIC_TxData[1]=0x0U;
        U8_CDD_RFIC_TxData[2]=0x0U;

	    ret = RE_RFIC_SPIProcessor(U8_CDD_RFIC_TxData,&U8_CDD_RFIC_RxFifoLevel,3);
		
		  if(RFIC_EventStatus.Events.b.EOTA == 0x1U)
		  {
			 U8_CDD_RFIC_RxPATH = RECEIVE_PATH_A;
		  }
		  else if(RFIC_EventStatus.Events.b.EOTB == 0x1U)
		  {
			 U8_CDD_RFIC_RxPATH = RECEIVE_PATH_B;
	  
		  }
		  else
		  {
		     U8_CDD_RFIC_RxPATH = RECEIVE_PATH_NONE;
			 
		  }
			  
	    
	    U8_CDD_RFIC_TxData[0]= RFIC_CMD_READ_RX_FIFO_DATA;
        U8_CDD_RFIC_TxData[1]= U8_CDD_RFIC_RxFifoLevel;
        U8_CDD_RFIC_TxData[2]= 0x0U;
		
		for(Index=3;Index<U8_CDD_RFIC_RxFifoLevel+3;Index++)
		{
			U8_CDD_RFIC_TxData[Index]= 0x0U;		
			
		}
		 
	    ret = RE_RFIC_SPIProcessor(U8_CDD_RFIC_TxData,U8_CDD_RFIC_RxFifoData,U8_CDD_RFIC_RxFifoLevel+3);
	   
	    
		if(U8_rfic_SysMode==kRFIC_SysMode_RcvTPMS)
		{
			
			
			
		}
		else
		{
			
			if((U8_rfic_SysMode==kRFIC_SysMode_RcvRKE)||(U8_rfic_SysMode==kRFIC_SysMode_RcvRF_WlHn))
			{
				if(U8_CDD_RFIC_RxPATH == RECEIVE_PATH_A)
				{
				  U8_rfic_RawDataLength = Get_RawDataLength(kRawDataLen_RKE);		
		          U8_rfic_RawDataRemainder = Get_RawDataRemainder(kRawDataLen_RKE);
					
				}
				else if(U8_CDD_RFIC_RxPATH == RECEIVE_PATH_B)
				{
				  U8_rfic_RawDataLength = Get_RawDataLength(kRawDataLen_WlHnSearch);		
		          U8_rfic_RawDataRemainder = Get_RawDataRemainder(kRawDataLen_WlHnSearch);						
				}
				else
				{
					U8_rfic_RawDataLength = 0;
					U8_rfic_RawDataRemainder = 0;
				}
				
				
				
				if(U8_CDD_RFIC_RxPATH != RECEIVE_PATH_NONE)
				{
					
					U8_rfic_crc4chk = check_crc4(U8_CDD_RFIC_RxFifoData,U8_rfic_RawDataLength,U8_rfic_RawDataRemainder);
					
					if(U8_rfic_crc4chk==0)
					{
						U8_rfic_LastSearch = U8_rfic_SysMode;
						
					        switch(U8_rfic_SysMode)
					        {
					            case kRFIC_SysMode_RcvRKE:
					        	
					            	U8_rfic_rkechk = Read_RKEdata(&RcvRKEdata,U8_CDD_RFIC_RxFifoData);
					            	b_DiagRKEDataRcvEvtFlg = U8_rfic_rkechk;
					            	
					            	if(U8_rfic_rkechk == 0x1u)
					            	{
					            		//Confirm_RKE_Event();
					            		//Rte_Call_R_RFIC_ISR_Logic_CS();
					            	}
					            	break;
					            	
					            case kRFIC_SysMode_RcvRF_Loca:
					            	Read_RFdataLocation(RcvRFdata,U8_CDD_RFIC_RxFifoData);
					            	break;
					            	
					            case kRFIC_SysMode_RcvRF_Auth:
					            	Read_RFdataAuth(&RcvRFdataAuth,U8_CDD_RFIC_RxFifoData);
					            	break;
                                
					            case kRFIC_SysMode_RcvRF_WlHn:					
					            	Read_RFdataWelHands(RcvRFdata,U8_CDD_RFIC_RxFifoData);
					            	break;
					            	
					            default:
					        	break;
					        }
						
						
					}
					else
					{
						
						
					}
	
					
				}	
				
		
				
			}
			
			
			
			
			
			
		}
		
	   
  
	   
   }
   
   // Enable the WAKEUP- IRQ (RFIC_IRQ) Notification function
   Rte_Call_RficICU_R_IcuEnableEdgeDetection();
   Rte_Call_RficICU_R_IcuEnableNotification();
   
  // Update the Gobal Variable value to Notification is Enabled  
 
  U8_RFIC_ExtIRQ_Activeflag = 1;   

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}
#endif
 
/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_SearchSysmode
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <SearchSysMode_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_SearchSysmode(uint8 RFIC_SystemMode, uint8 RFIC_ReqCmd)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_SearchSysmode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_rfic_IRQ_ActiveCheck
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <RficIRQActiveCheck_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_rfic_IRQ_ActiveCheck(uint8 kb_TerminalControlState)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_rfic_IRQ_ActiveCheck_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void rfic_IRQ_EventCheck(void)
{
	// if(logic_rfic_Spi_mode==rf_LogicSpi_None)
	// {
		b_rfic_IRQ_Pending = Off;
		// logic_rfic_Spi_mode = rf_LogicSpi_Send;

		
		if(Get_rfic_init() != Off)
		{
			logic_rfic_cmd = RFIC_CMD_READ_RX_FIFO_LEVEL;	/* RFIC event status check */
		}
		else
		{
			logic_rfic_cmd = RFIC_CMD_GET_EVENT_STATUS;		/* RFIC Init check */
		}
	// }
	// else
	// {
		// b_rfic_IRQ_Pending = On;
	// }
}


FUNC(void, CDD_RFIC_CODE) RE_rfic_IRQ_ActiveCheck(uint8 kb_TerminalControlState) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_rfic_IRQ_ActiveCheck
 *********************************************************************************************************************/
   if(U8_RFIC_ExtIRQ_Activeflag == 0)
	{
		// Enable the WAKEUP- IRQ (RFIC_IRQ) Notification function
		Rte_Call_RficICU_R_IcuEnableEdgeDetection();
		Rte_Call_RficICU_R_IcuEnableNotification();
		// Update the Gobal Variable value to Notification is Enabled   
		U8_RFIC_ExtIRQ_Activeflag = 1;
	}
	else
	{

	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_rfic_IRQ_PendingCheck
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <RficIRQPendingCheck_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_rfic_IRQ_PendingCheck(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_rfic_IRQ_PendingCheck_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_RFIC_CODE) RE_rfic_IRQ_PendingCheck(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_rfic_IRQ_PendingCheck
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_rfic_init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * This runnable is never executed by the RTE.
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_RficICU_R_IcuDisableEdgeDetection(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_RficICU_R_IcuDisableNotification(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_RficICU_R_IcuEnableEdgeDetection(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_RficICU_R_IcuEnableNotification(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_RficNRESDio_R_Read(void)
 *     Asynchronous Server Invocation
 *   Std_ReturnType Rte_Call_RficNRESDio_R_Write(IOHWAB_UINT8 SetValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Dio_I_IoHwAbApplicationError
 *
 *   Server Result:
 *   --------------
 *   Std_ReturnType Rte_Result_RficNRESDio_R_Read(IOHWAB_UINT8 *ReadValue)
 *     Returned Application Errors: RTE_E_Dio_I_IoHwAbApplicationError
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_rfic_init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_RFIC_CODE) RE_rfic_init(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_rfic_init
 *********************************************************************************************************************/

  // Set RFIC_NRES pin value to High (Using IOHWAB Interfaces)
  
  Rte_Call_RficNRESDio_R_Write(1);

  // Enable the WAKEUP- IRQ (RFIC_IRQ) Notification function
   Rte_Call_RficICU_R_IcuEnableEdgeDetection();
   Rte_Call_RficICU_R_IcuEnableNotification();
   
  // Update the Gobal Variable value to Notification is Enabled  
 
  U8_RFIC_ExtIRQ_Activeflag = 1;


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

FUNC(void, CDD_RFIC_CODE) RE_SearchSysmode(uint8 RFIC_SystemMode, uint8 RFIC_ReqCmd) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_SearchSysmode
 *********************************************************************************************************************/
	Set_RFIC_SysMode(RFIC_SystemMode);
	//Set_RFIC_ReqCmd(RFIC_ReqCmd);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


FUNC(void, CDD_RFIC_CODE) RE_RFIC_WakeUp(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_RFIC_WakeUp
 *********************************************************************************************************************/
#if 0
   // Disable the Wakeup IRQ notification Function. (Using IOHWAB Functions)
   
	Rte_Call_RficICU_R_IcuDisableNotification();
	Rte_Call_RficICU_R_IcuDisableEdgeDetection();

	U8_RFIC_ExtIRQ_Activeflag = 0; 
#else
	uint8 Index=0;
	uint8 U8_rfic_crc4chk=255;
	uint8 U8_rfic_rkechk=0;

	uint8 U8_startIndex=0;
	uint8 U8_RficSPI_retTransmit=0;




/*
	uint32 TestCnt=0;
	uint32 Time10us=10;		// 20:13
	uint32 Time100us=1000;	// 109
	uint32 Time10ms=100000;

Dio_WriteChannel(DioConf_DioChannel_RFIC_NRES, 0);
for(TestCnt=0; TestCnt<Time10us; TestCnt++){	};

Dio_WriteChannel(DioConf_DioChannel_RFIC_NRES, 1);
for(TestCnt=0; TestCnt<Time100us; TestCnt++){	};

Dio_WriteChannel(DioConf_DioChannel_RFIC_NRES, 0);
for(TestCnt=0; TestCnt<Time10ms; TestCnt++){	};

Dio_WriteChannel(DioConf_DioChannel_RFIC_NRES, 1);
for(TestCnt=0; TestCnt<1000; TestCnt++){	};

Dio_WriteChannel(DioConf_DioChannel_RFIC_NRES, 0);
for(TestCnt=0; TestCnt<25; TestCnt++){	};

Dio_WriteChannel(DioConf_DioChannel_RFIC_NRES, 1);
*/

	Rte_Call_RficICU_R_IcuDisableNotification();
	Rte_Call_RficICU_R_IcuDisableEdgeDetection();

	U8_RFIC_ExtIRQ_Activeflag = 0; 





	// if(logic_rfic_cmd == RFIC_CMD_GET_EVENT_STATUS)
	#if 0
		U8_CDD_RFIC_TxData[0] = RFIC_CMD_GET_EVENT_STATUS;
		U8_CDD_RFIC_TxData[1] = 0x0U;
		U8_CDD_RFIC_TxData[2] = 0x0U;
		U8_CDD_RFIC_TxData[3] = 0x0U;
		// U8_CDD_RFIC_TxData[4] = 0x0U;

    	Spi_SetupEB(SpiConf_SpiChannel_RFIC_CH, U8_CDD_RFIC_TxData, U8_CDD_RFIC_SPIRxData, 4);
		U8_RficSPI_retTransmit = Spi_SyncTransmit(SpiConf_SpiSequence_RFIC_SEQ_DATA);

		RFIC_EventStatus.System.U = U8_CDD_RFIC_SPIRxData[0];
		RFIC_EventStatus.Events.U = U8_CDD_RFIC_SPIRxData[0];
		RFIC_EventStatus.Power.U  = U8_CDD_RFIC_SPIRxData[0];
		RFIC_EventStatus.Config.U = U8_CDD_RFIC_SPIRxData[0];
		U8_startIndex=4;


		if(U8_rfic_init == Off)
		{
			if((RFIC_EventStatus.System.b.SYS_RDY==0x01)/*&&(RFIC_EventStatus.Power.b.PWRON==0x01)*/)
			{
				U8_rfic_init = On;
				Set_RFIC_SysMode(kRFIC_SysMode_RcvRKE);			
			}
			else
			{
				// Set_RFIC_SysMode(kRFIC_SysMode_Idle);
			}
		}
#endif

		// logic_rfic_cmd = RFIC_CMD_SET_SYSMODE;
		logic_rfic_cmd = RFIC_CMD_READ_RX_FIFO_LEVEL;

	/*****************************************************************/
	/*       	rfic_Spi_StartOC(Par_spi_timing_T4_direct);          */
	/*****************************************************************/



	// else if(logic_rfic_cmd == RFIC_CMD_SET_SYSMODE)
#if 0
		U8_CDD_RFIC_TxData[0] = RFIC_CMD_SET_SYSMODE;
		U8_CDD_RFIC_TxData[1] = U8_rfic_SystemModeConfig;
		U8_CDD_RFIC_TxData[2] = U8_rfic_ServiceChConfig;
		// U8_CDD_RFIC_TxData[3] = 0x0U;

    	Spi_SetupEB(SpiConf_SpiChannel_RFIC_CH, U8_CDD_RFIC_TxData, U8_CDD_RFIC_SPIRxData, 3);
		U8_RficSPI_retTransmit = Spi_SyncTransmit(SpiConf_SpiSequence_RFIC_SEQ_DATA);

		RFIC_EventStatus.System.U = U8_CDD_RFIC_SPIRxData[0];
		RFIC_EventStatus.Events.U = U8_CDD_RFIC_SPIRxData[1];
		U8_startIndex=3;

		U8_rfic_SysModeConfirm = U8_rfic_SysMode;

		Rte_Write_RficSysModeConfirm_P_SR_RficSysModeConfirm(U8_rfic_SysModeConfirm);

	/*****************************************************************/
	/*       	rfic_Spi_StartOC(Par_spi_timing_T4_direct);          */
	/*****************************************************************/

#endif
	
	// else if(logic_rfic_cmd == RFIC_CMD_READ_RX_FIFO_LEVEL)
		U8_CDD_RFIC_TxData[0] = RFIC_CMD_READ_RX_FIFO_LEVEL;
		U8_CDD_RFIC_TxData[1] = 0x0U;
		U8_CDD_RFIC_TxData[2] = 0x0U;
		// U8_CDD_RFIC_TxData[3] = 0x0U;

		Spi_SetupEB(SpiConf_SpiChannel_RFIC_CH, U8_CDD_RFIC_TxData, U8_CDD_RFIC_SPIRxData, 3);
		U8_RficSPI_retTransmit = Spi_SyncTransmit(SpiConf_SpiSequence_RFIC_SEQ_DATA);

		U8_CDD_RFIC_RxFifoLevel = U8_CDD_RFIC_SPIRxData[2];

		RFIC_EventStatus.System.U = U8_CDD_RFIC_SPIRxData[0];
		RFIC_EventStatus.Events.U = U8_CDD_RFIC_SPIRxData[1];
	   U8_startIndex=2;

		if(RFIC_EventStatus.Events.b.EOTA == 0x1U)
		{
			U8_CDD_RFIC_RxPATH = RECEIVE_PATH_A;

			logic_rfic_cmd = RFIC_CMD_READ_RX_FIFO_DATA;
		}
		else if(RFIC_EventStatus.Events.b.EOTB == 0x1U)
		{
			U8_CDD_RFIC_RxPATH = RECEIVE_PATH_B;

			logic_rfic_cmd = RFIC_CMD_READ_RX_FIFO_DATA;
		}
		else
		{
			U8_CDD_RFIC_RxPATH = RECEIVE_PATH_NONE;

			logic_rfic_cmd = RFIC_CMD_GET_EVENT_STATUS;
		}

	/*****************************************************************/
	/*       	rfic_Spi_StartOC(Par_spi_timing_T4_direct);          */
	/*****************************************************************/

	// else if(logic_rfic_cmd == RFIC_CMD_READ_RX_FIFO_DATA)
		U8_CDD_RFIC_TxData[0]= RFIC_CMD_READ_RX_FIFO_DATA;
		U8_CDD_RFIC_TxData[1]= U8_CDD_RFIC_RxFifoLevel;
		U8_CDD_RFIC_TxData[2]= 0x0U;
		for(Index=3; Index<(3+U8_CDD_RFIC_RxFifoLevel); Index++)
		{
			U8_CDD_RFIC_TxData[Index]= 0x0U;
		}

		Spi_SetupEB(SpiConf_SpiChannel_RFIC_CH, U8_CDD_RFIC_TxData, U8_CDD_RFIC_SPIRxData, Index);
		U8_RficSPI_retTransmit = Spi_SyncTransmit(SpiConf_SpiSequence_RFIC_SEQ_DATA);

		if(U8_rfic_SysMode==kRFIC_SysMode_RcvTPMS)
		{
								
		}
		else
		{
			if((U8_rfic_SysMode==kRFIC_SysMode_RcvRKE)||(U8_rfic_SysMode==kRFIC_SysMode_RcvRF_WlHn))
			{
				if(U8_CDD_RFIC_RxPATH == RECEIVE_PATH_A)
				{
				  	U8_rfic_RawDataLength = Get_RawDataLength(kRawDataLen_RKE);		
		         U8_rfic_RawDataRemainder = Get_RawDataRemainder(kRawDataLen_RKE);
					
					U8_rfic_SysMode = kRFIC_SysMode_RcvRKE;
				}
				else if(U8_CDD_RFIC_RxPATH == RECEIVE_PATH_B)
				{
				 	U8_rfic_RawDataLength = Get_RawDataLength(kRawDataLen_WlHnSearch);		
		         U8_rfic_RawDataRemainder = Get_RawDataRemainder(kRawDataLen_WlHnSearch);

					U8_rfic_SysMode = kRFIC_SysMode_RcvRF_WlHn;
				}
				else
				{
					U8_rfic_RawDataLength = 0;			// ???
					U8_rfic_RawDataRemainder = 0;		// ???
				}
			}
							
			//U8_rfic_crc4chk = check_crc4(&U8_CDD_RFIC_SPIRxData[3], U8_rfic_RawDataLength, U8_rfic_RawDataRemainder);
			U8_rfic_crc4chk = 0;
			if(U8_rfic_crc4chk==0)
			{
				U8_rfic_LastSearch = U8_rfic_SysMode;
			
				switch(U8_rfic_SysMode)
				{
					case kRFIC_SysMode_RcvRKE:
						U8_rfic_rkechk = Read_RKEdata(&RcvRKEdata,&U8_CDD_RFIC_SPIRxData[3]);
						b_DiagRKEDataRcvEvtFlg = U8_rfic_rkechk;
						
						if(U8_rfic_rkechk == On)
						{
							//Confirm_RKE_Event();
							//Rte_Call_R_RFIC_ISR_Logic_CS();
						}
						break;
						
					case kRFIC_SysMode_RcvRF_Loca:
						Read_RFdataLocation(RcvRFdata,&U8_CDD_RFIC_SPIRxData[3]);
						break;
						
					case kRFIC_SysMode_RcvRF_Auth:
						Read_RFdataAuth(&RcvRFdataAuth,&U8_CDD_RFIC_SPIRxData[3]);
						break;
							
					case kRFIC_SysMode_RcvRF_WlHn:					
						Read_RFdataWelHands(RcvRFdata,&U8_CDD_RFIC_SPIRxData[3]);
						break;
						
					default:
					break;
				}
			}
			else
			{		
			}
				
		}

	/*****************************************************************/
	/*       	rfic_Spi_StartOC(Par_spi_timing_T4_direct);          */
	/*****************************************************************/
	
#if 0
	else if(logic_rfic_cmd == rf_SpiReqModeChgIdleAndOther)
	{
		rfic_SpiReq0x0D(0x00,0x00); /* Set Idle Mode */
		rfic_SysModeConfirm = kRFIC_SysMode_Idle; /* Idle Mode */			

		(void)Rte_Write_P_rfic_SysModeConfirm_SR(rfic_SysModeConfirm);

		logic_rfic_Spi_mode = rf_LogicSpi_NextCmd;
		logic_rfic_cmd = rf_SpiReq0x0D_SetSystemMode;

		rfic_Spi_StartOC(Par_spi_timing_T4_direct);
	}	
	else if(logic_rfic_cmd == rf_SpiReq0x0A_ReadEEPROM)
	{
		/* TPMS */
		Rte_Call_R_TPMS_Set_RF_Failure_Status_CS(rfic_SpiReq0x0A());

		logic_rfic_Spi_mode = rf_LogicSpi_StopOC;
		logic_rfic_cmd = rf_SpiReq_None;

		rfic_Spi_StartOC(Par_spi_timing_T4_direct);	
	}
#endif

	logic_rfic_cmd = RFIC_CMD_GET_EVENT_STATUS;

	U8_CDD_RFIC_TxData[0] = RFIC_CMD_GET_EVENT_STATUS;
	U8_CDD_RFIC_TxData[1] = 0x0U;
	U8_CDD_RFIC_TxData[2] = 0x0U;
	U8_CDD_RFIC_TxData[3] = 0x0U;
	// U8_CDD_RFIC_TxData[4] = 0x0U;

	Spi_SetupEB(SpiConf_SpiChannel_RFIC_CH, U8_CDD_RFIC_TxData, U8_CDD_RFIC_SPIRxData, 4);
	U8_RficSPI_retTransmit = Spi_SyncTransmit(SpiConf_SpiSequence_RFIC_SEQ_DATA);

	RFIC_EventStatus.System.U = U8_CDD_RFIC_SPIRxData[0];
	RFIC_EventStatus.Events.U = U8_CDD_RFIC_SPIRxData[0];
	RFIC_EventStatus.Power.U  = U8_CDD_RFIC_SPIRxData[0];
	RFIC_EventStatus.Config.U = U8_CDD_RFIC_SPIRxData[0];
	U8_startIndex=4;

	#if 0
		if(U8_rfic_init == Off)
		{
			if((RFIC_EventStatus.System.b.SYS_RDY==0x01)/*&&(RFIC_EventStatus.Power.b.PWRON==0x01)*/)
			{
				U8_rfic_init = On;
				Set_RFIC_SysMode(kRFIC_SysMode_RcvRKE);			
			}
			else
			{
				// Set_RFIC_SysMode(kRFIC_SysMode_Idle);
			}
		}
	#else
	if(e_LF_RF_TelegramStep == kLF_RF_Telegram_Idle)
	{
		Set_RFIC_SysMode(kRFIC_SysMode_RcvRKE);
	}
		
	#endif

		logic_rfic_cmd = RFIC_CMD_SET_SYSMODE;

	/*****************************************************************/
	/*       	rfic_Spi_StartOC(Par_spi_timing_T4_direct);          */
	/*****************************************************************/

	// else if(logic_rfic_cmd == RFIC_CMD_SET_SYSMODE)
		U8_CDD_RFIC_TxData[0] = RFIC_CMD_SET_SYSMODE;
		U8_CDD_RFIC_TxData[1] = U8_rfic_SystemModeConfig;
		U8_CDD_RFIC_TxData[2] = U8_rfic_ServiceChConfig;

    	Spi_SetupEB(SpiConf_SpiChannel_RFIC_CH, U8_CDD_RFIC_TxData, U8_CDD_RFIC_SPIRxData, 3);
		U8_RficSPI_retTransmit = Spi_SyncTransmit(SpiConf_SpiSequence_RFIC_SEQ_DATA);

		RFIC_EventStatus.System.U = U8_CDD_RFIC_SPIRxData[0];
		RFIC_EventStatus.Events.U = U8_CDD_RFIC_SPIRxData[1];
		U8_startIndex=3;

		U8_rfic_SysModeConfirm = U8_rfic_SysMode;

		Rte_Write_RficSysModeConfirm_P_SR_RficSysModeConfirm(U8_rfic_SysModeConfirm);

	/*****************************************************************/
	/*       	rfic_Spi_StartOC(Par_spi_timing_T4_direct);          */
	/*****************************************************************/


   // Enable the WAKEUP- IRQ (RFIC_IRQ) Notification function
   Rte_Call_RficICU_R_IcuEnableEdgeDetection();
   Rte_Call_RficICU_R_IcuEnableNotification();
   
  	// Update the Gobal Variable value to Notification is Enabled  
 
  	U8_RFIC_ExtIRQ_Activeflag = 1;  
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

void CDD_IcuNotification_RFIC_IRQ(void)
{
  RE_RFIC_WakeUp();
}

#define CDD_RFIC_STOP_SEC_CODE
#include "CDD_RFIC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
FUNC(void, CDD_RFIC_CODE)Set_RFIC_SysMode(e_RFIC_SysMode mode)
{ 
	U8_rfic_SysMode = mode;
	
	if(mode == kRFIC_SysMode_RcvRKE)
	{
		/* Polling Mode - VCO tuning enable, IDEL(RC), RX PollingMode - StartIndex0 */
		U8_rfic_SystemModeConfig = 0x23;
		U8_rfic_ServiceChConfig = 0x00;
		U8_rfic_RawDataLength = Get_RawDataLength(kRawDataLen_RKE);		
		U8_rfic_RawDataRemainder = Get_RawDataRemainder(kRawDataLen_RKE);
	}
	else if(mode == kRFIC_SysMode_RcvTPMS)
	{
		/* RX buffered Mode - VCO tuning enable, IDLE(RC), T/M disable, Path A enable, Ch0, service2 */
		U8_rfic_SystemModeConfig = 0x22;
		U8_rfic_ServiceChConfig = 0x42;
	}		
	else if(mode == kRFIC_SysMode_RcvRF_Loca)
	{
		/* RX buffered Mode - VCO tuning enable, IDLE(RC), T/M disable, Path A enable, Ch0, service1 */
		U8_rfic_SystemModeConfig = 0x22;
		U8_rfic_ServiceChConfig = 0x41;
		U8_rfic_RawDataLength = Get_RawDataLength(kRawDataLen_LocaSearch);	
		U8_rfic_RawDataRemainder = Get_RawDataRemainder(kRawDataLen_LocaSearch);
	}
	else if(mode == kRFIC_SysMode_RcvRF_Auth)
	{
		/* RX buffered Mode - VCO tuning enable, IDLE(RC), T/M disable, Path A enable, Ch0, service1 */
		U8_rfic_SystemModeConfig = 0x22;
		U8_rfic_ServiceChConfig = 0x41;
		U8_rfic_RawDataLength = Get_RawDataLength(kRawDataLen_AuthSearch);	
		U8_rfic_RawDataRemainder = Get_RawDataRemainder(kRawDataLen_AuthSearch);
	}
	else if(mode == kRFIC_SysMode_RcvRF_WlHn)
	{
		/* Polling Mode - VCO tuning enable, IDEL(RC), RX PollingMode - StartIndex0 */
		U8_rfic_SystemModeConfig = 0x23;
		U8_rfic_ServiceChConfig = 0x00;	
		U8_rfic_RawDataLength = Get_RawDataLength(kRawDataLen_WlHnSearch);				
		U8_rfic_RawDataRemainder = Get_RawDataRemainder(kRawDataLen_WlHnSearch);

	}	
	else if(mode == kRFIC_SysMode_Idle)
	{
		/* Idle Mode - IDLE(RC) */
		U8_rfic_SystemModeConfig = 0u;	
		U8_rfic_ServiceChConfig = 0u;
		U8_rfic_RawDataLength = 0u;		
		U8_rfic_RawDataRemainder = 0u;
	}
	else
	{
		
		
	}
}
static FUNC(uint8, CDD_RFIC_CODE) Read_RKEdata(st_RKEdata *data, uint8 rawdata[])
{
	uint8 i = 0u;
	uint8 rtn = Off;
	static uint8 CDD_RFIC_Confirmdata[16];
		
	if(	(CDD_RFIC_Confirmdata[0] != rawdata[0]) ||
		(CDD_RFIC_Confirmdata[1] != rawdata[1]) ||
		(CDD_RFIC_Confirmdata[2] != rawdata[2]) ||
		(CDD_RFIC_Confirmdata[3] != rawdata[3]) ||
		(CDD_RFIC_Confirmdata[4] != rawdata[4]) ||
		(CDD_RFIC_Confirmdata[5] != rawdata[5]) ||
		(CDD_RFIC_Confirmdata[6] != rawdata[6]) ||
		(CDD_RFIC_Confirmdata[7] != rawdata[7]) ||
		(CDD_RFIC_Confirmdata[8] != rawdata[8]) ||
		(CDD_RFIC_Confirmdata[9] != rawdata[9]) ||
		(CDD_RFIC_Confirmdata[10] != rawdata[10]) ||
		(CDD_RFIC_Confirmdata[11] != rawdata[11]) ||
		(CDD_RFIC_Confirmdata[12] != rawdata[12]) ||
		(CDD_RFIC_Confirmdata[13] != rawdata[13]) ||
		(CDD_RFIC_Confirmdata[14] != rawdata[14]) ||
		(CDD_RFIC_Confirmdata[15] != rawdata[15])
	)
	{
		for(i=0;i<16;i++)
		{
			data->rkedata[i] = rawdata[i];
			CDD_RFIC_Confirmdata[i] = rawdata[i];
		}
		data->rkecmd = rawdata[8];

		b_RkeFunction_OK = On;

		rtn = On;
	}

	return rtn;
}

static FUNC(void, CDD_RFIC_CODE) Read_RFdataLocation(st_RFdata *data, uint8 rawdata[])
{
	uint8 i = 0u;

#if 0
	//i = R_Check_Passive_Encryption(&rawdata[0]);
	if(i != 0) // changed
	{
		R_Set_ValidFobFoundResult(i);
		i--;
		
		(data+i)->fob_serial[0] = rawdata[0];	
		(data+i)->fob_serial[1] = rawdata[1];
		(data+i)->fob_serial[2] = rawdata[2]; 
		(data+i)->fob_serial[3] = rawdata[3]; 
		
		(data+i)->rssi_ant[0] = (uint16)((rawdata[4]<<2)|rawdata[5]>>6);
		(data+i)->rssi_ant[1] = (uint16)(((rawdata[5]&0x3f)<<4)|rawdata[6]>>4);
		(data+i)->rssi_ant[2] = (uint16)(((rawdata[6]&0x0f)<<6)|rawdata[7]>>2);
		(data+i)->rssi_ant[3] = (uint16)(((rawdata[7]&0x03)<<8)|rawdata[8]);
		
		(data+i)->v_low = (uint8)((rawdata[9]&0x80) ? 0x1 : 0x0);	

	}
#else
	(data+i)->fob_serial[0] = rawdata[0];	
	(data+i)->fob_serial[1] = rawdata[1];
	(data+i)->fob_serial[2] = rawdata[2]; 
	(data+i)->fob_serial[3] = rawdata[3]; 

	(data+i)->rssi_ant[0] = (uint16)((rawdata[4]<<2)|rawdata[5]>>6);
	(data+i)->rssi_ant[1] = (uint16)(((rawdata[5]&0x3f)<<4)|rawdata[6]>>4);
	(data+i)->rssi_ant[2] = (uint16)(((rawdata[6]&0x0f)<<6)|rawdata[7]>>2);
	(data+i)->rssi_ant[3] = (uint16)(((rawdata[7]&0x03)<<8)|rawdata[8]);
	
	(data+i)->v_low = (uint8)((rawdata[9]&0x80) ? 0x1 : 0x0);	
#endif
} 

static FUNC(void, CDD_RFIC_CODE) Read_RFdataAuth(st_RFdataAuth *data, uint8 rawdata[])
{
	uint8 i = 0u;

	for(i=0;i<AUTH_RAWDATA_LEN;i++)
	{
		data->authdata[i] = rawdata[i];
	}
}

static FUNC(void, CDD_RFIC_CODE) Read_RFdataWelHands(st_RFdata *data, uint8 rawdata[])
{
	uint8 i = 0u;

#if 1
	//i = R_Check_FOB_Serial(&rawdata[0]);
	if(i != 0) // changed
	{
		//R_Set_ValidFobFoundResult(i);
		i--;
		
		(data+i)->fob_serial[0] = rawdata[0];	
		(data+i)->fob_serial[1] = rawdata[1];
		(data+i)->fob_serial[2] = rawdata[2]; 
		(data+i)->fob_serial[3] = rawdata[3]; 
			
		(data+i)->v_low = (uint8)((rawdata[9]&0x80) ? 0x1 : 0x0);	

	}
#else
	(data+i)->fob_serial[0] = rawdata[0];	
	(data+i)->fob_serial[1] = rawdata[1];
	(data+i)->fob_serial[2] = rawdata[2]; 
	(data+i)->fob_serial[3] = rawdata[3];
	
	(data+i)->v_low = (uint8)((rawdata[4]&0x80) ? 0x1 : 0x0);	
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

