// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void decompoeData( int diaDoAno, int ano, int *mes, int *dia );

bool ehBissexto( int ano );

int main() {
	int diaDoAno;
	int dia;	
	int mes;
	int ano;

	printf("Dia do ano: ");
	scanf("%d", &diaDoAno);
	printf("Ano: ");
	scanf("%d", &ano);

	decompoeData(diaDoAno, ano, &mes, &dia);
	
	printf("O dia %d do ano %d cai no dia %d do mes %d.", diaDoAno, ano, dia, mes);
	
	
	return 0;
}

void decompoeData( int diaDoAno, int ano, int *mes, int *dia ) {
	int diasPorMes[12] = {31, (ehBissexto(ano))? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	*mes = 0;
	for (int i = 0; i < 12; i++) {
		printf("\n mes: %d | dias: %d", i+1, diasPorMes[i]);
		if (diaDoAno <= diasPorMes[i]) {
			*mes = i+1;
			*dia = diaDoAno;
			break;
			
		} else {
			diaDoAno -= diasPorMes[i];

		}
	}
}

bool ehBissexto( int ano ) {
	return (ano % 400 == 0 || ano % 4 ==0) ? true : false;
}