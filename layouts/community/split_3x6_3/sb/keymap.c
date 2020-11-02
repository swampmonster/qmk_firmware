// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

//#include "layout.h"
#include "keymap.h"

enum custom_keys {
    ODIA = SAFE_RANGE,
    ADIA,
};

#define ARNG A(KC_A)
#define D_MUTE A(C(KC_F1))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_split_3x6_3(
    KC_NO,   KC_Q,          KC_W,          KC_E,          KC_R,          KC_T,  KC_Y,  KC_U,          KC_I,          KC_O,            KC_P,     ARNG,
    KC_QUOT,   LGUI_T(KC_A),  LALT_T(KC_S),  LCTL_T(KC_D),  LSFT_T(KC_F),  KC_G,  KC_H,  LSFT_T(KC_J),  LCTL_T(KC_K),  LALT_T(KC_L),    ODIA,     ADIA,
    D_MUTE,  KC_Z,          ALGR_T(KC_X),  KC_C,          KC_V,          KC_B,  KC_N,  KC_M,          KC_COMM,       ALGR_T(KC_DOT),  KC_SLSH,  KC_NO,
    LT(MEDR, KC_ESC),  LT(NAVR, KC_TAB),  LT(MOUR, KC_SPC),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL)
  ),

  [NAVR] = LAYOUT_split_3x6_3(
    KC_NO, RESET,   X_NA,    X_NA,    X_NA,    X_NA,    KC_AGIN, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, X_NP, 
    KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, X_NA,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS, X_NP, 
    KC_NO, X_NA,    KC_ALGR, X_NA,    X_NA,    X_NA,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS, KC_NO,
    X_NA,    X_NA,    X_NA,    KC_ENT,  KC_BSPC, KC_DEL
  ),

  [MOUR] = LAYOUT_split_3x6_3(
    KC_NO, RESET,   X_NA,    X_NA,    X_NA,    X_NA,    X_NU,    X_NU,    X_NU,    X_NU,    X_NU, X_NP,
    KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, X_NA,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, X_NU, X_NP,
    KC_NO, X_NA,    KC_ALGR, X_NA,    X_NA,    X_NA,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, X_NU, KC_NO,
    X_NA,    X_NA,    X_NA,    KC_BTN1, KC_BTN3, KC_BTN2
  ),

  [MEDR] = LAYOUT_split_3x6_3(
    KC_NO, RESET,   X_NA,    X_NA,    X_NA,    X_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, X_NP,
    KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, X_NA,    KC_MPRV, KC__VOLDOWN, KC__VOLUP, KC_MNXT, X_NU, X_NP,
    KC_NO, X_NA,    KC_ALGR, X_NA,    X_NA,    X_NA,    X_NU,    X_NU,    X_NU,    X_NU,    X_NU, KC_NO,
    X_NA,    X_NA,    X_NA,    KC_MSTP, KC_MPLY, KC_MUTE
  ),

  [MBO] = LAYOUT_split_3x6_3(
    KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, X_NP,
    KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, X_NP,
    KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2
  ),

  [FUNL] = LAYOUT_split_3x6_3(
    KC_NO, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, X_NA,    X_NA,    X_NA,    X_NA,    RESET, X_NP,
    KC_NO, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, X_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, X_NP,
    KC_NO, KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, X_NA,    X_NA,    X_NA,    KC_ALGR, X_NA, KC_NO,
    KC_APP,  KC_SPC,  KC_TAB,  X_NA,    X_NA,    X_NA
  ),

  [NSL] = LAYOUT_split_3x6_3(
    KC_NO, KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, X_NA,    X_NA,    X_NA,    X_NA,    RESET, X_NP,
    KC_NO, KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  X_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, X_NP,
    KC_NO, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, X_NA,    X_NA,    X_NA,    KC_ALGR, X_NA, KC_NO,
    KC_DOT,  KC_0,    KC_MINS, X_NA,    X_NA,    X_NA
  ),

  [NSSL] = LAYOUT_split_3x6_3(
    KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, X_NA,    X_NA,    X_NA,    X_NA,    RESET, X_NP,
    KC_NO, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, X_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, X_NP,
    KC_NO, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, X_NA,    X_NA,    X_NA,    KC_ALGR, X_NA, KC_NO,
    KC_LPRN, KC_RPRN, KC_UNDS, X_NA,    X_NA,    X_NA
  )
};

void keyboard_post_init_user(void) {
  rgblight_sethsv_noeeprom(HSV_BLUE);
}

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_master) {
        return OLED_ROTATION_270;
    } else {
        return rotation;
    }
}

void render_crkbd_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

//void render_default_layer_state(void) {
//    oled_write_P(PSTR("Lyout"), false);
//    switch (get_highest_layer(default_layer_state)) {
//        case _QWERTY:
//            oled_write_P(PSTR(" QRTY"), false);
//            break;
//    }
//}

//void render_layer_state(void) {
//    oled_write_P(PSTR("LAYER"), false);
//    oled_write_P(PSTR("Lower"), layer_state_is(_LOWER));
//    oled_write_P(PSTR("Raise"), layer_state_is(_RAISE));
//}

void render_keylock_status(uint8_t led_usb_state) {
    oled_write_P(PSTR("Lock:"), false);
    oled_write_P(PSTR(" "), false);
    oled_write_P(PSTR("N"), led_usb_state & (1 << USB_LED_NUM_LOCK));
    oled_write_P(PSTR("C"), led_usb_state & (1 << USB_LED_CAPS_LOCK));
    oled_write_ln_P(PSTR("S"), led_usb_state & (1 << USB_LED_SCROLL_LOCK));
}

void render_mod_status(uint8_t modifiers) {
    oled_write_P(PSTR("Mods:"), false);
    oled_write_P(PSTR(" "), false);
    oled_write_P(PSTR("S"), (modifiers & MOD_MASK_SHIFT));
    oled_write_P(PSTR("C"), (modifiers & MOD_MASK_CTRL));
    oled_write_P(PSTR("A"), (modifiers & MOD_MASK_ALT));
    oled_write_P(PSTR("G"), (modifiers & MOD_MASK_GUI));
}

void render_bootmagic_status(void) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    oled_write_P(PSTR("BTMGK"), false);
    oled_write_P(PSTR(" "), false);
    oled_write_P(logo[0][0], !keymap_config.swap_lctl_lgui);
    oled_write_P(logo[1][0], keymap_config.swap_lctl_lgui);
    oled_write_P(PSTR(" "), false);
    oled_write_P(logo[0][1], !keymap_config.swap_lctl_lgui);
    oled_write_P(logo[1][1], keymap_config.swap_lctl_lgui);
    oled_write_P(PSTR(" NKRO"), keymap_config.nkro);
}

void render_status_main(void) {
    /* Show Keyboard Layout  */
    //render_default_layer_state();
    render_keylock_status(host_keyboard_leds());
    render_mod_status(get_mods());
    render_bootmagic_status();
}

void oled_task_user(void) {
    if (is_master) {
        render_status_main();  // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        render_crkbd_logo();
        //oled_write_P(PSTR("BOOB"), false);
    }
}
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case ODIA:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_QUOT) SS_UP(X_LSFT) SS_TAP(X_O));
            }
            return false;
            break;
        case ADIA:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_QUOT) SS_UP(X_LSFT) SS_TAP(X_A));
            }
            return false;
            break;
    }
    return true;
}
