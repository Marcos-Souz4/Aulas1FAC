/*a) média do salário da população
  b) média do número de filhos
  c) maior salário
  d) percentual de pessoas com salário até R$1.000,00*/
#include <stdio.h>

int main() {

    //declaração de variáveis
    int i, nHabitantes, nFilhos, somaSalarial = 0, somaFilhos = 0, cont1000 = 0;
    float salario, mediaSalarial, mediaFilhos, maiorSalario = 0, perc1000;

    //pedindo o nº de habitantes
    printf("Digite o numero de habitantes: \n");
    scanf("%d", &nHabitantes);

    //dados dos habitantes
    for (i = 1; i <= nHabitantes; i++) {

        printf("Numero de filhos: \n");
        scanf("%d", &nFilhos);

        printf("Salario: \n");
        scanf("%d", &salario);

        somaSalarial += salario;
        somaFilhos += nFilhos;

        //verificando o maior salário
        if (salario > maiorSalario) {

            maiorSalario = salario;
        }

        //percentual de quem ganha até R$1.000,00
        if (salario <= 1000) {

            cont1000++;
        }  
    }

    //calculando as médias
    mediaSalarial = somaSalarial/nHabitantes;
    mediaFilhos = (float)somaFilhos/nHabitantes;

    //percentual de quem recebe até R$1.000,00
    perc1000 = ((float) cont1000/nHabitantes) * 100;

    //exibindo resultados
    printf("\nMedia salarial: %.2f", mediaSalarial);
    printf("\nMedia de filhos: %.2f", mediaFilhos);
    printf("\nMaior salario: %.2f", maiorSalario);
    printf("\nPercentual dos que recebem ate 1.000,00: %.2f", perc1000);

    return 0;
}