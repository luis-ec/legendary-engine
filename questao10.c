#include <stdio.h>

int main (){

    int valor, quantidade;

    printf("Digite o valor a ser sacado");
    scanf("%d", &valor);

    printf("Quantidade de cedulas\n");

    quantidade = valor/200;
    if (quantidade > 0){
        printf("%d cedulas de R$200\n", quantidade);
        valor %= 200;
    }

    quantidade =  valor/100;
    if (quantidade > 0){
        printf("%d cedulas de R$100\n", quantidade);
        valor %= 100;
    } 
    
    quantidade = valor/50;
    if (quantidade > 0 ){
        printf("%d cedulas de R$50\n", quantidade);
        valor %= 50;
    }
    
    quantidade = valor/20;
    if (quantidade > 0){
        printf("%d cedulas de R$20\n", quantidade);
        valor %= 20;
    }

    quantidade = valor/10;
    if (quantidade > 0){
        printf("%d cedulas de R$10\n", quantidade);
        valor %= 10;
    }

    quantidade = valor/5;
    if (quantidade > 0) {
        printf("%d cedulas de R$5\n", quantidade);
        valor %= 5;
    }

    quantidade = valor/2;
    if (quantidade > 0) {
        printf("%d cedulas de R$2\n", quantidade);
        valor %= 2;
    }

    quantidade = valor/1;
    if (quantidade > 0) {
        printf ("%d moedas de R$1\n", quantidade);
        valor %= 1;
    }
return 0;
}