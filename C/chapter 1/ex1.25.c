#include <stdio.h>
#include <stdlib.h>

int main() {
  float
  F;

  printf("Temperatura em graus Fahrenheit: ");
  scanf("%f", &F);  

  float
  C = (F-32)/1.8;

  printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", F, C);
  
  return 0;
}