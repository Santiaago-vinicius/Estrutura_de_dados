#include <stdio.h>
#include <stdlib.h>

int main(){
  int anos;
  int cigarros;
  float valor_gasto;
  float valor_carteira;

  printf("Há quantos anos você fuma?: ");
  scanf("%d", &anos);
  printf("Quantos cigarros por dia?:  ");
  scanf("%d", &cigarros);
  printf("Quanto custa uma carteira de cigarro?: ");
  scanf("%f", &valor_carteira);

  valor_gasto = (365 * anos) * cigarros * (valor_carteira/20);
  printf("Total gasto: %.2f", valor_gasto);
  





  return 0;
}