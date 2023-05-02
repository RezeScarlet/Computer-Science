#include <stdio.h>
#include <stdlib.h>

int main() {
  float
  n1,
  n2,
  n3,
  t;

  printf("N1: ");
  scanf("%f", &n1);
  printf("N2: ");
  scanf("%f", &n2);
  printf("N3: ");
  scanf("%f", &n3);  

  if (n1<n3) {
    t = n1;
    n1 = n3;
    n3 = t;
  }
  if (n1<n2) {
    t = n2;
    n2 = n1;
    n1 = t;
  }
  if (n2<n3) {
    t = n2;
    n2 = n3;
    n3 = t;
  }
  

  printf("A soma dos dois numeros maiores fornecidos e %.2f", n1+n2);
  
  return 0;
}