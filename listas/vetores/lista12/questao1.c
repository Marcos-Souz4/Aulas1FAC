//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void funcao01 (int v[], int tam, int pos);
void funcao02(int x);
void funcao03(int v[], int tam);

//Main
int main () {
    
    //declaração de variáveis
    int i, vet[5] = {1, 2, 3, 4, 5}, quant = 5;

    //iterando o vetor
    for (i = 0; i < quant; i++) {
        
        if (i%2==0) { //para 0, para 2 e para 4
  
            funcao01 (vet, quant, i);
        }   else { //para 1, 3

            funcao02 (vet[i]);
        }
        
        funcao03 (vet, quant);
    }
}

//Funções
//
void funcao01 (int v[], int tam, int pos) {

    //declaração de variáveis
    int i;

    //acontece 3 vezes 
    for (i = tam-1; i >= pos; i -= 2) {
 
        v[i] = v[i]*2;
    }
}

//incrementa o valor de vet[i]
void funcao02(int x) {

    x++;
}

//Exibi o vetor
void funcao03(int v[], int tam) {

    int i;

    for (i = 0; i < tam; i++) {

        printf("%d ", v[i]);
    }
    printf("\n");
}