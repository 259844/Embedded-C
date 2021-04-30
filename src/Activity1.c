/**
 * @file port_init.c
 * @author Yash Trivedi (https://github.com/259844/Embedded-C)
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include"../inc/Activity1.h"

#define LED_ON  PORTD |= (1<<PD3)
#define LED_OFF PORTD &= ~(1<<PD3)

/**
 * @brief Port Initialization as input or output as well switch on LED if Passenger and Heater switch is on
 * 
 */
void Activity1()
{
    DDRD &= ~(1<<PD2); //input pin Port D pin 2 (clear bit)
    DDRD &= ~(1<<PD4);  //input pin Port D pin 4 (clear bit)

    PORTD |= (1<<PD2);  //set bit
    PORTD |= (1<<PD4);  //set bit

    DDRD |= (1<<PD3);   //output pin Port D pin 3(set bit)

   if ((!(PIND & (1<<PD2))) & (!(PIND & (1<<PD4))))
    {
        LED_ON;  //TURN ON LED
    }

    else
    {
        LED_OFF; //TURN OFF LED
    }
}
