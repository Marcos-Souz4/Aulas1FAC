/* Considerem dois vetores de reais, vetA e vetB, cada
qual com quant elementos. Desenvolver uma função
que compare o 1o elemento de vetA com o 1o de vetB;
se o de vetA for maior do que o de vetB, eles deverão
ser trocados. E este mesmo processo deverá repetir-se
para o 2o número de veta e o 2o de vetB e, assim,
sucessivamente. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void trocar(float vetorA[], int tamanhoA, float vetorB[], int tamanhoB);
void exibirVetor(float vetor[], int tamanho);

//Main
int main() {

  //declaração de variáveis
  float vetA[7] = {2.7, 5.4, 8.6, 6.7, 4.2, 2.3, 5.3}, vetB[5] = {4.0, 2.6, 9.0, 7.0, 3.2};
  
  //exibindo os vetores A e B
  printf("\n\nVetor A: \n");
  exibirVetor(vetA, 7);

  printf("Vetor B: \n");
  exibirVetor(vetB, 5);

  //chamando a função
  trocar(vetA, 7, vetB, 5);

  //imprimindo o resultado
  printf("\n\nVetor A(modificado): \n");
  exibirVetor(vetA, 7);

  printf("Vetor B(modificado): \n");
  exibirVetor(vetB, 5);

  return 0;
}

//Funções
void trocar(float vetorA[], int tamanhoA, float vetorB[], int tamanhoB) {

  //declaração de variáveis
  int i;
  int minTamanho = (tamanhoA < tamanhoB)? tamanhoA:tamanhoB;
  float temp;

  //iterando o vetor
  for (i = 0; i < minTamanho; i++) {

    if (vetorA[i] > vetorB[i]) {

      temp = vetorA[i];
      vetorA[i] = vetorB[i];
      vetorB[i] = temp;
    }
  }
}

void exibirVetor(float vetor[], int tamanho) {

  ///declaração de variáveis
  int i;

  //iterando o vetor
  for (i = 0; i < tamanho; i++) {

    printf("%.1f ", vetor[i]);
  }
  printf("\n");
}