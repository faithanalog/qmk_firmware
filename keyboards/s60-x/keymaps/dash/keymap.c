#include "s60-x.h"


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
//

// Bottom Layer
#define _BL 0

// Function Layer
#define _FL 1

// Media Layer
#define _MD 2

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BL] = KEYMAP_ANSI(
  KC_ESC ,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_MINS, KC_EQL,KC_BSPC, \
  KC_TAB ,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,KC_LBRC,KC_RBRC,KC_BSLS, \
  MO(_FL),   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,KC_SCLN,KC_QUOT,         KC_ENT,  \
  KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_RSFT, \
  KC_LCTL,KC_LGUI,KC_LALT,                  KC_SPC,                       KC_RALT,KC_RGUI,MO(_MD),KC_RCTL),

[_FL] = KEYMAP_ANSI(
  KC_GRV, KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,KC_DEL , \
  KC_TILD,_______,_______,_______,_______,_______,KC_HOME,KC_PGDN,KC_PGUP,KC_END ,_______,_______,_______,_______, \
  _______,_______,_______,_______,_______,_______,KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,_______,_______,        KC_INS , \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, \
  _______,_______,_______,                _______,                        _______,_______,_______,_______),
  /*_______,KC_F14 ,KC_F15 ,KC_MUTE,KC_VOLD,KC_VOLU,KC_MPLY,KC_MPRV,KC_MNXT,KC_F16 ,KC_F17 ,KC_F18 ,KC_F19 ,_______, \*/
[_MD] = KEYMAP_ANSI(
  KC_MUTE,KC_VOLD,KC_VOLU,KC_MPLY,KC_MPRV,KC_MNXT,KC_F16 ,KC_F17 ,KC_F18 ,KC_F19 ,KC_F20 ,KC_F14 ,KC_F15 ,_______, \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,        _______, \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, \
  _______,_______,_______,                _______,                        _______,_______,_______,_______),
};

enum function_id {
    DUMMY
};

const uint16_t PROGMEM fn_actions[] = {
};

const uint8_t PROGMEM media_keys[] = {
};


void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
}

void matrix_init_user() {
    /*default_layer_set(0);*/
    /*if (eeconfig_read_default_layer() != 0) {*/
        /*eeconfig_update_default_layer(0);*/
    /*}*/
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    xprintf("Layer: %lu, Default: %lu\n", layer_state, default_layer_state);
    xprintf("Col: %X, Row: %X, Code: %04X, State: %d\n", record->event.key.col,
            record->event.key.row, keycode, record->event.pressed);
    return true;
}
