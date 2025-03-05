/* Considere que um vetor de inteiros armazene o
número 0 em algumas de suas posições
objetivando “separar subconjuntos de valores”.
Desenvolver uma função que, dados um vetor
como definido anteriormente e um número
inteiro n, retorne um vetor contendo o n-ésimo
subconjunto do vetor.

Nota 1: caso exista o n-ésimo subconjunto, a função
retornará, além do subconjunto, o valor 1; caso
contrário, retornará 0. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int subconjuntos(int vetor[], int tamanho, int n, int subconjunto[], int *tamanhoSubconjunto);
void exibirVetor(int vetor[], int tamanho);

//Main
int main() {

  //declaração de variáveis
  int vet[12] = {5, 7, 3, 0, 5, 9, 0, 1, 0, 3, 4, 8}, subconj[12], tamanhoSubconjunto, num, resultado;

  //exibindo o vetor
  printf("\n\nVetor: \n");
  exibirVetor(vet, 12);

  //pedindo ao usuário
  printf("Entre com o numero do subconjunto: \n");
  scanf("%d", &num);

  //chamando a função
  resultado = subconjuntos(vet, 12, num, subconj, &tamanhoSubconjunto);

  //exibindo o resultado
  if (resultado == 1) {

    printf("\n\nSubconjunto %d encontrado: ", num);
    exibirVetor(subconj, tamanhoSubconjunto);
  } else {

    printf("\n\nSubconjunto %d nao encontrado: ", num);
  }

  return 0;
}

//Funções
int subconjuntos(int vetor[], int tamanho, int n, int subconjunto[], int *tamanhoSubconjunto) {

  //declaração de variáveis
  int i, j, cont = 0;
  *tamanhoSubconjunto = 0;

  //iterando sobre o vetor
  for (i = 0; i < tamanho; i++) {

    if (vetor[i]==0) {

      cont++;  
    } else if (cont == n - 1) {

      subconjunto[j++] = vetor[i];
      (*tamanhoSubconjunto)++;
    } else if (cont >= n) {

      break;
    }
  }

  return cont >= n? 1 : 0;
}

void exibirVetor(int vetor[], int tamanho) {

  //declaração de variáveis
  int i;

  for (i = 0; i < tamanho; i++) {

    printf("%d ", vetor[i]);
  }
  printf("\n");
}