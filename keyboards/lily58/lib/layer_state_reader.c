#include QMK_KEYBOARD_H
#include <stdio.h>
#include "lily58.h"

char layer_state_str[24];

const char *read_layer_state(void) {
    switch (get_highest_layer(layer_state)) {
      case 0:
        snprintf(layer_state_str, sizeof(layer_state_str), "L: Qwerty");
        break;

      case 1:
        snprintf(layer_state_str, sizeof(layer_state_str), "L: Lower");
        break;

      case 2:
        snprintf(layer_state_str, sizeof(layer_state_str), "L: Raise");
        break;

      default:
        snprintf(layer_state_str, sizeof(layer_state_str), "L: Undef-%ld", layer_state);
  }

  return layer_state_str;
}
