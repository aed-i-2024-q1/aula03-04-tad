#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string_buffer.h"

#include "inc/array_dinamico.h"

struct StringBuffer {
  ArrayDinamico* data;
};

StringBuffer* string_buffer_create() {
  StringBuffer* sb = malloc(sizeof(StringBuffer));

  sb->data = array_dinamico_create();

  return sb;
}

void string_buffer_destroy(StringBuffer* string_buffer) {
  array_dinamico_destroy(string_buffer->data);
  free(string_buffer);
}

void string_buffer_append(StringBuffer* string_buffer, char* string) {
  for (int i = 0; i < strlen(string); i++) {
    array_dinamico_add(string_buffer->data, string[i]);
  }
}

char* string_buffer_to_string(StringBuffer* string_buffer) {
    int size = array_dinamico_size(string_buffer->data) + 1;
    char* string = malloc(sizeof(char) * size);

    for (int i = 0; i < size - 1; i++) {
        string[i] = array_dinamico_get(string_buffer->data, i);
    }
    string[size - 1] = '\0';
    
    return string;
}

