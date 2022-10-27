#include <stdio.h>
#include <stdlib.h>

int main(){
  float lado;
  float area;

  printf("Digite o lado do quadrado: ");
  scanf("%f", &lado);

  area = lado * lado;

  printf("area = %.2f", area);
  
}