#include <stdio.h>
int main(){
	int n1, n2, soma;
	
    printf("Digite um numero: ");
	scanf("%d", &n1);
	
	printf("Digite outro numero:");
	scanf("%d", &n2);
	
	soma =  n1 * n2;
	
	printf("O resultado e: %d\n", soma);
	return 0;
}