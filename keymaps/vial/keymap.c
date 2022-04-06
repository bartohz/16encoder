#include QMK_KEYBOARD_H
#include "raw_hid.h"
#include "quantum.h"

#define ____ KC_TRNS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_h(
       	KC_F13 , KC_F14 , KC_F15, ____ , ____ ,
        KC_F16 , KC_F17 , KC_F18, KC_F19 , KC_F13 ,
        KC_F20 , KC_F21 , KC_F22, KC_F23 , ____ ,
		KC_MNXT , KC_MPRV , KC_MPLY, QK_BOOT, ____ 
    ),

    [1] = LAYOUT_h(
        ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____,
		____, ____, ____, ____, ____
    ),
	
    [2] = LAYOUT_h(
        ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____,
		____, ____, ____, ____, ____
    ),
	
    [3] = LAYOUT_h(
        ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____,
		____, ____, ____, ____, ____
    ),

};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    }
    return false;
}