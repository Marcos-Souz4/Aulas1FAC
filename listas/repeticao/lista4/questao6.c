#include <stdio.h>

int main(void) {

    //declaração de variáveis
    int n, i, alg1, alg2;

    //obtendo valor de n
    print("Digite um numero(1..18): \n");
    scanf("%d", &n);

    //verificando se o número é inválido (maior que 18)
    if ((n <= 0) || (n > 18)) {

        printf("\nValor invalido! O programa sera encerrado!\n");
    } else {

        for (i = 1; i <= 99; i++) {

            alg1= i / 10;
            alg2 = i%10;
        }
    }

    return 0;
}