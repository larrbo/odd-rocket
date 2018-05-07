#include "plum.h"
#include "led.h"

void matrix_init_kb(void) {
  matrix_init_user();
  led_init_ports();
};

void matrix_scan_kb(void) {
  matrix_scan_user();
};

void led_init_ports(void) {
  // Set LED pin as output
  DDRD |= (1 << 4);
  // Default to off
  PORTD |= (1 << 4);
}

void led_set_kb(uint8_t usb_led) {
  // Set this per keymap, instead of globally
  led_set_user(usb_led);
}
