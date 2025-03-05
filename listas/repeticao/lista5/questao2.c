#include <stdio.h>

int main() {

    //declarando variáveis
    int i, n, soma = 0;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    //calculando a soma de 1 até 'n'
    for (i = 1; i <= n; i++) {

        soma += i;
    }

    //imprimindo o resultado
    printf("A soma de 1 até n e: %d\n", soma);

    return 0;
}