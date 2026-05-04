#include <stdio.h>

int main()
{
    float numero, terca;

    printf("Escreva um numero real qualquer: ");
    scanf("%f", &numero);

    terca = numero / 3;

    printf("A terca parte do numero é: %2.f", terca);

    return 0;
}
