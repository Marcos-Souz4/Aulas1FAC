/* Considere a existência de dois vetores, av1 e av2, ambos contendo 
quant números reais representando as notas dos alunos de determinada disciplina. 
Implementar uma função que retorne o número de aprovados, 
o número de reprovados e a quantidade de alunos em AVF 
(considerando o critério de avaliação da FAETERJ-Rio). */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void avaliacoes(float av1[], int tamanhoAv1, float av2[], int tamanhoAv2, int *aprovados, int *reprovados, int *quantAvf);
void exibirVetor(float vetor[], int tamanho);

//Main
int main() {

  //declaração de variáveis
  int aprovados, reprovados, quantAvf;
  float av1[5] = {5.5, 7.4, 7.2, 3.7, 2.2}, av2[5] = {10.0, 8.6, 2.6, 7.2, 8.3};

  //exibindo os vetores da AV1 e AV2
  printf("\n\nAV1: \n");
  exibirVetor(av1, 5);

  printf("AV2: \n");
  exibirVetor(av2, 5);

  //chamando a função
  avaliacoes(av1, 5, av2, 5, &aprovados, &reprovados, &quantAvf);

  //imprimindo os resultados
  printf("\n\nAprovados: %d\n", aprovados);
  printf("Reprovados: %d\n", reprovados);
  printf("Fazer AVF: %d\n", quantAvf);

  return 0;
}

//Funções
void avaliacoes(float av1[], int tamanhoAv1, float av2[], int tamanhoAv2, int *aprovados, int *reprovados, int *quantAvf) {

  //declaração de variáveis
  int i;

  *aprovados = 0;
  *reprovados = 0;
  *quantAvf = 0;

  //iterando entre os vetores
  for (i = 0; i < tamanhoAv1; i++) {

    if ((av1[i] + av2[i])/2 >= 6.0) {

      (*aprovados)++;
    } else {

      (*quantAvf)++;

      if ((av1[i] + av2[i])/2 < 2.0) {

        (*reprovados)++;
      }
    }
  }
}

void exibirVetor(float vetor[], int tamanho) {

  //declaração de variáveis
  int i;

  for (i = 0; i < tamanho; i++) {

    printf("%.1f ", vetor[i]);
  }
  printf("\n");
}