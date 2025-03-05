#include <stdio.h>

int main() {

    //declarando variáveis
    int horasTrabalhadas;
    float valorHora, salario;

    printf("Digite as horas semanais trabalhadas: \n");
    scanf("%d", &horasTrabalhadas);

    printf("Digite quanto ganha por hora: \n");
    scanf("%f", &valorHora);

    if (horasTrabalhadas <= 40) {

        salario = horasTrabalhadas * valorHora;
        printf("Você receberá: %.2f\n", salario);
    } else {

        salario = 
        printf("Você receberá: %.2f\n", salario);
    }

    return 0;
}