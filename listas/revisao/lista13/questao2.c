/* A seguir é apresentada uma função que recebe,
como parâmetros, um vetor de inteiros e a
quantidade de elementos nele.
Pede-se, a partir da análise do código, que seja
informado o objetivo desta função (e não a
descrição de cada comando). */

void questao02 (int v[], int *quant) {
  
  int i, j, k;
  i = 1;
  
  //iterando sobre o vetor
  while (i < *quant) {
    
    j = 0;
    while (j < i) {
      
      // v[0] == v[1]
      if (v[j] == v[i]) {
      
        break;
      }
    
      //incrementa o 'j'
      j++;
    }

    //j vira 1
    if (j != i) {

      for (k = i; k < (*quant)-1; k++) {
      
        v[k] = v[k+1];
      }
    
      (*quant)--;
    } else {
      
      i++;
    }
  }
}