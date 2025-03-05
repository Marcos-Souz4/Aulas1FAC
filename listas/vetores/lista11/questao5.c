/* Elaborar uma função que, dado um conjunto de
10 valores inteiros, distribua-os em 2 vetores
conforme forem pares ou ímpares. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void dividirVetores(int vetor[], int tamanho, int vetorPares[], int *tamanhoPares, int vetorImpares[], int *tamanhoImpares);
void exibirVetor(int vetor[], int tamanho);

//Main
int main() {

    //declaração de variáveis
    int vet[10] = {1, 5, 8, 10, 15, 12, 2, 3, 9, 19}, vetPares[10], vetImpares[10];
    int tamanhoPares = 0, tamanhoImpares = 0;

    //exibindo o vetor
    printf("\n\nVetor original: \n");
    exibirVetor(vet, 10);

    //chamando a função
    dividirVetores(vet, 10, vetPares, &tamanhoPares, vetImpares, &tamanhoImpares);

    //imprimindo os novos vetores
    printf("\n\nVetor par: \n");
    exibirVetor(vetPares, tamanhoPares);

    printf("\n\nVetor Impar: \n");
    exibirVetor(vetImpares, tamanhoImpares);

    return 0;
}

//Funções
void dividirVetores(int vetor[], int tamanho, int vetorPares[], int *tamanhoPares, int vetorImpares[], int *tamanhoImpares) {

    //declaração de variáveis
    int i;

    //iterando sobre o vetor
    for (i = 0; i < tamanho; i++) {

        //verificando se é par... se não for? ímpar
        if (vetor[i]%2==0) {

            vetorPares[*tamanhoPares] = vetor[i];
            (*tamanhoPares)++;
        } else {

            vetorImpares[*tamanhoImpares] = vetor[i];
            (*tamanhoImpares)++;
        }
    }
}

void exibirVetor(int vetor[], int tamanho) {

    //declaração de variáveis
    int i;

    //iterando todas as posições do vetor
    for (i = 0; i < tamanho; i++) {

        printf("%d ", vetor[i]);
    }
    printf("\n");
}