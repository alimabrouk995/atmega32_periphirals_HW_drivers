/*
#include "ssd_config.h"
#include "atmega32_dio.h"


																    A
																---------
																|		|
																|       |
															   F|       |B
																|   G   |
																---------
																|		|
																|       |
															   E|       |C
																|       |
																---------		||DP
																    D
				COMMON_CATHODE													

		A	B	C	D	E	F	G	DP
	0	1	1	1	1	1	1	0	0
	1	0	1	1	0	0	0	0	0
	2	1	1	0	1	1	0	1	0
	3	1	1	1	1	0	0	1	0
	4	0	1	1	0	1	1	1	0
	5	1	0	0	1	1	0	1	0
	6	1	0	1	1	1	1	1	0
	7	1	1	1	0	0	0	0	0
	8	1	1	1	1	1	1	1	0
	9	1	1	1	1	0	1	1	0
	
	u8 SSD_NUM[10]=
	{
		0b11111100,
		0b01100000,
		0b11011010,
		0b11110010,
		0b01101110,
		0b10011010,
		0b10111110,
		0b11100000,
		0b11111110,
		0b11110110,
		
	}
	
				COMMON_ANODE													

		A	B	C	D	E	F	G	DP
	0	0	0	0	0	0	0	1	1
	1	1	0	0	1	1	1	1	1
	2	0	0	1	0	0	1	0	1
	3	0	0	0	0	1	1	0	1
	4	1	0	0	1	0	0	0	1
	5	0	1	1	0	0	1	0	1
	6	0	1	0	0	0	0	0	1
	7	0	0	0	1	1	1	1	1
	8	0 	0	0	0	0	0	0	1
	9	0	0	0	0	1	0	0	1

	u8 SSD_NUM[10]=
	{
		0b00000011,
		0b10011111,
		0b00100101,
		0b00001101,
		0b10010001,
		0b01100101,
		0b01000001,
		0b00011111,
		0b00000001,
		0b00001001,
		
	}



//////////////////////////////////////////////////////////////////////////////////////////////// intializing with switch case
 void SSD_init (void)
{
		//SSD_ONE
		switch (SSD_ONE_CONNECT)
		{
			case (COMMON_ANODE):
			switch (SSD_ONE_PORT)
			{
				case (select_PORTA): 
				//
				break;
				case (select_PORTB): 
				//
				break;
				case (select_PORTC): 
				//
				break;
				case (select_PORTD): 
				//
				break;
				
			}
			break;
			
			case (COMMON_CATHODE):
			switch (SSD_ONE_PORT)
			{
				case (select_PORTA): 
				//
				break;
				case (select_PORTB): 
				//
				break;
				case (select_PORTC): 
				//
				break;
				case (select_PORTD): 
				//
				break;
				
			}
			break;
			
		
			
		}
		
		//SSD_TWO
		switch (SSD_TWO_CONNECT)
		{
			case (COMMON_ANODE):
			switch (SSD_ONE_PORT)
			{
				case (select_PORTA): 
				//
				break;
				case (select_PORTB): 
				//
				break;
				case (select_PORTC): 
				//
				break;
				case (select_PORTD): 
				//
				break;
				
			}
			break;
			
			case (COMMON_CATHODE):
			switch (SSD_TWO_PORT)
			{
				case (select_PORTA): 
				//
				break;
				case (select_PORTB): 
				//
				break;
				case (select_PORTC): 
				//
				break;
				case (select_PORTD): 
				//
				break;
				
			}
			break;
			
		
			
		}
		
		//SSD_THREE
		switch (SSD_THREE_CONNECT)
		{
			case (COMMON_ANODE):
			switch (SSD_THREE_PORT)
			{
				case (select_PORTA): 
				//
				break;
				case (select_PORTB): 
				//
				break;
				case (select_PORTC): 
				//
				break;
				case (select_PORTD): 
				//
				break;
				
			}
			break;
			
			case (COMMON_CATHODE):
			switch (SSD_THREE_PORT)
			{
				case (select_PORTA): 
				//
				break;
				case (select_PORTB): 
				//
				break;
				case (select_PORTC): 
				//
				break;
				case (select_PORTD): 
				//
				break;
				
			}
			break;
			
		
			
		}
		
		
		//SSD_FOUR
		switch (SSD_FOUR_CONNECT)
		{
			case (COMMON_ANODE):
			switch (SSD_FOUR_PORT)
			{
				case (select_PORTA): 
				//
				break;
				case (select_PORTB): 
				//
				break;
				case (select_PORTC): 
				//
				break;
				case (select_PORTD): 
				//
				break;
				
			}
			break;
			
			case (COMMON_CATHODE):
			switch (SSD_FOUR_PORT)
			{
				case (select_PORTA): 
				//
				break;
				case (select_PORTB): 
				//
				break;
				case (select_PORTC): 
				//
				break;
				case (select_PORTD): 
				//
				break;
				
			}
			break;
			
		
			
		}
		
		
		
		
		
		
		
}



//////////////////////////////////////////////////////////////////////////////////////////////// intializing with conditional directives
//////////////////////////////////////////////////////////////////////////////////////////////// SSD ONE

#if (SSD_ONE_CONNECT == COMMON_ANODE) || (SSD_TWO_CONNECT == COMMON_ANODE)  || (SSD_THREE_CONNECT == COMMON_ANODE)  || (SSD_FOUR_CONNECT == COMMON_ANODE)
	
#endif

#if (SSD_ONE_CONNECT == COMMON_ANODE) || (SSD_TWO_CONNECT == COMMON_ANODE)  || (SSD_THREE_CONNECT == COMMON_ANODE)  || (SSD_FOUR_CONNECT == COMMON_ANODE)
	
#endif


	
	#if SSD_ONE_PORT == select_PORTA
	//SET PORTA AS OUTPUT
	//ENTER PATTERNS OF 10 DIGITS
	#if SSD_ONE_PORT == select_PORTB
	//SET PORTB AS OUTPUT
	//ENTER PATTERNS OF 10 DIGITS
	#if SSD_ONE_PORT == select_PORTC
	//SET PORTC AS OUTPUT
	//ENTER PATTERNS OF 10 DIGITS
	#if SSD_ONE_PORT == select_PORTD
	//SET PORTD AS OUTPUT
	//ENTER PATTERNS OF 10 DIGITS
	#if SSD_ONE_PORT == select_NONE
	//NOTHING
	#endif
	
#elif SSD_ONE_CONNECT == COMMON_CATHODE

	
	#if SSD_ONE_PORT == select_PORTA
	//SET PORTA AS OUTPUT
	//ENTER PATTERNS OF 10 DIGITS
	#if SSD_ONE_PORT == select_PORTB
	//SET PORTA AS OUTPUT
	//ENTER PATTERNS OF 10 DIGITS
	#if SSD_ONE_PORT == select_PORTC
	//SET PORTA AS OUTPUT
	//ENTER PATTERNS OF 10 DIGITS
	#if SSD_ONE_PORT == select_PORTD
	//SET PORTA AS OUTPUT
	//ENTER PATTERNS OF 10 DIGITS
	#if SSD_ONE_PORT == select_NONE
	//
	#endif
	
	
#endif


//////////////////////////////////////////////////////////////////////////////////////////////// SSD TWO

#if SSD_TWO_CONNECT == COMMON_ANODE

	#if SSD_TWO_PORT == select_PORTA
	//
	#if SSD_TWO_PORT == select_PORTB
	//
	#if SSD_TWO_PORT == select_PORTC
	//
	#if SSD_TWO_PORT == select_PORTD
	//
	#if SSD_TWO_PORT == select_NONE
	//
	#endif
	
#elif SSD_TWO_CONNECT == COMMON_CATHODE

	#if SSD_TWO_PORT == select_PORTA
	//
	#if SSD_TWO_PORT == select_PORTB
	//
	#if SSD_TWO_PORT == select_PORTC
	//
	#if SSD_TWO_PORT == select_PORTD
	//
	#if SSD_TWO_PORT == select_NONE
	//
	#endif
	
	
#endif


//////////////////////////////////////////////////////////////////////////////////////////////// SSD THREE

#if SSD_THREE_CONNECT == COMMON_ANODE

	#if SSD_THREE_PORT == select_PORTA
	//
	#if SSD_THREE_PORT == select_PORTB
	//
	#if SSD_THREE_PORT == select_PORTC
	//
	#if SSD_THREE_PORT == select_PORTD
	//
	#if SSD_THREE_PORT == select_NONE
	//
	#endif
	
#elif SSD_THREE_CONNECT == COMMON_CATHODE

	#if SSD_THREE_PORT == select_PORTA
	//
	#if SSD_THREE_PORT == select_PORTB
	//
	#if SSD_THREE_PORT == select_PORTC
	//
	#if SSD_THREE_PORT == select_PORTD
	//
	#if SSD_THREE_PORT == select_NONE
	//
	#endif
	
	
#endif


//////////////////////////////////////////////////////////////////////////////////////////////// SSD FOUR

#if SSD_FOUR_CONNECT == COMMON_ANODE

	#if SSD_FOUR_PORT == select_PORTA
	//
	#if SSD_FOUR_PORT == select_PORTB
	//
	#if SSD_FOUR_PORT == select_PORTC
	//
	#if SSD_FOUR_PORT == select_PORTD
	//
	#if SSD_FOUR_PORT == select_NONE
	//
	#endif
	
#elif SSD_FOUR_CONNECT == COMMON_CATHODE

	#if SSD_FOUR_PORT == select_PORTA
	//
	#if SSD_FOUR_PORT == select_PORTB
	//
	#if SSD_FOUR_PORT == select_PORTC
	//
	#if SSD_FOUR_PORT == select_PORTD
	//
	#if SSD_FOUR_PORT == select_NONE
	//
	#endif
	
	
#endif


*/
