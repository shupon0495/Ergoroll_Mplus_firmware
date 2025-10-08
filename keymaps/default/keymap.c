// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐
     * │ W │ A │
     * ├───┼───┤
     * │ S │ D │
     * └───┴───┘
     */
    [0] = LAYOUT(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,
        KC_ESC, KC_TAB, KC_SPC, KC_NO, KC_NO,
        KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = {
        [0] = ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN),
        [1] = ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
        [2] = ENCODER_CCW_CW(KC_LEFT, KC_RIGHT),
        [3] = ENCODER_CCW_CW(KC_WH_D, KC_WH_U)
    }
};
#endif