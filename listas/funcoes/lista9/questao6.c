/* Implementar uma função que, dado um
número inteiro N, exiba uma sequência de
números como as ilustradas nos exemplos a
seguir:
Exemplo 1: N = 3
(1 2) (1 3) (2 1) (2 3) (3 1) (3 2)
Exemplo 2: N = 5
(1 2) (1 3) (1 4) (1 5) (2 1) (2 3) (2 4) (2 5) (3 1)
(3 2) (3 4) (3 5) (4 1) (4 2) (4 3) (4 5) (5 1) (5 2) (5
3) (5 4) */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void sequencia(int n);

//main
int main() {

    //declaração de variáveis
    int n;

    //pedindo ao usuário
    printf("\nEntre com o valor de 'n': \n");
    scanf("%d", &n);

    //chamando a função
    sequencia(n);

    return 0;
}

//funções
void sequencia(int n) {

    //declaração de variáveis
    int i, j;

    //parte principal
    for (i = 1; i <= n; i++) {

        for (j = 1; j <= n; j++) {
            
            if (i!=j) {

                printf("(%d %d)", i, j);
            }
        }
    }
}    