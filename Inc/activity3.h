/**
 * @file Activity3.h
 * @author Yash Trivedi (https://github.com/259844/Embedded-C)
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _Activity3_h_
#define _Activity3_h_

/**
 * @brief Initializes Timer0(8-bit) 
 * 
 */
void Timer_init();

/**
 * @brief Activity-3 To generate PWM according to the data sensed by the ADC channel
 * 
 */
void Activity3(int);

#endif
