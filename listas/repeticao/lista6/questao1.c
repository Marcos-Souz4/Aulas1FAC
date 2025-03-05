#include <stdio.h>
//declaração de constantes
#define QUANT 5

int main() {

    //declaração de variáveis
    int x, i, numero, cont = 0;

    printf("Digite o valor de x: \n");
    scanf("%d", &x);

    //solicitando mais valores
    for (i = 1; i <= QUANT; i++) {

        printf("Digite outros valores: \n");
        scanf("%d", &numero);

        //verificando se é múltiplo de 'x'
        if (numero%x == 0) {

            cont++;
        }   
    }

    //imprimindo o resultado
    printf("\n\nForam digitados %d multiplos de %d", cont, x);

    return 0;
}