/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Glenn Ruben Bakke
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#define MICROPY_HW_BOARD_NAME       "BLE-NUMPAD-HEX"
#define MICROPY_HW_MCU_NAME         "NRF52840"
#define MICROPY_PY_SYS_PLATFORM     "nrf52840-KEYB"

#define _PINNUM(port, pin)    ((port)*32 + (pin))

#define MICROPY_PY_MACHINE_UART     (1)
#define MICROPY_PY_MACHINE_HW_PWM   (1)
#define MICROPY_PY_MACHINE_RTCOUNTER (1)
#define MICROPY_PY_MACHINE_I2C      (1)
#define MICROPY_PY_MACHINE_ADC      (1)
#define MICROPY_PY_MACHINE_TEMP     (1)

#define MICROPY_HW_ENABLE_RNG       (1)

#define MICROPY_HW_ENABLE_USBDEV    (1)
#define MICROPY_HW_USB_CDC          (1)

#define MICROPY_HW_HAS_LED          (1)
#define MICROPY_HW_LED_COUNT        (2)
#define MICROPY_HW_LED_PULLUP       (1)

#define MICROPY_HW_LED1             _PINNUM(1,03) // LED1
#define MICROPY_HW_LED2             _PINNUM(1,01) // LED2

// UART config
#define MICROPY_HW_ENABLE_UART_REPL (1)
#define MICROPY_HW_UART1_RX         _PINNUM(0,8)
#define MICROPY_HW_UART1_TX         _PINNUM(0,6)
#define MICROPY_HW_UART1_CTS        _PINNUM(0,7)
#define MICROPY_HW_UART1_RTS        _PINNUM(0,5)
#define MICROPY_HW_UART1_HWFC       (1)

// SPI0 config
#define MICROPY_HW_SPI0_NAME        "SPI0"

#define MICROPY_HW_SPI0_SCK         _PINNUM(0,13)
#define MICROPY_HW_SPI0_MOSI        _PINNUM(0,14)
#define MICROPY_HW_SPI0_MISO        _PINNUM(0,15)

#define MICROPY_HW_PWM0_NAME        "PWM0"
#define MICROPY_HW_PWM1_NAME        "PWM1"
#define MICROPY_HW_PWM2_NAME        "PWM2"

#define HELP_TEXT_BOARD_LED         "1,2"
