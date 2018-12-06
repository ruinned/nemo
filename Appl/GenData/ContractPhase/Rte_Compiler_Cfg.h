/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Compiler_Cfg.h
 *        Config:  C:/Vector/CBD1800194_D01_Mpc57xx/Applications/SipAddon/volvoscim_181203_TP/SCIM_BP.dpa
 *     SW-C Type:  TP
 *  Generated at:  Tue Dec  4 10:38:27 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  RTE Compiler Abstraction header file (Contract Phase)
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_COMPILER_CFG_H
# define _RTE_COMPILER_CFG_H

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * RTE specific defines
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_CODE
 *********************************************************************************************************************/

/* used for code */
# define RTE_CODE

/* used for all global or static variables that are not initialized by the startup code of the compiler */
# define RTE_VAR_NOINIT

/* used for global or static constants */
# define RTE_CONST

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * SW-C specific defines
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_TP_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_TP_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_TP_APPL_DATA

/* used for references on application functions */
# define RTE_TP_APPL_CODE

/* used for references on application constants */
# define RTE_TP_APPL_CONST

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: TP_CODE
 *********************************************************************************************************************/

/* used for SWC specific code */
# define TP_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: TP_CONST
 *********************************************************************************************************************/

/* used for global or static SWC specific constants */
# define TP_CONST

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: TP_VAR
 *********************************************************************************************************************/

/* used for all global or static SWC specific variables that are not initialized by the startup code of the compiler */
# define TP_VAR_NOINIT

/* used for global or static SWC specific variables that are initialized by the startup code of the compiler */
# define TP_VAR_INIT

/* used for global or static SWC specific variables that are initialized with zero by the startup code of the compiler */
# define TP_VAR_ZERO_INIT

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:Telegram_CODE)  **********************/

/* used for SWC specific code */
# define Telegram_CODE

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:RTE_TELEGRAM_APPL)  ******************/

/* used for references on application variables */
# define RTE_TELEGRAM_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_TELEGRAM_APPL_DATA

/* used for references on application functions */
# define RTE_TELEGRAM_APPL_CODE

/* used for references on application constants */
# define RTE_TELEGRAM_APPL_CONST

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:Telegram_CONST)  *********************/

/* used for global or static SWC specific constants */
# define Telegram_CONST

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:Telegram_VAR)  ***********************/

/* used for all global or static SWC specific variables that are not initialized by the startup code of the compiler */
# define Telegram_VAR_NOINIT

/* used for global or static SWC specific variables that are initialized by the startup code of the compiler */
# define Telegram_VAR_INIT

/* used for global or static SWC specific variables that are initialized with zero by the startup code of the compiler */
# define Telegram_VAR_ZERO_INIT

/***  End of saved code  ************************************************************************************/
#endif


#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:RTE_CDD_LFIC_APPL)  ******************/

/* used for references on application variables */
# define RTE_CDD_LFIC_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_CDD_LFIC_APPL_DATA

/* used for references on application functions */
# define RTE_CDD_LFIC_APPL_CODE

/* used for references on application constants */
# define RTE_CDD_LFIC_APPL_CONST

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_LFIC_CODE)  **********************/

/* used for SWC specific code */
# define CDD_LFIC_CODE

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_LFIC_CONST)  *********************/

/* used for global or static SWC specific constants */
# define CDD_LFIC_CONST

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_LFIC_VAR)  ***********************/

/* used for all global or static SWC specific variables that are not initialized by the startup code of the compiler */
# define CDD_LFIC_VAR_NOINIT

/* used for global or static SWC specific variables that are initialized by the startup code of the compiler */
# define CDD_LFIC_VAR_INIT

/* used for global or static SWC specific variables that are initialized with zero by the startup code of the compiler */
# define CDD_LFIC_VAR_ZERO_INIT

/***  End of saved code  ************************************************************************************/
#endif


#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_RFIC_VAR)  ***********************/

/* used for all global or static SWC specific variables that are not initialized by the startup code of the compiler */
# define CDD_RFIC_VAR_NOINIT

/* used for global or static SWC specific variables that are initialized by the startup code of the compiler */
# define CDD_RFIC_VAR_INIT

/* used for global or static SWC specific variables that are initialized with zero by the startup code of the compiler */
# define CDD_RFIC_VAR_ZERO_INIT

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_RFIC_CONST)  *********************/

/* used for global or static SWC specific constants */
# define CDD_RFIC_CONST

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_RFIC_CODE)  **********************/

/* used for SWC specific code */
# define CDD_RFIC_CODE

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:RTE_CDD_RFIC_APPL)  ******************/

/* used for references on application variables */
# define RTE_CDD_RFIC_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_CDD_RFIC_APPL_DATA

/* used for references on application functions */
# define RTE_CDD_RFIC_APPL_CODE

/* used for references on application constants */
# define RTE_CDD_RFIC_APPL_CONST

/***  End of saved code  ************************************************************************************/
#endif


#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:RTE_TP_APPL)  ************************/

/* used for references on application variables */
# define RTE_TP_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_TP_APPL_DATA

/* used for references on application functions */
# define RTE_TP_APPL_CODE

/* used for references on application constants */
# define RTE_TP_APPL_CONST

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:TP_CONST)  ***************************/

/* used for global or static SWC specific constants */
# define TP_CONST

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:TP_VAR)  *****************************/

/* used for all global or static SWC specific variables that are not initialized by the startup code of the compiler */
# define TP_VAR_NOINIT

/* used for global or static SWC specific variables that are initialized by the startup code of the compiler */
# define TP_VAR_INIT

