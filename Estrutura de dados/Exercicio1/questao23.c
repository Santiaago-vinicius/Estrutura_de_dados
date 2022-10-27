#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero1, numero2, numero3;
    float media;
    
    printf("número 1 : ");
    scanf("%f", &numero1);
    printf("número 2: ");
    scanf("%f", &numero2);
    printf("número 3: ");
    scanf("%f", &numero3);

    media = (numero1+numero2+numero3)/3;

    printf("A média da soma seá: %.2f", media);


    return 0;
}