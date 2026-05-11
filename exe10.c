int main()
{
    int numero,ver;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    ver = (numero%2==0)&&(numero%5==0);


    printf("o numero e simultanealmente par e multiplo de 5 (1)sim (0) nao: %d",ver);

    return 0;
}