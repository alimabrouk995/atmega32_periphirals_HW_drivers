
//DEFINING MACROS FOR PORT & PIN NUMBERS
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3
#define HIGH 	  1
#define LOW       0

typedef unsigned char            u8;
typedef unsigned short int 	  	 u16;
typedef unsigned int             u32;

//port configurations
void DIO_set_port_output (u8 port_num);
void DIO_set_port_input (u8 port_num);
void DIO_port_pullup_enable (u8 port_num);
void DIO_port_pullup_disable (u8 port_num);
u8 DIO_port_read_value (u8 port_num);
void DIO_write_port (u8 port_num,u8 value);




//pin configurations
void DIO_write_pin (u8 port_num,u8 pin_num, u8 value);
void DIO_set_pin_output (u8 port_num,u8 pin_num);
void DIO_set_pin_input (u8 port_num, u8 pin_num);
void DIO_pin_pullup_enable (u8 port_num, u8 pin_num);
void DIO_pin_pullup_disable (u8 port_num, u8 pin_num);
u8 DIO_pin_read_value (u8 port_num, u8 pin_num);
void DIO_write_pin (u8 port_num,u8 pin_num, u8 value);


