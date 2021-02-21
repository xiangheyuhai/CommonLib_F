#include "F_CommonLib/F_Drv/F_PWM/PWM.h"

#ifdef STM32_F1




// 使能timx的通道y
HAL_TIM_PWM_Start(&htimx,TIM_CHANNEL_y);
// 修改timx的通道y的pwm比较值为z，即修改占空比
__HAL_TIM_SET_COMPARE(&htimx, TIM_CHANNEL_y, z);


#endif
