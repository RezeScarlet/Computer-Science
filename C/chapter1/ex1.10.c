#include <stdio.h>
#include <stdlib.h>

int main() {
    int
    baseMaior,
    baseMenor,
    altura;

    printf("Base maior do trapezio: ");
    scanf("%d", &baseMaior);
    printf("Base menor do trapezio: ");
    scanf("%d", &baseMenor);
    printf("altura do trapezio: ");
    scanf("%d", &altura);

    int
    area = (baseMenor+baseMaior)*altura/2;

    printf("Area = %d", area);
    return 0;
}