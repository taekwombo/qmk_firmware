#include <stdio.h>
#include "action.h"
#include "lily58.h"

char keylog_str[24] = {};

void set_keylog(keyrecord_t *record) {
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d", record->event.key.row, record->event.key.col);
}

const char *read_keylog(void) {
  return keylog_str;
}
