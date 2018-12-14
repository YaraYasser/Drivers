
#include <avr/io.h>
#include "DIO.h"
#include "Button.h"

void BUTTON_vInitial(uint8 PortName,uint8 PinNum){
	DIO_vSetPinDirection(PortName,0,PinNum);
}
uint8 BUTTON_CheckPressed(){
	if(PRESSED == DIO_uint8Read(BUTTON_PORT,BUTTON_PIN))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}