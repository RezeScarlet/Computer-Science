#include <stdio.h>

void HanoiTower(int n, int origem, int destino, int auxiliar);
void Move(int origem, int destino);

int main() {
  int n;
  printf("Aula 06 - Exercicio 01 c - Torre de Hanoi:\n");

  printf("Numero de discos: ");
  scanf("%d", &n);

  HanoiTower(n, 1, 3, 2);
}

void HanoiTower(int n, int origem, int destino, int auxiliar) {
  if (n > 0) {
    HanoiTower(n - 1, origem, auxiliar, destino);
    Move(origem, destino);
    HanoiTower(n - 1, auxiliar, destino, origem);
  }
}
void Move(int origem, int destino) {
  printf("Mover disco da Torre %d para a Torre %d\n", origem, destino);
}

