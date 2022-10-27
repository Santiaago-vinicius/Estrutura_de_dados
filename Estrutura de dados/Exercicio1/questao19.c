#include <stdio.h>
#include <stdlib.h>

int main(){
    int metro;
    int quilometro;
    
    printf("Insira um valor em metros: ");
    scanf("%i", &metro);
    

    quilometro = metro / 1000;
    printf("O valor digitado corresponde a %i metros e a %i     quilometros", metro,  quilometro);

    return 0;
}