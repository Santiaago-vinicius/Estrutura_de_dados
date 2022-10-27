#include <stdio.h>
#include <stdlib.h>

int main(){
    int quilometro;
    int metros;
    
    printf("Insira um valor em Km: ");
    scanf("%d", &quilometro);
    metros = quilometro * 1000;

    printf("O valor em metros é = %dm", metros);
    return 0;
}