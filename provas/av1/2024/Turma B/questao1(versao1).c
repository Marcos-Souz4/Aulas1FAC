#include <stdio.h>

int main() {

    //declaração de variáveis
    int numero, metade, i;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);

    printf("Primeira metade dos valores que nao sao divisores de N: \n");
    metade = numero/2;
    for(i = 1; i <= metade; i++) {

        if (numero%i != 0) {

            printf("%d ", i);
        }
    }

    printf("Segunda metade mostrando apenas os numeros pares: \n");
    for (i = metade + 1; i <= numero; i += 2) {

        printf("%d ", i);
    }   

    return 0;
}