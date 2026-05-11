#include <stdio.h>

/* Leia um caractere do teclado (char). Verifique se o caractere digitado é uma vogal mi
núscula (’a’, ’e’, ’i’, ’o’ ou ’u’). Lembre-se que em C caracteres são comparados como
inteiros.*/


int main()
{
    char letra;
    int vogal;

    printf("Digite um caractere: ");
    scanf("%c", &letra);

    vogal = (letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u');

    printf("E vogal minuscula? (1) sim (0) nao: %d", vogal);

    return 0;
}