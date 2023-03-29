// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
  float
  n1,
  n2,
  m,
  nOpt;

  printf("Nota Av. 1: ");
  scanf("%f", &n1);
  printf("Nota Av. 2: ");
  scanf("%f", &n2);
  printf("Nota Optativa: ");
  scanf("%f", &nOpt);

  
  if ((nOpt > n1 || nOpt > n2) && nOpt != -1) {
    if (n2>n1) {
      n1 = nOpt;
    } else {
      n2 = nOpt;
    }
  }

  m = (n1+n2)/2;
  printf("Media: %.2f\n", m);
  
  if (m>=6) {
    printf("Aprovado!");
  } else if (m<4) {
    printf("Reprovado...");
  } else {
    printf("Exame.");
  }
  
  
  return 0;
}