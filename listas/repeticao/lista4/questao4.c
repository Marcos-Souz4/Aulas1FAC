#include <stdio.h>
//declaração de constantes
#define QUANT 300

int main() {

    //declaração de variáveis
    float numero, somaP, mediaP;
    int i, contN = 0, contP = 0;

    //lendo os diversos valores    
    for (i = 1; i <= QUANT; i++) {
    
    //obtendo cada valor
    printf("Entre com um numero: ");    
    scanf("%f", &numero);

    //verificando se 'numero' é negativo 
    if (numero < 0) {

        contN++;
    } else {

        //verificando se o 'numero' é positivo(pois poderia ser igual a 0)
        if (numero > 0) {
    
        //contando a quantidade de positivos
        contP++;

        //somando os números positivos
        somaP += numero;
       }
    }
}
    //exibindo os resultados
    printf("\n\nQuantidade de valores negativos: %d\n", contN);

    return 0;
}