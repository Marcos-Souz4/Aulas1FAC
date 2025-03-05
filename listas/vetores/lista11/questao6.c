/* Faça uma função que, dado um vetor de inteiros,
altere todas as ocorrências do número A pelo
número B. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void numOcorrencias(int vetor[], int tamanho, int n1, int n2, int *cont1, int *cont2);
void exibirVetor(int vetor[], int tamanho);

//Main
int main() {

    //declaração de variáveis
    int vet[10] = {1, 2, 2, 3, 3, 3, 5, 6, 6, 6}, num1, num2, cont1, cont2;

    //exibindo o vetor
    printf("\n\nVetor: \n");
    exibirVetor(vet, 10);

    //pedindo ao usuário
    printf("Qual numero quer procurar?\n");
    scanf("%d", &num1);

    printf("Outro numero que deseja procurar? \n");
    scanf("%d", &num2);

    //chamando a função e imprimindo a resposta
    numOcorrencias(vet, 10, num1, num2, &cont1, &cont2);
    printf("\n\nOcorrencias %d e %d: %d, %d", num1, num2, cont1, cont2);


    return 0;
}

//Funções
void numOcorrencias(int vetor[], int tamanho, int n1, int n2, int *cont1, int *cont2) {

    //declaração de variáveis
    int i;
    *cont1 = 0;
    *cont2 = 0;

    for (i = 0; i < tamanho; i++) {

        if (vetor[i]==n1) {

            (*cont2)++;
        }

        if (vetor[i]==n2) {

            (*cont1)++;
        }
    }
}

void exibirVetor(int vetor[], int tamanho) {

    //declaração de variáveis
    int i;

    //iterando todas as posições do vetor
    for(i = 0; i < tamanho; i++) {

        printf("%d ", vetor[i]);
    }
    printf("\n");
}