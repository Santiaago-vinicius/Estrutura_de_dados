#include <stdlib.h>
#include <stdio.h>

int main(){
    int valor, notas, notas_50,notas_20, notas_10, notas_5, notas_2;
    printf("Insira um valor em R$ qualquer:");
    scanf("%d", &valor);

    notas_50 = valor / 50;
    notas = valor%50;
    notas_20 = notas/20;
    notas = notas%20;
    notas_10 = notas/10;
    notas = notas%10;
    notas_5 = notas/5;
    notas = notas%5;
    notas_2 = notas/2;


    printf("Os valor digitado corresponde a %d cedulas de 50.\n", notas_50);
    printf("Os valor digitado corresponde a %d cedulas de 20.\n", notas_20);
    printf("Os valor digitado corresponde a %d cedulas de 10.\n", notas_10);
    printf("Os valor digitado corresponde a %d cedulas de 5.\n", notas_5);
    printf("Os valor digitado corresponde a %d cedulas de 2.\n", notas_2);


    return 0;
}