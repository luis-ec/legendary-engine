#include <stdio.h>
int main(){

    float raio, resultado1;
    const float pi = 3.14159;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    resultado1 = pi * pow(raio, 2);

    printf("O seu resultado e: %f\n", resultado1);

 return 0;
}