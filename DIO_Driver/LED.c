
#include <avr/io.h>
#include "DIO.h"
#include "LED.h"

void LED_vInitial(uint8 PortName,uint8 PinNum){
	DIO_vSetPinDirection(PortName,1,PinNum);
}

void LED_vTurnOn(uint8 PortName,uint8 PinNum){
	
	LED_vInitial(PortName,PinNum);
	DIO_vWrite(PortName,1,PinNum);
	
}
void LED_vTurnOff(uint8 PortName,uint8 PinNum){
	LED_vInitial(PortName,PinNum);
	DIO_vWrite(PortName,0,PinNum);
	
}

void LED_vToggle(uint8 PortName,uint8 PinNum){
	LED_vInitial(PortName,PinNum);
	if (1 == DIO_uint8Read(PortName,PinNum)){
		DIO_vWrite(PortName,0,PinNum);
	}
	else{
		DIO_vWrite(PortName,1,PinNum);
	}
}
