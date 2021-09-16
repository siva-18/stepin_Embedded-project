#ifndef __ACTIVITY_2_H__
#define __ACTIVITY_2_H__
/**
 * @file activity2.h
 * @brief header file for activity2
 */

/**
 * Include files
 */ 
#include <util/delay.h>
#include <avr/io.h>

/**
 * Function definitions
 */

/**
 * @brief Initialize the registers for ADC setup
 * 
 */
void InitADC();

/**
 * @brief gives the ADC values for the selected channel
 * 
 * @param[in] ch channel number from 0-7
 * @return uint16_t ADC value
 */
uint16_t ReadADC(uint8_t ch);

/**
 * @brief return the ADC value to main function
 * 
 * @return uint16_t the ADC value
 */
uint16_t activity2_getADC(void);

#endif /* __ACTIVITY_2_H__ */
