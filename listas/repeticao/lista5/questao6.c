#include <stdio.h>

int main() {

    //declarando variáveis
    int i, n, termo = 1, r = 2;

    //pedindo 'n' ao usuário
    printf("Digite um numero inteiro(limite): \n");
    scanf("%d", &n);

    //calculando os primeiros termos da série
    for (i = 1; i <= n; i++) {
        
        printf("%d,", termo);
        
        //atualizando o termo
        termo *= r;
        
        //atualizando a razão
        r *= 2;
    }
    return 0;
}