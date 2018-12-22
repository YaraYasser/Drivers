/*
 * KeyPadDriver.h
 *
 * Created: 12/21/2018 5:27:55 PM
 *  Author: user
 */ 


#ifndef KEYPADDRIVER_H_
#include "DIO.h"
#include <avr/io.h>

#define KEYPADDRIVER_H_
#define NO_PRESS 0xff


void keyPad_vIntial(void); 
uint8 keyPad_vScan(void);



#endif /* KEYPADDRIVER_H_ */