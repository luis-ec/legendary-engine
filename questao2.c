#include <stdio.h>
int main(){

    int n1, antecessor, sucessor;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    antecessor = n1 - 1;
    sucessor = n1 + 1;

    printf("O seu antecessor e: %d\n", antecessor);
    printf("O seu sucessor e: %d\n", sucessor);

 return 0;
}