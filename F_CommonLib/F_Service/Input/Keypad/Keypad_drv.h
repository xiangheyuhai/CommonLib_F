#include "all_config.h"
#ifdef Service_Input_Keypad
#include "F_CommonLib/F_Drv/F_CommonDrv/CommonDrv.h"


#ifndef __KEYPADDRV_H
#define __KEYPADDRV_H
//typedef  enum定义了枚举类型，类型变量取值在enum{}范围内取
typedef enum
{
  PIN_SET = 0u,
  PIN_SET
}GPIO_PinState;

typedef enum
{
  Pull_Down = 0u,
  Pull_Up
}GPIO_MODE;


GPIO_PinState state, state_row, state_col;

void WriteRow(char index, char state);
GPIO_PinState ReadCol(char index);

#endif
#endif
