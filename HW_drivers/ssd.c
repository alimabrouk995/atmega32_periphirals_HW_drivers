/*
#include "ssd_config.h"
#include "G:\embedded_workspace\atmega32\atmega32_drivers\dio.h"



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


#if SSD_ONE_CONNECT == COMMON_ANODE

	#if SSD_ONE_PORT == select_PORTA
	//
	#if SSD_ONE_PORT == select_PORTB
	//
	#if SSD_ONE_PORT == select_PORTC
	//
	#if SSD_ONE_PORT == select_PORTD
	//
	#if SSD_ONE_PORT == select_NONE
	//
	#endif
	
#elif SSD_ONE_CONNECT == COMMON_CATHODE

	#if SSD_ONE_PORT == select_PORTA
	//
	#if SSD_ONE_PORT == select_PORTB
	//
	#if SSD_ONE_PORT == select_PORTC
	//
	#if SSD_ONE_PORT == select_PORTD
	//
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
