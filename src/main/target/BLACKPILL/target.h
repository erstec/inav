/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#if defined(BLACKPILL)
#define TARGET_BOARD_IDENTIFIER "BLPL"
#define USBD_PRODUCT_STRING  "BlackPill"
#elif defined(BLACKPILL2)
#define TARGET_BOARD_IDENTIFIER "BLP2"
#define USBD_PRODUCT_STRING  "BlackPill2"
#endif

#define LED0                    PC13 // Blue LED
#define LED1                    NONE

#define BEEPER                  PC14
#define BEEPER_INVERTED

#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9
#define DEFAULT_I2C_BUS         BUS_I2C1

#define USE_IMU_MPU6050
#define IMU_MPU6050_ALIGN       CW270_DEG
#define MPU6050_I2C_BUS         BUS_I2C1
#define MPU_ADDRESS             0x68

// #define USE_BARO
// #define BARO_I2C_BUS            BUS_I2C1
// #define USE_BARO_BMP280
// #define USE_BARO_MS5611
// #define USE_BARO_BMP085
// #define USE_BARO_DPS310
// #define USE_BARO_SPL06
// #define USE_BARO_BMP085

// #define USE_MAG
// #define MAG_I2C_BUS             BUS_I2C1
// #define USE_MAG_HMC5883
// #define USE_MAG_QMC5883
// #define USE_MAG_IST8310
// #define USE_MAG_IST8308
// #define USE_MAG_MAG3110
// #define USE_MAG_LIS3MDL

// #define PITOT_I2C_BUS           BUS_I2C1
// #define TEMPERATURE_I2C_BUS     BUS_I2C1
// #define BNO055_I2C_BUS          BUS_I2C1

// #define USE_RANGEFINDER
// #define USE_RANGEFINDER_MSP
// #define USE_RANGEFINDER_BENEWAKE
// #define USE_RANGEFINDER_VL53L0X
// #define USE_RANGEFINDER_VL53L1X
// #define USE_RANGEFINDER_US42
// #define USE_RANGEFINDER_TOF10120_I2C

// #define USE_OPFLOW
// #define USE_OPFLOW_MSP
// #define USE_OPFLOW_CXOF

// #define USE_FLASHFS
// #define USE_FLASH_M25P16

// #define USE_SPI
// #define USE_SPI_DEVICE_1

// #define M25P16_CS_PIN           PA4
// #define M25P16_SPI_BUS          BUS_SPI1

// #define SPI1_NSS_PIN            PA4
// #define SPI1_SCK_PIN            PA5
// #define SPI1_MISO_PIN           PA6
// #define SPI1_MOSI_PIN           PA7

// #if defined(BLACKPILL)
// #define USE_SPI_DEVICE_2

// #define SPI2_NSS_PIN            PB12
// #define SPI2_SCK_PIN            PB13
// #define SPI2_MISO_PIN           PB14
// #define SPI2_MOSI_PIN           PB15

// #define USE_MAX7456
// #define MAX7456_SPI_BUS         BUS_SPI2
// #define MAX7456_CS_PIN          PB12
// #endif

#define USE_VCP
#define USE_UART1
#define USE_UART2

#if defined(BLACKPILL)
#define SERIAL_PORT_COUNT       3
#elif defined(BLACKPILL2)
#define SERIAL_PORT_COUNT       4
#endif

#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

#if defined(BLACKPILL2)
#define USE_SOFTSERIAL1
#define SOFTSERIAL_1_TX_PIN     PB6     // Clash with TX2, possible to use as S.Port or VTX control
#define SOFTSERIAL_1_RX_PIN     PB7
#endif

#define USE_ADC
#define ADC_INSTANCE                ADC1
#define ADC1_DMA_STREAM             DMA2_Stream0
#define ADC_CHANNEL_1_PIN           PA1
#define ADC_CHANNEL_2_PIN           PB1
#define VBAT_ADC_CHANNEL            ADC_CHN_2
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_1

// ***************  OTHERS *************************
#if defined(BLACKPILL)
#define DEFAULT_FEATURES        (FEATURE_TX_PROF_SEL | FEATURE_OSD | FEATURE_CURRENT_METER | FEATURE_VBAT )
#elif defined(BLACKPILL2)
#define DEFAULT_FEATURES        (FEATURE_TX_PROF_SEL | FEATURE_VBAT | FEATURE_SOFTSERIAL )
#endif

// #define USE_DSHOT
// #define USE_ESC_SENSOR
// #define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_IBUS
#define SERIALRX_UART           SERIAL_PORT_USART2

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#if defined(BLACKPILL)
#define MAX_PWM_OUTPUT_PORTS       7
#elif defined(BLACKPILL2)
#define MAX_PWM_OUTPUT_PORTS       4
#endif
