#include <stdio.h>
#include <stdlib.h>

int main(){
    //declarando 
    float v_kmh;
    float v_ms;
    //input
    printf("Insira a velocidade em kmh: ");
    scanf("%f", &v_kmh);
    //atribuindo valor
    v_ms = v_kmh/3.6;
    printf("O valor em ms será: %.2f", v_ms);



    return 0;
}