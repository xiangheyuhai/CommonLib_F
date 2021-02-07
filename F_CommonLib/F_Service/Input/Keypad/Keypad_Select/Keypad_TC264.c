#include "F_CommonLib/F_Service/Input/Keypad/Keypad_drv.h"



#ifdef Service_Input_Keypad
#ifdef STM32_F4

//确定使用的为F4之后在调用nativeInterface
#include "F_CommonLib/F_Drv/nativeInterface.h"

//定义引脚
#define row1_GIIO GPIOA, GPIO_PIN_0
#define row1_GIIO GPIOA, GPIO_PIN_1
#define row1_GIIO GPIOA, GPIO_PIN_2
#define row1_GIIO GPIOA, GPIO_PIN_3

#define row1_GIIO GPIOB, GPIO_PIN_10
#define row1_GIIO GPIOB, GPIO_PIN_11
#define row1_GIIO GPIOB, GPIO_PIN_12
#define row1_GIIO GPIOB, GPIO_PIN_13

void WritrRow(char index, char state)
{

}


void WritrCol(char index, char state)
{

}

#endif
#endif

