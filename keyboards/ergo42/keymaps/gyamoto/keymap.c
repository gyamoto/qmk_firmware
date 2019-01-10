#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define BASE 0
#define META 1
#define SYMB 2
#define GAME 3

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |  `   |   |   \  |   Y  |   U  |   I  |   O  |   P  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | LCtrl|   A  |   S  |   D  |   F  |   G  |  -   |   |   =  |   H  |   J  |   K  |   L  |   ;  |   '  |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | LSft |   Z  |   X  |   C  |   V  |  B   |  [   |   |   ]  |   N  |   M  |   ,  |   .  |   /  | Enter|
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | ESC  |      | SYMB | LAlt | META | LGUI |Space |   | Space| RGUI | SYMB | RAlt | RCtrl|      | RSft |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [BASE] = LAYOUT( \
    KC_TAB,  KC_Q,    KC_W,     KC_E,    KC_R,     KC_T,    KC_GRV,     KC_BSLS, KC_Y,    KC_U,     KC_I,    KC_O,    KC_P,    KC_BSPC, \
    KC_LCTL, KC_A,    KC_S,     KC_D,    KC_F,     KC_G,    KC_MINS,    KC_EQL,  KC_H,    KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    KC_LSFT, KC_Z,    KC_X,     KC_C,    KC_V,     KC_B,    KC_LBRC,    KC_RBRC, KC_N,    KC_M,     KC_COMM, KC_DOT,  KC_SLSH, KC_ENT, \
    KC_ESC,  XXXXXXX, MO(SYMB), KC_LALT, MO(META), KC_LGUI, KC_SPC,     KC_SPC,  KC_RGUI, MO(SYMB), KC_RALT, KC_RCTL, XXXXXXX, KC_RSFT \
  ),

  /* META
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |      |   1  |   2  |   3  |   4  |   5  |      |   |      |   6  |   7  |   8  |   9  |   0  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | LCtrl| Left | Down |  Up  | Right|      |      |   |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | LSft |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |      |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | Reset|      | SYMB | LAlt | META | LGUI |Space |   | Space| RGUI | SYMB | RAlt | RCtrl|      | RSft |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [META] = LAYOUT( \
    XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX,    XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
    _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,      KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, \
    _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______ \
  ),

  /* SYMB
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |      |   !  |   @  |   #  |   $  |   %  |  `   |   |   \  |   ^  |   &  |   *  |   (  |   )  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | LCtrl|      |      |      |      |      |      |   |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | LSft |      |      |      |      |      |      |   |      |      |      |      |      |  UP  |      |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | ESC  |      | SYMB | LAlt | META | LGUI |Space |   | Space| RGUI | SYMB | RAlt | LEFT | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [SYMB] = LAYOUT( \
    XXXXXXX, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), KC_LBRC,    KC_RBRC, S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, \
    _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT \
  )

};
