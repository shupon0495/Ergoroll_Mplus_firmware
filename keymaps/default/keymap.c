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
        KC_A,   KC_B,
        KC_C,   KC_D,
        KC_E,   KC_F,
        KC_G,   KC_H
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   {ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_LEFT, KC_RIGHT)}
};
#endif