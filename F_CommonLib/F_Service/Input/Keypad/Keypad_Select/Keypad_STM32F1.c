#include "F_CommonLib/F_Service/Input/Keypad/Keypad_drv.h"



#ifdef Service_Input_Keypad
#ifdef STM32_F1

//确定使用的为F1之后在调用nativeInterface
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
	switch(index)
	{
	case 0:
		HAL_GPIO_WritePin(GPIOA, GPIO_Pin_0, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, GPIO_Pin_1, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, GPIO_Pin_2, GPIO_PIN_SET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, GPIO_Pin_3, GPIO_PIN_SET);
		break;
	}
}


void WritrCol(char index, char state)
{

}

#endif
#endif

