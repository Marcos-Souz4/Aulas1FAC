/* Implementar uma função que, dado um vetor de reais vet
e um número inteiro n, determine o menor valor dentre 
aqueles maiores do que n, assim como o maior dentre 
são menores do que n.

Nota: apresentar a main chamando a função solicitada. 
Pensando na questão: */

//importação de bibliotecas
#include <stdio.h>
#include <float.h>

//protótipos das funções
void menorEMaior(float vetor[], int tamanho, int n);

//Main
int main() {

    //declaração de variáveis
    int num;
    float vet[5] = {1.5, 2.7, 4.6, 7.8, 9.5};

    //pedindo ao usuário
    printf("\n\nEntre com um valor inteiro: ");
    scanf("%d", &num);

    //chamando a função
    menorEMaior(vet, 5, num);

    return 0;
}

//Funções
void menorEMaior(float vetor[], int tamanho, int n) {

    //declaração de variáveis
    int i;
    float menorMaior = FLT_MAX, maiorMenor = FLT_MIN;

    for (i = 0; i < tamanho; i++) {

        if (vetor[i] > n && vetor[i] < menorMaior) {

            menorMaior = vetor[i];
        }
        
        if (vetor[i] < n && vetor[i] > maiorMenor) {

            maiorMenor = vetor[i];
        }
    }

    if (maiorMenor == FLT_MIN) {

        printf("Nenhum valor menor que %d foi encontrado.\n", n);
    } else {

        printf("O maior valor menor que %d e: %.2f\n", n, maiorMenor);
    }
}