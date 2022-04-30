// Copyright 2022 Florian Brandner (@Florian Brandner)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _BL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        MO(_BL),      KC_APP,  KC_CALC,    KC_MAIL,
        KC_KP_1,      KC_KP_2, KC_KP_3,    KC_KP_4,
        KC_KP_5,      KC_KP_6, KC_KP_7,    KC_KP_8,
        KC_INS,       KC_DEL,  KC_BSPC,    KC_PENT,
        KC_PAGE_UP,   KC_HOME, KC_UP,      KC_END,
        KC_PAGE_DOWN, KC_LEFT, KC_DOWN,    KC_RIGHT
    ),
    [_BL] = LAYOUT(
        _______,  RGB_TOG,  RGB_MOD, RGB_RMOD,
        RGB_M_P,  RGB_M_B,  RGB_M_R, RGB_M_SW,
        RGB_M_SN, RGB_M_K,  RGB_M_X, RGB_M_G,
        RGB_M_T,  RGB_M_TW, _______, _______,
        RGB_HUI,  RGB_SAI,  RGB_VAI, _______,
        RGB_HUD,  RGB_SAD,  RGB_VAD, _______
    )
};
