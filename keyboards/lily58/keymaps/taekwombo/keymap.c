#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ┌──────┬──────┬──────┬──────┬──────┬──────┐                    ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │  `   │   1  │   2  │   3  │   4  │   5  │                    │   6  │   7  │   8  │   9  │   0  │  -   │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Tab  │   Q  │   W  │   E  │   R  │   T  │                    │   Y  │   U  │   I  │   O  │   P  │  =   │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │  \   │   A  │   S  │   D  │   F  │   G  ├──────┐      ┌──────┤   H  │   J  │   K  │   L  │   ;  │  '   │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤   [  │      │   ]  ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │LSHIFT│   Z  │   X  │   C  │   V  │   B  ├──────┘      └──────┤   N  │   M  │   ,  │   .  │   /  │RSHIFT│
 * └──────┴──────┴───┬──┴───┬──┴───┬──┴───┬──┴───┐           ┌────┴─┬────┴─┬────┴─┬────┴─┬────┴──────┴──────┘
 *                   │ LALT │ LGUI │ LCTL │ SPC  │           │ ENT  │ RCTL │LOWER │ RALT │
 *                   └──────┴──────┴──────┴──────┘           └──────┴──────┴──────┴──────┘
 */

 [_QWERTY] = LAYOUT( \
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  \
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,   \
  KC_BSLS,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,  \
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC, KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,  \
                             KC_LALT, KC_LGUI, KC_LCTL, KC_SPC,  KC_ENT,   KC_RCTL, MO(_LOWER), KC_RALT                           \
),

/* LOWER
 * ┌──────┬──────┬──────┬──────┬──────┬──────┐                    ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │  F1  │  F2  │  F3  │  F4  │  F5  │  F6  │                    │  F7  │  F8  │  F9  │ F10  │ F11  │ F12  │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │  {   │   }  │      │                    │ ESC  │ HOME │ PGUP │ INS  │ PSCR │ SCRL │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │  [   │   ]  │      ├──────┐      ┌──────┤ BSPC │ END  │ PGDN │ DEL  │ APP  │ CAPS │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤      │      │      ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │  (   │   )  │      ├──────┘      └──────┤ LEFT │ DOWN │  UP  │ RGHT │ PAUS │      │
 * └──────┴──────┴───┬──┴───┬──┴───┬──┴───┬──┴───┐           ┌────┴─┬────┴─┬────┴─┬────┴─┬────┴──────┴──────┘
 *                   │      │RAISE │      │      │           │      │      │      │      │
 *                   └──────┴──────┴──────┴──────┘           └──────┴──────┴──────┴──────┘
 */

[_LOWER] = LAYOUT( \
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,     KC_F6,                    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   \
  KC_NO,   KC_NO,   KC_NO,   KC_LCBR, KC_RCBR,   KC_NO,                    KC_ESC,  KC_HOME, KC_PGUP, KC_INS,  KC_PSCR, KC_SCRL,  \
  KC_NO,   KC_NO,   KC_NO,   KC_LBRC, KC_RBRC,   KC_NO,                    KC_BSPC, KC_END,  KC_PGDN, KC_DEL,  KC_APP,  KC_CAPS,  \
  KC_NO,   KC_NO,   KC_NO,   KC_LPRN, KC_RPRN,   KC_NO,  KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PAUS, KC_NO,    \
                             KC_NO,   MO(_RAISE),KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO                                \
),

/* RAISE
 * ┌──────┬──────┬──────┬──────┬──────┬──────┐                    ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │RESET │      │      │      │      │      │                    │      │      │ WAKE │ SLEP │ PWR  │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │ BRIU │ MNXT │ VOLU │ MPLY │                    │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │ BRID │ MPRV │ VOLD │ MSTP ├──────┐      ┌──────┤      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤      │      │      ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │ MUTE │ MSEL ├──────┘      └──────┤      │      │      │      │      │      │
 * └──────┴──────┴───┬──┴───┬──┴───┬──┴───┬──┴───┐           ┌────┴─┬────┴─┬────┴─┬────┴─┬────┴──────┴──────┘
 *                   │      │      │      │      │           │      │      │      │      │
 *                   └──────┴──────┴──────┴──────┘           └──────┴──────┴──────┴──────┘
 */

[_RAISE] = LAYOUT( \
  RESET,   KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO,                    KC_NO,   KC_NO,   KC_WAKE, KC_SLEP, KC_PWR,  KC_NO,   \
  KC_NO,   KC_NO,   KC_BRIU, KC_MNXT, KC_VOLU,   KC_MPLY,                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   \
  KC_NO,   KC_NO,   KC_BRID, KC_MPRV, KC_VOLD,   KC_MSTP,                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   \
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MUTE,   KC_MSEL,KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   \
                             KC_NO,   KC_NO,     KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO                               \
)

};

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

const char *read_layer_state(void);
void set_keylog(keyrecord_t *record);
const char *read_keylog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    oled_write(read_layer_state(), false);
    oled_write(read_keylog(), false);
  }
  return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(record);
  }
  return true;
}

#endif // OLED_ENABLE

