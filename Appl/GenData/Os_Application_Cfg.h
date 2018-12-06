/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Os
 *           Program: Volvo AUTOSAR Platform 2.0 (MSR_VolvoAb_SLP2)
 *          Customer: Volvo Group Trucks Technology
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Freescale MPC5746C
 *    License Scope : The usage is restricted to CBD1800194_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Application_Cfg.h
 *   Generation Time: 2018-12-01 17:02:20
 *           Project: CBD1800194D00 - Version 1.0
 *          Delivery: CBD1800194_D01
 *      Tool Version: DaVinci Configurator (beta) 5.17.51 SP2
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Pro and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

#if !defined (OS_APPLICATION_CFG_H)                                                  /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_APPLICATION_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Number of application objects: OsApplication_Trusted_Core0 */
# define OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_ALARMS             (4UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_COUNTERS           (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_HOOKS              (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_ISRS               (6UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_CAT1ISRS           (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_SCHTS              (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_TASKS              (2UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_TRUSTED_CORE0_SERVICES           (0UL)

/* Number of application objects: OsApplication_Untrusted_Core0 */
# define OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_ALARMS             (10UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_COUNTERS           (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_HOOKS              (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_ISRS               (55UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_CAT1ISRS           (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_SCHTS              (0UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_TASKS              (4UL)
# define OS_CFG_NUM_APP_OSAPPLICATION_UNTRUSTED_CORE0_SERVICES           (0UL)

/* Number of application objects: SystemApplication_OsCore0 */
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_ALARMS             (0UL)
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_COUNTERS           (1UL)
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_HOOKS              (0UL)
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_ISRS               (1UL)
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_CAT1ISRS           (0UL)
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_SCHTS              (0UL)
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_TASKS              (1UL)
# define OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE0_SERVICES           (0UL)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_APPLICATION_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Application_Cfg.h
 *********************************************************************************************************************/
