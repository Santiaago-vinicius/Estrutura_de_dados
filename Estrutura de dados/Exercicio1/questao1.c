#include <stdio.h>
#include <stdlib.h>

int main(){
    float velocidade;
    float vel_ms;
    float vel_km;
    
    vel_ms = 3.6; 
    printf("Insira a velocidadee em m/s: ");
    scanf("%f", &velocidade);
    vel_km = (vel_ms * velocidade);
    
    printf("%.2f em m/s = %.2f em km/h ", velocidade, vel_km);
    return 0;

}