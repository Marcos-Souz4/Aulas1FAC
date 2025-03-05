#include <stdio.h>

int main() {

    //declaração de variáveis
    int idade, contadorAcima50 = 0, somaPessoasMais80Kg = 0, contadorAlturasMais80kg = 0;
    float altura, peso, mediaAlturasMais80kg = 0, maiorPeso = 0;

    do {

        printf("Digite sua idade(ou 0 para encerrar): \n");
        scanf("%d", &idade);
        if (idade == 0) {

            break;
        }

        printf("Digite sua altura(m): \n");
        scanf("%f", &altura);

        printf("Digite seu peso(kg): \n");
        scanf("%f", &peso);

        if (idade > 50) {

            contadorAcima50++;
        }

        if (peso > 80.00) {

            somaPessoasMais80Kg += altura;
            contadorAlturasMais80kg++;
        }

        if (altura > 1.65 && idade < 30) {

            if (peso > maiorPeso) {

                maiorPeso = peso;
            }
        }
    } while (1);

    //calculando a média
    if (contadorAlturasMais80kg!=0) {
        
        mediaAlturasMais80kg = somaPessoasMais80Kg / contadorAlturasMais80kg;
    }
    
    //imprimindo os resultados
    printf("Quantidade de pessoas com idade superior a 50 anos: %d\n", contadorAcima50);
    printf("Media de altura das pessoas com mais de 80kg: %.2f\n", mediaAlturasMais80kg);
    printf("Maior peso dentre as pessoas acima de 1.65 m de altura e com idade inferior a 30 anos: %.2f\n", maiorPeso);

    return 0;
}