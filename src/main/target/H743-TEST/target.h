/*
 * This file is part of INAV.
 *
 * INAV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * INAV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with INAV.  If not, see <http://www.gnu.org/licenses/>.
 */


#pragma once

#define TARGET_BOARD_IDENTIFIER "743T"
#define USBD_PRODUCT_STRING     "H743TEST"

#define USE_TARGET_CONFIG

#define LED0                    NONE
#define LED1                    NONE

#define BEEPER                  NONE

//#define USE_TARGET_IMU_HARDWARE_DESCRIPTORS

#define USE_EXTI
#define USE_MPU_DATA_READY_SIGNAL

// *************** SPI1 IMU0 MPU6000 ****************
#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define USE_IMU_MPU6500

#define IMU_MPU6500_ALIGN       CW0_DEG_FLIP
#define MPU6500_SPI_BUS         BUS_SPI1
#define MPU6500_CS_PIN          PA4
#define MPU6500_EXTI_PIN        PC4

#define USE_IMU_MPU9250

#define IMU_MPU9250_ALIGN       CW0_DEG_FLIP
#define MPU9250_SPI_BUS         BUS_SPI1
#define MPU9250_CS_PIN          PA4
#define MPU9250_EXTI_PIN        PC4

// *************** I2C /Baro/Mag *********************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB6
#define I2C1_SDA                PB7

#define USE_I2C_DEVICE_2
#define I2C2_SCL                PB10
#define I2C2_SDA                PB11

#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C1
#define USE_BARO_BMP280
#define USE_BARO_MS5611
#define USE_BARO_DPS310
#define USE_BARO_SPL06

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_IST8310
#define USE_MAG_IST8308
#define USE_MAG_MAG3110
#define USE_MAG_LIS3MDL

#define PITOT_I2C_BUS           BUS_I2C2

#define USE_RANGEFINDER
#define RANGEFINDER_I2C_BUS     BUS_I2C2

// *************** UART *****************************
#define USE_VCP

#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define USE_UART2
#define UART2_TX_PIN            PD5
#define UART2_RX_PIN            PD6

#define USE_UART3
#define UART3_TX_PIN            PD8
#define UART3_RX_PIN            PD9

#define USE_UART4
#define UART4_TX_PIN            PB9
#define UART4_RX_PIN            PB8

#define SERIAL_PORT_COUNT       5

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_IBUS
#define SERIALRX_UART           SERIAL_PORT_USART3

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE                ADC1

// #define ADC_CHANNEL_1_PIN           PC0  //ADC123 VBAT1
// #define ADC_CHANNEL_2_PIN           PC1  //ADC123 CURR1
// #define ADC_CHANNEL_3_PIN           PC5  //ADC12  RSSI
// #define ADC_CHANNEL_4_PIN           PC4  //ADC12  AirS
// #define ADC_CHANNEL_5_PIN           PA4  //ADC12  VB2
// #define ADC_CHANNEL_6_PIN           PA7  //ADC12  CU2
#define ADC_CHANNEL_2_PIN           PC1  // VBAT1
// #define ADC_CHANNEL_3_PIN           PC2  // RSSI
#define ADC_CHANNEL_1_PIN           PC0  // AirS

#define VBAT_ADC_CHANNEL            ADC_CHN_2
// #define RSSI_ADC_CHANNEL            ADC_CHN_3
#define AIRSPEED_ADC_CHANNEL        ADC_CHN_1

#define DEFAULT_FEATURES            (FEATURE_TELEMETRY | FEATURE_VBAT | FEATURE_TX_PROF_SEL)
#define CURRENT_METER_SCALE         250

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
#define TARGET_IO_PORTE 0xffff

#define MAX_PWM_OUTPUT_PORTS        4
#define USE_DSHOT
#define USE_ESC_SENSOR
