#include <stdio.h>

int main() {

    //declarando variáveis
    int n, i, a1, razao;

    //pedindo os valores para a PA
    printf("Numero de termos da PA: \n");
    scanf("%d", &n);

    printf("Primeiro termo: \n");
    scanf("%d", &a1);

    printf("Razao: \n");
    scanf("%d", &razao);

    //calculando os 'n' primeiros termos de uma PA com razão r
    for (i = 1; i <= n; i++) {

        //exibindo cada termo
        printf("%d", a1);

        //atualizando
        a1 += razao;
    }

    return 0;
}