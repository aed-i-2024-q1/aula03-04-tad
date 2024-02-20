#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"
#include <stdbool.h>

struct Matriz {
  int **array;
  int rows;
  int cols;
};

bool is_valid_coords(Matriz* matriz, int row, int col) {
  return row >= 0 && row < matriz->rows && col >= 0 && col < matriz->cols;
}

bool is_valid_size(int size) {
  return size > 0;
}

Matriz* matriz_create(int rows, int cols) {
  if (!is_valid_size(rows) || !is_valid_size(cols)) {
    return NULL;
  }

  Matriz* matriz = malloc(sizeof(Matriz));

  matriz->array = malloc(sizeof(int*) * rows);
  for (int i = 0; i < rows; i++) {
    matriz->array[i] = malloc(sizeof(int) * cols);
  }
  matriz->rows = rows;
  matriz->cols = cols;

  return matriz;
}

void matriz_destroy(Matriz* matriz) {
  for (int i = 0; i < matriz->rows; i++) {
    free(matriz->array[i]);
  }
  free(matriz->array);
  free(matriz);
}

void matriz_print(Matriz* matriz) {
  for (int i = 0; i < matriz->rows; i++) {
    for (int j = 0; j < matriz->cols; j++) {
      printf("%d ", matriz->array[i][j]);
    }
    printf("\n");
  }
}

int matriz_get(Matriz* matriz, int row, int col) {
  if (!is_valid_coords(matriz, row, col)) {
    return ERROR_CODE;
  }
  return matriz->array[row][col];
}

void matriz_set(Matriz* matriz, int row, int col, int value) {
  if (!is_valid_coords(matriz, row, col)) {
    return;
  }
  matriz->array[row][col] = value;
}

int matriz_rows(Matriz* matriz) {
  return matriz->rows;
}

int matriz_cols(Matriz* matriz) {
  return matriz->cols;
}

