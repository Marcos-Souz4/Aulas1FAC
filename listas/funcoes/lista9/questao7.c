/* Implementar uma função que, dado um
número inteiro n, e o intervalo definido pelos
números a e b, determine quantos valores do
intervalo possuem divisores (sendo estes
diferentes de 1) que também sejam divisores
de n.

Exemplo:
n = 6
a = 10 e b = 20
Resposta = 7 (pois os números 10, 12, 14,
15, 16, 18 e 20 possuem divisores em
comum com o número 6). */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int divisores(int n, int a, int b);

//main
int main() {

    //declaração de variáveis
    int n, a, b, resultado;
    
    //pedindo ao usuário
    printf("\nEntre com o valor de 'n': ");
    scanf("%d", &n);

    printf("\nEntre com o valor de 'a': ");
    scanf("%d", &a);

    printf("\nEntre com o valor de 'b': ");
    scanf("%d", &b);

    resultado = divisores(n, a, b);

    //chamando a função
    printf("Quantidade de divisores: %d", resultado);

    return 0;
}

//funções
int divisores(int n, int a, int b) {

    //declaração de variáveis
    int i, j, contDivisores = 0;

    //variando todos o valores do intervalo
    for (i = a; i <= b; i++) {

        for (j = 2; j <= i; j++) {

            if ((i%j==0) && (n%j==0)) {

                contDivisores++;
                break;
            }
        }
    }

    //retornando o resultado
    return contDivisores;
}