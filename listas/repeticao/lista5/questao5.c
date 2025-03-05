#include <stdio.h>

int main() {

    //declarando variáveis
    int i, n, termo = 1;

    //pedindo 'n'
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    //calculando os primeiros termos da série até 'n'
    for (i = 1; i <= n; i++) {

        printf("%d", termo);

        //atualizando o 'termo'
        termo *= 2;
    }

    return 0;
}