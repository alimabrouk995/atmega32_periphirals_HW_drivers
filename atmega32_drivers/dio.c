#include "datatypes.h"
#include "bit_manipulation.h"
#include "atmega32_registers.h"

#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3
#define HIGH 	  1
#define LOW       0

typedef unsigned char            u8;
typedef unsigned short int 	  	 u16;
typedef unsigned int             u32;


//////////////////////////////////////////////port setting
void DIO_set_port_output (u8 port_num)
{
	switch (port_num)
	{
	case DIO_PORTA:
	{
		DDRA=0XFF;
		break;
	}
	case DIO_PORTB:
	{
		DDRB=0XFF;
		break;
	}
	case DIO_PORTC:
	{
		DDRC=0XFF;
		break;
	}
	case DIO_PORTD:
	{
		DDRD=0XFF;
		break;
	}
	default:
	{
		//none
	}



	}
}

void DIO_set_port_input (u8 port_num)
{
	switch (port_num)
	{
	case DIO_PORTA:
	{
		DDRA =0X00;
		PORTA=0XFF;			//ACTIVATE PULLUP
		break;
	}
	case DIO_PORTB:
	{
		DDRB =0X00;
		PORTB=0XFF;			//ACTIVATE PULLUP
		break;
	}
	case DIO_PORTC:
	{
		DDRC =0X00;
		PORTC=0XFF;			//ACTIVATE PULLUP
		break;
	}
	case DIO_PORTD:
	{
		DDRD =0X00;
		PORTD=0XFF;			//ACTIVATE PULLUP
		break;
	}
	default:
	{
		//none
	}

	}

	//call pull_up function

}

void DIO_port_pullup_enable (u8 port_num)
{
	switch (port_num)
	{
	case DIO_PORTA:
	{
		PORTA=0XFF;
		break;
	}
	case DIO_PORTB:
	{
		PORTB=0XFF;
		break;
	}
	case DIO_PORTC:
	{
		PORTC=0XFF;
		break;
	}
	case DIO_PORTD:
	{
		PORTD=0XFF;
		break;
	}
	default:
	{
		//none
	}



	}

}

void DIO_port_pullup_disable (u8 port_num)
{
	switch (port_num)
	{
	case DIO_PORTA:
	{
		PORTA=0X00;
		break;
	}
	case DIO_PORTB:
	{
		PORTB=0X00;
		break;
	}
	case DIO_PORTC:
	{
		PORTC=0X00;
		break;
	}
	case DIO_PORTD:
	{
		PORTD=0X00;
		break;
	}
	default:
	{
		//none
	}



	}

}

u8 DIO_port_read_value (u8 port_num)
{
	u8 return_value;

	switch (port_num)
	{
	case DIO_PORTA:
	{
		return_value = PINA;
		break;
	}
	case DIO_PORTB:
	{
		return_value = PINB;
		break;
	}
	case DIO_PORTC:
	{
		return_value = PINC;
		break;
	}
	case DIO_PORTD:
	{
		return_value = PIND;
		break;
	}
	default:
	{
		//none
	}



	}

	return return_value;
}


void DIO_write_port (u8 port_num,u8 value)
{
	switch (port_num)
	{
	case DIO_PORTA:
	{
		PORTA=value;
		break;
	}
	case DIO_PORTB:
	{
		PORTB=value;
		break;
	}
	case DIO_PORTC:
	{
		PORTC=value;
		break;
	}
	case DIO_PORTD:
	{
		PORTD=value;
		break;
	}
	default:
	{
		//none
	}



	}
}





//////////////////////////////////////////////pin setting


void DIO_set_pin_output (u8 port_num,u8 pin_num)
{
	switch (port_num)
	{
	case DIO_PORTA:
	{
		SET_BIT(DDRA,pin_num);
		break;
	}
	case DIO_PORTB:
	{
		SET_BIT(DDRB,pin_num);
		break;
	}
	case DIO_PORTC:
	{
		SET_BIT(DDRC,pin_num);
		break;
	}
	case DIO_PORTD:
	{
		SET_BIT(DDRD,pin_num);
		break;
	}
	default:
	{
		//none
	}



	}


}

