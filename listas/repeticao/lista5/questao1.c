#include <stdio.h>

int main() {

    //declaração de variáveis
    int i, numero;

    //obtendo valor de 'n'
    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);

    //Calculando os números pares iguais ou inferiores a 'n'
    for (i = 0; i <= numero; i++) {

        //verificando se 'i' é par
        if (i%2 == 0) {

            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}