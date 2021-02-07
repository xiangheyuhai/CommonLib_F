#include "F_CommonLib/F_Service/Input/Keypad/Keypad_drv.h"



#ifdef Service_Input_Keypad
#ifdef STM32_F4

//确定使用的为F4之后在调用nativeInterface
#include "F_CommonLib/F_Drv/nativeInterface.h"

#define ROW1_GPIO_Port  GPIOB
#define ROW2_GPIO_Port  GPIOB
#define ROW3_GPIO_Port  GPIOB
#define ROW4_GPIO_Port  GPIOE

#define ROW1_GPIO_PIN GPIO_PIN_5
#define ROW2_GPIO_PIN GPIO_PIN_7
#define ROW3_GPIO_PIN GPIO_PIN_9
#define ROW4_GPIO_PIN GPIO_PIN_1

#define COL1_GPIO_Port  GPIOB
#define COL2_GPIO_Port  GPIOB
#define COL3_GPIO_Port  GPIOB
#define COL4_GPIO_Port  GPIOE

#define COL1_GPIO_PIN GPIO_PIN_3
#define COL2_GPIO_PIN GPIO_PIN_6
#define COL3_GPIO_PIN GPIO_PIN_8
#define COL4_GPIO_PIN GPIO_PIN_0

void writeRow(char GPIO,char State){
	switch(GPIO){
		case '1' : HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_GPIO_PIN,State); break;
		case '2' : HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_GPIO_PIN,State); break;
		case '3' : HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_GPIO_PIN,State); break;
		case '4' : HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_GPIO_PIN,State); break;
		case 'A' : {HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_GPIO_PIN,State);HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_GPIO_PIN,State);HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_GPIO_PIN,State);HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_GPIO_PIN,State);} break;
	default : break;
	}
}
uint8_t readCol(char GPIO){
	uint8_t state;
	switch(GPIO){
	case '1': state = HAL_GPIO_ReadPin(COL1_GPIO_Port,COL1_GPIO_PIN); break;
	case '2': state = HAL_GPIO_ReadPin(COL2_GPIO_Port,COL2_GPIO_PIN); break;
	case '3': state = HAL_GPIO_ReadPin(COL3_GPIO_Port,COL3_GPIO_PIN); break;
	case '4': state = HAL_GPIO_ReadPin(COL4_GPIO_Port,COL4_GPIO_PIN); break;
	default : break;
	}
}


#endif
#endif

