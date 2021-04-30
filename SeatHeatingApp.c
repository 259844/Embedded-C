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
#include<Activity1.h>
#include<Activity2.h>
#include<Activity3.h>




int main(void)
{
    while(1)
    {
        /*Activity 1,2,4 are called in Activity 3*/
        Activity3();
    }
    return 0;
}
