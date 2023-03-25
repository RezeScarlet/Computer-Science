#include <stdio.h>
#include <stdlib.h>

int main() {
  float
  n;

  printf("Entre com um valor: ");
  scanf("%f", &n);

  if (n>20) {
    printf("A metade de %.2f e %.2f", n, n/2);
  } else {
    printf("O triplo de %.2f e %.2f", n, n*3);
  }
  
  return 0;
}