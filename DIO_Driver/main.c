/*
 * DIO_Driver.c
 *
 * Created: 12/7/2018 11:07:55 AM
 * Author : user
 */ 
#define F_CPU 8000000ul
#include <avr/io.h>
#include <util/delay.h> 
#include <avr/interrupt.h>
#include "DIO.h"
#include "LED.h"
#include "Buzzer.h"
#include "Button.h"



int main(void)
{
	/* enable CPU for interupt */
	sei();
	/*rising edge*/
	
  MCUCR &= ~(1<<ISC01);
  MCUCR &= ~(1<<ISC00);
  /*enable peripheral*/
  GICR |= (1<<INT0);
    while (1) 
    {
		LED_vTurnOn(LED0_PORT,LED0_PIN);
	 _delay_ms(1000);
		LED_vTurnOff(LED0_PORT,LED0_PIN);
	 _delay_ms(1000);
/*	
	  if(PRESSED == DIO_uint8Read('D',0))
		  {
			  DIO_vWrite('D',1,5);
			  _delay_ms(1000);
			  DIO_vWrite('D',0,5);
			  _delay_ms(1000);
			   
		  }
		     if(PRESSED == DIO_uint8Read('D',1))
		     {
			     DIO_vWrite('D',1,6);
			     _delay_ms(1000);
			     DIO_vWrite('D',0,6);
			   _delay_ms(1000);
			      
		     }
		if(PRESSED == DIO_uint8Read('D',2))
		 {	
			 DIO_vWrite('D',1,7);
			_delay_ms(1000);
			DIO_vWrite('D',0,7); 
			 _delay_ms(1000);
			 
		 }

       */
        
    }
	
}

ISR(INT0_vect){
	DIO_vSetPinDirection('D',1,7);
	DIO_vWrite(LED2_PORT,1,LED2_PIN);
	_delay_ms(1000);
	DIO_vWrite(LED2_PORT,0,LED2_PIN);
	_delay_ms(1000);
}
