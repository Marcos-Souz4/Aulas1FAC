/* Escreva uma função que, dado um vetor contendo números inteiros, 
determine a posição do elemento que corresponde ao "menor valor único". 
Ou seja, a posição do menor valor que não se repete no vetor. */

//importação de bibliotecas
#include <stdio.h>
#include <limits.h>

//protótipos das funções
int menorValorUnico(int vetor[], int tamanho);
void exibirVetor(int vetor[], int tamanho);

//Main
int main() {

  //declaração de variáveis
  int vet[12] = {2, 2, 3, 8, 5, 4, 4, 6, 3, 3, 1, 1}, resultado;

  //exibindo o vetor
  printf("\n\nVetor: \n");
  exibirVetor(vet, 12);

  //chamando a função 
  resultado = menorValorUnico(vet, 12);

  //imprimindo o resultado
  printf("\n\nA posicao do menor 'valor unico': %d\n", resultado);

  return 0;
}

//Funções
int menorValorUnico(int vetor[], int tamanho) {

  //declaração de variáveis
  int i, j, menor = INT_MAX, pos;
  int ocorrencias[tamanho];

  //inicializando o vetor de ocorrências com 0
  for (i = 0; i < tamanho; i++) {

    ocorrencias[i] = 0;
  }

  //contando as ocorrências de cada elemento
  for (i = 0; i < tamanho; i++) {

    ocorrencias[i]++;
    for (j = i + 1; j < tamanho; j++) {

      if (vetor[i]==vetor[j]) {

        ocorrencias[i]++;
        ocorrencias[j] = -1; //marca como repetido
      }
    }
  }

  //encontrando o menor valor único
  for (i = 0; i < tamanho; i++) {

    if ((ocorrencias[i]==1) && vetor[i] < menor) {

      menor = vetor[i];
      pos = i;
    }
  }

  return pos;
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