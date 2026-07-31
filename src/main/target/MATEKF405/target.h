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

// Gyro & ACC (ICM20602 / MPU6500)
#define USE_SPI
#define USE_SPI_DEVICE_1

#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define GYRO_1_CS_PIN           PC2
#define GYRO_1_SPI_BUS          BUS_SPI1

#define USE_IMU_MPU6500
#define IMU_MPU6500_ALIGN       CW180_FLIP
#define GYRO_1_ALIGN            CW180_FLIP
#define ACC_1_ALIGN             CW180_FLIP

// UART Ports
#define USE_VCP
#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9

#define USE_UART2
#define UART2_RX_PIN            PA3
#define UART2_TX_PIN            PA2

#define SERIAL_PORT_COUNT       3

// Motor ESC Outputs
#define MAX_PWM_OUTPUT_PORTS    4
#define MOTOR1_PIN              PC6
#define MOTOR2_PIN              PC7
#define MOTOR3_PIN              PC8
#define MOTOR4_PIN              PC9

// GPIO Port Masks
#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
