#include <stdio.h>
#include <stdlib.h>

int main(){
  float salario;
  float aumento;
  float total;

  printf("Digite o valor do seu salario: ");
  scanf("%f" , &salario);

  aumento = salario * 0.75;
  total = salario + aumento;

  printf("o valor do aumento é: %.2f" , total);
    




  return 0;
}