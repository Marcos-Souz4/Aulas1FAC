/* Fazer uma função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na união dos dois primeiros.
Nota: considerar que não existe repetição no
conjunto A, nem no conjunto B. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void uniao(int vetorA[], int tamanhoA, int vetorB[], int tamanhoB, int vetorC[], int *tamanhoC);
void mostrarVetor(int vetor[], int tamanho);

//Main
int main() {

    //declaração de variáveis
    int vetA[5] = {1, 2, 3, 4, 5}, vetB[5] = {6, 7, 8, 9, 10};
    int vetC[10], tamanhoC;

    //exibindo o vetor A e o B
    printf("\n\nVetor A: \n");
    mostrarVetor(vetA, 5);

    printf("\nVetor B: \n");
    mostrarVetor(vetB, 5);

    //chamando a função e imprimindo o resultado
    uniao(vetA, 5, vetB, 5, vetC, &tamanhoC);

    printf("\n\nVetor C: \n");
    mostrarVetor(vetC, tamanhoC);

    return 0;
}

//Funções
void uniao(int vetorA[], int tamanhoA, int vetorB[], int tamanhoB, int vetorC[], int *tamanhoC) {

    //declaração de variáveis
    int i;

    //trazendo os elementos do vetor A
    for (i = 0; i < tamanhoA; i++) {

        vetorC[i] = vetorA[i];
    }

    //trazendo os elementos do vetor B
    for (i = 0; i < tamanhoB; i++) {

        vetorC[tamanhoA + i] = vetorB[i];
    }
    
    //definindo o tamanho de C
    *tamanhoC = tamanhoA + tamanhoB;
}

void mostrarVetor(int vetor[], int tamanho) {

    //declaração de variáveis
    int i;

    //iterando todas as posições do vetor
    for (i = 0; i < tamanho; i++) {

        printf("%d ", vetor[i]);
    }
    printf("\n");
}