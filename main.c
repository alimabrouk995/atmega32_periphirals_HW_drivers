/*
 * main.c

 *
 *  Created on: Jul 6, 2022
 *      Author: alima
 */

#include "atmega32_drivers/atmega32_registers.h"
#include "atmega32_drivers/dio.h"
#include"HW_drivers/keypad.h"
#include "HW_drivers/LCD.h"
#include <util/delay.h>
#include "atmega32_drivers/interrupt.h"



int main (void)
{

	LCD_init();
	keypad_init();
	LCD_animate_string("starting...\n",200);
	_delay_ms(2000);
	LCD_writecommand(lcd_clear_screen);
	LCD_writecommand(lcd_return_home);
	LCD_writecommand(lcd_cursor_blink_on);


	while (1)
	{
		LCD_write_number(KPD_u8GetPressedKey());


	}
	return 0;
}




