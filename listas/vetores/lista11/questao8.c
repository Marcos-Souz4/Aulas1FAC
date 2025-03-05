/* Dados um vetor de inteiros (cujos elementos
estão ordenados crescentemente) e um
número x, retornar a posição da primeira
ocorrência de x (caso encontre-se no vetor) ou
a posição na qual deveria estar (caso contrário). */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int posicoes(int vetor[], int tamanho, int n);
void mostrarVetor(int vetor[], int tamanho);

//Main
int main() {

    //declaração de variáveis
    int x, vet[12] = {1, 2, 2, 3, 4, 6, 7, 8, 8, 9, 9, 10}, tamanho = 12, resultado;

    //mostrando o vetor
    printf("\n\nVetor: \n");
    mostrarVetor(vet, tamanho);

    //pedindo ao usuário
    printf("Entre com um valor para saber sua posicao no vetor: \n");
    scanf("%d", &x);

    //chamando a função
    resultado = posicoes(vet, tamanho, x);

    //imprimindo o resultado
    printf("\n\nPosicao: %d\n", resultado);    

    return 0;
}

//Funções
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

void mostrarVetor(int vetor[], int tamanho) {

    //declaração de variáveis
    int i;

    //iterando todas as posições do vetor
    for (i = 0; i < tamanho; i++) {

        printf("%d ", vetor[i]);
    }
    printf("\n");
}