#include <stdio.h>

int main()  {

    float peso;
    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    float altura;
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    
    float imc = peso / (altura * altura);
    
    if (imc < 18,0) {

    printf("Abaixo do peso");
 }
    
    else if (imc < 25,0) {

    printf("Peso ideal");
 }

    else if (imc < 30,0) {

    printf("Sobrepeso");
 }

    else if (imc < 35,0) {

    printf("Obesidade grau 1");
 }

    else if (imc < 40,0) {

    printf("Obesidade grau 2");
 } else {

    printf("Obesidade 3");
} 

 return 0;
}