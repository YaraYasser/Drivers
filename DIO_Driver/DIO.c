/*
 * DIO.c
 *
 * Created: 12/7/2018 11:10:41 AM
 *  Author: user
 */ 

#include <avr/io.h>
#include "DIO.h"
void DIO_vSetPinDirection(uint8 PortName,uint8 Direction,uint8 PinNum){
	switch (PortName)
	{
		case 'A':
			if(1 == Direction){
				DDRA |= (1<<PinNum);
			}
			else{
				DDRA &= ~(1<<PinNum);
			}
			break;
		case 'B':
		if(1 == Direction){
			DDRB |= (1<<PinNum);
		}
		else{
			DDRB &= ~(1<<PinNum);
		}
		break;
		
		case 'C':
		if(1 == Direction){
			DDRC |= (1<<PinNum);
		}
		else{
			DDRC &= ~(1<<PinNum);
		}
		break;
		
		case 'D':
		if(1 == Direction){
			DDRD |= (1<<PinNum);
		}
		else{
			DDRD &= ~(1<<PinNum);
		}
		break;
		
	}
}

void DIO_vWrite(uint8 PortName,uint8 voltType,uint8 PinNum){
	
	switch (PortName)
	{
		case 'A':
		if(1 == voltType){
			PORTA |= (1<<PinNum);
		}
		
		else{
			PORTA &= ~(1<<PinNum);
		}
			break;
		case 'B':
			if(1 == voltType){
			PORTB |= (1<<PinNum);
			}
			else{
				PORTB &= ~(1<<PinNum);
			}
			break;
		case 'C':
			if(1 == voltType){
				PORTC |= (1<<PinNum);
			}
			else{
				PORTC &= ~(1<<PinNum);
			}
			break;
		case 'D':
			if(1 == voltType){
				PORTD |= (1<<PinNum);
			}
			else{
				PORTD &= ~(1<<PinNum);
			}
			break;
	}
}

uint8 DIO_uint8Read(uint8 PortName,uint8 PinNum){
	switch (PortName)
	{
		case 'A':
			return (PINA & (1<<PinNum))>>PinNum;
			break;
		case 'B':
			return (PINB & (1<<PinNum))>>PinNum;
			break;
		case 'C':
			return (PINC & (1<<PinNum))>>PinNum;
			break;
		case 'D':
			return (PIND & (1<<PinNum))>>PinNum;
			break;
			
	}
	return 0;
}

