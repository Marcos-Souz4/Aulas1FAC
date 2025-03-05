#include <stdio.h>

int main(void) {

    //declarando variáveis
    float saldoMedio, credito;

    printf("Digite seu saldo medio no ultimo ano: \n");
    scanf("%f", &saldoMedio);

    if (saldoMedio < 1000.00) {
    credito = 0.00;

    } else if (saldoMedio >= 1000.00 && saldoMedio <= 1499.99) {
        credito = saldoMedio * 0.20;
        printf("Seu credito e: %f", credito);

    } else if (saldoMedio >= 1500.00 && saldoMedio <= 2499.99) {
        credito = saldoMedio * 0.30;
        printf("Seu credito e: %f\n", credito);

    } else {
        credito = saldoMedio * 0.40;

    }

    return 0;
}