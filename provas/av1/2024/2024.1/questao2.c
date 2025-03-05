//importação de bibliotecas
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main() {

    //declarando variáveis
    int n1, n2, x, i;

    printf("Entre com o primeiro valor: \n");
    scanf("%d", &n1);

    printf("Entre com o segundo valor: \n");
    scanf("%d", &n2);

    printf("Entre com o valor do intervalo: \n");
    scanf("%d", &x);

    for (i = 1; i <= x; i++) {

        //verificando se é múltiplo de 'n1' e não múltiplo de 'n2'
        if ((i%n1 == 0) && (i%n2 != 0)) {
        
            printf("%d ", i);
        }
    }

    return 0;
}