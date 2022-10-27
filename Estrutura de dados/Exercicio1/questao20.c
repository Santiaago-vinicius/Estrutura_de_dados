#include <stdio.h>
#include <stdlib.h>

int main(){
    int horas;
    int horas_semanas;
    int horas_dias;

    printf("Insira a quantidade em horas: ");
    scanf("%d", &horas);

    horas_semanas = horas/168;
    horas_dias = horas/24;

    printf("%d Semanas, %d dias e %d horas.", horas_semanas, horas_dias, horas);

    return 0;
}