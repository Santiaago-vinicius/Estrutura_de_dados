#include <stdio.h>
#include <stdlib.h>


int main(){
    int meses;
    int meses_anos;
    
    printf("Insira a quantidade de meses que deseja: ");
    scanf("%d", &meses);
    meses_anos = meses / 12;
    meses = meses%12;

    printf("o Valor correponde a %d anos e %d meses", meses_anos, meses);

    return 0;
}