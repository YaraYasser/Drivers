/*
 * DIO.c
 *
 * Created: 12/7/2018 11:10:41 AM
 *  Author: uSET
 */ 

#include <avr/io.h>
#include "DIO.h"
#include "Main.h"
#include "Port.h"
#include "std_macros.h"
void DIO_vSetPinDirection(uint8 PortName,uint8 Direction,uint8 PinNum){
	switch (PortName)
	{
		case 'A':
			if(1 == Direction){
				SET_BIT(DDRA,PinNum);
			}
			else{
				CLR_BIT(DDRA,PinNum);
			}
			break;
		case 'B':
		if(1 == Direction){
			SET_BIT(DDRB,PinNum);
			
		}
		else{
			CLR_BIT(DDRB,PinNum);
			
		}
		break;
		
		case 'C':
		if(1 == Direction){
			SET_BIT(DDRC,PinNum);
			
		}
		else{
			CLR_BIT(DDRC,PinNum);
			
		}
		break;
		
		case 'D':
		if(1 == Direction){
			SET_BIT(DDRD,PinNum);
			
		}
		else{
			CLR_BIT(DDRD,PinNum);
			
		}
		break;
		
	}
}
void DIO_vSetHighNibbleDirection(uint8 PortName,uint8 highNibble){
		switch (PortName)
		{
			case 'A':
			if(1 == highNibble){
				DDRA |= 0b11110000;
			}
			else{
				DDRA |= 0b00000000;
			}
			break;
			case 'B':
			if(1 == highNibble){
				DDRB |= 0b11110000;
			}
			else{
				DDRB |= 0b00000000;
			}
			break;
			case 'C':
			if(1 == highNibble){
				DDRC |= 0b11110000;
			}
			else{
				DDRC |= 0b00000000;
			}
			break;
			case 'D':
			if(1 == highNibble){
				DDRD|= 0b11110000;
			}
			else{
				DDRD |= 0b00000000;
			}
			break;
		}			
		
		
	
}
void DIO_vSetLowNibbleDirection(uint8 PortName,uint8 lowNibble){
	switch (PortName)
	{
		case 'A':
			if (1 == lowNibble)
			{
				DDRA |= 0b00001111;
			}
			else
			{
				DDRA |= 0b00000000;
			}
		break;
		case 'B':
			if (1 == lowNibble)
			{
				DDRB |= 0b00001111;
			}
			else
			{
				DDRB |= 0b00000000;
			}
		break;
		case 'C':
			if (1 == lowNibble)
			{
				DDRC |= 0b00001111;
			}
			else
			{
				DDRC |= 0b00000000;
			}
		break;
		case 'D':
			if (1 == lowNibble)
			{
				DDRD |= 0b00001111;
			}
			else
			{
				DDRD |= 0b00000000;
			}
		break;
	}	
	
}
void DIO_vWrite(uint8 PortName,uint8 voltType,uint8 PinNum){
	
	switch (PortName)
	{
		case 'A':
		if(1 == voltType){
			SET_BIT(PORTA,PinNum);
			
		}
		
		else{
			CLR_BIT(PORTA,PinNum);
			
		}
			break;
		case 'B':
			if(1 == voltType){
			SET_BIT(PORTB,PinNum);
			
			}
			else{
			CLR_BIT(PORTB,PinNum);
			}
			break;
		case 'C':
			if(1 == voltType){
				SET_BIT(PORTC,PinNum);
				
			}
			else{
				CLR_BIT(PORTC,PinNum);
				
			}
			break;
		case 'D':
			if(1 == voltType){
				SET_BIT(PORTD,PinNum);
				
			}
			else{
				CLR_BIT(PORTD,PinNum);
				
			}
			break;
	}
}

uint8 DIO_uint8Read(uint8 PortName,uint8 PinNum){
	switch (PortName)
	{
		case 'A':
			return READ_BIT(PINA,PinNum);
			break;
		case 'B':
			return READ_BIT(PINB,PinNum);
			break;
		case 'C':
			return READ_BIT(PINC,PinNum);
			break;
		case 'D':
			return READ_BIT(PIND,PinNum);
			break;
			
	}
	return 0;
}

void DIO_vSetPort(uint8 PortName){
	switch (PortName)
	{
		case 'A':
		 PORTA = 0xff;
		break;
		case 'B':
		PORTB = 0xff;
		break;
		case 'C':
		PORTC = 0xff;
		break;
		case 'D':
		PORTD = 0xff;
		break;
		
	}
}


