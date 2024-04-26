#include <stdio.h>
int main(){

    float n1, resultado1;

    printf("Digite quantos centimetros voce quer converter: ");
    scanf("%f", &n1);

    resultado1 = n1 / 2.54;

    printf("O seu resultado e: %f\n", resultado1);

 return 0;
}