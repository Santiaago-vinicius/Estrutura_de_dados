#include <stdio.h>
#include <stdlib.h>

int main(){
  float base;
  float altura;
  float area;

  printf("Insira a base do retangulo: ");
  scanf("%d", &base);
  printf("Insira a altura do retangulo: ");
  scanf("%d", &altura);
  area = base * altura;

  printf("A area vale : %.2f", area);

  return 0;

}