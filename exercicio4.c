#include <stdio.h>

int main()
{
    float s_atual, s_anterior;

    printf("informe o saldo anterior: ");
    scanf("%f", &s_anterior);

    s_atual = s_anterior *1.01;

    printf("saldo atual : %.2f", s_atual);

    return 0;
}