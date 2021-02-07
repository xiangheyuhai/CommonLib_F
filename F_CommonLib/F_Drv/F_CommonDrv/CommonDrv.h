#include "F_CommonLib/F_Select/all_config.h"
#include "F_CommonLib/F_Drv/nativeInterface.h"


//几种mcu都包含这几个函数，所以直接声明就行
void myDelayMS(uint64_t t);

void myDelayUS(uint64_t t);

uint64_t myGetMS();

void myCommonInit();

void myPrint(const char *);

