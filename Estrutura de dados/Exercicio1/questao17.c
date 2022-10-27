#include <stdio.h>
#include <stdlib.h>

int main(){
    int kilograma;
    int grama;
    
    printf("Insira uma quantidade em Kg: ");
    scanf("%d", &kilograma);
    grama = kilograma * 1000;

    printf("O quantidade de gramas é = %dg", grama);
    return 0;
}