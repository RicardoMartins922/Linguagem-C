#include<stdio.h>
#include<locale.h>

int numero = 0.00;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um n�mero inteiro: ");
	scanf("%d", &numero);
	
	numero = numero%2;
	
	if(numero == 0){
		printf("\nO n�mero informado � par.\n");
	}else if(numero == 1){
		printf("\nO n�mero informado � impar.\n");
	}
	
	return 0;
}
