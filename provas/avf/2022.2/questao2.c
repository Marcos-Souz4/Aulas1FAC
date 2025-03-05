/* Codificar uma função que, dado um vetor com quant
valores inteiros, altere os seus elementos da seguinte
forma:

− Se for a primeira posição, substitui-lo pelo
maior elemento do vetor;
− Se for a última posição, substitui-lo pelo
anterior;
− Se a posição for par, substitui-lo pela diferença
do anterior pelo seguinte;
− Se a posição for ímpar, diminuir uma unidade
de seu valor. */

//importação de bibliotecas
#include <stdio.h>
#include <limits.h>

//protótipos das funções
void substituir(int vetor[], int tamanho);
void exibirVetor(int vetor[], int tamanho);

//Main
int main() {

  //declaração de variáveis
  int vet[6] = {1, 2, 3, 4, 5, 6};

  //exibindo o vetor
  printf("\n\nVetor(original): \n");
  exibirVetor(vet, 6);

  //chamando a função
  substituir(vet, 6);

  //imprimindo o resultado
  printf("\n\nVetor(modificado): \n");
  exibirVetor(vet, 6);

  return 0;
}

//Funções
void substituir(int vetor[], int tamanho) {

  //declaração de variáveis
  int i, j, temp[tamanho], maiorElemento = INT_MIN;

  //copiando o vetor original para um temporário
  for (i = 0; i < tamanho; i++) {

    temp[i] = vetor[i];
  }

  //calculando o maior elemento
  for (i = 0; i < tamanho; i++) {

    for (j = 0; j < tamanho; j++) {

      if (vetor[i] > maiorElemento) {

        maiorElemento = vetor[i];
      }
    }
  }

  //modificando todos os elementos conforme as regras
  for (i = 0; i < tamanho; i++) {

    if (i == 0) {

      vetor[i] = maiorElemento;
    } else if (i==tamanho-1) {

      vetor[i] = temp[i-1];
    } else if (i%2==0) {

      vetor[i] = temp[i-1] - temp[i+1];
    } else {

      vetor[i] = temp[i]-1;
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