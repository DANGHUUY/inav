#pragma once

#define TARGET_BOARD_IDENTIFIER "D405"
#define USBD_PRODUCT_STRING     "DIY_F405"

#define LED0                    PB9

// *************** Gyro & ACC (ICM20602 / MPU6500) **********************
#define USE_SPI
#define USE_SPI_DEVICE_1

#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define GYRO_1_CS_PIN           PC2
#define GYRO_1_SPI_BUS          BUS_SPI1

#define USE_IMU_MPU6500
#define IMU_MPU6500_ALIGN       CW180_DEG

// *************** UART *****************************
#define USE_VCP
#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9

#define USE_UART2
#define UART2_RX_PIN            PA3
#define UART2_TX_PIN            PA2

#define SERIAL_PORT_COUNT       3

// *************** PWM / Motor ESC ******************
#define MAX_PWM_OUTPUT_PORTS    4

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
