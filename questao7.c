#include <stdio.h>
int main(){

    float raio, altura, area, volume;
    const float pi = 3.14159;

    printf("Digite o raio: ");
    scanf("%f", &raio);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = 2 * pi * raio * (raio + altura);

    volume = pi * raio * raio * altura;


    printf("A sua area e: %f\n", area);
    printf("O seu volume e: %f\n", volume);

 return 0;
}