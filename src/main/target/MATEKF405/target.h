#pragma once

#define TARGET_BOARD_IDENTIFIER "MKF4"
#define USBD_PRODUCT_STRING     "MatekF4_DIY"

// Status LED
#define LED0                    PB9
#define LED0_PIN                PB9

// ADC & Battery Voltage Meter (Bắt buộc để Linker khớp hàm checkBatteryVoltageState)
#define USE_ADC
#define ADC_INSTANCE            ADC1
#define ADC1_DMA_STREAM         DMA2_Stream0
#define USE_VOLTAGE_METER
#define VBAT_ADC_PIN            PC1
#define CURRENT_METER_ADC_PIN   PC0

// *************** Gyro & ACC (Đầy đủ Macro cho Driver & BUSDEV) **********************
#define USE_SPI
#define USE_SPI_DEVICE_1

#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

// Khai báo Pin CS cho cả Driver MPU6500 và BUSDEV trong target.c
#define MPU6500_CS_PIN          PC2
#define GYRO_1_CS_PIN           PC2
#define MPU6500_SPI_BUS         BUS_SPI1
#define GYRO_1_SPI_BUS          BUS_SPI1

// Khai báo Driver & Alignment CW90_DEG
#define USE_IMU_MPU6500
#define IMU_MPU6500_ALIGN       CW270_DEG_FLIP
#define GYRO_1_ALIGN            CW270_DEG_FLIP
#define ACC_1_ALIGN             CW270_DEG_FLIP

// *************** UART *****************************
#define USE_VCP

#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9

#define USE_UART2
#define UART2_RX_PIN            PA3
#define UART2_TX_PIN            PA2

#define SERIAL_PORT_COUNT       3
// *************** I2C ****************************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB6
#define I2C1_SDA                PB7
#define DEFAULT_I2C_BUS         BUS_I2C1

// *************** Motor ESC Outputs *****************
#define MAX_PWM_OUTPUT_PORTS    4
#define MOTOR1_PIN              PC6
#define MOTOR2_PIN              PC7
#define MOTOR3_PIN              PC8
#define MOTOR4_PIN              PC9
// *************** BAROMETER (BMP280 & Others) *****************
#define USE_BARO
#define BARO_I2C_BUS                DEFAULT_I2C_BUS
#define USE_BARO_BMP280
#define USE_BARO_MS5611
#define USE_BARO_BMP085
#define USE_BARO_DPS310
#define USE_BARO_SPL06
// *************** MAGNETOMETER / COMPASS (QMC5885P) ************
#define USE_MAG
#define MAG_I2C_BUS                 DEFAULT_I2C_BUS
#define USE_MAG_ALL
#define MAG_1_ALIGN                 CW180_DEG

// *************** RANGEFINDER (VL53L0X / VL53L1X ToF) **********
#define USE_RANGEFINDER
#define RANGEFINDER_I2C_BUS     DEFAULT_I2C_BUS
#define USE_RANGEFINDER_VL53L0X // Sửa từ MSP sang VL53L0X để đọc I2C trực tiếp

// *************** GPS (M10 - UBX Protocol) **********************
#define USE_GPS                 // Bật tính năng định vị GPS
#define USE_GPS_UBLOX           // Driver dành cho dòng chip u-blox M10

#define TEMPERATURE_I2C_BUS     DEFAULT_I2C_BUS
#define PITOT_I2C_BUS           DEFAULT_I2C_BUS


// GPIO Port Masks
#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
