/*
 * Port.h
 *
 * Created: 12/22/2018 5:12:54 AM
 *  Author: user
 */ 


#ifndef PORT_H_
#define PORT_H_
#include <avr/io.h>

        /* Key Pad */ 
#define KEY_PAD_PORT 'C'
#define KEY_PAD_DDR 'C'
#define KEY_PAD_PIN PINC

	/* Seven Segment */
#define SEVEN_SEGPORT PORTD
#define SEVEN_SEGDDR DDRD

	   /* Button */
#define BUTTON_PORT 'A'
#define BUTTON_PIN 0

	  /* Buzzer */
#define BUZZER_PORT 'A'
#define BUZZER_PIN 4

     /* LED */     
#define LED0_PORT 'A'
#define LED0_PIN 5
#define LED1_PORT 'A'
#define LED1_PIN 6
#define LED2_PORT 'A'
#define LED2_PIN 7

#endif /* PORT_H_ */