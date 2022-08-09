/*
 * timer0.h
 *
 *  Created on: Jul 10, 2022
 *      Author: alima
 */

#ifndef TIMER0_H_
#define TIMER0_H_


enum timer0_clk_source
{
	T0clk_original=1,
	T0clk_8=2,
	T0clk_64=3,
	T0clk_256=4,
	T0clk_1024=5,
	T0external_fallingedge=6,
	T0external_risingedge=7,
};

enum interrupt_mode
{
	interrupt_enable = 1,
	interrupt_disable =2,

};


enum Compare_Output_Mode_non_PWM
{
	disconnect_OC0=0,
	toggle_OC0=1,
	clear_OC0=2,
	set_OC0=3,

};

enum fast_PWM_modes
{
	//disconnect_OC0=0,
	fast_PWM_mode_inverting = 1,
	fast_PWM_mode_non_inverting = 2,


};


enum phase_correct__PWM_modes
{
	//disconnect_OC0=0,
	phase_correct_PWM_mode_inverting = 1,
	phase_correct_PWM_mode_non_inverting = 2,


};

#endif /* TIMER0_H_ */
