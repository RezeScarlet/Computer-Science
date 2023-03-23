#include <stdio.h>
#include <stdlib.h>

int main() {
    int
    baseMaior,
    baseMenor,
    altura;

    printf("Base maior do trapézio: ");
    scanf("%d", &baseMaior);
    printf("Base menor do trapézio: ");
    scanf("%d", &baseMenor);
    printf("altura do trapézio: ");
    scanf("%d", &altura);

    int
    area = (baseMenor+baseMaior)*altura/2;

    printf("Area: %d", area);
    return 0;
}