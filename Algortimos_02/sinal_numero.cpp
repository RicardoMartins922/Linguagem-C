#include<stdio.h>
#include<locale.h>

float numero = 0.00;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um número: ");
	scanf("%f", &numero);
	
	if(numero <= -1){
		printf("\nO número informado é negativo.\n");
	}else if( numero == 0){
		printf("\nO número informado é nulo.\n");
	}else{
		printf("\nO número informado é positivo\n.");
	}
	
	return 0;
}
