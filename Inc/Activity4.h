/**
 * @file Activity4.h
 * @author Yash Trivedi (https://github.com/259844/Embedded-C)
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _Activity4_h_
#define _Activity4_h_

/**
 * @brief Initializes UART protocol parameters
 * 
 */
void UART_init(int);

/**
 * @brief Write function to send the temperature from micro-controller to external
 * 
 */
void UART_WRITE(int);

/**
 * @brief Activity-4 To send temperature according to the data sensed by ADC and generated PWM
 * 
 */
void Activity4(int);

#endif
