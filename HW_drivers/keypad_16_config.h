/*
 * keypad_16_config.h
 *
 *  Created on: Aug 3, 2022
 *      Author: alima
 */

#ifndef HW_DRIVERS_KEYPAD_16_CONFIG_H_
#define HW_DRIVERS_KEYPAD_16_CONFIG_H_


#include "../atmega32_drivers/atmega32_registers.h"
#include "../atmega32_drivers/dio.h"
#include "../math_functions/math_functions.h"

#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

#define C_PORT  DIO_PORTB
#define R_PORT	DIO_PORTB

#define C1	PINB0
#define C2	PINB1
#define C3	PINB2
#define C4	PINB3

#define R1	PINB4
#define R2	PINB5
#define R3	PINB6
#define R4	PINB7


#endif /* HW_DRIVERS_KEYPAD_16_CONFIG_H_ */
