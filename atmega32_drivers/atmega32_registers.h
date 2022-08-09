


//////////////////////////////////////////////////DEFINING REGISTERS
#include "datatypes.h"
#define   TWBR       *((volatile u8*)   0x20)
#define   TWSR       *((volatile u8*)   0x21)
#define   TWAR       *((volatile u8*)   0x22)
#define   TWDR       *((volatile u8*)   0x23)
#define   ADCL       *((volatile u8*)   0x24)
#define   ADCH       *((volatile u8*)   0x25)
#define   ADCSRA     *((volatile u8*)   0x26)
#define   ADMUX      *((volatile u8*)   0x27)
#define   ACSR       *((volatile u8*)   0x28)
#define   UBRRL      *((volatile u8*)   0x29)
#define   UCSRB      *((volatile u8*)   0x2A)
#define   UCSRA      *((volatile u8*)   0x2B)
#define   UDR        *((volatile u8*)   0x2C)
#define   SPCR       *((volatile u8*)   0x2D)
#define   SPSR       *((volatile u8*)   0x2E)
#define   SPDR       *((volatile u8*)   0x2F)
#define   PIND       *((volatile u8*)   0x30)
#define   DDRD       *((volatile u8*)   0x31)
#define   PORTD      *((volatile u8*)   0x32)
#define   PINC       *((volatile u8*)   0x33)
#define   DDRC       *((volatile u8*)   0x34)
#define   PORTC      *((volatile u8*)   0x35)
#define   PINB       *((volatile u8*)   0x36)
#define   DDRB       *((volatile u8*)   0x37)
#define   PORTB      *((volatile u8*)   0x38)
#define   PINA       *((volatile u8*)   0x39)
#define   DDRA       *((volatile u8*)   0x3A)
#define   PORTA      *((volatile u8*)   0x3B)
#define   EECR       *((volatile u8*)   0x3C)
#define   EEDR       *((volatile u8*)   0x3D)
#define   EEARL      *((volatile u8*)   0x3E)
#define   EEARH      *((volatile u8*)   0x3F)
#define   UCSRC      *((volatile u8*)   0x40)
#define   UBRRH      *((volatile u8*)   0x40)			//REPEATED
#define   WDTCR      *((volatile u8*)   0x41)
#define   ASSR       *((volatile u8*)   0x42)
#define   OCR2       *((volatile u8*)   0x43)
#define   TCNT2      *((volatile u8*)   0x44)
#define   TCCR2      *((volatile u8*)   0x45)
#define   ICR1L      *((volatile u8*)   0x46)
#define   ICR1H      *((volatile u8*)   0x47)
#define   OCR1BL     *((volatile u8*)   0x48)
#define   OCR1BH     *((volatile u8*)   0x49)
#define   OCR1AL     *((volatile u8*)   0x4A)
#define   OCR1AH     *((volatile u8*)   0x4B)
#define   TCNT1L     *((volatile u8*)   0x4C)
#define   TCNT1H     *((volatile u8*)   0x4D)
#define   TCCR1B     *((volatile u8*)   0x4E)
#define   TCCR1A     *((volatile u8*)   0x4F)
#define   SFIOR      *((volatile u8*)   0x50)
#define   OCDR       *((volatile u8*)   0x51)
#define   OSCCAL     *((volatile u8*)   0x51)			//REPEATED
#define   TCNT0      *((volatile u8*)   0x52)
#define   TCCR0      *((volatile u8*)   0x53)
#define   MCUCSR     *((volatile u8*)   0x54)
#define   MCUCR      *((volatile u8*)   0x55)
#define   TWCR       *((volatile u8*)   0x56)
#define   SPMCR      *((volatile u8*)   0x57)
#define   TIFR       *((volatile u8*)   0x58)
#define   TIMSK      *((volatile u8*)   0x59)
#define   GIFR       *((volatile u8*)   0x5A)
#define   GICR       *((volatile u8*)   0x5B)
#define   OCR0       *((volatile u8*)   0x5C)
#define   SPL        *((volatile u8*)   0x5D)
#define   SPH        *((volatile u8*)   0x5E)
#define   SREG       *((volatile u8*)   0x5F)


//////////////////////////////////////////////////DEFINING PINS

