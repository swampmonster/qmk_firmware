/* Copyright 2018 sb
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layers {
    BASE,
    NAVR,
    NSSL,
    NSL,
};

// LED pins
#define TOP_LED B1
#define MIDDLE_LED B2
#define BOTTOM_LED B3

// Layer defines
#define L_SPC LT(NAVR, KC_SPC)
#define L_ENT LT(NSSL, KC_ENT)
#define L_BSP LT(NSL, KC_BSPC)

// Homerow mods
#define MT_LGUI LGUI_T(KC_A)
#define MT_LALT LALT_T(KC_S)
#define MT_LCTL LCTL_T(KC_D)
#define MT_LSFT LSFT_T(KC_F)
#define MT_LAGR ALGR_T(KC_X)
#define MT_RSFT RSFT_T(KC_J)
#define MT_RCTL RCTL_T(KC_K)
#define MT_RALT RALT_T(KC_L)
#define MT_RGUI TD(ODIA_CMD)
#define MT_RAGR ALGR_T(KC_DOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        KC_GESC,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,   KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_DEL,   KC_BSPC,
        KC_TAB,   MT_LGUI,  MT_LALT,  MT_LCTL,  MT_LSFT,  KC_G,   KC_H,     MT_RSFT,  MT_RCTL,  MT_RALT,  KC_QUOT,  KC_ENT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,   MO(3),    KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_LSFT,
        KC_LCTL,  KC_LALT,  KC_LGUI,  L_SPC,    L_ENT,    L_BSP,  KC_RGUI,  KC_RCTL
    ),
    [NAVR] = LAYOUT(
        RESET,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MUTE,  KC_VOLD,  KC_VOLU,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_SCLN,  KC_BSLS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
    [NSL] = LAYOUT(
        KC_TRNS,  KC_LBRC,  KC_7,  KC_8,     KC_9,     KC_RBRC,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_SCLN,  KC_4,  KC_5,     KC_6,     KC_EQL,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_1,  KC_2,     KC_3,     KC_BSLS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_0,  KC_MINS,  KC_PENT,  KC_PDOT,  KC_TRNS,  KC_TRNS
    ),
    [NSSL] = LAYOUT(
        KC_LPRN,  KC_LCBR,  KC_AMPR,  KC_ASTR,  KC_RPRN,  KC_RCBR,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_COLN,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_PLUS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_PIPE,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_LPRN,  KC_RPRN,  KC_UNDS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
    )
};

void matrix_init_user(void) {
    // Turn on indicator leds  
 
    // Top led
    setPinOutput(TOP_LED);
    writePinHigh(TOP_LED);

    // Middle led
    setPinOutput(MIDDLE_LED);
    writePinHigh(MIDDLE_LED);

    // Bottom led
    setPinOutput(BOTTOM_LED);
    writePinHigh(BOTTOM_LED);
}

