#include "SevenSegment.h"

void SevenSeg_vInitial(void){
	void DIO_vSetPortDirection(SEVEN_SEGDDR,1);
	
}

void SevenSeg_Display(uint8 parNo){
	
	char arr[10]  = {0b0111111,0b0000110,0b1011011,0b1001111,0b1100110,0b1101101,0b1111101,0b1000111,0b1111111,0b1101111};
	SEVEN_SEGPORT = 0b0000000;
	SEVEN_SEGPORT = arr[parNo];
}
