#include <stdio.h>
#include <stdlib.h>

int main() {
  int
  C;

  printf("Temperatura em graus Celsius: ");
  scanf("%d", &C);  

  float
  F = 1.8*C+32;

  printf("%d graus Celsius correspondem a %.2f graus Fahrenheit", C, F);
  
  return 0;
}