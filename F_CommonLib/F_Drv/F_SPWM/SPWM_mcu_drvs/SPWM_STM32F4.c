#include "F_CommonLib/F_Drv/F_SPWM/SPWM.h"

#ifdef STM32_F4


/*************************************正弦表*************************************/
int size = 100;
uint16_t sin_value[] =
{
		500,531,562,593,624,654,684,712,740,767,793,818,842,864,885,904,
		922,938,952,964,975,984,991,996,999,1000,999,996,991,984,975,964,
		952,938,922,904,885,864,842,818,793,767,740,712,684,654,624,593,
		562,531,500,468,437,406,375,345,315,287,259,232,206,181,157,135,
		114,95,77,61,47,35,24,15,8,3,0,0,0,3,8,15,
		24,35,47,61,77,95,114,135,157,181,206,232,259,287,315,345,
		375,406,437,468
};

/*
使用之前把这段代码剪切到while(1)上边
*/
HAL_TIM_PWM_Start(&htimx,TIM_CHANNEL_y); //开启pwm输出
HAL_TIM_Base_Start_IT(&htimz);           //使能定时器z
/*
使用之前把这段代码剪切到while(1)上边
*/



/*************************************定时器中断的回调函数*************************************/
//SPWM频率计算：最大频率 / 【（预分频系数 + 1） * （计数值 + 1）* 周内点数】
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	static int i = 0;
	if(++i == size)i = 0;
	if (htim->Instance == htim2.Instance)
	{
		__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, sin_value[i]); //由向量表修改占空比
	}
}


#endif
