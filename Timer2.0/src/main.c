
/* Name: main.c
 * Author: <insert your name here>
 * Copyright: <insert your copyright message here>
 * License: <insert your license reference here>
 */


#include "MEAM_general.h"  // includes the resources included in the MEAM_general.h file
#define COMPAREVALUE 50000  //when prescaler=8, the timer should count to 50000 for 20 Hz LED blinking


int main(void) 
{ 
    
    //_clockdivide(0); //set the clock speed to 16Mhz

    DDRC |= 0x40; //set port C6 as output
    TCCR3B = 0x02; //set clock of counter equal to 2MHz (i.e. set prescaler=8)
    set(TCCR3A, COM3A0); //set PC6 to toggle mode
    set(TCCR3B, WGM32); //set timer to mode 4. when Timer up to OCR3A, reset to 0x0000

    OCR3A = COMPAREVALUE;
    

    while(1){};
    return 0;

}
