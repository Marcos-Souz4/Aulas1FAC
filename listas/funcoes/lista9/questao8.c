/* Desenvolver uma função que exiba todos os
números primos inferiores a determinado valor
inteiro N. */

//importação de bibliotecas
#include <stdio.h>

//protótipo da função
void primos(int n);

//main
int main() {

    //declarando variáveis
    int n;

    //pedindo ao usuário
    printf("Entre com o valor de 'n': \n");
    scanf("%d", &n);

    //chamando a função
    primos(n);

    return 0;
}

//função
void primos(int n) {

    //declaração de variáveis
    int i, j, cont;

    //iterando de 'i' até menor que 'n'
    for (i = 2; i < n; i++) {

        cont = 0;

        //verificando se tem mais de 2 divisores 
        for (j = 1; j <= i; j++) {

            if (i%j==0) {

                cont++;
            }
        }

        //verificando se é primo
        if (cont == 2) {

            printf("%d ", i);
        }

    }
}