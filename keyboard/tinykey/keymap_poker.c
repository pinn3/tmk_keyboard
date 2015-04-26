#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty */
  KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, \
	 TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RCTL,\
	 CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,RALT,\
	 LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,DEL, \
	 FN1, LALT,LCTL,END, PGDN,NO,  LGUI,EQL, PGUP,HOME,SPC, BSPC,ENT),

  /* 1: FN 1 */
  KEYMAP(TRNS,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, \
	 NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  LEFT,UP,  DOWN,RGHT,NO,  \
	 NO,  NO,  NO,  NO,  NO,  NO,  MYCM,NO,  MS_L,MS_U,MS_D,MS_R,NO,  \
	 NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  BTN1,BTN2,BTN3,NO,  \
	 TRNS,TRNS,NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO),
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
  [1] = ACTION_LAYER_TOGGLE(1)
};
