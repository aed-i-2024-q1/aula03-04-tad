#include <stdio.h>
#include <stdlib.h>

#include "array_dinamico.h"

#define INITIAL_CAPACITY 10

struct ArrayDinamico {
  Element *array;
  int size;
  int capacity;
};

void array_dinamico_resize(ArrayDinamico* array, int new_capacity);

ArrayDinamico* array_dinamico_create() {
  ArrayDinamico* array = malloc(sizeof(ArrayDinamico));

  array->array = malloc(sizeof(Element) * INITIAL_CAPACITY);
  array->size = 0;
  array->capacity = INITIAL_CAPACITY;

  return array;
}

void array_dinamico_destroy(ArrayDinamico* array) {
  free(array->array);
  free(array);
}

void array_dinamico_print(ArrayDinamico* array) {
  for (int i = 0; i < array->size; i++) {
    print_element(array->array[i]);
    printf(" ");
  }
  printf("\n");
}

void array_dinamico_add(ArrayDinamico* array, Element value) {
  if (array->size == array->capacity) {
    array_dinamico_resize(array, array->capacity * 2);
  }
  array->array[array->size] = value;
  array->size++;
}

void array_dinamico_resize(ArrayDinamico* array, int new_capacity) {
  Element *new_array = realloc(array->array, sizeof(Element) * new_capacity);

  if (new_array != NULL) {
    array->array = new_array;
    array->capacity = new_capacity;
  }
}

int array_dinamico_size(ArrayDinamico* array) {
  return array->size;
}

int array_dinamico_capacity(ArrayDinamico* array) {
  return array->capacity;
}

Element array_dinamico_get(ArrayDinamico* array, int index) {
  return array->array[index];
}

void array_dinamico_set(ArrayDinamico* array, int index, Element value) {
  array->array[index] = value;
}


