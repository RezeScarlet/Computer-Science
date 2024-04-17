// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int lePositivo();

bool saoAmigos(int n1, int n2);

int main() {
	int n[5][2];
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			printf("n%d[%d]: ", j+1, i);
			n[i][j] = lePositivo();		
			
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("\n%d e %d ", n[i][0], n[i][1]);
		if ( !saoAmigos(n[i][0], n[i][1]) ) {
			printf("nao ");
			
		}
		printf("sao amigos");

	}
	

	return 0;
}

int lePositivo() {
	int valor;
		do {

			scanf("%d", &valor);			
			if (valor <= 0)
			printf("Entre com um valor positivo!: ");
		}	while (valor <= 0);
	
	return valor;	
}

bool saoAmigos(int n1, int n2) {	
	int soma1 = 0;
	int soma2 = 0;

	for (int i = n1-1; i > 0; i--) {		
		if (n1 % i == 0) {			
			soma1 += i;
			
		}
	}
	for (int i = n2-1; i > 0; i--) {				
		if (n2 % i == 0) {
			soma2 += i;
			
		}
	}

	if (soma1 == n2 && soma2 == n1) {
		return true;
	} else {
		return false;
	}

}