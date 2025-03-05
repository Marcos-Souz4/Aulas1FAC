/* Dado um vetor de notas, desenvolver uma função que determine
a média da turma, assim como a maior e menor notas acima da média. */

//importação de bibliotecas
#include <stdio.h>
#include <limits.h>

//protótipos das funções
void mediaMaiorMenorAcima(float vetor[], int tamanho, float *media, float *maiorAcima, float *menorAcima);
void exibirVetor(float vetor[], int tamanho);

//Main
int main() {

  //declaração de variáveis
  float notas[10] = {5.5, 4.5, 8.4, 6.5, 5.2, 2.6, 10.0, 9.8, 4.4, 3.9};
  float media, maiorAcima, menorAcima;

  //exibindo o vetor
  printf("\n\nVetor: \n");
  exibirVetor(notas, 10);

  //chamando a função
  mediaMaiorMenorAcima(notas, 10, &media, &maiorAcima, &menorAcima);

  //imprimindo as respostas
  printf("\n\nMedia: %.1f\n", media);
  printf("Maior nota(acima da media): %.1f\n", maiorAcima);
  printf("Menor nota(acima da media): %.1f\n", menorAcima);

  return 0;
}

//Funções
void mediaMaiorMenorAcima(float vetor[], int tamanho, float *media, float *maiorAcima, float *menorAcima) {

  //declaração de variáveis
  int i, j, cont = 0;
  float somaNotas = 0;

  *maiorAcima = INT_MIN;
  *menorAcima = INT_MAX;

  for (i = 0; i < tamanho; i++) {

    somaNotas += vetor[i];
    cont++;
  }

  //calculando a média
  *media = somaNotas / cont;

  //calculando a maior e a menor nota acima da média
  for (i = 0; i < tamanho; i++) {

    if (vetor[i] > *media) {

      if (vetor[i] > *maiorAcima) {

        *maiorAcima = vetor[i];
      }

      if (vetor[i] < *menorAcima) {

        *menorAcima = vetor[i];
      }
    }
  }
}

void exibirVetor(float vetor[], int tamanho) {

  //declaração de variáveis
  int i;

  //iterando o vetor
  for (i = 0; i < tamanho; i++) {

    printf("%.1f ", vetor[i]);
  }
  printf("\n");
}