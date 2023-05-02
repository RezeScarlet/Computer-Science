#include <stdio.h>
#include <stdlib.h>

int main() {
  int
  aulas;
  float
  salHora,
  INSS;
  printf("Valor da hora/aula: ");
  scanf("%f", &salHora);
  printf("Quantidade de aulas: ");
  scanf("%d", &aulas);
  printf("Porcentagem de desconto do INSS: ");
  scanf("%f", &INSS);

  printf("Salario Liquido: %.2f", salHora*aulas*(1-INSS/100));
  return 0;
}