#include <stdlib.h>
typedef struct {
  int linhas;
  int colunas;
  int **elementos;
} Matriz;

Matriz *cria_matriz(int linhas, int colunas) {
  Matriz *m = (Matriz *)malloc(sizeof(Matriz));
  m->linhas = linhas;
  m->colunas = colunas;
  m->elementos = (int **)malloc(linhas * sizeof(int *));
  for (int i = 0; i < linhas; i++) {
    m->elementos[i] = (int *)malloc(colunas * sizeof(int));
  }
  return m;
}

void libera_matriz(Matriz *m) {
  for (int i = 0; i < m->linhas; i++) {
    free(m->elementos[i]);
  }
  free(m->elementos);
  free(m);
}

int acessa_elemento(Matriz *m, int i, int j) { return m->elementos[i][j]; }

void define_elemento(Matriz *m, int i, int j, int valor) {
  m->elementos[i][j] = valor;
}
