//*****************************************************************************
//
//! \file xhw_memmap.h
//! \brief Macros defining the memory map of NUC123.
//! \version V2.1.1.0
//! \date 11/25/2013
//! \author CooCox
//! \copy
//!
//! Copyright (c)  2011, CooCox 
//! All rights reserved.
//! 
//! Redistribution and use in source and binary forms, with or without 
//! modification, are permitted provided that the following conditions 
//! are met: 
//! 
//!     * Redistributions of source code must retain the above copyright 
//! notice, this list of conditions and the following disclaimer. 
//!     * Redistributions in binary form must reproduce the above copyright
//! notice, this list of conditions and the following disclaimer in the
//! documentation and/or other materials provided with the distribution. 
//!     * Neither the name of the <ORGANIZATION> nor the names of its 
//! contributors may be used to endorse or promote products derived 
//! from this software without specific prior written permission. 
//! 
//! THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//! AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
//! IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//! ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE 
//! LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
//! CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
//! SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//! INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
//! CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
//! ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
//! THE POSSIBILITY OF SUCH DAMAGE.
//
//*****************************************************************************

#ifndef __XHW_MEMMAP_H__
#define __XHW_MEMMAP_H__

//*****************************************************************************
//
//! \addtogroup CoX_Peripheral_Lib
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup LowLayer
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xLowLayer
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xLowLayer_Peripheral_Memmap xLowLayer Peripheral Memmap
//! \brief The following are definitions for the base addresses of the memories
//! and peripherals.
//!
//! They are always used as ulBase parameters in the peripheral library.
//! The name of a macro for the base address of a peripheral is in  general
//! format as $Namen$_BASE, e.g. UART0_BASE.
//!
//! @{
//
//*****************************************************************************

#define xFLASH_BASE             FLASH_BASE  // Flash memory
#define xSRAM_BASE              SRAM_BASE   // SRAM memory
#define xWDT_BASE               WDT_BASE    // WatchDog
#define xGPIO_PORTA_BASE        GPIO_PORTA_BASE
                                            // GPIOA
#define xGPIO_PORTB_BASE        GPIO_PORTB_BASE
                                            // GPIOB
#define xGPIO_PORTC_BASE        GPIO_PORTC_BASE
                                            // GPIOC
#define xGPIO_PORTD_BASE        GPIO_PORTD_BASE
                                            // GPIOD
#define xGPIO_PORTF_BASE        GPIO_PORTF_BASE
                                            // GPIOF

#define xUART0_BASE             UART0_BASE  // UART0
#define xUART1_BASE             UART1_BASE  // UART1
#define xTIMER0_BASE            TIMER0_BASE // Timer0
#define xTIMER1_BASE            TIMER1_BASE // Timer1
#define xTIMER2_BASE            TIMER2_BASE // Timer2
#define xTIMER3_BASE            TIMER3_BASE // Timer3
#define xSPI0_BASE              SPI0_BASE   // SPI0
#define xSPI1_BASE              SPI1_BASE   // SPI1
#define xSPI2_BASE              SPI2_BASE   // SPI2
#define xI2C0_BASE              I2C0_BASE   // I2C0 
#define xI2C1_BASE              I2C1_BASE   // I2C1
#define xADC_BASE               ADC_BASE    // ADC
#define xDMA_BASE               PDMA_BASE   // PDMA
#define xPWMA_BASE              PWMA_BASE   // PWMA

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup NUC123_LowLayer
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup NUC123_LowLayer_Peripheral_Memmap NUC123 LowLayer Peripheral Memmap
//! The following are defines for the base address of the memories and
//! peripherals.
//!
//! This is always used as ulBase parameter in the peripheral library.
//! @{
//
//*****************************************************************************

#define FLASH_BASE              0x00000000  // FLASH memory
#define SRAM_BASE               0x20000000  // SRAM memory

// AHB
#define GCR_BASE                0x50000000  // GCR
#define SYSCLK_BASE             0x50000200  // SYSTEM CLOCK
#define INT_BASE                0x50000300  // INT
#define GPIO_PORTA_BASE         0x50004000  // GPIO Port A
#define GPIO_PORTB_BASE         0x50004040  // GPIO Port B
#define GPIO_PORTC_BASE         0x50004080  // GPIO Port C
#define GPIO_PORTD_BASE         0x500040C0  // GPIO Port D
#define GPIO_PORTF_BASE         0x50004140  // GPIO Port F
#define GPIO_DBNCECON_BASE      0x50004180  // GPIO Port DBNCECON
#define PDMA0_BASE              0x50008000  // PDMA0
#define PDMA1_BASE              0x50008100  // PDMA1
#define PDMA2_BASE              0x50008200  // PDMA2
#define PDMA3_BASE              0x50008300  // PDMA3
#define PDMA4_BASE              0x50008400  // PDMA4
#define PDMA5_BASE              0x50008500  // PDMA5
#define FMC_BASE                0x5000C000  // FMC

// APB1
#define WDT_BASE                0x40004000  // Watchdog0
#define TIMER0_BASE             0x40010000  // Timer0
#define TIMER1_BASE             0x40010020  // Timer1
#define I2C0_BASE               0x40020000  // I2C0
#define SPI0_BASE               0x40030000  // SPI0
#define SPI1_BASE               0x40034000  // SPI1
#define PWMA_BASE               0x40040000  // PDMA
#define UART0_BASE              0x40050000  // UART0
#define USBD_BASE               0x40060000  // USBD
#define ADC_BASE                0x400E0000  // ADC

// APB2
#define PS2_BASE                0x40100000  // PS2
#define TIMER2_BASE             0x40110000  // Timer2
#define TIMER3_BASE             0x40110020  // Timer3
#define I2C1_BASE               0x40120000  // I2C1
#define SPI2_BASE               0x40130000  // SPI2
#define UART1_BASE              0x40150000  // UART1
#define I2S_BASE                0x401A0000  // I2S

#define NVIC_BASE               0xE000E000  // Nested Vectored Interrupt Ctrl

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

#endif // __XHW_MEMMAP_H__


