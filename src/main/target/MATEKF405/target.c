#include "platform.h"

// 1. Đăng ký duy nhất 1 Gyro/ACC trên SPI1 (CS = PC2) - Đúng 5 tham số
BUSDEV_REGISTER_SPI(
    BUS_SPI1,
    DEVHW_MPU6500,
    SPI1_DEV,
    GYRO_1_CS_PIN,
    OWNER_MPU
);

// 2. Cấu hình Timer cho 4 cổng Motor ESC trên TIM3 (PC6 - PC9) - Đã bỏ chữ 'const'
timerHardware_t timerHardware[] = {
    DEF_TIM(TIM3, CH1, PC6, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM3, CH2, PC7, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM3, CH3, PC8, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM3, CH4, PC9, TIM_USE_MOTOR, 0, 0),
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
