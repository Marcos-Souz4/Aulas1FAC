#include <stdio.h>

int main(void) {

    //declarando variáveis
    char genero;
    float altura, pesoIdeal;

    printf("Entre com o seu gênero(M: Masculino ou F: Feminino): \n");
    scanf("%c", &genero);

    printf("Entre com a sua altura: \n");
    scanf("%.1f", &altura);

    if (genero == 'M' || genero == 'm') {

        pesoIdeal = (72.7 * altura) - 58;
        printf("O peso ideal para um homem com %.2f de altura é: %.2f kg\n", altura, pesoIdeal);
    } else if (genero == 'F' || genero == 'f') {

        pesoIdeal = (62.1 * altura) - 44.7;
        printf("O peso ideal para uma mulher com %.2f de altura é: %.2f kg\n"), altura, pesoIdeal;
    } else {

        printf("Gênero inválido. \n");
    }

    return 0;
}