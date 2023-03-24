#include <stdio.h>
#include <stdlib.h>

int main() {
    float
    largura,
    altura;

    printf("Largura do retangulo: ");
    scanf("%f", &largura);
    printf("Altura do retangulo: ");
    scanf("%f", &altura);

    float
    perimetro = 2*altura + 2*largura,
    area = altura*largura;

    printf("Perimetro: %.2f \nArea: %.2f", perimetro, area);
    return 0;
}