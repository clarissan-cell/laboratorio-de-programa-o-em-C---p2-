#include <stdio.h>

int main(){

  int hora, minuto, segundo, totalseg;
  printf("informe hora, minuto e segundo :");
  scanf ("%d%d%d",&hora,&minuto,&segundo );

  totalseg = (hora*3600)+(minuto*60)+segundo;

  printf("o total de segundos do dia é  %d", totalseg);

    return 0;
}