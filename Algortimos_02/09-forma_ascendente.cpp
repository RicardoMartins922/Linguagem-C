#include<stdio.h>
#include<locale.h>

float numeroA = 0.00, numeroB = 0.00, numeroC = 0.00;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira um n�mero: ");
	scanf("%f", &numeroA);
	printf("Insira um n�mero: ");
	scanf("%f", &numeroB);
	printf("Insira um n�mero: ");
	scanf("%f", &numeroC);
	
	if(numeroA > numeroB && numeroB > numeroC){
		printf("\nA sequ�ncia na forma ascendente dos n�mero �: %.2f ; %.2f ; %.2f", numeroC, numeroB, numeroA);	
	}else if(numeroA > numeroC && numeroC > numeroB){
		printf("\nA sequ�ncia na forma ascendente dos n�mero �: %.2f ; %.2f ; %.2f", numeroB, numeroC, numeroA);	
	}else if(numeroB > numeroA && numeroA > numeroC){
		printf("\nA sequ�ncia na forma ascendente dos n�mero �: %.2f ; %.2f ; %.2f", numeroC, numeroA, numeroB);	
	}else if(numeroB > numeroC && numeroC > numeroA){
		printf("\nA sequ�ncia na forma ascendente dos n�mero �: %.2f ; %.2f ; %.2f", numeroA, numeroC, numeroB);	
	}else if(numeroC > numeroA && numeroA > numeroB){
		printf("\nA sequ�ncia na forma ascendente dos n�mero �: %.2f ; %.2f ; %.2f", numeroB, numeroA, numeroC);	
	}else if(numeroC > numeroB && numeroB > numeroA){
		printf("\nA sequ�ncia na forma ascendente dos n�mero �: %.2f ; %.2f ; %.2f", numeroA, numeroB, numeroC);	
	}else if(numeroA == numeroB || numeroA == numeroC || numeroB == numeroC ){
		printf("\nN�o � poss�vel formar uma sequ�ncia, pois os n�meros s�o iguais.");
	}
	
	return 0;
}
