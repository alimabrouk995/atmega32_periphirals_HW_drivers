/*
 * keypad_16.c
 *
 *  Created on: Aug 3, 2022
 *      Author: alima
 */

#include "keypad_16_config.h"
#include "util/delay.h"

void keypad_init (void)
{
	//COLOUMN - OUTPUT PINS
	DIO_set_pin_output(C_PORT,C1);
	DIO_set_pin_output(C_PORT,C2);
	DIO_set_pin_output(C_PORT,C3);
	DIO_set_pin_output(C_PORT,C4);

	//ROWS - INPUT PINS
	DIO_set_pin_input(R_PORT,R1);
	DIO_set_pin_input(R_PORT,R2);
	DIO_set_pin_input(R_PORT,R3);
	DIO_set_pin_input(R_PORT,R4);

	//ROWS - ACTIVATE PULL-UP
	DIO_pin_pullup_enable(R_PORT,R1);
	DIO_pin_pullup_enable(R_PORT,R2);
	DIO_pin_pullup_enable(R_PORT,R3);
	DIO_pin_pullup_enable(R_PORT,R4);


}

/*u8 keypad_read (u8 check_value)
{
	u8 flag=0;
	u8 pressed_key=0;

	switch (check_value)
	{
	// CHECK FOR FIRST COLOUMN
	case 1:
	case 2:
	case 3:
	case 4:
		DIO_write_pin(C_PORT,C1,LOW);
		DIO_write_pin(C_PORT,C2,HIGH);
		DIO_write_pin(C_PORT,C3,HIGH);
		DIO_write_pin(C_PORT,C4,HIGH);

		if (DIO_pin_read_value(R_PORT,R1) == 0 )
		{
			pressed_key = 1;
		}
		else if (DIO_pin_read_value(R_PORT,R2) == 0)
		{
			pressed_key = 2;
		}
		else if (DIO_pin_read_value(R_PORT,R3) == 0)
		{
			pressed_key = 3;
		}
		else if (DIO_pin_read_value(R_PORT,R4) == 0)
		{
			pressed_key = 4;
		}
		break;



		// CHECK FOR SECOND COLOUMN
	case 5:
	case 6:
	case 7:
	case 8:
		DIO_write_pin(C_PORT,C1,HIGH);
		DIO_write_pin(C_PORT,C2,LOW);
		DIO_write_pin(C_PORT,C3,HIGH);
		DIO_write_pin(C_PORT,C4,HIGH);

		if (DIO_pin_read_value(R_PORT,R1) == 0)
		{
			pressed_key = 5;
		}
		else if (DIO_pin_read_value(R_PORT,R2) == 0)
		{
			pressed_key = 6;
		}
		else if (DIO_pin_read_value(R_PORT,R3) == 0)
		{
			pressed_key = 7;
		}
		else if (DIO_pin_read_value(R_PORT,R4) == 0)
		{
			pressed_key = 8;
		}
		break;




		// CHECK FOR THIRD COLOUMN
	case 9:
	case 10:
	case 11:
	case 12:
		DIO_write_pin(C_PORT,C1,HIGH);
		DIO_write_pin(C_PORT,C2,HIGH);
		DIO_write_pin(C_PORT,C3,LOW);
		DIO_write_pin(C_PORT,C4,HIGH);

		if (DIO_pin_read_value(R_PORT,R1) == 0)
		{
			pressed_key = 9;
		}
		else if (DIO_pin_read_value(R_PORT,R2) == 0)
		{
			pressed_key = 10;
		}
		else if (DIO_pin_read_value(R_PORT,R3) == 0)
		{
			pressed_key = 11;
		}
		else if (DIO_pin_read_value(R_PORT,R4) == 0)
		{
			pressed_key = 12;
		}
		break;



		// CHECK FOR FOURTH COLOUMN
	case 13:
	case 14:
	case 15:
	case 16:
		DIO_write_pin(C_PORT,C1,HIGH);
		DIO_write_pin(C_PORT,C2,HIGH);
		DIO_write_pin(C_PORT,C3,HIGH);
		DIO_write_pin(C_PORT,C4,LOW);

		if (DIO_pin_read_value(R_PORT,R1) == 0 )
		{
			pressed_key = 13;
		}
		else if (DIO_pin_read_value(R_PORT,R2) == 0)
		{
			pressed_key = 14;
		}
		else if (DIO_pin_read_value(R_PORT,R3) == 0)
		{
			pressed_key = 15;
		}
		else if (DIO_pin_read_value(R_PORT,R4) == 0)
		{
			pressed_key = 16;
		}
		break;





	}

	if (check_value == pressed_key)
	{
		flag =1;
	}

	else
	{
		flag =0;
	}



	return flag;
}


u8 keypad_return_value (void)
{
	u8 c_value=0;
	u8 r_value=0;
	u8 col_count =0;
	u8 row_count=0;
	u8 end_loop_flag=0;
	u8 key_pressed=0;



	for (col_count=0;col_count<4 && end_loop_flag==0;col_count++)
	{
		c_value = ~(1<<col_count);
		DIO_write_port(C_PORT,(c_value & 0xFF));

		for (row_count=0;row_count<4;row_count++)
		{
			if (DIO_pin_read_value(R_PORT,R1) == 0 || DIO_pin_read_value(R_PORT,R2) == 0 ||DIO_pin_read_value(R_PORT,R3) == 0 ||DIO_pin_read_value(R_PORT,R4) == 0  )
			{
				r_value = row_count;
				end_loop_flag=1;
				break;

			}
		}
	}


	col_count = col_count -1 ;
	if (col_count ==0)
	{
		key_pressed = r_value + 1;
	}

	if (col_count ==1)
	{
		key_pressed = r_value + 4;
	}
	if (col_count ==2)
	{
		key_pressed = r_value + 7;
	}
	if (col_count ==3)
	{
		key_pressed = r_value + 10;
	}

	return key_pressed;








}*/


