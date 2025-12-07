#include QMK_KEYBOARD_H

enum {
    BASE,
    SYMB,
    MEDIA,
    GAME,
    GAME2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_E,         KC_R,         KC_T,           KC_Y,    KC_U,         KC_I,         KC_O,   KC_P,
                                KC_A, KC_S, LALT_T(KC_D), LGUI_T(KC_F), KC_G,           KC_H,    RGUI_T(KC_J), RALT_T(KC_K), KC_L,   KC_SCLN,
                                KC_Z, KC_X, KC_C,         KC_V,         KC_B,           KC_N,    KC_M,         KC_COMM,      KC_DOT, KC_SLSH,
                                                          KC_SPC,       KC_LSFT,        KC_LCTL, TO(SYMB)),

    [SYMB] = LAYOUT_split_3x5_2(KC_1,   KC_2,    KC_3,     KC_4,     KC_5,           KC_6,    KC_7,    KC_8,   KC_9,    KC_0,
                                KC_ESC, KC_BSLS, KC_GRV,   KC_QUOT,  KC_NO,          KC_LBRC, KC_RBRC, KC_EQL, KC_MINS, KC_BSPC,
                                KC_TAB, KC_NO,   KC_NO,    KC_NO,    KC_NO,          KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_ENT,
                                                           TO(BASE), KC_LSFT,        KC_RALT, TO(MEDIA)),

    [MEDIA] = LAYOUT_split_3x5_2(KC_CAPS, KC_MPRV, KC_MNXT,  KC_MPLY,  KC_MINS,           KC_PPLS, KC_NO,   KC_UP,   KC_NO,    KC_PDOT,
                                 KC_ESC,  KC_VOLD, KC_VOLU,  KC_MUTE,  KC_PEQL,           KC_PMNS, KC_LEFT, KC_NO,   KC_RIGHT, KC_BSPC,
                                 KC_TAB,  UG_VALD, UG_VALU,  KC_NO,    QK_BOOT,           KC_NO,   KC_NO,   KC_DOWN, KC_NO,    KC_PENT,
                                                             TO(BASE), KC_LSFT,           KC_RALT, TO(GAME)),

    [GAME] = LAYOUT_split_3x5_2(KC_ESC,  KC_Q, KC_W,   KC_E,   KC_R,           KC_Y,      KC_U, KC_I,  KC_O,  KC_P,
                                KC_TAB,  KC_A, KC_S,   KC_D,   KC_F,           KC_H,      KC_J, KC_K,  KC_L,  KC_NO,
                                KC_LSFT, KC_Z, KC_X,   KC_C,   KC_V,           KC_N,      KC_M, KC_NO, KC_NO, KC_NO,
                                                       KC_SPC, KC_LCTL,        MO(GAME2), KC_TRNS),

    [GAME2] = LAYOUT_split_3x5_2(KC_1,  KC_2,  KC_3,  KC_4,  KC_5,           KC_6,    KC_7,  KC_8,  KC_9,  KC_0,
                                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,          KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,
                                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,          KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,
                                                      KC_NO, KC_NO,          KC_TRNS, KC_NO)
};
