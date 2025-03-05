/* Dado um vetor vet, contendo números inteiros,
implementar uma função que crie o vetor
vetNovo apenas com os elementos de vet que,
na ordem que estão armazenados, fazem com
que vetNovo esteja ordenado crescentemente.
Todos os demais valores que “atrapalharam”
essa ordenação serão armazenados no vetor
vetDescartados. 

Notas: exibir os elementos
dos três vetores. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void vetores(int vetor[], int tamanho, int vetNovo[], int *tamanhoNovo, int vetDescartados[], int *tamanhoDescartados);
void exibirVetor(int vetor[], int tamanho);

//Main
int main() {

  //declaração de variáveis
  int vet[11] = {3, 4, 8, 1, 9, 15, 12, 4, 20, 22, 10}, vetNovo[11], vetDescartados[11];
  int tamanhoNovo, tamanhoDescartados;

  //chamando a função
  vetores(vet, 11, vetNovo, &tamanhoNovo, vetDescartados, &tamanhoDescartados);

  //imprimindo os vetores
  printf("\n\nvet: \n");
  exibirVetor(vet, 11);

  printf("\n\nvetNovo: \n");
  exibirVetor(vetNovo, tamanhoNovo);

  printf("\n\nvetDescartados: \n");
  exibirVetor(vetDescartados, tamanhoDescartados);

  return 0;
}

//Funções
void vetores(int vetor[], int tamanho, int vetNovo[], int *tamanhoNovo, int vetDescartados[], int *tamanhoDescartados) {

  //declaração de variáveis
  int i;
  *tamanhoNovo = 0;
  *tamanhoDescartados = 0;

  //o primeiro elemento do vetor sempre pertencerá ao vetor novo
  if (tamanho > 0) {

    vetNovo[(*tamanhoNovo)++] = vetor[0]; 
  }

  //iterando o vetor
  for (i = 1; i < tamanho; i++) {
    
    //Se o elemento atual é maior ou igual ao último elemento adicionado a vetNovo, 
    //adiciona-o a vetNovo.
    if (vetor[i] >= vetNovo[*tamanhoNovo - 1]) {

      vetNovo[(*tamanhoNovo)++] = vetor[i];
    } else {

      vetDescartados[(*tamanhoDescartados)++] = vetor[i];
    }
  }
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