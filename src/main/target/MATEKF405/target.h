/*
 * Target Configuration for Custom DIY Flight Controller (Đặng Hữu Ý)
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "MKF4"
#define USBD_PRODUCT_STRING     "MatekF4_DIY"

#define LED0                    PB9
#define LED1                    PA14

// Không dùng Còi cảnh báo (STT 9)
//#define BEEPER                  PC13

// *************** Gyro & ACC (STT 1: ICM20602 / MPU6500) **********************
#define USE_SPI
#define USE_SPI_DEVICE_1

#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7
#define SPI1_NSS_PIN            PA4

// --- BẬT CỜ BỘ TRÌNH ĐIỀU KHIỂN IMU MPU6500 / ICM20602 ---
#define USE_IMU_MPU6500         // <-- ĐÂY CHÍNH LÀ "MẮT XÍCH" MỞ KHÓA FILE accgyro_mpu6500.c

//#define USE_GYRO_SPI_MPU6500
#define GYRO_1_CS_PIN           PA4
#define GYRO_1_SPI_BUS          BUS_SPI1
#define GYRO_1_ALIGN            CW0_DEG

//#define USE_ACC_SPI_MPU6500
#define ACC_1_CS_PIN            PA4
#define ACC_1_SPI_BUS           BUS_SPI1
#define ACC_1_ALIGN             CW0_DEG
// *************** UART Config *****************************
#define USE_VCP
//#define VBUS_SENSING_PIN        PB12
//#define VBUS_SENSING_ENABLED

// UART1: Dùng cho Mạch nhận i-Bus (STT 8 - Chân PA10)
#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9

// UART2: Dùng cho GPS M10 (STT 6 - Chân PA3/PA2)
#define USE_UART2
#define UART2_RX_PIN            PA3
#define UART2_TX_PIN            PA2

// UART3: Để trống (Không dùng STT 7 Optical Flow)
#define USE_UART3
#define UART3_RX_PIN            PC11
#define UART3_TX_PIN            PC10

#define SERIAL_PORT_COUNT       4

// Cấu hình RX mặc định: i-Bus nhận sóng qua UART1 (PA10)
#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_IBUS
#define SERIALRX_UART           SERIAL_PORT_USART1

// *************** I2C CỨNG (STT 3, 4, 5: Baro, Mag, Lidar) *****************
// Ép chạy I2C1 phần cứng qua chân PB6 (SCL) và PB7 (SDA)
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB6
#define I2C1_SDA                PB7
#define DEFAULT_I2C_BUS         BUS_I2C1

#define USE_BARO
#define BARO_I2C_BUS            DEFAULT_I2C_BUS
#define USE_BARO_BMP280

#define USE_MAG
#define MAG_I2C_BUS             DEFAULT_I2C_BUS
#define USE_MAG_ALL

#define USE_RANGEFINDER
#define USE_RANGEFINDER_MSP
#define RANGEFINDER_I2C_BUS     DEFAULT_I2C_BUS

// *************** ADC (Đo Pin VBAT) *****************************
#define USE_ADC
#define ADC_INSTANCE            ADC1
#define ADC1_DMA_STREAM         DMA2_Stream0
#define ADC_CHANNEL_1_PIN       PC5
#define VBAT_ADC_CHANNEL        ADC_CHN_1

#define DEFAULT_FEATURES        (FEATURE_VBAT | FEATURE_TELEMETRY)

// *************** PWM Motor ESC (STT 2) *************************
#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define USE_DSHOT
#define MAX_PWM_OUTPUT_PORTS    4
