/* Desenvolver uma função que, dados um valor inteiro e positivo 
'n'(pode-se considerar que n é positivo; não é necessário verificar)
e uma base numérica b, determine a potência de b mais próxima de n. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int potenciaMaisProxima(int n, int b);

//Main
int main() {

    //declaração de variáveis
    int num, base, resultado;

    //pedindo ao usuário
    printf("\n\nEntre com um valor inteiro e positivo: \n");
    scanf("%d", &num);

    printf("Entre com uma base numerica: \n");
    scanf("%d", &base);

    //chamando a função
    resultado = potenciaMaisProxima(num, base);

    //imprimindo o resultado
    printf("\n\nNumero: %d; Base: %d; Potencia mais proxima: %d", num, base, resultado);

    return 0;
}

//Funções
int potenciaMaisProxima(int n, int b) {

    //declaração de variáveis
    int potencia = 1, potMaisProxima = 1, menorDiferenca = n - 1, diferenca, i;

    if (b <= 1) {

        return 1; //caso especial
    }

    for (i = 1; ; i++) {

        //calculando as potencias de 'b'
        potencia *= b;
        diferenca = n - potencia;

        if (diferenca < 0) {

            diferenca = -diferenca; //converter para + se -
        }

        if (diferenca < menorDiferenca) {

            menorDiferenca = diferenca;
            potMaisProxima = potencia;
        } else {

            break; //se a diferença aumentar, podemos parar
        }

        if (potencia > n) {

            break; //parar se a potência atual de b exceder n
        }
    }

    return potMaisProxima;
}