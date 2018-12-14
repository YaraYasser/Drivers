
#include <avr/io.h>
#include "DIO.h"
#include "Buzzer.h"

void BUZZER_vInitial(uint8 parPortName,uint8 parPinNo){
	DIO_vSetPinDirection(parPortName,1,parPinNo);
}

void BUZZER_vTurnOn(uint8 parPortName,uint8 parPinNo){
	
	BUZZER_vInitial( parPortName, parPinNo);
	DIO_vWrite(parPortName,1,parPinNo);
	
}
void BUZZER_vTurnOff(uint8 parPortName,uint8 parPinNo){
	BUZZER_vInitial(parPortName,parPinNo);
	DIO_vWrite(parPortName,0,parPinNo);
	
}

void BUZZER_vToggle(uint8 parPortName,uint8 parPinNo){
	BUZZER_vInitial(parPortName,parPinNo);
	if (1 == DIO_uint8Read(parPortName,parPinNo)){
		DIO_vWrite(parPortName,0,parPinNo);
	}
	else{
		DIO_vWrite(parPortName,1,parPinNo);
	}
}
