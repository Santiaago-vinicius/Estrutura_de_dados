#include <stdio.h>
#include <stdlib.h>

int main(){
    int Fire;
    int Celsius;
    
    printf("Insira um valor em graus F°: ");
    scanf("%d", &Fire);
    
    Celsius = ((5*Fire)-160)/9;
    printf("O valor em gruas Celsius é = %d C°", Celsius);

    return 0;
}