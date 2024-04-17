// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculaDigito(int n);

int main() {
	int n;
	do {
		printf("Numero: ");
		scanf("%d", &n);
		
		
	} while (n < 1 || n > 9999);

	printf("Digito verificador de %d: %d", n, calculaDigito(n));
	

	return 0;
}

int calculaDigito(int n) {
	int tamanho = 0;
	int digitos[4];
	int identificador = 0;
	for (int i = 3; i >= 0; i--) {
		if (n >= pow(10, i)) {
			tamanho += 1;
			digitos[i] = n/pow(10, i);
			n -= pow(10, i)*digitos[i];
						 
		}
				
	}
	
	for (int i = tamanho + 1; i > 1; i--) {
		identificador += i * digitos[i-  2];
	
	}

	identificador = 11 - identificador % 11;
	
	if (identificador == 11 || identificador == 10) {
		return 0;

	} else {
		return identificador;
	}

}