// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// const double PI = acos(-1);

//Calcula a área do círculo representado pelo raio fornecido.
float areaCirculo (float raio) {
	double PI = acos(-1);
	return PI*pow(raio, 2);

}

//Calcula a circunferência do círculo representado pelo raio fornecido.
float circunferenciaCirculo (float raio) {
	double PI = acos(-1);
	
	return 2*PI*raio;

}

int main() {
	float raio;

	printf("Raio: ");
	scanf("%f", &raio);
	
	printf("\nArea = %.2f", areaCirculo(raio));
	printf("\nCircunferencia = %.2f", circunferenciaCirculo(raio));
	
	
	return 0;
}