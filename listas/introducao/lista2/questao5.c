#include <stdio.h>

int main() {

    //declaração de variáveis
    int codigo, quantidade;
    float preco, valorTotal;

    //pedindo ao usuário
    printf("Digite o codigo do item pedido: \n");
    scanf("%d", &codigo);

    printf("Digite a quantidade: \n");
    scanf("%d", &quantidade);

    //iterando entre os códigos
    switch (codigo) {

        case 100: //cachorro quente
            preco = 3.50;
            break;
        case 101: //Bauru simples
            preco = 4.50;
            break;
        case 102: //Bauru com ovo
            preco = 5.20;
            break;
        case 103: //Hamburguer
            preco = 3.00;
            break;
        case 104: //Cheeseburguer
            preco = 4.00;
            break;
        case 105: //Refrigerante
            preco = 2.50;
            break;
    }
    
    //calculando o valor total
    valorTotal = preco * quantidade;

    //imprimindo o resultado
    printf("Valor total a ser pago sera: %.2f\n", valorTotal);

    return 0;
}

/*Cachorro quente 100      3,50
  Bauru simples   101      4,50
  Bauru com ovo   102      5,20
  Hamburger       103      3,00
  Cheeseburger    104      4,00
  Refrigerante    105      2,50*/