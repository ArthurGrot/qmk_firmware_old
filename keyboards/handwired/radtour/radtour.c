#include "radtour.h"

void keyboard_pre_init_user(void) {
    setPinOutput(D6);
    // writePinHigh(D6);
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if (res) {
        // writePin sets the pin high for 1 and low for 0.
        // In this example the pins are inverted, setting
        // it low/0 turns it on, and high/1 turns the LED off.
        // This behavior depends on whether the LED is between the pin
        // and VCC or the pin and GND.
        // writePin(B0, !led_state.num_lock);
        writePin(D6, !led_state.caps_lock);
        // writePin(B2, !led_state.scroll_lock);
        // writePin(B3, !led_state.compose);
        // writePin(B4, !led_state.kana);
    }
    return res;
}
