/*
 * keypad.h
 *
 *  Created on: Aug 3, 2022
 *      Author: alima
 */

#ifndef HW_DRIVERS_KEYPAD_H_
#define HW_DRIVERS_KEYPAD_H_


void keypad_init (void);
//u8 keypad_read (u8 check_value);
//u8 keypad_return_value (void);
u8 KPD_u8GetPressedKey(void);
#endif /* HW_DRIVERS_KEYPAD_H_ */
