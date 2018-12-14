/*
 * DIO.h
 *
 * Created: 12/7/2018 11:10:58 AM
 *  Author: user
 */ 


#ifndef DIO_H_
#define DIO_H_
typedef unsigned char uint8; 

void DIO_vSetPinDirection(uint8 PortName,uint8 Direction,uint8 PinNum);
void DIO_vWrite(uint8 PortName,uint8 voltType,uint8 PinNum);
uint8 DIO_uint8Read(uint8 PortName,uint8 PinNum);
void BUTTON_vInitial(uint8 PortName,uint8 PinNum);
uint8 BUTTON_CheckPressed();

#endif /* DIO_H_ */