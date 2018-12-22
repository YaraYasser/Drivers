/*
 * DIO.h
 *
 * Created: 12/7/2018 11:10:58 AM
 *  Author: uSET
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "Main.h"
#include "Port.h"
#include "std_macros.h"



void DIO_vSetPinDirection(uint8 PortName,uint8 Direction,uint8 PinNum);
void DIO_vSetPortDirection(uint8 PortName,uint8 Direction);
void DIO_vWrite(uint8 PortName,uint8 voltType,uint8 PinNum);
uint8 DIO_uint8Read(uint8 PortName,uint8 PinNum);
void DIO_vSetPort(uint8 PortName);

#endif /* DIO_H_ */