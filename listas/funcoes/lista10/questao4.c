/* A função logarítmica é complementar à
potenciação. Ou seja, uma vez que 3 ^ 4 = 81,
podemos então afirmar que log3 81 = 4.
Generalizando, temos que:
base ^ expoente = pot ... logbase pot = expoente
Com base nessa descrição, pede-se o
desenvolvimento de uma função que, dados A e
B, calcule o valor de loga b.
Nota: a sua solução deverá apresentar um valor
inteiro que, na verdade, será a solução aproximada
do logaritmo. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int log(int valor, int base);

//main
int main() {

    //declaração de variáveis
    int valor, base, resultado;

    //pedindo valores ao usuário
    printf("\nNumero: \n");
    scanf("%d", &valor);

    printf("Base: \n");
    scanf("%d", &base);

    //chamando a função
    resultado = log(valor, base);

    //imprimindo o resultado
    printf("\n\nResultado: %d", resultado);

    return 0;
}

//funções
int log(int valor, int base) {

    //declaração de variáveis
    int i, cont = 0;

    //
    for (i = 1; i < valor; i*) {


        cont++;
    }

    return cont;
}