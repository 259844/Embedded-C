#include<avr/io.h>
#include"../inc/Activity4.h"


void USARTInit(int ubrr_value)
{

    //set baud rate

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8) & 0x00ff ;
    UCSR0C = (1<<UMSEL00) | (1<<UCSZ01) | (1<<UCSZ00);

    //Enable the Rx and Tx

    UCSR0B = (1<<RXEN0) | (1<<TXEN0) | (1<<RXCIE0) | (1<<TXCIE0) ;

}


void Activity4(int ocr_value)
{
    USARTInit(103);

    if(ocr_value == 51)
    {

        unsigned char temp1[] = "Temperature is 20 degree Celsius \n";
        int i=0;
        while(temp1[i]!=0){
            while(!(UCSR0A & (1<<UDRE0)));
            UDR0=temp1[i];
            i++;
        }
    }
    else if(ocr_value == 102)
    {

        unsigned char temp2[] = "Temperature is 25 degree Celsius \n";
        int i=0;
        while(temp2[i]!=0){
            while(!(UCSR0A & (1<<UDRE0)));
            UDR0=temp2[i];
            i++;
        }
    }
    else if(ocr_value == 180){
       unsigned char temp3[] = "Temperature is 29 degree Celsius \n";
        int i=0;
        while(temp3[i]!=0){
            while(!(UCSR0A & (1<<UDRE0)));
            UDR0=temp3[i];
            i++;
        }
    }
    else if(ocr_value == 250){

        unsigned char temp4[] = "Temperature is 33 degree Celsius \n";
        int i=0;
        while(temp4[i]!=0){
            while(!(UCSR0A & (1<<UDRE0)));
            UDR0=temp4[i];
            i++;
        }
    }

}
