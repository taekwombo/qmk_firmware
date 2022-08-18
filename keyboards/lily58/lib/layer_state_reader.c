#include QMK_KEYBOARD_H
#include <stdio.h>
#include "lily58.h"

const char* read_layer_state(void) {
    switch (get_highest_layer(layer_state)) {
      case 0:
        return "[Q]\0";

      case 1:
        return "[L]\0";

      case 2:
        return "[R]\0";

      default:
        return "[U]\0";
  }
}
