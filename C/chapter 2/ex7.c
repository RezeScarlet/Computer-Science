#include <stdio.h>
#include <stdlib.h>

int main() {
  float
  n1,
  n2;

  printf("Entre com um numero: ");
  scanf("%f", &n1);
  
  printf("Entre com outro numero: ");
  scanf("%f", &n2);

  if (n1+n2>10) {
    printf("Os numeros fornecidos foram %.2f e %.2f", n1, n2);
  } else {
    printf("A subtracao entre %.2f e %.2f e igual a %.2f", n1, n2, n1-n2);
  }
  
  return 0;
}