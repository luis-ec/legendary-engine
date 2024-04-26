#include <stdio.h>

int main(){
    float valorFabrica, valorImposto, valorRevendedor, valorFinal;

    printf("Digite o preco de fabrica: ");
    scanf("%f", &valorFabrica);

    valorImposto = valorFabrica * 0.45;
    //
    valorRevendedor = valorFabrica * 0.28;
    //
    valorFinal = valorFabrica + valorImposto + valorRevendedor;
    //
    printf("O preco final do carro fica: %2.f\n", valorFinal);
    
return 0;
}