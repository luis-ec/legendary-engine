#include <stdio.h>
int main(){

    int n1, n2, resultado1, resultado2, resultado3;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    resultado1 = n1 + n2;
    resultado2 = n1 * n2;
    resultado3 = n1 / n2;

    printf("O sua soma e: %d\n", resultado1);
    printf("O seu produto e: %d\n", resultado2);
    printf("O seu quociente e: %d\n", resultado3);

 return 0;
}