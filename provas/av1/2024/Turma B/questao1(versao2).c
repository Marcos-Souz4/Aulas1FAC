#include <stdio.h>

int main() {

    //declaração de variáveis
    int i = 1, numero, metade = numero / 2;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    printf("Primeira metade dos valores que nao sao divisores de N: \n");
    while (i <= numero) {

        if (numero%i != 0) {

            printf("%d ", i);
        }        

        i++;
    }

    printf("Segunda metade com apenas valores pares: \n");
    while (i <= numero) {

        if () {


        }
        i += metade;
    }


    return 0;
}