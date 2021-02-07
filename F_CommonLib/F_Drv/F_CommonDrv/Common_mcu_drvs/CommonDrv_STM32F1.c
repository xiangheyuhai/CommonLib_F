#include "F_CommonLib/F_Drv/F_CommonDrv/CommonDrv.h"

//如果选中F1的板子
#ifdef STM32_F1
void myDelayMS(uint64_t t)
{
	HAL_Delay(t);
}

void myDelayUS(uint64_t t)
{
	HAL_Delay((uint32_t)(t / 1000));
}


//应该会用到extern
extern uint64_t SysMs;
uint64_t myGetMS()
{
	return SysMs;
}

void myCommonInit()
{
}

void myPrint(const char *str)
{

}
#endif
