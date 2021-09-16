#ifndef __ACTIVITY_1_H__
#define __ACTIVITY_1_H__
/**
 * @file activity1.h
 * @brief Header file for activity_1
 */


/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/**< clock Frequency of MCU is 16 MHz */
#define LED_PORT (PORTD)    /**< LED Port */
#define LED_PIN  (PORTD2)   /**< LED Pin */
#define BUTTON_SENSOR  (PORTD0)   /**< Port for button Sensor  */
#define TEMP_SENSOR  (PORTD1)   /**< Port for temperature Sensor   */

/**
 * Include files
 */ 
#include <util/delay.h>
#include <avr/io.h>


/**
 * Function definitions
 */

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void);

/**
 * @brief Function to turn LED on
 * 
 */
void TurnLED_ON();

/**
 * @brief Function to turn LED off
 * 
 */
void TurnLED_OFF();

/**
 * @brief Activity 1 to Turn ON LED if switches for button sensor and heator sensor are pressed 
 * 
 */
int activity1_LED(void);

#endif /* __ACTIVITY_1_H__ */
