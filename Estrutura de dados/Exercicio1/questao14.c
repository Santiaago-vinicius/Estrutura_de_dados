#include <stdio.h>
#include <stdlib.h>

int main(){
    float Celsius;
    float Fire;
    printf("Insira uma temperatura em graus Celsius: ");
    scanf("%f", &Celsius);

    Fire = ((9*Celsius)+160)/5;
    printf("O valor em graus F = %f", Fire);

    return 0;
}