/* Desenvolver uma função que, dado um número real n, 
arredonde-o para o valor inteiro mais próximo.

Exemplos:

n = 4.67; Resposta: 5

n = 4.23; Resposta: 4

n = 3.0; Resposta: 3

Notas:
1. E proibido o uso de funções já existentes na linguagem que possuam este mesmo objetivo;
2. Apresentar a main chamando a função solicitada. 

Pensando na questão: 
4.2 ... 
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int arredondar(float n);

// Main 
int main() {
   
    //declaração de variáveis
    int resultado;
    float num;

    //pedindo ao usuário
    printf("\n\nEntre com um numero real: \n");
    scanf("%f", &num);

    //chamando a função
    resultado = arredondar(num);

    //imprimindo o resultado
    printf("n = %.1f; Resposta: %d", num, resultado);

    return 0;
}

//Funções
int arredondar(float n) {

    //declaração de variáveis
    int parteInteira = (int)n;
    float parteFracionaria = n - parteInteira;

    if (parteFracionaria >= 0.5) {

        return parteInteira + 1;
    } else {

        return parteInteira;
    }
}