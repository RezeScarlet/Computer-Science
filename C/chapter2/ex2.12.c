// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
  int
  h1,
  h2,
  m1,
  m2,
  t;

  printf("Idade Homem 1: ");
  scanf("%d", &h1);
  printf("Idade Homem 2: ");
  scanf("%d", &h2);
  printf("Idade Mulher 1: ");
  scanf("%d", &m1);
  printf("Idade Mulher 2: ");
  scanf("%d", &m2);

  if (h2>h1) {
    t = h1;
    h1 = h2;
    h2 = t;
  }
  if (m2>m1) {
    t = m1;
    m1 = m2;
    m2 = t;
  }

  printf("Idade homem mais velho + idade mulher mais nova: %d\n", h1+m2);
  printf("Idade homem mais novo * idade mulher mais velha: %d", h2*m1);

  return 0;
}