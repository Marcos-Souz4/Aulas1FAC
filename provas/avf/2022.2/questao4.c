/* Faça uma função que, dado um vetor de inteiros,
desloque os valores das posições p1 a p2 n posições
para a direita.

Observação: caso não seja possível o deslocamento, a
função deverá **retornar 0; caso contrário, o deslocamento
será realizado e o **valor 1 retornado pela função. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int deslocar(int vetor[], int tamanho, int p1, int p2, int n);
void exibirVetor(int vetor[], int tamanho);

//Main
int main() {

  //declaração de variáveis
  int vet[12] = {1, 2, 3, 4, 5, 6}, tamanho = 12;
  int p1, p2, num, resultado;

  //exibindo o vetor
  printf("\n\nVetor: \n");
  exibirVetor(vet, tamanho);

  //pedindo ao usuário
  printf("P1: \n");
  scanf("%d", &p1);

  printf("P2: \n");
  scanf("%d", &p2);

  printf("N posicoes a direita: \n");
  scanf("%d", &num);    

  //chamando a função
  resultado = deslocar(vet, tamanho, p1, p2, num);

  //imprimindo o resultado
  if (resultado == 0) {

    printf("\n\nNao foi possivel realizar o deslocamento!");
  } else {

    printf("Deslocamento realizado com sucesso!");
    exibirVetor(vet, tamanho);
  }

  return 0;
}

//funções
int deslocar(int vetor[], int tamanho, int p1, int p2, int n) {

  //declaração de variáveis
  int i, j, vetTemp[];

  if (n==0) {

    return 0; //caso especial
  }

  if (n < 0) {

    n = -n; //caso especial
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