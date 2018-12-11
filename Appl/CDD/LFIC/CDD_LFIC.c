/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_LFIC.c
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim/SCIM_BP.dpa
 *     SW-C Type:  CDD_LFIC
 *  Generated at:  Mon Dec  3 14:41:38 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <CDD_LFIC>
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

#include "Rte_CDD_LFIC.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Spi.h"
#include "Dio.h"
#include "type.h"
#include "data.h"
#include "pj_define.h"
#include "cdd_lfic_drv.h"
#include "timer.h"
  
/*******************************************************************************
* Define Constant and Macro                                                    *
*******************************************************************************/
#define CDD_LFIC_HIGH  (uint8(0x1)) 
#define CDD_LFIC_LOW   (uint8(0x0)) 
 

#define	Par_lficSPIreqdataMAX	15u



#define	PRESCALER_256_2MS		2u
#define	PERIODICTIME_240MS		116u		/* 2.048ms * (116+1) = 239.616ms */
#define	PERIODICTIME_480MS		233u		/* 2.048ms * (233+1) = 479.232ms */

#define	PRESCALER_8192_65MS		3u
#define	PERIODICTIME_720MS		10u		/* 65.536ms * (10+1) = 720.896ms */

#define	On				(uint8)1
#define	Off				(uint8)0
#define	ON				(uint8)1
#define	OFF				(uint8)0

// type.h #define	LF_ANT_RSSI_OUTPUT_ORDER_MAX	4

u8	lf_antenna_RSSIOutputOrder[LF_ANT_RSSI_OUTPUT_ORDER_MAX] = {0u,};


typedef enum
{
	lf_SpiMode_None = 0,
	lf_SpiMode_Start,
	lf_SpiMode_Progress,
	lf_SpiMode_Skip
}e_lfic_Spi_mode;

typedef struct
{
    uint8 error_flag;
    uint8 reset_flag;  
}ST_LFIC_FAULT_STATUS;

typedef enum
{
	k_DST_READ_MODE = 0,
	k_DST_WRITE_MODE 
}e_DSTMode;

/*******************************************************************************
	Declare External  Variables
*******************************************************************************/

uint8	Buffer_DST_RxData[63];
uint8 LFSearchCompleteFlag_test;

/***********************************************************************************************************************
* Global Function Prototypes (Declarations)
***********************************************************************************************************************/

static uint8 Coding_DSP( uint8 Encoding, uint8 buffLength, uint8 * buffPtr );
static uint8 coding_find_sync( uint8 Encoding, uint8 byte, uint8 header );
static uint8 coding_parse_bit( uint8 Encoding, uint8 byte, uint8 previousBit );
uint8 Get_LFGainValue(uint8 mode, uint8 search, uint8 ant_index);
static void	 Set_LF_Antena(uint8 ant_index);
static uint8 lfic_rx_buffer_fill_level_check(void);
static uint8 lfic_tx_buffer_fill_level_check(void);
static uint8 lfic_error_check(void);
static void	 RSSIOutputAntOrder(uint8 IndexAnt); 

static void AtaImmoTurnOn(void);
static void AtaImmoInit(void);
static void check_errors(void);
static void Default_CALIB_LF_RF_Tunning(uint8 Gain_vehicleOption);
void lfic_global_status_check(void);
static void LF_Tx_Complete_ISR(void);
static void ExtINT_LFIC_IRQ_Start(void);
static void ExtINT_LFIC_IRQ_Stop(void);


#define OS_START_SEC_OsApplication_Untrusted_Core0_VAR_UNSPECIFIED
#include "MemMap.h"

static 	FORTIMMO_SR_INTMASK_Ut 	ata5291_interrupt;
static 	FORTIMMO_STATUS_Ut 		ata5291_status;
static 	FORTIMMO_FAULT_St  		ata5291_fault;
static 	FORTIMMO_IMMO_TIMING_St ata5291_Immo_timing;
static 	ST_LFIC_FAULT_STATUS 	stLFIC_Fault;
static 	e_DSTMode				e_DST_OP_MODE;

uint8		Buffer_DST_TxData[21]={0u,};
static	uint8	DST_TxDataSize = 0u;
static	uint8	DST_RxDataLength = 0u;
uint8 	DST_RxDataCRC8ChkLength = 0u;

static 	uint8 immoDriveLvl = 15;
static 	uint8 immoAttenLvl = 1;
static 	uint8 immoGainLvl = 2;
static  volatile uint8 inversionFlag = 0;
static volatile uint8 tmpReturn=0;

uint8	lf_antenna_RSSIOutputOrder[LF_ANT_RSSI_OUTPUT_ORDER_MAX] = {0u,};
PEPS_ImmoMode ImmoMode = SharedCoil;

/* LF_RF_Tunning Factor */
uint8	Antena_P1_Gain		= 0u;
uint8	Antena_P3_Gain	= 0u;
uint8	Interior2_Gain	= 0u;
uint8	Antena_P2_Gain		= 0u;
uint8	Bumper_Gain		= 0u;
uint8 Antena_P4_Gain		= 0u;
uint8	HFree_Gain		= 0u;
uint8	Outer_Gain		= 0u;
uint16 VDS_TargetVolt = 0x352;			/* VDSI 0x352(850) = VDS 34.9V */
									/* VDSI[9:0] = (1024 * VDS) / (35 * 1.2V) */
									/* VDSI Max : 0x3FF(1023) = VDS (41.959V) */

uint8 	b_OtherAntRSSIOutEnable;
/*
#define SRCDATABUFFERSIZE 34
#define DESDATABUFFERSIZE 66
*/
//uint8 spi_src_data_array[SRCDATABUFFERSIZE] = {0,}; 		/* SPI src data buffer */
//uint8 spi_des_data_array[DESDATABUFFERSIZE] = {0,};		/* SPI des data buffer */

uint8 retTransmit = 0;
uint8 spi_src_byte = 0;

#define SPI_MAX_BUF_SIZE (128)
static uint8 spi_src_data_array[SPI_MAX_BUF_SIZE] = {0,};
static uint8 spi_des_data_array[SPI_MAX_BUF_SIZE] = {0,};


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
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Array Types:
 * ============
 * ArrayByteSize16: Array with 16 element(s) of type uint8
 * ArrayByteSize3: Array with 3 element(s) of type uint8
 * ArrayByteSize32: Array with 32 element(s) of type uint8
 * ArrayByteSize8: Array with 8 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define CDD_LFIC_START_SEC_CODE
