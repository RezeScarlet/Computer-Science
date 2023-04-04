// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char
      l;
  float
      n;
  printf("Escolha uma operacao de acordo com o menu:\n\tC) Celsius -> Fahrenheit;\n\tF) Fahrenheit -> Celsius.\nOpcao: ");
  scanf(" %c", &l);

  switch (l)
  {
  case 'C':
    printf("Entre com a temperatura em graus Celsius: ");
    scanf("%f", &n);
    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", n, 1.8 * n + 32);

    break;
  case 'F':
    printf("Entre com a temperatura em graus Fahrenheit: ");
    scanf("%f", &n);
    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", n, (n - 32) / 1.8);

    break;
  default:
    printf("Opcao invalida!");

    break;
  }
  return 0;
}