//importação de bibliotecas
#include <stdio.h>
#include <stdlib.h> //abs() "valor absoluto"
#include <limits.h> //INT_MIN e INT_MAX

int main() {

    //declaração de variáveis
    int n1, n2, c1, d1, u1, c2, d2, u2, resto1, resto2, maior1, maior2, diferenca;

    printf("Entre com o primeiro valor: \n");
    scanf("%d", &n1);

    printf("Entre com o segundo valor: \n");
    scanf("%d", &n2);

    if ((n1 < 1) || (n1 > 999) || (n2 < 1) || (n2 > 999)) {

        printf("ERRO! Os numeros devem ser entre 1 e 999!\n");
    } else {

        //decompondo os valores de 'n1'
        c1 = n1 / 100;
        resto1 = n1%100;
        d1 = resto1 / 10;
        u1 = resto1%10;

        //testando o maior algarismo de 'n1'
        if ((c1 > d1) && (c1 > u1)) {

            maior1 = c1;
        } else {

            if(d1 > u1) {

                maior1 = d1;
            } else {

                maior1 = u1;
            }
        }

        //decompondo os valores de 'n2'
        c2 = n2 / 100;
        resto2 = n2%100;
        d2 = resto2 / 10;
        u2 = resto2%10;

        //testando o maior algarismo de 'n2'
        if ((c2 > d2) && (c2 > u2)) {

            maior2 = c2;
        } else {

            if (d2 > u2) {

                maior2 = d2;
            } else {

                maior2 = u2;
            }
        }

        //calculando a diferença entre os maiores algarismo
        diferenca = maior2 - maior1;

        //imprimindo resultado
        printf("A diferenca entre o maior algarismo de %d e de %d eh: %d", n1, n2, diferenca);
    }
    return 0;
}