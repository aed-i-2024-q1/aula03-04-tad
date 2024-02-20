#ifndef STRING_BUFFER_H
#define STRING_BUFFER_H

typedef struct StringBuffer StringBuffer;

StringBuffer* string_buffer_create();
void string_buffer_destroy(StringBuffer* string_buffer);
void string_buffer_append(StringBuffer* string_buffer, char* string);
char* string_buffer_to_string(StringBuffer* string_buffer);

#endif