//TWSR		
#define	TWPS0	1
#define	TWPS1	2
#define	TWPS3	3
#define	TWPS4	4
#define	TWPS5	5
#define	TWPS6	6
#define	TWPS7	7

//TWAR		
#define	TWGCE	0
#define	TWA0	1
#define	TWA1	2
#define	TWA2	3
#define	TWA3	4
#define	TWA4	5
#define	TWA5	6
#define	TWA6	7


//ADCSRA		
#define	ADPS0	0
#define	ADPS1	1
#define	ADPS2	2
#define	ADIE	3
#define	ADIF	4
#define	ADATE	5
#define	ADSC	6
#define	ADEN	7


//ADMUX		
#define	MUX0	0
#define	MUX1	1
#define	MUX2	2
#define	MUX3	3
#define	MUX4	4
#define	ADLAR	5
#define	REFS0	6
#define	REFS1	7

//ACSR		
#define	ACIS0	0
#define	ACIS1	1
#define	ACIC	2
#define	ACIE	3
#define	ACI		4
#define	ACO		5
#define	ACBG	6
#define	ACD		7


//UBRRL		
//UCSRB		
#define	TXB8	0
#define	RXB8	1
#define	UCSZ2	2
#define	TXEN	3
#define	RXEN	4
#define	UDRIE	5
#define	TXCIE	6
#define	RXCIE	7


//UCSRA		
#define	MPCM	0
#define	U2X		1
#define	PE		2
#define	DOR		3
#define	FE		4
#define	UDRE	5
#define	TXC		6
#define	RXC		7


//UDR		
//SPCR		
#define	SPR0	0
#define	SPR1	1
#define	CPHA	2
#define	CPOL	3
#define	MSTR	4
#define	DORD	5
#define	SPE		6
#define	SPIE	7


//SPSR		
#define	SPI2X	0
#define	WCOL	6
#define	SPIF	7


//SPDR		
//PIND		
#define	PIND0	0
#define	PIND1	1
#define	PIND2	2
#define	PIND3	3
#define	PIND4	4
#define	PIND5	5
#define	PIND6	6
#define	PIND7	7


//DDRD		
#define	DDRD0	0
#define	DDRD1	1
#define	DDRD2	2
#define	DDRD3	3
#define	DDRD4	4
#define	DDRD5	5
#define	DDRD6	6
#define	DDRD7	7


//PORTD		
#define	PORTD0	0
#define	PORTD1	1
#define	PORTD2	2
#define	PORTD3	3
#define	PORTD4	4
#define	PORTD5	5
#define	PORTD6	6
#define	PORTD7	7


//PINC		
#define	PINC0	0
#define	PINC1	1
#define	PINC2	2
#define	PINC3	3
#define	PINC4	4
#define	PINC5	5
#define	PINC6	6
#define	PINC7	7
		
		
//DDRC		
#define	DDRC0	0
#define	DDRC1	1
#define	DDRC2	2
#define	DDRC3	3
#define	DDRC4	4
#define	DDRC5	5
#define	DDRC6	6
#define	DDRC7	7
		
		
//PORTC		
#define	PORTC0	0
#define	PORTC1	1
#define	PORTC2	2
#define	PORTC3	3
#define	PORTC4	4
#define	PORTC5	5
#define	PORTC6	6
#define	PORTC7	7

//PINB		
#define	PINB0	0
#define	PINB1	1
#define	PINB2	2
#define	PINB3	3
#define	PINB4	4
#define	PINB5	5
#define	PINB6	6
#define	PINB7	7
		
		
//DDRB		
#define	DDRB0	0
#define	DDRB1	1
#define	DDRB2	2
#define	DDRB3	3
#define	DDRB4	4
#define	DDRB5	5
#define	DDRB6	6
#define	DDRB7	7
		
		
//PORTB		
#define	PORTB0	0
#define	PORTB1	1
#define	PORTB2	2
#define	PORTB3	3
#define	PORTB4	4
#define	PORTB5	5
#define	PORTB6	6
#define	PORTB7	7


