#include <stdio.h>

int main() {

    //declaração de variáveis
    int base, expoente, i, resposta;

    printf("Digite a base: \n");
    scanf("%d", &base);

    printf("Digite o expoente: \n");
    scanf("%d", &expoente);

    //inicializando a potência
    resposta = 1;

    //calculando a potência
    for (i = 1; i <= expoente; i++) {

        resposta *= base;
    }

    //imprimindo o resultado
    printf("\nResposta: %d", resposta);

    return 0;
}