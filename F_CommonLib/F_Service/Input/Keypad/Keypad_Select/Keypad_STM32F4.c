#include "F_CommonLib/F_Service/Input/Keypad/Keypad_drv.h"
#include "F_CommonLib/F_Service/Input/Keypad/Keypad.h"


#ifdef Service_Input_Keypad
#ifdef STM32_F4

//确定使用的为F1之后在调用nativeInterface
#include "F_CommonLib/F_Drv/nativeInterface.h"

//行
#define Row1_Port GPIOA      //Row1
#define Row1_Pin GPIO_PIN_0
#define Row2_Port GPIOA      //Row2
#define Row2_Pin GPIO_PIN_1
#define Row3_Port GPIOA      //Row3
#define Row3_Pin GPIO_PIN_2
#define Row4_Port GPIOA      //Row4
#define Row4_Pin GPIO_PIN_3

//列
#define Col1_Port GPIOB      //Col1
#define Col1_Pin GPIO_PIN_10
#define Col2_Port GPIOB      //Col2
#define Col2_Pin GPIO_PIN_11
#define Col3_Port GPIOB      //Col3
#define Col3_Pin GPIO_PIN_12
#define Col4_Port GPIOB      //Col4
#define Col4_Pin GPIO_PIN_13



/*
传入参数
index：行号
state：拉高/低
*/
void WriteRow(char index, char state)
{
	switch(index)
	{
	//第一行为设为高/低
	case 1:	
		HAL_GPIO_WritePin(Row1_Port, Row1_Pin, state);		break;				
	case 2:	
		HAL_GPIO_WritePin(Row2_Port, Row2_Port, state);		break;				
	case 3:	
		HAL_GPIO_WritePin(Row3_Port, Row3_Port, state);		break;
	case 4:	
		HAL_GPIO_WritePin(Row4_Port, Row4_Port, state);		break;			
	}
}

GPIO_PinState ReadCol(char index)
{
	switch (index)
	{
	case 1:
		state = HAL_GPIO_ReadPin(Col1_Port, Col1_Pin);		break;
	case 2:
		state = HAL_GPIO_ReadPin(Col1_Port, Col2_Pin);		break;
	case 3:
		state = HAL_GPIO_ReadPin(Col1_Port, Col3_Pin);		break;
	case 4:
		state = HAL_GPIO_ReadPin(Col1_Port, Col4_Pin);		break;
	}
	return state;
}

#endif
#endif

