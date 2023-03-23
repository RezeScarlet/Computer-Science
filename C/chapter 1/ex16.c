#include <stdio.h>
#include <stdlib.h>

int main() {
    float
    base,
    altura;

    printf("Base do triangulo: ");
    scanf("%f", &base);
    printf("Altura do triangulo: ");
    scanf("%f", &altura);

    float area = altura*base/2;

    printf("Area: %.2f", area);
    return 0;
}