#include<stdio.h>
#include<locale.h>

int numeroA = 0, numeroB = 0, numeroC = 0;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um n�mero inteiro: ");
	scanf("%d", &numeroA);
	printf("Insira um n�mero inteiro: ");
	scanf("%d", &numeroB);
	printf("Insira um n�mero inteiro: ");
	scanf("%d", &numeroC);
	
	/* Abaixo fica a se��o na qual os tr�s n�meros s�o diferentes */
	
	if((numeroA > numeroB && numeroA > numeroC) && numeroB > numeroC){
		printf("\nO n�mero com o maior valor �: %d", numeroA);
		printf("\nO n�mero com o menor valor �: %d", numeroC);
	}else if((numeroA > numeroB && numeroA > numeroC) && numeroC > numeroB){
		printf("\nO n�mero com o maior valor �: %d", numeroA);
		printf("\nO n�mero com o menor valor �: %d", numeroB);
	}else if((numeroB > numeroA && numeroB > numeroC) && numeroA > numeroC){
		printf("\nO n�mero com o maior valor �: %d", numeroB);
		printf("\nO n�mero com o menor valor �: %d", numeroC);
	}else if((numeroB > numeroA && numeroB > numeroC) && numeroC > numeroA){
		printf("\nO n�mero com o maior valor �: %d", numeroB);
		printf("\nO n�mero com o menor valor �: %d", numeroA);
	}else if((numeroC > numeroA && numeroC > numeroB) && numeroA > numeroB){
		printf("\nO n�mero com o maior valor �: %d", numeroC);
		printf("\nO n�mero com o menor valor �: %d", numeroB);
	}else if((numeroC > numeroA && numeroC > numeroB) && numeroB > numeroA){
		printf("\nO n�mero com o maior valor �: %d", numeroC);
		printf("\nO n�mero com o menor valor �: %d", numeroA);
	}
	/* Abaixo fica a se��o na qual os tr�s n�meros s�o iguais */
	else if(numeroA == numeroB && numeroA == numeroC){
		printf("\nOs n�meros informados s�o iguais.\nIsto �, eles s�o iguais a: %d", numeroA);
	}
	/* Abaixo fica a se��o na qual dois dos n�meros s�o iguais */
	else if(numeroA == numeroB && numeroA > numeroC){
		printf("\nO n�mero com o maior valor �: %d", numeroA);
		printf("\nO n�mero com o menor valor �: %d", numeroC);
	}else if(numeroA == numeroB && numeroA < numeroC){
		printf("\nO n�mero com o maior valor �: %d", numeroC);
		printf("\nO n�mero com o menor valor �: %d", numeroA);
	}else if(numeroB == numeroA && numeroB > numeroC){
		printf("\nO n�mero com o maior valor �: %d", numeroB);
		printf("\nO n�mero com o menor valor �: %d", numeroC);
	}else if(numeroB == numeroA && numeroB < numeroC){
		printf("\nO n�mero com o maior valor �: %d", numeroC);
		printf("\nO n�mero com o menor valor �: %d", numeroB);
	}else if(numeroC == numeroA && numeroC > numeroB){
		printf("\nO n�mero com o maior valor �: %d", numeroC);
		printf("\nO n�mero com o menor valor �: %d", numeroB);
	}else if(numeroC == numeroA && numeroC < numeroB){
		printf("\nO n�mero com o maior valor �: %d", numeroB);
		printf("\nO n�mero com o menor valor �: %d", numeroC);
	}else if(numeroB == numeroC && numeroB > numeroA){
		printf("\nO n�mero com o maior valor �: %d", numeroB);
		printf("\nO n�mero com o menor valor �: %d", numeroA);
	}else if(numeroB == numeroC && numeroB < numeroA){
		printf("\nO n�mero com o maior valor �: %d", numeroA);
		printf("\nO n�mero com o menor valor �: %d", numeroB);
	}
		
	return 0;
}
