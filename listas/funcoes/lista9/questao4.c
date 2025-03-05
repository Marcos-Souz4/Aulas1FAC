/* Fazer uma função que calcule o MDC (máximo
divisor comum) entre dois números. 

Pensando na resolução:

mdc(Máximo Divisor Comum)
(6,20):
6: 1, 2, 3, 6
20: 1, 2, 4, 5, 10, 20 

(10, 40):
10: 
40: 
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int mdc(int n1, int n2);

//main
int main() {

    //declaração de variáveis
    int n1, n2, m;

    //pedindo ao usuário
    printf("Entre com 'n1': \n");
    scanf("%d", &n1);

    printf("Entre com 'n2': \n");
    scanf("%d", &n2);

    //chamando a função
    m = mdc(n1, n2);

    //exibindo o resultado
    printf("(%d, %d) = %d", n1, n2, m);

    return 0;
}

//funções
int mdc(int n1, int n2) {

    //declaração de variáveis
    int i, menor, mdc;

    //verificando qual dos 2 números é o menor
    menor = (n1 < n2)? n1:n2; //operador ternário

    //varrendo os possíveis divisores
    for (i = 1; i <= menor; i++) {

        //verificando se 'i' é divisor de 'n1' e 'n2'
        if ((n1%i==0) && (n2==0)) {

            mdc = i;
        }
    }

    //retornando o resultado
    return mdc;
}