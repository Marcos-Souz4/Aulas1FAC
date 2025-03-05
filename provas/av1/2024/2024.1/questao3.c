//declarando bibliotecas
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main() {

    //declaração de variáveis
    int n, i, j;

    printf("Entre com o valor de 'n': \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= i; j++) {

            printf("%d ", j);
        }
    }

    return 0;
}