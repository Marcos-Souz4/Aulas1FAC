#include <stdio.h>

int main() {

    //declaração de variáveis
    int i, nElementos, numero, peso, somaPesos = 0, somaProdutos;
    float mediaPonderada = 0;

    printf("Digite o numero de elementos: \n");
    scanf("%d", &nElementos);

    for (i = 1; i <= nElementos; i++) {

        printf("Digite um numero: \n");
        scanf("%d", &numero);

        printf("Digite o peso desse numero: \n");
        scanf("%d", &peso);

        somaPesos += peso;

        somaProdutos += numero*peso;
    }

    if (somaPesos != 0) {

        somaProdutos /= somaPesos;
    }

    //imprimindo o resultado
    printf("\nA media ponderada e: %.2f", mediaPonderada);

    return 0;
}