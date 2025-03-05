/* Pede-se a implementação de uma função que,
dado um vetor contendo números reais,
determine se o mesmo encontra-se ordenado
de forma crescente. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void crescente(int vetor[], int tamanho);
void exibirVet(int vetor[], int tamanho);

//Main
int main() {

    //declaração de variáveis
    int vet[5], i;

    //preenchendo os valores do vetor
    for (i = 0; i < 5; i++) {

        printf("Entre com um valor: \n");
        scanf("%d", &vet[i]);
    }

    //imprimindo o vetor
    exibirVet(vet, 5);

    //chamando a função principal
    crescente(vet, 5);

    return 0;
}

//Funções
void crescente(int vetor[], int tamanho) {

    //declaração de variáveis
    int i, estaCrescente = 1;

    for (i = 0; i < tamanho; i++) {

        if (vetor[i+1]<vetor[i]) {

            estaCrescente = 0; //não está crescente
            break;
        }
    }

    //conferindo se está realmente crescente
    if (estaCrescente) {

        printf("Rsta crescente!!\n");
    } else {

        printf("Nao esta crescente!!\n");
    }
}

void exibirVet(int vetor[], int tamanho) {

    //declaração de variáveis
    int i;

    printf("Vetor: \n");

    //iterando todas as posições do vetor
    for (i = 0; i < tamanho; i++) {

        printf("%d", vetor[i]);
    }
    printf("\n");
}