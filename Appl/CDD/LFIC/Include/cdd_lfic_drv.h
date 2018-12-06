/* Define to prevent recursive inclusion -------------------------------------------------------*/
#ifndef	__CDD_LFIC_DRV_H__
#define	__CDD_LFIC_DRV_H__

/***********************************************************************************************************************
* Macro (#define) Definitions
***********************************************************************************************************************/
//#define FORTIMMO_V12
#define FORTIMMO_V20
#define ATAB5291A_V12

// ATA5291 Register name definitions
// -                0
#define FUSEL       1
#define FUDI        2
#define FUDO        3
#define INICNF      4
#define FRPD        5
#define RCTUNE      6
#define LCTKT       7
#define LCFTC       8
#define LCFFOT      9
#define LCIT        10
#define BGCAL       11
#define PWCAL       12
#define GCAL1       13
#define GCAL2       14
#define GCAL3       15
#define GCAL4       16
#define GCAL5       17
#define GCAL6       18
#define GCAL7       19
#define GCAL8       20
#define LCADJ		21
#define DGSOL       22
#define DGSOH       23
#define DGSIL       24
#define DGSIH       25
#define DGSTL       26
#define DGSTH       27
//#define TXFIFO      27
//#define TXBUF1      28
//#define TXBUF2      29
//#define TXBUF3      30
#define TXCLR       32
#define TXFILL      33
#define TXFLC       34
//#define TXRPT       34
//#define TXWPT       35
//#define TXSTATE     36
#define TXBSTAT     38
#define TXFAULT     39
//#define ATBSR       39
//#define ATMSR       40
//#define TOEN        41
//#define TOVL        42
//#define TOVH        43
//#define CLKCSR      44
#define PWCFG       46
//#define PWENC       46
//#define PWADCH      47
//#define PWSUPI      48
//#define PWSTAT      49
//#define PWFAULT     50
#define PWCTRL      52
#define PWPPCC      53
#define PWFCFG      54
//#define PWDACL      54
//#define PWDACH      55
#define PWICUR		56
//#define PWVPPL      56
//#define PWVPPH      57
//#define PWVSL       58
//#define PWVSH       59
//#define PWVDSL      60
//#define PWVDSH      61
#define PWVDSIL     65
#define PWVDSIH     66
//#define PWVIL       64
//#define PWVIH       65
//#define PWVDSTL     66
//#define PWVDSTH     67
#define IMEN        71
#define IMSG        74
#define IMWG        75
#define IMN0        76
#define IMN1        77
#define IMTX        78
#define IMFAUL      79
#define IMFE        80
#define IMRX        81
#define IMRMA		82
#define IMRCC		83
#define RXMPPL      92
#define RXMPPH      93
#define IMMPH		95
#define PPDRV       98
#define PPRLS       99
#define PPDR        100
#define PPWF        101
#define PPFAULT1    102
#define PPFAULT2    103
#define PPFAULT3	104
#define PCWTADR		106
#define PCWTDAT		107
#define SCCC		110
#define STVSL		111
#define STVDSL		112
#define STVIL		113
#define STR         114
#define STRM        115
#define STFLR       116
#define STVDSIRL    117
#define STVH	    118
#define RBCTL       119
#define RBCFG       120
#define RBFFL       121
#define RBFS        122
#define RBFD        123
#define RBSD        124
#define RBSRS       125
#define GPIO1       126

#if 0
#define IMMDAT      69
#define IMMBC       70
#define IMCIH       79
#define IMCIL       80
#define IMCQH       81
#define IMCQL       82
#define IMBBI       83
#define IMBBQ       84
#define PPMDAT      87
#define PPMBC       88
#define PPSTAT      95
#define PPCWT0      96
#define PPCWT1      97
#define PPCWT2      98
#define PPCWT3      99
#define PPCWT4      100
#define PPCWT5      101
#define PPCWT6      102
#define PPCWT7      103
#define PPCWT8      104
#define PPCWT9      105
#define PPCWT10     106
#define PPCWT11     107
#define PPCWT12     108
#define PPCWT13     109
#define PPCWT14     110
#define PPCWT15     111
#define PPCWT16     112
#define PPCWT17     113
                    127
#endif


