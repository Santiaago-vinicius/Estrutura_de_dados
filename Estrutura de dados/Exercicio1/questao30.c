#include <stdlib.h>
#include <stdio.h>

int main(){
    int valor, pretacoes, resto, value_f;

    printf("Insira um valor qualquer: ");
    scanf("%d", &valor);

    pretacoes = valor / 3;
    resto = valor % 3;
    value_f = valor - (pretacoes*2);

    printf("O valor da entrada será %d e o valor da pretacao sera %d", value_f, pretacoes);


    return 0;
}