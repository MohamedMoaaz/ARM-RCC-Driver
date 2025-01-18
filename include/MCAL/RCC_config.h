/**
 * @file    RCC_config.h
 * @author  Mohamed Moaaz
 * @brief   RCC configuration file
 * @version 0.1
 * @date    2023-10-31
 *
 * @copyright Copyright (c) 2023
 */

#ifndef __RCC_CONFIG_H__
#define __RCC_CONFIG_H__

//==============================================================================
// Macros & Defines
//==============================================================================

/* select the system clock
                        options :
                            1-RCC_HSI
                            2-RCC_HSE_CRYSTAL
                            3-RCC_HSE_RC
                            4-RCC_PLL
 */
#define RCC_CLK_TYPE        RCC_PLL

/* select pll Prescaler
                        options:
                        1-RCC_PLL_IN_HSI_DIV_2
                        2-RCC_PLL_IN_HSE_CRYSTAL_DIV_2
                        3-RCC_PLL_IN_HSE_RC_DIV_2
                        4-RCC_PLL_IN_HSE_CRYSTAL
                        5-RCC_PLL_IN_HSE_RC
* note : select the value only if u have PLL as input to clock
 */
#if (RCC_CLK_TYPE == RCC_PLL)
#define RCC_PLL_INPUT      RCC_PLL_IN_HSE
#endif

/* select pll multiplication factor
  options : 2 -> 16
 
 *  note : select the value only if u have PLL as input to clock
 */

#if (RCC_CLK_TYPE == RCC_PLL)
#define RCC_PLL_MUL_VAL     4
#endif
//==============================================================================
// Typedefs
//==============================================================================

//==============================================================================
// Exported Values
//==============================================================================

//==============================================================================
// Global Functions Prototypes
//==============================================================================

#endif /* __RCC_CONFIG_H__ */