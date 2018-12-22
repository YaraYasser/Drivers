/*
 * DIO_Driver.c
 *
 * Created: 12/7/2018 11:07:55 AM
 * Author : uSET
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "Main.h"
#include "Port.h"
#include "std_macros.h"

#include "DIO.h"
#include "LED.h"
#include "Buzzer.h"
#include "Button.h"
#include "KeyPadDriver.h"
#include "SevenSegment.h"

int main(void)
{
	#if defined enableInterupt
	
	 enable CPU for interupt 
	sei();
	rising edge
	
  MCUCR |= (1<<ISC01);
  MCUCR &= ~(1<<ISC00);
  enable peripheral
  GICR |= (1<<INT0);
    PORTD = 0x01; 
   
   #endif
    DDRD = 0xf0;
    
	keyPad_vIntial();
	SevenSeg_vInitial();
	
    while (1) 
    {
	 #if defined TEST_KEYPAD_SEGMENT
		char x = keyPad_vScan();
		if (x != NO_PRESS)
		{
			x = x - '0';
			SevenSeg_Display(x);
			
		}
		 
	  
	 #elif defined TEST_LED_AND_INTERUPT
	 LED_vTurnOn(LED0_PORT,LED0_PIN);
	 _delay_ms(1000);
	 LED_vTurnOff(LED0_PORT,LED0_PIN);
	 _delay_ms(1000); 
	 
    #else
	#endif
    }
	
}
#if defined enableInterupt

ISR(INT0_vect){
	DIO_vSetPinDirection('D',1,7);
	DIO_vWrite(LED2_PORT,1,LED2_PIN);
	_delay_ms(1000);
	DIO_vWrite(LED2_PORT,0,LED2_PIN);
	_delay_ms(1000);
	ROL(PORTD,4);
	_delay_ms(1000);

}
#endif