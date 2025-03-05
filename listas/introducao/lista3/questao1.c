#include <stdio.h>

int main() {

    //declarando variáveis
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;

    //primeira data
    printf("Digite um dia: \n");
    scanf("%d", &dia1);
    printf("Digite um mes: \n");
    scanf("%d", &mes1);
    printf("%d", ano1);

    //segunda data
    printf("Digite outro dia: \n");
    scanf("%d", &dia2);
    printf("Digite outro mes: \n");
    scanf("%d", mes2);
    printf("Digite outro ano: \n");
    scanf("%d", &ano2);

    //qual data é a mais recente
    if (ano1 > ano2) {

        printf("");
    }

    return 0;
}