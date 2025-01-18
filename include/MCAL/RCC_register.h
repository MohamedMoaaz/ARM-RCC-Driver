/**
 * @file    RCC_register.h
 * @author  Mohamed Moaaz
 * @brief   RCC register file
 * @version 0.1
 * @date    2023-10-31
 *
 * @copyright Copyright (c) 2023
 */

#ifndef __RCC_REGISTER_H__
#define __RCC_REGISTER_H__

//==============================================================================
// Macros & Defines
//==============================================================================

// RCC registers
#define RCC_CR               *((volatile uint32_t *)0x40021000)
#define RCC_CFGR             *((volatile uint32_t *)0x40021004)
#define RCC_CIR              *((volatile uint32_t *)0x40021008)
#define RCC_APB2RSTR         *((volatile uint32_t *)0x4002100C)
#define RCC_APB1RSTR         *((volatile uint32_t *)0x40021010)
#define RCC_AHBENR           *((volatile uint32_t *)0x40021014)
#define RCC_APB2ENR          *((volatile uint32_t *)0x40021018)
#define RCC_APB1ENR          *((volatile uint32_t *)0x4002101C)
#define RCC_BDCR             *((volatile uint32_t *)0x40021020)
#define RCC_CSR              *((volatile uint32_t *)0x40021024)

//==============================================================================
// Typedefs
//==============================================================================

//==============================================================================
// Exported Values
//==============================================================================

//==============================================================================
// Global Functions Prototypes
//==============================================================================

#endif /* __RCC_REGISTER_H__ */