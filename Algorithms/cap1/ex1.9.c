#include <stdio.h>
#include <stdlib.h>

int main() {
    int
    base,
    altura;

    printf("Base do triangulo: ");
    scanf("%d", &base);
    printf("Altura do triangulo: ");
    scanf("%d", &altura);

    int area = altura*base/2;

    printf("Area = %d", area);
    return 0;
}