#include <stdio.h>

int main (){

    float salarioFixo, vendas, salarioTotal;
    int porcentagem = 15; 

    printf("Digite o seu salario: ");
    scanf("%f", &salarioFixo);
    
    printf("Digite a quantidade de vendas: "); 
    scanf("%f", &vendas);

    salarioTotal = salarioFixo + (vendas * porcentagem/100);

    printf("O seu  salario e: %f\n", salarioTotal);

    return 0; 
}
