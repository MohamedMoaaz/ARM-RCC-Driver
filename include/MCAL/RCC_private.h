/**
 * @file    RCC_private.h
 * @author  Mohamed Moaaz
 * @brief   RCC private file
 * @version 0.1
 * @date    2023-10-31
 *
 * @copyright Copyright (c) 2023
 */

#ifndef __RCC_PRIVATE_H__
#define __RCC_PRIVATE_H__

//==============================================================================
// Macros & Defines
//==============================================================================

//buses selection
#define RCC_AHB                         0
#define RCC_APB1                        1
#define RCC_APB2                        2

//clock source
#define RCC_HSI                         1
#define RCC_HSE_CRYSTAL                 2
#define RCC_HSE_RC                      3
#define RCC_PLL                         4

//pll prescaler
#define RCC_PLL_IN_HSI_DIV_2            1
#define RCC_PLL_IN_HSE_CRYSTAL_DIV_2    2
#define RCC_PLL_IN_HSE_RC_DIV_2         3
#define RCC_PLL_IN_HSE_CRYSTAL          4
#define RCC_PLL_IN_HSE_RC               5


//==============================================================================
// Typedefs
//==============================================================================


//==============================================================================
// Exported Values
//==============================================================================


//==============================================================================
// Global Functions Prototypes
//==============================================================================


#endif /* __RCC_PRIVATE_H__ */