#include <stdio.h>

int main(){

  float valor, ht, salario;

  printf("Informe horas trabalhadas e valor por hora: ");
  scanf("%f %f", &ht, &valor);

  salario = valor * ht;

  printf("O salario é %.2f\n", salario);

  return 0;
}