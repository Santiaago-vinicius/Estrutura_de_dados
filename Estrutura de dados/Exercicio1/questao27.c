#include <stdlib.h>
#include <stdio.h>

int main(){
    float Custo_fabrica,Valor_imposto, Custo_carroNovo;
    float Porcentagem_distribuidor;
    printf("Insira o custo de fabrica: ");
    scanf("%f", &Custo_fabrica);
    
    Porcentagem_distribuidor = Custo_fabrica + (Custo_fabrica * 0.28);
    Valor_imposto = Custo_fabrica + (Custo_fabrica * 0.45);
    Custo_carroNovo = Porcentagem_distribuidor + Valor_imposto;

    printf("O valor do carro para o consumidor será %.2f R$ e o custo do distribuidor será de %.2f R$", Custo_carroNovo, Porcentagem_distribuidor);
    
    return 0;
}