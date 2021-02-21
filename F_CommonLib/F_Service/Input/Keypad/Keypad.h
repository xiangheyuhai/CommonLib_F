#include "F_CommonLib/F_Select/all_config.h"
#include "F_CommonLib/F_Drv/nativeInterface.h"

#ifndef __KEY_H__
#define __KEY_H__


#define state_Up  PIN_SET      //上拉宏
#define state_Down  PIN_RESET  //上拉宏

void scanKeypad();
void initKeypad(void (*callback)(unsigned char x, unsigned char y));


#endif