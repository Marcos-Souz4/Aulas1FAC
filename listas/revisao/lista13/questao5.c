/* Considerando o critério de avaliação da
FAETERJ-Rio, pede-se uma função que, dadas as
notas de um aluno, determine se ele está
aprovado (retornando 1) ou reprovado
(retornando 0).

Nota: a análise deve ser feita sobre as notas da AV1,
AV2 e, caso aplicável, da AVF também. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int aprovacao(float av1, float av2);

//main
int main() {

    //declaração de variáveis
    float av1, av2, resultado;

    //pedindo ao usuário
    printf("\n\nEntre com a sua nota da AV1: \n");
    scanf("%f", &av1);

    printf("Entre com a sua nota da AV2: \n");
    scanf("%f", &av2);

    //chamando a função
    resultado = aprovacao(av1, av2);

    if (resultado == 1) {

        printf("Você está aprovado!\n");
    } else {

        printf("Você está reprovado!\n");
    }

    return 0;
}

//funções
int aprovacao(float av1, float av2) {

    //declaração de variáveis
    float avF, mediaParaAvf, mediaFinal;

    //vendo se a média final ficou menor que 6 para fazer a AVF
    mediaParaAvf = (av1 + av2) / 2;
    if (mediaParaAvf < 6.0) {

        //pedindo ao usuário
        printf("Entre com a sua nota da Avf: \n");
        scanf("%f", &avF);

        //para ver se passou
        mediaFinal = (mediaParaAvf + avF) / 2;

        //conferindo a nota depois de fazer a AVF
        if (mediaFinal < 6.0) {

            return 0;
        } else {

            return 1;
        }
    } else {

        return 1;
    }

}