#include <stdio.h>

int main() {

    //declarando variáveis
    int n, i;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    //calculando os divisores de 'n'
    for (i = 1; i <= n; i++) {

        //calculando se 'i' é divisível por 'n'
        if (n%i == 0) {

            printf("%d", i);
        }
    }

    return 0;
}