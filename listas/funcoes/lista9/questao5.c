/* Fazer uma função que calcule o MMC 
(mínimo múltiplo comum) entre dois números. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int mmc(int n1, int n2);

//main
int main() {

    //declaração de variáveis
    int n1, n2, mm;

    //pedindo ao usuário
    printf("\nEscolha o valor de 'n1': \n");
    scanf("%d", &n1);

    printf("Escolha o valor de 'n2': \n");
    scanf("%d", &n2);

    //chamando a função
    mm = mmc(n1, n2);

    printf("MMC(%d, %d): %d\n", n1, n2, mm);

    return 0;
}

//funções
int mmc(int n1, int n2) {

    //declaração de variáveis
    int i, maior, mult;

    //verificando o maior entre os valores
    maior = (n1 > n2) ? n1:n2;

    //varrendo os 'possíveis' resultados
    mult = n1*n2;

    for (i = maior; i <= mult; i++) {

        //verificando se o 'i' é múltiplo
        if((i%n1==0) && (i%n2==0)) {

            return i;
        }
    }

    return 0;
}