#include QMK_KEYBOARD_H

enum {
    BASE,
    SYMB,
    NUM,
    MEDIA,
    GAME,
    GAME2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_split_3x5_2(KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                    KC_Y,              KC_U,             KC_I,         KC_O,         KC_P,
                                LALT_T(KC_A), LCTL_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F), KC_G,                    KC_H,              RSFT_T(KC_J),     RGUI_T(KC_K), RCTL_T(KC_L), RALT_T(KC_SCLN),
                                KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,                    KC_N,              KC_M,             KC_COMM,      KC_DOT,       KC_SLSH,
                                                                          KC_SPC,       LT(NUM, KC_BSPC),        LT(MEDIA, KC_ESC), LT(SYMB, KC_ENT)),

    [SYMB] = LAYOUT_split_3x5_2(KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
                                KC_TAB,  KC_UNDS, KC_QUOT, KC_DQUO, KC_TILD,        KC_NO,   KC_LCBR, KC_LBRC, KC_RBRC, KC_RCBR,
                                KC_NO,   KC_MINS, KC_PLUS, KC_GRV,  KC_NO,          KC_NO,   KC_PIPE, KC_LABK, KC_RABK, KC_NO,
                                                           KC_NO,   KC_NO,          KC_NO,   KC_TRNS),

    [NUM] = LAYOUT_split_3x5_2(TO(GAME), KC_F1, KC_F2,  KC_F3,  KC_F4,             KC_NO, KC_7, KC_8, KC_9, KC_NO,
                                KC_NO,   KC_F5, KC_F6,  KC_7,   KC_F8,             KC_NO, KC_4, KC_5, KC_6, KC_NO,
                                QK_BOOT, KC_F9, KC_F10, KC_F11, KC_F12,            KC_NO, KC_1, KC_2, KC_3, KC_NO,
                                                        KC_NO,  KC_TRNS,           KC_NO, KC_0),

    [MEDIA] = LAYOUT_split_3x5_2(KC_NO,   KC_MPRV, KC_MNXT, KC_MPLY, KC_MPLY,           MS_LEFT, MS_DOWN, MS_UP,  MS_RGHT, KC_PGUP,
                                 KC_BRID, KC_BRIU, KC_VOLD, KC_VOLU, KC_MUTE,           KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT, KC_PGDN,
                                 KC_CAPS, MS_WHLD, MS_WHLU, MS_BTN1, MS_BTN2,           KC_NO,   KC_INS,  KC_DEL, KC_HOME, KC_END,
                                                            KC_NO,   KC_NO,             KC_TRNS, KC_NO),

    [GAME] = LAYOUT_split_3x5_2(KC_TAB,    KC_Q, KC_W,   KC_E,   KC_R,           KC_Y,     KC_U, KC_I,  KC_O,  KC_P,
                                KC_LSFT,   KC_A, KC_S,   KC_D,   KC_F,           KC_H,     KC_J, KC_K,  KC_L,  KC_NO,
                                MO(GAME2), KC_Z, KC_X,   KC_C,   KC_V,           KC_N,     KC_M, KC_NO, KC_NO, KC_NO,
                                                         KC_SPC, KC_LCTL,        TO(BASE), KC_NO),

    [GAME2] = LAYOUT_split_3x5_2(KC_1,    KC_2,  KC_3,  KC_4,  KC_5,                KC_6,  KC_7,  KC_8,  KC_9,  KC_0,
                                 KC_ESC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_G,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_B,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                        KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS)
};
