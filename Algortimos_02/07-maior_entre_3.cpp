#include<stdio.h>
#include<locale.h>

float numeroA = 0.00, numeroB = 0.00, numeroC = 0.00;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um número: ");
	scanf("%f", &numeroA);
	printf("Insira outro número: ");
	scanf("%f", &numeroB);
	printf("Insira mais um número: ");
	scanf("%f", &numeroC);
	
	if(numeroA > numeroB && numeroA > numeroC){
		printf("\nO número com maior valor é:%.2f", numeroA);
	}else if(numeroB > numeroA && numeroB > numeroC){
		printf("\nO número com maior valor é:%.2f", numeroB);
	}else if(numeroC > numeroA && numeroC > numeroB){
		printf("\nO número com maior valor é:%.2f", numeroC);
	}
	
	return 0;
}
