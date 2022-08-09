/*
 * LCD.c
 *
 *  Created on: Aug 6, 2022
 *      Author: alima
 */

#include "LCD_config.h"
#include <util/delay.h>

void LCD_writecommand(u8 command);

void LCD_init (void)
{
	//ENABLE DATA PORT AS OUTPUT
	DIO_set_port_output(LCD_DATA_PORT);

	//ENABLE COMMAND PINS AS OUTPUT
	DIO_set_pin_output(LCD_COMMAND_PORT,LCD_EN_PIN);
	DIO_set_pin_output(LCD_COMMAND_PORT,LCD_RW_PIN);
	DIO_set_pin_output(LCD_COMMAND_PORT,LCD_RS_PIN);


	//SET 8-BIT MODE
	//CLEAR SCREEN
	//ACTIVATE CURSOR
	LCD_writecommand(lcd_set_8bit);
	LCD_writecommand(lcd_clear_screen);
	LCD_writecommand(lcd_cursor_blink_on);


}

void LCD_writecommand(u8 command)

{
	DIO_write_pin(LCD_COMMAND_PORT,LCD_RS_PIN,0);
	DIO_write_pin(LCD_COMMAND_PORT,LCD_RW_PIN,0);
	DIO_write_port(LCD_DATA_PORT,command);


	DIO_write_pin(LCD_COMMAND_PORT,LCD_EN_PIN,1);
	_delay_ms(1);
	DIO_write_pin(LCD_COMMAND_PORT,LCD_EN_PIN,0);
	_delay_ms(1);




}

void LCD_write_string(const u8 *string)
{
	u8 i=0;

	while (string[i] !='\n')
	{
		DIO_write_pin(LCD_COMMAND_PORT,LCD_RS_PIN,1);
		DIO_write_pin(LCD_COMMAND_PORT,LCD_RW_PIN,0);
		DIO_write_port(LCD_DATA_PORT,string[i]);


		DIO_write_pin(LCD_COMMAND_PORT,LCD_EN_PIN,1);
		_delay_ms(1);
		DIO_write_pin(LCD_COMMAND_PORT,LCD_EN_PIN,0);
		_delay_ms(1);
		i++;

	}







}

void LCD_animate_string(const u8 *string, u8 interval)
{
	u8 i=0;

	while (string[i] !='\n')
	{
		DIO_write_pin(LCD_COMMAND_PORT,LCD_RS_PIN,1);
		DIO_write_pin(LCD_COMMAND_PORT,LCD_RW_PIN,0);
		DIO_write_port(LCD_DATA_PORT,string[i]);


		DIO_write_pin(LCD_COMMAND_PORT,LCD_EN_PIN,1);
		_delay_ms(1);
		DIO_write_pin(LCD_COMMAND_PORT,LCD_EN_PIN,0);
		_delay_ms(1);
		_delay_ms(interval);
		i++;

	}

}


void LCD_write_number (u16 number)
{
	u8 n_max = get_n_digits(number);
	u8 displayed_number=0;
	u8 counter =n_max;

//	if (number == 0)
//	{
//		displayed_number = 48;
//		DIO_write_pin(LCD_COMMAND_PORT,LCD_RS_PIN,1);
//		DIO_write_pin(LCD_COMMAND_PORT,LCD_RW_PIN,0);
//		DIO_write_port(LCD_DATA_PORT,displayed_number);
//
//
//		DIO_write_pin(LCD_COMMAND_PORT,LCD_EN_PIN,1);
//		_delay_ms(1);
//		DIO_write_pin(LCD_COMMAND_PORT,LCD_EN_PIN,0);
//		_delay_ms(1);
//	}


		for (counter=n_max;counter>0;counter--)
		{
			displayed_number = 48 + get_nth_digit(number,counter);
			DIO_write_pin(LCD_COMMAND_PORT,LCD_RS_PIN,1);
			DIO_write_pin(LCD_COMMAND_PORT,LCD_RW_PIN,0);
			DIO_write_port(LCD_DATA_PORT,displayed_number);


			DIO_write_pin(LCD_COMMAND_PORT,LCD_EN_PIN,1);
			_delay_ms(1);
			DIO_write_pin(LCD_COMMAND_PORT,LCD_EN_PIN,0);
			_delay_ms(1);




	}




}
