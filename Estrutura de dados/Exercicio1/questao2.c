#include <stdio.h>
#include <stdlib.h>

int main(){
    float v_em_dolar;
    float v_do_dolar;
    float real;

    printf("Insira o valor que deseja converter(U$): ");
    scanf("%f", &v_em_dolar);
    real = v_em_dolar * v_do_dolar;

    printf("O valor em dolar em reais é: R$%.2f" ,real);



    return 0;
}