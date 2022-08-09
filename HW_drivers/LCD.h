/*
 * LCD.h
 *
 *  Created on: Aug 6, 2022
 *      Author: alima
 */

#ifndef HW_DRIVERS_LCD_H_
#define HW_DRIVERS_LCD_H_

void LCD_init (void);
void LCD_writecommand(u8 command);
void LCD_write_string(const u8 *string);
void LCD_write_number (u16 number);
void LCD_animate_string(const u8 *string, u8 interval);


#define lcd_set_8bit  0x38
#define lcd_clear_screen 0x01
#define lcd_return_home 0x02
#define lcd_cursor_blink_on 0x0f
#define lcd_cursor_blink_off 0x0e
#define lcd_hide_cursor 0x0c


#endif /* HW_DRIVERS_LCD_H_ */
