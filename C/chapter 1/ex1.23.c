#include <stdio.h>
#include <stdlib.h>

int main() {
    int 
    anoNasc,
    anoAtual;
    printf("Ano de Nascimento: ");
    scanf("%d", &anoNasc);
    printf("Ano Atual: ");
    scanf("%d", &anoAtual);

    int idade = anoAtual-anoNasc;

    printf("Idade aproximada: %d anos", idade);
    return 0;
}