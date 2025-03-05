#include <stdio.h>
//declaração de constantes
#define GRAVIDADEMERCURIO 0.37
#define GRAVIDADEVENUS 0.88
#define GRAVIDADEMARTE 0.38
#define GRAVIDADEJUPITER 2.64
#define GRAVIDADESATURNO 1.15
#define GRAVIDADEURANO 1.17

int main() {

    //declaração de variáveis
    int nPlaneta;
    float pesoTerra, pesoPlaneta;
    
    printf("Digite seu peso: \n");
    scanf("%f", &pesoTerra);

    printf("Digite um numero de um planeta(de 1 a 6): \n");
    scanf("%d", &nPlaneta);

    switch(nPlaneta) {

        case 1:
            pesoPlaneta = (pesoTerra/10) * GRAVIDADEMERCURIO;
            break;
        case 2:
            pesoPlaneta = (pesoTerra/10) * GRAVIDADEVENUS;
            break;
        case 3:
            pesoPlaneta = (pesoTerra/10) * GRAVIDADEMARTE;
            break;
        case 4:
            pesoPlaneta = (pesoTerra/10) * GRAVIDADEJUPITER;
            break;
        case 5:
            pesoPlaneta = (pesoTerra/10) * GRAVIDADESATURNO;
            break;
        case 6:
            pesoPlaneta = (pesoTerra/10) * GRAVIDADEURANO;
            break;
        default:
            printf("Codigo Invalido!\n");
            return 1;
   }
    //imprimindo os resultados
    printf("\nSeu peso no planeta escolhido eh: %.2f\n", pesoPlaneta);

    return 0;
}