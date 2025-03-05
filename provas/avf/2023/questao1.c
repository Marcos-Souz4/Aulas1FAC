/* Desenvolver uma função que, dado um número inteiro n, preencha um vetor
com todos os divisores de n */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void divisores(int vetor[], int *tamanho, int n);
void exibirVetor(int vetor[], int tamanho);

//Main
int main() {

  //declaração de variáveis
  int div[15], num, tamanho;

  //pedindo ao usuário
  printf("\n\nNumero inteiro: \n");
  scanf("%d", &num);

  //chamando a função
  divisores(div, &tamanho, num);

  //imprimindo o resultado
  printf("\n\nVetor(divisores de %d): \n", num);
  exibirVetor(div, tamanho);

  return 0;
}

//Funções
void divisores(int vetor[], int *tamanho, int n) {

  //declaração de variáveis
  int i;
  *tamanho = 0;

  for (i = 1; i <= n; i++) {

    //vendo se é divisível
    if (n%i==0) {

      //preenchendo o vetor
      vetor[*tamanho] = i;
      (*tamanho)++;
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