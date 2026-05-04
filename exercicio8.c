#include <stdio.h>

int main(){

  int ano_nasc, ano_atual,idade;
  printf("informe ano de nascimento e o ano atual :");
  scanf ("%d%d",&ano_nasc,&ano_atual);

  idade = ano_atual - ano_nasc;

  printf("a sua idade é %d", idade);

    return 0; 
}