


/*
-it's available to connect 4 segment displays to atmega32 simultenously
-they are named SSD_ONE, SSD_TWO, SSD_THREE, SSD_FOUR
-First Assign the connected SSD to its port

*/


#define select_PORTA 	0
#define select_PORTB 	1
#define select_PORTC 	2
#define select_PORTD 	3
#define select_NONE  	99

//CONNECTIVITY
#define COMMON_ANODE 	0
#define COMMON_CATHODE  1


//-----------------------------------------------------------------     START HERE      -----------
//now select here the seven segment with the port
#define SSD_ONE_PORT 		select_PORTA
#define SSD_TWO_PORT 		select_NONE
#define SSD_THREE_PORT 		select_NONE
#define SSD_FOUR_PORT 		select_NONE


//now select connectivity type 
#define SSD_ONE_CONNECT 		COMMON_ANODE
#define SSD_TWO_CONNECT 		select_NONE
#define SSD_THREE_CONNECT		select_NONE
#define SSD_FOUR_CONNECT 		select_NONE



//Assign seven segment words to pin numbers

// SSD_ONE has words (a1,b1,c1,d1,e1,f1,g1,dp1)  
// SSD_TWO has words (a2,b2,c2,d2,e2,f2,g2,dp2)  	
// SSD_THREE has words (a3,b3,c3,d3,e3,f3,g3,dp3)   
// SSD_FOUR has words (a4,b4,c4,d4,e4,f4,g4,dp4)	

#define a1 	PINA0
#define b1 	PINA1
#define c1 	PINA2
#define d1 	PINA3
#define e1 	PINA4
#define f1 	PINA5
#define g1 	PINA6
#define dp1 PINA7

#define a2 	PINB0
#define b2 	PINB1
#define c2 	PINB2
#define d2 	PINB3
#define e2 	PINB4
#define f2 	PINB5
#define g2 	PINB6
#define dp2 PINB7

#define a3 	PINC0
#define b3 	PINC1
#define c3 	PINC2
#define d3 	PINC3
#define e3 	PINC4
#define f3 	PINC5
#define g3 	PINC6
#define dp3 PINC7

#define a4 	PIND0
#define b4 	PIND1
#define c4 	PIND2
#define d4	PIND3
#define e4 	PIND4
#define f4 	PIND5
#define g4 	PIND6
#define dp4 PIND7




