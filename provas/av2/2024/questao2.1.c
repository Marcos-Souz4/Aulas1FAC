/* Desenvolver uma função que, dados um valor inteiro e positivo 
'n'(pode-se considerar que n é positivo; não é necessário verificar)
e uma base numérica b, determine a potência de b mais próxima de n. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int potenciaMaisProxima(int n, int b);

int main() {

    //declaração de variáveis
    int num, base, resultado;

    //pedindo ao usuário
    printf("\n\nValor inteiro e positivo: \n");
    scanf("%d", &num);

    printf("Base numerica: \n");
    scanf("%d", &base);

    //chamando a função
    resultado = potenciaMaisProxima(num, base);

    //imprimindo o resultado
    printf("\n\nValor: %d; Base: %d; Potencia mais proxima: %d", num, base, resultado);

    return 0;
}

//Funções
int potenciaMaisProxima(int n, int b) {

    //declaração de variáveis
    int i, potencia = 1, potenciaMaisProxima = 1, diferenca, menorDiferenca = n - 1;

    if (b <= 1) {

        return 1; //caso especial
    }

    //calculando as pontecias etc.
    for (i = 1; ; i++) {

        potencia *= b;
        diferenca = n - potencia;

        if (diferenca < 0) {

            diferenca = -diferenca;
        }

        if (diferenca < menorDiferenca) {

            menorDiferenca = diferenca;
            potenciaMaisProxima = potencia;
        } else {

            break;
        }

        if (potencia > n) {

            break;
        }
    }

    return potenciaMaisProxima;
}