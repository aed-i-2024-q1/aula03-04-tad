#include "string_buffer.h"

#include <stdio.h>
#include <stdlib.h>

int main() {
    StringBuffer* string_buffer = string_buffer_create();

    string_buffer_append(string_buffer, "Hello,");
    string_buffer_append(string_buffer, " ");
    string_buffer_append(string_buffer, "everybody! ");
    string_buffer_append(string_buffer, "Welcome to ");
    string_buffer_append(string_buffer, "AED-I!");

    char* string = string_buffer_to_string(string_buffer);

    printf("%s\n", string);

    free(string);
    string_buffer_destroy(string_buffer);

    return 0;
}