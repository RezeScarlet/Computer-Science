// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
  float
  a,
  b,
  c;

  printf("a: ");
  scanf("%f", &a);
  printf("b: ");
  scanf("%f", &b);
  printf("c: ");
  scanf("%f", &c);

  if ((abs(a - b) < c && c < a +b) && (abs(a - c) < b && b < a +c) && (abs(b - c) < a && a < b +c)) {
    if (a == b && a == c) {
      printf("Triangulo EQUILATERO");
    } else if (a == b || a == c || b == c) {
      printf("Triangulo ISOSCELES");
    } else {
      printf("Triangulo ESCALENO");
      
    }
  }
  
  
  return 0;
}