#include "F_CommonLib/F_Drv/F_CommonDrv/CommonDrv.h"

//如果选中TC264的板子
#ifdef TC264
void myDelayMS(uint64_t t)
{

}

void myDelayUS(uint64_t t)
{

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
