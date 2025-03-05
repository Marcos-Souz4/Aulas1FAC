/* ERROS: 
1º: variável 'retorno' não existe ***
2º: a função sempre retornará 1 (verdadeiro) ?
3º: o valor da variável 'quant' não foi declarado(lixo de memória) ***
4º: a função 'exibir' não existe ***
5º: a função está jogando os elementos para a direita de forma equivocada ?
6º: não se usa a variável 'capacidade' dentro da função ?

CONSEQUÊNCIAS: 
1º: o código não compilará 
2º: 
3º: terá um comportamento anormal, pois 'quant' terá lixo de memória
4º: código também não compilará
5º: 

SOLUÇÕES:
1º: declarar como 'int'
2º: 
3º: declarar o valor de 'quant' 
4º: criar esta função, com o objetivo de exibir o vetor
5º: 
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int funcao(int vet[], int quant, int capacidade, int n);

//Main
int main() {

  //declaração de variáveis
  int vetor[10];
  int quant;

  retorno = funcao(vetor, quant, 10, 7);

  if (funcao(vetor, quant, 10, 7) == 0) {

    printf("Erro na insercao!");
  } else {

    printf("Insercao realizada!");
    exibir(vetor, 10);
  }

  return 0;
}

//Funções
int funcao(int vet[], int quant, int capacidade, int n) {

  //declaração de variáveis
  int i;

  for (i = 0; i < quant; i++) {

    vet[i+1] = vet[i];

  }
  vet[0] = n;
  quant++;
  return 1;
}