/***********************************************************************************************************************
* Typedef Definitions
***********************************************************************************************************************/
typedef struct
{
	#if 1
	uint8	   RXFLM : 1; /* RX Buffer Fill Level Reached			 */
	uint8	   TXFLM : 1; /* TX Buffer Fill Level Reached			 */
	uint8	   TXCIM : 1; /* TX_CTRL Block in Idle Mode				 */
	uint8	   FADRM : 1; /* Fault AVR Address Bus					 */
	uint8	   FIMM	: 1; /* Fault Immobilizer Block 				 */
	uint8	   FPWM	: 1; /* Fault Power Supply Stages				 */
	uint8	   FPPM	: 1; /* Fault PEPS Block						 */
	uint8	   FTXM	: 1; /* Fault TX_CTRL							 */
	#else
	uint8	   FTXM	: 1; /* Fault TX_CTRL							 */
	uint8	   FPPM	: 1; /* Fault PEPS Block						 */
	uint8	   FPWM	: 1; /* Fault Power Supply Stages				 */
	uint8	   FIMM	: 1; /* Fault Immobilizer Block 				 */
	uint8	   FADRM : 1; /* Fault AVR Address Bus					 */
	uint8	   TXCIM : 1; /* TX_CTRL Block in Idle Mode				 */
	uint8	   TXFLM : 1; /* TX Buffer Fill Level Reached			 */
	uint8	   RXFLM : 1; /* RX Buffer Fill Level Reached			 */
	#endif
} FORTIMMO_SR_INTMASK_St;
typedef union 
{
	uint8		 maskByte;
	FORTIMMO_SR_INTMASK_St	maskBits;
} FORTIMMO_SR_INTMASK_Ut;

typedef struct
{
	#if 1
    uint8     RXFL : 1; /* RX Buffer Fill Level Reached             */
    uint8     TXFL : 1; /* TX Buffer Fill Level Reached             */
    uint8     TXCI : 1; /* TX_CTRL Block in Idle Mode               */
    uint8     FADR : 1; /* Fault AVR Address Bus                    */
    uint8     FIM  : 1; /* Fault Immobilizer Block                  */
    uint8     FPW  : 1; /* Fault Power Supply Stages                */
    uint8     FPP  : 1; /* Fault PEPS Block                         */
    uint8     FTX  : 1; /* Fault TX_CTRL                            */
	#else
    uint8     FTX  : 1; /* Fault TX_CTRL                            */
    uint8     FPP  : 1; /* Fault PEPS Block                         */
    uint8     FPW  : 1; /* Fault Power Supply Stages                */
    uint8     FIM  : 1; /* Fault Immobilizer Block                  */
    uint8     FADR : 1; /* Fault AVR Address Bus                    */
    uint8     TXCI : 1; /* TX_CTRL Block in Idle Mode               */
    uint8     TXFL : 1; /* TX Buffer Fill Level Reached             */
	uint8     RXFL : 1; /* RX Buffer Fill Level Reached             */
	#endif
} FORTIMMO_STATUS_St;
typedef union status
{
    uint8       statusByte;
    FORTIMMO_STATUS_St  statusBits;
} FORTIMMO_STATUS_Ut;

typedef struct
{
    uint8     TXCF  : 1; /* Invalid TX Control Command          */
    uint8     TXFF  : 1; /* Main FIFO buffer fault              */
    uint8     TXB1F : 1; /* Buffer 1 fault                      */
    uint8     TXB2F : 1; /* Buffer 2 fault                      */
    uint8     TXB3F : 1; /* Buffer 3 fault                      */
    uint8     RES0  : 1; /* Reserved                            */
    uint8     RES1  : 1; /* Reserved                            */
    uint8     RES2  : 1; /* Reserved                            */
} FORTIMMO_TXFAULT_St;
typedef union
{
    uint8        txfaultByte;
    FORTIMMO_TXFAULT_St  txfaultBits;
} FORTIMMO_TXFAULT_Ut;

typedef struct
{
    uint8     OVTVTX    : 1; /* VTX (Immo reg) over temperature     */
    uint8     OVTBST    : 1; /* Boost over temperature              */
    uint8     RES0      : 1; /* Reserved                            */
    uint8     RES1      : 1; /* Reserved                            */
    uint8     RES2      : 1; /* Reserved                            */
    uint8     RES3      : 1; /* Reserved                            */
    uint8     RES4      : 1; /* Reserved                            */
    uint8     RES5      : 1; /* Reserved                            */
} FORTIMMO_PWFAULT_St;
typedef union
{
    uint8        pwfaultByte;
    FORTIMMO_PWFAULT_St  pwfaultBits;
} FORTIMMO_PWFAULT_Ut;

typedef struct
{
    uint8     DRVOVT    : 1; /* Driver over temperature             */
    uint8     RLSBAT    : 1; /* Return Short to Battery             */
    uint8     DRVBAT    : 1; /* Driver Short to Battery             */
    uint8     DRVGND    : 1; /* Driver Short to Ground              */
    uint8     VTXOVT      : 1; /* Reserved                            */
    uint8     IMOL      : 1; /* Reserved                            */
    uint8     RES2      : 1; /* Reserved                            */
    uint8     RES3      : 1; /* Reserved                            */
#if 0
    uint8     RES0      : 1; /* Reserved                            */
    uint8     RES1      : 1; /* Reserved                            */
    uint8     RES2      : 1; /* Reserved                            */
    uint8     RES3      : 1; /* Reserved                            */
#endif
} FORTIMMO_IMFAULT_St;
typedef union
{
    uint8        imfaultByte;
    FORTIMMO_IMFAULT_St  imfaultBits;
} FORTIMMO_IMFAULT_Ut;

