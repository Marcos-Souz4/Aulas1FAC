/* Implementar uma função que, dado um
número inteiro, calcule (e retorne) a soma e a
média de seus divisores. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void divisores(int n, int *soma, float *media);

//main
int main() {

    //declaração de variáveis
    int n, soma;
    float media;

    //pedindo ao usuário
    printf("Entre com um numero inteiro, Tomy Marques: \n");
    scanf("%d", &n);
    
    //chamando a função
    divisores(n, &soma, &media);

    //imprimindo os resultados
    printf("\n\nSoma: %d\n", soma); //nota-se que não precisa do &
    printf("Media: %.1f\n", media);

    return 0;
}

//funções
void divisores(int n, int *soma, float *media) {

    //declaração de variáveis
    int i, somaDivisores = 0, contDivisores = 0;
    float m;

    for (i = 1; i <= n; i++) {

        //vendo se é divisor
        if (n%i == 0) {
            
            //somando os divisores e contando eles
            somaDivisores += i;
            contDivisores++;
        }
    }
        
    //calculando a média
    m = (float)somaDivisores / contDivisores;

    //atribuindo os resultados aos parâmetros de saída
    *soma = somaDivisores;
    *media = m;
}