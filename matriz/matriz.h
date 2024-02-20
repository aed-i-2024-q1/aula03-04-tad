#ifndef MATRIZ_H
#define MATRIZ_H

typedef struct Matriz Matriz;

#define ERROR_CODE -1

Matriz* matriz_create(int rows, int cols);
void matriz_destroy(Matriz* matriz);
void matriz_print(Matriz* matriz);
int matriz_get(Matriz* matriz, int row, int col);
void matriz_set(Matriz* matriz, int row, int col, int value);
int matriz_rows(Matriz* matriz);
int matriz_cols(Matriz* matriz);

#endif