#include <stdio.h>

int main () {

    int A = 0, B = 10, C = 10, i = 1;

    while (i <= 10) {
    
        if (C > A) {
        
            C = C - 2;
            i++;
        } else {
        
            i += 2;
            B = C % i;
        }
        
        A = A + i;
        
        printf ("A = %d\n", A);
        printf ("B = %d\n", B);
        printf ("C = %d\n", C);
        printf ("i = %d\n", i);
    }
}

/*A = 1
  B = 10
  C = 8
  i = 2

  A = 4
  B = 10
  C = 6
  i = 3

  Os valores vão mudando ao longo do loop por meio de operações 
  aritméticas e tudo isso depende dos valores 
  iniciais dados a cada variável
  */