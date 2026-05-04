#include <stdio.h>

int main(){

  float temp, vel, dist, litros;
  printf("informe o tempo e velocidade :");
  scanf ("%f%f",&temp,&vel );

  dist = vel * temp;
  litros = dist/12;

  printf("chico consumiu %.2f de gasolina para percorrer %2.f km" , litros,dist);

    return 0;
}
