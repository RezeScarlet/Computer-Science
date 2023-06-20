#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int r;
  int g;
  int b;

} Cor;

Cor novaCor( int vermelho, int verde, int azul );

void imprimirCor( const Cor *c );

int getVermelho( const Cor *c);
int getVerde( const Cor *c);
int getAzul( const Cor *c);

int main() {
  int vermelho;
  int verde;
  int azul;
  Cor cor;
  
  printf("Vermelho: ");
  scanf("%d", &vermelho);
  printf("Verde: ");
  scanf("%d", &verde);
  printf("Azul: ");
  scanf("%d", &azul);
  
  cor = novaCor(vermelho, verde, azul);
  printf("Cor: ");  
  imprimirCor(&cor);
  
  printf("\ngetVermelho(): %d", getVermelho(&cor));
  printf("\ngetVerde(): %d", getVerde(&cor));
  printf("\ngetAzul(): %d", getAzul(&cor));

  return 0;
}

Cor novaCor( int vermelho, int verde, int azul ) {
  Cor cor;
  if (vermelho > 255) {
    vermelho = 255;
  }
  if (vermelho < 0) {
    vermelho = 0;
  }
  if (verde > 255) {
    verde = 255;
  }
  if (verde < 0) {
    verde = 0;
  }
  if (azul > 255) {
    azul = 255;
  }
  if (azul < 0) {
    azul = 0;
  }
  cor.r = vermelho;
  cor.g = verde;
  cor.b = azul;

  return cor;
}

void imprimirCor( const Cor *c ) {
  printf("rgb( %d, %d, %d )", c->r, c->g, c->b);

}

int getVermelho( const Cor *c) {
  return c->r;

}

int getVerde( const Cor *c) {
  return c->g;

}

int getAzul( const Cor *c) {
  return c->b;

}
