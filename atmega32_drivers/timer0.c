/*
 * timer0.c
 *
 *  Created on: Jul 10, 2022
 *      Author: alima
 */
#include "atmega32_registers.h"
#include "datatypes.h"
#include "timer0.h"
#include "bit_manipulation.h"

typedef unsigned char            u8;
typedef unsigned short int 	  	 u16;
typedef unsigned int             u32;

/////////////////////////////////////////////////////////////ENABLE / DISABLE INTERRUPTS
void timer0_OV_interrupt_enable(void)
{
	SET_BIT(TIMSK,TOIE0);
}

void timer0_OV_interrupt_disable(void)
{
	CLEAR_BIT(TIMSK,TOIE0);
}

void timer0_OC_interrupt_enable(void)
{
	SET_BIT(TIMSK,OCIE0);
}

void timer0_OC_interrupt_disable(void)
{
	CLEAR_BIT(TIMSK,OCIE0);
}
/////////////////////////////////////////////////////////////READ INTERRUPT FLAGS

u8 timer0_get_OV_interrupt_flag (void)
{
	return GET_BIT(TIFR,TOV0);
}

u8 timer0_get_OC_interrupt_flag (void)
{
	return GET_BIT(TIFR,OCF0);
}

/////////////////////////////////////////////////////////////CLEAR INTERRUPT FLAGS
void timer0_set_OV_interrupt_flag (void)
{
	SET_BIT(TIFR,TOV0);
}

void timer0_set_OC_interrupt_flag (void)
{
	SET_BIT(TIFR,OCF0);
}

/////////////////////////////////////////////////////////////START TIMING WITH INTERNAL CLOCK SOURCE


timer0_int_clk_start(u8 time_prescale)
{
	switch (time_prescale)
	{
	case T0clk_original:
		TCCR0 |= (1<<CS00);
		break;

	case T0clk_8:
		TCCR0 |= (1<<CS01);
		break;

	case T0clk_64:
		TCCR0 |= (1<<CS00) | (1<<CS01);
		break;

	case T0clk_256:
		TCCR0 |= (1<<CS02);
		break;

	case T0clk_1024:
		TCCR0 |= (1<<CS02) | (1<<CS00);
		break;

	}

}

/////////////////////////////////////////////////////////////START TIMING WITH EXTERNAL CLOCK SOURCE

/*void timer0_ext_clk_start (u8 ext_edge)
{
	switch (ext_edge)
	{
	case T0external_fallingedge:
		TCCR0 |= (1<<CS02) (1<<CS01);
		break;

	case T0external_risingedge:
		TCCR0 |= (1<<CS02) | (1<<CS01) | (1<<CS00);
		break;
	}


}*/


/////////////////////////////////////////////////////////////STOP TIMER

void timer0_stop (void)
{
	TCCR0 &= 0b11111000;			//cs00,cs01,cs02 zeros
}

/////////////////////////////////////////////////////////////FORCE OUTPUT COMPARE

void timer0_force_output_comp (void)
{
	SET_BIT(TCCR0,FOC0);
}


/////////////////////////////////////////////////////////////TIMER0 SET TO NORMAL MODE

void timer0_SetMode_Normal(u8 interrupt_mode,u8 Timer_Reg_Preload)
{
	switch (interrupt_mode)
	{
	case interrupt_enable:
		timer0_OV_interrupt_enable();
		break;

	case interrupt_disable:
		timer0_OV_interrupt_disable();
		break;
	}


	TCNT0 = Timer_Reg_Preload;

	TCCR0 &= 0b10110111;			//WGM00, WGM01 = ZEROS
}

/////////////////////////////////////////////////////////////TIMER0 SET TO CTC MODE

