#include<stdio.h>
#include<locale.h>

int numero = 0.00;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um n�mero inteiro:\n");
	scanf("%d", &numero);
	
	if(numero % 2 == 0) {
		printf("\nO n�mero informado � par.\n");
	} else {
		printf("\nO n�mero informado � �mpar.\n");
	}
	
	return 0;
}
