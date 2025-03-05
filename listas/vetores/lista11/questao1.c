/* Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A. 

pensando em vetor:
Precisa declarar o tamanho e o vetor em si */

//importação de bibliotecas
#include <stdio.h>
#include <time.h>

//protótipo(s) da(s) função(ões)
int numOcorrencias(int a[], int tamanho, int x);

void exibirVetor(int vetor[], int tamanho); 
void preencherAleatorio(int vetor[], int tamanho, int limite); //alterando os valores do vetor

//main
int main() {

    //declaração de variáveis
    int vetor[10]; // = {1, 4, 2, 5, 6 , 8, 2, 5}
    int num, quant;

    //solicitando valores ao usuário
    /*for (i = 0; i < 10; i++) {

        printf("Entre com um valor: \n");
        scanf("%d", &vetor[i]); 
    }
    */

    preencherAleatorio(vetor, 10, 20);

    exibirVetor(vetor, 10);

    //lendo o valor a ser buscado no vetor
    printf("\n\nEntre com o valor a ser buscado no vetor: \n");
    scanf("%d", &num);

    //atribuindo o retorno int da função em uma variável
    quant = numOcorrencias(vetor, 10, num);

    //exibindo o valor
    printf("\nForam encontradas %d ocorrencias do valor %d no vetor", quant, num);

    return 0;
}

//Funções
int numOcorrencias(int a[], int tamanho, int x) {

    //declaração de variáveis
    int i, cont = 0;

    //varrendo todas as posições dos vetores
    for (i = 0; i < tamanho; i++) {

        //verificando se 'x' está dentro do vetor
        if (a[i] == x) {

            cont++;
        }
    }

    return cont;
}

void exibirVetor(int vetor[], int tamanho) {

    //declaração de variáveis
    int i;

    printf("\nVetor: ");

    //percorrendo o vetor
    for (i = 0; i < tamanho; i++) {

        printf("%d ", vetor[i]);
    }

    printf("\n\n");
}

void preencherAleatorio(int vetor[10], int tamanho, int limite) {

    int i;

    //semente para geração de números aleatórios
    srand(time(NULL));

    for (i = 0; i < tamanho; i++) {

        vetor[i] = rand() % limite;
    }
}