#include "CDD_LFIC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_DST_RX_ISR
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
 *   Std_ReturnType Rte_Write_b_DST_ResponseNG_P_SR(uint8 data)
 *   Std_ReturnType Rte_Write_b_DST_RxCompleteFlag_P_SR(uint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_DST_RX_ISR_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_LFIC_CODE) RE_DST_RX_ISR(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_DST_RX_ISR
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_LFIC_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <LfICInit_P>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_LficICU_R_IcuDisableEdgeDetection(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_LficICU_R_IcuDisableNotification(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_LficICU_R_IcuEnableEdgeDetection(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_LficICU_R_IcuEnableNotification(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Icu_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_LficNRESDio_R_Read(IOHWAB_UINT8 *ReadValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Dio_I_IoHwAbApplicationError
 *   Std_ReturnType Rte_Call_LficNRESDio_R_Write(IOHWAB_UINT8 SetValue)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Dio_I_IoHwAbApplicationError
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_LFIC_Init(uint8 Gain_vehicleOption)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_LFIC_Init_doc
 *********************************************************************************************************************/

/***********************************************************************************************************************
* Function Name:    lf_ata5291_gsi
* Description :     Gets the Status Info from Fortimmo
* Arguments :       none
* Return Value :    Status value, also stores this in structure
***********************************************************************************************************************/
uint8 lf_ata5291_gsi ( void )
{

	spi_src_data_array[0] = GSI;
	spi_src_data_array[1] = 0x00;
	
	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, spi_src_data_array, spi_des_data_array, 2);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);

	return spi_des_data_array[1];
}

/***********************************************************************************************************************
* Function Name:    lf_ata5291_rfs
* Description :     Resets the faults flags
* Arguments :       none
* Return Value :    none
***********************************************************************************************************************/
void lf_ata5291_rfs ( void )
{
	uint8 spi_src_data = RFS;
	uint8 spi_des_data = 0;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_gpp
* Description :     Transition into PEPS Tx Mode and begin executing from buffer
* Arguments :       none
* Return Value :    none
***********************************************************************************************************************/
void lf_ata5291_gpp ( void )
{
	uint8 spi_src_data = GPP;
	uint8 spi_des_data = 0;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_gim
* Description :     Transition into Immobilizer mode and begin executing from buffer
* Arguments :       none
* Return Value :    none
***********************************************************************************************************************/
void lf_ata5291_gim ( void )
{
	uint8 spi_src_data = GIM;
	uint8 spi_des_data = 0;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}

/***********************************************************************************************************************
* Function Name:    lf_ata5291_gis
* Description :     Transition into Immobilizer mode with shared coil and begin executing from buffer
* Arguments :       none
* Return Value :    none
***********************************************************************************************************************/
void lf_ata5291_gis ( void )
{
	uint8 spi_src_data = GIS;
	uint8 spi_des_data = 0;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}

/***********************************************************************************************************************
* Function Name:    lf_ata5291_gid
* Description :     Transition to Idle mode
* Arguments :       none
* Return Value :    none
***********************************************************************************************************************/
void lf_ata5291_gid ( void )
{
	uint8 spi_src_data = GID;
	uint8 spi_des_data = 0;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_rreg
* Description :     Read the contents of any register
* Arguments :       Address of the register in question
* Return Value :    Byte contents of the register
***********************************************************************************************************************/
uint8 lf_ata5291_rreg ( u8 address )
{


	spi_src_data_array[0] = RREG;
	spi_src_data_array[1] = address << 1;
	spi_src_data_array[2] = 0x00;
	
	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, spi_src_data_array, spi_des_data_array, 3);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);

	return spi_des_data_array[2];
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_wreg
* Description :     Write the contents of any register
* Arguments :       Address of the register in question
                    Data to be written into register
* Return Value :    Echo of the data
***********************************************************************************************************************/
uint8 lf_ata5291_wreg ( uint8 address, uint8 data )
{

	spi_src_data_array[0] = WREG;
	spi_src_data_array[1] = address << 1;
	spi_src_data_array[2] = data;
	
	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, spi_src_data_array, spi_des_data_array, 3);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);

	return spi_des_data_array[2];
}


/***********************************************************************************************************************
* Function Name:
* Description :
* Arguments : none
* Return Value : none
***********************************************************************************************************************/
void lf_ata5291_sgp ( uint8 outputState )
{
	uint8 spi_src_data = 0;
	uint8 spi_des_data = 0;

	spi_src_data = (SGP | outputState & 0x01);

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_nop
* Description :     Send dummy SPI with no operation
* Arguments :       none
* Return Value :    Previous data sent over SPI
***********************************************************************************************************************/
uint8 lf_ata5291_nop ( void )
{
	uint8 spi_src_data = FNOP;
	uint8 spi_des_data = 0;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);

	return tmpReturn;
}

/***********************************************************************************************************************
* Function Name:
* Description :
* Arguments : prescaler, numCount
*
*      prescaler is sent as <PS1,PS0>
*      | PS1 | PS0 | Prescaler | Tmin/ms |  Tmax/ms | Resolution/ms
*      |  0  |  0  |     1     |  0.008  |    2.048 |    0.008
*      |  0  |  1  |    32     |  0.256  |   65.536 |    0.256
*      |  1  |  0  |   256     |  2.048  |  524.288 |    2.048
*      |  1  |  1  |  8192     | 65.536  |16777.216 |   65.536
*
*      numCount is sent as <byte> value
*         Range = 0 : 255
*
* Return Value : none
***********************************************************************************************************************/
void lf_ata5291_wait ( u8 prescaler, u8 numCount )
{

	spi_src_data_array[0] = (WAIT | ( prescaler & 0x03u ));
	spi_src_data_array[1] = numCount;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, spi_src_data_array, spi_des_data_array, 2);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:
* Description :
* Arguments : none
* Return Value : none
***********************************************************************************************************************/
void lf_ata5291_halt ( void )
{
	uint8 spi_src_data = ATA5291_HALT;
	uint8 spi_des_data = 0;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:
* Description :
* Arguments : none
* Return Value : none
***********************************************************************************************************************/
void lf_ata5291_loop ( void )
{
	uint8 spi_src_data = ATA5291_LOOP;
	uint8 spi_des_data = 0;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:
* Description :
* Arguments : none
* Return Value : none
***********************************************************************************************************************/
void lf_ata5291_eol ( void )
{
	uint8 spi_src_data = ATA5291_EOL;
	uint8 spi_des_data = 0;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_spr
* Description :     Choice between the 3 possible baud rates for PEPS
* Arguments :       Baud rate selection
* Return Value :    none
***********************************************************************************************************************/
void lf_ata5291_spr ( uint8 lfPEPSbaudRate )
{
	uint8 spi_src_data = 0;
	uint8 spi_des_data = 0;

	spi_src_data = (SPR | ( lfPEPSbaudRate & 0x03 ));

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_sdr
* Description :     Select the desired antenna Channel. Paired AxP-AxN
* Arguments :       Desired Channel
* Return Value :    none
***********************************************************************************************************************/
void lf_ata5291_sdr ( uint8 antDriverChannel )
{
	uint8 spi_src_data = 0;
	uint8 spi_des_data = 0;

	spi_src_data = (SDR | ( antDriverChannel & 0x03 ));

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_sdm
* Description :     Selects individual AxP driver and AxN or AxE return path combinations
* Arguments :       High Side Driver(s) to switch on
*                   Low Side Return(s) to switch on
* Return Value :    none
***********************************************************************************************************************/
void lf_ata5291_sdm ( u8 antDriver, u8 antReturn )
{

	spi_src_data_array[0] = SDM;
	spi_src_data_array[1] = antDriver & 0x0F;
	spi_src_data_array[2] = antReturn;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, spi_src_data_array, spi_des_data_array, 3);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_scc
* Description :     Selects the desired current
* Arguments :       Current in mA
* Return Value :    none
***********************************************************************************************************************/
void lf_ata5291_scc( uint8 antCurrent)
{
	uint8 tmpCurrent = 0;
	uint8 spi_src_data = 0;
	uint8 spi_des_data = 0;

	if(antCurrent > 19) 
	{
		tmpCurrent = 19;
	}
	else
	if(antCurrent < 2)
	{
		tmpCurrent = 2;
	}
	else
	{
		tmpCurrent = antCurrent;
	}
	
	spi_src_data = (SCC | ( tmpCurrent & 0x1F ));

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);

   tmpReturn = lf_ata5291_nop();
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_spd
* Description :     Send PEPS Data
* Arguments :       Number of bits to send, Pointer to the data Buffer
* Return Value :    none
***********************************************************************************************************************/
void lf_ata5291_spd ( uint8 numBits, const uint8* dataPtr )
{
	uint8 i = 0;
	uint8 j = 0;

	spi_src_data_array[0] = SPD;
	spi_src_data_array[1] = numBits - 1;

	for ( j = 0; j < numBits; )
	{
		spi_src_data_array[2+i] = ( *dataPtr++ );
		i++;
		j += 8;
	}

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, spi_src_data_array, spi_des_data_array, 2+i);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_spc
* Description :     Sends a PEPS Carrier for a given duration
* Arguments :       Number of Manchester Bit Periods
* Return Value :    none
***********************************************************************************************************************/
void lf_ata5291_spc ( uint8 numBitPeriods )
{
	uint8 spi_src_data = 0;
	uint8 spi_des_data = 0;

	spi_src_data = (SPC | ( numBitPeriods & 0x0F ));

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_ppt
* Description :     Pause the PEPS transmission for a given duration
* Arguments :       Number of Manchester Bit Periods
* Return Value :    none
***********************************************************************************************************************/
void lf_ata5291_ppt ( uint8 numBitPeriods )
{
	uint8 spi_src_data = 0;
	uint8 spi_des_data = 0;

	spi_src_data = (PPT | ( numBitPeriods & 0x0F ));

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_swf
* Description :     Select the type of waveform to use as the driver signal
* Arguments :       Type of waveform
*                   00 = Sinus
*                   00 = Rectangle
*                   00 = Custom
*                   00 = 0, DC output
* Return Value : none
***********************************************************************************************************************/
void lf_ata5291_swf ( uint8 selectWaveForm )
{
	uint8 spi_src_data = 0;
	uint8 spi_des_data = 0;

	spi_src_data = (SWF | ( selectWaveForm & 0x03 ));

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}

/***********************************************************************************************************************
* Function Name:    lf_ata5291_ssg
* Description :     Sets the starting gap size used for Immobilizer
* Arguments :       Number of clock cycles to keep LF field off
* Return Value : none
***********************************************************************************************************************/
void lf_ata5291_ssg ( u8 numCycles )
{

	spi_src_data_array[0] = SSG;
	spi_src_data_array[1] = numCycles;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, spi_src_data_array, spi_des_data_array, 2);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_swg
* Description :     Sets the inter-bit gap size used for Immobilizer
* Arguments :       Number of clock cycles to keep LF field off
* Return Value : none
***********************************************************************************************************************/
void lf_ata5291_swg ( u8 numCycles )
{

	spi_src_data_array[0] = SWG;
	spi_src_data_array[1] = numCycles;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, spi_src_data_array, spi_des_data_array, 2);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_cn0
* Description :     Sets the zero bit size used for Immobilizer
* Arguments :       Number of clock cycles to keep LF field on
* Return Value : none
***********************************************************************************************************************/
void lf_ata5291_cn0 ( u8 numCycles )
{

	spi_src_data_array[0] = CN0;
	spi_src_data_array[1] = numCycles;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, spi_src_data_array, spi_des_data_array, 2);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_cn1
* Description :     Sets the one bit size used for Immobilizer
* Arguments :       Number of clock cycles to keep LF field on
* Return Value : none
***********************************************************************************************************************/
void lf_ata5291_cn1 ( u8 numCycles )
{

	spi_src_data_array[0] = CN1;
	spi_src_data_array[1] = numCycles;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, spi_src_data_array, spi_des_data_array, 2);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_sid
* Description :     Send Immobilizer data to the FIFO buffer for processing
* Arguments :       Number of bits to be sent over LF Downlink
*                   Pointer to the data in a buffer
* Return Value :    none
***********************************************************************************************************************/
void lf_ata5291_sid ( uint8 numBits, uint8* dataPtr )
{
	uint8 i = 0;
	uint8 j = 0;

	spi_src_data_array[0] = SID_;
	spi_src_data_array[1] = numBits - 1;

	for ( j = 0; j < numBits; )
	{
		spi_src_data_array[2+i] = ( *dataPtr++ );
		i++;
		j += 8;
	}

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, spi_src_data_array, spi_des_data_array, 2+i);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_iro
* Description :     Enable or Disable the RX output in buffered or transparent mode
* Arguments :       Mode selection
*                   0 = RX output Disabled
*                   1 = RX output Enabled
* Return Value :    none
***********************************************************************************************************************/
void lf_ata5291_iro ( uint8 immoMode )
{
	uint8 spi_src_data = 0;
	uint8 spi_des_data = 0;

	spi_src_data = (IRO | ( immoMode & 0x01 ));

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_crx
* Description :     Clear Immobilizer RX Buffer and reset flags
* Arguments :       none
* Return Value :    none
***********************************************************************************************************************/
void lf_ata5291_crx ( void )
{
	uint8 spi_src_data = 0;
	uint8 spi_des_data = 0;

	spi_src_data = CRX;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, &spi_src_data, &spi_des_data, 1);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_grx
* Description :     Get the Fill Level of the RX buffer (number of available bytes)
* Arguments :       none
* Return Value :    Number of bytes in the Immobilizer receive buffer. range [0:63]
***********************************************************************************************************************/
u8 lf_ata5291_grx ( void )
{

	spi_src_data_array[0] = GRX;
	spi_src_data_array[1] = 0x00;

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, spi_src_data_array, spi_des_data_array, 2);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);

	return spi_des_data_array[1];
}


/***********************************************************************************************************************
* Function Name:    lf_ata5291_rrx
* Description :     Read in the contents of the Immobilizer buffer
* Arguments :       Pointer to a buffer where the received data will be stored
*                   Number of Bytes to be read. range [0:63]
* Return Value :    none
***********************************************************************************************************************/
#if 0 //scim
void lf_ata5291_rrx ( u8* dataPtr, u8 numBytes )
{
	u8 j;
	tmpReturn = lfic_spi_Send ( RRX );
	tmpReturn = lfic_spi_Send ( ( numBytes - 1u ) << 2 );

	for ( j = 0u; j < numBytes; j++ )
	{
		tmpReturn = lfic_spi_Send ( 0x00u );
		*dataPtr++ = tmpReturn;
	}

	return;
}
#else
void lf_ata5291_rrx ( uint8* dataPtr, uint8 numBytes )
{
	uint8 i = 0;
	uint8 j = 0;

	spi_src_data_array[0] = RRX;
	spi_src_data_array[1] = ( numBytes - 1 ) << 2;

	for (j = 0; j < numBytes; j++)
	{
		spi_src_data_array[2+j] = 0x00;
	}

	Spi_SetupEB(SpiConf_SpiChannel_LFIC_CH, spi_src_data_array, spi_des_data_array, 2+numBytes);
	Spi_SyncTransmit(SpiConf_SpiSequence_LFIC_SEQ_DATA);

	for (j = 0; j < numBytes; j++)
	{
		*dataPtr++ = spi_des_data_array[2+j];
	}

}
#endif	

/***********************************************************************************************************************
* Function Name:    check_errors
* Description :     check errors ata5291 mode
* Arguments :       none
* Return Value :    none
***********************************************************************************************************************/
static void check_errors(void)
{
	lf_ata5291_halt();
	ata5291_fault.txFault.txfaultByte = lf_ata5291_rreg( TXFAULT ); // TX faults
//	  ata5291_fault.pwFault.pwfaultByte = lf_ata5291_rreg( PWFAULT ); // POWER faults
	ata5291_fault.imFault.imfaultByte = lf_ata5291_rreg( IMFAUL );	// IM faults
	ata5291_fault.p1Fault.ppfault1Byte = lf_ata5291_rreg( PPFAULT1 ); // PEPS fault 1
	ata5291_fault.p2Fault.ppfault2Byte = lf_ata5291_rreg( PPFAULT2 ); // PEPS fault 2
	ata5291_fault.p3Fault.ppfault3Byte = lf_ata5291_rreg( PPFAULT3 ); // PEPS fault 3
	lf_ata5291_gid();
	lf_ata5291_rfs();
}


/***********************************************************************************************************************
* Function Name:    AtaImmoTurnOn
* Description :     AtaImmo mode change & carrier output start
* Arguments :       none
* Return Value :    none
***********************************************************************************************************************/
static void AtaImmoTurnOn(void)
{
	// SharedCoil
	lf_ata5291_sdm(0x00, 0x01);
	lf_ata5291_gis();

	if(ImmoMode == SharedCoil)
	{
		lf_ata5291_sgp(1);
	}
	else
	{
		// Always_Low
		lf_ata5291_sgp(0);
	}
	
	// else
	// lf_ata5291_gim();	// Turn on CW Immo only, use normal immo mode

	lf_ata5291_iro(0);
	lf_ata5291_crx();
	lf_ata5291_wait ( 1, 150 ); 	//32 * 8?s * 151 = ~38.7 ms (Transponder startup time)
}


/***********************************************************************************************************************
* Function Name:    AtaImmoInit
* Description :     AtaImmoInit
* Arguments :       none
* Return Value :    none
***********************************************************************************************************************/
static void AtaImmoInit(void)
{
	uint8 immoDataBuffer = 0;
//	uint8 errorflag = 0;
//	uint8 ResetFlag = 0;

	ata5291_Immo_timing.SGap = 14;
	ata5291_Immo_timing.WGap = 14;
	ata5291_Immo_timing.One  = 32;
	ata5291_Immo_timing.Zero = 16;

	// SharedCoil:
	(void)lf_ata5291_wreg(GPIO1,0x01);
	lf_ata5291_sgp(0);
	

	immoDataBuffer = lf_ata5291_rreg(IMRCC); // Immobilizer Rx Check Configuration
	immoDataBuffer = immoDataBuffer | 0x80; 	
	(void)lf_ata5291_wreg(IMRCC, immoDataBuffer);
	
	immoDataBuffer = lf_ata5291_rreg(IMTX);	// IMMO Tx configuration
	immoDataBuffer = ( immoDataBuffer & 0x0F ) | ( immoDriveLvl << 4 );
	(void)lf_ata5291_wreg(IMTX, immoDataBuffer );

	immoDataBuffer = lf_ata5291_rreg(IMFE); //IMMO Rx Frontend Configuration
	immoDataBuffer = ( immoDataBuffer & 0xF0 ) | ( immoGainLvl << 2 ) | ( immoAttenLvl );
	(void)lf_ata5291_wreg(IMFE, immoDataBuffer );

	lf_ata5291_ssg(ata5291_Immo_timing.SGap );
	lf_ata5291_swg(ata5291_Immo_timing.WGap );
	lf_ata5291_cn1(ata5291_Immo_timing.One );
	lf_ata5291_cn0(ata5291_Immo_timing.Zero );
	lf_ata5291_crx();			
	
	(void)lf_ata5291_wreg(IMRX,0xC9); 	// Invert Polarity / Ant. settling time 128µs / RX BR 3,9kBit/s (man) / Transp. Mode enabled			
	//lf_ata5291_wreg(RBCFG, 11 );		// Set RX buffer fill level interrupt to 4 byte (UID)
	(void)lf_ata5291_wreg(STRM, 0xF9 );	// faults and RX buffer reached generate IRQ
	//lf_ata5291_wreg(STRM, 0x01 ); // RX buffer reached generate IRQ
	(void)lf_ata5291_wreg(PWVDSIH, 0x01);
	(void)lf_ata5291_wreg(PWVDSIL, 0xCF);
}

/***********************************************************************************************************************
* Function Name:    lfic_global_status_check
* Description :     lfic_global_status_check
* Arguments :       none
* Return Value :    none
***********************************************************************************************************************/
void lfic_global_status_check(void)
{
	stLFIC_Fault.reset_flag = lf_ata5291_rreg(STFLR);
	ata5291_status.statusByte = lf_ata5291_gsi();

	if ( ( ata5291_status.statusByte & 0xF8 ) != 0 )
	{
		stLFIC_Fault.error_flag = 1;
		check_errors(); 			
	}
	else
	{
		stLFIC_Fault.error_flag = 0;
		ata5291_status.statusByte &= 0x07;	// Bit3,4,5,6,7(Global Error Bit)

		ata5291_fault.txFault.txfaultByte = 0x00;
		ata5291_fault.imFault.imfaultByte = 0x00;
		ata5291_fault.p1Fault.ppfault1Byte = 0x00;
		ata5291_fault.p2Fault.ppfault2Byte = 0x00;
		ata5291_fault.p3Fault.ppfault3Byte = 0x00;

	}		
}

/***********************************************************************************************************************
* Function Name:    lfic_rx_buffer_fill_level_check
* Description :     lfic_rx_buffer_fill_level_check
* Arguments :       none
* Return Value :    uint8
***********************************************************************************************************************/
static uint8 lfic_rx_buffer_fill_level_check(void)
{
	uint8 return_val;

	ata5291_interrupt.maskByte = lf_ata5291_rreg(STRM);
	
	if( ((ata5291_status.statusByte & 0x01) == 0x01) && // check status register
		((ata5291_interrupt.maskByte & 0x01) == 0x01)	  // check INT MASK register
	)
	{
		return On;
	}
	else
	{
		return Off;
	}
}

/***********************************************************************************************************************
* Function Name:    lfic_tx_buffer_fill_level_check
* Description :     lfic_tx_buffer_fill_level_check
* Arguments :       none
* Return Value :    uint8
***********************************************************************************************************************/
static uint8 lfic_tx_buffer_fill_level_check(void)
{
	uint8 return_val;

	ata5291_interrupt.maskByte = lf_ata5291_rreg(STRM);
	
	if( ((ata5291_status.statusByte & 0x02) == 0x02) && // check status register
		((ata5291_interrupt.maskByte & 0x02) == 0x02)	  // check INT MASK register
	)
	{
		return On;
	}
	else
	{
		return Off;
	}
}

/***********************************************************************************************************************
* Function Name:    lfic_error_check
* Description :     lfic_error_check
* Arguments :       none
* Return Value :    uint8
***********************************************************************************************************************/
static uint8 lfic_error_check(void)
{
	return (uint8)( (ata5291_status.statusByte & 0xF8) ? 0x01 : 0x00 );
}

/***********************************************************************************************************************
* Function Name:    Coding_DSP
* Description :     Immo rcv sync data dectect & encoding
* Arguments :       uint8 Encoding, uint8 buffLength, uint8 * buffPtr
* Return Value :    uint8
***********************************************************************************************************************/
static uint8 Coding_DSP( uint8 Encoding, uint8 buffLength, uint8 * buffPtr )
{
    uint8 count = 1;
    uint8 i, logicFlag = 0, cNumBit = 0, syncFlag = 0;
    volatile uint8 tmpData, tmpData2, j, bitVal = 0;
    uint8 * cDSPBuffPtr = buffPtr;                      // Place pointer at beginning of buffer
    for ( j = 0; j < buffLength; j++ )                  // Process entire buffer
    {
        tmpData = *cDSPBuffPtr++;                       // Pull out working byte
        tmpData2 = *cDSPBuffPtr;                        // Pull out working byte
        for ( i = 0; i < 8; i++ )                       // Process entire byte
        {
            if ( !syncFlag )
            {
                syncFlag = coding_find_sync( Encoding, tmpData, 0xFE );
            }
            else
            {
                if ( count++ < 2 ) {
                    ;
                }
                else
                {
                    count = 1;                          // Reset count
                    bitVal = coding_parse_bit( Encoding, tmpData, bitVal );
                    if ( bitVal == 0 || bitVal == 1 )       // Decode the next bit (Manchester)
                    {
                        if ( bitVal == 0 )
                        {
                            *buffPtr = *buffPtr << 1;       // Store a zero
                        }
                        else
                        {
                            *buffPtr = *buffPtr << 1;       // Shift byte to store previous bit
                            *buffPtr = *buffPtr | 0x01;     // Store a one
                        }
                        cNumBit++;
                    }
                    else
                    {
                        // Error
                    }
                    if ( cNumBit == 8 )                         // When full byte is read
                    {
                        buffPtr++;                          // Increment pointer to next byte in buffer
                        cNumBit = 0;                            // Clear bit counter
                    }
                }
            }
            tmpData = tmpData << 1;                     // Shift working byte to next bit
            tmpData = tmpData | ( tmpData2 >> 7 );      // Take MSB from next byte
            tmpData2 = tmpData2 << 1;
        }
    }
    if ( syncFlag == 1 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/***********************************************************************************************************************
* Function Name:    coding_find_sync
* Description :     Immo rcv sync data dectect 
* Arguments :       uint8 Encoding, uint8 byte, uint8 header
* Return Value :    uint8
***********************************************************************************************************************/
static uint8 coding_find_sync( uint8 Encoding, uint8 byte, uint8 header )
{
    volatile uint8 tmpHeader;
    uint8 lookManchester[16] = {0xAA, 0xA9, 0xA6, 0xA5, 0x9A, 0x99, 0x96, 0x95, 0x6A, 0x69, 0x66, 0x65, 0x5A, 0x59, 0x56, 0x55};
    uint8 lookBiPhase1[16] = {0x33, 0x32, 0x34, 0x35, 0x2C, 0x21, 0x2B, 0x2A, 0xB3, 0xB2, 0xB4, 0xB5, 0xAC, 0xAD, 0xAB, 0xAA};
    uint8 lookBiPhase2[16] = {0xAA, 0xAB, 0xAD, 0xAC, 0xB5, 0xB4, 0xB2, 0xB3, 0x2A, 0x2B, 0x21, 0x2C, 0x35, 0x34, 0x32, 0x33};
    if ( Encoding == MANCHESTER )
    {
        tmpHeader = lookManchester[header & 0x0F];
        if ( byte == tmpHeader ) //0x56)                        //Sync found with Manchester and 3bit check
        {
            /*#ifdef INVERTED
                logicFlag = 0;                      // Logic flag is ok
            #else //NONINVERTED
                logicFlag = 1;                      // Logic flag is inverted
            #endif*/
            inversionFlag = 0;
            return 1;                           // 2T sync found
        }
        else if ( byte == ( tmpHeader ^ 0xFF ) ) //0xA9)              //Sync found with inverted Manchester and 3bit check
        {
            /*#ifdef INVERTED
                logicFlag = 1;                      // Logic flag is inverted
            #else //NONINVERTED
                logicFlag = 0;                      // Logic flag is ok
            #endif*/
            inversionFlag = 1;
            return 1;                           // 2T sync found
        }
        return 0;
    }
    else if ( Encoding == BIPHASE1 )
    {
        tmpHeader = lookBiPhase1[header & 0x0F];
        if ( byte == tmpHeader )                    //Sync found with Biphase and 3bit check
        {
            return 1;                           // 2T sync found
        }
        else if ( byte == ( tmpHeader ^ 0xFF ) )        //Sync found with BiPhase and 3bit check
        {
            return 1;                           // 2T sync found
        }
        return 0;
    }
    else if ( Encoding == BIPHASE2 )
    {
        tmpHeader = lookBiPhase2[header & 0x0F];
        if ( byte == tmpHeader )                    //Sync found with Biphase and 3bit check
        {
            return 1;                           // 2T sync found
        }
        else if ( byte == ( tmpHeader ^ 0xFF ) )        //Sync found with BiPhase and 3bit check
        {
            return 1;                           // 2T sync found
        }
        return 0;
    }
    else
    {
        return 0;
    }
}

/***********************************************************************************************************************
* Function Name:    coding_parse_bit
* Description :     rawdata change to encoding data
* Arguments :       uint8 Encoding, uint8 byte, uint8 previousBit
* Return Value :    uint8
***********************************************************************************************************************/
static uint8 coding_parse_bit( uint8 Encoding, uint8 byte, uint8 previousBit )
{
    if ( Encoding == MANCHESTER )       // Decode the next bit (Manchester)
    {
        if ( ( byte & 0x03 ) == 0x01 )  // Low to High transition
        {
            if ( inversionFlag == 1 )
            {
                return 0;       // Store a zero
            }
            else
            {
                return 1;       // Store a one
            }
        }
        else if ( ( byte & 0x03 ) == 0x02 ) // High to Low transition
        {
            if ( inversionFlag == 1 )
            {
                return 1;       // Store a one
            }
            else
            {
                return 0;       // Store a zero
            }
        }
        else                                // Manchester Error 00 or 11
        {
            return 3;
        }
    }
    else if ( Encoding == BIPHASE1 )    // Decode the next bit (BiPhase)
    {
        if ( ( byte & 0x03 ) == 0x00 || ( byte & 0x03 ) == 0x03 ) // No mid-bit transition
        {
            return 0;
        }
        else if ( ( byte & 0x03 ) == 0x01 || ( byte & 0x03 ) == 0x02 ) // mid-bit transition
        {
            return 1;
        }
        else                                // Manchester Error 00 or 11
        {
            return 3;
        }
    }
    else if ( Encoding == BIPHASE2 )    // Decode the next bit (Inverted BiPhase)
    {
        if ( ( byte & 0x03 ) == 0x00 || ( byte & 0x03 ) == 0x03 ) // No mid-bit transition
        {
            return 1;
        }
        else if ( ( byte & 0x03 ) == 0x01 || ( byte & 0x03 ) == 0x02 ) // mid-bit transition
        {
            return 0;
        }
        else                                // Manchester Error 00 or 11
        {
            return 3;
        }
    }
    return 3;   //General error
}

/***********************************************************************************************************************
* Function Name:    Default_CALIB_LF_RF_Tunning
* Description :     Default Gain value
* Arguments :       uint8 Gain_vehicleOption
* Return Value :    none
***********************************************************************************************************************/
static void Default_CALIB_LF_RF_Tunning(uint8 Gain_vehicleOption)
{
	if(Gain_vehicleOption == Off)	// TailgateOption == Off
	{ 
		/* Max Value : 1000mA - Coil Current */
	
		Antena_P1_Gain		= 9;
		Antena_P3_Gain	= 9;
		Interior2_Gain 	= 9;
		Antena_P2_Gain		= 9; 	
		Bumper_Gain 	= 9;
		Antena_P4_Gain	= 9;
		HFree_Gain		= 9;
		Outer_Gain		= 9;		
	}
	else							// TailgateOption == On
	{ 
		Antena_P1_Gain		= 9;
		Antena_P3_Gain	= 9;
		Interior2_Gain 	= 9;
		Antena_P2_Gain		= 9; 	
		Bumper_Gain 	= 9;	
		Antena_P4_Gain		= 9;		
		HFree_Gain		= 9;
		Outer_Gain		= 9;
	}
}


/***********************************************************************************************************************
* Function Name:    Set_LF_Antena
* Description :     select drv ant ch
* Arguments :       uint8 ant_index
* Return Value :    void
***********************************************************************************************************************/
static void Set_LF_Antena(uint8 ant_index)
{
	if(ant_index == kANTENA_P1) // P1(circuit), Ant1
	{
		lf_ata5291_sdm(0x01, 0x01);
	}	
	else if(ant_index == kANTENA_P2) // P2(circuit), Ant2
	{
		lf_ata5291_sdm(0x02, 0x02);
	}	
	else if(ant_index == kANTENA_P3)	// P3(circuit), Ant3
	{
		lf_ata5291_sdm(0x04, 0x04);
	}	
	else if(ant_index == kANTENA_P4) // P4(circuit), Ant4
	{
		lf_ata5291_sdm(0x08, 0x08);
	}
	else
	{
		/*Misra_C*/
	}
}

/***********************************************************************************************************************
* Function Name:    Get_LFGainValue
* Description :     Get_LFGainValue
* Arguments :       uint8 mode, uint8 search, uint8 ant_index
* Return Value :    uint8
***********************************************************************************************************************/
uint8 Get_LFGainValue(uint8 mode, uint8 search, uint8 ant_index)
{
	uint8	rtn = 0;

	switch(mode)
	{
	case LF_GAIN_FIRST:
		if(search==SEARCH_LOCATION)
		{
			if(ant_index==kBUMPER_ANTENA)
			{
				rtn = Bumper_Gain;			
			}
			else if(ant_index==kANTENA_P4)
			{
				rtn = Antena_P4_Gain;			
			}
			else if(ant_index==kANTENA_P1)
			{
				rtn = Antena_P1_Gain;			
			}
			else if(ant_index==kANTENA_P2)
			{
				rtn = Antena_P2_Gain;			
			}			
			else if(ant_index==kANTENA_P3) 
			{
				rtn = Antena_P3_Gain;			
			}	
			else if(ant_index==kINTERIOR_ANTENA2)
			{
				rtn = Interior2_Gain;
			}			
			else if(ant_index==kLH_RH_SIDE_ANTENA)
			{
				rtn = Outer_Gain;			
			}				
			else
			{}
		}
		else 
		if(search==SEARCH_AUTHENTICATION)
		{
			if(ant_index==kBUMPER_ANTENA)
			{
				rtn = Bumper_Gain;			
			}
			else if(ant_index==kANTENA_P4)
			{
				rtn = Antena_P4_Gain;			
			}
			else if(ant_index==kANTENA_P1)
			{
				rtn = Antena_P1_Gain;			
			}
			else if(ant_index==kANTENA_P2)
			{
				rtn = Antena_P2_Gain;			
			}			
			else if(ant_index==kANTENA_P3) 
			{
				rtn = Antena_P3_Gain;			
			}	
			else if(ant_index==kINTERIOR_ANTENA2)
			{
				rtn = Interior2_Gain;
			}		
			else if(ant_index==kLH_RH_SIDE_ANTENA)
			{
				rtn = Outer_Gain;			
			}				
			else
			{}
		} 
		else
		if(search==SEARCH_WELCOME)
		{
			if(ant_index==kBUMPER_ANTENA)
			{
				rtn = Bumper_Gain;			
			}
			else if(ant_index==kANTENA_P4)
			{
				rtn = Antena_P4_Gain;			
			}
			else if(ant_index==kANTENA_P1)
			{
				rtn = Antena_P1_Gain;			
			}
			else if(ant_index==kANTENA_P2)
			{
				rtn = Antena_P2_Gain;			
			}			
			else if(ant_index==kANTENA_P3) 
			{
				rtn = Antena_P3_Gain;			
			}	
			else if(ant_index==kINTERIOR_ANTENA2)
			{
				rtn = Interior2_Gain;
			}			
			else if(ant_index==kLH_RH_SIDE_ANTENA)
			{
				rtn = Outer_Gain;			
			}				
			else
			{}
		}
		else
		if(search==SEARCH_HANDSFREE)
		{
			if(ant_index==kBUMPER_ANTENA)
			{
				rtn = Bumper_Gain;			
			}
			else if(ant_index==kANTENA_P4)
			{
				rtn = Antena_P4_Gain;			
			}
			else if(ant_index==kANTENA_P1)
			{
				rtn = Antena_P1_Gain;			
			}
			else if(ant_index==kANTENA_P2)
			{
				rtn = Antena_P2_Gain;			
			}			
			else if(ant_index==kANTENA_P3) 
			{
				rtn = Antena_P3_Gain;			
			}	
			else if(ant_index==kINTERIOR_ANTENA2)
			{
				rtn = Interior2_Gain;
			}			
			else if(ant_index==kLH_RH_SIDE_ANTENA)
			{
				rtn = Outer_Gain;			
			}				
			else
			{}
		}
		else
		{}
		break;

	case LF_GAIN_OTHER: /* Only LOCATION Search */
			if(ant_index==kBUMPER_ANTENA)
			{
				rtn = Bumper_Gain;			
			}
			else if(ant_index==kANTENA_P4)
			{
				rtn = Antena_P4_Gain;			
			}
			else if(ant_index==kANTENA_P1)
			{
				rtn = Antena_P1_Gain;			
			}
			else if(ant_index==kANTENA_P2)
			{
				rtn = Antena_P2_Gain;			
			}			
			else if(ant_index==kANTENA_P3) 
			{
				rtn = Antena_P3_Gain;			
			}	
			else if(ant_index==kINTERIOR_ANTENA2)
			{
				rtn = Interior2_Gain;
			}			
			else if(ant_index==kLH_RH_SIDE_ANTENA)
			{
				rtn = Outer_Gain;			
			}				
			else
			{}
		break;

	default:
		break;

	}
	return rtn;
}



/***********************************************************************************************************************
* Function Name:    LF_Tx_Complete_ISR
* Description :     LF_Tx_Complete_ISR
* Arguments :       uint8 mode, uint8 search, uint8 ant_index
* Return Value :    none
***********************************************************************************************************************/
static void LF_Tx_Complete_ISR(void)
{
	//static tVAR LFSearchCompleteFlag;

	LFSearchCompleteFlag_test = On;
		
	lf_ata5291_gid();
}

/***********************************************************************************************************************
* Function Name:    DST_RX_ISR
* Description :     DST_RX_ISR
* Arguments :       none
* Return Value :    none
***********************************************************************************************************************/
void DST_RX_ISR(void)
{
 	static uint8 bufferFillLevel = 0;

	if(ImmoMode == SharedCoil)
	{
		lf_ata5291_sgp(1);
	}
	else
	{
		// Always_Low
		lf_ata5291_sgp(0);
	}

	bufferFillLevel = lf_ata5291_grx();				
	if(bufferFillLevel > 63) bufferFillLevel=63;
	
	lf_ata5291_rrx(Buffer_DST_RxData, bufferFillLevel); //read received UID 			
	lf_ata5291_iro(0);

	if( Coding_DSP( MANCHESTER, bufferFillLevel, Buffer_DST_RxData) )
	{	
		/* DST Rx Data CRC Check */	
		Rte_Write_b_DST_RxCompleteFlag_P_SR(On);
	}
	else
	{	
		Rte_Write_b_DST_ResponseNG_P_SR(On);
	}

	// SharedCoil
	lf_ata5291_sgp(0);

	lf_ata5291_gid();				
}

/***********************************************************************************************************************
* Function Name:    DST_TX_ISR
* Description :     DST_TX_ISR
* Arguments :       none
* Return Value :    none
***********************************************************************************************************************/
void DST_TX_ISR(void)
{
/*
	lf_ata5291_sgp(0);
	lf_ata5291_sid((DST_TxDataSize*8),Buffer_DST_TxData);
	lf_ata5291_sgp(1);

	if(e_DST_OP_MODE == k_DST_WRITE_MODE) lf_ata5291_wait(1, 32);		// 256us * 16 = 8.192ms
	else if(e_DST_OP_MODE == k_DST_READ_MODE) lf_ata5291_wait(1, 16);	// 256us * 16 = 4.096ms
	else{lf_ata5291_wait(1, 16);}	// 256us * 16 = 4.096ms
		
	lf_ata5291_iro(1);	

	lf_ata5291_sgp(0);
*/
	lf_ata5291_sid((DST_TxDataSize*8),Buffer_DST_TxData);

	if(e_DST_OP_MODE == k_DST_WRITE_MODE) lf_ata5291_wait(1,32); 	// 256us * 32 = 8.192ms
	else if(e_DST_OP_MODE == k_DST_READ_MODE) lf_ata5291_wait(1,16); 	// 256us * 16 = 4.096ms
	else{ lf_ata5291_wait(1,16); } // 256us * 16 = 4.096ms

	lf_ata5291_iro(1);
}

/***********************************************************************************************************************
* Function Name:    DST_TX_ISR
* Description :     DST_TX_ISR
* Arguments :       none
* Return Value :    none
***********************************************************************************************************************/
static void ExtINT_LFIC_IRQ_Start(void)
{
	Rte_Call_LficICU_R_IcuEnableNotification();
	Rte_Call_LficICU_R_IcuEnableEdgeDetection();	
}

/***********************************************************************************************************************
* Function Name:    DST_TX_ISR
* Description :     DST_TX_ISR
* Arguments :       none
* Return Value :    none
***********************************************************************************************************************/
static void ExtINT_LFIC_IRQ_Stop(void)
{
	Rte_Call_LficICU_R_IcuDisableEdgeDetection();
	Rte_Call_LficICU_R_IcuDisableNotification();
}

static void RSSIOutputAntOrder(uint8 IndexAnt)
{
	uint8 cnt = 0u;

	/* Clear */
	for(cnt = 0u; cnt < LF_ANT_RSSI_OUTPUT_ORDER_MAX; cnt++)
	{
		lf_antenna_RSSIOutputOrder[cnt] = 0u;
	}
	cnt = 0u;


	/* Set */
	lf_antenna_RSSIOutputOrder[cnt] = IndexAnt;
	cnt++;
	

	if(IndexAnt != kANTENA_P1)
	{
		lf_antenna_RSSIOutputOrder[cnt] = kANTENA_P1;
		cnt++;
	}


	if(IndexAnt != kANTENA_P3)
	{
		lf_antenna_RSSIOutputOrder[cnt] = kANTENA_P3;
		cnt++;
	}


#ifdef	SELECT_INT2_ANT
	if(IndexAnt != kINTERIOR_ANTENA2)
	{
		lf_antenna_RSSIOutputOrder[cnt] = kINTERIOR_ANTENA2;
		cnt++;
	}
#endif


	if(IndexAnt != kANTENA_P2)
	{
		lf_antenna_RSSIOutputOrder[cnt] = kANTENA_P2; 
		cnt++;
	}



	if(IndexAnt != kANTENA_P4)
	{
		lf_antenna_RSSIOutputOrder[cnt] = kANTENA_P4;
		cnt++;
	}


#ifdef	SELECT_BUMPER_ANT
	if(IndexAnt != kBUMPER_ANTENA)
	{
		lf_antenna_RSSIOutputOrder[cnt] = kBUMPER_ANTENA;
		cnt++;
	}
#endif


}


Std_ReturnType RE_Diag_Get_ANTFault_Check(VAR(uint8, AUTOMATIC) GET_CMD)
{

	/* Declare the variable to store the ANTFault return value */
	Std_ReturnType FaultReturnValue=0;
#if 0
	/*
	*	ata5291_fault.p1Fault.ppfault1Byte 
	*	-> Bit[3:0] Driver overtemperature 
	*
	*	ata5291_fault.p2Fault.ppfault2Byte
	*	-> Bit[7:4] Driver short to Ground , Bit[0:3] Driver short to BAT 
	*
	*	ata5291_fault.p3Fault.ppfault3Byte
	*	-> Bit[7:4] Open Load Detected with internal, Bit[3:0] RLS short to BAT with internal
	*/

	uint8 loop = 0;

	
	lfic_global_status_check();

	if(GET_CMD == kPEPS_ANT_OPEN_CHECK)
	{
		/* Peps block OpenLoad Fault check */
		if( ata5291_status.statusByte&kBit6 )
		{
			/* Fault detected */
			FaultReturnValue = ata5291_fault.p3Fault.ppfault3Byte;
		}
		else
		{
			/* No Fault detected */
			FaultReturnValue = kOff;
		}
	}
	else if(GET_CMD == kIMMO_ANT_OPEN_CHECK)
	{
		/* Peps block OpenLoad Fault check */
		if( ata5291_status.statusByte&kBit4 )
		{
			/* Fault detected */
			FaultReturnValue = ata5291_fault.imFault.imfaultByte;
		}
		else
		{
			/* No Fault detected */
			FaultReturnValue = kOff;
		}	
	}
	else
	{
	}	

	//lf_ata5291_gid();
#endif
	return FaultReturnValue;
}

FUNC(void, CDD_LFIC_CODE) RE_Diag_Set_ANTFault_Check( VAR(uint8, AUTOMATIC) SET_CMD)
{
#if 0
	if(SET_CMD&kPEPS_ANT_OPEN_CHECK)
	{

		lf_ata5291_wreg(PWFCFG,0x7Fu); 	/* VI Settling delay = 0ms */	
		
		lf_ata5291_wreg(PWVDSIH,(VDS_TargetVolt>>8)&0x3u); /* VDS Target voltage set */
		lf_ata5291_wreg(PWVDSIL,VDS_TargetVolt&0xFFu);
		lf_ata5291_wreg(PWICUR, SET_CMD>>4);

		lf_ata5291_spr(PEPSBAUD_16); /* R = 1 */		
		lf_ata5291_swf(SINUS_WAVE);  /* waveform setting */	

		lf_ata5291_gpp();			 /* go to PEPS tx mode */

		lf_ata5291_sdm(SET_CMD>>4, SET_CMD>>4);	 /* all positive, negative antenna enable */

		lf_ata5291_scc(0x03u);		 /* current setting */

		lf_ata5291_spc(12); 	     /* Stabilization time for ANT current detection(PWFCFG) */
		lf_ata5291_ppt(12); 	     /* 3.072ms -Guard */

		lf_ata5291_gid();		
	}
	else if(SET_CMD&kIMMO_ANT_OPEN_CHECK)
	{

		(void)lf_ata5291_wreg(IMRCC,(uint8)0x80 );		
		(void)lf_ata5291_wreg(IMTX, (uint8)(immoDriveLvl<<4) );
		(void)lf_ata5291_wreg(IMFE, (uint8)((immoGainLvl<<2)|(immoAttenLvl)) );

		lf_ata5291_ssg(ata5291_Immo_timing.SGap );
		lf_ata5291_swg(ata5291_Immo_timing.WGap );
		lf_ata5291_cn1(ata5291_Immo_timing.One );
		lf_ata5291_cn0(ata5291_Immo_timing.Zero );
		lf_ata5291_crx();			
		
		(void)lf_ata5291_wreg(IMRX,0xC9); 	// Invert Polarity / Ant. settling time 128µs / RX BR 3,9kBit/s (man) / Transp. Mode enabled			

		(void)lf_ata5291_wreg(PWVDSIH, 0x01);
		(void)lf_ata5291_wreg(PWVDSIL, 0xCF);

		lf_ata5291_gim();		/* Turn on CW Immo only, use normal immo mode */
		lf_ata5291_iro(0);
		lf_ata5291_crx();
		lf_ata5291_ppt(12); 	/* 3.072ms -Guard */

		lf_ata5291_gid();
	}
	else
	{
		/* */
	}

#endif
	
}

FUNC(void, CDD_LFIC_CODE) RE_SetupLF_Periodic_Telegram(VAR(uint8, AUTOMATIC) b_AntenaIndex, VAR(uint8, AUTOMATIC) b_SearchPattern, VAR(uint16, AUTOMATIC) Counter_LFRawDataBit, P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) Buffer_LFRawData,  VAR(uint16, AUTOMATIC) PeriodicTime)
{
	
	lf_ata5291_halt(); /* previous loop command stop */

	/* interrupt settings */	
	(void)lf_ata5291_wreg(PWFCFG,0x7F); 	/* VI Settling delay = 1ms */	
	//(void)lf_ata5291_wreg(PWFCFG,0x00); 	/* VI Settling delay = 0ms */	
	(void)lf_ata5291_wreg(PWVDSIH,(VDS_TargetVolt>>8)&0x3); /* VDS Target voltage set */
	(void)lf_ata5291_wreg(PWVDSIL,VDS_TargetVolt&0xFF);

	/**********************************************************************
	*  R[1:0]	  |  NRZ Symbol Rate	 |	Manchester Data Rate | PEPS SymbolDuration |
	*	  0 			125kHz8=15.625kBd			   7.81kBit/s					 64us
	*	  1 			125kHz/16=7.81kBd			   3.91kBit/s					 128us
	*	  2 			125kHz/32=3.91kBd			   1.95kBit/s					 256us
	**********************************************************************/ 
	lf_ata5291_spr(PEPSBAUD_16); /* R = 1 */		
	lf_ata5291_swf(SINUS_WAVE);  /* waveform setting */	

	lf_ata5291_loop();	         /* loop command start */
	lf_ata5291_gpp();			 /* go to PEPS tx mode */
	
	lf_ata5291_sdm(0x05, 0x05);  /* CH0(A0P) + CH2(A2P) Combinations */		
	lf_ata5291_scc(Get_LFGainValue(LF_GAIN_FIRST,b_SearchPattern,b_AntenaIndex)); /* Set Coil Current */
	
/*
	if(ImmoMode == SharedCoil)
	{
		lf_ata5291_gis();
		lf_ata5291_wait(1, 77); // 32*8us*(77+1) ~ 20ms
		lf_ata5291_sid(1, 0x00);	// TP Rev.1
		lf_ata5291_wait(1, 16); // 32*8us*(16+1) ~ 4.4ms
		lf_ata5291_iro(1); // Enable data recovery
		lf_ata5291_wait(1, 45); // 32*8us*(45+1) ~ 12ms
	}
	else
	{

	}
*/

/* ====================================================================================================== */	
/* PEPS Transmit start */	
	lf_ata5291_spc(12); 	 /* Stabilization time for ANT current detection(PWFCFG) */
	/* Crosstalk issue 
	 * Guard Time = 4.096ms */		
	lf_ata5291_ppt(15); 	/* 3.072ms -Guard */
	lf_ata5291_ppt(1); 		/* 1.024ms -Guard */
	lf_ata5291_spd(Counter_LFRawDataBit,Buffer_LFRawData);
	lf_ata5291_gid();	

	if (PeriodicTime == 240u)
	{
		lf_ata5291_wait(PRESCALER_256_2MS, PERIODICTIME_240MS); 
	}
	else if (PeriodicTime == 480u)
	{
		lf_ata5291_wait(PRESCALER_256_2MS, PERIODICTIME_480MS); 
	}
	else if (PeriodicTime == 720u)
	{
		lf_ata5291_wait(PRESCALER_8192_65MS, PERIODICTIME_720MS); 
	}
	else
	{
		lf_ata5291_wait(PRESCALER_256_2MS, PERIODICTIME_240MS);
	}							 
   	 							 
	lf_ata5291_eol(); 		 
	
}


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_LFIC_CODE) RE_LFIC_Init(uint8 Gain_vehicleOption) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_LFIC_Init
 *********************************************************************************************************************/
	Default_CALIB_LF_RF_Tunning(Gain_vehicleOption);
	
	// scim Rte_Call_LficNRESDio_R_Write(0);	/* NRES ON --> go to Idle Mode from off mode */
	//Rte_Call_LficNRESDio_R_Write(1);
	
	ExtINT_LFIC_IRQ_Start();

	// Dio_WriteChannel(DioConf_DioChannel_LF_IC_PWR_SHUTDOWN, 1);
   Rte_Call_LficNRESDio_R_Write(1);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_SetupDST_Telegram
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <SetupDST_Telegram_P>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_st_DstBlock_P_challenge(uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize8
 *   Std_ReturnType Rte_Read_st_DstBlock_P_encryption(uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize16
 *   Std_ReturnType Rte_Read_st_DstBlock_P_security_key_number(uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize3
 *   Std_ReturnType Rte_Read_st_DstBlock_P_vehicle_serial(uint8 *data)
 *     Argument data: uint8* is of type ArrayByteSize3
 *   Std_ReturnType Rte_Read_st_DstBlock_P_write_fob_number(uint8 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_SetupDST_Telegram(uint8 dst_order)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_SetupDST_Telegram_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_LFIC_CODE) RE_SetupDST_Telegram(uint8 dst_order) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_SetupDST_Telegram
 *********************************************************************************************************************/

	uint8 encryption_key[16] = {0,};
	uint8 challenge[8] = {0,};	
	uint8 vehicle_serial[3] = {0,};
	uint8 security_key_number[3] = {0,};
	uint8 write_fob_number = 0;
	uint8 Learning_RegistCnt = 0;

#if 0		// TP Rev.1 - Developer
	//Rte_Write_P_b_DST_RxCompleteFlag_SR(Off);
	//Rte_Write_P_b_DST_ResponseNG_SR(Off);
#else
	Rte_Write_b_DST_RxCompleteFlag_P_SR(Off);
	Rte_Write_b_DST_ResponseNG_P_SR(Off);
#endif				

	ExtINT_LFIC_IRQ_Start();
	
	AtaImmoInit();

	switch(dst_order)
	{
	case	kDST_General_Read_Page2:		/* serial read:3 /Manufactoring Number:1 */
		DST_RxDataLength = 7;	/* Manachester Byte */
		DST_RxDataCRC8ChkLength = 6;
		e_DST_OP_MODE = k_DST_READ_MODE;
		
		Buffer_DST_TxData[0] = IMMO_CMD_READ_ID;
		
		DST_TxDataSize = 1;
		break;

	case	kDST_General_Read_Page4:		/* Regit.Count:2 /Key No.:1/ Selective Addr.:1 */
		DST_RxDataLength = 4;
		DST_RxDataCRC8ChkLength = 3;				/* Status + EEPROM DATA + CRC8 */
		e_DST_OP_MODE = k_DST_READ_MODE;
		
		Buffer_DST_TxData[0] = IMMO_CMD_READMEM;
		Buffer_DST_TxData[1] = 0x05;
		Buffer_DST_TxData[2] = 0x02;
		Buffer_DST_TxData[3] = 1;
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);

		DST_TxDataSize = 5;
		break;

	case	kDST_General_Read_Page6:		/* Security Key Number */
	   	DST_RxDataLength = 7;
		DST_RxDataCRC8ChkLength = 6;	
		e_DST_OP_MODE = k_DST_READ_MODE;
		
		Buffer_DST_TxData[0] = IMMO_CMD_READMEM;
		Buffer_DST_TxData[1] = 0x05;
		Buffer_DST_TxData[2] = 0x03;
		Buffer_DST_TxData[3] = 4;
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);

		DST_TxDataSize = 5;
		break;

	case	kDST_General_Read_Page8:
	  	DST_RxDataLength = 5;
		DST_RxDataCRC8ChkLength = 4;	
		e_DST_OP_MODE = k_DST_READ_MODE;
		
		Buffer_DST_TxData[0] = IMMO_CMD_READMEM;
		Buffer_DST_TxData[1] = 0x05;
		Buffer_DST_TxData[2] = 0x07;
		Buffer_DST_TxData[3] = 2;
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);

		DST_TxDataSize = 5;
		break;

	case	kDST_General_Read_Page10:
		DST_RxDataLength = 6;
		DST_RxDataCRC8ChkLength = 5;	
		e_DST_OP_MODE = k_DST_READ_MODE;
		
		Buffer_DST_TxData[0] = IMMO_CMD_READMEM;
		Buffer_DST_TxData[1] = 0x05;
		Buffer_DST_TxData[2] = 0x09;
		Buffer_DST_TxData[3] = 3;
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);

		DST_TxDataSize = 5;
		break;

	case	kDST_General_Read_Page12:
		DST_RxDataLength = 5;
		DST_RxDataCRC8ChkLength = 4;	
		e_DST_OP_MODE = k_DST_READ_MODE;
		
		Buffer_DST_TxData[0] = IMMO_CMD_READMEM;
		Buffer_DST_TxData[1] = 0x05;
		Buffer_DST_TxData[2] = 0x0C;
		Buffer_DST_TxData[3] = 2;
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);

		DST_TxDataSize = 5;
		break;

	case	kDST_General_Read_Page14:	/* Vehicle ID */
	   	DST_RxDataLength = 7;
		DST_RxDataCRC8ChkLength = 6;	
		e_DST_OP_MODE = k_DST_READ_MODE;
		
		Buffer_DST_TxData[0] = IMMO_CMD_READMEM;
		Buffer_DST_TxData[1] = 0x05;
		Buffer_DST_TxData[2] = 0x20;
		Buffer_DST_TxData[3] = 4;
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);

		DST_TxDataSize = 5;
		break;

	case	kDST_General_Program_Page2:		/* serial read:3 /Manufactoring Number:1 */
		break;

	case	kDST_Selected_Program:
		break;

	case	kDST_Selected_Program_Page4:		/* Regit.Count:2 /Key No.:1/ Selective Addr.:1 */
		Rte_Read_st_DstBlock_P_write_fob_number(&write_fob_number);
		// Rte_Read_R_b_Learning_RegistCnt_SR(&Learning_RegistCnt);		// TP Rev.1
	
		DST_RxDataLength = 3;
		DST_RxDataCRC8ChkLength = 2;	/* except crc8 */
		e_DST_OP_MODE = k_DST_WRITE_MODE;

		Buffer_DST_TxData[0] = IMMO_CMD_WRITEMEM;			
		Buffer_DST_TxData[1] = 0x05;	// target addr 2byte
		Buffer_DST_TxData[2] = 0x00;			
		Buffer_DST_TxData[3] = 3;	// ENC Config + Data Length
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);	 // CRC8
		Buffer_DST_TxData[5] = write_fob_number;	 /* FOB No. */		
		Buffer_DST_TxData[6] = 0x0F;
		Buffer_DST_TxData[7] = Learning_RegistCnt;	/* Regist Count */
		Buffer_DST_TxData[8] = check_crc8(&Buffer_DST_TxData[5],3);	//CRC8 
		
		DST_TxDataSize = 9; 		//data size
		break;

	case	kDST_Selected_Program_Page6:		/* Security Key Number */
		Rte_Read_st_DstBlock_P_security_key_number(security_key_number);
		
		DST_RxDataLength = 3;
		DST_RxDataCRC8ChkLength = 2;	/* except crc8 */
		e_DST_OP_MODE = k_DST_WRITE_MODE;		

		Buffer_DST_TxData[0] = IMMO_CMD_WRITEMEM;					// command 1byte
		Buffer_DST_TxData[1] = 0x05;									// target addr 2byte
		Buffer_DST_TxData[2] = 0x03;	
		Buffer_DST_TxData[3] = 4;									// ENC Config + Data Length
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);			// CRC8
		Buffer_DST_TxData[5] = Learnt;		// Data Payload
		Buffer_DST_TxData[6] = security_key_number[0];
		Buffer_DST_TxData[7] = security_key_number[1];
		Buffer_DST_TxData[8] = security_key_number[2];;
		Buffer_DST_TxData[9] = check_crc8(&Buffer_DST_TxData[5],4);			// CRC8
		
		DST_TxDataSize = 10;									//data size				
		break;

	case	kDST_Selected_Program_Page14:		/* Vehicle ID */
		Rte_Read_st_DstBlock_P_vehicle_serial(vehicle_serial);
		
		DST_RxDataLength = 3;
		DST_RxDataCRC8ChkLength = 2;	/* except crc8 */
		e_DST_OP_MODE = k_DST_WRITE_MODE;		

		Buffer_DST_TxData[0] = IMMO_CMD_WRITEMEM;					// command 1byte
		Buffer_DST_TxData[1] = 0x05;									// target addr 2byte
		Buffer_DST_TxData[2] = 0x20;	
		Buffer_DST_TxData[3] = 4;									// ENC Config + Data Length
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);			// CRC8
		Buffer_DST_TxData[5] = Learnt;		// Data Payload
		Buffer_DST_TxData[6] = vehicle_serial[0];
		Buffer_DST_TxData[7] = vehicle_serial[1];
		Buffer_DST_TxData[8] = vehicle_serial[2];;
		Buffer_DST_TxData[9] = check_crc8(&Buffer_DST_TxData[5],4);			// CRC8
		
		DST_TxDataSize = 10;									//data size				
		break;		

	case	kDST_Exit_Program:
		break;
		
	case	kDST_AES_Encryption_Read:	/* challenge --> response */
		Rte_Read_st_DstBlock_P_challenge(challenge);
	
		DST_RxDataLength = 9;
		e_DST_OP_MODE = k_DST_READ_MODE;
			
		Buffer_DST_TxData[0] = IMMO_CMD_AUTHENT;
		
		//Get_Random8_Challenge(st_DstBlock.challenge);			// make challenge numbuer(random number)
		//AES_Encryption(st_DstBlock.challenge);					// make aes_encryption
		
		Buffer_DST_TxData[1] = challenge[0];
		Buffer_DST_TxData[2] = challenge[1];
		Buffer_DST_TxData[3] = challenge[2];
		Buffer_DST_TxData[4] = challenge[3];
		Buffer_DST_TxData[5] = challenge[4];
		Buffer_DST_TxData[6] = challenge[5];
		Buffer_DST_TxData[7] = challenge[6]; 			
		Buffer_DST_TxData[8] = challenge[7]; 		

		DST_TxDataSize = 9;		
		break;

	case	kDST_AES_Encryption_Program:	/* Encryption Program */
		Rte_Read_st_DstBlock_P_encryption(encryption_key);
		
		DST_RxDataLength = 3;
		DST_RxDataCRC8ChkLength = 2;	
		e_DST_OP_MODE = k_DST_WRITE_MODE;

		Buffer_DST_TxData[0] = IMMO_CMD_WRITESECKEY_AES;		 // command 1byte	
		Buffer_DST_TxData[1] = 0x07;							 // target addr 2byte
		Buffer_DST_TxData[2] = 0x00;	
		Buffer_DST_TxData[3] = 16;							 // data length
		Buffer_DST_TxData[4] = encryption_key[0]; // Encryption Key 16Byte 
		Buffer_DST_TxData[5] = encryption_key[1];
		Buffer_DST_TxData[6] = encryption_key[2];
		Buffer_DST_TxData[7] = encryption_key[3];
		Buffer_DST_TxData[8] = encryption_key[4];
		Buffer_DST_TxData[9] = encryption_key[5];
		Buffer_DST_TxData[10] =encryption_key[6];
		Buffer_DST_TxData[11] = encryption_key[7];
		Buffer_DST_TxData[12] = encryption_key[8];
		Buffer_DST_TxData[13] = encryption_key[9];
		Buffer_DST_TxData[14] = encryption_key[10];
		Buffer_DST_TxData[15] = encryption_key[11];
		Buffer_DST_TxData[16] = encryption_key[12];
		Buffer_DST_TxData[17] = encryption_key[13];
		Buffer_DST_TxData[18] = encryption_key[14];
		Buffer_DST_TxData[19] = encryption_key[15];
		Buffer_DST_TxData[20] = check_crc8(&Buffer_DST_TxData[1],19);	  // CRC8

		DST_TxDataSize = 21;			//data size		
		break;
	case	kDST_AES_Encryption_Page_Lock:
		break;
	case	kDST_Page6_Lock:
		break;
	default:
		return;
	}

	//b_DST_ResponseNG = Off;
	//b_DST_RxCompleteFlag = Off;
	
	(void)lf_ata5291_wreg(RBCFG,(DST_RxDataLength*2)+10);	// *2 => expect TP Rx Data(NRZ), RBCFG = Fill Lvl Threshold Setting

	AtaImmoTurnOn();	

	if(ImmoMode == SharedCoil)
	{
		lf_ata5291_sgp(1);
	}
	else
	{
		// Always_Low
		lf_ata5291_sgp(0);
	}

	//IoHwAb_GptEnableNotification(Rte_PDAV_IoHwAbP_Gpt_LFControl_1);
	//IoHwAb_GptStartTimer(Rte_PDAV_IoHwAbP_Gpt_LFControl_1, 40000); /* Value is tick, tick = ?? ms?? */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

void Test_SetupDST_Telegram(uint8 dst_order, uint8 data)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_SetupDST_Telegram
 *********************************************************************************************************************/

	uint8 encryption_key[16] = {0,};
	uint8 challenge[8] = {0,};	
	uint8 vehicle_serial[3] = {0,};
	uint8 security_key_number[3] = {0,};
	uint8 write_fob_number = 0;
	uint8 Learning_RegistCnt = 0;

#if 0		// TP Rev.1 - Developer
	//Rte_Write_P_b_DST_RxCompleteFlag_SR(Off);
	//Rte_Write_P_b_DST_ResponseNG_SR(Off);
#else
	Rte_Write_b_DST_RxCompleteFlag_P_SR(Off);
	Rte_Write_b_DST_ResponseNG_P_SR(Off);
#endif				

	ExtINT_LFIC_IRQ_Start();
	
	AtaImmoInit();

	switch(dst_order)
	{
	case	kDST_General_Read_Page2:		/* serial read:3 /Manufactoring Number:1 */
		DST_RxDataLength = 7;	/* Manachester Byte */
		DST_RxDataCRC8ChkLength = 6;
		e_DST_OP_MODE = k_DST_READ_MODE;
		
		Buffer_DST_TxData[0] = IMMO_CMD_READ_ID;
		
		DST_TxDataSize = 1;
		break;

	case	kDST_General_Read_Page4:		/* Regit.Count:2 /Key No.:1/ Selective Addr.:1 */
		DST_RxDataLength = 4;
		DST_RxDataCRC8ChkLength = 3;				/* Status + EEPROM DATA + CRC8 */
		e_DST_OP_MODE = k_DST_READ_MODE;
		
		Buffer_DST_TxData[0] = IMMO_CMD_READMEM;
		Buffer_DST_TxData[1] = 0x05;
		Buffer_DST_TxData[2] = 0x02;
		Buffer_DST_TxData[3] = 1;
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);

		DST_TxDataSize = 5;
		break;

	case	kDST_General_Read_Page6:		/* Security Key Number */
	   	DST_RxDataLength = 7;
		DST_RxDataCRC8ChkLength = 6;	
		e_DST_OP_MODE = k_DST_READ_MODE;
		
		Buffer_DST_TxData[0] = IMMO_CMD_READMEM;
		Buffer_DST_TxData[1] = 0x05;
		Buffer_DST_TxData[2] = 0x03;
		Buffer_DST_TxData[3] = 4;
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);

		DST_TxDataSize = 5;
		break;

	case	kDST_General_Read_Page8:
	  	DST_RxDataLength = 5;
		DST_RxDataCRC8ChkLength = 4;	
		e_DST_OP_MODE = k_DST_READ_MODE;
		
		Buffer_DST_TxData[0] = IMMO_CMD_READMEM;
		Buffer_DST_TxData[1] = 0x05;
		Buffer_DST_TxData[2] = 0x07;
		Buffer_DST_TxData[3] = 2;
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);

		DST_TxDataSize = 5;
		break;

	case	kDST_General_Read_Page10:
		DST_RxDataLength = 6;
		DST_RxDataCRC8ChkLength = 5;	
		e_DST_OP_MODE = k_DST_READ_MODE;
		
		Buffer_DST_TxData[0] = IMMO_CMD_READMEM;
		Buffer_DST_TxData[1] = 0x05;
		Buffer_DST_TxData[2] = 0x09;
		Buffer_DST_TxData[3] = 3;
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);

		DST_TxDataSize = 5;
		break;

	case	kDST_General_Read_Page12:
		DST_RxDataLength = 5;
		DST_RxDataCRC8ChkLength = 4;	
		e_DST_OP_MODE = k_DST_READ_MODE;
		
		Buffer_DST_TxData[0] = IMMO_CMD_READMEM;
		Buffer_DST_TxData[1] = 0x05;
		Buffer_DST_TxData[2] = 0x0C;
		Buffer_DST_TxData[3] = 2;
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);

		DST_TxDataSize = 5;
		break;

	case	kDST_General_Read_Page14:	/* Vehicle ID */
	   	DST_RxDataLength = 7;
		DST_RxDataCRC8ChkLength = 6;	
		e_DST_OP_MODE = k_DST_READ_MODE;
		
		Buffer_DST_TxData[0] = IMMO_CMD_READMEM;
		Buffer_DST_TxData[1] = 0x05;
		Buffer_DST_TxData[2] = 0x20;
		Buffer_DST_TxData[3] = 4;
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);

		DST_TxDataSize = 5;
		break;

	case	kDST_General_Program_Page2:		/* serial read:3 /Manufactoring Number:1 */
		break;

	case	kDST_Selected_Program:
		break;

	case	kDST_Selected_Program_Page4:		/* Regit.Count:2 /Key No.:1/ Selective Addr.:1 */
		// Rte_Read_st_DstBlock_P_write_fob_number(&write_fob_number);
		// Rte_Read_R_b_Learning_RegistCnt_SR(&Learning_RegistCnt);		// TP Rev.1
	
		DST_RxDataLength = 3;
		DST_RxDataCRC8ChkLength = 2;	/* except crc8 */
		e_DST_OP_MODE = k_DST_WRITE_MODE;

		Buffer_DST_TxData[0] = IMMO_CMD_WRITEMEM;			
		Buffer_DST_TxData[1] = 0x05;	// target addr 2byte
		Buffer_DST_TxData[2] = 0x00;			
		Buffer_DST_TxData[3] = 3;	// ENC Config + Data Length
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);	 // CRC8
		Buffer_DST_TxData[5] = write_fob_number;	 /* FOB No. */		
		Buffer_DST_TxData[6] = 0x0F;
		Buffer_DST_TxData[7] = Learning_RegistCnt;	/* Regist Count */
		Buffer_DST_TxData[8] = check_crc8(&Buffer_DST_TxData[5],3);	//CRC8 
		
		DST_TxDataSize = 9; 		//data size
		break;

	case	kDST_Selected_Program_Page6:		/* Security Key Number */
		// Rte_Read_st_DstBlock_P_security_key_number(security_key_number);
		
		DST_RxDataLength = 3;
		DST_RxDataCRC8ChkLength = 2;	/* except crc8 */
		e_DST_OP_MODE = k_DST_WRITE_MODE;		

		Buffer_DST_TxData[0] = IMMO_CMD_WRITEMEM;					// command 1byte
		Buffer_DST_TxData[1] = 0x05;									// target addr 2byte
		Buffer_DST_TxData[2] = 0x03;	
		Buffer_DST_TxData[3] = 4;									// ENC Config + Data Length
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);			// CRC8
		Buffer_DST_TxData[5] = Learnt;		// Data Payload
		Buffer_DST_TxData[6] = data;
		Buffer_DST_TxData[7] = 0xAA;
		Buffer_DST_TxData[8] = 0x55;

		Buffer_DST_TxData[9] = check_crc8(&Buffer_DST_TxData[5],4);			// CRC8
		
		DST_TxDataSize = 10;									//data size				
		break;

	case	kDST_Selected_Program_Page14:		/* Vehicle ID */
		// Rte_Read_st_DstBlock_P_vehicle_serial(vehicle_serial);
		
		DST_RxDataLength = 3;
		DST_RxDataCRC8ChkLength = 2;	/* except crc8 */
		e_DST_OP_MODE = k_DST_WRITE_MODE;		

		Buffer_DST_TxData[0] = IMMO_CMD_WRITEMEM;					// command 1byte
		Buffer_DST_TxData[1] = 0x05;									// target addr 2byte
		Buffer_DST_TxData[2] = 0x20;	
		Buffer_DST_TxData[3] = 4;									// ENC Config + Data Length
		Buffer_DST_TxData[4] = check_crc8(&Buffer_DST_TxData[1],3);			// CRC8
		Buffer_DST_TxData[5] = Learnt;		// Data Payload
		Buffer_DST_TxData[6] = vehicle_serial[0];
		Buffer_DST_TxData[7] = vehicle_serial[1];
		Buffer_DST_TxData[8] = vehicle_serial[2];;
		Buffer_DST_TxData[9] = check_crc8(&Buffer_DST_TxData[5],4);			// CRC8
		
		DST_TxDataSize = 10;									//data size				
		break;		

	case	kDST_Exit_Program:
		break;
		
	case	kDST_AES_Encryption_Read:	/* challenge --> response */
		// Rte_Read_st_DstBlock_P_challenge(challenge);
	
		DST_RxDataLength = 9;
		e_DST_OP_MODE = k_DST_READ_MODE;
			
		Buffer_DST_TxData[0] = IMMO_CMD_AUTHENT;
		
		//Get_Random8_Challenge(st_DstBlock.challenge);			// make challenge numbuer(random number)
		//AES_Encryption(st_DstBlock.challenge);					// make aes_encryption
		
		Buffer_DST_TxData[1] = challenge[0];
		Buffer_DST_TxData[2] = challenge[1];
		Buffer_DST_TxData[3] = challenge[2];
		Buffer_DST_TxData[4] = challenge[3];
		Buffer_DST_TxData[5] = challenge[4];
		Buffer_DST_TxData[6] = challenge[5];
		Buffer_DST_TxData[7] = challenge[6]; 			
		Buffer_DST_TxData[8] = challenge[7]; 		

		DST_TxDataSize = 9;		
		break;

	case	kDST_AES_Encryption_Program:	/* Encryption Program */
		// Rte_Read_st_DstBlock_P_encryption(encryption_key);
		
		DST_RxDataLength = 3;
		DST_RxDataCRC8ChkLength = 2;	
		e_DST_OP_MODE = k_DST_WRITE_MODE;

		Buffer_DST_TxData[0] = IMMO_CMD_WRITESECKEY_AES;		 // command 1byte	
		Buffer_DST_TxData[1] = 0x07;							 // target addr 2byte
		Buffer_DST_TxData[2] = 0x00;	
		Buffer_DST_TxData[3] = 16;							 // data length
		Buffer_DST_TxData[4] = encryption_key[0]; // Encryption Key 16Byte 
		Buffer_DST_TxData[5] = encryption_key[1];
		Buffer_DST_TxData[6] = encryption_key[2];
		Buffer_DST_TxData[7] = encryption_key[3];
		Buffer_DST_TxData[8] = encryption_key[4];
		Buffer_DST_TxData[9] = encryption_key[5];
		Buffer_DST_TxData[10] =encryption_key[6];
		Buffer_DST_TxData[11] = encryption_key[7];
		Buffer_DST_TxData[12] = encryption_key[8];
		Buffer_DST_TxData[13] = encryption_key[9];
		Buffer_DST_TxData[14] = encryption_key[10];
		Buffer_DST_TxData[15] = encryption_key[11];
		Buffer_DST_TxData[16] = encryption_key[12];
		Buffer_DST_TxData[17] = encryption_key[13];
		Buffer_DST_TxData[18] = encryption_key[14];
		Buffer_DST_TxData[19] = encryption_key[15];
		Buffer_DST_TxData[20] = check_crc8(&Buffer_DST_TxData[1],19);	  // CRC8

		DST_TxDataSize = 21;			//data size		
		break;
	case	kDST_AES_Encryption_Page_Lock:
		break;
	case	kDST_Page6_Lock:
		break;
	default:
		return;
	}

	//b_DST_ResponseNG = Off;
	//b_DST_RxCompleteFlag = Off;
	
	(void)lf_ata5291_wreg(RBCFG,(DST_RxDataLength*2)+10);	// *2 => expect TP Rx Data(NRZ), RBCFG = Fill Lvl Threshold Setting

	AtaImmoTurnOn();

	if(ImmoMode == SharedCoil)
	{
		lf_ata5291_sgp(1);
	}
	else
	{
		// Always_Low
		lf_ata5291_sgp(0);
	}

	//IoHwAb_GptEnableNotification(Rte_PDAV_IoHwAbP_Gpt_LFControl_1);
	//IoHwAb_GptStartTimer(Rte_PDAV_IoHwAbP_Gpt_LFControl_1, 40000); /* Value is tick, tick = ?? ms?? */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_SetupLF_Telegram
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <SetupLfTelegram_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_SetupLF_Telegram(uint8 b_AntenaIndex, uint8 b_SearchPattern, uint16 Counter_LFRawDataBit, const uint8 *Buffer_LFRawData)
 *     Argument Buffer_LFRawData: uint8* is of type ArrayByteSize32
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_SetupLF_Telegram_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_LFIC_CODE) RE_SetupLF_Telegram(uint8 b_AntenaIndex, uint8 b_SearchPattern, uint16 Counter_LFRawDataBit, P2CONST(uint8, AUTOMATIC, RTE_CDD_LFIC_APPL_DATA) Buffer_LFRawData) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_SetupLF_Telegram
 *********************************************************************************************************************/
    uint8 cnt = 0u;

	ExtINT_LFIC_IRQ_Stop();

	lf_ata5291_halt(); /* previous loop command stop */

	/* interrupt settings */	
	(void)lf_ata5291_wreg(PWFCFG,0x7F); 					/* VI Settling delay = 1ms */	
	//(void)lf_ata5291_wreg(PWFCFG,0x00); 					/* VI Settling delay = 0ms */	
	(void)lf_ata5291_wreg(PWVDSIH,(VDS_TargetVolt>>8)&0x3); /* VDS Target voltage set */
	(void)lf_ata5291_wreg(PWVDSIL,VDS_TargetVolt&0xFF);

	/**********************************************************************
	*  R[1:0]	  |  NRZ Symbol Rate	 |	Manchester Data Rate | PEPS SymbolDuration |
	*	  0 			125kHz8=15.625kBd			   7.81kBit/s					 64us
	*	  1 			125kHz/16=7.81kBd			   3.91kBit/s					 128us
	*	  2 			125kHz/32=3.91kBd			   1.95kBit/s					 256us
	**********************************************************************/ 
	lf_ata5291_spr(PEPSBAUD_16); /* R = 1 */		
	lf_ata5291_swf(SINUS_WAVE); /* waveform setting */	
	lf_ata5291_gpp();			/* go to PEPS tx mode */

	Set_LF_Antena(b_AntenaIndex);
	RSSIOutputAntOrder(b_AntenaIndex);
	
	lf_ata5291_scc(Get_LFGainValue(LF_GAIN_FIRST,b_SearchPattern,lf_antenna_RSSIOutputOrder[0])); /* Set Coil Current */

