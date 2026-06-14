// Copyright 2024 yangzheng20003 (@yangzheng20003)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "rgb_record/rgb_record.h"

enum layers {
    _BL = 0,
    _FL,
    _MBL,
    _MFL,
    _FBL,
    _FCL,
    _FDL,
};

#define ______ HS_BLACK

#include "process_combo.h" // Key Combos

// Tap Dance

#include QMK_KEYBOARD_H

enum {
    TD_GRV_TOGGLE,
    TD_HOME_PGUP,
    TD_END_PGDN,
};

// Tap Dance Grav: Tap Grav, Double Tap Toggle Layer 5 - IJKL to arrow keys
void dance_grv_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        tap_code(KC_GRV);
    } else if (state->count == 2) {
        layer_invert(5);
    }
};

// Home Tap Dance: Tap Home, Double tap Page Down
void dance_home_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        tap_code(KC_HOME);
    } else if (state->count == 2) {
        tap_code(KC_PGUP);
    }
};

// End Tap Dance: Tap End, Double tap Page Up
void dance_end_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        tap_code(KC_END);
    } else if (state->count == 2) {
        tap_code(KC_PGDN);
    }
};

void dance_grv_reset(tap_dance_state_t *state, void *user_data) {
};

void dance_home_reset(tap_dance_state_t *state, void *user_data) {
};

void dance_end_reset(tap_dance_state_t *state, void *user_data) {
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_GRV_TOGGLE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_grv_finished, dance_grv_reset),
    [TD_HOME_PGUP]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_home_finished, dance_home_reset),
    [TD_END_PGDN]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_end_finished,  dance_end_reset),
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BL] = LAYOUT( /* Base WIN 0*/
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_MUTE,
TD(TD_GRV_TOGGLE),KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,  
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,            KC_DEL,    
        KC_RCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_BSLS,  KC_ENT,   TD(TD_HOME_PGUP),          
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    TD(TD_END_PGDN),
        KC_LCTL,  KC_LCMD,  KC_LALT,                      KC_SPC,                                 KC_RALT,  LT(1, KC_APP), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [_FL] = LAYOUT( /* Base WIN 1*/
        _______,  KC_MYCM,  KC_MAIL,  KC_WSCH,  KC_WHOM,  KC_MSEL,  KC_MPLY,  KC_MPRV,  KC_MPLY,  KC_MNXT,  _______,  _______,  _______,  _______,  KC_SLEP,
        EE_CLR,   KC_BT1,   KC_BT2,   KC_BT3,   KC_2G4,   KC_USB,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,   KC_INS,  _______,  _______,  _______,  _______,            _______,
        KC_CAPS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  RGB_TOG,  _______,  _______,  _______,  _______,  _______, 
        MO(_FCL), _______,  _______,  _______,  KC_CALC,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  MO(_FBL), RGB_VAI,  _______,
         _______, GU_TOGG,  _______,                      HS_BATQ,                                _______,  _______,  HS_CT_A,  KC_MPLY,  RGB_VAD,  KC_MNXT),

    [_MBL] = LAYOUT( /* Base MAC 0 -> WIN 0 Default */
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_HOME,  
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,            KC_PGUP,    
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_BSLS,  KC_ENT,   KC_PGDN,          
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_END,
        KC_LCTL,  KC_LCMD,  KC_LALT,                      KC_SPC,                                 KC_RALT,  MO(_FL),  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [_MFL] = LAYOUT( /* Base MAC 1 -> WIN 1 Default */
        _______,  KC_MYCM,  KC_MAIL,  KC_WSCH,  KC_WHOM,  KC_MSEL,  KC_MPLY,  KC_MPRV,  KC_MPLY,  KC_MNXT,  _______,  _______,  _______,  RGB_MOD,  _______,
        EE_CLR,   KC_BT1,   KC_BT2,   KC_BT3,   KC_2G4,   KC_USB,   _______,  _______,  _______,  _______,  _______,  RGB_SPD,  RGB_SPI,  _______,  _______,   
        _______,  _______,  HS_DIR,   _______,  _______,  _______,  _______,  _______,  KC_INS,   _______,  KC_PSCR,  _______,  _______,            _______,  
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_TOG,  _______,  _______,  _______,  _______,  _______, 
        _______,  _______,  _______,  _______,  KC_CALC,  _______,  _______,  _______,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  MO(_FBL), RGB_VAI,  _______,
        _______,  _______,  _______,                      HS_BATQ,                                _______,  _______,  HS_CT_A,  RGB_SAI,  RGB_VAD,  RGB_SAD),
    [_FBL] = LAYOUT( /* Base */ 
        QK_BOOT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
        _______,  _______,  HS_DIR ,  _______,  BT_TEST,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,                      _______,                                _______,  _______,  _______,  _______,  _______,  _______),
    [_FCL] = LAYOUT( /* Base */ 
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
        _______,  _______,  _______,  _______,  _______,  _______,  KC_F8,    KC_PGUP,  KC_UP,    KC_PGDN,  KC_BSPC,  _______,  _______,            _______,  
        _______,  _______,  _______,  _______,  _______,  MO(_FDL), _______,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_ENT ,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_HOME,  KC_END,   KC_TAB,   _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,                      _______,                                _______,  _______,  _______,  _______,  _______,  _______),
    [_FDL] = LAYOUT( /* Base */ 
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,     _______,       _______,     _______,    _______,    _______,  _______,  _______,  
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,     _______,       _______,     _______,    _______,    _______,  _______,  _______, 
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MS_BTN1,  KC_MS_UP,      KC_MS_BTN2,  _______,    _______,    _______,            _______,  
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MS_LEFT,  KC_MS_DOWN,    KC_MS_RIGHT, KC_MS_BTN3, _______,    _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MS_WH_UP, KC_MS_WH_DOWN, KC_HOME,     KC_MS_BTN4, KC_MS_BTN5, _______,  _______,  _______,
        _______,  _______,  _______,                      _______,                                        _______,     _______,    _______,    _______,  _______,  _______),

};

	const uint16_t PROGMEM rgbrec_default_effects[RGBREC_CHANNEL_NUM][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
       ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,           ________,
       ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________, ________,                     ________,                               ________, ________, ________, ________, ________, ________),

    [1] = LAYOUT(
       ________, HS_RED,   HS_RED,   HS_RED,   ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, HS_RED,   HS_RED,   HS_RED,   HS_RED,   HS_RED,   ________, ________, ________, ________, ________, ________, ________, ________, ________,
       HS_RED,   HS_RED,   HS_RED,   HS_RED,   HS_RED,   ________, ________, ________, ________, ________, ________, ________, ________,           ________,
       ________, HS_RED,   HS_RED,   HS_RED,   ________, HS_RED,   ________, ________, ________, ________, ________, ________, ________, ________, ________,
       HS_RED,  ________,  ________, ________, ________, HS_RED,   ________, ________, ________, ________, ________, ________, ________, ________, ________,
       HS_RED,   ________, HS_RED,                       ________,                               ________, ________, ________, ________, ________, ________),

    [2] = LAYOUT(
       HS_BLUE,  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  ________, ________, ________, ________, ________, ________, ________,
       ________, HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  ________, ________, ________, ________, ________, ________, ________,           ________,
       ________, HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________, ________, HS_BLUE,  HS_BLUE,  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________, ________,                     ________,                               ________, ________, ________, ________, ________, ________),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(_______, _______)},
    [2] = {ENCODER_CCW_CW(_______, _______)},
    [3] = {ENCODER_CCW_CW(_______, _______)},
    [4] = {ENCODER_CCW_CW(_______, _______)},
    [5] = {ENCODER_CCW_CW(_______, _______)},
    [6] = {ENCODER_CCW_CW(_______, _______)},
};
#endif
// clang-format on


