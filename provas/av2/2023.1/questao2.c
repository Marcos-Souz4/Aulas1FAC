/* Fazer uma função que, dado um número inteiro positivo n, 
determine se os seus algarismos estão ou não ordenados crescentemente.

Exemplos:
n = 3456; Estão ordenados
n = 4563; Não estão ordenados
n = 4; Estão ordenados

Nota: pode-se considerar que é maior do que zero, sem a necessidade de validação. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int algarismosOrdenados(int n);

//Main
int main() {

    //declaração de variáveis
    int num, resultado;

    //pedindo ao usuário
    printf("\n\nEntre com um numero inteiro positivo: \n");
    scanf("%d", &num);

    //chamando a função
    resultado = algarismosOdernados(num);
    if (resultado == 1) {

        printf("n = %d; estao ordenados!\n", num);
    } else {

        printf("n = %d; nao estao ordenados!\n", num);
    }

    return 0;
}

//Funções
int algarismosOdernados(int n) {

    //declaração de variáveis
    int digitoAtual, proximoDigito;

    //se só tiver 1 casa decimal
    if (n < 10) {

        return 1;
    }

    //armazenando o díigito atual e o próximo    
    digitoAtual = n%10;
    n/=10;

    //comparando cada dígito com o seu próximo
    while(n > 0) {

        proximoDigito = n%10;
        if (proximoDigito > digitoAtual) {

            return 0; //não estão ordenados
        }

        digitoAtual = proximoDigito;
        n /= 10;
    }

    return 1; //estão ordenados
}