#include<stdio.h>
#include<locale.h>

float numero = 0.00;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um número: ");
	scanf("%f", &numero);
	
	if(numero >= 0 && numero <= 100){
		printf("\nO número digitado estar compreendido entre 0 e 100.");
	}else{
		printf("\nO número digitado não estar compreendido entre 0 e 100.");
	}
	
	return 0;
}