// Set white backlight when key has keymapping on layer 4, 5 and 6
#include "quantum.h"

// extern keymap_config_t keymap_config;

// Set max brightness
#define V_MAX 104

// Function to check if a key is transparent or none
static bool is_key_usable(uint16_t keycode) {
    return !(keycode == KC_NO || keycode == KC_TRNS);
}

// When layer 4, 5 or 6 active, set backlight to white on keys that have keymapping
bool rgb_matrix_indicators_user(void) {
    uint8_t layer = get_highest_layer(layer_state);

    if (layer == 4 || layer == 5 || layer == 6) {
        uint8_t v = rgb_matrix_config.hsv.v; // brightness (0–255)

        const uint8_t min_val = 0;
         
        for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
            for (uint8_t col = 0; col < MATRIX_COLS; col++) {
                uint16_t keycode = keymap_key_to_keycode(layer, (keypos_t){col, row});
                if (is_key_usable(keycode)) {
                    uint8_t led_index = g_led_config.matrix_co[row][col];
                    if (led_index != NO_LED) {
                        // Scale brightness but ensure it starts at min_val
                        uint8_t c = min_val + ((uint16_t)(255 - min_val) * v / V_MAX) / 2; // Set /4 for more equal brigthness

                        rgb_matrix_set_color(led_index, c, c, c);
                    }
                }
            }
        }

    }
    
    return true; // allow other effects to run if needed
};
