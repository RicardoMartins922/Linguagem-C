#include<stdio.h>
#include<locale.h>

int numero = 0.00;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um n�mero inteiro: ");
	scanf("%d", &numero);
	
	if(numero % 3 == 0){
		printf("\nO n�mero informado � m�ltiplo de 3.\n");
	}else{
		printf("\nO n�mero informado n�o � m�ltiplo de 3.\n");
	}
	
	return 0;
}
