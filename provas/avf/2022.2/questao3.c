/* Desenvolver uma função que, dados dois vetores vet1 e
vet2, contendo quant1 e quant2 elementos,
respectivamente, verifique se um terceiro vetor, vet3,
com quant3 elementos, consiste na interseção de vet1
e vet2, retornando o valor 1 se for, ou 0, caso contrário. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int intersecao(int vetor1[], int tamanho1, int vetor2[], int tamanho2, int vetor3[], int tamanho3);
void exibirVetor(int vetor[], int tamanho);

//Main
int main() {

  //declaração de variáveis
  int vet1[5] = {1, 2, 3, 4, 5}, vet2[5] = {4, 5, 6, 7, 8}, vet3[2] = {4, 7}, resultado;

  //exibindo os vetores 1, 2 e 3
  printf("\n\nVetor 1: \n");
  exibirVetor(vet1, 5);

  printf("Vetor 2: \n");
  exibirVetor(vet2, 5);

  printf("Vetor 3: \n");
  exibirVetor(vet3, 2);

  //chamando a função
  resultado = intersecao(vet1, 5, vet2, 5, vet3, 2);

  //imprimindo o resultado
  if (resultado == 1) {

    printf("\n\nVetor 3 consiste na intersecao entre vetor 1 e vetor 2!");
  } else {

    printf("\n\nVetor 3 nao consiste na intersecao entre vetor 1 e vetor 2!");
  }

  return 0;
}

//Funções
int intersecao(int vetor1[], int tamanho1, int vetor2[], int tamanho2, int vetor3[], int tamanho3) {

  //declaração de variáveis
  int i, j, k, encontrado, vetIntersecao[tamanho1 + tamanho2];
  int tamanhoIntersecao = 0; 

  //iterando sobre os vetores 1 e 2 para saber sua interseção
  for (i = 0; i < tamanho1; i++) {

    for (j = 0; j < tamanho2; j++) {

      if (vetor1[i]==vetor2[j]) {

        //verificando se o elemento já está na interseção
        encontrado = 0;
        for (k = 0; k < tamanhoIntersecao; k++) {

          if (vetIntersecao[k] == vetor1[i]) {

            encontrado = 1;
            break;
          }
        }

        if (!encontrado) {

          vetIntersecao[tamanhoIntersecao++] = vetor1[i];
        }
      }
    }
  }

  if (tamanho3 != tamanhoIntersecao) {

    return 0;
  }

  for (i = 0; i < tamanho3; i++) {

    encontrado = 0;
    for (j = 0; j < tamanhoIntersecao; j++) {

      if (vetor3[i]==vetIntersecao[j]) {

        encontrado = 1;
        break;
      }
    }

    if (!encontrado) {

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