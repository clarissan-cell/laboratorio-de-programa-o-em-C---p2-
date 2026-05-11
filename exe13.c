#include <stdio.h>

int main()
{
    int x, y, quadrante;

    printf("Digite as coordenadas x e y: ");
    scanf("%d%d", &x, &y);

    quadrante = (x > 0) && (y > 0);

    printf("Pertence ao Primeiro Quadrante? (1) sim (0) nao: %d", quadrante);

    return 0;
}