// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	float real;
	float imaginario;

} Complexo;

Complexo somar(const Complexo *c1, const Complexo *c2);

void imprimirComplexo(const Complexo *c);

int main() {
	Complexo c1;
	Complexo c2;
	Complexo soma;
	
	printf("Complexo 1");
	printf("\n\tParte real: ");
	scanf("%f", &c1.real);
	printf("\tParte imaginario: ");
	scanf("%f", &c1.imaginario);

	printf("Complexo 2");
	printf("\n\tParte real: ");
	scanf("%f", &c2.real);
	printf("\tParte imaginario: ");
	scanf("%f", &c2.imaginario);
	
	soma = somar(&c1, &c2);
	
	printf("\n");
	imprimirComplexo(&c1);
	printf(" + ");
	imprimirComplexo(&c2);
	printf(" = ");
	imprimirComplexo(&soma);
	
	return 0;
}

Complexo somar(const Complexo *c1, const Complexo *c2) {
	Complexo soma = {
		.real = c1->real + c2->real,
		.imaginario = c1->imaginario + c2->imaginario

	};

	return soma;
}

void imprimirComplexo(const Complexo *c) {
	printf("(%.2f + %.2fi)", c->real, c->imaginario);
	
}