/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define VIAL_KEYBOARD_UID {0x3B, 0x6B, 0xA0, 0x29, 0x80, 0x56, 0xED, 0xD1}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

#define DYNAMIC_KEYMAP_LAYER_COUNT 5
#define TAPPING_TERM 180

//#define USE_MATRIX_I2C
#ifdef KEYBOARD_crkbd_rev1_legacy
#    undef USE_I2C
#    define USE_SERIAL
#endif

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

/* #ifdef RGBLIGHT_ENABLE */
/* #    undef RGBLED_NUM */
/* #    define RGBLIGHT_ANIMATIONS */
/* #    define RGBLED_NUM 54 */
/* #    undef RGBLED_SPLIT */
/* #    define RGBLED_SPLIT \ */
/*         { 27, 27 } */
/* #    define RGBLIGHT_LIMIT_VAL 120 */
/* #    define RGBLIGHT_HUE_STEP  10 */
/* #    define RGBLIGHT_SAT_STEP  17 */
/* #    define RGBLIGHT_VAL_STEP  17 */
/* #endif */

#ifdef RGB_MATRIX_ENABLE
#   define RGB_MATRIX_KEYPRESSES // reacts to keypresses
// #   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
#   define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
#   define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #   define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#    define RGB_MATRIX_HUE_STEP 8
#    define RGB_MATRIX_SAT_STEP 8
#    define RGB_MATRIX_VAL_STEP 8
#    define RGB_MATRIX_SPD_STEP 10

/* Enable the animations you want/need.  You may need to enable only a small number of these because       *
 * they take up a lot of space.  Enable and confirm that you can still successfully compile your firmware. */
// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
// enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
/* #    define ENABLE_RGB_MATRIX_TYPING_HEATMAP */
// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
/* #    define ENABLE_RGB_MATRIX_SOLID_SPLASH */
/* #    define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH */
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
