/*
 * LED.h
 *
 * Created: 12/14/2018 5:10:14 AM
 *  Author: user
 */ 


#ifndef LED_H_
#define LED_H_

#include "Main.h"
#include "Port.h"
 
void LED_vInitial(uint8 PortName,uint8 PinNum);
void LED_vTurnOn(uint8 PortName,uint8 PinNum);
void LED_vTurnOff(uint8 PortName,uint8 PinNum);
void LED_vToggle(uint8 PortName,uint8 PinNum);





#endif /* LED_H_ */