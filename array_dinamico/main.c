#include <stdio.h>
#include "array_dinamico.h"

int main(void) {
  ArrayDinamico* array = array_dinamico_create();

  for (int i = 0; i < 100; i++) {
    array_dinamico_add(array, i);
  }
  printf("size = %d\n", array_dinamico_size(array));
  printf("capacity = %d\n", array_dinamico_capacity(array));
  array_dinamico_print(array);
  array_dinamico_destroy(array);
  
  return 0;
}