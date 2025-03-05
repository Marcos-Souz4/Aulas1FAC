/* Considere a existência de dois vetores 
A e B contendo quant1 e quant2 elementos,
respectivamente. Pede-se o desenvolvimento
de uma função que determine se um dos
conjuntos está **contido** no outro, retornando os
seguintes códigos:

- 1, se A estiver contido em B;
- 2, se B estiver contido em A;
- 0, caso contrário. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int contido(int vetorA[], int tamanhoA, int vetorB[], int tamanhoB);
void mostrarVetor(int vetor[], int tamanho);

//Main
int main() {

  //declaração de variáveis
  int vetA[5] = {1, 2, 3, 4, 5}, vetB[5] = {1, 2, 3, 4, 5}, resultado;

  //exibindo vetorA e vetorB
  printf("\n\nVetor A: \n");
  mostrarVetor(vetA, 5);

  printf("Vetor B: \n");
  mostrarVetor(vetB, 5);

  //chamando a função
  resultado = contido(vetA, 5, vetB, 5);

  //imprimindo o resultado
  if (resultado == 1) {

    printf("\n\nA esta contido em B!!");
  } else if (resultado ==2) {
  
    printf("\n\nB esta contido em A!!");
  } else {

    printf("\n\nNenhum esta contido no outro!!");
  }

  return 0;
}

//Funções
int contido(int vetorA[], int tamanhoA, int vetorB[], int tamanhoB) {

  //declaração de variáveis
  int i, j, encontrado;

  for (i = 0; i < tamanhoA; i++) {

    encontrado = 0;
    for (j = 0; j < tamanhoB; j++) {

      
    }
  }
}

void mostrarVetor(int vetor[], int tamanho) {

  //declaração de variáveis
  int i;

  //iterando o vetor
  for (i = 0; i < tamanho; i++) {

    printf("%d ", vetor[i]);
  }
  printf("\n");
}