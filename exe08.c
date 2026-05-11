#include <stdio.h>

int main()
{
    int faltas, situacao;
    float media, nota, porcentagem;

    printf("Informe a quantidade de faltas, media parcial e nota final: ");
    scanf("%d%f%f", &faltas, &media, &nota);

    porcentagem = 100 * faltas / 30;

    situacao = (porcentagem <= 25) && (media >= 7 || (media + nota >= 10));

    printf("A situacao do aluno e (1) aprovado (0) reprovado: %d", situacao);

    return 0;
}