#include<stdio.h>
#include<locale.h>

float numero = 0.00;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um n�mero: ");
	scanf("%f", &numero);
	
	if(numero < 0) {
		printf("\nO n�mero informado � negativo.\n");
	} else if( numero > 0) {
		printf("\nO n�mero informado � positivo.\n");
	} else {
		printf("\nO n�mero informado � nulo\n.");
	}
	
	return 0;
}
