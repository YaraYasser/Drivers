/*
 * Buzzer.h
 *
 * Created: 12/14/2018 5:17:16 AM
 *  Author: user
 */ 


#ifndef BUZZER_H_
#define BUZZER_H_
#define BUZZER_PORT 'D'
#define BUZZER_PIN 4

void BUZZER_vInitial(uint8 parPortName,uint8 parPinNo);
void BUZZER_vTurnOn(uint8 parPortName,uint8 parPinNo);
void BUZZER_vTurnOff(uint8 parPortName,uint8 parPinNo);
void BUZZER_vToggle(uint8 parPortName,uint8 parPinNo);





#endif /* BUZZER_H_ */