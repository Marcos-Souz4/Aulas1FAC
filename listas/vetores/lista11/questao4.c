/* Fazer uma função que armazene em um vetor
os 6 primeiros termos da seguinte sequência:
S = 1, 2, 4, 7, 11, 16, ...

Nota: observem que a diferença entre o 1º e 2º
elementos é igual a 1, entre o 2º e 3º é igual a
2, entre o 3º e o 4º é igual a 3, e assim
sucessivamente. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void pa(int vetor[], int tamanho);
void exibirVetor(int vetor[], int tamanho);

//Main
int main() {

    //declaração de variáveis
    int vet[6];

    //chamando a função
    pa(vet, 6);

    //imprimindo o vetor
    exibirVetor(vet, 6);

    return 0;
}

//Funções
void pa(int vetor[], int tamanho) {

    //declaração de variáveis
    int i, termo = 1, diferenca = 1;

    //inicializando o primeiro termo
    vetor[0] = termo;

    for (i = 0; i < tamanho; i++) {

        termo += diferenca; 
        vetor[i] = termo;
        diferenca++; //incrementando a diferença
    }
}

void exibirVetor(int vetor[], int tamanho) {

    //declaração de variáveis
    int i;

    //iterando todas as posições de um vetor
    for (i = 0; i < tamanho; i++) {

        printf("%d ", vetor[i]);
    }
    printf("\n");
}