#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1;
    
    printf("Forneca um numero inteiro: ");
    scanf("%d", &n1);

    int
    n2 = n1+1,
    n3 = n1-1;

    printf("Sucessor de %d: %d\nAntecessor de %d: %d", n1, n2, n1, n3);
    return 0;
}