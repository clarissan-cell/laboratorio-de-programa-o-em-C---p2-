#include <stdio.h>
int main()
{

    int numero, suc, ant;

    printf("informe um numero inteiro:");
    scanf ("%d, &numero");
    suc = numero + 1;
    ant = numero - 1;

    printf("o sucessor de %d é %d. /n", numero, suc);
    printf("o antecessor dr %d é %d.", numero, ant );

    return 0;
}