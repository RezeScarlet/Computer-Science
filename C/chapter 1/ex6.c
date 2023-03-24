#include <stdio.h>
#include <stdlib.h>

int main() {
    int 
    n1,
    n2;

    printf("Primeiro Numero: ");
    scanf("%d", &n1);
    printf("Segunda Número: ");
    scanf("%d", &n2);
    
    int 
    sum = n1+n2,
    sub = n1-n2,
    mul = n1*n2,
    div = n1/n2;

    printf("%d + %d = %d \n", n1, n2, sum);
    printf("%d - %d = %d \n", n1, n2, sub);
    printf("%d * %d = %d \n", n1, n2, mul);
    printf("%d / %d = %d \n", n1, n2, div);
    return 0;
}