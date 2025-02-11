#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
      KC_ESC  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS , KC_EQL  , KC_BSPC ,
      KC_TAB  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    , KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_LBRC , KC_RBRC , KC_BSLS ,
      KC_CAPS , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    , KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT ,           KC_ENT  ,
      KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    , KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH ,                     KC_RSFT ,
      KC_LCTL , KC_LGUI , KC_LALT ,                     KC_SPACE,                                         KC_RALT , MO(1)   , MO(2)   , KC_RCTL
  ),
  [1] = LAYOUT(
      KC_GRV  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , _______,
      _______ , XXXXXXX , KC_UP   , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , KC_UP   , KC_SLCK , KC_PAUS , KC_HOME , KC_END  , KC_PSCR,
      _______ , KC_LEFT , KC_DOWN , KC_RGHT , XXXXXXX , XXXXXXX , XXXXXXX , KC_LEFT , KC_DOWN , KC_RGHT , KC_PGUP , KC_PGDN ,           _______,
      _______ , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , KC_INS  , KC_DEL  ,                     _______,
      _______ , _______ , _______ ,                     _______ ,                                         _______ , _______ , _______ , _______
  ),
  [2] = LAYOUT(
      RESET   , KC_MSTP , KC_VOLD , KC_VOLU , KC_MPRV , KC_MPLY , KC_MNXT , KC_MUTE , XXXXXXX , APL_MOD , APL_RGB , APL_RAT , APL_BRT , _______,
      _______ , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
      _______ , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,           _______,
      _______ , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                     _______,
      _______ , _______ , _______ ,                     _______ ,                                         _______ , _______ , _______ , _______
  ),
};
