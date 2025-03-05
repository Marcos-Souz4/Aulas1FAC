/* Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit. */

//importação de bibliotecas
#include <stdio.h>

//Protótipos das funções
float conversao(float c);

//main
int main() {

    //declarando variáveis
    float c;

    //pedindo ao usuário
    printf("\nEntre com uma temperatura em Celsius: \n");
    scanf("%f", &c);

    //chamando a função
    conversao(c);

    return 0;
}

//Funções
float conversao(float c) {

    //declaração de variáveis
    float f;
    
    f = ((9 * c) / 5) + 32;

    printf("\nTemperatura em Fahrenheit: %.1f", f);
    
    return f;
}