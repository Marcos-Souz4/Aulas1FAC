#include <stdio.h>

int main(void) {

    //declarando variáveis
    int n;
    float soma = 0.0;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        soma += 1.0 / i; //soma = soma + 1.0 / i;
    }
    //imprime o resultado
    printf("A soma da serie e: %.2f\n", soma);

    return 0;
}