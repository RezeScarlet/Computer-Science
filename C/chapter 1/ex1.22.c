#include <stdio.h>
#include <stdlib.h>

int main() {
    float valorInicial, valorFinal;
    printf("Valor do produto: ");
    scanf("%f", &valorInicial);
    valorFinal = valorInicial*0.91;
    printf("Preco de venda com 9%% de desconto: %.2f", valorFinal);
    return 0;
}