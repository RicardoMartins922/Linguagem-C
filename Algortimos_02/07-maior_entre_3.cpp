#include<stdio.h>
#include<locale.h>

float numeroA = 0.00, numeroB = 0.00, numeroC = 0.00;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um n�mero: ");
	scanf("%f", &numeroA);
	printf("Insira outro n�mero: ");
	scanf("%f", &numeroB);
	printf("Insira mais um n�mero: ");
	scanf("%f", &numeroC);
	
	if(numeroA > numeroB && numeroA > numeroC){
		printf("\nO n�mero com maior valor �:%.2f", numeroA);
	}else if(numeroB > numeroA && numeroB > numeroC){
		printf("\nO n�mero com maior valor �:%.2f", numeroB);
	}else if(numeroC > numeroA && numeroC > numeroB){
		printf("\nO n�mero com maior valor �:%.2f", numeroC);
	}
	
	return 0;
}
