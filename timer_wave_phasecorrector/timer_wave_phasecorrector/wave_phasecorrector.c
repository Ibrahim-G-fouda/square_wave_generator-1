/*
 * wave_phasecorrector.c
 *
 * Created: 22/07/2023 09:57:52 م
 *  Author: handsa
 */ 
#include <avr/io.h>
#include "std_macros1.h"
#include "wave_phasecorrector.h"
void timer_wave_phasecorrector(void) 
{
	set_bit(DDRB,3);
	set_bit(TCCR0,WGM00);//set phase correct mode
	OCR0=64;
		set_bit(TCCR0,CS00);//prescaller 1024
			set_bit(TCCR0,CS02);//prescaller 1024
				set_bit(TCCR0,COM00);//set oc0 in compare match when up count ,clear comp match when down count 
					set_bit(TCCR0,COM01);
}