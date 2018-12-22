/*
 * std_macros.h
 *
 * Created: 12/15/2018 8:12:09 AM
 *  Author: uSET
 */ 

#include "DIO.h"
#ifndef STD_MACROS_H_
#define STD_MACROS_H_
#define TOREMOVE 0
#define SET_BIT(reg,bit) (reg) |= ( 1 << (bit))
#define CLR_BIT(reg,bit) (reg) &= ~(1<< (bit))
#define READ_BIT(reg,bit) ( ((reg)>>(bit)) & 1 )
#define TOG_BIT(reg,bit) (reg) ^= (1 << (bit))
#define ROR(reg,bit) (reg) = ((reg) << (REG_SIZE - (bit))) | ((reg) >> (bit))
#define ROL(reg,bit) (reg) = ((reg)>>(REG_SIZE - (bit))) | ((reg) << (bit))
#endif /* STD_MACROS_H_ */