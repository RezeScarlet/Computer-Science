#include <stdio.h>
#include <stdlib.h>

int main() {
  float
  C;

  printf("Temperatura em graus Celsius: ");
  scanf("%f", &C);  

  float
  F = 1.8*C+32;

  printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", C, F);
  
  return 0;
}