#include <stdio.h>
int main(){

    int n1, n2, resultado1, resultado2;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    resultado1 = n1 / n2;
    resultado2 = n1 / n2;

    printf("O seu quociente e: %d\n", resultado1);
    printf("O seu resto e: %d\n", resultado2);

 return 0;
}