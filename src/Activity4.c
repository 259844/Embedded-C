/**
 * @file Activity4.c
 * @author Yash Trivedi (https://github.com/259844/Embedded-C)
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include"../inc/Activity4.h"

/**
 * @brief Initializes UART protocol parameters
 * 
 * @param ubrr_value 
 */
void UART_init(int ubrr_value)
{   
    //SET BAUD RATE
    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&0x00ff;

    UCSR0C = (1<<UMSEL00) | (1<<UCSZ01) | (1<<UCSZ00);

    //ENABLE Rx AND Tx

    UCSR0B = (1<<RXEN0) | (1<<TXEN0) | (1<<RXCIE0)  | (1<<TXCIE0);

}

/**
 * @brief Write function to send the temperature from micro-controller to external
 * 
 * @param data 
 */
void UART_WRITE(int data)
{
    int i=0;
    if((data>=0)&(data<=200))
    {   
        char data1[] = "20 degree celsius\n";
        i=0;
        while(data1[i]!='\0')
        {
            while(!(UCSR0A & (1<<UDRE0)));
            UDR0 = data1[i];
            i++;
                            
        }
    }

    else if((data>=210)&(data<=500))
    {
        char data2[] = "25 degree celsius\n";
        i=0;
        while(data2[i]!='\0')
        {
            while(!(UCSR0A & (1<<UDRE0)));
            UDR0 = data2[i];
            i++;
                            
        }
    }

    else if((data>=510)&(data<=700))
    {
        char data3[] = "29 degree celsius\n";
        i=0;
        while(data3[i]!='\0')
        {
            while(!(UCSR0A & (1<<UDRE0)));
            UDR0 = data3[i];
            i++;
                            
        }
    }

    else if((data>=710)&(data<=1024))
    {
        char data4[] = "33 degree celsius\n";
        i=0;
        while(data4[i]!='\0')
        {
            while(!(UCSR0A & (1<<UDRE0)));
            UDR0 = data4[i];
            i++;
                            
        }
    }

}

/**
 * @brief Activity-4 To send temperature according to the data sensed by ADC and generated PWM
 * 
 * @param uart_data 
 */
void Activity4(int uart_data)
{
    UART_init(103);

    UART_WRITE(uart_data);

}
