#include<stdio.h>
#include<locale.h>

float numero = 0.00;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um n�mero: ");
	scanf("%f", &numero);
	
	if(numero >= 0 && numero <= 100){
		printf("\nO n�mero digitado estar compreendido entre 0 e 100.");
	}else{
		printf("\nO n�mero digitado n�o estar compreendido entre 0 e 100.");
	}
	
	return 0;
}
