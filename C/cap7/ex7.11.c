// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool numeroCorreto(int n);
int obtemDigito(int n);
int obtemNumero(int n);
int calculaDigito(int n);

int main() {
	int valor;

	printf("Numero: ");
	scanf("%d", &valor);

	if (valor >= 10 && valor <= 99999) {
		
		printf("\nNumero completo: %d", valor);
		
		printf("\nNumero: %d", obtemNumero(valor));

		printf("\nDigito: %d", obtemDigito(valor));
		
		printf("\nDigito calculado: %d", calculaDigito(valor));
		
		

		if (numeroCorreto(valor)) {
			printf("\nO numero fornecido esta correto!");
			
		} else { 
			printf("\nO numero fornecido esta incorreto!");

		}
	}	

	return 0;
}


bool numeroCorreto(int n) {
	if (obtemDigito(n) == calculaDigito(n)) {
		return true;
		
	} else {
		return false;

	}
}

int obtemDigito(int n) {
	return n % 10;
}

int obtemNumero(int n) {
	return n/10;
}

int calculaDigito(int n) {
	n /= 10;
	int digito;
	int identificador = 0;
	int peso = 2;

	while (n > 0) {
		digito = n % 10;
		identificador += digito * peso;
		peso++;
		n /= 10;
	}

	identificador = identificador % 11;
	identificador = 11 - identificador;
	
	if (identificador == 11 || identificador == 10) {
		return 0;

	} else {
		return identificador;

	}
}