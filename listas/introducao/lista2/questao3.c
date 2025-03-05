#include <stdio.h>

int main() {

    //declarando variáveis
    int nProduto, formaPagamento;
    float valorProduto;

    printf("Digite o codigo do produto: \n");
    scanf("%d", &nProduto);

    printf("\nQual a forma de pagamento(1- a vista; 2- parcelamento sem juros; 3 - parcelamento com juros): \n");
    scanf("%d", &formaPagamento);

    if (formaPagamento == 1) {

        valorProduto *= 0.1;
    } else {

        if (formaPagamento == 2) {


        }

    }

    //imprimindo resultado
    printf("");

    return 0;
}