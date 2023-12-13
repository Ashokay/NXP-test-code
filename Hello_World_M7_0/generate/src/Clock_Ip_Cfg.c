/*==================================================================================================
*   Project              : RTD AUTOSAR R21-11
*   Platform             : CORTEXM
*   Peripheral           : S32K3XX
*   Dependencies         : none
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 3.0.0
*   Build Version        : S32K3_RTD_3_0_0_D2303_ASR_REL_4_7_REV_0000_20230331
*
*   Copyright 2020 - 2023 NXP
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

/**
*   @file       Clock_Ip_Cfg.c
*   @version    3.0.0
*
*   @brief   AUTOSAR Mcu - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup CLOCK_DRIVER_CONFIGURATION Clock Driver
*   @{
*/


#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Clock_Ip_Cfg.h"
#include "StandardTypes.h"
#include "Clock_Ip.h"
#include "Clock_Ip_Private.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_CFG_VENDOR_ID_C                      43
#define CLOCK_IP_CFG_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_CFG_AR_RELEASE_MINOR_VERSION_C       7
#define CLOCK_IP_CFG_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_CFG_SW_MAJOR_VERSION_C               3
#define CLOCK_IP_CFG_SW_MINOR_VERSION_C               0
#define CLOCK_IP_CFG_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and Clock_Ip_Cfg.h file are of the same vendor */
#if (CLOCK_IP_CFG_VENDOR_ID_C != CLOCK_IP_CFG_VENDOR_ID)
    #error "Clock_Ip_Cfg.c and Clock_Ip_Cfg.h have different vendor ids"
#endif

/* Check if source file and Clock_Ip_Cfg.h file are of the same Autosar version */
#if ((CLOCK_IP_CFG_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_CFG_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_CFG_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Cfg.c and Clock_Ip_Cfg.h are different"
#endif

