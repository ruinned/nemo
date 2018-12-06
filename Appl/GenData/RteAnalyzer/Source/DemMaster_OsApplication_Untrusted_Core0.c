/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  DemMaster_OsApplication_Untrusted_Core0.c
 *        Config:  SCIM_BP.dpa
 *     SW-C Type:  DemMaster_OsApplication_Untrusted_Core0
 *
 *     Generator:  MICROSAR RTE Generator Version 4.18.0
 *                 RTE Core Version 1.18.0
 *       License:  Unlimited license CBD1800194 for Volvo Group Trucks Technology
 *
 *   Description:  C-Code implementation template for SW-C <DemMaster_OsApplication_Untrusted_Core0>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */ /* MD_Rte_TestCode */

/* PRQA S 3109 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3112 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3197 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3198 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3199 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3201 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3203 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3205 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3206 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3218 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3229 EOF */ /* MD_Rte_TestCode */
/* PRQA S 2002 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3334 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3417 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3426 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3453 EOF */ /* MD_Rte_TestCode */

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
 * Dem_DTCFormatType
 *   
 *
 * Dem_DTCGroupType
 *   
 *
 * Dem_DTCKindType
 *   
 *
 * Dem_DTCOriginType
 *   
 *
 * Dem_DTCSeverityType
 *   
 *
 * Dem_DTCStatusMaskType
 *   
 *
 * Dem_DTRControlType
 *   
 *
 * Dem_DebounceResetStatusType
 *   
 *
 * Dem_DebouncingStateType
 *   
 *
 * Dem_EventIdType
 *   
 *
 * Dem_EventStatusType
 *   
 *
 * Dem_IndicatorStatusType
 *   
 *
 * Dem_InitMonitorReasonType
 *   
 *
 * Dem_IumprDenomCondIdType
 *   
 *
 * Dem_IumprDenomCondStatusType
 *   
 *
 * Dem_IumprReadinessGroupType
 *   
 *
 * Dem_MonitorStatusType
 *   
 *
 * Dem_OperationCycleIdType
 *   
 *
 * Dem_OperationCycleStateType
 *   
 *
 * Dem_RatioIdType
 *   
 *
 * Dem_UdsStatusByteType
 *   
 *
 *********************************************************************************************************************/

#include "Rte_DemMaster_OsApplication_Untrusted_Core0.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_DemMaster_OsApplication_Untrusted_Core0.h"
#include "SchM_Dem.h"
#include "TSC_SchM_Dem.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void DemMaster_OsApplication_Untrusted_Core0_TestDefines(void);

