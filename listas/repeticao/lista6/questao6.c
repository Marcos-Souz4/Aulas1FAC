#include <stdio.h>
//declaração de constantes
#define QUANT 5

int main() {

    //declaração de variáveis
    int i, numero, maiorPar = -1, somaPares = 0, contadorPares = 0;
    float mediaPares = 0;

    //lendo os dados fornecidos pelo usuário
    for (i = 1; i <= QUANT; i++) {

        printf("Digite um numero: \n");
        scanf("%d", &numero);

        if (numero%2 == 0) {

            somaPares += numero;
            contadorPares++;

            if (numero > maiorPar) {

                maiorPar = numero;
            }
        }
    }

    //imprimindo o resultado
    printf("O maior numero par: %d\n", maiorPar);
    printf("Media dos pares: %.2f\n", mediaPares);

    return 0;
}