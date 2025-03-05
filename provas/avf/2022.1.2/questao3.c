/* Fazer uma função que, dado um vetor de inteiros V,
determine a posição do menor elemento da posição
pos ao final do vetor. Em seguida, implementar uma
segunda função que, após chamar a primeira, troque o
elemento da posição retornada com o da posição pos,
caso estas sejam distintas.

Nota: caso a posição pos seja inválida, a primeira
função deverá retornar -1 e, nesse caso, a segunda
função não procederá com a troca citada. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void posicao(int vetor[], int tamanho);
void trocarPosicao(int vetor[], int tamanho);
void exibirVetor(int vetor[], int tamanho);

//Main
int main() {

  //declaração de variáveis
  int vet[10] = {};


  return 0;
}

//Funções
void posicao(int vetor[], int tamanho) {

  //declaração de variáveis


}

void trocarPosicao(int vetor[], int tamanho) {

  //declaração de variáveis


}

void exibirVetor(int vetor[], int tamanho) {

  //declaração de variáveis
  int i;

  //iterando o vetor
  for (i = 0; i < tamanho; i++) {

    printf("%d ", vetor[i]);
  }
  printf("\n");
}