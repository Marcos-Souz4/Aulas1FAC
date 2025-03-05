/* Dados dois vetores de inteiros, vet1 e vet2, com quant1 
e quant2 elementos, respectivamente, determine as posições 
(uma em cada vetor) do menor elemento comum entre eles. 

Notas:
i. Considerem que não há repetição de elementos em um mesmo vetor;
ii. Caso não existam elementos comuns entre os vetores, 
as posições retornadas serão iguais a -1. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int posicoesMenorElemento(int vetor1[], int tamanho1, int vetor2[], int tamanho2);
void mostrarPosicoes();
void mostrarVetor(int vetor[], int tamanho);

//Main
int main() {

    //declaração de variáveis
    int vet1[5] = {10, 8, 4, 6, 2}, vet2[7] = {5, 3, 10, 9, 6, 4, 7};
    int pos1, pos2 ;

    //chamando a função
    

    //imprimindo o resultado


    return 0;
}

//Funções
int posicoesMenorElemento(int vetor1[], int tamanho1, int vetor2[], int tamanho2) {

    //declaração de variáveis
    int i, j;

    //iterando sobre os vetores


}

void mostrarVetor(int vetor[], int tamanho) {

    //declaração de variáveis
    int i;

    for (i = 0; i < tamanho; i++) {

        printf("%d ", vetor[i]);
    }
    printf("\n");
}