/* Check if source file and Clock_Ip_Cfg.h file are of the same Software version */
#if ((CLOCK_IP_CFG_SW_MAJOR_VERSION_C != CLOCK_IP_CFG_SW_MAJOR_VERSION) || \
     (CLOCK_IP_CFG_SW_MINOR_VERSION_C != CLOCK_IP_CFG_SW_MINOR_VERSION) || \
     (CLOCK_IP_CFG_SW_PATCH_VERSION_C != CLOCK_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Cfg.c and Clock_Ip_Cfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if source file and StandardTypes.h file are of the same Autosar version */
#if ((CLOCK_IP_CFG_AR_RELEASE_MAJOR_VERSION_C != STD_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_CFG_AR_RELEASE_MINOR_VERSION_C != STD_AR_RELEASE_MINOR_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Cfg.c and StandardTypes.h are different"
#endif
#endif    /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/* Check if source file and Clock_Ip.h file are of the same vendor */
#if (CLOCK_IP_CFG_VENDOR_ID_C != CLOCK_IP_VENDOR_ID)
    #error "Clock_Ip_Cfg.c and Clock_Ip.h have different vendor ids"
#endif

/* Check if source file and Clock_Ip.h file are of the same Autosar version */
#if ((CLOCK_IP_CFG_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_CFG_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_CFG_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Cfg.c and Clock_Ip.h are different"
#endif

/* Check if source file and Clock_Ip.h file are of the same Software version */
#if ((CLOCK_IP_CFG_SW_MAJOR_VERSION_C != CLOCK_IP_SW_MAJOR_VERSION) || \
     (CLOCK_IP_CFG_SW_MINOR_VERSION_C != CLOCK_IP_SW_MINOR_VERSION) || \
     (CLOCK_IP_CFG_SW_PATCH_VERSION_C != CLOCK_IP_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Cfg.c and Clock_Ip.h are different"
#endif

/* Check if source file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_CFG_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_Cfg.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if source file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_CFG_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_CFG_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_CFG_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Cfg.c and Clock_Ip_Private.h are different"
#endif

/* Check if source file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_CFG_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_CFG_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_CFG_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Cfg.c and Clock_Ip_Private.h are different"
#endif

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/


#define MCU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcu_MemMap.h"



static const Clock_Ip_IrcoscConfigType Clock_Ip_IrcoscConfigurations_0[CLOCK_IP_CONFIGURED_IRCOSCS_0_NO] = {

    #if CLOCK_IP_CONFIGURED_IRCOSCS_0_NO > 0U
    {
        FIRC_CLK,                   /* name */
        1U,                     /* Always enabled. */
        0U,                     /* Enable regulator */
        CLOCK_IP_SUPPORTS_48MHZ_FREQUENCY,                     /* Ircosc range */
        0U,                     /* Ircosc enable in VLP mode */
        0U,                     /* Ircosc enable in STOP mode */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_IRCOSCS_0_NO > 1U
    {
        FIRC_STANDBY_CLK,                   /* name */
        0U,                     /* Disabled in standby mode. */
        0U,                     /* Enable regulator */
        0U,                     /* Ircosc range */
        0U,                     /* Ircosc enable in VLP mode */
        0U,                     /* Ircosc enable in STOP mode */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_IRCOSCS_0_NO > 2U
    {
        SIRC_STANDBY_CLK,                   /* name */
        0U,                     /* Disabled in standby mode. */
        0U,                     /* Enable regulator */
        0U,                     /* Ircosc range */
        0U,                     /* Ircosc enable in VLP mode */
        0U,                     /* Ircosc enable in STOP mode */
    },
    #endif
};


static const Clock_Ip_XoscConfigType Clock_Ip_XoscConfigurations_0[CLOCK_IP_CONFIGURED_XOSCS_0_NO] = {

    #if CLOCK_IP_CONFIGURED_XOSCS_0_NO > 0U
    {
        FXOSC_CLK,              /* name */
        16000000U,              /* frequency */ 
        1U,                     /* enable */
        49U,                   /* startupDelay */
        0U,                     /* bypassOption: Xosc use crystal */ 
        1U,                     /* Comparator is enabled */ 
        12U,                    /* TransConductance */
        0U,                     /* Gain value */
        0U,                     /* Monitor type */
        0U,                     /* Automatic level controller */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_XOSCS_0_NO > 1U
    {
        SXOSC_CLK,              /* name */
        32768U,              /* frequency */ 
        1U,                     /* enable */
        125U,                   /* startupDelay */
        0U,                     /* bypassOption */ 
        0U,                     /* Comparator is not enabled */ 
        0U,                     /* Crystal overdrive protection */
        0U,                     /* Gain value */
        0U,                     /* Monitor type */
        0U,                     /* Automatic level controller */
    },
    #endif
};


static const Clock_Ip_PllConfigType Clock_Ip_PllConfigurations_0[CLOCK_IP_CONFIGURED_PLLS_0_NO] = {

    #if CLOCK_IP_CONFIGURED_PLLS_0_NO > 0U
    {
        PLL_CLK,                /* name */
        1U,                     /* enable */
        FXOSC_CLK,                     /* inputReference */
        0U,                     /* Bypass */
        2U,                      /* predivider */
        0U,                      /* multiplier */
        0U,                      /* postdivider */
        0U,                     /* numeratorFracLoopDiv */
        120U,                   /* mulFactorDiv */
        1U,                     /* ModulationBypass */
        0U,                     /* Modulation type: Spread spectrum modulation bypassed */ 
        0U,                     /* modulationPeriod */
        0U,                     /* incrementStep */
        0U,                     /* sigmaDelta */
        0U,                     /* ditherControl */
        0U,                     /* ditherControlValue */
        0U,                     /* Monitor type */
        {
            0U,
            0U,
            0U,
        },
    },
    #endif
};


static const Clock_Ip_SelectorConfigType Clock_Ip_SelectorConfigurations_0[CLOCK_IP_CONFIGURED_SELECTORS_0_NO] = {

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 0U
    {
        SCS_CLK,                    /* Clock name associated to selector */
        PLL_PHI0_CLK,                    /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 1U
    {
        CLKOUT_RUN_CLK,                    /* Clock name associated to selector */
        FXOSC_CLK,                    /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 2U
    {
        CLKOUT_STANDBY_CLK,                    /* Clock name associated to selector */
        FIRC_CLK,                    /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 3U
    {
        EMAC_RX_CLK,                    /* Clock name associated to selector */
        FIRC_CLK,                    /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 4U
    {
        EMAC_TS_CLK,                    /* Clock name associated to selector */
        FIRC_CLK,                    /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 5U
    {
        EMAC_TX_CLK,                    /* Clock name associated to selector */
        FIRC_CLK,                    /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 6U
    {
        FLEXCANA_CLK,                    /* Clock name associated to selector */
        FIRC_CLK,                    /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 7U
    {
        FLEXCANB_CLK,                    /* Clock name associated to selector */
        FIRC_CLK,                    /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 8U
    {
        QSPI_SFCK_CLK,                    /* Clock name associated to selector */
        FIRC_CLK,                    /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 9U
    {
        RTC_CLK,                    /* Clock name associated to selector */
        SXOSC_CLK,                    /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 10U
    {
        STMA_CLK,                    /* Clock name associated to selector */
        FIRC_CLK,                    /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 11U
    {
        STMB_CLK,                    /* Clock name associated to selector */
        FIRC_CLK,                    /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 12U
    {
        TRACE_CLK,                    /* Clock name associated to selector */
        FIRC_CLK,                    /* Name of the selected input source */
    },
    #endif
};


static const Clock_Ip_DividerConfigType Clock_Ip_DividerConfigurations_0[CLOCK_IP_CONFIGURED_DIVIDERS_0_NO] = {

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 0U
    {
        PLL_POSTDIV_CLK,                    /* name */
        2U,                              /* value */
        {
            0U,
        }
    },
    #endif


    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 1U
    {
        PLL_PHI0_CLK,                    /* name */
        3U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 2U
    {
        PLL_PHI1_CLK,                    /* name */
        3U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 3U
    {
        CORE_CLK,                    /* name */
        1U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 4U
    {
        AIPS_PLAT_CLK,                    /* name */
        2U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 5U
    {
        AIPS_SLOW_CLK,                    /* name */
        4U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 6U
    {
        HSE_CLK,                    /* name */
        2U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 7U
    {
        DCM_CLK,                    /* name */
        4U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 8U
    {
        LBIST_CLK,                    /* name */
        4U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 9U
    {
        QSPI_MEM_CLK,                    /* name */
        1U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 10U
    {
        CLKOUT_RUN_CLK,                    /* name */
        2U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 11U
    {
        CLKOUT_STANDBY_CLK,                    /* name */
        2U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 12U
    {
        EMAC_RX_CLK,                    /* name */
        1U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 13U
    {
        EMAC_TS_CLK,                    /* name */
        1U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 14U
    {
        EMAC_TX_CLK,                    /* name */
        1U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 15U
    {
        FLEXCANA_CLK,                    /* name */
        3U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 16U
    {
        FLEXCANB_CLK,                    /* name */
        2U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 17U
    {
        QSPI_SFCK_CLK,                    /* name */
        2U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 18U
    {
        STMA_CLK,                    /* name */
        1U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 19U
    {
        STMB_CLK,                    /* name */
        1U,                              /* value */
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 20U
    {
        TRACE_CLK,                    /* name */
        1U,                              /* value */
        {
            0U,
        }
    },
    #endif
};


static const Clock_Ip_DividerTriggerConfigType Clock_Ip_DividerTriggerConfigurations_0[CLOCK_IP_CONFIGURED_DIVIDER_TRIGGERS_0_NO] = {

    #if CLOCK_IP_CONFIGURED_DIVIDER_TRIGGERS_0_NO > 0U
    {
        CORE_CLK,          /* divider name */
        COMMON_TRIGGER_DIVIDER_UPDATE,          /* trigger value */
        CORE_CLK,          /* input source name */
    },
    #endif
};


static const Clock_Ip_ExtClkConfigType Clock_Ip_ExtClkConfigurations_0[CLOCK_IP_CONFIGURED_EXT_CLKS_0_NO] = {

    #if CLOCK_IP_CONFIGURED_EXT_CLKS_0_NO > 0U
    {
        EMAC_MII_RX_CLK,                    /* name */
        0U,                              /* value */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_EXT_CLKS_0_NO > 1U
    {
        EMAC_MII_RMII_TX_CLK,                    /* name */
        0U,                              /* value */
    },
    #endif
};


static const Clock_Ip_GateConfigType Clock_Ip_GatesConfigurations_0[CLOCK_IP_CONFIGURED_GATES_0_NO] = {

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 0U
    {
        ADC0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 1U
    {
        ADC1_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 2U
    {
        BCTU0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 3U
    {
        CMP0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 4U
    {
        CMP1_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 5U
    {
        CRC0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 6U
    {
        DMAMUX0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 7U
    {
        DMAMUX1_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 8U
    {
        EDMA0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 9U
    {
        EDMA0_TCD0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 10U
    {
        EDMA0_TCD1_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 11U
    {
        EDMA0_TCD2_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 12U
    {
        EDMA0_TCD3_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 13U
    {
        EDMA0_TCD4_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 14U
    {
        EDMA0_TCD5_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 15U
    {
        EDMA0_TCD6_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 16U
    {
        EDMA0_TCD7_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 17U
    {
        EDMA0_TCD8_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 18U
    {
        EDMA0_TCD9_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 19U
    {
        EDMA0_TCD10_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 20U
    {
        EDMA0_TCD11_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 21U
    {
        EDMA0_TCD12_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 22U
    {
        EDMA0_TCD13_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 23U
    {
        EDMA0_TCD14_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 24U
    {
        EDMA0_TCD15_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 25U
    {
        EDMA0_TCD16_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 26U
    {
        EDMA0_TCD17_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 27U
    {
        EDMA0_TCD18_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 28U
    {
        EDMA0_TCD19_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 29U
    {
        EDMA0_TCD20_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 30U
    {
        EDMA0_TCD21_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 31U
    {
        EDMA0_TCD22_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 32U
    {
        EDMA0_TCD23_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 33U
    {
        EDMA0_TCD24_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 34U
    {
        EDMA0_TCD25_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 35U
    {
        EDMA0_TCD26_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 36U
    {
        EDMA0_TCD27_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 37U
    {
        EDMA0_TCD28_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 38U
    {
        EDMA0_TCD29_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 39U
    {
        EDMA0_TCD30_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 40U
    {
        EDMA0_TCD31_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 41U
    {
        EIM_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 42U
    {
        EMAC0_RX_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 43U
    {
        EMIOS0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 44U
    {
        EMIOS1_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 45U
    {
        ERM0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 46U
    {
        FLEXCAN0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 47U
    {
        FLEXCAN1_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 48U
    {
        FLEXCAN2_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 49U
    {
        FLEXCAN3_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 50U
    {
        FLEXIO0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 51U
    {
        INTM_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 52U
    {
        LCU0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 53U
    {
        LCU1_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 54U
    {
        LPI2C0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 55U
    {
        LPI2C1_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 56U
    {
        LPSPI0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 57U
    {
        LPSPI1_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 58U
    {
        LPSPI2_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 59U
    {
        LPSPI3_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 60U
    {
        LPUART0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 61U
    {
        LPUART1_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 62U
    {
        LPUART2_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 63U
    {
        LPUART3_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 64U
    {
        MSCM_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 65U
    {
        PIT0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 66U
    {
        PIT1_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 67U
    {
        PIT2_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 68U
    {
        QSPI0_RAM_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 69U
    {
        RTC0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 70U
    {
        SAI0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 71U
    {
        SAI1_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 72U
    {
        SEMA42_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 73U
    {
        SIUL2_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 74U
    {
        STM0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 75U
    {
        STM1_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 76U
    {
        SWT0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 77U
    {
        SWT1_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 78U
    {
        TEMPSENSE_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 79U
    {
        TRGMUX0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 80U
    {
        TSENSE0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 81U
    {
        WKPU0_CLK,                    /* name */
        1U,                           /* enable */
    },
    #endif
};


static const Clock_Ip_CmuConfigType Clock_Ip_CmuConfigurations_0[CLOCK_IP_CONFIGURED_CMUS_0_NO] = {

    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 0U
    {
        FXOSC_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_0 */
        (                                           /* IER for CMU_FC_0 */
            CMU_FC_IER_FLLIE(0U) |
            CMU_FC_IER_FHHIE(0U) |
            CMU_FC_IER_FLLAIE(0U) |
            CMU_FC_IER_FHHAIE(0U)
        ),
        16000000U,
        {
                0U,          /* Start index in register values array */
                0U,          /* End index in register values array */
        },
    },
    #endif
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 0U
    {
        CORE_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_3 */
        (                                           /* IER for CMU_FC_3 */
            CMU_FC_IER_FLLIE(0U) |
            CMU_FC_IER_FHHIE(0U) |
            CMU_FC_IER_FLLAIE(0U) |
            CMU_FC_IER_FHHAIE(0U)
        ),
        160000000U,
        {
                0U,          /* Start index in register values array */
                0U,          /* End index in register values array */
        },
    },
    #endif
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 0U
    {
        AIPS_PLAT_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_4 */
        (                                           /* IER for CMU_FC_4 */
            CMU_FC_IER_FLLIE(0U) |
            CMU_FC_IER_FHHIE(0U) |
            CMU_FC_IER_FLLAIE(0U) |
            CMU_FC_IER_FHHAIE(0U)
        ),
        80000000U,
        {
                0U,          /* Start index in register values array */
                0U,          /* End index in register values array */
        },
    },
    #endif
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 0U
    {
        HSE_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_5 */
        (                                           /* IER for CMU_FC_5 */
            CMU_FC_IER_FLLIE(0U) |
            CMU_FC_IER_FHHIE(0U) |
            CMU_FC_IER_FLLAIE(0U) |
            CMU_FC_IER_FHHAIE(0U)
        ),
        80000000U,
        {
                0U,          /* Start index in register values array */
                0U,          /* End index in register values array */
        },
    },
    #endif
};


static const Clock_Ip_ConfiguredFrequencyType Clock_Ip_ConfiguredFrequencyConfigurations_0[CLOCK_IP_CONFIGURED_FREQUENCIES_0_NO] = {

    {
        CLOCK_IS_OFF,
        0U,
    },
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_0_NO > 1U
    {
        FIRC_CLK,
        48000000U,
    },
    #endif
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_0_NO > 2U
    {
        FXOSC_CLK,
        16000000U,
    },
    #endif
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_0_NO > 3U
    {
        CORE_CLK,
        160000000U,
    },
    #endif
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_0_NO > 4U
    {
        AIPS_PLAT_CLK,
        80000000U,
    },
    #endif
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_0_NO > 5U
    {
        AIPS_SLOW_CLK,
        40000000U,
    },
    #endif
};


/* *************************************************************************
 * Configuration structure for Clock Configuration 
 * ************************************************************************* */
const Clock_Ip_ClockConfigType Clock_Ip_aClockConfig[1U] = {

    /*! @brief User Configuration structure clock_Cfg_0 */

    {
        0U,                          /* clkConfigId */
        (NULL_PTR),               /* Register data if register value optimization is enabled */

        3U,                       /* ircoscsCount */
        2U,                       /* xoscsCount */
        1U,                       /* pllsCount */
        13U,                       /* selectorsCount */
        21U,                       /* dividersCount */
        1U,                       /* dividerTriggersCount */
        0U,                       /* fracDivsCount */
        2U,                       /* extClksCount */
        82U,                       /* gatesCount */
        0U,                       /* pcfsCount */
        4U,                       /* cmusCount */
        6U,                       /* configureFrequenciesCount */

        (&Clock_Ip_IrcoscConfigurations_0),                    /* Ircosc configurations */
        (&Clock_Ip_XoscConfigurations_0),                      /* Xosc configurations */
        (&Clock_Ip_PllConfigurations_0),                       /* Pll configurations */
        (&Clock_Ip_SelectorConfigurations_0),                  /* Selectors configurations */
        (&Clock_Ip_DividerConfigurations_0),                   /* dividers configurations */
        (&Clock_Ip_DividerTriggerConfigurations_0),            /* dividerTriggers configurations */
        (NULL_PTR),                       /* fracDivs configurations */
        (&Clock_Ip_ExtClkConfigurations_0),                    /* extClks configurations */
        (&Clock_Ip_GatesConfigurations_0),                     /* gates configurations */
        (NULL_PTR),                       /* pcfs configurations */
        (&Clock_Ip_CmuConfigurations_0),                       /* cmus configurations */
        (&Clock_Ip_ConfiguredFrequencyConfigurations_0),       /* configureFrequencies configurations */
    },
};


#define MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcu_MemMap.h"


/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */


