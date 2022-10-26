#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float vel;
    float valor_ms;
    float r;

    
    valor_ms = 3.6;
    
    printf("Insira uma velocidade em m/s: ");
    scanf("%f", &vel);
    r = vel * valor_ms;

    //print
    printf("%.2f velocidade (m/s) = %2f km/h", vel, r);




    return 0;
}