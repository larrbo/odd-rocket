#include "5plit.h"

void matrix_init_kb(void) {

//this disables Tx/Rx LEDs
//power LED is hardwired, no way to bypass

    DDRD &= ~(1<<5);
    PORTD &= ~(1<<5);

    DDRB &= ~(1<<0);
    PORTB &= ~(1<<0);

	matrix_init_user();
};
