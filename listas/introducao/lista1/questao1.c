#include <stdio.h>

void main() {

    //declarar variáveis
    float custoFabrica, porcentagemDistribuidor,impostos, custoConsumidor;

    printf("Digite o custo de fábrica: \n");
    scanf("%f", &custoFabrica);

    printf("Digite a porcentagem do distribuidor: \n");
    scanf("%f", &porcentagemDistribuidor);

    printf("Digite a porcentagem dos impostos(em cima do custo de fábrica): \n");
    scanf("%f", &impostos);

    //calculando o custo ao consumidor
    float custoConsumidor = custoFabrica + (custoFabrica * porcentagemDistribuidor) 
    + (custoFabrica * impostos);

    printf("O custo ao consumidor do carro será: %.2f\n", &custoConsumidor);
    return 0;
}