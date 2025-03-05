#include <stdio.h>

int main(void) {

    //declarando variáveis
    int n, soma = 0;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        soma += i; //soma = soma + i;
    }
    //imprime o resultado
    printf("A soma da serie e: %d\n", soma);

    return 0;
}