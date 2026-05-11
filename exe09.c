#include <stdio.h>

int main()
{
    int numero,intervalo;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    intervalo = (numero>10)&&(numero<50);


    printf("o numero %d pertence ao intervalo (1)sim (0) nao: %d",numero, intervalo);

    return 0;
}