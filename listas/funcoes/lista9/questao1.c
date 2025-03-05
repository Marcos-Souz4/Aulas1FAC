/* Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void multiplosN(int n, int a, int b);

//main
int main() {

    //declaração de variáveis
    int n, a, b;

    //pedindo ao usuário
    printf("Entre com 'n': \n");
    scanf("%d", &n);

    printf("Entre com o inicio do intervalo: \n");
    scanf("%d", &a);

    printf("Entre com o final do intervalo: \n");
    scanf("%d", &b);

    //chamando a função
    multiplosN(n, a, b); 

    return 0;
}

//Funções
void multiplosN(int n, int a, int b) {

    //declaração de variáveis
    int i;

    //parte principal
    for (i = a; i <= b; i++) {

        if (i%n == 0) {

            printf("%d ", i);
        }
    }
    printf("\n");
}