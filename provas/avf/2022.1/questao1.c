/* Desenvolver uma função que, dado um número inteiro 'n',
preencha um vetor com todos os divisores de 'n'. */

//protótipos das funções
void preencher(int vetor[], int *tamanho, int n);
void mostrarVetor(int vetor[], int tamanho);

//Main
int main() {

    //declaração de variáveis
    int num, vet[20], tamanho = 0;

    //pedindo ao usuário
    printf("\n\nEntre com um numero inteiro 'n': \n");
    scanf("%d", &num);

    //chamando a função
    preencher(vet, &tamanho, num);
    mostrarVetor(vet, tamanho);

    return 0;
}

//Funções
void preencher(int vetor[], int *tamanho, int n) {

    //declaração de variáveis
    int i;

    for (i = 0; i <= n; i++) {

        if (n%i == 0) {

            vetor[*tamanho] = i;
            (*tamanho)++;
        }
    }

}

void mostrarVetor(int vetor[], int tamanho) {

    //declaração de variáveis
    int i;

    //iterando todas as posições do vetor
    for (i = 0; i < tamanho; i++) {

        printf("%d ", vetor[i]);
    }
    printf("\n");
}