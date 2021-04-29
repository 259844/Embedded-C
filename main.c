/**
 * @file main.c
 * @author Yash Trivedi (https://github.com/259844/Embedded-C)
 * @brief 
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>

#include"./inc/Activity1.h"
#include"./inc/Activity2.h"

int main(void)
{
    Activity1();
    
    uint16_t value = 0;
    
	while(1)
    {   {
            if  ( (!(PIND & (1<<PD2))) & (!(PIND & (1<<PD4))) )
            {
                PORTD |= (1<<PD3);  //TURN ON LED
            }
            else
            {
                PORTD &= ~(1<<PD3); //TURN OFF LED
            }
        }
        
        if(!(PIND&(1<<PD4))!=0)
        {
            value = Activity2(0);/* Read ADC channel 0 */
        }

    }

    return 0;
}
