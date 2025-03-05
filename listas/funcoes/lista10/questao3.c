/* Fazer uma função leituraDados que permaneça
lendo valores reais até que o número 0 seja
digitado. Ao final, a função deve determinar a
quantidade de elementos fornecidos (excluindo
o 0) e o maior dentre eles. */

//importação de bibliotecas
#include <stdio.h>
#include <math.h>

int leituraDados(int n) {

    //declarando variáveis
    int contElementos = 0, maior = -99999;

    do {

        printf("Entre com o valor de 'n': \n");
        scanf("%d", &n);
            
            if (n != 0) {

                contElementos++;

                if (n > maior) {

                    maior = n;
                }

        } else {

            break;
        }

    } while(1);

    printf("Quantidade: %d\n", contElementos);
    printf("Maior elemento: %d\n", maior);

    return 1;
}


int main() {

    //chamando a função
    leituraDados(1);

    return 0;
}