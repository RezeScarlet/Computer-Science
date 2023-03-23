#include <stdio.h>
#include <stdlib.h>

int main() {
    float
    baseMaior,
    baseMenor,
    altura;

    printf("Base maior do trapézio: ");
    scanf("%f", &baseMaior);
    printf("Base menor do trapézio: ");
    scanf("%f", &baseMenor);
    printf("altura do trapézio: ");
    scanf("%f", &altura);

    float
    area = (baseMenor+baseMaior)*altura/2;

    printf("Area: %.2f", area);
    return 0;
}