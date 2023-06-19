#include <stdio.h>
#include <stdlib.h>

typedef struct{
  float numerador;
  float denominador;

} Fracao;

Fracao somar( const Fracao *f1, const Fracao *f2 );

Fracao subtrair( const Fracao *f1, const Fracao *f2 );

Fracao multiplicar( const Fracao *f1, const Fracao *f2 );

Fracao dividir( const Fracao *f1, const Fracao *f2 );

void imprimirFracao( const Fracao *f );

int main() {
  Fracao f1;
  Fracao f2;
  Fracao soma;
  Fracao sub;
  Fracao mult;
  Fracao div;

  printf("Fracao 1");
  printf("\n\tNumerado: ");
  scanf("%f", &f1.numerador);
  printf("\tDenominador: ");
  scanf("%f", &f1.denominador);

  printf("Fracao 2");
  printf("\n\tNumerado: ");
  scanf("%f", &f2.numerador);
  printf("\tDenominador: ");
  scanf("%f", &f2.denominador);

  printf("\n");
  imprimirFracao(&f1);
  printf(" + ");
  imprimirFracao(&f2);
  printf(" = ");
  soma = somar(&f1, &f2);
  imprimirFracao(&soma);

  printf("\n");
  imprimirFracao(&f1);
  printf(" - ");
  imprimirFracao(&f2);
  printf(" = ");
  sub = subtrair(&f1, &f2);
  imprimirFracao(&sub);

  printf("\n");
  imprimirFracao(&f1);
  printf(" * ");
  imprimirFracao(&f2);
  printf(" = ");
  mult = multiplicar(&f1, &f2);
  imprimirFracao(&mult);
  
  printf("\n");
  imprimirFracao(&f1);
  printf(" / ");
  imprimirFracao(&f2);
  printf(" = ");
  div = dividir(&f1, &f2);
  imprimirFracao(&div);

}

Fracao somar( const Fracao *f1, const Fracao *f2 ){
  if (f1->denominador == f2->denominador) {
    Fracao soma = {
      f1->numerador + f2->numerador,
      f1->numerador
    };

    return soma;
  }

  Fracao soma = {
    .denominador = f1->denominador * f2->denominador
  };
  soma.numerador = soma.denominador / f1->denominador * f1->numerador + soma.denominador / f2->denominador * f2->numerador;

  return soma;
}

Fracao subtrair( const Fracao *f1, const Fracao *f2 ) {
  if (f1->denominador == f2->denominador) {
    Fracao sub = {
      f1->numerador - f2->numerador,
      f1->numerador
    };

    return sub;
  }
  
  Fracao sub = {
    .denominador = f1->denominador * f2->denominador
  };
  sub.numerador = sub.denominador / f1->denominador * f1->numerador - sub.denominador / f2->denominador * f2->numerador;

  return sub;
}

Fracao multiplicar( const Fracao *f1, const Fracao *f2 ) {
  Fracao mult = {
    f1->numerador * f2->numerador,
    f1->denominador * f2->denominador
  };
  return mult;
}

Fracao dividir( const Fracao *f1, const Fracao *f2 ) {
  Fracao div = {
    f1->numerador * f2->denominador,
    f1->denominador * f2->numerador
  };
  return div;
}

void imprimirFracao( const Fracao *f ) {
  printf("%.2f/%.2f", f->numerador, f->denominador);
}

