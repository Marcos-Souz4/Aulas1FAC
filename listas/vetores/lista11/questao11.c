/* Fazer uma função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na intersecção dos dois primeiros.
Nota: considerar que não existe repetição no
conjunto A, nem no conjunto B. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void intersecao(int vetorA[], int tamanhoA, int vetorB[], int tamanhoB, int vetorC[], int *tamanhoC);
void exibirVetor(int vetor[], int tamanho);

//Main
int main() {

    //declaração de variáveis
    int vetA[5] = {1, 2, 3, 4, 5}, vetB[5] = {3, 4, 5, 6, 7}, vetC[5];
    int tamanhoC;

    //exibindo os vetores A e B
    printf("\n\nVetor A: \n");
    exibirVetor(vetA, 5);

    printf("\nVetor B: \n");
    exibirVetor(vetB, 5);

    //chamando a função
    intersecao(vetA, 5, vetB, 5, vetC, &tamanhoC);

    //exibindo o vetor C resultante
    printf("\n\nVetor C(intersecao): \n");
    exibirVetor(vetC, tamanhoC);

    return 0;
}

//Funções
void intersecao(int vetorA[], int tamanhoA, int vetorB[], int tamanhoB, int vetorC[], int *tamanhoC) {

    //declaração de variáveis
    int i, j, k = 0;
    *tamanhoC = 0;

    //iterando sobre os vetores
    for (i = 0; i < tamanhoA; i++) {

        for (j = 0; j < tamanhoB; j++) {

            if (vetorA[i]==vetorB[j]) {

                vetorC[k] = vetorA[i];
                k++;
                (*tamanhoC)++;
                break; //elemento encontrado, não precisa procurar mais
            }
        }
    }
}

void exibirVetor(int vetor[], int tamanho) {

    //declaração de variáveis
    int i;

    //iterando sobre o vetor
    for (i = 0; i < tamanho; i++) {

        printf("%d ", vetor[i]);
    }
    printf("\n");
}