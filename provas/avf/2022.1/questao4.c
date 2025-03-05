/* Desenvolver uma função que, dado um vetor de inteiros, 
determine se a seguinte regra é atendida: cada número n 
pode aparecer no vetor, no máximo, n vezes. Se a 
propriedade for observada, a função
deverá retornar 1; caso contrário, retornará 0 */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int propriedadeAtendida(int vetor[], int tamanho);
void mostrarVetor(int vetor[], int tamanho);

//Main
int main() {

    //declaração de variáveis
    int vet[12] = {2, 2, 5, 6, 2, 1, 1, 8, 8, 6, 3, 4}, resultado;

    //mostrar vetor
    printf("\n\nvetor: ");
    mostrarVetor(vet, 12);

    //chamando a função
    resultado = propriedadeAtendida(vet, 12);

    if (resultado == 1) {

        printf("\n\nA propriedade foi atendida!!");
    } else {

        printf("\n\nA propriedade nao foi antendida!!");
    }

    return 0;
}

//Funções
int propriedadeAtendida(int vetor[], int tamanho) {

    //declaração de variáveis
    int i, j, cont;

    //itera todas as posições do vetor
    for (i = 0; i < tamanho; i++) {

        cont = 0;

        //contando quantas vezes o número vetor[i] aparece no vetor
        for (j = 0; j < tamanho; j++) {

            if (vetor[j] == vetor[i]) {

                cont++;
            }
        }

        if (cont > vetor[i]) {

            return 0;
        }
    }

    return 1;
}

void mostrarVetor(int vetor[], int tamanho) {

    //declaração de variáveis
    int i;

    //iterando todas as posições do vetor
    for (i = 0; i < tamanho; i++) {

        printf("%d ", vetor[i]);
    }
    printf("\n");
}