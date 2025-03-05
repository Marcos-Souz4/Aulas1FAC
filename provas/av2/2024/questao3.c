/* Considere um vetor de inteiros vet e duas posições p1 e p2, 
ambas válidas, sendo p1 inferior a p2 (não é necessário verificar), 
dividindo vet em três regiões:

R1: os elementos anteriores à posição p1;
R2: os elementos compreendidos entre p1 e p2, inclusive;
R3: os elementos além de p2. 

Desenvolver uma função que receba vet, p1 e p2 e determine 
se todos os elementos da região R2 estão nas outras regiões 
(em R1 e/ou em R3). Caso esteja, a função retornará o valor 1; 
caso contrário, 0. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int elementosRegioes(int vetor[], int tamanho, int p1, int p2);
void mostrarVetor(int vetor[], int tamanho);

//Main
int main() {

    //declaração de variáveis
    int vet[10] = {4, 1, 8, 7, 1, 4, 7, 7, 5, 8}, p1 = 2, p2 = 4, resultado;

    //mostrando vetor
    printf("\n\nVetor: \n");
    mostrarVetor(vet, 10);

    printf("p1: %d; p2: %d", p1, p2);

    //chamando a função
    resultado = elementosRegioes(vet, 10, p1, p2);

    //imprimindo o resultado
    if (resultado == 1) {

        printf("\n\nTodos os elementos de R2 estao em R1 e/ou em R3");
    } else {

        printf("\n\nAlgum dos elementos de R2 não estão em R1 e/ou em R3");
    }

    return 0;
}

//Funções
int elementosRegioes(int vetor[], int tamanho, int p1, int p2) {

    //declaração de variáveis
    int i, j, encontrado;

    //iterando R2
    for (i = p1; i <= p2; i++) {

        encontrado = 0;

        //verifica se o elemento de R2 está em R1
        for (j = 0; j < p1; j++) {

            if (vetor[i] == vetor[j]) {

                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {

            for (j = p2 + 1; j < tamanho; j++) {

                if (vetor[i] == vetor[j]) {

                    encontrado = 1;
                    break;
                }
            }
        }
        
        if (!encontrado) {

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