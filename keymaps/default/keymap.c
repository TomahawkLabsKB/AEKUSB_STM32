// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "aek2stm32.h"

/* 
 * Layer 0: Base Layer (Mac/Apple Style)
 * Layer 1: Function/Media Layer
 */

#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base Layer (_BL) */
    [_BL] = LAYOUT(
        // Row 0
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_BSPC, KC_F13,  KC_F14,  KC_F15,  KC_NO,   KC_NO,   KC_NO,
        // Row 1
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_INS,  KC_HOME, KC_PGUP, KC_NUM_LOCK, KC_PEQL, KC_PSLS, KC_MUTE,
        // Row 2
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_DEL,  KC_END,  KC_PGDN, KC_P7,   KC_P8,   KC_P9,   KC_PAST,
        // Row 3
        MO(_FL), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_BSLS, KC_NO,   KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_PMNS,
        // Row 4
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO,   KC_RSFT, KC_NO,   KC_UP,   KC_NO,   KC_P1,   KC_P2,   KC_P3,   KC_PPLS,
        // Row 5
        KC_LCTL, KC_LALT, KC_LGUI, KC_NO,   KC_NO,   KC_NO,   KC_SPC,  KC_NO,   KC_NO,   KC_RGUI, KC_NO,   KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,   KC_NO,   KC_PDOT, KC_PENT
    ),

    /* Function Layer (_FL) */
    [_FL] = LAYOUT(
        // Row 0
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT, _______, _______, _______, _______, _______, _______,
        // Row 1
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 2
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 3
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 4
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 5
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};