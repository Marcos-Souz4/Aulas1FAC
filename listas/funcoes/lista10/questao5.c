/* Fazer uma função que exiba a tabuada de
potências de um número n, no intervalo de 1 a
9. Se o número não estiver neste intervalo, o
código 0 deve ser retornado; caso contrário,
retorna-se 1.

Para ilustrar, abaixo é apresentada como a
tabuada de potências de 2 deveria ser exibida:

2^0 = 1
2^1 = 2
2^2 = 4
2^3 = 8
2^4 = 16
2^5 = 32
2^6 = 64
2^7 = 128
2^8 = 256
2^9 = 512 */

//importação de bibliotecas
#include <stdio.h>
#include <math.h>

//Main
int main() {

    //declaração de variáveis
    int n;

    printf("Entre com um numero entre 1 e 9: \n");
    scanf("%d", &n);

    int resultado = tabuadaPotencias(n);
    if (resultado == 0) {

        printf("Numero fora do intervalo\n");
    }

    return 0;
}

//Funções
int tabuadaPotencias(int n) {

    //declaração de variáveis
    int expoente;

    if ((n >= 1) && (n <= 9)) {

        for (expoente = 0; expoente <= 9; expoente++) {

            printf("%d^%d = %d\n", n, expoente, (int)pow(n, expoente));
        }
        return 1;
    } else {

        return 0;
    }
}