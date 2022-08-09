/*
 * math_functions.c
 *
 *  Created on: Aug 6, 2022
 *      Author: alima
 */

typedef unsigned char            u8;
typedef unsigned short int 	  	 u16;
typedef unsigned int             u32;

u16 power (u16 base, u16 exp)
{
	u16 result = base;
	while (exp >1)
	{
		result = result * base;
		exp-- ;


	}

	return result;

}

u8 get_n_digits (u16 number)
{
	u8 n =0;
	u16 loop_result = number;
	while (loop_result > 0)
	{
		loop_result = loop_result /10 ;
		n++;
	}

	return n;
}


u16 get_nth_digit (u16 number, u8 digit_nth)
{
	u16 n_max = get_n_digits(number);	// get n of digits

	u16 result = 1;

	if (digit_nth == n_max && n_max !=1)
	{
		result = number / power (10,digit_nth-1);
	}
	else if (digit_nth == 1)
	{
		result = number - (number /10)*10;
	}
	else
	{
		result = ((number / power(10,digit_nth-1)) * power(10,digit_nth-1)) - ( (number / power(10,digit_nth)) * power(10,digit_nth) );
        result = result / power(10,digit_nth-1);
	}


	return result;
}

