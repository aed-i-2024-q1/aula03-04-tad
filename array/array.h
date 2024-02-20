#ifndef ARRAY_H
#define ARRAY_H

#include "element.h"

typedef struct Array Array;

Array* array_create(int size);
void array_destroy(Array* array);
void array_print(Array* array);
Element array_get(Array* array, int index);
void array_set(Array* array, int index, Element value);
int array_size(Array* array);

#endif