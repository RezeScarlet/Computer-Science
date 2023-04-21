// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
	int operacao;
	int i = 1;
	float saldo;
	float valor;

	printf("Saldo Inicial: ");
	scanf("%f", &saldo);
	printf("Operacoes:\n\t1) Deposito;\n\t2) Saque;\n\t3) Fim.\n");	
	


	while (i) {
		printf("Operacao desejada: ");
		scanf("%d", &operacao);
		
		switch (operacao) {
		case 1:
			printf("Valor a depositar: ");
			scanf("%f", &valor);
			saldo += valor;
			break;
		case 2:
			printf("Valor a sacar: ");
			scanf("%f", &valor);
			saldo -= valor;
			break;
		case 3:
			i = 0;
			break;
		default:
			printf("Operacao invalida.\n");
			break;
		}
	}

	if (saldo == 0) {
		printf("Saldo final: R$%.2f\n", saldo);
		printf("Sem saldo.");
		
	} else if (saldo > 0) {
		printf("Saldo final: R$%.2f\n", saldo);
		printf("Conta preferencial.");
		
	} else if (saldo < 0)	{
		printf("Saldo final: -R$%.2f\n", saldo*-1);
		printf("Conta devedora.");
		
	}
	
	
	
	
	
	return 0;
}