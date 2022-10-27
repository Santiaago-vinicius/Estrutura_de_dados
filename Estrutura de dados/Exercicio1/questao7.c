#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor_real;
    float percentual_real;
    
    printf("Insira um valor em real: ");
    scanf("%f", &valor_real);
    
    percentual_real = (valor_real * 0.70);
    printf("O valor percnetual será de: R$ %.2f", percentual_real);

    return 0;
}