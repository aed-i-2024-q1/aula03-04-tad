#ifndef ARRAY_DINAMICO_H
#define ARRAY_DINAMICO_H

#include "element.h"

typedef struct ArrayDinamico ArrayDinamico;

ArrayDinamico* array_dinamico_create();
void array_dinamico_destroy(ArrayDinamico* array);
void array_dinamico_print(ArrayDinamico* array);
Element array_dinamico_get(ArrayDinamico* array, int index);
void array_dinamico_set(ArrayDinamico* array, int index, Element value);
int array_dinamico_size(ArrayDinamico* array);
int array_dinamico_capacity(ArrayDinamico* array);
void array_dinamico_add(ArrayDinamico* array, Element value);

#endif