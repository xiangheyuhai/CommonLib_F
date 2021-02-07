#include "F_CommonLib/F_Service/Input/Keypad/Keypad.h"
#include "F_CommonLib/F_Service/Input/Keypad/Keypad_drv.h"



#ifdef Service_Input_Keypad
//解耦

#define DELAY_TIME 20

#define PULL_UP 0 //上下拉选择,下拉选择0

char CONTROL  = PULL_UP;
unsigned char SCAN_ROW = '0';
unsigned char SCAN_COL = '0';

void initKeypad(void (*callback)(unsigned char x, unsigned char y)){
	callback(SCAN_ROW,SCAN_COL);
}

void ROW_scan(unsigned char index){
	SCAN_COL=index;
	writeRow('A',!CONTROL);
	writeRow('1',CONTROL);
	if(readCol(index)==1)  SCAN_ROW='1';
	writeRow('A',!CONTROL);
	writeRow('2',CONTROL);
	if(readCol(index)==1)  SCAN_ROW='2';
	writeRow('A',!CONTROL);
	writeRow('3',CONTROL);
	if(readCol(index)==1)  SCAN_ROW='3';
	writeRow('A',!CONTROL);
	writeRow('4',CONTROL);
	if(readCol(index)==1)  SCAN_ROW='4';

}

int scanKeypad(){
	SCAN_ROW=SCAN_COL='0';
	writeRow('A',!CONTROL);
	if(readCol('1')==!CONTROL) {
		myDelayMS(DELAY_TIME);
		if(readCol('1')==!CONTROL)  ROW_scan('1');
	 }
	if(readCol('2')==!CONTROL) {
		myDelayMS(DELAY_TIME);
		if(readCol('2')==!CONTROL)  ROW_scan('2');
		}
	if(readCol('3')==!CONTROL) {
		myDelayMS(DELAY_TIME);
				if(readCol('3')==!CONTROL)  ROW_scan('3');
		}
	if(readCol('4')==!CONTROL) {
		myDelayMS(DELAY_TIME);
				if(readCol('4')==!CONTROL)  ROW_scan('4');
		}
}


#endif

