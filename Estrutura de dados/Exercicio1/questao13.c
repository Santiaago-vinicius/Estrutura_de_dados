#include <stdio.h>
#include <stdlib.h>

int main(){
    int raio;
    int volume;
    float pi;
    pi = 3.14;
    printf("Insira o raio da circunferencia: ");
    scanf("%d", &raio);

    volume = (4 * (raio*raio*raio) * pi)/3;
    printf("Volume da esfera = %d ", volume);

    return 0;
}