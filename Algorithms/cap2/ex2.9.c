#include <stdio.h>
#include <stdlib.h>

int main() {
  int
  quantL;
  float
  medidaL,
  perimetro;

  printf("Entre com a quantidade de lados: ");
  scanf("%d", &quantL);
  printf("Entre com a medida do lado: ");
  scanf("%f", &medidaL);
  
  if (quantL == 3){
    printf("TRIANGULO de perimetro %.2f", quantL*medidaL);
  } else if (quantL == 4) {
    printf("QUADRADO de area %.2f", medidaL*medidaL);
  } else if (quantL == 5) {
    printf("PENTAGONO");
  } else {
    printf("Poligono nao identificado");

  }

  return 0;
}