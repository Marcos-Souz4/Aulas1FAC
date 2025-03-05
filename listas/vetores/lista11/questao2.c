/* Implementar uma função que, dado um vetor
de inteiros, troque o 1º e o 2º elementos, em
seguida o 3º e o 4º elementos e assim
sucessivamente, até se chegar ao final do vetor. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void trocarElementos(int vetor[], int tamanho);
void exibirVetor(int vetor[], int tamanho);

//Main
int main() {

  //declaração de variáveis
  int /*vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}*/ vet2[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

  //exibindo o vetor
  printf("\n\nVetor original: \n");
  exibirVetor(vet2, 11);

  //chamando a função
  trocarElementos(vet2, 11);

  //imprimindo o resultado
  printf("\n\nVetor modificado: \n");
  exibirVetor(vet2, 11);

  return 0;
}

//Funções
void trocarElementos(int vetor[], int tamanho) {

  //declaração de variáveis
  int i, j;

  //iterando o vetor
  for (i = 0; i < tamanho - 1; i+=2) {

    j = vetor[i];
    vetor[i] = vetor[i+1];
    vetor[i+1] = j; 
  }
}

void exibirVetor(int vetor[], int tamanho) {

  //declaração de variáveis
  int i;

  //iterando os valores dentro do vetor
  for (i = 0; i < tamanho; i++) {

    printf("%d ", vetor[i]);
  }
  printf("\n");
}