#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x3127
#define DEVICE_VER		0x0001
#define MANUFACTURER    bartohz - 
#define PRODUCT         16 Key Macropad w/ Encoder

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 5

/* key matrix pins  for beccas board*/
#define MATRIX_ROW_PINS { C6, D7, E6, B4 }
#define MATRIX_COL_PINS { B1, F7, F6, F5, D4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0x12, 0x38, 0xBC, 0xFF, 0x33, 0xBE, 0x10, 0x52}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

#define ENCODERS_PAD_A { D1 }
#define ENCODERS_PAD_B { D0 }
#define VIAL_ENCODER_DEFAULT { KC_A, KC_B, KC_C, KC_D, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }	
