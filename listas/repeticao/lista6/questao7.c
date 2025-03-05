#include <stdio.h>
//declaração de constantes
#define QUANT 10

int main() {

    //declaração de variáveis
    int i, numero, somaNumero = 0, menorNumero = 100, somaUltimos5 = 0;
    float mediaUltimos5;

    //pedindo ao usuário
    for (i = 1; i <= QUANT; i++) {

        printf("Digite um numero: \n");
        scanf("%d", &numero);

        if(i <= 3) {

            somaNumero += numero;
        }

        if (i >= 4 && i <= 7) {

            if (numero < menorNumero) {

                menorNumero = numero;
            }
        }
        
        if (i >= 5 && i <= QUANT) {

            somaUltimos5 += numero;
        }
    }
    
    //calculando média
    mediaUltimos5 = somaUltimos5 / 5;

    //imprimindo resultado
    printf("Soma dos 3 primeiros: %d\n", somaNumero);
    printf("Menor numero entre 4 e 7: %d\n", menorNumero);
    printf("Media dos ultimos 5 valores: %.2f\n", mediaUltimos5);

    return 0;
}