#include <stdio.h>

int comb(int n, int k);

int main() {
  int n;
  int k;
  printf("Aula 06 - Exercicio 03 - Combinacao:\n");
  printf("Pessoas: ");
  scanf("%d", &n);
  printf("Grupos: ");
  scanf("%d", &k);
  printf("Quantidade de combinacoes C(%d, %d) =  %d\n", n, k, comb(n, k));
  return 0;
}

int comb(int n, int k) {
  if (k == 1) {
    return n;
  } 
  if (n == k) {
    return 1;
  }
  return comb(n - 1, k - 1) + comb(n - 1, k);
}
