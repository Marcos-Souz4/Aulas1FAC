#include <stdio.h>

int main() {

    int i;
    int a = 2;
    int b = 4;
    int c = 8;

    printf("Digite um valor 1, 2 ou 3: \n");
    scanf("%d", &i);

    if (i == 1) {

    printf("%d, %d, %d", a, b, c);
 }

    if (i == 2) {

    printf("%d, %d, %d", c, b, a);
 }

    if (i == 3) {

    printf("%d, %d, %d", a, c, b);
 }
    return 0;
}