#include <stdio.h>

int main() {

    //declaração de variáveis
    int n, i, ehPrimo = 1;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &n);

    if (n <= 1) {
        
        ehPrimo = 0;
    }

    return 0;
}