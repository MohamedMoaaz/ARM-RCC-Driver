/**
 * @file    RCC_program.c
 * @author  Mohamed Moaaz
 * @brief   RCC program file
 * @version 0.1
 * @date    2023-10-31
 *
 * @copyright Copyright (c) 2023
 */

//==============================================================================
// Includes
//==============================================================================

#include "STD_TYPES.h"
#include "MCAL/RCC_interface.h"
#include "MCAL/RCC_register.h"
#include "MCAL/RCC_private.h"
#include "MCAL/RCC_config.h"

//==============================================================================
// Extern Variables
//==============================================================================

//==============================================================================
// Private Macros & Defines
//==============================================================================

//==============================================================================
// Private Typedefs
//==============================================================================

//==============================================================================
// Static Variables
//==============================================================================

//==============================================================================
// Global Variables
//==============================================================================

//==============================================================================
// Exported Values
//==============================================================================

//==============================================================================
// Static Functions Prototypes
//==============================================================================
//==============================================================================
// Static Functions
//==============================================================================

//==============================================================================
// Global Functions
//==============================================================================

void RCC_voidIinitSysClk()
{
#if (RCC_CLK_TYPE == RCC_HSI)

    // enable HSI clock with trimming
    RCC_CR = 0x00000081;

    // choose HSI as System clock
    RCC_CFGR = 0x00000000;

#elif (RCC_CLK_TYPE == RCC_HSE_CRYSTAL)

    // enable HSE clock with no bypass
    RCC_CR = 0x00010000;

    // choose HSE as System clock
    RCC_CFGR = 0x00000001;

#elif (RCC_CLK_TYPE == RCC_HSE_RC)

    // enable HSE clock with bypass
    RCC_CR = 0x00050000;

    // choose HSE as System clock
    RCC_CFGR = 0x00000001;

#elif (RCC_CLK_TYPE == RCC_PLL)

#if (RCC_PLL_INPUT == RCC_PLL_IN_HSI_DIV_2)

    // initialize HSI and pll clock
    RCC_CR = 0x01000081;

    // set HSI as input to pll
    RCC_CFGR = 0x00000000;

#elif (RCC_PLL_INPUT == RCC_PLL_IN_HSE_CRYSTAL_DIV_2)

    // initialize HSE and pll clock
    RCC_CR = 0x01010000;

    // set HSE/2 as input to pll
    RCC_CFGR = 0x00030000;

#elif (RCC_PLL_INPUT == RCC_PLL_IN_HSE_RC_DIV_2)

    // initialize HSE and pll clock
    RCC_CR = 0x01050080;

    // set HSE/2 as input to pll
    RCC_CFGR = 0x00030000;

#elif (RCC_PLL_INPUT == RCC_PLL_IN_HSE_CRYSTAL)

    // initialize HSE and pll clock
    RCC_CR = 0x01010080;

    // set HSE as input to pll
    RCC_CFGR = 0x00010000;

#elif (RCC_PLL_INPUT == RCC_PLL_IN_HSE_RC)

    // initialize HSE and pll clock
    RCC_CR = 0x01050080;

    // set HSE as input to pll
    RCC_CFGR = 0x00010000;

#endif

    // set multiplication value
    RCC_CFGR |= ((RCC_PLL_MUL_VAL - 2) << 18);

    // choose pll as System clock
    RCC_CFGR |= 0x00000002;

#else
#error(" you choose wrong clk type")
#endif
}

E_Status RCC_voidEnableClk(uint8_t copy_u8PerId)
{
    E_Status Local_u8ErrorStatus = E_OK;

    if (copy_u8PerId > 85)
    {
        Local_u8ErrorStatus = E_NOK;
    }
    else
    {
        /*determine the bus*/
        uint8_t Local_u8BusID = copy_u8PerId / 32;

        /*determine the peripheral*/
        uint8_t Local_u8PerID = copy_u8PerId % 32;

        switch (Local_u8BusID)
        {
        case RCC_AHB:
            SET_BIT(RCC_AHBENR, Local_u8PerID);
            break;

        case RCC_APB1:
            SET_BIT(RCC_AHBENR, Local_u8PerID);
            break;

        case RCC_APB2:
            SET_BIT(RCC_AHBENR, Local_u8PerID);
            break;

        default:
            Local_u8ErrorStatus = E_NOK;
            break;
        }
    }
    return Local_u8ErrorStatus;
}

E_Status RCC_voidDisableClk(uint8_t copy_u8PerId)
{
    E_Status Local_u8ErrorStatus = E_OK;

    if (copy_u8PerId > 85)
    {
        Local_u8ErrorStatus = E_NOK;
    }
    else
    {
        /*determine the bus*/
        uint8_t Local_u8BusID = copy_u8PerId / 32;

        /*determine the peripheral*/
        uint8_t Local_u8PerID = copy_u8PerId % 32;

        switch (Local_u8BusID)
        {
        case RCC_AHB:
            CLEAR_BIT(RCC_AHBENR, Local_u8PerID);
            break;

        case RCC_APB1:
            CLEAR_BIT(RCC_AHBENR, Local_u8PerID);
            break;

        case RCC_APB2:
            CLEAR_BIT(RCC_AHBENR, Local_u8PerID);
            break;

        default:
            Local_u8ErrorStatus = E_NOK;
            break;
        }
    }
    return Local_u8ErrorStatus;
}