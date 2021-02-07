#include "F_CommonLib/F_Select/all_config.h"
//获取原来平台的一些函数，通过宏定义判断需要包括什么


#ifdef STM32_F1				//待完善
#include "stm32h7xx_hal.h"
#include "cmsis_os.h"
#endif



#ifdef STM32_F4				//待完善
#include "stm32h7xx_hal.h"
#include "cmsis_os.h"
#endif



