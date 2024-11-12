
 /* Copyright 2021 Dane Evans & 2024 Nick Scratch
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */
  // SOFLE RGB
#include <stdio.h>

#include QMK_KEYBOARD_H



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
  QK_GESC,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_BSLS,
  MO(4),    KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  _______,   _______, KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                 KC_LCTL, KC_LGUI, KC_LALT, LT(1,KC_SPC), KC_ENT,     KC_ENT, LT(1,KC_SPC),  KC_RALT, KC_LGUI, KC_RCTL
),

  [1] = LAYOUT(
  KC_GRV,  _______, _______, _______, _______, _______,                  _______, _______, _______, KC_MINS, KC_EQL,  KC_DEL,
  _______, _______, KC_PGUP, _______, _______, _______,                  _______, _______, _______, KC_LBRC, KC_RBRC, _______,
  _______, KC_HOME, KC_PGDN, KC_END,  _______, _______,                  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______,_______, _______, _______, _______, _______, _______,
                 _______, _______, _______, _______, _______,      MO(3), _______, _______, _______, _______
),

[2] = LAYOUT(
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_NUM,  XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_CIRC, KC_P7,  KC_P8,   KC_P9,   KC_ASTR, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_MINS, KC_P4,  KC_P5,   KC_P6,   KC_EQL,  KC_PIPE,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,_______,   _______,KC_PLUS, KC_P1,  KC_P2,   KC_P3,   KC_SLSH, _______,
              _______, _______, _______, _______, _______,   _______, _______,  KC_P0,   KC_PDOT, _______
),

[3] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______,
  RGB_MOD, _______, RGB_VAI, RGB_HUI, RGB_SAI, _______,                  _______, _______, _______, _______, _______, _______,
  _______, _______, RGB_VAD, RGB_HUD, RGB_SAD, _______,                  _______, _______, _______, _______, _______, _______,
  _______, _______, RGB_TOG, _______, _______, _______, _______, _______,_______, _______, _______, _______, _______, _______,
                 _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______
),

[4] = LAYOUT(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5                    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  
  _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, KC_F12,
  _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______,_______, _______, _______, _______, _______, _______,
                 _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______
),


/*
[8] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______,_______, _______, _______, _______, _______, _______,
                 _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______
),
*/

};



