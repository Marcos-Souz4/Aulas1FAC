//definição de bibliotecas
#include <stdio.h>

//definição de constantes
const int CAP = 10; //capacidade máxima do vetor

//protótipos das funções
void bemvindo();
void menu();
int inserir(int vet[], int *quant, int num); //1ª opção
int remover(int vet[], int *quant, int num); //2ª opção
int removerId(int vet[], int *quant, int num); //3ª opção
int alterar(int vet[], int *quant, int ant, int novo); //4ª opção
int busca(int vet[], int quant); //5ª opção
void exibirVet(int vet[], int quant); //6ª opção
void fechamento(); //7ª opção
int buscaGeral(int vet[], int quant, int num);

//Main
int main() {
  
  //declaração de variáveis
  int vet[CAP], quant = 0, nMenu, num, alt;

  //abertura
  bemvindo();
  do{

    //exibindo a abertura e o menu com as possíveis ações para serem realizadas
    menu();
    printf("Digite o codigo da acao para realiza-la: ");
    scanf("%d", &nMenu);
    printf("\n\n");

    //iterando entre as opções
    switch (nMenu) {
      
      case 1 :
        printf("Digite o numero que deseja inserir: ");
        scanf("%d", &num);
        printf("\n\n");
        inserir(vet, &quant, num);
      break;
      
      case 2 :
        printf("Digite o numero que deseja remover: ");
        scanf("%d", &num);
        printf("\n\n");
        remover(vet, &quant, num);
      break;
      
      case 3 :
        printf("Digite o indice do n que deseja remover: ");
        scanf("%d", &num);
        printf("\n\n");
        removerId(vet, &quant, num);
      break;
      
      case 4 :
        printf("Digite o n que sera alterado: ");
        scanf("%d", &num);
        printf("\n");
        printf("Digite o n que ira se tornar: ");
        scanf("%d", &alt);
        printf("\n\n");
        alterar(vet, &quant, num, alt);
      break;
      
      case 5 :
        printf("%d", busca(vet, quant));
        printf("\n\n");
      break;
      
      case 6 :
        exibirVet(vet, quant);
      break;
      
      case 7 :
        fechamento();
      break;

      default:
        printf("Codigo invalido, tente novamente\n\n");
    }

  } while (nMenu != 7); //o código 7 é o de saída
  
  return 0;
}

//--------------------------------------------------------------------------------------
//             FUNÇÕES PRINCIPAIS
//--------------------------------------------------------------------------------------

void bemvindo() {

  printf("\n");
  printf("                  OOOOOOOOOO                 \n");
  printf("              OOOOOOOOOOOOOOOOO              \n");
  printf("            OOOOOO  OOOOOOO  OOOOOO          \n");
  printf("          OOOOOO      OOO      OOOOOO        \n"); 
  printf("        OOOOOOOO  #   OOO  #   OOOOOOOO      \n"); 
  printf("      OOOOOOOOOO    OOOOOO    OOOOOOOO000    \n");
  printf("     0OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO0OO0    BEM VINDO    \n");
  printf("     0OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO0      AO         \n");
  printf("      OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO    PROGRAMA      \n");
  printf("      OOOO  OOOOOOOOOOOOOOOOOOOOO   0OOOO    DO VETOR,     \n");
  printf("        OOOO   OOOOOOOOOOOOOOOOOO  OOOO  QUERIDO USUARIO ;)\n");
  printf("          OOOOO   OOOOOOOOOOOOO   OOOO      \n");
  printf("            OOOOOO   OOOOOOO   OOOOOO       \n");
  printf("              OOOOOO       OOOOOO           \n");
  printf("                  OOOOOOOOOO                \n");
  printf("            FEITO POR MARCOS E PEDRO        \n");
  printf("\n");    
}

void menu() {

  printf("'1' = Insercao de um novo numero;\n");
  printf("'2' = Remocao de determinado valor;\n");
  printf("'3' = Remocao do elemento que encontra se em uma dada posicao;\n");
  printf("'4' = Alteracao de um valor por outro;\n");
  printf("'5' = Busca de determinado numero, retornando a sua posicao;\n");
  printf("'6' = Exibicao de todos os elementos do vetor.\n");
  printf("'7' = Finalizar programa\n\n");
}

