
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ryan(
        LALT(KC_LSFT),   LCTL(KC_P4),   LCTL(KC_P5)
    )
};
