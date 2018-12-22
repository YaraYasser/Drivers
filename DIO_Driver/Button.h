

#ifndef BUTTON_H_

#define BUTTON_H_
#include "DIO.h"
#include "Main.h"
#include "Port.h"
#include "std_macros.h"

#define PRESSED 1
#define NOT_PRESSED 0



uint8 BUTTON_CheckPressed(void);
void BUTTON_vInitial(uint8 PortName,uint8 PinNum);


#endif /* BUTTON_H_ */