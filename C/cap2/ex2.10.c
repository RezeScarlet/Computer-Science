// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

float modulo(float n) {
  if(n<0){
    return(n*-1);
  } else {
    return(n);
  }
}
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

  if ((modulo(a - b) < c && c < a +b) && (modulo(a - c) < b && b < a +c) && (modulo(b - c) < a && a < b +c)) {
    if (a == b && a == c) {
      printf("Triangulo EQUILATERO");
    } else if (a == b || a == c || b == c) {
      printf("Triangulo ISOSCELES");
    } else {
      printf("Triangulo ESCALENO");      
    }
  } else {
    printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
  }
  
  
  return 0;
}