#include<stdio.h>
#include<locale.h>

int numero = 0.00;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um número inteiro: ");
	scanf("%d", &numero);
	
	numero = numero%3;
	
	if(numero == 0){
		printf("\nO número informado é múltiplo de 3.\n");
	}else{
		printf("\nO número informado não é múltiplo de 3.\n");
	}
	
	return 0;
}