void DIO_set_pin_input (u8 port_num, u8 pin_num)
{
	//call pull_up function
	switch (port_num)
	{
	case DIO_PORTA:
	{
		CLEAR_BIT(DDRA,pin_num);
		SET_BIT(PORTA,pin_num);			//ACTIVATE PULLUP
		break;
	}
	case DIO_PORTB:
	{
		CLEAR_BIT(DDRB,pin_num);
		SET_BIT(PORTB,pin_num);			//ACTIVATE PULLUP
		break;
	}
	case DIO_PORTC:
	{
		CLEAR_BIT(DDRC,pin_num);
		SET_BIT(PORTC,pin_num);			//ACTIVATE PULLUP
		break;
	}
	case DIO_PORTD:
	{
		CLEAR_BIT(DDRD,pin_num);
		SET_BIT(PORTD,pin_num);			//ACTIVATE PULLUP
		break;
	}
	default:
	{
		//none
	}

	}



}

void DIO_pin_pullup_enable (u8 port_num, u8 pin_num)
{
	switch (port_num)
	{
	case DIO_PORTA:
	{
		SET_BIT(PORTA,pin_num);			//ACTIVATE PULLUP
		break;
	}
	case DIO_PORTB:
	{
		SET_BIT(PORTB,pin_num);			//ACTIVATE PULLUP
		break;
	}
	case DIO_PORTC:
	{
		SET_BIT(PORTC,pin_num);			//ACTIVATE PULLUP
		break;
	}
	case DIO_PORTD:
	{
		SET_BIT(PORTD,pin_num);			//ACTIVATE PULLUP
		break;
	}
	default:
	{
		//none
	}

	}

}

void DIO_pin_pullup_disable (u8 port_num, u8 pin_num)
{
	switch (port_num)
	{
	case DIO_PORTA:
	{
		CLEAR_BIT(PORTA,pin_num);			//ACTIVATE PULLUP
		break;
	}
	case DIO_PORTB:
	{
		CLEAR_BIT(PORTB,pin_num);			//ACTIVATE PULLUP
		break;
	}
	case DIO_PORTC:
	{
		CLEAR_BIT(PORTC,pin_num);			//ACTIVATE PULLUP
		break;
	}
	case DIO_PORTD:
	{
		CLEAR_BIT(PORTD,pin_num);			//ACTIVATE PULLUP
		break;
	}
	default:
	{
		//none
	}

	}

}

u8 DIO_pin_read_value (u8 port_num, u8 pin_num)
{

	u8 return_value;

	switch (port_num)
	{
	case DIO_PORTA:
	{
		return_value = GET_BIT(PINA,pin_num);
		break;
	}
	case DIO_PORTB:
	{
		return_value = GET_BIT(PINB,pin_num);
		break;
	}
	case DIO_PORTC:
	{
		return_value = GET_BIT(PINC,pin_num);
		break;
	}
	case DIO_PORTD:
	{
		return_value = GET_BIT(PIND,pin_num);
		break;
	}
	default:
	{
		//none
	}


	}

	return return_value;


}

void DIO_write_pin (u8 port_num,u8 pin_num, u8 value)
{
	if (value == HIGH)
	{

		switch (port_num)
		{
		case DIO_PORTA:
		{
			SET_BIT(PORTA,pin_num);
			break;
		}
		case DIO_PORTB:
		{
			SET_BIT(PORTB,pin_num);
			break;
		}
		case DIO_PORTC:
		{
			SET_BIT(PORTC,pin_num);
			break;
		}
		case DIO_PORTD:
		{
			SET_BIT(PORTD,pin_num);
			break;
		}
		default:
		{
			//none
		}



		}

	}




	else if (value == LOW)
		{

			switch (port_num)
			{
			case DIO_PORTA:
			{
				CLEAR_BIT(PORTA,pin_num);
				break;
			}
			case DIO_PORTB:
			{
				CLEAR_BIT(PORTB,pin_num);
				break;
			}
			case DIO_PORTC:
			{
				CLEAR_BIT(PORTC,pin_num);
				break;
			}
			case DIO_PORTD:
			{
				CLEAR_BIT(PORTD,pin_num);
				break;
			}
			default:
			{
				//none
			}



			}

		}



}
