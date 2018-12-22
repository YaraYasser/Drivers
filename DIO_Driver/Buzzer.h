/*
 * Buzzer.h
 *
 * Created: 12/14/2018 5:17:16 AM
 *  Author: uSET
 */ 


#ifndef BUZZER_H_
#define BUZZER_H_

#include "DIO.h"
#include "Main.h"
#include "Port.h"
#include "std_macros.h"


void BUZZER_vInitial(uint8 parPortName,uint8 parPinNo);
void BUZZER_vTurnOn(uint8 parPortName,uint8 parPinNo);
void BUZZER_vTurnOff(uint8 parPortName,uint8 parPinNo);
void BUZZER_vToggle(uint8 parPortName,uint8 parPinNo);





#endif /* BUZZER_H_ */