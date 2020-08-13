#include<stdio.h>
#include<locale.h>

float numeroA = 0.00, numeroB = 0.00, numeroC = 0.00;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um número: ");
	scanf("%f", &numeroA);
	printf("Insira um número: ");
	scanf("%f", &numeroB);
	printf("Insira um número: ");
	scanf("%f", &numeroC);
	
	if(numeroA > numeroB && numeroB > numeroC){
		printf("\nA sequência na forma ascendente dos número é: %.2f ; %.2f ; %.2f", numeroC, numeroB, numeroA);	
	}else if(numeroA > numeroC && numeroC > numeroB){
		printf("\nA sequência na forma ascendente dos número é: %.2f ; %.2f ; %.2f", numeroB, numeroC, numeroA);	
	}else if(numeroB > numeroA && numeroA > numeroC){
		printf("\nA sequência na forma ascendente dos número é: %.2f ; %.2f ; %.2f", numeroC, numeroA, numeroB);	
	}else if(numeroB > numeroC && numeroC > numeroA){
		printf("\nA sequência na forma ascendente dos número é: %.2f ; %.2f ; %.2f", numeroA, numeroC, numeroB);	
	}else if(numeroC > numeroA && numeroA > numeroB){
		printf("\nA sequência na forma ascendente dos número é: %.2f ; %.2f ; %.2f", numeroB, numeroA, numeroC);	
	}else if(numeroC > numeroB && numeroB > numeroA){
		printf("\nA sequência na forma ascendente dos número é: %.2f ; %.2f ; %.2f", numeroA, numeroB, numeroC);	
	}else if(numeroA == numeroB || numeroA == numeroC || numeroB == numeroC ){
		printf("\nNão é possível formar uma sequência, pois os números são iguais.");
	}
	
	return 0;
}
