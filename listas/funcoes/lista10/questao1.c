/* Desenvolver uma função que, dado um número
inteiro n, exiba todos os números existentes no
intervalo definido por a e b (a < b), exceto
aqueles que forem múltiplos de n. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void sequencia(int n, int a, int b);

//Main
int main() {

    //declaração de variáveis
    int n, a, b;

    printf("Entre com o valor de 'n': \n");
    scanf("%d", &n);

    printf("Entre com o valor de 'a': \n");
    scanf("%d", &a);

    printf("Entre com o valor de 'b': \n");
    scanf("%d", &b);
    
    //chamando a função
    sequencia(n, a, b);

    return 0;
}

//Funções
void sequencia (int n, int a, int b) {

    //declaração de variáveis
    int i;

    //iterando os valores dentro do intervalo
    for (i = a; i < b; i++) {

        //verificando se é múltiplo de 'n'
        if (i%n != 0) {

            printf("%d ", i);
        }
    }
}