int inserir(int vet[], int *quant, int num) {

  //declaração de variáveis
  int i, pos, op = 0;

  //vendo se o vetor tem espaço
  if (*quant >= CAP) {
    
    printf("Vetor cheio!!!\n\n");
  } else {
  
    pos = buscaGeral(vet, *quant, num);
  
    //arrumando a posição do vetor
    for(i = *quant-1; i >= pos; i--) {
      
      vet[i+1] = vet[i];
    }

    vet[pos] = num;
    (*quant)++;
    op++;
  }

  //vendo se a operação ocorreu ou não e printando na tela
  if (op == 0) {

    printf("A operacao nao aconteceu!!\n");
  } else {

    printf("A operacao ocorreu!!\n");
  }
  
  return op;
}

int remover(int vet[], int *quant, int num) {
  
  //declaração de variáveis
  int i, j, op = 0;

  for (i = 0; i < *quant; i++) {
    
    if (vet[i] == num) {
      
      for(j = i; j < *quant; j++) {
        
        vet[j] = vet[j+1];
      }
      
      (*quant)--;
      i--;  //ajustar índice após remoção
      op++;
    }     
  }

  if (op == 0) {

    printf("Numero nao encontrado!!\n\n");
  } else {

    printf("Numero removido!!\n\n");
  }

  return op;
}

//remover um número por índice
int removerId(int vet[], int *quant, int num) {

  //declaração de variáveis
  int i, op = 0;

  if (num <= *quant) {
    
    for (i = num; i < *quant; i++){
      
      vet[i] = vet[i+1];     
    }

    (*quant)--;
  }

  //vendo se a operação ocorreu
  if (op == 0) {

    printf("Indice nao encontrado!!\n");
  } else {

    printf("Numero removido!!\n\n");
  }

  return op;  
}

int alterar(int vet[], int *quant, int ant, int novo) {
  
  //declaração de variáveis
  int i, verIse, verRem, op = 0;

  verRem = remover(vet, &(*quant), ant);
  
  if (verRem > 0) {
  
    for (i = 1; i <= verRem; i++) {
      
      verIse = inserir(vet, &(*quant), novo);
    }
    
    op = 1;
  }
  
  //vendo se a operação ocorreu
  if (op == 0) {

    printf("Numero nao alterado!!\n");
  } else {

    printf("Numero alterado!!\n\n");
  }

  return op;
}

int busca(int vet[], int quant) {

    //declaração de variáveis  
    int i, num;

    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &num);
    printf("\n\n");

    for(i = 0; i < quant; i++) {

      if (vet[i] == num) {
      
        return i; //sucesso na busca
      } else if (vet[i] > num) {
      
        return -1; //falha na busca
      }
    }
}

void exibirVet(int vet[], int quant) {

  //declaração de variáveis
  int i;

  printf("\n Vetor: ");

  for(i = 0; i < quant; i++) {

    printf("%d ", vet[i]);
  }

  printf("\n\n");
}

void fechamento() {

    printf("\n\n");
    printf("      P  /_\\  P                                \n");
    printf("     /_\\_|_|_/_\\                              \n");
    printf(" n_n | ||. .|| | n_n         OBRIGADO POR       \n");
    printf(" |_|_|nnnn nnnn|_|_|     ESCOLHER O PROGRAMA    \n");
    printf("|" "  |  |_|  |"  " |               DO VETOR!!! \n");
    printf("|_____| ' _ ' |_____|                           \n");
    printf("      \\__|_|__/          TENHA UM OTIMO DIA    \n");
    printf("\n\n");
}

//--------------------------------------------------------------------------------------
//             FUNÇÕES AUXILIARES
//--------------------------------------------------------------------------------------

int buscaGeral(int vet[], int quant, int num) {

  //declaração de variáveis 
  int i;

  for(i = 0; i < quant; i++) {
    
    if (vet[i] >= num) {
      
      return i;
    }
  }

  return quant; 
}