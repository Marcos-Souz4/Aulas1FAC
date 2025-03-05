/* Dado um vetor contendo números inteiros,
desenvolver uma função que determine o maior
valor do vetor inferior à média de seus
elementos, assim como o menor que seja
superior a esta média. */

//importação de bibliotecas
#include <stdio.h>
#include <limits.h>

//protótipos das funções
void maiorMenor(int vetor[], int tamanho, int *maior, int *menor, float *media);

int mediaElementos(int vetor[], int tamanho, float *media);
void mostrarVetor(int vetor[], int tamanho);

//Main
int main() {

  //declaração de variáveis
  int vet[10] = {1, 2, 3, 4, 5, 8, 7, 8, 15, 10}, maior, menor;
  float media;

  //imprimindo o vetor
  printf("\n\nVetor: ");
  mostrarVetor(vet, 10);

  //chamando a função
  maiorMenor(vet, 10, &maior, &menor, &media);

  //imprimindo o resultado
  printf("\n\nMaior valor inferior a %.1f(media): %d", media, maior);
  printf("\n\nMenor valor superior a %.1f(media): %d", media, menor);

  return 0;
}

//Funções
void maiorMenor(int vetor[], int tamanho, int *maior, int *menor, float *media) {

  //declaração de variáveis
  int i;
  *maior = INT_MIN;
  *menor = INT_MAX;

  //chamando a função auxiliar
  mediaElementos(vetor, tamanho, media);

  //iterar o vetor
  for (i = 0; i < tamanho; i++) {

    //calculando o maior
    if ((vetor[i] < *media) && (vetor[i] > *maior)) {

      *maior = vetor[i];
    }

    //calculando o menor
    if ((vetor[i] > *media) && (vetor[i] < *menor)) {

      *menor = vetor[i];
    }
  }
}

int mediaElementos(int vetor[], int tamanho, float *media) {

  //declaração de variáveis
  int i, somaElementos = 0;

  for (i = 0; i < tamanho; i++) {

    somaElementos += vetor[i];
  }

  //calculando e retornando a média dos elementos do vetor
  *media = (float)somaElementos / tamanho;

  return *media;
}

void mostrarVetor(int vetor[], int tamanho) {

  //declaração de variáveis
  int i;

  //iterando sobre o vetor
  for (i = 0; i < tamanho; i++) {

    printf("%d ", vetor[i]);
  }
  printf("\n");
}