typedef P2FUNC(Std_ReturnType, RTE_CODE, FncPtrType)(void); /* PRQA S 3448 */ /* MD_Rte_TestCode */


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
 * Dem_DTCGroupType: Integer in interval [0...16777215]
 * Dem_DTCStatusMaskType: Integer in interval [0...255]
 * Dem_EventIdType: Integer in interval [1...65535]
 * Dem_OperationCycleIdType: Integer in interval [0...255]
 * Dem_RatioIdType: Integer in interval [1...65535]
 * boolean: Boolean (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Dem_DTCFormatType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_DTC_FORMAT_OBD (0U)
 *   DEM_DTC_FORMAT_UDS (1U)
 *   DEM_DTC_FORMAT_J1939 (2U)
 * Dem_DTCKindType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_DTC_KIND_ALL_DTCS (1U)
 *   DEM_DTC_KIND_EMISSION_REL_DTCS (2U)
 * Dem_DTCOriginType: Enumeration of integer in interval [0...65535] with enumerators
 *   DEM_DTC_ORIGIN_PRIMARY_MEMORY (1U)
 *   DEM_DTC_ORIGIN_MIRROR_MEMORY (2U)
 *   DEM_DTC_ORIGIN_PERMANENT_MEMORY (3U)
 *   DEM_DTC_ORIGIN_OBD_RELEVANT_MEMORY (4U)
 *   DEM_DTC_ORIGIN_SECONDARY_MEMORY (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_10 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_11 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_12 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_13 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_14 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_15 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_16 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_17 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_18 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_19 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_1A (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_1B (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_1C (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_1D (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_1E (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_1F (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_20 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_21 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_22 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_23 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_24 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_25 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_26 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_27 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_28 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_29 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_2A (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_2B (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_2C (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_2D (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_2E (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_2F (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_30 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_31 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_32 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_33 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_34 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_35 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_36 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_37 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_38 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_39 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_3A (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_3B (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_3C (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_3D (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_3E (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_3F (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_40 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_41 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_42 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_43 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_44 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_45 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_46 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_47 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_48 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_49 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_4A (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_4B (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_4C (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_4D (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_4E (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_4F (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_50 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_51 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_52 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_53 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_54 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_55 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_56 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_57 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_58 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_59 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_5A (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_5B (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_5C (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_5D (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_5E (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_5F (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_60 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_61 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_62 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_63 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_64 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_65 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_66 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_67 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_68 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_69 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_6A (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_6B (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_6C (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_6D (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_6E (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_6F (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_70 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_71 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_72 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_73 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_74 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_75 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_76 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_77 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_78 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_79 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_7A (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_7B (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_7C (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_7D (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_7E (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_7F (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_80 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_81 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_82 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_83 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_84 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_85 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_86 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_87 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_88 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_89 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_8A (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_8B (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_8C (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_8D (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_8E (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_8F (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_90 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_91 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_92 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_93 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_94 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_95 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_96 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_97 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_98 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_99 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_9A (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_9B (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_9C (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_9D (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_9E (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_9F (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A0 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A1 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A2 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A3 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A4 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A5 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A6 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A7 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A8 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A9 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_AA (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_AB (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_AC (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_AD (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_AE (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_AF (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B0 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B1 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B2 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B3 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B4 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B5 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B6 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B7 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B8 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B9 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_BA (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_BB (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_BC (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_BD (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_BE (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_BF (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C0 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C1 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C2 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C3 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C4 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C5 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C6 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C7 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C8 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C9 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_CA (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_CB (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_CC (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_CD (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_CE (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_CF (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D0 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D1 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D2 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D3 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D4 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D5 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D6 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D7 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D8 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D9 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_DA (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_DB (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_DC (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_DD (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_DE (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_DF (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E0 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E1 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E2 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E3 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E4 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E5 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E6 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E7 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E8 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E9 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_EA (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_EB (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_EC (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_ED (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_EE (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_EF (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F0 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F1 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F2 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F3 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F4 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F5 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F6 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F7 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F8 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F9 (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_FA (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_FB (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_FC (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_FD (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_FE (5U)
 *   DEM_DTC_ORIGIN_USERDEFINED_MEMORY_FF (5U)
 * Dem_DTCSeverityType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_SEVERITY_NO_SEVERITY (0U)
 *   DTC_NO_SEVERITY_BflMask 255U (0b11111111)
 *   DTC_NO_SEVERITY_BflPn 0
 *   DTC_NO_SEVERITY_BflLn 8
 *   DEM_SEVERITY_WWHOBD_CLASS_A (2U)
 *   DTC_CLASS_BflMask 31U (0b00011111)
 *   DTC_CLASS_BflPn 0
 *   DTC_CLASS_BflLn 5
 *   DEM_SEVERITY_WWHOBD_CLASS_B1 (4U)
 *   DTC_CLASS_BflMask 31U (0b00011111)
 *   DTC_CLASS_BflPn 0
 *   DTC_CLASS_BflLn 5
 *   DEM_SEVERITY_WWHOBD_CLASS_B2 (8U)
 *   DTC_CLASS_BflMask 31U (0b00011111)
 *   DTC_CLASS_BflPn 0
 *   DTC_CLASS_BflLn 5
 *   DEM_SEVERITY_WWHOBD_CLASS_C (16U)
 *   DTC_CLASS_BflMask 31U (0b00011111)
 *   DTC_CLASS_BflPn 0
 *   DTC_CLASS_BflLn 5
 *   DEM_SEVERITY_WWHOBD_CLASS_NO_CLASS (1U)
 *   DTC_CLASS_BflMask 31U (0b00011111)
 *   DTC_CLASS_BflPn 0
 *   DTC_CLASS_BflLn 5
 *   DEM_SEVERITY_CHECK_AT_NEXT_HALT (64U)
 *   DTC_SEVERITY_BflMask 224U (0b11100000)
 *   DTC_SEVERITY_BflPn 5
 *   DTC_SEVERITY_BflLn 3
 *   DEM_SEVERITY_CHECK_IMMEDIATELY (128U)
 *   DTC_SEVERITY_BflMask 224U (0b11100000)
 *   DTC_SEVERITY_BflPn 5
 *   DTC_SEVERITY_BflLn 3
 *   DEM_SEVERITY_MAINTENANCE_ONLY (32U)
 *   DTC_SEVERITY_BflMask 224U (0b11100000)
 *   DTC_SEVERITY_BflPn 5
 *   DTC_SEVERITY_BflLn 3
 * Dem_DTRControlType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_DTR_CTL_NORMAL (0U)
 *   DEM_DTR_CTL_NO_MAX (1U)
 *   DEM_DTR_CTL_NO_MIN (2U)
 *   DEM_DTR_CTL_RESET (3U)
 *   DEM_DTR_CTL_INVISIBLE (4U)
 * Dem_DebounceResetStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_DEBOUNCE_STATUS_FREEZE (0U)
 *   DEM_DEBOUNCE_STATUS_RESET (1U)
 * Dem_DebouncingStateType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_TEMPORARILY_DEFECTIVE (1U)
 *   DEM_TEMPORARILY_DEFECTIVE_BflMask 1U (0b00000001)
 *   DEM_TEMPORARILY_DEFECTIVE_BflPn 0
 *   DEM_TEMPORARILY_DEFECTIVE_BflLn 1
 *   DEM_FINALLY_DEFECTIVE (2U)
 *   DEM_FINALLY_DEFECTIVE_BflMask 2U (0b00000010)
 *   DEM_FINALLY_DEFECTIVE_BflPn 1
 *   DEM_FINALLY_DEFECTIVE_BflLn 1
 *   DEM_TEMPORARILY_HEALED (4U)
 *   DEM_TEMPORARILY_HEALED_BflMask 4U (0b00000100)
 *   DEM_TEMPORARILY_HEALED_BflPn 2
 *   DEM_TEMPORARILY_HEALED_BflLn 1
 *   DEM_TEST_COMPLETE (8U)
 *   DEM_TEST_COMPLETE_BflMask 8U (0b00001000)
 *   DEM_TEST_COMPLETE_BflPn 3
 *   DEM_TEST_COMPLETE_BflLn 1
 *   DEM_DTR_UPDATE (16U)
 *   DEM_DTR_UPDATE_BflMask 16U (0b00010000)
 *   DEM_DTR_UPDATE_BflPn 4
 *   DEM_DTR_UPDATE_BflLn 1
 * Dem_EventStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_EVENT_STATUS_PASSED (0U)
 *   DEM_EVENT_STATUS_FAILED (1U)
 *   DEM_EVENT_STATUS_PREPASSED (2U)
 *   DEM_EVENT_STATUS_PREFAILED (3U)
 *   DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED (4U)
 *   DEM_EVENT_STATUS_PASSED_CONDITIONS_NOT_FULFILLED (5U)
 *   DEM_EVENT_STATUS_FAILED_CONDITIONS_NOT_FULFILLED (6U)
 *   DEM_EVENT_STATUS_PREPASSED_CONDITIONS_NOT_FULFILLED (7U)
 *   DEM_EVENT_STATUS_PREFAILED_CONDITIONS_NOT_FULFILLED (8U)
 * Dem_IndicatorStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_INDICATOR_OFF (0U)
 *   DEM_INDICATOR_CONTINUOUS (1U)
 *   DEM_INDICATOR_BLINKING (2U)
 *   DEM_INDICATOR_BLINK_CONT (3U)
 *   DEM_INDICATOR_SLOW_FLASH (4U)
 *   DEM_INDICATOR_FAST_FLASH (5U)
 *   DEM_INDICATOR_ON_DEMAND (6U)
 *   DEM_INDICATOR_SHORT (7U)
 * Dem_InitMonitorReasonType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_INIT_MONITOR_CLEAR (1U)
 *   DEM_INIT_MONITOR_RESTART (2U)
 *   DEM_INIT_MONITOR_REENABLED (3U)
 *   DEM_INIT_MONITOR_STORAGE_REENABLED (4U)
 * Dem_IumprDenomCondIdType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_IUMPR_GENERAL_DENOMINATOR (1U)
 *   DEM_IUMPR_DEN_COND_COLDSTART (2U)
 *   DEM_IUMPR_DEN_COND_EVAP (3U)
 *   DEM_IUMPR_DEN_COND_500MI (4U)
 * Dem_IumprDenomCondStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_IUMPR_DEN_STATUS_NOT_REACHED (0U)
 *   DEM_IUMPR_DEN_STATUS_REACHED (1U)
 *   DEM_IUMPR_DEN_STATUS_INHIBITED (2U)
 * Dem_IumprReadinessGroupType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_IUMPR_BOOSTPRS (0U)
 *   DEM_IUMPR_CAT1 (1U)
 *   DEM_IUMPR_CAT2 (2U)
 *   DEM_IUMPR_EGR (3U)
 *   DEM_IUMPR_EGSENSOR (4U)
 *   DEM_IUMPR_EVAP (5U)
 *   DEM_IUMPR_NMHCCAT (6U)
 *   DEM_IUMPR_NOXADSORB (7U)
 *   DEM_IUMPR_NOXCAT (8U)
 *   DEM_IUMPR_OXS1 (9U)
 *   DEM_IUMPR_OXS2 (10U)
 *   DEM_IUMPR_PMFILTER (11U)
 *   DEM_IUMPR_PRIVATE (12U)
 *   DEM_IUMPR_SAIR (13U)
 *   DEM_IUMPR_SECOXS1 (14U)
 *   DEM_IUMPR_SECOXS2 (15U)
 *   DEM_IUMPR_FLSYS (16U)
 *   DEM_IUMPR_ALLGROUPS (255U)
 * Dem_MonitorStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_MONITOR_STATUS_TF (1U)
 *   DEM_MONITOR_STATUS_TF_BflMask 1U (0b00000001)
 *   DEM_MONITOR_STATUS_TF_BflPn 0
 *   DEM_MONITOR_STATUS_TF_BflLn 1
 *   DEM_MONITOR_STATUS_TNCTOC (2U)
 *   DEM_MONITOR_STATUS_TNCTOC_BflMask 2U (0b00000010)
 *   DEM_MONITOR_STATUS_TNCTOC_BflPn 1
 *   DEM_MONITOR_STATUS_TNCTOC_BflLn 1
 * Dem_OperationCycleStateType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_CYCLE_STATE_START (0U)
 *   DEM_CYCLE_STATE_END (1U)
 * Dem_UdsStatusByteType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_UDS_STATUS_TF (1U)
 *   DEM_UDS_STATUS_TF_BflMask 1U (0b00000001)
 *   DEM_UDS_STATUS_TF_BflPn 0
 *   DEM_UDS_STATUS_TF_BflLn 1
 *   DEM_UDS_STATUS_TFTOC (2U)
 *   DEM_UDS_STATUS_TFTOC_BflMask 2U (0b00000010)
 *   DEM_UDS_STATUS_TFTOC_BflPn 1
 *   DEM_UDS_STATUS_TFTOC_BflLn 1
 *   DEM_UDS_STATUS_PDTC (4U)
 *   DEM_UDS_STATUS_PDTC_BflMask 4U (0b00000100)
 *   DEM_UDS_STATUS_PDTC_BflPn 2
 *   DEM_UDS_STATUS_PDTC_BflLn 1
 *   DEM_UDS_STATUS_CDTC (8U)
 *   DEM_UDS_STATUS_CDTC_BflMask 8U (0b00001000)
 *   DEM_UDS_STATUS_CDTC_BflPn 3
 *   DEM_UDS_STATUS_CDTC_BflLn 1
 *   DEM_UDS_STATUS_TNCSLC (16U)
 *   DEM_UDS_STATUS_TNCSLC_BflMask 16U (0b00010000)
 *   DEM_UDS_STATUS_TNCSLC_BflPn 4
 *   DEM_UDS_STATUS_TNCSLC_BflLn 1
 *   DEM_UDS_STATUS_TFSLC (32U)
 *   DEM_UDS_STATUS_TFSLC_BflMask 32U (0b00100000)
 *   DEM_UDS_STATUS_TFSLC_BflPn 5
 *   DEM_UDS_STATUS_TFSLC_BflLn 1
 *   DEM_UDS_STATUS_TNCTOC (64U)
 *   DEM_UDS_STATUS_TNCTOC_BflMask 64U (0b01000000)
 *   DEM_UDS_STATUS_TNCTOC_BflPn 6
 *   DEM_UDS_STATUS_TNCTOC_BflLn 1
 *   DEM_UDS_STATUS_WIR (128U)
 *   DEM_UDS_STATUS_WIR_BflMask 128U (0b10000000)
 *   DEM_UDS_STATUS_WIR_BflPn 7
 *   DEM_UDS_STATUS_WIR_BflLn 1
 *
 * Array Types:
 * ============
 * DataArrayType_uint8_2: Array with 2 element(s) of type uint8
 * Dem_MaxDataValueType: Array with 2 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define DemMaster_OsApplication_Untrusted_Core0_START_SEC_CODE
#include "DemMaster_OsApplication_Untrusted_Core0_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClearDTC
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ClearDTC> of PortPrototype <ClearDTC_DemClient>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_ClearDTC(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_ClearDTC_DEM_CLEAR_BUSY
 *   RTE_E_ClearDTC_DEM_CLEAR_FAILED
 *   RTE_E_ClearDTC_DEM_CLEAR_MEMORY_ERROR
 *   RTE_E_ClearDTC_DEM_PENDING
 *   RTE_E_ClearDTC_DEM_WRONG_DTC
 *   RTE_E_ClearDTC_DEM_WRONG_DTCORIGIN
 *   RTE_E_ClearDTC_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ClearDTC_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_ClearDTC(uint8 parg0) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_ClearDTC (returns application error)
 *********************************************************************************************************************/

  DemMaster_OsApplication_Untrusted_Core0_TestDefines();

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Dem_MasterMainFunction
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CBReadData_DemDataElementClass_StartApplication_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DemDataElementClass_StartApplication_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_MasterMainFunction_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_MasterMainFunction(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_MasterMainFunction
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  DataArrayType_uint8_2 Call_CBReadData_DemDataElementClass_StartApplication_ReadData_Data = {
  0U, 0U
};

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType DemMaster_OsApplication_Untrusted_Core0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemMaster_OsApplication_Untrusted_Core0_FctPtr = (FncPtrType)TSC_DemMaster_OsApplication_Untrusted_Core0_Rte_Call_CBReadData_DemDataElementClass_StartApplication_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemMaster_OsApplication_Untrusted_Core0_Rte_Call_CBReadData_DemDataElementClass_StartApplication_ReadData(Call_CBReadData_DemDataElementClass_StartApplication_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DemDataElementClass_StartApplication_E_NOT_OK:
      fct_error = 1;
      break;
  }

  TSC_Dem_SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_0();
  TSC_Dem_SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_0();
  TSC_Dem_SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_1();
  TSC_Dem_SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_1();
  TSC_Dem_SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_2();
  TSC_Dem_SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_2();
  TSC_Dem_SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_3();
  TSC_Dem_SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_3();
  TSC_Dem_SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_4();
  TSC_Dem_SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_4();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetDTCOfEvent
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, uint32 *DTCOfEvent)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GeneralDiagnosticInfo_DEM_E_NO_DTC_AVAILABLE
 *   RTE_E_GeneralDiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetDTCOfEvent_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) DTCOfEvent);
FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) DTCOfEvent) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetDTCOfEvent (returns application error)
 *********************************************************************************************************************/

  TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetDTCOfEvent(
    EventId,
    DTCFormat,
    DTCOfEvent
  );
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetDTCStatusAvailabilityMask
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDTCStatusAvailabilityMask> of PortPrototype <DemServices>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetDTCStatusAvailabilityMask(uint8 ClientId, uint8 *DTCStatusMask)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DemServices_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetDTCStatusAvailabilityMask_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_GetDTCStatusAvailabilityMask(uint8 ClientId, P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) DTCStatusMask) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetDTCStatusAvailabilityMask (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetDebouncingOfEvent
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetDebouncingOfEvent(Dem_EventIdType EventId, Dem_DebouncingStateType *DebouncingState)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GeneralDiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetDebouncingOfEvent_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetDebouncingOfEvent(Dem_EventIdType EventId, P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) DebouncingState);
FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_GetDebouncingOfEvent(Dem_EventIdType EventId, P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) DebouncingState) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetDebouncingOfEvent (returns application error)
 *********************************************************************************************************************/

  TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetDebouncingOfEvent(
    EventId,
    DebouncingState
  );
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventEnableCondition
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventEnableCondition(Dem_EventIdType EventId, boolean *ConditionFullfilled)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GeneralDiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventEnableCondition_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetEventEnableCondition(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) ConditionFullfilled);
FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_GetEventEnableCondition(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) ConditionFullfilled) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventEnableCondition (returns application error)
 *********************************************************************************************************************/

  TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetEventEnableCondition(
    EventId,
    ConditionFullfilled
  );
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventExtendedDataRecordEx
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventExtendedDataRecordEx(Dem_EventIdType EventId, uint8 RecordNumber, uint8 *DestBuffer, uint16 *BufSize)
 *     Argument DestBuffer: uint8* is of type Dem_MaxDataValueType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GeneralDiagnosticInfo_DEM_BUFFER_TOO_SMALL
 *   RTE_E_GeneralDiagnosticInfo_DEM_NO_SUCH_ELEMENT
 *   RTE_E_GeneralDiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventExtendedDataRecordEx_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetEventExtendedDataRecordEx(Dem_EventIdType EventId, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) BufSize);
FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_GetEventExtendedDataRecordEx(Dem_EventIdType EventId, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) BufSize) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventExtendedDataRecordEx (returns application error)
 *********************************************************************************************************************/

  TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetEventExtendedDataRecordEx(
    EventId,
    RecordNumber,
    DestBuffer,
    BufSize
  );
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventFailed
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventFailed(Dem_EventIdType EventId, boolean *EventFailed)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GeneralDiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventFailed_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetEventFailed(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) EventFailed);
FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_GetEventFailed(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) EventFailed) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventFailed (returns application error)
 *********************************************************************************************************************/

  TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetEventFailed(
    EventId,
    EventFailed
  );
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventFreezeFrameDataEx
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, uint8 *DestBuffer, uint16 *BufSize)
 *     Argument DestBuffer: uint8* is of type Dem_MaxDataValueType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GeneralDiagnosticInfo_DEM_BUFFER_TOO_SMALL
 *   RTE_E_GeneralDiagnosticInfo_DEM_NO_SUCH_ELEMENT
 *   RTE_E_GeneralDiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventFreezeFrameDataEx_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) BufSize);
FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) BufSize) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventFreezeFrameDataEx (returns application error)
 *********************************************************************************************************************/

  TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetEventFreezeFrameDataEx(
    EventId,
    RecordNumber,
    DataId,
    DestBuffer,
    BufSize
  );
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventMemoryOverflow
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventMemoryOverflow> of PortPrototype <OverflowIndPrimaryMemory_DemClient>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventMemoryOverflow(boolean *OverflowIndication)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_EvMemOverflowIndication_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventMemoryOverflow_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_GetEventMemoryOverflow(uint8 parg0, Dem_DTCOriginType parg1, P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) OverflowIndication) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventMemoryOverflow (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventUdsStatus(Dem_EventIdType EventId, Dem_UdsStatusByteType *UDSStatusByte)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GeneralDiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetEventUdsStatus(Dem_EventIdType EventId, P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) UDSStatusByte);
FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_GetEventUdsStatus(Dem_EventIdType EventId, P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) UDSStatusByte) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventUdsStatus (returns application error)
 *********************************************************************************************************************/

  TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetEventUdsStatus(
    EventId,
    UDSStatusByte
  );
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventTested
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventTested(Dem_EventIdType EventId, boolean *EventTested)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GeneralDiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventTested_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetEventTested(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) EventTested);
FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_GetEventTested(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) EventTested) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventTested (returns application error)
 *********************************************************************************************************************/

  TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetEventTested(
    EventId,
    EventTested
  );
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetFaultDetectionCounter
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetFaultDetectionCounter(Dem_EventIdType EventId, sint8 *FaultDetectionCounter)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GeneralDiagnosticInfo_DEM_E_NO_FDC_AVAILABLE
 *   RTE_E_GeneralDiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetFaultDetectionCounter_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetFaultDetectionCounter(Dem_EventIdType EventId, P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) FaultDetectionCounter);
FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_GetFaultDetectionCounter(Dem_EventIdType EventId, P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) FaultDetectionCounter) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetFaultDetectionCounter (returns application error)
 *********************************************************************************************************************/

  TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetFaultDetectionCounter(
    EventId,
    FaultDetectionCounter
  );
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetMonitorStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <GeneralEventInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetMonitorStatus(Dem_EventIdType EventId, Dem_MonitorStatusType *MonitorStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GeneralDiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMonitorStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetMonitorStatus(Dem_EventIdType EventId, P2VAR(Dem_MonitorStatusType, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) MonitorStatus);
FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_GetMonitorStatus(Dem_EventIdType EventId, P2VAR(Dem_MonitorStatusType, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) MonitorStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetMonitorStatus (returns application error)
 *********************************************************************************************************************/

  TSC_Inline_DemSatellite_OsApplication_Untrusted_Core0_Dem_GetMonitorStatus(
    EventId,
    MonitorStatus
  );
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNumberOfEventMemoryEntries
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetNumberOfEventMemoryEntries> of PortPrototype <OverflowIndPrimaryMemory_DemClient>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetNumberOfEventMemoryEntries(uint8 *NumberOfEventMemoryEntries)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_EvMemOverflowIndication_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNumberOfEventMemoryEntries_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_GetNumberOfEventMemoryEntries(uint8 parg0, Dem_DTCOriginType parg1, P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) NumberOfEventMemoryEntries) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetNumberOfEventMemoryEntries (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetOperationCycleState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetOperationCycleState> of PortPrototype <OpCycle_DemOperationCycle_0>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetOperationCycleState(Dem_OperationCycleStateType *CycleState)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_OperationCycle_E_NOT_OK
 *   RTE_E_OperationCycle_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetOperationCycleState_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_GetOperationCycleState(Dem_OperationCycleIdType parg0, P2VAR(Dem_OperationCycleStateType, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) CycleState) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetOperationCycleState (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PostRunRequested
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetPostRunRequested> of PortPrototype <DemServices>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_PostRunRequested(boolean *IsRequested)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DemServices_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PostRunRequested_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_PostRunRequested(P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_OSAPPLICATION_UNTRUSTED_CORE0_APPL_VAR) IsRequested) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_PostRunRequested (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SelectDTC
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SelectDTC> of PortPrototype <ClearDTC_DemClient>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_SelectDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_ClearDTC_E_NOT_OK
 *   RTE_E_ClearDTC_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SelectDTC_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_SelectDTC(uint8 parg0, uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_SelectDTC (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetOperationCycleState
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetOperationCycleState> of PortPrototype <OpCycle_DemOperationCycle_0>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_SetOperationCycleState(Dem_OperationCycleStateType CycleState)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_OperationCycle_E_NOT_OK
 *   RTE_E_OperationCycle_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetOperationCycleState_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemMaster_OsApplication_Untrusted_Core0_CODE) Dem_SetOperationCycleState(Dem_OperationCycleIdType parg0, Dem_OperationCycleStateType CycleState) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_SetOperationCycleState (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define DemMaster_OsApplication_Untrusted_Core0_STOP_SEC_CODE
#include "DemMaster_OsApplication_Untrusted_Core0_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void DemMaster_OsApplication_Untrusted_Core0_TestDefines(void)
{
  /* Enumeration Data Types */

  Dem_DTCFormatType Test_Dem_DTCFormatType_V_1 = DEM_DTC_FORMAT_OBD;
  Dem_DTCFormatType Test_Dem_DTCFormatType_V_2 = DEM_DTC_FORMAT_UDS;
  Dem_DTCFormatType Test_Dem_DTCFormatType_V_3 = DEM_DTC_FORMAT_J1939;

  Dem_DTCKindType Test_Dem_DTCKindType_V_1 = DEM_DTC_KIND_ALL_DTCS;
  Dem_DTCKindType Test_Dem_DTCKindType_V_2 = DEM_DTC_KIND_EMISSION_REL_DTCS;

  Dem_DTCOriginType Test_Dem_DTCOriginType_V_1 = DEM_DTC_ORIGIN_PRIMARY_MEMORY;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_2 = DEM_DTC_ORIGIN_MIRROR_MEMORY;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_3 = DEM_DTC_ORIGIN_PERMANENT_MEMORY;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_4 = DEM_DTC_ORIGIN_OBD_RELEVANT_MEMORY;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_5 = DEM_DTC_ORIGIN_SECONDARY_MEMORY;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_6 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_10;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_7 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_11;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_8 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_12;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_9 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_13;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_10 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_14;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_11 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_15;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_12 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_16;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_13 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_17;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_14 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_18;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_15 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_19;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_16 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_1A;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_17 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_1B;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_18 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_1C;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_19 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_1D;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_20 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_1E;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_21 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_1F;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_22 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_20;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_23 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_21;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_24 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_22;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_25 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_23;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_26 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_24;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_27 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_25;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_28 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_26;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_29 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_27;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_30 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_28;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_31 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_29;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_32 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_2A;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_33 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_2B;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_34 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_2C;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_35 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_2D;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_36 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_2E;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_37 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_2F;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_38 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_30;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_39 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_31;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_40 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_32;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_41 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_33;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_42 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_34;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_43 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_35;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_44 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_36;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_45 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_37;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_46 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_38;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_47 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_39;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_48 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_3A;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_49 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_3B;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_50 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_3C;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_51 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_3D;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_52 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_3E;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_53 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_3F;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_54 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_40;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_55 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_41;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_56 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_42;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_57 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_43;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_58 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_44;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_59 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_45;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_60 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_46;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_61 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_47;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_62 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_48;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_63 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_49;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_64 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_4A;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_65 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_4B;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_66 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_4C;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_67 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_4D;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_68 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_4E;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_69 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_4F;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_70 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_50;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_71 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_51;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_72 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_52;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_73 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_53;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_74 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_54;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_75 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_55;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_76 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_56;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_77 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_57;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_78 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_58;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_79 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_59;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_80 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_5A;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_81 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_5B;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_82 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_5C;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_83 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_5D;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_84 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_5E;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_85 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_5F;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_86 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_60;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_87 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_61;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_88 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_62;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_89 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_63;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_90 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_64;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_91 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_65;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_92 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_66;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_93 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_67;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_94 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_68;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_95 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_69;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_96 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_6A;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_97 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_6B;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_98 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_6C;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_99 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_6D;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_100 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_6E;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_101 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_6F;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_102 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_70;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_103 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_71;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_104 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_72;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_105 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_73;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_106 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_74;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_107 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_75;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_108 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_76;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_109 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_77;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_110 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_78;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_111 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_79;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_112 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_7A;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_113 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_7B;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_114 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_7C;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_115 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_7D;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_116 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_7E;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_117 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_7F;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_118 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_80;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_119 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_81;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_120 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_82;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_121 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_83;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_122 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_84;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_123 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_85;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_124 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_86;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_125 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_87;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_126 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_88;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_127 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_89;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_128 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_8A;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_129 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_8B;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_130 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_8C;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_131 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_8D;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_132 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_8E;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_133 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_8F;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_134 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_90;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_135 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_91;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_136 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_92;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_137 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_93;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_138 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_94;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_139 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_95;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_140 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_96;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_141 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_97;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_142 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_98;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_143 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_99;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_144 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_9A;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_145 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_9B;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_146 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_9C;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_147 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_9D;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_148 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_9E;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_149 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_9F;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_150 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A0;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_151 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A1;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_152 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A2;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_153 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A3;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_154 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A4;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_155 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A5;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_156 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A6;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_157 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A7;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_158 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A8;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_159 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_A9;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_160 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_AA;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_161 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_AB;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_162 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_AC;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_163 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_AD;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_164 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_AE;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_165 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_AF;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_166 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B0;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_167 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B1;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_168 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B2;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_169 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B3;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_170 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B4;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_171 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B5;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_172 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B6;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_173 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B7;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_174 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B8;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_175 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_B9;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_176 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_BA;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_177 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_BB;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_178 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_BC;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_179 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_BD;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_180 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_BE;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_181 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_BF;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_182 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C0;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_183 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C1;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_184 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C2;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_185 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C3;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_186 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C4;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_187 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C5;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_188 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C6;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_189 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C7;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_190 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C8;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_191 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_C9;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_192 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_CA;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_193 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_CB;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_194 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_CC;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_195 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_CD;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_196 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_CE;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_197 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_CF;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_198 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D0;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_199 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D1;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_200 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D2;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_201 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D3;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_202 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D4;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_203 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D5;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_204 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D6;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_205 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D7;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_206 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D8;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_207 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_D9;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_208 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_DA;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_209 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_DB;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_210 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_DC;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_211 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_DD;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_212 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_DE;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_213 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_DF;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_214 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E0;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_215 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E1;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_216 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E2;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_217 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E3;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_218 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E4;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_219 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E5;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_220 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E6;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_221 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E7;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_222 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E8;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_223 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_E9;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_224 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_EA;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_225 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_EB;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_226 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_EC;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_227 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_ED;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_228 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_EE;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_229 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_EF;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_230 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F0;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_231 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F1;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_232 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F2;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_233 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F3;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_234 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F4;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_235 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F5;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_236 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F6;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_237 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F7;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_238 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F8;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_239 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_F9;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_240 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_FA;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_241 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_FB;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_242 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_FC;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_243 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_FD;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_244 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_FE;
  Dem_DTCOriginType Test_Dem_DTCOriginType_V_245 = DEM_DTC_ORIGIN_USERDEFINED_MEMORY_FF;

  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_1 = DEM_SEVERITY_NO_SEVERITY;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_1_BflMask = DTC_NO_SEVERITY_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_1_BflPn = DTC_NO_SEVERITY_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_1_BflLn = DTC_NO_SEVERITY_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_2 = DEM_SEVERITY_WWHOBD_CLASS_A;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_2_BflMask = DTC_CLASS_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_2_BflPn = DTC_CLASS_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_2_BflLn = DTC_CLASS_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_3 = DEM_SEVERITY_WWHOBD_CLASS_B1;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_3_BflMask = DTC_CLASS_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_3_BflPn = DTC_CLASS_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_3_BflLn = DTC_CLASS_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_4 = DEM_SEVERITY_WWHOBD_CLASS_B2;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_4_BflMask = DTC_CLASS_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_4_BflPn = DTC_CLASS_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_4_BflLn = DTC_CLASS_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_5 = DEM_SEVERITY_WWHOBD_CLASS_C;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_5_BflMask = DTC_CLASS_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_5_BflPn = DTC_CLASS_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_5_BflLn = DTC_CLASS_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_6 = DEM_SEVERITY_WWHOBD_CLASS_NO_CLASS;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_6_BflMask = DTC_CLASS_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_6_BflPn = DTC_CLASS_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_6_BflLn = DTC_CLASS_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_7 = DEM_SEVERITY_CHECK_AT_NEXT_HALT;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_7_BflMask = DTC_SEVERITY_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_7_BflPn = DTC_SEVERITY_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_7_BflLn = DTC_SEVERITY_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_8 = DEM_SEVERITY_CHECK_IMMEDIATELY;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_8_BflMask = DTC_SEVERITY_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_8_BflPn = DTC_SEVERITY_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_8_BflLn = DTC_SEVERITY_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_9 = DEM_SEVERITY_MAINTENANCE_ONLY;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_9_BflMask = DTC_SEVERITY_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_9_BflPn = DTC_SEVERITY_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_9_BflLn = DTC_SEVERITY_BflLn;

  Dem_DTRControlType Test_Dem_DTRControlType_V_1 = DEM_DTR_CTL_NORMAL;
  Dem_DTRControlType Test_Dem_DTRControlType_V_2 = DEM_DTR_CTL_NO_MAX;
  Dem_DTRControlType Test_Dem_DTRControlType_V_3 = DEM_DTR_CTL_NO_MIN;
  Dem_DTRControlType Test_Dem_DTRControlType_V_4 = DEM_DTR_CTL_RESET;
  Dem_DTRControlType Test_Dem_DTRControlType_V_5 = DEM_DTR_CTL_INVISIBLE;

  Dem_DebounceResetStatusType Test_Dem_DebounceResetStatusType_V_1 = DEM_DEBOUNCE_STATUS_FREEZE;
  Dem_DebounceResetStatusType Test_Dem_DebounceResetStatusType_V_2 = DEM_DEBOUNCE_STATUS_RESET;

  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_1 = DEM_TEMPORARILY_DEFECTIVE;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_1_BflMask = DEM_TEMPORARILY_DEFECTIVE_BflMask;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_1_BflPn = DEM_TEMPORARILY_DEFECTIVE_BflPn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_1_BflLn = DEM_TEMPORARILY_DEFECTIVE_BflLn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_2 = DEM_FINALLY_DEFECTIVE;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_2_BflMask = DEM_FINALLY_DEFECTIVE_BflMask;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_2_BflPn = DEM_FINALLY_DEFECTIVE_BflPn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_2_BflLn = DEM_FINALLY_DEFECTIVE_BflLn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_3 = DEM_TEMPORARILY_HEALED;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_3_BflMask = DEM_TEMPORARILY_HEALED_BflMask;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_3_BflPn = DEM_TEMPORARILY_HEALED_BflPn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_3_BflLn = DEM_TEMPORARILY_HEALED_BflLn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_4 = DEM_TEST_COMPLETE;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_4_BflMask = DEM_TEST_COMPLETE_BflMask;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_4_BflPn = DEM_TEST_COMPLETE_BflPn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_4_BflLn = DEM_TEST_COMPLETE_BflLn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_5 = DEM_DTR_UPDATE;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_5_BflMask = DEM_DTR_UPDATE_BflMask;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_5_BflPn = DEM_DTR_UPDATE_BflPn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_5_BflLn = DEM_DTR_UPDATE_BflLn;

  Dem_EventStatusType Test_Dem_EventStatusType_V_1 = DEM_EVENT_STATUS_PASSED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_2 = DEM_EVENT_STATUS_FAILED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_3 = DEM_EVENT_STATUS_PREPASSED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_4 = DEM_EVENT_STATUS_PREFAILED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_5 = DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_6 = DEM_EVENT_STATUS_PASSED_CONDITIONS_NOT_FULFILLED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_7 = DEM_EVENT_STATUS_FAILED_CONDITIONS_NOT_FULFILLED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_8 = DEM_EVENT_STATUS_PREPASSED_CONDITIONS_NOT_FULFILLED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_9 = DEM_EVENT_STATUS_PREFAILED_CONDITIONS_NOT_FULFILLED;

  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_1 = DEM_INDICATOR_OFF;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_2 = DEM_INDICATOR_CONTINUOUS;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_3 = DEM_INDICATOR_BLINKING;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_4 = DEM_INDICATOR_BLINK_CONT;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_5 = DEM_INDICATOR_SLOW_FLASH;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_6 = DEM_INDICATOR_FAST_FLASH;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_7 = DEM_INDICATOR_ON_DEMAND;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_8 = DEM_INDICATOR_SHORT;

  Dem_InitMonitorReasonType Test_Dem_InitMonitorReasonType_V_1 = DEM_INIT_MONITOR_CLEAR;
  Dem_InitMonitorReasonType Test_Dem_InitMonitorReasonType_V_2 = DEM_INIT_MONITOR_RESTART;
  Dem_InitMonitorReasonType Test_Dem_InitMonitorReasonType_V_3 = DEM_INIT_MONITOR_REENABLED;
  Dem_InitMonitorReasonType Test_Dem_InitMonitorReasonType_V_4 = DEM_INIT_MONITOR_STORAGE_REENABLED;

  Dem_IumprDenomCondIdType Test_Dem_IumprDenomCondIdType_V_1 = DEM_IUMPR_GENERAL_DENOMINATOR;
  Dem_IumprDenomCondIdType Test_Dem_IumprDenomCondIdType_V_2 = DEM_IUMPR_DEN_COND_COLDSTART;
  Dem_IumprDenomCondIdType Test_Dem_IumprDenomCondIdType_V_3 = DEM_IUMPR_DEN_COND_EVAP;
  Dem_IumprDenomCondIdType Test_Dem_IumprDenomCondIdType_V_4 = DEM_IUMPR_DEN_COND_500MI;

  Dem_IumprDenomCondStatusType Test_Dem_IumprDenomCondStatusType_V_1 = DEM_IUMPR_DEN_STATUS_NOT_REACHED;
  Dem_IumprDenomCondStatusType Test_Dem_IumprDenomCondStatusType_V_2 = DEM_IUMPR_DEN_STATUS_REACHED;
  Dem_IumprDenomCondStatusType Test_Dem_IumprDenomCondStatusType_V_3 = DEM_IUMPR_DEN_STATUS_INHIBITED;

  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_1 = DEM_IUMPR_BOOSTPRS;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_2 = DEM_IUMPR_CAT1;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_3 = DEM_IUMPR_CAT2;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_4 = DEM_IUMPR_EGR;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_5 = DEM_IUMPR_EGSENSOR;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_6 = DEM_IUMPR_EVAP;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_7 = DEM_IUMPR_NMHCCAT;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_8 = DEM_IUMPR_NOXADSORB;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_9 = DEM_IUMPR_NOXCAT;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_10 = DEM_IUMPR_OXS1;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_11 = DEM_IUMPR_OXS2;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_12 = DEM_IUMPR_PMFILTER;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_13 = DEM_IUMPR_PRIVATE;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_14 = DEM_IUMPR_SAIR;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_15 = DEM_IUMPR_SECOXS1;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_16 = DEM_IUMPR_SECOXS2;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_17 = DEM_IUMPR_FLSYS;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_18 = DEM_IUMPR_ALLGROUPS;

  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_1 = DEM_MONITOR_STATUS_TF;
  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_1_BflMask = DEM_MONITOR_STATUS_TF_BflMask;
  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_1_BflPn = DEM_MONITOR_STATUS_TF_BflPn;
  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_1_BflLn = DEM_MONITOR_STATUS_TF_BflLn;
  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_2 = DEM_MONITOR_STATUS_TNCTOC;
  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_2_BflMask = DEM_MONITOR_STATUS_TNCTOC_BflMask;
  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_2_BflPn = DEM_MONITOR_STATUS_TNCTOC_BflPn;
  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_2_BflLn = DEM_MONITOR_STATUS_TNCTOC_BflLn;

  Dem_OperationCycleStateType Test_Dem_OperationCycleStateType_V_1 = DEM_CYCLE_STATE_START;
  Dem_OperationCycleStateType Test_Dem_OperationCycleStateType_V_2 = DEM_CYCLE_STATE_END;

  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_1 = DEM_UDS_STATUS_TF;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_1_BflMask = DEM_UDS_STATUS_TF_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_1_BflPn = DEM_UDS_STATUS_TF_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_1_BflLn = DEM_UDS_STATUS_TF_BflLn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_2 = DEM_UDS_STATUS_TFTOC;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_2_BflMask = DEM_UDS_STATUS_TFTOC_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_2_BflPn = DEM_UDS_STATUS_TFTOC_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_2_BflLn = DEM_UDS_STATUS_TFTOC_BflLn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_3 = DEM_UDS_STATUS_PDTC;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_3_BflMask = DEM_UDS_STATUS_PDTC_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_3_BflPn = DEM_UDS_STATUS_PDTC_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_3_BflLn = DEM_UDS_STATUS_PDTC_BflLn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_4 = DEM_UDS_STATUS_CDTC;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_4_BflMask = DEM_UDS_STATUS_CDTC_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_4_BflPn = DEM_UDS_STATUS_CDTC_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_4_BflLn = DEM_UDS_STATUS_CDTC_BflLn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_5 = DEM_UDS_STATUS_TNCSLC;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_5_BflMask = DEM_UDS_STATUS_TNCSLC_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_5_BflPn = DEM_UDS_STATUS_TNCSLC_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_5_BflLn = DEM_UDS_STATUS_TNCSLC_BflLn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_6 = DEM_UDS_STATUS_TFSLC;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_6_BflMask = DEM_UDS_STATUS_TFSLC_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_6_BflPn = DEM_UDS_STATUS_TFSLC_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_6_BflLn = DEM_UDS_STATUS_TFSLC_BflLn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_7 = DEM_UDS_STATUS_TNCTOC;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_7_BflMask = DEM_UDS_STATUS_TNCTOC_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_7_BflPn = DEM_UDS_STATUS_TNCTOC_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_7_BflLn = DEM_UDS_STATUS_TNCTOC_BflLn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_8 = DEM_UDS_STATUS_WIR;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_8_BflMask = DEM_UDS_STATUS_WIR_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_8_BflPn = DEM_UDS_STATUS_WIR_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_8_BflLn = DEM_UDS_STATUS_WIR_BflLn;
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

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_TestCode:
     Reason:     This justification is used within the generated test code by the Rte Analyzer.
     Risk:       No functional risk.
     Prevention: Not required.

*/
