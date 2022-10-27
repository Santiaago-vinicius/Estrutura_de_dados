#include <stdio.h>
#include <stdlib.h>

int main(){
  float base;
  float altura;
  float area;

  printf("Digite a base: ");
  scanf("%f", &base);
  printf("Digite a altura: ");
  scanf("%f", &altura);

  area = (base * altura)  / 2;

  printf("area = %.2f", area);

  return 0;

  
}