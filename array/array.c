#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include "element.h"

struct Array {
  Element *array;
  int size;
};

Array* array_create(int size) {
  Array* array = malloc(sizeof(Array));

  array->array = malloc(sizeof(Element) * size);
  array->size = size;

  return array;
}

void array_destroy(Array* array) {
  free(array->array);
  free(array);
}

void array_print(Array* array) {
  for (int i = 0; i < array->size; i++) {
    print_element(array->array[i]);
  }
  printf("\n");
}

void array_set(Array* array, int index, Element value) {
  if (index < 0 || index >= array->size) {
    return;
  }
  array->array[index] = value;
}

Element array_get(Array* array, int index) {
  if (index < 0 || index >= array->size) {
    return ERROR_CODE;
  }

  return array->array[index];
}

int array_size(Array* array) {
  return array->size;
}


