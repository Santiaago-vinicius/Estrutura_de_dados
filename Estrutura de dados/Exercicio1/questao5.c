#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero[3];
    int numero_invertido;
    int i;
    int j;
    i = numero;
    j = 0;
    
    printf("Insira um número de 3 dígitos: ");
    scanf("%d", &numero);
    
    while(i > 0){
        numero_invertido = numero[i];
        while(j < numero){
            numero_invertido = numero[j];
            i--;
            j++;

        }
    }

    printf("Número invertido: %d", numero_invertido);

    return 0;
}