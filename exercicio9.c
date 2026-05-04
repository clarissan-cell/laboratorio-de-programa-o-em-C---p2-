#include <stdio.h>

int main(){

  int anos,meses,dias, totaldias;
  printf("informe idade, meses e dias :");
  scanf ("%d%d%d",&anos,&meses,&dias );

  totaldias = (anos*365)+(meses*30)+dias;

  printf("o total dias da sua vida ate agora é de  %d", totaldias);

    return 0;
}