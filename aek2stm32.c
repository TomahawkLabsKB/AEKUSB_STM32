#include "aek2stm32.h"

// This runs once when the keyboard starts up
void keyboard_pre_init_user(void) {
    // Set B1 as input with a pull-up resistor for your locking switch
    setPinInputHigh(B1);
}

// This runs constantly while the keyboard is plugged in
void matrix_scan_user(void) {
    static bool last_switch_state = true;
    bool current_switch_state = readPin(B1);

    // If the physical state of the switch changed
    if (current_switch_state != last_switch_state) {
        tap_code(KC_CAPS); // Pulse the Caps Lock keycode to the OS
        last_switch_state = current_switch_state;
    }
}