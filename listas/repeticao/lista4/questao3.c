#include <stdio.h>

int main(void) {

    //declaração de variáveis
    float quantia, rendimento, rendimentoMes;
    int meses, anos;

    //dados de entrada
    printf("Quantia investida: \n");
    scanf("%f", &quantia);

    printf("Rendimento mensal: \n");
    scanf("%f", &rendimento);

    printf("Tempo (em anos) de investimento: \n");
    scanf("%d", &anos);

    //convertendo anos para meses
    meses = anos*12;

    //calculando o total ao longo do tempo de investimento
    for (int i = 1; i<=meses; i++) {

        rendimentoMes = quantia * (rendimento / 100);
        quantia += rendimentoMes;
    }
    //exibindo o total acumulado ao longo do tempo
    printf("\nValor acumulado: %.2f", quantia);
    
    return 0;
}