void timer0_SetMode_CTC(u8 CTC_Mode,u8 interrupt_mode,u8 Comp_Reg_Preload,u8 Timer_Reg_Preload)
{
	TCCR0 &= 0b10110111;		// CLEAR ALL MODES
	TCCR0 |= (1<<WGM01) ;		//ENABLE CTC operation mode

	switch (CTC_Mode)
	{
	case disconnect_OC0:
		CLEAR_BIT(DDRB,PINB3);
		TCCR0 &= 0b11001111;
		break;

	case toggle_OC0:
		SET_BIT(DDRB,PINB3);
		TCCR0 &= 0b11001111;
		TCCR0 |= (1<<COM00);
		break;

	case clear_OC0:
		SET_BIT(DDRB,PINB3);
		TCCR0 &= 0b11001111;
		TCCR0 |= (1<<COM01);
		break;

	case set_OC0:
		SET_BIT(DDRB,PINB3);
		TCCR0 &= 0b11001111;
		TCCR0 |= (1<<COM01) | (1<< COM00);
		break;

	}



	switch (interrupt_mode)
	{
	case interrupt_enable:
		timer0_OC_interrupt_enable();
		break;

	case interrupt_disable:
		timer0_OC_interrupt_disable();
		break;
	}


	TCNT0 = Timer_Reg_Preload;
	OCR0 = Comp_Reg_Preload;


}

/////////////////////////////////////////////////////////////TIMER0 SET TO FAST PWM


void timer0_SetMode_fastPWM (u8 fast_PWM_mode,u8 interrupt_mode,u8 Comp_Reg_Preload,u8 Timer_Reg_Preload)
{

	TCCR0 &= 0b10110111;					// CLEAR ALL MODES
	TCCR0 |= (1<<WGM01) | (1<<WGM00) ;		//ENABLE FAST PWM operation mode

	switch (fast_PWM_mode)
	{


	case disconnect_OC0:
		CLEAR_BIT(DDRB,PINB3);
		TCCR0 &= 0b11001111;			//clear COM00,COM01
		break;


	case fast_PWM_mode_inverting:		//set OCR0 on compare, clear on BOTTOM
		SET_BIT(DDRB,PINB3);			//set OC0 output
		TCCR0 &= 0b11001111;			//clear COM00,COM01
		TCCR0 |= (1<<COM01) | (1<< COM00);
		break;

	case fast_PWM_mode_non_inverting:   //clear OCR0 on compare, set on BOTTOM
		SET_BIT(DDRB,PINB3);			//set OC0 output
		TCCR0 &= 0b11001111;			//clear COM00,COM01
		TCCR0 |= (1<<COM01);
		break;

	}



	switch (interrupt_mode)					//interrupt fires at MAX value
	{
	case interrupt_enable:
		timer0_OV_interrupt_enable();
		break;

	case interrupt_disable:
		timer0_OV_interrupt_disable();
		break;
	}


	TCNT0 = Timer_Reg_Preload;
	OCR0 = Comp_Reg_Preload;


}

/////////////////////////////////////////////////////////////TIMER0 SET TO PHASE-CORRECT PWM
/*
void timer0_SetMode_fastPWM (u8 phase_correct_PWM_mode,u8 interrupt_mode,u8 Comp_Reg_Preload,u8 Timer_Reg_Preload)
{

	TCCR0 &= 0b10110111;		// CLEAR ALL MODES
	TCCR0 |=(1<<WGM00) ;		//ENABLE FAST PWM operation mode

	switch (phase_correct_PWM_mode)
	{


	case disconnect_OC0:
		CLEAR_BIT(DDRB,PINB3);
		TCCR0 &= 0b11001111;			//clear COM00,COM01
		break;


	case phase_correct_PWM_mode_inverting:		//set OCR0 on compare @ count-up ,,,, clears @ count-down
		SET_BIT(DDRB,PINB3);					//set OC0 output
		TCCR0 &= 0b11001111;					//clear COM00,COM01
		TCCR0 |= (1<<COM01) | (1<< COM00);
		break;

	case phase_correct_PWM_mode_non_inverting:   //clear OCR0 on compare @ count-up ,,,, set @ count-down
		SET_BIT(DDRB,PINB3);				   	//set OC0 output
		TCCR0 &= 0b11001111;					//clear COM00,COM01
		TCCR0 |= (1<<COM01);
		break;

	}



	switch (interrupt_mode)				//interrupt fires at BOTTOM value
	{
	case interrupt_enable:
		timer0_OV_interrupt_enable();
		break;

	case interrupt_disable:
		timer0_OV_interrupt_disable();
		break;
	}


	TCNT0 = Timer_Reg_Preload;
	OCR0 = Comp_Reg_Preload;


}
*/
