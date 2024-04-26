#include <stdio.h>
int main(){
    float valorCompra, valorPago, troco;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);
    printf("Digite o valor pago pelo cliente: ");
    scanf("%f", &valorPago);

    troco = valorPago - valorCompra;
    printf("O troco da sua compra e %.2f\n", troco);

//

    int quantCedulas;

    printf("Quantidade de cedulas\n");

    quantCedulas = troco/200;
    if (quantCedulas > 0){
        printf("%d cedulas de R$200\n", quantCedulas);
        troco -= quantCedulas * 200;
    }

    quantCedulas = troco/100;
    if (quantCedulas > 0){
        printf("%d cedulas de R$100\n", quantCedulas);
        troco -= quantCedulas * 100;
    } 
    
    quantCedulas = troco/50;
    if (quantCedulas > 0 ){
        printf("%d cedulas de R$50\n", quantCedulas);
        troco -= quantCedulas * 50;
    }
    
    quantCedulas = troco/20;
    if (quantCedulas > 0){
        printf("%d cedulas de R$20\n", quantCedulas);
        troco -= quantCedulas * 20;
    }

    quantCedulas = troco/10;
    if (quantCedulas > 0){
        printf("%d cedulas de R$10\n", quantCedulas);
        troco -= quantCedulas * 10;
    }

    quantCedulas = troco/5;
    if (quantCedulas > 0) {
        printf("%d cedulas de R$5\n", quantCedulas);
        troco -= quantCedulas * 5;
    }

    quantCedulas = troco/2;
    if (quantCedulas > 0) {
        printf("%d cedulas de R$2\n", quantCedulas);
        troco -= quantCedulas * 2;
    }

    quantCedulas = troco/1;
    if (quantCedulas > 0) {
        printf ("%d moedas de R$1\n", quantCedulas);
        troco -= quantCedulas * 1;
    }
return 0;
}