typedef struct
{
    uint8     DRV0OVT   : 1; /* Driver 0 over temperature           */
    uint8     DRV1OVT   : 1; /* Driver 1 over temperature           */
    uint8     DRV2OVT   : 1; /* Driver 2 over temperature           */
    uint8     DRV3OVT   : 1; /* Driver 3 over temperature           */
    uint8     RLSBAT    : 1; /* Return Short to Battery             */
    uint8     OLD       : 1; /* Open Load Detection                 */
    uint8     RES0      : 1; /* Reserved                            */
    uint8     RES1      : 1; /* Reserved                            */
} FORTIMMO_PPFAULT1_St;
typedef union
{
    uint8        ppfault1Byte;
    FORTIMMO_PPFAULT1_St  ppfault1Bits;
} FORTIMMO_PPFAULT1_Ut;

typedef struct
{
    uint8     DRV0BAT   : 1; /* Driver 0 Short to Battery           */
    uint8     DRV1BAT   : 1; /* Driver 1 Short to Battery           */
    uint8     DRV2BAT   : 1; /* Driver 2 Short to Battery           */
    uint8     DRV3BAT   : 1; /* Driver 3 Short to Battery           */
    uint8     DRV0GND   : 1; /* Driver 0 Short to Ground            */
    uint8     DRV1GND   : 1; /* Driver 1 Short to Ground            */
    uint8     DRV2GND   : 1; /* Driver 2 Short to Ground            */
    uint8     DRV3GND   : 1; /* Driver 3 Short to Ground            */
} FORTIMMO_PPFAULT2_St;
typedef union
{
    uint8        ppfault2Byte;
    FORTIMMO_PPFAULT2_St  ppfault2Bits;
} FORTIMMO_PPFAULT2_Ut;

typedef struct
{
	uint8     RLSBATI0  : 1; /* Return Line 0 Short to Battery      */
	uint8     RLSBATI1  : 1; /* Return Line 1 Short to Battery      */
	uint8     RLSBATI2  : 1; /* Return Line 2 Short to Battery      */
	uint8     RLSBATI3  : 1; /* Return Line 3 Short to Battery      */
	uint8     OLDI0     : 1; /* Open Load Driver 0					*/
	uint8     OLDI1     : 1; /* Open Load Driver 1					*/
	uint8     OLDI2     : 1; /* Open Load Driver 2					*/
	uint8     OLDI3     : 1; /* Open Load Driver 3					*/
} FORTIMMO_PPFAULT3_St;

typedef union
{
	uint8        ppfault3Byte;
	FORTIMMO_PPFAULT3_St  ppfault3Bits;
} FORTIMMO_PPFAULT3_Ut;

typedef struct
{
    FORTIMMO_PWFAULT_Ut  pwFault;
    FORTIMMO_TXFAULT_Ut  txFault;
    FORTIMMO_IMFAULT_Ut  imFault;
    FORTIMMO_PPFAULT1_Ut p1Fault;
    FORTIMMO_PPFAULT2_Ut p2Fault;
	FORTIMMO_PPFAULT3_Ut p3Fault;
} FORTIMMO_FAULT_St;

typedef struct
{
    uint8   SGap;
    uint8   WGap;
    uint8   One;
    uint8   Zero;
} FORTIMMO_IMMO_TIMING_St;

/***********************************************************************************************************************
* Exported Global Constant Declarations
* - Note: Each declaration should be preceded by "extern" keyword
***********************************************************************************************************************/
//! General Commands
#define GSI     0x60
#define RFS     0x40
#define SSC     0x48
#define GPP     0x43
#define GPR     0x44
#define GIM     0x45
#define GDA     0x46
#define GID     0x42

#define WBLK    0x70
#define CLR     0x7C
#define RREG    0x6C
#define WREG    0x6D
#define WREB	0x69
#define SGP     0x6A
#define FNOP    0x6F

//! Flow Control Commands
#define WAIT    0x54
#define WGP     0x68
#define CALL    0x78
#define ATA5291_LOOP    0x76
#define ATA5291_EOL     0x77
#define ATA5291_HALT    0x50

//! PEPS Driver Commands
#define SPR     0x5C
#define SDR     0x20
#define SDM     0x28
#define SCC     0xA0
#define CCC		0x3E
#ifdef FORTIMMO_V12
	#define SPD     0x00
