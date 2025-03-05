#include <stdio.h>

int main() {

    //declarando variáveis
    float quantia;
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1;

    printf("Digite uma quantia em reais: \n");
    scanf("%f", &quantia);

    //calculando a quantia de notas
    nota100 = quantia / 100;
    quantia -= nota100 * 100;

    nota50 = quantia / 50;
    quantia -= nota50 * 50;

    nota20 = quantia / 20;
    quantia -= nota20 * 20;

    nota10 = quantia / 10;
    quantia -= nota10 * 10;
    
    nota5 = quantia / 5;
    quantia -= nota5 * 5;
    
    nota2 = quantia / 2;
    quantia -= nota2 * 2;

    nota1 = quantia;
    quantia -= nota1;

    //imprimindo o resultado
    printf("Quantidade de notas/moedas: \n");
    printf("100 reais: %d\n", nota100);
    printf("50 reais: %d\n", nota50);
    printf("20 reais: %d\n", nota20);
    printf("10 reais: %d\n", nota10);
    printf("5 reais: %d\n", nota5);
    printf("2 reais: %d\n", nota2);
    printf("1 real: %d\n", nota1);

    return 0;
}