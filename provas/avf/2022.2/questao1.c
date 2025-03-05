/* Implementar uma função que permaneça lendo valores
inteiros, enquanto estes estiverem em ordem
crescente. Ao final, retornar a quantidade de valores
lidos, assim como a quantidade de números distintos
lidos.

Observação: as duas quantidades devem ignorar o
último elemento, responsável pelo término da leitura. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void valoresCrescente(int *quant, int *quantDistintos);

//Main
int main() {

  //declaração de variáveis
  int quant, quantDistintos;

  //chamando a função
  valoresCrescente(&quant, &quantDistintos);

  //imprimindo o resultado
  printf("\n\nQuantidade de valores lidos: \n", quant);
  printf("\n\nQuantidade de valores distindos lidos: \n", quantDistintos);

  return 0;
}

//Funções
void valoresCrescente(int *quant, int *quantDistintos) {

  //declaração de variáveis
  int i, num, numPrev;
  *quant = 0;
  *quantDistintos = 0;

  printf("\n\nEntre com um numero: \n");
  scanf("%d", &numPrev);

  
}