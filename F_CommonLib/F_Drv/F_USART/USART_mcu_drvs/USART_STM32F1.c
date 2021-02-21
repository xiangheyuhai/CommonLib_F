#include "F_CommonLib/F_Drv/F_IIC/IIC.h"

#ifdef STM32_F1

/**************************************printf重定义**************************************/
//需选择huartx
int __io_putchar(int ch)//在 USER CODE BEGIN 0 添加
{
	HAL_UART_Transmit(&huart1 , (uint8_t *)&ch, 1, 0xFFFF);   
	return ch;
}


/*********************************代码格式化+实现条件编译效果*********************************/

#ifdef USER_MAIN_DEBUG
#define user_main_printf(format, ...) printf( format "\r\n", ##__VA_ARGS__)
#define user_main_info(format, ...) printf("[\tmain]info:" format "\r\n", ##__VA_ARGS__)
#define user_main_debug(format, ...) printf("[\tmain]debug:" format "\r\n", ##__VA_ARGS__)
#define user_main_error(format, ...) printf("[\tmain]error:" format "\r\n",##__VA_ARGS__)

#else
#define user_main_printf(format, ...)
#define user_main_info(format, ...)
#define user_main_debug(format, ...)
#define user_main_error(format, ...)
#endif


#endif


