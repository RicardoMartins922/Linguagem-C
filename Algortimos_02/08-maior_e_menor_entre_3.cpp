#include<stdio.h>
#include<locale.h>

int numeroA = 0, numeroB = 0, numeroC = 0;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um número inteiro: ");
	scanf("%d", &numeroA);
	printf("Insira um número inteiro: ");
	scanf("%d", &numeroB);
	printf("Insira um número inteiro: ");
	scanf("%d", &numeroC);
	
	/* Abaixo fica a seção na qual os três números são diferentes */
	
	if((numeroA > numeroB && numeroA > numeroC) && numeroB > numeroC){
		printf("\nO número com o maior valor é: %d", numeroA);
		printf("\nO número com o menor valor é: %d", numeroC);
	}else if((numeroA > numeroB && numeroA > numeroC) && numeroC > numeroB){
		printf("\nO número com o maior valor é: %d", numeroA);
		printf("\nO número com o menor valor é: %d", numeroB);
	}else if((numeroB > numeroA && numeroB > numeroC) && numeroA > numeroC){
		printf("\nO número com o maior valor é: %d", numeroB);
		printf("\nO número com o menor valor é: %d", numeroC);
	}else if((numeroB > numeroA && numeroB > numeroC) && numeroC > numeroA){
		printf("\nO número com o maior valor é: %d", numeroB);
		printf("\nO número com o menor valor é: %d", numeroA);
	}else if((numeroC > numeroA && numeroC > numeroB) && numeroA > numeroB){
		printf("\nO número com o maior valor é: %d", numeroC);
		printf("\nO número com o menor valor é: %d", numeroB);
	}else if((numeroC > numeroA && numeroC > numeroB) && numeroB > numeroA){
		printf("\nO número com o maior valor é: %d", numeroC);
		printf("\nO número com o menor valor é: %d", numeroA);
	}
	/* Abaixo fica a seção na qual os três números são iguais */
	else if(numeroA == numeroB && numeroA == numeroC){
		printf("\nOs números informados são iguais.\nIsto é, eles são iguais a: %d", numeroA);
	}
	/* Abaixo fica a seção na qual dois dos números são iguais */
	else if(numeroA == numeroB && numeroA > numeroC){
		printf("\nO número com o maior valor é: %d", numeroA);
		printf("\nO número com o menor valor é: %d", numeroC);
	}else if(numeroA == numeroB && numeroA < numeroC){
		printf("\nO número com o maior valor é: %d", numeroC);
		printf("\nO número com o menor valor é: %d", numeroA);
	}else if(numeroB == numeroA && numeroB > numeroC){
		printf("\nO número com o maior valor é: %d", numeroB);
		printf("\nO número com o menor valor é: %d", numeroC);
	}else if(numeroB == numeroA && numeroB < numeroC){
		printf("\nO número com o maior valor é: %d", numeroC);
		printf("\nO número com o menor valor é: %d", numeroB);
	}else if(numeroC == numeroA && numeroC > numeroB){
		printf("\nO número com o maior valor é: %d", numeroC);
		printf("\nO número com o menor valor é: %d", numeroB);
	}else if(numeroC == numeroA && numeroC < numeroB){
		printf("\nO número com o maior valor é: %d", numeroB);
		printf("\nO número com o menor valor é: %d", numeroC);
	}else if(numeroB == numeroC && numeroB > numeroA){
		printf("\nO número com o maior valor é: %d", numeroB);
		printf("\nO número com o menor valor é: %d", numeroA);
	}else if(numeroB == numeroC && numeroB < numeroA){
		printf("\nO número com o maior valor é: %d", numeroA);
		printf("\nO número com o menor valor é: %d", numeroB);
	}
		
	return 0;
}
