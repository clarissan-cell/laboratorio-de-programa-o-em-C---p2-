#include <stdio.h>

int main()
{
    float a,b,c;
    int triangulo;

    printf("Digite tres valores: ");
    scanf("%f%f%f", &a, &b, &c);

    triangulo = (a < b + c) && (b < a + c) && (c < a + b);

    printf("Pode formar triangulo? (1) sim (0) nao: %d", triangulo);

    return 0;
}