/**
 * @file SeatHeatingApp.c
 * @author Yash Trivedi (https://github.com/259844/Embedded-C)
 * @brief 
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB |= (1<<PB1);       //output pin to led
    DDRB &= ~(1<<PB0);    //input pin to seat button(clear bit)
    DDRB &= ~(1<<PB2);    //input pin to heater(clear bit)


    PORTB |= (1<<PB0);    //set bit
    PORTB |= (1<<PB2);    //set bit

    while(1)
    {

        if((!(PINB&(1<<PB0)))&(!(PINB&(1<<PB2))))
        {
            PORTB |= (1<<PB1);      //Turn On Led
        }

         else
        {
            PORTB &= ~(1<<PB1);     //Turn Off Led
        }
    }
    return 0;
}
