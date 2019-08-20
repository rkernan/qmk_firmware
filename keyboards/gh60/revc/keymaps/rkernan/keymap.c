#include QMK_KEYBOARD_H

// split backspace layout
#define LAYOUT_60_ansi_split_bs( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K49,\
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, \
    K40, K41, K42,           K45,                     K4A, K4B, K4C, K4D  \
) { \
    { K00, K01,   K02, K03,   K04,   K05, K06,   K07,   K08,   K09,   K0A, K0B, K0C,   K0D }, \
    { K10, K11,   K12, K13,   K14,   K15, K16,   K17,   K18,   K19,   K1A, K1B, K1C,   K1D }, \
    { K20, K21,   K22, K23,   K24,   K25, K26,   K27,   K28,   K29,   K2A, K2B, KC_NO, K2D }, \
    { K30, KC_NO, K32, K33,   K34,   K35, K36,   K37,   K38,   K39,   K3A, K3B, KC_NO, K3D }, \
    { K40, K41,   K42, KC_NO, KC_NO, K45, KC_NO, KC_NO, KC_NO, K49, K4A, K4B, K4C,   K4D }  \
}

// layers
#define _QW 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // QUERTY layer
  [_QW] = LAYOUT_60_ansi_split_bs(
      KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
      KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
      MO(_FL), KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(_FL), KC_RGUI, KC_RCTL
      ),
  // function layer
  [_FL] = LAYOUT_60_ansi_split_bs(
      KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS, KC_DEL,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_END, KC_PGUP, KC_PGDN, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
      ),
};
