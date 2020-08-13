#include<stdio.h>
#include<locale.h>

int numero = 0.00;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um número inteiro:\n");
	scanf("%d", &numero);
	
	if(numero % 2 == 0) {
		printf("\nO número informado é par.\n");
	} else {
		printf("\nO número informado é ímpar.\n");
	}
	
	return 0;
}
