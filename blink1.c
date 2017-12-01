/********************************************************
 * blink.c
 * Blink program for ATtiny13 0x29 0xFF
 * For Eclipse with AVR plugin
 * hacked by Matthew
 ********************************************************/

#define __AVR_ATtiny13A__

#ifdef    F_CPU
  #undef  F_CPU
#endif

#define F_CPU 600000UL

#define WAITABIT _delay_ms(500)

#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	DDRB = 0b00000001;
	while (1) {
		PORTB = 0b00000001;
		WAITABIT;
		PORTB = 0b00000000;
		WAITABIT;
	}
	/* national unreachable wilderness area */
	return 0;
}
