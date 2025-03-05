#include <stdio.h>

int main() {

    //declaração de variáveis
    int i, n, numero, maior, menor;

    printf("Entre com a quantidade de valores: \n");
    scanf("%d", &n);

    //lendo o primeiro valor
    printf("Digite seu primeiro valor: \n");
    scanf("%d", &numero);

    //inicializando 'maior' e 'menor'
    maior = menor = numero;

    //pedindo os 'n' valores
    for (i = 2; i <= n; i++) {

        printf("Digite um numero: \n");
        scanf("%d", &numero);

        //verificando o maior e menor valor
        if (numero > maior) {

            numero = maior;
        } else {

            if (numero > maior) {

                maior = numero; 
            }            
        
            }
        }

    //imprimindo os resultados
    printf("\n\nO maior elemento e %d e o menor elemento e %d", maior, menor);

    return 0;
}