const u8 KPD_au8SwitchVal[4][4] =
{
  {
    0x07,
    0x08,
    0x09,
    0x10 },
  {
    0x04,
    0x05,
    0x06,
    0x0F },
  {
    0x01,
    0x02,
    0x03,
    0x0E },
  {
    0x01,
    0x0A,
    0x09,
    0x0D }
};

/***************************************************************************************/


/***************************************** Macros **************************************/
#define PORT DIO_PORTB

#define COL_INIT   0

#define COL_FIN    4

#define ROW_INIT   4

#define ROW_FIN    8

#define NOT_PRESSED    0
/***************************************************************************************/


/***************************************************************************************/
/* Description! Interface to get the ID of the pressed key, return 0 incase no key     */
/*              is pressed, this function doesn't handle the sitaution if 2 keys are   */
/*              pressed at the same time                               	     		   */
/* Input      ! Nothing                                                                */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
u8 KPD_u8GetPressedKey(void)
{

  u8 LOC_u8Column;

  u8 LOC_u8Row;

  /* Initialize the switch status to NOT Pressed                                                                     */
  u8 LOC_u8Retrun = NOT_PRESSED;

  /* Looping on columns of the Key Pad                                                                               */
  for (LOC_u8Column = 0 + COL_INIT; LOC_u8Column < COL_FIN; LOC_u8Column++)
  {
    /* Activate the Column                                                                                           */
    DIO_write_pin(PORT, LOC_u8Column, LOW);

    /* Loop on the rows of the Key Pad                                                                               */
    for (LOC_u8Row = 0 + ROW_INIT; LOC_u8Row < ROW_FIN; LOC_u8Row++)
    {
      /* Check the status of the switch                                                                              */
      if (!DIO_pin_read_value(PORT, LOC_u8Row))
      {
        /* Get the value of the currently pressed switch                                                             */
        LOC_u8Retrun = KPD_au8SwitchVal[LOC_u8Column - COL_INIT][LOC_u8Row - ROW_INIT];

        /* Wait until the switch is released (Single Press)                                                          */
        while (!DIO_pin_read_value(PORT, LOC_u8Row))
          ;

        /* Delay to avoid bouncing                                                                                   */
        _delay_ms(10);

      }
    }

    /* Deactivate the Column                                                                                         */
    DIO_write_pin(PORT, LOC_u8Column, HIGH);
  }

  return LOC_u8Retrun;
}

