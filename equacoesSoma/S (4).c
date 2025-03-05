#include <stdio.h>

int main(void) {

    //declarando variáveis
    int n;
    float soma = 0.0;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &n);

    int sinal = 1; //variável para alternar o sinal
    for (int i = 1; i <= n; i++) {

        soma += (float)sinal * i / (n - i + 1);
        sinal = -sinal; //alternando o sinal
    }
    //imprime resultado
    printf("A soma da serie e: %.2f\n", soma);

    return 0;
}