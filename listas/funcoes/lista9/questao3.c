/* Desenvolver uma função que calcule um 
termo 'n' da sequência de Fibonacci. */

//importação de bibliotecas
#include <stdio.h>

int fibonacci(int n) {

    //declaração de variáveis
    int i, fib = 1, termo1 = 1, termo2 = 1;

    //se fib for igual a 1 ou 2, retorna 1.
    if (n == 1 || n == 2) {

        return 1;
    }

    //de 2 adiante...
    for (i = 3; i <= n; i++) {

        fib = termo1 + termo2;
        termo1 = termo2;
        termo2 = fib;
    }

    return fib;
}

int main() {

    //declarando variáveis
    int n;
    
    //pedindo ao usuário
    printf("Entre com o termo 'n': \n");
    scanf("%d", &n);

    //guardando o resultado da função numa variável
    int resultado = fibonacci(n);

    //imprimindo o resultado
    printf("\nO termo %d da sequencia e: %d", n, resultado);

    return 0;
}