//PINA		
#define	PINA0	0
#define	PINA1	1
#define	PINA2	2
#define	PINA3	3
#define	PINA4	4
#define	PINA5	5
#define	PINA6	6
#define	PINA7	7
		
		
//DDRA		
#define	DDRA0	0
#define	DDRA1	1
#define	DDRA2	2
#define	DDRA3	3
#define	DDRA4	4
#define	DDRA5	5
#define	DDRA6	6
#define	DDRA7	7
		
		
//PORTA		
#define	PORTA0	0
#define	PORTA1	1
#define	PORTA2	2
#define	PORTA3	3
#define	PORTA4	4
#define	PORTA5	5
#define	PORTA6	6
#define	PORTA7	7


//EECR		
#define	EERE	0
#define	EEWE	1
#define	EEMWE	2
#define	EERIE	3


//EEDR		
//EEARL	

	
//EEARH		
#define	EEAR8	0
#define	EEAR9	1

//UCSRC		
#define	UCPOL	0
#define	UCSZ0	1
#define	UCSZ1	2
#define	USBS	3
#define	UPM0	4
#define	UPM1	5
#define	UMSEL	6
#define	URSEL	7


//WDTCR		
#define	WDP0	0
#define	WDP1	1
#define	WDP2	2
#define	WDE	3
#define	WDTOE	4


//ASSR		
#define	TCR2UB	0
#define	OCR2UB	1
#define	AS2	2


//OCR2		
//TCNT2		
//TCCR2		
#define	CS20	0
#define	CS21	1
#define	CS22	2
#define	WGM21	3
#define	COM20	4
#define	COM21	5
#define	WGM20	6
#define	FOC2	7


//TCCR1B		
#define	CS10	0
#define	CS11	1
#define	CS12	2
#define	WGM12	3
#define	WGM13	4
#define	ICES1	6
#define	ICNC1	7


//TCCR1A		
#define	WGM10	0
#define	WGM11	1
#define	FOC1B	2
#define	FOC1A	3
#define	COM1B0	4
#define	COM1B1	5
#define	COM1A0	6
#define	COM1A1	7


//SFIOR		
#define	PSR10	0
#define	PSR2	1
#define	PUD	2
#define	ACME	3
#define	ADTS0	5
#define	ADTS1	6
#define	ADTS2	7


//OCDR		
//OSCCAL		
//TCNT0		
//TCCR0		
#define	CS00	0
#define	CS01	1
#define	CS02	2
#define	WGM01	3
#define	COM00	4
#define	COM01	5
#define	WGM00	6
#define	FOC0	7


//MCUCSR		
#define	PORF	0
#define	EXTRF	1
#define	BORF	2
#define	WDRF	3
#define	JTRF	4
#define	ISC2	6
#define	JTD		7


//MCUCR		
#define	ISC00	0
#define	ISC01	1
#define	ISC10	2
#define	ISC11	3
#define	SM0		4
#define	SM1		5
#define	SM2		6
#define	SE		7


//TWCR		
#define	TWIE	0
#define	TWEN	2
#define	TWWC	3
#define	TWSTO	4
#define	TWSTA	5
#define	TWEA	6
#define	TWINT	7



//TIFR		
#define	TOV0	0
#define	OCF0	1
#define	TOV1	2
#define	OCF1B	3
#define	OCF1A	4
#define	ICF1	5
#define	TOV2	6
#define	OCF2	7


//TIMSK		
#define	TOIE0	0
#define	OCIE0	1
#define	TOIE1	2
#define	OCIE1B	3
#define	OCIE1A	4
#define	TICIE1	5
#define	TOIE2	6
#define	OCIE2	7


//GIFR		
#define	INTF2	5
#define	INTF0	6
#define	INTF1	7

//GICR		
#define	IVCE	0
#define	IVSEL	1
#define	INT2	5
#define	INT0	6
#define	INT1	7


//OCR0		
//SPL		
#define	SP0	0
#define	SP1	1
#define	SP2	2
#define	SP3	3
#define	SP4	4
#define	SP5	5
#define	SP6	6
#define	SP7	7


//SPH		
#define	SP8	0
#define	SP9	1
#define	SP10	2
#define	SP11	3


//SREG		
#define	SREG_C	0
#define	SREG_Z	1
#define	SREG_N	2
#define	SREG_V	3
#define	SREG_S	4
#define	SREG_H	5
#define	SREG_T	6
#define	SREG_I	7


