#include <stdio.h>
#include "action.h"
#include "lily58.h"

char keylog_str[6] = "[0x0]\0";

void set_keylog(keyrecord_t *record) {
  // 10 rows - values 0 to 9
  uint8_t row = record->event.key.row;
  // 5 cols - values 0 to 4
  uint8_t col = record->event.key.col;

  keylog_str[1] = row + '0';
  keylog_str[3] = col + '0';
}

const char* read_keylog(void) {
  return keylog_str;
}
