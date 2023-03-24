#include <stdio.h>
#include <stdlib.h>

int main() {
    int
    largura,
    altura;

    printf("Largura do retangulo: ");
    scanf("%d", &largura);
    printf("Altura do retangulo: ");
    scanf("%d", &altura);

    int
    perimetro = 2*altura + 2*largura,
    area = altura*largura;

    printf("Perimetro: %d \nArea: %d", perimetro, area);
    return 0;
}