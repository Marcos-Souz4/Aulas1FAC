/* Desenvolver uma função que remova
determinado elemento (todas as suas
ocorrências) de um vetor de inteiros. Ao final,
retornar o número de remoções realizadas. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int numRemocoes(int vetor[], int *tamanho, int n);
void mostrarVetor(int vetor[], int tamanho);

//Main
int main() {

    //declaração de variáveis
    int num, vet[12] = {1, 1, 2, 3, 3, 7, 4, 5, 4, 5, 8, 8}, tamanho = 12, resultado;

    //mostrando o vetor
    printf("\n\nVetor: \n");
    mostrarVetor(vet, tamanho);

    //pedindo ao usuário
    printf("Entre com um valor a ser removido: \n");
    scanf("%d", &num);

    //chamando a função e imprimindo o resultado
    resultado = numRemocoes(vet, &tamanho, num);
    printf("\n\nNumero de ocorrencias do numero %d: %d", num, resultado);

    //vetor após as remoções
    printf("\n\nVetor apos remocoes: \n");
    mostrarVetor(vet, tamanho);

    return 0;


}


//Funções
int numRemocoes(int vetor[], int *tamanho, int n) {

    //declaração de variáveis 
    int i, j, cont = 0;

    for (i = 0; i < *tamanho; i++) {

        if (vetor[i] == n) {

            cont++; //incrementa o número de remoções

            //move todos os elementos seguintes à esquerda
            for (j = 0; j < *tamanho - 1; j++) {

                vetor[j] = vetor[j+1];
            }
        }

        i--; //ajusta o índice para verificar o próximo elemento após o deslocamento
        (*tamanho)--; //reduz o tamanho do vetor
    }

    return cont;
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