/* Implementar a função de inserção de
determinado elemento em um vetor ordenado
crescentemente (dica: utilizar a função do item
08 para auxiliar). */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void insercao(int vetor[], int *tamanho, int n);
int posicoes(int vetor[], int tamanho, int n);
void exibirVetor(int vetor[], int tamanho);

//Main
int main() {

    //declaração de variáveis
    int vet[20] = {1, 1, 2, 3, 3, 4, 5, 6, 6, 9, 11, 15}, num, tamanho = 12;

    //exibindo o vetor
    printf("\n\nVetor: \n");
    exibirVetor(vet, tamanho);

    //pedindo ao usuário
    printf("Valor a ser inserido no vetor: \n");
    scanf("%d", &num);

    //chamando a função e imprimindo o vetor
    insercao(vet, &tamanho, num);
    exibirVetor(vet, tamanho);

    return 0;
}

//Funções
void insercao(int vetor[], int *tamanho, int n) {

    //declaração de variáveis
    int i, pos = posicoes(vetor, *tamanho, n);

    //desloca os elementos à direita para abrir espaço
    for (i = *tamanho; i > pos; i--) {

        vetor[i] = vetor[i-1];
    }

    vetor[pos] = n; //insere o novo elemnto na posição correta
    (*tamanho)++; //incrementa o tamanho do vetor
}

//descubro qual posição num vetor crescente consigo colocar um elemento qualquer
int posicoes(int vetor[], int tamanho, int n) {

    //declaração de variáveis
    int i;

    for (i = 0; i < tamanho; i++) {

        if (vetor[i] >= n) {

            return i;
        }
    }

    //se chegou neste ponto, 'x' é maior que todos os elementos do vetor
    return tamanho;
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