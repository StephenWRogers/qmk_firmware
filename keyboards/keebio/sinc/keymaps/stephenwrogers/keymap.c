#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_80_iso(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_NO,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,  KC_NO,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,
    MO(1),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,  KC_ENT,
    KC_LSPO, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC, KC_RSPC, KC_RSPC,
    KC_LCTL, KC_LWIN, KC_LALT, KC_SPC,  KC_SPC,  MO(1),   KC_SPC,  KC_SPC,  KC_RALT, KC_RWIN,KC_LEFT, KC_RCTL, KC_RCTL, KC_NO
  ),
  [1] = LAYOUT_80_iso(
    KC_MUTE,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,
    KC_NO,   RGB_M_B, RGB_M_R, RGB_M_SW,RGB_M_SN,RGB_M_X, RGB_M_G, RGB_M_TW,KC_NO,   KC_NO,   KC_NO,   BL_DEC,  BL_INC,   KC_NO,  KC_NO,     KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_UP,   KC_NO,   KC_NO,   RGB_HUI, RGB_HUD,   KC_NO,
    KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_RIGHT,KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RGB_MOD, MAGIC_TOGGLE_NKRO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_ENT,  KC_ENT,  KC_TRNS, KC_ENT,  KC_ENT,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
  )
};
