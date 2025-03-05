//importação de bibliotecas
#include <stdio.h>
#include <limits.h>

//protótipos das funções
int maiorMultiplo(int n, int a, int b);

int main() {

    //declaração de variáveis
    int num, resultado, a, b;

    //pedindo ao usuário
    printf("\n\nEntre com um valor: \n");
    scanf("%d", &num);

    printf("Entre com o valor inicial do intervalo: \n");
    scanf("%d", &a);

    printf("Entre com o valor final do intervalo: \n");
    scanf("%d", &b);    

    //chamando a função
    resultado = maiorMultiplo(num, a, b);

    //imprimindo o resultado
    if (resultado != -1) {

        printf("n: %d; intervalo: %d, %d; maior multiplo: %d\n", num, a, b, resultado);
    } else {

        printf("Nao ha multiplos!\n\n");
    }

    return 0;
}

//Funções
int maiorMultiplo(int n, int a, int b) {

    //declaração de variáveis
    int i;

    for (i = b; i >= a; i--) {

        if (i%n==0) {

            return i;
        }
    }
    
    return -1; //se não encontrar múltiplo
}