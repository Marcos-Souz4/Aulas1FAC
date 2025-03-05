/* Desenvolver uma função que, dado um número
inteiro n, determine o seu maior algarismo,
assim como o menor.
Nota: apresentar a main chamando a função
implementada. */

//importação de bibliotecas
#include <stdio.h>
#include <limits.h>

//protótipos das funções
void algarismo(int n, int *maior, int *menor);

//Main
int main() {

  //declaração de variáveis
  int num, maior, menor;

  //pedindo ao usuário
  printf("\n\nEntre com um numero inteiro: \n");
  scanf("%d", &num);

  //chamando a função
  algarismo(num, &maior, &menor);

  //imprimindo o resultado
  printf("O maior algarismo e: %d\n", maior);
  printf("O menor algarismo e: %d\n", menor);

  return 0;
}

//Funções
void algarismo(int n, int *maior, int *menor) {

  //declaração de variáveis
  int digito;
  *maior = INT_MIN;
  *menor = INT_MAX;

  //verificando se é negativo
  if (n < 0) {

    n = -n;
  }

  //iterando sobre cada dígito de 'n'
  while (n > 0) {

    digito = n%10;
    if (digito > *maior) {

      *maior = digito;
    }

    if (digito < *menor) {

      *menor = digito;
    }
    n/=10;
  }
}