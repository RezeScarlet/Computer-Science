// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
  float
  n1,
  n2;

  char
  operacao;

  printf("N1: ");
  scanf("%f", &n1);
  printf("N2: ");
  scanf("%f", &n2);
  printf("Escolha uma operacao de acordo com o menu:\n\t+) Adicao;\n\t-) Subtracao;\n\t*) Multiplicacao;\n\t/) Divisao.\nOperacao: ");
  scanf("%c", &operacao);
  
  switch (operacao)
  {
  case '+':
    printf("%.2f %c %.2f = %.2f", n1, operacao, n2, n1+n2);
    break;
  case '-':
    printf("%.2f %c %.2f = %.2f", n1, operacao, n2, n1-n2);
    break;
  case '*':
  printf("%.2f %c %.2f = %.2f", n1, operacao, n2, n1*n2);
    break;
  case '/':
    printf("%.2f %c %.2f = %.2f", n1, operacao, n2, n1/n2);
    break;
  default:
    break;
  }

  return 0;
}