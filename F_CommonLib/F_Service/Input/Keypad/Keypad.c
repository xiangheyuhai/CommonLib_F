#include "all_config.h"

//解耦
#ifdef Service_Input_Keypad
#include "Keypad.h"


//上下拉选择
#ifdef Pull_Up
GPIO_MODE = Pull_Up;
state_row = PIN_SET；
state_col = PIN_RESET；
#endif

#ifdef Pull_Down
GPIO_MODE = Pull_Down;
state_row = PIN_RESET；
state_col = PIN_SET；
#endif

unsigned char i,j,k,g_x,g_y;
void initKeypad(void (*callback)(unsigned char x, unsigned char y))
{
	x = g_x;
	y = g_y;
}

void scanKeypad()
{		
	for (i = 1; i <= 4; i++)
	{
		for(j = 1; j <= 4; j++)		//设置各行均为state_row
		{
			WriteRow(j,state_row);
		}		
		writeRow(i, state_col);		//设置i列为state_col
		for(a = 1; a <= 4; a++)		//扫描i列是否有
		{
			if (ReadCol(a) == state_Up)
			{
				HAL_Delay(10);
				if (ReadCol(a) == state_Up)
				{	
					g_x = i;
					g_y = k;
				}
			}
		}		
	}
}


#endif

