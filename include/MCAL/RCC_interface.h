/**
 * @file    RCC_interface.h
 * @author  Mohamed Moaaz
 * @brief   RCC interface file
 * @version 0.1
 * @date    2023-10-31
 *
 * @copyright Copyright (c) 2023
 */

#ifndef __RCC_INTERFACE_H__
#define __RCC_INTERFACE_H__

//==============================================================================
// Macros & Defines
//==============================================================================

//peripheral ID selection

//AHB bus
#define RCC_DMA1_EN             0
#define RCC_DMA2_EN             1
#define RCC_SRAM_EN             2
#define RCC_FLITF_EN            4
#define RCC_CRC_EN              6
#define RCC_FSMC_EN             8
#define RCC_SDIO_EN             10

//APB1 bus
#define RCC_TIM2_RST            32
#define RCC_TIM3_RST            33
#define RCC_TIM4_RST            34
#define RCC_TIM5_RST            35
#define RCC_TIM6_RST            36
#define RCC_TIM7_RST            37
#define RCC_TIM12_RST           38
#define RCC_TIM13_RST           39
#define RCC_TIM14_RST           40
#define RCC_WWDG_RST            43
#define RCC_SPI2_RST            46
#define RCC_SPI3_RST            47
#define RCC_USART2_RST          49
#define RCC_USART3_RST          50
#define RCC_UART4_RST           51
#define RCC_UART5_RST           52
#define RCC_I2C1_RST            53
#define RCC_I2C2_RST            54
#define RCC_USB_RST             55
#define RCC_CAN_RST             57
#define RCC_BKP_RST             59
#define RCC_PWR_RST             60
#define RCC_DAC_RST             61

//APB2 bus
#define RCC_AFIO_RST            64
#define RCC_IOPA_RST            66
#define RCC_IOPB_RST            67
#define RCC_IOPC_RST            68
#define RCC_IOPD_RST            69
#define RCC_IOPE_RST            70
#define RCC_IOPF_RST            71
#define RCC_IOPG_RST            72
#define RCC_ADC1_RST            73
#define RCC_ADC2_RST            74
#define RCC_TIM1_RST            75
#define RCC_SPI1_RST            76
#define RCC_TIM8_RST            77
#define RCC_USART1_RST          78
#define RCC_ADC3_RST            79
#define RCC_TIM9_RST            83
#define RCC_TIM10_RST           84
#define RCC_TIM11_RST           85

//==============================================================================
// Typedefs
//==============================================================================


//==============================================================================
// Exported Values
//==============================================================================


//==============================================================================
// Global Functions Prototypes
//==============================================================================

void RCC_voidIinitSysClk();

E_Status RCC_voidEnableClk(uint8_t copy_u8PerId);

E_Status RCC_voidDisableClk(uint8_t copy_u8PerId);

#endif /* __RCC_INTERFACE_H__ */