/* Fazer uma função que, dados dois números
inteiros num1 e num2, ***determine*** se num2 é
uma potência de num1. */

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int potencia(int n1, int n2);

//Main
int main() {

  //declaração de variáveis
  int num1, num2, resultado;

  //pedindo ao usuário
  printf("\n\nEntre com um numero inteiro: \n");
  scanf("%d", &num1);

  printf("Entre com outro numero inteiro: \n");
  scanf("%d", &num2);

  //chamando a função
  resultado = potencia(num1, num2);

  //imprimindo o resultado
  if (resultado == 1) {

    printf("\n\n%d e uma potencia de %d!\n", num2, num1);
  } else {

    printf("\n\n%d nao e uma potencia de %d!\n", num2, num1);
  }

  return 0;
}

//Funções
int potencia(int n1, int n2) {

  //declaração de variáveis
  int pot = 1;

  //caso especial de 'n1'
  if (n1 <= 1) {

    return (n2 == 1) ? 1:0;
  }

  //calculando as potencias de n1 até alcançar n2
  while (pot < n2) {

    pot *= n1;
  }

  //veficando se a última potência é igual a 'n2'
  if (pot == n2) {

    return 1;
  } else {

    return 0;
  }
}