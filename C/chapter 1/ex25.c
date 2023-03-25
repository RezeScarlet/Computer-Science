#include <stdio.h>
#include <stdlib.h>

int main() {
  int
  F;

  printf("Temperatura em graus Fahrenheit: ");
  scanf("%d", &F);  

  float
  C = (F-32)/1.8;

  printf("%d graus Fahrenheit correspondem a %.2f graus Celsius", F, C);
  
  return 0;
}