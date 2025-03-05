/* Desenvolver uma função que, dado um número
inteiro N, calcule o valor do seguinte
somatório:
S = 1 + (n - 1)¹/1! + (n - 2)²/2! ... 1^n-1/(n - 1)! 

fatorial: 3! = 3.2.1
*/

//importação de bibliotecas
#include <stdio.h>
 
//protótipos das funções
float somatorio(int n);
int fatorial(int n);
int valorCima(int n);

//Main
int main() {

    //declaração de variáveis
    int n, resultado;

    //pedindo ao usuário
    printf("Entre com o valor de 'n': \n");
    scanf("%d", &n);

    //chamando a função
    resultado = somatorio(n);

    //imprimindo o resultado
    printf("\n\nSomatorio: %.1f", resultado);

    return 0;
}

//Funções
float somatorio(int n) {

    //declaração de variáveis
    int soma;

}

int fatorial(int n) {

    //declaração de variáveis
    int i, fat = 1;

    //iterando os fatoriais
    for (i = 2; i <= n; i++) {

        fat *= i;
    }

    //retornando o resultado
    return fat;
}

int valorCima(int n) {

    //declaração de variáveis
    int i, valorCi;

    for (i = 0; i < n; i++) {

        valorCi = pow (n-i, i);
    }

    return valorCi;
}