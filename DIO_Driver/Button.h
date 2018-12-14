

#ifndef BUTTON_H_
#define BUTTON_H_

#define PRESSED 1
#define NOT_PRESSED 0
#define BUTTON_PORT 'D'
#define BUTTON_PIN 0


uint8 BUTTON_CheckPressed();

void BUTTON_vInitial(uint8 PortName,uint8 PinNum);


#endif /* BUTTON_H_ */