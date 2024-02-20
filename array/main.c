#include <stdio.h>
#include "array.h"

int main(void) {
  Array* array = array_create(10);

  for (int i = 0; i < array_size(array); i++) {
    array_set(array, i, 97 + i);
  }
  array_print(array);
  array_destroy(array);

  return 0;
}