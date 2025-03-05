/* Desenvolver uma função que, dado um vetor de Inteiros, determine se a 
seguinte regra é atendida: cada número n pode aparecer no vetor, 
no máximo, n vezes. Se a propriedade for observada, a função deverá retornar 1; 
caso contrário, retornará 0. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int aparecimento(int vetor[], int tamanho);
void exibirVetor(int vetor[], int tamanho);

//Main
int main() {

  //declaração de variáveis
  int vet[9] = {1, 2, 2, 3, 4, 6, 6, 3, 3}, resultado;

  //exibindo o vetor
  printf("\n\nVetor: \n");
  exibirVetor(vet, 9);

  //chamando a função
  resultado = aparecimento(vet, 9);

  //conferindo o retorno
  if (resultado == 1) {

    printf("\n\nCada numero 'n' apareceu no maximo n vezes!\n"); 
  } else {

    printf("\n\nAlgum numero 'n' nao apareceu no maximo n vezes!\n");
  }

  return 0;
}

//Funções
int aparecimento(int vetor[], int tamanho) {

  //declaração de variáveis
  int i, j, cont = 0;

  //iterando sobre o vetor
  for (i = 0; i < tamanho; i++) {

    for (j = 0; j < tamanho; j++) {

      if (vetor[i]==vetor[j]) {

        cont++;
      }
    }

    //verificando se aparece mais de uma vez
    if (cont > vetor[i]) {

      return 0;
    }
  }

  return 1;
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