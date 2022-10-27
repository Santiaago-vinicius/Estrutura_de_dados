#include <stdio.h>
#include <stdlib.h>

int main(){
    //declarando variaveis
    int numero_1;
    int numero_2;
    int divisao;
    int resto;
    //input
    printf("Insira um valor: ");
    scanf("%d", &numero_1);
    printf("Insira outro valor: ");
    scanf("%d", &numero_2);
    //atribuindo valores
    divisao = (numero_1/numero_2);
    resto = (numero_1%numero_2);
    
    printf("O quociente da divisão é: %d", divisao);
    printf("O resto da divisão é: %d", resto);
    

    return 0;
}