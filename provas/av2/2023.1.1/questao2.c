/* Faça uma função que, dado um número inteiro
positivo 'n', determine o seu maior e o seu menor
algarismos.
Nota: Caso 'n' seja positivo, a função realizará
o solicitado e retornará o valor 1: caso contrário,
apenas retornará 0. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int maiorEMenoralgarismos(int n, int *maior, int *menor);

//Main
int main() {

    //declaração de variáveis
    int num, maior, menor, resultado;

    //pedindo ao usuário
    printf("\n\nEntre com um valor(inteiro e positivo): \n");
    scanf("%d", &num);

    //chamando a função
    resultado = maiorEMenoralgarismos(num, maior, menor);

    //imprimindo o resultado
    if (resultado == 1) {

        printf("Maior algarismo: %d\n", maior);
        printf("Menor algarismo: %d\n", menor);
    } else {

        printf("Numero invalido!!\n\n");
    }

    return 0;
}

//Funções
int maiorEMenoralgarismos(int n, int *maior, int *menor) {

    //declaração de variáveis
     
    

    //saídas
    
}