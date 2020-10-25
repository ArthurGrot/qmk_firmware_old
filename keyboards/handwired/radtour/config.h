#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x6060
#define DEVICE_VER 0x0001
#define MANUFACTURER Arthur Grot
#define PRODUCT Arthurs Keyboard
#define DESCRIPTION DIY Keyboard

/* power settings */
#define USB_MAX_POWER_CONSUMPTION 500
#define USB_POLLING_INTERVAL_MS 10

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 18

/* key matrix pins */
#define MATRIX_ROW_PINS \
    { D4, D5, D7, E0, E1, C0 }
#define MATRIX_COL_PINS \
    { B1, B2, B3, A0, B0, F5, E6, A1, A2, F7, A7, A6, A5, A4, C7, C3, C2, C1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* RGB Backlight Configuration */

#define RGB_DI_PIN D0
#ifdef RGB_DI_PIN
    #define RGBLED_NUM 23
    #define RGBLIGHT_LIMIT_VAL 150
    #define RGBLIGHT_HUE_STEP 4
    #define RGBLIGHT_SAT_STEP 8
    #define RGBLIGHT_VAL_STEP 25
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_TWINKLE
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() (keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)))

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#endif