/* used for global or static SWC specific variables that are initialized with zero by the startup code of the compiler */
# define TP_VAR_ZERO_INIT

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:TP_CODE)  ****************************/

/* used for SWC specific code */
# define TP_CODE

/***  End of saved code  ************************************************************************************/
#endif


#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:Telegram_CODE)  **********************/

/* used for SWC specific code */
# define Telegram_CODE

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:RTE_TELEGRAM_APPL)  ******************/

/* used for references on application variables */
# define RTE_TELEGRAM_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_TELEGRAM_APPL_DATA

/* used for references on application functions */
# define RTE_TELEGRAM_APPL_CODE

/* used for references on application constants */
# define RTE_TELEGRAM_APPL_CONST

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:Telegram_CONST)  *********************/

/* used for global or static SWC specific constants */
# define Telegram_CONST

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:Telegram_VAR)  ***********************/

/* used for all global or static SWC specific variables that are not initialized by the startup code of the compiler */
# define Telegram_VAR_NOINIT

/* used for global or static SWC specific variables that are initialized by the startup code of the compiler */
# define Telegram_VAR_INIT

/* used for global or static SWC specific variables that are initialized with zero by the startup code of the compiler */
# define Telegram_VAR_ZERO_INIT

/***  End of saved code  ************************************************************************************/
#endif


#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_RFIC_VAR)  ***********************/

/* used for all global or static SWC specific variables that are not initialized by the startup code of the compiler */
# define CDD_RFIC_VAR_NOINIT

/* used for global or static SWC specific variables that are initialized by the startup code of the compiler */
# define CDD_RFIC_VAR_INIT

/* used for global or static SWC specific variables that are initialized with zero by the startup code of the compiler */
# define CDD_RFIC_VAR_ZERO_INIT

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_RFIC_CONST)  *********************/

/* used for global or static SWC specific constants */
# define CDD_RFIC_CONST

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_RFIC_CODE)  **********************/

/* used for SWC specific code */
# define CDD_RFIC_CODE

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:RTE_CDD_RFIC_APPL)  ******************/

/* used for references on application variables */
# define RTE_CDD_RFIC_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_CDD_RFIC_APPL_DATA

/* used for references on application functions */
# define RTE_CDD_RFIC_APPL_CODE

/* used for references on application constants */
# define RTE_CDD_RFIC_APPL_CONST

/***  End of saved code  ************************************************************************************/
#endif


#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:RTE_CDD_LFIC_APPL)  ******************/

/* used for references on application variables */
# define RTE_CDD_LFIC_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_CDD_LFIC_APPL_DATA

/* used for references on application functions */
# define RTE_CDD_LFIC_APPL_CODE

/* used for references on application constants */
# define RTE_CDD_LFIC_APPL_CONST

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_LFIC_CODE)  **********************/

/* used for SWC specific code */
# define CDD_LFIC_CODE

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_LFIC_CONST)  *********************/

/* used for global or static SWC specific constants */
# define CDD_LFIC_CONST

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_LFIC_VAR)  ***********************/

/* used for all global or static SWC specific variables that are not initialized by the startup code of the compiler */
# define CDD_LFIC_VAR_NOINIT

/* used for global or static SWC specific variables that are initialized by the startup code of the compiler */
# define CDD_LFIC_VAR_INIT

/* used for global or static SWC specific variables that are initialized with zero by the startup code of the compiler */
# define CDD_LFIC_VAR_ZERO_INIT

/***  End of saved code  ************************************************************************************/
#endif


#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_RFIC_VAR)  ***********************/

/* used for all global or static SWC specific variables that are not initialized by the startup code of the compiler */
# define CDD_RFIC_VAR_NOINIT

/* used for global or static SWC specific variables that are initialized by the startup code of the compiler */
# define CDD_RFIC_VAR_INIT

/* used for global or static SWC specific variables that are initialized with zero by the startup code of the compiler */
# define CDD_RFIC_VAR_ZERO_INIT

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_RFIC_CONST)  *********************/

/* used for global or static SWC specific constants */
# define CDD_RFIC_CONST

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_RFIC_CODE)  **********************/

/* used for SWC specific code */
# define CDD_RFIC_CODE

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:RTE_CDD_RFIC_APPL)  ******************/

/* used for references on application variables */
# define RTE_CDD_RFIC_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_CDD_RFIC_APPL_DATA

/* used for references on application functions */
# define RTE_CDD_RFIC_APPL_CODE

/* used for references on application constants */
# define RTE_CDD_RFIC_APPL_CONST

/***  End of saved code  ************************************************************************************/
#endif


#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:RTE_CDD_LFIC_APPL)  ******************/

/* used for references on application variables */
# define RTE_CDD_LFIC_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_CDD_LFIC_APPL_DATA

/* used for references on application functions */
# define RTE_CDD_LFIC_APPL_CODE

/* used for references on application constants */
# define RTE_CDD_LFIC_APPL_CONST

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_LFIC_CODE)  **********************/

/* used for SWC specific code */
# define CDD_LFIC_CODE

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_LFIC_CONST)  *********************/

/* used for global or static SWC specific constants */
# define CDD_LFIC_CONST

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:CDD_LFIC_VAR)  ***********************/

/* used for all global or static SWC specific variables that are not initialized by the startup code of the compiler */
# define CDD_LFIC_VAR_NOINIT

/* used for global or static SWC specific variables that are initialized by the startup code of the compiler */
# define CDD_LFIC_VAR_INIT

/* used for global or static SWC specific variables that are initialized with zero by the startup code of the compiler */
# define CDD_LFIC_VAR_ZERO_INIT

/***  End of saved code  ************************************************************************************/
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#endif /* _RTE_COMPILER_CFG_H */
