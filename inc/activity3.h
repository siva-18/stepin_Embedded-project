#ifndef __ACTIVITY_3_H__
#define __ACTIVITY_3_H__
/**
 * @file activity3.h
 * @brief Header file for activity_3 
 */

/**
 * Macro Definitions
 */
#define PWM_20_PERCENT (205) /**< output PWM for 20% duty cycle */
#define PWM_40_PERCENT (410) /**< output PWM for 40% duty cycle */
#define PWM_70_PERCENT (717) /**< output PWM for 70% duty cycle */
#define PWM_95_PERCENT (973) /**< output PWM for 95% duty cycle */

/**
 * Include files
 */ 
#include <util/delay.h>
#include <avr/io.h>

/**
 * Function definitions
 */

/**
 * @brief initialize timer1 registers 
 * 
 */
void InitTimer();

/**
 * @brief produce duty cycle in PWM according to i/p ADC value
 * 
 * @param[in] temp the ADC value from activity_2
 */
void activity3_PWM(uint16_t temp);

#endif /* __ACTIVITY_3_H__ */
