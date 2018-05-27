#include "koda.h"

void matrix_init_kb(void) {

//this turns off the Tx/Rx LEDs
//power LED is hard-wired, so no bueno there

    DDRD &= ~(1<<5);
    PORTD &= ~(1<<5);

    DDRB &= ~(1<<0);
    PORTB &= ~(1<<0);

	matrix_init_user();
};
