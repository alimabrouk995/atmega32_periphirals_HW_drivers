/*
 * interrupt.h
 *
 *  Created on: Aug 7, 2022
 *      Author: alima
 */
/* Interrupt vectors */
#define _VECTOR(N) __vector_ ## N

/* External Interrupt Request 0 */
#define INT0_vect			_VECTOR(1)

/* External Interrupt Request 1 */
#define INT1_vect			_VECTOR(2)

/* External Interrupt Request 2 */
#define INT2_vect			_VECTOR(3)

/* Timer/Counter2 Compare Match */
#define TIMER2_COMP_vect		_VECTOR(4)

/* Timer/Counter2 Overflow */
#define TIMER2_OVF_vect			_VECTOR(5)

/* Timer/Counter1 Capture Event */
#define TIMER1_CAPT_vect		_VECTOR(6)

/* Timer/Counter1 Compare Match A */
#define TIMER1_COMPA_vect		_VECTOR(7)

/* Timer/Counter1 Compare Match B */
#define TIMER1_COMPB_vect		_VECTOR(8)

/* Timer/Counter1 Overflow */
#define TIMER1_OVF_vect			_VECTOR(9)

/* Timer/Counter0 Compare Match */
#define TIMER0_COMP_vect		_VECTOR(10)


/* Timer/Counter0 Overflow */
#define TIMER0_OVF_vect			_VECTOR(11)
/* Serial Transfer Complete */
#define SPI_STC_vect			_VECTOR(12)

/* USART, Rx Complete */
#define USART_RXC_vect			_VECTOR(13)


/* USART Data Register Empty */
#define USART_UDRE_vect			_VECTOR(14)


/* USART, Tx Complete */
#define USART_TXC_vect			_VECTOR(15)


/* ADC Conversion Complete */
#define ADC_vect			_VECTOR(16)


/* EEPROM Ready */
#define EE_RDY_vect			_VECTOR(17)


/* Analog Comparator */
#define ANA_COMP_vect			_VECTOR(18)


/* 2-wire Serial Interface */
#define TWI_vect			_VECTOR(19)


/* Store Program Memory Ready */
#define SPM_RDY_vect			_VECTOR(20)


#define _VECTORS_SIZE 84

#  define __INTR_ATTRS used, externally_visible

#define ISR(vector, ...)            \
		void vector (void) __attribute__ ((signal,__INTR_ATTRS)) __VA_ARGS__; \
		void vector (void)

#  define EMPTY_INTERRUPT(vector)                \
		void vector (void) __attribute__ ((signal,naked,__INTR_ATTRS));    \
		void vector (void) { __asm__ __volatile__ ("reti" ::); }





