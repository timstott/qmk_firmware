#include QMK_KEYBOARD_H

#define _____ KC_TRNS

enum layers {
  BL,
  SL,
  FL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Base Layer (Default)
   *
   * ,-----------------------------------------------------------------------------------------.
   * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |  Enter |
   * |----------------------------------------------------------------------------------       +
   * | Ctrl    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |  \   |      |
   * |-----------------------------------------------------------------------------------------+
   * | Shift |  ~  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |     Shift     |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl |  Alt  |  Cmd  |              |  ESC  |            |  Cmd |     |     |     |     |
   * `-----------------------------------------------------------------------------------------'
   */
  [BL] = LAYOUT_60_iso_split(
    KC_ESC,    KC_1,      KC_2,      KC_3,      KC_4,             KC_5,             KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,
    KC_TAB ,   KC_Q,      KC_W,      KC_E,      KC_R,             KC_T,             KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_LBRC,   KC_RBRC,
    KC_LCTL,   KC_A,      KC_S,      KC_D,      KC_F,             KC_G,             KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,   KC_NUHS,   KC_ENT,
    KC_LSFT,   KC_GRV,    KC_Z,      KC_X,      KC_C,             KC_V,             KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_RSFT,
    KC_LCTL,   KC_LALT,   KC_LGUI,   KC_LSFT,   LT(FL, KC_ESC),   LT(SL, KC_SPC),   KC_RGUI,   KC_RALT,   KC_NO,     KC_NO
  ),

  [SL] = LAYOUT_60_iso_split(
    _____,     KC_F1,     KC_F2,     KC_F3,     KC_F4,            KC_F5,            KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,    _____,
    _____,     KC_EXLM,   KC_AT,     KC_HASH,   KC_DOLLAR,        KC_PERC,          KC_CIRC,   KC_AMPR,   KC_ASTR,   KC_NO,     KC_NO,     KC_NO,     KC_NO,
    _____,     KC_LBRC,   KC_RBRC,   KC_LCBR,   KC_RCBR,          KC_NO,            KC_NO,     KC_LPRN,   KC_RPRN,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     _____,
    _____,     KC_NO,     KC_NO,     KC_NO,     KC_EQL,           KC_PLUS,          KC_NO,     KC_MINS,   KC_UNDS,   KC_VOLD,   KC_VOLU,   KC_MUTE,   KC_RSFT,
    _____,     KC_LALT,   KC_LGUI,   _____,     _____,            _____,            KC_RGUI,   KC_RALT,   KC_NO,     KC_NO
  ),


  [FL] = LAYOUT_60_iso_split(
    _____,     KC_F1,     KC_F2,     KC_F3,     KC_F4,            KC_F5,     KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,    _____,
    _____,     KC_NO,     KC_NO,     KC_NO,     KC_NO,            KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
    _____,     KC_NO,     KC_NO,     KC_NO,     KC_NO,            KC_NO,     KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   KC_NO,     KC_NO,     KC_NO,     _____,
    _____,     KC_NO,     KC_NO,     KC_NO,     KC_NO,            KC_NO,     KC_MPRV,   KC_MPLY,   KC_MNXT,   KC_VOLD,   KC_VOLU,   KC_MUTE,   KC_RSFT,
    _____,     KC_LALT,   KC_LGUI,   _____,     _____,            _____,     KC_RGUI,   KC_RALT,   KC_NO,     RESET
  ),
};