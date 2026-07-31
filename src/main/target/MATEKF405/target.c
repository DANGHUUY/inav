#include "platform.h"
#include "drivers/sensor.h" // Thêm thư viện này để gcc hiểu tên các góc xoay
#include "drivers/bus.h"
#include "drivers/bus_spi.h"
#include "drivers/timer.h"
#include "drivers/io.h"

// Đăng ký Gyro/ACC trên SPI1 - Truyền GYRO_1_ALIGN từ target.h vào _param
BUSDEV_REGISTER_SPI(
    BUS_SPI1,         // _name
    DEVHW_MPU6500,    // _devHw
    SPIDEV_1,         // _spiBus
    GYRO_1_CS_PIN,    // _csnPin
    NONE,             // _irqPin
    0,                // _flags
    GYRO_1_ALIGN      // _param (Truyền biến Alignment từ target.h)
);

// Cấu hình Timer cho 4 cổng Motor ESC trên TIM3 (PC6 - PC9)
timerHardware_t timerHardware[] = {
    DEF_TIM(TIM3, CH1, PC6, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM3, CH2, PC7, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM3, CH3, PC8, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM3, CH4, PC9, TIM_USE_MOTOR, 0, 0),
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