/* ====================================================================================================== */	
/* PEPS Transmit start */
	lf_ata5291_spc(12); 	/* Stabilization time for ANT current detection(PWFCFG) */

	/* Crosstalk issue 
	 * Guard Time = 4.096ms */		
	lf_ata5291_ppt(15); 	/* 3.072ms -Guard */
	lf_ata5291_ppt(1); 		/* 1.024ms -Guard */

	lf_ata5291_spd(Counter_LFRawDataBit,Buffer_LFRawData);
	
	if(b_SearchPattern==SEARCH_LOCATION)
	{
		/* Crosstalk issue 
		 * Guard Time = 4.096ms */		
		lf_ata5291_ppt(15); 	/* 3.072ms -Guard */
		lf_ata5291_ppt(1); 		/* 1.024ms -Guard */
		
		lf_ata5291_spc(12); 	/* 3.072ms -RSSI  */
//		if(b_OtherAntRSSIOutEnable == On)	/* RSSI Output TEST */
//		{
			for(cnt = 1; cnt < LF_ANT_RSSI_OUTPUT_ORDER_MAX; cnt++)
			{
				/* Crosstalk issue 
				 * Guard Time = 4.096ms */
				lf_ata5291_gid();
				lf_ata5291_wait(1, 3);	/* 1.024ms -Guard */
				lf_ata5291_gpp();
				lf_ata5291_ppt(15);		/* 3.072ms -Guard */
				
				lf_ata5291_scc(Get_LFGainValue(LF_GAIN_OTHER,b_SearchPattern,lf_antenna_RSSIOutputOrder[cnt]));
				Set_LF_Antena(lf_antenna_RSSIOutputOrder[cnt]);
				lf_ata5291_spc(12); 	/* 3.072ms -RSSI */ 	
			}
//		}
	}

	lf_ata5291_gid();
	
	lf_ata5291_wreg(TXFLC,0); // Fill Level Register: set low or equl level value into tx buffer
	ExtINT_LFIC_IRQ_Start();
	lf_ata5291_wreg(STRM,0xFA);
	

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RE_Timeout_Tx_Telegram
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CS> of PortPrototype <TimeoutTxTelegram_P>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RE_Timeout_Tx_Telegram(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_Timeout_Tx_Telegram_doc
 *********************************************************************************************************************/
void CDD_IcuNotification_LFIC_IRQ(void)
{

   ExtINT_LFIC_IRQ_Stop();


	lfic_global_status_check();

	if( lfic_rx_buffer_fill_level_check() == On)
	{
		DST_RX_ISR();
	}

	if( lfic_tx_buffer_fill_level_check() == On)
	{
		LF_Tx_Complete_ISR();
	}

//	Rte_Call_R_LowPower_Prevent(SMK_WAKE_LP_FLAG);

#if 0
	/* Example Code */
	Rte_Call_LficICU_R_IcuEnableNotification();
	Rte_Call_LficICU_R_IcuEnableEdgeDetection();


	Rte_Call_LficICU_R_IcuDisableEdgeDetection();
	Rte_Call_LficICU_R_IcuDisableEdgeDetection();
#endif



}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_LFIC_CODE) RE_Timeout_Tx_Telegram(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RE_Timeout_Tx_Telegram
 *********************************************************************************************************************/
	ExtINT_LFIC_IRQ_Stop();

	lfic_global_status_check();
	lf_ata5291_gid();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_LFIC_STOP_SEC_CODE
#include "CDD_LFIC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



#if 0
/***  Start of saved code (symbol: documentation area:RE_StopLF_Periodic_Telegram_doc)  *********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:RE_StopLF_Periodic_Telegram)  ********************/
	lf_ata5291_halt(); /* previous loop command stop */
	lf_ata5291_gid();

/***  End of saved code  ************************************************************************************/
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
