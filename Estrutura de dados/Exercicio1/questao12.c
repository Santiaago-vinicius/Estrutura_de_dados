#include <stdio.h>
#include <stdlib.h>

int main(){
    int raio;
    int comprimento;
    float pi;
    pi = 3.14;
    printf("Insira o raio da circunferencia: ");
    scanf("%d", &raio);

    comprimento = (2 * raio * pi);
    printf("Comprimento da circunferencia = %d ", comprimento);

    return 0;
}