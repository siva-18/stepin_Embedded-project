#ifndef __ACTIVITY_4_H__
#define __ACTIVITY_4_H__
/**
 * @file activity4.h
 * @brief header file for activity_4
 */

/**
 * Macro definitions
 */
#define F_CPU 16000000UL /**< clock frequency of MCU is 16 MHz */
#define USART_BAUDRATE 9600 /**< Baud rate for serial communication  */
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1) /**< formula to calculate UBRR value */

/**
 * Include files
 */ 
#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Setting Baud rate and enabling Rx and Tx 
 * 
 */
void USARTInit();

/**
 * @brief reading data
 * 
 * @return int The read data
 */
int USARTRead();

/**
 * @brief writing data to view in serial monitor
 * 
 * @param[in] temp The ADC value
 */
void activity4_USARTWrite(uint16_t temp);

#endif /* __ACTIVITY_4_H__ */
