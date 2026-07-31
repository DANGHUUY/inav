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

#include <stdbool.h>
#include <platform.h>
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"

// 1. Đăng ký duy nhất 1 Gyro/ACC trên SPI1 (CS = PC2)
BUSDEV_REGISTER_SPI(
    BUS_SPI1,
    DEVHW_MPU6500,
    SPI1_DEV,
    GYRO_1_CS_PIN,
    1,
    OWNER_MPU
);

// 2. Cấu hình Timer cho 4 cổng Motor ESC trên TIM3 (PC6 - PC9)
const timerHardware_t timerHardware[] = {
    DEF_TIM(TIM3, CH1, PC6, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM3, CH2, PC7, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM3, CH3, PC8, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM3, CH4, PC9, TIM_USE_MOTOR, 0, 0),
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
