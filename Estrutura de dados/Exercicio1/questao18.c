#include <stdio.h>
#include <stdlib.h>

int main(){
    int metro;
    int centimetros;
    
    printf("Insira um valor em metros: ");
    scanf("%d", &metro);
    centimetros = metro * 100;

    printf("O valor em centimetros é = %d cm", centimetros);
    return 0;
}