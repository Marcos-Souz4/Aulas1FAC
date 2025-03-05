/* Dados dois números inteiros A e B, fazer uma
função que determine o número de potências
de 2 existentes no intervalo definido pelos dois
valores, assim como a maior delas. */

//importação de bibliotecas
#include <stdio.h>
#include <math.h>

//protótipos das funções
void potenciaDois(int a, int b);

//Main
int main() {

    //declaração de variáveis
    int a, b;

    //pedindo ao usuário
    printf("Entre com o valor de 'a': \n");
    scanf("%d", &a);

    printf("Entre com o valor de 'b': \n");
    scanf("%d", &b);    

    //chamando a função
    potenciaDois(a, b);

    return 0;
}

//Funções
void potenciaDois(int a, int b) {

    //declaração de variáveis
    int i, maior = 0, cont = 0, n;

    //iterando valores entre o intervalo
    for (i = a; i <= b; i++) {

        //iterando as potencias de 2
        for (n = 0; pow(2, n) <= i; n++) {

            //verificando a existência de potência de 2
            if (i == pow(2, n)) {

                //imprimindo o resultado e determinando a quantidade de potências
                printf("%d ", i);
                cont++;

                //calculando a maior potência
                if (i > maior) {

                    maior = i;
                }
            }
        }
    }
}