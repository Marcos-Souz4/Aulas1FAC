#include <stdio.h>
//declaração de constantes
#define QUANT 10

int main() {

    //declaração de variáveis
    int i, y, numero;
    float x;

    //pedindo os valores de 'x' e 'y'
    printf("Digite o valor de x: \n");
    scanf("%f", &x);

    printf("Digite o valor de y: \n");
    scanf("%d", &y);

    //lendo mais valores
    for (i = 1; i <= QUANT; i++) {

        printf("Digite um numero: \n");
        scanf("%d", &numero);
    }   

    //imprimindo o resultado
    printf("");

    return 0;
}