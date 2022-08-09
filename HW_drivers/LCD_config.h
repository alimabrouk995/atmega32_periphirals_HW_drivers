/*
 * LCD_config.h
 *
 *  Created on: Aug 6, 2022
 *      Author: alima
 */

#ifndef HW_DRIVERS_LCD_CONFIG_H_
#define HW_DRIVERS_LCD_CONFIG_H_

#include "../atmega32_drivers/atmega32_registers.h"
#include "../atmega32_drivers/dio.h"
#include "../math_functions/math_functions.h"

#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

// defining data and command ports
#define LCD_DATA_PORT DIO_PORTA
#define LCD_COMMAND_PORT DIO_PORTC

//FOR COMMAND PINS
#define LCD_RS_PIN PINC0
#define LCD_EN_PIN PINC1
#define LCD_RW_PIN PINC2

//COMMANDS
#define lcd_set_8bit  0x38
#define lcd_clear_screen 0x01
#define lcd_return_home 0x02
#define lcd_cursor_blink_on 0x0f
#define lcd_cursor_blink_off 0x0e
#define lcd_hide_cursor 0x0c













#endif /* HW_DRIVERS_LCD_CONFIG_H_ */