#endif
#ifdef FORTIMMO_V20
	#define SPD     0x02
#endif

#define SPC     0x80
#define PPT     0x90
#define WWT     0x6E
#define SWF     0x58

//! Immobilizer Command
#define GIS		0x47
#define SSG     0x10
#define SWG     0x11
#define CN0     0x12
#define CN1     0x13
#define SID_     0x08
#define IRO     0x3C
#define CRX     0x38
#define GRX     0x3A
#define RRX     0x39

//! General Constants
#define PEPSBAUD_8  0x00
#define PEPSBAUD_16 0x01
#define PEPSBAUD_32 0x02

#define PEPSANT_CH0 0x00
#define PEPSANT_CH1 0x01
#define PEPSANT_CH2 0x02
#define PEPSANT_CH3 0x03
#define PEPSANT_CH4 0x04
#define PEPSANT_CH5 0x05
#define PEPSANT_CH6 0x06
#define PEPSANT_CH7 0x07
#define PEPSANT_CH02 0x08
#define PEPSANT_CH13 0x09
#define PEPSANT_CH03 0x0A
#define PEPSANT_CH456 0x0B

#define SINUS_WAVE  0x00
#define RECT_WAVE   0x01
#define CUSTOM_WAVE 0x02

//#define ADDBYTESPACE


/***********************************************************************************************************************
* Global Function Prototypes (Declarations)
***********************************************************************************************************************/

uint8 lf_ata5291_gsi( void );
void lf_ata5291_rfs( void );
void lf_ata5291_gpp( void );
void lf_ata5291_gim( void );
void lf_ata5291_gid( void );
uint8 lf_ata5291_rreg( uint8 address );
uint8 lf_ata5291_wreg( uint8 address, uint8 data );
void lf_ata5291_sgp( uint8 outputState );
uint8 lf_ata5291_nop( void );
void lf_ata5291_wait( uint8 prescaler, uint8 numCount );
void lf_ata5291_halt( void );
void lf_ata5291_loop( void );
void lf_ata5291_eol( void );
void lf_ata5291_spr( uint8 lfPEPSbaudRate );
void lf_ata5291_sdr( uint8 antDriverChannel );
void lf_ata5291_sdm( uint8 antDriver, uint8 antReturn );
void lf_ata5291_scc( uint8 antCurrent);
void lf_ata5291_spd( uint8 numBits, const uint8* dataPtr );
void lf_ata5291_spc( uint8 numBitPeriods );
void lf_ata5291_ppt( uint8 numBitPeriods );
void lf_ata5291_swf( uint8 selectWaveForm );
void lf_ata5291_ssg( uint8 numCycles );
void lf_ata5291_swg( uint8 numCycles );
void lf_ata5291_cn0( uint8 numCycles );
void lf_ata5291_cn1( uint8 numCycles );
void lf_ata5291_sid( uint8 numBits, uint8 * dataPtr );
void lf_ata5291_iro( uint8 immoMode );
void lf_ata5291_crx( void );
uint8 lf_ata5291_grx( void );
void lf_ata5291_rrx( uint8 * dataPtr, uint8 numBytes );

void lf_set_spi(void);
void lf_reset_spi(void);




/***********************************************************************************************************************
* Macro (#define) Definitions
***********************************************************************************************************************/
#define INVERTED
//#define NONINVERTED

#define MANCHESTER  0
#define BIPHASE1    1
#define BIPHASE2    2


/***********************************************************************************************************************
* Global Function Prototypes (Declarations)
***********************************************************************************************************************/



/***********************************************************************************************************************
* Macro (#define) Definitions
***********************************************************************************************************************/
// READ ID Command
#define IMMO_CMD_READ_ID	0x00
// AUTHENT Command
#define IMMO_CMD_AUTHENT	0x13
// Enter Enhanced Mode Command
#define IMMO_CMD_INITENH    0x35
// Transfer Secret Key1 Command -> Setup Secret Key ID
#define IMMO_CMD_SETSECKEY_ID     0x79
// Transfer Secret Key2 Command -> Write Secret Key for AES
#define IMMO_CMD_WRITESECKEY_AES     0x8B
// Read EEPROM Command
#define IMMO_CMD_READMEM    0x4C
// Write EEPROM Command
#define IMMO_CMD_WRITEMEM   0x5F
// Protect EEPROM Access Command
#define IMMO_CMD_LOCKMEM    0x6A
// General Resource Command
#define IMMO_CMD_RESOURCE   0xBE
// Leave Enhanced Mode Command
#define IMMO_CMD_LEAVEENH   0xAD 
// System Operation Mode Command
#define IMMO_CMD_SYSTEMOPERATION 0xE1
// Wirte device ID Command
#define IMMO_CMD_WRITE_DEVICE_ID 0xD2




#endif
