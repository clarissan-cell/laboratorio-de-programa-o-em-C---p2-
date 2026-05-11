#include <stdio.h>

int main()
{
    int ano, bissexto;

    printf("Informe um ano: ");
    scanf("%d", &ano);

    bissexto = (ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0));

    printf("o ano e bissexto (1)sim (0) nao: %d", bissexto);

    return 0;
}